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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00055c28 };

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
0x300c,	// (0x00058c34) Screen

0x3018,	// (0x00058c40) application_window

0x3064,	// (0x00058c8c) area_bottom_pane_ParamLimits

0x3064,	// (0x00058c8c) area_bottom_pane

0x309d,	// (0x00058cc5) area_top_pane_ParamLimits

0x309d,	// (0x00058cc5) area_top_pane

0xb9fb,	// (0x00061623) call_video_uplink_pane_ParamLimits

0xb9fb,	// (0x00061623) call_video_uplink_pane

0x3117,	// (0x00058d3f) main_pane_ParamLimits

0x3117,	// (0x00058d3f) main_pane

0x1c7b,	// (0x000578a3) context_pane

0x6187,	// (0x0005bdaf) navi_pane

0x61af,	// (0x0005bdd7) popup_cale_events_window_ParamLimits

0x61af,	// (0x0005bdd7) popup_cale_events_window

0x1c8e,	// (0x000578b6) popup_mup_playback_window

0x61c7,	// (0x0005bdef) signal_pane

0xc18a,	// (0x00061db2) main_browser_pane

0x0834,	// (0x0005645c) main_burst_pane

0x5ed9,	// (0x0005bb01) main_calc_pane

0x0834,	// (0x0005645c) main_cale_day_pane

0xc18a,	// (0x00061db2) main_cale_month_pane

0x0834,	// (0x0005645c) main_cale_week_pane

0x0834,	// (0x0005645c) main_call_pane

0xbe2c,	// (0x00061a54) main_call_poc_pane

0x0834,	// (0x0005645c) main_camera_pane

0x0834,	// (0x0005645c) main_chi_dic_pane

0x06b9,	// (0x000562e1) main_clock_pane

0xbe2c,	// (0x00061a54) main_fmradio_pane

0x0834,	// (0x0005645c) main_graph_messa_pane

0xbe2c,	// (0x00061a54) main_help_pane

0xc18a,	// (0x00061db2) main_im_pane

0xc087,	// (0x00061caf) main_image_pane_ParamLimits

0xc087,	// (0x00061caf) main_image_pane

0xbe2c,	// (0x00061a54) main_location2_pane

0x0834,	// (0x0005645c) main_location_pane

0xbe2c,	// (0x00061a54) main_messa_pane

0xbe2c,	// (0x00061a54) main_mp2_pane

0x0834,	// (0x0005645c) main_mp_pane

0xbe2c,	// (0x00061a54) main_msg_pane

0xbe2c,	// (0x00061a54) main_mup_eq_pane

0xbe2c,	// (0x00061a54) main_mup_pane

0x0834,	// (0x0005645c) main_notes_pane

0xbe2c,	// (0x00061a54) main_pec_pane

0xbe2c,	// (0x00061a54) main_phob_pane

0xbe2c,	// (0x00061a54) main_pinb_pane

0xbe2c,	// (0x00061a54) main_postcard_pane

0xbe2c,	// (0x00061a54) main_qdial_pane

0x0834,	// (0x0005645c) main_skin_pane

0xbe2c,	// (0x00061a54) main_smil2_pane

0x0834,	// (0x0005645c) main_smil_pane

0x0834,	// (0x0005645c) main_video_pane

0x0834,	// (0x0005645c) main_video_tele_pane

0xc087,	// (0x00061caf) main_viewer_pane_ParamLimits

0xc087,	// (0x00061caf) main_viewer_pane

0x0834,	// (0x0005645c) main_vorec_pane

0x5f2d,	// (0x0005bb55) popup_blid_sat_info_window_ParamLimits

0x5f2d,	// (0x0005bb55) popup_blid_sat_info_window

0x5f85,	// (0x0005bbad) popup_dyc_status_message_window_ParamLimits

0x5f85,	// (0x0005bbad) popup_dyc_status_message_window

0x5f9f,	// (0x0005bbc7) popup_grid_large_graphic_window_ParamLimits

0x5f9f,	// (0x0005bbc7) popup_grid_large_graphic_window

0x605b,	// (0x0005bc83) popup_loc_request_window_ParamLimits

0x605b,	// (0x0005bc83) popup_loc_request_window

0x615f,	// (0x0005bd87) popup_wml_address_window_ParamLimits

0x615f,	// (0x0005bd87) popup_wml_address_window

0x5d13,	// (0x0005b93b) call_muted_g1

0x59c8,	// (0x0005b5f0) popup_call_audio_conf_window_ParamLimits

0x59c8,	// (0x0005b5f0) popup_call_audio_conf_window

0x5d27,	// (0x0005b94f) popup_call_audio_first_window_ParamLimits

0x5d27,	// (0x0005b94f) popup_call_audio_first_window

0x5d9d,	// (0x0005b9c5) popup_call_audio_in_window_ParamLimits

0x5d9d,	// (0x0005b9c5) popup_call_audio_in_window

0x5dd9,	// (0x0005ba01) popup_call_audio_out_window_ParamLimits

0x5dd9,	// (0x0005ba01) popup_call_audio_out_window

0x5e13,	// (0x0005ba3b) popup_call_audio_second_window_ParamLimits

0x5e13,	// (0x0005ba3b) popup_call_audio_second_window

0x5e69,	// (0x0005ba91) popup_call_audio_wait_window_ParamLimits

0x5e69,	// (0x0005ba91) popup_call_audio_wait_window

0x5e9e,	// (0x0005bac6) popup_number_entry_window_ParamLimits

0x5e9e,	// (0x0005bac6) popup_number_entry_window

0xba19,	// (0x00061641) bg_popup_call_pane_cp05_ParamLimits

0xba19,	// (0x00061641) bg_popup_call_pane_cp05

0xba39,	// (0x00061661) popup_number_entry_window_t1

0xba4c,	// (0x00061674) popup_number_entry_window_t2

0xba5e,	// (0x00061686) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00064d23) popup_number_entry_window_t

0xba70,	// (0x00061698) text_title_cp2

0xba83,	// (0x000616ab) bg_popup_call_pane_cp_ParamLimits

0xba83,	// (0x000616ab) bg_popup_call_pane_cp

0xba91,	// (0x000616b9) call_thumbnail_pane

0xba99,	// (0x000616c1) popup_call_audio_in_window_g1_ParamLimits

0xba99,	// (0x000616c1) popup_call_audio_in_window_g1

0xbaa5,	// (0x000616cd) popup_call_audio_in_window_g2_ParamLimits

0xbaa5,	// (0x000616cd) popup_call_audio_in_window_g2

0xbab1,	// (0x000616d9) popup_call_audio_in_window_g3_ParamLimits

0xbab1,	// (0x000616d9) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00064d2c) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00064d2c) popup_call_audio_in_window_g

0xbabd,	// (0x000616e5) popup_call_audio_in_window_t1_ParamLimits

0xbabd,	// (0x000616e5) popup_call_audio_in_window_t1

0xbad9,	// (0x00061701) popup_call_audio_in_window_t2_ParamLimits

0xbad9,	// (0x00061701) popup_call_audio_in_window_t2

0xbaf5,	// (0x0006171d) popup_call_audio_in_window_t3_ParamLimits

0xbaf5,	// (0x0006171d) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00064d33) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00064d33) popup_call_audio_in_window_t

0xba83,	// (0x000616ab) bg_popup_call_pane_cp01_ParamLimits

0xba83,	// (0x000616ab) bg_popup_call_pane_cp01

0xba91,	// (0x000616b9) call_thumbnail_pane_cp02

0xbb08,	// (0x00061730) call_type_pane_cp022

0xbb10,	// (0x00061738) popup_call_audio_out_window_g1_ParamLimits

0xbb10,	// (0x00061738) popup_call_audio_out_window_g1

0xbb22,	// (0x0006174a) popup_call_audio_out_window_g2_ParamLimits

0xbb22,	// (0x0006174a) popup_call_audio_out_window_g2

0xbb2e,	// (0x00061756) popup_call_audio_out_window_g3_ParamLimits

0xbb2e,	// (0x00061756) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00064d3a) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00064d3a) popup_call_audio_out_window_g

0xbb40,	// (0x00061768) popup_call_audio_out_window_t1_ParamLimits

0xbb40,	// (0x00061768) popup_call_audio_out_window_t1

0xbb58,	// (0x00061780) popup_call_audio_out_window_t2_ParamLimits

0xbb58,	// (0x00061780) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00064d41) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00064d41) popup_call_audio_out_window_t

0xbb6d,	// (0x00061795) bg_popup_call_pane_ParamLimits

0xbb6d,	// (0x00061795) bg_popup_call_pane

0x32d2,	// (0x00058efa) call_thumbnail_pane_cp_ParamLimits

0x32d2,	// (0x00058efa) call_thumbnail_pane_cp

0xbbf1,	// (0x00061819) call_type_pane_cp01_ParamLimits

0xbbf1,	// (0x00061819) call_type_pane_cp01

0xbc35,	// (0x0006185d) popup_call_audio_first_window_g1_ParamLimits

0xbc35,	// (0x0006185d) popup_call_audio_first_window_g1

0xbc81,	// (0x000618a9) popup_call_audio_first_window_g2_ParamLimits

0xbc81,	// (0x000618a9) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00064d46) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00064d46) popup_call_audio_first_window_g

0xbcc5,	// (0x000618ed) popup_call_audio_first_window_t1_ParamLimits

0xbcc5,	// (0x000618ed) popup_call_audio_first_window_t1

0xbd71,	// (0x00061999) popup_call_audio_first_window_t4_ParamLimits

0xbd71,	// (0x00061999) popup_call_audio_first_window_t4

0xbdfd,	// (0x00061a25) popup_call_audio_first_window_t5_ParamLimits

0xbdfd,	// (0x00061a25) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00064d4b) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00064d4b) popup_call_audio_first_window_t

0xbe2c,	// (0x00061a54) bg_popup_call_pane_cp02

0xbe36,	// (0x00061a5e) call_type_pane_cp023

0xbe3e,	// (0x00061a66) popup_call_audio_wait_window_g1

0xbe46,	// (0x00061a6e) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00064d52) popup_call_audio_wait_window_g

0xbe4e,	// (0x00061a76) popup_call_audio_wait_window_t3

0xbe5c,	// (0x00061a84) bg_popup_call_pane_cp03_ParamLimits

0xbe5c,	// (0x00061a84) bg_popup_call_pane_cp03

0xbebc,	// (0x00061ae4) call_thumbnail_pane_cp011_ParamLimits

0xbebc,	// (0x00061ae4) call_thumbnail_pane_cp011

0xbec8,	// (0x00061af0) call_type_pane_cp034_ParamLimits

0xbec8,	// (0x00061af0) call_type_pane_cp034

0xbf04,	// (0x00061b2c) popup_call_audio_second_window_g1_ParamLimits

0xbf04,	// (0x00061b2c) popup_call_audio_second_window_g1

0xbf40,	// (0x00061b68) popup_call_audio_second_window_g2_ParamLimits

0xbf40,	// (0x00061b68) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00064d57) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00064d57) popup_call_audio_second_window_g

0xbf7c,	// (0x00061ba4) popup_call_audio_second_window_t1_ParamLimits

0xbf7c,	// (0x00061ba4) popup_call_audio_second_window_t1

0xbffd,	// (0x00061c25) popup_call_audio_second_window_t2_ParamLimits

0xbffd,	// (0x00061c25) popup_call_audio_second_window_t2

0xc033,	// (0x00061c5b) popup_call_audio_second_window_t3_ParamLimits

0xc033,	// (0x00061c5b) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00064d5c) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00064d5c) popup_call_audio_second_window_t

0xbe2c,	// (0x00061a54) bg_popup_call_pane_cp04

0xc069,	// (0x00061c91) list_conf_pane

0xc071,	// (0x00061c99) popup_call_audio_conf_window_t1

0xc07f,	// (0x00061ca7) call_thumbnail_pane_g1

0xc087,	// (0x00061caf) bg_pinb_pane_ParamLimits

0xc087,	// (0x00061caf) bg_pinb_pane

0xc095,	// (0x00061cbd) find_pinb_pane

0xc09e,	// (0x00061cc6) listscroll_pinb_pane_ParamLimits

0xc09e,	// (0x00061cc6) listscroll_pinb_pane

0xc0ad,	// (0x00061cd5) pinb_bg_pane_g1

0x32f6,	// (0x00058f1e) pinb_bg_pane_g2

0x3302,	// (0x00058f2a) pinb_bg_pane_g3

0x330e,	// (0x00058f36) pinb_bg_pane_g4

0x331a,	// (0x00058f42) pinb_bg_pane_g5

0x3326,	// (0x00058f4e) pinb_bg_pane_g6

0x3331,	// (0x00058f59) pinb_bg_pane_g7

0x333c,	// (0x00058f64) pinb_bg_pane_g8

0x3347,	// (0x00058f6f) pinb_bg_pane_g9

0x3351,	// (0x00058f79) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00064d63) pinb_bg_pane_g

0x336e,	// (0x00058f96) grid_pinb_pane

0x3377,	// (0x00058f9f) list_pinb_pane

0x3380,	// (0x00058fa8) scroll_pane_cp01_ParamLimits

0x3380,	// (0x00058fa8) scroll_pane_cp01

0xc0b7,	// (0x00061cdf) find_pinb_pane_g1_ParamLimits

0xc0b7,	// (0x00061cdf) find_pinb_pane_g1

0xc0cf,	// (0x00061cf7) find_pinb_pane_t1

0xc0e1,	// (0x00061d09) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00064d7d) find_pinb_pane_t

0xc0f6,	// (0x00061d1e) input_focus_pane_cp01_ParamLimits

0xc0f6,	// (0x00061d1e) input_focus_pane_cp01

0x3392,	// (0x00058fba) cell_pinb_pane_ParamLimits

0x3392,	// (0x00058fba) cell_pinb_pane

0x33bb,	// (0x00058fe3) cell_pinb_pane_g1_ParamLimits

0x33bb,	// (0x00058fe3) cell_pinb_pane_g1

0x33cb,	// (0x00058ff3) cell_pinb_pane_g2_ParamLimits

0x33cb,	// (0x00058ff3) cell_pinb_pane_g2

0xc102,	// (0x00061d2a) cell_pinb_pane_g3_ParamLimits

0xc102,	// (0x00061d2a) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00064d82) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00064d82) cell_pinb_pane_g

0xbe2c,	// (0x00061a54) grid_highlight_pane_cp01

0x33d7,	// (0x00058fff) list_pinb_item_pane_ParamLimits

0x33d7,	// (0x00058fff) list_pinb_item_pane

0xbe2c,	// (0x00061a54) list_highlight_pane_cp02

0x33e9,	// (0x00059011) list_pinb_item_pane_g1_ParamLimits

0x33e9,	// (0x00059011) list_pinb_item_pane_g1

0xc10e,	// (0x00061d36) list_pinb_item_pane_g2_ParamLimits

0xc10e,	// (0x00061d36) list_pinb_item_pane_g2

0x33f6,	// (0x0005901e) list_pinb_item_pane_g3_ParamLimits

0x33f6,	// (0x0005901e) list_pinb_item_pane_g3

0x3407,	// (0x0005902f) list_pinb_item_pane_g4_ParamLimits

0x3407,	// (0x0005902f) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00064d89) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00064d89) list_pinb_item_pane_g

0x3413,	// (0x0005903b) list_pinb_item_pane_t1_ParamLimits

0x3413,	// (0x0005903b) list_pinb_item_pane_t1

0x3448,	// (0x00059070) calc_display_pane

0x346e,	// (0x00059096) calc_paper_pane

0x348f,	// (0x000590b7) grid_calc_pane

0xbe2c,	// (0x00061a54) bg_list_pane_cp01

0x34b7,	// (0x000590df) clock_g1

0x34bf,	// (0x000590e7) clock_g2

0x0001,

0xf16a,	// (0x00064d92) clock_g

0x34c7,	// (0x000590ef) clock_t1_ParamLimits

0x34c7,	// (0x000590ef) clock_t1

0x34dc,	// (0x00059104) clock_t2_ParamLimits

0x34dc,	// (0x00059104) clock_t2

0x34ee,	// (0x00059116) clock_t3_ParamLimits

0x34ee,	// (0x00059116) clock_t3

0x3500,	// (0x00059128) clock_t4_ParamLimits

0x3500,	// (0x00059128) clock_t4

0x3512,	// (0x0005913a) clock_t5_ParamLimits

0x3512,	// (0x0005913a) clock_t5

0x3527,	// (0x0005914f) clock_t6_ParamLimits

0x3527,	// (0x0005914f) clock_t6

0x3539,	// (0x00059161) clock_t7_ParamLimits

0x3539,	// (0x00059161) clock_t7

0x354b,	// (0x00059173) clock_t8_ParamLimits

0x354b,	// (0x00059173) clock_t8

0x355f,	// (0x00059187) clock_t9_ParamLimits

0x355f,	// (0x00059187) clock_t9

0x0008,

0xf16f,	// (0x00064d97) clock_t_ParamLimits

0xf16f,	// (0x00064d97) clock_t

0xc122,	// (0x00061d4a) popup_clock_analogue_window_cp02

0xc122,	// (0x00061d4a) popup_clock_digital_window_cp01

0xc12a,	// (0x00061d52) listscroll_help_pane

0xbe2c,	// (0x00061a54) phob_pre_status_pane

0xc134,	// (0x00061d5c) grid_qdial_pane

0xbe2c,	// (0x00061a54) listscroll_mce_pane

0xc13e,	// (0x00061d66) bg_notes_pane

0xc148,	// (0x00061d70) list_notes_pane

0x3573,	// (0x0005919b) scroll_pane_cp06

0xc152,	// (0x00061d7a) bg_calc_paper_pane

0xc170,	// (0x00061d98) list_calc_pane

0xc18a,	// (0x00061db2) bg_calc_display_pane

0x357e,	// (0x000591a6) calc_display_pane_t1

0x3590,	// (0x000591b8) calc_display_pane_t2

0xc196,	// (0x00061dbe) calc_display_pane_t3

0x0002,

0xf182,	// (0x00064daa) calc_display_pane_t

0x35a2,	// (0x000591ca) cell_calc_pane_ParamLimits

0x35a2,	// (0x000591ca) cell_calc_pane

0xc1a8,	// (0x00061dd0) bg_calc_paper_pane_g1

0xc1b4,	// (0x00061ddc) bg_calc_paper_pane_g2

0xc1c0,	// (0x00061de8) bg_calc_paper_pane_g3

0xc1cc,	// (0x00061df4) bg_calc_paper_pane_g4

0xc1d8,	// (0x00061e00) bg_calc_paper_pane_g5

0x35d7,	// (0x000591ff) bg_calc_paper_pane_g6

0x35e6,	// (0x0005920e) bg_calc_paper_pane_g7

0x35f5,	// (0x0005921d) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00064db1) bg_calc_paper_pane_g

0x3608,	// (0x00059230) calc_bg_paper_pane_g9

0x361b,	// (0x00059243) list_calc_item_pane_ParamLimits

0x361b,	// (0x00059243) list_calc_item_pane

0xc1e4,	// (0x00061e0c) list_calc_item_pane_g1

0xc1f1,	// (0x00061e19) list_calc_item_pane_t1_ParamLimits

0xc1f1,	// (0x00061e19) list_calc_item_pane_t1

0x362e,	// (0x00059256) list_calc_item_pane_t2_ParamLimits

0x362e,	// (0x00059256) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00064dc2) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00064dc2) list_calc_item_pane_t

0xc203,	// (0x00061e2b) cell_calc_pane_g1

0xc20d,	// (0x00061e35) grid_highlight_pane_cp02

0x3662,	// (0x0005928a) bg_calc_display_pane_g1

0x366b,	// (0x00059293) bg_calc_display_pane_g2

0x3675,	// (0x0005929d) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00064dcc) bg_calc_display_pane_g

0x367e,	// (0x000592a6) cell_qdial_pane_ParamLimits

0x367e,	// (0x000592a6) cell_qdial_pane

0x3692,	// (0x000592ba) cell_qdial_pane_g1_ParamLimits

0x3692,	// (0x000592ba) cell_qdial_pane_g1

0x36a8,	// (0x000592d0) cell_qdial_pane_g2_ParamLimits

0x36a8,	// (0x000592d0) cell_qdial_pane_g2

0xc22f,	// (0x00061e57) cell_qdial_pane_g3_ParamLimits

0xc22f,	// (0x00061e57) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00064dd3) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00064dd3) cell_qdial_pane_g

0x36cf,	// (0x000592f7) cell_qdial_pane_t1_ParamLimits

0x36cf,	// (0x000592f7) cell_qdial_pane_t1

0x36e7,	// (0x0005930f) cell_qdial_pane_t2_ParamLimits

0x36e7,	// (0x0005930f) cell_qdial_pane_t2

0x36fa,	// (0x00059322) cell_qdial_pane_t3_ParamLimits

0x36fa,	// (0x00059322) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00064ddc) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00064ddc) cell_qdial_pane_t

0xbe2c,	// (0x00061a54) grid_highlight_pane_cp04

0xc23b,	// (0x00061e63) thumbnail_qdial_pane_ParamLimits

0xc23b,	// (0x00061e63) thumbnail_qdial_pane

0xc297,	// (0x00061ebf) list_help_pane

0xc2a0,	// (0x00061ec8) scroll_pane_cp02

0x370d,	// (0x00059335) help_list_pane_t1_ParamLimits

0x370d,	// (0x00059335) help_list_pane_t1

0xc2a9,	// (0x00061ed1) bg_notes_pane_g2

0xc2b1,	// (0x00061ed9) bg_notes_pane_g3

0xc2b9,	// (0x00061ee1) notes_bg_pane_g1

0xc2c1,	// (0x00061ee9) notes_bg_pane_g4

0xc2c9,	// (0x00061ef1) notes_bg_pane_g5

0xc2d1,	// (0x00061ef9) notes_bg_pane_g6

0xc2d9,	// (0x00061f01) notes_bg_pane_g7

0xc2e1,	// (0x00061f09) notes_bg_pane_g8

0xc2e9,	// (0x00061f11) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00064dfa) notes_bg_pane_g

0x372a,	// (0x00059352) list_notes_text_pane_ParamLimits

0x372a,	// (0x00059352) list_notes_text_pane

0xc2f1,	// (0x00061f19) list_notes_text_pane_g1

0x373f,	// (0x00059367) list_notes_text_pane_t1

0xc18a,	// (0x00061db2) listscroll_cale_week_pane

0x376a,	// (0x00059392) bg_cale_heading_pane

0xc30b,	// (0x00061f33) bg_cale_pane_cp01

0x377e,	// (0x000593a6) cale_week_corner_pane

0x3794,	// (0x000593bc) cale_week_day_heading_pane

0x37a8,	// (0x000593d0) cale_week_scroll_pane_g1

0x37b9,	// (0x000593e1) cale_week_scroll_pane_g2

0x37ca,	// (0x000593f2) cale_week_scroll_pane_g3

0x37db,	// (0x00059403) cale_week_scroll_pane_g4

0x37ec,	// (0x00059414) cale_week_scroll_pane_g5

0x37fd,	// (0x00059425) cale_week_scroll_pane_g6

0x380e,	// (0x00059436) cale_week_scroll_pane_g7

0x381f,	// (0x00059447) cale_week_scroll_pane_g8

0x3830,	// (0x00059458) cale_week_scroll_pane_g9

0x3841,	// (0x00059469) cale_week_scroll_pane_g10

0x3852,	// (0x0005947a) cale_week_scroll_pane_g11

0x3863,	// (0x0005948b) cale_week_scroll_pane_g12

0x3874,	// (0x0005949c) cale_week_scroll_pane_g13

0x3885,	// (0x000594ad) cale_week_scroll_pane_g14

0x3896,	// (0x000594be) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00064e09) cale_week_scroll_pane_g

0x38a7,	// (0x000594cf) cale_week_time_pane

0x38b8,	// (0x000594e0) grid_cale_week_pane

0x38cb,	// (0x000594f3) scroll_pane_cp08

0x38e5,	// (0x0005950d) cell_cale_week_pane_ParamLimits

0x38e5,	// (0x0005950d) cell_cale_week_pane

0x3921,	// (0x00059549) cale_week_day_heading_pane_t1

0x394e,	// (0x00059576) cale_week_day_heading_pane_t2

0x397b,	// (0x000595a3) cale_week_day_heading_pane_t3

0x39a8,	// (0x000595d0) cale_week_day_heading_pane_t4

0x39d5,	// (0x000595fd) cale_week_day_heading_pane_t5

0x3a02,	// (0x0005962a) cale_week_day_heading_pane_t6

0x3a2f,	// (0x00059657) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00064e28) cale_week_day_heading_pane_t

0xc336,	// (0x00061f5e) bg_cale_side_pane

0x3a5c,	// (0x00059684) cale_week_time_pane_t1

0x3a74,	// (0x0005969c) cale_week_time_pane_t2

0x3a8c,	// (0x000596b4) cale_week_time_pane_t3

0x3aa4,	// (0x000596cc) cale_week_time_pane_t4

0x3abc,	// (0x000596e4) cale_week_time_pane_t5

0x3ad4,	// (0x000596fc) cale_week_time_pane_t6

0x3aec,	// (0x00059714) cale_week_time_pane_t7

0x3b04,	// (0x0005972c) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00064e37) cale_week_time_pane_t

0x3b1c,	// (0x00059744) cell_cale_week_pane_g2

0x3b35,	// (0x0005975d) cell_cale_week_pane_g3_ParamLimits

0x3b35,	// (0x0005975d) cell_cale_week_pane_g3

0xc344,	// (0x00061f6c) grid_highlight_pane_cp07

0xc34c,	// (0x00061f74) listscroll_gms_pane

0xc356,	// (0x00061f7e) grid_gms_pane

0xc35f,	// (0x00061f87) listscroll_gms_pane_g1

0xc367,	// (0x00061f8f) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00064e48) listscroll_gms_pane_g

0x3b4d,	// (0x00059775) scroll_pane_cp010

0x3b58,	// (0x00059780) cell_gms_pane_ParamLimits

0x3b58,	// (0x00059780) cell_gms_pane

0x3b6b,	// (0x00059793) cell_gms_pane_g1

0xc36f,	// (0x00061f97) cell_gms_pane_g2

0xc377,	// (0x00061f9f) cell_gms_pane_g3

0xc380,	// (0x00061fa8) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00064e4d) cell_gms_pane_g

0xc389,	// (0x00061fb1) grid_highlight_pane_cp09

0x5cbd,	// (0x0005b8e5) phob_pre_status_pane_g1

0x5cc5,	// (0x0005b8ed) phob_pre_status_pane_g2

0x5ccd,	// (0x0005b8f5) phob_pre_status_pane_g3

0x5cd5,	// (0x0005b8fd) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0006523c) phob_pre_status_pane_g

0x5ce5,	// (0x0005b90d) phob_pre_status_pane_t1

0x5cf3,	// (0x0005b91b) phob_pre_status_pane_t2

0x5d03,	// (0x0005b92b) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00065247) phob_pre_status_pane_t

0xbe2c,	// (0x00061a54) bg_list_pane_cp05

0x3b7b,	// (0x000597a3) grid_vorec_pane

0xc391,	// (0x00061fb9) vorec_t1

0xc39f,	// (0x00061fc7) vorec_t2

0xc3ad,	// (0x00061fd5) vorec_t3

0xc3bb,	// (0x00061fe3) vorec_t4

0xc3c9,	// (0x00061ff1) vorec_t5

0xc3d7,	// (0x00061fff) vorec_t6

0x0006,

0xf22e,	// (0x00064e56) vorec_t

0xc3f3,	// (0x0006201b) wait_bar_pane_cp01

0x3b83,	// (0x000597ab) cell_vorec_pane_ParamLimits

0x3b83,	// (0x000597ab) cell_vorec_pane

0xc3fb,	// (0x00062023) cell_vorec_pane_g1

0xbe2c,	// (0x00061a54) grid_highlight_pane_cp05

0x3bae,	// (0x000597d6) cams_zoom_pane

0x3bbd,	// (0x000597e5) image_vga_pane

0x3bd7,	// (0x000597ff) main_camera_pane_g1

0x3be9,	// (0x00059811) main_camera_pane_g2

0x3bf9,	// (0x00059821) main_camera_pane_g3

0x3c09,	// (0x00059831) main_camera_pane_g4

0x3c19,	// (0x00059841) main_camera_pane_g5

0x3c29,	// (0x00059851) main_camera_pane_g6

0x3c3b,	// (0x00059863) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00064e65) main_camera_pane_g

0x3c4b,	// (0x00059873) main_camera_pane_t1

0x3c61,	// (0x00059889) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00064e76) main_camera_pane_t

0x3c9b,	// (0x000598c3) cams_zoom_pane_cp_ParamLimits

0x3c9b,	// (0x000598c3) cams_zoom_pane_cp

0x3cc3,	// (0x000598eb) image_cif_pane_ParamLimits

0x3cc3,	// (0x000598eb) image_cif_pane

0x3cfe,	// (0x00059926) image_subqcif_pane

0x3d06,	// (0x0005992e) main_video_pane_g1_ParamLimits

0x3d06,	// (0x0005992e) main_video_pane_g1

0x3d2a,	// (0x00059952) main_video_pane_g2_ParamLimits

0x3d2a,	// (0x00059952) main_video_pane_g2

0x3d5e,	// (0x00059986) main_video_pane_g3_ParamLimits

0x3d5e,	// (0x00059986) main_video_pane_g3

0x3d8c,	// (0x000599b4) main_video_pane_g4_ParamLimits

0x3d8c,	// (0x000599b4) main_video_pane_g4

0x3dba,	// (0x000599e2) main_video_pane_g5_ParamLimits

0x3dba,	// (0x000599e2) main_video_pane_g5

0xc411,	// (0x00062039) main_video_pane_g6_ParamLimits

0xc411,	// (0x00062039) main_video_pane_g6

0x0006,

0xf253,	// (0x00064e7b) main_video_pane_g_ParamLimits

0xf253,	// (0x00064e7b) main_video_pane_g

0x3de7,	// (0x00059a0f) main_video_pane_t1_ParamLimits

0x3de7,	// (0x00059a0f) main_video_pane_t1

0xc42b,	// (0x00062053) cams_zoom_pane_g1

0xc434,	// (0x0006205c) cams_zoom_pane_g2

0xc43d,	// (0x00062065) cams_zoom_pane_g3

0xc446,	// (0x0006206e) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00064e8a) cams_zoom_pane_g

0x3e44,	// (0x00059a6c) grid_cams_pane

0x3e5e,	// (0x00059a86) linegrid_cams_pane

0x3e72,	// (0x00059a9a) cell_cams_pane_ParamLimits

0x3e72,	// (0x00059a9a) cell_cams_pane

0xc44f,	// (0x00062077) cams_burst_image_pane

0xc457,	// (0x0006207f) cell_cams_pane_g1

0xbe2c,	// (0x00061a54) grid_highlight_pane_cp03

0xc203,	// (0x00061e2b) mp_bg_pane_g1

0xbe2c,	// (0x00061a54) bg_list_pane_cp03

0x1b45,	// (0x0005776d) bg_mp_pane

0x1b4d,	// (0x00057775) grid_mp_pane

0x1b55,	// (0x0005777d) media_player_g1

0x1b5d,	// (0x00057785) media_player_t1

0x1b6b,	// (0x00057793) media_player_t2

0x1b79,	// (0x000577a1) media_player_t3

0x1b87,	// (0x000577af) media_player_t4

0x1b95,	// (0x000577bd) media_player_t5

0x1ba3,	// (0x000577cb) media_player_t6

0x1bb1,	// (0x000577d9) media_player_t7

0x0006,

0xf5fe,	// (0x00065226) media_player_t

0x1bbf,	// (0x000577e7) wait_bar_pane_cp02

0xf5e3,	// (0x0006520b) main_usb_pane_t

0x5cb4,	// (0x0005b8dc) cell_mp_pane

0xc203,	// (0x00061e2b) cell_mp_pane_g1

0xbe2c,	// (0x00061a54) grid_highlight_pane_cp06

0xc45f,	// (0x00062087) grid_skin_colour_pane

0xc467,	// (0x0006208f) list_highlight_pane_cp03

0x3f8b,	// (0x00059bb3) skin_g1

0xc46f,	// (0x00062097) skin_t1

0xc47e,	// (0x000620a6) skin_t2

0x0001,

0xf297,	// (0x00064ebf) skin_t

0x3f93,	// (0x00059bbb) cell_skin_colour_pane_ParamLimits

0x3f93,	// (0x00059bbb) cell_skin_colour_pane

0xc48c,	// (0x000620b4) cell_skin_colour_pane_g1

0x3fef,	// (0x00059c17) call_video_g1_ParamLimits

0x3fef,	// (0x00059c17) call_video_g1

0x400b,	// (0x00059c33) call_video_g2_ParamLimits

0x400b,	// (0x00059c33) call_video_g2

0x0001,

0xf29c,	// (0x00064ec4) call_video_g_ParamLimits

0xf29c,	// (0x00064ec4) call_video_g

0x4041,	// (0x00059c69) call_video_uplink_pane_cp1_ParamLimits

0x4041,	// (0x00059c69) call_video_uplink_pane_cp1

0xc4a6,	// (0x000620ce) call_video_uplink_pane_cp2

0x40bf,	// (0x00059ce7) video_down_crop_pane_ParamLimits

0x40bf,	// (0x00059ce7) video_down_crop_pane

0x4193,	// (0x00059dbb) video_down_pane_ParamLimits

0x4193,	// (0x00059dbb) video_down_pane

0xc4ae,	// (0x000620d6) video_down_subqcif_pane_ParamLimits

0xc4ae,	// (0x000620d6) video_down_subqcif_pane

0xc4c6,	// (0x000620ee) video_down_subqcif_pane_cp_ParamLimits

0xc4c6,	// (0x000620ee) video_down_subqcif_pane_cp

0xc4ea,	// (0x00062112) im_reading_pane_ParamLimits

0xc4ea,	// (0x00062112) im_reading_pane

0x4264,	// (0x00059e8c) im_writing_pane_ParamLimits

0x4264,	// (0x00059e8c) im_writing_pane

0x427a,	// (0x00059ea2) im_reading_pane_t1

0xc504,	// (0x0006212c) list_im_pane

0xc515,	// (0x0006213d) scroll_pane_cp07

0x42b3,	// (0x00059edb) im_writing_pane_t1_ParamLimits

0x42b3,	// (0x00059edb) im_writing_pane_t1

0xc52e,	// (0x00062156) im_writing_pane_t2_ParamLimits

0xc52e,	// (0x00062156) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00064ece) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00064ece) im_writing_pane_t

0xbe2c,	// (0x00061a54) input_focus_pane_cp04

0xbe2c,	// (0x00061a54) input_focus_pane_cp05

0x42c8,	// (0x00059ef0) list_im_single_pane_ParamLimits

0x42c8,	// (0x00059ef0) list_im_single_pane

0x42dc,	// (0x00059f04) list_single_im_pane_t1

0x5c74,	// (0x0005b89c) blid_accuracy_pane

0x5c7c,	// (0x0005b8a4) blid_compass_pane

0x5c86,	// (0x0005b8ae) main_location_t1

0x5c96,	// (0x0005b8be) main_location_t2

0x5ca6,	// (0x0005b8ce) main_location_t3

0x0002,

0xf60d,	// (0x00065235) main_location_t

0xbe2c,	// (0x00061a54) aid_levels_location

0xc203,	// (0x00061e2b) blid_accuracy_pane_g1

0xc203,	// (0x00061e2b) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00064f30) blid_accuracy_pane_g

0xc576,	// (0x0006219e) wml_content_pane

0xc5b4,	// (0x000621dc) wml_button_pane_ParamLimits

0xc5b4,	// (0x000621dc) wml_button_pane

0x42eb,	// (0x00059f13) wml_list_single_large_pane_ParamLimits

0x42eb,	// (0x00059f13) wml_list_single_large_pane

0x4300,	// (0x00059f28) wml_list_single_medium_pane_ParamLimits

0x4300,	// (0x00059f28) wml_list_single_medium_pane

0x4316,	// (0x00059f3e) wml_list_single_small_pane_ParamLimits

0x4316,	// (0x00059f3e) wml_list_single_small_pane

0xc5c8,	// (0x000621f0) wml_selection_box_pane_ParamLimits

0xc5c8,	// (0x000621f0) wml_selection_box_pane

0xc5db,	// (0x00062203) wml_list_single_pane_t1

0xc5ea,	// (0x00062212) wml_list_single_medium_pane_t1

0xc5f9,	// (0x00062221) wml_list_single_large_pane_t1

0xc608,	// (0x00062230) input_focus_pane_cp02_ParamLimits

0xc608,	// (0x00062230) input_focus_pane_cp02

0xc61b,	// (0x00062243) wml_selection_box_pane_g1

0xc624,	// (0x0006224c) wml_selection_box_pane_t1_ParamLimits

0xc624,	// (0x0006224c) wml_selection_box_pane_t1

0xc087,	// (0x00061caf) bg_wml_button_pane_ParamLimits

0xc087,	// (0x00061caf) bg_wml_button_pane

0xc63c,	// (0x00062264) wml_button_pane_g1

0xc644,	// (0x0006226c) wml_button_pane_t1

0xc63c,	// (0x00062264) wml_button_bg_pane_g1

0xc654,	// (0x0006227c) wml_button_bg_pane_g2

0xc65c,	// (0x00062284) wml_button_bg_pane_g3

0xc664,	// (0x0006228c) wml_button_bg_pane_g4

0xc66c,	// (0x00062294) wml_button_bg_pane_g5

0xc674,	// (0x0006229c) wml_button_bg_pane_g6

0xc67c,	// (0x000622a4) wml_button_bg_pane_g7

0xc684,	// (0x000622ac) wml_button_bg_pane_g8

0xc68c,	// (0x000622b4) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00064ed3) wml_button_bg_pane_g

0x432e,	// (0x00059f56) bg_list_pane_cp02

0xc694,	// (0x000622bc) mce_header_pane_ParamLimits

0xc694,	// (0x000622bc) mce_header_pane

0xc6aa,	// (0x000622d2) mce_icon_pane

0xc6aa,	// (0x000622d2) mce_image_pane

0xc6b3,	// (0x000622db) mce_text_pane_ParamLimits

0xc6b3,	// (0x000622db) mce_text_pane

0x4336,	// (0x00059f5e) scroll_pane_cp03

0xc5ac,	// (0x000621d4) scroll_pane_cp04

0xc6c6,	// (0x000622ee) scroll_pane_cp05_ParamLimits

0xc6c6,	// (0x000622ee) scroll_pane_cp05

0x4340,	// (0x00059f68) mce_header_field_pane_ParamLimits

0x4340,	// (0x00059f68) mce_header_field_pane

0x4357,	// (0x00059f7f) mce_header_field_pane_2_ParamLimits

0x4357,	// (0x00059f7f) mce_header_field_pane_2

0x436d,	// (0x00059f95) mce_header_field_pane_3

0x4375,	// (0x00059f9d) list_single_mce_message_pane_ParamLimits

0x4375,	// (0x00059f9d) list_single_mce_message_pane

0x438a,	// (0x00059fb2) list_single_mce_smart_pane_ParamLimits

0x438a,	// (0x00059fb2) list_single_mce_smart_pane

0xc6d2,	// (0x000622fa) input_focus_pane_cp03

0xc6db,	// (0x00062303) list_header_data_pane

0x43aa,	// (0x00059fd2) mce_header_field_pane_t1

0x43ba,	// (0x00059fe2) list_single_mce_header_pane_ParamLimits

0x43ba,	// (0x00059fe2) list_single_mce_header_pane

0xc6e3,	// (0x0006230b) list_single_mce_header_pane_t1

0xc6f2,	// (0x0006231a) list_single_mce_message_pane_g1

0xc6fa,	// (0x00062322) list_single_mce_message_pane_t1

0x43ec,	// (0x0005a014) bg_cale_heading_pane_cp01_ParamLimits

0x43ec,	// (0x0005a014) bg_cale_heading_pane_cp01

0xc708,	// (0x00062330) bg_cale_pane_cp02_ParamLimits

0xc708,	// (0x00062330) bg_cale_pane_cp02

0x440f,	// (0x0005a037) cale_month_corner_pane

0x4425,	// (0x0005a04d) cale_month_day_heading_pane_ParamLimits

0x4425,	// (0x0005a04d) cale_month_day_heading_pane

0x4450,	// (0x0005a078) cale_month_pane_g1_ParamLimits

0x4450,	// (0x0005a078) cale_month_pane_g1

0x446c,	// (0x0005a094) cale_month_pane_g2_ParamLimits

0x446c,	// (0x0005a094) cale_month_pane_g2

0x4487,	// (0x0005a0af) cale_month_pane_g3_ParamLimits

0x4487,	// (0x0005a0af) cale_month_pane_g3

0x44b3,	// (0x0005a0db) cale_month_pane_g4_ParamLimits

0x44b3,	// (0x0005a0db) cale_month_pane_g4

0x44df,	// (0x0005a107) cale_month_pane_g5_ParamLimits

0x44df,	// (0x0005a107) cale_month_pane_g5

0x450b,	// (0x0005a133) cale_month_pane_g6_ParamLimits

0x450b,	// (0x0005a133) cale_month_pane_g6

0x4537,	// (0x0005a15f) cale_month_pane_g7_ParamLimits

0x4537,	// (0x0005a15f) cale_month_pane_g7

0x4563,	// (0x0005a18b) cale_month_pane_g8_ParamLimits

0x4563,	// (0x0005a18b) cale_month_pane_g8

0x4597,	// (0x0005a1bf) cale_month_pane_g9_ParamLimits

0x4597,	// (0x0005a1bf) cale_month_pane_g9

0x45c9,	// (0x0005a1f1) cale_month_pane_g10_ParamLimits

0x45c9,	// (0x0005a1f1) cale_month_pane_g10

0x45fb,	// (0x0005a223) cale_month_pane_g11_ParamLimits

0x45fb,	// (0x0005a223) cale_month_pane_g11

0x462d,	// (0x0005a255) cale_month_pane_g12_ParamLimits

0x462d,	// (0x0005a255) cale_month_pane_g12

0x465f,	// (0x0005a287) cale_month_pane_g13_ParamLimits

0x465f,	// (0x0005a287) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00064ee6) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00064ee6) cale_month_pane_g

0x4691,	// (0x0005a2b9) cale_month_week_pane

0x46a4,	// (0x0005a2cc) grid_cale_month_pane_ParamLimits

0x46a4,	// (0x0005a2cc) grid_cale_month_pane

0x46ca,	// (0x0005a2f2) cale_month_day_heading_pane_t1

0x4728,	// (0x0005a350) cale_month_day_heading_pane_t2

0x478d,	// (0x0005a3b5) cale_month_day_heading_pane_t3

0x47f2,	// (0x0005a41a) cale_month_day_heading_pane_t4

0x4857,	// (0x0005a47f) cale_month_day_heading_pane_t5

0x48bc,	// (0x0005a4e4) cale_month_day_heading_pane_t6

0x4921,	// (0x0005a549) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00064f01) cale_month_day_heading_pane_t

0xc336,	// (0x00061f5e) bg_cale_side_pane_cp01

0x4986,	// (0x0005a5ae) cale_month_week_pane_t1

0x499d,	// (0x0005a5c5) cale_month_week_pane_t2

0x49b4,	// (0x0005a5dc) cale_month_week_pane_t3

0x49cb,	// (0x0005a5f3) cale_month_week_pane_t4

0x49e2,	// (0x0005a60a) cale_month_week_pane_t5

0x49f9,	// (0x0005a621) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00064f10) cale_month_week_pane_t

0x4a10,	// (0x0005a638) cell_cale_month_pane_ParamLimits

0x4a10,	// (0x0005a638) cell_cale_month_pane

0xc73d,	// (0x00062365) cell_cale_month_pane_g1

0x4ae0,	// (0x0005a708) cell_cale_month_pane_t1_ParamLimits

0x4ae0,	// (0x0005a708) cell_cale_month_pane_t1

0xc344,	// (0x00061f6c) grid_highlight_pane_cp08

0xc203,	// (0x00061e2b) main_smil_g1

0x4afc,	// (0x0005a724) smil_status_pane

0xc749,	// (0x00062371) smil_text_pane

0x1a65,	// (0x0005768d) bg_popup_call3_rect_pane_g8

0x1a6d,	// (0x00057695) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x000651c9) bg_popup_call3_rect_pane_g

0x1cf5,	// (0x0005791d) smil_status_volume_pane_g1

0xc753,	// (0x0006237b) smil_status_pane_t1

0xc84b,	// (0x00062473) volume_smil_pane

0x024b,	// (0x00055e73) list_smil_text_pane

0x4b0f,	// (0x0005a737) scroll_pane_cp011

0x4b1a,	// (0x0005a742) smil_text_list_pane_t1_ParamLimits

0x4b1a,	// (0x0005a742) smil_text_list_pane_t1

0xc761,	// (0x00062389) aid_volume_smil_ParamLimits

0xc761,	// (0x00062389) aid_volume_smil

0xc203,	// (0x00061e2b) smil_volume_pane_g1

0xc203,	// (0x00061e2b) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00064f30) smil_volume_pane_g

0xc18a,	// (0x00061db2) listscroll_cale_day_pane

0x0255,	// (0x00055e7d) bg_cale_pane

0x026d,	// (0x00055e95) list_cale_pane

0x027e,	// (0x00055ea6) scroll_pane_cp09

0x028f,	// (0x00055eb7) cale_bg_pane_g1

0x0297,	// (0x00055ebf) cale_bg_pane_g2

0x029f,	// (0x00055ec7) cale_bg_pane_g3

0x02a7,	// (0x00055ecf) cale_bg_pane_g4

0x02af,	// (0x00055ed7) cale_bg_pane_g5

0x02b7,	// (0x00055edf) cale_bg_pane_g6

0x02bf,	// (0x00055ee7) cale_bg_pane_g7

0x02c7,	// (0x00055eef) cale_bg_pane_g8

0x02cf,	// (0x00055ef7) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00064f35) cale_bg_pane_g

0x3b83,	// (0x000597ab) list_cale_time_pane_ParamLimits

0x3b83,	// (0x000597ab) list_cale_time_pane

0x02d7,	// (0x00055eff) list_cale_time_pane_g1_ParamLimits

0x02d7,	// (0x00055eff) list_cale_time_pane_g1

0x02e3,	// (0x00055f0b) list_cale_time_pane_g2_ParamLimits

0x02e3,	// (0x00055f0b) list_cale_time_pane_g2

0x4b60,	// (0x0005a788) list_cale_time_pane_g3_ParamLimits

0x4b60,	// (0x0005a788) list_cale_time_pane_g3

0x4b6e,	// (0x0005a796) list_cale_time_pane_g4_ParamLimits

0x4b6e,	// (0x0005a796) list_cale_time_pane_g4

0x4b7c,	// (0x0005a7a4) list_cale_time_pane_g5_ParamLimits

0x4b7c,	// (0x0005a7a4) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00064f48) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00064f48) list_cale_time_pane_g

0x02fd,	// (0x00055f25) list_cale_time_pane_t1_ParamLimits

0x02fd,	// (0x00055f25) list_cale_time_pane_t1

0x0325,	// (0x00055f4d) list_cale_time_pane_t2_ParamLimits

0x0325,	// (0x00055f4d) list_cale_time_pane_t2

0x4eed,	// (0x0005ab15) aid_blid_cardinal_pane

0x4f2b,	// (0x0005ab53) compass_pane_t4

0x034d,	// (0x00055f75) list_cale_time_pane_t4_ParamLimits

0x034d,	// (0x00055f75) list_cale_time_pane_t4

0x4f39,	// (0x0005ab61) compass_pane_t5

0x4f47,	// (0x0005ab6f) compass_pane_t6

0x4f55,	// (0x0005ab7d) compass_pane_t7

0x0786,	// (0x000563ae) navi_pane_cc_t1

0x08db,	// (0x00056503) aid_phob_thumbnail_center_pane

0x568c,	// (0x0005b2b4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00064f55) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00064f55) list_cale_time_pane_t

0xba83,	// (0x000616ab) bg_popup_window_pane_cp02_ParamLimits

0xba83,	// (0x000616ab) bg_popup_window_pane_cp02

0x0375,	// (0x00055f9d) heading_pane_cp01_ParamLimits

0x0375,	// (0x00055f9d) heading_pane_cp01

0x0381,	// (0x00055fa9) loc_req_pane_ParamLimits

0x0381,	// (0x00055fa9) loc_req_pane

0x0391,	// (0x00055fb9) loc_type_pane_ParamLimits

0x0391,	// (0x00055fb9) loc_type_pane

0x03a3,	// (0x00055fcb) loc_type_pane_t1_ParamLimits

0x03a3,	// (0x00055fcb) loc_type_pane_t1

0x03b5,	// (0x00055fdd) loc_type_pane_t2_ParamLimits

0x03b5,	// (0x00055fdd) loc_type_pane_t2

0x03c7,	// (0x00055fef) loc_type_pane_t3_ParamLimits

0x03c7,	// (0x00055fef) loc_type_pane_t3

0x0002,

0xf334,	// (0x00064f5c) loc_type_pane_t_ParamLimits

0xf334,	// (0x00064f5c) loc_type_pane_t

0x03d9,	// (0x00056001) list_loc_req_pane

0x03e3,	// (0x0005600b) scroll_pane_cp012

0x4b8a,	// (0x0005a7b2) list_single_loc_request_popup_menu_pane_ParamLimits

0x4b8a,	// (0x0005a7b2) list_single_loc_request_popup_menu_pane

0x03ee,	// (0x00056016) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x03ee,	// (0x00056016) list_single_loc_request_popup_menu_pane_g1

0x03fa,	// (0x00056022) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x03fa,	// (0x00056022) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00064f63) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00064f63) list_single_loc_request_popup_menu_pane_g

0x0406,	// (0x0005602e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0406,	// (0x0005602e) list_single_loc_request_popup_menu_pane_t1

0xc087,	// (0x00061caf) bg_popup_window_pane_cp03_ParamLimits

0xc087,	// (0x00061caf) bg_popup_window_pane_cp03

0x20b0,	// (0x00057cd8) heading_loc_req_pane_ParamLimits

0x20b0,	// (0x00057cd8) heading_loc_req_pane

0x4b97,	// (0x0005a7bf) popup_dyc_status_message_window_g1_ParamLimits

0x4b97,	// (0x0005a7bf) popup_dyc_status_message_window_g1

0x4bab,	// (0x0005a7d3) popup_dyc_status_message_window_t1_ParamLimits

0x4bab,	// (0x0005a7d3) popup_dyc_status_message_window_t1

0x4bc0,	// (0x0005a7e8) popup_dyc_status_message_window_t2_ParamLimits

0x4bc0,	// (0x0005a7e8) popup_dyc_status_message_window_t2

0x4bd5,	// (0x0005a7fd) popup_dyc_status_message_window_t3_ParamLimits

0x4bd5,	// (0x0005a7fd) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00064f68) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00064f68) popup_dyc_status_message_window_t

0xbe2c,	// (0x00061a54) bg_heading_pane_cp01

0x041c,	// (0x00056044) heading_loc_req_pane_g1

0x0424,	// (0x0005604c) heading_loc_req_pane_g2

0x042c,	// (0x00056054) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00064f6f) heading_loc_req_pane_g

0x0434,	// (0x0005605c) heading_loc_req_pane_t1

0x0443,	// (0x0005606b) bg_popup_sub_pane_cp01_ParamLimits

0x0443,	// (0x0005606b) bg_popup_sub_pane_cp01

0x0451,	// (0x00056079) popup_cale_events_window_g1_ParamLimits

0x0451,	// (0x00056079) popup_cale_events_window_g1

0x0471,	// (0x00056099) popup_cale_events_window_g2_ParamLimits

0x0471,	// (0x00056099) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00064fa3) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00064fa3) popup_cale_events_window_g

0x0491,	// (0x000560b9) popup_cale_events_window_t1_ParamLimits

0x0491,	// (0x000560b9) popup_cale_events_window_t1

0x04a3,	// (0x000560cb) popup_cale_events_window_t2_ParamLimits

0x04a3,	// (0x000560cb) popup_cale_events_window_t2

0x04e1,	// (0x00056109) popup_cale_events_window_t3_ParamLimits

0x04e1,	// (0x00056109) popup_cale_events_window_t3

0x051b,	// (0x00056143) popup_cale_events_window_t4_ParamLimits

0x051b,	// (0x00056143) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00064fa8) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00064fa8) popup_cale_events_window_t

0x4cd8,	// (0x0005a900) call_type_pane

0x4ce8,	// (0x0005a910) popup_call_status_window_g1

0x4cfc,	// (0x0005a924) popup_call_status_window_g2

0x4d10,	// (0x0005a938) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00064fb1) popup_call_status_window_g

0x055f,	// (0x00056187) call_type_pane_g1

0x0568,	// (0x00056190) call_type_pane_g2

0x0001,

0xf390,	// (0x00064fb8) call_type_pane_g

0xbe2c,	// (0x00061a54) bg_popup_sub_pane_cp02

0x0571,	// (0x00056199) listscroll_popup_wml_pane

0x0579,	// (0x000561a1) list_wml_pane

0x0583,	// (0x000561ab) scroll_pane_cp013

0x058e,	// (0x000561b6) list_single_graphic_popup_wml_pane_ParamLimits

0x058e,	// (0x000561b6) list_single_graphic_popup_wml_pane

0xc203,	// (0x00061e2b) list_single_graphic_popup_wml_pane_g1

0x05a2,	// (0x000561ca) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00064fbd) list_single_graphic_popup_wml_pane_g

0x05aa,	// (0x000561d2) list_single_graphic_popup_wml_pane_t1

0x05c0,	// (0x000561e8) aid_call_pane

0xc07f,	// (0x00061ca7) popup_clock_analogue_window_g1

0xc07f,	// (0x00061ca7) popup_clock_analogue_window_g2

0xc783,	// (0x000623ab) popup_clock_analogue_window_g3

0xc783,	// (0x000623ab) popup_clock_analogue_window_g4

0xc203,	// (0x00061e2b) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00064fc2) popup_clock_analogue_window_g

0xc78b,	// (0x000623b3) popup_clock_analogue_window_t1

0xc799,	// (0x000623c1) clock_digital_number_pane_ParamLimits

0xc799,	// (0x000623c1) clock_digital_number_pane

0xc7a5,	// (0x000623cd) clock_digital_number_pane_cp02_ParamLimits

0xc7a5,	// (0x000623cd) clock_digital_number_pane_cp02

0xc7b1,	// (0x000623d9) clock_digital_number_pane_cp03_ParamLimits

0xc7b1,	// (0x000623d9) clock_digital_number_pane_cp03

0xc7bd,	// (0x000623e5) clock_digital_number_pane_cp04_ParamLimits

0xc7bd,	// (0x000623e5) clock_digital_number_pane_cp04

0xc7cd,	// (0x000623f5) clock_digital_separator_pane_ParamLimits

0xc7cd,	// (0x000623f5) clock_digital_separator_pane

0xc7d9,	// (0x00062401) popup_clock_digital_window_t1

0xc203,	// (0x00061e2b) clock_digital_number_pane_g1

0xc203,	// (0x00061e2b) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00064f30) clock_digital_number_pane_g

0xc203,	// (0x00061e2b) clock_digital_separator_pane_g1

0xc203,	// (0x00061e2b) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00064f30) clock_digital_separator_pane_g

0xbe2c,	// (0x00061a54) bg_popup_window_pane_cp04

0x05c8,	// (0x000561f0) heading_pane_cp03

0x05d0,	// (0x000561f8) listscroll_popup_gms_pane

0x05d8,	// (0x00056200) grid_large_graphic_popup_pane

0x05e2,	// (0x0005620a) listscroll_popup_gms_pane_g1

0x05ea,	// (0x00056212) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00064fcd) listscroll_popup_gms_pane_g

0xc5ac,	// (0x000621d4) scroll_pane_cp014

0x4d1f,	// (0x0005a947) cell_large_graphic_popup_pane_ParamLimits

0x4d1f,	// (0x0005a947) cell_large_graphic_popup_pane

0x4d37,	// (0x0005a95f) cell_large_graphic_popup_pane_g1_ParamLimits

0x4d37,	// (0x0005a95f) cell_large_graphic_popup_pane_g1

0x05f2,	// (0x0005621a) cell_large_graphic_popup_pane_g2_ParamLimits

0x05f2,	// (0x0005621a) cell_large_graphic_popup_pane_g2

0x05fe,	// (0x00056226) cell_large_graphic_popup_pane_g3_ParamLimits

0x05fe,	// (0x00056226) cell_large_graphic_popup_pane_g3

0x060b,	// (0x00056233) cell_large_graphic_popup_pane_g4_ParamLimits

0x060b,	// (0x00056233) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00064fd2) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00064fd2) cell_large_graphic_popup_pane_g

0x061b,	// (0x00056243) grid_highlight_pane_cp010

0xc203,	// (0x00061e2b) bg_popup_call_pane_g1

0x0625,	// (0x0005624d) list_single_graphic_popup_conf_pane_ParamLimits

0x0625,	// (0x0005624d) list_single_graphic_popup_conf_pane

0x0638,	// (0x00056260) list_highlight_pane_cp01

0x0641,	// (0x00056269) list_single_graphic_popup_conf_pane_g1

0x0649,	// (0x00056271) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00064fdb) list_single_graphic_popup_conf_pane_g

0x0651,	// (0x00056279) list_single_graphic_popup_conf_pane_t1

0x065f,	// (0x00056287) linegrid_cams_pane_g1

0x4d43,	// (0x0005a96b) linegrid_cams_pane_g2

0xc377,	// (0x00061f9f) linegrid_cams_pane_g3

0x0668,	// (0x00056290) linegrid_cams_pane_g4

0x4d4c,	// (0x0005a974) linegrid_cams_pane_g5

0x4d55,	// (0x0005a97d) linegrid_cams_pane_g6

0xc380,	// (0x00061fa8) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00064fe0) linegrid_cams_pane_g

0x0671,	// (0x00056299) popup_clock_analogue_window

0x0671,	// (0x00056299) popup_clock_digital_window

0xbe2c,	// (0x00061a54) popup_phob_thumbnail_window

0xc203,	// (0x00061e2b) call_video_uplink_pane_g1

0x067a,	// (0x000562a2) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00064fef) call_video_uplink_pane_g

0x0682,	// (0x000562aa) video_uplink_pane

0x068a,	// (0x000562b2) mce_image_pane_g1

0x4d60,	// (0x0005a988) mce_image_pane_g2

0x4d6a,	// (0x0005a992) mce_image_pane_g3

0x4d72,	// (0x0005a99a) mce_image_pane_g4

0x4d7a,	// (0x0005a9a2) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00064ff4) mce_image_pane_g

0x0694,	// (0x000562bc) control_top_pane_stacon_cp01_ParamLimits

0x0694,	// (0x000562bc) control_top_pane_stacon_cp01

0x06a8,	// (0x000562d0) uni_indicator_pane_stacon_cp01_ParamLimits

0x06a8,	// (0x000562d0) uni_indicator_pane_stacon_cp01

0x06b9,	// (0x000562e1) bg_popup_sub_pane_cp03

0x4d82,	// (0x0005a9aa) chi_dic_find_pane

0x4d8a,	// (0x0005a9b2) listscroll_chi_dic_pane

0x4d93,	// (0x0005a9bb) main_pane_chidic_g1

0x06c3,	// (0x000562eb) chi_dic_find_pane_t1

0x06d1,	// (0x000562f9) find_chidic_pane

0x06da,	// (0x00056302) chi_dic_list_pane_ParamLimits

0x06da,	// (0x00056302) chi_dic_list_pane

0x06eb,	// (0x00056313) scroll_pane_cp020

0x06f3,	// (0x0005631b) find_chidic_pane_t1

0xbe2c,	// (0x00061a54) input_focus_pane_cp06

0x4da6,	// (0x0005a9ce) list_chi_dic_pane_ParamLimits

0x4da6,	// (0x0005a9ce) list_chi_dic_pane

0x4db8,	// (0x0005a9e0) list_chi_dic_pane_t1_ParamLimits

0x4db8,	// (0x0005a9e0) list_chi_dic_pane_t1

0xbe2c,	// (0x00061a54) list_highlight_pane_cp020

0x0702,	// (0x0005632a) bg_cale_heading_pane_g1

0x4dcb,	// (0x0005a9f3) bg_cale_heading_pane_g2

0x4dd3,	// (0x0005a9fb) bg_cale_heading_pane_g3

0x4ddb,	// (0x0005aa03) bg_cale_heading_pane_g4

0x4de5,	// (0x0005aa0d) bg_cale_heading_pane_g5

0x4def,	// (0x0005aa17) bg_cale_heading_pane_g6

0x4df7,	// (0x0005aa1f) bg_cale_heading_pane_g7

0x4dff,	// (0x0005aa27) bg_cale_heading_pane_g8

0x4e09,	// (0x0005aa31) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00064fff) bg_cale_heading_pane_g

0x0702,	// (0x0005632a) bg_cale_side_pane_g1

0x4e13,	// (0x0005aa3b) bg_cale_side_pane_g2

0x4e1b,	// (0x0005aa43) bg_cale_side_pane_g3

0x4e23,	// (0x0005aa4b) bg_cale_side_pane_g4

0x4e2b,	// (0x0005aa53) bg_cale_side_pane_g5

0x4e33,	// (0x0005aa5b) bg_cale_side_pane_g6

0x4e3b,	// (0x0005aa63) bg_cale_side_pane_g7

0x4e43,	// (0x0005aa6b) bg_cale_side_pane_g8

0x4e4b,	// (0x0005aa73) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00065012) bg_cale_side_pane_g

0x4e53,	// (0x0005aa7b) popup_call_status_window_ParamLimits

0x4e53,	// (0x0005aa7b) popup_call_status_window

0x070a,	// (0x00056332) stacon_top_pane

0x0712,	// (0x0005633a) status_pane_ParamLimits

0x0712,	// (0x0005633a) status_pane

0x0727,	// (0x0005634f) status_small_pane

0x072f,	// (0x00056357) control_pane

0xbe2c,	// (0x00061a54) stacon_bottom_pane

0x0737,	// (0x0005635f) list_single_mce_smart_pane_t1_ParamLimits

0x0737,	// (0x0005635f) list_single_mce_smart_pane_t1

0x074a,	// (0x00056372) list_single_mce_smart_pane_t2_ParamLimits

0x074a,	// (0x00056372) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00065025) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00065025) list_single_mce_smart_pane_t

0x4e9c,	// (0x0005aac4) compass_pane

0x4ea5,	// (0x0005aacd) main_location2_pane_t1

0x4eb7,	// (0x0005aadf) main_location2_pane_t2

0x4ec9,	// (0x0005aaf1) main_location2_pane_t3

0x0003,

0xf402,	// (0x0006502a) main_location2_pane_t

0x0769,	// (0x00056391) compass_pane_g1_ParamLimits

0x0769,	// (0x00056391) compass_pane_g1

0x4f0d,	// (0x0005ab35) compass_pane_t1

0x4f1c,	// (0x0005ab44) compass_pane_t2

0x0005,

0xf40b,	// (0x00065033) compass_pane_t

0x4f63,	// (0x0005ab8b) text_secondary_cp61

0x077d,	// (0x000563a5) navi_pane_cams_g5

0x07a0,	// (0x000563c8) navi_pane_im_t1

0x07ae,	// (0x000563d6) navi_pane_mp_g1_ParamLimits

0x07ae,	// (0x000563d6) navi_pane_mp_g1

0x07c2,	// (0x000563ea) navi_pane_mp_g2_ParamLimits

0x07c2,	// (0x000563ea) navi_pane_mp_g2

0x07ce,	// (0x000563f6) navi_pane_mp_g3_ParamLimits

0x07ce,	// (0x000563f6) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00065047) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00065047) navi_pane_mp_g

0x07da,	// (0x00056402) navi_pane_mp_t1

0x07e8,	// (0x00056410) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0006504e) navi_pane_mp_t

0x0824,	// (0x0005644c) navi_pane_vt_g1

0x07da,	// (0x00056402) navi_pane_vt_t1

0x082c,	// (0x00056454) navi_slider_pane

0x0834,	// (0x0005645c) zooming_pane

0x083c,	// (0x00056464) navi_slider_pane_g1

0xc7f6,	// (0x0006241e) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00065055) navi_slider_pane_g

0x0860,	// (0x00056488) aid_levels_zoom

0x0868,	// (0x00056490) zooming_pane_g1

0x0870,	// (0x00056498) zooming_pane_g2

0x0870,	// (0x00056498) zooming_pane_g3

0x0002,

0xf43c,	// (0x00065064) zooming_pane_g

0x0878,	// (0x000564a0) level_10_zoom

0x0881,	// (0x000564a9) level_11_zoom

0x088a,	// (0x000564b2) level_1_zoom

0x0893,	// (0x000564bb) level_2_zoom

0x089c,	// (0x000564c4) level_3_zoom

0x08a5,	// (0x000564cd) level_4_zoom

0x08ae,	// (0x000564d6) level_5_zoom

0x08b7,	// (0x000564df) level_6_zoom

0x08c0,	// (0x000564e8) level_7_zoom

0x08c9,	// (0x000564f1) level_8_zoom

0x08d2,	// (0x000564fa) level_9_zoom

0x08e3,	// (0x0005650b) popup_phob_thumbnail_window_g1

0x08eb,	// (0x00056513) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0006506b) popup_phob_thumbnail_window_g

0x1bc7,	// (0x000577ef) level_1_location

0x1bcf,	// (0x000577f7) level_2_location

0x1bd7,	// (0x000577ff) level_3_location

0x1bdf,	// (0x00057807) level_4_location

0x0834,	// (0x0005645c) level_5_location

0x5088,	// (0x0005acb0) mce_icon_pane_g1

0x5090,	// (0x0005acb8) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00065070) mce_icon_pane_g

0x5098,	// (0x0005acc0) main_mup_pane_g1_ParamLimits

0x5098,	// (0x0005acc0) main_mup_pane_g1

0x50ae,	// (0x0005acd6) main_mup_pane_g2_ParamLimits

0x50ae,	// (0x0005acd6) main_mup_pane_g2

0x50c6,	// (0x0005acee) main_mup_pane_g3_ParamLimits

0x50c6,	// (0x0005acee) main_mup_pane_g3

0x50de,	// (0x0005ad06) main_mup_pane_g4_ParamLimits

0x50de,	// (0x0005ad06) main_mup_pane_g4

0x50f6,	// (0x0005ad1e) main_mup_pane_g5_ParamLimits

0x50f6,	// (0x0005ad1e) main_mup_pane_g5

0x5112,	// (0x0005ad3a) main_mup_pane_g6_ParamLimits

0x5112,	// (0x0005ad3a) main_mup_pane_g6

0x512a,	// (0x0005ad52) main_mup_pane_g7_ParamLimits

0x512a,	// (0x0005ad52) main_mup_pane_g7

0x5142,	// (0x0005ad6a) main_mup_pane_g8_ParamLimits

0x5142,	// (0x0005ad6a) main_mup_pane_g8

0x515c,	// (0x0005ad84) main_mup_pane_g9_ParamLimits

0x515c,	// (0x0005ad84) main_mup_pane_g9

0x5176,	// (0x0005ad9e) main_mup_pane_g10_ParamLimits

0x5176,	// (0x0005ad9e) main_mup_pane_g10

0x5190,	// (0x0005adb8) main_mup_pane_g11_ParamLimits

0x5190,	// (0x0005adb8) main_mup_pane_g11

0x51a4,	// (0x0005adcc) main_mup_pane_g12_ParamLimits

0x51a4,	// (0x0005adcc) main_mup_pane_g12

0x51ba,	// (0x0005ade2) main_mup_pane_g13_ParamLimits

0x51ba,	// (0x0005ade2) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00065075) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00065075) main_mup_pane_g

0x51ce,	// (0x0005adf6) main_mup_pane_t1_ParamLimits

0x51ce,	// (0x0005adf6) main_mup_pane_t1

0x51e8,	// (0x0005ae10) main_mup_pane_t2_ParamLimits

0x51e8,	// (0x0005ae10) main_mup_pane_t2

0x5200,	// (0x0005ae28) main_mup_pane_t3_ParamLimits

0x5200,	// (0x0005ae28) main_mup_pane_t3

0x5218,	// (0x0005ae40) main_mup_pane_t4_ParamLimits

0x5218,	// (0x0005ae40) main_mup_pane_t4

0x5236,	// (0x0005ae5e) main_mup_pane_t5_ParamLimits

0x5236,	// (0x0005ae5e) main_mup_pane_t5

0x524b,	// (0x0005ae73) main_mup_pane_t6_ParamLimits

0x524b,	// (0x0005ae73) main_mup_pane_t6

0x0005,

0xf468,	// (0x00065090) main_mup_pane_t_ParamLimits

0xf468,	// (0x00065090) main_mup_pane_t

0x525d,	// (0x0005ae85) mup_progress_pane_ParamLimits

0x525d,	// (0x0005ae85) mup_progress_pane

0x5269,	// (0x0005ae91) mup_visualizer_pane_ParamLimits

0x5269,	// (0x0005ae91) mup_visualizer_pane

0x5299,	// (0x0005aec1) mup_volume_pane_ParamLimits

0x5299,	// (0x0005aec1) mup_volume_pane

0x0551,	// (0x00056179) mup_visualizer_pane_g1_ParamLimits

0x0551,	// (0x00056179) mup_visualizer_pane_g1

0x0551,	// (0x00056179) mup_visualizer_pane_g2_ParamLimits

0x0551,	// (0x00056179) mup_visualizer_pane_g2

0x0769,	// (0x00056391) mup_visualizer_pane_g3_ParamLimits

0x0769,	// (0x00056391) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0006509d) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0006509d) mup_visualizer_pane_g

0xc203,	// (0x00061e2b) mup_volume_pane_g1

0x08fb,	// (0x00056523) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x000650a4) mup_volume_pane_g

0xc203,	// (0x00061e2b) mup_progress_pane_g1

0x0904,	// (0x0005652c) mup_progress_pane_g2

0x090d,	// (0x00056535) mup_progress_pane_g3

0x0002,

0xf481,	// (0x000650a9) mup_progress_pane_g

0xbe2c,	// (0x00061a54) bg_popup_window_pane_cp05

0x0916,	// (0x0005653e) heading_pane_cp02_ParamLimits

0x0916,	// (0x0005653e) heading_pane_cp02

0x0930,	// (0x00056558) list_popup_blid_pane

0x0938,	// (0x00056560) list_blid_sat_info_pane_ParamLimits

0x0938,	// (0x00056560) list_blid_sat_info_pane

0x094b,	// (0x00056573) list_blid_sat_info_pane_g1

0x0953,	// (0x0005657b) list_blid_sat_info_pane_t1

0x53af,	// (0x0005afd7) mup_equalizer_pane_ParamLimits

0x53af,	// (0x0005afd7) mup_equalizer_pane

0x53c8,	// (0x0005aff0) mup_equalizer_pane_cp1_ParamLimits

0x53c8,	// (0x0005aff0) mup_equalizer_pane_cp1

0x53e5,	// (0x0005b00d) mup_equalizer_pane_cp2_ParamLimits

0x53e5,	// (0x0005b00d) mup_equalizer_pane_cp2

0x5402,	// (0x0005b02a) mup_equalizer_pane_cp3_ParamLimits

0x5402,	// (0x0005b02a) mup_equalizer_pane_cp3

0x5423,	// (0x0005b04b) mup_equalizer_pane_cp4_ParamLimits

0x5423,	// (0x0005b04b) mup_equalizer_pane_cp4

0x5444,	// (0x0005b06c) mup_equalizer_pane_cp5

0x5458,	// (0x0005b080) mup_equalizer_pane_cp6

0x546c,	// (0x0005b094) mup_equalizer_pane_cp7

0x1ae5,	// (0x0005770d) bg_popup_call_poc_act_pane_g9

0x1aed,	// (0x00057715) bg_popup_call_poc_act_pane_g10

0x1af5,	// (0x0005771d) bg_popup_call_poc_act_pane_g11

0x000a,

0xc087,	// (0x00061caf) mup_scale_pane

0xc203,	// (0x00061e2b) mup_scale_pane_g1

0x0961,	// (0x00056589) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x000650c5) mup_scale_pane_g

0x0985,	// (0x000565ad) msg_data_pane

0x098d,	// (0x000565b5) scroll_pane_cp017

0x5492,	// (0x0005b0ba) bg_list_pane_cp04_ParamLimits

0x5492,	// (0x0005b0ba) bg_list_pane_cp04

0x0995,	// (0x000565bd) msg_data_pane_g1

0x54b2,	// (0x0005b0da) msg_data_pane_g2

0x54bc,	// (0x0005b0e4) msg_data_pane_g3

0x54c4,	// (0x0005b0ec) msg_data_pane_g4

0x54cc,	// (0x0005b0f4) msg_data_pane_g5

0x54d4,	// (0x0005b0fc) msg_data_pane_g6

0x54dc,	// (0x0005b104) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x000650d4) msg_data_pane_g

0x54e4,	// (0x0005b10c) msg_text_pane_ParamLimits

0x54e4,	// (0x0005b10c) msg_text_pane

0x5509,	// (0x0005b131) qrid_highlight_pane_cp011_ParamLimits

0x5509,	// (0x0005b131) qrid_highlight_pane_cp011

0xbe2c,	// (0x00061a54) msg_body_pane

0xbe2c,	// (0x00061a54) msg_header_pane

0x09a6,	// (0x000565ce) input_focus_pane_cp07

0x552d,	// (0x0005b155) msg_header_pane_t1_ParamLimits

0x552d,	// (0x0005b155) msg_header_pane_t1

0x5541,	// (0x0005b169) msg_header_pane_t2_ParamLimits

0x5541,	// (0x0005b169) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x000650e8) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x000650e8) msg_header_pane_t

0x09bb,	// (0x000565e3) msg_body_pane_g1

0x5553,	// (0x0005b17b) msg_body_pane_t1_ParamLimits

0x5553,	// (0x0005b17b) msg_body_pane_t1

0x5584,	// (0x0005b1ac) msg_body_pane_t2_ParamLimits

0x5584,	// (0x0005b1ac) msg_body_pane_t2

0x5596,	// (0x0005b1be) msg_body_pane_t3_ParamLimits

0x5596,	// (0x0005b1be) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x000650ed) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x000650ed) msg_body_pane_t

0x55e2,	// (0x0005b20a) main_viewer_pane_g1_ParamLimits

0x55e2,	// (0x0005b20a) main_viewer_pane_g1

0x55f0,	// (0x0005b218) main_viewer_pane_g2_ParamLimits

0x55f0,	// (0x0005b218) main_viewer_pane_g2

0x55fe,	// (0x0005b226) main_viewer_pane_g3_ParamLimits

0x55fe,	// (0x0005b226) main_viewer_pane_g3

0x560d,	// (0x0005b235) main_viewer_pane_g4_ParamLimits

0x560d,	// (0x0005b235) main_viewer_pane_g4

0xc820,	// (0x00062448) main_viewer_pane_g5_ParamLimits

0xc820,	// (0x00062448) main_viewer_pane_g5

0xc820,	// (0x00062448) main_viewer_pane_g7_ParamLimits

0xc820,	// (0x00062448) main_viewer_pane_g7

0x03ee,	// (0x00056016) main_viewer_pane_g8_ParamLimits

0x03ee,	// (0x00056016) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x000650fd) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x000650fd) main_viewer_pane_g

0x09c3,	// (0x000565eb) viewer_content_pane_ParamLimits

0x09c3,	// (0x000565eb) viewer_content_pane

0x5649,	// (0x0005b271) main_postcard_pane_g1_ParamLimits

0x5649,	// (0x0005b271) main_postcard_pane_g1

0x565f,	// (0x0005b287) main_postcard_pane_g2_ParamLimits

0x565f,	// (0x0005b287) main_postcard_pane_g2

0x5675,	// (0x0005b29d) main_postcard_pane_g3_ParamLimits

0x5675,	// (0x0005b29d) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0006510e) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0006510e) main_postcard_pane_g

0x568c,	// (0x0005b2b4) main_postcard_pane_g4

0x1d08,	// (0x00057930) smil_status_volume_pane_g2

0x56cf,	// (0x0005b2f7) postcard_pane_ParamLimits

0x56cf,	// (0x0005b2f7) postcard_pane

0x09df,	// (0x00056607) postcard_pane_g1_ParamLimits

0x09df,	// (0x00056607) postcard_pane_g1

0x5711,	// (0x0005b339) postcard_pane_g2_ParamLimits

0x5711,	// (0x0005b339) postcard_pane_g2

0x571d,	// (0x0005b345) postcard_pane_g3_ParamLimits

0x571d,	// (0x0005b345) postcard_pane_g3

0x09d1,	// (0x000565f9) postcard_pane_g4_ParamLimits

0x09d1,	// (0x000565f9) postcard_pane_g4

0x5729,	// (0x0005b351) postcard_pane_g5_ParamLimits

0x5729,	// (0x0005b351) postcard_pane_g5

0x573e,	// (0x0005b366) postcard_pane_g6_ParamLimits

0x573e,	// (0x0005b366) postcard_pane_g6

0x09df,	// (0x00056607) postcard_pane_g7_ParamLimits

0x09df,	// (0x00056607) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0006511b) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0006511b) postcard_pane_g

0x5752,	// (0x0005b37a) main_mp2_pane_g1_ParamLimits

0x5752,	// (0x0005b37a) main_mp2_pane_g1

0x575e,	// (0x0005b386) main_mp2_pane_g2_ParamLimits

0x575e,	// (0x0005b386) main_mp2_pane_g2

0x576a,	// (0x0005b392) main_mp2_pane_g3_ParamLimits

0x576a,	// (0x0005b392) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0006512a) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0006512a) main_mp2_pane_g

0x5776,	// (0x0005b39e) main_mp2_pane_t1_ParamLimits

0x5776,	// (0x0005b39e) main_mp2_pane_t1

0x578b,	// (0x0005b3b3) main_mp2_pane_t2_ParamLimits

0x578b,	// (0x0005b3b3) main_mp2_pane_t2

0x579d,	// (0x0005b3c5) main_mp2_pane_t3_ParamLimits

0x579d,	// (0x0005b3c5) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00065131) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00065131) main_mp2_pane_t

0x09ed,	// (0x00056615) pec_content_pane_ParamLimits

0x09ed,	// (0x00056615) pec_content_pane

0xc5ac,	// (0x000621d4) scroll_pane_cp015

0x09ff,	// (0x00056627) pec_attribute_pane_ParamLimits

0x09ff,	// (0x00056627) pec_attribute_pane

0x57af,	// (0x0005b3d7) pec_content_pane_g1_ParamLimits

0x57af,	// (0x0005b3d7) pec_content_pane_g1

0x0a0f,	// (0x00056637) pec_content_pane_t1_ParamLimits

0x0a0f,	// (0x00056637) pec_content_pane_t1

0x0a21,	// (0x00056649) pec_content_pane_t2_ParamLimits

0x0a21,	// (0x00056649) pec_content_pane_t2

0x0001,

0xf510,	// (0x00065138) pec_content_pane_t_ParamLimits

0xf510,	// (0x00065138) pec_content_pane_t

0x57bb,	// (0x0005b3e3) list_single_graphic_pane_cp01_ParamLimits

0x57bb,	// (0x0005b3e3) list_single_graphic_pane_cp01

0xc087,	// (0x00061caf) bg_popup_sub_pane_cp04

0x0a33,	// (0x0005665b) popup_mup_playback_window_g1

0x0a3f,	// (0x00056667) popup_mup_playback_window_t1

0x0a54,	// (0x0005667c) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0006513d) popup_mup_playback_window_t

0x0a8b,	// (0x000566b3) main_image_pane_g1_ParamLimits

0x0a8b,	// (0x000566b3) main_image_pane_g1

0x0ace,	// (0x000566f6) scroll_pane_cp018_ParamLimits

0x0ace,	// (0x000566f6) scroll_pane_cp018

0x0ae6,	// (0x0005670e) scroll_pane_cp016_ParamLimits

0x0ae6,	// (0x0005670e) scroll_pane_cp016

0x5888,	// (0x0005b4b0) smil2_image_pane_ParamLimits

0x5888,	// (0x0005b4b0) smil2_image_pane

0x58b8,	// (0x0005b4e0) smil2_root_pane_ParamLimits

0x58b8,	// (0x0005b4e0) smil2_root_pane

0x58f0,	// (0x0005b518) smil2_text_pane_ParamLimits

0x58f0,	// (0x0005b518) smil2_text_pane

0xbe2c,	// (0x00061a54) bg_list_pane_cp06

0x0b22,	// (0x0005674a) grid_radio_pane

0xbe2c,	// (0x00061a54) bg_popup_window_pane_cp06

0x0b2a,	// (0x00056752) main_fmradio_pane_t1

0x05c8,	// (0x000561f0) heading_pane_cp04

0x0b38,	// (0x00056760) main_fmradio_pane_t2

0x1afd,	// (0x00057725) popup_cale_lunar_info_window_g1

0x0b46,	// (0x0005676e) main_fmradio_pane_t3

0x1b05,	// (0x0005772d) popup_cale_lunar_info_window_g2

0x0b54,	// (0x0005677c) main_fmradio_pane_t4

0x0001,

0x0b62,	// (0x0005678a) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x00065218) popup_cale_lunar_info_window_g

0xf52a,	// (0x00065152) main_fmradio_pane_t

0x0b70,	// (0x00056798) wait_bar_pane_cp03

0x0b78,	// (0x000567a0) cell_fmradio_pane_ParamLimits

0x0b78,	// (0x000567a0) cell_fmradio_pane

0x09df,	// (0x00056607) cell_fmradio_pane_g1_ParamLimits

0x09df,	// (0x00056607) cell_fmradio_pane_g1

0xbe2c,	// (0x00061a54) grid_highlight_pane_cp011

0x0b8b,	// (0x000567b3) poc_content_pane_ParamLimits

0x0b8b,	// (0x000567b3) poc_content_pane

0x0b9d,	// (0x000567c5) scroll_pane_cp019

0x5970,	// (0x0005b598) popup_call_poc_act_window_ParamLimits

0x5970,	// (0x0005b598) popup_call_poc_act_window

0x5994,	// (0x0005b5bc) popup_call_poc_inact_window_ParamLimits

0x5994,	// (0x0005b5bc) popup_call_poc_inact_window

0xf5c7,	// (0x000651ef) bg_popup_call_poc_act_pane_g

0x1a75,	// (0x0005769d) bg_popup_call_poc_inact_pane_g1

0x1a7d,	// (0x000576a5) bg_popup_call_poc_inact_pane_g2

0x0ba5,	// (0x000567cd) popup_call_poc_act_window_g2

0x1a85,	// (0x000576ad) bg_popup_call_poc_inact_pane_g3

0x1a8d,	// (0x000576b5) bg_popup_call_poc_inact_pane_g4

0x1a95,	// (0x000576bd) bg_popup_call_poc_inact_pane_g5

0x0bad,	// (0x000567d5) popup_call_poc_act_window_t1_ParamLimits

0x0bad,	// (0x000567d5) popup_call_poc_act_window_t1

0x0bd5,	// (0x000567fd) popup_call_poc_act_window_t2_ParamLimits

0x0bd5,	// (0x000567fd) popup_call_poc_act_window_t2

0x0bfd,	// (0x00056825) popup_call_poc_act_window_t3_ParamLimits

0x0bfd,	// (0x00056825) popup_call_poc_act_window_t3

0x0c25,	// (0x0005684d) popup_call_poc_act_window_t4_ParamLimits

0x0c25,	// (0x0005684d) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0006515d) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0006515d) popup_call_poc_act_window_t

0x1a9d,	// (0x000576c5) bg_popup_call_poc_inact_pane_g6

0x1aa5,	// (0x000576cd) bg_popup_call_poc_inact_pane_g7

0x1aad,	// (0x000576d5) bg_popup_call_poc_inact_pane_g8

0x0c37,	// (0x0005685f) popup_call_poc_inact_window_g2

0x1ab5,	// (0x000576dd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x000651dc) bg_popup_call_poc_inact_pane_g

0x0c3f,	// (0x00056867) popup_call_poc_inact_window_t1_ParamLimits

0x0c3f,	// (0x00056867) popup_call_poc_inact_window_t1

0x0c54,	// (0x0005687c) popup_call_poc_inact_window_t2_ParamLimits

0x0c54,	// (0x0005687c) popup_call_poc_inact_window_t2

0x0c69,	// (0x00056891) popup_call_poc_inact_window_t3_ParamLimits

0x0c69,	// (0x00056891) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00065166) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00065166) popup_call_poc_inact_window_t

0x1c7b,	// (0x000578a3) context_pane_ParamLimits

0x61c7,	// (0x0005bdef) signal_pane_ParamLimits

0x0834,	// (0x0005645c) main_call2_pane

0x1c69,	// (0x00057891) popup_phob_thumbnail2_window_ParamLimits

0x1c69,	// (0x00057891) popup_phob_thumbnail2_window

0xc808,	// (0x00062430) aid_hotspot_pointer_arrow_pane

0xc810,	// (0x00062438) aid_hotspot_pointer_hand_pane

0x5cdd,	// (0x0005b905) phob_pre_status_pane_g5

0x3bae,	// (0x000597d6) cams_zoom_pane_ParamLimits

0x3bbd,	// (0x000597e5) image_vga_pane_ParamLimits

0x3bd7,	// (0x000597ff) main_camera_pane_g1_ParamLimits

0x3be9,	// (0x00059811) main_camera_pane_g2_ParamLimits

0x3bf9,	// (0x00059821) main_camera_pane_g3_ParamLimits

0x3c09,	// (0x00059831) main_camera_pane_g4_ParamLimits

0x3c19,	// (0x00059841) main_camera_pane_g5_ParamLimits

0x3c29,	// (0x00059851) main_camera_pane_g6_ParamLimits

0x3c3b,	// (0x00059863) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00064e65) main_camera_pane_g_ParamLimits

0x3c4b,	// (0x00059873) main_camera_pane_t1_ParamLimits

0x3c61,	// (0x00059889) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00064e76) main_camera_pane_t_ParamLimits

0xc087,	// (0x00061caf) bg_popup_preview_window_pane_cp01_ParamLimits

0xc087,	// (0x00061caf) bg_popup_preview_window_pane_cp01

0x0c7e,	// (0x000568a6) popup_phob_thumbnail2_window_g1_ParamLimits

0x0c7e,	// (0x000568a6) popup_phob_thumbnail2_window_g1

0xbe2c,	// (0x00061a54) call2_cli_visual_pane

0x59c8,	// (0x0005b5f0) popup_call2_audio_conf_window_ParamLimits

0x59c8,	// (0x0005b5f0) popup_call2_audio_conf_window

0x59e8,	// (0x0005b610) popup_call2_audio_first_window_ParamLimits

0x59e8,	// (0x0005b610) popup_call2_audio_first_window

0x5a7e,	// (0x0005b6a6) popup_call2_audio_in_window_ParamLimits

0x5a7e,	// (0x0005b6a6) popup_call2_audio_in_window

0x5ac6,	// (0x0005b6ee) popup_call2_audio_out_window_ParamLimits

0x5ac6,	// (0x0005b6ee) popup_call2_audio_out_window

0x5b30,	// (0x0005b758) popup_call2_audio_second_window_ParamLimits

0x5b30,	// (0x0005b758) popup_call2_audio_second_window

0x5b96,	// (0x0005b7be) popup_call2_audio_wait_window_ParamLimits

0x5b96,	// (0x0005b7be) popup_call2_audio_wait_window

0xbe2c,	// (0x00061a54) bg_popup_call2_act_pane_cp03

0xc069,	// (0x00061c91) list_conf_pane_cp

0x0c8a,	// (0x000568b2) popup_call2_audio_conf_window_t1

0x0625,	// (0x0005624d) list_single_graphic_popup_conf2_pane_ParamLimits

0x0625,	// (0x0005624d) list_single_graphic_popup_conf2_pane

0x0638,	// (0x00056260) list_highlight_pane_cp04

0x0c98,	// (0x000568c0) list_single_graphic_popup_conf2_pane_g1

0x0649,	// (0x00056271) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0006516d) list_single_graphic_popup_conf2_pane_g

0x0ca2,	// (0x000568ca) list_single_graphic_popup_conf2_pane_t1

0x0cb0,	// (0x000568d8) bg_popup_call2_act_pane_cp01_ParamLimits

0x0cb0,	// (0x000568d8) bg_popup_call2_act_pane_cp01

0x0d3a,	// (0x00056962) call_type_pane_cp05_ParamLimits

0x0d3a,	// (0x00056962) call_type_pane_cp05

0x0d8e,	// (0x000569b6) popup_call2_audio_second_window_g1_ParamLimits

0x0d8e,	// (0x000569b6) popup_call2_audio_second_window_g1

0x0de2,	// (0x00056a0a) popup_call2_audio_second_window_g2_ParamLimits

0x0de2,	// (0x00056a0a) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00065172) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00065172) popup_call2_audio_second_window_g

0x0e47,	// (0x00056a6f) popup_call2_audio_second_window_t1_ParamLimits

0x0e47,	// (0x00056a6f) popup_call2_audio_second_window_t1

0x0f02,	// (0x00056b2a) popup_call2_audio_second_window_t2_ParamLimits

0x0f02,	// (0x00056b2a) popup_call2_audio_second_window_t2

0x0f55,	// (0x00056b7d) popup_call2_audio_second_window_t3_ParamLimits

0x0f55,	// (0x00056b7d) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00065179) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00065179) popup_call2_audio_second_window_t

0xbe2c,	// (0x00061a54) bg_popup_call2_in_pane_cp02

0xbe36,	// (0x00061a5e) call_type_pane_cp04

0xbe3e,	// (0x00061a66) popup_call2_audio_wait_window_g1

0xbe46,	// (0x00061a6e) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00064d52) popup_call2_audio_wait_window_g

0xbe4e,	// (0x00061a76) popup_call2_audio_wait_window_t3

0x1048,	// (0x00056c70) bg_popup_call2_act_pane_ParamLimits

0x1048,	// (0x00056c70) bg_popup_call2_act_pane

0x1108,	// (0x00056d30) call_type_pane_cp03_ParamLimits

0x1108,	// (0x00056d30) call_type_pane_cp03

0x116c,	// (0x00056d94) popup_call2_audio_first_window_g1_ParamLimits

0x116c,	// (0x00056d94) popup_call2_audio_first_window_g1

0x11dc,	// (0x00056e04) popup_call2_audio_first_window_g2_ParamLimits

0x11dc,	// (0x00056e04) popup_call2_audio_first_window_g2

0x0551,	// (0x00056179) popup_call2_audio_first_window_g3_ParamLimits

0x0551,	// (0x00056179) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00065182) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00065182) popup_call2_audio_first_window_g

0x12ba,	// (0x00056ee2) popup_call2_audio_first_window_t1_ParamLimits

0x12ba,	// (0x00056ee2) popup_call2_audio_first_window_t1

0x13bd,	// (0x00056fe5) popup_call2_audio_first_window_t4_ParamLimits

0x13bd,	// (0x00056fe5) popup_call2_audio_first_window_t4

0x14a0,	// (0x000570c8) popup_call2_audio_first_window_t5_ParamLimits

0x14a0,	// (0x000570c8) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0006518d) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0006518d) popup_call2_audio_first_window_t

0xc07f,	// (0x00061ca7) bg_popup_call2_act_pane_g1

0x1b0d,	// (0x00057735) popup_cale_lunar_info_window_t1

0x1b1b,	// (0x00057743) popup_cale_lunar_info_window_t2

0x1b29,	// (0x00057751) popup_cale_lunar_info_window_t3

0xbe2c,	// (0x00061a54) bg_popup_call2_bubble_pane

0x15a1,	// (0x000571c9) bg_popup_call2_in_pane_cp01_ParamLimits

0x15a1,	// (0x000571c9) bg_popup_call2_in_pane_cp01

0xbb08,	// (0x00061730) call_type_pane_cp02

0x15e9,	// (0x00057211) popup_call2_audio_out_window_g1_ParamLimits

0x15e9,	// (0x00057211) popup_call2_audio_out_window_g1

0x1615,	// (0x0005723d) popup_call2_audio_out_window_g2_ParamLimits

0x1615,	// (0x0005723d) popup_call2_audio_out_window_g2

0x163d,	// (0x00057265) popup_call2_audio_out_window_g3_ParamLimits

0x163d,	// (0x00057265) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00065196) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00065196) popup_call2_audio_out_window_g

0x1678,	// (0x000572a0) popup_call2_audio_out_window_t1_ParamLimits

0x1678,	// (0x000572a0) popup_call2_audio_out_window_t1

0x16d7,	// (0x000572ff) popup_call2_audio_out_window_t2_ParamLimits

0x16d7,	// (0x000572ff) popup_call2_audio_out_window_t2

0x172b,	// (0x00057353) popup_call2_audio_out_window_t3_ParamLimits

0x172b,	// (0x00057353) popup_call2_audio_out_window_t3

0x1741,	// (0x00057369) popup_call2_audio_out_window_t4_ParamLimits

0x1741,	// (0x00057369) popup_call2_audio_out_window_t4

0x1757,	// (0x0005737f) popup_call2_audio_out_window_t5_ParamLimits

0x1757,	// (0x0005737f) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0006519f) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0006519f) popup_call2_audio_out_window_t

0x17bb,	// (0x000573e3) bg_popup_call2_in_pane_ParamLimits

0x17bb,	// (0x000573e3) bg_popup_call2_in_pane

0x1817,	// (0x0005743f) popup_call2_audio_in_window_g1_ParamLimits

0x1817,	// (0x0005743f) popup_call2_audio_in_window_g1

0x184f,	// (0x00057477) popup_call2_audio_in_window_g2_ParamLimits

0x184f,	// (0x00057477) popup_call2_audio_in_window_g2

0x1887,	// (0x000574af) popup_call2_audio_in_window_g3_ParamLimits

0x1887,	// (0x000574af) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x000651ac) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x000651ac) popup_call2_audio_in_window_g

0x18df,	// (0x00057507) popup_call2_audio_in_window_t1_ParamLimits

0x18df,	// (0x00057507) popup_call2_audio_in_window_t1

0x195f,	// (0x00057587) popup_call2_audio_in_window_t2_ParamLimits

0x195f,	// (0x00057587) popup_call2_audio_in_window_t2

0x19df,	// (0x00057607) popup_call2_audio_in_window_t3_ParamLimits

0x19df,	// (0x00057607) popup_call2_audio_in_window_t3

0x19f9,	// (0x00057621) popup_call2_audio_in_window_t4_ParamLimits

0x19f9,	// (0x00057621) popup_call2_audio_in_window_t4

0x1a0b,	// (0x00057633) popup_call2_audio_in_window_t5_ParamLimits

0x1a0b,	// (0x00057633) popup_call2_audio_in_window_t5

0x1a20,	// (0x00057648) popup_call2_audio_in_window_t6_ParamLimits

0x1a20,	// (0x00057648) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x000651b5) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x000651b5) popup_call2_audio_in_window_t

0xc07f,	// (0x00061ca7) bg_popup_call2_in_pane_g1

0x1b37,	// (0x0005775f) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0006521d) popup_cale_lunar_info_window_t

0xc087,	// (0x00061caf) bg_popup_call2_rect_pane_ParamLimits

0xc087,	// (0x00061caf) bg_popup_call2_rect_pane

0xbe2c,	// (0x00061a54) call2_cli_visual_graphic_pane

0xbe2c,	// (0x00061a54) call2_cli_visual_text_pane

0xc83e,	// (0x00062466) smil_status_volume_pane_g3

0x0002,

0xc203,	// (0x00061e2b) call2_cli_visual_graphic_pane_g1

0xc203,	// (0x00061e2b) call2_cli_visual_graphic_pane_g2

0xc203,	// (0x00061e2b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x000651c2) call2_cli_visual_graphic_pane_g

0x1a35,	// (0x0005765d) bg_popup_call2_rect_pane_g1

0xc28f,	// (0x00061eb7) bg_popup_call2_rect_pane_g2

0x1a3d,	// (0x00057665) bg_popup_call2_rect_pane_g3

0x1a45,	// (0x0005766d) bg_popup_call2_rect_pane_g4

0x1a4d,	// (0x00057675) bg_popup_call2_rect_pane_g5

0x1a55,	// (0x0005767d) bg_popup_call2_rect_pane_g6

0x1a5d,	// (0x00057685) bg_popup_call2_rect_pane_g7

0x1a65,	// (0x0005768d) bg_popup_call2_rect_pane_g8

0x1a6d,	// (0x00057695) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x000651c9) bg_popup_call2_rect_pane_g

0x1a75,	// (0x0005769d) bg_popup_call2_bubble_pane_g1

0x1a7d,	// (0x000576a5) bg_popup_call2_bubble_pane_g2

0x1a85,	// (0x000576ad) bg_popup_call2_bubble_pane_g3

0x1a8d,	// (0x000576b5) bg_popup_call2_bubble_pane_g4

0x1a95,	// (0x000576bd) bg_popup_call2_bubble_pane_g5

0x1a9d,	// (0x000576c5) bg_popup_call2_bubble_pane_g6

0x1aa5,	// (0x000576cd) bg_popup_call2_bubble_pane_g7

0x1aad,	// (0x000576d5) bg_popup_call2_bubble_pane_g8

0x1ab5,	// (0x000576dd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x000651dc) bg_popup_call2_bubble_pane_g

0x3757,	// (0x0005937f) aid_cale_week_size_cell_pane

0x3c77,	// (0x0005989f) aid_cams_cif_uncrop_pane_ParamLimits

0x3c77,	// (0x0005989f) aid_cams_cif_uncrop_pane

0x3e30,	// (0x00059a58) aid_cams_size_cell_ParamLimits

0x3e30,	// (0x00059a58) aid_cams_size_cell

0x3e44,	// (0x00059a6c) grid_cams_pane_ParamLimits

0x3e5e,	// (0x00059a86) linegrid_cams_pane_ParamLimits

0x401d,	// (0x00059c45) call_video_pane_t1

0x402f,	// (0x00059c57) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00064ec9) call_video_pane_t

0x43ce,	// (0x00059ff6) aid_cale_month_size_cell_pane_ParamLimits

0x43ce,	// (0x00059ff6) aid_cale_month_size_cell_pane

0xf63e,	// (0x00065266) smil_status_volume_pane_g

0xc84b,	// (0x00062473) volume_smil_pane_ParamLimits

0xb9c3,	// (0x000615eb) aid_popup2_width_pane

0x36b9,	// (0x000592e1) cell_qdial_pane_g4_ParamLimits

0x36b9,	// (0x000592e1) cell_qdial_pane_g4

0x4eed,	// (0x0005ab15) aid_blid_cardinal_pane_ParamLimits

0x4ef9,	// (0x0005ab21) aid_blid_destination_pane_ParamLimits

0x4ef9,	// (0x0005ab21) aid_blid_destination_pane

0xc087,	// (0x00061caf) bg_popup_call_poc_act_pane_ParamLimits

0xc087,	// (0x00061caf) bg_popup_call_poc_act_pane

0xc087,	// (0x00061caf) bg_popup_call_poc_inact_pane_ParamLimits

0xc087,	// (0x00061caf) bg_popup_call_poc_inact_pane

0x1abd,	// (0x000576e5) bg_popup_call_poc_act_pane_g1

0x1ac5,	// (0x000576ed) bg_popup_call_poc_act_pane_g2

0x1acd,	// (0x000576f5) bg_popup_call_poc_act_pane_g3

0x1a8d,	// (0x000576b5) bg_popup_call_poc_act_pane_g4

0x1a95,	// (0x000576bd) bg_popup_call_poc_act_pane_g5

0x1ad5,	// (0x000576fd) bg_popup_call_poc_act_pane_g6

0x1aa5,	// (0x000576cd) bg_popup_call_poc_act_pane_g7

0x1add,	// (0x00057705) bg_popup_call_poc_act_pane_g8

0xbe2c,	// (0x00061a54) main_usb_pane

0x1c44,	// (0x0005786c) popup_cale_lunar_info_window

0x427a,	// (0x00059ea2) im_reading_pane_t1_ParamLimits

0xc504,	// (0x0006212c) list_im_pane_ParamLimits

0xc515,	// (0x0006213d) scroll_pane_cp07_ParamLimits

0xbe2c,	// (0x00061a54) grid_highlight_pane_cp012

0xc087,	// (0x00061caf) mup_scale_pane_ParamLimits

0x09df,	// (0x00056607) main_usb_pane_g1_ParamLimits

0x09df,	// (0x00056607) main_usb_pane_g1

0x5bf2,	// (0x0005b81a) main_usb_pane_g2_ParamLimits

0x5bf2,	// (0x0005b81a) main_usb_pane_g2

0x0001,

0xf5de,	// (0x00065206) main_usb_pane_g_ParamLimits

0xf5de,	// (0x00065206) main_usb_pane_g

0x5c08,	// (0x0005b830) main_usb_pane_t1_ParamLimits

0x5c08,	// (0x0005b830) main_usb_pane_t1

0x5c1a,	// (0x0005b842) main_usb_pane_t2_ParamLimits

0x5c1a,	// (0x0005b842) main_usb_pane_t2

0x5c2c,	// (0x0005b854) main_usb_pane_t3_ParamLimits

0x5c2c,	// (0x0005b854) main_usb_pane_t3

0x5c3e,	// (0x0005b866) main_usb_pane_t4_ParamLimits

0x5c3e,	// (0x0005b866) main_usb_pane_t4

0x5c50,	// (0x0005b878) main_usb_pane_t5_ParamLimits

0x5c50,	// (0x0005b878) main_usb_pane_t5

0x5c62,	// (0x0005b88a) main_usb_pane_t6_ParamLimits

0x5c62,	// (0x0005b88a) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0006520b) main_usb_pane_t_ParamLimits

0x4e9c,	// (0x0005aac4) aid_text_placing

0x4ea5,	// (0x0005aacd) main_location2_pane_t1_ParamLimits

0x4eb7,	// (0x0005aadf) main_location2_pane_t2_ParamLimits

0x4ec9,	// (0x0005aaf1) main_location2_pane_t3_ParamLimits

0x4edb,	// (0x0005ab03) main_location2_pane_t4_ParamLimits

0x4edb,	// (0x0005ab03) main_location2_pane_t4

0xf402,	// (0x0006502a) main_location2_pane_t_ParamLimits

0xc0c3,	// (0x00061ceb) find_pinb_pane_g2_ParamLimits

0xc0c3,	// (0x00061ceb) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00064d78) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00064d78) find_pinb_pane_g

0xc0cf,	// (0x00061cf7) find_pinb_pane_t1_ParamLimits

0xc0e1,	// (0x00061d09) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00064d7d) find_pinb_pane_t_ParamLimits

0xbe2c,	// (0x00061a54) main_call3_pane

0x46ca,	// (0x0005a2f2) cale_month_day_heading_pane_t1_ParamLimits

0x4728,	// (0x0005a350) cale_month_day_heading_pane_t2_ParamLimits

0x478d,	// (0x0005a3b5) cale_month_day_heading_pane_t3_ParamLimits

0x47f2,	// (0x0005a41a) cale_month_day_heading_pane_t4_ParamLimits

0x4857,	// (0x0005a47f) cale_month_day_heading_pane_t5_ParamLimits

0x48bc,	// (0x0005a4e4) cale_month_day_heading_pane_t6_ParamLimits

0x4921,	// (0x0005a549) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00064f01) cale_month_day_heading_pane_t_ParamLimits

0x0242,	// (0x00055e6a) smil_status_volume_pane

0x56ed,	// (0x0005b315) postcard_address_pane_ParamLimits

0x56ed,	// (0x0005b315) postcard_address_pane

0x56ff,	// (0x0005b327) postcard_message_pane_ParamLimits

0x56ff,	// (0x0005b327) postcard_message_pane

0x5bd0,	// (0x0005b7f8) call2_cli_visual_pane_t1_ParamLimits

0x5bd0,	// (0x0005b7f8) call2_cli_visual_pane_t1

0x63f4,	// (0x0005c01c) postcard_message_pane_t1_ParamLimits

0x63f4,	// (0x0005c01c) postcard_message_pane_t1

0x63dd,	// (0x0005c005) postcard_address_pane_t1_ParamLimits

0x63dd,	// (0x0005c005) postcard_address_pane_t1

0x63c9,	// (0x0005bff1) popup_call3_audio_in_window_ParamLimits

0x63c9,	// (0x0005bff1) popup_call3_audio_in_window

0x6254,	// (0x0005be7c) bg_popup_call3_in_pane_ParamLimits

0x6254,	// (0x0005be7c) bg_popup_call3_in_pane

0x62ca,	// (0x0005bef2) popup_call3_audio_in_window_g1_ParamLimits

0x62ca,	// (0x0005bef2) popup_call3_audio_in_window_g1

0x62ea,	// (0x0005bf12) popup_call3_audio_in_window_g2_ParamLimits

0x62ea,	// (0x0005bf12) popup_call3_audio_in_window_g2

0x630a,	// (0x0005bf32) popup_call3_audio_in_window_g3_ParamLimits

0x630a,	// (0x0005bf32) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0006526d) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0006526d) popup_call3_audio_in_window_g

0x633b,	// (0x0005bf63) popup_call3_audio_in_window_t1_ParamLimits

0x633b,	// (0x0005bf63) popup_call3_audio_in_window_t1

0x6379,	// (0x0005bfa1) popup_call3_audio_in_window_t2_ParamLimits

0x6379,	// (0x0005bfa1) popup_call3_audio_in_window_t2

0x63b7,	// (0x0005bfdf) popup_call3_audio_in_window_t3_ParamLimits

0x63b7,	// (0x0005bfdf) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00065276) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00065276) popup_call3_audio_in_window_t

0x0834,	// (0x0005645c) bg_popup_call3_rect_pane

0x1a35,	// (0x0005765d) bg_popup_call3_rect_pane_g1

0xc28f,	// (0x00061eb7) bg_popup_call3_rect_pane_g2

0x1a3d,	// (0x00057665) bg_popup_call3_rect_pane_g3

0x1a45,	// (0x0005766d) bg_popup_call3_rect_pane_g4

0x1a4d,	// (0x00057675) bg_popup_call3_rect_pane_g5

0x1a55,	// (0x0005767d) bg_popup_call3_rect_pane_g6

0x1a5d,	// (0x00057685) bg_popup_call3_rect_pane_g7

0x52af,	// (0x0005aed7) mup_visualizer_osc_pane

0x08f3,	// (0x0005651b) mup_visualizer_spec_pane

0x6284,	// (0x0005beac) call3_video_qcif_pane_ParamLimits

0x6284,	// (0x0005beac) call3_video_qcif_pane

0x6297,	// (0x0005bebf) call3_video_qcif_uncrop_pane_ParamLimits

0x6297,	// (0x0005bebf) call3_video_qcif_uncrop_pane

0x62a5,	// (0x0005becd) call3_video_subqcif_pane_ParamLimits

0x62a5,	// (0x0005becd) call3_video_subqcif_pane

0x62b9,	// (0x0005bee1) call3_video_subqcif_uncrop_pane_ParamLimits

0x62b9,	// (0x0005bee1) call3_video_subqcif_uncrop_pane

0x632a,	// (0x0005bf52) popup_call3_audio_in_window_g4_ParamLimits

0x632a,	// (0x0005bf52) popup_call3_audio_in_window_g4

0x6243,	// (0x0005be6b) mup_spec_half_pane

0x624c,	// (0x0005be74) mup_spec_half_pane_cp

0x1cdb,	// (0x00057903) mup_osc_middle_pane

0x1ce4,	// (0x0005790c) mup_visualizer_osc_pane_g1

0x6223,	// (0x0005be4b) mup_spec_bar_pane_ParamLimits

0x6223,	// (0x0005be4b) mup_spec_bar_pane

0x1cc8,	// (0x000578f0) mup_spec_bar_pane_g1

0x1cd2,	// (0x000578fa) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00065261) mup_spec_bar_pane_g

0x3757,	// (0x0005937f) aid_cale_week_size_cell_pane_ParamLimits

0x376a,	// (0x00059392) bg_cale_heading_pane_ParamLimits

0xc30b,	// (0x00061f33) bg_cale_pane_cp01_ParamLimits

0x377e,	// (0x000593a6) cale_week_corner_pane_ParamLimits

0x3794,	// (0x000593bc) cale_week_day_heading_pane_ParamLimits

0x37a8,	// (0x000593d0) cale_week_scroll_pane_g1_ParamLimits

0x37b9,	// (0x000593e1) cale_week_scroll_pane_g2_ParamLimits

0x37ca,	// (0x000593f2) cale_week_scroll_pane_g3_ParamLimits

0x37db,	// (0x00059403) cale_week_scroll_pane_g4_ParamLimits

0x37ec,	// (0x00059414) cale_week_scroll_pane_g5_ParamLimits

0x37fd,	// (0x00059425) cale_week_scroll_pane_g6_ParamLimits

0x380e,	// (0x00059436) cale_week_scroll_pane_g7_ParamLimits

0x381f,	// (0x00059447) cale_week_scroll_pane_g8_ParamLimits

0x3830,	// (0x00059458) cale_week_scroll_pane_g9_ParamLimits

0x3841,	// (0x00059469) cale_week_scroll_pane_g10_ParamLimits

0x3852,	// (0x0005947a) cale_week_scroll_pane_g11_ParamLimits

0x3863,	// (0x0005948b) cale_week_scroll_pane_g12_ParamLimits

0x3874,	// (0x0005949c) cale_week_scroll_pane_g13_ParamLimits

0x3885,	// (0x000594ad) cale_week_scroll_pane_g14_ParamLimits

0x3896,	// (0x000594be) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00064e09) cale_week_scroll_pane_g_ParamLimits

0x38a7,	// (0x000594cf) cale_week_time_pane_ParamLimits

0x38b8,	// (0x000594e0) grid_cale_week_pane_ParamLimits

0xc324,	// (0x00061f4c) listscroll_cale_week_pane_t1

0x38cb,	// (0x000594f3) scroll_pane_cp08_ParamLimits

0x440f,	// (0x0005a037) cale_month_corner_pane_ParamLimits

0xc72b,	// (0x00062353) cale_month_pane_t1

0x4691,	// (0x0005a2b9) cale_month_week_pane_ParamLimits

0x4ce8,	// (0x0005a910) popup_call_status_window_g1_ParamLimits

0x4cfc,	// (0x0005a924) popup_call_status_window_g2_ParamLimits

0x4d10,	// (0x0005a938) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00064fb1) popup_call_status_window_g_ParamLimits

0x05b8,	// (0x000561e0) aid_call2_pane

0x551f,	// (0x0005b147) msg_header_pane_g1

0x56ed,	// (0x0005b315) postcard_address2_pane_ParamLimits

0x56ed,	// (0x0005b315) postcard_address2_pane

0x56ff,	// (0x0005b327) postcard_message2_pane_ParamLimits

0x56ff,	// (0x0005b327) postcard_message2_pane

0x61d5,	// (0x0005bdfd) message2_row_pane_ParamLimits

0x61d5,	// (0x0005bdfd) message2_row_pane

0x61f1,	// (0x0005be19) address2_row_pane_ParamLimits

0x61f1,	// (0x0005be19) address2_row_pane

0x1c96,	// (0x000578be) postcard_message2_row_pane_g1

0x1c9e,	// (0x000578c6) postcard_message2_row_pane_t1

0x1c96,	// (0x000578be) address2_row_pane_g1

0x1c9e,	// (0x000578c6) address2_row_pane_t1

0x3b73,	// (0x0005979b) aid_size_cell_vorec

0xbe2c,	// (0x00061a54) main_rss_pane

0x6204,	// (0x0005be2c) rss_list_single_pane_ParamLimits

0x6204,	// (0x0005be2c) rss_list_single_pane

0x1cac,	// (0x000578d4) rss_list_single_pane_t1

0x1cba,	// (0x000578e2) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0006525c) rss_list_single_pane_t

0xbe2c,	// (0x00061a54) main_camera2_pane

0xbe2c,	// (0x00061a54) main_video2_pane

0x646d,	// (0x0005c095) cams_zoom_pane_cp2_ParamLimits

0x646d,	// (0x0005c095) cams_zoom_pane_cp2

0x648d,	// (0x0005c0b5) image2_vga_pane_ParamLimits

0x648d,	// (0x0005c0b5) image2_vga_pane

0x64de,	// (0x0005c106) main_camera2_pane_g1_ParamLimits

0x64de,	// (0x0005c106) main_camera2_pane_g1

0x64fe,	// (0x0005c126) main_camera2_pane_g2_ParamLimits

0x64fe,	// (0x0005c126) main_camera2_pane_g2

0x651e,	// (0x0005c146) main_camera2_pane_g3_ParamLimits

0x651e,	// (0x0005c146) main_camera2_pane_g3

0x653e,	// (0x0005c166) main_camera2_pane_g4_ParamLimits

0x653e,	// (0x0005c166) main_camera2_pane_g4

0x655e,	// (0x0005c186) main_camera2_pane_g5_ParamLimits

0x655e,	// (0x0005c186) main_camera2_pane_g5

0x657e,	// (0x0005c1a6) main_camera2_pane_g6_ParamLimits

0x657e,	// (0x0005c1a6) main_camera2_pane_g6

0x659e,	// (0x0005c1c6) main_camera2_pane_g7_ParamLimits

0x659e,	// (0x0005c1c6) main_camera2_pane_g7

0x65be,	// (0x0005c1e6) main_camera2_pane_g8_ParamLimits

0x65be,	// (0x0005c1e6) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0006527d) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0006527d) main_camera2_pane_g

0x65fe,	// (0x0005c226) main_camera2_pane_t1_ParamLimits

0x65fe,	// (0x0005c226) main_camera2_pane_t1

0x6633,	// (0x0005c25b) main_camera2_pane_t2_ParamLimits

0x6633,	// (0x0005c25b) main_camera2_pane_t2

0x6659,	// (0x0005c281) main_camera2_pane_t3_ParamLimits

0x6659,	// (0x0005c281) main_camera2_pane_t3

0x66b7,	// (0x0005c2df) main_camera2_pane_t4_ParamLimits

0x66b7,	// (0x0005c2df) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00065290) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00065290) main_camera2_pane_t

0x6749,	// (0x0005c371) cams_zoom_pane_cp4_ParamLimits

0x6749,	// (0x0005c371) cams_zoom_pane_cp4

0x675f,	// (0x0005c387) image2_cif_pane_ParamLimits

0x675f,	// (0x0005c387) image2_cif_pane

0x678a,	// (0x0005c3b2) image2_subqcif_pane_ParamLimits

0x678a,	// (0x0005c3b2) image2_subqcif_pane

0x67a4,	// (0x0005c3cc) main_video2_pane_g1_ParamLimits

0x67a4,	// (0x0005c3cc) main_video2_pane_g1

0x67be,	// (0x0005c3e6) main_video2_pane_g2_ParamLimits

0x67be,	// (0x0005c3e6) main_video2_pane_g2

0x67d4,	// (0x0005c3fc) main_video2_pane_g3_ParamLimits

0x67d4,	// (0x0005c3fc) main_video2_pane_g3

0x67ea,	// (0x0005c412) main_video2_pane_g4_ParamLimits

0x67ea,	// (0x0005c412) main_video2_pane_g4

0x6800,	// (0x0005c428) main_video2_pane_g5_ParamLimits

0x6800,	// (0x0005c428) main_video2_pane_g5

0x6816,	// (0x0005c43e) main_video2_pane_g6_ParamLimits

0x6816,	// (0x0005c43e) main_video2_pane_g6

0x0005,

0xf677,	// (0x0006529f) main_video2_pane_g_ParamLimits

0xf677,	// (0x0006529f) main_video2_pane_g

0x6830,	// (0x0005c458) main_video2_pane_t1_ParamLimits

0x6830,	// (0x0005c458) main_video2_pane_t1

0x6854,	// (0x0005c47c) main_video2_pane_t2_ParamLimits

0x6854,	// (0x0005c47c) main_video2_pane_t2

0x68a2,	// (0x0005c4ca) main_video2_pane_t3_ParamLimits

0x68a2,	// (0x0005c4ca) main_video2_pane_t3

0x0002,

0xf684,	// (0x000652ac) main_video2_pane_t_ParamLimits

0xf684,	// (0x000652ac) main_video2_pane_t

0x5d1d,	// (0x0005b945) call_muted_g2

0x0001,

0xf626,	// (0x0006524e) call_muted_g

0xbe2c,	// (0x00061a54) main_mup2_pane

0x68e6,	// (0x0005c50e) main_mup2_pane_g1_ParamLimits

0x68e6,	// (0x0005c50e) main_mup2_pane_g1

0x68f2,	// (0x0005c51a) main_mup2_pane_g2_ParamLimits

0x68f2,	// (0x0005c51a) main_mup2_pane_g2

0xc8b9,	// (0x000624e1) main_mup_pane_g13_cp1

0xc8c1,	// (0x000624e9) mup_volume_pane_cp1

0x690e,	// (0x0005c536) main_mup2_pane_g4_ParamLimits

0x690e,	// (0x0005c536) main_mup2_pane_g4

0x6920,	// (0x0005c548) main_mup2_pane_g5_ParamLimits

0x6920,	// (0x0005c548) main_mup2_pane_g5

0x6932,	// (0x0005c55a) main_mup2_pane_g6_ParamLimits

0x6932,	// (0x0005c55a) main_mup2_pane_g6

0x6944,	// (0x0005c56c) main_mup2_pane_g7_ParamLimits

0x6944,	// (0x0005c56c) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x000652b3) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x000652b3) main_mup2_pane_g

0x695c,	// (0x0005c584) main_mup2_pane_t1_ParamLimits

0x695c,	// (0x0005c584) main_mup2_pane_t1

0x6972,	// (0x0005c59a) main_mup2_pane_t2_ParamLimits

0x6972,	// (0x0005c59a) main_mup2_pane_t2

0x6988,	// (0x0005c5b0) main_mup2_pane_t3_ParamLimits

0x6988,	// (0x0005c5b0) main_mup2_pane_t3

0x699e,	// (0x0005c5c6) main_mup2_pane_t4_ParamLimits

0x699e,	// (0x0005c5c6) main_mup2_pane_t4

0x69b6,	// (0x0005c5de) main_mup2_pane_t5_ParamLimits

0x69b6,	// (0x0005c5de) main_mup2_pane_t5

0x69ce,	// (0x0005c5f6) main_mup2_pane_t6_ParamLimits

0x69ce,	// (0x0005c5f6) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x000652c2) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x000652c2) main_mup2_pane_t

0x69fe,	// (0x0005c626) mup2_visualizer_pane_ParamLimits

0x69fe,	// (0x0005c626) mup2_visualizer_pane

0x6a2c,	// (0x0005c654) mup_progress_pane_cp_ParamLimits

0x6a2c,	// (0x0005c654) mup_progress_pane_cp

0xc8a4,	// (0x000624cc) mup_volume_pane_cp_ParamLimits

0xc8a4,	// (0x000624cc) mup_volume_pane_cp

0x6a40,	// (0x0005c668) mup2_visualizer_pane_g1_ParamLimits

0x6a40,	// (0x0005c668) mup2_visualizer_pane_g1

0x1d27,	// (0x0005794f) mup2_visualizer_pane_g2_ParamLimits

0x1d27,	// (0x0005794f) mup2_visualizer_pane_g2

0x6a57,	// (0x0005c67f) mup2_visualizer_pane_g3_ParamLimits

0x6a57,	// (0x0005c67f) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x000652cf) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x000652cf) mup2_visualizer_pane_g

0x0b1a,	// (0x00056742) aid_size_cell_fmradio

0x5ecf,	// (0x0005baf7) aid_height_parent_landcape

0xc593,	// (0x000621bb) wml_content_pane_cp

0xc59b,	// (0x000621c3) wml_tabs_pane

0xc5a4,	// (0x000621cc) popup_wml_miniature_window

0xc5ac,	// (0x000621d4) scroll_pane_cp021

0xc5c0,	// (0x000621e8) wml_content_pane_comp8

0xbe2c,	// (0x00061a54) bg_popup_sub_pane_cp05

0x1d45,	// (0x0005796d) popup_wml_miniature_window_g1

0x1d4d,	// (0x00057975) wml_miniature_view_pane

0x6a63,	// (0x0005c68b) aid_size_wml_view

0x6a6b,	// (0x0005c693) wml_miniature_view_pane_g1

0x6a74,	// (0x0005c69c) wml_miniature_view_pane_g2

0x6a7d,	// (0x0005c6a5) wml_miniature_view_pane_g3

0x6a85,	// (0x0005c6ad) wml_miniature_view_pane_g4

0x6a8d,	// (0x0005c6b5) wml_miniature_view_pane_g5

0x6a95,	// (0x0005c6bd) wml_miniature_view_pane_g6

0x6a9d,	// (0x0005c6c5) wml_miniature_view_pane_g7

0x6aa5,	// (0x0005c6cd) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x000652d6) wml_miniature_view_pane_g

0x1d1b,	// (0x00057943) background_graphic_ParamLimits

0x1d1b,	// (0x00057943) background_graphic

0x1d55,	// (0x0005797d) wml_tabs_2_pane

0x1d5e,	// (0x00057986) wml_tabs_3_pane_ParamLimits

0x1d5e,	// (0x00057986) wml_tabs_3_pane

0x1d70,	// (0x00057998) wml_tabs_4_pane_ParamLimits

0x1d70,	// (0x00057998) wml_tabs_4_pane

0x1d86,	// (0x000579ae) wml_tabs_5_pane_ParamLimits

0x1d86,	// (0x000579ae) wml_tabs_5_pane

0x1da0,	// (0x000579c8) wml_tabs_pane_g2_ParamLimits

0x1da0,	// (0x000579c8) wml_tabs_pane_g2

0x1db4,	// (0x000579dc) wml_tabs_pane_g3_ParamLimits

0x1db4,	// (0x000579dc) wml_tabs_pane_g3

0x6aad,	// (0x0005c6d5) wml_tabs_2_active_pane_ParamLimits

0x6aad,	// (0x0005c6d5) wml_tabs_2_active_pane

0x6ac1,	// (0x0005c6e9) wml_tabs_2_passive_pane_ParamLimits

0x6ac1,	// (0x0005c6e9) wml_tabs_2_passive_pane

0x6ad5,	// (0x0005c6fd) wml_tabs_3_active_pane_cp_ParamLimits

0x6ad5,	// (0x0005c6fd) wml_tabs_3_active_pane_cp

0x6aea,	// (0x0005c712) wml_tabs_3_passive_pane_ParamLimits

0x6aea,	// (0x0005c712) wml_tabs_3_passive_pane

0x6afd,	// (0x0005c725) wml_tabs_3_passive_pane_cp_ParamLimits

0x6afd,	// (0x0005c725) wml_tabs_3_passive_pane_cp

0x6b14,	// (0x0005c73c) tabs_4_active_pane

0x6b1c,	// (0x0005c744) tabs_4_passive_pane

0x6b26,	// (0x0005c74e) tabs_4_passive_pane_cp

0x6b2e,	// (0x0005c756) tabs_4_passive_pane_cp2

0x5bea,	// (0x0005b812) aid_height_text

0x5285,	// (0x0005aead) mup_volume_cont_pane_ParamLimits

0x5285,	// (0x0005aead) mup_volume_cont_pane

0x335c,	// (0x00058f84) aid_size_cell_pinb

0x3366,	// (0x00058f8e) aid_size_list_pinb

0x6a18,	// (0x0005c640) mup2_volume_cont_pane_ParamLimits

0x6a18,	// (0x0005c640) mup2_volume_cont_pane

0xc890,	// (0x000624b8) mup2_volume_cont_pane_g1_ParamLimits

0xc890,	// (0x000624b8) mup2_volume_cont_pane_g1

0x3024,	// (0x00058c4c) aid_size_cell_touch_ParamLimits

0x3024,	// (0x00058c4c) aid_size_cell_touch

0x324c,	// (0x00058e74) touch_pane_ParamLimits

0x324c,	// (0x00058e74) touch_pane

0xb9b1,	// (0x000615d9) main_rss2_pane

0x1dd1,	// (0x000579f9) listscroll_rss2_pane

0x1dda,	// (0x00057a02) rss2_navigation_pane

0x1de2,	// (0x00057a0a) list_rss2_pane

0x06eb,	// (0x00056313) scroll_pane_cp22

0x1dea,	// (0x00057a12) rss2_navigation_pane_g1

0x1df3,	// (0x00057a1b) rss2_navigation_pane_g2

0x1dfb,	// (0x00057a23) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x000652e7) rss2_navigation_pane_g

0x1e03,	// (0x00057a2b) rss2_navigation_pane_t1

0x6b38,	// (0x0005c760) rss2_list_single_pane_ParamLimits

0x6b38,	// (0x0005c760) rss2_list_single_pane

0x1e11,	// (0x00057a39) rss2_list_single_pane_t2

0x1e1f,	// (0x00057a47) rss2_list_single_pane_t3_ParamLimits

0x1e1f,	// (0x00057a47) rss2_list_single_pane_t3

0x1e3c,	// (0x00057a64) rss2_list_single_pane_t4

0x4b05,	// (0x0005a72d) smil_status_pane_g1

0x1c2e,	// (0x00057856) main_image2_pane_ParamLimits

0x1c2e,	// (0x00057856) main_image2_pane

0x65de,	// (0x0005c206) main_camera2_pane_g9_ParamLimits

0x65de,	// (0x0005c206) main_camera2_pane_g9

0x670c,	// (0x0005c334) main_camera2_pane_t5_ParamLimits

0x670c,	// (0x0005c334) main_camera2_pane_t5

0xc860,	// (0x00062488) main_camera2_pane_t6_ParamLimits

0xc860,	// (0x00062488) main_camera2_pane_t6

0x6b4d,	// (0x0005c775) main_image2_pane_g1_ParamLimits

0x6b4d,	// (0x0005c775) main_image2_pane_g1

0x5926,	// (0x0005b54e) smil2_video_pane_ParamLimits

0x5926,	// (0x0005b54e) smil2_video_pane

0x305c,	// (0x00058c84) aid_zoom_text_primary_cp

0xba0f,	// (0x00061637) popup_preview_fixed_window

0xc4fc,	// (0x00062124) im_reading_pane_g1

0x6455,	// (0x0005c07d) cams2_bc_adjust_pane_cp_ParamLimits

0x6455,	// (0x0005c07d) cams2_bc_adjust_pane_cp

0x673b,	// (0x0005c363) cams2_bc_adjust_pane_ParamLimits

0x673b,	// (0x0005c363) cams2_bc_adjust_pane

0x20bc,	// (0x00057ce4) cams2_bc_adjust_pane_g1

0xc8c9,	// (0x000624f1) cams2_slider_pane

0xc8d2,	// (0x000624fa) cams2_slider_pane_g1

0xc8db,	// (0x00062503) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x000652ee) cams2_slider_pane_g

0x3448,	// (0x00059070) calc_display_pane_ParamLimits

0x346e,	// (0x00059096) calc_paper_pane_ParamLimits

0x348f,	// (0x000590b7) grid_calc_pane_ParamLimits

0xc7d9,	// (0x00062401) popup_clock_digital_window_t1_ParamLimits

0x0ab7,	// (0x000566df) main_image_pane_t1

0x342a,	// (0x00059052) aid_size_cell_calc_ParamLimits

0x342a,	// (0x00059052) aid_size_cell_calc

0x5f15,	// (0x0005bb3d) popup_blid_sat_info2_window_ParamLimits

0x5f15,	// (0x0005bb3d) popup_blid_sat_info2_window

0x1e52,	// (0x00057a7a) aid_size_cell_blid

0x1e5a,	// (0x00057a82) bg_popup_window_pane_cp07

0x1e7d,	// (0x00057aa5) grid_popup_blid_pane

0x1e87,	// (0x00057aaf) heading_pane_cp05_ParamLimits

0x1e87,	// (0x00057aaf) heading_pane_cp05

0x1f51,	// (0x00057b79) cell_popup_blid_pane_ParamLimits

0x1f51,	// (0x00057b79) cell_popup_blid_pane

0x1f75,	// (0x00057b9d) cell_popup_blid_pane_g1

0x1f7d,	// (0x00057ba5) cell_popup_blid_pane_t1

0x69e8,	// (0x0005c610) mup2_indicator_pane_ParamLimits

0x69e8,	// (0x0005c610) mup2_indicator_pane

0x0834,	// (0x0005645c) mup2_visualizer_osc_pane

0x1d33,	// (0x0005795b) mup2_visualizer_spec_pane_ParamLimits

0x1d33,	// (0x0005795b) mup2_visualizer_spec_pane

0x6b63,	// (0x0005c78b) mup2_spec_half_pane

0x6b6c,	// (0x0005c794) mup2_spec_half_pane_cp

0x6b74,	// (0x0005c79c) mup2_spec_bar_pane_ParamLimits

0x6b74,	// (0x0005c79c) mup2_spec_bar_pane

0x1cc8,	// (0x000578f0) mup2_spec_bar_pane_g1

0x1cd2,	// (0x000578fa) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00065261) mup2_spec_bar_pane_g

0x6b94,	// (0x0005c7bc) mup2_osc_middle_pane

0x1ce4,	// (0x0005790c) mup2_visualizer_osc_pane_g1

0xba39,	// (0x00061661) popup_number_entry_window_t1_ParamLimits

0xba4c,	// (0x00061674) popup_number_entry_window_t2_ParamLimits

0xba5e,	// (0x00061686) popup_number_entry_window_t3_ParamLimits

0x329e,	// (0x00058ec6) popup_number_entry_window_t5_ParamLimits

0x329e,	// (0x00058ec6) popup_number_entry_window_t5

0xf0fb,	// (0x00064d23) popup_number_entry_window_t_ParamLimits

0xba70,	// (0x00061698) text_title_cp2_ParamLimits

0xc818,	// (0x00062440) aid_hotspot_pointer_text2_pane

0xc832,	// (0x0006245a) main_viewer_pane_g9_ParamLimits

0xc832,	// (0x0006245a) main_viewer_pane_g9

0xc72b,	// (0x00062353) cale_month_pane_t1_ParamLimits

0x0255,	// (0x00055e7d) bg_cale_pane_ParamLimits

0x026d,	// (0x00055e95) list_cale_pane_ParamLimits

0xc324,	// (0x00061f4c) listscroll_cale_day_pane_t1

0x027e,	// (0x00055ea6) scroll_pane_cp09_ParamLimits

0x52b7,	// (0x0005aedf) main_mup_eq_pane_t1_ParamLimits

0x52b7,	// (0x0005aedf) main_mup_eq_pane_t1

0x52d1,	// (0x0005aef9) main_mup_eq_pane_t2_ParamLimits

0x52d1,	// (0x0005aef9) main_mup_eq_pane_t2

0x52eb,	// (0x0005af13) main_mup_eq_pane_t3_ParamLimits

0x52eb,	// (0x0005af13) main_mup_eq_pane_t3

0x5307,	// (0x0005af2f) main_mup_eq_pane_t4_ParamLimits

0x5307,	// (0x0005af2f) main_mup_eq_pane_t4

0x5323,	// (0x0005af4b) main_mup_eq_pane_t5_ParamLimits

0x5323,	// (0x0005af4b) main_mup_eq_pane_t5

0x533f,	// (0x0005af67) main_mup_eq_pane_t6_ParamLimits

0x533f,	// (0x0005af67) main_mup_eq_pane_t6

0x5353,	// (0x0005af7b) main_mup_eq_pane_t7_ParamLimits

0x5353,	// (0x0005af7b) main_mup_eq_pane_t7

0x5367,	// (0x0005af8f) main_mup_eq_pane_t8_ParamLimits

0x5367,	// (0x0005af8f) main_mup_eq_pane_t8

0x537b,	// (0x0005afa3) main_mup_eq_pane_t9_ParamLimits

0x537b,	// (0x0005afa3) main_mup_eq_pane_t9

0x5395,	// (0x0005afbd) main_mup_eq_pane_t10_ParamLimits

0x5395,	// (0x0005afbd) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x000650b0) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x000650b0) main_mup_eq_pane_t

0x5444,	// (0x0005b06c) mup_equalizer_pane_cp5_ParamLimits

0x5458,	// (0x0005b080) mup_equalizer_pane_cp6_ParamLimits

0x546c,	// (0x0005b094) mup_equalizer_pane_cp7_ParamLimits

0xb9b1,	// (0x000615d9) main_gallery_pane

0x1ced,	// (0x00057915) smil2_volume_pane

0x1cf5,	// (0x0005791d) smil_status_volume_pane_g1_ParamLimits

0x1d08,	// (0x00057930) smil_status_volume_pane_g2_ParamLimits

0xc83e,	// (0x00062466) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00065266) smil_status_volume_pane_g_ParamLimits

0x1e5a,	// (0x00057a82) bg_popup_window_pane_cp07_ParamLimits

0x1e68,	// (0x00057a90) blid_firmament_pane

0x6b9d,	// (0x0005c7c5) aid_size_cell_gallery_ParamLimits

0x6b9d,	// (0x0005c7c5) aid_size_cell_gallery

0x6bb3,	// (0x0005c7db) grid_gallery_pane_ParamLimits

0x6bb3,	// (0x0005c7db) grid_gallery_pane

0x6bcc,	// (0x0005c7f4) cell_gallery_pane_ParamLimits

0x6bcc,	// (0x0005c7f4) cell_gallery_pane

0x1f8b,	// (0x00057bb3) bg_cell_gallery_focus_pane_ParamLimits

0x1f8b,	// (0x00057bb3) bg_cell_gallery_focus_pane

0x1f9d,	// (0x00057bc5) cell_gallery_pane_g1_ParamLimits

0x1f9d,	// (0x00057bc5) cell_gallery_pane_g1

0x6c15,	// (0x0005c83d) cell_gallery_pane_g2_ParamLimits

0x6c15,	// (0x0005c83d) cell_gallery_pane_g2

0x6c22,	// (0x0005c84a) cell_gallery_pane_g3_ParamLimits

0x6c22,	// (0x0005c84a) cell_gallery_pane_g3

0x1fa9,	// (0x00057bd1) cell_gallery_pane_g4_ParamLimits

0x1fa9,	// (0x00057bd1) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x00065314) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x00065314) cell_gallery_pane_g

0x1fb5,	// (0x00057bdd) bg_cell_gallery_focus_pane_g1

0x1fbd,	// (0x00057be5) bg_cell_gallery_focus_pane_g2

0x1fc5,	// (0x00057bed) bg_cell_gallery_focus_pane_g3

0x1fcd,	// (0x00057bf5) bg_cell_gallery_focus_pane_g4

0x1fd5,	// (0x00057bfd) bg_cell_gallery_focus_pane_g5

0x1fdd,	// (0x00057c05) bg_cell_gallery_focus_pane_g6

0x1fe5,	// (0x00057c0d) bg_cell_gallery_focus_pane_g7

0x1fed,	// (0x00057c15) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0006531d) bg_cell_gallery_focus_pane_g

0x1ff5,	// (0x00057c1d) aid_firma_cardinal

0x2009,	// (0x00057c31) blid_firmament_pane_t1

0x2020,	// (0x00057c48) blid_firmament_pane_t2

0x2037,	// (0x00057c5f) blid_firmament_pane_t3

0x204e,	// (0x00057c76) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0006532e) blid_firmament_pane_t

0x2065,	// (0x00057c8d) blid_sat_info_pane

0x2075,	// (0x00057c9d) blid_sat_info_pane_g1

0x2075,	// (0x00057c9d) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x00065337) blid_sat_info_pane_g

0x207f,	// (0x00057ca7) blid_sat_info_pane_t1

0x208d,	// (0x00057cb5) smil2_volume_content_pane

0x2096,	// (0x00057cbe) smil2_volume_pane_g1

0x0239,	// (0x00055e61) smil2_volume_content_pane_g1

0x209e,	// (0x00057cc6) smil2_volume_content_pane_g2

0x20a7,	// (0x00057ccf) smil2_volume_content_pane_g3

0x6c2f,	// (0x0005c857) smil2_volume_content_pane_g4

0x6c38,	// (0x0005c860) smil2_volume_content_pane_g5

0x6c41,	// (0x0005c869) smil2_volume_content_pane_g6

0x6c4a,	// (0x0005c872) smil2_volume_content_pane_g7

0x6c53,	// (0x0005c87b) smil2_volume_content_pane_g8

0x6c5c,	// (0x0005c884) smil2_volume_content_pane_g9

0x6c65,	// (0x0005c88d) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0006533c) smil2_volume_content_pane_g

0x3921,	// (0x00059549) cale_week_day_heading_pane_t1_ParamLimits

0x394e,	// (0x00059576) cale_week_day_heading_pane_t2_ParamLimits

0x397b,	// (0x000595a3) cale_week_day_heading_pane_t3_ParamLimits

0x39a8,	// (0x000595d0) cale_week_day_heading_pane_t4_ParamLimits

0x39d5,	// (0x000595fd) cale_week_day_heading_pane_t5_ParamLimits

0x3a02,	// (0x0005962a) cale_week_day_heading_pane_t6_ParamLimits

0x3a2f,	// (0x00059657) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00064e28) cale_week_day_heading_pane_t_ParamLimits

0xc336,	// (0x00061f5e) bg_cale_side_pane_ParamLimits

0x3a5c,	// (0x00059684) cale_week_time_pane_t1_ParamLimits

0x3a74,	// (0x0005969c) cale_week_time_pane_t2_ParamLimits

0x3a8c,	// (0x000596b4) cale_week_time_pane_t3_ParamLimits

0x3aa4,	// (0x000596cc) cale_week_time_pane_t4_ParamLimits

0x3abc,	// (0x000596e4) cale_week_time_pane_t5_ParamLimits

0x3ad4,	// (0x000596fc) cale_week_time_pane_t6_ParamLimits

0x3aec,	// (0x00059714) cale_week_time_pane_t7_ParamLimits

0x3b04,	// (0x0005972c) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00064e37) cale_week_time_pane_t_ParamLimits

0x3b1c,	// (0x00059744) cell_cale_week_pane_g2_ParamLimits

0xc336,	// (0x00061f5e) bg_cale_side_pane_cp01_ParamLimits

0x4986,	// (0x0005a5ae) cale_month_week_pane_t1_ParamLimits

0x499d,	// (0x0005a5c5) cale_month_week_pane_t2_ParamLimits

0x49b4,	// (0x0005a5dc) cale_month_week_pane_t3_ParamLimits

0x49cb,	// (0x0005a5f3) cale_month_week_pane_t4_ParamLimits

0x49e2,	// (0x0005a60a) cale_month_week_pane_t5_ParamLimits

0x49f9,	// (0x0005a621) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00064f10) cale_month_week_pane_t_ParamLimits

0xc73d,	// (0x00062365) cell_cale_month_pane_g1_ParamLimits

0xb9b1,	// (0x000615d9) main_cale_event_viewer_pane

0xb9b1,	// (0x000615d9) listscroll_cale_event_viewer_pane

0x6c6e,	// (0x0005c896) list_cale_ev_pane

0x6c76,	// (0x0005c89e) scroll_pane_cp023

0x6c82,	// (0x0005c8aa) field_cale_ev_pane_ParamLimits

0x6c82,	// (0x0005c8aa) field_cale_ev_pane

0x6ca0,	// (0x0005c8c8) field_cale_ev_content_pane_ParamLimits

0x6ca0,	// (0x0005c8c8) field_cale_ev_content_pane

0x6cac,	// (0x0005c8d4) field_cale_ev_pane_g1_ParamLimits

0x6cac,	// (0x0005c8d4) field_cale_ev_pane_g1

0x6cb8,	// (0x0005c8e0) field_cale_ev_pane_g2_ParamLimits

0x6cb8,	// (0x0005c8e0) field_cale_ev_pane_g2

0x6cd0,	// (0x0005c8f8) field_cale_ev_pane_g3_ParamLimits

0x6cd0,	// (0x0005c8f8) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00065351) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00065351) field_cale_ev_pane_g

0x6ce8,	// (0x0005c910) field_cale_ev_pane_t1_ParamLimits

0x6ce8,	// (0x0005c910) field_cale_ev_pane_t1

0x6cff,	// (0x0005c927) field_cale_ev_content_pane_t1_ParamLimits

0x6cff,	// (0x0005c927) field_cale_ev_content_pane_t1

0x099d,	// (0x000565c5) bg_button_pane_cp01

0xc18a,	// (0x00061db2) listscroll_cale_week_pane_ParamLimits

0x374d,	// (0x00059375) popup_toolbar_window_cp01

0xc324,	// (0x00061f4c) listscroll_cale_week_pane_t1_ParamLimits

0xc18a,	// (0x00061db2) listscroll_cale_day_pane_ParamLimits

0x4b56,	// (0x0005a77e) popup_toolbar_window_cp02

0xc324,	// (0x00061f4c) listscroll_cale_day_pane_t1_ParamLimits

0xc18a,	// (0x00061db2) main_cale_month_pane_ParamLimits

0x6149,	// (0x0005bd71) popup_toolbar_window_cp03_ParamLimits

0x6149,	// (0x0005bd71) popup_toolbar_window_cp03

0x57ee,	// (0x0005b416) main_image_pane_g2_ParamLimits

0x57ee,	// (0x0005b416) main_image_pane_g2

0x57ff,	// (0x0005b427) main_image_pane_g3_ParamLimits

0x57ff,	// (0x0005b427) main_image_pane_g3

0x0002,

0xf51a,	// (0x00065142) main_image_pane_g_ParamLimits

0xf51a,	// (0x00065142) main_image_pane_g

0x0ab7,	// (0x000566df) main_image_pane_t1_ParamLimits

0x5810,	// (0x0005b438) main_image_pane_t2_ParamLimits

0x5810,	// (0x0005b438) main_image_pane_t2

0x5822,	// (0x0005b44a) main_image_pane_t3_ParamLimits

0x5822,	// (0x0005b44a) main_image_pane_t3

0x584a,	// (0x0005b472) main_image_pane_t4_ParamLimits

0x584a,	// (0x0005b472) main_image_pane_t4

0x0003,

0xf521,	// (0x00065149) main_image_pane_t_ParamLimits

0xf521,	// (0x00065149) main_image_pane_t

0x586a,	// (0x0005b492) popup_image_details_window_cp01

0x5874,	// (0x0005b49c) popup_toobar_trans_pane_cp01_ParamLimits

0x5874,	// (0x0005b49c) popup_toobar_trans_pane_cp01

0x5ff4,	// (0x0005bc1c) popup_image_details_window_ParamLimits

0x5ff4,	// (0x0005bc1c) popup_image_details_window

0x1c4e,	// (0x00057876) popup_image_focus_window

0x640f,	// (0x0005c037) camera2_autofocus_pane_ParamLimits

0x640f,	// (0x0005c037) camera2_autofocus_pane

0xb9b1,	// (0x000615d9) bg_popup_sub_pane_cp06

0x6d1d,	// (0x0005c945) popup_image_focus_window_g1

0x6d25,	// (0x0005c94d) popup_image_focus_window_g2

0x6d2d,	// (0x0005c955) popup_image_focus_window_g3

0x6d35,	// (0x0005c95d) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00065358) popup_image_focus_window_g

0x6d3d,	// (0x0005c965) popup_image_focus_window_t1

0x6d4b,	// (0x0005c973) popup_image_focus_window_t2

0x6d5b,	// (0x0005c983) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00065361) popup_image_focus_window_t

0x6d69,	// (0x0005c991) camera2_autofocus_pane_g1

0x1c2e,	// (0x00057856) bg_tb_trans_pane_cp01

0x6da7,	// (0x0005c9cf) popup_image_details_window_g1

0x6dba,	// (0x0005c9e2) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00065373) popup_image_details_window_g

0x6de3,	// (0x0005ca0b) popup_image_details_window_t1

0x6df5,	// (0x0005ca1d) popup_image_details_window_t2

0x6e0e,	// (0x0005ca36) popup_image_details_window_t3

0x6e22,	// (0x0005ca4a) popup_image_details_window_t4

0x6e3d,	// (0x0005ca65) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0006537a) popup_image_details_window_t

0xc152,	// (0x00061d7a) bg_calc_paper_pane_ParamLimits

0xc166,	// (0x00061d8e) grid_highlight_pane_cp013

0xc170,	// (0x00061d98) list_calc_pane_ParamLimits

0xc182,	// (0x00061daa) scroll_pane_cp024

0xc18a,	// (0x00061db2) bg_calc_display_pane_ParamLimits

0x357e,	// (0x000591a6) calc_display_pane_t1_ParamLimits

0x3590,	// (0x000591b8) calc_display_pane_t2_ParamLimits

0xc196,	// (0x00061dbe) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00064daa) calc_display_pane_t_ParamLimits

0x364a,	// (0x00059272) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00064dc7) cell_calc_pane_g

0x3653,	// (0x0005927b) cell_calc_pane_t1

0xc20d,	// (0x00061e35) grid_highlight_pane_cp02_ParamLimits

0xc223,	// (0x00061e4b) toolbar_button_pane_cp01_ParamLimits

0xc223,	// (0x00061e4b) toolbar_button_pane_cp01

0x0afc,	// (0x00056724) temp_image_control_pane_ParamLimits

0x0afc,	// (0x00056724) temp_image_control_pane

0x1c2e,	// (0x00057856) main_mp3_pane

0x6e57,	// (0x0005ca7f) temp_image_control_pane_g1_ParamLimits

0x6e57,	// (0x0005ca7f) temp_image_control_pane_g1

0x6e65,	// (0x0005ca8d) temp_image_control_pane_g2_ParamLimits

0x6e65,	// (0x0005ca8d) temp_image_control_pane_g2

0x6e77,	// (0x0005ca9f) temp_image_control_pane_g3_ParamLimits

0x6e77,	// (0x0005ca9f) temp_image_control_pane_g3

0x6e87,	// (0x0005caaf) temp_image_control_pane_g4_ParamLimits

0x6e87,	// (0x0005caaf) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x00065385) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x00065385) temp_image_control_pane_g

0x6e57,	// (0x0005ca7f) main_mp3_pane_g1

0x6e9a,	// (0x0005cac2) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0006538e) main_mp3_pane_g

0x6ef5,	// (0x0005cb1d) main_mp3_pane_t1

0xc405,	// (0x0006202d) main_camera_pane_g8_ParamLimits

0xc405,	// (0x0006202d) main_camera_pane_g8

0x3dd6,	// (0x000599fe) main_video_pane_g7_ParamLimits

0x3dd6,	// (0x000599fe) main_video_pane_g7

0xc87e,	// (0x000624a6) main_camera2_pane_t7_ParamLimits

0xc87e,	// (0x000624a6) main_camera2_pane_t7

0xc553,	// (0x0006217b) scroll_pane_cp025_ParamLimits

0xc553,	// (0x0006217b) scroll_pane_cp025

0xc567,	// (0x0006218f) scroll_pane_cp026_ParamLimits

0xc567,	// (0x0006218f) scroll_pane_cp026

0xc576,	// (0x0006219e) wml_content_pane_ParamLimits

0xb9b1,	// (0x000615d9) main_touch_calib_pane

0x6fc8,	// (0x0005cbf0) main_touch_calib_pane_g1

0x6fd4,	// (0x0005cbfc) main_touch_calib_pane_g2

0x6fe0,	// (0x0005cc08) main_touch_calib_pane_g3

0x6fec,	// (0x0005cc14) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x000653ac) main_touch_calib_pane_g

0x6ff8,	// (0x0005cc20) main_touch_calib_pane_t1

0x7012,	// (0x0005cc3a) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x000653b5) main_touch_calib_pane_t

0x0775,	// (0x0005639d) mup_progress_pane_cp02

0x0794,	// (0x000563bc) navi_pane_g1

0x07f6,	// (0x0005641e) navi_pane_mp_t3

0x1c2e,	// (0x00057856) main_mp3_pane_ParamLimits

0x6187,	// (0x0005bdaf) navi_pane_ParamLimits

0x6e57,	// (0x0005ca7f) main_mp3_pane_g1_ParamLimits

0x6e9a,	// (0x0005cac2) main_mp3_pane_g2_ParamLimits

0x6ea8,	// (0x0005cad0) main_mp3_pane_g3_ParamLimits

0x6ea8,	// (0x0005cad0) main_mp3_pane_g3

0x6eb6,	// (0x0005cade) main_mp3_pane_g4_ParamLimits

0x6eb6,	// (0x0005cade) main_mp3_pane_g4

0x6ec2,	// (0x0005caea) main_mp3_pane_g5_ParamLimits

0x6ec2,	// (0x0005caea) main_mp3_pane_g5

0x6ed0,	// (0x0005caf8) main_mp3_pane_g6_ParamLimits

0x6ed0,	// (0x0005caf8) main_mp3_pane_g6

0x6edd,	// (0x0005cb05) main_mp3_pane_g7_ParamLimits

0x6edd,	// (0x0005cb05) main_mp3_pane_g7

0x6ee9,	// (0x0005cb11) main_mp3_pane_g8_ParamLimits

0x6ee9,	// (0x0005cb11) main_mp3_pane_g8

0xf766,	// (0x0006538e) main_mp3_pane_g_ParamLimits

0x6f03,	// (0x0005cb2b) main_mp3_pane_t2

0x6f11,	// (0x0005cb39) main_mp3_pane_t3

0x6f1f,	// (0x0005cb47) main_mp3_pane_t4

0x6f2d,	// (0x0005cb55) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0006539f) main_mp3_pane_t

0x6f49,	// (0x0005cb71) mup_progress_pane_cp01

0x305c,	// (0x00058c84) aid_zoom_text_secondary2

0x6c6e,	// (0x0005c896) list_cale_ev2_pane

0x6c76,	// (0x0005c89e) scroll_pane_cp023_ParamLimits

0x7068,	// (0x0005cc90) field_cale_ev2_pane_ParamLimits

0x7068,	// (0x0005cc90) field_cale_ev2_pane

0x7088,	// (0x0005ccb0) field_cale_ev2_pane_g1_ParamLimits

0x7088,	// (0x0005ccb0) field_cale_ev2_pane_g1

0x7094,	// (0x0005ccbc) field_cale_ev2_pane_g2_ParamLimits

0x7094,	// (0x0005ccbc) field_cale_ev2_pane_g2

0x70ac,	// (0x0005ccd4) field_cale_ev2_pane_g3_ParamLimits

0x70ac,	// (0x0005ccd4) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x000653c0) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x000653c0) field_cale_ev2_pane_g

0x70d0,	// (0x0005ccf8) field_cale_ev2_pane_t1_ParamLimits

0x70d0,	// (0x0005ccf8) field_cale_ev2_pane_t1

0x70e7,	// (0x0005cd0f) field_cale_ev2_pane_t2_ParamLimits

0x70e7,	// (0x0005cd0f) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x000653c9) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x000653c9) field_cale_ev2_pane_t

0x56a3,	// (0x0005b2cb) main_postcard_pane_g5_ParamLimits

0x56a3,	// (0x0005b2cb) main_postcard_pane_g5

0x56b9,	// (0x0005b2e1) main_postcard_pane_g6_ParamLimits

0x56b9,	// (0x0005b2e1) main_postcard_pane_g6

0x3b96,	// (0x000597be) camera2_autofocus_pane_cp_ParamLimits

0x3b96,	// (0x000597be) camera2_autofocus_pane_cp

0x1c2e,	// (0x00057856) main_mup3_pane

0x711c,	// (0x0005cd44) main_mup3_pane_g1_ParamLimits

0x711c,	// (0x0005cd44) main_mup3_pane_g1

0x713e,	// (0x0005cd66) main_mup3_pane_g2_ParamLimits

0x713e,	// (0x0005cd66) main_mup3_pane_g2

0x71bc,	// (0x0005cde4) main_mup3_pane_g3_ParamLimits

0x71bc,	// (0x0005cde4) main_mup3_pane_g3

0x71fe,	// (0x0005ce26) main_mup3_pane_g4_ParamLimits

0x71fe,	// (0x0005ce26) main_mup3_pane_g4

0x7240,	// (0x0005ce68) main_mup3_pane_g5_ParamLimits

0x7240,	// (0x0005ce68) main_mup3_pane_g5

0x7282,	// (0x0005ceaa) main_mup3_pane_g6_ParamLimits

0x7282,	// (0x0005ceaa) main_mup3_pane_g6

0x7293,	// (0x0005cebb) main_mup3_pane_g7_ParamLimits

0x7293,	// (0x0005cebb) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x000653d9) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x000653d9) main_mup3_pane_g

0x730a,	// (0x0005cf32) main_mup3_pane_t1_ParamLimits

0x730a,	// (0x0005cf32) main_mup3_pane_t1

0x737a,	// (0x0005cfa2) main_mup3_pane_t2_ParamLimits

0x737a,	// (0x0005cfa2) main_mup3_pane_t2

0x744a,	// (0x0005d072) main_mup3_pane_t4_ParamLimits

0x744a,	// (0x0005d072) main_mup3_pane_t4

0x74a0,	// (0x0005d0c8) main_mup3_pane_t5_ParamLimits

0x74a0,	// (0x0005d0c8) main_mup3_pane_t5

0x7554,	// (0x0005d17c) main_mup3_pane_t6_ParamLimits

0x7554,	// (0x0005d17c) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x000653ea) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x000653ea) main_mup3_pane_t

0x7608,	// (0x0005d230) mup3_progress_pane_ParamLimits

0x7608,	// (0x0005d230) mup3_progress_pane

0x768a,	// (0x0005d2b2) popup_mup3_control_window_ParamLimits

0x768a,	// (0x0005d2b2) popup_mup3_control_window

0x76a6,	// (0x0005d2ce) popup_mup3_text_window

0x76c4,	// (0x0005d2ec) mup3_progress_pane_t1

0x76db,	// (0x0005d303) mup3_progress_pane_t2

0x76f2,	// (0x0005d31a) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x000653f7) mup3_progress_pane_t

0x7709,	// (0x0005d331) mup_progress_pane_cp03

0xb9b1,	// (0x000615d9) bg_tb_trans_pane_cp04

0x7719,	// (0x0005d341) mup3_volume_pane

0x7721,	// (0x0005d349) popup_mup3_control_window_g1

0x772a,	// (0x0005d352) mup3_volume_pane_g1

0x7733,	// (0x0005d35b) mup3_volume_pane_g2

0x773c,	// (0x0005d364) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000653fe) mup3_volume_pane_g

0xb9b1,	// (0x000615d9) bg_tb_trans_pane_cp03

0x7745,	// (0x0005d36d) popup_mup3_text_window_g1

0x774d,	// (0x0005d375) popup_mup3_text_window_t1

0xc1e4,	// (0x00061e0c) list_calc_item_pane_g1_ParamLimits

0x1dc8,	// (0x000579f0) mup_volume_pane_cp_g1

0x702c,	// (0x0005cc54) main_touch_calib_pane_t3

0x7040,	// (0x0005cc68) main_touch_calib_pane_t4

0x7054,	// (0x0005cc7c) main_touch_calib_pane_t5

0xb9bb,	// (0x000615e3) aid_cell_size_toolbar2

0xb9c3,	// (0x000615eb) aid_popup3_width_pane

0x3054,	// (0x00058c7c) aid_zoom_text_msg_primary

0xc3e5,	// (0x0006200d) vorec_t7

0xc1a8,	// (0x00061dd0) bg_calc_paper_pane_g1_ParamLimits

0xc1b4,	// (0x00061ddc) bg_calc_paper_pane_g2_ParamLimits

0xc1c0,	// (0x00061de8) bg_calc_paper_pane_g3_ParamLimits

0xc1cc,	// (0x00061df4) bg_calc_paper_pane_g4_ParamLimits

0xc1d8,	// (0x00061e00) bg_calc_paper_pane_g5_ParamLimits

0x35d7,	// (0x000591ff) bg_calc_paper_pane_g6_ParamLimits

0x35e6,	// (0x0005920e) bg_calc_paper_pane_g7_ParamLimits

0x35f5,	// (0x0005921d) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00064db1) bg_calc_paper_pane_g_ParamLimits

0x3608,	// (0x00059230) calc_bg_paper_pane_g9_ParamLimits

0x3ce4,	// (0x0005990c) image_qvga_pane_ParamLimits

0x3ce4,	// (0x0005990c) image_qvga_pane

0xc087,	// (0x00061caf) bg_popup_sub_pane_cp04_ParamLimits

0x0a33,	// (0x0005665b) popup_mup_playback_window_g1_ParamLimits

0x0a3f,	// (0x00056667) popup_mup_playback_window_t1_ParamLimits

0x0a54,	// (0x0005667c) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0006513d) popup_mup_playback_window_t_ParamLimits

0x6902,	// (0x0005c52a) main_mup2_pane_g3_ParamLimits

0x6902,	// (0x0005c52a) main_mup2_pane_g3

0x4085,	// (0x00059cad) popup_toolbar_window_cp04

0x0e36,	// (0x00056a5e) popup_call2_audio_second_window_g3_ParamLimits

0x0e36,	// (0x00056a5e) popup_call2_audio_second_window_g3

0x1240,	// (0x00056e68) popup_call2_audio_first_window_g4_ParamLimits

0x1240,	// (0x00056e68) popup_call2_audio_first_window_g4

0x18bf,	// (0x000574e7) popup_call2_audio_in_window_g4_ParamLimits

0x18bf,	// (0x000574e7) popup_call2_audio_in_window_g4

0x57d0,	// (0x0005b3f8) aid_area_sk_bg_cut_ParamLimits

0x57d0,	// (0x0005b3f8) aid_area_sk_bg_cut

0x0a69,	// (0x00056691) aid_area_sk_bg_cut_2_ParamLimits

0x0a69,	// (0x00056691) aid_area_sk_bg_cut_2

0x6c05,	// (0x0005c82d) aid_placing_details_win

0x6c0d,	// (0x0005c835) aid_placing_details_win_2

0x6d69,	// (0x0005c991) camera2_autofocus_pane_g1_ParamLimits

0x31eb,	// (0x00058e13) popup_fixed_preview_cale_window_ParamLimits

0x31eb,	// (0x00058e13) popup_fixed_preview_cale_window

0x0845,	// (0x0005646d) navi_slider_pane_g3

0x084e,	// (0x00056476) navi_slider_pane_g4

0x0857,	// (0x0005647f) navi_slider_pane_g5

0x0845,	// (0x0005646d) navi_slider_pane_g6

0xc7ff,	// (0x00062427) navi_slider_pane_g7

0x096a,	// (0x00056592) mup_scale_pane_g3

0x0973,	// (0x0005659b) mup_scale_pane_g4

0x097c,	// (0x000565a4) mup_scale_pane_g5

0x5480,	// (0x0005b0a8) mup_scale_pane_g6

0x5489,	// (0x0005b0b1) mup_scale_pane_g7

0x0845,	// (0x0005646d) cams2_slider_pane_g3

0x1e4a,	// (0x00057a72) cams2_slider_pane_g4

0xc8e4,	// (0x0006250c) cams2_slider_pane_g5

0x0845,	// (0x0005646d) cams2_slider_pane_g6

0xc8ec,	// (0x00062514) cams2_slider_pane_g7

0x2075,	// (0x00057c9d) camera2_autofocus_pane_cp_g1

0x775b,	// (0x0005d383) bg_popup_preview_window_pane_cp02_ParamLimits

0x775b,	// (0x0005d383) bg_popup_preview_window_pane_cp02

0x7767,	// (0x0005d38f) list_fp_cale_pane_ParamLimits

0x7767,	// (0x0005d38f) list_fp_cale_pane

0x7773,	// (0x0005d39b) popup_fixed_preview_cale_window_t1_ParamLimits

0x7773,	// (0x0005d39b) popup_fixed_preview_cale_window_t1

0x7785,	// (0x0005d3ad) popup_fixed_preview_cale_window_t2_ParamLimits

0x7785,	// (0x0005d3ad) popup_fixed_preview_cale_window_t2

0x779a,	// (0x0005d3c2) popup_fixed_preview_cale_window_t3_ParamLimits

0x779a,	// (0x0005d3c2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x00065405) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x00065405) popup_fixed_preview_cale_window_t

0x77bb,	// (0x0005d3e3) list_single_fp_cale_pane_ParamLimits

0x77bb,	// (0x0005d3e3) list_single_fp_cale_pane

0x77d0,	// (0x0005d3f8) list_single_fp_cale_pane_g1_ParamLimits

0x77d0,	// (0x0005d3f8) list_single_fp_cale_pane_g1

0x77dc,	// (0x0005d404) list_single_fp_cale_pane_g2_ParamLimits

0x77dc,	// (0x0005d404) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0006540c) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0006540c) list_single_fp_cale_pane_g

0x77f5,	// (0x0005d41d) list_single_fp_cale_pane_t1_ParamLimits

0x77f5,	// (0x0005d41d) list_single_fp_cale_pane_t1

0x7807,	// (0x0005d42f) list_single_fp_cale_pane_t2_ParamLimits

0x7807,	// (0x0005d42f) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00065413) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00065413) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb9b1,	// (0x000615d9) main_dialer_pane

0x783a,	// (0x0005d462) aid_cell_size_keypad

0x7844,	// (0x0005d46c) dialer_ne_pane

0x784c,	// (0x0005d474) grid_dialer_command_1_pane

0x7854,	// (0x0005d47c) grid_dialer_command_2_pane

0x785c,	// (0x0005d484) grid_dialer_keypad_pane

0x786e,	// (0x0005d496) bg_popup_call_pane_cp06_ParamLimits

0x786e,	// (0x0005d496) bg_popup_call_pane_cp06

0x787a,	// (0x0005d4a2) dialer_ne_clear_pane_ParamLimits

0x787a,	// (0x0005d4a2) dialer_ne_clear_pane

0x7886,	// (0x0005d4ae) dialer_ne_pane_g1

0x788e,	// (0x0005d4b6) dialer_ne_pane_t1_ParamLimits

0x788e,	// (0x0005d4b6) dialer_ne_pane_t1

0x78a0,	// (0x0005d4c8) dialer_ne_pane_t2_ParamLimits

0x78a0,	// (0x0005d4c8) dialer_ne_pane_t2

0x78ca,	// (0x0005d4f2) dialer_ne_pane_t3_ParamLimits

0x78ca,	// (0x0005d4f2) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x00065418) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x00065418) dialer_ne_pane_t

0x78fa,	// (0x0005d522) dialer_ne_pane_t3_copy1_ParamLimits

0x78fa,	// (0x0005d522) dialer_ne_pane_t3_copy1

0x7929,	// (0x0005d551) cell_dialer_keypad_pane_ParamLimits

0x7929,	// (0x0005d551) cell_dialer_keypad_pane

0x7940,	// (0x0005d568) cell_dialer_command_1_pane_ParamLimits

0x7940,	// (0x0005d568) cell_dialer_command_1_pane

0x7956,	// (0x0005d57e) cell_dialer_command_2_pane_ParamLimits

0x7956,	// (0x0005d57e) cell_dialer_command_2_pane

0x7965,	// (0x0005d58d) bg_button_pane_cp02_ParamLimits

0x7965,	// (0x0005d58d) bg_button_pane_cp02

0x7971,	// (0x0005d599) cell_dialer_keypad_pane_g1_ParamLimits

0x7971,	// (0x0005d599) cell_dialer_keypad_pane_g1

0x7965,	// (0x0005d58d) bg_button_pane_cp03_ParamLimits

0x7965,	// (0x0005d58d) bg_button_pane_cp03

0x7985,	// (0x0005d5ad) cell_dialer_command_1_pane_g1_ParamLimits

0x7985,	// (0x0005d5ad) cell_dialer_command_1_pane_g1

0x7999,	// (0x0005d5c1) bg_button_pane_cp04

0x79a1,	// (0x0005d5c9) cell_dialer_command_2_pane_g1

0x0834,	// (0x0005645c) bg_button_pane_cp06

0x79a9,	// (0x0005d5d1) dialer_ne_clear_pane_g1

0x4fc4,	// (0x0005abec) navi_pane_g2

0x4ff2,	// (0x0005ac1a) navi_pane_g3

0x0002,

0xf418,	// (0x00065040) navi_pane_g

0x501b,	// (0x0005ac43) navi_pane_mv_g2

0x5042,	// (0x0005ac6a) navi_pane_mv_g5

0x504a,	// (0x0005ac72) navi_pane_mv_t1

0xc18a,	// (0x00061db2) main_clock2_pane

0x79dd,	// (0x0005d605) main_clock2_list_pane_ParamLimits

0x79dd,	// (0x0005d605) main_clock2_list_pane

0x7a13,	// (0x0005d63b) main_clock2_pane_t1_ParamLimits

0x7a13,	// (0x0005d63b) main_clock2_pane_t1

0x7a4f,	// (0x0005d677) main_clock2_pane_t2_ParamLimits

0x7a4f,	// (0x0005d677) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0006541f) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0006541f) main_clock2_pane_t

0x7ad9,	// (0x0005d701) popup_clock_analogue_window_cp03_ParamLimits

0x7ad9,	// (0x0005d701) popup_clock_analogue_window_cp03

0x7afe,	// (0x0005d726) popup_clock_digital_window_cp02_ParamLimits

0x7afe,	// (0x0005d726) popup_clock_digital_window_cp02

0x7b6f,	// (0x0005d797) main_clock2_list_single_pane_ParamLimits

0x7b6f,	// (0x0005d797) main_clock2_list_single_pane

0x0834,	// (0x0005645c) list_highlight_pane_cp05

0x7b81,	// (0x0005d7a9) main_clock2_list_single_pane_t1

0x4085,	// (0x00059cad) popup_toolbar_window_cp04_ParamLimits

0x6d77,	// (0x0005c99f) camera2_autofocus_pane_g2_ParamLimits

0x6d77,	// (0x0005c99f) camera2_autofocus_pane_g2

0x6d83,	// (0x0005c9ab) camera2_autofocus_pane_g3_ParamLimits

0x6d83,	// (0x0005c9ab) camera2_autofocus_pane_g3

0x6d8f,	// (0x0005c9b7) camera2_autofocus_pane_g4_ParamLimits

0x6d8f,	// (0x0005c9b7) camera2_autofocus_pane_g4

0x6d9b,	// (0x0005c9c3) camera2_autofocus_pane_g5_ParamLimits

0x6d9b,	// (0x0005c9c3) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00065368) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00065368) camera2_autofocus_pane_g

0x70fc,	// (0x0005cd24) camera2_autofocus_pane_cp_g2

0x7104,	// (0x0005cd2c) camera2_autofocus_pane_cp_g3

0x710c,	// (0x0005cd34) camera2_autofocus_pane_cp_g4

0x7114,	// (0x0005cd3c) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x000653ce) camera2_autofocus_pane_cp_g

0x7866,	// (0x0005d48e) popup_dialer_spcha_window

0xb9b1,	// (0x000615d9) bg_popup_sub_pane_cp07

0x7c27,	// (0x0005d84f) list_spcha_pane

0x7c2f,	// (0x0005d857) list_single_spcha_pane_ParamLimits

0x7c2f,	// (0x0005d857) list_single_spcha_pane

0xb9b1,	// (0x000615d9) list_highlight_pane_cp06

0x7c40,	// (0x0005d868) list_single_spcha_pane_t1

0x1669,	// (0x00057291) popup_call2_audio_out_window_g4_ParamLimits

0x1669,	// (0x00057291) popup_call2_audio_out_window_g4

0xb9b1,	// (0x000615d9) main_imed2_pane

0x1c56,	// (0x0005787e) popup_imed_adjust2_window

0x600c,	// (0x0005bc34) popup_imed_trans_window_ParamLimits

0x600c,	// (0x0005bc34) popup_imed_trans_window

0x1eb3,	// (0x00057adb) popup_blid_sat_info2_window_t1

0x1ec1,	// (0x00057ae9) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000652fd) popup_blid_sat_info2_window_t

0x7c4e,	// (0x0005d876) aid_size_cell_colour_35

0x7c6e,	// (0x0005d896) aid_size_cell_colour_112

0x7c8e,	// (0x0005d8b6) aid_size_cell_effect

0x1c20,	// (0x00057848) bg_tb_trans_pane_cp02

0x0375,	// (0x00055f9d) heading_imed_pane

0x7cae,	// (0x0005d8d6) listscroll_imed_pane

0x7cba,	// (0x0005d8e2) heading_imed_pane_g1

0x7cc2,	// (0x0005d8ea) heading_imed_pane_t1

0x7cd0,	// (0x0005d8f8) grid_imed_colour_35_pane_ParamLimits

0x7cd0,	// (0x0005d8f8) grid_imed_colour_35_pane

0x7ce7,	// (0x0005d90f) grid_imed_effect_pane

0x7cfd,	// (0x0005d925) list_imed_aspect_pane

0x7d05,	// (0x0005d92d) scroll_pane_cp027_ParamLimits

0x7d05,	// (0x0005d92d) scroll_pane_cp027

0x7d16,	// (0x0005d93e) cell_imed_effect_pane_ParamLimits

0x7d16,	// (0x0005d93e) cell_imed_effect_pane

0x7d3d,	// (0x0005d965) cell_imed_colour_pane_ParamLimits

0x7d3d,	// (0x0005d965) cell_imed_colour_pane

0x7d7f,	// (0x0005d9a7) cell_imed_colour_pane_g1_ParamLimits

0x7d7f,	// (0x0005d9a7) cell_imed_colour_pane_g1

0x7d90,	// (0x0005d9b8) hgihlgiht_grid_pane_cp016_ParamLimits

0x7d90,	// (0x0005d9b8) hgihlgiht_grid_pane_cp016

0x7da1,	// (0x0005d9c9) cell_imed_effect_pane_g1

0x7da9,	// (0x0005d9d1) grid_highlight_pane_cp017

0x7db2,	// (0x0005d9da) list_imed_single_pane_ParamLimits

0x7db2,	// (0x0005d9da) list_imed_single_pane

0xb9b1,	// (0x000615d9) list_highlight_pane_cp07

0xc8f5,	// (0x0006251d) list_imed_aspect_pane_comp1_t1

0x1c20,	// (0x00057848) bg_tb_trans_pane_cp05

0xc917,	// (0x0006253f) popup_imed_adjust2_window_g1

0xc93e,	// (0x00062566) popup_imed_adjust2_window_t1

0xc956,	// (0x0006257e) slider_imed_adjust_pane

0xc96a,	// (0x00062592) slider_imed_adjust_pane_g1

0xc97a,	// (0x000625a2) slider_imed_adjust_pane_g2

0xc98a,	// (0x000625b2) slider_imed_adjust_pane_g3

0xc99b,	// (0x000625c3) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0006543c) slider_imed_adjust_pane_g

0x7dc7,	// (0x0005d9ef) aid_size_cell_clipart2

0x7dd3,	// (0x0005d9fb) grid_imed_clipart_pane

0xc9ac,	// (0x000625d4) scroll_pane_cp031

0x7ddd,	// (0x0005da05) cell_imed_clipart_pane_ParamLimits

0x7ddd,	// (0x0005da05) cell_imed_clipart_pane

0x7dff,	// (0x0005da27) cell_imed_clipart_pane_g1

0xb9b1,	// (0x000615d9) grid_highlight_pane_cp014

0x79f2,	// (0x0005d61a) main_clock2_pane_g1_ParamLimits

0x79f2,	// (0x0005d61a) main_clock2_pane_g1

0x7b1a,	// (0x0005d742) aid_call2_pane_cp10

0x7b2c,	// (0x0005d754) aid_call_pane_cp10

0x0769,	// (0x00056391) popup_clock_analogue_window_cp10_g1

0x0769,	// (0x00056391) popup_clock_analogue_window_cp10_g2

0x7b3e,	// (0x0005d766) popup_clock_analogue_window_cp10_g3

0x7b3e,	// (0x0005d766) popup_clock_analogue_window_cp10_g4

0x0769,	// (0x00056391) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0006542a) popup_clock_analogue_window_cp10_g

0x7b50,	// (0x0005d778) popup_clock_analogue_window_cp10_t1

0x7b8f,	// (0x0005d7b7) clock_digital_number_pane_cp10_ParamLimits

0x7b8f,	// (0x0005d7b7) clock_digital_number_pane_cp10

0x7ba7,	// (0x0005d7cf) clock_digital_number_pane_cp11_ParamLimits

0x7ba7,	// (0x0005d7cf) clock_digital_number_pane_cp11

0x7bbf,	// (0x0005d7e7) clock_digital_number_pane_cp12_ParamLimits

0x7bbf,	// (0x0005d7e7) clock_digital_number_pane_cp12

0x7bd7,	// (0x0005d7ff) clock_digital_number_pane_cp13_ParamLimits

0x7bd7,	// (0x0005d7ff) clock_digital_number_pane_cp13

0x7bef,	// (0x0005d817) clock_digital_separator_pane_cp10_ParamLimits

0x7bef,	// (0x0005d817) clock_digital_separator_pane_cp10

0x7c07,	// (0x0005d82f) popup_clock_digital_window_cp02_t1_ParamLimits

0x7c07,	// (0x0005d82f) popup_clock_digital_window_cp02_t1

0xc07f,	// (0x00061ca7) clock_digital_number_pane_cp10_g1

0xc07f,	// (0x00061ca7) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00065445) clock_digital_number_pane_cp10_g

0xc07f,	// (0x00061ca7) clock_digital_separator_pane_cp10_g1

0xc07f,	// (0x00061ca7) clock_digital_separator_pane_g2_cp10

0x0804,	// (0x0005642c) navi_pane_vded_g4

0x080d,	// (0x00056435) navi_pane_vded_g5

0x0816,	// (0x0005643e) navi_pane_vded_t1

0xb9b1,	// (0x000615d9) main_vded_pane

0x7e08,	// (0x0005da30) main_vded_pane_g1

0x7e12,	// (0x0005da3a) main_vded_pane_g2

0x7e1c,	// (0x0005da44) main_vded_pane_g3

0x0002,

0xf822,	// (0x0006544a) main_vded_pane_g

0x7e26,	// (0x0005da4e) main_vded_pane_t1

0x7e34,	// (0x0005da5c) main_vded_pane_t2

0x0001,

0xf829,	// (0x00065451) main_vded_pane_t

0x7e42,	// (0x0005da6a) vded_slider_pane

0x7e4a,	// (0x0005da72) vded_video_pane

0xc9b4,	// (0x000625dc) vded_video_pane_g1

0x7e52,	// (0x0005da7a) vded_video_pane_g2

0x2075,	// (0x00057c9d) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00065456) vded_video_pane_g

0xc9be,	// (0x000625e6) vded_slider_pane_g1

0x1dc8,	// (0x000579f0) vded_slider_pane_g2

0xc9c7,	// (0x000625ef) vded_slider_pane_g3

0xc9d0,	// (0x000625f8) vded_slider_pane_g4

0xc9d9,	// (0x00062601) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0006545d) vded_slider_pane_g

0x7672,	// (0x0005d29a) mup3_rocker_pane_ParamLimits

0x7672,	// (0x0005d29a) mup3_rocker_pane

0x7e5b,	// (0x0005da83) mup3_control_keys_pane_g1

0x7e63,	// (0x0005da8b) mup3_control_keys_pane_g2

0x7e6b,	// (0x0005da93) mup3_control_keys_pane_g3

0x7e73,	// (0x0005da9b) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00065468) mup3_control_keys_pane_g

0x3222,	// (0x00058e4a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3222,	// (0x00058e4a) popup_toolbar2_fixed_window_cp01

0x76ae,	// (0x0005d2d6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x76ae,	// (0x0005d2d6) popup_toolbar2_fixed_window_cp02

0x0fa8,	// (0x00056bd0) popup_call2_audio_second_window_t4_ParamLimits

0x0fa8,	// (0x00056bd0) popup_call2_audio_second_window_t4

0x14d6,	// (0x000570fe) popup_call2_audio_first_window_t6_ParamLimits

0x14d6,	// (0x000570fe) popup_call2_audio_first_window_t6

0x176c,	// (0x00057394) popup_call2_audio_out_window_t6_ParamLimits

0x176c,	// (0x00057394) popup_call2_audio_out_window_t6

0xb9b1,	// (0x000615d9) main_vitu_pane

0x7e83,	// (0x0005daab) aid_size_cell_itu_ParamLimits

0x7e83,	// (0x0005daab) aid_size_cell_itu

0x1c2e,	// (0x00057856) bg_popup_window_pane_cp08_ParamLimits

0x1c2e,	// (0x00057856) bg_popup_window_pane_cp08

0x7e99,	// (0x0005dac1) field_vitu_entry_pane_ParamLimits

0x7e99,	// (0x0005dac1) field_vitu_entry_pane

0x7eb0,	// (0x0005dad8) grid_vitu_function_pane_ParamLimits

0x7eb0,	// (0x0005dad8) grid_vitu_function_pane

0x7ecb,	// (0x0005daf3) grid_vitu_itu_pane_ParamLimits

0x7ecb,	// (0x0005daf3) grid_vitu_itu_pane

0x7ee9,	// (0x0005db11) cell_vitu_itu_pane_ParamLimits

0x7ee9,	// (0x0005db11) cell_vitu_itu_pane

0x7f0b,	// (0x0005db33) cell_vitu_function_pane_ParamLimits

0x7f0b,	// (0x0005db33) cell_vitu_function_pane

0x1c2e,	// (0x00057856) bg_popup_sub_pane_cp08_ParamLimits

0x1c2e,	// (0x00057856) bg_popup_sub_pane_cp08

0x7f24,	// (0x0005db4c) field_vitu_entry_pane_t1_ParamLimits

0x7f24,	// (0x0005db4c) field_vitu_entry_pane_t1

0xc9fa,	// (0x00062622) field_vitu_entry_pane_t2_ParamLimits

0xc9fa,	// (0x00062622) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00065476) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00065476) field_vitu_entry_pane_t

0xca17,	// (0x0006263f) bg_button_pane_cp05_ParamLimits

0xca17,	// (0x0006263f) bg_button_pane_cp05

0x7f42,	// (0x0005db6a) cell_vitu_itu_pane_g1

0x7f5a,	// (0x0005db82) cell_vitu_itu_pane_t1_ParamLimits

0x7f5a,	// (0x0005db82) cell_vitu_itu_pane_t1

0x7f6c,	// (0x0005db94) cell_vitu_itu_pane_t2_ParamLimits

0x7f6c,	// (0x0005db94) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0006547b) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0006547b) cell_vitu_itu_pane_t

0xca25,	// (0x0006264d) bg_button_pane_cp07

0x7fa1,	// (0x0005dbc9) cell_vitu_function_pane_g1

0xc11a,	// (0x00061d42) main_calc_pane_g1

0x3048,	// (0x00058c70) aid_visual_content_pane

0xb9b1,	// (0x000615d9) main_vradio_pane

0x7faa,	// (0x0005dbd2) main_vradio_pane_g1_ParamLimits

0x7faa,	// (0x0005dbd2) main_vradio_pane_g1

0xca2f,	// (0x00062657) main_vradio_pane_g2_ParamLimits

0xca2f,	// (0x00062657) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00065482) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00065482) main_vradio_pane_g

0x7fc3,	// (0x0005dbeb) main_vradio_pane_t1_ParamLimits

0x7fc3,	// (0x0005dbeb) main_vradio_pane_t1

0x7fd8,	// (0x0005dc00) main_vradio_pane_t2_ParamLimits

0x7fd8,	// (0x0005dc00) main_vradio_pane_t2

0xca3c,	// (0x00062664) main_vradio_pane_t3_ParamLimits

0xca3c,	// (0x00062664) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00065487) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00065487) main_vradio_pane_t

0x7fed,	// (0x0005dc15) vradio_rocker_control_pane_ParamLimits

0x7fed,	// (0x0005dc15) vradio_rocker_control_pane

0x7fff,	// (0x0005dc27) vradio_station_info_pane_ParamLimits

0x7fff,	// (0x0005dc27) vradio_station_info_pane

0xca50,	// (0x00062678) vradio_frequency_info_pane_ParamLimits

0xca50,	// (0x00062678) vradio_frequency_info_pane

0x2075,	// (0x00057c9d) vradio_station_info_pane_g1

0xca5f,	// (0x00062687) vradio_station_info_pane_t1_ParamLimits

0xca5f,	// (0x00062687) vradio_station_info_pane_t1

0xca81,	// (0x000626a9) vradio_station_info_pane_t2_ParamLimits

0xca81,	// (0x000626a9) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0006548e) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0006548e) vradio_station_info_pane_t

0xca93,	// (0x000626bb) vradio_tuning_pane

0xca9b,	// (0x000626c3) vradio_rocker_control_pane_g1

0xcaa3,	// (0x000626cb) vradio_rocker_control_pane_g2

0xcaab,	// (0x000626d3) vradio_rocker_control_pane_g3

0xcab3,	// (0x000626db) vradio_rocker_control_pane_g4

0xcabb,	// (0x000626e3) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00065493) vradio_rocker_control_pane_g

0x8011,	// (0x0005dc39) vradio_frequency_info_pane_g1

0xcac3,	// (0x000626eb) vradio_frequency_info_pane_t1_ParamLimits

0xcac3,	// (0x000626eb) vradio_frequency_info_pane_t1

0x801b,	// (0x0005dc43) vradio_tuning_pane_g1

0x8026,	// (0x0005dc4e) vradio_tuning_pane_t1

0xb9d7,	// (0x000615ff) area_side_right_pane_ParamLimits

0xb9d7,	// (0x000615ff) area_side_right_pane

0x1be7,	// (0x0005780f) status_small_pane_g1

0x1bef,	// (0x00057817) status_small_pane_g2

0x1bf8,	// (0x00057820) status_small_pane_g3

0x1c01,	// (0x00057829) status_small_pane_g4

0x0003,

0xf62b,	// (0x00065253) status_small_pane_g

0x1c0a,	// (0x00057832) status_small_pane_t1

0xb9b1,	// (0x000615d9) main_video3_pane

0xcad7,	// (0x000626ff) cams_zoom_vslider_pane

0xcadf,	// (0x00062707) image3_wide_pane_ParamLimits

0xcadf,	// (0x00062707) image3_wide_pane

0xcaf9,	// (0x00062721) image3_wide_small_pane

0xcb05,	// (0x0006272d) main_video3_pane_g1_ParamLimits

0xcb05,	// (0x0006272d) main_video3_pane_g1

0xcb21,	// (0x00062749) main_video3_pane_g2_ParamLimits

0xcb21,	// (0x00062749) main_video3_pane_g2

0x0001,

0xf876,	// (0x0006549e) main_video3_pane_g_ParamLimits

0xf876,	// (0x0006549e) main_video3_pane_g

0xcb3d,	// (0x00062765) main_video3_pane_t1_ParamLimits

0xcb3d,	// (0x00062765) main_video3_pane_t1

0xcb68,	// (0x00062790) main_video3_pane_t2_ParamLimits

0xcb68,	// (0x00062790) main_video3_pane_t2

0xcb93,	// (0x000627bb) main_video3_pane_t3_ParamLimits

0xcb93,	// (0x000627bb) main_video3_pane_t3

0x0002,

0xf87b,	// (0x000654a3) main_video3_pane_t_ParamLimits

0xf87b,	// (0x000654a3) main_video3_pane_t

0xcbc0,	// (0x000627e8) cams_zoom_vslider_pane_g1

0xcbc9,	// (0x000627f1) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x000654aa) cams_zoom_vslider_pane_g

0xcbd1,	// (0x000627f9) small_slider_vertical_pane

0x2075,	// (0x00057c9d) small_slider_vertical_pane_g1

0x2075,	// (0x00057c9d) small_slider_vertical_pane_g2

0xcbd9,	// (0x00062801) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x000654af) small_slider_vertical_pane_g

0xb9b1,	// (0x000615d9) main_hwr_training_pane

0xcbe2,	// (0x0006280a) hwr_training_instruct_pane_ParamLimits

0xcbe2,	// (0x0006280a) hwr_training_instruct_pane

0x8035,	// (0x0005dc5d) hwr_training_navi_pane_ParamLimits

0x8035,	// (0x0005dc5d) hwr_training_navi_pane

0x8054,	// (0x0005dc7c) hwr_training_write_pane_ParamLimits

0x8054,	// (0x0005dc7c) hwr_training_write_pane

0xb9b1,	// (0x000615d9) bg_frame_shadow_pane

0xcc19,	// (0x00062841) hwr_training_write_pane_g1

0xcc21,	// (0x00062849) hwr_training_write_pane_g2

0xcc29,	// (0x00062851) hwr_training_write_pane_g3

0xcc31,	// (0x00062859) hwr_training_write_pane_g4

0xcc39,	// (0x00062861) hwr_training_write_pane_g5

0xcc41,	// (0x00062869) hwr_training_write_pane_g6

0xcc49,	// (0x00062871) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x000654b6) hwr_training_write_pane_g

0xecb6,	// (0x000648de) hwr_training_navi_pane_g1_ParamLimits

0xecb6,	// (0x000648de) hwr_training_navi_pane_g1

0xecc8,	// (0x000648f0) hwr_training_navi_pane_g2_ParamLimits

0xecc8,	// (0x000648f0) hwr_training_navi_pane_g2

0xecda,	// (0x00064902) hwr_training_navi_pane_g3_ParamLimits

0xecda,	// (0x00064902) hwr_training_navi_pane_g3

0xecea,	// (0x00064912) hwr_training_navi_pane_g4_ParamLimits

0xecea,	// (0x00064912) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x000654c5) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x000654c5) hwr_training_navi_pane_g

0xecf7,	// (0x0006491f) hwr_training_navi_pane_t1

0x809c,	// (0x0005dcc4) list_single_hwr_training_instruct_pane_ParamLimits

0x809c,	// (0x0005dcc4) list_single_hwr_training_instruct_pane

0xcc51,	// (0x00062879) list_single_hwr_training_instruct_pane_t1

0x1fb5,	// (0x00057bdd) bg_frame_shadow_pane_g1

0xcc60,	// (0x00062888) bg_frame_shadow_pane_g2

0xcc68,	// (0x00062890) bg_frame_shadow_pane_g3

0xcc70,	// (0x00062898) bg_frame_shadow_pane_g4

0xcc78,	// (0x000628a0) bg_frame_shadow_pane_g5

0xcc80,	// (0x000628a8) bg_frame_shadow_pane_g6

0xcc88,	// (0x000628b0) bg_frame_shadow_pane_g7

0xc267,	// (0x00061e8f) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x000654d0) bg_frame_shadow_pane_g

0xb9b1,	// (0x000615d9) main_video_tele_dialer_pane

0x80b1,	// (0x0005dcd9) aid_size_cell_video_keypad_ParamLimits

0x80b1,	// (0x0005dcd9) aid_size_cell_video_keypad

0x80cb,	// (0x0005dcf3) grid_video_dialer_keypad_pane_ParamLimits

0x80cb,	// (0x0005dcf3) grid_video_dialer_keypad_pane

0x8117,	// (0x0005dd3f) video_down_pane_cp_ParamLimits

0x8117,	// (0x0005dd3f) video_down_pane_cp

0x814b,	// (0x0005dd73) cell_video_dialer_keypad_pane_ParamLimits

0x814b,	// (0x0005dd73) cell_video_dialer_keypad_pane

0xcc90,	// (0x000628b8) bg_button_pane_cp08_ParamLimits

0xcc90,	// (0x000628b8) bg_button_pane_cp08

0x816d,	// (0x0005dd95) cell_video_dialer_keypad_pane_g1_ParamLimits

0x816d,	// (0x0005dd95) cell_video_dialer_keypad_pane_g1

0x765c,	// (0x0005d284) mup3_rocker2_pane_ParamLimits

0x765c,	// (0x0005d284) mup3_rocker2_pane

0x2075,	// (0x00057c9d) mup3_rocker2_pane_g1

0x5eed,	// (0x0005bb15) main_dialer2_pane

0xb9b1,	// (0x000615d9) main_mp4_pane

0xed0d,	// (0x00064935) main_mp4_pane_g1_ParamLimits

0xed0d,	// (0x00064935) main_mp4_pane_g1

0xed0d,	// (0x00064935) main_mp4_pane_g2_ParamLimits

0xed0d,	// (0x00064935) main_mp4_pane_g2

0x81a7,	// (0x0005ddcf) main_mp4_pane_g3_ParamLimits

0x81a7,	// (0x0005ddcf) main_mp4_pane_g3

0xed1b,	// (0x00064943) main_mp4_pane_g4_ParamLimits

0xed1b,	// (0x00064943) main_mp4_pane_g4

0xed43,	// (0x0006496b) main_mp4_pane_g5_ParamLimits

0xed43,	// (0x0006496b) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x000654f0) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x000654f0) main_mp4_pane_g

0xed93,	// (0x000649bb) main_mp4_pane_t1_ParamLimits

0xed93,	// (0x000649bb) main_mp4_pane_t1

0xedef,	// (0x00064a17) main_mp4_pane_t2_ParamLimits

0xedef,	// (0x00064a17) main_mp4_pane_t2

0xcc9c,	// (0x000628c4) main_mp4_pane_t3_ParamLimits

0xcc9c,	// (0x000628c4) main_mp4_pane_t3

0xee41,	// (0x00064a69) main_mp4_pane_t4_ParamLimits

0xee41,	// (0x00064a69) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x000654fd) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x000654fd) main_mp4_pane_t

0xee85,	// (0x00064aad) mp4_progress_pane_ParamLimits

0xee85,	// (0x00064aad) mp4_progress_pane

0xeecf,	// (0x00064af7) mp4_rocker_pane_ParamLimits

0xeecf,	// (0x00064af7) mp4_rocker_pane

0xccc4,	// (0x000628ec) mp4_progress_pane_t1

0xccdd,	// (0x00062905) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00065506) mp4_progress_pane_t

0xccf6,	// (0x0006291e) mup_progress_pane_cp04

0xcd02,	// (0x0006292a) mp4_rocker_pane_g1

0x81e3,	// (0x0005de0b) aid_cell_size_keypad2_ParamLimits

0x81e3,	// (0x0005de0b) aid_cell_size_keypad2

0x81f9,	// (0x0005de21) dialer2_ne_pane_ParamLimits

0x81f9,	// (0x0005de21) dialer2_ne_pane

0x8213,	// (0x0005de3b) grid_dialer2_keypad_pane_ParamLimits

0x8213,	// (0x0005de3b) grid_dialer2_keypad_pane

0x1e5a,	// (0x00057a82) bg_popup_call_pane_cp07_ParamLimits

0x1e5a,	// (0x00057a82) bg_popup_call_pane_cp07

0x822f,	// (0x0005de57) dialer2_ne_pane_t1_ParamLimits

0x822f,	// (0x0005de57) dialer2_ne_pane_t1

0x826a,	// (0x0005de92) cell_dialer2_keypad_pane_ParamLimits

0x826a,	// (0x0005de92) cell_dialer2_keypad_pane

0xcd1e,	// (0x00062946) bg_button_pane_pane_cp04_ParamLimits

0xcd1e,	// (0x00062946) bg_button_pane_pane_cp04

0x828c,	// (0x0005deb4) cell_dialer2_keypad_pane_g1_ParamLimits

0x828c,	// (0x0005deb4) cell_dialer2_keypad_pane_g1

0x3fb3,	// (0x00059bdb) aid_placing_vt_set_content_ParamLimits

0x3fb3,	// (0x00059bdb) aid_placing_vt_set_content

0x3fd3,	// (0x00059bfb) aid_placing_vt_set_title_ParamLimits

0x3fd3,	// (0x00059bfb) aid_placing_vt_set_title

0xb9b1,	// (0x000615d9) main_image3_pane

0x8352,	// (0x0005df7a) area_side_right_pane_cp01_ParamLimits

0x8352,	// (0x0005df7a) area_side_right_pane_cp01

0xed0d,	// (0x00064935) main_image3_pane_g1_ParamLimits

0xed0d,	// (0x00064935) main_image3_pane_g1

0x8369,	// (0x0005df91) main_image3_pane_g2_ParamLimits

0x8369,	// (0x0005df91) main_image3_pane_g2

0x8391,	// (0x0005dfb9) main_image3_pane_g3_ParamLimits

0x8391,	// (0x0005dfb9) main_image3_pane_g3

0x83bb,	// (0x0005dfe3) main_image3_pane_g4_ParamLimits

0x83bb,	// (0x0005dfe3) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00065515) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00065515) main_image3_pane_g

0x83e5,	// (0x0005e00d) main_image3_pane_t1_ParamLimits

0x83e5,	// (0x0005e00d) main_image3_pane_t1

0x843d,	// (0x0005e065) main_image3_pane_t2_ParamLimits

0x843d,	// (0x0005e065) main_image3_pane_t2

0x848f,	// (0x0005e0b7) main_image3_pane_t3_ParamLimits

0x848f,	// (0x0005e0b7) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0006551e) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0006551e) main_image3_pane_t

0x1c2e,	// (0x00057856) grid_sctrl_middle_pane_cp01_ParamLimits

0x1c2e,	// (0x00057856) grid_sctrl_middle_pane_cp01

0x8517,	// (0x0005e13f) cell_sctrl_middle_pane_cp01_ParamLimits

0x8517,	// (0x0005e13f) cell_sctrl_middle_pane_cp01

0x8534,	// (0x0005e15c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8534,	// (0x0005e15c) cell_sctrl_middle_pane_cp01_g1

0xb9b1,	// (0x000615d9) main_call4_pane

0x854a,	// (0x0005e172) aid_size_button_call4_ParamLimits

0x854a,	// (0x0005e172) aid_size_button_call4

0x857b,	// (0x0005e1a3) call4_windows_pane_ParamLimits

0x857b,	// (0x0005e1a3) call4_windows_pane

0x859b,	// (0x0005e1c3) grid_call4_button_pane_ParamLimits

0x859b,	// (0x0005e1c3) grid_call4_button_pane

0xcd2a,	// (0x00062952) call4_windows_conf_pane

0xcd41,	// (0x00062969) popup_call4_audio_first_window_ParamLimits

0xcd41,	// (0x00062969) popup_call4_audio_first_window

0xcd8d,	// (0x000629b5) popup_call4_audio_second_window_ParamLimits

0xcd8d,	// (0x000629b5) popup_call4_audio_second_window

0xcda1,	// (0x000629c9) popup_call4_audio_wait_window_ParamLimits

0xcda1,	// (0x000629c9) popup_call4_audio_wait_window

0x85c8,	// (0x0005e1f0) cell_call4_button_pane_ParamLimits

0x85c8,	// (0x0005e1f0) cell_call4_button_pane

0x85f1,	// (0x0005e219) bg_button_pane_cp09_ParamLimits

0x85f1,	// (0x0005e219) bg_button_pane_cp09

0x85fd,	// (0x0005e225) cell_call4_button_pane_g1_ParamLimits

0x85fd,	// (0x0005e225) cell_call4_button_pane_g1

0x8623,	// (0x0005e24b) cell_call4_button_pane_t1_ParamLimits

0x8623,	// (0x0005e24b) cell_call4_button_pane_t1

0xcde9,	// (0x00062a11) popup_call4_audio_conf_window_ParamLimits

0xcde9,	// (0x00062a11) popup_call4_audio_conf_window

0x76c4,	// (0x0005d2ec) mup3_progress_pane_t1_ParamLimits

0x76db,	// (0x0005d303) mup3_progress_pane_t2_ParamLimits

0x76f2,	// (0x0005d31a) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x000653f7) mup3_progress_pane_t_ParamLimits

0x7709,	// (0x0005d331) mup_progress_pane_cp03_ParamLimits

0x7e7b,	// (0x0005daa3) mup3_control_keys_pane_g4_copy1

0xeeb3,	// (0x00064adb) mp4_rocker2_pane_ParamLimits

0xeeb3,	// (0x00064adb) mp4_rocker2_pane

0xcdfd,	// (0x00062a25) mp4_rocker2_pane_g1

0xce05,	// (0x00062a2d) mp4_rocker2_pane_g2

0xef21,	// (0x00064b49) mp4_rocker2_pane_g3

0xef29,	// (0x00064b51) mp4_rocker2_pane_g4

0xef31,	// (0x00064b59) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00065527) mp4_rocker2_pane_g

0xb9b1,	// (0x000615d9) main_camera4_pane

0xb9b1,	// (0x000615d9) main_video4_pane

0x80e5,	// (0x0005dd0d) main_video_tele_dialer_pane_t1_ParamLimits

0x80e5,	// (0x0005dd0d) main_video_tele_dialer_pane_t1

0x80fe,	// (0x0005dd26) main_video_tele_dialer_pane_t2_ParamLimits

0x80fe,	// (0x0005dd26) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x000654e1) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x000654e1) main_video_tele_dialer_pane_t

0x8661,	// (0x0005e289) cam4_autofocus_pane_ParamLimits

0x8661,	// (0x0005e289) cam4_autofocus_pane

0x8677,	// (0x0005e29f) cam4_image_uncrop_pane_ParamLimits

0x8677,	// (0x0005e29f) cam4_image_uncrop_pane

0x8691,	// (0x0005e2b9) cam4_indicators_pane_ParamLimits

0x8691,	// (0x0005e2b9) cam4_indicators_pane

0x86bc,	// (0x0005e2e4) main_camera4_pane_g1_ParamLimits

0x86bc,	// (0x0005e2e4) main_camera4_pane_g1

0x86cf,	// (0x0005e2f7) main_camera4_pane_g2_ParamLimits

0x86cf,	// (0x0005e2f7) main_camera4_pane_g2

0x86e2,	// (0x0005e30a) main_camera4_pane_g3_ParamLimits

0x86e2,	// (0x0005e30a) main_camera4_pane_g3

0x86f5,	// (0x0005e31d) main_camera4_pane_g4_ParamLimits

0x86f5,	// (0x0005e31d) main_camera4_pane_g4

0x8708,	// (0x0005e330) main_camera4_pane_g5_ParamLimits

0x8708,	// (0x0005e330) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00065532) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00065532) main_camera4_pane_g

0x872c,	// (0x0005e354) main_camera4_pane_t1_ParamLimits

0x872c,	// (0x0005e354) main_camera4_pane_t1

0xef49,	// (0x00064b71) bg_tb_trans_pane_cp06

0xef5f,	// (0x00064b87) cam4_indicators_pane_g1

0xef70,	// (0x00064b98) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0006554d) cam4_indicators_pane_g

0xef8e,	// (0x00064bb6) cam4_indicators_pane_t1

0x87a2,	// (0x0005e3ca) main_video4_pane_g1_ParamLimits

0x87a2,	// (0x0005e3ca) main_video4_pane_g1

0x87b5,	// (0x0005e3dd) main_video4_pane_g2_ParamLimits

0x87b5,	// (0x0005e3dd) main_video4_pane_g2

0x87c9,	// (0x0005e3f1) main_video4_pane_g3_ParamLimits

0x87c9,	// (0x0005e3f1) main_video4_pane_g3

0x87dd,	// (0x0005e405) main_video4_pane_g4_ParamLimits

0x87dd,	// (0x0005e405) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00065554) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00065554) main_video4_pane_g

0x8805,	// (0x0005e42d) vid4_indicators_pane_ParamLimits

0x8805,	// (0x0005e42d) vid4_indicators_pane

0x8835,	// (0x0005e45d) video4_image_uncrop_cif_pane_ParamLimits

0x8835,	// (0x0005e45d) video4_image_uncrop_cif_pane

0x884f,	// (0x0005e477) video4_image_uncrop_nhd_pane_ParamLimits

0x884f,	// (0x0005e477) video4_image_uncrop_nhd_pane

0x8677,	// (0x0005e29f) video4_image_uncrop_vga_pane_ParamLimits

0x8677,	// (0x0005e29f) video4_image_uncrop_vga_pane

0xefb0,	// (0x00064bd8) bg_tb_trans_pane_cp07

0x8863,	// (0x0005e48b) vid4_indicators_pane_g1

0x8870,	// (0x0005e498) vid4_indicators_pane_g2

0x887d,	// (0x0005e4a5) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0006555f) vid4_indicators_pane_g

0x88a2,	// (0x0005e4ca) vid4_indicators_pane_t1

0x88b4,	// (0x0005e4dc) cam4_autofocus_pane_g1

0x88bc,	// (0x0005e4e4) cam4_autofocus_pane_g2

0x88c4,	// (0x0005e4ec) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0006556a) cam4_autofocus_pane_g

0x88cc,	// (0x0005e4f4) cam4_autofocus_pane_g3_copy1

0x812f,	// (0x0005dd57) video_down_pane_cp_t1

0x813d,	// (0x0005dd65) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x000654e6) video_down_pane_cp_t

0x1c2e,	// (0x00057856) popup_vitu2_window_ParamLimits

0x1c2e,	// (0x00057856) popup_vitu2_window

0x88d4,	// (0x0005e4fc) aid_size_cell2_itu2_ParamLimits

0x88d4,	// (0x0005e4fc) aid_size_cell2_itu2

0x88fa,	// (0x0005e522) aid_size_cell_itu2_ParamLimits

0x88fa,	// (0x0005e522) aid_size_cell_itu2

0x8956,	// (0x0005e57e) bg_popup_window_pane_cp09_ParamLimits

0x8956,	// (0x0005e57e) bg_popup_window_pane_cp09

0x8964,	// (0x0005e58c) field_vitu2_entry_pane_ParamLimits

0x8964,	// (0x0005e58c) field_vitu2_entry_pane

0x898a,	// (0x0005e5b2) grid_vitu2_function_pane_ParamLimits

0x898a,	// (0x0005e5b2) grid_vitu2_function_pane

0x89db,	// (0x0005e603) grid_vitu2_itu_pane_ParamLimits

0x89db,	// (0x0005e603) grid_vitu2_itu_pane

0x8a6e,	// (0x0005e696) cell_vitu2_itu_pane_ParamLimits

0x8a6e,	// (0x0005e696) cell_vitu2_itu_pane

0x8a92,	// (0x0005e6ba) cell_vitu2_function_pane_ParamLimits

0x8a92,	// (0x0005e6ba) cell_vitu2_function_pane

0xce0d,	// (0x00062a35) bg_popup_call_pane_cp08_ParamLimits

0xce0d,	// (0x00062a35) bg_popup_call_pane_cp08

0xce26,	// (0x00062a4e) field_vitu2_entry_pane_g1

0xce32,	// (0x00062a5a) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00065571) field_vitu2_entry_pane_g

0x8ad1,	// (0x0005e6f9) field_vitu2_entry_pane_t1_ParamLimits

0x8ad1,	// (0x0005e6f9) field_vitu2_entry_pane_t1

0xce4c,	// (0x00062a74) field_vitu2_entry_pane_t2_ParamLimits

0xce4c,	// (0x00062a74) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00065578) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00065578) field_vitu2_entry_pane_t

0x8b00,	// (0x0005e728) bg_button_pane_cp010_ParamLimits

0x8b00,	// (0x0005e728) bg_button_pane_cp010

0x8b0e,	// (0x0005e736) cell_vitu2_itu_pane_g1

0x8b2c,	// (0x0005e754) cell_vitu2_itu_pane_t1_ParamLimits

0x8b2c,	// (0x0005e754) cell_vitu2_itu_pane_t1

0x2f30,	// (0x00058b58) cell_vitu2_itu_pane_t2_ParamLimits

0x2f30,	// (0x00058b58) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00065582) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00065582) cell_vitu2_itu_pane_t

0xefc8,	// (0x00064bf0) bg_button_pane_cp011

0x8b92,	// (0x0005e7ba) cell_vitu2_function_pane_g1

0xb9b1,	// (0x000615d9) main_myfav_hc_pane

0x84df,	// (0x0005e107) popup_image3_note_pane_ParamLimits

0x84df,	// (0x0005e107) popup_image3_note_pane

0x84fb,	// (0x0005e123) popup_image3_tool_bar_pane_ParamLimits

0x84fb,	// (0x0005e123) popup_image3_tool_bar_pane

0x2fb4,	// (0x00058bdc) cell_vitu2_itu_pane_t3_ParamLimits

0x2fb4,	// (0x00058bdc) cell_vitu2_itu_pane_t3

0xb9b1,	// (0x000615d9) bg_popup_trans_pane

0xce71,	// (0x00062a99) grid_image3_tool_bar_pane

0xce7b,	// (0x00062aa3) bg_popup_trans_pane_g1

0xc65c,	// (0x00062284) bg_popup_trans_pane_g2

0xce83,	// (0x00062aab) bg_popup_trans_pane_g3

0xce8b,	// (0x00062ab3) bg_popup_trans_pane_g4

0xce93,	// (0x00062abb) bg_popup_trans_pane_g5

0xce9b,	// (0x00062ac3) bg_popup_trans_pane_g6

0xcea3,	// (0x00062acb) bg_popup_trans_pane_g7

0xceab,	// (0x00062ad3) bg_popup_trans_pane_g8

0xc63c,	// (0x00062264) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00065589) bg_popup_trans_pane_g

0xceb3,	// (0x00062adb) cell_image3_tool_bar_pane_ParamLimits

0xceb3,	// (0x00062adb) cell_image3_tool_bar_pane

0x2075,	// (0x00057c9d) cell_image3_tool_bar_pane_g1

0xb9b1,	// (0x000615d9) bg_popup_trans_pane_cp1

0xcec7,	// (0x00062aef) popup_image3_note_pane_t1

0xced5,	// (0x00062afd) popup_image3_note_pane_t2

0xcee3,	// (0x00062b0b) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0006559c) popup_image3_note_pane_t

0xcef1,	// (0x00062b19) popup_image3_note_pane_t3_copy1

0x8ba6,	// (0x0005e7ce) bg_myfav_hc_instruction_pane_ParamLimits

0x8ba6,	// (0x0005e7ce) bg_myfav_hc_instruction_pane

0x8bba,	// (0x0005e7e2) cell_myfav_contact_pane_ParamLimits

0x8bba,	// (0x0005e7e2) cell_myfav_contact_pane

0x8bd8,	// (0x0005e800) cell_myfav_contact_pane_cp1_ParamLimits

0x8bd8,	// (0x0005e800) cell_myfav_contact_pane_cp1

0x8bf0,	// (0x0005e818) cell_myfav_contact_pane_cp2_ParamLimits

0x8bf0,	// (0x0005e818) cell_myfav_contact_pane_cp2

0x8c08,	// (0x0005e830) cell_myfav_contact_pane_cp3_ParamLimits

0x8c08,	// (0x0005e830) cell_myfav_contact_pane_cp3

0x8c1f,	// (0x0005e847) cell_myfav_contact_pane_cp4_ParamLimits

0x8c1f,	// (0x0005e847) cell_myfav_contact_pane_cp4

0x8c37,	// (0x0005e85f) cell_myfav_contact_pane_cp5_ParamLimits

0x8c37,	// (0x0005e85f) cell_myfav_contact_pane_cp5

0x8c4b,	// (0x0005e873) cell_myfav_contact_pane_cp6_ParamLimits

0x8c4b,	// (0x0005e873) cell_myfav_contact_pane_cp6

0x8c61,	// (0x0005e889) cell_myfav_contact_pane_cp7_ParamLimits

0x8c61,	// (0x0005e889) cell_myfav_contact_pane_cp7

0xceff,	// (0x00062b27) listscroll_gen_pane_cp05

0x8c7b,	// (0x0005e8a3) main_myfav_hc_pane_g1_ParamLimits

0x8c7b,	// (0x0005e8a3) main_myfav_hc_pane_g1

0x8c95,	// (0x0005e8bd) main_myfav_hc_pane_g2_ParamLimits

0x8c95,	// (0x0005e8bd) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x000655a3) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x000655a3) main_myfav_hc_pane_g

0x8cc7,	// (0x0005e8ef) main_myfav_hc_pane_t1_ParamLimits

0x8cc7,	// (0x0005e8ef) main_myfav_hc_pane_t1

0xcf08,	// (0x00062b30) main_myfav_hc_pane_t2_ParamLimits

0xcf08,	// (0x00062b30) main_myfav_hc_pane_t2

0xcf1a,	// (0x00062b42) main_myfav_hc_pane_t3_ParamLimits

0xcf1a,	// (0x00062b42) main_myfav_hc_pane_t3

0x8cde,	// (0x0005e906) main_myfav_hc_pane_t4_ParamLimits

0x8cde,	// (0x0005e906) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x000655aa) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x000655aa) main_myfav_hc_pane_t

0x2075,	// (0x00057c9d) bg_myfav_hc_instruction_pane_g1

0xcf2c,	// (0x00062b54) cell_myfav_contact_pane_g1_ParamLimits

0xcf2c,	// (0x00062b54) cell_myfav_contact_pane_g1

0xcf2c,	// (0x00062b54) cell_myfav_contact_pane_g2_ParamLimits

0xcf2c,	// (0x00062b54) cell_myfav_contact_pane_g2

0xcf38,	// (0x00062b60) cell_myfav_contact_pane_g3_ParamLimits

0xcf38,	// (0x00062b60) cell_myfav_contact_pane_g3

0x7293,	// (0x0005cebb) cell_myfav_contact_pane_g4_ParamLimits

0x7293,	// (0x0005cebb) cell_myfav_contact_pane_g4

0xcf45,	// (0x00062b6d) cell_myfav_contact_pane_g5_ParamLimits

0xcf45,	// (0x00062b6d) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x000655b5) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x000655b5) cell_myfav_contact_pane_g

0x8caf,	// (0x0005e8d7) main_myfav_hc_pane_g3_ParamLimits

0x8caf,	// (0x0005e8d7) main_myfav_hc_pane_g3

0x3183,	// (0x00058dab) popup_adpt_find_window

0x8d06,	// (0x0005e92e) afind_page_pane_ParamLimits

0x8d06,	// (0x0005e92e) afind_page_pane

0x8d1b,	// (0x0005e943) aid_size_cell_afind_ParamLimits

0x8d1b,	// (0x0005e943) aid_size_cell_afind

0x8d39,	// (0x0005e961) bg_popup_sub_pane_cp09_ParamLimits

0x8d39,	// (0x0005e961) bg_popup_sub_pane_cp09

0x8d46,	// (0x0005e96e) find_pane_cp01_ParamLimits

0x8d46,	// (0x0005e96e) find_pane_cp01

0xcf51,	// (0x00062b79) grid_afind_control_pane_ParamLimits

0xcf51,	// (0x00062b79) grid_afind_control_pane

0x8d53,	// (0x0005e97b) grid_afind_pane_ParamLimits

0x8d53,	// (0x0005e97b) grid_afind_pane

0x8d75,	// (0x0005e99d) cell_afind_pane_ParamLimits

0x8d75,	// (0x0005e99d) cell_afind_pane

0x2075,	// (0x00057c9d) afind_page_pane_g1

0x8dd2,	// (0x0005e9fa) afind_page_pane_g2

0x8ddb,	// (0x0005ea03) afind_page_pane_g3

0x0002,

0xf998,	// (0x000655c0) afind_page_pane_g

0x8de4,	// (0x0005ea0c) afind_page_pane_t1

0xcf65,	// (0x00062b8d) cell_afind_grid_control_pane_ParamLimits

0xcf65,	// (0x00062b8d) cell_afind_grid_control_pane

0xcd1e,	// (0x00062946) bg_button_pane_cp69_ParamLimits

0xcd1e,	// (0x00062946) bg_button_pane_cp69

0x8e04,	// (0x0005ea2c) cell_afind_pane_g1_ParamLimits

0x8e04,	// (0x0005ea2c) cell_afind_pane_g1

0x8e11,	// (0x0005ea39) cell_afind_pane_t1_ParamLimits

0x8e11,	// (0x0005ea39) cell_afind_pane_t1

0xc44f,	// (0x00062077) bg_button_pane_cp72

0xcf74,	// (0x00062b9c) cell_afind_grid_control_pane_g1

0x59ad,	// (0x0005b5d5) aid_image_placing_area_ParamLimits

0x59ad,	// (0x0005b5d5) aid_image_placing_area

0xc9e2,	// (0x0006260a) field_vitu_entry_pane_g1_ParamLimits

0xc9e2,	// (0x0006260a) field_vitu_entry_pane_g1

0xc9ee,	// (0x00062616) field_vitu_entry_pane_g2_ParamLimits

0xc9ee,	// (0x00062616) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00065471) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00065471) field_vitu_entry_pane_g

0x7f42,	// (0x0005db6a) cell_vitu_itu_pane_g1_ParamLimits

0x7f84,	// (0x0005dbac) cell_vitu_itu_pane_t3_ParamLimits

0x7f84,	// (0x0005dbac) cell_vitu_itu_pane_t3

0xccc4,	// (0x000628ec) mp4_progress_pane_t1_ParamLimits

0xccdd,	// (0x00062905) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00065506) mp4_progress_pane_t_ParamLimits

0xccf6,	// (0x0006291e) mup_progress_pane_cp04_ParamLimits

0x8cf2,	// (0x0005e91a) main_myfav_hc_pane_t5_ParamLimits

0x8cf2,	// (0x0005e91a) main_myfav_hc_pane_t5

0xb9cf,	// (0x000615f7) aid_zoom_text_primary

0x3183,	// (0x00058dab) popup_adpt_find_window_ParamLimits

0x1c2e,	// (0x00057856) main_cam_set_pane

0x86a8,	// (0x0005e2d0) cam4_zoom_pane_ParamLimits

0x86a8,	// (0x0005e2d0) cam4_zoom_pane

0x8e23,	// (0x0005ea4b) main_cam_set_pane_g1_ParamLimits

0x8e23,	// (0x0005ea4b) main_cam_set_pane_g1

0x8e31,	// (0x0005ea59) main_cam_set_pane_g2_ParamLimits

0x8e31,	// (0x0005ea59) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x000655c7) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x000655c7) main_cam_set_pane_g

0x8e52,	// (0x0005ea7a) main_cam_set_pane_t1_ParamLimits

0x8e52,	// (0x0005ea7a) main_cam_set_pane_t1

0x8e6d,	// (0x0005ea95) main_cset_listscroll_pane_ParamLimits

0x8e6d,	// (0x0005ea95) main_cset_listscroll_pane

0x8e8d,	// (0x0005eab5) main_cset_slider_pane_ParamLimits

0x8e8d,	// (0x0005eab5) main_cset_slider_pane

0xcf85,	// (0x00062bad) main_cset_list_pane_ParamLimits

0xcf85,	// (0x00062bad) main_cset_list_pane

0xcf95,	// (0x00062bbd) scroll_pane_cp028

0x8eb3,	// (0x0005eadb) aid_area_touch_slider

0x8ecf,	// (0x0005eaf7) cset_slider_pane

0x8ef9,	// (0x0005eb21) main_cset_slider_pane_g1

0x8f0e,	// (0x0005eb36) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x000655cc) main_cset_slider_pane_g

0xcfce,	// (0x00062bf6) main_cset_slider_pane_t1

0x8fca,	// (0x0005ebf2) main_cset_slider_pane_t2

0x8fe4,	// (0x0005ec0c) main_cset_slider_pane_t3

0x8ffe,	// (0x0005ec26) main_cset_slider_pane_t4

0x9018,	// (0x0005ec40) main_cset_slider_pane_t5

0x9032,	// (0x0005ec5a) main_cset_slider_pane_t6

0x9047,	// (0x0005ec6f) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x000655f1) main_cset_slider_pane_t

0x914b,	// (0x0005ed73) cset_list_set_pane_ParamLimits

0x914b,	// (0x0005ed73) cset_list_set_pane

0x915d,	// (0x0005ed85) aid_position_infowindow_above

0x9165,	// (0x0005ed8d) aid_position_infowindow_below

0xd06e,	// (0x00062c96) cset_list_set_pane_g1_ParamLimits

0xd06e,	// (0x00062c96) cset_list_set_pane_g1

0xd07a,	// (0x00062ca2) cset_list_set_pane_g3_ParamLimits

0xd07a,	// (0x00062ca2) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00065610) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00065610) cset_list_set_pane_g

0x916d,	// (0x0005ed95) cset_list_set_pane_t1_ParamLimits

0x916d,	// (0x0005ed95) cset_list_set_pane_t1

0x1c2e,	// (0x00057856) list_highlight_pane_cp021_ParamLimits

0x1c2e,	// (0x00057856) list_highlight_pane_cp021

0x096a,	// (0x00056592) cset_slider_pane_g1

0x097c,	// (0x000565a4) cset_slider_pane_g2

0x0973,	// (0x0005659b) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00065615) cset_slider_pane_g

0xefd6,	// (0x00064bfe) aid_area_touch_cam4_zoom

0xefde,	// (0x00064c06) cam4_zoom_cont_pane

0xefe6,	// (0x00064c0e) cam4_zoom_pane_g1

0xefee,	// (0x00064c16) cam4_zoom_pane_g2

0x9182,	// (0x0005edaa) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0006561c) cam4_zoom_pane_g

0xeff6,	// (0x00064c1e) cam4_zoom_cont_pane_g1

0xefff,	// (0x00064c27) cam4_zoom_cont_pane_g2

0xf008,	// (0x00064c30) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00065623) cam4_zoom_cont_pane_g

0x8568,	// (0x0005e190) call4_image_pane_ParamLimits

0x8568,	// (0x0005e190) call4_image_pane

0xcd2a,	// (0x00062952) call4_windows_conf_pane_ParamLimits

0xcd6b,	// (0x00062993) popup_call4_audio_in_window_ParamLimits

0xcd6b,	// (0x00062993) popup_call4_audio_in_window

0xb9b1,	// (0x000615d9) bg_popup_call2_act_pane_cp02

0xcde1,	// (0x00062a09) call4_list_conf_pane

0x2075,	// (0x00057c9d) call4_image_pane_g1

0x2075,	// (0x00057c9d) call4_image_pane_g2

0x0001,

0xf70f,	// (0x00065337) call4_image_pane_g

0xd089,	// (0x00062cb1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd089,	// (0x00062cb1) list_single_graphic_popup_conf4_pane

0xb9b1,	// (0x000615d9) list_highlight_pane_cp022

0xd09c,	// (0x00062cc4) list_single_graphic_popup_conf4_pane_g1

0x0649,	// (0x00056271) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0006562a) list_single_graphic_popup_conf4_pane_g

0xd0a4,	// (0x00062ccc) list_single_graphic_popup_conf4_pane_t1

0x40a5,	// (0x00059ccd) popup_vtel_slider_window_ParamLimits

0x40a5,	// (0x00059ccd) popup_vtel_slider_window

0xcd0c,	// (0x00062934) dialer2_ne_pane_t2_ParamLimits

0xcd0c,	// (0x00062934) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0006550b) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0006550b) dialer2_ne_pane_t

0x1e5a,	// (0x00057a82) bg_popup_sub_pane_cp010_ParamLimits

0x1e5a,	// (0x00057a82) bg_popup_sub_pane_cp010

0x918a,	// (0x0005edb2) popup_vtel_slider_window_g1_ParamLimits

0x918a,	// (0x0005edb2) popup_vtel_slider_window_g1

0x919d,	// (0x0005edc5) popup_vtel_slider_window_g2_ParamLimits

0x919d,	// (0x0005edc5) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0006562f) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0006562f) popup_vtel_slider_window_g

0x91f3,	// (0x0005ee1b) vtel_slider_pane_ParamLimits

0x91f3,	// (0x0005ee1b) vtel_slider_pane

0x9215,	// (0x0005ee3d) vtel_slider_pane_g1_ParamLimits

0x9215,	// (0x0005ee3d) vtel_slider_pane_g1

0x9229,	// (0x0005ee51) vtel_slider_pane_g2_ParamLimits

0x9229,	// (0x0005ee51) vtel_slider_pane_g2

0x9241,	// (0x0005ee69) vtel_slider_pane_g3_ParamLimits

0x9241,	// (0x0005ee69) vtel_slider_pane_g3

0x9215,	// (0x0005ee3d) vtel_slider_pane_g4_ParamLimits

0x9215,	// (0x0005ee3d) vtel_slider_pane_g4

0x9257,	// (0x0005ee7f) vtel_slider_pane_g5_ParamLimits

0x9257,	// (0x0005ee7f) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00065638) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00065638) vtel_slider_pane_g

0xb9b1,	// (0x000615d9) main_gallery2_pane

0x8926,	// (0x0005e54e) aid_size_row_itut2_dropdow_list_ParamLimits

0x8926,	// (0x0005e54e) aid_size_row_itut2_dropdow_list

0x89b2,	// (0x0005e5da) grid_vitu2_function_top_pane_ParamLimits

0x89b2,	// (0x0005e5da) grid_vitu2_function_top_pane

0x8a17,	// (0x0005e63f) popup_vitu2_dropdown_list_window_ParamLimits

0x8a17,	// (0x0005e63f) popup_vitu2_dropdown_list_window

0x8a40,	// (0x0005e668) popup_vitu2_match_list_window

0x926d,	// (0x0005ee95) cell_vitu2_function_top_pane_ParamLimits

0x926d,	// (0x0005ee95) cell_vitu2_function_top_pane

0x928b,	// (0x0005eeb3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x928b,	// (0x0005eeb3) cell_vitu2_function_top_pane_cp01

0x92a9,	// (0x0005eed1) cell_vitu2_function_top_wide_pane_ParamLimits

0x92a9,	// (0x0005eed1) cell_vitu2_function_top_wide_pane

0xefc8,	// (0x00064bf0) bg_button_pane_cp012

0x92c7,	// (0x0005eeef) cell_vitu2_function_top_pane_g1

0xf011,	// (0x00064c39) bg_button_pane_cp013_ParamLimits

0xf011,	// (0x00064c39) bg_button_pane_cp013

0x92db,	// (0x0005ef03) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x92db,	// (0x0005ef03) cell_vitu2_function_top_wide_pane_g1

0xefc8,	// (0x00064bf0) bg_popup_sub_pane_cp20

0x92f3,	// (0x0005ef1b) list_vitu2_match_list_pane

0xce7b,	// (0x00062aa3) bg_popup_sub_pane_cp20_g1

0xce83,	// (0x00062aab) bg_popup_sub_pane_cp20_g2

0xc65c,	// (0x00062284) bg_popup_sub_pane_cp20_g3

0xce8b,	// (0x00062ab3) bg_popup_sub_pane_cp20_g4

0xc63c,	// (0x00062264) bg_popup_sub_pane_cp20_g5

0xd0c0,	// (0x00062ce8) bg_popup_sub_pane_cp20_g6

0xce9b,	// (0x00062ac3) bg_popup_sub_pane_cp20_g7

0xcea3,	// (0x00062acb) bg_popup_sub_pane_cp20_g8

0xceab,	// (0x00062ad3) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00065643) bg_popup_sub_pane_cp20_g

0xf02d,	// (0x00064c55) list_vitu2_match_list_item_pane_ParamLimits

0xf02d,	// (0x00064c55) list_vitu2_match_list_item_pane

0xf03f,	// (0x00064c67) list_vitu2_match_list_item_pane_t1

0xc166,	// (0x00061d8e) bg_popup_sub_pane_cp21

0xf04d,	// (0x00064c75) grid_vitu2_dropdown_list_pane

0x9342,	// (0x0005ef6a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9342,	// (0x0005ef6a) cell_vitu2_dropdown_list_char_pane

0x9363,	// (0x0005ef8b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9363,	// (0x0005ef8b) cell_vitu2_dropdown_list_ctrl_pane

0xd0e0,	// (0x00062d08) cell_vitu2_dropdown_list_char_pane_g1

0xd0e9,	// (0x00062d11) cell_vitu2_dropdown_list_char_pane_g2

0xd0f2,	// (0x00062d1a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00065660) cell_vitu2_dropdown_list_char_pane_g

0x938f,	// (0x0005efb7) cell_vitu2_dropdown_list_char_pane_t1

0x939d,	// (0x0005efc5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x939d,	// (0x0005efc5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x93aa,	// (0x0005efd2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x93aa,	// (0x0005efd2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x93b7,	// (0x0005efdf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x93b7,	// (0x0005efdf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x93c4,	// (0x0005efec) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x93c4,	// (0x0005efec) cell_vitu2_dropdown_list_ctrl_pane_g4

0xef49,	// (0x00064b71) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xef49,	// (0x00064b71) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00065667) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00065667) cell_vitu2_dropdown_list_ctrl_pane_g

0x93e0,	// (0x0005f008) aid_size_cell_gallery2_ParamLimits

0x93e0,	// (0x0005f008) aid_size_cell_gallery2

0x93f6,	// (0x0005f01e) grid_gallery2_pane_ParamLimits

0x93f6,	// (0x0005f01e) grid_gallery2_pane

0x940a,	// (0x0005f032) scroll_pane_cp029_ParamLimits

0x940a,	// (0x0005f032) scroll_pane_cp029

0x9416,	// (0x0005f03e) cell_gallery2_pane_ParamLimits

0x9416,	// (0x0005f03e) cell_gallery2_pane

0xd0fb,	// (0x00062d23) cell_gallery2_pane_g2

0x944c,	// (0x0005f074) cell_gallery2_pane_g3

0xd105,	// (0x00062d2d) cell_gallery2_pane_g4

0xd10d,	// (0x00062d35) cell_gallery2_pane_g5

0x0834,	// (0x0005645c) grid_highlight_pane_cp10

0x8a40,	// (0x0005e668) popup_vitu2_match_list_window_ParamLimits

0x8a57,	// (0x0005e67f) popup_vitu2_query_window_ParamLimits

0x8a57,	// (0x0005e67f) popup_vitu2_query_window

0xc166,	// (0x00061d8e) bg_vitu2_candi_button_pane

0xd0e0,	// (0x00062d08) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd0e9,	// (0x00062d11) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd0f2,	// (0x00062d1a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9454,	// (0x0005f07c) bg_button_pane_cp015

0x945e,	// (0x0005f086) bg_button_pane_cp016

0x9468,	// (0x0005f090) bg_button_pane_cp017

0x1c2e,	// (0x00057856) bg_popup_sub_pane_cp22

0xd115,	// (0x00062d3d) popup_vitu2_query_window_g1

0x9490,	// (0x0005f0b8) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00065672) popup_vitu2_query_window_g

0x949e,	// (0x0005f0c6) popup_vitu2_query_window_t1_ParamLimits

0x949e,	// (0x0005f0c6) popup_vitu2_query_window_t1

0x94c6,	// (0x0005f0ee) popup_vitu2_query_window_t2_ParamLimits

0x94c6,	// (0x0005f0ee) popup_vitu2_query_window_t2

0x94d8,	// (0x0005f100) popup_vitu2_query_window_t3_ParamLimits

0x94d8,	// (0x0005f100) popup_vitu2_query_window_t3

0x9500,	// (0x0005f128) popup_vitu2_query_window_t4_ParamLimits

0x9500,	// (0x0005f128) popup_vitu2_query_window_t4

0x9514,	// (0x0005f13c) popup_vitu2_query_window_t5_ParamLimits

0x9514,	// (0x0005f13c) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00065677) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00065677) popup_vitu2_query_window_t

0xcf7d,	// (0x00062ba5) main_cset_text_pane

0x8eb3,	// (0x0005eadb) aid_area_touch_slider_ParamLimits

0x8ecf,	// (0x0005eaf7) cset_slider_pane_ParamLimits

0x8ef9,	// (0x0005eb21) main_cset_slider_pane_g1_ParamLimits

0x8f0e,	// (0x0005eb36) main_cset_slider_pane_g2_ParamLimits

0xcf9e,	// (0x00062bc6) main_cset_slider_pane_g3_ParamLimits

0xcf9e,	// (0x00062bc6) main_cset_slider_pane_g3

0x8f23,	// (0x0005eb4b) main_cset_slider_pane_g4_ParamLimits

0x8f23,	// (0x0005eb4b) main_cset_slider_pane_g4

0x8f32,	// (0x0005eb5a) main_cset_slider_pane_g5_ParamLimits

0x8f32,	// (0x0005eb5a) main_cset_slider_pane_g5

0x8f3e,	// (0x0005eb66) main_cset_slider_pane_g6_ParamLimits

0x8f3e,	// (0x0005eb66) main_cset_slider_pane_g6

0xf9a4,	// (0x000655cc) main_cset_slider_pane_g_ParamLimits

0xcfce,	// (0x00062bf6) main_cset_slider_pane_t1_ParamLimits

0x8fca,	// (0x0005ebf2) main_cset_slider_pane_t2_ParamLimits

0x8fe4,	// (0x0005ec0c) main_cset_slider_pane_t3_ParamLimits

0x8ffe,	// (0x0005ec26) main_cset_slider_pane_t4_ParamLimits

0x9018,	// (0x0005ec40) main_cset_slider_pane_t5_ParamLimits

0x9032,	// (0x0005ec5a) main_cset_slider_pane_t6_ParamLimits

0x9047,	// (0x0005ec6f) main_cset_slider_pane_t7_ParamLimits

0x9071,	// (0x0005ec99) main_cset_slider_pane_t8_ParamLimits

0x9071,	// (0x0005ec99) main_cset_slider_pane_t8

0x9099,	// (0x0005ecc1) main_cset_slider_pane_t9_ParamLimits

0x9099,	// (0x0005ecc1) main_cset_slider_pane_t9

0x90c1,	// (0x0005ece9) main_cset_slider_pane_t10_ParamLimits

0x90c1,	// (0x0005ece9) main_cset_slider_pane_t10

0x90e9,	// (0x0005ed11) main_cset_slider_pane_t11_ParamLimits

0x90e9,	// (0x0005ed11) main_cset_slider_pane_t11

0x9111,	// (0x0005ed39) main_cset_slider_pane_t12_ParamLimits

0x9111,	// (0x0005ed39) main_cset_slider_pane_t12

0x912e,	// (0x0005ed56) main_cset_slider_pane_t13_ParamLimits

0x912e,	// (0x0005ed56) main_cset_slider_pane_t13

0xf9c9,	// (0x000655f1) main_cset_slider_pane_t_ParamLimits

0xb9b1,	// (0x000615d9) bg_popup_sub_pane_cp011

0xd121,	// (0x00062d49) main_cset_text_pane_g1

0xd129,	// (0x00062d51) main_cset_text_pane_t1

0xd137,	// (0x00062d5f) main_cset_text_pane_t2

0xd145,	// (0x00062d6d) main_cset_text_pane_t3

0xd153,	// (0x00062d7b) main_cset_text_pane_t4

0xd161,	// (0x00062d89) main_cset_text_pane_t5

0xd16f,	// (0x00062d97) main_cset_text_pane_t6

0xd17d,	// (0x00062da5) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00065682) main_cset_text_pane_t

0xb9b1,	// (0x000615d9) main_cam4_burst_pane

0xb9b1,	// (0x000615d9) main_cam5_pane

0x8df2,	// (0x0005ea1a) bg_button_pane_cp019

0x8dfb,	// (0x0005ea23) bg_button_pane_cp020

0xcfaa,	// (0x00062bd2) main_cset_slider_pane_g7_ParamLimits

0xcfaa,	// (0x00062bd2) main_cset_slider_pane_g7

0xcfb6,	// (0x00062bde) main_cset_slider_pane_g8_ParamLimits

0xcfb6,	// (0x00062bde) main_cset_slider_pane_g8

0x8f52,	// (0x0005eb7a) main_cset_slider_pane_g9_ParamLimits

0x8f52,	// (0x0005eb7a) main_cset_slider_pane_g9

0x8f5e,	// (0x0005eb86) main_cset_slider_pane_g10_ParamLimits

0x8f5e,	// (0x0005eb86) main_cset_slider_pane_g10

0x8f6a,	// (0x0005eb92) main_cset_slider_pane_g11_ParamLimits

0x8f6a,	// (0x0005eb92) main_cset_slider_pane_g11

0x8f76,	// (0x0005eb9e) main_cset_slider_pane_g12_ParamLimits

0x8f76,	// (0x0005eb9e) main_cset_slider_pane_g12

0x8f82,	// (0x0005ebaa) main_cset_slider_pane_g13_ParamLimits

0x8f82,	// (0x0005ebaa) main_cset_slider_pane_g13

0x8f8e,	// (0x0005ebb6) main_cset_slider_pane_g14_ParamLimits

0x8f8e,	// (0x0005ebb6) main_cset_slider_pane_g14

0x8f9a,	// (0x0005ebc2) main_cset_slider_pane_g15_ParamLimits

0x8f9a,	// (0x0005ebc2) main_cset_slider_pane_g15

0xcffc,	// (0x00062c24) main_cset_slider_pane_t14_ParamLimits

0xcffc,	// (0x00062c24) main_cset_slider_pane_t14

0xd035,	// (0x00062c5d) main_cset_slider_pane_t15_ParamLimits

0xd035,	// (0x00062c5d) main_cset_slider_pane_t15

0x9528,	// (0x0005f150) aid_cam4_burst_size_cell_ParamLimits

0x9528,	// (0x0005f150) aid_cam4_burst_size_cell

0x9548,	// (0x0005f170) grid_cam4_burst_pane_ParamLimits

0x9548,	// (0x0005f170) grid_cam4_burst_pane

0x9580,	// (0x0005f1a8) linegrid_cam4_burst_pane_ParamLimits

0x9580,	// (0x0005f1a8) linegrid_cam4_burst_pane

0x00d2,	// (0x00055cfa) scroll_pane_cp30_ParamLimits

0x00d2,	// (0x00055cfa) scroll_pane_cp30

0x95a4,	// (0x0005f1cc) cell_cam4_burst_pane_ParamLimits

0x95a4,	// (0x0005f1cc) cell_cam4_burst_pane

0xd18b,	// (0x00062db3) linegrid_cam4_burst_pane_g1_ParamLimits

0xd18b,	// (0x00062db3) linegrid_cam4_burst_pane_g1

0x95f1,	// (0x0005f219) linegrid_cam4_burst_pane_g2_ParamLimits

0x95f1,	// (0x0005f219) linegrid_cam4_burst_pane_g2

0xd198,	// (0x00062dc0) linegrid_cam4_burst_pane_g3_ParamLimits

0xd198,	// (0x00062dc0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00065691) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00065691) linegrid_cam4_burst_pane_g

0x9602,	// (0x0005f22a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9602,	// (0x0005f22a) linegrid_cam4_burst_pane_g3_copy1

0xd1a5,	// (0x00062dcd) linegrid_cam4_burst_pane_g4_ParamLimits

0xd1a5,	// (0x00062dcd) linegrid_cam4_burst_pane_g4

0x961c,	// (0x0005f244) linegrid_cam4_burst_pane_g5_ParamLimits

0x961c,	// (0x0005f244) linegrid_cam4_burst_pane_g5

0x962d,	// (0x0005f255) linegrid_cam4_burst_pane_g6_ParamLimits

0x962d,	// (0x0005f255) linegrid_cam4_burst_pane_g6

0xd1b2,	// (0x00062dda) linegrid_cam4_burst_pane_g7_ParamLimits

0xd1b2,	// (0x00062dda) linegrid_cam4_burst_pane_g7

0x9644,	// (0x0005f26c) cell_cam4_burst_pane_g1

0xd1cb,	// (0x00062df3) main_cam5_pane_t1_ParamLimits

0xd1cb,	// (0x00062df3) main_cam5_pane_t1

0xd1dd,	// (0x00062e05) main_cam5_pane_t2_ParamLimits

0xd1dd,	// (0x00062e05) main_cam5_pane_t2

0xd1ef,	// (0x00062e17) main_cam5_pane_t3_ParamLimits

0xd1ef,	// (0x00062e17) main_cam5_pane_t3

0xd201,	// (0x00062e29) main_cam5_pane_t4_ParamLimits

0xd201,	// (0x00062e29) main_cam5_pane_t4

0xd219,	// (0x00062e41) main_cam5_pane_t5_ParamLimits

0xd219,	// (0x00062e41) main_cam5_pane_t5

0xd22d,	// (0x00062e55) main_cam5_pane_t6_ParamLimits

0xd22d,	// (0x00062e55) main_cam5_pane_t6

0xd241,	// (0x00062e69) main_cam5_pane_t7_ParamLimits

0xd241,	// (0x00062e69) main_cam5_pane_t7

0xd253,	// (0x00062e7b) main_cam5_pane_t8_ParamLimits

0xd253,	// (0x00062e7b) main_cam5_pane_t8

0xd26f,	// (0x00062e97) main_cam5_pane_t9_ParamLimits

0xd26f,	// (0x00062e97) main_cam5_pane_t9

0xd281,	// (0x00062ea9) main_cam5_pane_t10_ParamLimits

0xd281,	// (0x00062ea9) main_cam5_pane_t10

0xd293,	// (0x00062ebb) main_cam5_pane_t11_ParamLimits

0xd293,	// (0x00062ebb) main_cam5_pane_t11

0xd2a5,	// (0x00062ecd) main_cam5_pane_t12_ParamLimits

0xd2a5,	// (0x00062ecd) main_cam5_pane_t12

0xd2ba,	// (0x00062ee2) main_cam5_pane_t13_ParamLimits

0xd2ba,	// (0x00062ee2) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0006569d) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0006569d) main_cam5_pane_t

0x3206,	// (0x00058e2e) popup_scut_keymap_window_ParamLimits

0x3206,	// (0x00058e2e) popup_scut_keymap_window

0x9657,	// (0x0005f27f) aid_size_cell_brow_shortcut

0x0834,	// (0x0005645c) bg_popup_window_pane_cp010

0x9663,	// (0x0005f28b) grid_scut_pane

0x966f,	// (0x0005f297) cell_scut_pane_ParamLimits

0x966f,	// (0x0005f297) cell_scut_pane

0x9686,	// (0x0005f2ae) cell_scut_pane_g1

0xd2d7,	// (0x00062eff) cell_scut_pane_t1

0xd2e6,	// (0x00062f0e) cell_scut_pane_t2

0x968f,	// (0x0005f2b7) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x000656b8) cell_scut_pane_t

0x72a1,	// (0x0005cec9) main_mup3_pane_g8_ParamLimits

0x72a1,	// (0x0005cec9) main_mup3_pane_g8

0x893e,	// (0x0005e566) area_vitu2_query_pane_ParamLimits

0x893e,	// (0x0005e566) area_vitu2_query_pane

0x9472,	// (0x0005f09a) input_focus_pane_cp08

0xd2f5,	// (0x00062f1d) area_vitu2_query_pane_g1

0x969d,	// (0x0005f2c5) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x000656bf) area_vitu2_query_pane_g

0x96ae,	// (0x0005f2d6) area_vitu2_query_pane_t1_ParamLimits

0x96ae,	// (0x0005f2d6) area_vitu2_query_pane_t1

0x96c2,	// (0x0005f2ea) area_vitu2_query_pane_t2_ParamLimits

0x96c2,	// (0x0005f2ea) area_vitu2_query_pane_t2

0x96d6,	// (0x0005f2fe) area_vitu2_query_pane_t3_ParamLimits

0x96d6,	// (0x0005f2fe) area_vitu2_query_pane_t3

0xd301,	// (0x00062f29) area_vitu2_query_pane_t4_ParamLimits

0xd301,	// (0x00062f29) area_vitu2_query_pane_t4

0xd329,	// (0x00062f51) area_vitu2_query_pane_t5_ParamLimits

0xd329,	// (0x00062f51) area_vitu2_query_pane_t5

0xd351,	// (0x00062f79) area_vitu2_query_pane_t6_ParamLimits

0xd351,	// (0x00062f79) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x000656c4) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x000656c4) area_vitu2_query_pane_t

0x96fe,	// (0x0005f326) bg_button_pane_cp018

0x970c,	// (0x0005f334) bg_button_pane_cp021

0x9718,	// (0x0005f340) bg_button_pane_cp022

0x9727,	// (0x0005f34f) input_focus_pane_cp09

0x4f72,	// (0x0005ab9a) aid_size_touch_mv_arrow_left

0x4f9b,	// (0x0005abc3) aid_size_touch_mv_arrow_right

0x8fb2,	// (0x0005ebda) main_cset_slider_pane_g16_ParamLimits

0x8fb2,	// (0x0005ebda) main_cset_slider_pane_g16

0x8fbe,	// (0x0005ebe6) main_cset_slider_pane_g17_ParamLimits

0x8fbe,	// (0x0005ebe6) main_cset_slider_pane_g17

0x9644,	// (0x0005f26c) cell_cam4_burst_pane_g1_ParamLimits

0xb9b1,	// (0x000615d9) compa_mode_pane

0x91ad,	// (0x0005edd5) popup_vtel_slider_window_g3_ParamLimits

0x91ad,	// (0x0005edd5) popup_vtel_slider_window_g3

0x91c4,	// (0x0005edec) popup_vtel_slider_window_g4_ParamLimits

0x91c4,	// (0x0005edec) popup_vtel_slider_window_g4

0x91db,	// (0x0005ee03) popup_vtel_slider_window_t1_ParamLimits

0x91db,	// (0x0005ee03) popup_vtel_slider_window_t1

0xb9b1,	// (0x000615d9) main_cl_pane

0x1c56,	// (0x0005787e) popup_imed_adjust2_window_ParamLimits

0x1c20,	// (0x00057848) bg_tb_trans_pane_cp05_ParamLimits

0xc917,	// (0x0006253f) popup_imed_adjust2_window_g1_ParamLimits

0xc926,	// (0x0006254e) popup_imed_adjust2_window_g2_ParamLimits

0xc926,	// (0x0006254e) popup_imed_adjust2_window_g2

0xc932,	// (0x0006255a) popup_imed_adjust2_window_g3_ParamLimits

0xc932,	// (0x0006255a) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00065435) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00065435) popup_imed_adjust2_window_g

0xc93e,	// (0x00062566) popup_imed_adjust2_window_t1_ParamLimits

0xc956,	// (0x0006257e) slider_imed_adjust_pane_ParamLimits

0xc96a,	// (0x00062592) slider_imed_adjust_pane_g1_ParamLimits

0xc97a,	// (0x000625a2) slider_imed_adjust_pane_g2_ParamLimits

0xc98a,	// (0x000625b2) slider_imed_adjust_pane_g3_ParamLimits

0xc99b,	// (0x000625c3) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0006543c) slider_imed_adjust_pane_g_ParamLimits

0x8649,	// (0x0005e271) aid_touch_area_cam4_ParamLimits

0x8649,	// (0x0005e271) aid_touch_area_cam4

0xef39,	// (0x00064b61) battery_pane_cp01

0x8719,	// (0x0005e341) main_camera4_pane_g6_ParamLimits

0x8719,	// (0x0005e341) main_camera4_pane_g6

0x8743,	// (0x0005e36b) main_camera4_pane_t2_ParamLimits

0x8743,	// (0x0005e36b) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0006553f) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0006553f) main_camera4_pane_t

0x878a,	// (0x0005e3b2) aid_touch_area_vid4_ParamLimits

0x878a,	// (0x0005e3b2) aid_touch_area_vid4

0x87f1,	// (0x0005e419) main_video4_pane_g5_ParamLimits

0x87f1,	// (0x0005e419) main_video4_pane_g5

0x881c,	// (0x0005e444) vid4_progress_pane_ParamLimits

0x881c,	// (0x0005e444) vid4_progress_pane

0xcfc2,	// (0x00062bea) main_cset_slider_pane_g18_ParamLimits

0xcfc2,	// (0x00062bea) main_cset_slider_pane_g18

0xd1bf,	// (0x00062de7) cell_cam4_burst_pane_g2_ParamLimits

0xd1bf,	// (0x00062de7) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00065698) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00065698) cell_cam4_burst_pane_g

0xc18a,	// (0x00061db2) bg_cl_pane_ParamLimits

0xc18a,	// (0x00061db2) bg_cl_pane

0x9736,	// (0x0005f35e) cl_header_pane_ParamLimits

0x9736,	// (0x0005f35e) cl_header_pane

0x974a,	// (0x0005f372) cl_listscroll_pane_ParamLimits

0x974a,	// (0x0005f372) cl_listscroll_pane

0xd39d,	// (0x00062fc5) bg_cl_pane_g1

0xd3a5,	// (0x00062fcd) bg_cl_pane_g2

0xd3ad,	// (0x00062fd5) bg_cl_pane_g3

0xd3b5,	// (0x00062fdd) bg_cl_pane_g4

0xd3bd,	// (0x00062fe5) bg_cl_pane_g5

0xd3c5,	// (0x00062fed) bg_cl_pane_g6

0xd3cd,	// (0x00062ff5) bg_cl_pane_g7

0xd3d5,	// (0x00062ffd) bg_cl_pane_g8

0xd3dd,	// (0x00063005) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x000656d3) bg_cl_pane_g

0x975a,	// (0x0005f382) aid_height_cl_leading_ParamLimits

0x975a,	// (0x0005f382) aid_height_cl_leading

0x9766,	// (0x0005f38e) aid_height_cl_text_ParamLimits

0x9766,	// (0x0005f38e) aid_height_cl_text

0x1c2e,	// (0x00057856) bg_cl_header_pane_ParamLimits

0x1c2e,	// (0x00057856) bg_cl_header_pane

0x9785,	// (0x0005f3ad) cl_header_pane_g1_ParamLimits

0x9785,	// (0x0005f3ad) cl_header_pane_g1

0x979b,	// (0x0005f3c3) cl_header_pane_t1_ParamLimits

0x979b,	// (0x0005f3c3) cl_header_pane_t1

0xd3e5,	// (0x0006300d) cl_list_pane

0xcf95,	// (0x00062bbd) hc_scroll_pane_cp01

0xc63c,	// (0x00062264) bg_cl_header_pane_g1

0xce7b,	// (0x00062aa3) bg_cl_header_pane_g2

0xc65c,	// (0x00062284) bg_cl_header_pane_g3

0xce8b,	// (0x00062ab3) bg_cl_header_pane_g4

0xce83,	// (0x00062aab) bg_cl_header_pane_g5

0xd0c0,	// (0x00062ce8) bg_cl_header_pane_g6

0xcea3,	// (0x00062acb) bg_cl_header_pane_g7

0xceab,	// (0x00062ad3) bg_cl_header_pane_g8

0xce9b,	// (0x00062ac3) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x000656e6) bg_cl_header_pane_g

0x97b4,	// (0x0005f3dc) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x97b4,	// (0x0005f3dc) hc_cl_list_double_graphic_heading_pane

0x97c5,	// (0x0005f3ed) hc_cl_list_single_graphic_pane_ParamLimits

0x97c5,	// (0x0005f3ed) hc_cl_list_single_graphic_pane

0x97db,	// (0x0005f403) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x97db,	// (0x0005f403) hc_cl_list_single_graphic_pane_g1

0x97e7,	// (0x0005f40f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x97e7,	// (0x0005f40f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x000656f9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x000656f9) hc_cl_list_single_graphic_pane_g

0x97fb,	// (0x0005f423) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x97fb,	// (0x0005f423) hc_cl_list_single_graphic_pane_t1

0x97db,	// (0x0005f403) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x97db,	// (0x0005f403) hc_cl_list_double_graphic_heading_pane_g1

0x9810,	// (0x0005f438) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9810,	// (0x0005f438) hc_cl_list_double_graphic_heading_pane_g2

0x9824,	// (0x0005f44c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9824,	// (0x0005f44c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x000656fe) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x000656fe) hc_cl_list_double_graphic_heading_pane_g

0x9838,	// (0x0005f460) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9838,	// (0x0005f460) hc_cl_list_double_graphic_heading_pane_t1

0x984d,	// (0x0005f475) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x984d,	// (0x0005f475) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00065705) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00065705) hc_cl_list_double_graphic_heading_pane_t

0xf05d,	// (0x00064c85) vid4_progress_pane_g1

0xf06d,	// (0x00064c95) vid4_progress_pane_g2

0x03ee,	// (0x00056016) vid4_progress_pane_g3

0xf07d,	// (0x00064ca5) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0006570a) vid4_progress_pane_g

0xf09b,	// (0x00064cc3) vid4_progress_pane_t1

0xf0b0,	// (0x00064cd8) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00065715) vid4_progress_pane_t

0xf0db,	// (0x00064d03) wait_bar_pane_cp07

0x1e68,	// (0x00057a90) blid_firmament_pane_ParamLimits

0x1eab,	// (0x00057ad3) popup_blid_sat_info2_window_g1

0x1ecf,	// (0x00057af7) popup_blid_sat_info2_window_t3

0x1edd,	// (0x00057b05) popup_blid_sat_info2_window_t4

0x1eeb,	// (0x00057b13) popup_blid_sat_info2_window_t5

0x1ef9,	// (0x00057b21) popup_blid_sat_info2_window_t6

0x1f09,	// (0x00057b31) popup_blid_sat_info2_window_t7

0x1f17,	// (0x00057b3f) popup_blid_sat_info2_window_t8

0x1f25,	// (0x00057b4d) popup_blid_sat_info2_window_t9

0x1f33,	// (0x00057b5b) popup_blid_sat_info2_window_t10

0x1ff5,	// (0x00057c1d) aid_firma_cardinal_ParamLimits

0x2009,	// (0x00057c31) blid_firmament_pane_t1_ParamLimits

0x2020,	// (0x00057c48) blid_firmament_pane_t2_ParamLimits

0x2037,	// (0x00057c5f) blid_firmament_pane_t3_ParamLimits

0x204e,	// (0x00057c76) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0006532e) blid_firmament_pane_t_ParamLimits

0x2065,	// (0x00057c8d) blid_sat_info_pane_ParamLimits

0x1c2e,	// (0x00057856) main_cam_set_pane_ParamLimits

0x7c4e,	// (0x0005d876) aid_size_cell_colour_35_ParamLimits

0x7c6e,	// (0x0005d896) aid_size_cell_colour_112_ParamLimits

0x7c8e,	// (0x0005d8b6) aid_size_cell_effect_ParamLimits

0x1c20,	// (0x00057848) bg_tb_trans_pane_cp02_ParamLimits

0x0375,	// (0x00055f9d) heading_imed_pane_ParamLimits

0x7cae,	// (0x0005d8d6) listscroll_imed_pane_ParamLimits

0x1252,	// (0x00056e7a) popup_call2_audio_first_window_g5_ParamLimits

0x1252,	// (0x00056e7a) popup_call2_audio_first_window_g5

0x82f4,	// (0x0005df1c) aid_size_touch_image3_arrow_left_ParamLimits

0x82f4,	// (0x0005df1c) aid_size_touch_image3_arrow_left

0x8320,	// (0x0005df48) aid_size_touch_image3_arrow_right_ParamLimits

0x8320,	// (0x0005df48) aid_size_touch_image3_arrow_right

0xf0c6,	// (0x00064cee) vid4_progress_pane_t3

0x806f,	// (0x0005dc97) main_hwr_training_symbol_option_pane_ParamLimits

0x806f,	// (0x0005dc97) main_hwr_training_symbol_option_pane

0xcc04,	// (0x0006282c) popup_hwr_training_preview_window_ParamLimits

0xcc04,	// (0x0006282c) popup_hwr_training_preview_window

0x808f,	// (0x0005dcb7) hwr_training_navi_pane_g5_ParamLimits

0x808f,	// (0x0005dcb7) hwr_training_navi_pane_g5

0xce69,	// (0x00062a91) popup_char_count_window

0xefc8,	// (0x00064bf0) bg_popup_sub_pane_cp20_ParamLimits

0x92f3,	// (0x0005ef1b) list_vitu2_match_list_pane_ParamLimits

0x9302,	// (0x0005ef2a) vitu2_page_scroll_pane_ParamLimits

0x9302,	// (0x0005ef2a) vitu2_page_scroll_pane

0xd448,	// (0x00063070) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd448,	// (0x00063070) list_single_hwr_training_symbol_option_pane

0xd45b,	// (0x00063083) list_single_hwr_training_symbol_option_pane_g1

0xd463,	// (0x0006308b) list_single_hwr_training_symbol_option_pane_t1

0xd471,	// (0x00063099) bg_button_pane_cp023

0xd47a,	// (0x000630a2) bg_button_pane_cp024

0x9862,	// (0x0005f48a) vitu2_page_scroll_pane_g1

0x986a,	// (0x0005f492) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0006571c) vitu2_page_scroll_pane_g

0x9872,	// (0x0005f49a) vitu2_page_scroll_pane_t1

0xd4ad,	// (0x000630d5) popup_char_count_window_g1

0xd4b6,	// (0x000630de) popup_char_count_window_g2

0xd4bf,	// (0x000630e7) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00065721) popup_char_count_window_g

0xd4c8,	// (0x000630f0) popup_char_count_window_t1

0xb9b1,	// (0x000615d9) main_vded2_pane

0xc903,	// (0x0006252b) aid_size_cell_imed_line

0xc90d,	// (0x00062535) grid_imed_line_width_pane

0x888a,	// (0x0005e4b2) vid4_indicators_pane_g4

0xd4d6,	// (0x000630fe) cell_imed_line_width_pane_ParamLimits

0xd4d6,	// (0x000630fe) cell_imed_line_width_pane

0xd4ea,	// (0x00063112) cell_imed_line_width_pane_g1

0x20bc,	// (0x00057ce4) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00065728) cell_imed_line_width_pane_g

0x9881,	// (0x0005f4a9) main_vded2_pane_g1_ParamLimits

0x9881,	// (0x0005f4a9) main_vded2_pane_g1

0x9897,	// (0x0005f4bf) main_vded2_pane_g2_ParamLimits

0x9897,	// (0x0005f4bf) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0006572d) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0006572d) main_vded2_pane_g

0x98a9,	// (0x0005f4d1) vded2_slider_pane_ParamLimits

0x98a9,	// (0x0005f4d1) vded2_slider_pane

0x98b9,	// (0x0005f4e1) aid_size_touch_vded2_end

0x98c3,	// (0x0005f4eb) aid_size_touch_vded2_playhead

0xd4f3,	// (0x0006311b) aid_size_touch_vded2_start

0xd4fb,	// (0x00063123) vded2_slider_bg_pane

0xd504,	// (0x0006312c) vded2_slider_pane_g1

0xd50d,	// (0x00063135) vded2_slider_pane_g2

0x98cd,	// (0x0005f4f5) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00065732) vded2_slider_pane_g

0xd515,	// (0x0006313d) vded2_slider_bg_pane_g1

0xd51e,	// (0x00063146) vded2_slider_bg_pane_g2

0xd527,	// (0x0006314f) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00065739) vded2_slider_bg_pane_g

0x561c,	// (0x0005b244) aid_postcard_touch_down_pane_ParamLimits

0x561c,	// (0x0005b244) aid_postcard_touch_down_pane

0x5632,	// (0x0005b25a) aid_postcard_touch_up_pane_ParamLimits

0x5632,	// (0x0005b25a) aid_postcard_touch_up_pane

0xb9b1,	// (0x000615d9) main_blid2_pane

0x1c3c,	// (0x00057864) popup_blid2_search_window

0xb9b1,	// (0x000615d9) blid2_gps_pane

0xb9b1,	// (0x000615d9) blid2_navig_pane

0xb9b1,	// (0x000615d9) blid2_search_pane

0xb9b1,	// (0x000615d9) blid2_tripm_pane

0x98d8,	// (0x0005f500) blid2_search_pane_g1_ParamLimits

0x98d8,	// (0x0005f500) blid2_search_pane_g1

0x98f2,	// (0x0005f51a) blid2_search_pane_t1_ParamLimits

0x98f2,	// (0x0005f51a) blid2_search_pane_t1

0x9904,	// (0x0005f52c) aid_size_cell_blid2_gps_ParamLimits

0x9904,	// (0x0005f52c) aid_size_cell_blid2_gps

0x991c,	// (0x0005f544) blid2_gps_pane_g1_ParamLimits

0x991c,	// (0x0005f544) blid2_gps_pane_g1

0x9930,	// (0x0005f558) grid_blid2_satellite_pane_ParamLimits

0x9930,	// (0x0005f558) grid_blid2_satellite_pane

0x994a,	// (0x0005f572) blid2_navig_pane_g1_ParamLimits

0x994a,	// (0x0005f572) blid2_navig_pane_g1

0x9956,	// (0x0005f57e) blid2_navig_pane_t1_ParamLimits

0x9956,	// (0x0005f57e) blid2_navig_pane_t1

0x9971,	// (0x0005f599) blid2_navig_pane_t2_ParamLimits

0x9971,	// (0x0005f599) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00065740) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00065740) blid2_navig_pane_t

0x998c,	// (0x0005f5b4) blid2_navig_ring_pane_ParamLimits

0x998c,	// (0x0005f5b4) blid2_navig_ring_pane

0x99a5,	// (0x0005f5cd) blid2_speed_pane_ParamLimits

0x99a5,	// (0x0005f5cd) blid2_speed_pane

0x99b1,	// (0x0005f5d9) blid2_tripm_pane_g1_ParamLimits

0x99b1,	// (0x0005f5d9) blid2_tripm_pane_g1

0x99ca,	// (0x0005f5f2) blid2_tripm_pane_g2_ParamLimits

0x99ca,	// (0x0005f5f2) blid2_tripm_pane_g2

0x99de,	// (0x0005f606) blid2_tripm_pane_g3_ParamLimits

0x99de,	// (0x0005f606) blid2_tripm_pane_g3

0x99f2,	// (0x0005f61a) blid2_tripm_pane_g4_ParamLimits

0x99f2,	// (0x0005f61a) blid2_tripm_pane_g4

0x9a06,	// (0x0005f62e) blid2_tripm_pane_g5_ParamLimits

0x9a06,	// (0x0005f62e) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00065745) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00065745) blid2_tripm_pane_g

0x9a2c,	// (0x0005f654) blid2_tripm_pane_t1_ParamLimits

0x9a2c,	// (0x0005f654) blid2_tripm_pane_t1

0x9a47,	// (0x0005f66f) blid2_tripm_pane_t2_ParamLimits

0x9a47,	// (0x0005f66f) blid2_tripm_pane_t2

0x9a60,	// (0x0005f688) blid2_tripm_pane_t3_ParamLimits

0x9a60,	// (0x0005f688) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00065752) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00065752) blid2_tripm_pane_t

0x9aa7,	// (0x0005f6cf) cell_blid2_satellite_pane_ParamLimits

0x9aa7,	// (0x0005f6cf) cell_blid2_satellite_pane

0x9ac5,	// (0x0005f6ed) cell_blid2_satellite_pane_g1

0xd530,	// (0x00063158) cell_blid2_satellite_pane_t1

0x2075,	// (0x00057c9d) blid2_speed_pane_g1

0xd53e,	// (0x00063166) blid2_speed_pane_t1

0xd54c,	// (0x00063174) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0006575b) blid2_speed_pane_t

0x2075,	// (0x00057c9d) blid2_navig_ring_pane_g1

0x9ace,	// (0x0005f6f6) blid2_navig_ring_pane_g2

0x9ad6,	// (0x0005f6fe) blid2_navig_ring_pane_g3

0x9ade,	// (0x0005f706) blid2_navig_ring_pane_g4

0x9ae6,	// (0x0005f70e) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00065760) blid2_navig_ring_pane_g

0xb9b1,	// (0x000615d9) bg_popup_window_pane_cp011

0xd55a,	// (0x00063182) popup_blid2_search_window_g1

0xd562,	// (0x0006318a) popup_blid2_search_window_t1

0xd570,	// (0x00063198) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0006576b) popup_blid2_search_window_t

0xc54b,	// (0x00062173) main_browser_pane_g1

0xc18a,	// (0x00061db2) main_browser_pane_ParamLimits

0xefc8,	// (0x00064bf0) bg_button_pane_cp011_ParamLimits

0x8b92,	// (0x0005e7ba) cell_vitu2_function_pane_g1_ParamLimits

0x1c2e,	// (0x00057856) bg_popup_sub_pane_cp22_ParamLimits

0x9472,	// (0x0005f09a) input_focus_pane_cp08_ParamLimits

0x947f,	// (0x0005f0a7) popup_vitu2_query_button_pane_ParamLimits

0x947f,	// (0x0005f0a7) popup_vitu2_query_button_pane

0x9454,	// (0x0005f07c) popup_vitu2_query_input_button_pane

0xd115,	// (0x00062d3d) popup_vitu2_query_window_g1_ParamLimits

0x9490,	// (0x0005f0b8) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00065672) popup_vitu2_query_window_g_ParamLimits

0xb9b1,	// (0x000615d9) bg_button_pane_cp026

0x9aee,	// (0x0005f716) popup_vitu2_query_input_button_pane_g1

0xb9b1,	// (0x000615d9) bg_button_pane_cp025

0xd57e,	// (0x000631a6) popup_vitu2_query_button_pane_t1

0x6f3b,	// (0x0005cb63) main_mp3_pane_t6

0x6f51,	// (0x0005cb79) popup_slider_window_cp01

0xef57,	// (0x00064b7f) cam4_battery_pane

0xefbe,	// (0x00064be6) cam4_battery_pane_cp02

0xf055,	// (0x00064c7d) cam4_battery_pane_cp01

0xf055,	// (0x00064c7d) cam4_battery_pane_cp03

0xcd02,	// (0x0006292a) cam4_battery_pane_g1

0x2075,	// (0x00057c9d) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00065770) cam4_battery_pane_g

0x1f41,	// (0x00057b69) popup_blid_sat_info2_window_t11

0x4f72,	// (0x0005ab9a) aid_size_touch_mv_arrow_left_ParamLimits

0x4f9b,	// (0x0005abc3) aid_size_touch_mv_arrow_right_ParamLimits

0x0794,	// (0x000563bc) navi_pane_g1_ParamLimits

0x4fc4,	// (0x0005abec) navi_pane_g2_ParamLimits

0x4ff2,	// (0x0005ac1a) navi_pane_g3_ParamLimits

0xf418,	// (0x00065040) navi_pane_g_ParamLimits

0x504a,	// (0x0005ac72) navi_pane_mv_t1_ParamLimits

0x7ce7,	// (0x0005d90f) grid_imed_effect_pane_ParamLimits

0xc494,	// (0x000620bc) aid_placing_vt_slider_lsc

0xc49c,	// (0x000620c4) aid_placing_vt_slider_prt

0x1c2e,	// (0x00057856) bg_tb_trans_pane_cp01_ParamLimits

0x6da7,	// (0x0005c9cf) popup_image_details_window_g1_ParamLimits

0x6dba,	// (0x0005c9e2) popup_image_details_window_g2_ParamLimits

0x6dcf,	// (0x0005c9f7) popup_image_details_window_g3_ParamLimits

0x6dcf,	// (0x0005c9f7) popup_image_details_window_g3

0xf74b,	// (0x00065373) popup_image_details_window_g_ParamLimits

0x6de3,	// (0x0005ca0b) popup_image_details_window_t1_ParamLimits

0x6df5,	// (0x0005ca1d) popup_image_details_window_t2_ParamLimits

0x6e0e,	// (0x0005ca36) popup_image_details_window_t3_ParamLimits

0x6e22,	// (0x0005ca4a) popup_image_details_window_t4_ParamLimits

0x6e3d,	// (0x0005ca65) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0006537a) popup_image_details_window_t_ParamLimits

0x9772,	// (0x0005f39a) cl_header_name_pane_ParamLimits

0x9772,	// (0x0005f39a) cl_header_name_pane

0x9af6,	// (0x0005f71e) cl_header_name_pane_t1_ParamLimits

0x9af6,	// (0x0005f71e) cl_header_name_pane_t1

0x9b17,	// (0x0005f73f) cl_header_name_pane_t2_ParamLimits

0x9b17,	// (0x0005f73f) cl_header_name_pane_t2

0x9b59,	// (0x0005f781) cl_header_name_pane_t3_ParamLimits

0x9b59,	// (0x0005f781) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x00065775) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x00065775) cl_header_name_pane_t

0x501b,	// (0x0005ac43) navi_pane_mv_g2_ParamLimits

0xce26,	// (0x00062a4e) field_vitu2_entry_pane_g1_ParamLimits

0xce32,	// (0x00062a5a) field_vitu2_entry_pane_g2_ParamLimits

0xce3e,	// (0x00062a66) field_vitu2_entry_pane_g3_ParamLimits

0xce3e,	// (0x00062a66) field_vitu2_entry_pane_g3

0xf949,	// (0x00065571) field_vitu2_entry_pane_g_ParamLimits

0x8b0e,	// (0x0005e736) cell_vitu2_itu_pane_g1_ParamLimits

0x8b1e,	// (0x0005e746) cell_vitu2_itu_pane_g2_ParamLimits

0x8b1e,	// (0x0005e746) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0006557d) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0006557d) cell_vitu2_itu_pane_g

0xefc8,	// (0x00064bf0) bg_vkb2_func_pane_cp05_ParamLimits

0xefc8,	// (0x00064bf0) bg_vkb2_func_pane_cp05

0xefc8,	// (0x00064bf0) bg_vkb2_func_pane_cp03

0xefc8,	// (0x00064bf0) bg_vkb2_func_pane_cp04

0xefc8,	// (0x00064bf0) bg_vkb2_func_pane_cp10_ParamLimits

0xefc8,	// (0x00064bf0) bg_vkb2_func_pane_cp10

0x9718,	// (0x0005f340) bg_vkb2_func_pane_cp08

0x96fe,	// (0x0005f326) bg_vkb2_func_pane_cp06

0x970c,	// (0x0005f334) bg_vkb2_func_pane_cp07

0xd483,	// (0x000630ab) bg_vkb2_func_pane_cp11_ParamLimits

0xd483,	// (0x000630ab) bg_vkb2_func_pane_cp11

0xd498,	// (0x000630c0) bg_vkb2_func_pane_cp12_ParamLimits

0xd498,	// (0x000630c0) bg_vkb2_func_pane_cp12

0xb9b1,	// (0x000615d9) bg_vkb2_func_pane_cp09

0xce7b,	// (0x00062aa3) bg_vkb2_func_pane_g1

0xc65c,	// (0x00062284) bg_vkb2_func_pane_g2

0xce83,	// (0x00062aab) bg_vkb2_func_pane_g3

0xce8b,	// (0x00062ab3) bg_vkb2_func_pane_g4

0xd0c0,	// (0x00062ce8) bg_vkb2_func_pane_g5

0xcea3,	// (0x00062acb) bg_vkb2_func_pane_g6

0xceab,	// (0x00062ad3) bg_vkb2_func_pane_g7

0xce9b,	// (0x00062ac3) bg_vkb2_func_pane_g8

0xc63c,	// (0x00062264) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0006577c) bg_vkb2_func_pane_g

0x9a1a,	// (0x0005f642) blid2_tripm_pane_g6_ParamLimits

0x9a1a,	// (0x0005f642) blid2_tripm_pane_g6

0xccbc,	// (0x000628e4) mp4_progress_pane_g1

0x9a93,	// (0x0005f6bb) blid2_tripm_values_pane_ParamLimits

0x9a93,	// (0x0005f6bb) blid2_tripm_values_pane

0x9b8a,	// (0x0005f7b2) blid2_tripm_values_pane_t1

0x9b98,	// (0x0005f7c0) blid2_tripm_values_pane_t2

0x9ba6,	// (0x0005f7ce) blid2_tripm_values_pane_t3

0x9bb4,	// (0x0005f7dc) blid2_tripm_values_pane_t4

0x9bc2,	// (0x0005f7ea) blid2_tripm_values_pane_t5

0x9bd0,	// (0x0005f7f8) blid2_tripm_values_pane_t6

0x9bde,	// (0x0005f806) blid2_tripm_values_pane_t7

0x9bec,	// (0x0005f814) blid2_tripm_values_pane_t8

0x9bfa,	// (0x0005f822) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0006578f) blid2_tripm_values_pane_t

0x401d,	// (0x00059c45) call_video_pane_t1_ParamLimits

0x402f,	// (0x00059c57) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00064ec9) call_video_pane_t_ParamLimits

0x551f,	// (0x0005b147) msg_header_pane_g1_ParamLimits

0x09af,	// (0x000565d7) msg_header_pane_g2_ParamLimits

0x09af,	// (0x000565d7) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x000650e3) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x000650e3) msg_header_pane_g

0xc18a,	// (0x00061db2) main_clock2_pane_ParamLimits

0x79b1,	// (0x0005d5d9) grid_clock2_toolbar_pane_ParamLimits

0x79b1,	// (0x0005d5d9) grid_clock2_toolbar_pane

0x79b1,	// (0x0005d5d9) listscroll_clock2_pane_ParamLimits

0x79b1,	// (0x0005d5d9) listscroll_clock2_pane

0x7a8d,	// (0x0005d6b5) main_clock2_pane_t3_ParamLimits

0x7a8d,	// (0x0005d6b5) main_clock2_pane_t3

0x7aa8,	// (0x0005d6d0) main_clock2_pane_t4_ParamLimits

0x7aa8,	// (0x0005d6d0) main_clock2_pane_t4

0xd58c,	// (0x000631b4) cell_clock2_toolbar_pane

0xd594,	// (0x000631bc) cell_clock2_toolbar_pane_cp01

0xd594,	// (0x000631bc) cell_clock2_toolbar_pane_cp02

0xd59c,	// (0x000631c4) cell_clock2_toolbar_pane_cp03

0xd5a4,	// (0x000631cc) list_clock2_pane

0x06eb,	// (0x00056313) scroll_pane_cp10

0xd5ac,	// (0x000631d4) list_single_clock2_pane_ParamLimits

0xd5ac,	// (0x000631d4) list_single_clock2_pane

0x0834,	// (0x0005645c) list_highlight_pane_cp08

0xd5b9,	// (0x000631e1) list_single_clock2_pane_t1

0xd5c7,	// (0x000631ef) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x000657a2) list_single_clock2_pane_t

0xb9b1,	// (0x000615d9) bg_button_pane_cp10

0xd5d5,	// (0x000631fd) cell_clock2_toolbar_pane_g1

0x55a8,	// (0x0005b1d0) aid_main_viewer_pane_g1_ParamLimits

0x55a8,	// (0x0005b1d0) aid_main_viewer_pane_g1

0x55b6,	// (0x0005b1de) aid_main_viewer_pane_g2_ParamLimits

0x55b6,	// (0x0005b1de) aid_main_viewer_pane_g2

0x55c4,	// (0x0005b1ec) aid_main_viewer_pane_g3_ParamLimits

0x55c4,	// (0x0005b1ec) aid_main_viewer_pane_g3

0x55d3,	// (0x0005b1fb) aid_main_viewer_pane_g4_ParamLimits

0x55d3,	// (0x0005b1fb) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x000650f4) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x000650f4) aid_main_viewer_pane_g

0x5ed9,	// (0x0005bb01) main_calc_pane_ParamLimits

0x5eed,	// (0x0005bb15) main_dialer2_pane_ParamLimits

0xb9b1,	// (0x000615d9) main_cam6_pane

0xb9b1,	// (0x000615d9) main_vid6_pane

0x79bd,	// (0x0005d5e5) listscroll_gen_pane_cp06_ParamLimits

0x79bd,	// (0x0005d5e5) listscroll_gen_pane_cp06

0x7ac3,	// (0x0005d6eb) main_clock2_pane_t5_ParamLimits

0x7ac3,	// (0x0005d6eb) main_clock2_pane_t5

0x7b1a,	// (0x0005d742) aid_call2_pane_cp10_ParamLimits

0x7b2c,	// (0x0005d754) aid_call_pane_cp10_ParamLimits

0x0769,	// (0x00056391) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0769,	// (0x00056391) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b3e,	// (0x0005d766) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b3e,	// (0x0005d766) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0769,	// (0x00056391) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0006542a) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b50,	// (0x0005d778) popup_clock_analogue_window_cp10_t1_ParamLimits

0x82a1,	// (0x0005dec9) cell_dialer2_keypad_pane_g2_ParamLimits

0x82a1,	// (0x0005dec9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00065510) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00065510) cell_dialer2_keypad_pane_g

0x82bd,	// (0x0005dee5) cell_dialer2_keypad_pane_t1

0x8ea5,	// (0x0005eacd) main_cset_text2_pane_ParamLimits

0x8ea5,	// (0x0005eacd) main_cset_text2_pane

0xd2f5,	// (0x00062f1d) area_vitu2_query_pane_g1_ParamLimits

0x969d,	// (0x0005f2c5) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x000656bf) area_vitu2_query_pane_g_ParamLimits

0xd379,	// (0x00062fa1) area_vitu2_query_pane_t7_ParamLimits

0xd379,	// (0x00062fa1) area_vitu2_query_pane_t7

0x96fe,	// (0x0005f326) bg_button_pane_cp018_ParamLimits

0x970c,	// (0x0005f334) bg_button_pane_cp021_ParamLimits

0x9718,	// (0x0005f340) bg_button_pane_cp022_ParamLimits

0x9718,	// (0x0005f340) bg_vkb2_func_pane_cp08_ParamLimits

0x96fe,	// (0x0005f326) bg_vkb2_func_pane_cp06_ParamLimits

0x970c,	// (0x0005f334) bg_vkb2_func_pane_cp07_ParamLimits

0x9727,	// (0x0005f34f) input_focus_pane_cp09_ParamLimits

0xf0ed,	// (0x00064d15) cam6_autofocus_pane_ParamLimits

0xf0ed,	// (0x00064d15) cam6_autofocus_pane

0x9c08,	// (0x0005f830) cam6_image_uncrop_pane_ParamLimits

0x9c08,	// (0x0005f830) cam6_image_uncrop_pane

0x9c17,	// (0x0005f83f) cam6_indi_pane_ParamLimits

0x9c17,	// (0x0005f83f) cam6_indi_pane

0x9c2d,	// (0x0005f855) cam6_mode_pane_ParamLimits

0x9c2d,	// (0x0005f855) cam6_mode_pane

0x9c3f,	// (0x0005f867) cam6_timer_pane_ParamLimits

0x9c3f,	// (0x0005f867) cam6_timer_pane

0x9c4b,	// (0x0005f873) cam6_zoom_pane_ParamLimits

0x9c4b,	// (0x0005f873) cam6_zoom_pane

0x9c57,	// (0x0005f87f) cam6_mode_pane_g1_ParamLimits

0x9c57,	// (0x0005f87f) cam6_mode_pane_g1

0x9c67,	// (0x0005f88f) cam6_mode_pane_g2_ParamLimits

0x9c67,	// (0x0005f88f) cam6_mode_pane_g2

0x9c77,	// (0x0005f89f) cam6_mode_pane_g3_ParamLimits

0x9c77,	// (0x0005f89f) cam6_mode_pane_g3

0x9c87,	// (0x0005f8af) cam6_mode_pane_g4_ParamLimits

0x9c87,	// (0x0005f8af) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x000657a7) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x000657a7) cam6_mode_pane_g

0xd5dd,	// (0x00063205) bg_tb_trans_pane_cp08_ParamLimits

0xd5dd,	// (0x00063205) bg_tb_trans_pane_cp08

0xd5eb,	// (0x00063213) cam6_battery_pane_ParamLimits

0xd5eb,	// (0x00063213) cam6_battery_pane

0xd601,	// (0x00063229) cam6_indi_pane_g1_ParamLimits

0xd601,	// (0x00063229) cam6_indi_pane_g1

0xd613,	// (0x0006323b) cam6_indi_pane_g2_ParamLimits

0xd613,	// (0x0006323b) cam6_indi_pane_g2

0xd625,	// (0x0006324d) cam6_indi_pane_g3_ParamLimits

0xd625,	// (0x0006324d) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x000657b0) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x000657b0) cam6_indi_pane_g

0xd637,	// (0x0006325f) cam6_indi_pane_t1_ParamLimits

0xd637,	// (0x0006325f) cam6_indi_pane_t1

0x9c97,	// (0x0005f8bf) cam6_autofocus_pane_g1

0x9c9f,	// (0x0005f8c7) cam6_autofocus_pane_g2

0x9ca7,	// (0x0005f8cf) cam6_autofocus_pane_g3

0x9caf,	// (0x0005f8d7) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x000657b7) cam6_autofocus_pane_g

0xd65d,	// (0x00063285) cam6_timer_pane_g1

0xd665,	// (0x0006328d) cam6_timer_pane_t1

0xd673,	// (0x0006329b) cam6_zoom_cont_pane

0xd67b,	// (0x000632a3) cam6_zoom_pane_g1

0xd683,	// (0x000632ab) cam6_zoom_pane_g2

0x9cb7,	// (0x0005f8df) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x000657c0) cam6_zoom_pane_g

0x2075,	// (0x00057c9d) cam6_battery_pane_g1

0x2075,	// (0x00057c9d) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x00065337) cam6_battery_pane_g

0xd68b,	// (0x000632b3) cam6_zoom_cont_pane_g1

0xd694,	// (0x000632bc) cam6_zoom_cont_pane_g2

0xd69d,	// (0x000632c5) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x000657c7) cam6_zoom_cont_pane_g

0x9cd4,	// (0x0005f8fc) cam6_mode_pane_cp_ParamLimits

0x9cd4,	// (0x0005f8fc) cam6_mode_pane_cp

0x9ce6,	// (0x0005f90e) cam6_zoom_pane_cp_ParamLimits

0x9ce6,	// (0x0005f90e) cam6_zoom_pane_cp

0x9cf2,	// (0x0005f91a) vid6_image_uncrop_cif_pane_ParamLimits

0x9cf2,	// (0x0005f91a) vid6_image_uncrop_cif_pane

0x9d02,	// (0x0005f92a) vid6_image_uncrop_nhd_pane_ParamLimits

0x9d02,	// (0x0005f92a) vid6_image_uncrop_nhd_pane

0x9d11,	// (0x0005f939) vid6_image_uncrop_vga_pane_ParamLimits

0x9d11,	// (0x0005f939) vid6_image_uncrop_vga_pane

0x9d20,	// (0x0005f948) vid6_image_uncrop_wvga_pane_ParamLimits

0x9d20,	// (0x0005f948) vid6_image_uncrop_wvga_pane

0x9d2f,	// (0x0005f957) vid6_indi_pane_ParamLimits

0x9d2f,	// (0x0005f957) vid6_indi_pane

0xd5dd,	// (0x00063205) bg_tb_trans_pane_cp09_ParamLimits

0xd5dd,	// (0x00063205) bg_tb_trans_pane_cp09

0xd6b5,	// (0x000632dd) cam6_battery_pane_cp_ParamLimits

0xd6b5,	// (0x000632dd) cam6_battery_pane_cp

0xd6c1,	// (0x000632e9) vid6_indi_pane_g1_ParamLimits

0xd6c1,	// (0x000632e9) vid6_indi_pane_g1

0xd6d3,	// (0x000632fb) vid6_indi_pane_g2_ParamLimits

0xd6d3,	// (0x000632fb) vid6_indi_pane_g2

0xd6e5,	// (0x0006330d) vid6_indi_pane_g3_ParamLimits

0xd6e5,	// (0x0006330d) vid6_indi_pane_g3

0xd6fa,	// (0x00063322) vid6_indi_pane_g4_ParamLimits

0xd6fa,	// (0x00063322) vid6_indi_pane_g4

0xd70f,	// (0x00063337) vid6_indi_pane_g5_ParamLimits

0xd70f,	// (0x00063337) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x000657ce) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x000657ce) vid6_indi_pane_g

0xd729,	// (0x00063351) vid6_indi_pane_t1_ParamLimits

0xd729,	// (0x00063351) vid6_indi_pane_t1

0xd73f,	// (0x00063367) vid6_indi_pane_t2_ParamLimits

0xd73f,	// (0x00063367) vid6_indi_pane_t2

0xd767,	// (0x0006338f) vid6_indi_pane_t3_ParamLimits

0xd767,	// (0x0006338f) vid6_indi_pane_t3

0xd78f,	// (0x000633b7) vid6_indi_pane_t4_ParamLimits

0xd78f,	// (0x000633b7) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x000657d9) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x000657d9) vid6_indi_pane_t

0xd7b3,	// (0x000633db) wait_bar_pane_cp08

0x9d47,	// (0x0005f96f) main_cset_text2_pane_t1_ParamLimits

0x9d47,	// (0x0005f96f) main_cset_text2_pane_t1

0x9cbf,	// (0x0005f8e7) listscroll_gen_pane_cp06_t1_ParamLimits

0x9cbf,	// (0x0005f8e7) listscroll_gen_pane_cp06_t1

0xb9b1,	// (0x000615d9) main_cam6_set_pane

0xef49,	// (0x00064b71) bg_tb_trans_pane_cp06_ParamLimits

0xef5f,	// (0x00064b87) cam4_indicators_pane_g1_ParamLimits

0xef70,	// (0x00064b98) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0006554d) cam4_indicators_pane_g_ParamLimits

0xef8e,	// (0x00064bb6) cam4_indicators_pane_t1_ParamLimits

0xefb0,	// (0x00064bd8) bg_tb_trans_pane_cp07_ParamLimits

0x8863,	// (0x0005e48b) vid4_indicators_pane_g1_ParamLimits

0x8870,	// (0x0005e498) vid4_indicators_pane_g2_ParamLimits

0x887d,	// (0x0005e4a5) vid4_indicators_pane_g3_ParamLimits

0x888a,	// (0x0005e4b2) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0006555f) vid4_indicators_pane_g_ParamLimits

0x88a2,	// (0x0005e4ca) vid4_indicators_pane_t1_ParamLimits

0xf05d,	// (0x00064c85) vid4_progress_pane_g1_ParamLimits

0xf06d,	// (0x00064c95) vid4_progress_pane_g2_ParamLimits

0x03ee,	// (0x00056016) vid4_progress_pane_g3_ParamLimits

0xf07d,	// (0x00064ca5) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0006570a) vid4_progress_pane_g_ParamLimits

0xf09b,	// (0x00064cc3) vid4_progress_pane_t1_ParamLimits

0xf0b0,	// (0x00064cd8) vid4_progress_pane_t2_ParamLimits

0xf0c6,	// (0x00064cee) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00065715) vid4_progress_pane_t_ParamLimits

0xf0db,	// (0x00064d03) wait_bar_pane_cp07_ParamLimits

0x9d64,	// (0x0005f98c) main_cam6_set_pane_g2_ParamLimits

0x9d64,	// (0x0005f98c) main_cam6_set_pane_g2

0x9d88,	// (0x0005f9b0) main_cset6_listscroll_pane_ParamLimits

0x9d88,	// (0x0005f9b0) main_cset6_listscroll_pane

0x9da8,	// (0x0005f9d0) main_cset6_slider_pane_ParamLimits

0x9da8,	// (0x0005f9d0) main_cset6_slider_pane

0x9dbe,	// (0x0005f9e6) main_cset6_text2_pane_ParamLimits

0x9dbe,	// (0x0005f9e6) main_cset6_text2_pane

0xd7c2,	// (0x000633ea) main_cset6_text_pane

0xd7ca,	// (0x000633f2) main_cset_list_pane_copy1_ParamLimits

0xd7ca,	// (0x000633f2) main_cset_list_pane_copy1

0xd7da,	// (0x00063402) scroll_pane_cp028_copy1

0x9dcc,	// (0x0005f9f4) cset_list_set_pane_copy1

0x9ddd,	// (0x0005fa05) aid_position_infowindow_above_copy1

0x9de5,	// (0x0005fa0d) aid_position_infowindow_below_copy1

0x9ded,	// (0x0005fa15) cset_list_set_pane_g1_copy1

0x9df5,	// (0x0005fa1d) cset_list_set_pane_g3_copy1_ParamLimits

0x9df5,	// (0x0005fa1d) cset_list_set_pane_g3_copy1

0x9e04,	// (0x0005fa2c) cset_list_set_pane_t1_copy1_ParamLimits

0x9e04,	// (0x0005fa2c) cset_list_set_pane_t1_copy1

0x1c2e,	// (0x00057856) list_highlight_pane_cp021_copy1_ParamLimits

0x1c2e,	// (0x00057856) list_highlight_pane_cp021_copy1

0xd7e3,	// (0x0006340b) cset6_slider_pane_ParamLimits

0xd7e3,	// (0x0006340b) cset6_slider_pane

0xd80f,	// (0x00063437) main_cset6_slider_pane_g1_ParamLimits

0xd80f,	// (0x00063437) main_cset6_slider_pane_g1

0x9e19,	// (0x0005fa41) main_cset6_slider_pane_g2_ParamLimits

0x9e19,	// (0x0005fa41) main_cset6_slider_pane_g2

0xd837,	// (0x0006345f) main_cset6_slider_pane_g3_ParamLimits

0xd837,	// (0x0006345f) main_cset6_slider_pane_g3

0x9e41,	// (0x0005fa69) main_cset6_slider_pane_g4_ParamLimits

0x9e41,	// (0x0005fa69) main_cset6_slider_pane_g4

0x9e4d,	// (0x0005fa75) main_cset6_slider_pane_g5_ParamLimits

0x9e4d,	// (0x0005fa75) main_cset6_slider_pane_g5

0xcfaa,	// (0x00062bd2) main_cset6_slider_pane_g7_ParamLimits

0xcfaa,	// (0x00062bd2) main_cset6_slider_pane_g7

0xcfb6,	// (0x00062bde) main_cset6_slider_pane_g8_ParamLimits

0xcfb6,	// (0x00062bde) main_cset6_slider_pane_g8

0x8f52,	// (0x0005eb7a) main_cset6_slider_pane_g9_ParamLimits

0x8f52,	// (0x0005eb7a) main_cset6_slider_pane_g9

0x8f5e,	// (0x0005eb86) main_cset6_slider_pane_g10_ParamLimits

0x8f5e,	// (0x0005eb86) main_cset6_slider_pane_g10

0x8f6a,	// (0x0005eb92) main_cset6_slider_pane_g11_ParamLimits

0x8f6a,	// (0x0005eb92) main_cset6_slider_pane_g11

0x8f76,	// (0x0005eb9e) main_cset6_slider_pane_g12_ParamLimits

0x8f76,	// (0x0005eb9e) main_cset6_slider_pane_g12

0x8f82,	// (0x0005ebaa) main_cset6_slider_pane_g13_ParamLimits

0x8f82,	// (0x0005ebaa) main_cset6_slider_pane_g13

0x8f8e,	// (0x0005ebb6) main_cset6_slider_pane_g14_ParamLimits

0x8f8e,	// (0x0005ebb6) main_cset6_slider_pane_g14

0x9e59,	// (0x0005fa81) main_cset6_slider_pane_g15_ParamLimits

0x9e59,	// (0x0005fa81) main_cset6_slider_pane_g15

0x8fb2,	// (0x0005ebda) main_cset6_slider_pane_g16_ParamLimits

0x8fb2,	// (0x0005ebda) main_cset6_slider_pane_g16

0x8fbe,	// (0x0005ebe6) main_cset6_slider_pane_g17_ParamLimits

0x8fbe,	// (0x0005ebe6) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x000657e2) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x000657e2) main_cset6_slider_pane_g

0xd843,	// (0x0006346b) main_cset6_slider_pane_t1_ParamLimits

0xd843,	// (0x0006346b) main_cset6_slider_pane_t1

0x9e89,	// (0x0005fab1) main_cset6_slider_pane_t2_ParamLimits

0x9e89,	// (0x0005fab1) main_cset6_slider_pane_t2

0x9eb4,	// (0x0005fadc) main_cset6_slider_pane_t3_ParamLimits

0x9eb4,	// (0x0005fadc) main_cset6_slider_pane_t3

0x9edf,	// (0x0005fb07) main_cset6_slider_pane_t4_ParamLimits

0x9edf,	// (0x0005fb07) main_cset6_slider_pane_t4

0x9f0a,	// (0x0005fb32) main_cset6_slider_pane_t5_ParamLimits

0x9f0a,	// (0x0005fb32) main_cset6_slider_pane_t5

0xd884,	// (0x000634ac) main_cset6_slider_pane_t7_ParamLimits

0xd884,	// (0x000634ac) main_cset6_slider_pane_t7

0x9f35,	// (0x0005fb5d) main_cset6_slider_pane_t8_ParamLimits

0x9f35,	// (0x0005fb5d) main_cset6_slider_pane_t8

0x9f59,	// (0x0005fb81) main_cset6_slider_pane_t9_ParamLimits

0x9f59,	// (0x0005fb81) main_cset6_slider_pane_t9

0x9f7d,	// (0x0005fba5) main_cset6_slider_pane_t10_ParamLimits

0x9f7d,	// (0x0005fba5) main_cset6_slider_pane_t10

0x9fa1,	// (0x0005fbc9) main_cset6_slider_pane_t11_ParamLimits

0x9fa1,	// (0x0005fbc9) main_cset6_slider_pane_t11

0xd8ba,	// (0x000634e2) main_cset6_slider_pane_t14_ParamLimits

0xd8ba,	// (0x000634e2) main_cset6_slider_pane_t14

0xd8f3,	// (0x0006351b) main_cset6_slider_pane_t15_ParamLimits

0xd8f3,	// (0x0006351b) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x00065807) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x00065807) main_cset6_slider_pane_t

0xd92c,	// (0x00063554) cset_slider_pane_g1_copy1

0xd935,	// (0x0006355d) cset_slider_pane_g2_copy1

0xd93e,	// (0x00063566) cset_slider_pane_g3_copy1

0xb9b1,	// (0x000615d9) bg_popup_sub_pane_cp011_copy1

0xd121,	// (0x00062d49) main_cset_text_pane_g1_copy1

0xd129,	// (0x00062d51) main_cset_text_pane_t1_copy1

0xd137,	// (0x00062d5f) main_cset_text_pane_t2_copy1

0xd145,	// (0x00062d6d) main_cset_text_pane_t3_copy1

0xd153,	// (0x00062d7b) main_cset_text_pane_t4_copy1

0xd161,	// (0x00062d89) main_cset_text_pane_t5_copy1

0xd16f,	// (0x00062d97) main_cset_text_pane_t6_copy1

0xd17d,	// (0x00062da5) main_cset_text_pane_t7_copy1

0x9fc5,	// (0x0005fbed) main_cset_text2_pane_t1_copy1

0xb9b1,	// (0x000615d9) main_ncimui_pane

0x612f,	// (0x0005bd57) popup_query_ncimui_window_ParamLimits

0x612f,	// (0x0005bd57) popup_query_ncimui_window

0x70c4,	// (0x0005ccec) field_cale_ev2_pane_g4_ParamLimits

0x70c4,	// (0x0005ccec) field_cale_ev2_pane_g4

0x8181,	// (0x0005dda9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8181,	// (0x0005dda9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x000654eb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x000654eb) cell_video_dialer_keypad_pane_g

0x8199,	// (0x0005ddc1) cell_video_dialer_keypad_pane_t1

0xb9b1,	// (0x000615d9) bg_popup_window_pane_cp012

0x05c8,	// (0x000561f0) heading_pane_cp06

0xda36,	// (0x0006365e) ncim_query_content_pane

0xb9b1,	// (0x000615d9) bg_popup_heading_pane_cp01

0xda3e,	// (0x00063666) ncim_heading_pane_t1

0xda4c,	// (0x00063674) ncim_indicator_popup_pane

0xda5e,	// (0x00063686) ncim_query_button_pane

0xda72,	// (0x0006369a) ncim_query_content_pane_t1

0xda84,	// (0x000636ac) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00065846) ncim_query_content_pane_t

0xdabe,	// (0x000636e6) ncim_query_list_pane

0xdad0,	// (0x000636f8) ncim_query_popup_pane

0xda4c,	// (0x00063674) ncim_indicator_popup_pane_ParamLimits

0xa0a7,	// (0x0005fccf) ncim_query_content_pane_g1_ParamLimits

0xa0a7,	// (0x0005fccf) ncim_query_content_pane_g1

0xda72,	// (0x0006369a) ncim_query_content_pane_t1_ParamLimits

0xda84,	// (0x000636ac) ncim_query_content_pane_t2_ParamLimits

0xa0b3,	// (0x0005fcdb) ncim_query_content_pane_t3_ParamLimits

0xa0b3,	// (0x0005fcdb) ncim_query_content_pane_t3

0xa0db,	// (0x0005fd03) ncim_query_content_pane_t4_ParamLimits

0xa0db,	// (0x0005fd03) ncim_query_content_pane_t4

0xa103,	// (0x0005fd2b) ncim_query_content_pane_t5_ParamLimits

0xa103,	// (0x0005fd2b) ncim_query_content_pane_t5

0xda96,	// (0x000636be) ncim_query_content_pane_t6_ParamLimits

0xda96,	// (0x000636be) ncim_query_content_pane_t6

0xfc1e,	// (0x00065846) ncim_query_content_pane_t_ParamLimits

0xdabe,	// (0x000636e6) ncim_query_list_pane_ParamLimits

0xdad0,	// (0x000636f8) ncim_query_popup_pane_ParamLimits

0xdae4,	// (0x0006370c) wait_bar_pane_cp04

0xb9b1,	// (0x000615d9) input_focus_pane_cp011

0xdaec,	// (0x00063714) ncim_query_popup_pane_t1

0xdafa,	// (0x00063722) ncim_list_query_list_pane_ParamLimits

0xdafa,	// (0x00063722) ncim_list_query_list_pane

0xb9b1,	// (0x000615d9) bg_button_pane_cp027

0xdb07,	// (0x0006372f) ncim_query_button_pane_g1

0xb9b1,	// (0x000615d9) list_highlight_pane_cp012

0xdb11,	// (0x00063739) ncim_list_query_list_pane_g1

0xdb19,	// (0x00063741) ncim_list_query_list_pane_t1

0xef7f,	// (0x00064ba7) cam4_indicators_pane_g3_ParamLimits

0xef7f,	// (0x00064ba7) cam4_indicators_pane_g3

0x8896,	// (0x0005e4be) vid4_indicators_pane_g5_ParamLimits

0x8896,	// (0x0005e4be) vid4_indicators_pane_g5

0xf08c,	// (0x00064cb4) vid4_progress_pane_g5_ParamLimits

0xf08c,	// (0x00064cb4) vid4_progress_pane_g5

0x9fef,	// (0x0005fc17) main_ncimui_pane_g1

0xa035,	// (0x0005fc5d) ncimui_group_query_pane_ParamLimits

0xa035,	// (0x0005fc5d) ncimui_group_query_pane

0xa069,	// (0x0005fc91) ncimui_list_pane_ParamLimits

0xa069,	// (0x0005fc91) ncimui_list_pane

0xa083,	// (0x0005fcab) ncimui_text_pane_ParamLimits

0xa083,	// (0x0005fcab) ncimui_text_pane

0xa12b,	// (0x0005fd53) ncimui_text_pane_t1_ParamLimits

0xa12b,	// (0x0005fd53) ncimui_text_pane_t1

0xdb27,	// (0x0006374f) ncimui_list_single_graphic_pane_ParamLimits

0xdb27,	// (0x0006374f) ncimui_list_single_graphic_pane

0xa151,	// (0x0005fd79) ncimui_query_pane_ParamLimits

0xa151,	// (0x0005fd79) ncimui_query_pane

0xb9b1,	// (0x000615d9) list_highlight_pane_cp013

0xdb37,	// (0x0006375f) ncim_list_query_list_pane_t1_copy1

0xdb11,	// (0x00063739) ncim_list_single_graphic_pane_g1

0xdb45,	// (0x0006376d) ncim_query_button_pane_cp01

0xdb4d,	// (0x00063775) ncim_query_entry_pane_ParamLimits

0xdb4d,	// (0x00063775) ncim_query_entry_pane

0xdb5d,	// (0x00063785) ncimui_query_pane_g1

0xdb65,	// (0x0006378d) ncimui_query_pane_t1_ParamLimits

0xdb65,	// (0x0006378d) ncimui_query_pane_t1

0xb9b1,	// (0x000615d9) input_focus_pane_cp012

0xdaec,	// (0x00063714) ncim_query_entry_pane_t1

0xc18a,	// (0x00061db2) main_im_pane_ParamLimits

0x1c2e,	// (0x00057856) main_mobtv_pane_ParamLimits

0x1c2e,	// (0x00057856) main_mobtv_pane

0x9e71,	// (0x0005fa99) main_cset6_slider_pane_g18_ParamLimits

0x9e71,	// (0x0005fa99) main_cset6_slider_pane_g18

0x9e7d,	// (0x0005faa5) main_cset6_slider_pane_g19_ParamLimits

0x9e7d,	// (0x0005faa5) main_cset6_slider_pane_g19

0xdb7b,	// (0x000637a3) bg_main_mobtv_pane_ParamLimits

0xdb7b,	// (0x000637a3) bg_main_mobtv_pane

0xa161,	// (0x0005fd89) main_mobtv_info_pane

0xa16a,	// (0x0005fd92) main_mobtv_loading_pane_ParamLimits

0xa16a,	// (0x0005fd92) main_mobtv_loading_pane

0xdb89,	// (0x000637b1) main_mobtv_pg_channel_list_pane

0xdb93,	// (0x000637bb) main_mobtv_pg_hdr_pane

0xa177,	// (0x0005fd9f) main_mobtv_programe_curr_pane_ParamLimits

0xa177,	// (0x0005fd9f) main_mobtv_programe_curr_pane

0xa184,	// (0x0005fdac) main_mobtv_programe_next_pane_ParamLimits

0xa184,	// (0x0005fdac) main_mobtv_programe_next_pane

0xdb9c,	// (0x000637c4) popup_mobtv_noti_window

0x2075,	// (0x00057c9d) main_tv_pg_hdr_pane_g1

0xdba4,	// (0x000637cc) main_tv_pg_hdr_pane_g2

0xdbac,	// (0x000637d4) main_tv_pg_hdr_pane_g3

0xdbb4,	// (0x000637dc) main_tv_pg_hdr_pane_g4

0xdbbc,	// (0x000637e4) main_tv_pg_hdr_pane_g5

0xdbc6,	// (0x000637ee) main_tv_pg_hdr_pane_g6

0xdbd0,	// (0x000637f8) main_tv_pg_hdr_pane_g7

0xdbda,	// (0x00063802) main_tv_pg_hdr_pane_g8

0xdbe4,	// (0x0006380c) main_tv_pg_hdr_pane_g9

0xdbee,	// (0x00063816) main_tv_pg_hdr_pane_g10

0xdbf8,	// (0x00063820) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00065853) main_tv_pg_hdr_pane_g

0xdc02,	// (0x0006382a) main_tv_pg_hdr_pane_t1

0xdc10,	// (0x00063838) main_tv_pg_hdr_pane_t2

0xdc1e,	// (0x00063846) main_tv_pg_hdr_pane_t3

0xdc2e,	// (0x00063856) main_tv_pg_hdr_pane_t4

0xdc3e,	// (0x00063866) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0006586a) main_tv_pg_hdr_pane_t

0xdc4e,	// (0x00063876) single_mobtv_pg_channel_pane_ParamLimits

0xdc4e,	// (0x00063876) single_mobtv_pg_channel_pane

0xdc60,	// (0x00063888) single_mobtv_pg_channel_table_pane

0xdc69,	// (0x00063891) single_mobtv_pg_channel_thumb_pane

0xdc72,	// (0x0006389a) single_tv_pg_channel_pane_g1

0xdc7b,	// (0x000638a3) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x00065875) single_tv_pg_channel_pane_g

0x6ec2,	// (0x0005caea) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x6ec2,	// (0x0005caea) bg_single_mobtv_pg_channel_thumb_pane

0xdc84,	// (0x000638ac) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc84,	// (0x000638ac) single_mobtv_pg_channel_thumb_pane_g1

0xdc92,	// (0x000638ba) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc92,	// (0x000638ba) single_mobtv_pg_channel_thumb_pane_g2

0xdc9e,	// (0x000638c6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc9e,	// (0x000638c6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0006587a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0006587a) single_mobtv_pg_channel_thumb_pane_g

0xdcaa,	// (0x000638d2) single_mobtv_pg_channel_thumb_pane_t1

0xdcb8,	// (0x000638e0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00065881) single_mobtv_pg_channel_thumb_pane_t

0x2075,	// (0x00057c9d) bg_single_mobtv_pg_channel_table_pane_g1

0x2075,	// (0x00057c9d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x00065337) bg_single_mobtv_pg_channel_table_pane_g

0xdcc6,	// (0x000638ee) single_mobtv_pg_channel_table_pane_t1

0xdcd4,	// (0x000638fc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00065886) single_mobtv_pg_channel_table_pane_t

0xa199,	// (0x0005fdc1) main_mobtv_info_pane_g1_ParamLimits

0xa199,	// (0x0005fdc1) main_mobtv_info_pane_g1

0xa1b7,	// (0x0005fddf) main_mobtv_info_pane_t1_ParamLimits

0xa1b7,	// (0x0005fddf) main_mobtv_info_pane_t1

0xa22f,	// (0x0005fe57) main_mobtv_info_pane_t2_ParamLimits

0xa22f,	// (0x0005fe57) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00065890) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00065890) main_mobtv_info_pane_t

0xa2be,	// (0x0005fee6) wait_bar_pane_cp05

0xa2d0,	// (0x0005fef8) main_mobtv_loading_pane_g1_ParamLimits

0xa2d0,	// (0x0005fef8) main_mobtv_loading_pane_g1

0xa2e3,	// (0x0005ff0b) main_mobtv_loading_pane_g2_ParamLimits

0xa2e3,	// (0x0005ff0b) main_mobtv_loading_pane_g2

0xa2ef,	// (0x0005ff17) main_mobtv_loading_pane_g3_ParamLimits

0xa2ef,	// (0x0005ff17) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00065897) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00065897) main_mobtv_loading_pane_g

0xdce2,	// (0x0006390a) main_mobtv_loading_pane_t1_ParamLimits

0xdce2,	// (0x0006390a) main_mobtv_loading_pane_t1

0xdcfa,	// (0x00063922) main_mobtv_loading_pane_t2_ParamLimits

0xdcfa,	// (0x00063922) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0006589e) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0006589e) main_mobtv_loading_pane_t

0xa302,	// (0x0005ff2a) wait_bar_pane_cp06_ParamLimits

0xa302,	// (0x0005ff2a) wait_bar_pane_cp06

0xdd1e,	// (0x00063946) main_mobtv_programe_curr_pane_t1

0xdd2c,	// (0x00063954) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x000658a3) main_mobtv_programe_curr_pane_t

0xdd3a,	// (0x00063962) main_mobtv_programe_next_pane_t1

0xdd48,	// (0x00063970) main_mobtv_programe_next_pane_t2

0xdd56,	// (0x0006397e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x000658a8) main_mobtv_programe_next_pane_t

0xb9b1,	// (0x000615d9) bg_popup_mobtv_noti_window_pane

0xdd64,	// (0x0006398c) popup_mobtv_noti_window_g1

0xdd6c,	// (0x00063994) popup_mobtv_noti_window_t1

0xdd7a,	// (0x000639a2) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x000658af) popup_mobtv_noti_window_t

0x2075,	// (0x00057c9d) bg_popup_mobtv_noti_window_pane_g1

0xb9b1,	// (0x000615d9) sc_clock_pane

0xb9b1,	// (0x000615d9) main_fs_bigclock_pane

0x9a7d,	// (0x0005f6a5) blid2_tripm_pane_t4_ParamLimits

0x9a7d,	// (0x0005f6a5) blid2_tripm_pane_t4

0xa311,	// (0x0005ff39) sc_clock_pane_g1_ParamLimits

0xa311,	// (0x0005ff39) sc_clock_pane_g1

0xa323,	// (0x0005ff4b) sc_clock_pane_t1_ParamLimits

0xa323,	// (0x0005ff4b) sc_clock_pane_t1

0xa345,	// (0x0005ff6d) sc_clock_pane_t2_ParamLimits

0xa345,	// (0x0005ff6d) sc_clock_pane_t2

0xa35d,	// (0x0005ff85) sc_clock_pane_t3_ParamLimits

0xa35d,	// (0x0005ff85) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x000658b4) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x000658b4) sc_clock_pane_t

0xb106,	// (0x00060d2e) main_fs_bigclock_indicator_pane_ParamLimits

0xb106,	// (0x00060d2e) main_fs_bigclock_indicator_pane

0x6e57,	// (0x0005ca7f) main_fs_bigclock_pane_g1_ParamLimits

0x6e57,	// (0x0005ca7f) main_fs_bigclock_pane_g1

0xb112,	// (0x00060d3a) main_fs_bigclock_pane_t1_ParamLimits

0xb112,	// (0x00060d3a) main_fs_bigclock_pane_t1

0xb124,	// (0x00060d4c) main_fs_bigclock_pane_t2_ParamLimits

0xb124,	// (0x00060d4c) main_fs_bigclock_pane_t2

0xb138,	// (0x00060d60) main_fs_bigclock_pane_t3_ParamLimits

0xb138,	// (0x00060d60) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x00065ab3) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x00065ab3) main_fs_bigclock_pane_t

0xe985,	// (0x000645ad) main_fs_bigclock_indicator_pane_g1

0xda66,	// (0x0006368e) ncim_query_content_pane_g2_ParamLimits

0xda66,	// (0x0006368e) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00065841) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00065841) ncim_query_content_pane_g

0xa374,	// (0x0005ff9c) sc_clock_pane_t4_ParamLimits

0xa374,	// (0x0005ff9c) sc_clock_pane_t4

0x1c2e,	// (0x00057856) main_radioblah_pane

0xcdaf,	// (0x000629d7) cell_call4_button_pane_t1_copy1_ParamLimits

0xcdaf,	// (0x000629d7) cell_call4_button_pane_t1_copy1

0x9ff7,	// (0x0005fc1f) main_ncimui_pane_t1_ParamLimits

0x9ff7,	// (0x0005fc1f) main_ncimui_pane_t1

0xa009,	// (0x0005fc31) main_ncimui_pane_t2_ParamLimits

0xa009,	// (0x0005fc31) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0006583a) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0006583a) main_ncimui_pane_t

0xdea8,	// (0x00063ad0) main_radioblah_anim_pane_ParamLimits

0xdea8,	// (0x00063ad0) main_radioblah_anim_pane

0xdeb9,	// (0x00063ae1) main_radioblah_info_pane_ParamLimits

0xdeb9,	// (0x00063ae1) main_radioblah_info_pane

0xdecd,	// (0x00063af5) main_radioblah_pane_t1_ParamLimits

0xdecd,	// (0x00063af5) main_radioblah_pane_t1

0xdee9,	// (0x00063b11) main_radioblah_pane_t2_ParamLimits

0xdee9,	// (0x00063b11) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x000658d5) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x000658d5) main_radioblah_pane_t

0xa41d,	// (0x00060045) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa41d,	// (0x00060045) main_radioblah_rocker_ctrl_pane

0xdf31,	// (0x00063b59) main_radioblah_info_pane_t1_ParamLimits

0xdf31,	// (0x00063b59) main_radioblah_info_pane_t1

0xa475,	// (0x0006009d) main_radioblah_info_pane_t2_ParamLimits

0xa475,	// (0x0006009d) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x000658de) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x000658de) main_radioblah_info_pane_t

0x2075,	// (0x00057c9d) main_radioblah_rocker_ctrl_pane_g1

0xa525,	// (0x0006014d) main_radioblah_rocker_ctrl_pane_g2

0xa52d,	// (0x00060155) main_radioblah_rocker_ctrl_pane_g3

0xa535,	// (0x0006015d) main_radioblah_rocker_ctrl_pane_g4

0xa53d,	// (0x00060165) main_radioblah_rocker_ctrl_pane_g5

0xa545,	// (0x0006016d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x000658e7) main_radioblah_rocker_ctrl_pane_g

0x9fc5,	// (0x0005fbed) main_cset_text2_pane_t1_copy1_ParamLimits

0xef41,	// (0x00064b69) cam4_image_uncrop_qvga_pane

0xefa8,	// (0x00064bd0) vid4_image_uncrop_qcif_pane

0xf0ed,	// (0x00064d15) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0ed,	// (0x00064d15) cam6_image_uncrop_qvga_pane

0xd6a5,	// (0x000632cd) vid6_image_uncrop_qcif_pane_ParamLimits

0xd6a5,	// (0x000632cd) vid6_image_uncrop_qcif_pane

0xb9b1,	// (0x000615d9) bg_popup_preview_window_pane_cp03

0xda18,	// (0x00063640) list_cset_text2_pane

0xda20,	// (0x00063648) main_cset6_text2_pane_g1

0xda28,	// (0x00063650) main_cset6_text2_pane_t1

0xa54d,	// (0x00060175) list_cset_text2_pane_t1_ParamLimits

0xa54d,	// (0x00060175) list_cset_text2_pane_t1

0x1c2e,	// (0x00057856) main_radioblah_pane_ParamLimits

0xa2aa,	// (0x0005fed2) main_mobtv_info_pane_t3_ParamLimits

0xa2aa,	// (0x0005fed2) main_mobtv_info_pane_t3

0xa40b,	// (0x00060033) main_radioblah_pane_g1

0xa445,	// (0x0006006d) main_radioblah_info_pane_g1

0xa4ca,	// (0x000600f2) main_radioblah_info_pane_t3_ParamLimits

0xa4ca,	// (0x000600f2) main_radioblah_info_pane_t3

0x4a98,	// (0x0005a6c0) highlight_cell_cale_month_pane_ParamLimits

0x4a98,	// (0x0005a6c0) highlight_cell_cale_month_pane

0xb9b1,	// (0x000615d9) main_phob_fisheye_pane

0x77af,	// (0x0005d3d7) scroll_pane_cp0031_ParamLimits

0x77af,	// (0x0005d3d7) scroll_pane_cp0031

0xd7b3,	// (0x000633db) wait_bar_pane_cp08_ParamLimits

0x9dcc,	// (0x0005f9f4) cset_list_set_pane_copy1_ParamLimits

0xdf6b,	// (0x00063b93) highlight_cell_cale_month_pane_g1

0xa566,	// (0x0006018e) highlight_cell_cale_month_pane_t1

0xd3e5,	// (0x0006300d) list_gen_pane_cp01

0xcf95,	// (0x00062bbd) scroll_pane_01

0xdf73,	// (0x00063b9b) list_single_double_fisheye_pane

0xa574,	// (0x0006019c) list_double_fisheye_pane_g1_ParamLimits

0xa574,	// (0x0006019c) list_double_fisheye_pane_g1

0xa580,	// (0x000601a8) list_double_fisheye_pane_g2_ParamLimits

0xa580,	// (0x000601a8) list_double_fisheye_pane_g2

0xa594,	// (0x000601bc) list_double_fisheye_pane_g3_ParamLimits

0xa594,	// (0x000601bc) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x000658f4) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x000658f4) list_double_fisheye_pane_g

0xa5bd,	// (0x000601e5) list_double_fisheye_pane_t1_ParamLimits

0xa5bd,	// (0x000601e5) list_double_fisheye_pane_t1

0xa5d8,	// (0x00060200) list_double_fisheye_pane_t2_ParamLimits

0xa5d8,	// (0x00060200) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x000658ff) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x000658ff) list_double_fisheye_pane_t

0xb9b1,	// (0x000615d9) main_call5_pane

0xa39f,	// (0x0005ffc7) sc_swipe_pane_ParamLimits

0xa39f,	// (0x0005ffc7) sc_swipe_pane

0xa60d,	// (0x00060235) call5_image_pane_ParamLimits

0xa60d,	// (0x00060235) call5_image_pane

0xa62a,	// (0x00060252) call5_swipe_1_pane_ParamLimits

0xa62a,	// (0x00060252) call5_swipe_1_pane

0xa63d,	// (0x00060265) call5_swipe_2_pane_ParamLimits

0xa63d,	// (0x00060265) call5_swipe_2_pane

0xa668,	// (0x00060290) popup_call5_audio_first_window_ParamLimits

0xa668,	// (0x00060290) popup_call5_audio_first_window

0x6ec2,	// (0x0005caea) call5_swipe_1_pane_g1_ParamLimits

0x6ec2,	// (0x0005caea) call5_swipe_1_pane_g1

0xdf7c,	// (0x00063ba4) call5_swipe_1_pane_g2_ParamLimits

0xdf7c,	// (0x00063ba4) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00065904) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00065904) call5_swipe_1_pane_g

0xdf88,	// (0x00063bb0) call5_swipe_1_pane_t1_ParamLimits

0xdf88,	// (0x00063bb0) call5_swipe_1_pane_t1

0x6ec2,	// (0x0005caea) call5_swipe_2_pane_g1_ParamLimits

0x6ec2,	// (0x0005caea) call5_swipe_2_pane_g1

0xdf9d,	// (0x00063bc5) call5_swipe_2_pane_g2_ParamLimits

0xdf9d,	// (0x00063bc5) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x00065909) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x00065909) call5_swipe_2_pane_g

0xdfa9,	// (0x00063bd1) call5_swipe_2_pane_t1_ParamLimits

0xdfa9,	// (0x00063bd1) call5_swipe_2_pane_t1

0xdfbe,	// (0x00063be6) sc_swipe_pane_g1_ParamLimits

0xdfbe,	// (0x00063be6) sc_swipe_pane_g1

0xdfcb,	// (0x00063bf3) sc_swipe_pane_g2_ParamLimits

0xdfcb,	// (0x00063bf3) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0006590e) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0006590e) sc_swipe_pane_g

0xdfd7,	// (0x00063bff) sc_swipe_pane_t1_ParamLimits

0xdfd7,	// (0x00063bff) sc_swipe_pane_t1

0xb9b1,	// (0x000615d9) main_cmail_launcher_pane

0xa679,	// (0x000602a1) aid_size_cell_cmail_l_ParamLimits

0xa679,	// (0x000602a1) aid_size_cell_cmail_l

0xa693,	// (0x000602bb) grid_cmail_l_pane_ParamLimits

0xa693,	// (0x000602bb) grid_cmail_l_pane

0xa6ae,	// (0x000602d6) cell_cmail_l_pane_ParamLimits

0xa6ae,	// (0x000602d6) cell_cmail_l_pane

0xa6d4,	// (0x000602fc) cell_cmail_l_pane_g1_ParamLimits

0xa6d4,	// (0x000602fc) cell_cmail_l_pane_g1

0xa6e0,	// (0x00060308) cell_cmail_l_pane_t1_ParamLimits

0xa6e0,	// (0x00060308) cell_cmail_l_pane_t1

0xdfec,	// (0x00063c14) cell_cmail_l_pane_t2_ParamLimits

0xdfec,	// (0x00063c14) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00065913) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00065913) cell_cmail_l_pane_t

0x1c2e,	// (0x00057856) grid_highlight_pane_cp018_ParamLimits

0x1c2e,	// (0x00057856) grid_highlight_pane_cp018

0x30fa,	// (0x00058d22) main2_pane_ParamLimits

0x30fa,	// (0x00058d22) main2_pane

0xc247,	// (0x00061e6f) popup_sp_fs_action_menu_bg_pane_g1

0xc24f,	// (0x00061e77) popup_sp_fs_action_menu_bg_pane_g2

0xc257,	// (0x00061e7f) popup_sp_fs_action_menu_bg_pane_g3

0xc25f,	// (0x00061e87) popup_sp_fs_action_menu_bg_pane_g4

0xc267,	// (0x00061e8f) popup_sp_fs_action_menu_bg_pane_g5

0xc26f,	// (0x00061e97) popup_sp_fs_action_menu_bg_pane_g6

0xc277,	// (0x00061e9f) popup_sp_fs_action_menu_bg_pane_g7

0xc27f,	// (0x00061ea7) popup_sp_fs_action_menu_bg_pane_g8

0xc287,	// (0x00061eaf) popup_sp_fs_action_menu_bg_pane_g9

0xc28f,	// (0x00061eb7) popup_sp_fs_action_menu_bg_pane_g10

0xc28f,	// (0x00061eb7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00064de3) popup_sp_fs_action_menu_bg_pane_g

0x3e92,	// (0x00059aba) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_t3_g3_g1

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t3_g3_g2

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00064e93) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00064e93) list_medium_line_x2_t3_g3_g

0x3eb6,	// (0x00059ade) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3eb6,	// (0x00059ade) list_medium_line_x2_t3_g3_t1

0x3ecb,	// (0x00059af3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3ecb,	// (0x00059af3) list_medium_line_x2_t3_g3_t2

0x3edf,	// (0x00059b07) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3edf,	// (0x00059b07) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00064e9a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00064e9a) list_medium_line_x2_t3_g3_t

0x3e92,	// (0x00059aba) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_t3_g2_g1

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00064ea1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00064ea1) list_medium_line_x2_t3_g2_g

0x3ef4,	// (0x00059b1c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3ef4,	// (0x00059b1c) list_medium_line_x2_t3_g2_t1

0x3f0a,	// (0x00059b32) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3f0a,	// (0x00059b32) list_medium_line_x2_t3_g2_t2

0x3edf,	// (0x00059b07) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3edf,	// (0x00059b07) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00064ea6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00064ea6) list_medium_line_x2_t3_g2_t

0x3e92,	// (0x00059aba) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_t4_g4_g1

0x3f1c,	// (0x00059b44) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3f1c,	// (0x00059b44) list_medium_line_x2_t4_g4_g2

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t4_g4_g3

0x3f28,	// (0x00059b50) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3f28,	// (0x00059b50) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00064ead) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00064ead) list_medium_line_x2_t4_g4_g

0x3f34,	// (0x00059b5c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3f34,	// (0x00059b5c) list_medium_line_x2_t4_g4_t1

0x3f4e,	// (0x00059b76) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3f4e,	// (0x00059b76) list_medium_line_x2_t4_g4_t2

0x3f64,	// (0x00059b8c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3f64,	// (0x00059b8c) list_medium_line_x2_t4_g4_t3

0x3f79,	// (0x00059ba1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3f79,	// (0x00059ba1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00064eb6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00064eb6) list_medium_line_x2_t4_g4_t

0x3e92,	// (0x00059aba) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_t2_g4_g1

0x3f1c,	// (0x00059b44) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3f1c,	// (0x00059b44) list_medium_line_x2_t2_g4_g2

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t2_g4_g3

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00064f1d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00064f1d) list_medium_line_x2_t2_g4_g

0x4ab6,	// (0x0005a6de) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4ab6,	// (0x0005a6de) list_medium_line_x2_t2_g4_t1

0x3edf,	// (0x00059b07) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3edf,	// (0x00059b07) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00064f26) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00064f26) list_medium_line_x2_t2_g4_t

0x3e92,	// (0x00059aba) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_t2_g3_g1

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t2_g3_g2

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00064e93) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00064e93) list_medium_line_x2_t2_g3_g

0x4acb,	// (0x0005a6f3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4acb,	// (0x0005a6f3) list_medium_line_x2_t2_g3_t1

0x3edf,	// (0x00059b07) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3edf,	// (0x00059b07) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00064f2b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00064f2b) list_medium_line_x2_t2_g3_t

0x4bf1,	// (0x0005a819) main_sp_fs_list_pane_ParamLimits

0x4bf1,	// (0x0005a819) main_sp_fs_list_pane

0x4bfd,	// (0x0005a825) sp_fs_scroll_pane_ParamLimits

0x4bfd,	// (0x0005a825) sp_fs_scroll_pane

0x4c09,	// (0x0005a831) list_medium_line_x2_t3_t1

0x4c19,	// (0x0005a841) list_medium_line_x2_t3_t2

0x4c27,	// (0x0005a84f) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00064f76) list_medium_line_x2_t3_t

0x4c35,	// (0x0005a85d) list_medium_line_x3_t4_t1

0x4c45,	// (0x0005a86d) list_medium_line_x3_t4_t2

0x4c53,	// (0x0005a87b) list_medium_line_x3_t4_t3

0x4c27,	// (0x0005a84f) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00064f7d) list_medium_line_x3_t4_t

0x4c61,	// (0x0005a889) list_medium_line_x4_t5_t1

0x4c71,	// (0x0005a899) list_medium_line_x4_t5_t2

0x4c53,	// (0x0005a87b) list_medium_line_x4_t5_t3

0x4c7f,	// (0x0005a8a7) list_medium_line_x4_t5_t4

0x4c27,	// (0x0005a84f) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00064f86) list_medium_line_x4_t5_t

0x3e92,	// (0x00059aba) list_medium_line_t4_g4_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_t4_g4_g1

0x3f28,	// (0x00059b50) list_medium_line_t4_g4_g2_ParamLimits

0x3f28,	// (0x00059b50) list_medium_line_t4_g4_g2

0x4c8d,	// (0x0005a8b5) list_medium_line_t4_g4_g3_ParamLimits

0x4c8d,	// (0x0005a8b5) list_medium_line_t4_g4_g3

0x3eaa,	// (0x00059ad2) list_medium_line_t4_g4_g4_ParamLimits

0x3eaa,	// (0x00059ad2) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00064f91) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00064f91) list_medium_line_t4_g4_g

0x4c99,	// (0x0005a8c1) list_medium_line_t4_g4_t1_ParamLimits

0x4c99,	// (0x0005a8c1) list_medium_line_t4_g4_t1

0x4cae,	// (0x0005a8d6) list_medium_line_t4_g4_t2_ParamLimits

0x4cae,	// (0x0005a8d6) list_medium_line_t4_g4_t2

0x4cc3,	// (0x0005a8eb) list_medium_line_t4_g4_t3_ParamLimits

0x4cc3,	// (0x0005a8eb) list_medium_line_t4_g4_t3

0x3edf,	// (0x00059b07) list_medium_line_t4_g4_t4_ParamLimits

0x3edf,	// (0x00059b07) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00064f9a) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00064f9a) list_medium_line_t4_g4_t

0x4d9b,	// (0x0005a9c3) chi_dic_find_pane_g1

0x5f01,	// (0x0005bb29) main_tport_pane

0xd0b2,	// (0x00062cda) list_medium_line_plain_t1

0xd0c8,	// (0x00062cf0) list_medium_line_t2_g2_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_t2_g2_g1

0xd0d4,	// (0x00062cfc) list_medium_line_t2_g2_g2_ParamLimits

0xd0d4,	// (0x00062cfc) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00065656) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00065656) list_medium_line_t2_g2_g

0x9311,	// (0x0005ef39) list_medium_line_t2_g2_t1_ParamLimits

0x9311,	// (0x0005ef39) list_medium_line_t2_g2_t1

0x932b,	// (0x0005ef53) list_medium_line_t2_g2_t2_ParamLimits

0x932b,	// (0x0005ef53) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0006565b) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0006565b) list_medium_line_t2_g2_t

0xd3ee,	// (0x00063016) aid_sp_fs_list_icon_a_sm

0xd3f6,	// (0x0006301e) aid_sp_fs_list_icon_d

0xd3fe,	// (0x00063026) aid_sp_fs_text_primary

0xd407,	// (0x0006302f) aid_sp_fs_text_secondary

0xd410,	// (0x00063038) list_medium_line

0xd410,	// (0x00063038) list_medium_line_g2

0xd410,	// (0x00063038) list_medium_line_g3

0xd410,	// (0x00063038) list_medium_line_plain

0xd410,	// (0x00063038) list_medium_line_plain_t2

0xd410,	// (0x00063038) list_medium_line_plain_t3

0xd410,	// (0x00063038) list_medium_line_right_icon

0xd410,	// (0x00063038) list_medium_line_right_iconx2

0xd410,	// (0x00063038) list_medium_line_t2

0xd410,	// (0x00063038) list_medium_line_t2_g2

0xd410,	// (0x00063038) list_medium_line_t2_g3

0xd410,	// (0x00063038) list_medium_line_t2_right_icon

0xd410,	// (0x00063038) list_medium_line_t2_right_iconx2

0xd410,	// (0x00063038) list_medium_line_t3

0xd410,	// (0x00063038) list_medium_line_t3_g2

0xd410,	// (0x00063038) list_medium_line_t3_g3

0xd410,	// (0x00063038) list_medium_line_t3_right_iconx2

0xd419,	// (0x00063041) list_medium_line_t4_g4

0xd422,	// (0x0006304a) list_medium_line_x2

0xd422,	// (0x0006304a) list_medium_line_x2_t2_g2

0xd422,	// (0x0006304a) list_medium_line_x2_t2_g3

0xd422,	// (0x0006304a) list_medium_line_x2_t2_g4

0xd422,	// (0x0006304a) list_medium_line_x2_t3

0xd422,	// (0x0006304a) list_medium_line_x2_t3_g2

0xd422,	// (0x0006304a) list_medium_line_x2_t3_g3

0xd422,	// (0x0006304a) list_medium_line_x2_t3_g4

0xd422,	// (0x0006304a) list_medium_line_x2_t4_g2

0xd422,	// (0x0006304a) list_medium_line_x2_t4_g4

0xd42b,	// (0x00063053) list_medium_line_x3

0xd42b,	// (0x00063053) list_medium_line_x3_t4

0xd42b,	// (0x00063053) list_medium_line_x3_t4_g4

0xd419,	// (0x00063041) list_medium_line_x4_t4

0xd419,	// (0x00063041) list_medium_line_x4_t4_g7

0xd419,	// (0x00063041) list_medium_line_x4_t5

0xd434,	// (0x0006305c) list_single_fs_dyc_pane_ParamLimits

0xd434,	// (0x0006305c) list_single_fs_dyc_pane

0x3e92,	// (0x00059aba) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x4_t4_g7_g1

0xd947,	// (0x0006356f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd947,	// (0x0006356f) list_medium_line_x4_t4_g7_g2

0xd953,	// (0x0006357b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd953,	// (0x0006357b) list_medium_line_x4_t4_g7_g3

0xd962,	// (0x0006358a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd962,	// (0x0006358a) list_medium_line_x4_t4_g7_g4

0xd96e,	// (0x00063596) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd96e,	// (0x00063596) list_medium_line_x4_t4_g7_g5

0xd97d,	// (0x000635a5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd97d,	// (0x000635a5) list_medium_line_x4_t4_g7_g6

0xd98c,	// (0x000635b4) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd98c,	// (0x000635b4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00065820) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00065820) list_medium_line_x4_t4_g7_g

0xd998,	// (0x000635c0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd998,	// (0x000635c0) list_medium_line_x4_t4_g7_t1

0xd9ad,	// (0x000635d5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd9ad,	// (0x000635d5) list_medium_line_x4_t4_g7_t2

0xd9c2,	// (0x000635ea) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd9c2,	// (0x000635ea) list_medium_line_x4_t4_g7_t3

0xd9d7,	// (0x000635ff) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd9d7,	// (0x000635ff) list_medium_line_x4_t4_g7_t4

0xd9e9,	// (0x00063611) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd9e9,	// (0x00063611) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0006582f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0006582f) list_medium_line_x4_t4_g7_t

0xd9fb,	// (0x00063623) list_single_dyc_row_pane_ParamLimits

0xd9fb,	// (0x00063623) list_single_dyc_row_pane

0xa5fa,	// (0x00060222) call5_gesture_pane_ParamLimits

0xa5fa,	// (0x00060222) call5_gesture_pane

0xa650,	// (0x00060278) call5_windows_pane_ParamLimits

0xa650,	// (0x00060278) call5_windows_pane

0xa6f6,	// (0x0006031e) call5_swipe_1_pane_cp_ParamLimits

0xa6f6,	// (0x0006031e) call5_swipe_1_pane_cp

0xa702,	// (0x0006032a) call5_swipe_2_pane_cp_ParamLimits

0xa702,	// (0x0006032a) call5_swipe_2_pane_cp

0x0834,	// (0x0005645c) call5_image_pane_cp

0xa70e,	// (0x00060336) popup_call5_audio_first_window_cp_ParamLimits

0xa70e,	// (0x00060336) popup_call5_audio_first_window_cp

0xdfbe,	// (0x00063be6) call5_swipe_1_pane_g1_cp_ParamLimits

0xdfbe,	// (0x00063be6) call5_swipe_1_pane_g1_cp

0xdffe,	// (0x00063c26) call5_swipe_1_pane_g2_cp

0xdfd7,	// (0x00063bff) call5_swipe_1_pane_t1_cp_ParamLimits

0xdfd7,	// (0x00063bff) call5_swipe_1_pane_t1_cp

0xdfbe,	// (0x00063be6) call5_swipe_2_pane_g1_cp_ParamLimits

0xdfbe,	// (0x00063be6) call5_swipe_2_pane_g1_cp

0xe006,	// (0x00063c2e) call5_swipe_2_pane_g2_cp

0xe00e,	// (0x00063c36) call5_swipe_2_pane_t1_cp_ParamLimits

0xe00e,	// (0x00063c36) call5_swipe_2_pane_t1_cp

0x1c2e,	// (0x00057856) main_sp_fs_email_pane

0xe023,	// (0x00063c4b) main_sp_fs_listscroll_pane_te

0xe02c,	// (0x00063c54) popup_sp_fs_action_menu_pane_ParamLimits

0xe02c,	// (0x00063c54) popup_sp_fs_action_menu_pane

0x2075,	// (0x00057c9d) bg_sp_fs_ctrlbar_pane_g1

0xe070,	// (0x00063c98) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe079,	// (0x00063ca1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe082,	// (0x00063caa) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2075,	// (0x00057c9d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x00065918) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1e5a,	// (0x00057a82) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1e5a,	// (0x00057a82) bg_sp_fs_ctrlbar_ddmenu_pane

0xe08b,	// (0x00063cb3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe08b,	// (0x00063cb3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe097,	// (0x00063cbf) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe097,	// (0x00063cbf) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00065921) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00065921) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe0a3,	// (0x00063ccb) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe0a3,	// (0x00063ccb) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe0bd,	// (0x00063ce5) list_medium_line_t2_right_icon_g1

0xa71c,	// (0x00060344) list_medium_line_t2_right_icon_t1

0xa72c,	// (0x00060354) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00065926) list_medium_line_t2_right_icon_t

0x1c20,	// (0x00057848) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1c20,	// (0x00057848) bg_sp_fs_ctrlbar_pane

0xa782,	// (0x000603aa) main_sp_fs_ctrlbar_button_pane_cp01

0xa78a,	// (0x000603b2) main_sp_fs_ctrlbar_ddmenu_pane

0xe0fd,	// (0x00063d25) main_sp_fs_ctrlbar_pane_g1

0xe109,	// (0x00063d31) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0006592b) main_sp_fs_ctrlbar_pane_g

0xe115,	// (0x00063d3d) main_sp_fs_ctrlbar_pane_t1

0xa794,	// (0x000603bc) main_sp_fs_ctrlbar_pane

0xa7b8,	// (0x000603e0) main_sp_fs_listscroll_pane_te_cp01

0xa7d8,	// (0x00060400) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa7d8,	// (0x00060400) popup_sp_fs_action_menu_pane_cp01

0x1c2e,	// (0x00057856) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1c2e,	// (0x00057856) bg_sp_fs_highlight_list_pane_cp01

0xe12a,	// (0x00063d52) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe12a,	// (0x00063d52) sp_fs_action_menu_list_gene_pane_g1

0xe139,	// (0x00063d61) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe139,	// (0x00063d61) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00065930) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00065930) sp_fs_action_menu_list_gene_pane_g

0xe146,	// (0x00063d6e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe146,	// (0x00063d6e) sp_fs_action_menu_list_gene_pane_t1

0xe15e,	// (0x00063d86) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe15e,	// (0x00063d86) sp_fs_action_menu_list_gene_pane

0xe17d,	// (0x00063da5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe17d,	// (0x00063da5) popup_sp_fs_action_menu_bg_pane

0xe18b,	// (0x00063db3) sp_fs_action_menu_list_pane_ParamLimits

0xe18b,	// (0x00063db3) sp_fs_action_menu_list_pane

0xe1ab,	// (0x00063dd3) sp_fs_scroll_pane_cp01_ParamLimits

0xe1ab,	// (0x00063dd3) sp_fs_scroll_pane_cp01

0xa7f2,	// (0x0006041a) list_medium_line_plain_t2_t1

0xa802,	// (0x0006042a) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00065935) list_medium_line_plain_t2_t

0xa812,	// (0x0006043a) list_medium_line_plain_t3_t1

0xa822,	// (0x0006044a) list_medium_line_plain_t3_t2

0xa830,	// (0x00060458) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0006593a) list_medium_line_plain_t3_t

0x3e92,	// (0x00059aba) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_t2_g2_g1

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00064ea1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00064ea1) list_medium_line_x2_t2_g2_g

0x4c99,	// (0x0005a8c1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4c99,	// (0x0005a8c1) list_medium_line_x2_t2_g2_t1

0x3edf,	// (0x00059b07) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3edf,	// (0x00059b07) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00065941) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00065941) list_medium_line_x2_t2_g2_t

0x3e92,	// (0x00059aba) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_t4_g2_g1

0xe1d1,	// (0x00063df9) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe1d1,	// (0x00063df9) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x00065946) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x00065946) list_medium_line_x2_t4_g2_g

0xa83e,	// (0x00060466) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa83e,	// (0x00060466) list_medium_line_x2_t4_g2_t1

0xa855,	// (0x0006047d) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa855,	// (0x0006047d) list_medium_line_x2_t4_g2_t2

0xa86a,	// (0x00060492) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa86a,	// (0x00060492) list_medium_line_x2_t4_g2_t3

0x3edf,	// (0x00059b07) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3edf,	// (0x00059b07) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0006594b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0006594b) list_medium_line_x2_t4_g2_t

0xe1e3,	// (0x00063e0b) list_medium_line_t3_right_iconx2_g1

0xe0bd,	// (0x00063ce5) list_medium_line_t3_right_iconx2_g2

0xa87c,	// (0x000604a4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x00065954) list_medium_line_t3_right_iconx2_g

0xa886,	// (0x000604ae) list_medium_line_t3_right_iconx2_t1

0xa896,	// (0x000604be) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0006595b) list_medium_line_t3_right_iconx2_t

0x3e92,	// (0x00059aba) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x3_t4_g4_g1

0x3e9e,	// (0x00059ac6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3e9e,	// (0x00059ac6) list_medium_line_x3_t4_g4_g2

0x3f28,	// (0x00059b50) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3f28,	// (0x00059b50) list_medium_line_x3_t4_g4_g3

0xe1eb,	// (0x00063e13) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe1eb,	// (0x00063e13) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x00065960) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x00065960) list_medium_line_x3_t4_g4_g

0xa8a4,	// (0x000604cc) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa8a4,	// (0x000604cc) list_medium_line_x3_t4_g4_t1

0xa8bb,	// (0x000604e3) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa8bb,	// (0x000604e3) list_medium_line_x3_t4_g4_t2

0x4cae,	// (0x0005a8d6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4cae,	// (0x0005a8d6) list_medium_line_x3_t4_g4_t3

0xe1f7,	// (0x00063e1f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe1f7,	// (0x00063e1f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x00065969) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x00065969) list_medium_line_x3_t4_g4_t

0xa8d4,	// (0x000604fc) list_single_dyc_row_text_pane_t1_ParamLimits

0xa8d4,	// (0x000604fc) list_single_dyc_row_text_pane_t1

0xa91d,	// (0x00060545) list_single_dyc_row_text_pane_t2_ParamLimits

0xa91d,	// (0x00060545) list_single_dyc_row_text_pane_t2

0xe214,	// (0x00063e3c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe214,	// (0x00063e3c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x00065972) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x00065972) list_single_dyc_row_text_pane_t

0xe226,	// (0x00063e4e) list_single_dyc_row_pane_g1_ParamLimits

0xe226,	// (0x00063e4e) list_single_dyc_row_pane_g1

0xe232,	// (0x00063e5a) list_single_dyc_row_pane_g2_ParamLimits

0xe232,	// (0x00063e5a) list_single_dyc_row_pane_g2

0xe23e,	// (0x00063e66) list_single_dyc_row_pane_g3_ParamLimits

0xe23e,	// (0x00063e66) list_single_dyc_row_pane_g3

0xe24a,	// (0x00063e72) list_single_dyc_row_pane_g4_ParamLimits

0xe24a,	// (0x00063e72) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x00065979) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x00065979) list_single_dyc_row_pane_g

0xe256,	// (0x00063e7e) list_single_dyc_row_text_pane_ParamLimits

0xe256,	// (0x00063e7e) list_single_dyc_row_text_pane

0xb9b1,	// (0x000615d9) bg_sp_fs_scroll_pane

0xe275,	// (0x00063e9d) thumb_sp_fs_scroll_pane

0xd0c8,	// (0x00062cf0) list_medium_line_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_g1

0xe27e,	// (0x00063ea6) list_medium_line_t1_ParamLimits

0xe27e,	// (0x00063ea6) list_medium_line_t1

0x3e92,	// (0x00059aba) list_medium_line_x2_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_g1

0x3e9e,	// (0x00059ac6) list_medium_line_x2_g2_ParamLimits

0x3e9e,	// (0x00059ac6) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x00065982) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x00065982) list_medium_line_x2_g

0xe293,	// (0x00063ebb) list_medium_line_x2_t1_ParamLimits

0xe293,	// (0x00063ebb) list_medium_line_x2_t1

0x3e92,	// (0x00059aba) list_medium_line_x3_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x3_g1

0x3e9e,	// (0x00059ac6) list_medium_line_x3_g2_ParamLimits

0x3e9e,	// (0x00059ac6) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x00065982) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x00065982) list_medium_line_x3_g

0xe293,	// (0x00063ebb) list_medium_line_x3_t1_ParamLimits

0xe293,	// (0x00063ebb) list_medium_line_x3_t1

0xe2a9,	// (0x00063ed1) thumb_sp_fs_scroll_pane_g1

0xe2b2,	// (0x00063eda) thumb_sp_fs_scroll_pane_g2

0xe2bb,	// (0x00063ee3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00065987) thumb_sp_fs_scroll_pane_g

0xe2a9,	// (0x00063ed1) bg_sp_fs_scroll_pane_g1

0xe2b2,	// (0x00063eda) bg_sp_fs_scroll_pane_g2

0xe2bb,	// (0x00063ee3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00065987) bg_sp_fs_scroll_pane_g

0x3e92,	// (0x00059aba) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3e92,	// (0x00059aba) list_medium_line_x2_t3_g4_g1

0x3f1c,	// (0x00059b44) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3f1c,	// (0x00059b44) list_medium_line_x2_t3_g4_g2

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3e9e,	// (0x00059ac6) list_medium_line_x2_t3_g4_g3

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3eaa,	// (0x00059ad2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00064f1d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00064f1d) list_medium_line_x2_t3_g4_g

0xa977,	// (0x0006059f) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa977,	// (0x0006059f) list_medium_line_x2_t3_g4_t1

0xa98d,	// (0x000605b5) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa98d,	// (0x000605b5) list_medium_line_x2_t3_g4_t2

0x3edf,	// (0x00059b07) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3edf,	// (0x00059b07) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0006598e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0006598e) list_medium_line_x2_t3_g4_t

0xd0c8,	// (0x00062cf0) list_medium_line_g2_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_g2_g1

0xd0d4,	// (0x00062cfc) list_medium_line_g2_g2_ParamLimits

0xd0d4,	// (0x00062cfc) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00065656) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00065656) list_medium_line_g2_g

0xe2c4,	// (0x00063eec) list_medium_line_g2_t1_ParamLimits

0xe2c4,	// (0x00063eec) list_medium_line_g2_t1

0xd0c8,	// (0x00062cf0) list_medium_line_t3_g2_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_t3_g2_g1

0xd0d4,	// (0x00062cfc) list_medium_line_t3_g2_g2_ParamLimits

0xd0d4,	// (0x00062cfc) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00065656) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00065656) list_medium_line_t3_g2_g

0xa9a7,	// (0x000605cf) list_medium_line_t3_g2_t1_ParamLimits

0xa9a7,	// (0x000605cf) list_medium_line_t3_g2_t1

0xa9c1,	// (0x000605e9) list_medium_line_t3_g2_t2_ParamLimits

0xa9c1,	// (0x000605e9) list_medium_line_t3_g2_t2

0xa9d6,	// (0x000605fe) list_medium_line_t3_g2_t3_ParamLimits

0xa9d6,	// (0x000605fe) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x00065995) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x00065995) list_medium_line_t3_g2_t

0xe0bd,	// (0x00063ce5) list_medium_line_right_icon_g1

0xe2d9,	// (0x00063f01) list_medium_line_right_icon_t1

0xd0c8,	// (0x00062cf0) list_medium_line_t2_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_t2_g1

0xa9f0,	// (0x00060618) list_medium_line_t2_t1_ParamLimits

0xa9f0,	// (0x00060618) list_medium_line_t2_t1

0xaa0a,	// (0x00060632) list_medium_line_t2_t2_ParamLimits

0xaa0a,	// (0x00060632) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0006599c) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0006599c) list_medium_line_t2_t

0xd0c8,	// (0x00062cf0) list_medium_line_t3_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_t3_g1

0xaa1f,	// (0x00060647) list_medium_line_t3_t1_ParamLimits

0xaa1f,	// (0x00060647) list_medium_line_t3_t1

0xaa36,	// (0x0006065e) list_medium_line_t3_t2_ParamLimits

0xaa36,	// (0x0006065e) list_medium_line_t3_t2

0xaa4b,	// (0x00060673) list_medium_line_t3_t3_ParamLimits

0xaa4b,	// (0x00060673) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x000659a1) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x000659a1) list_medium_line_t3_t

0xd0c8,	// (0x00062cf0) list_medium_line_g3_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_g3_g1

0xe2e7,	// (0x00063f0f) list_medium_line_g3_g2_ParamLimits

0xe2e7,	// (0x00063f0f) list_medium_line_g3_g2

0xd0d4,	// (0x00062cfc) list_medium_line_g3_g3_ParamLimits

0xd0d4,	// (0x00062cfc) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x000659a8) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x000659a8) list_medium_line_g3_g

0xe2f3,	// (0x00063f1b) list_medium_line_g3_t1_ParamLimits

0xe2f3,	// (0x00063f1b) list_medium_line_g3_t1

0xd0c8,	// (0x00062cf0) list_medium_line_t2_g3_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_t2_g3_g1

0xe2e7,	// (0x00063f0f) list_medium_line_t2_g3_g2_ParamLimits

0xe2e7,	// (0x00063f0f) list_medium_line_t2_g3_g2

0xd0d4,	// (0x00062cfc) list_medium_line_t2_g3_g3_ParamLimits

0xd0d4,	// (0x00062cfc) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x000659a8) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x000659a8) list_medium_line_t2_g3_g

0xaa5d,	// (0x00060685) list_medium_line_t2_g3_t1_ParamLimits

0xaa5d,	// (0x00060685) list_medium_line_t2_g3_t1

0xaa77,	// (0x0006069f) list_medium_line_t2_g3_t2_ParamLimits

0xaa77,	// (0x0006069f) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x000659af) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x000659af) list_medium_line_t2_g3_t

0xd0c8,	// (0x00062cf0) list_medium_line_t3_g3_g1_ParamLimits

0xd0c8,	// (0x00062cf0) list_medium_line_t3_g3_g1

0xe2e7,	// (0x00063f0f) list_medium_line_t3_g3_g2_ParamLimits

0xe2e7,	// (0x00063f0f) list_medium_line_t3_g3_g2

0xd0d4,	// (0x00062cfc) list_medium_line_t3_g3_g3_ParamLimits

0xd0d4,	// (0x00062cfc) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x000659a8) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x000659a8) list_medium_line_t3_g3_g

0xaa8c,	// (0x000606b4) list_medium_line_t3_g3_t1_ParamLimits

0xaa8c,	// (0x000606b4) list_medium_line_t3_g3_t1

0xaaa0,	// (0x000606c8) list_medium_line_t3_g3_t2_ParamLimits

0xaaa0,	// (0x000606c8) list_medium_line_t3_g3_t2

0xaab2,	// (0x000606da) list_medium_line_t3_g3_t3_ParamLimits

0xaab2,	// (0x000606da) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x000659b4) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x000659b4) list_medium_line_t3_g3_t

0xe1e3,	// (0x00063e0b) list_medium_line_right_iconx2_g1

0xe0bd,	// (0x00063ce5) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x000659bb) list_medium_line_right_iconx2_g

0xe308,	// (0x00063f30) list_medium_line_right_iconx2_t1

0xe1e3,	// (0x00063e0b) list_medium_line_t2_right_iconx2_g1

0xe0bd,	// (0x00063ce5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x000659bb) list_medium_line_t2_right_iconx2_g

0xaac6,	// (0x000606ee) list_medium_line_t2_right_iconx2_t1

0xaad6,	// (0x000606fe) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x000659c0) list_medium_line_t2_right_iconx2_t

0xe316,	// (0x00063f3e) list_medium_line_x4_t4_t1

0xaae4,	// (0x0006070c) list_medium_line_x4_t4_t2

0xaaf4,	// (0x0006071c) list_medium_line_x4_t4_t3

0xab04,	// (0x0006072c) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x000659c5) list_medium_line_x4_t4_t

0xab57,	// (0x0006077f) tport_appsw_pane_ParamLimits

0xab57,	// (0x0006077f) tport_appsw_pane

0xab68,	// (0x00060790) tport_contact_pane_ParamLimits

0xab68,	// (0x00060790) tport_contact_pane

0xab81,	// (0x000607a9) tport_listscroll_pane_ParamLimits

0xab81,	// (0x000607a9) tport_listscroll_pane

0xab9c,	// (0x000607c4) cell_tport_appsw_pane_ParamLimits

0xab9c,	// (0x000607c4) cell_tport_appsw_pane

0xce3e,	// (0x00062a66) tport_appsw_pane_g1_ParamLimits

0xce3e,	// (0x00062a66) tport_appsw_pane_g1

0xe324,	// (0x00063f4c) tport_contact_pane_g1

0xdaec,	// (0x00063714) tport_contact_pane_t1

0xe32d,	// (0x00063f55) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x000659ce) tport_contact_pane_t

0xe33b,	// (0x00063f63) list_tport_pane

0xe344,	// (0x00063f6c) scroll_pane_cp_030

0xe355,	// (0x00063f7d) cell_tport_appsw_pane_g1

0xe365,	// (0x00063f8d) cell_tport_appsw_pane_t1

0xb9b1,	// (0x000615d9) grid_highlight_pane_cp019

0xabdc,	// (0x00060804) list_tport_double_graphic_pane_ParamLimits

0xabdc,	// (0x00060804) list_tport_double_graphic_pane

0x1c2e,	// (0x00057856) list_highlight_pane_cp023_ParamLimits

0x1c2e,	// (0x00057856) list_highlight_pane_cp023

0xabe9,	// (0x00060811) list_tport_double_graphic_pane_g1_ParamLimits

0xabe9,	// (0x00060811) list_tport_double_graphic_pane_g1

0xabf6,	// (0x0006081e) list_tport_double_graphic_pane_t1_ParamLimits

0xabf6,	// (0x0006081e) list_tport_double_graphic_pane_t1

0xac0b,	// (0x00060833) list_tport_double_graphic_pane_t2_ParamLimits

0xac0b,	// (0x00060833) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x000659da) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x000659da) list_tport_double_graphic_pane_t

0xb9b1,	// (0x000615d9) main_cale_note_pane

0x8ab7,	// (0x0005e6df) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8ab7,	// (0x0005e6df) cell_vitu2_function_top_wide_pane_cp01

0xa2be,	// (0x0005fee6) wait_bar_pane_cp05_ParamLimits

0xb9b1,	// (0x000615d9) listscroll_cmail_pane

0xe37b,	// (0x00063fa3) list_cmail_pane

0xac27,	// (0x0006084f) list_cmail_body_pane

0xe393,	// (0x00063fbb) list_single_cmail_header_caption_pane

0xac3b,	// (0x00060863) list_single_cmail_header_detail_pane_ParamLimits

0xac3b,	// (0x00060863) list_single_cmail_header_detail_pane

0xac65,	// (0x0006088d) list_single_cmail_header_caption_pane_t1

0xac75,	// (0x0006089d) list_single_cmail_header_detail_pane_g1_ParamLimits

0xac75,	// (0x0006089d) list_single_cmail_header_detail_pane_g1

0xe3b5,	// (0x00063fdd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe3b5,	// (0x00063fdd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x000659df) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x000659df) list_single_cmail_header_detail_pane_g

0xe3ce,	// (0x00063ff6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe3ce,	// (0x00063ff6) list_single_cmail_header_detail_pane_t1

0xe404,	// (0x0006402c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe404,	// (0x0006402c) list_single_cmail_header_editor_pane_bg

0xdc7b,	// (0x000638a3) list_cmail_body_pane_g1

0xe416,	// (0x0006403e) list_cmail_body_pane_t1

0xce7b,	// (0x00062aa3) list_single_cmail_header_editor_pane_bg_g1

0xc65c,	// (0x00062284) list_single_cmail_header_editor_pane_bg_g1_copy1

0xce8b,	// (0x00062ab3) list_single_cmail_header_editor_pane_bg_g1_copy2

0xce83,	// (0x00062aab) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd0c0,	// (0x00062ce8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xceab,	// (0x00062ad3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xce9b,	// (0x00062ac3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcea3,	// (0x00062acb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc63c,	// (0x00062264) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xacb3,	// (0x000608db) calenote_gesture_pane_ParamLimits

0xacb3,	// (0x000608db) calenote_gesture_pane

0xacd3,	// (0x000608fb) calenote_window_pane_ParamLimits

0xacd3,	// (0x000608fb) calenote_window_pane

0xe424,	// (0x0006404c) popup_note_window_cp01

0xacef,	// (0x00060917) calenote_swipe_1_pane_ParamLimits

0xacef,	// (0x00060917) calenote_swipe_1_pane

0xa702,	// (0x0006032a) calenote_swipe_2_pane_ParamLimits

0xa702,	// (0x0006032a) calenote_swipe_2_pane

0xdfbe,	// (0x00063be6) calenote_swipe_1_pane_g1_ParamLimits

0xdfbe,	// (0x00063be6) calenote_swipe_1_pane_g1

0xdfcb,	// (0x00063bf3) calenote_swipe_1_pane_g2_ParamLimits

0xdfcb,	// (0x00063bf3) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0006590e) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0006590e) calenote_swipe_1_pane_g

0xe436,	// (0x0006405e) calenote_swipe_1_pane_t1_ParamLimits

0xe436,	// (0x0006405e) calenote_swipe_1_pane_t1

0xdfbe,	// (0x00063be6) calenote_swipe_2_pane_g1_ParamLimits

0xdfbe,	// (0x00063be6) calenote_swipe_2_pane_g1

0xe455,	// (0x0006407d) calenote_swipe_2_pane_g2_ParamLimits

0xe455,	// (0x0006407d) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x000659eb) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x000659eb) calenote_swipe_2_pane_g

0xe461,	// (0x00064089) calenote_swipe_2_pane_t1_ParamLimits

0xe461,	// (0x00064089) calenote_swipe_2_pane_t1

0xb9b1,	// (0x000615d9) main_mup_navstr_pane

0x7566,	// (0x0005d18e) main_mup3_pane_t7_ParamLimits

0x7566,	// (0x0005d18e) main_mup3_pane_t7

0xed6b,	// (0x00064993) main_mp4_pane_g6_ParamLimits

0xed6b,	// (0x00064993) main_mp4_pane_g6

0xef0f,	// (0x00064b37) main_image3_pane_t4_ParamLimits

0xef0f,	// (0x00064b37) main_image3_pane_t4

0xad04,	// (0x0006092c) popup_navstr_preview_pane_ParamLimits

0xad04,	// (0x0006092c) popup_navstr_preview_pane

0xad18,	// (0x00060940) scroll_navstr_pane_ParamLimits

0xad18,	// (0x00060940) scroll_navstr_pane

0xb9b1,	// (0x000615d9) bg_popup_preview_window_pane_cp04

0xe488,	// (0x000640b0) popup_navstr_preview_pane_t1

0xad2c,	// (0x00060954) scroll_navstr_pane_g1_ParamLimits

0xad2c,	// (0x00060954) scroll_navstr_pane_g1

0xad40,	// (0x00060968) scroll_navstr_pane_t1_ParamLimits

0xad40,	// (0x00060968) scroll_navstr_pane_t1

0xe42d,	// (0x00064055) bg_button_pane_cp014

0xe42d,	// (0x00064055) bg_button_pane_cp030

0xa5a0,	// (0x000601c8) list_double_fisheye_pane_g4_ParamLimits

0xa5a0,	// (0x000601c8) list_double_fisheye_pane_g4

0xa5ac,	// (0x000601d4) list_double_fisheye_pane_g5_ParamLimits

0xa5ac,	// (0x000601d4) list_double_fisheye_pane_g5

0xe383,	// (0x00063fab) sp_fs_scroll_pane_cp03

0xe0fd,	// (0x00063d25) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe109,	// (0x00063d31) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0006592b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe115,	// (0x00063d3d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xac1d,	// (0x00060845) sp_fs_scroll_pane_cp02

0xc2fa,	// (0x00061f22) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc2fa,	// (0x00061f22) popup_sp_fs_calendar_preview_list_single_pane

0xb9b1,	// (0x000615d9) main_cam6_pano_pane

0x1c2e,	// (0x00057856) main_mup3_pane_ParamLimits

0xb9b1,	// (0x000615d9) main_phacti_pane

0xa191,	// (0x0005fdb9) bg_button_pane_cp11

0xa1ab,	// (0x0005fdd3) main_mobtv_info_pane_g2_ParamLimits

0xa1ab,	// (0x0005fdd3) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0006588b) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0006588b) main_mobtv_info_pane_g

0xa386,	// (0x0005ffae) sc_clock_pane_t5_ParamLimits

0xa386,	// (0x0005ffae) sc_clock_pane_t5

0xa40b,	// (0x00060033) main_radioblah_pane_g1_ParamLimits

0xdf01,	// (0x00063b29) main_radioblah_pane_t3_ParamLimits

0xdf01,	// (0x00063b29) main_radioblah_pane_t3

0xdf19,	// (0x00063b41) main_radioblah_pane_t4_ParamLimits

0xdf19,	// (0x00063b41) main_radioblah_pane_t4

0xa433,	// (0x0006005b) main_radioblah_text_pane_ParamLimits

0xa433,	// (0x0006005b) main_radioblah_text_pane

0xa445,	// (0x0006006d) main_radioblah_info_pane_g1_ParamLimits

0xa4de,	// (0x00060106) main_radioblah_info_pane_t4_ParamLimits

0xa4de,	// (0x00060106) main_radioblah_info_pane_t4

0x1c2e,	// (0x00057856) main_sp_fs_calendar_pane

0xad57,	// (0x0006097f) main_phacti_pane_g1

0xad5f,	// (0x00060987) phacti_note_pane_ParamLimits

0xad5f,	// (0x00060987) phacti_note_pane

0xe49f,	// (0x000640c7) phacti_term_pane_ParamLimits

0xe49f,	// (0x000640c7) phacti_term_pane

0xe4b4,	// (0x000640dc) phacti_note_pane_t1_ParamLimits

0xe4b4,	// (0x000640dc) phacti_note_pane_t1

0xe4cb,	// (0x000640f3) phacti_term_pane_g1

0xe4d3,	// (0x000640fb) phacti_term_pane_t1_ParamLimits

0xe4d3,	// (0x000640fb) phacti_term_pane_t1

0xe4fd,	// (0x00064125) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc457,	// (0x0006207f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x000659f5) popup_sp_fs_calendar_preview_list_single_pane_g

0xe505,	// (0x0006412d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe505,	// (0x0006412d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe51a,	// (0x00064142) aid_popup_sp_fs_bg_corner_pane

0x2075,	// (0x00057c9d) popup_sp_fs_calendar_preview_bg_pane_g1

0xb9b1,	// (0x000615d9) popup_sp_fs_calendar_preview_bg_pane

0xe522,	// (0x0006414a) popup_sp_fs_calendar_preview_list_pane

0x1c2e,	// (0x00057856) bg_main_sp_fs_cale_pane_ParamLimits

0x1c2e,	// (0x00057856) bg_main_sp_fs_cale_pane

0xe52a,	// (0x00064152) listscroll_cale_mrui_pane_ParamLimits

0xe52a,	// (0x00064152) listscroll_cale_mrui_pane

0xe53e,	// (0x00064166) listscroll_sp_fs_schedule_track_pane

0xe547,	// (0x0006416f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe547,	// (0x0006416f) main_sp_fs_ctrlbar_pane_cp01

0xe558,	// (0x00064180) main_sp_fs_ribbon_pane

0xe560,	// (0x00064188) popup_sp_fs_cale_preview_window

0xadb6,	// (0x000609de) list_single_sp_fs_schedule_track_pane_ParamLimits

0xadb6,	// (0x000609de) list_single_sp_fs_schedule_track_pane

0x1c2e,	// (0x00057856) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1c2e,	// (0x00057856) bg_sp_fs_highlight_list_pane_cp03

0xadc9,	// (0x000609f1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xadc9,	// (0x000609f1) list_single_sp_fs_schedule_track_pane_g1

0xadd5,	// (0x000609fd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xadd5,	// (0x000609fd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x000659fa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x000659fa) list_single_sp_fs_schedule_track_pane_g

0xade1,	// (0x00060a09) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xade1,	// (0x00060a09) list_single_sp_fs_schedule_track_pane_t1

0xadfb,	// (0x00060a23) sp_fs_schedule_track_pane_ParamLimits

0xadfb,	// (0x00060a23) sp_fs_schedule_track_pane

0xe572,	// (0x0006419a) sp_fs_schedule_track_pane_g1

0xe57a,	// (0x000641a2) sp_fs_schedule_track_pane_g2

0xe582,	// (0x000641aa) sp_fs_schedule_track_pane_g3

0xe58a,	// (0x000641b2) sp_fs_schedule_track_pane_g4

0xe592,	// (0x000641ba) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x000659ff) sp_fs_schedule_track_pane_g

0xce7b,	// (0x00062aa3) bg_sp_fs_schedule_viewer_highlight_g1

0xc65c,	// (0x00062284) bg_sp_fs_schedule_viewer_highlight_g2

0xce83,	// (0x00062aab) bg_sp_fs_schedule_viewer_highlight_g3

0xce8b,	// (0x00062ab3) bg_sp_fs_schedule_viewer_highlight_g4

0xd0c0,	// (0x00062ce8) bg_sp_fs_schedule_viewer_highlight_g5

0xce9b,	// (0x00062ac3) bg_sp_fs_schedule_viewer_highlight_g6

0xcea3,	// (0x00062acb) bg_sp_fs_schedule_viewer_highlight_g7

0xceab,	// (0x00062ad3) bg_sp_fs_schedule_viewer_highlight_g8

0xc63c,	// (0x00062264) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x00065a0a) bg_sp_fs_schedule_viewer_highlight_g

0xb9b1,	// (0x000615d9) bg_main_sp_fs_ribbon_pane

0xae0c,	// (0x00060a34) main_sp_fs_ribbon_pane_g1

0xe59a,	// (0x000641c2) main_sp_fs_ribbon_pane_t1

0xae15,	// (0x00060a3d) main_sp_fs_ribbon_pane_t2

0xe5a9,	// (0x000641d1) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x00065a1d) main_sp_fs_ribbon_pane_t

0xe5b8,	// (0x000641e0) main_sp_fs_ribbon_scheduler_pane

0xe5c0,	// (0x000641e8) bg_main_sp_fs_ribbon_pane_g1

0xe5c9,	// (0x000641f1) bg_main_sp_fs_ribbon_pane_g2

0xe5d2,	// (0x000641fa) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x00065a24) bg_main_sp_fs_ribbon_pane_g

0xe5da,	// (0x00064202) main_sp_fs_ribbon_scheduler_pane_g1

0xe5e3,	// (0x0006420b) main_sp_fs_ribbon_scheduler_pane_g2

0xe5ec,	// (0x00064214) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x00065a2b) main_sp_fs_ribbon_scheduler_pane_g

0xe5f5,	// (0x0006421d) list_cale_mrui_pane

0xae24,	// (0x00060a4c) sp_fs_scroll_pane_cp07_ParamLimits

0xae24,	// (0x00060a4c) sp_fs_scroll_pane_cp07

0xae3a,	// (0x00060a62) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xae3a,	// (0x00060a62) bg_sp_fs_schedule_viewer_highlight

0xe5fe,	// (0x00064226) list_single_sp_fs_schedule_track_pane_cp01

0xe606,	// (0x0006422e) list_sp_fs_schedule_track_pane

0xe60e,	// (0x00064236) sp_fs_scroll_pane_cp06_ParamLimits

0xe60e,	// (0x00064236) sp_fs_scroll_pane_cp06

0x2075,	// (0x00057c9d) bgmain_sp_fs_calendar_pane_g1

0xae4a,	// (0x00060a72) list_single_cale_mrui_pane_ParamLimits

0xae4a,	// (0x00060a72) list_single_cale_mrui_pane

0xe620,	// (0x00064248) list_single_cale_mrui_row_pane_ParamLimits

0xe620,	// (0x00064248) list_single_cale_mrui_row_pane

0xe62d,	// (0x00064255) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe62d,	// (0x00064255) list_single_cale_mrui_row_pane_g1

0xe665,	// (0x0006428d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe665,	// (0x0006428d) list_single_cale_mrui_row_pane_t1

0xae6b,	// (0x00060a93) list_single_cale_mrui_row_pane_t2_ParamLimits

0xae6b,	// (0x00060a93) list_single_cale_mrui_row_pane_t2

0xe677,	// (0x0006429f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe677,	// (0x0006429f) list_single_cale_mrui_row_pane_t3

0xe6a6,	// (0x000642ce) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe6a6,	// (0x000642ce) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x00065a37) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x00065a37) list_single_cale_mrui_row_pane_t

0xaed3,	// (0x00060afb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xaed3,	// (0x00060afb) list_single_cmail_header_editor_pane_bg_cp01

0xaef9,	// (0x00060b21) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xaef9,	// (0x00060b21) list_single_cmail_header_editor_pane_bg_cp02

0xaf19,	// (0x00060b41) main_radioblah_text_pane_t1_ParamLimits

0xaf19,	// (0x00060b41) main_radioblah_text_pane_t1

0xe6d5,	// (0x000642fd) cam6_indi_pane_cp01

0xe6dd,	// (0x00064305) cam6_mode_pane_cp01

0xe6e5,	// (0x0006430d) cam6_pano_pane

0xe6ee,	// (0x00064316) cam6_zoom_pane_cp01

0xe6f6,	// (0x0006431e) cam6_pano_image_pane

0xe701,	// (0x00064329) cam6_pano_pane_g1

0xdc7b,	// (0x000638a3) cam6_pano_pane_g2

0xe70a,	// (0x00064332) cam6_pano_pane_g3

0xe713,	// (0x0006433b) cam6_pano_pane_g4

0xc9b4,	// (0x000625dc) cam6_pano_pane_g5

0xe71c,	// (0x00064344) cam6_pano_pane_g6

0xe726,	// (0x0006434e) cam6_pano_pane_g7

0xe72e,	// (0x00064356) cam6_pano_pane_g8

0xe737,	// (0x0006435f) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x00065a40) cam6_pano_pane_g

0xb9b1,	// (0x000615d9) main_browser_tag_pane

0xe480,	// (0x000640a8) grid_navstr_albumart_pane

0xe742,	// (0x0006436a) cell_navstr_albumart_pane_ParamLimits

0xe742,	// (0x0006436a) cell_navstr_albumart_pane

0xe765,	// (0x0006438d) cell_navstr_albumart_pane_g1

0x1a3d,	// (0x00057665) cell_navstr_albumart_pane_g2

0x1a4d,	// (0x00057675) cell_navstr_albumart_pane_g3

0x1a45,	// (0x0005766d) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x00065a53) cell_navstr_albumart_pane_g

0xaf33,	// (0x00060b5b) bt_list_pane_ParamLimits

0xaf33,	// (0x00060b5b) bt_list_pane

0xaf47,	// (0x00060b6f) bt_list_pane_t1

0xaf56,	// (0x00060b7e) bt_list_pane_t2

0x0001,

0xfe34,	// (0x00065a5c) bt_list_pane_t

0xb9b1,	// (0x000615d9) main_cale_prevew_pane

0xaf65,	// (0x00060b8d) popup_cale_preview_window_ParamLimits

0xaf65,	// (0x00060b8d) popup_cale_preview_window

0x1c2e,	// (0x00057856) bg_popup_preview_window_pane_cp05_ParamLimits

0x1c2e,	// (0x00057856) bg_popup_preview_window_pane_cp05

0xe76d,	// (0x00064395) list_cale_preview_pane_ParamLimits

0xe76d,	// (0x00064395) list_cale_preview_pane

0xaf7e,	// (0x00060ba6) list_double_cale_preview_pane_ParamLimits

0xaf7e,	// (0x00060ba6) list_double_cale_preview_pane

0xaf90,	// (0x00060bb8) list_single_cale_preview_pane_ParamLimits

0xaf90,	// (0x00060bb8) list_single_cale_preview_pane

0xafa6,	// (0x00060bce) list_single_cale_preview_pane_g1

0xafae,	// (0x00060bd6) list_single_cale_preview_pane_t1_ParamLimits

0xafae,	// (0x00060bd6) list_single_cale_preview_pane_t1

0xafc3,	// (0x00060beb) list_double_cale_preview_pane_g1

0xafcb,	// (0x00060bf3) list_double_cale_preview_pane_t1_ParamLimits

0xafcb,	// (0x00060bf3) list_double_cale_preview_pane_t1

0xafe0,	// (0x00060c08) list_double_cale_preview_pane_t2_ParamLimits

0xafe0,	// (0x00060c08) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x00065a61) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x00065a61) list_double_cale_preview_pane_t

0xb9b1,	// (0x000615d9) main_ezdial_pane

0x1c2e,	// (0x00057856) main_sp_fs_email_pane_ParamLimits

0xa73a,	// (0x00060362) cmail_ddmenu_btn01_pane_ParamLimits

0xa73a,	// (0x00060362) cmail_ddmenu_btn01_pane

0xa74d,	// (0x00060375) cmail_ddmenu_btn02_pane_ParamLimits

0xa74d,	// (0x00060375) cmail_ddmenu_btn02_pane

0xa770,	// (0x00060398) cmail_ddmenu_btn03_pane_ParamLimits

0xa770,	// (0x00060398) cmail_ddmenu_btn03_pane

0xa794,	// (0x000603bc) main_sp_fs_ctrlbar_pane_ParamLimits

0xa7b8,	// (0x000603e0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xac27,	// (0x0006084f) list_cmail_body_pane_ParamLimits

0xe3ac,	// (0x00063fd4) bg_button_pane_cp12

0xe3c1,	// (0x00063fe9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe3c1,	// (0x00063fe9) list_single_cmail_header_detail_pane_g3

0xac8d,	// (0x000608b5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xac8d,	// (0x000608b5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x000659e6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x000659e6) list_single_cmail_header_detail_pane_t

0xe4e8,	// (0x00064110) phacti_term_pane_t2_ParamLimits

0xe4e8,	// (0x00064110) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x000659f0) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x000659f0) phacti_term_pane_t

0xe779,	// (0x000643a1) aid_size_list_single_double

0xaff8,	// (0x00060c20) popup_ezdial_listscroll_window

0xb014,	// (0x00060c3c) popup_number_entry_window_cp01

0x0834,	// (0x0005645c) bg_popup_call_pane_cp09

0xe785,	// (0x000643ad) ezdial_list_pane

0xe78d,	// (0x000643b5) scroll_pane_cp23

0x1c20,	// (0x00057848) bg_button_pane_cp028_ParamLimits

0x1c20,	// (0x00057848) bg_button_pane_cp028

0xb022,	// (0x00060c4a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb022,	// (0x00060c4a) cmail_ddmenu_btn01_pane_g1

0xb02e,	// (0x00060c56) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb02e,	// (0x00060c56) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x00065a66) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x00065a66) cmail_ddmenu_btn01_pane_g

0xe795,	// (0x000643bd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe795,	// (0x000643bd) cmail_ddmenu_btn01_pane_t1

0x1c20,	// (0x00057848) bg_button_pane_cp029_ParamLimits

0x1c20,	// (0x00057848) bg_button_pane_cp029

0xb03a,	// (0x00060c62) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb03a,	// (0x00060c62) cmail_ddmenu_btn02_pane_g1

0xb052,	// (0x00060c7a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb052,	// (0x00060c7a) cmail_ddmenu_btn02_pane_t1

0x1c2e,	// (0x00057856) bg_button_pane_cp031_ParamLimits

0x1c2e,	// (0x00057856) bg_button_pane_cp031

0xb03a,	// (0x00060c62) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb03a,	// (0x00060c62) cmail_ddmenu_btn03_pane_g1

0xb052,	// (0x00060c7a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb052,	// (0x00060c7a) cmail_ddmenu_btn03_pane_t1

0x82bd,	// (0x0005dee5) cell_dialer2_keypad_pane_t1_ParamLimits

0x82d7,	// (0x0005deff) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x82d7,	// (0x0005deff) cell_dialer2_keypad_pane_t1_copy1

0xa02d,	// (0x0005fc55) ncimui_group_button_pane

0x1c2e,	// (0x00057856) main_sp_fs_calendar_pane_ParamLimits

0xe393,	// (0x00063fbb) list_single_cmail_header_caption_pane_ParamLimits

0xd407,	// (0x0006302f) aid_recal_txt_sm_pane

0xb9b1,	// (0x000615d9) mian_recal_day_pane

0xe560,	// (0x00064188) popup_sp_fs_cale_preview_window_ParamLimits

0xb9b1,	// (0x000615d9) list_recal_day_pane

0xe7c3,	// (0x000643eb) list_single_recal_day_pane_ParamLimits

0xe7c3,	// (0x000643eb) list_single_recal_day_pane

0xe7d5,	// (0x000643fd) list_single_recal_day_pane_g1_ParamLimits

0xe7d5,	// (0x000643fd) list_single_recal_day_pane_g1

0xe7e1,	// (0x00064409) list_single_recal_day_pane_g2_ParamLimits

0xe7e1,	// (0x00064409) list_single_recal_day_pane_g2

0xe7f0,	// (0x00064418) list_single_recal_day_pane_g3_ParamLimits

0xe7f0,	// (0x00064418) list_single_recal_day_pane_g3

0xb076,	// (0x00060c9e) list_single_recal_day_pane_g4_ParamLimits

0xb076,	// (0x00060c9e) list_single_recal_day_pane_g4

0xe7fc,	// (0x00064424) list_single_recal_day_pane_g5_ParamLimits

0xe7fc,	// (0x00064424) list_single_recal_day_pane_g5

0xe80b,	// (0x00064433) list_single_recal_day_pane_g6_ParamLimits

0xe80b,	// (0x00064433) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x00065a75) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x00065a75) list_single_recal_day_pane_g

0xe817,	// (0x0006443f) list_single_recal_day_pane_t1

0xe825,	// (0x0006444d) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x00065a82) list_single_recal_day_pane_t

0xb089,	// (0x00060cb1) ncimui_query_button_pane_ParamLimits

0xb089,	// (0x00060cb1) ncimui_query_button_pane

0xb099,	// (0x00060cc1) ncimui_query_button_pane_t1_ParamLimits

0xb099,	// (0x00060cc1) ncimui_query_button_pane_t1

0xe833,	// (0x0006445b) ncimui_query_button_pane_t2_ParamLimits

0xe833,	// (0x0006445b) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x00065a87) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x00065a87) ncimui_query_button_pane_t

0xb0ac,	// (0x00060cd4) query_button_pane_ParamLimits

0xb0ac,	// (0x00060cd4) query_button_pane

0xb9b1,	// (0x000615d9) bg_button_pane_cp0028

0xe846,	// (0x0006446e) query_button_pane_t1

0x5f01,	// (0x0005bb29) main_tport_pane_ParamLimits

0xab14,	// (0x0006073c) bg_popup_window_pane_cp01_ParamLimits

0xab14,	// (0x0006073c) bg_popup_window_pane_cp01

0xab2e,	// (0x00060756) heading_pane_cp08_ParamLimits

0xab2e,	// (0x00060756) heading_pane_cp08

0xab42,	// (0x0006076a) heading_pane_cp07_ParamLimits

0xab42,	// (0x0006076a) heading_pane_cp07

0xe355,	// (0x00063f7d) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x000659d3) cell_tport_appsw_pane_g

0x54aa,	// (0x0005b0d2) input_candi_list_open_g1

0x02f0,	// (0x00055f18) list_cale_time_pane_g6_ParamLimits

0x02f0,	// (0x00055f18) list_cale_time_pane_g6

0x6f5b,	// (0x0005cb83) aid_size_touch_calib_1_ParamLimits

0x6f5b,	// (0x0005cb83) aid_size_touch_calib_1

0x6f67,	// (0x0005cb8f) aid_size_touch_calib_2_ParamLimits

0x6f67,	// (0x0005cb8f) aid_size_touch_calib_2

0x6f7d,	// (0x0005cba5) aid_size_touch_calib_3_ParamLimits

0x6f7d,	// (0x0005cba5) aid_size_touch_calib_3

0x6f9b,	// (0x0005cbc3) aid_size_touch_calib_4_ParamLimits

0x6f9b,	// (0x0005cbc3) aid_size_touch_calib_4

0x6fb1,	// (0x0005cbd9) main_touch_calib_button_group_pane_ParamLimits

0x6fb1,	// (0x0005cbd9) main_touch_calib_button_group_pane

0x6fc8,	// (0x0005cbf0) main_touch_calib_pane_g1_ParamLimits

0x6fd4,	// (0x0005cbfc) main_touch_calib_pane_g2_ParamLimits

0x6fe0,	// (0x0005cc08) main_touch_calib_pane_g3_ParamLimits

0x6fec,	// (0x0005cc14) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x000653ac) main_touch_calib_pane_g_ParamLimits

0x6ff8,	// (0x0005cc20) main_touch_calib_pane_t1_ParamLimits

0x7012,	// (0x0005cc3a) main_touch_calib_pane_t2_ParamLimits

0x702c,	// (0x0005cc54) main_touch_calib_pane_t3_ParamLimits

0x7040,	// (0x0005cc68) main_touch_calib_pane_t4_ParamLimits

0x7054,	// (0x0005cc7c) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x000653b5) main_touch_calib_pane_t_ParamLimits

0x77e8,	// (0x0005d410) list_single_fp_cale_pane_g3_ParamLimits

0x77e8,	// (0x0005d410) list_single_fp_cale_pane_g3

0xefc8,	// (0x00064bf0) bg_button_pane_cp012_ParamLimits

0xefc8,	// (0x00064bf0) bg_vkb2_func_pane_cp03_ParamLimits

0x92c7,	// (0x0005eeef) cell_vitu2_function_top_pane_g1_ParamLimits

0xefc8,	// (0x00064bf0) bg_vkb2_func_pane_cp04_ParamLimits

0x9fe1,	// (0x0005fc09) main_ncimui_button_group_pane_ParamLimits

0x9fe1,	// (0x0005fc09) main_ncimui_button_group_pane

0xa01b,	// (0x0005fc43) main_ncimui_pane_t3_ParamLimits

0xa01b,	// (0x0005fc43) main_ncimui_pane_t3

0xe496,	// (0x000640be) phacti_button_group_pane

0xe779,	// (0x000643a1) aid_size_list_single_double_ParamLimits

0xaff8,	// (0x00060c20) popup_ezdial_listscroll_window_ParamLimits

0xb014,	// (0x00060c3c) popup_number_entry_window_cp01_ParamLimits

0xb0bf,	// (0x00060ce7) phacti_button_pane_ParamLimits

0xb0bf,	// (0x00060ce7) phacti_button_pane

0xb9b1,	// (0x000615d9) bg_button_pane_cp14

0xe854,	// (0x0006447c) phacti_button_pane_t1

0xb0d0,	// (0x00060cf8) main_touch_calib_button_pane_ParamLimits

0xb0d0,	// (0x00060cf8) main_touch_calib_button_pane

0xc18a,	// (0x00061db2) bg_button_pane_cp18_ParamLimits

0xc18a,	// (0x00061db2) bg_button_pane_cp18

0xe862,	// (0x0006448a) main_touch_calib_button_pane_t1_ParamLimits

0xe862,	// (0x0006448a) main_touch_calib_button_pane_t1

0xe878,	// (0x000644a0) main_touch_calib_button_pane_t2_ParamLimits

0xe878,	// (0x000644a0) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x00065a8c) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x00065a8c) main_touch_calib_button_pane_t

0xb9b1,	// (0x000615d9) cell_ncimui_button_pane

0xb9b1,	// (0x000615d9) bg_button_pane_cp032

0xe896,	// (0x000644be) cell_ncimui_button_pane_t1

0xeeef,	// (0x00064b17) image3_infobar_pane_ParamLimits

0xeeef,	// (0x00064b17) image3_infobar_pane

0xa3b2,	// (0x0005ffda) fs_bigclock_status_pane_ParamLimits

0xa3b2,	// (0x0005ffda) fs_bigclock_status_pane

0xa3bf,	// (0x0005ffe7) main_fs_bigclock_clock_pane_ParamLimits

0xa3bf,	// (0x0005ffe7) main_fs_bigclock_clock_pane

0xa3d2,	// (0x0005fffa) main_fs_bigclock_indi_pane_ParamLimits

0xa3d2,	// (0x0005fffa) main_fs_bigclock_indi_pane

0xa3ea,	// (0x00060012) main_fs_bigclock_swipe_pane_ParamLimits

0xa3ea,	// (0x00060012) main_fs_bigclock_swipe_pane

0xb9b1,	// (0x000615d9) main_fs_clock_dumped_data

0xdd88,	// (0x000639b0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd88,	// (0x000639b0) list_single_fs_bigclock_indicator_pane_g1

0xdda4,	// (0x000639cc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdda4,	// (0x000639cc) list_single_fs_bigclock_indicator_pane_g2

0xddbe,	// (0x000639e6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xddbe,	// (0x000639e6) list_single_fs_bigclock_indicator_pane_g3

0xddd8,	// (0x00063a00) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xddd8,	// (0x00063a00) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x000658bf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x000658bf) list_single_fs_bigclock_indicator_pane_g

0xddfe,	// (0x00063a26) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xddfe,	// (0x00063a26) list_single_fs_bigclock_indicator_pane_t1

0xde26,	// (0x00063a4e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde26,	// (0x00063a4e) list_single_fs_bigclock_indicator_pane_t2

0xde4e,	// (0x00063a76) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde4e,	// (0x00063a76) list_single_fs_bigclock_indicator_pane_t3

0xde76,	// (0x00063a9e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde76,	// (0x00063a9e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x000658ca) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x000658ca) list_single_fs_bigclock_indicator_pane_t

0xe8a4,	// (0x000644cc) image3_infobar_fav_pane_ParamLimits

0xe8a4,	// (0x000644cc) image3_infobar_fav_pane

0xe8b4,	// (0x000644dc) image3_infobar_loc_pane_ParamLimits

0xe8b4,	// (0x000644dc) image3_infobar_loc_pane

0xe8c8,	// (0x000644f0) image3_infobar_time_pane_ParamLimits

0xe8c8,	// (0x000644f0) image3_infobar_time_pane

0x2075,	// (0x00057c9d) image3_infobar_time_pane_g1

0xe8d8,	// (0x00064500) image3_infobar_time_pane_t1

0x2075,	// (0x00057c9d) image3_infobar_loc_pane_g1

0xe8e6,	// (0x0006450e) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x00065a91) image3_infobar_loc_pane_g

0xe8ee,	// (0x00064516) image3_infobar_loc_pane_t1

0x2075,	// (0x00057c9d) image3_infobar_fav_pane_g1

0xe8fc,	// (0x00064524) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x00065a96) image3_infobar_fav_pane_g

0xe904,	// (0x0006452c) fs_bigclock_status_battery_pane

0xe90d,	// (0x00064535) fs_bigclock_status_signal_pane

0xe916,	// (0x0006453e) fs_bigclock_status_title_pane

0xe91f,	// (0x00064547) fs_bigclock_status_signal_pane_g1

0xe928,	// (0x00064550) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x00065a9b) fs_bigclock_status_signal_pane_g

0xe930,	// (0x00064558) fs_bigclock_status_battery_pane_g1

0xe939,	// (0x00064561) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x00065aa0) fs_bigclock_status_battery_pane_g

0xe941,	// (0x00064569) fs_bigclock_status_title_pane_t1

0x2075,	// (0x00057c9d) main_fs_bigclock_clock_pane_g1

0xe94f,	// (0x00064577) main_fs_bigclock_clock_pane_g2

0xe94f,	// (0x00064577) main_fs_bigclock_clock_pane_g3

0xe94f,	// (0x00064577) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x00065aa5) main_fs_bigclock_clock_pane_g

0xe957,	// (0x0006457f) main_fs_bigclock_clock_pane_t1

0xe965,	// (0x0006458d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x00065aae) main_fs_bigclock_clock_pane_t

0xe974,	// (0x0006459c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe974,	// (0x0006459c) list_single_fs_bigclock_indicator_pane

0xb0e5,	// (0x00060d0d) list_single_fs_bigclock_pane_ParamLimits

0xb0e5,	// (0x00060d0d) list_single_fs_bigclock_pane

0xe98e,	// (0x000645b6) main_fs_bigclock_indicator_pane_t1

0xe99d,	// (0x000645c5) list_single_fs_bigclock_pane_g1

0xe9a5,	// (0x000645cd) list_single_fs_bigclock_pane_t1

0x2075,	// (0x00057c9d) main_fs_bigclock_swipe_pane_g1

0xe9e3,	// (0x0006460b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x00065abf) main_fs_bigclock_swipe_pane_g

0xe9eb,	// (0x00064613) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe9eb,	// (0x00064613) main_fs_bigclock_swipe_pane_t1

0x4cd8,	// (0x0005a900) call_type_pane_ParamLimits

0xb9b1,	// (0x000615d9) main_btmg_pane

0xe659,	// (0x00064281) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe659,	// (0x00064281) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x00065a32) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x00065a32) list_single_cale_mrui_row_pane_g

0xe7b3,	// (0x000643db) list_recal_vselct_arw_lo_pane

0xe7bb,	// (0x000643e3) list_recal_vselct_arw_up_pane

0xd3fe,	// (0x00063026) list_recal_vselct_pane

0xea08,	// (0x00064630) btmg_button_pane

0xb14a,	// (0x00060d72) main_btmg_pane_g1

0xb9b1,	// (0x000615d9) bg_button_pane_cp044

0xea12,	// (0x0006463a) btmg_button_pane_t1

0x1c18,	// (0x00057840) aid_listscroll_gen

0x1c2e,	// (0x00057856) main_cntbar_detail_pane

0xe373,	// (0x00063f9b) list_cmail_folder_pane

0xe383,	// (0x00063fab) sp_fs_scroll_pane_cp03_ParamLimits

0xb154,	// (0x00060d7c) list_single_fs_dyc_pane_cp01_ParamLimits

0xb154,	// (0x00060d7c) list_single_fs_dyc_pane_cp01

0xea20,	// (0x00064648) aid_size_cmail_indent

0xea29,	// (0x00064651) list_single_dyc_row_pane_cp01

0xb19a,	// (0x00060dc2) cntbar_detail_list_pane_ParamLimits

0xb19a,	// (0x00060dc2) cntbar_detail_list_pane

0xb1e6,	// (0x00060e0e) main_cntbar_detail_cont_pane_ParamLimits

0xb1e6,	// (0x00060e0e) main_cntbar_detail_cont_pane

0x4bfd,	// (0x0005a825) scroll_pane_cp032_ParamLimits

0x4bfd,	// (0x0005a825) scroll_pane_cp032

0xb1fa,	// (0x00060e22) cntbar_detail_list_event_pane_ParamLimits

0xb1fa,	// (0x00060e22) cntbar_detail_list_event_pane

0xb1aa,	// (0x00060dd2) cntbar_detail_list_shct_pane

0xc6aa,	// (0x000622d2) aid_list_gen

0xea32,	// (0x0006465a) aid_scroll

0xea3b,	// (0x00064663) aid_size_touch_scroll_bar

0xb20a,	// (0x00060e32) aid_list_double

0xea44,	// (0x0006466c) aid_list_single

0xb213,	// (0x00060e3b) aid_list_single_lg

0xea4d,	// (0x00064675) aid_list_z_g_a_sm

0xea55,	// (0x0006467d) aid_list_z_g_d

0xea5d,	// (0x00064685) aid_txt_z_prm

0xb21c,	// (0x00060e44) aid_txt_z_prm_cp01

0xb22a,	// (0x00060e52) aid_txt_z_sec

0xb238,	// (0x00060e60) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb238,	// (0x00060e60) main_cntbar_detail_cont_pane_g1

0xb24c,	// (0x00060e74) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb24c,	// (0x00060e74) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x00065ac4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x00065ac4) main_cntbar_detail_cont_pane_g

0xea6b,	// (0x00064693) main_cntbar_detail_cont_pane_t1

0xea79,	// (0x000646a1) main_cntbar_detail_cont_pane_t2

0xea87,	// (0x000646af) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x00065ac9) main_cntbar_detail_cont_pane_t

0xb25c,	// (0x00060e84) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb25c,	// (0x00060e84) cell_cntbar_detail_list_shct_pane

0xea95,	// (0x000646bd) cntbar_detail_list_shct_pane_g1

0xea9e,	// (0x000646c6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00065ad0) cntbar_detail_list_shct_pane_g

0xb270,	// (0x00060e98) cntbar_detail_list_event_pane_g1_ParamLimits

0xb270,	// (0x00060e98) cntbar_detail_list_event_pane_g1

0xb27c,	// (0x00060ea4) cntbar_detail_list_event_pane_g2_ParamLimits

0xb27c,	// (0x00060ea4) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x00065ad5) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x00065ad5) cntbar_detail_list_event_pane_g

0xb2e8,	// (0x00060f10) cntbar_detail_list_event_pane_t1_ParamLimits

0xb2e8,	// (0x00060f10) cntbar_detail_list_event_pane_t1

0xb2fd,	// (0x00060f25) cntbar_detail_list_event_pane_t2_ParamLimits

0xb2fd,	// (0x00060f25) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00065ae2) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00065ae2) cntbar_detail_list_event_pane_t

0x2075,	// (0x00057c9d) cell_cntbar_detail_list_shct_pane_g1

0x503a,	// (0x0005ac62) navi_pane_mv_g3

0x1c2e,	// (0x00057856) main_cntbar_detail_pane_ParamLimits

0xb9b1,	// (0x000615d9) main_notif_wgt_pane

0xed05,	// (0x0006492d) aid_tch_main_mp4_pane_g4

0xeee7,	// (0x00064b0f) popup_slider_window_cp02

0xe7aa,	// (0x000643d2) list_recal_day_event_pane

0xb16e,	// (0x00060d96) cntbar_detail_btn_pane_ParamLimits

0xb16e,	// (0x00060d96) cntbar_detail_btn_pane

0xb184,	// (0x00060dac) cntbar_detail_btn_pane_cp01_ParamLimits

0xb184,	// (0x00060dac) cntbar_detail_btn_pane_cp01

0xb1aa,	// (0x00060dd2) cntbar_detail_list_shct_pane_ParamLimits

0xb1ba,	// (0x00060de2) cntbar_detail_pane_g1_ParamLimits

0xb1ba,	// (0x00060de2) cntbar_detail_pane_g1

0xb1ca,	// (0x00060df2) cntbar_detail_pane_t1_ParamLimits

0xb1ca,	// (0x00060df2) cntbar_detail_pane_t1

0xb288,	// (0x00060eb0) cntbar_detail_list_event_pane_g3_ParamLimits

0xb288,	// (0x00060eb0) cntbar_detail_list_event_pane_g3

0xb2a0,	// (0x00060ec8) cntbar_detail_list_event_pane_g4_ParamLimits

0xb2a0,	// (0x00060ec8) cntbar_detail_list_event_pane_g4

0xb2b8,	// (0x00060ee0) cntbar_detail_list_event_pane_g5_ParamLimits

0xb2b8,	// (0x00060ee0) cntbar_detail_list_event_pane_g5

0xb2d0,	// (0x00060ef8) cntbar_detail_list_event_pane_g6_ParamLimits

0xb2d0,	// (0x00060ef8) cntbar_detail_list_event_pane_g6

0xb312,	// (0x00060f3a) cntbar_detail_list_event_pane_t3_ParamLimits

0xb312,	// (0x00060f3a) cntbar_detail_list_event_pane_t3

0xb324,	// (0x00060f4c) popup_notif_wgt_window_ParamLimits

0xb324,	// (0x00060f4c) popup_notif_wgt_window

0xb33d,	// (0x00060f65) popup_submenu_window_cp01_ParamLimits

0xb33d,	// (0x00060f65) popup_submenu_window_cp01

0x0834,	// (0x0005645c) bg_popup_window_pane_cp10

0xeaa7,	// (0x000646cf) listscroll_notif_wgt_pane

0xeab1,	// (0x000646d9) list_notif_wgt_window

0xeaba,	// (0x000646e2) scroll_pane_cp033

0xeac3,	// (0x000646eb) list_notif_wgt_row_pane_ParamLimits

0xeac3,	// (0x000646eb) list_notif_wgt_row_pane

0xead5,	// (0x000646fd) aid_size_list_notif_wgt_del

0xeade,	// (0x00064706) list_notif_wgt_row_pane_g1

0xeae6,	// (0x0006470e) list_notif_wgt_row_pane_g2

0xeaee,	// (0x00064716) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x00065ae9) list_notif_wgt_row_pane_g

0xeaf7,	// (0x0006471f) list_notif_wgt_row_pane_t1

0xeb05,	// (0x0006472d) list_notif_wgt_row_pane_t2

0xeb13,	// (0x0006473b) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00065af0) list_notif_wgt_row_pane_t

0xd0f2,	// (0x00062d1a) list_recal_day_event_pane_g1

0xeb21,	// (0x00064749) list_recal_day_event_pane_t1

0xb9b1,	// (0x000615d9) bg_button_pane_cp045

0xeb30,	// (0x00064758) cntbar_detail_btn_pane_t1

0x1c20,	// (0x00057848) main_callh_pane_ParamLimits

0x1c20,	// (0x00057848) main_callh_pane

0xb9b1,	// (0x000615d9) main_coverflow0_pane

0xb9b1,	// (0x000615d9) main_wgtman_pane

0xa3f8,	// (0x00060020) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa3f8,	// (0x00060020) main_fs_bigclock_unlock_btn_pane

0xe34d,	// (0x00063f75) bg_button_pane_cp16

0xe35d,	// (0x00063f85) cell_tport_appsw_pane_g3

0xb34f,	// (0x00060f77) cf0_flow_pane_ParamLimits

0xb34f,	// (0x00060f77) cf0_flow_pane

0xeb3e,	// (0x00064766) listscroll_cf0_pane

0xeb47,	// (0x0006476f) main_cf0_pane_g1

0xb364,	// (0x00060f8c) main_cf0_pane_t1_ParamLimits

0xb364,	// (0x00060f8c) main_cf0_pane_t1

0xb37c,	// (0x00060fa4) main_cf0_pane_t2_ParamLimits

0xb37c,	// (0x00060fa4) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00065af7) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00065af7) main_cf0_pane_t

0xeb51,	// (0x00064779) scroll_pane_cp11

0xb394,	// (0x00060fbc) cf0_flow_pane_g1

0xb39c,	// (0x00060fc4) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00065afc) cf0_flow_pane_g

0xb3a4,	// (0x00060fcc) cf0_flow_pane_t1

0xb9b1,	// (0x000615d9) main_call6_pane

0xb9b1,	// (0x000615d9) main_calllock_pane

0xb3b2,	// (0x00060fda) call6_btn_grp_pane_ParamLimits

0xb3b2,	// (0x00060fda) call6_btn_grp_pane

0xb3cc,	// (0x00060ff4) call6_pane_g1_ParamLimits

0xb3cc,	// (0x00060ff4) call6_pane_g1

0xb3e1,	// (0x00061009) popup_call6_1st_window_ParamLimits

0xb3e1,	// (0x00061009) popup_call6_1st_window

0xb3f2,	// (0x0006101a) popup_call6_2nd_window_ParamLimits

0xb3f2,	// (0x0006101a) popup_call6_2nd_window

0xb403,	// (0x0006102b) cell_call6_btn_pane_ParamLimits

0xb403,	// (0x0006102b) cell_call6_btn_pane

0x0834,	// (0x0005645c) bg_popup_call2_in_pane_cp03

0xeb5c,	// (0x00064784) popup_call6_1st_window_g1

0xeb64,	// (0x0006478c) popup_call6_1st_window_g2

0xeb6c,	// (0x00064794) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00065b01) popup_call6_1st_window_g

0xeb74,	// (0x0006479c) popup_call6_1st_window_t1

0xeb83,	// (0x000647ab) popup_call6_1st_window_t2

0xeb93,	// (0x000647bb) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00065b08) popup_call6_1st_window_t

0x0834,	// (0x0005645c) bg_popup_call2_in_pane_cp04

0xeb5c,	// (0x00064784) popup_call6_2nd_window_g1

0xeb64,	// (0x0006478c) popup_call6_2nd_window_g2

0xeb6c,	// (0x00064794) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00065b01) popup_call6_2nd_window_g

0xeb74,	// (0x0006479c) popup_call6_2nd_window_t1

0xb9b1,	// (0x000615d9) bg_button_pane_cp15

0xeba3,	// (0x000647cb) cell_call6_btn_pane_g1

0xebac,	// (0x000647d4) cell_call6_btn_pane_t1

0xb417,	// (0x0006103f) listscroll_wgtman_pane_ParamLimits

0xb417,	// (0x0006103f) listscroll_wgtman_pane

0xb43a,	// (0x00061062) wgtman_btn_pane_ParamLimits

0xb43a,	// (0x00061062) wgtman_btn_pane

0x06eb,	// (0x00056313) aid_scroll_copy1

0xebbb,	// (0x000647e3) list_wgtman_pane

0xb47d,	// (0x000610a5) wgtman_btn_pane_g1_ParamLimits

0xb47d,	// (0x000610a5) wgtman_btn_pane_g1

0xb4a9,	// (0x000610d1) wgtman_btn_pane_t1_ParamLimits

0xb4a9,	// (0x000610d1) wgtman_btn_pane_t1

0xebc5,	// (0x000647ed) wgtman_btn_pane_t2_ParamLimits

0xebc5,	// (0x000647ed) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00065b0f) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00065b0f) wgtman_btn_pane_t

0xb4e6,	// (0x0006110e) listrow_wgtman_pane_ParamLimits

0xb4e6,	// (0x0006110e) listrow_wgtman_pane

0xb4f8,	// (0x00061120) listrow_wgtman_pane_g1

0xb501,	// (0x00061129) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00065b14) listrow_wgtman_pane_g

0xb50b,	// (0x00061133) listrow_wgtman_pane_t1

0xb519,	// (0x00061141) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00065b19) listrow_wgtman_pane_t

0xb527,	// (0x0006114f) wait_bar_pane_cp09

0xebdc,	// (0x00064804) main_calllock_btn_pane

0xebe6,	// (0x0006480e) main_calllock_pane_g1

0xb9b1,	// (0x000615d9) bg_button_pane_cp17

0xebf2,	// (0x0006481a) main_calllock_btn_pane_g1

0xebfb,	// (0x00064823) main_calllock_btn_pane_t1

0xb9b1,	// (0x000615d9) main_dialer3_pane

0xb9b1,	// (0x000615d9) main_fmrd2_pane

0x2075,	// (0x00057c9d) main_fs_bigclock_unlock_btn_pane_g1

0xec12,	// (0x0006483a) main_fs_bigclock_unlock_btn_pane_t1

0xb52f,	// (0x00061157) area_fmrd2_info_pane_ParamLimits

0xb52f,	// (0x00061157) area_fmrd2_info_pane

0xb540,	// (0x00061168) area_fmrd2_visual_pane_ParamLimits

0xb540,	// (0x00061168) area_fmrd2_visual_pane

0xb54e,	// (0x00061176) fmrd2_indi_pane_ParamLimits

0xb54e,	// (0x00061176) fmrd2_indi_pane

0xb55b,	// (0x00061183) area_fmrd2_visual_pane_g1

0xb563,	// (0x0006118b) area_fmrd2_visual_pane_t1

0xb573,	// (0x0006119b) area_fmrd2_visual_pane_t2

0xb583,	// (0x000611ab) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00065b23) area_fmrd2_visual_pane_t

0xb593,	// (0x000611bb) area_fmrd2_info_pane_g1

0xb59b,	// (0x000611c3) area_fmrd2_info_pane_t1

0xb5ab,	// (0x000611d3) area_fmrd2_info_pane_t2

0xb5bb,	// (0x000611e3) area_fmrd2_info_pane_t3

0xb5cb,	// (0x000611f3) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00065b2a) area_fmrd2_info_pane_t

0xb5d9,	// (0x00061201) fmrd2_indi_pane_t1

0xb5e9,	// (0x00061211) fmrd2_indi_pane_t2

0xb5f9,	// (0x00061221) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00065b33) fmrd2_indi_pane_t

0xdde7,	// (0x00063a0f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdde7,	// (0x00063a0f) list_single_fs_bigclock_indicator_pane_g5

0xde8b,	// (0x00063ab3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde8b,	// (0x00063ab3) list_single_fs_bigclock_indicator_pane_t5

0xad73,	// (0x0006099b) aid_cell_bcale_month_pane_ParamLimits

0xad73,	// (0x0006099b) aid_cell_bcale_month_pane

0xad85,	// (0x000609ad) bcale_month_pane_ParamLimits

0xad85,	// (0x000609ad) bcale_month_pane

0xad9d,	// (0x000609c5) bcale_preview_pane_ParamLimits

0xad9d,	// (0x000609c5) bcale_preview_pane

0xe9a5,	// (0x000645cd) list_single_fs_bigclock_pane_t1_ParamLimits

0xe9bf,	// (0x000645e7) list_single_fs_bigclock_pane_t2_ParamLimits

0xe9bf,	// (0x000645e7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x00065aba) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x00065aba) list_single_fs_bigclock_pane_t

0xec0a,	// (0x00064832) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00065b1e) main_fs_bigclock_unlock_btn_pane_g

0xb609,	// (0x00061231) aid_dia3_key_size_ParamLimits

0xb609,	// (0x00061231) aid_dia3_key_size

0xb618,	// (0x00061240) aid_dia3_listrow_size_ParamLimits

0xb618,	// (0x00061240) aid_dia3_listrow_size

0xb62d,	// (0x00061255) dia3_keypad_fun_pane_ParamLimits

0xb62d,	// (0x00061255) dia3_keypad_fun_pane

0xb649,	// (0x00061271) dia3_keypad_num_pane_ParamLimits

0xb649,	// (0x00061271) dia3_keypad_num_pane

0xb664,	// (0x0006128c) dia3_listscroll_pane_ParamLimits

0xb664,	// (0x0006128c) dia3_listscroll_pane

0xb677,	// (0x0006129f) dia3_numentry_pane_ParamLimits

0xb677,	// (0x0006129f) dia3_numentry_pane

0xec20,	// (0x00064848) dia3_list_pane

0xec2b,	// (0x00064853) scroll_pane_cp12

0xb9b1,	// (0x000615d9) bg_dia3_numentry_pane

0xb68b,	// (0x000612b3) dia3_numentry_pane_t1

0xb69a,	// (0x000612c2) cell_dia3_key_num_pane

0xb6a2,	// (0x000612ca) cell_dia3_key0_fun_pane_ParamLimits

0xb6a2,	// (0x000612ca) cell_dia3_key0_fun_pane

0xb6b6,	// (0x000612de) cell_dia3_key1_fun_pane_ParamLimits

0xb6b6,	// (0x000612de) cell_dia3_key1_fun_pane

0xb6ce,	// (0x000612f6) dia3_listrow_pane

0xdb07,	// (0x0006372f) bg_dia3_numentry_pane_g1

0xb9b1,	// (0x000615d9) bg_button_pane_cp21

0xec36,	// (0x0006485e) cell_dia3_key_num_pane_t1

0xec44,	// (0x0006486c) cell_dia3_key_num_pane_t2

0xec53,	// (0x0006487b) cell_dia3_key_num_pane_t3

0xec62,	// (0x0006488a) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00065b3a) cell_dia3_key_num_pane_t

0xb9b1,	// (0x000615d9) bg_button_pane_cp19

0xb6e0,	// (0x00061308) cell_dia3_key0_fun_pane_g1

0xb9b1,	// (0x000615d9) bg_button_pane_cp20

0xb6e8,	// (0x00061310) cell_dia3_key1_fun_pane_g1

0xb6f0,	// (0x00061318) area_left_week_number_pane

0xb6f9,	// (0x00061321) area_top_day_name_pane

0xb702,	// (0x0006132a) frame_month_view_pane

0xb70e,	// (0x00061336) grid_month_view_pane

0xb718,	// (0x00061340) cell_top_day_name_pane_ParamLimits

0xb718,	// (0x00061340) cell_top_day_name_pane

0xceb3,	// (0x00062adb) cell_area_left_week_number_pane_ParamLimits

0xceb3,	// (0x00062adb) cell_area_left_week_number_pane

0xb730,	// (0x00061358) cell_month_view_pane_ParamLimits

0xb730,	// (0x00061358) cell_month_view_pane

0xec71,	// (0x00064899) frm_month_g1

0xb74b,	// (0x00061373) frm_month_g2

0xb755,	// (0x0006137d) frm_month_g3

0xb75f,	// (0x00061387) frm_month_g4

0xb769,	// (0x00061391) frm_month_g5

0xb773,	// (0x0006139b) frm_month_g6

0xb77d,	// (0x000613a5) frm_month_g7

0xec7a,	// (0x000648a2) frm_month_g8

0xb789,	// (0x000613b1) frm_month_g9

0xb792,	// (0x000613ba) frm_month_g10

0xb79b,	// (0x000613c3) frm_month_g11

0xb7a4,	// (0x000613cc) frm_month_g12

0xb7ad,	// (0x000613d5) frm_month_g13

0xb7b6,	// (0x000613de) frm_month_g14

0xb7bf,	// (0x000613e7) frm_month_g15

0xb7c8,	// (0x000613f0) frm_month_g16

0x000f,

0xff1b,	// (0x00065b43) frm_month_g

0xb7d3,	// (0x000613fb) cell_top_day_name_pane_t1

0xb7e2,	// (0x0006140a) cell_area_left_week_number_pane_g1

0xb7d3,	// (0x000613fb) cell_area_left_week_number_pane_t1

0x2075,	// (0x00057c9d) cell_month_view_pane_g1

0xb7ea,	// (0x00061412) cell_month_view_pane_t1

0xb9b1,	// (0x000615d9) main_fps_pane

0xe0c5,	// (0x00063ced) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe0c5,	// (0x00063ced) cmail_ddmenu_btn02_pane_cp1

0xe0e1,	// (0x00063d09) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe0e1,	// (0x00063d09) cmail_ddmenu_btn02_pane_cp2

0xb046,	// (0x00060c6e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb046,	// (0x00060c6e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x00065a6b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x00065a6b) cmail_ddmenu_btn02_pane_g

0xb064,	// (0x00060c8c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb064,	// (0x00060c8c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x00065a70) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x00065a70) cmail_ddmenu_btn02_pane_t

0xb7f9,	// (0x00061421) fps_text_pane_ParamLimits

0xb7f9,	// (0x00061421) fps_text_pane

0xb810,	// (0x00061438) main_fps_pane_g1_ParamLimits

0xb810,	// (0x00061438) main_fps_pane_g1

0xb82a,	// (0x00061452) wait_bar_pane_cp010_ParamLimits

0xb82a,	// (0x00061452) wait_bar_pane_cp010

0xb83b,	// (0x00061463) fps_text_pane_t1_ParamLimits

0xb83b,	// (0x00061463) fps_text_pane_t1

0x8764,	// (0x0005e38c) cam4_image_uncrop_pane_g1

0x876d,	// (0x0005e395) cam4_image_uncrop_pane_g2

0x8776,	// (0x0005e39e) cam4_image_uncrop_pane_g3

0x877f,	// (0x0005e3a7) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00065544) cam4_image_uncrop_pane_g

0xb6ce,	// (0x000612f6) dia3_listrow_pane_ParamLimits

0xb9b1,	// (0x000615d9) main_phob2_pane

0xabad,	// (0x000607d5) cell_tport_appsw_pane_cp02_ParamLimits

0xabad,	// (0x000607d5) cell_tport_appsw_pane_cp02

0xabc1,	// (0x000607e9) cell_tport_appsw_pane_cp03_ParamLimits

0xabc1,	// (0x000607e9) cell_tport_appsw_pane_cp03

0xb9b1,	// (0x000615d9) phob2_contact_card_pane

0xb9b1,	// (0x000615d9) phob2_listscroll_pane

0x0001,	// (0x00055c29) phob2_list_pane

0x0009,	// (0x00055c31) scroll_pane_cp034

0xb853,	// (0x0006147b) phob2_cc_data_pane_ParamLimits

0xb853,	// (0x0006147b) phob2_cc_data_pane

0xb872,	// (0x0006149a) phob2_cc_listscroll_pane_ParamLimits

0xb872,	// (0x0006149a) phob2_cc_listscroll_pane

0xb890,	// (0x000614b8) list_double_large_graphic_phob2_pane_ParamLimits

0xb890,	// (0x000614b8) list_double_large_graphic_phob2_pane

0x0063,	// (0x00055c8b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x0063,	// (0x00055c8b) list_double_large_graphic_phob2_pane_g1

0xec83,	// (0x000648ab) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xec83,	// (0x000648ab) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x00065b64) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x00065b64) list_double_large_graphic_phob2_pane_g

0xec8f,	// (0x000648b7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xec8f,	// (0x000648b7) list_double_large_graphic_phob2_pane_t1

0xeca4,	// (0x000648cc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xeca4,	// (0x000648cc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00065b69) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00065b69) list_double_large_graphic_phob2_pane_t

0xb9b1,	// (0x000615d9) list_highlight_pane_cp024

0x0070,	// (0x00055c98) phob2_cc_button_pane

0xb8a2,	// (0x000614ca) phob2_cc_data_pane_g1_ParamLimits

0xb8a2,	// (0x000614ca) phob2_cc_data_pane_g1

0xb8b7,	// (0x000614df) phob2_cc_data_pane_g2_ParamLimits

0xb8b7,	// (0x000614df) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00065b6e) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00065b6e) phob2_cc_data_pane_g

0xb8c9,	// (0x000614f1) phob2_cc_data_pane_t1_ParamLimits

0xb8c9,	// (0x000614f1) phob2_cc_data_pane_t1

0xb8e1,	// (0x00061509) phob2_cc_data_pane_t2_ParamLimits

0xb8e1,	// (0x00061509) phob2_cc_data_pane_t2

0xb8f9,	// (0x00061521) phob2_cc_data_pane_t3_ParamLimits

0xb8f9,	// (0x00061521) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00065b73) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00065b73) phob2_cc_data_pane_t

0x00c6,	// (0x00055cee) phob2_cc_list_pane_ParamLimits

0x00c6,	// (0x00055cee) phob2_cc_list_pane

0x00d2,	// (0x00055cfa) scroll_pane_cp035_ParamLimits

0x00d2,	// (0x00055cfa) scroll_pane_cp035

0x1c2e,	// (0x00057856) bg_button_pane_cp033

0x00de,	// (0x00055d06) phob2_cc_button_pane_g1

0x00ea,	// (0x00055d12) phob2_cc_button_pane_t1

0x00ff,	// (0x00055d27) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00065b7a) phob2_cc_button_pane_t

0xb911,	// (0x00061539) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb911,	// (0x00061539) list_double_large_graphic_phob2_cc_pane

0xb923,	// (0x0006154b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb923,	// (0x0006154b) list_double_large_graphic_phob2_cc_pane_g1

0xb92f,	// (0x00061557) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb92f,	// (0x00061557) list_double_large_graphic_phob2_cc_pane_g2

0xb93b,	// (0x00061563) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb93b,	// (0x00061563) list_double_large_graphic_phob2_cc_pane_g3

0xb947,	// (0x0006156f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb947,	// (0x0006156f) list_double_large_graphic_phob2_cc_pane_g4

0xb953,	// (0x0006157b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb953,	// (0x0006157b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00065b7f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00065b7f) list_double_large_graphic_phob2_cc_pane_g

0xb95f,	// (0x00061587) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb95f,	// (0x00061587) list_double_large_graphic_phob2_cc_pane_t1

0xb988,	// (0x000615b0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb988,	// (0x000615b0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00065b8a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00065b8a) list_double_large_graphic_phob2_cc_pane_t

0x01d9,	// (0x00055e01) list_highlight_pane_cp025_ParamLimits

0x01d9,	// (0x00055e01) list_highlight_pane_cp025

0x1c2e,	// (0x00057856) bg_button_pane_cp033_ParamLimits

0x00de,	// (0x00055d06) phob2_cc_button_pane_g1_ParamLimits

0x00ea,	// (0x00055d12) phob2_cc_button_pane_t1_ParamLimits

0x00ff,	// (0x00055d27) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00065b7a) phob2_cc_button_pane_t_ParamLimits

0x3240,	// (0x00058e68) popup_wgtman_window

0xcf95,	// (0x00062bbd) scroll_pane_cp038

0xb45f,	// (0x00061087) wgtman_btn_pane_cp_01_ParamLimits

0xb45f,	// (0x00061087) wgtman_btn_pane_cp_01

0x01e7,	// (0x00055e0f) wgtman_content_pane

0x01f0,	// (0x00055e18) wgtman_heading_pane

0xb9b1,	// (0x000615d9) bg_heading_pane_cp02

0x01f9,	// (0x00055e21) wgtman_heading_pane_g1

0x0201,	// (0x00055e29) wgtman_heading_pane_t1

0x020f,	// (0x00055e37) scroll_pane_cp036

0x0217,	// (0x00055e3f) wgtman_list_pane

0x021f,	// (0x00055e47) wgtman_list_pane_t1_ParamLimits

0x021f,	// (0x00055e47) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
