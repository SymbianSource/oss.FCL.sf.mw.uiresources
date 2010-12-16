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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000344c5 };

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
0x5502,	// (0x000399c7) Screen

0x550e,	// (0x000399d3) application_window

0x556a,	// (0x00039a2f) area_bottom_pane_ParamLimits

0x556a,	// (0x00039a2f) area_bottom_pane

0x55c2,	// (0x00039a87) area_top_pane_ParamLimits

0x55c2,	// (0x00039a87) area_top_pane

0x5626,	// (0x00039aeb) call_video_uplink_pane_ParamLimits

0x5626,	// (0x00039aeb) call_video_uplink_pane

0x5665,	// (0x00039b2a) main_pane_ParamLimits

0x5665,	// (0x00039b2a) main_pane

0x3b66,	// (0x0003802b) context_pane

0x8185,	// (0x0003c64a) navi_pane

0x81ab,	// (0x0003c670) popup_cale_events_window_ParamLimits

0x81ab,	// (0x0003c670) popup_cale_events_window

0x3b79,	// (0x0003803e) popup_mup_playback_window

0x81c3,	// (0x0003c688) signal_pane

0x1ce4,	// (0x000361a9) main_browser_pane

0x1efc,	// (0x000363c1) main_burst_pane

0x8011,	// (0x0003c4d6) main_calc_pane

0x3b5a,	// (0x0003801f) main_cale_day_pane

0x5aab,	// (0x00039f70) main_cale_month_pane

0x3b5a,	// (0x0003801f) main_cale_week_pane

0x1efc,	// (0x000363c1) main_call_pane

0x1964,	// (0x00035e29) main_call_poc_pane

0x1efc,	// (0x000363c1) main_camera_pane

0x1efc,	// (0x000363c1) main_chi_dic_pane

0x266d,	// (0x00036b32) main_clock_pane

0x1964,	// (0x00035e29) main_fmradio_pane

0x1efc,	// (0x000363c1) main_graph_messa_pane

0x1964,	// (0x00035e29) main_help_pane

0x1ce4,	// (0x000361a9) main_im_pane

0x1bcd,	// (0x00036092) main_image_pane_ParamLimits

0x1bcd,	// (0x00036092) main_image_pane

0x1964,	// (0x00035e29) main_location2_pane

0x1efc,	// (0x000363c1) main_location_pane

0x1bcd,	// (0x00036092) main_messa_pane

0x1964,	// (0x00035e29) main_mp2_pane

0x1efc,	// (0x000363c1) main_mp_pane

0x1964,	// (0x00035e29) main_msg_pane

0x1964,	// (0x00035e29) main_mup_eq_pane

0x1964,	// (0x00035e29) main_mup_pane

0x1ce4,	// (0x000361a9) main_notes_pane

0x1964,	// (0x00035e29) main_pec_pane

0x1964,	// (0x00035e29) main_phob_pane

0x1964,	// (0x00035e29) main_pinb_pane

0x1964,	// (0x00035e29) main_postcard_pane

0x1964,	// (0x00035e29) main_qdial_pane

0x1efc,	// (0x000363c1) main_skin_pane

0x1964,	// (0x00035e29) main_smil2_pane

0x1efc,	// (0x000363c1) main_smil_pane

0x1efc,	// (0x000363c1) main_video_pane

0x1efc,	// (0x000363c1) main_video_tele_pane

0x1bcd,	// (0x00036092) main_viewer_pane_ParamLimits

0x1bcd,	// (0x00036092) main_viewer_pane

0x1efc,	// (0x000363c1) main_vorec_pane

0x804f,	// (0x0003c514) popup_blid_sat_info_window_ParamLimits

0x804f,	// (0x0003c514) popup_blid_sat_info_window

0x806f,	// (0x0003c534) popup_dyc_status_message_window_ParamLimits

0x806f,	// (0x0003c534) popup_dyc_status_message_window

0x807f,	// (0x0003c544) popup_grid_large_graphic_window_ParamLimits

0x807f,	// (0x0003c544) popup_grid_large_graphic_window

0x8110,	// (0x0003c5d5) popup_loc_request_window_ParamLimits

0x8110,	// (0x0003c5d5) popup_loc_request_window

0x815d,	// (0x0003c622) popup_wml_address_window_ParamLimits

0x815d,	// (0x0003c622) popup_wml_address_window

0x7ee9,	// (0x0003c3ae) call_muted_g1

0x7bdc,	// (0x0003c0a1) popup_call_audio_conf_window_ParamLimits

0x7bdc,	// (0x0003c0a1) popup_call_audio_conf_window

0x7ef9,	// (0x0003c3be) popup_call_audio_first_window_ParamLimits

0x7ef9,	// (0x0003c3be) popup_call_audio_first_window

0x7f39,	// (0x0003c3fe) popup_call_audio_in_window_ParamLimits

0x7f39,	// (0x0003c3fe) popup_call_audio_in_window

0x7f5d,	// (0x0003c422) popup_call_audio_out_window_ParamLimits

0x7f5d,	// (0x0003c422) popup_call_audio_out_window

0x7f7f,	// (0x0003c444) popup_call_audio_second_window_ParamLimits

0x7f7f,	// (0x0003c444) popup_call_audio_second_window

0x7faf,	// (0x0003c474) popup_call_audio_wait_window_ParamLimits

0x7faf,	// (0x0003c474) popup_call_audio_wait_window

0x7fd0,	// (0x0003c495) popup_number_entry_window_ParamLimits

0x7fd0,	// (0x0003c495) popup_number_entry_window

0x1551,	// (0x00035a16) bg_popup_call_pane_cp05_ParamLimits

0x1551,	// (0x00035a16) bg_popup_call_pane_cp05

0x1571,	// (0x00035a36) popup_number_entry_window_t1

0x1584,	// (0x00035a49) popup_number_entry_window_t2

0x1596,	// (0x00035a5b) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000434e2) popup_number_entry_window_t

0x15a8,	// (0x00035a6d) text_title_cp2

0x15bb,	// (0x00035a80) bg_popup_call_pane_cp_ParamLimits

0x15bb,	// (0x00035a80) bg_popup_call_pane_cp

0x15c9,	// (0x00035a8e) call_thumbnail_pane

0x15d1,	// (0x00035a96) popup_call_audio_in_window_g1_ParamLimits

0x15d1,	// (0x00035a96) popup_call_audio_in_window_g1

0x15dd,	// (0x00035aa2) popup_call_audio_in_window_g2_ParamLimits

0x15dd,	// (0x00035aa2) popup_call_audio_in_window_g2

0x15e9,	// (0x00035aae) popup_call_audio_in_window_g3_ParamLimits

0x15e9,	// (0x00035aae) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000434eb) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000434eb) popup_call_audio_in_window_g

0x15f5,	// (0x00035aba) popup_call_audio_in_window_t1_ParamLimits

0x15f5,	// (0x00035aba) popup_call_audio_in_window_t1

0x1611,	// (0x00035ad6) popup_call_audio_in_window_t2_ParamLimits

0x1611,	// (0x00035ad6) popup_call_audio_in_window_t2

0x162d,	// (0x00035af2) popup_call_audio_in_window_t3_ParamLimits

0x162d,	// (0x00035af2) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000434f2) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000434f2) popup_call_audio_in_window_t

0x15bb,	// (0x00035a80) bg_popup_call_pane_cp01_ParamLimits

0x15bb,	// (0x00035a80) bg_popup_call_pane_cp01

0x15c9,	// (0x00035a8e) call_thumbnail_pane_cp02

0x1640,	// (0x00035b05) call_type_pane_cp022

0x1648,	// (0x00035b0d) popup_call_audio_out_window_g1_ParamLimits

0x1648,	// (0x00035b0d) popup_call_audio_out_window_g1

0x165a,	// (0x00035b1f) popup_call_audio_out_window_g2_ParamLimits

0x165a,	// (0x00035b1f) popup_call_audio_out_window_g2

0x1666,	// (0x00035b2b) popup_call_audio_out_window_g3_ParamLimits

0x1666,	// (0x00035b2b) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000434f9) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000434f9) popup_call_audio_out_window_g

0x1678,	// (0x00035b3d) popup_call_audio_out_window_t1_ParamLimits

0x1678,	// (0x00035b3d) popup_call_audio_out_window_t1

0x1690,	// (0x00035b55) popup_call_audio_out_window_t2_ParamLimits

0x1690,	// (0x00035b55) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00043500) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00043500) popup_call_audio_out_window_t

0x16a5,	// (0x00035b6a) bg_popup_call_pane_ParamLimits

0x16a5,	// (0x00035b6a) bg_popup_call_pane

0x57c9,	// (0x00039c8e) call_thumbnail_pane_cp_ParamLimits

0x57c9,	// (0x00039c8e) call_thumbnail_pane_cp

0x1729,	// (0x00035bee) call_type_pane_cp01_ParamLimits

0x1729,	// (0x00035bee) call_type_pane_cp01

0x176d,	// (0x00035c32) popup_call_audio_first_window_g1_ParamLimits

0x176d,	// (0x00035c32) popup_call_audio_first_window_g1

0x17b9,	// (0x00035c7e) popup_call_audio_first_window_g2_ParamLimits

0x17b9,	// (0x00035c7e) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00043505) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00043505) popup_call_audio_first_window_g

0x17fd,	// (0x00035cc2) popup_call_audio_first_window_t1_ParamLimits

0x17fd,	// (0x00035cc2) popup_call_audio_first_window_t1

0x18a9,	// (0x00035d6e) popup_call_audio_first_window_t4_ParamLimits

0x18a9,	// (0x00035d6e) popup_call_audio_first_window_t4

0x1935,	// (0x00035dfa) popup_call_audio_first_window_t5_ParamLimits

0x1935,	// (0x00035dfa) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0004350a) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0004350a) popup_call_audio_first_window_t

0x1964,	// (0x00035e29) bg_popup_call_pane_cp02

0x196e,	// (0x00035e33) call_type_pane_cp023

0x1976,	// (0x00035e3b) popup_call_audio_wait_window_g1

0x197e,	// (0x00035e43) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00043511) popup_call_audio_wait_window_g

0x1986,	// (0x00035e4b) popup_call_audio_wait_window_t3

0x1994,	// (0x00035e59) bg_popup_call_pane_cp03_ParamLimits

0x1994,	// (0x00035e59) bg_popup_call_pane_cp03

0x19f4,	// (0x00035eb9) call_thumbnail_pane_cp011_ParamLimits

0x19f4,	// (0x00035eb9) call_thumbnail_pane_cp011

0x1a00,	// (0x00035ec5) call_type_pane_cp034_ParamLimits

0x1a00,	// (0x00035ec5) call_type_pane_cp034

0x1a3c,	// (0x00035f01) popup_call_audio_second_window_g1_ParamLimits

0x1a3c,	// (0x00035f01) popup_call_audio_second_window_g1

0x1a78,	// (0x00035f3d) popup_call_audio_second_window_g2_ParamLimits

0x1a78,	// (0x00035f3d) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00043516) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00043516) popup_call_audio_second_window_g

0x1ab4,	// (0x00035f79) popup_call_audio_second_window_t1_ParamLimits

0x1ab4,	// (0x00035f79) popup_call_audio_second_window_t1

0x1b43,	// (0x00036008) popup_call_audio_second_window_t2_ParamLimits

0x1b43,	// (0x00036008) popup_call_audio_second_window_t2

0x1b79,	// (0x0003603e) popup_call_audio_second_window_t3_ParamLimits

0x1b79,	// (0x0003603e) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0004351b) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0004351b) popup_call_audio_second_window_t

0x1964,	// (0x00035e29) bg_popup_call_pane_cp04

0x1baf,	// (0x00036074) list_conf_pane

0x1bb7,	// (0x0003607c) popup_call_audio_conf_window_t1

0x1bc5,	// (0x0003608a) call_thumbnail_pane_g1

0x1bcd,	// (0x00036092) bg_pinb_pane_ParamLimits

0x1bcd,	// (0x00036092) bg_pinb_pane

0x1bdb,	// (0x000360a0) find_pinb_pane

0x1bcd,	// (0x00036092) listscroll_pinb_pane_ParamLimits

0x1bcd,	// (0x00036092) listscroll_pinb_pane

0x1be5,	// (0x000360aa) pinb_bg_pane_g1

0x1be5,	// (0x000360aa) pinb_bg_pane_g2

0x1be5,	// (0x000360aa) pinb_bg_pane_g3

0x1be5,	// (0x000360aa) pinb_bg_pane_g4

0x1be5,	// (0x000360aa) pinb_bg_pane_g5

0x1be5,	// (0x000360aa) pinb_bg_pane_g6

0x1be5,	// (0x000360aa) pinb_bg_pane_g7

0x1be5,	// (0x000360aa) pinb_bg_pane_g8

0x1be5,	// (0x000360aa) pinb_bg_pane_g9

0x1be5,	// (0x000360aa) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00043522) pinb_bg_pane_g

0x1547,	// (0x00035a0c) grid_pinb_pane

0x1547,	// (0x00035a0c) list_pinb_pane

0x1b35,	// (0x00035ffa) scroll_pane_cp01_ParamLimits

0x1b35,	// (0x00035ffa) scroll_pane_cp01

0x1bef,	// (0x000360b4) find_pinb_pane_g1_ParamLimits

0x1bef,	// (0x000360b4) find_pinb_pane_g1

0x1c07,	// (0x000360cc) find_pinb_pane_t1

0x1c19,	// (0x000360de) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0004353c) find_pinb_pane_t

0x1c2e,	// (0x000360f3) input_focus_pane_cp01_ParamLimits

0x1c2e,	// (0x000360f3) input_focus_pane_cp01

0x1c3a,	// (0x000360ff) cell_pinb_pane_ParamLimits

0x1c3a,	// (0x000360ff) cell_pinb_pane

0x1c48,	// (0x0003610d) cell_pinb_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) cell_pinb_pane_g1

0x1c56,	// (0x0003611b) cell_pinb_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) cell_pinb_pane_g2

0x1c56,	// (0x0003611b) cell_pinb_pane_g3_ParamLimits

0x1c56,	// (0x0003611b) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00043541) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00043541) cell_pinb_pane_g

0x1964,	// (0x00035e29) grid_highlight_pane_cp01

0x1c3a,	// (0x000360ff) list_pinb_item_pane_ParamLimits

0x1c3a,	// (0x000360ff) list_pinb_item_pane

0x1547,	// (0x00035a0c) list_highlight_pane_cp02

0x1c64,	// (0x00036129) list_pinb_item_pane_g1_ParamLimits

0x1c64,	// (0x00036129) list_pinb_item_pane_g1

0x1c56,	// (0x0003611b) list_pinb_item_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) list_pinb_item_pane_g2

0x1c48,	// (0x0003610d) list_pinb_item_pane_g3_ParamLimits

0x1c48,	// (0x0003610d) list_pinb_item_pane_g3

0x1c56,	// (0x0003611b) list_pinb_item_pane_g4_ParamLimits

0x1c56,	// (0x0003611b) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00043548) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00043548) list_pinb_item_pane_g

0x1c72,	// (0x00036137) list_pinb_item_pane_t1_ParamLimits

0x1c72,	// (0x00036137) list_pinb_item_pane_t1

0x5807,	// (0x00039ccc) calc_display_pane

0x5825,	// (0x00039cea) calc_paper_pane

0x5841,	// (0x00039d06) grid_calc_pane

0x1547,	// (0x00035a0c) bg_list_pane_cp01

0x1c86,	// (0x0003614b) clock_g1

0x1c86,	// (0x0003614b) clock_g2

0x0001,

0xf08c,	// (0x00043551) clock_g

0x1c90,	// (0x00036155) clock_t1_ParamLimits

0x1c90,	// (0x00036155) clock_t1

0x1ca4,	// (0x00036169) clock_t2_ParamLimits

0x1ca4,	// (0x00036169) clock_t2

0x1ca4,	// (0x00036169) clock_t3_ParamLimits

0x1ca4,	// (0x00036169) clock_t3

0x1ca4,	// (0x00036169) clock_t4_ParamLimits

0x1ca4,	// (0x00036169) clock_t4

0x1c90,	// (0x00036155) clock_t5_ParamLimits

0x1c90,	// (0x00036155) clock_t5

0x1ca4,	// (0x00036169) clock_t6_ParamLimits

0x1ca4,	// (0x00036169) clock_t6

0x1ca4,	// (0x00036169) clock_t7_ParamLimits

0x1ca4,	// (0x00036169) clock_t7

0x1ca4,	// (0x00036169) clock_t8_ParamLimits

0x1ca4,	// (0x00036169) clock_t8

0x1ca4,	// (0x00036169) clock_t9_ParamLimits

0x1ca4,	// (0x00036169) clock_t9

0x0008,

0xf091,	// (0x00043556) clock_t_ParamLimits

0xf091,	// (0x00043556) clock_t

0x1547,	// (0x00035a0c) popup_clock_analogue_window_cp02

0x1547,	// (0x00035a0c) popup_clock_digital_window_cp01

0x1964,	// (0x00035e29) listscroll_help_pane

0x1964,	// (0x00035e29) phob_pre_status_pane

0x1cb8,	// (0x0003617d) grid_qdial_pane

0x1bcd,	// (0x00036092) listscroll_mce_pane

0x1bcd,	// (0x00036092) bg_notes_pane

0x1cc2,	// (0x00036187) list_notes_pane

0x586d,	// (0x00039d32) scroll_pane_cp06

0x1cd0,	// (0x00036195) bg_calc_paper_pane

0x587c,	// (0x00039d41) list_calc_pane

0x1ce4,	// (0x000361a9) bg_calc_display_pane

0x5896,	// (0x00039d5b) calc_display_pane_t1

0x58ab,	// (0x00039d70) calc_display_pane_t2

0x58c0,	// (0x00039d85) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00043569) calc_display_pane_t

0x58d2,	// (0x00039d97) cell_calc_pane_ParamLimits

0x58d2,	// (0x00039d97) cell_calc_pane

0x1cf0,	// (0x000361b5) bg_calc_paper_pane_g1

0x1d08,	// (0x000361cd) bg_calc_paper_pane_g2

0x1cfc,	// (0x000361c1) bg_calc_paper_pane_g3

0x1d20,	// (0x000361e5) bg_calc_paper_pane_g4

0x1d14,	// (0x000361d9) bg_calc_paper_pane_g5

0x58ff,	// (0x00039dc4) bg_calc_paper_pane_g6

0x5910,	// (0x00039dd5) bg_calc_paper_pane_g7

0x5921,	// (0x00039de6) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00043570) bg_calc_paper_pane_g

0x5932,	// (0x00039df7) calc_bg_paper_pane_g9

0x5943,	// (0x00039e08) list_calc_item_pane_ParamLimits

0x5943,	// (0x00039e08) list_calc_item_pane

0x1d2c,	// (0x000361f1) list_calc_item_pane_g1

0x596f,	// (0x00039e34) list_calc_item_pane_t1_ParamLimits

0x596f,	// (0x00039e34) list_calc_item_pane_t1

0x5981,	// (0x00039e46) list_calc_item_pane_t2_ParamLimits

0x5981,	// (0x00039e46) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00043581) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00043581) list_calc_item_pane_t

0x1be5,	// (0x000360aa) cell_calc_pane_g1

0x1d39,	// (0x000361fe) grid_highlight_pane_cp02

0x59b1,	// (0x00039e76) bg_calc_display_pane_g1

0x59ba,	// (0x00039e7f) bg_calc_display_pane_g2

0x59c4,	// (0x00039e89) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0004358b) bg_calc_display_pane_g

0x59cd,	// (0x00039e92) cell_qdial_pane_ParamLimits

0x59cd,	// (0x00039e92) cell_qdial_pane

0x59e1,	// (0x00039ea6) cell_qdial_pane_g1_ParamLimits

0x59e1,	// (0x00039ea6) cell_qdial_pane_g1

0x59ee,	// (0x00039eb3) cell_qdial_pane_g2_ParamLimits

0x59ee,	// (0x00039eb3) cell_qdial_pane_g2

0x1d64,	// (0x00036229) cell_qdial_pane_g3_ParamLimits

0x1d64,	// (0x00036229) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00043592) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00043592) cell_qdial_pane_g

0x5a0c,	// (0x00039ed1) cell_qdial_pane_t1_ParamLimits

0x5a0c,	// (0x00039ed1) cell_qdial_pane_t1

0x5a24,	// (0x00039ee9) cell_qdial_pane_t2_ParamLimits

0x5a24,	// (0x00039ee9) cell_qdial_pane_t2

0x5a37,	// (0x00039efc) cell_qdial_pane_t3_ParamLimits

0x5a37,	// (0x00039efc) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0004359b) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0004359b) cell_qdial_pane_t

0x1964,	// (0x00035e29) grid_highlight_pane_cp04

0x1d70,	// (0x00036235) thumbnail_qdial_pane_ParamLimits

0x1d70,	// (0x00036235) thumbnail_qdial_pane

0x1dcc,	// (0x00036291) list_help_pane

0x1dd5,	// (0x0003629a) scroll_pane_cp02

0x5a4a,	// (0x00039f0f) help_list_pane_t1_ParamLimits

0x5a4a,	// (0x00039f0f) help_list_pane_t1

0x1e04,	// (0x000362c9) bg_notes_pane_g2

0x1dfc,	// (0x000362c1) bg_notes_pane_g3

0x1e0c,	// (0x000362d1) notes_bg_pane_g1

0x1e1c,	// (0x000362e1) notes_bg_pane_g4

0x1e14,	// (0x000362d9) notes_bg_pane_g5

0x1e24,	// (0x000362e9) notes_bg_pane_g6

0x1e2c,	// (0x000362f1) notes_bg_pane_g7

0x1e3c,	// (0x00036301) notes_bg_pane_g8

0x1e34,	// (0x000362f9) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x000435b9) notes_bg_pane_g

0x5a80,	// (0x00039f45) list_notes_text_pane_ParamLimits

0x5a80,	// (0x00039f45) list_notes_text_pane

0x1e44,	// (0x00036309) list_notes_text_pane_g1

0x4ac1,	// (0x00038f86) list_notes_text_pane_t1

0x5aab,	// (0x00039f70) listscroll_cale_week_pane

0x5ad0,	// (0x00039f95) bg_cale_heading_pane

0x1e5e,	// (0x00036323) bg_cale_pane_cp01

0x5af0,	// (0x00039fb5) cale_week_corner_pane

0x5b0a,	// (0x00039fcf) cale_week_day_heading_pane

0x5b2a,	// (0x00039fef) cale_week_scroll_pane_g1

0x5b45,	// (0x0003a00a) cale_week_scroll_pane_g2

0x5b58,	// (0x0003a01d) cale_week_scroll_pane_g3

0x5b6b,	// (0x0003a030) cale_week_scroll_pane_g4

0x5b7e,	// (0x0003a043) cale_week_scroll_pane_g5

0x5b91,	// (0x0003a056) cale_week_scroll_pane_g6

0x5ba4,	// (0x0003a069) cale_week_scroll_pane_g7

0x5bb9,	// (0x0003a07e) cale_week_scroll_pane_g8

0x5bce,	// (0x0003a093) cale_week_scroll_pane_g9

0x5be1,	// (0x0003a0a6) cale_week_scroll_pane_g10

0x5bf4,	// (0x0003a0b9) cale_week_scroll_pane_g11

0x5c07,	// (0x0003a0cc) cale_week_scroll_pane_g12

0x5c1e,	// (0x0003a0e3) cale_week_scroll_pane_g13

0x5c39,	// (0x0003a0fe) cale_week_scroll_pane_g14

0x5c54,	// (0x0003a119) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x000435c8) cale_week_scroll_pane_g

0x5c84,	// (0x0003a149) cale_week_time_pane

0x5c99,	// (0x0003a15e) grid_cale_week_pane

0x1e8d,	// (0x00036352) scroll_pane_cp08

0x5cb8,	// (0x0003a17d) cell_cale_week_pane_ParamLimits

0x5cb8,	// (0x0003a17d) cell_cale_week_pane

0x5d1a,	// (0x0003a1df) cale_week_day_heading_pane_t1

0x5d35,	// (0x0003a1fa) cale_week_day_heading_pane_t2

0x5d50,	// (0x0003a215) cale_week_day_heading_pane_t3

0x5d6b,	// (0x0003a230) cale_week_day_heading_pane_t4

0x5d86,	// (0x0003a24b) cale_week_day_heading_pane_t5

0x5da1,	// (0x0003a266) cale_week_day_heading_pane_t6

0x5dbc,	// (0x0003a281) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x000435e9) cale_week_day_heading_pane_t

0x1eaa,	// (0x0003636f) bg_cale_side_pane

0x5dd7,	// (0x0003a29c) cale_week_time_pane_t1

0x5df1,	// (0x0003a2b6) cale_week_time_pane_t2

0x5e0b,	// (0x0003a2d0) cale_week_time_pane_t3

0x5e25,	// (0x0003a2ea) cale_week_time_pane_t4

0x5e3f,	// (0x0003a304) cale_week_time_pane_t5

0x5e59,	// (0x0003a31e) cale_week_time_pane_t6

0x5e77,	// (0x0003a33c) cale_week_time_pane_t7

0x5e99,	// (0x0003a35e) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x000435f8) cale_week_time_pane_t

0x5ebd,	// (0x0003a382) cell_cale_week_pane_g2

0x5ee1,	// (0x0003a3a6) cell_cale_week_pane_g3_ParamLimits

0x5ee1,	// (0x0003a3a6) cell_cale_week_pane_g3

0x1eb8,	// (0x0003637d) grid_highlight_pane_cp07

0x1ec0,	// (0x00036385) listscroll_gms_pane

0x1eca,	// (0x0003638f) grid_gms_pane

0x1ed3,	// (0x00036398) listscroll_gms_pane_g1

0x1edb,	// (0x000363a0) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00043609) listscroll_gms_pane_g

0x5ef9,	// (0x0003a3be) scroll_pane_cp010

0x5f04,	// (0x0003a3c9) cell_gms_pane_ParamLimits

0x5f04,	// (0x0003a3c9) cell_gms_pane

0x5f17,	// (0x0003a3dc) cell_gms_pane_g1

0x1ee3,	// (0x000363a8) cell_gms_pane_g2

0x1e44,	// (0x00036309) cell_gms_pane_g3

0x1eeb,	// (0x000363b0) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0004360e) cell_gms_pane_g

0x1ef4,	// (0x000363b9) grid_highlight_pane_cp09

0x7e6d,	// (0x0003c332) phob_pre_status_pane_g1

0x7e75,	// (0x0003c33a) phob_pre_status_pane_g2

0x7e7d,	// (0x0003c342) phob_pre_status_pane_g3

0x7e85,	// (0x0003c34a) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x000439b4) phob_pre_status_pane_g

0x7e95,	// (0x0003c35a) phob_pre_status_pane_t1

0x7ea5,	// (0x0003c36a) phob_pre_status_pane_t2

0x7eb5,	// (0x0003c37a) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x000439bf) phob_pre_status_pane_t

0x1efc,	// (0x000363c1) bg_list_pane_cp05

0x5f27,	// (0x0003a3ec) grid_vorec_pane

0x5f31,	// (0x0003a3f6) vorec_t1

0x5f3f,	// (0x0003a404) vorec_t2

0x5f4d,	// (0x0003a412) vorec_t3

0x5f5b,	// (0x0003a420) vorec_t4

0xc5ce,	// (0x00040a93) vorec_t5

0xc5dc,	// (0x00040aa1) vorec_t6

0x0004,

0xf152,	// (0x00043617) vorec_t

0xc5ea,	// (0x00040aaf) wait_bar_pane_cp01

0x5f77,	// (0x0003a43c) cell_vorec_pane_ParamLimits

0x5f77,	// (0x0003a43c) cell_vorec_pane

0x5f8a,	// (0x0003a44f) cell_vorec_pane_g1

0x1964,	// (0x00035e29) grid_highlight_pane_cp05

0x1c3a,	// (0x000360ff) cams_zoom_pane

0x1c3a,	// (0x000360ff) image_vga_pane

0x1c56,	// (0x0003611b) main_camera_pane_g1

0x1c56,	// (0x0003611b) main_camera_pane_g2

0x1c56,	// (0x0003611b) main_camera_pane_g3

0x1c56,	// (0x0003611b) main_camera_pane_g4

0x1c56,	// (0x0003611b) main_camera_pane_g5

0x1c56,	// (0x0003611b) main_camera_pane_g6

0x1c56,	// (0x0003611b) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00043622) main_camera_pane_g

0x1ca4,	// (0x00036169) main_camera_pane_t1

0x1ca4,	// (0x00036169) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00043633) main_camera_pane_t

0x5f94,	// (0x0003a459) cams_zoom_pane_cp_ParamLimits

0x5f94,	// (0x0003a459) cams_zoom_pane_cp

0x5fc2,	// (0x0003a487) image_cif_pane_ParamLimits

0x5fc2,	// (0x0003a487) image_cif_pane

0x1547,	// (0x00035a0c) image_subqcif_pane

0x5fd0,	// (0x0003a495) main_video_pane_g1_ParamLimits

0x5fd0,	// (0x0003a495) main_video_pane_g1

0x5ff8,	// (0x0003a4bd) main_video_pane_g2_ParamLimits

0x5ff8,	// (0x0003a4bd) main_video_pane_g2

0x602b,	// (0x0003a4f0) main_video_pane_g3_ParamLimits

0x602b,	// (0x0003a4f0) main_video_pane_g3

0x602b,	// (0x0003a4f0) main_video_pane_g4_ParamLimits

0x602b,	// (0x0003a4f0) main_video_pane_g4

0x6059,	// (0x0003a51e) main_video_pane_g5_ParamLimits

0x6059,	// (0x0003a51e) main_video_pane_g5

0x1f04,	// (0x000363c9) main_video_pane_g6_ParamLimits

0x1f04,	// (0x000363c9) main_video_pane_g6

0x0006,

0xf173,	// (0x00043638) main_video_pane_g_ParamLimits

0xf173,	// (0x00043638) main_video_pane_g

0x6075,	// (0x0003a53a) main_video_pane_t1_ParamLimits

0x6075,	// (0x0003a53a) main_video_pane_t1

0x1c86,	// (0x0003614b) cams_zoom_pane_g1

0x1c86,	// (0x0003614b) cams_zoom_pane_g2

0x1c86,	// (0x0003614b) cams_zoom_pane_g3

0x1c86,	// (0x0003614b) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00043647) cams_zoom_pane_g

0x1c3a,	// (0x000360ff) grid_cams_pane

0x1c3a,	// (0x000360ff) linegrid_cams_pane

0x60af,	// (0x0003a574) cell_cams_pane_ParamLimits

0x60af,	// (0x0003a574) cell_cams_pane

0x1547,	// (0x00035a0c) cams_burst_image_pane

0x1c86,	// (0x0003614b) cell_cams_pane_g1

0x1547,	// (0x00035a0c) grid_highlight_pane_cp03

0x1be5,	// (0x000360aa) mp_bg_pane_g1

0x1547,	// (0x00035a0c) bg_list_pane_cp03

0x1547,	// (0x00035a0c) bg_mp_pane

0x1547,	// (0x00035a0c) grid_mp_pane

0x1c86,	// (0x0003614b) media_player_g1

0x2402,	// (0x000368c7) media_player_t1

0x2402,	// (0x000368c7) media_player_t2

0x2402,	// (0x000368c7) media_player_t3

0x2402,	// (0x000368c7) media_player_t4

0x2402,	// (0x000368c7) media_player_t5

0x2402,	// (0x000368c7) media_player_t6

0x2402,	// (0x000368c7) media_player_t7

0x0006,

0xf4d9,	// (0x0004399e) media_player_t

0x1547,	// (0x00035a0c) wait_bar_pane_cp02

0xf4be,	// (0x00043983) main_usb_pane_t

0x266d,	// (0x00036b32) cell_mp_pane

0x1be5,	// (0x000360aa) cell_mp_pane_g1

0x1964,	// (0x00035e29) grid_highlight_pane_cp06

0x1f1e,	// (0x000363e3) grid_skin_colour_pane

0x1f26,	// (0x000363eb) list_highlight_pane_cp03

0x60c4,	// (0x0003a589) skin_g1

0x1f2e,	// (0x000363f3) skin_t1

0x1f3d,	// (0x00036402) skin_t2

0x0001,

0xf1b0,	// (0x00043675) skin_t

0x60ce,	// (0x0003a593) cell_skin_colour_pane_ParamLimits

0x60ce,	// (0x0003a593) cell_skin_colour_pane

0x1f4b,	// (0x00036410) cell_skin_colour_pane_g1

0x6152,	// (0x0003a617) call_video_g1_ParamLimits

0x6152,	// (0x0003a617) call_video_g1

0x6162,	// (0x0003a627) call_video_g2_ParamLimits

0x6162,	// (0x0003a627) call_video_g2

0x0001,

0xf1b5,	// (0x0004367a) call_video_g_ParamLimits

0xf1b5,	// (0x0004367a) call_video_g

0x61bc,	// (0x0003a681) call_video_uplink_pane_cp1_ParamLimits

0x61bc,	// (0x0003a681) call_video_uplink_pane_cp1

0x1f5d,	// (0x00036422) call_video_uplink_pane_cp2

0x6288,	// (0x0003a74d) video_down_crop_pane_ParamLimits

0x6288,	// (0x0003a74d) video_down_crop_pane

0x6386,	// (0x0003a84b) video_down_pane_ParamLimits

0x6386,	// (0x0003a84b) video_down_pane

0x1f65,	// (0x0003642a) video_down_subqcif_pane_ParamLimits

0x1f65,	// (0x0003642a) video_down_subqcif_pane

0x1f7d,	// (0x00036442) video_down_subqcif_pane_cp_ParamLimits

0x1f7d,	// (0x00036442) video_down_subqcif_pane_cp

0x1fa3,	// (0x00036468) im_reading_pane_ParamLimits

0x1fa3,	// (0x00036468) im_reading_pane

0x64a6,	// (0x0003a96b) im_writing_pane_ParamLimits

0x64a6,	// (0x0003a96b) im_writing_pane

0x64c4,	// (0x0003a989) im_reading_pane_t1

0x1fbd,	// (0x00036482) list_im_pane

0x1fce,	// (0x00036493) scroll_pane_cp07

0x6518,	// (0x0003a9dd) im_writing_pane_t1_ParamLimits

0x6518,	// (0x0003a9dd) im_writing_pane_t1

0x1fe7,	// (0x000364ac) im_writing_pane_t2_ParamLimits

0x1fe7,	// (0x000364ac) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00043684) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00043684) im_writing_pane_t

0x1964,	// (0x00035e29) input_focus_pane_cp04

0x1964,	// (0x00035e29) input_focus_pane_cp05

0x652d,	// (0x0003a9f2) list_im_single_pane_ParamLimits

0x652d,	// (0x0003a9f2) list_im_single_pane

0x6551,	// (0x0003aa16) list_single_im_pane_t1

0x1efc,	// (0x000363c1) blid_accuracy_pane

0x1efc,	// (0x000363c1) blid_compass_pane

0x3b12,	// (0x00037fd7) main_location_t1

0x3b12,	// (0x00037fd7) main_location_t2

0x3b12,	// (0x00037fd7) main_location_t3

0x0002,

0xf4e8,	// (0x000439ad) main_location_t

0x1964,	// (0x00035e29) aid_levels_location

0x1be5,	// (0x000360aa) blid_accuracy_pane_g1

0x1be5,	// (0x000360aa) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x000436d8) blid_accuracy_pane_g

0x202f,	// (0x000364f4) wml_content_pane

0x206d,	// (0x00036532) wml_button_pane_ParamLimits

0x206d,	// (0x00036532) wml_button_pane

0x6560,	// (0x0003aa25) wml_list_single_large_pane_ParamLimits

0x6560,	// (0x0003aa25) wml_list_single_large_pane

0x658a,	// (0x0003aa4f) wml_list_single_medium_pane_ParamLimits

0x658a,	// (0x0003aa4f) wml_list_single_medium_pane

0x65bb,	// (0x0003aa80) wml_list_single_small_pane_ParamLimits

0x65bb,	// (0x0003aa80) wml_list_single_small_pane

0x2081,	// (0x00036546) wml_selection_box_pane_ParamLimits

0x2081,	// (0x00036546) wml_selection_box_pane

0x2094,	// (0x00036559) wml_list_single_pane_t1

0x20a3,	// (0x00036568) wml_list_single_medium_pane_t1

0x20b2,	// (0x00036577) wml_list_single_large_pane_t1

0x20c1,	// (0x00036586) input_focus_pane_cp02_ParamLimits

0x20c1,	// (0x00036586) input_focus_pane_cp02

0x20d4,	// (0x00036599) wml_selection_box_pane_g1

0x20dd,	// (0x000365a2) wml_selection_box_pane_t1_ParamLimits

0x20dd,	// (0x000365a2) wml_selection_box_pane_t1

0x1bcd,	// (0x00036092) bg_wml_button_pane_ParamLimits

0x1bcd,	// (0x00036092) bg_wml_button_pane

0x20fe,	// (0x000365c3) wml_button_pane_g1

0x2106,	// (0x000365cb) wml_button_pane_t1

0x20fe,	// (0x000365c3) wml_button_bg_pane_g1

0x2116,	// (0x000365db) wml_button_bg_pane_g2

0x211e,	// (0x000365e3) wml_button_bg_pane_g3

0x2126,	// (0x000365eb) wml_button_bg_pane_g4

0x212e,	// (0x000365f3) wml_button_bg_pane_g5

0x2136,	// (0x000365fb) wml_button_bg_pane_g6

0x213e,	// (0x00036603) wml_button_bg_pane_g7

0x2146,	// (0x0003660b) wml_button_bg_pane_g8

0x214e,	// (0x00036613) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00043689) wml_button_bg_pane_g

0x65f5,	// (0x0003aaba) bg_list_pane_cp02

0x2156,	// (0x0003661b) mce_header_pane_ParamLimits

0x2156,	// (0x0003661b) mce_header_pane

0x216c,	// (0x00036631) mce_icon_pane

0x216c,	// (0x00036631) mce_image_pane

0x2175,	// (0x0003663a) mce_text_pane_ParamLimits

0x2175,	// (0x0003663a) mce_text_pane

0x65ff,	// (0x0003aac4) scroll_pane_cp03

0x2065,	// (0x0003652a) scroll_pane_cp04

0x2188,	// (0x0003664d) scroll_pane_cp05_ParamLimits

0x2188,	// (0x0003664d) scroll_pane_cp05

0x6609,	// (0x0003aace) mce_header_field_pane_ParamLimits

0x6609,	// (0x0003aace) mce_header_field_pane

0x6629,	// (0x0003aaee) mce_header_field_pane_2_ParamLimits

0x6629,	// (0x0003aaee) mce_header_field_pane_2

0x663f,	// (0x0003ab04) mce_header_field_pane_3

0x6647,	// (0x0003ab0c) list_single_mce_message_pane_ParamLimits

0x6647,	// (0x0003ab0c) list_single_mce_message_pane

0x6672,	// (0x0003ab37) list_single_mce_smart_pane_ParamLimits

0x6672,	// (0x0003ab37) list_single_mce_smart_pane

0x2194,	// (0x00036659) input_focus_pane_cp03

0x219d,	// (0x00036662) list_header_data_pane

0x66a8,	// (0x0003ab6d) mce_header_field_pane_t1

0x66b6,	// (0x0003ab7b) list_single_mce_header_pane_ParamLimits

0x66b6,	// (0x0003ab7b) list_single_mce_header_pane

0x21a5,	// (0x0003666a) list_single_mce_header_pane_t1

0x21b4,	// (0x00036679) list_single_mce_message_pane_g1

0x21bc,	// (0x00036681) list_single_mce_message_pane_t1

0x6708,	// (0x0003abcd) bg_cale_heading_pane_cp01_ParamLimits

0x6708,	// (0x0003abcd) bg_cale_heading_pane_cp01

0x21ca,	// (0x0003668f) bg_cale_pane_cp02_ParamLimits

0x21ca,	// (0x0003668f) bg_cale_pane_cp02

0x6756,	// (0x0003ac1b) cale_month_corner_pane

0x6775,	// (0x0003ac3a) cale_month_day_heading_pane_ParamLimits

0x6775,	// (0x0003ac3a) cale_month_day_heading_pane

0x67db,	// (0x0003aca0) cale_month_pane_g1_ParamLimits

0x67db,	// (0x0003aca0) cale_month_pane_g1

0x681e,	// (0x0003ace3) cale_month_pane_g2_ParamLimits

0x681e,	// (0x0003ace3) cale_month_pane_g2

0x6856,	// (0x0003ad1b) cale_month_pane_g3_ParamLimits

0x6856,	// (0x0003ad1b) cale_month_pane_g3

0x68a2,	// (0x0003ad67) cale_month_pane_g4_ParamLimits

0x68a2,	// (0x0003ad67) cale_month_pane_g4

0x68ee,	// (0x0003adb3) cale_month_pane_g5_ParamLimits

0x68ee,	// (0x0003adb3) cale_month_pane_g5

0x693a,	// (0x0003adff) cale_month_pane_g6_ParamLimits

0x693a,	// (0x0003adff) cale_month_pane_g6

0x6986,	// (0x0003ae4b) cale_month_pane_g7_ParamLimits

0x6986,	// (0x0003ae4b) cale_month_pane_g7

0x69ea,	// (0x0003aeaf) cale_month_pane_g8_ParamLimits

0x69ea,	// (0x0003aeaf) cale_month_pane_g8

0x6a4e,	// (0x0003af13) cale_month_pane_g9_ParamLimits

0x6a4e,	// (0x0003af13) cale_month_pane_g9

0x6aac,	// (0x0003af71) cale_month_pane_g10_ParamLimits

0x6aac,	// (0x0003af71) cale_month_pane_g10

0x6b08,	// (0x0003afcd) cale_month_pane_g11_ParamLimits

0x6b08,	// (0x0003afcd) cale_month_pane_g11

0x6b5c,	// (0x0003b021) cale_month_pane_g12_ParamLimits

0x6b5c,	// (0x0003b021) cale_month_pane_g12

0x6bb2,	// (0x0003b077) cale_month_pane_g13_ParamLimits

0x6bb2,	// (0x0003b077) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0004369c) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0004369c) cale_month_pane_g

0x6c08,	// (0x0003b0cd) cale_month_week_pane

0x6c2c,	// (0x0003b0f1) grid_cale_month_pane_ParamLimits

0x6c2c,	// (0x0003b0f1) grid_cale_month_pane

0x6c85,	// (0x0003b14a) cale_month_day_heading_pane_t1

0x6d0b,	// (0x0003b1d0) cale_month_day_heading_pane_t2

0x6d84,	// (0x0003b249) cale_month_day_heading_pane_t3

0x6dfd,	// (0x0003b2c2) cale_month_day_heading_pane_t4

0x6e76,	// (0x0003b33b) cale_month_day_heading_pane_t5

0x6eef,	// (0x0003b3b4) cale_month_day_heading_pane_t6

0x6f68,	// (0x0003b42d) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x000436b7) cale_month_day_heading_pane_t

0x1eaa,	// (0x0003636f) bg_cale_side_pane_cp01

0x6ff9,	// (0x0003b4be) cale_month_week_pane_t1

0x7012,	// (0x0003b4d7) cale_month_week_pane_t2

0x702b,	// (0x0003b4f0) cale_month_week_pane_t3

0x7044,	// (0x0003b509) cale_month_week_pane_t4

0x705d,	// (0x0003b522) cale_month_week_pane_t5

0x707e,	// (0x0003b543) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x000436c6) cale_month_week_pane_t

0x709f,	// (0x0003b564) cell_cale_month_pane_ParamLimits

0x709f,	// (0x0003b564) cell_cale_month_pane

0x71c1,	// (0x0003b686) cell_cale_month_pane_g1

0x71cd,	// (0x0003b692) cell_cale_month_pane_t1_ParamLimits

0x71cd,	// (0x0003b692) cell_cale_month_pane_t1

0x1eb8,	// (0x0003637d) grid_highlight_pane_cp08

0x1be5,	// (0x000360aa) main_smil_g1

0x71f9,	// (0x0003b6be) smil_status_pane

0x2209,	// (0x000366ce) smil_text_pane

0x1e3c,	// (0x00036301) bg_popup_call3_rect_pane_g8

0x1e34,	// (0x000362f9) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x000436dd) bg_popup_call3_rect_pane_g

0x3bee,	// (0x000380b3) smil_status_volume_pane_g1

0x2213,	// (0x000366d8) smil_status_pane_t1

0x820c,	// (0x0003c6d1) volume_smil_pane

0x222a,	// (0x000366ef) list_smil_text_pane

0x720c,	// (0x0003b6d1) scroll_pane_cp011

0x7217,	// (0x0003b6dc) smil_text_list_pane_t1_ParamLimits

0x7217,	// (0x0003b6dc) smil_text_list_pane_t1

0x728f,	// (0x0003b754) aid_volume_smil_ParamLimits

0x728f,	// (0x0003b754) aid_volume_smil

0x1be5,	// (0x000360aa) smil_volume_pane_g1

0x1be5,	// (0x000360aa) smil_volume_pane_g2

0x0001,

0xf213,	// (0x000436d8) smil_volume_pane_g

0x5aab,	// (0x00039f70) listscroll_cale_day_pane

0x2234,	// (0x000366f9) bg_cale_pane

0x224c,	// (0x00036711) list_cale_pane

0x226f,	// (0x00036734) scroll_pane_cp09

0x1e0c,	// (0x000362d1) cale_bg_pane_g1

0x1e04,	// (0x000362c9) cale_bg_pane_g2

0x1dfc,	// (0x000362c1) cale_bg_pane_g3

0x1e1c,	// (0x000362e1) cale_bg_pane_g4

0x1e14,	// (0x000362d9) cale_bg_pane_g5

0x1e24,	// (0x000362e9) cale_bg_pane_g6

0x1e2c,	// (0x000362f1) cale_bg_pane_g7

0x1e3c,	// (0x00036301) cale_bg_pane_g8

0x1e34,	// (0x000362f9) cale_bg_pane_g9

0x0008,

0xf218,	// (0x000436dd) cale_bg_pane_g

0x72b1,	// (0x0003b776) list_cale_time_pane_ParamLimits

0x72b1,	// (0x0003b776) list_cale_time_pane

0x2288,	// (0x0003674d) list_cale_time_pane_g1_ParamLimits

0x2288,	// (0x0003674d) list_cale_time_pane_g1

0x2294,	// (0x00036759) list_cale_time_pane_g2_ParamLimits

0x2294,	// (0x00036759) list_cale_time_pane_g2

0x72d3,	// (0x0003b798) list_cale_time_pane_g3_ParamLimits

0x72d3,	// (0x0003b798) list_cale_time_pane_g3

0x72e1,	// (0x0003b7a6) list_cale_time_pane_g4_ParamLimits

0x72e1,	// (0x0003b7a6) list_cale_time_pane_g4

0x72ef,	// (0x0003b7b4) list_cale_time_pane_g5_ParamLimits

0x72ef,	// (0x0003b7b4) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x000436f0) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x000436f0) list_cale_time_pane_g

0x22ae,	// (0x00036773) list_cale_time_pane_t1_ParamLimits

0x22ae,	// (0x00036773) list_cale_time_pane_t1

0x22d6,	// (0x0003679b) list_cale_time_pane_t2_ParamLimits

0x22d6,	// (0x0003679b) list_cale_time_pane_t2

0x7592,	// (0x0003ba57) aid_blid_cardinal_pane

0x75d4,	// (0x0003ba99) compass_pane_t4

0x22fe,	// (0x000367c3) list_cale_time_pane_t4_ParamLimits

0x22fe,	// (0x000367c3) list_cale_time_pane_t4

0x75e2,	// (0x0003baa7) compass_pane_t5

0x75f2,	// (0x0003bab7) compass_pane_t6

0x7600,	// (0x0003bac5) compass_pane_t7

0x27b2,	// (0x00036c77) navi_pane_cc_t1

0x298f,	// (0x00036e54) aid_phob_thumbnail_center_pane

0x79b7,	// (0x0003be7c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x000436fd) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x000436fd) list_cale_time_pane_t

0x15bb,	// (0x00035a80) bg_popup_window_pane_cp02_ParamLimits

0x15bb,	// (0x00035a80) bg_popup_window_pane_cp02

0x2326,	// (0x000367eb) heading_pane_cp01_ParamLimits

0x2326,	// (0x000367eb) heading_pane_cp01

0x2332,	// (0x000367f7) loc_req_pane_ParamLimits

0x2332,	// (0x000367f7) loc_req_pane

0x2344,	// (0x00036809) loc_type_pane_ParamLimits

0x2344,	// (0x00036809) loc_type_pane

0x2356,	// (0x0003681b) loc_type_pane_t1_ParamLimits

0x2356,	// (0x0003681b) loc_type_pane_t1

0x2368,	// (0x0003682d) loc_type_pane_t2_ParamLimits

0x2368,	// (0x0003682d) loc_type_pane_t2

0x237a,	// (0x0003683f) loc_type_pane_t3_ParamLimits

0x237a,	// (0x0003683f) loc_type_pane_t3

0x0002,

0xf23f,	// (0x00043704) loc_type_pane_t_ParamLimits

0xf23f,	// (0x00043704) loc_type_pane_t

0x238c,	// (0x00036851) list_loc_req_pane

0x2396,	// (0x0003685b) scroll_pane_cp012

0x72fd,	// (0x0003b7c2) list_single_loc_request_popup_menu_pane_ParamLimits

0x72fd,	// (0x0003b7c2) list_single_loc_request_popup_menu_pane

0x23a1,	// (0x00036866) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x23a1,	// (0x00036866) list_single_loc_request_popup_menu_pane_g1

0x23ad,	// (0x00036872) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x23ad,	// (0x00036872) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x0004370b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x0004370b) list_single_loc_request_popup_menu_pane_g

0x23b9,	// (0x0003687e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x23b9,	// (0x0003687e) list_single_loc_request_popup_menu_pane_t1

0x730f,	// (0x0003b7d4) bg_popup_window_pane_cp03_ParamLimits

0x730f,	// (0x0003b7d4) bg_popup_window_pane_cp03

0x731d,	// (0x0003b7e2) heading_loc_req_pane_ParamLimits

0x731d,	// (0x0003b7e2) heading_loc_req_pane

0x7329,	// (0x0003b7ee) popup_dyc_status_message_window_g1_ParamLimits

0x7329,	// (0x0003b7ee) popup_dyc_status_message_window_g1

0x7335,	// (0x0003b7fa) popup_dyc_status_message_window_t1_ParamLimits

0x7335,	// (0x0003b7fa) popup_dyc_status_message_window_t1

0x7347,	// (0x0003b80c) popup_dyc_status_message_window_t2_ParamLimits

0x7347,	// (0x0003b80c) popup_dyc_status_message_window_t2

0x7359,	// (0x0003b81e) popup_dyc_status_message_window_t3_ParamLimits

0x7359,	// (0x0003b81e) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x00043710) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x00043710) popup_dyc_status_message_window_t

0x1964,	// (0x00035e29) bg_heading_pane_cp01

0x23db,	// (0x000368a0) heading_loc_req_pane_g1

0x23e3,	// (0x000368a8) heading_loc_req_pane_g2

0x23eb,	// (0x000368b0) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x00043717) heading_loc_req_pane_g

0x23f3,	// (0x000368b8) heading_loc_req_pane_t1

0x2412,	// (0x000368d7) bg_popup_sub_pane_cp01_ParamLimits

0x2412,	// (0x000368d7) bg_popup_sub_pane_cp01

0x2420,	// (0x000368e5) popup_cale_events_window_g1_ParamLimits

0x2420,	// (0x000368e5) popup_cale_events_window_g1

0x2440,	// (0x00036905) popup_cale_events_window_g2_ParamLimits

0x2440,	// (0x00036905) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x00043739) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x00043739) popup_cale_events_window_g

0x2460,	// (0x00036925) popup_cale_events_window_t1_ParamLimits

0x2460,	// (0x00036925) popup_cale_events_window_t1

0x2472,	// (0x00036937) popup_cale_events_window_t2_ParamLimits

0x2472,	// (0x00036937) popup_cale_events_window_t2

0x24b0,	// (0x00036975) popup_cale_events_window_t3_ParamLimits

0x24b0,	// (0x00036975) popup_cale_events_window_t3

0x24ea,	// (0x000369af) popup_cale_events_window_t4_ParamLimits

0x24ea,	// (0x000369af) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x0004373e) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x0004373e) popup_cale_events_window_t

0x7383,	// (0x0003b848) call_type_pane

0x3233,	// (0x000376f8) popup_call_status_window_g1

0x738f,	// (0x0003b854) popup_call_status_window_g2

0x739b,	// (0x0003b860) popup_call_status_window_g3

0x0002,

0xf282,	// (0x00043747) popup_call_status_window_g

0x2520,	// (0x000369e5) call_type_pane_g1

0x2529,	// (0x000369ee) call_type_pane_g2

0x0001,

0xf289,	// (0x0004374e) call_type_pane_g

0x1964,	// (0x00035e29) bg_popup_sub_pane_cp02

0x2532,	// (0x000369f7) listscroll_popup_wml_pane

0x253a,	// (0x000369ff) list_wml_pane

0x2544,	// (0x00036a09) scroll_pane_cp013

0x254f,	// (0x00036a14) list_single_graphic_popup_wml_pane_ParamLimits

0x254f,	// (0x00036a14) list_single_graphic_popup_wml_pane

0x1be5,	// (0x000360aa) list_single_graphic_popup_wml_pane_g1

0x2563,	// (0x00036a28) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00043753) list_single_graphic_popup_wml_pane_g

0x256b,	// (0x00036a30) list_single_graphic_popup_wml_pane_t1

0x2579,	// (0x00036a3e) aid_call_pane

0x1bc5,	// (0x0003608a) popup_clock_analogue_window_g1

0x1bc5,	// (0x0003608a) popup_clock_analogue_window_g2

0x73a7,	// (0x0003b86c) popup_clock_analogue_window_g3

0x73a7,	// (0x0003b86c) popup_clock_analogue_window_g4

0x1be5,	// (0x000360aa) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x00043758) popup_clock_analogue_window_g

0x73af,	// (0x0003b874) popup_clock_analogue_window_t1

0x73bd,	// (0x0003b882) clock_digital_number_pane_ParamLimits

0x73bd,	// (0x0003b882) clock_digital_number_pane

0x73c9,	// (0x0003b88e) clock_digital_number_pane_cp02_ParamLimits

0x73c9,	// (0x0003b88e) clock_digital_number_pane_cp02

0x73d5,	// (0x0003b89a) clock_digital_number_pane_cp03_ParamLimits

0x73d5,	// (0x0003b89a) clock_digital_number_pane_cp03

0x73e1,	// (0x0003b8a6) clock_digital_number_pane_cp04_ParamLimits

0x73e1,	// (0x0003b8a6) clock_digital_number_pane_cp04

0x73f1,	// (0x0003b8b6) clock_digital_separator_pane_ParamLimits

0x73f1,	// (0x0003b8b6) clock_digital_separator_pane

0x73fd,	// (0x0003b8c2) popup_clock_digital_window_t1

0x1be5,	// (0x000360aa) clock_digital_number_pane_g1

0x1be5,	// (0x000360aa) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x000436d8) clock_digital_number_pane_g

0x1be5,	// (0x000360aa) clock_digital_separator_pane_g1

0x1be5,	// (0x000360aa) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x000436d8) clock_digital_separator_pane_g

0x1964,	// (0x00035e29) bg_popup_window_pane_cp04

0x2589,	// (0x00036a4e) heading_pane_cp03

0x1efc,	// (0x000363c1) listscroll_popup_gms_pane

0x1964,	// (0x00035e29) grid_large_graphic_popup_pane

0x2591,	// (0x00036a56) listscroll_popup_gms_pane_g1

0x259a,	// (0x00036a5f) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00043763) listscroll_popup_gms_pane_g

0x25a3,	// (0x00036a68) scroll_pane_cp014

0x1c3a,	// (0x000360ff) cell_large_graphic_popup_pane_ParamLimits

0x1c3a,	// (0x000360ff) cell_large_graphic_popup_pane

0x1c48,	// (0x0003610d) cell_large_graphic_popup_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) cell_large_graphic_popup_pane_g1

0x25ac,	// (0x00036a71) cell_large_graphic_popup_pane_g2_ParamLimits

0x25ac,	// (0x00036a71) cell_large_graphic_popup_pane_g2

0x25ba,	// (0x00036a7f) cell_large_graphic_popup_pane_g3_ParamLimits

0x25ba,	// (0x00036a7f) cell_large_graphic_popup_pane_g3

0x25c8,	// (0x00036a8d) cell_large_graphic_popup_pane_g4_ParamLimits

0x25c8,	// (0x00036a8d) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00043768) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00043768) cell_large_graphic_popup_pane_g

0x1964,	// (0x00035e29) grid_highlight_pane_cp010

0x1be5,	// (0x000360aa) bg_popup_call_pane_g1

0x25d9,	// (0x00036a9e) list_single_graphic_popup_conf_pane_ParamLimits

0x25d9,	// (0x00036a9e) list_single_graphic_popup_conf_pane

0x25ec,	// (0x00036ab1) list_highlight_pane_cp01

0x25f5,	// (0x00036aba) list_single_graphic_popup_conf_pane_g1

0x25fd,	// (0x00036ac2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x00043771) list_single_graphic_popup_conf_pane_g

0x2605,	// (0x00036aca) list_single_graphic_popup_conf_pane_t1

0x2613,	// (0x00036ad8) linegrid_cams_pane_g1

0x741a,	// (0x0003b8df) linegrid_cams_pane_g2

0x1e44,	// (0x00036309) linegrid_cams_pane_g3

0x261c,	// (0x00036ae1) linegrid_cams_pane_g4

0x7423,	// (0x0003b8e8) linegrid_cams_pane_g5

0x742c,	// (0x0003b8f1) linegrid_cams_pane_g6

0x1eeb,	// (0x000363b0) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00043776) linegrid_cams_pane_g

0x2625,	// (0x00036aea) popup_clock_analogue_window

0x2625,	// (0x00036aea) popup_clock_digital_window

0x1964,	// (0x00035e29) popup_phob_thumbnail_window

0x1be5,	// (0x000360aa) call_video_uplink_pane_g1

0x262e,	// (0x00036af3) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00043785) call_video_uplink_pane_g

0x2636,	// (0x00036afb) video_uplink_pane

0x263e,	// (0x00036b03) mce_image_pane_g1

0x7435,	// (0x0003b8fa) mce_image_pane_g2

0x743f,	// (0x0003b904) mce_image_pane_g3

0x7447,	// (0x0003b90c) mce_image_pane_g4

0x744f,	// (0x0003b914) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x0004378a) mce_image_pane_g

0x2648,	// (0x00036b0d) control_top_pane_stacon_cp01_ParamLimits

0x2648,	// (0x00036b0d) control_top_pane_stacon_cp01

0x265c,	// (0x00036b21) uni_indicator_pane_stacon_cp01_ParamLimits

0x265c,	// (0x00036b21) uni_indicator_pane_stacon_cp01

0x266d,	// (0x00036b32) bg_popup_sub_pane_cp03

0x2677,	// (0x00036b3c) chi_dic_find_pane

0x7457,	// (0x0003b91c) listscroll_chi_dic_pane

0x267f,	// (0x00036b44) main_pane_chidic_g1

0x2687,	// (0x00036b4c) chi_dic_find_pane_t1

0x2695,	// (0x00036b5a) find_chidic_pane

0x269e,	// (0x00036b63) chi_dic_list_pane_ParamLimits

0x269e,	// (0x00036b63) chi_dic_list_pane

0x26af,	// (0x00036b74) scroll_pane_cp020

0x26b7,	// (0x00036b7c) find_chidic_pane_t1

0x1964,	// (0x00035e29) input_focus_pane_cp06

0x746b,	// (0x0003b930) list_chi_dic_pane_ParamLimits

0x746b,	// (0x0003b930) list_chi_dic_pane

0x7485,	// (0x0003b94a) list_chi_dic_pane_t1_ParamLimits

0x7485,	// (0x0003b94a) list_chi_dic_pane_t1

0x1964,	// (0x00035e29) list_highlight_pane_cp020

0x26c6,	// (0x00036b8b) bg_cale_heading_pane_g1

0x7498,	// (0x0003b95d) bg_cale_heading_pane_g2

0x74a0,	// (0x0003b965) bg_cale_heading_pane_g3

0x74a8,	// (0x0003b96d) bg_cale_heading_pane_g4

0x74b2,	// (0x0003b977) bg_cale_heading_pane_g5

0x74bc,	// (0x0003b981) bg_cale_heading_pane_g6

0x74c4,	// (0x0003b989) bg_cale_heading_pane_g7

0x74cc,	// (0x0003b991) bg_cale_heading_pane_g8

0x74d6,	// (0x0003b99b) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00043795) bg_cale_heading_pane_g

0x26c6,	// (0x00036b8b) bg_cale_side_pane_g1

0x74e0,	// (0x0003b9a5) bg_cale_side_pane_g2

0x74ea,	// (0x0003b9af) bg_cale_side_pane_g3

0x74f4,	// (0x0003b9b9) bg_cale_side_pane_g4

0x74fe,	// (0x0003b9c3) bg_cale_side_pane_g5

0x7508,	// (0x0003b9cd) bg_cale_side_pane_g6

0x7512,	// (0x0003b9d7) bg_cale_side_pane_g7

0x751c,	// (0x0003b9e1) bg_cale_side_pane_g8

0x7524,	// (0x0003b9e9) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x000437a8) bg_cale_side_pane_g

0x752c,	// (0x0003b9f1) popup_call_status_window_ParamLimits

0x752c,	// (0x0003b9f1) popup_call_status_window

0x26ce,	// (0x00036b93) stacon_top_pane

0x26d6,	// (0x00036b9b) status_pane_ParamLimits

0x26d6,	// (0x00036b9b) status_pane

0x26eb,	// (0x00036bb0) status_small_pane

0x26f3,	// (0x00036bb8) control_pane

0x1964,	// (0x00035e29) stacon_bottom_pane

0x26fb,	// (0x00036bc0) list_single_mce_smart_pane_t1_ParamLimits

0x26fb,	// (0x00036bc0) list_single_mce_smart_pane_t1

0x270e,	// (0x00036bd3) list_single_mce_smart_pane_t2_ParamLimits

0x270e,	// (0x00036bd3) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x000437bb) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x000437bb) list_single_mce_smart_pane_t

0x7538,	// (0x0003b9fd) compass_pane

0x7544,	// (0x0003ba09) main_location2_pane_t1

0x7558,	// (0x0003ba1d) main_location2_pane_t2

0x756c,	// (0x0003ba31) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x000437c0) main_location2_pane_t

0x272d,	// (0x00036bf2) compass_pane_g1_ParamLimits

0x272d,	// (0x00036bf2) compass_pane_g1

0x75b6,	// (0x0003ba7b) compass_pane_t1

0x75c5,	// (0x0003ba8a) compass_pane_t2

0x0005,

0xf304,	// (0x000437c9) compass_pane_t

0x7610,	// (0x0003bad5) text_secondary_cp61

0x27a9,	// (0x00036c6e) navi_pane_cams_g5

0x2825,	// (0x00036cea) navi_pane_im_t1

0x2833,	// (0x00036cf8) navi_pane_mp_g1_ParamLimits

0x2833,	// (0x00036cf8) navi_pane_mp_g1

0x2847,	// (0x00036d0c) navi_pane_mp_g2_ParamLimits

0x2847,	// (0x00036d0c) navi_pane_mp_g2

0x2853,	// (0x00036d18) navi_pane_mp_g3_ParamLimits

0x2853,	// (0x00036d18) navi_pane_mp_g3

0x0002,

0xf318,	// (0x000437dd) navi_pane_mp_g_ParamLimits

0xf318,	// (0x000437dd) navi_pane_mp_g

0x285f,	// (0x00036d24) navi_pane_mp_t1

0x286d,	// (0x00036d32) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x000437e4) navi_pane_mp_t

0x28d8,	// (0x00036d9d) navi_pane_vt_g1

0x285f,	// (0x00036d24) navi_pane_vt_t1

0x28e0,	// (0x00036da5) navi_slider_pane

0x1efc,	// (0x000363c1) zooming_pane

0x28f0,	// (0x00036db5) navi_slider_pane_g1

0x764b,	// (0x0003bb10) navi_slider_pane_g2

0x0006,

0xf326,	// (0x000437eb) navi_slider_pane_g

0x2914,	// (0x00036dd9) aid_levels_zoom

0x291c,	// (0x00036de1) zooming_pane_g1

0x2924,	// (0x00036de9) zooming_pane_g2

0x2924,	// (0x00036de9) zooming_pane_g3

0x0002,

0xf335,	// (0x000437fa) zooming_pane_g

0x292c,	// (0x00036df1) level_10_zoom

0x2935,	// (0x00036dfa) level_11_zoom

0x293e,	// (0x00036e03) level_1_zoom

0x2947,	// (0x00036e0c) level_2_zoom

0x2950,	// (0x00036e15) level_3_zoom

0x2959,	// (0x00036e1e) level_4_zoom

0x2962,	// (0x00036e27) level_5_zoom

0x296b,	// (0x00036e30) level_6_zoom

0x2974,	// (0x00036e39) level_7_zoom

0x297d,	// (0x00036e42) level_8_zoom

0x2986,	// (0x00036e4b) level_9_zoom

0x2997,	// (0x00036e5c) popup_phob_thumbnail_window_g1

0x299f,	// (0x00036e64) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00043801) popup_phob_thumbnail_window_g

0x7ec5,	// (0x0003c38a) level_1_location

0x7ecd,	// (0x0003c392) level_2_location

0x7ed5,	// (0x0003c39a) level_3_location

0x7edf,	// (0x0003c3a4) level_4_location

0x1efc,	// (0x000363c1) level_5_location

0x765d,	// (0x0003bb22) mce_icon_pane_g1

0x7665,	// (0x0003bb2a) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00043806) mce_icon_pane_g

0x766d,	// (0x0003bb32) main_mup_pane_g1_ParamLimits

0x766d,	// (0x0003bb32) main_mup_pane_g1

0x1c64,	// (0x00036129) main_mup_pane_g2_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g2

0x1c64,	// (0x00036129) main_mup_pane_g3_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g3

0x1c64,	// (0x00036129) main_mup_pane_g4_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g4

0x1c64,	// (0x00036129) main_mup_pane_g5_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g5

0x1c64,	// (0x00036129) main_mup_pane_g6_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g6

0x1c64,	// (0x00036129) main_mup_pane_g7_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g7

0x1c64,	// (0x00036129) main_mup_pane_g8_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g8

0x1c64,	// (0x00036129) main_mup_pane_g9_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g9

0x1c64,	// (0x00036129) main_mup_pane_g10_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g10

0x1c64,	// (0x00036129) main_mup_pane_g11_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g11

0x1c56,	// (0x0003611b) main_mup_pane_g12_ParamLimits

0x1c56,	// (0x0003611b) main_mup_pane_g12

0x1c64,	// (0x00036129) main_mup_pane_g13_ParamLimits

0x1c64,	// (0x00036129) main_mup_pane_g13

0x000c,

0xf346,	// (0x0004380b) main_mup_pane_g_ParamLimits

0xf346,	// (0x0004380b) main_mup_pane_g

0x1c72,	// (0x00036137) main_mup_pane_t1_ParamLimits

0x1c72,	// (0x00036137) main_mup_pane_t1

0x1c72,	// (0x00036137) main_mup_pane_t2_ParamLimits

0x1c72,	// (0x00036137) main_mup_pane_t2

0x1c72,	// (0x00036137) main_mup_pane_t3_ParamLimits

0x1c72,	// (0x00036137) main_mup_pane_t3

0x1ca4,	// (0x00036169) main_mup_pane_t4_ParamLimits

0x1ca4,	// (0x00036169) main_mup_pane_t4

0x1ca4,	// (0x00036169) main_mup_pane_t5_ParamLimits

0x1ca4,	// (0x00036169) main_mup_pane_t5

0x1c90,	// (0x00036155) main_mup_pane_t6_ParamLimits

0x1c90,	// (0x00036155) main_mup_pane_t6

0x0005,

0xf361,	// (0x00043826) main_mup_pane_t_ParamLimits

0xf361,	// (0x00043826) main_mup_pane_t

0x1b35,	// (0x00035ffa) mup_progress_pane_ParamLimits

0x1b35,	// (0x00035ffa) mup_progress_pane

0xd300,	// (0x000417c5) mup_visualizer_pane_ParamLimits

0xd300,	// (0x000417c5) mup_visualizer_pane

0xd300,	// (0x000417c5) mup_volume_pane_ParamLimits

0xd300,	// (0x000417c5) mup_volume_pane

0x1c56,	// (0x0003611b) mup_visualizer_pane_g1_ParamLimits

0x1c56,	// (0x0003611b) mup_visualizer_pane_g1

0x29d7,	// (0x00036e9c) mup_visualizer_pane_g2_ParamLimits

0x29d7,	// (0x00036e9c) mup_visualizer_pane_g2

0x1c48,	// (0x0003610d) mup_visualizer_pane_g3_ParamLimits

0x1c48,	// (0x0003610d) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00043833) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00043833) mup_visualizer_pane_g

0x1c86,	// (0x0003614b) mup_volume_pane_g1

0x1c86,	// (0x0003614b) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00043551) mup_volume_pane_g

0x1c86,	// (0x0003614b) mup_progress_pane_g1

0x1c86,	// (0x0003614b) mup_progress_pane_g2

0x1c86,	// (0x0003614b) mup_progress_pane_g3

0x0002,

0xf375,	// (0x0004383a) mup_progress_pane_g

0x1964,	// (0x00035e29) bg_popup_window_pane_cp05

0x29e5,	// (0x00036eaa) heading_pane_cp02_ParamLimits

0x29e5,	// (0x00036eaa) heading_pane_cp02

0x29ff,	// (0x00036ec4) list_popup_blid_pane

0x2a07,	// (0x00036ecc) list_blid_sat_info_pane_ParamLimits

0x2a07,	// (0x00036ecc) list_blid_sat_info_pane

0x2a1a,	// (0x00036edf) list_blid_sat_info_pane_g1

0x2a22,	// (0x00036ee7) list_blid_sat_info_pane_t1

0x776a,	// (0x0003bc2f) mup_equalizer_pane_ParamLimits

0x776a,	// (0x0003bc2f) mup_equalizer_pane

0x778b,	// (0x0003bc50) mup_equalizer_pane_cp1_ParamLimits

0x778b,	// (0x0003bc50) mup_equalizer_pane_cp1

0x77ac,	// (0x0003bc71) mup_equalizer_pane_cp2_ParamLimits

0x77ac,	// (0x0003bc71) mup_equalizer_pane_cp2

0x77cd,	// (0x0003bc92) mup_equalizer_pane_cp3_ParamLimits

0x77cd,	// (0x0003bc92) mup_equalizer_pane_cp3

0x77ee,	// (0x0003bcb3) mup_equalizer_pane_cp4_ParamLimits

0x77ee,	// (0x0003bcb3) mup_equalizer_pane_cp4

0x780f,	// (0x0003bcd4) mup_equalizer_pane_cp5

0x7825,	// (0x0003bcea) mup_equalizer_pane_cp6

0x783d,	// (0x0003bd02) mup_equalizer_pane_cp7

0x3ab2,	// (0x00037f77) bg_popup_call_poc_act_pane_g9

0x3aba,	// (0x00037f7f) bg_popup_call_poc_act_pane_g10

0x3ac2,	// (0x00037f87) bg_popup_call_poc_act_pane_g11

0x000a,

0x1bcd,	// (0x00036092) mup_scale_pane

0x1be5,	// (0x000360aa) mup_scale_pane_g1

0x2a30,	// (0x00036ef5) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00043856) mup_scale_pane_g

0x2a54,	// (0x00036f19) msg_data_pane

0x2a5c,	// (0x00036f21) scroll_pane_cp017

0x4acf,	// (0x00038f94) bg_list_pane_cp04_ParamLimits

0x4acf,	// (0x00038f94) bg_list_pane_cp04

0x2a64,	// (0x00036f29) msg_data_pane_g1

0x7867,	// (0x0003bd2c) msg_data_pane_g2

0x7871,	// (0x0003bd36) msg_data_pane_g3

0x7879,	// (0x0003bd3e) msg_data_pane_g4

0x7881,	// (0x0003bd46) msg_data_pane_g5

0x7889,	// (0x0003bd4e) msg_data_pane_g6

0x7891,	// (0x0003bd56) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00043865) msg_data_pane_g

0x4af3,	// (0x00038fb8) msg_text_pane_ParamLimits

0x4af3,	// (0x00038fb8) msg_text_pane

0x7899,	// (0x0003bd5e) qrid_highlight_pane_cp011_ParamLimits

0x7899,	// (0x0003bd5e) qrid_highlight_pane_cp011

0x1964,	// (0x00035e29) msg_body_pane

0x1bcd,	// (0x00036092) msg_header_pane

0x4b53,	// (0x00039018) input_focus_pane_cp07

0x4b74,	// (0x00039039) msg_header_pane_t1_ParamLimits

0x4b74,	// (0x00039039) msg_header_pane_t1

0x4b90,	// (0x00039055) msg_header_pane_t2_ParamLimits

0x4b90,	// (0x00039055) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00043879) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00043879) msg_header_pane_t

0x2aa1,	// (0x00036f66) msg_body_pane_g1

0x4bb0,	// (0x00039075) msg_body_pane_t1_ParamLimits

0x4bb0,	// (0x00039075) msg_body_pane_t1

0x4be1,	// (0x000390a6) msg_body_pane_t2_ParamLimits

0x4be1,	// (0x000390a6) msg_body_pane_t2

0x4bf3,	// (0x000390b8) msg_body_pane_t3_ParamLimits

0x4bf3,	// (0x000390b8) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x0004387e) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x0004387e) msg_body_pane_t

0x7907,	// (0x0003bdcc) main_viewer_pane_g1_ParamLimits

0x7907,	// (0x0003bdcc) main_viewer_pane_g1

0x7913,	// (0x0003bdd8) main_viewer_pane_g2_ParamLimits

0x7913,	// (0x0003bdd8) main_viewer_pane_g2

0x791f,	// (0x0003bde4) main_viewer_pane_g3_ParamLimits

0x791f,	// (0x0003bde4) main_viewer_pane_g3

0x7930,	// (0x0003bdf5) main_viewer_pane_g4_ParamLimits

0x7930,	// (0x0003bdf5) main_viewer_pane_g4

0x7941,	// (0x0003be06) main_viewer_pane_g5_ParamLimits

0x7941,	// (0x0003be06) main_viewer_pane_g5

0x7941,	// (0x0003be06) main_viewer_pane_g7_ParamLimits

0x7941,	// (0x0003be06) main_viewer_pane_g7

0x7953,	// (0x0003be18) main_viewer_pane_g8_ParamLimits

0x7953,	// (0x0003be18) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x0004388e) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x0004388e) main_viewer_pane_g

0x2aa9,	// (0x00036f6e) viewer_content_pane_ParamLimits

0x2aa9,	// (0x00036f6e) viewer_content_pane

0x798b,	// (0x0003be50) main_postcard_pane_g1_ParamLimits

0x798b,	// (0x0003be50) main_postcard_pane_g1

0x7999,	// (0x0003be5e) main_postcard_pane_g2_ParamLimits

0x7999,	// (0x0003be5e) main_postcard_pane_g2

0x79a7,	// (0x0003be6c) main_postcard_pane_g3_ParamLimits

0x79a7,	// (0x0003be6c) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x0004389f) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x0004389f) main_postcard_pane_g

0x79b7,	// (0x0003be7c) main_postcard_pane_g4

0x3bdb,	// (0x000380a0) smil_status_volume_pane_g2

0x79e3,	// (0x0003bea8) postcard_pane_ParamLimits

0x79e3,	// (0x0003bea8) postcard_pane

0x3233,	// (0x000376f8) postcard_pane_g1_ParamLimits

0x3233,	// (0x000376f8) postcard_pane_g1

0x7a15,	// (0x0003beda) postcard_pane_g2_ParamLimits

0x7a15,	// (0x0003beda) postcard_pane_g2

0x7a21,	// (0x0003bee6) postcard_pane_g3_ParamLimits

0x7a21,	// (0x0003bee6) postcard_pane_g3

0x2ac5,	// (0x00036f8a) postcard_pane_g4_ParamLimits

0x2ac5,	// (0x00036f8a) postcard_pane_g4

0x7a2d,	// (0x0003bef2) postcard_pane_g5_ParamLimits

0x7a2d,	// (0x0003bef2) postcard_pane_g5

0x7a39,	// (0x0003befe) postcard_pane_g6_ParamLimits

0x7a39,	// (0x0003befe) postcard_pane_g6

0x2ab7,	// (0x00036f7c) postcard_pane_g7_ParamLimits

0x2ab7,	// (0x00036f7c) postcard_pane_g7

0x0006,

0xf3e7,	// (0x000438ac) postcard_pane_g_ParamLimits

0xf3e7,	// (0x000438ac) postcard_pane_g

0x7a45,	// (0x0003bf0a) main_mp2_pane_g1_ParamLimits

0x7a45,	// (0x0003bf0a) main_mp2_pane_g1

0x7a51,	// (0x0003bf16) main_mp2_pane_g2_ParamLimits

0x7a51,	// (0x0003bf16) main_mp2_pane_g2

0x7a5d,	// (0x0003bf22) main_mp2_pane_g3_ParamLimits

0x7a5d,	// (0x0003bf22) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x000438bb) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x000438bb) main_mp2_pane_g

0x7a69,	// (0x0003bf2e) main_mp2_pane_t1_ParamLimits

0x7a69,	// (0x0003bf2e) main_mp2_pane_t1

0x7a80,	// (0x0003bf45) main_mp2_pane_t2_ParamLimits

0x7a80,	// (0x0003bf45) main_mp2_pane_t2

0x7a94,	// (0x0003bf59) main_mp2_pane_t3_ParamLimits

0x7a94,	// (0x0003bf59) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x000438c2) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x000438c2) main_mp2_pane_t

0x1b35,	// (0x00035ffa) pec_content_pane_ParamLimits

0x1b35,	// (0x00035ffa) pec_content_pane

0x1547,	// (0x00035a0c) scroll_pane_cp015

0x29c9,	// (0x00036e8e) pec_attribute_pane_ParamLimits

0x29c9,	// (0x00036e8e) pec_attribute_pane

0x1c48,	// (0x0003610d) pec_content_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) pec_content_pane_g1

0x2ad3,	// (0x00036f98) pec_content_pane_t1_ParamLimits

0x2ad3,	// (0x00036f98) pec_content_pane_t1

0x2ae7,	// (0x00036fac) pec_content_pane_t2_ParamLimits

0x2ae7,	// (0x00036fac) pec_content_pane_t2

0x0001,

0xf404,	// (0x000438c9) pec_content_pane_t_ParamLimits

0xf404,	// (0x000438c9) pec_content_pane_t

0x1c3a,	// (0x000360ff) list_single_graphic_pane_cp01_ParamLimits

0x1c3a,	// (0x000360ff) list_single_graphic_pane_cp01

0x1bcd,	// (0x00036092) bg_popup_sub_pane_cp04

0x2afb,	// (0x00036fc0) popup_mup_playback_window_g1

0x2b07,	// (0x00036fcc) popup_mup_playback_window_t1

0x2b1c,	// (0x00036fe1) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x000438ce) popup_mup_playback_window_t

0x2b53,	// (0x00037018) main_image_pane_g1_ParamLimits

0x2b53,	// (0x00037018) main_image_pane_g1

0x2b96,	// (0x0003705b) scroll_pane_cp018_ParamLimits

0x2b96,	// (0x0003705b) scroll_pane_cp018

0x2bae,	// (0x00037073) scroll_pane_cp016_ParamLimits

0x2bae,	// (0x00037073) scroll_pane_cp016

0x7b17,	// (0x0003bfdc) smil2_image_pane_ParamLimits

0x7b17,	// (0x0003bfdc) smil2_image_pane

0x7b47,	// (0x0003c00c) smil2_root_pane_ParamLimits

0x7b47,	// (0x0003c00c) smil2_root_pane

0x7b73,	// (0x0003c038) smil2_text_pane_ParamLimits

0x7b73,	// (0x0003c038) smil2_text_pane

0x1547,	// (0x00035a0c) bg_list_pane_cp06

0x1547,	// (0x00035a0c) grid_radio_pane

0x1964,	// (0x00035e29) bg_popup_window_pane_cp06

0x2402,	// (0x000368c7) main_fmradio_pane_t1

0x2589,	// (0x00036a4e) heading_pane_cp04

0x2402,	// (0x000368c7) main_fmradio_pane_t2

0x3aca,	// (0x00037f8f) popup_cale_lunar_info_window_g1

0x2402,	// (0x000368c7) main_fmradio_pane_t3

0x3ad2,	// (0x00037f97) popup_cale_lunar_info_window_g2

0x2402,	// (0x000368c7) main_fmradio_pane_t4

0x0001,

0x2402,	// (0x000368c7) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x00043990) popup_cale_lunar_info_window_g

0xf269,	// (0x0004372e) main_fmradio_pane_t

0x1547,	// (0x00035a0c) wait_bar_pane_cp03

0x1c3a,	// (0x000360ff) cell_fmradio_pane_ParamLimits

0x1c3a,	// (0x000360ff) cell_fmradio_pane

0x1c48,	// (0x0003610d) cell_fmradio_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) cell_fmradio_pane_g1

0x1547,	// (0x00035a0c) grid_highlight_pane_cp011

0x2be2,	// (0x000370a7) poc_content_pane_ParamLimits

0x2be2,	// (0x000370a7) poc_content_pane

0x2bf4,	// (0x000370b9) scroll_pane_cp019

0x7bb3,	// (0x0003c078) popup_call_poc_act_window_ParamLimits

0x7bb3,	// (0x0003c078) popup_call_poc_act_window

0x7bc0,	// (0x0003c085) popup_call_poc_inact_window_ParamLimits

0x7bc0,	// (0x0003c085) popup_call_poc_inact_window

0xf4a2,	// (0x00043967) bg_popup_call_poc_act_pane_g

0x3a42,	// (0x00037f07) bg_popup_call_poc_inact_pane_g1

0x3a4a,	// (0x00037f0f) bg_popup_call_poc_inact_pane_g2

0x2bfc,	// (0x000370c1) popup_call_poc_act_window_g2

0x3a52,	// (0x00037f17) bg_popup_call_poc_inact_pane_g3

0x3a5a,	// (0x00037f1f) bg_popup_call_poc_inact_pane_g4

0x3a62,	// (0x00037f27) bg_popup_call_poc_inact_pane_g5

0x2c04,	// (0x000370c9) popup_call_poc_act_window_t1_ParamLimits

0x2c04,	// (0x000370c9) popup_call_poc_act_window_t1

0x2c2c,	// (0x000370f1) popup_call_poc_act_window_t2_ParamLimits

0x2c2c,	// (0x000370f1) popup_call_poc_act_window_t2

0x2c54,	// (0x00037119) popup_call_poc_act_window_t3_ParamLimits

0x2c54,	// (0x00037119) popup_call_poc_act_window_t3

0x2c7c,	// (0x00037141) popup_call_poc_act_window_t4_ParamLimits

0x2c7c,	// (0x00037141) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x000438e3) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x000438e3) popup_call_poc_act_window_t

0x3a6a,	// (0x00037f2f) bg_popup_call_poc_inact_pane_g6

0x3a72,	// (0x00037f37) bg_popup_call_poc_inact_pane_g7

0x3a7a,	// (0x00037f3f) bg_popup_call_poc_inact_pane_g8

0x2c8e,	// (0x00037153) popup_call_poc_inact_window_g2

0x3a82,	// (0x00037f47) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x00043954) bg_popup_call_poc_inact_pane_g

0x2c96,	// (0x0003715b) popup_call_poc_inact_window_t1_ParamLimits

0x2c96,	// (0x0003715b) popup_call_poc_inact_window_t1

0x2cab,	// (0x00037170) popup_call_poc_inact_window_t2_ParamLimits

0x2cab,	// (0x00037170) popup_call_poc_inact_window_t2

0x2cc0,	// (0x00037185) popup_call_poc_inact_window_t3_ParamLimits

0x2cc0,	// (0x00037185) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x000438ec) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x000438ec) popup_call_poc_inact_window_t

0x3b66,	// (0x0003802b) context_pane_ParamLimits

0x81c3,	// (0x0003c688) signal_pane_ParamLimits

0x1efc,	// (0x000363c1) main_call2_pane

0x8136,	// (0x0003c5fb) popup_phob_thumbnail2_window_ParamLimits

0x8136,	// (0x0003c5fb) popup_phob_thumbnail2_window

0x78b5,	// (0x0003bd7a) aid_hotspot_pointer_arrow_pane

0x78bd,	// (0x0003bd82) aid_hotspot_pointer_hand_pane

0x7e8d,	// (0x0003c352) phob_pre_status_pane_g5

0x1c3a,	// (0x000360ff) cams_zoom_pane_ParamLimits

0x1c3a,	// (0x000360ff) image_vga_pane_ParamLimits

0x1c56,	// (0x0003611b) main_camera_pane_g1_ParamLimits

0x1c56,	// (0x0003611b) main_camera_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) main_camera_pane_g3_ParamLimits

0x1c56,	// (0x0003611b) main_camera_pane_g4_ParamLimits

0x1c56,	// (0x0003611b) main_camera_pane_g5_ParamLimits

0x1c56,	// (0x0003611b) main_camera_pane_g6_ParamLimits

0x1c56,	// (0x0003611b) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00043622) main_camera_pane_g_ParamLimits

0x1ca4,	// (0x00036169) main_camera_pane_t1_ParamLimits

0x1ca4,	// (0x00036169) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00043633) main_camera_pane_t_ParamLimits

0x1bcd,	// (0x00036092) bg_popup_preview_window_pane_cp01_ParamLimits

0x1bcd,	// (0x00036092) bg_popup_preview_window_pane_cp01

0x2cd5,	// (0x0003719a) popup_phob_thumbnail2_window_g1_ParamLimits

0x2cd5,	// (0x0003719a) popup_phob_thumbnail2_window_g1

0x1964,	// (0x00035e29) call2_cli_visual_pane

0x7bdc,	// (0x0003c0a1) popup_call2_audio_conf_window_ParamLimits

0x7bdc,	// (0x0003c0a1) popup_call2_audio_conf_window

0x7bf1,	// (0x0003c0b6) popup_call2_audio_first_window_ParamLimits

0x7bf1,	// (0x0003c0b6) popup_call2_audio_first_window

0x7c8f,	// (0x0003c154) popup_call2_audio_in_window_ParamLimits

0x7c8f,	// (0x0003c154) popup_call2_audio_in_window

0x7cd1,	// (0x0003c196) popup_call2_audio_out_window_ParamLimits

0x7cd1,	// (0x0003c196) popup_call2_audio_out_window

0x7d33,	// (0x0003c1f8) popup_call2_audio_second_window_ParamLimits

0x7d33,	// (0x0003c1f8) popup_call2_audio_second_window

0x7d91,	// (0x0003c256) popup_call2_audio_wait_window_ParamLimits

0x7d91,	// (0x0003c256) popup_call2_audio_wait_window

0x1964,	// (0x00035e29) bg_popup_call2_act_pane_cp03

0x1baf,	// (0x00036074) list_conf_pane_cp

0x2ce1,	// (0x000371a6) popup_call2_audio_conf_window_t1

0x25d9,	// (0x00036a9e) list_single_graphic_popup_conf2_pane_ParamLimits

0x25d9,	// (0x00036a9e) list_single_graphic_popup_conf2_pane

0x25ec,	// (0x00036ab1) list_highlight_pane_cp04

0x2cef,	// (0x000371b4) list_single_graphic_popup_conf2_pane_g1

0x25fd,	// (0x00036ac2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x000438f3) list_single_graphic_popup_conf2_pane_g

0x2cf9,	// (0x000371be) list_single_graphic_popup_conf2_pane_t1

0x2d07,	// (0x000371cc) bg_popup_call2_act_pane_cp01_ParamLimits

0x2d07,	// (0x000371cc) bg_popup_call2_act_pane_cp01

0x2d91,	// (0x00037256) call_type_pane_cp05_ParamLimits

0x2d91,	// (0x00037256) call_type_pane_cp05

0x2de5,	// (0x000372aa) popup_call2_audio_second_window_g1_ParamLimits

0x2de5,	// (0x000372aa) popup_call2_audio_second_window_g1

0x2e39,	// (0x000372fe) popup_call2_audio_second_window_g2_ParamLimits

0x2e39,	// (0x000372fe) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x000438f8) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x000438f8) popup_call2_audio_second_window_g

0x2e9e,	// (0x00037363) popup_call2_audio_second_window_t1_ParamLimits

0x2e9e,	// (0x00037363) popup_call2_audio_second_window_t1

0x2f59,	// (0x0003741e) popup_call2_audio_second_window_t2_ParamLimits

0x2f59,	// (0x0003741e) popup_call2_audio_second_window_t2

0x2fac,	// (0x00037471) popup_call2_audio_second_window_t3_ParamLimits

0x2fac,	// (0x00037471) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x000438ff) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x000438ff) popup_call2_audio_second_window_t

0x1964,	// (0x00035e29) bg_popup_call2_in_pane_cp02

0x196e,	// (0x00035e33) call_type_pane_cp04

0x7dd0,	// (0x0003c295) popup_call2_audio_wait_window_g1

0x7dd8,	// (0x0003c29d) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00043908) popup_call2_audio_wait_window_g

0x1986,	// (0x00035e4b) popup_call2_audio_wait_window_t3

0x309f,	// (0x00037564) bg_popup_call2_act_pane_ParamLimits

0x309f,	// (0x00037564) bg_popup_call2_act_pane

0x315f,	// (0x00037624) call_type_pane_cp03_ParamLimits

0x315f,	// (0x00037624) call_type_pane_cp03

0x31c3,	// (0x00037688) popup_call2_audio_first_window_g1_ParamLimits

0x31c3,	// (0x00037688) popup_call2_audio_first_window_g1

0x3241,	// (0x00037706) popup_call2_audio_first_window_g2_ParamLimits

0x3241,	// (0x00037706) popup_call2_audio_first_window_g2

0x3233,	// (0x000376f8) popup_call2_audio_first_window_g3_ParamLimits

0x3233,	// (0x000376f8) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x0004390d) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x0004390d) popup_call2_audio_first_window_g

0x331f,	// (0x000377e4) popup_call2_audio_first_window_t1_ParamLimits

0x331f,	// (0x000377e4) popup_call2_audio_first_window_t1

0x3422,	// (0x000378e7) popup_call2_audio_first_window_t4_ParamLimits

0x3422,	// (0x000378e7) popup_call2_audio_first_window_t4

0x3505,	// (0x000379ca) popup_call2_audio_first_window_t5_ParamLimits

0x3505,	// (0x000379ca) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00043918) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00043918) popup_call2_audio_first_window_t

0x1bc5,	// (0x0003608a) bg_popup_call2_act_pane_g1

0x3ada,	// (0x00037f9f) popup_cale_lunar_info_window_t1

0x3ae8,	// (0x00037fad) popup_cale_lunar_info_window_t2

0x3af6,	// (0x00037fbb) popup_cale_lunar_info_window_t3

0x1964,	// (0x00035e29) bg_popup_call2_bubble_pane

0x3606,	// (0x00037acb) bg_popup_call2_in_pane_cp01_ParamLimits

0x3606,	// (0x00037acb) bg_popup_call2_in_pane_cp01

0x1640,	// (0x00035b05) call_type_pane_cp02

0x7de0,	// (0x0003c2a5) popup_call2_audio_out_window_g1_ParamLimits

0x7de0,	// (0x0003c2a5) popup_call2_audio_out_window_g1

0x364e,	// (0x00037b13) popup_call2_audio_out_window_g2_ParamLimits

0x364e,	// (0x00037b13) popup_call2_audio_out_window_g2

0x7e0c,	// (0x0003c2d1) popup_call2_audio_out_window_g3_ParamLimits

0x7e0c,	// (0x0003c2d1) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00043921) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00043921) popup_call2_audio_out_window_g

0x3685,	// (0x00037b4a) popup_call2_audio_out_window_t1_ParamLimits

0x3685,	// (0x00037b4a) popup_call2_audio_out_window_t1

0x36e4,	// (0x00037ba9) popup_call2_audio_out_window_t2_ParamLimits

0x36e4,	// (0x00037ba9) popup_call2_audio_out_window_t2

0x3738,	// (0x00037bfd) popup_call2_audio_out_window_t3_ParamLimits

0x3738,	// (0x00037bfd) popup_call2_audio_out_window_t3

0x374e,	// (0x00037c13) popup_call2_audio_out_window_t4_ParamLimits

0x374e,	// (0x00037c13) popup_call2_audio_out_window_t4

0x3764,	// (0x00037c29) popup_call2_audio_out_window_t5_ParamLimits

0x3764,	// (0x00037c29) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x0004392a) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x0004392a) popup_call2_audio_out_window_t

0x37c8,	// (0x00037c8d) bg_popup_call2_in_pane_ParamLimits

0x37c8,	// (0x00037c8d) bg_popup_call2_in_pane

0x3824,	// (0x00037ce9) popup_call2_audio_in_window_g1_ParamLimits

0x3824,	// (0x00037ce9) popup_call2_audio_in_window_g1

0x385c,	// (0x00037d21) popup_call2_audio_in_window_g2_ParamLimits

0x385c,	// (0x00037d21) popup_call2_audio_in_window_g2

0x3894,	// (0x00037d59) popup_call2_audio_in_window_g3_ParamLimits

0x3894,	// (0x00037d59) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00043937) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00043937) popup_call2_audio_in_window_g

0x38ec,	// (0x00037db1) popup_call2_audio_in_window_t1_ParamLimits

0x38ec,	// (0x00037db1) popup_call2_audio_in_window_t1

0x396c,	// (0x00037e31) popup_call2_audio_in_window_t2_ParamLimits

0x396c,	// (0x00037e31) popup_call2_audio_in_window_t2

0x39ec,	// (0x00037eb1) popup_call2_audio_in_window_t3_ParamLimits

0x39ec,	// (0x00037eb1) popup_call2_audio_in_window_t3

0x3a06,	// (0x00037ecb) popup_call2_audio_in_window_t4_ParamLimits

0x3a06,	// (0x00037ecb) popup_call2_audio_in_window_t4

0x3a18,	// (0x00037edd) popup_call2_audio_in_window_t5_ParamLimits

0x3a18,	// (0x00037edd) popup_call2_audio_in_window_t5

0x3a2d,	// (0x00037ef2) popup_call2_audio_in_window_t6_ParamLimits

0x3a2d,	// (0x00037ef2) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x00043940) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x00043940) popup_call2_audio_in_window_t

0x1bc5,	// (0x0003608a) bg_popup_call2_in_pane_g1

0x3b04,	// (0x00037fc9) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x00043995) popup_cale_lunar_info_window_t

0x1bcd,	// (0x00036092) bg_popup_call2_rect_pane_ParamLimits

0x1bcd,	// (0x00036092) bg_popup_call2_rect_pane

0x1964,	// (0x00035e29) call2_cli_visual_graphic_pane

0x1964,	// (0x00035e29) call2_cli_visual_text_pane

0x81ff,	// (0x0003c6c4) smil_status_volume_pane_g3

0x0002,

0x1be5,	// (0x000360aa) call2_cli_visual_graphic_pane_g1

0x1be5,	// (0x000360aa) call2_cli_visual_graphic_pane_g2

0x1be5,	// (0x000360aa) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x0004394d) call2_cli_visual_graphic_pane_g

0x1e0c,	// (0x000362d1) bg_popup_call2_rect_pane_g1

0x1e04,	// (0x000362c9) bg_popup_call2_rect_pane_g2

0x1dfc,	// (0x000362c1) bg_popup_call2_rect_pane_g3

0x1e1c,	// (0x000362e1) bg_popup_call2_rect_pane_g4

0x1e14,	// (0x000362d9) bg_popup_call2_rect_pane_g5

0x1e24,	// (0x000362e9) bg_popup_call2_rect_pane_g6

0x1e2c,	// (0x000362f1) bg_popup_call2_rect_pane_g7

0x1e3c,	// (0x00036301) bg_popup_call2_rect_pane_g8

0x1e34,	// (0x000362f9) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x000436dd) bg_popup_call2_rect_pane_g

0x3a42,	// (0x00037f07) bg_popup_call2_bubble_pane_g1

0x3a4a,	// (0x00037f0f) bg_popup_call2_bubble_pane_g2

0x3a52,	// (0x00037f17) bg_popup_call2_bubble_pane_g3

0x3a5a,	// (0x00037f1f) bg_popup_call2_bubble_pane_g4

0x3a62,	// (0x00037f27) bg_popup_call2_bubble_pane_g5

0x3a6a,	// (0x00037f2f) bg_popup_call2_bubble_pane_g6

0x3a72,	// (0x00037f37) bg_popup_call2_bubble_pane_g7

0x3a7a,	// (0x00037f3f) bg_popup_call2_bubble_pane_g8

0x3a82,	// (0x00037f47) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00043954) bg_popup_call2_bubble_pane_g

0x5abb,	// (0x00039f80) aid_cale_week_size_cell_pane

0x1bcd,	// (0x00036092) aid_cams_cif_uncrop_pane_ParamLimits

0x1bcd,	// (0x00036092) aid_cams_cif_uncrop_pane

0x1c3a,	// (0x000360ff) aid_cams_size_cell_ParamLimits

0x1c3a,	// (0x000360ff) aid_cams_size_cell

0x1c3a,	// (0x000360ff) grid_cams_pane_ParamLimits

0x1c3a,	// (0x000360ff) linegrid_cams_pane_ParamLimits

0x617a,	// (0x0003a63f) call_video_pane_t1

0x619b,	// (0x0003a660) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0004367f) call_video_pane_t

0x66e2,	// (0x0003aba7) aid_cale_month_size_cell_pane_ParamLimits

0x66e2,	// (0x0003aba7) aid_cale_month_size_cell_pane

0xf514,	// (0x000439d9) smil_status_volume_pane_g

0x820c,	// (0x0003c6d1) volume_smil_pane_ParamLimits

0x5522,	// (0x000399e7) aid_popup2_width_pane

0x59ff,	// (0x00039ec4) cell_qdial_pane_g4_ParamLimits

0x59ff,	// (0x00039ec4) cell_qdial_pane_g4

0x7592,	// (0x0003ba57) aid_blid_cardinal_pane_ParamLimits

0x75a2,	// (0x0003ba67) aid_blid_destination_pane_ParamLimits

0x75a2,	// (0x0003ba67) aid_blid_destination_pane

0x1bcd,	// (0x00036092) bg_popup_call_poc_act_pane_ParamLimits

0x1bcd,	// (0x00036092) bg_popup_call_poc_act_pane

0x1bcd,	// (0x00036092) bg_popup_call_poc_inact_pane_ParamLimits

0x1bcd,	// (0x00036092) bg_popup_call_poc_inact_pane

0x3a8a,	// (0x00037f4f) bg_popup_call_poc_act_pane_g1

0x3a92,	// (0x00037f57) bg_popup_call_poc_act_pane_g2

0x3a9a,	// (0x00037f5f) bg_popup_call_poc_act_pane_g3

0x3a5a,	// (0x00037f1f) bg_popup_call_poc_act_pane_g4

0x3a62,	// (0x00037f27) bg_popup_call_poc_act_pane_g5

0x3aa2,	// (0x00037f67) bg_popup_call_poc_act_pane_g6

0x3a72,	// (0x00037f37) bg_popup_call_poc_act_pane_g7

0x3aaa,	// (0x00037f6f) bg_popup_call_poc_act_pane_g8

0x1964,	// (0x00035e29) main_usb_pane

0x8065,	// (0x0003c52a) popup_cale_lunar_info_window

0x64c4,	// (0x0003a989) im_reading_pane_t1_ParamLimits

0x1fbd,	// (0x00036482) list_im_pane_ParamLimits

0x1fce,	// (0x00036493) scroll_pane_cp07_ParamLimits

0x1964,	// (0x00035e29) grid_highlight_pane_cp012

0x1bcd,	// (0x00036092) mup_scale_pane_ParamLimits

0x1c56,	// (0x0003611b) main_usb_pane_g1_ParamLimits

0x1c56,	// (0x0003611b) main_usb_pane_g1

0x1c56,	// (0x0003611b) main_usb_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x0004397e) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x0004397e) main_usb_pane_g

0x1ca4,	// (0x00036169) main_usb_pane_t1_ParamLimits

0x1ca4,	// (0x00036169) main_usb_pane_t1

0x1ca4,	// (0x00036169) main_usb_pane_t2_ParamLimits

0x1ca4,	// (0x00036169) main_usb_pane_t2

0x1ca4,	// (0x00036169) main_usb_pane_t3_ParamLimits

0x1ca4,	// (0x00036169) main_usb_pane_t3

0x1ca4,	// (0x00036169) main_usb_pane_t4_ParamLimits

0x1ca4,	// (0x00036169) main_usb_pane_t4

0x1ca4,	// (0x00036169) main_usb_pane_t5_ParamLimits

0x1ca4,	// (0x00036169) main_usb_pane_t5

0x1ca4,	// (0x00036169) main_usb_pane_t6_ParamLimits

0x1ca4,	// (0x00036169) main_usb_pane_t6

0x0005,

0xf4be,	// (0x00043983) main_usb_pane_t_ParamLimits

0x7538,	// (0x0003b9fd) aid_text_placing

0x7544,	// (0x0003ba09) main_location2_pane_t1_ParamLimits

0x7558,	// (0x0003ba1d) main_location2_pane_t2_ParamLimits

0x756c,	// (0x0003ba31) main_location2_pane_t3_ParamLimits

0x7580,	// (0x0003ba45) main_location2_pane_t4_ParamLimits

0x7580,	// (0x0003ba45) main_location2_pane_t4

0xf2fb,	// (0x000437c0) main_location2_pane_t_ParamLimits

0x1bfb,	// (0x000360c0) find_pinb_pane_g2_ParamLimits

0x1bfb,	// (0x000360c0) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00043537) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00043537) find_pinb_pane_g

0x1c07,	// (0x000360cc) find_pinb_pane_t1_ParamLimits

0x1c19,	// (0x000360de) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0004353c) find_pinb_pane_t_ParamLimits

0x1964,	// (0x00035e29) main_call3_pane

0x6c85,	// (0x0003b14a) cale_month_day_heading_pane_t1_ParamLimits

0x6d0b,	// (0x0003b1d0) cale_month_day_heading_pane_t2_ParamLimits

0x6d84,	// (0x0003b249) cale_month_day_heading_pane_t3_ParamLimits

0x6dfd,	// (0x0003b2c2) cale_month_day_heading_pane_t4_ParamLimits

0x6e76,	// (0x0003b33b) cale_month_day_heading_pane_t5_ParamLimits

0x6eef,	// (0x0003b3b4) cale_month_day_heading_pane_t6_ParamLimits

0x6f68,	// (0x0003b42d) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x000436b7) cale_month_day_heading_pane_t_ParamLimits

0x2221,	// (0x000366e6) smil_status_volume_pane

0x79fd,	// (0x0003bec2) postcard_address_pane_ParamLimits

0x79fd,	// (0x0003bec2) postcard_address_pane

0x7a09,	// (0x0003bece) postcard_message_pane_ParamLimits

0x7a09,	// (0x0003bece) postcard_message_pane

0x7e38,	// (0x0003c2fd) call2_cli_visual_pane_t1_ParamLimits

0x7e38,	// (0x0003c2fd) call2_cli_visual_pane_t1

0xd326,	// (0x000417eb) postcard_message_pane_t1_ParamLimits

0xd326,	// (0x000417eb) postcard_message_pane_t1

0xd30e,	// (0x000417d3) postcard_address_pane_t1_ParamLimits

0xd30e,	// (0x000417d3) postcard_address_pane_t1

0x833d,	// (0x0003c802) popup_call3_audio_in_window_ParamLimits

0x833d,	// (0x0003c802) popup_call3_audio_in_window

0x8221,	// (0x0003c6e6) bg_popup_call3_in_pane_ParamLimits

0x8221,	// (0x0003c6e6) bg_popup_call3_in_pane

0x8283,	// (0x0003c748) popup_call3_audio_in_window_g1_ParamLimits

0x8283,	// (0x0003c748) popup_call3_audio_in_window_g1

0x829b,	// (0x0003c760) popup_call3_audio_in_window_g2_ParamLimits

0x829b,	// (0x0003c760) popup_call3_audio_in_window_g2

0x82b3,	// (0x0003c778) popup_call3_audio_in_window_g3_ParamLimits

0x82b3,	// (0x0003c778) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x000439e0) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x000439e0) popup_call3_audio_in_window_g

0x82db,	// (0x0003c7a0) popup_call3_audio_in_window_t1_ParamLimits

0x82db,	// (0x0003c7a0) popup_call3_audio_in_window_t1

0x8303,	// (0x0003c7c8) popup_call3_audio_in_window_t2_ParamLimits

0x8303,	// (0x0003c7c8) popup_call3_audio_in_window_t2

0x832b,	// (0x0003c7f0) popup_call3_audio_in_window_t3_ParamLimits

0x832b,	// (0x0003c7f0) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x000439e9) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x000439e9) popup_call3_audio_in_window_t

0x1efc,	// (0x000363c1) bg_popup_call3_rect_pane

0x1e0c,	// (0x000362d1) bg_popup_call3_rect_pane_g1

0x1e04,	// (0x000362c9) bg_popup_call3_rect_pane_g2

0x1dfc,	// (0x000362c1) bg_popup_call3_rect_pane_g3

0x1e1c,	// (0x000362e1) bg_popup_call3_rect_pane_g4

0x1e14,	// (0x000362d9) bg_popup_call3_rect_pane_g5

0x1e24,	// (0x000362e9) bg_popup_call3_rect_pane_g6

0x1e2c,	// (0x000362f1) bg_popup_call3_rect_pane_g7

0x1547,	// (0x00035a0c) mup_visualizer_osc_pane

0x1547,	// (0x00035a0c) mup_visualizer_spec_pane

0x8241,	// (0x0003c706) call3_video_qcif_pane_ParamLimits

0x8241,	// (0x0003c706) call3_video_qcif_pane

0x8253,	// (0x0003c718) call3_video_qcif_uncrop_pane_ParamLimits

0x8253,	// (0x0003c718) call3_video_qcif_uncrop_pane

0x8261,	// (0x0003c726) call3_video_subqcif_pane_ParamLimits

0x8261,	// (0x0003c726) call3_video_subqcif_pane

0x8273,	// (0x0003c738) call3_video_subqcif_uncrop_pane_ParamLimits

0x8273,	// (0x0003c738) call3_video_subqcif_uncrop_pane

0x82cb,	// (0x0003c790) popup_call3_audio_in_window_g4_ParamLimits

0x82cb,	// (0x0003c790) popup_call3_audio_in_window_g4

0x1547,	// (0x00035a0c) mup_spec_half_pane

0x1547,	// (0x00035a0c) mup_spec_half_pane_cp

0x1547,	// (0x00035a0c) mup_osc_middle_pane

0x1c86,	// (0x0003614b) mup_visualizer_osc_pane_g1

0x3bb4,	// (0x00038079) mup_spec_bar_pane_ParamLimits

0x3bb4,	// (0x00038079) mup_spec_bar_pane

0x1c86,	// (0x0003614b) mup_spec_bar_pane_g1

0x1c86,	// (0x0003614b) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00043551) mup_spec_bar_pane_g

0x5abb,	// (0x00039f80) aid_cale_week_size_cell_pane_ParamLimits

0x5ad0,	// (0x00039f95) bg_cale_heading_pane_ParamLimits

0x1e5e,	// (0x00036323) bg_cale_pane_cp01_ParamLimits

0x5af0,	// (0x00039fb5) cale_week_corner_pane_ParamLimits

0x5b0a,	// (0x00039fcf) cale_week_day_heading_pane_ParamLimits

0x5b2a,	// (0x00039fef) cale_week_scroll_pane_g1_ParamLimits

0x5b45,	// (0x0003a00a) cale_week_scroll_pane_g2_ParamLimits

0x5b58,	// (0x0003a01d) cale_week_scroll_pane_g3_ParamLimits

0x5b6b,	// (0x0003a030) cale_week_scroll_pane_g4_ParamLimits

0x5b7e,	// (0x0003a043) cale_week_scroll_pane_g5_ParamLimits

0x5b91,	// (0x0003a056) cale_week_scroll_pane_g6_ParamLimits

0x5ba4,	// (0x0003a069) cale_week_scroll_pane_g7_ParamLimits

0x5bb9,	// (0x0003a07e) cale_week_scroll_pane_g8_ParamLimits

0x5bce,	// (0x0003a093) cale_week_scroll_pane_g9_ParamLimits

0x5be1,	// (0x0003a0a6) cale_week_scroll_pane_g10_ParamLimits

0x5bf4,	// (0x0003a0b9) cale_week_scroll_pane_g11_ParamLimits

0x5c07,	// (0x0003a0cc) cale_week_scroll_pane_g12_ParamLimits

0x5c1e,	// (0x0003a0e3) cale_week_scroll_pane_g13_ParamLimits

0x5c39,	// (0x0003a0fe) cale_week_scroll_pane_g14_ParamLimits

0x5c54,	// (0x0003a119) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x000435c8) cale_week_scroll_pane_g_ParamLimits

0x5c84,	// (0x0003a149) cale_week_time_pane_ParamLimits

0x5c99,	// (0x0003a15e) grid_cale_week_pane_ParamLimits

0x1e7b,	// (0x00036340) listscroll_cale_week_pane_t1

0x1e8d,	// (0x00036352) scroll_pane_cp08_ParamLimits

0x6756,	// (0x0003ac1b) cale_month_corner_pane_ParamLimits

0x21f7,	// (0x000366bc) cale_month_pane_t1

0x6c08,	// (0x0003b0cd) cale_month_week_pane_ParamLimits

0x3233,	// (0x000376f8) popup_call_status_window_g1_ParamLimits

0x738f,	// (0x0003b854) popup_call_status_window_g2_ParamLimits

0x739b,	// (0x0003b860) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x00043747) popup_call_status_window_g_ParamLimits

0x2581,	// (0x00036a46) aid_call2_pane

0x4b68,	// (0x0003902d) msg_header_pane_g1

0x79fd,	// (0x0003bec2) postcard_address2_pane_ParamLimits

0x79fd,	// (0x0003bec2) postcard_address2_pane

0x7a09,	// (0x0003bece) postcard_message2_pane_ParamLimits

0x7a09,	// (0x0003bece) postcard_message2_pane

0x81d1,	// (0x0003c696) message2_row_pane_ParamLimits

0x81d1,	// (0x0003c696) message2_row_pane

0x81ec,	// (0x0003c6b1) address2_row_pane_ParamLimits

0x81ec,	// (0x0003c6b1) address2_row_pane

0x3b81,	// (0x00038046) postcard_message2_row_pane_g1

0x3b89,	// (0x0003804e) postcard_message2_row_pane_t1

0x3b81,	// (0x00038046) address2_row_pane_g1

0x3b89,	// (0x0003804e) address2_row_pane_t1

0x5f1f,	// (0x0003a3e4) aid_size_cell_vorec

0x1964,	// (0x00035e29) main_rss_pane

0x3b97,	// (0x0003805c) rss_list_single_pane_ParamLimits

0x3b97,	// (0x0003805c) rss_list_single_pane

0x3ba5,	// (0x0003806a) rss_list_single_pane_t1

0x3ba5,	// (0x0003806a) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x000439d4) rss_list_single_pane_t

0x1964,	// (0x00035e29) main_camera2_pane

0x1964,	// (0x00035e29) main_video2_pane

0x1c3a,	// (0x000360ff) cams_zoom_pane_cp2_ParamLimits

0x1c3a,	// (0x000360ff) cams_zoom_pane_cp2

0x1c3a,	// (0x000360ff) image2_vga_pane_ParamLimits

0x1c3a,	// (0x000360ff) image2_vga_pane

0x1c56,	// (0x0003611b) main_camera2_pane_g1_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g1

0x1c56,	// (0x0003611b) main_camera2_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g2

0x1c56,	// (0x0003611b) main_camera2_pane_g3_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g3

0x1c56,	// (0x0003611b) main_camera2_pane_g4_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g4

0x1c56,	// (0x0003611b) main_camera2_pane_g5_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g5

0x1c56,	// (0x0003611b) main_camera2_pane_g6_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g6

0x1c56,	// (0x0003611b) main_camera2_pane_g7_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g7

0x1c56,	// (0x0003611b) main_camera2_pane_g8_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x000439f0) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x000439f0) main_camera2_pane_g

0x1ca4,	// (0x00036169) main_camera2_pane_t1_ParamLimits

0x1ca4,	// (0x00036169) main_camera2_pane_t1

0x1ca4,	// (0x00036169) main_camera2_pane_t2_ParamLimits

0x1ca4,	// (0x00036169) main_camera2_pane_t2

0x1ca4,	// (0x00036169) main_camera2_pane_t3_ParamLimits

0x1ca4,	// (0x00036169) main_camera2_pane_t3

0x1ca4,	// (0x00036169) main_camera2_pane_t4_ParamLimits

0x1ca4,	// (0x00036169) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x00043a03) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x00043a03) main_camera2_pane_t

0x29c9,	// (0x00036e8e) cams_zoom_pane_cp4_ParamLimits

0x29c9,	// (0x00036e8e) cams_zoom_pane_cp4

0x1b35,	// (0x00035ffa) image2_cif_pane_ParamLimits

0x1b35,	// (0x00035ffa) image2_cif_pane

0x1c3a,	// (0x000360ff) image2_subqcif_pane_ParamLimits

0x1c3a,	// (0x000360ff) image2_subqcif_pane

0x29a7,	// (0x00036e6c) main_video2_pane_g1_ParamLimits

0x29a7,	// (0x00036e6c) main_video2_pane_g1

0x29a7,	// (0x00036e6c) main_video2_pane_g2_ParamLimits

0x29a7,	// (0x00036e6c) main_video2_pane_g2

0x29a7,	// (0x00036e6c) main_video2_pane_g3_ParamLimits

0x29a7,	// (0x00036e6c) main_video2_pane_g3

0x29a7,	// (0x00036e6c) main_video2_pane_g4_ParamLimits

0x29a7,	// (0x00036e6c) main_video2_pane_g4

0x29a7,	// (0x00036e6c) main_video2_pane_g5_ParamLimits

0x29a7,	// (0x00036e6c) main_video2_pane_g5

0x29a7,	// (0x00036e6c) main_video2_pane_g6_ParamLimits

0x29a7,	// (0x00036e6c) main_video2_pane_g6

0x0005,

0xf54d,	// (0x00043a12) main_video2_pane_g_ParamLimits

0xf54d,	// (0x00043a12) main_video2_pane_g

0x29b5,	// (0x00036e7a) main_video2_pane_t1_ParamLimits

0x29b5,	// (0x00036e7a) main_video2_pane_t1

0x29b5,	// (0x00036e7a) main_video2_pane_t2_ParamLimits

0x29b5,	// (0x00036e7a) main_video2_pane_t2

0x29b5,	// (0x00036e7a) main_video2_pane_t3_ParamLimits

0x29b5,	// (0x00036e7a) main_video2_pane_t3

0x0002,

0xf55a,	// (0x00043a1f) main_video2_pane_t_ParamLimits

0xf55a,	// (0x00043a1f) main_video2_pane_t

0x7ef1,	// (0x0003c3b6) call_muted_g2

0x0001,

0xf501,	// (0x000439c6) call_muted_g

0x1964,	// (0x00035e29) main_mup2_pane

0x1c64,	// (0x00036129) main_mup2_pane_g1_ParamLimits

0x1c64,	// (0x00036129) main_mup2_pane_g1

0x1c64,	// (0x00036129) main_mup2_pane_g2_ParamLimits

0x1c64,	// (0x00036129) main_mup2_pane_g2

0x1c86,	// (0x0003614b) main_mup_pane_g13_cp1

0x1547,	// (0x00035a0c) mup_volume_pane_cp1

0x1c64,	// (0x00036129) main_mup2_pane_g4_ParamLimits

0x1c64,	// (0x00036129) main_mup2_pane_g4

0x1c64,	// (0x00036129) main_mup2_pane_g5_ParamLimits

0x1c64,	// (0x00036129) main_mup2_pane_g5

0x1c64,	// (0x00036129) main_mup2_pane_g6_ParamLimits

0x1c64,	// (0x00036129) main_mup2_pane_g6

0x1c64,	// (0x00036129) main_mup2_pane_g7_ParamLimits

0x1c64,	// (0x00036129) main_mup2_pane_g7

0x0006,

0xf561,	// (0x00043a26) main_mup2_pane_g_ParamLimits

0xf561,	// (0x00043a26) main_mup2_pane_g

0x1c72,	// (0x00036137) main_mup2_pane_t1_ParamLimits

0x1c72,	// (0x00036137) main_mup2_pane_t1

0x1c72,	// (0x00036137) main_mup2_pane_t2_ParamLimits

0x1c72,	// (0x00036137) main_mup2_pane_t2

0x1c72,	// (0x00036137) main_mup2_pane_t3_ParamLimits

0x1c72,	// (0x00036137) main_mup2_pane_t3

0x1c72,	// (0x00036137) main_mup2_pane_t4_ParamLimits

0x1c72,	// (0x00036137) main_mup2_pane_t4

0x1c72,	// (0x00036137) main_mup2_pane_t5_ParamLimits

0x1c72,	// (0x00036137) main_mup2_pane_t5

0x1c72,	// (0x00036137) main_mup2_pane_t6_ParamLimits

0x1c72,	// (0x00036137) main_mup2_pane_t6

0x0005,

0xf570,	// (0x00043a35) main_mup2_pane_t_ParamLimits

0xf570,	// (0x00043a35) main_mup2_pane_t

0xd300,	// (0x000417c5) mup2_visualizer_pane_ParamLimits

0xd300,	// (0x000417c5) mup2_visualizer_pane

0xd300,	// (0x000417c5) mup_progress_pane_cp_ParamLimits

0xd300,	// (0x000417c5) mup_progress_pane_cp

0xd356,	// (0x0004181b) mup_volume_pane_cp_ParamLimits

0xd356,	// (0x0004181b) mup_volume_pane_cp

0x1c48,	// (0x0003610d) mup2_visualizer_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) mup2_visualizer_pane_g1

0x1c56,	// (0x0003611b) mup2_visualizer_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) mup2_visualizer_pane_g2

0x1c56,	// (0x0003611b) mup2_visualizer_pane_g3_ParamLimits

0x1c56,	// (0x0003611b) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00043541) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00043541) mup2_visualizer_pane_g

0x1547,	// (0x00035a0c) aid_size_cell_fmradio

0x8007,	// (0x0003c4cc) aid_height_parent_landcape

0x204c,	// (0x00036511) wml_content_pane_cp

0x2054,	// (0x00036519) wml_tabs_pane

0x205d,	// (0x00036522) popup_wml_miniature_window

0x2065,	// (0x0003652a) scroll_pane_cp021

0x2079,	// (0x0003653e) wml_content_pane_comp8

0x1964,	// (0x00035e29) bg_popup_sub_pane_cp05

0xd36c,	// (0x00041831) popup_wml_miniature_window_g1

0xd374,	// (0x00041839) wml_miniature_view_pane

0x835a,	// (0x0003c81f) aid_size_wml_view

0x8362,	// (0x0003c827) wml_miniature_view_pane_g1

0x836b,	// (0x0003c830) wml_miniature_view_pane_g2

0x8374,	// (0x0003c839) wml_miniature_view_pane_g3

0x837c,	// (0x0003c841) wml_miniature_view_pane_g4

0x8384,	// (0x0003c849) wml_miniature_view_pane_g5

0x838c,	// (0x0003c851) wml_miniature_view_pane_g6

0x8394,	// (0x0003c859) wml_miniature_view_pane_g7

0x839c,	// (0x0003c861) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x00043a42) wml_miniature_view_pane_g

0xd37c,	// (0x00041841) background_graphic_ParamLimits

0xd37c,	// (0x00041841) background_graphic

0xd388,	// (0x0004184d) wml_tabs_2_pane

0xd391,	// (0x00041856) wml_tabs_3_pane_ParamLimits

0xd391,	// (0x00041856) wml_tabs_3_pane

0xd3a3,	// (0x00041868) wml_tabs_4_pane_ParamLimits

0xd3a3,	// (0x00041868) wml_tabs_4_pane

0xd3b9,	// (0x0004187e) wml_tabs_5_pane_ParamLimits

0xd3b9,	// (0x0004187e) wml_tabs_5_pane

0xd3d3,	// (0x00041898) wml_tabs_pane_g2_ParamLimits

0xd3d3,	// (0x00041898) wml_tabs_pane_g2

0xd3e8,	// (0x000418ad) wml_tabs_pane_g3_ParamLimits

0xd3e8,	// (0x000418ad) wml_tabs_pane_g3

0xd3fd,	// (0x000418c2) wml_tabs_2_active_pane_ParamLimits

0xd3fd,	// (0x000418c2) wml_tabs_2_active_pane

0xd3fd,	// (0x000418c2) wml_tabs_2_passive_pane_ParamLimits

0xd3fd,	// (0x000418c2) wml_tabs_2_passive_pane

0x83a4,	// (0x0003c869) wml_tabs_3_active_pane_cp_ParamLimits

0x83a4,	// (0x0003c869) wml_tabs_3_active_pane_cp

0x83b5,	// (0x0003c87a) wml_tabs_3_passive_pane_ParamLimits

0x83b5,	// (0x0003c87a) wml_tabs_3_passive_pane

0x83c6,	// (0x0003c88b) wml_tabs_3_passive_pane_cp_ParamLimits

0x83c6,	// (0x0003c88b) wml_tabs_3_passive_pane_cp

0x83d7,	// (0x0003c89c) tabs_4_active_pane

0x83df,	// (0x0003c8a4) tabs_4_passive_pane

0x83e7,	// (0x0003c8ac) tabs_4_passive_pane_cp

0x83ef,	// (0x0003c8b4) tabs_4_passive_pane_cp2

0x7e65,	// (0x0003c32a) aid_height_text

0xd300,	// (0x000417c5) mup_volume_cont_pane_ParamLimits

0xd300,	// (0x000417c5) mup_volume_cont_pane

0x1547,	// (0x00035a0c) aid_size_cell_pinb

0x1547,	// (0x00035a0c) aid_size_list_pinb

0xd300,	// (0x000417c5) mup2_volume_cont_pane_ParamLimits

0xd300,	// (0x000417c5) mup2_volume_cont_pane

0x83f7,	// (0x0003c8bc) mup2_volume_cont_pane_g1_ParamLimits

0x83f7,	// (0x0003c8bc) mup2_volume_cont_pane_g1

0x552e,	// (0x000399f3) aid_size_cell_touch_ParamLimits

0x552e,	// (0x000399f3) aid_size_cell_touch

0x5739,	// (0x00039bfe) touch_pane_ParamLimits

0x5739,	// (0x00039bfe) touch_pane

0x1547,	// (0x00035a0c) main_rss2_pane

0xd414,	// (0x000418d9) listscroll_rss2_pane

0xd41d,	// (0x000418e2) rss2_navigation_pane

0xd425,	// (0x000418ea) list_rss2_pane

0x26af,	// (0x00036b74) scroll_pane_cp22

0xd42d,	// (0x000418f2) rss2_navigation_pane_g1

0xd436,	// (0x000418fb) rss2_navigation_pane_g2

0xd43e,	// (0x00041903) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x00043a53) rss2_navigation_pane_g

0xd446,	// (0x0004190b) rss2_navigation_pane_t1

0x840d,	// (0x0003c8d2) rss2_list_single_pane_ParamLimits

0x840d,	// (0x0003c8d2) rss2_list_single_pane

0xd454,	// (0x00041919) rss2_list_single_pane_t2

0xd462,	// (0x00041927) rss2_list_single_pane_t3_ParamLimits

0xd462,	// (0x00041927) rss2_list_single_pane_t3

0xd47f,	// (0x00041944) rss2_list_single_pane_t4

0x7204,	// (0x0003b6c9) smil_status_pane_g1

0x1b35,	// (0x00035ffa) main_image2_pane_ParamLimits

0x1b35,	// (0x00035ffa) main_image2_pane

0x1c56,	// (0x0003611b) main_camera2_pane_g9_ParamLimits

0x1c56,	// (0x0003611b) main_camera2_pane_g9

0x1ca4,	// (0x00036169) main_camera2_pane_t5_ParamLimits

0x1ca4,	// (0x00036169) main_camera2_pane_t5

0xd342,	// (0x00041807) main_camera2_pane_t6_ParamLimits

0xd342,	// (0x00041807) main_camera2_pane_t6

0x843e,	// (0x0003c903) main_image2_pane_g1_ParamLimits

0x843e,	// (0x0003c903) main_image2_pane_g1

0x7b9d,	// (0x0003c062) smil2_video_pane_ParamLimits

0x7b9d,	// (0x0003c062) smil2_video_pane

0x4a1d,	// (0x00038ee2) aid_zoom_text_primary_cp

0x56e2,	// (0x00039ba7) popup_preview_fixed_window

0x1fb5,	// (0x0003647a) im_reading_pane_g1

0x834c,	// (0x0003c811) cams2_bc_adjust_pane_cp_ParamLimits

0x834c,	// (0x0003c811) cams2_bc_adjust_pane_cp

0x1c3a,	// (0x000360ff) cams2_bc_adjust_pane_ParamLimits

0x1c3a,	// (0x000360ff) cams2_bc_adjust_pane

0x1c86,	// (0x0003614b) cams2_bc_adjust_pane_g1

0x1547,	// (0x00035a0c) cams2_slider_pane

0x1c86,	// (0x0003614b) cams2_slider_pane_g1

0x1c86,	// (0x0003614b) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x00043a5a) cams2_slider_pane_g

0x5807,	// (0x00039ccc) calc_display_pane_ParamLimits

0x5825,	// (0x00039cea) calc_paper_pane_ParamLimits

0x5841,	// (0x00039d06) grid_calc_pane_ParamLimits

0x73fd,	// (0x0003b8c2) popup_clock_digital_window_t1_ParamLimits

0x2b7f,	// (0x00037044) main_image_pane_t1

0x57ed,	// (0x00039cb2) aid_size_cell_calc_ParamLimits

0x57ed,	// (0x00039cb2) aid_size_cell_calc

0x8041,	// (0x0003c506) popup_blid_sat_info2_window_ParamLimits

0x8041,	// (0x0003c506) popup_blid_sat_info2_window

0xd48d,	// (0x00041952) aid_size_cell_blid

0xd300,	// (0x000417c5) bg_popup_window_pane_cp07

0xd4aa,	// (0x0004196f) grid_popup_blid_pane

0xd4b4,	// (0x00041979) heading_pane_cp05_ParamLimits

0xd4b4,	// (0x00041979) heading_pane_cp05

0xd57e,	// (0x00041a43) cell_popup_blid_pane_ParamLimits

0xd57e,	// (0x00041a43) cell_popup_blid_pane

0xd5a2,	// (0x00041a67) cell_popup_blid_pane_g1

0xd5aa,	// (0x00041a6f) cell_popup_blid_pane_t1

0xd300,	// (0x000417c5) mup2_indicator_pane_ParamLimits

0xd300,	// (0x000417c5) mup2_indicator_pane

0x1547,	// (0x00035a0c) mup2_visualizer_osc_pane

0xd356,	// (0x0004181b) mup2_visualizer_spec_pane_ParamLimits

0xd356,	// (0x0004181b) mup2_visualizer_spec_pane

0x1547,	// (0x00035a0c) mup2_spec_half_pane

0x1547,	// (0x00035a0c) mup2_spec_half_pane_cp

0xd5b8,	// (0x00041a7d) mup2_spec_bar_pane_ParamLimits

0xd5b8,	// (0x00041a7d) mup2_spec_bar_pane

0x1c86,	// (0x0003614b) mup2_spec_bar_pane_g1

0xd5d7,	// (0x00041a9c) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x00043a80) mup2_spec_bar_pane_g

0x1547,	// (0x00035a0c) mup2_osc_middle_pane

0x1c86,	// (0x0003614b) mup2_visualizer_osc_pane_g1

0x1571,	// (0x00035a36) popup_number_entry_window_t1_ParamLimits

0x1584,	// (0x00035a49) popup_number_entry_window_t2_ParamLimits

0x1596,	// (0x00035a5b) popup_number_entry_window_t3_ParamLimits

0x5790,	// (0x00039c55) popup_number_entry_window_t5_ParamLimits

0x5790,	// (0x00039c55) popup_number_entry_window_t5

0xf01d,	// (0x000434e2) popup_number_entry_window_t_ParamLimits

0x15a8,	// (0x00035a6d) text_title_cp2_ParamLimits

0x78c5,	// (0x0003bd8a) aid_hotspot_pointer_text2_pane

0x795f,	// (0x0003be24) main_viewer_pane_g9_ParamLimits

0x795f,	// (0x0003be24) main_viewer_pane_g9

0x21f7,	// (0x000366bc) cale_month_pane_t1_ParamLimits

0x2234,	// (0x000366f9) bg_cale_pane_ParamLimits

0x224c,	// (0x00036711) list_cale_pane_ParamLimits

0x225d,	// (0x00036722) listscroll_cale_day_pane_t1

0x226f,	// (0x00036734) scroll_pane_cp09_ParamLimits

0x7680,	// (0x0003bb45) main_mup_eq_pane_t1_ParamLimits

0x7680,	// (0x0003bb45) main_mup_eq_pane_t1

0x769a,	// (0x0003bb5f) main_mup_eq_pane_t2_ParamLimits

0x769a,	// (0x0003bb5f) main_mup_eq_pane_t2

0x76b4,	// (0x0003bb79) main_mup_eq_pane_t3_ParamLimits

0x76b4,	// (0x0003bb79) main_mup_eq_pane_t3

0x76cc,	// (0x0003bb91) main_mup_eq_pane_t4_ParamLimits

0x76cc,	// (0x0003bb91) main_mup_eq_pane_t4

0x76e4,	// (0x0003bba9) main_mup_eq_pane_t5_ParamLimits

0x76e4,	// (0x0003bba9) main_mup_eq_pane_t5

0x76fc,	// (0x0003bbc1) main_mup_eq_pane_t6_ParamLimits

0x76fc,	// (0x0003bbc1) main_mup_eq_pane_t6

0x7710,	// (0x0003bbd5) main_mup_eq_pane_t7_ParamLimits

0x7710,	// (0x0003bbd5) main_mup_eq_pane_t7

0x7724,	// (0x0003bbe9) main_mup_eq_pane_t8_ParamLimits

0x7724,	// (0x0003bbe9) main_mup_eq_pane_t8

0x773a,	// (0x0003bbff) main_mup_eq_pane_t9_ParamLimits

0x773a,	// (0x0003bbff) main_mup_eq_pane_t9

0x7752,	// (0x0003bc17) main_mup_eq_pane_t10_ParamLimits

0x7752,	// (0x0003bc17) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x00043841) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x00043841) main_mup_eq_pane_t

0x780f,	// (0x0003bcd4) mup_equalizer_pane_cp5_ParamLimits

0x7825,	// (0x0003bcea) mup_equalizer_pane_cp6_ParamLimits

0x783d,	// (0x0003bd02) mup_equalizer_pane_cp7_ParamLimits

0x1547,	// (0x00035a0c) main_gallery_pane

0x3bd3,	// (0x00038098) smil2_volume_pane

0x3bee,	// (0x000380b3) smil_status_volume_pane_g1_ParamLimits

0x3bdb,	// (0x000380a0) smil_status_volume_pane_g2_ParamLimits

0x81ff,	// (0x0003c6c4) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x000439d9) smil_status_volume_pane_g_ParamLimits

0xd300,	// (0x000417c5) bg_popup_window_pane_cp07_ParamLimits

0xd495,	// (0x0004195a) blid_firmament_pane

0x1c3a,	// (0x000360ff) aid_size_cell_gallery_ParamLimits

0x1c3a,	// (0x000360ff) aid_size_cell_gallery

0x1c3a,	// (0x000360ff) grid_gallery_pane_ParamLimits

0x1c3a,	// (0x000360ff) grid_gallery_pane

0x29c9,	// (0x00036e8e) cell_gallery_pane_ParamLimits

0x29c9,	// (0x00036e8e) cell_gallery_pane

0x1b35,	// (0x00035ffa) bg_cell_gallery_focus_pane_ParamLimits

0x1b35,	// (0x00035ffa) bg_cell_gallery_focus_pane

0x1c48,	// (0x0003610d) cell_gallery_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) cell_gallery_pane_g1

0x1c48,	// (0x0003610d) cell_gallery_pane_g2_ParamLimits

0x1c48,	// (0x0003610d) cell_gallery_pane_g2

0x1c48,	// (0x0003610d) cell_gallery_pane_g3_ParamLimits

0x1c48,	// (0x0003610d) cell_gallery_pane_g3

0x1c56,	// (0x0003611b) cell_gallery_pane_g4_ParamLimits

0x1c56,	// (0x0003611b) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x00043a85) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x00043a85) cell_gallery_pane_g

0xd5e1,	// (0x00041aa6) bg_cell_gallery_focus_pane_g1

0xd5e9,	// (0x00041aae) bg_cell_gallery_focus_pane_g2

0xd5f1,	// (0x00041ab6) bg_cell_gallery_focus_pane_g3

0xd5f9,	// (0x00041abe) bg_cell_gallery_focus_pane_g4

0xd601,	// (0x00041ac6) bg_cell_gallery_focus_pane_g5

0xd609,	// (0x00041ace) bg_cell_gallery_focus_pane_g6

0xd611,	// (0x00041ad6) bg_cell_gallery_focus_pane_g7

0xd619,	// (0x00041ade) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x00043a8e) bg_cell_gallery_focus_pane_g

0xd621,	// (0x00041ae6) aid_firma_cardinal

0xd635,	// (0x00041afa) blid_firmament_pane_t1

0xd64c,	// (0x00041b11) blid_firmament_pane_t2

0xd663,	// (0x00041b28) blid_firmament_pane_t3

0xd67a,	// (0x00041b3f) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x00043a9f) blid_firmament_pane_t

0xd691,	// (0x00041b56) blid_sat_info_pane

0x1c86,	// (0x0003614b) blid_sat_info_pane_g1

0x1c86,	// (0x0003614b) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00043551) blid_sat_info_pane_g

0xd6a1,	// (0x00041b66) blid_sat_info_pane_t1

0xd6af,	// (0x00041b74) smil2_volume_content_pane

0xd6b8,	// (0x00041b7d) smil2_volume_pane_g1

0x1d5b,	// (0x00036220) smil2_volume_content_pane_g1

0xd6c0,	// (0x00041b85) smil2_volume_content_pane_g2

0xd6c9,	// (0x00041b8e) smil2_volume_content_pane_g3

0xd6d2,	// (0x00041b97) smil2_volume_content_pane_g4

0xd6db,	// (0x00041ba0) smil2_volume_content_pane_g5

0xd6e4,	// (0x00041ba9) smil2_volume_content_pane_g6

0xd6ed,	// (0x00041bb2) smil2_volume_content_pane_g7

0xd6f6,	// (0x00041bbb) smil2_volume_content_pane_g8

0xd6ff,	// (0x00041bc4) smil2_volume_content_pane_g9

0xd708,	// (0x00041bcd) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x00043aa8) smil2_volume_content_pane_g

0x5d1a,	// (0x0003a1df) cale_week_day_heading_pane_t1_ParamLimits

0x5d35,	// (0x0003a1fa) cale_week_day_heading_pane_t2_ParamLimits

0x5d50,	// (0x0003a215) cale_week_day_heading_pane_t3_ParamLimits

0x5d6b,	// (0x0003a230) cale_week_day_heading_pane_t4_ParamLimits

0x5d86,	// (0x0003a24b) cale_week_day_heading_pane_t5_ParamLimits

0x5da1,	// (0x0003a266) cale_week_day_heading_pane_t6_ParamLimits

0x5dbc,	// (0x0003a281) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x000435e9) cale_week_day_heading_pane_t_ParamLimits

0x1eaa,	// (0x0003636f) bg_cale_side_pane_ParamLimits

0x5dd7,	// (0x0003a29c) cale_week_time_pane_t1_ParamLimits

0x5df1,	// (0x0003a2b6) cale_week_time_pane_t2_ParamLimits

0x5e0b,	// (0x0003a2d0) cale_week_time_pane_t3_ParamLimits

0x5e25,	// (0x0003a2ea) cale_week_time_pane_t4_ParamLimits

0x5e3f,	// (0x0003a304) cale_week_time_pane_t5_ParamLimits

0x5e59,	// (0x0003a31e) cale_week_time_pane_t6_ParamLimits

0x5e77,	// (0x0003a33c) cale_week_time_pane_t7_ParamLimits

0x5e99,	// (0x0003a35e) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x000435f8) cale_week_time_pane_t_ParamLimits

0x5ebd,	// (0x0003a382) cell_cale_week_pane_g2_ParamLimits

0x1eaa,	// (0x0003636f) bg_cale_side_pane_cp01_ParamLimits

0x6ff9,	// (0x0003b4be) cale_month_week_pane_t1_ParamLimits

0x7012,	// (0x0003b4d7) cale_month_week_pane_t2_ParamLimits

0x702b,	// (0x0003b4f0) cale_month_week_pane_t3_ParamLimits

0x7044,	// (0x0003b509) cale_month_week_pane_t4_ParamLimits

0x705d,	// (0x0003b522) cale_month_week_pane_t5_ParamLimits

0x707e,	// (0x0003b543) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x000436c6) cale_month_week_pane_t_ParamLimits

0x71c1,	// (0x0003b686) cell_cale_month_pane_g1_ParamLimits

0x1547,	// (0x00035a0c) main_cale_event_viewer_pane

0x1547,	// (0x00035a0c) listscroll_cale_event_viewer_pane

0xd711,	// (0x00041bd6) list_cale_ev_pane

0xd719,	// (0x00041bde) scroll_pane_cp023

0xd725,	// (0x00041bea) field_cale_ev_pane_ParamLimits

0xd725,	// (0x00041bea) field_cale_ev_pane

0xd743,	// (0x00041c08) field_cale_ev_content_pane_ParamLimits

0xd743,	// (0x00041c08) field_cale_ev_content_pane

0xd74f,	// (0x00041c14) field_cale_ev_pane_g1_ParamLimits

0xd74f,	// (0x00041c14) field_cale_ev_pane_g1

0xd75b,	// (0x00041c20) field_cale_ev_pane_g2_ParamLimits

0xd75b,	// (0x00041c20) field_cale_ev_pane_g2

0xd773,	// (0x00041c38) field_cale_ev_pane_g3_ParamLimits

0xd773,	// (0x00041c38) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x00043abd) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x00043abd) field_cale_ev_pane_g

0xd78b,	// (0x00041c50) field_cale_ev_pane_t1_ParamLimits

0xd78b,	// (0x00041c50) field_cale_ev_pane_t1

0x1dde,	// (0x000362a3) field_cale_ev_content_pane_t1_ParamLimits

0x1dde,	// (0x000362a3) field_cale_ev_content_pane_t1

0x2a6c,	// (0x00036f31) bg_button_pane_cp01

0x5aab,	// (0x00039f70) listscroll_cale_week_pane_ParamLimits

0x20f5,	// (0x000365ba) popup_toolbar_window_cp01

0x1e7b,	// (0x00036340) listscroll_cale_week_pane_t1_ParamLimits

0x5aab,	// (0x00039f70) listscroll_cale_day_pane_ParamLimits

0x20f5,	// (0x000365ba) popup_toolbar_window_cp02

0x225d,	// (0x00036722) listscroll_cale_day_pane_t1_ParamLimits

0x5aab,	// (0x00039f70) main_cale_month_pane_ParamLimits

0x8148,	// (0x0003c60d) popup_toolbar_window_cp03_ParamLimits

0x8148,	// (0x0003c60d) popup_toolbar_window_cp03

0x7ab3,	// (0x0003bf78) main_image_pane_g2_ParamLimits

0x7ab3,	// (0x0003bf78) main_image_pane_g2

0x7abf,	// (0x0003bf84) main_image_pane_g3_ParamLimits

0x7abf,	// (0x0003bf84) main_image_pane_g3

0x0002,

0xf40e,	// (0x000438d3) main_image_pane_g_ParamLimits

0xf40e,	// (0x000438d3) main_image_pane_g

0x2b7f,	// (0x00037044) main_image_pane_t1_ParamLimits

0x7acb,	// (0x0003bf90) main_image_pane_t2_ParamLimits

0x7acb,	// (0x0003bf90) main_image_pane_t2

0x7add,	// (0x0003bfa2) main_image_pane_t3_ParamLimits

0x7add,	// (0x0003bfa2) main_image_pane_t3

0x7aef,	// (0x0003bfb4) main_image_pane_t4_ParamLimits

0x7aef,	// (0x0003bfb4) main_image_pane_t4

0x0003,

0xf415,	// (0x000438da) main_image_pane_t_ParamLimits

0xf415,	// (0x000438da) main_image_pane_t

0x7b01,	// (0x0003bfc6) popup_image_details_window_cp01

0x7b0b,	// (0x0003bfd0) popup_toobar_trans_pane_cp01_ParamLimits

0x7b0b,	// (0x0003bfd0) popup_toobar_trans_pane_cp01

0x8098,	// (0x0003c55d) popup_image_details_window_ParamLimits

0x8098,	// (0x0003c55d) popup_image_details_window

0x80a6,	// (0x0003c56b) popup_image_focus_window

0x1c3a,	// (0x000360ff) camera2_autofocus_pane_ParamLimits

0x1c3a,	// (0x000360ff) camera2_autofocus_pane

0x1547,	// (0x00035a0c) bg_popup_sub_pane_cp06

0xd7a2,	// (0x00041c67) popup_image_focus_window_g1

0xd7aa,	// (0x00041c6f) popup_image_focus_window_g2

0xd7b2,	// (0x00041c77) popup_image_focus_window_g3

0xd7ba,	// (0x00041c7f) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x00043ac4) popup_image_focus_window_g

0xd7c2,	// (0x00041c87) popup_image_focus_window_t1

0xd7d0,	// (0x00041c95) popup_image_focus_window_t2

0xd7e0,	// (0x00041ca5) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x00043acd) popup_image_focus_window_t

0x1c48,	// (0x0003610d) camera2_autofocus_pane_g1

0x1b35,	// (0x00035ffa) bg_tb_trans_pane_cp01

0xd7ee,	// (0x00041cb3) popup_image_details_window_g1

0xd801,	// (0x00041cc6) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x00043adf) popup_image_details_window_g

0xd82a,	// (0x00041cef) popup_image_details_window_t1

0xd83c,	// (0x00041d01) popup_image_details_window_t2

0xd855,	// (0x00041d1a) popup_image_details_window_t3

0xd869,	// (0x00041d2e) popup_image_details_window_t4

0xd884,	// (0x00041d49) popup_image_details_window_t5

0x0004,

0xf621,	// (0x00043ae6) popup_image_details_window_t

0x1cd0,	// (0x00036195) bg_calc_paper_pane_ParamLimits

0x1547,	// (0x00035a0c) grid_highlight_pane_cp013

0x587c,	// (0x00039d41) list_calc_pane_ParamLimits

0x588e,	// (0x00039d53) scroll_pane_cp024

0x1ce4,	// (0x000361a9) bg_calc_display_pane_ParamLimits

0x5896,	// (0x00039d5b) calc_display_pane_t1_ParamLimits

0x58ab,	// (0x00039d70) calc_display_pane_t2_ParamLimits

0x58c0,	// (0x00039d85) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00043569) calc_display_pane_t_ParamLimits

0x5999,	// (0x00039e5e) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00043586) cell_calc_pane_g

0x59a2,	// (0x00039e67) cell_calc_pane_t1

0x1d39,	// (0x000361fe) grid_highlight_pane_cp02_ParamLimits

0x1d4f,	// (0x00036214) toolbar_button_pane_cp01_ParamLimits

0x1d4f,	// (0x00036214) toolbar_button_pane_cp01

0x2bc4,	// (0x00037089) temp_image_control_pane_ParamLimits

0x2bc4,	// (0x00037089) temp_image_control_pane

0x1b35,	// (0x00035ffa) main_mp3_pane

0xd89e,	// (0x00041d63) temp_image_control_pane_g1_ParamLimits

0xd89e,	// (0x00041d63) temp_image_control_pane_g1

0xd8ac,	// (0x00041d71) temp_image_control_pane_g2_ParamLimits

0xd8ac,	// (0x00041d71) temp_image_control_pane_g2

0xd8be,	// (0x00041d83) temp_image_control_pane_g3_ParamLimits

0xd8be,	// (0x00041d83) temp_image_control_pane_g3

0x844a,	// (0x0003c90f) temp_image_control_pane_g4_ParamLimits

0x844a,	// (0x0003c90f) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x00043af1) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x00043af1) temp_image_control_pane_g

0xd89e,	// (0x00041d63) main_mp3_pane_g1

0x845b,	// (0x0003c920) main_mp3_pane_g2

0x0007,

0xf635,	// (0x00043afa) main_mp3_pane_g

0xd8f3,	// (0x00041db8) main_mp3_pane_t1

0x1c56,	// (0x0003611b) main_camera_pane_g8_ParamLimits

0x1c56,	// (0x0003611b) main_camera_pane_g8

0x6067,	// (0x0003a52c) main_video_pane_g7_ParamLimits

0x6067,	// (0x0003a52c) main_video_pane_g7

0x1ca4,	// (0x00036169) main_camera2_pane_t7_ParamLimits

0x1ca4,	// (0x00036169) main_camera2_pane_t7

0x200c,	// (0x000364d1) scroll_pane_cp025_ParamLimits

0x200c,	// (0x000364d1) scroll_pane_cp025

0x2020,	// (0x000364e5) scroll_pane_cp026_ParamLimits

0x2020,	// (0x000364e5) scroll_pane_cp026

0x202f,	// (0x000364f4) wml_content_pane_ParamLimits

0x1547,	// (0x00035a0c) main_touch_calib_pane

0x84ff,	// (0x0003c9c4) main_touch_calib_pane_g1

0x850b,	// (0x0003c9d0) main_touch_calib_pane_g2

0x8517,	// (0x0003c9dc) main_touch_calib_pane_g3

0x8523,	// (0x0003c9e8) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x00043b18) main_touch_calib_pane_g

0x852f,	// (0x0003c9f4) main_touch_calib_pane_t1

0x8548,	// (0x0003ca0d) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x00043b21) main_touch_calib_pane_t

0x278b,	// (0x00036c50) mup_progress_pane_cp02

0x27c0,	// (0x00036c85) navi_pane_g1

0x287b,	// (0x00036d40) navi_pane_mp_t3

0x1b35,	// (0x00035ffa) main_mp3_pane_ParamLimits

0x8185,	// (0x0003c64a) navi_pane_ParamLimits

0xd89e,	// (0x00041d63) main_mp3_pane_g1_ParamLimits

0x845b,	// (0x0003c920) main_mp3_pane_g2_ParamLimits

0x8467,	// (0x0003c92c) main_mp3_pane_g3_ParamLimits

0x8467,	// (0x0003c92c) main_mp3_pane_g3

0x8473,	// (0x0003c938) main_mp3_pane_g4_ParamLimits

0x8473,	// (0x0003c938) main_mp3_pane_g4

0x1c48,	// (0x0003610d) main_mp3_pane_g5_ParamLimits

0x1c48,	// (0x0003610d) main_mp3_pane_g5

0xd8ce,	// (0x00041d93) main_mp3_pane_g6_ParamLimits

0xd8ce,	// (0x00041d93) main_mp3_pane_g6

0xd8db,	// (0x00041da0) main_mp3_pane_g7_ParamLimits

0xd8db,	// (0x00041da0) main_mp3_pane_g7

0xd8e7,	// (0x00041dac) main_mp3_pane_g8_ParamLimits

0xd8e7,	// (0x00041dac) main_mp3_pane_g8

0xf635,	// (0x00043afa) main_mp3_pane_g_ParamLimits

0x847f,	// (0x0003c944) main_mp3_pane_t2

0x848f,	// (0x0003c954) main_mp3_pane_t3

0xd901,	// (0x00041dc6) main_mp3_pane_t4

0xd90f,	// (0x00041dd4) main_mp3_pane_t5

0x0005,

0xf646,	// (0x00043b0b) main_mp3_pane_t

0xd91d,	// (0x00041de2) mup_progress_pane_cp01

0x5562,	// (0x00039a27) aid_zoom_text_secondary2

0xd711,	// (0x00041bd6) list_cale_ev2_pane

0xd719,	// (0x00041bde) scroll_pane_cp023_ParamLimits

0x85a3,	// (0x0003ca68) field_cale_ev2_pane_ParamLimits

0x85a3,	// (0x0003ca68) field_cale_ev2_pane

0x4c05,	// (0x000390ca) field_cale_ev2_pane_g1_ParamLimits

0x4c05,	// (0x000390ca) field_cale_ev2_pane_g1

0x4c11,	// (0x000390d6) field_cale_ev2_pane_g2_ParamLimits

0x4c11,	// (0x000390d6) field_cale_ev2_pane_g2

0x4c29,	// (0x000390ee) field_cale_ev2_pane_g3_ParamLimits

0x4c29,	// (0x000390ee) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x00043b2c) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x00043b2c) field_cale_ev2_pane_g

0x4c4d,	// (0x00039112) field_cale_ev2_pane_t1_ParamLimits

0x4c4d,	// (0x00039112) field_cale_ev2_pane_t1

0x4c64,	// (0x00039129) field_cale_ev2_pane_t2_ParamLimits

0x4c64,	// (0x00039129) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x00043b35) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x00043b35) field_cale_ev2_pane_t

0x79c7,	// (0x0003be8c) main_postcard_pane_g5_ParamLimits

0x79c7,	// (0x0003be8c) main_postcard_pane_g5

0x79d5,	// (0x0003be9a) main_postcard_pane_g6_ParamLimits

0x79d5,	// (0x0003be9a) main_postcard_pane_g6

0x1c3a,	// (0x000360ff) camera2_autofocus_pane_cp_ParamLimits

0x1c3a,	// (0x000360ff) camera2_autofocus_pane_cp

0x1b35,	// (0x00035ffa) main_mup3_pane

0x860b,	// (0x0003cad0) main_mup3_pane_g1_ParamLimits

0x860b,	// (0x0003cad0) main_mup3_pane_g1

0x865a,	// (0x0003cb1f) main_mup3_pane_g2_ParamLimits

0x865a,	// (0x0003cb1f) main_mup3_pane_g2

0x86bd,	// (0x0003cb82) main_mup3_pane_g3_ParamLimits

0x86bd,	// (0x0003cb82) main_mup3_pane_g3

0x871c,	// (0x0003cbe1) main_mup3_pane_g4_ParamLimits

0x871c,	// (0x0003cbe1) main_mup3_pane_g4

0x877b,	// (0x0003cc40) main_mup3_pane_g5_ParamLimits

0x877b,	// (0x0003cc40) main_mup3_pane_g5

0x87da,	// (0x0003cc9f) main_mup3_pane_g6_ParamLimits

0x87da,	// (0x0003cc9f) main_mup3_pane_g6

0x1c56,	// (0x0003611b) main_mup3_pane_g7_ParamLimits

0x1c56,	// (0x0003611b) main_mup3_pane_g7

0x0007,

0xf680,	// (0x00043b45) main_mup3_pane_g_ParamLimits

0xf680,	// (0x00043b45) main_mup3_pane_g

0x884a,	// (0x0003cd0f) main_mup3_pane_t1_ParamLimits

0x884a,	// (0x0003cd0f) main_mup3_pane_t1

0x892b,	// (0x0003cdf0) main_mup3_pane_t2_ParamLimits

0x892b,	// (0x0003cdf0) main_mup3_pane_t2

0x8a0c,	// (0x0003ced1) main_mup3_pane_t4_ParamLimits

0x8a0c,	// (0x0003ced1) main_mup3_pane_t4

0x8a1e,	// (0x0003cee3) main_mup3_pane_t5_ParamLimits

0x8a1e,	// (0x0003cee3) main_mup3_pane_t5

0x8ae4,	// (0x0003cfa9) main_mup3_pane_t6_ParamLimits

0x8ae4,	// (0x0003cfa9) main_mup3_pane_t6

0x0005,

0xf691,	// (0x00043b56) main_mup3_pane_t_ParamLimits

0xf691,	// (0x00043b56) main_mup3_pane_t

0x8b81,	// (0x0003d046) mup3_progress_pane_ParamLimits

0x8b81,	// (0x0003d046) mup3_progress_pane

0xd925,	// (0x00041dea) popup_mup3_control_window_ParamLimits

0xd925,	// (0x00041dea) popup_mup3_control_window

0xd931,	// (0x00041df6) popup_mup3_text_window

0x8be4,	// (0x0003d0a9) mup3_progress_pane_t1

0x8c03,	// (0x0003d0c8) mup3_progress_pane_t2

0xd939,	// (0x00041dfe) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x00043b63) mup3_progress_pane_t

0xd956,	// (0x00041e1b) mup_progress_pane_cp03

0xd966,	// (0x00041e2b) bg_tb_trans_pane_cp04

0xd966,	// (0x00041e2b) mup3_volume_pane

0xd96e,	// (0x00041e33) popup_mup3_control_window_g1

0xd96e,	// (0x00041e33) mup3_volume_pane_g1

0xd96e,	// (0x00041e33) mup3_volume_pane_g2

0xd96e,	// (0x00041e33) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x00043b6a) mup3_volume_pane_g

0x1547,	// (0x00035a0c) bg_tb_trans_pane_cp03

0xd976,	// (0x00041e3b) popup_mup3_text_window_g1

0xd97e,	// (0x00041e43) popup_mup3_text_window_t1

0x1d2c,	// (0x000361f1) list_calc_item_pane_g1_ParamLimits

0xd40b,	// (0x000418d0) mup_volume_pane_cp_g1

0x8561,	// (0x0003ca26) main_touch_calib_pane_t3

0x8577,	// (0x0003ca3c) main_touch_calib_pane_t4

0x858d,	// (0x0003ca52) main_touch_calib_pane_t5

0x551a,	// (0x000399df) aid_cell_size_toolbar2

0x5522,	// (0x000399e7) aid_popup3_width_pane

0x4a15,	// (0x00038eda) aid_zoom_text_msg_primary

0x5f69,	// (0x0003a42e) vorec_t7

0x1cf0,	// (0x000361b5) bg_calc_paper_pane_g1_ParamLimits

0x1d08,	// (0x000361cd) bg_calc_paper_pane_g2_ParamLimits

0x1cfc,	// (0x000361c1) bg_calc_paper_pane_g3_ParamLimits

0x1d20,	// (0x000361e5) bg_calc_paper_pane_g4_ParamLimits

0x1d14,	// (0x000361d9) bg_calc_paper_pane_g5_ParamLimits

0x58ff,	// (0x00039dc4) bg_calc_paper_pane_g6_ParamLimits

0x5910,	// (0x00039dd5) bg_calc_paper_pane_g7_ParamLimits

0x5921,	// (0x00039de6) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00043570) bg_calc_paper_pane_g_ParamLimits

0x5932,	// (0x00039df7) calc_bg_paper_pane_g9_ParamLimits

0x1c3a,	// (0x000360ff) image_qvga_pane_ParamLimits

0x1c3a,	// (0x000360ff) image_qvga_pane

0x1bcd,	// (0x00036092) bg_popup_sub_pane_cp04_ParamLimits

0x2afb,	// (0x00036fc0) popup_mup_playback_window_g1_ParamLimits

0x2b07,	// (0x00036fcc) popup_mup_playback_window_t1_ParamLimits

0x2b1c,	// (0x00036fe1) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x000438ce) popup_mup_playback_window_t_ParamLimits

0x1c48,	// (0x0003610d) main_mup2_pane_g3_ParamLimits

0x1c48,	// (0x0003610d) main_mup2_pane_g3

0x6228,	// (0x0003a6ed) popup_toolbar_window_cp04

0x2e8d,	// (0x00037352) popup_call2_audio_second_window_g3_ParamLimits

0x2e8d,	// (0x00037352) popup_call2_audio_second_window_g3

0x32a5,	// (0x0003776a) popup_call2_audio_first_window_g4_ParamLimits

0x32a5,	// (0x0003776a) popup_call2_audio_first_window_g4

0x38cc,	// (0x00037d91) popup_call2_audio_in_window_g4_ParamLimits

0x38cc,	// (0x00037d91) popup_call2_audio_in_window_g4

0x7aa6,	// (0x0003bf6b) aid_area_sk_bg_cut_ParamLimits

0x7aa6,	// (0x0003bf6b) aid_area_sk_bg_cut

0x2b31,	// (0x00036ff6) aid_area_sk_bg_cut_2_ParamLimits

0x2b31,	// (0x00036ff6) aid_area_sk_bg_cut_2

0x1547,	// (0x00035a0c) aid_placing_details_win

0x1547,	// (0x00035a0c) aid_placing_details_win_2

0x1c48,	// (0x0003610d) camera2_autofocus_pane_g1_ParamLimits

0x56d3,	// (0x00039b98) popup_fixed_preview_cale_window_ParamLimits

0x56d3,	// (0x00039b98) popup_fixed_preview_cale_window

0x290b,	// (0x00036dd0) navi_slider_pane_g3

0x2902,	// (0x00036dc7) navi_slider_pane_g4

0x28f9,	// (0x00036dbe) navi_slider_pane_g5

0x290b,	// (0x00036dd0) navi_slider_pane_g6

0x7654,	// (0x0003bb19) navi_slider_pane_g7

0x2a39,	// (0x00036efe) mup_scale_pane_g3

0x2a42,	// (0x00036f07) mup_scale_pane_g4

0x2a4b,	// (0x00036f10) mup_scale_pane_g5

0x7855,	// (0x0003bd1a) mup_scale_pane_g6

0x785e,	// (0x0003bd23) mup_scale_pane_g7

0x1c86,	// (0x0003614b) cams2_slider_pane_g3

0x1c86,	// (0x0003614b) cams2_slider_pane_g4

0x1c86,	// (0x0003614b) cams2_slider_pane_g5

0x1c86,	// (0x0003614b) cams2_slider_pane_g6

0x1c86,	// (0x0003614b) cams2_slider_pane_g7

0x1c86,	// (0x0003614b) camera2_autofocus_pane_cp_g1

0x3b5a,	// (0x0003801f) bg_popup_preview_window_pane_cp02_ParamLimits

0x3b5a,	// (0x0003801f) bg_popup_preview_window_pane_cp02

0xd98c,	// (0x00041e51) list_fp_cale_pane_ParamLimits

0xd98c,	// (0x00041e51) list_fp_cale_pane

0xd998,	// (0x00041e5d) popup_fixed_preview_cale_window_t1_ParamLimits

0xd998,	// (0x00041e5d) popup_fixed_preview_cale_window_t1

0x8c22,	// (0x0003d0e7) popup_fixed_preview_cale_window_t2_ParamLimits

0x8c22,	// (0x0003d0e7) popup_fixed_preview_cale_window_t2

0x8c37,	// (0x0003d0fc) popup_fixed_preview_cale_window_t3_ParamLimits

0x8c37,	// (0x0003d0fc) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x00043b71) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x00043b71) popup_fixed_preview_cale_window_t

0x8c4c,	// (0x0003d111) list_single_fp_cale_pane_ParamLimits

0x8c4c,	// (0x0003d111) list_single_fp_cale_pane

0xd9b6,	// (0x00041e7b) list_single_fp_cale_pane_g1_ParamLimits

0xd9b6,	// (0x00041e7b) list_single_fp_cale_pane_g1

0xd9c2,	// (0x00041e87) list_single_fp_cale_pane_g2_ParamLimits

0xd9c2,	// (0x00041e87) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x00043b78) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x00043b78) list_single_fp_cale_pane_g

0xd9db,	// (0x00041ea0) list_single_fp_cale_pane_t1_ParamLimits

0xd9db,	// (0x00041ea0) list_single_fp_cale_pane_t1

0xd9ed,	// (0x00041eb2) list_single_fp_cale_pane_t2_ParamLimits

0xd9ed,	// (0x00041eb2) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x00043b7f) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x00043b7f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1547,	// (0x00035a0c) main_dialer_pane

0x1547,	// (0x00035a0c) aid_cell_size_keypad

0x1547,	// (0x00035a0c) dialer_ne_pane

0x1547,	// (0x00035a0c) grid_dialer_command_1_pane

0x1547,	// (0x00035a0c) grid_dialer_command_2_pane

0x1547,	// (0x00035a0c) grid_dialer_keypad_pane

0xd300,	// (0x000417c5) bg_popup_call_pane_cp06_ParamLimits

0xd300,	// (0x000417c5) bg_popup_call_pane_cp06

0xd300,	// (0x000417c5) dialer_ne_clear_pane_ParamLimits

0xd300,	// (0x000417c5) dialer_ne_clear_pane

0x1c86,	// (0x0003614b) dialer_ne_pane_g1

0x1ca4,	// (0x00036169) dialer_ne_pane_t1_ParamLimits

0x1ca4,	// (0x00036169) dialer_ne_pane_t1

0xda20,	// (0x00041ee5) dialer_ne_pane_t2_ParamLimits

0xda20,	// (0x00041ee5) dialer_ne_pane_t2

0x8c5f,	// (0x0003d124) dialer_ne_pane_t3_ParamLimits

0x8c5f,	// (0x0003d124) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x00043b84) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x00043b84) dialer_ne_pane_t

0x8c5f,	// (0x0003d124) dialer_ne_pane_t3_copy1_ParamLimits

0x8c5f,	// (0x0003d124) dialer_ne_pane_t3_copy1

0xda3d,	// (0x00041f02) cell_dialer_keypad_pane_ParamLimits

0xda3d,	// (0x00041f02) cell_dialer_keypad_pane

0x1b35,	// (0x00035ffa) cell_dialer_command_1_pane_ParamLimits

0x1b35,	// (0x00035ffa) cell_dialer_command_1_pane

0xda54,	// (0x00041f19) cell_dialer_command_2_pane_ParamLimits

0xda54,	// (0x00041f19) cell_dialer_command_2_pane

0x1b35,	// (0x00035ffa) bg_button_pane_cp02_ParamLimits

0x1b35,	// (0x00035ffa) bg_button_pane_cp02

0x1c48,	// (0x0003610d) cell_dialer_keypad_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) cell_dialer_keypad_pane_g1

0x1b35,	// (0x00035ffa) bg_button_pane_cp03_ParamLimits

0x1b35,	// (0x00035ffa) bg_button_pane_cp03

0x1c48,	// (0x0003610d) cell_dialer_command_1_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) cell_dialer_command_1_pane_g1

0x1547,	// (0x00035a0c) bg_button_pane_cp04

0x1c86,	// (0x0003614b) cell_dialer_command_2_pane_g1

0x1547,	// (0x00035a0c) bg_button_pane_cp06

0x1c86,	// (0x0003614b) dialer_ne_clear_pane_g1

0x27cc,	// (0x00036c91) navi_pane_g2

0x27fa,	// (0x00036cbf) navi_pane_g3

0x0002,

0xf311,	// (0x000437d6) navi_pane_g

0x2889,	// (0x00036d4e) navi_pane_mv_g2

0x28b0,	// (0x00036d75) navi_pane_mv_g5

0x761f,	// (0x0003bae4) navi_pane_mv_t1

0x1ce4,	// (0x000361a9) main_clock2_pane

0x1c3a,	// (0x000360ff) main_clock2_list_pane_ParamLimits

0x1c3a,	// (0x000360ff) main_clock2_list_pane

0x8cd5,	// (0x0003d19a) main_clock2_pane_t1_ParamLimits

0x8cd5,	// (0x0003d19a) main_clock2_pane_t1

0x8d03,	// (0x0003d1c8) main_clock2_pane_t2_ParamLimits

0x8d03,	// (0x0003d1c8) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x00043b90) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x00043b90) main_clock2_pane_t

0x8d68,	// (0x0003d22d) popup_clock_analogue_window_cp03_ParamLimits

0x8d68,	// (0x0003d22d) popup_clock_analogue_window_cp03

0x8d86,	// (0x0003d24b) popup_clock_digital_window_cp02_ParamLimits

0x8d86,	// (0x0003d24b) popup_clock_digital_window_cp02

0x8dfb,	// (0x0003d2c0) main_clock2_list_single_pane_ParamLimits

0x8dfb,	// (0x0003d2c0) main_clock2_list_single_pane

0x1efc,	// (0x000363c1) list_highlight_pane_cp05

0xda99,	// (0x00041f5e) main_clock2_list_single_pane_t1

0x6228,	// (0x0003a6ed) popup_toolbar_window_cp04_ParamLimits

0x1c56,	// (0x0003611b) camera2_autofocus_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) camera2_autofocus_pane_g2

0x1c56,	// (0x0003611b) camera2_autofocus_pane_g3_ParamLimits

0x1c56,	// (0x0003611b) camera2_autofocus_pane_g3

0x1c56,	// (0x0003611b) camera2_autofocus_pane_g4_ParamLimits

0x1c56,	// (0x0003611b) camera2_autofocus_pane_g4

0x1c56,	// (0x0003611b) camera2_autofocus_pane_g5_ParamLimits

0x1c56,	// (0x0003611b) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x00043ad4) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x00043ad4) camera2_autofocus_pane_g

0x85cc,	// (0x0003ca91) camera2_autofocus_pane_cp_g2

0x85d4,	// (0x0003ca99) camera2_autofocus_pane_cp_g3

0x85dc,	// (0x0003caa1) camera2_autofocus_pane_cp_g4

0x85e4,	// (0x0003caa9) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x00043b3a) camera2_autofocus_pane_cp_g

0x1547,	// (0x00035a0c) popup_dialer_spcha_window

0x1547,	// (0x00035a0c) bg_popup_sub_pane_cp07

0x1547,	// (0x00035a0c) list_spcha_pane

0xdaa7,	// (0x00041f6c) list_single_spcha_pane_ParamLimits

0xdaa7,	// (0x00041f6c) list_single_spcha_pane

0x1547,	// (0x00035a0c) list_highlight_pane_cp06

0x2402,	// (0x000368c7) list_single_spcha_pane_t1

0x3676,	// (0x00037b3b) popup_call2_audio_out_window_g4_ParamLimits

0x3676,	// (0x00037b3b) popup_call2_audio_out_window_g4

0x1547,	// (0x00035a0c) main_imed2_pane

0x80ae,	// (0x0003c573) popup_imed_adjust2_window

0x80c1,	// (0x0003c586) popup_imed_trans_window_ParamLimits

0x80c1,	// (0x0003c586) popup_imed_trans_window

0xd4e0,	// (0x000419a5) popup_blid_sat_info2_window_t1

0xd4ee,	// (0x000419b3) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x00043a69) popup_blid_sat_info2_window_t

0x8eb0,	// (0x0003d375) aid_size_cell_colour_35

0x8eca,	// (0x0003d38f) aid_size_cell_colour_112

0x8ee1,	// (0x0003d3a6) aid_size_cell_effect

0x1b35,	// (0x00035ffa) bg_tb_trans_pane_cp02

0x23cf,	// (0x00036894) heading_imed_pane

0x8efb,	// (0x0003d3c0) listscroll_imed_pane

0xdab9,	// (0x00041f7e) heading_imed_pane_g1

0xdac1,	// (0x00041f86) heading_imed_pane_t1

0xdacf,	// (0x00041f94) grid_imed_colour_35_pane_ParamLimits

0xdacf,	// (0x00041f94) grid_imed_colour_35_pane

0x8f07,	// (0x0003d3cc) grid_imed_effect_pane

0xdae6,	// (0x00041fab) list_imed_aspect_pane

0x8f17,	// (0x0003d3dc) scroll_pane_cp027_ParamLimits

0x8f17,	// (0x0003d3dc) scroll_pane_cp027

0x8f23,	// (0x0003d3e8) cell_imed_effect_pane_ParamLimits

0x8f23,	// (0x0003d3e8) cell_imed_effect_pane

0xdaee,	// (0x00041fb3) cell_imed_colour_pane_ParamLimits

0xdaee,	// (0x00041fb3) cell_imed_colour_pane

0xdb30,	// (0x00041ff5) cell_imed_colour_pane_g1_ParamLimits

0xdb30,	// (0x00041ff5) cell_imed_colour_pane_g1

0xdb41,	// (0x00042006) hgihlgiht_grid_pane_cp016_ParamLimits

0xdb41,	// (0x00042006) hgihlgiht_grid_pane_cp016

0x8f3b,	// (0x0003d400) cell_imed_effect_pane_g1

0x8f43,	// (0x0003d408) grid_highlight_pane_cp017

0xdb52,	// (0x00042017) list_imed_single_pane_ParamLimits

0xdb52,	// (0x00042017) list_imed_single_pane

0x1547,	// (0x00035a0c) list_highlight_pane_cp07

0xdb67,	// (0x0004202c) list_imed_aspect_pane_comp1_t1

0x29c9,	// (0x00036e8e) bg_tb_trans_pane_cp05

0xdb89,	// (0x0004204e) popup_imed_adjust2_window_g1

0xdbb0,	// (0x00042075) popup_imed_adjust2_window_t1

0xdbc8,	// (0x0004208d) slider_imed_adjust_pane

0xdbdc,	// (0x000420a1) slider_imed_adjust_pane_g1

0xdbec,	// (0x000420b1) slider_imed_adjust_pane_g2

0xdbfc,	// (0x000420c1) slider_imed_adjust_pane_g3

0xdc0d,	// (0x000420d2) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x00043bad) slider_imed_adjust_pane_g

0x8f4c,	// (0x0003d411) aid_size_cell_clipart2

0x8f58,	// (0x0003d41d) grid_imed_clipart_pane

0x2a5c,	// (0x00036f21) scroll_pane_cp031

0x8f62,	// (0x0003d427) cell_imed_clipart_pane_ParamLimits

0x8f62,	// (0x0003d427) cell_imed_clipart_pane

0x8f84,	// (0x0003d449) cell_imed_clipart_pane_g1

0x1547,	// (0x00035a0c) grid_highlight_pane_cp014

0x8cb7,	// (0x0003d17c) main_clock2_pane_g1_ParamLimits

0x8cb7,	// (0x0003d17c) main_clock2_pane_g1

0x8da2,	// (0x0003d267) aid_call2_pane_cp10

0x8db4,	// (0x0003d279) aid_call_pane_cp10

0x272d,	// (0x00036bf2) popup_clock_analogue_window_cp10_g1

0x272d,	// (0x00036bf2) popup_clock_analogue_window_cp10_g2

0x8dc6,	// (0x0003d28b) popup_clock_analogue_window_cp10_g3

0x8dc6,	// (0x0003d28b) popup_clock_analogue_window_cp10_g4

0x272d,	// (0x00036bf2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x00043b9b) popup_clock_analogue_window_cp10_g

0x8ddc,	// (0x0003d2a1) popup_clock_analogue_window_cp10_t1

0x8e0d,	// (0x0003d2d2) clock_digital_number_pane_cp10_ParamLimits

0x8e0d,	// (0x0003d2d2) clock_digital_number_pane_cp10

0x8e27,	// (0x0003d2ec) clock_digital_number_pane_cp11_ParamLimits

0x8e27,	// (0x0003d2ec) clock_digital_number_pane_cp11

0x8e41,	// (0x0003d306) clock_digital_number_pane_cp12_ParamLimits

0x8e41,	// (0x0003d306) clock_digital_number_pane_cp12

0x8e5b,	// (0x0003d320) clock_digital_number_pane_cp13_ParamLimits

0x8e5b,	// (0x0003d320) clock_digital_number_pane_cp13

0x8e75,	// (0x0003d33a) clock_digital_separator_pane_cp10_ParamLimits

0x8e75,	// (0x0003d33a) clock_digital_separator_pane_cp10

0x8e8f,	// (0x0003d354) popup_clock_digital_window_cp02_t1_ParamLimits

0x8e8f,	// (0x0003d354) popup_clock_digital_window_cp02_t1

0x1bc5,	// (0x0003608a) clock_digital_number_pane_cp10_g1

0x1bc5,	// (0x0003608a) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x00043bb6) clock_digital_number_pane_cp10_g

0x1bc5,	// (0x0003608a) clock_digital_separator_pane_cp10_g1

0x1bc5,	// (0x0003608a) clock_digital_separator_pane_g2_cp10

0x28b8,	// (0x00036d7d) navi_pane_vded_g4

0x28c1,	// (0x00036d86) navi_pane_vded_g5

0x28ca,	// (0x00036d8f) navi_pane_vded_t1

0x1547,	// (0x00035a0c) main_vded_pane

0x8f8d,	// (0x0003d452) main_vded_pane_g1

0x8f99,	// (0x0003d45e) main_vded_pane_g2

0x8fa3,	// (0x0003d468) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x00043bbb) main_vded_pane_g

0x8fad,	// (0x0003d472) main_vded_pane_t1

0x8fbb,	// (0x0003d480) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x00043bc2) main_vded_pane_t

0x8fc9,	// (0x0003d48e) vded_slider_pane

0x8fd3,	// (0x0003d498) vded_video_pane

0xdc1e,	// (0x000420e3) vded_video_pane_g1

0x8fdd,	// (0x0003d4a2) vded_video_pane_g2

0x1c86,	// (0x0003614b) vded_video_pane_g3

0x0002,

0xf702,	// (0x00043bc7) vded_video_pane_g

0xdc28,	// (0x000420ed) vded_slider_pane_g1

0xd40b,	// (0x000418d0) vded_slider_pane_g2

0xdc31,	// (0x000420f6) vded_slider_pane_g3

0xdc3a,	// (0x000420ff) vded_slider_pane_g4

0xdc43,	// (0x00042108) vded_slider_pane_g5

0x0004,

0xf709,	// (0x00043bce) vded_slider_pane_g

0xd925,	// (0x00041dea) mup3_rocker_pane_ParamLimits

0xd925,	// (0x00041dea) mup3_rocker_pane

0xd96e,	// (0x00041e33) mup3_control_keys_pane_g1

0xdc4c,	// (0x00042111) mup3_control_keys_pane_g2

0xd96e,	// (0x00041e33) mup3_control_keys_pane_g3

0xdc54,	// (0x00042119) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x00043bd9) mup3_control_keys_pane_g

0x56fb,	// (0x00039bc0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x56fb,	// (0x00039bc0) popup_toolbar2_fixed_window_cp01

0xd925,	// (0x00041dea) popup_toolbar2_fixed_window_cp02_ParamLimits

0xd925,	// (0x00041dea) popup_toolbar2_fixed_window_cp02

0x2fff,	// (0x000374c4) popup_call2_audio_second_window_t4_ParamLimits

0x2fff,	// (0x000374c4) popup_call2_audio_second_window_t4

0x353b,	// (0x00037a00) popup_call2_audio_first_window_t6_ParamLimits

0x353b,	// (0x00037a00) popup_call2_audio_first_window_t6

0x3779,	// (0x00037c3e) popup_call2_audio_out_window_t6_ParamLimits

0x3779,	// (0x00037c3e) popup_call2_audio_out_window_t6

0x1547,	// (0x00035a0c) main_vitu_pane

0x1c3a,	// (0x000360ff) aid_size_cell_itu_ParamLimits

0x1c3a,	// (0x000360ff) aid_size_cell_itu

0x1c3a,	// (0x000360ff) bg_popup_window_pane_cp08_ParamLimits

0x1c3a,	// (0x000360ff) bg_popup_window_pane_cp08

0x1c3a,	// (0x000360ff) field_vitu_entry_pane_ParamLimits

0x1c3a,	// (0x000360ff) field_vitu_entry_pane

0x1c3a,	// (0x000360ff) grid_vitu_function_pane_ParamLimits

0x1c3a,	// (0x000360ff) grid_vitu_function_pane

0x1c3a,	// (0x000360ff) grid_vitu_itu_pane_ParamLimits

0x1c3a,	// (0x000360ff) grid_vitu_itu_pane

0x1c3a,	// (0x000360ff) cell_vitu_itu_pane_ParamLimits

0x1c3a,	// (0x000360ff) cell_vitu_itu_pane

0x1c3a,	// (0x000360ff) cell_vitu_function_pane_ParamLimits

0x1c3a,	// (0x000360ff) cell_vitu_function_pane

0x1b35,	// (0x00035ffa) bg_popup_sub_pane_cp08_ParamLimits

0x1b35,	// (0x00035ffa) bg_popup_sub_pane_cp08

0x1c90,	// (0x00036155) field_vitu_entry_pane_t1_ParamLimits

0x1c90,	// (0x00036155) field_vitu_entry_pane_t1

0xda20,	// (0x00041ee5) field_vitu_entry_pane_t2_ParamLimits

0xda20,	// (0x00041ee5) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x00043be2) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x00043be2) field_vitu_entry_pane_t

0xd300,	// (0x000417c5) bg_button_pane_cp05_ParamLimits

0xd300,	// (0x000417c5) bg_button_pane_cp05

0xdc5c,	// (0x00042121) cell_vitu_itu_pane_g1

0x29b5,	// (0x00036e7a) cell_vitu_itu_pane_t1_ParamLimits

0x29b5,	// (0x00036e7a) cell_vitu_itu_pane_t1

0x29b5,	// (0x00036e7a) cell_vitu_itu_pane_t2_ParamLimits

0x29b5,	// (0x00036e7a) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x00043be7) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x00043be7) cell_vitu_itu_pane_t

0x1547,	// (0x00035a0c) bg_button_pane_cp07

0x1c86,	// (0x0003614b) cell_vitu_function_pane_g1

0x5865,	// (0x00039d2a) main_calc_pane_g1

0x5556,	// (0x00039a1b) aid_visual_content_pane

0x1547,	// (0x00035a0c) main_vradio_pane

0x1c56,	// (0x0003611b) main_vradio_pane_g1_ParamLimits

0x1c56,	// (0x0003611b) main_vradio_pane_g1

0x1c56,	// (0x0003611b) main_vradio_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x0004397e) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x0004397e) main_vradio_pane_g

0x1ca4,	// (0x00036169) main_vradio_pane_t1_ParamLimits

0x1ca4,	// (0x00036169) main_vradio_pane_t1

0x1ca4,	// (0x00036169) main_vradio_pane_t2_ParamLimits

0x1ca4,	// (0x00036169) main_vradio_pane_t2

0x1ca4,	// (0x00036169) main_vradio_pane_t3_ParamLimits

0x1ca4,	// (0x00036169) main_vradio_pane_t3

0x0002,

0xf729,	// (0x00043bee) main_vradio_pane_t_ParamLimits

0xf729,	// (0x00043bee) main_vradio_pane_t

0x1c3a,	// (0x000360ff) vradio_rocker_control_pane_ParamLimits

0x1c3a,	// (0x000360ff) vradio_rocker_control_pane

0x1c3a,	// (0x000360ff) vradio_station_info_pane_ParamLimits

0x1c3a,	// (0x000360ff) vradio_station_info_pane

0x1b35,	// (0x00035ffa) vradio_frequency_info_pane_ParamLimits

0x1b35,	// (0x00035ffa) vradio_frequency_info_pane

0x1c86,	// (0x0003614b) vradio_station_info_pane_g1

0x29b5,	// (0x00036e7a) vradio_station_info_pane_t1_ParamLimits

0x29b5,	// (0x00036e7a) vradio_station_info_pane_t1

0x1ca4,	// (0x00036169) vradio_station_info_pane_t2_ParamLimits

0x1ca4,	// (0x00036169) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x00043bf5) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x00043bf5) vradio_station_info_pane_t

0x1547,	// (0x00035a0c) vradio_tuning_pane

0x8fe6,	// (0x0003d4ab) vradio_rocker_control_pane_g1

0xdc78,	// (0x0004213d) vradio_rocker_control_pane_g2

0x8fee,	// (0x0003d4b3) vradio_rocker_control_pane_g3

0x8ff6,	// (0x0003d4bb) vradio_rocker_control_pane_g4

0x8ffe,	// (0x0003d4c3) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x00043bfa) vradio_rocker_control_pane_g

0x1c86,	// (0x0003614b) vradio_frequency_info_pane_g1

0x1c90,	// (0x00036155) vradio_frequency_info_pane_t1_ParamLimits

0x1c90,	// (0x00036155) vradio_frequency_info_pane_t1

0x9006,	// (0x0003d4cb) vradio_tuning_pane_g1

0x9013,	// (0x0003d4d8) vradio_tuning_pane_t1

0x559f,	// (0x00039a64) area_side_right_pane_ParamLimits

0x559f,	// (0x00039a64) area_side_right_pane

0x3b21,	// (0x00037fe6) status_small_pane_g1

0x3b29,	// (0x00037fee) status_small_pane_g2

0x3b32,	// (0x00037ff7) status_small_pane_g3

0x3b3b,	// (0x00038000) status_small_pane_g4

0x0003,

0xf506,	// (0x000439cb) status_small_pane_g

0x3b44,	// (0x00038009) status_small_pane_t1

0x1547,	// (0x00035a0c) main_video3_pane

0x1547,	// (0x00035a0c) cams_zoom_vslider_pane

0xdc80,	// (0x00042145) image3_wide_pane_ParamLimits

0xdc80,	// (0x00042145) image3_wide_pane

0x1547,	// (0x00035a0c) image3_wide_small_pane

0xdc9a,	// (0x0004215f) main_video3_pane_g1_ParamLimits

0xdc9a,	// (0x0004215f) main_video3_pane_g1

0xdc9a,	// (0x0004215f) main_video3_pane_g2_ParamLimits

0xdc9a,	// (0x0004215f) main_video3_pane_g2

0x0001,

0xf740,	// (0x00043c05) main_video3_pane_g_ParamLimits

0xf740,	// (0x00043c05) main_video3_pane_g

0xdcb8,	// (0x0004217d) main_video3_pane_t1_ParamLimits

0xdcb8,	// (0x0004217d) main_video3_pane_t1

0xdcb8,	// (0x0004217d) main_video3_pane_t2_ParamLimits

0xdcb8,	// (0x0004217d) main_video3_pane_t2

0xdcb8,	// (0x0004217d) main_video3_pane_t3_ParamLimits

0xdcb8,	// (0x0004217d) main_video3_pane_t3

0x0002,

0xf745,	// (0x00043c0a) main_video3_pane_t_ParamLimits

0xf745,	// (0x00043c0a) main_video3_pane_t

0x1c86,	// (0x0003614b) cams_zoom_vslider_pane_g1

0x1c86,	// (0x0003614b) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00043551) cams_zoom_vslider_pane_g

0x1547,	// (0x00035a0c) small_slider_vertical_pane

0x1c86,	// (0x0003614b) small_slider_vertical_pane_g1

0x1c86,	// (0x0003614b) small_slider_vertical_pane_g2

0xdcdf,	// (0x000421a4) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x00043c11) small_slider_vertical_pane_g

0x1547,	// (0x00035a0c) main_hwr_training_pane

0xdce8,	// (0x000421ad) hwr_training_instruct_pane_ParamLimits

0xdce8,	// (0x000421ad) hwr_training_instruct_pane

0x9022,	// (0x0003d4e7) hwr_training_navi_pane_ParamLimits

0x9022,	// (0x0003d4e7) hwr_training_navi_pane

0x903c,	// (0x0003d501) hwr_training_write_pane_ParamLimits

0x903c,	// (0x0003d501) hwr_training_write_pane

0x1547,	// (0x00035a0c) bg_frame_shadow_pane

0xdd1f,	// (0x000421e4) hwr_training_write_pane_g1

0xdd27,	// (0x000421ec) hwr_training_write_pane_g2

0xdd2f,	// (0x000421f4) hwr_training_write_pane_g3

0xdd37,	// (0x000421fc) hwr_training_write_pane_g4

0xdd3f,	// (0x00042204) hwr_training_write_pane_g5

0xdd47,	// (0x0004220c) hwr_training_write_pane_g6

0xdd4f,	// (0x00042214) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x00043c18) hwr_training_write_pane_g

0x9074,	// (0x0003d539) hwr_training_navi_pane_g1_ParamLimits

0x9074,	// (0x0003d539) hwr_training_navi_pane_g1

0x9086,	// (0x0003d54b) hwr_training_navi_pane_g2_ParamLimits

0x9086,	// (0x0003d54b) hwr_training_navi_pane_g2

0x9098,	// (0x0003d55d) hwr_training_navi_pane_g3_ParamLimits

0x9098,	// (0x0003d55d) hwr_training_navi_pane_g3

0x90a8,	// (0x0003d56d) hwr_training_navi_pane_g4_ParamLimits

0x90a8,	// (0x0003d56d) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x00043c27) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x00043c27) hwr_training_navi_pane_g

0x90c2,	// (0x0003d587) hwr_training_navi_pane_t1

0x90d0,	// (0x0003d595) list_single_hwr_training_instruct_pane_ParamLimits

0x90d0,	// (0x0003d595) list_single_hwr_training_instruct_pane

0xdd57,	// (0x0004221c) list_single_hwr_training_instruct_pane_t1

0xd5e1,	// (0x00041aa6) bg_frame_shadow_pane_g1

0xdd66,	// (0x0004222b) bg_frame_shadow_pane_g2

0xdd6e,	// (0x00042233) bg_frame_shadow_pane_g3

0xdd76,	// (0x0004223b) bg_frame_shadow_pane_g4

0xdd7e,	// (0x00042243) bg_frame_shadow_pane_g5

0xdd86,	// (0x0004224b) bg_frame_shadow_pane_g6

0xdd8e,	// (0x00042253) bg_frame_shadow_pane_g7

0x1d9c,	// (0x00036261) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x00043c32) bg_frame_shadow_pane_g

0x1547,	// (0x00035a0c) main_video_tele_dialer_pane

0x90f5,	// (0x0003d5ba) aid_size_cell_video_keypad_ParamLimits

0x90f5,	// (0x0003d5ba) aid_size_cell_video_keypad

0x9105,	// (0x0003d5ca) grid_video_dialer_keypad_pane_ParamLimits

0x9105,	// (0x0003d5ca) grid_video_dialer_keypad_pane

0x9139,	// (0x0003d5fe) video_down_pane_cp_ParamLimits

0x9139,	// (0x0003d5fe) video_down_pane_cp

0x9163,	// (0x0003d628) cell_video_dialer_keypad_pane_ParamLimits

0x9163,	// (0x0003d628) cell_video_dialer_keypad_pane

0xdd96,	// (0x0004225b) bg_button_pane_cp08_ParamLimits

0xdd96,	// (0x0004225b) bg_button_pane_cp08

0x9178,	// (0x0003d63d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9178,	// (0x0003d63d) cell_video_dialer_keypad_pane_g1

0xd925,	// (0x00041dea) mup3_rocker2_pane_ParamLimits

0xd925,	// (0x00041dea) mup3_rocker2_pane

0x1c86,	// (0x0003614b) mup3_rocker2_pane_g1

0x801e,	// (0x0003c4e3) main_dialer2_pane

0x1547,	// (0x00035a0c) main_mp4_pane

0x91cd,	// (0x0003d692) main_mp4_pane_g1_ParamLimits

0x91cd,	// (0x0003d692) main_mp4_pane_g1

0x91ef,	// (0x0003d6b4) main_mp4_pane_g2_ParamLimits

0x91ef,	// (0x0003d6b4) main_mp4_pane_g2

0x920d,	// (0x0003d6d2) main_mp4_pane_g3_ParamLimits

0x920d,	// (0x0003d6d2) main_mp4_pane_g3

0x9246,	// (0x0003d70b) main_mp4_pane_g4_ParamLimits

0x9246,	// (0x0003d70b) main_mp4_pane_g4

0x926e,	// (0x0003d733) main_mp4_pane_g5_ParamLimits

0x926e,	// (0x0003d733) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x00043c52) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x00043c52) main_mp4_pane_g

0x92d6,	// (0x0003d79b) main_mp4_pane_t1_ParamLimits

0x92d6,	// (0x0003d79b) main_mp4_pane_t1

0x9338,	// (0x0003d7fd) main_mp4_pane_t2_ParamLimits

0x9338,	// (0x0003d7fd) main_mp4_pane_t2

0x939c,	// (0x0003d861) main_mp4_pane_t3_ParamLimits

0x939c,	// (0x0003d861) main_mp4_pane_t3

0x93fa,	// (0x0003d8bf) main_mp4_pane_t4_ParamLimits

0x93fa,	// (0x0003d8bf) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x00043c63) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x00043c63) main_mp4_pane_t

0x9458,	// (0x0003d91d) mp4_progress_pane_ParamLimits

0x9458,	// (0x0003d91d) mp4_progress_pane

0xdda2,	// (0x00042267) mp4_rocker_pane_ParamLimits

0xdda2,	// (0x00042267) mp4_rocker_pane

0xddb6,	// (0x0004227b) mp4_progress_pane_t1

0xddd5,	// (0x0004229a) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x00043c6c) mp4_progress_pane_t

0xddf4,	// (0x000422b9) mup_progress_pane_cp04

0x1c86,	// (0x0003614b) mp4_rocker_pane_g1

0x1c3a,	// (0x000360ff) aid_cell_size_keypad2_ParamLimits

0x1c3a,	// (0x000360ff) aid_cell_size_keypad2

0x1c3a,	// (0x000360ff) dialer2_ne_pane_ParamLimits

0x1c3a,	// (0x000360ff) dialer2_ne_pane

0x1c3a,	// (0x000360ff) grid_dialer2_keypad_pane_ParamLimits

0x1c3a,	// (0x000360ff) grid_dialer2_keypad_pane

0xde07,	// (0x000422cc) bg_popup_call_pane_cp07_ParamLimits

0xde07,	// (0x000422cc) bg_popup_call_pane_cp07

0x9494,	// (0x0003d959) dialer2_ne_pane_t1_ParamLimits

0x9494,	// (0x0003d959) dialer2_ne_pane_t1

0xda3d,	// (0x00041f02) cell_dialer2_keypad_pane_ParamLimits

0xda3d,	// (0x00041f02) cell_dialer2_keypad_pane

0xd300,	// (0x000417c5) bg_button_pane_pane_cp04_ParamLimits

0xd300,	// (0x000417c5) bg_button_pane_pane_cp04

0x1c48,	// (0x0003610d) cell_dialer2_keypad_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) cell_dialer2_keypad_pane_g1

0x60ea,	// (0x0003a5af) aid_placing_vt_set_content_ParamLimits

0x60ea,	// (0x0003a5af) aid_placing_vt_set_content

0x6116,	// (0x0003a5db) aid_placing_vt_set_title_ParamLimits

0x6116,	// (0x0003a5db) aid_placing_vt_set_title

0x1547,	// (0x00035a0c) main_image3_pane

0x94ed,	// (0x0003d9b2) area_side_right_pane_cp01_ParamLimits

0x94ed,	// (0x0003d9b2) area_side_right_pane_cp01

0x1c64,	// (0x00036129) main_image3_pane_g1_ParamLimits

0x1c64,	// (0x00036129) main_image3_pane_g1

0x951a,	// (0x0003d9df) main_image3_pane_g2_ParamLimits

0x951a,	// (0x0003d9df) main_image3_pane_g2

0x9533,	// (0x0003d9f8) main_image3_pane_g3_ParamLimits

0x9533,	// (0x0003d9f8) main_image3_pane_g3

0x954c,	// (0x0003da11) main_image3_pane_g4_ParamLimits

0x954c,	// (0x0003da11) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x00043c7b) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x00043c7b) main_image3_pane_g

0x9565,	// (0x0003da2a) main_image3_pane_t1_ParamLimits

0x9565,	// (0x0003da2a) main_image3_pane_t1

0x958a,	// (0x0003da4f) main_image3_pane_t2_ParamLimits

0x958a,	// (0x0003da4f) main_image3_pane_t2

0x95a9,	// (0x0003da6e) main_image3_pane_t3_ParamLimits

0x95a9,	// (0x0003da6e) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x00043c84) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x00043c84) main_image3_pane_t

0x1c3a,	// (0x000360ff) grid_sctrl_middle_pane_cp01_ParamLimits

0x1c3a,	// (0x000360ff) grid_sctrl_middle_pane_cp01

0x960a,	// (0x0003dacf) cell_sctrl_middle_pane_cp01_ParamLimits

0x960a,	// (0x0003dacf) cell_sctrl_middle_pane_cp01

0x961b,	// (0x0003dae0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x961b,	// (0x0003dae0) cell_sctrl_middle_pane_cp01_g1

0x1547,	// (0x00035a0c) main_call4_pane

0x9628,	// (0x0003daed) aid_size_button_call4_ParamLimits

0x9628,	// (0x0003daed) aid_size_button_call4

0x965e,	// (0x0003db23) call4_windows_pane_ParamLimits

0x965e,	// (0x0003db23) call4_windows_pane

0x9673,	// (0x0003db38) grid_call4_button_pane_ParamLimits

0x9673,	// (0x0003db38) grid_call4_button_pane

0x96a1,	// (0x0003db66) call4_windows_conf_pane

0x96b8,	// (0x0003db7d) popup_call4_audio_first_window_ParamLimits

0x96b8,	// (0x0003db7d) popup_call4_audio_first_window

0x9708,	// (0x0003dbcd) popup_call4_audio_second_window_ParamLimits

0x9708,	// (0x0003dbcd) popup_call4_audio_second_window

0x9721,	// (0x0003dbe6) popup_call4_audio_wait_window_ParamLimits

0x9721,	// (0x0003dbe6) popup_call4_audio_wait_window

0x972f,	// (0x0003dbf4) cell_call4_button_pane_ParamLimits

0x972f,	// (0x0003dbf4) cell_call4_button_pane

0x9752,	// (0x0003dc17) bg_button_pane_cp09_ParamLimits

0x9752,	// (0x0003dc17) bg_button_pane_cp09

0x975e,	// (0x0003dc23) cell_call4_button_pane_g1_ParamLimits

0x975e,	// (0x0003dc23) cell_call4_button_pane_g1

0x976b,	// (0x0003dc30) cell_call4_button_pane_t1_ParamLimits

0x976b,	// (0x0003dc30) cell_call4_button_pane_t1

0xde4b,	// (0x00042310) popup_call4_audio_conf_window_ParamLimits

0xde4b,	// (0x00042310) popup_call4_audio_conf_window

0x8be4,	// (0x0003d0a9) mup3_progress_pane_t1_ParamLimits

0x8c03,	// (0x0003d0c8) mup3_progress_pane_t2_ParamLimits

0xd939,	// (0x00041dfe) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x00043b63) mup3_progress_pane_t_ParamLimits

0xd956,	// (0x00041e1b) mup_progress_pane_cp03_ParamLimits

0xd96e,	// (0x00041e33) mup3_control_keys_pane_g4_copy1

0xdda2,	// (0x00042267) mp4_rocker2_pane_ParamLimits

0xdda2,	// (0x00042267) mp4_rocker2_pane

0xd96e,	// (0x00041e33) mp4_rocker2_pane_g1

0xd96e,	// (0x00041e33) mp4_rocker2_pane_g2

0xd96e,	// (0x00041e33) mp4_rocker2_pane_g3

0xd96e,	// (0x00041e33) mp4_rocker2_pane_g4

0xd96e,	// (0x00041e33) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x00043c8d) mp4_rocker2_pane_g

0x1547,	// (0x00035a0c) main_camera4_pane

0x1547,	// (0x00035a0c) main_video4_pane

0x9115,	// (0x0003d5da) main_video_tele_dialer_pane_t1_ParamLimits

0x9115,	// (0x0003d5da) main_video_tele_dialer_pane_t1

0x9127,	// (0x0003d5ec) main_video_tele_dialer_pane_t2_ParamLimits

0x9127,	// (0x0003d5ec) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x00043c43) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x00043c43) main_video_tele_dialer_pane_t

0x97c7,	// (0x0003dc8c) cam4_autofocus_pane_ParamLimits

0x97c7,	// (0x0003dc8c) cam4_autofocus_pane

0x97e1,	// (0x0003dca6) cam4_image_uncrop_pane_ParamLimits

0x97e1,	// (0x0003dca6) cam4_image_uncrop_pane

0x97f8,	// (0x0003dcbd) cam4_indicators_pane_ParamLimits

0x97f8,	// (0x0003dcbd) cam4_indicators_pane

0x9814,	// (0x0003dcd9) main_camera4_pane_g1_ParamLimits

0x9814,	// (0x0003dcd9) main_camera4_pane_g1

0x9820,	// (0x0003dce5) main_camera4_pane_g2_ParamLimits

0x9820,	// (0x0003dce5) main_camera4_pane_g2

0x9820,	// (0x0003dce5) main_camera4_pane_g3_ParamLimits

0x9820,	// (0x0003dce5) main_camera4_pane_g3

0x982c,	// (0x0003dcf1) main_camera4_pane_g4_ParamLimits

0x982c,	// (0x0003dcf1) main_camera4_pane_g4

0x9838,	// (0x0003dcfd) main_camera4_pane_g5_ParamLimits

0x9838,	// (0x0003dcfd) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x00043c98) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x00043c98) main_camera4_pane_g

0x9852,	// (0x0003dd17) main_camera4_pane_t1_ParamLimits

0x9852,	// (0x0003dd17) main_camera4_pane_t1

0x1c48,	// (0x0003610d) bg_tb_trans_pane_cp06

0x98a2,	// (0x0003dd67) cam4_indicators_pane_g1

0x98b3,	// (0x0003dd78) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x00043cb3) cam4_indicators_pane_g

0x98d1,	// (0x0003dd96) cam4_indicators_pane_t1

0x98fb,	// (0x0003ddc0) main_video4_pane_g1_ParamLimits

0x98fb,	// (0x0003ddc0) main_video4_pane_g1

0x9907,	// (0x0003ddcc) main_video4_pane_g2_ParamLimits

0x9907,	// (0x0003ddcc) main_video4_pane_g2

0x9913,	// (0x0003ddd8) main_video4_pane_g3_ParamLimits

0x9913,	// (0x0003ddd8) main_video4_pane_g3

0x991f,	// (0x0003dde4) main_video4_pane_g4_ParamLimits

0x991f,	// (0x0003dde4) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x00043cba) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x00043cba) main_video4_pane_g

0x993f,	// (0x0003de04) vid4_indicators_pane_ParamLimits

0x993f,	// (0x0003de04) vid4_indicators_pane

0x995e,	// (0x0003de23) video4_image_uncrop_cif_pane_ParamLimits

0x995e,	// (0x0003de23) video4_image_uncrop_cif_pane

0x996d,	// (0x0003de32) video4_image_uncrop_nhd_pane_ParamLimits

0x996d,	// (0x0003de32) video4_image_uncrop_nhd_pane

0x97e1,	// (0x0003dca6) video4_image_uncrop_vga_pane_ParamLimits

0x97e1,	// (0x0003dca6) video4_image_uncrop_vga_pane

0x1b35,	// (0x00035ffa) bg_tb_trans_pane_cp07

0x9984,	// (0x0003de49) vid4_indicators_pane_g1

0x9998,	// (0x0003de5d) vid4_indicators_pane_g2

0x99ac,	// (0x0003de71) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x00043cc5) vid4_indicators_pane_g

0x99db,	// (0x0003dea0) vid4_indicators_pane_t1

0x99f2,	// (0x0003deb7) cam4_autofocus_pane_g1

0x99fa,	// (0x0003debf) cam4_autofocus_pane_g2

0x9a02,	// (0x0003dec7) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x00043cd0) cam4_autofocus_pane_g

0x9a0a,	// (0x0003decf) cam4_autofocus_pane_g3_copy1

0x9147,	// (0x0003d60c) video_down_pane_cp_t1

0x9155,	// (0x0003d61a) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x00043c48) video_down_pane_cp_t

0x1c3a,	// (0x000360ff) popup_vitu2_window_ParamLimits

0x1c3a,	// (0x000360ff) popup_vitu2_window

0x9a12,	// (0x0003ded7) aid_size_cell2_itu2_ParamLimits

0x9a12,	// (0x0003ded7) aid_size_cell2_itu2

0x9a34,	// (0x0003def9) aid_size_cell_itu2_ParamLimits

0x9a34,	// (0x0003def9) aid_size_cell_itu2

0xde07,	// (0x000422cc) bg_popup_window_pane_cp09_ParamLimits

0xde07,	// (0x000422cc) bg_popup_window_pane_cp09

0x9a78,	// (0x0003df3d) field_vitu2_entry_pane_ParamLimits

0x9a78,	// (0x0003df3d) field_vitu2_entry_pane

0x9a98,	// (0x0003df5d) grid_vitu2_function_pane_ParamLimits

0x9a98,	// (0x0003df5d) grid_vitu2_function_pane

0x9adc,	// (0x0003dfa1) grid_vitu2_itu_pane_ParamLimits

0x9adc,	// (0x0003dfa1) grid_vitu2_itu_pane

0x9b54,	// (0x0003e019) cell_vitu2_itu_pane_ParamLimits

0x9b54,	// (0x0003e019) cell_vitu2_itu_pane

0x9b6d,	// (0x0003e032) cell_vitu2_function_pane_ParamLimits

0x9b6d,	// (0x0003e032) cell_vitu2_function_pane

0xde5f,	// (0x00042324) bg_popup_call_pane_cp08_ParamLimits

0xde5f,	// (0x00042324) bg_popup_call_pane_cp08

0xde76,	// (0x0004233b) field_vitu2_entry_pane_g1

0xde82,	// (0x00042347) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x00043cd7) field_vitu2_entry_pane_g

0x9bae,	// (0x0003e073) field_vitu2_entry_pane_t1_ParamLimits

0x9bae,	// (0x0003e073) field_vitu2_entry_pane_t1

0xde8e,	// (0x00042353) field_vitu2_entry_pane_t2_ParamLimits

0xde8e,	// (0x00042353) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x00043cde) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x00043cde) field_vitu2_entry_pane_t

0x834c,	// (0x0003c811) bg_button_pane_cp010_ParamLimits

0x834c,	// (0x0003c811) bg_button_pane_cp010

0x9be1,	// (0x0003e0a6) cell_vitu2_itu_pane_g1

0x9c07,	// (0x0003e0cc) cell_vitu2_itu_pane_t1_ParamLimits

0x9c07,	// (0x0003e0cc) cell_vitu2_itu_pane_t1

0x9c53,	// (0x0003e118) cell_vitu2_itu_pane_t2_ParamLimits

0x9c53,	// (0x0003e118) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x00043ce8) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x00043ce8) cell_vitu2_itu_pane_t

0x1b35,	// (0x00035ffa) bg_button_pane_cp011

0x9d1b,	// (0x0003e1e0) cell_vitu2_function_pane_g1

0x1547,	// (0x00035a0c) main_myfav_hc_pane

0x95eb,	// (0x0003dab0) popup_image3_note_pane_ParamLimits

0x95eb,	// (0x0003dab0) popup_image3_note_pane

0x95f9,	// (0x0003dabe) popup_image3_tool_bar_pane_ParamLimits

0x95f9,	// (0x0003dabe) popup_image3_tool_bar_pane

0x9cc9,	// (0x0003e18e) cell_vitu2_itu_pane_t3_ParamLimits

0x9cc9,	// (0x0003e18e) cell_vitu2_itu_pane_t3

0x1547,	// (0x00035a0c) bg_popup_trans_pane

0xdeb3,	// (0x00042378) grid_image3_tool_bar_pane

0xdebd,	// (0x00042382) bg_popup_trans_pane_g1

0x211e,	// (0x000365e3) bg_popup_trans_pane_g2

0xdec5,	// (0x0004238a) bg_popup_trans_pane_g3

0xdecd,	// (0x00042392) bg_popup_trans_pane_g4

0xded5,	// (0x0004239a) bg_popup_trans_pane_g5

0xdedd,	// (0x000423a2) bg_popup_trans_pane_g6

0xdee5,	// (0x000423aa) bg_popup_trans_pane_g7

0xdeed,	// (0x000423b2) bg_popup_trans_pane_g8

0x20fe,	// (0x000365c3) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x00043cef) bg_popup_trans_pane_g

0xdef5,	// (0x000423ba) cell_image3_tool_bar_pane_ParamLimits

0xdef5,	// (0x000423ba) cell_image3_tool_bar_pane

0x1c86,	// (0x0003614b) cell_image3_tool_bar_pane_g1

0x1547,	// (0x00035a0c) bg_popup_trans_pane_cp1

0xdf09,	// (0x000423ce) popup_image3_note_pane_t1

0xdf17,	// (0x000423dc) popup_image3_note_pane_t2

0xdf25,	// (0x000423ea) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x00043d02) popup_image3_note_pane_t

0xdf33,	// (0x000423f8) popup_image3_note_pane_t3_copy1

0x9d2f,	// (0x0003e1f4) bg_myfav_hc_instruction_pane_ParamLimits

0x9d2f,	// (0x0003e1f4) bg_myfav_hc_instruction_pane

0x9d47,	// (0x0003e20c) cell_myfav_contact_pane_ParamLimits

0x9d47,	// (0x0003e20c) cell_myfav_contact_pane

0x9d61,	// (0x0003e226) cell_myfav_contact_pane_cp1_ParamLimits

0x9d61,	// (0x0003e226) cell_myfav_contact_pane_cp1

0x9d79,	// (0x0003e23e) cell_myfav_contact_pane_cp2_ParamLimits

0x9d79,	// (0x0003e23e) cell_myfav_contact_pane_cp2

0x9d91,	// (0x0003e256) cell_myfav_contact_pane_cp3_ParamLimits

0x9d91,	// (0x0003e256) cell_myfav_contact_pane_cp3

0x9da8,	// (0x0003e26d) cell_myfav_contact_pane_cp4_ParamLimits

0x9da8,	// (0x0003e26d) cell_myfav_contact_pane_cp4

0x9dbe,	// (0x0003e283) cell_myfav_contact_pane_cp5_ParamLimits

0x9dbe,	// (0x0003e283) cell_myfav_contact_pane_cp5

0x9dd2,	// (0x0003e297) cell_myfav_contact_pane_cp6_ParamLimits

0x9dd2,	// (0x0003e297) cell_myfav_contact_pane_cp6

0x9de6,	// (0x0003e2ab) cell_myfav_contact_pane_cp7_ParamLimits

0x9de6,	// (0x0003e2ab) cell_myfav_contact_pane_cp7

0xdf41,	// (0x00042406) listscroll_gen_pane_cp05

0x9dfe,	// (0x0003e2c3) main_myfav_hc_pane_g1_ParamLimits

0x9dfe,	// (0x0003e2c3) main_myfav_hc_pane_g1

0x9e14,	// (0x0003e2d9) main_myfav_hc_pane_g2_ParamLimits

0x9e14,	// (0x0003e2d9) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x00043d09) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x00043d09) main_myfav_hc_pane_g

0x9e42,	// (0x0003e307) main_myfav_hc_pane_t1_ParamLimits

0x9e42,	// (0x0003e307) main_myfav_hc_pane_t1

0xdf4a,	// (0x0004240f) main_myfav_hc_pane_t2_ParamLimits

0xdf4a,	// (0x0004240f) main_myfav_hc_pane_t2

0xdf5c,	// (0x00042421) main_myfav_hc_pane_t3_ParamLimits

0xdf5c,	// (0x00042421) main_myfav_hc_pane_t3

0x9e59,	// (0x0003e31e) main_myfav_hc_pane_t4_ParamLimits

0x9e59,	// (0x0003e31e) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x00043d10) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x00043d10) main_myfav_hc_pane_t

0x1c86,	// (0x0003614b) bg_myfav_hc_instruction_pane_g1

0xdf6e,	// (0x00042433) cell_myfav_contact_pane_g1_ParamLimits

0xdf6e,	// (0x00042433) cell_myfav_contact_pane_g1

0xdf6e,	// (0x00042433) cell_myfav_contact_pane_g2_ParamLimits

0xdf6e,	// (0x00042433) cell_myfav_contact_pane_g2

0xdf7a,	// (0x0004243f) cell_myfav_contact_pane_g3_ParamLimits

0xdf7a,	// (0x0004243f) cell_myfav_contact_pane_g3

0x1c56,	// (0x0003611b) cell_myfav_contact_pane_g4_ParamLimits

0x1c56,	// (0x0003611b) cell_myfav_contact_pane_g4

0xdf87,	// (0x0004244c) cell_myfav_contact_pane_g5_ParamLimits

0xdf87,	// (0x0004244c) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x00043d1b) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x00043d1b) cell_myfav_contact_pane_g

0x9e2a,	// (0x0003e2ef) main_myfav_hc_pane_g3_ParamLimits

0x9e2a,	// (0x0003e2ef) main_myfav_hc_pane_g3

0x4a25,	// (0x00038eea) popup_adpt_find_window

0x9e83,	// (0x0003e348) afind_page_pane_ParamLimits

0x9e83,	// (0x0003e348) afind_page_pane

0x9e90,	// (0x0003e355) aid_size_cell_afind_ParamLimits

0x9e90,	// (0x0003e355) aid_size_cell_afind

0x9eaa,	// (0x0003e36f) bg_popup_sub_pane_cp09_ParamLimits

0x9eaa,	// (0x0003e36f) bg_popup_sub_pane_cp09

0x9eb7,	// (0x0003e37c) find_pane_cp01_ParamLimits

0x9eb7,	// (0x0003e37c) find_pane_cp01

0xdf93,	// (0x00042458) grid_afind_control_pane_ParamLimits

0xdf93,	// (0x00042458) grid_afind_control_pane

0x9ec4,	// (0x0003e389) grid_afind_pane_ParamLimits

0x9ec4,	// (0x0003e389) grid_afind_pane

0x9ee0,	// (0x0003e3a5) cell_afind_pane_ParamLimits

0x9ee0,	// (0x0003e3a5) cell_afind_pane

0x1c86,	// (0x0003614b) afind_page_pane_g1

0x9f28,	// (0x0003e3ed) afind_page_pane_g2

0x9f30,	// (0x0003e3f5) afind_page_pane_g3

0x0002,

0xf861,	// (0x00043d26) afind_page_pane_g

0x9f38,	// (0x0003e3fd) afind_page_pane_t1

0xdfb9,	// (0x0004247e) cell_afind_grid_control_pane_ParamLimits

0xdfb9,	// (0x0004247e) cell_afind_grid_control_pane

0xdfc8,	// (0x0004248d) bg_button_pane_cp69_ParamLimits

0xdfc8,	// (0x0004248d) bg_button_pane_cp69

0x9f46,	// (0x0003e40b) cell_afind_pane_g1_ParamLimits

0x9f46,	// (0x0003e40b) cell_afind_pane_g1

0x9f53,	// (0x0003e418) cell_afind_pane_t1_ParamLimits

0x9f53,	// (0x0003e418) cell_afind_pane_t1

0xdfd4,	// (0x00042499) bg_button_pane_cp72

0xdfdc,	// (0x000424a1) cell_afind_grid_control_pane_g1

0x7bcd,	// (0x0003c092) aid_image_placing_area_ParamLimits

0x7bcd,	// (0x0003c092) aid_image_placing_area

0x1c48,	// (0x0003610d) field_vitu_entry_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) field_vitu_entry_pane_g1

0x1c48,	// (0x0003610d) field_vitu_entry_pane_g2_ParamLimits

0x1c48,	// (0x0003610d) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0004365e) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0004365e) field_vitu_entry_pane_g

0xdc5c,	// (0x00042121) cell_vitu_itu_pane_g1_ParamLimits

0xda20,	// (0x00041ee5) cell_vitu_itu_pane_t3_ParamLimits

0xda20,	// (0x00041ee5) cell_vitu_itu_pane_t3

0xddb6,	// (0x0004227b) mp4_progress_pane_t1_ParamLimits

0xddd5,	// (0x0004229a) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x00043c6c) mp4_progress_pane_t_ParamLimits

0xddf4,	// (0x000422b9) mup_progress_pane_cp04_ParamLimits

0x9e6d,	// (0x0003e332) main_myfav_hc_pane_t5_ParamLimits

0x9e6d,	// (0x0003e332) main_myfav_hc_pane_t5

0x5562,	// (0x00039a27) aid_zoom_text_primary

0x4a25,	// (0x00038eea) popup_adpt_find_window_ParamLimits

0x1b35,	// (0x00035ffa) main_cam_set_pane

0x9806,	// (0x0003dccb) cam4_zoom_pane_ParamLimits

0x9806,	// (0x0003dccb) cam4_zoom_pane

0x9f65,	// (0x0003e42a) main_cam_set_pane_g1_ParamLimits

0x9f65,	// (0x0003e42a) main_cam_set_pane_g1

0x9f73,	// (0x0003e438) main_cam_set_pane_g2_ParamLimits

0x9f73,	// (0x0003e438) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x00043d2d) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x00043d2d) main_cam_set_pane_g

0x9f7f,	// (0x0003e444) main_cam_set_pane_t1_ParamLimits

0x9f7f,	// (0x0003e444) main_cam_set_pane_t1

0x9f9b,	// (0x0003e460) main_cset_listscroll_pane_ParamLimits

0x9f9b,	// (0x0003e460) main_cset_listscroll_pane

0x9fcd,	// (0x0003e492) main_cset_slider_pane_ParamLimits

0x9fcd,	// (0x0003e492) main_cset_slider_pane

0xdfed,	// (0x000424b2) main_cset_list_pane_ParamLimits

0xdfed,	// (0x000424b2) main_cset_list_pane

0xdffd,	// (0x000424c2) scroll_pane_cp028

0x9fec,	// (0x0003e4b1) aid_area_touch_slider

0xa008,	// (0x0003e4cd) cset_slider_pane

0xa02b,	// (0x0003e4f0) main_cset_slider_pane_g1

0xa040,	// (0x0003e505) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x00043d32) main_cset_slider_pane_g

0xe036,	// (0x000424fb) main_cset_slider_pane_t1

0xa102,	// (0x0003e5c7) main_cset_slider_pane_t2

0xa11c,	// (0x0003e5e1) main_cset_slider_pane_t3

0xa136,	// (0x0003e5fb) main_cset_slider_pane_t4

0xa150,	// (0x0003e615) main_cset_slider_pane_t5

0xa16e,	// (0x0003e633) main_cset_slider_pane_t6

0xa185,	// (0x0003e64a) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x00043d57) main_cset_slider_pane_t

0xa291,	// (0x0003e756) cset_list_set_pane_ParamLimits

0xa291,	// (0x0003e756) cset_list_set_pane

0xe0d0,	// (0x00042595) aid_position_infowindow_above

0xe0d8,	// (0x0004259d) aid_position_infowindow_below

0x4c79,	// (0x0003913e) cset_list_set_pane_g1_ParamLimits

0x4c79,	// (0x0003913e) cset_list_set_pane_g1

0x4c85,	// (0x0003914a) cset_list_set_pane_g3_ParamLimits

0x4c85,	// (0x0003914a) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x00043d76) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x00043d76) cset_list_set_pane_g

0x4c94,	// (0x00039159) cset_list_set_pane_t1_ParamLimits

0x4c94,	// (0x00039159) cset_list_set_pane_t1

0x1b35,	// (0x00035ffa) list_highlight_pane_cp021_ParamLimits

0x1b35,	// (0x00035ffa) list_highlight_pane_cp021

0x2a39,	// (0x00036efe) cset_slider_pane_g1

0x2a4b,	// (0x00036f10) cset_slider_pane_g2

0x2a42,	// (0x00036f07) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x00043d7b) cset_slider_pane_g

0xa2a7,	// (0x0003e76c) aid_area_touch_cam4_zoom

0xa2af,	// (0x0003e774) cam4_zoom_cont_pane

0xa2b7,	// (0x0003e77c) cam4_zoom_pane_g1

0xa2bf,	// (0x0003e784) cam4_zoom_pane_g2

0xa2c7,	// (0x0003e78c) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x00043d82) cam4_zoom_pane_g

0xe0e0,	// (0x000425a5) cam4_zoom_cont_pane_g1

0xe0e9,	// (0x000425ae) cam4_zoom_cont_pane_g2

0xe0f2,	// (0x000425b7) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x00043d89) cam4_zoom_cont_pane_g

0x9642,	// (0x0003db07) call4_image_pane_ParamLimits

0x9642,	// (0x0003db07) call4_image_pane

0x96a1,	// (0x0003db66) call4_windows_conf_pane_ParamLimits

0x96e6,	// (0x0003dbab) popup_call4_audio_in_window_ParamLimits

0x96e6,	// (0x0003dbab) popup_call4_audio_in_window

0x1547,	// (0x00035a0c) bg_popup_call2_act_pane_cp02

0xde43,	// (0x00042308) call4_list_conf_pane

0x1c86,	// (0x0003614b) call4_image_pane_g1

0x1c86,	// (0x0003614b) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00043551) call4_image_pane_g

0xe0fb,	// (0x000425c0) list_single_graphic_popup_conf4_pane_ParamLimits

0xe0fb,	// (0x000425c0) list_single_graphic_popup_conf4_pane

0x1547,	// (0x00035a0c) list_highlight_pane_cp022

0xe10e,	// (0x000425d3) list_single_graphic_popup_conf4_pane_g1

0x25fd,	// (0x00036ac2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x00043d90) list_single_graphic_popup_conf4_pane_g

0xe116,	// (0x000425db) list_single_graphic_popup_conf4_pane_t1

0x627a,	// (0x0003a73f) popup_vtel_slider_window_ParamLimits

0x627a,	// (0x0003a73f) popup_vtel_slider_window

0xde15,	// (0x000422da) dialer2_ne_pane_t2_ParamLimits

0xde15,	// (0x000422da) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x00043c71) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x00043c71) dialer2_ne_pane_t

0x1b35,	// (0x00035ffa) bg_popup_sub_pane_cp010_ParamLimits

0x1b35,	// (0x00035ffa) bg_popup_sub_pane_cp010

0xa2cf,	// (0x0003e794) popup_vtel_slider_window_g1_ParamLimits

0xa2cf,	// (0x0003e794) popup_vtel_slider_window_g1

0xa2db,	// (0x0003e7a0) popup_vtel_slider_window_g2_ParamLimits

0xa2db,	// (0x0003e7a0) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x00043d95) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x00043d95) popup_vtel_slider_window_g

0xa323,	// (0x0003e7e8) vtel_slider_pane_ParamLimits

0xa323,	// (0x0003e7e8) vtel_slider_pane

0xa332,	// (0x0003e7f7) vtel_slider_pane_g1_ParamLimits

0xa332,	// (0x0003e7f7) vtel_slider_pane_g1

0xa33f,	// (0x0003e804) vtel_slider_pane_g2_ParamLimits

0xa33f,	// (0x0003e804) vtel_slider_pane_g2

0xa34c,	// (0x0003e811) vtel_slider_pane_g3_ParamLimits

0xa34c,	// (0x0003e811) vtel_slider_pane_g3

0xa332,	// (0x0003e7f7) vtel_slider_pane_g4_ParamLimits

0xa332,	// (0x0003e7f7) vtel_slider_pane_g4

0xa359,	// (0x0003e81e) vtel_slider_pane_g5_ParamLimits

0xa359,	// (0x0003e81e) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x00043d9e) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x00043d9e) vtel_slider_pane_g

0x1b35,	// (0x00035ffa) main_gallery2_pane

0x9a5a,	// (0x0003df1f) aid_size_row_itut2_dropdow_list_ParamLimits

0x9a5a,	// (0x0003df1f) aid_size_row_itut2_dropdow_list

0x9aba,	// (0x0003df7f) grid_vitu2_function_top_pane_ParamLimits

0x9aba,	// (0x0003df7f) grid_vitu2_function_top_pane

0x9b14,	// (0x0003dfd9) popup_vitu2_dropdown_list_window_ParamLimits

0x9b14,	// (0x0003dfd9) popup_vitu2_dropdown_list_window

0x9b32,	// (0x0003dff7) popup_vitu2_match_list_window

0xa366,	// (0x0003e82b) cell_vitu2_function_top_pane_ParamLimits

0xa366,	// (0x0003e82b) cell_vitu2_function_top_pane

0xa380,	// (0x0003e845) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa380,	// (0x0003e845) cell_vitu2_function_top_pane_cp01

0xa39c,	// (0x0003e861) cell_vitu2_function_top_wide_pane_ParamLimits

0xa39c,	// (0x0003e861) cell_vitu2_function_top_wide_pane

0x1b35,	// (0x00035ffa) bg_button_pane_cp012

0xa3ba,	// (0x0003e87f) cell_vitu2_function_top_pane_g1

0xa3ce,	// (0x0003e893) bg_button_pane_cp013_ParamLimits

0xa3ce,	// (0x0003e893) bg_button_pane_cp013

0xa3ea,	// (0x0003e8af) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa3ea,	// (0x0003e8af) cell_vitu2_function_top_wide_pane_g1

0x1c3a,	// (0x000360ff) bg_popup_sub_pane_cp20

0xa402,	// (0x0003e8c7) list_vitu2_match_list_pane

0xdebd,	// (0x00042382) bg_popup_sub_pane_cp20_g1

0xdec5,	// (0x0004238a) bg_popup_sub_pane_cp20_g2

0x211e,	// (0x000365e3) bg_popup_sub_pane_cp20_g3

0xdecd,	// (0x00042392) bg_popup_sub_pane_cp20_g4

0x20fe,	// (0x000365c3) bg_popup_sub_pane_cp20_g5

0xe12c,	// (0x000425f1) bg_popup_sub_pane_cp20_g6

0xdedd,	// (0x000423a2) bg_popup_sub_pane_cp20_g7

0xdee5,	// (0x000423aa) bg_popup_sub_pane_cp20_g8

0xdeed,	// (0x000423b2) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x00043da9) bg_popup_sub_pane_cp20_g

0xa41a,	// (0x0003e8df) list_vitu2_match_list_item_pane_ParamLimits

0xa41a,	// (0x0003e8df) list_vitu2_match_list_item_pane

0xa42c,	// (0x0003e8f1) list_vitu2_match_list_item_pane_t1

0x1547,	// (0x00035a0c) bg_popup_sub_pane_cp21

0x1efc,	// (0x000363c1) grid_vitu2_dropdown_list_pane

0xa43a,	// (0x0003e8ff) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa43a,	// (0x0003e8ff) cell_vitu2_dropdown_list_char_pane

0xa45c,	// (0x0003e921) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa45c,	// (0x0003e921) cell_vitu2_dropdown_list_ctrl_pane

0xe134,	// (0x000425f9) cell_vitu2_dropdown_list_char_pane_g1

0xe13d,	// (0x00042602) cell_vitu2_dropdown_list_char_pane_g2

0xe146,	// (0x0004260b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x00043dbc) cell_vitu2_dropdown_list_char_pane_g

0xa484,	// (0x0003e949) cell_vitu2_dropdown_list_char_pane_t1

0xa492,	// (0x0003e957) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa492,	// (0x0003e957) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa49f,	// (0x0003e964) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa49f,	// (0x0003e964) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa4ac,	// (0x0003e971) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa4ac,	// (0x0003e971) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa4b9,	// (0x0003e97e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa4b9,	// (0x0003e97e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1c48,	// (0x0003610d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1c48,	// (0x0003610d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x00043dc3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x00043dc3) cell_vitu2_dropdown_list_ctrl_pane_g

0xa4d5,	// (0x0003e99a) aid_size_cell_gallery2_ParamLimits

0xa4d5,	// (0x0003e99a) aid_size_cell_gallery2

0xa4ef,	// (0x0003e9b4) grid_gallery2_pane_ParamLimits

0xa4ef,	// (0x0003e9b4) grid_gallery2_pane

0xa506,	// (0x0003e9cb) scroll_pane_cp029_ParamLimits

0xa506,	// (0x0003e9cb) scroll_pane_cp029

0xa516,	// (0x0003e9db) cell_gallery2_pane_ParamLimits

0xa516,	// (0x0003e9db) cell_gallery2_pane

0xe14f,	// (0x00042614) cell_gallery2_pane_g2

0x07f9,	// (0x00034cbe) cell_gallery2_pane_g3

0xe157,	// (0x0004261c) cell_gallery2_pane_g4

0xe15f,	// (0x00042624) cell_gallery2_pane_g5

0x1efc,	// (0x000363c1) grid_highlight_pane_cp10

0x9b32,	// (0x0003dff7) popup_vitu2_match_list_window_ParamLimits

0x9b44,	// (0x0003e009) popup_vitu2_query_window_ParamLimits

0x9b44,	// (0x0003e009) popup_vitu2_query_window

0x1547,	// (0x00035a0c) bg_vitu2_candi_button_pane

0xe134,	// (0x000425f9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe13d,	// (0x00042602) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe146,	// (0x0004260b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa56b,	// (0x0003ea30) bg_button_pane_cp015

0xa580,	// (0x0003ea45) bg_button_pane_cp016

0xa58c,	// (0x0003ea51) bg_button_pane_cp017

0x29c9,	// (0x00036e8e) bg_popup_sub_pane_cp22

0xe167,	// (0x0004262c) popup_vitu2_query_window_g1

0xa5cc,	// (0x0003ea91) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x00043dce) popup_vitu2_query_window_g

0xa5f0,	// (0x0003eab5) popup_vitu2_query_window_t1_ParamLimits

0xa5f0,	// (0x0003eab5) popup_vitu2_query_window_t1

0xa623,	// (0x0003eae8) popup_vitu2_query_window_t2_ParamLimits

0xa623,	// (0x0003eae8) popup_vitu2_query_window_t2

0xa635,	// (0x0003eafa) popup_vitu2_query_window_t3_ParamLimits

0xa635,	// (0x0003eafa) popup_vitu2_query_window_t3

0xa65d,	// (0x0003eb22) popup_vitu2_query_window_t4_ParamLimits

0xa65d,	// (0x0003eb22) popup_vitu2_query_window_t4

0xa671,	// (0x0003eb36) popup_vitu2_query_window_t5_ParamLimits

0xa671,	// (0x0003eb36) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x00043dd5) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x00043dd5) popup_vitu2_query_window_t

0xdfe5,	// (0x000424aa) main_cset_text_pane

0x9fec,	// (0x0003e4b1) aid_area_touch_slider_ParamLimits

0xa008,	// (0x0003e4cd) cset_slider_pane_ParamLimits

0xa02b,	// (0x0003e4f0) main_cset_slider_pane_g1_ParamLimits

0xa040,	// (0x0003e505) main_cset_slider_pane_g2_ParamLimits

0xe006,	// (0x000424cb) main_cset_slider_pane_g3_ParamLimits

0xe006,	// (0x000424cb) main_cset_slider_pane_g3

0xa055,	// (0x0003e51a) main_cset_slider_pane_g4_ParamLimits

0xa055,	// (0x0003e51a) main_cset_slider_pane_g4

0xa064,	// (0x0003e529) main_cset_slider_pane_g5_ParamLimits

0xa064,	// (0x0003e529) main_cset_slider_pane_g5

0xa072,	// (0x0003e537) main_cset_slider_pane_g6_ParamLimits

0xa072,	// (0x0003e537) main_cset_slider_pane_g6

0xf86d,	// (0x00043d32) main_cset_slider_pane_g_ParamLimits

0xe036,	// (0x000424fb) main_cset_slider_pane_t1_ParamLimits

0xa102,	// (0x0003e5c7) main_cset_slider_pane_t2_ParamLimits

0xa11c,	// (0x0003e5e1) main_cset_slider_pane_t3_ParamLimits

0xa136,	// (0x0003e5fb) main_cset_slider_pane_t4_ParamLimits

0xa150,	// (0x0003e615) main_cset_slider_pane_t5_ParamLimits

0xa16e,	// (0x0003e633) main_cset_slider_pane_t6_ParamLimits

0xa185,	// (0x0003e64a) main_cset_slider_pane_t7_ParamLimits

0xa1b3,	// (0x0003e678) main_cset_slider_pane_t8_ParamLimits

0xa1b3,	// (0x0003e678) main_cset_slider_pane_t8

0xa1db,	// (0x0003e6a0) main_cset_slider_pane_t9_ParamLimits

0xa1db,	// (0x0003e6a0) main_cset_slider_pane_t9

0xa203,	// (0x0003e6c8) main_cset_slider_pane_t10_ParamLimits

0xa203,	// (0x0003e6c8) main_cset_slider_pane_t10

0xa22b,	// (0x0003e6f0) main_cset_slider_pane_t11_ParamLimits

0xa22b,	// (0x0003e6f0) main_cset_slider_pane_t11

0xa255,	// (0x0003e71a) main_cset_slider_pane_t12_ParamLimits

0xa255,	// (0x0003e71a) main_cset_slider_pane_t12

0xa272,	// (0x0003e737) main_cset_slider_pane_t13_ParamLimits

0xa272,	// (0x0003e737) main_cset_slider_pane_t13

0xf892,	// (0x00043d57) main_cset_slider_pane_t_ParamLimits

0x1547,	// (0x00035a0c) bg_popup_sub_pane_cp011

0xe173,	// (0x00042638) main_cset_text_pane_g1

0xe17b,	// (0x00042640) main_cset_text_pane_t1

0xe189,	// (0x0004264e) main_cset_text_pane_t2

0xe197,	// (0x0004265c) main_cset_text_pane_t3

0xe1a5,	// (0x0004266a) main_cset_text_pane_t4

0xe1b3,	// (0x00042678) main_cset_text_pane_t5

0xe1c1,	// (0x00042686) main_cset_text_pane_t6

0xe1cf,	// (0x00042694) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x00043de4) main_cset_text_pane_t

0x1547,	// (0x00035a0c) main_cam4_burst_pane

0x1547,	// (0x00035a0c) main_cam5_pane

0xdfa7,	// (0x0004246c) bg_button_pane_cp019

0xdfb0,	// (0x00042475) bg_button_pane_cp020

0xe012,	// (0x000424d7) main_cset_slider_pane_g7_ParamLimits

0xe012,	// (0x000424d7) main_cset_slider_pane_g7

0xe01e,	// (0x000424e3) main_cset_slider_pane_g8_ParamLimits

0xe01e,	// (0x000424e3) main_cset_slider_pane_g8

0xa086,	// (0x0003e54b) main_cset_slider_pane_g9_ParamLimits

0xa086,	// (0x0003e54b) main_cset_slider_pane_g9

0xa092,	// (0x0003e557) main_cset_slider_pane_g10_ParamLimits

0xa092,	// (0x0003e557) main_cset_slider_pane_g10

0xa09e,	// (0x0003e563) main_cset_slider_pane_g11_ParamLimits

0xa09e,	// (0x0003e563) main_cset_slider_pane_g11

0xa0aa,	// (0x0003e56f) main_cset_slider_pane_g12_ParamLimits

0xa0aa,	// (0x0003e56f) main_cset_slider_pane_g12

0xa0b6,	// (0x0003e57b) main_cset_slider_pane_g13_ParamLimits

0xa0b6,	// (0x0003e57b) main_cset_slider_pane_g13

0xa0c2,	// (0x0003e587) main_cset_slider_pane_g14_ParamLimits

0xa0c2,	// (0x0003e587) main_cset_slider_pane_g14

0xa0ce,	// (0x0003e593) main_cset_slider_pane_g15_ParamLimits

0xa0ce,	// (0x0003e593) main_cset_slider_pane_g15

0xe05e,	// (0x00042523) main_cset_slider_pane_t14_ParamLimits

0xe05e,	// (0x00042523) main_cset_slider_pane_t14

0xe097,	// (0x0004255c) main_cset_slider_pane_t15_ParamLimits

0xe097,	// (0x0004255c) main_cset_slider_pane_t15

0xa6db,	// (0x0003eba0) aid_cam4_burst_size_cell_ParamLimits

0xa6db,	// (0x0003eba0) aid_cam4_burst_size_cell

0xa6f7,	// (0x0003ebbc) grid_cam4_burst_pane_ParamLimits

0xa6f7,	// (0x0003ebbc) grid_cam4_burst_pane

0xa727,	// (0x0003ebec) linegrid_cam4_burst_pane_ParamLimits

0xa727,	// (0x0003ebec) linegrid_cam4_burst_pane

0xa747,	// (0x0003ec0c) scroll_pane_cp30_ParamLimits

0xa747,	// (0x0003ec0c) scroll_pane_cp30

0xa753,	// (0x0003ec18) cell_cam4_burst_pane_ParamLimits

0xa753,	// (0x0003ec18) cell_cam4_burst_pane

0xe1dd,	// (0x000426a2) linegrid_cam4_burst_pane_g1_ParamLimits

0xe1dd,	// (0x000426a2) linegrid_cam4_burst_pane_g1

0xa78f,	// (0x0003ec54) linegrid_cam4_burst_pane_g2_ParamLimits

0xa78f,	// (0x0003ec54) linegrid_cam4_burst_pane_g2

0xe1ea,	// (0x000426af) linegrid_cam4_burst_pane_g3_ParamLimits

0xe1ea,	// (0x000426af) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x00043df3) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x00043df3) linegrid_cam4_burst_pane_g

0xa7a0,	// (0x0003ec65) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa7a0,	// (0x0003ec65) linegrid_cam4_burst_pane_g3_copy1

0xe1f7,	// (0x000426bc) linegrid_cam4_burst_pane_g4_ParamLimits

0xe1f7,	// (0x000426bc) linegrid_cam4_burst_pane_g4

0xa7ba,	// (0x0003ec7f) linegrid_cam4_burst_pane_g5_ParamLimits

0xa7ba,	// (0x0003ec7f) linegrid_cam4_burst_pane_g5

0xa7cb,	// (0x0003ec90) linegrid_cam4_burst_pane_g6_ParamLimits

0xa7cb,	// (0x0003ec90) linegrid_cam4_burst_pane_g6

0xe204,	// (0x000426c9) linegrid_cam4_burst_pane_g7_ParamLimits

0xe204,	// (0x000426c9) linegrid_cam4_burst_pane_g7

0xa7dc,	// (0x0003eca1) cell_cam4_burst_pane_g1

0xe21d,	// (0x000426e2) main_cam5_pane_t1_ParamLimits

0xe21d,	// (0x000426e2) main_cam5_pane_t1

0xe22f,	// (0x000426f4) main_cam5_pane_t2_ParamLimits

0xe22f,	// (0x000426f4) main_cam5_pane_t2

0xe241,	// (0x00042706) main_cam5_pane_t3_ParamLimits

0xe241,	// (0x00042706) main_cam5_pane_t3

0xe253,	// (0x00042718) main_cam5_pane_t4_ParamLimits

0xe253,	// (0x00042718) main_cam5_pane_t4

0xe26b,	// (0x00042730) main_cam5_pane_t5_ParamLimits

0xe26b,	// (0x00042730) main_cam5_pane_t5

0xe27f,	// (0x00042744) main_cam5_pane_t6_ParamLimits

0xe27f,	// (0x00042744) main_cam5_pane_t6

0xe293,	// (0x00042758) main_cam5_pane_t7_ParamLimits

0xe293,	// (0x00042758) main_cam5_pane_t7

0xe2a5,	// (0x0004276a) main_cam5_pane_t8_ParamLimits

0xe2a5,	// (0x0004276a) main_cam5_pane_t8

0xe2c1,	// (0x00042786) main_cam5_pane_t9_ParamLimits

0xe2c1,	// (0x00042786) main_cam5_pane_t9

0xe2d3,	// (0x00042798) main_cam5_pane_t10_ParamLimits

0xe2d3,	// (0x00042798) main_cam5_pane_t10

0xe2e5,	// (0x000427aa) main_cam5_pane_t11_ParamLimits

0xe2e5,	// (0x000427aa) main_cam5_pane_t11

0xe2f7,	// (0x000427bc) main_cam5_pane_t12_ParamLimits

0xe2f7,	// (0x000427bc) main_cam5_pane_t12

0xe30c,	// (0x000427d1) main_cam5_pane_t13_ParamLimits

0xe30c,	// (0x000427d1) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x00043dff) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x00043dff) main_cam5_pane_t

0x56ec,	// (0x00039bb1) popup_scut_keymap_window_ParamLimits

0x56ec,	// (0x00039bb1) popup_scut_keymap_window

0xa7ef,	// (0x0003ecb4) aid_size_cell_brow_shortcut

0x1efc,	// (0x000363c1) bg_popup_window_pane_cp010

0xa7fb,	// (0x0003ecc0) grid_scut_pane

0xa807,	// (0x0003eccc) cell_scut_pane_ParamLimits

0xa807,	// (0x0003eccc) cell_scut_pane

0xa81e,	// (0x0003ece3) cell_scut_pane_g1

0xe329,	// (0x000427ee) cell_scut_pane_t1

0xe338,	// (0x000427fd) cell_scut_pane_t2

0xa827,	// (0x0003ecec) cell_scut_pane_t3

0x0002,

0xf955,	// (0x00043e1a) cell_scut_pane_t

0x87e6,	// (0x0003ccab) main_mup3_pane_g8_ParamLimits

0x87e6,	// (0x0003ccab) main_mup3_pane_g8

0x9a68,	// (0x0003df2d) area_vitu2_query_pane_ParamLimits

0x9a68,	// (0x0003df2d) area_vitu2_query_pane

0xa598,	// (0x0003ea5d) input_focus_pane_cp08

0xe347,	// (0x0004280c) area_vitu2_query_pane_g1

0xa835,	// (0x0003ecfa) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x00043e21) area_vitu2_query_pane_g

0xa846,	// (0x0003ed0b) area_vitu2_query_pane_t1_ParamLimits

0xa846,	// (0x0003ed0b) area_vitu2_query_pane_t1

0xa85a,	// (0x0003ed1f) area_vitu2_query_pane_t2_ParamLimits

0xa85a,	// (0x0003ed1f) area_vitu2_query_pane_t2

0xa86e,	// (0x0003ed33) area_vitu2_query_pane_t3_ParamLimits

0xa86e,	// (0x0003ed33) area_vitu2_query_pane_t3

0xe353,	// (0x00042818) area_vitu2_query_pane_t4_ParamLimits

0xe353,	// (0x00042818) area_vitu2_query_pane_t4

0xe37b,	// (0x00042840) area_vitu2_query_pane_t5_ParamLimits

0xe37b,	// (0x00042840) area_vitu2_query_pane_t5

0xe3a3,	// (0x00042868) area_vitu2_query_pane_t6_ParamLimits

0xe3a3,	// (0x00042868) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x00043e26) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x00043e26) area_vitu2_query_pane_t

0xa580,	// (0x0003ea45) bg_button_pane_cp018

0xa896,	// (0x0003ed5b) bg_button_pane_cp021

0xa8a2,	// (0x0003ed67) bg_button_pane_cp022

0xa8c5,	// (0x0003ed8a) input_focus_pane_cp09

0x2739,	// (0x00036bfe) aid_size_touch_mv_arrow_left

0x2762,	// (0x00036c27) aid_size_touch_mv_arrow_right

0xa0e6,	// (0x0003e5ab) main_cset_slider_pane_g16_ParamLimits

0xa0e6,	// (0x0003e5ab) main_cset_slider_pane_g16

0xa0f4,	// (0x0003e5b9) main_cset_slider_pane_g17_ParamLimits

0xa0f4,	// (0x0003e5b9) main_cset_slider_pane_g17

0xa7dc,	// (0x0003eca1) cell_cam4_burst_pane_g1_ParamLimits

0x1547,	// (0x00035a0c) compa_mode_pane

0xa2e7,	// (0x0003e7ac) popup_vtel_slider_window_g3_ParamLimits

0xa2e7,	// (0x0003e7ac) popup_vtel_slider_window_g3

0xa2fb,	// (0x0003e7c0) popup_vtel_slider_window_g4_ParamLimits

0xa2fb,	// (0x0003e7c0) popup_vtel_slider_window_g4

0xa30f,	// (0x0003e7d4) popup_vtel_slider_window_t1_ParamLimits

0xa30f,	// (0x0003e7d4) popup_vtel_slider_window_t1

0x1547,	// (0x00035a0c) main_cl_pane

0x80ae,	// (0x0003c573) popup_imed_adjust2_window_ParamLimits

0x29c9,	// (0x00036e8e) bg_tb_trans_pane_cp05_ParamLimits

0xdb89,	// (0x0004204e) popup_imed_adjust2_window_g1_ParamLimits

0xdb98,	// (0x0004205d) popup_imed_adjust2_window_g2_ParamLimits

0xdb98,	// (0x0004205d) popup_imed_adjust2_window_g2

0xdba4,	// (0x00042069) popup_imed_adjust2_window_g3_ParamLimits

0xdba4,	// (0x00042069) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x00043ba6) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x00043ba6) popup_imed_adjust2_window_g

0xdbb0,	// (0x00042075) popup_imed_adjust2_window_t1_ParamLimits

0xdbc8,	// (0x0004208d) slider_imed_adjust_pane_ParamLimits

0xdbdc,	// (0x000420a1) slider_imed_adjust_pane_g1_ParamLimits

0xdbec,	// (0x000420b1) slider_imed_adjust_pane_g2_ParamLimits

0xdbfc,	// (0x000420c1) slider_imed_adjust_pane_g3_ParamLimits

0xdc0d,	// (0x000420d2) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x00043bad) slider_imed_adjust_pane_g_ParamLimits

0x97af,	// (0x0003dc74) aid_touch_area_cam4_ParamLimits

0x97af,	// (0x0003dc74) aid_touch_area_cam4

0x97bf,	// (0x0003dc84) battery_pane_cp01

0x9846,	// (0x0003dd0b) main_camera4_pane_g6_ParamLimits

0x9846,	// (0x0003dd0b) main_camera4_pane_g6

0x9864,	// (0x0003dd29) main_camera4_pane_t2_ParamLimits

0x9864,	// (0x0003dd29) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x00043ca5) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x00043ca5) main_camera4_pane_t

0x98eb,	// (0x0003ddb0) aid_touch_area_vid4_ParamLimits

0x98eb,	// (0x0003ddb0) aid_touch_area_vid4

0x992b,	// (0x0003ddf0) main_video4_pane_g5_ParamLimits

0x992b,	// (0x0003ddf0) main_video4_pane_g5

0x994f,	// (0x0003de14) vid4_progress_pane_ParamLimits

0x994f,	// (0x0003de14) vid4_progress_pane

0xe02a,	// (0x000424ef) main_cset_slider_pane_g18_ParamLimits

0xe02a,	// (0x000424ef) main_cset_slider_pane_g18

0xe211,	// (0x000426d6) cell_cam4_burst_pane_g2_ParamLimits

0xe211,	// (0x000426d6) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x00043dfa) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x00043dfa) cell_cam4_burst_pane_g

0xa8d5,	// (0x0003ed9a) bg_cl_pane_ParamLimits

0xa8d5,	// (0x0003ed9a) bg_cl_pane

0xa8e1,	// (0x0003eda6) cl_header_pane_ParamLimits

0xa8e1,	// (0x0003eda6) cl_header_pane

0xa8ed,	// (0x0003edb2) cl_listscroll_pane_ParamLimits

0xa8ed,	// (0x0003edb2) cl_listscroll_pane

0xe3ef,	// (0x000428b4) bg_cl_pane_g1

0xe3f7,	// (0x000428bc) bg_cl_pane_g2

0xe3ff,	// (0x000428c4) bg_cl_pane_g3

0xe407,	// (0x000428cc) bg_cl_pane_g4

0xe40f,	// (0x000428d4) bg_cl_pane_g5

0xe417,	// (0x000428dc) bg_cl_pane_g6

0xe41f,	// (0x000428e4) bg_cl_pane_g7

0xe427,	// (0x000428ec) bg_cl_pane_g8

0xe42f,	// (0x000428f4) bg_cl_pane_g9

0x0008,

0xf970,	// (0x00043e35) bg_cl_pane_g

0xa8f9,	// (0x0003edbe) aid_height_cl_leading_ParamLimits

0xa8f9,	// (0x0003edbe) aid_height_cl_leading

0xa905,	// (0x0003edca) aid_height_cl_text_ParamLimits

0xa905,	// (0x0003edca) aid_height_cl_text

0x1c3a,	// (0x000360ff) bg_cl_header_pane_ParamLimits

0x1c3a,	// (0x000360ff) bg_cl_header_pane

0xa91d,	// (0x0003ede2) cl_header_pane_g1_ParamLimits

0xa91d,	// (0x0003ede2) cl_header_pane_g1

0xa92a,	// (0x0003edef) cl_header_pane_t1_ParamLimits

0xa92a,	// (0x0003edef) cl_header_pane_t1

0xe437,	// (0x000428fc) cl_list_pane

0xdffd,	// (0x000424c2) hc_scroll_pane_cp01

0x20fe,	// (0x000365c3) bg_cl_header_pane_g1

0xdebd,	// (0x00042382) bg_cl_header_pane_g2

0x211e,	// (0x000365e3) bg_cl_header_pane_g3

0xdecd,	// (0x00042392) bg_cl_header_pane_g4

0xdec5,	// (0x0004238a) bg_cl_header_pane_g5

0xe12c,	// (0x000425f1) bg_cl_header_pane_g6

0xdee5,	// (0x000423aa) bg_cl_header_pane_g7

0xdeed,	// (0x000423b2) bg_cl_header_pane_g8

0xdedd,	// (0x000423a2) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x00043e48) bg_cl_header_pane_g

0xa93c,	// (0x0003ee01) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa93c,	// (0x0003ee01) hc_cl_list_double_graphic_heading_pane

0xa94d,	// (0x0003ee12) hc_cl_list_single_graphic_pane_ParamLimits

0xa94d,	// (0x0003ee12) hc_cl_list_single_graphic_pane

0xa966,	// (0x0003ee2b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa966,	// (0x0003ee2b) hc_cl_list_single_graphic_pane_g1

0xa972,	// (0x0003ee37) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa972,	// (0x0003ee37) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x00043e5b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x00043e5b) hc_cl_list_single_graphic_pane_g

0xa986,	// (0x0003ee4b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa986,	// (0x0003ee4b) hc_cl_list_single_graphic_pane_t1

0xa966,	// (0x0003ee2b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa966,	// (0x0003ee2b) hc_cl_list_double_graphic_heading_pane_g1

0xa99b,	// (0x0003ee60) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa99b,	// (0x0003ee60) hc_cl_list_double_graphic_heading_pane_g2

0xa9af,	// (0x0003ee74) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa9af,	// (0x0003ee74) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x00043e60) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x00043e60) hc_cl_list_double_graphic_heading_pane_g

0xa9c3,	// (0x0003ee88) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa9c3,	// (0x0003ee88) hc_cl_list_double_graphic_heading_pane_t1

0xa9d8,	// (0x0003ee9d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa9d8,	// (0x0003ee9d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x00043e67) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x00043e67) hc_cl_list_double_graphic_heading_pane_t

0xa9f5,	// (0x0003eeba) vid4_progress_pane_g1

0xaa05,	// (0x0003eeca) vid4_progress_pane_g2

0xaa15,	// (0x0003eeda) vid4_progress_pane_g3

0xaa27,	// (0x0003eeec) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x00043e6c) vid4_progress_pane_g

0xaa3f,	// (0x0003ef04) vid4_progress_pane_t1

0xaa55,	// (0x0003ef1a) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x00043e77) vid4_progress_pane_t

0xaa7f,	// (0x0003ef44) wait_bar_pane_cp07

0xd495,	// (0x0004195a) blid_firmament_pane_ParamLimits

0xd4d8,	// (0x0004199d) popup_blid_sat_info2_window_g1

0xd4fc,	// (0x000419c1) popup_blid_sat_info2_window_t3

0xd50a,	// (0x000419cf) popup_blid_sat_info2_window_t4

0xd518,	// (0x000419dd) popup_blid_sat_info2_window_t5

0xd526,	// (0x000419eb) popup_blid_sat_info2_window_t6

0xd536,	// (0x000419fb) popup_blid_sat_info2_window_t7

0xd544,	// (0x00041a09) popup_blid_sat_info2_window_t8

0xd552,	// (0x00041a17) popup_blid_sat_info2_window_t9

0xd560,	// (0x00041a25) popup_blid_sat_info2_window_t10

0xd621,	// (0x00041ae6) aid_firma_cardinal_ParamLimits

0xd635,	// (0x00041afa) blid_firmament_pane_t1_ParamLimits

0xd64c,	// (0x00041b11) blid_firmament_pane_t2_ParamLimits

0xd663,	// (0x00041b28) blid_firmament_pane_t3_ParamLimits

0xd67a,	// (0x00041b3f) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x00043a9f) blid_firmament_pane_t_ParamLimits

0xd691,	// (0x00041b56) blid_sat_info_pane_ParamLimits

0x1b35,	// (0x00035ffa) main_cam_set_pane_ParamLimits

0x8eb0,	// (0x0003d375) aid_size_cell_colour_35_ParamLimits

0x8eca,	// (0x0003d38f) aid_size_cell_colour_112_ParamLimits

0x8ee1,	// (0x0003d3a6) aid_size_cell_effect_ParamLimits

0x1b35,	// (0x00035ffa) bg_tb_trans_pane_cp02_ParamLimits

0x23cf,	// (0x00036894) heading_imed_pane_ParamLimits

0x8efb,	// (0x0003d3c0) listscroll_imed_pane_ParamLimits

0x32b7,	// (0x0003777c) popup_call2_audio_first_window_g5_ParamLimits

0x32b7,	// (0x0003777c) popup_call2_audio_first_window_g5

0x94bb,	// (0x0003d980) aid_size_touch_image3_arrow_left_ParamLimits

0x94bb,	// (0x0003d980) aid_size_touch_image3_arrow_left

0x94d1,	// (0x0003d996) aid_size_touch_image3_arrow_right_ParamLimits

0x94d1,	// (0x0003d996) aid_size_touch_image3_arrow_right

0xaa6a,	// (0x0003ef2f) vid4_progress_pane_t3

0x9054,	// (0x0003d519) main_hwr_training_symbol_option_pane_ParamLimits

0x9054,	// (0x0003d519) main_hwr_training_symbol_option_pane

0xdd0a,	// (0x000421cf) popup_hwr_training_preview_window_ParamLimits

0xdd0a,	// (0x000421cf) popup_hwr_training_preview_window

0x90b5,	// (0x0003d57a) hwr_training_navi_pane_g5_ParamLimits

0x90b5,	// (0x0003d57a) hwr_training_navi_pane_g5

0xdeab,	// (0x00042370) popup_char_count_window

0x1c3a,	// (0x000360ff) bg_popup_sub_pane_cp20_ParamLimits

0xa402,	// (0x0003e8c7) list_vitu2_match_list_pane_ParamLimits

0xa40e,	// (0x0003e8d3) vitu2_page_scroll_pane_ParamLimits

0xa40e,	// (0x0003e8d3) vitu2_page_scroll_pane

0xe449,	// (0x0004290e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe449,	// (0x0004290e) list_single_hwr_training_symbol_option_pane

0xe45c,	// (0x00042921) list_single_hwr_training_symbol_option_pane_g1

0xe464,	// (0x00042929) list_single_hwr_training_symbol_option_pane_t1

0xe472,	// (0x00042937) bg_button_pane_cp023

0xe47b,	// (0x00042940) bg_button_pane_cp024

0xe4ae,	// (0x00042973) vitu2_page_scroll_pane_g1

0xe4b6,	// (0x0004297b) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x00043e7e) vitu2_page_scroll_pane_g

0xe4be,	// (0x00042983) vitu2_page_scroll_pane_t1

0xd40b,	// (0x000418d0) popup_char_count_window_g1

0xe4cd,	// (0x00042992) popup_char_count_window_g2

0xe4d6,	// (0x0004299b) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x00043e83) popup_char_count_window_g

0xe4df,	// (0x000429a4) popup_char_count_window_t1

0x1547,	// (0x00035a0c) main_vded2_pane

0xdb75,	// (0x0004203a) aid_size_cell_imed_line

0xdb7f,	// (0x00042044) grid_imed_line_width_pane

0x99bd,	// (0x0003de82) vid4_indicators_pane_g4

0xe4ed,	// (0x000429b2) cell_imed_line_width_pane_ParamLimits

0xe4ed,	// (0x000429b2) cell_imed_line_width_pane

0xe501,	// (0x000429c6) cell_imed_line_width_pane_g1

0xe50a,	// (0x000429cf) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x00043e8a) cell_imed_line_width_pane_g

0xaa92,	// (0x0003ef57) main_vded2_pane_g1_ParamLimits

0xaa92,	// (0x0003ef57) main_vded2_pane_g1

0xaa9f,	// (0x0003ef64) main_vded2_pane_g2_ParamLimits

0xaa9f,	// (0x0003ef64) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x00043e8f) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x00043e8f) main_vded2_pane_g

0xaaad,	// (0x0003ef72) vded2_slider_pane_ParamLimits

0xaaad,	// (0x0003ef72) vded2_slider_pane

0xaaba,	// (0x0003ef7f) aid_size_touch_vded2_end

0xaac4,	// (0x0003ef89) aid_size_touch_vded2_playhead

0xe512,	// (0x000429d7) aid_size_touch_vded2_start

0xe51a,	// (0x000429df) vded2_slider_bg_pane

0xe523,	// (0x000429e8) vded2_slider_pane_g1

0xe52c,	// (0x000429f1) vded2_slider_pane_g2

0xaacc,	// (0x0003ef91) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x00043e94) vded2_slider_pane_g

0xe534,	// (0x000429f9) vded2_slider_bg_pane_g1

0xe53d,	// (0x00042a02) vded2_slider_bg_pane_g2

0xe546,	// (0x00042a0b) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x00043e9b) vded2_slider_bg_pane_g

0x796b,	// (0x0003be30) aid_postcard_touch_down_pane_ParamLimits

0x796b,	// (0x0003be30) aid_postcard_touch_down_pane

0x797b,	// (0x0003be40) aid_postcard_touch_up_pane_ParamLimits

0x797b,	// (0x0003be40) aid_postcard_touch_up_pane

0x1547,	// (0x00035a0c) main_blid2_pane

0x8039,	// (0x0003c4fe) popup_blid2_search_window

0x1547,	// (0x00035a0c) blid2_gps_pane

0x1547,	// (0x00035a0c) blid2_navig_pane

0x1547,	// (0x00035a0c) blid2_search_pane

0x1547,	// (0x00035a0c) blid2_tripm_pane

0xaad5,	// (0x0003ef9a) blid2_search_pane_g1_ParamLimits

0xaad5,	// (0x0003ef9a) blid2_search_pane_g1

0xaae5,	// (0x0003efaa) blid2_search_pane_t1_ParamLimits

0xaae5,	// (0x0003efaa) blid2_search_pane_t1

0xaaf7,	// (0x0003efbc) aid_size_cell_blid2_gps_ParamLimits

0xaaf7,	// (0x0003efbc) aid_size_cell_blid2_gps

0xab07,	// (0x0003efcc) blid2_gps_pane_g1_ParamLimits

0xab07,	// (0x0003efcc) blid2_gps_pane_g1

0xab13,	// (0x0003efd8) grid_blid2_satellite_pane_ParamLimits

0xab13,	// (0x0003efd8) grid_blid2_satellite_pane

0xab23,	// (0x0003efe8) blid2_navig_pane_g1_ParamLimits

0xab23,	// (0x0003efe8) blid2_navig_pane_g1

0xab2f,	// (0x0003eff4) blid2_navig_pane_t1_ParamLimits

0xab2f,	// (0x0003eff4) blid2_navig_pane_t1

0xab41,	// (0x0003f006) blid2_navig_pane_t2_ParamLimits

0xab41,	// (0x0003f006) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x00043ea2) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x00043ea2) blid2_navig_pane_t

0xab53,	// (0x0003f018) blid2_navig_ring_pane_ParamLimits

0xab53,	// (0x0003f018) blid2_navig_ring_pane

0xab63,	// (0x0003f028) blid2_speed_pane_ParamLimits

0xab63,	// (0x0003f028) blid2_speed_pane

0xab6f,	// (0x0003f034) blid2_tripm_pane_g1_ParamLimits

0xab6f,	// (0x0003f034) blid2_tripm_pane_g1

0xab7f,	// (0x0003f044) blid2_tripm_pane_g2_ParamLimits

0xab7f,	// (0x0003f044) blid2_tripm_pane_g2

0xab8b,	// (0x0003f050) blid2_tripm_pane_g3_ParamLimits

0xab8b,	// (0x0003f050) blid2_tripm_pane_g3

0xab97,	// (0x0003f05c) blid2_tripm_pane_g4_ParamLimits

0xab97,	// (0x0003f05c) blid2_tripm_pane_g4

0xaba3,	// (0x0003f068) blid2_tripm_pane_g5_ParamLimits

0xaba3,	// (0x0003f068) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x00043ea7) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x00043ea7) blid2_tripm_pane_g

0xabbf,	// (0x0003f084) blid2_tripm_pane_t1_ParamLimits

0xabbf,	// (0x0003f084) blid2_tripm_pane_t1

0xabd3,	// (0x0003f098) blid2_tripm_pane_t2_ParamLimits

0xabd3,	// (0x0003f098) blid2_tripm_pane_t2

0xabe5,	// (0x0003f0aa) blid2_tripm_pane_t3_ParamLimits

0xabe5,	// (0x0003f0aa) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x00043eb4) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x00043eb4) blid2_tripm_pane_t

0xac17,	// (0x0003f0dc) cell_blid2_satellite_pane_ParamLimits

0xac17,	// (0x0003f0dc) cell_blid2_satellite_pane

0xac31,	// (0x0003f0f6) cell_blid2_satellite_pane_g1

0xe54f,	// (0x00042a14) cell_blid2_satellite_pane_t1

0x1c86,	// (0x0003614b) blid2_speed_pane_g1

0xe55d,	// (0x00042a22) blid2_speed_pane_t1

0xe56b,	// (0x00042a30) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x00043ebd) blid2_speed_pane_t

0x1c86,	// (0x0003614b) blid2_navig_ring_pane_g1

0xac3a,	// (0x0003f0ff) blid2_navig_ring_pane_g2

0xac42,	// (0x0003f107) blid2_navig_ring_pane_g3

0xac4a,	// (0x0003f10f) blid2_navig_ring_pane_g4

0xac52,	// (0x0003f117) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x00043ec2) blid2_navig_ring_pane_g

0x1547,	// (0x00035a0c) bg_popup_window_pane_cp011

0xe579,	// (0x00042a3e) popup_blid2_search_window_g1

0xe581,	// (0x00042a46) popup_blid2_search_window_t1

0xe58f,	// (0x00042a54) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x00043ecd) popup_blid2_search_window_t

0x2004,	// (0x000364c9) main_browser_pane_g1

0x1ce4,	// (0x000361a9) main_browser_pane_ParamLimits

0x1b35,	// (0x00035ffa) bg_button_pane_cp011_ParamLimits

0x9d1b,	// (0x0003e1e0) cell_vitu2_function_pane_g1_ParamLimits

0x29c9,	// (0x00036e8e) bg_popup_sub_pane_cp22_ParamLimits

0xa598,	// (0x0003ea5d) input_focus_pane_cp08_ParamLimits

0xa5b3,	// (0x0003ea78) popup_vitu2_query_button_pane_ParamLimits

0xa5b3,	// (0x0003ea78) popup_vitu2_query_button_pane

0xa5c2,	// (0x0003ea87) popup_vitu2_query_input_button_pane

0xe167,	// (0x0004262c) popup_vitu2_query_window_g1_ParamLimits

0xa5cc,	// (0x0003ea91) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x00043dce) popup_vitu2_query_window_g_ParamLimits

0x1547,	// (0x00035a0c) bg_button_pane_cp026

0xac5a,	// (0x0003f11f) popup_vitu2_query_input_button_pane_g1

0x1547,	// (0x00035a0c) bg_button_pane_cp025

0xe59d,	// (0x00042a62) popup_vitu2_query_button_pane_t1

0x849f,	// (0x0003c964) main_mp3_pane_t6

0x84af,	// (0x0003c974) popup_slider_window_cp01

0x989a,	// (0x0003dd5f) cam4_battery_pane

0x997a,	// (0x0003de3f) cam4_battery_pane_cp02

0xa9ed,	// (0x0003eeb2) cam4_battery_pane_cp01

0xa9ed,	// (0x0003eeb2) cam4_battery_pane_cp03

0x1c86,	// (0x0003614b) cam4_battery_pane_g1

0xe5ab,	// (0x00042a70) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x00043ed2) cam4_battery_pane_g

0xd56e,	// (0x00041a33) popup_blid_sat_info2_window_t11

0x2739,	// (0x00036bfe) aid_size_touch_mv_arrow_left_ParamLimits

0x2762,	// (0x00036c27) aid_size_touch_mv_arrow_right_ParamLimits

0x27c0,	// (0x00036c85) navi_pane_g1_ParamLimits

0x27cc,	// (0x00036c91) navi_pane_g2_ParamLimits

0x27fa,	// (0x00036cbf) navi_pane_g3_ParamLimits

0xf311,	// (0x000437d6) navi_pane_g_ParamLimits

0x761f,	// (0x0003bae4) navi_pane_mv_t1_ParamLimits

0x8f07,	// (0x0003d3cc) grid_imed_effect_pane_ParamLimits

0x613a,	// (0x0003a5ff) aid_placing_vt_slider_lsc

0x1f53,	// (0x00036418) aid_placing_vt_slider_prt

0x1b35,	// (0x00035ffa) bg_tb_trans_pane_cp01_ParamLimits

0xd7ee,	// (0x00041cb3) popup_image_details_window_g1_ParamLimits

0xd801,	// (0x00041cc6) popup_image_details_window_g2_ParamLimits

0xd816,	// (0x00041cdb) popup_image_details_window_g3_ParamLimits

0xd816,	// (0x00041cdb) popup_image_details_window_g3

0xf61a,	// (0x00043adf) popup_image_details_window_g_ParamLimits

0xd82a,	// (0x00041cef) popup_image_details_window_t1_ParamLimits

0xd83c,	// (0x00041d01) popup_image_details_window_t2_ParamLimits

0xd855,	// (0x00041d1a) popup_image_details_window_t3_ParamLimits

0xd869,	// (0x00041d2e) popup_image_details_window_t4_ParamLimits

0xd884,	// (0x00041d49) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x00043ae6) popup_image_details_window_t_ParamLimits

0xa911,	// (0x0003edd6) cl_header_name_pane_ParamLimits

0xa911,	// (0x0003edd6) cl_header_name_pane

0xac62,	// (0x0003f127) cl_header_name_pane_t1_ParamLimits

0xac62,	// (0x0003f127) cl_header_name_pane_t1

0xac79,	// (0x0003f13e) cl_header_name_pane_t2_ParamLimits

0xac79,	// (0x0003f13e) cl_header_name_pane_t2

0xaca3,	// (0x0003f168) cl_header_name_pane_t3_ParamLimits

0xaca3,	// (0x0003f168) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x00043ed7) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x00043ed7) cl_header_name_pane_t

0x2889,	// (0x00036d4e) navi_pane_mv_g2_ParamLimits

0xde76,	// (0x0004233b) field_vitu2_entry_pane_g1_ParamLimits

0xde82,	// (0x00042347) field_vitu2_entry_pane_g2_ParamLimits

0x29a7,	// (0x00036e6c) field_vitu2_entry_pane_g3_ParamLimits

0x29a7,	// (0x00036e6c) field_vitu2_entry_pane_g3

0xf812,	// (0x00043cd7) field_vitu2_entry_pane_g_ParamLimits

0x9be1,	// (0x0003e0a6) cell_vitu2_itu_pane_g1_ParamLimits

0x9bf9,	// (0x0003e0be) cell_vitu2_itu_pane_g2_ParamLimits

0x9bf9,	// (0x0003e0be) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x00043ce3) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x00043ce3) cell_vitu2_itu_pane_g

0x1b35,	// (0x00035ffa) bg_vkb2_func_pane_cp05_ParamLimits

0x1b35,	// (0x00035ffa) bg_vkb2_func_pane_cp05

0x1b35,	// (0x00035ffa) bg_vkb2_func_pane_cp03

0x1b35,	// (0x00035ffa) bg_vkb2_func_pane_cp04

0x1b35,	// (0x00035ffa) bg_vkb2_func_pane_cp10_ParamLimits

0x1b35,	// (0x00035ffa) bg_vkb2_func_pane_cp10

0xa8b3,	// (0x0003ed78) bg_vkb2_func_pane_cp08

0xa580,	// (0x0003ea45) bg_vkb2_func_pane_cp06

0xa896,	// (0x0003ed5b) bg_vkb2_func_pane_cp07

0xe484,	// (0x00042949) bg_vkb2_func_pane_cp11_ParamLimits

0xe484,	// (0x00042949) bg_vkb2_func_pane_cp11

0xe499,	// (0x0004295e) bg_vkb2_func_pane_cp12_ParamLimits

0xe499,	// (0x0004295e) bg_vkb2_func_pane_cp12

0x1547,	// (0x00035a0c) bg_vkb2_func_pane_cp09

0xdebd,	// (0x00042382) bg_vkb2_func_pane_g1

0x211e,	// (0x000365e3) bg_vkb2_func_pane_g2

0xdec5,	// (0x0004238a) bg_vkb2_func_pane_g3

0xdecd,	// (0x00042392) bg_vkb2_func_pane_g4

0xe12c,	// (0x000425f1) bg_vkb2_func_pane_g5

0xdee5,	// (0x000423aa) bg_vkb2_func_pane_g6

0xdeed,	// (0x000423b2) bg_vkb2_func_pane_g7

0xdedd,	// (0x000423a2) bg_vkb2_func_pane_g8

0x20fe,	// (0x000365c3) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x00043ede) bg_vkb2_func_pane_g

0xabb1,	// (0x0003f076) blid2_tripm_pane_g6_ParamLimits

0xabb1,	// (0x0003f076) blid2_tripm_pane_g6

0xddae,	// (0x00042273) mp4_progress_pane_g1

0xac0b,	// (0x0003f0d0) blid2_tripm_values_pane_ParamLimits

0xac0b,	// (0x0003f0d0) blid2_tripm_values_pane

0xacc8,	// (0x0003f18d) blid2_tripm_values_pane_t1

0xacd6,	// (0x0003f19b) blid2_tripm_values_pane_t2

0xace4,	// (0x0003f1a9) blid2_tripm_values_pane_t3

0xacf2,	// (0x0003f1b7) blid2_tripm_values_pane_t4

0xad00,	// (0x0003f1c5) blid2_tripm_values_pane_t5

0xad0e,	// (0x0003f1d3) blid2_tripm_values_pane_t6

0xad1c,	// (0x0003f1e1) blid2_tripm_values_pane_t7

0xad2a,	// (0x0003f1ef) blid2_tripm_values_pane_t8

0xad38,	// (0x0003f1fd) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x00043ef1) blid2_tripm_values_pane_t

0x617a,	// (0x0003a63f) call_video_pane_t1_ParamLimits

0x619b,	// (0x0003a660) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0004367f) call_video_pane_t_ParamLimits

0x4b68,	// (0x0003902d) msg_header_pane_g1_ParamLimits

0x2a95,	// (0x00036f5a) msg_header_pane_g2_ParamLimits

0x2a95,	// (0x00036f5a) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00043874) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00043874) msg_header_pane_g

0x1ce4,	// (0x000361a9) main_clock2_pane_ParamLimits

0x8c81,	// (0x0003d146) grid_clock2_toolbar_pane_ParamLimits

0x8c81,	// (0x0003d146) grid_clock2_toolbar_pane

0x8c81,	// (0x0003d146) listscroll_clock2_pane_ParamLimits

0x8c81,	// (0x0003d146) listscroll_clock2_pane

0x8d31,	// (0x0003d1f6) main_clock2_pane_t3_ParamLimits

0x8d31,	// (0x0003d1f6) main_clock2_pane_t3

0x8d43,	// (0x0003d208) main_clock2_pane_t4_ParamLimits

0x8d43,	// (0x0003d208) main_clock2_pane_t4

0xe5b5,	// (0x00042a7a) cell_clock2_toolbar_pane

0xe5bd,	// (0x00042a82) cell_clock2_toolbar_pane_cp01

0xe5bd,	// (0x00042a82) cell_clock2_toolbar_pane_cp02

0xe5c5,	// (0x00042a8a) cell_clock2_toolbar_pane_cp03

0xe5cd,	// (0x00042a92) list_clock2_pane

0x26af,	// (0x00036b74) scroll_pane_cp10

0xe5d5,	// (0x00042a9a) list_single_clock2_pane_ParamLimits

0xe5d5,	// (0x00042a9a) list_single_clock2_pane

0x1efc,	// (0x000363c1) list_highlight_pane_cp08

0xe5e2,	// (0x00042aa7) list_single_clock2_pane_t1

0xe5f0,	// (0x00042ab5) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x00043f04) list_single_clock2_pane_t

0x1547,	// (0x00035a0c) bg_button_pane_cp10

0xe5fe,	// (0x00042ac3) cell_clock2_toolbar_pane_g1

0x78cd,	// (0x0003bd92) aid_main_viewer_pane_g1_ParamLimits

0x78cd,	// (0x0003bd92) aid_main_viewer_pane_g1

0x78d9,	// (0x0003bd9e) aid_main_viewer_pane_g2_ParamLimits

0x78d9,	// (0x0003bd9e) aid_main_viewer_pane_g2

0x78e5,	// (0x0003bdaa) aid_main_viewer_pane_g3_ParamLimits

0x78e5,	// (0x0003bdaa) aid_main_viewer_pane_g3

0x78f6,	// (0x0003bdbb) aid_main_viewer_pane_g4_ParamLimits

0x78f6,	// (0x0003bdbb) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00043885) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00043885) aid_main_viewer_pane_g

0x8011,	// (0x0003c4d6) main_calc_pane_ParamLimits

0x801e,	// (0x0003c4e3) main_dialer2_pane_ParamLimits

0x1547,	// (0x00035a0c) main_cam6_pane

0x1547,	// (0x00035a0c) main_vid6_pane

0x8c8d,	// (0x0003d152) listscroll_gen_pane_cp06_ParamLimits

0x8c8d,	// (0x0003d152) listscroll_gen_pane_cp06

0x8d55,	// (0x0003d21a) main_clock2_pane_t5_ParamLimits

0x8d55,	// (0x0003d21a) main_clock2_pane_t5

0x8da2,	// (0x0003d267) aid_call2_pane_cp10_ParamLimits

0x8db4,	// (0x0003d279) aid_call_pane_cp10_ParamLimits

0x272d,	// (0x00036bf2) popup_clock_analogue_window_cp10_g1_ParamLimits

0x272d,	// (0x00036bf2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8dc6,	// (0x0003d28b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8dc6,	// (0x0003d28b) popup_clock_analogue_window_cp10_g4_ParamLimits

0x272d,	// (0x00036bf2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x00043b9b) popup_clock_analogue_window_cp10_g_ParamLimits

0x8ddc,	// (0x0003d2a1) popup_clock_analogue_window_cp10_t1_ParamLimits

0xde27,	// (0x000422ec) cell_dialer2_keypad_pane_g2_ParamLimits

0xde27,	// (0x000422ec) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x00043c76) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x00043c76) cell_dialer2_keypad_pane_g

0x1c90,	// (0x00036155) cell_dialer2_keypad_pane_t1

0x9fd9,	// (0x0003e49e) main_cset_text2_pane_ParamLimits

0x9fd9,	// (0x0003e49e) main_cset_text2_pane

0xe347,	// (0x0004280c) area_vitu2_query_pane_g1_ParamLimits

0xa835,	// (0x0003ecfa) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x00043e21) area_vitu2_query_pane_g_ParamLimits

0xe3cb,	// (0x00042890) area_vitu2_query_pane_t7_ParamLimits

0xe3cb,	// (0x00042890) area_vitu2_query_pane_t7

0xa580,	// (0x0003ea45) bg_button_pane_cp018_ParamLimits

0xa896,	// (0x0003ed5b) bg_button_pane_cp021_ParamLimits

0xa8a2,	// (0x0003ed67) bg_button_pane_cp022_ParamLimits

0xa8b3,	// (0x0003ed78) bg_vkb2_func_pane_cp08_ParamLimits

0xa580,	// (0x0003ea45) bg_vkb2_func_pane_cp06_ParamLimits

0xa896,	// (0x0003ed5b) bg_vkb2_func_pane_cp07_ParamLimits

0xa8c5,	// (0x0003ed8a) input_focus_pane_cp09_ParamLimits

0xad46,	// (0x0003f20b) cam6_autofocus_pane_ParamLimits

0xad46,	// (0x0003f20b) cam6_autofocus_pane

0xad62,	// (0x0003f227) cam6_image_uncrop_pane_ParamLimits

0xad62,	// (0x0003f227) cam6_image_uncrop_pane

0xad9b,	// (0x0003f260) cam6_indi_pane_ParamLimits

0xad9b,	// (0x0003f260) cam6_indi_pane

0xadb5,	// (0x0003f27a) cam6_mode_pane_ParamLimits

0xadb5,	// (0x0003f27a) cam6_mode_pane

0xadc9,	// (0x0003f28e) cam6_timer_pane_ParamLimits

0xadc9,	// (0x0003f28e) cam6_timer_pane

0xaddd,	// (0x0003f2a2) cam6_zoom_pane_ParamLimits

0xaddd,	// (0x0003f2a2) cam6_zoom_pane

0xadf8,	// (0x0003f2bd) cam6_mode_pane_g1_ParamLimits

0xadf8,	// (0x0003f2bd) cam6_mode_pane_g1

0xae04,	// (0x0003f2c9) cam6_mode_pane_g2_ParamLimits

0xae04,	// (0x0003f2c9) cam6_mode_pane_g2

0xae10,	// (0x0003f2d5) cam6_mode_pane_g3_ParamLimits

0xae10,	// (0x0003f2d5) cam6_mode_pane_g3

0xae1c,	// (0x0003f2e1) cam6_mode_pane_g4_ParamLimits

0xae1c,	// (0x0003f2e1) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x00043f09) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x00043f09) cam6_mode_pane_g

0xde07,	// (0x000422cc) bg_tb_trans_pane_cp08_ParamLimits

0xde07,	// (0x000422cc) bg_tb_trans_pane_cp08

0xe606,	// (0x00042acb) cam6_battery_pane_ParamLimits

0xe606,	// (0x00042acb) cam6_battery_pane

0xe61c,	// (0x00042ae1) cam6_indi_pane_g1_ParamLimits

0xe61c,	// (0x00042ae1) cam6_indi_pane_g1

0xe62e,	// (0x00042af3) cam6_indi_pane_g2_ParamLimits

0xe62e,	// (0x00042af3) cam6_indi_pane_g2

0xe640,	// (0x00042b05) cam6_indi_pane_g3_ParamLimits

0xe640,	// (0x00042b05) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x00043f12) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x00043f12) cam6_indi_pane_g

0xe652,	// (0x00042b17) cam6_indi_pane_t1_ParamLimits

0xe652,	// (0x00042b17) cam6_indi_pane_t1

0x99f2,	// (0x0003deb7) cam6_autofocus_pane_g1

0x99fa,	// (0x0003debf) cam6_autofocus_pane_g2

0x9a02,	// (0x0003dec7) cam6_autofocus_pane_g3

0x9a0a,	// (0x0003decf) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x00043f19) cam6_autofocus_pane_g

0xe678,	// (0x00042b3d) cam6_timer_pane_g1

0xe680,	// (0x00042b45) cam6_timer_pane_t1

0xe68e,	// (0x00042b53) cam6_zoom_cont_pane

0xe696,	// (0x00042b5b) cam6_zoom_pane_g1

0xe69f,	// (0x00042b64) cam6_zoom_pane_g2

0xae28,	// (0x0003f2ed) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x00043f22) cam6_zoom_pane_g

0x1c86,	// (0x0003614b) cam6_battery_pane_g1

0x1c86,	// (0x0003614b) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00043551) cam6_battery_pane_g

0xe696,	// (0x00042b5b) cam6_zoom_cont_pane_g1

0xe69f,	// (0x00042b64) cam6_zoom_cont_pane_g2

0xe6a8,	// (0x00042b6d) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x00043f29) cam6_zoom_cont_pane_g

0xae46,	// (0x0003f30b) cam6_mode_pane_cp_ParamLimits

0xae46,	// (0x0003f30b) cam6_mode_pane_cp

0xae5a,	// (0x0003f31f) cam6_zoom_pane_cp_ParamLimits

0xae5a,	// (0x0003f31f) cam6_zoom_pane_cp

0xae72,	// (0x0003f337) vid6_image_uncrop_cif_pane_ParamLimits

0xae72,	// (0x0003f337) vid6_image_uncrop_cif_pane

0xae9e,	// (0x0003f363) vid6_image_uncrop_nhd_pane_ParamLimits

0xae9e,	// (0x0003f363) vid6_image_uncrop_nhd_pane

0xaebb,	// (0x0003f380) vid6_image_uncrop_vga_pane_ParamLimits

0xaebb,	// (0x0003f380) vid6_image_uncrop_vga_pane

0xaeda,	// (0x0003f39f) vid6_image_uncrop_wvga_pane_ParamLimits

0xaeda,	// (0x0003f39f) vid6_image_uncrop_wvga_pane

0xaef7,	// (0x0003f3bc) vid6_indi_pane_ParamLimits

0xaef7,	// (0x0003f3bc) vid6_indi_pane

0xde07,	// (0x000422cc) bg_tb_trans_pane_cp09_ParamLimits

0xde07,	// (0x000422cc) bg_tb_trans_pane_cp09

0xe6c0,	// (0x00042b85) cam6_battery_pane_cp_ParamLimits

0xe6c0,	// (0x00042b85) cam6_battery_pane_cp

0xe6cc,	// (0x00042b91) vid6_indi_pane_g1_ParamLimits

0xe6cc,	// (0x00042b91) vid6_indi_pane_g1

0xe6de,	// (0x00042ba3) vid6_indi_pane_g2_ParamLimits

0xe6de,	// (0x00042ba3) vid6_indi_pane_g2

0xe6f0,	// (0x00042bb5) vid6_indi_pane_g3_ParamLimits

0xe6f0,	// (0x00042bb5) vid6_indi_pane_g3

0xe705,	// (0x00042bca) vid6_indi_pane_g4_ParamLimits

0xe705,	// (0x00042bca) vid6_indi_pane_g4

0xe71a,	// (0x00042bdf) vid6_indi_pane_g5_ParamLimits

0xe71a,	// (0x00042bdf) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x00043f30) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x00043f30) vid6_indi_pane_g

0xe734,	// (0x00042bf9) vid6_indi_pane_t1_ParamLimits

0xe734,	// (0x00042bf9) vid6_indi_pane_t1

0xe74a,	// (0x00042c0f) vid6_indi_pane_t2_ParamLimits

0xe74a,	// (0x00042c0f) vid6_indi_pane_t2

0xe772,	// (0x00042c37) vid6_indi_pane_t3_ParamLimits

0xe772,	// (0x00042c37) vid6_indi_pane_t3

0xe79a,	// (0x00042c5f) vid6_indi_pane_t4_ParamLimits

0xe79a,	// (0x00042c5f) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x00043f3b) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x00043f3b) vid6_indi_pane_t

0xe7be,	// (0x00042c83) wait_bar_pane_cp08

0xaf1c,	// (0x0003f3e1) main_cset_text2_pane_t1_ParamLimits

0xaf1c,	// (0x0003f3e1) main_cset_text2_pane_t1

0xae31,	// (0x0003f2f6) listscroll_gen_pane_cp06_t1_ParamLimits

0xae31,	// (0x0003f2f6) listscroll_gen_pane_cp06_t1

0x1547,	// (0x00035a0c) main_cam6_set_pane

0x1c48,	// (0x0003610d) bg_tb_trans_pane_cp06_ParamLimits

0x98a2,	// (0x0003dd67) cam4_indicators_pane_g1_ParamLimits

0x98b3,	// (0x0003dd78) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x00043cb3) cam4_indicators_pane_g_ParamLimits

0x98d1,	// (0x0003dd96) cam4_indicators_pane_t1_ParamLimits

0x1b35,	// (0x00035ffa) bg_tb_trans_pane_cp07_ParamLimits

0x9984,	// (0x0003de49) vid4_indicators_pane_g1_ParamLimits

0x9998,	// (0x0003de5d) vid4_indicators_pane_g2_ParamLimits

0x99ac,	// (0x0003de71) vid4_indicators_pane_g3_ParamLimits

0x99bd,	// (0x0003de82) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x00043cc5) vid4_indicators_pane_g_ParamLimits

0x99db,	// (0x0003dea0) vid4_indicators_pane_t1_ParamLimits

0xa9f5,	// (0x0003eeba) vid4_progress_pane_g1_ParamLimits

0xaa05,	// (0x0003eeca) vid4_progress_pane_g2_ParamLimits

0xaa15,	// (0x0003eeda) vid4_progress_pane_g3_ParamLimits

0xaa27,	// (0x0003eeec) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x00043e6c) vid4_progress_pane_g_ParamLimits

0xaa3f,	// (0x0003ef04) vid4_progress_pane_t1_ParamLimits

0xaa55,	// (0x0003ef1a) vid4_progress_pane_t2_ParamLimits

0xaa6a,	// (0x0003ef2f) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x00043e77) vid4_progress_pane_t_ParamLimits

0xaa7f,	// (0x0003ef44) wait_bar_pane_cp07_ParamLimits

0xaf4f,	// (0x0003f414) main_cam6_set_pane_g2_ParamLimits

0xaf4f,	// (0x0003f414) main_cam6_set_pane_g2

0xaf5b,	// (0x0003f420) main_cset6_listscroll_pane_ParamLimits

0xaf5b,	// (0x0003f420) main_cset6_listscroll_pane

0xaf86,	// (0x0003f44b) main_cset6_slider_pane_ParamLimits

0xaf86,	// (0x0003f44b) main_cset6_slider_pane

0xaf92,	// (0x0003f457) main_cset6_text2_pane_ParamLimits

0xaf92,	// (0x0003f457) main_cset6_text2_pane

0xe7cd,	// (0x00042c92) main_cset6_text_pane

0xe7d5,	// (0x00042c9a) main_cset_list_pane_copy1_ParamLimits

0xe7d5,	// (0x00042c9a) main_cset_list_pane_copy1

0xe7e5,	// (0x00042caa) scroll_pane_cp028_copy1

0xafa5,	// (0x0003f46a) cset_list_set_pane_copy1

0xafb8,	// (0x0003f47d) aid_position_infowindow_above_copy1

0xafc0,	// (0x0003f485) aid_position_infowindow_below_copy1

0x4cd6,	// (0x0003919b) cset_list_set_pane_g1_copy1

0x4c85,	// (0x0003914a) cset_list_set_pane_g3_copy1_ParamLimits

0x4c85,	// (0x0003914a) cset_list_set_pane_g3_copy1

0x4c94,	// (0x00039159) cset_list_set_pane_t1_copy1_ParamLimits

0x4c94,	// (0x00039159) cset_list_set_pane_t1_copy1

0x1b35,	// (0x00035ffa) list_highlight_pane_cp021_copy1_ParamLimits

0x1b35,	// (0x00035ffa) list_highlight_pane_cp021_copy1

0xe7ee,	// (0x00042cb3) cset6_slider_pane_ParamLimits

0xe7ee,	// (0x00042cb3) cset6_slider_pane

0xe81a,	// (0x00042cdf) main_cset6_slider_pane_g1_ParamLimits

0xe81a,	// (0x00042cdf) main_cset6_slider_pane_g1

0xafc8,	// (0x0003f48d) main_cset6_slider_pane_g2_ParamLimits

0xafc8,	// (0x0003f48d) main_cset6_slider_pane_g2

0xe842,	// (0x00042d07) main_cset6_slider_pane_g3_ParamLimits

0xe842,	// (0x00042d07) main_cset6_slider_pane_g3

0xaff0,	// (0x0003f4b5) main_cset6_slider_pane_g4_ParamLimits

0xaff0,	// (0x0003f4b5) main_cset6_slider_pane_g4

0xaffc,	// (0x0003f4c1) main_cset6_slider_pane_g5_ParamLimits

0xaffc,	// (0x0003f4c1) main_cset6_slider_pane_g5

0xe012,	// (0x000424d7) main_cset6_slider_pane_g7_ParamLimits

0xe012,	// (0x000424d7) main_cset6_slider_pane_g7

0xe01e,	// (0x000424e3) main_cset6_slider_pane_g8_ParamLimits

0xe01e,	// (0x000424e3) main_cset6_slider_pane_g8

0xb00a,	// (0x0003f4cf) main_cset6_slider_pane_g9_ParamLimits

0xb00a,	// (0x0003f4cf) main_cset6_slider_pane_g9

0xb016,	// (0x0003f4db) main_cset6_slider_pane_g10_ParamLimits

0xb016,	// (0x0003f4db) main_cset6_slider_pane_g10

0xb022,	// (0x0003f4e7) main_cset6_slider_pane_g11_ParamLimits

0xb022,	// (0x0003f4e7) main_cset6_slider_pane_g11

0xb02e,	// (0x0003f4f3) main_cset6_slider_pane_g12_ParamLimits

0xb02e,	// (0x0003f4f3) main_cset6_slider_pane_g12

0xb03a,	// (0x0003f4ff) main_cset6_slider_pane_g13_ParamLimits

0xb03a,	// (0x0003f4ff) main_cset6_slider_pane_g13

0xb046,	// (0x0003f50b) main_cset6_slider_pane_g14_ParamLimits

0xb046,	// (0x0003f50b) main_cset6_slider_pane_g14

0xb052,	// (0x0003f517) main_cset6_slider_pane_g15_ParamLimits

0xb052,	// (0x0003f517) main_cset6_slider_pane_g15

0xb06a,	// (0x0003f52f) main_cset6_slider_pane_g16_ParamLimits

0xb06a,	// (0x0003f52f) main_cset6_slider_pane_g16

0xb078,	// (0x0003f53d) main_cset6_slider_pane_g17_ParamLimits

0xb078,	// (0x0003f53d) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x00043f44) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x00043f44) main_cset6_slider_pane_g

0xe84e,	// (0x00042d13) main_cset6_slider_pane_t1_ParamLimits

0xe84e,	// (0x00042d13) main_cset6_slider_pane_t1

0xb09e,	// (0x0003f563) main_cset6_slider_pane_t2_ParamLimits

0xb09e,	// (0x0003f563) main_cset6_slider_pane_t2

0xb0c9,	// (0x0003f58e) main_cset6_slider_pane_t3_ParamLimits

0xb0c9,	// (0x0003f58e) main_cset6_slider_pane_t3

0xb0f4,	// (0x0003f5b9) main_cset6_slider_pane_t4_ParamLimits

0xb0f4,	// (0x0003f5b9) main_cset6_slider_pane_t4

0xb11f,	// (0x0003f5e4) main_cset6_slider_pane_t5_ParamLimits

0xb11f,	// (0x0003f5e4) main_cset6_slider_pane_t5

0xe88f,	// (0x00042d54) main_cset6_slider_pane_t7_ParamLimits

0xe88f,	// (0x00042d54) main_cset6_slider_pane_t7

0xb14c,	// (0x0003f611) main_cset6_slider_pane_t8_ParamLimits

0xb14c,	// (0x0003f611) main_cset6_slider_pane_t8

0xb170,	// (0x0003f635) main_cset6_slider_pane_t9_ParamLimits

0xb170,	// (0x0003f635) main_cset6_slider_pane_t9

0xb194,	// (0x0003f659) main_cset6_slider_pane_t10_ParamLimits

0xb194,	// (0x0003f659) main_cset6_slider_pane_t10

0xb1b8,	// (0x0003f67d) main_cset6_slider_pane_t11_ParamLimits

0xb1b8,	// (0x0003f67d) main_cset6_slider_pane_t11

0xe8c5,	// (0x00042d8a) main_cset6_slider_pane_t14_ParamLimits

0xe8c5,	// (0x00042d8a) main_cset6_slider_pane_t14

0xe8fe,	// (0x00042dc3) main_cset6_slider_pane_t15_ParamLimits

0xe8fe,	// (0x00042dc3) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x00043f69) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x00043f69) main_cset6_slider_pane_t

0xe0e0,	// (0x000425a5) cset_slider_pane_g1_copy1

0xe0e9,	// (0x000425ae) cset_slider_pane_g2_copy1

0xe0f2,	// (0x000425b7) cset_slider_pane_g3_copy1

0x1547,	// (0x00035a0c) bg_popup_sub_pane_cp011_copy1

0xe937,	// (0x00042dfc) main_cset_text_pane_g1_copy1

0xe17b,	// (0x00042640) main_cset_text_pane_t1_copy1

0xe189,	// (0x0004264e) main_cset_text_pane_t2_copy1

0xe197,	// (0x0004265c) main_cset_text_pane_t3_copy1

0xe1a5,	// (0x0004266a) main_cset_text_pane_t4_copy1

0xe1b3,	// (0x00042678) main_cset_text_pane_t5_copy1

0xe93f,	// (0x00042e04) main_cset_text_pane_t6_copy1

0xe94d,	// (0x00042e12) main_cset_text_pane_t7_copy1

0xb1dc,	// (0x0003f6a1) main_cset_text2_pane_t1_copy1

0x1b35,	// (0x00035ffa) main_ncimui_pane

0x806f,	// (0x0003c534) popup_query_ncimui_window_ParamLimits

0x806f,	// (0x0003c534) popup_query_ncimui_window

0x4c41,	// (0x00039106) field_cale_ev2_pane_g4_ParamLimits

0x4c41,	// (0x00039106) field_cale_ev2_pane_g4

0x9189,	// (0x0003d64e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9189,	// (0x0003d64e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x00043c4d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x00043c4d) cell_video_dialer_keypad_pane_g

0x91a1,	// (0x0003d666) cell_video_dialer_keypad_pane_t1

0x1547,	// (0x00035a0c) bg_popup_window_pane_cp012

0x2589,	// (0x00036a4e) heading_pane_cp06

0xe985,	// (0x00042e4a) ncim_query_content_pane

0x1547,	// (0x00035a0c) bg_popup_heading_pane_cp01

0xe98d,	// (0x00042e52) ncim_heading_pane_t1

0xe99b,	// (0x00042e60) ncim_indicator_popup_pane

0xe9ad,	// (0x00042e72) ncim_query_button_pane

0xe9c1,	// (0x00042e86) ncim_query_content_pane_t1

0xe9d3,	// (0x00042e98) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x00043fad) ncim_query_content_pane_t

0xea0d,	// (0x00042ed2) ncim_query_list_pane

0xea1f,	// (0x00042ee4) ncim_query_popup_pane

0xe99b,	// (0x00042e60) ncim_indicator_popup_pane_ParamLimits

0xb32f,	// (0x0003f7f4) ncim_query_content_pane_g1_ParamLimits

0xb32f,	// (0x0003f7f4) ncim_query_content_pane_g1

0xe9c1,	// (0x00042e86) ncim_query_content_pane_t1_ParamLimits

0xe9d3,	// (0x00042e98) ncim_query_content_pane_t2_ParamLimits

0xb33b,	// (0x0003f800) ncim_query_content_pane_t3_ParamLimits

0xb33b,	// (0x0003f800) ncim_query_content_pane_t3

0xb358,	// (0x0003f81d) ncim_query_content_pane_t4_ParamLimits

0xb358,	// (0x0003f81d) ncim_query_content_pane_t4

0xb375,	// (0x0003f83a) ncim_query_content_pane_t5_ParamLimits

0xb375,	// (0x0003f83a) ncim_query_content_pane_t5

0xe9e5,	// (0x00042eaa) ncim_query_content_pane_t6_ParamLimits

0xe9e5,	// (0x00042eaa) ncim_query_content_pane_t6

0xfae8,	// (0x00043fad) ncim_query_content_pane_t_ParamLimits

0xea0d,	// (0x00042ed2) ncim_query_list_pane_ParamLimits

0xea1f,	// (0x00042ee4) ncim_query_popup_pane_ParamLimits

0xea33,	// (0x00042ef8) wait_bar_pane_cp04

0x1547,	// (0x00035a0c) input_focus_pane_cp011

0xea3b,	// (0x00042f00) ncim_query_popup_pane_t1

0xea49,	// (0x00042f0e) ncim_list_query_list_pane_ParamLimits

0xea49,	// (0x00042f0e) ncim_list_query_list_pane

0x1547,	// (0x00035a0c) bg_button_pane_cp027

0xea56,	// (0x00042f1b) ncim_query_button_pane_g1

0x1547,	// (0x00035a0c) list_highlight_pane_cp012

0xea60,	// (0x00042f25) ncim_list_query_list_pane_g1

0xea68,	// (0x00042f2d) ncim_list_query_list_pane_t1

0x98c2,	// (0x0003dd87) cam4_indicators_pane_g3_ParamLimits

0x98c2,	// (0x0003dd87) cam4_indicators_pane_g3

0x99c9,	// (0x0003de8e) vid4_indicators_pane_g5_ParamLimits

0x99c9,	// (0x0003de8e) vid4_indicators_pane_g5

0xaa33,	// (0x0003eef8) vid4_progress_pane_g5_ParamLimits

0xaa33,	// (0x0003eef8) vid4_progress_pane_g5

0xb21b,	// (0x0003f6e0) main_ncimui_pane_g1

0xb283,	// (0x0003f748) ncimui_group_query_pane_ParamLimits

0xb283,	// (0x0003f748) ncimui_group_query_pane

0xb2cb,	// (0x0003f790) ncimui_list_pane_ParamLimits

0xb2cb,	// (0x0003f790) ncimui_list_pane

0xb2f2,	// (0x0003f7b7) ncimui_text_pane_ParamLimits

0xb2f2,	// (0x0003f7b7) ncimui_text_pane

0xb392,	// (0x0003f857) ncimui_text_pane_t1_ParamLimits

0xb392,	// (0x0003f857) ncimui_text_pane_t1

0xea76,	// (0x00042f3b) ncimui_list_single_graphic_pane_ParamLimits

0xea76,	// (0x00042f3b) ncimui_list_single_graphic_pane

0xb3b1,	// (0x0003f876) ncimui_query_pane_ParamLimits

0xb3b1,	// (0x0003f876) ncimui_query_pane

0x1547,	// (0x00035a0c) list_highlight_pane_cp013

0xea86,	// (0x00042f4b) ncim_list_query_list_pane_t1_copy1

0xea60,	// (0x00042f25) ncim_list_single_graphic_pane_g1

0xb3c4,	// (0x0003f889) ncim_query_button_pane_cp01

0xb3d0,	// (0x0003f895) ncim_query_entry_pane_ParamLimits

0xb3d0,	// (0x0003f895) ncim_query_entry_pane

0xb3e3,	// (0x0003f8a8) ncimui_query_pane_g1

0xb3ef,	// (0x0003f8b4) ncimui_query_pane_t1_ParamLimits

0xb3ef,	// (0x0003f8b4) ncimui_query_pane_t1

0x1b35,	// (0x00035ffa) input_focus_pane_cp012

0xea94,	// (0x00042f59) ncim_query_entry_pane_t1

0x1ce4,	// (0x000361a9) main_im_pane_ParamLimits

0x1b35,	// (0x00035ffa) main_mobtv_pane_ParamLimits

0x1b35,	// (0x00035ffa) main_mobtv_pane

0xb086,	// (0x0003f54b) main_cset6_slider_pane_g18_ParamLimits

0xb086,	// (0x0003f54b) main_cset6_slider_pane_g18

0xb092,	// (0x0003f557) main_cset6_slider_pane_g19_ParamLimits

0xb092,	// (0x0003f557) main_cset6_slider_pane_g19

0x29a7,	// (0x00036e6c) bg_main_mobtv_pane_ParamLimits

0x29a7,	// (0x00036e6c) bg_main_mobtv_pane

0xb408,	// (0x0003f8cd) main_mobtv_info_pane

0xb413,	// (0x0003f8d8) main_mobtv_loading_pane_ParamLimits

0xb413,	// (0x0003f8d8) main_mobtv_loading_pane

0xeaa6,	// (0x00042f6b) main_mobtv_pg_channel_list_pane

0xeab0,	// (0x00042f75) main_mobtv_pg_hdr_pane

0xb420,	// (0x0003f8e5) main_mobtv_programe_curr_pane_ParamLimits

0xb420,	// (0x0003f8e5) main_mobtv_programe_curr_pane

0xb42d,	// (0x0003f8f2) main_mobtv_programe_next_pane_ParamLimits

0xb42d,	// (0x0003f8f2) main_mobtv_programe_next_pane

0xeab9,	// (0x00042f7e) popup_mobtv_noti_window

0x1c86,	// (0x0003614b) main_tv_pg_hdr_pane_g1

0xeac1,	// (0x00042f86) main_tv_pg_hdr_pane_g2

0xeac9,	// (0x00042f8e) main_tv_pg_hdr_pane_g3

0xead1,	// (0x00042f96) main_tv_pg_hdr_pane_g4

0xead9,	// (0x00042f9e) main_tv_pg_hdr_pane_g5

0xeae3,	// (0x00042fa8) main_tv_pg_hdr_pane_g6

0xeaed,	// (0x00042fb2) main_tv_pg_hdr_pane_g7

0xeaf7,	// (0x00042fbc) main_tv_pg_hdr_pane_g8

0xeb01,	// (0x00042fc6) main_tv_pg_hdr_pane_g9

0xeb0b,	// (0x00042fd0) main_tv_pg_hdr_pane_g10

0xeb15,	// (0x00042fda) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x00043fba) main_tv_pg_hdr_pane_g

0xeb1f,	// (0x00042fe4) main_tv_pg_hdr_pane_t1

0xeb2d,	// (0x00042ff2) main_tv_pg_hdr_pane_t2

0xeb3b,	// (0x00043000) main_tv_pg_hdr_pane_t3

0xeb4b,	// (0x00043010) main_tv_pg_hdr_pane_t4

0xeb5b,	// (0x00043020) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x00043fd1) main_tv_pg_hdr_pane_t

0xeb6b,	// (0x00043030) single_mobtv_pg_channel_pane_ParamLimits

0xeb6b,	// (0x00043030) single_mobtv_pg_channel_pane

0xeb7d,	// (0x00043042) single_mobtv_pg_channel_table_pane

0xeb86,	// (0x0004304b) single_mobtv_pg_channel_thumb_pane

0xeb8f,	// (0x00043054) single_tv_pg_channel_pane_g1

0xeb98,	// (0x0004305d) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x00043fdc) single_tv_pg_channel_pane_g

0x1c48,	// (0x0003610d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1c48,	// (0x0003610d) bg_single_mobtv_pg_channel_thumb_pane

0xeba1,	// (0x00043066) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xeba1,	// (0x00043066) single_mobtv_pg_channel_thumb_pane_g1

0xebaf,	// (0x00043074) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xebaf,	// (0x00043074) single_mobtv_pg_channel_thumb_pane_g2

0xebbb,	// (0x00043080) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xebbb,	// (0x00043080) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x00043fe1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x00043fe1) single_mobtv_pg_channel_thumb_pane_g

0xebc7,	// (0x0004308c) single_mobtv_pg_channel_thumb_pane_t1

0xebd5,	// (0x0004309a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x00043fe8) single_mobtv_pg_channel_thumb_pane_t

0x1c86,	// (0x0003614b) bg_single_mobtv_pg_channel_table_pane_g1

0x1c86,	// (0x0003614b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00043551) bg_single_mobtv_pg_channel_table_pane_g

0xebe3,	// (0x000430a8) single_mobtv_pg_channel_table_pane_t1

0xebf1,	// (0x000430b6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x00043fed) single_mobtv_pg_channel_table_pane_t

0xb442,	// (0x0003f907) main_mobtv_info_pane_g1_ParamLimits

0xb442,	// (0x0003f907) main_mobtv_info_pane_g1

0xb45e,	// (0x0003f923) main_mobtv_info_pane_t1_ParamLimits

0xb45e,	// (0x0003f923) main_mobtv_info_pane_t1

0xb4d6,	// (0x0003f99b) main_mobtv_info_pane_t2_ParamLimits

0xb4d6,	// (0x0003f99b) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x00043ff7) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x00043ff7) main_mobtv_info_pane_t

0xb565,	// (0x0003fa2a) wait_bar_pane_cp05

0xb577,	// (0x0003fa3c) main_mobtv_loading_pane_g1_ParamLimits

0xb577,	// (0x0003fa3c) main_mobtv_loading_pane_g1

0xb585,	// (0x0003fa4a) main_mobtv_loading_pane_g2_ParamLimits

0xb585,	// (0x0003fa4a) main_mobtv_loading_pane_g2

0xb591,	// (0x0003fa56) main_mobtv_loading_pane_g3_ParamLimits

0xb591,	// (0x0003fa56) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x00043ffe) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x00043ffe) main_mobtv_loading_pane_g

0xebff,	// (0x000430c4) main_mobtv_loading_pane_t1_ParamLimits

0xebff,	// (0x000430c4) main_mobtv_loading_pane_t1

0xec17,	// (0x000430dc) main_mobtv_loading_pane_t2_ParamLimits

0xec17,	// (0x000430dc) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x00044005) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x00044005) main_mobtv_loading_pane_t

0xb59f,	// (0x0003fa64) wait_bar_pane_cp06_ParamLimits

0xb59f,	// (0x0003fa64) wait_bar_pane_cp06

0xec3b,	// (0x00043100) main_mobtv_programe_curr_pane_t1

0xec49,	// (0x0004310e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x0004400a) main_mobtv_programe_curr_pane_t

0xec57,	// (0x0004311c) main_mobtv_programe_next_pane_t1

0xec65,	// (0x0004312a) main_mobtv_programe_next_pane_t2

0xec73,	// (0x00043138) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x0004400f) main_mobtv_programe_next_pane_t

0x1547,	// (0x00035a0c) bg_popup_mobtv_noti_window_pane

0xec81,	// (0x00043146) popup_mobtv_noti_window_g1

0xec89,	// (0x0004314e) popup_mobtv_noti_window_t1

0xec97,	// (0x0004315c) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x00044016) popup_mobtv_noti_window_t

0x1c86,	// (0x0003614b) bg_popup_mobtv_noti_window_pane_g1

0x1547,	// (0x00035a0c) sc_clock_pane

0x1547,	// (0x00035a0c) main_fs_bigclock_pane

0xabf9,	// (0x0003f0be) blid2_tripm_pane_t4_ParamLimits

0xabf9,	// (0x0003f0be) blid2_tripm_pane_t4

0x1c56,	// (0x0003611b) sc_clock_pane_g1_ParamLimits

0x1c56,	// (0x0003611b) sc_clock_pane_g1

0x1ca4,	// (0x00036169) sc_clock_pane_t1_ParamLimits

0x1ca4,	// (0x00036169) sc_clock_pane_t1

0x1ca4,	// (0x00036169) sc_clock_pane_t2_ParamLimits

0x1ca4,	// (0x00036169) sc_clock_pane_t2

0x1ca4,	// (0x00036169) sc_clock_pane_t3_ParamLimits

0x1ca4,	// (0x00036169) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x0004401b) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x0004401b) sc_clock_pane_t

0xbca6,	// (0x0004016b) main_fs_bigclock_indicator_pane_ParamLimits

0xbca6,	// (0x0004016b) main_fs_bigclock_indicator_pane

0xb5e6,	// (0x0003faab) main_fs_bigclock_pane_g1_ParamLimits

0xb5e6,	// (0x0003faab) main_fs_bigclock_pane_g1

0xbcb2,	// (0x00040177) main_fs_bigclock_pane_t1_ParamLimits

0xbcb2,	// (0x00040177) main_fs_bigclock_pane_t1

0xbcc4,	// (0x00040189) main_fs_bigclock_pane_t2_ParamLimits

0xbcc4,	// (0x00040189) main_fs_bigclock_pane_t2

0xbcd8,	// (0x0004019d) main_fs_bigclock_pane_t3_ParamLimits

0xbcd8,	// (0x0004019d) main_fs_bigclock_pane_t3

0x0002,

0xfcd4,	// (0x00044199) main_fs_bigclock_pane_t_ParamLimits

0xfcd4,	// (0x00044199) main_fs_bigclock_pane_t

0x0aa6,	// (0x00034f6b) main_fs_bigclock_indicator_pane_g1

0xe9b5,	// (0x00042e7a) ncim_query_content_pane_g2_ParamLimits

0xe9b5,	// (0x00042e7a) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x00043fa8) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x00043fa8) ncim_query_content_pane_g

0x1ca4,	// (0x00036169) sc_clock_pane_t4_ParamLimits

0x1ca4,	// (0x00036169) sc_clock_pane_t4

0x1b35,	// (0x00035ffa) main_radioblah_pane

0x977d,	// (0x0003dc42) cell_call4_button_pane_t1_copy1_ParamLimits

0x977d,	// (0x0003dc42) cell_call4_button_pane_t1_copy1

0xb235,	// (0x0003f6fa) main_ncimui_pane_t1_ParamLimits

0xb235,	// (0x0003f6fa) main_ncimui_pane_t1

0xb24f,	// (0x0003f714) main_ncimui_pane_t2_ParamLimits

0xb24f,	// (0x0003f714) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x00043fa1) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x00043fa1) main_ncimui_pane_t

0x29c9,	// (0x00036e8e) main_radioblah_anim_pane_ParamLimits

0x29c9,	// (0x00036e8e) main_radioblah_anim_pane

0x29c9,	// (0x00036e8e) main_radioblah_info_pane_ParamLimits

0x29c9,	// (0x00036e8e) main_radioblah_info_pane

0x29b5,	// (0x00036e7a) main_radioblah_pane_t1_ParamLimits

0x29b5,	// (0x00036e7a) main_radioblah_pane_t1

0x29b5,	// (0x00036e7a) main_radioblah_pane_t2_ParamLimits

0x29b5,	// (0x00036e7a) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x0004403c) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x0004403c) main_radioblah_pane_t

0x1c3a,	// (0x000360ff) main_radioblah_rocker_ctrl_pane_ParamLimits

0x1c3a,	// (0x000360ff) main_radioblah_rocker_ctrl_pane

0xd342,	// (0x00041807) main_radioblah_info_pane_t1_ParamLimits

0xd342,	// (0x00041807) main_radioblah_info_pane_t1

0xee0c,	// (0x000432d1) main_radioblah_info_pane_t2_ParamLimits

0xee0c,	// (0x000432d1) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x00044045) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x00044045) main_radioblah_info_pane_t

0x1c86,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g1

0x1c86,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g2

0x1c86,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g3

0x1c86,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g4

0x1c86,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g5

0x1c86,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x0004404e) main_radioblah_rocker_ctrl_pane_g

0xb1dc,	// (0x0003f6a1) main_cset_text2_pane_t1_copy1_ParamLimits

0x97f0,	// (0x0003dcb5) cam4_image_uncrop_qvga_pane

0x9937,	// (0x0003ddfc) vid4_image_uncrop_qcif_pane

0xad8d,	// (0x0003f252) cam6_image_uncrop_qvga_pane_ParamLimits

0xad8d,	// (0x0003f252) cam6_image_uncrop_qvga_pane

0xe6b0,	// (0x00042b75) vid6_image_uncrop_qcif_pane_ParamLimits

0xe6b0,	// (0x00042b75) vid6_image_uncrop_qcif_pane

0x1547,	// (0x00035a0c) bg_popup_preview_window_pane_cp03

0xe95b,	// (0x00042e20) list_cset_text2_pane

0xe963,	// (0x00042e28) main_cset6_text2_pane_g1

0xe96b,	// (0x00042e30) main_cset6_text2_pane_t1

0xb62a,	// (0x0003faef) list_cset_text2_pane_t1_ParamLimits

0xb62a,	// (0x0003faef) list_cset_text2_pane_t1

0x1b35,	// (0x00035ffa) main_radioblah_pane_ParamLimits

0xb551,	// (0x0003fa16) main_mobtv_info_pane_t3_ParamLimits

0xb551,	// (0x0003fa16) main_mobtv_info_pane_t3

0x29a7,	// (0x00036e6c) main_radioblah_pane_g1

0xeddc,	// (0x000432a1) main_radioblah_info_pane_g1

0x1ca4,	// (0x00036169) main_radioblah_info_pane_t3_ParamLimits

0x1ca4,	// (0x00036169) main_radioblah_info_pane_t3

0x719b,	// (0x0003b660) highlight_cell_cale_month_pane_ParamLimits

0x719b,	// (0x0003b660) highlight_cell_cale_month_pane

0x1547,	// (0x00035a0c) main_phob_fisheye_pane

0xd9aa,	// (0x00041e6f) scroll_pane_cp0031_ParamLimits

0xd9aa,	// (0x00041e6f) scroll_pane_cp0031

0xe7be,	// (0x00042c83) wait_bar_pane_cp08_ParamLimits

0xafa5,	// (0x0003f46a) cset_list_set_pane_copy1_ParamLimits

0xee5b,	// (0x00043320) highlight_cell_cale_month_pane_g1

0xb647,	// (0x0003fb0c) highlight_cell_cale_month_pane_t1

0xe437,	// (0x000428fc) list_gen_pane_cp01

0xdffd,	// (0x000424c2) scroll_pane_01

0xb655,	// (0x0003fb1a) list_single_double_fisheye_pane

0xb65e,	// (0x0003fb23) list_double_fisheye_pane_g1_ParamLimits

0xb65e,	// (0x0003fb23) list_double_fisheye_pane_g1

0xb66a,	// (0x0003fb2f) list_double_fisheye_pane_g2_ParamLimits

0xb66a,	// (0x0003fb2f) list_double_fisheye_pane_g2

0xb67e,	// (0x0003fb43) list_double_fisheye_pane_g3_ParamLimits

0xb67e,	// (0x0003fb43) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x0004405b) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x0004405b) list_double_fisheye_pane_g

0xb6a7,	// (0x0003fb6c) list_double_fisheye_pane_t1_ParamLimits

0xb6a7,	// (0x0003fb6c) list_double_fisheye_pane_t1

0xb6c2,	// (0x0003fb87) list_double_fisheye_pane_t2_ParamLimits

0xb6c2,	// (0x0003fb87) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x00044066) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x00044066) list_double_fisheye_pane_t

0x1547,	// (0x00035a0c) main_call5_pane

0x1c3a,	// (0x000360ff) sc_swipe_pane_ParamLimits

0x1c3a,	// (0x000360ff) sc_swipe_pane

0xb6f0,	// (0x0003fbb5) call5_image_pane_ParamLimits

0xb6f0,	// (0x0003fbb5) call5_image_pane

0xb700,	// (0x0003fbc5) call5_swipe_1_pane_ParamLimits

0xb700,	// (0x0003fbc5) call5_swipe_1_pane

0xb70c,	// (0x0003fbd1) call5_swipe_2_pane_ParamLimits

0xb70c,	// (0x0003fbd1) call5_swipe_2_pane

0xb726,	// (0x0003fbeb) popup_call5_audio_first_window_ParamLimits

0xb726,	// (0x0003fbeb) popup_call5_audio_first_window

0x1c48,	// (0x0003610d) call5_swipe_1_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) call5_swipe_1_pane_g1

0xee63,	// (0x00043328) call5_swipe_1_pane_g2_ParamLimits

0xee63,	// (0x00043328) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x0004406b) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x0004406b) call5_swipe_1_pane_g

0xee6f,	// (0x00043334) call5_swipe_1_pane_t1_ParamLimits

0xee6f,	// (0x00043334) call5_swipe_1_pane_t1

0x1c48,	// (0x0003610d) call5_swipe_2_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) call5_swipe_2_pane_g1

0xee84,	// (0x00043349) call5_swipe_2_pane_g2_ParamLimits

0xee84,	// (0x00043349) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x00044070) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x00044070) call5_swipe_2_pane_g

0xee90,	// (0x00043355) call5_swipe_2_pane_t1_ParamLimits

0xee90,	// (0x00043355) call5_swipe_2_pane_t1

0x1c48,	// (0x0003610d) sc_swipe_pane_g1_ParamLimits

0x1c48,	// (0x0003610d) sc_swipe_pane_g1

0x1c56,	// (0x0003611b) sc_swipe_pane_g2_ParamLimits

0x1c56,	// (0x0003611b) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x00044075) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x00044075) sc_swipe_pane_g

0x1c90,	// (0x00036155) sc_swipe_pane_t1_ParamLimits

0x1c90,	// (0x00036155) sc_swipe_pane_t1

0x1547,	// (0x00035a0c) main_cmail_launcher_pane

0xb734,	// (0x0003fbf9) aid_size_cell_cmail_l_ParamLimits

0xb734,	// (0x0003fbf9) aid_size_cell_cmail_l

0xb742,	// (0x0003fc07) grid_cmail_l_pane_ParamLimits

0xb742,	// (0x0003fc07) grid_cmail_l_pane

0xb752,	// (0x0003fc17) cell_cmail_l_pane_ParamLimits

0xb752,	// (0x0003fc17) cell_cmail_l_pane

0xeea5,	// (0x0004336a) cell_cmail_l_pane_g1_ParamLimits

0xeea5,	// (0x0004336a) cell_cmail_l_pane_g1

0xeeb1,	// (0x00043376) cell_cmail_l_pane_t1_ParamLimits

0xeeb1,	// (0x00043376) cell_cmail_l_pane_t1

0xeec7,	// (0x0004338c) cell_cmail_l_pane_t2_ParamLimits

0xeec7,	// (0x0004338c) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x0004407a) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x0004407a) cell_cmail_l_pane_t

0x1b35,	// (0x00035ffa) grid_highlight_pane_cp018_ParamLimits

0x1b35,	// (0x00035ffa) grid_highlight_pane_cp018

0x563a,	// (0x00039aff) main2_pane_ParamLimits

0x563a,	// (0x00039aff) main2_pane

0x1d7c,	// (0x00036241) popup_sp_fs_action_menu_bg_pane_g1

0x1d84,	// (0x00036249) popup_sp_fs_action_menu_bg_pane_g2

0x1d8c,	// (0x00036251) popup_sp_fs_action_menu_bg_pane_g3

0x1d94,	// (0x00036259) popup_sp_fs_action_menu_bg_pane_g4

0x1d9c,	// (0x00036261) popup_sp_fs_action_menu_bg_pane_g5

0x1da4,	// (0x00036269) popup_sp_fs_action_menu_bg_pane_g6

0x1dac,	// (0x00036271) popup_sp_fs_action_menu_bg_pane_g7

0x1db4,	// (0x00036279) popup_sp_fs_action_menu_bg_pane_g8

0x1dbc,	// (0x00036281) popup_sp_fs_action_menu_bg_pane_g9

0x1dc4,	// (0x00036289) popup_sp_fs_action_menu_bg_pane_g10

0x1dc4,	// (0x00036289) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x000435a2) popup_sp_fs_action_menu_bg_pane_g

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g3_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g3_g2

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00043650) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00043650) list_medium_line_x2_t3_g3_g

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g3_t1

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g3_t2

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00043657) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00043657) list_medium_line_x2_t3_g3_t

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g2_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0004365e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0004365e) list_medium_line_x2_t3_g2_g

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g2_t1

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g2_t2

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00043657) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00043657) list_medium_line_x2_t3_g2_t

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g4_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g4_g2

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g4_g3

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00043663) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00043663) list_medium_line_x2_t4_g4_g

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g4_t1

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g4_t2

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g4_t3

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0004366c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0004366c) list_medium_line_x2_t4_g4_t

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g4_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g4_g2

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g4_g3

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00043663) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00043663) list_medium_line_x2_t2_g4_g

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g4_t1

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x000436d3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x000436d3) list_medium_line_x2_t2_g4_t

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g3_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g3_g2

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00043650) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00043650) list_medium_line_x2_t2_g3_g

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g3_t1

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x000436d3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x000436d3) list_medium_line_x2_t2_g3_t

0x736b,	// (0x0003b830) main_sp_fs_list_pane_ParamLimits

0x736b,	// (0x0003b830) main_sp_fs_list_pane

0x7377,	// (0x0003b83c) sp_fs_scroll_pane_ParamLimits

0x7377,	// (0x0003b83c) sp_fs_scroll_pane

0x2402,	// (0x000368c7) list_medium_line_x2_t3_t1

0x2402,	// (0x000368c7) list_medium_line_x2_t3_t2

0x2402,	// (0x000368c7) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x0004371e) list_medium_line_x2_t3_t

0x2402,	// (0x000368c7) list_medium_line_x3_t4_t1

0x2402,	// (0x000368c7) list_medium_line_x3_t4_t2

0x2402,	// (0x000368c7) list_medium_line_x3_t4_t3

0x2402,	// (0x000368c7) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x00043725) list_medium_line_x3_t4_t

0x2402,	// (0x000368c7) list_medium_line_x4_t5_t1

0x2402,	// (0x000368c7) list_medium_line_x4_t5_t2

0x2402,	// (0x000368c7) list_medium_line_x4_t5_t3

0x2402,	// (0x000368c7) list_medium_line_x4_t5_t4

0x2402,	// (0x000368c7) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x0004372e) list_medium_line_x4_t5_t

0x1c48,	// (0x0003610d) list_medium_line_t4_g4_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t4_g4_g1

0x1c48,	// (0x0003610d) list_medium_line_t4_g4_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t4_g4_g2

0x1c48,	// (0x0003610d) list_medium_line_t4_g4_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t4_g4_g3

0x1c48,	// (0x0003610d) list_medium_line_t4_g4_g4_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00043663) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00043663) list_medium_line_t4_g4_g

0x1c90,	// (0x00036155) list_medium_line_t4_g4_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t4_g4_t1

0x1c90,	// (0x00036155) list_medium_line_t4_g4_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t4_g4_t2

0x1c90,	// (0x00036155) list_medium_line_t4_g4_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t4_g4_t3

0x1c90,	// (0x00036155) list_medium_line_t4_g4_t4_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0004366c) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0004366c) list_medium_line_t4_g4_t

0x7460,	// (0x0003b925) chi_dic_find_pane_g1

0x802c,	// (0x0003c4f1) main_tport_pane

0x2402,	// (0x000368c7) list_medium_line_plain_t1

0x1c48,	// (0x0003610d) list_medium_line_t2_g2_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t2_g2_g1

0x1c48,	// (0x0003610d) list_medium_line_t2_g2_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0004365e) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0004365e) list_medium_line_t2_g2_g

0x1c90,	// (0x00036155) list_medium_line_t2_g2_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t2_g2_t1

0x1c90,	// (0x00036155) list_medium_line_t2_g2_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x000436d3) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x000436d3) list_medium_line_t2_g2_t

0x4ca9,	// (0x0003916e) aid_sp_fs_list_icon_a_sm

0x4cb1,	// (0x00039176) aid_sp_fs_list_icon_d

0xe440,	// (0x00042905) aid_sp_fs_text_primary

0x4cb9,	// (0x0003917e) aid_sp_fs_text_secondary

0x1547,	// (0x00035a0c) list_medium_line

0x1547,	// (0x00035a0c) list_medium_line_g2

0x1547,	// (0x00035a0c) list_medium_line_g3

0x1547,	// (0x00035a0c) list_medium_line_plain

0x1547,	// (0x00035a0c) list_medium_line_plain_t2

0x1547,	// (0x00035a0c) list_medium_line_plain_t3

0x1547,	// (0x00035a0c) list_medium_line_right_icon

0x1547,	// (0x00035a0c) list_medium_line_right_iconx2

0x1547,	// (0x00035a0c) list_medium_line_t2

0x1547,	// (0x00035a0c) list_medium_line_t2_g2

0x1547,	// (0x00035a0c) list_medium_line_t2_g3

0x1547,	// (0x00035a0c) list_medium_line_t2_right_icon

0x1547,	// (0x00035a0c) list_medium_line_t2_right_iconx2

0x1547,	// (0x00035a0c) list_medium_line_t3

0x1547,	// (0x00035a0c) list_medium_line_t3_g2

0x1547,	// (0x00035a0c) list_medium_line_t3_g3

0x1547,	// (0x00035a0c) list_medium_line_t3_right_iconx2

0x1547,	// (0x00035a0c) list_medium_line_t4_g4

0x1547,	// (0x00035a0c) list_medium_line_x2

0x1547,	// (0x00035a0c) list_medium_line_x2_t2_g2

0x1547,	// (0x00035a0c) list_medium_line_x2_t2_g3

0x1547,	// (0x00035a0c) list_medium_line_x2_t2_g4

0x1547,	// (0x00035a0c) list_medium_line_x2_t3

0x1547,	// (0x00035a0c) list_medium_line_x2_t3_g2

0x1547,	// (0x00035a0c) list_medium_line_x2_t3_g3

0x1547,	// (0x00035a0c) list_medium_line_x2_t3_g4

0x1547,	// (0x00035a0c) list_medium_line_x2_t4_g2

0x1547,	// (0x00035a0c) list_medium_line_x2_t4_g4

0x1547,	// (0x00035a0c) list_medium_line_x3

0x1547,	// (0x00035a0c) list_medium_line_x3_t4

0x1547,	// (0x00035a0c) list_medium_line_x3_t4_g4

0x1547,	// (0x00035a0c) list_medium_line_x4_t4

0x1547,	// (0x00035a0c) list_medium_line_x4_t4_g7

0x1547,	// (0x00035a0c) list_medium_line_x4_t5

0x4cc2,	// (0x00039187) list_single_fs_dyc_pane_ParamLimits

0x4cc2,	// (0x00039187) list_single_fs_dyc_pane

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g1

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g2

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g3

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g4

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g5

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x4_t4_g7_g6

0x1c56,	// (0x0003611b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1c56,	// (0x0003611b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x00043f82) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x00043f82) list_medium_line_x4_t4_g7_g

0x1c90,	// (0x00036155) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x4_t4_g7_t1

0x1c90,	// (0x00036155) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x4_t4_g7_t2

0x1c90,	// (0x00036155) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x4_t4_g7_t3

0x1ca4,	// (0x00036169) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1ca4,	// (0x00036169) list_medium_line_x4_t4_g7_t4

0x1ca4,	// (0x00036169) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1ca4,	// (0x00036169) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x00043f91) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x00043f91) list_medium_line_x4_t4_g7_t

0x4cde,	// (0x000391a3) list_single_dyc_row_pane_ParamLimits

0x4cde,	// (0x000391a3) list_single_dyc_row_pane

0xb6e4,	// (0x0003fba9) call5_gesture_pane_ParamLimits

0xb6e4,	// (0x0003fba9) call5_gesture_pane

0xb718,	// (0x0003fbdd) call5_windows_pane_ParamLimits

0xb718,	// (0x0003fbdd) call5_windows_pane

0xb76b,	// (0x0003fc30) call5_swipe_1_pane_cp_ParamLimits

0xb76b,	// (0x0003fc30) call5_swipe_1_pane_cp

0xb777,	// (0x0003fc3c) call5_swipe_2_pane_cp_ParamLimits

0xb777,	// (0x0003fc3c) call5_swipe_2_pane_cp

0x1efc,	// (0x000363c1) call5_image_pane_cp

0xb783,	// (0x0003fc48) popup_call5_audio_first_window_cp_ParamLimits

0xb783,	// (0x0003fc48) popup_call5_audio_first_window_cp

0xeee4,	// (0x000433a9) call5_swipe_1_pane_g1_cp_ParamLimits

0xeee4,	// (0x000433a9) call5_swipe_1_pane_g1_cp

0xeef1,	// (0x000433b6) call5_swipe_1_pane_g2_cp

0xeef9,	// (0x000433be) call5_swipe_1_pane_t1_cp_ParamLimits

0xeef9,	// (0x000433be) call5_swipe_1_pane_t1_cp

0xeee4,	// (0x000433a9) call5_swipe_2_pane_g1_cp_ParamLimits

0xeee4,	// (0x000433a9) call5_swipe_2_pane_g1_cp

0xef0e,	// (0x000433d3) call5_swipe_2_pane_g2_cp

0xef16,	// (0x000433db) call5_swipe_2_pane_t1_cp_ParamLimits

0xef16,	// (0x000433db) call5_swipe_2_pane_t1_cp

0x1b35,	// (0x00035ffa) main_sp_fs_email_pane

0xef2b,	// (0x000433f0) main_sp_fs_listscroll_pane_te

0x4cfb,	// (0x000391c0) popup_sp_fs_action_menu_pane_ParamLimits

0x4cfb,	// (0x000391c0) popup_sp_fs_action_menu_pane

0x1c86,	// (0x0003614b) bg_sp_fs_ctrlbar_pane_g1

0xef34,	// (0x000433f9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xef3d,	// (0x00043402) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xef46,	// (0x0004340b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1c86,	// (0x0003614b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x0004407f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd300,	// (0x000417c5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd300,	// (0x000417c5) bg_sp_fs_ctrlbar_ddmenu_pane

0xef4f,	// (0x00043414) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xef4f,	// (0x00043414) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xef5b,	// (0x00043420) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xef5b,	// (0x00043420) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x00044088) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x00044088) main_sp_fs_ctrlbar_ddmenu_pane_g

0xef67,	// (0x0004342c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xef67,	// (0x0004342c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1c86,	// (0x0003614b) list_medium_line_t2_right_icon_g1

0x2402,	// (0x000368c7) list_medium_line_t2_right_icon_t1

0x2402,	// (0x000368c7) list_medium_line_t2_right_icon_t2

0x0001,

0xf25b,	// (0x00043720) list_medium_line_t2_right_icon_t

0x29c9,	// (0x00036e8e) bg_sp_fs_ctrlbar_pane_ParamLimits

0x29c9,	// (0x00036e8e) bg_sp_fs_ctrlbar_pane

0xb7e8,	// (0x0003fcad) main_sp_fs_ctrlbar_button_pane_cp01

0xb7f0,	// (0x0003fcb5) main_sp_fs_ctrlbar_ddmenu_pane

0xefb9,	// (0x0004347e) main_sp_fs_ctrlbar_pane_g1

0xefc5,	// (0x0004348a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbc8,	// (0x0004408d) main_sp_fs_ctrlbar_pane_g

0xb82c,	// (0x0003fcf1) main_sp_fs_ctrlbar_pane_t1

0xb867,	// (0x0003fd2c) main_sp_fs_ctrlbar_pane

0xb87d,	// (0x0003fd42) main_sp_fs_listscroll_pane_te_cp01

0x4d3f,	// (0x00039204) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4d3f,	// (0x00039204) popup_sp_fs_action_menu_pane_cp01

0x1b35,	// (0x00035ffa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1b35,	// (0x00035ffa) bg_sp_fs_highlight_list_pane_cp01

0x4d5f,	// (0x00039224) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4d5f,	// (0x00039224) sp_fs_action_menu_list_gene_pane_g1

0xefec,	// (0x000434b1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xefec,	// (0x000434b1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd6,	// (0x0004409b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd6,	// (0x0004409b) sp_fs_action_menu_list_gene_pane_g

0x4d6e,	// (0x00039233) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4d6e,	// (0x00039233) sp_fs_action_menu_list_gene_pane_t1

0x4d86,	// (0x0003924b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4d86,	// (0x0003924b) sp_fs_action_menu_list_gene_pane

0x032d,	// (0x000347f2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x032d,	// (0x000347f2) popup_sp_fs_action_menu_bg_pane

0x4da5,	// (0x0003926a) sp_fs_action_menu_list_pane_ParamLimits

0x4da5,	// (0x0003926a) sp_fs_action_menu_list_pane

0x4dc5,	// (0x0003928a) sp_fs_scroll_pane_cp01_ParamLimits

0x4dc5,	// (0x0003928a) sp_fs_scroll_pane_cp01

0x2402,	// (0x000368c7) list_medium_line_plain_t2_t1

0x2402,	// (0x000368c7) list_medium_line_plain_t2_t2

0x0001,

0xf25b,	// (0x00043720) list_medium_line_plain_t2_t

0x2402,	// (0x000368c7) list_medium_line_plain_t3_t1

0x2402,	// (0x000368c7) list_medium_line_plain_t3_t2

0x2402,	// (0x000368c7) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x0004371e) list_medium_line_plain_t3_t

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g2_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0004365e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0004365e) list_medium_line_x2_t2_g2_g

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g2_t1

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x000436d3) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x000436d3) list_medium_line_x2_t2_g2_t

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g2_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0004365e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0004365e) list_medium_line_x2_t4_g2_g

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g2_t1

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g2_t2

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g2_t3

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0004366c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0004366c) list_medium_line_x2_t4_g2_t

0x1c86,	// (0x0003614b) list_medium_line_t3_right_iconx2_g1

0x1c86,	// (0x0003614b) list_medium_line_t3_right_iconx2_g2

0x1c86,	// (0x0003614b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x0004383a) list_medium_line_t3_right_iconx2_g

0x2402,	// (0x000368c7) list_medium_line_t3_right_iconx2_t1

0x2402,	// (0x000368c7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xf25b,	// (0x00043720) list_medium_line_t3_right_iconx2_t

0x1c48,	// (0x0003610d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x3_t4_g4_g1

0x1c48,	// (0x0003610d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x3_t4_g4_g2

0x1c48,	// (0x0003610d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x3_t4_g4_g3

0x1c48,	// (0x0003610d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00043663) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00043663) list_medium_line_x3_t4_g4_g

0x1c90,	// (0x00036155) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x3_t4_g4_t1

0x1c90,	// (0x00036155) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x3_t4_g4_t2

0x1c90,	// (0x00036155) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x3_t4_g4_t3

0x1c90,	// (0x00036155) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0004366c) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0004366c) list_medium_line_x3_t4_g4_t

0x4deb,	// (0x000392b0) list_single_dyc_row_text_pane_t1_ParamLimits

0x4deb,	// (0x000392b0) list_single_dyc_row_text_pane_t1

0x4e22,	// (0x000392e7) list_single_dyc_row_text_pane_t2_ParamLimits

0x4e22,	// (0x000392e7) list_single_dyc_row_text_pane_t2

0x4e98,	// (0x0003935d) list_single_dyc_row_text_pane_t3_ParamLimits

0x4e98,	// (0x0003935d) list_single_dyc_row_text_pane_t3

0x0005,

0xfbdb,	// (0x000440a0) list_single_dyc_row_text_pane_t_ParamLimits

0xfbdb,	// (0x000440a0) list_single_dyc_row_text_pane_t

0x4f69,	// (0x0003942e) list_single_dyc_row_pane_g1_ParamLimits

0x4f69,	// (0x0003942e) list_single_dyc_row_pane_g1

0x4f75,	// (0x0003943a) list_single_dyc_row_pane_g2_ParamLimits

0x4f75,	// (0x0003943a) list_single_dyc_row_pane_g2

0x4f81,	// (0x00039446) list_single_dyc_row_pane_g3_ParamLimits

0x4f81,	// (0x00039446) list_single_dyc_row_pane_g3

0x4f94,	// (0x00039459) list_single_dyc_row_pane_g4_ParamLimits

0x4f94,	// (0x00039459) list_single_dyc_row_pane_g4

0x0006,

0xfbe8,	// (0x000440ad) list_single_dyc_row_pane_g_ParamLimits

0xfbe8,	// (0x000440ad) list_single_dyc_row_pane_g

0x4fe6,	// (0x000394ab) list_single_dyc_row_text_pane_ParamLimits

0x4fe6,	// (0x000394ab) list_single_dyc_row_text_pane

0x1547,	// (0x00035a0c) bg_sp_fs_scroll_pane

0x0447,	// (0x0003490c) thumb_sp_fs_scroll_pane

0x1c48,	// (0x0003610d) list_medium_line_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_g1

0x1c90,	// (0x00036155) list_medium_line_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t1

0x1c48,	// (0x0003610d) list_medium_line_x2_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0004365e) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0004365e) list_medium_line_x2_g

0x1c90,	// (0x00036155) list_medium_line_x2_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t1

0x1c48,	// (0x0003610d) list_medium_line_x3_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x3_g1

0x015f,	// (0x00034624) list_medium_line_x3_g2_ParamLimits

0x015f,	// (0x00034624) list_medium_line_x3_g2

0x0001,

0xfbf7,	// (0x000440bc) list_medium_line_x3_g_ParamLimits

0xfbf7,	// (0x000440bc) list_medium_line_x3_g

0x0450,	// (0x00034915) list_medium_line_x3_t1_ParamLimits

0x0450,	// (0x00034915) list_medium_line_x3_t1

0x0464,	// (0x00034929) thumb_sp_fs_scroll_pane_g1

0x046d,	// (0x00034932) thumb_sp_fs_scroll_pane_g2

0x0476,	// (0x0003493b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbfc,	// (0x000440c1) thumb_sp_fs_scroll_pane_g

0x0464,	// (0x00034929) bg_sp_fs_scroll_pane_g1

0x046d,	// (0x00034932) bg_sp_fs_scroll_pane_g2

0x0476,	// (0x0003493b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbfc,	// (0x000440c1) bg_sp_fs_scroll_pane_g

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g4_g1

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g4_g2

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g4_g3

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00043663) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00043663) list_medium_line_x2_t3_g4_g

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g4_t1

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g4_t2

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00043657) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00043657) list_medium_line_x2_t3_g4_t

0x1c48,	// (0x0003610d) list_medium_line_g2_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_g2_g1

0x1c48,	// (0x0003610d) list_medium_line_g2_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0004365e) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0004365e) list_medium_line_g2_g

0x1c90,	// (0x00036155) list_medium_line_g2_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_g2_t1

0x1c48,	// (0x0003610d) list_medium_line_t3_g2_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t3_g2_g1

0x1c48,	// (0x0003610d) list_medium_line_t3_g2_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0004365e) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0004365e) list_medium_line_t3_g2_g

0x1c90,	// (0x00036155) list_medium_line_t3_g2_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_g2_t1

0x1c90,	// (0x00036155) list_medium_line_t3_g2_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_g2_t2

0x1c90,	// (0x00036155) list_medium_line_t3_g2_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00043657) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00043657) list_medium_line_t3_g2_t

0x1c86,	// (0x0003614b) list_medium_line_right_icon_g1

0x2402,	// (0x000368c7) list_medium_line_right_icon_t1

0x1c48,	// (0x0003610d) list_medium_line_t2_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t2_g1

0x1c90,	// (0x00036155) list_medium_line_t2_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t2_t1

0x1c90,	// (0x00036155) list_medium_line_t2_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x000436d3) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x000436d3) list_medium_line_t2_t

0x1c48,	// (0x0003610d) list_medium_line_t3_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t3_g1

0x1c90,	// (0x00036155) list_medium_line_t3_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_t1

0x1c90,	// (0x00036155) list_medium_line_t3_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_t2

0x1c90,	// (0x00036155) list_medium_line_t3_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00043657) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00043657) list_medium_line_t3_t

0x1c48,	// (0x0003610d) list_medium_line_g3_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_g3_g1

0x1c48,	// (0x0003610d) list_medium_line_g3_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_g3_g2

0x1c48,	// (0x0003610d) list_medium_line_g3_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00043650) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00043650) list_medium_line_g3_g

0x1c90,	// (0x00036155) list_medium_line_g3_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_g3_t1

0x1c48,	// (0x0003610d) list_medium_line_t2_g3_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t2_g3_g1

0x1c48,	// (0x0003610d) list_medium_line_t2_g3_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t2_g3_g2

0x1c48,	// (0x0003610d) list_medium_line_t2_g3_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00043650) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00043650) list_medium_line_t2_g3_g

0x1c90,	// (0x00036155) list_medium_line_t2_g3_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t2_g3_t1

0x1c90,	// (0x00036155) list_medium_line_t2_g3_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x000436d3) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x000436d3) list_medium_line_t2_g3_t

0x1c48,	// (0x0003610d) list_medium_line_t3_g3_g1_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t3_g3_g1

0x1c48,	// (0x0003610d) list_medium_line_t3_g3_g2_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t3_g3_g2

0x1c48,	// (0x0003610d) list_medium_line_t3_g3_g3_ParamLimits

0x1c48,	// (0x0003610d) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00043650) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00043650) list_medium_line_t3_g3_g

0x1c90,	// (0x00036155) list_medium_line_t3_g3_t1_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_g3_t1

0x1c90,	// (0x00036155) list_medium_line_t3_g3_t2_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_g3_t2

0x1c90,	// (0x00036155) list_medium_line_t3_g3_t3_ParamLimits

0x1c90,	// (0x00036155) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00043657) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00043657) list_medium_line_t3_g3_t

0x1c86,	// (0x0003614b) list_medium_line_right_iconx2_g1

0x1c86,	// (0x0003614b) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00043551) list_medium_line_right_iconx2_g

0x2402,	// (0x000368c7) list_medium_line_right_iconx2_t1

0x1c86,	// (0x0003614b) list_medium_line_t2_right_iconx2_g1

0x1c86,	// (0x0003614b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00043551) list_medium_line_t2_right_iconx2_g

0x2402,	// (0x000368c7) list_medium_line_t2_right_iconx2_t1

0x2402,	// (0x000368c7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xf25b,	// (0x00043720) list_medium_line_t2_right_iconx2_t

0x2402,	// (0x000368c7) list_medium_line_x4_t4_t1

0x2402,	// (0x000368c7) list_medium_line_x4_t4_t2

0x2402,	// (0x000368c7) list_medium_line_x4_t4_t3

0x2402,	// (0x000368c7) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x00043725) list_medium_line_x4_t4_t

0xb8c2,	// (0x0003fd87) tport_appsw_pane_ParamLimits

0xb8c2,	// (0x0003fd87) tport_appsw_pane

0xb8d0,	// (0x0003fd95) tport_contact_pane_ParamLimits

0xb8d0,	// (0x0003fd95) tport_contact_pane

0xb8e0,	// (0x0003fda5) tport_listscroll_pane_ParamLimits

0xb8e0,	// (0x0003fda5) tport_listscroll_pane

0xb8f0,	// (0x0003fdb5) cell_tport_appsw_pane_ParamLimits

0xb8f0,	// (0x0003fdb5) cell_tport_appsw_pane

0x1c56,	// (0x0003611b) tport_appsw_pane_g1_ParamLimits

0x1c56,	// (0x0003611b) tport_appsw_pane_g1

0x047f,	// (0x00034944) tport_contact_pane_g1

0xea3b,	// (0x00042f00) tport_contact_pane_t1

0x0488,	// (0x0003494d) tport_contact_pane_t2

0x0001,

0xfc03,	// (0x000440c8) tport_contact_pane_t

0x0496,	// (0x0003495b) list_tport_pane

0x049f,	// (0x00034964) scroll_pane_cp_030

0xb923,	// (0x0003fde8) cell_tport_appsw_pane_g1

0xb933,	// (0x0003fdf8) cell_tport_appsw_pane_t1

0xb941,	// (0x0003fe06) grid_highlight_pane_cp019

0xb949,	// (0x0003fe0e) list_tport_double_graphic_pane_ParamLimits

0xb949,	// (0x0003fe0e) list_tport_double_graphic_pane

0x1b35,	// (0x00035ffa) list_highlight_pane_cp023_ParamLimits

0x1b35,	// (0x00035ffa) list_highlight_pane_cp023

0xb95a,	// (0x0003fe1f) list_tport_double_graphic_pane_g1_ParamLimits

0xb95a,	// (0x0003fe1f) list_tport_double_graphic_pane_g1

0xb967,	// (0x0003fe2c) list_tport_double_graphic_pane_t1_ParamLimits

0xb967,	// (0x0003fe2c) list_tport_double_graphic_pane_t1

0xb97c,	// (0x0003fe41) list_tport_double_graphic_pane_t2_ParamLimits

0xb97c,	// (0x0003fe41) list_tport_double_graphic_pane_t2

0x0001,

0xfc0f,	// (0x000440d4) list_tport_double_graphic_pane_t_ParamLimits

0xfc0f,	// (0x000440d4) list_tport_double_graphic_pane_t

0x1547,	// (0x00035a0c) main_cale_note_pane

0x9b94,	// (0x0003e059) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9b94,	// (0x0003e059) cell_vitu2_function_top_wide_pane_cp01

0xb565,	// (0x0003fa2a) wait_bar_pane_cp05_ParamLimits

0x1b35,	// (0x00035ffa) listscroll_cmail_pane

0x04b0,	// (0x00034975) list_cmail_pane

0xb98e,	// (0x0003fe53) list_cmail_body_pane

0xb9b5,	// (0x0003fe7a) list_single_cmail_header_caption_pane

0xb9de,	// (0x0003fea3) list_single_cmail_header_detail_pane_ParamLimits

0xb9de,	// (0x0003fea3) list_single_cmail_header_detail_pane

0x04c7,	// (0x0003498c) list_single_cmail_header_caption_pane_t1

0x500b,	// (0x000394d0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x500b,	// (0x000394d0) list_single_cmail_header_detail_pane_g1

0x5021,	// (0x000394e6) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5021,	// (0x000394e6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc14,	// (0x000440d9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc14,	// (0x000440d9) list_single_cmail_header_detail_pane_g

0x502d,	// (0x000394f2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x502d,	// (0x000394f2) list_single_cmail_header_detail_pane_t1

0x508d,	// (0x00039552) list_single_cmail_header_editor_pane_bg_ParamLimits

0x508d,	// (0x00039552) list_single_cmail_header_editor_pane_bg

0xeb98,	// (0x0004305d) list_cmail_body_pane_g1

0x051b,	// (0x000349e0) list_cmail_body_pane_t1

0xdebd,	// (0x00042382) list_single_cmail_header_editor_pane_bg_g1

0x211e,	// (0x000365e3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdecd,	// (0x00042392) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdec5,	// (0x0004238a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe12c,	// (0x000425f1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdeed,	// (0x000423b2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdedd,	// (0x000423a2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdee5,	// (0x000423aa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x20fe,	// (0x000365c3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xba18,	// (0x0003fedd) calenote_gesture_pane_ParamLimits

0xba18,	// (0x0003fedd) calenote_gesture_pane

0xba32,	// (0x0003fef7) calenote_window_pane_ParamLimits

0xba32,	// (0x0003fef7) calenote_window_pane

0x0529,	// (0x000349ee) popup_note_window_cp01

0xba4a,	// (0x0003ff0f) calenote_swipe_1_pane_ParamLimits

0xba4a,	// (0x0003ff0f) calenote_swipe_1_pane

0xb777,	// (0x0003fc3c) calenote_swipe_2_pane_ParamLimits

0xb777,	// (0x0003fc3c) calenote_swipe_2_pane

0xeee4,	// (0x000433a9) calenote_swipe_1_pane_g1_ParamLimits

0xeee4,	// (0x000433a9) calenote_swipe_1_pane_g1

0x053b,	// (0x00034a00) calenote_swipe_1_pane_g2_ParamLimits

0x053b,	// (0x00034a00) calenote_swipe_1_pane_g2

0x0001,

0xfc20,	// (0x000440e5) calenote_swipe_1_pane_g_ParamLimits

0xfc20,	// (0x000440e5) calenote_swipe_1_pane_g

0x0547,	// (0x00034a0c) calenote_swipe_1_pane_t1_ParamLimits

0x0547,	// (0x00034a0c) calenote_swipe_1_pane_t1

0xeee4,	// (0x000433a9) calenote_swipe_2_pane_g1_ParamLimits

0xeee4,	// (0x000433a9) calenote_swipe_2_pane_g1

0x0566,	// (0x00034a2b) calenote_swipe_2_pane_g2_ParamLimits

0x0566,	// (0x00034a2b) calenote_swipe_2_pane_g2

0x0001,

0xfc25,	// (0x000440ea) calenote_swipe_2_pane_g_ParamLimits

0xfc25,	// (0x000440ea) calenote_swipe_2_pane_g

0x0572,	// (0x00034a37) calenote_swipe_2_pane_t1_ParamLimits

0x0572,	// (0x00034a37) calenote_swipe_2_pane_t1

0x1547,	// (0x00035a0c) main_mup_navstr_pane

0x8af6,	// (0x0003cfbb) main_mup3_pane_t7_ParamLimits

0x8af6,	// (0x0003cfbb) main_mup3_pane_t7

0x9296,	// (0x0003d75b) main_mp4_pane_g6_ParamLimits

0x9296,	// (0x0003d75b) main_mp4_pane_g6

0x95d9,	// (0x0003da9e) main_image3_pane_t4_ParamLimits

0x95d9,	// (0x0003da9e) main_image3_pane_t4

0xba5d,	// (0x0003ff22) popup_navstr_preview_pane_ParamLimits

0xba5d,	// (0x0003ff22) popup_navstr_preview_pane

0xba69,	// (0x0003ff2e) scroll_navstr_pane_ParamLimits

0xba69,	// (0x0003ff2e) scroll_navstr_pane

0x1547,	// (0x00035a0c) bg_popup_preview_window_pane_cp04

0x0599,	// (0x00034a5e) popup_navstr_preview_pane_t1

0xba75,	// (0x0003ff3a) scroll_navstr_pane_g1_ParamLimits

0xba75,	// (0x0003ff3a) scroll_navstr_pane_g1

0xba82,	// (0x0003ff47) scroll_navstr_pane_t1_ParamLimits

0xba82,	// (0x0003ff47) scroll_navstr_pane_t1

0x0532,	// (0x000349f7) bg_button_pane_cp014

0x0532,	// (0x000349f7) bg_button_pane_cp030

0xb68a,	// (0x0003fb4f) list_double_fisheye_pane_g4_ParamLimits

0xb68a,	// (0x0003fb4f) list_double_fisheye_pane_g4

0xb696,	// (0x0003fb5b) list_double_fisheye_pane_g5_ParamLimits

0xb696,	// (0x0003fb5b) list_double_fisheye_pane_g5

0xeff9,	// (0x000434be) sp_fs_scroll_pane_cp03

0xefb9,	// (0x0004347e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xefc5,	// (0x0004348a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbc8,	// (0x0004408d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb82c,	// (0x0003fcf1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x04bf,	// (0x00034984) sp_fs_scroll_pane_cp02

0x1e4d,	// (0x00036312) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1e4d,	// (0x00036312) popup_sp_fs_calendar_preview_list_single_pane

0x1547,	// (0x00035a0c) main_cam6_pano_pane

0x1b35,	// (0x00035ffa) main_mup3_pane_ParamLimits

0x1547,	// (0x00035a0c) main_phacti_pane

0xb43a,	// (0x0003f8ff) bg_button_pane_cp11

0xb452,	// (0x0003f917) main_mobtv_info_pane_g2_ParamLimits

0xb452,	// (0x0003f917) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x00043ff2) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x00043ff2) main_mobtv_info_pane_g

0x1ca4,	// (0x00036169) sc_clock_pane_t5_ParamLimits

0x1ca4,	// (0x00036169) sc_clock_pane_t5

0x29a7,	// (0x00036e6c) main_radioblah_pane_g1_ParamLimits

0x29b5,	// (0x00036e7a) main_radioblah_pane_t3_ParamLimits

0x29b5,	// (0x00036e7a) main_radioblah_pane_t3

0x29b5,	// (0x00036e7a) main_radioblah_pane_t4_ParamLimits

0x29b5,	// (0x00036e7a) main_radioblah_pane_t4

0x1c3a,	// (0x000360ff) main_radioblah_text_pane_ParamLimits

0x1c3a,	// (0x000360ff) main_radioblah_text_pane

0xeddc,	// (0x000432a1) main_radioblah_info_pane_g1_ParamLimits

0xee20,	// (0x000432e5) main_radioblah_info_pane_t4_ParamLimits

0xee20,	// (0x000432e5) main_radioblah_info_pane_t4

0x1b35,	// (0x00035ffa) main_sp_fs_calendar_pane

0xba94,	// (0x0003ff59) main_phacti_pane_g1

0xba9c,	// (0x0003ff61) phacti_note_pane_ParamLimits

0xba9c,	// (0x0003ff61) phacti_note_pane

0x05b0,	// (0x00034a75) phacti_term_pane_ParamLimits

0x05b0,	// (0x00034a75) phacti_term_pane

0x05c5,	// (0x00034a8a) phacti_note_pane_t1_ParamLimits

0x05c5,	// (0x00034a8a) phacti_note_pane_t1

0x50a4,	// (0x00039569) phacti_term_pane_g1

0x50ac,	// (0x00039571) phacti_term_pane_t1_ParamLimits

0x50ac,	// (0x00039571) phacti_term_pane_t1

0x060e,	// (0x00034ad3) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1ee3,	// (0x000363a8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc2f,	// (0x000440f4) popup_sp_fs_calendar_preview_list_single_pane_g

0x0616,	// (0x00034adb) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0616,	// (0x00034adb) popup_sp_fs_calendar_preview_list_single_pane_t1

0x062c,	// (0x00034af1) aid_popup_sp_fs_bg_corner_pane

0x1c86,	// (0x0003614b) popup_sp_fs_calendar_preview_bg_pane_g1

0x1547,	// (0x00035a0c) popup_sp_fs_calendar_preview_bg_pane

0x0634,	// (0x00034af9) popup_sp_fs_calendar_preview_list_pane

0x0645,	// (0x00034b0a) bg_main_sp_fs_cale_pane_ParamLimits

0x0645,	// (0x00034b0a) bg_main_sp_fs_cale_pane

0x065d,	// (0x00034b22) listscroll_cale_mrui_pane_ParamLimits

0x065d,	// (0x00034b22) listscroll_cale_mrui_pane

0xd966,	// (0x00041e2b) listscroll_sp_fs_schedule_track_pane

0x50df,	// (0x000395a4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x50df,	// (0x000395a4) main_sp_fs_ctrlbar_pane_cp01

0xd966,	// (0x00041e2b) main_sp_fs_ribbon_pane

0x50f5,	// (0x000395ba) popup_sp_fs_cale_preview_window

0xd925,	// (0x00041dea) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd925,	// (0x00041dea) list_single_sp_fs_schedule_track_pane

0xd925,	// (0x00041dea) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd925,	// (0x00041dea) bg_sp_fs_highlight_list_pane_cp03

0x87da,	// (0x0003cc9f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x87da,	// (0x0003cc9f) list_single_sp_fs_schedule_track_pane_g1

0x87da,	// (0x0003cc9f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x87da,	// (0x0003cc9f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc34,	// (0x000440f9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc34,	// (0x000440f9) list_single_sp_fs_schedule_track_pane_g

0xbab2,	// (0x0003ff77) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbab2,	// (0x0003ff77) list_single_sp_fs_schedule_track_pane_t1

0xdda2,	// (0x00042267) sp_fs_schedule_track_pane_ParamLimits

0xdda2,	// (0x00042267) sp_fs_schedule_track_pane

0xd96e,	// (0x00041e33) sp_fs_schedule_track_pane_g1

0xd96e,	// (0x00041e33) sp_fs_schedule_track_pane_g2

0xd96e,	// (0x00041e33) sp_fs_schedule_track_pane_g3

0xd96e,	// (0x00041e33) sp_fs_schedule_track_pane_g4

0xd96e,	// (0x00041e33) sp_fs_schedule_track_pane_g5

0x0004,

0xf7c8,	// (0x00043c8d) sp_fs_schedule_track_pane_g

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g1

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g2

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g3

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g4

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g5

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g6

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g7

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g8

0xd96e,	// (0x00041e33) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc39,	// (0x000440fe) bg_sp_fs_schedule_viewer_highlight_g

0xd966,	// (0x00041e2b) bg_main_sp_fs_ribbon_pane

0xd96e,	// (0x00041e33) main_sp_fs_ribbon_pane_g1

0x069d,	// (0x00034b62) main_sp_fs_ribbon_pane_t1

0x069d,	// (0x00034b62) main_sp_fs_ribbon_pane_t2

0x069d,	// (0x00034b62) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc4c,	// (0x00044111) main_sp_fs_ribbon_pane_t

0xd966,	// (0x00041e2b) main_sp_fs_ribbon_scheduler_pane

0xd96e,	// (0x00041e33) bg_main_sp_fs_ribbon_pane_g1

0xd96e,	// (0x00041e33) bg_main_sp_fs_ribbon_pane_g2

0xd96e,	// (0x00041e33) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x00043b6a) bg_main_sp_fs_ribbon_pane_g

0xd96e,	// (0x00041e33) main_sp_fs_ribbon_scheduler_pane_g1

0xd96e,	// (0x00041e33) main_sp_fs_ribbon_scheduler_pane_g2

0xd96e,	// (0x00041e33) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x00043b6a) main_sp_fs_ribbon_scheduler_pane_g

0x06ab,	// (0x00034b70) list_cale_mrui_pane

0xbac4,	// (0x0003ff89) sp_fs_scroll_pane_cp07_ParamLimits

0xbac4,	// (0x0003ff89) sp_fs_scroll_pane_cp07

0xd925,	// (0x00041dea) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd925,	// (0x00041dea) bg_sp_fs_schedule_viewer_highlight

0xd966,	// (0x00041e2b) list_single_sp_fs_schedule_track_pane_cp01

0xd966,	// (0x00041e2b) list_sp_fs_schedule_track_pane

0x06b8,	// (0x00034b7d) sp_fs_scroll_pane_cp06_ParamLimits

0x06b8,	// (0x00034b7d) sp_fs_scroll_pane_cp06

0x1c86,	// (0x0003614b) bgmain_sp_fs_calendar_pane_g1

0x5107,	// (0x000395cc) list_single_cale_mrui_pane_ParamLimits

0x5107,	// (0x000395cc) list_single_cale_mrui_pane

0x5135,	// (0x000395fa) list_single_cale_mrui_row_pane_ParamLimits

0x5135,	// (0x000395fa) list_single_cale_mrui_row_pane

0x5142,	// (0x00039607) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5142,	// (0x00039607) list_single_cale_mrui_row_pane_g1

0x517a,	// (0x0003963f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x517a,	// (0x0003963f) list_single_cale_mrui_row_pane_t1

0x518c,	// (0x00039651) list_single_cale_mrui_row_pane_t2_ParamLimits

0x518c,	// (0x00039651) list_single_cale_mrui_row_pane_t2

0x51f2,	// (0x000396b7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x51f2,	// (0x000396b7) list_single_cale_mrui_row_pane_t3

0x5221,	// (0x000396e6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5221,	// (0x000396e6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc5a,	// (0x0004411f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc5a,	// (0x0004411f) list_single_cale_mrui_row_pane_t

0x5250,	// (0x00039715) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5250,	// (0x00039715) list_single_cmail_header_editor_pane_bg_cp01

0x5278,	// (0x0003973d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5278,	// (0x0003973d) list_single_cmail_header_editor_pane_bg_cp02

0x078e,	// (0x00034c53) main_radioblah_text_pane_t1_ParamLimits

0x078e,	// (0x00034c53) main_radioblah_text_pane_t1

0x07a8,	// (0x00034c6d) cam6_indi_pane_cp01

0x07b0,	// (0x00034c75) cam6_mode_pane_cp01

0x07b8,	// (0x00034c7d) cam6_pano_pane

0x07c1,	// (0x00034c86) cam6_zoom_pane_cp01

0x07c9,	// (0x00034c8e) cam6_pano_image_pane

0x07d4,	// (0x00034c99) cam6_pano_pane_g1

0xeb98,	// (0x0004305d) cam6_pano_pane_g2

0x07dd,	// (0x00034ca2) cam6_pano_pane_g3

0x07e6,	// (0x00034cab) cam6_pano_pane_g4

0xdc1e,	// (0x000420e3) cam6_pano_pane_g5

0x07ef,	// (0x00034cb4) cam6_pano_pane_g6

0x07f9,	// (0x00034cbe) cam6_pano_pane_g7

0x0801,	// (0x00034cc6) cam6_pano_pane_g8

0x080a,	// (0x00034ccf) cam6_pano_pane_g9

0x0008,

0xfc63,	// (0x00044128) cam6_pano_pane_g

0x1547,	// (0x00035a0c) main_browser_tag_pane

0x0591,	// (0x00034a56) grid_navstr_albumart_pane

0x0815,	// (0x00034cda) cell_navstr_albumart_pane_ParamLimits

0x0815,	// (0x00034cda) cell_navstr_albumart_pane

0x0835,	// (0x00034cfa) cell_navstr_albumart_pane_g1

0x083d,	// (0x00034d02) cell_navstr_albumart_pane_g2

0x0845,	// (0x00034d0a) cell_navstr_albumart_pane_g3

0x084d,	// (0x00034d12) cell_navstr_albumart_pane_g4

0x0003,

0xfc76,	// (0x0004413b) cell_navstr_albumart_pane_g

0xbae0,	// (0x0003ffa5) bt_list_pane_ParamLimits

0xbae0,	// (0x0003ffa5) bt_list_pane

0xbb00,	// (0x0003ffc5) bt_list_pane_t1

0xbb0f,	// (0x0003ffd4) bt_list_pane_t2

0x0001,

0xfc7f,	// (0x00044144) bt_list_pane_t

0x1547,	// (0x00035a0c) main_cale_prevew_pane

0xbb1e,	// (0x0003ffe3) popup_cale_preview_window_ParamLimits

0xbb1e,	// (0x0003ffe3) popup_cale_preview_window

0x1b35,	// (0x00035ffa) bg_popup_preview_window_pane_cp05_ParamLimits

0x1b35,	// (0x00035ffa) bg_popup_preview_window_pane_cp05

0x0855,	// (0x00034d1a) list_cale_preview_pane_ParamLimits

0x0855,	// (0x00034d1a) list_cale_preview_pane

0xbb37,	// (0x0003fffc) list_double_cale_preview_pane_ParamLimits

0xbb37,	// (0x0003fffc) list_double_cale_preview_pane

0xbb49,	// (0x0004000e) list_single_cale_preview_pane_ParamLimits

0xbb49,	// (0x0004000e) list_single_cale_preview_pane

0xbb5f,	// (0x00040024) list_single_cale_preview_pane_g1

0xbb67,	// (0x0004002c) list_single_cale_preview_pane_t1_ParamLimits

0xbb67,	// (0x0004002c) list_single_cale_preview_pane_t1

0xbb7c,	// (0x00040041) list_double_cale_preview_pane_g1

0xbb84,	// (0x00040049) list_double_cale_preview_pane_t1_ParamLimits

0xbb84,	// (0x00040049) list_double_cale_preview_pane_t1

0xbb99,	// (0x0004005e) list_double_cale_preview_pane_t2_ParamLimits

0xbb99,	// (0x0004005e) list_double_cale_preview_pane_t2

0x0001,

0xfc84,	// (0x00044149) list_double_cale_preview_pane_t_ParamLimits

0xfc84,	// (0x00044149) list_double_cale_preview_pane_t

0x1547,	// (0x00035a0c) main_ezdial_pane

0x1b35,	// (0x00035ffa) main_sp_fs_email_pane_ParamLimits

0xb791,	// (0x0003fc56) cmail_ddmenu_btn01_pane_ParamLimits

0xb791,	// (0x0003fc56) cmail_ddmenu_btn01_pane

0xb7ae,	// (0x0003fc73) cmail_ddmenu_btn02_pane_ParamLimits

0xb7ae,	// (0x0003fc73) cmail_ddmenu_btn02_pane

0xb7cc,	// (0x0003fc91) cmail_ddmenu_btn03_pane_ParamLimits

0xb7cc,	// (0x0003fc91) cmail_ddmenu_btn03_pane

0xb867,	// (0x0003fd2c) main_sp_fs_ctrlbar_pane_ParamLimits

0xb87d,	// (0x0003fd42) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb98e,	// (0x0003fe53) list_cmail_body_pane_ParamLimits

0x04d5,	// (0x0003499a) bg_button_pane_cp12

0x04ea,	// (0x000349af) list_single_cmail_header_detail_pane_g3_ParamLimits

0x04ea,	// (0x000349af) list_single_cmail_header_detail_pane_g3

0x5069,	// (0x0003952e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5069,	// (0x0003952e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc1b,	// (0x000440e0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc1b,	// (0x000440e0) list_single_cmail_header_detail_pane_t

0x50c1,	// (0x00039586) phacti_term_pane_t2_ParamLimits

0x50c1,	// (0x00039586) phacti_term_pane_t2

0x0001,

0xfc2a,	// (0x000440ef) phacti_term_pane_t_ParamLimits

0xfc2a,	// (0x000440ef) phacti_term_pane_t

0x0861,	// (0x00034d26) aid_size_list_single_double

0xbbb1,	// (0x00040076) popup_ezdial_listscroll_window

0x086d,	// (0x00034d32) popup_number_entry_window_cp01

0x1efc,	// (0x000363c1) bg_popup_call_pane_cp09

0x087a,	// (0x00034d3f) ezdial_list_pane

0x0882,	// (0x00034d47) scroll_pane_cp23

0xd300,	// (0x000417c5) bg_button_pane_cp028_ParamLimits

0xd300,	// (0x000417c5) bg_button_pane_cp028

0xbbca,	// (0x0004008f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbbca,	// (0x0004008f) cmail_ddmenu_btn01_pane_g1

0xbbda,	// (0x0004009f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbbda,	// (0x0004009f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc89,	// (0x0004414e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc89,	// (0x0004414e) cmail_ddmenu_btn01_pane_g

0x088a,	// (0x00034d4f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x088a,	// (0x00034d4f) cmail_ddmenu_btn01_pane_t1

0x29c9,	// (0x00036e8e) bg_button_pane_cp029_ParamLimits

0x29c9,	// (0x00036e8e) bg_button_pane_cp029

0xbbe6,	// (0x000400ab) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbbe6,	// (0x000400ab) cmail_ddmenu_btn02_pane_g1

0xbbfe,	// (0x000400c3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbbfe,	// (0x000400c3) cmail_ddmenu_btn02_pane_t1

0x1c3a,	// (0x000360ff) bg_button_pane_cp031_ParamLimits

0x1c3a,	// (0x000360ff) bg_button_pane_cp031

0xbbe6,	// (0x000400ab) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbbe6,	// (0x000400ab) cmail_ddmenu_btn03_pane_g1

0xbbfe,	// (0x000400c3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbbfe,	// (0x000400c3) cmail_ddmenu_btn03_pane_t1

0x1c90,	// (0x00036155) cell_dialer2_keypad_pane_t1_ParamLimits

0xda20,	// (0x00041ee5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xda20,	// (0x00041ee5) cell_dialer2_keypad_pane_t1_copy1

0xb27b,	// (0x0003f740) ncimui_group_button_pane

0x1b35,	// (0x00035ffa) main_sp_fs_calendar_pane_ParamLimits

0xb9b5,	// (0x0003fe7a) list_single_cmail_header_caption_pane_ParamLimits

0x50d6,	// (0x0003959b) aid_recal_txt_sm_pane

0x1547,	// (0x00035a0c) mian_recal_day_pane

0x50f5,	// (0x000395ba) popup_sp_fs_cale_preview_window_ParamLimits

0x08a0,	// (0x00034d65) list_recal_day_pane

0x52af,	// (0x00039774) list_single_recal_day_pane_ParamLimits

0x52af,	// (0x00039774) list_single_recal_day_pane

0x08f4,	// (0x00034db9) list_single_recal_day_pane_g1_ParamLimits

0x08f4,	// (0x00034db9) list_single_recal_day_pane_g1

0x52c1,	// (0x00039786) list_single_recal_day_pane_g2_ParamLimits

0x52c1,	// (0x00039786) list_single_recal_day_pane_g2

0x52cd,	// (0x00039792) list_single_recal_day_pane_g3_ParamLimits

0x52cd,	// (0x00039792) list_single_recal_day_pane_g3

0x52d9,	// (0x0003979e) list_single_recal_day_pane_g4_ParamLimits

0x52d9,	// (0x0003979e) list_single_recal_day_pane_g4

0x52e7,	// (0x000397ac) list_single_recal_day_pane_g5_ParamLimits

0x52e7,	// (0x000397ac) list_single_recal_day_pane_g5

0x52fd,	// (0x000397c2) list_single_recal_day_pane_g6_ParamLimits

0x52fd,	// (0x000397c2) list_single_recal_day_pane_g6

0x0004,

0xfc98,	// (0x0004415d) list_single_recal_day_pane_g_ParamLimits

0xfc98,	// (0x0004415d) list_single_recal_day_pane_g

0x5311,	// (0x000397d6) list_single_recal_day_pane_t1

0x5323,	// (0x000397e8) list_single_recal_day_pane_t2

0x0001,

0xfca3,	// (0x00044168) list_single_recal_day_pane_t

0xbc22,	// (0x000400e7) ncimui_query_button_pane_ParamLimits

0xbc22,	// (0x000400e7) ncimui_query_button_pane

0xbc32,	// (0x000400f7) ncimui_query_button_pane_t1_ParamLimits

0xbc32,	// (0x000400f7) ncimui_query_button_pane_t1

0x095c,	// (0x00034e21) ncimui_query_button_pane_t2_ParamLimits

0x095c,	// (0x00034e21) ncimui_query_button_pane_t2

0x0001,

0xfca8,	// (0x0004416d) ncimui_query_button_pane_t_ParamLimits

0xfca8,	// (0x0004416d) ncimui_query_button_pane_t

0xbc45,	// (0x0004010a) query_button_pane_ParamLimits

0xbc45,	// (0x0004010a) query_button_pane

0x1547,	// (0x00035a0c) bg_button_pane_cp0028

0x096f,	// (0x00034e34) query_button_pane_t1

0x802c,	// (0x0003c4f1) main_tport_pane_ParamLimits

0xb898,	// (0x0003fd5d) bg_popup_window_pane_cp01_ParamLimits

0xb898,	// (0x0003fd5d) bg_popup_window_pane_cp01

0xb8a6,	// (0x0003fd6b) heading_pane_cp08_ParamLimits

0xb8a6,	// (0x0003fd6b) heading_pane_cp08

0xb8b4,	// (0x0003fd79) heading_pane_cp07_ParamLimits

0xb8b4,	// (0x0003fd79) heading_pane_cp07

0xb923,	// (0x0003fde8) cell_tport_appsw_pane_g2

0x0002,

0xfc08,	// (0x000440cd) cell_tport_appsw_pane_g

0x4aeb,	// (0x00038fb0) input_candi_list_open_g1

0x22a1,	// (0x00036766) list_cale_time_pane_g6_ParamLimits

0x22a1,	// (0x00036766) list_cale_time_pane_g6

0x84b9,	// (0x0003c97e) aid_size_touch_calib_1_ParamLimits

0x84b9,	// (0x0003c97e) aid_size_touch_calib_1

0x84c5,	// (0x0003c98a) aid_size_touch_calib_2_ParamLimits

0x84c5,	// (0x0003c98a) aid_size_touch_calib_2

0x84d3,	// (0x0003c998) aid_size_touch_calib_3_ParamLimits

0x84d3,	// (0x0003c998) aid_size_touch_calib_3

0x84e3,	// (0x0003c9a8) aid_size_touch_calib_4_ParamLimits

0x84e3,	// (0x0003c9a8) aid_size_touch_calib_4

0x84f1,	// (0x0003c9b6) main_touch_calib_button_group_pane_ParamLimits

0x84f1,	// (0x0003c9b6) main_touch_calib_button_group_pane

0x84ff,	// (0x0003c9c4) main_touch_calib_pane_g1_ParamLimits

0x850b,	// (0x0003c9d0) main_touch_calib_pane_g2_ParamLimits

0x8517,	// (0x0003c9dc) main_touch_calib_pane_g3_ParamLimits

0x8523,	// (0x0003c9e8) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x00043b18) main_touch_calib_pane_g_ParamLimits

0x852f,	// (0x0003c9f4) main_touch_calib_pane_t1_ParamLimits

0x8548,	// (0x0003ca0d) main_touch_calib_pane_t2_ParamLimits

0x8561,	// (0x0003ca26) main_touch_calib_pane_t3_ParamLimits

0x8577,	// (0x0003ca3c) main_touch_calib_pane_t4_ParamLimits

0x858d,	// (0x0003ca52) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x00043b21) main_touch_calib_pane_t_ParamLimits

0xd9ce,	// (0x00041e93) list_single_fp_cale_pane_g3_ParamLimits

0xd9ce,	// (0x00041e93) list_single_fp_cale_pane_g3

0x1b35,	// (0x00035ffa) bg_button_pane_cp012_ParamLimits

0x1b35,	// (0x00035ffa) bg_vkb2_func_pane_cp03_ParamLimits

0xa3ba,	// (0x0003e87f) cell_vitu2_function_top_pane_g1_ParamLimits

0x1b35,	// (0x00035ffa) bg_vkb2_func_pane_cp04_ParamLimits

0xb203,	// (0x0003f6c8) main_ncimui_button_group_pane_ParamLimits

0xb203,	// (0x0003f6c8) main_ncimui_button_group_pane

0xb269,	// (0x0003f72e) main_ncimui_pane_t3_ParamLimits

0xb269,	// (0x0003f72e) main_ncimui_pane_t3

0x05a7,	// (0x00034a6c) phacti_button_group_pane

0x0861,	// (0x00034d26) aid_size_list_single_double_ParamLimits

0xbbb1,	// (0x00040076) popup_ezdial_listscroll_window_ParamLimits

0x086d,	// (0x00034d32) popup_number_entry_window_cp01_ParamLimits

0xbc52,	// (0x00040117) phacti_button_pane_ParamLimits

0xbc52,	// (0x00040117) phacti_button_pane

0x1547,	// (0x00035a0c) bg_button_pane_cp14

0x097d,	// (0x00034e42) phacti_button_pane_t1

0xbc63,	// (0x00040128) main_touch_calib_button_pane_ParamLimits

0xbc63,	// (0x00040128) main_touch_calib_button_pane

0x1ce4,	// (0x000361a9) bg_button_pane_cp18_ParamLimits

0x1ce4,	// (0x000361a9) bg_button_pane_cp18

0x098b,	// (0x00034e50) main_touch_calib_button_pane_t1_ParamLimits

0x098b,	// (0x00034e50) main_touch_calib_button_pane_t1

0x09a1,	// (0x00034e66) main_touch_calib_button_pane_t2_ParamLimits

0x09a1,	// (0x00034e66) main_touch_calib_button_pane_t2

0x0001,

0xfcad,	// (0x00044172) main_touch_calib_button_pane_t_ParamLimits

0xfcad,	// (0x00044172) main_touch_calib_button_pane_t

0x1547,	// (0x00035a0c) cell_ncimui_button_pane

0x1547,	// (0x00035a0c) bg_button_pane_cp032

0x09bf,	// (0x00034e84) cell_ncimui_button_pane_t1

0x94fa,	// (0x0003d9bf) image3_infobar_pane_ParamLimits

0x94fa,	// (0x0003d9bf) image3_infobar_pane

0xb5ab,	// (0x0003fa70) fs_bigclock_status_pane_ParamLimits

0xb5ab,	// (0x0003fa70) fs_bigclock_status_pane

0xb5b8,	// (0x0003fa7d) main_fs_bigclock_clock_pane_ParamLimits

0xb5b8,	// (0x0003fa7d) main_fs_bigclock_clock_pane

0xb5cc,	// (0x0003fa91) main_fs_bigclock_indi_pane_ParamLimits

0xb5cc,	// (0x0003fa91) main_fs_bigclock_indi_pane

0xb5f4,	// (0x0003fab9) main_fs_bigclock_swipe_pane_ParamLimits

0xb5f4,	// (0x0003fab9) main_fs_bigclock_swipe_pane

0x1547,	// (0x00035a0c) main_fs_clock_dumped_data

0xeca5,	// (0x0004316a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeca5,	// (0x0004316a) list_single_fs_bigclock_indicator_pane_g1

0xecc0,	// (0x00043185) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xecc0,	// (0x00043185) list_single_fs_bigclock_indicator_pane_g2

0xecda,	// (0x0004319f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xecda,	// (0x0004319f) list_single_fs_bigclock_indicator_pane_g3

0xecf4,	// (0x000431b9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xecf4,	// (0x000431b9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x00044026) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x00044026) list_single_fs_bigclock_indicator_pane_g

0xed1f,	// (0x000431e4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xed1f,	// (0x000431e4) list_single_fs_bigclock_indicator_pane_t1

0xed47,	// (0x0004320c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xed47,	// (0x0004320c) list_single_fs_bigclock_indicator_pane_t2

0xed6f,	// (0x00043234) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xed6f,	// (0x00043234) list_single_fs_bigclock_indicator_pane_t3

0xed97,	// (0x0004325c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xed97,	// (0x0004325c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x00044031) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x00044031) list_single_fs_bigclock_indicator_pane_t

0x09cd,	// (0x00034e92) image3_infobar_fav_pane_ParamLimits

0x09cd,	// (0x00034e92) image3_infobar_fav_pane

0x09dd,	// (0x00034ea2) image3_infobar_loc_pane_ParamLimits

0x09dd,	// (0x00034ea2) image3_infobar_loc_pane

0x09f1,	// (0x00034eb6) image3_infobar_time_pane_ParamLimits

0x09f1,	// (0x00034eb6) image3_infobar_time_pane

0x1c86,	// (0x0003614b) image3_infobar_time_pane_g1

0x0a01,	// (0x00034ec6) image3_infobar_time_pane_t1

0x1c86,	// (0x0003614b) image3_infobar_loc_pane_g1

0x0a0f,	// (0x00034ed4) image3_infobar_loc_pane_g2

0x0001,

0xfcb2,	// (0x00044177) image3_infobar_loc_pane_g

0x0a17,	// (0x00034edc) image3_infobar_loc_pane_t1

0x1c86,	// (0x0003614b) image3_infobar_fav_pane_g1

0x0a25,	// (0x00034eea) image3_infobar_fav_pane_g2

0x0001,

0xfcb7,	// (0x0004417c) image3_infobar_fav_pane_g

0x0a2d,	// (0x00034ef2) fs_bigclock_status_battery_pane

0x0a36,	// (0x00034efb) fs_bigclock_status_signal_pane

0x0a3f,	// (0x00034f04) fs_bigclock_status_title_pane

0x0a48,	// (0x00034f0d) fs_bigclock_status_signal_pane_g1

0x0a51,	// (0x00034f16) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcbc,	// (0x00044181) fs_bigclock_status_signal_pane_g

0x0a59,	// (0x00034f1e) fs_bigclock_status_battery_pane_g1

0x0a62,	// (0x00034f27) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcc1,	// (0x00044186) fs_bigclock_status_battery_pane_g

0x0a6a,	// (0x00034f2f) fs_bigclock_status_title_pane_t1

0xbc73,	// (0x00040138) main_fs_bigclock_clock_pane_g1

0xbc73,	// (0x00040138) main_fs_bigclock_clock_pane_g2

0xbc73,	// (0x00040138) main_fs_bigclock_clock_pane_g3

0xbc73,	// (0x00040138) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcc6,	// (0x0004418b) main_fs_bigclock_clock_pane_g

0xbc7f,	// (0x00040144) main_fs_bigclock_clock_pane_t1

0xbc93,	// (0x00040158) main_fs_bigclock_clock_pane_t2

0x0001,

0xfccf,	// (0x00044194) main_fs_bigclock_clock_pane_t

0x0a78,	// (0x00034f3d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0a78,	// (0x00034f3d) list_single_fs_bigclock_indicator_pane

0x0a89,	// (0x00034f4e) list_single_fs_bigclock_pane_ParamLimits

0x0a89,	// (0x00034f4e) list_single_fs_bigclock_pane

0x0aaf,	// (0x00034f74) main_fs_bigclock_indicator_pane_t1

0x0abe,	// (0x00034f83) list_single_fs_bigclock_pane_g1

0x0ac6,	// (0x00034f8b) list_single_fs_bigclock_pane_t1

0x1c86,	// (0x0003614b) main_fs_bigclock_swipe_pane_g1

0x0b09,	// (0x00034fce) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfce0,	// (0x000441a5) main_fs_bigclock_swipe_pane_g

0x0b11,	// (0x00034fd6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0b11,	// (0x00034fd6) main_fs_bigclock_swipe_pane_t1

0x7383,	// (0x0003b848) call_type_pane_ParamLimits

0x1547,	// (0x00035a0c) main_btmg_pane

0x516e,	// (0x00039633) list_single_cale_mrui_row_pane_g2_ParamLimits

0x516e,	// (0x00039633) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc53,	// (0x00044118) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc53,	// (0x00044118) list_single_cale_mrui_row_pane_g

0x529e,	// (0x00039763) list_recal_vselct_arw_lo_pane

0x08d1,	// (0x00034d96) list_recal_vselct_arw_up_pane

0x52a6,	// (0x0003976b) list_recal_vselct_pane

0xbcea,	// (0x000401af) btmg_button_pane

0xbcf6,	// (0x000401bb) main_btmg_pane_g1

0x1547,	// (0x00035a0c) bg_button_pane_cp044

0x0b2e,	// (0x00034ff3) btmg_button_pane_t1

0x3b52,	// (0x00038017) aid_listscroll_gen

0x1b35,	// (0x00035ffa) main_cntbar_detail_pane

0x04a8,	// (0x0003496d) list_cmail_folder_pane

0xeff9,	// (0x000434be) sp_fs_scroll_pane_cp03_ParamLimits

0x5335,	// (0x000397fa) list_single_fs_dyc_pane_cp01_ParamLimits

0x5335,	// (0x000397fa) list_single_fs_dyc_pane_cp01

0x0b3c,	// (0x00035001) aid_size_cmail_indent

0x5361,	// (0x00039826) list_single_dyc_row_pane_cp01

0xbd1e,	// (0x000401e3) cntbar_detail_list_pane_ParamLimits

0xbd1e,	// (0x000401e3) cntbar_detail_list_pane

0xbd58,	// (0x0004021d) main_cntbar_detail_cont_pane_ParamLimits

0xbd58,	// (0x0004021d) main_cntbar_detail_cont_pane

0x7377,	// (0x0003b83c) scroll_pane_cp032_ParamLimits

0x7377,	// (0x0003b83c) scroll_pane_cp032

0xbd64,	// (0x00040229) cntbar_detail_list_event_pane_ParamLimits

0xbd64,	// (0x00040229) cntbar_detail_list_event_pane

0xbd2a,	// (0x000401ef) cntbar_detail_list_shct_pane

0x216c,	// (0x00036631) aid_list_gen

0x0b4e,	// (0x00035013) aid_scroll

0x0b57,	// (0x0003501c) aid_size_touch_scroll_bar

0x536a,	// (0x0003982f) aid_list_double

0x5373,	// (0x00039838) aid_list_single

0x0b60,	// (0x00035025) aid_list_single_lg

0x537c,	// (0x00039841) aid_list_z_g_a_sm

0x5384,	// (0x00039849) aid_list_z_g_d

0x538c,	// (0x00039851) aid_txt_z_prm

0x539a,	// (0x0003985f) aid_txt_z_prm_cp01

0x53a8,	// (0x0003986d) aid_txt_z_sec

0xbd78,	// (0x0004023d) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbd78,	// (0x0004023d) main_cntbar_detail_cont_pane_g1

0xbd85,	// (0x0004024a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbd85,	// (0x0004024a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfce5,	// (0x000441aa) main_cntbar_detail_cont_pane_g_ParamLimits

0xfce5,	// (0x000441aa) main_cntbar_detail_cont_pane_g

0x0b87,	// (0x0003504c) main_cntbar_detail_cont_pane_t1

0x0b95,	// (0x0003505a) main_cntbar_detail_cont_pane_t2

0x0ba3,	// (0x00035068) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcea,	// (0x000441af) main_cntbar_detail_cont_pane_t

0xbd91,	// (0x00040256) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbd91,	// (0x00040256) cell_cntbar_detail_list_shct_pane

0x0bb1,	// (0x00035076) cntbar_detail_list_shct_pane_g1

0x0bba,	// (0x0003507f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcf1,	// (0x000441b6) cntbar_detail_list_shct_pane_g

0xbda5,	// (0x0004026a) cntbar_detail_list_event_pane_g1_ParamLimits

0xbda5,	// (0x0004026a) cntbar_detail_list_event_pane_g1

0xbdb1,	// (0x00040276) cntbar_detail_list_event_pane_g2_ParamLimits

0xbdb1,	// (0x00040276) cntbar_detail_list_event_pane_g2

0x0005,

0xfcf6,	// (0x000441bb) cntbar_detail_list_event_pane_g_ParamLimits

0xfcf6,	// (0x000441bb) cntbar_detail_list_event_pane_g

0xbe1d,	// (0x000402e2) cntbar_detail_list_event_pane_t1_ParamLimits

0xbe1d,	// (0x000402e2) cntbar_detail_list_event_pane_t1

0xbe32,	// (0x000402f7) cntbar_detail_list_event_pane_t2_ParamLimits

0xbe32,	// (0x000402f7) cntbar_detail_list_event_pane_t2

0x0002,

0xfd03,	// (0x000441c8) cntbar_detail_list_event_pane_t_ParamLimits

0xfd03,	// (0x000441c8) cntbar_detail_list_event_pane_t

0x1c86,	// (0x0003614b) cell_cntbar_detail_list_shct_pane_g1

0x28a8,	// (0x00036d6d) navi_pane_mv_g3

0x1b35,	// (0x00035ffa) main_cntbar_detail_pane_ParamLimits

0x1547,	// (0x00035a0c) main_notif_wgt_pane

0x91c5,	// (0x0003d68a) aid_tch_main_mp4_pane_g4

0x948c,	// (0x0003d951) popup_slider_window_cp02

0x5294,	// (0x00039759) list_recal_day_event_pane

0xbcfe,	// (0x000401c3) cntbar_detail_btn_pane_ParamLimits

0xbcfe,	// (0x000401c3) cntbar_detail_btn_pane

0xbd0e,	// (0x000401d3) cntbar_detail_btn_pane_cp01_ParamLimits

0xbd0e,	// (0x000401d3) cntbar_detail_btn_pane_cp01

0xbd2a,	// (0x000401ef) cntbar_detail_list_shct_pane_ParamLimits

0xbd36,	// (0x000401fb) cntbar_detail_pane_g1_ParamLimits

0xbd36,	// (0x000401fb) cntbar_detail_pane_g1

0xbd42,	// (0x00040207) cntbar_detail_pane_t1_ParamLimits

0xbd42,	// (0x00040207) cntbar_detail_pane_t1

0xbdbd,	// (0x00040282) cntbar_detail_list_event_pane_g3_ParamLimits

0xbdbd,	// (0x00040282) cntbar_detail_list_event_pane_g3

0xbdd5,	// (0x0004029a) cntbar_detail_list_event_pane_g4_ParamLimits

0xbdd5,	// (0x0004029a) cntbar_detail_list_event_pane_g4

0xbded,	// (0x000402b2) cntbar_detail_list_event_pane_g5_ParamLimits

0xbded,	// (0x000402b2) cntbar_detail_list_event_pane_g5

0xbe05,	// (0x000402ca) cntbar_detail_list_event_pane_g6_ParamLimits

0xbe05,	// (0x000402ca) cntbar_detail_list_event_pane_g6

0xbe47,	// (0x0004030c) cntbar_detail_list_event_pane_t3_ParamLimits

0xbe47,	// (0x0004030c) cntbar_detail_list_event_pane_t3

0xbe59,	// (0x0004031e) popup_notif_wgt_window_ParamLimits

0xbe59,	// (0x0004031e) popup_notif_wgt_window

0xbe69,	// (0x0004032e) popup_submenu_window_cp01_ParamLimits

0xbe69,	// (0x0004032e) popup_submenu_window_cp01

0x1efc,	// (0x000363c1) bg_popup_window_pane_cp10

0x0bc3,	// (0x00035088) listscroll_notif_wgt_pane

0x0bd5,	// (0x0003509a) list_notif_wgt_window

0x0bde,	// (0x000350a3) scroll_pane_cp033

0xbe7b,	// (0x00040340) list_notif_wgt_row_pane_ParamLimits

0xbe7b,	// (0x00040340) list_notif_wgt_row_pane

0x0be7,	// (0x000350ac) aid_size_list_notif_wgt_del

0x0bf4,	// (0x000350b9) list_notif_wgt_row_pane_g1

0x0c00,	// (0x000350c5) list_notif_wgt_row_pane_g2

0x0c0f,	// (0x000350d4) list_notif_wgt_row_pane_g3

0x0002,

0xfd0a,	// (0x000441cf) list_notif_wgt_row_pane_g

0x0c1c,	// (0x000350e1) list_notif_wgt_row_pane_t1

0x0c32,	// (0x000350f7) list_notif_wgt_row_pane_t2

0x0c44,	// (0x00035109) list_notif_wgt_row_pane_t3

0x0002,

0xfd11,	// (0x000441d6) list_notif_wgt_row_pane_t

0xe134,	// (0x000425f9) list_recal_day_event_pane_g1

0x0c56,	// (0x0003511b) list_recal_day_event_pane_t1

0x1547,	// (0x00035a0c) bg_button_pane_cp045

0x0c65,	// (0x0003512a) cntbar_detail_btn_pane_t1

0x29c9,	// (0x00036e8e) main_callh_pane_ParamLimits

0x29c9,	// (0x00036e8e) main_callh_pane

0x1547,	// (0x00035a0c) main_coverflow0_pane

0x1547,	// (0x00035a0c) main_wgtman_pane

0xb60c,	// (0x0003fad1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb60c,	// (0x0003fad1) main_fs_bigclock_unlock_btn_pane

0xb91b,	// (0x0003fde0) bg_button_pane_cp16

0xb92b,	// (0x0003fdf0) cell_tport_appsw_pane_g3

0xbe8d,	// (0x00040352) cf0_flow_pane_ParamLimits

0xbe8d,	// (0x00040352) cf0_flow_pane

0x0c73,	// (0x00035138) listscroll_cf0_pane

0x0c7e,	// (0x00035143) main_cf0_pane_g1

0xbe9c,	// (0x00040361) main_cf0_pane_t1_ParamLimits

0xbe9c,	// (0x00040361) main_cf0_pane_t1

0xbeb0,	// (0x00040375) main_cf0_pane_t2_ParamLimits

0xbeb0,	// (0x00040375) main_cf0_pane_t2

0x0001,

0xfd1d,	// (0x000441e2) main_cf0_pane_t_ParamLimits

0xfd1d,	// (0x000441e2) main_cf0_pane_t

0x0c90,	// (0x00035155) scroll_pane_cp11

0xbec4,	// (0x00040389) cf0_flow_pane_g1

0xbecc,	// (0x00040391) cf0_flow_pane_g2

0x0001,

0xfd22,	// (0x000441e7) cf0_flow_pane_g

0xbed4,	// (0x00040399) cf0_flow_pane_t1

0x1547,	// (0x00035a0c) main_call6_pane

0x1547,	// (0x00035a0c) main_calllock_pane

0xbee2,	// (0x000403a7) call6_btn_grp_pane_ParamLimits

0xbee2,	// (0x000403a7) call6_btn_grp_pane

0xbef1,	// (0x000403b6) call6_pane_g1_ParamLimits

0xbef1,	// (0x000403b6) call6_pane_g1

0xbf01,	// (0x000403c6) popup_call6_1st_window_ParamLimits

0xbf01,	// (0x000403c6) popup_call6_1st_window

0xbf0f,	// (0x000403d4) popup_call6_2nd_window_ParamLimits

0xbf0f,	// (0x000403d4) popup_call6_2nd_window

0xbf1d,	// (0x000403e2) cell_call6_btn_pane_ParamLimits

0xbf1d,	// (0x000403e2) cell_call6_btn_pane

0x1efc,	// (0x000363c1) bg_popup_call2_in_pane_cp03

0x0c9b,	// (0x00035160) popup_call6_1st_window_g1

0x0ca3,	// (0x00035168) popup_call6_1st_window_g2

0x0cab,	// (0x00035170) popup_call6_1st_window_g3

0x0002,

0xfd27,	// (0x000441ec) popup_call6_1st_window_g

0x0cb3,	// (0x00035178) popup_call6_1st_window_t1

0x0cc2,	// (0x00035187) popup_call6_1st_window_t2

0x0cd0,	// (0x00035195) popup_call6_1st_window_t3

0x0002,

0xfd2e,	// (0x000441f3) popup_call6_1st_window_t

0x1efc,	// (0x000363c1) bg_popup_call2_in_pane_cp04

0x0cde,	// (0x000351a3) popup_call6_2nd_window_g1

0x0ce6,	// (0x000351ab) popup_call6_2nd_window_g2

0x0cee,	// (0x000351b3) popup_call6_2nd_window_g3

0x0002,

0xfd35,	// (0x000441fa) popup_call6_2nd_window_g

0x0cf6,	// (0x000351bb) popup_call6_2nd_window_t1

0x1547,	// (0x00035a0c) bg_button_pane_cp15

0x0d50,	// (0x00035215) cell_call6_btn_pane_g1

0x13b6,	// (0x0003587b) cell_call6_btn_pane_t1

0xbf2c,	// (0x000403f1) listscroll_wgtman_pane_ParamLimits

0xbf2c,	// (0x000403f1) listscroll_wgtman_pane

0xbf48,	// (0x0004040d) wgtman_btn_pane_ParamLimits

0xbf48,	// (0x0004040d) wgtman_btn_pane

0x26af,	// (0x00036b74) aid_scroll_copy1

0x0d1d,	// (0x000351e2) list_wgtman_pane

0xbf7d,	// (0x00040442) wgtman_btn_pane_g1_ParamLimits

0xbf7d,	// (0x00040442) wgtman_btn_pane_g1

0xbfa5,	// (0x0004046a) wgtman_btn_pane_t1_ParamLimits

0xbfa5,	// (0x0004046a) wgtman_btn_pane_t1

0x0d27,	// (0x000351ec) wgtman_btn_pane_t2_ParamLimits

0x0d27,	// (0x000351ec) wgtman_btn_pane_t2

0x0001,

0xfd3c,	// (0x00044201) wgtman_btn_pane_t_ParamLimits

0xfd3c,	// (0x00044201) wgtman_btn_pane_t

0xbfdc,	// (0x000404a1) listrow_wgtman_pane_ParamLimits

0xbfdc,	// (0x000404a1) listrow_wgtman_pane

0xbff7,	// (0x000404bc) listrow_wgtman_pane_g1

0xc004,	// (0x000404c9) listrow_wgtman_pane_g2

0x0001,

0xfd41,	// (0x00044206) listrow_wgtman_pane_g

0x53b6,	// (0x0003987b) listrow_wgtman_pane_t1

0x53ce,	// (0x00039893) listrow_wgtman_pane_t2

0x0001,

0xfd46,	// (0x0004420b) listrow_wgtman_pane_t

0x53f4,	// (0x000398b9) wait_bar_pane_cp09

0x0d3e,	// (0x00035203) main_calllock_btn_pane

0x0d48,	// (0x0003520d) main_calllock_pane_g1

0x1547,	// (0x00035a0c) bg_button_pane_cp17

0x0d50,	// (0x00035215) main_calllock_btn_pane_g1

0x0d59,	// (0x0003521e) main_calllock_btn_pane_t1

0x1547,	// (0x00035a0c) main_dialer3_pane

0x1547,	// (0x00035a0c) main_fmrd2_pane

0x1c86,	// (0x0003614b) main_fs_bigclock_unlock_btn_pane_g1

0xc02a,	// (0x000404ef) main_fs_bigclock_unlock_btn_pane_t1

0xc038,	// (0x000404fd) area_fmrd2_info_pane_ParamLimits

0xc038,	// (0x000404fd) area_fmrd2_info_pane

0xc046,	// (0x0004050b) area_fmrd2_visual_pane_ParamLimits

0xc046,	// (0x0004050b) area_fmrd2_visual_pane

0xc054,	// (0x00040519) fmrd2_indi_pane_ParamLimits

0xc054,	// (0x00040519) fmrd2_indi_pane

0xc061,	// (0x00040526) area_fmrd2_visual_pane_g1

0xc069,	// (0x0004052e) area_fmrd2_visual_pane_t1

0xc079,	// (0x0004053e) area_fmrd2_visual_pane_t2

0xc089,	// (0x0004054e) area_fmrd2_visual_pane_t3

0x0002,

0xfd50,	// (0x00044215) area_fmrd2_visual_pane_t

0xc099,	// (0x0004055e) area_fmrd2_info_pane_g1

0xc0a1,	// (0x00040566) area_fmrd2_info_pane_t1

0xc0b1,	// (0x00040576) area_fmrd2_info_pane_t2

0xc0c1,	// (0x00040586) area_fmrd2_info_pane_t3

0xc0d1,	// (0x00040596) area_fmrd2_info_pane_t4

0x0003,

0xfd57,	// (0x0004421c) area_fmrd2_info_pane_t

0xc0df,	// (0x000405a4) fmrd2_indi_pane_t1

0xc0ef,	// (0x000405b4) fmrd2_indi_pane_t2

0xc0ff,	// (0x000405c4) fmrd2_indi_pane_t3

0x0002,

0xfd60,	// (0x00044225) fmrd2_indi_pane_t

0xed03,	// (0x000431c8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xed03,	// (0x000431c8) list_single_fs_bigclock_indicator_pane_g5

0xedb4,	// (0x00043279) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xedb4,	// (0x00043279) list_single_fs_bigclock_indicator_pane_t5

0xdda2,	// (0x00042267) aid_cell_bcale_month_pane_ParamLimits

0xdda2,	// (0x00042267) aid_cell_bcale_month_pane

0xdda2,	// (0x00042267) bcale_month_pane_ParamLimits

0xdda2,	// (0x00042267) bcale_month_pane

0xd925,	// (0x00041dea) bcale_preview_pane_ParamLimits

0xd925,	// (0x00041dea) bcale_preview_pane

0x0ac6,	// (0x00034f8b) list_single_fs_bigclock_pane_t1_ParamLimits

0x0ae5,	// (0x00034faa) list_single_fs_bigclock_pane_t2_ParamLimits

0x0ae5,	// (0x00034faa) list_single_fs_bigclock_pane_t2

0x0001,

0xfcdb,	// (0x000441a0) list_single_fs_bigclock_pane_t_ParamLimits

0xfcdb,	// (0x000441a0) list_single_fs_bigclock_pane_t

0xc022,	// (0x000404e7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd4b,	// (0x00044210) main_fs_bigclock_unlock_btn_pane_g

0xc10d,	// (0x000405d2) aid_dia3_key_size_ParamLimits

0xc10d,	// (0x000405d2) aid_dia3_key_size

0xc119,	// (0x000405de) aid_dia3_listrow_size_ParamLimits

0xc119,	// (0x000405de) aid_dia3_listrow_size

0xc129,	// (0x000405ee) dia3_keypad_fun_pane_ParamLimits

0xc129,	// (0x000405ee) dia3_keypad_fun_pane

0xc13b,	// (0x00040600) dia3_keypad_num_pane_ParamLimits

0xc13b,	// (0x00040600) dia3_keypad_num_pane

0xc14d,	// (0x00040612) dia3_listscroll_pane_ParamLimits

0xc14d,	// (0x00040612) dia3_listscroll_pane

0xc15b,	// (0x00040620) dia3_numentry_pane_ParamLimits

0xc15b,	// (0x00040620) dia3_numentry_pane

0x0d68,	// (0x0003522d) dia3_list_pane

0x0d73,	// (0x00035238) scroll_pane_cp12

0x1547,	// (0x00035a0c) bg_dia3_numentry_pane

0xc169,	// (0x0004062e) dia3_numentry_pane_t1

0xc178,	// (0x0004063d) cell_dia3_key_num_pane

0xc180,	// (0x00040645) cell_dia3_key0_fun_pane_ParamLimits

0xc180,	// (0x00040645) cell_dia3_key0_fun_pane

0xc18d,	// (0x00040652) cell_dia3_key1_fun_pane_ParamLimits

0xc18d,	// (0x00040652) cell_dia3_key1_fun_pane

0xc19a,	// (0x0004065f) dia3_listrow_pane

0xea56,	// (0x00042f1b) bg_dia3_numentry_pane_g1

0x1547,	// (0x00035a0c) bg_button_pane_cp21

0x0d7e,	// (0x00035243) cell_dia3_key_num_pane_t1

0x0d8c,	// (0x00035251) cell_dia3_key_num_pane_t2

0x0d9b,	// (0x00035260) cell_dia3_key_num_pane_t3

0x0daa,	// (0x0003526f) cell_dia3_key_num_pane_t4

0x0003,

0xfd67,	// (0x0004422c) cell_dia3_key_num_pane_t

0x1547,	// (0x00035a0c) bg_button_pane_cp19

0xc1a7,	// (0x0004066c) cell_dia3_key0_fun_pane_g1

0x1547,	// (0x00035a0c) bg_button_pane_cp20

0xc1af,	// (0x00040674) cell_dia3_key1_fun_pane_g1

0xf005,	// (0x000434ca) area_left_week_number_pane

0xf005,	// (0x000434ca) area_top_day_name_pane

0xf005,	// (0x000434ca) frame_month_view_pane

0xf005,	// (0x000434ca) grid_month_view_pane

0xf005,	// (0x000434ca) cell_top_day_name_pane_ParamLimits

0xf005,	// (0x000434ca) cell_top_day_name_pane

0xf005,	// (0x000434ca) cell_area_left_week_number_pane_ParamLimits

0xf005,	// (0x000434ca) cell_area_left_week_number_pane

0xf005,	// (0x000434ca) cell_month_view_pane_ParamLimits

0xf005,	// (0x000434ca) cell_month_view_pane

0xf011,	// (0x000434d6) frm_month_g1

0xf011,	// (0x000434d6) frm_month_g2

0xf011,	// (0x000434d6) frm_month_g3

0xf011,	// (0x000434d6) frm_month_g4

0xf011,	// (0x000434d6) frm_month_g5

0xf011,	// (0x000434d6) frm_month_g6

0xf011,	// (0x000434d6) frm_month_g7

0xf011,	// (0x000434d6) frm_month_g8

0xf011,	// (0x000434d6) frm_month_g9

0xf011,	// (0x000434d6) frm_month_g10

0xf011,	// (0x000434d6) frm_month_g11

0xf011,	// (0x000434d6) frm_month_g12

0xf011,	// (0x000434d6) frm_month_g13

0xf011,	// (0x000434d6) frm_month_g14

0xf011,	// (0x000434d6) frm_month_g15

0xf011,	// (0x000434d6) frm_month_g16

0x000f,

0xfd70,	// (0x00044235) frm_month_g

0x0db9,	// (0x0003527e) cell_top_day_name_pane_t1

0xf011,	// (0x000434d6) cell_area_left_week_number_pane_g1

0x0db9,	// (0x0003527e) cell_area_left_week_number_pane_t1

0xf011,	// (0x000434d6) cell_month_view_pane_g1

0x0db9,	// (0x0003527e) cell_month_view_pane_t1

0x1547,	// (0x00035a0c) main_fps_pane

0xef81,	// (0x00043446) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xef81,	// (0x00043446) cmail_ddmenu_btn02_pane_cp1

0xef9d,	// (0x00043462) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xef9d,	// (0x00043462) cmail_ddmenu_btn02_pane_cp2

0xbbf2,	// (0x000400b7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbbf2,	// (0x000400b7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc8e,	// (0x00044153) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc8e,	// (0x00044153) cmail_ddmenu_btn02_pane_g

0xbc10,	// (0x000400d5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbc10,	// (0x000400d5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc93,	// (0x00044158) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc93,	// (0x00044158) cmail_ddmenu_btn02_pane_t

0xc1b7,	// (0x0004067c) fps_text_pane_ParamLimits

0xc1b7,	// (0x0004067c) fps_text_pane

0xc1c4,	// (0x00040689) main_fps_pane_g1_ParamLimits

0xc1c4,	// (0x00040689) main_fps_pane_g1

0xc1d2,	// (0x00040697) wait_bar_pane_cp010_ParamLimits

0xc1d2,	// (0x00040697) wait_bar_pane_cp010

0xc1de,	// (0x000406a3) fps_text_pane_t1_ParamLimits

0xc1de,	// (0x000406a3) fps_text_pane_t1

0x9876,	// (0x0003dd3b) cam4_image_uncrop_pane_g1

0x987f,	// (0x0003dd44) cam4_image_uncrop_pane_g2

0x9888,	// (0x0003dd4d) cam4_image_uncrop_pane_g3

0x9891,	// (0x0003dd56) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x00043caa) cam4_image_uncrop_pane_g

0xc19a,	// (0x0004065f) dia3_listrow_pane_ParamLimits

0x1547,	// (0x00035a0c) main_phob2_pane

0xb8fd,	// (0x0003fdc2) cell_tport_appsw_pane_cp02_ParamLimits

0xb8fd,	// (0x0003fdc2) cell_tport_appsw_pane_cp02

0xb90c,	// (0x0003fdd1) cell_tport_appsw_pane_cp03_ParamLimits

0xb90c,	// (0x0003fdd1) cell_tport_appsw_pane_cp03

0x1547,	// (0x00035a0c) phob2_contact_card_pane

0x1547,	// (0x00035a0c) phob2_listscroll_pane

0x0dcb,	// (0x00035290) phob2_list_pane

0x0882,	// (0x00034d47) scroll_pane_cp034

0xc1f7,	// (0x000406bc) phob2_cc_data_pane_ParamLimits

0xc1f7,	// (0x000406bc) phob2_cc_data_pane

0xc211,	// (0x000406d6) phob2_cc_listscroll_pane_ParamLimits

0xc211,	// (0x000406d6) phob2_cc_listscroll_pane

0xbfdc,	// (0x000404a1) list_double_large_graphic_phob2_pane_ParamLimits

0xbfdc,	// (0x000404a1) list_double_large_graphic_phob2_pane

0xc22b,	// (0x000406f0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc22b,	// (0x000406f0) list_double_large_graphic_phob2_pane_g1

0x5406,	// (0x000398cb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5406,	// (0x000398cb) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd91,	// (0x00044256) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd91,	// (0x00044256) list_double_large_graphic_phob2_pane_g

0x542c,	// (0x000398f1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x542c,	// (0x000398f1) list_double_large_graphic_phob2_pane_t1

0x5441,	// (0x00039906) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5441,	// (0x00039906) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd9a,	// (0x0004425f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd9a,	// (0x0004425f) list_double_large_graphic_phob2_pane_t

0x1c3a,	// (0x000360ff) list_highlight_pane_cp024

0x0dd3,	// (0x00035298) phob2_cc_button_pane

0xc238,	// (0x000406fd) phob2_cc_data_pane_g1_ParamLimits

0xc238,	// (0x000406fd) phob2_cc_data_pane_g1

0xc247,	// (0x0004070c) phob2_cc_data_pane_g2_ParamLimits

0xc247,	// (0x0004070c) phob2_cc_data_pane_g2

0x0001,

0xfd9f,	// (0x00044264) phob2_cc_data_pane_g_ParamLimits

0xfd9f,	// (0x00044264) phob2_cc_data_pane_g

0xc256,	// (0x0004071b) phob2_cc_data_pane_t1_ParamLimits

0xc256,	// (0x0004071b) phob2_cc_data_pane_t1

0xc26b,	// (0x00040730) phob2_cc_data_pane_t2_ParamLimits

0xc26b,	// (0x00040730) phob2_cc_data_pane_t2

0xc280,	// (0x00040745) phob2_cc_data_pane_t3_ParamLimits

0xc280,	// (0x00040745) phob2_cc_data_pane_t3

0x0002,

0xfda4,	// (0x00044269) phob2_cc_data_pane_t_ParamLimits

0xfda4,	// (0x00044269) phob2_cc_data_pane_t

0x0ddb,	// (0x000352a0) phob2_cc_list_pane_ParamLimits

0x0ddb,	// (0x000352a0) phob2_cc_list_pane

0xe979,	// (0x00042e3e) scroll_pane_cp035_ParamLimits

0xe979,	// (0x00042e3e) scroll_pane_cp035

0x1b35,	// (0x00035ffa) bg_button_pane_cp033

0x0de7,	// (0x000352ac) phob2_cc_button_pane_g1

0x0df3,	// (0x000352b8) phob2_cc_button_pane_t1

0x0e08,	// (0x000352cd) phob2_cc_button_pane_t2

0x0001,

0xfdab,	// (0x00044270) phob2_cc_button_pane_t

0xc295,	// (0x0004075a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc295,	// (0x0004075a) list_double_large_graphic_phob2_cc_pane

0xc303,	// (0x000407c8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc303,	// (0x000407c8) list_double_large_graphic_phob2_cc_pane_g1

0x5456,	// (0x0003991b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5456,	// (0x0003991b) list_double_large_graphic_phob2_cc_pane_g2

0x5462,	// (0x00039927) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5462,	// (0x00039927) list_double_large_graphic_phob2_cc_pane_g3

0x546e,	// (0x00039933) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x546e,	// (0x00039933) list_double_large_graphic_phob2_cc_pane_g4

0x547a,	// (0x0003993f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x547a,	// (0x0003993f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdb0,	// (0x00044275) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdb0,	// (0x00044275) list_double_large_graphic_phob2_cc_pane_g

0x5486,	// (0x0003994b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5486,	// (0x0003994b) list_double_large_graphic_phob2_cc_pane_t1

0x54af,	// (0x00039974) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x54af,	// (0x00039974) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdbb,	// (0x00044280) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdbb,	// (0x00044280) list_double_large_graphic_phob2_cc_pane_t

0x0e1a,	// (0x000352df) list_highlight_pane_cp025_ParamLimits

0x0e1a,	// (0x000352df) list_highlight_pane_cp025

0x1b35,	// (0x00035ffa) bg_button_pane_cp033_ParamLimits

0x0de7,	// (0x000352ac) phob2_cc_button_pane_g1_ParamLimits

0x0df3,	// (0x000352b8) phob2_cc_button_pane_t1_ParamLimits

0x0e08,	// (0x000352cd) phob2_cc_button_pane_t2_ParamLimits

0xfdab,	// (0x00044270) phob2_cc_button_pane_t_ParamLimits

0x572d,	// (0x00039bf2) popup_wgtman_window

0xdffd,	// (0x000424c2) scroll_pane_cp038

0xbf65,	// (0x0004042a) wgtman_btn_pane_cp_01_ParamLimits

0xbf65,	// (0x0004042a) wgtman_btn_pane_cp_01

0x0e28,	// (0x000352ed) wgtman_content_pane

0x0e31,	// (0x000352f6) wgtman_heading_pane

0x1547,	// (0x00035a0c) bg_heading_pane_cp02

0x0e3a,	// (0x000352ff) wgtman_heading_pane_g1

0x0e42,	// (0x00035307) wgtman_heading_pane_t1

0x0e50,	// (0x00035315) scroll_pane_cp036

0x0e58,	// (0x0003531d) wgtman_list_pane

0x0e60,	// (0x00035325) wgtman_list_pane_t1_ParamLimits

0x0e60,	// (0x00035325) wgtman_list_pane_t1

0x97d5,	// (0x0003dc9a) cam4_grid_pane

0xa56b,	// (0x0003ea30) bg_button_pane_cp015_ParamLimits

0xa580,	// (0x0003ea45) bg_button_pane_cp016_ParamLimits

0xa58c,	// (0x0003ea51) bg_button_pane_cp017_ParamLimits

0xa5e4,	// (0x0003eaa9) popup_vitu2_query_window_g3_ParamLimits

0xa5e4,	// (0x0003eaa9) popup_vitu2_query_window_g3

0xa685,	// (0x0003eb4a) popup_vitu2_query_window_t6_ParamLimits

0xa685,	// (0x0003eb4a) popup_vitu2_query_window_t6

0xa6b0,	// (0x0003eb75) popup_vitu2_query_window_t7_ParamLimits

0xa6b0,	// (0x0003eb75) popup_vitu2_query_window_t7

0x014d,	// (0x00034612) cam4_grid_pane_g1

0x0156,	// (0x0003461b) cam4_grid_pane_g2

0x0e7a,	// (0x0003533f) cam4_grid_pane_g3

0x0e83,	// (0x00035348) cam4_grid_pane_g4

0x0003,

0xfdc0,	// (0x00044285) cam4_grid_pane_g

0x613a,	// (0x0003a5ff) aid_placing_vt_slider_lsc_ParamLimits

0x6486,	// (0x0003a94b) vidtel_button_pane_ParamLimits

0x6486,	// (0x0003a94b) vidtel_button_pane

0x1547,	// (0x00035a0c) bg_button_pane_cp034

0x0e8e,	// (0x00035353) vidtel_button_pane_g1

0x0e96,	// (0x0003535b) vidtel_button_pane_t1

0xe124,	// (0x000425e9) aid_size_vtel_slider_touch

0xe979,	// (0x00042e3e) scroll_pane_cp039

0xb3c4,	// (0x0003f889) ncim_query_button_pane_cp01_ParamLimits

0xb3e3,	// (0x0003f8a8) ncimui_query_pane_g1_ParamLimits

0x1b35,	// (0x00035ffa) input_focus_pane_cp012_ParamLimits

0xea94,	// (0x00042f59) ncim_query_entry_pane_t1_ParamLimits

0xe979,	// (0x00042e3e) scroll_pane_cp039_ParamLimits

0x2793,	// (0x00036c58) navi_pane_bcale_mc_g1

0x279b,	// (0x00036c60) navi_pane_bcale_mc_t1

0xefd1,	// (0x00043496) main_sp_fs_email_pane_g1

0xefdd,	// (0x000434a2) main_sp_fs_email_pane_g2

0x0001,

0xfbd1,	// (0x00044096) main_sp_fs_email_pane_g

0x0711,	// (0x00034bd6) list_single_cale_mrui_row_pane_g3_ParamLimits

0x0711,	// (0x00034bd6) list_single_cale_mrui_row_pane_g3

0x52f3,	// (0x000397b8) list_single_recal_day_pane_g5_event_pane

0x5309,	// (0x000397ce) list_single_recal_day_pane_g7

0x0eac,	// (0x00035371) list_recal_day_event_pane_cp01

0x0eb5,	// (0x0003537a) list_recal_vselct_arw_lo_pane_cp01

0x0ebd,	// (0x00035382) list_recal_vselct_arw_up_pane_cp01

0x0ec5,	// (0x0003538a) list_recal_vselct_pane_cp01

0xe134,	// (0x000425f9) list_recal_day_event_pane_cp01_g1

0x54d8,	// (0x0003999d) list_recal_day_event_pane_cp01_t1

0x5311,	// (0x000397d6) list_single_recal_day_pane_t1_ParamLimits

0x5323,	// (0x000397e8) list_single_recal_day_pane_t2_ParamLimits

0xfca3,	// (0x00044168) list_single_recal_day_pane_t_ParamLimits

0x1bcd,	// (0x00036092) bg_notes_pane_ParamLimits

0x1cc2,	// (0x00036187) list_notes_pane_ParamLimits

0x586d,	// (0x00039d32) scroll_pane_cp06_ParamLimits

0x1ce4,	// (0x000361a9) main_notes_pane_ParamLimits

0x1b35,	// (0x00035ffa) main_welc_pane

0xc342,	// (0x00040807) main_welc_body_pane_ParamLimits

0xc342,	// (0x00040807) main_welc_body_pane

0xc35c,	// (0x00040821) main_welc_opti_pane_ParamLimits

0xc35c,	// (0x00040821) main_welc_opti_pane

0xc3b1,	// (0x00040876) main_welc_pane_t1_ParamLimits

0xc3b1,	// (0x00040876) main_welc_pane_t1

0xc551,	// (0x00040a16) main_welc_body_row_pane_ParamLimits

0xc551,	// (0x00040a16) main_welc_body_row_pane

0x1c3a,	// (0x000360ff) main_welc_opti_row_pane_ParamLimits

0x1c3a,	// (0x000360ff) main_welc_opti_row_pane

0x0ee5,	// (0x000353aa) main_welc_opti_row_pane_g1

0xc576,	// (0x00040a3b) main_welc_opti_row_pane_t1

0x0eed,	// (0x000353b2) main_welc_body_row_pane_t1

0x0bcd,	// (0x00035092) popup_notif_wgt_heading_pane

0x0be7,	// (0x000350ac) aid_size_list_notif_wgt_del_ParamLimits

0x0bf4,	// (0x000350b9) list_notif_wgt_row_pane_g1_ParamLimits

0x0c00,	// (0x000350c5) list_notif_wgt_row_pane_g2_ParamLimits

0x0c0f,	// (0x000350d4) list_notif_wgt_row_pane_g3_ParamLimits

0xfd0a,	// (0x000441cf) list_notif_wgt_row_pane_g_ParamLimits

0x0c1c,	// (0x000350e1) list_notif_wgt_row_pane_t1_ParamLimits

0x0c32,	// (0x000350f7) list_notif_wgt_row_pane_t2_ParamLimits

0x0c44,	// (0x00035109) list_notif_wgt_row_pane_t3_ParamLimits

0xfd11,	// (0x000441d6) list_notif_wgt_row_pane_t_ParamLimits

0xbff7,	// (0x000404bc) listrow_wgtman_pane_g1_ParamLimits

0xc004,	// (0x000404c9) listrow_wgtman_pane_g2_ParamLimits

0xfd41,	// (0x00044206) listrow_wgtman_pane_g_ParamLimits

0x53b6,	// (0x0003987b) listrow_wgtman_pane_t1_ParamLimits

0x53ce,	// (0x00039893) listrow_wgtman_pane_t2_ParamLimits

0xfd46,	// (0x0004420b) listrow_wgtman_pane_t_ParamLimits

0x53f4,	// (0x000398b9) wait_bar_pane_cp09_ParamLimits

0x1547,	// (0x00035a0c) bg_popup_heading_pane_cp02

0x0efc,	// (0x000353c1) popup_notif_wgt_heading_pane_g1

0x0f04,	// (0x000353c9) popup_notif_wgt_heading_pane_t1

0x1547,	// (0x00035a0c) main_vids_pane

0x1547,	// (0x00035a0c) vids_listscroll_pane

0xc585,	// (0x00040a4a) scroll_pane_cp040

0x1547,	// (0x00035a0c) vids_list_pane

0xc590,	// (0x00040a55) vids_list_double_pane_ParamLimits

0xc590,	// (0x00040a55) vids_list_double_pane

0xc5a7,	// (0x00040a6c) vids_list_double_pane_g1

0xc5b0,	// (0x00040a75) vids_list_double_pane_t1

0xc5c0,	// (0x00040a85) vids_list_double_pane_t2

0x0001,

0xfddf,	// (0x000442a4) vids_list_double_pane_t

0x1b35,	// (0x00035ffa) main_ncimui_pane_ParamLimits

0xb21b,	// (0x0003f6e0) main_ncimui_pane_g1_ParamLimits

0xb227,	// (0x0003f6ec) main_ncimui_pane_g2_ParamLimits

0xb227,	// (0x0003f6ec) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x00043f9c) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x00043f9c) main_ncimui_pane_g

0xc375,	// (0x0004083a) main_welc_pane_g1_ParamLimits

0xc375,	// (0x0004083a) main_welc_pane_g1

0xc381,	// (0x00040846) main_welc_pane_g2_ParamLimits

0xc381,	// (0x00040846) main_welc_pane_g2

0x0003,

0xfdc9,	// (0x0004428e) main_welc_pane_g_ParamLimits

0xfdc9,	// (0x0004428e) main_welc_pane_g

0x1bcd,	// (0x00036092) listscroll_mce_pane_ParamLimits

0x28e8,	// (0x00036dad) wait_bar_pane_cp10

0x3b5a,	// (0x0003801f) main_cale_day_pane_ParamLimits

0x3b5a,	// (0x0003801f) main_cale_week_pane_ParamLimits

0x1bcd,	// (0x00036092) main_messa_pane_ParamLimits

0x8cab,	// (0x0003d170) main_clock2_btn_pane_ParamLimits

0x8cab,	// (0x0003d170) main_clock2_btn_pane

0xda65,	// (0x00041f2a) main_clock2_btn_pane_cp01_ParamLimits

0xda65,	// (0x00041f2a) main_clock2_btn_pane_cp01

0x06ab,	// (0x00034b70) list_cale_mrui_pane_ParamLimits

0x0c88,	// (0x0003514d) main_cf0_pane_g2

0x0001,

0xfd18,	// (0x000441dd) main_cf0_pane_g

0xf005,	// (0x000434ca) area_left_week_number_pane_ParamLimits

0xf005,	// (0x000434ca) area_top_day_name_pane_ParamLimits

0xf005,	// (0x000434ca) frame_month_view_pane_ParamLimits

0xf005,	// (0x000434ca) grid_month_view_pane_ParamLimits

0xf011,	// (0x000434d6) frm_month_g1_ParamLimits

0xf011,	// (0x000434d6) frm_month_g2_ParamLimits

0xf011,	// (0x000434d6) frm_month_g3_ParamLimits

0xf011,	// (0x000434d6) frm_month_g4_ParamLimits

0xf011,	// (0x000434d6) frm_month_g5_ParamLimits

0xf011,	// (0x000434d6) frm_month_g6_ParamLimits

0xf011,	// (0x000434d6) frm_month_g7_ParamLimits

0xf011,	// (0x000434d6) frm_month_g8_ParamLimits

0xf011,	// (0x000434d6) frm_month_g9_ParamLimits

0xf011,	// (0x000434d6) frm_month_g10_ParamLimits

0xf011,	// (0x000434d6) frm_month_g11_ParamLimits

0xf011,	// (0x000434d6) frm_month_g12_ParamLimits

0xf011,	// (0x000434d6) frm_month_g13_ParamLimits

0xf011,	// (0x000434d6) frm_month_g14_ParamLimits

0xf011,	// (0x000434d6) frm_month_g15_ParamLimits

0xf011,	// (0x000434d6) frm_month_g16_ParamLimits

0xfd70,	// (0x00044235) frm_month_g_ParamLimits

0x0db9,	// (0x0003527e) cell_top_day_name_pane_t1_ParamLimits

0xf011,	// (0x000434d6) cell_area_left_week_number_pane_g1_ParamLimits

0x0db9,	// (0x0003527e) cell_area_left_week_number_pane_t1_ParamLimits

0xf011,	// (0x000434d6) cell_month_view_pane_g1_ParamLimits

0x0db9,	// (0x0003527e) cell_month_view_pane_t1_ParamLimits

0x1bc5,	// (0x0003608a) main_clock2_btn_pane_g1

0x0f12,	// (0x000353d7) main_clock2_btn_pane_t1

0x1b35,	// (0x00035ffa) listscroll_cmail_pane_ParamLimits

0xefd1,	// (0x00043496) main_sp_fs_email_pane_g1_ParamLimits

0xefdd,	// (0x000434a2) main_sp_fs_email_pane_g2_ParamLimits

0xfbd1,	// (0x00044096) main_sp_fs_email_pane_g_ParamLimits

0x08a0,	// (0x00034d65) list_recal_day_pane_ParamLimits

0x08b1,	// (0x00034d76) mian_recal_day_pane_t1

0x4eaa,	// (0x0003936f) list_single_dyc_row_text_pane_t4_ParamLimits

0x4eaa,	// (0x0003936f) list_single_dyc_row_text_pane_t4

0x4ee1,	// (0x000393a6) list_single_dyc_row_text_pane_t5_ParamLimits

0x4ee1,	// (0x000393a6) list_single_dyc_row_text_pane_t5

0x4f57,	// (0x0003941c) list_single_dyc_row_text_pane_t6_ParamLimits

0x4f57,	// (0x0003941c) list_single_dyc_row_text_pane_t6

0x2280,	// (0x00036745) aid_mgn_list_cale_time_pane

0x1b35,	// (0x00035ffa) main_gallery2_pane_ParamLimits

0xda7b,	// (0x00041f40) main_clock2_pane_cp01_t1

0xda8b,	// (0x00041f50) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x00043b8b) main_clock2_pane_cp01_t

0x5c6f,	// (0x0003a134) cale_week_scroll_pane_g16_ParamLimits

0x5c6f,	// (0x0003a134) cale_week_scroll_pane_g16

0x1efc,	// (0x000363c1) vorec_slider_pane

0x0e96,	// (0x0003535b) vidtel_button_pane_t1_ParamLimits

0xbc73,	// (0x00040138) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbc73,	// (0x00040138) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbc73,	// (0x00040138) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbc73,	// (0x00040138) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcc6,	// (0x0004418b) main_fs_bigclock_clock_pane_g_ParamLimits

0xbc7f,	// (0x00040144) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbc93,	// (0x00040158) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfccf,	// (0x00044194) main_fs_bigclock_clock_pane_t_ParamLimits

0x85ec,	// (0x0003cab1) main_mup3_lyrics_pane_ParamLimits

0x85ec,	// (0x0003cab1) main_mup3_lyrics_pane

0xc5f3,	// (0x00040ab8) main_mup3_lyrics_pane_t1_ParamLimits

0xc5f3,	// (0x00040ab8) main_mup3_lyrics_pane_t1

0x91af,	// (0x0003d674) aid_main_mp4_pane_t1_area

0x91b9,	// (0x0003d67e) aid_main_mp4_pane_t2_area

0x92be,	// (0x0003d783) main_mp4_pane_g7_ParamLimits

0x92be,	// (0x0003d783) main_mp4_pane_g7

0x92ca,	// (0x0003d78f) main_mp4_pane_g8_ParamLimits

0x92ca,	// (0x0003d78f) main_mp4_pane_g8

0x9695,	// (0x0003db5a) aid_call6_pane_g1_size

0xc2d7,	// (0x0004079c) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc2d7,	// (0x0004079c) list_double_large_graphic_phob2_other_pane

0x1e0c,	// (0x000362d1) list_double_large_graphic_phob2_other_pane_g1

0x1547,	// (0x00035a0c) list_highlight_pane_cp026

0x1b35,	// (0x00035ffa) main_welc_pane_ParamLimits

0xb7fa,	// (0x0003fcbf) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb7fa,	// (0x0003fcbf) main_sp_fs_ctrlbar_pane_g3

0xb812,	// (0x0003fcd7) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb812,	// (0x0003fcd7) main_sp_fs_ctrlbar_pane_g4

0xb844,	// (0x0003fd09) toolbar2_fixed_button_pane_cp01

0xb84f,	// (0x0003fd14) toolbar2_fixed_button_pane_cp02

0xb85a,	// (0x0003fd1f) toolbar2_fixed_button_pane_cp03

0xc326,	// (0x000407eb) list_welc_entry_pane_ParamLimits

0xc326,	// (0x000407eb) list_welc_entry_pane

0xc38f,	// (0x00040854) main_welc_pane_g3_ParamLimits

0xc38f,	// (0x00040854) main_welc_pane_g3

0xc3cb,	// (0x00040890) main_welc_pane_t2_ParamLimits

0xc3cb,	// (0x00040890) main_welc_pane_t2

0xc3df,	// (0x000408a4) main_welc_pane_t3_ParamLimits

0xc3df,	// (0x000408a4) main_welc_pane_t3

0x0005,

0xfdd2,	// (0x00044297) main_welc_pane_t_ParamLimits

0xfdd2,	// (0x00044297) main_welc_pane_t

0xc4e5,	// (0x000409aa) welc_button_pane_ParamLimits

0xc4e5,	// (0x000409aa) welc_button_pane

0xc543,	// (0x00040a08) welc_service_logo_pane_ParamLimits

0xc543,	// (0x00040a08) welc_service_logo_pane

0xc625,	// (0x00040aea) list_single_welc_entry_pane_ParamLimits

0xc625,	// (0x00040aea) list_single_welc_entry_pane

0xc636,	// (0x00040afb) list_single_welc_entry_pane_g1

0xc63e,	// (0x00040b03) list_single_welc_entry_pane_t1

0xc64c,	// (0x00040b11) list_single_welc_entry_pane_t2

0x0001,

0xfde4,	// (0x000442a9) list_single_welc_entry_pane_t

0x1547,	// (0x00035a0c) bg_button_pane_cp035

0xc65a,	// (0x00040b1f) welc_button_pane_t1

0x0f2e,	// (0x000353f3) welc_service_logo_pane_g1

0x0f37,	// (0x000353fc) welc_service_logo_pane_g2

0x0001,

0xfde9,	// (0x000442ae) welc_service_logo_pane_g

0x1547,	// (0x00035a0c) main_int_radio_pane

0x1d5b,	// (0x00036220) list_single_fs_dyc_pane_g1

0x5412,	// (0x000398d7) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x5412,	// (0x000398d7) list_double_large_graphic_phob2_pane_g3

0x541e,	// (0x000398e3) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x541e,	// (0x000398e3) list_double_large_graphic_phob2_pane_g4

0xc668,	// (0x00040b2d) main_int_radio1_pane_ParamLimits

0xc668,	// (0x00040b2d) main_int_radio1_pane

0x0f40,	// (0x00035405) find_pane_cp02

0xc67a,	// (0x00040b3f) input_focus_pane_cp12_ParamLimits

0xc67a,	// (0x00040b3f) input_focus_pane_cp12

0xc686,	// (0x00040b4b) input_focus_pane_cp13_ParamLimits

0xc686,	// (0x00040b4b) input_focus_pane_cp13

0xc69e,	// (0x00040b63) input_focus_pane_cp14_ParamLimits

0xc69e,	// (0x00040b63) input_focus_pane_cp14

0x0f49,	// (0x0003540e) int_radio1_listscroll_pane

0xc6b6,	// (0x00040b7b) main_int_radio1_pane_g1_ParamLimits

0xc6b6,	// (0x00040b7b) main_int_radio1_pane_g1

0xc6c6,	// (0x00040b8b) main_int_radio1_pane_t1_ParamLimits

0xc6c6,	// (0x00040b8b) main_int_radio1_pane_t1

0xc6da,	// (0x00040b9f) main_int_radio1_pane_t2_ParamLimits

0xc6da,	// (0x00040b9f) main_int_radio1_pane_t2

0xc6ee,	// (0x00040bb3) main_int_radio1_pane_t3_ParamLimits

0xc6ee,	// (0x00040bb3) main_int_radio1_pane_t3

0xc702,	// (0x00040bc7) main_int_radio1_pane_t4_ParamLimits

0xc702,	// (0x00040bc7) main_int_radio1_pane_t4

0x0f53,	// (0x00035418) main_int_radio1_pane_t5_ParamLimits

0x0f53,	// (0x00035418) main_int_radio1_pane_t5

0xc719,	// (0x00040bde) main_int_radio1_pane_t6_ParamLimits

0xc719,	// (0x00040bde) main_int_radio1_pane_t6

0xc72b,	// (0x00040bf0) main_int_radio1_pane_t7_ParamLimits

0xc72b,	// (0x00040bf0) main_int_radio1_pane_t7

0xc73d,	// (0x00040c02) main_int_radio1_pane_t8_ParamLimits

0xc73d,	// (0x00040c02) main_int_radio1_pane_t8

0xc751,	// (0x00040c16) main_int_radio1_pane_t9_ParamLimits

0xc751,	// (0x00040c16) main_int_radio1_pane_t9

0xc763,	// (0x00040c28) main_int_radio1_pane_t10_ParamLimits

0xc763,	// (0x00040c28) main_int_radio1_pane_t10

0xc794,	// (0x00040c59) main_int_radio1_pane_t11_ParamLimits

0xc794,	// (0x00040c59) main_int_radio1_pane_t11

0xc7c5,	// (0x00040c8a) main_int_radio1_pane_t12_ParamLimits

0xc7c5,	// (0x00040c8a) main_int_radio1_pane_t12

0x000b,

0xfdee,	// (0x000442b3) main_int_radio1_pane_t_ParamLimits

0xfdee,	// (0x000442b3) main_int_radio1_pane_t

0x0f65,	// (0x0003542a) int_radio_list_pane

0x0882,	// (0x00034d47) scroll_pane_cp037

0x0f6d,	// (0x00035432) list_double_large_graphic_int_radio_pane_ParamLimits

0x0f6d,	// (0x00035432) list_double_large_graphic_int_radio_pane

0x0f85,	// (0x0003544a) list_double_large_graphic_int_radio_pane_g1

0x54e6,	// (0x000399ab) list_double_large_graphic_int_radio_pane_t1

0x54f4,	// (0x000399b9) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe07,	// (0x000442cc) list_double_large_graphic_int_radio_pane_t

0x1547,	// (0x00035a0c) list_highlight_pane_cp027

0x0edd,	// (0x000353a2) main_button_pane_4

0xc39b,	// (0x00040860) main_welc_pane_g4_ParamLimits

0xc39b,	// (0x00040860) main_welc_pane_g4

0xc3f1,	// (0x000408b6) main_welc_pane_t4_ParamLimits

0xc3f1,	// (0x000408b6) main_welc_pane_t4

0xc405,	// (0x000408ca) main_welc_pane_t5_ParamLimits

0xc405,	// (0x000408ca) main_welc_pane_t5

0xc43d,	// (0x00040902) main_welc_pane_t6_ParamLimits

0xc43d,	// (0x00040902) main_welc_pane_t6

0xc4f3,	// (0x000409b8) welc_button_pane_2_ParamLimits

0xc4f3,	// (0x000409b8) welc_button_pane_2

0xc50b,	// (0x000409d0) welc_button_pane_3_ParamLimits

0xc50b,	// (0x000409d0) welc_button_pane_3

0x0edd,	// (0x000353a2) welc_button_pane_4

0xc525,	// (0x000409ea) welc_button_pane_5_ParamLimits

0xc525,	// (0x000409ea) welc_button_pane_5

0x5556,	// (0x00039a1b) main_popup_welc_pane

0x0fc2,	// (0x00035487) main_welc_sk_g3

0x0fcc,	// (0x00035491) main_welc_sk_g4

0x0fd6,	// (0x0003549b) main_welc_sk_t3

0x0fe6,	// (0x000354ab) main_welc_sk_t4

0x0ff6,	// (0x000354bb) popup_welc_pane_t4

0x1004,	// (0x000354c9) popup_welc_pane_t5

0x1012,	// (0x000354d7) popup_welc_pane_t6

0x1547,	// (0x00035a0c) main_acti_pane

0x1547,	// (0x00035a0c) main_sso_pane

0xc7dc,	// (0x00040ca1) sso_body_pane_ParamLimits

0xc7dc,	// (0x00040ca1) sso_body_pane

0xc7f6,	// (0x00040cbb) sso_logo_pane_ParamLimits

0xc7f6,	// (0x00040cbb) sso_logo_pane

0xc827,	// (0x00040cec) sso_sk_pane_ParamLimits

0xc827,	// (0x00040cec) sso_sk_pane

0x1050,	// (0x00035515) main_sso_logo_pane_g1

0xc834,	// (0x00040cf9) sso_sk_pane_t1_ParamLimits

0xc834,	// (0x00040cf9) sso_sk_pane_t1

0xc848,	// (0x00040d0d) sso_sk_pane_t2_ParamLimits

0xc848,	// (0x00040d0d) sso_sk_pane_t2

0x0001,

0xfe0c,	// (0x000442d1) sso_sk_pane_t_ParamLimits

0xfe0c,	// (0x000442d1) sso_sk_pane_t

0x1059,	// (0x0003551e) aid_sso_gap

0x1062,	// (0x00035527) aid_sso_txt1

0x106c,	// (0x00035531) aid_sso_txt2

0x1076,	// (0x0003553b) aid_sso_txt3

0x0002,

0xfe11,	// (0x000442d6) aid_sso_txt

0x1080,	// (0x00035545) aid_sso_widget

0xc8a5,	// (0x00040d6a) sso_btn_pane_ParamLimits

0xc8a5,	// (0x00040d6a) sso_btn_pane

0xc92b,	// (0x00040df0) sso_option_pane_ParamLimits

0xc92b,	// (0x00040df0) sso_option_pane

0xc9d5,	// (0x00040e9a) sso_query_pane_ParamLimits

0xc9d5,	// (0x00040e9a) sso_query_pane

0xca25,	// (0x00040eea) sso_query_pane_cp01_ParamLimits

0xca25,	// (0x00040eea) sso_query_pane_cp01

0xca75,	// (0x00040f3a) sso_t_hdr_pane_ParamLimits

0xca75,	// (0x00040f3a) sso_t_hdr_pane

0xca99,	// (0x00040f5e) sso_t_nml_pane_ParamLimits

0xca99,	// (0x00040f5e) sso_t_nml_pane

0xcae9,	// (0x00040fae) sso_t_sub_pane

0xc803,	// (0x00040cc8) sso_popup_window_ParamLimits

0xc803,	// (0x00040cc8) sso_popup_window

0xc85a,	// (0x00040d1f) sso_apps_pane_ParamLimits

0xc85a,	// (0x00040d1f) sso_apps_pane

0xc87d,	// (0x00040d42) sso_body_pane_g1

0xc885,	// (0x00040d4a) sso_body_pane_t1

0xc895,	// (0x00040d5a) sso_body_pane_t2

0x0001,

0xfe18,	// (0x000442dd) sso_body_pane_t

0xc8eb,	// (0x00040db0) sso_btn_pane_cp01_ParamLimits

0xc8eb,	// (0x00040db0) sso_btn_pane_cp01

0xc9a7,	// (0x00040e6c) sso_prog_pane_ParamLimits

0xc9a7,	// (0x00040e6c) sso_prog_pane

0xcb0e,	// (0x00040fd3) sso_t_hdr_pane_t1_ParamLimits

0xcb0e,	// (0x00040fd3) sso_t_hdr_pane_t1

0x108a,	// (0x0003554f) input_focus_pane_cp10_ParamLimits

0x108a,	// (0x0003554f) input_focus_pane_cp10

0x109e,	// (0x00035563) sso_query_pane_t1_ParamLimits

0x109e,	// (0x00035563) sso_query_pane_t1

0x10b1,	// (0x00035576) sso_query_pane_t2_ParamLimits

0x10b1,	// (0x00035576) sso_query_pane_t2

0x10ca,	// (0x0003558f) sso_query_pane_t3_ParamLimits

0x10ca,	// (0x0003558f) sso_query_pane_t3

0x10f4,	// (0x000355b9) sso_query_pane_t4_ParamLimits

0x10f4,	// (0x000355b9) sso_query_pane_t4

0x0003,

0xfe1d,	// (0x000442e2) sso_query_pane_t_ParamLimits

0xfe1d,	// (0x000442e2) sso_query_pane_t

0x0b60,	// (0x00035025) bg_button_pane_cp22

0x0faa,	// (0x0003546f) sso_btn_pane_t1

0xcb27,	// (0x00040fec) sso_t_nml_pane_t1_ParamLimits

0xcb27,	// (0x00040fec) sso_t_nml_pane_t1

0x1118,	// (0x000355dd) sso_option_row_pane_ParamLimits

0x1118,	// (0x000355dd) sso_option_row_pane

0x1125,	// (0x000355ea) sso_t_sub_pane_t1_ParamLimits

0x1125,	// (0x000355ea) sso_t_sub_pane_t1

0x1b35,	// (0x00035ffa) bg_popup_window_pane_cp11_ParamLimits

0x1b35,	// (0x00035ffa) bg_popup_window_pane_cp11

0x1142,	// (0x00035607) popup_sk_window_cp01_ParamLimits

0x1142,	// (0x00035607) popup_sk_window_cp01

0x114f,	// (0x00035614) sso_popup_body_pane_ParamLimits

0x114f,	// (0x00035614) sso_popup_body_pane

0x115c,	// (0x00035621) scroll_pane_cp21_ParamLimits

0x115c,	// (0x00035621) scroll_pane_cp21

0x1169,	// (0x0003562e) sso_popup_body_t_pane_ParamLimits

0x1169,	// (0x0003562e) sso_popup_body_t_pane

0x1176,	// (0x0003563b) sso_popup_body_t_hdr_pane_ParamLimits

0x1176,	// (0x0003563b) sso_popup_body_t_hdr_pane

0xcb44,	// (0x00041009) sso_popup_body_t_nml_pane_ParamLimits

0xcb44,	// (0x00041009) sso_popup_body_t_nml_pane

0xcb62,	// (0x00041027) sso_popup_body_t_sub_pane_ParamLimits

0xcb62,	// (0x00041027) sso_popup_body_t_sub_pane

0x1188,	// (0x0003564d) sso_popup_body_t_hdr_pane_t1

0xcb85,	// (0x0004104a) sso_popup_body_t_nml_pane_t1_ParamLimits

0xcb85,	// (0x0004104a) sso_popup_body_t_nml_pane_t1

0x1198,	// (0x0003565d) sso_popup_body_t_sub_pane_t1_ParamLimits

0x1198,	// (0x0003565d) sso_popup_body_t_sub_pane_t1

0x1c86,	// (0x0003614b) sso_prog_pane_g1

0xcbc9,	// (0x0004108e) sso_apps_pane_comp1_ParamLimits

0xcbc9,	// (0x0004108e) sso_apps_pane_comp1

0x11bd,	// (0x00035682) sso_apps_pane_comp1_g1

0x11c5,	// (0x0003568a) sso_apps_pane_comp1_t1

0x11e1,	// (0x000356a6) sso_option_row_pane_g1

0x11f9,	// (0x000356be) sso_option_row_pane_t1

0x04b0,	// (0x00034975) list_cmail_pane_ParamLimits

0x1547,	// (0x00035a0c) main_call7_pane

0xc314,	// (0x000407d9) bg_welc_area_ParamLimits

0xc314,	// (0x000407d9) bg_welc_area

0xc473,	// (0x00040938) sso_t_hdr_pane_a_t1_ParamLimits

0xc473,	// (0x00040938) sso_t_hdr_pane_a_t1

0xc487,	// (0x0004094c) sso_t_nml_pane_a_t1_ParamLimits

0xc487,	// (0x0004094c) sso_t_nml_pane_a_t1

0xc4b1,	// (0x00040976) sso_t_sub_pane_a_t1_ParamLimits

0xc4b1,	// (0x00040976) sso_t_sub_pane_a_t1

0xc535,	// (0x000409fa) welc_button_pane_cp01_ParamLimits

0xc535,	// (0x000409fa) welc_button_pane_cp01

0x0faa,	// (0x0003546f) sso_btn_pane_t1_copy1

0x0fb9,	// (0x0003547e) welc_button_pane_2_comp1

0x1020,	// (0x000354e5) sso_t_hdr_pane_p_t1

0x1030,	// (0x000354f5) sso_t_nml_pane_p_t1

0x1040,	// (0x00035505) sso_t_sub_pane_p_t1

0x1547,	// (0x00035a0c) main_att_pane

0x1547,	// (0x00035a0c) main_vod_pane

0xcae9,	// (0x00040fae) sso_t_sub_pane_ParamLimits

0x11d3,	// (0x00035698) input_focus_pane_cp10_t1

0x11f9,	// (0x000356be) sso_option_row_pane_t1_ParamLimits

0xcbe3,	// (0x000410a8) main_att_body_pane_ParamLimits

0xcbe3,	// (0x000410a8) main_att_body_pane

0xcbf7,	// (0x000410bc) att_btn_emg_pane_ParamLimits

0xcbf7,	// (0x000410bc) att_btn_emg_pane

0xcc0f,	// (0x000410d4) att_btn_pane_ParamLimits

0xcc0f,	// (0x000410d4) att_btn_pane

0xcc75,	// (0x0004113a) att_btn_pane_cp01_ParamLimits

0xcc75,	// (0x0004113a) att_btn_pane_cp01

0xcca7,	// (0x0004116c) att_li_srv_pane_ParamLimits

0xcca7,	// (0x0004116c) att_li_srv_pane

0xccb9,	// (0x0004117e) att_opt_pane_ParamLimits

0xccb9,	// (0x0004117e) att_opt_pane

0xccfd,	// (0x000411c2) att_query_pane_ParamLimits

0xccfd,	// (0x000411c2) att_query_pane

0xcd6d,	// (0x00041232) att_query_pane_cp01_ParamLimits

0xcd6d,	// (0x00041232) att_query_pane_cp01

0xcdb1,	// (0x00041276) att_t_hdr_pane_ParamLimits

0xcdb1,	// (0x00041276) att_t_hdr_pane

0xce17,	// (0x000412dc) att_t_nml_pane_ParamLimits

0xce17,	// (0x000412dc) att_t_nml_pane

0xce7f,	// (0x00041344) att_t_nml_pane_cp01_ParamLimits

0xce7f,	// (0x00041344) att_t_nml_pane_cp01

0xcea3,	// (0x00041368) att_t_nmlb_pane_ParamLimits

0xcea3,	// (0x00041368) att_t_nmlb_pane

0xcf07,	// (0x000413cc) att_term_pane_ParamLimits

0xcf07,	// (0x000413cc) att_term_pane

0xcf49,	// (0x0004140e) main_att_body_pane_g1_ParamLimits

0xcf49,	// (0x0004140e) main_att_body_pane_g1

0x1215,	// (0x000356da) att_t_hdr_pane_t1_ParamLimits

0x1215,	// (0x000356da) att_t_hdr_pane_t1

0x122e,	// (0x000356f3) att_t_nml_pane_t1_ParamLimits

0x122e,	// (0x000356f3) att_t_nml_pane_t1

0x1253,	// (0x00035718) att_btn_pane_t1

0x0b60,	// (0x00035025) bg_button_pane_cp23

0xbc22,	// (0x000400e7) att_li_srv_row_pane_ParamLimits

0xbc22,	// (0x000400e7) att_li_srv_row_pane

0x1262,	// (0x00035727) att_t_nmlb_pane_t1_ParamLimits

0x1262,	// (0x00035727) att_t_nmlb_pane_t1

0x127e,	// (0x00035743) att_query_pane_t1

0x128d,	// (0x00035752) att_query_pane_t2

0x129c,	// (0x00035761) att_query_pane_t3

0x0002,

0xfe2b,	// (0x000442f0) att_query_pane_t

0x12ab,	// (0x00035770) input_focus_pane_cp11

0x12b4,	// (0x00035779) att_term_pane_t1_ParamLimits

0x12b4,	// (0x00035779) att_term_pane_t1

0x1547,	// (0x00035a0c) att_opt_row_pane

0x12d1,	// (0x00035796) att_opt_row_pane_g1

0x12d9,	// (0x0003579e) att_opt_row_pane_t1_ParamLimits

0x12d9,	// (0x0003579e) att_opt_row_pane_t1

0xcf73,	// (0x00041438) att_li_srv_row_pane_g1

0xcf7b,	// (0x00041440) att_li_srv_row_pane_t1_ParamLimits

0xcf7b,	// (0x00041440) att_li_srv_row_pane_t1

0xcf7b,	// (0x00041440) att_li_srv_row_pane_t2_ParamLimits

0xcf7b,	// (0x00041440) att_li_srv_row_pane_t2

0x0001,

0xfe32,	// (0x000442f7) att_li_srv_row_pane_t_ParamLimits

0xfe32,	// (0x000442f7) att_li_srv_row_pane_t

0x12f2,	// (0x000357b7) att_btn_close_pane_g1

0x1547,	// (0x00035a0c) bg_button_pane_cp24

0x801e,	// (0x0003c4e3) main_vod_body_pane_ParamLimits

0x801e,	// (0x0003c4e3) main_vod_body_pane

0xcf90,	// (0x00041455) main_vod_body_pane_g1_ParamLimits

0xcf90,	// (0x00041455) main_vod_body_pane_g1

0xcfc0,	// (0x00041485) scroll_pane_cp24_ParamLimits

0xcfc0,	// (0x00041485) scroll_pane_cp24

0xd008,	// (0x000414cd) vod_btn_pane_ParamLimits

0xd008,	// (0x000414cd) vod_btn_pane

0xd046,	// (0x0004150b) vod_det_pane_ParamLimits

0xd046,	// (0x0004150b) vod_det_pane

0xd070,	// (0x00041535) vod_logo_g1_ParamLimits

0xd070,	// (0x00041535) vod_logo_g1

0xd0aa,	// (0x0004156f) vod_opt_pane_ParamLimits

0xd0aa,	// (0x0004156f) vod_opt_pane

0xd0da,	// (0x0004159f) vod_opt_pane_cp01_ParamLimits

0xd0da,	// (0x0004159f) vod_opt_pane_cp01

0xd102,	// (0x000415c7) vod_query_pane_ParamLimits

0xd102,	// (0x000415c7) vod_query_pane

0xd12a,	// (0x000415ef) vod_query_pane_cp01_ParamLimits

0xd12a,	// (0x000415ef) vod_query_pane_cp01

0xd136,	// (0x000415fb) vod_t_nml_pane_ParamLimits

0xd136,	// (0x000415fb) vod_t_nml_pane

0xd1dc,	// (0x000416a1) vod_t_nml_pane_cp01_ParamLimits

0xd1dc,	// (0x000416a1) vod_t_nml_pane_cp01

0xd214,	// (0x000416d9) vod_t_sub_pane_ParamLimits

0xd214,	// (0x000416d9) vod_t_sub_pane

0xd240,	// (0x00041705) vod_t_sub_pane_cp01_ParamLimits

0xd240,	// (0x00041705) vod_t_sub_pane_cp01

0x12ab,	// (0x00035770) vod_query_field_pane

0x12fa,	// (0x000357bf) vod_query_pane_t1

0x1309,	// (0x000357ce) bg_button_pane_cp25

0x0faa,	// (0x0003546f) sso_btn_pane_t1_copy2

0xd268,	// (0x0004172d) vod_t_nml_pane_t1_ParamLimits

0xd268,	// (0x0004172d) vod_t_nml_pane_t1

0x1312,	// (0x000357d7) vod_opt_row_pane_ParamLimits

0x1312,	// (0x000357d7) vod_opt_row_pane

0x1324,	// (0x000357e9) vod_t_sub_pane_t1_ParamLimits

0x1324,	// (0x000357e9) vod_t_sub_pane_t1

0x133d,	// (0x00035802) vod_det_cell_pane_ParamLimits

0x133d,	// (0x00035802) vod_det_cell_pane

0x1547,	// (0x00035a0c) input_focus_pane_cp15

0x134e,	// (0x00035813) vod_query_field_pane_t1

0x135c,	// (0x00035821) vod_opt_row_pane_g1_ParamLimits

0x135c,	// (0x00035821) vod_opt_row_pane_g1

0x1368,	// (0x0003582d) vod_opt_row_pane_t1_ParamLimits

0x1368,	// (0x0003582d) vod_opt_row_pane_t1

0x1388,	// (0x0003584d) vod_det_cell_field_pane

0x1391,	// (0x00035856) vod_det_cell_pane_g1

0x1399,	// (0x0003585e) vod_det_cell_pane_t1

0x1547,	// (0x00035a0c) input_focus_pane_cp16

0x13a8,	// (0x0003586d) vod_det_cell_field_pane_t1

0xbee2,	// (0x000403a7) call7_btn_grp_pane_ParamLimits

0xbee2,	// (0x000403a7) call7_btn_grp_pane

0xd29f,	// (0x00041764) call7_bubble_pane_ParamLimits

0xd29f,	// (0x00041764) call7_bubble_pane

0xbf1d,	// (0x000403e2) cell_call7_btn_pane_ParamLimits

0xbf1d,	// (0x000403e2) cell_call7_btn_pane

0xd2ad,	// (0x00041772) call7_pane_g1_ParamLimits

0xd2ad,	// (0x00041772) call7_pane_g1

0xd2bc,	// (0x00041781) call7_windows_conf_pane_ParamLimits

0xd2bc,	// (0x00041781) call7_windows_conf_pane

0xd2d6,	// (0x0004179b) popup_call7_1st_window_ParamLimits

0xd2d6,	// (0x0004179b) popup_call7_1st_window

0xd2e4,	// (0x000417a9) popup_call7_2nd_window_ParamLimits

0xd2e4,	// (0x000417a9) popup_call7_2nd_window

0xd2f2,	// (0x000417b7) popup_call7_3rd_window_ParamLimits

0xd2f2,	// (0x000417b7) popup_call7_3rd_window

0x1547,	// (0x00035a0c) bg_button_pane_cp26

0x0d50,	// (0x00035215) cell_call7_btn_pane_g1

0x13b6,	// (0x0003587b) cell_call7_btn_pane_t1

0x1547,	// (0x00035a0c) bg_popup_window_pane_cp12

0x13c5,	// (0x0003588a) popup_call7_1st_window_g1

0x13cd,	// (0x00035892) popup_call7_1st_window_g2

0x13d5,	// (0x0003589a) popup_call7_1st_window_g3

0x0002,

0xfe37,	// (0x000442fc) popup_call7_1st_window_g

0x13dd,	// (0x000358a2) popup_call7_1st_window_t1

0x13ec,	// (0x000358b1) popup_call7_1st_window_t2

0x13fa,	// (0x000358bf) popup_call7_1st_window_t3

0x0002,

0xfe3e,	// (0x00044303) popup_call7_1st_window_t

0x1547,	// (0x00035a0c) bg_popup_window_pane_cp13

0x1408,	// (0x000358cd) popup_call7_2nd_window_g1

0x1410,	// (0x000358d5) popup_call7_2nd_window_g2

0x1418,	// (0x000358dd) popup_call7_2nd_window_g3

0x0002,

0xfe45,	// (0x0004430a) popup_call7_2nd_window_g

0x1420,	// (0x000358e5) popup_call7_2nd_window_t1

0x1547,	// (0x00035a0c) bg_popup_window_pane_cp14

0x142f,	// (0x000358f4) call7_list_conf_pane

0x1437,	// (0x000358fc) call7_list_conf_row_pane_ParamLimits

0x1437,	// (0x000358fc) call7_list_conf_row_pane

0x144a,	// (0x0003590f) call7_list_conf_row_pane_g1

0x1452,	// (0x00035917) call7_list_conf_row_pane_g2

0x0001,

0xfe4c,	// (0x00044311) call7_list_conf_row_pane_g

0x145a,	// (0x0003591f) call7_list_conf_row_pane_t1

0x1547,	// (0x00035a0c) list_highlight_pane_cp22

0xc979,	// (0x00040e3e) sso_option_pane_cp01_ParamLimits

0xc979,	// (0x00040e3e) sso_option_pane_cp01

0x1bcd,	// (0x00036092) msg_header_pane_ParamLimits

0x2a6c,	// (0x00036f31) bg_button_pane_cp01_ParamLimits

0x4b53,	// (0x00039018) input_focus_pane_cp07_ParamLimits

0xb88e,	// (0x0003fd53) popup_email_progress_window

0x1c86,	// (0x0003614b) popup_email_progress_window_g1

0x1468,	// (0x0003592d) popup_email_progress_window_g2

0x0001,

0xfe51,	// (0x00044316) popup_email_progress_window_g

0x1470,	// (0x00035935) popup_email_progress_window_t1

0x1547,	// (0x00035a0c) cmail_conv_pane

0x4faa,	// (0x0003946f) list_single_dyc_row_pane_g5_ParamLimits

0x4faa,	// (0x0003946f) list_single_dyc_row_pane_g5

0x4fb6,	// (0x0003947b) list_single_dyc_row_pane_g6_ParamLimits

0x4fb6,	// (0x0003947b) list_single_dyc_row_pane_g6

0x4fce,	// (0x00039493) list_single_dyc_row_pane_g7_ParamLimits

0x4fce,	// (0x00039493) list_single_dyc_row_pane_g7

0xc336,	// (0x000407fb) main_button_pane_5_ParamLimits

0xc336,	// (0x000407fb) main_button_pane_5

0xc7ea,	// (0x00040caf) sso_emg_call_btn_pane_ParamLimits

0xc7ea,	// (0x00040caf) sso_emg_call_btn_pane

0xcafe,	// (0x00040fc3) sso_t_sub_pane_cp01_ParamLimits

0xcafe,	// (0x00040fc3) sso_t_sub_pane_cp01

0x11e1,	// (0x000356a6) sso_option_row_pane_g1_ParamLimits

0x11ed,	// (0x000356b2) sso_option_row_pane_g2_ParamLimits

0x11ed,	// (0x000356b2) sso_option_row_pane_g2

0x0001,

0xfe26,	// (0x000442eb) sso_option_row_pane_g_ParamLimits

0xfe26,	// (0x000442eb) sso_option_row_pane_g

0xcc8d,	// (0x00041152) att_btn_pane_cp02_ParamLimits

0xcc8d,	// (0x00041152) att_btn_pane_cp02

0x147e,	// (0x00035943) cmail_conv_hdr_pane

0x1487,	// (0x0003594c) list_cmail_conv_pane

0x1491,	// (0x00035956) scroll_pane_cp31

0x1499,	// (0x0003595e) cmail_conv_hdr_pane_t1

0x14a7,	// (0x0003596c) cmail_conv_hdr_pane_t2

0x0001,

0xfe56,	// (0x0004431b) cmail_conv_hdr_pane_t

0x14b5,	// (0x0003597a) bubble_cmail_conv_pane_ParamLimits

0x14b5,	// (0x0003597a) bubble_cmail_conv_pane

0x14cd,	// (0x00035992) aid_size_colorization_pane

0x1efc,	// (0x000363c1) bg_bubble_cmail_conv_pane

0x14d5,	// (0x0003599a) body_bubble_cmail_conv_pane

0x14dd,	// (0x000359a2) bubble_cmail_conv_pane_g1

0x14e5,	// (0x000359aa) bubble_cmail_conv_pane_g2

0x14ed,	// (0x000359b2) bubble_cmail_conv_pane_g3

0x0002,

0xfe5b,	// (0x00044320) bubble_cmail_conv_pane_g

0x14f5,	// (0x000359ba) bubble_cmail_conv_pane_t1

0x1503,	// (0x000359c8) bg_bubble_cmail_conv_pane_g1

0x150c,	// (0x000359d1) bg_bubble_cmail_conv_pane_g2

0x1515,	// (0x000359da) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe62,	// (0x00044327) bg_bubble_cmail_conv_pane_g

0x151e,	// (0x000359e3) body_bubble_cmail_conv_pane_t1_ParamLimits

0x151e,	// (0x000359e3) body_bubble_cmail_conv_pane_t1

0x1535,	// (0x000359fa) body_bubble_cmail_conv_pane_t2_ParamLimits

0x1535,	// (0x000359fa) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe69,	// (0x0004432e) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe69,	// (0x0004432e) body_bubble_cmail_conv_pane_t

0x1c3a,	// (0x000360ff) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
