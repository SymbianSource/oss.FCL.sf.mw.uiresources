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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0000ba19 };

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
0x1eed,	// (0x0000d906) Screen

0x1ef7,	// (0x0000d910) application_window

0x1f26,	// (0x0000d93f) area_bottom_pane_ParamLimits

0x1f26,	// (0x0000d93f) area_bottom_pane

0x1f59,	// (0x0000d972) area_top_pane_ParamLimits

0x1f59,	// (0x0000d972) area_top_pane

0x9bec,	// (0x00015605) call_video_uplink_pane_ParamLimits

0x9bec,	// (0x00015605) call_video_uplink_pane

0x1fca,	// (0x0000d9e3) main_pane_ParamLimits

0x1fca,	// (0x0000d9e3) main_pane

0xc717,	// (0x00018130) context_pane

0x4bf8,	// (0x00010611) navi_pane

0x4c21,	// (0x0001063a) popup_cale_events_window_ParamLimits

0x4c21,	// (0x0001063a) popup_cale_events_window

0xc72a,	// (0x00018143) popup_mup_playback_window

0x4c39,	// (0x00010652) signal_pane

0xa373,	// (0x00015d8c) main_browser_pane

0xb1d8,	// (0x00016bf1) main_burst_pane

0x9c08,	// (0x00015621) main_calc_pane

0xb1d8,	// (0x00016bf1) main_cale_day_pane

0xa53b,	// (0x00015f54) main_cale_month_pane

0xb1d8,	// (0x00016bf1) main_cale_week_pane

0xb1d8,	// (0x00016bf1) main_call_pane

0xa027,	// (0x00015a40) main_call_poc_pane

0xb1d8,	// (0x00016bf1) main_camera_pane

0xb1d8,	// (0x00016bf1) main_chi_dic_pane

0xafd7,	// (0x000169f0) main_clock_pane

0xa027,	// (0x00015a40) main_fmradio_pane

0xb1d8,	// (0x00016bf1) main_graph_messa_pane

0xa027,	// (0x00015a40) main_help_pane

0xa373,	// (0x00015d8c) main_im_pane

0xa282,	// (0x00015c9b) main_image_pane_ParamLimits

0xa282,	// (0x00015c9b) main_image_pane

0xa027,	// (0x00015a40) main_location2_pane

0xb1d8,	// (0x00016bf1) main_location_pane

0xa027,	// (0x00015a40) main_messa_pane

0xa027,	// (0x00015a40) main_mp2_pane

0xb1d8,	// (0x00016bf1) main_mp_pane

0xa027,	// (0x00015a40) main_msg_pane

0xa027,	// (0x00015a40) main_mup_eq_pane

0xa027,	// (0x00015a40) main_mup_pane

0xb1d8,	// (0x00016bf1) main_notes_pane

0xa027,	// (0x00015a40) main_pec_pane

0xa027,	// (0x00015a40) main_phob_pane

0xa027,	// (0x00015a40) main_pinb_pane

0xa027,	// (0x00015a40) main_postcard_pane

0xa027,	// (0x00015a40) main_qdial_pane

0xb1d8,	// (0x00016bf1) main_skin_pane

0xa027,	// (0x00015a40) main_smil2_pane

0xb1d8,	// (0x00016bf1) main_smil_pane

0xb1d8,	// (0x00016bf1) main_video_pane

0xb1d8,	// (0x00016bf1) main_video_tele_pane

0xa282,	// (0x00015c9b) main_viewer_pane_ParamLimits

0xa282,	// (0x00015c9b) main_viewer_pane

0xb1d8,	// (0x00016bf1) main_vorec_pane

0x49d8,	// (0x000103f1) popup_blid_sat_info_window_ParamLimits

0x49d8,	// (0x000103f1) popup_blid_sat_info_window

0x4a2e,	// (0x00010447) popup_dyc_status_message_window_ParamLimits

0x4a2e,	// (0x00010447) popup_dyc_status_message_window

0x4a44,	// (0x0001045d) popup_grid_large_graphic_window_ParamLimits

0x4a44,	// (0x0001045d) popup_grid_large_graphic_window

0x4ada,	// (0x000104f3) popup_loc_request_window_ParamLimits

0x4ada,	// (0x000104f3) popup_loc_request_window

0x4bd2,	// (0x000105eb) popup_wml_address_window_ParamLimits

0x4bd2,	// (0x000105eb) popup_wml_address_window

0x482e,	// (0x00010247) call_muted_g1

0x4553,	// (0x0000ff6c) popup_call_audio_conf_window_ParamLimits

0x4553,	// (0x0000ff6c) popup_call_audio_conf_window

0x483e,	// (0x00010257) popup_call_audio_first_window_ParamLimits

0x483e,	// (0x00010257) popup_call_audio_first_window

0x489c,	// (0x000102b5) popup_call_audio_in_window_ParamLimits

0x489c,	// (0x000102b5) popup_call_audio_in_window

0x48c8,	// (0x000102e1) popup_call_audio_out_window_ParamLimits

0x48c8,	// (0x000102e1) popup_call_audio_out_window

0x48f6,	// (0x0001030f) popup_call_audio_second_window_ParamLimits

0x48f6,	// (0x0001030f) popup_call_audio_second_window

0x493c,	// (0x00010355) popup_call_audio_wait_window_ParamLimits

0x493c,	// (0x00010355) popup_call_audio_wait_window

0x496f,	// (0x00010388) popup_number_entry_window_ParamLimits

0x496f,	// (0x00010388) popup_number_entry_window

0x9c16,	// (0x0001562f) bg_popup_call_pane_cp05_ParamLimits

0x9c16,	// (0x0001562f) bg_popup_call_pane_cp05

0x9c36,	// (0x0001564f) popup_number_entry_window_t1

0x9c49,	// (0x00015662) popup_number_entry_window_t2

0x9c5b,	// (0x00015674) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0001ab05) popup_number_entry_window_t

0x9c6d,	// (0x00015686) text_title_cp2

0x9c80,	// (0x00015699) bg_popup_call_pane_cp_ParamLimits

0x9c80,	// (0x00015699) bg_popup_call_pane_cp

0x9c8e,	// (0x000156a7) call_thumbnail_pane

0x9c96,	// (0x000156af) popup_call_audio_in_window_g1_ParamLimits

0x9c96,	// (0x000156af) popup_call_audio_in_window_g1

0x9ca2,	// (0x000156bb) popup_call_audio_in_window_g2_ParamLimits

0x9ca2,	// (0x000156bb) popup_call_audio_in_window_g2

0x9cae,	// (0x000156c7) popup_call_audio_in_window_g3_ParamLimits

0x9cae,	// (0x000156c7) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0001ab0e) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0001ab0e) popup_call_audio_in_window_g

0x9cba,	// (0x000156d3) popup_call_audio_in_window_t1_ParamLimits

0x9cba,	// (0x000156d3) popup_call_audio_in_window_t1

0x9cd5,	// (0x000156ee) popup_call_audio_in_window_t2_ParamLimits

0x9cd5,	// (0x000156ee) popup_call_audio_in_window_t2

0x9cf0,	// (0x00015709) popup_call_audio_in_window_t3_ParamLimits

0x9cf0,	// (0x00015709) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0001ab15) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0001ab15) popup_call_audio_in_window_t

0x9c80,	// (0x00015699) bg_popup_call_pane_cp01_ParamLimits

0x9c80,	// (0x00015699) bg_popup_call_pane_cp01

0x9c8e,	// (0x000156a7) call_thumbnail_pane_cp02

0x9d03,	// (0x0001571c) call_type_pane_cp022

0x9d0b,	// (0x00015724) popup_call_audio_out_window_g1_ParamLimits

0x9d0b,	// (0x00015724) popup_call_audio_out_window_g1

0x9d1d,	// (0x00015736) popup_call_audio_out_window_g2_ParamLimits

0x9d1d,	// (0x00015736) popup_call_audio_out_window_g2

0x9d29,	// (0x00015742) popup_call_audio_out_window_g3_ParamLimits

0x9d29,	// (0x00015742) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0001ab1c) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0001ab1c) popup_call_audio_out_window_g

0x9d3b,	// (0x00015754) popup_call_audio_out_window_t1_ParamLimits

0x9d3b,	// (0x00015754) popup_call_audio_out_window_t1

0x9d53,	// (0x0001576c) popup_call_audio_out_window_t2_ParamLimits

0x9d53,	// (0x0001576c) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0001ab23) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0001ab23) popup_call_audio_out_window_t

0x9d68,	// (0x00015781) bg_popup_call_pane_ParamLimits

0x9d68,	// (0x00015781) bg_popup_call_pane

0x215c,	// (0x0000db75) call_thumbnail_pane_cp_ParamLimits

0x215c,	// (0x0000db75) call_thumbnail_pane_cp

0x9dec,	// (0x00015805) call_type_pane_cp01_ParamLimits

0x9dec,	// (0x00015805) call_type_pane_cp01

0x9e30,	// (0x00015849) popup_call_audio_first_window_g1_ParamLimits

0x9e30,	// (0x00015849) popup_call_audio_first_window_g1

0x9e7c,	// (0x00015895) popup_call_audio_first_window_g2_ParamLimits

0x9e7c,	// (0x00015895) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0001ab28) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0001ab28) popup_call_audio_first_window_g

0x9ec0,	// (0x000158d9) popup_call_audio_first_window_t1_ParamLimits

0x9ec0,	// (0x000158d9) popup_call_audio_first_window_t1

0x9f6c,	// (0x00015985) popup_call_audio_first_window_t4_ParamLimits

0x9f6c,	// (0x00015985) popup_call_audio_first_window_t4

0x9ff8,	// (0x00015a11) popup_call_audio_first_window_t5_ParamLimits

0x9ff8,	// (0x00015a11) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0001ab2d) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0001ab2d) popup_call_audio_first_window_t

0xa027,	// (0x00015a40) bg_popup_call_pane_cp02

0xa031,	// (0x00015a4a) call_type_pane_cp023

0xa039,	// (0x00015a52) popup_call_audio_wait_window_g1

0xa041,	// (0x00015a5a) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001ab34) popup_call_audio_wait_window_g

0xa049,	// (0x00015a62) popup_call_audio_wait_window_t3

0xa057,	// (0x00015a70) bg_popup_call_pane_cp03_ParamLimits

0xa057,	// (0x00015a70) bg_popup_call_pane_cp03

0xa0b7,	// (0x00015ad0) call_thumbnail_pane_cp011_ParamLimits

0xa0b7,	// (0x00015ad0) call_thumbnail_pane_cp011

0xa0c3,	// (0x00015adc) call_type_pane_cp034_ParamLimits

0xa0c3,	// (0x00015adc) call_type_pane_cp034

0xa0ff,	// (0x00015b18) popup_call_audio_second_window_g1_ParamLimits

0xa0ff,	// (0x00015b18) popup_call_audio_second_window_g1

0xa13b,	// (0x00015b54) popup_call_audio_second_window_g2_ParamLimits

0xa13b,	// (0x00015b54) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0001ab39) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0001ab39) popup_call_audio_second_window_g

0xa177,	// (0x00015b90) popup_call_audio_second_window_t1_ParamLimits

0xa177,	// (0x00015b90) popup_call_audio_second_window_t1

0xa1f8,	// (0x00015c11) popup_call_audio_second_window_t2_ParamLimits

0xa1f8,	// (0x00015c11) popup_call_audio_second_window_t2

0xa22e,	// (0x00015c47) popup_call_audio_second_window_t3_ParamLimits

0xa22e,	// (0x00015c47) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0001ab3e) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0001ab3e) popup_call_audio_second_window_t

0xa027,	// (0x00015a40) bg_popup_call_pane_cp04

0xa264,	// (0x00015c7d) list_conf_pane

0xa26c,	// (0x00015c85) popup_call_audio_conf_window_t1

0xa27a,	// (0x00015c93) call_thumbnail_pane_g1

0xa282,	// (0x00015c9b) bg_pinb_pane_ParamLimits

0xa282,	// (0x00015c9b) bg_pinb_pane

0xa290,	// (0x00015ca9) find_pinb_pane

0xa299,	// (0x00015cb2) listscroll_pinb_pane_ParamLimits

0xa299,	// (0x00015cb2) listscroll_pinb_pane

0xa2a8,	// (0x00015cc1) pinb_bg_pane_g1

0x2180,	// (0x0000db99) pinb_bg_pane_g2

0x218a,	// (0x0000dba3) pinb_bg_pane_g3

0x2194,	// (0x0000dbad) pinb_bg_pane_g4

0x219e,	// (0x0000dbb7) pinb_bg_pane_g5

0x21a8,	// (0x0000dbc1) pinb_bg_pane_g6

0x21b1,	// (0x0000dbca) pinb_bg_pane_g7

0x21ba,	// (0x0000dbd3) pinb_bg_pane_g8

0x21c5,	// (0x0000dbde) pinb_bg_pane_g9

0x21cf,	// (0x0000dbe8) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0001ab45) pinb_bg_pane_g

0x21ea,	// (0x0000dc03) grid_pinb_pane

0x21f3,	// (0x0000dc0c) list_pinb_pane

0x21fc,	// (0x0000dc15) scroll_pane_cp01_ParamLimits

0x21fc,	// (0x0000dc15) scroll_pane_cp01

0xa2b2,	// (0x00015ccb) find_pinb_pane_g1_ParamLimits

0xa2b2,	// (0x00015ccb) find_pinb_pane_g1

0xa2ca,	// (0x00015ce3) find_pinb_pane_t1

0xa2dc,	// (0x00015cf5) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0001ab5f) find_pinb_pane_t

0xa2f1,	// (0x00015d0a) input_focus_pane_cp01_ParamLimits

0xa2f1,	// (0x00015d0a) input_focus_pane_cp01

0x220e,	// (0x0000dc27) cell_pinb_pane_ParamLimits

0x220e,	// (0x0000dc27) cell_pinb_pane

0x2229,	// (0x0000dc42) cell_pinb_pane_g1_ParamLimits

0x2229,	// (0x0000dc42) cell_pinb_pane_g1

0x2239,	// (0x0000dc52) cell_pinb_pane_g2_ParamLimits

0x2239,	// (0x0000dc52) cell_pinb_pane_g2

0xa2fd,	// (0x00015d16) cell_pinb_pane_g3_ParamLimits

0xa2fd,	// (0x00015d16) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0001ab64) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0001ab64) cell_pinb_pane_g

0xa027,	// (0x00015a40) grid_highlight_pane_cp01

0x2245,	// (0x0000dc5e) list_pinb_item_pane_ParamLimits

0x2245,	// (0x0000dc5e) list_pinb_item_pane

0xa027,	// (0x00015a40) list_highlight_pane_cp02

0x2257,	// (0x0000dc70) list_pinb_item_pane_g1_ParamLimits

0x2257,	// (0x0000dc70) list_pinb_item_pane_g1

0x2264,	// (0x0000dc7d) list_pinb_item_pane_g2_ParamLimits

0x2264,	// (0x0000dc7d) list_pinb_item_pane_g2

0x2270,	// (0x0000dc89) list_pinb_item_pane_g3_ParamLimits

0x2270,	// (0x0000dc89) list_pinb_item_pane_g3

0x2281,	// (0x0000dc9a) list_pinb_item_pane_g4_ParamLimits

0x2281,	// (0x0000dc9a) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0001ab6b) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0001ab6b) list_pinb_item_pane_g

0x228d,	// (0x0000dca6) list_pinb_item_pane_t1_ParamLimits

0x228d,	// (0x0000dca6) list_pinb_item_pane_t1

0x22c2,	// (0x0000dcdb) calc_display_pane

0x22de,	// (0x0000dcf7) calc_paper_pane

0x22ff,	// (0x0000dd18) grid_calc_pane

0xa027,	// (0x00015a40) bg_list_pane_cp01

0x231b,	// (0x0000dd34) clock_g1

0x2323,	// (0x0000dd3c) clock_g2

0x0001,

0xf15b,	// (0x0001ab74) clock_g

0x232b,	// (0x0000dd44) clock_t1_ParamLimits

0x232b,	// (0x0000dd44) clock_t1

0x2340,	// (0x0000dd59) clock_t2_ParamLimits

0x2340,	// (0x0000dd59) clock_t2

0x2352,	// (0x0000dd6b) clock_t3_ParamLimits

0x2352,	// (0x0000dd6b) clock_t3

0x2364,	// (0x0000dd7d) clock_t4_ParamLimits

0x2364,	// (0x0000dd7d) clock_t4

0x2376,	// (0x0000dd8f) clock_t5_ParamLimits

0x2376,	// (0x0000dd8f) clock_t5

0x238b,	// (0x0000dda4) clock_t6_ParamLimits

0x238b,	// (0x0000dda4) clock_t6

0x239d,	// (0x0000ddb6) clock_t7_ParamLimits

0x239d,	// (0x0000ddb6) clock_t7

0x23af,	// (0x0000ddc8) clock_t8_ParamLimits

0x23af,	// (0x0000ddc8) clock_t8

0x23c1,	// (0x0000ddda) clock_t9_ParamLimits

0x23c1,	// (0x0000ddda) clock_t9

0x0008,

0xf160,	// (0x0001ab79) clock_t_ParamLimits

0xf160,	// (0x0001ab79) clock_t

0xa311,	// (0x00015d2a) popup_clock_analogue_window_cp02

0xa311,	// (0x00015d2a) popup_clock_digital_window_cp01

0xa319,	// (0x00015d32) listscroll_help_pane

0xa027,	// (0x00015a40) phob_pre_status_pane

0xa323,	// (0x00015d3c) grid_qdial_pane

0xa027,	// (0x00015a40) listscroll_mce_pane

0xa32d,	// (0x00015d46) bg_notes_pane

0xa337,	// (0x00015d50) list_notes_pane

0x23d3,	// (0x0000ddec) scroll_pane_cp06

0xa341,	// (0x00015d5a) bg_calc_paper_pane

0xa359,	// (0x00015d72) list_calc_pane

0xa373,	// (0x00015d8c) bg_calc_display_pane

0xa37f,	// (0x00015d98) calc_display_pane_t1

0xa394,	// (0x00015dad) calc_display_pane_t2

0xa3a9,	// (0x00015dc2) calc_display_pane_t3

0x0002,

0xf173,	// (0x0001ab8c) calc_display_pane_t

0x23de,	// (0x0000ddf7) cell_calc_pane_ParamLimits

0x23de,	// (0x0000ddf7) cell_calc_pane

0xa3bb,	// (0x00015dd4) bg_calc_paper_pane_g1

0xa3c7,	// (0x00015de0) bg_calc_paper_pane_g2

0xa3d3,	// (0x00015dec) bg_calc_paper_pane_g3

0xa3df,	// (0x00015df8) bg_calc_paper_pane_g4

0xa3eb,	// (0x00015e04) bg_calc_paper_pane_g5

0x2411,	// (0x0000de2a) bg_calc_paper_pane_g6

0x2420,	// (0x0000de39) bg_calc_paper_pane_g7

0x242f,	// (0x0000de48) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0001ab93) bg_calc_paper_pane_g

0x243e,	// (0x0000de57) calc_bg_paper_pane_g9

0x244d,	// (0x0000de66) list_calc_item_pane_ParamLimits

0x244d,	// (0x0000de66) list_calc_item_pane

0xa3f7,	// (0x00015e10) list_calc_item_pane_g1

0xa404,	// (0x00015e1d) list_calc_item_pane_t1_ParamLimits

0xa404,	// (0x00015e1d) list_calc_item_pane_t1

0x2461,	// (0x0000de7a) list_calc_item_pane_t2_ParamLimits

0x2461,	// (0x0000de7a) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0001aba4) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0001aba4) list_calc_item_pane_t

0xa416,	// (0x00015e2f) cell_calc_pane_g1

0xa420,	// (0x00015e39) grid_highlight_pane_cp02

0xa442,	// (0x00015e5b) bg_calc_display_pane_g1

0xa44b,	// (0x00015e64) bg_calc_display_pane_g2

0xa455,	// (0x00015e6e) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0001abae) bg_calc_display_pane_g

0x248f,	// (0x0000dea8) cell_qdial_pane_ParamLimits

0x248f,	// (0x0000dea8) cell_qdial_pane

0x24a1,	// (0x0000deba) cell_qdial_pane_g1_ParamLimits

0x24a1,	// (0x0000deba) cell_qdial_pane_g1

0x24b7,	// (0x0000ded0) cell_qdial_pane_g2_ParamLimits

0x24b7,	// (0x0000ded0) cell_qdial_pane_g2

0xa45e,	// (0x00015e77) cell_qdial_pane_g3_ParamLimits

0xa45e,	// (0x00015e77) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0001abb5) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0001abb5) cell_qdial_pane_g

0x24de,	// (0x0000def7) cell_qdial_pane_t1_ParamLimits

0x24de,	// (0x0000def7) cell_qdial_pane_t1

0x24f6,	// (0x0000df0f) cell_qdial_pane_t2_ParamLimits

0x24f6,	// (0x0000df0f) cell_qdial_pane_t2

0x2509,	// (0x0000df22) cell_qdial_pane_t3_ParamLimits

0x2509,	// (0x0000df22) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0001abbe) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0001abbe) cell_qdial_pane_t

0xa027,	// (0x00015a40) grid_highlight_pane_cp04

0xa46a,	// (0x00015e83) thumbnail_qdial_pane_ParamLimits

0xa46a,	// (0x00015e83) thumbnail_qdial_pane

0xa4c6,	// (0x00015edf) list_help_pane

0xa4d0,	// (0x00015ee9) scroll_pane_cp02

0x251c,	// (0x0000df35) help_list_pane_t1_ParamLimits

0x251c,	// (0x0000df35) help_list_pane_t1

0xa4d9,	// (0x00015ef2) bg_notes_pane_g2

0xa4e1,	// (0x00015efa) bg_notes_pane_g3

0xa4e9,	// (0x00015f02) notes_bg_pane_g1

0xa4f1,	// (0x00015f0a) notes_bg_pane_g4

0xa4f9,	// (0x00015f12) notes_bg_pane_g5

0xa501,	// (0x00015f1a) notes_bg_pane_g6

0xa509,	// (0x00015f22) notes_bg_pane_g7

0xa511,	// (0x00015f2a) notes_bg_pane_g8

0xa519,	// (0x00015f32) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0001abdc) notes_bg_pane_g

0xceef,	// (0x00018908) list_notes_text_pane_ParamLimits

0xceef,	// (0x00018908) list_notes_text_pane

0xa521,	// (0x00015f3a) list_notes_text_pane_g1

0x2538,	// (0x0000df51) list_notes_text_pane_t1

0xa53b,	// (0x00015f54) listscroll_cale_week_pane

0x2561,	// (0x0000df7a) bg_cale_heading_pane

0xa54a,	// (0x00015f63) bg_cale_pane_cp01

0x2575,	// (0x0000df8e) cale_week_corner_pane

0x258b,	// (0x0000dfa4) cale_week_day_heading_pane

0x259f,	// (0x0000dfb8) cale_week_scroll_pane_g1

0x25b0,	// (0x0000dfc9) cale_week_scroll_pane_g2

0x25c1,	// (0x0000dfda) cale_week_scroll_pane_g3

0x25d2,	// (0x0000dfeb) cale_week_scroll_pane_g4

0x25e3,	// (0x0000dffc) cale_week_scroll_pane_g5

0x25f4,	// (0x0000e00d) cale_week_scroll_pane_g6

0x2605,	// (0x0000e01e) cale_week_scroll_pane_g7

0x2616,	// (0x0000e02f) cale_week_scroll_pane_g8

0x2629,	// (0x0000e042) cale_week_scroll_pane_g9

0x263a,	// (0x0000e053) cale_week_scroll_pane_g10

0x264b,	// (0x0000e064) cale_week_scroll_pane_g11

0x265c,	// (0x0000e075) cale_week_scroll_pane_g12

0x266d,	// (0x0000e086) cale_week_scroll_pane_g13

0x267e,	// (0x0000e097) cale_week_scroll_pane_g14

0x268f,	// (0x0000e0a8) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0001abeb) cale_week_scroll_pane_g

0x26a0,	// (0x0000e0b9) cale_week_time_pane

0x26b3,	// (0x0000e0cc) grid_cale_week_pane

0x26c6,	// (0x0000e0df) scroll_pane_cp08

0x26e0,	// (0x0000e0f9) cell_cale_week_pane_ParamLimits

0x26e0,	// (0x0000e0f9) cell_cale_week_pane

0x271c,	// (0x0000e135) cale_week_day_heading_pane_t1

0x2746,	// (0x0000e15f) cale_week_day_heading_pane_t2

0x2770,	// (0x0000e189) cale_week_day_heading_pane_t3

0x279a,	// (0x0000e1b3) cale_week_day_heading_pane_t4

0x27c4,	// (0x0000e1dd) cale_week_day_heading_pane_t5

0x27ee,	// (0x0000e207) cale_week_day_heading_pane_t6

0x2818,	// (0x0000e231) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0001ac0a) cale_week_day_heading_pane_t

0xa575,	// (0x00015f8e) bg_cale_side_pane

0x2842,	// (0x0000e25b) cale_week_time_pane_t1

0x286e,	// (0x0000e287) cale_week_time_pane_t2

0x289a,	// (0x0000e2b3) cale_week_time_pane_t3

0x28c6,	// (0x0000e2df) cale_week_time_pane_t4

0x28f2,	// (0x0000e30b) cale_week_time_pane_t5

0x291e,	// (0x0000e337) cale_week_time_pane_t6

0x294a,	// (0x0000e363) cale_week_time_pane_t7

0x2976,	// (0x0000e38f) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0001ac19) cale_week_time_pane_t

0x29a2,	// (0x0000e3bb) cell_cale_week_pane_g2

0x29bb,	// (0x0000e3d4) cell_cale_week_pane_g3_ParamLimits

0x29bb,	// (0x0000e3d4) cell_cale_week_pane_g3

0xa583,	// (0x00015f9c) grid_highlight_pane_cp07

0xa58b,	// (0x00015fa4) listscroll_gms_pane

0xa595,	// (0x00015fae) grid_gms_pane

0xa59e,	// (0x00015fb7) listscroll_gms_pane_g1

0xa5a6,	// (0x00015fbf) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0001ac2a) listscroll_gms_pane_g

0x29d3,	// (0x0000e3ec) scroll_pane_cp010

0x29de,	// (0x0000e3f7) cell_gms_pane_ParamLimits

0x29de,	// (0x0000e3f7) cell_gms_pane

0x29ee,	// (0x0000e407) cell_gms_pane_g1

0xa5ae,	// (0x00015fc7) cell_gms_pane_g2

0xa521,	// (0x00015f3a) cell_gms_pane_g3

0xa5b6,	// (0x00015fcf) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0001ac2f) cell_gms_pane_g

0xa5bf,	// (0x00015fd8) grid_highlight_pane_cp09

0x47dc,	// (0x000101f5) phob_pre_status_pane_g1

0x47e4,	// (0x000101fd) phob_pre_status_pane_g2

0x47ec,	// (0x00010205) phob_pre_status_pane_g3

0x47f4,	// (0x0001020d) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x0001b031) phob_pre_status_pane_g

0x4804,	// (0x0001021d) phob_pre_status_pane_t1

0x4812,	// (0x0001022b) phob_pre_status_pane_t2

0x4820,	// (0x00010239) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x0001b03c) phob_pre_status_pane_t

0xa027,	// (0x00015a40) bg_list_pane_cp05

0x29fe,	// (0x0000e417) grid_vorec_pane

0xa5c7,	// (0x00015fe0) vorec_t1

0xa5d5,	// (0x00015fee) vorec_t2

0xa5e3,	// (0x00015ffc) vorec_t3

0xa5f1,	// (0x0001600a) vorec_t4

0xa5ff,	// (0x00016018) vorec_t5

0xa60d,	// (0x00016026) vorec_t6

0x0006,

0xf21f,	// (0x0001ac38) vorec_t

0xa629,	// (0x00016042) wait_bar_pane_cp01

0x2a06,	// (0x0000e41f) cell_vorec_pane_ParamLimits

0x2a06,	// (0x0000e41f) cell_vorec_pane

0xa631,	// (0x0001604a) cell_vorec_pane_g1

0xa027,	// (0x00015a40) grid_highlight_pane_cp05

0x2a2b,	// (0x0000e444) cams_zoom_pane

0x2a3a,	// (0x0000e453) image_vga_pane

0x2a52,	// (0x0000e46b) main_camera_pane_g1

0x2a62,	// (0x0000e47b) main_camera_pane_g2

0x2a72,	// (0x0000e48b) main_camera_pane_g3

0x2a82,	// (0x0000e49b) main_camera_pane_g4

0x2a92,	// (0x0000e4ab) main_camera_pane_g5

0x2aa2,	// (0x0000e4bb) main_camera_pane_g6

0x2ab2,	// (0x0000e4cb) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0001ac47) main_camera_pane_g

0x2ac2,	// (0x0000e4db) main_camera_pane_t1

0x2ad8,	// (0x0000e4f1) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0001ac58) main_camera_pane_t

0x2b0a,	// (0x0000e523) cams_zoom_pane_cp_ParamLimits

0x2b0a,	// (0x0000e523) cams_zoom_pane_cp

0x2b32,	// (0x0000e54b) image_cif_pane_ParamLimits

0x2b32,	// (0x0000e54b) image_cif_pane

0x2b63,	// (0x0000e57c) image_subqcif_pane

0x2b6b,	// (0x0000e584) main_video_pane_g1_ParamLimits

0x2b6b,	// (0x0000e584) main_video_pane_g1

0x2b8f,	// (0x0000e5a8) main_video_pane_g2_ParamLimits

0x2b8f,	// (0x0000e5a8) main_video_pane_g2

0x2bc3,	// (0x0000e5dc) main_video_pane_g3_ParamLimits

0x2bc3,	// (0x0000e5dc) main_video_pane_g3

0x2bf1,	// (0x0000e60a) main_video_pane_g4_ParamLimits

0x2bf1,	// (0x0000e60a) main_video_pane_g4

0x2c1f,	// (0x0000e638) main_video_pane_g5_ParamLimits

0x2c1f,	// (0x0000e638) main_video_pane_g5

0xa647,	// (0x00016060) main_video_pane_g6_ParamLimits

0xa647,	// (0x00016060) main_video_pane_g6

0x0006,

0xf244,	// (0x0001ac5d) main_video_pane_g_ParamLimits

0xf244,	// (0x0001ac5d) main_video_pane_g

0x2c46,	// (0x0000e65f) main_video_pane_t1_ParamLimits

0x2c46,	// (0x0000e65f) main_video_pane_t1

0xa661,	// (0x0001607a) cams_zoom_pane_g1

0xa66a,	// (0x00016083) cams_zoom_pane_g2

0xa673,	// (0x0001608c) cams_zoom_pane_g3

0xa67c,	// (0x00016095) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0001ac6c) cams_zoom_pane_g

0x2ca3,	// (0x0000e6bc) grid_cams_pane

0x2cb8,	// (0x0000e6d1) linegrid_cams_pane

0x2cc9,	// (0x0000e6e2) cell_cams_pane_ParamLimits

0x2cc9,	// (0x0000e6e2) cell_cams_pane

0xa685,	// (0x0001609e) cams_burst_image_pane

0xa68d,	// (0x000160a6) cell_cams_pane_g1

0xa027,	// (0x00015a40) grid_highlight_pane_cp03

0xa416,	// (0x00015e2f) mp_bg_pane_g1

0xa027,	// (0x00015a40) bg_list_pane_cp03

0xc5f3,	// (0x0001800c) bg_mp_pane

0xc5fb,	// (0x00018014) grid_mp_pane

0xc603,	// (0x0001801c) media_player_g1

0xc60b,	// (0x00018024) media_player_t1

0xc619,	// (0x00018032) media_player_t2

0xc627,	// (0x00018040) media_player_t3

0xc635,	// (0x0001804e) media_player_t4

0xc643,	// (0x0001805c) media_player_t5

0xc651,	// (0x0001806a) media_player_t6

0xc65f,	// (0x00018078) media_player_t7

0x0006,

0xf602,	// (0x0001b01b) media_player_t

0xc66d,	// (0x00018086) wait_bar_pane_cp02

0xf5e7,	// (0x0001b000) main_usb_pane_t

0x47d3,	// (0x000101ec) cell_mp_pane

0xa416,	// (0x00015e2f) cell_mp_pane_g1

0xa027,	// (0x00015a40) grid_highlight_pane_cp06

0xa735,	// (0x0001614e) grid_skin_colour_pane

0xa73d,	// (0x00016156) list_highlight_pane_cp03

0x2d37,	// (0x0000e750) skin_g1

0xa745,	// (0x0001615e) skin_t1

0xa754,	// (0x0001616d) skin_t2

0x0001,

0xf288,	// (0x0001aca1) skin_t

0x2d3f,	// (0x0000e758) cell_skin_colour_pane_ParamLimits

0x2d3f,	// (0x0000e758) cell_skin_colour_pane

0xa762,	// (0x0001617b) cell_skin_colour_pane_g1

0x2da8,	// (0x0000e7c1) call_video_g1_ParamLimits

0x2da8,	// (0x0000e7c1) call_video_g1

0x2dbe,	// (0x0000e7d7) call_video_g2_ParamLimits

0x2dbe,	// (0x0000e7d7) call_video_g2

0x0001,

0xf28d,	// (0x0001aca6) call_video_g_ParamLimits

0xf28d,	// (0x0001aca6) call_video_g

0x2e06,	// (0x0000e81f) call_video_uplink_pane_cp1_ParamLimits

0x2e06,	// (0x0000e81f) call_video_uplink_pane_cp1

0xa774,	// (0x0001618d) call_video_uplink_pane_cp2

0x2e9b,	// (0x0000e8b4) video_down_crop_pane_ParamLimits

0x2e9b,	// (0x0000e8b4) video_down_crop_pane

0x2f5e,	// (0x0000e977) video_down_pane_ParamLimits

0x2f5e,	// (0x0000e977) video_down_pane

0xa77c,	// (0x00016195) video_down_subqcif_pane_ParamLimits

0xa77c,	// (0x00016195) video_down_subqcif_pane

0xa794,	// (0x000161ad) video_down_subqcif_pane_cp_ParamLimits

0xa794,	// (0x000161ad) video_down_subqcif_pane_cp

0xa7b8,	// (0x000161d1) im_reading_pane_ParamLimits

0xa7b8,	// (0x000161d1) im_reading_pane

0x301b,	// (0x0000ea34) im_writing_pane_ParamLimits

0x301b,	// (0x0000ea34) im_writing_pane

0x3031,	// (0x0000ea4a) im_reading_pane_t1

0xa7d2,	// (0x000161eb) list_im_pane

0xa7e3,	// (0x000161fc) scroll_pane_cp07

0x3067,	// (0x0000ea80) im_writing_pane_t1_ParamLimits

0x3067,	// (0x0000ea80) im_writing_pane_t1

0xa7fc,	// (0x00016215) im_writing_pane_t2_ParamLimits

0xa7fc,	// (0x00016215) im_writing_pane_t2

0x0001,

0xf297,	// (0x0001acb0) im_writing_pane_t_ParamLimits

0xf297,	// (0x0001acb0) im_writing_pane_t

0xa027,	// (0x00015a40) input_focus_pane_cp04

0xa027,	// (0x00015a40) input_focus_pane_cp05

0x307c,	// (0x0000ea95) list_im_single_pane_ParamLimits

0x307c,	// (0x0000ea95) list_im_single_pane

0xa819,	// (0x00016232) list_single_im_pane_t1

0x4799,	// (0x000101b2) blid_accuracy_pane

0x47a1,	// (0x000101ba) blid_compass_pane

0x47a9,	// (0x000101c2) main_location_t1

0x47b7,	// (0x000101d0) main_location_t2

0x47c5,	// (0x000101de) main_location_t3

0x0002,

0xf611,	// (0x0001b02a) main_location_t

0xa027,	// (0x00015a40) aid_levels_location

0xa416,	// (0x00015e2f) blid_accuracy_pane_g1

0xa416,	// (0x00015e2f) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0001ad12) blid_accuracy_pane_g

0xa853,	// (0x0001626c) wml_content_pane

0xa891,	// (0x000162aa) wml_button_pane_ParamLimits

0xa891,	// (0x000162aa) wml_button_pane

0x3092,	// (0x0000eaab) wml_list_single_large_pane_ParamLimits

0x3092,	// (0x0000eaab) wml_list_single_large_pane

0x30a6,	// (0x0000eabf) wml_list_single_medium_pane_ParamLimits

0x30a6,	// (0x0000eabf) wml_list_single_medium_pane

0x30bb,	// (0x0000ead4) wml_list_single_small_pane_ParamLimits

0x30bb,	// (0x0000ead4) wml_list_single_small_pane

0xa8a5,	// (0x000162be) wml_selection_box_pane_ParamLimits

0xa8a5,	// (0x000162be) wml_selection_box_pane

0xa8b8,	// (0x000162d1) wml_list_single_pane_t1

0xa8c7,	// (0x000162e0) wml_list_single_medium_pane_t1

0xa8d6,	// (0x000162ef) wml_list_single_large_pane_t1

0xa8e5,	// (0x000162fe) input_focus_pane_cp02_ParamLimits

0xa8e5,	// (0x000162fe) input_focus_pane_cp02

0xa8f8,	// (0x00016311) wml_selection_box_pane_g1

0xa901,	// (0x0001631a) wml_selection_box_pane_t1_ParamLimits

0xa901,	// (0x0001631a) wml_selection_box_pane_t1

0xa282,	// (0x00015c9b) bg_wml_button_pane_ParamLimits

0xa282,	// (0x00015c9b) bg_wml_button_pane

0xa919,	// (0x00016332) wml_button_pane_g1

0xa921,	// (0x0001633a) wml_button_pane_t1

0xa919,	// (0x00016332) wml_button_bg_pane_g1

0xa931,	// (0x0001634a) wml_button_bg_pane_g2

0xa939,	// (0x00016352) wml_button_bg_pane_g3

0xa941,	// (0x0001635a) wml_button_bg_pane_g4

0xa949,	// (0x00016362) wml_button_bg_pane_g5

0xa951,	// (0x0001636a) wml_button_bg_pane_g6

0xa959,	// (0x00016372) wml_button_bg_pane_g7

0xa961,	// (0x0001637a) wml_button_bg_pane_g8

0xa969,	// (0x00016382) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0001acb5) wml_button_bg_pane_g

0x30d2,	// (0x0000eaeb) bg_list_pane_cp02

0xa971,	// (0x0001638a) mce_header_pane_ParamLimits

0xa971,	// (0x0001638a) mce_header_pane

0xa985,	// (0x0001639e) mce_icon_pane

0xa985,	// (0x0001639e) mce_image_pane

0xa98e,	// (0x000163a7) mce_text_pane_ParamLimits

0xa98e,	// (0x000163a7) mce_text_pane

0x30db,	// (0x0000eaf4) scroll_pane_cp03

0x30db,	// (0x0000eaf4) scroll_pane_cp04

0xa9a2,	// (0x000163bb) scroll_pane_cp05_ParamLimits

0xa9a2,	// (0x000163bb) scroll_pane_cp05

0x30e5,	// (0x0000eafe) mce_header_field_pane_ParamLimits

0x30e5,	// (0x0000eafe) mce_header_field_pane

0x30fc,	// (0x0000eb15) mce_header_field_pane_2_ParamLimits

0x30fc,	// (0x0000eb15) mce_header_field_pane_2

0x3112,	// (0x0000eb2b) mce_header_field_pane_3

0x311a,	// (0x0000eb33) list_single_mce_message_pane_ParamLimits

0x311a,	// (0x0000eb33) list_single_mce_message_pane

0x312f,	// (0x0000eb48) list_single_mce_smart_pane_ParamLimits

0x312f,	// (0x0000eb48) list_single_mce_smart_pane

0xa9ae,	// (0x000163c7) input_focus_pane_cp03

0xa9b7,	// (0x000163d0) list_header_data_pane

0x314f,	// (0x0000eb68) mce_header_field_pane_t1

0x315d,	// (0x0000eb76) list_single_mce_header_pane_ParamLimits

0x315d,	// (0x0000eb76) list_single_mce_header_pane

0xa9bf,	// (0x000163d8) list_single_mce_header_pane_t1

0xa9ce,	// (0x000163e7) list_single_mce_message_pane_g1

0xa9d7,	// (0x000163f0) list_single_mce_message_pane_t1

0x318f,	// (0x0000eba8) bg_cale_heading_pane_cp01_ParamLimits

0x318f,	// (0x0000eba8) bg_cale_heading_pane_cp01

0xa9e6,	// (0x000163ff) bg_cale_pane_cp02_ParamLimits

0xa9e6,	// (0x000163ff) bg_cale_pane_cp02

0x31b2,	// (0x0000ebcb) cale_month_corner_pane

0x31c8,	// (0x0000ebe1) cale_month_day_heading_pane_ParamLimits

0x31c8,	// (0x0000ebe1) cale_month_day_heading_pane

0x31fb,	// (0x0000ec14) cale_month_pane_g1_ParamLimits

0x31fb,	// (0x0000ec14) cale_month_pane_g1

0x3217,	// (0x0000ec30) cale_month_pane_g2_ParamLimits

0x3217,	// (0x0000ec30) cale_month_pane_g2

0x3232,	// (0x0000ec4b) cale_month_pane_g3_ParamLimits

0x3232,	// (0x0000ec4b) cale_month_pane_g3

0x325e,	// (0x0000ec77) cale_month_pane_g4_ParamLimits

0x325e,	// (0x0000ec77) cale_month_pane_g4

0x328a,	// (0x0000eca3) cale_month_pane_g5_ParamLimits

0x328a,	// (0x0000eca3) cale_month_pane_g5

0x32b6,	// (0x0000eccf) cale_month_pane_g6_ParamLimits

0x32b6,	// (0x0000eccf) cale_month_pane_g6

0x32e2,	// (0x0000ecfb) cale_month_pane_g7_ParamLimits

0x32e2,	// (0x0000ecfb) cale_month_pane_g7

0x330e,	// (0x0000ed27) cale_month_pane_g8_ParamLimits

0x330e,	// (0x0000ed27) cale_month_pane_g8

0x334a,	// (0x0000ed63) cale_month_pane_g9_ParamLimits

0x334a,	// (0x0000ed63) cale_month_pane_g9

0x3384,	// (0x0000ed9d) cale_month_pane_g10_ParamLimits

0x3384,	// (0x0000ed9d) cale_month_pane_g10

0x33be,	// (0x0000edd7) cale_month_pane_g11_ParamLimits

0x33be,	// (0x0000edd7) cale_month_pane_g11

0x33f8,	// (0x0000ee11) cale_month_pane_g12_ParamLimits

0x33f8,	// (0x0000ee11) cale_month_pane_g12

0x3432,	// (0x0000ee4b) cale_month_pane_g13_ParamLimits

0x3432,	// (0x0000ee4b) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0001acc8) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0001acc8) cale_month_pane_g

0x346c,	// (0x0000ee85) cale_month_week_pane

0x347f,	// (0x0000ee98) grid_cale_month_pane_ParamLimits

0x347f,	// (0x0000ee98) grid_cale_month_pane

0x34ad,	// (0x0000eec6) cale_month_day_heading_pane_t1

0x350b,	// (0x0000ef24) cale_month_day_heading_pane_t2

0x3570,	// (0x0000ef89) cale_month_day_heading_pane_t3

0x35d5,	// (0x0000efee) cale_month_day_heading_pane_t4

0x363a,	// (0x0000f053) cale_month_day_heading_pane_t5

0x369f,	// (0x0000f0b8) cale_month_day_heading_pane_t6

0x3704,	// (0x0000f11d) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0001ace3) cale_month_day_heading_pane_t

0xa575,	// (0x00015f8e) bg_cale_side_pane_cp01

0x3771,	// (0x0000f18a) cale_month_week_pane_t1

0x3788,	// (0x0000f1a1) cale_month_week_pane_t2

0x379f,	// (0x0000f1b8) cale_month_week_pane_t3

0x37b6,	// (0x0000f1cf) cale_month_week_pane_t4

0x37cd,	// (0x0000f1e6) cale_month_week_pane_t5

0x37e4,	// (0x0000f1fd) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0001acf2) cale_month_week_pane_t

0x37fb,	// (0x0000f214) cell_cale_month_pane_ParamLimits

0x37fb,	// (0x0000f214) cell_cale_month_pane

0xaa45,	// (0x0001645e) cell_cale_month_pane_g1

0x38a9,	// (0x0000f2c2) cell_cale_month_pane_t1_ParamLimits

0x38a9,	// (0x0000f2c2) cell_cale_month_pane_t1

0xa583,	// (0x00015f9c) grid_highlight_pane_cp08

0xa416,	// (0x00015e2f) main_smil_g1

0x38c5,	// (0x0000f2de) smil_status_pane

0xaa51,	// (0x0001646a) smil_text_pane

0xc4d3,	// (0x00017eec) bg_popup_call3_rect_pane_g8

0xc4db,	// (0x00017ef4) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0001afab) bg_popup_call3_rect_pane_g

0xc791,	// (0x000181aa) smil_status_volume_pane_g1

0xaa5b,	// (0x00016474) smil_status_pane_t1

0xc7c4,	// (0x000181dd) volume_smil_pane

0xaa72,	// (0x0001648b) list_smil_text_pane

0x38d6,	// (0x0000f2ef) scroll_pane_cp011

0x38e1,	// (0x0000f2fa) smil_text_list_pane_t1_ParamLimits

0x38e1,	// (0x0000f2fa) smil_text_list_pane_t1

0xaa7c,	// (0x00016495) aid_volume_smil_ParamLimits

0xaa7c,	// (0x00016495) aid_volume_smil

0xa416,	// (0x00015e2f) smil_volume_pane_g1

0xa416,	// (0x00015e2f) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0001ad12) smil_volume_pane_g

0xa373,	// (0x00015d8c) listscroll_cale_day_pane

0xaa9e,	// (0x000164b7) bg_cale_pane

0xaab6,	// (0x000164cf) list_cale_pane

0xaac7,	// (0x000164e0) scroll_pane_cp09

0xaad8,	// (0x000164f1) cale_bg_pane_g1

0xaae0,	// (0x000164f9) cale_bg_pane_g2

0xaae8,	// (0x00016501) cale_bg_pane_g3

0xaaf0,	// (0x00016509) cale_bg_pane_g4

0xaaf8,	// (0x00016511) cale_bg_pane_g5

0xab00,	// (0x00016519) cale_bg_pane_g6

0xab08,	// (0x00016521) cale_bg_pane_g7

0xab10,	// (0x00016529) cale_bg_pane_g8

0xab18,	// (0x00016531) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0001ad17) cale_bg_pane_g

0x391f,	// (0x0000f338) list_cale_time_pane_ParamLimits

0x391f,	// (0x0000f338) list_cale_time_pane

0xab20,	// (0x00016539) list_cale_time_pane_g1_ParamLimits

0xab20,	// (0x00016539) list_cale_time_pane_g1

0xab2c,	// (0x00016545) list_cale_time_pane_g2_ParamLimits

0xab2c,	// (0x00016545) list_cale_time_pane_g2

0x3934,	// (0x0000f34d) list_cale_time_pane_g3_ParamLimits

0x3934,	// (0x0000f34d) list_cale_time_pane_g3

0x3942,	// (0x0000f35b) list_cale_time_pane_g4_ParamLimits

0x3942,	// (0x0000f35b) list_cale_time_pane_g4

0x3950,	// (0x0000f369) list_cale_time_pane_g5_ParamLimits

0x3950,	// (0x0000f369) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0001ad2a) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0001ad2a) list_cale_time_pane_g

0xab46,	// (0x0001655f) list_cale_time_pane_t1_ParamLimits

0xab46,	// (0x0001655f) list_cale_time_pane_t1

0xab6e,	// (0x00016587) list_cale_time_pane_t2_ParamLimits

0xab6e,	// (0x00016587) list_cale_time_pane_t2

0x3c54,	// (0x0000f66d) aid_blid_cardinal_pane

0x3c92,	// (0x0000f6ab) compass_pane_t4

0xab96,	// (0x000165af) list_cale_time_pane_t4_ParamLimits

0xab96,	// (0x000165af) list_cale_time_pane_t4

0x3ca0,	// (0x0000f6b9) compass_pane_t5

0x3cae,	// (0x0000f6c7) compass_pane_t6

0x3cbc,	// (0x0000f6d5) compass_pane_t7

0xb0db,	// (0x00016af4) navi_pane_cc_t1

0xb291,	// (0x00016caa) aid_phob_thumbnail_center_pane

0x424b,	// (0x0000fc64) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0001ad37) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0001ad37) list_cale_time_pane_t

0x9c80,	// (0x00015699) bg_popup_window_pane_cp02_ParamLimits

0x9c80,	// (0x00015699) bg_popup_window_pane_cp02

0xabbe,	// (0x000165d7) heading_pane_cp01_ParamLimits

0xabbe,	// (0x000165d7) heading_pane_cp01

0xabca,	// (0x000165e3) loc_req_pane_ParamLimits

0xabca,	// (0x000165e3) loc_req_pane

0xabda,	// (0x000165f3) loc_type_pane_ParamLimits

0xabda,	// (0x000165f3) loc_type_pane

0xabec,	// (0x00016605) loc_type_pane_t1_ParamLimits

0xabec,	// (0x00016605) loc_type_pane_t1

0xabfe,	// (0x00016617) loc_type_pane_t2_ParamLimits

0xabfe,	// (0x00016617) loc_type_pane_t2

0xac10,	// (0x00016629) loc_type_pane_t3_ParamLimits

0xac10,	// (0x00016629) loc_type_pane_t3

0x0002,

0xf325,	// (0x0001ad3e) loc_type_pane_t_ParamLimits

0xf325,	// (0x0001ad3e) loc_type_pane_t

0xac22,	// (0x0001663b) list_loc_req_pane

0xac2c,	// (0x00016645) scroll_pane_cp012

0x395c,	// (0x0000f375) list_single_loc_request_popup_menu_pane_ParamLimits

0x395c,	// (0x0000f375) list_single_loc_request_popup_menu_pane

0xac35,	// (0x0001664e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xac35,	// (0x0001664e) list_single_loc_request_popup_menu_pane_g1

0xac41,	// (0x0001665a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xac41,	// (0x0001665a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0001ad45) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0001ad45) list_single_loc_request_popup_menu_pane_g

0xac4d,	// (0x00016666) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xac4d,	// (0x00016666) list_single_loc_request_popup_menu_pane_t1

0xa282,	// (0x00015c9b) bg_popup_window_pane_cp03_ParamLimits

0xa282,	// (0x00015c9b) bg_popup_window_pane_cp03

0xcf03,	// (0x0001891c) heading_loc_req_pane_ParamLimits

0xcf03,	// (0x0001891c) heading_loc_req_pane

0x3969,	// (0x0000f382) popup_dyc_status_message_window_g1_ParamLimits

0x3969,	// (0x0000f382) popup_dyc_status_message_window_g1

0x397d,	// (0x0000f396) popup_dyc_status_message_window_t1_ParamLimits

0x397d,	// (0x0000f396) popup_dyc_status_message_window_t1

0x3992,	// (0x0000f3ab) popup_dyc_status_message_window_t2_ParamLimits

0x3992,	// (0x0000f3ab) popup_dyc_status_message_window_t2

0x39a7,	// (0x0000f3c0) popup_dyc_status_message_window_t3_ParamLimits

0x39a7,	// (0x0000f3c0) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0001ad4a) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0001ad4a) popup_dyc_status_message_window_t

0xa027,	// (0x00015a40) bg_heading_pane_cp01

0xac63,	// (0x0001667c) heading_loc_req_pane_g1

0xac6b,	// (0x00016684) heading_loc_req_pane_g2

0xac73,	// (0x0001668c) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0001ad51) heading_loc_req_pane_g

0xac7b,	// (0x00016694) heading_loc_req_pane_t1

0xad22,	// (0x0001673b) bg_popup_sub_pane_cp01_ParamLimits

0xad22,	// (0x0001673b) bg_popup_sub_pane_cp01

0xad30,	// (0x00016749) popup_cale_events_window_g1_ParamLimits

0xad30,	// (0x00016749) popup_cale_events_window_g1

0xad50,	// (0x00016769) popup_cale_events_window_g2_ParamLimits

0xad50,	// (0x00016769) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0001ad85) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0001ad85) popup_cale_events_window_g

0xad70,	// (0x00016789) popup_cale_events_window_t1_ParamLimits

0xad70,	// (0x00016789) popup_cale_events_window_t1

0xad82,	// (0x0001679b) popup_cale_events_window_t2_ParamLimits

0xad82,	// (0x0001679b) popup_cale_events_window_t2

0xadc0,	// (0x000167d9) popup_cale_events_window_t3_ParamLimits

0xadc0,	// (0x000167d9) popup_cale_events_window_t3

0xadfa,	// (0x00016813) popup_cale_events_window_t4_ParamLimits

0xadfa,	// (0x00016813) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0001ad8a) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0001ad8a) popup_cale_events_window_t

0x3a37,	// (0x0000f450) call_type_pane

0x3a47,	// (0x0000f460) popup_call_status_window_g1

0x3a5b,	// (0x0000f474) popup_call_status_window_g2

0x3a6f,	// (0x0000f488) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0001ad93) popup_call_status_window_g

0xae30,	// (0x00016849) call_type_pane_g1

0xae39,	// (0x00016852) call_type_pane_g2

0x0001,

0xf381,	// (0x0001ad9a) call_type_pane_g

0xa027,	// (0x00015a40) bg_popup_sub_pane_cp02

0xae42,	// (0x0001685b) listscroll_popup_wml_pane

0xae4a,	// (0x00016863) list_wml_pane

0xae54,	// (0x0001686d) scroll_pane_cp013

0x3a7f,	// (0x0000f498) list_single_graphic_popup_wml_pane_ParamLimits

0x3a7f,	// (0x0000f498) list_single_graphic_popup_wml_pane

0xa416,	// (0x00015e2f) list_single_graphic_popup_wml_pane_g1

0xae5d,	// (0x00016876) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0001ad9f) list_single_graphic_popup_wml_pane_g

0xae65,	// (0x0001687e) list_single_graphic_popup_wml_pane_t1

0xae7b,	// (0x00016894) aid_call_pane

0xa27a,	// (0x00015c93) popup_clock_analogue_window_g1

0xa27a,	// (0x00015c93) popup_clock_analogue_window_g2

0xae83,	// (0x0001689c) popup_clock_analogue_window_g3

0xae83,	// (0x0001689c) popup_clock_analogue_window_g4

0xa416,	// (0x00015e2f) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0001ada4) popup_clock_analogue_window_g

0xae8b,	// (0x000168a4) popup_clock_analogue_window_t1

0xae99,	// (0x000168b2) clock_digital_number_pane_ParamLimits

0xae99,	// (0x000168b2) clock_digital_number_pane

0xaea5,	// (0x000168be) clock_digital_number_pane_cp02_ParamLimits

0xaea5,	// (0x000168be) clock_digital_number_pane_cp02

0xaeb1,	// (0x000168ca) clock_digital_number_pane_cp03_ParamLimits

0xaeb1,	// (0x000168ca) clock_digital_number_pane_cp03

0xaebd,	// (0x000168d6) clock_digital_number_pane_cp04_ParamLimits

0xaebd,	// (0x000168d6) clock_digital_number_pane_cp04

0xaec9,	// (0x000168e2) clock_digital_separator_pane_ParamLimits

0xaec9,	// (0x000168e2) clock_digital_separator_pane

0xaed5,	// (0x000168ee) popup_clock_digital_window_t1

0xa416,	// (0x00015e2f) clock_digital_number_pane_g1

0xa416,	// (0x00015e2f) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0001ad12) clock_digital_number_pane_g

0xa416,	// (0x00015e2f) clock_digital_separator_pane_g1

0xa416,	// (0x00015e2f) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0001ad12) clock_digital_separator_pane_g

0xa027,	// (0x00015a40) bg_popup_window_pane_cp04

0xaef2,	// (0x0001690b) heading_pane_cp03

0xaefa,	// (0x00016913) listscroll_popup_gms_pane

0xaf02,	// (0x0001691b) grid_large_graphic_popup_pane

0xaf0c,	// (0x00016925) listscroll_popup_gms_pane_g1

0xaf14,	// (0x0001692d) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0001adaf) listscroll_popup_gms_pane_g

0xa889,	// (0x000162a2) scroll_pane_cp014

0x3a92,	// (0x0000f4ab) cell_large_graphic_popup_pane_ParamLimits

0x3a92,	// (0x0000f4ab) cell_large_graphic_popup_pane

0x3aa8,	// (0x0000f4c1) cell_large_graphic_popup_pane_g1_ParamLimits

0x3aa8,	// (0x0000f4c1) cell_large_graphic_popup_pane_g1

0xaf1c,	// (0x00016935) cell_large_graphic_popup_pane_g2_ParamLimits

0xaf1c,	// (0x00016935) cell_large_graphic_popup_pane_g2

0xaf28,	// (0x00016941) cell_large_graphic_popup_pane_g3_ParamLimits

0xaf28,	// (0x00016941) cell_large_graphic_popup_pane_g3

0xaf35,	// (0x0001694e) cell_large_graphic_popup_pane_g4_ParamLimits

0xaf35,	// (0x0001694e) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0001adb4) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0001adb4) cell_large_graphic_popup_pane_g

0xaf45,	// (0x0001695e) grid_highlight_pane_cp010

0xa416,	// (0x00015e2f) bg_popup_call_pane_g1

0xaf4f,	// (0x00016968) list_single_graphic_popup_conf_pane_ParamLimits

0xaf4f,	// (0x00016968) list_single_graphic_popup_conf_pane

0xaf62,	// (0x0001697b) list_highlight_pane_cp01

0xaf6b,	// (0x00016984) list_single_graphic_popup_conf_pane_g1

0xaf73,	// (0x0001698c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0001adbd) list_single_graphic_popup_conf_pane_g

0xaf7b,	// (0x00016994) list_single_graphic_popup_conf_pane_t1

0xaf89,	// (0x000169a2) linegrid_cams_pane_g1

0x3ab4,	// (0x0000f4cd) linegrid_cams_pane_g2

0xa521,	// (0x00015f3a) linegrid_cams_pane_g3

0xaf92,	// (0x000169ab) linegrid_cams_pane_g4

0x3abd,	// (0x0000f4d6) linegrid_cams_pane_g5

0x3ac6,	// (0x0000f4df) linegrid_cams_pane_g6

0xa5b6,	// (0x00015fcf) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0001adc2) linegrid_cams_pane_g

0xaf9b,	// (0x000169b4) popup_clock_analogue_window

0xaf9b,	// (0x000169b4) popup_clock_digital_window

0xa027,	// (0x00015a40) popup_phob_thumbnail_window

0xa416,	// (0x00015e2f) call_video_uplink_pane_g1

0xafa4,	// (0x000169bd) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0001add1) call_video_uplink_pane_g

0xa583,	// (0x00015f9c) video_uplink_pane

0xafac,	// (0x000169c5) mce_image_pane_g1

0x3acf,	// (0x0000f4e8) mce_image_pane_g2

0x3ad7,	// (0x0000f4f0) mce_image_pane_g3

0x3adf,	// (0x0000f4f8) mce_image_pane_g4

0x3ae7,	// (0x0000f500) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0001add6) mce_image_pane_g

0xafb6,	// (0x000169cf) control_top_pane_stacon_cp01_ParamLimits

0xafb6,	// (0x000169cf) control_top_pane_stacon_cp01

0xafc6,	// (0x000169df) uni_indicator_pane_stacon_cp01_ParamLimits

0xafc6,	// (0x000169df) uni_indicator_pane_stacon_cp01

0xafd7,	// (0x000169f0) bg_popup_sub_pane_cp03

0xafe1,	// (0x000169fa) chi_dic_find_pane

0x3aef,	// (0x0000f508) listscroll_chi_dic_pane

0xafe9,	// (0x00016a02) main_pane_chidic_g1

0xaff1,	// (0x00016a0a) chi_dic_find_pane_t1

0xafff,	// (0x00016a18) find_chidic_pane

0xb008,	// (0x00016a21) chi_dic_list_pane_ParamLimits

0xb008,	// (0x00016a21) chi_dic_list_pane

0xb019,	// (0x00016a32) scroll_pane_cp020

0xb021,	// (0x00016a3a) find_chidic_pane_t1

0xa027,	// (0x00015a40) input_focus_pane_cp06

0x3b03,	// (0x0000f51c) list_chi_dic_pane_ParamLimits

0x3b03,	// (0x0000f51c) list_chi_dic_pane

0x3b15,	// (0x0000f52e) list_chi_dic_pane_t1_ParamLimits

0x3b15,	// (0x0000f52e) list_chi_dic_pane_t1

0xa027,	// (0x00015a40) list_highlight_pane_cp020

0xb030,	// (0x00016a49) bg_cale_heading_pane_g1

0x3b28,	// (0x0000f541) bg_cale_heading_pane_g2

0x3b30,	// (0x0000f549) bg_cale_heading_pane_g3

0x3b38,	// (0x0000f551) bg_cale_heading_pane_g4

0x3b42,	// (0x0000f55b) bg_cale_heading_pane_g5

0x3b4c,	// (0x0000f565) bg_cale_heading_pane_g6

0x3b54,	// (0x0000f56d) bg_cale_heading_pane_g7

0x3b5c,	// (0x0000f575) bg_cale_heading_pane_g8

0x3b66,	// (0x0000f57f) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0001ade1) bg_cale_heading_pane_g

0xb030,	// (0x00016a49) bg_cale_side_pane_g1

0x3b70,	// (0x0000f589) bg_cale_side_pane_g2

0x3b78,	// (0x0000f591) bg_cale_side_pane_g3

0x3b80,	// (0x0000f599) bg_cale_side_pane_g4

0x3b88,	// (0x0000f5a1) bg_cale_side_pane_g5

0x3b90,	// (0x0000f5a9) bg_cale_side_pane_g6

0x3b98,	// (0x0000f5b1) bg_cale_side_pane_g7

0x3ba0,	// (0x0000f5b9) bg_cale_side_pane_g8

0x3ba8,	// (0x0000f5c1) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0001adf4) bg_cale_side_pane_g

0x3bb0,	// (0x0000f5c9) popup_call_status_window_ParamLimits

0x3bb0,	// (0x0000f5c9) popup_call_status_window

0xb038,	// (0x00016a51) stacon_top_pane

0xb040,	// (0x00016a59) status_pane_ParamLimits

0xb040,	// (0x00016a59) status_pane

0xb05a,	// (0x00016a73) status_small_pane

0xb062,	// (0x00016a7b) control_pane

0xa027,	// (0x00015a40) stacon_bottom_pane

0xb06a,	// (0x00016a83) list_single_mce_smart_pane_t1_ParamLimits

0xb06a,	// (0x00016a83) list_single_mce_smart_pane_t1

0xb07d,	// (0x00016a96) list_single_mce_smart_pane_t2_ParamLimits

0xb07d,	// (0x00016a96) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0001ae07) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0001ae07) list_single_mce_smart_pane_t

0x3bf7,	// (0x0000f610) compass_pane

0x3c00,	// (0x0000f619) main_location2_pane_t1

0x3c16,	// (0x0000f62f) main_location2_pane_t2

0x3c2c,	// (0x0000f645) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0001ae0c) main_location2_pane_t

0xb0a5,	// (0x00016abe) compass_pane_g1_ParamLimits

0xb0a5,	// (0x00016abe) compass_pane_g1

0x3c74,	// (0x0000f68d) compass_pane_t1

0x3c83,	// (0x0000f69c) compass_pane_t2

0x0005,

0xf3fc,	// (0x0001ae15) compass_pane_t

0x3cca,	// (0x0000f6e3) text_secondary_cp61

0xb0d2,	// (0x00016aeb) navi_pane_cams_g5

0xb113,	// (0x00016b2c) navi_pane_im_t1

0xb121,	// (0x00016b3a) navi_pane_mp_g1_ParamLimits

0xb121,	// (0x00016b3a) navi_pane_mp_g1

0xb135,	// (0x00016b4e) navi_pane_mp_g2_ParamLimits

0xb135,	// (0x00016b4e) navi_pane_mp_g2

0xb141,	// (0x00016b5a) navi_pane_mp_g3_ParamLimits

0xb141,	// (0x00016b5a) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0001ae29) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0001ae29) navi_pane_mp_g

0xb14d,	// (0x00016b66) navi_pane_mp_t1

0xb15b,	// (0x00016b74) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0001ae30) navi_pane_mp_t

0xb1c8,	// (0x00016be1) navi_pane_vt_g1

0xb14d,	// (0x00016b66) navi_pane_vt_t1

0xb1d0,	// (0x00016be9) navi_slider_pane

0xb1d8,	// (0x00016bf1) zooming_pane

0xb1e0,	// (0x00016bf9) navi_slider_pane_g1

0xb1e9,	// (0x00016c02) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0001ae37) navi_slider_pane_g

0xb216,	// (0x00016c2f) aid_levels_zoom

0xb21e,	// (0x00016c37) zooming_pane_g1

0xb226,	// (0x00016c3f) zooming_pane_g2

0xb226,	// (0x00016c3f) zooming_pane_g3

0x0002,

0xf42d,	// (0x0001ae46) zooming_pane_g

0xb22e,	// (0x00016c47) level_10_zoom

0xb237,	// (0x00016c50) level_11_zoom

0xb240,	// (0x00016c59) level_1_zoom

0xb249,	// (0x00016c62) level_2_zoom

0xb252,	// (0x00016c6b) level_3_zoom

0xb25b,	// (0x00016c74) level_4_zoom

0xb264,	// (0x00016c7d) level_5_zoom

0xb26d,	// (0x00016c86) level_6_zoom

0xb276,	// (0x00016c8f) level_7_zoom

0xb27f,	// (0x00016c98) level_8_zoom

0xb288,	// (0x00016ca1) level_9_zoom

0xb299,	// (0x00016cb2) popup_phob_thumbnail_window_g1

0xb2a1,	// (0x00016cba) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0001ae4d) popup_phob_thumbnail_window_g

0xc675,	// (0x0001808e) level_1_location

0xc67d,	// (0x00018096) level_2_location

0xc685,	// (0x0001809e) level_3_location

0xc68d,	// (0x000180a6) level_4_location

0xb1d8,	// (0x00016bf1) level_5_location

0x3d55,	// (0x0000f76e) mce_icon_pane_g1

0x3d5d,	// (0x0000f776) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0001ae52) mce_icon_pane_g

0x3d65,	// (0x0000f77e) main_mup_pane_g1_ParamLimits

0x3d65,	// (0x0000f77e) main_mup_pane_g1

0x3d7b,	// (0x0000f794) main_mup_pane_g2_ParamLimits

0x3d7b,	// (0x0000f794) main_mup_pane_g2

0x3d93,	// (0x0000f7ac) main_mup_pane_g3_ParamLimits

0x3d93,	// (0x0000f7ac) main_mup_pane_g3

0x3dab,	// (0x0000f7c4) main_mup_pane_g4_ParamLimits

0x3dab,	// (0x0000f7c4) main_mup_pane_g4

0x3dc3,	// (0x0000f7dc) main_mup_pane_g5_ParamLimits

0x3dc3,	// (0x0000f7dc) main_mup_pane_g5

0x3ddd,	// (0x0000f7f6) main_mup_pane_g6_ParamLimits

0x3ddd,	// (0x0000f7f6) main_mup_pane_g6

0x3df5,	// (0x0000f80e) main_mup_pane_g7_ParamLimits

0x3df5,	// (0x0000f80e) main_mup_pane_g7

0x3e0d,	// (0x0000f826) main_mup_pane_g8_ParamLimits

0x3e0d,	// (0x0000f826) main_mup_pane_g8

0x3e25,	// (0x0000f83e) main_mup_pane_g9_ParamLimits

0x3e25,	// (0x0000f83e) main_mup_pane_g9

0x3e39,	// (0x0000f852) main_mup_pane_g10_ParamLimits

0x3e39,	// (0x0000f852) main_mup_pane_g10

0x3e4d,	// (0x0000f866) main_mup_pane_g11_ParamLimits

0x3e4d,	// (0x0000f866) main_mup_pane_g11

0x3e5f,	// (0x0000f878) main_mup_pane_g12_ParamLimits

0x3e5f,	// (0x0000f878) main_mup_pane_g12

0x3e73,	// (0x0000f88c) main_mup_pane_g13_ParamLimits

0x3e73,	// (0x0000f88c) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0001ae57) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0001ae57) main_mup_pane_g

0x3e85,	// (0x0000f89e) main_mup_pane_t1_ParamLimits

0x3e85,	// (0x0000f89e) main_mup_pane_t1

0x3e9f,	// (0x0000f8b8) main_mup_pane_t2_ParamLimits

0x3e9f,	// (0x0000f8b8) main_mup_pane_t2

0x3eb7,	// (0x0000f8d0) main_mup_pane_t3_ParamLimits

0x3eb7,	// (0x0000f8d0) main_mup_pane_t3

0x3ecf,	// (0x0000f8e8) main_mup_pane_t4_ParamLimits

0x3ecf,	// (0x0000f8e8) main_mup_pane_t4

0x3eed,	// (0x0000f906) main_mup_pane_t5_ParamLimits

0x3eed,	// (0x0000f906) main_mup_pane_t5

0x3f02,	// (0x0000f91b) main_mup_pane_t6_ParamLimits

0x3f02,	// (0x0000f91b) main_mup_pane_t6

0x0005,

0xf459,	// (0x0001ae72) main_mup_pane_t_ParamLimits

0xf459,	// (0x0001ae72) main_mup_pane_t

0x3f14,	// (0x0000f92d) mup_progress_pane_ParamLimits

0x3f14,	// (0x0000f92d) mup_progress_pane

0x3f20,	// (0x0000f939) mup_visualizer_pane_ParamLimits

0x3f20,	// (0x0000f939) mup_visualizer_pane

0x3f48,	// (0x0000f961) mup_volume_pane_ParamLimits

0x3f48,	// (0x0000f961) mup_volume_pane

0xb2a9,	// (0x00016cc2) mup_visualizer_pane_g1_ParamLimits

0xb2a9,	// (0x00016cc2) mup_visualizer_pane_g1

0xb2a9,	// (0x00016cc2) mup_visualizer_pane_g2_ParamLimits

0xb2a9,	// (0x00016cc2) mup_visualizer_pane_g2

0xb0a5,	// (0x00016abe) mup_visualizer_pane_g3_ParamLimits

0xb0a5,	// (0x00016abe) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0001ae7f) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0001ae7f) mup_visualizer_pane_g

0xa416,	// (0x00015e2f) mup_volume_pane_g1

0xb2bf,	// (0x00016cd8) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0001ae86) mup_volume_pane_g

0xa416,	// (0x00015e2f) mup_progress_pane_g1

0xb2c8,	// (0x00016ce1) mup_progress_pane_g2

0xb2d1,	// (0x00016cea) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0001ae8b) mup_progress_pane_g

0xa027,	// (0x00015a40) bg_popup_window_pane_cp05

0xb2da,	// (0x00016cf3) heading_pane_cp02_ParamLimits

0xb2da,	// (0x00016cf3) heading_pane_cp02

0xb2f4,	// (0x00016d0d) list_popup_blid_pane

0xb2fc,	// (0x00016d15) list_blid_sat_info_pane_ParamLimits

0xb2fc,	// (0x00016d15) list_blid_sat_info_pane

0xb30f,	// (0x00016d28) list_blid_sat_info_pane_g1

0xb317,	// (0x00016d30) list_blid_sat_info_pane_t1

0x4038,	// (0x0000fa51) mup_equalizer_pane_ParamLimits

0x4038,	// (0x0000fa51) mup_equalizer_pane

0x4051,	// (0x0000fa6a) mup_equalizer_pane_cp1_ParamLimits

0x4051,	// (0x0000fa6a) mup_equalizer_pane_cp1

0x406a,	// (0x0000fa83) mup_equalizer_pane_cp2_ParamLimits

0x406a,	// (0x0000fa83) mup_equalizer_pane_cp2

0x4083,	// (0x0000fa9c) mup_equalizer_pane_cp3_ParamLimits

0x4083,	// (0x0000fa9c) mup_equalizer_pane_cp3

0x409c,	// (0x0000fab5) mup_equalizer_pane_cp4_ParamLimits

0x409c,	// (0x0000fab5) mup_equalizer_pane_cp4

0x40b5,	// (0x0000face) mup_equalizer_pane_cp5

0x40c7,	// (0x0000fae0) mup_equalizer_pane_cp6

0x40d9,	// (0x0000faf2) mup_equalizer_pane_cp7

0xc553,	// (0x00017f6c) bg_popup_call_poc_act_pane_g9

0xc55b,	// (0x00017f74) bg_popup_call_poc_act_pane_g10

0xc563,	// (0x00017f7c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa282,	// (0x00015c9b) mup_scale_pane

0xa416,	// (0x00015e2f) mup_scale_pane_g1

0xb325,	// (0x00016d3e) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0001aea7) mup_scale_pane_g

0xb349,	// (0x00016d62) msg_data_pane

0xb351,	// (0x00016d6a) scroll_pane_cp017

0x40ff,	// (0x0000fb18) bg_list_pane_cp04_ParamLimits

0x40ff,	// (0x0000fb18) bg_list_pane_cp04

0xb361,	// (0x00016d7a) msg_data_pane_g1

0x3acf,	// (0x0000f4e8) msg_data_pane_g2

0x3ad7,	// (0x0000f4f0) msg_data_pane_g3

0x4117,	// (0x0000fb30) msg_data_pane_g4

0x3ae7,	// (0x0000f500) msg_data_pane_g5

0x3d55,	// (0x0000f76e) msg_data_pane_g6

0x411f,	// (0x0000fb38) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0001aeb6) msg_data_pane_g

0x4127,	// (0x0000fb40) msg_text_pane_ParamLimits

0x4127,	// (0x0000fb40) msg_text_pane

0x414b,	// (0x0000fb64) qrid_highlight_pane_cp011_ParamLimits

0x414b,	// (0x0000fb64) qrid_highlight_pane_cp011

0xa027,	// (0x00015a40) msg_body_pane

0xa027,	// (0x00015a40) msg_header_pane

0xb372,	// (0x00016d8b) input_focus_pane_cp07

0x416d,	// (0x0000fb86) msg_header_pane_t1_ParamLimits

0x416d,	// (0x0000fb86) msg_header_pane_t1

0xb387,	// (0x00016da0) msg_header_pane_t2_ParamLimits

0xb387,	// (0x00016da0) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0001aeca) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0001aeca) msg_header_pane_t

0xb399,	// (0x00016db2) msg_body_pane_g1

0xb3a1,	// (0x00016dba) msg_body_pane_t1_ParamLimits

0xb3a1,	// (0x00016dba) msg_body_pane_t1

0xb3cc,	// (0x00016de5) msg_body_pane_t2_ParamLimits

0xb3cc,	// (0x00016de5) msg_body_pane_t2

0xb3de,	// (0x00016df7) msg_body_pane_t3_ParamLimits

0xb3de,	// (0x00016df7) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0001aecf) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0001aecf) msg_body_pane_t

0x41b5,	// (0x0000fbce) main_viewer_pane_g1_ParamLimits

0x41b5,	// (0x0000fbce) main_viewer_pane_g1

0x41c1,	// (0x0000fbda) main_viewer_pane_g2_ParamLimits

0x41c1,	// (0x0000fbda) main_viewer_pane_g2

0x41cd,	// (0x0000fbe6) main_viewer_pane_g3_ParamLimits

0x41cd,	// (0x0000fbe6) main_viewer_pane_g3

0x41dc,	// (0x0000fbf5) main_viewer_pane_g4_ParamLimits

0x41dc,	// (0x0000fbf5) main_viewer_pane_g4

0xb408,	// (0x00016e21) main_viewer_pane_g5_ParamLimits

0xb408,	// (0x00016e21) main_viewer_pane_g5

0xb408,	// (0x00016e21) main_viewer_pane_g7_ParamLimits

0xb408,	// (0x00016e21) main_viewer_pane_g7

0xb41a,	// (0x00016e33) main_viewer_pane_g8_ParamLimits

0xb41a,	// (0x00016e33) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0001aedf) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0001aedf) main_viewer_pane_g

0xb432,	// (0x00016e4b) viewer_content_pane_ParamLimits

0xb432,	// (0x00016e4b) viewer_content_pane

0x4210,	// (0x0000fc29) main_postcard_pane_g1_ParamLimits

0x4210,	// (0x0000fc29) main_postcard_pane_g1

0x4224,	// (0x0000fc3d) main_postcard_pane_g2_ParamLimits

0x4224,	// (0x0000fc3d) main_postcard_pane_g2

0x4238,	// (0x0000fc51) main_postcard_pane_g3_ParamLimits

0x4238,	// (0x0000fc51) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0001aef0) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0001aef0) main_postcard_pane_g

0x424b,	// (0x0000fc64) main_postcard_pane_g4

0xc7a4,	// (0x000181bd) smil_status_volume_pane_g2

0x4286,	// (0x0000fc9f) postcard_pane_ParamLimits

0x4286,	// (0x0000fc9f) postcard_pane

0xb440,	// (0x00016e59) postcard_pane_g1_ParamLimits

0xb440,	// (0x00016e59) postcard_pane_g1

0x42c6,	// (0x0000fcdf) postcard_pane_g2_ParamLimits

0x42c6,	// (0x0000fcdf) postcard_pane_g2

0x42d2,	// (0x0000fceb) postcard_pane_g3_ParamLimits

0x42d2,	// (0x0000fceb) postcard_pane_g3

0xb44e,	// (0x00016e67) postcard_pane_g4_ParamLimits

0xb44e,	// (0x00016e67) postcard_pane_g4

0x42de,	// (0x0000fcf7) postcard_pane_g5_ParamLimits

0x42de,	// (0x0000fcf7) postcard_pane_g5

0x42f3,	// (0x0000fd0c) postcard_pane_g6_ParamLimits

0x42f3,	// (0x0000fd0c) postcard_pane_g6

0xb440,	// (0x00016e59) postcard_pane_g7_ParamLimits

0xb440,	// (0x00016e59) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0001aefd) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0001aefd) postcard_pane_g

0x4307,	// (0x0000fd20) main_mp2_pane_g1_ParamLimits

0x4307,	// (0x0000fd20) main_mp2_pane_g1

0x4313,	// (0x0000fd2c) main_mp2_pane_g2_ParamLimits

0x4313,	// (0x0000fd2c) main_mp2_pane_g2

0x431f,	// (0x0000fd38) main_mp2_pane_g3_ParamLimits

0x431f,	// (0x0000fd38) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0001af0c) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0001af0c) main_mp2_pane_g

0x432b,	// (0x0000fd44) main_mp2_pane_t1_ParamLimits

0x432b,	// (0x0000fd44) main_mp2_pane_t1

0x4340,	// (0x0000fd59) main_mp2_pane_t2_ParamLimits

0x4340,	// (0x0000fd59) main_mp2_pane_t2

0x4352,	// (0x0000fd6b) main_mp2_pane_t3_ParamLimits

0x4352,	// (0x0000fd6b) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0001af13) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0001af13) main_mp2_pane_t

0xb45c,	// (0x00016e75) pec_content_pane_ParamLimits

0xb45c,	// (0x00016e75) pec_content_pane

0xa889,	// (0x000162a2) scroll_pane_cp015

0xb46e,	// (0x00016e87) pec_attribute_pane_ParamLimits

0xb46e,	// (0x00016e87) pec_attribute_pane

0x4364,	// (0x0000fd7d) pec_content_pane_g1_ParamLimits

0x4364,	// (0x0000fd7d) pec_content_pane_g1

0xb47e,	// (0x00016e97) pec_content_pane_t1_ParamLimits

0xb47e,	// (0x00016e97) pec_content_pane_t1

0xb490,	// (0x00016ea9) pec_content_pane_t2_ParamLimits

0xb490,	// (0x00016ea9) pec_content_pane_t2

0x0001,

0xf501,	// (0x0001af1a) pec_content_pane_t_ParamLimits

0xf501,	// (0x0001af1a) pec_content_pane_t

0x4370,	// (0x0000fd89) list_single_graphic_pane_cp01_ParamLimits

0x4370,	// (0x0000fd89) list_single_graphic_pane_cp01

0xa282,	// (0x00015c9b) bg_popup_sub_pane_cp04

0xb4a2,	// (0x00016ebb) popup_mup_playback_window_g1

0xb4ae,	// (0x00016ec7) popup_mup_playback_window_t1

0xb4c3,	// (0x00016edc) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0001af1f) popup_mup_playback_window_t

0xb4fa,	// (0x00016f13) main_image_pane_g1_ParamLimits

0xb4fa,	// (0x00016f13) main_image_pane_g1

0xb53d,	// (0x00016f56) scroll_pane_cp018_ParamLimits

0xb53d,	// (0x00016f56) scroll_pane_cp018

0xb555,	// (0x00016f6e) scroll_pane_cp016_ParamLimits

0xb555,	// (0x00016f6e) scroll_pane_cp016

0x443b,	// (0x0000fe54) smil2_image_pane_ParamLimits

0x443b,	// (0x0000fe54) smil2_image_pane

0x4463,	// (0x0000fe7c) smil2_root_pane_ParamLimits

0x4463,	// (0x0000fe7c) smil2_root_pane

0x449b,	// (0x0000feb4) smil2_text_pane_ParamLimits

0x449b,	// (0x0000feb4) smil2_text_pane

0xa027,	// (0x00015a40) bg_list_pane_cp06

0xb591,	// (0x00016faa) grid_radio_pane

0xa027,	// (0x00015a40) bg_popup_window_pane_cp06

0xb599,	// (0x00016fb2) main_fmradio_pane_t1

0xaef2,	// (0x0001690b) heading_pane_cp04

0xb5a7,	// (0x00016fc0) main_fmradio_pane_t2

0xc5ab,	// (0x00017fc4) popup_cale_lunar_info_window_g1

0xb5b5,	// (0x00016fce) main_fmradio_pane_t3

0xc5b3,	// (0x00017fcc) popup_cale_lunar_info_window_g2

0xb5c3,	// (0x00016fdc) main_fmradio_pane_t4

0x0001,

0xb5d1,	// (0x00016fea) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x0001b00d) popup_cale_lunar_info_window_g

0xf51b,	// (0x0001af34) main_fmradio_pane_t

0xb5df,	// (0x00016ff8) wait_bar_pane_cp03

0xb5e7,	// (0x00017000) cell_fmradio_pane_ParamLimits

0xb5e7,	// (0x00017000) cell_fmradio_pane

0xb440,	// (0x00016e59) cell_fmradio_pane_g1_ParamLimits

0xb440,	// (0x00016e59) cell_fmradio_pane_g1

0xa027,	// (0x00015a40) grid_highlight_pane_cp011

0xb5fa,	// (0x00017013) poc_content_pane_ParamLimits

0xb5fa,	// (0x00017013) poc_content_pane

0xb60d,	// (0x00017026) scroll_pane_cp019

0x4507,	// (0x0000ff20) popup_call_poc_act_window_ParamLimits

0x4507,	// (0x0000ff20) popup_call_poc_act_window

0x4527,	// (0x0000ff40) popup_call_poc_inact_window_ParamLimits

0x4527,	// (0x0000ff40) popup_call_poc_inact_window

0xf5b8,	// (0x0001afd1) bg_popup_call_poc_act_pane_g

0xc56b,	// (0x00017f84) bg_popup_call_poc_inact_pane_g1

0xc573,	// (0x00017f8c) bg_popup_call_poc_inact_pane_g2

0xb615,	// (0x0001702e) popup_call_poc_act_window_g2

0xc57b,	// (0x00017f94) bg_popup_call_poc_inact_pane_g3

0xc4fb,	// (0x00017f14) bg_popup_call_poc_inact_pane_g4

0xc583,	// (0x00017f9c) bg_popup_call_poc_inact_pane_g5

0xb61d,	// (0x00017036) popup_call_poc_act_window_t1_ParamLimits

0xb61d,	// (0x00017036) popup_call_poc_act_window_t1

0xb645,	// (0x0001705e) popup_call_poc_act_window_t2_ParamLimits

0xb645,	// (0x0001705e) popup_call_poc_act_window_t2

0xb66d,	// (0x00017086) popup_call_poc_act_window_t3_ParamLimits

0xb66d,	// (0x00017086) popup_call_poc_act_window_t3

0xb695,	// (0x000170ae) popup_call_poc_act_window_t4_ParamLimits

0xb695,	// (0x000170ae) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0001af3f) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0001af3f) popup_call_poc_act_window_t

0xc58b,	// (0x00017fa4) bg_popup_call_poc_inact_pane_g6

0xc593,	// (0x00017fac) bg_popup_call_poc_inact_pane_g7

0xc59b,	// (0x00017fb4) bg_popup_call_poc_inact_pane_g8

0xb6a7,	// (0x000170c0) popup_call_poc_inact_window_g2

0xc5a3,	// (0x00017fbc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x0001afe8) bg_popup_call_poc_inact_pane_g

0xb6af,	// (0x000170c8) popup_call_poc_inact_window_t1_ParamLimits

0xb6af,	// (0x000170c8) popup_call_poc_inact_window_t1

0xb6c4,	// (0x000170dd) popup_call_poc_inact_window_t2_ParamLimits

0xb6c4,	// (0x000170dd) popup_call_poc_inact_window_t2

0xb6d9,	// (0x000170f2) popup_call_poc_inact_window_t3_ParamLimits

0xb6d9,	// (0x000170f2) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0001af48) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0001af48) popup_call_poc_inact_window_t

0xc717,	// (0x00018130) context_pane_ParamLimits

0x4c39,	// (0x00010652) signal_pane_ParamLimits

0xb1d8,	// (0x00016bf1) main_call2_pane

0xc705,	// (0x0001811e) popup_phob_thumbnail2_window_ParamLimits

0xc705,	// (0x0001811e) popup_phob_thumbnail2_window

0xb3f0,	// (0x00016e09) aid_hotspot_pointer_arrow_pane

0xb3f8,	// (0x00016e11) aid_hotspot_pointer_hand_pane

0x47fc,	// (0x00010215) phob_pre_status_pane_g5

0x2a2b,	// (0x0000e444) cams_zoom_pane_ParamLimits

0x2a3a,	// (0x0000e453) image_vga_pane_ParamLimits

0x2a52,	// (0x0000e46b) main_camera_pane_g1_ParamLimits

0x2a62,	// (0x0000e47b) main_camera_pane_g2_ParamLimits

0x2a72,	// (0x0000e48b) main_camera_pane_g3_ParamLimits

0x2a82,	// (0x0000e49b) main_camera_pane_g4_ParamLimits

0x2a92,	// (0x0000e4ab) main_camera_pane_g5_ParamLimits

0x2aa2,	// (0x0000e4bb) main_camera_pane_g6_ParamLimits

0x2ab2,	// (0x0000e4cb) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0001ac47) main_camera_pane_g_ParamLimits

0x2ac2,	// (0x0000e4db) main_camera_pane_t1_ParamLimits

0x2ad8,	// (0x0000e4f1) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0001ac58) main_camera_pane_t_ParamLimits

0xa282,	// (0x00015c9b) bg_popup_preview_window_pane_cp01_ParamLimits

0xa282,	// (0x00015c9b) bg_popup_preview_window_pane_cp01

0xb6ee,	// (0x00017107) popup_phob_thumbnail2_window_g1_ParamLimits

0xb6ee,	// (0x00017107) popup_phob_thumbnail2_window_g1

0xa027,	// (0x00015a40) call2_cli_visual_pane

0x4553,	// (0x0000ff6c) popup_call2_audio_conf_window_ParamLimits

0x4553,	// (0x0000ff6c) popup_call2_audio_conf_window

0x4571,	// (0x0000ff8a) popup_call2_audio_first_window_ParamLimits

0x4571,	// (0x0000ff8a) popup_call2_audio_first_window

0x45e7,	// (0x00010000) popup_call2_audio_in_window_ParamLimits

0x45e7,	// (0x00010000) popup_call2_audio_in_window

0x461b,	// (0x00010034) popup_call2_audio_out_window_ParamLimits

0x461b,	// (0x00010034) popup_call2_audio_out_window

0x466d,	// (0x00010086) popup_call2_audio_second_window_ParamLimits

0x466d,	// (0x00010086) popup_call2_audio_second_window

0x46bf,	// (0x000100d8) popup_call2_audio_wait_window_ParamLimits

0x46bf,	// (0x000100d8) popup_call2_audio_wait_window

0xa027,	// (0x00015a40) bg_popup_call2_act_pane_cp03

0xa264,	// (0x00015c7d) list_conf_pane_cp

0xb6fa,	// (0x00017113) popup_call2_audio_conf_window_t1

0xaf4f,	// (0x00016968) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf4f,	// (0x00016968) list_single_graphic_popup_conf2_pane

0xaf62,	// (0x0001697b) list_highlight_pane_cp04

0xb708,	// (0x00017121) list_single_graphic_popup_conf2_pane_g1

0xaf73,	// (0x0001698c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0001af4f) list_single_graphic_popup_conf2_pane_g

0xb710,	// (0x00017129) list_single_graphic_popup_conf2_pane_t1

0xb71e,	// (0x00017137) bg_popup_call2_act_pane_cp01_ParamLimits

0xb71e,	// (0x00017137) bg_popup_call2_act_pane_cp01

0xb7a8,	// (0x000171c1) call_type_pane_cp05_ParamLimits

0xb7a8,	// (0x000171c1) call_type_pane_cp05

0xb7fc,	// (0x00017215) popup_call2_audio_second_window_g1_ParamLimits

0xb7fc,	// (0x00017215) popup_call2_audio_second_window_g1

0xb850,	// (0x00017269) popup_call2_audio_second_window_g2_ParamLimits

0xb850,	// (0x00017269) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0001af54) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0001af54) popup_call2_audio_second_window_g

0xb8b5,	// (0x000172ce) popup_call2_audio_second_window_t1_ParamLimits

0xb8b5,	// (0x000172ce) popup_call2_audio_second_window_t1

0xb970,	// (0x00017389) popup_call2_audio_second_window_t2_ParamLimits

0xb970,	// (0x00017389) popup_call2_audio_second_window_t2

0xb9c3,	// (0x000173dc) popup_call2_audio_second_window_t3_ParamLimits

0xb9c3,	// (0x000173dc) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0001af5b) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0001af5b) popup_call2_audio_second_window_t

0xa027,	// (0x00015a40) bg_popup_call2_in_pane_cp02

0xa031,	// (0x00015a4a) call_type_pane_cp04

0xa039,	// (0x00015a52) popup_call2_audio_wait_window_g1

0xa041,	// (0x00015a5a) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001ab34) popup_call2_audio_wait_window_g

0xa049,	// (0x00015a62) popup_call2_audio_wait_window_t3

0xbab6,	// (0x000174cf) bg_popup_call2_act_pane_ParamLimits

0xbab6,	// (0x000174cf) bg_popup_call2_act_pane

0xbb76,	// (0x0001758f) call_type_pane_cp03_ParamLimits

0xbb76,	// (0x0001758f) call_type_pane_cp03

0xbbda,	// (0x000175f3) popup_call2_audio_first_window_g1_ParamLimits

0xbbda,	// (0x000175f3) popup_call2_audio_first_window_g1

0xbc4a,	// (0x00017663) popup_call2_audio_first_window_g2_ParamLimits

0xbc4a,	// (0x00017663) popup_call2_audio_first_window_g2

0xb2a9,	// (0x00016cc2) popup_call2_audio_first_window_g3_ParamLimits

0xb2a9,	// (0x00016cc2) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0001af64) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0001af64) popup_call2_audio_first_window_g

0xbd28,	// (0x00017741) popup_call2_audio_first_window_t1_ParamLimits

0xbd28,	// (0x00017741) popup_call2_audio_first_window_t1

0xbe2b,	// (0x00017844) popup_call2_audio_first_window_t4_ParamLimits

0xbe2b,	// (0x00017844) popup_call2_audio_first_window_t4

0xbf0e,	// (0x00017927) popup_call2_audio_first_window_t5_ParamLimits

0xbf0e,	// (0x00017927) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0001af6f) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0001af6f) popup_call2_audio_first_window_t

0xa27a,	// (0x00015c93) bg_popup_call2_act_pane_g1

0xc5bb,	// (0x00017fd4) popup_cale_lunar_info_window_t1

0xc5c9,	// (0x00017fe2) popup_cale_lunar_info_window_t2

0xc5d7,	// (0x00017ff0) popup_cale_lunar_info_window_t3

0xa027,	// (0x00015a40) bg_popup_call2_bubble_pane

0xc00f,	// (0x00017a28) bg_popup_call2_in_pane_cp01_ParamLimits

0xc00f,	// (0x00017a28) bg_popup_call2_in_pane_cp01

0x9d03,	// (0x0001571c) call_type_pane_cp02

0xc057,	// (0x00017a70) popup_call2_audio_out_window_g1_ParamLimits

0xc057,	// (0x00017a70) popup_call2_audio_out_window_g1

0xc083,	// (0x00017a9c) popup_call2_audio_out_window_g2_ParamLimits

0xc083,	// (0x00017a9c) popup_call2_audio_out_window_g2

0xc0ab,	// (0x00017ac4) popup_call2_audio_out_window_g3_ParamLimits

0xc0ab,	// (0x00017ac4) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0001af78) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0001af78) popup_call2_audio_out_window_g

0xc0e6,	// (0x00017aff) popup_call2_audio_out_window_t1_ParamLimits

0xc0e6,	// (0x00017aff) popup_call2_audio_out_window_t1

0xc145,	// (0x00017b5e) popup_call2_audio_out_window_t2_ParamLimits

0xc145,	// (0x00017b5e) popup_call2_audio_out_window_t2

0xc199,	// (0x00017bb2) popup_call2_audio_out_window_t3_ParamLimits

0xc199,	// (0x00017bb2) popup_call2_audio_out_window_t3

0xc1af,	// (0x00017bc8) popup_call2_audio_out_window_t4_ParamLimits

0xc1af,	// (0x00017bc8) popup_call2_audio_out_window_t4

0xc1c5,	// (0x00017bde) popup_call2_audio_out_window_t5_ParamLimits

0xc1c5,	// (0x00017bde) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0001af81) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0001af81) popup_call2_audio_out_window_t

0xc229,	// (0x00017c42) bg_popup_call2_in_pane_ParamLimits

0xc229,	// (0x00017c42) bg_popup_call2_in_pane

0xc285,	// (0x00017c9e) popup_call2_audio_in_window_g1_ParamLimits

0xc285,	// (0x00017c9e) popup_call2_audio_in_window_g1

0xc2bd,	// (0x00017cd6) popup_call2_audio_in_window_g2_ParamLimits

0xc2bd,	// (0x00017cd6) popup_call2_audio_in_window_g2

0xc2f5,	// (0x00017d0e) popup_call2_audio_in_window_g3_ParamLimits

0xc2f5,	// (0x00017d0e) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0001af8e) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0001af8e) popup_call2_audio_in_window_g

0xc34d,	// (0x00017d66) popup_call2_audio_in_window_t1_ParamLimits

0xc34d,	// (0x00017d66) popup_call2_audio_in_window_t1

0xc3cd,	// (0x00017de6) popup_call2_audio_in_window_t2_ParamLimits

0xc3cd,	// (0x00017de6) popup_call2_audio_in_window_t2

0xc44d,	// (0x00017e66) popup_call2_audio_in_window_t3_ParamLimits

0xc44d,	// (0x00017e66) popup_call2_audio_in_window_t3

0xc467,	// (0x00017e80) popup_call2_audio_in_window_t4_ParamLimits

0xc467,	// (0x00017e80) popup_call2_audio_in_window_t4

0xc479,	// (0x00017e92) popup_call2_audio_in_window_t5_ParamLimits

0xc479,	// (0x00017e92) popup_call2_audio_in_window_t5

0xc48e,	// (0x00017ea7) popup_call2_audio_in_window_t6_ParamLimits

0xc48e,	// (0x00017ea7) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0001af97) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0001af97) popup_call2_audio_in_window_t

0xa27a,	// (0x00015c93) bg_popup_call2_in_pane_g1

0xc5e5,	// (0x00017ffe) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x0001b012) popup_cale_lunar_info_window_t

0xa282,	// (0x00015c9b) bg_popup_call2_rect_pane_ParamLimits

0xa282,	// (0x00015c9b) bg_popup_call2_rect_pane

0xa027,	// (0x00015a40) call2_cli_visual_graphic_pane

0xa027,	// (0x00015a40) call2_cli_visual_text_pane

0xc7b7,	// (0x000181d0) smil_status_volume_pane_g3

0x0002,

0xa416,	// (0x00015e2f) call2_cli_visual_graphic_pane_g1

0xa416,	// (0x00015e2f) call2_cli_visual_graphic_pane_g2

0xa416,	// (0x00015e2f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0001afa4) call2_cli_visual_graphic_pane_g

0xc4a3,	// (0x00017ebc) bg_popup_call2_rect_pane_g1

0xa4be,	// (0x00015ed7) bg_popup_call2_rect_pane_g2

0xc4ab,	// (0x00017ec4) bg_popup_call2_rect_pane_g3

0xc4b3,	// (0x00017ecc) bg_popup_call2_rect_pane_g4

0xc4bb,	// (0x00017ed4) bg_popup_call2_rect_pane_g5

0xc4c3,	// (0x00017edc) bg_popup_call2_rect_pane_g6

0xc4cb,	// (0x00017ee4) bg_popup_call2_rect_pane_g7

0xc4d3,	// (0x00017eec) bg_popup_call2_rect_pane_g8

0xc4db,	// (0x00017ef4) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0001afab) bg_popup_call2_rect_pane_g

0xc4e3,	// (0x00017efc) bg_popup_call2_bubble_pane_g1

0xc4eb,	// (0x00017f04) bg_popup_call2_bubble_pane_g2

0xc4f3,	// (0x00017f0c) bg_popup_call2_bubble_pane_g3

0xc4fb,	// (0x00017f14) bg_popup_call2_bubble_pane_g4

0xc503,	// (0x00017f1c) bg_popup_call2_bubble_pane_g5

0xc50b,	// (0x00017f24) bg_popup_call2_bubble_pane_g6

0xc513,	// (0x00017f2c) bg_popup_call2_bubble_pane_g7

0xc51b,	// (0x00017f34) bg_popup_call2_bubble_pane_g8

0xc523,	// (0x00017f3c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0001afbe) bg_popup_call2_bubble_pane_g

0x254e,	// (0x0000df67) aid_cale_week_size_cell_pane

0x2aee,	// (0x0000e507) aid_cams_cif_uncrop_pane_ParamLimits

0x2aee,	// (0x0000e507) aid_cams_cif_uncrop_pane

0x2c8f,	// (0x0000e6a8) aid_cams_size_cell_ParamLimits

0x2c8f,	// (0x0000e6a8) aid_cams_size_cell

0x2ca3,	// (0x0000e6bc) grid_cams_pane_ParamLimits

0x2cb8,	// (0x0000e6d1) linegrid_cams_pane_ParamLimits

0x2dd2,	// (0x0000e7eb) call_video_pane_t1

0x2dec,	// (0x0000e805) call_video_pane_t2

0x0001,

0xf292,	// (0x0001acab) call_video_pane_t

0x3171,	// (0x0000eb8a) aid_cale_month_size_cell_pane_ParamLimits

0x3171,	// (0x0000eb8a) aid_cale_month_size_cell_pane

0xf642,	// (0x0001b05b) smil_status_volume_pane_g

0xc7c4,	// (0x000181dd) volume_smil_pane_ParamLimits

0x9bc7,	// (0x000155e0) aid_popup2_width_pane

0x24c8,	// (0x0000dee1) cell_qdial_pane_g4_ParamLimits

0x24c8,	// (0x0000dee1) cell_qdial_pane_g4

0x3c54,	// (0x0000f66d) aid_blid_cardinal_pane_ParamLimits

0x3c60,	// (0x0000f679) aid_blid_destination_pane_ParamLimits

0x3c60,	// (0x0000f679) aid_blid_destination_pane

0xa282,	// (0x00015c9b) bg_popup_call_poc_act_pane_ParamLimits

0xa282,	// (0x00015c9b) bg_popup_call_poc_act_pane

0xa282,	// (0x00015c9b) bg_popup_call_poc_inact_pane_ParamLimits

0xa282,	// (0x00015c9b) bg_popup_call_poc_inact_pane

0xc52b,	// (0x00017f44) bg_popup_call_poc_act_pane_g1

0xc533,	// (0x00017f4c) bg_popup_call_poc_act_pane_g2

0xc53b,	// (0x00017f54) bg_popup_call_poc_act_pane_g3

0xc4fb,	// (0x00017f14) bg_popup_call_poc_act_pane_g4

0xc503,	// (0x00017f1c) bg_popup_call_poc_act_pane_g5

0xc543,	// (0x00017f5c) bg_popup_call_poc_act_pane_g6

0xc513,	// (0x00017f2c) bg_popup_call_poc_act_pane_g7

0xc54b,	// (0x00017f64) bg_popup_call_poc_act_pane_g8

0xa027,	// (0x00015a40) main_usb_pane

0xc6e4,	// (0x000180fd) popup_cale_lunar_info_window

0x3031,	// (0x0000ea4a) im_reading_pane_t1_ParamLimits

0xa7d2,	// (0x000161eb) list_im_pane_ParamLimits

0xa7e3,	// (0x000161fc) scroll_pane_cp07_ParamLimits

0xa027,	// (0x00015a40) grid_highlight_pane_cp012

0xa282,	// (0x00015c9b) mup_scale_pane_ParamLimits

0xb440,	// (0x00016e59) main_usb_pane_g1_ParamLimits

0xb440,	// (0x00016e59) main_usb_pane_g1

0x4719,	// (0x00010132) main_usb_pane_g2_ParamLimits

0x4719,	// (0x00010132) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x0001affb) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x0001affb) main_usb_pane_g

0x472d,	// (0x00010146) main_usb_pane_t1_ParamLimits

0x472d,	// (0x00010146) main_usb_pane_t1

0x473f,	// (0x00010158) main_usb_pane_t2_ParamLimits

0x473f,	// (0x00010158) main_usb_pane_t2

0x4751,	// (0x0001016a) main_usb_pane_t3_ParamLimits

0x4751,	// (0x0001016a) main_usb_pane_t3

0x4763,	// (0x0001017c) main_usb_pane_t4_ParamLimits

0x4763,	// (0x0001017c) main_usb_pane_t4

0x4775,	// (0x0001018e) main_usb_pane_t5_ParamLimits

0x4775,	// (0x0001018e) main_usb_pane_t5

0x4787,	// (0x000101a0) main_usb_pane_t6_ParamLimits

0x4787,	// (0x000101a0) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x0001b000) main_usb_pane_t_ParamLimits

0xb09c,	// (0x00016ab5) aid_text_placing

0x3c00,	// (0x0000f619) main_location2_pane_t1_ParamLimits

0x3c16,	// (0x0000f62f) main_location2_pane_t2_ParamLimits

0x3c2c,	// (0x0000f645) main_location2_pane_t3_ParamLimits

0x3c42,	// (0x0000f65b) main_location2_pane_t4_ParamLimits

0x3c42,	// (0x0000f65b) main_location2_pane_t4

0xf3f3,	// (0x0001ae0c) main_location2_pane_t_ParamLimits

0xa2be,	// (0x00015cd7) find_pinb_pane_g2_ParamLimits

0xa2be,	// (0x00015cd7) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0001ab5a) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0001ab5a) find_pinb_pane_g

0xa2ca,	// (0x00015ce3) find_pinb_pane_t1_ParamLimits

0xa2dc,	// (0x00015cf5) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0001ab5f) find_pinb_pane_t_ParamLimits

0xa027,	// (0x00015a40) main_call3_pane

0x34ad,	// (0x0000eec6) cale_month_day_heading_pane_t1_ParamLimits

0x350b,	// (0x0000ef24) cale_month_day_heading_pane_t2_ParamLimits

0x3570,	// (0x0000ef89) cale_month_day_heading_pane_t3_ParamLimits

0x35d5,	// (0x0000efee) cale_month_day_heading_pane_t4_ParamLimits

0x363a,	// (0x0000f053) cale_month_day_heading_pane_t5_ParamLimits

0x369f,	// (0x0000f0b8) cale_month_day_heading_pane_t6_ParamLimits

0x3704,	// (0x0000f11d) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0001ace3) cale_month_day_heading_pane_t_ParamLimits

0xaa69,	// (0x00016482) smil_status_volume_pane

0x42a2,	// (0x0000fcbb) postcard_address_pane_ParamLimits

0x42a2,	// (0x0000fcbb) postcard_address_pane

0x42b4,	// (0x0000fccd) postcard_message_pane_ParamLimits

0x42b4,	// (0x0000fccd) postcard_message_pane

0x46f7,	// (0x00010110) call2_cli_visual_pane_t1_ParamLimits

0x46f7,	// (0x00010110) call2_cli_visual_pane_t1

0x4e55,	// (0x0001086e) postcard_message_pane_t1_ParamLimits

0x4e55,	// (0x0001086e) postcard_message_pane_t1

0x4e3e,	// (0x00010857) postcard_address_pane_t1_ParamLimits

0x4e3e,	// (0x00010857) postcard_address_pane_t1

0x4e2c,	// (0x00010845) popup_call3_audio_in_window_ParamLimits

0x4e2c,	// (0x00010845) popup_call3_audio_in_window

0x4cbb,	// (0x000106d4) bg_popup_call3_in_pane_ParamLimits

0x4cbb,	// (0x000106d4) bg_popup_call3_in_pane

0x4d2d,	// (0x00010746) popup_call3_audio_in_window_g1_ParamLimits

0x4d2d,	// (0x00010746) popup_call3_audio_in_window_g1

0x4d4d,	// (0x00010766) popup_call3_audio_in_window_g2_ParamLimits

0x4d4d,	// (0x00010766) popup_call3_audio_in_window_g2

0x4d6d,	// (0x00010786) popup_call3_audio_in_window_g3_ParamLimits

0x4d6d,	// (0x00010786) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x0001b062) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x0001b062) popup_call3_audio_in_window_g

0x4d9e,	// (0x000107b7) popup_call3_audio_in_window_t1_ParamLimits

0x4d9e,	// (0x000107b7) popup_call3_audio_in_window_t1

0x4ddc,	// (0x000107f5) popup_call3_audio_in_window_t2_ParamLimits

0x4ddc,	// (0x000107f5) popup_call3_audio_in_window_t2

0x4e1a,	// (0x00010833) popup_call3_audio_in_window_t3_ParamLimits

0x4e1a,	// (0x00010833) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x0001b06b) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x0001b06b) popup_call3_audio_in_window_t

0xb1d8,	// (0x00016bf1) bg_popup_call3_rect_pane

0xc4a3,	// (0x00017ebc) bg_popup_call3_rect_pane_g1

0xa4be,	// (0x00015ed7) bg_popup_call3_rect_pane_g2

0xc4ab,	// (0x00017ec4) bg_popup_call3_rect_pane_g3

0xc4b3,	// (0x00017ecc) bg_popup_call3_rect_pane_g4

0xc4bb,	// (0x00017ed4) bg_popup_call3_rect_pane_g5

0xc4c3,	// (0x00017edc) bg_popup_call3_rect_pane_g6

0xc4cb,	// (0x00017ee4) bg_popup_call3_rect_pane_g7

0x3f5e,	// (0x0000f977) mup_visualizer_osc_pane

0xb2b7,	// (0x00016cd0) mup_visualizer_spec_pane

0x4ceb,	// (0x00010704) call3_video_qcif_pane_ParamLimits

0x4ceb,	// (0x00010704) call3_video_qcif_pane

0x4cfc,	// (0x00010715) call3_video_qcif_uncrop_pane_ParamLimits

0x4cfc,	// (0x00010715) call3_video_qcif_uncrop_pane

0x4d08,	// (0x00010721) call3_video_subqcif_pane_ParamLimits

0x4d08,	// (0x00010721) call3_video_subqcif_pane

0x4d1c,	// (0x00010735) call3_video_subqcif_uncrop_pane_ParamLimits

0x4d1c,	// (0x00010735) call3_video_subqcif_uncrop_pane

0x4d8d,	// (0x000107a6) popup_call3_audio_in_window_g4_ParamLimits

0x4d8d,	// (0x000107a6) popup_call3_audio_in_window_g4

0x4caa,	// (0x000106c3) mup_spec_half_pane

0x4cb3,	// (0x000106cc) mup_spec_half_pane_cp

0xc777,	// (0x00018190) mup_osc_middle_pane

0xc780,	// (0x00018199) mup_visualizer_osc_pane_g1

0x4c8b,	// (0x000106a4) mup_spec_bar_pane_ParamLimits

0x4c8b,	// (0x000106a4) mup_spec_bar_pane

0xc764,	// (0x0001817d) mup_spec_bar_pane_g1

0xc76e,	// (0x00018187) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0001b056) mup_spec_bar_pane_g

0x254e,	// (0x0000df67) aid_cale_week_size_cell_pane_ParamLimits

0x2561,	// (0x0000df7a) bg_cale_heading_pane_ParamLimits

0xa54a,	// (0x00015f63) bg_cale_pane_cp01_ParamLimits

0x2575,	// (0x0000df8e) cale_week_corner_pane_ParamLimits

0x258b,	// (0x0000dfa4) cale_week_day_heading_pane_ParamLimits

0x259f,	// (0x0000dfb8) cale_week_scroll_pane_g1_ParamLimits

0x25b0,	// (0x0000dfc9) cale_week_scroll_pane_g2_ParamLimits

0x25c1,	// (0x0000dfda) cale_week_scroll_pane_g3_ParamLimits

0x25d2,	// (0x0000dfeb) cale_week_scroll_pane_g4_ParamLimits

0x25e3,	// (0x0000dffc) cale_week_scroll_pane_g5_ParamLimits

0x25f4,	// (0x0000e00d) cale_week_scroll_pane_g6_ParamLimits

0x2605,	// (0x0000e01e) cale_week_scroll_pane_g7_ParamLimits

0x2616,	// (0x0000e02f) cale_week_scroll_pane_g8_ParamLimits

0x2629,	// (0x0000e042) cale_week_scroll_pane_g9_ParamLimits

0x263a,	// (0x0000e053) cale_week_scroll_pane_g10_ParamLimits

0x264b,	// (0x0000e064) cale_week_scroll_pane_g11_ParamLimits

0x265c,	// (0x0000e075) cale_week_scroll_pane_g12_ParamLimits

0x266d,	// (0x0000e086) cale_week_scroll_pane_g13_ParamLimits

0x267e,	// (0x0000e097) cale_week_scroll_pane_g14_ParamLimits

0x268f,	// (0x0000e0a8) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0001abeb) cale_week_scroll_pane_g_ParamLimits

0x26a0,	// (0x0000e0b9) cale_week_time_pane_ParamLimits

0x26b3,	// (0x0000e0cc) grid_cale_week_pane_ParamLimits

0xa563,	// (0x00015f7c) listscroll_cale_week_pane_t1

0x26c6,	// (0x0000e0df) scroll_pane_cp08_ParamLimits

0x31b2,	// (0x0000ebcb) cale_month_corner_pane_ParamLimits

0xaa09,	// (0x00016422) cale_month_pane_t1

0x346c,	// (0x0000ee85) cale_month_week_pane_ParamLimits

0x3a47,	// (0x0000f460) popup_call_status_window_g1_ParamLimits

0x3a5b,	// (0x0000f474) popup_call_status_window_g2_ParamLimits

0x3a6f,	// (0x0000f488) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0001ad93) popup_call_status_window_g_ParamLimits

0xae73,	// (0x0001688c) aid_call2_pane

0x4161,	// (0x0000fb7a) msg_header_pane_g1

0x42a2,	// (0x0000fcbb) postcard_address2_pane_ParamLimits

0x42a2,	// (0x0000fcbb) postcard_address2_pane

0x42b4,	// (0x0000fccd) postcard_message2_pane_ParamLimits

0x42b4,	// (0x0000fccd) postcard_message2_pane

0x4c47,	// (0x00010660) message2_row_pane_ParamLimits

0x4c47,	// (0x00010660) message2_row_pane

0x4c61,	// (0x0001067a) address2_row_pane_ParamLimits

0x4c61,	// (0x0001067a) address2_row_pane

0xc732,	// (0x0001814b) postcard_message2_row_pane_g1

0xc73a,	// (0x00018153) postcard_message2_row_pane_t1

0xc732,	// (0x0001814b) address2_row_pane_g1

0xc73a,	// (0x00018153) address2_row_pane_t1

0x29f6,	// (0x0000e40f) aid_size_cell_vorec

0xa027,	// (0x00015a40) main_rss_pane

0x4c74,	// (0x0001068d) rss_list_single_pane_ParamLimits

0x4c74,	// (0x0001068d) rss_list_single_pane

0xc748,	// (0x00018161) rss_list_single_pane_t1

0xc756,	// (0x0001816f) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x0001b051) rss_list_single_pane_t

0xa027,	// (0x00015a40) main_camera2_pane

0xa027,	// (0x00015a40) main_video2_pane

0x4eae,	// (0x000108c7) cams_zoom_pane_cp2_ParamLimits

0x4eae,	// (0x000108c7) cams_zoom_pane_cp2

0x4ec5,	// (0x000108de) image2_vga_pane_ParamLimits

0x4ec5,	// (0x000108de) image2_vga_pane

0x4efb,	// (0x00010914) main_camera2_pane_g1_ParamLimits

0x4efb,	// (0x00010914) main_camera2_pane_g1

0x4f1b,	// (0x00010934) main_camera2_pane_g2_ParamLimits

0x4f1b,	// (0x00010934) main_camera2_pane_g2

0x4f32,	// (0x0001094b) main_camera2_pane_g3_ParamLimits

0x4f32,	// (0x0001094b) main_camera2_pane_g3

0x4f49,	// (0x00010962) main_camera2_pane_g4_ParamLimits

0x4f49,	// (0x00010962) main_camera2_pane_g4

0x4f60,	// (0x00010979) main_camera2_pane_g5_ParamLimits

0x4f60,	// (0x00010979) main_camera2_pane_g5

0x4f77,	// (0x00010990) main_camera2_pane_g6_ParamLimits

0x4f77,	// (0x00010990) main_camera2_pane_g6

0x4f8e,	// (0x000109a7) main_camera2_pane_g7_ParamLimits

0x4f8e,	// (0x000109a7) main_camera2_pane_g7

0x4fa5,	// (0x000109be) main_camera2_pane_g8_ParamLimits

0x4fa5,	// (0x000109be) main_camera2_pane_g8

0x0008,

0xf659,	// (0x0001b072) main_camera2_pane_g_ParamLimits

0xf659,	// (0x0001b072) main_camera2_pane_g

0x4fd3,	// (0x000109ec) main_camera2_pane_t1_ParamLimits

0x4fd3,	// (0x000109ec) main_camera2_pane_t1

0x5002,	// (0x00010a1b) main_camera2_pane_t2_ParamLimits

0x5002,	// (0x00010a1b) main_camera2_pane_t2

0x501f,	// (0x00010a38) main_camera2_pane_t3_ParamLimits

0x501f,	// (0x00010a38) main_camera2_pane_t3

0x506b,	// (0x00010a84) main_camera2_pane_t4_ParamLimits

0x506b,	// (0x00010a84) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x0001b085) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x0001b085) main_camera2_pane_t

0x50e0,	// (0x00010af9) cams_zoom_pane_cp4_ParamLimits

0x50e0,	// (0x00010af9) cams_zoom_pane_cp4

0x50f6,	// (0x00010b0f) image2_cif_pane_ParamLimits

0x50f6,	// (0x00010b0f) image2_cif_pane

0x5119,	// (0x00010b32) image2_subqcif_pane_ParamLimits

0x5119,	// (0x00010b32) image2_subqcif_pane

0x512f,	// (0x00010b48) main_video2_pane_g1_ParamLimits

0x512f,	// (0x00010b48) main_video2_pane_g1

0x5149,	// (0x00010b62) main_video2_pane_g2_ParamLimits

0x5149,	// (0x00010b62) main_video2_pane_g2

0x515f,	// (0x00010b78) main_video2_pane_g3_ParamLimits

0x515f,	// (0x00010b78) main_video2_pane_g3

0x5175,	// (0x00010b8e) main_video2_pane_g4_ParamLimits

0x5175,	// (0x00010b8e) main_video2_pane_g4

0x518b,	// (0x00010ba4) main_video2_pane_g5_ParamLimits

0x518b,	// (0x00010ba4) main_video2_pane_g5

0x51a1,	// (0x00010bba) main_video2_pane_g6_ParamLimits

0x51a1,	// (0x00010bba) main_video2_pane_g6

0x0005,

0xf67b,	// (0x0001b094) main_video2_pane_g_ParamLimits

0xf67b,	// (0x0001b094) main_video2_pane_g

0x51bb,	// (0x00010bd4) main_video2_pane_t1_ParamLimits

0x51bb,	// (0x00010bd4) main_video2_pane_t1

0x51df,	// (0x00010bf8) main_video2_pane_t2_ParamLimits

0x51df,	// (0x00010bf8) main_video2_pane_t2

0x5229,	// (0x00010c42) main_video2_pane_t3_ParamLimits

0x5229,	// (0x00010c42) main_video2_pane_t3

0x0002,

0xf688,	// (0x0001b0a1) main_video2_pane_t_ParamLimits

0xf688,	// (0x0001b0a1) main_video2_pane_t

0x4836,	// (0x0001024f) call_muted_g2

0x0001,

0xf62a,	// (0x0001b043) call_muted_g

0xa027,	// (0x00015a40) main_mup2_pane

0x526b,	// (0x00010c84) main_mup2_pane_g1_ParamLimits

0x526b,	// (0x00010c84) main_mup2_pane_g1

0x5277,	// (0x00010c90) main_mup2_pane_g2_ParamLimits

0x5277,	// (0x00010c90) main_mup2_pane_g2

0xc8e3,	// (0x000182fc) main_mup_pane_g13_cp1

0xc8eb,	// (0x00018304) mup_volume_pane_cp1

0x5293,	// (0x00010cac) main_mup2_pane_g4_ParamLimits

0x5293,	// (0x00010cac) main_mup2_pane_g4

0x52a3,	// (0x00010cbc) main_mup2_pane_g5_ParamLimits

0x52a3,	// (0x00010cbc) main_mup2_pane_g5

0x52b3,	// (0x00010ccc) main_mup2_pane_g6_ParamLimits

0x52b3,	// (0x00010ccc) main_mup2_pane_g6

0x52c3,	// (0x00010cdc) main_mup2_pane_g7_ParamLimits

0x52c3,	// (0x00010cdc) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x0001b0a8) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x0001b0a8) main_mup2_pane_g

0x52db,	// (0x00010cf4) main_mup2_pane_t1_ParamLimits

0x52db,	// (0x00010cf4) main_mup2_pane_t1

0x52f1,	// (0x00010d0a) main_mup2_pane_t2_ParamLimits

0x52f1,	// (0x00010d0a) main_mup2_pane_t2

0x5307,	// (0x00010d20) main_mup2_pane_t3_ParamLimits

0x5307,	// (0x00010d20) main_mup2_pane_t3

0x531d,	// (0x00010d36) main_mup2_pane_t4_ParamLimits

0x531d,	// (0x00010d36) main_mup2_pane_t4

0x5335,	// (0x00010d4e) main_mup2_pane_t5_ParamLimits

0x5335,	// (0x00010d4e) main_mup2_pane_t5

0x534d,	// (0x00010d66) main_mup2_pane_t6_ParamLimits

0x534d,	// (0x00010d66) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x0001b0b7) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x0001b0b7) main_mup2_pane_t

0x537d,	// (0x00010d96) mup2_visualizer_pane_ParamLimits

0x537d,	// (0x00010d96) mup2_visualizer_pane

0x53a8,	// (0x00010dc1) mup_progress_pane_cp_ParamLimits

0x53a8,	// (0x00010dc1) mup_progress_pane_cp

0xc8c5,	// (0x000182de) mup_volume_pane_cp_ParamLimits

0xc8c5,	// (0x000182de) mup_volume_pane_cp

0x53bc,	// (0x00010dd5) mup2_visualizer_pane_g1_ParamLimits

0x53bc,	// (0x00010dd5) mup2_visualizer_pane_g1

0xc804,	// (0x0001821d) mup2_visualizer_pane_g2_ParamLimits

0xc804,	// (0x0001821d) mup2_visualizer_pane_g2

0x53d1,	// (0x00010dea) mup2_visualizer_pane_g3_ParamLimits

0x53d1,	// (0x00010dea) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x0001b0c4) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x0001b0c4) mup2_visualizer_pane_g

0xb589,	// (0x00016fa2) aid_size_cell_fmradio

0x4992,	// (0x000103ab) aid_height_parent_landcape

0xa870,	// (0x00016289) wml_content_pane_cp

0xa878,	// (0x00016291) wml_tabs_pane

0xa881,	// (0x0001629a) popup_wml_miniature_window

0xa889,	// (0x000162a2) scroll_pane_cp021

0xa89d,	// (0x000162b6) wml_content_pane_comp8

0xa027,	// (0x00015a40) bg_popup_sub_pane_cp05

0xc822,	// (0x0001823b) popup_wml_miniature_window_g1

0xc82a,	// (0x00018243) wml_miniature_view_pane

0x53dd,	// (0x00010df6) aid_size_wml_view

0x53e5,	// (0x00010dfe) wml_miniature_view_pane_g1

0x53ee,	// (0x00010e07) wml_miniature_view_pane_g2

0x53f7,	// (0x00010e10) wml_miniature_view_pane_g3

0x53ff,	// (0x00010e18) wml_miniature_view_pane_g4

0x5407,	// (0x00010e20) wml_miniature_view_pane_g5

0x540f,	// (0x00010e28) wml_miniature_view_pane_g6

0x5417,	// (0x00010e30) wml_miniature_view_pane_g7

0x541f,	// (0x00010e38) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x0001b0cb) wml_miniature_view_pane_g

0xc832,	// (0x0001824b) background_graphic_ParamLimits

0xc832,	// (0x0001824b) background_graphic

0xc83e,	// (0x00018257) wml_tabs_2_pane

0xc847,	// (0x00018260) wml_tabs_3_pane_ParamLimits

0xc847,	// (0x00018260) wml_tabs_3_pane

0xc859,	// (0x00018272) wml_tabs_4_pane_ParamLimits

0xc859,	// (0x00018272) wml_tabs_4_pane

0xc86f,	// (0x00018288) wml_tabs_5_pane_ParamLimits

0xc86f,	// (0x00018288) wml_tabs_5_pane

0xc889,	// (0x000182a2) wml_tabs_pane_g2_ParamLimits

0xc889,	// (0x000182a2) wml_tabs_pane_g2

0xc89d,	// (0x000182b6) wml_tabs_pane_g3_ParamLimits

0xc89d,	// (0x000182b6) wml_tabs_pane_g3

0x5427,	// (0x00010e40) wml_tabs_2_active_pane_ParamLimits

0x5427,	// (0x00010e40) wml_tabs_2_active_pane

0x5437,	// (0x00010e50) wml_tabs_2_passive_pane_ParamLimits

0x5437,	// (0x00010e50) wml_tabs_2_passive_pane

0x5447,	// (0x00010e60) wml_tabs_3_active_pane_cp_ParamLimits

0x5447,	// (0x00010e60) wml_tabs_3_active_pane_cp

0x5458,	// (0x00010e71) wml_tabs_3_passive_pane_ParamLimits

0x5458,	// (0x00010e71) wml_tabs_3_passive_pane

0x5469,	// (0x00010e82) wml_tabs_3_passive_pane_cp_ParamLimits

0x5469,	// (0x00010e82) wml_tabs_3_passive_pane_cp

0x547a,	// (0x00010e93) tabs_4_active_pane

0x5482,	// (0x00010e9b) tabs_4_passive_pane

0x548a,	// (0x00010ea3) tabs_4_passive_pane_cp

0x5492,	// (0x00010eab) tabs_4_passive_pane_cp2

0x4711,	// (0x0001012a) aid_height_text

0x3f34,	// (0x0000f94d) mup_volume_cont_pane_ParamLimits

0x3f34,	// (0x0000f94d) mup_volume_cont_pane

0x21d8,	// (0x0000dbf1) aid_size_cell_pinb

0x21e2,	// (0x0000dbfb) aid_size_list_pinb

0x5394,	// (0x00010dad) mup2_volume_cont_pane_ParamLimits

0x5394,	// (0x00010dad) mup2_volume_cont_pane

0xc8b1,	// (0x000182ca) mup2_volume_cont_pane_g1_ParamLimits

0xc8b1,	// (0x000182ca) mup2_volume_cont_pane_g1

0x1f01,	// (0x0000d91a) aid_size_cell_touch_ParamLimits

0x1f01,	// (0x0000d91a) aid_size_cell_touch

0x20e0,	// (0x0000daf9) touch_pane_ParamLimits

0x20e0,	// (0x0000daf9) touch_pane

0x9bb5,	// (0x000155ce) main_rss2_pane

0xc8f3,	// (0x0001830c) listscroll_rss2_pane

0xc8fc,	// (0x00018315) rss2_navigation_pane

0xc904,	// (0x0001831d) list_rss2_pane

0xb019,	// (0x00016a32) scroll_pane_cp22

0xc90c,	// (0x00018325) rss2_navigation_pane_g1

0xc915,	// (0x0001832e) rss2_navigation_pane_g2

0xc91d,	// (0x00018336) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x0001b0dc) rss2_navigation_pane_g

0xc925,	// (0x0001833e) rss2_navigation_pane_t1

0x549a,	// (0x00010eb3) rss2_list_single_pane_ParamLimits

0x549a,	// (0x00010eb3) rss2_list_single_pane

0xc933,	// (0x0001834c) rss2_list_single_pane_t2

0xc941,	// (0x0001835a) rss2_list_single_pane_t3_ParamLimits

0xc941,	// (0x0001835a) rss2_list_single_pane_t3

0xc95e,	// (0x00018377) rss2_list_single_pane_t4

0x38ce,	// (0x0000f2e7) smil_status_pane_g1

0x9c08,	// (0x00015621) main_image2_pane_ParamLimits

0x9c08,	// (0x00015621) main_image2_pane

0x4fbc,	// (0x000109d5) main_camera2_pane_g9_ParamLimits

0x4fbc,	// (0x000109d5) main_camera2_pane_g9

0x50ae,	// (0x00010ac7) main_camera2_pane_t5_ParamLimits

0x50ae,	// (0x00010ac7) main_camera2_pane_t5

0xc7d9,	// (0x000181f2) main_camera2_pane_t6_ParamLimits

0xc7d9,	// (0x000181f2) main_camera2_pane_t6

0x54ae,	// (0x00010ec7) main_image2_pane_g1_ParamLimits

0x54ae,	// (0x00010ec7) main_image2_pane_g1

0x44c9,	// (0x0000fee2) smil2_video_pane_ParamLimits

0x44c9,	// (0x0000fee2) smil2_video_pane

0x9bcf,	// (0x000155e8) aid_zoom_text_primary_cp

0x9c00,	// (0x00015619) popup_preview_fixed_window

0xa7ca,	// (0x000161e3) im_reading_pane_g1

0x4ea2,	// (0x000108bb) cams2_bc_adjust_pane_cp_ParamLimits

0x4ea2,	// (0x000108bb) cams2_bc_adjust_pane_cp

0x50d4,	// (0x00010aed) cams2_bc_adjust_pane_ParamLimits

0x50d4,	// (0x00010aed) cams2_bc_adjust_pane

0xc96c,	// (0x00018385) cams2_bc_adjust_pane_g1

0xc974,	// (0x0001838d) cams2_slider_pane

0xc97d,	// (0x00018396) cams2_slider_pane_g1

0xc986,	// (0x0001839f) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x0001b0e3) cams2_slider_pane_g

0x22c2,	// (0x0000dcdb) calc_display_pane_ParamLimits

0x22de,	// (0x0000dcf7) calc_paper_pane_ParamLimits

0x22ff,	// (0x0000dd18) grid_calc_pane_ParamLimits

0xaed5,	// (0x000168ee) popup_clock_digital_window_t1_ParamLimits

0xb526,	// (0x00016f3f) main_image_pane_t1

0x22a4,	// (0x0000dcbd) aid_size_cell_calc_ParamLimits

0x22a4,	// (0x0000dcbd) aid_size_cell_calc

0x49c2,	// (0x000103db) popup_blid_sat_info2_window_ParamLimits

0x49c2,	// (0x000103db) popup_blid_sat_info2_window

0xc9a8,	// (0x000183c1) aid_size_cell_blid

0xc9b0,	// (0x000183c9) bg_popup_window_pane_cp07

0xc9d3,	// (0x000183ec) grid_popup_blid_pane

0xc9db,	// (0x000183f4) heading_pane_cp05_ParamLimits

0xc9db,	// (0x000183f4) heading_pane_cp05

0xcaa3,	// (0x000184bc) cell_popup_blid_pane_ParamLimits

0xcaa3,	// (0x000184bc) cell_popup_blid_pane

0xcac3,	// (0x000184dc) cell_popup_blid_pane_g1

0xcacb,	// (0x000184e4) cell_popup_blid_pane_t1

0x5367,	// (0x00010d80) mup2_indicator_pane_ParamLimits

0x5367,	// (0x00010d80) mup2_indicator_pane

0xb1d8,	// (0x00016bf1) mup2_visualizer_osc_pane

0xc810,	// (0x00018229) mup2_visualizer_spec_pane_ParamLimits

0xc810,	// (0x00018229) mup2_visualizer_spec_pane

0x54c2,	// (0x00010edb) mup2_spec_half_pane

0x54cb,	// (0x00010ee4) mup2_spec_half_pane_cp

0x54d3,	// (0x00010eec) mup2_spec_bar_pane_ParamLimits

0x54d3,	// (0x00010eec) mup2_spec_bar_pane

0xc764,	// (0x0001817d) mup2_spec_bar_pane_g1

0xc76e,	// (0x00018187) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0001b056) mup2_spec_bar_pane_g

0x54f2,	// (0x00010f0b) mup2_osc_middle_pane

0xc780,	// (0x00018199) mup2_visualizer_osc_pane_g1

0x9c36,	// (0x0001564f) popup_number_entry_window_t1_ParamLimits

0x9c49,	// (0x00015662) popup_number_entry_window_t2_ParamLimits

0x9c5b,	// (0x00015674) popup_number_entry_window_t3_ParamLimits

0x2128,	// (0x0000db41) popup_number_entry_window_t5_ParamLimits

0x2128,	// (0x0000db41) popup_number_entry_window_t5

0xf0ec,	// (0x0001ab05) popup_number_entry_window_t_ParamLimits

0x9c6d,	// (0x00015686) text_title_cp2_ParamLimits

0xb400,	// (0x00016e19) aid_hotspot_pointer_text2_pane

0xb426,	// (0x00016e3f) main_viewer_pane_g9_ParamLimits

0xb426,	// (0x00016e3f) main_viewer_pane_g9

0xaa09,	// (0x00016422) cale_month_pane_t1_ParamLimits

0xaa9e,	// (0x000164b7) bg_cale_pane_ParamLimits

0xaab6,	// (0x000164cf) list_cale_pane_ParamLimits

0xa563,	// (0x00015f7c) listscroll_cale_day_pane_t1

0xaac7,	// (0x000164e0) scroll_pane_cp09_ParamLimits

0x3f66,	// (0x0000f97f) main_mup_eq_pane_t1_ParamLimits

0x3f66,	// (0x0000f97f) main_mup_eq_pane_t1

0x3f7e,	// (0x0000f997) main_mup_eq_pane_t2_ParamLimits

0x3f7e,	// (0x0000f997) main_mup_eq_pane_t2

0x3f94,	// (0x0000f9ad) main_mup_eq_pane_t3_ParamLimits

0x3f94,	// (0x0000f9ad) main_mup_eq_pane_t3

0x3faa,	// (0x0000f9c3) main_mup_eq_pane_t4_ParamLimits

0x3faa,	// (0x0000f9c3) main_mup_eq_pane_t4

0x3fc0,	// (0x0000f9d9) main_mup_eq_pane_t5_ParamLimits

0x3fc0,	// (0x0000f9d9) main_mup_eq_pane_t5

0x3fd6,	// (0x0000f9ef) main_mup_eq_pane_t6_ParamLimits

0x3fd6,	// (0x0000f9ef) main_mup_eq_pane_t6

0x3fe8,	// (0x0000fa01) main_mup_eq_pane_t7_ParamLimits

0x3fe8,	// (0x0000fa01) main_mup_eq_pane_t7

0x3ffa,	// (0x0000fa13) main_mup_eq_pane_t8_ParamLimits

0x3ffa,	// (0x0000fa13) main_mup_eq_pane_t8

0x400c,	// (0x0000fa25) main_mup_eq_pane_t9_ParamLimits

0x400c,	// (0x0000fa25) main_mup_eq_pane_t9

0x4022,	// (0x0000fa3b) main_mup_eq_pane_t10_ParamLimits

0x4022,	// (0x0000fa3b) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0001ae92) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0001ae92) main_mup_eq_pane_t

0x40b5,	// (0x0000face) mup_equalizer_pane_cp5_ParamLimits

0x40c7,	// (0x0000fae0) mup_equalizer_pane_cp6_ParamLimits

0x40d9,	// (0x0000faf2) mup_equalizer_pane_cp7_ParamLimits

0x9bb5,	// (0x000155ce) main_gallery_pane

0xc789,	// (0x000181a2) smil2_volume_pane

0xc791,	// (0x000181aa) smil_status_volume_pane_g1_ParamLimits

0xc7a4,	// (0x000181bd) smil_status_volume_pane_g2_ParamLimits

0xc7b7,	// (0x000181d0) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x0001b05b) smil_status_volume_pane_g_ParamLimits

0xc9b0,	// (0x000183c9) bg_popup_window_pane_cp07_ParamLimits

0xc9be,	// (0x000183d7) blid_firmament_pane

0x54fb,	// (0x00010f14) aid_size_cell_gallery_ParamLimits

0x54fb,	// (0x00010f14) aid_size_cell_gallery

0x5511,	// (0x00010f2a) grid_gallery_pane_ParamLimits

0x5511,	// (0x00010f2a) grid_gallery_pane

0x5525,	// (0x00010f3e) cell_gallery_pane_ParamLimits

0x5525,	// (0x00010f3e) cell_gallery_pane

0xcad9,	// (0x000184f2) bg_cell_gallery_focus_pane_ParamLimits

0xcad9,	// (0x000184f2) bg_cell_gallery_focus_pane

0xcaeb,	// (0x00018504) cell_gallery_pane_g1_ParamLimits

0xcaeb,	// (0x00018504) cell_gallery_pane_g1

0x556c,	// (0x00010f85) cell_gallery_pane_g2_ParamLimits

0x556c,	// (0x00010f85) cell_gallery_pane_g2

0x5579,	// (0x00010f92) cell_gallery_pane_g3_ParamLimits

0x5579,	// (0x00010f92) cell_gallery_pane_g3

0xcaf7,	// (0x00018510) cell_gallery_pane_g4_ParamLimits

0xcaf7,	// (0x00018510) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x0001b109) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x0001b109) cell_gallery_pane_g

0xcb03,	// (0x0001851c) bg_cell_gallery_focus_pane_g1

0xcb0b,	// (0x00018524) bg_cell_gallery_focus_pane_g2

0xcb13,	// (0x0001852c) bg_cell_gallery_focus_pane_g3

0xcb1b,	// (0x00018534) bg_cell_gallery_focus_pane_g4

0xcb23,	// (0x0001853c) bg_cell_gallery_focus_pane_g5

0xcb2b,	// (0x00018544) bg_cell_gallery_focus_pane_g6

0xcb33,	// (0x0001854c) bg_cell_gallery_focus_pane_g7

0xcb3b,	// (0x00018554) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x0001b112) bg_cell_gallery_focus_pane_g

0xcb43,	// (0x0001855c) aid_firma_cardinal

0xcb57,	// (0x00018570) blid_firmament_pane_t1

0xcb6e,	// (0x00018587) blid_firmament_pane_t2

0xcb85,	// (0x0001859e) blid_firmament_pane_t3

0xcb9c,	// (0x000185b5) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x0001b123) blid_firmament_pane_t

0xcbb3,	// (0x000185cc) blid_sat_info_pane

0xcbc3,	// (0x000185dc) blid_sat_info_pane_g1

0xcbc3,	// (0x000185dc) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x0001b12c) blid_sat_info_pane_g

0xcbcd,	// (0x000185e6) blid_sat_info_pane_t1

0xcbdb,	// (0x000185f4) smil2_volume_content_pane

0xcbe4,	// (0x000185fd) smil2_volume_pane_g1

0xcbec,	// (0x00018605) smil2_volume_content_pane_g1

0xcbf5,	// (0x0001860e) smil2_volume_content_pane_g2

0xcbfe,	// (0x00018617) smil2_volume_content_pane_g3

0xcc07,	// (0x00018620) smil2_volume_content_pane_g4

0xcc10,	// (0x00018629) smil2_volume_content_pane_g5

0xcc19,	// (0x00018632) smil2_volume_content_pane_g6

0xcc22,	// (0x0001863b) smil2_volume_content_pane_g7

0xcc2b,	// (0x00018644) smil2_volume_content_pane_g8

0xcc34,	// (0x0001864d) smil2_volume_content_pane_g9

0xcc3d,	// (0x00018656) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x0001b131) smil2_volume_content_pane_g

0x271c,	// (0x0000e135) cale_week_day_heading_pane_t1_ParamLimits

0x2746,	// (0x0000e15f) cale_week_day_heading_pane_t2_ParamLimits

0x2770,	// (0x0000e189) cale_week_day_heading_pane_t3_ParamLimits

0x279a,	// (0x0000e1b3) cale_week_day_heading_pane_t4_ParamLimits

0x27c4,	// (0x0000e1dd) cale_week_day_heading_pane_t5_ParamLimits

0x27ee,	// (0x0000e207) cale_week_day_heading_pane_t6_ParamLimits

0x2818,	// (0x0000e231) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0001ac0a) cale_week_day_heading_pane_t_ParamLimits

0xa575,	// (0x00015f8e) bg_cale_side_pane_ParamLimits

0x2842,	// (0x0000e25b) cale_week_time_pane_t1_ParamLimits

0x286e,	// (0x0000e287) cale_week_time_pane_t2_ParamLimits

0x289a,	// (0x0000e2b3) cale_week_time_pane_t3_ParamLimits

0x28c6,	// (0x0000e2df) cale_week_time_pane_t4_ParamLimits

0x28f2,	// (0x0000e30b) cale_week_time_pane_t5_ParamLimits

0x291e,	// (0x0000e337) cale_week_time_pane_t6_ParamLimits

0x294a,	// (0x0000e363) cale_week_time_pane_t7_ParamLimits

0x2976,	// (0x0000e38f) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0001ac19) cale_week_time_pane_t_ParamLimits

0x29a2,	// (0x0000e3bb) cell_cale_week_pane_g2_ParamLimits

0xa575,	// (0x00015f8e) bg_cale_side_pane_cp01_ParamLimits

0x3771,	// (0x0000f18a) cale_month_week_pane_t1_ParamLimits

0x3788,	// (0x0000f1a1) cale_month_week_pane_t2_ParamLimits

0x379f,	// (0x0000f1b8) cale_month_week_pane_t3_ParamLimits

0x37b6,	// (0x0000f1cf) cale_month_week_pane_t4_ParamLimits

0x37cd,	// (0x0000f1e6) cale_month_week_pane_t5_ParamLimits

0x37e4,	// (0x0000f1fd) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0001acf2) cale_month_week_pane_t_ParamLimits

0xaa45,	// (0x0001645e) cell_cale_month_pane_g1_ParamLimits

0x9bb5,	// (0x000155ce) main_cale_event_viewer_pane

0x9bb5,	// (0x000155ce) listscroll_cale_event_viewer_pane

0xcc46,	// (0x0001865f) list_cale_ev_pane

0xcc4e,	// (0x00018667) scroll_pane_cp023

0x5586,	// (0x00010f9f) field_cale_ev_pane_ParamLimits

0x5586,	// (0x00010f9f) field_cale_ev_pane

0xcc5a,	// (0x00018673) field_cale_ev_content_pane_ParamLimits

0xcc5a,	// (0x00018673) field_cale_ev_content_pane

0xcc66,	// (0x0001867f) field_cale_ev_pane_g1_ParamLimits

0xcc66,	// (0x0001867f) field_cale_ev_pane_g1

0xcc72,	// (0x0001868b) field_cale_ev_pane_g2_ParamLimits

0xcc72,	// (0x0001868b) field_cale_ev_pane_g2

0xcc8a,	// (0x000186a3) field_cale_ev_pane_g3_ParamLimits

0xcc8a,	// (0x000186a3) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x0001b146) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x0001b146) field_cale_ev_pane_g

0xcca2,	// (0x000186bb) field_cale_ev_pane_t1_ParamLimits

0xcca2,	// (0x000186bb) field_cale_ev_pane_t1

0x55a0,	// (0x00010fb9) field_cale_ev_content_pane_t1_ParamLimits

0x55a0,	// (0x00010fb9) field_cale_ev_content_pane_t1

0xb369,	// (0x00016d82) bg_button_pane_cp01

0xa53b,	// (0x00015f54) listscroll_cale_week_pane_ParamLimits

0x2546,	// (0x0000df5f) popup_toolbar_window_cp01

0xa563,	// (0x00015f7c) listscroll_cale_week_pane_t1_ParamLimits

0xa373,	// (0x00015d8c) listscroll_cale_day_pane_ParamLimits

0x2546,	// (0x0000df5f) popup_toolbar_window_cp02

0xa563,	// (0x00015f7c) listscroll_cale_day_pane_t1_ParamLimits

0xa53b,	// (0x00015f54) main_cale_month_pane_ParamLimits

0x4bbe,	// (0x000105d7) popup_toolbar_window_cp03_ParamLimits

0x4bbe,	// (0x000105d7) popup_toolbar_window_cp03

0x43a3,	// (0x0000fdbc) main_image_pane_g2_ParamLimits

0x43a3,	// (0x0000fdbc) main_image_pane_g2

0x43b4,	// (0x0000fdcd) main_image_pane_g3_ParamLimits

0x43b4,	// (0x0000fdcd) main_image_pane_g3

0x0002,

0xf50b,	// (0x0001af24) main_image_pane_g_ParamLimits

0xf50b,	// (0x0001af24) main_image_pane_g

0xb526,	// (0x00016f3f) main_image_pane_t1_ParamLimits

0x43c5,	// (0x0000fdde) main_image_pane_t2_ParamLimits

0x43c5,	// (0x0000fdde) main_image_pane_t2

0x43d7,	// (0x0000fdf0) main_image_pane_t3_ParamLimits

0x43d7,	// (0x0000fdf0) main_image_pane_t3

0x43ff,	// (0x0000fe18) main_image_pane_t4_ParamLimits

0x43ff,	// (0x0000fe18) main_image_pane_t4

0x0003,

0xf512,	// (0x0001af2b) main_image_pane_t_ParamLimits

0xf512,	// (0x0001af2b) main_image_pane_t

0x441f,	// (0x0000fe38) popup_image_details_window_cp01

0x4427,	// (0x0000fe40) popup_toobar_trans_pane_cp01_ParamLimits

0x4427,	// (0x0000fe40) popup_toobar_trans_pane_cp01

0x4a8b,	// (0x000104a4) popup_image_details_window_ParamLimits

0x4a8b,	// (0x000104a4) popup_image_details_window

0xc6ec,	// (0x00018105) popup_image_focus_window

0x4e70,	// (0x00010889) camera2_autofocus_pane_ParamLimits

0x4e70,	// (0x00010889) camera2_autofocus_pane

0x9bb5,	// (0x000155ce) bg_popup_sub_pane_cp06

0xccb9,	// (0x000186d2) popup_image_focus_window_g1

0xccc1,	// (0x000186da) popup_image_focus_window_g2

0xccc9,	// (0x000186e2) popup_image_focus_window_g3

0xccd1,	// (0x000186ea) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x0001b14d) popup_image_focus_window_g

0xccd9,	// (0x000186f2) popup_image_focus_window_t1

0xcce7,	// (0x00018700) popup_image_focus_window_t2

0xccf6,	// (0x0001870f) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x0001b156) popup_image_focus_window_t

0xcd04,	// (0x0001871d) camera2_autofocus_pane_g1

0x9c08,	// (0x00015621) bg_tb_trans_pane_cp01

0xcd12,	// (0x0001872b) popup_image_details_window_g1

0xcd25,	// (0x0001873e) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x0001b168) popup_image_details_window_g

0xcd4e,	// (0x00018767) popup_image_details_window_t1

0xcd60,	// (0x00018779) popup_image_details_window_t2

0xcd79,	// (0x00018792) popup_image_details_window_t3

0xcd8d,	// (0x000187a6) popup_image_details_window_t4

0xcda8,	// (0x000187c1) popup_image_details_window_t5

0x0004,

0xf756,	// (0x0001b16f) popup_image_details_window_t

0xa341,	// (0x00015d5a) bg_calc_paper_pane_ParamLimits

0x9bb5,	// (0x000155ce) grid_highlight_pane_cp013

0xa359,	// (0x00015d72) list_calc_pane_ParamLimits

0xa36b,	// (0x00015d84) scroll_pane_cp024

0xa373,	// (0x00015d8c) bg_calc_display_pane_ParamLimits

0xa37f,	// (0x00015d98) calc_display_pane_t1_ParamLimits

0xa394,	// (0x00015dad) calc_display_pane_t2_ParamLimits

0xa3a9,	// (0x00015dc2) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0001ab8c) calc_display_pane_t_ParamLimits

0x2477,	// (0x0000de90) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0001aba9) cell_calc_pane_g

0x2480,	// (0x0000de99) cell_calc_pane_t1

0xa420,	// (0x00015e39) grid_highlight_pane_cp02_ParamLimits

0xa436,	// (0x00015e4f) toolbar_button_pane_cp01_ParamLimits

0xa436,	// (0x00015e4f) toolbar_button_pane_cp01

0xb56b,	// (0x00016f84) temp_image_control_pane_ParamLimits

0xb56b,	// (0x00016f84) temp_image_control_pane

0x9c08,	// (0x00015621) main_mp3_pane

0xcdc2,	// (0x000187db) temp_image_control_pane_g1_ParamLimits

0xcdc2,	// (0x000187db) temp_image_control_pane_g1

0xcdd0,	// (0x000187e9) temp_image_control_pane_g2_ParamLimits

0xcdd0,	// (0x000187e9) temp_image_control_pane_g2

0xcde2,	// (0x000187fb) temp_image_control_pane_g3_ParamLimits

0xcde2,	// (0x000187fb) temp_image_control_pane_g3

0x55ed,	// (0x00011006) temp_image_control_pane_g4_ParamLimits

0x55ed,	// (0x00011006) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x0001b17a) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x0001b17a) temp_image_control_pane_g

0xcdc2,	// (0x000187db) main_mp3_pane_g1

0x55fe,	// (0x00011017) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x0001b183) main_mp3_pane_g

0xce25,	// (0x0001883e) main_mp3_pane_t1

0xa63b,	// (0x00016054) main_camera_pane_g8_ParamLimits

0xa63b,	// (0x00016054) main_camera_pane_g8

0x2c37,	// (0x0000e650) main_video_pane_g7_ParamLimits

0x2c37,	// (0x0000e650) main_video_pane_g7

0xc7f2,	// (0x0001820b) main_camera2_pane_t7_ParamLimits

0xc7f2,	// (0x0001820b) main_camera2_pane_t7

0xa830,	// (0x00016249) scroll_pane_cp025_ParamLimits

0xa830,	// (0x00016249) scroll_pane_cp025

0xa844,	// (0x0001625d) scroll_pane_cp026_ParamLimits

0xa844,	// (0x0001625d) scroll_pane_cp026

0xa853,	// (0x0001626c) wml_content_pane_ParamLimits

0x9bb5,	// (0x000155ce) main_touch_calib_pane

0x56b5,	// (0x000110ce) main_touch_calib_pane_g1

0x56c1,	// (0x000110da) main_touch_calib_pane_g2

0x56cd,	// (0x000110e6) main_touch_calib_pane_g3

0x56d9,	// (0x000110f2) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x0001b1a1) main_touch_calib_pane_g

0x56e5,	// (0x000110fe) main_touch_calib_pane_t1

0x56fd,	// (0x00011116) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x0001b1aa) main_touch_calib_pane_t

0xb0ca,	// (0x00016ae3) mup_progress_pane_cp02

0xb0e9,	// (0x00016b02) navi_pane_g1

0xb169,	// (0x00016b82) navi_pane_mp_t3

0x9c08,	// (0x00015621) main_mp3_pane_ParamLimits

0x4bf8,	// (0x00010611) navi_pane_ParamLimits

0xcdc2,	// (0x000187db) main_mp3_pane_g1_ParamLimits

0x55fe,	// (0x00011017) main_mp3_pane_g2_ParamLimits

0x560a,	// (0x00011023) main_mp3_pane_g3_ParamLimits

0x560a,	// (0x00011023) main_mp3_pane_g3

0x5616,	// (0x0001102f) main_mp3_pane_g4_ParamLimits

0x5616,	// (0x0001102f) main_mp3_pane_g4

0xcdf2,	// (0x0001880b) main_mp3_pane_g5_ParamLimits

0xcdf2,	// (0x0001880b) main_mp3_pane_g5

0xce00,	// (0x00018819) main_mp3_pane_g6_ParamLimits

0xce00,	// (0x00018819) main_mp3_pane_g6

0xce0d,	// (0x00018826) main_mp3_pane_g7_ParamLimits

0xce0d,	// (0x00018826) main_mp3_pane_g7

0xce19,	// (0x00018832) main_mp3_pane_g8_ParamLimits

0xce19,	// (0x00018832) main_mp3_pane_g8

0xf76a,	// (0x0001b183) main_mp3_pane_g_ParamLimits

0x5622,	// (0x0001103b) main_mp3_pane_t2

0x5630,	// (0x00011049) main_mp3_pane_t3

0xce33,	// (0x0001884c) main_mp3_pane_t4

0xce41,	// (0x0001885a) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x0001b194) main_mp3_pane_t

0xce4f,	// (0x00018868) mup_progress_pane_cp01

0x9bcf,	// (0x000155e8) aid_zoom_text_secondary2

0xcc46,	// (0x0001865f) list_cale_ev2_pane

0xcc4e,	// (0x00018667) scroll_pane_cp023_ParamLimits

0x05e4,	// (0x0000bffd) field_cale_ev2_pane_ParamLimits

0x05e4,	// (0x0000bffd) field_cale_ev2_pane

0xce57,	// (0x00018870) field_cale_ev2_pane_g1_ParamLimits

0xce57,	// (0x00018870) field_cale_ev2_pane_g1

0xce63,	// (0x0001887c) field_cale_ev2_pane_g2_ParamLimits

0xce63,	// (0x0001887c) field_cale_ev2_pane_g2

0xce7b,	// (0x00018894) field_cale_ev2_pane_g3_ParamLimits

0xce7b,	// (0x00018894) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x0001b1b5) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x0001b1b5) field_cale_ev2_pane_g

0xce9f,	// (0x000188b8) field_cale_ev2_pane_t1_ParamLimits

0xce9f,	// (0x000188b8) field_cale_ev2_pane_t1

0xceb6,	// (0x000188cf) field_cale_ev2_pane_t2_ParamLimits

0xceb6,	// (0x000188cf) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x0001b1be) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x0001b1be) field_cale_ev2_pane_t

0x425e,	// (0x0000fc77) main_postcard_pane_g5_ParamLimits

0x425e,	// (0x0000fc77) main_postcard_pane_g5

0x4272,	// (0x0000fc8b) main_postcard_pane_g6_ParamLimits

0x4272,	// (0x0000fc8b) main_postcard_pane_g6

0x2a19,	// (0x0000e432) camera2_autofocus_pane_cp_ParamLimits

0x2a19,	// (0x0000e432) camera2_autofocus_pane_cp

0x9c08,	// (0x00015621) main_mup3_pane

0x576b,	// (0x00011184) main_mup3_pane_g1_ParamLimits

0x576b,	// (0x00011184) main_mup3_pane_g1

0x578d,	// (0x000111a6) main_mup3_pane_g2_ParamLimits

0x578d,	// (0x000111a6) main_mup3_pane_g2

0x57f5,	// (0x0001120e) main_mup3_pane_g3_ParamLimits

0x57f5,	// (0x0001120e) main_mup3_pane_g3

0x5833,	// (0x0001124c) main_mup3_pane_g4_ParamLimits

0x5833,	// (0x0001124c) main_mup3_pane_g4

0x5871,	// (0x0001128a) main_mup3_pane_g5_ParamLimits

0x5871,	// (0x0001128a) main_mup3_pane_g5

0x58af,	// (0x000112c8) main_mup3_pane_g6_ParamLimits

0x58af,	// (0x000112c8) main_mup3_pane_g6

0xcf0f,	// (0x00018928) main_mup3_pane_g7_ParamLimits

0xcf0f,	// (0x00018928) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x0001b1ce) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x0001b1ce) main_mup3_pane_g

0x5925,	// (0x0001133e) main_mup3_pane_t1_ParamLimits

0x5925,	// (0x0001133e) main_mup3_pane_t1

0x598d,	// (0x000113a6) main_mup3_pane_t2_ParamLimits

0x598d,	// (0x000113a6) main_mup3_pane_t2

0x5a55,	// (0x0001146e) main_mup3_pane_t4_ParamLimits

0x5a55,	// (0x0001146e) main_mup3_pane_t4

0x5aa3,	// (0x000114bc) main_mup3_pane_t5_ParamLimits

0x5aa3,	// (0x000114bc) main_mup3_pane_t5

0x5b51,	// (0x0001156a) main_mup3_pane_t6_ParamLimits

0x5b51,	// (0x0001156a) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x0001b1df) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x0001b1df) main_mup3_pane_t

0x5c05,	// (0x0001161e) mup3_progress_pane_ParamLimits

0x5c05,	// (0x0001161e) mup3_progress_pane

0x5c61,	// (0x0001167a) popup_mup3_control_window_ParamLimits

0x5c61,	// (0x0001167a) popup_mup3_control_window

0xcf1d,	// (0x00018936) popup_mup3_text_window

0x5c8f,	// (0x000116a8) mup3_progress_pane_t1

0x5ca5,	// (0x000116be) mup3_progress_pane_t2

0xcf25,	// (0x0001893e) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x0001b1ec) mup3_progress_pane_t

0xcf3c,	// (0x00018955) mup_progress_pane_cp03

0x9bb5,	// (0x000155ce) bg_tb_trans_pane_cp04

0x5cbb,	// (0x000116d4) mup3_volume_pane

0x5cc3,	// (0x000116dc) popup_mup3_control_window_g1

0x5ccc,	// (0x000116e5) mup3_volume_pane_g1

0x5cd5,	// (0x000116ee) mup3_volume_pane_g2

0x5cde,	// (0x000116f7) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x0001b1f3) mup3_volume_pane_g

0x9bb5,	// (0x000155ce) bg_tb_trans_pane_cp03

0xcf4c,	// (0x00018965) popup_mup3_text_window_g1

0xcf54,	// (0x0001896d) popup_mup3_text_window_t1

0xa3f7,	// (0x00015e10) list_calc_item_pane_g1_ParamLimits

0xc8da,	// (0x000182f3) mup_volume_pane_cp_g1

0x5715,	// (0x0001112e) main_touch_calib_pane_t3

0x5727,	// (0x00011140) main_touch_calib_pane_t4

0x5739,	// (0x00011152) main_touch_calib_pane_t5

0x9bbf,	// (0x000155d8) aid_cell_size_toolbar2

0x9bc7,	// (0x000155e0) aid_popup3_width_pane

0x9bcf,	// (0x000155e8) aid_zoom_text_msg_primary

0xa61b,	// (0x00016034) vorec_t7

0xa3bb,	// (0x00015dd4) bg_calc_paper_pane_g1_ParamLimits

0xa3c7,	// (0x00015de0) bg_calc_paper_pane_g2_ParamLimits

0xa3d3,	// (0x00015dec) bg_calc_paper_pane_g3_ParamLimits

0xa3df,	// (0x00015df8) bg_calc_paper_pane_g4_ParamLimits

0xa3eb,	// (0x00015e04) bg_calc_paper_pane_g5_ParamLimits

0x2411,	// (0x0000de2a) bg_calc_paper_pane_g6_ParamLimits

0x2420,	// (0x0000de39) bg_calc_paper_pane_g7_ParamLimits

0x242f,	// (0x0000de48) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0001ab93) bg_calc_paper_pane_g_ParamLimits

0x243e,	// (0x0000de57) calc_bg_paper_pane_g9_ParamLimits

0x2b4d,	// (0x0000e566) image_qvga_pane_ParamLimits

0x2b4d,	// (0x0000e566) image_qvga_pane

0xa282,	// (0x00015c9b) bg_popup_sub_pane_cp04_ParamLimits

0xb4a2,	// (0x00016ebb) popup_mup_playback_window_g1_ParamLimits

0xb4ae,	// (0x00016ec7) popup_mup_playback_window_t1_ParamLimits

0xb4c3,	// (0x00016edc) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0001af1f) popup_mup_playback_window_t_ParamLimits

0x5287,	// (0x00010ca0) main_mup2_pane_g3_ParamLimits

0x5287,	// (0x00010ca0) main_mup2_pane_g3

0x2e6b,	// (0x0000e884) popup_toolbar_window_cp04

0xb8a4,	// (0x000172bd) popup_call2_audio_second_window_g3_ParamLimits

0xb8a4,	// (0x000172bd) popup_call2_audio_second_window_g3

0xbcae,	// (0x000176c7) popup_call2_audio_first_window_g4_ParamLimits

0xbcae,	// (0x000176c7) popup_call2_audio_first_window_g4

0xc32d,	// (0x00017d46) popup_call2_audio_in_window_g4_ParamLimits

0xc32d,	// (0x00017d46) popup_call2_audio_in_window_g4

0x4385,	// (0x0000fd9e) aid_area_sk_bg_cut_ParamLimits

0x4385,	// (0x0000fd9e) aid_area_sk_bg_cut

0xb4d8,	// (0x00016ef1) aid_area_sk_bg_cut_2_ParamLimits

0xb4d8,	// (0x00016ef1) aid_area_sk_bg_cut_2

0x555c,	// (0x00010f75) aid_placing_details_win

0x5564,	// (0x00010f7d) aid_placing_details_win_2

0xcd04,	// (0x0001871d) camera2_autofocus_pane_g1_ParamLimits

0x2087,	// (0x0000daa0) popup_fixed_preview_cale_window_ParamLimits

0x2087,	// (0x0000daa0) popup_fixed_preview_cale_window

0xb1f2,	// (0x00016c0b) navi_slider_pane_g3

0xb1fb,	// (0x00016c14) navi_slider_pane_g4

0xb204,	// (0x00016c1d) navi_slider_pane_g5

0xb1f2,	// (0x00016c0b) navi_slider_pane_g6

0xb20d,	// (0x00016c26) navi_slider_pane_g7

0xb32e,	// (0x00016d47) mup_scale_pane_g3

0xb337,	// (0x00016d50) mup_scale_pane_g4

0xb340,	// (0x00016d59) mup_scale_pane_g5

0x40ed,	// (0x0000fb06) mup_scale_pane_g6

0x40f6,	// (0x0000fb0f) mup_scale_pane_g7

0xb1f2,	// (0x00016c0b) cams2_slider_pane_g3

0xc98f,	// (0x000183a8) cams2_slider_pane_g4

0xc997,	// (0x000183b0) cams2_slider_pane_g5

0xb1f2,	// (0x00016c0b) cams2_slider_pane_g6

0xc99f,	// (0x000183b8) cams2_slider_pane_g7

0xcbc3,	// (0x000185dc) camera2_autofocus_pane_cp_g1

0xcf62,	// (0x0001897b) bg_popup_preview_window_pane_cp02_ParamLimits

0xcf62,	// (0x0001897b) bg_popup_preview_window_pane_cp02

0x5ce7,	// (0x00011700) list_fp_cale_pane_ParamLimits

0x5ce7,	// (0x00011700) list_fp_cale_pane

0xcf6e,	// (0x00018987) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf6e,	// (0x00018987) popup_fixed_preview_cale_window_t1

0x5cf3,	// (0x0001170c) popup_fixed_preview_cale_window_t2_ParamLimits

0x5cf3,	// (0x0001170c) popup_fixed_preview_cale_window_t2

0x5d08,	// (0x00011721) popup_fixed_preview_cale_window_t3_ParamLimits

0x5d08,	// (0x00011721) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x0001b1fa) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x0001b1fa) popup_fixed_preview_cale_window_t

0x5d1d,	// (0x00011736) list_single_fp_cale_pane_ParamLimits

0x5d1d,	// (0x00011736) list_single_fp_cale_pane

0x5d31,	// (0x0001174a) list_single_fp_cale_pane_g1_ParamLimits

0x5d31,	// (0x0001174a) list_single_fp_cale_pane_g1

0xcf8c,	// (0x000189a5) list_single_fp_cale_pane_g2_ParamLimits

0xcf8c,	// (0x000189a5) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x0001b201) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x0001b201) list_single_fp_cale_pane_g

0x5d3d,	// (0x00011756) list_single_fp_cale_pane_t1_ParamLimits

0x5d3d,	// (0x00011756) list_single_fp_cale_pane_t1

0x5d4f,	// (0x00011768) list_single_fp_cale_pane_t2_ParamLimits

0x5d4f,	// (0x00011768) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x0001b208) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x0001b208) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9bb5,	// (0x000155ce) main_dialer_pane

0x5d82,	// (0x0001179b) aid_cell_size_keypad

0x5d8c,	// (0x000117a5) dialer_ne_pane

0x5d94,	// (0x000117ad) grid_dialer_command_1_pane

0x5d9c,	// (0x000117b5) grid_dialer_command_2_pane

0x5da4,	// (0x000117bd) grid_dialer_keypad_pane

0x5db4,	// (0x000117cd) bg_popup_call_pane_cp06_ParamLimits

0x5db4,	// (0x000117cd) bg_popup_call_pane_cp06

0x5dc0,	// (0x000117d9) dialer_ne_clear_pane_ParamLimits

0x5dc0,	// (0x000117d9) dialer_ne_clear_pane

0xcfa5,	// (0x000189be) dialer_ne_pane_g1

0xcfad,	// (0x000189c6) dialer_ne_pane_t1_ParamLimits

0xcfad,	// (0x000189c6) dialer_ne_pane_t1

0x5dcc,	// (0x000117e5) dialer_ne_pane_t2_ParamLimits

0x5dcc,	// (0x000117e5) dialer_ne_pane_t2

0x5df6,	// (0x0001180f) dialer_ne_pane_t3_ParamLimits

0x5df6,	// (0x0001180f) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x0001b20d) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x0001b20d) dialer_ne_pane_t

0x5e26,	// (0x0001183f) dialer_ne_pane_t3_copy1_ParamLimits

0x5e26,	// (0x0001183f) dialer_ne_pane_t3_copy1

0x5e55,	// (0x0001186e) cell_dialer_keypad_pane_ParamLimits

0x5e55,	// (0x0001186e) cell_dialer_keypad_pane

0x5e6a,	// (0x00011883) cell_dialer_command_1_pane_ParamLimits

0x5e6a,	// (0x00011883) cell_dialer_command_1_pane

0x5e80,	// (0x00011899) cell_dialer_command_2_pane_ParamLimits

0x5e80,	// (0x00011899) cell_dialer_command_2_pane

0xcfbf,	// (0x000189d8) bg_button_pane_cp02_ParamLimits

0xcfbf,	// (0x000189d8) bg_button_pane_cp02

0x5e8f,	// (0x000118a8) cell_dialer_keypad_pane_g1_ParamLimits

0x5e8f,	// (0x000118a8) cell_dialer_keypad_pane_g1

0xcfbf,	// (0x000189d8) bg_button_pane_cp03_ParamLimits

0xcfbf,	// (0x000189d8) bg_button_pane_cp03

0x5ea4,	// (0x000118bd) cell_dialer_command_1_pane_g1_ParamLimits

0x5ea4,	// (0x000118bd) cell_dialer_command_1_pane_g1

0xcfcb,	// (0x000189e4) bg_button_pane_cp04

0x5eb8,	// (0x000118d1) cell_dialer_command_2_pane_g1

0xb1d8,	// (0x00016bf1) bg_button_pane_cp06

0xcfd3,	// (0x000189ec) dialer_ne_clear_pane_g1

0xb0f5,	// (0x00016b0e) navi_pane_g2

0x3cf2,	// (0x0000f70b) navi_pane_g3

0x0002,

0xf409,	// (0x0001ae22) navi_pane_g

0xb177,	// (0x00016b90) navi_pane_mv_g2

0xb19f,	// (0x00016bb8) navi_pane_mv_g5

0x3d17,	// (0x0000f730) navi_pane_mv_t1

0xa373,	// (0x00015d8c) main_clock2_pane

0x5eef,	// (0x00011908) main_clock2_list_pane_ParamLimits

0x5eef,	// (0x00011908) main_clock2_list_pane

0x5f21,	// (0x0001193a) main_clock2_pane_t1_ParamLimits

0x5f21,	// (0x0001193a) main_clock2_pane_t1

0x5f58,	// (0x00011971) main_clock2_pane_t2_ParamLimits

0x5f58,	// (0x00011971) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x0001b214) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x0001b214) main_clock2_pane_t

0x5fda,	// (0x000119f3) popup_clock_analogue_window_cp03_ParamLimits

0x5fda,	// (0x000119f3) popup_clock_analogue_window_cp03

0x5ffd,	// (0x00011a16) popup_clock_digital_window_cp02_ParamLimits

0x5ffd,	// (0x00011a16) popup_clock_digital_window_cp02

0x606e,	// (0x00011a87) main_clock2_list_single_pane_ParamLimits

0x606e,	// (0x00011a87) main_clock2_list_single_pane

0xb1d8,	// (0x00016bf1) list_highlight_pane_cp05

0xcfdb,	// (0x000189f4) main_clock2_list_single_pane_t1

0x2e6b,	// (0x0000e884) popup_toolbar_window_cp04_ParamLimits

0x55bd,	// (0x00010fd6) camera2_autofocus_pane_g2_ParamLimits

0x55bd,	// (0x00010fd6) camera2_autofocus_pane_g2

0x55c9,	// (0x00010fe2) camera2_autofocus_pane_g3_ParamLimits

0x55c9,	// (0x00010fe2) camera2_autofocus_pane_g3

0x55d5,	// (0x00010fee) camera2_autofocus_pane_g4_ParamLimits

0x55d5,	// (0x00010fee) camera2_autofocus_pane_g4

0x55e1,	// (0x00010ffa) camera2_autofocus_pane_g5_ParamLimits

0x55e1,	// (0x00010ffa) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x0001b15d) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x0001b15d) camera2_autofocus_pane_g

0x574b,	// (0x00011164) camera2_autofocus_pane_cp_g2

0x5753,	// (0x0001116c) camera2_autofocus_pane_cp_g3

0x575b,	// (0x00011174) camera2_autofocus_pane_cp_g4

0x5763,	// (0x0001117c) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x0001b1c3) camera2_autofocus_pane_cp_g

0x5dac,	// (0x000117c5) popup_dialer_spcha_window

0x9bb5,	// (0x000155ce) bg_popup_sub_pane_cp07

0xcfe9,	// (0x00018a02) list_spcha_pane

0xcff1,	// (0x00018a0a) list_single_spcha_pane_ParamLimits

0xcff1,	// (0x00018a0a) list_single_spcha_pane

0x9bb5,	// (0x000155ce) list_highlight_pane_cp06

0xd002,	// (0x00018a1b) list_single_spcha_pane_t1

0xc0d7,	// (0x00017af0) popup_call2_audio_out_window_g4_ParamLimits

0xc0d7,	// (0x00017af0) popup_call2_audio_out_window_g4

0x9bb5,	// (0x000155ce) main_imed2_pane

0xc6f4,	// (0x0001810d) popup_imed_adjust2_window

0x4aa1,	// (0x000104ba) popup_imed_trans_window_ParamLimits

0x4aa1,	// (0x000104ba) popup_imed_trans_window

0xca07,	// (0x00018420) popup_blid_sat_info2_window_t1

0xca15,	// (0x0001842e) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x0001b0f2) popup_blid_sat_info2_window_t

0x6118,	// (0x00011b31) aid_size_cell_colour_35

0x6138,	// (0x00011b51) aid_size_cell_colour_112

0x6158,	// (0x00011b71) aid_size_cell_effect

0xc6ce,	// (0x000180e7) bg_tb_trans_pane_cp02

0xabbe,	// (0x000165d7) heading_imed_pane

0x6178,	// (0x00011b91) listscroll_imed_pane

0xd010,	// (0x00018a29) heading_imed_pane_g1

0xd018,	// (0x00018a31) heading_imed_pane_t1

0xd026,	// (0x00018a3f) grid_imed_colour_35_pane_ParamLimits

0xd026,	// (0x00018a3f) grid_imed_colour_35_pane

0x6184,	// (0x00011b9d) grid_imed_effect_pane

0xd039,	// (0x00018a52) list_imed_aspect_pane

0x6197,	// (0x00011bb0) scroll_pane_cp027_ParamLimits

0x6197,	// (0x00011bb0) scroll_pane_cp027

0x61a3,	// (0x00011bbc) cell_imed_effect_pane_ParamLimits

0x61a3,	// (0x00011bbc) cell_imed_effect_pane

0xd041,	// (0x00018a5a) cell_imed_colour_pane_ParamLimits

0xd041,	// (0x00018a5a) cell_imed_colour_pane

0xd07b,	// (0x00018a94) cell_imed_colour_pane_g1_ParamLimits

0xd07b,	// (0x00018a94) cell_imed_colour_pane_g1

0xd08c,	// (0x00018aa5) hgihlgiht_grid_pane_cp016_ParamLimits

0xd08c,	// (0x00018aa5) hgihlgiht_grid_pane_cp016

0x61c8,	// (0x00011be1) cell_imed_effect_pane_g1

0x61d0,	// (0x00011be9) grid_highlight_pane_cp017

0xd09d,	// (0x00018ab6) list_imed_single_pane_ParamLimits

0xd09d,	// (0x00018ab6) list_imed_single_pane

0x9bb5,	// (0x000155ce) list_highlight_pane_cp07

0xd0b0,	// (0x00018ac9) list_imed_aspect_pane_comp1_t1

0xc6ce,	// (0x000180e7) bg_tb_trans_pane_cp05

0xd0d0,	// (0x00018ae9) popup_imed_adjust2_window_g1

0xd0f7,	// (0x00018b10) popup_imed_adjust2_window_t1

0xd10f,	// (0x00018b28) slider_imed_adjust_pane

0xd123,	// (0x00018b3c) slider_imed_adjust_pane_g1

0xd133,	// (0x00018b4c) slider_imed_adjust_pane_g2

0xd143,	// (0x00018b5c) slider_imed_adjust_pane_g3

0xd154,	// (0x00018b6d) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x0001b231) slider_imed_adjust_pane_g

0x61d9,	// (0x00011bf2) aid_size_cell_clipart2

0x61e5,	// (0x00011bfe) grid_imed_clipart_pane

0xd165,	// (0x00018b7e) scroll_pane_cp031

0x61ef,	// (0x00011c08) cell_imed_clipart_pane_ParamLimits

0x61ef,	// (0x00011c08) cell_imed_clipart_pane

0x6207,	// (0x00011c20) cell_imed_clipart_pane_g1

0x9bb5,	// (0x000155ce) grid_highlight_pane_cp014

0x5f02,	// (0x0001191b) main_clock2_pane_g1_ParamLimits

0x5f02,	// (0x0001191b) main_clock2_pane_g1

0x6019,	// (0x00011a32) aid_call2_pane_cp10

0x602b,	// (0x00011a44) aid_call_pane_cp10

0xb0a5,	// (0x00016abe) popup_clock_analogue_window_cp10_g1

0xb0a5,	// (0x00016abe) popup_clock_analogue_window_cp10_g2

0x603d,	// (0x00011a56) popup_clock_analogue_window_cp10_g3

0x603d,	// (0x00011a56) popup_clock_analogue_window_cp10_g4

0xb0a5,	// (0x00016abe) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x0001b21f) popup_clock_analogue_window_cp10_g

0x604f,	// (0x00011a68) popup_clock_analogue_window_cp10_t1

0x6080,	// (0x00011a99) clock_digital_number_pane_cp10_ParamLimits

0x6080,	// (0x00011a99) clock_digital_number_pane_cp10

0x6098,	// (0x00011ab1) clock_digital_number_pane_cp11_ParamLimits

0x6098,	// (0x00011ab1) clock_digital_number_pane_cp11

0x60b0,	// (0x00011ac9) clock_digital_number_pane_cp12_ParamLimits

0x60b0,	// (0x00011ac9) clock_digital_number_pane_cp12

0x60c8,	// (0x00011ae1) clock_digital_number_pane_cp13_ParamLimits

0x60c8,	// (0x00011ae1) clock_digital_number_pane_cp13

0x60e0,	// (0x00011af9) clock_digital_separator_pane_cp10_ParamLimits

0x60e0,	// (0x00011af9) clock_digital_separator_pane_cp10

0x60f8,	// (0x00011b11) popup_clock_digital_window_cp02_t1_ParamLimits

0x60f8,	// (0x00011b11) popup_clock_digital_window_cp02_t1

0xa27a,	// (0x00015c93) clock_digital_number_pane_cp10_g1

0xa27a,	// (0x00015c93) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x0001b23a) clock_digital_number_pane_cp10_g

0xa27a,	// (0x00015c93) clock_digital_separator_pane_cp10_g1

0xa27a,	// (0x00015c93) clock_digital_separator_pane_g2_cp10

0xb1a8,	// (0x00016bc1) navi_pane_vded_g4

0xb1b1,	// (0x00016bca) navi_pane_vded_g5

0xb1ba,	// (0x00016bd3) navi_pane_vded_t1

0x9bb5,	// (0x000155ce) main_vded_pane

0x6210,	// (0x00011c29) main_vded_pane_g1

0x621a,	// (0x00011c33) main_vded_pane_g2

0x6222,	// (0x00011c3b) main_vded_pane_g3

0x0002,

0xf826,	// (0x0001b23f) main_vded_pane_g

0x622a,	// (0x00011c43) main_vded_pane_t1

0x6238,	// (0x00011c51) main_vded_pane_t2

0x0001,

0xf82d,	// (0x0001b246) main_vded_pane_t

0x6246,	// (0x00011c5f) vded_slider_pane

0x624e,	// (0x00011c67) vded_video_pane

0xd16d,	// (0x00018b86) vded_video_pane_g1

0x6256,	// (0x00011c6f) vded_video_pane_g2

0xcbc3,	// (0x000185dc) vded_video_pane_g3

0x0002,

0xf832,	// (0x0001b24b) vded_video_pane_g

0xd177,	// (0x00018b90) vded_slider_pane_g1

0xc8da,	// (0x000182f3) vded_slider_pane_g2

0xd180,	// (0x00018b99) vded_slider_pane_g3

0xd189,	// (0x00018ba2) vded_slider_pane_g4

0xd192,	// (0x00018bab) vded_slider_pane_g5

0x0004,

0xf839,	// (0x0001b252) vded_slider_pane_g

0x5c4b,	// (0x00011664) mup3_rocker_pane_ParamLimits

0x5c4b,	// (0x00011664) mup3_rocker_pane

0x625f,	// (0x00011c78) mup3_control_keys_pane_g1

0x6267,	// (0x00011c80) mup3_control_keys_pane_g2

0x626f,	// (0x00011c88) mup3_control_keys_pane_g3

0x6277,	// (0x00011c90) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x0001b25d) mup3_control_keys_pane_g

0x20ba,	// (0x0000dad3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x20ba,	// (0x0000dad3) popup_toolbar2_fixed_window_cp01

0x5c79,	// (0x00011692) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5c79,	// (0x00011692) popup_toolbar2_fixed_window_cp02

0xba16,	// (0x0001742f) popup_call2_audio_second_window_t4_ParamLimits

0xba16,	// (0x0001742f) popup_call2_audio_second_window_t4

0xbf44,	// (0x0001795d) popup_call2_audio_first_window_t6_ParamLimits

0xbf44,	// (0x0001795d) popup_call2_audio_first_window_t6

0xc1da,	// (0x00017bf3) popup_call2_audio_out_window_t6_ParamLimits

0xc1da,	// (0x00017bf3) popup_call2_audio_out_window_t6

0x9bb5,	// (0x000155ce) main_vitu_pane

0x6287,	// (0x00011ca0) aid_size_cell_itu_ParamLimits

0x6287,	// (0x00011ca0) aid_size_cell_itu

0x9c08,	// (0x00015621) bg_popup_window_pane_cp08_ParamLimits

0x9c08,	// (0x00015621) bg_popup_window_pane_cp08

0x629d,	// (0x00011cb6) field_vitu_entry_pane_ParamLimits

0x629d,	// (0x00011cb6) field_vitu_entry_pane

0x62b0,	// (0x00011cc9) grid_vitu_function_pane_ParamLimits

0x62b0,	// (0x00011cc9) grid_vitu_function_pane

0x62c5,	// (0x00011cde) grid_vitu_itu_pane_ParamLimits

0x62c5,	// (0x00011cde) grid_vitu_itu_pane

0x62db,	// (0x00011cf4) cell_vitu_itu_pane_ParamLimits

0x62db,	// (0x00011cf4) cell_vitu_itu_pane

0x62fd,	// (0x00011d16) cell_vitu_function_pane_ParamLimits

0x62fd,	// (0x00011d16) cell_vitu_function_pane

0x9c08,	// (0x00015621) bg_popup_sub_pane_cp08_ParamLimits

0x9c08,	// (0x00015621) bg_popup_sub_pane_cp08

0x6316,	// (0x00011d2f) field_vitu_entry_pane_t1_ParamLimits

0x6316,	// (0x00011d2f) field_vitu_entry_pane_t1

0xd1b3,	// (0x00018bcc) field_vitu_entry_pane_t2_ParamLimits

0xd1b3,	// (0x00018bcc) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x0001b26b) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x0001b26b) field_vitu_entry_pane_t

0xd1d0,	// (0x00018be9) bg_button_pane_cp05_ParamLimits

0xd1d0,	// (0x00018be9) bg_button_pane_cp05

0x6332,	// (0x00011d4b) cell_vitu_itu_pane_g1

0x634a,	// (0x00011d63) cell_vitu_itu_pane_t1_ParamLimits

0x634a,	// (0x00011d63) cell_vitu_itu_pane_t1

0x635c,	// (0x00011d75) cell_vitu_itu_pane_t2_ParamLimits

0x635c,	// (0x00011d75) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x0001b270) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x0001b270) cell_vitu_itu_pane_t

0xd1de,	// (0x00018bf7) bg_button_pane_cp07

0x6391,	// (0x00011daa) cell_vitu_function_pane_g1

0xa309,	// (0x00015d22) main_calc_pane_g1

0x1f1e,	// (0x0000d937) aid_visual_content_pane

0x9bb5,	// (0x000155ce) main_vradio_pane

0x639a,	// (0x00011db3) main_vradio_pane_g1_ParamLimits

0x639a,	// (0x00011db3) main_vradio_pane_g1

0xd1e8,	// (0x00018c01) main_vradio_pane_g2_ParamLimits

0xd1e8,	// (0x00018c01) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x0001b277) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x0001b277) main_vradio_pane_g

0x63b0,	// (0x00011dc9) main_vradio_pane_t1_ParamLimits

0x63b0,	// (0x00011dc9) main_vradio_pane_t1

0x63c5,	// (0x00011dde) main_vradio_pane_t2_ParamLimits

0x63c5,	// (0x00011dde) main_vradio_pane_t2

0xd1f5,	// (0x00018c0e) main_vradio_pane_t3_ParamLimits

0xd1f5,	// (0x00018c0e) main_vradio_pane_t3

0x0002,

0xf863,	// (0x0001b27c) main_vradio_pane_t_ParamLimits

0xf863,	// (0x0001b27c) main_vradio_pane_t

0x63da,	// (0x00011df3) vradio_rocker_control_pane_ParamLimits

0x63da,	// (0x00011df3) vradio_rocker_control_pane

0x63ec,	// (0x00011e05) vradio_station_info_pane_ParamLimits

0x63ec,	// (0x00011e05) vradio_station_info_pane

0xd207,	// (0x00018c20) vradio_frequency_info_pane_ParamLimits

0xd207,	// (0x00018c20) vradio_frequency_info_pane

0xcbc3,	// (0x000185dc) vradio_station_info_pane_g1

0xd216,	// (0x00018c2f) vradio_station_info_pane_t1_ParamLimits

0xd216,	// (0x00018c2f) vradio_station_info_pane_t1

0xd238,	// (0x00018c51) vradio_station_info_pane_t2_ParamLimits

0xd238,	// (0x00018c51) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x0001b283) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x0001b283) vradio_station_info_pane_t

0xd24a,	// (0x00018c63) vradio_tuning_pane

0xd252,	// (0x00018c6b) vradio_rocker_control_pane_g1

0xd25a,	// (0x00018c73) vradio_rocker_control_pane_g2

0xd262,	// (0x00018c7b) vradio_rocker_control_pane_g3

0xd26a,	// (0x00018c83) vradio_rocker_control_pane_g4

0xd272,	// (0x00018c8b) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x0001b288) vradio_rocker_control_pane_g

0x63fc,	// (0x00011e15) vradio_frequency_info_pane_g1

0xd27a,	// (0x00018c93) vradio_frequency_info_pane_t1_ParamLimits

0xd27a,	// (0x00018c93) vradio_frequency_info_pane_t1

0x6406,	// (0x00011e1f) vradio_tuning_pane_g1

0x640f,	// (0x00011e28) vradio_tuning_pane_t1

0x9bdf,	// (0x000155f8) area_side_right_pane_ParamLimits

0x9bdf,	// (0x000155f8) area_side_right_pane

0xc695,	// (0x000180ae) status_small_pane_g1

0xc69d,	// (0x000180b6) status_small_pane_g2

0xc6a6,	// (0x000180bf) status_small_pane_g3

0xc6af,	// (0x000180c8) status_small_pane_g4

0x0003,

0xf62f,	// (0x0001b048) status_small_pane_g

0xc6b8,	// (0x000180d1) status_small_pane_t1

0x9bb5,	// (0x000155ce) main_video3_pane

0xd28e,	// (0x00018ca7) cams_zoom_vslider_pane

0xd296,	// (0x00018caf) image3_wide_pane_ParamLimits

0xd296,	// (0x00018caf) image3_wide_pane

0xd2b0,	// (0x00018cc9) image3_wide_small_pane

0xd2ba,	// (0x00018cd3) main_video3_pane_g1_ParamLimits

0xd2ba,	// (0x00018cd3) main_video3_pane_g1

0xd2d6,	// (0x00018cef) main_video3_pane_g2_ParamLimits

0xd2d6,	// (0x00018cef) main_video3_pane_g2

0x0001,

0xf87a,	// (0x0001b293) main_video3_pane_g_ParamLimits

0xf87a,	// (0x0001b293) main_video3_pane_g

0xd2f2,	// (0x00018d0b) main_video3_pane_t1_ParamLimits

0xd2f2,	// (0x00018d0b) main_video3_pane_t1

0xd31d,	// (0x00018d36) main_video3_pane_t2_ParamLimits

0xd31d,	// (0x00018d36) main_video3_pane_t2

0xd348,	// (0x00018d61) main_video3_pane_t3_ParamLimits

0xd348,	// (0x00018d61) main_video3_pane_t3

0x0002,

0xf87f,	// (0x0001b298) main_video3_pane_t_ParamLimits

0xf87f,	// (0x0001b298) main_video3_pane_t

0xd373,	// (0x00018d8c) cams_zoom_vslider_pane_g1

0xd37c,	// (0x00018d95) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x0001b29f) cams_zoom_vslider_pane_g

0xd384,	// (0x00018d9d) small_slider_vertical_pane

0xcbc3,	// (0x000185dc) small_slider_vertical_pane_g1

0xcbc3,	// (0x000185dc) small_slider_vertical_pane_g2

0xd38c,	// (0x00018da5) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x0001b2a4) small_slider_vertical_pane_g

0x9bb5,	// (0x000155ce) main_hwr_training_pane

0xd395,	// (0x00018dae) hwr_training_instruct_pane_ParamLimits

0xd395,	// (0x00018dae) hwr_training_instruct_pane

0x641e,	// (0x00011e37) hwr_training_navi_pane_ParamLimits

0x641e,	// (0x00011e37) hwr_training_navi_pane

0x6435,	// (0x00011e4e) hwr_training_write_pane_ParamLimits

0x6435,	// (0x00011e4e) hwr_training_write_pane

0x9bb5,	// (0x000155ce) bg_frame_shadow_pane

0xd3c4,	// (0x00018ddd) hwr_training_write_pane_g1

0xd3cc,	// (0x00018de5) hwr_training_write_pane_g2

0xd3d4,	// (0x00018ded) hwr_training_write_pane_g3

0xd3dc,	// (0x00018df5) hwr_training_write_pane_g4

0xd3e4,	// (0x00018dfd) hwr_training_write_pane_g5

0xd3ec,	// (0x00018e05) hwr_training_write_pane_g6

0xd3f4,	// (0x00018e0d) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x0001b2ab) hwr_training_write_pane_g

0xd3fc,	// (0x00018e15) hwr_training_navi_pane_g1_ParamLimits

0xd3fc,	// (0x00018e15) hwr_training_navi_pane_g1

0xd40e,	// (0x00018e27) hwr_training_navi_pane_g2_ParamLimits

0xd40e,	// (0x00018e27) hwr_training_navi_pane_g2

0xd420,	// (0x00018e39) hwr_training_navi_pane_g3_ParamLimits

0xd420,	// (0x00018e39) hwr_training_navi_pane_g3

0xd430,	// (0x00018e49) hwr_training_navi_pane_g4_ParamLimits

0xd430,	// (0x00018e49) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x0001b2ba) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x0001b2ba) hwr_training_navi_pane_g

0xd43d,	// (0x00018e56) hwr_training_navi_pane_t1

0x6475,	// (0x00011e8e) list_single_hwr_training_instruct_pane_ParamLimits

0x6475,	// (0x00011e8e) list_single_hwr_training_instruct_pane

0xd44b,	// (0x00018e64) list_single_hwr_training_instruct_pane_t1

0xcb03,	// (0x0001851c) bg_frame_shadow_pane_g1

0xd45a,	// (0x00018e73) bg_frame_shadow_pane_g2

0xd462,	// (0x00018e7b) bg_frame_shadow_pane_g3

0xd46a,	// (0x00018e83) bg_frame_shadow_pane_g4

0xd472,	// (0x00018e8b) bg_frame_shadow_pane_g5

0xd47a,	// (0x00018e93) bg_frame_shadow_pane_g6

0xd482,	// (0x00018e9b) bg_frame_shadow_pane_g7

0xa496,	// (0x00015eaf) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x0001b2c5) bg_frame_shadow_pane_g

0x9bb5,	// (0x000155ce) main_video_tele_dialer_pane

0x648d,	// (0x00011ea6) aid_size_cell_video_keypad_ParamLimits

0x648d,	// (0x00011ea6) aid_size_cell_video_keypad

0x64a7,	// (0x00011ec0) grid_video_dialer_keypad_pane_ParamLimits

0x64a7,	// (0x00011ec0) grid_video_dialer_keypad_pane

0x64e9,	// (0x00011f02) video_down_pane_cp_ParamLimits

0x64e9,	// (0x00011f02) video_down_pane_cp

0x6519,	// (0x00011f32) cell_video_dialer_keypad_pane_ParamLimits

0x6519,	// (0x00011f32) cell_video_dialer_keypad_pane

0xd48a,	// (0x00018ea3) bg_button_pane_cp08_ParamLimits

0xd48a,	// (0x00018ea3) bg_button_pane_cp08

0x653b,	// (0x00011f54) cell_video_dialer_keypad_pane_g1_ParamLimits

0x653b,	// (0x00011f54) cell_video_dialer_keypad_pane_g1

0x5c35,	// (0x0001164e) mup3_rocker2_pane_ParamLimits

0x5c35,	// (0x0001164e) mup3_rocker2_pane

0xcbc3,	// (0x000185dc) mup3_rocker2_pane_g1

0x499a,	// (0x000103b3) main_dialer2_pane

0x9bb5,	// (0x000155ce) main_mp4_pane

0xd49e,	// (0x00018eb7) main_mp4_pane_g1_ParamLimits

0xd49e,	// (0x00018eb7) main_mp4_pane_g1

0xd49e,	// (0x00018eb7) main_mp4_pane_g2_ParamLimits

0xd49e,	// (0x00018eb7) main_mp4_pane_g2

0x6576,	// (0x00011f8f) main_mp4_pane_g3_ParamLimits

0x6576,	// (0x00011f8f) main_mp4_pane_g3

0xd4ac,	// (0x00018ec5) main_mp4_pane_g4_ParamLimits

0xd4ac,	// (0x00018ec5) main_mp4_pane_g4

0xd4da,	// (0x00018ef3) main_mp4_pane_g5_ParamLimits

0xd4da,	// (0x00018ef3) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x0001b2e5) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x0001b2e5) main_mp4_pane_g

0xd536,	// (0x00018f4f) main_mp4_pane_t1_ParamLimits

0xd536,	// (0x00018f4f) main_mp4_pane_t1

0xd58e,	// (0x00018fa7) main_mp4_pane_t2_ParamLimits

0xd58e,	// (0x00018fa7) main_mp4_pane_t2

0xd5e0,	// (0x00018ff9) main_mp4_pane_t3_ParamLimits

0xd5e0,	// (0x00018ff9) main_mp4_pane_t3

0xd606,	// (0x0001901f) main_mp4_pane_t4_ParamLimits

0xd606,	// (0x0001901f) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x0001b2f2) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x0001b2f2) main_mp4_pane_t

0xd646,	// (0x0001905f) mp4_progress_pane_ParamLimits

0xd646,	// (0x0001905f) mp4_progress_pane

0xd68a,	// (0x000190a3) mp4_rocker_pane_ParamLimits

0xd68a,	// (0x000190a3) mp4_rocker_pane

0xd6b0,	// (0x000190c9) mp4_progress_pane_t1

0xd6c7,	// (0x000190e0) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x0001b2fb) mp4_progress_pane_t

0xd6de,	// (0x000190f7) mup_progress_pane_cp04

0xcbc3,	// (0x000185dc) mp4_rocker_pane_g1

0x65a6,	// (0x00011fbf) aid_cell_size_keypad2_ParamLimits

0x65a6,	// (0x00011fbf) aid_cell_size_keypad2

0x65c0,	// (0x00011fd9) dialer2_ne_pane_ParamLimits

0x65c0,	// (0x00011fd9) dialer2_ne_pane

0x65d5,	// (0x00011fee) grid_dialer2_keypad_pane_ParamLimits

0x65d5,	// (0x00011fee) grid_dialer2_keypad_pane

0xc9b0,	// (0x000183c9) bg_popup_call_pane_cp07_ParamLimits

0xc9b0,	// (0x000183c9) bg_popup_call_pane_cp07

0x65eb,	// (0x00012004) dialer2_ne_pane_t1_ParamLimits

0x65eb,	// (0x00012004) dialer2_ne_pane_t1

0x6628,	// (0x00012041) cell_dialer2_keypad_pane_ParamLimits

0x6628,	// (0x00012041) cell_dialer2_keypad_pane

0xd6fc,	// (0x00019115) bg_button_pane_pane_cp04_ParamLimits

0xd6fc,	// (0x00019115) bg_button_pane_pane_cp04

0x664a,	// (0x00012063) cell_dialer2_keypad_pane_g1_ParamLimits

0x664a,	// (0x00012063) cell_dialer2_keypad_pane_g1

0x2d59,	// (0x0000e772) aid_placing_vt_set_content_ParamLimits

0x2d59,	// (0x0000e772) aid_placing_vt_set_content

0x2d7b,	// (0x0000e794) aid_placing_vt_set_title_ParamLimits

0x2d7b,	// (0x0000e794) aid_placing_vt_set_title

0x9bb5,	// (0x000155ce) main_image3_pane

0x66d9,	// (0x000120f2) area_side_right_pane_cp01_ParamLimits

0x66d9,	// (0x000120f2) area_side_right_pane_cp01

0xd49e,	// (0x00018eb7) main_image3_pane_g1_ParamLimits

0xd49e,	// (0x00018eb7) main_image3_pane_g1

0x66f0,	// (0x00012109) main_image3_pane_g2_ParamLimits

0x66f0,	// (0x00012109) main_image3_pane_g2

0x6716,	// (0x0001212f) main_image3_pane_g3_ParamLimits

0x6716,	// (0x0001212f) main_image3_pane_g3

0x673c,	// (0x00012155) main_image3_pane_g4_ParamLimits

0x673c,	// (0x00012155) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x0001b30a) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x0001b30a) main_image3_pane_g

0x6762,	// (0x0001217b) main_image3_pane_t1_ParamLimits

0x6762,	// (0x0001217b) main_image3_pane_t1

0x67ba,	// (0x000121d3) main_image3_pane_t2_ParamLimits

0x67ba,	// (0x000121d3) main_image3_pane_t2

0x680c,	// (0x00012225) main_image3_pane_t3_ParamLimits

0x680c,	// (0x00012225) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x0001b313) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x0001b313) main_image3_pane_t

0x9c08,	// (0x00015621) grid_sctrl_middle_pane_cp01_ParamLimits

0x9c08,	// (0x00015621) grid_sctrl_middle_pane_cp01

0x688c,	// (0x000122a5) cell_sctrl_middle_pane_cp01_ParamLimits

0x688c,	// (0x000122a5) cell_sctrl_middle_pane_cp01

0x68a9,	// (0x000122c2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x68a9,	// (0x000122c2) cell_sctrl_middle_pane_cp01_g1

0x9bb5,	// (0x000155ce) main_call4_pane

0x68bf,	// (0x000122d8) aid_size_button_call4_ParamLimits

0x68bf,	// (0x000122d8) aid_size_button_call4

0x68ec,	// (0x00012305) call4_windows_pane_ParamLimits

0x68ec,	// (0x00012305) call4_windows_pane

0x6902,	// (0x0001231b) grid_call4_button_pane_ParamLimits

0x6902,	// (0x0001231b) grid_call4_button_pane

0xd752,	// (0x0001916b) call4_windows_conf_pane

0x6921,	// (0x0001233a) popup_call4_audio_first_window_ParamLimits

0x6921,	// (0x0001233a) popup_call4_audio_first_window

0x6941,	// (0x0001235a) popup_call4_audio_second_window_ParamLimits

0x6941,	// (0x0001235a) popup_call4_audio_second_window

0xd785,	// (0x0001919e) popup_call4_audio_wait_window_ParamLimits

0xd785,	// (0x0001919e) popup_call4_audio_wait_window

0x6953,	// (0x0001236c) cell_call4_button_pane_ParamLimits

0x6953,	// (0x0001236c) cell_call4_button_pane

0x6978,	// (0x00012391) bg_button_pane_cp09_ParamLimits

0x6978,	// (0x00012391) bg_button_pane_cp09

0x6984,	// (0x0001239d) cell_call4_button_pane_g1_ParamLimits

0x6984,	// (0x0001239d) cell_call4_button_pane_g1

0x69aa,	// (0x000123c3) cell_call4_button_pane_t1_ParamLimits

0x69aa,	// (0x000123c3) cell_call4_button_pane_t1

0xd7cb,	// (0x000191e4) popup_call4_audio_conf_window_ParamLimits

0xd7cb,	// (0x000191e4) popup_call4_audio_conf_window

0x5c8f,	// (0x000116a8) mup3_progress_pane_t1_ParamLimits

0x5ca5,	// (0x000116be) mup3_progress_pane_t2_ParamLimits

0xcf25,	// (0x0001893e) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x0001b1ec) mup3_progress_pane_t_ParamLimits

0xcf3c,	// (0x00018955) mup_progress_pane_cp03_ParamLimits

0x627f,	// (0x00011c98) mup3_control_keys_pane_g4_copy1

0xd674,	// (0x0001908d) mp4_rocker2_pane_ParamLimits

0xd674,	// (0x0001908d) mp4_rocker2_pane

0xd7df,	// (0x000191f8) mp4_rocker2_pane_g1

0xd7e7,	// (0x00019200) mp4_rocker2_pane_g2

0xd7ef,	// (0x00019208) mp4_rocker2_pane_g3

0xd7f7,	// (0x00019210) mp4_rocker2_pane_g4

0xd7ff,	// (0x00019218) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x0001b31c) mp4_rocker2_pane_g

0x9bb5,	// (0x000155ce) main_camera4_pane

0x9bb5,	// (0x000155ce) main_video4_pane

0x64bb,	// (0x00011ed4) main_video_tele_dialer_pane_t1_ParamLimits

0x64bb,	// (0x00011ed4) main_video_tele_dialer_pane_t1

0x64d2,	// (0x00011eeb) main_video_tele_dialer_pane_t2_ParamLimits

0x64d2,	// (0x00011eeb) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x0001b2d6) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x0001b2d6) main_video_tele_dialer_pane_t

0x69e8,	// (0x00012401) cam4_autofocus_pane_ParamLimits

0x69e8,	// (0x00012401) cam4_autofocus_pane

0x69fc,	// (0x00012415) cam4_image_uncrop_pane_ParamLimits

0x69fc,	// (0x00012415) cam4_image_uncrop_pane

0x6a13,	// (0x0001242c) cam4_indicators_pane_ParamLimits

0x6a13,	// (0x0001242c) cam4_indicators_pane

0x6a37,	// (0x00012450) main_camera4_pane_g1_ParamLimits

0x6a37,	// (0x00012450) main_camera4_pane_g1

0x6a43,	// (0x0001245c) main_camera4_pane_g2_ParamLimits

0x6a43,	// (0x0001245c) main_camera4_pane_g2

0x6a43,	// (0x0001245c) main_camera4_pane_g3_ParamLimits

0x6a43,	// (0x0001245c) main_camera4_pane_g3

0x6a4f,	// (0x00012468) main_camera4_pane_g4_ParamLimits

0x6a4f,	// (0x00012468) main_camera4_pane_g4

0x6a5b,	// (0x00012474) main_camera4_pane_g5_ParamLimits

0x6a5b,	// (0x00012474) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x0001b327) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x0001b327) main_camera4_pane_g

0x6a78,	// (0x00012491) main_camera4_pane_t1_ParamLimits

0x6a78,	// (0x00012491) main_camera4_pane_t1

0xcdf2,	// (0x0001880b) bg_tb_trans_pane_cp06

0xd829,	// (0x00019242) cam4_indicators_pane_g1

0xd839,	// (0x00019252) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x0001b342) cam4_indicators_pane_g

0xd859,	// (0x00019272) cam4_indicators_pane_t1

0x6acd,	// (0x000124e6) main_video4_pane_g1_ParamLimits

0x6acd,	// (0x000124e6) main_video4_pane_g1

0x6adf,	// (0x000124f8) main_video4_pane_g2_ParamLimits

0x6adf,	// (0x000124f8) main_video4_pane_g2

0x6adf,	// (0x000124f8) main_video4_pane_g3_ParamLimits

0x6adf,	// (0x000124f8) main_video4_pane_g3

0x6aee,	// (0x00012507) main_video4_pane_g4_ParamLimits

0x6aee,	// (0x00012507) main_video4_pane_g4

0x0004,

0xf930,	// (0x0001b349) main_video4_pane_g_ParamLimits

0xf930,	// (0x0001b349) main_video4_pane_g

0x6b0c,	// (0x00012525) vid4_indicators_pane_ParamLimits

0x6b0c,	// (0x00012525) vid4_indicators_pane

0x6b34,	// (0x0001254d) video4_image_uncrop_cif_pane_ParamLimits

0x6b34,	// (0x0001254d) video4_image_uncrop_cif_pane

0x6b4c,	// (0x00012565) video4_image_uncrop_nhd_pane_ParamLimits

0x6b4c,	// (0x00012565) video4_image_uncrop_nhd_pane

0x6b60,	// (0x00012579) video4_image_uncrop_vga_pane_ParamLimits

0x6b60,	// (0x00012579) video4_image_uncrop_vga_pane

0xcecb,	// (0x000188e4) bg_tb_trans_pane_cp07

0x6b78,	// (0x00012591) vid4_indicators_pane_g1

0x6b85,	// (0x0001259e) vid4_indicators_pane_g2

0x6b92,	// (0x000125ab) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x0001b354) vid4_indicators_pane_g

0x6bb7,	// (0x000125d0) vid4_indicators_pane_t1

0x6bc9,	// (0x000125e2) cam4_autofocus_pane_g1

0x6bd1,	// (0x000125ea) cam4_autofocus_pane_g2

0x6bd9,	// (0x000125f2) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x0001b35f) cam4_autofocus_pane_g

0x6be1,	// (0x000125fa) cam4_autofocus_pane_g3_copy1

0x64fd,	// (0x00011f16) video_down_pane_cp_t1

0x650b,	// (0x00011f24) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x0001b2db) video_down_pane_cp_t

0x9c08,	// (0x00015621) popup_vitu2_window_ParamLimits

0x9c08,	// (0x00015621) popup_vitu2_window

0x6be9,	// (0x00012602) aid_size_cell2_itu2_ParamLimits

0x6be9,	// (0x00012602) aid_size_cell2_itu2

0x6c0f,	// (0x00012628) aid_size_cell_itu2_ParamLimits

0x6c0f,	// (0x00012628) aid_size_cell_itu2

0x6c61,	// (0x0001267a) bg_popup_window_pane_cp09_ParamLimits

0x6c61,	// (0x0001267a) bg_popup_window_pane_cp09

0x6c6f,	// (0x00012688) field_vitu2_entry_pane_ParamLimits

0x6c6f,	// (0x00012688) field_vitu2_entry_pane

0x6c89,	// (0x000126a2) grid_vitu2_function_pane_ParamLimits

0x6c89,	// (0x000126a2) grid_vitu2_function_pane

0x6cc4,	// (0x000126dd) grid_vitu2_itu_pane_ParamLimits

0x6cc4,	// (0x000126dd) grid_vitu2_itu_pane

0x6d29,	// (0x00012742) cell_vitu2_itu_pane_ParamLimits

0x6d29,	// (0x00012742) cell_vitu2_itu_pane

0x6d4b,	// (0x00012764) cell_vitu2_function_pane_ParamLimits

0x6d4b,	// (0x00012764) cell_vitu2_function_pane

0xd87b,	// (0x00019294) bg_popup_call_pane_cp08_ParamLimits

0xd87b,	// (0x00019294) bg_popup_call_pane_cp08

0xd894,	// (0x000192ad) field_vitu2_entry_pane_g1

0xd8a0,	// (0x000192b9) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x0001b366) field_vitu2_entry_pane_g

0x6d8a,	// (0x000127a3) field_vitu2_entry_pane_t1_ParamLimits

0x6d8a,	// (0x000127a3) field_vitu2_entry_pane_t1

0xd8ba,	// (0x000192d3) field_vitu2_entry_pane_t2_ParamLimits

0xd8ba,	// (0x000192d3) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x0001b36d) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x0001b36d) field_vitu2_entry_pane_t

0x6da6,	// (0x000127bf) bg_button_pane_cp010_ParamLimits

0x6da6,	// (0x000127bf) bg_button_pane_cp010

0x6db4,	// (0x000127cd) cell_vitu2_itu_pane_g1

0x6dd2,	// (0x000127eb) cell_vitu2_itu_pane_t1_ParamLimits

0x6dd2,	// (0x000127eb) cell_vitu2_itu_pane_t1

0x6e38,	// (0x00012851) cell_vitu2_itu_pane_t2_ParamLimits

0x6e38,	// (0x00012851) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x0001b377) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x0001b377) cell_vitu2_itu_pane_t

0x9c08,	// (0x00015621) bg_button_pane_cp011

0x6f14,	// (0x0001292d) cell_vitu2_function_pane_g1

0x9bb5,	// (0x000155ce) main_myfav_hc_pane

0x6858,	// (0x00012271) popup_image3_note_pane_ParamLimits

0x6858,	// (0x00012271) popup_image3_note_pane

0x6872,	// (0x0001228b) popup_image3_tool_bar_pane_ParamLimits

0x6872,	// (0x0001228b) popup_image3_tool_bar_pane

0x6ebc,	// (0x000128d5) cell_vitu2_itu_pane_t3_ParamLimits

0x6ebc,	// (0x000128d5) cell_vitu2_itu_pane_t3

0x9bb5,	// (0x000155ce) bg_popup_trans_pane

0xd8df,	// (0x000192f8) grid_image3_tool_bar_pane

0xd8e9,	// (0x00019302) bg_popup_trans_pane_g1

0xa939,	// (0x00016352) bg_popup_trans_pane_g2

0xd8f1,	// (0x0001930a) bg_popup_trans_pane_g3

0xd8f9,	// (0x00019312) bg_popup_trans_pane_g4

0xd901,	// (0x0001931a) bg_popup_trans_pane_g5

0xd909,	// (0x00019322) bg_popup_trans_pane_g6

0xd911,	// (0x0001932a) bg_popup_trans_pane_g7

0xd919,	// (0x00019332) bg_popup_trans_pane_g8

0xa919,	// (0x00016332) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x0001b37e) bg_popup_trans_pane_g

0xceef,	// (0x00018908) cell_image3_tool_bar_pane_ParamLimits

0xceef,	// (0x00018908) cell_image3_tool_bar_pane

0xcbc3,	// (0x000185dc) cell_image3_tool_bar_pane_g1

0x9bb5,	// (0x000155ce) bg_popup_trans_pane_cp1

0xd921,	// (0x0001933a) popup_image3_note_pane_t1

0xd92f,	// (0x00019348) popup_image3_note_pane_t2

0xd93d,	// (0x00019356) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x0001b391) popup_image3_note_pane_t

0xd94b,	// (0x00019364) popup_image3_note_pane_t3_copy1

0x6f28,	// (0x00012941) bg_myfav_hc_instruction_pane_ParamLimits

0x6f28,	// (0x00012941) bg_myfav_hc_instruction_pane

0x6f3a,	// (0x00012953) cell_myfav_contact_pane_ParamLimits

0x6f3a,	// (0x00012953) cell_myfav_contact_pane

0x6f54,	// (0x0001296d) cell_myfav_contact_pane_cp1_ParamLimits

0x6f54,	// (0x0001296d) cell_myfav_contact_pane_cp1

0x6f6a,	// (0x00012983) cell_myfav_contact_pane_cp2_ParamLimits

0x6f6a,	// (0x00012983) cell_myfav_contact_pane_cp2

0x6f80,	// (0x00012999) cell_myfav_contact_pane_cp3_ParamLimits

0x6f80,	// (0x00012999) cell_myfav_contact_pane_cp3

0x6f95,	// (0x000129ae) cell_myfav_contact_pane_cp4_ParamLimits

0x6f95,	// (0x000129ae) cell_myfav_contact_pane_cp4

0x6fa9,	// (0x000129c2) cell_myfav_contact_pane_cp5_ParamLimits

0x6fa9,	// (0x000129c2) cell_myfav_contact_pane_cp5

0x6fbd,	// (0x000129d6) cell_myfav_contact_pane_cp6_ParamLimits

0x6fbd,	// (0x000129d6) cell_myfav_contact_pane_cp6

0x6fd1,	// (0x000129ea) cell_myfav_contact_pane_cp7_ParamLimits

0x6fd1,	// (0x000129ea) cell_myfav_contact_pane_cp7

0xd959,	// (0x00019372) listscroll_gen_pane_cp05

0x6fe9,	// (0x00012a02) main_myfav_hc_pane_g1_ParamLimits

0x6fe9,	// (0x00012a02) main_myfav_hc_pane_g1

0x6fff,	// (0x00012a18) main_myfav_hc_pane_g2_ParamLimits

0x6fff,	// (0x00012a18) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x0001b398) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x0001b398) main_myfav_hc_pane_g

0x7029,	// (0x00012a42) main_myfav_hc_pane_t1_ParamLimits

0x7029,	// (0x00012a42) main_myfav_hc_pane_t1

0xd962,	// (0x0001937b) main_myfav_hc_pane_t2_ParamLimits

0xd962,	// (0x0001937b) main_myfav_hc_pane_t2

0xd974,	// (0x0001938d) main_myfav_hc_pane_t3_ParamLimits

0xd974,	// (0x0001938d) main_myfav_hc_pane_t3

0x703e,	// (0x00012a57) main_myfav_hc_pane_t4_ParamLimits

0x703e,	// (0x00012a57) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x0001b39f) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x0001b39f) main_myfav_hc_pane_t

0xcbc3,	// (0x000185dc) bg_myfav_hc_instruction_pane_g1

0xd986,	// (0x0001939f) cell_myfav_contact_pane_g1_ParamLimits

0xd986,	// (0x0001939f) cell_myfav_contact_pane_g1

0xd986,	// (0x0001939f) cell_myfav_contact_pane_g2_ParamLimits

0xd986,	// (0x0001939f) cell_myfav_contact_pane_g2

0xd992,	// (0x000193ab) cell_myfav_contact_pane_g3_ParamLimits

0xd992,	// (0x000193ab) cell_myfav_contact_pane_g3

0xcf0f,	// (0x00018928) cell_myfav_contact_pane_g4_ParamLimits

0xcf0f,	// (0x00018928) cell_myfav_contact_pane_g4

0xd99f,	// (0x000193b8) cell_myfav_contact_pane_g5_ParamLimits

0xd99f,	// (0x000193b8) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x0001b3aa) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x0001b3aa) cell_myfav_contact_pane_g

0x7015,	// (0x00012a2e) main_myfav_hc_pane_g3_ParamLimits

0x7015,	// (0x00012a2e) main_myfav_hc_pane_g3

0x2040,	// (0x0000da59) popup_adpt_find_window

0x7062,	// (0x00012a7b) afind_page_pane_ParamLimits

0x7062,	// (0x00012a7b) afind_page_pane

0x7077,	// (0x00012a90) aid_size_cell_afind_ParamLimits

0x7077,	// (0x00012a90) aid_size_cell_afind

0x7095,	// (0x00012aae) bg_popup_sub_pane_cp09_ParamLimits

0x7095,	// (0x00012aae) bg_popup_sub_pane_cp09

0x70a2,	// (0x00012abb) find_pane_cp01_ParamLimits

0x70a2,	// (0x00012abb) find_pane_cp01

0xd9ab,	// (0x000193c4) grid_afind_control_pane_ParamLimits

0xd9ab,	// (0x000193c4) grid_afind_control_pane

0x70af,	// (0x00012ac8) grid_afind_pane_ParamLimits

0x70af,	// (0x00012ac8) grid_afind_pane

0x70cd,	// (0x00012ae6) cell_afind_pane_ParamLimits

0x70cd,	// (0x00012ae6) cell_afind_pane

0xcbc3,	// (0x000185dc) afind_page_pane_g1

0x711a,	// (0x00012b33) afind_page_pane_g2

0x7123,	// (0x00012b3c) afind_page_pane_g3

0x0002,

0xf99c,	// (0x0001b3b5) afind_page_pane_g

0x712c,	// (0x00012b45) afind_page_pane_t1

0xd9bf,	// (0x000193d8) cell_afind_grid_control_pane_ParamLimits

0xd9bf,	// (0x000193d8) cell_afind_grid_control_pane

0xd6fc,	// (0x00019115) bg_button_pane_cp69_ParamLimits

0xd6fc,	// (0x00019115) bg_button_pane_cp69

0x714c,	// (0x00012b65) cell_afind_pane_g1_ParamLimits

0x714c,	// (0x00012b65) cell_afind_pane_g1

0x7159,	// (0x00012b72) cell_afind_pane_t1_ParamLimits

0x7159,	// (0x00012b72) cell_afind_pane_t1

0xa685,	// (0x0001609e) bg_button_pane_cp72

0xd9ce,	// (0x000193e7) cell_afind_grid_control_pane_g1

0x453c,	// (0x0000ff55) aid_image_placing_area_ParamLimits

0x453c,	// (0x0000ff55) aid_image_placing_area

0xd19b,	// (0x00018bb4) field_vitu_entry_pane_g1_ParamLimits

0xd19b,	// (0x00018bb4) field_vitu_entry_pane_g1

0xd1a7,	// (0x00018bc0) field_vitu_entry_pane_g2_ParamLimits

0xd1a7,	// (0x00018bc0) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x0001b266) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x0001b266) field_vitu_entry_pane_g

0x6332,	// (0x00011d4b) cell_vitu_itu_pane_g1_ParamLimits

0x6374,	// (0x00011d8d) cell_vitu_itu_pane_t3_ParamLimits

0x6374,	// (0x00011d8d) cell_vitu_itu_pane_t3

0xd6b0,	// (0x000190c9) mp4_progress_pane_t1_ParamLimits

0xd6c7,	// (0x000190e0) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x0001b2fb) mp4_progress_pane_t_ParamLimits

0xd6de,	// (0x000190f7) mup_progress_pane_cp04_ParamLimits

0x7050,	// (0x00012a69) main_myfav_hc_pane_t5_ParamLimits

0x7050,	// (0x00012a69) main_myfav_hc_pane_t5

0x9bd7,	// (0x000155f0) aid_zoom_text_primary

0x2040,	// (0x0000da59) popup_adpt_find_window_ParamLimits

0x9c08,	// (0x00015621) main_cam_set_pane

0x6a25,	// (0x0001243e) cam4_zoom_pane_ParamLimits

0x6a25,	// (0x0001243e) cam4_zoom_pane

0x716b,	// (0x00012b84) main_cam_set_pane_g1_ParamLimits

0x716b,	// (0x00012b84) main_cam_set_pane_g1

0x7179,	// (0x00012b92) main_cam_set_pane_g2_ParamLimits

0x7179,	// (0x00012b92) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x0001b3bc) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x0001b3bc) main_cam_set_pane_g

0x7198,	// (0x00012bb1) main_cam_set_pane_t1_ParamLimits

0x7198,	// (0x00012bb1) main_cam_set_pane_t1

0x71aa,	// (0x00012bc3) main_cset_listscroll_pane_ParamLimits

0x71aa,	// (0x00012bc3) main_cset_listscroll_pane

0x71c8,	// (0x00012be1) main_cset_slider_pane_ParamLimits

0x71c8,	// (0x00012be1) main_cset_slider_pane

0xd9df,	// (0x000193f8) main_cset_list_pane_ParamLimits

0xd9df,	// (0x000193f8) main_cset_list_pane

0xd9ef,	// (0x00019408) scroll_pane_cp028

0x71ec,	// (0x00012c05) aid_area_touch_slider

0x7208,	// (0x00012c21) cset_slider_pane

0x7232,	// (0x00012c4b) main_cset_slider_pane_g1

0x7247,	// (0x00012c60) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x0001b3c1) main_cset_slider_pane_g

0xda28,	// (0x00019441) main_cset_slider_pane_t1

0x7303,	// (0x00012d1c) main_cset_slider_pane_t2

0x731d,	// (0x00012d36) main_cset_slider_pane_t3

0x7337,	// (0x00012d50) main_cset_slider_pane_t4

0x7351,	// (0x00012d6a) main_cset_slider_pane_t5

0x736b,	// (0x00012d84) main_cset_slider_pane_t6

0x7380,	// (0x00012d99) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x0001b3e6) main_cset_slider_pane_t

0x7484,	// (0x00012e9d) cset_list_set_pane_ParamLimits

0x7484,	// (0x00012e9d) cset_list_set_pane

0x7495,	// (0x00012eae) aid_position_infowindow_above

0x749d,	// (0x00012eb6) aid_position_infowindow_below

0x74a5,	// (0x00012ebe) cset_list_set_pane_g1_ParamLimits

0x74a5,	// (0x00012ebe) cset_list_set_pane_g1

0xdac8,	// (0x000194e1) cset_list_set_pane_g3_ParamLimits

0xdac8,	// (0x000194e1) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x0001b405) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x0001b405) cset_list_set_pane_g

0xdad7,	// (0x000194f0) cset_list_set_pane_t1_ParamLimits

0xdad7,	// (0x000194f0) cset_list_set_pane_t1

0x9c08,	// (0x00015621) list_highlight_pane_cp021_ParamLimits

0x9c08,	// (0x00015621) list_highlight_pane_cp021

0xb32e,	// (0x00016d47) cset_slider_pane_g1

0xb340,	// (0x00016d59) cset_slider_pane_g2

0xb337,	// (0x00016d50) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x0001b40a) cset_slider_pane_g

0xdaec,	// (0x00019505) aid_area_touch_cam4_zoom

0xdaf4,	// (0x0001950d) cam4_zoom_cont_pane

0xdafc,	// (0x00019515) cam4_zoom_pane_g1

0xdb04,	// (0x0001951d) cam4_zoom_pane_g2

0x74b1,	// (0x00012eca) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x0001b411) cam4_zoom_pane_g

0xdb0c,	// (0x00019525) cam4_zoom_cont_pane_g1

0xdb15,	// (0x0001952e) cam4_zoom_cont_pane_g2

0xdb1e,	// (0x00019537) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x0001b418) cam4_zoom_cont_pane_g

0x68dd,	// (0x000122f6) call4_image_pane_ParamLimits

0x68dd,	// (0x000122f6) call4_image_pane

0xd752,	// (0x0001916b) call4_windows_conf_pane_ParamLimits

0xd765,	// (0x0001917e) popup_call4_audio_in_window_ParamLimits

0xd765,	// (0x0001917e) popup_call4_audio_in_window

0x9bb5,	// (0x000155ce) bg_popup_call2_act_pane_cp02

0xd7c3,	// (0x000191dc) call4_list_conf_pane

0xcbc3,	// (0x000185dc) call4_image_pane_g1

0xcbc3,	// (0x000185dc) call4_image_pane_g2

0x0001,

0xf713,	// (0x0001b12c) call4_image_pane_g

0xdb27,	// (0x00019540) list_single_graphic_popup_conf4_pane_ParamLimits

0xdb27,	// (0x00019540) list_single_graphic_popup_conf4_pane

0x9bb5,	// (0x000155ce) list_highlight_pane_cp022

0xdb3a,	// (0x00019553) list_single_graphic_popup_conf4_pane_g1

0xaf73,	// (0x0001698c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x0001b41f) list_single_graphic_popup_conf4_pane_g

0xdb42,	// (0x0001955b) list_single_graphic_popup_conf4_pane_t1

0x2e85,	// (0x0000e89e) popup_vtel_slider_window_ParamLimits

0x2e85,	// (0x0000e89e) popup_vtel_slider_window

0xd6ea,	// (0x00019103) dialer2_ne_pane_t2_ParamLimits

0xd6ea,	// (0x00019103) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x0001b300) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x0001b300) dialer2_ne_pane_t

0xc9b0,	// (0x000183c9) bg_popup_sub_pane_cp010_ParamLimits

0xc9b0,	// (0x000183c9) bg_popup_sub_pane_cp010

0x74b9,	// (0x00012ed2) popup_vtel_slider_window_g1_ParamLimits

0x74b9,	// (0x00012ed2) popup_vtel_slider_window_g1

0x74cc,	// (0x00012ee5) popup_vtel_slider_window_g2_ParamLimits

0x74cc,	// (0x00012ee5) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x0001b424) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x0001b424) popup_vtel_slider_window_g

0x7520,	// (0x00012f39) vtel_slider_pane_ParamLimits

0x7520,	// (0x00012f39) vtel_slider_pane

0x7542,	// (0x00012f5b) vtel_slider_pane_g1_ParamLimits

0x7542,	// (0x00012f5b) vtel_slider_pane_g1

0x7556,	// (0x00012f6f) vtel_slider_pane_g2_ParamLimits

0x7556,	// (0x00012f6f) vtel_slider_pane_g2

0x756e,	// (0x00012f87) vtel_slider_pane_g3_ParamLimits

0x756e,	// (0x00012f87) vtel_slider_pane_g3

0x7542,	// (0x00012f5b) vtel_slider_pane_g4_ParamLimits

0x7542,	// (0x00012f5b) vtel_slider_pane_g4

0x7584,	// (0x00012f9d) vtel_slider_pane_g5_ParamLimits

0x7584,	// (0x00012f9d) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x0001b42d) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x0001b42d) vtel_slider_pane_g

0x9bb5,	// (0x000155ce) main_gallery2_pane

0x6c3b,	// (0x00012654) aid_size_row_itut2_dropdow_list_ParamLimits

0x6c3b,	// (0x00012654) aid_size_row_itut2_dropdow_list

0x6ca5,	// (0x000126be) grid_vitu2_function_top_pane_ParamLimits

0x6ca5,	// (0x000126be) grid_vitu2_function_top_pane

0x6ce8,	// (0x00012701) popup_vitu2_dropdown_list_window_ParamLimits

0x6ce8,	// (0x00012701) popup_vitu2_dropdown_list_window

0x6d07,	// (0x00012720) popup_vitu2_match_list_window

0x759a,	// (0x00012fb3) cell_vitu2_function_top_pane_ParamLimits

0x759a,	// (0x00012fb3) cell_vitu2_function_top_pane

0x75ba,	// (0x00012fd3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x75ba,	// (0x00012fd3) cell_vitu2_function_top_pane_cp01

0x75da,	// (0x00012ff3) cell_vitu2_function_top_wide_pane_ParamLimits

0x75da,	// (0x00012ff3) cell_vitu2_function_top_wide_pane

0x9c08,	// (0x00015621) bg_button_pane_cp012

0x75f8,	// (0x00013011) cell_vitu2_function_top_pane_g1

0xdb66,	// (0x0001957f) bg_button_pane_cp013_ParamLimits

0xdb66,	// (0x0001957f) bg_button_pane_cp013

0x760c,	// (0x00013025) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x760c,	// (0x00013025) cell_vitu2_function_top_wide_pane_g1

0x9c08,	// (0x00015621) bg_popup_sub_pane_cp20

0x7624,	// (0x0001303d) list_vitu2_match_list_pane

0xd8e9,	// (0x00019302) bg_popup_sub_pane_cp20_g1

0xd8f1,	// (0x0001930a) bg_popup_sub_pane_cp20_g2

0xa939,	// (0x00016352) bg_popup_sub_pane_cp20_g3

0xd8f9,	// (0x00019312) bg_popup_sub_pane_cp20_g4

0xa919,	// (0x00016332) bg_popup_sub_pane_cp20_g5

0xdb82,	// (0x0001959b) bg_popup_sub_pane_cp20_g6

0xd909,	// (0x00019322) bg_popup_sub_pane_cp20_g7

0xd911,	// (0x0001932a) bg_popup_sub_pane_cp20_g8

0xd919,	// (0x00019332) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x0001b438) bg_popup_sub_pane_cp20_g

0xdb8a,	// (0x000195a3) list_vitu2_match_list_item_pane_ParamLimits

0xdb8a,	// (0x000195a3) list_vitu2_match_list_item_pane

0xdb9c,	// (0x000195b5) list_vitu2_match_list_item_pane_t1

0x9bb5,	// (0x000155ce) bg_popup_sub_pane_cp21

0xae42,	// (0x0001685b) grid_vitu2_dropdown_list_pane

0x766e,	// (0x00013087) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x766e,	// (0x00013087) cell_vitu2_dropdown_list_char_pane

0x768f,	// (0x000130a8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x768f,	// (0x000130a8) cell_vitu2_dropdown_list_ctrl_pane

0xdbaa,	// (0x000195c3) cell_vitu2_dropdown_list_char_pane_g1

0xdbb3,	// (0x000195cc) cell_vitu2_dropdown_list_char_pane_g2

0xdbbc,	// (0x000195d5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x0001b455) cell_vitu2_dropdown_list_char_pane_g

0x76bb,	// (0x000130d4) cell_vitu2_dropdown_list_char_pane_t1

0x76c9,	// (0x000130e2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x76c9,	// (0x000130e2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x76d6,	// (0x000130ef) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x76d6,	// (0x000130ef) cell_vitu2_dropdown_list_ctrl_pane_g2

0x76e3,	// (0x000130fc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x76e3,	// (0x000130fc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x76f0,	// (0x00013109) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x76f0,	// (0x00013109) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcdf2,	// (0x0001880b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcdf2,	// (0x0001880b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x0001b45c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x0001b45c) cell_vitu2_dropdown_list_ctrl_pane_g

0x770c,	// (0x00013125) aid_size_cell_gallery2_ParamLimits

0x770c,	// (0x00013125) aid_size_cell_gallery2

0x7722,	// (0x0001313b) grid_gallery2_pane_ParamLimits

0x7722,	// (0x0001313b) grid_gallery2_pane

0x7734,	// (0x0001314d) scroll_pane_cp029_ParamLimits

0x7734,	// (0x0001314d) scroll_pane_cp029

0x7740,	// (0x00013159) cell_gallery2_pane_ParamLimits

0x7740,	// (0x00013159) cell_gallery2_pane

0xdbc5,	// (0x000195de) cell_gallery2_pane_g2

0x7772,	// (0x0001318b) cell_gallery2_pane_g3

0xdbcf,	// (0x000195e8) cell_gallery2_pane_g4

0xdbd7,	// (0x000195f0) cell_gallery2_pane_g5

0xb1d8,	// (0x00016bf1) grid_highlight_pane_cp10

0x6d07,	// (0x00012720) popup_vitu2_match_list_window_ParamLimits

0x6d18,	// (0x00012731) popup_vitu2_query_window_ParamLimits

0x6d18,	// (0x00012731) popup_vitu2_query_window

0x9bb5,	// (0x000155ce) bg_vitu2_candi_button_pane

0xdbaa,	// (0x000195c3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdbb3,	// (0x000195cc) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdbbc,	// (0x000195d5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x777a,	// (0x00013193) bg_button_pane_cp015

0x778a,	// (0x000131a3) bg_button_pane_cp016

0x779c,	// (0x000131b5) bg_button_pane_cp017

0xc6ce,	// (0x000180e7) bg_popup_sub_pane_cp22

0xdbdf,	// (0x000195f8) popup_vitu2_query_window_g1

0x77dd,	// (0x000131f6) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x0001b467) popup_vitu2_query_window_g

0x77f8,	// (0x00013211) popup_vitu2_query_window_t1_ParamLimits

0x77f8,	// (0x00013211) popup_vitu2_query_window_t1

0x782b,	// (0x00013244) popup_vitu2_query_window_t2_ParamLimits

0x782b,	// (0x00013244) popup_vitu2_query_window_t2

0x783d,	// (0x00013256) popup_vitu2_query_window_t3_ParamLimits

0x783d,	// (0x00013256) popup_vitu2_query_window_t3

0x7865,	// (0x0001327e) popup_vitu2_query_window_t4_ParamLimits

0x7865,	// (0x0001327e) popup_vitu2_query_window_t4

0x7882,	// (0x0001329b) popup_vitu2_query_window_t5_ParamLimits

0x7882,	// (0x0001329b) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x0001b46e) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x0001b46e) popup_vitu2_query_window_t

0xd9d7,	// (0x000193f0) main_cset_text_pane

0x71ec,	// (0x00012c05) aid_area_touch_slider_ParamLimits

0x7208,	// (0x00012c21) cset_slider_pane_ParamLimits

0x7232,	// (0x00012c4b) main_cset_slider_pane_g1_ParamLimits

0x7247,	// (0x00012c60) main_cset_slider_pane_g2_ParamLimits

0xd9f8,	// (0x00019411) main_cset_slider_pane_g3_ParamLimits

0xd9f8,	// (0x00019411) main_cset_slider_pane_g3

0x725c,	// (0x00012c75) main_cset_slider_pane_g4_ParamLimits

0x725c,	// (0x00012c75) main_cset_slider_pane_g4

0x726b,	// (0x00012c84) main_cset_slider_pane_g5_ParamLimits

0x726b,	// (0x00012c84) main_cset_slider_pane_g5

0x7277,	// (0x00012c90) main_cset_slider_pane_g6_ParamLimits

0x7277,	// (0x00012c90) main_cset_slider_pane_g6

0xf9a8,	// (0x0001b3c1) main_cset_slider_pane_g_ParamLimits

0xda28,	// (0x00019441) main_cset_slider_pane_t1_ParamLimits

0x7303,	// (0x00012d1c) main_cset_slider_pane_t2_ParamLimits

0x731d,	// (0x00012d36) main_cset_slider_pane_t3_ParamLimits

0x7337,	// (0x00012d50) main_cset_slider_pane_t4_ParamLimits

0x7351,	// (0x00012d6a) main_cset_slider_pane_t5_ParamLimits

0x736b,	// (0x00012d84) main_cset_slider_pane_t6_ParamLimits

0x7380,	// (0x00012d99) main_cset_slider_pane_t7_ParamLimits

0x73aa,	// (0x00012dc3) main_cset_slider_pane_t8_ParamLimits

0x73aa,	// (0x00012dc3) main_cset_slider_pane_t8

0x73d2,	// (0x00012deb) main_cset_slider_pane_t9_ParamLimits

0x73d2,	// (0x00012deb) main_cset_slider_pane_t9

0x73fa,	// (0x00012e13) main_cset_slider_pane_t10_ParamLimits

0x73fa,	// (0x00012e13) main_cset_slider_pane_t10

0x7422,	// (0x00012e3b) main_cset_slider_pane_t11_ParamLimits

0x7422,	// (0x00012e3b) main_cset_slider_pane_t11

0x744a,	// (0x00012e63) main_cset_slider_pane_t12_ParamLimits

0x744a,	// (0x00012e63) main_cset_slider_pane_t12

0x7467,	// (0x00012e80) main_cset_slider_pane_t13_ParamLimits

0x7467,	// (0x00012e80) main_cset_slider_pane_t13

0xf9cd,	// (0x0001b3e6) main_cset_slider_pane_t_ParamLimits

0x9bb5,	// (0x000155ce) bg_popup_sub_pane_cp011

0xdbeb,	// (0x00019604) main_cset_text_pane_g1

0xdbf3,	// (0x0001960c) main_cset_text_pane_t1

0xdc01,	// (0x0001961a) main_cset_text_pane_t2

0xdc0f,	// (0x00019628) main_cset_text_pane_t3

0xdc1d,	// (0x00019636) main_cset_text_pane_t4

0xdc2b,	// (0x00019644) main_cset_text_pane_t5

0xdc39,	// (0x00019652) main_cset_text_pane_t6

0xdc47,	// (0x00019660) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x0001b47d) main_cset_text_pane_t

0x9bb5,	// (0x000155ce) main_cam4_burst_pane

0x9bb5,	// (0x000155ce) main_cam5_pane

0x713a,	// (0x00012b53) bg_button_pane_cp019

0x7143,	// (0x00012b5c) bg_button_pane_cp020

0xda04,	// (0x0001941d) main_cset_slider_pane_g7_ParamLimits

0xda04,	// (0x0001941d) main_cset_slider_pane_g7

0xda10,	// (0x00019429) main_cset_slider_pane_g8_ParamLimits

0xda10,	// (0x00019429) main_cset_slider_pane_g8

0x728b,	// (0x00012ca4) main_cset_slider_pane_g9_ParamLimits

0x728b,	// (0x00012ca4) main_cset_slider_pane_g9

0x7297,	// (0x00012cb0) main_cset_slider_pane_g10_ParamLimits

0x7297,	// (0x00012cb0) main_cset_slider_pane_g10

0x72a3,	// (0x00012cbc) main_cset_slider_pane_g11_ParamLimits

0x72a3,	// (0x00012cbc) main_cset_slider_pane_g11

0x72af,	// (0x00012cc8) main_cset_slider_pane_g12_ParamLimits

0x72af,	// (0x00012cc8) main_cset_slider_pane_g12

0x72bb,	// (0x00012cd4) main_cset_slider_pane_g13_ParamLimits

0x72bb,	// (0x00012cd4) main_cset_slider_pane_g13

0x72c7,	// (0x00012ce0) main_cset_slider_pane_g14_ParamLimits

0x72c7,	// (0x00012ce0) main_cset_slider_pane_g14

0x72d3,	// (0x00012cec) main_cset_slider_pane_g15_ParamLimits

0x72d3,	// (0x00012cec) main_cset_slider_pane_g15

0xda56,	// (0x0001946f) main_cset_slider_pane_t14_ParamLimits

0xda56,	// (0x0001946f) main_cset_slider_pane_t14

0xda8f,	// (0x000194a8) main_cset_slider_pane_t15_ParamLimits

0xda8f,	// (0x000194a8) main_cset_slider_pane_t15

0x78f5,	// (0x0001330e) aid_cam4_burst_size_cell_ParamLimits

0x78f5,	// (0x0001330e) aid_cam4_burst_size_cell

0x7915,	// (0x0001332e) grid_cam4_burst_pane_ParamLimits

0x7915,	// (0x0001332e) grid_cam4_burst_pane

0x793b,	// (0x00013354) linegrid_cam4_burst_pane_ParamLimits

0x793b,	// (0x00013354) linegrid_cam4_burst_pane

0x795d,	// (0x00013376) scroll_pane_cp30_ParamLimits

0x795d,	// (0x00013376) scroll_pane_cp30

0x7969,	// (0x00013382) cell_cam4_burst_pane_ParamLimits

0x7969,	// (0x00013382) cell_cam4_burst_pane

0xdc55,	// (0x0001966e) linegrid_cam4_burst_pane_g1_ParamLimits

0xdc55,	// (0x0001966e) linegrid_cam4_burst_pane_g1

0x79b0,	// (0x000133c9) linegrid_cam4_burst_pane_g2_ParamLimits

0x79b0,	// (0x000133c9) linegrid_cam4_burst_pane_g2

0xdc62,	// (0x0001967b) linegrid_cam4_burst_pane_g3_ParamLimits

0xdc62,	// (0x0001967b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x0001b48c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x0001b48c) linegrid_cam4_burst_pane_g

0x79c1,	// (0x000133da) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x79c1,	// (0x000133da) linegrid_cam4_burst_pane_g3_copy1

0xdc6f,	// (0x00019688) linegrid_cam4_burst_pane_g4_ParamLimits

0xdc6f,	// (0x00019688) linegrid_cam4_burst_pane_g4

0x79db,	// (0x000133f4) linegrid_cam4_burst_pane_g5_ParamLimits

0x79db,	// (0x000133f4) linegrid_cam4_burst_pane_g5

0x79ec,	// (0x00013405) linegrid_cam4_burst_pane_g6_ParamLimits

0x79ec,	// (0x00013405) linegrid_cam4_burst_pane_g6

0xdc7c,	// (0x00019695) linegrid_cam4_burst_pane_g7_ParamLimits

0xdc7c,	// (0x00019695) linegrid_cam4_burst_pane_g7

0x79fd,	// (0x00013416) cell_cam4_burst_pane_g1

0xdc95,	// (0x000196ae) main_cam5_pane_t1_ParamLimits

0xdc95,	// (0x000196ae) main_cam5_pane_t1

0xdca7,	// (0x000196c0) main_cam5_pane_t2_ParamLimits

0xdca7,	// (0x000196c0) main_cam5_pane_t2

0xdcb9,	// (0x000196d2) main_cam5_pane_t3_ParamLimits

0xdcb9,	// (0x000196d2) main_cam5_pane_t3

0xdccb,	// (0x000196e4) main_cam5_pane_t4_ParamLimits

0xdccb,	// (0x000196e4) main_cam5_pane_t4

0xdce1,	// (0x000196fa) main_cam5_pane_t5_ParamLimits

0xdce1,	// (0x000196fa) main_cam5_pane_t5

0xdcf3,	// (0x0001970c) main_cam5_pane_t6_ParamLimits

0xdcf3,	// (0x0001970c) main_cam5_pane_t6

0xdd05,	// (0x0001971e) main_cam5_pane_t7_ParamLimits

0xdd05,	// (0x0001971e) main_cam5_pane_t7

0xdd17,	// (0x00019730) main_cam5_pane_t8_ParamLimits

0xdd17,	// (0x00019730) main_cam5_pane_t8

0xdd33,	// (0x0001974c) main_cam5_pane_t9_ParamLimits

0xdd33,	// (0x0001974c) main_cam5_pane_t9

0xdd45,	// (0x0001975e) main_cam5_pane_t10_ParamLimits

0xdd45,	// (0x0001975e) main_cam5_pane_t10

0xdd57,	// (0x00019770) main_cam5_pane_t11_ParamLimits

0xdd57,	// (0x00019770) main_cam5_pane_t11

0xdd69,	// (0x00019782) main_cam5_pane_t12_ParamLimits

0xdd69,	// (0x00019782) main_cam5_pane_t12

0xdd7e,	// (0x00019797) main_cam5_pane_t13_ParamLimits

0xdd7e,	// (0x00019797) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x0001b498) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x0001b498) main_cam5_pane_t

0x209e,	// (0x0000dab7) popup_scut_keymap_window_ParamLimits

0x209e,	// (0x0000dab7) popup_scut_keymap_window

0x7a12,	// (0x0001342b) aid_size_cell_brow_shortcut

0xb1d8,	// (0x00016bf1) bg_popup_window_pane_cp010

0x7a1e,	// (0x00013437) grid_scut_pane

0x7a28,	// (0x00013441) cell_scut_pane_ParamLimits

0x7a28,	// (0x00013441) cell_scut_pane

0x7a3d,	// (0x00013456) cell_scut_pane_g1

0xdd9b,	// (0x000197b4) cell_scut_pane_t1

0xddaa,	// (0x000197c3) cell_scut_pane_t2

0x7a46,	// (0x0001345f) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x0001b4b3) cell_scut_pane_t

0x58be,	// (0x000112d7) main_mup3_pane_g8_ParamLimits

0x58be,	// (0x000112d7) main_mup3_pane_g8

0x6c4f,	// (0x00012668) area_vitu2_query_pane_ParamLimits

0x6c4f,	// (0x00012668) area_vitu2_query_pane

0x77ae,	// (0x000131c7) input_focus_pane_cp08

0xddb9,	// (0x000197d2) area_vitu2_query_pane_g1

0x7a54,	// (0x0001346d) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x0001b4ba) area_vitu2_query_pane_g

0x7a63,	// (0x0001347c) area_vitu2_query_pane_t1_ParamLimits

0x7a63,	// (0x0001347c) area_vitu2_query_pane_t1

0x7a75,	// (0x0001348e) area_vitu2_query_pane_t2_ParamLimits

0x7a75,	// (0x0001348e) area_vitu2_query_pane_t2

0x7a87,	// (0x000134a0) area_vitu2_query_pane_t3_ParamLimits

0x7a87,	// (0x000134a0) area_vitu2_query_pane_t3

0xddc5,	// (0x000197de) area_vitu2_query_pane_t4_ParamLimits

0xddc5,	// (0x000197de) area_vitu2_query_pane_t4

0xdded,	// (0x00019806) area_vitu2_query_pane_t5_ParamLimits

0xdded,	// (0x00019806) area_vitu2_query_pane_t5

0xde15,	// (0x0001982e) area_vitu2_query_pane_t6_ParamLimits

0xde15,	// (0x0001982e) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x0001b4bf) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x0001b4bf) area_vitu2_query_pane_t

0x7aaf,	// (0x000134c8) bg_button_pane_cp018

0x7abc,	// (0x000134d5) bg_button_pane_cp021

0x7ac8,	// (0x000134e1) bg_button_pane_cp022

0x7ad7,	// (0x000134f0) input_focus_pane_cp09

0x3cd9,	// (0x0000f6f2) aid_size_touch_mv_arrow_left

0xb0b1,	// (0x00016aca) aid_size_touch_mv_arrow_right

0x72eb,	// (0x00012d04) main_cset_slider_pane_g16_ParamLimits

0x72eb,	// (0x00012d04) main_cset_slider_pane_g16

0x72f7,	// (0x00012d10) main_cset_slider_pane_g17_ParamLimits

0x72f7,	// (0x00012d10) main_cset_slider_pane_g17

0x79fd,	// (0x00013416) cell_cam4_burst_pane_g1_ParamLimits

0x9bb5,	// (0x000155ce) compa_mode_pane

0x74dc,	// (0x00012ef5) popup_vtel_slider_window_g3_ParamLimits

0x74dc,	// (0x00012ef5) popup_vtel_slider_window_g3

0x74f3,	// (0x00012f0c) popup_vtel_slider_window_g4_ParamLimits

0x74f3,	// (0x00012f0c) popup_vtel_slider_window_g4

0x750a,	// (0x00012f23) popup_vtel_slider_window_t1_ParamLimits

0x750a,	// (0x00012f23) popup_vtel_slider_window_t1

0x9bb5,	// (0x000155ce) main_cl_pane

0xc6f4,	// (0x0001810d) popup_imed_adjust2_window_ParamLimits

0xc6ce,	// (0x000180e7) bg_tb_trans_pane_cp05_ParamLimits

0xd0d0,	// (0x00018ae9) popup_imed_adjust2_window_g1_ParamLimits

0xd0df,	// (0x00018af8) popup_imed_adjust2_window_g2_ParamLimits

0xd0df,	// (0x00018af8) popup_imed_adjust2_window_g2

0xd0eb,	// (0x00018b04) popup_imed_adjust2_window_g3_ParamLimits

0xd0eb,	// (0x00018b04) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x0001b22a) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x0001b22a) popup_imed_adjust2_window_g

0xd0f7,	// (0x00018b10) popup_imed_adjust2_window_t1_ParamLimits

0xd10f,	// (0x00018b28) slider_imed_adjust_pane_ParamLimits

0xd123,	// (0x00018b3c) slider_imed_adjust_pane_g1_ParamLimits

0xd133,	// (0x00018b4c) slider_imed_adjust_pane_g2_ParamLimits

0xd143,	// (0x00018b5c) slider_imed_adjust_pane_g3_ParamLimits

0xd154,	// (0x00018b6d) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x0001b231) slider_imed_adjust_pane_g_ParamLimits

0x69d4,	// (0x000123ed) aid_touch_area_cam4_ParamLimits

0x69d4,	// (0x000123ed) aid_touch_area_cam4

0xd807,	// (0x00019220) battery_pane_cp01

0x6a6c,	// (0x00012485) main_camera4_pane_g6_ParamLimits

0x6a6c,	// (0x00012485) main_camera4_pane_g6

0x6a8d,	// (0x000124a6) main_camera4_pane_t2_ParamLimits

0x6a8d,	// (0x000124a6) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x0001b334) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x0001b334) main_camera4_pane_t

0x6abb,	// (0x000124d4) aid_touch_area_vid4_ParamLimits

0x6abb,	// (0x000124d4) aid_touch_area_vid4

0x6afd,	// (0x00012516) main_video4_pane_g5_ParamLimits

0x6afd,	// (0x00012516) main_video4_pane_g5

0x6b1e,	// (0x00012537) vid4_progress_pane_ParamLimits

0x6b1e,	// (0x00012537) vid4_progress_pane

0xda1c,	// (0x00019435) main_cset_slider_pane_g18_ParamLimits

0xda1c,	// (0x00019435) main_cset_slider_pane_g18

0xdc89,	// (0x000196a2) cell_cam4_burst_pane_g2_ParamLimits

0xdc89,	// (0x000196a2) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x0001b493) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x0001b493) cell_cam4_burst_pane_g

0xa373,	// (0x00015d8c) bg_cl_pane_ParamLimits

0xa373,	// (0x00015d8c) bg_cl_pane

0x7ae6,	// (0x000134ff) cl_header_pane_ParamLimits

0x7ae6,	// (0x000134ff) cl_header_pane

0x7afa,	// (0x00013513) cl_listscroll_pane_ParamLimits

0x7afa,	// (0x00013513) cl_listscroll_pane

0xde61,	// (0x0001987a) bg_cl_pane_g1

0xde69,	// (0x00019882) bg_cl_pane_g2

0xde71,	// (0x0001988a) bg_cl_pane_g3

0xde79,	// (0x00019892) bg_cl_pane_g4

0xde81,	// (0x0001989a) bg_cl_pane_g5

0xde89,	// (0x000198a2) bg_cl_pane_g6

0xde91,	// (0x000198aa) bg_cl_pane_g7

0xde99,	// (0x000198b2) bg_cl_pane_g8

0xdea1,	// (0x000198ba) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x0001b4ce) bg_cl_pane_g

0x7b0a,	// (0x00013523) aid_height_cl_leading_ParamLimits

0x7b0a,	// (0x00013523) aid_height_cl_leading

0x7b16,	// (0x0001352f) aid_height_cl_text_ParamLimits

0x7b16,	// (0x0001352f) aid_height_cl_text

0x9c08,	// (0x00015621) bg_cl_header_pane_ParamLimits

0x9c08,	// (0x00015621) bg_cl_header_pane

0x7b35,	// (0x0001354e) cl_header_pane_g1_ParamLimits

0x7b35,	// (0x0001354e) cl_header_pane_g1

0x7b4b,	// (0x00013564) cl_header_pane_t1_ParamLimits

0x7b4b,	// (0x00013564) cl_header_pane_t1

0xdea9,	// (0x000198c2) cl_list_pane

0xdeb2,	// (0x000198cb) hc_scroll_pane_cp01

0xa919,	// (0x00016332) bg_cl_header_pane_g1

0xd8e9,	// (0x00019302) bg_cl_header_pane_g2

0xa939,	// (0x00016352) bg_cl_header_pane_g3

0xd8f9,	// (0x00019312) bg_cl_header_pane_g4

0xd8f1,	// (0x0001930a) bg_cl_header_pane_g5

0xdb82,	// (0x0001959b) bg_cl_header_pane_g6

0xd911,	// (0x0001932a) bg_cl_header_pane_g7

0xd919,	// (0x00019332) bg_cl_header_pane_g8

0xd909,	// (0x00019322) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x0001b4e1) bg_cl_header_pane_g

0x7b64,	// (0x0001357d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7b64,	// (0x0001357d) hc_cl_list_double_graphic_heading_pane

0x7b74,	// (0x0001358d) hc_cl_list_single_graphic_pane_ParamLimits

0x7b74,	// (0x0001358d) hc_cl_list_single_graphic_pane

0x7b87,	// (0x000135a0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b87,	// (0x000135a0) hc_cl_list_single_graphic_pane_g1

0x7b93,	// (0x000135ac) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7b93,	// (0x000135ac) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x0001b4f4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x0001b4f4) hc_cl_list_single_graphic_pane_g

0x7ba7,	// (0x000135c0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7ba7,	// (0x000135c0) hc_cl_list_single_graphic_pane_t1

0x7b87,	// (0x000135a0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b87,	// (0x000135a0) hc_cl_list_double_graphic_heading_pane_g1

0x7bbc,	// (0x000135d5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7bbc,	// (0x000135d5) hc_cl_list_double_graphic_heading_pane_g2

0x7bd0,	// (0x000135e9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7bd0,	// (0x000135e9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x0001b4f9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x0001b4f9) hc_cl_list_double_graphic_heading_pane_g

0x7be4,	// (0x000135fd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7be4,	// (0x000135fd) hc_cl_list_double_graphic_heading_pane_t1

0x7bf9,	// (0x00013612) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7bf9,	// (0x00013612) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x0001b500) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x0001b500) hc_cl_list_double_graphic_heading_pane_t

0xdebb,	// (0x000198d4) vid4_progress_pane_g1

0xdeca,	// (0x000198e3) vid4_progress_pane_g2

0xded9,	// (0x000198f2) vid4_progress_pane_g3

0xdee8,	// (0x00019901) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x0001b505) vid4_progress_pane_g

0xdef4,	// (0x0001990d) vid4_progress_pane_t1

0xdf0a,	// (0x00019923) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x0001b510) vid4_progress_pane_t

0xdf34,	// (0x0001994d) wait_bar_pane_cp07

0xc9be,	// (0x000183d7) blid_firmament_pane_ParamLimits

0xc9ff,	// (0x00018418) popup_blid_sat_info2_window_g1

0xca23,	// (0x0001843c) popup_blid_sat_info2_window_t3

0xca31,	// (0x0001844a) popup_blid_sat_info2_window_t4

0xca3f,	// (0x00018458) popup_blid_sat_info2_window_t5

0xca4d,	// (0x00018466) popup_blid_sat_info2_window_t6

0xca5d,	// (0x00018476) popup_blid_sat_info2_window_t7

0xca6b,	// (0x00018484) popup_blid_sat_info2_window_t8

0xca79,	// (0x00018492) popup_blid_sat_info2_window_t9

0xca87,	// (0x000184a0) popup_blid_sat_info2_window_t10

0xcb43,	// (0x0001855c) aid_firma_cardinal_ParamLimits

0xcb57,	// (0x00018570) blid_firmament_pane_t1_ParamLimits

0xcb6e,	// (0x00018587) blid_firmament_pane_t2_ParamLimits

0xcb85,	// (0x0001859e) blid_firmament_pane_t3_ParamLimits

0xcb9c,	// (0x000185b5) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x0001b123) blid_firmament_pane_t_ParamLimits

0xcbb3,	// (0x000185cc) blid_sat_info_pane_ParamLimits

0x9c08,	// (0x00015621) main_cam_set_pane_ParamLimits

0x6118,	// (0x00011b31) aid_size_cell_colour_35_ParamLimits

0x6138,	// (0x00011b51) aid_size_cell_colour_112_ParamLimits

0x6158,	// (0x00011b71) aid_size_cell_effect_ParamLimits

0xc6ce,	// (0x000180e7) bg_tb_trans_pane_cp02_ParamLimits

0xabbe,	// (0x000165d7) heading_imed_pane_ParamLimits

0x6178,	// (0x00011b91) listscroll_imed_pane_ParamLimits

0xbcc0,	// (0x000176d9) popup_call2_audio_first_window_g5_ParamLimits

0xbcc0,	// (0x000176d9) popup_call2_audio_first_window_g5

0x6695,	// (0x000120ae) aid_size_touch_image3_arrow_left_ParamLimits

0x6695,	// (0x000120ae) aid_size_touch_image3_arrow_left

0x66b5,	// (0x000120ce) aid_size_touch_image3_arrow_right_ParamLimits

0x66b5,	// (0x000120ce) aid_size_touch_image3_arrow_right

0xdf1f,	// (0x00019938) vid4_progress_pane_t3

0x644c,	// (0x00011e65) main_hwr_training_symbol_option_pane_ParamLimits

0x644c,	// (0x00011e65) main_hwr_training_symbol_option_pane

0xd3af,	// (0x00018dc8) popup_hwr_training_preview_window_ParamLimits

0xd3af,	// (0x00018dc8) popup_hwr_training_preview_window

0x6468,	// (0x00011e81) hwr_training_navi_pane_g5_ParamLimits

0x6468,	// (0x00011e81) hwr_training_navi_pane_g5

0xd8d7,	// (0x000192f0) popup_char_count_window

0x9c08,	// (0x00015621) bg_popup_sub_pane_cp20_ParamLimits

0x7624,	// (0x0001303d) list_vitu2_match_list_pane_ParamLimits

0x7633,	// (0x0001304c) vitu2_page_scroll_pane_ParamLimits

0x7633,	// (0x0001304c) vitu2_page_scroll_pane

0xdf9e,	// (0x000199b7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdf9e,	// (0x000199b7) list_single_hwr_training_symbol_option_pane

0xdfb1,	// (0x000199ca) list_single_hwr_training_symbol_option_pane_g1

0xdfb9,	// (0x000199d2) list_single_hwr_training_symbol_option_pane_t1

0xdfc7,	// (0x000199e0) bg_button_pane_cp023

0xdfd0,	// (0x000199e9) bg_button_pane_cp024

0x7c0e,	// (0x00013627) vitu2_page_scroll_pane_g1

0x7c16,	// (0x0001362f) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x0001b517) vitu2_page_scroll_pane_g

0x7c1e,	// (0x00013637) vitu2_page_scroll_pane_t1

0xc8da,	// (0x000182f3) popup_char_count_window_g1

0xe003,	// (0x00019a1c) popup_char_count_window_g2

0xe00c,	// (0x00019a25) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x0001b51c) popup_char_count_window_g

0xe015,	// (0x00019a2e) popup_char_count_window_t1

0x9bb5,	// (0x000155ce) main_vded2_pane

0xd0be,	// (0x00018ad7) aid_size_cell_imed_line

0xd0c8,	// (0x00018ae1) grid_imed_line_width_pane

0x6b9f,	// (0x000125b8) vid4_indicators_pane_g4

0xe023,	// (0x00019a3c) cell_imed_line_width_pane_ParamLimits

0xe023,	// (0x00019a3c) cell_imed_line_width_pane

0xe035,	// (0x00019a4e) cell_imed_line_width_pane_g1

0xe03e,	// (0x00019a57) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x0001b523) cell_imed_line_width_pane_g

0x7c2d,	// (0x00013646) main_vded2_pane_g1_ParamLimits

0x7c2d,	// (0x00013646) main_vded2_pane_g1

0x7c43,	// (0x0001365c) main_vded2_pane_g2_ParamLimits

0x7c43,	// (0x0001365c) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x0001b528) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x0001b528) main_vded2_pane_g

0x7c53,	// (0x0001366c) vded2_slider_pane_ParamLimits

0x7c53,	// (0x0001366c) vded2_slider_pane

0x7c66,	// (0x0001367f) aid_size_touch_vded2_end

0x7c6e,	// (0x00013687) aid_size_touch_vded2_playhead

0x7c76,	// (0x0001368f) aid_size_touch_vded2_start

0x7c7e,	// (0x00013697) vded2_slider_bg_pane

0x7c87,	// (0x000136a0) vded2_slider_pane_g1

0x7c90,	// (0x000136a9) vded2_slider_pane_g2

0x7c98,	// (0x000136b1) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x0001b52d) vded2_slider_pane_g

0x7ca1,	// (0x000136ba) vded2_slider_bg_pane_g1

0x7caa,	// (0x000136c3) vded2_slider_bg_pane_g2

0x7cb3,	// (0x000136cc) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x0001b534) vded2_slider_bg_pane_g

0x41eb,	// (0x0000fc04) aid_postcard_touch_down_pane_ParamLimits

0x41eb,	// (0x0000fc04) aid_postcard_touch_down_pane

0x41fd,	// (0x0000fc16) aid_postcard_touch_up_pane_ParamLimits

0x41fd,	// (0x0000fc16) aid_postcard_touch_up_pane

0x9bb5,	// (0x000155ce) main_blid2_pane

0xc6dc,	// (0x000180f5) popup_blid2_search_window

0x9bb5,	// (0x000155ce) blid2_gps_pane

0x9bb5,	// (0x000155ce) blid2_navig_pane

0x9bb5,	// (0x000155ce) blid2_search_pane

0x9bb5,	// (0x000155ce) blid2_tripm_pane

0x7cbc,	// (0x000136d5) blid2_search_pane_g1_ParamLimits

0x7cbc,	// (0x000136d5) blid2_search_pane_g1

0x7cd0,	// (0x000136e9) blid2_search_pane_t1_ParamLimits

0x7cd0,	// (0x000136e9) blid2_search_pane_t1

0x7ce2,	// (0x000136fb) aid_size_cell_blid2_gps_ParamLimits

0x7ce2,	// (0x000136fb) aid_size_cell_blid2_gps

0x7cfa,	// (0x00013713) blid2_gps_pane_g1_ParamLimits

0x7cfa,	// (0x00013713) blid2_gps_pane_g1

0x7d0e,	// (0x00013727) grid_blid2_satellite_pane_ParamLimits

0x7d0e,	// (0x00013727) grid_blid2_satellite_pane

0x7d22,	// (0x0001373b) blid2_navig_pane_g1_ParamLimits

0x7d22,	// (0x0001373b) blid2_navig_pane_g1

0x7d2e,	// (0x00013747) blid2_navig_pane_t1_ParamLimits

0x7d2e,	// (0x00013747) blid2_navig_pane_t1

0x7d47,	// (0x00013760) blid2_navig_pane_t2_ParamLimits

0x7d47,	// (0x00013760) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x0001b53b) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x0001b53b) blid2_navig_pane_t

0x7d60,	// (0x00013779) blid2_navig_ring_pane_ParamLimits

0x7d60,	// (0x00013779) blid2_navig_ring_pane

0x7d75,	// (0x0001378e) blid2_speed_pane_ParamLimits

0x7d75,	// (0x0001378e) blid2_speed_pane

0x7d81,	// (0x0001379a) blid2_tripm_pane_g1_ParamLimits

0x7d81,	// (0x0001379a) blid2_tripm_pane_g1

0x7d96,	// (0x000137af) blid2_tripm_pane_g2_ParamLimits

0x7d96,	// (0x000137af) blid2_tripm_pane_g2

0x7daa,	// (0x000137c3) blid2_tripm_pane_g3_ParamLimits

0x7daa,	// (0x000137c3) blid2_tripm_pane_g3

0x7dbe,	// (0x000137d7) blid2_tripm_pane_g4_ParamLimits

0x7dbe,	// (0x000137d7) blid2_tripm_pane_g4

0x7dd2,	// (0x000137eb) blid2_tripm_pane_g5_ParamLimits

0x7dd2,	// (0x000137eb) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x0001b540) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x0001b540) blid2_tripm_pane_g

0x7df4,	// (0x0001380d) blid2_tripm_pane_t1_ParamLimits

0x7df4,	// (0x0001380d) blid2_tripm_pane_t1

0x7e0b,	// (0x00013824) blid2_tripm_pane_t2_ParamLimits

0x7e0b,	// (0x00013824) blid2_tripm_pane_t2

0x7e22,	// (0x0001383b) blid2_tripm_pane_t3_ParamLimits

0x7e22,	// (0x0001383b) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x0001b54d) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x0001b54d) blid2_tripm_pane_t

0x7e65,	// (0x0001387e) cell_blid2_satellite_pane_ParamLimits

0x7e65,	// (0x0001387e) cell_blid2_satellite_pane

0x7e7d,	// (0x00013896) cell_blid2_satellite_pane_g1

0xe046,	// (0x00019a5f) cell_blid2_satellite_pane_t1

0xcbc3,	// (0x000185dc) blid2_speed_pane_g1

0xe054,	// (0x00019a6d) blid2_speed_pane_t1

0xe062,	// (0x00019a7b) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x0001b556) blid2_speed_pane_t

0xcbc3,	// (0x000185dc) blid2_navig_ring_pane_g1

0x7e86,	// (0x0001389f) blid2_navig_ring_pane_g2

0x7e8e,	// (0x000138a7) blid2_navig_ring_pane_g3

0x7e96,	// (0x000138af) blid2_navig_ring_pane_g4

0x7e9e,	// (0x000138b7) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x0001b55b) blid2_navig_ring_pane_g

0x9bb5,	// (0x000155ce) bg_popup_window_pane_cp011

0xe070,	// (0x00019a89) popup_blid2_search_window_g1

0xe078,	// (0x00019a91) popup_blid2_search_window_t1

0xe086,	// (0x00019a9f) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x0001b566) popup_blid2_search_window_t

0xa828,	// (0x00016241) main_browser_pane_g1

0xa373,	// (0x00015d8c) main_browser_pane_ParamLimits

0x9c08,	// (0x00015621) bg_button_pane_cp011_ParamLimits

0x6f14,	// (0x0001292d) cell_vitu2_function_pane_g1_ParamLimits

0xc6ce,	// (0x000180e7) bg_popup_sub_pane_cp22_ParamLimits

0x77ae,	// (0x000131c7) input_focus_pane_cp08_ParamLimits

0x77c5,	// (0x000131de) popup_vitu2_query_button_pane_ParamLimits

0x77c5,	// (0x000131de) popup_vitu2_query_button_pane

0x77d5,	// (0x000131ee) popup_vitu2_query_input_button_pane

0xdbdf,	// (0x000195f8) popup_vitu2_query_window_g1_ParamLimits

0x77dd,	// (0x000131f6) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x0001b467) popup_vitu2_query_window_g_ParamLimits

0x9bb5,	// (0x000155ce) bg_button_pane_cp026

0x7ea6,	// (0x000138bf) popup_vitu2_query_input_button_pane_g1

0x9bb5,	// (0x000155ce) bg_button_pane_cp025

0xe094,	// (0x00019aad) popup_vitu2_query_button_pane_t1

0x563e,	// (0x00011057) main_mp3_pane_t6

0x564c,	// (0x00011065) popup_slider_window_cp01

0xd821,	// (0x0001923a) cam4_battery_pane

0xd821,	// (0x0001923a) cam4_battery_pane_cp02

0xd821,	// (0x0001923a) cam4_battery_pane_cp01

0xd821,	// (0x0001923a) cam4_battery_pane_cp03

0xcbc3,	// (0x000185dc) cam4_battery_pane_g1

0xe0be,	// (0x00019ad7) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x0001b56b) cam4_battery_pane_g

0xca95,	// (0x000184ae) popup_blid_sat_info2_window_t11

0x3cd9,	// (0x0000f6f2) aid_size_touch_mv_arrow_left_ParamLimits

0xb0b1,	// (0x00016aca) aid_size_touch_mv_arrow_right_ParamLimits

0xb0e9,	// (0x00016b02) navi_pane_g1_ParamLimits

0xb0f5,	// (0x00016b0e) navi_pane_g2_ParamLimits

0x3cf2,	// (0x0000f70b) navi_pane_g3_ParamLimits

0xf409,	// (0x0001ae22) navi_pane_g_ParamLimits

0x3d17,	// (0x0000f730) navi_pane_mv_t1_ParamLimits

0x6184,	// (0x00011b9d) grid_imed_effect_pane_ParamLimits

0x2d98,	// (0x0000e7b1) aid_placing_vt_slider_lsc

0xa76a,	// (0x00016183) aid_placing_vt_slider_prt

0x9c08,	// (0x00015621) bg_tb_trans_pane_cp01_ParamLimits

0xcd12,	// (0x0001872b) popup_image_details_window_g1_ParamLimits

0xcd25,	// (0x0001873e) popup_image_details_window_g2_ParamLimits

0xcd3a,	// (0x00018753) popup_image_details_window_g3_ParamLimits

0xcd3a,	// (0x00018753) popup_image_details_window_g3

0xf74f,	// (0x0001b168) popup_image_details_window_g_ParamLimits

0xcd4e,	// (0x00018767) popup_image_details_window_t1_ParamLimits

0xcd60,	// (0x00018779) popup_image_details_window_t2_ParamLimits

0xcd79,	// (0x00018792) popup_image_details_window_t3_ParamLimits

0xcd8d,	// (0x000187a6) popup_image_details_window_t4_ParamLimits

0xcda8,	// (0x000187c1) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x0001b16f) popup_image_details_window_t_ParamLimits

0x7b22,	// (0x0001353b) cl_header_name_pane_ParamLimits

0x7b22,	// (0x0001353b) cl_header_name_pane

0x7eae,	// (0x000138c7) cl_header_name_pane_t1_ParamLimits

0x7eae,	// (0x000138c7) cl_header_name_pane_t1

0x7ecf,	// (0x000138e8) cl_header_name_pane_t2_ParamLimits

0x7ecf,	// (0x000138e8) cl_header_name_pane_t2

0x7f11,	// (0x0001392a) cl_header_name_pane_t3_ParamLimits

0x7f11,	// (0x0001392a) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x0001b570) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x0001b570) cl_header_name_pane_t

0xb177,	// (0x00016b90) navi_pane_mv_g2_ParamLimits

0xd894,	// (0x000192ad) field_vitu2_entry_pane_g1_ParamLimits

0xd8a0,	// (0x000192b9) field_vitu2_entry_pane_g2_ParamLimits

0xd8ac,	// (0x000192c5) field_vitu2_entry_pane_g3_ParamLimits

0xd8ac,	// (0x000192c5) field_vitu2_entry_pane_g3

0xf94d,	// (0x0001b366) field_vitu2_entry_pane_g_ParamLimits

0x6db4,	// (0x000127cd) cell_vitu2_itu_pane_g1_ParamLimits

0x6dc4,	// (0x000127dd) cell_vitu2_itu_pane_g2_ParamLimits

0x6dc4,	// (0x000127dd) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x0001b372) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x0001b372) cell_vitu2_itu_pane_g

0x9c08,	// (0x00015621) bg_vkb2_func_pane_cp05_ParamLimits

0x9c08,	// (0x00015621) bg_vkb2_func_pane_cp05

0x9c08,	// (0x00015621) bg_vkb2_func_pane_cp03

0x9c08,	// (0x00015621) bg_vkb2_func_pane_cp04

0x9c08,	// (0x00015621) bg_vkb2_func_pane_cp10_ParamLimits

0x9c08,	// (0x00015621) bg_vkb2_func_pane_cp10

0x7ac8,	// (0x000134e1) bg_vkb2_func_pane_cp08

0x7aaf,	// (0x000134c8) bg_vkb2_func_pane_cp06

0x7abc,	// (0x000134d5) bg_vkb2_func_pane_cp07

0xdfd9,	// (0x000199f2) bg_vkb2_func_pane_cp11_ParamLimits

0xdfd9,	// (0x000199f2) bg_vkb2_func_pane_cp11

0xdfee,	// (0x00019a07) bg_vkb2_func_pane_cp12_ParamLimits

0xdfee,	// (0x00019a07) bg_vkb2_func_pane_cp12

0x9bb5,	// (0x000155ce) bg_vkb2_func_pane_cp09

0xd8e9,	// (0x00019302) bg_vkb2_func_pane_g1

0xa939,	// (0x00016352) bg_vkb2_func_pane_g2

0xd8f1,	// (0x0001930a) bg_vkb2_func_pane_g3

0xd8f9,	// (0x00019312) bg_vkb2_func_pane_g4

0xdb82,	// (0x0001959b) bg_vkb2_func_pane_g5

0xd911,	// (0x0001932a) bg_vkb2_func_pane_g6

0xd919,	// (0x00019332) bg_vkb2_func_pane_g7

0xd909,	// (0x00019322) bg_vkb2_func_pane_g8

0xa919,	// (0x00016332) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x0001b577) bg_vkb2_func_pane_g

0x7de4,	// (0x000137fd) blid2_tripm_pane_g6_ParamLimits

0x7de4,	// (0x000137fd) blid2_tripm_pane_g6

0xd6a8,	// (0x000190c1) mp4_progress_pane_g1

0x7e53,	// (0x0001386c) blid2_tripm_values_pane_ParamLimits

0x7e53,	// (0x0001386c) blid2_tripm_values_pane

0x7f42,	// (0x0001395b) blid2_tripm_values_pane_t1

0x7f50,	// (0x00013969) blid2_tripm_values_pane_t2

0x7f5e,	// (0x00013977) blid2_tripm_values_pane_t3

0x7f6c,	// (0x00013985) blid2_tripm_values_pane_t4

0x7f7a,	// (0x00013993) blid2_tripm_values_pane_t5

0x7f88,	// (0x000139a1) blid2_tripm_values_pane_t6

0x7f96,	// (0x000139af) blid2_tripm_values_pane_t7

0x7fa4,	// (0x000139bd) blid2_tripm_values_pane_t8

0x7fb2,	// (0x000139cb) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x0001b58a) blid2_tripm_values_pane_t

0x2dd2,	// (0x0000e7eb) call_video_pane_t1_ParamLimits

0x2dec,	// (0x0000e805) call_video_pane_t2_ParamLimits

0xf292,	// (0x0001acab) call_video_pane_t_ParamLimits

0x4161,	// (0x0000fb7a) msg_header_pane_g1_ParamLimits

0xb37b,	// (0x00016d94) msg_header_pane_g2_ParamLimits

0xb37b,	// (0x00016d94) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0001aec5) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0001aec5) msg_header_pane_g

0xa373,	// (0x00015d8c) main_clock2_pane_ParamLimits

0x5ec0,	// (0x000118d9) grid_clock2_toolbar_pane_ParamLimits

0x5ec0,	// (0x000118d9) grid_clock2_toolbar_pane

0x5ec0,	// (0x000118d9) listscroll_clock2_pane_ParamLimits

0x5ec0,	// (0x000118d9) listscroll_clock2_pane

0x5f92,	// (0x000119ab) main_clock2_pane_t3_ParamLimits

0x5f92,	// (0x000119ab) main_clock2_pane_t3

0x5fab,	// (0x000119c4) main_clock2_pane_t4_ParamLimits

0x5fab,	// (0x000119c4) main_clock2_pane_t4

0xe0c8,	// (0x00019ae1) cell_clock2_toolbar_pane

0xe0d0,	// (0x00019ae9) cell_clock2_toolbar_pane_cp01

0xe0d0,	// (0x00019ae9) cell_clock2_toolbar_pane_cp02

0xe0d8,	// (0x00019af1) cell_clock2_toolbar_pane_cp03

0xe0e0,	// (0x00019af9) list_clock2_pane

0xb019,	// (0x00016a32) scroll_pane_cp10

0xe0e8,	// (0x00019b01) list_single_clock2_pane_ParamLimits

0xe0e8,	// (0x00019b01) list_single_clock2_pane

0xb1d8,	// (0x00016bf1) list_highlight_pane_cp08

0xe0f5,	// (0x00019b0e) list_single_clock2_pane_t1

0xe103,	// (0x00019b1c) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x0001b59d) list_single_clock2_pane_t

0x9bb5,	// (0x000155ce) bg_button_pane_cp10

0xe111,	// (0x00019b2a) cell_clock2_toolbar_pane_g1

0x417f,	// (0x0000fb98) aid_main_viewer_pane_g1_ParamLimits

0x417f,	// (0x0000fb98) aid_main_viewer_pane_g1

0x418b,	// (0x0000fba4) aid_main_viewer_pane_g2_ParamLimits

0x418b,	// (0x0000fba4) aid_main_viewer_pane_g2

0x4197,	// (0x0000fbb0) aid_main_viewer_pane_g3_ParamLimits

0x4197,	// (0x0000fbb0) aid_main_viewer_pane_g3

0x41a6,	// (0x0000fbbf) aid_main_viewer_pane_g4_ParamLimits

0x41a6,	// (0x0000fbbf) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0001aed6) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0001aed6) aid_main_viewer_pane_g

0x9c08,	// (0x00015621) main_calc_pane_ParamLimits

0x499a,	// (0x000103b3) main_dialer2_pane_ParamLimits

0x9bb5,	// (0x000155ce) main_cam6_pane

0x9bb5,	// (0x000155ce) main_vid6_pane

0x5ecc,	// (0x000118e5) listscroll_gen_pane_cp06_ParamLimits

0x5ecc,	// (0x000118e5) listscroll_gen_pane_cp06

0x5fc4,	// (0x000119dd) main_clock2_pane_t5_ParamLimits

0x5fc4,	// (0x000119dd) main_clock2_pane_t5

0x6019,	// (0x00011a32) aid_call2_pane_cp10_ParamLimits

0x602b,	// (0x00011a44) aid_call_pane_cp10_ParamLimits

0xb0a5,	// (0x00016abe) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb0a5,	// (0x00016abe) popup_clock_analogue_window_cp10_g2_ParamLimits

0x603d,	// (0x00011a56) popup_clock_analogue_window_cp10_g3_ParamLimits

0x603d,	// (0x00011a56) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb0a5,	// (0x00016abe) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x0001b21f) popup_clock_analogue_window_cp10_g_ParamLimits

0x604f,	// (0x00011a68) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd708,	// (0x00019121) cell_dialer2_keypad_pane_g2_ParamLimits

0xd708,	// (0x00019121) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x0001b305) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x0001b305) cell_dialer2_keypad_pane_g

0x665e,	// (0x00012077) cell_dialer2_keypad_pane_t1

0x71de,	// (0x00012bf7) main_cset_text2_pane_ParamLimits

0x71de,	// (0x00012bf7) main_cset_text2_pane

0xddb9,	// (0x000197d2) area_vitu2_query_pane_g1_ParamLimits

0x7a54,	// (0x0001346d) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x0001b4ba) area_vitu2_query_pane_g_ParamLimits

0xde3d,	// (0x00019856) area_vitu2_query_pane_t7_ParamLimits

0xde3d,	// (0x00019856) area_vitu2_query_pane_t7

0x7aaf,	// (0x000134c8) bg_button_pane_cp018_ParamLimits

0x7abc,	// (0x000134d5) bg_button_pane_cp021_ParamLimits

0x7ac8,	// (0x000134e1) bg_button_pane_cp022_ParamLimits

0x7ac8,	// (0x000134e1) bg_vkb2_func_pane_cp08_ParamLimits

0x7aaf,	// (0x000134c8) bg_vkb2_func_pane_cp06_ParamLimits

0x7abc,	// (0x000134d5) bg_vkb2_func_pane_cp07_ParamLimits

0x7ad7,	// (0x000134f0) input_focus_pane_cp09_ParamLimits

0xe119,	// (0x00019b32) cam6_autofocus_pane_ParamLimits

0xe119,	// (0x00019b32) cam6_autofocus_pane

0x7fc0,	// (0x000139d9) cam6_image_uncrop_pane_ParamLimits

0x7fc0,	// (0x000139d9) cam6_image_uncrop_pane

0x7fcd,	// (0x000139e6) cam6_indi_pane_ParamLimits

0x7fcd,	// (0x000139e6) cam6_indi_pane

0x7fe3,	// (0x000139fc) cam6_mode_pane_ParamLimits

0x7fe3,	// (0x000139fc) cam6_mode_pane

0x7ff5,	// (0x00013a0e) cam6_timer_pane_ParamLimits

0x7ff5,	// (0x00013a0e) cam6_timer_pane

0x8001,	// (0x00013a1a) cam6_zoom_pane_ParamLimits

0x8001,	// (0x00013a1a) cam6_zoom_pane

0x800d,	// (0x00013a26) cam6_mode_pane_g1_ParamLimits

0x800d,	// (0x00013a26) cam6_mode_pane_g1

0x801d,	// (0x00013a36) cam6_mode_pane_g2_ParamLimits

0x801d,	// (0x00013a36) cam6_mode_pane_g2

0x802d,	// (0x00013a46) cam6_mode_pane_g3_ParamLimits

0x802d,	// (0x00013a46) cam6_mode_pane_g3

0x803d,	// (0x00013a56) cam6_mode_pane_g4_ParamLimits

0x803d,	// (0x00013a56) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x0001b5a2) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x0001b5a2) cam6_mode_pane_g

0xe0a2,	// (0x00019abb) bg_tb_trans_pane_cp08_ParamLimits

0xe0a2,	// (0x00019abb) bg_tb_trans_pane_cp08

0xe125,	// (0x00019b3e) cam6_battery_pane_ParamLimits

0xe125,	// (0x00019b3e) cam6_battery_pane

0xe13b,	// (0x00019b54) cam6_indi_pane_g1_ParamLimits

0xe13b,	// (0x00019b54) cam6_indi_pane_g1

0xe14d,	// (0x00019b66) cam6_indi_pane_g2_ParamLimits

0xe14d,	// (0x00019b66) cam6_indi_pane_g2

0xe15f,	// (0x00019b78) cam6_indi_pane_g3_ParamLimits

0xe15f,	// (0x00019b78) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x0001b5ab) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x0001b5ab) cam6_indi_pane_g

0xe171,	// (0x00019b8a) cam6_indi_pane_t1_ParamLimits

0xe171,	// (0x00019b8a) cam6_indi_pane_t1

0x6bc9,	// (0x000125e2) cam6_autofocus_pane_g1

0x6bd1,	// (0x000125ea) cam6_autofocus_pane_g2

0x6bd9,	// (0x000125f2) cam6_autofocus_pane_g3

0x6be1,	// (0x000125fa) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x0001b5b2) cam6_autofocus_pane_g

0xe197,	// (0x00019bb0) cam6_timer_pane_g1

0xe19f,	// (0x00019bb8) cam6_timer_pane_t1

0xe1ad,	// (0x00019bc6) cam6_zoom_cont_pane

0xe1b5,	// (0x00019bce) cam6_zoom_pane_g1

0xe1bd,	// (0x00019bd6) cam6_zoom_pane_g2

0x804d,	// (0x00013a66) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x0001b5bb) cam6_zoom_pane_g

0xcbc3,	// (0x000185dc) cam6_battery_pane_g1

0xcbc3,	// (0x000185dc) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x0001b12c) cam6_battery_pane_g

0xe1c5,	// (0x00019bde) cam6_zoom_cont_pane_g1

0xe1ce,	// (0x00019be7) cam6_zoom_cont_pane_g2

0xe1d7,	// (0x00019bf0) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x0001b5c2) cam6_zoom_cont_pane_g

0x806a,	// (0x00013a83) cam6_mode_pane_cp_ParamLimits

0x806a,	// (0x00013a83) cam6_mode_pane_cp

0x8001,	// (0x00013a1a) cam6_zoom_pane_cp_ParamLimits

0x8001,	// (0x00013a1a) cam6_zoom_pane_cp

0x807c,	// (0x00013a95) vid6_image_uncrop_cif_pane_ParamLimits

0x807c,	// (0x00013a95) vid6_image_uncrop_cif_pane

0x808a,	// (0x00013aa3) vid6_image_uncrop_nhd_pane_ParamLimits

0x808a,	// (0x00013aa3) vid6_image_uncrop_nhd_pane

0x7fc0,	// (0x000139d9) vid6_image_uncrop_vga_pane_ParamLimits

0x7fc0,	// (0x000139d9) vid6_image_uncrop_vga_pane

0x8097,	// (0x00013ab0) vid6_image_uncrop_wvga_pane_ParamLimits

0x8097,	// (0x00013ab0) vid6_image_uncrop_wvga_pane

0x80a4,	// (0x00013abd) vid6_indi_pane_ParamLimits

0x80a4,	// (0x00013abd) vid6_indi_pane

0xe0a2,	// (0x00019abb) bg_tb_trans_pane_cp09_ParamLimits

0xe0a2,	// (0x00019abb) bg_tb_trans_pane_cp09

0xe1eb,	// (0x00019c04) cam6_battery_pane_cp_ParamLimits

0xe1eb,	// (0x00019c04) cam6_battery_pane_cp

0xe1f7,	// (0x00019c10) vid6_indi_pane_g1_ParamLimits

0xe1f7,	// (0x00019c10) vid6_indi_pane_g1

0xe209,	// (0x00019c22) vid6_indi_pane_g2_ParamLimits

0xe209,	// (0x00019c22) vid6_indi_pane_g2

0xe21b,	// (0x00019c34) vid6_indi_pane_g3_ParamLimits

0xe21b,	// (0x00019c34) vid6_indi_pane_g3

0xe230,	// (0x00019c49) vid6_indi_pane_g4_ParamLimits

0xe230,	// (0x00019c49) vid6_indi_pane_g4

0xe245,	// (0x00019c5e) vid6_indi_pane_g5_ParamLimits

0xe245,	// (0x00019c5e) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x0001b5c9) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x0001b5c9) vid6_indi_pane_g

0xe25f,	// (0x00019c78) vid6_indi_pane_t1_ParamLimits

0xe25f,	// (0x00019c78) vid6_indi_pane_t1

0xe275,	// (0x00019c8e) vid6_indi_pane_t2_ParamLimits

0xe275,	// (0x00019c8e) vid6_indi_pane_t2

0xe29d,	// (0x00019cb6) vid6_indi_pane_t3_ParamLimits

0xe29d,	// (0x00019cb6) vid6_indi_pane_t3

0xe2c5,	// (0x00019cde) vid6_indi_pane_t4_ParamLimits

0xe2c5,	// (0x00019cde) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x0001b5d4) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x0001b5d4) vid6_indi_pane_t

0xe2e9,	// (0x00019d02) wait_bar_pane_cp08

0x80bb,	// (0x00013ad4) main_cset_text2_pane_t1_ParamLimits

0x80bb,	// (0x00013ad4) main_cset_text2_pane_t1

0x8055,	// (0x00013a6e) listscroll_gen_pane_cp06_t1_ParamLimits

0x8055,	// (0x00013a6e) listscroll_gen_pane_cp06_t1

0x9bb5,	// (0x000155ce) main_cam6_set_pane

0xcdf2,	// (0x0001880b) bg_tb_trans_pane_cp06_ParamLimits

0xd829,	// (0x00019242) cam4_indicators_pane_g1_ParamLimits

0xd839,	// (0x00019252) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x0001b342) cam4_indicators_pane_g_ParamLimits

0xd859,	// (0x00019272) cam4_indicators_pane_t1_ParamLimits

0xcecb,	// (0x000188e4) bg_tb_trans_pane_cp07_ParamLimits

0x6b78,	// (0x00012591) vid4_indicators_pane_g1_ParamLimits

0x6b85,	// (0x0001259e) vid4_indicators_pane_g2_ParamLimits

0x6b92,	// (0x000125ab) vid4_indicators_pane_g3_ParamLimits

0x6b9f,	// (0x000125b8) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x0001b354) vid4_indicators_pane_g_ParamLimits

0x6bb7,	// (0x000125d0) vid4_indicators_pane_t1_ParamLimits

0xdebb,	// (0x000198d4) vid4_progress_pane_g1_ParamLimits

0xdeca,	// (0x000198e3) vid4_progress_pane_g2_ParamLimits

0xded9,	// (0x000198f2) vid4_progress_pane_g3_ParamLimits

0xdee8,	// (0x00019901) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x0001b505) vid4_progress_pane_g_ParamLimits

0xdef4,	// (0x0001990d) vid4_progress_pane_t1_ParamLimits

0xdf0a,	// (0x00019923) vid4_progress_pane_t2_ParamLimits

0xdf1f,	// (0x00019938) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x0001b510) vid4_progress_pane_t_ParamLimits

0xdf34,	// (0x0001994d) wait_bar_pane_cp07_ParamLimits

0x80d5,	// (0x00013aee) main_cam6_set_pane_g2_ParamLimits

0x80d5,	// (0x00013aee) main_cam6_set_pane_g2

0x80f7,	// (0x00013b10) main_cset6_listscroll_pane_ParamLimits

0x80f7,	// (0x00013b10) main_cset6_listscroll_pane

0x8111,	// (0x00013b2a) main_cset6_slider_pane_ParamLimits

0x8111,	// (0x00013b2a) main_cset6_slider_pane

0x8127,	// (0x00013b40) main_cset6_text2_pane_ParamLimits

0x8127,	// (0x00013b40) main_cset6_text2_pane

0xe2f9,	// (0x00019d12) main_cset6_text_pane

0xd9df,	// (0x000193f8) main_cset_list_pane_copy1_ParamLimits

0xd9df,	// (0x000193f8) main_cset_list_pane_copy1

0xd9ef,	// (0x00019408) scroll_pane_cp028_copy1

0x8135,	// (0x00013b4e) cset_list_set_pane_copy1

0x8147,	// (0x00013b60) aid_position_infowindow_above_copy1

0x814f,	// (0x00013b68) aid_position_infowindow_below_copy1

0x8157,	// (0x00013b70) cset_list_set_pane_g1_copy1

0x815f,	// (0x00013b78) cset_list_set_pane_g3_copy1_ParamLimits

0x815f,	// (0x00013b78) cset_list_set_pane_g3_copy1

0x816e,	// (0x00013b87) cset_list_set_pane_t1_copy1_ParamLimits

0x816e,	// (0x00013b87) cset_list_set_pane_t1_copy1

0x9c08,	// (0x00015621) list_highlight_pane_cp021_copy1_ParamLimits

0x9c08,	// (0x00015621) list_highlight_pane_cp021_copy1

0xe301,	// (0x00019d1a) cset6_slider_pane_ParamLimits

0xe301,	// (0x00019d1a) cset6_slider_pane

0xe32d,	// (0x00019d46) main_cset6_slider_pane_g1_ParamLimits

0xe32d,	// (0x00019d46) main_cset6_slider_pane_g1

0x8183,	// (0x00013b9c) main_cset6_slider_pane_g2_ParamLimits

0x8183,	// (0x00013b9c) main_cset6_slider_pane_g2

0xda04,	// (0x0001941d) main_cset6_slider_pane_g3_ParamLimits

0xda04,	// (0x0001941d) main_cset6_slider_pane_g3

0x72a3,	// (0x00012cbc) main_cset6_slider_pane_g4_ParamLimits

0x72a3,	// (0x00012cbc) main_cset6_slider_pane_g4

0x72eb,	// (0x00012d04) main_cset6_slider_pane_g5_ParamLimits

0x72eb,	// (0x00012d04) main_cset6_slider_pane_g5

0xda04,	// (0x0001941d) main_cset6_slider_pane_g7_ParamLimits

0xda04,	// (0x0001941d) main_cset6_slider_pane_g7

0xda10,	// (0x00019429) main_cset6_slider_pane_g8_ParamLimits

0xda10,	// (0x00019429) main_cset6_slider_pane_g8

0x728b,	// (0x00012ca4) main_cset6_slider_pane_g9_ParamLimits

0x728b,	// (0x00012ca4) main_cset6_slider_pane_g9

0x7297,	// (0x00012cb0) main_cset6_slider_pane_g10_ParamLimits

0x7297,	// (0x00012cb0) main_cset6_slider_pane_g10

0x72a3,	// (0x00012cbc) main_cset6_slider_pane_g11_ParamLimits

0x72a3,	// (0x00012cbc) main_cset6_slider_pane_g11

0x72af,	// (0x00012cc8) main_cset6_slider_pane_g12_ParamLimits

0x72af,	// (0x00012cc8) main_cset6_slider_pane_g12

0x72bb,	// (0x00012cd4) main_cset6_slider_pane_g13_ParamLimits

0x72bb,	// (0x00012cd4) main_cset6_slider_pane_g13

0x72c7,	// (0x00012ce0) main_cset6_slider_pane_g14_ParamLimits

0x72c7,	// (0x00012ce0) main_cset6_slider_pane_g14

0x81ab,	// (0x00013bc4) main_cset6_slider_pane_g15_ParamLimits

0x81ab,	// (0x00013bc4) main_cset6_slider_pane_g15

0x72eb,	// (0x00012d04) main_cset6_slider_pane_g16_ParamLimits

0x72eb,	// (0x00012d04) main_cset6_slider_pane_g16

0x72f7,	// (0x00012d10) main_cset6_slider_pane_g17_ParamLimits

0x72f7,	// (0x00012d10) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x0001b5dd) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x0001b5dd) main_cset6_slider_pane_g

0xe355,	// (0x00019d6e) main_cset6_slider_pane_t1_ParamLimits

0xe355,	// (0x00019d6e) main_cset6_slider_pane_t1

0xe396,	// (0x00019daf) main_cset6_slider_pane_t2_ParamLimits

0xe396,	// (0x00019daf) main_cset6_slider_pane_t2

0xe3c1,	// (0x00019dda) main_cset6_slider_pane_t3_ParamLimits

0xe3c1,	// (0x00019dda) main_cset6_slider_pane_t3

0x81c3,	// (0x00013bdc) main_cset6_slider_pane_t4_ParamLimits

0x81c3,	// (0x00013bdc) main_cset6_slider_pane_t4

0x81ee,	// (0x00013c07) main_cset6_slider_pane_t5_ParamLimits

0x81ee,	// (0x00013c07) main_cset6_slider_pane_t5

0xe3ec,	// (0x00019e05) main_cset6_slider_pane_t7_ParamLimits

0xe3ec,	// (0x00019e05) main_cset6_slider_pane_t7

0x8219,	// (0x00013c32) main_cset6_slider_pane_t8_ParamLimits

0x8219,	// (0x00013c32) main_cset6_slider_pane_t8

0x823d,	// (0x00013c56) main_cset6_slider_pane_t9_ParamLimits

0x823d,	// (0x00013c56) main_cset6_slider_pane_t9

0x8261,	// (0x00013c7a) main_cset6_slider_pane_t10_ParamLimits

0x8261,	// (0x00013c7a) main_cset6_slider_pane_t10

0x8285,	// (0x00013c9e) main_cset6_slider_pane_t11_ParamLimits

0x8285,	// (0x00013c9e) main_cset6_slider_pane_t11

0xe422,	// (0x00019e3b) main_cset6_slider_pane_t14_ParamLimits

0xe422,	// (0x00019e3b) main_cset6_slider_pane_t14

0xe45b,	// (0x00019e74) main_cset6_slider_pane_t15_ParamLimits

0xe45b,	// (0x00019e74) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x0001b602) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x0001b602) main_cset6_slider_pane_t

0xdb0c,	// (0x00019525) cset_slider_pane_g1_copy1

0xdb15,	// (0x0001952e) cset_slider_pane_g2_copy1

0xdb1e,	// (0x00019537) cset_slider_pane_g3_copy1

0x9bb5,	// (0x000155ce) bg_popup_sub_pane_cp011_copy1

0xdbeb,	// (0x00019604) main_cset_text_pane_g1_copy1

0xdbf3,	// (0x0001960c) main_cset_text_pane_t1_copy1

0xdc01,	// (0x0001961a) main_cset_text_pane_t2_copy1

0xdc0f,	// (0x00019628) main_cset_text_pane_t3_copy1

0xdc1d,	// (0x00019636) main_cset_text_pane_t4_copy1

0xdc2b,	// (0x00019644) main_cset_text_pane_t5_copy1

0xdc39,	// (0x00019652) main_cset_text_pane_t6_copy1

0xdc47,	// (0x00019660) main_cset_text_pane_t7_copy1

0x82a9,	// (0x00013cc2) main_cset_text2_pane_t1_copy1

0x9bb5,	// (0x000155ce) main_ncimui_pane

0x4ba8,	// (0x000105c1) popup_query_ncimui_window_ParamLimits

0x4ba8,	// (0x000105c1) popup_query_ncimui_window

0xce93,	// (0x000188ac) field_cale_ev2_pane_g4_ParamLimits

0xce93,	// (0x000188ac) field_cale_ev2_pane_g4

0x6550,	// (0x00011f69) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6550,	// (0x00011f69) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x0001b2e0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x0001b2e0) cell_video_dialer_keypad_pane_g

0x6568,	// (0x00011f81) cell_video_dialer_keypad_pane_t1

0x9bb5,	// (0x000155ce) bg_popup_window_pane_cp012

0xaef2,	// (0x0001690b) heading_pane_cp06

0xe589,	// (0x00019fa2) ncim_query_content_pane

0x9bb5,	// (0x000155ce) bg_popup_heading_pane_cp01

0xe591,	// (0x00019faa) ncim_heading_pane_t1

0xe59f,	// (0x00019fb8) ncim_indicator_popup_pane

0xe5b1,	// (0x00019fca) ncim_query_button_pane

0xe5c5,	// (0x00019fde) ncim_query_content_pane_t1

0xe5d7,	// (0x00019ff0) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x0001b641) ncim_query_content_pane_t

0xe611,	// (0x0001a02a) ncim_query_list_pane

0xe623,	// (0x0001a03c) ncim_query_popup_pane

0xe59f,	// (0x00019fb8) ncim_indicator_popup_pane_ParamLimits

0x83bc,	// (0x00013dd5) ncim_query_content_pane_g1_ParamLimits

0x83bc,	// (0x00013dd5) ncim_query_content_pane_g1

0xe5c5,	// (0x00019fde) ncim_query_content_pane_t1_ParamLimits

0xe5d7,	// (0x00019ff0) ncim_query_content_pane_t2_ParamLimits

0x83c8,	// (0x00013de1) ncim_query_content_pane_t3_ParamLimits

0x83c8,	// (0x00013de1) ncim_query_content_pane_t3

0x83f0,	// (0x00013e09) ncim_query_content_pane_t4_ParamLimits

0x83f0,	// (0x00013e09) ncim_query_content_pane_t4

0x8418,	// (0x00013e31) ncim_query_content_pane_t5_ParamLimits

0x8418,	// (0x00013e31) ncim_query_content_pane_t5

0xe5e9,	// (0x0001a002) ncim_query_content_pane_t6_ParamLimits

0xe5e9,	// (0x0001a002) ncim_query_content_pane_t6

0xfc28,	// (0x0001b641) ncim_query_content_pane_t_ParamLimits

0xe611,	// (0x0001a02a) ncim_query_list_pane_ParamLimits

0xe623,	// (0x0001a03c) ncim_query_popup_pane_ParamLimits

0xe637,	// (0x0001a050) wait_bar_pane_cp04

0x9bb5,	// (0x000155ce) input_focus_pane_cp011

0xe63f,	// (0x0001a058) ncim_query_popup_pane_t1

0xe64d,	// (0x0001a066) ncim_list_query_list_pane_ParamLimits

0xe64d,	// (0x0001a066) ncim_list_query_list_pane

0x9bb5,	// (0x000155ce) bg_button_pane_cp027

0xe660,	// (0x0001a079) ncim_query_button_pane_g1

0x9bb5,	// (0x000155ce) list_highlight_pane_cp012

0xe66a,	// (0x0001a083) ncim_list_query_list_pane_g1

0xe672,	// (0x0001a08b) ncim_list_query_list_pane_t1

0xd849,	// (0x00019262) cam4_indicators_pane_g3_ParamLimits

0xd849,	// (0x00019262) cam4_indicators_pane_g3

0x6bab,	// (0x000125c4) vid4_indicators_pane_g5_ParamLimits

0x6bab,	// (0x000125c4) vid4_indicators_pane_g5

0xac35,	// (0x0001664e) vid4_progress_pane_g5_ParamLimits

0xac35,	// (0x0001664e) vid4_progress_pane_g5

0x82d7,	// (0x00013cf0) main_ncimui_pane_g1

0x832d,	// (0x00013d46) ncimui_group_query_pane_ParamLimits

0x832d,	// (0x00013d46) ncimui_group_query_pane

0x8369,	// (0x00013d82) ncimui_list_pane_ParamLimits

0x8369,	// (0x00013d82) ncimui_list_pane

0x8388,	// (0x00013da1) ncimui_text_pane_ParamLimits

0x8388,	// (0x00013da1) ncimui_text_pane

0x8440,	// (0x00013e59) ncimui_text_pane_t1_ParamLimits

0x8440,	// (0x00013e59) ncimui_text_pane_t1

0xe689,	// (0x0001a0a2) ncimui_list_single_graphic_pane_ParamLimits

0xe689,	// (0x0001a0a2) ncimui_list_single_graphic_pane

0x845e,	// (0x00013e77) ncimui_query_pane_ParamLimits

0x845e,	// (0x00013e77) ncimui_query_pane

0x9bb5,	// (0x000155ce) list_highlight_pane_cp013

0xe696,	// (0x0001a0af) ncim_list_query_list_pane_t1_copy1

0xe6a4,	// (0x0001a0bd) ncim_list_single_graphic_pane_g1

0xe6ac,	// (0x0001a0c5) ncim_query_button_pane_cp01

0xe6b8,	// (0x0001a0d1) ncim_query_entry_pane_ParamLimits

0xe6b8,	// (0x0001a0d1) ncim_query_entry_pane

0xe6cb,	// (0x0001a0e4) ncimui_query_pane_g1

0xe6d7,	// (0x0001a0f0) ncimui_query_pane_t1_ParamLimits

0xe6d7,	// (0x0001a0f0) ncimui_query_pane_t1

0x9c08,	// (0x00015621) input_focus_pane_cp012

0xe6f0,	// (0x0001a109) ncim_query_entry_pane_t1

0xa373,	// (0x00015d8c) main_im_pane_ParamLimits

0x9c08,	// (0x00015621) main_mobtv_pane_ParamLimits

0x9c08,	// (0x00015621) main_mobtv_pane

0x728b,	// (0x00012ca4) main_cset6_slider_pane_g18_ParamLimits

0x728b,	// (0x00012ca4) main_cset6_slider_pane_g18

0x72bb,	// (0x00012cd4) main_cset6_slider_pane_g19_ParamLimits

0x72bb,	// (0x00012cd4) main_cset6_slider_pane_g19

0xe0b0,	// (0x00019ac9) bg_main_mobtv_pane_ParamLimits

0xe0b0,	// (0x00019ac9) bg_main_mobtv_pane

0x846e,	// (0x00013e87) main_mobtv_info_pane

0x8477,	// (0x00013e90) main_mobtv_loading_pane_ParamLimits

0x8477,	// (0x00013e90) main_mobtv_loading_pane

0xe702,	// (0x0001a11b) main_mobtv_pg_channel_list_pane

0xe70c,	// (0x0001a125) main_mobtv_pg_hdr_pane

0x8484,	// (0x00013e9d) main_mobtv_programe_curr_pane_ParamLimits

0x8484,	// (0x00013e9d) main_mobtv_programe_curr_pane

0x8491,	// (0x00013eaa) main_mobtv_programe_next_pane_ParamLimits

0x8491,	// (0x00013eaa) main_mobtv_programe_next_pane

0xe715,	// (0x0001a12e) popup_mobtv_noti_window

0xcbc3,	// (0x000185dc) main_tv_pg_hdr_pane_g1

0xe71d,	// (0x0001a136) main_tv_pg_hdr_pane_g2

0xe725,	// (0x0001a13e) main_tv_pg_hdr_pane_g3

0xe72d,	// (0x0001a146) main_tv_pg_hdr_pane_g4

0xe735,	// (0x0001a14e) main_tv_pg_hdr_pane_g5

0xe73d,	// (0x0001a156) main_tv_pg_hdr_pane_g6

0xe745,	// (0x0001a15e) main_tv_pg_hdr_pane_g7

0xe74d,	// (0x0001a166) main_tv_pg_hdr_pane_g8

0xe755,	// (0x0001a16e) main_tv_pg_hdr_pane_g9

0xe75d,	// (0x0001a176) main_tv_pg_hdr_pane_g10

0xe767,	// (0x0001a180) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x0001b64e) main_tv_pg_hdr_pane_g

0xe771,	// (0x0001a18a) main_tv_pg_hdr_pane_t1

0xe77f,	// (0x0001a198) main_tv_pg_hdr_pane_t2

0xe78d,	// (0x0001a1a6) main_tv_pg_hdr_pane_t3

0xe79b,	// (0x0001a1b4) main_tv_pg_hdr_pane_t4

0xe7a9,	// (0x0001a1c2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x0001b665) main_tv_pg_hdr_pane_t

0xe7b7,	// (0x0001a1d0) single_mobtv_pg_channel_pane_ParamLimits

0xe7b7,	// (0x0001a1d0) single_mobtv_pg_channel_pane

0xe7c9,	// (0x0001a1e2) single_mobtv_pg_channel_table_pane

0xe7d2,	// (0x0001a1eb) single_mobtv_pg_channel_thumb_pane

0xe7db,	// (0x0001a1f4) single_tv_pg_channel_pane_g1

0xe7e4,	// (0x0001a1fd) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x0001b670) single_tv_pg_channel_pane_g

0xcdf2,	// (0x0001880b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcdf2,	// (0x0001880b) bg_single_mobtv_pg_channel_thumb_pane

0xe7ed,	// (0x0001a206) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe7ed,	// (0x0001a206) single_mobtv_pg_channel_thumb_pane_g1

0xe7fb,	// (0x0001a214) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe7fb,	// (0x0001a214) single_mobtv_pg_channel_thumb_pane_g2

0xe807,	// (0x0001a220) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe807,	// (0x0001a220) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x0001b675) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x0001b675) single_mobtv_pg_channel_thumb_pane_g

0xe813,	// (0x0001a22c) single_mobtv_pg_channel_thumb_pane_t1

0xe821,	// (0x0001a23a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x0001b67c) single_mobtv_pg_channel_thumb_pane_t

0xcbc3,	// (0x000185dc) bg_single_mobtv_pg_channel_table_pane_g1

0xcbc3,	// (0x000185dc) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x0001b12c) bg_single_mobtv_pg_channel_table_pane_g

0xe82f,	// (0x0001a248) single_mobtv_pg_channel_table_pane_t1

0xe83d,	// (0x0001a256) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x0001b681) single_mobtv_pg_channel_table_pane_t

0x84a6,	// (0x00013ebf) main_mobtv_info_pane_g1_ParamLimits

0x84a6,	// (0x00013ebf) main_mobtv_info_pane_g1

0x84c2,	// (0x00013edb) main_mobtv_info_pane_t1_ParamLimits

0x84c2,	// (0x00013edb) main_mobtv_info_pane_t1

0x8528,	// (0x00013f41) main_mobtv_info_pane_t2_ParamLimits

0x8528,	// (0x00013f41) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x0001b68b) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x0001b68b) main_mobtv_info_pane_t

0x85ab,	// (0x00013fc4) wait_bar_pane_cp05

0x85bb,	// (0x00013fd4) main_mobtv_loading_pane_g1_ParamLimits

0x85bb,	// (0x00013fd4) main_mobtv_loading_pane_g1

0x85cc,	// (0x00013fe5) main_mobtv_loading_pane_g2_ParamLimits

0x85cc,	// (0x00013fe5) main_mobtv_loading_pane_g2

0x85d8,	// (0x00013ff1) main_mobtv_loading_pane_g3_ParamLimits

0x85d8,	// (0x00013ff1) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x0001b692) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x0001b692) main_mobtv_loading_pane_g

0xe84b,	// (0x0001a264) main_mobtv_loading_pane_t1_ParamLimits

0xe84b,	// (0x0001a264) main_mobtv_loading_pane_t1

0xe863,	// (0x0001a27c) main_mobtv_loading_pane_t2_ParamLimits

0xe863,	// (0x0001a27c) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x0001b699) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x0001b699) main_mobtv_loading_pane_t

0x85e9,	// (0x00014002) wait_bar_pane_cp06_ParamLimits

0x85e9,	// (0x00014002) wait_bar_pane_cp06

0xe887,	// (0x0001a2a0) main_mobtv_programe_curr_pane_t1

0xe895,	// (0x0001a2ae) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x0001b69e) main_mobtv_programe_curr_pane_t

0xe8a3,	// (0x0001a2bc) main_mobtv_programe_next_pane_t1

0xe8b1,	// (0x0001a2ca) main_mobtv_programe_next_pane_t2

0xe8bf,	// (0x0001a2d8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x0001b6a3) main_mobtv_programe_next_pane_t

0x9bb5,	// (0x000155ce) bg_popup_mobtv_noti_window_pane

0xe8cd,	// (0x0001a2e6) popup_mobtv_noti_window_g1

0xe8d5,	// (0x0001a2ee) popup_mobtv_noti_window_t1

0xe8e3,	// (0x0001a2fc) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x0001b6aa) popup_mobtv_noti_window_t

0xcbc3,	// (0x000185dc) bg_popup_mobtv_noti_window_pane_g1

0x9bb5,	// (0x000155ce) sc_clock_pane

0x9bb5,	// (0x000155ce) main_fs_bigclock_pane

0x7e3d,	// (0x00013856) blid2_tripm_pane_t4_ParamLimits

0x7e3d,	// (0x00013856) blid2_tripm_pane_t4

0x85f8,	// (0x00014011) sc_clock_pane_g1_ParamLimits

0x85f8,	// (0x00014011) sc_clock_pane_g1

0x860a,	// (0x00014023) sc_clock_pane_t1_ParamLimits

0x860a,	// (0x00014023) sc_clock_pane_t1

0x862c,	// (0x00014045) sc_clock_pane_t2_ParamLimits

0x862c,	// (0x00014045) sc_clock_pane_t2

0x8642,	// (0x0001405b) sc_clock_pane_t3_ParamLimits

0x8642,	// (0x0001405b) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x0001b6af) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x0001b6af) sc_clock_pane_t

0x9325,	// (0x00014d3e) main_fs_bigclock_indicator_pane_ParamLimits

0x9325,	// (0x00014d3e) main_fs_bigclock_indicator_pane

0xcdc2,	// (0x000187db) main_fs_bigclock_pane_g1_ParamLimits

0xcdc2,	// (0x000187db) main_fs_bigclock_pane_g1

0x9331,	// (0x00014d4a) main_fs_bigclock_pane_t1_ParamLimits

0x9331,	// (0x00014d4a) main_fs_bigclock_pane_t1

0x9343,	// (0x00014d5c) main_fs_bigclock_pane_t2_ParamLimits

0x9343,	// (0x00014d5c) main_fs_bigclock_pane_t2

0x9355,	// (0x00014d6e) main_fs_bigclock_pane_t3_ParamLimits

0x9355,	// (0x00014d6e) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0001b8a4) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0001b8a4) main_fs_bigclock_pane_t

0x0543,	// (0x0000bf5c) main_fs_bigclock_indicator_pane_g1

0xe5b9,	// (0x00019fd2) ncim_query_content_pane_g2_ParamLimits

0xe5b9,	// (0x00019fd2) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x0001b63c) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x0001b63c) ncim_query_content_pane_g

0x8657,	// (0x00014070) sc_clock_pane_t4_ParamLimits

0x8657,	// (0x00014070) sc_clock_pane_t4

0x9c08,	// (0x00015621) main_radioblah_pane

0xd791,	// (0x000191aa) cell_call4_button_pane_t1_copy1_ParamLimits

0xd791,	// (0x000191aa) cell_call4_button_pane_t1_copy1

0x82df,	// (0x00013cf8) main_ncimui_pane_t1_ParamLimits

0x82df,	// (0x00013cf8) main_ncimui_pane_t1

0x82f9,	// (0x00013d12) main_ncimui_pane_t2_ParamLimits

0x82f9,	// (0x00013d12) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x0001b635) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x0001b635) main_ncimui_pane_t

0xea0d,	// (0x0001a426) main_radioblah_anim_pane_ParamLimits

0xea0d,	// (0x0001a426) main_radioblah_anim_pane

0xea1e,	// (0x0001a437) main_radioblah_info_pane_ParamLimits

0xea1e,	// (0x0001a437) main_radioblah_info_pane

0xea32,	// (0x0001a44b) main_radioblah_pane_t1_ParamLimits

0xea32,	// (0x0001a44b) main_radioblah_pane_t1

0xea4e,	// (0x0001a467) main_radioblah_pane_t2_ParamLimits

0xea4e,	// (0x0001a467) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x0001b6d0) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x0001b6d0) main_radioblah_pane_t

0x86ee,	// (0x00014107) main_radioblah_rocker_ctrl_pane_ParamLimits

0x86ee,	// (0x00014107) main_radioblah_rocker_ctrl_pane

0xea96,	// (0x0001a4af) main_radioblah_info_pane_t1_ParamLimits

0xea96,	// (0x0001a4af) main_radioblah_info_pane_t1

0x8742,	// (0x0001415b) main_radioblah_info_pane_t2_ParamLimits

0x8742,	// (0x0001415b) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x0001b6d9) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x0001b6d9) main_radioblah_info_pane_t

0xcbc3,	// (0x000185dc) main_radioblah_rocker_ctrl_pane_g1

0x87f0,	// (0x00014209) main_radioblah_rocker_ctrl_pane_g2

0x87f8,	// (0x00014211) main_radioblah_rocker_ctrl_pane_g3

0x8800,	// (0x00014219) main_radioblah_rocker_ctrl_pane_g4

0x8808,	// (0x00014221) main_radioblah_rocker_ctrl_pane_g5

0x8810,	// (0x00014229) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x0001b6e2) main_radioblah_rocker_ctrl_pane_g

0x82a9,	// (0x00013cc2) main_cset_text2_pane_t1_copy1_ParamLimits

0xd819,	// (0x00019232) cam4_image_uncrop_qvga_pane

0xd873,	// (0x0001928c) vid4_image_uncrop_qcif_pane

0xe119,	// (0x00019b32) cam6_image_uncrop_qvga_pane_ParamLimits

0xe119,	// (0x00019b32) cam6_image_uncrop_qvga_pane

0xe1df,	// (0x00019bf8) vid6_image_uncrop_qcif_pane_ParamLimits

0xe1df,	// (0x00019bf8) vid6_image_uncrop_qcif_pane

0x9bb5,	// (0x000155ce) bg_popup_preview_window_pane_cp03

0xe55f,	// (0x00019f78) list_cset_text2_pane

0xe567,	// (0x00019f80) main_cset6_text2_pane_g1

0xe56f,	// (0x00019f88) main_cset6_text2_pane_t1

0x8818,	// (0x00014231) list_cset_text2_pane_t1_ParamLimits

0x8818,	// (0x00014231) list_cset_text2_pane_t1

0x9c08,	// (0x00015621) main_radioblah_pane_ParamLimits

0x8599,	// (0x00013fb2) main_mobtv_info_pane_t3_ParamLimits

0x8599,	// (0x00013fb2) main_mobtv_info_pane_t3

0x86dc,	// (0x000140f5) main_radioblah_pane_g1

0x8716,	// (0x0001412f) main_radioblah_info_pane_g1

0x8795,	// (0x000141ae) main_radioblah_info_pane_t3_ParamLimits

0x8795,	// (0x000141ae) main_radioblah_info_pane_t3

0x388b,	// (0x0000f2a4) highlight_cell_cale_month_pane_ParamLimits

0x388b,	// (0x0000f2a4) highlight_cell_cale_month_pane

0x9bb5,	// (0x000155ce) main_phob_fisheye_pane

0xcf80,	// (0x00018999) scroll_pane_cp0031_ParamLimits

0xcf80,	// (0x00018999) scroll_pane_cp0031

0xe2e9,	// (0x00019d02) wait_bar_pane_cp08_ParamLimits

0x8135,	// (0x00013b4e) cset_list_set_pane_copy1_ParamLimits

0xead0,	// (0x0001a4e9) highlight_cell_cale_month_pane_g1

0x8831,	// (0x0001424a) highlight_cell_cale_month_pane_t1

0xead8,	// (0x0001a4f1) list_gen_pane_cp01

0xd9ef,	// (0x00019408) scroll_pane_01

0x883f,	// (0x00014258) list_single_double_fisheye_pane

0x8848,	// (0x00014261) list_double_fisheye_pane_g1_ParamLimits

0x8848,	// (0x00014261) list_double_fisheye_pane_g1

0x8854,	// (0x0001426d) list_double_fisheye_pane_g2_ParamLimits

0x8854,	// (0x0001426d) list_double_fisheye_pane_g2

0x8860,	// (0x00014279) list_double_fisheye_pane_g3_ParamLimits

0x8860,	// (0x00014279) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x0001b6ef) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x0001b6ef) list_double_fisheye_pane_g

0x8884,	// (0x0001429d) list_double_fisheye_pane_t1_ParamLimits

0x8884,	// (0x0001429d) list_double_fisheye_pane_t1

0x889f,	// (0x000142b8) list_double_fisheye_pane_t2_ParamLimits

0x889f,	// (0x000142b8) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x0001b6fa) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x0001b6fa) list_double_fisheye_pane_t

0x9bb5,	// (0x000155ce) main_call5_pane

0x8680,	// (0x00014099) sc_swipe_pane_ParamLimits

0x8680,	// (0x00014099) sc_swipe_pane

0x88d2,	// (0x000142eb) call5_image_pane_ParamLimits

0x88d2,	// (0x000142eb) call5_image_pane

0x88e7,	// (0x00014300) call5_swipe_1_pane_ParamLimits

0x88e7,	// (0x00014300) call5_swipe_1_pane

0x88f8,	// (0x00014311) call5_swipe_2_pane_ParamLimits

0x88f8,	// (0x00014311) call5_swipe_2_pane

0x891d,	// (0x00014336) popup_call5_audio_first_window_ParamLimits

0x891d,	// (0x00014336) popup_call5_audio_first_window

0xcdf2,	// (0x0001880b) call5_swipe_1_pane_g1_ParamLimits

0xcdf2,	// (0x0001880b) call5_swipe_1_pane_g1

0xeae1,	// (0x0001a4fa) call5_swipe_1_pane_g2_ParamLimits

0xeae1,	// (0x0001a4fa) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0001b6ff) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0001b6ff) call5_swipe_1_pane_g

0xeaed,	// (0x0001a506) call5_swipe_1_pane_t1_ParamLimits

0xeaed,	// (0x0001a506) call5_swipe_1_pane_t1

0xcdf2,	// (0x0001880b) call5_swipe_2_pane_g1_ParamLimits

0xcdf2,	// (0x0001880b) call5_swipe_2_pane_g1

0xeb02,	// (0x0001a51b) call5_swipe_2_pane_g2_ParamLimits

0xeb02,	// (0x0001a51b) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x0001b704) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x0001b704) call5_swipe_2_pane_g

0xeb0e,	// (0x0001a527) call5_swipe_2_pane_t1_ParamLimits

0xeb0e,	// (0x0001a527) call5_swipe_2_pane_t1

0xeb23,	// (0x0001a53c) sc_swipe_pane_g1_ParamLimits

0xeb23,	// (0x0001a53c) sc_swipe_pane_g1

0xeb30,	// (0x0001a549) sc_swipe_pane_g2_ParamLimits

0xeb30,	// (0x0001a549) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x0001b709) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x0001b709) sc_swipe_pane_g

0xeb3c,	// (0x0001a555) sc_swipe_pane_t1_ParamLimits

0xeb3c,	// (0x0001a555) sc_swipe_pane_t1

0x9bb5,	// (0x000155ce) main_cmail_launcher_pane

0x892c,	// (0x00014345) aid_size_cell_cmail_l_ParamLimits

0x892c,	// (0x00014345) aid_size_cell_cmail_l

0x8945,	// (0x0001435e) grid_cmail_l_pane_ParamLimits

0x8945,	// (0x0001435e) grid_cmail_l_pane

0x895a,	// (0x00014373) cell_cmail_l_pane_ParamLimits

0x895a,	// (0x00014373) cell_cmail_l_pane

0x897c,	// (0x00014395) cell_cmail_l_pane_g1_ParamLimits

0x897c,	// (0x00014395) cell_cmail_l_pane_g1

0x898c,	// (0x000143a5) cell_cmail_l_pane_t1_ParamLimits

0x898c,	// (0x000143a5) cell_cmail_l_pane_t1

0xeb51,	// (0x0001a56a) cell_cmail_l_pane_t2_ParamLimits

0xeb51,	// (0x0001a56a) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x0001b70e) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x0001b70e) cell_cmail_l_pane_t

0x9c08,	// (0x00015621) grid_highlight_pane_cp018_ParamLimits

0x9c08,	// (0x00015621) grid_highlight_pane_cp018

0x1fae,	// (0x0000d9c7) main2_pane_ParamLimits

0x1fae,	// (0x0000d9c7) main2_pane

0xa476,	// (0x00015e8f) popup_sp_fs_action_menu_bg_pane_g1

0xa47e,	// (0x00015e97) popup_sp_fs_action_menu_bg_pane_g2

0xa486,	// (0x00015e9f) popup_sp_fs_action_menu_bg_pane_g3

0xa48e,	// (0x00015ea7) popup_sp_fs_action_menu_bg_pane_g4

0xa496,	// (0x00015eaf) popup_sp_fs_action_menu_bg_pane_g5

0xa49e,	// (0x00015eb7) popup_sp_fs_action_menu_bg_pane_g6

0xa4a6,	// (0x00015ebf) popup_sp_fs_action_menu_bg_pane_g7

0xa4ae,	// (0x00015ec7) popup_sp_fs_action_menu_bg_pane_g8

0xa4b6,	// (0x00015ecf) popup_sp_fs_action_menu_bg_pane_g9

0xa4be,	// (0x00015ed7) popup_sp_fs_action_menu_bg_pane_g10

0xa4be,	// (0x00015ed7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0001abc5) popup_sp_fs_action_menu_bg_pane_g

0xa695,	// (0x000160ae) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_t3_g3_g1

0xa6a1,	// (0x000160ba) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_x2_t3_g3_g2

0xa6ad,	// (0x000160c6) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa6ad,	// (0x000160c6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0001ac75) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0001ac75) list_medium_line_x2_t3_g3_g

0xa6b9,	// (0x000160d2) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa6b9,	// (0x000160d2) list_medium_line_x2_t3_g3_t1

0x2ce7,	// (0x0000e700) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2ce7,	// (0x0000e700) list_medium_line_x2_t3_g3_t2

0xa6ce,	// (0x000160e7) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa6ce,	// (0x000160e7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0001ac7c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0001ac7c) list_medium_line_x2_t3_g3_t

0xa695,	// (0x000160ae) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_t3_g2_g1

0xa6ad,	// (0x000160c6) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa6ad,	// (0x000160c6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0001ac83) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0001ac83) list_medium_line_x2_t3_g2_g

0xa6e3,	// (0x000160fc) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa6e3,	// (0x000160fc) list_medium_line_x2_t3_g2_t1

0xa6f9,	// (0x00016112) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa6f9,	// (0x00016112) list_medium_line_x2_t3_g2_t2

0xa6ce,	// (0x000160e7) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa6ce,	// (0x000160e7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0001ac88) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0001ac88) list_medium_line_x2_t3_g2_t

0xa695,	// (0x000160ae) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_t4_g4_g1

0xa70b,	// (0x00016124) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa70b,	// (0x00016124) list_medium_line_x2_t4_g4_g2

0xa6a1,	// (0x000160ba) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_x2_t4_g4_g3

0xa717,	// (0x00016130) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa717,	// (0x00016130) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0001ac8f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0001ac8f) list_medium_line_x2_t4_g4_g

0x2cf9,	// (0x0000e712) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2cf9,	// (0x0000e712) list_medium_line_x2_t4_g4_t1

0x2d10,	// (0x0000e729) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2d10,	// (0x0000e729) list_medium_line_x2_t4_g4_t2

0x2d25,	// (0x0000e73e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2d25,	// (0x0000e73e) list_medium_line_x2_t4_g4_t3

0xa723,	// (0x0001613c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa723,	// (0x0001613c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0001ac98) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0001ac98) list_medium_line_x2_t4_g4_t

0xa695,	// (0x000160ae) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_t2_g4_g1

0xa70b,	// (0x00016124) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa70b,	// (0x00016124) list_medium_line_x2_t2_g4_g2

0xa6a1,	// (0x000160ba) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_x2_t2_g4_g3

0xa6ad,	// (0x000160c6) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa6ad,	// (0x000160c6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0001acff) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0001acff) list_medium_line_x2_t2_g4_g

0xaa1b,	// (0x00016434) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaa1b,	// (0x00016434) list_medium_line_x2_t2_g4_t1

0xa6ce,	// (0x000160e7) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa6ce,	// (0x000160e7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0001ad08) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0001ad08) list_medium_line_x2_t2_g4_t

0xa695,	// (0x000160ae) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_t2_g3_g1

0xa6a1,	// (0x000160ba) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_x2_t2_g3_g2

0xa6ad,	// (0x000160c6) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa6ad,	// (0x000160c6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0001ac75) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0001ac75) list_medium_line_x2_t2_g3_g

0xaa30,	// (0x00016449) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaa30,	// (0x00016449) list_medium_line_x2_t2_g3_t1

0xa6ce,	// (0x000160e7) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa6ce,	// (0x000160e7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0001ad0d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0001ad0d) list_medium_line_x2_t2_g3_t

0x39c3,	// (0x0000f3dc) main_sp_fs_list_pane_ParamLimits

0x39c3,	// (0x0000f3dc) main_sp_fs_list_pane

0x39d0,	// (0x0000f3e9) sp_fs_scroll_pane_ParamLimits

0x39d0,	// (0x0000f3e9) sp_fs_scroll_pane

0x39dd,	// (0x0000f3f6) list_medium_line_x2_t3_t1

0x39ed,	// (0x0000f406) list_medium_line_x2_t3_t2

0xac8a,	// (0x000166a3) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0001ad58) list_medium_line_x2_t3_t

0x39fb,	// (0x0000f414) list_medium_line_x3_t4_t1

0x3a0b,	// (0x0000f424) list_medium_line_x3_t4_t2

0xac98,	// (0x000166b1) list_medium_line_x3_t4_t3

0xaca6,	// (0x000166bf) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0001ad5f) list_medium_line_x3_t4_t

0x3a19,	// (0x0000f432) list_medium_line_x4_t5_t1

0x3a29,	// (0x0000f442) list_medium_line_x4_t5_t2

0xac98,	// (0x000166b1) list_medium_line_x4_t5_t3

0xacb4,	// (0x000166cd) list_medium_line_x4_t5_t4

0xaca6,	// (0x000166bf) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0001ad68) list_medium_line_x4_t5_t

0xa695,	// (0x000160ae) list_medium_line_t4_g4_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_t4_g4_g1

0xa717,	// (0x00016130) list_medium_line_t4_g4_g2_ParamLimits

0xa717,	// (0x00016130) list_medium_line_t4_g4_g2

0xacc2,	// (0x000166db) list_medium_line_t4_g4_g3_ParamLimits

0xacc2,	// (0x000166db) list_medium_line_t4_g4_g3

0xa6ad,	// (0x000160c6) list_medium_line_t4_g4_g4_ParamLimits

0xa6ad,	// (0x000160c6) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0001ad73) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0001ad73) list_medium_line_t4_g4_g

0xacce,	// (0x000166e7) list_medium_line_t4_g4_t1_ParamLimits

0xacce,	// (0x000166e7) list_medium_line_t4_g4_t1

0xace3,	// (0x000166fc) list_medium_line_t4_g4_t2_ParamLimits

0xace3,	// (0x000166fc) list_medium_line_t4_g4_t2

0xacf8,	// (0x00016711) list_medium_line_t4_g4_t3_ParamLimits

0xacf8,	// (0x00016711) list_medium_line_t4_g4_t3

0xad0d,	// (0x00016726) list_medium_line_t4_g4_t4_ParamLimits

0xad0d,	// (0x00016726) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0001ad7c) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0001ad7c) list_medium_line_t4_g4_t

0x3af8,	// (0x0000f511) chi_dic_find_pane_g1

0x49ae,	// (0x000103c7) main_tport_pane

0xdb58,	// (0x00019571) list_medium_line_plain_t1

0xa695,	// (0x000160ae) list_medium_line_t2_g2_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_t2_g2_g1

0xa6a1,	// (0x000160ba) list_medium_line_t2_g2_g2_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x0001b44b) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x0001b44b) list_medium_line_t2_g2_g

0x7642,	// (0x0001305b) list_medium_line_t2_g2_t1_ParamLimits

0x7642,	// (0x0001305b) list_medium_line_t2_g2_t1

0x7659,	// (0x00013072) list_medium_line_t2_g2_t2_ParamLimits

0x7659,	// (0x00013072) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x0001b450) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x0001b450) list_medium_line_t2_g2_t

0xdf44,	// (0x0001995d) aid_sp_fs_list_icon_a_sm

0xdf4c,	// (0x00019965) aid_sp_fs_list_icon_d

0xdf54,	// (0x0001996d) aid_sp_fs_text_primary

0xdf5d,	// (0x00019976) aid_sp_fs_text_secondary

0xdf66,	// (0x0001997f) list_medium_line

0xdf66,	// (0x0001997f) list_medium_line_g2

0xdf66,	// (0x0001997f) list_medium_line_g3

0xdf66,	// (0x0001997f) list_medium_line_plain

0xdf66,	// (0x0001997f) list_medium_line_plain_t2

0xdf66,	// (0x0001997f) list_medium_line_plain_t3

0xdf66,	// (0x0001997f) list_medium_line_right_icon

0xdf66,	// (0x0001997f) list_medium_line_right_iconx2

0xdf66,	// (0x0001997f) list_medium_line_t2

0xdf66,	// (0x0001997f) list_medium_line_t2_g2

0xdf66,	// (0x0001997f) list_medium_line_t2_g3

0xdf66,	// (0x0001997f) list_medium_line_t2_right_icon

0xdf66,	// (0x0001997f) list_medium_line_t2_right_iconx2

0xdf66,	// (0x0001997f) list_medium_line_t3

0xdf66,	// (0x0001997f) list_medium_line_t3_g2

0xdf66,	// (0x0001997f) list_medium_line_t3_g3

0xdf66,	// (0x0001997f) list_medium_line_t3_right_iconx2

0xdf6f,	// (0x00019988) list_medium_line_t4_g4

0xdf78,	// (0x00019991) list_medium_line_x2

0xdf78,	// (0x00019991) list_medium_line_x2_t2_g2

0xdf78,	// (0x00019991) list_medium_line_x2_t2_g3

0xdf78,	// (0x00019991) list_medium_line_x2_t2_g4

0xdf78,	// (0x00019991) list_medium_line_x2_t3

0xdf78,	// (0x00019991) list_medium_line_x2_t3_g2

0xdf78,	// (0x00019991) list_medium_line_x2_t3_g3

0xdf78,	// (0x00019991) list_medium_line_x2_t3_g4

0xdf78,	// (0x00019991) list_medium_line_x2_t4_g2

0xdf78,	// (0x00019991) list_medium_line_x2_t4_g4

0xdf81,	// (0x0001999a) list_medium_line_x3

0xdf81,	// (0x0001999a) list_medium_line_x3_t4

0xdf81,	// (0x0001999a) list_medium_line_x3_t4_g4

0xdf6f,	// (0x00019988) list_medium_line_x4_t4

0xdf6f,	// (0x00019988) list_medium_line_x4_t4_g7

0xdf6f,	// (0x00019988) list_medium_line_x4_t5

0xdf8a,	// (0x000199a3) list_single_fs_dyc_pane_ParamLimits

0xdf8a,	// (0x000199a3) list_single_fs_dyc_pane

0xa695,	// (0x000160ae) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x4_t4_g7_g1

0xe494,	// (0x00019ead) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe494,	// (0x00019ead) list_medium_line_x4_t4_g7_g2

0xe4a0,	// (0x00019eb9) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe4a0,	// (0x00019eb9) list_medium_line_x4_t4_g7_g3

0xe4af,	// (0x00019ec8) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe4af,	// (0x00019ec8) list_medium_line_x4_t4_g7_g4

0xe4bb,	// (0x00019ed4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe4bb,	// (0x00019ed4) list_medium_line_x4_t4_g7_g5

0xe4ca,	// (0x00019ee3) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe4ca,	// (0x00019ee3) list_medium_line_x4_t4_g7_g6

0xe4d9,	// (0x00019ef2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe4d9,	// (0x00019ef2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x0001b61b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x0001b61b) list_medium_line_x4_t4_g7_g

0xe4e5,	// (0x00019efe) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe4e5,	// (0x00019efe) list_medium_line_x4_t4_g7_t1

0xe4fa,	// (0x00019f13) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe4fa,	// (0x00019f13) list_medium_line_x4_t4_g7_t2

0xe50f,	// (0x00019f28) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe50f,	// (0x00019f28) list_medium_line_x4_t4_g7_t3

0xe524,	// (0x00019f3d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe524,	// (0x00019f3d) list_medium_line_x4_t4_g7_t4

0xe536,	// (0x00019f4f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe536,	// (0x00019f4f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x0001b62a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x0001b62a) list_medium_line_x4_t4_g7_t

0xe548,	// (0x00019f61) list_single_dyc_row_pane_ParamLimits

0xe548,	// (0x00019f61) list_single_dyc_row_pane

0x88c1,	// (0x000142da) call5_gesture_pane_ParamLimits

0x88c1,	// (0x000142da) call5_gesture_pane

0x8909,	// (0x00014322) call5_windows_pane_ParamLimits

0x8909,	// (0x00014322) call5_windows_pane

0x89a2,	// (0x000143bb) call5_swipe_1_pane_cp_ParamLimits

0x89a2,	// (0x000143bb) call5_swipe_1_pane_cp

0x89ae,	// (0x000143c7) call5_swipe_2_pane_cp_ParamLimits

0x89ae,	// (0x000143c7) call5_swipe_2_pane_cp

0xb1d8,	// (0x00016bf1) call5_image_pane_cp

0x89ba,	// (0x000143d3) popup_call5_audio_first_window_cp_ParamLimits

0x89ba,	// (0x000143d3) popup_call5_audio_first_window_cp

0xeb23,	// (0x0001a53c) call5_swipe_1_pane_g1_cp_ParamLimits

0xeb23,	// (0x0001a53c) call5_swipe_1_pane_g1_cp

0xeb63,	// (0x0001a57c) call5_swipe_1_pane_g2_cp

0xeb3c,	// (0x0001a555) call5_swipe_1_pane_t1_cp_ParamLimits

0xeb3c,	// (0x0001a555) call5_swipe_1_pane_t1_cp

0xeb23,	// (0x0001a53c) call5_swipe_2_pane_g1_cp_ParamLimits

0xeb23,	// (0x0001a53c) call5_swipe_2_pane_g1_cp

0xeb6b,	// (0x0001a584) call5_swipe_2_pane_g2_cp

0xeb73,	// (0x0001a58c) call5_swipe_2_pane_t1_cp_ParamLimits

0xeb73,	// (0x0001a58c) call5_swipe_2_pane_t1_cp

0x9c08,	// (0x00015621) main_sp_fs_email_pane

0xeb88,	// (0x0001a5a1) main_sp_fs_listscroll_pane_te

0x89c6,	// (0x000143df) popup_sp_fs_action_menu_pane_ParamLimits

0x89c6,	// (0x000143df) popup_sp_fs_action_menu_pane

0xcbc3,	// (0x000185dc) bg_sp_fs_ctrlbar_pane_g1

0xeb91,	// (0x0001a5aa) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xeb9a,	// (0x0001a5b3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xeba3,	// (0x0001a5bc) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbc3,	// (0x000185dc) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x0001b713) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9b0,	// (0x000183c9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9b0,	// (0x000183c9) bg_sp_fs_ctrlbar_ddmenu_pane

0xebac,	// (0x0001a5c5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xebac,	// (0x0001a5c5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xa695,	// (0x000160ae) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xa695,	// (0x000160ae) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x0001b71c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x0001b71c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xebb8,	// (0x0001a5d1) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xebb8,	// (0x0001a5d1) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xebd2,	// (0x0001a5eb) list_medium_line_t2_right_icon_g1

0xebda,	// (0x0001a5f3) list_medium_line_t2_right_icon_t1

0x89f6,	// (0x0001440f) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x0001b721) list_medium_line_t2_right_icon_t

0xc6ce,	// (0x000180e7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc6ce,	// (0x000180e7) bg_sp_fs_ctrlbar_pane

0x8a4d,	// (0x00014466) main_sp_fs_ctrlbar_button_pane_cp01

0x8a55,	// (0x0001446e) main_sp_fs_ctrlbar_ddmenu_pane

0xec22,	// (0x0001a63b) main_sp_fs_ctrlbar_pane_g1

0xec2e,	// (0x0001a647) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x0001b726) main_sp_fs_ctrlbar_pane_g

0xec3a,	// (0x0001a653) main_sp_fs_ctrlbar_pane_t1

0x8a5f,	// (0x00014478) main_sp_fs_ctrlbar_pane

0x8a80,	// (0x00014499) main_sp_fs_listscroll_pane_te_cp01

0x8aa0,	// (0x000144b9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8aa0,	// (0x000144b9) popup_sp_fs_action_menu_pane_cp01

0x9c08,	// (0x00015621) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9c08,	// (0x00015621) bg_sp_fs_highlight_list_pane_cp01

0x8abf,	// (0x000144d8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8abf,	// (0x000144d8) sp_fs_action_menu_list_gene_pane_g1

0xec4f,	// (0x0001a668) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xec4f,	// (0x0001a668) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x0001b72b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x0001b72b) sp_fs_action_menu_list_gene_pane_g

0x8ace,	// (0x000144e7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8ace,	// (0x000144e7) sp_fs_action_menu_list_gene_pane_t1

0x8ae6,	// (0x000144ff) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8ae6,	// (0x000144ff) sp_fs_action_menu_list_gene_pane

0xec5c,	// (0x0001a675) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xec5c,	// (0x0001a675) popup_sp_fs_action_menu_bg_pane

0x8b03,	// (0x0001451c) sp_fs_action_menu_list_pane_ParamLimits

0x8b03,	// (0x0001451c) sp_fs_action_menu_list_pane

0xec6a,	// (0x0001a683) sp_fs_scroll_pane_cp01_ParamLimits

0xec6a,	// (0x0001a683) sp_fs_scroll_pane_cp01

0x8b1f,	// (0x00014538) list_medium_line_plain_t2_t1

0x8b2f,	// (0x00014548) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x0001b730) list_medium_line_plain_t2_t

0x8b3d,	// (0x00014556) list_medium_line_plain_t3_t1

0x8b4d,	// (0x00014566) list_medium_line_plain_t3_t2

0x8b5b,	// (0x00014574) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x0001b735) list_medium_line_plain_t3_t

0xa695,	// (0x000160ae) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_t2_g2_g1

0xa6ad,	// (0x000160c6) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa6ad,	// (0x000160c6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0001ac83) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0001ac83) list_medium_line_x2_t2_g2_g

0xacce,	// (0x000166e7) list_medium_line_x2_t2_g2_t1_ParamLimits

0xacce,	// (0x000166e7) list_medium_line_x2_t2_g2_t1

0xa6ce,	// (0x000160e7) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa6ce,	// (0x000160e7) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x0001b73c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x0001b73c) list_medium_line_x2_t2_g2_t

0xa695,	// (0x000160ae) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_t4_g2_g1

0xa6ad,	// (0x000160c6) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa6ad,	// (0x000160c6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x0001ac83) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x0001ac83) list_medium_line_x2_t4_g2_g

0x8b69,	// (0x00014582) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8b69,	// (0x00014582) list_medium_line_x2_t4_g2_t1

0x8b83,	// (0x0001459c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8b83,	// (0x0001459c) list_medium_line_x2_t4_g2_t2

0x8b98,	// (0x000145b1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8b98,	// (0x000145b1) list_medium_line_x2_t4_g2_t3

0xa6ce,	// (0x000160e7) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa6ce,	// (0x000160e7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd28,	// (0x0001b741) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd28,	// (0x0001b741) list_medium_line_x2_t4_g2_t

0xec90,	// (0x0001a6a9) list_medium_line_t3_right_iconx2_g1

0xebd2,	// (0x0001a5eb) list_medium_line_t3_right_iconx2_g2

0x8bad,	// (0x000145c6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd31,	// (0x0001b74a) list_medium_line_t3_right_iconx2_g

0x8bb5,	// (0x000145ce) list_medium_line_t3_right_iconx2_t1

0x8bc5,	// (0x000145de) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd38,	// (0x0001b751) list_medium_line_t3_right_iconx2_t

0xa695,	// (0x000160ae) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x3_t4_g4_g1

0xa6a1,	// (0x000160ba) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_x3_t4_g4_g2

0xa717,	// (0x00016130) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa717,	// (0x00016130) list_medium_line_x3_t4_g4_g3

0xec98,	// (0x0001a6b1) list_medium_line_x3_t4_g4_g4_ParamLimits

0xec98,	// (0x0001a6b1) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd3d,	// (0x0001b756) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd3d,	// (0x0001b756) list_medium_line_x3_t4_g4_g

0x7642,	// (0x0001305b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7642,	// (0x0001305b) list_medium_line_x3_t4_g4_t1

0x7659,	// (0x00013072) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7659,	// (0x00013072) list_medium_line_x3_t4_g4_t2

0xace3,	// (0x000166fc) list_medium_line_x3_t4_g4_t3_ParamLimits

0xace3,	// (0x000166fc) list_medium_line_x3_t4_g4_t3

0xeca4,	// (0x0001a6bd) list_medium_line_x3_t4_g4_t4_ParamLimits

0xeca4,	// (0x0001a6bd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd46,	// (0x0001b75f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd46,	// (0x0001b75f) list_medium_line_x3_t4_g4_t

0x8bd3,	// (0x000145ec) list_single_dyc_row_text_pane_t1_ParamLimits

0x8bd3,	// (0x000145ec) list_single_dyc_row_text_pane_t1

0x8c0a,	// (0x00014623) list_single_dyc_row_text_pane_t2_ParamLimits

0x8c0a,	// (0x00014623) list_single_dyc_row_text_pane_t2

0xecc1,	// (0x0001a6da) list_single_dyc_row_text_pane_t3_ParamLimits

0xecc1,	// (0x0001a6da) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4f,	// (0x0001b768) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4f,	// (0x0001b768) list_single_dyc_row_text_pane_t

0xecd3,	// (0x0001a6ec) list_single_dyc_row_pane_g1_ParamLimits

0xecd3,	// (0x0001a6ec) list_single_dyc_row_pane_g1

0xecdf,	// (0x0001a6f8) list_single_dyc_row_pane_g2_ParamLimits

0xecdf,	// (0x0001a6f8) list_single_dyc_row_pane_g2

0xeceb,	// (0x0001a704) list_single_dyc_row_pane_g3_ParamLimits

0xeceb,	// (0x0001a704) list_single_dyc_row_pane_g3

0xecf7,	// (0x0001a710) list_single_dyc_row_pane_g4_ParamLimits

0xecf7,	// (0x0001a710) list_single_dyc_row_pane_g4

0x0003,

0xfd56,	// (0x0001b76f) list_single_dyc_row_pane_g_ParamLimits

0xfd56,	// (0x0001b76f) list_single_dyc_row_pane_g

0xed03,	// (0x0001a71c) list_single_dyc_row_text_pane_ParamLimits

0xed03,	// (0x0001a71c) list_single_dyc_row_text_pane

0x9bb5,	// (0x000155ce) bg_sp_fs_scroll_pane

0xed22,	// (0x0001a73b) thumb_sp_fs_scroll_pane

0xa695,	// (0x000160ae) list_medium_line_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_g1

0xacce,	// (0x000166e7) list_medium_line_t1_ParamLimits

0xacce,	// (0x000166e7) list_medium_line_t1

0xa695,	// (0x000160ae) list_medium_line_x2_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_g1

0xa6a1,	// (0x000160ba) list_medium_line_x2_g2_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x0001b44b) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x0001b44b) list_medium_line_x2_g

0xed2b,	// (0x0001a744) list_medium_line_x2_t1_ParamLimits

0xed2b,	// (0x0001a744) list_medium_line_x2_t1

0xa695,	// (0x000160ae) list_medium_line_x3_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x3_g1

0xa6a1,	// (0x000160ba) list_medium_line_x3_g2_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x0001b44b) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x0001b44b) list_medium_line_x3_g

0xed2b,	// (0x0001a744) list_medium_line_x3_t1_ParamLimits

0xed2b,	// (0x0001a744) list_medium_line_x3_t1

0xed41,	// (0x0001a75a) thumb_sp_fs_scroll_pane_g1

0xed4a,	// (0x0001a763) thumb_sp_fs_scroll_pane_g2

0xed53,	// (0x0001a76c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0001b778) thumb_sp_fs_scroll_pane_g

0xed41,	// (0x0001a75a) bg_sp_fs_scroll_pane_g1

0xed4a,	// (0x0001a763) bg_sp_fs_scroll_pane_g2

0xed53,	// (0x0001a76c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0001b778) bg_sp_fs_scroll_pane_g

0xa695,	// (0x000160ae) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_x2_t3_g4_g1

0xa70b,	// (0x00016124) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa70b,	// (0x00016124) list_medium_line_x2_t3_g4_g2

0xa6a1,	// (0x000160ba) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_x2_t3_g4_g3

0xa6ad,	// (0x000160c6) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa6ad,	// (0x000160c6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0001acff) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0001acff) list_medium_line_x2_t3_g4_g

0x8c64,	// (0x0001467d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8c64,	// (0x0001467d) list_medium_line_x2_t3_g4_t1

0x8c7a,	// (0x00014693) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8c7a,	// (0x00014693) list_medium_line_x2_t3_g4_t2

0xa6ce,	// (0x000160e7) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa6ce,	// (0x000160e7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0001b77f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0001b77f) list_medium_line_x2_t3_g4_t

0xa695,	// (0x000160ae) list_medium_line_g2_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_g2_g1

0xa6a1,	// (0x000160ba) list_medium_line_g2_g2_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x0001b44b) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x0001b44b) list_medium_line_g2_g

0xaa30,	// (0x00016449) list_medium_line_g2_t1_ParamLimits

0xaa30,	// (0x00016449) list_medium_line_g2_t1

0xa695,	// (0x000160ae) list_medium_line_t3_g2_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_t3_g2_g1

0xa6a1,	// (0x000160ba) list_medium_line_t3_g2_g2_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x0001b44b) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x0001b44b) list_medium_line_t3_g2_g

0x8c93,	// (0x000146ac) list_medium_line_t3_g2_t1_ParamLimits

0x8c93,	// (0x000146ac) list_medium_line_t3_g2_t1

0x8caa,	// (0x000146c3) list_medium_line_t3_g2_t2_ParamLimits

0x8caa,	// (0x000146c3) list_medium_line_t3_g2_t2

0x8cbf,	// (0x000146d8) list_medium_line_t3_g2_t3_ParamLimits

0x8cbf,	// (0x000146d8) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0001b786) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0001b786) list_medium_line_t3_g2_t

0xebd2,	// (0x0001a5eb) list_medium_line_right_icon_g1

0xed5c,	// (0x0001a775) list_medium_line_right_icon_t1

0xa695,	// (0x000160ae) list_medium_line_t2_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_t2_g1

0x8cd4,	// (0x000146ed) list_medium_line_t2_t1_ParamLimits

0x8cd4,	// (0x000146ed) list_medium_line_t2_t1

0x8cee,	// (0x00014707) list_medium_line_t2_t2_ParamLimits

0x8cee,	// (0x00014707) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0001b78d) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0001b78d) list_medium_line_t2_t

0xa695,	// (0x000160ae) list_medium_line_t3_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_t3_g1

0x8b69,	// (0x00014582) list_medium_line_t3_t1_ParamLimits

0x8b69,	// (0x00014582) list_medium_line_t3_t1

0x8b83,	// (0x0001459c) list_medium_line_t3_t2_ParamLimits

0x8b83,	// (0x0001459c) list_medium_line_t3_t2

0x8b98,	// (0x000145b1) list_medium_line_t3_t3_ParamLimits

0x8b98,	// (0x000145b1) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0001b792) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0001b792) list_medium_line_t3_t

0xa695,	// (0x000160ae) list_medium_line_g3_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_g3_g1

0xa70b,	// (0x00016124) list_medium_line_g3_g2_ParamLimits

0xa70b,	// (0x00016124) list_medium_line_g3_g2

0xa6a1,	// (0x000160ba) list_medium_line_g3_g3_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0001b799) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0001b799) list_medium_line_g3_g

0xaa1b,	// (0x00016434) list_medium_line_g3_t1_ParamLimits

0xaa1b,	// (0x00016434) list_medium_line_g3_t1

0xa695,	// (0x000160ae) list_medium_line_t2_g3_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_t2_g3_g1

0xa70b,	// (0x00016124) list_medium_line_t2_g3_g2_ParamLimits

0xa70b,	// (0x00016124) list_medium_line_t2_g3_g2

0xa6a1,	// (0x000160ba) list_medium_line_t2_g3_g3_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0001b799) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0001b799) list_medium_line_t2_g3_g

0x8d03,	// (0x0001471c) list_medium_line_t2_g3_t1_ParamLimits

0x8d03,	// (0x0001471c) list_medium_line_t2_g3_t1

0x8d1a,	// (0x00014733) list_medium_line_t2_g3_t2_ParamLimits

0x8d1a,	// (0x00014733) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0001b7a0) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0001b7a0) list_medium_line_t2_g3_t

0xa695,	// (0x000160ae) list_medium_line_t3_g3_g1_ParamLimits

0xa695,	// (0x000160ae) list_medium_line_t3_g3_g1

0xa70b,	// (0x00016124) list_medium_line_t3_g3_g2_ParamLimits

0xa70b,	// (0x00016124) list_medium_line_t3_g3_g2

0xa6a1,	// (0x000160ba) list_medium_line_t3_g3_g3_ParamLimits

0xa6a1,	// (0x000160ba) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0001b799) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0001b799) list_medium_line_t3_g3_g

0x8d2f,	// (0x00014748) list_medium_line_t3_g3_t1_ParamLimits

0x8d2f,	// (0x00014748) list_medium_line_t3_g3_t1

0x8d48,	// (0x00014761) list_medium_line_t3_g3_t2_ParamLimits

0x8d48,	// (0x00014761) list_medium_line_t3_g3_t2

0x8d5e,	// (0x00014777) list_medium_line_t3_g3_t3_ParamLimits

0x8d5e,	// (0x00014777) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0001b7a5) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0001b7a5) list_medium_line_t3_g3_t

0xec90,	// (0x0001a6a9) list_medium_line_right_iconx2_g1

0xebd2,	// (0x0001a5eb) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0001b7ac) list_medium_line_right_iconx2_g

0xed73,	// (0x0001a78c) list_medium_line_right_iconx2_t1

0xec90,	// (0x0001a6a9) list_medium_line_t2_right_iconx2_g1

0xebd2,	// (0x0001a5eb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0001b7ac) list_medium_line_t2_right_iconx2_g

0x8d74,	// (0x0001478d) list_medium_line_t2_right_iconx2_t1

0x8d84,	// (0x0001479d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0001b7b1) list_medium_line_t2_right_iconx2_t

0xdb58,	// (0x00019571) list_medium_line_x4_t4_t1

0x8d92,	// (0x000147ab) list_medium_line_x4_t4_t2

0x8da2,	// (0x000147bb) list_medium_line_x4_t4_t3

0x8db2,	// (0x000147cb) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0001b7b6) list_medium_line_x4_t4_t

0x8dfd,	// (0x00014816) tport_appsw_pane_ParamLimits

0x8dfd,	// (0x00014816) tport_appsw_pane

0x8e0e,	// (0x00014827) tport_contact_pane_ParamLimits

0x8e0e,	// (0x00014827) tport_contact_pane

0x8e23,	// (0x0001483c) tport_listscroll_pane_ParamLimits

0x8e23,	// (0x0001483c) tport_listscroll_pane

0x8e3c,	// (0x00014855) cell_tport_appsw_pane_ParamLimits

0x8e3c,	// (0x00014855) cell_tport_appsw_pane

0xd8ac,	// (0x000192c5) tport_appsw_pane_g1_ParamLimits

0xd8ac,	// (0x000192c5) tport_appsw_pane_g1

0xed81,	// (0x0001a79a) tport_contact_pane_g1

0xed8a,	// (0x0001a7a3) tport_contact_pane_t1

0xed98,	// (0x0001a7b1) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0001b7bf) tport_contact_pane_t

0xeda6,	// (0x0001a7bf) list_tport_pane

0xa4d0,	// (0x00015ee9) scroll_pane_cp_030

0xedb7,	// (0x0001a7d0) cell_tport_appsw_pane_g1

0xedc7,	// (0x0001a7e0) cell_tport_appsw_pane_t1

0x9bb5,	// (0x000155ce) grid_highlight_pane_cp019

0x8e72,	// (0x0001488b) list_tport_double_graphic_pane_ParamLimits

0x8e72,	// (0x0001488b) list_tport_double_graphic_pane

0x9c08,	// (0x00015621) list_highlight_pane_cp023_ParamLimits

0x9c08,	// (0x00015621) list_highlight_pane_cp023

0x8e7f,	// (0x00014898) list_tport_double_graphic_pane_g1_ParamLimits

0x8e7f,	// (0x00014898) list_tport_double_graphic_pane_g1

0x8e8c,	// (0x000148a5) list_tport_double_graphic_pane_t1_ParamLimits

0x8e8c,	// (0x000148a5) list_tport_double_graphic_pane_t1

0x8ea1,	// (0x000148ba) list_tport_double_graphic_pane_t2_ParamLimits

0x8ea1,	// (0x000148ba) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0001b7cb) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0001b7cb) list_tport_double_graphic_pane_t

0x9bb5,	// (0x000155ce) main_cale_note_pane

0x6d70,	// (0x00012789) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6d70,	// (0x00012789) cell_vitu2_function_top_wide_pane_cp01

0x85ab,	// (0x00013fc4) wait_bar_pane_cp05_ParamLimits

0x9bb5,	// (0x000155ce) listscroll_cmail_pane

0xedd5,	// (0x0001a7ee) list_cmail_pane

0x8eb3,	// (0x000148cc) list_cmail_body_pane

0x8eb3,	// (0x000148cc) list_single_cmail_header_caption_pane

0x8ec9,	// (0x000148e2) list_single_cmail_header_detail_pane_ParamLimits

0x8ec9,	// (0x000148e2) list_single_cmail_header_detail_pane

0xedf1,	// (0x0001a80a) list_single_cmail_header_caption_pane_t1

0x8ef1,	// (0x0001490a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8ef1,	// (0x0001490a) list_single_cmail_header_detail_pane_g1

0xee07,	// (0x0001a820) list_single_cmail_header_detail_pane_g2_ParamLimits

0xee07,	// (0x0001a820) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0001b7d0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0001b7d0) list_single_cmail_header_detail_pane_g

0xee20,	// (0x0001a839) list_single_cmail_header_detail_pane_t1_ParamLimits

0xee20,	// (0x0001a839) list_single_cmail_header_detail_pane_t1

0xee52,	// (0x0001a86b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xee52,	// (0x0001a86b) list_single_cmail_header_editor_pane_bg

0xee64,	// (0x0001a87d) list_cmail_body_pane_g1

0xee6d,	// (0x0001a886) list_cmail_body_pane_t1

0xd8e9,	// (0x00019302) list_single_cmail_header_editor_pane_bg_g1

0xa939,	// (0x00016352) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd8f9,	// (0x00019312) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd8f1,	// (0x0001930a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdb82,	// (0x0001959b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd919,	// (0x00019332) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd909,	// (0x00019322) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd911,	// (0x0001932a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa919,	// (0x00016332) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8f2b,	// (0x00014944) calenote_gesture_pane_ParamLimits

0x8f2b,	// (0x00014944) calenote_gesture_pane

0x8f47,	// (0x00014960) calenote_window_pane_ParamLimits

0x8f47,	// (0x00014960) calenote_window_pane

0xee7b,	// (0x0001a894) popup_note_window_cp01

0x8f63,	// (0x0001497c) calenote_swipe_1_pane_ParamLimits

0x8f63,	// (0x0001497c) calenote_swipe_1_pane

0x89ae,	// (0x000143c7) calenote_swipe_2_pane_ParamLimits

0x89ae,	// (0x000143c7) calenote_swipe_2_pane

0xeb23,	// (0x0001a53c) calenote_swipe_1_pane_g1_ParamLimits

0xeb23,	// (0x0001a53c) calenote_swipe_1_pane_g1

0xeb30,	// (0x0001a549) calenote_swipe_1_pane_g2_ParamLimits

0xeb30,	// (0x0001a549) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x0001b709) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x0001b709) calenote_swipe_1_pane_g

0xee8d,	// (0x0001a8a6) calenote_swipe_1_pane_t1_ParamLimits

0xee8d,	// (0x0001a8a6) calenote_swipe_1_pane_t1

0xeb23,	// (0x0001a53c) calenote_swipe_2_pane_g1_ParamLimits

0xeb23,	// (0x0001a53c) calenote_swipe_2_pane_g1

0xeeac,	// (0x0001a8c5) calenote_swipe_2_pane_g2_ParamLimits

0xeeac,	// (0x0001a8c5) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0001b7dc) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0001b7dc) calenote_swipe_2_pane_g

0xeeb8,	// (0x0001a8d1) calenote_swipe_2_pane_t1_ParamLimits

0xeeb8,	// (0x0001a8d1) calenote_swipe_2_pane_t1

0x9bb5,	// (0x000155ce) main_mup_navstr_pane

0x5b63,	// (0x0001157c) main_mup3_pane_t7_ParamLimits

0x5b63,	// (0x0001157c) main_mup3_pane_t7

0xd508,	// (0x00018f21) main_mp4_pane_g6_ParamLimits

0xd508,	// (0x00018f21) main_mp4_pane_g6

0xd740,	// (0x00019159) main_image3_pane_t4_ParamLimits

0xd740,	// (0x00019159) main_image3_pane_t4

0x8f78,	// (0x00014991) popup_navstr_preview_pane_ParamLimits

0x8f78,	// (0x00014991) popup_navstr_preview_pane

0x8f88,	// (0x000149a1) scroll_navstr_pane_ParamLimits

0x8f88,	// (0x000149a1) scroll_navstr_pane

0x9bb5,	// (0x000155ce) bg_popup_preview_window_pane_cp04

0xeedf,	// (0x0001a8f8) popup_navstr_preview_pane_t1

0x8f9c,	// (0x000149b5) scroll_navstr_pane_g1_ParamLimits

0x8f9c,	// (0x000149b5) scroll_navstr_pane_g1

0x8fb0,	// (0x000149c9) scroll_navstr_pane_t1_ParamLimits

0x8fb0,	// (0x000149c9) scroll_navstr_pane_t1

0xee84,	// (0x0001a89d) bg_button_pane_cp014

0xee84,	// (0x0001a89d) bg_button_pane_cp030

0x886c,	// (0x00014285) list_double_fisheye_pane_g4_ParamLimits

0x886c,	// (0x00014285) list_double_fisheye_pane_g4

0x8878,	// (0x00014291) list_double_fisheye_pane_g5_ParamLimits

0x8878,	// (0x00014291) list_double_fisheye_pane_g5

0xede5,	// (0x0001a7fe) sp_fs_scroll_pane_cp03

0xec22,	// (0x0001a63b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xec2e,	// (0x0001a647) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x0001b726) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xec3a,	// (0x0001a653) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeddd,	// (0x0001a7f6) sp_fs_scroll_pane_cp02

0xa52a,	// (0x00015f43) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa52a,	// (0x00015f43) popup_sp_fs_calendar_preview_list_single_pane

0x9bb5,	// (0x000155ce) main_cam6_pano_pane

0x9c08,	// (0x00015621) main_mup3_pane_ParamLimits

0x9bb5,	// (0x000155ce) main_phacti_pane

0x849e,	// (0x00013eb7) bg_button_pane_cp11

0x84b6,	// (0x00013ecf) main_mobtv_info_pane_g2_ParamLimits

0x84b6,	// (0x00013ecf) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x0001b686) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x0001b686) main_mobtv_info_pane_g

0x8669,	// (0x00014082) sc_clock_pane_t5_ParamLimits

0x8669,	// (0x00014082) sc_clock_pane_t5

0x86dc,	// (0x000140f5) main_radioblah_pane_g1_ParamLimits

0xea66,	// (0x0001a47f) main_radioblah_pane_t3_ParamLimits

0xea66,	// (0x0001a47f) main_radioblah_pane_t3

0xea7e,	// (0x0001a497) main_radioblah_pane_t4_ParamLimits

0xea7e,	// (0x0001a497) main_radioblah_pane_t4

0x8704,	// (0x0001411d) main_radioblah_text_pane_ParamLimits

0x8704,	// (0x0001411d) main_radioblah_text_pane

0x8716,	// (0x0001412f) main_radioblah_info_pane_g1_ParamLimits

0x87a9,	// (0x000141c2) main_radioblah_info_pane_t4_ParamLimits

0x87a9,	// (0x000141c2) main_radioblah_info_pane_t4

0x9c08,	// (0x00015621) main_sp_fs_calendar_pane

0x8fc6,	// (0x000149df) main_phacti_pane_g1

0x8fce,	// (0x000149e7) phacti_note_pane_ParamLimits

0x8fce,	// (0x000149e7) phacti_note_pane

0xeef6,	// (0x0001a90f) phacti_term_pane_ParamLimits

0xeef6,	// (0x0001a90f) phacti_term_pane

0xef0b,	// (0x0001a924) phacti_note_pane_t1_ParamLimits

0xef0b,	// (0x0001a924) phacti_note_pane_t1

0xef22,	// (0x0001a93b) phacti_term_pane_g1

0xef2a,	// (0x0001a943) phacti_term_pane_t1_ParamLimits

0xef2a,	// (0x0001a943) phacti_term_pane_t1

0xef54,	// (0x0001a96d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xef5c,	// (0x0001a975) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0001b7e6) popup_sp_fs_calendar_preview_list_single_pane_g

0xef64,	// (0x0001a97d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xef64,	// (0x0001a97d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xef7a,	// (0x0001a993) aid_popup_sp_fs_bg_corner_pane

0xcbc3,	// (0x000185dc) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bb5,	// (0x000155ce) popup_sp_fs_calendar_preview_bg_pane

0xef82,	// (0x0001a99b) popup_sp_fs_calendar_preview_list_pane

0x9c08,	// (0x00015621) bg_main_sp_fs_cale_pane_ParamLimits

0x9c08,	// (0x00015621) bg_main_sp_fs_cale_pane

0xef93,	// (0x0001a9ac) listscroll_cale_mrui_pane_ParamLimits

0xef93,	// (0x0001a9ac) listscroll_cale_mrui_pane

0xefa7,	// (0x0001a9c0) listscroll_sp_fs_schedule_track_pane

0xefb0,	// (0x0001a9c9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xefb0,	// (0x0001a9c9) main_sp_fs_ctrlbar_pane_cp01

0xefc1,	// (0x0001a9da) main_sp_fs_ribbon_pane

0xefc9,	// (0x0001a9e2) popup_sp_fs_cale_preview_window

0x901d,	// (0x00014a36) list_single_sp_fs_schedule_track_pane_ParamLimits

0x901d,	// (0x00014a36) list_single_sp_fs_schedule_track_pane

0x9c08,	// (0x00015621) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9c08,	// (0x00015621) bg_sp_fs_highlight_list_pane_cp03

0x9030,	// (0x00014a49) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9030,	// (0x00014a49) list_single_sp_fs_schedule_track_pane_g1

0x903c,	// (0x00014a55) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x903c,	// (0x00014a55) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0001b7eb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0001b7eb) list_single_sp_fs_schedule_track_pane_g

0x9048,	// (0x00014a61) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9048,	// (0x00014a61) list_single_sp_fs_schedule_track_pane_t1

0x9062,	// (0x00014a7b) sp_fs_schedule_track_pane_ParamLimits

0x9062,	// (0x00014a7b) sp_fs_schedule_track_pane

0xefdb,	// (0x0001a9f4) sp_fs_schedule_track_pane_g1

0xefe3,	// (0x0001a9fc) sp_fs_schedule_track_pane_g2

0xefeb,	// (0x0001aa04) sp_fs_schedule_track_pane_g3

0xeff3,	// (0x0001aa0c) sp_fs_schedule_track_pane_g4

0xeffb,	// (0x0001aa14) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0001b7f0) sp_fs_schedule_track_pane_g

0xd8e9,	// (0x00019302) bg_sp_fs_schedule_viewer_highlight_g1

0xa939,	// (0x00016352) bg_sp_fs_schedule_viewer_highlight_g2

0xd8f1,	// (0x0001930a) bg_sp_fs_schedule_viewer_highlight_g3

0xd8f9,	// (0x00019312) bg_sp_fs_schedule_viewer_highlight_g4

0xdb82,	// (0x0001959b) bg_sp_fs_schedule_viewer_highlight_g5

0xd909,	// (0x00019322) bg_sp_fs_schedule_viewer_highlight_g6

0xd911,	// (0x0001932a) bg_sp_fs_schedule_viewer_highlight_g7

0xd919,	// (0x00019332) bg_sp_fs_schedule_viewer_highlight_g8

0xa919,	// (0x00016332) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0001b7fb) bg_sp_fs_schedule_viewer_highlight_g

0x9bb5,	// (0x000155ce) bg_main_sp_fs_ribbon_pane

0x9073,	// (0x00014a8c) main_sp_fs_ribbon_pane_g1

0xf003,	// (0x0001aa1c) main_sp_fs_ribbon_pane_t1

0x907c,	// (0x00014a95) main_sp_fs_ribbon_pane_t2

0xf012,	// (0x0001aa2b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0001b80e) main_sp_fs_ribbon_pane_t

0xf021,	// (0x0001aa3a) main_sp_fs_ribbon_scheduler_pane

0xf029,	// (0x0001aa42) bg_main_sp_fs_ribbon_pane_g1

0xf032,	// (0x0001aa4b) bg_main_sp_fs_ribbon_pane_g2

0xf03b,	// (0x0001aa54) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0001b815) bg_main_sp_fs_ribbon_pane_g

0xf043,	// (0x0001aa5c) main_sp_fs_ribbon_scheduler_pane_g1

0xf04c,	// (0x0001aa65) main_sp_fs_ribbon_scheduler_pane_g2

0xf055,	// (0x0001aa6e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0001b81c) main_sp_fs_ribbon_scheduler_pane_g

0xead8,	// (0x0001a4f1) list_cale_mrui_pane

0xf05e,	// (0x0001aa77) sp_fs_scroll_pane_cp07_ParamLimits

0xf05e,	// (0x0001aa77) sp_fs_scroll_pane_cp07

0x908b,	// (0x00014aa4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x908b,	// (0x00014aa4) bg_sp_fs_schedule_viewer_highlight

0xf073,	// (0x0001aa8c) list_single_sp_fs_schedule_track_pane_cp01

0xf07b,	// (0x0001aa94) list_sp_fs_schedule_track_pane

0xf083,	// (0x0001aa9c) sp_fs_scroll_pane_cp06_ParamLimits

0xf083,	// (0x0001aa9c) sp_fs_scroll_pane_cp06

0xcbc3,	// (0x000185dc) bgmain_sp_fs_calendar_pane_g1

0x909b,	// (0x00014ab4) list_single_cale_mrui_pane_ParamLimits

0x909b,	// (0x00014ab4) list_single_cale_mrui_pane

0xf095,	// (0x0001aaae) list_single_cale_mrui_row_pane_ParamLimits

0xf095,	// (0x0001aaae) list_single_cale_mrui_row_pane

0xf0a2,	// (0x0001aabb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xf0a2,	// (0x0001aabb) list_single_cale_mrui_row_pane_g1

0xf0da,	// (0x0001aaf3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xf0da,	// (0x0001aaf3) list_single_cale_mrui_row_pane_t1

0x90be,	// (0x00014ad7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x90be,	// (0x00014ad7) list_single_cale_mrui_row_pane_t2

0x000f,	// (0x0000ba28) list_single_cale_mrui_row_pane_t3_ParamLimits

0x000f,	// (0x0000ba28) list_single_cale_mrui_row_pane_t3

0x003e,	// (0x0000ba57) list_single_cale_mrui_row_pane_t4_ParamLimits

0x003e,	// (0x0000ba57) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0001b828) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0001b828) list_single_cale_mrui_row_pane_t

0x9124,	// (0x00014b3d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9124,	// (0x00014b3d) list_single_cmail_header_editor_pane_bg_cp01

0x9148,	// (0x00014b61) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9148,	// (0x00014b61) list_single_cmail_header_editor_pane_bg_cp02

0x9166,	// (0x00014b7f) main_radioblah_text_pane_t1_ParamLimits

0x9166,	// (0x00014b7f) main_radioblah_text_pane_t1

0x00c8,	// (0x0000bae1) cam6_indi_pane_cp01

0x00d0,	// (0x0000bae9) cam6_mode_pane_cp01

0x00d8,	// (0x0000baf1) cam6_pano_pane

0x00e1,	// (0x0000bafa) cam6_zoom_pane_cp01

0x00e9,	// (0x0000bb02) cam6_pano_image_pane

0x00f2,	// (0x0000bb0b) cam6_pano_pane_g1

0xe7e4,	// (0x0001a1fd) cam6_pano_pane_g2

0x00fb,	// (0x0000bb14) cam6_pano_pane_g3

0x0104,	// (0x0000bb1d) cam6_pano_pane_g4

0xd16d,	// (0x00018b86) cam6_pano_pane_g5

0x010d,	// (0x0000bb26) cam6_pano_pane_g6

0x0115,	// (0x0000bb2e) cam6_pano_pane_g7

0x011d,	// (0x0000bb36) cam6_pano_pane_g8

0x0126,	// (0x0000bb3f) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0001b831) cam6_pano_pane_g

0x9bb5,	// (0x000155ce) main_browser_tag_pane

0xeed7,	// (0x0001a8f0) grid_navstr_albumart_pane

0x012f,	// (0x0000bb48) cell_navstr_albumart_pane_ParamLimits

0x012f,	// (0x0000bb48) cell_navstr_albumart_pane

0xb361,	// (0x00016d7a) cell_navstr_albumart_pane_g1

0xc4ab,	// (0x00017ec4) cell_navstr_albumart_pane_g2

0xc4bb,	// (0x00017ed4) cell_navstr_albumart_pane_g3

0xc4b3,	// (0x00017ecc) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0001b844) cell_navstr_albumart_pane_g

0x917f,	// (0x00014b98) bt_list_pane_ParamLimits

0x917f,	// (0x00014b98) bt_list_pane

0x9192,	// (0x00014bab) bt_list_pane_t1

0x91a1,	// (0x00014bba) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0001b84d) bt_list_pane_t

0x9bb5,	// (0x000155ce) main_cale_prevew_pane

0x91b0,	// (0x00014bc9) popup_cale_preview_window_ParamLimits

0x91b0,	// (0x00014bc9) popup_cale_preview_window

0x9c08,	// (0x00015621) bg_popup_preview_window_pane_cp05_ParamLimits

0x9c08,	// (0x00015621) bg_popup_preview_window_pane_cp05

0x018e,	// (0x0000bba7) list_cale_preview_pane_ParamLimits

0x018e,	// (0x0000bba7) list_cale_preview_pane

0x91c5,	// (0x00014bde) list_double_cale_preview_pane_ParamLimits

0x91c5,	// (0x00014bde) list_double_cale_preview_pane

0x91d6,	// (0x00014bef) list_single_cale_preview_pane_ParamLimits

0x91d6,	// (0x00014bef) list_single_cale_preview_pane

0x01dc,	// (0x0000bbf5) list_single_cale_preview_pane_g1

0x01e4,	// (0x0000bbfd) list_single_cale_preview_pane_t1_ParamLimits

0x01e4,	// (0x0000bbfd) list_single_cale_preview_pane_t1

0x91ea,	// (0x00014c03) list_double_cale_preview_pane_g1

0x91f2,	// (0x00014c0b) list_double_cale_preview_pane_t1_ParamLimits

0x91f2,	// (0x00014c0b) list_double_cale_preview_pane_t1

0x9207,	// (0x00014c20) list_double_cale_preview_pane_t2_ParamLimits

0x9207,	// (0x00014c20) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0001b852) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0001b852) list_double_cale_preview_pane_t

0x9bb5,	// (0x000155ce) main_ezdial_pane

0x9c08,	// (0x00015621) main_sp_fs_email_pane_ParamLimits

0x8a04,	// (0x0001441d) cmail_ddmenu_btn01_pane_ParamLimits

0x8a04,	// (0x0001441d) cmail_ddmenu_btn01_pane

0x8a17,	// (0x00014430) cmail_ddmenu_btn02_pane_ParamLimits

0x8a17,	// (0x00014430) cmail_ddmenu_btn02_pane

0x8a3a,	// (0x00014453) cmail_ddmenu_btn03_pane_ParamLimits

0x8a3a,	// (0x00014453) cmail_ddmenu_btn03_pane

0x8a5f,	// (0x00014478) main_sp_fs_ctrlbar_pane_ParamLimits

0x8a80,	// (0x00014499) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8eb3,	// (0x000148cc) list_cmail_body_pane_ParamLimits

0xedff,	// (0x0001a818) bg_button_pane_cp12

0xee13,	// (0x0001a82c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xee13,	// (0x0001a82c) list_single_cmail_header_detail_pane_g3

0x8f07,	// (0x00014920) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8f07,	// (0x00014920) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0001b7d7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0001b7d7) list_single_cmail_header_detail_pane_t

0xef3f,	// (0x0001a958) phacti_term_pane_t2_ParamLimits

0xef3f,	// (0x0001a958) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0001b7e1) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0001b7e1) phacti_term_pane_t

0x0211,	// (0x0000bc2a) aid_size_list_single_double

0x921f,	// (0x00014c38) popup_ezdial_listscroll_window

0x9235,	// (0x00014c4e) popup_number_entry_window_cp01

0xb1d8,	// (0x00016bf1) bg_popup_call_pane_cp09

0x0242,	// (0x0000bc5b) ezdial_list_pane

0x024a,	// (0x0000bc63) scroll_pane_cp23

0xc6ce,	// (0x000180e7) bg_button_pane_cp028_ParamLimits

0xc6ce,	// (0x000180e7) bg_button_pane_cp028

0x9241,	// (0x00014c5a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9241,	// (0x00014c5a) cmail_ddmenu_btn01_pane_g1

0x9250,	// (0x00014c69) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9250,	// (0x00014c69) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0001b857) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0001b857) cmail_ddmenu_btn01_pane_g

0x0270,	// (0x0000bc89) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0270,	// (0x0000bc89) cmail_ddmenu_btn01_pane_t1

0xc6ce,	// (0x000180e7) bg_button_pane_cp029_ParamLimits

0xc6ce,	// (0x000180e7) bg_button_pane_cp029

0x9260,	// (0x00014c79) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9260,	// (0x00014c79) cmail_ddmenu_btn02_pane_g1

0x927b,	// (0x00014c94) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x927b,	// (0x00014c94) cmail_ddmenu_btn02_pane_t1

0x9c08,	// (0x00015621) bg_button_pane_cp031_ParamLimits

0x9c08,	// (0x00015621) bg_button_pane_cp031

0x9260,	// (0x00014c79) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9260,	// (0x00014c79) cmail_ddmenu_btn03_pane_g1

0x927b,	// (0x00014c94) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x927b,	// (0x00014c94) cmail_ddmenu_btn03_pane_t1

0x665e,	// (0x00012077) cell_dialer2_keypad_pane_t1_ParamLimits

0x6678,	// (0x00012091) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6678,	// (0x00012091) cell_dialer2_keypad_pane_t1_copy1

0x8325,	// (0x00013d3e) ncimui_group_button_pane

0x9c08,	// (0x00015621) main_sp_fs_calendar_pane_ParamLimits

0x8eb3,	// (0x000148cc) list_single_cmail_header_caption_pane_ParamLimits

0xef8a,	// (0x0001a9a3) aid_recal_txt_sm_pane

0x9bb5,	// (0x000155ce) mian_recal_day_pane

0xefc9,	// (0x0001a9e2) popup_sp_fs_cale_preview_window_ParamLimits

0x9bb5,	// (0x000155ce) list_recal_day_pane

0x02ce,	// (0x0000bce7) list_single_recal_day_pane_ParamLimits

0x02ce,	// (0x0000bce7) list_single_recal_day_pane

0x02e0,	// (0x0000bcf9) list_single_recal_day_pane_g1_ParamLimits

0x02e0,	// (0x0000bcf9) list_single_recal_day_pane_g1

0x02ec,	// (0x0000bd05) list_single_recal_day_pane_g2_ParamLimits

0x02ec,	// (0x0000bd05) list_single_recal_day_pane_g2

0x02f8,	// (0x0000bd11) list_single_recal_day_pane_g3_ParamLimits

0x02f8,	// (0x0000bd11) list_single_recal_day_pane_g3

0x92a2,	// (0x00014cbb) list_single_recal_day_pane_g4_ParamLimits

0x92a2,	// (0x00014cbb) list_single_recal_day_pane_g4

0x0310,	// (0x0000bd29) list_single_recal_day_pane_g5_ParamLimits

0x0310,	// (0x0000bd29) list_single_recal_day_pane_g5

0x031c,	// (0x0000bd35) list_single_recal_day_pane_g6_ParamLimits

0x031c,	// (0x0000bd35) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0001b866) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0001b866) list_single_recal_day_pane_g

0x0328,	// (0x0000bd41) list_single_recal_day_pane_t1

0x0336,	// (0x0000bd4f) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0001b873) list_single_recal_day_pane_t

0x92b0,	// (0x00014cc9) ncimui_query_button_pane_ParamLimits

0x92b0,	// (0x00014cc9) ncimui_query_button_pane

0x92c0,	// (0x00014cd9) ncimui_query_button_pane_t1_ParamLimits

0x92c0,	// (0x00014cd9) ncimui_query_button_pane_t1

0x0367,	// (0x0000bd80) ncimui_query_button_pane_t2_ParamLimits

0x0367,	// (0x0000bd80) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0001b878) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0001b878) ncimui_query_button_pane_t

0x92d3,	// (0x00014cec) query_button_pane_ParamLimits

0x92d3,	// (0x00014cec) query_button_pane

0x9bb5,	// (0x000155ce) bg_button_pane_cp0028

0x0387,	// (0x0000bda0) query_button_pane_t1

0x49ae,	// (0x000103c7) main_tport_pane_ParamLimits

0x8dc2,	// (0x000147db) bg_popup_window_pane_cp01_ParamLimits

0x8dc2,	// (0x000147db) bg_popup_window_pane_cp01

0x8dda,	// (0x000147f3) heading_pane_cp08_ParamLimits

0x8dda,	// (0x000147f3) heading_pane_cp08

0x8dec,	// (0x00014805) heading_pane_cp07_ParamLimits

0x8dec,	// (0x00014805) heading_pane_cp07

0xedb7,	// (0x0001a7d0) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0001b7c4) cell_tport_appsw_pane_g

0xb359,	// (0x00016d72) input_candi_list_open_g1

0xab39,	// (0x00016552) list_cale_time_pane_g6_ParamLimits

0xab39,	// (0x00016552) list_cale_time_pane_g6

0x5654,	// (0x0001106d) aid_size_touch_calib_1_ParamLimits

0x5654,	// (0x0001106d) aid_size_touch_calib_1

0x5660,	// (0x00011079) aid_size_touch_calib_2_ParamLimits

0x5660,	// (0x00011079) aid_size_touch_calib_2

0x5674,	// (0x0001108d) aid_size_touch_calib_3_ParamLimits

0x5674,	// (0x0001108d) aid_size_touch_calib_3

0x568c,	// (0x000110a5) aid_size_touch_calib_4_ParamLimits

0x568c,	// (0x000110a5) aid_size_touch_calib_4

0x569e,	// (0x000110b7) main_touch_calib_button_group_pane_ParamLimits

0x569e,	// (0x000110b7) main_touch_calib_button_group_pane

0x56b5,	// (0x000110ce) main_touch_calib_pane_g1_ParamLimits

0x56c1,	// (0x000110da) main_touch_calib_pane_g2_ParamLimits

0x56cd,	// (0x000110e6) main_touch_calib_pane_g3_ParamLimits

0x56d9,	// (0x000110f2) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x0001b1a1) main_touch_calib_pane_g_ParamLimits

0x56e5,	// (0x000110fe) main_touch_calib_pane_t1_ParamLimits

0x56fd,	// (0x00011116) main_touch_calib_pane_t2_ParamLimits

0x5715,	// (0x0001112e) main_touch_calib_pane_t3_ParamLimits

0x5727,	// (0x00011140) main_touch_calib_pane_t4_ParamLimits

0x5739,	// (0x00011152) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x0001b1aa) main_touch_calib_pane_t_ParamLimits

0xcf98,	// (0x000189b1) list_single_fp_cale_pane_g3_ParamLimits

0xcf98,	// (0x000189b1) list_single_fp_cale_pane_g3

0x9c08,	// (0x00015621) bg_button_pane_cp012_ParamLimits

0x9c08,	// (0x00015621) bg_vkb2_func_pane_cp03_ParamLimits

0x75f8,	// (0x00013011) cell_vitu2_function_top_pane_g1_ParamLimits

0x9c08,	// (0x00015621) bg_vkb2_func_pane_cp04_ParamLimits

0x82c7,	// (0x00013ce0) main_ncimui_button_group_pane_ParamLimits

0x82c7,	// (0x00013ce0) main_ncimui_button_group_pane

0x8313,	// (0x00013d2c) main_ncimui_pane_t3_ParamLimits

0x8313,	// (0x00013d2c) main_ncimui_pane_t3

0xeeed,	// (0x0001a906) phacti_button_group_pane

0x0211,	// (0x0000bc2a) aid_size_list_single_double_ParamLimits

0x921f,	// (0x00014c38) popup_ezdial_listscroll_window_ParamLimits

0x9235,	// (0x00014c4e) popup_number_entry_window_cp01_ParamLimits

0x92e5,	// (0x00014cfe) phacti_button_pane_ParamLimits

0x92e5,	// (0x00014cfe) phacti_button_pane

0x9bb5,	// (0x000155ce) bg_button_pane_cp14

0x03a4,	// (0x0000bdbd) phacti_button_pane_t1

0x92f4,	// (0x00014d0d) main_touch_calib_button_pane_ParamLimits

0x92f4,	// (0x00014d0d) main_touch_calib_button_pane

0xa373,	// (0x00015d8c) bg_button_pane_cp18_ParamLimits

0xa373,	// (0x00015d8c) bg_button_pane_cp18

0x03c2,	// (0x0000bddb) main_touch_calib_button_pane_t1_ParamLimits

0x03c2,	// (0x0000bddb) main_touch_calib_button_pane_t1

0x03d8,	// (0x0000bdf1) main_touch_calib_button_pane_t2_ParamLimits

0x03d8,	// (0x0000bdf1) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0001b87d) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0001b87d) main_touch_calib_button_pane_t

0x9bb5,	// (0x000155ce) cell_ncimui_button_pane

0x9bb5,	// (0x000155ce) bg_button_pane_cp032

0x03f6,	// (0x0000be0f) cell_ncimui_button_pane_t1

0xd720,	// (0x00019139) image3_infobar_pane_ParamLimits

0xd720,	// (0x00019139) image3_infobar_pane

0x8691,	// (0x000140aa) fs_bigclock_status_pane_ParamLimits

0x8691,	// (0x000140aa) fs_bigclock_status_pane

0x869e,	// (0x000140b7) main_fs_bigclock_clock_pane_ParamLimits

0x869e,	// (0x000140b7) main_fs_bigclock_clock_pane

0x86ad,	// (0x000140c6) main_fs_bigclock_indi_pane_ParamLimits

0x86ad,	// (0x000140c6) main_fs_bigclock_indi_pane

0x86c1,	// (0x000140da) main_fs_bigclock_swipe_pane_ParamLimits

0x86c1,	// (0x000140da) main_fs_bigclock_swipe_pane

0x9bb5,	// (0x000155ce) main_fs_clock_dumped_data

0xe8f1,	// (0x0001a30a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe8f1,	// (0x0001a30a) list_single_fs_bigclock_indicator_pane_g1

0xe90b,	// (0x0001a324) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe90b,	// (0x0001a324) list_single_fs_bigclock_indicator_pane_g2

0xe925,	// (0x0001a33e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe925,	// (0x0001a33e) list_single_fs_bigclock_indicator_pane_g3

0xe93f,	// (0x0001a358) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe93f,	// (0x0001a358) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x0001b6ba) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x0001b6ba) list_single_fs_bigclock_indicator_pane_g

0xe963,	// (0x0001a37c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe963,	// (0x0001a37c) list_single_fs_bigclock_indicator_pane_t1

0xe98b,	// (0x0001a3a4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe98b,	// (0x0001a3a4) list_single_fs_bigclock_indicator_pane_t2

0xe9b3,	// (0x0001a3cc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe9b3,	// (0x0001a3cc) list_single_fs_bigclock_indicator_pane_t3

0xe9db,	// (0x0001a3f4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe9db,	// (0x0001a3f4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x0001b6c5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x0001b6c5) list_single_fs_bigclock_indicator_pane_t

0x0404,	// (0x0000be1d) image3_infobar_fav_pane_ParamLimits

0x0404,	// (0x0000be1d) image3_infobar_fav_pane

0x0414,	// (0x0000be2d) image3_infobar_loc_pane_ParamLimits

0x0414,	// (0x0000be2d) image3_infobar_loc_pane

0x0428,	// (0x0000be41) image3_infobar_time_pane_ParamLimits

0x0428,	// (0x0000be41) image3_infobar_time_pane

0xcbc3,	// (0x000185dc) image3_infobar_time_pane_g1

0x0438,	// (0x0000be51) image3_infobar_time_pane_t1

0xcbc3,	// (0x000185dc) image3_infobar_loc_pane_g1

0x0446,	// (0x0000be5f) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0001b882) image3_infobar_loc_pane_g

0x044e,	// (0x0000be67) image3_infobar_loc_pane_t1

0xcbc3,	// (0x000185dc) image3_infobar_fav_pane_g1

0x045c,	// (0x0000be75) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0001b887) image3_infobar_fav_pane_g

0x0464,	// (0x0000be7d) fs_bigclock_status_battery_pane

0x046d,	// (0x0000be86) fs_bigclock_status_signal_pane

0x0476,	// (0x0000be8f) fs_bigclock_status_title_pane

0x047f,	// (0x0000be98) fs_bigclock_status_signal_pane_g1

0x0488,	// (0x0000bea1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0001b88c) fs_bigclock_status_signal_pane_g

0x0490,	// (0x0000bea9) fs_bigclock_status_battery_pane_g1

0x0499,	// (0x0000beb2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0001b891) fs_bigclock_status_battery_pane_g

0x04a1,	// (0x0000beba) fs_bigclock_status_title_pane_t1

0xcbc3,	// (0x000185dc) main_fs_bigclock_clock_pane_g1

0x04af,	// (0x0000bec8) main_fs_bigclock_clock_pane_g2

0x04af,	// (0x0000bec8) main_fs_bigclock_clock_pane_g3

0x04af,	// (0x0000bec8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0001b896) main_fs_bigclock_clock_pane_g

0x04b7,	// (0x0000bed0) main_fs_bigclock_clock_pane_t1

0x04c5,	// (0x0000bede) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0001b89f) main_fs_bigclock_clock_pane_t

0x04d4,	// (0x0000beed) list_single_fs_bigclock_indicator_pane_ParamLimits

0x04d4,	// (0x0000beed) list_single_fs_bigclock_indicator_pane

0x9307,	// (0x00014d20) list_single_fs_bigclock_pane_ParamLimits

0x9307,	// (0x00014d20) list_single_fs_bigclock_pane

0x054c,	// (0x0000bf65) main_fs_bigclock_indicator_pane_t1

0x055b,	// (0x0000bf74) list_single_fs_bigclock_pane_g1

0x0563,	// (0x0000bf7c) list_single_fs_bigclock_pane_t1

0xcbc3,	// (0x000185dc) main_fs_bigclock_swipe_pane_g1

0x05a1,	// (0x0000bfba) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0001b8b0) main_fs_bigclock_swipe_pane_g

0x05a9,	// (0x0000bfc2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x05a9,	// (0x0000bfc2) main_fs_bigclock_swipe_pane_t1

0x3a37,	// (0x0000f450) call_type_pane_ParamLimits

0x9bb5,	// (0x000155ce) main_btmg_pane

0xf0ce,	// (0x0001aae7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xf0ce,	// (0x0001aae7) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0001b823) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0001b823) list_single_cale_mrui_row_pane_g

0x02be,	// (0x0000bcd7) list_recal_vselct_arw_lo_pane

0x02c6,	// (0x0000bcdf) list_recal_vselct_arw_up_pane

0x02b5,	// (0x0000bcce) list_recal_vselct_pane

0x05c6,	// (0x0000bfdf) btmg_button_pane

0x9367,	// (0x00014d80) main_btmg_pane_g1

0x9bb5,	// (0x000155ce) bg_button_pane_cp044

0x05d6,	// (0x0000bfef) btmg_button_pane_t1

0xc6c6,	// (0x000180df) aid_listscroll_gen

0x9c08,	// (0x00015621) main_cntbar_detail_pane

0xedd5,	// (0x0001a7ee) list_cmail_folder_pane

0xede5,	// (0x0001a7fe) sp_fs_scroll_pane_cp03_ParamLimits

0xced9,	// (0x000188f2) list_single_fs_dyc_pane_cp01_ParamLimits

0xced9,	// (0x000188f2) list_single_fs_dyc_pane_cp01

0x05fc,	// (0x0000c015) aid_size_cmail_indent

0xdf66,	// (0x0001997f) list_single_dyc_row_pane_cp01

0x9397,	// (0x00014db0) cntbar_detail_list_pane_ParamLimits

0x9397,	// (0x00014db0) cntbar_detail_list_pane

0x93dd,	// (0x00014df6) main_cntbar_detail_cont_pane_ParamLimits

0x93dd,	// (0x00014df6) main_cntbar_detail_cont_pane

0x93f1,	// (0x00014e0a) scroll_pane_cp032_ParamLimits

0x93f1,	// (0x00014e0a) scroll_pane_cp032

0x93fd,	// (0x00014e16) cntbar_detail_list_event_pane_ParamLimits

0x93fd,	// (0x00014e16) cntbar_detail_list_event_pane

0x93a7,	// (0x00014dc0) cntbar_detail_list_shct_pane

0x067d,	// (0x0000c096) aid_list_gen

0xa4d0,	// (0x00015ee9) aid_scroll

0xdeb2,	// (0x000198cb) aid_size_touch_scroll_bar

0xed6a,	// (0x0001a783) aid_list_double

0x940e,	// (0x00014e27) aid_list_single

0xdf78,	// (0x00019991) aid_list_single_lg

0x9417,	// (0x00014e30) aid_list_z_g_a_sm

0x941f,	// (0x00014e38) aid_list_z_g_d

0x9427,	// (0x00014e40) aid_txt_z_prm

0x9435,	// (0x00014e4e) aid_txt_z_prm_cp01

0x9443,	// (0x00014e5c) aid_txt_z_sec

0x9451,	// (0x00014e6a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9451,	// (0x00014e6a) main_cntbar_detail_cont_pane_g1

0x9465,	// (0x00014e7e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9465,	// (0x00014e7e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0001b8b5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0001b8b5) main_cntbar_detail_cont_pane_g

0x06eb,	// (0x0000c104) main_cntbar_detail_cont_pane_t1

0x06f9,	// (0x0000c112) main_cntbar_detail_cont_pane_t2

0x0707,	// (0x0000c120) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0001b8ba) main_cntbar_detail_cont_pane_t

0x9475,	// (0x00014e8e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9475,	// (0x00014e8e) cell_cntbar_detail_list_shct_pane

0x0727,	// (0x0000c140) cntbar_detail_list_shct_pane_g1

0x0730,	// (0x0000c149) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0001b8c1) cntbar_detail_list_shct_pane_g

0x9487,	// (0x00014ea0) cntbar_detail_list_event_pane_g1_ParamLimits

0x9487,	// (0x00014ea0) cntbar_detail_list_event_pane_g1

0x9493,	// (0x00014eac) cntbar_detail_list_event_pane_g2_ParamLimits

0x9493,	// (0x00014eac) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0001b8c6) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0001b8c6) cntbar_detail_list_event_pane_g

0x94ff,	// (0x00014f18) cntbar_detail_list_event_pane_t1_ParamLimits

0x94ff,	// (0x00014f18) cntbar_detail_list_event_pane_t1

0x9514,	// (0x00014f2d) cntbar_detail_list_event_pane_t2_ParamLimits

0x9514,	// (0x00014f2d) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0001b8d3) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0001b8d3) cntbar_detail_list_event_pane_t

0xcbc3,	// (0x000185dc) cell_cntbar_detail_list_shct_pane_g1

0xb197,	// (0x00016bb0) navi_pane_mv_g3

0x9c08,	// (0x00015621) main_cntbar_detail_pane_ParamLimits

0x9bb5,	// (0x000155ce) main_notif_wgt_pane

0xd496,	// (0x00018eaf) aid_tch_main_mp4_pane_g4

0xd6a0,	// (0x000190b9) popup_slider_window_cp02

0x02b5,	// (0x0000bcce) list_recal_day_event_pane

0x936f,	// (0x00014d88) cntbar_detail_btn_pane_ParamLimits

0x936f,	// (0x00014d88) cntbar_detail_btn_pane

0x9382,	// (0x00014d9b) cntbar_detail_btn_pane_cp01_ParamLimits

0x9382,	// (0x00014d9b) cntbar_detail_btn_pane_cp01

0x93a7,	// (0x00014dc0) cntbar_detail_list_shct_pane_ParamLimits

0x93b7,	// (0x00014dd0) cntbar_detail_pane_g1_ParamLimits

0x93b7,	// (0x00014dd0) cntbar_detail_pane_g1

0x93c7,	// (0x00014de0) cntbar_detail_pane_t1_ParamLimits

0x93c7,	// (0x00014de0) cntbar_detail_pane_t1

0x949f,	// (0x00014eb8) cntbar_detail_list_event_pane_g3_ParamLimits

0x949f,	// (0x00014eb8) cntbar_detail_list_event_pane_g3

0x94b7,	// (0x00014ed0) cntbar_detail_list_event_pane_g4_ParamLimits

0x94b7,	// (0x00014ed0) cntbar_detail_list_event_pane_g4

0x94cf,	// (0x00014ee8) cntbar_detail_list_event_pane_g5_ParamLimits

0x94cf,	// (0x00014ee8) cntbar_detail_list_event_pane_g5

0x94e7,	// (0x00014f00) cntbar_detail_list_event_pane_g6_ParamLimits

0x94e7,	// (0x00014f00) cntbar_detail_list_event_pane_g6

0x9529,	// (0x00014f42) cntbar_detail_list_event_pane_t3_ParamLimits

0x9529,	// (0x00014f42) cntbar_detail_list_event_pane_t3

0x953b,	// (0x00014f54) popup_notif_wgt_window_ParamLimits

0x953b,	// (0x00014f54) popup_notif_wgt_window

0x9550,	// (0x00014f69) popup_submenu_window_cp01_ParamLimits

0x9550,	// (0x00014f69) popup_submenu_window_cp01

0xb1d8,	// (0x00016bf1) bg_popup_window_pane_cp10

0x0807,	// (0x0000c220) listscroll_notif_wgt_pane

0x080f,	// (0x0000c228) list_notif_wgt_window

0x0818,	// (0x0000c231) scroll_pane_cp033

0x0821,	// (0x0000c23a) list_notif_wgt_row_pane_ParamLimits

0x0821,	// (0x0000c23a) list_notif_wgt_row_pane

0x0833,	// (0x0000c24c) aid_size_list_notif_wgt_del

0x083c,	// (0x0000c255) list_notif_wgt_row_pane_g1

0x0844,	// (0x0000c25d) list_notif_wgt_row_pane_g2

0x084c,	// (0x0000c265) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0001b8da) list_notif_wgt_row_pane_g

0x0855,	// (0x0000c26e) list_notif_wgt_row_pane_t1

0x0863,	// (0x0000c27c) list_notif_wgt_row_pane_t2

0x0871,	// (0x0000c28a) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0001b8e1) list_notif_wgt_row_pane_t

0xdbaa,	// (0x000195c3) list_recal_day_event_pane_g1

0x087f,	// (0x0000c298) list_recal_day_event_pane_t1

0x9bb5,	// (0x000155ce) bg_button_pane_cp045

0x9560,	// (0x00014f79) cntbar_detail_btn_pane_t1

0xc6ce,	// (0x000180e7) main_callh_pane_ParamLimits

0xc6ce,	// (0x000180e7) main_callh_pane

0x9bb5,	// (0x000155ce) main_coverflow0_pane

0x9bb5,	// (0x000155ce) main_wgtman_pane

0x86cd,	// (0x000140e6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x86cd,	// (0x000140e6) main_fs_bigclock_unlock_btn_pane

0xedaf,	// (0x0001a7c8) bg_button_pane_cp16

0xedbf,	// (0x0001a7d8) cell_tport_appsw_pane_g3

0x956e,	// (0x00014f87) cf0_flow_pane_ParamLimits

0x956e,	// (0x00014f87) cf0_flow_pane

0x08ab,	// (0x0000c2c4) listscroll_cf0_pane

0x08b4,	// (0x0000c2cd) main_cf0_pane_g1

0x9583,	// (0x00014f9c) main_cf0_pane_t1_ParamLimits

0x9583,	// (0x00014f9c) main_cf0_pane_t1

0x9598,	// (0x00014fb1) main_cf0_pane_t2_ParamLimits

0x9598,	// (0x00014fb1) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0001b8e8) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0001b8e8) main_cf0_pane_t

0x08e2,	// (0x0000c2fb) scroll_pane_cp11

0x95ad,	// (0x00014fc6) cf0_flow_pane_g1

0x95b5,	// (0x00014fce) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0001b8ed) cf0_flow_pane_g

0x95bd,	// (0x00014fd6) cf0_flow_pane_t1

0x9bb5,	// (0x000155ce) main_call6_pane

0x9bb5,	// (0x000155ce) main_calllock_pane

0x95cb,	// (0x00014fe4) call6_btn_grp_pane_ParamLimits

0x95cb,	// (0x00014fe4) call6_btn_grp_pane

0x95e1,	// (0x00014ffa) call6_pane_g1_ParamLimits

0x95e1,	// (0x00014ffa) call6_pane_g1

0x95f4,	// (0x0001500d) popup_call6_1st_window_ParamLimits

0x95f4,	// (0x0001500d) popup_call6_1st_window

0x9603,	// (0x0001501c) popup_call6_2nd_window_ParamLimits

0x9603,	// (0x0001501c) popup_call6_2nd_window

0x9612,	// (0x0001502b) cell_call6_btn_pane_ParamLimits

0x9612,	// (0x0001502b) cell_call6_btn_pane

0xb1d8,	// (0x00016bf1) bg_popup_call2_in_pane_cp03

0x094a,	// (0x0000c363) popup_call6_1st_window_g1

0x0952,	// (0x0000c36b) popup_call6_1st_window_g2

0x095a,	// (0x0000c373) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0001b8f2) popup_call6_1st_window_g

0x0962,	// (0x0000c37b) popup_call6_1st_window_t1

0x0971,	// (0x0000c38a) popup_call6_1st_window_t2

0x097f,	// (0x0000c398) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0001b8f9) popup_call6_1st_window_t

0xb1d8,	// (0x00016bf1) bg_popup_call2_in_pane_cp04

0x094a,	// (0x0000c363) popup_call6_2nd_window_g1

0x0952,	// (0x0000c36b) popup_call6_2nd_window_g2

0x095a,	// (0x0000c373) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0001b8f2) popup_call6_2nd_window_g

0x0962,	// (0x0000c37b) popup_call6_2nd_window_t1

0x9bb5,	// (0x000155ce) bg_button_pane_cp15

0x098d,	// (0x0000c3a6) cell_call6_btn_pane_g1

0x0996,	// (0x0000c3af) cell_call6_btn_pane_t1

0x9626,	// (0x0001503f) listscroll_wgtman_pane_ParamLimits

0x9626,	// (0x0001503f) listscroll_wgtman_pane

0x9645,	// (0x0001505e) wgtman_btn_pane_ParamLimits

0x9645,	// (0x0001505e) wgtman_btn_pane

0xb019,	// (0x00016a32) aid_scroll_copy1

0x09f2,	// (0x0000c40b) list_wgtman_pane

0x9685,	// (0x0001509e) wgtman_btn_pane_g1_ParamLimits

0x9685,	// (0x0001509e) wgtman_btn_pane_g1

0x96b1,	// (0x000150ca) wgtman_btn_pane_t1_ParamLimits

0x96b1,	// (0x000150ca) wgtman_btn_pane_t1

0x0a5b,	// (0x0000c474) wgtman_btn_pane_t2_ParamLimits

0x0a5b,	// (0x0000c474) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0001b900) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0001b900) wgtman_btn_pane_t

0x96ee,	// (0x00015107) listrow_wgtman_pane_ParamLimits

0x96ee,	// (0x00015107) listrow_wgtman_pane

0x96ff,	// (0x00015118) listrow_wgtman_pane_g1

0x9708,	// (0x00015121) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0001b905) listrow_wgtman_pane_g

0x9710,	// (0x00015129) listrow_wgtman_pane_t1

0x971e,	// (0x00015137) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0001b90a) listrow_wgtman_pane_t

0x972c,	// (0x00015145) wait_bar_pane_cp09

0x0ab8,	// (0x0000c4d1) main_calllock_btn_pane

0x0ac0,	// (0x0000c4d9) main_calllock_pane_g1

0x9bb5,	// (0x000155ce) bg_button_pane_cp17

0x0ac9,	// (0x0000c4e2) main_calllock_btn_pane_g1

0x0ad2,	// (0x0000c4eb) main_calllock_btn_pane_t1

0x9bb5,	// (0x000155ce) main_dialer3_pane

0x9bb5,	// (0x000155ce) main_fmrd2_pane

0xcbc3,	// (0x000185dc) main_fs_bigclock_unlock_btn_pane_g1

0x0ae9,	// (0x0000c502) main_fs_bigclock_unlock_btn_pane_t1

0x9734,	// (0x0001514d) area_fmrd2_info_pane_ParamLimits

0x9734,	// (0x0001514d) area_fmrd2_info_pane

0x9743,	// (0x0001515c) area_fmrd2_visual_pane_ParamLimits

0x9743,	// (0x0001515c) area_fmrd2_visual_pane

0x9751,	// (0x0001516a) fmrd2_indi_pane_ParamLimits

0x9751,	// (0x0001516a) fmrd2_indi_pane

0x975e,	// (0x00015177) area_fmrd2_visual_pane_g1

0x9766,	// (0x0001517f) area_fmrd2_visual_pane_t1

0x9774,	// (0x0001518d) area_fmrd2_visual_pane_t2

0x9782,	// (0x0001519b) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0001b914) area_fmrd2_visual_pane_t

0x9790,	// (0x000151a9) area_fmrd2_info_pane_g1

0x9798,	// (0x000151b1) area_fmrd2_info_pane_t1

0x97a6,	// (0x000151bf) area_fmrd2_info_pane_t2

0x97b4,	// (0x000151cd) area_fmrd2_info_pane_t3

0x97c2,	// (0x000151db) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0001b91b) area_fmrd2_info_pane_t

0x97d0,	// (0x000151e9) fmrd2_indi_pane_t1

0x97de,	// (0x000151f7) fmrd2_indi_pane_t2

0x97ec,	// (0x00015205) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0001b924) fmrd2_indi_pane_t

0xe94e,	// (0x0001a367) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe94e,	// (0x0001a367) list_single_fs_bigclock_indicator_pane_g5

0xe9f0,	// (0x0001a409) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe9f0,	// (0x0001a409) list_single_fs_bigclock_indicator_pane_t5

0x8fe2,	// (0x000149fb) aid_cell_bcale_month_pane_ParamLimits

0x8fe2,	// (0x000149fb) aid_cell_bcale_month_pane

0x8ff4,	// (0x00014a0d) bcale_month_pane_ParamLimits

0x8ff4,	// (0x00014a0d) bcale_month_pane

0x9006,	// (0x00014a1f) bcale_preview_pane_ParamLimits

0x9006,	// (0x00014a1f) bcale_preview_pane

0x0563,	// (0x0000bf7c) list_single_fs_bigclock_pane_t1_ParamLimits

0x057d,	// (0x0000bf96) list_single_fs_bigclock_pane_t2_ParamLimits

0x057d,	// (0x0000bf96) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0001b8ab) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0001b8ab) list_single_fs_bigclock_pane_t

0x0ae1,	// (0x0000c4fa) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0001b90f) main_fs_bigclock_unlock_btn_pane_g

0x97fa,	// (0x00015213) aid_dia3_key_size_ParamLimits

0x97fa,	// (0x00015213) aid_dia3_key_size

0x9809,	// (0x00015222) aid_dia3_listrow_size_ParamLimits

0x9809,	// (0x00015222) aid_dia3_listrow_size

0x981c,	// (0x00015235) dia3_keypad_fun_pane_ParamLimits

0x981c,	// (0x00015235) dia3_keypad_fun_pane

0x9830,	// (0x00015249) dia3_keypad_num_pane_ParamLimits

0x9830,	// (0x00015249) dia3_keypad_num_pane

0x9841,	// (0x0001525a) dia3_listscroll_pane_ParamLimits

0x9841,	// (0x0001525a) dia3_listscroll_pane

0x9852,	// (0x0001526b) dia3_numentry_pane_ParamLimits

0x9852,	// (0x0001526b) dia3_numentry_pane

0x0c04,	// (0x0000c61d) dia3_list_pane

0x0c0d,	// (0x0000c626) scroll_pane_cp12

0x9bb5,	// (0x000155ce) bg_dia3_numentry_pane

0x9864,	// (0x0001527d) dia3_numentry_pane_t1

0x9873,	// (0x0001528c) cell_dia3_key_num_pane

0x987b,	// (0x00015294) cell_dia3_key0_fun_pane_ParamLimits

0x987b,	// (0x00015294) cell_dia3_key0_fun_pane

0x988f,	// (0x000152a8) cell_dia3_key1_fun_pane_ParamLimits

0x988f,	// (0x000152a8) cell_dia3_key1_fun_pane

0x98a6,	// (0x000152bf) dia3_listrow_pane

0xe660,	// (0x0001a079) bg_dia3_numentry_pane_g1

0x9bb5,	// (0x000155ce) bg_button_pane_cp21

0x0c54,	// (0x0000c66d) cell_dia3_key_num_pane_t1

0x0c62,	// (0x0000c67b) cell_dia3_key_num_pane_t2

0x0c71,	// (0x0000c68a) cell_dia3_key_num_pane_t3

0x0c80,	// (0x0000c699) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0001b92b) cell_dia3_key_num_pane_t

0x9bb5,	// (0x000155ce) bg_button_pane_cp19

0x0c8f,	// (0x0000c6a8) cell_dia3_key0_fun_pane_g1

0x9bb5,	// (0x000155ce) bg_button_pane_cp20

0x98b8,	// (0x000152d1) cell_dia3_key1_fun_pane_g1

0x98c0,	// (0x000152d9) area_left_week_number_pane

0x068f,	// (0x0000c0a8) area_top_day_name_pane

0x98c9,	// (0x000152e2) frame_month_view_pane

0x98d1,	// (0x000152ea) grid_month_view_pane

0x98db,	// (0x000152f4) cell_top_day_name_pane_ParamLimits

0x98db,	// (0x000152f4) cell_top_day_name_pane

0x98f1,	// (0x0001530a) cell_area_left_week_number_pane_ParamLimits

0x98f1,	// (0x0001530a) cell_area_left_week_number_pane

0x9905,	// (0x0001531e) cell_month_view_pane_ParamLimits

0x9905,	// (0x0001531e) cell_month_view_pane

0x0d08,	// (0x0000c721) frm_month_g1

0x9920,	// (0x00015339) frm_month_g2

0x9928,	// (0x00015341) frm_month_g3

0x9930,	// (0x00015349) frm_month_g4

0x9938,	// (0x00015351) frm_month_g5

0x9940,	// (0x00015359) frm_month_g6

0x9948,	// (0x00015361) frm_month_g7

0x0d41,	// (0x0000c75a) frm_month_g8

0x9950,	// (0x00015369) frm_month_g9

0x9959,	// (0x00015372) frm_month_g10

0x9962,	// (0x0001537b) frm_month_g11

0x996b,	// (0x00015384) frm_month_g12

0x9974,	// (0x0001538d) frm_month_g13

0x997d,	// (0x00015396) frm_month_g14

0x9986,	// (0x0001539f) frm_month_g15

0x998f,	// (0x000153a8) frm_month_g16

0x000f,

0xff1b,	// (0x0001b934) frm_month_g

0x9998,	// (0x000153b1) cell_top_day_name_pane_t1

0x99a7,	// (0x000153c0) cell_area_left_week_number_pane_g1

0x9998,	// (0x000153b1) cell_area_left_week_number_pane_t1

0xcbc3,	// (0x000185dc) cell_month_view_pane_g1

0x99af,	// (0x000153c8) cell_month_view_pane_t1

0x9bb5,	// (0x000155ce) main_fps_pane

0xebea,	// (0x0001a603) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xebea,	// (0x0001a603) cmail_ddmenu_btn02_pane_cp1

0xec06,	// (0x0001a61f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xec06,	// (0x0001a61f) cmail_ddmenu_btn02_pane_cp2

0x926f,	// (0x00014c88) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x926f,	// (0x00014c88) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0001b85c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0001b85c) cmail_ddmenu_btn02_pane_g

0x9290,	// (0x00014ca9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9290,	// (0x00014ca9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0001b861) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0001b861) cmail_ddmenu_btn02_pane_t

0x99be,	// (0x000153d7) fps_text_pane_ParamLimits

0x99be,	// (0x000153d7) fps_text_pane

0x99d4,	// (0x000153ed) main_fps_pane_g1_ParamLimits

0x99d4,	// (0x000153ed) main_fps_pane_g1

0x99ea,	// (0x00015403) wait_bar_pane_cp010_ParamLimits

0x99ea,	// (0x00015403) wait_bar_pane_cp010

0x99fb,	// (0x00015414) fps_text_pane_t1_ParamLimits

0x99fb,	// (0x00015414) fps_text_pane_t1

0x102f,	// (0x0000ca48) cam4_image_uncrop_pane_g1

0x1038,	// (0x0000ca51) cam4_image_uncrop_pane_g2

0x6aa9,	// (0x000124c2) cam4_image_uncrop_pane_g3

0x6ab2,	// (0x000124cb) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x0001b339) cam4_image_uncrop_pane_g

0x98a6,	// (0x000152bf) dia3_listrow_pane_ParamLimits

0x9bb5,	// (0x000155ce) main_phob2_pane

0x8e4d,	// (0x00014866) cell_tport_appsw_pane_cp02_ParamLimits

0x8e4d,	// (0x00014866) cell_tport_appsw_pane_cp02

0x8e5d,	// (0x00014876) cell_tport_appsw_pane_cp03_ParamLimits

0x8e5d,	// (0x00014876) cell_tport_appsw_pane_cp03

0x9bb5,	// (0x000155ce) phob2_contact_card_pane

0x9bb5,	// (0x000155ce) phob2_listscroll_pane

0x0ded,	// (0x0000c806) phob2_list_pane

0x0df5,	// (0x0000c80e) scroll_pane_cp034

0x9a13,	// (0x0001542c) phob2_cc_data_pane_ParamLimits

0x9a13,	// (0x0001542c) phob2_cc_data_pane

0x9a30,	// (0x00015449) phob2_cc_listscroll_pane_ParamLimits

0x9a30,	// (0x00015449) phob2_cc_listscroll_pane

0x9a4c,	// (0x00015465) list_double_large_graphic_phob2_pane_ParamLimits

0x9a4c,	// (0x00015465) list_double_large_graphic_phob2_pane

0x9a5e,	// (0x00015477) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a5e,	// (0x00015477) list_double_large_graphic_phob2_pane_g1

0x9a6b,	// (0x00015484) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a6b,	// (0x00015484) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0001b955) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0001b955) list_double_large_graphic_phob2_pane_g

0x9a77,	// (0x00015490) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a77,	// (0x00015490) list_double_large_graphic_phob2_pane_t1

0x9a8c,	// (0x000154a5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a8c,	// (0x000154a5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0001b95a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0001b95a) list_double_large_graphic_phob2_pane_t

0x9bb5,	// (0x000155ce) list_highlight_pane_cp024

0x0e80,	// (0x0000c899) phob2_cc_button_pane

0x9a9e,	// (0x000154b7) phob2_cc_data_pane_g1_ParamLimits

0x9a9e,	// (0x000154b7) phob2_cc_data_pane_g1

0x9ab3,	// (0x000154cc) phob2_cc_data_pane_g2_ParamLimits

0x9ab3,	// (0x000154cc) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0001b95f) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0001b95f) phob2_cc_data_pane_g

0x9ac5,	// (0x000154de) phob2_cc_data_pane_t1_ParamLimits

0x9ac5,	// (0x000154de) phob2_cc_data_pane_t1

0x9add,	// (0x000154f6) phob2_cc_data_pane_t2_ParamLimits

0x9add,	// (0x000154f6) phob2_cc_data_pane_t2

0x9af5,	// (0x0001550e) phob2_cc_data_pane_t3_ParamLimits

0x9af5,	// (0x0001550e) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0001b964) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0001b964) phob2_cc_data_pane_t

0x0ed6,	// (0x0000c8ef) phob2_cc_list_pane_ParamLimits

0x0ed6,	// (0x0000c8ef) phob2_cc_list_pane

0xe57d,	// (0x00019f96) scroll_pane_cp035_ParamLimits

0xe57d,	// (0x00019f96) scroll_pane_cp035

0x9c08,	// (0x00015621) bg_button_pane_cp033

0x0ee2,	// (0x0000c8fb) phob2_cc_button_pane_g1

0x0eee,	// (0x0000c907) phob2_cc_button_pane_t1

0x0f03,	// (0x0000c91c) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0001b96b) phob2_cc_button_pane_t

0x9b0d,	// (0x00015526) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b0d,	// (0x00015526) list_double_large_graphic_phob2_cc_pane

0x9b1f,	// (0x00015538) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b1f,	// (0x00015538) list_double_large_graphic_phob2_cc_pane_g1

0x9b2b,	// (0x00015544) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b2b,	// (0x00015544) list_double_large_graphic_phob2_cc_pane_g2

0x9b37,	// (0x00015550) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b37,	// (0x00015550) list_double_large_graphic_phob2_cc_pane_g3

0x9b43,	// (0x0001555c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b43,	// (0x0001555c) list_double_large_graphic_phob2_cc_pane_g4

0x9b4f,	// (0x00015568) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b4f,	// (0x00015568) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0001b970) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0001b970) list_double_large_graphic_phob2_cc_pane_g

0x9b5b,	// (0x00015574) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b5b,	// (0x00015574) list_double_large_graphic_phob2_cc_pane_t1

0x9b84,	// (0x0001559d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b84,	// (0x0001559d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0001b97b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0001b97b) list_double_large_graphic_phob2_cc_pane_t

0x0fd1,	// (0x0000c9ea) list_highlight_pane_cp025_ParamLimits

0x0fd1,	// (0x0000c9ea) list_highlight_pane_cp025

0x9c08,	// (0x00015621) bg_button_pane_cp033_ParamLimits

0x0ee2,	// (0x0000c8fb) phob2_cc_button_pane_g1_ParamLimits

0x0eee,	// (0x0000c907) phob2_cc_button_pane_t1_ParamLimits

0x0f03,	// (0x0000c91c) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0001b96b) phob2_cc_button_pane_t_ParamLimits

0x20d8,	// (0x0000daf1) popup_wgtman_window

0xe680,	// (0x0001a099) scroll_pane_cp038

0x9667,	// (0x00015080) wgtman_btn_pane_cp_01_ParamLimits

0x9667,	// (0x00015080) wgtman_btn_pane_cp_01

0x0fdf,	// (0x0000c9f8) wgtman_content_pane

0x0fe8,	// (0x0000ca01) wgtman_heading_pane

0x9bb5,	// (0x000155ce) bg_heading_pane_cp02

0x0ff1,	// (0x0000ca0a) wgtman_heading_pane_g1

0x0ff9,	// (0x0000ca12) wgtman_heading_pane_t1

0x1007,	// (0x0000ca20) scroll_pane_cp036

0x100f,	// (0x0000ca28) wgtman_list_pane

0x1017,	// (0x0000ca30) wgtman_list_pane_t1_ParamLimits

0x1017,	// (0x0000ca30) wgtman_list_pane_t1

0xd80f,	// (0x00019228) cam4_grid_pane

0x777a,	// (0x00013193) bg_button_pane_cp015_ParamLimits

0x778a,	// (0x000131a3) bg_button_pane_cp016_ParamLimits

0x779c,	// (0x000131b5) bg_button_pane_cp017_ParamLimits

0x77ec,	// (0x00013205) popup_vitu2_query_window_g3_ParamLimits

0x77ec,	// (0x00013205) popup_vitu2_query_window_g3

0x789f,	// (0x000132b8) popup_vitu2_query_window_t6_ParamLimits

0x789f,	// (0x000132b8) popup_vitu2_query_window_t6

0x78ca,	// (0x000132e3) popup_vitu2_query_window_t7_ParamLimits

0x78ca,	// (0x000132e3) popup_vitu2_query_window_t7

0x102f,	// (0x0000ca48) cam4_grid_pane_g1

0x1038,	// (0x0000ca51) cam4_grid_pane_g2

0x1041,	// (0x0000ca5a) cam4_grid_pane_g3

0x104a,	// (0x0000ca63) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x0001b980) cam4_grid_pane_g

0x2d98,	// (0x0000e7b1) aid_placing_vt_slider_lsc_ParamLimits

0x3008,	// (0x0000ea21) vidtel_button_pane_ParamLimits

0x3008,	// (0x0000ea21) vidtel_button_pane

0x9bb5,	// (0x000155ce) bg_button_pane_cp034

0x9bad,	// (0x000155c6) vidtel_button_pane_g1

0x105b,	// (0x0000ca74) vidtel_button_pane_t1

0xdb50,	// (0x00019569) aid_size_vtel_slider_touch

0xe57d,	// (0x00019f96) scroll_pane_cp039

0xe6ac,	// (0x0001a0c5) ncim_query_button_pane_cp01_ParamLimits

0xe6cb,	// (0x0001a0e4) ncimui_query_pane_g1_ParamLimits

0x9c08,	// (0x00015621) input_focus_pane_cp012_ParamLimits

0xe6f0,	// (0x0001a109) ncim_query_entry_pane_t1_ParamLimits

0xe57d,	// (0x00019f96) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
