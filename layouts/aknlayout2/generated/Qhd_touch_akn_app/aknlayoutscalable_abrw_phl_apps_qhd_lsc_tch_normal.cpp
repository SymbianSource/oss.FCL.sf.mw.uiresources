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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00024e56 };

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
0x2335,	// (0x0002718b) Screen

0x2341,	// (0x00027197) application_window

0x23ab,	// (0x00027201) area_bottom_pane_ParamLimits

0x23ab,	// (0x00027201) area_bottom_pane

0x2408,	// (0x0002725e) area_top_pane_ParamLimits

0x2408,	// (0x0002725e) area_top_pane

0x2465,	// (0x000272bb) call_video_uplink_pane_ParamLimits

0x2465,	// (0x000272bb) call_video_uplink_pane

0x2496,	// (0x000272ec) main_pane_ParamLimits

0x2496,	// (0x000272ec) main_pane

0xbf4a,	// (0x00030da0) context_pane

0x68bb,	// (0x0002b711) navi_pane

0x68e3,	// (0x0002b739) popup_cale_events_window_ParamLimits

0x68e3,	// (0x0002b739) popup_cale_events_window

0xbf5d,	// (0x00030db3) popup_mup_playback_window

0x68fb,	// (0x0002b751) signal_pane

0x2fcd,	// (0x00027e23) main_browser_pane

0x541e,	// (0x0002a274) main_burst_pane

0x660d,	// (0x0002b463) main_calc_pane

0x541e,	// (0x0002a274) main_cale_day_pane

0x2fcd,	// (0x00027e23) main_cale_month_pane

0x541e,	// (0x0002a274) main_cale_week_pane

0x541e,	// (0x0002a274) main_call_pane

0x2aa0,	// (0x000278f6) main_call_poc_pane

0x541e,	// (0x0002a274) main_camera_pane

0x541e,	// (0x0002a274) main_chi_dic_pane

0x4f9d,	// (0x00029df3) main_clock_pane

0x2aa0,	// (0x000278f6) main_fmradio_pane

0x541e,	// (0x0002a274) main_graph_messa_pane

0x2aa0,	// (0x000278f6) main_help_pane

0x2fcd,	// (0x00027e23) main_im_pane

0x2cfb,	// (0x00027b51) main_image_pane_ParamLimits

0x2cfb,	// (0x00027b51) main_image_pane

0x2aa0,	// (0x000278f6) main_location2_pane

0x541e,	// (0x0002a274) main_location_pane

0x2aa0,	// (0x000278f6) main_messa_pane

0x2aa0,	// (0x000278f6) main_mp2_pane

0x541e,	// (0x0002a274) main_mp_pane

0x2aa0,	// (0x000278f6) main_msg_pane

0x2aa0,	// (0x000278f6) main_mup_eq_pane

0x2aa0,	// (0x000278f6) main_mup_pane

0x541e,	// (0x0002a274) main_notes_pane

0x2aa0,	// (0x000278f6) main_pec_pane

0x2aa0,	// (0x000278f6) main_phob_pane

0x2aa0,	// (0x000278f6) main_pinb_pane

0x2aa0,	// (0x000278f6) main_postcard_pane

0x2aa0,	// (0x000278f6) main_qdial_pane

0x541e,	// (0x0002a274) main_skin_pane

0x2aa0,	// (0x000278f6) main_smil2_pane

0x541e,	// (0x0002a274) main_smil_pane

0x541e,	// (0x0002a274) main_video_pane

0x541e,	// (0x0002a274) main_video_tele_pane

0x2cfb,	// (0x00027b51) main_viewer_pane_ParamLimits

0x2cfb,	// (0x00027b51) main_viewer_pane

0x541e,	// (0x0002a274) main_vorec_pane

0x6661,	// (0x0002b4b7) popup_blid_sat_info_window_ParamLimits

0x6661,	// (0x0002b4b7) popup_blid_sat_info_window

0x66b9,	// (0x0002b50f) popup_dyc_status_message_window_ParamLimits

0x66b9,	// (0x0002b50f) popup_dyc_status_message_window

0x66d3,	// (0x0002b529) popup_grid_large_graphic_window_ParamLimits

0x66d3,	// (0x0002b529) popup_grid_large_graphic_window

0x678f,	// (0x0002b5e5) popup_loc_request_window_ParamLimits

0x678f,	// (0x0002b5e5) popup_loc_request_window

0x6893,	// (0x0002b6e9) popup_wml_address_window_ParamLimits

0x6893,	// (0x0002b6e9) popup_wml_address_window

0x6447,	// (0x0002b29d) call_muted_g1

0x60fc,	// (0x0002af52) popup_call_audio_conf_window_ParamLimits

0x60fc,	// (0x0002af52) popup_call_audio_conf_window

0x645b,	// (0x0002b2b1) popup_call_audio_first_window_ParamLimits

0x645b,	// (0x0002b2b1) popup_call_audio_first_window

0x64d1,	// (0x0002b327) popup_call_audio_in_window_ParamLimits

0x64d1,	// (0x0002b327) popup_call_audio_in_window

0x650d,	// (0x0002b363) popup_call_audio_out_window_ParamLimits

0x650d,	// (0x0002b363) popup_call_audio_out_window

0x6547,	// (0x0002b39d) popup_call_audio_second_window_ParamLimits

0x6547,	// (0x0002b39d) popup_call_audio_second_window

0x659d,	// (0x0002b3f3) popup_call_audio_wait_window_ParamLimits

0x659d,	// (0x0002b3f3) popup_call_audio_wait_window

0x65d2,	// (0x0002b428) popup_number_entry_window_ParamLimits

0x65d2,	// (0x0002b428) popup_number_entry_window

0x2635,	// (0x0002748b) bg_popup_call_pane_cp05_ParamLimits

0x2635,	// (0x0002748b) bg_popup_call_pane_cp05

0x2655,	// (0x000274ab) popup_number_entry_window_t1

0x2668,	// (0x000274be) popup_number_entry_window_t2

0x267a,	// (0x000274d0) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00033f51) popup_number_entry_window_t

0x26c0,	// (0x00027516) text_title_cp2

0x26d3,	// (0x00027529) bg_popup_call_pane_cp_ParamLimits

0x26d3,	// (0x00027529) bg_popup_call_pane_cp

0x26e1,	// (0x00027537) call_thumbnail_pane

0x26e9,	// (0x0002753f) popup_call_audio_in_window_g1_ParamLimits

0x26e9,	// (0x0002753f) popup_call_audio_in_window_g1

0x26f5,	// (0x0002754b) popup_call_audio_in_window_g2_ParamLimits

0x26f5,	// (0x0002754b) popup_call_audio_in_window_g2

0x2701,	// (0x00027557) popup_call_audio_in_window_g3_ParamLimits

0x2701,	// (0x00027557) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00033f5a) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00033f5a) popup_call_audio_in_window_g

0x270d,	// (0x00027563) popup_call_audio_in_window_t1_ParamLimits

0x270d,	// (0x00027563) popup_call_audio_in_window_t1

0x2729,	// (0x0002757f) popup_call_audio_in_window_t2_ParamLimits

0x2729,	// (0x0002757f) popup_call_audio_in_window_t2

0x2745,	// (0x0002759b) popup_call_audio_in_window_t3_ParamLimits

0x2745,	// (0x0002759b) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00033f61) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00033f61) popup_call_audio_in_window_t

0x26d3,	// (0x00027529) bg_popup_call_pane_cp01_ParamLimits

0x26d3,	// (0x00027529) bg_popup_call_pane_cp01

0x26e1,	// (0x00027537) call_thumbnail_pane_cp02

0x2758,	// (0x000275ae) call_type_pane_cp022

0x2760,	// (0x000275b6) popup_call_audio_out_window_g1_ParamLimits

0x2760,	// (0x000275b6) popup_call_audio_out_window_g1

0x2772,	// (0x000275c8) popup_call_audio_out_window_g2_ParamLimits

0x2772,	// (0x000275c8) popup_call_audio_out_window_g2

0x277e,	// (0x000275d4) popup_call_audio_out_window_g3_ParamLimits

0x277e,	// (0x000275d4) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00033f68) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00033f68) popup_call_audio_out_window_g

0x2790,	// (0x000275e6) popup_call_audio_out_window_t1_ParamLimits

0x2790,	// (0x000275e6) popup_call_audio_out_window_t1

0x27a8,	// (0x000275fe) popup_call_audio_out_window_t2_ParamLimits

0x27a8,	// (0x000275fe) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00033f6f) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00033f6f) popup_call_audio_out_window_t

0x27bd,	// (0x00027613) bg_popup_call_pane_ParamLimits

0x27bd,	// (0x00027613) bg_popup_call_pane

0x2841,	// (0x00027697) call_thumbnail_pane_cp_ParamLimits

0x2841,	// (0x00027697) call_thumbnail_pane_cp

0x2865,	// (0x000276bb) call_type_pane_cp01_ParamLimits

0x2865,	// (0x000276bb) call_type_pane_cp01

0x28a9,	// (0x000276ff) popup_call_audio_first_window_g1_ParamLimits

0x28a9,	// (0x000276ff) popup_call_audio_first_window_g1

0x28f5,	// (0x0002774b) popup_call_audio_first_window_g2_ParamLimits

0x28f5,	// (0x0002774b) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00033f74) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00033f74) popup_call_audio_first_window_g

0x2939,	// (0x0002778f) popup_call_audio_first_window_t1_ParamLimits

0x2939,	// (0x0002778f) popup_call_audio_first_window_t1

0x29e5,	// (0x0002783b) popup_call_audio_first_window_t4_ParamLimits

0x29e5,	// (0x0002783b) popup_call_audio_first_window_t4

0x2a71,	// (0x000278c7) popup_call_audio_first_window_t5_ParamLimits

0x2a71,	// (0x000278c7) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00033f79) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00033f79) popup_call_audio_first_window_t

0x2aa0,	// (0x000278f6) bg_popup_call_pane_cp02

0x2aaa,	// (0x00027900) call_type_pane_cp023

0x2ab2,	// (0x00027908) popup_call_audio_wait_window_g1

0x2aba,	// (0x00027910) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00033f80) popup_call_audio_wait_window_g

0x2ac2,	// (0x00027918) popup_call_audio_wait_window_t3

0x2ad0,	// (0x00027926) bg_popup_call_pane_cp03_ParamLimits

0x2ad0,	// (0x00027926) bg_popup_call_pane_cp03

0x2b30,	// (0x00027986) call_thumbnail_pane_cp011_ParamLimits

0x2b30,	// (0x00027986) call_thumbnail_pane_cp011

0x2b3c,	// (0x00027992) call_type_pane_cp034_ParamLimits

0x2b3c,	// (0x00027992) call_type_pane_cp034

0x2b78,	// (0x000279ce) popup_call_audio_second_window_g1_ParamLimits

0x2b78,	// (0x000279ce) popup_call_audio_second_window_g1

0x2bb4,	// (0x00027a0a) popup_call_audio_second_window_g2_ParamLimits

0x2bb4,	// (0x00027a0a) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00033f85) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00033f85) popup_call_audio_second_window_g

0x2bf0,	// (0x00027a46) popup_call_audio_second_window_t1_ParamLimits

0x2bf0,	// (0x00027a46) popup_call_audio_second_window_t1

0x2c71,	// (0x00027ac7) popup_call_audio_second_window_t2_ParamLimits

0x2c71,	// (0x00027ac7) popup_call_audio_second_window_t2

0x2ca7,	// (0x00027afd) popup_call_audio_second_window_t3_ParamLimits

0x2ca7,	// (0x00027afd) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00033f8a) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00033f8a) popup_call_audio_second_window_t

0x2aa0,	// (0x000278f6) bg_popup_call_pane_cp04

0x2cdd,	// (0x00027b33) list_conf_pane

0x2ce5,	// (0x00027b3b) popup_call_audio_conf_window_t1

0x2cf3,	// (0x00027b49) call_thumbnail_pane_g1

0x2cfb,	// (0x00027b51) bg_pinb_pane_ParamLimits

0x2cfb,	// (0x00027b51) bg_pinb_pane

0x2d09,	// (0x00027b5f) find_pinb_pane

0x2d12,	// (0x00027b68) listscroll_pinb_pane_ParamLimits

0x2d12,	// (0x00027b68) listscroll_pinb_pane

0x2d21,	// (0x00027b77) pinb_bg_pane_g1

0x2d2b,	// (0x00027b81) pinb_bg_pane_g2

0x2d37,	// (0x00027b8d) pinb_bg_pane_g3

0x2d43,	// (0x00027b99) pinb_bg_pane_g4

0x2d4f,	// (0x00027ba5) pinb_bg_pane_g5

0x2d5b,	// (0x00027bb1) pinb_bg_pane_g6

0x2d66,	// (0x00027bbc) pinb_bg_pane_g7

0x2d71,	// (0x00027bc7) pinb_bg_pane_g8

0x2d7c,	// (0x00027bd2) pinb_bg_pane_g9

0x2d86,	// (0x00027bdc) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00033f91) pinb_bg_pane_g

0x2da3,	// (0x00027bf9) grid_pinb_pane

0x2dac,	// (0x00027c02) list_pinb_pane

0x2db5,	// (0x00027c0b) scroll_pane_cp01_ParamLimits

0x2db5,	// (0x00027c0b) scroll_pane_cp01

0x2dc7,	// (0x00027c1d) find_pinb_pane_g1_ParamLimits

0x2dc7,	// (0x00027c1d) find_pinb_pane_g1

0x2ddf,	// (0x00027c35) find_pinb_pane_t1

0x2df1,	// (0x00027c47) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00033fab) find_pinb_pane_t

0x2e06,	// (0x00027c5c) input_focus_pane_cp01_ParamLimits

0x2e06,	// (0x00027c5c) input_focus_pane_cp01

0x2e12,	// (0x00027c68) cell_pinb_pane_ParamLimits

0x2e12,	// (0x00027c68) cell_pinb_pane

0x2e3b,	// (0x00027c91) cell_pinb_pane_g1_ParamLimits

0x2e3b,	// (0x00027c91) cell_pinb_pane_g1

0x2e4b,	// (0x00027ca1) cell_pinb_pane_g2_ParamLimits

0x2e4b,	// (0x00027ca1) cell_pinb_pane_g2

0x2e57,	// (0x00027cad) cell_pinb_pane_g3_ParamLimits

0x2e57,	// (0x00027cad) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00033fb0) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00033fb0) cell_pinb_pane_g

0x2aa0,	// (0x000278f6) grid_highlight_pane_cp01

0x2e63,	// (0x00027cb9) list_pinb_item_pane_ParamLimits

0x2e63,	// (0x00027cb9) list_pinb_item_pane

0x2aa0,	// (0x000278f6) list_highlight_pane_cp02

0x2e75,	// (0x00027ccb) list_pinb_item_pane_g1_ParamLimits

0x2e75,	// (0x00027ccb) list_pinb_item_pane_g1

0x2e82,	// (0x00027cd8) list_pinb_item_pane_g2_ParamLimits

0x2e82,	// (0x00027cd8) list_pinb_item_pane_g2

0x2e8e,	// (0x00027ce4) list_pinb_item_pane_g3_ParamLimits

0x2e8e,	// (0x00027ce4) list_pinb_item_pane_g3

0x2e9f,	// (0x00027cf5) list_pinb_item_pane_g4_ParamLimits

0x2e9f,	// (0x00027cf5) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00033fb7) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00033fb7) list_pinb_item_pane_g

0x2eab,	// (0x00027d01) list_pinb_item_pane_t1_ParamLimits

0x2eab,	// (0x00027d01) list_pinb_item_pane_t1

0x1110,	// (0x00025f66) calc_display_pane

0x1136,	// (0x00025f8c) calc_paper_pane

0x1157,	// (0x00025fad) grid_calc_pane

0x2aa0,	// (0x000278f6) bg_list_pane_cp01

0x2ec2,	// (0x00027d18) clock_g1

0x2eca,	// (0x00027d20) clock_g2

0x0001,

0xf16a,	// (0x00033fc0) clock_g

0x2ed2,	// (0x00027d28) clock_t1_ParamLimits

0x2ed2,	// (0x00027d28) clock_t1

0x2ee7,	// (0x00027d3d) clock_t2_ParamLimits

0x2ee7,	// (0x00027d3d) clock_t2

0x2ef9,	// (0x00027d4f) clock_t3_ParamLimits

0x2ef9,	// (0x00027d4f) clock_t3

0x2f0b,	// (0x00027d61) clock_t4_ParamLimits

0x2f0b,	// (0x00027d61) clock_t4

0x2f1d,	// (0x00027d73) clock_t5_ParamLimits

0x2f1d,	// (0x00027d73) clock_t5

0x2f32,	// (0x00027d88) clock_t6_ParamLimits

0x2f32,	// (0x00027d88) clock_t6

0x2f44,	// (0x00027d9a) clock_t7_ParamLimits

0x2f44,	// (0x00027d9a) clock_t7

0x2f56,	// (0x00027dac) clock_t8_ParamLimits

0x2f56,	// (0x00027dac) clock_t8

0x2f6a,	// (0x00027dc0) clock_t9_ParamLimits

0x2f6a,	// (0x00027dc0) clock_t9

0x0008,

0xf16f,	// (0x00033fc5) clock_t_ParamLimits

0xf16f,	// (0x00033fc5) clock_t

0x2f7e,	// (0x00027dd4) popup_clock_analogue_window_cp02

0x2f7e,	// (0x00027dd4) popup_clock_digital_window_cp01

0x2f86,	// (0x00027ddc) listscroll_help_pane

0x2aa0,	// (0x000278f6) phob_pre_status_pane

0x2f90,	// (0x00027de6) grid_qdial_pane

0x2aa0,	// (0x000278f6) listscroll_mce_pane

0x2f9a,	// (0x00027df0) bg_notes_pane

0x2fa4,	// (0x00027dfa) list_notes_pane

0x2fae,	// (0x00027e04) scroll_pane_cp06

0x2fb9,	// (0x00027e0f) bg_calc_paper_pane

0xad01,	// (0x0002fb57) list_calc_pane

0x2fcd,	// (0x00027e23) bg_calc_display_pane

0x117f,	// (0x00025fd5) calc_display_pane_t1

0x1191,	// (0x00025fe7) calc_display_pane_t2

0xad1b,	// (0x0002fb71) calc_display_pane_t3

0x0002,

0xf182,	// (0x00033fd8) calc_display_pane_t

0x11a3,	// (0x00025ff9) cell_calc_pane_ParamLimits

0x11a3,	// (0x00025ff9) cell_calc_pane

0x2fd9,	// (0x00027e2f) bg_calc_paper_pane_g1

0x2fe5,	// (0x00027e3b) bg_calc_paper_pane_g2

0x2ff1,	// (0x00027e47) bg_calc_paper_pane_g3

0x2ffd,	// (0x00027e53) bg_calc_paper_pane_g4

0x3009,	// (0x00027e5f) bg_calc_paper_pane_g5

0x3015,	// (0x00027e6b) bg_calc_paper_pane_g6

0x3024,	// (0x00027e7a) bg_calc_paper_pane_g7

0x3033,	// (0x00027e89) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00033fdf) bg_calc_paper_pane_g

0x3046,	// (0x00027e9c) calc_bg_paper_pane_g9

0x3059,	// (0x00027eaf) list_calc_item_pane_ParamLimits

0x3059,	// (0x00027eaf) list_calc_item_pane

0x306c,	// (0x00027ec2) list_calc_item_pane_g1

0xad2d,	// (0x0002fb83) list_calc_item_pane_t1_ParamLimits

0xad2d,	// (0x0002fb83) list_calc_item_pane_t1

0x11d8,	// (0x0002602e) list_calc_item_pane_t2_ParamLimits

0x11d8,	// (0x0002602e) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00033ff0) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00033ff0) list_calc_item_pane_t

0x3079,	// (0x00027ecf) cell_calc_pane_g1

0x3083,	// (0x00027ed9) grid_highlight_pane_cp02

0x30a5,	// (0x00027efb) bg_calc_display_pane_g1

0x120c,	// (0x00026062) bg_calc_display_pane_g2

0x30ae,	// (0x00027f04) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00033ffa) bg_calc_display_pane_g

0x1216,	// (0x0002606c) cell_qdial_pane_ParamLimits

0x1216,	// (0x0002606c) cell_qdial_pane

0x30b7,	// (0x00027f0d) cell_qdial_pane_g1_ParamLimits

0x30b7,	// (0x00027f0d) cell_qdial_pane_g1

0x30cd,	// (0x00027f23) cell_qdial_pane_g2_ParamLimits

0x30cd,	// (0x00027f23) cell_qdial_pane_g2

0x30de,	// (0x00027f34) cell_qdial_pane_g3_ParamLimits

0x30de,	// (0x00027f34) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00034001) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00034001) cell_qdial_pane_g

0x3100,	// (0x00027f56) cell_qdial_pane_t1_ParamLimits

0x3100,	// (0x00027f56) cell_qdial_pane_t1

0x3118,	// (0x00027f6e) cell_qdial_pane_t2_ParamLimits

0x3118,	// (0x00027f6e) cell_qdial_pane_t2

0x312b,	// (0x00027f81) cell_qdial_pane_t3_ParamLimits

0x312b,	// (0x00027f81) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0003400a) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0003400a) cell_qdial_pane_t

0x2aa0,	// (0x000278f6) grid_highlight_pane_cp04

0x313e,	// (0x00027f94) thumbnail_qdial_pane_ParamLimits

0x313e,	// (0x00027f94) thumbnail_qdial_pane

0x319a,	// (0x00027ff0) list_help_pane

0x31a3,	// (0x00027ff9) scroll_pane_cp02

0x31ac,	// (0x00028002) help_list_pane_t1_ParamLimits

0x31ac,	// (0x00028002) help_list_pane_t1

0xad3f,	// (0x0002fb95) bg_notes_pane_g2

0xad47,	// (0x0002fb9d) bg_notes_pane_g3

0xad4f,	// (0x0002fba5) notes_bg_pane_g1

0xad57,	// (0x0002fbad) notes_bg_pane_g4

0xad5f,	// (0x0002fbb5) notes_bg_pane_g5

0xad67,	// (0x0002fbbd) notes_bg_pane_g6

0xad6f,	// (0x0002fbc5) notes_bg_pane_g7

0xad77,	// (0x0002fbcd) notes_bg_pane_g8

0xad7f,	// (0x0002fbd5) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00034028) notes_bg_pane_g

0x31c9,	// (0x0002801f) list_notes_text_pane_ParamLimits

0x31c9,	// (0x0002801f) list_notes_text_pane

0x31de,	// (0x00028034) list_notes_text_pane_g1

0x31e7,	// (0x0002803d) list_notes_text_pane_t1

0x2fcd,	// (0x00027e23) listscroll_cale_week_pane

0x3223,	// (0x00028079) bg_cale_heading_pane

0x3237,	// (0x0002808d) bg_cale_pane_cp01

0x3250,	// (0x000280a6) cale_week_corner_pane

0x3266,	// (0x000280bc) cale_week_day_heading_pane

0x327a,	// (0x000280d0) cale_week_scroll_pane_g1

0x328b,	// (0x000280e1) cale_week_scroll_pane_g2

0x329c,	// (0x000280f2) cale_week_scroll_pane_g3

0x32ad,	// (0x00028103) cale_week_scroll_pane_g4

0x32be,	// (0x00028114) cale_week_scroll_pane_g5

0x32cf,	// (0x00028125) cale_week_scroll_pane_g6

0x32e0,	// (0x00028136) cale_week_scroll_pane_g7

0x32f1,	// (0x00028147) cale_week_scroll_pane_g8

0x3302,	// (0x00028158) cale_week_scroll_pane_g9

0x3313,	// (0x00028169) cale_week_scroll_pane_g10

0x3324,	// (0x0002817a) cale_week_scroll_pane_g11

0x3335,	// (0x0002818b) cale_week_scroll_pane_g12

0x3346,	// (0x0002819c) cale_week_scroll_pane_g13

0x3357,	// (0x000281ad) cale_week_scroll_pane_g14

0x3368,	// (0x000281be) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00034037) cale_week_scroll_pane_g

0x3379,	// (0x000281cf) cale_week_time_pane

0x338a,	// (0x000281e0) grid_cale_week_pane

0x33af,	// (0x00028205) scroll_pane_cp08

0x33c9,	// (0x0002821f) cell_cale_week_pane_ParamLimits

0x33c9,	// (0x0002821f) cell_cale_week_pane

0x3405,	// (0x0002825b) cale_week_day_heading_pane_t1

0x3432,	// (0x00028288) cale_week_day_heading_pane_t2

0x345f,	// (0x000282b5) cale_week_day_heading_pane_t3

0x348c,	// (0x000282e2) cale_week_day_heading_pane_t4

0x34b9,	// (0x0002830f) cale_week_day_heading_pane_t5

0x34e6,	// (0x0002833c) cale_week_day_heading_pane_t6

0x3513,	// (0x00028369) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00034056) cale_week_day_heading_pane_t

0x3540,	// (0x00028396) bg_cale_side_pane

0x122a,	// (0x00026080) cale_week_time_pane_t1

0x1242,	// (0x00026098) cale_week_time_pane_t2

0x125a,	// (0x000260b0) cale_week_time_pane_t3

0x1272,	// (0x000260c8) cale_week_time_pane_t4

0x128a,	// (0x000260e0) cale_week_time_pane_t5

0x12a2,	// (0x000260f8) cale_week_time_pane_t6

0x12ba,	// (0x00026110) cale_week_time_pane_t7

0x12d2,	// (0x00026128) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00034065) cale_week_time_pane_t

0x354e,	// (0x000283a4) cell_cale_week_pane_g2

0x3567,	// (0x000283bd) cell_cale_week_pane_g3_ParamLimits

0x3567,	// (0x000283bd) cell_cale_week_pane_g3

0x357f,	// (0x000283d5) grid_highlight_pane_cp07

0x3587,	// (0x000283dd) listscroll_gms_pane

0x3591,	// (0x000283e7) grid_gms_pane

0x359a,	// (0x000283f0) listscroll_gms_pane_g1

0x35a2,	// (0x000283f8) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00034076) listscroll_gms_pane_g

0x35aa,	// (0x00028400) scroll_pane_cp010

0x35b5,	// (0x0002840b) cell_gms_pane_ParamLimits

0x35b5,	// (0x0002840b) cell_gms_pane

0x35c8,	// (0x0002841e) cell_gms_pane_g1

0x35d0,	// (0x00028426) cell_gms_pane_g2

0x35d8,	// (0x0002842e) cell_gms_pane_g3

0x35e1,	// (0x00028437) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0003407b) cell_gms_pane_g

0x35ea,	// (0x00028440) grid_highlight_pane_cp09

0x63f1,	// (0x0002b247) phob_pre_status_pane_g1

0x63f9,	// (0x0002b24f) phob_pre_status_pane_g2

0x6401,	// (0x0002b257) phob_pre_status_pane_g3

0x6409,	// (0x0002b25f) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0003446a) phob_pre_status_pane_g

0x6419,	// (0x0002b26f) phob_pre_status_pane_t1

0x6427,	// (0x0002b27d) phob_pre_status_pane_t2

0x6437,	// (0x0002b28d) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00034475) phob_pre_status_pane_t

0x2aa0,	// (0x000278f6) bg_list_pane_cp05

0x12f2,	// (0x00026148) grid_vorec_pane

0xad87,	// (0x0002fbdd) vorec_t1

0xad95,	// (0x0002fbeb) vorec_t2

0xada3,	// (0x0002fbf9) vorec_t3

0xadb1,	// (0x0002fc07) vorec_t4

0xadbf,	// (0x0002fc15) vorec_t5

0xadcd,	// (0x0002fc23) vorec_t6

0x0006,

0xf22e,	// (0x00034084) vorec_t

0xade9,	// (0x0002fc3f) wait_bar_pane_cp01

0x35f2,	// (0x00028448) cell_vorec_pane_ParamLimits

0x35f2,	// (0x00028448) cell_vorec_pane

0x3605,	// (0x0002845b) cell_vorec_pane_g1

0x2aa0,	// (0x000278f6) grid_highlight_pane_cp05

0x3627,	// (0x0002847d) cams_zoom_pane

0x3636,	// (0x0002848c) image_vga_pane

0x3650,	// (0x000284a6) main_camera_pane_g1

0x3662,	// (0x000284b8) main_camera_pane_g2

0x3672,	// (0x000284c8) main_camera_pane_g3

0x3682,	// (0x000284d8) main_camera_pane_g4

0x3692,	// (0x000284e8) main_camera_pane_g5

0x36a2,	// (0x000284f8) main_camera_pane_g6

0x36b4,	// (0x0002850a) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00034093) main_camera_pane_g

0x36d0,	// (0x00028526) main_camera_pane_t1

0x36e6,	// (0x0002853c) main_camera_pane_t2

0x0001,

0xf24e,	// (0x000340a4) main_camera_pane_t

0x3720,	// (0x00028576) cams_zoom_pane_cp_ParamLimits

0x3720,	// (0x00028576) cams_zoom_pane_cp

0x3748,	// (0x0002859e) image_cif_pane_ParamLimits

0x3748,	// (0x0002859e) image_cif_pane

0x3783,	// (0x000285d9) image_subqcif_pane

0x378b,	// (0x000285e1) main_video_pane_g1_ParamLimits

0x378b,	// (0x000285e1) main_video_pane_g1

0x37af,	// (0x00028605) main_video_pane_g2_ParamLimits

0x37af,	// (0x00028605) main_video_pane_g2

0x37e3,	// (0x00028639) main_video_pane_g3_ParamLimits

0x37e3,	// (0x00028639) main_video_pane_g3

0x3811,	// (0x00028667) main_video_pane_g4_ParamLimits

0x3811,	// (0x00028667) main_video_pane_g4

0x383f,	// (0x00028695) main_video_pane_g5_ParamLimits

0x383f,	// (0x00028695) main_video_pane_g5

0x385b,	// (0x000286b1) main_video_pane_g6_ParamLimits

0x385b,	// (0x000286b1) main_video_pane_g6

0x0006,

0xf253,	// (0x000340a9) main_video_pane_g_ParamLimits

0xf253,	// (0x000340a9) main_video_pane_g

0x3886,	// (0x000286dc) main_video_pane_t1_ParamLimits

0x3886,	// (0x000286dc) main_video_pane_t1

0x38cf,	// (0x00028725) cams_zoom_pane_g1

0x38d8,	// (0x0002872e) cams_zoom_pane_g2

0x38e1,	// (0x00028737) cams_zoom_pane_g3

0x38ea,	// (0x00028740) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x000340b8) cams_zoom_pane_g

0x3907,	// (0x0002875d) grid_cams_pane

0x3921,	// (0x00028777) linegrid_cams_pane

0x3935,	// (0x0002878b) cell_cams_pane_ParamLimits

0x3935,	// (0x0002878b) cell_cams_pane

0x3955,	// (0x000287ab) cams_burst_image_pane

0x395d,	// (0x000287b3) cell_cams_pane_g1

0x2aa0,	// (0x000278f6) grid_highlight_pane_cp03

0x3079,	// (0x00027ecf) mp_bg_pane_g1

0x2aa0,	// (0x000278f6) bg_list_pane_cp03

0xbe22,	// (0x00030c78) bg_mp_pane

0xbe2a,	// (0x00030c80) grid_mp_pane

0xbe32,	// (0x00030c88) media_player_g1

0xbe3a,	// (0x00030c90) media_player_t1

0xbe48,	// (0x00030c9e) media_player_t2

0xbe56,	// (0x00030cac) media_player_t3

0xbe64,	// (0x00030cba) media_player_t4

0xbe72,	// (0x00030cc8) media_player_t5

0xbe80,	// (0x00030cd6) media_player_t6

0xbe8e,	// (0x00030ce4) media_player_t7

0x0006,

0xf5fe,	// (0x00034454) media_player_t

0xbe9c,	// (0x00030cf2) wait_bar_pane_cp02

0xf5e3,	// (0x00034439) main_usb_pane_t

0x63e8,	// (0x0002b23e) cell_mp_pane

0x3079,	// (0x00027ecf) cell_mp_pane_g1

0x2aa0,	// (0x000278f6) grid_highlight_pane_cp06

0x3a57,	// (0x000288ad) grid_skin_colour_pane

0x3a5f,	// (0x000288b5) list_highlight_pane_cp03

0x3a67,	// (0x000288bd) skin_g1

0x3a6f,	// (0x000288c5) skin_t1

0x3a7e,	// (0x000288d4) skin_t2

0x0001,

0xf297,	// (0x000340ed) skin_t

0x3a8c,	// (0x000288e2) cell_skin_colour_pane_ParamLimits

0x3a8c,	// (0x000288e2) cell_skin_colour_pane

0x3aac,	// (0x00028902) cell_skin_colour_pane_g1

0x3b02,	// (0x00028958) call_video_g1_ParamLimits

0x3b02,	// (0x00028958) call_video_g1

0x3b1e,	// (0x00028974) call_video_g2_ParamLimits

0x3b1e,	// (0x00028974) call_video_g2

0x0001,

0xf29c,	// (0x000340f2) call_video_g_ParamLimits

0xf29c,	// (0x000340f2) call_video_g

0x3b54,	// (0x000289aa) call_video_uplink_pane_cp1_ParamLimits

0x3b54,	// (0x000289aa) call_video_uplink_pane_cp1

0x3b98,	// (0x000289ee) call_video_uplink_pane_cp2

0x3bda,	// (0x00028a30) video_down_crop_pane_ParamLimits

0x3bda,	// (0x00028a30) video_down_crop_pane

0x3cae,	// (0x00028b04) video_down_pane_ParamLimits

0x3cae,	// (0x00028b04) video_down_pane

0x3d7f,	// (0x00028bd5) video_down_subqcif_pane_ParamLimits

0x3d7f,	// (0x00028bd5) video_down_subqcif_pane

0x3d97,	// (0x00028bed) video_down_subqcif_pane_cp_ParamLimits

0x3d97,	// (0x00028bed) video_down_subqcif_pane_cp

0x3dbb,	// (0x00028c11) im_reading_pane_ParamLimits

0x3dbb,	// (0x00028c11) im_reading_pane

0x3dcd,	// (0x00028c23) im_writing_pane_ParamLimits

0x3dcd,	// (0x00028c23) im_writing_pane

0x3deb,	// (0x00028c41) im_reading_pane_t1

0x3e24,	// (0x00028c7a) list_im_pane

0x3e35,	// (0x00028c8b) scroll_pane_cp07

0x3e4e,	// (0x00028ca4) im_writing_pane_t1_ParamLimits

0x3e4e,	// (0x00028ca4) im_writing_pane_t1

0x3e63,	// (0x00028cb9) im_writing_pane_t2_ParamLimits

0x3e63,	// (0x00028cb9) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x000340fc) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x000340fc) im_writing_pane_t

0x2aa0,	// (0x000278f6) input_focus_pane_cp04

0x2aa0,	// (0x000278f6) input_focus_pane_cp05

0x3e80,	// (0x00028cd6) list_im_single_pane_ParamLimits

0x3e80,	// (0x00028cd6) list_im_single_pane

0x3e94,	// (0x00028cea) list_single_im_pane_t1

0x63a8,	// (0x0002b1fe) blid_accuracy_pane

0x63b0,	// (0x0002b206) blid_compass_pane

0x63ba,	// (0x0002b210) main_location_t1

0x63ca,	// (0x0002b220) main_location_t2

0x63da,	// (0x0002b230) main_location_t3

0x0002,

0xf60d,	// (0x00034463) main_location_t

0x2aa0,	// (0x000278f6) aid_levels_location

0x3079,	// (0x00027ecf) blid_accuracy_pane_g1

0x3079,	// (0x00027ecf) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0003415e) blid_accuracy_pane_g

0x3ece,	// (0x00028d24) wml_content_pane

0x3f0c,	// (0x00028d62) wml_button_pane_ParamLimits

0x3f0c,	// (0x00028d62) wml_button_pane

0x3f20,	// (0x00028d76) wml_list_single_large_pane_ParamLimits

0x3f20,	// (0x00028d76) wml_list_single_large_pane

0x3f35,	// (0x00028d8b) wml_list_single_medium_pane_ParamLimits

0x3f35,	// (0x00028d8b) wml_list_single_medium_pane

0x3f4b,	// (0x00028da1) wml_list_single_small_pane_ParamLimits

0x3f4b,	// (0x00028da1) wml_list_single_small_pane

0x3f63,	// (0x00028db9) wml_selection_box_pane_ParamLimits

0x3f63,	// (0x00028db9) wml_selection_box_pane

0x3f76,	// (0x00028dcc) wml_list_single_pane_t1

0x3f85,	// (0x00028ddb) wml_list_single_medium_pane_t1

0x3f94,	// (0x00028dea) wml_list_single_large_pane_t1

0x3fa3,	// (0x00028df9) input_focus_pane_cp02_ParamLimits

0x3fa3,	// (0x00028df9) input_focus_pane_cp02

0x3fb6,	// (0x00028e0c) wml_selection_box_pane_g1

0x3fbf,	// (0x00028e15) wml_selection_box_pane_t1_ParamLimits

0x3fbf,	// (0x00028e15) wml_selection_box_pane_t1

0x2cfb,	// (0x00027b51) bg_wml_button_pane_ParamLimits

0x2cfb,	// (0x00027b51) bg_wml_button_pane

0x3fd7,	// (0x00028e2d) wml_button_pane_g1

0x3fdf,	// (0x00028e35) wml_button_pane_t1

0x3fd7,	// (0x00028e2d) wml_button_bg_pane_g1

0x3fef,	// (0x00028e45) wml_button_bg_pane_g2

0x3ff7,	// (0x00028e4d) wml_button_bg_pane_g3

0x3fff,	// (0x00028e55) wml_button_bg_pane_g4

0x4007,	// (0x00028e5d) wml_button_bg_pane_g5

0x400f,	// (0x00028e65) wml_button_bg_pane_g6

0x4017,	// (0x00028e6d) wml_button_bg_pane_g7

0x401f,	// (0x00028e75) wml_button_bg_pane_g8

0x4027,	// (0x00028e7d) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00034101) wml_button_bg_pane_g

0x402f,	// (0x00028e85) bg_list_pane_cp02

0x4037,	// (0x00028e8d) mce_header_pane_ParamLimits

0x4037,	// (0x00028e8d) mce_header_pane

0x404d,	// (0x00028ea3) mce_icon_pane

0x404d,	// (0x00028ea3) mce_image_pane

0x4056,	// (0x00028eac) mce_text_pane_ParamLimits

0x4056,	// (0x00028eac) mce_text_pane

0x4069,	// (0x00028ebf) scroll_pane_cp03

0x3f04,	// (0x00028d5a) scroll_pane_cp04

0x4073,	// (0x00028ec9) scroll_pane_cp05_ParamLimits

0x4073,	// (0x00028ec9) scroll_pane_cp05

0x407f,	// (0x00028ed5) mce_header_field_pane_ParamLimits

0x407f,	// (0x00028ed5) mce_header_field_pane

0x4096,	// (0x00028eec) mce_header_field_pane_2_ParamLimits

0x4096,	// (0x00028eec) mce_header_field_pane_2

0x40ac,	// (0x00028f02) mce_header_field_pane_3

0x40b4,	// (0x00028f0a) list_single_mce_message_pane_ParamLimits

0x40b4,	// (0x00028f0a) list_single_mce_message_pane

0x40c9,	// (0x00028f1f) list_single_mce_smart_pane_ParamLimits

0x40c9,	// (0x00028f1f) list_single_mce_smart_pane

0x40e9,	// (0x00028f3f) input_focus_pane_cp03

0x40f2,	// (0x00028f48) list_header_data_pane

0x40fa,	// (0x00028f50) mce_header_field_pane_t1

0x410a,	// (0x00028f60) list_single_mce_header_pane_ParamLimits

0x410a,	// (0x00028f60) list_single_mce_header_pane

0x411e,	// (0x00028f74) list_single_mce_header_pane_t1

0x412d,	// (0x00028f83) list_single_mce_message_pane_g1

0x4135,	// (0x00028f8b) list_single_mce_message_pane_t1

0x4161,	// (0x00028fb7) bg_cale_heading_pane_cp01_ParamLimits

0x4161,	// (0x00028fb7) bg_cale_heading_pane_cp01

0x4184,	// (0x00028fda) bg_cale_pane_cp02_ParamLimits

0x4184,	// (0x00028fda) bg_cale_pane_cp02

0x41a7,	// (0x00028ffd) cale_month_corner_pane

0x41bd,	// (0x00029013) cale_month_day_heading_pane_ParamLimits

0x41bd,	// (0x00029013) cale_month_day_heading_pane

0x41e8,	// (0x0002903e) cale_month_pane_g1_ParamLimits

0x41e8,	// (0x0002903e) cale_month_pane_g1

0x4204,	// (0x0002905a) cale_month_pane_g2_ParamLimits

0x4204,	// (0x0002905a) cale_month_pane_g2

0x421f,	// (0x00029075) cale_month_pane_g3_ParamLimits

0x421f,	// (0x00029075) cale_month_pane_g3

0x424b,	// (0x000290a1) cale_month_pane_g4_ParamLimits

0x424b,	// (0x000290a1) cale_month_pane_g4

0x4277,	// (0x000290cd) cale_month_pane_g5_ParamLimits

0x4277,	// (0x000290cd) cale_month_pane_g5

0x42a3,	// (0x000290f9) cale_month_pane_g6_ParamLimits

0x42a3,	// (0x000290f9) cale_month_pane_g6

0x42cf,	// (0x00029125) cale_month_pane_g7_ParamLimits

0x42cf,	// (0x00029125) cale_month_pane_g7

0x42fb,	// (0x00029151) cale_month_pane_g8_ParamLimits

0x42fb,	// (0x00029151) cale_month_pane_g8

0x432f,	// (0x00029185) cale_month_pane_g9_ParamLimits

0x432f,	// (0x00029185) cale_month_pane_g9

0x4361,	// (0x000291b7) cale_month_pane_g10_ParamLimits

0x4361,	// (0x000291b7) cale_month_pane_g10

0x4393,	// (0x000291e9) cale_month_pane_g11_ParamLimits

0x4393,	// (0x000291e9) cale_month_pane_g11

0x43c5,	// (0x0002921b) cale_month_pane_g12_ParamLimits

0x43c5,	// (0x0002921b) cale_month_pane_g12

0x43f7,	// (0x0002924d) cale_month_pane_g13_ParamLimits

0x43f7,	// (0x0002924d) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00034114) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00034114) cale_month_pane_g

0x443b,	// (0x00029291) cale_month_week_pane

0x444e,	// (0x000292a4) grid_cale_month_pane_ParamLimits

0x444e,	// (0x000292a4) grid_cale_month_pane

0x4474,	// (0x000292ca) cale_month_day_heading_pane_t1

0x44d2,	// (0x00029328) cale_month_day_heading_pane_t2

0x4537,	// (0x0002938d) cale_month_day_heading_pane_t3

0x459c,	// (0x000293f2) cale_month_day_heading_pane_t4

0x4601,	// (0x00029457) cale_month_day_heading_pane_t5

0x4666,	// (0x000294bc) cale_month_day_heading_pane_t6

0x46cb,	// (0x00029521) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0003412f) cale_month_day_heading_pane_t

0x3540,	// (0x00028396) bg_cale_side_pane_cp01

0x4730,	// (0x00029586) cale_month_week_pane_t1

0x4747,	// (0x0002959d) cale_month_week_pane_t2

0x475e,	// (0x000295b4) cale_month_week_pane_t3

0x4775,	// (0x000295cb) cale_month_week_pane_t4

0x478c,	// (0x000295e2) cale_month_week_pane_t5

0x47a3,	// (0x000295f9) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0003413e) cale_month_week_pane_t

0x47ba,	// (0x00029610) cell_cale_month_pane_ParamLimits

0x47ba,	// (0x00029610) cell_cale_month_pane

0xadf1,	// (0x0002fc47) cell_cale_month_pane_g1

0x12fa,	// (0x00026150) cell_cale_month_pane_t1_ParamLimits

0x12fa,	// (0x00026150) cell_cale_month_pane_t1

0x357f,	// (0x000283d5) grid_highlight_pane_cp08

0x3079,	// (0x00027ecf) main_smil_g1

0x488a,	// (0x000296e0) smil_status_pane

0x4893,	// (0x000296e9) smil_text_pane

0xbd42,	// (0x00030b98) bg_popup_call3_rect_pane_g8

0xbd4a,	// (0x00030ba0) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x000343f7) bg_popup_call3_rect_pane_g

0xbfc4,	// (0x00030e1a) smil_status_volume_pane_g1

0x48a7,	// (0x000296fd) smil_status_pane_t1

0xbff7,	// (0x00030e4d) volume_smil_pane

0x48be,	// (0x00029714) list_smil_text_pane

0x48c8,	// (0x0002971e) scroll_pane_cp011

0x48d3,	// (0x00029729) smil_text_list_pane_t1_ParamLimits

0x48d3,	// (0x00029729) smil_text_list_pane_t1

0xadfd,	// (0x0002fc53) aid_volume_smil_ParamLimits

0xadfd,	// (0x0002fc53) aid_volume_smil

0x3079,	// (0x00027ecf) smil_volume_pane_g1

0x3079,	// (0x00027ecf) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0003415e) smil_volume_pane_g

0x2fcd,	// (0x00027e23) listscroll_cale_day_pane

0x4919,	// (0x0002976f) bg_cale_pane

0x4931,	// (0x00029787) list_cale_pane

0x4942,	// (0x00029798) scroll_pane_cp09

0x4953,	// (0x000297a9) cale_bg_pane_g1

0x495b,	// (0x000297b1) cale_bg_pane_g2

0x4963,	// (0x000297b9) cale_bg_pane_g3

0x496b,	// (0x000297c1) cale_bg_pane_g4

0x4973,	// (0x000297c9) cale_bg_pane_g5

0x497b,	// (0x000297d1) cale_bg_pane_g6

0x4983,	// (0x000297d9) cale_bg_pane_g7

0x498b,	// (0x000297e1) cale_bg_pane_g8

0x4993,	// (0x000297e9) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00034163) cale_bg_pane_g

0x35f2,	// (0x00028448) list_cale_time_pane_ParamLimits

0x35f2,	// (0x00028448) list_cale_time_pane

0x499b,	// (0x000297f1) list_cale_time_pane_g1_ParamLimits

0x499b,	// (0x000297f1) list_cale_time_pane_g1

0x49a7,	// (0x000297fd) list_cale_time_pane_g2_ParamLimits

0x49a7,	// (0x000297fd) list_cale_time_pane_g2

0x49b4,	// (0x0002980a) list_cale_time_pane_g3_ParamLimits

0x49b4,	// (0x0002980a) list_cale_time_pane_g3

0x49c2,	// (0x00029818) list_cale_time_pane_g4_ParamLimits

0x49c2,	// (0x00029818) list_cale_time_pane_g4

0x49d0,	// (0x00029826) list_cale_time_pane_g5_ParamLimits

0x49d0,	// (0x00029826) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00034176) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00034176) list_cale_time_pane_g

0x49eb,	// (0x00029841) list_cale_time_pane_t1_ParamLimits

0x49eb,	// (0x00029841) list_cale_time_pane_t1

0x4a13,	// (0x00029869) list_cale_time_pane_t2_ParamLimits

0x4a13,	// (0x00029869) list_cale_time_pane_t2

0x51b8,	// (0x0002a00e) aid_blid_cardinal_pane

0x5202,	// (0x0002a058) compass_pane_t4

0x4a3b,	// (0x00029891) list_cale_time_pane_t4_ParamLimits

0x4a3b,	// (0x00029891) list_cale_time_pane_t4

0x5210,	// (0x0002a066) compass_pane_t5

0x521e,	// (0x0002a074) compass_pane_t6

0x522c,	// (0x0002a082) compass_pane_t7

0x52ac,	// (0x0002a102) navi_pane_cc_t1

0x54c5,	// (0x0002a31b) aid_phob_thumbnail_center_pane

0x5b94,	// (0x0002a9ea) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00034183) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00034183) list_cale_time_pane_t

0x26d3,	// (0x00027529) bg_popup_window_pane_cp02_ParamLimits

0x26d3,	// (0x00027529) bg_popup_window_pane_cp02

0x4a63,	// (0x000298b9) heading_pane_cp01_ParamLimits

0x4a63,	// (0x000298b9) heading_pane_cp01

0x4a6f,	// (0x000298c5) loc_req_pane_ParamLimits

0x4a6f,	// (0x000298c5) loc_req_pane

0x4a7f,	// (0x000298d5) loc_type_pane_ParamLimits

0x4a7f,	// (0x000298d5) loc_type_pane

0x4a91,	// (0x000298e7) loc_type_pane_t1_ParamLimits

0x4a91,	// (0x000298e7) loc_type_pane_t1

0x4aa3,	// (0x000298f9) loc_type_pane_t2_ParamLimits

0x4aa3,	// (0x000298f9) loc_type_pane_t2

0x4ab5,	// (0x0002990b) loc_type_pane_t3_ParamLimits

0x4ab5,	// (0x0002990b) loc_type_pane_t3

0x0002,

0xf334,	// (0x0003418a) loc_type_pane_t_ParamLimits

0xf334,	// (0x0003418a) loc_type_pane_t

0x4ac7,	// (0x0002991d) list_loc_req_pane

0x4ad1,	// (0x00029927) scroll_pane_cp012

0x4adc,	// (0x00029932) list_single_loc_request_popup_menu_pane_ParamLimits

0x4adc,	// (0x00029932) list_single_loc_request_popup_menu_pane

0x4ae9,	// (0x0002993f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4ae9,	// (0x0002993f) list_single_loc_request_popup_menu_pane_g1

0x4af5,	// (0x0002994b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4af5,	// (0x0002994b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00034191) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00034191) list_single_loc_request_popup_menu_pane_g

0x4b01,	// (0x00029957) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4b01,	// (0x00029957) list_single_loc_request_popup_menu_pane_t1

0x2cfb,	// (0x00027b51) bg_popup_window_pane_cp03_ParamLimits

0x2cfb,	// (0x00027b51) bg_popup_window_pane_cp03

0x4b17,	// (0x0002996d) heading_loc_req_pane_ParamLimits

0x4b17,	// (0x0002996d) heading_loc_req_pane

0x4b23,	// (0x00029979) popup_dyc_status_message_window_g1_ParamLimits

0x4b23,	// (0x00029979) popup_dyc_status_message_window_g1

0x4b37,	// (0x0002998d) popup_dyc_status_message_window_t1_ParamLimits

0x4b37,	// (0x0002998d) popup_dyc_status_message_window_t1

0x4b4c,	// (0x000299a2) popup_dyc_status_message_window_t2_ParamLimits

0x4b4c,	// (0x000299a2) popup_dyc_status_message_window_t2

0x4b61,	// (0x000299b7) popup_dyc_status_message_window_t3_ParamLimits

0x4b61,	// (0x000299b7) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00034196) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00034196) popup_dyc_status_message_window_t

0x2aa0,	// (0x000278f6) bg_heading_pane_cp01

0x4b7d,	// (0x000299d3) heading_loc_req_pane_g1

0x4b85,	// (0x000299db) heading_loc_req_pane_g2

0x4b8d,	// (0x000299e3) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0003419d) heading_loc_req_pane_g

0x4b95,	// (0x000299eb) heading_loc_req_pane_t1

0x4c8b,	// (0x00029ae1) bg_popup_sub_pane_cp01_ParamLimits

0x4c8b,	// (0x00029ae1) bg_popup_sub_pane_cp01

0x4c99,	// (0x00029aef) popup_cale_events_window_g1_ParamLimits

0x4c99,	// (0x00029aef) popup_cale_events_window_g1

0x4cb9,	// (0x00029b0f) popup_cale_events_window_g2_ParamLimits

0x4cb9,	// (0x00029b0f) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x000341d1) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x000341d1) popup_cale_events_window_g

0x4cd9,	// (0x00029b2f) popup_cale_events_window_t1_ParamLimits

0x4cd9,	// (0x00029b2f) popup_cale_events_window_t1

0x4ceb,	// (0x00029b41) popup_cale_events_window_t2_ParamLimits

0x4ceb,	// (0x00029b41) popup_cale_events_window_t2

0x4d29,	// (0x00029b7f) popup_cale_events_window_t3_ParamLimits

0x4d29,	// (0x00029b7f) popup_cale_events_window_t3

0x4d63,	// (0x00029bb9) popup_cale_events_window_t4_ParamLimits

0x4d63,	// (0x00029bb9) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x000341d6) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x000341d6) popup_cale_events_window_t

0x4d99,	// (0x00029bef) call_type_pane

0x4da9,	// (0x00029bff) popup_call_status_window_g1

0x4dbd,	// (0x00029c13) popup_call_status_window_g2

0x4dd1,	// (0x00029c27) popup_call_status_window_g3

0x0002,

0xf389,	// (0x000341df) popup_call_status_window_g

0x4de0,	// (0x00029c36) call_type_pane_g1

0x4de9,	// (0x00029c3f) call_type_pane_g2

0x0001,

0xf390,	// (0x000341e6) call_type_pane_g

0x2aa0,	// (0x000278f6) bg_popup_sub_pane_cp02

0x4df2,	// (0x00029c48) listscroll_popup_wml_pane

0x4dfa,	// (0x00029c50) list_wml_pane

0x4e04,	// (0x00029c5a) scroll_pane_cp013

0x4e0f,	// (0x00029c65) list_single_graphic_popup_wml_pane_ParamLimits

0x4e0f,	// (0x00029c65) list_single_graphic_popup_wml_pane

0x3079,	// (0x00027ecf) list_single_graphic_popup_wml_pane_g1

0x4e23,	// (0x00029c79) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x000341eb) list_single_graphic_popup_wml_pane_g

0x4e2b,	// (0x00029c81) list_single_graphic_popup_wml_pane_t1

0x4e41,	// (0x00029c97) aid_call_pane

0x2cf3,	// (0x00027b49) popup_clock_analogue_window_g1

0x2cf3,	// (0x00027b49) popup_clock_analogue_window_g2

0xae1f,	// (0x0002fc75) popup_clock_analogue_window_g3

0xae1f,	// (0x0002fc75) popup_clock_analogue_window_g4

0x3079,	// (0x00027ecf) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x000341f0) popup_clock_analogue_window_g

0xae27,	// (0x0002fc7d) popup_clock_analogue_window_t1

0xae35,	// (0x0002fc8b) clock_digital_number_pane_ParamLimits

0xae35,	// (0x0002fc8b) clock_digital_number_pane

0xae41,	// (0x0002fc97) clock_digital_number_pane_cp02_ParamLimits

0xae41,	// (0x0002fc97) clock_digital_number_pane_cp02

0xae4d,	// (0x0002fca3) clock_digital_number_pane_cp03_ParamLimits

0xae4d,	// (0x0002fca3) clock_digital_number_pane_cp03

0xae59,	// (0x0002fcaf) clock_digital_number_pane_cp04_ParamLimits

0xae59,	// (0x0002fcaf) clock_digital_number_pane_cp04

0xae69,	// (0x0002fcbf) clock_digital_separator_pane_ParamLimits

0xae69,	// (0x0002fcbf) clock_digital_separator_pane

0xae75,	// (0x0002fccb) popup_clock_digital_window_t1

0x3079,	// (0x00027ecf) clock_digital_number_pane_g1

0x3079,	// (0x00027ecf) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0003415e) clock_digital_number_pane_g

0x3079,	// (0x00027ecf) clock_digital_separator_pane_g1

0x3079,	// (0x00027ecf) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0003415e) clock_digital_separator_pane_g

0x2aa0,	// (0x000278f6) bg_popup_window_pane_cp04

0x4e49,	// (0x00029c9f) heading_pane_cp03

0x4e51,	// (0x00029ca7) listscroll_popup_gms_pane

0x4e59,	// (0x00029caf) grid_large_graphic_popup_pane

0x4e63,	// (0x00029cb9) listscroll_popup_gms_pane_g1

0x4e6b,	// (0x00029cc1) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x000341fb) listscroll_popup_gms_pane_g

0x3f04,	// (0x00028d5a) scroll_pane_cp014

0x4e73,	// (0x00029cc9) cell_large_graphic_popup_pane_ParamLimits

0x4e73,	// (0x00029cc9) cell_large_graphic_popup_pane

0x4e8b,	// (0x00029ce1) cell_large_graphic_popup_pane_g1_ParamLimits

0x4e8b,	// (0x00029ce1) cell_large_graphic_popup_pane_g1

0x4e97,	// (0x00029ced) cell_large_graphic_popup_pane_g2_ParamLimits

0x4e97,	// (0x00029ced) cell_large_graphic_popup_pane_g2

0x4ea3,	// (0x00029cf9) cell_large_graphic_popup_pane_g3_ParamLimits

0x4ea3,	// (0x00029cf9) cell_large_graphic_popup_pane_g3

0x4eb0,	// (0x00029d06) cell_large_graphic_popup_pane_g4_ParamLimits

0x4eb0,	// (0x00029d06) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00034200) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00034200) cell_large_graphic_popup_pane_g

0x4ec0,	// (0x00029d16) grid_highlight_pane_cp010

0x3079,	// (0x00027ecf) bg_popup_call_pane_g1

0x4eca,	// (0x00029d20) list_single_graphic_popup_conf_pane_ParamLimits

0x4eca,	// (0x00029d20) list_single_graphic_popup_conf_pane

0x4edd,	// (0x00029d33) list_highlight_pane_cp01

0x4ee6,	// (0x00029d3c) list_single_graphic_popup_conf_pane_g1

0x4eee,	// (0x00029d44) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00034209) list_single_graphic_popup_conf_pane_g

0x4ef6,	// (0x00029d4c) list_single_graphic_popup_conf_pane_t1

0x4f04,	// (0x00029d5a) linegrid_cams_pane_g1

0x4f0d,	// (0x00029d63) linegrid_cams_pane_g2

0x35d8,	// (0x0002842e) linegrid_cams_pane_g3

0x4f16,	// (0x00029d6c) linegrid_cams_pane_g4

0x4f1f,	// (0x00029d75) linegrid_cams_pane_g5

0x4f28,	// (0x00029d7e) linegrid_cams_pane_g6

0x35e1,	// (0x00028437) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0003420e) linegrid_cams_pane_g

0x4f33,	// (0x00029d89) popup_clock_analogue_window

0x4f33,	// (0x00029d89) popup_clock_digital_window

0x2aa0,	// (0x000278f6) popup_phob_thumbnail_window

0x3079,	// (0x00027ecf) call_video_uplink_pane_g1

0x4f3c,	// (0x00029d92) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0003421d) call_video_uplink_pane_g

0x4f44,	// (0x00029d9a) video_uplink_pane

0x4f4c,	// (0x00029da2) mce_image_pane_g1

0x4f56,	// (0x00029dac) mce_image_pane_g2

0x4f60,	// (0x00029db6) mce_image_pane_g3

0x4f68,	// (0x00029dbe) mce_image_pane_g4

0x4f70,	// (0x00029dc6) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00034222) mce_image_pane_g

0x4f78,	// (0x00029dce) control_top_pane_stacon_cp01_ParamLimits

0x4f78,	// (0x00029dce) control_top_pane_stacon_cp01

0x4f8c,	// (0x00029de2) uni_indicator_pane_stacon_cp01_ParamLimits

0x4f8c,	// (0x00029de2) uni_indicator_pane_stacon_cp01

0x4f9d,	// (0x00029df3) bg_popup_sub_pane_cp03

0x4fa7,	// (0x00029dfd) chi_dic_find_pane

0x4faf,	// (0x00029e05) listscroll_chi_dic_pane

0x4fb8,	// (0x00029e0e) main_pane_chidic_g1

0x4fcb,	// (0x00029e21) chi_dic_find_pane_t1

0x4fd9,	// (0x00029e2f) find_chidic_pane

0x4fe2,	// (0x00029e38) chi_dic_list_pane_ParamLimits

0x4fe2,	// (0x00029e38) chi_dic_list_pane

0x4ff3,	// (0x00029e49) scroll_pane_cp020

0x4ffb,	// (0x00029e51) find_chidic_pane_t1

0x2aa0,	// (0x000278f6) input_focus_pane_cp06

0x500a,	// (0x00029e60) list_chi_dic_pane_ParamLimits

0x500a,	// (0x00029e60) list_chi_dic_pane

0x501c,	// (0x00029e72) list_chi_dic_pane_t1_ParamLimits

0x501c,	// (0x00029e72) list_chi_dic_pane_t1

0x2aa0,	// (0x000278f6) list_highlight_pane_cp020

0x502f,	// (0x00029e85) bg_cale_heading_pane_g1

0x5037,	// (0x00029e8d) bg_cale_heading_pane_g2

0x503f,	// (0x00029e95) bg_cale_heading_pane_g3

0x5047,	// (0x00029e9d) bg_cale_heading_pane_g4

0x5051,	// (0x00029ea7) bg_cale_heading_pane_g5

0x505b,	// (0x00029eb1) bg_cale_heading_pane_g6

0x5063,	// (0x00029eb9) bg_cale_heading_pane_g7

0x506b,	// (0x00029ec1) bg_cale_heading_pane_g8

0x5075,	// (0x00029ecb) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0003422d) bg_cale_heading_pane_g

0x502f,	// (0x00029e85) bg_cale_side_pane_g1

0x507f,	// (0x00029ed5) bg_cale_side_pane_g2

0x5087,	// (0x00029edd) bg_cale_side_pane_g3

0x508f,	// (0x00029ee5) bg_cale_side_pane_g4

0x5097,	// (0x00029eed) bg_cale_side_pane_g5

0x509f,	// (0x00029ef5) bg_cale_side_pane_g6

0x50a7,	// (0x00029efd) bg_cale_side_pane_g7

0x50af,	// (0x00029f05) bg_cale_side_pane_g8

0x50b7,	// (0x00029f0d) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00034240) bg_cale_side_pane_g

0x50bf,	// (0x00029f15) popup_call_status_window_ParamLimits

0x50bf,	// (0x00029f15) popup_call_status_window

0x5108,	// (0x00029f5e) stacon_top_pane

0x5110,	// (0x00029f66) status_pane_ParamLimits

0x5110,	// (0x00029f66) status_pane

0x5125,	// (0x00029f7b) status_small_pane

0x512d,	// (0x00029f83) control_pane

0x2aa0,	// (0x000278f6) stacon_bottom_pane

0x5135,	// (0x00029f8b) list_single_mce_smart_pane_t1_ParamLimits

0x5135,	// (0x00029f8b) list_single_mce_smart_pane_t1

0x5148,	// (0x00029f9e) list_single_mce_smart_pane_t2_ParamLimits

0x5148,	// (0x00029f9e) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00034253) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00034253) list_single_mce_smart_pane_t

0x5167,	// (0x00029fbd) compass_pane

0x5170,	// (0x00029fc6) main_location2_pane_t1

0x5182,	// (0x00029fd8) main_location2_pane_t2

0x5194,	// (0x00029fea) main_location2_pane_t3

0x0003,

0xf402,	// (0x00034258) main_location2_pane_t

0x51d8,	// (0x0002a02e) compass_pane_g1_ParamLimits

0x51d8,	// (0x0002a02e) compass_pane_g1

0x51e4,	// (0x0002a03a) compass_pane_t1

0x51f3,	// (0x0002a049) compass_pane_t2

0x0005,

0xf40b,	// (0x00034261) compass_pane_t

0x523a,	// (0x0002a090) text_secondary_cp61

0x52a3,	// (0x0002a0f9) navi_pane_cams_g5

0x531d,	// (0x0002a173) navi_pane_im_t1

0x532b,	// (0x0002a181) navi_pane_mp_g1_ParamLimits

0x532b,	// (0x0002a181) navi_pane_mp_g1

0x533f,	// (0x0002a195) navi_pane_mp_g2_ParamLimits

0x533f,	// (0x0002a195) navi_pane_mp_g2

0x534b,	// (0x0002a1a1) navi_pane_mp_g3_ParamLimits

0x534b,	// (0x0002a1a1) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00034275) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00034275) navi_pane_mp_g

0x5357,	// (0x0002a1ad) navi_pane_mp_t1

0x5365,	// (0x0002a1bb) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0003427c) navi_pane_mp_t

0x540e,	// (0x0002a264) navi_pane_vt_g1

0x5357,	// (0x0002a1ad) navi_pane_vt_t1

0x5416,	// (0x0002a26c) navi_slider_pane

0x541e,	// (0x0002a274) zooming_pane

0x5426,	// (0x0002a27c) navi_slider_pane_g1

0xae92,	// (0x0002fce8) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00034283) navi_slider_pane_g

0x544a,	// (0x0002a2a0) aid_levels_zoom

0x5452,	// (0x0002a2a8) zooming_pane_g1

0x545a,	// (0x0002a2b0) zooming_pane_g2

0x545a,	// (0x0002a2b0) zooming_pane_g3

0x0002,

0xf43c,	// (0x00034292) zooming_pane_g

0x5462,	// (0x0002a2b8) level_10_zoom

0x546b,	// (0x0002a2c1) level_11_zoom

0x5474,	// (0x0002a2ca) level_1_zoom

0x547d,	// (0x0002a2d3) level_2_zoom

0x5486,	// (0x0002a2dc) level_3_zoom

0x548f,	// (0x0002a2e5) level_4_zoom

0x5498,	// (0x0002a2ee) level_5_zoom

0x54a1,	// (0x0002a2f7) level_6_zoom

0x54aa,	// (0x0002a300) level_7_zoom

0x54b3,	// (0x0002a309) level_8_zoom

0x54bc,	// (0x0002a312) level_9_zoom

0x54cd,	// (0x0002a323) popup_phob_thumbnail_window_g1

0x54d5,	// (0x0002a32b) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00034299) popup_phob_thumbnail_window_g

0xbea4,	// (0x00030cfa) level_1_location

0xbeac,	// (0x00030d02) level_2_location

0xbeb4,	// (0x00030d0a) level_3_location

0xbebc,	// (0x00030d12) level_4_location

0x541e,	// (0x0002a274) level_5_location

0x54dd,	// (0x0002a333) mce_icon_pane_g1

0x54e5,	// (0x0002a33b) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0003429e) mce_icon_pane_g

0x54ed,	// (0x0002a343) main_mup_pane_g1_ParamLimits

0x54ed,	// (0x0002a343) main_mup_pane_g1

0x5503,	// (0x0002a359) main_mup_pane_g2_ParamLimits

0x5503,	// (0x0002a359) main_mup_pane_g2

0x551b,	// (0x0002a371) main_mup_pane_g3_ParamLimits

0x551b,	// (0x0002a371) main_mup_pane_g3

0x5533,	// (0x0002a389) main_mup_pane_g4_ParamLimits

0x5533,	// (0x0002a389) main_mup_pane_g4

0x554b,	// (0x0002a3a1) main_mup_pane_g5_ParamLimits

0x554b,	// (0x0002a3a1) main_mup_pane_g5

0x5567,	// (0x0002a3bd) main_mup_pane_g6_ParamLimits

0x5567,	// (0x0002a3bd) main_mup_pane_g6

0x557f,	// (0x0002a3d5) main_mup_pane_g7_ParamLimits

0x557f,	// (0x0002a3d5) main_mup_pane_g7

0x5597,	// (0x0002a3ed) main_mup_pane_g8_ParamLimits

0x5597,	// (0x0002a3ed) main_mup_pane_g8

0x55b1,	// (0x0002a407) main_mup_pane_g9_ParamLimits

0x55b1,	// (0x0002a407) main_mup_pane_g9

0x55cb,	// (0x0002a421) main_mup_pane_g10_ParamLimits

0x55cb,	// (0x0002a421) main_mup_pane_g10

0x55e5,	// (0x0002a43b) main_mup_pane_g11_ParamLimits

0x55e5,	// (0x0002a43b) main_mup_pane_g11

0x55f9,	// (0x0002a44f) main_mup_pane_g12_ParamLimits

0x55f9,	// (0x0002a44f) main_mup_pane_g12

0x560f,	// (0x0002a465) main_mup_pane_g13_ParamLimits

0x560f,	// (0x0002a465) main_mup_pane_g13

0x000c,

0xf44d,	// (0x000342a3) main_mup_pane_g_ParamLimits

0xf44d,	// (0x000342a3) main_mup_pane_g

0x5623,	// (0x0002a479) main_mup_pane_t1_ParamLimits

0x5623,	// (0x0002a479) main_mup_pane_t1

0x563d,	// (0x0002a493) main_mup_pane_t2_ParamLimits

0x563d,	// (0x0002a493) main_mup_pane_t2

0x5655,	// (0x0002a4ab) main_mup_pane_t3_ParamLimits

0x5655,	// (0x0002a4ab) main_mup_pane_t3

0x566d,	// (0x0002a4c3) main_mup_pane_t4_ParamLimits

0x566d,	// (0x0002a4c3) main_mup_pane_t4

0x568b,	// (0x0002a4e1) main_mup_pane_t5_ParamLimits

0x568b,	// (0x0002a4e1) main_mup_pane_t5

0x56a0,	// (0x0002a4f6) main_mup_pane_t6_ParamLimits

0x56a0,	// (0x0002a4f6) main_mup_pane_t6

0x0005,

0xf468,	// (0x000342be) main_mup_pane_t_ParamLimits

0xf468,	// (0x000342be) main_mup_pane_t

0x56b2,	// (0x0002a508) mup_progress_pane_ParamLimits

0x56b2,	// (0x0002a508) mup_progress_pane

0x56be,	// (0x0002a514) mup_visualizer_pane_ParamLimits

0x56be,	// (0x0002a514) mup_visualizer_pane

0x56ee,	// (0x0002a544) mup_volume_pane_ParamLimits

0x56ee,	// (0x0002a544) mup_volume_pane

0x570c,	// (0x0002a562) mup_visualizer_pane_g1_ParamLimits

0x570c,	// (0x0002a562) mup_visualizer_pane_g1

0x570c,	// (0x0002a562) mup_visualizer_pane_g2_ParamLimits

0x570c,	// (0x0002a562) mup_visualizer_pane_g2

0x51d8,	// (0x0002a02e) mup_visualizer_pane_g3_ParamLimits

0x51d8,	// (0x0002a02e) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x000342cb) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x000342cb) mup_visualizer_pane_g

0x3079,	// (0x00027ecf) mup_volume_pane_g1

0x5722,	// (0x0002a578) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x000342d2) mup_volume_pane_g

0x3079,	// (0x00027ecf) mup_progress_pane_g1

0x572b,	// (0x0002a581) mup_progress_pane_g2

0x5734,	// (0x0002a58a) mup_progress_pane_g3

0x0002,

0xf481,	// (0x000342d7) mup_progress_pane_g

0x2aa0,	// (0x000278f6) bg_popup_window_pane_cp05

0x573d,	// (0x0002a593) heading_pane_cp02_ParamLimits

0x573d,	// (0x0002a593) heading_pane_cp02

0x5757,	// (0x0002a5ad) list_popup_blid_pane

0x575f,	// (0x0002a5b5) list_blid_sat_info_pane_ParamLimits

0x575f,	// (0x0002a5b5) list_blid_sat_info_pane

0x5772,	// (0x0002a5c8) list_blid_sat_info_pane_g1

0x577a,	// (0x0002a5d0) list_blid_sat_info_pane_t1

0x5880,	// (0x0002a6d6) mup_equalizer_pane_ParamLimits

0x5880,	// (0x0002a6d6) mup_equalizer_pane

0x5899,	// (0x0002a6ef) mup_equalizer_pane_cp1_ParamLimits

0x5899,	// (0x0002a6ef) mup_equalizer_pane_cp1

0x58b6,	// (0x0002a70c) mup_equalizer_pane_cp2_ParamLimits

0x58b6,	// (0x0002a70c) mup_equalizer_pane_cp2

0x58d3,	// (0x0002a729) mup_equalizer_pane_cp3_ParamLimits

0x58d3,	// (0x0002a729) mup_equalizer_pane_cp3

0x58f4,	// (0x0002a74a) mup_equalizer_pane_cp4_ParamLimits

0x58f4,	// (0x0002a74a) mup_equalizer_pane_cp4

0x5915,	// (0x0002a76b) mup_equalizer_pane_cp5

0x5929,	// (0x0002a77f) mup_equalizer_pane_cp6

0x593d,	// (0x0002a793) mup_equalizer_pane_cp7

0xbdc2,	// (0x00030c18) bg_popup_call_poc_act_pane_g9

0xbdca,	// (0x00030c20) bg_popup_call_poc_act_pane_g10

0xbdd2,	// (0x00030c28) bg_popup_call_poc_act_pane_g11

0x000a,

0x2cfb,	// (0x00027b51) mup_scale_pane

0x3079,	// (0x00027ecf) mup_scale_pane_g1

0x5951,	// (0x0002a7a7) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x000342f3) mup_scale_pane_g

0x5987,	// (0x0002a7dd) msg_data_pane

0x598f,	// (0x0002a7e5) scroll_pane_cp017

0x5997,	// (0x0002a7ed) bg_list_pane_cp04_ParamLimits

0x5997,	// (0x0002a7ed) bg_list_pane_cp04

0x59b7,	// (0x0002a80d) msg_data_pane_g1

0x59bf,	// (0x0002a815) msg_data_pane_g2

0x59c9,	// (0x0002a81f) msg_data_pane_g3

0x59d1,	// (0x0002a827) msg_data_pane_g4

0x59d9,	// (0x0002a82f) msg_data_pane_g5

0x59e1,	// (0x0002a837) msg_data_pane_g6

0x59e9,	// (0x0002a83f) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00034302) msg_data_pane_g

0x59f1,	// (0x0002a847) msg_text_pane_ParamLimits

0x59f1,	// (0x0002a847) msg_text_pane

0x5a15,	// (0x0002a86b) qrid_highlight_pane_cp011_ParamLimits

0x5a15,	// (0x0002a86b) qrid_highlight_pane_cp011

0x2aa0,	// (0x000278f6) msg_body_pane

0x2aa0,	// (0x000278f6) msg_header_pane

0x5a34,	// (0x0002a88a) input_focus_pane_cp07

0x5a57,	// (0x0002a8ad) msg_header_pane_t1_ParamLimits

0x5a57,	// (0x0002a8ad) msg_header_pane_t1

0x5a6b,	// (0x0002a8c1) msg_header_pane_t2_ParamLimits

0x5a6b,	// (0x0002a8c1) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00034316) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00034316) msg_header_pane_t

0x5a7d,	// (0x0002a8d3) msg_body_pane_g1

0x5a85,	// (0x0002a8db) msg_body_pane_t1_ParamLimits

0x5a85,	// (0x0002a8db) msg_body_pane_t1

0x5ab6,	// (0x0002a90c) msg_body_pane_t2_ParamLimits

0x5ab6,	// (0x0002a90c) msg_body_pane_t2

0x5ac8,	// (0x0002a91e) msg_body_pane_t3_ParamLimits

0x5ac8,	// (0x0002a91e) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0003431b) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0003431b) msg_body_pane_t

0x1332,	// (0x00026188) main_viewer_pane_g1_ParamLimits

0x1332,	// (0x00026188) main_viewer_pane_g1

0x1340,	// (0x00026196) main_viewer_pane_g2_ParamLimits

0x1340,	// (0x00026196) main_viewer_pane_g2

0x5af8,	// (0x0002a94e) main_viewer_pane_g3_ParamLimits

0x5af8,	// (0x0002a94e) main_viewer_pane_g3

0x5b07,	// (0x0002a95d) main_viewer_pane_g4_ParamLimits

0x5b07,	// (0x0002a95d) main_viewer_pane_g4

0xaebc,	// (0x0002fd12) main_viewer_pane_g5_ParamLimits

0xaebc,	// (0x0002fd12) main_viewer_pane_g5

0xaebc,	// (0x0002fd12) main_viewer_pane_g7_ParamLimits

0xaebc,	// (0x0002fd12) main_viewer_pane_g7

0x4ae9,	// (0x0002993f) main_viewer_pane_g8_ParamLimits

0x4ae9,	// (0x0002993f) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0003432b) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0003432b) main_viewer_pane_g

0x5b16,	// (0x0002a96c) viewer_content_pane_ParamLimits

0x5b16,	// (0x0002a96c) viewer_content_pane

0x5b51,	// (0x0002a9a7) main_postcard_pane_g1_ParamLimits

0x5b51,	// (0x0002a9a7) main_postcard_pane_g1

0x5b67,	// (0x0002a9bd) main_postcard_pane_g2_ParamLimits

0x5b67,	// (0x0002a9bd) main_postcard_pane_g2

0x5b7d,	// (0x0002a9d3) main_postcard_pane_g3_ParamLimits

0x5b7d,	// (0x0002a9d3) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0003433c) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0003433c) main_postcard_pane_g

0x5b94,	// (0x0002a9ea) main_postcard_pane_g4

0xbfd7,	// (0x00030e2d) smil_status_volume_pane_g2

0x5bd7,	// (0x0002aa2d) postcard_pane_ParamLimits

0x5bd7,	// (0x0002aa2d) postcard_pane

0x5c19,	// (0x0002aa6f) postcard_pane_g1_ParamLimits

0x5c19,	// (0x0002aa6f) postcard_pane_g1

0x5c27,	// (0x0002aa7d) postcard_pane_g2_ParamLimits

0x5c27,	// (0x0002aa7d) postcard_pane_g2

0x5c33,	// (0x0002aa89) postcard_pane_g3_ParamLimits

0x5c33,	// (0x0002aa89) postcard_pane_g3

0x5c3f,	// (0x0002aa95) postcard_pane_g4_ParamLimits

0x5c3f,	// (0x0002aa95) postcard_pane_g4

0x5c4d,	// (0x0002aaa3) postcard_pane_g5_ParamLimits

0x5c4d,	// (0x0002aaa3) postcard_pane_g5

0x5c62,	// (0x0002aab8) postcard_pane_g6_ParamLimits

0x5c62,	// (0x0002aab8) postcard_pane_g6

0x5c19,	// (0x0002aa6f) postcard_pane_g7_ParamLimits

0x5c19,	// (0x0002aa6f) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00034349) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00034349) postcard_pane_g

0x5c76,	// (0x0002aacc) main_mp2_pane_g1_ParamLimits

0x5c76,	// (0x0002aacc) main_mp2_pane_g1

0x5c82,	// (0x0002aad8) main_mp2_pane_g2_ParamLimits

0x5c82,	// (0x0002aad8) main_mp2_pane_g2

0x5c8e,	// (0x0002aae4) main_mp2_pane_g3_ParamLimits

0x5c8e,	// (0x0002aae4) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00034358) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00034358) main_mp2_pane_g

0x5c9a,	// (0x0002aaf0) main_mp2_pane_t1_ParamLimits

0x5c9a,	// (0x0002aaf0) main_mp2_pane_t1

0x5caf,	// (0x0002ab05) main_mp2_pane_t2_ParamLimits

0x5caf,	// (0x0002ab05) main_mp2_pane_t2

0x5cc1,	// (0x0002ab17) main_mp2_pane_t3_ParamLimits

0x5cc1,	// (0x0002ab17) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0003435f) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0003435f) main_mp2_pane_t

0x5cd3,	// (0x0002ab29) pec_content_pane_ParamLimits

0x5cd3,	// (0x0002ab29) pec_content_pane

0x3f04,	// (0x00028d5a) scroll_pane_cp015

0x5ce5,	// (0x0002ab3b) pec_attribute_pane_ParamLimits

0x5ce5,	// (0x0002ab3b) pec_attribute_pane

0x5cf5,	// (0x0002ab4b) pec_content_pane_g1_ParamLimits

0x5cf5,	// (0x0002ab4b) pec_content_pane_g1

0x5d01,	// (0x0002ab57) pec_content_pane_t1_ParamLimits

0x5d01,	// (0x0002ab57) pec_content_pane_t1

0x5d13,	// (0x0002ab69) pec_content_pane_t2_ParamLimits

0x5d13,	// (0x0002ab69) pec_content_pane_t2

0x0001,

0xf510,	// (0x00034366) pec_content_pane_t_ParamLimits

0xf510,	// (0x00034366) pec_content_pane_t

0x5d25,	// (0x0002ab7b) list_single_graphic_pane_cp01_ParamLimits

0x5d25,	// (0x0002ab7b) list_single_graphic_pane_cp01

0x2cfb,	// (0x00027b51) bg_popup_sub_pane_cp04

0x5d3a,	// (0x0002ab90) popup_mup_playback_window_g1

0x5d46,	// (0x0002ab9c) popup_mup_playback_window_t1

0x5d5b,	// (0x0002abb1) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0003436b) popup_mup_playback_window_t

0x5db0,	// (0x0002ac06) main_image_pane_g1_ParamLimits

0x5db0,	// (0x0002ac06) main_image_pane_g1

0x5e8d,	// (0x0002ace3) scroll_pane_cp018_ParamLimits

0x5e8d,	// (0x0002ace3) scroll_pane_cp018

0x5ea5,	// (0x0002acfb) scroll_pane_cp016_ParamLimits

0x5ea5,	// (0x0002acfb) scroll_pane_cp016

0x5ed9,	// (0x0002ad2f) smil2_image_pane_ParamLimits

0x5ed9,	// (0x0002ad2f) smil2_image_pane

0x5f09,	// (0x0002ad5f) smil2_root_pane_ParamLimits

0x5f09,	// (0x0002ad5f) smil2_root_pane

0x5f41,	// (0x0002ad97) smil2_text_pane_ParamLimits

0x5f41,	// (0x0002ad97) smil2_text_pane

0x2aa0,	// (0x000278f6) bg_list_pane_cp06

0x5fc9,	// (0x0002ae1f) grid_radio_pane

0x2aa0,	// (0x000278f6) bg_popup_window_pane_cp06

0x5fd1,	// (0x0002ae27) main_fmradio_pane_t1

0x4e49,	// (0x00029c9f) heading_pane_cp04

0x5fdf,	// (0x0002ae35) main_fmradio_pane_t2

0xbdda,	// (0x00030c30) popup_cale_lunar_info_window_g1

0x5fed,	// (0x0002ae43) main_fmradio_pane_t3

0xbde2,	// (0x00030c38) popup_cale_lunar_info_window_g2

0x5ffb,	// (0x0002ae51) main_fmradio_pane_t4

0x0001,

0x6009,	// (0x0002ae5f) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x00034446) popup_cale_lunar_info_window_g

0xf52a,	// (0x00034380) main_fmradio_pane_t

0x6017,	// (0x0002ae6d) wait_bar_pane_cp03

0x601f,	// (0x0002ae75) cell_fmradio_pane_ParamLimits

0x601f,	// (0x0002ae75) cell_fmradio_pane

0x5c19,	// (0x0002aa6f) cell_fmradio_pane_g1_ParamLimits

0x5c19,	// (0x0002aa6f) cell_fmradio_pane_g1

0x2aa0,	// (0x000278f6) grid_highlight_pane_cp011

0x6032,	// (0x0002ae88) poc_content_pane_ParamLimits

0x6032,	// (0x0002ae88) poc_content_pane

0x6044,	// (0x0002ae9a) scroll_pane_cp019

0x604c,	// (0x0002aea2) popup_call_poc_act_window_ParamLimits

0x604c,	// (0x0002aea2) popup_call_poc_act_window

0x6070,	// (0x0002aec6) popup_call_poc_inact_window_ParamLimits

0x6070,	// (0x0002aec6) popup_call_poc_inact_window

0xf5c7,	// (0x0003441d) bg_popup_call_poc_act_pane_g

0xbd52,	// (0x00030ba8) bg_popup_call_poc_inact_pane_g1

0xbd5a,	// (0x00030bb0) bg_popup_call_poc_inact_pane_g2

0x6089,	// (0x0002aedf) popup_call_poc_act_window_g2

0xbd62,	// (0x00030bb8) bg_popup_call_poc_inact_pane_g3

0xbd6a,	// (0x00030bc0) bg_popup_call_poc_inact_pane_g4

0xbd72,	// (0x00030bc8) bg_popup_call_poc_inact_pane_g5

0x6091,	// (0x0002aee7) popup_call_poc_act_window_t1_ParamLimits

0x6091,	// (0x0002aee7) popup_call_poc_act_window_t1

0x60b9,	// (0x0002af0f) popup_call_poc_act_window_t2_ParamLimits

0x60b9,	// (0x0002af0f) popup_call_poc_act_window_t2

0xaeda,	// (0x0002fd30) popup_call_poc_act_window_t3_ParamLimits

0xaeda,	// (0x0002fd30) popup_call_poc_act_window_t3

0xaf02,	// (0x0002fd58) popup_call_poc_act_window_t4_ParamLimits

0xaf02,	// (0x0002fd58) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0003438b) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0003438b) popup_call_poc_act_window_t

0xbd7a,	// (0x00030bd0) bg_popup_call_poc_inact_pane_g6

0xbd82,	// (0x00030bd8) bg_popup_call_poc_inact_pane_g7

0xbd8a,	// (0x00030be0) bg_popup_call_poc_inact_pane_g8

0xaf14,	// (0x0002fd6a) popup_call_poc_inact_window_g2

0xbd92,	// (0x00030be8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0003440a) bg_popup_call_poc_inact_pane_g

0xaf1c,	// (0x0002fd72) popup_call_poc_inact_window_t1_ParamLimits

0xaf1c,	// (0x0002fd72) popup_call_poc_inact_window_t1

0xaf31,	// (0x0002fd87) popup_call_poc_inact_window_t2_ParamLimits

0xaf31,	// (0x0002fd87) popup_call_poc_inact_window_t2

0xaf46,	// (0x0002fd9c) popup_call_poc_inact_window_t3_ParamLimits

0xaf46,	// (0x0002fd9c) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00034394) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00034394) popup_call_poc_inact_window_t

0xbf4a,	// (0x00030da0) context_pane_ParamLimits

0x68fb,	// (0x0002b751) signal_pane_ParamLimits

0x541e,	// (0x0002a274) main_call2_pane

0xbf38,	// (0x00030d8e) popup_phob_thumbnail2_window_ParamLimits

0xbf38,	// (0x00030d8e) popup_phob_thumbnail2_window

0xaea4,	// (0x0002fcfa) aid_hotspot_pointer_arrow_pane

0xaeac,	// (0x0002fd02) aid_hotspot_pointer_hand_pane

0x6411,	// (0x0002b267) phob_pre_status_pane_g5

0x3627,	// (0x0002847d) cams_zoom_pane_ParamLimits

0x3636,	// (0x0002848c) image_vga_pane_ParamLimits

0x3650,	// (0x000284a6) main_camera_pane_g1_ParamLimits

0x3662,	// (0x000284b8) main_camera_pane_g2_ParamLimits

0x3672,	// (0x000284c8) main_camera_pane_g3_ParamLimits

0x3682,	// (0x000284d8) main_camera_pane_g4_ParamLimits

0x3692,	// (0x000284e8) main_camera_pane_g5_ParamLimits

0x36a2,	// (0x000284f8) main_camera_pane_g6_ParamLimits

0x36b4,	// (0x0002850a) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00034093) main_camera_pane_g_ParamLimits

0x36d0,	// (0x00028526) main_camera_pane_t1_ParamLimits

0x36e6,	// (0x0002853c) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x000340a4) main_camera_pane_t_ParamLimits

0x2cfb,	// (0x00027b51) bg_popup_preview_window_pane_cp01_ParamLimits

0x2cfb,	// (0x00027b51) bg_popup_preview_window_pane_cp01

0xaf5b,	// (0x0002fdb1) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf5b,	// (0x0002fdb1) popup_phob_thumbnail2_window_g1

0x2aa0,	// (0x000278f6) call2_cli_visual_pane

0x60fc,	// (0x0002af52) popup_call2_audio_conf_window_ParamLimits

0x60fc,	// (0x0002af52) popup_call2_audio_conf_window

0x611c,	// (0x0002af72) popup_call2_audio_first_window_ParamLimits

0x611c,	// (0x0002af72) popup_call2_audio_first_window

0x61b2,	// (0x0002b008) popup_call2_audio_in_window_ParamLimits

0x61b2,	// (0x0002b008) popup_call2_audio_in_window

0x61fa,	// (0x0002b050) popup_call2_audio_out_window_ParamLimits

0x61fa,	// (0x0002b050) popup_call2_audio_out_window

0x6264,	// (0x0002b0ba) popup_call2_audio_second_window_ParamLimits

0x6264,	// (0x0002b0ba) popup_call2_audio_second_window

0x62ca,	// (0x0002b120) popup_call2_audio_wait_window_ParamLimits

0x62ca,	// (0x0002b120) popup_call2_audio_wait_window

0x2aa0,	// (0x000278f6) bg_popup_call2_act_pane_cp03

0x2cdd,	// (0x00027b33) list_conf_pane_cp

0xaf67,	// (0x0002fdbd) popup_call2_audio_conf_window_t1

0x4eca,	// (0x00029d20) list_single_graphic_popup_conf2_pane_ParamLimits

0x4eca,	// (0x00029d20) list_single_graphic_popup_conf2_pane

0x4edd,	// (0x00029d33) list_highlight_pane_cp04

0xaf75,	// (0x0002fdcb) list_single_graphic_popup_conf2_pane_g1

0x4eee,	// (0x00029d44) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0003439b) list_single_graphic_popup_conf2_pane_g

0xaf7f,	// (0x0002fdd5) list_single_graphic_popup_conf2_pane_t1

0xaf8d,	// (0x0002fde3) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf8d,	// (0x0002fde3) bg_popup_call2_act_pane_cp01

0xb017,	// (0x0002fe6d) call_type_pane_cp05_ParamLimits

0xb017,	// (0x0002fe6d) call_type_pane_cp05

0xb06b,	// (0x0002fec1) popup_call2_audio_second_window_g1_ParamLimits

0xb06b,	// (0x0002fec1) popup_call2_audio_second_window_g1

0xb0bf,	// (0x0002ff15) popup_call2_audio_second_window_g2_ParamLimits

0xb0bf,	// (0x0002ff15) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x000343a0) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x000343a0) popup_call2_audio_second_window_g

0xb124,	// (0x0002ff7a) popup_call2_audio_second_window_t1_ParamLimits

0xb124,	// (0x0002ff7a) popup_call2_audio_second_window_t1

0xb1df,	// (0x00030035) popup_call2_audio_second_window_t2_ParamLimits

0xb1df,	// (0x00030035) popup_call2_audio_second_window_t2

0xb232,	// (0x00030088) popup_call2_audio_second_window_t3_ParamLimits

0xb232,	// (0x00030088) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x000343a7) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x000343a7) popup_call2_audio_second_window_t

0x2aa0,	// (0x000278f6) bg_popup_call2_in_pane_cp02

0x2aaa,	// (0x00027900) call_type_pane_cp04

0x2ab2,	// (0x00027908) popup_call2_audio_wait_window_g1

0x2aba,	// (0x00027910) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00033f80) popup_call2_audio_wait_window_g

0x2ac2,	// (0x00027918) popup_call2_audio_wait_window_t3

0xb325,	// (0x0003017b) bg_popup_call2_act_pane_ParamLimits

0xb325,	// (0x0003017b) bg_popup_call2_act_pane

0xb3e5,	// (0x0003023b) call_type_pane_cp03_ParamLimits

0xb3e5,	// (0x0003023b) call_type_pane_cp03

0xb449,	// (0x0003029f) popup_call2_audio_first_window_g1_ParamLimits

0xb449,	// (0x0003029f) popup_call2_audio_first_window_g1

0xb4b9,	// (0x0003030f) popup_call2_audio_first_window_g2_ParamLimits

0xb4b9,	// (0x0003030f) popup_call2_audio_first_window_g2

0x570c,	// (0x0002a562) popup_call2_audio_first_window_g3_ParamLimits

0x570c,	// (0x0002a562) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x000343b0) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x000343b0) popup_call2_audio_first_window_g

0xb597,	// (0x000303ed) popup_call2_audio_first_window_t1_ParamLimits

0xb597,	// (0x000303ed) popup_call2_audio_first_window_t1

0xb69a,	// (0x000304f0) popup_call2_audio_first_window_t4_ParamLimits

0xb69a,	// (0x000304f0) popup_call2_audio_first_window_t4

0xb77d,	// (0x000305d3) popup_call2_audio_first_window_t5_ParamLimits

0xb77d,	// (0x000305d3) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x000343bb) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x000343bb) popup_call2_audio_first_window_t

0x2cf3,	// (0x00027b49) bg_popup_call2_act_pane_g1

0xbdea,	// (0x00030c40) popup_cale_lunar_info_window_t1

0xbdf8,	// (0x00030c4e) popup_cale_lunar_info_window_t2

0xbe06,	// (0x00030c5c) popup_cale_lunar_info_window_t3

0x2aa0,	// (0x000278f6) bg_popup_call2_bubble_pane

0xb87e,	// (0x000306d4) bg_popup_call2_in_pane_cp01_ParamLimits

0xb87e,	// (0x000306d4) bg_popup_call2_in_pane_cp01

0x2758,	// (0x000275ae) call_type_pane_cp02

0xb8c6,	// (0x0003071c) popup_call2_audio_out_window_g1_ParamLimits

0xb8c6,	// (0x0003071c) popup_call2_audio_out_window_g1

0xb8f2,	// (0x00030748) popup_call2_audio_out_window_g2_ParamLimits

0xb8f2,	// (0x00030748) popup_call2_audio_out_window_g2

0xb91a,	// (0x00030770) popup_call2_audio_out_window_g3_ParamLimits

0xb91a,	// (0x00030770) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x000343c4) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x000343c4) popup_call2_audio_out_window_g

0xb955,	// (0x000307ab) popup_call2_audio_out_window_t1_ParamLimits

0xb955,	// (0x000307ab) popup_call2_audio_out_window_t1

0xb9b4,	// (0x0003080a) popup_call2_audio_out_window_t2_ParamLimits

0xb9b4,	// (0x0003080a) popup_call2_audio_out_window_t2

0xba08,	// (0x0003085e) popup_call2_audio_out_window_t3_ParamLimits

0xba08,	// (0x0003085e) popup_call2_audio_out_window_t3

0xba1e,	// (0x00030874) popup_call2_audio_out_window_t4_ParamLimits

0xba1e,	// (0x00030874) popup_call2_audio_out_window_t4

0xba34,	// (0x0003088a) popup_call2_audio_out_window_t5_ParamLimits

0xba34,	// (0x0003088a) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x000343cd) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x000343cd) popup_call2_audio_out_window_t

0xba98,	// (0x000308ee) bg_popup_call2_in_pane_ParamLimits

0xba98,	// (0x000308ee) bg_popup_call2_in_pane

0xbaf4,	// (0x0003094a) popup_call2_audio_in_window_g1_ParamLimits

0xbaf4,	// (0x0003094a) popup_call2_audio_in_window_g1

0xbb2c,	// (0x00030982) popup_call2_audio_in_window_g2_ParamLimits

0xbb2c,	// (0x00030982) popup_call2_audio_in_window_g2

0xbb64,	// (0x000309ba) popup_call2_audio_in_window_g3_ParamLimits

0xbb64,	// (0x000309ba) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x000343da) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x000343da) popup_call2_audio_in_window_g

0xbbbc,	// (0x00030a12) popup_call2_audio_in_window_t1_ParamLimits

0xbbbc,	// (0x00030a12) popup_call2_audio_in_window_t1

0xbc3c,	// (0x00030a92) popup_call2_audio_in_window_t2_ParamLimits

0xbc3c,	// (0x00030a92) popup_call2_audio_in_window_t2

0xbcbc,	// (0x00030b12) popup_call2_audio_in_window_t3_ParamLimits

0xbcbc,	// (0x00030b12) popup_call2_audio_in_window_t3

0xbcd6,	// (0x00030b2c) popup_call2_audio_in_window_t4_ParamLimits

0xbcd6,	// (0x00030b2c) popup_call2_audio_in_window_t4

0xbce8,	// (0x00030b3e) popup_call2_audio_in_window_t5_ParamLimits

0xbce8,	// (0x00030b3e) popup_call2_audio_in_window_t5

0xbcfd,	// (0x00030b53) popup_call2_audio_in_window_t6_ParamLimits

0xbcfd,	// (0x00030b53) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x000343e3) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x000343e3) popup_call2_audio_in_window_t

0x2cf3,	// (0x00027b49) bg_popup_call2_in_pane_g1

0xbe14,	// (0x00030c6a) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0003444b) popup_cale_lunar_info_window_t

0x2cfb,	// (0x00027b51) bg_popup_call2_rect_pane_ParamLimits

0x2cfb,	// (0x00027b51) bg_popup_call2_rect_pane

0x2aa0,	// (0x000278f6) call2_cli_visual_graphic_pane

0x2aa0,	// (0x000278f6) call2_cli_visual_text_pane

0xbfea,	// (0x00030e40) smil_status_volume_pane_g3

0x0002,

0x3079,	// (0x00027ecf) call2_cli_visual_graphic_pane_g1

0x3079,	// (0x00027ecf) call2_cli_visual_graphic_pane_g2

0x3079,	// (0x00027ecf) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x000343f0) call2_cli_visual_graphic_pane_g

0xbd12,	// (0x00030b68) bg_popup_call2_rect_pane_g1

0x3192,	// (0x00027fe8) bg_popup_call2_rect_pane_g2

0xbd1a,	// (0x00030b70) bg_popup_call2_rect_pane_g3

0xbd22,	// (0x00030b78) bg_popup_call2_rect_pane_g4

0xbd2a,	// (0x00030b80) bg_popup_call2_rect_pane_g5

0xbd32,	// (0x00030b88) bg_popup_call2_rect_pane_g6

0xbd3a,	// (0x00030b90) bg_popup_call2_rect_pane_g7

0xbd42,	// (0x00030b98) bg_popup_call2_rect_pane_g8

0xbd4a,	// (0x00030ba0) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x000343f7) bg_popup_call2_rect_pane_g

0xbd52,	// (0x00030ba8) bg_popup_call2_bubble_pane_g1

0xbd5a,	// (0x00030bb0) bg_popup_call2_bubble_pane_g2

0xbd62,	// (0x00030bb8) bg_popup_call2_bubble_pane_g3

0xbd6a,	// (0x00030bc0) bg_popup_call2_bubble_pane_g4

0xbd72,	// (0x00030bc8) bg_popup_call2_bubble_pane_g5

0xbd7a,	// (0x00030bd0) bg_popup_call2_bubble_pane_g6

0xbd82,	// (0x00030bd8) bg_popup_call2_bubble_pane_g7

0xbd8a,	// (0x00030be0) bg_popup_call2_bubble_pane_g8

0xbd92,	// (0x00030be8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0003440a) bg_popup_call2_bubble_pane_g

0x3210,	// (0x00028066) aid_cale_week_size_cell_pane

0x36fc,	// (0x00028552) aid_cams_cif_uncrop_pane_ParamLimits

0x36fc,	// (0x00028552) aid_cams_cif_uncrop_pane

0x38f3,	// (0x00028749) aid_cams_size_cell_ParamLimits

0x38f3,	// (0x00028749) aid_cams_size_cell

0x3907,	// (0x0002875d) grid_cams_pane_ParamLimits

0x3921,	// (0x00028777) linegrid_cams_pane_ParamLimits

0x3b30,	// (0x00028986) call_video_pane_t1

0x3b42,	// (0x00028998) call_video_pane_t2

0x0001,

0xf2a1,	// (0x000340f7) call_video_pane_t

0x4143,	// (0x00028f99) aid_cale_month_size_cell_pane_ParamLimits

0x4143,	// (0x00028f99) aid_cale_month_size_cell_pane

0xf63e,	// (0x00034494) smil_status_volume_pane_g

0xbff7,	// (0x00030e4d) volume_smil_pane_ParamLimits

0x235f,	// (0x000271b5) aid_popup2_width_pane

0x30ea,	// (0x00027f40) cell_qdial_pane_g4_ParamLimits

0x30ea,	// (0x00027f40) cell_qdial_pane_g4

0x51b8,	// (0x0002a00e) aid_blid_cardinal_pane_ParamLimits

0x51c4,	// (0x0002a01a) aid_blid_destination_pane_ParamLimits

0x51c4,	// (0x0002a01a) aid_blid_destination_pane

0x2cfb,	// (0x00027b51) bg_popup_call_poc_act_pane_ParamLimits

0x2cfb,	// (0x00027b51) bg_popup_call_poc_act_pane

0x2cfb,	// (0x00027b51) bg_popup_call_poc_inact_pane_ParamLimits

0x2cfb,	// (0x00027b51) bg_popup_call_poc_inact_pane

0xbd9a,	// (0x00030bf0) bg_popup_call_poc_act_pane_g1

0xbda2,	// (0x00030bf8) bg_popup_call_poc_act_pane_g2

0xbdaa,	// (0x00030c00) bg_popup_call_poc_act_pane_g3

0xbd6a,	// (0x00030bc0) bg_popup_call_poc_act_pane_g4

0xbd72,	// (0x00030bc8) bg_popup_call_poc_act_pane_g5

0xbdb2,	// (0x00030c08) bg_popup_call_poc_act_pane_g6

0xbd82,	// (0x00030bd8) bg_popup_call_poc_act_pane_g7

0xbdba,	// (0x00030c10) bg_popup_call_poc_act_pane_g8

0x2aa0,	// (0x000278f6) main_usb_pane

0xbf13,	// (0x00030d69) popup_cale_lunar_info_window

0x3deb,	// (0x00028c41) im_reading_pane_t1_ParamLimits

0x3e24,	// (0x00028c7a) list_im_pane_ParamLimits

0x3e35,	// (0x00028c8b) scroll_pane_cp07_ParamLimits

0x2aa0,	// (0x000278f6) grid_highlight_pane_cp012

0x2cfb,	// (0x00027b51) mup_scale_pane_ParamLimits

0x5c19,	// (0x0002aa6f) main_usb_pane_g1_ParamLimits

0x5c19,	// (0x0002aa6f) main_usb_pane_g1

0x6326,	// (0x0002b17c) main_usb_pane_g2_ParamLimits

0x6326,	// (0x0002b17c) main_usb_pane_g2

0x0001,

0xf5de,	// (0x00034434) main_usb_pane_g_ParamLimits

0xf5de,	// (0x00034434) main_usb_pane_g

0x633c,	// (0x0002b192) main_usb_pane_t1_ParamLimits

0x633c,	// (0x0002b192) main_usb_pane_t1

0x634e,	// (0x0002b1a4) main_usb_pane_t2_ParamLimits

0x634e,	// (0x0002b1a4) main_usb_pane_t2

0x6360,	// (0x0002b1b6) main_usb_pane_t3_ParamLimits

0x6360,	// (0x0002b1b6) main_usb_pane_t3

0x6372,	// (0x0002b1c8) main_usb_pane_t4_ParamLimits

0x6372,	// (0x0002b1c8) main_usb_pane_t4

0x6384,	// (0x0002b1da) main_usb_pane_t5_ParamLimits

0x6384,	// (0x0002b1da) main_usb_pane_t5

0x6396,	// (0x0002b1ec) main_usb_pane_t6_ParamLimits

0x6396,	// (0x0002b1ec) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x00034439) main_usb_pane_t_ParamLimits

0x5167,	// (0x00029fbd) aid_text_placing

0x5170,	// (0x00029fc6) main_location2_pane_t1_ParamLimits

0x5182,	// (0x00029fd8) main_location2_pane_t2_ParamLimits

0x5194,	// (0x00029fea) main_location2_pane_t3_ParamLimits

0x51a6,	// (0x00029ffc) main_location2_pane_t4_ParamLimits

0x51a6,	// (0x00029ffc) main_location2_pane_t4

0xf402,	// (0x00034258) main_location2_pane_t_ParamLimits

0x2dd3,	// (0x00027c29) find_pinb_pane_g2_ParamLimits

0x2dd3,	// (0x00027c29) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00033fa6) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00033fa6) find_pinb_pane_g

0x2ddf,	// (0x00027c35) find_pinb_pane_t1_ParamLimits

0x2df1,	// (0x00027c47) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00033fab) find_pinb_pane_t_ParamLimits

0x2aa0,	// (0x000278f6) main_call3_pane

0x4474,	// (0x000292ca) cale_month_day_heading_pane_t1_ParamLimits

0x44d2,	// (0x00029328) cale_month_day_heading_pane_t2_ParamLimits

0x4537,	// (0x0002938d) cale_month_day_heading_pane_t3_ParamLimits

0x459c,	// (0x000293f2) cale_month_day_heading_pane_t4_ParamLimits

0x4601,	// (0x00029457) cale_month_day_heading_pane_t5_ParamLimits

0x4666,	// (0x000294bc) cale_month_day_heading_pane_t6_ParamLimits

0x46cb,	// (0x00029521) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0003412f) cale_month_day_heading_pane_t_ParamLimits

0x48b5,	// (0x0002970b) smil_status_volume_pane

0x5bf5,	// (0x0002aa4b) postcard_address_pane_ParamLimits

0x5bf5,	// (0x0002aa4b) postcard_address_pane

0x5c07,	// (0x0002aa5d) postcard_message_pane_ParamLimits

0x5c07,	// (0x0002aa5d) postcard_message_pane

0x6304,	// (0x0002b15a) call2_cli_visual_pane_t1_ParamLimits

0x6304,	// (0x0002b15a) call2_cli_visual_pane_t1

0x6b28,	// (0x0002b97e) postcard_message_pane_t1_ParamLimits

0x6b28,	// (0x0002b97e) postcard_message_pane_t1

0x6b11,	// (0x0002b967) postcard_address_pane_t1_ParamLimits

0x6b11,	// (0x0002b967) postcard_address_pane_t1

0x6afd,	// (0x0002b953) popup_call3_audio_in_window_ParamLimits

0x6afd,	// (0x0002b953) popup_call3_audio_in_window

0x6988,	// (0x0002b7de) bg_popup_call3_in_pane_ParamLimits

0x6988,	// (0x0002b7de) bg_popup_call3_in_pane

0x69fe,	// (0x0002b854) popup_call3_audio_in_window_g1_ParamLimits

0x69fe,	// (0x0002b854) popup_call3_audio_in_window_g1

0x6a1e,	// (0x0002b874) popup_call3_audio_in_window_g2_ParamLimits

0x6a1e,	// (0x0002b874) popup_call3_audio_in_window_g2

0x6a3e,	// (0x0002b894) popup_call3_audio_in_window_g3_ParamLimits

0x6a3e,	// (0x0002b894) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0003449b) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0003449b) popup_call3_audio_in_window_g

0x6a6f,	// (0x0002b8c5) popup_call3_audio_in_window_t1_ParamLimits

0x6a6f,	// (0x0002b8c5) popup_call3_audio_in_window_t1

0x6aad,	// (0x0002b903) popup_call3_audio_in_window_t2_ParamLimits

0x6aad,	// (0x0002b903) popup_call3_audio_in_window_t2

0x6aeb,	// (0x0002b941) popup_call3_audio_in_window_t3_ParamLimits

0x6aeb,	// (0x0002b941) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x000344a4) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x000344a4) popup_call3_audio_in_window_t

0x541e,	// (0x0002a274) bg_popup_call3_rect_pane

0xbd12,	// (0x00030b68) bg_popup_call3_rect_pane_g1

0x3192,	// (0x00027fe8) bg_popup_call3_rect_pane_g2

0xbd1a,	// (0x00030b70) bg_popup_call3_rect_pane_g3

0xbd22,	// (0x00030b78) bg_popup_call3_rect_pane_g4

0xbd2a,	// (0x00030b80) bg_popup_call3_rect_pane_g5

0xbd32,	// (0x00030b88) bg_popup_call3_rect_pane_g6

0xbd3a,	// (0x00030b90) bg_popup_call3_rect_pane_g7

0x5704,	// (0x0002a55a) mup_visualizer_osc_pane

0x571a,	// (0x0002a570) mup_visualizer_spec_pane

0x69b8,	// (0x0002b80e) call3_video_qcif_pane_ParamLimits

0x69b8,	// (0x0002b80e) call3_video_qcif_pane

0x69cb,	// (0x0002b821) call3_video_qcif_uncrop_pane_ParamLimits

0x69cb,	// (0x0002b821) call3_video_qcif_uncrop_pane

0x69d9,	// (0x0002b82f) call3_video_subqcif_pane_ParamLimits

0x69d9,	// (0x0002b82f) call3_video_subqcif_pane

0x69ed,	// (0x0002b843) call3_video_subqcif_uncrop_pane_ParamLimits

0x69ed,	// (0x0002b843) call3_video_subqcif_uncrop_pane

0x6a5e,	// (0x0002b8b4) popup_call3_audio_in_window_g4_ParamLimits

0x6a5e,	// (0x0002b8b4) popup_call3_audio_in_window_g4

0x6977,	// (0x0002b7cd) mup_spec_half_pane

0x6980,	// (0x0002b7d6) mup_spec_half_pane_cp

0xbfaa,	// (0x00030e00) mup_osc_middle_pane

0xbfb3,	// (0x00030e09) mup_visualizer_osc_pane_g1

0x6957,	// (0x0002b7ad) mup_spec_bar_pane_ParamLimits

0x6957,	// (0x0002b7ad) mup_spec_bar_pane

0xbf97,	// (0x00030ded) mup_spec_bar_pane_g1

0xbfa1,	// (0x00030df7) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0003448f) mup_spec_bar_pane_g

0x3210,	// (0x00028066) aid_cale_week_size_cell_pane_ParamLimits

0x3223,	// (0x00028079) bg_cale_heading_pane_ParamLimits

0x3237,	// (0x0002808d) bg_cale_pane_cp01_ParamLimits

0x3250,	// (0x000280a6) cale_week_corner_pane_ParamLimits

0x3266,	// (0x000280bc) cale_week_day_heading_pane_ParamLimits

0x327a,	// (0x000280d0) cale_week_scroll_pane_g1_ParamLimits

0x328b,	// (0x000280e1) cale_week_scroll_pane_g2_ParamLimits

0x329c,	// (0x000280f2) cale_week_scroll_pane_g3_ParamLimits

0x32ad,	// (0x00028103) cale_week_scroll_pane_g4_ParamLimits

0x32be,	// (0x00028114) cale_week_scroll_pane_g5_ParamLimits

0x32cf,	// (0x00028125) cale_week_scroll_pane_g6_ParamLimits

0x32e0,	// (0x00028136) cale_week_scroll_pane_g7_ParamLimits

0x32f1,	// (0x00028147) cale_week_scroll_pane_g8_ParamLimits

0x3302,	// (0x00028158) cale_week_scroll_pane_g9_ParamLimits

0x3313,	// (0x00028169) cale_week_scroll_pane_g10_ParamLimits

0x3324,	// (0x0002817a) cale_week_scroll_pane_g11_ParamLimits

0x3335,	// (0x0002818b) cale_week_scroll_pane_g12_ParamLimits

0x3346,	// (0x0002819c) cale_week_scroll_pane_g13_ParamLimits

0x3357,	// (0x000281ad) cale_week_scroll_pane_g14_ParamLimits

0x3368,	// (0x000281be) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00034037) cale_week_scroll_pane_g_ParamLimits

0x3379,	// (0x000281cf) cale_week_time_pane_ParamLimits

0x338a,	// (0x000281e0) grid_cale_week_pane_ParamLimits

0x339d,	// (0x000281f3) listscroll_cale_week_pane_t1

0x33af,	// (0x00028205) scroll_pane_cp08_ParamLimits

0x41a7,	// (0x00028ffd) cale_month_corner_pane_ParamLimits

0x4429,	// (0x0002927f) cale_month_pane_t1

0x443b,	// (0x00029291) cale_month_week_pane_ParamLimits

0x4da9,	// (0x00029bff) popup_call_status_window_g1_ParamLimits

0x4dbd,	// (0x00029c13) popup_call_status_window_g2_ParamLimits

0x4dd1,	// (0x00029c27) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x000341df) popup_call_status_window_g_ParamLimits

0x4e39,	// (0x00029c8f) aid_call2_pane

0x5a3d,	// (0x0002a893) msg_header_pane_g1

0x5bf5,	// (0x0002aa4b) postcard_address2_pane_ParamLimits

0x5bf5,	// (0x0002aa4b) postcard_address2_pane

0x5c07,	// (0x0002aa5d) postcard_message2_pane_ParamLimits

0x5c07,	// (0x0002aa5d) postcard_message2_pane

0x6909,	// (0x0002b75f) message2_row_pane_ParamLimits

0x6909,	// (0x0002b75f) message2_row_pane

0x6925,	// (0x0002b77b) address2_row_pane_ParamLimits

0x6925,	// (0x0002b77b) address2_row_pane

0xbf65,	// (0x00030dbb) postcard_message2_row_pane_g1

0xbf6d,	// (0x00030dc3) postcard_message2_row_pane_t1

0xbf65,	// (0x00030dbb) address2_row_pane_g1

0xbf6d,	// (0x00030dc3) address2_row_pane_t1

0x12ea,	// (0x00026140) aid_size_cell_vorec

0x2aa0,	// (0x000278f6) main_rss_pane

0x6938,	// (0x0002b78e) rss_list_single_pane_ParamLimits

0x6938,	// (0x0002b78e) rss_list_single_pane

0xbf7b,	// (0x00030dd1) rss_list_single_pane_t1

0xbf89,	// (0x00030ddf) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0003448a) rss_list_single_pane_t

0x2aa0,	// (0x000278f6) main_camera2_pane

0x2aa0,	// (0x000278f6) main_video2_pane

0x13ac,	// (0x00026202) cams_zoom_pane_cp2_ParamLimits

0x13ac,	// (0x00026202) cams_zoom_pane_cp2

0x13cc,	// (0x00026222) image2_vga_pane_ParamLimits

0x13cc,	// (0x00026222) image2_vga_pane

0x141d,	// (0x00026273) main_camera2_pane_g1_ParamLimits

0x141d,	// (0x00026273) main_camera2_pane_g1

0x143d,	// (0x00026293) main_camera2_pane_g2_ParamLimits

0x143d,	// (0x00026293) main_camera2_pane_g2

0x145d,	// (0x000262b3) main_camera2_pane_g3_ParamLimits

0x145d,	// (0x000262b3) main_camera2_pane_g3

0x147d,	// (0x000262d3) main_camera2_pane_g4_ParamLimits

0x147d,	// (0x000262d3) main_camera2_pane_g4

0x149d,	// (0x000262f3) main_camera2_pane_g5_ParamLimits

0x149d,	// (0x000262f3) main_camera2_pane_g5

0x14bd,	// (0x00026313) main_camera2_pane_g6_ParamLimits

0x14bd,	// (0x00026313) main_camera2_pane_g6

0x14dd,	// (0x00026333) main_camera2_pane_g7_ParamLimits

0x14dd,	// (0x00026333) main_camera2_pane_g7

0x14fd,	// (0x00026353) main_camera2_pane_g8_ParamLimits

0x14fd,	// (0x00026353) main_camera2_pane_g8

0x0008,

0xf655,	// (0x000344ab) main_camera2_pane_g_ParamLimits

0xf655,	// (0x000344ab) main_camera2_pane_g

0x153d,	// (0x00026393) main_camera2_pane_t1_ParamLimits

0x153d,	// (0x00026393) main_camera2_pane_t1

0x1572,	// (0x000263c8) main_camera2_pane_t2_ParamLimits

0x1572,	// (0x000263c8) main_camera2_pane_t2

0x1598,	// (0x000263ee) main_camera2_pane_t3_ParamLimits

0x1598,	// (0x000263ee) main_camera2_pane_t3

0x15f6,	// (0x0002644c) main_camera2_pane_t4_ParamLimits

0x15f6,	// (0x0002644c) main_camera2_pane_t4

0x0006,

0xf668,	// (0x000344be) main_camera2_pane_t_ParamLimits

0xf668,	// (0x000344be) main_camera2_pane_t

0x1688,	// (0x000264de) cams_zoom_pane_cp4_ParamLimits

0x1688,	// (0x000264de) cams_zoom_pane_cp4

0x169e,	// (0x000264f4) image2_cif_pane_ParamLimits

0x169e,	// (0x000264f4) image2_cif_pane

0x16c9,	// (0x0002651f) image2_subqcif_pane_ParamLimits

0x16c9,	// (0x0002651f) image2_subqcif_pane

0x16e3,	// (0x00026539) main_video2_pane_g1_ParamLimits

0x16e3,	// (0x00026539) main_video2_pane_g1

0x16fd,	// (0x00026553) main_video2_pane_g2_ParamLimits

0x16fd,	// (0x00026553) main_video2_pane_g2

0x1713,	// (0x00026569) main_video2_pane_g3_ParamLimits

0x1713,	// (0x00026569) main_video2_pane_g3

0x1729,	// (0x0002657f) main_video2_pane_g4_ParamLimits

0x1729,	// (0x0002657f) main_video2_pane_g4

0x173f,	// (0x00026595) main_video2_pane_g5_ParamLimits

0x173f,	// (0x00026595) main_video2_pane_g5

0x1755,	// (0x000265ab) main_video2_pane_g6_ParamLimits

0x1755,	// (0x000265ab) main_video2_pane_g6

0x0005,

0xf677,	// (0x000344cd) main_video2_pane_g_ParamLimits

0xf677,	// (0x000344cd) main_video2_pane_g

0x176f,	// (0x000265c5) main_video2_pane_t1_ParamLimits

0x176f,	// (0x000265c5) main_video2_pane_t1

0x1793,	// (0x000265e9) main_video2_pane_t2_ParamLimits

0x1793,	// (0x000265e9) main_video2_pane_t2

0x17e1,	// (0x00026637) main_video2_pane_t3_ParamLimits

0x17e1,	// (0x00026637) main_video2_pane_t3

0x0002,

0xf684,	// (0x000344da) main_video2_pane_t_ParamLimits

0xf684,	// (0x000344da) main_video2_pane_t

0x6451,	// (0x0002b2a7) call_muted_g2

0x0001,

0xf626,	// (0x0003447c) call_muted_g

0x2aa0,	// (0x000278f6) main_mup2_pane

0x6b43,	// (0x0002b999) main_mup2_pane_g1_ParamLimits

0x6b43,	// (0x0002b999) main_mup2_pane_g1

0x6b4f,	// (0x0002b9a5) main_mup2_pane_g2_ParamLimits

0x6b4f,	// (0x0002b9a5) main_mup2_pane_g2

0xc11b,	// (0x00030f71) main_mup_pane_g13_cp1

0xc123,	// (0x00030f79) mup_volume_pane_cp1

0x6b6b,	// (0x0002b9c1) main_mup2_pane_g4_ParamLimits

0x6b6b,	// (0x0002b9c1) main_mup2_pane_g4

0x6b7d,	// (0x0002b9d3) main_mup2_pane_g5_ParamLimits

0x6b7d,	// (0x0002b9d3) main_mup2_pane_g5

0x6b8f,	// (0x0002b9e5) main_mup2_pane_g6_ParamLimits

0x6b8f,	// (0x0002b9e5) main_mup2_pane_g6

0x6ba1,	// (0x0002b9f7) main_mup2_pane_g7_ParamLimits

0x6ba1,	// (0x0002b9f7) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x000344e1) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x000344e1) main_mup2_pane_g

0x6bb9,	// (0x0002ba0f) main_mup2_pane_t1_ParamLimits

0x6bb9,	// (0x0002ba0f) main_mup2_pane_t1

0x6bcf,	// (0x0002ba25) main_mup2_pane_t2_ParamLimits

0x6bcf,	// (0x0002ba25) main_mup2_pane_t2

0x6be5,	// (0x0002ba3b) main_mup2_pane_t3_ParamLimits

0x6be5,	// (0x0002ba3b) main_mup2_pane_t3

0x6bfb,	// (0x0002ba51) main_mup2_pane_t4_ParamLimits

0x6bfb,	// (0x0002ba51) main_mup2_pane_t4

0x6c13,	// (0x0002ba69) main_mup2_pane_t5_ParamLimits

0x6c13,	// (0x0002ba69) main_mup2_pane_t5

0x6c2b,	// (0x0002ba81) main_mup2_pane_t6_ParamLimits

0x6c2b,	// (0x0002ba81) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x000344f0) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x000344f0) main_mup2_pane_t

0x6c5b,	// (0x0002bab1) mup2_visualizer_pane_ParamLimits

0x6c5b,	// (0x0002bab1) mup2_visualizer_pane

0x6c89,	// (0x0002badf) mup_progress_pane_cp_ParamLimits

0x6c89,	// (0x0002badf) mup_progress_pane_cp

0xc0fd,	// (0x00030f53) mup_volume_pane_cp_ParamLimits

0xc0fd,	// (0x00030f53) mup_volume_pane_cp

0x6c9d,	// (0x0002baf3) mup2_visualizer_pane_g1_ParamLimits

0x6c9d,	// (0x0002baf3) mup2_visualizer_pane_g1

0xc03c,	// (0x00030e92) mup2_visualizer_pane_g2_ParamLimits

0xc03c,	// (0x00030e92) mup2_visualizer_pane_g2

0x6cb4,	// (0x0002bb0a) mup2_visualizer_pane_g3_ParamLimits

0x6cb4,	// (0x0002bb0a) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x000344fd) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x000344fd) mup2_visualizer_pane_g

0x5fc1,	// (0x0002ae17) aid_size_cell_fmradio

0x6603,	// (0x0002b459) aid_height_parent_landcape

0x3eeb,	// (0x00028d41) wml_content_pane_cp

0x3ef3,	// (0x00028d49) wml_tabs_pane

0x3efc,	// (0x00028d52) popup_wml_miniature_window

0x3f04,	// (0x00028d5a) scroll_pane_cp021

0x3f18,	// (0x00028d6e) wml_content_pane_comp8

0x2aa0,	// (0x000278f6) bg_popup_sub_pane_cp05

0xc05a,	// (0x00030eb0) popup_wml_miniature_window_g1

0xc062,	// (0x00030eb8) wml_miniature_view_pane

0x6cc0,	// (0x0002bb16) aid_size_wml_view

0x6cc8,	// (0x0002bb1e) wml_miniature_view_pane_g1

0x6cd1,	// (0x0002bb27) wml_miniature_view_pane_g2

0x6cda,	// (0x0002bb30) wml_miniature_view_pane_g3

0x6ce2,	// (0x0002bb38) wml_miniature_view_pane_g4

0x6cea,	// (0x0002bb40) wml_miniature_view_pane_g5

0x6cf2,	// (0x0002bb48) wml_miniature_view_pane_g6

0x6cfa,	// (0x0002bb50) wml_miniature_view_pane_g7

0x6d02,	// (0x0002bb58) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x00034504) wml_miniature_view_pane_g

0xc06a,	// (0x00030ec0) background_graphic_ParamLimits

0xc06a,	// (0x00030ec0) background_graphic

0xc076,	// (0x00030ecc) wml_tabs_2_pane

0xc07f,	// (0x00030ed5) wml_tabs_3_pane_ParamLimits

0xc07f,	// (0x00030ed5) wml_tabs_3_pane

0xc091,	// (0x00030ee7) wml_tabs_4_pane_ParamLimits

0xc091,	// (0x00030ee7) wml_tabs_4_pane

0xc0a7,	// (0x00030efd) wml_tabs_5_pane_ParamLimits

0xc0a7,	// (0x00030efd) wml_tabs_5_pane

0xc0c1,	// (0x00030f17) wml_tabs_pane_g2_ParamLimits

0xc0c1,	// (0x00030f17) wml_tabs_pane_g2

0xc0d5,	// (0x00030f2b) wml_tabs_pane_g3_ParamLimits

0xc0d5,	// (0x00030f2b) wml_tabs_pane_g3

0x6d0a,	// (0x0002bb60) wml_tabs_2_active_pane_ParamLimits

0x6d0a,	// (0x0002bb60) wml_tabs_2_active_pane

0x6d1e,	// (0x0002bb74) wml_tabs_2_passive_pane_ParamLimits

0x6d1e,	// (0x0002bb74) wml_tabs_2_passive_pane

0x6d32,	// (0x0002bb88) wml_tabs_3_active_pane_cp_ParamLimits

0x6d32,	// (0x0002bb88) wml_tabs_3_active_pane_cp

0x6d47,	// (0x0002bb9d) wml_tabs_3_passive_pane_ParamLimits

0x6d47,	// (0x0002bb9d) wml_tabs_3_passive_pane

0x6d5a,	// (0x0002bbb0) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d5a,	// (0x0002bbb0) wml_tabs_3_passive_pane_cp

0x6d71,	// (0x0002bbc7) tabs_4_active_pane

0x6d79,	// (0x0002bbcf) tabs_4_passive_pane

0x6d83,	// (0x0002bbd9) tabs_4_passive_pane_cp

0x6d8b,	// (0x0002bbe1) tabs_4_passive_pane_cp2

0x631e,	// (0x0002b174) aid_height_text

0x56da,	// (0x0002a530) mup_volume_cont_pane_ParamLimits

0x56da,	// (0x0002a530) mup_volume_cont_pane

0x2d91,	// (0x00027be7) aid_size_cell_pinb

0x2d9b,	// (0x00027bf1) aid_size_list_pinb

0x6c75,	// (0x0002bacb) mup2_volume_cont_pane_ParamLimits

0x6c75,	// (0x0002bacb) mup2_volume_cont_pane

0xc0e9,	// (0x00030f3f) mup2_volume_cont_pane_g1_ParamLimits

0xc0e9,	// (0x00030f3f) mup2_volume_cont_pane_g1

0x236b,	// (0x000271c1) aid_size_cell_touch_ParamLimits

0x236b,	// (0x000271c1) aid_size_cell_touch

0x25e3,	// (0x00027439) touch_pane_ParamLimits

0x25e3,	// (0x00027439) touch_pane

0x234d,	// (0x000271a3) main_rss2_pane

0xc12b,	// (0x00030f81) listscroll_rss2_pane

0xc134,	// (0x00030f8a) rss2_navigation_pane

0xc13c,	// (0x00030f92) list_rss2_pane

0x4ff3,	// (0x00029e49) scroll_pane_cp22

0xc144,	// (0x00030f9a) rss2_navigation_pane_g1

0xc14d,	// (0x00030fa3) rss2_navigation_pane_g2

0xc155,	// (0x00030fab) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x00034515) rss2_navigation_pane_g

0xc15d,	// (0x00030fb3) rss2_navigation_pane_t1

0x6d95,	// (0x0002bbeb) rss2_list_single_pane_ParamLimits

0x6d95,	// (0x0002bbeb) rss2_list_single_pane

0xc16b,	// (0x00030fc1) rss2_list_single_pane_t2

0xc179,	// (0x00030fcf) rss2_list_single_pane_t3_ParamLimits

0xc179,	// (0x00030fcf) rss2_list_single_pane_t3

0xc196,	// (0x00030fec) rss2_list_single_pane_t4

0x489d,	// (0x000296f3) smil_status_pane_g1

0x25c9,	// (0x0002741f) main_image2_pane_ParamLimits

0x25c9,	// (0x0002741f) main_image2_pane

0x151d,	// (0x00026373) main_camera2_pane_g9_ParamLimits

0x151d,	// (0x00026373) main_camera2_pane_g9

0x164b,	// (0x000264a1) main_camera2_pane_t5_ParamLimits

0x164b,	// (0x000264a1) main_camera2_pane_t5

0xc00c,	// (0x00030e62) main_camera2_pane_t6_ParamLimits

0xc00c,	// (0x00030e62) main_camera2_pane_t6

0x6daa,	// (0x0002bc00) main_image2_pane_g1_ParamLimits

0x6daa,	// (0x0002bc00) main_image2_pane_g1

0x5f77,	// (0x0002adcd) smil2_video_pane_ParamLimits

0x5f77,	// (0x0002adcd) smil2_video_pane

0x239b,	// (0x000271f1) aid_zoom_text_primary_cp

0x2585,	// (0x000273db) popup_preview_fixed_window

0x3de3,	// (0x00028c39) im_reading_pane_g1

0x1394,	// (0x000261ea) cams2_bc_adjust_pane_cp_ParamLimits

0x1394,	// (0x000261ea) cams2_bc_adjust_pane_cp

0x167a,	// (0x000264d0) cams2_bc_adjust_pane_ParamLimits

0x167a,	// (0x000264d0) cams2_bc_adjust_pane

0xc1a4,	// (0x00030ffa) cams2_bc_adjust_pane_g1

0xc1ac,	// (0x00031002) cams2_slider_pane

0xc1b5,	// (0x0003100b) cams2_slider_pane_g1

0xc1be,	// (0x00031014) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0003451c) cams2_slider_pane_g

0x1110,	// (0x00025f66) calc_display_pane_ParamLimits

0x1136,	// (0x00025f8c) calc_paper_pane_ParamLimits

0x1157,	// (0x00025fad) grid_calc_pane_ParamLimits

0xae75,	// (0x0002fccb) popup_clock_digital_window_t1_ParamLimits

0x5dfe,	// (0x0002ac54) main_image_pane_t1

0x10f2,	// (0x00025f48) aid_size_cell_calc_ParamLimits

0x10f2,	// (0x00025f48) aid_size_cell_calc

0x6649,	// (0x0002b49f) popup_blid_sat_info2_window_ParamLimits

0x6649,	// (0x0002b49f) popup_blid_sat_info2_window

0xc1e0,	// (0x00031036) aid_size_cell_blid

0xc1e8,	// (0x0003103e) bg_popup_window_pane_cp07

0xc20b,	// (0x00031061) grid_popup_blid_pane

0xc215,	// (0x0003106b) heading_pane_cp05_ParamLimits

0xc215,	// (0x0003106b) heading_pane_cp05

0xc2df,	// (0x00031135) cell_popup_blid_pane_ParamLimits

0xc2df,	// (0x00031135) cell_popup_blid_pane

0xc303,	// (0x00031159) cell_popup_blid_pane_g1

0xc30b,	// (0x00031161) cell_popup_blid_pane_t1

0x6c45,	// (0x0002ba9b) mup2_indicator_pane_ParamLimits

0x6c45,	// (0x0002ba9b) mup2_indicator_pane

0x541e,	// (0x0002a274) mup2_visualizer_osc_pane

0xc048,	// (0x00030e9e) mup2_visualizer_spec_pane_ParamLimits

0xc048,	// (0x00030e9e) mup2_visualizer_spec_pane

0x6dc0,	// (0x0002bc16) mup2_spec_half_pane

0x6dc9,	// (0x0002bc1f) mup2_spec_half_pane_cp

0x6dd1,	// (0x0002bc27) mup2_spec_bar_pane_ParamLimits

0x6dd1,	// (0x0002bc27) mup2_spec_bar_pane

0xbf97,	// (0x00030ded) mup2_spec_bar_pane_g1

0xbfa1,	// (0x00030df7) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0003448f) mup2_spec_bar_pane_g

0x6df1,	// (0x0002bc47) mup2_osc_middle_pane

0xbfb3,	// (0x00030e09) mup2_visualizer_osc_pane_g1

0x2655,	// (0x000274ab) popup_number_entry_window_t1_ParamLimits

0x2668,	// (0x000274be) popup_number_entry_window_t2_ParamLimits

0x267a,	// (0x000274d0) popup_number_entry_window_t3_ParamLimits

0x268c,	// (0x000274e2) popup_number_entry_window_t5_ParamLimits

0x268c,	// (0x000274e2) popup_number_entry_window_t5

0xf0fb,	// (0x00033f51) popup_number_entry_window_t_ParamLimits

0x26c0,	// (0x00027516) text_title_cp2_ParamLimits

0xaeb4,	// (0x0002fd0a) aid_hotspot_pointer_text2_pane

0xaece,	// (0x0002fd24) main_viewer_pane_g9_ParamLimits

0xaece,	// (0x0002fd24) main_viewer_pane_g9

0x4429,	// (0x0002927f) cale_month_pane_t1_ParamLimits

0x4919,	// (0x0002976f) bg_cale_pane_ParamLimits

0x4931,	// (0x00029787) list_cale_pane_ParamLimits

0x339d,	// (0x000281f3) listscroll_cale_day_pane_t1

0x4942,	// (0x00029798) scroll_pane_cp09_ParamLimits

0x5788,	// (0x0002a5de) main_mup_eq_pane_t1_ParamLimits

0x5788,	// (0x0002a5de) main_mup_eq_pane_t1

0x57a2,	// (0x0002a5f8) main_mup_eq_pane_t2_ParamLimits

0x57a2,	// (0x0002a5f8) main_mup_eq_pane_t2

0x57bc,	// (0x0002a612) main_mup_eq_pane_t3_ParamLimits

0x57bc,	// (0x0002a612) main_mup_eq_pane_t3

0x57d8,	// (0x0002a62e) main_mup_eq_pane_t4_ParamLimits

0x57d8,	// (0x0002a62e) main_mup_eq_pane_t4

0x57f4,	// (0x0002a64a) main_mup_eq_pane_t5_ParamLimits

0x57f4,	// (0x0002a64a) main_mup_eq_pane_t5

0x5810,	// (0x0002a666) main_mup_eq_pane_t6_ParamLimits

0x5810,	// (0x0002a666) main_mup_eq_pane_t6

0x5824,	// (0x0002a67a) main_mup_eq_pane_t7_ParamLimits

0x5824,	// (0x0002a67a) main_mup_eq_pane_t7

0x5838,	// (0x0002a68e) main_mup_eq_pane_t8_ParamLimits

0x5838,	// (0x0002a68e) main_mup_eq_pane_t8

0x584c,	// (0x0002a6a2) main_mup_eq_pane_t9_ParamLimits

0x584c,	// (0x0002a6a2) main_mup_eq_pane_t9

0x5866,	// (0x0002a6bc) main_mup_eq_pane_t10_ParamLimits

0x5866,	// (0x0002a6bc) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x000342de) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x000342de) main_mup_eq_pane_t

0x5915,	// (0x0002a76b) mup_equalizer_pane_cp5_ParamLimits

0x5929,	// (0x0002a77f) mup_equalizer_pane_cp6_ParamLimits

0x593d,	// (0x0002a793) mup_equalizer_pane_cp7_ParamLimits

0x234d,	// (0x000271a3) main_gallery_pane

0xbfbc,	// (0x00030e12) smil2_volume_pane

0xbfc4,	// (0x00030e1a) smil_status_volume_pane_g1_ParamLimits

0xbfd7,	// (0x00030e2d) smil_status_volume_pane_g2_ParamLimits

0xbfea,	// (0x00030e40) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00034494) smil_status_volume_pane_g_ParamLimits

0xc1e8,	// (0x0003103e) bg_popup_window_pane_cp07_ParamLimits

0xc1f6,	// (0x0003104c) blid_firmament_pane

0x6dfa,	// (0x0002bc50) aid_size_cell_gallery_ParamLimits

0x6dfa,	// (0x0002bc50) aid_size_cell_gallery

0x6e10,	// (0x0002bc66) grid_gallery_pane_ParamLimits

0x6e10,	// (0x0002bc66) grid_gallery_pane

0x6e29,	// (0x0002bc7f) cell_gallery_pane_ParamLimits

0x6e29,	// (0x0002bc7f) cell_gallery_pane

0xc319,	// (0x0003116f) bg_cell_gallery_focus_pane_ParamLimits

0xc319,	// (0x0003116f) bg_cell_gallery_focus_pane

0xc32b,	// (0x00031181) cell_gallery_pane_g1_ParamLimits

0xc32b,	// (0x00031181) cell_gallery_pane_g1

0x6e72,	// (0x0002bcc8) cell_gallery_pane_g2_ParamLimits

0x6e72,	// (0x0002bcc8) cell_gallery_pane_g2

0x6e7f,	// (0x0002bcd5) cell_gallery_pane_g3_ParamLimits

0x6e7f,	// (0x0002bcd5) cell_gallery_pane_g3

0xc337,	// (0x0003118d) cell_gallery_pane_g4_ParamLimits

0xc337,	// (0x0003118d) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x00034542) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x00034542) cell_gallery_pane_g

0xc343,	// (0x00031199) bg_cell_gallery_focus_pane_g1

0xc34b,	// (0x000311a1) bg_cell_gallery_focus_pane_g2

0xc353,	// (0x000311a9) bg_cell_gallery_focus_pane_g3

0xc35b,	// (0x000311b1) bg_cell_gallery_focus_pane_g4

0xc363,	// (0x000311b9) bg_cell_gallery_focus_pane_g5

0xc36b,	// (0x000311c1) bg_cell_gallery_focus_pane_g6

0xc373,	// (0x000311c9) bg_cell_gallery_focus_pane_g7

0xc37b,	// (0x000311d1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0003454b) bg_cell_gallery_focus_pane_g

0xc383,	// (0x000311d9) aid_firma_cardinal

0xc397,	// (0x000311ed) blid_firmament_pane_t1

0xc3ae,	// (0x00031204) blid_firmament_pane_t2

0xc3c5,	// (0x0003121b) blid_firmament_pane_t3

0xc3dc,	// (0x00031232) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0003455c) blid_firmament_pane_t

0xc3f3,	// (0x00031249) blid_sat_info_pane

0xc403,	// (0x00031259) blid_sat_info_pane_g1

0xc403,	// (0x00031259) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x00034565) blid_sat_info_pane_g

0xc40d,	// (0x00031263) blid_sat_info_pane_t1

0xc41b,	// (0x00031271) smil2_volume_content_pane

0xc424,	// (0x0003127a) smil2_volume_pane_g1

0xc42c,	// (0x00031282) smil2_volume_content_pane_g1

0xc435,	// (0x0003128b) smil2_volume_content_pane_g2

0xc43e,	// (0x00031294) smil2_volume_content_pane_g3

0xc447,	// (0x0003129d) smil2_volume_content_pane_g4

0xc450,	// (0x000312a6) smil2_volume_content_pane_g5

0xc459,	// (0x000312af) smil2_volume_content_pane_g6

0xc462,	// (0x000312b8) smil2_volume_content_pane_g7

0xc46b,	// (0x000312c1) smil2_volume_content_pane_g8

0xc474,	// (0x000312ca) smil2_volume_content_pane_g9

0xc47d,	// (0x000312d3) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0003456a) smil2_volume_content_pane_g

0x3405,	// (0x0002825b) cale_week_day_heading_pane_t1_ParamLimits

0x3432,	// (0x00028288) cale_week_day_heading_pane_t2_ParamLimits

0x345f,	// (0x000282b5) cale_week_day_heading_pane_t3_ParamLimits

0x348c,	// (0x000282e2) cale_week_day_heading_pane_t4_ParamLimits

0x34b9,	// (0x0002830f) cale_week_day_heading_pane_t5_ParamLimits

0x34e6,	// (0x0002833c) cale_week_day_heading_pane_t6_ParamLimits

0x3513,	// (0x00028369) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00034056) cale_week_day_heading_pane_t_ParamLimits

0x3540,	// (0x00028396) bg_cale_side_pane_ParamLimits

0x122a,	// (0x00026080) cale_week_time_pane_t1_ParamLimits

0x1242,	// (0x00026098) cale_week_time_pane_t2_ParamLimits

0x125a,	// (0x000260b0) cale_week_time_pane_t3_ParamLimits

0x1272,	// (0x000260c8) cale_week_time_pane_t4_ParamLimits

0x128a,	// (0x000260e0) cale_week_time_pane_t5_ParamLimits

0x12a2,	// (0x000260f8) cale_week_time_pane_t6_ParamLimits

0x12ba,	// (0x00026110) cale_week_time_pane_t7_ParamLimits

0x12d2,	// (0x00026128) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00034065) cale_week_time_pane_t_ParamLimits

0x354e,	// (0x000283a4) cell_cale_week_pane_g2_ParamLimits

0x3540,	// (0x00028396) bg_cale_side_pane_cp01_ParamLimits

0x4730,	// (0x00029586) cale_month_week_pane_t1_ParamLimits

0x4747,	// (0x0002959d) cale_month_week_pane_t2_ParamLimits

0x475e,	// (0x000295b4) cale_month_week_pane_t3_ParamLimits

0x4775,	// (0x000295cb) cale_month_week_pane_t4_ParamLimits

0x478c,	// (0x000295e2) cale_month_week_pane_t5_ParamLimits

0x47a3,	// (0x000295f9) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0003413e) cale_month_week_pane_t_ParamLimits

0xadf1,	// (0x0002fc47) cell_cale_month_pane_g1_ParamLimits

0x234d,	// (0x000271a3) main_cale_event_viewer_pane

0x234d,	// (0x000271a3) listscroll_cale_event_viewer_pane

0xc486,	// (0x000312dc) list_cale_ev_pane

0xc48e,	// (0x000312e4) scroll_pane_cp023

0xc49a,	// (0x000312f0) field_cale_ev_pane_ParamLimits

0xc49a,	// (0x000312f0) field_cale_ev_pane

0xc4b8,	// (0x0003130e) field_cale_ev_content_pane_ParamLimits

0xc4b8,	// (0x0003130e) field_cale_ev_content_pane

0xc4c4,	// (0x0003131a) field_cale_ev_pane_g1_ParamLimits

0xc4c4,	// (0x0003131a) field_cale_ev_pane_g1

0xc4d0,	// (0x00031326) field_cale_ev_pane_g2_ParamLimits

0xc4d0,	// (0x00031326) field_cale_ev_pane_g2

0xc4e8,	// (0x0003133e) field_cale_ev_pane_g3_ParamLimits

0xc4e8,	// (0x0003133e) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0003457f) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0003457f) field_cale_ev_pane_g

0xc500,	// (0x00031356) field_cale_ev_pane_t1_ParamLimits

0xc500,	// (0x00031356) field_cale_ev_pane_t1

0xc517,	// (0x0003136d) field_cale_ev_content_pane_t1_ParamLimits

0xc517,	// (0x0003136d) field_cale_ev_content_pane_t1

0x5a2b,	// (0x0002a881) bg_button_pane_cp01

0x2fcd,	// (0x00027e23) listscroll_cale_week_pane_ParamLimits

0x3206,	// (0x0002805c) popup_toolbar_window_cp01

0x339d,	// (0x000281f3) listscroll_cale_week_pane_t1_ParamLimits

0x2fcd,	// (0x00027e23) listscroll_cale_day_pane_ParamLimits

0x490f,	// (0x00029765) popup_toolbar_window_cp02

0x339d,	// (0x000281f3) listscroll_cale_day_pane_t1_ParamLimits

0x2fcd,	// (0x00027e23) main_cale_month_pane_ParamLimits

0x687d,	// (0x0002b6d3) popup_toolbar_window_cp03_ParamLimits

0x687d,	// (0x0002b6d3) popup_toolbar_window_cp03

0x5ddc,	// (0x0002ac32) main_image_pane_g2_ParamLimits

0x5ddc,	// (0x0002ac32) main_image_pane_g2

0x5ded,	// (0x0002ac43) main_image_pane_g3_ParamLimits

0x5ded,	// (0x0002ac43) main_image_pane_g3

0x0002,

0xf51a,	// (0x00034370) main_image_pane_g_ParamLimits

0xf51a,	// (0x00034370) main_image_pane_g

0x5dfe,	// (0x0002ac54) main_image_pane_t1_ParamLimits

0x5e15,	// (0x0002ac6b) main_image_pane_t2_ParamLimits

0x5e15,	// (0x0002ac6b) main_image_pane_t2

0x5e27,	// (0x0002ac7d) main_image_pane_t3_ParamLimits

0x5e27,	// (0x0002ac7d) main_image_pane_t3

0x5e4f,	// (0x0002aca5) main_image_pane_t4_ParamLimits

0x5e4f,	// (0x0002aca5) main_image_pane_t4

0x0003,

0xf521,	// (0x00034377) main_image_pane_t_ParamLimits

0xf521,	// (0x00034377) main_image_pane_t

0x5e6f,	// (0x0002acc5) popup_image_details_window_cp01

0x5e79,	// (0x0002accf) popup_toobar_trans_pane_cp01_ParamLimits

0x5e79,	// (0x0002accf) popup_toobar_trans_pane_cp01

0x6728,	// (0x0002b57e) popup_image_details_window_ParamLimits

0x6728,	// (0x0002b57e) popup_image_details_window

0xbf1d,	// (0x00030d73) popup_image_focus_window

0x134e,	// (0x000261a4) camera2_autofocus_pane_ParamLimits

0x134e,	// (0x000261a4) camera2_autofocus_pane

0x234d,	// (0x000271a3) bg_popup_sub_pane_cp06

0xc535,	// (0x0003138b) popup_image_focus_window_g1

0xc53d,	// (0x00031393) popup_image_focus_window_g2

0xc545,	// (0x0003139b) popup_image_focus_window_g3

0xc54d,	// (0x000313a3) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00034586) popup_image_focus_window_g

0xc555,	// (0x000313ab) popup_image_focus_window_t1

0xc563,	// (0x000313b9) popup_image_focus_window_t2

0xc573,	// (0x000313c9) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0003458f) popup_image_focus_window_t

0xc581,	// (0x000313d7) camera2_autofocus_pane_g1

0x25c9,	// (0x0002741f) bg_tb_trans_pane_cp01

0xc58f,	// (0x000313e5) popup_image_details_window_g1

0xc5a2,	// (0x000313f8) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x000345a1) popup_image_details_window_g

0xc5cb,	// (0x00031421) popup_image_details_window_t1

0xc5dd,	// (0x00031433) popup_image_details_window_t2

0xc5f6,	// (0x0003144c) popup_image_details_window_t3

0xc60a,	// (0x00031460) popup_image_details_window_t4

0xc625,	// (0x0003147b) popup_image_details_window_t5

0x0004,

0xf752,	// (0x000345a8) popup_image_details_window_t

0x2fb9,	// (0x00027e0f) bg_calc_paper_pane_ParamLimits

0xacf7,	// (0x0002fb4d) grid_highlight_pane_cp013

0xad01,	// (0x0002fb57) list_calc_pane_ParamLimits

0xad13,	// (0x0002fb69) scroll_pane_cp024

0x2fcd,	// (0x00027e23) bg_calc_display_pane_ParamLimits

0x117f,	// (0x00025fd5) calc_display_pane_t1_ParamLimits

0x1191,	// (0x00025fe7) calc_display_pane_t2_ParamLimits

0xad1b,	// (0x0002fb71) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00033fd8) calc_display_pane_t_ParamLimits

0x11f4,	// (0x0002604a) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00033ff5) cell_calc_pane_g

0x11fd,	// (0x00026053) cell_calc_pane_t1

0x3083,	// (0x00027ed9) grid_highlight_pane_cp02_ParamLimits

0x3099,	// (0x00027eef) toolbar_button_pane_cp01_ParamLimits

0x3099,	// (0x00027eef) toolbar_button_pane_cp01

0x5ebb,	// (0x0002ad11) temp_image_control_pane_ParamLimits

0x5ebb,	// (0x0002ad11) temp_image_control_pane

0x25c9,	// (0x0002741f) main_mp3_pane

0xc63f,	// (0x00031495) temp_image_control_pane_g1_ParamLimits

0xc63f,	// (0x00031495) temp_image_control_pane_g1

0xc64d,	// (0x000314a3) temp_image_control_pane_g2_ParamLimits

0xc64d,	// (0x000314a3) temp_image_control_pane_g2

0xc65f,	// (0x000314b5) temp_image_control_pane_g3_ParamLimits

0xc65f,	// (0x000314b5) temp_image_control_pane_g3

0x6ebc,	// (0x0002bd12) temp_image_control_pane_g4_ParamLimits

0x6ebc,	// (0x0002bd12) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x000345b3) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x000345b3) temp_image_control_pane_g

0xc63f,	// (0x00031495) main_mp3_pane_g1

0x6ecf,	// (0x0002bd25) main_mp3_pane_g2

0x0007,

0xf766,	// (0x000345bc) main_mp3_pane_g

0xc6a2,	// (0x000314f8) main_mp3_pane_t1

0x36c4,	// (0x0002851a) main_camera_pane_g8_ParamLimits

0x36c4,	// (0x0002851a) main_camera_pane_g8

0x3875,	// (0x000286cb) main_video_pane_g7_ParamLimits

0x3875,	// (0x000286cb) main_video_pane_g7

0xc02a,	// (0x00030e80) main_camera2_pane_t7_ParamLimits

0xc02a,	// (0x00030e80) main_camera2_pane_t7

0x3eab,	// (0x00028d01) scroll_pane_cp025_ParamLimits

0x3eab,	// (0x00028d01) scroll_pane_cp025

0x3ebf,	// (0x00028d15) scroll_pane_cp026_ParamLimits

0x3ebf,	// (0x00028d15) scroll_pane_cp026

0x3ece,	// (0x00028d24) wml_content_pane_ParamLimits

0x234d,	// (0x000271a3) main_touch_calib_pane

0x6f98,	// (0x0002bdee) main_touch_calib_pane_g1

0x6fa4,	// (0x0002bdfa) main_touch_calib_pane_g2

0x6fb0,	// (0x0002be06) main_touch_calib_pane_g3

0x6fbc,	// (0x0002be12) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x000345da) main_touch_calib_pane_g

0x6fc8,	// (0x0002be1e) main_touch_calib_pane_t1

0x6fe2,	// (0x0002be38) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x000345e3) main_touch_calib_pane_t

0x529b,	// (0x0002a0f1) mup_progress_pane_cp02

0x52ba,	// (0x0002a110) navi_pane_g1

0x5373,	// (0x0002a1c9) navi_pane_mp_t3

0x25c9,	// (0x0002741f) main_mp3_pane_ParamLimits

0x68bb,	// (0x0002b711) navi_pane_ParamLimits

0xc63f,	// (0x00031495) main_mp3_pane_g1_ParamLimits

0x6ecf,	// (0x0002bd25) main_mp3_pane_g2_ParamLimits

0x6edd,	// (0x0002bd33) main_mp3_pane_g3_ParamLimits

0x6edd,	// (0x0002bd33) main_mp3_pane_g3

0x6eeb,	// (0x0002bd41) main_mp3_pane_g4_ParamLimits

0x6eeb,	// (0x0002bd41) main_mp3_pane_g4

0xc66f,	// (0x000314c5) main_mp3_pane_g5_ParamLimits

0xc66f,	// (0x000314c5) main_mp3_pane_g5

0xc67d,	// (0x000314d3) main_mp3_pane_g6_ParamLimits

0xc67d,	// (0x000314d3) main_mp3_pane_g6

0xc68a,	// (0x000314e0) main_mp3_pane_g7_ParamLimits

0xc68a,	// (0x000314e0) main_mp3_pane_g7

0xc696,	// (0x000314ec) main_mp3_pane_g8_ParamLimits

0xc696,	// (0x000314ec) main_mp3_pane_g8

0xf766,	// (0x000345bc) main_mp3_pane_g_ParamLimits

0x6ef7,	// (0x0002bd4d) main_mp3_pane_t2

0x6f05,	// (0x0002bd5b) main_mp3_pane_t3

0xc6b0,	// (0x00031506) main_mp3_pane_t4

0xc6be,	// (0x00031514) main_mp3_pane_t5

0x0005,

0xf777,	// (0x000345cd) main_mp3_pane_t

0xc6cc,	// (0x00031522) mup_progress_pane_cp01

0x239b,	// (0x000271f1) aid_zoom_text_secondary2

0xc486,	// (0x000312dc) list_cale_ev2_pane

0xc48e,	// (0x000312e4) scroll_pane_cp023_ParamLimits

0x7038,	// (0x0002be8e) field_cale_ev2_pane_ParamLimits

0x7038,	// (0x0002be8e) field_cale_ev2_pane

0x7058,	// (0x0002beae) field_cale_ev2_pane_g1_ParamLimits

0x7058,	// (0x0002beae) field_cale_ev2_pane_g1

0x7064,	// (0x0002beba) field_cale_ev2_pane_g2_ParamLimits

0x7064,	// (0x0002beba) field_cale_ev2_pane_g2

0x707c,	// (0x0002bed2) field_cale_ev2_pane_g3_ParamLimits

0x707c,	// (0x0002bed2) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x000345ee) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x000345ee) field_cale_ev2_pane_g

0x7094,	// (0x0002beea) field_cale_ev2_pane_t1_ParamLimits

0x7094,	// (0x0002beea) field_cale_ev2_pane_t1

0x70ab,	// (0x0002bf01) field_cale_ev2_pane_t2_ParamLimits

0x70ab,	// (0x0002bf01) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x000345f7) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x000345f7) field_cale_ev2_pane_t

0x5bab,	// (0x0002aa01) main_postcard_pane_g5_ParamLimits

0x5bab,	// (0x0002aa01) main_postcard_pane_g5

0x5bc1,	// (0x0002aa17) main_postcard_pane_g6_ParamLimits

0x5bc1,	// (0x0002aa17) main_postcard_pane_g6

0x360f,	// (0x00028465) camera2_autofocus_pane_cp_ParamLimits

0x360f,	// (0x00028465) camera2_autofocus_pane_cp

0x25c9,	// (0x0002741f) main_mup3_pane

0x70e0,	// (0x0002bf36) main_mup3_pane_g1_ParamLimits

0x70e0,	// (0x0002bf36) main_mup3_pane_g1

0x7102,	// (0x0002bf58) main_mup3_pane_g2_ParamLimits

0x7102,	// (0x0002bf58) main_mup3_pane_g2

0x7180,	// (0x0002bfd6) main_mup3_pane_g3_ParamLimits

0x7180,	// (0x0002bfd6) main_mup3_pane_g3

0x71c2,	// (0x0002c018) main_mup3_pane_g4_ParamLimits

0x71c2,	// (0x0002c018) main_mup3_pane_g4

0x7204,	// (0x0002c05a) main_mup3_pane_g5_ParamLimits

0x7204,	// (0x0002c05a) main_mup3_pane_g5

0x7246,	// (0x0002c09c) main_mup3_pane_g6_ParamLimits

0x7246,	// (0x0002c09c) main_mup3_pane_g6

0xc6e0,	// (0x00031536) main_mup3_pane_g7_ParamLimits

0xc6e0,	// (0x00031536) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00034607) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00034607) main_mup3_pane_g

0x72c0,	// (0x0002c116) main_mup3_pane_t1_ParamLimits

0x72c0,	// (0x0002c116) main_mup3_pane_t1

0x7330,	// (0x0002c186) main_mup3_pane_t2_ParamLimits

0x7330,	// (0x0002c186) main_mup3_pane_t2

0x7400,	// (0x0002c256) main_mup3_pane_t4_ParamLimits

0x7400,	// (0x0002c256) main_mup3_pane_t4

0x7456,	// (0x0002c2ac) main_mup3_pane_t5_ParamLimits

0x7456,	// (0x0002c2ac) main_mup3_pane_t5

0x750a,	// (0x0002c360) main_mup3_pane_t6_ParamLimits

0x750a,	// (0x0002c360) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00034618) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00034618) main_mup3_pane_t

0x75be,	// (0x0002c414) mup3_progress_pane_ParamLimits

0x75be,	// (0x0002c414) mup3_progress_pane

0x7640,	// (0x0002c496) popup_mup3_control_window_ParamLimits

0x7640,	// (0x0002c496) popup_mup3_control_window

0xc6ee,	// (0x00031544) popup_mup3_text_window

0x7672,	// (0x0002c4c8) mup3_progress_pane_t1

0x7689,	// (0x0002c4df) mup3_progress_pane_t2

0xc6f6,	// (0x0003154c) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x00034625) mup3_progress_pane_t

0xc70d,	// (0x00031563) mup_progress_pane_cp03

0x234d,	// (0x000271a3) bg_tb_trans_pane_cp04

0x76a0,	// (0x0002c4f6) mup3_volume_pane

0x76a8,	// (0x0002c4fe) popup_mup3_control_window_g1

0x76b1,	// (0x0002c507) mup3_volume_pane_g1

0x76ba,	// (0x0002c510) mup3_volume_pane_g2

0x76c3,	// (0x0002c519) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0003462c) mup3_volume_pane_g

0x234d,	// (0x000271a3) bg_tb_trans_pane_cp03

0xc71d,	// (0x00031573) popup_mup3_text_window_g1

0xc725,	// (0x0003157b) popup_mup3_text_window_t1

0x306c,	// (0x00027ec2) list_calc_item_pane_g1_ParamLimits

0xc112,	// (0x00030f68) mup_volume_pane_cp_g1

0x6ffc,	// (0x0002be52) main_touch_calib_pane_t3

0x7010,	// (0x0002be66) main_touch_calib_pane_t4

0x7024,	// (0x0002be7a) main_touch_calib_pane_t5

0x2357,	// (0x000271ad) aid_cell_size_toolbar2

0x235f,	// (0x000271b5) aid_popup3_width_pane

0x239b,	// (0x000271f1) aid_zoom_text_msg_primary

0xaddb,	// (0x0002fc31) vorec_t7

0x2fd9,	// (0x00027e2f) bg_calc_paper_pane_g1_ParamLimits

0x2fe5,	// (0x00027e3b) bg_calc_paper_pane_g2_ParamLimits

0x2ff1,	// (0x00027e47) bg_calc_paper_pane_g3_ParamLimits

0x2ffd,	// (0x00027e53) bg_calc_paper_pane_g4_ParamLimits

0x3009,	// (0x00027e5f) bg_calc_paper_pane_g5_ParamLimits

0x3015,	// (0x00027e6b) bg_calc_paper_pane_g6_ParamLimits

0x3024,	// (0x00027e7a) bg_calc_paper_pane_g7_ParamLimits

0x3033,	// (0x00027e89) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00033fdf) bg_calc_paper_pane_g_ParamLimits

0x3046,	// (0x00027e9c) calc_bg_paper_pane_g9_ParamLimits

0x3769,	// (0x000285bf) image_qvga_pane_ParamLimits

0x3769,	// (0x000285bf) image_qvga_pane

0x2cfb,	// (0x00027b51) bg_popup_sub_pane_cp04_ParamLimits

0x5d3a,	// (0x0002ab90) popup_mup_playback_window_g1_ParamLimits

0x5d46,	// (0x0002ab9c) popup_mup_playback_window_t1_ParamLimits

0x5d5b,	// (0x0002abb1) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0003436b) popup_mup_playback_window_t_ParamLimits

0x6b5f,	// (0x0002b9b5) main_mup2_pane_g3_ParamLimits

0x6b5f,	// (0x0002b9b5) main_mup2_pane_g3

0x3ba0,	// (0x000289f6) popup_toolbar_window_cp04

0xb113,	// (0x0002ff69) popup_call2_audio_second_window_g3_ParamLimits

0xb113,	// (0x0002ff69) popup_call2_audio_second_window_g3

0xb51d,	// (0x00030373) popup_call2_audio_first_window_g4_ParamLimits

0xb51d,	// (0x00030373) popup_call2_audio_first_window_g4

0xbb9c,	// (0x000309f2) popup_call2_audio_in_window_g4_ParamLimits

0xbb9c,	// (0x000309f2) popup_call2_audio_in_window_g4

0x5d70,	// (0x0002abc6) aid_area_sk_bg_cut_ParamLimits

0x5d70,	// (0x0002abc6) aid_area_sk_bg_cut

0x5d8e,	// (0x0002abe4) aid_area_sk_bg_cut_2_ParamLimits

0x5d8e,	// (0x0002abe4) aid_area_sk_bg_cut_2

0x6e62,	// (0x0002bcb8) aid_placing_details_win

0x6e6a,	// (0x0002bcc0) aid_placing_details_win_2

0xc581,	// (0x000313d7) camera2_autofocus_pane_g1_ParamLimits

0x256a,	// (0x000273c0) popup_fixed_preview_cale_window_ParamLimits

0x256a,	// (0x000273c0) popup_fixed_preview_cale_window

0x542f,	// (0x0002a285) navi_slider_pane_g3

0x5438,	// (0x0002a28e) navi_slider_pane_g4

0x5441,	// (0x0002a297) navi_slider_pane_g5

0x542f,	// (0x0002a285) navi_slider_pane_g6

0xae9b,	// (0x0002fcf1) navi_slider_pane_g7

0x595a,	// (0x0002a7b0) mup_scale_pane_g3

0x5963,	// (0x0002a7b9) mup_scale_pane_g4

0x596c,	// (0x0002a7c2) mup_scale_pane_g5

0x5975,	// (0x0002a7cb) mup_scale_pane_g6

0x597e,	// (0x0002a7d4) mup_scale_pane_g7

0x542f,	// (0x0002a285) cams2_slider_pane_g3

0xc1c7,	// (0x0003101d) cams2_slider_pane_g4

0xc1cf,	// (0x00031025) cams2_slider_pane_g5

0x542f,	// (0x0002a285) cams2_slider_pane_g6

0xc1d7,	// (0x0003102d) cams2_slider_pane_g7

0xc403,	// (0x00031259) camera2_autofocus_pane_cp_g1

0xc733,	// (0x00031589) bg_popup_preview_window_pane_cp02_ParamLimits

0xc733,	// (0x00031589) bg_popup_preview_window_pane_cp02

0xc73f,	// (0x00031595) list_fp_cale_pane_ParamLimits

0xc73f,	// (0x00031595) list_fp_cale_pane

0xc74b,	// (0x000315a1) popup_fixed_preview_cale_window_t1_ParamLimits

0xc74b,	// (0x000315a1) popup_fixed_preview_cale_window_t1

0x76cc,	// (0x0002c522) popup_fixed_preview_cale_window_t2_ParamLimits

0x76cc,	// (0x0002c522) popup_fixed_preview_cale_window_t2

0x76e1,	// (0x0002c537) popup_fixed_preview_cale_window_t3_ParamLimits

0x76e1,	// (0x0002c537) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x00034633) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x00034633) popup_fixed_preview_cale_window_t

0x76f6,	// (0x0002c54c) list_single_fp_cale_pane_ParamLimits

0x76f6,	// (0x0002c54c) list_single_fp_cale_pane

0xc769,	// (0x000315bf) list_single_fp_cale_pane_g1_ParamLimits

0xc769,	// (0x000315bf) list_single_fp_cale_pane_g1

0xc775,	// (0x000315cb) list_single_fp_cale_pane_g2_ParamLimits

0xc775,	// (0x000315cb) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0003463a) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0003463a) list_single_fp_cale_pane_g

0xc78e,	// (0x000315e4) list_single_fp_cale_pane_t1_ParamLimits

0xc78e,	// (0x000315e4) list_single_fp_cale_pane_t1

0xc7a0,	// (0x000315f6) list_single_fp_cale_pane_t2_ParamLimits

0xc7a0,	// (0x000315f6) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00034641) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00034641) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x234d,	// (0x000271a3) main_dialer_pane

0x770b,	// (0x0002c561) aid_cell_size_keypad

0x7715,	// (0x0002c56b) dialer_ne_pane

0x771d,	// (0x0002c573) grid_dialer_command_1_pane

0x7725,	// (0x0002c57b) grid_dialer_command_2_pane

0x772d,	// (0x0002c583) grid_dialer_keypad_pane

0x773f,	// (0x0002c595) bg_popup_call_pane_cp06_ParamLimits

0x773f,	// (0x0002c595) bg_popup_call_pane_cp06

0x774b,	// (0x0002c5a1) dialer_ne_clear_pane_ParamLimits

0x774b,	// (0x0002c5a1) dialer_ne_clear_pane

0xc7d3,	// (0x00031629) dialer_ne_pane_g1

0xc7db,	// (0x00031631) dialer_ne_pane_t1_ParamLimits

0xc7db,	// (0x00031631) dialer_ne_pane_t1

0x7757,	// (0x0002c5ad) dialer_ne_pane_t2_ParamLimits

0x7757,	// (0x0002c5ad) dialer_ne_pane_t2

0x7781,	// (0x0002c5d7) dialer_ne_pane_t3_ParamLimits

0x7781,	// (0x0002c5d7) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x00034646) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x00034646) dialer_ne_pane_t

0x77b1,	// (0x0002c607) dialer_ne_pane_t3_copy1_ParamLimits

0x77b1,	// (0x0002c607) dialer_ne_pane_t3_copy1

0x77e0,	// (0x0002c636) cell_dialer_keypad_pane_ParamLimits

0x77e0,	// (0x0002c636) cell_dialer_keypad_pane

0x77f7,	// (0x0002c64d) cell_dialer_command_1_pane_ParamLimits

0x77f7,	// (0x0002c64d) cell_dialer_command_1_pane

0x780d,	// (0x0002c663) cell_dialer_command_2_pane_ParamLimits

0x780d,	// (0x0002c663) cell_dialer_command_2_pane

0xc7ed,	// (0x00031643) bg_button_pane_cp02_ParamLimits

0xc7ed,	// (0x00031643) bg_button_pane_cp02

0x781c,	// (0x0002c672) cell_dialer_keypad_pane_g1_ParamLimits

0x781c,	// (0x0002c672) cell_dialer_keypad_pane_g1

0xc7ed,	// (0x00031643) bg_button_pane_cp03_ParamLimits

0xc7ed,	// (0x00031643) bg_button_pane_cp03

0x7830,	// (0x0002c686) cell_dialer_command_1_pane_g1_ParamLimits

0x7830,	// (0x0002c686) cell_dialer_command_1_pane_g1

0xc7f9,	// (0x0003164f) bg_button_pane_cp04

0x7844,	// (0x0002c69a) cell_dialer_command_2_pane_g1

0x541e,	// (0x0002a274) bg_button_pane_cp06

0xc801,	// (0x00031657) dialer_ne_clear_pane_g1

0x52c6,	// (0x0002a11c) navi_pane_g2

0x52f4,	// (0x0002a14a) navi_pane_g3

0x0002,

0xf418,	// (0x0003426e) navi_pane_g

0x5381,	// (0x0002a1d7) navi_pane_mv_g2

0x53a8,	// (0x0002a1fe) navi_pane_mv_g5

0x53b0,	// (0x0002a206) navi_pane_mv_t1

0x2fcd,	// (0x00027e23) main_clock2_pane

0x7878,	// (0x0002c6ce) main_clock2_list_pane_ParamLimits

0x7878,	// (0x0002c6ce) main_clock2_list_pane

0x78ae,	// (0x0002c704) main_clock2_pane_t1_ParamLimits

0x78ae,	// (0x0002c704) main_clock2_pane_t1

0x78ea,	// (0x0002c740) main_clock2_pane_t2_ParamLimits

0x78ea,	// (0x0002c740) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0003464d) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0003464d) main_clock2_pane_t

0x7974,	// (0x0002c7ca) popup_clock_analogue_window_cp03_ParamLimits

0x7974,	// (0x0002c7ca) popup_clock_analogue_window_cp03

0x7999,	// (0x0002c7ef) popup_clock_digital_window_cp02_ParamLimits

0x7999,	// (0x0002c7ef) popup_clock_digital_window_cp02

0x7a0a,	// (0x0002c860) main_clock2_list_single_pane_ParamLimits

0x7a0a,	// (0x0002c860) main_clock2_list_single_pane

0x541e,	// (0x0002a274) list_highlight_pane_cp05

0xc809,	// (0x0003165f) main_clock2_list_single_pane_t1

0x3ba0,	// (0x000289f6) popup_toolbar_window_cp04_ParamLimits

0x6e8c,	// (0x0002bce2) camera2_autofocus_pane_g2_ParamLimits

0x6e8c,	// (0x0002bce2) camera2_autofocus_pane_g2

0x6e98,	// (0x0002bcee) camera2_autofocus_pane_g3_ParamLimits

0x6e98,	// (0x0002bcee) camera2_autofocus_pane_g3

0x6ea4,	// (0x0002bcfa) camera2_autofocus_pane_g4_ParamLimits

0x6ea4,	// (0x0002bcfa) camera2_autofocus_pane_g4

0x6eb0,	// (0x0002bd06) camera2_autofocus_pane_g5_ParamLimits

0x6eb0,	// (0x0002bd06) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00034596) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00034596) camera2_autofocus_pane_g

0x70c0,	// (0x0002bf16) camera2_autofocus_pane_cp_g2

0x70c8,	// (0x0002bf1e) camera2_autofocus_pane_cp_g3

0x70d0,	// (0x0002bf26) camera2_autofocus_pane_cp_g4

0x70d8,	// (0x0002bf2e) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x000345fc) camera2_autofocus_pane_cp_g

0x7737,	// (0x0002c58d) popup_dialer_spcha_window

0x234d,	// (0x000271a3) bg_popup_sub_pane_cp07

0xc817,	// (0x0003166d) list_spcha_pane

0xc81f,	// (0x00031675) list_single_spcha_pane_ParamLimits

0xc81f,	// (0x00031675) list_single_spcha_pane

0x234d,	// (0x000271a3) list_highlight_pane_cp06

0xc830,	// (0x00031686) list_single_spcha_pane_t1

0xb946,	// (0x0003079c) popup_call2_audio_out_window_g4_ParamLimits

0xb946,	// (0x0003079c) popup_call2_audio_out_window_g4

0x234d,	// (0x000271a3) main_imed2_pane

0xbf25,	// (0x00030d7b) popup_imed_adjust2_window

0x6740,	// (0x0002b596) popup_imed_trans_window_ParamLimits

0x6740,	// (0x0002b596) popup_imed_trans_window

0xc241,	// (0x00031097) popup_blid_sat_info2_window_t1

0xc24f,	// (0x000310a5) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0003452b) popup_blid_sat_info2_window_t

0x7a3c,	// (0x0002c892) aid_size_cell_colour_35

0x7a5c,	// (0x0002c8b2) aid_size_cell_colour_112

0x7a7c,	// (0x0002c8d2) aid_size_cell_effect

0xbefd,	// (0x00030d53) bg_tb_trans_pane_cp02

0x4a63,	// (0x000298b9) heading_imed_pane

0x7a9c,	// (0x0002c8f2) listscroll_imed_pane

0xc83e,	// (0x00031694) heading_imed_pane_g1

0xc846,	// (0x0003169c) heading_imed_pane_t1

0xc854,	// (0x000316aa) grid_imed_colour_35_pane_ParamLimits

0xc854,	// (0x000316aa) grid_imed_colour_35_pane

0x7aa8,	// (0x0002c8fe) grid_imed_effect_pane

0xc86b,	// (0x000316c1) list_imed_aspect_pane

0x7abe,	// (0x0002c914) scroll_pane_cp027_ParamLimits

0x7abe,	// (0x0002c914) scroll_pane_cp027

0x7acf,	// (0x0002c925) cell_imed_effect_pane_ParamLimits

0x7acf,	// (0x0002c925) cell_imed_effect_pane

0xc873,	// (0x000316c9) cell_imed_colour_pane_ParamLimits

0xc873,	// (0x000316c9) cell_imed_colour_pane

0xc8b5,	// (0x0003170b) cell_imed_colour_pane_g1_ParamLimits

0xc8b5,	// (0x0003170b) cell_imed_colour_pane_g1

0xc8c6,	// (0x0003171c) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8c6,	// (0x0003171c) hgihlgiht_grid_pane_cp016

0x7af6,	// (0x0002c94c) cell_imed_effect_pane_g1

0x7afe,	// (0x0002c954) grid_highlight_pane_cp017

0xc8d7,	// (0x0003172d) list_imed_single_pane_ParamLimits

0xc8d7,	// (0x0003172d) list_imed_single_pane

0x234d,	// (0x000271a3) list_highlight_pane_cp07

0xc8ec,	// (0x00031742) list_imed_aspect_pane_comp1_t1

0xbefd,	// (0x00030d53) bg_tb_trans_pane_cp05

0xc90e,	// (0x00031764) popup_imed_adjust2_window_g1

0xc935,	// (0x0003178b) popup_imed_adjust2_window_t1

0xc94d,	// (0x000317a3) slider_imed_adjust_pane

0xc961,	// (0x000317b7) slider_imed_adjust_pane_g1

0xc971,	// (0x000317c7) slider_imed_adjust_pane_g2

0xc981,	// (0x000317d7) slider_imed_adjust_pane_g3

0xc992,	// (0x000317e8) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0003466a) slider_imed_adjust_pane_g

0x7b07,	// (0x0002c95d) aid_size_cell_clipart2

0x7b13,	// (0x0002c969) grid_imed_clipart_pane

0xc9a3,	// (0x000317f9) scroll_pane_cp031

0x7b1d,	// (0x0002c973) cell_imed_clipart_pane_ParamLimits

0x7b1d,	// (0x0002c973) cell_imed_clipart_pane

0x7b3f,	// (0x0002c995) cell_imed_clipart_pane_g1

0x234d,	// (0x000271a3) grid_highlight_pane_cp014

0x788d,	// (0x0002c6e3) main_clock2_pane_g1_ParamLimits

0x788d,	// (0x0002c6e3) main_clock2_pane_g1

0x79b5,	// (0x0002c80b) aid_call2_pane_cp10

0x79c7,	// (0x0002c81d) aid_call_pane_cp10

0x51d8,	// (0x0002a02e) popup_clock_analogue_window_cp10_g1

0x51d8,	// (0x0002a02e) popup_clock_analogue_window_cp10_g2

0x79d9,	// (0x0002c82f) popup_clock_analogue_window_cp10_g3

0x79d9,	// (0x0002c82f) popup_clock_analogue_window_cp10_g4

0x51d8,	// (0x0002a02e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x00034658) popup_clock_analogue_window_cp10_g

0x79eb,	// (0x0002c841) popup_clock_analogue_window_cp10_t1

0x1825,	// (0x0002667b) clock_digital_number_pane_cp10_ParamLimits

0x1825,	// (0x0002667b) clock_digital_number_pane_cp10

0x183d,	// (0x00026693) clock_digital_number_pane_cp11_ParamLimits

0x183d,	// (0x00026693) clock_digital_number_pane_cp11

0x1855,	// (0x000266ab) clock_digital_number_pane_cp12_ParamLimits

0x1855,	// (0x000266ab) clock_digital_number_pane_cp12

0x186d,	// (0x000266c3) clock_digital_number_pane_cp13_ParamLimits

0x186d,	// (0x000266c3) clock_digital_number_pane_cp13

0x1885,	// (0x000266db) clock_digital_separator_pane_cp10_ParamLimits

0x1885,	// (0x000266db) clock_digital_separator_pane_cp10

0x7a1c,	// (0x0002c872) popup_clock_digital_window_cp02_t1_ParamLimits

0x7a1c,	// (0x0002c872) popup_clock_digital_window_cp02_t1

0x2cf3,	// (0x00027b49) clock_digital_number_pane_cp10_g1

0x2cf3,	// (0x00027b49) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00034673) clock_digital_number_pane_cp10_g

0x2cf3,	// (0x00027b49) clock_digital_separator_pane_cp10_g1

0x2cf3,	// (0x00027b49) clock_digital_separator_pane_g2_cp10

0x53ee,	// (0x0002a244) navi_pane_vded_g4

0x53f7,	// (0x0002a24d) navi_pane_vded_g5

0x5400,	// (0x0002a256) navi_pane_vded_t1

0x234d,	// (0x000271a3) main_vded_pane

0x7b48,	// (0x0002c99e) main_vded_pane_g1

0x7b52,	// (0x0002c9a8) main_vded_pane_g2

0x7b5c,	// (0x0002c9b2) main_vded_pane_g3

0x0002,

0xf822,	// (0x00034678) main_vded_pane_g

0x7b66,	// (0x0002c9bc) main_vded_pane_t1

0x7b74,	// (0x0002c9ca) main_vded_pane_t2

0x0001,

0xf829,	// (0x0003467f) main_vded_pane_t

0x7b82,	// (0x0002c9d8) vded_slider_pane

0x7b8a,	// (0x0002c9e0) vded_video_pane

0xc9ab,	// (0x00031801) vded_video_pane_g1

0x7b92,	// (0x0002c9e8) vded_video_pane_g2

0xc403,	// (0x00031259) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00034684) vded_video_pane_g

0xc9b5,	// (0x0003180b) vded_slider_pane_g1

0xc112,	// (0x00030f68) vded_slider_pane_g2

0xc9be,	// (0x00031814) vded_slider_pane_g3

0xc9c7,	// (0x0003181d) vded_slider_pane_g4

0xc9d0,	// (0x00031826) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0003468b) vded_slider_pane_g

0x7628,	// (0x0002c47e) mup3_rocker_pane_ParamLimits

0x7628,	// (0x0002c47e) mup3_rocker_pane

0x7b9b,	// (0x0002c9f1) mup3_control_keys_pane_g1

0x7ba3,	// (0x0002c9f9) mup3_control_keys_pane_g2

0x7bab,	// (0x0002ca01) mup3_control_keys_pane_g3

0x7bb3,	// (0x0002ca09) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00034696) mup3_control_keys_pane_g

0x25ab,	// (0x00027401) popup_toolbar2_fixed_window_cp01_ParamLimits

0x25ab,	// (0x00027401) popup_toolbar2_fixed_window_cp01

0x765c,	// (0x0002c4b2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x765c,	// (0x0002c4b2) popup_toolbar2_fixed_window_cp02

0xb285,	// (0x000300db) popup_call2_audio_second_window_t4_ParamLimits

0xb285,	// (0x000300db) popup_call2_audio_second_window_t4

0xb7b3,	// (0x00030609) popup_call2_audio_first_window_t6_ParamLimits

0xb7b3,	// (0x00030609) popup_call2_audio_first_window_t6

0xba49,	// (0x0003089f) popup_call2_audio_out_window_t6_ParamLimits

0xba49,	// (0x0003089f) popup_call2_audio_out_window_t6

0x234d,	// (0x000271a3) main_vitu_pane

0x7bc3,	// (0x0002ca19) aid_size_cell_itu_ParamLimits

0x7bc3,	// (0x0002ca19) aid_size_cell_itu

0x25c9,	// (0x0002741f) bg_popup_window_pane_cp08_ParamLimits

0x25c9,	// (0x0002741f) bg_popup_window_pane_cp08

0x7bd9,	// (0x0002ca2f) field_vitu_entry_pane_ParamLimits

0x7bd9,	// (0x0002ca2f) field_vitu_entry_pane

0x7bf0,	// (0x0002ca46) grid_vitu_function_pane_ParamLimits

0x7bf0,	// (0x0002ca46) grid_vitu_function_pane

0x7c0b,	// (0x0002ca61) grid_vitu_itu_pane_ParamLimits

0x7c0b,	// (0x0002ca61) grid_vitu_itu_pane

0x7c29,	// (0x0002ca7f) cell_vitu_itu_pane_ParamLimits

0x7c29,	// (0x0002ca7f) cell_vitu_itu_pane

0x7c4b,	// (0x0002caa1) cell_vitu_function_pane_ParamLimits

0x7c4b,	// (0x0002caa1) cell_vitu_function_pane

0x25c9,	// (0x0002741f) bg_popup_sub_pane_cp08_ParamLimits

0x25c9,	// (0x0002741f) bg_popup_sub_pane_cp08

0x7c64,	// (0x0002caba) field_vitu_entry_pane_t1_ParamLimits

0x7c64,	// (0x0002caba) field_vitu_entry_pane_t1

0xc9f1,	// (0x00031847) field_vitu_entry_pane_t2_ParamLimits

0xc9f1,	// (0x00031847) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x000346a4) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x000346a4) field_vitu_entry_pane_t

0xca0e,	// (0x00031864) bg_button_pane_cp05_ParamLimits

0xca0e,	// (0x00031864) bg_button_pane_cp05

0x7c82,	// (0x0002cad8) cell_vitu_itu_pane_g1

0x7c9a,	// (0x0002caf0) cell_vitu_itu_pane_t1_ParamLimits

0x7c9a,	// (0x0002caf0) cell_vitu_itu_pane_t1

0x7cac,	// (0x0002cb02) cell_vitu_itu_pane_t2_ParamLimits

0x7cac,	// (0x0002cb02) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x000346a9) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x000346a9) cell_vitu_itu_pane_t

0xca1c,	// (0x00031872) bg_button_pane_cp07

0x7ce1,	// (0x0002cb37) cell_vitu_function_pane_g1

0xacef,	// (0x0002fb45) main_calc_pane_g1

0x238f,	// (0x000271e5) aid_visual_content_pane

0x234d,	// (0x000271a3) main_vradio_pane

0x7cea,	// (0x0002cb40) main_vradio_pane_g1_ParamLimits

0x7cea,	// (0x0002cb40) main_vradio_pane_g1

0xca26,	// (0x0003187c) main_vradio_pane_g2_ParamLimits

0xca26,	// (0x0003187c) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x000346b0) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x000346b0) main_vradio_pane_g

0x7d03,	// (0x0002cb59) main_vradio_pane_t1_ParamLimits

0x7d03,	// (0x0002cb59) main_vradio_pane_t1

0x7d18,	// (0x0002cb6e) main_vradio_pane_t2_ParamLimits

0x7d18,	// (0x0002cb6e) main_vradio_pane_t2

0xca33,	// (0x00031889) main_vradio_pane_t3_ParamLimits

0xca33,	// (0x00031889) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x000346b5) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x000346b5) main_vradio_pane_t

0x7d2d,	// (0x0002cb83) vradio_rocker_control_pane_ParamLimits

0x7d2d,	// (0x0002cb83) vradio_rocker_control_pane

0x7d3f,	// (0x0002cb95) vradio_station_info_pane_ParamLimits

0x7d3f,	// (0x0002cb95) vradio_station_info_pane

0xca47,	// (0x0003189d) vradio_frequency_info_pane_ParamLimits

0xca47,	// (0x0003189d) vradio_frequency_info_pane

0xc403,	// (0x00031259) vradio_station_info_pane_g1

0xca56,	// (0x000318ac) vradio_station_info_pane_t1_ParamLimits

0xca56,	// (0x000318ac) vradio_station_info_pane_t1

0xca78,	// (0x000318ce) vradio_station_info_pane_t2_ParamLimits

0xca78,	// (0x000318ce) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x000346bc) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x000346bc) vradio_station_info_pane_t

0xca8a,	// (0x000318e0) vradio_tuning_pane

0xca92,	// (0x000318e8) vradio_rocker_control_pane_g1

0xca9a,	// (0x000318f0) vradio_rocker_control_pane_g2

0xcaa2,	// (0x000318f8) vradio_rocker_control_pane_g3

0xcaaa,	// (0x00031900) vradio_rocker_control_pane_g4

0xcab2,	// (0x00031908) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x000346c1) vradio_rocker_control_pane_g

0x7d51,	// (0x0002cba7) vradio_frequency_info_pane_g1

0xcaba,	// (0x00031910) vradio_frequency_info_pane_t1_ParamLimits

0xcaba,	// (0x00031910) vradio_frequency_info_pane_t1

0x7d5b,	// (0x0002cbb1) vradio_tuning_pane_g1

0x7d66,	// (0x0002cbbc) vradio_tuning_pane_t1

0x23e4,	// (0x0002723a) area_side_right_pane_ParamLimits

0x23e4,	// (0x0002723a) area_side_right_pane

0xbec4,	// (0x00030d1a) status_small_pane_g1

0xbecc,	// (0x00030d22) status_small_pane_g2

0xbed5,	// (0x00030d2b) status_small_pane_g3

0xbede,	// (0x00030d34) status_small_pane_g4

0x0003,

0xf62b,	// (0x00034481) status_small_pane_g

0xbee7,	// (0x00030d3d) status_small_pane_t1

0x234d,	// (0x000271a3) main_video3_pane

0xcace,	// (0x00031924) cams_zoom_vslider_pane

0xcad6,	// (0x0003192c) image3_wide_pane_ParamLimits

0xcad6,	// (0x0003192c) image3_wide_pane

0xcaf0,	// (0x00031946) image3_wide_small_pane

0xcafc,	// (0x00031952) main_video3_pane_g1_ParamLimits

0xcafc,	// (0x00031952) main_video3_pane_g1

0xcb18,	// (0x0003196e) main_video3_pane_g2_ParamLimits

0xcb18,	// (0x0003196e) main_video3_pane_g2

0x0001,

0xf876,	// (0x000346cc) main_video3_pane_g_ParamLimits

0xf876,	// (0x000346cc) main_video3_pane_g

0xcb34,	// (0x0003198a) main_video3_pane_t1_ParamLimits

0xcb34,	// (0x0003198a) main_video3_pane_t1

0xcb5f,	// (0x000319b5) main_video3_pane_t2_ParamLimits

0xcb5f,	// (0x000319b5) main_video3_pane_t2

0xcb8a,	// (0x000319e0) main_video3_pane_t3_ParamLimits

0xcb8a,	// (0x000319e0) main_video3_pane_t3

0x0002,

0xf87b,	// (0x000346d1) main_video3_pane_t_ParamLimits

0xf87b,	// (0x000346d1) main_video3_pane_t

0xcbb7,	// (0x00031a0d) cams_zoom_vslider_pane_g1

0xcbc0,	// (0x00031a16) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x000346d8) cams_zoom_vslider_pane_g

0xcbc8,	// (0x00031a1e) small_slider_vertical_pane

0xc403,	// (0x00031259) small_slider_vertical_pane_g1

0xc403,	// (0x00031259) small_slider_vertical_pane_g2

0xcbd0,	// (0x00031a26) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x000346dd) small_slider_vertical_pane_g

0x234d,	// (0x000271a3) main_hwr_training_pane

0xcbd9,	// (0x00031a2f) hwr_training_instruct_pane_ParamLimits

0xcbd9,	// (0x00031a2f) hwr_training_instruct_pane

0x7d75,	// (0x0002cbcb) hwr_training_navi_pane_ParamLimits

0x7d75,	// (0x0002cbcb) hwr_training_navi_pane

0x7d94,	// (0x0002cbea) hwr_training_write_pane_ParamLimits

0x7d94,	// (0x0002cbea) hwr_training_write_pane

0x234d,	// (0x000271a3) bg_frame_shadow_pane

0xcc10,	// (0x00031a66) hwr_training_write_pane_g1

0xcc18,	// (0x00031a6e) hwr_training_write_pane_g2

0xcc20,	// (0x00031a76) hwr_training_write_pane_g3

0xcc28,	// (0x00031a7e) hwr_training_write_pane_g4

0xcc30,	// (0x00031a86) hwr_training_write_pane_g5

0xcc38,	// (0x00031a8e) hwr_training_write_pane_g6

0xcc40,	// (0x00031a96) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x000346e4) hwr_training_write_pane_g

0xcc48,	// (0x00031a9e) hwr_training_navi_pane_g1_ParamLimits

0xcc48,	// (0x00031a9e) hwr_training_navi_pane_g1

0xcc5a,	// (0x00031ab0) hwr_training_navi_pane_g2_ParamLimits

0xcc5a,	// (0x00031ab0) hwr_training_navi_pane_g2

0xcc6c,	// (0x00031ac2) hwr_training_navi_pane_g3_ParamLimits

0xcc6c,	// (0x00031ac2) hwr_training_navi_pane_g3

0xcc7c,	// (0x00031ad2) hwr_training_navi_pane_g4_ParamLimits

0xcc7c,	// (0x00031ad2) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x000346f3) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x000346f3) hwr_training_navi_pane_g

0xcc89,	// (0x00031adf) hwr_training_navi_pane_t1

0x7dcf,	// (0x0002cc25) list_single_hwr_training_instruct_pane_ParamLimits

0x7dcf,	// (0x0002cc25) list_single_hwr_training_instruct_pane

0xcc97,	// (0x00031aed) list_single_hwr_training_instruct_pane_t1

0xc343,	// (0x00031199) bg_frame_shadow_pane_g1

0xcca6,	// (0x00031afc) bg_frame_shadow_pane_g2

0xccae,	// (0x00031b04) bg_frame_shadow_pane_g3

0xccb6,	// (0x00031b0c) bg_frame_shadow_pane_g4

0xccbe,	// (0x00031b14) bg_frame_shadow_pane_g5

0xccc6,	// (0x00031b1c) bg_frame_shadow_pane_g6

0xccce,	// (0x00031b24) bg_frame_shadow_pane_g7

0x316a,	// (0x00027fc0) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x000346fe) bg_frame_shadow_pane_g

0x234d,	// (0x000271a3) main_video_tele_dialer_pane

0x18aa,	// (0x00026700) aid_size_cell_video_keypad_ParamLimits

0x18aa,	// (0x00026700) aid_size_cell_video_keypad

0x18c4,	// (0x0002671a) grid_video_dialer_keypad_pane_ParamLimits

0x18c4,	// (0x0002671a) grid_video_dialer_keypad_pane

0x1910,	// (0x00026766) video_down_pane_cp_ParamLimits

0x1910,	// (0x00026766) video_down_pane_cp

0x1928,	// (0x0002677e) cell_video_dialer_keypad_pane_ParamLimits

0x1928,	// (0x0002677e) cell_video_dialer_keypad_pane

0xccd6,	// (0x00031b2c) bg_button_pane_cp08_ParamLimits

0xccd6,	// (0x00031b2c) bg_button_pane_cp08

0x7e00,	// (0x0002cc56) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e00,	// (0x0002cc56) cell_video_dialer_keypad_pane_g1

0x7612,	// (0x0002c468) mup3_rocker2_pane_ParamLimits

0x7612,	// (0x0002c468) mup3_rocker2_pane

0xc403,	// (0x00031259) mup3_rocker2_pane_g1

0x6621,	// (0x0002b477) main_dialer2_pane

0x234d,	// (0x000271a3) main_mp4_pane

0xccea,	// (0x00031b40) main_mp4_pane_g1_ParamLimits

0xccea,	// (0x00031b40) main_mp4_pane_g1

0xccea,	// (0x00031b40) main_mp4_pane_g2_ParamLimits

0xccea,	// (0x00031b40) main_mp4_pane_g2

0x194a,	// (0x000267a0) main_mp4_pane_g3_ParamLimits

0x194a,	// (0x000267a0) main_mp4_pane_g3

0xccf8,	// (0x00031b4e) main_mp4_pane_g4_ParamLimits

0xccf8,	// (0x00031b4e) main_mp4_pane_g4

0xcd20,	// (0x00031b76) main_mp4_pane_g5_ParamLimits

0xcd20,	// (0x00031b76) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0003471e) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0003471e) main_mp4_pane_g

0xcd70,	// (0x00031bc6) main_mp4_pane_t1_ParamLimits

0xcd70,	// (0x00031bc6) main_mp4_pane_t1

0xcdcc,	// (0x00031c22) main_mp4_pane_t2_ParamLimits

0xcdcc,	// (0x00031c22) main_mp4_pane_t2

0xce1e,	// (0x00031c74) main_mp4_pane_t3_ParamLimits

0xce1e,	// (0x00031c74) main_mp4_pane_t3

0xce3e,	// (0x00031c94) main_mp4_pane_t4_ParamLimits

0xce3e,	// (0x00031c94) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0003472b) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0003472b) main_mp4_pane_t

0xce82,	// (0x00031cd8) mp4_progress_pane_ParamLimits

0xce82,	// (0x00031cd8) mp4_progress_pane

0xcecc,	// (0x00031d22) mp4_rocker_pane_ParamLimits

0xcecc,	// (0x00031d22) mp4_rocker_pane

0xcef4,	// (0x00031d4a) mp4_progress_pane_t1

0xcf0d,	// (0x00031d63) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00034734) mp4_progress_pane_t

0xcf26,	// (0x00031d7c) mup_progress_pane_cp04

0xcf32,	// (0x00031d88) mp4_rocker_pane_g1

0x1986,	// (0x000267dc) aid_cell_size_keypad2_ParamLimits

0x1986,	// (0x000267dc) aid_cell_size_keypad2

0x199c,	// (0x000267f2) dialer2_ne_pane_ParamLimits

0x199c,	// (0x000267f2) dialer2_ne_pane

0x19b6,	// (0x0002680c) grid_dialer2_keypad_pane_ParamLimits

0x19b6,	// (0x0002680c) grid_dialer2_keypad_pane

0xc1e8,	// (0x0003103e) bg_popup_call_pane_cp07_ParamLimits

0xc1e8,	// (0x0003103e) bg_popup_call_pane_cp07

0x7e3a,	// (0x0002cc90) dialer2_ne_pane_t1_ParamLimits

0x7e3a,	// (0x0002cc90) dialer2_ne_pane_t1

0x19d2,	// (0x00026828) cell_dialer2_keypad_pane_ParamLimits

0x19d2,	// (0x00026828) cell_dialer2_keypad_pane

0xcf4e,	// (0x00031da4) bg_button_pane_pane_cp04_ParamLimits

0xcf4e,	// (0x00031da4) bg_button_pane_pane_cp04

0x7e75,	// (0x0002cccb) cell_dialer2_keypad_pane_g1_ParamLimits

0x7e75,	// (0x0002cccb) cell_dialer2_keypad_pane_g1

0x3ab4,	// (0x0002890a) aid_placing_vt_set_content_ParamLimits

0x3ab4,	// (0x0002890a) aid_placing_vt_set_content

0x3ad4,	// (0x0002892a) aid_placing_vt_set_title_ParamLimits

0x3ad4,	// (0x0002892a) aid_placing_vt_set_title

0x234d,	// (0x000271a3) main_image3_pane

0x1a52,	// (0x000268a8) area_side_right_pane_cp01_ParamLimits

0x1a52,	// (0x000268a8) area_side_right_pane_cp01

0xccea,	// (0x00031b40) main_image3_pane_g1_ParamLimits

0xccea,	// (0x00031b40) main_image3_pane_g1

0x1a69,	// (0x000268bf) main_image3_pane_g2_ParamLimits

0x1a69,	// (0x000268bf) main_image3_pane_g2

0x1a91,	// (0x000268e7) main_image3_pane_g3_ParamLimits

0x1a91,	// (0x000268e7) main_image3_pane_g3

0x1abb,	// (0x00026911) main_image3_pane_g4_ParamLimits

0x1abb,	// (0x00026911) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00034743) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00034743) main_image3_pane_g

0x1ae5,	// (0x0002693b) main_image3_pane_t1_ParamLimits

0x1ae5,	// (0x0002693b) main_image3_pane_t1

0x1b3d,	// (0x00026993) main_image3_pane_t2_ParamLimits

0x1b3d,	// (0x00026993) main_image3_pane_t2

0x1b8f,	// (0x000269e5) main_image3_pane_t3_ParamLimits

0x1b8f,	// (0x000269e5) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0003474c) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0003474c) main_image3_pane_t

0x25c9,	// (0x0002741f) grid_sctrl_middle_pane_cp01_ParamLimits

0x25c9,	// (0x0002741f) grid_sctrl_middle_pane_cp01

0x7edd,	// (0x0002cd33) cell_sctrl_middle_pane_cp01_ParamLimits

0x7edd,	// (0x0002cd33) cell_sctrl_middle_pane_cp01

0x7efa,	// (0x0002cd50) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7efa,	// (0x0002cd50) cell_sctrl_middle_pane_cp01_g1

0x234d,	// (0x000271a3) main_call4_pane

0x7f10,	// (0x0002cd66) aid_size_button_call4_ParamLimits

0x7f10,	// (0x0002cd66) aid_size_button_call4

0x7f41,	// (0x0002cd97) call4_windows_pane_ParamLimits

0x7f41,	// (0x0002cd97) call4_windows_pane

0x7f61,	// (0x0002cdb7) grid_call4_button_pane_ParamLimits

0x7f61,	// (0x0002cdb7) grid_call4_button_pane

0xcf8c,	// (0x00031de2) call4_windows_conf_pane

0xcfa3,	// (0x00031df9) popup_call4_audio_first_window_ParamLimits

0xcfa3,	// (0x00031df9) popup_call4_audio_first_window

0xcfef,	// (0x00031e45) popup_call4_audio_second_window_ParamLimits

0xcfef,	// (0x00031e45) popup_call4_audio_second_window

0xd003,	// (0x00031e59) popup_call4_audio_wait_window_ParamLimits

0xd003,	// (0x00031e59) popup_call4_audio_wait_window

0x7f8e,	// (0x0002cde4) cell_call4_button_pane_ParamLimits

0x7f8e,	// (0x0002cde4) cell_call4_button_pane

0x7fb7,	// (0x0002ce0d) bg_button_pane_cp09_ParamLimits

0x7fb7,	// (0x0002ce0d) bg_button_pane_cp09

0x7fc3,	// (0x0002ce19) cell_call4_button_pane_g1_ParamLimits

0x7fc3,	// (0x0002ce19) cell_call4_button_pane_g1

0x7fe9,	// (0x0002ce3f) cell_call4_button_pane_t1_ParamLimits

0x7fe9,	// (0x0002ce3f) cell_call4_button_pane_t1

0xd04b,	// (0x00031ea1) popup_call4_audio_conf_window_ParamLimits

0xd04b,	// (0x00031ea1) popup_call4_audio_conf_window

0x7672,	// (0x0002c4c8) mup3_progress_pane_t1_ParamLimits

0x7689,	// (0x0002c4df) mup3_progress_pane_t2_ParamLimits

0xc6f6,	// (0x0003154c) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x00034625) mup3_progress_pane_t_ParamLimits

0xc70d,	// (0x00031563) mup_progress_pane_cp03_ParamLimits

0x7bbb,	// (0x0002ca11) mup3_control_keys_pane_g4_copy1

0xceb0,	// (0x00031d06) mp4_rocker2_pane_ParamLimits

0xceb0,	// (0x00031d06) mp4_rocker2_pane

0xd05f,	// (0x00031eb5) mp4_rocker2_pane_g1

0xd067,	// (0x00031ebd) mp4_rocker2_pane_g2

0xd06f,	// (0x00031ec5) mp4_rocker2_pane_g3

0xd077,	// (0x00031ecd) mp4_rocker2_pane_g4

0xd07f,	// (0x00031ed5) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00034755) mp4_rocker2_pane_g

0x234d,	// (0x000271a3) main_camera4_pane

0x234d,	// (0x000271a3) main_video4_pane

0x18de,	// (0x00026734) main_video_tele_dialer_pane_t1_ParamLimits

0x18de,	// (0x00026734) main_video_tele_dialer_pane_t1

0x18f7,	// (0x0002674d) main_video_tele_dialer_pane_t2_ParamLimits

0x18f7,	// (0x0002674d) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0003470f) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0003470f) main_video_tele_dialer_pane_t

0x1c2f,	// (0x00026a85) cam4_autofocus_pane_ParamLimits

0x1c2f,	// (0x00026a85) cam4_autofocus_pane

0x1c45,	// (0x00026a9b) cam4_image_uncrop_pane_ParamLimits

0x1c45,	// (0x00026a9b) cam4_image_uncrop_pane

0x1c5f,	// (0x00026ab5) cam4_indicators_pane_ParamLimits

0x1c5f,	// (0x00026ab5) cam4_indicators_pane

0x1c8a,	// (0x00026ae0) main_camera4_pane_g1_ParamLimits

0x1c8a,	// (0x00026ae0) main_camera4_pane_g1

0x1c9d,	// (0x00026af3) main_camera4_pane_g2_ParamLimits

0x1c9d,	// (0x00026af3) main_camera4_pane_g2

0x1cb0,	// (0x00026b06) main_camera4_pane_g3_ParamLimits

0x1cb0,	// (0x00026b06) main_camera4_pane_g3

0x1cc3,	// (0x00026b19) main_camera4_pane_g4_ParamLimits

0x1cc3,	// (0x00026b19) main_camera4_pane_g4

0x1cd6,	// (0x00026b2c) main_camera4_pane_g5_ParamLimits

0x1cd6,	// (0x00026b2c) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00034760) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00034760) main_camera4_pane_g

0x1cfa,	// (0x00026b50) main_camera4_pane_t1_ParamLimits

0x1cfa,	// (0x00026b50) main_camera4_pane_t1

0xd097,	// (0x00031eed) bg_tb_trans_pane_cp06

0xd0ad,	// (0x00031f03) cam4_indicators_pane_g1

0xd0be,	// (0x00031f14) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0003477b) cam4_indicators_pane_g

0xd0dc,	// (0x00031f32) cam4_indicators_pane_t1

0x1d4a,	// (0x00026ba0) main_video4_pane_g1_ParamLimits

0x1d4a,	// (0x00026ba0) main_video4_pane_g1

0x1d5d,	// (0x00026bb3) main_video4_pane_g2_ParamLimits

0x1d5d,	// (0x00026bb3) main_video4_pane_g2

0x1d71,	// (0x00026bc7) main_video4_pane_g3_ParamLimits

0x1d71,	// (0x00026bc7) main_video4_pane_g3

0x1d85,	// (0x00026bdb) main_video4_pane_g4_ParamLimits

0x1d85,	// (0x00026bdb) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00034782) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00034782) main_video4_pane_g

0x1dad,	// (0x00026c03) vid4_indicators_pane_ParamLimits

0x1dad,	// (0x00026c03) vid4_indicators_pane

0x1ddd,	// (0x00026c33) video4_image_uncrop_cif_pane_ParamLimits

0x1ddd,	// (0x00026c33) video4_image_uncrop_cif_pane

0x1df7,	// (0x00026c4d) video4_image_uncrop_nhd_pane_ParamLimits

0x1df7,	// (0x00026c4d) video4_image_uncrop_nhd_pane

0x1c45,	// (0x00026a9b) video4_image_uncrop_vga_pane_ParamLimits

0x1c45,	// (0x00026a9b) video4_image_uncrop_vga_pane

0xd0fe,	// (0x00031f54) bg_tb_trans_pane_cp07

0x1e0b,	// (0x00026c61) vid4_indicators_pane_g1

0x1e18,	// (0x00026c6e) vid4_indicators_pane_g2

0x1e25,	// (0x00026c7b) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0003478d) vid4_indicators_pane_g

0x1e4a,	// (0x00026ca0) vid4_indicators_pane_t1

0x8035,	// (0x0002ce8b) cam4_autofocus_pane_g1

0x803d,	// (0x0002ce93) cam4_autofocus_pane_g2

0x8045,	// (0x0002ce9b) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00034798) cam4_autofocus_pane_g

0x804d,	// (0x0002cea3) cam4_autofocus_pane_g3_copy1

0x7de4,	// (0x0002cc3a) video_down_pane_cp_t1

0x7df2,	// (0x0002cc48) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x00034714) video_down_pane_cp_t

0x25c9,	// (0x0002741f) popup_vitu2_window_ParamLimits

0x25c9,	// (0x0002741f) popup_vitu2_window

0x1e5c,	// (0x00026cb2) aid_size_cell2_itu2_ParamLimits

0x1e5c,	// (0x00026cb2) aid_size_cell2_itu2

0x1e82,	// (0x00026cd8) aid_size_cell_itu2_ParamLimits

0x1e82,	// (0x00026cd8) aid_size_cell_itu2

0x1ede,	// (0x00026d34) bg_popup_window_pane_cp09_ParamLimits

0x1ede,	// (0x00026d34) bg_popup_window_pane_cp09

0x1eec,	// (0x00026d42) field_vitu2_entry_pane_ParamLimits

0x1eec,	// (0x00026d42) field_vitu2_entry_pane

0x1f12,	// (0x00026d68) grid_vitu2_function_pane_ParamLimits

0x1f12,	// (0x00026d68) grid_vitu2_function_pane

0x1f63,	// (0x00026db9) grid_vitu2_itu_pane_ParamLimits

0x1f63,	// (0x00026db9) grid_vitu2_itu_pane

0x1ff6,	// (0x00026e4c) cell_vitu2_itu_pane_ParamLimits

0x1ff6,	// (0x00026e4c) cell_vitu2_itu_pane

0x201a,	// (0x00026e70) cell_vitu2_function_pane_ParamLimits

0x201a,	// (0x00026e70) cell_vitu2_function_pane

0xd116,	// (0x00031f6c) bg_popup_call_pane_cp08_ParamLimits

0xd116,	// (0x00031f6c) bg_popup_call_pane_cp08

0xd12f,	// (0x00031f85) field_vitu2_entry_pane_g1

0xd13b,	// (0x00031f91) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0003479f) field_vitu2_entry_pane_g

0xd155,	// (0x00031fab) field_vitu2_entry_pane_t1_ParamLimits

0xd155,	// (0x00031fab) field_vitu2_entry_pane_t1

0xd184,	// (0x00031fda) field_vitu2_entry_pane_t2_ParamLimits

0xd184,	// (0x00031fda) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x000347a6) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x000347a6) field_vitu2_entry_pane_t

0x2059,	// (0x00026eaf) bg_button_pane_cp010_ParamLimits

0x2059,	// (0x00026eaf) bg_button_pane_cp010

0x2067,	// (0x00026ebd) cell_vitu2_itu_pane_g1

0x2085,	// (0x00026edb) cell_vitu2_itu_pane_t1_ParamLimits

0x2085,	// (0x00026edb) cell_vitu2_itu_pane_t1

0x20eb,	// (0x00026f41) cell_vitu2_itu_pane_t2_ParamLimits

0x20eb,	// (0x00026f41) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x000347b0) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x000347b0) cell_vitu2_itu_pane_t

0xd1a9,	// (0x00031fff) bg_button_pane_cp011

0x21c7,	// (0x0002701d) cell_vitu2_function_pane_g1

0x234d,	// (0x000271a3) main_myfav_hc_pane

0x1bdf,	// (0x00026a35) popup_image3_note_pane_ParamLimits

0x1bdf,	// (0x00026a35) popup_image3_note_pane

0x1bfb,	// (0x00026a51) popup_image3_tool_bar_pane_ParamLimits

0x1bfb,	// (0x00026a51) popup_image3_tool_bar_pane

0x216f,	// (0x00026fc5) cell_vitu2_itu_pane_t3_ParamLimits

0x216f,	// (0x00026fc5) cell_vitu2_itu_pane_t3

0x234d,	// (0x000271a3) bg_popup_trans_pane

0xd1b7,	// (0x0003200d) grid_image3_tool_bar_pane

0xd1c1,	// (0x00032017) bg_popup_trans_pane_g1

0x3ff7,	// (0x00028e4d) bg_popup_trans_pane_g2

0xd1c9,	// (0x0003201f) bg_popup_trans_pane_g3

0xd1d1,	// (0x00032027) bg_popup_trans_pane_g4

0xd1d9,	// (0x0003202f) bg_popup_trans_pane_g5

0xd1e1,	// (0x00032037) bg_popup_trans_pane_g6

0xd1e9,	// (0x0003203f) bg_popup_trans_pane_g7

0xd1f1,	// (0x00032047) bg_popup_trans_pane_g8

0x3fd7,	// (0x00028e2d) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x000347b7) bg_popup_trans_pane_g

0xd1f9,	// (0x0003204f) cell_image3_tool_bar_pane_ParamLimits

0xd1f9,	// (0x0003204f) cell_image3_tool_bar_pane

0xc403,	// (0x00031259) cell_image3_tool_bar_pane_g1

0x234d,	// (0x000271a3) bg_popup_trans_pane_cp1

0xd20d,	// (0x00032063) popup_image3_note_pane_t1

0xd21b,	// (0x00032071) popup_image3_note_pane_t2

0xd229,	// (0x0003207f) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x000347ca) popup_image3_note_pane_t

0xd237,	// (0x0003208d) popup_image3_note_pane_t3_copy1

0x8055,	// (0x0002ceab) bg_myfav_hc_instruction_pane_ParamLimits

0x8055,	// (0x0002ceab) bg_myfav_hc_instruction_pane

0x8069,	// (0x0002cebf) cell_myfav_contact_pane_ParamLimits

0x8069,	// (0x0002cebf) cell_myfav_contact_pane

0x8087,	// (0x0002cedd) cell_myfav_contact_pane_cp1_ParamLimits

0x8087,	// (0x0002cedd) cell_myfav_contact_pane_cp1

0x809f,	// (0x0002cef5) cell_myfav_contact_pane_cp2_ParamLimits

0x809f,	// (0x0002cef5) cell_myfav_contact_pane_cp2

0x80b7,	// (0x0002cf0d) cell_myfav_contact_pane_cp3_ParamLimits

0x80b7,	// (0x0002cf0d) cell_myfav_contact_pane_cp3

0x80ce,	// (0x0002cf24) cell_myfav_contact_pane_cp4_ParamLimits

0x80ce,	// (0x0002cf24) cell_myfav_contact_pane_cp4

0x80e6,	// (0x0002cf3c) cell_myfav_contact_pane_cp5_ParamLimits

0x80e6,	// (0x0002cf3c) cell_myfav_contact_pane_cp5

0x80fa,	// (0x0002cf50) cell_myfav_contact_pane_cp6_ParamLimits

0x80fa,	// (0x0002cf50) cell_myfav_contact_pane_cp6

0x8110,	// (0x0002cf66) cell_myfav_contact_pane_cp7_ParamLimits

0x8110,	// (0x0002cf66) cell_myfav_contact_pane_cp7

0xd245,	// (0x0003209b) listscroll_gen_pane_cp05

0x812a,	// (0x0002cf80) main_myfav_hc_pane_g1_ParamLimits

0x812a,	// (0x0002cf80) main_myfav_hc_pane_g1

0x8144,	// (0x0002cf9a) main_myfav_hc_pane_g2_ParamLimits

0x8144,	// (0x0002cf9a) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x000347d1) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x000347d1) main_myfav_hc_pane_g

0x8176,	// (0x0002cfcc) main_myfav_hc_pane_t1_ParamLimits

0x8176,	// (0x0002cfcc) main_myfav_hc_pane_t1

0xd24e,	// (0x000320a4) main_myfav_hc_pane_t2_ParamLimits

0xd24e,	// (0x000320a4) main_myfav_hc_pane_t2

0xd260,	// (0x000320b6) main_myfav_hc_pane_t3_ParamLimits

0xd260,	// (0x000320b6) main_myfav_hc_pane_t3

0x818d,	// (0x0002cfe3) main_myfav_hc_pane_t4_ParamLimits

0x818d,	// (0x0002cfe3) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x000347d8) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x000347d8) main_myfav_hc_pane_t

0xc403,	// (0x00031259) bg_myfav_hc_instruction_pane_g1

0xd272,	// (0x000320c8) cell_myfav_contact_pane_g1_ParamLimits

0xd272,	// (0x000320c8) cell_myfav_contact_pane_g1

0xd272,	// (0x000320c8) cell_myfav_contact_pane_g2_ParamLimits

0xd272,	// (0x000320c8) cell_myfav_contact_pane_g2

0xd27e,	// (0x000320d4) cell_myfav_contact_pane_g3_ParamLimits

0xd27e,	// (0x000320d4) cell_myfav_contact_pane_g3

0xc6e0,	// (0x00031536) cell_myfav_contact_pane_g4_ParamLimits

0xc6e0,	// (0x00031536) cell_myfav_contact_pane_g4

0xd28b,	// (0x000320e1) cell_myfav_contact_pane_g5_ParamLimits

0xd28b,	// (0x000320e1) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x000347e3) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x000347e3) cell_myfav_contact_pane_g

0x815e,	// (0x0002cfb4) main_myfav_hc_pane_g3_ParamLimits

0x815e,	// (0x0002cfb4) main_myfav_hc_pane_g3

0x2502,	// (0x00027358) popup_adpt_find_window

0x81b5,	// (0x0002d00b) afind_page_pane_ParamLimits

0x81b5,	// (0x0002d00b) afind_page_pane

0x81ca,	// (0x0002d020) aid_size_cell_afind_ParamLimits

0x81ca,	// (0x0002d020) aid_size_cell_afind

0x81e8,	// (0x0002d03e) bg_popup_sub_pane_cp09_ParamLimits

0x81e8,	// (0x0002d03e) bg_popup_sub_pane_cp09

0x81f5,	// (0x0002d04b) find_pane_cp01_ParamLimits

0x81f5,	// (0x0002d04b) find_pane_cp01

0xd297,	// (0x000320ed) grid_afind_control_pane_ParamLimits

0xd297,	// (0x000320ed) grid_afind_control_pane

0x8202,	// (0x0002d058) grid_afind_pane_ParamLimits

0x8202,	// (0x0002d058) grid_afind_pane

0x8224,	// (0x0002d07a) cell_afind_pane_ParamLimits

0x8224,	// (0x0002d07a) cell_afind_pane

0xc403,	// (0x00031259) afind_page_pane_g1

0x8281,	// (0x0002d0d7) afind_page_pane_g2

0x828a,	// (0x0002d0e0) afind_page_pane_g3

0x0002,

0xf998,	// (0x000347ee) afind_page_pane_g

0x8293,	// (0x0002d0e9) afind_page_pane_t1

0xd2ab,	// (0x00032101) cell_afind_grid_control_pane_ParamLimits

0xd2ab,	// (0x00032101) cell_afind_grid_control_pane

0xcf4e,	// (0x00031da4) bg_button_pane_cp69_ParamLimits

0xcf4e,	// (0x00031da4) bg_button_pane_cp69

0x82b3,	// (0x0002d109) cell_afind_pane_g1_ParamLimits

0x82b3,	// (0x0002d109) cell_afind_pane_g1

0x82c0,	// (0x0002d116) cell_afind_pane_t1_ParamLimits

0x82c0,	// (0x0002d116) cell_afind_pane_t1

0x3955,	// (0x000287ab) bg_button_pane_cp72

0xd2ba,	// (0x00032110) cell_afind_grid_control_pane_g1

0x60e1,	// (0x0002af37) aid_image_placing_area_ParamLimits

0x60e1,	// (0x0002af37) aid_image_placing_area

0xc9d9,	// (0x0003182f) field_vitu_entry_pane_g1_ParamLimits

0xc9d9,	// (0x0003182f) field_vitu_entry_pane_g1

0xc9e5,	// (0x0003183b) field_vitu_entry_pane_g2_ParamLimits

0xc9e5,	// (0x0003183b) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0003469f) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0003469f) field_vitu_entry_pane_g

0x7c82,	// (0x0002cad8) cell_vitu_itu_pane_g1_ParamLimits

0x7cc4,	// (0x0002cb1a) cell_vitu_itu_pane_t3_ParamLimits

0x7cc4,	// (0x0002cb1a) cell_vitu_itu_pane_t3

0xcef4,	// (0x00031d4a) mp4_progress_pane_t1_ParamLimits

0xcf0d,	// (0x00031d63) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00034734) mp4_progress_pane_t_ParamLimits

0xcf26,	// (0x00031d7c) mup_progress_pane_cp04_ParamLimits

0x81a1,	// (0x0002cff7) main_myfav_hc_pane_t5_ParamLimits

0x81a1,	// (0x0002cff7) main_myfav_hc_pane_t5

0x23a3,	// (0x000271f9) aid_zoom_text_primary

0x2502,	// (0x00027358) popup_adpt_find_window_ParamLimits

0x25c9,	// (0x0002741f) main_cam_set_pane

0x1c76,	// (0x00026acc) cam4_zoom_pane_ParamLimits

0x1c76,	// (0x00026acc) cam4_zoom_pane

0x82d2,	// (0x0002d128) main_cam_set_pane_g1_ParamLimits

0x82d2,	// (0x0002d128) main_cam_set_pane_g1

0x82e0,	// (0x0002d136) main_cam_set_pane_g2_ParamLimits

0x82e0,	// (0x0002d136) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x000347f5) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x000347f5) main_cam_set_pane_g

0x8301,	// (0x0002d157) main_cam_set_pane_t1_ParamLimits

0x8301,	// (0x0002d157) main_cam_set_pane_t1

0x831c,	// (0x0002d172) main_cset_listscroll_pane_ParamLimits

0x831c,	// (0x0002d172) main_cset_listscroll_pane

0x833c,	// (0x0002d192) main_cset_slider_pane_ParamLimits

0x833c,	// (0x0002d192) main_cset_slider_pane

0xd2cb,	// (0x00032121) main_cset_list_pane_ParamLimits

0xd2cb,	// (0x00032121) main_cset_list_pane

0xd2db,	// (0x00032131) scroll_pane_cp028

0x8362,	// (0x0002d1b8) aid_area_touch_slider

0x837e,	// (0x0002d1d4) cset_slider_pane

0x83a8,	// (0x0002d1fe) main_cset_slider_pane_g1

0x83bd,	// (0x0002d213) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x000347fa) main_cset_slider_pane_g

0xd314,	// (0x0003216a) main_cset_slider_pane_t1

0x8479,	// (0x0002d2cf) main_cset_slider_pane_t2

0x8493,	// (0x0002d2e9) main_cset_slider_pane_t3

0x84ad,	// (0x0002d303) main_cset_slider_pane_t4

0x84c7,	// (0x0002d31d) main_cset_slider_pane_t5

0x84e1,	// (0x0002d337) main_cset_slider_pane_t6

0x84f6,	// (0x0002d34c) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0003481f) main_cset_slider_pane_t

0x85fa,	// (0x0002d450) cset_list_set_pane_ParamLimits

0x85fa,	// (0x0002d450) cset_list_set_pane

0x860c,	// (0x0002d462) aid_position_infowindow_above

0x8614,	// (0x0002d46a) aid_position_infowindow_below

0x861c,	// (0x0002d472) cset_list_set_pane_g1_ParamLimits

0x861c,	// (0x0002d472) cset_list_set_pane_g1

0xd3b4,	// (0x0003220a) cset_list_set_pane_g3_ParamLimits

0xd3b4,	// (0x0003220a) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0003483e) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0003483e) cset_list_set_pane_g

0xd3c3,	// (0x00032219) cset_list_set_pane_t1_ParamLimits

0xd3c3,	// (0x00032219) cset_list_set_pane_t1

0x25c9,	// (0x0002741f) list_highlight_pane_cp021_ParamLimits

0x25c9,	// (0x0002741f) list_highlight_pane_cp021

0x595a,	// (0x0002a7b0) cset_slider_pane_g1

0x596c,	// (0x0002a7c2) cset_slider_pane_g2

0x5963,	// (0x0002a7b9) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00034843) cset_slider_pane_g

0xd3d8,	// (0x0003222e) aid_area_touch_cam4_zoom

0xd3e0,	// (0x00032236) cam4_zoom_cont_pane

0xd3e8,	// (0x0003223e) cam4_zoom_pane_g1

0xd3f0,	// (0x00032246) cam4_zoom_pane_g2

0x21db,	// (0x00027031) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0003484a) cam4_zoom_pane_g

0xd3f8,	// (0x0003224e) cam4_zoom_cont_pane_g1

0xd401,	// (0x00032257) cam4_zoom_cont_pane_g2

0xd40a,	// (0x00032260) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00034851) cam4_zoom_cont_pane_g

0x7f2e,	// (0x0002cd84) call4_image_pane_ParamLimits

0x7f2e,	// (0x0002cd84) call4_image_pane

0xcf8c,	// (0x00031de2) call4_windows_conf_pane_ParamLimits

0xcfcd,	// (0x00031e23) popup_call4_audio_in_window_ParamLimits

0xcfcd,	// (0x00031e23) popup_call4_audio_in_window

0x234d,	// (0x000271a3) bg_popup_call2_act_pane_cp02

0xd043,	// (0x00031e99) call4_list_conf_pane

0xc403,	// (0x00031259) call4_image_pane_g1

0xc403,	// (0x00031259) call4_image_pane_g2

0x0001,

0xf70f,	// (0x00034565) call4_image_pane_g

0xd413,	// (0x00032269) list_single_graphic_popup_conf4_pane_ParamLimits

0xd413,	// (0x00032269) list_single_graphic_popup_conf4_pane

0x234d,	// (0x000271a3) list_highlight_pane_cp022

0xd426,	// (0x0003227c) list_single_graphic_popup_conf4_pane_g1

0x4eee,	// (0x00029d44) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00034858) list_single_graphic_popup_conf4_pane_g

0xd42e,	// (0x00032284) list_single_graphic_popup_conf4_pane_t1

0x3bc0,	// (0x00028a16) popup_vtel_slider_window_ParamLimits

0x3bc0,	// (0x00028a16) popup_vtel_slider_window

0xcf3c,	// (0x00031d92) dialer2_ne_pane_t2_ParamLimits

0xcf3c,	// (0x00031d92) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00034739) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00034739) dialer2_ne_pane_t

0xc1e8,	// (0x0003103e) bg_popup_sub_pane_cp010_ParamLimits

0xc1e8,	// (0x0003103e) bg_popup_sub_pane_cp010

0x8628,	// (0x0002d47e) popup_vtel_slider_window_g1_ParamLimits

0x8628,	// (0x0002d47e) popup_vtel_slider_window_g1

0x863b,	// (0x0002d491) popup_vtel_slider_window_g2_ParamLimits

0x863b,	// (0x0002d491) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0003485d) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0003485d) popup_vtel_slider_window_g

0x8691,	// (0x0002d4e7) vtel_slider_pane_ParamLimits

0x8691,	// (0x0002d4e7) vtel_slider_pane

0x86b3,	// (0x0002d509) vtel_slider_pane_g1_ParamLimits

0x86b3,	// (0x0002d509) vtel_slider_pane_g1

0x86c7,	// (0x0002d51d) vtel_slider_pane_g2_ParamLimits

0x86c7,	// (0x0002d51d) vtel_slider_pane_g2

0x86df,	// (0x0002d535) vtel_slider_pane_g3_ParamLimits

0x86df,	// (0x0002d535) vtel_slider_pane_g3

0x86b3,	// (0x0002d509) vtel_slider_pane_g4_ParamLimits

0x86b3,	// (0x0002d509) vtel_slider_pane_g4

0x86f5,	// (0x0002d54b) vtel_slider_pane_g5_ParamLimits

0x86f5,	// (0x0002d54b) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00034866) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00034866) vtel_slider_pane_g

0x234d,	// (0x000271a3) main_gallery2_pane

0x1eae,	// (0x00026d04) aid_size_row_itut2_dropdow_list_ParamLimits

0x1eae,	// (0x00026d04) aid_size_row_itut2_dropdow_list

0x1f3a,	// (0x00026d90) grid_vitu2_function_top_pane_ParamLimits

0x1f3a,	// (0x00026d90) grid_vitu2_function_top_pane

0x1f9f,	// (0x00026df5) popup_vitu2_dropdown_list_window_ParamLimits

0x1f9f,	// (0x00026df5) popup_vitu2_dropdown_list_window

0x1fc8,	// (0x00026e1e) popup_vitu2_match_list_window

0x21e3,	// (0x00027039) cell_vitu2_function_top_pane_ParamLimits

0x21e3,	// (0x00027039) cell_vitu2_function_top_pane

0x2201,	// (0x00027057) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2201,	// (0x00027057) cell_vitu2_function_top_pane_cp01

0x221f,	// (0x00027075) cell_vitu2_function_top_wide_pane_ParamLimits

0x221f,	// (0x00027075) cell_vitu2_function_top_wide_pane

0xd1a9,	// (0x00031fff) bg_button_pane_cp012

0x223d,	// (0x00027093) cell_vitu2_function_top_pane_g1

0xd44a,	// (0x000322a0) bg_button_pane_cp013_ParamLimits

0xd44a,	// (0x000322a0) bg_button_pane_cp013

0x870b,	// (0x0002d561) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x870b,	// (0x0002d561) cell_vitu2_function_top_wide_pane_g1

0xd1a9,	// (0x00031fff) bg_popup_sub_pane_cp20

0x2251,	// (0x000270a7) list_vitu2_match_list_pane

0xd1c1,	// (0x00032017) bg_popup_sub_pane_cp20_g1

0xd1c9,	// (0x0003201f) bg_popup_sub_pane_cp20_g2

0x3ff7,	// (0x00028e4d) bg_popup_sub_pane_cp20_g3

0xd1d1,	// (0x00032027) bg_popup_sub_pane_cp20_g4

0x3fd7,	// (0x00028e2d) bg_popup_sub_pane_cp20_g5

0xd466,	// (0x000322bc) bg_popup_sub_pane_cp20_g6

0xd1e1,	// (0x00032037) bg_popup_sub_pane_cp20_g7

0xd1e9,	// (0x0003203f) bg_popup_sub_pane_cp20_g8

0xd1f1,	// (0x00032047) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00034871) bg_popup_sub_pane_cp20_g

0xd46e,	// (0x000322c4) list_vitu2_match_list_item_pane_ParamLimits

0xd46e,	// (0x000322c4) list_vitu2_match_list_item_pane

0xd480,	// (0x000322d6) list_vitu2_match_list_item_pane_t1

0xacf7,	// (0x0002fb4d) bg_popup_sub_pane_cp21

0xd4a6,	// (0x000322fc) grid_vitu2_dropdown_list_pane

0x226f,	// (0x000270c5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x226f,	// (0x000270c5) cell_vitu2_dropdown_list_char_pane

0x2290,	// (0x000270e6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2290,	// (0x000270e6) cell_vitu2_dropdown_list_ctrl_pane

0xd4ae,	// (0x00032304) cell_vitu2_dropdown_list_char_pane_g1

0xd4b7,	// (0x0003230d) cell_vitu2_dropdown_list_char_pane_g2

0xd4c0,	// (0x00032316) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0003488e) cell_vitu2_dropdown_list_char_pane_g

0x22bc,	// (0x00027112) cell_vitu2_dropdown_list_char_pane_t1

0x8754,	// (0x0002d5aa) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8754,	// (0x0002d5aa) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8761,	// (0x0002d5b7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8761,	// (0x0002d5b7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x876e,	// (0x0002d5c4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x876e,	// (0x0002d5c4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x22ca,	// (0x00027120) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x22ca,	// (0x00027120) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd097,	// (0x00031eed) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd097,	// (0x00031eed) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00034895) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00034895) cell_vitu2_dropdown_list_ctrl_pane_g

0x877b,	// (0x0002d5d1) aid_size_cell_gallery2_ParamLimits

0x877b,	// (0x0002d5d1) aid_size_cell_gallery2

0x8791,	// (0x0002d5e7) grid_gallery2_pane_ParamLimits

0x8791,	// (0x0002d5e7) grid_gallery2_pane

0x87a5,	// (0x0002d5fb) scroll_pane_cp029_ParamLimits

0x87a5,	// (0x0002d5fb) scroll_pane_cp029

0x87b1,	// (0x0002d607) cell_gallery2_pane_ParamLimits

0x87b1,	// (0x0002d607) cell_gallery2_pane

0xd4c9,	// (0x0003231f) cell_gallery2_pane_g2

0x87e7,	// (0x0002d63d) cell_gallery2_pane_g3

0xd4d3,	// (0x00032329) cell_gallery2_pane_g4

0xd4db,	// (0x00032331) cell_gallery2_pane_g5

0x541e,	// (0x0002a274) grid_highlight_pane_cp10

0x1fc8,	// (0x00026e1e) popup_vitu2_match_list_window_ParamLimits

0x1fdf,	// (0x00026e35) popup_vitu2_query_window_ParamLimits

0x1fdf,	// (0x00026e35) popup_vitu2_query_window

0xacf7,	// (0x0002fb4d) bg_vitu2_candi_button_pane

0xd4ae,	// (0x00032304) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4b7,	// (0x0003230d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4c0,	// (0x00032316) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x87ef,	// (0x0002d645) bg_button_pane_cp015

0x87f9,	// (0x0002d64f) bg_button_pane_cp016

0x8803,	// (0x0002d659) bg_button_pane_cp017

0x25c9,	// (0x0002741f) bg_popup_sub_pane_cp22

0xd4e3,	// (0x00032339) popup_vitu2_query_window_g1

0x882b,	// (0x0002d681) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x000348a0) popup_vitu2_query_window_g

0x8839,	// (0x0002d68f) popup_vitu2_query_window_t1_ParamLimits

0x8839,	// (0x0002d68f) popup_vitu2_query_window_t1

0x8861,	// (0x0002d6b7) popup_vitu2_query_window_t2_ParamLimits

0x8861,	// (0x0002d6b7) popup_vitu2_query_window_t2

0x8873,	// (0x0002d6c9) popup_vitu2_query_window_t3_ParamLimits

0x8873,	// (0x0002d6c9) popup_vitu2_query_window_t3

0x889b,	// (0x0002d6f1) popup_vitu2_query_window_t4_ParamLimits

0x889b,	// (0x0002d6f1) popup_vitu2_query_window_t4

0x88af,	// (0x0002d705) popup_vitu2_query_window_t5_ParamLimits

0x88af,	// (0x0002d705) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x000348a5) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x000348a5) popup_vitu2_query_window_t

0xd2c3,	// (0x00032119) main_cset_text_pane

0x8362,	// (0x0002d1b8) aid_area_touch_slider_ParamLimits

0x837e,	// (0x0002d1d4) cset_slider_pane_ParamLimits

0x83a8,	// (0x0002d1fe) main_cset_slider_pane_g1_ParamLimits

0x83bd,	// (0x0002d213) main_cset_slider_pane_g2_ParamLimits

0xd2e4,	// (0x0003213a) main_cset_slider_pane_g3_ParamLimits

0xd2e4,	// (0x0003213a) main_cset_slider_pane_g3

0x83d2,	// (0x0002d228) main_cset_slider_pane_g4_ParamLimits

0x83d2,	// (0x0002d228) main_cset_slider_pane_g4

0x83e1,	// (0x0002d237) main_cset_slider_pane_g5_ParamLimits

0x83e1,	// (0x0002d237) main_cset_slider_pane_g5

0x83ed,	// (0x0002d243) main_cset_slider_pane_g6_ParamLimits

0x83ed,	// (0x0002d243) main_cset_slider_pane_g6

0xf9a4,	// (0x000347fa) main_cset_slider_pane_g_ParamLimits

0xd314,	// (0x0003216a) main_cset_slider_pane_t1_ParamLimits

0x8479,	// (0x0002d2cf) main_cset_slider_pane_t2_ParamLimits

0x8493,	// (0x0002d2e9) main_cset_slider_pane_t3_ParamLimits

0x84ad,	// (0x0002d303) main_cset_slider_pane_t4_ParamLimits

0x84c7,	// (0x0002d31d) main_cset_slider_pane_t5_ParamLimits

0x84e1,	// (0x0002d337) main_cset_slider_pane_t6_ParamLimits

0x84f6,	// (0x0002d34c) main_cset_slider_pane_t7_ParamLimits

0x8520,	// (0x0002d376) main_cset_slider_pane_t8_ParamLimits

0x8520,	// (0x0002d376) main_cset_slider_pane_t8

0x8548,	// (0x0002d39e) main_cset_slider_pane_t9_ParamLimits

0x8548,	// (0x0002d39e) main_cset_slider_pane_t9

0x8570,	// (0x0002d3c6) main_cset_slider_pane_t10_ParamLimits

0x8570,	// (0x0002d3c6) main_cset_slider_pane_t10

0x8598,	// (0x0002d3ee) main_cset_slider_pane_t11_ParamLimits

0x8598,	// (0x0002d3ee) main_cset_slider_pane_t11

0x85c0,	// (0x0002d416) main_cset_slider_pane_t12_ParamLimits

0x85c0,	// (0x0002d416) main_cset_slider_pane_t12

0x85dd,	// (0x0002d433) main_cset_slider_pane_t13_ParamLimits

0x85dd,	// (0x0002d433) main_cset_slider_pane_t13

0xf9c9,	// (0x0003481f) main_cset_slider_pane_t_ParamLimits

0x234d,	// (0x000271a3) bg_popup_sub_pane_cp011

0xd4ef,	// (0x00032345) main_cset_text_pane_g1

0xd4f7,	// (0x0003234d) main_cset_text_pane_t1

0xd505,	// (0x0003235b) main_cset_text_pane_t2

0xd513,	// (0x00032369) main_cset_text_pane_t3

0xd521,	// (0x00032377) main_cset_text_pane_t4

0xd52f,	// (0x00032385) main_cset_text_pane_t5

0xd53d,	// (0x00032393) main_cset_text_pane_t6

0xd54b,	// (0x000323a1) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x000348b0) main_cset_text_pane_t

0x234d,	// (0x000271a3) main_cam4_burst_pane

0x234d,	// (0x000271a3) main_cam5_pane

0x82a1,	// (0x0002d0f7) bg_button_pane_cp019

0x82aa,	// (0x0002d100) bg_button_pane_cp020

0xd2f0,	// (0x00032146) main_cset_slider_pane_g7_ParamLimits

0xd2f0,	// (0x00032146) main_cset_slider_pane_g7

0xd2fc,	// (0x00032152) main_cset_slider_pane_g8_ParamLimits

0xd2fc,	// (0x00032152) main_cset_slider_pane_g8

0x8401,	// (0x0002d257) main_cset_slider_pane_g9_ParamLimits

0x8401,	// (0x0002d257) main_cset_slider_pane_g9

0x840d,	// (0x0002d263) main_cset_slider_pane_g10_ParamLimits

0x840d,	// (0x0002d263) main_cset_slider_pane_g10

0x8419,	// (0x0002d26f) main_cset_slider_pane_g11_ParamLimits

0x8419,	// (0x0002d26f) main_cset_slider_pane_g11

0x8425,	// (0x0002d27b) main_cset_slider_pane_g12_ParamLimits

0x8425,	// (0x0002d27b) main_cset_slider_pane_g12

0x8431,	// (0x0002d287) main_cset_slider_pane_g13_ParamLimits

0x8431,	// (0x0002d287) main_cset_slider_pane_g13

0x843d,	// (0x0002d293) main_cset_slider_pane_g14_ParamLimits

0x843d,	// (0x0002d293) main_cset_slider_pane_g14

0x8449,	// (0x0002d29f) main_cset_slider_pane_g15_ParamLimits

0x8449,	// (0x0002d29f) main_cset_slider_pane_g15

0xd342,	// (0x00032198) main_cset_slider_pane_t14_ParamLimits

0xd342,	// (0x00032198) main_cset_slider_pane_t14

0xd37b,	// (0x000321d1) main_cset_slider_pane_t15_ParamLimits

0xd37b,	// (0x000321d1) main_cset_slider_pane_t15

0x88c3,	// (0x0002d719) aid_cam4_burst_size_cell_ParamLimits

0x88c3,	// (0x0002d719) aid_cam4_burst_size_cell

0x88e3,	// (0x0002d739) grid_cam4_burst_pane_ParamLimits

0x88e3,	// (0x0002d739) grid_cam4_burst_pane

0x891b,	// (0x0002d771) linegrid_cam4_burst_pane_ParamLimits

0x891b,	// (0x0002d771) linegrid_cam4_burst_pane

0x0132,	// (0x00024f88) scroll_pane_cp30_ParamLimits

0x0132,	// (0x00024f88) scroll_pane_cp30

0x893f,	// (0x0002d795) cell_cam4_burst_pane_ParamLimits

0x893f,	// (0x0002d795) cell_cam4_burst_pane

0xd559,	// (0x000323af) linegrid_cam4_burst_pane_g1_ParamLimits

0xd559,	// (0x000323af) linegrid_cam4_burst_pane_g1

0x898c,	// (0x0002d7e2) linegrid_cam4_burst_pane_g2_ParamLimits

0x898c,	// (0x0002d7e2) linegrid_cam4_burst_pane_g2

0xd566,	// (0x000323bc) linegrid_cam4_burst_pane_g3_ParamLimits

0xd566,	// (0x000323bc) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x000348bf) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x000348bf) linegrid_cam4_burst_pane_g

0x899d,	// (0x0002d7f3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x899d,	// (0x0002d7f3) linegrid_cam4_burst_pane_g3_copy1

0xd573,	// (0x000323c9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd573,	// (0x000323c9) linegrid_cam4_burst_pane_g4

0x89b7,	// (0x0002d80d) linegrid_cam4_burst_pane_g5_ParamLimits

0x89b7,	// (0x0002d80d) linegrid_cam4_burst_pane_g5

0x89c8,	// (0x0002d81e) linegrid_cam4_burst_pane_g6_ParamLimits

0x89c8,	// (0x0002d81e) linegrid_cam4_burst_pane_g6

0xd580,	// (0x000323d6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd580,	// (0x000323d6) linegrid_cam4_burst_pane_g7

0x89df,	// (0x0002d835) cell_cam4_burst_pane_g1

0xd599,	// (0x000323ef) main_cam5_pane_t1_ParamLimits

0xd599,	// (0x000323ef) main_cam5_pane_t1

0xd5ab,	// (0x00032401) main_cam5_pane_t2_ParamLimits

0xd5ab,	// (0x00032401) main_cam5_pane_t2

0xd5bd,	// (0x00032413) main_cam5_pane_t3_ParamLimits

0xd5bd,	// (0x00032413) main_cam5_pane_t3

0xd5cf,	// (0x00032425) main_cam5_pane_t4_ParamLimits

0xd5cf,	// (0x00032425) main_cam5_pane_t4

0xd5e7,	// (0x0003243d) main_cam5_pane_t5_ParamLimits

0xd5e7,	// (0x0003243d) main_cam5_pane_t5

0xd5fb,	// (0x00032451) main_cam5_pane_t6_ParamLimits

0xd5fb,	// (0x00032451) main_cam5_pane_t6

0xd60f,	// (0x00032465) main_cam5_pane_t7_ParamLimits

0xd60f,	// (0x00032465) main_cam5_pane_t7

0xd621,	// (0x00032477) main_cam5_pane_t8_ParamLimits

0xd621,	// (0x00032477) main_cam5_pane_t8

0xd63d,	// (0x00032493) main_cam5_pane_t9_ParamLimits

0xd63d,	// (0x00032493) main_cam5_pane_t9

0xd64f,	// (0x000324a5) main_cam5_pane_t10_ParamLimits

0xd64f,	// (0x000324a5) main_cam5_pane_t10

0xd661,	// (0x000324b7) main_cam5_pane_t11_ParamLimits

0xd661,	// (0x000324b7) main_cam5_pane_t11

0xd673,	// (0x000324c9) main_cam5_pane_t12_ParamLimits

0xd673,	// (0x000324c9) main_cam5_pane_t12

0xd688,	// (0x000324de) main_cam5_pane_t13_ParamLimits

0xd688,	// (0x000324de) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x000348cb) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x000348cb) main_cam5_pane_t

0x258f,	// (0x000273e5) popup_scut_keymap_window_ParamLimits

0x258f,	// (0x000273e5) popup_scut_keymap_window

0x89f2,	// (0x0002d848) aid_size_cell_brow_shortcut

0x541e,	// (0x0002a274) bg_popup_window_pane_cp010

0x89fe,	// (0x0002d854) grid_scut_pane

0x8a0a,	// (0x0002d860) cell_scut_pane_ParamLimits

0x8a0a,	// (0x0002d860) cell_scut_pane

0x8a21,	// (0x0002d877) cell_scut_pane_g1

0xd6a5,	// (0x000324fb) cell_scut_pane_t1

0xd6b4,	// (0x0003250a) cell_scut_pane_t2

0x8a2a,	// (0x0002d880) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x000348e6) cell_scut_pane_t

0x7257,	// (0x0002c0ad) main_mup3_pane_g8_ParamLimits

0x7257,	// (0x0002c0ad) main_mup3_pane_g8

0x1ec6,	// (0x00026d1c) area_vitu2_query_pane_ParamLimits

0x1ec6,	// (0x00026d1c) area_vitu2_query_pane

0x880d,	// (0x0002d663) input_focus_pane_cp08

0xd6c3,	// (0x00032519) area_vitu2_query_pane_g1

0x8a38,	// (0x0002d88e) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x000348ed) area_vitu2_query_pane_g

0x8a49,	// (0x0002d89f) area_vitu2_query_pane_t1_ParamLimits

0x8a49,	// (0x0002d89f) area_vitu2_query_pane_t1

0x8a5d,	// (0x0002d8b3) area_vitu2_query_pane_t2_ParamLimits

0x8a5d,	// (0x0002d8b3) area_vitu2_query_pane_t2

0x8a71,	// (0x0002d8c7) area_vitu2_query_pane_t3_ParamLimits

0x8a71,	// (0x0002d8c7) area_vitu2_query_pane_t3

0xd6cf,	// (0x00032525) area_vitu2_query_pane_t4_ParamLimits

0xd6cf,	// (0x00032525) area_vitu2_query_pane_t4

0xd6f7,	// (0x0003254d) area_vitu2_query_pane_t5_ParamLimits

0xd6f7,	// (0x0003254d) area_vitu2_query_pane_t5

0xd71f,	// (0x00032575) area_vitu2_query_pane_t6_ParamLimits

0xd71f,	// (0x00032575) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x000348f2) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x000348f2) area_vitu2_query_pane_t

0x8a99,	// (0x0002d8ef) bg_button_pane_cp018

0x8aa7,	// (0x0002d8fd) bg_button_pane_cp021

0x8ab3,	// (0x0002d909) bg_button_pane_cp022

0x8ac2,	// (0x0002d918) input_focus_pane_cp09

0x5249,	// (0x0002a09f) aid_size_touch_mv_arrow_left

0x5272,	// (0x0002a0c8) aid_size_touch_mv_arrow_right

0x8461,	// (0x0002d2b7) main_cset_slider_pane_g16_ParamLimits

0x8461,	// (0x0002d2b7) main_cset_slider_pane_g16

0x846d,	// (0x0002d2c3) main_cset_slider_pane_g17_ParamLimits

0x846d,	// (0x0002d2c3) main_cset_slider_pane_g17

0x89df,	// (0x0002d835) cell_cam4_burst_pane_g1_ParamLimits

0x234d,	// (0x000271a3) compa_mode_pane

0x864b,	// (0x0002d4a1) popup_vtel_slider_window_g3_ParamLimits

0x864b,	// (0x0002d4a1) popup_vtel_slider_window_g3

0x8662,	// (0x0002d4b8) popup_vtel_slider_window_g4_ParamLimits

0x8662,	// (0x0002d4b8) popup_vtel_slider_window_g4

0x8679,	// (0x0002d4cf) popup_vtel_slider_window_t1_ParamLimits

0x8679,	// (0x0002d4cf) popup_vtel_slider_window_t1

0x234d,	// (0x000271a3) main_cl_pane

0xbf25,	// (0x00030d7b) popup_imed_adjust2_window_ParamLimits

0xbefd,	// (0x00030d53) bg_tb_trans_pane_cp05_ParamLimits

0xc90e,	// (0x00031764) popup_imed_adjust2_window_g1_ParamLimits

0xc91d,	// (0x00031773) popup_imed_adjust2_window_g2_ParamLimits

0xc91d,	// (0x00031773) popup_imed_adjust2_window_g2

0xc929,	// (0x0003177f) popup_imed_adjust2_window_g3_ParamLimits

0xc929,	// (0x0003177f) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00034663) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00034663) popup_imed_adjust2_window_g

0xc935,	// (0x0003178b) popup_imed_adjust2_window_t1_ParamLimits

0xc94d,	// (0x000317a3) slider_imed_adjust_pane_ParamLimits

0xc961,	// (0x000317b7) slider_imed_adjust_pane_g1_ParamLimits

0xc971,	// (0x000317c7) slider_imed_adjust_pane_g2_ParamLimits

0xc981,	// (0x000317d7) slider_imed_adjust_pane_g3_ParamLimits

0xc992,	// (0x000317e8) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0003466a) slider_imed_adjust_pane_g_ParamLimits

0x1c17,	// (0x00026a6d) aid_touch_area_cam4_ParamLimits

0x1c17,	// (0x00026a6d) aid_touch_area_cam4

0xd087,	// (0x00031edd) battery_pane_cp01

0x1ce7,	// (0x00026b3d) main_camera4_pane_g6_ParamLimits

0x1ce7,	// (0x00026b3d) main_camera4_pane_g6

0x1d11,	// (0x00026b67) main_camera4_pane_t2_ParamLimits

0x1d11,	// (0x00026b67) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0003476d) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0003476d) main_camera4_pane_t

0x1d32,	// (0x00026b88) aid_touch_area_vid4_ParamLimits

0x1d32,	// (0x00026b88) aid_touch_area_vid4

0x1d99,	// (0x00026bef) main_video4_pane_g5_ParamLimits

0x1d99,	// (0x00026bef) main_video4_pane_g5

0x1dc4,	// (0x00026c1a) vid4_progress_pane_ParamLimits

0x1dc4,	// (0x00026c1a) vid4_progress_pane

0xd308,	// (0x0003215e) main_cset_slider_pane_g18_ParamLimits

0xd308,	// (0x0003215e) main_cset_slider_pane_g18

0xd58d,	// (0x000323e3) cell_cam4_burst_pane_g2_ParamLimits

0xd58d,	// (0x000323e3) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x000348c6) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x000348c6) cell_cam4_burst_pane_g

0x2fcd,	// (0x00027e23) bg_cl_pane_ParamLimits

0x2fcd,	// (0x00027e23) bg_cl_pane

0x8ad1,	// (0x0002d927) cl_header_pane_ParamLimits

0x8ad1,	// (0x0002d927) cl_header_pane

0x8ae5,	// (0x0002d93b) cl_listscroll_pane_ParamLimits

0x8ae5,	// (0x0002d93b) cl_listscroll_pane

0xd76b,	// (0x000325c1) bg_cl_pane_g1

0xd773,	// (0x000325c9) bg_cl_pane_g2

0xd77b,	// (0x000325d1) bg_cl_pane_g3

0xd783,	// (0x000325d9) bg_cl_pane_g4

0xd78b,	// (0x000325e1) bg_cl_pane_g5

0xd793,	// (0x000325e9) bg_cl_pane_g6

0xd79b,	// (0x000325f1) bg_cl_pane_g7

0xd7a3,	// (0x000325f9) bg_cl_pane_g8

0xd7ab,	// (0x00032601) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00034901) bg_cl_pane_g

0x8af5,	// (0x0002d94b) aid_height_cl_leading_ParamLimits

0x8af5,	// (0x0002d94b) aid_height_cl_leading

0x8b01,	// (0x0002d957) aid_height_cl_text_ParamLimits

0x8b01,	// (0x0002d957) aid_height_cl_text

0x25c9,	// (0x0002741f) bg_cl_header_pane_ParamLimits

0x25c9,	// (0x0002741f) bg_cl_header_pane

0x8b20,	// (0x0002d976) cl_header_pane_g1_ParamLimits

0x8b20,	// (0x0002d976) cl_header_pane_g1

0x8b36,	// (0x0002d98c) cl_header_pane_t1_ParamLimits

0x8b36,	// (0x0002d98c) cl_header_pane_t1

0xd7b3,	// (0x00032609) cl_list_pane

0xd2db,	// (0x00032131) hc_scroll_pane_cp01

0x3fd7,	// (0x00028e2d) bg_cl_header_pane_g1

0xd1c1,	// (0x00032017) bg_cl_header_pane_g2

0x3ff7,	// (0x00028e4d) bg_cl_header_pane_g3

0xd1d1,	// (0x00032027) bg_cl_header_pane_g4

0xd1c9,	// (0x0003201f) bg_cl_header_pane_g5

0xd466,	// (0x000322bc) bg_cl_header_pane_g6

0xd1e9,	// (0x0003203f) bg_cl_header_pane_g7

0xd1f1,	// (0x00032047) bg_cl_header_pane_g8

0xd1e1,	// (0x00032037) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00034914) bg_cl_header_pane_g

0x8b4f,	// (0x0002d9a5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8b4f,	// (0x0002d9a5) hc_cl_list_double_graphic_heading_pane

0x8b60,	// (0x0002d9b6) hc_cl_list_single_graphic_pane_ParamLimits

0x8b60,	// (0x0002d9b6) hc_cl_list_single_graphic_pane

0x8b76,	// (0x0002d9cc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8b76,	// (0x0002d9cc) hc_cl_list_single_graphic_pane_g1

0x8b82,	// (0x0002d9d8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8b82,	// (0x0002d9d8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00034927) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00034927) hc_cl_list_single_graphic_pane_g

0x8b96,	// (0x0002d9ec) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8b96,	// (0x0002d9ec) hc_cl_list_single_graphic_pane_t1

0x8b76,	// (0x0002d9cc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8b76,	// (0x0002d9cc) hc_cl_list_double_graphic_heading_pane_g1

0x8bab,	// (0x0002da01) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8bab,	// (0x0002da01) hc_cl_list_double_graphic_heading_pane_g2

0x8bbf,	// (0x0002da15) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8bbf,	// (0x0002da15) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0003492c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0003492c) hc_cl_list_double_graphic_heading_pane_g

0x8bd3,	// (0x0002da29) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8bd3,	// (0x0002da29) hc_cl_list_double_graphic_heading_pane_t1

0x8be8,	// (0x0002da3e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8be8,	// (0x0002da3e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00034933) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00034933) hc_cl_list_double_graphic_heading_pane_t

0xd7c4,	// (0x0003261a) vid4_progress_pane_g1

0xd7d4,	// (0x0003262a) vid4_progress_pane_g2

0x4ae9,	// (0x0002993f) vid4_progress_pane_g3

0xd7e4,	// (0x0003263a) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00034938) vid4_progress_pane_g

0xd802,	// (0x00032658) vid4_progress_pane_t1

0xd817,	// (0x0003266d) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00034943) vid4_progress_pane_t

0xd842,	// (0x00032698) wait_bar_pane_cp07

0xc1f6,	// (0x0003104c) blid_firmament_pane_ParamLimits

0xc239,	// (0x0003108f) popup_blid_sat_info2_window_g1

0xc25d,	// (0x000310b3) popup_blid_sat_info2_window_t3

0xc26b,	// (0x000310c1) popup_blid_sat_info2_window_t4

0xc279,	// (0x000310cf) popup_blid_sat_info2_window_t5

0xc287,	// (0x000310dd) popup_blid_sat_info2_window_t6

0xc297,	// (0x000310ed) popup_blid_sat_info2_window_t7

0xc2a5,	// (0x000310fb) popup_blid_sat_info2_window_t8

0xc2b3,	// (0x00031109) popup_blid_sat_info2_window_t9

0xc2c1,	// (0x00031117) popup_blid_sat_info2_window_t10

0xc383,	// (0x000311d9) aid_firma_cardinal_ParamLimits

0xc397,	// (0x000311ed) blid_firmament_pane_t1_ParamLimits

0xc3ae,	// (0x00031204) blid_firmament_pane_t2_ParamLimits

0xc3c5,	// (0x0003121b) blid_firmament_pane_t3_ParamLimits

0xc3dc,	// (0x00031232) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0003455c) blid_firmament_pane_t_ParamLimits

0xc3f3,	// (0x00031249) blid_sat_info_pane_ParamLimits

0x25c9,	// (0x0002741f) main_cam_set_pane_ParamLimits

0x7a3c,	// (0x0002c892) aid_size_cell_colour_35_ParamLimits

0x7a5c,	// (0x0002c8b2) aid_size_cell_colour_112_ParamLimits

0x7a7c,	// (0x0002c8d2) aid_size_cell_effect_ParamLimits

0xbefd,	// (0x00030d53) bg_tb_trans_pane_cp02_ParamLimits

0x4a63,	// (0x000298b9) heading_imed_pane_ParamLimits

0x7a9c,	// (0x0002c8f2) listscroll_imed_pane_ParamLimits

0xb52f,	// (0x00030385) popup_call2_audio_first_window_g5_ParamLimits

0xb52f,	// (0x00030385) popup_call2_audio_first_window_g5

0x19f4,	// (0x0002684a) aid_size_touch_image3_arrow_left_ParamLimits

0x19f4,	// (0x0002684a) aid_size_touch_image3_arrow_left

0x1a20,	// (0x00026876) aid_size_touch_image3_arrow_right_ParamLimits

0x1a20,	// (0x00026876) aid_size_touch_image3_arrow_right

0xd82d,	// (0x00032683) vid4_progress_pane_t3

0x7daf,	// (0x0002cc05) main_hwr_training_symbol_option_pane_ParamLimits

0x7daf,	// (0x0002cc05) main_hwr_training_symbol_option_pane

0xcbfb,	// (0x00031a51) popup_hwr_training_preview_window_ParamLimits

0xcbfb,	// (0x00031a51) popup_hwr_training_preview_window

0x189d,	// (0x000266f3) hwr_training_navi_pane_g5_ParamLimits

0x189d,	// (0x000266f3) hwr_training_navi_pane_g5

0xd1a1,	// (0x00031ff7) popup_char_count_window

0xd1a9,	// (0x00031fff) bg_popup_sub_pane_cp20_ParamLimits

0x2251,	// (0x000270a7) list_vitu2_match_list_pane_ParamLimits

0x2260,	// (0x000270b6) vitu2_page_scroll_pane_ParamLimits

0x2260,	// (0x000270b6) vitu2_page_scroll_pane

0xd8ae,	// (0x00032704) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8ae,	// (0x00032704) list_single_hwr_training_symbol_option_pane

0xd8c1,	// (0x00032717) list_single_hwr_training_symbol_option_pane_g1

0xd8c9,	// (0x0003271f) list_single_hwr_training_symbol_option_pane_t1

0xd8d7,	// (0x0003272d) bg_button_pane_cp023

0xd8e0,	// (0x00032736) bg_button_pane_cp024

0x8bfd,	// (0x0002da53) vitu2_page_scroll_pane_g1

0x8c05,	// (0x0002da5b) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0003494a) vitu2_page_scroll_pane_g

0x8c0d,	// (0x0002da63) vitu2_page_scroll_pane_t1

0xd913,	// (0x00032769) popup_char_count_window_g1

0xd91c,	// (0x00032772) popup_char_count_window_g2

0xd925,	// (0x0003277b) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0003494f) popup_char_count_window_g

0xd92e,	// (0x00032784) popup_char_count_window_t1

0x234d,	// (0x000271a3) main_vded2_pane

0xc8fa,	// (0x00031750) aid_size_cell_imed_line

0xc904,	// (0x0003175a) grid_imed_line_width_pane

0x1e32,	// (0x00026c88) vid4_indicators_pane_g4

0xd93c,	// (0x00032792) cell_imed_line_width_pane_ParamLimits

0xd93c,	// (0x00032792) cell_imed_line_width_pane

0xd950,	// (0x000327a6) cell_imed_line_width_pane_g1

0xc1a4,	// (0x00030ffa) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00034956) cell_imed_line_width_pane_g

0x8c1c,	// (0x0002da72) main_vded2_pane_g1_ParamLimits

0x8c1c,	// (0x0002da72) main_vded2_pane_g1

0x8c32,	// (0x0002da88) main_vded2_pane_g2_ParamLimits

0x8c32,	// (0x0002da88) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0003495b) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0003495b) main_vded2_pane_g

0x8c44,	// (0x0002da9a) vded2_slider_pane_ParamLimits

0x8c44,	// (0x0002da9a) vded2_slider_pane

0x8c54,	// (0x0002daaa) aid_size_touch_vded2_end

0x8c5e,	// (0x0002dab4) aid_size_touch_vded2_playhead

0xd959,	// (0x000327af) aid_size_touch_vded2_start

0xd961,	// (0x000327b7) vded2_slider_bg_pane

0xd96a,	// (0x000327c0) vded2_slider_pane_g1

0xd973,	// (0x000327c9) vded2_slider_pane_g2

0x8c68,	// (0x0002dabe) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00034960) vded2_slider_pane_g

0xd97b,	// (0x000327d1) vded2_slider_bg_pane_g1

0xd984,	// (0x000327da) vded2_slider_bg_pane_g2

0xd98d,	// (0x000327e3) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00034967) vded2_slider_bg_pane_g

0x5b24,	// (0x0002a97a) aid_postcard_touch_down_pane_ParamLimits

0x5b24,	// (0x0002a97a) aid_postcard_touch_down_pane

0x5b3a,	// (0x0002a990) aid_postcard_touch_up_pane_ParamLimits

0x5b3a,	// (0x0002a990) aid_postcard_touch_up_pane

0x234d,	// (0x000271a3) main_blid2_pane

0xbf0b,	// (0x00030d61) popup_blid2_search_window

0x234d,	// (0x000271a3) blid2_gps_pane

0x234d,	// (0x000271a3) blid2_navig_pane

0x234d,	// (0x000271a3) blid2_search_pane

0x234d,	// (0x000271a3) blid2_tripm_pane

0x8c73,	// (0x0002dac9) blid2_search_pane_g1_ParamLimits

0x8c73,	// (0x0002dac9) blid2_search_pane_g1

0x8c8d,	// (0x0002dae3) blid2_search_pane_t1_ParamLimits

0x8c8d,	// (0x0002dae3) blid2_search_pane_t1

0x8c9f,	// (0x0002daf5) aid_size_cell_blid2_gps_ParamLimits

0x8c9f,	// (0x0002daf5) aid_size_cell_blid2_gps

0x8cb7,	// (0x0002db0d) blid2_gps_pane_g1_ParamLimits

0x8cb7,	// (0x0002db0d) blid2_gps_pane_g1

0x8ccb,	// (0x0002db21) grid_blid2_satellite_pane_ParamLimits

0x8ccb,	// (0x0002db21) grid_blid2_satellite_pane

0x8ce5,	// (0x0002db3b) blid2_navig_pane_g1_ParamLimits

0x8ce5,	// (0x0002db3b) blid2_navig_pane_g1

0x8cf1,	// (0x0002db47) blid2_navig_pane_t1_ParamLimits

0x8cf1,	// (0x0002db47) blid2_navig_pane_t1

0x8d0c,	// (0x0002db62) blid2_navig_pane_t2_ParamLimits

0x8d0c,	// (0x0002db62) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0003496e) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0003496e) blid2_navig_pane_t

0x8d27,	// (0x0002db7d) blid2_navig_ring_pane_ParamLimits

0x8d27,	// (0x0002db7d) blid2_navig_ring_pane

0x8d40,	// (0x0002db96) blid2_speed_pane_ParamLimits

0x8d40,	// (0x0002db96) blid2_speed_pane

0x8d4c,	// (0x0002dba2) blid2_tripm_pane_g1_ParamLimits

0x8d4c,	// (0x0002dba2) blid2_tripm_pane_g1

0x8d65,	// (0x0002dbbb) blid2_tripm_pane_g2_ParamLimits

0x8d65,	// (0x0002dbbb) blid2_tripm_pane_g2

0x8d79,	// (0x0002dbcf) blid2_tripm_pane_g3_ParamLimits

0x8d79,	// (0x0002dbcf) blid2_tripm_pane_g3

0x8d8d,	// (0x0002dbe3) blid2_tripm_pane_g4_ParamLimits

0x8d8d,	// (0x0002dbe3) blid2_tripm_pane_g4

0x8da1,	// (0x0002dbf7) blid2_tripm_pane_g5_ParamLimits

0x8da1,	// (0x0002dbf7) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00034973) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00034973) blid2_tripm_pane_g

0x8dc7,	// (0x0002dc1d) blid2_tripm_pane_t1_ParamLimits

0x8dc7,	// (0x0002dc1d) blid2_tripm_pane_t1

0x8de2,	// (0x0002dc38) blid2_tripm_pane_t2_ParamLimits

0x8de2,	// (0x0002dc38) blid2_tripm_pane_t2

0x8dfb,	// (0x0002dc51) blid2_tripm_pane_t3_ParamLimits

0x8dfb,	// (0x0002dc51) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00034980) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00034980) blid2_tripm_pane_t

0x8e42,	// (0x0002dc98) cell_blid2_satellite_pane_ParamLimits

0x8e42,	// (0x0002dc98) cell_blid2_satellite_pane

0x8e60,	// (0x0002dcb6) cell_blid2_satellite_pane_g1

0xd996,	// (0x000327ec) cell_blid2_satellite_pane_t1

0xc403,	// (0x00031259) blid2_speed_pane_g1

0xd9a4,	// (0x000327fa) blid2_speed_pane_t1

0xd9b2,	// (0x00032808) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00034989) blid2_speed_pane_t

0xc403,	// (0x00031259) blid2_navig_ring_pane_g1

0x8e69,	// (0x0002dcbf) blid2_navig_ring_pane_g2

0x8e71,	// (0x0002dcc7) blid2_navig_ring_pane_g3

0x8e79,	// (0x0002dccf) blid2_navig_ring_pane_g4

0x8e81,	// (0x0002dcd7) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0003498e) blid2_navig_ring_pane_g

0x234d,	// (0x000271a3) bg_popup_window_pane_cp011

0xd9c0,	// (0x00032816) popup_blid2_search_window_g1

0xd9c8,	// (0x0003281e) popup_blid2_search_window_t1

0xd9d6,	// (0x0003282c) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00034999) popup_blid2_search_window_t

0x3ea3,	// (0x00028cf9) main_browser_pane_g1

0x2fcd,	// (0x00027e23) main_browser_pane_ParamLimits

0xd1a9,	// (0x00031fff) bg_button_pane_cp011_ParamLimits

0x21c7,	// (0x0002701d) cell_vitu2_function_pane_g1_ParamLimits

0x25c9,	// (0x0002741f) bg_popup_sub_pane_cp22_ParamLimits

0x880d,	// (0x0002d663) input_focus_pane_cp08_ParamLimits

0x881a,	// (0x0002d670) popup_vitu2_query_button_pane_ParamLimits

0x881a,	// (0x0002d670) popup_vitu2_query_button_pane

0x87ef,	// (0x0002d645) popup_vitu2_query_input_button_pane

0xd4e3,	// (0x00032339) popup_vitu2_query_window_g1_ParamLimits

0x882b,	// (0x0002d681) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x000348a0) popup_vitu2_query_window_g_ParamLimits

0x234d,	// (0x000271a3) bg_button_pane_cp026

0x8e89,	// (0x0002dcdf) popup_vitu2_query_input_button_pane_g1

0x234d,	// (0x000271a3) bg_button_pane_cp025

0xd9e4,	// (0x0003283a) popup_vitu2_query_button_pane_t1

0x6f13,	// (0x0002bd69) main_mp3_pane_t6

0x6f21,	// (0x0002bd77) popup_slider_window_cp01

0xd0a5,	// (0x00031efb) cam4_battery_pane

0xd10c,	// (0x00031f62) cam4_battery_pane_cp02

0xd7bc,	// (0x00032612) cam4_battery_pane_cp01

0xd7bc,	// (0x00032612) cam4_battery_pane_cp03

0xcf32,	// (0x00031d88) cam4_battery_pane_g1

0xc403,	// (0x00031259) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0003499e) cam4_battery_pane_g

0xc2cf,	// (0x00031125) popup_blid_sat_info2_window_t11

0x5249,	// (0x0002a09f) aid_size_touch_mv_arrow_left_ParamLimits

0x5272,	// (0x0002a0c8) aid_size_touch_mv_arrow_right_ParamLimits

0x52ba,	// (0x0002a110) navi_pane_g1_ParamLimits

0x52c6,	// (0x0002a11c) navi_pane_g2_ParamLimits

0x52f4,	// (0x0002a14a) navi_pane_g3_ParamLimits

0xf418,	// (0x0003426e) navi_pane_g_ParamLimits

0x53b0,	// (0x0002a206) navi_pane_mv_t1_ParamLimits

0x7aa8,	// (0x0002c8fe) grid_imed_effect_pane_ParamLimits

0x3af0,	// (0x00028946) aid_placing_vt_slider_lsc

0x3af8,	// (0x0002894e) aid_placing_vt_slider_prt

0x25c9,	// (0x0002741f) bg_tb_trans_pane_cp01_ParamLimits

0xc58f,	// (0x000313e5) popup_image_details_window_g1_ParamLimits

0xc5a2,	// (0x000313f8) popup_image_details_window_g2_ParamLimits

0xc5b7,	// (0x0003140d) popup_image_details_window_g3_ParamLimits

0xc5b7,	// (0x0003140d) popup_image_details_window_g3

0xf74b,	// (0x000345a1) popup_image_details_window_g_ParamLimits

0xc5cb,	// (0x00031421) popup_image_details_window_t1_ParamLimits

0xc5dd,	// (0x00031433) popup_image_details_window_t2_ParamLimits

0xc5f6,	// (0x0003144c) popup_image_details_window_t3_ParamLimits

0xc60a,	// (0x00031460) popup_image_details_window_t4_ParamLimits

0xc625,	// (0x0003147b) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x000345a8) popup_image_details_window_t_ParamLimits

0x8b0d,	// (0x0002d963) cl_header_name_pane_ParamLimits

0x8b0d,	// (0x0002d963) cl_header_name_pane

0x8e91,	// (0x0002dce7) cl_header_name_pane_t1_ParamLimits

0x8e91,	// (0x0002dce7) cl_header_name_pane_t1

0x8eb2,	// (0x0002dd08) cl_header_name_pane_t2_ParamLimits

0x8eb2,	// (0x0002dd08) cl_header_name_pane_t2

0x8ef4,	// (0x0002dd4a) cl_header_name_pane_t3_ParamLimits

0x8ef4,	// (0x0002dd4a) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x000349a3) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x000349a3) cl_header_name_pane_t

0x5381,	// (0x0002a1d7) navi_pane_mv_g2_ParamLimits

0xd12f,	// (0x00031f85) field_vitu2_entry_pane_g1_ParamLimits

0xd13b,	// (0x00031f91) field_vitu2_entry_pane_g2_ParamLimits

0xd147,	// (0x00031f9d) field_vitu2_entry_pane_g3_ParamLimits

0xd147,	// (0x00031f9d) field_vitu2_entry_pane_g3

0xf949,	// (0x0003479f) field_vitu2_entry_pane_g_ParamLimits

0x2067,	// (0x00026ebd) cell_vitu2_itu_pane_g1_ParamLimits

0x2077,	// (0x00026ecd) cell_vitu2_itu_pane_g2_ParamLimits

0x2077,	// (0x00026ecd) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x000347ab) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x000347ab) cell_vitu2_itu_pane_g

0xd1a9,	// (0x00031fff) bg_vkb2_func_pane_cp05_ParamLimits

0xd1a9,	// (0x00031fff) bg_vkb2_func_pane_cp05

0xd1a9,	// (0x00031fff) bg_vkb2_func_pane_cp03

0xd1a9,	// (0x00031fff) bg_vkb2_func_pane_cp04

0xd1a9,	// (0x00031fff) bg_vkb2_func_pane_cp10_ParamLimits

0xd1a9,	// (0x00031fff) bg_vkb2_func_pane_cp10

0x8ab3,	// (0x0002d909) bg_vkb2_func_pane_cp08

0x8a99,	// (0x0002d8ef) bg_vkb2_func_pane_cp06

0x8aa7,	// (0x0002d8fd) bg_vkb2_func_pane_cp07

0xd8e9,	// (0x0003273f) bg_vkb2_func_pane_cp11_ParamLimits

0xd8e9,	// (0x0003273f) bg_vkb2_func_pane_cp11

0xd8fe,	// (0x00032754) bg_vkb2_func_pane_cp12_ParamLimits

0xd8fe,	// (0x00032754) bg_vkb2_func_pane_cp12

0x234d,	// (0x000271a3) bg_vkb2_func_pane_cp09

0xd1c1,	// (0x00032017) bg_vkb2_func_pane_g1

0x3ff7,	// (0x00028e4d) bg_vkb2_func_pane_g2

0xd1c9,	// (0x0003201f) bg_vkb2_func_pane_g3

0xd1d1,	// (0x00032027) bg_vkb2_func_pane_g4

0xd466,	// (0x000322bc) bg_vkb2_func_pane_g5

0xd1e9,	// (0x0003203f) bg_vkb2_func_pane_g6

0xd1f1,	// (0x00032047) bg_vkb2_func_pane_g7

0xd1e1,	// (0x00032037) bg_vkb2_func_pane_g8

0x3fd7,	// (0x00028e2d) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x000349aa) bg_vkb2_func_pane_g

0x8db5,	// (0x0002dc0b) blid2_tripm_pane_g6_ParamLimits

0x8db5,	// (0x0002dc0b) blid2_tripm_pane_g6

0xceec,	// (0x00031d42) mp4_progress_pane_g1

0x8e2e,	// (0x0002dc84) blid2_tripm_values_pane_ParamLimits

0x8e2e,	// (0x0002dc84) blid2_tripm_values_pane

0x8f25,	// (0x0002dd7b) blid2_tripm_values_pane_t1

0x8f33,	// (0x0002dd89) blid2_tripm_values_pane_t2

0x8f41,	// (0x0002dd97) blid2_tripm_values_pane_t3

0x8f4f,	// (0x0002dda5) blid2_tripm_values_pane_t4

0x8f5d,	// (0x0002ddb3) blid2_tripm_values_pane_t5

0x8f6b,	// (0x0002ddc1) blid2_tripm_values_pane_t6

0x8f79,	// (0x0002ddcf) blid2_tripm_values_pane_t7

0x8f87,	// (0x0002dddd) blid2_tripm_values_pane_t8

0x8f95,	// (0x0002ddeb) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x000349bd) blid2_tripm_values_pane_t

0x3b30,	// (0x00028986) call_video_pane_t1_ParamLimits

0x3b42,	// (0x00028998) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x000340f7) call_video_pane_t_ParamLimits

0x5a3d,	// (0x0002a893) msg_header_pane_g1_ParamLimits

0x5a4b,	// (0x0002a8a1) msg_header_pane_g2_ParamLimits

0x5a4b,	// (0x0002a8a1) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00034311) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00034311) msg_header_pane_g

0x2fcd,	// (0x00027e23) main_clock2_pane_ParamLimits

0x784c,	// (0x0002c6a2) grid_clock2_toolbar_pane_ParamLimits

0x784c,	// (0x0002c6a2) grid_clock2_toolbar_pane

0x784c,	// (0x0002c6a2) listscroll_clock2_pane_ParamLimits

0x784c,	// (0x0002c6a2) listscroll_clock2_pane

0x7928,	// (0x0002c77e) main_clock2_pane_t3_ParamLimits

0x7928,	// (0x0002c77e) main_clock2_pane_t3

0x7943,	// (0x0002c799) main_clock2_pane_t4_ParamLimits

0x7943,	// (0x0002c799) main_clock2_pane_t4

0xd9f2,	// (0x00032848) cell_clock2_toolbar_pane

0xd9fa,	// (0x00032850) cell_clock2_toolbar_pane_cp01

0xd9fa,	// (0x00032850) cell_clock2_toolbar_pane_cp02

0xda02,	// (0x00032858) cell_clock2_toolbar_pane_cp03

0xda0a,	// (0x00032860) list_clock2_pane

0x4ff3,	// (0x00029e49) scroll_pane_cp10

0xda12,	// (0x00032868) list_single_clock2_pane_ParamLimits

0xda12,	// (0x00032868) list_single_clock2_pane

0x541e,	// (0x0002a274) list_highlight_pane_cp08

0xda1f,	// (0x00032875) list_single_clock2_pane_t1

0xda2d,	// (0x00032883) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x000349d0) list_single_clock2_pane_t

0x234d,	// (0x000271a3) bg_button_pane_cp10

0xda3b,	// (0x00032891) cell_clock2_toolbar_pane_g1

0x1316,	// (0x0002616c) aid_main_viewer_pane_g1_ParamLimits

0x1316,	// (0x0002616c) aid_main_viewer_pane_g1

0x1324,	// (0x0002617a) aid_main_viewer_pane_g2_ParamLimits

0x1324,	// (0x0002617a) aid_main_viewer_pane_g2

0x5ada,	// (0x0002a930) aid_main_viewer_pane_g3_ParamLimits

0x5ada,	// (0x0002a930) aid_main_viewer_pane_g3

0x5ae9,	// (0x0002a93f) aid_main_viewer_pane_g4_ParamLimits

0x5ae9,	// (0x0002a93f) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00034322) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00034322) aid_main_viewer_pane_g

0x660d,	// (0x0002b463) main_calc_pane_ParamLimits

0x6621,	// (0x0002b477) main_dialer2_pane_ParamLimits

0x234d,	// (0x000271a3) main_cam6_pane

0x234d,	// (0x000271a3) main_vid6_pane

0x7858,	// (0x0002c6ae) listscroll_gen_pane_cp06_ParamLimits

0x7858,	// (0x0002c6ae) listscroll_gen_pane_cp06

0x795e,	// (0x0002c7b4) main_clock2_pane_t5_ParamLimits

0x795e,	// (0x0002c7b4) main_clock2_pane_t5

0x79b5,	// (0x0002c80b) aid_call2_pane_cp10_ParamLimits

0x79c7,	// (0x0002c81d) aid_call_pane_cp10_ParamLimits

0x51d8,	// (0x0002a02e) popup_clock_analogue_window_cp10_g1_ParamLimits

0x51d8,	// (0x0002a02e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x79d9,	// (0x0002c82f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x79d9,	// (0x0002c82f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x51d8,	// (0x0002a02e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x00034658) popup_clock_analogue_window_cp10_g_ParamLimits

0x79eb,	// (0x0002c841) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7e8a,	// (0x0002cce0) cell_dialer2_keypad_pane_g2_ParamLimits

0x7e8a,	// (0x0002cce0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0003473e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0003473e) cell_dialer2_keypad_pane_g

0x7ea6,	// (0x0002ccfc) cell_dialer2_keypad_pane_t1

0x8354,	// (0x0002d1aa) main_cset_text2_pane_ParamLimits

0x8354,	// (0x0002d1aa) main_cset_text2_pane

0xd6c3,	// (0x00032519) area_vitu2_query_pane_g1_ParamLimits

0x8a38,	// (0x0002d88e) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x000348ed) area_vitu2_query_pane_g_ParamLimits

0xd747,	// (0x0003259d) area_vitu2_query_pane_t7_ParamLimits

0xd747,	// (0x0003259d) area_vitu2_query_pane_t7

0x8a99,	// (0x0002d8ef) bg_button_pane_cp018_ParamLimits

0x8aa7,	// (0x0002d8fd) bg_button_pane_cp021_ParamLimits

0x8ab3,	// (0x0002d909) bg_button_pane_cp022_ParamLimits

0x8ab3,	// (0x0002d909) bg_vkb2_func_pane_cp08_ParamLimits

0x8a99,	// (0x0002d8ef) bg_vkb2_func_pane_cp06_ParamLimits

0x8aa7,	// (0x0002d8fd) bg_vkb2_func_pane_cp07_ParamLimits

0x8ac2,	// (0x0002d918) input_focus_pane_cp09_ParamLimits

0xda43,	// (0x00032899) cam6_autofocus_pane_ParamLimits

0xda43,	// (0x00032899) cam6_autofocus_pane

0x22e6,	// (0x0002713c) cam6_image_uncrop_pane_ParamLimits

0x22e6,	// (0x0002713c) cam6_image_uncrop_pane

0x22f5,	// (0x0002714b) cam6_indi_pane_ParamLimits

0x22f5,	// (0x0002714b) cam6_indi_pane

0x230b,	// (0x00027161) cam6_mode_pane_ParamLimits

0x230b,	// (0x00027161) cam6_mode_pane

0x231d,	// (0x00027173) cam6_timer_pane_ParamLimits

0x231d,	// (0x00027173) cam6_timer_pane

0x2329,	// (0x0002717f) cam6_zoom_pane_ParamLimits

0x2329,	// (0x0002717f) cam6_zoom_pane

0x8fa3,	// (0x0002ddf9) cam6_mode_pane_g1_ParamLimits

0x8fa3,	// (0x0002ddf9) cam6_mode_pane_g1

0x8fb3,	// (0x0002de09) cam6_mode_pane_g2_ParamLimits

0x8fb3,	// (0x0002de09) cam6_mode_pane_g2

0x8fc3,	// (0x0002de19) cam6_mode_pane_g3_ParamLimits

0x8fc3,	// (0x0002de19) cam6_mode_pane_g3

0x8fd3,	// (0x0002de29) cam6_mode_pane_g4_ParamLimits

0x8fd3,	// (0x0002de29) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x000349d5) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x000349d5) cam6_mode_pane_g

0xda51,	// (0x000328a7) bg_tb_trans_pane_cp08_ParamLimits

0xda51,	// (0x000328a7) bg_tb_trans_pane_cp08

0xda5f,	// (0x000328b5) cam6_battery_pane_ParamLimits

0xda5f,	// (0x000328b5) cam6_battery_pane

0xda75,	// (0x000328cb) cam6_indi_pane_g1_ParamLimits

0xda75,	// (0x000328cb) cam6_indi_pane_g1

0xda87,	// (0x000328dd) cam6_indi_pane_g2_ParamLimits

0xda87,	// (0x000328dd) cam6_indi_pane_g2

0xda99,	// (0x000328ef) cam6_indi_pane_g3_ParamLimits

0xda99,	// (0x000328ef) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x000349de) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x000349de) cam6_indi_pane_g

0xdaab,	// (0x00032901) cam6_indi_pane_t1_ParamLimits

0xdaab,	// (0x00032901) cam6_indi_pane_t1

0x8fe3,	// (0x0002de39) cam6_autofocus_pane_g1

0x8feb,	// (0x0002de41) cam6_autofocus_pane_g2

0x8ff3,	// (0x0002de49) cam6_autofocus_pane_g3

0x8ffb,	// (0x0002de51) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x000349e5) cam6_autofocus_pane_g

0xdad1,	// (0x00032927) cam6_timer_pane_g1

0xdad9,	// (0x0003292f) cam6_timer_pane_t1

0xdae7,	// (0x0003293d) cam6_zoom_cont_pane

0xdaef,	// (0x00032945) cam6_zoom_pane_g1

0xdaf7,	// (0x0003294d) cam6_zoom_pane_g2

0x9003,	// (0x0002de59) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x000349ee) cam6_zoom_pane_g

0xc403,	// (0x00031259) cam6_battery_pane_g1

0xc403,	// (0x00031259) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x00034565) cam6_battery_pane_g

0xdaff,	// (0x00032955) cam6_zoom_cont_pane_g1

0xdb08,	// (0x0003295e) cam6_zoom_cont_pane_g2

0xdb11,	// (0x00032967) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x000349f5) cam6_zoom_cont_pane_g

0x9020,	// (0x0002de76) cam6_mode_pane_cp_ParamLimits

0x9020,	// (0x0002de76) cam6_mode_pane_cp

0x9032,	// (0x0002de88) cam6_zoom_pane_cp_ParamLimits

0x9032,	// (0x0002de88) cam6_zoom_pane_cp

0x903e,	// (0x0002de94) vid6_image_uncrop_cif_pane_ParamLimits

0x903e,	// (0x0002de94) vid6_image_uncrop_cif_pane

0x904e,	// (0x0002dea4) vid6_image_uncrop_nhd_pane_ParamLimits

0x904e,	// (0x0002dea4) vid6_image_uncrop_nhd_pane

0x905d,	// (0x0002deb3) vid6_image_uncrop_vga_pane_ParamLimits

0x905d,	// (0x0002deb3) vid6_image_uncrop_vga_pane

0x906c,	// (0x0002dec2) vid6_image_uncrop_wvga_pane_ParamLimits

0x906c,	// (0x0002dec2) vid6_image_uncrop_wvga_pane

0x907b,	// (0x0002ded1) vid6_indi_pane_ParamLimits

0x907b,	// (0x0002ded1) vid6_indi_pane

0xda51,	// (0x000328a7) bg_tb_trans_pane_cp09_ParamLimits

0xda51,	// (0x000328a7) bg_tb_trans_pane_cp09

0xdb29,	// (0x0003297f) cam6_battery_pane_cp_ParamLimits

0xdb29,	// (0x0003297f) cam6_battery_pane_cp

0xdb35,	// (0x0003298b) vid6_indi_pane_g1_ParamLimits

0xdb35,	// (0x0003298b) vid6_indi_pane_g1

0xdb47,	// (0x0003299d) vid6_indi_pane_g2_ParamLimits

0xdb47,	// (0x0003299d) vid6_indi_pane_g2

0xdb59,	// (0x000329af) vid6_indi_pane_g3_ParamLimits

0xdb59,	// (0x000329af) vid6_indi_pane_g3

0xdb6e,	// (0x000329c4) vid6_indi_pane_g4_ParamLimits

0xdb6e,	// (0x000329c4) vid6_indi_pane_g4

0xdb83,	// (0x000329d9) vid6_indi_pane_g5_ParamLimits

0xdb83,	// (0x000329d9) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x000349fc) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x000349fc) vid6_indi_pane_g

0xdb9d,	// (0x000329f3) vid6_indi_pane_t1_ParamLimits

0xdb9d,	// (0x000329f3) vid6_indi_pane_t1

0xdbb3,	// (0x00032a09) vid6_indi_pane_t2_ParamLimits

0xdbb3,	// (0x00032a09) vid6_indi_pane_t2

0xdbdb,	// (0x00032a31) vid6_indi_pane_t3_ParamLimits

0xdbdb,	// (0x00032a31) vid6_indi_pane_t3

0xdc03,	// (0x00032a59) vid6_indi_pane_t4_ParamLimits

0xdc03,	// (0x00032a59) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x00034a07) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x00034a07) vid6_indi_pane_t

0xdc27,	// (0x00032a7d) wait_bar_pane_cp08

0x9093,	// (0x0002dee9) main_cset_text2_pane_t1_ParamLimits

0x9093,	// (0x0002dee9) main_cset_text2_pane_t1

0x900b,	// (0x0002de61) listscroll_gen_pane_cp06_t1_ParamLimits

0x900b,	// (0x0002de61) listscroll_gen_pane_cp06_t1

0x234d,	// (0x000271a3) main_cam6_set_pane

0xd097,	// (0x00031eed) bg_tb_trans_pane_cp06_ParamLimits

0xd0ad,	// (0x00031f03) cam4_indicators_pane_g1_ParamLimits

0xd0be,	// (0x00031f14) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0003477b) cam4_indicators_pane_g_ParamLimits

0xd0dc,	// (0x00031f32) cam4_indicators_pane_t1_ParamLimits

0xd0fe,	// (0x00031f54) bg_tb_trans_pane_cp07_ParamLimits

0x1e0b,	// (0x00026c61) vid4_indicators_pane_g1_ParamLimits

0x1e18,	// (0x00026c6e) vid4_indicators_pane_g2_ParamLimits

0x1e25,	// (0x00026c7b) vid4_indicators_pane_g3_ParamLimits

0x1e32,	// (0x00026c88) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0003478d) vid4_indicators_pane_g_ParamLimits

0x1e4a,	// (0x00026ca0) vid4_indicators_pane_t1_ParamLimits

0xd7c4,	// (0x0003261a) vid4_progress_pane_g1_ParamLimits

0xd7d4,	// (0x0003262a) vid4_progress_pane_g2_ParamLimits

0x4ae9,	// (0x0002993f) vid4_progress_pane_g3_ParamLimits

0xd7e4,	// (0x0003263a) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00034938) vid4_progress_pane_g_ParamLimits

0xd802,	// (0x00032658) vid4_progress_pane_t1_ParamLimits

0xd817,	// (0x0003266d) vid4_progress_pane_t2_ParamLimits

0xd82d,	// (0x00032683) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00034943) vid4_progress_pane_t_ParamLimits

0xd842,	// (0x00032698) wait_bar_pane_cp07_ParamLimits

0x90b0,	// (0x0002df06) main_cam6_set_pane_g2_ParamLimits

0x90b0,	// (0x0002df06) main_cam6_set_pane_g2

0x90d4,	// (0x0002df2a) main_cset6_listscroll_pane_ParamLimits

0x90d4,	// (0x0002df2a) main_cset6_listscroll_pane

0x90f4,	// (0x0002df4a) main_cset6_slider_pane_ParamLimits

0x90f4,	// (0x0002df4a) main_cset6_slider_pane

0x910a,	// (0x0002df60) main_cset6_text2_pane_ParamLimits

0x910a,	// (0x0002df60) main_cset6_text2_pane

0xdc36,	// (0x00032a8c) main_cset6_text_pane

0xdc3e,	// (0x00032a94) main_cset_list_pane_copy1_ParamLimits

0xdc3e,	// (0x00032a94) main_cset_list_pane_copy1

0xdc4e,	// (0x00032aa4) scroll_pane_cp028_copy1

0x9118,	// (0x0002df6e) cset_list_set_pane_copy1

0x9129,	// (0x0002df7f) aid_position_infowindow_above_copy1

0x9131,	// (0x0002df87) aid_position_infowindow_below_copy1

0x9139,	// (0x0002df8f) cset_list_set_pane_g1_copy1

0x9141,	// (0x0002df97) cset_list_set_pane_g3_copy1_ParamLimits

0x9141,	// (0x0002df97) cset_list_set_pane_g3_copy1

0x9150,	// (0x0002dfa6) cset_list_set_pane_t1_copy1_ParamLimits

0x9150,	// (0x0002dfa6) cset_list_set_pane_t1_copy1

0x25c9,	// (0x0002741f) list_highlight_pane_cp021_copy1_ParamLimits

0x25c9,	// (0x0002741f) list_highlight_pane_cp021_copy1

0xdc57,	// (0x00032aad) cset6_slider_pane_ParamLimits

0xdc57,	// (0x00032aad) cset6_slider_pane

0xdc83,	// (0x00032ad9) main_cset6_slider_pane_g1_ParamLimits

0xdc83,	// (0x00032ad9) main_cset6_slider_pane_g1

0x9165,	// (0x0002dfbb) main_cset6_slider_pane_g2_ParamLimits

0x9165,	// (0x0002dfbb) main_cset6_slider_pane_g2

0xdcab,	// (0x00032b01) main_cset6_slider_pane_g3_ParamLimits

0xdcab,	// (0x00032b01) main_cset6_slider_pane_g3

0x918d,	// (0x0002dfe3) main_cset6_slider_pane_g4_ParamLimits

0x918d,	// (0x0002dfe3) main_cset6_slider_pane_g4

0x9199,	// (0x0002dfef) main_cset6_slider_pane_g5_ParamLimits

0x9199,	// (0x0002dfef) main_cset6_slider_pane_g5

0xd2f0,	// (0x00032146) main_cset6_slider_pane_g7_ParamLimits

0xd2f0,	// (0x00032146) main_cset6_slider_pane_g7

0xd2fc,	// (0x00032152) main_cset6_slider_pane_g8_ParamLimits

0xd2fc,	// (0x00032152) main_cset6_slider_pane_g8

0x8401,	// (0x0002d257) main_cset6_slider_pane_g9_ParamLimits

0x8401,	// (0x0002d257) main_cset6_slider_pane_g9

0x840d,	// (0x0002d263) main_cset6_slider_pane_g10_ParamLimits

0x840d,	// (0x0002d263) main_cset6_slider_pane_g10

0x8419,	// (0x0002d26f) main_cset6_slider_pane_g11_ParamLimits

0x8419,	// (0x0002d26f) main_cset6_slider_pane_g11

0x8425,	// (0x0002d27b) main_cset6_slider_pane_g12_ParamLimits

0x8425,	// (0x0002d27b) main_cset6_slider_pane_g12

0x8431,	// (0x0002d287) main_cset6_slider_pane_g13_ParamLimits

0x8431,	// (0x0002d287) main_cset6_slider_pane_g13

0x843d,	// (0x0002d293) main_cset6_slider_pane_g14_ParamLimits

0x843d,	// (0x0002d293) main_cset6_slider_pane_g14

0x91a5,	// (0x0002dffb) main_cset6_slider_pane_g15_ParamLimits

0x91a5,	// (0x0002dffb) main_cset6_slider_pane_g15

0x8461,	// (0x0002d2b7) main_cset6_slider_pane_g16_ParamLimits

0x8461,	// (0x0002d2b7) main_cset6_slider_pane_g16

0x846d,	// (0x0002d2c3) main_cset6_slider_pane_g17_ParamLimits

0x846d,	// (0x0002d2c3) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00034a10) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00034a10) main_cset6_slider_pane_g

0xdcb7,	// (0x00032b0d) main_cset6_slider_pane_t1_ParamLimits

0xdcb7,	// (0x00032b0d) main_cset6_slider_pane_t1

0x91d5,	// (0x0002e02b) main_cset6_slider_pane_t2_ParamLimits

0x91d5,	// (0x0002e02b) main_cset6_slider_pane_t2

0x9200,	// (0x0002e056) main_cset6_slider_pane_t3_ParamLimits

0x9200,	// (0x0002e056) main_cset6_slider_pane_t3

0x922b,	// (0x0002e081) main_cset6_slider_pane_t4_ParamLimits

0x922b,	// (0x0002e081) main_cset6_slider_pane_t4

0x9256,	// (0x0002e0ac) main_cset6_slider_pane_t5_ParamLimits

0x9256,	// (0x0002e0ac) main_cset6_slider_pane_t5

0xdcf8,	// (0x00032b4e) main_cset6_slider_pane_t7_ParamLimits

0xdcf8,	// (0x00032b4e) main_cset6_slider_pane_t7

0x9281,	// (0x0002e0d7) main_cset6_slider_pane_t8_ParamLimits

0x9281,	// (0x0002e0d7) main_cset6_slider_pane_t8

0x92a5,	// (0x0002e0fb) main_cset6_slider_pane_t9_ParamLimits

0x92a5,	// (0x0002e0fb) main_cset6_slider_pane_t9

0x92c9,	// (0x0002e11f) main_cset6_slider_pane_t10_ParamLimits

0x92c9,	// (0x0002e11f) main_cset6_slider_pane_t10

0x92ed,	// (0x0002e143) main_cset6_slider_pane_t11_ParamLimits

0x92ed,	// (0x0002e143) main_cset6_slider_pane_t11

0xdd2e,	// (0x00032b84) main_cset6_slider_pane_t14_ParamLimits

0xdd2e,	// (0x00032b84) main_cset6_slider_pane_t14

0xdd67,	// (0x00032bbd) main_cset6_slider_pane_t15_ParamLimits

0xdd67,	// (0x00032bbd) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x00034a35) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x00034a35) main_cset6_slider_pane_t

0xdda0,	// (0x00032bf6) cset_slider_pane_g1_copy1

0xdda9,	// (0x00032bff) cset_slider_pane_g2_copy1

0xddb2,	// (0x00032c08) cset_slider_pane_g3_copy1

0x234d,	// (0x000271a3) bg_popup_sub_pane_cp011_copy1

0xd4ef,	// (0x00032345) main_cset_text_pane_g1_copy1

0xd4f7,	// (0x0003234d) main_cset_text_pane_t1_copy1

0xd505,	// (0x0003235b) main_cset_text_pane_t2_copy1

0xd513,	// (0x00032369) main_cset_text_pane_t3_copy1

0xd521,	// (0x00032377) main_cset_text_pane_t4_copy1

0xd52f,	// (0x00032385) main_cset_text_pane_t5_copy1

0xd53d,	// (0x00032393) main_cset_text_pane_t6_copy1

0xd54b,	// (0x000323a1) main_cset_text_pane_t7_copy1

0x9311,	// (0x0002e167) main_cset_text2_pane_t1_copy1

0x234d,	// (0x000271a3) main_ncimui_pane

0x6863,	// (0x0002b6b9) popup_query_ncimui_window_ParamLimits

0x6863,	// (0x0002b6b9) popup_query_ncimui_window

0xc6d4,	// (0x0003152a) field_cale_ev2_pane_g4_ParamLimits

0xc6d4,	// (0x0003152a) field_cale_ev2_pane_g4

0x7e14,	// (0x0002cc6a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e14,	// (0x0002cc6a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00034719) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00034719) cell_video_dialer_keypad_pane_g

0x7e2c,	// (0x0002cc82) cell_video_dialer_keypad_pane_t1

0x234d,	// (0x000271a3) bg_popup_window_pane_cp012

0x4e49,	// (0x00029c9f) heading_pane_cp06

0xdeaa,	// (0x00032d00) ncim_query_content_pane

0x234d,	// (0x000271a3) bg_popup_heading_pane_cp01

0xdeb2,	// (0x00032d08) ncim_heading_pane_t1

0xdec0,	// (0x00032d16) ncim_indicator_popup_pane

0xded2,	// (0x00032d28) ncim_query_button_pane

0xdee6,	// (0x00032d3c) ncim_query_content_pane_t1

0xdef8,	// (0x00032d4e) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00034a74) ncim_query_content_pane_t

0xdf32,	// (0x00032d88) ncim_query_list_pane

0xdf44,	// (0x00032d9a) ncim_query_popup_pane

0xdec0,	// (0x00032d16) ncim_indicator_popup_pane_ParamLimits

0x93f3,	// (0x0002e249) ncim_query_content_pane_g1_ParamLimits

0x93f3,	// (0x0002e249) ncim_query_content_pane_g1

0xdee6,	// (0x00032d3c) ncim_query_content_pane_t1_ParamLimits

0xdef8,	// (0x00032d4e) ncim_query_content_pane_t2_ParamLimits

0x93ff,	// (0x0002e255) ncim_query_content_pane_t3_ParamLimits

0x93ff,	// (0x0002e255) ncim_query_content_pane_t3

0x9427,	// (0x0002e27d) ncim_query_content_pane_t4_ParamLimits

0x9427,	// (0x0002e27d) ncim_query_content_pane_t4

0x944f,	// (0x0002e2a5) ncim_query_content_pane_t5_ParamLimits

0x944f,	// (0x0002e2a5) ncim_query_content_pane_t5

0xdf0a,	// (0x00032d60) ncim_query_content_pane_t6_ParamLimits

0xdf0a,	// (0x00032d60) ncim_query_content_pane_t6

0xfc1e,	// (0x00034a74) ncim_query_content_pane_t_ParamLimits

0xdf32,	// (0x00032d88) ncim_query_list_pane_ParamLimits

0xdf44,	// (0x00032d9a) ncim_query_popup_pane_ParamLimits

0xdf58,	// (0x00032dae) wait_bar_pane_cp04

0x234d,	// (0x000271a3) input_focus_pane_cp011

0xdf60,	// (0x00032db6) ncim_query_popup_pane_t1

0xdf6e,	// (0x00032dc4) ncim_list_query_list_pane_ParamLimits

0xdf6e,	// (0x00032dc4) ncim_list_query_list_pane

0x234d,	// (0x000271a3) bg_button_pane_cp027

0xdf7b,	// (0x00032dd1) ncim_query_button_pane_g1

0x234d,	// (0x000271a3) list_highlight_pane_cp012

0xdf85,	// (0x00032ddb) ncim_list_query_list_pane_g1

0xdf8d,	// (0x00032de3) ncim_list_query_list_pane_t1

0xd0cd,	// (0x00031f23) cam4_indicators_pane_g3_ParamLimits

0xd0cd,	// (0x00031f23) cam4_indicators_pane_g3

0x1e3e,	// (0x00026c94) vid4_indicators_pane_g5_ParamLimits

0x1e3e,	// (0x00026c94) vid4_indicators_pane_g5

0xd7f3,	// (0x00032649) vid4_progress_pane_g5_ParamLimits

0xd7f3,	// (0x00032649) vid4_progress_pane_g5

0x933b,	// (0x0002e191) main_ncimui_pane_g1

0x9381,	// (0x0002e1d7) ncimui_group_query_pane_ParamLimits

0x9381,	// (0x0002e1d7) ncimui_group_query_pane

0x93b5,	// (0x0002e20b) ncimui_list_pane_ParamLimits

0x93b5,	// (0x0002e20b) ncimui_list_pane

0x93cf,	// (0x0002e225) ncimui_text_pane_ParamLimits

0x93cf,	// (0x0002e225) ncimui_text_pane

0x9477,	// (0x0002e2cd) ncimui_text_pane_t1_ParamLimits

0x9477,	// (0x0002e2cd) ncimui_text_pane_t1

0xdf9b,	// (0x00032df1) ncimui_list_single_graphic_pane_ParamLimits

0xdf9b,	// (0x00032df1) ncimui_list_single_graphic_pane

0x949d,	// (0x0002e2f3) ncimui_query_pane_ParamLimits

0x949d,	// (0x0002e2f3) ncimui_query_pane

0x234d,	// (0x000271a3) list_highlight_pane_cp013

0xdfab,	// (0x00032e01) ncim_list_query_list_pane_t1_copy1

0xdf85,	// (0x00032ddb) ncim_list_single_graphic_pane_g1

0xdfb9,	// (0x00032e0f) ncim_query_button_pane_cp01

0xdfc1,	// (0x00032e17) ncim_query_entry_pane_ParamLimits

0xdfc1,	// (0x00032e17) ncim_query_entry_pane

0xdfd1,	// (0x00032e27) ncimui_query_pane_g1

0xdfd9,	// (0x00032e2f) ncimui_query_pane_t1_ParamLimits

0xdfd9,	// (0x00032e2f) ncimui_query_pane_t1

0x234d,	// (0x000271a3) input_focus_pane_cp012

0xdf60,	// (0x00032db6) ncim_query_entry_pane_t1

0x2fcd,	// (0x00027e23) main_im_pane_ParamLimits

0x25c9,	// (0x0002741f) main_mobtv_pane_ParamLimits

0x25c9,	// (0x0002741f) main_mobtv_pane

0x91bd,	// (0x0002e013) main_cset6_slider_pane_g18_ParamLimits

0x91bd,	// (0x0002e013) main_cset6_slider_pane_g18

0x91c9,	// (0x0002e01f) main_cset6_slider_pane_g19_ParamLimits

0x91c9,	// (0x0002e01f) main_cset6_slider_pane_g19

0xdfef,	// (0x00032e45) bg_main_mobtv_pane_ParamLimits

0xdfef,	// (0x00032e45) bg_main_mobtv_pane

0x94ad,	// (0x0002e303) main_mobtv_info_pane

0x94b6,	// (0x0002e30c) main_mobtv_loading_pane_ParamLimits

0x94b6,	// (0x0002e30c) main_mobtv_loading_pane

0xdffd,	// (0x00032e53) main_mobtv_pg_channel_list_pane

0xe007,	// (0x00032e5d) main_mobtv_pg_hdr_pane

0x94c3,	// (0x0002e319) main_mobtv_programe_curr_pane_ParamLimits

0x94c3,	// (0x0002e319) main_mobtv_programe_curr_pane

0x94d0,	// (0x0002e326) main_mobtv_programe_next_pane_ParamLimits

0x94d0,	// (0x0002e326) main_mobtv_programe_next_pane

0xe010,	// (0x00032e66) popup_mobtv_noti_window

0xc403,	// (0x00031259) main_tv_pg_hdr_pane_g1

0xe018,	// (0x00032e6e) main_tv_pg_hdr_pane_g2

0xe020,	// (0x00032e76) main_tv_pg_hdr_pane_g3

0xe028,	// (0x00032e7e) main_tv_pg_hdr_pane_g4

0xe030,	// (0x00032e86) main_tv_pg_hdr_pane_g5

0xe03a,	// (0x00032e90) main_tv_pg_hdr_pane_g6

0xe044,	// (0x00032e9a) main_tv_pg_hdr_pane_g7

0xe04e,	// (0x00032ea4) main_tv_pg_hdr_pane_g8

0xe058,	// (0x00032eae) main_tv_pg_hdr_pane_g9

0xe062,	// (0x00032eb8) main_tv_pg_hdr_pane_g10

0xe06c,	// (0x00032ec2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00034a81) main_tv_pg_hdr_pane_g

0xe076,	// (0x00032ecc) main_tv_pg_hdr_pane_t1

0xe084,	// (0x00032eda) main_tv_pg_hdr_pane_t2

0xe092,	// (0x00032ee8) main_tv_pg_hdr_pane_t3

0xe0a2,	// (0x00032ef8) main_tv_pg_hdr_pane_t4

0xe0b2,	// (0x00032f08) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00034a98) main_tv_pg_hdr_pane_t

0xe0c2,	// (0x00032f18) single_mobtv_pg_channel_pane_ParamLimits

0xe0c2,	// (0x00032f18) single_mobtv_pg_channel_pane

0xe0d4,	// (0x00032f2a) single_mobtv_pg_channel_table_pane

0xe0dd,	// (0x00032f33) single_mobtv_pg_channel_thumb_pane

0xe0e6,	// (0x00032f3c) single_tv_pg_channel_pane_g1

0xe0ef,	// (0x00032f45) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x00034aa3) single_tv_pg_channel_pane_g

0xc66f,	// (0x000314c5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc66f,	// (0x000314c5) bg_single_mobtv_pg_channel_thumb_pane

0xe0f8,	// (0x00032f4e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0f8,	// (0x00032f4e) single_mobtv_pg_channel_thumb_pane_g1

0xe106,	// (0x00032f5c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe106,	// (0x00032f5c) single_mobtv_pg_channel_thumb_pane_g2

0xe112,	// (0x00032f68) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe112,	// (0x00032f68) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00034aa8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00034aa8) single_mobtv_pg_channel_thumb_pane_g

0xe11e,	// (0x00032f74) single_mobtv_pg_channel_thumb_pane_t1

0xe12c,	// (0x00032f82) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00034aaf) single_mobtv_pg_channel_thumb_pane_t

0xc403,	// (0x00031259) bg_single_mobtv_pg_channel_table_pane_g1

0xc403,	// (0x00031259) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x00034565) bg_single_mobtv_pg_channel_table_pane_g

0xe13a,	// (0x00032f90) single_mobtv_pg_channel_table_pane_t1

0xe148,	// (0x00032f9e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00034ab4) single_mobtv_pg_channel_table_pane_t

0x94e5,	// (0x0002e33b) main_mobtv_info_pane_g1_ParamLimits

0x94e5,	// (0x0002e33b) main_mobtv_info_pane_g1

0x9503,	// (0x0002e359) main_mobtv_info_pane_t1_ParamLimits

0x9503,	// (0x0002e359) main_mobtv_info_pane_t1

0x957b,	// (0x0002e3d1) main_mobtv_info_pane_t2_ParamLimits

0x957b,	// (0x0002e3d1) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00034abe) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00034abe) main_mobtv_info_pane_t

0x960a,	// (0x0002e460) wait_bar_pane_cp05

0x961c,	// (0x0002e472) main_mobtv_loading_pane_g1_ParamLimits

0x961c,	// (0x0002e472) main_mobtv_loading_pane_g1

0x962f,	// (0x0002e485) main_mobtv_loading_pane_g2_ParamLimits

0x962f,	// (0x0002e485) main_mobtv_loading_pane_g2

0x963b,	// (0x0002e491) main_mobtv_loading_pane_g3_ParamLimits

0x963b,	// (0x0002e491) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00034ac5) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00034ac5) main_mobtv_loading_pane_g

0xe156,	// (0x00032fac) main_mobtv_loading_pane_t1_ParamLimits

0xe156,	// (0x00032fac) main_mobtv_loading_pane_t1

0xe16e,	// (0x00032fc4) main_mobtv_loading_pane_t2_ParamLimits

0xe16e,	// (0x00032fc4) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00034acc) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00034acc) main_mobtv_loading_pane_t

0x964e,	// (0x0002e4a4) wait_bar_pane_cp06_ParamLimits

0x964e,	// (0x0002e4a4) wait_bar_pane_cp06

0xe192,	// (0x00032fe8) main_mobtv_programe_curr_pane_t1

0xe1a0,	// (0x00032ff6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x00034ad1) main_mobtv_programe_curr_pane_t

0xe1ae,	// (0x00033004) main_mobtv_programe_next_pane_t1

0xe1bc,	// (0x00033012) main_mobtv_programe_next_pane_t2

0xe1ca,	// (0x00033020) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00034ad6) main_mobtv_programe_next_pane_t

0x234d,	// (0x000271a3) bg_popup_mobtv_noti_window_pane

0xe1d8,	// (0x0003302e) popup_mobtv_noti_window_g1

0xe1e0,	// (0x00033036) popup_mobtv_noti_window_t1

0xe1ee,	// (0x00033044) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00034add) popup_mobtv_noti_window_t

0xc403,	// (0x00031259) bg_popup_mobtv_noti_window_pane_g1

0x234d,	// (0x000271a3) sc_clock_pane

0x234d,	// (0x000271a3) main_fs_bigclock_pane

0x8e18,	// (0x0002dc6e) blid2_tripm_pane_t4_ParamLimits

0x8e18,	// (0x0002dc6e) blid2_tripm_pane_t4

0x965d,	// (0x0002e4b3) sc_clock_pane_g1_ParamLimits

0x965d,	// (0x0002e4b3) sc_clock_pane_g1

0x966f,	// (0x0002e4c5) sc_clock_pane_t1_ParamLimits

0x966f,	// (0x0002e4c5) sc_clock_pane_t1

0x9691,	// (0x0002e4e7) sc_clock_pane_t2_ParamLimits

0x9691,	// (0x0002e4e7) sc_clock_pane_t2

0x96a9,	// (0x0002e4ff) sc_clock_pane_t3_ParamLimits

0x96a9,	// (0x0002e4ff) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x00034ae2) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x00034ae2) sc_clock_pane_t

0xa467,	// (0x0002f2bd) main_fs_bigclock_indicator_pane_ParamLimits

0xa467,	// (0x0002f2bd) main_fs_bigclock_indicator_pane

0xc63f,	// (0x00031495) main_fs_bigclock_pane_g1_ParamLimits

0xc63f,	// (0x00031495) main_fs_bigclock_pane_g1

0xa473,	// (0x0002f2c9) main_fs_bigclock_pane_t1_ParamLimits

0xa473,	// (0x0002f2c9) main_fs_bigclock_pane_t1

0xa485,	// (0x0002f2db) main_fs_bigclock_pane_t2_ParamLimits

0xa485,	// (0x0002f2db) main_fs_bigclock_pane_t2

0xa499,	// (0x0002f2ef) main_fs_bigclock_pane_t3_ParamLimits

0xa499,	// (0x0002f2ef) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x00034cdc) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00034cdc) main_fs_bigclock_pane_t

0xedfd,	// (0x00033c53) main_fs_bigclock_indicator_pane_g1

0xdeda,	// (0x00032d30) ncim_query_content_pane_g2_ParamLimits

0xdeda,	// (0x00032d30) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00034a6f) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00034a6f) ncim_query_content_pane_g

0x96c0,	// (0x0002e516) sc_clock_pane_t4_ParamLimits

0x96c0,	// (0x0002e516) sc_clock_pane_t4

0x25c9,	// (0x0002741f) main_radioblah_pane

0xd011,	// (0x00031e67) cell_call4_button_pane_t1_copy1_ParamLimits

0xd011,	// (0x00031e67) cell_call4_button_pane_t1_copy1

0x9343,	// (0x0002e199) main_ncimui_pane_t1_ParamLimits

0x9343,	// (0x0002e199) main_ncimui_pane_t1

0x9355,	// (0x0002e1ab) main_ncimui_pane_t2_ParamLimits

0x9355,	// (0x0002e1ab) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00034a68) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00034a68) main_ncimui_pane_t

0xe31c,	// (0x00033172) main_radioblah_anim_pane_ParamLimits

0xe31c,	// (0x00033172) main_radioblah_anim_pane

0xe32d,	// (0x00033183) main_radioblah_info_pane_ParamLimits

0xe32d,	// (0x00033183) main_radioblah_info_pane

0xe341,	// (0x00033197) main_radioblah_pane_t1_ParamLimits

0xe341,	// (0x00033197) main_radioblah_pane_t1

0xe35d,	// (0x000331b3) main_radioblah_pane_t2_ParamLimits

0xe35d,	// (0x000331b3) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x00034b03) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x00034b03) main_radioblah_pane_t

0x9769,	// (0x0002e5bf) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9769,	// (0x0002e5bf) main_radioblah_rocker_ctrl_pane

0xe3a5,	// (0x000331fb) main_radioblah_info_pane_t1_ParamLimits

0xe3a5,	// (0x000331fb) main_radioblah_info_pane_t1

0x97c1,	// (0x0002e617) main_radioblah_info_pane_t2_ParamLimits

0x97c1,	// (0x0002e617) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00034b0c) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00034b0c) main_radioblah_info_pane_t

0xc403,	// (0x00031259) main_radioblah_rocker_ctrl_pane_g1

0x9871,	// (0x0002e6c7) main_radioblah_rocker_ctrl_pane_g2

0x9879,	// (0x0002e6cf) main_radioblah_rocker_ctrl_pane_g3

0x9881,	// (0x0002e6d7) main_radioblah_rocker_ctrl_pane_g4

0x9889,	// (0x0002e6df) main_radioblah_rocker_ctrl_pane_g5

0x9891,	// (0x0002e6e7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x00034b15) main_radioblah_rocker_ctrl_pane_g

0x9311,	// (0x0002e167) main_cset_text2_pane_t1_copy1_ParamLimits

0xd08f,	// (0x00031ee5) cam4_image_uncrop_qvga_pane

0xd0f6,	// (0x00031f4c) vid4_image_uncrop_qcif_pane

0xda43,	// (0x00032899) cam6_image_uncrop_qvga_pane_ParamLimits

0xda43,	// (0x00032899) cam6_image_uncrop_qvga_pane

0xdb19,	// (0x0003296f) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb19,	// (0x0003296f) vid6_image_uncrop_qcif_pane

0x234d,	// (0x000271a3) bg_popup_preview_window_pane_cp03

0xde8c,	// (0x00032ce2) list_cset_text2_pane

0xde94,	// (0x00032cea) main_cset6_text2_pane_g1

0xde9c,	// (0x00032cf2) main_cset6_text2_pane_t1

0x9899,	// (0x0002e6ef) list_cset_text2_pane_t1_ParamLimits

0x9899,	// (0x0002e6ef) list_cset_text2_pane_t1

0x25c9,	// (0x0002741f) main_radioblah_pane_ParamLimits

0x95f6,	// (0x0002e44c) main_mobtv_info_pane_t3_ParamLimits

0x95f6,	// (0x0002e44c) main_mobtv_info_pane_t3

0x9757,	// (0x0002e5ad) main_radioblah_pane_g1

0x9791,	// (0x0002e5e7) main_radioblah_info_pane_g1

0x9816,	// (0x0002e66c) main_radioblah_info_pane_t3_ParamLimits

0x9816,	// (0x0002e66c) main_radioblah_info_pane_t3

0x4842,	// (0x00029698) highlight_cell_cale_month_pane_ParamLimits

0x4842,	// (0x00029698) highlight_cell_cale_month_pane

0x234d,	// (0x000271a3) main_phob_fisheye_pane

0xc75d,	// (0x000315b3) scroll_pane_cp0031_ParamLimits

0xc75d,	// (0x000315b3) scroll_pane_cp0031

0xdc27,	// (0x00032a7d) wait_bar_pane_cp08_ParamLimits

0x9118,	// (0x0002df6e) cset_list_set_pane_copy1_ParamLimits

0xe3df,	// (0x00033235) highlight_cell_cale_month_pane_g1

0x98b2,	// (0x0002e708) highlight_cell_cale_month_pane_t1

0xd7b3,	// (0x00032609) list_gen_pane_cp01

0xd2db,	// (0x00032131) scroll_pane_01

0xe3e7,	// (0x0003323d) list_single_double_fisheye_pane

0x98c0,	// (0x0002e716) list_double_fisheye_pane_g1_ParamLimits

0x98c0,	// (0x0002e716) list_double_fisheye_pane_g1

0x98cc,	// (0x0002e722) list_double_fisheye_pane_g2_ParamLimits

0x98cc,	// (0x0002e722) list_double_fisheye_pane_g2

0x98e0,	// (0x0002e736) list_double_fisheye_pane_g3_ParamLimits

0x98e0,	// (0x0002e736) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x00034b22) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x00034b22) list_double_fisheye_pane_g

0x9909,	// (0x0002e75f) list_double_fisheye_pane_t1_ParamLimits

0x9909,	// (0x0002e75f) list_double_fisheye_pane_t1

0x9924,	// (0x0002e77a) list_double_fisheye_pane_t2_ParamLimits

0x9924,	// (0x0002e77a) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00034b2d) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00034b2d) list_double_fisheye_pane_t

0x234d,	// (0x000271a3) main_call5_pane

0x96eb,	// (0x0002e541) sc_swipe_pane_ParamLimits

0x96eb,	// (0x0002e541) sc_swipe_pane

0x9959,	// (0x0002e7af) call5_image_pane_ParamLimits

0x9959,	// (0x0002e7af) call5_image_pane

0x9976,	// (0x0002e7cc) call5_swipe_1_pane_ParamLimits

0x9976,	// (0x0002e7cc) call5_swipe_1_pane

0x9989,	// (0x0002e7df) call5_swipe_2_pane_ParamLimits

0x9989,	// (0x0002e7df) call5_swipe_2_pane

0x99b4,	// (0x0002e80a) popup_call5_audio_first_window_ParamLimits

0x99b4,	// (0x0002e80a) popup_call5_audio_first_window

0xc66f,	// (0x000314c5) call5_swipe_1_pane_g1_ParamLimits

0xc66f,	// (0x000314c5) call5_swipe_1_pane_g1

0xe3f0,	// (0x00033246) call5_swipe_1_pane_g2_ParamLimits

0xe3f0,	// (0x00033246) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00034b32) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00034b32) call5_swipe_1_pane_g

0xe3fc,	// (0x00033252) call5_swipe_1_pane_t1_ParamLimits

0xe3fc,	// (0x00033252) call5_swipe_1_pane_t1

0xc66f,	// (0x000314c5) call5_swipe_2_pane_g1_ParamLimits

0xc66f,	// (0x000314c5) call5_swipe_2_pane_g1

0xe411,	// (0x00033267) call5_swipe_2_pane_g2_ParamLimits

0xe411,	// (0x00033267) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x00034b37) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x00034b37) call5_swipe_2_pane_g

0xe41d,	// (0x00033273) call5_swipe_2_pane_t1_ParamLimits

0xe41d,	// (0x00033273) call5_swipe_2_pane_t1

0xe432,	// (0x00033288) sc_swipe_pane_g1_ParamLimits

0xe432,	// (0x00033288) sc_swipe_pane_g1

0xe43f,	// (0x00033295) sc_swipe_pane_g2_ParamLimits

0xe43f,	// (0x00033295) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00034b3c) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00034b3c) sc_swipe_pane_g

0xe44b,	// (0x000332a1) sc_swipe_pane_t1_ParamLimits

0xe44b,	// (0x000332a1) sc_swipe_pane_t1

0x234d,	// (0x000271a3) main_cmail_launcher_pane

0x99c5,	// (0x0002e81b) aid_size_cell_cmail_l_ParamLimits

0x99c5,	// (0x0002e81b) aid_size_cell_cmail_l

0x99df,	// (0x0002e835) grid_cmail_l_pane_ParamLimits

0x99df,	// (0x0002e835) grid_cmail_l_pane

0x99fa,	// (0x0002e850) cell_cmail_l_pane_ParamLimits

0x99fa,	// (0x0002e850) cell_cmail_l_pane

0x9a20,	// (0x0002e876) cell_cmail_l_pane_g1_ParamLimits

0x9a20,	// (0x0002e876) cell_cmail_l_pane_g1

0x9a2c,	// (0x0002e882) cell_cmail_l_pane_t1_ParamLimits

0x9a2c,	// (0x0002e882) cell_cmail_l_pane_t1

0xe460,	// (0x000332b6) cell_cmail_l_pane_t2_ParamLimits

0xe460,	// (0x000332b6) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00034b41) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00034b41) cell_cmail_l_pane_t

0x25c9,	// (0x0002741f) grid_highlight_pane_cp018_ParamLimits

0x25c9,	// (0x0002741f) grid_highlight_pane_cp018

0x2479,	// (0x000272cf) main2_pane_ParamLimits

0x2479,	// (0x000272cf) main2_pane

0x314a,	// (0x00027fa0) popup_sp_fs_action_menu_bg_pane_g1

0x3152,	// (0x00027fa8) popup_sp_fs_action_menu_bg_pane_g2

0x315a,	// (0x00027fb0) popup_sp_fs_action_menu_bg_pane_g3

0x3162,	// (0x00027fb8) popup_sp_fs_action_menu_bg_pane_g4

0x316a,	// (0x00027fc0) popup_sp_fs_action_menu_bg_pane_g5

0x3172,	// (0x00027fc8) popup_sp_fs_action_menu_bg_pane_g6

0x317a,	// (0x00027fd0) popup_sp_fs_action_menu_bg_pane_g7

0x3182,	// (0x00027fd8) popup_sp_fs_action_menu_bg_pane_g8

0x318a,	// (0x00027fe0) popup_sp_fs_action_menu_bg_pane_g9

0x3192,	// (0x00027fe8) popup_sp_fs_action_menu_bg_pane_g10

0x3192,	// (0x00027fe8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00034011) popup_sp_fs_action_menu_bg_pane_g

0x3965,	// (0x000287bb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_t3_g3_g1

0x3971,	// (0x000287c7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3971,	// (0x000287c7) list_medium_line_x2_t3_g3_g2

0x397d,	// (0x000287d3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x397d,	// (0x000287d3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x000340c1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x000340c1) list_medium_line_x2_t3_g3_g

0x3989,	// (0x000287df) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3989,	// (0x000287df) list_medium_line_x2_t3_g3_t1

0x399e,	// (0x000287f4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x399e,	// (0x000287f4) list_medium_line_x2_t3_g3_t2

0x39b2,	// (0x00028808) list_medium_line_x2_t3_g3_t3_ParamLimits

0x39b2,	// (0x00028808) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x000340c8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x000340c8) list_medium_line_x2_t3_g3_t

0x3965,	// (0x000287bb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_t3_g2_g1

0x397d,	// (0x000287d3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x397d,	// (0x000287d3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x000340cf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x000340cf) list_medium_line_x2_t3_g2_g

0x39c7,	// (0x0002881d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x39c7,	// (0x0002881d) list_medium_line_x2_t3_g2_t1

0x39dd,	// (0x00028833) list_medium_line_x2_t3_g2_t2_ParamLimits

0x39dd,	// (0x00028833) list_medium_line_x2_t3_g2_t2

0x39b2,	// (0x00028808) list_medium_line_x2_t3_g2_t3_ParamLimits

0x39b2,	// (0x00028808) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x000340d4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x000340d4) list_medium_line_x2_t3_g2_t

0x3965,	// (0x000287bb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_t4_g4_g1

0x39ef,	// (0x00028845) list_medium_line_x2_t4_g4_g2_ParamLimits

0x39ef,	// (0x00028845) list_medium_line_x2_t4_g4_g2

0x3971,	// (0x000287c7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3971,	// (0x000287c7) list_medium_line_x2_t4_g4_g3

0x39fb,	// (0x00028851) list_medium_line_x2_t4_g4_g4_ParamLimits

0x39fb,	// (0x00028851) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x000340db) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x000340db) list_medium_line_x2_t4_g4_g

0x3a07,	// (0x0002885d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3a07,	// (0x0002885d) list_medium_line_x2_t4_g4_t1

0x3a1e,	// (0x00028874) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3a1e,	// (0x00028874) list_medium_line_x2_t4_g4_t2

0x3a33,	// (0x00028889) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3a33,	// (0x00028889) list_medium_line_x2_t4_g4_t3

0x3a45,	// (0x0002889b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3a45,	// (0x0002889b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x000340e4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x000340e4) list_medium_line_x2_t4_g4_t

0x3965,	// (0x000287bb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_t2_g4_g1

0x39ef,	// (0x00028845) list_medium_line_x2_t2_g4_g2_ParamLimits

0x39ef,	// (0x00028845) list_medium_line_x2_t2_g4_g2

0x3971,	// (0x000287c7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3971,	// (0x000287c7) list_medium_line_x2_t2_g4_g3

0x397d,	// (0x000287d3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x397d,	// (0x000287d3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0003414b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0003414b) list_medium_line_x2_t2_g4_g

0x4860,	// (0x000296b6) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4860,	// (0x000296b6) list_medium_line_x2_t2_g4_t1

0x39b2,	// (0x00028808) list_medium_line_x2_t2_g4_t2_ParamLimits

0x39b2,	// (0x00028808) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00034154) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00034154) list_medium_line_x2_t2_g4_t

0x3965,	// (0x000287bb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_t2_g3_g1

0x3971,	// (0x000287c7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3971,	// (0x000287c7) list_medium_line_x2_t2_g3_g2

0x397d,	// (0x000287d3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x397d,	// (0x000287d3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x000340c1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x000340c1) list_medium_line_x2_t2_g3_g

0x4875,	// (0x000296cb) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4875,	// (0x000296cb) list_medium_line_x2_t2_g3_t1

0x39b2,	// (0x00028808) list_medium_line_x2_t2_g3_t2_ParamLimits

0x39b2,	// (0x00028808) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00034159) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00034159) list_medium_line_x2_t2_g3_t

0x4ba4,	// (0x000299fa) main_sp_fs_list_pane_ParamLimits

0x4ba4,	// (0x000299fa) main_sp_fs_list_pane

0x4bb0,	// (0x00029a06) sp_fs_scroll_pane_ParamLimits

0x4bb0,	// (0x00029a06) sp_fs_scroll_pane

0x4bbc,	// (0x00029a12) list_medium_line_x2_t3_t1

0x4bcc,	// (0x00029a22) list_medium_line_x2_t3_t2

0x4bda,	// (0x00029a30) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x000341a4) list_medium_line_x2_t3_t

0x4be8,	// (0x00029a3e) list_medium_line_x3_t4_t1

0x4bf8,	// (0x00029a4e) list_medium_line_x3_t4_t2

0x4c06,	// (0x00029a5c) list_medium_line_x3_t4_t3

0x4bda,	// (0x00029a30) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x000341ab) list_medium_line_x3_t4_t

0x4c14,	// (0x00029a6a) list_medium_line_x4_t5_t1

0x4c24,	// (0x00029a7a) list_medium_line_x4_t5_t2

0x4c06,	// (0x00029a5c) list_medium_line_x4_t5_t3

0x4c32,	// (0x00029a88) list_medium_line_x4_t5_t4

0x4bda,	// (0x00029a30) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x000341b4) list_medium_line_x4_t5_t

0x3965,	// (0x000287bb) list_medium_line_t4_g4_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_t4_g4_g1

0x39fb,	// (0x00028851) list_medium_line_t4_g4_g2_ParamLimits

0x39fb,	// (0x00028851) list_medium_line_t4_g4_g2

0x4c40,	// (0x00029a96) list_medium_line_t4_g4_g3_ParamLimits

0x4c40,	// (0x00029a96) list_medium_line_t4_g4_g3

0x397d,	// (0x000287d3) list_medium_line_t4_g4_g4_ParamLimits

0x397d,	// (0x000287d3) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x000341bf) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x000341bf) list_medium_line_t4_g4_g

0x4c4c,	// (0x00029aa2) list_medium_line_t4_g4_t1_ParamLimits

0x4c4c,	// (0x00029aa2) list_medium_line_t4_g4_t1

0x4c61,	// (0x00029ab7) list_medium_line_t4_g4_t2_ParamLimits

0x4c61,	// (0x00029ab7) list_medium_line_t4_g4_t2

0x4c76,	// (0x00029acc) list_medium_line_t4_g4_t3_ParamLimits

0x4c76,	// (0x00029acc) list_medium_line_t4_g4_t3

0x39b2,	// (0x00028808) list_medium_line_t4_g4_t4_ParamLimits

0x39b2,	// (0x00028808) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x000341c8) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x000341c8) list_medium_line_t4_g4_t

0x4fc0,	// (0x00029e16) chi_dic_find_pane_g1

0x6635,	// (0x0002b48b) main_tport_pane

0xd43c,	// (0x00032292) list_medium_line_plain_t1

0xd48e,	// (0x000322e4) list_medium_line_t2_g2_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_t2_g2_g1

0xd49a,	// (0x000322f0) list_medium_line_t2_g2_g2_ParamLimits

0xd49a,	// (0x000322f0) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00034884) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00034884) list_medium_line_t2_g2_g

0x8723,	// (0x0002d579) list_medium_line_t2_g2_t1_ParamLimits

0x8723,	// (0x0002d579) list_medium_line_t2_g2_t1

0x873d,	// (0x0002d593) list_medium_line_t2_g2_t2_ParamLimits

0x873d,	// (0x0002d593) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00034889) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00034889) list_medium_line_t2_g2_t

0xd854,	// (0x000326aa) aid_sp_fs_list_icon_a_sm

0xd85c,	// (0x000326b2) aid_sp_fs_list_icon_d

0xd864,	// (0x000326ba) aid_sp_fs_text_primary

0xd86d,	// (0x000326c3) aid_sp_fs_text_secondary

0xd876,	// (0x000326cc) list_medium_line

0xd876,	// (0x000326cc) list_medium_line_g2

0xd876,	// (0x000326cc) list_medium_line_g3

0xd876,	// (0x000326cc) list_medium_line_plain

0xd876,	// (0x000326cc) list_medium_line_plain_t2

0xd876,	// (0x000326cc) list_medium_line_plain_t3

0xd876,	// (0x000326cc) list_medium_line_right_icon

0xd876,	// (0x000326cc) list_medium_line_right_iconx2

0xd876,	// (0x000326cc) list_medium_line_t2

0xd876,	// (0x000326cc) list_medium_line_t2_g2

0xd876,	// (0x000326cc) list_medium_line_t2_g3

0xd876,	// (0x000326cc) list_medium_line_t2_right_icon

0xd876,	// (0x000326cc) list_medium_line_t2_right_iconx2

0xd876,	// (0x000326cc) list_medium_line_t3

0xd876,	// (0x000326cc) list_medium_line_t3_g2

0xd876,	// (0x000326cc) list_medium_line_t3_g3

0xd876,	// (0x000326cc) list_medium_line_t3_right_iconx2

0xd87f,	// (0x000326d5) list_medium_line_t4_g4

0xd888,	// (0x000326de) list_medium_line_x2

0xd888,	// (0x000326de) list_medium_line_x2_t2_g2

0xd888,	// (0x000326de) list_medium_line_x2_t2_g3

0xd888,	// (0x000326de) list_medium_line_x2_t2_g4

0xd888,	// (0x000326de) list_medium_line_x2_t3

0xd888,	// (0x000326de) list_medium_line_x2_t3_g2

0xd888,	// (0x000326de) list_medium_line_x2_t3_g3

0xd888,	// (0x000326de) list_medium_line_x2_t3_g4

0xd888,	// (0x000326de) list_medium_line_x2_t4_g2

0xd888,	// (0x000326de) list_medium_line_x2_t4_g4

0xd891,	// (0x000326e7) list_medium_line_x3

0xd891,	// (0x000326e7) list_medium_line_x3_t4

0xd891,	// (0x000326e7) list_medium_line_x3_t4_g4

0xd87f,	// (0x000326d5) list_medium_line_x4_t4

0xd87f,	// (0x000326d5) list_medium_line_x4_t4_g7

0xd87f,	// (0x000326d5) list_medium_line_x4_t5

0xd89a,	// (0x000326f0) list_single_fs_dyc_pane_ParamLimits

0xd89a,	// (0x000326f0) list_single_fs_dyc_pane

0x3965,	// (0x000287bb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x4_t4_g7_g1

0xddbb,	// (0x00032c11) list_medium_line_x4_t4_g7_g2_ParamLimits

0xddbb,	// (0x00032c11) list_medium_line_x4_t4_g7_g2

0xddc7,	// (0x00032c1d) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddc7,	// (0x00032c1d) list_medium_line_x4_t4_g7_g3

0xddd6,	// (0x00032c2c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xddd6,	// (0x00032c2c) list_medium_line_x4_t4_g7_g4

0xdde2,	// (0x00032c38) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdde2,	// (0x00032c38) list_medium_line_x4_t4_g7_g5

0xddf1,	// (0x00032c47) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddf1,	// (0x00032c47) list_medium_line_x4_t4_g7_g6

0xde00,	// (0x00032c56) list_medium_line_x4_t4_g7_g7_ParamLimits

0xde00,	// (0x00032c56) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00034a4e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00034a4e) list_medium_line_x4_t4_g7_g

0xde0c,	// (0x00032c62) list_medium_line_x4_t4_g7_t1_ParamLimits

0xde0c,	// (0x00032c62) list_medium_line_x4_t4_g7_t1

0xde21,	// (0x00032c77) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde21,	// (0x00032c77) list_medium_line_x4_t4_g7_t2

0xde36,	// (0x00032c8c) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde36,	// (0x00032c8c) list_medium_line_x4_t4_g7_t3

0xde4b,	// (0x00032ca1) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde4b,	// (0x00032ca1) list_medium_line_x4_t4_g7_t4

0xde5d,	// (0x00032cb3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde5d,	// (0x00032cb3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00034a5d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00034a5d) list_medium_line_x4_t4_g7_t

0xde6f,	// (0x00032cc5) list_single_dyc_row_pane_ParamLimits

0xde6f,	// (0x00032cc5) list_single_dyc_row_pane

0x9946,	// (0x0002e79c) call5_gesture_pane_ParamLimits

0x9946,	// (0x0002e79c) call5_gesture_pane

0x999c,	// (0x0002e7f2) call5_windows_pane_ParamLimits

0x999c,	// (0x0002e7f2) call5_windows_pane

0x9a42,	// (0x0002e898) call5_swipe_1_pane_cp_ParamLimits

0x9a42,	// (0x0002e898) call5_swipe_1_pane_cp

0x9a4e,	// (0x0002e8a4) call5_swipe_2_pane_cp_ParamLimits

0x9a4e,	// (0x0002e8a4) call5_swipe_2_pane_cp

0x541e,	// (0x0002a274) call5_image_pane_cp

0x9a5a,	// (0x0002e8b0) popup_call5_audio_first_window_cp_ParamLimits

0x9a5a,	// (0x0002e8b0) popup_call5_audio_first_window_cp

0xe432,	// (0x00033288) call5_swipe_1_pane_g1_cp_ParamLimits

0xe432,	// (0x00033288) call5_swipe_1_pane_g1_cp

0xe472,	// (0x000332c8) call5_swipe_1_pane_g2_cp

0xe44b,	// (0x000332a1) call5_swipe_1_pane_t1_cp_ParamLimits

0xe44b,	// (0x000332a1) call5_swipe_1_pane_t1_cp

0xe432,	// (0x00033288) call5_swipe_2_pane_g1_cp_ParamLimits

0xe432,	// (0x00033288) call5_swipe_2_pane_g1_cp

0xe47a,	// (0x000332d0) call5_swipe_2_pane_g2_cp

0xe482,	// (0x000332d8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe482,	// (0x000332d8) call5_swipe_2_pane_t1_cp

0x25c9,	// (0x0002741f) main_sp_fs_email_pane

0xe497,	// (0x000332ed) main_sp_fs_listscroll_pane_te

0xe4a0,	// (0x000332f6) popup_sp_fs_action_menu_pane_ParamLimits

0xe4a0,	// (0x000332f6) popup_sp_fs_action_menu_pane

0xc403,	// (0x00031259) bg_sp_fs_ctrlbar_pane_g1

0xe4e4,	// (0x0003333a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4ed,	// (0x00033343) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe4f6,	// (0x0003334c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc403,	// (0x00031259) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x00034b46) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1e8,	// (0x0003103e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1e8,	// (0x0003103e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4ff,	// (0x00033355) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4ff,	// (0x00033355) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe50b,	// (0x00033361) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe50b,	// (0x00033361) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00034b4f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00034b4f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe517,	// (0x0003336d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe517,	// (0x0003336d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe531,	// (0x00033387) list_medium_line_t2_right_icon_g1

0x9a68,	// (0x0002e8be) list_medium_line_t2_right_icon_t1

0x9a78,	// (0x0002e8ce) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00034b54) list_medium_line_t2_right_icon_t

0xbefd,	// (0x00030d53) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbefd,	// (0x00030d53) bg_sp_fs_ctrlbar_pane

0x9ace,	// (0x0002e924) main_sp_fs_ctrlbar_button_pane_cp01

0x9ad6,	// (0x0002e92c) main_sp_fs_ctrlbar_ddmenu_pane

0xe571,	// (0x000333c7) main_sp_fs_ctrlbar_pane_g1

0xe57d,	// (0x000333d3) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00034b59) main_sp_fs_ctrlbar_pane_g

0xe589,	// (0x000333df) main_sp_fs_ctrlbar_pane_t1

0x9ae0,	// (0x0002e936) main_sp_fs_ctrlbar_pane

0x9b04,	// (0x0002e95a) main_sp_fs_listscroll_pane_te_cp01

0x9b24,	// (0x0002e97a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9b24,	// (0x0002e97a) popup_sp_fs_action_menu_pane_cp01

0x25c9,	// (0x0002741f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x25c9,	// (0x0002741f) bg_sp_fs_highlight_list_pane_cp01

0xe59e,	// (0x000333f4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe59e,	// (0x000333f4) sp_fs_action_menu_list_gene_pane_g1

0xe5ad,	// (0x00033403) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5ad,	// (0x00033403) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00034b5e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00034b5e) sp_fs_action_menu_list_gene_pane_g

0xe5ba,	// (0x00033410) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5ba,	// (0x00033410) sp_fs_action_menu_list_gene_pane_t1

0xe5d2,	// (0x00033428) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe5d2,	// (0x00033428) sp_fs_action_menu_list_gene_pane

0xe5f3,	// (0x00033449) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5f3,	// (0x00033449) popup_sp_fs_action_menu_bg_pane

0xe601,	// (0x00033457) sp_fs_action_menu_list_pane_ParamLimits

0xe601,	// (0x00033457) sp_fs_action_menu_list_pane

0xe623,	// (0x00033479) sp_fs_scroll_pane_cp01_ParamLimits

0xe623,	// (0x00033479) sp_fs_scroll_pane_cp01

0x9b3e,	// (0x0002e994) list_medium_line_plain_t2_t1

0x9b4e,	// (0x0002e9a4) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00034b63) list_medium_line_plain_t2_t

0x9b5e,	// (0x0002e9b4) list_medium_line_plain_t3_t1

0x9b6e,	// (0x0002e9c4) list_medium_line_plain_t3_t2

0x9b7c,	// (0x0002e9d2) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00034b68) list_medium_line_plain_t3_t

0x3965,	// (0x000287bb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_t2_g2_g1

0x397d,	// (0x000287d3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x397d,	// (0x000287d3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x000340cf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x000340cf) list_medium_line_x2_t2_g2_g

0x4c4c,	// (0x00029aa2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4c4c,	// (0x00029aa2) list_medium_line_x2_t2_g2_t1

0x39b2,	// (0x00028808) list_medium_line_x2_t2_g2_t2_ParamLimits

0x39b2,	// (0x00028808) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00034b6f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00034b6f) list_medium_line_x2_t2_g2_t

0x3965,	// (0x000287bb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_t4_g2_g1

0x397d,	// (0x000287d3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x397d,	// (0x000287d3) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x000340cf) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x000340cf) list_medium_line_x2_t4_g2_g

0x9b8a,	// (0x0002e9e0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9b8a,	// (0x0002e9e0) list_medium_line_x2_t4_g2_t1

0x9ba4,	// (0x0002e9fa) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9ba4,	// (0x0002e9fa) list_medium_line_x2_t4_g2_t2

0x9bb9,	// (0x0002ea0f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9bb9,	// (0x0002ea0f) list_medium_line_x2_t4_g2_t3

0x39b2,	// (0x00028808) list_medium_line_x2_t4_g2_t4_ParamLimits

0x39b2,	// (0x00028808) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1e,	// (0x00034b74) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1e,	// (0x00034b74) list_medium_line_x2_t4_g2_t

0xe649,	// (0x0003349f) list_medium_line_t3_right_iconx2_g1

0xe531,	// (0x00033387) list_medium_line_t3_right_iconx2_g2

0x9bce,	// (0x0002ea24) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd27,	// (0x00034b7d) list_medium_line_t3_right_iconx2_g

0x9bd8,	// (0x0002ea2e) list_medium_line_t3_right_iconx2_t1

0x9be8,	// (0x0002ea3e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2e,	// (0x00034b84) list_medium_line_t3_right_iconx2_t

0x3965,	// (0x000287bb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x3_t4_g4_g1

0x3971,	// (0x000287c7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3971,	// (0x000287c7) list_medium_line_x3_t4_g4_g2

0x39fb,	// (0x00028851) list_medium_line_x3_t4_g4_g3_ParamLimits

0x39fb,	// (0x00028851) list_medium_line_x3_t4_g4_g3

0xe651,	// (0x000334a7) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe651,	// (0x000334a7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd33,	// (0x00034b89) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd33,	// (0x00034b89) list_medium_line_x3_t4_g4_g

0x9bf6,	// (0x0002ea4c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9bf6,	// (0x0002ea4c) list_medium_line_x3_t4_g4_t1

0x9c0d,	// (0x0002ea63) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9c0d,	// (0x0002ea63) list_medium_line_x3_t4_g4_t2

0x4c61,	// (0x00029ab7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4c61,	// (0x00029ab7) list_medium_line_x3_t4_g4_t3

0xe65d,	// (0x000334b3) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe65d,	// (0x000334b3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3c,	// (0x00034b92) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3c,	// (0x00034b92) list_medium_line_x3_t4_g4_t

0x9c26,	// (0x0002ea7c) list_single_dyc_row_text_pane_t1_ParamLimits

0x9c26,	// (0x0002ea7c) list_single_dyc_row_text_pane_t1

0x9c6f,	// (0x0002eac5) list_single_dyc_row_text_pane_t2_ParamLimits

0x9c6f,	// (0x0002eac5) list_single_dyc_row_text_pane_t2

0xe67a,	// (0x000334d0) list_single_dyc_row_text_pane_t3_ParamLimits

0xe67a,	// (0x000334d0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd45,	// (0x00034b9b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd45,	// (0x00034b9b) list_single_dyc_row_text_pane_t

0xe68c,	// (0x000334e2) list_single_dyc_row_pane_g1_ParamLimits

0xe68c,	// (0x000334e2) list_single_dyc_row_pane_g1

0xe698,	// (0x000334ee) list_single_dyc_row_pane_g2_ParamLimits

0xe698,	// (0x000334ee) list_single_dyc_row_pane_g2

0xe6a4,	// (0x000334fa) list_single_dyc_row_pane_g3_ParamLimits

0xe6a4,	// (0x000334fa) list_single_dyc_row_pane_g3

0xe6b0,	// (0x00033506) list_single_dyc_row_pane_g4_ParamLimits

0xe6b0,	// (0x00033506) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x00034ba2) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x00034ba2) list_single_dyc_row_pane_g

0xe6bc,	// (0x00033512) list_single_dyc_row_text_pane_ParamLimits

0xe6bc,	// (0x00033512) list_single_dyc_row_text_pane

0x234d,	// (0x000271a3) bg_sp_fs_scroll_pane

0xe6db,	// (0x00033531) thumb_sp_fs_scroll_pane

0xd48e,	// (0x000322e4) list_medium_line_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_g1

0xe6e4,	// (0x0003353a) list_medium_line_t1_ParamLimits

0xe6e4,	// (0x0003353a) list_medium_line_t1

0x3965,	// (0x000287bb) list_medium_line_x2_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_g1

0x3971,	// (0x000287c7) list_medium_line_x2_g2_ParamLimits

0x3971,	// (0x000287c7) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00034bab) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00034bab) list_medium_line_x2_g

0xe6f9,	// (0x0003354f) list_medium_line_x2_t1_ParamLimits

0xe6f9,	// (0x0003354f) list_medium_line_x2_t1

0x3965,	// (0x000287bb) list_medium_line_x3_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x3_g1

0x3971,	// (0x000287c7) list_medium_line_x3_g2_ParamLimits

0x3971,	// (0x000287c7) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00034bab) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00034bab) list_medium_line_x3_g

0xe6f9,	// (0x0003354f) list_medium_line_x3_t1_ParamLimits

0xe6f9,	// (0x0003354f) list_medium_line_x3_t1

0xe70f,	// (0x00033565) thumb_sp_fs_scroll_pane_g1

0xe718,	// (0x0003356e) thumb_sp_fs_scroll_pane_g2

0xe721,	// (0x00033577) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00034bb0) thumb_sp_fs_scroll_pane_g

0xe70f,	// (0x00033565) bg_sp_fs_scroll_pane_g1

0xe718,	// (0x0003356e) bg_sp_fs_scroll_pane_g2

0xe721,	// (0x00033577) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00034bb0) bg_sp_fs_scroll_pane_g

0x3965,	// (0x000287bb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3965,	// (0x000287bb) list_medium_line_x2_t3_g4_g1

0x39ef,	// (0x00028845) list_medium_line_x2_t3_g4_g2_ParamLimits

0x39ef,	// (0x00028845) list_medium_line_x2_t3_g4_g2

0x3971,	// (0x000287c7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3971,	// (0x000287c7) list_medium_line_x2_t3_g4_g3

0x397d,	// (0x000287d3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x397d,	// (0x000287d3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0003414b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0003414b) list_medium_line_x2_t3_g4_g

0x9cc9,	// (0x0002eb1f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9cc9,	// (0x0002eb1f) list_medium_line_x2_t3_g4_t1

0x9cdf,	// (0x0002eb35) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9cdf,	// (0x0002eb35) list_medium_line_x2_t3_g4_t2

0x39b2,	// (0x00028808) list_medium_line_x2_t3_g4_t3_ParamLimits

0x39b2,	// (0x00028808) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x00034bb7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x00034bb7) list_medium_line_x2_t3_g4_t

0xd48e,	// (0x000322e4) list_medium_line_g2_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_g2_g1

0xd49a,	// (0x000322f0) list_medium_line_g2_g2_ParamLimits

0xd49a,	// (0x000322f0) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00034884) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00034884) list_medium_line_g2_g

0xe72a,	// (0x00033580) list_medium_line_g2_t1_ParamLimits

0xe72a,	// (0x00033580) list_medium_line_g2_t1

0xd48e,	// (0x000322e4) list_medium_line_t3_g2_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_t3_g2_g1

0xd49a,	// (0x000322f0) list_medium_line_t3_g2_g2_ParamLimits

0xd49a,	// (0x000322f0) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00034884) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00034884) list_medium_line_t3_g2_g

0x9cf9,	// (0x0002eb4f) list_medium_line_t3_g2_t1_ParamLimits

0x9cf9,	// (0x0002eb4f) list_medium_line_t3_g2_t1

0x9d13,	// (0x0002eb69) list_medium_line_t3_g2_t2_ParamLimits

0x9d13,	// (0x0002eb69) list_medium_line_t3_g2_t2

0x9d28,	// (0x0002eb7e) list_medium_line_t3_g2_t3_ParamLimits

0x9d28,	// (0x0002eb7e) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00034bbe) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00034bbe) list_medium_line_t3_g2_t

0xe531,	// (0x00033387) list_medium_line_right_icon_g1

0xe73f,	// (0x00033595) list_medium_line_right_icon_t1

0xd48e,	// (0x000322e4) list_medium_line_t2_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_t2_g1

0x9d42,	// (0x0002eb98) list_medium_line_t2_t1_ParamLimits

0x9d42,	// (0x0002eb98) list_medium_line_t2_t1

0x9d5c,	// (0x0002ebb2) list_medium_line_t2_t2_ParamLimits

0x9d5c,	// (0x0002ebb2) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x00034bc5) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x00034bc5) list_medium_line_t2_t

0xd48e,	// (0x000322e4) list_medium_line_t3_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_t3_g1

0x9d71,	// (0x0002ebc7) list_medium_line_t3_t1_ParamLimits

0x9d71,	// (0x0002ebc7) list_medium_line_t3_t1

0x9d88,	// (0x0002ebde) list_medium_line_t3_t2_ParamLimits

0x9d88,	// (0x0002ebde) list_medium_line_t3_t2

0x9d9d,	// (0x0002ebf3) list_medium_line_t3_t3_ParamLimits

0x9d9d,	// (0x0002ebf3) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00034bca) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00034bca) list_medium_line_t3_t

0xd48e,	// (0x000322e4) list_medium_line_g3_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_g3_g1

0xe74d,	// (0x000335a3) list_medium_line_g3_g2_ParamLimits

0xe74d,	// (0x000335a3) list_medium_line_g3_g2

0xd49a,	// (0x000322f0) list_medium_line_g3_g3_ParamLimits

0xd49a,	// (0x000322f0) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x00034bd1) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x00034bd1) list_medium_line_g3_g

0xe759,	// (0x000335af) list_medium_line_g3_t1_ParamLimits

0xe759,	// (0x000335af) list_medium_line_g3_t1

0xd48e,	// (0x000322e4) list_medium_line_t2_g3_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_t2_g3_g1

0xe74d,	// (0x000335a3) list_medium_line_t2_g3_g2_ParamLimits

0xe74d,	// (0x000335a3) list_medium_line_t2_g3_g2

0xd49a,	// (0x000322f0) list_medium_line_t2_g3_g3_ParamLimits

0xd49a,	// (0x000322f0) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x00034bd1) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x00034bd1) list_medium_line_t2_g3_g

0x9daf,	// (0x0002ec05) list_medium_line_t2_g3_t1_ParamLimits

0x9daf,	// (0x0002ec05) list_medium_line_t2_g3_t1

0x9dc9,	// (0x0002ec1f) list_medium_line_t2_g3_t2_ParamLimits

0x9dc9,	// (0x0002ec1f) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x00034bd8) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x00034bd8) list_medium_line_t2_g3_t

0xd48e,	// (0x000322e4) list_medium_line_t3_g3_g1_ParamLimits

0xd48e,	// (0x000322e4) list_medium_line_t3_g3_g1

0xe74d,	// (0x000335a3) list_medium_line_t3_g3_g2_ParamLimits

0xe74d,	// (0x000335a3) list_medium_line_t3_g3_g2

0xd49a,	// (0x000322f0) list_medium_line_t3_g3_g3_ParamLimits

0xd49a,	// (0x000322f0) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x00034bd1) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x00034bd1) list_medium_line_t3_g3_g

0x9dde,	// (0x0002ec34) list_medium_line_t3_g3_t1_ParamLimits

0x9dde,	// (0x0002ec34) list_medium_line_t3_g3_t1

0x9df7,	// (0x0002ec4d) list_medium_line_t3_g3_t2_ParamLimits

0x9df7,	// (0x0002ec4d) list_medium_line_t3_g3_t2

0x9e0d,	// (0x0002ec63) list_medium_line_t3_g3_t3_ParamLimits

0x9e0d,	// (0x0002ec63) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00034bdd) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00034bdd) list_medium_line_t3_g3_t

0xe649,	// (0x0003349f) list_medium_line_right_iconx2_g1

0xe531,	// (0x00033387) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00034be4) list_medium_line_right_iconx2_g

0xe76e,	// (0x000335c4) list_medium_line_right_iconx2_t1

0xe649,	// (0x0003349f) list_medium_line_t2_right_iconx2_g1

0xe531,	// (0x00033387) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00034be4) list_medium_line_t2_right_iconx2_g

0x9e27,	// (0x0002ec7d) list_medium_line_t2_right_iconx2_t1

0x9e37,	// (0x0002ec8d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00034be9) list_medium_line_t2_right_iconx2_t

0xe77c,	// (0x000335d2) list_medium_line_x4_t4_t1

0x9e45,	// (0x0002ec9b) list_medium_line_x4_t4_t2

0x9e55,	// (0x0002ecab) list_medium_line_x4_t4_t3

0x9e65,	// (0x0002ecbb) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00034bee) list_medium_line_x4_t4_t

0x9eb8,	// (0x0002ed0e) tport_appsw_pane_ParamLimits

0x9eb8,	// (0x0002ed0e) tport_appsw_pane

0x9ec9,	// (0x0002ed1f) tport_contact_pane_ParamLimits

0x9ec9,	// (0x0002ed1f) tport_contact_pane

0x9ee2,	// (0x0002ed38) tport_listscroll_pane_ParamLimits

0x9ee2,	// (0x0002ed38) tport_listscroll_pane

0x9efd,	// (0x0002ed53) cell_tport_appsw_pane_ParamLimits

0x9efd,	// (0x0002ed53) cell_tport_appsw_pane

0xd147,	// (0x00031f9d) tport_appsw_pane_g1_ParamLimits

0xd147,	// (0x00031f9d) tport_appsw_pane_g1

0xe78a,	// (0x000335e0) tport_contact_pane_g1

0xdf60,	// (0x00032db6) tport_contact_pane_t1

0xe793,	// (0x000335e9) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00034bf7) tport_contact_pane_t

0xe7a1,	// (0x000335f7) list_tport_pane

0xe7aa,	// (0x00033600) scroll_pane_cp_030

0xe7bb,	// (0x00033611) cell_tport_appsw_pane_g1

0xe7cb,	// (0x00033621) cell_tport_appsw_pane_t1

0x234d,	// (0x000271a3) grid_highlight_pane_cp019

0x9f3d,	// (0x0002ed93) list_tport_double_graphic_pane_ParamLimits

0x9f3d,	// (0x0002ed93) list_tport_double_graphic_pane

0x25c9,	// (0x0002741f) list_highlight_pane_cp023_ParamLimits

0x25c9,	// (0x0002741f) list_highlight_pane_cp023

0x9f4a,	// (0x0002eda0) list_tport_double_graphic_pane_g1_ParamLimits

0x9f4a,	// (0x0002eda0) list_tport_double_graphic_pane_g1

0x9f57,	// (0x0002edad) list_tport_double_graphic_pane_t1_ParamLimits

0x9f57,	// (0x0002edad) list_tport_double_graphic_pane_t1

0x9f6c,	// (0x0002edc2) list_tport_double_graphic_pane_t2_ParamLimits

0x9f6c,	// (0x0002edc2) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00034c03) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00034c03) list_tport_double_graphic_pane_t

0x234d,	// (0x000271a3) main_cale_note_pane

0x203f,	// (0x00026e95) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x203f,	// (0x00026e95) cell_vitu2_function_top_wide_pane_cp01

0x960a,	// (0x0002e460) wait_bar_pane_cp05_ParamLimits

0x234d,	// (0x000271a3) listscroll_cmail_pane

0xe7e1,	// (0x00033637) list_cmail_pane

0x9f88,	// (0x0002edde) list_cmail_body_pane

0xe7f9,	// (0x0003364f) list_single_cmail_header_caption_pane

0x9f9c,	// (0x0002edf2) list_single_cmail_header_detail_pane_ParamLimits

0x9f9c,	// (0x0002edf2) list_single_cmail_header_detail_pane

0x9fc6,	// (0x0002ee1c) list_single_cmail_header_caption_pane_t1

0x9fd6,	// (0x0002ee2c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9fd6,	// (0x0002ee2c) list_single_cmail_header_detail_pane_g1

0xe81b,	// (0x00033671) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe81b,	// (0x00033671) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00034c08) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00034c08) list_single_cmail_header_detail_pane_g

0xe834,	// (0x0003368a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe834,	// (0x0003368a) list_single_cmail_header_detail_pane_t1

0xe86a,	// (0x000336c0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe86a,	// (0x000336c0) list_single_cmail_header_editor_pane_bg

0xe0ef,	// (0x00032f45) list_cmail_body_pane_g1

0xe87c,	// (0x000336d2) list_cmail_body_pane_t1

0xd1c1,	// (0x00032017) list_single_cmail_header_editor_pane_bg_g1

0x3ff7,	// (0x00028e4d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1d1,	// (0x00032027) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1c9,	// (0x0003201f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd466,	// (0x000322bc) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1f1,	// (0x00032047) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1e1,	// (0x00032037) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1e9,	// (0x0003203f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3fd7,	// (0x00028e2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa014,	// (0x0002ee6a) calenote_gesture_pane_ParamLimits

0xa014,	// (0x0002ee6a) calenote_gesture_pane

0xa034,	// (0x0002ee8a) calenote_window_pane_ParamLimits

0xa034,	// (0x0002ee8a) calenote_window_pane

0xe88a,	// (0x000336e0) popup_note_window_cp01

0xa050,	// (0x0002eea6) calenote_swipe_1_pane_ParamLimits

0xa050,	// (0x0002eea6) calenote_swipe_1_pane

0x9a4e,	// (0x0002e8a4) calenote_swipe_2_pane_ParamLimits

0x9a4e,	// (0x0002e8a4) calenote_swipe_2_pane

0xe432,	// (0x00033288) calenote_swipe_1_pane_g1_ParamLimits

0xe432,	// (0x00033288) calenote_swipe_1_pane_g1

0xe43f,	// (0x00033295) calenote_swipe_1_pane_g2_ParamLimits

0xe43f,	// (0x00033295) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00034b3c) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00034b3c) calenote_swipe_1_pane_g

0xe89c,	// (0x000336f2) calenote_swipe_1_pane_t1_ParamLimits

0xe89c,	// (0x000336f2) calenote_swipe_1_pane_t1

0xe432,	// (0x00033288) calenote_swipe_2_pane_g1_ParamLimits

0xe432,	// (0x00033288) calenote_swipe_2_pane_g1

0xe8bb,	// (0x00033711) calenote_swipe_2_pane_g2_ParamLimits

0xe8bb,	// (0x00033711) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00034c14) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00034c14) calenote_swipe_2_pane_g

0xe8c7,	// (0x0003371d) calenote_swipe_2_pane_t1_ParamLimits

0xe8c7,	// (0x0003371d) calenote_swipe_2_pane_t1

0x234d,	// (0x000271a3) main_mup_navstr_pane

0x751c,	// (0x0002c372) main_mup3_pane_t7_ParamLimits

0x751c,	// (0x0002c372) main_mup3_pane_t7

0xcd48,	// (0x00031b9e) main_mp4_pane_g6_ParamLimits

0xcd48,	// (0x00031b9e) main_mp4_pane_g6

0xcf7a,	// (0x00031dd0) main_image3_pane_t4_ParamLimits

0xcf7a,	// (0x00031dd0) main_image3_pane_t4

0xa065,	// (0x0002eebb) popup_navstr_preview_pane_ParamLimits

0xa065,	// (0x0002eebb) popup_navstr_preview_pane

0xa079,	// (0x0002eecf) scroll_navstr_pane_ParamLimits

0xa079,	// (0x0002eecf) scroll_navstr_pane

0x234d,	// (0x000271a3) bg_popup_preview_window_pane_cp04

0xe8ee,	// (0x00033744) popup_navstr_preview_pane_t1

0xa08d,	// (0x0002eee3) scroll_navstr_pane_g1_ParamLimits

0xa08d,	// (0x0002eee3) scroll_navstr_pane_g1

0xa0a1,	// (0x0002eef7) scroll_navstr_pane_t1_ParamLimits

0xa0a1,	// (0x0002eef7) scroll_navstr_pane_t1

0xe893,	// (0x000336e9) bg_button_pane_cp014

0xe893,	// (0x000336e9) bg_button_pane_cp030

0x98ec,	// (0x0002e742) list_double_fisheye_pane_g4_ParamLimits

0x98ec,	// (0x0002e742) list_double_fisheye_pane_g4

0x98f8,	// (0x0002e74e) list_double_fisheye_pane_g5_ParamLimits

0x98f8,	// (0x0002e74e) list_double_fisheye_pane_g5

0xe7e9,	// (0x0003363f) sp_fs_scroll_pane_cp03

0xe571,	// (0x000333c7) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe57d,	// (0x000333d3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00034b59) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe589,	// (0x000333df) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9f7e,	// (0x0002edd4) sp_fs_scroll_pane_cp02

0x31f5,	// (0x0002804b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x31f5,	// (0x0002804b) popup_sp_fs_calendar_preview_list_single_pane

0x234d,	// (0x000271a3) main_cam6_pano_pane

0x25c9,	// (0x0002741f) main_mup3_pane_ParamLimits

0x234d,	// (0x000271a3) main_phacti_pane

0x94dd,	// (0x0002e333) bg_button_pane_cp11

0x94f7,	// (0x0002e34d) main_mobtv_info_pane_g2_ParamLimits

0x94f7,	// (0x0002e34d) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00034ab9) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00034ab9) main_mobtv_info_pane_g

0x96d2,	// (0x0002e528) sc_clock_pane_t5_ParamLimits

0x96d2,	// (0x0002e528) sc_clock_pane_t5

0x9757,	// (0x0002e5ad) main_radioblah_pane_g1_ParamLimits

0xe375,	// (0x000331cb) main_radioblah_pane_t3_ParamLimits

0xe375,	// (0x000331cb) main_radioblah_pane_t3

0xe38d,	// (0x000331e3) main_radioblah_pane_t4_ParamLimits

0xe38d,	// (0x000331e3) main_radioblah_pane_t4

0x977f,	// (0x0002e5d5) main_radioblah_text_pane_ParamLimits

0x977f,	// (0x0002e5d5) main_radioblah_text_pane

0x9791,	// (0x0002e5e7) main_radioblah_info_pane_g1_ParamLimits

0x982a,	// (0x0002e680) main_radioblah_info_pane_t4_ParamLimits

0x982a,	// (0x0002e680) main_radioblah_info_pane_t4

0x25c9,	// (0x0002741f) main_sp_fs_calendar_pane

0xa0b8,	// (0x0002ef0e) main_phacti_pane_g1

0xa0c0,	// (0x0002ef16) phacti_note_pane_ParamLimits

0xa0c0,	// (0x0002ef16) phacti_note_pane

0xe905,	// (0x0003375b) phacti_term_pane_ParamLimits

0xe905,	// (0x0003375b) phacti_term_pane

0xe91a,	// (0x00033770) phacti_note_pane_t1_ParamLimits

0xe91a,	// (0x00033770) phacti_note_pane_t1

0xe931,	// (0x00033787) phacti_term_pane_g1

0xe939,	// (0x0003378f) phacti_term_pane_t1_ParamLimits

0xe939,	// (0x0003378f) phacti_term_pane_t1

0xe963,	// (0x000337b9) popup_sp_fs_calendar_preview_list_single_pane_g1

0x395d,	// (0x000287b3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00034c1e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe96b,	// (0x000337c1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe96b,	// (0x000337c1) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe980,	// (0x000337d6) aid_popup_sp_fs_bg_corner_pane

0xc403,	// (0x00031259) popup_sp_fs_calendar_preview_bg_pane_g1

0x234d,	// (0x000271a3) popup_sp_fs_calendar_preview_bg_pane

0xe988,	// (0x000337de) popup_sp_fs_calendar_preview_list_pane

0x25c9,	// (0x0002741f) bg_main_sp_fs_cale_pane_ParamLimits

0x25c9,	// (0x0002741f) bg_main_sp_fs_cale_pane

0xe999,	// (0x000337ef) listscroll_cale_mrui_pane_ParamLimits

0xe999,	// (0x000337ef) listscroll_cale_mrui_pane

0xe9ad,	// (0x00033803) listscroll_sp_fs_schedule_track_pane

0xe9b6,	// (0x0003380c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe9b6,	// (0x0003380c) main_sp_fs_ctrlbar_pane_cp01

0xe9c7,	// (0x0003381d) main_sp_fs_ribbon_pane

0xe9cf,	// (0x00033825) popup_sp_fs_cale_preview_window

0xa117,	// (0x0002ef6d) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa117,	// (0x0002ef6d) list_single_sp_fs_schedule_track_pane

0x25c9,	// (0x0002741f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x25c9,	// (0x0002741f) bg_sp_fs_highlight_list_pane_cp03

0xa12a,	// (0x0002ef80) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa12a,	// (0x0002ef80) list_single_sp_fs_schedule_track_pane_g1

0xa136,	// (0x0002ef8c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa136,	// (0x0002ef8c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00034c23) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00034c23) list_single_sp_fs_schedule_track_pane_g

0xa142,	// (0x0002ef98) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa142,	// (0x0002ef98) list_single_sp_fs_schedule_track_pane_t1

0xa15c,	// (0x0002efb2) sp_fs_schedule_track_pane_ParamLimits

0xa15c,	// (0x0002efb2) sp_fs_schedule_track_pane

0xe9e1,	// (0x00033837) sp_fs_schedule_track_pane_g1

0xe9e9,	// (0x0003383f) sp_fs_schedule_track_pane_g2

0xe9f1,	// (0x00033847) sp_fs_schedule_track_pane_g3

0xe9f9,	// (0x0003384f) sp_fs_schedule_track_pane_g4

0xea01,	// (0x00033857) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00034c28) sp_fs_schedule_track_pane_g

0xd1c1,	// (0x00032017) bg_sp_fs_schedule_viewer_highlight_g1

0x3ff7,	// (0x00028e4d) bg_sp_fs_schedule_viewer_highlight_g2

0xd1c9,	// (0x0003201f) bg_sp_fs_schedule_viewer_highlight_g3

0xd1d1,	// (0x00032027) bg_sp_fs_schedule_viewer_highlight_g4

0xd466,	// (0x000322bc) bg_sp_fs_schedule_viewer_highlight_g5

0xd1e1,	// (0x00032037) bg_sp_fs_schedule_viewer_highlight_g6

0xd1e9,	// (0x0003203f) bg_sp_fs_schedule_viewer_highlight_g7

0xd1f1,	// (0x00032047) bg_sp_fs_schedule_viewer_highlight_g8

0x3fd7,	// (0x00028e2d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00034c33) bg_sp_fs_schedule_viewer_highlight_g

0x234d,	// (0x000271a3) bg_main_sp_fs_ribbon_pane

0xa16d,	// (0x0002efc3) main_sp_fs_ribbon_pane_g1

0xea09,	// (0x0003385f) main_sp_fs_ribbon_pane_t1

0xa176,	// (0x0002efcc) main_sp_fs_ribbon_pane_t2

0xea18,	// (0x0003386e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00034c46) main_sp_fs_ribbon_pane_t

0xea27,	// (0x0003387d) main_sp_fs_ribbon_scheduler_pane

0xea2f,	// (0x00033885) bg_main_sp_fs_ribbon_pane_g1

0xea38,	// (0x0003388e) bg_main_sp_fs_ribbon_pane_g2

0xea41,	// (0x00033897) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00034c4d) bg_main_sp_fs_ribbon_pane_g

0xea49,	// (0x0003389f) main_sp_fs_ribbon_scheduler_pane_g1

0xea52,	// (0x000338a8) main_sp_fs_ribbon_scheduler_pane_g2

0xea5b,	// (0x000338b1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00034c54) main_sp_fs_ribbon_scheduler_pane_g

0xea64,	// (0x000338ba) list_cale_mrui_pane

0xa185,	// (0x0002efdb) sp_fs_scroll_pane_cp07_ParamLimits

0xa185,	// (0x0002efdb) sp_fs_scroll_pane_cp07

0xa19b,	// (0x0002eff1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa19b,	// (0x0002eff1) bg_sp_fs_schedule_viewer_highlight

0xea6d,	// (0x000338c3) list_single_sp_fs_schedule_track_pane_cp01

0xea75,	// (0x000338cb) list_sp_fs_schedule_track_pane

0xea7d,	// (0x000338d3) sp_fs_scroll_pane_cp06_ParamLimits

0xea7d,	// (0x000338d3) sp_fs_scroll_pane_cp06

0xc403,	// (0x00031259) bgmain_sp_fs_calendar_pane_g1

0xa1ab,	// (0x0002f001) list_single_cale_mrui_pane_ParamLimits

0xa1ab,	// (0x0002f001) list_single_cale_mrui_pane

0xea8f,	// (0x000338e5) list_single_cale_mrui_row_pane_ParamLimits

0xea8f,	// (0x000338e5) list_single_cale_mrui_row_pane

0xea9c,	// (0x000338f2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xea9c,	// (0x000338f2) list_single_cale_mrui_row_pane_g1

0xead4,	// (0x0003392a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xead4,	// (0x0003392a) list_single_cale_mrui_row_pane_t1

0xa1cc,	// (0x0002f022) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa1cc,	// (0x0002f022) list_single_cale_mrui_row_pane_t2

0xeae6,	// (0x0003393c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeae6,	// (0x0003393c) list_single_cale_mrui_row_pane_t3

0xeb15,	// (0x0003396b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb15,	// (0x0003396b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0a,	// (0x00034c60) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0a,	// (0x00034c60) list_single_cale_mrui_row_pane_t

0xa234,	// (0x0002f08a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa234,	// (0x0002f08a) list_single_cmail_header_editor_pane_bg_cp01

0xa25a,	// (0x0002f0b0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa25a,	// (0x0002f0b0) list_single_cmail_header_editor_pane_bg_cp02

0xa27a,	// (0x0002f0d0) main_radioblah_text_pane_t1_ParamLimits

0xa27a,	// (0x0002f0d0) main_radioblah_text_pane_t1

0xeb44,	// (0x0003399a) cam6_indi_pane_cp01

0xeb4c,	// (0x000339a2) cam6_mode_pane_cp01

0xeb54,	// (0x000339aa) cam6_pano_pane

0xeb5d,	// (0x000339b3) cam6_zoom_pane_cp01

0xeb65,	// (0x000339bb) cam6_pano_image_pane

0xeb70,	// (0x000339c6) cam6_pano_pane_g1

0xe0ef,	// (0x00032f45) cam6_pano_pane_g2

0xeb79,	// (0x000339cf) cam6_pano_pane_g3

0xeb82,	// (0x000339d8) cam6_pano_pane_g4

0xc9ab,	// (0x00031801) cam6_pano_pane_g5

0xeb8b,	// (0x000339e1) cam6_pano_pane_g6

0xeb95,	// (0x000339eb) cam6_pano_pane_g7

0xeb9d,	// (0x000339f3) cam6_pano_pane_g8

0xeba6,	// (0x000339fc) cam6_pano_pane_g9

0x0008,

0xfe13,	// (0x00034c69) cam6_pano_pane_g

0x234d,	// (0x000271a3) main_browser_tag_pane

0xe8e6,	// (0x0003373c) grid_navstr_albumart_pane

0xebb1,	// (0x00033a07) cell_navstr_albumart_pane_ParamLimits

0xebb1,	// (0x00033a07) cell_navstr_albumart_pane

0xebd4,	// (0x00033a2a) cell_navstr_albumart_pane_g1

0xbd1a,	// (0x00030b70) cell_navstr_albumart_pane_g2

0xbd2a,	// (0x00030b80) cell_navstr_albumart_pane_g3

0xbd22,	// (0x00030b78) cell_navstr_albumart_pane_g4

0x0003,

0xfe26,	// (0x00034c7c) cell_navstr_albumart_pane_g

0xa294,	// (0x0002f0ea) bt_list_pane_ParamLimits

0xa294,	// (0x0002f0ea) bt_list_pane

0xa2a8,	// (0x0002f0fe) bt_list_pane_t1

0xa2b7,	// (0x0002f10d) bt_list_pane_t2

0x0001,

0xfe2f,	// (0x00034c85) bt_list_pane_t

0x234d,	// (0x000271a3) main_cale_prevew_pane

0xa2c6,	// (0x0002f11c) popup_cale_preview_window_ParamLimits

0xa2c6,	// (0x0002f11c) popup_cale_preview_window

0x25c9,	// (0x0002741f) bg_popup_preview_window_pane_cp05_ParamLimits

0x25c9,	// (0x0002741f) bg_popup_preview_window_pane_cp05

0xebdc,	// (0x00033a32) list_cale_preview_pane_ParamLimits

0xebdc,	// (0x00033a32) list_cale_preview_pane

0xa2df,	// (0x0002f135) list_double_cale_preview_pane_ParamLimits

0xa2df,	// (0x0002f135) list_double_cale_preview_pane

0xa2f1,	// (0x0002f147) list_single_cale_preview_pane_ParamLimits

0xa2f1,	// (0x0002f147) list_single_cale_preview_pane

0xa307,	// (0x0002f15d) list_single_cale_preview_pane_g1

0xa30f,	// (0x0002f165) list_single_cale_preview_pane_t1_ParamLimits

0xa30f,	// (0x0002f165) list_single_cale_preview_pane_t1

0xa324,	// (0x0002f17a) list_double_cale_preview_pane_g1

0xa32c,	// (0x0002f182) list_double_cale_preview_pane_t1_ParamLimits

0xa32c,	// (0x0002f182) list_double_cale_preview_pane_t1

0xa341,	// (0x0002f197) list_double_cale_preview_pane_t2_ParamLimits

0xa341,	// (0x0002f197) list_double_cale_preview_pane_t2

0x0001,

0xfe34,	// (0x00034c8a) list_double_cale_preview_pane_t_ParamLimits

0xfe34,	// (0x00034c8a) list_double_cale_preview_pane_t

0x234d,	// (0x000271a3) main_ezdial_pane

0x25c9,	// (0x0002741f) main_sp_fs_email_pane_ParamLimits

0x9a86,	// (0x0002e8dc) cmail_ddmenu_btn01_pane_ParamLimits

0x9a86,	// (0x0002e8dc) cmail_ddmenu_btn01_pane

0x9a99,	// (0x0002e8ef) cmail_ddmenu_btn02_pane_ParamLimits

0x9a99,	// (0x0002e8ef) cmail_ddmenu_btn02_pane

0x9abc,	// (0x0002e912) cmail_ddmenu_btn03_pane_ParamLimits

0x9abc,	// (0x0002e912) cmail_ddmenu_btn03_pane

0x9ae0,	// (0x0002e936) main_sp_fs_ctrlbar_pane_ParamLimits

0x9b04,	// (0x0002e95a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9f88,	// (0x0002edde) list_cmail_body_pane_ParamLimits

0xe812,	// (0x00033668) bg_button_pane_cp12

0xe827,	// (0x0003367d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe827,	// (0x0003367d) list_single_cmail_header_detail_pane_g3

0x9fee,	// (0x0002ee44) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9fee,	// (0x0002ee44) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00034c0f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00034c0f) list_single_cmail_header_detail_pane_t

0xe94e,	// (0x000337a4) phacti_term_pane_t2_ParamLimits

0xe94e,	// (0x000337a4) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00034c19) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00034c19) phacti_term_pane_t

0xebe8,	// (0x00033a3e) aid_size_list_single_double

0xa359,	// (0x0002f1af) popup_ezdial_listscroll_window

0xa375,	// (0x0002f1cb) popup_number_entry_window_cp01

0x541e,	// (0x0002a274) bg_popup_call_pane_cp09

0xebf4,	// (0x00033a4a) ezdial_list_pane

0xebfc,	// (0x00033a52) scroll_pane_cp23

0xbefd,	// (0x00030d53) bg_button_pane_cp028_ParamLimits

0xbefd,	// (0x00030d53) bg_button_pane_cp028

0xa383,	// (0x0002f1d9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa383,	// (0x0002f1d9) cmail_ddmenu_btn01_pane_g1

0xa38f,	// (0x0002f1e5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa38f,	// (0x0002f1e5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe39,	// (0x00034c8f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe39,	// (0x00034c8f) cmail_ddmenu_btn01_pane_g

0xec04,	// (0x00033a5a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xec04,	// (0x00033a5a) cmail_ddmenu_btn01_pane_t1

0xbefd,	// (0x00030d53) bg_button_pane_cp029_ParamLimits

0xbefd,	// (0x00030d53) bg_button_pane_cp029

0xa39b,	// (0x0002f1f1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa39b,	// (0x0002f1f1) cmail_ddmenu_btn02_pane_g1

0xa3b3,	// (0x0002f209) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa3b3,	// (0x0002f209) cmail_ddmenu_btn02_pane_t1

0x25c9,	// (0x0002741f) bg_button_pane_cp031_ParamLimits

0x25c9,	// (0x0002741f) bg_button_pane_cp031

0xa39b,	// (0x0002f1f1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa39b,	// (0x0002f1f1) cmail_ddmenu_btn03_pane_g1

0xa3b3,	// (0x0002f209) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa3b3,	// (0x0002f209) cmail_ddmenu_btn03_pane_t1

0x7ea6,	// (0x0002ccfc) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ec0,	// (0x0002cd16) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ec0,	// (0x0002cd16) cell_dialer2_keypad_pane_t1_copy1

0x9379,	// (0x0002e1cf) ncimui_group_button_pane

0x25c9,	// (0x0002741f) main_sp_fs_calendar_pane_ParamLimits

0xe7f9,	// (0x0003364f) list_single_cmail_header_caption_pane_ParamLimits

0xe990,	// (0x000337e6) aid_recal_txt_sm_pane

0x234d,	// (0x000271a3) mian_recal_day_pane

0xe9cf,	// (0x00033825) popup_sp_fs_cale_preview_window_ParamLimits

0x234d,	// (0x000271a3) list_recal_day_pane

0xec3b,	// (0x00033a91) list_single_recal_day_pane_ParamLimits

0xec3b,	// (0x00033a91) list_single_recal_day_pane

0xec4d,	// (0x00033aa3) list_single_recal_day_pane_g1_ParamLimits

0xec4d,	// (0x00033aa3) list_single_recal_day_pane_g1

0xec59,	// (0x00033aaf) list_single_recal_day_pane_g2_ParamLimits

0xec59,	// (0x00033aaf) list_single_recal_day_pane_g2

0xec68,	// (0x00033abe) list_single_recal_day_pane_g3_ParamLimits

0xec68,	// (0x00033abe) list_single_recal_day_pane_g3

0xa3d7,	// (0x0002f22d) list_single_recal_day_pane_g4_ParamLimits

0xa3d7,	// (0x0002f22d) list_single_recal_day_pane_g4

0xec74,	// (0x00033aca) list_single_recal_day_pane_g5_ParamLimits

0xec74,	// (0x00033aca) list_single_recal_day_pane_g5

0xec83,	// (0x00033ad9) list_single_recal_day_pane_g6_ParamLimits

0xec83,	// (0x00033ad9) list_single_recal_day_pane_g6

0x0005,

0xfe48,	// (0x00034c9e) list_single_recal_day_pane_g_ParamLimits

0xfe48,	// (0x00034c9e) list_single_recal_day_pane_g

0xec8f,	// (0x00033ae5) list_single_recal_day_pane_t1

0xec9d,	// (0x00033af3) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00034cab) list_single_recal_day_pane_t

0xa3ea,	// (0x0002f240) ncimui_query_button_pane_ParamLimits

0xa3ea,	// (0x0002f240) ncimui_query_button_pane

0xa3fa,	// (0x0002f250) ncimui_query_button_pane_t1_ParamLimits

0xa3fa,	// (0x0002f250) ncimui_query_button_pane_t1

0xecab,	// (0x00033b01) ncimui_query_button_pane_t2_ParamLimits

0xecab,	// (0x00033b01) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x00034cb0) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x00034cb0) ncimui_query_button_pane_t

0xa40d,	// (0x0002f263) query_button_pane_ParamLimits

0xa40d,	// (0x0002f263) query_button_pane

0x234d,	// (0x000271a3) bg_button_pane_cp0028

0xecbe,	// (0x00033b14) query_button_pane_t1

0x6635,	// (0x0002b48b) main_tport_pane_ParamLimits

0x9e75,	// (0x0002eccb) bg_popup_window_pane_cp01_ParamLimits

0x9e75,	// (0x0002eccb) bg_popup_window_pane_cp01

0x9e8f,	// (0x0002ece5) heading_pane_cp08_ParamLimits

0x9e8f,	// (0x0002ece5) heading_pane_cp08

0x9ea3,	// (0x0002ecf9) heading_pane_cp07_ParamLimits

0x9ea3,	// (0x0002ecf9) heading_pane_cp07

0xe7bb,	// (0x00033611) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00034bfc) cell_tport_appsw_pane_g

0x59af,	// (0x0002a805) input_candi_list_open_g1

0x49de,	// (0x00029834) list_cale_time_pane_g6_ParamLimits

0x49de,	// (0x00029834) list_cale_time_pane_g6

0x6f2b,	// (0x0002bd81) aid_size_touch_calib_1_ParamLimits

0x6f2b,	// (0x0002bd81) aid_size_touch_calib_1

0x6f37,	// (0x0002bd8d) aid_size_touch_calib_2_ParamLimits

0x6f37,	// (0x0002bd8d) aid_size_touch_calib_2

0x6f4d,	// (0x0002bda3) aid_size_touch_calib_3_ParamLimits

0x6f4d,	// (0x0002bda3) aid_size_touch_calib_3

0x6f6b,	// (0x0002bdc1) aid_size_touch_calib_4_ParamLimits

0x6f6b,	// (0x0002bdc1) aid_size_touch_calib_4

0x6f81,	// (0x0002bdd7) main_touch_calib_button_group_pane_ParamLimits

0x6f81,	// (0x0002bdd7) main_touch_calib_button_group_pane

0x6f98,	// (0x0002bdee) main_touch_calib_pane_g1_ParamLimits

0x6fa4,	// (0x0002bdfa) main_touch_calib_pane_g2_ParamLimits

0x6fb0,	// (0x0002be06) main_touch_calib_pane_g3_ParamLimits

0x6fbc,	// (0x0002be12) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x000345da) main_touch_calib_pane_g_ParamLimits

0x6fc8,	// (0x0002be1e) main_touch_calib_pane_t1_ParamLimits

0x6fe2,	// (0x0002be38) main_touch_calib_pane_t2_ParamLimits

0x6ffc,	// (0x0002be52) main_touch_calib_pane_t3_ParamLimits

0x7010,	// (0x0002be66) main_touch_calib_pane_t4_ParamLimits

0x7024,	// (0x0002be7a) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x000345e3) main_touch_calib_pane_t_ParamLimits

0xc781,	// (0x000315d7) list_single_fp_cale_pane_g3_ParamLimits

0xc781,	// (0x000315d7) list_single_fp_cale_pane_g3

0xd1a9,	// (0x00031fff) bg_button_pane_cp012_ParamLimits

0xd1a9,	// (0x00031fff) bg_vkb2_func_pane_cp03_ParamLimits

0x223d,	// (0x00027093) cell_vitu2_function_top_pane_g1_ParamLimits

0xd1a9,	// (0x00031fff) bg_vkb2_func_pane_cp04_ParamLimits

0x932d,	// (0x0002e183) main_ncimui_button_group_pane_ParamLimits

0x932d,	// (0x0002e183) main_ncimui_button_group_pane

0x9367,	// (0x0002e1bd) main_ncimui_pane_t3_ParamLimits

0x9367,	// (0x0002e1bd) main_ncimui_pane_t3

0xe8fc,	// (0x00033752) phacti_button_group_pane

0xebe8,	// (0x00033a3e) aid_size_list_single_double_ParamLimits

0xa359,	// (0x0002f1af) popup_ezdial_listscroll_window_ParamLimits

0xa375,	// (0x0002f1cb) popup_number_entry_window_cp01_ParamLimits

0xa420,	// (0x0002f276) phacti_button_pane_ParamLimits

0xa420,	// (0x0002f276) phacti_button_pane

0x234d,	// (0x000271a3) bg_button_pane_cp14

0xeccc,	// (0x00033b22) phacti_button_pane_t1

0xa431,	// (0x0002f287) main_touch_calib_button_pane_ParamLimits

0xa431,	// (0x0002f287) main_touch_calib_button_pane

0x2fcd,	// (0x00027e23) bg_button_pane_cp18_ParamLimits

0x2fcd,	// (0x00027e23) bg_button_pane_cp18

0xecda,	// (0x00033b30) main_touch_calib_button_pane_t1_ParamLimits

0xecda,	// (0x00033b30) main_touch_calib_button_pane_t1

0xecf0,	// (0x00033b46) main_touch_calib_button_pane_t2_ParamLimits

0xecf0,	// (0x00033b46) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x00034cb5) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x00034cb5) main_touch_calib_button_pane_t

0x234d,	// (0x000271a3) cell_ncimui_button_pane

0x234d,	// (0x000271a3) bg_button_pane_cp032

0xed0e,	// (0x00033b64) cell_ncimui_button_pane_t1

0xcf5a,	// (0x00031db0) image3_infobar_pane_ParamLimits

0xcf5a,	// (0x00031db0) image3_infobar_pane

0x96fe,	// (0x0002e554) fs_bigclock_status_pane_ParamLimits

0x96fe,	// (0x0002e554) fs_bigclock_status_pane

0x970b,	// (0x0002e561) main_fs_bigclock_clock_pane_ParamLimits

0x970b,	// (0x0002e561) main_fs_bigclock_clock_pane

0x971e,	// (0x0002e574) main_fs_bigclock_indi_pane_ParamLimits

0x971e,	// (0x0002e574) main_fs_bigclock_indi_pane

0x9736,	// (0x0002e58c) main_fs_bigclock_swipe_pane_ParamLimits

0x9736,	// (0x0002e58c) main_fs_bigclock_swipe_pane

0x234d,	// (0x000271a3) main_fs_clock_dumped_data

0xe1fc,	// (0x00033052) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1fc,	// (0x00033052) list_single_fs_bigclock_indicator_pane_g1

0xe218,	// (0x0003306e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe218,	// (0x0003306e) list_single_fs_bigclock_indicator_pane_g2

0xe232,	// (0x00033088) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe232,	// (0x00033088) list_single_fs_bigclock_indicator_pane_g3

0xe24c,	// (0x000330a2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe24c,	// (0x000330a2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00034aed) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00034aed) list_single_fs_bigclock_indicator_pane_g

0xe272,	// (0x000330c8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe272,	// (0x000330c8) list_single_fs_bigclock_indicator_pane_t1

0xe29a,	// (0x000330f0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe29a,	// (0x000330f0) list_single_fs_bigclock_indicator_pane_t2

0xe2c2,	// (0x00033118) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe2c2,	// (0x00033118) list_single_fs_bigclock_indicator_pane_t3

0xe2ea,	// (0x00033140) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2ea,	// (0x00033140) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00034af8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00034af8) list_single_fs_bigclock_indicator_pane_t

0xed1c,	// (0x00033b72) image3_infobar_fav_pane_ParamLimits

0xed1c,	// (0x00033b72) image3_infobar_fav_pane

0xed2c,	// (0x00033b82) image3_infobar_loc_pane_ParamLimits

0xed2c,	// (0x00033b82) image3_infobar_loc_pane

0xed40,	// (0x00033b96) image3_infobar_time_pane_ParamLimits

0xed40,	// (0x00033b96) image3_infobar_time_pane

0xc403,	// (0x00031259) image3_infobar_time_pane_g1

0xed50,	// (0x00033ba6) image3_infobar_time_pane_t1

0xc403,	// (0x00031259) image3_infobar_loc_pane_g1

0xed5e,	// (0x00033bb4) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x00034cba) image3_infobar_loc_pane_g

0xed66,	// (0x00033bbc) image3_infobar_loc_pane_t1

0xc403,	// (0x00031259) image3_infobar_fav_pane_g1

0xed74,	// (0x00033bca) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x00034cbf) image3_infobar_fav_pane_g

0xed7c,	// (0x00033bd2) fs_bigclock_status_battery_pane

0xed85,	// (0x00033bdb) fs_bigclock_status_signal_pane

0xed8e,	// (0x00033be4) fs_bigclock_status_title_pane

0xed97,	// (0x00033bed) fs_bigclock_status_signal_pane_g1

0xeda0,	// (0x00033bf6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x00034cc4) fs_bigclock_status_signal_pane_g

0xeda8,	// (0x00033bfe) fs_bigclock_status_battery_pane_g1

0xedb1,	// (0x00033c07) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x00034cc9) fs_bigclock_status_battery_pane_g

0xedb9,	// (0x00033c0f) fs_bigclock_status_title_pane_t1

0xc403,	// (0x00031259) main_fs_bigclock_clock_pane_g1

0xedc7,	// (0x00033c1d) main_fs_bigclock_clock_pane_g2

0xedc7,	// (0x00033c1d) main_fs_bigclock_clock_pane_g3

0xedc7,	// (0x00033c1d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x00034cce) main_fs_bigclock_clock_pane_g

0xedcf,	// (0x00033c25) main_fs_bigclock_clock_pane_t1

0xeddd,	// (0x00033c33) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x00034cd7) main_fs_bigclock_clock_pane_t

0xedec,	// (0x00033c42) list_single_fs_bigclock_indicator_pane_ParamLimits

0xedec,	// (0x00033c42) list_single_fs_bigclock_indicator_pane

0xa446,	// (0x0002f29c) list_single_fs_bigclock_pane_ParamLimits

0xa446,	// (0x0002f29c) list_single_fs_bigclock_pane

0xee06,	// (0x00033c5c) main_fs_bigclock_indicator_pane_t1

0xee15,	// (0x00033c6b) list_single_fs_bigclock_pane_g1

0xee1d,	// (0x00033c73) list_single_fs_bigclock_pane_t1

0xc403,	// (0x00031259) main_fs_bigclock_swipe_pane_g1

0xee5b,	// (0x00033cb1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x00034ce8) main_fs_bigclock_swipe_pane_g

0xee63,	// (0x00033cb9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xee63,	// (0x00033cb9) main_fs_bigclock_swipe_pane_t1

0x4d99,	// (0x00029bef) call_type_pane_ParamLimits

0x234d,	// (0x000271a3) main_btmg_pane

0xeac8,	// (0x0003391e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeac8,	// (0x0003391e) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe05,	// (0x00034c5b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00034c5b) list_single_cale_mrui_row_pane_g

0xec22,	// (0x00033a78) list_recal_vselct_arw_lo_pane

0xec2a,	// (0x00033a80) list_recal_vselct_arw_up_pane

0xec32,	// (0x00033a88) list_recal_vselct_pane

0xee80,	// (0x00033cd6) btmg_button_pane

0xa4ab,	// (0x0002f301) main_btmg_pane_g1

0x234d,	// (0x000271a3) bg_button_pane_cp044

0xee8a,	// (0x00033ce0) btmg_button_pane_t1

0xbef5,	// (0x00030d4b) aid_listscroll_gen

0x25c9,	// (0x0002741f) main_cntbar_detail_pane

0xe7d9,	// (0x0003362f) list_cmail_folder_pane

0xe7e9,	// (0x0003363f) sp_fs_scroll_pane_cp03_ParamLimits

0xe7f9,	// (0x0003364f) list_single_fs_dyc_pane_cp01_ParamLimits

0xe7f9,	// (0x0003364f) list_single_fs_dyc_pane_cp01

0xee98,	// (0x00033cee) aid_size_cmail_indent

0xeea1,	// (0x00033cf7) list_single_dyc_row_pane_cp01

0xa4e1,	// (0x0002f337) cntbar_detail_list_pane_ParamLimits

0xa4e1,	// (0x0002f337) cntbar_detail_list_pane

0xa52d,	// (0x0002f383) main_cntbar_detail_cont_pane_ParamLimits

0xa52d,	// (0x0002f383) main_cntbar_detail_cont_pane

0x4bb0,	// (0x00029a06) scroll_pane_cp032_ParamLimits

0x4bb0,	// (0x00029a06) scroll_pane_cp032

0xa541,	// (0x0002f397) cntbar_detail_list_event_pane_ParamLimits

0xa541,	// (0x0002f397) cntbar_detail_list_event_pane

0xa4f1,	// (0x0002f347) cntbar_detail_list_shct_pane

0x404d,	// (0x00028ea3) aid_list_gen

0xeeaa,	// (0x00033d00) aid_scroll

0xeeb3,	// (0x00033d09) aid_size_touch_scroll_bar

0xa551,	// (0x0002f3a7) aid_list_double

0xeebc,	// (0x00033d12) aid_list_single

0xa551,	// (0x0002f3a7) aid_list_single_lg

0xeec5,	// (0x00033d1b) aid_list_z_g_a_sm

0xeecd,	// (0x00033d23) aid_list_z_g_d

0xeed5,	// (0x00033d2b) aid_txt_z_prm

0xa55a,	// (0x0002f3b0) aid_txt_z_prm_cp01

0xa568,	// (0x0002f3be) aid_txt_z_sec

0xa576,	// (0x0002f3cc) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa576,	// (0x0002f3cc) main_cntbar_detail_cont_pane_g1

0xa58a,	// (0x0002f3e0) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa58a,	// (0x0002f3e0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x00034ced) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x00034ced) main_cntbar_detail_cont_pane_g

0xeee3,	// (0x00033d39) main_cntbar_detail_cont_pane_t1

0xeef1,	// (0x00033d47) main_cntbar_detail_cont_pane_t2

0xeeff,	// (0x00033d55) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x00034cf2) main_cntbar_detail_cont_pane_t

0xa59a,	// (0x0002f3f0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa59a,	// (0x0002f3f0) cell_cntbar_detail_list_shct_pane

0xef0d,	// (0x00033d63) cntbar_detail_list_shct_pane_g1

0xef16,	// (0x00033d6c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00034cf9) cntbar_detail_list_shct_pane_g

0xa5ae,	// (0x0002f404) cntbar_detail_list_event_pane_g1_ParamLimits

0xa5ae,	// (0x0002f404) cntbar_detail_list_event_pane_g1

0xa5ba,	// (0x0002f410) cntbar_detail_list_event_pane_g2_ParamLimits

0xa5ba,	// (0x0002f410) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00034cfe) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00034cfe) cntbar_detail_list_event_pane_g

0xa626,	// (0x0002f47c) cntbar_detail_list_event_pane_t1_ParamLimits

0xa626,	// (0x0002f47c) cntbar_detail_list_event_pane_t1

0xa63b,	// (0x0002f491) cntbar_detail_list_event_pane_t2_ParamLimits

0xa63b,	// (0x0002f491) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x00034d0b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x00034d0b) cntbar_detail_list_event_pane_t

0xc403,	// (0x00031259) cell_cntbar_detail_list_shct_pane_g1

0x53a0,	// (0x0002a1f6) navi_pane_mv_g3

0x25c9,	// (0x0002741f) main_cntbar_detail_pane_ParamLimits

0x234d,	// (0x000271a3) main_notif_wgt_pane

0xcce2,	// (0x00031b38) aid_tch_main_mp4_pane_g4

0xcee4,	// (0x00031d3a) popup_slider_window_cp02

0xec19,	// (0x00033a6f) list_recal_day_event_pane

0xa4b5,	// (0x0002f30b) cntbar_detail_btn_pane_ParamLimits

0xa4b5,	// (0x0002f30b) cntbar_detail_btn_pane

0xa4cb,	// (0x0002f321) cntbar_detail_btn_pane_cp01_ParamLimits

0xa4cb,	// (0x0002f321) cntbar_detail_btn_pane_cp01

0xa4f1,	// (0x0002f347) cntbar_detail_list_shct_pane_ParamLimits

0xa501,	// (0x0002f357) cntbar_detail_pane_g1_ParamLimits

0xa501,	// (0x0002f357) cntbar_detail_pane_g1

0xa511,	// (0x0002f367) cntbar_detail_pane_t1_ParamLimits

0xa511,	// (0x0002f367) cntbar_detail_pane_t1

0xa5c6,	// (0x0002f41c) cntbar_detail_list_event_pane_g3_ParamLimits

0xa5c6,	// (0x0002f41c) cntbar_detail_list_event_pane_g3

0xa5de,	// (0x0002f434) cntbar_detail_list_event_pane_g4_ParamLimits

0xa5de,	// (0x0002f434) cntbar_detail_list_event_pane_g4

0xa5f6,	// (0x0002f44c) cntbar_detail_list_event_pane_g5_ParamLimits

0xa5f6,	// (0x0002f44c) cntbar_detail_list_event_pane_g5

0xa60e,	// (0x0002f464) cntbar_detail_list_event_pane_g6_ParamLimits

0xa60e,	// (0x0002f464) cntbar_detail_list_event_pane_g6

0xa650,	// (0x0002f4a6) cntbar_detail_list_event_pane_t3_ParamLimits

0xa650,	// (0x0002f4a6) cntbar_detail_list_event_pane_t3

0xa662,	// (0x0002f4b8) popup_notif_wgt_window_ParamLimits

0xa662,	// (0x0002f4b8) popup_notif_wgt_window

0xa67b,	// (0x0002f4d1) popup_submenu_window_cp01_ParamLimits

0xa67b,	// (0x0002f4d1) popup_submenu_window_cp01

0x541e,	// (0x0002a274) bg_popup_window_pane_cp10

0xef1f,	// (0x00033d75) listscroll_notif_wgt_pane

0xef29,	// (0x00033d7f) list_notif_wgt_window

0xef32,	// (0x00033d88) scroll_pane_cp033

0xef3b,	// (0x00033d91) list_notif_wgt_row_pane_ParamLimits

0xef3b,	// (0x00033d91) list_notif_wgt_row_pane

0xef4d,	// (0x00033da3) aid_size_list_notif_wgt_del

0xef56,	// (0x00033dac) list_notif_wgt_row_pane_g1

0xef5e,	// (0x00033db4) list_notif_wgt_row_pane_g2

0xef66,	// (0x00033dbc) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00034d12) list_notif_wgt_row_pane_g

0xef6f,	// (0x00033dc5) list_notif_wgt_row_pane_t1

0xef7d,	// (0x00033dd3) list_notif_wgt_row_pane_t2

0xef8b,	// (0x00033de1) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00034d19) list_notif_wgt_row_pane_t

0xd4c0,	// (0x00032316) list_recal_day_event_pane_g1

0xef99,	// (0x00033def) list_recal_day_event_pane_t1

0x234d,	// (0x000271a3) bg_button_pane_cp045

0xefa8,	// (0x00033dfe) cntbar_detail_btn_pane_t1

0xbefd,	// (0x00030d53) main_callh_pane_ParamLimits

0xbefd,	// (0x00030d53) main_callh_pane

0x234d,	// (0x000271a3) main_coverflow0_pane

0x234d,	// (0x000271a3) main_wgtman_pane

0x9744,	// (0x0002e59a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9744,	// (0x0002e59a) main_fs_bigclock_unlock_btn_pane

0xe7b3,	// (0x00033609) bg_button_pane_cp16

0xe7c3,	// (0x00033619) cell_tport_appsw_pane_g3

0xa68d,	// (0x0002f4e3) cf0_flow_pane_ParamLimits

0xa68d,	// (0x0002f4e3) cf0_flow_pane

0xefb6,	// (0x00033e0c) listscroll_cf0_pane

0xefbf,	// (0x00033e15) main_cf0_pane_g1

0xa6a2,	// (0x0002f4f8) main_cf0_pane_t1_ParamLimits

0xa6a2,	// (0x0002f4f8) main_cf0_pane_t1

0xa6ba,	// (0x0002f510) main_cf0_pane_t2_ParamLimits

0xa6ba,	// (0x0002f510) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x00034d20) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x00034d20) main_cf0_pane_t

0xefc9,	// (0x00033e1f) scroll_pane_cp11

0xa6d2,	// (0x0002f528) cf0_flow_pane_g1

0xa6da,	// (0x0002f530) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x00034d25) cf0_flow_pane_g

0xa6e2,	// (0x0002f538) cf0_flow_pane_t1

0x234d,	// (0x000271a3) main_call6_pane

0x234d,	// (0x000271a3) main_calllock_pane

0xa6f0,	// (0x0002f546) call6_btn_grp_pane_ParamLimits

0xa6f0,	// (0x0002f546) call6_btn_grp_pane

0xa70a,	// (0x0002f560) call6_pane_g1_ParamLimits

0xa70a,	// (0x0002f560) call6_pane_g1

0xa71f,	// (0x0002f575) popup_call6_1st_window_ParamLimits

0xa71f,	// (0x0002f575) popup_call6_1st_window

0xa730,	// (0x0002f586) popup_call6_2nd_window_ParamLimits

0xa730,	// (0x0002f586) popup_call6_2nd_window

0xa741,	// (0x0002f597) cell_call6_btn_pane_ParamLimits

0xa741,	// (0x0002f597) cell_call6_btn_pane

0x541e,	// (0x0002a274) bg_popup_call2_in_pane_cp03

0xefd4,	// (0x00033e2a) popup_call6_1st_window_g1

0xefdc,	// (0x00033e32) popup_call6_1st_window_g2

0xefe4,	// (0x00033e3a) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x00034d2a) popup_call6_1st_window_g

0xefec,	// (0x00033e42) popup_call6_1st_window_t1

0xeffb,	// (0x00033e51) popup_call6_1st_window_t2

0xf00b,	// (0x00033e61) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x00034d31) popup_call6_1st_window_t

0x541e,	// (0x0002a274) bg_popup_call2_in_pane_cp04

0xefd4,	// (0x00033e2a) popup_call6_2nd_window_g1

0xefdc,	// (0x00033e32) popup_call6_2nd_window_g2

0xefe4,	// (0x00033e3a) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x00034d2a) popup_call6_2nd_window_g

0xefec,	// (0x00033e42) popup_call6_2nd_window_t1

0x234d,	// (0x000271a3) bg_button_pane_cp15

0xf01b,	// (0x00033e71) cell_call6_btn_pane_g1

0xf024,	// (0x00033e7a) cell_call6_btn_pane_t1

0xa755,	// (0x0002f5ab) listscroll_wgtman_pane_ParamLimits

0xa755,	// (0x0002f5ab) listscroll_wgtman_pane

0xa778,	// (0x0002f5ce) wgtman_btn_pane_ParamLimits

0xa778,	// (0x0002f5ce) wgtman_btn_pane

0x4ff3,	// (0x00029e49) aid_scroll_copy1

0xf033,	// (0x00033e89) list_wgtman_pane

0xa7bb,	// (0x0002f611) wgtman_btn_pane_g1_ParamLimits

0xa7bb,	// (0x0002f611) wgtman_btn_pane_g1

0xa7e7,	// (0x0002f63d) wgtman_btn_pane_t1_ParamLimits

0xa7e7,	// (0x0002f63d) wgtman_btn_pane_t1

0xf03d,	// (0x00033e93) wgtman_btn_pane_t2_ParamLimits

0xf03d,	// (0x00033e93) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x00034d38) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x00034d38) wgtman_btn_pane_t

0xa824,	// (0x0002f67a) listrow_wgtman_pane_ParamLimits

0xa824,	// (0x0002f67a) listrow_wgtman_pane

0xa836,	// (0x0002f68c) listrow_wgtman_pane_g1

0xa83f,	// (0x0002f695) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x00034d3d) listrow_wgtman_pane_g

0xa849,	// (0x0002f69f) listrow_wgtman_pane_t1

0xa857,	// (0x0002f6ad) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x00034d42) listrow_wgtman_pane_t

0xa865,	// (0x0002f6bb) wait_bar_pane_cp09

0xf054,	// (0x00033eaa) main_calllock_btn_pane

0xf05e,	// (0x00033eb4) main_calllock_pane_g1

0x234d,	// (0x000271a3) bg_button_pane_cp17

0xf06a,	// (0x00033ec0) main_calllock_btn_pane_g1

0xf073,	// (0x00033ec9) main_calllock_btn_pane_t1

0x234d,	// (0x000271a3) main_dialer3_pane

0x234d,	// (0x000271a3) main_fmrd2_pane

0xc403,	// (0x00031259) main_fs_bigclock_unlock_btn_pane_g1

0xf08a,	// (0x00033ee0) main_fs_bigclock_unlock_btn_pane_t1

0xa86d,	// (0x0002f6c3) area_fmrd2_info_pane_ParamLimits

0xa86d,	// (0x0002f6c3) area_fmrd2_info_pane

0xa87e,	// (0x0002f6d4) area_fmrd2_visual_pane_ParamLimits

0xa87e,	// (0x0002f6d4) area_fmrd2_visual_pane

0xa88c,	// (0x0002f6e2) fmrd2_indi_pane_ParamLimits

0xa88c,	// (0x0002f6e2) fmrd2_indi_pane

0xa899,	// (0x0002f6ef) area_fmrd2_visual_pane_g1

0xa8a1,	// (0x0002f6f7) area_fmrd2_visual_pane_t1

0xa8b1,	// (0x0002f707) area_fmrd2_visual_pane_t2

0xa8c1,	// (0x0002f717) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x00034d4c) area_fmrd2_visual_pane_t

0xa8d1,	// (0x0002f727) area_fmrd2_info_pane_g1

0xa8d9,	// (0x0002f72f) area_fmrd2_info_pane_t1

0xa8e9,	// (0x0002f73f) area_fmrd2_info_pane_t2

0xa8f9,	// (0x0002f74f) area_fmrd2_info_pane_t3

0xa909,	// (0x0002f75f) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x00034d53) area_fmrd2_info_pane_t

0xa917,	// (0x0002f76d) fmrd2_indi_pane_t1

0xa927,	// (0x0002f77d) fmrd2_indi_pane_t2

0xa937,	// (0x0002f78d) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x00034d5c) fmrd2_indi_pane_t

0xe25b,	// (0x000330b1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe25b,	// (0x000330b1) list_single_fs_bigclock_indicator_pane_g5

0xe2ff,	// (0x00033155) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2ff,	// (0x00033155) list_single_fs_bigclock_indicator_pane_t5

0xa0d4,	// (0x0002ef2a) aid_cell_bcale_month_pane_ParamLimits

0xa0d4,	// (0x0002ef2a) aid_cell_bcale_month_pane

0xa0e6,	// (0x0002ef3c) bcale_month_pane_ParamLimits

0xa0e6,	// (0x0002ef3c) bcale_month_pane

0xa0fe,	// (0x0002ef54) bcale_preview_pane_ParamLimits

0xa0fe,	// (0x0002ef54) bcale_preview_pane

0xee1d,	// (0x00033c73) list_single_fs_bigclock_pane_t1_ParamLimits

0xee37,	// (0x00033c8d) list_single_fs_bigclock_pane_t2_ParamLimits

0xee37,	// (0x00033c8d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x00034ce3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x00034ce3) list_single_fs_bigclock_pane_t

0xf082,	// (0x00033ed8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x00034d47) main_fs_bigclock_unlock_btn_pane_g

0xa947,	// (0x0002f79d) aid_dia3_key_size_ParamLimits

0xa947,	// (0x0002f79d) aid_dia3_key_size

0xa956,	// (0x0002f7ac) aid_dia3_listrow_size_ParamLimits

0xa956,	// (0x0002f7ac) aid_dia3_listrow_size

0xa96b,	// (0x0002f7c1) dia3_keypad_fun_pane_ParamLimits

0xa96b,	// (0x0002f7c1) dia3_keypad_fun_pane

0xa987,	// (0x0002f7dd) dia3_keypad_num_pane_ParamLimits

0xa987,	// (0x0002f7dd) dia3_keypad_num_pane

0xa9a2,	// (0x0002f7f8) dia3_listscroll_pane_ParamLimits

0xa9a2,	// (0x0002f7f8) dia3_listscroll_pane

0xa9b5,	// (0x0002f80b) dia3_numentry_pane_ParamLimits

0xa9b5,	// (0x0002f80b) dia3_numentry_pane

0xf098,	// (0x00033eee) dia3_list_pane

0xf0a3,	// (0x00033ef9) scroll_pane_cp12

0x234d,	// (0x000271a3) bg_dia3_numentry_pane

0xa9c9,	// (0x0002f81f) dia3_numentry_pane_t1

0xa9d8,	// (0x0002f82e) cell_dia3_key_num_pane

0xa9e0,	// (0x0002f836) cell_dia3_key0_fun_pane_ParamLimits

0xa9e0,	// (0x0002f836) cell_dia3_key0_fun_pane

0xa9f4,	// (0x0002f84a) cell_dia3_key1_fun_pane_ParamLimits

0xa9f4,	// (0x0002f84a) cell_dia3_key1_fun_pane

0xaa0c,	// (0x0002f862) dia3_listrow_pane

0xdf7b,	// (0x00032dd1) bg_dia3_numentry_pane_g1

0x234d,	// (0x000271a3) bg_button_pane_cp21

0xf0ae,	// (0x00033f04) cell_dia3_key_num_pane_t1

0xf0bc,	// (0x00033f12) cell_dia3_key_num_pane_t2

0xf0cb,	// (0x00033f21) cell_dia3_key_num_pane_t3

0xf0da,	// (0x00033f30) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x00034d63) cell_dia3_key_num_pane_t

0x234d,	// (0x000271a3) bg_button_pane_cp19

0xaa1e,	// (0x0002f874) cell_dia3_key0_fun_pane_g1

0x234d,	// (0x000271a3) bg_button_pane_cp20

0xaa26,	// (0x0002f87c) cell_dia3_key1_fun_pane_g1

0xaa2e,	// (0x0002f884) area_left_week_number_pane

0xaa37,	// (0x0002f88d) area_top_day_name_pane

0xaa40,	// (0x0002f896) frame_month_view_pane

0xaa4c,	// (0x0002f8a2) grid_month_view_pane

0xaa56,	// (0x0002f8ac) cell_top_day_name_pane_ParamLimits

0xaa56,	// (0x0002f8ac) cell_top_day_name_pane

0xd1f9,	// (0x0003204f) cell_area_left_week_number_pane_ParamLimits

0xd1f9,	// (0x0003204f) cell_area_left_week_number_pane

0xaa6e,	// (0x0002f8c4) cell_month_view_pane_ParamLimits

0xaa6e,	// (0x0002f8c4) cell_month_view_pane

0xf0e9,	// (0x00033f3f) frm_month_g1

0xaa89,	// (0x0002f8df) frm_month_g2

0xaa93,	// (0x0002f8e9) frm_month_g3

0xaa9d,	// (0x0002f8f3) frm_month_g4

0xaaa7,	// (0x0002f8fd) frm_month_g5

0xaab1,	// (0x0002f907) frm_month_g6

0xaabb,	// (0x0002f911) frm_month_g7

0xf0f2,	// (0x00033f48) frm_month_g8

0xaac7,	// (0x0002f91d) frm_month_g9

0xaad0,	// (0x0002f926) frm_month_g10

0xaad9,	// (0x0002f92f) frm_month_g11

0xaae2,	// (0x0002f938) frm_month_g12

0xaaeb,	// (0x0002f941) frm_month_g13

0xaaf4,	// (0x0002f94a) frm_month_g14

0xaafd,	// (0x0002f953) frm_month_g15

0xab06,	// (0x0002f95c) frm_month_g16

0x000f,

0xff16,	// (0x00034d6c) frm_month_g

0xab11,	// (0x0002f967) cell_top_day_name_pane_t1

0xab20,	// (0x0002f976) cell_area_left_week_number_pane_g1

0xab11,	// (0x0002f967) cell_area_left_week_number_pane_t1

0xc403,	// (0x00031259) cell_month_view_pane_g1

0xab28,	// (0x0002f97e) cell_month_view_pane_t1

0x234d,	// (0x000271a3) main_fps_pane

0xe539,	// (0x0003338f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe539,	// (0x0003338f) cmail_ddmenu_btn02_pane_cp1

0xe555,	// (0x000333ab) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe555,	// (0x000333ab) cmail_ddmenu_btn02_pane_cp2

0xa3a7,	// (0x0002f1fd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa3a7,	// (0x0002f1fd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3e,	// (0x00034c94) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3e,	// (0x00034c94) cmail_ddmenu_btn02_pane_g

0xa3c5,	// (0x0002f21b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa3c5,	// (0x0002f21b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe43,	// (0x00034c99) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe43,	// (0x00034c99) cmail_ddmenu_btn02_pane_t

0xab37,	// (0x0002f98d) fps_text_pane_ParamLimits

0xab37,	// (0x0002f98d) fps_text_pane

0xab4e,	// (0x0002f9a4) main_fps_pane_g1_ParamLimits

0xab4e,	// (0x0002f9a4) main_fps_pane_g1

0xab68,	// (0x0002f9be) wait_bar_pane_cp010_ParamLimits

0xab68,	// (0x0002f9be) wait_bar_pane_cp010

0xab79,	// (0x0002f9cf) fps_text_pane_t1_ParamLimits

0xab79,	// (0x0002f9cf) fps_text_pane_t1

0x800f,	// (0x0002ce65) cam4_image_uncrop_pane_g1

0x8018,	// (0x0002ce6e) cam4_image_uncrop_pane_g2

0x8021,	// (0x0002ce77) cam4_image_uncrop_pane_g3

0x802a,	// (0x0002ce80) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00034772) cam4_image_uncrop_pane_g

0xaa0c,	// (0x0002f862) dia3_listrow_pane_ParamLimits

0x234d,	// (0x000271a3) main_phob2_pane

0x9f0e,	// (0x0002ed64) cell_tport_appsw_pane_cp02_ParamLimits

0x9f0e,	// (0x0002ed64) cell_tport_appsw_pane_cp02

0x9f22,	// (0x0002ed78) cell_tport_appsw_pane_cp03_ParamLimits

0x9f22,	// (0x0002ed78) cell_tport_appsw_pane_cp03

0x234d,	// (0x000271a3) phob2_contact_card_pane

0x234d,	// (0x000271a3) phob2_listscroll_pane

0x002e,	// (0x00024e84) phob2_list_pane

0x0036,	// (0x00024e8c) scroll_pane_cp034

0xab91,	// (0x0002f9e7) phob2_cc_data_pane_ParamLimits

0xab91,	// (0x0002f9e7) phob2_cc_data_pane

0xabb0,	// (0x0002fa06) phob2_cc_listscroll_pane_ParamLimits

0xabb0,	// (0x0002fa06) phob2_cc_listscroll_pane

0xabce,	// (0x0002fa24) list_double_large_graphic_phob2_pane_ParamLimits

0xabce,	// (0x0002fa24) list_double_large_graphic_phob2_pane

0x0090,	// (0x00024ee6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x0090,	// (0x00024ee6) list_double_large_graphic_phob2_pane_g1

0x009d,	// (0x00024ef3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x009d,	// (0x00024ef3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x00034d8d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x00034d8d) list_double_large_graphic_phob2_pane_g

0x00a9,	// (0x00024eff) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x00a9,	// (0x00024eff) list_double_large_graphic_phob2_pane_t1

0x00be,	// (0x00024f14) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x00be,	// (0x00024f14) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x00034d92) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x00034d92) list_double_large_graphic_phob2_pane_t

0x234d,	// (0x000271a3) list_highlight_pane_cp024

0x00d0,	// (0x00024f26) phob2_cc_button_pane

0xabe0,	// (0x0002fa36) phob2_cc_data_pane_g1_ParamLimits

0xabe0,	// (0x0002fa36) phob2_cc_data_pane_g1

0xabf5,	// (0x0002fa4b) phob2_cc_data_pane_g2_ParamLimits

0xabf5,	// (0x0002fa4b) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x00034d97) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x00034d97) phob2_cc_data_pane_g

0xac07,	// (0x0002fa5d) phob2_cc_data_pane_t1_ParamLimits

0xac07,	// (0x0002fa5d) phob2_cc_data_pane_t1

0xac1f,	// (0x0002fa75) phob2_cc_data_pane_t2_ParamLimits

0xac1f,	// (0x0002fa75) phob2_cc_data_pane_t2

0xac37,	// (0x0002fa8d) phob2_cc_data_pane_t3_ParamLimits

0xac37,	// (0x0002fa8d) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x00034d9c) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x00034d9c) phob2_cc_data_pane_t

0x0126,	// (0x00024f7c) phob2_cc_list_pane_ParamLimits

0x0126,	// (0x00024f7c) phob2_cc_list_pane

0x0132,	// (0x00024f88) scroll_pane_cp035_ParamLimits

0x0132,	// (0x00024f88) scroll_pane_cp035

0x25c9,	// (0x0002741f) bg_button_pane_cp033

0x013e,	// (0x00024f94) phob2_cc_button_pane_g1

0x014a,	// (0x00024fa0) phob2_cc_button_pane_t1

0x015f,	// (0x00024fb5) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x00034da3) phob2_cc_button_pane_t

0xac4f,	// (0x0002faa5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xac4f,	// (0x0002faa5) list_double_large_graphic_phob2_cc_pane

0xac61,	// (0x0002fab7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xac61,	// (0x0002fab7) list_double_large_graphic_phob2_cc_pane_g1

0xac6d,	// (0x0002fac3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xac6d,	// (0x0002fac3) list_double_large_graphic_phob2_cc_pane_g2

0xac79,	// (0x0002facf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xac79,	// (0x0002facf) list_double_large_graphic_phob2_cc_pane_g3

0xac85,	// (0x0002fadb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xac85,	// (0x0002fadb) list_double_large_graphic_phob2_cc_pane_g4

0xac91,	// (0x0002fae7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xac91,	// (0x0002fae7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x00034da8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x00034da8) list_double_large_graphic_phob2_cc_pane_g

0xac9d,	// (0x0002faf3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xac9d,	// (0x0002faf3) list_double_large_graphic_phob2_cc_pane_t1

0xacc6,	// (0x0002fb1c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xacc6,	// (0x0002fb1c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x00034db3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x00034db3) list_double_large_graphic_phob2_cc_pane_t

0x022b,	// (0x00025081) list_highlight_pane_cp025_ParamLimits

0x022b,	// (0x00025081) list_highlight_pane_cp025

0x25c9,	// (0x0002741f) bg_button_pane_cp033_ParamLimits

0x013e,	// (0x00024f94) phob2_cc_button_pane_g1_ParamLimits

0x014a,	// (0x00024fa0) phob2_cc_button_pane_t1_ParamLimits

0x015f,	// (0x00024fb5) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x00034da3) phob2_cc_button_pane_t_ParamLimits

0x25d7,	// (0x0002742d) popup_wgtman_window

0xd2db,	// (0x00032131) scroll_pane_cp038

0xa79d,	// (0x0002f5f3) wgtman_btn_pane_cp_01_ParamLimits

0xa79d,	// (0x0002f5f3) wgtman_btn_pane_cp_01

0x0239,	// (0x0002508f) wgtman_content_pane

0x0242,	// (0x00025098) wgtman_heading_pane

0x234d,	// (0x000271a3) bg_heading_pane_cp02

0x024b,	// (0x000250a1) wgtman_heading_pane_g1

0x0253,	// (0x000250a9) wgtman_heading_pane_t1

0x0261,	// (0x000250b7) scroll_pane_cp036

0x0269,	// (0x000250bf) wgtman_list_pane

0x0271,	// (0x000250c7) wgtman_list_pane_t1_ParamLimits

0x0271,	// (0x000250c7) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
