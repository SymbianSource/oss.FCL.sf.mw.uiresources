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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0002bcc5 };

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
0x701d,	// (0x00032ce2) Screen

0x7027,	// (0x00032cec) application_window

0x7079,	// (0x00032d3e) area_bottom_pane_ParamLimits

0x7079,	// (0x00032d3e) area_bottom_pane

0x70b5,	// (0x00032d7a) area_top_pane_ParamLimits

0x70b5,	// (0x00032d7a) area_top_pane

0x7111,	// (0x00032dd6) call_video_uplink_pane_ParamLimits

0x7111,	// (0x00032dd6) call_video_uplink_pane

0x714c,	// (0x00032e11) main_pane_ParamLimits

0x714c,	// (0x00032e11) main_pane

0x292d,	// (0x0002e5f2) context_pane

0x9b3a,	// (0x000357ff) navi_pane

0x9b54,	// (0x00035819) popup_cale_events_window_ParamLimits

0x9b54,	// (0x00035819) popup_cale_events_window

0x2940,	// (0x0002e605) popup_mup_playback_window

0x9b6b,	// (0x00035830) signal_pane

0xe8b3,	// (0x0003a578) main_browser_pane

0xea78,	// (0x0003a73d) main_burst_pane

0x143a,	// (0x0002d0ff) main_calc_pane

0x28c7,	// (0x0002e58c) main_cale_day_pane

0x7697,	// (0x0003335c) main_cale_month_pane

0x28c7,	// (0x0002e58c) main_cale_week_pane

0xea78,	// (0x0003a73d) main_call_pane

0xe568,	// (0x0003a22d) main_call_poc_pane

0xea78,	// (0x0003a73d) main_camera_pane

0xea78,	// (0x0003a73d) main_chi_dic_pane

0x1110,	// (0x0002cdd5) main_clock_pane

0xe568,	// (0x0003a22d) main_fmradio_pane

0xea78,	// (0x0003a73d) main_graph_messa_pane

0xe568,	// (0x0003a22d) main_help_pane

0xe8b3,	// (0x0003a578) main_im_pane

0xe7c3,	// (0x0003a488) main_image_pane_ParamLimits

0xe7c3,	// (0x0003a488) main_image_pane

0xe568,	// (0x0003a22d) main_location2_pane

0xea78,	// (0x0003a73d) main_location_pane

0xe7c3,	// (0x0003a488) main_messa_pane

0xe568,	// (0x0003a22d) main_mp2_pane

0xea78,	// (0x0003a73d) main_mp_pane

0xe568,	// (0x0003a22d) main_msg_pane

0xe568,	// (0x0003a22d) main_mup_eq_pane

0xe568,	// (0x0003a22d) main_mup_pane

0xe8b3,	// (0x0003a578) main_notes_pane

0xe568,	// (0x0003a22d) main_pec_pane

0xe568,	// (0x0003a22d) main_phob_pane

0xe568,	// (0x0003a22d) main_pinb_pane

0xe568,	// (0x0003a22d) main_postcard_pane

0xe568,	// (0x0003a22d) main_qdial_pane

0xea78,	// (0x0003a73d) main_skin_pane

0xe568,	// (0x0003a22d) main_smil2_pane

0xea78,	// (0x0003a73d) main_smil_pane

0xea78,	// (0x0003a73d) main_video_pane

0xea78,	// (0x0003a73d) main_video_tele_pane

0xe7c3,	// (0x0003a488) main_viewer_pane_ParamLimits

0xe7c3,	// (0x0003a488) main_viewer_pane

0xea78,	// (0x0003a73d) main_vorec_pane

0x9a38,	// (0x000356fd) popup_blid_sat_info_window_ParamLimits

0x9a38,	// (0x000356fd) popup_blid_sat_info_window

0x9a54,	// (0x00035719) popup_dyc_status_message_window_ParamLimits

0x9a54,	// (0x00035719) popup_dyc_status_message_window

0x9a60,	// (0x00035725) popup_grid_large_graphic_window_ParamLimits

0x9a60,	// (0x00035725) popup_grid_large_graphic_window

0x9ad1,	// (0x00035796) popup_loc_request_window_ParamLimits

0x9ad1,	// (0x00035796) popup_loc_request_window

0x9b14,	// (0x000357d9) popup_wml_address_window_ParamLimits

0x9b14,	// (0x000357d9) popup_wml_address_window

0x9902,	// (0x000355c7) call_muted_g1

0x9912,	// (0x000355d7) popup_call_audio_conf_window_ParamLimits

0x9912,	// (0x000355d7) popup_call_audio_conf_window

0x9925,	// (0x000355ea) popup_call_audio_first_window_ParamLimits

0x9925,	// (0x000355ea) popup_call_audio_first_window

0x9959,	// (0x0003561e) popup_call_audio_in_window_ParamLimits

0x9959,	// (0x0003561e) popup_call_audio_in_window

0x9975,	// (0x0003563a) popup_call_audio_out_window_ParamLimits

0x9975,	// (0x0003563a) popup_call_audio_out_window

0x9991,	// (0x00035656) popup_call_audio_second_window_ParamLimits

0x9991,	// (0x00035656) popup_call_audio_second_window

0x99b9,	// (0x0003567e) popup_call_audio_wait_window_ParamLimits

0x99b9,	// (0x0003567e) popup_call_audio_wait_window

0x99d8,	// (0x0003569d) popup_number_entry_window_ParamLimits

0x99d8,	// (0x0003569d) popup_number_entry_window

0xe157,	// (0x00039e1c) bg_popup_call_pane_cp05_ParamLimits

0xe157,	// (0x00039e1c) bg_popup_call_pane_cp05

0xe177,	// (0x00039e3c) popup_number_entry_window_t1

0xe18a,	// (0x00039e4f) popup_number_entry_window_t2

0xe19c,	// (0x00039e61) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0003ad4a) popup_number_entry_window_t

0xe1ae,	// (0x00039e73) text_title_cp2

0xe1c1,	// (0x00039e86) bg_popup_call_pane_cp_ParamLimits

0xe1c1,	// (0x00039e86) bg_popup_call_pane_cp

0xe1cf,	// (0x00039e94) call_thumbnail_pane

0xe1d7,	// (0x00039e9c) popup_call_audio_in_window_g1_ParamLimits

0xe1d7,	// (0x00039e9c) popup_call_audio_in_window_g1

0xe1e3,	// (0x00039ea8) popup_call_audio_in_window_g2_ParamLimits

0xe1e3,	// (0x00039ea8) popup_call_audio_in_window_g2

0xe1ef,	// (0x00039eb4) popup_call_audio_in_window_g3_ParamLimits

0xe1ef,	// (0x00039eb4) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0003ad53) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0003ad53) popup_call_audio_in_window_g

0xe1fb,	// (0x00039ec0) popup_call_audio_in_window_t1_ParamLimits

0xe1fb,	// (0x00039ec0) popup_call_audio_in_window_t1

0xe216,	// (0x00039edb) popup_call_audio_in_window_t2_ParamLimits

0xe216,	// (0x00039edb) popup_call_audio_in_window_t2

0xe231,	// (0x00039ef6) popup_call_audio_in_window_t3_ParamLimits

0xe231,	// (0x00039ef6) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0003ad5a) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0003ad5a) popup_call_audio_in_window_t

0xe1c1,	// (0x00039e86) bg_popup_call_pane_cp01_ParamLimits

0xe1c1,	// (0x00039e86) bg_popup_call_pane_cp01

0xe1cf,	// (0x00039e94) call_thumbnail_pane_cp02

0xe244,	// (0x00039f09) call_type_pane_cp022

0xe24c,	// (0x00039f11) popup_call_audio_out_window_g1_ParamLimits

0xe24c,	// (0x00039f11) popup_call_audio_out_window_g1

0xe25e,	// (0x00039f23) popup_call_audio_out_window_g2_ParamLimits

0xe25e,	// (0x00039f23) popup_call_audio_out_window_g2

0xe26a,	// (0x00039f2f) popup_call_audio_out_window_g3_ParamLimits

0xe26a,	// (0x00039f2f) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0003ad61) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0003ad61) popup_call_audio_out_window_g

0xe27c,	// (0x00039f41) popup_call_audio_out_window_t1_ParamLimits

0xe27c,	// (0x00039f41) popup_call_audio_out_window_t1

0xe294,	// (0x00039f59) popup_call_audio_out_window_t2_ParamLimits

0xe294,	// (0x00039f59) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0003ad68) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0003ad68) popup_call_audio_out_window_t

0xe2a9,	// (0x00039f6e) bg_popup_call_pane_ParamLimits

0xe2a9,	// (0x00039f6e) bg_popup_call_pane

0x72ff,	// (0x00032fc4) call_thumbnail_pane_cp_ParamLimits

0x72ff,	// (0x00032fc4) call_thumbnail_pane_cp

0xe32d,	// (0x00039ff2) call_type_pane_cp01_ParamLimits

0xe32d,	// (0x00039ff2) call_type_pane_cp01

0xe371,	// (0x0003a036) popup_call_audio_first_window_g1_ParamLimits

0xe371,	// (0x0003a036) popup_call_audio_first_window_g1

0xe3bd,	// (0x0003a082) popup_call_audio_first_window_g2_ParamLimits

0xe3bd,	// (0x0003a082) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0003ad6d) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0003ad6d) popup_call_audio_first_window_g

0xe401,	// (0x0003a0c6) popup_call_audio_first_window_t1_ParamLimits

0xe401,	// (0x0003a0c6) popup_call_audio_first_window_t1

0xe4ad,	// (0x0003a172) popup_call_audio_first_window_t4_ParamLimits

0xe4ad,	// (0x0003a172) popup_call_audio_first_window_t4

0xe539,	// (0x0003a1fe) popup_call_audio_first_window_t5_ParamLimits

0xe539,	// (0x0003a1fe) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0003ad72) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0003ad72) popup_call_audio_first_window_t

0xe568,	// (0x0003a22d) bg_popup_call_pane_cp02

0xe572,	// (0x0003a237) call_type_pane_cp023

0xe57a,	// (0x0003a23f) popup_call_audio_wait_window_g1

0xe582,	// (0x0003a247) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0003ad79) popup_call_audio_wait_window_g

0xe58a,	// (0x0003a24f) popup_call_audio_wait_window_t3

0xe598,	// (0x0003a25d) bg_popup_call_pane_cp03_ParamLimits

0xe598,	// (0x0003a25d) bg_popup_call_pane_cp03

0xe5f8,	// (0x0003a2bd) call_thumbnail_pane_cp011_ParamLimits

0xe5f8,	// (0x0003a2bd) call_thumbnail_pane_cp011

0xe604,	// (0x0003a2c9) call_type_pane_cp034_ParamLimits

0xe604,	// (0x0003a2c9) call_type_pane_cp034

0xe640,	// (0x0003a305) popup_call_audio_second_window_g1_ParamLimits

0xe640,	// (0x0003a305) popup_call_audio_second_window_g1

0xe67c,	// (0x0003a341) popup_call_audio_second_window_g2_ParamLimits

0xe67c,	// (0x0003a341) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0003ad7e) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0003ad7e) popup_call_audio_second_window_g

0xe6b8,	// (0x0003a37d) popup_call_audio_second_window_t1_ParamLimits

0xe6b8,	// (0x0003a37d) popup_call_audio_second_window_t1

0xe739,	// (0x0003a3fe) popup_call_audio_second_window_t2_ParamLimits

0xe739,	// (0x0003a3fe) popup_call_audio_second_window_t2

0xe76f,	// (0x0003a434) popup_call_audio_second_window_t3_ParamLimits

0xe76f,	// (0x0003a434) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0003ad83) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0003ad83) popup_call_audio_second_window_t

0xe568,	// (0x0003a22d) bg_popup_call_pane_cp04

0xe7a5,	// (0x0003a46a) list_conf_pane

0xe7ad,	// (0x0003a472) popup_call_audio_conf_window_t1

0xe7bb,	// (0x0003a480) call_thumbnail_pane_g1

0xe7c3,	// (0x0003a488) bg_pinb_pane_ParamLimits

0xe7c3,	// (0x0003a488) bg_pinb_pane

0xe7d1,	// (0x0003a496) find_pinb_pane

0xe7c3,	// (0x0003a488) listscroll_pinb_pane_ParamLimits

0xe7c3,	// (0x0003a488) listscroll_pinb_pane

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g1

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g2

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g3

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g4

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g5

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g6

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g7

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g8

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g9

0xe7db,	// (0x0003a4a0) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0003ad8a) pinb_bg_pane_g

0x732e,	// (0x00032ff3) grid_pinb_pane

0xe14d,	// (0x00039e12) list_pinb_pane

0xe7e5,	// (0x0003a4aa) scroll_pane_cp01_ParamLimits

0xe7e5,	// (0x0003a4aa) scroll_pane_cp01

0xe7f2,	// (0x0003a4b7) find_pinb_pane_g1_ParamLimits

0xe7f2,	// (0x0003a4b7) find_pinb_pane_g1

0xe80a,	// (0x0003a4cf) find_pinb_pane_t1

0xe81c,	// (0x0003a4e1) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0003ada4) find_pinb_pane_t

0xe831,	// (0x0003a4f6) input_focus_pane_cp01_ParamLimits

0xe831,	// (0x0003a4f6) input_focus_pane_cp01

0x7338,	// (0x00032ffd) cell_pinb_pane_ParamLimits

0x7338,	// (0x00032ffd) cell_pinb_pane

0xe83d,	// (0x0003a502) cell_pinb_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) cell_pinb_pane_g1

0xe84b,	// (0x0003a510) cell_pinb_pane_g2_ParamLimits

0xe84b,	// (0x0003a510) cell_pinb_pane_g2

0xe84b,	// (0x0003a510) cell_pinb_pane_g3_ParamLimits

0xe84b,	// (0x0003a510) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0003ada9) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0003ada9) cell_pinb_pane_g

0xe568,	// (0x0003a22d) grid_highlight_pane_cp01

0xe14d,	// (0x00039e12) list_pinb_item_pane_ParamLimits

0xe14d,	// (0x00039e12) list_pinb_item_pane

0xe14d,	// (0x00039e12) list_highlight_pane_cp02

0xe859,	// (0x0003a51e) list_pinb_item_pane_g1_ParamLimits

0xe859,	// (0x0003a51e) list_pinb_item_pane_g1

0xe84b,	// (0x0003a510) list_pinb_item_pane_g2_ParamLimits

0xe84b,	// (0x0003a510) list_pinb_item_pane_g2

0xe83d,	// (0x0003a502) list_pinb_item_pane_g3_ParamLimits

0xe83d,	// (0x0003a502) list_pinb_item_pane_g3

0xe84b,	// (0x0003a510) list_pinb_item_pane_g4_ParamLimits

0xe84b,	// (0x0003a510) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0003adb0) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0003adb0) list_pinb_item_pane_g

0xe867,	// (0x0003a52c) list_pinb_item_pane_t1_ParamLimits

0xe867,	// (0x0003a52c) list_pinb_item_pane_t1

0x735c,	// (0x00033021) calc_display_pane

0x7374,	// (0x00033039) calc_paper_pane

0x7390,	// (0x00033055) grid_calc_pane

0xe568,	// (0x0003a22d) bg_list_pane_cp01

0x73b0,	// (0x00033075) clock_g1

0x73b8,	// (0x0003307d) clock_g2

0x0001,

0xf0f4,	// (0x0003adb9) clock_g

0x73c0,	// (0x00033085) clock_t1_ParamLimits

0x73c0,	// (0x00033085) clock_t1

0x73d5,	// (0x0003309a) clock_t2_ParamLimits

0x73d5,	// (0x0003309a) clock_t2

0x73e7,	// (0x000330ac) clock_t3_ParamLimits

0x73e7,	// (0x000330ac) clock_t3

0x73f9,	// (0x000330be) clock_t4_ParamLimits

0x73f9,	// (0x000330be) clock_t4

0x740b,	// (0x000330d0) clock_t5_ParamLimits

0x740b,	// (0x000330d0) clock_t5

0x7420,	// (0x000330e5) clock_t6_ParamLimits

0x7420,	// (0x000330e5) clock_t6

0x7432,	// (0x000330f7) clock_t7_ParamLimits

0x7432,	// (0x000330f7) clock_t7

0x7444,	// (0x00033109) clock_t8_ParamLimits

0x7444,	// (0x00033109) clock_t8

0x7456,	// (0x0003311b) clock_t9_ParamLimits

0x7456,	// (0x0003311b) clock_t9

0x0008,

0xf0f9,	// (0x0003adbe) clock_t_ParamLimits

0xf0f9,	// (0x0003adbe) clock_t

0xe87b,	// (0x0003a540) popup_clock_analogue_window_cp02

0xe87b,	// (0x0003a540) popup_clock_digital_window_cp01

0xe568,	// (0x0003a22d) listscroll_help_pane

0xe568,	// (0x0003a22d) phob_pre_status_pane

0xe883,	// (0x0003a548) grid_qdial_pane

0xe7c3,	// (0x0003a488) listscroll_mce_pane

0xe7c3,	// (0x0003a488) bg_notes_pane

0xe88d,	// (0x0003a552) list_notes_pane

0x7468,	// (0x0003312d) scroll_pane_cp06

0xe89b,	// (0x0003a560) bg_calc_paper_pane

0x7475,	// (0x0003313a) list_calc_pane

0xe8b3,	// (0x0003a578) bg_calc_display_pane

0x748f,	// (0x00033154) calc_display_pane_t1

0x74a4,	// (0x00033169) calc_display_pane_t2

0x74b9,	// (0x0003317e) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0003add1) calc_display_pane_t

0x74cb,	// (0x00033190) cell_calc_pane_ParamLimits

0x74cb,	// (0x00033190) cell_calc_pane

0xe8bf,	// (0x0003a584) bg_calc_paper_pane_g1

0xe8cb,	// (0x0003a590) bg_calc_paper_pane_g2

0xe8d7,	// (0x0003a59c) bg_calc_paper_pane_g3

0xe8e3,	// (0x0003a5a8) bg_calc_paper_pane_g4

0xe8ef,	// (0x0003a5b4) bg_calc_paper_pane_g5

0x74f2,	// (0x000331b7) bg_calc_paper_pane_g6

0x7501,	// (0x000331c6) bg_calc_paper_pane_g7

0x7510,	// (0x000331d5) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0003add8) bg_calc_paper_pane_g

0x751f,	// (0x000331e4) calc_bg_paper_pane_g9

0x752e,	// (0x000331f3) list_calc_item_pane_ParamLimits

0x752e,	// (0x000331f3) list_calc_item_pane

0xe8fb,	// (0x0003a5c0) list_calc_item_pane_g1

0x7547,	// (0x0003320c) list_calc_item_pane_t1_ParamLimits

0x7547,	// (0x0003320c) list_calc_item_pane_t1

0x7559,	// (0x0003321e) list_calc_item_pane_t2_ParamLimits

0x7559,	// (0x0003321e) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0003ade9) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0003ade9) list_calc_item_pane_t

0xe7db,	// (0x0003a4a0) cell_calc_pane_g1

0xe908,	// (0x0003a5cd) grid_highlight_pane_cp02

0xe92a,	// (0x0003a5ef) bg_calc_display_pane_g1

0x7587,	// (0x0003324c) bg_calc_display_pane_g2

0xe933,	// (0x0003a5f8) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0003adf3) bg_calc_display_pane_g

0x7591,	// (0x00033256) cell_qdial_pane_ParamLimits

0x7591,	// (0x00033256) cell_qdial_pane

0x75a3,	// (0x00033268) cell_qdial_pane_g1_ParamLimits

0x75a3,	// (0x00033268) cell_qdial_pane_g1

0x75b0,	// (0x00033275) cell_qdial_pane_g2_ParamLimits

0x75b0,	// (0x00033275) cell_qdial_pane_g2

0xe93c,	// (0x0003a601) cell_qdial_pane_g3_ParamLimits

0xe93c,	// (0x0003a601) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0003adfa) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0003adfa) cell_qdial_pane_g

0x75ce,	// (0x00033293) cell_qdial_pane_t1_ParamLimits

0x75ce,	// (0x00033293) cell_qdial_pane_t1

0x75e6,	// (0x000332ab) cell_qdial_pane_t2_ParamLimits

0x75e6,	// (0x000332ab) cell_qdial_pane_t2

0x75f9,	// (0x000332be) cell_qdial_pane_t3_ParamLimits

0x75f9,	// (0x000332be) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0003ae03) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0003ae03) cell_qdial_pane_t

0xe568,	// (0x0003a22d) grid_highlight_pane_cp04

0xe948,	// (0x0003a60d) thumbnail_qdial_pane_ParamLimits

0xe948,	// (0x0003a60d) thumbnail_qdial_pane

0xe9a4,	// (0x0003a669) list_help_pane

0xe9ae,	// (0x0003a673) scroll_pane_cp02

0x760c,	// (0x000332d1) help_list_pane_t1_ParamLimits

0x760c,	// (0x000332d1) help_list_pane_t1

0x762b,	// (0x000332f0) bg_notes_pane_g2

0x7633,	// (0x000332f8) bg_notes_pane_g3

0x763b,	// (0x00033300) notes_bg_pane_g1

0x7643,	// (0x00033308) notes_bg_pane_g4

0x764b,	// (0x00033310) notes_bg_pane_g5

0x7653,	// (0x00033318) notes_bg_pane_g6

0x765b,	// (0x00033320) notes_bg_pane_g7

0x7663,	// (0x00033328) notes_bg_pane_g8

0x766b,	// (0x00033330) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0003ae21) notes_bg_pane_g

0x7673,	// (0x00033338) list_notes_text_pane_ParamLimits

0x7673,	// (0x00033338) list_notes_text_pane

0xe9b7,	// (0x0003a67c) list_notes_text_pane_g1

0x62fb,	// (0x00031fc0) list_notes_text_pane_t1

0x7697,	// (0x0003335c) listscroll_cale_week_pane

0x76bc,	// (0x00033381) bg_cale_heading_pane

0xe9da,	// (0x0003a69f) bg_cale_pane_cp01

0x76d4,	// (0x00033399) cale_week_corner_pane

0x76ee,	// (0x000333b3) cale_week_day_heading_pane

0x7706,	// (0x000333cb) cale_week_scroll_pane_g1

0x7719,	// (0x000333de) cale_week_scroll_pane_g2

0x772c,	// (0x000333f1) cale_week_scroll_pane_g3

0x773f,	// (0x00033404) cale_week_scroll_pane_g4

0x7752,	// (0x00033417) cale_week_scroll_pane_g5

0x7765,	// (0x0003342a) cale_week_scroll_pane_g6

0x7778,	// (0x0003343d) cale_week_scroll_pane_g7

0x778b,	// (0x00033450) cale_week_scroll_pane_g8

0x779e,	// (0x00033463) cale_week_scroll_pane_g9

0x77b1,	// (0x00033476) cale_week_scroll_pane_g10

0x77c4,	// (0x00033489) cale_week_scroll_pane_g11

0x77d7,	// (0x0003349c) cale_week_scroll_pane_g12

0x77ea,	// (0x000334af) cale_week_scroll_pane_g13

0x77fd,	// (0x000334c2) cale_week_scroll_pane_g14

0x7810,	// (0x000334d5) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0003ae30) cale_week_scroll_pane_g

0x7836,	// (0x000334fb) cale_week_time_pane

0x7849,	// (0x0003350e) grid_cale_week_pane

0xea09,	// (0x0003a6ce) scroll_pane_cp08

0x785e,	// (0x00033523) cell_cale_week_pane_ParamLimits

0x785e,	// (0x00033523) cell_cale_week_pane

0x78ac,	// (0x00033571) cale_week_day_heading_pane_t1

0x78e7,	// (0x000335ac) cale_week_day_heading_pane_t2

0x7922,	// (0x000335e7) cale_week_day_heading_pane_t3

0x795d,	// (0x00033622) cale_week_day_heading_pane_t4

0x7998,	// (0x0003365d) cale_week_day_heading_pane_t5

0x79d3,	// (0x00033698) cale_week_day_heading_pane_t6

0x7a0e,	// (0x000336d3) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0003ae51) cale_week_day_heading_pane_t

0xea26,	// (0x0003a6eb) bg_cale_side_pane

0x7a49,	// (0x0003370e) cale_week_time_pane_t1

0x7a83,	// (0x00033748) cale_week_time_pane_t2

0x7abd,	// (0x00033782) cale_week_time_pane_t3

0x7af7,	// (0x000337bc) cale_week_time_pane_t4

0x7b31,	// (0x000337f6) cale_week_time_pane_t5

0x7b6b,	// (0x00033830) cale_week_time_pane_t6

0x7ba5,	// (0x0003386a) cale_week_time_pane_t7

0x7bdf,	// (0x000338a4) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0003ae60) cale_week_time_pane_t

0x7c19,	// (0x000338de) cell_cale_week_pane_g2

0x7c3d,	// (0x00033902) cell_cale_week_pane_g3_ParamLimits

0x7c3d,	// (0x00033902) cell_cale_week_pane_g3

0xea34,	// (0x0003a6f9) grid_highlight_pane_cp07

0xea3c,	// (0x0003a701) listscroll_gms_pane

0xea46,	// (0x0003a70b) grid_gms_pane

0xea4f,	// (0x0003a714) listscroll_gms_pane_g1

0xea57,	// (0x0003a71c) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0003ae71) listscroll_gms_pane_g

0x7c55,	// (0x0003391a) scroll_pane_cp010

0x7c5e,	// (0x00033923) cell_gms_pane_ParamLimits

0x7c5e,	// (0x00033923) cell_gms_pane

0x7c6f,	// (0x00033934) cell_gms_pane_g1

0xea5f,	// (0x0003a724) cell_gms_pane_g2

0xe9b7,	// (0x0003a67c) cell_gms_pane_g3

0xea67,	// (0x0003a72c) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0003ae76) cell_gms_pane_g

0xea70,	// (0x0003a735) grid_highlight_pane_cp09

0x98b0,	// (0x00035575) phob_pre_status_pane_g1

0x98b8,	// (0x0003557d) phob_pre_status_pane_g2

0x98c0,	// (0x00035585) phob_pre_status_pane_g3

0x98c8,	// (0x0003558d) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x0003b264) phob_pre_status_pane_g

0x98d8,	// (0x0003559d) phob_pre_status_pane_t1

0x98e6,	// (0x000355ab) phob_pre_status_pane_t2

0x98f4,	// (0x000355b9) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x0003b26f) phob_pre_status_pane_t

0xea78,	// (0x0003a73d) bg_list_pane_cp05

0x7c77,	// (0x0003393c) grid_vorec_pane

0xea80,	// (0x0003a745) vorec_t1

0xea8e,	// (0x0003a753) vorec_t2

0xea9c,	// (0x0003a761) vorec_t3

0x7c7f,	// (0x00033944) vorec_t4

0xdf18,	// (0x00039bdd) vorec_t5

0xdf26,	// (0x00039beb) vorec_t6

0x0004,

0xf1ba,	// (0x0003ae7f) vorec_t

0xdf34,	// (0x00039bf9) wait_bar_pane_cp01

0x178c,	// (0x0002d451) cell_vorec_pane_ParamLimits

0x178c,	// (0x0002d451) cell_vorec_pane

0x7c8d,	// (0x00033952) cell_vorec_pane_g1

0xe568,	// (0x0003a22d) grid_highlight_pane_cp05

0x143a,	// (0x0002d0ff) cams_zoom_pane

0x7c97,	// (0x0003395c) image_vga_pane

0xe84b,	// (0x0003a510) main_camera_pane_g1

0xe84b,	// (0x0003a510) main_camera_pane_g2

0xe84b,	// (0x0003a510) main_camera_pane_g3

0xe84b,	// (0x0003a510) main_camera_pane_g4

0xe84b,	// (0x0003a510) main_camera_pane_g5

0xe84b,	// (0x0003a510) main_camera_pane_g6

0xe84b,	// (0x0003a510) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0003ae8a) main_camera_pane_g

0x1426,	// (0x0002d0eb) main_camera_pane_t1

0x1426,	// (0x0002d0eb) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0003ae9b) main_camera_pane_t

0x7cb6,	// (0x0003397b) cams_zoom_pane_cp_ParamLimits

0x7cb6,	// (0x0003397b) cams_zoom_pane_cp

0x7cda,	// (0x0003399f) image_cif_pane_ParamLimits

0x7cda,	// (0x0003399f) image_cif_pane

0x7ce7,	// (0x000339ac) image_subqcif_pane

0x7cef,	// (0x000339b4) main_video_pane_g1_ParamLimits

0x7cef,	// (0x000339b4) main_video_pane_g1

0x7d0f,	// (0x000339d4) main_video_pane_g2_ParamLimits

0x7d0f,	// (0x000339d4) main_video_pane_g2

0x7d3d,	// (0x00033a02) main_video_pane_g3_ParamLimits

0x7d3d,	// (0x00033a02) main_video_pane_g3

0x7d66,	// (0x00033a2b) main_video_pane_g4_ParamLimits

0x7d66,	// (0x00033a2b) main_video_pane_g4

0x7d8f,	// (0x00033a54) main_video_pane_g5_ParamLimits

0x7d8f,	// (0x00033a54) main_video_pane_g5

0xeab8,	// (0x0003a77d) main_video_pane_g6_ParamLimits

0xeab8,	// (0x0003a77d) main_video_pane_g6

0x0006,

0xf1db,	// (0x0003aea0) main_video_pane_g_ParamLimits

0xf1db,	// (0x0003aea0) main_video_pane_g

0x7db1,	// (0x00033a76) main_video_pane_t1_ParamLimits

0x7db1,	// (0x00033a76) main_video_pane_t1

0xead2,	// (0x0003a797) cams_zoom_pane_g1

0xead2,	// (0x0003a797) cams_zoom_pane_g2

0xead2,	// (0x0003a797) cams_zoom_pane_g3

0xead2,	// (0x0003a797) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0003aeaf) cams_zoom_pane_g

0x7dfb,	// (0x00033ac0) grid_cams_pane

0x7e07,	// (0x00033acc) linegrid_cams_pane

0x7e13,	// (0x00033ad8) cell_cams_pane_ParamLimits

0x7e13,	// (0x00033ad8) cell_cams_pane

0xeadc,	// (0x0003a7a1) cams_burst_image_pane

0xeae4,	// (0x0003a7a9) cell_cams_pane_g1

0xe568,	// (0x0003a22d) grid_highlight_pane_cp03

0xe7db,	// (0x0003a4a0) mp_bg_pane_g1

0xe568,	// (0x0003a22d) bg_list_pane_cp03

0x27ec,	// (0x0002e4b1) bg_mp_pane

0x27f4,	// (0x0002e4b9) grid_mp_pane

0x27fc,	// (0x0002e4c1) media_player_g1

0x2804,	// (0x0002e4c9) media_player_t1

0x2812,	// (0x0002e4d7) media_player_t2

0x2820,	// (0x0002e4e5) media_player_t3

0x282e,	// (0x0002e4f3) media_player_t4

0x283c,	// (0x0002e501) media_player_t5

0x284a,	// (0x0002e50f) media_player_t6

0x2858,	// (0x0002e51d) media_player_t7

0x0006,

0xf589,	// (0x0003b24e) media_player_t

0x2866,	// (0x0002e52b) wait_bar_pane_cp02

0xf56e,	// (0x0003b233) main_usb_pane_t

0x98a7,	// (0x0003556c) cell_mp_pane

0xe7db,	// (0x0003a4a0) cell_mp_pane_g1

0xe568,	// (0x0003a22d) grid_highlight_pane_cp06

0xeaec,	// (0x0003a7b1) grid_skin_colour_pane

0xeaf4,	// (0x0003a7b9) list_highlight_pane_cp03

0x7e26,	// (0x00033aeb) skin_g1

0xeafc,	// (0x0003a7c1) skin_t1

0xeb0b,	// (0x0003a7d0) skin_t2

0x0001,

0xf218,	// (0x0003aedd) skin_t

0x7e2e,	// (0x00033af3) cell_skin_colour_pane_ParamLimits

0x7e2e,	// (0x00033af3) cell_skin_colour_pane

0xeb19,	// (0x0003a7de) cell_skin_colour_pane_g1

0x7ea4,	// (0x00033b69) call_video_g1_ParamLimits

0x7ea4,	// (0x00033b69) call_video_g1

0x7eb0,	// (0x00033b75) call_video_g2_ParamLimits

0x7eb0,	// (0x00033b75) call_video_g2

0x0001,

0xf21d,	// (0x0003aee2) call_video_g_ParamLimits

0xf21d,	// (0x0003aee2) call_video_g

0x7f00,	// (0x00033bc5) call_video_uplink_pane_cp1_ParamLimits

0x7f00,	// (0x00033bc5) call_video_uplink_pane_cp1

0xeb2b,	// (0x0003a7f0) call_video_uplink_pane_cp2

0x7fbc,	// (0x00033c81) video_down_crop_pane_ParamLimits

0x7fbc,	// (0x00033c81) video_down_crop_pane

0x8086,	// (0x00033d4b) video_down_pane_ParamLimits

0x8086,	// (0x00033d4b) video_down_pane

0xeb33,	// (0x0003a7f8) video_down_subqcif_pane_ParamLimits

0xeb33,	// (0x0003a7f8) video_down_subqcif_pane

0xeb4b,	// (0x0003a810) video_down_subqcif_pane_cp_ParamLimits

0xeb4b,	// (0x0003a810) video_down_subqcif_pane_cp

0xeb6f,	// (0x0003a834) im_reading_pane_ParamLimits

0xeb6f,	// (0x0003a834) im_reading_pane

0x8152,	// (0x00033e17) im_writing_pane_ParamLimits

0x8152,	// (0x00033e17) im_writing_pane

0x8168,	// (0x00033e2d) im_reading_pane_t1

0xeb89,	// (0x0003a84e) list_im_pane

0xeb9a,	// (0x0003a85f) scroll_pane_cp07

0x81a0,	// (0x00033e65) im_writing_pane_t1_ParamLimits

0x81a0,	// (0x00033e65) im_writing_pane_t1

0xebb3,	// (0x0003a878) im_writing_pane_t2_ParamLimits

0xebb3,	// (0x0003a878) im_writing_pane_t2

0x0001,

0xf227,	// (0x0003aeec) im_writing_pane_t_ParamLimits

0xf227,	// (0x0003aeec) im_writing_pane_t

0xe568,	// (0x0003a22d) input_focus_pane_cp04

0xe568,	// (0x0003a22d) input_focus_pane_cp05

0x81b5,	// (0x00033e7a) list_im_single_pane_ParamLimits

0x81b5,	// (0x00033e7a) list_im_single_pane

0xebd0,	// (0x0003a895) list_single_im_pane_t1

0x986d,	// (0x00035532) blid_accuracy_pane

0x9875,	// (0x0003553a) blid_compass_pane

0x987d,	// (0x00035542) main_location_t1

0x988b,	// (0x00035550) main_location_t2

0x9899,	// (0x0003555e) main_location_t3

0x0002,

0xf598,	// (0x0003b25d) main_location_t

0xe568,	// (0x0003a22d) aid_levels_location

0xe7db,	// (0x0003a4a0) blid_accuracy_pane_g1

0xe7db,	// (0x0003a4a0) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0003af40) blid_accuracy_pane_g

0xec0a,	// (0x0003a8cf) wml_content_pane

0xec48,	// (0x0003a90d) wml_button_pane_ParamLimits

0xec48,	// (0x0003a90d) wml_button_pane

0x81cd,	// (0x00033e92) wml_list_single_large_pane_ParamLimits

0x81cd,	// (0x00033e92) wml_list_single_large_pane

0x81e4,	// (0x00033ea9) wml_list_single_medium_pane_ParamLimits

0x81e4,	// (0x00033ea9) wml_list_single_medium_pane

0x81fc,	// (0x00033ec1) wml_list_single_small_pane_ParamLimits

0x81fc,	// (0x00033ec1) wml_list_single_small_pane

0xec5c,	// (0x0003a921) wml_selection_box_pane_ParamLimits

0xec5c,	// (0x0003a921) wml_selection_box_pane

0xec6f,	// (0x0003a934) wml_list_single_pane_t1

0xec7e,	// (0x0003a943) wml_list_single_medium_pane_t1

0xec8d,	// (0x0003a952) wml_list_single_large_pane_t1

0xec9c,	// (0x0003a961) input_focus_pane_cp02_ParamLimits

0xec9c,	// (0x0003a961) input_focus_pane_cp02

0xecaf,	// (0x0003a974) wml_selection_box_pane_g1

0xecb8,	// (0x0003a97d) wml_selection_box_pane_t1_ParamLimits

0xecb8,	// (0x0003a97d) wml_selection_box_pane_t1

0xe7c3,	// (0x0003a488) bg_wml_button_pane_ParamLimits

0xe7c3,	// (0x0003a488) bg_wml_button_pane

0xecd0,	// (0x0003a995) wml_button_pane_g1

0xecd8,	// (0x0003a99d) wml_button_pane_t1

0xecd0,	// (0x0003a995) wml_button_bg_pane_g1

0xece8,	// (0x0003a9ad) wml_button_bg_pane_g2

0xecf0,	// (0x0003a9b5) wml_button_bg_pane_g3

0xecf8,	// (0x0003a9bd) wml_button_bg_pane_g4

0xed00,	// (0x0003a9c5) wml_button_bg_pane_g5

0xed08,	// (0x0003a9cd) wml_button_bg_pane_g6

0xed10,	// (0x0003a9d5) wml_button_bg_pane_g7

0xed18,	// (0x0003a9dd) wml_button_bg_pane_g8

0xed20,	// (0x0003a9e5) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0003aef1) wml_button_bg_pane_g

0x8217,	// (0x00033edc) bg_list_pane_cp02

0xed28,	// (0x0003a9ed) mce_header_pane_ParamLimits

0xed28,	// (0x0003a9ed) mce_header_pane

0xed3c,	// (0x0003aa01) mce_icon_pane

0xed3c,	// (0x0003aa01) mce_image_pane

0xed45,	// (0x0003aa0a) mce_text_pane_ParamLimits

0xed45,	// (0x0003aa0a) mce_text_pane

0x8220,	// (0x00033ee5) scroll_pane_cp03

0x8220,	// (0x00033ee5) scroll_pane_cp04

0xed59,	// (0x0003aa1e) scroll_pane_cp05_ParamLimits

0xed59,	// (0x0003aa1e) scroll_pane_cp05

0x8228,	// (0x00033eed) mce_header_field_pane_ParamLimits

0x8228,	// (0x00033eed) mce_header_field_pane

0x8248,	// (0x00033f0d) mce_header_field_pane_2_ParamLimits

0x8248,	// (0x00033f0d) mce_header_field_pane_2

0x825e,	// (0x00033f23) mce_header_field_pane_3

0x8266,	// (0x00033f2b) list_single_mce_message_pane_ParamLimits

0x8266,	// (0x00033f2b) list_single_mce_message_pane

0x827d,	// (0x00033f42) list_single_mce_smart_pane_ParamLimits

0x827d,	// (0x00033f42) list_single_mce_smart_pane

0xed65,	// (0x0003aa2a) input_focus_pane_cp03

0xed6e,	// (0x0003aa33) list_header_data_pane

0x829f,	// (0x00033f64) mce_header_field_pane_t1

0x82ad,	// (0x00033f72) list_single_mce_header_pane_ParamLimits

0x82ad,	// (0x00033f72) list_single_mce_header_pane

0xed76,	// (0x0003aa3b) list_single_mce_header_pane_t1

0xed85,	// (0x0003aa4a) list_single_mce_message_pane_g1

0xed8e,	// (0x0003aa53) list_single_mce_message_pane_t1

0x82eb,	// (0x00033fb0) bg_cale_heading_pane_cp01_ParamLimits

0x82eb,	// (0x00033fb0) bg_cale_heading_pane_cp01

0xed9d,	// (0x0003aa62) bg_cale_pane_cp02_ParamLimits

0xed9d,	// (0x0003aa62) bg_cale_pane_cp02

0x831a,	// (0x00033fdf) cale_month_corner_pane

0x8334,	// (0x00033ff9) cale_month_day_heading_pane_ParamLimits

0x8334,	// (0x00033ff9) cale_month_day_heading_pane

0x8363,	// (0x00034028) cale_month_pane_g1_ParamLimits

0x8363,	// (0x00034028) cale_month_pane_g1

0x8387,	// (0x0003404c) cale_month_pane_g2_ParamLimits

0x8387,	// (0x0003404c) cale_month_pane_g2

0x83a6,	// (0x0003406b) cale_month_pane_g3_ParamLimits

0x83a6,	// (0x0003406b) cale_month_pane_g3

0x83e2,	// (0x000340a7) cale_month_pane_g4_ParamLimits

0x83e2,	// (0x000340a7) cale_month_pane_g4

0x841e,	// (0x000340e3) cale_month_pane_g5_ParamLimits

0x841e,	// (0x000340e3) cale_month_pane_g5

0x845a,	// (0x0003411f) cale_month_pane_g6_ParamLimits

0x845a,	// (0x0003411f) cale_month_pane_g6

0x8496,	// (0x0003415b) cale_month_pane_g7_ParamLimits

0x8496,	// (0x0003415b) cale_month_pane_g7

0x84d2,	// (0x00034197) cale_month_pane_g8_ParamLimits

0x84d2,	// (0x00034197) cale_month_pane_g8

0x850e,	// (0x000341d3) cale_month_pane_g9_ParamLimits

0x850e,	// (0x000341d3) cale_month_pane_g9

0x8548,	// (0x0003420d) cale_month_pane_g10_ParamLimits

0x8548,	// (0x0003420d) cale_month_pane_g10

0x8582,	// (0x00034247) cale_month_pane_g11_ParamLimits

0x8582,	// (0x00034247) cale_month_pane_g11

0x85bc,	// (0x00034281) cale_month_pane_g12_ParamLimits

0x85bc,	// (0x00034281) cale_month_pane_g12

0x85f6,	// (0x000342bb) cale_month_pane_g13_ParamLimits

0x85f6,	// (0x000342bb) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0003af04) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0003af04) cale_month_pane_g

0x8630,	// (0x000342f5) cale_month_week_pane

0x8643,	// (0x00034308) grid_cale_month_pane_ParamLimits

0x8643,	// (0x00034308) grid_cale_month_pane

0x8669,	// (0x0003432e) cale_month_day_heading_pane_t1

0x86ef,	// (0x000343b4) cale_month_day_heading_pane_t2

0x8780,	// (0x00034445) cale_month_day_heading_pane_t3

0x8811,	// (0x000344d6) cale_month_day_heading_pane_t4

0x88a2,	// (0x00034567) cale_month_day_heading_pane_t5

0x8933,	// (0x000345f8) cale_month_day_heading_pane_t6

0x89c4,	// (0x00034689) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0003af1f) cale_month_day_heading_pane_t

0xea26,	// (0x0003a6eb) bg_cale_side_pane_cp01

0x8a55,	// (0x0003471a) cale_month_week_pane_t1

0x8a8e,	// (0x00034753) cale_month_week_pane_t2

0x8ac7,	// (0x0003478c) cale_month_week_pane_t3

0x8b00,	// (0x000347c5) cale_month_week_pane_t4

0x8b39,	// (0x000347fe) cale_month_week_pane_t5

0x8b72,	// (0x00034837) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0003af2e) cale_month_week_pane_t

0x8bab,	// (0x00034870) cell_cale_month_pane_ParamLimits

0x8bab,	// (0x00034870) cell_cale_month_pane

0x8c99,	// (0x0003495e) cell_cale_month_pane_g1

0x8ca5,	// (0x0003496a) cell_cale_month_pane_t1_ParamLimits

0x8ca5,	// (0x0003496a) cell_cale_month_pane_t1

0xea34,	// (0x0003a6f9) grid_highlight_pane_cp08

0xe7db,	// (0x0003a4a0) main_smil_g1

0x8cc5,	// (0x0003498a) smil_status_pane

0xeddc,	// (0x0003aaa1) smil_text_pane

0x26b4,	// (0x0002e379) bg_popup_call3_rect_pane_g8

0x26bc,	// (0x0002e381) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x0003b1de) bg_popup_call3_rect_pane_g

0x299f,	// (0x0002e664) smil_status_volume_pane_g1

0x8cd6,	// (0x0003499b) smil_status_pane_t1

0x9bcd,	// (0x00035892) volume_smil_pane

0xede6,	// (0x0003aaab) list_smil_text_pane

0x8ced,	// (0x000349b2) scroll_pane_cp011

0x8cf6,	// (0x000349bb) smil_text_list_pane_t1_ParamLimits

0x8cf6,	// (0x000349bb) smil_text_list_pane_t1

0x8d35,	// (0x000349fa) aid_volume_smil_ParamLimits

0x8d35,	// (0x000349fa) aid_volume_smil

0xe7db,	// (0x0003a4a0) smil_volume_pane_g1

0xe7db,	// (0x0003a4a0) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0003af40) smil_volume_pane_g

0x7697,	// (0x0003335c) listscroll_cale_day_pane

0xedf0,	// (0x0003aab5) bg_cale_pane

0xee08,	// (0x0003aacd) list_cale_pane

0xee2b,	// (0x0003aaf0) scroll_pane_cp09

0xee3c,	// (0x0003ab01) cale_bg_pane_g1

0xee44,	// (0x0003ab09) cale_bg_pane_g2

0xee4c,	// (0x0003ab11) cale_bg_pane_g3

0xee54,	// (0x0003ab19) cale_bg_pane_g4

0xee5c,	// (0x0003ab21) cale_bg_pane_g5

0xee64,	// (0x0003ab29) cale_bg_pane_g6

0xee6c,	// (0x0003ab31) cale_bg_pane_g7

0xee74,	// (0x0003ab39) cale_bg_pane_g8

0xee7c,	// (0x0003ab41) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0003af45) cale_bg_pane_g

0x8d5f,	// (0x00034a24) list_cale_time_pane_ParamLimits

0x8d5f,	// (0x00034a24) list_cale_time_pane

0xee84,	// (0x0003ab49) list_cale_time_pane_g1_ParamLimits

0xee84,	// (0x0003ab49) list_cale_time_pane_g1

0xee90,	// (0x0003ab55) list_cale_time_pane_g2_ParamLimits

0xee90,	// (0x0003ab55) list_cale_time_pane_g2

0x8d73,	// (0x00034a38) list_cale_time_pane_g3_ParamLimits

0x8d73,	// (0x00034a38) list_cale_time_pane_g3

0x8d7f,	// (0x00034a44) list_cale_time_pane_g4_ParamLimits

0x8d7f,	// (0x00034a44) list_cale_time_pane_g4

0x8d8b,	// (0x00034a50) list_cale_time_pane_g5_ParamLimits

0x8d8b,	// (0x00034a50) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0003af58) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0003af58) list_cale_time_pane_g

0xeeaa,	// (0x0003ab6f) list_cale_time_pane_t1_ParamLimits

0xeeaa,	// (0x0003ab6f) list_cale_time_pane_t1

0xeed2,	// (0x0003ab97) list_cale_time_pane_t2_ParamLimits

0xeed2,	// (0x0003ab97) list_cale_time_pane_t2

0x9048,	// (0x00034d0d) aid_blid_cardinal_pane

0x9086,	// (0x00034d4b) compass_pane_t4

0xeefa,	// (0x0003abbf) list_cale_time_pane_t4_ParamLimits

0xeefa,	// (0x0003abbf) list_cale_time_pane_t4

0x9094,	// (0x00034d59) compass_pane_t5

0x90a2,	// (0x00034d67) compass_pane_t6

0x90b0,	// (0x00034d75) compass_pane_t7

0x1235,	// (0x0002cefa) navi_pane_cc_t1

0x13ec,	// (0x0002d0b1) aid_phob_thumbnail_center_pane

0x941a,	// (0x000350df) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0003af65) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0003af65) list_cale_time_pane_t

0xe1c1,	// (0x00039e86) bg_popup_window_pane_cp02_ParamLimits

0xe1c1,	// (0x00039e86) bg_popup_window_pane_cp02

0xef22,	// (0x0003abe7) heading_pane_cp01_ParamLimits

0xef22,	// (0x0003abe7) heading_pane_cp01

0xef2e,	// (0x0003abf3) loc_req_pane_ParamLimits

0xef2e,	// (0x0003abf3) loc_req_pane

0xef3e,	// (0x0003ac03) loc_type_pane_ParamLimits

0xef3e,	// (0x0003ac03) loc_type_pane

0xef50,	// (0x0003ac15) loc_type_pane_t1_ParamLimits

0xef50,	// (0x0003ac15) loc_type_pane_t1

0xef62,	// (0x0003ac27) loc_type_pane_t2_ParamLimits

0xef62,	// (0x0003ac27) loc_type_pane_t2

0xef74,	// (0x0003ac39) loc_type_pane_t3_ParamLimits

0xef74,	// (0x0003ac39) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0003af6c) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0003af6c) loc_type_pane_t

0xef86,	// (0x0003ac4b) list_loc_req_pane

0xef90,	// (0x0003ac55) scroll_pane_cp012

0x8d97,	// (0x00034a5c) list_single_loc_request_popup_menu_pane_ParamLimits

0x8d97,	// (0x00034a5c) list_single_loc_request_popup_menu_pane

0xef99,	// (0x0003ac5e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xef99,	// (0x0003ac5e) list_single_loc_request_popup_menu_pane_g1

0xefa5,	// (0x0003ac6a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xefa5,	// (0x0003ac6a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0003af73) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0003af73) list_single_loc_request_popup_menu_pane_g

0xefb1,	// (0x0003ac76) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xefb1,	// (0x0003ac76) list_single_loc_request_popup_menu_pane_t1

0x8da9,	// (0x00034a6e) bg_popup_window_pane_cp03_ParamLimits

0x8da9,	// (0x00034a6e) bg_popup_window_pane_cp03

0x8db7,	// (0x00034a7c) heading_loc_req_pane_ParamLimits

0x8db7,	// (0x00034a7c) heading_loc_req_pane

0x8dc3,	// (0x00034a88) popup_dyc_status_message_window_g1_ParamLimits

0x8dc3,	// (0x00034a88) popup_dyc_status_message_window_g1

0x8dcf,	// (0x00034a94) popup_dyc_status_message_window_t1_ParamLimits

0x8dcf,	// (0x00034a94) popup_dyc_status_message_window_t1

0x8de1,	// (0x00034aa6) popup_dyc_status_message_window_t2_ParamLimits

0x8de1,	// (0x00034aa6) popup_dyc_status_message_window_t2

0x8df3,	// (0x00034ab8) popup_dyc_status_message_window_t3_ParamLimits

0x8df3,	// (0x00034ab8) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0003af78) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0003af78) popup_dyc_status_message_window_t

0xe568,	// (0x0003a22d) bg_heading_pane_cp01

0xefc7,	// (0x0003ac8c) heading_loc_req_pane_g1

0xefcf,	// (0x0003ac94) heading_loc_req_pane_g2

0xefd7,	// (0x0003ac9c) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0003af7f) heading_loc_req_pane_g

0xefdf,	// (0x0003aca4) heading_loc_req_pane_t1

0xefee,	// (0x0003acb3) bg_popup_sub_pane_cp01_ParamLimits

0xefee,	// (0x0003acb3) bg_popup_sub_pane_cp01

0xeffc,	// (0x0003acc1) popup_cale_events_window_g1_ParamLimits

0xeffc,	// (0x0003acc1) popup_cale_events_window_g1

0xf01c,	// (0x0003ace1) popup_cale_events_window_g2_ParamLimits

0xf01c,	// (0x0003ace1) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x0003afb3) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x0003afb3) popup_cale_events_window_g

0x0ea9,	// (0x0002cb6e) popup_cale_events_window_t1_ParamLimits

0x0ea9,	// (0x0002cb6e) popup_cale_events_window_t1

0x0ebb,	// (0x0002cb80) popup_cale_events_window_t2_ParamLimits

0x0ebb,	// (0x0002cb80) popup_cale_events_window_t2

0x0ef9,	// (0x0002cbbe) popup_cale_events_window_t3_ParamLimits

0x0ef9,	// (0x0002cbbe) popup_cale_events_window_t3

0x0f33,	// (0x0002cbf8) popup_cale_events_window_t4_ParamLimits

0x0f33,	// (0x0002cbf8) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x0003afb8) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x0003afb8) popup_cale_events_window_t

0x8e1f,	// (0x00034ae4) call_type_pane

0x1e81,	// (0x0002db46) popup_call_status_window_g1

0x8e2b,	// (0x00034af0) popup_call_status_window_g2

0x8e37,	// (0x00034afc) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x0003afc1) popup_call_status_window_g

0x0f69,	// (0x0002cc2e) call_type_pane_g1

0x0f72,	// (0x0002cc37) call_type_pane_g2

0x0001,

0xf303,	// (0x0003afc8) call_type_pane_g

0xe568,	// (0x0003a22d) bg_popup_sub_pane_cp02

0x0f7b,	// (0x0002cc40) listscroll_popup_wml_pane

0x0f83,	// (0x0002cc48) list_wml_pane

0x0f8d,	// (0x0002cc52) scroll_pane_cp013

0x8e43,	// (0x00034b08) list_single_graphic_popup_wml_pane_ParamLimits

0x8e43,	// (0x00034b08) list_single_graphic_popup_wml_pane

0xe7db,	// (0x0003a4a0) list_single_graphic_popup_wml_pane_g1

0x0f96,	// (0x0002cc5b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x0003afcd) list_single_graphic_popup_wml_pane_g

0x0f9e,	// (0x0002cc63) list_single_graphic_popup_wml_pane_t1

0x0fac,	// (0x0002cc71) aid_call_pane

0xe7bb,	// (0x0003a480) popup_clock_analogue_window_g1

0xe7bb,	// (0x0003a480) popup_clock_analogue_window_g2

0x8e57,	// (0x00034b1c) popup_clock_analogue_window_g3

0x8e57,	// (0x00034b1c) popup_clock_analogue_window_g4

0xe7db,	// (0x0003a4a0) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x0003afd2) popup_clock_analogue_window_g

0x8e5f,	// (0x00034b24) popup_clock_analogue_window_t1

0x8e6d,	// (0x00034b32) clock_digital_number_pane_ParamLimits

0x8e6d,	// (0x00034b32) clock_digital_number_pane

0x8e79,	// (0x00034b3e) clock_digital_number_pane_cp02_ParamLimits

0x8e79,	// (0x00034b3e) clock_digital_number_pane_cp02

0x8e85,	// (0x00034b4a) clock_digital_number_pane_cp03_ParamLimits

0x8e85,	// (0x00034b4a) clock_digital_number_pane_cp03

0x8e91,	// (0x00034b56) clock_digital_number_pane_cp04_ParamLimits

0x8e91,	// (0x00034b56) clock_digital_number_pane_cp04

0x8e9d,	// (0x00034b62) clock_digital_separator_pane_ParamLimits

0x8e9d,	// (0x00034b62) clock_digital_separator_pane

0x8ea9,	// (0x00034b6e) popup_clock_digital_window_t1

0xe7db,	// (0x0003a4a0) clock_digital_number_pane_g1

0xe7db,	// (0x0003a4a0) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0003af40) clock_digital_number_pane_g

0xe7db,	// (0x0003a4a0) clock_digital_separator_pane_g1

0xe7db,	// (0x0003a4a0) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0003af40) clock_digital_separator_pane_g

0xe568,	// (0x0003a22d) bg_popup_window_pane_cp04

0x102b,	// (0x0002ccf0) heading_pane_cp03

0x1033,	// (0x0002ccf8) listscroll_popup_gms_pane

0x103b,	// (0x0002cd00) grid_large_graphic_popup_pane

0x1045,	// (0x0002cd0a) listscroll_popup_gms_pane_g1

0x104d,	// (0x0002cd12) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x0003afdd) listscroll_popup_gms_pane_g

0xec40,	// (0x0003a905) scroll_pane_cp014

0x8ec6,	// (0x00034b8b) cell_large_graphic_popup_pane_ParamLimits

0x8ec6,	// (0x00034b8b) cell_large_graphic_popup_pane

0x8edd,	// (0x00034ba2) cell_large_graphic_popup_pane_g1_ParamLimits

0x8edd,	// (0x00034ba2) cell_large_graphic_popup_pane_g1

0x1055,	// (0x0002cd1a) cell_large_graphic_popup_pane_g2_ParamLimits

0x1055,	// (0x0002cd1a) cell_large_graphic_popup_pane_g2

0x1061,	// (0x0002cd26) cell_large_graphic_popup_pane_g3_ParamLimits

0x1061,	// (0x0002cd26) cell_large_graphic_popup_pane_g3

0x106e,	// (0x0002cd33) cell_large_graphic_popup_pane_g4_ParamLimits

0x106e,	// (0x0002cd33) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x0003afe2) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x0003afe2) cell_large_graphic_popup_pane_g

0x107e,	// (0x0002cd43) grid_highlight_pane_cp010

0xe7db,	// (0x0003a4a0) bg_popup_call_pane_g1

0x1088,	// (0x0002cd4d) list_single_graphic_popup_conf_pane_ParamLimits

0x1088,	// (0x0002cd4d) list_single_graphic_popup_conf_pane

0x109b,	// (0x0002cd60) list_highlight_pane_cp01

0x10a4,	// (0x0002cd69) list_single_graphic_popup_conf_pane_g1

0x10ac,	// (0x0002cd71) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x0003afeb) list_single_graphic_popup_conf_pane_g

0x10b4,	// (0x0002cd79) list_single_graphic_popup_conf_pane_t1

0x10c2,	// (0x0002cd87) linegrid_cams_pane_g1

0x8ee9,	// (0x00034bae) linegrid_cams_pane_g2

0xe9b7,	// (0x0003a67c) linegrid_cams_pane_g3

0x10cb,	// (0x0002cd90) linegrid_cams_pane_g4

0x8ef2,	// (0x00034bb7) linegrid_cams_pane_g5

0x8efb,	// (0x00034bc0) linegrid_cams_pane_g6

0xea67,	// (0x0003a72c) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x0003aff0) linegrid_cams_pane_g

0x10d4,	// (0x0002cd99) popup_clock_analogue_window

0x10d4,	// (0x0002cd99) popup_clock_digital_window

0xe568,	// (0x0003a22d) popup_phob_thumbnail_window

0xe7db,	// (0x0003a4a0) call_video_uplink_pane_g1

0x10dd,	// (0x0002cda2) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x0003afff) call_video_uplink_pane_g

0xea34,	// (0x0003a6f9) video_uplink_pane

0x10e5,	// (0x0002cdaa) mce_image_pane_g1

0x8f04,	// (0x00034bc9) mce_image_pane_g2

0x8f0c,	// (0x00034bd1) mce_image_pane_g3

0x8f14,	// (0x00034bd9) mce_image_pane_g4

0x8f1c,	// (0x00034be1) mce_image_pane_g5

0x0004,

0xf33f,	// (0x0003b004) mce_image_pane_g

0x10ef,	// (0x0002cdb4) control_top_pane_stacon_cp01_ParamLimits

0x10ef,	// (0x0002cdb4) control_top_pane_stacon_cp01

0x10ff,	// (0x0002cdc4) uni_indicator_pane_stacon_cp01_ParamLimits

0x10ff,	// (0x0002cdc4) uni_indicator_pane_stacon_cp01

0x1110,	// (0x0002cdd5) bg_popup_sub_pane_cp03

0x111a,	// (0x0002cddf) chi_dic_find_pane

0x8f24,	// (0x00034be9) listscroll_chi_dic_pane

0x1122,	// (0x0002cde7) main_pane_chidic_g1

0x112a,	// (0x0002cdef) chi_dic_find_pane_t1

0x1138,	// (0x0002cdfd) find_chidic_pane

0x1141,	// (0x0002ce06) chi_dic_list_pane_ParamLimits

0x1141,	// (0x0002ce06) chi_dic_list_pane

0x1152,	// (0x0002ce17) scroll_pane_cp020

0x115a,	// (0x0002ce1f) find_chidic_pane_t1

0xe568,	// (0x0003a22d) input_focus_pane_cp06

0x8f36,	// (0x00034bfb) list_chi_dic_pane_ParamLimits

0x8f36,	// (0x00034bfb) list_chi_dic_pane

0x8f49,	// (0x00034c0e) list_chi_dic_pane_t1_ParamLimits

0x8f49,	// (0x00034c0e) list_chi_dic_pane_t1

0xe568,	// (0x0003a22d) list_highlight_pane_cp020

0x1169,	// (0x0002ce2e) bg_cale_heading_pane_g1

0x8f5c,	// (0x00034c21) bg_cale_heading_pane_g2

0x8f64,	// (0x00034c29) bg_cale_heading_pane_g3

0x8f6c,	// (0x00034c31) bg_cale_heading_pane_g4

0x8f74,	// (0x00034c39) bg_cale_heading_pane_g5

0x8f7c,	// (0x00034c41) bg_cale_heading_pane_g6

0x8f84,	// (0x00034c49) bg_cale_heading_pane_g7

0x8f8c,	// (0x00034c51) bg_cale_heading_pane_g8

0x8f94,	// (0x00034c59) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x0003b00f) bg_cale_heading_pane_g

0x1169,	// (0x0002ce2e) bg_cale_side_pane_g1

0x8f9c,	// (0x00034c61) bg_cale_side_pane_g2

0x8fa4,	// (0x00034c69) bg_cale_side_pane_g3

0x8fac,	// (0x00034c71) bg_cale_side_pane_g4

0x8fb4,	// (0x00034c79) bg_cale_side_pane_g5

0x8fbc,	// (0x00034c81) bg_cale_side_pane_g6

0x8fc4,	// (0x00034c89) bg_cale_side_pane_g7

0x8fcc,	// (0x00034c91) bg_cale_side_pane_g8

0x8fd4,	// (0x00034c99) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x0003b022) bg_cale_side_pane_g

0x8fdc,	// (0x00034ca1) popup_call_status_window_ParamLimits

0x8fdc,	// (0x00034ca1) popup_call_status_window

0x1171,	// (0x0002ce36) stacon_top_pane

0x1179,	// (0x0002ce3e) status_pane_ParamLimits

0x1179,	// (0x0002ce3e) status_pane

0x1193,	// (0x0002ce58) status_small_pane

0x119b,	// (0x0002ce60) control_pane

0xe568,	// (0x0003a22d) stacon_bottom_pane

0x11a3,	// (0x0002ce68) list_single_mce_smart_pane_t1_ParamLimits

0x11a3,	// (0x0002ce68) list_single_mce_smart_pane_t1

0x11b6,	// (0x0002ce7b) list_single_mce_smart_pane_t2_ParamLimits

0x11b6,	// (0x0002ce7b) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x0003b035) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x0003b035) list_single_mce_smart_pane_t

0x8feb,	// (0x00034cb0) compass_pane

0x8ff4,	// (0x00034cb9) main_location2_pane_t1

0x900a,	// (0x00034ccf) main_location2_pane_t2

0x9020,	// (0x00034ce5) main_location2_pane_t3

0x0003,

0xf375,	// (0x0003b03a) main_location2_pane_t

0x11de,	// (0x0002cea3) compass_pane_g1_ParamLimits

0x11de,	// (0x0002cea3) compass_pane_g1

0x9068,	// (0x00034d2d) compass_pane_t1

0x9077,	// (0x00034d3c) compass_pane_t2

0x0005,

0xf37e,	// (0x0003b043) compass_pane_t

0x90be,	// (0x00034d83) text_secondary_cp61

0x122c,	// (0x0002cef1) navi_pane_cams_g5

0x1278,	// (0x0002cf3d) navi_pane_im_t1

0x1286,	// (0x0002cf4b) navi_pane_mp_g1_ParamLimits

0x1286,	// (0x0002cf4b) navi_pane_mp_g1

0x129a,	// (0x0002cf5f) navi_pane_mp_g2_ParamLimits

0x129a,	// (0x0002cf5f) navi_pane_mp_g2

0x12a6,	// (0x0002cf6b) navi_pane_mp_g3_ParamLimits

0x12a6,	// (0x0002cf6b) navi_pane_mp_g3

0x0002,

0xf392,	// (0x0003b057) navi_pane_mp_g_ParamLimits

0xf392,	// (0x0003b057) navi_pane_mp_g

0x12b2,	// (0x0002cf77) navi_pane_mp_t1

0x12c0,	// (0x0002cf85) navi_pane_mp_t2

0x0002,

0xf399,	// (0x0003b05e) navi_pane_mp_t

0x132b,	// (0x0002cff0) navi_pane_vt_g1

0x12b2,	// (0x0002cf77) navi_pane_vt_t1

0x1333,	// (0x0002cff8) navi_slider_pane

0xea78,	// (0x0003a73d) zooming_pane

0x133b,	// (0x0002d000) navi_slider_pane_g1

0x9140,	// (0x00034e05) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x0003b065) navi_slider_pane_g

0x1371,	// (0x0002d036) aid_levels_zoom

0x1379,	// (0x0002d03e) zooming_pane_g1

0x1381,	// (0x0002d046) zooming_pane_g2

0x1381,	// (0x0002d046) zooming_pane_g3

0x0002,

0xf3af,	// (0x0003b074) zooming_pane_g

0x1389,	// (0x0002d04e) level_10_zoom

0x1392,	// (0x0002d057) level_11_zoom

0x139b,	// (0x0002d060) level_1_zoom

0x13a4,	// (0x0002d069) level_2_zoom

0x13ad,	// (0x0002d072) level_3_zoom

0x13b6,	// (0x0002d07b) level_4_zoom

0x13bf,	// (0x0002d084) level_5_zoom

0x13c8,	// (0x0002d08d) level_6_zoom

0x13d1,	// (0x0002d096) level_7_zoom

0x13da,	// (0x0002d09f) level_8_zoom

0x13e3,	// (0x0002d0a8) level_9_zoom

0x13f4,	// (0x0002d0b9) popup_phob_thumbnail_window_g1

0x13fc,	// (0x0002d0c1) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x0003b07b) popup_phob_thumbnail_window_g

0x286e,	// (0x0002e533) level_1_location

0x2876,	// (0x0002e53b) level_2_location

0x287e,	// (0x0002e543) level_3_location

0x2886,	// (0x0002e54b) level_4_location

0xea78,	// (0x0003a73d) level_5_location

0x9152,	// (0x00034e17) mce_icon_pane_g1

0x915a,	// (0x00034e1f) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x0003b080) mce_icon_pane_g

0x9162,	// (0x00034e27) main_mup_pane_g1_ParamLimits

0x9162,	// (0x00034e27) main_mup_pane_g1

0xe859,	// (0x0003a51e) main_mup_pane_g2_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g2

0xe859,	// (0x0003a51e) main_mup_pane_g3_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g3

0xe859,	// (0x0003a51e) main_mup_pane_g4_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g4

0xe859,	// (0x0003a51e) main_mup_pane_g5_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g5

0xe859,	// (0x0003a51e) main_mup_pane_g6_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g6

0xe859,	// (0x0003a51e) main_mup_pane_g7_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g7

0xe859,	// (0x0003a51e) main_mup_pane_g8_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g8

0xe859,	// (0x0003a51e) main_mup_pane_g9_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g9

0xe859,	// (0x0003a51e) main_mup_pane_g10_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g10

0xe859,	// (0x0003a51e) main_mup_pane_g11_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g11

0xe84b,	// (0x0003a510) main_mup_pane_g12_ParamLimits

0xe84b,	// (0x0003a510) main_mup_pane_g12

0xe859,	// (0x0003a51e) main_mup_pane_g13_ParamLimits

0xe859,	// (0x0003a51e) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x0003b085) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x0003b085) main_mup_pane_g

0xe867,	// (0x0003a52c) main_mup_pane_t1_ParamLimits

0xe867,	// (0x0003a52c) main_mup_pane_t1

0xe867,	// (0x0003a52c) main_mup_pane_t2_ParamLimits

0xe867,	// (0x0003a52c) main_mup_pane_t2

0xe867,	// (0x0003a52c) main_mup_pane_t3_ParamLimits

0xe867,	// (0x0003a52c) main_mup_pane_t3

0x1426,	// (0x0002d0eb) main_mup_pane_t4_ParamLimits

0x1426,	// (0x0002d0eb) main_mup_pane_t4

0x1426,	// (0x0002d0eb) main_mup_pane_t5_ParamLimits

0x1426,	// (0x0002d0eb) main_mup_pane_t5

0xf03c,	// (0x0003ad01) main_mup_pane_t6_ParamLimits

0xf03c,	// (0x0003ad01) main_mup_pane_t6

0x0005,

0xf3db,	// (0x0003b0a0) main_mup_pane_t_ParamLimits

0xf3db,	// (0x0003b0a0) main_mup_pane_t

0xf050,	// (0x0003ad15) mup_progress_pane_ParamLimits

0xf050,	// (0x0003ad15) mup_progress_pane

0x2b99,	// (0x0002e85e) mup_visualizer_pane_ParamLimits

0x2b99,	// (0x0002e85e) mup_visualizer_pane

0x2b99,	// (0x0002e85e) mup_volume_pane_ParamLimits

0x2b99,	// (0x0002e85e) mup_volume_pane

0xe84b,	// (0x0003a510) mup_visualizer_pane_g1_ParamLimits

0xe84b,	// (0x0003a510) mup_visualizer_pane_g1

0x1456,	// (0x0002d11b) mup_visualizer_pane_g2_ParamLimits

0x1456,	// (0x0002d11b) mup_visualizer_pane_g2

0xe83d,	// (0x0003a502) mup_visualizer_pane_g3_ParamLimits

0xe83d,	// (0x0003a502) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x0003b0ad) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x0003b0ad) mup_visualizer_pane_g

0xead2,	// (0x0003a797) mup_volume_pane_g1

0xead2,	// (0x0003a797) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x0003b0b4) mup_volume_pane_g

0xead2,	// (0x0003a797) mup_progress_pane_g1

0xead2,	// (0x0003a797) mup_progress_pane_g2

0xead2,	// (0x0003a797) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x0003b0b9) mup_progress_pane_g

0xe568,	// (0x0003a22d) bg_popup_window_pane_cp05

0x1464,	// (0x0002d129) heading_pane_cp02_ParamLimits

0x1464,	// (0x0002d129) heading_pane_cp02

0x147e,	// (0x0002d143) list_popup_blid_pane

0x1486,	// (0x0002d14b) list_blid_sat_info_pane_ParamLimits

0x1486,	// (0x0002d14b) list_blid_sat_info_pane

0x1499,	// (0x0002d15e) list_blid_sat_info_pane_g1

0x14a1,	// (0x0002d166) list_blid_sat_info_pane_t1

0x9245,	// (0x00034f0a) mup_equalizer_pane_ParamLimits

0x9245,	// (0x00034f0a) mup_equalizer_pane

0x925e,	// (0x00034f23) mup_equalizer_pane_cp1_ParamLimits

0x925e,	// (0x00034f23) mup_equalizer_pane_cp1

0x9277,	// (0x00034f3c) mup_equalizer_pane_cp2_ParamLimits

0x9277,	// (0x00034f3c) mup_equalizer_pane_cp2

0x9290,	// (0x00034f55) mup_equalizer_pane_cp3_ParamLimits

0x9290,	// (0x00034f55) mup_equalizer_pane_cp3

0x92a9,	// (0x00034f6e) mup_equalizer_pane_cp4_ParamLimits

0x92a9,	// (0x00034f6e) mup_equalizer_pane_cp4

0x92c2,	// (0x00034f87) mup_equalizer_pane_cp5

0x92d4,	// (0x00034f99) mup_equalizer_pane_cp6

0x92e6,	// (0x00034fab) mup_equalizer_pane_cp7

0x274c,	// (0x0002e411) bg_popup_call_poc_act_pane_g9

0x2754,	// (0x0002e419) bg_popup_call_poc_act_pane_g10

0x275c,	// (0x0002e421) bg_popup_call_poc_act_pane_g11

0x000a,

0xe7c3,	// (0x0003a488) mup_scale_pane

0xe7db,	// (0x0003a4a0) mup_scale_pane_g1

0x14af,	// (0x0002d174) mup_scale_pane_g2

0x0006,

0xf410,	// (0x0003b0d5) mup_scale_pane_g

0x14d3,	// (0x0002d198) msg_data_pane

0x14db,	// (0x0002d1a0) scroll_pane_cp017

0x6365,	// (0x0003202a) bg_list_pane_cp04_ParamLimits

0x6365,	// (0x0003202a) bg_list_pane_cp04

0x14eb,	// (0x0002d1b0) msg_data_pane_g1

0x8f04,	// (0x00034bc9) msg_data_pane_g2

0x8f0c,	// (0x00034bd1) msg_data_pane_g3

0x930a,	// (0x00034fcf) msg_data_pane_g4

0x8f1c,	// (0x00034be1) msg_data_pane_g5

0x9152,	// (0x00034e17) msg_data_pane_g6

0x9312,	// (0x00034fd7) msg_data_pane_g7

0x0006,

0xf41f,	// (0x0003b0e4) msg_data_pane_g

0x6385,	// (0x0003204a) msg_text_pane_ParamLimits

0x6385,	// (0x0003204a) msg_text_pane

0x931a,	// (0x00034fdf) qrid_highlight_pane_cp011_ParamLimits

0x931a,	// (0x00034fdf) qrid_highlight_pane_cp011

0xe568,	// (0x0003a22d) msg_body_pane

0xe568,	// (0x0003a22d) msg_header_pane

0x14fc,	// (0x0002d1c1) input_focus_pane_cp07

0x63bd,	// (0x00032082) msg_header_pane_t1_ParamLimits

0x63bd,	// (0x00032082) msg_header_pane_t1

0x63d3,	// (0x00032098) msg_header_pane_t2_ParamLimits

0x63d3,	// (0x00032098) msg_header_pane_t2

0x0001,

0xf433,	// (0x0003b0f8) msg_header_pane_t_ParamLimits

0xf433,	// (0x0003b0f8) msg_header_pane_t

0x153e,	// (0x0002d203) msg_body_pane_g1

0x63ea,	// (0x000320af) msg_body_pane_t1_ParamLimits

0x63ea,	// (0x000320af) msg_body_pane_t1

0x6415,	// (0x000320da) msg_body_pane_t2_ParamLimits

0x6415,	// (0x000320da) msg_body_pane_t2

0x6427,	// (0x000320ec) msg_body_pane_t3_ParamLimits

0x6427,	// (0x000320ec) msg_body_pane_t3

0x0002,

0xf438,	// (0x0003b0fd) msg_body_pane_t_ParamLimits

0xf438,	// (0x0003b0fd) msg_body_pane_t

0x937e,	// (0x00035043) main_viewer_pane_g1_ParamLimits

0x937e,	// (0x00035043) main_viewer_pane_g1

0x938a,	// (0x0003504f) main_viewer_pane_g2_ParamLimits

0x938a,	// (0x0003504f) main_viewer_pane_g2

0x9396,	// (0x0003505b) main_viewer_pane_g3_ParamLimits

0x9396,	// (0x0003505b) main_viewer_pane_g3

0x93a5,	// (0x0003506a) main_viewer_pane_g4_ParamLimits

0x93a5,	// (0x0003506a) main_viewer_pane_g4

0x93b4,	// (0x00035079) main_viewer_pane_g5_ParamLimits

0x93b4,	// (0x00035079) main_viewer_pane_g5

0x93b4,	// (0x00035079) main_viewer_pane_g7_ParamLimits

0x93b4,	// (0x00035079) main_viewer_pane_g7

0x93c6,	// (0x0003508b) main_viewer_pane_g8_ParamLimits

0x93c6,	// (0x0003508b) main_viewer_pane_g8

0x0007,

0xf448,	// (0x0003b10d) main_viewer_pane_g_ParamLimits

0xf448,	// (0x0003b10d) main_viewer_pane_g

0x15d7,	// (0x0002d29c) viewer_content_pane_ParamLimits

0x15d7,	// (0x0002d29c) viewer_content_pane

0x93f6,	// (0x000350bb) main_postcard_pane_g1_ParamLimits

0x93f6,	// (0x000350bb) main_postcard_pane_g1

0x9402,	// (0x000350c7) main_postcard_pane_g2_ParamLimits

0x9402,	// (0x000350c7) main_postcard_pane_g2

0x940e,	// (0x000350d3) main_postcard_pane_g3_ParamLimits

0x940e,	// (0x000350d3) main_postcard_pane_g3

0x0005,

0xf459,	// (0x0003b11e) main_postcard_pane_g_ParamLimits

0xf459,	// (0x0003b11e) main_postcard_pane_g

0x941a,	// (0x000350df) main_postcard_pane_g4

0x298c,	// (0x0002e651) smil_status_volume_pane_g2

0x943e,	// (0x00035103) postcard_pane_ParamLimits

0x943e,	// (0x00035103) postcard_pane

0x1e81,	// (0x0002db46) postcard_pane_g1_ParamLimits

0x1e81,	// (0x0002db46) postcard_pane_g1

0x946e,	// (0x00035133) postcard_pane_g2_ParamLimits

0x946e,	// (0x00035133) postcard_pane_g2

0x947a,	// (0x0003513f) postcard_pane_g3_ParamLimits

0x947a,	// (0x0003513f) postcard_pane_g3

0x15f3,	// (0x0002d2b8) postcard_pane_g4_ParamLimits

0x15f3,	// (0x0002d2b8) postcard_pane_g4

0x9486,	// (0x0003514b) postcard_pane_g5_ParamLimits

0x9486,	// (0x0003514b) postcard_pane_g5

0x9492,	// (0x00035157) postcard_pane_g6_ParamLimits

0x9492,	// (0x00035157) postcard_pane_g6

0x15e5,	// (0x0002d2aa) postcard_pane_g7_ParamLimits

0x15e5,	// (0x0002d2aa) postcard_pane_g7

0x0006,

0xf466,	// (0x0003b12b) postcard_pane_g_ParamLimits

0xf466,	// (0x0003b12b) postcard_pane_g

0x949e,	// (0x00035163) main_mp2_pane_g1_ParamLimits

0x949e,	// (0x00035163) main_mp2_pane_g1

0x94aa,	// (0x0003516f) main_mp2_pane_g2_ParamLimits

0x94aa,	// (0x0003516f) main_mp2_pane_g2

0x94b6,	// (0x0003517b) main_mp2_pane_g3_ParamLimits

0x94b6,	// (0x0003517b) main_mp2_pane_g3

0x0002,

0xf475,	// (0x0003b13a) main_mp2_pane_g_ParamLimits

0xf475,	// (0x0003b13a) main_mp2_pane_g

0x94c2,	// (0x00035187) main_mp2_pane_t1_ParamLimits

0x94c2,	// (0x00035187) main_mp2_pane_t1

0x94d7,	// (0x0003519c) main_mp2_pane_t2_ParamLimits

0x94d7,	// (0x0003519c) main_mp2_pane_t2

0x94e9,	// (0x000351ae) main_mp2_pane_t3_ParamLimits

0x94e9,	// (0x000351ae) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x0003b141) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x0003b141) main_mp2_pane_t

0x1601,	// (0x0002d2c6) pec_content_pane_ParamLimits

0x1601,	// (0x0002d2c6) pec_content_pane

0xec40,	// (0x0003a905) scroll_pane_cp015

0x1613,	// (0x0002d2d8) pec_attribute_pane_ParamLimits

0x1613,	// (0x0002d2d8) pec_attribute_pane

0x94fb,	// (0x000351c0) pec_content_pane_g1_ParamLimits

0x94fb,	// (0x000351c0) pec_content_pane_g1

0x1623,	// (0x0002d2e8) pec_content_pane_t1_ParamLimits

0x1623,	// (0x0002d2e8) pec_content_pane_t1

0x1635,	// (0x0002d2fa) pec_content_pane_t2_ParamLimits

0x1635,	// (0x0002d2fa) pec_content_pane_t2

0x0001,

0xf483,	// (0x0003b148) pec_content_pane_t_ParamLimits

0xf483,	// (0x0003b148) pec_content_pane_t

0x9507,	// (0x000351cc) list_single_graphic_pane_cp01_ParamLimits

0x9507,	// (0x000351cc) list_single_graphic_pane_cp01

0xe7c3,	// (0x0003a488) bg_popup_sub_pane_cp04

0x1647,	// (0x0002d30c) popup_mup_playback_window_g1

0x1653,	// (0x0002d318) popup_mup_playback_window_t1

0x1668,	// (0x0002d32d) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x0003b14d) popup_mup_playback_window_t

0x169f,	// (0x0002d364) main_image_pane_g1_ParamLimits

0x169f,	// (0x0002d364) main_image_pane_g1

0x16e2,	// (0x0002d3a7) scroll_pane_cp018_ParamLimits

0x16e2,	// (0x0002d3a7) scroll_pane_cp018

0x16fa,	// (0x0002d3bf) scroll_pane_cp016_ParamLimits

0x16fa,	// (0x0002d3bf) scroll_pane_cp016

0x958c,	// (0x00035251) smil2_image_pane_ParamLimits

0x958c,	// (0x00035251) smil2_image_pane

0x95b4,	// (0x00035279) smil2_root_pane_ParamLimits

0x95b4,	// (0x00035279) smil2_root_pane

0x95e0,	// (0x000352a5) smil2_text_pane_ParamLimits

0x95e0,	// (0x000352a5) smil2_text_pane

0xe568,	// (0x0003a22d) bg_list_pane_cp06

0x1736,	// (0x0002d3fb) grid_radio_pane

0xe568,	// (0x0003a22d) bg_popup_window_pane_cp06

0x173e,	// (0x0002d403) main_fmradio_pane_t1

0x102b,	// (0x0002ccf0) heading_pane_cp04

0x174c,	// (0x0002d411) main_fmradio_pane_t2

0x27a4,	// (0x0002e469) popup_cale_lunar_info_window_g1

0x175a,	// (0x0002d41f) main_fmradio_pane_t3

0x27ac,	// (0x0002e471) popup_cale_lunar_info_window_g2

0x1768,	// (0x0002d42d) main_fmradio_pane_t4

0x0001,

0x1776,	// (0x0002d43b) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x0003b240) popup_cale_lunar_info_window_g

0xf49d,	// (0x0003b162) main_fmradio_pane_t

0x1784,	// (0x0002d449) wait_bar_pane_cp03

0x178c,	// (0x0002d451) cell_fmradio_pane_ParamLimits

0x178c,	// (0x0002d451) cell_fmradio_pane

0x15e5,	// (0x0002d2aa) cell_fmradio_pane_g1_ParamLimits

0x15e5,	// (0x0002d2aa) cell_fmradio_pane_g1

0xe568,	// (0x0003a22d) grid_highlight_pane_cp011

0x179f,	// (0x0002d464) poc_content_pane_ParamLimits

0x179f,	// (0x0002d464) poc_content_pane

0x17b2,	// (0x0002d477) scroll_pane_cp019

0x9614,	// (0x000352d9) popup_call_poc_act_window_ParamLimits

0x9614,	// (0x000352d9) popup_call_poc_act_window

0x9621,	// (0x000352e6) popup_call_poc_inact_window_ParamLimits

0x9621,	// (0x000352e6) popup_call_poc_inact_window

0xf53f,	// (0x0003b204) bg_popup_call_poc_act_pane_g

0x2764,	// (0x0002e429) bg_popup_call_poc_inact_pane_g1

0x276c,	// (0x0002e431) bg_popup_call_poc_inact_pane_g2

0x17ba,	// (0x0002d47f) popup_call_poc_act_window_g2

0x2774,	// (0x0002e439) bg_popup_call_poc_inact_pane_g3

0x2724,	// (0x0002e3e9) bg_popup_call_poc_inact_pane_g4

0x277c,	// (0x0002e441) bg_popup_call_poc_inact_pane_g5

0x17c2,	// (0x0002d487) popup_call_poc_act_window_t1_ParamLimits

0x17c2,	// (0x0002d487) popup_call_poc_act_window_t1

0x17ea,	// (0x0002d4af) popup_call_poc_act_window_t2_ParamLimits

0x17ea,	// (0x0002d4af) popup_call_poc_act_window_t2

0x1812,	// (0x0002d4d7) popup_call_poc_act_window_t3_ParamLimits

0x1812,	// (0x0002d4d7) popup_call_poc_act_window_t3

0x183a,	// (0x0002d4ff) popup_call_poc_act_window_t4_ParamLimits

0x183a,	// (0x0002d4ff) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x0003b16d) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x0003b16d) popup_call_poc_act_window_t

0x2784,	// (0x0002e449) bg_popup_call_poc_inact_pane_g6

0x278c,	// (0x0002e451) bg_popup_call_poc_inact_pane_g7

0x2794,	// (0x0002e459) bg_popup_call_poc_inact_pane_g8

0x184c,	// (0x0002d511) popup_call_poc_inact_window_g2

0x279c,	// (0x0002e461) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x0003b21b) bg_popup_call_poc_inact_pane_g

0x1854,	// (0x0002d519) popup_call_poc_inact_window_t1_ParamLimits

0x1854,	// (0x0002d519) popup_call_poc_inact_window_t1

0x1869,	// (0x0002d52e) popup_call_poc_inact_window_t2_ParamLimits

0x1869,	// (0x0002d52e) popup_call_poc_inact_window_t2

0x187e,	// (0x0002d543) popup_call_poc_inact_window_t3_ParamLimits

0x187e,	// (0x0002d543) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x0003b176) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x0003b176) popup_call_poc_inact_window_t

0x292d,	// (0x0002e5f2) context_pane_ParamLimits

0x9b6b,	// (0x00035830) signal_pane_ParamLimits

0xea78,	// (0x0003a73d) main_call2_pane

0x9aed,	// (0x000357b2) popup_phob_thumbnail2_window_ParamLimits

0x9aed,	// (0x000357b2) popup_phob_thumbnail2_window

0x9330,	// (0x00034ff5) aid_hotspot_pointer_arrow_pane

0x9338,	// (0x00034ffd) aid_hotspot_pointer_hand_pane

0x98d0,	// (0x00035595) phob_pre_status_pane_g5

0x143a,	// (0x0002d0ff) cams_zoom_pane_ParamLimits

0x7c97,	// (0x0003395c) image_vga_pane_ParamLimits

0xe84b,	// (0x0003a510) main_camera_pane_g1_ParamLimits

0xe84b,	// (0x0003a510) main_camera_pane_g2_ParamLimits

0xe84b,	// (0x0003a510) main_camera_pane_g3_ParamLimits

0xe84b,	// (0x0003a510) main_camera_pane_g4_ParamLimits

0xe84b,	// (0x0003a510) main_camera_pane_g5_ParamLimits

0xe84b,	// (0x0003a510) main_camera_pane_g6_ParamLimits

0xe84b,	// (0x0003a510) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0003ae8a) main_camera_pane_g_ParamLimits

0x1426,	// (0x0002d0eb) main_camera_pane_t1_ParamLimits

0x1426,	// (0x0002d0eb) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0003ae9b) main_camera_pane_t_ParamLimits

0xe7c3,	// (0x0003a488) bg_popup_preview_window_pane_cp01_ParamLimits

0xe7c3,	// (0x0003a488) bg_popup_preview_window_pane_cp01

0x1893,	// (0x0002d558) popup_phob_thumbnail2_window_g1_ParamLimits

0x1893,	// (0x0002d558) popup_phob_thumbnail2_window_g1

0xe568,	// (0x0003a22d) call2_cli_visual_pane

0x963d,	// (0x00035302) popup_call2_audio_conf_window_ParamLimits

0x963d,	// (0x00035302) popup_call2_audio_conf_window

0x9650,	// (0x00035315) popup_call2_audio_first_window_ParamLimits

0x9650,	// (0x00035315) popup_call2_audio_first_window

0x96cc,	// (0x00035391) popup_call2_audio_in_window_ParamLimits

0x96cc,	// (0x00035391) popup_call2_audio_in_window

0x96fc,	// (0x000353c1) popup_call2_audio_out_window_ParamLimits

0x96fc,	// (0x000353c1) popup_call2_audio_out_window

0x9748,	// (0x0003540d) popup_call2_audio_second_window_ParamLimits

0x9748,	// (0x0003540d) popup_call2_audio_second_window

0x9794,	// (0x00035459) popup_call2_audio_wait_window_ParamLimits

0x9794,	// (0x00035459) popup_call2_audio_wait_window

0xe568,	// (0x0003a22d) bg_popup_call2_act_pane_cp03

0x189f,	// (0x0002d564) list_conf_pane_cp

0x18a7,	// (0x0002d56c) popup_call2_audio_conf_window_t1

0x1088,	// (0x0002cd4d) list_single_graphic_popup_conf2_pane_ParamLimits

0x1088,	// (0x0002cd4d) list_single_graphic_popup_conf2_pane

0x109b,	// (0x0002cd60) list_highlight_pane_cp04

0x18b5,	// (0x0002d57a) list_single_graphic_popup_conf2_pane_g1

0x10ac,	// (0x0002cd71) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x0003b17d) list_single_graphic_popup_conf2_pane_g

0x18bd,	// (0x0002d582) list_single_graphic_popup_conf2_pane_t1

0x18cb,	// (0x0002d590) bg_popup_call2_act_pane_cp01_ParamLimits

0x18cb,	// (0x0002d590) bg_popup_call2_act_pane_cp01

0x1955,	// (0x0002d61a) call_type_pane_cp05_ParamLimits

0x1955,	// (0x0002d61a) call_type_pane_cp05

0x19a9,	// (0x0002d66e) popup_call2_audio_second_window_g1_ParamLimits

0x19a9,	// (0x0002d66e) popup_call2_audio_second_window_g1

0x19fd,	// (0x0002d6c2) popup_call2_audio_second_window_g2_ParamLimits

0x19fd,	// (0x0002d6c2) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x0003b182) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x0003b182) popup_call2_audio_second_window_g

0x1a62,	// (0x0002d727) popup_call2_audio_second_window_t1_ParamLimits

0x1a62,	// (0x0002d727) popup_call2_audio_second_window_t1

0x1b1d,	// (0x0002d7e2) popup_call2_audio_second_window_t2_ParamLimits

0x1b1d,	// (0x0002d7e2) popup_call2_audio_second_window_t2

0x1b70,	// (0x0002d835) popup_call2_audio_second_window_t3_ParamLimits

0x1b70,	// (0x0002d835) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x0003b189) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x0003b189) popup_call2_audio_second_window_t

0xe568,	// (0x0003a22d) bg_popup_call2_in_pane_cp02

0x1c63,	// (0x0002d928) call_type_pane_cp04

0x1c6b,	// (0x0002d930) popup_call2_audio_wait_window_g1

0x1c73,	// (0x0002d938) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x0003b192) popup_call2_audio_wait_window_g

0x1c7b,	// (0x0002d940) popup_call2_audio_wait_window_t3

0x1c89,	// (0x0002d94e) bg_popup_call2_act_pane_ParamLimits

0x1c89,	// (0x0002d94e) bg_popup_call2_act_pane

0x1d49,	// (0x0002da0e) call_type_pane_cp03_ParamLimits

0x1d49,	// (0x0002da0e) call_type_pane_cp03

0x1dad,	// (0x0002da72) popup_call2_audio_first_window_g1_ParamLimits

0x1dad,	// (0x0002da72) popup_call2_audio_first_window_g1

0x1e1d,	// (0x0002dae2) popup_call2_audio_first_window_g2_ParamLimits

0x1e1d,	// (0x0002dae2) popup_call2_audio_first_window_g2

0x1e81,	// (0x0002db46) popup_call2_audio_first_window_g3_ParamLimits

0x1e81,	// (0x0002db46) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x0003b197) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x0003b197) popup_call2_audio_first_window_g

0x1f09,	// (0x0002dbce) popup_call2_audio_first_window_t1_ParamLimits

0x1f09,	// (0x0002dbce) popup_call2_audio_first_window_t1

0x200c,	// (0x0002dcd1) popup_call2_audio_first_window_t4_ParamLimits

0x200c,	// (0x0002dcd1) popup_call2_audio_first_window_t4

0x20ef,	// (0x0002ddb4) popup_call2_audio_first_window_t5_ParamLimits

0x20ef,	// (0x0002ddb4) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x0003b1a2) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x0003b1a2) popup_call2_audio_first_window_t

0xe7bb,	// (0x0003a480) bg_popup_call2_act_pane_g1

0x27b4,	// (0x0002e479) popup_cale_lunar_info_window_t1

0x27c2,	// (0x0002e487) popup_cale_lunar_info_window_t2

0x27d0,	// (0x0002e495) popup_cale_lunar_info_window_t3

0xe568,	// (0x0003a22d) bg_popup_call2_bubble_pane

0x21f0,	// (0x0002deb5) bg_popup_call2_in_pane_cp01_ParamLimits

0x21f0,	// (0x0002deb5) bg_popup_call2_in_pane_cp01

0x1c63,	// (0x0002d928) call_type_pane_cp02

0x2238,	// (0x0002defd) popup_call2_audio_out_window_g1_ParamLimits

0x2238,	// (0x0002defd) popup_call2_audio_out_window_g1

0x2264,	// (0x0002df29) popup_call2_audio_out_window_g2_ParamLimits

0x2264,	// (0x0002df29) popup_call2_audio_out_window_g2

0x228c,	// (0x0002df51) popup_call2_audio_out_window_g3_ParamLimits

0x228c,	// (0x0002df51) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x0003b1ab) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x0003b1ab) popup_call2_audio_out_window_g

0x22c7,	// (0x0002df8c) popup_call2_audio_out_window_t1_ParamLimits

0x22c7,	// (0x0002df8c) popup_call2_audio_out_window_t1

0x2326,	// (0x0002dfeb) popup_call2_audio_out_window_t2_ParamLimits

0x2326,	// (0x0002dfeb) popup_call2_audio_out_window_t2

0x237a,	// (0x0002e03f) popup_call2_audio_out_window_t3_ParamLimits

0x237a,	// (0x0002e03f) popup_call2_audio_out_window_t3

0x2390,	// (0x0002e055) popup_call2_audio_out_window_t4_ParamLimits

0x2390,	// (0x0002e055) popup_call2_audio_out_window_t4

0x23a6,	// (0x0002e06b) popup_call2_audio_out_window_t5_ParamLimits

0x23a6,	// (0x0002e06b) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x0003b1b4) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x0003b1b4) popup_call2_audio_out_window_t

0x240a,	// (0x0002e0cf) bg_popup_call2_in_pane_ParamLimits

0x240a,	// (0x0002e0cf) bg_popup_call2_in_pane

0x2466,	// (0x0002e12b) popup_call2_audio_in_window_g1_ParamLimits

0x2466,	// (0x0002e12b) popup_call2_audio_in_window_g1

0x249e,	// (0x0002e163) popup_call2_audio_in_window_g2_ParamLimits

0x249e,	// (0x0002e163) popup_call2_audio_in_window_g2

0x24d6,	// (0x0002e19b) popup_call2_audio_in_window_g3_ParamLimits

0x24d6,	// (0x0002e19b) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x0003b1c1) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x0003b1c1) popup_call2_audio_in_window_g

0x252e,	// (0x0002e1f3) popup_call2_audio_in_window_t1_ParamLimits

0x252e,	// (0x0002e1f3) popup_call2_audio_in_window_t1

0x25ae,	// (0x0002e273) popup_call2_audio_in_window_t2_ParamLimits

0x25ae,	// (0x0002e273) popup_call2_audio_in_window_t2

0x262e,	// (0x0002e2f3) popup_call2_audio_in_window_t3_ParamLimits

0x262e,	// (0x0002e2f3) popup_call2_audio_in_window_t3

0x2648,	// (0x0002e30d) popup_call2_audio_in_window_t4_ParamLimits

0x2648,	// (0x0002e30d) popup_call2_audio_in_window_t4

0x265a,	// (0x0002e31f) popup_call2_audio_in_window_t5_ParamLimits

0x265a,	// (0x0002e31f) popup_call2_audio_in_window_t5

0x266f,	// (0x0002e334) popup_call2_audio_in_window_t6_ParamLimits

0x266f,	// (0x0002e334) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x0003b1ca) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x0003b1ca) popup_call2_audio_in_window_t

0xe7bb,	// (0x0003a480) bg_popup_call2_in_pane_g1

0x27de,	// (0x0002e4a3) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x0003b245) popup_cale_lunar_info_window_t

0xe7c3,	// (0x0003a488) bg_popup_call2_rect_pane_ParamLimits

0xe7c3,	// (0x0003a488) bg_popup_call2_rect_pane

0xe568,	// (0x0003a22d) call2_cli_visual_graphic_pane

0xe568,	// (0x0003a22d) call2_cli_visual_text_pane

0x9bc0,	// (0x00035885) smil_status_volume_pane_g3

0x0002,

0xe7db,	// (0x0003a4a0) call2_cli_visual_graphic_pane_g1

0xe7db,	// (0x0003a4a0) call2_cli_visual_graphic_pane_g2

0xe7db,	// (0x0003a4a0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x0003b1d7) call2_cli_visual_graphic_pane_g

0x2684,	// (0x0002e349) bg_popup_call2_rect_pane_g1

0xe99c,	// (0x0003a661) bg_popup_call2_rect_pane_g2

0x268c,	// (0x0002e351) bg_popup_call2_rect_pane_g3

0x2694,	// (0x0002e359) bg_popup_call2_rect_pane_g4

0x269c,	// (0x0002e361) bg_popup_call2_rect_pane_g5

0x26a4,	// (0x0002e369) bg_popup_call2_rect_pane_g6

0x26ac,	// (0x0002e371) bg_popup_call2_rect_pane_g7

0x26b4,	// (0x0002e379) bg_popup_call2_rect_pane_g8

0x26bc,	// (0x0002e381) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x0003b1de) bg_popup_call2_rect_pane_g

0x26c4,	// (0x0002e389) bg_popup_call2_bubble_pane_g1

0x26cc,	// (0x0002e391) bg_popup_call2_bubble_pane_g2

0x26d4,	// (0x0002e399) bg_popup_call2_bubble_pane_g3

0x26dc,	// (0x0002e3a1) bg_popup_call2_bubble_pane_g4

0x26e4,	// (0x0002e3a9) bg_popup_call2_bubble_pane_g5

0x26ec,	// (0x0002e3b1) bg_popup_call2_bubble_pane_g6

0x26f4,	// (0x0002e3b9) bg_popup_call2_bubble_pane_g7

0x26fc,	// (0x0002e3c1) bg_popup_call2_bubble_pane_g8

0x2704,	// (0x0002e3c9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x0003b1f1) bg_popup_call2_bubble_pane_g

0x76a7,	// (0x0003336c) aid_cale_week_size_cell_pane

0x7ca4,	// (0x00033969) aid_cams_cif_uncrop_pane_ParamLimits

0x7ca4,	// (0x00033969) aid_cams_cif_uncrop_pane

0x7def,	// (0x00033ab4) aid_cams_size_cell_ParamLimits

0x7def,	// (0x00033ab4) aid_cams_size_cell

0x7dfb,	// (0x00033ac0) grid_cams_pane_ParamLimits

0x7e07,	// (0x00033acc) linegrid_cams_pane_ParamLimits

0x7ec6,	// (0x00033b8b) call_video_pane_t1

0x7ee3,	// (0x00033ba8) call_video_pane_t2

0x0001,

0xf222,	// (0x0003aee7) call_video_pane_t

0x82c5,	// (0x00033f8a) aid_cale_month_size_cell_pane_ParamLimits

0x82c5,	// (0x00033f8a) aid_cale_month_size_cell_pane

0xf5c4,	// (0x0003b289) smil_status_volume_pane_g

0x9bcd,	// (0x00035892) volume_smil_pane_ParamLimits

0x7039,	// (0x00032cfe) aid_popup2_width_pane

0x75c1,	// (0x00033286) cell_qdial_pane_g4_ParamLimits

0x75c1,	// (0x00033286) cell_qdial_pane_g4

0x9048,	// (0x00034d0d) aid_blid_cardinal_pane_ParamLimits

0x9054,	// (0x00034d19) aid_blid_destination_pane_ParamLimits

0x9054,	// (0x00034d19) aid_blid_destination_pane

0xe7c3,	// (0x0003a488) bg_popup_call_poc_act_pane_ParamLimits

0xe7c3,	// (0x0003a488) bg_popup_call_poc_act_pane

0xe7c3,	// (0x0003a488) bg_popup_call_poc_inact_pane_ParamLimits

0xe7c3,	// (0x0003a488) bg_popup_call_poc_inact_pane

0x270c,	// (0x0002e3d1) bg_popup_call_poc_act_pane_g1

0x2714,	// (0x0002e3d9) bg_popup_call_poc_act_pane_g2

0x271c,	// (0x0002e3e1) bg_popup_call_poc_act_pane_g3

0x2724,	// (0x0002e3e9) bg_popup_call_poc_act_pane_g4

0x272c,	// (0x0002e3f1) bg_popup_call_poc_act_pane_g5

0x2734,	// (0x0002e3f9) bg_popup_call_poc_act_pane_g6

0x273c,	// (0x0002e401) bg_popup_call_poc_act_pane_g7

0x2744,	// (0x0002e409) bg_popup_call_poc_act_pane_g8

0xe568,	// (0x0003a22d) main_usb_pane

0x9a4c,	// (0x00035711) popup_cale_lunar_info_window

0x8168,	// (0x00033e2d) im_reading_pane_t1_ParamLimits

0xeb89,	// (0x0003a84e) list_im_pane_ParamLimits

0xeb9a,	// (0x0003a85f) scroll_pane_cp07_ParamLimits

0xe568,	// (0x0003a22d) grid_highlight_pane_cp012

0xe7c3,	// (0x0003a488) mup_scale_pane_ParamLimits

0x1e81,	// (0x0002db46) main_usb_pane_g1_ParamLimits

0x1e81,	// (0x0002db46) main_usb_pane_g1

0x97f5,	// (0x000354ba) main_usb_pane_g2_ParamLimits

0x97f5,	// (0x000354ba) main_usb_pane_g2

0x0001,

0xf569,	// (0x0003b22e) main_usb_pane_g_ParamLimits

0xf569,	// (0x0003b22e) main_usb_pane_g

0x9801,	// (0x000354c6) main_usb_pane_t1_ParamLimits

0x9801,	// (0x000354c6) main_usb_pane_t1

0x9813,	// (0x000354d8) main_usb_pane_t2_ParamLimits

0x9813,	// (0x000354d8) main_usb_pane_t2

0x9825,	// (0x000354ea) main_usb_pane_t3_ParamLimits

0x9825,	// (0x000354ea) main_usb_pane_t3

0x9837,	// (0x000354fc) main_usb_pane_t4_ParamLimits

0x9837,	// (0x000354fc) main_usb_pane_t4

0x9849,	// (0x0003550e) main_usb_pane_t5_ParamLimits

0x9849,	// (0x0003550e) main_usb_pane_t5

0x985b,	// (0x00035520) main_usb_pane_t6_ParamLimits

0x985b,	// (0x00035520) main_usb_pane_t6

0x0005,

0xf56e,	// (0x0003b233) main_usb_pane_t_ParamLimits

0x11d5,	// (0x0002ce9a) aid_text_placing

0x8ff4,	// (0x00034cb9) main_location2_pane_t1_ParamLimits

0x900a,	// (0x00034ccf) main_location2_pane_t2_ParamLimits

0x9020,	// (0x00034ce5) main_location2_pane_t3_ParamLimits

0x9036,	// (0x00034cfb) main_location2_pane_t4_ParamLimits

0x9036,	// (0x00034cfb) main_location2_pane_t4

0xf375,	// (0x0003b03a) main_location2_pane_t_ParamLimits

0xe7fe,	// (0x0003a4c3) find_pinb_pane_g2_ParamLimits

0xe7fe,	// (0x0003a4c3) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0003ad9f) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0003ad9f) find_pinb_pane_g

0xe80a,	// (0x0003a4cf) find_pinb_pane_t1_ParamLimits

0xe81c,	// (0x0003a4e1) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0003ada4) find_pinb_pane_t_ParamLimits

0xe568,	// (0x0003a22d) main_call3_pane

0x8669,	// (0x0003432e) cale_month_day_heading_pane_t1_ParamLimits

0x86ef,	// (0x000343b4) cale_month_day_heading_pane_t2_ParamLimits

0x8780,	// (0x00034445) cale_month_day_heading_pane_t3_ParamLimits

0x8811,	// (0x000344d6) cale_month_day_heading_pane_t4_ParamLimits

0x88a2,	// (0x00034567) cale_month_day_heading_pane_t5_ParamLimits

0x8933,	// (0x000345f8) cale_month_day_heading_pane_t6_ParamLimits

0x89c4,	// (0x00034689) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0003af1f) cale_month_day_heading_pane_t_ParamLimits

0x8ce4,	// (0x000349a9) smil_status_volume_pane

0x9456,	// (0x0003511b) postcard_address_pane_ParamLimits

0x9456,	// (0x0003511b) postcard_address_pane

0x9462,	// (0x00035127) postcard_message_pane_ParamLimits

0x9462,	// (0x00035127) postcard_message_pane

0x97d1,	// (0x00035496) call2_cli_visual_pane_t1_ParamLimits

0x97d1,	// (0x00035496) call2_cli_visual_pane_t1

0x9d1e,	// (0x000359e3) postcard_message_pane_t1_ParamLimits

0x9d1e,	// (0x000359e3) postcard_message_pane_t1

0x9d07,	// (0x000359cc) postcard_address_pane_t1_ParamLimits

0x9d07,	// (0x000359cc) postcard_address_pane_t1

0x9cfa,	// (0x000359bf) popup_call3_audio_in_window_ParamLimits

0x9cfa,	// (0x000359bf) popup_call3_audio_in_window

0x9be2,	// (0x000358a7) bg_popup_call3_in_pane_ParamLimits

0x9be2,	// (0x000358a7) bg_popup_call3_in_pane

0x9c40,	// (0x00035905) popup_call3_audio_in_window_g1_ParamLimits

0x9c40,	// (0x00035905) popup_call3_audio_in_window_g1

0x9c58,	// (0x0003591d) popup_call3_audio_in_window_g2_ParamLimits

0x9c58,	// (0x0003591d) popup_call3_audio_in_window_g2

0x9c70,	// (0x00035935) popup_call3_audio_in_window_g3_ParamLimits

0x9c70,	// (0x00035935) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x0003b290) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x0003b290) popup_call3_audio_in_window_g

0x9c98,	// (0x0003595d) popup_call3_audio_in_window_t1_ParamLimits

0x9c98,	// (0x0003595d) popup_call3_audio_in_window_t1

0x9cc0,	// (0x00035985) popup_call3_audio_in_window_t2_ParamLimits

0x9cc0,	// (0x00035985) popup_call3_audio_in_window_t2

0x9ce8,	// (0x000359ad) popup_call3_audio_in_window_t3_ParamLimits

0x9ce8,	// (0x000359ad) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x0003b299) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x0003b299) popup_call3_audio_in_window_t

0xea78,	// (0x0003a73d) bg_popup_call3_rect_pane

0x2684,	// (0x0002e349) bg_popup_call3_rect_pane_g1

0xe99c,	// (0x0003a661) bg_popup_call3_rect_pane_g2

0x268c,	// (0x0002e351) bg_popup_call3_rect_pane_g3

0x2694,	// (0x0002e359) bg_popup_call3_rect_pane_g4

0x269c,	// (0x0002e361) bg_popup_call3_rect_pane_g5

0x26a4,	// (0x0002e369) bg_popup_call3_rect_pane_g6

0x26ac,	// (0x0002e371) bg_popup_call3_rect_pane_g7

0xe14d,	// (0x00039e12) mup_visualizer_osc_pane

0xe14d,	// (0x00039e12) mup_visualizer_spec_pane

0x9c02,	// (0x000358c7) call3_video_qcif_pane_ParamLimits

0x9c02,	// (0x000358c7) call3_video_qcif_pane

0x9c12,	// (0x000358d7) call3_video_qcif_uncrop_pane_ParamLimits

0x9c12,	// (0x000358d7) call3_video_qcif_uncrop_pane

0x9c1e,	// (0x000358e3) call3_video_subqcif_pane_ParamLimits

0x9c1e,	// (0x000358e3) call3_video_subqcif_pane

0x9c30,	// (0x000358f5) call3_video_subqcif_uncrop_pane_ParamLimits

0x9c30,	// (0x000358f5) call3_video_subqcif_uncrop_pane

0x9c88,	// (0x0003594d) popup_call3_audio_in_window_g4_ParamLimits

0x9c88,	// (0x0003594d) popup_call3_audio_in_window_g4

0xe14d,	// (0x00039e12) mup_spec_half_pane

0xe14d,	// (0x00039e12) mup_spec_half_pane_cp

0xe14d,	// (0x00039e12) mup_osc_middle_pane

0xead2,	// (0x0003a797) mup_visualizer_osc_pane_g1

0x297a,	// (0x0002e63f) mup_spec_bar_pane_ParamLimits

0x297a,	// (0x0002e63f) mup_spec_bar_pane

0xead2,	// (0x0003a797) mup_spec_bar_pane_g1

0xead2,	// (0x0003a797) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x0003b0b4) mup_spec_bar_pane_g

0x76a7,	// (0x0003336c) aid_cale_week_size_cell_pane_ParamLimits

0x76bc,	// (0x00033381) bg_cale_heading_pane_ParamLimits

0xe9da,	// (0x0003a69f) bg_cale_pane_cp01_ParamLimits

0x76d4,	// (0x00033399) cale_week_corner_pane_ParamLimits

0x76ee,	// (0x000333b3) cale_week_day_heading_pane_ParamLimits

0x7706,	// (0x000333cb) cale_week_scroll_pane_g1_ParamLimits

0x7719,	// (0x000333de) cale_week_scroll_pane_g2_ParamLimits

0x772c,	// (0x000333f1) cale_week_scroll_pane_g3_ParamLimits

0x773f,	// (0x00033404) cale_week_scroll_pane_g4_ParamLimits

0x7752,	// (0x00033417) cale_week_scroll_pane_g5_ParamLimits

0x7765,	// (0x0003342a) cale_week_scroll_pane_g6_ParamLimits

0x7778,	// (0x0003343d) cale_week_scroll_pane_g7_ParamLimits

0x778b,	// (0x00033450) cale_week_scroll_pane_g8_ParamLimits

0x779e,	// (0x00033463) cale_week_scroll_pane_g9_ParamLimits

0x77b1,	// (0x00033476) cale_week_scroll_pane_g10_ParamLimits

0x77c4,	// (0x00033489) cale_week_scroll_pane_g11_ParamLimits

0x77d7,	// (0x0003349c) cale_week_scroll_pane_g12_ParamLimits

0x77ea,	// (0x000334af) cale_week_scroll_pane_g13_ParamLimits

0x77fd,	// (0x000334c2) cale_week_scroll_pane_g14_ParamLimits

0x7810,	// (0x000334d5) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0003ae30) cale_week_scroll_pane_g_ParamLimits

0x7836,	// (0x000334fb) cale_week_time_pane_ParamLimits

0x7849,	// (0x0003350e) grid_cale_week_pane_ParamLimits

0xe9f7,	// (0x0003a6bc) listscroll_cale_week_pane_t1

0xea09,	// (0x0003a6ce) scroll_pane_cp08_ParamLimits

0x831a,	// (0x00033fdf) cale_month_corner_pane_ParamLimits

0xedca,	// (0x0003aa8f) cale_month_pane_t1

0x8630,	// (0x000342f5) cale_month_week_pane_ParamLimits

0x1e81,	// (0x0002db46) popup_call_status_window_g1_ParamLimits

0x8e2b,	// (0x00034af0) popup_call_status_window_g2_ParamLimits

0x8e37,	// (0x00034afc) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x0003afc1) popup_call_status_window_g_ParamLimits

0x0fb4,	// (0x0002cc79) aid_call2_pane

0x63b1,	// (0x00032076) msg_header_pane_g1

0x9456,	// (0x0003511b) postcard_address2_pane_ParamLimits

0x9456,	// (0x0003511b) postcard_address2_pane

0x9462,	// (0x00035127) postcard_message2_pane_ParamLimits

0x9462,	// (0x00035127) postcard_message2_pane

0x9b77,	// (0x0003583c) message2_row_pane_ParamLimits

0x9b77,	// (0x0003583c) message2_row_pane

0x9b8f,	// (0x00035854) address2_row_pane_ParamLimits

0x9b8f,	// (0x00035854) address2_row_pane

0x2948,	// (0x0002e60d) postcard_message2_row_pane_g1

0x2950,	// (0x0002e615) postcard_message2_row_pane_t1

0x2948,	// (0x0002e60d) address2_row_pane_g1

0x2950,	// (0x0002e615) address2_row_pane_t1

0x172e,	// (0x0002d3f3) aid_size_cell_vorec

0xe568,	// (0x0003a22d) main_rss_pane

0x9ba2,	// (0x00035867) rss_list_single_pane_ParamLimits

0x9ba2,	// (0x00035867) rss_list_single_pane

0x295e,	// (0x0002e623) rss_list_single_pane_t1

0x296c,	// (0x0002e631) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x0003b284) rss_list_single_pane_t

0xe568,	// (0x0003a22d) main_camera2_pane

0xe568,	// (0x0003a22d) main_video2_pane

0x143a,	// (0x0002d0ff) cams_zoom_pane_cp2_ParamLimits

0x143a,	// (0x0002d0ff) cams_zoom_pane_cp2

0x143a,	// (0x0002d0ff) image2_vga_pane_ParamLimits

0x143a,	// (0x0002d0ff) image2_vga_pane

0xe84b,	// (0x0003a510) main_camera2_pane_g1_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g1

0xe84b,	// (0x0003a510) main_camera2_pane_g2_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g2

0xe84b,	// (0x0003a510) main_camera2_pane_g3_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g3

0xe84b,	// (0x0003a510) main_camera2_pane_g4_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g4

0xe84b,	// (0x0003a510) main_camera2_pane_g5_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g5

0xe84b,	// (0x0003a510) main_camera2_pane_g6_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g6

0xe84b,	// (0x0003a510) main_camera2_pane_g7_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g7

0xe84b,	// (0x0003a510) main_camera2_pane_g8_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x0003b2a0) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x0003b2a0) main_camera2_pane_g

0x1426,	// (0x0002d0eb) main_camera2_pane_t1_ParamLimits

0x1426,	// (0x0002d0eb) main_camera2_pane_t1

0x1426,	// (0x0002d0eb) main_camera2_pane_t2_ParamLimits

0x1426,	// (0x0002d0eb) main_camera2_pane_t2

0x1426,	// (0x0002d0eb) main_camera2_pane_t3_ParamLimits

0x1426,	// (0x0002d0eb) main_camera2_pane_t3

0x1426,	// (0x0002d0eb) main_camera2_pane_t4_ParamLimits

0x1426,	// (0x0002d0eb) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x0003b2b3) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x0003b2b3) main_camera2_pane_t

0x1448,	// (0x0002d10d) cams_zoom_pane_cp4_ParamLimits

0x1448,	// (0x0002d10d) cams_zoom_pane_cp4

0xf050,	// (0x0003ad15) image2_cif_pane_ParamLimits

0xf050,	// (0x0003ad15) image2_cif_pane

0x143a,	// (0x0002d0ff) image2_subqcif_pane_ParamLimits

0x143a,	// (0x0002d0ff) image2_subqcif_pane

0x1404,	// (0x0002d0c9) main_video2_pane_g1_ParamLimits

0x1404,	// (0x0002d0c9) main_video2_pane_g1

0x1404,	// (0x0002d0c9) main_video2_pane_g2_ParamLimits

0x1404,	// (0x0002d0c9) main_video2_pane_g2

0x1404,	// (0x0002d0c9) main_video2_pane_g3_ParamLimits

0x1404,	// (0x0002d0c9) main_video2_pane_g3

0x1404,	// (0x0002d0c9) main_video2_pane_g4_ParamLimits

0x1404,	// (0x0002d0c9) main_video2_pane_g4

0x1404,	// (0x0002d0c9) main_video2_pane_g5_ParamLimits

0x1404,	// (0x0002d0c9) main_video2_pane_g5

0x1404,	// (0x0002d0c9) main_video2_pane_g6_ParamLimits

0x1404,	// (0x0002d0c9) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x0003b2c2) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x0003b2c2) main_video2_pane_g

0x1412,	// (0x0002d0d7) main_video2_pane_t1_ParamLimits

0x1412,	// (0x0002d0d7) main_video2_pane_t1

0x1412,	// (0x0002d0d7) main_video2_pane_t2_ParamLimits

0x1412,	// (0x0002d0d7) main_video2_pane_t2

0x1412,	// (0x0002d0d7) main_video2_pane_t3_ParamLimits

0x1412,	// (0x0002d0d7) main_video2_pane_t3

0x0002,

0xf60a,	// (0x0003b2cf) main_video2_pane_t_ParamLimits

0xf60a,	// (0x0003b2cf) main_video2_pane_t

0x990a,	// (0x000355cf) call_muted_g2

0x0001,

0xf5b1,	// (0x0003b276) call_muted_g

0xe568,	// (0x0003a22d) main_mup2_pane

0xe859,	// (0x0003a51e) main_mup2_pane_g1_ParamLimits

0xe859,	// (0x0003a51e) main_mup2_pane_g1

0xe859,	// (0x0003a51e) main_mup2_pane_g2_ParamLimits

0xe859,	// (0x0003a51e) main_mup2_pane_g2

0xead2,	// (0x0003a797) main_mup_pane_g13_cp1

0xe14d,	// (0x00039e12) mup_volume_pane_cp1

0xe859,	// (0x0003a51e) main_mup2_pane_g4_ParamLimits

0xe859,	// (0x0003a51e) main_mup2_pane_g4

0xe859,	// (0x0003a51e) main_mup2_pane_g5_ParamLimits

0xe859,	// (0x0003a51e) main_mup2_pane_g5

0xe859,	// (0x0003a51e) main_mup2_pane_g6_ParamLimits

0xe859,	// (0x0003a51e) main_mup2_pane_g6

0xe859,	// (0x0003a51e) main_mup2_pane_g7_ParamLimits

0xe859,	// (0x0003a51e) main_mup2_pane_g7

0x0006,

0xf611,	// (0x0003b2d6) main_mup2_pane_g_ParamLimits

0xf611,	// (0x0003b2d6) main_mup2_pane_g

0xe867,	// (0x0003a52c) main_mup2_pane_t1_ParamLimits

0xe867,	// (0x0003a52c) main_mup2_pane_t1

0xe867,	// (0x0003a52c) main_mup2_pane_t2_ParamLimits

0xe867,	// (0x0003a52c) main_mup2_pane_t2

0xe867,	// (0x0003a52c) main_mup2_pane_t3_ParamLimits

0xe867,	// (0x0003a52c) main_mup2_pane_t3

0xe867,	// (0x0003a52c) main_mup2_pane_t4_ParamLimits

0xe867,	// (0x0003a52c) main_mup2_pane_t4

0xe867,	// (0x0003a52c) main_mup2_pane_t5_ParamLimits

0xe867,	// (0x0003a52c) main_mup2_pane_t5

0xe867,	// (0x0003a52c) main_mup2_pane_t6_ParamLimits

0xe867,	// (0x0003a52c) main_mup2_pane_t6

0x0005,

0xf620,	// (0x0003b2e5) main_mup2_pane_t_ParamLimits

0xf620,	// (0x0003b2e5) main_mup2_pane_t

0x2b99,	// (0x0002e85e) mup2_visualizer_pane_ParamLimits

0x2b99,	// (0x0002e85e) mup2_visualizer_pane

0x2b99,	// (0x0002e85e) mup_progress_pane_cp_ParamLimits

0x2b99,	// (0x0002e85e) mup_progress_pane_cp

0x2a34,	// (0x0002e6f9) mup_volume_pane_cp_ParamLimits

0x2a34,	// (0x0002e6f9) mup_volume_pane_cp

0xe83d,	// (0x0003a502) mup2_visualizer_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) mup2_visualizer_pane_g1

0xe84b,	// (0x0003a510) mup2_visualizer_pane_g2_ParamLimits

0xe84b,	// (0x0003a510) mup2_visualizer_pane_g2

0xe84b,	// (0x0003a510) mup2_visualizer_pane_g3_ParamLimits

0xe84b,	// (0x0003a510) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0003ada9) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0003ada9) mup2_visualizer_pane_g

0x172e,	// (0x0002d3f3) aid_size_cell_fmradio

0x99ff,	// (0x000356c4) aid_height_parent_landcape

0xec27,	// (0x0003a8ec) wml_content_pane_cp

0xec2f,	// (0x0003a8f4) wml_tabs_pane

0xec38,	// (0x0003a8fd) popup_wml_miniature_window

0xec40,	// (0x0003a905) scroll_pane_cp021

0xec54,	// (0x0003a919) wml_content_pane_comp8

0xe568,	// (0x0003a22d) bg_popup_sub_pane_cp05

0x2a4a,	// (0x0002e70f) popup_wml_miniature_window_g1

0x2a52,	// (0x0002e717) wml_miniature_view_pane

0x9d83,	// (0x00035a48) aid_size_wml_view

0x9d8b,	// (0x00035a50) wml_miniature_view_pane_g1

0x9d94,	// (0x00035a59) wml_miniature_view_pane_g2

0x9d9d,	// (0x00035a62) wml_miniature_view_pane_g3

0x9da5,	// (0x00035a6a) wml_miniature_view_pane_g4

0x9dad,	// (0x00035a72) wml_miniature_view_pane_g5

0x9db5,	// (0x00035a7a) wml_miniature_view_pane_g6

0x9dbd,	// (0x00035a82) wml_miniature_view_pane_g7

0x9dc5,	// (0x00035a8a) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x0003b2f2) wml_miniature_view_pane_g

0x2a5a,	// (0x0002e71f) background_graphic_ParamLimits

0x2a5a,	// (0x0002e71f) background_graphic

0x2a66,	// (0x0002e72b) wml_tabs_2_pane

0x2a6f,	// (0x0002e734) wml_tabs_3_pane_ParamLimits

0x2a6f,	// (0x0002e734) wml_tabs_3_pane

0x2a81,	// (0x0002e746) wml_tabs_4_pane_ParamLimits

0x2a81,	// (0x0002e746) wml_tabs_4_pane

0x2a97,	// (0x0002e75c) wml_tabs_5_pane_ParamLimits

0x2a97,	// (0x0002e75c) wml_tabs_5_pane

0x2ab1,	// (0x0002e776) wml_tabs_pane_g2_ParamLimits

0x2ab1,	// (0x0002e776) wml_tabs_pane_g2

0x2ac5,	// (0x0002e78a) wml_tabs_pane_g3_ParamLimits

0x2ac5,	// (0x0002e78a) wml_tabs_pane_g3

0x9dcd,	// (0x00035a92) wml_tabs_2_active_pane_ParamLimits

0x9dcd,	// (0x00035a92) wml_tabs_2_active_pane

0x9ddd,	// (0x00035aa2) wml_tabs_2_passive_pane_ParamLimits

0x9ddd,	// (0x00035aa2) wml_tabs_2_passive_pane

0x9ded,	// (0x00035ab2) wml_tabs_3_active_pane_cp_ParamLimits

0x9ded,	// (0x00035ab2) wml_tabs_3_active_pane_cp

0x9dfe,	// (0x00035ac3) wml_tabs_3_passive_pane_ParamLimits

0x9dfe,	// (0x00035ac3) wml_tabs_3_passive_pane

0x9e0f,	// (0x00035ad4) wml_tabs_3_passive_pane_cp_ParamLimits

0x9e0f,	// (0x00035ad4) wml_tabs_3_passive_pane_cp

0x9e20,	// (0x00035ae5) tabs_4_active_pane

0x9e28,	// (0x00035aed) tabs_4_passive_pane

0x9e30,	// (0x00035af5) tabs_4_passive_pane_cp

0x9e38,	// (0x00035afd) tabs_4_passive_pane_cp2

0x97ed,	// (0x000354b2) aid_height_text

0x2b99,	// (0x0002e85e) mup_volume_cont_pane_ParamLimits

0x2b99,	// (0x0002e85e) mup_volume_cont_pane

0x7323,	// (0x00032fe8) aid_size_cell_pinb

0xe14d,	// (0x00039e12) aid_size_list_pinb

0x2b99,	// (0x0002e85e) mup2_volume_cont_pane_ParamLimits

0x2b99,	// (0x0002e85e) mup2_volume_cont_pane

0x9e40,	// (0x00035b05) mup2_volume_cont_pane_g1_ParamLimits

0x9e40,	// (0x00035b05) mup2_volume_cont_pane_g1

0x7041,	// (0x00032d06) aid_size_cell_touch_ParamLimits

0x7041,	// (0x00032d06) aid_size_cell_touch

0x727d,	// (0x00032f42) touch_pane_ParamLimits

0x727d,	// (0x00032f42) touch_pane

0xe14d,	// (0x00039e12) main_rss2_pane

0x2b18,	// (0x0002e7dd) listscroll_rss2_pane

0x2b21,	// (0x0002e7e6) rss2_navigation_pane

0x2b29,	// (0x0002e7ee) list_rss2_pane

0x1152,	// (0x0002ce17) scroll_pane_cp22

0x2b31,	// (0x0002e7f6) rss2_navigation_pane_g1

0x2b3a,	// (0x0002e7ff) rss2_navigation_pane_g2

0x2b42,	// (0x0002e807) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x0003b303) rss2_navigation_pane_g

0x2b4a,	// (0x0002e80f) rss2_navigation_pane_t1

0x9e56,	// (0x00035b1b) rss2_list_single_pane_ParamLimits

0x9e56,	// (0x00035b1b) rss2_list_single_pane

0x2b58,	// (0x0002e81d) rss2_list_single_pane_t2

0x2b66,	// (0x0002e82b) rss2_list_single_pane_t3_ParamLimits

0x2b66,	// (0x0002e82b) rss2_list_single_pane_t3

0x2b83,	// (0x0002e848) rss2_list_single_pane_t4

0x8cce,	// (0x00034993) smil_status_pane_g1

0xf050,	// (0x0003ad15) main_image2_pane_ParamLimits

0xf050,	// (0x0003ad15) main_image2_pane

0xe84b,	// (0x0003a510) main_camera2_pane_g9_ParamLimits

0xe84b,	// (0x0003a510) main_camera2_pane_g9

0x1426,	// (0x0002d0eb) main_camera2_pane_t5_ParamLimits

0x1426,	// (0x0002d0eb) main_camera2_pane_t5

0x9d6f,	// (0x00035a34) main_camera2_pane_t6_ParamLimits

0x9d6f,	// (0x00035a34) main_camera2_pane_t6

0x9e6d,	// (0x00035b32) main_image2_pane_g1_ParamLimits

0x9e6d,	// (0x00035b32) main_image2_pane_g1

0x9602,	// (0x000352c7) smil2_video_pane_ParamLimits

0x9602,	// (0x000352c7) smil2_video_pane

0x62f3,	// (0x00031fb8) aid_zoom_text_primary_cp

0x722c,	// (0x00032ef1) popup_preview_fixed_window

0xeb81,	// (0x0003a846) im_reading_pane_g1

0x9d39,	// (0x000359fe) cams2_bc_adjust_pane_cp_ParamLimits

0x9d39,	// (0x000359fe) cams2_bc_adjust_pane_cp

0x143a,	// (0x0002d0ff) cams2_bc_adjust_pane_ParamLimits

0x143a,	// (0x0002d0ff) cams2_bc_adjust_pane

0xead2,	// (0x0003a797) cams2_bc_adjust_pane_g1

0xe14d,	// (0x00039e12) cams2_slider_pane

0xead2,	// (0x0003a797) cams2_slider_pane_g1

0xead2,	// (0x0003a797) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x0003b30a) cams2_slider_pane_g

0x735c,	// (0x00033021) calc_display_pane_ParamLimits

0x7374,	// (0x00033039) calc_paper_pane_ParamLimits

0x7390,	// (0x00033055) grid_calc_pane_ParamLimits

0x8ea9,	// (0x00034b6e) popup_clock_digital_window_t1_ParamLimits

0x16cb,	// (0x0002d390) main_image_pane_t1

0x7342,	// (0x00033007) aid_size_cell_calc_ParamLimits

0x7342,	// (0x00033007) aid_size_cell_calc

0x9a2c,	// (0x000356f1) popup_blid_sat_info2_window_ParamLimits

0x9a2c,	// (0x000356f1) popup_blid_sat_info2_window

0x2b91,	// (0x0002e856) aid_size_cell_blid

0x2b99,	// (0x0002e85e) bg_popup_window_pane_cp07

0x2bbc,	// (0x0002e881) grid_popup_blid_pane

0x2bc4,	// (0x0002e889) heading_pane_cp05_ParamLimits

0x2bc4,	// (0x0002e889) heading_pane_cp05

0x2c8c,	// (0x0002e951) cell_popup_blid_pane_ParamLimits

0x2c8c,	// (0x0002e951) cell_popup_blid_pane

0x2cac,	// (0x0002e971) cell_popup_blid_pane_g1

0x2cb4,	// (0x0002e979) cell_popup_blid_pane_t1

0x2b99,	// (0x0002e85e) mup2_indicator_pane_ParamLimits

0x2b99,	// (0x0002e85e) mup2_indicator_pane

0xe14d,	// (0x00039e12) mup2_visualizer_osc_pane

0x2a34,	// (0x0002e6f9) mup2_visualizer_spec_pane_ParamLimits

0x2a34,	// (0x0002e6f9) mup2_visualizer_spec_pane

0xe14d,	// (0x00039e12) mup2_spec_half_pane

0xe14d,	// (0x00039e12) mup2_spec_half_pane_cp

0xe14d,	// (0x00039e12) mup2_spec_bar_pane_ParamLimits

0xe14d,	// (0x00039e12) mup2_spec_bar_pane

0xead2,	// (0x0003a797) mup2_spec_bar_pane_g1

0x2cc2,	// (0x0002e987) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x0003b330) mup2_spec_bar_pane_g

0xe14d,	// (0x00039e12) mup2_osc_middle_pane

0xead2,	// (0x0003a797) mup2_visualizer_osc_pane_g1

0xe177,	// (0x00039e3c) popup_number_entry_window_t1_ParamLimits

0xe18a,	// (0x00039e4f) popup_number_entry_window_t2_ParamLimits

0xe19c,	// (0x00039e61) popup_number_entry_window_t3_ParamLimits

0x72ca,	// (0x00032f8f) popup_number_entry_window_t5_ParamLimits

0x72ca,	// (0x00032f8f) popup_number_entry_window_t5

0xf085,	// (0x0003ad4a) popup_number_entry_window_t_ParamLimits

0xe1ae,	// (0x00039e73) text_title_cp2_ParamLimits

0x9340,	// (0x00035005) aid_hotspot_pointer_text2_pane

0x93d2,	// (0x00035097) main_viewer_pane_g9_ParamLimits

0x93d2,	// (0x00035097) main_viewer_pane_g9

0xedca,	// (0x0003aa8f) cale_month_pane_t1_ParamLimits

0xedf0,	// (0x0003aab5) bg_cale_pane_ParamLimits

0xee08,	// (0x0003aacd) list_cale_pane_ParamLimits

0xee19,	// (0x0003aade) listscroll_cale_day_pane_t1

0xee2b,	// (0x0003aaf0) scroll_pane_cp09_ParamLimits

0x9175,	// (0x00034e3a) main_mup_eq_pane_t1_ParamLimits

0x9175,	// (0x00034e3a) main_mup_eq_pane_t1

0x918b,	// (0x00034e50) main_mup_eq_pane_t2_ParamLimits

0x918b,	// (0x00034e50) main_mup_eq_pane_t2

0x91a1,	// (0x00034e66) main_mup_eq_pane_t3_ParamLimits

0x91a1,	// (0x00034e66) main_mup_eq_pane_t3

0x91b7,	// (0x00034e7c) main_mup_eq_pane_t4_ParamLimits

0x91b7,	// (0x00034e7c) main_mup_eq_pane_t4

0x91cd,	// (0x00034e92) main_mup_eq_pane_t5_ParamLimits

0x91cd,	// (0x00034e92) main_mup_eq_pane_t5

0x91e3,	// (0x00034ea8) main_mup_eq_pane_t6_ParamLimits

0x91e3,	// (0x00034ea8) main_mup_eq_pane_t6

0x91f5,	// (0x00034eba) main_mup_eq_pane_t7_ParamLimits

0x91f5,	// (0x00034eba) main_mup_eq_pane_t7

0x9207,	// (0x00034ecc) main_mup_eq_pane_t8_ParamLimits

0x9207,	// (0x00034ecc) main_mup_eq_pane_t8

0x9219,	// (0x00034ede) main_mup_eq_pane_t9_ParamLimits

0x9219,	// (0x00034ede) main_mup_eq_pane_t9

0x922f,	// (0x00034ef4) main_mup_eq_pane_t10_ParamLimits

0x922f,	// (0x00034ef4) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x0003b0c0) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x0003b0c0) main_mup_eq_pane_t

0x92c2,	// (0x00034f87) mup_equalizer_pane_cp5_ParamLimits

0x92d4,	// (0x00034f99) mup_equalizer_pane_cp6_ParamLimits

0x92e6,	// (0x00034fab) mup_equalizer_pane_cp7_ParamLimits

0xe14d,	// (0x00039e12) main_gallery_pane

0x2984,	// (0x0002e649) smil2_volume_pane

0x299f,	// (0x0002e664) smil_status_volume_pane_g1_ParamLimits

0x298c,	// (0x0002e651) smil_status_volume_pane_g2_ParamLimits

0x9bc0,	// (0x00035885) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x0003b289) smil_status_volume_pane_g_ParamLimits

0x2b99,	// (0x0002e85e) bg_popup_window_pane_cp07_ParamLimits

0x2ba7,	// (0x0002e86c) blid_firmament_pane

0x143a,	// (0x0002d0ff) aid_size_cell_gallery_ParamLimits

0x143a,	// (0x0002d0ff) aid_size_cell_gallery

0x9e79,	// (0x00035b3e) grid_gallery_pane_ParamLimits

0x9e79,	// (0x00035b3e) grid_gallery_pane

0x9e88,	// (0x00035b4d) cell_gallery_pane_ParamLimits

0x9e88,	// (0x00035b4d) cell_gallery_pane

0xf050,	// (0x0003ad15) bg_cell_gallery_focus_pane_ParamLimits

0xf050,	// (0x0003ad15) bg_cell_gallery_focus_pane

0xe83d,	// (0x0003a502) cell_gallery_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) cell_gallery_pane_g1

0xe83d,	// (0x0003a502) cell_gallery_pane_g2_ParamLimits

0xe83d,	// (0x0003a502) cell_gallery_pane_g2

0xe83d,	// (0x0003a502) cell_gallery_pane_g3_ParamLimits

0xe83d,	// (0x0003a502) cell_gallery_pane_g3

0xe84b,	// (0x0003a510) cell_gallery_pane_g4_ParamLimits

0xe84b,	// (0x0003a510) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x0003b335) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x0003b335) cell_gallery_pane_g

0x2ccc,	// (0x0002e991) bg_cell_gallery_focus_pane_g1

0x2cd4,	// (0x0002e999) bg_cell_gallery_focus_pane_g2

0x2cdc,	// (0x0002e9a1) bg_cell_gallery_focus_pane_g3

0x2ce4,	// (0x0002e9a9) bg_cell_gallery_focus_pane_g4

0x2cec,	// (0x0002e9b1) bg_cell_gallery_focus_pane_g5

0x2cf4,	// (0x0002e9b9) bg_cell_gallery_focus_pane_g6

0x2cfc,	// (0x0002e9c1) bg_cell_gallery_focus_pane_g7

0x2d04,	// (0x0002e9c9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x0003b33e) bg_cell_gallery_focus_pane_g

0x2d0c,	// (0x0002e9d1) aid_firma_cardinal

0x2d20,	// (0x0002e9e5) blid_firmament_pane_t1

0x2d37,	// (0x0002e9fc) blid_firmament_pane_t2

0x2d4e,	// (0x0002ea13) blid_firmament_pane_t3

0x2d65,	// (0x0002ea2a) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x0003b34f) blid_firmament_pane_t

0x2d7c,	// (0x0002ea41) blid_sat_info_pane

0xead2,	// (0x0003a797) blid_sat_info_pane_g1

0xead2,	// (0x0003a797) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x0003b0b4) blid_sat_info_pane_g

0x2d8c,	// (0x0002ea51) blid_sat_info_pane_t1

0x2d9a,	// (0x0002ea5f) smil2_volume_content_pane

0x2da3,	// (0x0002ea68) smil2_volume_pane_g1

0x2dab,	// (0x0002ea70) smil2_volume_content_pane_g1

0x2db4,	// (0x0002ea79) smil2_volume_content_pane_g2

0x2dbd,	// (0x0002ea82) smil2_volume_content_pane_g3

0x2dc6,	// (0x0002ea8b) smil2_volume_content_pane_g4

0x2dcf,	// (0x0002ea94) smil2_volume_content_pane_g5

0x2dd8,	// (0x0002ea9d) smil2_volume_content_pane_g6

0x2de1,	// (0x0002eaa6) smil2_volume_content_pane_g7

0x2dea,	// (0x0002eaaf) smil2_volume_content_pane_g8

0x2df3,	// (0x0002eab8) smil2_volume_content_pane_g9

0x2dfc,	// (0x0002eac1) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x0003b358) smil2_volume_content_pane_g

0x78ac,	// (0x00033571) cale_week_day_heading_pane_t1_ParamLimits

0x78e7,	// (0x000335ac) cale_week_day_heading_pane_t2_ParamLimits

0x7922,	// (0x000335e7) cale_week_day_heading_pane_t3_ParamLimits

0x795d,	// (0x00033622) cale_week_day_heading_pane_t4_ParamLimits

0x7998,	// (0x0003365d) cale_week_day_heading_pane_t5_ParamLimits

0x79d3,	// (0x00033698) cale_week_day_heading_pane_t6_ParamLimits

0x7a0e,	// (0x000336d3) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0003ae51) cale_week_day_heading_pane_t_ParamLimits

0xea26,	// (0x0003a6eb) bg_cale_side_pane_ParamLimits

0x7a49,	// (0x0003370e) cale_week_time_pane_t1_ParamLimits

0x7a83,	// (0x00033748) cale_week_time_pane_t2_ParamLimits

0x7abd,	// (0x00033782) cale_week_time_pane_t3_ParamLimits

0x7af7,	// (0x000337bc) cale_week_time_pane_t4_ParamLimits

0x7b31,	// (0x000337f6) cale_week_time_pane_t5_ParamLimits

0x7b6b,	// (0x00033830) cale_week_time_pane_t6_ParamLimits

0x7ba5,	// (0x0003386a) cale_week_time_pane_t7_ParamLimits

0x7bdf,	// (0x000338a4) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0003ae60) cale_week_time_pane_t_ParamLimits

0x7c19,	// (0x000338de) cell_cale_week_pane_g2_ParamLimits

0xea26,	// (0x0003a6eb) bg_cale_side_pane_cp01_ParamLimits

0x8a55,	// (0x0003471a) cale_month_week_pane_t1_ParamLimits

0x8a8e,	// (0x00034753) cale_month_week_pane_t2_ParamLimits

0x8ac7,	// (0x0003478c) cale_month_week_pane_t3_ParamLimits

0x8b00,	// (0x000347c5) cale_month_week_pane_t4_ParamLimits

0x8b39,	// (0x000347fe) cale_month_week_pane_t5_ParamLimits

0x8b72,	// (0x00034837) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0003af2e) cale_month_week_pane_t_ParamLimits

0x8c99,	// (0x0003495e) cell_cale_month_pane_g1_ParamLimits

0xe14d,	// (0x00039e12) main_cale_event_viewer_pane

0xe14d,	// (0x00039e12) listscroll_cale_event_viewer_pane

0x2e05,	// (0x0002eaca) list_cale_ev_pane

0x2e0d,	// (0x0002ead2) scroll_pane_cp023

0x9ea4,	// (0x00035b69) field_cale_ev_pane_ParamLimits

0x9ea4,	// (0x00035b69) field_cale_ev_pane

0x2e19,	// (0x0002eade) field_cale_ev_content_pane_ParamLimits

0x2e19,	// (0x0002eade) field_cale_ev_content_pane

0x2e25,	// (0x0002eaea) field_cale_ev_pane_g1_ParamLimits

0x2e25,	// (0x0002eaea) field_cale_ev_pane_g1

0x2e31,	// (0x0002eaf6) field_cale_ev_pane_g2_ParamLimits

0x2e31,	// (0x0002eaf6) field_cale_ev_pane_g2

0x2e49,	// (0x0002eb0e) field_cale_ev_pane_g3_ParamLimits

0x2e49,	// (0x0002eb0e) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x0003b36d) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x0003b36d) field_cale_ev_pane_g

0x2e61,	// (0x0002eb26) field_cale_ev_pane_t1_ParamLimits

0x2e61,	// (0x0002eb26) field_cale_ev_pane_t1

0x9ebe,	// (0x00035b83) field_cale_ev_content_pane_t1_ParamLimits

0x9ebe,	// (0x00035b83) field_cale_ev_content_pane_t1

0x14f3,	// (0x0002d1b8) bg_button_pane_cp01

0x7697,	// (0x0003335c) listscroll_cale_week_pane_ParamLimits

0xe9d1,	// (0x0003a696) popup_toolbar_window_cp01

0xe9f7,	// (0x0003a6bc) listscroll_cale_week_pane_t1_ParamLimits

0x7697,	// (0x0003335c) listscroll_cale_day_pane_ParamLimits

0xe9d1,	// (0x0003a696) popup_toolbar_window_cp02

0xee19,	// (0x0003aade) listscroll_cale_day_pane_t1_ParamLimits

0x7697,	// (0x0003335c) main_cale_month_pane_ParamLimits

0x9aff,	// (0x000357c4) popup_toolbar_window_cp03_ParamLimits

0x9aff,	// (0x000357c4) popup_toolbar_window_cp03

0x952a,	// (0x000351ef) main_image_pane_g2_ParamLimits

0x952a,	// (0x000351ef) main_image_pane_g2

0x9536,	// (0x000351fb) main_image_pane_g3_ParamLimits

0x9536,	// (0x000351fb) main_image_pane_g3

0x0002,

0xf48d,	// (0x0003b152) main_image_pane_g_ParamLimits

0xf48d,	// (0x0003b152) main_image_pane_g

0x16cb,	// (0x0002d390) main_image_pane_t1_ParamLimits

0x9542,	// (0x00035207) main_image_pane_t2_ParamLimits

0x9542,	// (0x00035207) main_image_pane_t2

0x9554,	// (0x00035219) main_image_pane_t3_ParamLimits

0x9554,	// (0x00035219) main_image_pane_t3

0x9566,	// (0x0003522b) main_image_pane_t4_ParamLimits

0x9566,	// (0x0003522b) main_image_pane_t4

0x0003,

0xf494,	// (0x0003b159) main_image_pane_t_ParamLimits

0xf494,	// (0x0003b159) main_image_pane_t

0x9578,	// (0x0003523d) popup_image_details_window_cp01

0x9580,	// (0x00035245) popup_toobar_trans_pane_cp01_ParamLimits

0x9580,	// (0x00035245) popup_toobar_trans_pane_cp01

0x9a73,	// (0x00035738) popup_image_details_window_ParamLimits

0x9a73,	// (0x00035738) popup_image_details_window

0x9a7f,	// (0x00035744) popup_image_focus_window

0x143a,	// (0x0002d0ff) camera2_autofocus_pane_ParamLimits

0x143a,	// (0x0002d0ff) camera2_autofocus_pane

0xe14d,	// (0x00039e12) bg_popup_sub_pane_cp06

0x2e78,	// (0x0002eb3d) popup_image_focus_window_g1

0x2e80,	// (0x0002eb45) popup_image_focus_window_g2

0x2e88,	// (0x0002eb4d) popup_image_focus_window_g3

0x2e90,	// (0x0002eb55) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x0003b374) popup_image_focus_window_g

0x2e98,	// (0x0002eb5d) popup_image_focus_window_t1

0x2ea6,	// (0x0002eb6b) popup_image_focus_window_t2

0x2eb5,	// (0x0002eb7a) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x0003b37d) popup_image_focus_window_t

0xe83d,	// (0x0003a502) camera2_autofocus_pane_g1

0xf050,	// (0x0003ad15) bg_tb_trans_pane_cp01

0x2ec3,	// (0x0002eb88) popup_image_details_window_g1

0x2ed6,	// (0x0002eb9b) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x0003b38f) popup_image_details_window_g

0x2eff,	// (0x0002ebc4) popup_image_details_window_t1

0x2f11,	// (0x0002ebd6) popup_image_details_window_t2

0x2f2a,	// (0x0002ebef) popup_image_details_window_t3

0x2f3e,	// (0x0002ec03) popup_image_details_window_t4

0x2f59,	// (0x0002ec1e) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x0003b396) popup_image_details_window_t

0xe89b,	// (0x0003a560) bg_calc_paper_pane_ParamLimits

0xe14d,	// (0x00039e12) grid_highlight_pane_cp013

0x7475,	// (0x0003313a) list_calc_pane_ParamLimits

0x7487,	// (0x0003314c) scroll_pane_cp024

0xe8b3,	// (0x0003a578) bg_calc_display_pane_ParamLimits

0x748f,	// (0x00033154) calc_display_pane_t1_ParamLimits

0x74a4,	// (0x00033169) calc_display_pane_t2_ParamLimits

0x74b9,	// (0x0003317e) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0003add1) calc_display_pane_t_ParamLimits

0x756f,	// (0x00033234) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0003adee) cell_calc_pane_g

0x7578,	// (0x0003323d) cell_calc_pane_t1

0xe908,	// (0x0003a5cd) grid_highlight_pane_cp02_ParamLimits

0xe91e,	// (0x0003a5e3) toolbar_button_pane_cp01_ParamLimits

0xe91e,	// (0x0003a5e3) toolbar_button_pane_cp01

0x1710,	// (0x0002d3d5) temp_image_control_pane_ParamLimits

0x1710,	// (0x0002d3d5) temp_image_control_pane

0xf050,	// (0x0003ad15) main_mp3_pane

0x2f73,	// (0x0002ec38) temp_image_control_pane_g1_ParamLimits

0x2f73,	// (0x0002ec38) temp_image_control_pane_g1

0x2f81,	// (0x0002ec46) temp_image_control_pane_g2_ParamLimits

0x2f81,	// (0x0002ec46) temp_image_control_pane_g2

0x2f93,	// (0x0002ec58) temp_image_control_pane_g3_ParamLimits

0x2f93,	// (0x0002ec58) temp_image_control_pane_g3

0x9ed8,	// (0x00035b9d) temp_image_control_pane_g4_ParamLimits

0x9ed8,	// (0x00035b9d) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x0003b3a1) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x0003b3a1) temp_image_control_pane_g

0x2f73,	// (0x0002ec38) main_mp3_pane_g1

0x9ee9,	// (0x00035bae) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x0003b3aa) main_mp3_pane_g

0x2fc8,	// (0x0002ec8d) main_mp3_pane_t1

0xe84b,	// (0x0003a510) main_camera_pane_g8_ParamLimits

0xe84b,	// (0x0003a510) main_camera_pane_g8

0x7da5,	// (0x00033a6a) main_video_pane_g7_ParamLimits

0x7da5,	// (0x00033a6a) main_video_pane_g7

0x1426,	// (0x0002d0eb) main_camera2_pane_t7_ParamLimits

0x1426,	// (0x0002d0eb) main_camera2_pane_t7

0xebe7,	// (0x0003a8ac) scroll_pane_cp025_ParamLimits

0xebe7,	// (0x0003a8ac) scroll_pane_cp025

0xebfb,	// (0x0003a8c0) scroll_pane_cp026_ParamLimits

0xebfb,	// (0x0003a8c0) scroll_pane_cp026

0xec0a,	// (0x0003a8cf) wml_content_pane_ParamLimits

0xe14d,	// (0x00039e12) main_touch_calib_pane

0x9f81,	// (0x00035c46) main_touch_calib_pane_g1

0x9f8d,	// (0x00035c52) main_touch_calib_pane_g2

0x9f99,	// (0x00035c5e) main_touch_calib_pane_g3

0x9fa5,	// (0x00035c6a) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x0003b3c8) main_touch_calib_pane_g

0x9fb1,	// (0x00035c76) main_touch_calib_pane_t1

0x9fc6,	// (0x00035c8b) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x0003b3d1) main_touch_calib_pane_t

0x120e,	// (0x0002ced3) mup_progress_pane_cp02

0x1243,	// (0x0002cf08) navi_pane_g1

0x12ce,	// (0x0002cf93) navi_pane_mp_t3

0xf050,	// (0x0003ad15) main_mp3_pane_ParamLimits

0x9b3a,	// (0x000357ff) navi_pane_ParamLimits

0x2f73,	// (0x0002ec38) main_mp3_pane_g1_ParamLimits

0x9ee9,	// (0x00035bae) main_mp3_pane_g2_ParamLimits

0x9ef5,	// (0x00035bba) main_mp3_pane_g3_ParamLimits

0x9ef5,	// (0x00035bba) main_mp3_pane_g3

0x9f01,	// (0x00035bc6) main_mp3_pane_g4_ParamLimits

0x9f01,	// (0x00035bc6) main_mp3_pane_g4

0xe83d,	// (0x0003a502) main_mp3_pane_g5_ParamLimits

0xe83d,	// (0x0003a502) main_mp3_pane_g5

0x2fa3,	// (0x0002ec68) main_mp3_pane_g6_ParamLimits

0x2fa3,	// (0x0002ec68) main_mp3_pane_g6

0x2fb0,	// (0x0002ec75) main_mp3_pane_g7_ParamLimits

0x2fb0,	// (0x0002ec75) main_mp3_pane_g7

0x2fbc,	// (0x0002ec81) main_mp3_pane_g8_ParamLimits

0x2fbc,	// (0x0002ec81) main_mp3_pane_g8

0xf6e5,	// (0x0003b3aa) main_mp3_pane_g_ParamLimits

0x9f0d,	// (0x00035bd2) main_mp3_pane_t2

0x9f1b,	// (0x00035be0) main_mp3_pane_t3

0x2fd6,	// (0x0002ec9b) main_mp3_pane_t4

0x2fe4,	// (0x0002eca9) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x0003b3bb) main_mp3_pane_t

0x2ff2,	// (0x0002ecb7) mup_progress_pane_cp01

0x62f3,	// (0x00031fb8) aid_zoom_text_secondary2

0x2e05,	// (0x0002eaca) list_cale_ev2_pane

0x2e0d,	// (0x0002ead2) scroll_pane_cp023_ParamLimits

0xa011,	// (0x00035cd6) field_cale_ev2_pane_ParamLimits

0xa011,	// (0x00035cd6) field_cale_ev2_pane

0x6439,	// (0x000320fe) field_cale_ev2_pane_g1_ParamLimits

0x6439,	// (0x000320fe) field_cale_ev2_pane_g1

0x6445,	// (0x0003210a) field_cale_ev2_pane_g2_ParamLimits

0x6445,	// (0x0003210a) field_cale_ev2_pane_g2

0x645d,	// (0x00032122) field_cale_ev2_pane_g3_ParamLimits

0x645d,	// (0x00032122) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x0003b3dc) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x0003b3dc) field_cale_ev2_pane_g

0x6481,	// (0x00032146) field_cale_ev2_pane_t1_ParamLimits

0x6481,	// (0x00032146) field_cale_ev2_pane_t1

0x6498,	// (0x0003215d) field_cale_ev2_pane_t2_ParamLimits

0x6498,	// (0x0003215d) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x0003b3e5) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x0003b3e5) field_cale_ev2_pane_t

0x9426,	// (0x000350eb) main_postcard_pane_g5_ParamLimits

0x9426,	// (0x000350eb) main_postcard_pane_g5

0x9432,	// (0x000350f7) main_postcard_pane_g6_ParamLimits

0x9432,	// (0x000350f7) main_postcard_pane_g6

0x143a,	// (0x0002d0ff) camera2_autofocus_pane_cp_ParamLimits

0x143a,	// (0x0002d0ff) camera2_autofocus_pane_cp

0xf050,	// (0x0003ad15) main_mup3_pane

0xa060,	// (0x00035d25) main_mup3_pane_g1_ParamLimits

0xa060,	// (0x00035d25) main_mup3_pane_g1

0xa081,	// (0x00035d46) main_mup3_pane_g2_ParamLimits

0xa081,	// (0x00035d46) main_mup3_pane_g2

0xa0ee,	// (0x00035db3) main_mup3_pane_g3_ParamLimits

0xa0ee,	// (0x00035db3) main_mup3_pane_g3

0xa129,	// (0x00035dee) main_mup3_pane_g4_ParamLimits

0xa129,	// (0x00035dee) main_mup3_pane_g4

0xa164,	// (0x00035e29) main_mup3_pane_g5_ParamLimits

0xa164,	// (0x00035e29) main_mup3_pane_g5

0xa19f,	// (0x00035e64) main_mup3_pane_g6_ParamLimits

0xa19f,	// (0x00035e64) main_mup3_pane_g6

0xe84b,	// (0x0003a510) main_mup3_pane_g7_ParamLimits

0xe84b,	// (0x0003a510) main_mup3_pane_g7

0x0007,

0xf730,	// (0x0003b3f5) main_mup3_pane_g_ParamLimits

0xf730,	// (0x0003b3f5) main_mup3_pane_g

0xa20d,	// (0x00035ed2) main_mup3_pane_t1_ParamLimits

0xa20d,	// (0x00035ed2) main_mup3_pane_t1

0xa26e,	// (0x00035f33) main_mup3_pane_t2_ParamLimits

0xa26e,	// (0x00035f33) main_mup3_pane_t2

0xa329,	// (0x00035fee) main_mup3_pane_t4_ParamLimits

0xa329,	// (0x00035fee) main_mup3_pane_t4

0xa36f,	// (0x00036034) main_mup3_pane_t5_ParamLimits

0xa36f,	// (0x00036034) main_mup3_pane_t5

0xa413,	// (0x000360d8) main_mup3_pane_t6_ParamLimits

0xa413,	// (0x000360d8) main_mup3_pane_t6

0x0005,

0xf741,	// (0x0003b406) main_mup3_pane_t_ParamLimits

0xf741,	// (0x0003b406) main_mup3_pane_t

0xa4bb,	// (0x00036180) mup3_progress_pane_ParamLimits

0xa4bb,	// (0x00036180) mup3_progress_pane

0xa51f,	// (0x000361e4) popup_mup3_control_window_ParamLimits

0xa51f,	// (0x000361e4) popup_mup3_control_window

0x306e,	// (0x0002ed33) popup_mup3_text_window

0xa538,	// (0x000361fd) mup3_progress_pane_t1

0xa556,	// (0x0003621b) mup3_progress_pane_t2

0x3076,	// (0x0002ed3b) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x0003b413) mup3_progress_pane_t

0x3093,	// (0x0002ed58) mup_progress_pane_cp03

0xe14d,	// (0x00039e12) bg_tb_trans_pane_cp04

0xa574,	// (0x00036239) mup3_volume_pane

0xa57c,	// (0x00036241) popup_mup3_control_window_g1

0xa585,	// (0x0003624a) mup3_volume_pane_g1

0xa58e,	// (0x00036253) mup3_volume_pane_g2

0xa597,	// (0x0003625c) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x0003b41a) mup3_volume_pane_g

0xe14d,	// (0x00039e12) bg_tb_trans_pane_cp03

0x30a3,	// (0x0002ed68) popup_mup3_text_window_g1

0x30ab,	// (0x0002ed70) popup_mup3_text_window_t1

0xe8fb,	// (0x0003a5c0) list_calc_item_pane_g1_ParamLimits

0x2b05,	// (0x0002e7ca) mup_volume_pane_cp_g1

0x9fdb,	// (0x00035ca0) main_touch_calib_pane_t3

0x9fed,	// (0x00035cb2) main_touch_calib_pane_t4

0x9fff,	// (0x00035cc4) main_touch_calib_pane_t5

0x7031,	// (0x00032cf6) aid_cell_size_toolbar2

0x7039,	// (0x00032cfe) aid_popup3_width_pane

0x62eb,	// (0x00031fb0) aid_zoom_text_msg_primary

0xeaaa,	// (0x0003a76f) vorec_t7

0xe8bf,	// (0x0003a584) bg_calc_paper_pane_g1_ParamLimits

0xe8cb,	// (0x0003a590) bg_calc_paper_pane_g2_ParamLimits

0xe8d7,	// (0x0003a59c) bg_calc_paper_pane_g3_ParamLimits

0xe8e3,	// (0x0003a5a8) bg_calc_paper_pane_g4_ParamLimits

0xe8ef,	// (0x0003a5b4) bg_calc_paper_pane_g5_ParamLimits

0x74f2,	// (0x000331b7) bg_calc_paper_pane_g6_ParamLimits

0x7501,	// (0x000331c6) bg_calc_paper_pane_g7_ParamLimits

0x7510,	// (0x000331d5) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0003add8) bg_calc_paper_pane_g_ParamLimits

0x751f,	// (0x000331e4) calc_bg_paper_pane_g9_ParamLimits

0x7c97,	// (0x0003395c) image_qvga_pane_ParamLimits

0x7c97,	// (0x0003395c) image_qvga_pane

0xe7c3,	// (0x0003a488) bg_popup_sub_pane_cp04_ParamLimits

0x1647,	// (0x0002d30c) popup_mup_playback_window_g1_ParamLimits

0x1653,	// (0x0002d318) popup_mup_playback_window_t1_ParamLimits

0x1668,	// (0x0002d32d) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x0003b14d) popup_mup_playback_window_t_ParamLimits

0xe83d,	// (0x0003a502) main_mup2_pane_g3_ParamLimits

0xe83d,	// (0x0003a502) main_mup2_pane_g3

0x7f6a,	// (0x00033c2f) popup_toolbar_window_cp04

0x1a51,	// (0x0002d716) popup_call2_audio_second_window_g3_ParamLimits

0x1a51,	// (0x0002d716) popup_call2_audio_second_window_g3

0x1e8f,	// (0x0002db54) popup_call2_audio_first_window_g4_ParamLimits

0x1e8f,	// (0x0002db54) popup_call2_audio_first_window_g4

0x250e,	// (0x0002e1d3) popup_call2_audio_in_window_g4_ParamLimits

0x250e,	// (0x0002e1d3) popup_call2_audio_in_window_g4

0x951d,	// (0x000351e2) aid_area_sk_bg_cut_ParamLimits

0x951d,	// (0x000351e2) aid_area_sk_bg_cut

0x167d,	// (0x0002d342) aid_area_sk_bg_cut_2_ParamLimits

0x167d,	// (0x0002d342) aid_area_sk_bg_cut_2

0xe14d,	// (0x00039e12) aid_placing_details_win

0xe14d,	// (0x00039e12) aid_placing_details_win_2

0xe83d,	// (0x0003a502) camera2_autofocus_pane_g1_ParamLimits

0x721f,	// (0x00032ee4) popup_fixed_preview_cale_window_ParamLimits

0x721f,	// (0x00032ee4) popup_fixed_preview_cale_window

0x135f,	// (0x0002d024) navi_slider_pane_g3

0x1356,	// (0x0002d01b) navi_slider_pane_g4

0x134d,	// (0x0002d012) navi_slider_pane_g5

0x135f,	// (0x0002d024) navi_slider_pane_g6

0x9149,	// (0x00034e0e) navi_slider_pane_g7

0x14b8,	// (0x0002d17d) mup_scale_pane_g3

0x14c1,	// (0x0002d186) mup_scale_pane_g4

0x14ca,	// (0x0002d18f) mup_scale_pane_g5

0x92f8,	// (0x00034fbd) mup_scale_pane_g6

0x9301,	// (0x00034fc6) mup_scale_pane_g7

0xead2,	// (0x0003a797) cams2_slider_pane_g3

0xead2,	// (0x0003a797) cams2_slider_pane_g4

0xead2,	// (0x0003a797) cams2_slider_pane_g5

0xead2,	// (0x0003a797) cams2_slider_pane_g6

0xead2,	// (0x0003a797) cams2_slider_pane_g7

0xead2,	// (0x0003a797) camera2_autofocus_pane_cp_g1

0x28c7,	// (0x0002e58c) bg_popup_preview_window_pane_cp02_ParamLimits

0x28c7,	// (0x0002e58c) bg_popup_preview_window_pane_cp02

0x30b9,	// (0x0002ed7e) list_fp_cale_pane_ParamLimits

0x30b9,	// (0x0002ed7e) list_fp_cale_pane

0x30c5,	// (0x0002ed8a) popup_fixed_preview_cale_window_t1_ParamLimits

0x30c5,	// (0x0002ed8a) popup_fixed_preview_cale_window_t1

0xa5a0,	// (0x00036265) popup_fixed_preview_cale_window_t2_ParamLimits

0xa5a0,	// (0x00036265) popup_fixed_preview_cale_window_t2

0xa5b5,	// (0x0003627a) popup_fixed_preview_cale_window_t3_ParamLimits

0xa5b5,	// (0x0003627a) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x0003b421) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x0003b421) popup_fixed_preview_cale_window_t

0xa5ca,	// (0x0003628f) list_single_fp_cale_pane_ParamLimits

0xa5ca,	// (0x0003628f) list_single_fp_cale_pane

0x30e3,	// (0x0002eda8) list_single_fp_cale_pane_g1_ParamLimits

0x30e3,	// (0x0002eda8) list_single_fp_cale_pane_g1

0x30ef,	// (0x0002edb4) list_single_fp_cale_pane_g2_ParamLimits

0x30ef,	// (0x0002edb4) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x0003b428) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x0003b428) list_single_fp_cale_pane_g

0x3108,	// (0x0002edcd) list_single_fp_cale_pane_t1_ParamLimits

0x3108,	// (0x0002edcd) list_single_fp_cale_pane_t1

0x311a,	// (0x0002eddf) list_single_fp_cale_pane_t2_ParamLimits

0x311a,	// (0x0002eddf) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x0003b42f) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x0003b42f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe14d,	// (0x00039e12) main_dialer_pane

0xa5da,	// (0x0003629f) aid_cell_size_keypad

0xe14d,	// (0x00039e12) dialer_ne_pane

0xe14d,	// (0x00039e12) grid_dialer_command_1_pane

0xe14d,	// (0x00039e12) grid_dialer_command_2_pane

0xe14d,	// (0x00039e12) grid_dialer_keypad_pane

0x2b99,	// (0x0002e85e) bg_popup_call_pane_cp06_ParamLimits

0x2b99,	// (0x0002e85e) bg_popup_call_pane_cp06

0x2b99,	// (0x0002e85e) dialer_ne_clear_pane_ParamLimits

0x2b99,	// (0x0002e85e) dialer_ne_clear_pane

0xead2,	// (0x0003a797) dialer_ne_pane_g1

0x1426,	// (0x0002d0eb) dialer_ne_pane_t1_ParamLimits

0x1426,	// (0x0002d0eb) dialer_ne_pane_t1

0x3326,	// (0x0002efeb) dialer_ne_pane_t2_ParamLimits

0x3326,	// (0x0002efeb) dialer_ne_pane_t2

0xa5e4,	// (0x000362a9) dialer_ne_pane_t3_ParamLimits

0xa5e4,	// (0x000362a9) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x0003b434) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x0003b434) dialer_ne_pane_t

0xa5e4,	// (0x000362a9) dialer_ne_pane_t3_copy1_ParamLimits

0xa5e4,	// (0x000362a9) dialer_ne_pane_t3_copy1

0xa606,	// (0x000362cb) cell_dialer_keypad_pane_ParamLimits

0xa606,	// (0x000362cb) cell_dialer_keypad_pane

0xa60e,	// (0x000362d3) cell_dialer_command_1_pane_ParamLimits

0xa60e,	// (0x000362d3) cell_dialer_command_1_pane

0xa606,	// (0x000362cb) cell_dialer_command_2_pane_ParamLimits

0xa606,	// (0x000362cb) cell_dialer_command_2_pane

0xf050,	// (0x0003ad15) bg_button_pane_cp02_ParamLimits

0xf050,	// (0x0003ad15) bg_button_pane_cp02

0xe83d,	// (0x0003a502) cell_dialer_keypad_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) cell_dialer_keypad_pane_g1

0xf050,	// (0x0003ad15) bg_button_pane_cp03_ParamLimits

0xf050,	// (0x0003ad15) bg_button_pane_cp03

0xe83d,	// (0x0003a502) cell_dialer_command_1_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) cell_dialer_command_1_pane_g1

0xe14d,	// (0x00039e12) bg_button_pane_cp04

0xead2,	// (0x0003a797) cell_dialer_command_2_pane_g1

0xe14d,	// (0x00039e12) bg_button_pane_cp06

0xead2,	// (0x0003a797) dialer_ne_clear_pane_g1

0x124f,	// (0x0002cf14) navi_pane_g2

0x90f1,	// (0x00034db6) navi_pane_g3

0x0002,

0xf38b,	// (0x0003b050) navi_pane_g

0x12dc,	// (0x0002cfa1) navi_pane_mv_g2

0x1303,	// (0x0002cfc8) navi_pane_mv_g5

0x910e,	// (0x00034dd3) navi_pane_mv_t1

0xe8b3,	// (0x0003a578) main_clock2_pane

0xa653,	// (0x00036318) main_clock2_list_pane_ParamLimits

0xa653,	// (0x00036318) main_clock2_list_pane

0xa679,	// (0x0003633e) main_clock2_pane_t1_ParamLimits

0xa679,	// (0x0003633e) main_clock2_pane_t1

0xa699,	// (0x0003635e) main_clock2_pane_t2_ParamLimits

0xa699,	// (0x0003635e) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x0003b440) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x0003b440) main_clock2_pane_t

0xa6f2,	// (0x000363b7) popup_clock_analogue_window_cp03_ParamLimits

0xa6f2,	// (0x000363b7) popup_clock_analogue_window_cp03

0xa710,	// (0x000363d5) popup_clock_digital_window_cp02_ParamLimits

0xa710,	// (0x000363d5) popup_clock_digital_window_cp02

0xa77d,	// (0x00036442) main_clock2_list_single_pane_ParamLimits

0xa77d,	// (0x00036442) main_clock2_list_single_pane

0xea78,	// (0x0003a73d) list_highlight_pane_cp05

0x317d,	// (0x0002ee42) main_clock2_list_single_pane_t1

0x7f6a,	// (0x00033c2f) popup_toolbar_window_cp04_ParamLimits

0xe84b,	// (0x0003a510) camera2_autofocus_pane_g2_ParamLimits

0xe84b,	// (0x0003a510) camera2_autofocus_pane_g2

0xe84b,	// (0x0003a510) camera2_autofocus_pane_g3_ParamLimits

0xe84b,	// (0x0003a510) camera2_autofocus_pane_g3

0xe84b,	// (0x0003a510) camera2_autofocus_pane_g4_ParamLimits

0xe84b,	// (0x0003a510) camera2_autofocus_pane_g4

0xe84b,	// (0x0003a510) camera2_autofocus_pane_g5_ParamLimits

0xe84b,	// (0x0003a510) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x0003b384) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x0003b384) camera2_autofocus_pane_g

0xa027,	// (0x00035cec) camera2_autofocus_pane_cp_g2

0xa02f,	// (0x00035cf4) camera2_autofocus_pane_cp_g3

0xa037,	// (0x00035cfc) camera2_autofocus_pane_cp_g4

0xa03f,	// (0x00035d04) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x0003b3ea) camera2_autofocus_pane_cp_g

0xe14d,	// (0x00039e12) popup_dialer_spcha_window

0xe14d,	// (0x00039e12) bg_popup_sub_pane_cp07

0xe14d,	// (0x00039e12) list_spcha_pane

0xe14d,	// (0x00039e12) list_single_spcha_pane_ParamLimits

0xe14d,	// (0x00039e12) list_single_spcha_pane

0xe14d,	// (0x00039e12) list_highlight_pane_cp06

0x318b,	// (0x0002ee50) list_single_spcha_pane_t1

0x22b8,	// (0x0002df7d) popup_call2_audio_out_window_g4_ParamLimits

0x22b8,	// (0x0002df7d) popup_call2_audio_out_window_g4

0xe14d,	// (0x00039e12) main_imed2_pane

0x9a87,	// (0x0003574c) popup_imed_adjust2_window

0x9a98,	// (0x0003575d) popup_imed_trans_window_ParamLimits

0x9a98,	// (0x0003575d) popup_imed_trans_window

0x2bf0,	// (0x0002e8b5) popup_blid_sat_info2_window_t1

0x2bfe,	// (0x0002e8c3) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x0003b319) popup_blid_sat_info2_window_t

0xa827,	// (0x000364ec) aid_size_cell_colour_35

0xa83e,	// (0x00036503) aid_size_cell_colour_112

0xa855,	// (0x0003651a) aid_size_cell_effect

0xf050,	// (0x0003ad15) bg_tb_trans_pane_cp02

0x0e9d,	// (0x0002cb62) heading_imed_pane

0xa86f,	// (0x00036534) listscroll_imed_pane

0x319b,	// (0x0002ee60) heading_imed_pane_g1

0x31a3,	// (0x0002ee68) heading_imed_pane_t1

0x31b1,	// (0x0002ee76) grid_imed_colour_35_pane_ParamLimits

0x31b1,	// (0x0002ee76) grid_imed_colour_35_pane

0xa87b,	// (0x00036540) grid_imed_effect_pane

0x31c4,	// (0x0002ee89) list_imed_aspect_pane

0xa887,	// (0x0003654c) scroll_pane_cp027_ParamLimits

0xa887,	// (0x0003654c) scroll_pane_cp027

0xa893,	// (0x00036558) cell_imed_effect_pane_ParamLimits

0xa893,	// (0x00036558) cell_imed_effect_pane

0x31cc,	// (0x0002ee91) cell_imed_colour_pane_ParamLimits

0x31cc,	// (0x0002ee91) cell_imed_colour_pane

0x3206,	// (0x0002eecb) cell_imed_colour_pane_g1_ParamLimits

0x3206,	// (0x0002eecb) cell_imed_colour_pane_g1

0x3217,	// (0x0002eedc) hgihlgiht_grid_pane_cp016_ParamLimits

0x3217,	// (0x0002eedc) hgihlgiht_grid_pane_cp016

0xa8a9,	// (0x0003656e) cell_imed_effect_pane_g1

0xa8b1,	// (0x00036576) grid_highlight_pane_cp017

0x3228,	// (0x0002eeed) list_imed_single_pane_ParamLimits

0x3228,	// (0x0002eeed) list_imed_single_pane

0xe14d,	// (0x00039e12) list_highlight_pane_cp07

0x323b,	// (0x0002ef00) list_imed_aspect_pane_comp1_t1

0x1448,	// (0x0002d10d) bg_tb_trans_pane_cp05

0x325b,	// (0x0002ef20) popup_imed_adjust2_window_g1

0x3282,	// (0x0002ef47) popup_imed_adjust2_window_t1

0x329a,	// (0x0002ef5f) slider_imed_adjust_pane

0x32ae,	// (0x0002ef73) slider_imed_adjust_pane_g1

0x32be,	// (0x0002ef83) slider_imed_adjust_pane_g2

0x32ce,	// (0x0002ef93) slider_imed_adjust_pane_g3

0x32df,	// (0x0002efa4) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x0003b45d) slider_imed_adjust_pane_g

0xa8ba,	// (0x0003657f) aid_size_cell_clipart2

0xa8c6,	// (0x0003658b) grid_imed_clipart_pane

0x32f0,	// (0x0002efb5) scroll_pane_cp031

0xa8d0,	// (0x00036595) cell_imed_clipart_pane_ParamLimits

0xa8d0,	// (0x00036595) cell_imed_clipart_pane

0xa8e7,	// (0x000365ac) cell_imed_clipart_pane_g1

0xe14d,	// (0x00039e12) grid_highlight_pane_cp014

0xa65f,	// (0x00036324) main_clock2_pane_g1_ParamLimits

0xa65f,	// (0x00036324) main_clock2_pane_g1

0xa728,	// (0x000363ed) aid_call2_pane_cp10

0xa73a,	// (0x000363ff) aid_call_pane_cp10

0x11de,	// (0x0002cea3) popup_clock_analogue_window_cp10_g1

0x11de,	// (0x0002cea3) popup_clock_analogue_window_cp10_g2

0xa74c,	// (0x00036411) popup_clock_analogue_window_cp10_g3

0xa74c,	// (0x00036411) popup_clock_analogue_window_cp10_g4

0x11de,	// (0x0002cea3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x0003b44b) popup_clock_analogue_window_cp10_g

0xa75e,	// (0x00036423) popup_clock_analogue_window_cp10_t1

0xa78f,	// (0x00036454) clock_digital_number_pane_cp10_ParamLimits

0xa78f,	// (0x00036454) clock_digital_number_pane_cp10

0xa7a7,	// (0x0003646c) clock_digital_number_pane_cp11_ParamLimits

0xa7a7,	// (0x0003646c) clock_digital_number_pane_cp11

0xa7bf,	// (0x00036484) clock_digital_number_pane_cp12_ParamLimits

0xa7bf,	// (0x00036484) clock_digital_number_pane_cp12

0xa7d7,	// (0x0003649c) clock_digital_number_pane_cp13_ParamLimits

0xa7d7,	// (0x0003649c) clock_digital_number_pane_cp13

0xa7ef,	// (0x000364b4) clock_digital_separator_pane_cp10_ParamLimits

0xa7ef,	// (0x000364b4) clock_digital_separator_pane_cp10

0xa807,	// (0x000364cc) popup_clock_digital_window_cp02_t1_ParamLimits

0xa807,	// (0x000364cc) popup_clock_digital_window_cp02_t1

0xe7bb,	// (0x0003a480) clock_digital_number_pane_cp10_g1

0xe7bb,	// (0x0003a480) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x0003b466) clock_digital_number_pane_cp10_g

0xe7bb,	// (0x0003a480) clock_digital_separator_pane_cp10_g1

0xe7bb,	// (0x0003a480) clock_digital_separator_pane_g2_cp10

0x130b,	// (0x0002cfd0) navi_pane_vded_g4

0x1314,	// (0x0002cfd9) navi_pane_vded_g5

0x131d,	// (0x0002cfe2) navi_pane_vded_t1

0xe14d,	// (0x00039e12) main_vded_pane

0xa8f0,	// (0x000365b5) main_vded_pane_g1

0xa8f8,	// (0x000365bd) main_vded_pane_g2

0xa900,	// (0x000365c5) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x0003b46b) main_vded_pane_g

0xa908,	// (0x000365cd) main_vded_pane_t1

0xa916,	// (0x000365db) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x0003b472) main_vded_pane_t

0xa924,	// (0x000365e9) vded_slider_pane

0xa92c,	// (0x000365f1) vded_video_pane

0x32f8,	// (0x0002efbd) vded_video_pane_g1

0xa934,	// (0x000365f9) vded_video_pane_g2

0xead2,	// (0x0003a797) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x0003b477) vded_video_pane_g

0x3302,	// (0x0002efc7) vded_slider_pane_g1

0x2b05,	// (0x0002e7ca) vded_slider_pane_g2

0x330b,	// (0x0002efd0) vded_slider_pane_g3

0x3314,	// (0x0002efd9) vded_slider_pane_g4

0x331d,	// (0x0002efe2) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x0003b47e) vded_slider_pane_g

0xa513,	// (0x000361d8) mup3_rocker_pane_ParamLimits

0xa513,	// (0x000361d8) mup3_rocker_pane

0xa93d,	// (0x00036602) mup3_control_keys_pane_g1

0xa945,	// (0x0003660a) mup3_control_keys_pane_g2

0xa94d,	// (0x00036612) mup3_control_keys_pane_g3

0xa955,	// (0x0003661a) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x0003b489) mup3_control_keys_pane_g

0x7243,	// (0x00032f08) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7243,	// (0x00032f08) popup_toolbar2_fixed_window_cp01

0xa52b,	// (0x000361f0) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa52b,	// (0x000361f0) popup_toolbar2_fixed_window_cp02

0x1bc3,	// (0x0002d888) popup_call2_audio_second_window_t4_ParamLimits

0x1bc3,	// (0x0002d888) popup_call2_audio_second_window_t4

0x2125,	// (0x0002ddea) popup_call2_audio_first_window_t6_ParamLimits

0x2125,	// (0x0002ddea) popup_call2_audio_first_window_t6

0x23bb,	// (0x0002e080) popup_call2_audio_out_window_t6_ParamLimits

0x23bb,	// (0x0002e080) popup_call2_audio_out_window_t6

0xe14d,	// (0x00039e12) main_vitu_pane

0x143a,	// (0x0002d0ff) aid_size_cell_itu_ParamLimits

0x143a,	// (0x0002d0ff) aid_size_cell_itu

0x143a,	// (0x0002d0ff) bg_popup_window_pane_cp08_ParamLimits

0x143a,	// (0x0002d0ff) bg_popup_window_pane_cp08

0x143a,	// (0x0002d0ff) field_vitu_entry_pane_ParamLimits

0x143a,	// (0x0002d0ff) field_vitu_entry_pane

0x143a,	// (0x0002d0ff) grid_vitu_function_pane_ParamLimits

0x143a,	// (0x0002d0ff) grid_vitu_function_pane

0x143a,	// (0x0002d0ff) grid_vitu_itu_pane_ParamLimits

0x143a,	// (0x0002d0ff) grid_vitu_itu_pane

0xa965,	// (0x0003662a) cell_vitu_itu_pane_ParamLimits

0xa965,	// (0x0003662a) cell_vitu_itu_pane

0x143a,	// (0x0002d0ff) cell_vitu_function_pane_ParamLimits

0x143a,	// (0x0002d0ff) cell_vitu_function_pane

0xf050,	// (0x0003ad15) bg_popup_sub_pane_cp08_ParamLimits

0xf050,	// (0x0003ad15) bg_popup_sub_pane_cp08

0xf03c,	// (0x0003ad01) field_vitu_entry_pane_t1_ParamLimits

0xf03c,	// (0x0003ad01) field_vitu_entry_pane_t1

0x3326,	// (0x0002efeb) field_vitu_entry_pane_t2_ParamLimits

0x3326,	// (0x0002efeb) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x0003b497) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x0003b497) field_vitu_entry_pane_t

0x2b99,	// (0x0002e85e) bg_button_pane_cp05_ParamLimits

0x2b99,	// (0x0002e85e) bg_button_pane_cp05

0x3343,	// (0x0002f008) cell_vitu_itu_pane_g1

0x1412,	// (0x0002d0d7) cell_vitu_itu_pane_t1_ParamLimits

0x1412,	// (0x0002d0d7) cell_vitu_itu_pane_t1

0x1412,	// (0x0002d0d7) cell_vitu_itu_pane_t2_ParamLimits

0x1412,	// (0x0002d0d7) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x0003b49c) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x0003b49c) cell_vitu_itu_pane_t

0xe14d,	// (0x00039e12) bg_button_pane_cp07

0xead2,	// (0x0003a797) cell_vitu_function_pane_g1

0x73a8,	// (0x0003306d) main_calc_pane_g1

0x7069,	// (0x00032d2e) aid_visual_content_pane

0xe14d,	// (0x00039e12) main_vradio_pane

0xe84b,	// (0x0003a510) main_vradio_pane_g1_ParamLimits

0xe84b,	// (0x0003a510) main_vradio_pane_g1

0xe84b,	// (0x0003a510) main_vradio_pane_g2_ParamLimits

0xe84b,	// (0x0003a510) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x0003b4a3) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x0003b4a3) main_vradio_pane_g

0x1426,	// (0x0002d0eb) main_vradio_pane_t1_ParamLimits

0x1426,	// (0x0002d0eb) main_vradio_pane_t1

0x1426,	// (0x0002d0eb) main_vradio_pane_t2_ParamLimits

0x1426,	// (0x0002d0eb) main_vradio_pane_t2

0x1426,	// (0x0002d0eb) main_vradio_pane_t3_ParamLimits

0x1426,	// (0x0002d0eb) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x0003b4a8) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x0003b4a8) main_vradio_pane_t

0x143a,	// (0x0002d0ff) vradio_rocker_control_pane_ParamLimits

0x143a,	// (0x0002d0ff) vradio_rocker_control_pane

0x143a,	// (0x0002d0ff) vradio_station_info_pane_ParamLimits

0x143a,	// (0x0002d0ff) vradio_station_info_pane

0xf050,	// (0x0003ad15) vradio_frequency_info_pane_ParamLimits

0xf050,	// (0x0003ad15) vradio_frequency_info_pane

0xead2,	// (0x0003a797) vradio_station_info_pane_g1

0x1412,	// (0x0002d0d7) vradio_station_info_pane_t1_ParamLimits

0x1412,	// (0x0002d0d7) vradio_station_info_pane_t1

0x1426,	// (0x0002d0eb) vradio_station_info_pane_t2_ParamLimits

0x1426,	// (0x0002d0eb) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x0003b4af) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x0003b4af) vradio_station_info_pane_t

0xe14d,	// (0x00039e12) vradio_tuning_pane

0xa973,	// (0x00036638) vradio_rocker_control_pane_g1

0x335f,	// (0x0002f024) vradio_rocker_control_pane_g2

0xa97b,	// (0x00036640) vradio_rocker_control_pane_g3

0xa983,	// (0x00036648) vradio_rocker_control_pane_g4

0xa98b,	// (0x00036650) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x0003b4b4) vradio_rocker_control_pane_g

0xead2,	// (0x0003a797) vradio_frequency_info_pane_g1

0xf03c,	// (0x0003ad01) vradio_frequency_info_pane_t1_ParamLimits

0xf03c,	// (0x0003ad01) vradio_frequency_info_pane_t1

0xa993,	// (0x00036658) vradio_tuning_pane_g1

0xa99c,	// (0x00036661) vradio_tuning_pane_t1

0x70a8,	// (0x00032d6d) area_side_right_pane_ParamLimits

0x70a8,	// (0x00032d6d) area_side_right_pane

0x288e,	// (0x0002e553) status_small_pane_g1

0x2896,	// (0x0002e55b) status_small_pane_g2

0x289f,	// (0x0002e564) status_small_pane_g3

0x28a8,	// (0x0002e56d) status_small_pane_g4

0x0003,

0xf5b6,	// (0x0003b27b) status_small_pane_g

0x28b1,	// (0x0002e576) status_small_pane_t1

0xe14d,	// (0x00039e12) main_video3_pane

0x3367,	// (0x0002f02c) cams_zoom_vslider_pane

0x336f,	// (0x0002f034) image3_wide_pane_ParamLimits

0x336f,	// (0x0002f034) image3_wide_pane

0x3389,	// (0x0002f04e) image3_wide_small_pane

0x3393,	// (0x0002f058) main_video3_pane_g1_ParamLimits

0x3393,	// (0x0002f058) main_video3_pane_g1

0x33af,	// (0x0002f074) main_video3_pane_g2_ParamLimits

0x33af,	// (0x0002f074) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x0003b4bf) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x0003b4bf) main_video3_pane_g

0x33cb,	// (0x0002f090) main_video3_pane_t1_ParamLimits

0x33cb,	// (0x0002f090) main_video3_pane_t1

0x33f6,	// (0x0002f0bb) main_video3_pane_t2_ParamLimits

0x33f6,	// (0x0002f0bb) main_video3_pane_t2

0x3421,	// (0x0002f0e6) main_video3_pane_t3_ParamLimits

0x3421,	// (0x0002f0e6) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x0003b4c4) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x0003b4c4) main_video3_pane_t

0x344c,	// (0x0002f111) cams_zoom_vslider_pane_g1

0x3455,	// (0x0002f11a) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x0003b4cb) cams_zoom_vslider_pane_g

0x345d,	// (0x0002f122) small_slider_vertical_pane

0xead2,	// (0x0003a797) small_slider_vertical_pane_g1

0xead2,	// (0x0003a797) small_slider_vertical_pane_g2

0x3465,	// (0x0002f12a) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x0003b4d0) small_slider_vertical_pane_g

0xe14d,	// (0x00039e12) main_hwr_training_pane

0x346e,	// (0x0002f133) hwr_training_instruct_pane_ParamLimits

0x346e,	// (0x0002f133) hwr_training_instruct_pane

0xa9ab,	// (0x00036670) hwr_training_navi_pane_ParamLimits

0xa9ab,	// (0x00036670) hwr_training_navi_pane

0xa9bf,	// (0x00036684) hwr_training_write_pane_ParamLimits

0xa9bf,	// (0x00036684) hwr_training_write_pane

0xe14d,	// (0x00039e12) bg_frame_shadow_pane

0x349d,	// (0x0002f162) hwr_training_write_pane_g1

0x34a5,	// (0x0002f16a) hwr_training_write_pane_g2

0x34ad,	// (0x0002f172) hwr_training_write_pane_g3

0x34b5,	// (0x0002f17a) hwr_training_write_pane_g4

0x34bd,	// (0x0002f182) hwr_training_write_pane_g5

0x34c5,	// (0x0002f18a) hwr_training_write_pane_g6

0x34cd,	// (0x0002f192) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x0003b4d7) hwr_training_write_pane_g

0xa9ed,	// (0x000366b2) hwr_training_navi_pane_g1_ParamLimits

0xa9ed,	// (0x000366b2) hwr_training_navi_pane_g1

0xa9ff,	// (0x000366c4) hwr_training_navi_pane_g2_ParamLimits

0xa9ff,	// (0x000366c4) hwr_training_navi_pane_g2

0xaa11,	// (0x000366d6) hwr_training_navi_pane_g3_ParamLimits

0xaa11,	// (0x000366d6) hwr_training_navi_pane_g3

0xaa21,	// (0x000366e6) hwr_training_navi_pane_g4_ParamLimits

0xaa21,	// (0x000366e6) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x0003b4e6) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x0003b4e6) hwr_training_navi_pane_g

0xaa3b,	// (0x00036700) hwr_training_navi_pane_t1

0xaa49,	// (0x0003670e) list_single_hwr_training_instruct_pane_ParamLimits

0xaa49,	// (0x0003670e) list_single_hwr_training_instruct_pane

0x3524,	// (0x0002f1e9) list_single_hwr_training_instruct_pane_t1

0x2ccc,	// (0x0002e991) bg_frame_shadow_pane_g1

0x3533,	// (0x0002f1f8) bg_frame_shadow_pane_g2

0x353b,	// (0x0002f200) bg_frame_shadow_pane_g3

0x3543,	// (0x0002f208) bg_frame_shadow_pane_g4

0x354b,	// (0x0002f210) bg_frame_shadow_pane_g5

0x3553,	// (0x0002f218) bg_frame_shadow_pane_g6

0x355b,	// (0x0002f220) bg_frame_shadow_pane_g7

0xe974,	// (0x0003a639) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x0003b4f1) bg_frame_shadow_pane_g

0xe14d,	// (0x00039e12) main_video_tele_dialer_pane

0xaa61,	// (0x00036726) aid_size_cell_video_keypad_ParamLimits

0xaa61,	// (0x00036726) aid_size_cell_video_keypad

0xaa71,	// (0x00036736) grid_video_dialer_keypad_pane_ParamLimits

0xaa71,	// (0x00036736) grid_video_dialer_keypad_pane

0xaaa1,	// (0x00036766) video_down_pane_cp_ParamLimits

0xaaa1,	// (0x00036766) video_down_pane_cp

0xaac9,	// (0x0003678e) cell_video_dialer_keypad_pane_ParamLimits

0xaac9,	// (0x0003678e) cell_video_dialer_keypad_pane

0x3563,	// (0x0002f228) bg_button_pane_cp08_ParamLimits

0x3563,	// (0x0002f228) bg_button_pane_cp08

0xaade,	// (0x000367a3) cell_video_dialer_keypad_pane_g1_ParamLimits

0xaade,	// (0x000367a3) cell_video_dialer_keypad_pane_g1

0xa507,	// (0x000361cc) mup3_rocker2_pane_ParamLimits

0xa507,	// (0x000361cc) mup3_rocker2_pane

0xead2,	// (0x0003a797) mup3_rocker2_pane_g1

0x9a09,	// (0x000356ce) main_dialer2_pane

0xe14d,	// (0x00039e12) main_mp4_pane

0xab33,	// (0x000367f8) main_mp4_pane_g1_ParamLimits

0xab33,	// (0x000367f8) main_mp4_pane_g1

0xab41,	// (0x00036806) main_mp4_pane_g2_ParamLimits

0xab41,	// (0x00036806) main_mp4_pane_g2

0xab4f,	// (0x00036814) main_mp4_pane_g3_ParamLimits

0xab4f,	// (0x00036814) main_mp4_pane_g3

0xab84,	// (0x00036849) main_mp4_pane_g4_ParamLimits

0xab84,	// (0x00036849) main_mp4_pane_g4

0xabb2,	// (0x00036877) main_mp4_pane_g5_ParamLimits

0xabb2,	// (0x00036877) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x0003b511) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x0003b511) main_mp4_pane_g

0xac26,	// (0x000368eb) main_mp4_pane_t1_ParamLimits

0xac26,	// (0x000368eb) main_mp4_pane_t1

0xac7e,	// (0x00036943) main_mp4_pane_t2_ParamLimits

0xac7e,	// (0x00036943) main_mp4_pane_t2

0x36e7,	// (0x0002f3ac) main_mp4_pane_t3_ParamLimits

0x36e7,	// (0x0002f3ac) main_mp4_pane_t3

0xacd0,	// (0x00036995) main_mp4_pane_t4_ParamLimits

0xacd0,	// (0x00036995) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x0003b522) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x0003b522) main_mp4_pane_t

0xad10,	// (0x000369d5) mp4_progress_pane_ParamLimits

0xad10,	// (0x000369d5) mp4_progress_pane

0xad54,	// (0x00036a19) mp4_rocker_pane_ParamLimits

0xad54,	// (0x00036a19) mp4_rocker_pane

0x37b7,	// (0x0002f47c) mp4_progress_pane_t1

0x37ce,	// (0x0002f493) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x0003b52b) mp4_progress_pane_t

0x37e5,	// (0x0002f4aa) mup_progress_pane_cp04

0xead2,	// (0x0003a797) mp4_rocker_pane_g1

0x143a,	// (0x0002d0ff) aid_cell_size_keypad2_ParamLimits

0x143a,	// (0x0002d0ff) aid_cell_size_keypad2

0xad72,	// (0x00036a37) dialer2_ne_pane_ParamLimits

0xad72,	// (0x00036a37) dialer2_ne_pane

0x143a,	// (0x0002d0ff) grid_dialer2_keypad_pane_ParamLimits

0x143a,	// (0x0002d0ff) grid_dialer2_keypad_pane

0x4287,	// (0x0002ff4c) bg_popup_call_pane_cp07_ParamLimits

0x4287,	// (0x0002ff4c) bg_popup_call_pane_cp07

0xf03c,	// (0x0003ad01) dialer2_ne_pane_t1_ParamLimits

0xf03c,	// (0x0003ad01) dialer2_ne_pane_t1

0xad81,	// (0x00036a46) cell_dialer2_keypad_pane_ParamLimits

0xad81,	// (0x00036a46) cell_dialer2_keypad_pane

0x37f1,	// (0x0002f4b6) bg_button_pane_pane_cp04_ParamLimits

0x37f1,	// (0x0002f4b6) bg_button_pane_pane_cp04

0xe83d,	// (0x0003a502) cell_dialer2_keypad_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) cell_dialer2_keypad_pane_g1

0x7e46,	// (0x00033b0b) aid_placing_vt_set_content_ParamLimits

0x7e46,	// (0x00033b0b) aid_placing_vt_set_content

0x7e6c,	// (0x00033b31) aid_placing_vt_set_title_ParamLimits

0x7e6c,	// (0x00033b31) aid_placing_vt_set_title

0xe14d,	// (0x00039e12) main_image3_pane

0xadb5,	// (0x00036a7a) area_side_right_pane_cp01_ParamLimits

0xadb5,	// (0x00036a7a) area_side_right_pane_cp01

0xe859,	// (0x0003a51e) main_image3_pane_g1_ParamLimits

0xe859,	// (0x0003a51e) main_image3_pane_g1

0xade2,	// (0x00036aa7) main_image3_pane_g2_ParamLimits

0xade2,	// (0x00036aa7) main_image3_pane_g2

0xadf9,	// (0x00036abe) main_image3_pane_g3_ParamLimits

0xadf9,	// (0x00036abe) main_image3_pane_g3

0xae10,	// (0x00036ad5) main_image3_pane_g4_ParamLimits

0xae10,	// (0x00036ad5) main_image3_pane_g4

0x0003,

0xf875,	// (0x0003b53a) main_image3_pane_g_ParamLimits

0xf875,	// (0x0003b53a) main_image3_pane_g

0xae27,	// (0x00036aec) main_image3_pane_t1_ParamLimits

0xae27,	// (0x00036aec) main_image3_pane_t1

0xae4c,	// (0x00036b11) main_image3_pane_t2_ParamLimits

0xae4c,	// (0x00036b11) main_image3_pane_t2

0xae6b,	// (0x00036b30) main_image3_pane_t3_ParamLimits

0xae6b,	// (0x00036b30) main_image3_pane_t3

0x0003,

0xf87e,	// (0x0003b543) main_image3_pane_t_ParamLimits

0xf87e,	// (0x0003b543) main_image3_pane_t

0x143a,	// (0x0002d0ff) grid_sctrl_middle_pane_cp01_ParamLimits

0x143a,	// (0x0002d0ff) grid_sctrl_middle_pane_cp01

0xaec6,	// (0x00036b8b) cell_sctrl_middle_pane_cp01_ParamLimits

0xaec6,	// (0x00036b8b) cell_sctrl_middle_pane_cp01

0xaed7,	// (0x00036b9c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaed7,	// (0x00036b9c) cell_sctrl_middle_pane_cp01_g1

0xe14d,	// (0x00039e12) main_call4_pane

0xaee4,	// (0x00036ba9) aid_size_button_call4_ParamLimits

0xaee4,	// (0x00036ba9) aid_size_button_call4

0xaf0e,	// (0x00036bd3) call4_windows_pane_ParamLimits

0xaf0e,	// (0x00036bd3) call4_windows_pane

0xaf22,	// (0x00036be7) grid_call4_button_pane_ParamLimits

0xaf22,	// (0x00036be7) grid_call4_button_pane

0x3857,	// (0x0002f51c) call4_windows_conf_pane

0x386a,	// (0x0002f52f) popup_call4_audio_first_window_ParamLimits

0x386a,	// (0x0002f52f) popup_call4_audio_first_window

0x38aa,	// (0x0002f56f) popup_call4_audio_second_window_ParamLimits

0x38aa,	// (0x0002f56f) popup_call4_audio_second_window

0x38bc,	// (0x0002f581) popup_call4_audio_wait_window_ParamLimits

0x38bc,	// (0x0002f581) popup_call4_audio_wait_window

0xaf44,	// (0x00036c09) cell_call4_button_pane_ParamLimits

0xaf44,	// (0x00036c09) cell_call4_button_pane

0xe91e,	// (0x0003a5e3) bg_button_pane_cp09_ParamLimits

0xe91e,	// (0x0003a5e3) bg_button_pane_cp09

0xaf67,	// (0x00036c2c) cell_call4_button_pane_g1_ParamLimits

0xaf67,	// (0x00036c2c) cell_call4_button_pane_g1

0xaf74,	// (0x00036c39) cell_call4_button_pane_t1_ParamLimits

0xaf74,	// (0x00036c39) cell_call4_button_pane_t1

0x3902,	// (0x0002f5c7) popup_call4_audio_conf_window_ParamLimits

0x3902,	// (0x0002f5c7) popup_call4_audio_conf_window

0xa538,	// (0x000361fd) mup3_progress_pane_t1_ParamLimits

0xa556,	// (0x0003621b) mup3_progress_pane_t2_ParamLimits

0x3076,	// (0x0002ed3b) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x0003b413) mup3_progress_pane_t_ParamLimits

0x3093,	// (0x0002ed58) mup_progress_pane_cp03_ParamLimits

0xa95d,	// (0x00036622) mup3_control_keys_pane_g4_copy1

0xad3e,	// (0x00036a03) mp4_rocker2_pane_ParamLimits

0xad3e,	// (0x00036a03) mp4_rocker2_pane

0x391e,	// (0x0002f5e3) mp4_rocker2_pane_g1

0x3916,	// (0x0002f5db) mp4_rocker2_pane_g2

0xafb8,	// (0x00036c7d) mp4_rocker2_pane_g3

0xafc0,	// (0x00036c85) mp4_rocker2_pane_g4

0xafc8,	// (0x00036c8d) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x0003b54c) mp4_rocker2_pane_g

0xe14d,	// (0x00039e12) main_camera4_pane

0xe14d,	// (0x00039e12) main_video4_pane

0xaa7d,	// (0x00036742) main_video_tele_dialer_pane_t1_ParamLimits

0xaa7d,	// (0x00036742) main_video_tele_dialer_pane_t1

0xaa8f,	// (0x00036754) main_video_tele_dialer_pane_t2_ParamLimits

0xaa8f,	// (0x00036754) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x0003b502) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x0003b502) main_video_tele_dialer_pane_t

0xafe6,	// (0x00036cab) cam4_autofocus_pane_ParamLimits

0xafe6,	// (0x00036cab) cam4_autofocus_pane

0xaffc,	// (0x00036cc1) cam4_image_uncrop_pane_ParamLimits

0xaffc,	// (0x00036cc1) cam4_image_uncrop_pane

0xb011,	// (0x00036cd6) cam4_indicators_pane_ParamLimits

0xb011,	// (0x00036cd6) cam4_indicators_pane

0xb02b,	// (0x00036cf0) main_camera4_pane_g1_ParamLimits

0xb02b,	// (0x00036cf0) main_camera4_pane_g1

0xb037,	// (0x00036cfc) main_camera4_pane_g2_ParamLimits

0xb037,	// (0x00036cfc) main_camera4_pane_g2

0xb037,	// (0x00036cfc) main_camera4_pane_g3_ParamLimits

0xb037,	// (0x00036cfc) main_camera4_pane_g3

0xb043,	// (0x00036d08) main_camera4_pane_g4_ParamLimits

0xb043,	// (0x00036d08) main_camera4_pane_g4

0xb04f,	// (0x00036d14) main_camera4_pane_g5_ParamLimits

0xb04f,	// (0x00036d14) main_camera4_pane_g5

0x0005,

0xf892,	// (0x0003b557) main_camera4_pane_g_ParamLimits

0xf892,	// (0x0003b557) main_camera4_pane_g

0xb069,	// (0x00036d2e) main_camera4_pane_t1_ParamLimits

0xb069,	// (0x00036d2e) main_camera4_pane_t1

0xe83d,	// (0x0003a502) bg_tb_trans_pane_cp06

0xb0b9,	// (0x00036d7e) cam4_indicators_pane_g1

0xb0c9,	// (0x00036d8e) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x0003b572) cam4_indicators_pane_g

0xb0e9,	// (0x00036dae) cam4_indicators_pane_t1

0xb111,	// (0x00036dd6) main_video4_pane_g1_ParamLimits

0xb111,	// (0x00036dd6) main_video4_pane_g1

0xb037,	// (0x00036cfc) main_video4_pane_g2_ParamLimits

0xb037,	// (0x00036cfc) main_video4_pane_g2

0xb037,	// (0x00036cfc) main_video4_pane_g3_ParamLimits

0xb037,	// (0x00036cfc) main_video4_pane_g3

0xb043,	// (0x00036d08) main_video4_pane_g4_ParamLimits

0xb043,	// (0x00036d08) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x0003b579) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x0003b579) main_video4_pane_g

0xb125,	// (0x00036dea) vid4_indicators_pane_ParamLimits

0xb125,	// (0x00036dea) vid4_indicators_pane

0xb143,	// (0x00036e08) video4_image_uncrop_cif_pane_ParamLimits

0xb143,	// (0x00036e08) video4_image_uncrop_cif_pane

0xb150,	// (0x00036e15) video4_image_uncrop_nhd_pane_ParamLimits

0xb150,	// (0x00036e15) video4_image_uncrop_nhd_pane

0xaffc,	// (0x00036cc1) video4_image_uncrop_vga_pane_ParamLimits

0xaffc,	// (0x00036cc1) video4_image_uncrop_vga_pane

0xf050,	// (0x0003ad15) bg_tb_trans_pane_cp07

0xb0b9,	// (0x00036d7e) vid4_indicators_pane_g1

0xb15d,	// (0x00036e22) vid4_indicators_pane_g2

0xb16d,	// (0x00036e32) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x0003b584) vid4_indicators_pane_g

0xb19a,	// (0x00036e5f) vid4_indicators_pane_t1

0xb1b4,	// (0x00036e79) cam4_autofocus_pane_g1

0xb1bc,	// (0x00036e81) cam4_autofocus_pane_g2

0xb1c4,	// (0x00036e89) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x0003b58f) cam4_autofocus_pane_g

0xb1cc,	// (0x00036e91) cam4_autofocus_pane_g3_copy1

0xaaad,	// (0x00036772) video_down_pane_cp_t1

0xaabb,	// (0x00036780) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x0003b507) video_down_pane_cp_t

0x143a,	// (0x0002d0ff) popup_vitu2_window_ParamLimits

0x143a,	// (0x0002d0ff) popup_vitu2_window

0xb1d4,	// (0x00036e99) aid_size_cell2_itu2_ParamLimits

0xb1d4,	// (0x00036e99) aid_size_cell2_itu2

0xb1f6,	// (0x00036ebb) aid_size_cell_itu2_ParamLimits

0xb1f6,	// (0x00036ebb) aid_size_cell_itu2

0x4287,	// (0x0002ff4c) bg_popup_window_pane_cp09_ParamLimits

0x4287,	// (0x0002ff4c) bg_popup_window_pane_cp09

0xb234,	// (0x00036ef9) field_vitu2_entry_pane_ParamLimits

0xb234,	// (0x00036ef9) field_vitu2_entry_pane

0xb24a,	// (0x00036f0f) grid_vitu2_function_pane_ParamLimits

0xb24a,	// (0x00036f0f) grid_vitu2_function_pane

0xb27c,	// (0x00036f41) grid_vitu2_itu_pane_ParamLimits

0xb27c,	// (0x00036f41) grid_vitu2_itu_pane

0xb2d6,	// (0x00036f9b) cell_vitu2_itu_pane_ParamLimits

0xb2d6,	// (0x00036f9b) cell_vitu2_itu_pane

0xb2ee,	// (0x00036fb3) cell_vitu2_function_pane_ParamLimits

0xb2ee,	// (0x00036fb3) cell_vitu2_function_pane

0x3a17,	// (0x0002f6dc) bg_popup_call_pane_cp08_ParamLimits

0x3a17,	// (0x0002f6dc) bg_popup_call_pane_cp08

0x3a2e,	// (0x0002f6f3) field_vitu2_entry_pane_g1

0x3a3a,	// (0x0002f6ff) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x0003b596) field_vitu2_entry_pane_g

0x64ad,	// (0x00032172) field_vitu2_entry_pane_t1_ParamLimits

0x64ad,	// (0x00032172) field_vitu2_entry_pane_t1

0x64dc,	// (0x000321a1) field_vitu2_entry_pane_t2_ParamLimits

0x64dc,	// (0x000321a1) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x0003b59d) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x0003b59d) field_vitu2_entry_pane_t

0xb32d,	// (0x00036ff2) bg_button_pane_cp010_ParamLimits

0xb32d,	// (0x00036ff2) bg_button_pane_cp010

0xb33b,	// (0x00037000) cell_vitu2_itu_pane_g1

0xb35b,	// (0x00037020) cell_vitu2_itu_pane_t1_ParamLimits

0xb35b,	// (0x00037020) cell_vitu2_itu_pane_t1

0x64f9,	// (0x000321be) cell_vitu2_itu_pane_t2_ParamLimits

0x64f9,	// (0x000321be) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x0003b5a7) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x0003b5a7) cell_vitu2_itu_pane_t

0xf050,	// (0x0003ad15) bg_button_pane_cp011

0xb3a7,	// (0x0003706c) cell_vitu2_function_pane_g1

0xe14d,	// (0x00039e12) main_myfav_hc_pane

0xaeab,	// (0x00036b70) popup_image3_note_pane_ParamLimits

0xaeab,	// (0x00036b70) popup_image3_note_pane

0xaeb7,	// (0x00036b7c) popup_image3_tool_bar_pane_ParamLimits

0xaeb7,	// (0x00036b7c) popup_image3_tool_bar_pane

0x656f,	// (0x00032234) cell_vitu2_itu_pane_t3_ParamLimits

0x656f,	// (0x00032234) cell_vitu2_itu_pane_t3

0xe14d,	// (0x00039e12) bg_popup_trans_pane

0x3a7d,	// (0x0002f742) grid_image3_tool_bar_pane

0x3a87,	// (0x0002f74c) bg_popup_trans_pane_g1

0xecf0,	// (0x0003a9b5) bg_popup_trans_pane_g2

0x3a8f,	// (0x0002f754) bg_popup_trans_pane_g3

0x3a97,	// (0x0002f75c) bg_popup_trans_pane_g4

0x3a9f,	// (0x0002f764) bg_popup_trans_pane_g5

0x3aa7,	// (0x0002f76c) bg_popup_trans_pane_g6

0x3aaf,	// (0x0002f774) bg_popup_trans_pane_g7

0x3ab7,	// (0x0002f77c) bg_popup_trans_pane_g8

0xecd0,	// (0x0003a995) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x0003b5ae) bg_popup_trans_pane_g

0x3abf,	// (0x0002f784) cell_image3_tool_bar_pane_ParamLimits

0x3abf,	// (0x0002f784) cell_image3_tool_bar_pane

0xead2,	// (0x0003a797) cell_image3_tool_bar_pane_g1

0xe14d,	// (0x00039e12) bg_popup_trans_pane_cp1

0x3ad3,	// (0x0002f798) popup_image3_note_pane_t1

0x3ae1,	// (0x0002f7a6) popup_image3_note_pane_t2

0x3aef,	// (0x0002f7b4) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x0003b5c1) popup_image3_note_pane_t

0x3afd,	// (0x0002f7c2) popup_image3_note_pane_t3_copy1

0xb3bb,	// (0x00037080) bg_myfav_hc_instruction_pane_ParamLimits

0xb3bb,	// (0x00037080) bg_myfav_hc_instruction_pane

0xb3cd,	// (0x00037092) cell_myfav_contact_pane_ParamLimits

0xb3cd,	// (0x00037092) cell_myfav_contact_pane

0xb3e7,	// (0x000370ac) cell_myfav_contact_pane_cp1_ParamLimits

0xb3e7,	// (0x000370ac) cell_myfav_contact_pane_cp1

0xb3fd,	// (0x000370c2) cell_myfav_contact_pane_cp2_ParamLimits

0xb3fd,	// (0x000370c2) cell_myfav_contact_pane_cp2

0xb413,	// (0x000370d8) cell_myfav_contact_pane_cp3_ParamLimits

0xb413,	// (0x000370d8) cell_myfav_contact_pane_cp3

0xb428,	// (0x000370ed) cell_myfav_contact_pane_cp4_ParamLimits

0xb428,	// (0x000370ed) cell_myfav_contact_pane_cp4

0xb43c,	// (0x00037101) cell_myfav_contact_pane_cp5_ParamLimits

0xb43c,	// (0x00037101) cell_myfav_contact_pane_cp5

0xb450,	// (0x00037115) cell_myfav_contact_pane_cp6_ParamLimits

0xb450,	// (0x00037115) cell_myfav_contact_pane_cp6

0xb464,	// (0x00037129) cell_myfav_contact_pane_cp7_ParamLimits

0xb464,	// (0x00037129) cell_myfav_contact_pane_cp7

0x3b0b,	// (0x0002f7d0) listscroll_gen_pane_cp05

0xb47c,	// (0x00037141) main_myfav_hc_pane_g1_ParamLimits

0xb47c,	// (0x00037141) main_myfav_hc_pane_g1

0xb492,	// (0x00037157) main_myfav_hc_pane_g2_ParamLimits

0xb492,	// (0x00037157) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x0003b5c8) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x0003b5c8) main_myfav_hc_pane_g

0xb4bc,	// (0x00037181) main_myfav_hc_pane_t1_ParamLimits

0xb4bc,	// (0x00037181) main_myfav_hc_pane_t1

0x3b14,	// (0x0002f7d9) main_myfav_hc_pane_t2_ParamLimits

0x3b14,	// (0x0002f7d9) main_myfav_hc_pane_t2

0x3b26,	// (0x0002f7eb) main_myfav_hc_pane_t3_ParamLimits

0x3b26,	// (0x0002f7eb) main_myfav_hc_pane_t3

0xb4d1,	// (0x00037196) main_myfav_hc_pane_t4_ParamLimits

0xb4d1,	// (0x00037196) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x0003b5cf) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x0003b5cf) main_myfav_hc_pane_t

0xead2,	// (0x0003a797) bg_myfav_hc_instruction_pane_g1

0x3b38,	// (0x0002f7fd) cell_myfav_contact_pane_g1_ParamLimits

0x3b38,	// (0x0002f7fd) cell_myfav_contact_pane_g1

0x3b38,	// (0x0002f7fd) cell_myfav_contact_pane_g2_ParamLimits

0x3b38,	// (0x0002f7fd) cell_myfav_contact_pane_g2

0x3b44,	// (0x0002f809) cell_myfav_contact_pane_g3_ParamLimits

0x3b44,	// (0x0002f809) cell_myfav_contact_pane_g3

0xe84b,	// (0x0003a510) cell_myfav_contact_pane_g4_ParamLimits

0xe84b,	// (0x0003a510) cell_myfav_contact_pane_g4

0x3b51,	// (0x0002f816) cell_myfav_contact_pane_g5_ParamLimits

0x3b51,	// (0x0002f816) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x0003b5da) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x0003b5da) cell_myfav_contact_pane_g

0xb4a8,	// (0x0003716d) main_myfav_hc_pane_g3_ParamLimits

0xb4a8,	// (0x0003716d) main_myfav_hc_pane_g3

0x71b9,	// (0x00032e7e) popup_adpt_find_window

0xb4f5,	// (0x000371ba) afind_page_pane_ParamLimits

0xb4f5,	// (0x000371ba) afind_page_pane

0xb502,	// (0x000371c7) aid_size_cell_afind_ParamLimits

0xb502,	// (0x000371c7) aid_size_cell_afind

0xb51c,	// (0x000371e1) bg_popup_sub_pane_cp09_ParamLimits

0xb51c,	// (0x000371e1) bg_popup_sub_pane_cp09

0xb529,	// (0x000371ee) find_pane_cp01_ParamLimits

0xb529,	// (0x000371ee) find_pane_cp01

0x3b5d,	// (0x0002f822) grid_afind_control_pane_ParamLimits

0x3b5d,	// (0x0002f822) grid_afind_control_pane

0xb536,	// (0x000371fb) grid_afind_pane_ParamLimits

0xb536,	// (0x000371fb) grid_afind_pane

0xb54c,	// (0x00037211) cell_afind_pane_ParamLimits

0xb54c,	// (0x00037211) cell_afind_pane

0xead2,	// (0x0003a797) afind_page_pane_g1

0xb582,	// (0x00037247) afind_page_pane_g2

0xb58b,	// (0x00037250) afind_page_pane_g3

0x0002,

0xf920,	// (0x0003b5e5) afind_page_pane_g

0xb594,	// (0x00037259) afind_page_pane_t1

0x3b71,	// (0x0002f836) cell_afind_grid_control_pane_ParamLimits

0x3b71,	// (0x0002f836) cell_afind_grid_control_pane

0x3b80,	// (0x0002f845) bg_button_pane_cp69_ParamLimits

0x3b80,	// (0x0002f845) bg_button_pane_cp69

0xb5b4,	// (0x00037279) cell_afind_pane_g1_ParamLimits

0xb5b4,	// (0x00037279) cell_afind_pane_g1

0xb5c1,	// (0x00037286) cell_afind_pane_t1_ParamLimits

0xb5c1,	// (0x00037286) cell_afind_pane_t1

0xeadc,	// (0x0003a7a1) bg_button_pane_cp72

0x3b8c,	// (0x0002f851) cell_afind_grid_control_pane_g1

0x962e,	// (0x000352f3) aid_image_placing_area_ParamLimits

0x962e,	// (0x000352f3) aid_image_placing_area

0xe83d,	// (0x0003a502) field_vitu_entry_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) field_vitu_entry_pane_g1

0xe83d,	// (0x0003a502) field_vitu_entry_pane_g2_ParamLimits

0xe83d,	// (0x0003a502) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x0003b492) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x0003b492) field_vitu_entry_pane_g

0x3343,	// (0x0002f008) cell_vitu_itu_pane_g1_ParamLimits

0x3326,	// (0x0002efeb) cell_vitu_itu_pane_t3_ParamLimits

0x3326,	// (0x0002efeb) cell_vitu_itu_pane_t3

0x37b7,	// (0x0002f47c) mp4_progress_pane_t1_ParamLimits

0x37ce,	// (0x0002f493) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x0003b52b) mp4_progress_pane_t_ParamLimits

0x37e5,	// (0x0002f4aa) mup_progress_pane_cp04_ParamLimits

0xb4e3,	// (0x000371a8) main_myfav_hc_pane_t5_ParamLimits

0xb4e3,	// (0x000371a8) main_myfav_hc_pane_t5

0x7071,	// (0x00032d36) aid_zoom_text_primary

0x71b9,	// (0x00032e7e) popup_adpt_find_window_ParamLimits

0xf050,	// (0x0003ad15) main_cam_set_pane

0xb01f,	// (0x00036ce4) cam4_zoom_pane_ParamLimits

0xb01f,	// (0x00036ce4) cam4_zoom_pane

0xb5d3,	// (0x00037298) main_cam_set_pane_g1_ParamLimits

0xb5d3,	// (0x00037298) main_cam_set_pane_g1

0xb5e1,	// (0x000372a6) main_cam_set_pane_g2_ParamLimits

0xb5e1,	// (0x000372a6) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x0003b5ec) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x0003b5ec) main_cam_set_pane_g

0xb5ed,	// (0x000372b2) main_cam_set_pane_t1_ParamLimits

0xb5ed,	// (0x000372b2) main_cam_set_pane_t1

0xb5ff,	// (0x000372c4) main_cset_listscroll_pane_ParamLimits

0xb5ff,	// (0x000372c4) main_cset_listscroll_pane

0xb62d,	// (0x000372f2) main_cset_slider_pane_ParamLimits

0xb62d,	// (0x000372f2) main_cset_slider_pane

0x3b9d,	// (0x0002f862) main_cset_list_pane_ParamLimits

0x3b9d,	// (0x0002f862) main_cset_list_pane

0x3bad,	// (0x0002f872) scroll_pane_cp028

0xb64c,	// (0x00037311) aid_area_touch_slider

0xb668,	// (0x0003732d) cset_slider_pane

0xb68b,	// (0x00037350) main_cset_slider_pane_g1

0xb6a0,	// (0x00037365) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x0003b5f1) main_cset_slider_pane_g

0x3be6,	// (0x0002f8ab) main_cset_slider_pane_t1

0xb75c,	// (0x00037421) main_cset_slider_pane_t2

0xb776,	// (0x0003743b) main_cset_slider_pane_t3

0xb790,	// (0x00037455) main_cset_slider_pane_t4

0xb7aa,	// (0x0003746f) main_cset_slider_pane_t5

0xb7c4,	// (0x00037489) main_cset_slider_pane_t6

0xb7d9,	// (0x0003749e) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x0003b616) main_cset_slider_pane_t

0xb8dd,	// (0x000375a2) cset_list_set_pane_ParamLimits

0xb8dd,	// (0x000375a2) cset_list_set_pane

0x3c80,	// (0x0002f945) aid_position_infowindow_above

0x3c88,	// (0x0002f94d) aid_position_infowindow_below

0x65c1,	// (0x00032286) cset_list_set_pane_g1_ParamLimits

0x65c1,	// (0x00032286) cset_list_set_pane_g1

0x65cd,	// (0x00032292) cset_list_set_pane_g3_ParamLimits

0x65cd,	// (0x00032292) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x0003b635) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x0003b635) cset_list_set_pane_g

0x65dc,	// (0x000322a1) cset_list_set_pane_t1_ParamLimits

0x65dc,	// (0x000322a1) cset_list_set_pane_t1

0xf050,	// (0x0003ad15) list_highlight_pane_cp021_ParamLimits

0xf050,	// (0x0003ad15) list_highlight_pane_cp021

0x14b8,	// (0x0002d17d) cset_slider_pane_g1

0x14ca,	// (0x0002d18f) cset_slider_pane_g2

0x14c1,	// (0x0002d186) cset_slider_pane_g3

0x0002,

0xf975,	// (0x0003b63a) cset_slider_pane_g

0xb8ed,	// (0x000375b2) aid_area_touch_cam4_zoom

0xb8f5,	// (0x000375ba) cam4_zoom_cont_pane

0xb8fd,	// (0x000375c2) cam4_zoom_pane_g1

0xb905,	// (0x000375ca) cam4_zoom_pane_g2

0xb90d,	// (0x000375d2) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x0003b641) cam4_zoom_pane_g

0x4604,	// (0x000302c9) cam4_zoom_cont_pane_g1

0x460d,	// (0x000302d2) cam4_zoom_cont_pane_g2

0x4616,	// (0x000302db) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x0003b648) cam4_zoom_cont_pane_g

0xaefe,	// (0x00036bc3) call4_image_pane_ParamLimits

0xaefe,	// (0x00036bc3) call4_image_pane

0x3857,	// (0x0002f51c) call4_windows_conf_pane_ParamLimits

0x388a,	// (0x0002f54f) popup_call4_audio_in_window_ParamLimits

0x388a,	// (0x0002f54f) popup_call4_audio_in_window

0xe14d,	// (0x00039e12) bg_popup_call2_act_pane_cp02

0x38fa,	// (0x0002f5bf) call4_list_conf_pane

0xead2,	// (0x0003a797) call4_image_pane_g1

0xead2,	// (0x0003a797) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x0003b0b4) call4_image_pane_g

0x3ccb,	// (0x0002f990) list_single_graphic_popup_conf4_pane_ParamLimits

0x3ccb,	// (0x0002f990) list_single_graphic_popup_conf4_pane

0xe14d,	// (0x00039e12) list_highlight_pane_cp022

0x3cd8,	// (0x0002f99d) list_single_graphic_popup_conf4_pane_g1

0x10ac,	// (0x0002cd71) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x0003b64f) list_single_graphic_popup_conf4_pane_g

0x3ce0,	// (0x0002f9a5) list_single_graphic_popup_conf4_pane_t1

0x7fb0,	// (0x00033c75) popup_vtel_slider_window_ParamLimits

0x7fb0,	// (0x00033c75) popup_vtel_slider_window

0x1426,	// (0x0002d0eb) dialer2_ne_pane_t2_ParamLimits

0x1426,	// (0x0002d0eb) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x0003b530) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x0003b530) dialer2_ne_pane_t

0xf050,	// (0x0003ad15) bg_popup_sub_pane_cp010_ParamLimits

0xf050,	// (0x0003ad15) bg_popup_sub_pane_cp010

0xb915,	// (0x000375da) popup_vtel_slider_window_g1_ParamLimits

0xb915,	// (0x000375da) popup_vtel_slider_window_g1

0xb921,	// (0x000375e6) popup_vtel_slider_window_g2_ParamLimits

0xb921,	// (0x000375e6) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x0003b654) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x0003b654) popup_vtel_slider_window_g

0xb967,	// (0x0003762c) vtel_slider_pane_ParamLimits

0xb967,	// (0x0003762c) vtel_slider_pane

0xb976,	// (0x0003763b) vtel_slider_pane_g1_ParamLimits

0xb976,	// (0x0003763b) vtel_slider_pane_g1

0xb983,	// (0x00037648) vtel_slider_pane_g2_ParamLimits

0xb983,	// (0x00037648) vtel_slider_pane_g2

0xb990,	// (0x00037655) vtel_slider_pane_g3_ParamLimits

0xb990,	// (0x00037655) vtel_slider_pane_g3

0xb976,	// (0x0003763b) vtel_slider_pane_g4_ParamLimits

0xb976,	// (0x0003763b) vtel_slider_pane_g4

0xb99d,	// (0x00037662) vtel_slider_pane_g5_ParamLimits

0xb99d,	// (0x00037662) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x0003b65d) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x0003b65d) vtel_slider_pane_g

0xf050,	// (0x0003ad15) main_gallery2_pane

0xb21c,	// (0x00036ee1) aid_size_row_itut2_dropdow_list_ParamLimits

0xb21c,	// (0x00036ee1) aid_size_row_itut2_dropdow_list

0xb262,	// (0x00036f27) grid_vitu2_function_top_pane_ParamLimits

0xb262,	// (0x00036f27) grid_vitu2_function_top_pane

0xb2a0,	// (0x00036f65) popup_vitu2_dropdown_list_window_ParamLimits

0xb2a0,	// (0x00036f65) popup_vitu2_dropdown_list_window

0xb2ba,	// (0x00036f7f) popup_vitu2_match_list_window

0xb9aa,	// (0x0003766f) cell_vitu2_function_top_pane_ParamLimits

0xb9aa,	// (0x0003766f) cell_vitu2_function_top_pane

0xb9c2,	// (0x00037687) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb9c2,	// (0x00037687) cell_vitu2_function_top_pane_cp01

0xb9de,	// (0x000376a3) cell_vitu2_function_top_wide_pane_ParamLimits

0xb9de,	// (0x000376a3) cell_vitu2_function_top_wide_pane

0xf050,	// (0x0003ad15) bg_button_pane_cp012

0xb9fb,	// (0x000376c0) cell_vitu2_function_top_pane_g1

0xba0f,	// (0x000376d4) bg_button_pane_cp013_ParamLimits

0xba0f,	// (0x000376d4) bg_button_pane_cp013

0xba2b,	// (0x000376f0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xba2b,	// (0x000376f0) cell_vitu2_function_top_wide_pane_g1

0x143a,	// (0x0002d0ff) bg_popup_sub_pane_cp20

0xba43,	// (0x00037708) list_vitu2_match_list_pane

0x3a87,	// (0x0002f74c) bg_popup_sub_pane_cp20_g1

0x3a8f,	// (0x0002f754) bg_popup_sub_pane_cp20_g2

0xecf0,	// (0x0003a9b5) bg_popup_sub_pane_cp20_g3

0x3a97,	// (0x0002f75c) bg_popup_sub_pane_cp20_g4

0xecd0,	// (0x0003a995) bg_popup_sub_pane_cp20_g5

0x3d12,	// (0x0002f9d7) bg_popup_sub_pane_cp20_g6

0x3aa7,	// (0x0002f76c) bg_popup_sub_pane_cp20_g7

0x3aaf,	// (0x0002f774) bg_popup_sub_pane_cp20_g8

0x3ab7,	// (0x0002f77c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x0003b668) bg_popup_sub_pane_cp20_g

0xba5b,	// (0x00037720) list_vitu2_match_list_item_pane_ParamLimits

0xba5b,	// (0x00037720) list_vitu2_match_list_item_pane

0xba6d,	// (0x00037732) list_vitu2_match_list_item_pane_t1

0xe14d,	// (0x00039e12) bg_popup_sub_pane_cp21

0x0f7b,	// (0x0002cc40) grid_vitu2_dropdown_list_pane

0xba7b,	// (0x00037740) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xba7b,	// (0x00037740) cell_vitu2_dropdown_list_char_pane

0xba9c,	// (0x00037761) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xba9c,	// (0x00037761) cell_vitu2_dropdown_list_ctrl_pane

0x3d61,	// (0x0002fa26) cell_vitu2_dropdown_list_char_pane_g1

0x3d58,	// (0x0002fa1d) cell_vitu2_dropdown_list_char_pane_g2

0x3d4f,	// (0x0002fa14) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x0003b685) cell_vitu2_dropdown_list_char_pane_g

0xbac6,	// (0x0003778b) cell_vitu2_dropdown_list_char_pane_t1

0xbad4,	// (0x00037799) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbad4,	// (0x00037799) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbae4,	// (0x000377a9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbae4,	// (0x000377a9) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbaf5,	// (0x000377ba) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbaf5,	// (0x000377ba) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbb05,	// (0x000377ca) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbb05,	// (0x000377ca) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe83d,	// (0x0003a502) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe83d,	// (0x0003a502) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x0003b68c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x0003b68c) cell_vitu2_dropdown_list_ctrl_pane_g

0xbb1e,	// (0x000377e3) aid_size_cell_gallery2_ParamLimits

0xbb1e,	// (0x000377e3) aid_size_cell_gallery2

0xbb38,	// (0x000377fd) grid_gallery2_pane_ParamLimits

0xbb38,	// (0x000377fd) grid_gallery2_pane

0xa887,	// (0x0003654c) scroll_pane_cp029_ParamLimits

0xa887,	// (0x0003654c) scroll_pane_cp029

0xbb49,	// (0x0003780e) cell_gallery2_pane_ParamLimits

0xbb49,	// (0x0003780e) cell_gallery2_pane

0x3d6a,	// (0x0002fa2f) cell_gallery2_pane_g2

0xbb96,	// (0x0003785b) cell_gallery2_pane_g3

0x3d72,	// (0x0002fa37) cell_gallery2_pane_g4

0x3d7a,	// (0x0002fa3f) cell_gallery2_pane_g5

0xea78,	// (0x0003a73d) grid_highlight_pane_cp10

0xb2ba,	// (0x00036f7f) popup_vitu2_match_list_window_ParamLimits

0xb2ca,	// (0x00036f8f) popup_vitu2_query_window_ParamLimits

0xb2ca,	// (0x00036f8f) popup_vitu2_query_window

0xe14d,	// (0x00039e12) bg_vitu2_candi_button_pane

0x3d61,	// (0x0002fa26) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3d58,	// (0x0002fa1d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3d4f,	// (0x0002fa14) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x65fe,	// (0x000322c3) bg_button_pane_cp015

0xbb9e,	// (0x00037863) bg_button_pane_cp016

0xbbb1,	// (0x00037876) bg_button_pane_cp017

0x1448,	// (0x0002d10d) bg_popup_sub_pane_cp22

0x3d82,	// (0x0002fa47) popup_vitu2_query_window_g1

0x662d,	// (0x000322f2) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x0003b697) popup_vitu2_query_window_g

0x6648,	// (0x0003230d) popup_vitu2_query_window_t1_ParamLimits

0x6648,	// (0x0003230d) popup_vitu2_query_window_t1

0x667b,	// (0x00032340) popup_vitu2_query_window_t2_ParamLimits

0x667b,	// (0x00032340) popup_vitu2_query_window_t2

0x668d,	// (0x00032352) popup_vitu2_query_window_t3_ParamLimits

0x668d,	// (0x00032352) popup_vitu2_query_window_t3

0xbbd5,	// (0x0003789a) popup_vitu2_query_window_t4_ParamLimits

0xbbd5,	// (0x0003789a) popup_vitu2_query_window_t4

0xbbf2,	// (0x000378b7) popup_vitu2_query_window_t5_ParamLimits

0xbbf2,	// (0x000378b7) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x0003b69e) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x0003b69e) popup_vitu2_query_window_t

0x3b95,	// (0x0002f85a) main_cset_text_pane

0xb64c,	// (0x00037311) aid_area_touch_slider_ParamLimits

0xb668,	// (0x0003732d) cset_slider_pane_ParamLimits

0xb68b,	// (0x00037350) main_cset_slider_pane_g1_ParamLimits

0xb6a0,	// (0x00037365) main_cset_slider_pane_g2_ParamLimits

0x3bb6,	// (0x0002f87b) main_cset_slider_pane_g3_ParamLimits

0x3bb6,	// (0x0002f87b) main_cset_slider_pane_g3

0xb6b5,	// (0x0003737a) main_cset_slider_pane_g4_ParamLimits

0xb6b5,	// (0x0003737a) main_cset_slider_pane_g4

0xb6c4,	// (0x00037389) main_cset_slider_pane_g5_ParamLimits

0xb6c4,	// (0x00037389) main_cset_slider_pane_g5

0xb6d0,	// (0x00037395) main_cset_slider_pane_g6_ParamLimits

0xb6d0,	// (0x00037395) main_cset_slider_pane_g6

0xf92c,	// (0x0003b5f1) main_cset_slider_pane_g_ParamLimits

0x3be6,	// (0x0002f8ab) main_cset_slider_pane_t1_ParamLimits

0xb75c,	// (0x00037421) main_cset_slider_pane_t2_ParamLimits

0xb776,	// (0x0003743b) main_cset_slider_pane_t3_ParamLimits

0xb790,	// (0x00037455) main_cset_slider_pane_t4_ParamLimits

0xb7aa,	// (0x0003746f) main_cset_slider_pane_t5_ParamLimits

0xb7c4,	// (0x00037489) main_cset_slider_pane_t6_ParamLimits

0xb7d9,	// (0x0003749e) main_cset_slider_pane_t7_ParamLimits

0xb803,	// (0x000374c8) main_cset_slider_pane_t8_ParamLimits

0xb803,	// (0x000374c8) main_cset_slider_pane_t8

0xb82b,	// (0x000374f0) main_cset_slider_pane_t9_ParamLimits

0xb82b,	// (0x000374f0) main_cset_slider_pane_t9

0xb853,	// (0x00037518) main_cset_slider_pane_t10_ParamLimits

0xb853,	// (0x00037518) main_cset_slider_pane_t10

0xb87b,	// (0x00037540) main_cset_slider_pane_t11_ParamLimits

0xb87b,	// (0x00037540) main_cset_slider_pane_t11

0xb8a3,	// (0x00037568) main_cset_slider_pane_t12_ParamLimits

0xb8a3,	// (0x00037568) main_cset_slider_pane_t12

0xb8c0,	// (0x00037585) main_cset_slider_pane_t13_ParamLimits

0xb8c0,	// (0x00037585) main_cset_slider_pane_t13

0xf951,	// (0x0003b616) main_cset_slider_pane_t_ParamLimits

0xe14d,	// (0x00039e12) bg_popup_sub_pane_cp011

0x3d8e,	// (0x0002fa53) main_cset_text_pane_g1

0x3d96,	// (0x0002fa5b) main_cset_text_pane_t1

0x3da4,	// (0x0002fa69) main_cset_text_pane_t2

0x3db2,	// (0x0002fa77) main_cset_text_pane_t3

0x3dc0,	// (0x0002fa85) main_cset_text_pane_t4

0x3dce,	// (0x0002fa93) main_cset_text_pane_t5

0x3ddc,	// (0x0002faa1) main_cset_text_pane_t6

0x3dea,	// (0x0002faaf) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x0003b6ad) main_cset_text_pane_t

0xe14d,	// (0x00039e12) main_cam4_burst_pane

0xe14d,	// (0x00039e12) main_cam5_pane

0xb5a2,	// (0x00037267) bg_button_pane_cp019

0xb5ab,	// (0x00037270) bg_button_pane_cp020

0x3bc2,	// (0x0002f887) main_cset_slider_pane_g7_ParamLimits

0x3bc2,	// (0x0002f887) main_cset_slider_pane_g7

0x3bce,	// (0x0002f893) main_cset_slider_pane_g8_ParamLimits

0x3bce,	// (0x0002f893) main_cset_slider_pane_g8

0xb6e4,	// (0x000373a9) main_cset_slider_pane_g9_ParamLimits

0xb6e4,	// (0x000373a9) main_cset_slider_pane_g9

0xb6f0,	// (0x000373b5) main_cset_slider_pane_g10_ParamLimits

0xb6f0,	// (0x000373b5) main_cset_slider_pane_g10

0xb6fc,	// (0x000373c1) main_cset_slider_pane_g11_ParamLimits

0xb6fc,	// (0x000373c1) main_cset_slider_pane_g11

0xb708,	// (0x000373cd) main_cset_slider_pane_g12_ParamLimits

0xb708,	// (0x000373cd) main_cset_slider_pane_g12

0xb714,	// (0x000373d9) main_cset_slider_pane_g13_ParamLimits

0xb714,	// (0x000373d9) main_cset_slider_pane_g13

0xb720,	// (0x000373e5) main_cset_slider_pane_g14_ParamLimits

0xb720,	// (0x000373e5) main_cset_slider_pane_g14

0xb72c,	// (0x000373f1) main_cset_slider_pane_g15_ParamLimits

0xb72c,	// (0x000373f1) main_cset_slider_pane_g15

0x3c0e,	// (0x0002f8d3) main_cset_slider_pane_t14_ParamLimits

0x3c0e,	// (0x0002f8d3) main_cset_slider_pane_t14

0x3c47,	// (0x0002f90c) main_cset_slider_pane_t15_ParamLimits

0x3c47,	// (0x0002f90c) main_cset_slider_pane_t15

0xbc0f,	// (0x000378d4) aid_cam4_burst_size_cell_ParamLimits

0xbc0f,	// (0x000378d4) aid_cam4_burst_size_cell

0xbc2b,	// (0x000378f0) grid_cam4_burst_pane_ParamLimits

0xbc2b,	// (0x000378f0) grid_cam4_burst_pane

0xbc4d,	// (0x00037912) linegrid_cam4_burst_pane_ParamLimits

0xbc4d,	// (0x00037912) linegrid_cam4_burst_pane

0xbc6b,	// (0x00037930) scroll_pane_cp30_ParamLimits

0xbc6b,	// (0x00037930) scroll_pane_cp30

0xbc77,	// (0x0003793c) cell_cam4_burst_pane_ParamLimits

0xbc77,	// (0x0003793c) cell_cam4_burst_pane

0x3df8,	// (0x0002fabd) linegrid_cam4_burst_pane_g1_ParamLimits

0x3df8,	// (0x0002fabd) linegrid_cam4_burst_pane_g1

0xbcaf,	// (0x00037974) linegrid_cam4_burst_pane_g2_ParamLimits

0xbcaf,	// (0x00037974) linegrid_cam4_burst_pane_g2

0x3e05,	// (0x0002faca) linegrid_cam4_burst_pane_g3_ParamLimits

0x3e05,	// (0x0002faca) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x0003b6bc) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x0003b6bc) linegrid_cam4_burst_pane_g

0xbcc0,	// (0x00037985) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbcc0,	// (0x00037985) linegrid_cam4_burst_pane_g3_copy1

0x3e12,	// (0x0002fad7) linegrid_cam4_burst_pane_g4_ParamLimits

0x3e12,	// (0x0002fad7) linegrid_cam4_burst_pane_g4

0xbcda,	// (0x0003799f) linegrid_cam4_burst_pane_g5_ParamLimits

0xbcda,	// (0x0003799f) linegrid_cam4_burst_pane_g5

0xbceb,	// (0x000379b0) linegrid_cam4_burst_pane_g6_ParamLimits

0xbceb,	// (0x000379b0) linegrid_cam4_burst_pane_g6

0x3e1f,	// (0x0002fae4) linegrid_cam4_burst_pane_g7_ParamLimits

0x3e1f,	// (0x0002fae4) linegrid_cam4_burst_pane_g7

0xbcfc,	// (0x000379c1) cell_cam4_burst_pane_g1

0x3e38,	// (0x0002fafd) main_cam5_pane_t1_ParamLimits

0x3e38,	// (0x0002fafd) main_cam5_pane_t1

0x3e4a,	// (0x0002fb0f) main_cam5_pane_t2_ParamLimits

0x3e4a,	// (0x0002fb0f) main_cam5_pane_t2

0x3e5c,	// (0x0002fb21) main_cam5_pane_t3_ParamLimits

0x3e5c,	// (0x0002fb21) main_cam5_pane_t3

0x3e6e,	// (0x0002fb33) main_cam5_pane_t4_ParamLimits

0x3e6e,	// (0x0002fb33) main_cam5_pane_t4

0x3e84,	// (0x0002fb49) main_cam5_pane_t5_ParamLimits

0x3e84,	// (0x0002fb49) main_cam5_pane_t5

0x3e96,	// (0x0002fb5b) main_cam5_pane_t6_ParamLimits

0x3e96,	// (0x0002fb5b) main_cam5_pane_t6

0x3ea8,	// (0x0002fb6d) main_cam5_pane_t7_ParamLimits

0x3ea8,	// (0x0002fb6d) main_cam5_pane_t7

0x3eba,	// (0x0002fb7f) main_cam5_pane_t8_ParamLimits

0x3eba,	// (0x0002fb7f) main_cam5_pane_t8

0x3ed6,	// (0x0002fb9b) main_cam5_pane_t9_ParamLimits

0x3ed6,	// (0x0002fb9b) main_cam5_pane_t9

0x3ee8,	// (0x0002fbad) main_cam5_pane_t10_ParamLimits

0x3ee8,	// (0x0002fbad) main_cam5_pane_t10

0x3efa,	// (0x0002fbbf) main_cam5_pane_t11_ParamLimits

0x3efa,	// (0x0002fbbf) main_cam5_pane_t11

0x3f0c,	// (0x0002fbd1) main_cam5_pane_t12_ParamLimits

0x3f0c,	// (0x0002fbd1) main_cam5_pane_t12

0x3f21,	// (0x0002fbe6) main_cam5_pane_t13_ParamLimits

0x3f21,	// (0x0002fbe6) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x0003b6c8) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x0003b6c8) main_cam5_pane_t

0x7234,	// (0x00032ef9) popup_scut_keymap_window_ParamLimits

0x7234,	// (0x00032ef9) popup_scut_keymap_window

0xbd0f,	// (0x000379d4) aid_size_cell_brow_shortcut

0xea78,	// (0x0003a73d) bg_popup_window_pane_cp010

0xbd1b,	// (0x000379e0) grid_scut_pane

0xbd25,	// (0x000379ea) cell_scut_pane_ParamLimits

0xbd25,	// (0x000379ea) cell_scut_pane

0xbd3a,	// (0x000379ff) cell_scut_pane_g1

0x3f3e,	// (0x0002fc03) cell_scut_pane_t1

0x3f4d,	// (0x0002fc12) cell_scut_pane_t2

0xbd43,	// (0x00037a08) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x0003b6e3) cell_scut_pane_t

0xa1ab,	// (0x00035e70) main_mup3_pane_g8_ParamLimits

0xa1ab,	// (0x00035e70) main_mup3_pane_g8

0xb228,	// (0x00036eed) area_vitu2_query_pane_ParamLimits

0xb228,	// (0x00036eed) area_vitu2_query_pane

0x660e,	// (0x000322d3) input_focus_pane_cp08

0x3f5c,	// (0x0002fc21) area_vitu2_query_pane_g1

0x670b,	// (0x000323d0) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x0003b6ea) area_vitu2_query_pane_g

0xbd51,	// (0x00037a16) area_vitu2_query_pane_t1_ParamLimits

0xbd51,	// (0x00037a16) area_vitu2_query_pane_t1

0xbd63,	// (0x00037a28) area_vitu2_query_pane_t2_ParamLimits

0xbd63,	// (0x00037a28) area_vitu2_query_pane_t2

0x671a,	// (0x000323df) area_vitu2_query_pane_t3_ParamLimits

0x671a,	// (0x000323df) area_vitu2_query_pane_t3

0x6742,	// (0x00032407) area_vitu2_query_pane_t4_ParamLimits

0x6742,	// (0x00032407) area_vitu2_query_pane_t4

0x676a,	// (0x0003242f) area_vitu2_query_pane_t5_ParamLimits

0x676a,	// (0x0003242f) area_vitu2_query_pane_t5

0x6792,	// (0x00032457) area_vitu2_query_pane_t6_ParamLimits

0x6792,	// (0x00032457) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x0003b6ef) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x0003b6ef) area_vitu2_query_pane_t

0xbd75,	// (0x00037a3a) bg_button_pane_cp018

0xbd82,	// (0x00037a47) bg_button_pane_cp021

0x67de,	// (0x000324a3) bg_button_pane_cp022

0x67ed,	// (0x000324b2) input_focus_pane_cp09

0x90cd,	// (0x00034d92) aid_size_touch_mv_arrow_left

0x11ea,	// (0x0002ceaf) aid_size_touch_mv_arrow_right

0xb744,	// (0x00037409) main_cset_slider_pane_g16_ParamLimits

0xb744,	// (0x00037409) main_cset_slider_pane_g16

0xb750,	// (0x00037415) main_cset_slider_pane_g17_ParamLimits

0xb750,	// (0x00037415) main_cset_slider_pane_g17

0xbcfc,	// (0x000379c1) cell_cam4_burst_pane_g1_ParamLimits

0xe14d,	// (0x00039e12) compa_mode_pane

0xb92d,	// (0x000375f2) popup_vtel_slider_window_g3_ParamLimits

0xb92d,	// (0x000375f2) popup_vtel_slider_window_g3

0xb941,	// (0x00037606) popup_vtel_slider_window_g4_ParamLimits

0xb941,	// (0x00037606) popup_vtel_slider_window_g4

0xb955,	// (0x0003761a) popup_vtel_slider_window_t1_ParamLimits

0xb955,	// (0x0003761a) popup_vtel_slider_window_t1

0xe14d,	// (0x00039e12) main_cl_pane

0x9a87,	// (0x0003574c) popup_imed_adjust2_window_ParamLimits

0x1448,	// (0x0002d10d) bg_tb_trans_pane_cp05_ParamLimits

0x325b,	// (0x0002ef20) popup_imed_adjust2_window_g1_ParamLimits

0x326a,	// (0x0002ef2f) popup_imed_adjust2_window_g2_ParamLimits

0x326a,	// (0x0002ef2f) popup_imed_adjust2_window_g2

0x3276,	// (0x0002ef3b) popup_imed_adjust2_window_g3_ParamLimits

0x3276,	// (0x0002ef3b) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x0003b456) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x0003b456) popup_imed_adjust2_window_g

0x3282,	// (0x0002ef47) popup_imed_adjust2_window_t1_ParamLimits

0x329a,	// (0x0002ef5f) slider_imed_adjust_pane_ParamLimits

0x32ae,	// (0x0002ef73) slider_imed_adjust_pane_g1_ParamLimits

0x32be,	// (0x0002ef83) slider_imed_adjust_pane_g2_ParamLimits

0x32ce,	// (0x0002ef93) slider_imed_adjust_pane_g3_ParamLimits

0x32df,	// (0x0002efa4) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x0003b45d) slider_imed_adjust_pane_g_ParamLimits

0xafd0,	// (0x00036c95) aid_touch_area_cam4_ParamLimits

0xafd0,	// (0x00036c95) aid_touch_area_cam4

0xafde,	// (0x00036ca3) battery_pane_cp01

0xb05d,	// (0x00036d22) main_camera4_pane_g6_ParamLimits

0xb05d,	// (0x00036d22) main_camera4_pane_g6

0xb07b,	// (0x00036d40) main_camera4_pane_t2_ParamLimits

0xb07b,	// (0x00036d40) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x0003b564) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x0003b564) main_camera4_pane_t

0xb103,	// (0x00036dc8) aid_touch_area_vid4_ParamLimits

0xb103,	// (0x00036dc8) aid_touch_area_vid4

0xb05d,	// (0x00036d22) main_video4_pane_g5_ParamLimits

0xb05d,	// (0x00036d22) main_video4_pane_g5

0xb133,	// (0x00036df8) vid4_progress_pane_ParamLimits

0xb133,	// (0x00036df8) vid4_progress_pane

0x3bda,	// (0x0002f89f) main_cset_slider_pane_g18_ParamLimits

0x3bda,	// (0x0002f89f) main_cset_slider_pane_g18

0x3e2c,	// (0x0002faf1) cell_cam4_burst_pane_g2_ParamLimits

0x3e2c,	// (0x0002faf1) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x0003b6c3) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x0003b6c3) cell_cam4_burst_pane_g

0xbd8e,	// (0x00037a53) bg_cl_pane_ParamLimits

0xbd8e,	// (0x00037a53) bg_cl_pane

0xbd9a,	// (0x00037a5f) cl_header_pane_ParamLimits

0xbd9a,	// (0x00037a5f) cl_header_pane

0xbda6,	// (0x00037a6b) cl_listscroll_pane_ParamLimits

0xbda6,	// (0x00037a6b) cl_listscroll_pane

0x4004,	// (0x0002fcc9) bg_cl_pane_g1

0x400c,	// (0x0002fcd1) bg_cl_pane_g2

0x4014,	// (0x0002fcd9) bg_cl_pane_g3

0x401c,	// (0x0002fce1) bg_cl_pane_g4

0x4024,	// (0x0002fce9) bg_cl_pane_g5

0x402c,	// (0x0002fcf1) bg_cl_pane_g6

0x4034,	// (0x0002fcf9) bg_cl_pane_g7

0x403c,	// (0x0002fd01) bg_cl_pane_g8

0x4044,	// (0x0002fd09) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x0003b6fe) bg_cl_pane_g

0xbdb2,	// (0x00037a77) aid_height_cl_leading_ParamLimits

0xbdb2,	// (0x00037a77) aid_height_cl_leading

0xbdbe,	// (0x00037a83) aid_height_cl_text_ParamLimits

0xbdbe,	// (0x00037a83) aid_height_cl_text

0x143a,	// (0x0002d0ff) bg_cl_header_pane_ParamLimits

0x143a,	// (0x0002d0ff) bg_cl_header_pane

0xbdd6,	// (0x00037a9b) cl_header_pane_g1_ParamLimits

0xbdd6,	// (0x00037a9b) cl_header_pane_g1

0xbde3,	// (0x00037aa8) cl_header_pane_t1_ParamLimits

0xbde3,	// (0x00037aa8) cl_header_pane_t1

0x404c,	// (0x0002fd11) cl_list_pane

0x4055,	// (0x0002fd1a) hc_scroll_pane_cp01

0xecd0,	// (0x0003a995) bg_cl_header_pane_g1

0x3a87,	// (0x0002f74c) bg_cl_header_pane_g2

0xecf0,	// (0x0003a9b5) bg_cl_header_pane_g3

0x3a97,	// (0x0002f75c) bg_cl_header_pane_g4

0x3a8f,	// (0x0002f754) bg_cl_header_pane_g5

0x3d12,	// (0x0002f9d7) bg_cl_header_pane_g6

0x3aaf,	// (0x0002f774) bg_cl_header_pane_g7

0x3ab7,	// (0x0002f77c) bg_cl_header_pane_g8

0x3aa7,	// (0x0002f76c) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x0003b711) bg_cl_header_pane_g

0xbdf5,	// (0x00037aba) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbdf5,	// (0x00037aba) hc_cl_list_double_graphic_heading_pane

0xbe05,	// (0x00037aca) hc_cl_list_single_graphic_pane_ParamLimits

0xbe05,	// (0x00037aca) hc_cl_list_single_graphic_pane

0xbe17,	// (0x00037adc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbe17,	// (0x00037adc) hc_cl_list_single_graphic_pane_g1

0xbe23,	// (0x00037ae8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbe23,	// (0x00037ae8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x0003b724) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x0003b724) hc_cl_list_single_graphic_pane_g

0xbe37,	// (0x00037afc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbe37,	// (0x00037afc) hc_cl_list_single_graphic_pane_t1

0xbe17,	// (0x00037adc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbe17,	// (0x00037adc) hc_cl_list_double_graphic_heading_pane_g1

0xbe4c,	// (0x00037b11) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbe4c,	// (0x00037b11) hc_cl_list_double_graphic_heading_pane_g2

0xbe60,	// (0x00037b25) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbe60,	// (0x00037b25) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x0003b729) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x0003b729) hc_cl_list_double_graphic_heading_pane_g

0xbe74,	// (0x00037b39) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbe74,	// (0x00037b39) hc_cl_list_double_graphic_heading_pane_t1

0xbe89,	// (0x00037b4e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbe89,	// (0x00037b4e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x0003b730) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x0003b730) hc_cl_list_double_graphic_heading_pane_t

0xbe9e,	// (0x00037b63) vid4_progress_pane_g1

0xbead,	// (0x00037b72) vid4_progress_pane_g2

0xbebc,	// (0x00037b81) vid4_progress_pane_g3

0xbecb,	// (0x00037b90) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x0003b735) vid4_progress_pane_g

0xbed7,	// (0x00037b9c) vid4_progress_pane_t1

0xbeed,	// (0x00037bb2) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x0003b740) vid4_progress_pane_t

0xbf17,	// (0x00037bdc) wait_bar_pane_cp07

0x2ba7,	// (0x0002e86c) blid_firmament_pane_ParamLimits

0x2be8,	// (0x0002e8ad) popup_blid_sat_info2_window_g1

0x2c0c,	// (0x0002e8d1) popup_blid_sat_info2_window_t3

0x2c1a,	// (0x0002e8df) popup_blid_sat_info2_window_t4

0x2c28,	// (0x0002e8ed) popup_blid_sat_info2_window_t5

0x2c36,	// (0x0002e8fb) popup_blid_sat_info2_window_t6

0x2c46,	// (0x0002e90b) popup_blid_sat_info2_window_t7

0x2c54,	// (0x0002e919) popup_blid_sat_info2_window_t8

0x2c62,	// (0x0002e927) popup_blid_sat_info2_window_t9

0x2c70,	// (0x0002e935) popup_blid_sat_info2_window_t10

0x2d0c,	// (0x0002e9d1) aid_firma_cardinal_ParamLimits

0x2d20,	// (0x0002e9e5) blid_firmament_pane_t1_ParamLimits

0x2d37,	// (0x0002e9fc) blid_firmament_pane_t2_ParamLimits

0x2d4e,	// (0x0002ea13) blid_firmament_pane_t3_ParamLimits

0x2d65,	// (0x0002ea2a) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x0003b34f) blid_firmament_pane_t_ParamLimits

0x2d7c,	// (0x0002ea41) blid_sat_info_pane_ParamLimits

0xf050,	// (0x0003ad15) main_cam_set_pane_ParamLimits

0xa827,	// (0x000364ec) aid_size_cell_colour_35_ParamLimits

0xa83e,	// (0x00036503) aid_size_cell_colour_112_ParamLimits

0xa855,	// (0x0003651a) aid_size_cell_effect_ParamLimits

0xf050,	// (0x0003ad15) bg_tb_trans_pane_cp02_ParamLimits

0x0e9d,	// (0x0002cb62) heading_imed_pane_ParamLimits

0xa86f,	// (0x00036534) listscroll_imed_pane_ParamLimits

0x1ea1,	// (0x0002db66) popup_call2_audio_first_window_g5_ParamLimits

0x1ea1,	// (0x0002db66) popup_call2_audio_first_window_g5

0xad8d,	// (0x00036a52) aid_size_touch_image3_arrow_left_ParamLimits

0xad8d,	// (0x00036a52) aid_size_touch_image3_arrow_left

0xada1,	// (0x00036a66) aid_size_touch_image3_arrow_right_ParamLimits

0xada1,	// (0x00036a66) aid_size_touch_image3_arrow_right

0xbf02,	// (0x00037bc7) vid4_progress_pane_t3

0xa9d3,	// (0x00036698) main_hwr_training_symbol_option_pane_ParamLimits

0xa9d3,	// (0x00036698) main_hwr_training_symbol_option_pane

0x3488,	// (0x0002f14d) popup_hwr_training_preview_window_ParamLimits

0x3488,	// (0x0002f14d) popup_hwr_training_preview_window

0xaa2e,	// (0x000366f3) hwr_training_navi_pane_g5_ParamLimits

0xaa2e,	// (0x000366f3) hwr_training_navi_pane_g5

0x3a63,	// (0x0002f728) popup_char_count_window

0x143a,	// (0x0002d0ff) bg_popup_sub_pane_cp20_ParamLimits

0xba43,	// (0x00037708) list_vitu2_match_list_pane_ParamLimits

0xba4f,	// (0x00037714) vitu2_page_scroll_pane_ParamLimits

0xba4f,	// (0x00037714) vitu2_page_scroll_pane

0x411e,	// (0x0002fde3) list_single_hwr_training_symbol_option_pane_ParamLimits

0x411e,	// (0x0002fde3) list_single_hwr_training_symbol_option_pane

0x4131,	// (0x0002fdf6) list_single_hwr_training_symbol_option_pane_g1

0x4139,	// (0x0002fdfe) list_single_hwr_training_symbol_option_pane_t1

0x4147,	// (0x0002fe0c) bg_button_pane_cp023

0x4150,	// (0x0002fe15) bg_button_pane_cp024

0xbf30,	// (0x00037bf5) vitu2_page_scroll_pane_g1

0xbf38,	// (0x00037bfd) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x0003b747) vitu2_page_scroll_pane_g

0xbf40,	// (0x00037c05) vitu2_page_scroll_pane_t1

0x2dab,	// (0x0002ea70) popup_char_count_window_g1

0x4183,	// (0x0002fe48) popup_char_count_window_g2

0x418c,	// (0x0002fe51) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x0003b74c) popup_char_count_window_g

0x4195,	// (0x0002fe5a) popup_char_count_window_t1

0xe14d,	// (0x00039e12) main_vded2_pane

0x3249,	// (0x0002ef0e) aid_size_cell_imed_line

0x3253,	// (0x0002ef18) grid_imed_line_width_pane

0xb17e,	// (0x00036e43) vid4_indicators_pane_g4

0x41a3,	// (0x0002fe68) cell_imed_line_width_pane_ParamLimits

0x41a3,	// (0x0002fe68) cell_imed_line_width_pane

0x41b5,	// (0x0002fe7a) cell_imed_line_width_pane_g1

0x41be,	// (0x0002fe83) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x0003b753) cell_imed_line_width_pane_g

0xbf4f,	// (0x00037c14) main_vded2_pane_g1_ParamLimits

0xbf4f,	// (0x00037c14) main_vded2_pane_g1

0xbf5c,	// (0x00037c21) main_vded2_pane_g2_ParamLimits

0xbf5c,	// (0x00037c21) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x0003b758) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x0003b758) main_vded2_pane_g

0xbf68,	// (0x00037c2d) vded2_slider_pane_ParamLimits

0xbf68,	// (0x00037c2d) vded2_slider_pane

0xbf75,	// (0x00037c3a) aid_size_touch_vded2_end

0xbf7d,	// (0x00037c42) aid_size_touch_vded2_playhead

0xbf85,	// (0x00037c4a) aid_size_touch_vded2_start

0xbf8d,	// (0x00037c52) vded2_slider_bg_pane

0xbf96,	// (0x00037c5b) vded2_slider_pane_g1

0xbf9f,	// (0x00037c64) vded2_slider_pane_g2

0xbfa7,	// (0x00037c6c) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x0003b75d) vded2_slider_pane_g

0xbfb0,	// (0x00037c75) vded2_slider_bg_pane_g1

0xbfb9,	// (0x00037c7e) vded2_slider_bg_pane_g2

0xbfc2,	// (0x00037c87) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x0003b764) vded2_slider_bg_pane_g

0x93de,	// (0x000350a3) aid_postcard_touch_down_pane_ParamLimits

0x93de,	// (0x000350a3) aid_postcard_touch_down_pane

0x93ea,	// (0x000350af) aid_postcard_touch_up_pane_ParamLimits

0x93ea,	// (0x000350af) aid_postcard_touch_up_pane

0xe14d,	// (0x00039e12) main_blid2_pane

0x9a24,	// (0x000356e9) popup_blid2_search_window

0xe14d,	// (0x00039e12) blid2_gps_pane

0xe14d,	// (0x00039e12) blid2_navig_pane

0xe14d,	// (0x00039e12) blid2_search_pane

0xe14d,	// (0x00039e12) blid2_tripm_pane

0xbfcb,	// (0x00037c90) blid2_search_pane_g1_ParamLimits

0xbfcb,	// (0x00037c90) blid2_search_pane_g1

0xbfd7,	// (0x00037c9c) blid2_search_pane_t1_ParamLimits

0xbfd7,	// (0x00037c9c) blid2_search_pane_t1

0xbfe9,	// (0x00037cae) aid_size_cell_blid2_gps_ParamLimits

0xbfe9,	// (0x00037cae) aid_size_cell_blid2_gps

0xbff9,	// (0x00037cbe) blid2_gps_pane_g1_ParamLimits

0xbff9,	// (0x00037cbe) blid2_gps_pane_g1

0xc005,	// (0x00037cca) grid_blid2_satellite_pane_ParamLimits

0xc005,	// (0x00037cca) grid_blid2_satellite_pane

0xc011,	// (0x00037cd6) blid2_navig_pane_g1_ParamLimits

0xc011,	// (0x00037cd6) blid2_navig_pane_g1

0xc01d,	// (0x00037ce2) blid2_navig_pane_t1_ParamLimits

0xc01d,	// (0x00037ce2) blid2_navig_pane_t1

0xc02f,	// (0x00037cf4) blid2_navig_pane_t2_ParamLimits

0xc02f,	// (0x00037cf4) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x0003b76b) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x0003b76b) blid2_navig_pane_t

0xc041,	// (0x00037d06) blid2_navig_ring_pane_ParamLimits

0xc041,	// (0x00037d06) blid2_navig_ring_pane

0xc04d,	// (0x00037d12) blid2_speed_pane_ParamLimits

0xc04d,	// (0x00037d12) blid2_speed_pane

0xc059,	// (0x00037d1e) blid2_tripm_pane_g1_ParamLimits

0xc059,	// (0x00037d1e) blid2_tripm_pane_g1

0xc065,	// (0x00037d2a) blid2_tripm_pane_g2_ParamLimits

0xc065,	// (0x00037d2a) blid2_tripm_pane_g2

0xc071,	// (0x00037d36) blid2_tripm_pane_g3_ParamLimits

0xc071,	// (0x00037d36) blid2_tripm_pane_g3

0xc07d,	// (0x00037d42) blid2_tripm_pane_g4_ParamLimits

0xc07d,	// (0x00037d42) blid2_tripm_pane_g4

0xc089,	// (0x00037d4e) blid2_tripm_pane_g5_ParamLimits

0xc089,	// (0x00037d4e) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x0003b770) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x0003b770) blid2_tripm_pane_g

0xc0a1,	// (0x00037d66) blid2_tripm_pane_t1_ParamLimits

0xc0a1,	// (0x00037d66) blid2_tripm_pane_t1

0xc0b3,	// (0x00037d78) blid2_tripm_pane_t2_ParamLimits

0xc0b3,	// (0x00037d78) blid2_tripm_pane_t2

0xc0c5,	// (0x00037d8a) blid2_tripm_pane_t3_ParamLimits

0xc0c5,	// (0x00037d8a) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x0003b77d) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x0003b77d) blid2_tripm_pane_t

0xc0f5,	// (0x00037dba) cell_blid2_satellite_pane_ParamLimits

0xc0f5,	// (0x00037dba) cell_blid2_satellite_pane

0xc10d,	// (0x00037dd2) cell_blid2_satellite_pane_g1

0x41c6,	// (0x0002fe8b) cell_blid2_satellite_pane_t1

0xead2,	// (0x0003a797) blid2_speed_pane_g1

0x41d4,	// (0x0002fe99) blid2_speed_pane_t1

0x41e2,	// (0x0002fea7) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x0003b786) blid2_speed_pane_t

0xead2,	// (0x0003a797) blid2_navig_ring_pane_g1

0xc116,	// (0x00037ddb) blid2_navig_ring_pane_g2

0xc11e,	// (0x00037de3) blid2_navig_ring_pane_g3

0xc126,	// (0x00037deb) blid2_navig_ring_pane_g4

0xc12e,	// (0x00037df3) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x0003b78b) blid2_navig_ring_pane_g

0xe14d,	// (0x00039e12) bg_popup_window_pane_cp011

0x41f0,	// (0x0002feb5) popup_blid2_search_window_g1

0x41f8,	// (0x0002febd) popup_blid2_search_window_t1

0x4206,	// (0x0002fecb) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x0003b796) popup_blid2_search_window_t

0xebdf,	// (0x0003a8a4) main_browser_pane_g1

0xe8b3,	// (0x0003a578) main_browser_pane_ParamLimits

0xf050,	// (0x0003ad15) bg_button_pane_cp011_ParamLimits

0xb3a7,	// (0x0003706c) cell_vitu2_function_pane_g1_ParamLimits

0x1448,	// (0x0002d10d) bg_popup_sub_pane_cp22_ParamLimits

0x660e,	// (0x000322d3) input_focus_pane_cp08_ParamLimits

0xbbc4,	// (0x00037889) popup_vitu2_query_button_pane_ParamLimits

0xbbc4,	// (0x00037889) popup_vitu2_query_button_pane

0x6625,	// (0x000322ea) popup_vitu2_query_input_button_pane

0x3d82,	// (0x0002fa47) popup_vitu2_query_window_g1_ParamLimits

0x662d,	// (0x000322f2) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x0003b697) popup_vitu2_query_window_g_ParamLimits

0xe14d,	// (0x00039e12) bg_button_pane_cp026

0xc136,	// (0x00037dfb) popup_vitu2_query_input_button_pane_g1

0xe14d,	// (0x00039e12) bg_button_pane_cp025

0x4214,	// (0x0002fed9) popup_vitu2_query_button_pane_t1

0x9f29,	// (0x00035bee) main_mp3_pane_t6

0x9f37,	// (0x00035bfc) popup_slider_window_cp01

0xb0b1,	// (0x00036d76) cam4_battery_pane

0xb0b1,	// (0x00036d76) cam4_battery_pane_cp02

0xb0b1,	// (0x00036d76) cam4_battery_pane_cp01

0xb0b1,	// (0x00036d76) cam4_battery_pane_cp03

0xead2,	// (0x0003a797) cam4_battery_pane_g1

0x2b0e,	// (0x0002e7d3) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x0003b79b) cam4_battery_pane_g

0x2c7e,	// (0x0002e943) popup_blid_sat_info2_window_t11

0x90cd,	// (0x00034d92) aid_size_touch_mv_arrow_left_ParamLimits

0x11ea,	// (0x0002ceaf) aid_size_touch_mv_arrow_right_ParamLimits

0x1243,	// (0x0002cf08) navi_pane_g1_ParamLimits

0x124f,	// (0x0002cf14) navi_pane_g2_ParamLimits

0x90f1,	// (0x00034db6) navi_pane_g3_ParamLimits

0xf38b,	// (0x0003b050) navi_pane_g_ParamLimits

0x910e,	// (0x00034dd3) navi_pane_mv_t1_ParamLimits

0xa87b,	// (0x00036540) grid_imed_effect_pane_ParamLimits

0x7e8c,	// (0x00033b51) aid_placing_vt_slider_lsc

0xeb21,	// (0x0003a7e6) aid_placing_vt_slider_prt

0xf050,	// (0x0003ad15) bg_tb_trans_pane_cp01_ParamLimits

0x2ec3,	// (0x0002eb88) popup_image_details_window_g1_ParamLimits

0x2ed6,	// (0x0002eb9b) popup_image_details_window_g2_ParamLimits

0x2eeb,	// (0x0002ebb0) popup_image_details_window_g3_ParamLimits

0x2eeb,	// (0x0002ebb0) popup_image_details_window_g3

0xf6ca,	// (0x0003b38f) popup_image_details_window_g_ParamLimits

0x2eff,	// (0x0002ebc4) popup_image_details_window_t1_ParamLimits

0x2f11,	// (0x0002ebd6) popup_image_details_window_t2_ParamLimits

0x2f2a,	// (0x0002ebef) popup_image_details_window_t3_ParamLimits

0x2f3e,	// (0x0002ec03) popup_image_details_window_t4_ParamLimits

0x2f59,	// (0x0002ec1e) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x0003b396) popup_image_details_window_t_ParamLimits

0xbdca,	// (0x00037a8f) cl_header_name_pane_ParamLimits

0xbdca,	// (0x00037a8f) cl_header_name_pane

0xc13e,	// (0x00037e03) cl_header_name_pane_t1_ParamLimits

0xc13e,	// (0x00037e03) cl_header_name_pane_t1

0xc155,	// (0x00037e1a) cl_header_name_pane_t2_ParamLimits

0xc155,	// (0x00037e1a) cl_header_name_pane_t2

0xc17f,	// (0x00037e44) cl_header_name_pane_t3_ParamLimits

0xc17f,	// (0x00037e44) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x0003b7a0) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x0003b7a0) cl_header_name_pane_t

0x12dc,	// (0x0002cfa1) navi_pane_mv_g2_ParamLimits

0x3a2e,	// (0x0002f6f3) field_vitu2_entry_pane_g1_ParamLimits

0x3a3a,	// (0x0002f6ff) field_vitu2_entry_pane_g2_ParamLimits

0x1404,	// (0x0002d0c9) field_vitu2_entry_pane_g3_ParamLimits

0x1404,	// (0x0002d0c9) field_vitu2_entry_pane_g3

0xf8d1,	// (0x0003b596) field_vitu2_entry_pane_g_ParamLimits

0xb33b,	// (0x00037000) cell_vitu2_itu_pane_g1_ParamLimits

0xb34d,	// (0x00037012) cell_vitu2_itu_pane_g2_ParamLimits

0xb34d,	// (0x00037012) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x0003b5a2) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x0003b5a2) cell_vitu2_itu_pane_g

0xf050,	// (0x0003ad15) bg_vkb2_func_pane_cp05_ParamLimits

0xf050,	// (0x0003ad15) bg_vkb2_func_pane_cp05

0xf050,	// (0x0003ad15) bg_vkb2_func_pane_cp03

0xf050,	// (0x0003ad15) bg_vkb2_func_pane_cp04

0xf050,	// (0x0003ad15) bg_vkb2_func_pane_cp10_ParamLimits

0xf050,	// (0x0003ad15) bg_vkb2_func_pane_cp10

0x67de,	// (0x000324a3) bg_vkb2_func_pane_cp08

0xbd75,	// (0x00037a3a) bg_vkb2_func_pane_cp06

0xbd82,	// (0x00037a47) bg_vkb2_func_pane_cp07

0x4159,	// (0x0002fe1e) bg_vkb2_func_pane_cp11_ParamLimits

0x4159,	// (0x0002fe1e) bg_vkb2_func_pane_cp11

0x416e,	// (0x0002fe33) bg_vkb2_func_pane_cp12_ParamLimits

0x416e,	// (0x0002fe33) bg_vkb2_func_pane_cp12

0xe14d,	// (0x00039e12) bg_vkb2_func_pane_cp09

0x3a87,	// (0x0002f74c) bg_vkb2_func_pane_g1

0xecf0,	// (0x0003a9b5) bg_vkb2_func_pane_g2

0x3a8f,	// (0x0002f754) bg_vkb2_func_pane_g3

0x3a97,	// (0x0002f75c) bg_vkb2_func_pane_g4

0x3d12,	// (0x0002f9d7) bg_vkb2_func_pane_g5

0x3aaf,	// (0x0002f774) bg_vkb2_func_pane_g6

0x3ab7,	// (0x0002f77c) bg_vkb2_func_pane_g7

0x3aa7,	// (0x0002f76c) bg_vkb2_func_pane_g8

0xecd0,	// (0x0003a995) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x0003b7a7) bg_vkb2_func_pane_g

0xc095,	// (0x00037d5a) blid2_tripm_pane_g6_ParamLimits

0xc095,	// (0x00037d5a) blid2_tripm_pane_g6

0x37af,	// (0x0002f474) mp4_progress_pane_g1

0xc0e9,	// (0x00037dae) blid2_tripm_values_pane_ParamLimits

0xc0e9,	// (0x00037dae) blid2_tripm_values_pane

0xc1a4,	// (0x00037e69) blid2_tripm_values_pane_t1

0xc1b2,	// (0x00037e77) blid2_tripm_values_pane_t2

0xc1c0,	// (0x00037e85) blid2_tripm_values_pane_t3

0xc1ce,	// (0x00037e93) blid2_tripm_values_pane_t4

0xc1dc,	// (0x00037ea1) blid2_tripm_values_pane_t5

0xc1ea,	// (0x00037eaf) blid2_tripm_values_pane_t6

0xc1f8,	// (0x00037ebd) blid2_tripm_values_pane_t7

0xc206,	// (0x00037ecb) blid2_tripm_values_pane_t8

0xc214,	// (0x00037ed9) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x0003b7ba) blid2_tripm_values_pane_t

0x7ec6,	// (0x00033b8b) call_video_pane_t1_ParamLimits

0x7ee3,	// (0x00033ba8) call_video_pane_t2_ParamLimits

0xf222,	// (0x0003aee7) call_video_pane_t_ParamLimits

0x63b1,	// (0x00032076) msg_header_pane_g1_ParamLimits

0x1505,	// (0x0002d1ca) msg_header_pane_g2_ParamLimits

0x1505,	// (0x0002d1ca) msg_header_pane_g2

0x0001,

0xf42e,	// (0x0003b0f3) msg_header_pane_g_ParamLimits

0xf42e,	// (0x0003b0f3) msg_header_pane_g

0xe8b3,	// (0x0003a578) main_clock2_pane_ParamLimits

0xa61f,	// (0x000362e4) grid_clock2_toolbar_pane_ParamLimits

0xa61f,	// (0x000362e4) grid_clock2_toolbar_pane

0xa61f,	// (0x000362e4) listscroll_clock2_pane_ParamLimits

0xa61f,	// (0x000362e4) listscroll_clock2_pane

0xa6bb,	// (0x00036380) main_clock2_pane_t3_ParamLimits

0xa6bb,	// (0x00036380) main_clock2_pane_t3

0xa6cd,	// (0x00036392) main_clock2_pane_t4_ParamLimits

0xa6cd,	// (0x00036392) main_clock2_pane_t4

0x4222,	// (0x0002fee7) cell_clock2_toolbar_pane

0x422a,	// (0x0002feef) cell_clock2_toolbar_pane_cp01

0x422a,	// (0x0002feef) cell_clock2_toolbar_pane_cp02

0x4232,	// (0x0002fef7) cell_clock2_toolbar_pane_cp03

0x423a,	// (0x0002feff) list_clock2_pane

0x4242,	// (0x0002ff07) scroll_pane_cp10

0x424a,	// (0x0002ff0f) list_single_clock2_pane_ParamLimits

0x424a,	// (0x0002ff0f) list_single_clock2_pane

0xea78,	// (0x0003a73d) list_highlight_pane_cp08

0x4257,	// (0x0002ff1c) list_single_clock2_pane_t1

0x4265,	// (0x0002ff2a) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x0003b7cd) list_single_clock2_pane_t

0xe14d,	// (0x00039e12) bg_button_pane_cp10

0x4273,	// (0x0002ff38) cell_clock2_toolbar_pane_g1

0x9348,	// (0x0003500d) aid_main_viewer_pane_g1_ParamLimits

0x9348,	// (0x0003500d) aid_main_viewer_pane_g1

0x9354,	// (0x00035019) aid_main_viewer_pane_g2_ParamLimits

0x9354,	// (0x00035019) aid_main_viewer_pane_g2

0x9360,	// (0x00035025) aid_main_viewer_pane_g3_ParamLimits

0x9360,	// (0x00035025) aid_main_viewer_pane_g3

0x936f,	// (0x00035034) aid_main_viewer_pane_g4_ParamLimits

0x936f,	// (0x00035034) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x0003b104) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x0003b104) aid_main_viewer_pane_g

0x143a,	// (0x0002d0ff) main_calc_pane_ParamLimits

0x9a09,	// (0x000356ce) main_dialer2_pane_ParamLimits

0xe14d,	// (0x00039e12) main_cam6_pane

0xe14d,	// (0x00039e12) main_vid6_pane

0xa62b,	// (0x000362f0) listscroll_gen_pane_cp06_ParamLimits

0xa62b,	// (0x000362f0) listscroll_gen_pane_cp06

0xa6df,	// (0x000363a4) main_clock2_pane_t5_ParamLimits

0xa6df,	// (0x000363a4) main_clock2_pane_t5

0xa728,	// (0x000363ed) aid_call2_pane_cp10_ParamLimits

0xa73a,	// (0x000363ff) aid_call_pane_cp10_ParamLimits

0x11de,	// (0x0002cea3) popup_clock_analogue_window_cp10_g1_ParamLimits

0x11de,	// (0x0002cea3) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa74c,	// (0x00036411) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa74c,	// (0x00036411) popup_clock_analogue_window_cp10_g4_ParamLimits

0x11de,	// (0x0002cea3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x0003b44b) popup_clock_analogue_window_cp10_g_ParamLimits

0xa75e,	// (0x00036423) popup_clock_analogue_window_cp10_t1_ParamLimits

0x3807,	// (0x0002f4cc) cell_dialer2_keypad_pane_g2_ParamLimits

0x3807,	// (0x0002f4cc) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x0003b535) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x0003b535) cell_dialer2_keypad_pane_g

0xf03c,	// (0x0003ad01) cell_dialer2_keypad_pane_t1

0xb639,	// (0x000372fe) main_cset_text2_pane_ParamLimits

0xb639,	// (0x000372fe) main_cset_text2_pane

0x3f5c,	// (0x0002fc21) area_vitu2_query_pane_g1_ParamLimits

0x670b,	// (0x000323d0) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x0003b6ea) area_vitu2_query_pane_g_ParamLimits

0x67ba,	// (0x0003247f) area_vitu2_query_pane_t7_ParamLimits

0x67ba,	// (0x0003247f) area_vitu2_query_pane_t7

0xbd75,	// (0x00037a3a) bg_button_pane_cp018_ParamLimits

0xbd82,	// (0x00037a47) bg_button_pane_cp021_ParamLimits

0x67de,	// (0x000324a3) bg_button_pane_cp022_ParamLimits

0x67de,	// (0x000324a3) bg_vkb2_func_pane_cp08_ParamLimits

0xbd75,	// (0x00037a3a) bg_vkb2_func_pane_cp06_ParamLimits

0xbd82,	// (0x00037a47) bg_vkb2_func_pane_cp07_ParamLimits

0x67ed,	// (0x000324b2) input_focus_pane_cp09_ParamLimits

0xc222,	// (0x00037ee7) cam6_autofocus_pane_ParamLimits

0xc222,	// (0x00037ee7) cam6_autofocus_pane

0xc23e,	// (0x00037f03) cam6_image_uncrop_pane_ParamLimits

0xc23e,	// (0x00037f03) cam6_image_uncrop_pane

0xc261,	// (0x00037f26) cam6_indi_pane_ParamLimits

0xc261,	// (0x00037f26) cam6_indi_pane

0xc27b,	// (0x00037f40) cam6_mode_pane_ParamLimits

0xc27b,	// (0x00037f40) cam6_mode_pane

0xc28f,	// (0x00037f54) cam6_timer_pane_ParamLimits

0xc28f,	// (0x00037f54) cam6_timer_pane

0xc29b,	// (0x00037f60) cam6_zoom_pane_ParamLimits

0xc29b,	// (0x00037f60) cam6_zoom_pane

0xb111,	// (0x00036dd6) cam6_mode_pane_g1_ParamLimits

0xb111,	// (0x00036dd6) cam6_mode_pane_g1

0xc2b1,	// (0x00037f76) cam6_mode_pane_g2_ParamLimits

0xc2b1,	// (0x00037f76) cam6_mode_pane_g2

0xc2bd,	// (0x00037f82) cam6_mode_pane_g3_ParamLimits

0xc2bd,	// (0x00037f82) cam6_mode_pane_g3

0xc2c9,	// (0x00037f8e) cam6_mode_pane_g4_ParamLimits

0xc2c9,	// (0x00037f8e) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x0003b7d2) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x0003b7d2) cam6_mode_pane_g

0x4287,	// (0x0002ff4c) bg_tb_trans_pane_cp08_ParamLimits

0x4287,	// (0x0002ff4c) bg_tb_trans_pane_cp08

0x4295,	// (0x0002ff5a) cam6_battery_pane_ParamLimits

0x4295,	// (0x0002ff5a) cam6_battery_pane

0x42ab,	// (0x0002ff70) cam6_indi_pane_g1_ParamLimits

0x42ab,	// (0x0002ff70) cam6_indi_pane_g1

0x42bd,	// (0x0002ff82) cam6_indi_pane_g2_ParamLimits

0x42bd,	// (0x0002ff82) cam6_indi_pane_g2

0x42cf,	// (0x0002ff94) cam6_indi_pane_g3_ParamLimits

0x42cf,	// (0x0002ff94) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x0003b7db) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x0003b7db) cam6_indi_pane_g

0x42e1,	// (0x0002ffa6) cam6_indi_pane_t1_ParamLimits

0x42e1,	// (0x0002ffa6) cam6_indi_pane_t1

0xb1b4,	// (0x00036e79) cam6_autofocus_pane_g1

0xb1bc,	// (0x00036e81) cam6_autofocus_pane_g2

0xb1c4,	// (0x00036e89) cam6_autofocus_pane_g3

0xb1cc,	// (0x00036e91) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x0003b7e2) cam6_autofocus_pane_g

0x4307,	// (0x0002ffcc) cam6_timer_pane_g1

0x430f,	// (0x0002ffd4) cam6_timer_pane_t1

0x431d,	// (0x0002ffe2) cam6_zoom_cont_pane

0x4325,	// (0x0002ffea) cam6_zoom_pane_g1

0x432d,	// (0x0002fff2) cam6_zoom_pane_g2

0xc2d5,	// (0x00037f9a) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x0003b7eb) cam6_zoom_pane_g

0xead2,	// (0x0003a797) cam6_battery_pane_g1

0xead2,	// (0x0003a797) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x0003b0b4) cam6_battery_pane_g

0x4335,	// (0x0002fffa) cam6_zoom_cont_pane_g1

0x433e,	// (0x00030003) cam6_zoom_cont_pane_g2

0x4347,	// (0x0003000c) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x0003b7f2) cam6_zoom_cont_pane_g

0xc2f2,	// (0x00037fb7) cam6_mode_pane_cp_ParamLimits

0xc2f2,	// (0x00037fb7) cam6_mode_pane_cp

0xc29b,	// (0x00037f60) cam6_zoom_pane_cp_ParamLimits

0xc29b,	// (0x00037f60) cam6_zoom_pane_cp

0xc306,	// (0x00037fcb) vid6_image_uncrop_cif_pane_ParamLimits

0xc306,	// (0x00037fcb) vid6_image_uncrop_cif_pane

0xc328,	// (0x00037fed) vid6_image_uncrop_nhd_pane_ParamLimits

0xc328,	// (0x00037fed) vid6_image_uncrop_nhd_pane

0xc23e,	// (0x00037f03) vid6_image_uncrop_vga_pane_ParamLimits

0xc23e,	// (0x00037f03) vid6_image_uncrop_vga_pane

0xc33f,	// (0x00038004) vid6_image_uncrop_wvga_pane_ParamLimits

0xc33f,	// (0x00038004) vid6_image_uncrop_wvga_pane

0xc356,	// (0x0003801b) vid6_indi_pane_ParamLimits

0xc356,	// (0x0003801b) vid6_indi_pane

0x4287,	// (0x0002ff4c) bg_tb_trans_pane_cp09_ParamLimits

0x4287,	// (0x0002ff4c) bg_tb_trans_pane_cp09

0x435b,	// (0x00030020) cam6_battery_pane_cp_ParamLimits

0x435b,	// (0x00030020) cam6_battery_pane_cp

0x4367,	// (0x0003002c) vid6_indi_pane_g1_ParamLimits

0x4367,	// (0x0003002c) vid6_indi_pane_g1

0x4379,	// (0x0003003e) vid6_indi_pane_g2_ParamLimits

0x4379,	// (0x0003003e) vid6_indi_pane_g2

0x438b,	// (0x00030050) vid6_indi_pane_g3_ParamLimits

0x438b,	// (0x00030050) vid6_indi_pane_g3

0x43a0,	// (0x00030065) vid6_indi_pane_g4_ParamLimits

0x43a0,	// (0x00030065) vid6_indi_pane_g4

0x43b5,	// (0x0003007a) vid6_indi_pane_g5_ParamLimits

0x43b5,	// (0x0003007a) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x0003b7f9) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x0003b7f9) vid6_indi_pane_g

0x43cf,	// (0x00030094) vid6_indi_pane_t1_ParamLimits

0x43cf,	// (0x00030094) vid6_indi_pane_t1

0x43e5,	// (0x000300aa) vid6_indi_pane_t2_ParamLimits

0x43e5,	// (0x000300aa) vid6_indi_pane_t2

0x440d,	// (0x000300d2) vid6_indi_pane_t3_ParamLimits

0x440d,	// (0x000300d2) vid6_indi_pane_t3

0x4435,	// (0x000300fa) vid6_indi_pane_t4_ParamLimits

0x4435,	// (0x000300fa) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x0003b804) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x0003b804) vid6_indi_pane_t

0x4459,	// (0x0003011e) wait_bar_pane_cp08

0xc376,	// (0x0003803b) main_cset_text2_pane_t1_ParamLimits

0xc376,	// (0x0003803b) main_cset_text2_pane_t1

0xc2dd,	// (0x00037fa2) listscroll_gen_pane_cp06_t1_ParamLimits

0xc2dd,	// (0x00037fa2) listscroll_gen_pane_cp06_t1

0xe14d,	// (0x00039e12) main_cam6_set_pane

0xe83d,	// (0x0003a502) bg_tb_trans_pane_cp06_ParamLimits

0xb0b9,	// (0x00036d7e) cam4_indicators_pane_g1_ParamLimits

0xb0c9,	// (0x00036d8e) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x0003b572) cam4_indicators_pane_g_ParamLimits

0xb0e9,	// (0x00036dae) cam4_indicators_pane_t1_ParamLimits

0xf050,	// (0x0003ad15) bg_tb_trans_pane_cp07_ParamLimits

0xb0b9,	// (0x00036d7e) vid4_indicators_pane_g1_ParamLimits

0xb15d,	// (0x00036e22) vid4_indicators_pane_g2_ParamLimits

0xb16d,	// (0x00036e32) vid4_indicators_pane_g3_ParamLimits

0xb17e,	// (0x00036e43) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x0003b584) vid4_indicators_pane_g_ParamLimits

0xb19a,	// (0x00036e5f) vid4_indicators_pane_t1_ParamLimits

0xbe9e,	// (0x00037b63) vid4_progress_pane_g1_ParamLimits

0xbead,	// (0x00037b72) vid4_progress_pane_g2_ParamLimits

0xbebc,	// (0x00037b81) vid4_progress_pane_g3_ParamLimits

0xbecb,	// (0x00037b90) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x0003b735) vid4_progress_pane_g_ParamLimits

0xbed7,	// (0x00037b9c) vid4_progress_pane_t1_ParamLimits

0xbeed,	// (0x00037bb2) vid4_progress_pane_t2_ParamLimits

0xbf02,	// (0x00037bc7) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x0003b740) vid4_progress_pane_t_ParamLimits

0xbf17,	// (0x00037bdc) wait_bar_pane_cp07_ParamLimits

0xc392,	// (0x00038057) main_cam6_set_pane_g2_ParamLimits

0xc392,	// (0x00038057) main_cam6_set_pane_g2

0xc39e,	// (0x00038063) main_cset6_listscroll_pane_ParamLimits

0xc39e,	// (0x00038063) main_cset6_listscroll_pane

0xc3c7,	// (0x0003808c) main_cset6_slider_pane_ParamLimits

0xc3c7,	// (0x0003808c) main_cset6_slider_pane

0xc3d3,	// (0x00038098) main_cset6_text2_pane_ParamLimits

0xc3d3,	// (0x00038098) main_cset6_text2_pane

0x4469,	// (0x0003012e) main_cset6_text_pane

0x3b9d,	// (0x0002f862) main_cset_list_pane_copy1_ParamLimits

0x3b9d,	// (0x0002f862) main_cset_list_pane_copy1

0x3bad,	// (0x0002f872) scroll_pane_cp028_copy1

0xc3e6,	// (0x000380ab) cset_list_set_pane_copy1

0x3c80,	// (0x0002f945) aid_position_infowindow_above_copy1

0x3c88,	// (0x0002f94d) aid_position_infowindow_below_copy1

0x6832,	// (0x000324f7) cset_list_set_pane_g1_copy1

0x683a,	// (0x000324ff) cset_list_set_pane_g3_copy1_ParamLimits

0x683a,	// (0x000324ff) cset_list_set_pane_g3_copy1

0x6849,	// (0x0003250e) cset_list_set_pane_t1_copy1_ParamLimits

0x6849,	// (0x0003250e) cset_list_set_pane_t1_copy1

0xf050,	// (0x0003ad15) list_highlight_pane_cp021_copy1_ParamLimits

0xf050,	// (0x0003ad15) list_highlight_pane_cp021_copy1

0x4471,	// (0x00030136) cset6_slider_pane_ParamLimits

0x4471,	// (0x00030136) cset6_slider_pane

0x449d,	// (0x00030162) main_cset6_slider_pane_g1_ParamLimits

0x449d,	// (0x00030162) main_cset6_slider_pane_g1

0xc3f5,	// (0x000380ba) main_cset6_slider_pane_g2_ParamLimits

0xc3f5,	// (0x000380ba) main_cset6_slider_pane_g2

0x3bc2,	// (0x0002f887) main_cset6_slider_pane_g3_ParamLimits

0x3bc2,	// (0x0002f887) main_cset6_slider_pane_g3

0xc41d,	// (0x000380e2) main_cset6_slider_pane_g4_ParamLimits

0xc41d,	// (0x000380e2) main_cset6_slider_pane_g4

0xc429,	// (0x000380ee) main_cset6_slider_pane_g5_ParamLimits

0xc429,	// (0x000380ee) main_cset6_slider_pane_g5

0x3bc2,	// (0x0002f887) main_cset6_slider_pane_g7_ParamLimits

0x3bc2,	// (0x0002f887) main_cset6_slider_pane_g7

0x3bce,	// (0x0002f893) main_cset6_slider_pane_g8_ParamLimits

0x3bce,	// (0x0002f893) main_cset6_slider_pane_g8

0xc435,	// (0x000380fa) main_cset6_slider_pane_g9_ParamLimits

0xc435,	// (0x000380fa) main_cset6_slider_pane_g9

0xc441,	// (0x00038106) main_cset6_slider_pane_g10_ParamLimits

0xc441,	// (0x00038106) main_cset6_slider_pane_g10

0xc41d,	// (0x000380e2) main_cset6_slider_pane_g11_ParamLimits

0xc41d,	// (0x000380e2) main_cset6_slider_pane_g11

0xc44d,	// (0x00038112) main_cset6_slider_pane_g12_ParamLimits

0xc44d,	// (0x00038112) main_cset6_slider_pane_g12

0xc459,	// (0x0003811e) main_cset6_slider_pane_g13_ParamLimits

0xc459,	// (0x0003811e) main_cset6_slider_pane_g13

0xc465,	// (0x0003812a) main_cset6_slider_pane_g14_ParamLimits

0xc465,	// (0x0003812a) main_cset6_slider_pane_g14

0xc471,	// (0x00038136) main_cset6_slider_pane_g15_ParamLimits

0xc471,	// (0x00038136) main_cset6_slider_pane_g15

0xc429,	// (0x000380ee) main_cset6_slider_pane_g16_ParamLimits

0xc429,	// (0x000380ee) main_cset6_slider_pane_g16

0xc489,	// (0x0003814e) main_cset6_slider_pane_g17_ParamLimits

0xc489,	// (0x0003814e) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x0003b80d) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x0003b80d) main_cset6_slider_pane_g

0x44c5,	// (0x0003018a) main_cset6_slider_pane_t1_ParamLimits

0x44c5,	// (0x0003018a) main_cset6_slider_pane_t1

0xc495,	// (0x0003815a) main_cset6_slider_pane_t2_ParamLimits

0xc495,	// (0x0003815a) main_cset6_slider_pane_t2

0x4506,	// (0x000301cb) main_cset6_slider_pane_t3_ParamLimits

0x4506,	// (0x000301cb) main_cset6_slider_pane_t3

0xc4c0,	// (0x00038185) main_cset6_slider_pane_t4_ParamLimits

0xc4c0,	// (0x00038185) main_cset6_slider_pane_t4

0x4531,	// (0x000301f6) main_cset6_slider_pane_t5_ParamLimits

0x4531,	// (0x000301f6) main_cset6_slider_pane_t5

0x455c,	// (0x00030221) main_cset6_slider_pane_t7_ParamLimits

0x455c,	// (0x00030221) main_cset6_slider_pane_t7

0xc4eb,	// (0x000381b0) main_cset6_slider_pane_t8_ParamLimits

0xc4eb,	// (0x000381b0) main_cset6_slider_pane_t8

0xc50f,	// (0x000381d4) main_cset6_slider_pane_t9_ParamLimits

0xc50f,	// (0x000381d4) main_cset6_slider_pane_t9

0xc533,	// (0x000381f8) main_cset6_slider_pane_t10_ParamLimits

0xc533,	// (0x000381f8) main_cset6_slider_pane_t10

0xc557,	// (0x0003821c) main_cset6_slider_pane_t11_ParamLimits

0xc557,	// (0x0003821c) main_cset6_slider_pane_t11

0x4592,	// (0x00030257) main_cset6_slider_pane_t14_ParamLimits

0x4592,	// (0x00030257) main_cset6_slider_pane_t14

0x45cb,	// (0x00030290) main_cset6_slider_pane_t15_ParamLimits

0x45cb,	// (0x00030290) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x0003b832) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x0003b832) main_cset6_slider_pane_t

0x4604,	// (0x000302c9) cset_slider_pane_g1_copy1

0x460d,	// (0x000302d2) cset_slider_pane_g2_copy1

0x4616,	// (0x000302db) cset_slider_pane_g3_copy1

0xe14d,	// (0x00039e12) bg_popup_sub_pane_cp011_copy1

0x3d8e,	// (0x0002fa53) main_cset_text_pane_g1_copy1

0x3d96,	// (0x0002fa5b) main_cset_text_pane_t1_copy1

0x3da4,	// (0x0002fa69) main_cset_text_pane_t2_copy1

0x3db2,	// (0x0002fa77) main_cset_text_pane_t3_copy1

0x3dc0,	// (0x0002fa85) main_cset_text_pane_t4_copy1

0x3dce,	// (0x0002fa93) main_cset_text_pane_t5_copy1

0x3ddc,	// (0x0002faa1) main_cset_text_pane_t6_copy1

0x3dea,	// (0x0002faaf) main_cset_text_pane_t7_copy1

0xc57b,	// (0x00038240) main_cset_text2_pane_t1_copy1

0xf050,	// (0x0003ad15) main_ncimui_pane

0x9a54,	// (0x00035719) popup_query_ncimui_window_ParamLimits

0x9a54,	// (0x00035719) popup_query_ncimui_window

0x6475,	// (0x0003213a) field_cale_ev2_pane_g4_ParamLimits

0x6475,	// (0x0003213a) field_cale_ev2_pane_g4

0xaaef,	// (0x000367b4) cell_video_dialer_keypad_pane_g2_ParamLimits

0xaaef,	// (0x000367b4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x0003b50c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x0003b50c) cell_video_dialer_keypad_pane_g

0xab07,	// (0x000367cc) cell_video_dialer_keypad_pane_t1

0xe14d,	// (0x00039e12) bg_popup_window_pane_cp012

0x102b,	// (0x0002ccf0) heading_pane_cp06

0x466f,	// (0x00030334) ncim_query_content_pane

0xe14d,	// (0x00039e12) bg_popup_heading_pane_cp01

0x4677,	// (0x0003033c) ncim_heading_pane_t1

0x4685,	// (0x0003034a) ncim_indicator_popup_pane

0x4697,	// (0x0003035c) ncim_query_button_pane

0x46ab,	// (0x00030370) ncim_query_content_pane_t1

0x46bd,	// (0x00030382) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x0003b876) ncim_query_content_pane_t

0x46f7,	// (0x000303bc) ncim_query_list_pane

0x4709,	// (0x000303ce) ncim_query_popup_pane

0x4685,	// (0x0003034a) ncim_indicator_popup_pane_ParamLimits

0xc6bc,	// (0x00038381) ncim_query_content_pane_g1_ParamLimits

0xc6bc,	// (0x00038381) ncim_query_content_pane_g1

0x46ab,	// (0x00030370) ncim_query_content_pane_t1_ParamLimits

0x46bd,	// (0x00030382) ncim_query_content_pane_t2_ParamLimits

0xc6c8,	// (0x0003838d) ncim_query_content_pane_t3_ParamLimits

0xc6c8,	// (0x0003838d) ncim_query_content_pane_t3

0xc6e5,	// (0x000383aa) ncim_query_content_pane_t4_ParamLimits

0xc6e5,	// (0x000383aa) ncim_query_content_pane_t4

0xc702,	// (0x000383c7) ncim_query_content_pane_t5_ParamLimits

0xc702,	// (0x000383c7) ncim_query_content_pane_t5

0x46cf,	// (0x00030394) ncim_query_content_pane_t6_ParamLimits

0x46cf,	// (0x00030394) ncim_query_content_pane_t6

0xfbb1,	// (0x0003b876) ncim_query_content_pane_t_ParamLimits

0x46f7,	// (0x000303bc) ncim_query_list_pane_ParamLimits

0x4709,	// (0x000303ce) ncim_query_popup_pane_ParamLimits

0x471d,	// (0x000303e2) wait_bar_pane_cp04

0xe14d,	// (0x00039e12) input_focus_pane_cp011

0x4725,	// (0x000303ea) ncim_query_popup_pane_t1

0x4733,	// (0x000303f8) ncim_list_query_list_pane_ParamLimits

0x4733,	// (0x000303f8) ncim_list_query_list_pane

0xe14d,	// (0x00039e12) bg_button_pane_cp027

0x4746,	// (0x0003040b) ncim_query_button_pane_g1

0xe14d,	// (0x00039e12) list_highlight_pane_cp012

0x4750,	// (0x00030415) ncim_list_query_list_pane_g1

0x4758,	// (0x0003041d) ncim_list_query_list_pane_t1

0xb0d9,	// (0x00036d9e) cam4_indicators_pane_g3_ParamLimits

0xb0d9,	// (0x00036d9e) cam4_indicators_pane_g3

0xb18a,	// (0x00036e4f) vid4_indicators_pane_g5_ParamLimits

0xb18a,	// (0x00036e4f) vid4_indicators_pane_g5

0xef99,	// (0x0003ac5e) vid4_progress_pane_g5_ParamLimits

0xef99,	// (0x0003ac5e) vid4_progress_pane_g5

0xc5ac,	// (0x00038271) main_ncimui_pane_g1

0xc612,	// (0x000382d7) ncimui_group_query_pane_ParamLimits

0xc612,	// (0x000382d7) ncimui_group_query_pane

0xc65a,	// (0x0003831f) ncimui_list_pane_ParamLimits

0xc65a,	// (0x0003831f) ncimui_list_pane

0xc67f,	// (0x00038344) ncimui_text_pane_ParamLimits

0xc67f,	// (0x00038344) ncimui_text_pane

0xc71f,	// (0x000383e4) ncimui_text_pane_t1_ParamLimits

0xc71f,	// (0x000383e4) ncimui_text_pane_t1

0x476f,	// (0x00030434) ncimui_list_single_graphic_pane_ParamLimits

0x476f,	// (0x00030434) ncimui_list_single_graphic_pane

0xc73d,	// (0x00038402) ncimui_query_pane_ParamLimits

0xc73d,	// (0x00038402) ncimui_query_pane

0xe14d,	// (0x00039e12) list_highlight_pane_cp013

0x477f,	// (0x00030444) ncim_list_query_list_pane_t1_copy1

0x478d,	// (0x00030452) ncim_list_single_graphic_pane_g1

0x4795,	// (0x0003045a) ncim_query_button_pane_cp01

0x47a1,	// (0x00030466) ncim_query_entry_pane_ParamLimits

0x47a1,	// (0x00030466) ncim_query_entry_pane

0x47b4,	// (0x00030479) ncimui_query_pane_g1

0x47c0,	// (0x00030485) ncimui_query_pane_t1_ParamLimits

0x47c0,	// (0x00030485) ncimui_query_pane_t1

0xf050,	// (0x0003ad15) input_focus_pane_cp012

0x47d9,	// (0x0003049e) ncim_query_entry_pane_t1

0xe8b3,	// (0x0003a578) main_im_pane_ParamLimits

0xf050,	// (0x0003ad15) main_mobtv_pane_ParamLimits

0xf050,	// (0x0003ad15) main_mobtv_pane

0xc435,	// (0x000380fa) main_cset6_slider_pane_g18_ParamLimits

0xc435,	// (0x000380fa) main_cset6_slider_pane_g18

0xc459,	// (0x0003811e) main_cset6_slider_pane_g19_ParamLimits

0xc459,	// (0x0003811e) main_cset6_slider_pane_g19

0x1404,	// (0x0002d0c9) bg_main_mobtv_pane_ParamLimits

0x1404,	// (0x0002d0c9) bg_main_mobtv_pane

0xc74d,	// (0x00038412) main_mobtv_info_pane

0xc756,	// (0x0003841b) main_mobtv_loading_pane_ParamLimits

0xc756,	// (0x0003841b) main_mobtv_loading_pane

0x47eb,	// (0x000304b0) main_mobtv_pg_channel_list_pane

0x47f5,	// (0x000304ba) main_mobtv_pg_hdr_pane

0xc763,	// (0x00038428) main_mobtv_programe_curr_pane_ParamLimits

0xc763,	// (0x00038428) main_mobtv_programe_curr_pane

0xc770,	// (0x00038435) main_mobtv_programe_next_pane_ParamLimits

0xc770,	// (0x00038435) main_mobtv_programe_next_pane

0x47fe,	// (0x000304c3) popup_mobtv_noti_window

0xead2,	// (0x0003a797) main_tv_pg_hdr_pane_g1

0x4806,	// (0x000304cb) main_tv_pg_hdr_pane_g2

0x480e,	// (0x000304d3) main_tv_pg_hdr_pane_g3

0x4816,	// (0x000304db) main_tv_pg_hdr_pane_g4

0x481e,	// (0x000304e3) main_tv_pg_hdr_pane_g5

0x4826,	// (0x000304eb) main_tv_pg_hdr_pane_g6

0x482e,	// (0x000304f3) main_tv_pg_hdr_pane_g7

0x4836,	// (0x000304fb) main_tv_pg_hdr_pane_g8

0x483e,	// (0x00030503) main_tv_pg_hdr_pane_g9

0x4846,	// (0x0003050b) main_tv_pg_hdr_pane_g10

0x4850,	// (0x00030515) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x0003b883) main_tv_pg_hdr_pane_g

0x485a,	// (0x0003051f) main_tv_pg_hdr_pane_t1

0x4868,	// (0x0003052d) main_tv_pg_hdr_pane_t2

0x4876,	// (0x0003053b) main_tv_pg_hdr_pane_t3

0x4884,	// (0x00030549) main_tv_pg_hdr_pane_t4

0x4892,	// (0x00030557) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x0003b89a) main_tv_pg_hdr_pane_t

0x48a0,	// (0x00030565) single_mobtv_pg_channel_pane_ParamLimits

0x48a0,	// (0x00030565) single_mobtv_pg_channel_pane

0x48b2,	// (0x00030577) single_mobtv_pg_channel_table_pane

0x48bb,	// (0x00030580) single_mobtv_pg_channel_thumb_pane

0x48c4,	// (0x00030589) single_tv_pg_channel_pane_g1

0x48cd,	// (0x00030592) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x0003b8a5) single_tv_pg_channel_pane_g

0xe83d,	// (0x0003a502) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe83d,	// (0x0003a502) bg_single_mobtv_pg_channel_thumb_pane

0x48d6,	// (0x0003059b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x48d6,	// (0x0003059b) single_mobtv_pg_channel_thumb_pane_g1

0x48e4,	// (0x000305a9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x48e4,	// (0x000305a9) single_mobtv_pg_channel_thumb_pane_g2

0x48f0,	// (0x000305b5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x48f0,	// (0x000305b5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x0003b8aa) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x0003b8aa) single_mobtv_pg_channel_thumb_pane_g

0x48fc,	// (0x000305c1) single_mobtv_pg_channel_thumb_pane_t1

0x490a,	// (0x000305cf) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x0003b8b1) single_mobtv_pg_channel_thumb_pane_t

0xead2,	// (0x0003a797) bg_single_mobtv_pg_channel_table_pane_g1

0xead2,	// (0x0003a797) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x0003b0b4) bg_single_mobtv_pg_channel_table_pane_g

0x4918,	// (0x000305dd) single_mobtv_pg_channel_table_pane_t1

0x4926,	// (0x000305eb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x0003b8b6) single_mobtv_pg_channel_table_pane_t

0xc785,	// (0x0003844a) main_mobtv_info_pane_g1_ParamLimits

0xc785,	// (0x0003844a) main_mobtv_info_pane_g1

0xc7a1,	// (0x00038466) main_mobtv_info_pane_t1_ParamLimits

0xc7a1,	// (0x00038466) main_mobtv_info_pane_t1

0xc807,	// (0x000384cc) main_mobtv_info_pane_t2_ParamLimits

0xc807,	// (0x000384cc) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x0003b8c0) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x0003b8c0) main_mobtv_info_pane_t

0xc88a,	// (0x0003854f) wait_bar_pane_cp05

0xc89a,	// (0x0003855f) main_mobtv_loading_pane_g1_ParamLimits

0xc89a,	// (0x0003855f) main_mobtv_loading_pane_g1

0xc8a6,	// (0x0003856b) main_mobtv_loading_pane_g2_ParamLimits

0xc8a6,	// (0x0003856b) main_mobtv_loading_pane_g2

0xc8b2,	// (0x00038577) main_mobtv_loading_pane_g3_ParamLimits

0xc8b2,	// (0x00038577) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x0003b8c7) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x0003b8c7) main_mobtv_loading_pane_g

0x4934,	// (0x000305f9) main_mobtv_loading_pane_t1_ParamLimits

0x4934,	// (0x000305f9) main_mobtv_loading_pane_t1

0x494c,	// (0x00030611) main_mobtv_loading_pane_t2_ParamLimits

0x494c,	// (0x00030611) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x0003b8ce) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x0003b8ce) main_mobtv_loading_pane_t

0xc8be,	// (0x00038583) wait_bar_pane_cp06_ParamLimits

0xc8be,	// (0x00038583) wait_bar_pane_cp06

0x4970,	// (0x00030635) main_mobtv_programe_curr_pane_t1

0x497e,	// (0x00030643) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x0003b8d3) main_mobtv_programe_curr_pane_t

0x498c,	// (0x00030651) main_mobtv_programe_next_pane_t1

0x499a,	// (0x0003065f) main_mobtv_programe_next_pane_t2

0x49a8,	// (0x0003066d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x0003b8d8) main_mobtv_programe_next_pane_t

0xe14d,	// (0x00039e12) bg_popup_mobtv_noti_window_pane

0x49b6,	// (0x0003067b) popup_mobtv_noti_window_g1

0x49be,	// (0x00030683) popup_mobtv_noti_window_t1

0x49cc,	// (0x00030691) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x0003b8df) popup_mobtv_noti_window_t

0xead2,	// (0x0003a797) bg_popup_mobtv_noti_window_pane_g1

0xe14d,	// (0x00039e12) sc_clock_pane

0xe14d,	// (0x00039e12) main_fs_bigclock_pane

0xc0d7,	// (0x00037d9c) blid2_tripm_pane_t4_ParamLimits

0xc0d7,	// (0x00037d9c) blid2_tripm_pane_t4

0xc8ca,	// (0x0003858f) sc_clock_pane_g1_ParamLimits

0xc8ca,	// (0x0003858f) sc_clock_pane_g1

0xc8d8,	// (0x0003859d) sc_clock_pane_t1_ParamLimits

0xc8d8,	// (0x0003859d) sc_clock_pane_t1

0xc8eb,	// (0x000385b0) sc_clock_pane_t2_ParamLimits

0xc8eb,	// (0x000385b0) sc_clock_pane_t2

0xc8fd,	// (0x000385c2) sc_clock_pane_t3_ParamLimits

0xc8fd,	// (0x000385c2) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x0003b8e4) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x0003b8e4) sc_clock_pane_t

0xd15f,	// (0x00038e24) main_fs_bigclock_indicator_pane_ParamLimits

0xd15f,	// (0x00038e24) main_fs_bigclock_indicator_pane

0xc978,	// (0x0003863d) main_fs_bigclock_pane_g1_ParamLimits

0xc978,	// (0x0003863d) main_fs_bigclock_pane_g1

0xd16b,	// (0x00038e30) main_fs_bigclock_pane_t1_ParamLimits

0xd16b,	// (0x00038e30) main_fs_bigclock_pane_t1

0xd17d,	// (0x00038e42) main_fs_bigclock_pane_t2_ParamLimits

0xd17d,	// (0x00038e42) main_fs_bigclock_pane_t2

0xd18f,	// (0x00038e54) main_fs_bigclock_pane_t3_ParamLimits

0xd18f,	// (0x00038e54) main_fs_bigclock_pane_t3

0x0002,

0xfde8,	// (0x0003baad) main_fs_bigclock_pane_t_ParamLimits

0xfde8,	// (0x0003baad) main_fs_bigclock_pane_t

0xd1a1,	// (0x00038e66) main_fs_bigclock_indicator_pane_g1

0x469f,	// (0x00030364) ncim_query_content_pane_g2_ParamLimits

0x469f,	// (0x00030364) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x0003b871) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x0003b871) ncim_query_content_pane_g

0xc90f,	// (0x000385d4) sc_clock_pane_t4_ParamLimits

0xc90f,	// (0x000385d4) sc_clock_pane_t4

0xf050,	// (0x0003ad15) main_radioblah_pane

0xaf86,	// (0x00036c4b) cell_call4_button_pane_t1_copy1_ParamLimits

0xaf86,	// (0x00036c4b) cell_call4_button_pane_t1_copy1

0xc5c4,	// (0x00038289) main_ncimui_pane_t1_ParamLimits

0xc5c4,	// (0x00038289) main_ncimui_pane_t1

0xc5de,	// (0x000382a3) main_ncimui_pane_t2_ParamLimits

0xc5de,	// (0x000382a3) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x0003b86a) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x0003b86a) main_ncimui_pane_t

0x4b0d,	// (0x000307d2) main_radioblah_anim_pane_ParamLimits

0x4b0d,	// (0x000307d2) main_radioblah_anim_pane

0x4b1e,	// (0x000307e3) main_radioblah_info_pane_ParamLimits

0x4b1e,	// (0x000307e3) main_radioblah_info_pane

0x4b32,	// (0x000307f7) main_radioblah_pane_t1_ParamLimits

0x4b32,	// (0x000307f7) main_radioblah_pane_t1

0x4b4e,	// (0x00030813) main_radioblah_pane_t2_ParamLimits

0x4b4e,	// (0x00030813) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x0003b905) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x0003b905) main_radioblah_pane_t

0xc9c0,	// (0x00038685) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc9c0,	// (0x00038685) main_radioblah_rocker_ctrl_pane

0x4b96,	// (0x0003085b) main_radioblah_info_pane_t1_ParamLimits

0x4b96,	// (0x0003085b) main_radioblah_info_pane_t1

0xca05,	// (0x000386ca) main_radioblah_info_pane_t2_ParamLimits

0xca05,	// (0x000386ca) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x0003b90e) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x0003b90e) main_radioblah_info_pane_t

0xead2,	// (0x0003a797) main_radioblah_rocker_ctrl_pane_g1

0xcaad,	// (0x00038772) main_radioblah_rocker_ctrl_pane_g2

0xcab5,	// (0x0003877a) main_radioblah_rocker_ctrl_pane_g3

0xcabd,	// (0x00038782) main_radioblah_rocker_ctrl_pane_g4

0xcac5,	// (0x0003878a) main_radioblah_rocker_ctrl_pane_g5

0xcacd,	// (0x00038792) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x0003b917) main_radioblah_rocker_ctrl_pane_g

0xc57b,	// (0x00038240) main_cset_text2_pane_t1_copy1_ParamLimits

0xb009,	// (0x00036cce) cam4_image_uncrop_qvga_pane

0xb11d,	// (0x00036de2) vid4_image_uncrop_qcif_pane

0xc255,	// (0x00037f1a) cam6_image_uncrop_qvga_pane_ParamLimits

0xc255,	// (0x00037f1a) cam6_image_uncrop_qvga_pane

0x434f,	// (0x00030014) vid6_image_uncrop_qcif_pane_ParamLimits

0x434f,	// (0x00030014) vid6_image_uncrop_qcif_pane

0xe14d,	// (0x00039e12) bg_popup_preview_window_pane_cp03

0x4645,	// (0x0003030a) list_cset_text2_pane

0x464d,	// (0x00030312) main_cset6_text2_pane_g1

0x4655,	// (0x0003031a) main_cset6_text2_pane_t1

0x5357,	// (0x0003101c) list_cset_text2_pane_t1_ParamLimits

0x5357,	// (0x0003101c) list_cset_text2_pane_t1

0xf050,	// (0x0003ad15) main_radioblah_pane_ParamLimits

0xc878,	// (0x0003853d) main_mobtv_info_pane_t3_ParamLimits

0xc878,	// (0x0003853d) main_mobtv_info_pane_t3

0xc9ae,	// (0x00038673) main_radioblah_pane_g1

0xc9d9,	// (0x0003869e) main_radioblah_info_pane_g1

0xca54,	// (0x00038719) main_radioblah_info_pane_t3_ParamLimits

0xca54,	// (0x00038719) main_radioblah_info_pane_t3

0x8c73,	// (0x00034938) highlight_cell_cale_month_pane_ParamLimits

0x8c73,	// (0x00034938) highlight_cell_cale_month_pane

0xe14d,	// (0x00039e12) main_phob_fisheye_pane

0x30d7,	// (0x0002ed9c) scroll_pane_cp0031_ParamLimits

0x30d7,	// (0x0002ed9c) scroll_pane_cp0031

0x4459,	// (0x0003011e) wait_bar_pane_cp08_ParamLimits

0xc3e6,	// (0x000380ab) cset_list_set_pane_copy1_ParamLimits

0x4bd0,	// (0x00030895) highlight_cell_cale_month_pane_g1

0xcad5,	// (0x0003879a) highlight_cell_cale_month_pane_t1

0x4bd8,	// (0x0003089d) list_gen_pane_cp01

0x3bad,	// (0x0002f872) scroll_pane_01

0xf070,	// (0x0003ad35) list_single_double_fisheye_pane

0x688e,	// (0x00032553) list_double_fisheye_pane_g1_ParamLimits

0x688e,	// (0x00032553) list_double_fisheye_pane_g1

0x689a,	// (0x0003255f) list_double_fisheye_pane_g2_ParamLimits

0x689a,	// (0x0003255f) list_double_fisheye_pane_g2

0xf079,	// (0x0003ad3e) list_double_fisheye_pane_g3_ParamLimits

0xf079,	// (0x0003ad3e) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x0003b924) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x0003b924) list_double_fisheye_pane_g

0x68cb,	// (0x00032590) list_double_fisheye_pane_t1_ParamLimits

0x68cb,	// (0x00032590) list_double_fisheye_pane_t1

0x68e6,	// (0x000325ab) list_double_fisheye_pane_t2_ParamLimits

0x68e6,	// (0x000325ab) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x0003b92f) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x0003b92f) list_double_fisheye_pane_t

0xe14d,	// (0x00039e12) main_call5_pane

0xc935,	// (0x000385fa) sc_swipe_pane_ParamLimits

0xc935,	// (0x000385fa) sc_swipe_pane

0xcaef,	// (0x000387b4) call5_image_pane_ParamLimits

0xcaef,	// (0x000387b4) call5_image_pane

0xcafb,	// (0x000387c0) call5_swipe_1_pane_ParamLimits

0xcafb,	// (0x000387c0) call5_swipe_1_pane

0xcb07,	// (0x000387cc) call5_swipe_2_pane_ParamLimits

0xcb07,	// (0x000387cc) call5_swipe_2_pane

0xcb1f,	// (0x000387e4) popup_call5_audio_first_window_ParamLimits

0xcb1f,	// (0x000387e4) popup_call5_audio_first_window

0xe83d,	// (0x0003a502) call5_swipe_1_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) call5_swipe_1_pane_g1

0x4be1,	// (0x000308a6) call5_swipe_1_pane_g2_ParamLimits

0x4be1,	// (0x000308a6) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x0003b934) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x0003b934) call5_swipe_1_pane_g

0x4bed,	// (0x000308b2) call5_swipe_1_pane_t1_ParamLimits

0x4bed,	// (0x000308b2) call5_swipe_1_pane_t1

0xe83d,	// (0x0003a502) call5_swipe_2_pane_g1_ParamLimits

0xe83d,	// (0x0003a502) call5_swipe_2_pane_g1

0x4c02,	// (0x000308c7) call5_swipe_2_pane_g2_ParamLimits

0x4c02,	// (0x000308c7) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x0003b939) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x0003b939) call5_swipe_2_pane_g

0x4c0e,	// (0x000308d3) call5_swipe_2_pane_t1_ParamLimits

0x4c0e,	// (0x000308d3) call5_swipe_2_pane_t1

0x4c23,	// (0x000308e8) sc_swipe_pane_g1_ParamLimits

0x4c23,	// (0x000308e8) sc_swipe_pane_g1

0x4c30,	// (0x000308f5) sc_swipe_pane_g2_ParamLimits

0x4c30,	// (0x000308f5) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x0003b93e) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x0003b93e) sc_swipe_pane_g

0x4c3c,	// (0x00030901) sc_swipe_pane_t1_ParamLimits

0x4c3c,	// (0x00030901) sc_swipe_pane_t1

0xe14d,	// (0x00039e12) main_cmail_launcher_pane

0xcb2b,	// (0x000387f0) aid_size_cell_cmail_l_ParamLimits

0xcb2b,	// (0x000387f0) aid_size_cell_cmail_l

0xcb3b,	// (0x00038800) grid_cmail_l_pane_ParamLimits

0xcb3b,	// (0x00038800) grid_cmail_l_pane

0xcb47,	// (0x0003880c) cell_cmail_l_pane_ParamLimits

0xcb47,	// (0x0003880c) cell_cmail_l_pane

0xcb59,	// (0x0003881e) cell_cmail_l_pane_g1_ParamLimits

0xcb59,	// (0x0003881e) cell_cmail_l_pane_g1

0xcb69,	// (0x0003882e) cell_cmail_l_pane_t1_ParamLimits

0xcb69,	// (0x0003882e) cell_cmail_l_pane_t1

0xcb7f,	// (0x00038844) cell_cmail_l_pane_t2_ParamLimits

0xcb7f,	// (0x00038844) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x0003b943) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x0003b943) cell_cmail_l_pane_t

0xf050,	// (0x0003ad15) grid_highlight_pane_cp018_ParamLimits

0xf050,	// (0x0003ad15) grid_highlight_pane_cp018

0x7125,	// (0x00032dea) main2_pane_ParamLimits

0x7125,	// (0x00032dea) main2_pane

0xe954,	// (0x0003a619) popup_sp_fs_action_menu_bg_pane_g1

0xe95c,	// (0x0003a621) popup_sp_fs_action_menu_bg_pane_g2

0xe964,	// (0x0003a629) popup_sp_fs_action_menu_bg_pane_g3

0xe96c,	// (0x0003a631) popup_sp_fs_action_menu_bg_pane_g4

0xe974,	// (0x0003a639) popup_sp_fs_action_menu_bg_pane_g5

0xe97c,	// (0x0003a641) popup_sp_fs_action_menu_bg_pane_g6

0xe984,	// (0x0003a649) popup_sp_fs_action_menu_bg_pane_g7

0xe98c,	// (0x0003a651) popup_sp_fs_action_menu_bg_pane_g8

0xe994,	// (0x0003a659) popup_sp_fs_action_menu_bg_pane_g9

0xe99c,	// (0x0003a661) popup_sp_fs_action_menu_bg_pane_g10

0xe99c,	// (0x0003a661) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0003ae0a) popup_sp_fs_action_menu_bg_pane_g

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g3_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g3_g1

0x6315,	// (0x00031fda) list_medium_line_x2_t3_g3_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x2_t3_g3_g2

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0003aeb8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0003aeb8) list_medium_line_x2_t3_g3_g

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g3_t1

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g3_t2

0x6334,	// (0x00031ff9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6334,	// (0x00031ff9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003aebf) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003aebf) list_medium_line_x2_t3_g3_t

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g2_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g2_g1

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0003aec6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0003aec6) list_medium_line_x2_t3_g2_g

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g2_t1

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g2_t2

0x6334,	// (0x00031ff9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6334,	// (0x00031ff9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003aebf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003aebf) list_medium_line_x2_t3_g2_t

0x6309,	// (0x00031fce) list_medium_line_x2_t4_g4_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t4_g4_g1

0x6315,	// (0x00031fda) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x2_t4_g4_g2

0x6315,	// (0x00031fda) list_medium_line_x2_t4_g4_g3_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x2_t4_g4_g3

0x6309,	// (0x00031fce) list_medium_line_x2_t4_g4_g4_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0003aecb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0003aecb) list_medium_line_x2_t4_g4_g

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g4_t1

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g4_t2

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g4_t3

0x6334,	// (0x00031ff9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6334,	// (0x00031ff9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0003aed4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0003aed4) list_medium_line_x2_t4_g4_t

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g4_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g4_g1

0x6315,	// (0x00031fda) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x2_t2_g4_g2

0x6315,	// (0x00031fda) list_medium_line_x2_t2_g4_g3_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x2_t2_g4_g3

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0003aecb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0003aecb) list_medium_line_x2_t2_g4_g

0x6321,	// (0x00031fe6) list_medium_line_x2_t2_g4_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t2_g4_t1

0x6334,	// (0x00031ff9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6334,	// (0x00031ff9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0003af3b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0003af3b) list_medium_line_x2_t2_g4_t

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g3_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g3_g1

0x6315,	// (0x00031fda) list_medium_line_x2_t2_g3_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x2_t2_g3_g2

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0003aeb8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0003aeb8) list_medium_line_x2_t2_g3_g

0x6321,	// (0x00031fe6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t2_g3_t1

0x6334,	// (0x00031ff9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6334,	// (0x00031ff9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0003af3b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0003af3b) list_medium_line_x2_t2_g3_t

0x8e05,	// (0x00034aca) main_sp_fs_list_pane_ParamLimits

0x8e05,	// (0x00034aca) main_sp_fs_list_pane

0x8e12,	// (0x00034ad7) sp_fs_scroll_pane_ParamLimits

0x8e12,	// (0x00034ad7) sp_fs_scroll_pane

0x6347,	// (0x0003200c) list_medium_line_x2_t3_t1

0x6347,	// (0x0003200c) list_medium_line_x2_t3_t2

0x6356,	// (0x0003201b) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0003af86) list_medium_line_x2_t3_t

0x6347,	// (0x0003200c) list_medium_line_x3_t4_t1

0x6347,	// (0x0003200c) list_medium_line_x3_t4_t2

0x6347,	// (0x0003200c) list_medium_line_x3_t4_t3

0x6347,	// (0x0003200c) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0003af8d) list_medium_line_x3_t4_t

0x6347,	// (0x0003200c) list_medium_line_x4_t5_t1

0x6347,	// (0x0003200c) list_medium_line_x4_t5_t2

0x6347,	// (0x0003200c) list_medium_line_x4_t5_t3

0x6347,	// (0x0003200c) list_medium_line_x4_t5_t4

0x6347,	// (0x0003200c) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0003af96) list_medium_line_x4_t5_t

0x6309,	// (0x00031fce) list_medium_line_t4_g4_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t4_g4_g1

0x6309,	// (0x00031fce) list_medium_line_t4_g4_g2_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t4_g4_g2

0x6309,	// (0x00031fce) list_medium_line_t4_g4_g3_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t4_g4_g3

0x6309,	// (0x00031fce) list_medium_line_t4_g4_g4_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x0003afa1) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x0003afa1) list_medium_line_t4_g4_g

0x6321,	// (0x00031fe6) list_medium_line_t4_g4_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t4_g4_t1

0x6321,	// (0x00031fe6) list_medium_line_t4_g4_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t4_g4_t2

0x6321,	// (0x00031fe6) list_medium_line_t4_g4_t3_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t4_g4_t3

0x6321,	// (0x00031fe6) list_medium_line_t4_g4_t4_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x0003afaa) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x0003afaa) list_medium_line_t4_g4_t

0x8f2d,	// (0x00034bf2) chi_dic_find_pane_g1

0x9a17,	// (0x000356dc) main_tport_pane

0x6347,	// (0x0003200c) list_medium_line_plain_t1

0x6309,	// (0x00031fce) list_medium_line_t2_g2_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t2_g2_g1

0x65f1,	// (0x000322b6) list_medium_line_t2_g2_g2_ParamLimits

0x65f1,	// (0x000322b6) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x0003b67b) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x0003b67b) list_medium_line_t2_g2_g

0x6321,	// (0x00031fe6) list_medium_line_t2_g2_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t2_g2_t1

0x6321,	// (0x00031fe6) list_medium_line_t2_g2_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x0003b680) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x0003b680) list_medium_line_t2_g2_t

0x67fc,	// (0x000324c1) aid_sp_fs_list_icon_a_sm

0x6804,	// (0x000324c9) aid_sp_fs_list_icon_d

0x680c,	// (0x000324d1) aid_sp_fs_text_primary

0x6815,	// (0x000324da) aid_sp_fs_text_secondary

0xbf27,	// (0x00037bec) list_medium_line

0xbf27,	// (0x00037bec) list_medium_line_g2

0xbf27,	// (0x00037bec) list_medium_line_g3

0xbf27,	// (0x00037bec) list_medium_line_plain

0xbf27,	// (0x00037bec) list_medium_line_plain_t2

0xbf27,	// (0x00037bec) list_medium_line_plain_t3

0xbf27,	// (0x00037bec) list_medium_line_right_icon

0xbf27,	// (0x00037bec) list_medium_line_right_iconx2

0xbf27,	// (0x00037bec) list_medium_line_t2

0xbf27,	// (0x00037bec) list_medium_line_t2_g2

0xbf27,	// (0x00037bec) list_medium_line_t2_g3

0xbf27,	// (0x00037bec) list_medium_line_t2_right_icon

0xbf27,	// (0x00037bec) list_medium_line_t2_right_iconx2

0xbf27,	// (0x00037bec) list_medium_line_t3

0xbf27,	// (0x00037bec) list_medium_line_t3_g2

0xbf27,	// (0x00037bec) list_medium_line_t3_g3

0xbf27,	// (0x00037bec) list_medium_line_t3_right_iconx2

0xf05e,	// (0x0003ad23) list_medium_line_t4_g4

0x4115,	// (0x0002fdda) list_medium_line_x2

0x4115,	// (0x0002fdda) list_medium_line_x2_t2_g2

0x4115,	// (0x0002fdda) list_medium_line_x2_t2_g3

0x4115,	// (0x0002fdda) list_medium_line_x2_t2_g4

0x4115,	// (0x0002fdda) list_medium_line_x2_t3

0x4115,	// (0x0002fdda) list_medium_line_x2_t3_g2

0x4115,	// (0x0002fdda) list_medium_line_x2_t3_g3

0x4115,	// (0x0002fdda) list_medium_line_x2_t3_g4

0x4115,	// (0x0002fdda) list_medium_line_x2_t4_g2

0x4115,	// (0x0002fdda) list_medium_line_x2_t4_g4

0xf067,	// (0x0003ad2c) list_medium_line_x3

0xf067,	// (0x0003ad2c) list_medium_line_x3_t4

0xf067,	// (0x0003ad2c) list_medium_line_x3_t4_g4

0xf05e,	// (0x0003ad23) list_medium_line_x4_t4

0xf05e,	// (0x0003ad23) list_medium_line_x4_t4_g7

0xf05e,	// (0x0003ad23) list_medium_line_x4_t5

0x681e,	// (0x000324e3) list_single_fs_dyc_pane_ParamLimits

0x681e,	// (0x000324e3) list_single_fs_dyc_pane

0x6309,	// (0x00031fce) list_medium_line_x4_t4_g7_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x4_t4_g7_g1

0xe83d,	// (0x0003a502) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe83d,	// (0x0003a502) list_medium_line_x4_t4_g7_g2

0x6315,	// (0x00031fda) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x4_t4_g7_g3

0xe83d,	// (0x0003a502) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe83d,	// (0x0003a502) list_medium_line_x4_t4_g7_g4

0xe83d,	// (0x0003a502) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe83d,	// (0x0003a502) list_medium_line_x4_t4_g7_g5

0xe83d,	// (0x0003a502) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe83d,	// (0x0003a502) list_medium_line_x4_t4_g7_g6

0xe84b,	// (0x0003a510) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe84b,	// (0x0003a510) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x0003b84b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x0003b84b) list_medium_line_x4_t4_g7_g

0x6321,	// (0x00031fe6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x4_t4_g7_t1

0x6321,	// (0x00031fe6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x4_t4_g7_t2

0x6321,	// (0x00031fe6) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x4_t4_g7_t3

0x461f,	// (0x000302e4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x461f,	// (0x000302e4) list_medium_line_x4_t4_g7_t4

0x685e,	// (0x00032523) list_medium_line_x4_t4_g7_t5_ParamLimits

0x685e,	// (0x00032523) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x0003b85a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x0003b85a) list_medium_line_x4_t4_g7_t

0x6871,	// (0x00032536) list_single_dyc_row_pane_ParamLimits

0x6871,	// (0x00032536) list_single_dyc_row_pane

0xcae3,	// (0x000387a8) call5_gesture_pane_ParamLimits

0xcae3,	// (0x000387a8) call5_gesture_pane

0xcb13,	// (0x000387d8) call5_windows_pane_ParamLimits

0xcb13,	// (0x000387d8) call5_windows_pane

0xcb97,	// (0x0003885c) call5_swipe_1_pane_cp_ParamLimits

0xcb97,	// (0x0003885c) call5_swipe_1_pane_cp

0xcba3,	// (0x00038868) call5_swipe_2_pane_cp_ParamLimits

0xcba3,	// (0x00038868) call5_swipe_2_pane_cp

0xea78,	// (0x0003a73d) call5_image_pane_cp

0xcbaf,	// (0x00038874) popup_call5_audio_first_window_cp_ParamLimits

0xcbaf,	// (0x00038874) popup_call5_audio_first_window_cp

0x4c23,	// (0x000308e8) call5_swipe_1_pane_g1_cp_ParamLimits

0x4c23,	// (0x000308e8) call5_swipe_1_pane_g1_cp

0x4c51,	// (0x00030916) call5_swipe_1_pane_g2_cp

0x4c3c,	// (0x00030901) call5_swipe_1_pane_t1_cp_ParamLimits

0x4c3c,	// (0x00030901) call5_swipe_1_pane_t1_cp

0x4c23,	// (0x000308e8) call5_swipe_2_pane_g1_cp_ParamLimits

0x4c23,	// (0x000308e8) call5_swipe_2_pane_g1_cp

0x4c59,	// (0x0003091e) call5_swipe_2_pane_g2_cp

0x4c61,	// (0x00030926) call5_swipe_2_pane_t1_cp_ParamLimits

0x4c61,	// (0x00030926) call5_swipe_2_pane_t1_cp

0xf050,	// (0x0003ad15) main_sp_fs_email_pane

0x4c76,	// (0x0003093b) main_sp_fs_listscroll_pane_te

0xcbbb,	// (0x00038880) popup_sp_fs_action_menu_pane_ParamLimits

0xcbbb,	// (0x00038880) popup_sp_fs_action_menu_pane

0xead2,	// (0x0003a797) bg_sp_fs_ctrlbar_pane_g1

0x330b,	// (0x0002efd0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x331d,	// (0x0002efe2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3314,	// (0x0002efd9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xead2,	// (0x0003a797) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x0003b948) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2b99,	// (0x0002e85e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2b99,	// (0x0002e85e) bg_sp_fs_ctrlbar_ddmenu_pane

0x4c7f,	// (0x00030944) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4c7f,	// (0x00030944) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4c8b,	// (0x00030950) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4c8b,	// (0x00030950) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x0003b951) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x0003b951) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4c97,	// (0x0003095c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4c97,	// (0x0003095c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe99c,	// (0x0003a661) list_medium_line_t2_right_icon_g1

0x6347,	// (0x0003200c) list_medium_line_t2_right_icon_t1

0x6347,	// (0x0003200c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x0003b956) list_medium_line_t2_right_icon_t

0x1448,	// (0x0002d10d) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1448,	// (0x0002d10d) bg_sp_fs_ctrlbar_pane

0xcc42,	// (0x00038907) main_sp_fs_ctrlbar_button_pane_cp01

0xcc4a,	// (0x0003890f) main_sp_fs_ctrlbar_ddmenu_pane

0x4cf1,	// (0x000309b6) main_sp_fs_ctrlbar_pane_g1

0x4cfd,	// (0x000309c2) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x0003b95b) main_sp_fs_ctrlbar_pane_g

0xcc84,	// (0x00038949) main_sp_fs_ctrlbar_pane_t1

0xcccc,	// (0x00038991) main_sp_fs_ctrlbar_pane

0xcce0,	// (0x000389a5) main_sp_fs_listscroll_pane_te_cp01

0x6908,	// (0x000325cd) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6908,	// (0x000325cd) popup_sp_fs_action_menu_pane_cp01

0xf050,	// (0x0003ad15) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf050,	// (0x0003ad15) bg_sp_fs_highlight_list_pane_cp01

0x6928,	// (0x000325ed) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6928,	// (0x000325ed) sp_fs_action_menu_list_gene_pane_g1

0x4d24,	// (0x000309e9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4d24,	// (0x000309e9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x0003b969) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x0003b969) sp_fs_action_menu_list_gene_pane_g

0x6937,	// (0x000325fc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6937,	// (0x000325fc) sp_fs_action_menu_list_gene_pane_t1

0xccf1,	// (0x000389b6) sp_fs_action_menu_list_gene_pane_ParamLimits

0xccf1,	// (0x000389b6) sp_fs_action_menu_list_gene_pane

0x4d31,	// (0x000309f6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4d31,	// (0x000309f6) popup_sp_fs_action_menu_bg_pane

0xcd0e,	// (0x000389d3) sp_fs_action_menu_list_pane_ParamLimits

0xcd0e,	// (0x000389d3) sp_fs_action_menu_list_pane

0x4d3f,	// (0x00030a04) sp_fs_scroll_pane_cp01_ParamLimits

0x4d3f,	// (0x00030a04) sp_fs_scroll_pane_cp01

0x6347,	// (0x0003200c) list_medium_line_plain_t2_t1

0x6347,	// (0x0003200c) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x0003b956) list_medium_line_plain_t2_t

0x6347,	// (0x0003200c) list_medium_line_plain_t3_t1

0x6347,	// (0x0003200c) list_medium_line_plain_t3_t2

0x6347,	// (0x0003200c) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x0003b96e) list_medium_line_plain_t3_t

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g2_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g2_g1

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0003aec6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0003aec6) list_medium_line_x2_t2_g2_g

0x6321,	// (0x00031fe6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t2_g2_t1

0x6334,	// (0x00031ff9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6334,	// (0x00031ff9) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0003af3b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0003af3b) list_medium_line_x2_t2_g2_t

0x6309,	// (0x00031fce) list_medium_line_x2_t4_g2_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t4_g2_g1

0x694f,	// (0x00032614) list_medium_line_x2_t4_g2_g2_ParamLimits

0x694f,	// (0x00032614) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb0,	// (0x0003b975) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb0,	// (0x0003b975) list_medium_line_x2_t4_g2_g

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g2_t1

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g2_t2

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t4_g2_t3

0x6334,	// (0x00031ff9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6334,	// (0x00031ff9) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0003aed4) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0003aed4) list_medium_line_x2_t4_g2_t

0xe99c,	// (0x0003a661) list_medium_line_t3_right_iconx2_g1

0xead2,	// (0x0003a797) list_medium_line_t3_right_iconx2_g2

0x4e43,	// (0x00030b08) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb5,	// (0x0003b97a) list_medium_line_t3_right_iconx2_g

0x6347,	// (0x0003200c) list_medium_line_t3_right_iconx2_t1

0x6347,	// (0x0003200c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x0003b956) list_medium_line_t3_right_iconx2_t

0x6309,	// (0x00031fce) list_medium_line_x3_t4_g4_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x3_t4_g4_g1

0x6315,	// (0x00031fda) list_medium_line_x3_t4_g4_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x3_t4_g4_g2

0x6309,	// (0x00031fce) list_medium_line_x3_t4_g4_g3_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x3_t4_g4_g3

0x6315,	// (0x00031fda) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcbc,	// (0x0003b981) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcbc,	// (0x0003b981) list_medium_line_x3_t4_g4_g

0x6321,	// (0x00031fe6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x3_t4_g4_t1

0x6321,	// (0x00031fe6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x3_t4_g4_t2

0x6321,	// (0x00031fe6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x3_t4_g4_t3

0x6960,	// (0x00032625) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6960,	// (0x00032625) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc5,	// (0x0003b98a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc5,	// (0x0003b98a) list_medium_line_x3_t4_g4_t

0x697d,	// (0x00032642) list_single_dyc_row_text_pane_t1_ParamLimits

0x697d,	// (0x00032642) list_single_dyc_row_text_pane_t1

0x69b4,	// (0x00032679) list_single_dyc_row_text_pane_t2_ParamLimits

0x69b4,	// (0x00032679) list_single_dyc_row_text_pane_t2

0x6a25,	// (0x000326ea) list_single_dyc_row_text_pane_t3_ParamLimits

0x6a25,	// (0x000326ea) list_single_dyc_row_text_pane_t3

0x0005,

0xfcce,	// (0x0003b993) list_single_dyc_row_text_pane_t_ParamLimits

0xfcce,	// (0x0003b993) list_single_dyc_row_text_pane_t

0x6af0,	// (0x000327b5) list_single_dyc_row_pane_g1_ParamLimits

0x6af0,	// (0x000327b5) list_single_dyc_row_pane_g1

0x6afc,	// (0x000327c1) list_single_dyc_row_pane_g2_ParamLimits

0x6afc,	// (0x000327c1) list_single_dyc_row_pane_g2

0x6b08,	// (0x000327cd) list_single_dyc_row_pane_g3_ParamLimits

0x6b08,	// (0x000327cd) list_single_dyc_row_pane_g3

0x6b14,	// (0x000327d9) list_single_dyc_row_pane_g4_ParamLimits

0x6b14,	// (0x000327d9) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x0003b9a0) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x0003b9a0) list_single_dyc_row_pane_g

0x6b20,	// (0x000327e5) list_single_dyc_row_text_pane_ParamLimits

0x6b20,	// (0x000327e5) list_single_dyc_row_text_pane

0xe14d,	// (0x00039e12) bg_sp_fs_scroll_pane

0x4dfe,	// (0x00030ac3) thumb_sp_fs_scroll_pane

0x6309,	// (0x00031fce) list_medium_line_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_g1

0x6321,	// (0x00031fe6) list_medium_line_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t1

0x6309,	// (0x00031fce) list_medium_line_x2_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_g1

0x65f1,	// (0x000322b6) list_medium_line_x2_g2_ParamLimits

0x65f1,	// (0x000322b6) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x0003b67b) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x0003b67b) list_medium_line_x2_g

0xf03c,	// (0x0003ad01) list_medium_line_x2_t1_ParamLimits

0xf03c,	// (0x0003ad01) list_medium_line_x2_t1

0x6309,	// (0x00031fce) list_medium_line_x3_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x3_g1

0x6b3f,	// (0x00032804) list_medium_line_x3_g2_ParamLimits

0x6b3f,	// (0x00032804) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x0003b9a9) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x0003b9a9) list_medium_line_x3_g

0x4e14,	// (0x00030ad9) list_medium_line_x3_t1_ParamLimits

0x4e14,	// (0x00030ad9) list_medium_line_x3_t1

0x4e28,	// (0x00030aed) thumb_sp_fs_scroll_pane_g1

0x4e31,	// (0x00030af6) thumb_sp_fs_scroll_pane_g2

0x4e3a,	// (0x00030aff) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0003b9ae) thumb_sp_fs_scroll_pane_g

0x4e28,	// (0x00030aed) bg_sp_fs_scroll_pane_g1

0x4e31,	// (0x00030af6) bg_sp_fs_scroll_pane_g2

0x4e3a,	// (0x00030aff) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0003b9ae) bg_sp_fs_scroll_pane_g

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g4_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g4_g1

0x6315,	// (0x00031fda) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x2_t3_g4_g2

0x6315,	// (0x00031fda) list_medium_line_x2_t3_g4_g3_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_x2_t3_g4_g3

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0003aecb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0003aecb) list_medium_line_x2_t3_g4_g

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g4_t1

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_x2_t3_g4_t2

0x6334,	// (0x00031ff9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6334,	// (0x00031ff9) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0003aebf) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0003aebf) list_medium_line_x2_t3_g4_t

0x6309,	// (0x00031fce) list_medium_line_g2_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_g2_g1

0x65f1,	// (0x000322b6) list_medium_line_g2_g2_ParamLimits

0x65f1,	// (0x000322b6) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x0003b67b) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x0003b67b) list_medium_line_g2_g

0x6321,	// (0x00031fe6) list_medium_line_g2_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_g2_t1

0x6309,	// (0x00031fce) list_medium_line_t3_g2_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t3_g2_g1

0x65f1,	// (0x000322b6) list_medium_line_t3_g2_g2_ParamLimits

0x65f1,	// (0x000322b6) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x0003b67b) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x0003b67b) list_medium_line_t3_g2_g

0x6321,	// (0x00031fe6) list_medium_line_t3_g2_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_g2_t1

0x6321,	// (0x00031fe6) list_medium_line_t3_g2_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_g2_t2

0x6321,	// (0x00031fe6) list_medium_line_t3_g2_t3_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_g2_t3

0x0002,

0xfcf0,	// (0x0003b9b5) list_medium_line_t3_g2_t_ParamLimits

0xfcf0,	// (0x0003b9b5) list_medium_line_t3_g2_t

0x4604,	// (0x000302c9) list_medium_line_right_icon_g1

0x6347,	// (0x0003200c) list_medium_line_right_icon_t1

0x6309,	// (0x00031fce) list_medium_line_t2_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t2_g1

0x6321,	// (0x00031fe6) list_medium_line_t2_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t2_t1

0x6321,	// (0x00031fe6) list_medium_line_t2_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x0003b680) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x0003b680) list_medium_line_t2_t

0x6309,	// (0x00031fce) list_medium_line_t3_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t3_g1

0x6321,	// (0x00031fe6) list_medium_line_t3_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_t1

0x6321,	// (0x00031fe6) list_medium_line_t3_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_t2

0x6321,	// (0x00031fe6) list_medium_line_t3_t3_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_t3

0x0002,

0xfcf0,	// (0x0003b9b5) list_medium_line_t3_t_ParamLimits

0xfcf0,	// (0x0003b9b5) list_medium_line_t3_t

0x6309,	// (0x00031fce) list_medium_line_g3_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_g3_g1

0x6315,	// (0x00031fda) list_medium_line_g3_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_g3_g2

0x6315,	// (0x00031fda) list_medium_line_g3_g3_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_g3_g3

0x0002,

0xfcf7,	// (0x0003b9bc) list_medium_line_g3_g_ParamLimits

0xfcf7,	// (0x0003b9bc) list_medium_line_g3_g

0x6321,	// (0x00031fe6) list_medium_line_g3_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_g3_t1

0x6309,	// (0x00031fce) list_medium_line_t2_g3_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t2_g3_g1

0x6315,	// (0x00031fda) list_medium_line_t2_g3_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_t2_g3_g2

0x6315,	// (0x00031fda) list_medium_line_t2_g3_g3_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_t2_g3_g3

0x0002,

0xfcf7,	// (0x0003b9bc) list_medium_line_t2_g3_g_ParamLimits

0xfcf7,	// (0x0003b9bc) list_medium_line_t2_g3_g

0x6321,	// (0x00031fe6) list_medium_line_t2_g3_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t2_g3_t1

0x6321,	// (0x00031fe6) list_medium_line_t2_g3_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x0003b680) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x0003b680) list_medium_line_t2_g3_t

0x6309,	// (0x00031fce) list_medium_line_t3_g3_g1_ParamLimits

0x6309,	// (0x00031fce) list_medium_line_t3_g3_g1

0x6315,	// (0x00031fda) list_medium_line_t3_g3_g2_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_t3_g3_g2

0x6315,	// (0x00031fda) list_medium_line_t3_g3_g3_ParamLimits

0x6315,	// (0x00031fda) list_medium_line_t3_g3_g3

0x0002,

0xfcf7,	// (0x0003b9bc) list_medium_line_t3_g3_g_ParamLimits

0xfcf7,	// (0x0003b9bc) list_medium_line_t3_g3_g

0x6321,	// (0x00031fe6) list_medium_line_t3_g3_t1_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_g3_t1

0x6321,	// (0x00031fe6) list_medium_line_t3_g3_t2_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_g3_t2

0x6321,	// (0x00031fe6) list_medium_line_t3_g3_t3_ParamLimits

0x6321,	// (0x00031fe6) list_medium_line_t3_g3_t3

0x0002,

0xfcf0,	// (0x0003b9b5) list_medium_line_t3_g3_t_ParamLimits

0xfcf0,	// (0x0003b9b5) list_medium_line_t3_g3_t

0xe99c,	// (0x0003a661) list_medium_line_right_iconx2_g1

0xe99c,	// (0x0003a661) list_medium_line_right_iconx2_g2

0x0001,

0xfcfe,	// (0x0003b9c3) list_medium_line_right_iconx2_g

0x4e4c,	// (0x00030b11) list_medium_line_right_iconx2_t1

0xe99c,	// (0x0003a661) list_medium_line_t2_right_iconx2_g1

0xe99c,	// (0x0003a661) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfe,	// (0x0003b9c3) list_medium_line_t2_right_iconx2_g

0x6347,	// (0x0003200c) list_medium_line_t2_right_iconx2_t1

0x6347,	// (0x0003200c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x0003b956) list_medium_line_t2_right_iconx2_t

0x6347,	// (0x0003200c) list_medium_line_x4_t4_t1

0x6347,	// (0x0003200c) list_medium_line_x4_t4_t2

0x6347,	// (0x0003200c) list_medium_line_x4_t4_t3

0x6347,	// (0x0003200c) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0003af8d) list_medium_line_x4_t4_t

0xcd50,	// (0x00038a15) tport_appsw_pane_ParamLimits

0xcd50,	// (0x00038a15) tport_appsw_pane

0xcd5c,	// (0x00038a21) tport_contact_pane_ParamLimits

0xcd5c,	// (0x00038a21) tport_contact_pane

0xcd6a,	// (0x00038a2f) tport_listscroll_pane_ParamLimits

0xcd6a,	// (0x00038a2f) tport_listscroll_pane

0xcd78,	// (0x00038a3d) cell_tport_appsw_pane_ParamLimits

0xcd78,	// (0x00038a3d) cell_tport_appsw_pane

0xe84b,	// (0x0003a510) tport_appsw_pane_g1_ParamLimits

0xe84b,	// (0x0003a510) tport_appsw_pane_g1

0x4e5b,	// (0x00030b20) tport_contact_pane_g1

0x4e64,	// (0x00030b29) tport_contact_pane_t1

0x4e72,	// (0x00030b37) tport_contact_pane_t2

0x0001,

0xfd03,	// (0x0003b9c8) tport_contact_pane_t

0x4e80,	// (0x00030b45) list_tport_pane

0xe9ae,	// (0x0003a673) scroll_pane_cp_030

0x4e91,	// (0x00030b56) cell_tport_appsw_pane_g1

0x4ea1,	// (0x00030b66) cell_tport_appsw_pane_t1

0x4eaf,	// (0x00030b74) grid_highlight_pane_cp019

0xcd9f,	// (0x00038a64) list_tport_double_graphic_pane_ParamLimits

0xcd9f,	// (0x00038a64) list_tport_double_graphic_pane

0xf050,	// (0x0003ad15) list_highlight_pane_cp023_ParamLimits

0xf050,	// (0x0003ad15) list_highlight_pane_cp023

0xcdac,	// (0x00038a71) list_tport_double_graphic_pane_g1_ParamLimits

0xcdac,	// (0x00038a71) list_tport_double_graphic_pane_g1

0xcdb9,	// (0x00038a7e) list_tport_double_graphic_pane_t1_ParamLimits

0xcdb9,	// (0x00038a7e) list_tport_double_graphic_pane_t1

0xcdce,	// (0x00038a93) list_tport_double_graphic_pane_t2_ParamLimits

0xcdce,	// (0x00038a93) list_tport_double_graphic_pane_t2

0x0001,

0xfd0f,	// (0x0003b9d4) list_tport_double_graphic_pane_t_ParamLimits

0xfd0f,	// (0x0003b9d4) list_tport_double_graphic_pane_t

0xe14d,	// (0x00039e12) main_cale_note_pane

0xb313,	// (0x00036fd8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb313,	// (0x00036fd8) cell_vitu2_function_top_wide_pane_cp01

0xc88a,	// (0x0003854f) wait_bar_pane_cp05_ParamLimits

0xf050,	// (0x0003ad15) listscroll_cmail_pane

0x4eb7,	// (0x00030b7c) list_cmail_pane

0xcde0,	// (0x00038aa5) list_cmail_body_pane

0xcde0,	// (0x00038aa5) list_single_cmail_header_caption_pane

0xcdf9,	// (0x00038abe) list_single_cmail_header_detail_pane_ParamLimits

0xcdf9,	// (0x00038abe) list_single_cmail_header_detail_pane

0x4ed3,	// (0x00030b98) list_single_cmail_header_caption_pane_t1

0x6b4c,	// (0x00032811) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6b4c,	// (0x00032811) list_single_cmail_header_detail_pane_g1

0x6b62,	// (0x00032827) list_single_cmail_header_detail_pane_g2_ParamLimits

0x6b62,	// (0x00032827) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd14,	// (0x0003b9d9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd14,	// (0x0003b9d9) list_single_cmail_header_detail_pane_g

0x6b6e,	// (0x00032833) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6b6e,	// (0x00032833) list_single_cmail_header_detail_pane_t1

0x6bce,	// (0x00032893) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6bce,	// (0x00032893) list_single_cmail_header_editor_pane_bg

0x4f35,	// (0x00030bfa) list_cmail_body_pane_g1

0x4f3e,	// (0x00030c03) list_cmail_body_pane_t1

0x3a87,	// (0x0002f74c) list_single_cmail_header_editor_pane_bg_g1

0xecf0,	// (0x0003a9b5) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3a97,	// (0x0002f75c) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3a8f,	// (0x0002f754) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3d12,	// (0x0002f9d7) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3ab7,	// (0x0002f77c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3aa7,	// (0x0002f76c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3aaf,	// (0x0002f774) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xecd0,	// (0x0003a995) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xce24,	// (0x00038ae9) calenote_gesture_pane_ParamLimits

0xce24,	// (0x00038ae9) calenote_gesture_pane

0xce3c,	// (0x00038b01) calenote_window_pane_ParamLimits

0xce3c,	// (0x00038b01) calenote_window_pane

0x4f4c,	// (0x00030c11) popup_note_window_cp01

0xce54,	// (0x00038b19) calenote_swipe_1_pane_ParamLimits

0xce54,	// (0x00038b19) calenote_swipe_1_pane

0xcba3,	// (0x00038868) calenote_swipe_2_pane_ParamLimits

0xcba3,	// (0x00038868) calenote_swipe_2_pane

0x4c23,	// (0x000308e8) calenote_swipe_1_pane_g1_ParamLimits

0x4c23,	// (0x000308e8) calenote_swipe_1_pane_g1

0x4c30,	// (0x000308f5) calenote_swipe_1_pane_g2_ParamLimits

0x4c30,	// (0x000308f5) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x0003b93e) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x0003b93e) calenote_swipe_1_pane_g

0x4f5e,	// (0x00030c23) calenote_swipe_1_pane_t1_ParamLimits

0x4f5e,	// (0x00030c23) calenote_swipe_1_pane_t1

0x4c23,	// (0x000308e8) calenote_swipe_2_pane_g1_ParamLimits

0x4c23,	// (0x000308e8) calenote_swipe_2_pane_g1

0x4f7d,	// (0x00030c42) calenote_swipe_2_pane_g2_ParamLimits

0x4f7d,	// (0x00030c42) calenote_swipe_2_pane_g2

0x0001,

0xfd20,	// (0x0003b9e5) calenote_swipe_2_pane_g_ParamLimits

0xfd20,	// (0x0003b9e5) calenote_swipe_2_pane_g

0x4f89,	// (0x00030c4e) calenote_swipe_2_pane_t1_ParamLimits

0x4f89,	// (0x00030c4e) calenote_swipe_2_pane_t1

0xe14d,	// (0x00039e12) main_mup_navstr_pane

0xa425,	// (0x000360ea) main_mup3_pane_t7_ParamLimits

0xa425,	// (0x000360ea) main_mup3_pane_t7

0xabe0,	// (0x000368a5) main_mp4_pane_g6_ParamLimits

0xabe0,	// (0x000368a5) main_mp4_pane_g6

0xae99,	// (0x00036b5e) main_image3_pane_t4_ParamLimits

0xae99,	// (0x00036b5e) main_image3_pane_t4

0xce67,	// (0x00038b2c) popup_navstr_preview_pane_ParamLimits

0xce67,	// (0x00038b2c) popup_navstr_preview_pane

0xce73,	// (0x00038b38) scroll_navstr_pane_ParamLimits

0xce73,	// (0x00038b38) scroll_navstr_pane

0xe14d,	// (0x00039e12) bg_popup_preview_window_pane_cp04

0x4fb0,	// (0x00030c75) popup_navstr_preview_pane_t1

0xce7f,	// (0x00038b44) scroll_navstr_pane_g1_ParamLimits

0xce7f,	// (0x00038b44) scroll_navstr_pane_g1

0xce8c,	// (0x00038b51) scroll_navstr_pane_t1_ParamLimits

0xce8c,	// (0x00038b51) scroll_navstr_pane_t1

0x4f55,	// (0x00030c1a) bg_button_pane_cp014

0x4f55,	// (0x00030c1a) bg_button_pane_cp030

0x68ae,	// (0x00032573) list_double_fisheye_pane_g4_ParamLimits

0x68ae,	// (0x00032573) list_double_fisheye_pane_g4

0x68ba,	// (0x0003257f) list_double_fisheye_pane_g5_ParamLimits

0x68ba,	// (0x0003257f) list_double_fisheye_pane_g5

0x4ec7,	// (0x00030b8c) sp_fs_scroll_pane_cp03

0x4cf1,	// (0x000309b6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4cfd,	// (0x000309c2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x0003b95b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcc84,	// (0x00038949) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4ebf,	// (0x00030b84) sp_fs_scroll_pane_cp02

0xe9c0,	// (0x0003a685) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe9c0,	// (0x0003a685) popup_sp_fs_calendar_preview_list_single_pane

0xe14d,	// (0x00039e12) main_cam6_pano_pane

0xf050,	// (0x0003ad15) main_mup3_pane_ParamLimits

0xe14d,	// (0x00039e12) main_phacti_pane

0xc77d,	// (0x00038442) bg_button_pane_cp11

0xc795,	// (0x0003845a) main_mobtv_info_pane_g2_ParamLimits

0xc795,	// (0x0003845a) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x0003b8bb) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x0003b8bb) main_mobtv_info_pane_g

0xc921,	// (0x000385e6) sc_clock_pane_t5_ParamLimits

0xc921,	// (0x000385e6) sc_clock_pane_t5

0xc9ae,	// (0x00038673) main_radioblah_pane_g1_ParamLimits

0x4b66,	// (0x0003082b) main_radioblah_pane_t3_ParamLimits

0x4b66,	// (0x0003082b) main_radioblah_pane_t3

0x4b7e,	// (0x00030843) main_radioblah_pane_t4_ParamLimits

0x4b7e,	// (0x00030843) main_radioblah_pane_t4

0xc9cc,	// (0x00038691) main_radioblah_text_pane_ParamLimits

0xc9cc,	// (0x00038691) main_radioblah_text_pane

0xc9d9,	// (0x0003869e) main_radioblah_info_pane_g1_ParamLimits

0xca66,	// (0x0003872b) main_radioblah_info_pane_t4_ParamLimits

0xca66,	// (0x0003872b) main_radioblah_info_pane_t4

0xf050,	// (0x0003ad15) main_sp_fs_calendar_pane

0xce9e,	// (0x00038b63) main_phacti_pane_g1

0xcea6,	// (0x00038b6b) phacti_note_pane_ParamLimits

0xcea6,	// (0x00038b6b) phacti_note_pane

0x4fc7,	// (0x00030c8c) phacti_term_pane_ParamLimits

0x4fc7,	// (0x00030c8c) phacti_term_pane

0x4fdc,	// (0x00030ca1) phacti_note_pane_t1_ParamLimits

0x4fdc,	// (0x00030ca1) phacti_note_pane_t1

0x6be5,	// (0x000328aa) phacti_term_pane_g1

0x6bed,	// (0x000328b2) phacti_term_pane_t1_ParamLimits

0x6bed,	// (0x000328b2) phacti_term_pane_t1

0x5025,	// (0x00030cea) popup_sp_fs_calendar_preview_list_single_pane_g1

0x502d,	// (0x00030cf2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2a,	// (0x0003b9ef) popup_sp_fs_calendar_preview_list_single_pane_g

0x5035,	// (0x00030cfa) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5035,	// (0x00030cfa) popup_sp_fs_calendar_preview_list_single_pane_t1

0x504b,	// (0x00030d10) aid_popup_sp_fs_bg_corner_pane

0xead2,	// (0x0003a797) popup_sp_fs_calendar_preview_bg_pane_g1

0xe14d,	// (0x00039e12) popup_sp_fs_calendar_preview_bg_pane

0x5053,	// (0x00030d18) popup_sp_fs_calendar_preview_list_pane

0x1448,	// (0x0002d10d) bg_main_sp_fs_cale_pane_ParamLimits

0x1448,	// (0x0002d10d) bg_main_sp_fs_cale_pane

0x6c17,	// (0x000328dc) listscroll_cale_mrui_pane_ParamLimits

0x6c17,	// (0x000328dc) listscroll_cale_mrui_pane

0x6c2c,	// (0x000328f1) listscroll_sp_fs_schedule_track_pane

0x6c35,	// (0x000328fa) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6c35,	// (0x000328fa) main_sp_fs_ctrlbar_pane_cp01

0x5095,	// (0x00030d5a) main_sp_fs_ribbon_pane

0x6c48,	// (0x0003290d) popup_sp_fs_cale_preview_window

0x5329,	// (0x00030fee) list_single_sp_fs_schedule_track_pane_ParamLimits

0x5329,	// (0x00030fee) list_single_sp_fs_schedule_track_pane

0x143a,	// (0x0002d0ff) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x143a,	// (0x0002d0ff) bg_sp_fs_highlight_list_pane_cp03

0xcefd,	// (0x00038bc2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcefd,	// (0x00038bc2) list_single_sp_fs_schedule_track_pane_g1

0xcf09,	// (0x00038bce) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcf09,	// (0x00038bce) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2f,	// (0x0003b9f4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2f,	// (0x0003b9f4) list_single_sp_fs_schedule_track_pane_g

0xcf15,	// (0x00038bda) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcf15,	// (0x00038bda) list_single_sp_fs_schedule_track_pane_t1

0xcf2d,	// (0x00038bf2) sp_fs_schedule_track_pane_ParamLimits

0xcf2d,	// (0x00038bf2) sp_fs_schedule_track_pane

0x50af,	// (0x00030d74) sp_fs_schedule_track_pane_g1

0x50b7,	// (0x00030d7c) sp_fs_schedule_track_pane_g2

0x50bf,	// (0x00030d84) sp_fs_schedule_track_pane_g3

0x50c7,	// (0x00030d8c) sp_fs_schedule_track_pane_g4

0x50cf,	// (0x00030d94) sp_fs_schedule_track_pane_g5

0x0004,

0xfd34,	// (0x0003b9f9) sp_fs_schedule_track_pane_g

0x3a87,	// (0x0002f74c) bg_sp_fs_schedule_viewer_highlight_g1

0xecf0,	// (0x0003a9b5) bg_sp_fs_schedule_viewer_highlight_g2

0x3a8f,	// (0x0002f754) bg_sp_fs_schedule_viewer_highlight_g3

0x3a97,	// (0x0002f75c) bg_sp_fs_schedule_viewer_highlight_g4

0x3d12,	// (0x0002f9d7) bg_sp_fs_schedule_viewer_highlight_g5

0x3aa7,	// (0x0002f76c) bg_sp_fs_schedule_viewer_highlight_g6

0x3aaf,	// (0x0002f774) bg_sp_fs_schedule_viewer_highlight_g7

0x3ab7,	// (0x0002f77c) bg_sp_fs_schedule_viewer_highlight_g8

0xecd0,	// (0x0003a995) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3f,	// (0x0003ba04) bg_sp_fs_schedule_viewer_highlight_g

0xe14d,	// (0x00039e12) bg_main_sp_fs_ribbon_pane

0xb096,	// (0x00036d5b) main_sp_fs_ribbon_pane_g1

0x50d7,	// (0x00030d9c) main_sp_fs_ribbon_pane_t1

0xcf3d,	// (0x00038c02) main_sp_fs_ribbon_pane_t2

0x50e6,	// (0x00030dab) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd52,	// (0x0003ba17) main_sp_fs_ribbon_pane_t

0x50f5,	// (0x00030dba) main_sp_fs_ribbon_scheduler_pane

0x50fd,	// (0x00030dc2) bg_main_sp_fs_ribbon_pane_g1

0x5106,	// (0x00030dcb) bg_main_sp_fs_ribbon_pane_g2

0x510f,	// (0x00030dd4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd59,	// (0x0003ba1e) bg_main_sp_fs_ribbon_pane_g

0x5117,	// (0x00030ddc) main_sp_fs_ribbon_scheduler_pane_g1

0x5120,	// (0x00030de5) main_sp_fs_ribbon_scheduler_pane_g2

0x5129,	// (0x00030dee) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd60,	// (0x0003ba25) main_sp_fs_ribbon_scheduler_pane_g

0x5132,	// (0x00030df7) list_cale_mrui_pane

0xcf4c,	// (0x00038c11) sp_fs_scroll_pane_cp07_ParamLimits

0xcf4c,	// (0x00038c11) sp_fs_scroll_pane_cp07

0xcf64,	// (0x00038c29) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcf64,	// (0x00038c29) bg_sp_fs_schedule_viewer_highlight

0x513f,	// (0x00030e04) list_single_sp_fs_schedule_track_pane_cp01

0x5147,	// (0x00030e0c) list_sp_fs_schedule_track_pane

0x514f,	// (0x00030e14) sp_fs_scroll_pane_cp06_ParamLimits

0x514f,	// (0x00030e14) sp_fs_scroll_pane_cp06

0xead2,	// (0x0003a797) bgmain_sp_fs_calendar_pane_g1

0x6c57,	// (0x0003291c) list_single_cale_mrui_pane_ParamLimits

0x6c57,	// (0x0003291c) list_single_cale_mrui_pane

0x6c79,	// (0x0003293e) list_single_cale_mrui_row_pane_ParamLimits

0x6c79,	// (0x0003293e) list_single_cale_mrui_row_pane

0x6c8f,	// (0x00032954) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6c8f,	// (0x00032954) list_single_cale_mrui_row_pane_g1

0x6cc7,	// (0x0003298c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6cc7,	// (0x0003298c) list_single_cale_mrui_row_pane_t1

0x6cd9,	// (0x0003299e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6cd9,	// (0x0003299e) list_single_cale_mrui_row_pane_t2

0x6d3f,	// (0x00032a04) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6d3f,	// (0x00032a04) list_single_cale_mrui_row_pane_t3

0x6d6e,	// (0x00032a33) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6d6e,	// (0x00032a33) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x0003ba33) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x0003ba33) list_single_cale_mrui_row_pane_t

0x6d9d,	// (0x00032a62) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6d9d,	// (0x00032a62) list_single_cmail_header_editor_pane_bg_cp01

0x6dc1,	// (0x00032a86) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6dc1,	// (0x00032a86) list_single_cmail_header_editor_pane_bg_cp02

0xcf71,	// (0x00038c36) main_radioblah_text_pane_t1_ParamLimits

0xcf71,	// (0x00038c36) main_radioblah_text_pane_t1

0x5184,	// (0x00030e49) cam6_indi_pane_cp01

0x518c,	// (0x00030e51) cam6_mode_pane_cp01

0x5194,	// (0x00030e59) cam6_pano_pane

0x519d,	// (0x00030e62) cam6_zoom_pane_cp01

0x51a5,	// (0x00030e6a) cam6_pano_image_pane

0x51ae,	// (0x00030e73) cam6_pano_pane_g1

0x48cd,	// (0x00030592) cam6_pano_pane_g2

0x51b7,	// (0x00030e7c) cam6_pano_pane_g3

0x51c0,	// (0x00030e85) cam6_pano_pane_g4

0x32f8,	// (0x0002efbd) cam6_pano_pane_g5

0x51c9,	// (0x00030e8e) cam6_pano_pane_g6

0x51d1,	// (0x00030e96) cam6_pano_pane_g7

0x51d9,	// (0x00030e9e) cam6_pano_pane_g8

0x51e2,	// (0x00030ea7) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x0003ba3c) cam6_pano_pane_g

0xe14d,	// (0x00039e12) main_browser_tag_pane

0x4fa8,	// (0x00030c6d) grid_navstr_albumart_pane

0x51eb,	// (0x00030eb0) cell_navstr_albumart_pane_ParamLimits

0x51eb,	// (0x00030eb0) cell_navstr_albumart_pane

0x14eb,	// (0x0002d1b0) cell_navstr_albumart_pane_g1

0x268c,	// (0x0002e351) cell_navstr_albumart_pane_g2

0x269c,	// (0x0002e361) cell_navstr_albumart_pane_g3

0x2694,	// (0x0002e359) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x0003ba4f) cell_navstr_albumart_pane_g

0xcf8a,	// (0x00038c4f) bt_list_pane_ParamLimits

0xcf8a,	// (0x00038c4f) bt_list_pane

0xcf9f,	// (0x00038c64) bt_list_pane_t1

0xcfae,	// (0x00038c73) bt_list_pane_t2

0x0001,

0xfd93,	// (0x0003ba58) bt_list_pane_t

0xe14d,	// (0x00039e12) main_cale_prevew_pane

0xcfbd,	// (0x00038c82) popup_cale_preview_window_ParamLimits

0xcfbd,	// (0x00038c82) popup_cale_preview_window

0xf050,	// (0x0003ad15) bg_popup_preview_window_pane_cp05_ParamLimits

0xf050,	// (0x0003ad15) bg_popup_preview_window_pane_cp05

0x5202,	// (0x00030ec7) list_cale_preview_pane_ParamLimits

0x5202,	// (0x00030ec7) list_cale_preview_pane

0xcfd2,	// (0x00038c97) list_double_cale_preview_pane_ParamLimits

0xcfd2,	// (0x00038c97) list_double_cale_preview_pane

0xcfe3,	// (0x00038ca8) list_single_cale_preview_pane_ParamLimits

0xcfe3,	// (0x00038ca8) list_single_cale_preview_pane

0xcff7,	// (0x00038cbc) list_single_cale_preview_pane_g1

0xcfff,	// (0x00038cc4) list_single_cale_preview_pane_t1_ParamLimits

0xcfff,	// (0x00038cc4) list_single_cale_preview_pane_t1

0x520e,	// (0x00030ed3) list_double_cale_preview_pane_g1

0x5216,	// (0x00030edb) list_double_cale_preview_pane_t1_ParamLimits

0x5216,	// (0x00030edb) list_double_cale_preview_pane_t1

0xd014,	// (0x00038cd9) list_double_cale_preview_pane_t2_ParamLimits

0xd014,	// (0x00038cd9) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x0003ba5d) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x0003ba5d) list_double_cale_preview_pane_t

0xe14d,	// (0x00039e12) main_ezdial_pane

0xf050,	// (0x0003ad15) main_sp_fs_email_pane_ParamLimits

0xcbed,	// (0x000388b2) cmail_ddmenu_btn01_pane_ParamLimits

0xcbed,	// (0x000388b2) cmail_ddmenu_btn01_pane

0xcc0a,	// (0x000388cf) cmail_ddmenu_btn02_pane_ParamLimits

0xcc0a,	// (0x000388cf) cmail_ddmenu_btn02_pane

0xcc28,	// (0x000388ed) cmail_ddmenu_btn03_pane_ParamLimits

0xcc28,	// (0x000388ed) cmail_ddmenu_btn03_pane

0xcccc,	// (0x00038991) main_sp_fs_ctrlbar_pane_ParamLimits

0xcce0,	// (0x000389a5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcde0,	// (0x00038aa5) list_cmail_body_pane_ParamLimits

0x14f3,	// (0x0002d1b8) bg_button_pane_cp12

0x4eed,	// (0x00030bb2) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4eed,	// (0x00030bb2) list_single_cmail_header_detail_pane_g3

0x6baa,	// (0x0003286f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6baa,	// (0x0003286f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1b,	// (0x0003b9e0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1b,	// (0x0003b9e0) list_single_cmail_header_detail_pane_t

0x6c02,	// (0x000328c7) phacti_term_pane_t2_ParamLimits

0x6c02,	// (0x000328c7) phacti_term_pane_t2

0x0001,

0xfd25,	// (0x0003b9ea) phacti_term_pane_t_ParamLimits

0xfd25,	// (0x0003b9ea) phacti_term_pane_t

0x522b,	// (0x00030ef0) aid_size_list_single_double

0xd02c,	// (0x00038cf1) popup_ezdial_listscroll_window

0xd045,	// (0x00038d0a) popup_number_entry_window_cp01

0xea78,	// (0x0003a73d) bg_popup_call_pane_cp09

0x5237,	// (0x00030efc) ezdial_list_pane

0x523f,	// (0x00030f04) scroll_pane_cp23

0x2b99,	// (0x0002e85e) bg_button_pane_cp028_ParamLimits

0x2b99,	// (0x0002e85e) bg_button_pane_cp028

0xd051,	// (0x00038d16) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd051,	// (0x00038d16) cmail_ddmenu_btn01_pane_g1

0xd061,	// (0x00038d26) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd061,	// (0x00038d26) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x0003ba62) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x0003ba62) cmail_ddmenu_btn01_pane_g

0x5247,	// (0x00030f0c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5247,	// (0x00030f0c) cmail_ddmenu_btn01_pane_t1

0x1448,	// (0x0002d10d) bg_button_pane_cp029_ParamLimits

0x1448,	// (0x0002d10d) bg_button_pane_cp029

0xd061,	// (0x00038d26) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd061,	// (0x00038d26) cmail_ddmenu_btn02_pane_g1

0xd079,	// (0x00038d3e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd079,	// (0x00038d3e) cmail_ddmenu_btn02_pane_t1

0x143a,	// (0x0002d0ff) bg_button_pane_cp031_ParamLimits

0x143a,	// (0x0002d0ff) bg_button_pane_cp031

0xd061,	// (0x00038d26) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd061,	// (0x00038d26) cmail_ddmenu_btn03_pane_g1

0xd079,	// (0x00038d3e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd079,	// (0x00038d3e) cmail_ddmenu_btn03_pane_t1

0xf03c,	// (0x0003ad01) cell_dialer2_keypad_pane_t1_ParamLimits

0x3326,	// (0x0002efeb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x3326,	// (0x0002efeb) cell_dialer2_keypad_pane_t1_copy1

0xc60a,	// (0x000382cf) ncimui_group_button_pane

0xf050,	// (0x0003ad15) main_sp_fs_calendar_pane_ParamLimits

0xcde0,	// (0x00038aa5) list_single_cmail_header_caption_pane_ParamLimits

0x410c,	// (0x0002fdd1) aid_recal_txt_sm_pane

0xe14d,	// (0x00039e12) mian_recal_day_pane

0x6c48,	// (0x0003290d) popup_sp_fs_cale_preview_window_ParamLimits

0x525c,	// (0x00030f21) list_recal_day_pane

0x6dfa,	// (0x00032abf) list_single_recal_day_pane_ParamLimits

0x6dfa,	// (0x00032abf) list_single_recal_day_pane

0x52b0,	// (0x00030f75) list_single_recal_day_pane_g1_ParamLimits

0x52b0,	// (0x00030f75) list_single_recal_day_pane_g1

0x6e0c,	// (0x00032ad1) list_single_recal_day_pane_g2_ParamLimits

0x6e0c,	// (0x00032ad1) list_single_recal_day_pane_g2

0x6e18,	// (0x00032add) list_single_recal_day_pane_g3_ParamLimits

0x6e18,	// (0x00032add) list_single_recal_day_pane_g3

0x6e24,	// (0x00032ae9) list_single_recal_day_pane_g4_ParamLimits

0x6e24,	// (0x00032ae9) list_single_recal_day_pane_g4

0x6e30,	// (0x00032af5) list_single_recal_day_pane_g5_ParamLimits

0x6e30,	// (0x00032af5) list_single_recal_day_pane_g5

0x6e44,	// (0x00032b09) list_single_recal_day_pane_g6_ParamLimits

0x6e44,	// (0x00032b09) list_single_recal_day_pane_g6

0x0004,

0xfdac,	// (0x0003ba71) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x0003ba71) list_single_recal_day_pane_g

0x6e5b,	// (0x00032b20) list_single_recal_day_pane_t1

0x6e6d,	// (0x00032b32) list_single_recal_day_pane_t2

0x0001,

0xfdb7,	// (0x0003ba7c) list_single_recal_day_pane_t

0xd09d,	// (0x00038d62) ncimui_query_button_pane_ParamLimits

0xd09d,	// (0x00038d62) ncimui_query_button_pane

0xd0ad,	// (0x00038d72) ncimui_query_button_pane_t1_ParamLimits

0xd0ad,	// (0x00038d72) ncimui_query_button_pane_t1

0x52fa,	// (0x00030fbf) ncimui_query_button_pane_t2_ParamLimits

0x52fa,	// (0x00030fbf) ncimui_query_button_pane_t2

0x0001,

0xfdbc,	// (0x0003ba81) ncimui_query_button_pane_t_ParamLimits

0xfdbc,	// (0x0003ba81) ncimui_query_button_pane_t

0xd0c0,	// (0x00038d85) query_button_pane_ParamLimits

0xd0c0,	// (0x00038d85) query_button_pane

0xe14d,	// (0x00039e12) bg_button_pane_cp0028

0x530d,	// (0x00030fd2) query_button_pane_t1

0x9a17,	// (0x000356dc) main_tport_pane_ParamLimits

0xcd2c,	// (0x000389f1) bg_popup_window_pane_cp01_ParamLimits

0xcd2c,	// (0x000389f1) bg_popup_window_pane_cp01

0xcd38,	// (0x000389fd) heading_pane_cp08_ParamLimits

0xcd38,	// (0x000389fd) heading_pane_cp08

0xcd44,	// (0x00038a09) heading_pane_cp07_ParamLimits

0xcd44,	// (0x00038a09) heading_pane_cp07

0x4e91,	// (0x00030b56) cell_tport_appsw_pane_g2

0x0002,

0xfd08,	// (0x0003b9cd) cell_tport_appsw_pane_g

0x637d,	// (0x00032042) input_candi_list_open_g1

0xee9d,	// (0x0003ab62) list_cale_time_pane_g6_ParamLimits

0xee9d,	// (0x0003ab62) list_cale_time_pane_g6

0x9f3f,	// (0x00035c04) aid_size_touch_calib_1_ParamLimits

0x9f3f,	// (0x00035c04) aid_size_touch_calib_1

0x9f4b,	// (0x00035c10) aid_size_touch_calib_2_ParamLimits

0x9f4b,	// (0x00035c10) aid_size_touch_calib_2

0x9f57,	// (0x00035c1c) aid_size_touch_calib_3_ParamLimits

0x9f57,	// (0x00035c1c) aid_size_touch_calib_3

0x9f65,	// (0x00035c2a) aid_size_touch_calib_4_ParamLimits

0x9f65,	// (0x00035c2a) aid_size_touch_calib_4

0x9f73,	// (0x00035c38) main_touch_calib_button_group_pane_ParamLimits

0x9f73,	// (0x00035c38) main_touch_calib_button_group_pane

0x9f81,	// (0x00035c46) main_touch_calib_pane_g1_ParamLimits

0x9f8d,	// (0x00035c52) main_touch_calib_pane_g2_ParamLimits

0x9f99,	// (0x00035c5e) main_touch_calib_pane_g3_ParamLimits

0x9fa5,	// (0x00035c6a) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x0003b3c8) main_touch_calib_pane_g_ParamLimits

0x9fb1,	// (0x00035c76) main_touch_calib_pane_t1_ParamLimits

0x9fc6,	// (0x00035c8b) main_touch_calib_pane_t2_ParamLimits

0x9fdb,	// (0x00035ca0) main_touch_calib_pane_t3_ParamLimits

0x9fed,	// (0x00035cb2) main_touch_calib_pane_t4_ParamLimits

0x9fff,	// (0x00035cc4) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x0003b3d1) main_touch_calib_pane_t_ParamLimits

0x30fb,	// (0x0002edc0) list_single_fp_cale_pane_g3_ParamLimits

0x30fb,	// (0x0002edc0) list_single_fp_cale_pane_g3

0xf050,	// (0x0003ad15) bg_button_pane_cp012_ParamLimits

0xf050,	// (0x0003ad15) bg_vkb2_func_pane_cp03_ParamLimits

0xb9fb,	// (0x000376c0) cell_vitu2_function_top_pane_g1_ParamLimits

0xf050,	// (0x0003ad15) bg_vkb2_func_pane_cp04_ParamLimits

0xc596,	// (0x0003825b) main_ncimui_button_group_pane_ParamLimits

0xc596,	// (0x0003825b) main_ncimui_button_group_pane

0xc5f8,	// (0x000382bd) main_ncimui_pane_t3_ParamLimits

0xc5f8,	// (0x000382bd) main_ncimui_pane_t3

0x4fbe,	// (0x00030c83) phacti_button_group_pane

0x522b,	// (0x00030ef0) aid_size_list_single_double_ParamLimits

0xd02c,	// (0x00038cf1) popup_ezdial_listscroll_window_ParamLimits

0xd045,	// (0x00038d0a) popup_number_entry_window_cp01_ParamLimits

0xd0cd,	// (0x00038d92) phacti_button_pane_ParamLimits

0xd0cd,	// (0x00038d92) phacti_button_pane

0xe14d,	// (0x00039e12) bg_button_pane_cp14

0x531b,	// (0x00030fe0) phacti_button_pane_t1

0xd0dc,	// (0x00038da1) main_touch_calib_button_pane_ParamLimits

0xd0dc,	// (0x00038da1) main_touch_calib_button_pane

0xe8b3,	// (0x0003a578) bg_button_pane_cp18_ParamLimits

0xe8b3,	// (0x0003a578) bg_button_pane_cp18

0xd0ed,	// (0x00038db2) main_touch_calib_button_pane_t1_ParamLimits

0xd0ed,	// (0x00038db2) main_touch_calib_button_pane_t1

0xd103,	// (0x00038dc8) main_touch_calib_button_pane_t2_ParamLimits

0xd103,	// (0x00038dc8) main_touch_calib_button_pane_t2

0x0001,

0xfdc1,	// (0x0003ba86) main_touch_calib_button_pane_t_ParamLimits

0xfdc1,	// (0x0003ba86) main_touch_calib_button_pane_t

0xe14d,	// (0x00039e12) cell_ncimui_button_pane

0xe14d,	// (0x00039e12) bg_button_pane_cp032

0x536e,	// (0x00031033) cell_ncimui_button_pane_t1

0xadc2,	// (0x00036a87) image3_infobar_pane_ParamLimits

0xadc2,	// (0x00036a87) image3_infobar_pane

0xc941,	// (0x00038606) fs_bigclock_status_pane_ParamLimits

0xc941,	// (0x00038606) fs_bigclock_status_pane

0xc94e,	// (0x00038613) main_fs_bigclock_clock_pane_ParamLimits

0xc94e,	// (0x00038613) main_fs_bigclock_clock_pane

0xc966,	// (0x0003862b) main_fs_bigclock_indi_pane_ParamLimits

0xc966,	// (0x0003862b) main_fs_bigclock_indi_pane

0xc986,	// (0x0003864b) main_fs_bigclock_swipe_pane_ParamLimits

0xc986,	// (0x0003864b) main_fs_bigclock_swipe_pane

0xe14d,	// (0x00039e12) main_fs_clock_dumped_data

0x49da,	// (0x0003069f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x49da,	// (0x0003069f) list_single_fs_bigclock_indicator_pane_g1

0x49f4,	// (0x000306b9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x49f4,	// (0x000306b9) list_single_fs_bigclock_indicator_pane_g2

0x4a0e,	// (0x000306d3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4a0e,	// (0x000306d3) list_single_fs_bigclock_indicator_pane_g3

0x4a28,	// (0x000306ed) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4a28,	// (0x000306ed) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x0003b8ef) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x0003b8ef) list_single_fs_bigclock_indicator_pane_g

0x4a51,	// (0x00030716) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4a51,	// (0x00030716) list_single_fs_bigclock_indicator_pane_t1

0x4a79,	// (0x0003073e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4a79,	// (0x0003073e) list_single_fs_bigclock_indicator_pane_t2

0x4aa1,	// (0x00030766) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4aa1,	// (0x00030766) list_single_fs_bigclock_indicator_pane_t3

0x4ac9,	// (0x0003078e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4ac9,	// (0x0003078e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x0003b8fa) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x0003b8fa) list_single_fs_bigclock_indicator_pane_t

0x537c,	// (0x00031041) image3_infobar_fav_pane_ParamLimits

0x537c,	// (0x00031041) image3_infobar_fav_pane

0x538c,	// (0x00031051) image3_infobar_loc_pane_ParamLimits

0x538c,	// (0x00031051) image3_infobar_loc_pane

0x53a0,	// (0x00031065) image3_infobar_time_pane_ParamLimits

0x53a0,	// (0x00031065) image3_infobar_time_pane

0xead2,	// (0x0003a797) image3_infobar_time_pane_g1

0x53b0,	// (0x00031075) image3_infobar_time_pane_t1

0xead2,	// (0x0003a797) image3_infobar_loc_pane_g1

0x53be,	// (0x00031083) image3_infobar_loc_pane_g2

0x0001,

0xfdc6,	// (0x0003ba8b) image3_infobar_loc_pane_g

0x53c6,	// (0x0003108b) image3_infobar_loc_pane_t1

0xead2,	// (0x0003a797) image3_infobar_fav_pane_g1

0x53d4,	// (0x00031099) image3_infobar_fav_pane_g2

0x0001,

0xfdcb,	// (0x0003ba90) image3_infobar_fav_pane_g

0x53dc,	// (0x000310a1) fs_bigclock_status_battery_pane

0x53e5,	// (0x000310aa) fs_bigclock_status_signal_pane

0x53ee,	// (0x000310b3) fs_bigclock_status_title_pane

0x53f7,	// (0x000310bc) fs_bigclock_status_signal_pane_g1

0x5400,	// (0x000310c5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd0,	// (0x0003ba95) fs_bigclock_status_signal_pane_g

0x5408,	// (0x000310cd) fs_bigclock_status_battery_pane_g1

0x5411,	// (0x000310d6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd5,	// (0x0003ba9a) fs_bigclock_status_battery_pane_g

0x5419,	// (0x000310de) fs_bigclock_status_title_pane_t1

0xe84b,	// (0x0003a510) main_fs_bigclock_clock_pane_g1

0xd121,	// (0x00038de6) main_fs_bigclock_clock_pane_g2

0xd12e,	// (0x00038df3) main_fs_bigclock_clock_pane_g3

0xd12e,	// (0x00038df3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdda,	// (0x0003ba9f) main_fs_bigclock_clock_pane_g

0xd13a,	// (0x00038dff) main_fs_bigclock_clock_pane_t1

0xd14c,	// (0x00038e11) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde3,	// (0x0003baa8) main_fs_bigclock_clock_pane_t

0x5427,	// (0x000310ec) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5427,	// (0x000310ec) list_single_fs_bigclock_indicator_pane

0x5438,	// (0x000310fd) list_single_fs_bigclock_pane_ParamLimits

0x5438,	// (0x000310fd) list_single_fs_bigclock_pane

0xd1aa,	// (0x00038e6f) main_fs_bigclock_indicator_pane_t1

0xd1b9,	// (0x00038e7e) list_single_fs_bigclock_pane_g1

0xd1c1,	// (0x00038e86) list_single_fs_bigclock_pane_t1

0xead2,	// (0x0003a797) main_fs_bigclock_swipe_pane_g1

0xd201,	// (0x00038ec6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x0003bab9) main_fs_bigclock_swipe_pane_g

0xd209,	// (0x00038ece) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd209,	// (0x00038ece) main_fs_bigclock_swipe_pane_t1

0x8e1f,	// (0x00034ae4) call_type_pane_ParamLimits

0xe14d,	// (0x00039e12) main_btmg_pane

0x6cbb,	// (0x00032980) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6cbb,	// (0x00032980) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd67,	// (0x0003ba2c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd67,	// (0x0003ba2c) list_single_cale_mrui_row_pane_g

0x6de9,	// (0x00032aae) list_recal_vselct_arw_lo_pane

0x528d,	// (0x00030f52) list_recal_vselct_arw_up_pane

0x6df1,	// (0x00032ab6) list_recal_vselct_pane

0xd226,	// (0x00038eeb) btmg_button_pane

0xd22e,	// (0x00038ef3) main_btmg_pane_g1

0xe14d,	// (0x00039e12) bg_button_pane_cp044

0xd236,	// (0x00038efb) btmg_button_pane_t1

0x28bf,	// (0x0002e584) aid_listscroll_gen

0xf050,	// (0x0003ad15) main_cntbar_detail_pane

0x4eb7,	// (0x00030b7c) list_cmail_folder_pane

0x4ec7,	// (0x00030b8c) sp_fs_scroll_pane_cp03_ParamLimits

0xcde0,	// (0x00038aa5) list_single_fs_dyc_pane_cp01_ParamLimits

0xcde0,	// (0x00038aa5) list_single_fs_dyc_pane_cp01

0xd244,	// (0x00038f09) aid_size_cmail_indent

0x6e82,	// (0x00032b47) list_single_dyc_row_pane_cp01

0xd267,	// (0x00038f2c) cntbar_detail_list_pane_ParamLimits

0xd267,	// (0x00038f2c) cntbar_detail_list_pane

0xd29d,	// (0x00038f62) main_cntbar_detail_cont_pane_ParamLimits

0xd29d,	// (0x00038f62) main_cntbar_detail_cont_pane

0xd2a9,	// (0x00038f6e) scroll_pane_cp032_ParamLimits

0xd2a9,	// (0x00038f6e) scroll_pane_cp032

0xd2b5,	// (0x00038f7a) cntbar_detail_list_event_pane_ParamLimits

0xd2b5,	// (0x00038f7a) cntbar_detail_list_event_pane

0xd273,	// (0x00038f38) cntbar_detail_list_shct_pane

0xd2c5,	// (0x00038f8a) aid_list_gen

0xe9ae,	// (0x0003a673) aid_scroll

0x4055,	// (0x0002fd1a) aid_size_touch_scroll_bar

0x4115,	// (0x0002fdda) aid_list_double

0xbf27,	// (0x00037bec) aid_list_single

0xbf27,	// (0x00037bec) aid_list_single_lg

0x6e8b,	// (0x00032b50) aid_list_z_g_a_sm

0x6e93,	// (0x00032b58) aid_list_z_g_d

0x6e9b,	// (0x00032b60) aid_txt_z_prm

0x6ea9,	// (0x00032b6e) aid_txt_z_prm_cp01

0x6eb7,	// (0x00032b7c) aid_txt_z_sec

0xd2ce,	// (0x00038f93) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd2ce,	// (0x00038f93) main_cntbar_detail_cont_pane_g1

0xd2db,	// (0x00038fa0) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd2db,	// (0x00038fa0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x0003babe) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x0003babe) main_cntbar_detail_cont_pane_g

0xd2e7,	// (0x00038fac) main_cntbar_detail_cont_pane_t1

0xd2f5,	// (0x00038fba) main_cntbar_detail_cont_pane_t2

0xd303,	// (0x00038fc8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x0003bac3) main_cntbar_detail_cont_pane_t

0xd311,	// (0x00038fd6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd311,	// (0x00038fd6) cell_cntbar_detail_list_shct_pane

0xd323,	// (0x00038fe8) cntbar_detail_list_shct_pane_g1

0xd32c,	// (0x00038ff1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x0003baca) cntbar_detail_list_shct_pane_g

0xd335,	// (0x00038ffa) cntbar_detail_list_event_pane_g1_ParamLimits

0xd335,	// (0x00038ffa) cntbar_detail_list_event_pane_g1

0xd341,	// (0x00039006) cntbar_detail_list_event_pane_g2_ParamLimits

0xd341,	// (0x00039006) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x0003bacf) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x0003bacf) cntbar_detail_list_event_pane_g

0xd3ad,	// (0x00039072) cntbar_detail_list_event_pane_t1_ParamLimits

0xd3ad,	// (0x00039072) cntbar_detail_list_event_pane_t1

0xd3c2,	// (0x00039087) cntbar_detail_list_event_pane_t2_ParamLimits

0xd3c2,	// (0x00039087) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x0003badc) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x0003badc) cntbar_detail_list_event_pane_t

0xead2,	// (0x0003a797) cell_cntbar_detail_list_shct_pane_g1

0x12fb,	// (0x0002cfc0) navi_pane_mv_g3

0xf050,	// (0x0003ad15) main_cntbar_detail_pane_ParamLimits

0xe14d,	// (0x00039e12) main_notif_wgt_pane

0xab2b,	// (0x000367f0) aid_tch_main_mp4_pane_g4

0xad6a,	// (0x00036a2f) popup_slider_window_cp02

0x6ddf,	// (0x00032aa4) list_recal_day_event_pane

0xd24d,	// (0x00038f12) cntbar_detail_btn_pane_ParamLimits

0xd24d,	// (0x00038f12) cntbar_detail_btn_pane

0xd259,	// (0x00038f1e) cntbar_detail_btn_pane_cp01_ParamLimits

0xd259,	// (0x00038f1e) cntbar_detail_btn_pane_cp01

0xd273,	// (0x00038f38) cntbar_detail_list_shct_pane_ParamLimits

0xd27f,	// (0x00038f44) cntbar_detail_pane_g1_ParamLimits

0xd27f,	// (0x00038f44) cntbar_detail_pane_g1

0xd28b,	// (0x00038f50) cntbar_detail_pane_t1_ParamLimits

0xd28b,	// (0x00038f50) cntbar_detail_pane_t1

0xd34d,	// (0x00039012) cntbar_detail_list_event_pane_g3_ParamLimits

0xd34d,	// (0x00039012) cntbar_detail_list_event_pane_g3

0xd365,	// (0x0003902a) cntbar_detail_list_event_pane_g4_ParamLimits

0xd365,	// (0x0003902a) cntbar_detail_list_event_pane_g4

0xd37d,	// (0x00039042) cntbar_detail_list_event_pane_g5_ParamLimits

0xd37d,	// (0x00039042) cntbar_detail_list_event_pane_g5

0xd395,	// (0x0003905a) cntbar_detail_list_event_pane_g6_ParamLimits

0xd395,	// (0x0003905a) cntbar_detail_list_event_pane_g6

0xd3d7,	// (0x0003909c) cntbar_detail_list_event_pane_t3_ParamLimits

0xd3d7,	// (0x0003909c) cntbar_detail_list_event_pane_t3

0xd3e9,	// (0x000390ae) popup_notif_wgt_window_ParamLimits

0xd3e9,	// (0x000390ae) popup_notif_wgt_window

0xd3f7,	// (0x000390bc) popup_submenu_window_cp01_ParamLimits

0xd3f7,	// (0x000390bc) popup_submenu_window_cp01

0xea78,	// (0x0003a73d) bg_popup_window_pane_cp10

0xd403,	// (0x000390c8) listscroll_notif_wgt_pane

0xd414,	// (0x000390d9) list_notif_wgt_window

0xd41d,	// (0x000390e2) scroll_pane_cp033

0xd426,	// (0x000390eb) list_notif_wgt_row_pane_ParamLimits

0xd426,	// (0x000390eb) list_notif_wgt_row_pane

0xd438,	// (0x000390fd) aid_size_list_notif_wgt_del

0xd445,	// (0x0003910a) list_notif_wgt_row_pane_g1

0xd451,	// (0x00039116) list_notif_wgt_row_pane_g2

0xd465,	// (0x0003912a) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x0003bae3) list_notif_wgt_row_pane_g

0xd472,	// (0x00039137) list_notif_wgt_row_pane_t1

0xd488,	// (0x0003914d) list_notif_wgt_row_pane_t2

0xd49a,	// (0x0003915f) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x0003baea) list_notif_wgt_row_pane_t

0x3d61,	// (0x0002fa26) list_recal_day_event_pane_g1

0xd4ac,	// (0x00039171) list_recal_day_event_pane_t1

0xe14d,	// (0x00039e12) bg_button_pane_cp045

0xd4bb,	// (0x00039180) cntbar_detail_btn_pane_t1

0x1448,	// (0x0002d10d) main_callh_pane_ParamLimits

0x1448,	// (0x0002d10d) main_callh_pane

0xe14d,	// (0x00039e12) main_coverflow0_pane

0xe14d,	// (0x00039e12) main_wgtman_pane

0xc998,	// (0x0003865d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc998,	// (0x0003865d) main_fs_bigclock_unlock_btn_pane

0x4e89,	// (0x00030b4e) bg_button_pane_cp16

0x4e99,	// (0x00030b5e) cell_tport_appsw_pane_g3

0xd4c9,	// (0x0003918e) cf0_flow_pane_ParamLimits

0xd4c9,	// (0x0003918e) cf0_flow_pane

0xd4d8,	// (0x0003919d) listscroll_cf0_pane

0xd4e1,	// (0x000391a6) main_cf0_pane_g1

0xd4f3,	// (0x000391b8) main_cf0_pane_t1_ParamLimits

0xd4f3,	// (0x000391b8) main_cf0_pane_t1

0xd505,	// (0x000391ca) main_cf0_pane_t2_ParamLimits

0xd505,	// (0x000391ca) main_cf0_pane_t2

0x0001,

0xfe31,	// (0x0003baf6) main_cf0_pane_t_ParamLimits

0xfe31,	// (0x0003baf6) main_cf0_pane_t

0xd517,	// (0x000391dc) scroll_pane_cp11

0xd520,	// (0x000391e5) cf0_flow_pane_g1

0xd528,	// (0x000391ed) cf0_flow_pane_g2

0x0001,

0xfe36,	// (0x0003bafb) cf0_flow_pane_g

0xd530,	// (0x000391f5) cf0_flow_pane_t1

0xe14d,	// (0x00039e12) main_call6_pane

0xe14d,	// (0x00039e12) main_calllock_pane

0xd53e,	// (0x00039203) call6_btn_grp_pane_ParamLimits

0xd53e,	// (0x00039203) call6_btn_grp_pane

0xd54b,	// (0x00039210) call6_pane_g1_ParamLimits

0xd54b,	// (0x00039210) call6_pane_g1

0xd558,	// (0x0003921d) popup_call6_1st_window_ParamLimits

0xd558,	// (0x0003921d) popup_call6_1st_window

0xd564,	// (0x00039229) popup_call6_2nd_window_ParamLimits

0xd564,	// (0x00039229) popup_call6_2nd_window

0xd570,	// (0x00039235) cell_call6_btn_pane_ParamLimits

0xd570,	// (0x00039235) cell_call6_btn_pane

0xea78,	// (0x0003a73d) bg_popup_call2_in_pane_cp03

0xd57f,	// (0x00039244) popup_call6_1st_window_g1

0xd587,	// (0x0003924c) popup_call6_1st_window_g2

0xd58f,	// (0x00039254) popup_call6_1st_window_g3

0x0002,

0xfe3b,	// (0x0003bb00) popup_call6_1st_window_g

0xd597,	// (0x0003925c) popup_call6_1st_window_t1

0xd5a6,	// (0x0003926b) popup_call6_1st_window_t2

0xd5b4,	// (0x00039279) popup_call6_1st_window_t3

0x0002,

0xfe42,	// (0x0003bb07) popup_call6_1st_window_t

0xea78,	// (0x0003a73d) bg_popup_call2_in_pane_cp04

0xd5c2,	// (0x00039287) popup_call6_2nd_window_g1

0xd5ca,	// (0x0003928f) popup_call6_2nd_window_g2

0xd5d2,	// (0x00039297) popup_call6_2nd_window_g3

0x0002,

0xfe49,	// (0x0003bb0e) popup_call6_2nd_window_g

0xd5da,	// (0x0003929f) popup_call6_2nd_window_t1

0xe14d,	// (0x00039e12) bg_button_pane_cp15

0xd5e9,	// (0x000392ae) cell_call6_btn_pane_g1

0xd5f2,	// (0x000392b7) cell_call6_btn_pane_t1

0xd601,	// (0x000392c6) listscroll_wgtman_pane_ParamLimits

0xd601,	// (0x000392c6) listscroll_wgtman_pane

0xd61d,	// (0x000392e2) wgtman_btn_pane_ParamLimits

0xd61d,	// (0x000392e2) wgtman_btn_pane

0x1152,	// (0x0002ce17) aid_scroll_copy1

0xd650,	// (0x00039315) list_wgtman_pane

0xd65a,	// (0x0003931f) wgtman_btn_pane_g1_ParamLimits

0xd65a,	// (0x0003931f) wgtman_btn_pane_g1

0xd682,	// (0x00039347) wgtman_btn_pane_t1_ParamLimits

0xd682,	// (0x00039347) wgtman_btn_pane_t1

0xd6b9,	// (0x0003937e) wgtman_btn_pane_t2_ParamLimits

0xd6b9,	// (0x0003937e) wgtman_btn_pane_t2

0x0001,

0xfe50,	// (0x0003bb15) wgtman_btn_pane_t_ParamLimits

0xfe50,	// (0x0003bb15) wgtman_btn_pane_t

0xd6d0,	// (0x00039395) listrow_wgtman_pane_ParamLimits

0xd6d0,	// (0x00039395) listrow_wgtman_pane

0xd6e1,	// (0x000393a6) listrow_wgtman_pane_g1

0xd6ee,	// (0x000393b3) listrow_wgtman_pane_g2

0x0001,

0xfe55,	// (0x0003bb1a) listrow_wgtman_pane_g

0x6ec5,	// (0x00032b8a) listrow_wgtman_pane_t1

0x6edd,	// (0x00032ba2) listrow_wgtman_pane_t2

0x0001,

0xfe5a,	// (0x0003bb1f) listrow_wgtman_pane_t

0x6f03,	// (0x00032bc8) wait_bar_pane_cp09

0xd706,	// (0x000393cb) main_calllock_btn_pane

0xd70e,	// (0x000393d3) main_calllock_pane_g1

0xe14d,	// (0x00039e12) bg_button_pane_cp17

0xd717,	// (0x000393dc) main_calllock_btn_pane_g1

0xd720,	// (0x000393e5) main_calllock_btn_pane_t1

0xe14d,	// (0x00039e12) main_dialer3_pane

0xe14d,	// (0x00039e12) main_fmrd2_pane

0xead2,	// (0x0003a797) main_fs_bigclock_unlock_btn_pane_g1

0xd737,	// (0x000393fc) main_fs_bigclock_unlock_btn_pane_t1

0xd745,	// (0x0003940a) area_fmrd2_info_pane_ParamLimits

0xd745,	// (0x0003940a) area_fmrd2_info_pane

0xd751,	// (0x00039416) area_fmrd2_visual_pane_ParamLimits

0xd751,	// (0x00039416) area_fmrd2_visual_pane

0xd75f,	// (0x00039424) fmrd2_indi_pane_ParamLimits

0xd75f,	// (0x00039424) fmrd2_indi_pane

0xd76c,	// (0x00039431) area_fmrd2_visual_pane_g1

0xd774,	// (0x00039439) area_fmrd2_visual_pane_t1

0xd782,	// (0x00039447) area_fmrd2_visual_pane_t2

0xd790,	// (0x00039455) area_fmrd2_visual_pane_t3

0x0002,

0xfe64,	// (0x0003bb29) area_fmrd2_visual_pane_t

0xd79e,	// (0x00039463) area_fmrd2_info_pane_g1

0xd7a6,	// (0x0003946b) area_fmrd2_info_pane_t1

0xd7b4,	// (0x00039479) area_fmrd2_info_pane_t2

0xd7c2,	// (0x00039487) area_fmrd2_info_pane_t3

0xd7d0,	// (0x00039495) area_fmrd2_info_pane_t4

0x0003,

0xfe6b,	// (0x0003bb30) area_fmrd2_info_pane_t

0xd7de,	// (0x000394a3) fmrd2_indi_pane_t1

0xd7ec,	// (0x000394b1) fmrd2_indi_pane_t2

0xd7fa,	// (0x000394bf) fmrd2_indi_pane_t3

0x0002,

0xfe74,	// (0x0003bb39) fmrd2_indi_pane_t

0x4a37,	// (0x000306fc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4a37,	// (0x000306fc) list_single_fs_bigclock_indicator_pane_g5

0x4ae5,	// (0x000307aa) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4ae5,	// (0x000307aa) list_single_fs_bigclock_indicator_pane_t5

0xceba,	// (0x00038b7f) aid_cell_bcale_month_pane_ParamLimits

0xceba,	// (0x00038b7f) aid_cell_bcale_month_pane

0xced8,	// (0x00038b9d) bcale_month_pane_ParamLimits

0xced8,	// (0x00038b9d) bcale_month_pane

0xceee,	// (0x00038bb3) bcale_preview_pane_ParamLimits

0xceee,	// (0x00038bb3) bcale_preview_pane

0xd1c1,	// (0x00038e86) list_single_fs_bigclock_pane_t1_ParamLimits

0xd1dd,	// (0x00038ea2) list_single_fs_bigclock_pane_t2_ParamLimits

0xd1dd,	// (0x00038ea2) list_single_fs_bigclock_pane_t2

0x0001,

0xfdef,	// (0x0003bab4) list_single_fs_bigclock_pane_t_ParamLimits

0xfdef,	// (0x0003bab4) list_single_fs_bigclock_pane_t

0xd72f,	// (0x000393f4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5f,	// (0x0003bb24) main_fs_bigclock_unlock_btn_pane_g

0xd808,	// (0x000394cd) aid_dia3_key_size_ParamLimits

0xd808,	// (0x000394cd) aid_dia3_key_size

0xd814,	// (0x000394d9) aid_dia3_listrow_size_ParamLimits

0xd814,	// (0x000394d9) aid_dia3_listrow_size

0xd822,	// (0x000394e7) dia3_keypad_fun_pane_ParamLimits

0xd822,	// (0x000394e7) dia3_keypad_fun_pane

0xd82e,	// (0x000394f3) dia3_keypad_num_pane_ParamLimits

0xd82e,	// (0x000394f3) dia3_keypad_num_pane

0xd83a,	// (0x000394ff) dia3_listscroll_pane_ParamLimits

0xd83a,	// (0x000394ff) dia3_listscroll_pane

0xd846,	// (0x0003950b) dia3_numentry_pane_ParamLimits

0xd846,	// (0x0003950b) dia3_numentry_pane

0xd852,	// (0x00039517) dia3_list_pane

0xd85b,	// (0x00039520) scroll_pane_cp12

0xe14d,	// (0x00039e12) bg_dia3_numentry_pane

0xd864,	// (0x00039529) dia3_numentry_pane_t1

0xd873,	// (0x00039538) cell_dia3_key_num_pane

0xd87b,	// (0x00039540) cell_dia3_key0_fun_pane_ParamLimits

0xd87b,	// (0x00039540) cell_dia3_key0_fun_pane

0xd888,	// (0x0003954d) cell_dia3_key1_fun_pane_ParamLimits

0xd888,	// (0x0003954d) cell_dia3_key1_fun_pane

0xd895,	// (0x0003955a) dia3_listrow_pane

0x4746,	// (0x0003040b) bg_dia3_numentry_pane_g1

0xe14d,	// (0x00039e12) bg_button_pane_cp21

0xd8a2,	// (0x00039567) cell_dia3_key_num_pane_t1

0xd8b0,	// (0x00039575) cell_dia3_key_num_pane_t2

0xd8bf,	// (0x00039584) cell_dia3_key_num_pane_t3

0xd8ce,	// (0x00039593) cell_dia3_key_num_pane_t4

0x0003,

0xfe7b,	// (0x0003bb40) cell_dia3_key_num_pane_t

0xe14d,	// (0x00039e12) bg_button_pane_cp19

0xd8dd,	// (0x000395a2) cell_dia3_key0_fun_pane_g1

0xe14d,	// (0x00039e12) bg_button_pane_cp20

0xd8e5,	// (0x000395aa) cell_dia3_key1_fun_pane_g1

0xd8ed,	// (0x000395b2) area_left_week_number_pane

0xd8fe,	// (0x000395c3) area_top_day_name_pane

0xd90a,	// (0x000395cf) frame_month_view_pane

0xd91b,	// (0x000395e0) grid_month_view_pane

0xd929,	// (0x000395ee) cell_top_day_name_pane_ParamLimits

0xd929,	// (0x000395ee) cell_top_day_name_pane

0xd93f,	// (0x00039604) cell_area_left_week_number_pane_ParamLimits

0xd93f,	// (0x00039604) cell_area_left_week_number_pane

0xd95e,	// (0x00039623) cell_month_view_pane_ParamLimits

0xd95e,	// (0x00039623) cell_month_view_pane

0xd984,	// (0x00039649) frm_month_g1

0xd991,	// (0x00039656) frm_month_g2

0xd9a0,	// (0x00039665) frm_month_g3

0xd9af,	// (0x00039674) frm_month_g4

0xd9be,	// (0x00039683) frm_month_g5

0xd9cd,	// (0x00039692) frm_month_g6

0xd9dc,	// (0x000396a1) frm_month_g7

0xd9eb,	// (0x000396b0) frm_month_g8

0xd9f8,	// (0x000396bd) frm_month_g9

0xda05,	// (0x000396ca) frm_month_g10

0xda12,	// (0x000396d7) frm_month_g11

0xda1f,	// (0x000396e4) frm_month_g12

0xda2c,	// (0x000396f1) frm_month_g13

0xda39,	// (0x000396fe) frm_month_g14

0xda46,	// (0x0003970b) frm_month_g15

0xda53,	// (0x00039718) frm_month_g16

0x000f,

0xfe84,	// (0x0003bb49) frm_month_g

0xda60,	// (0x00039725) cell_top_day_name_pane_t1

0xda73,	// (0x00039738) cell_area_left_week_number_pane_g1

0xda82,	// (0x00039747) cell_area_left_week_number_pane_t1

0xe83d,	// (0x0003a502) cell_month_view_pane_g1

0xda98,	// (0x0003975d) cell_month_view_pane_t1

0xe14d,	// (0x00039e12) main_fps_pane

0x4cb9,	// (0x0003097e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4cb9,	// (0x0003097e) cmail_ddmenu_btn02_pane_cp1

0x4cd5,	// (0x0003099a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4cd5,	// (0x0003099a) cmail_ddmenu_btn02_pane_cp2

0xd06d,	// (0x00038d32) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd06d,	// (0x00038d32) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x0003ba67) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x0003ba67) cmail_ddmenu_btn02_pane_g

0xd08b,	// (0x00038d50) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd08b,	// (0x00038d50) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x0003ba6c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x0003ba6c) cmail_ddmenu_btn02_pane_t

0xdaae,	// (0x00039773) fps_text_pane_ParamLimits

0xdaae,	// (0x00039773) fps_text_pane

0xdabb,	// (0x00039780) main_fps_pane_g1_ParamLimits

0xdabb,	// (0x00039780) main_fps_pane_g1

0xdac7,	// (0x0003978c) wait_bar_pane_cp010_ParamLimits

0xdac7,	// (0x0003978c) wait_bar_pane_cp010

0xdad3,	// (0x00039798) fps_text_pane_t1_ParamLimits

0xdad3,	// (0x00039798) fps_text_pane_t1

0xb08d,	// (0x00036d52) cam4_image_uncrop_pane_g1

0xb096,	// (0x00036d5b) cam4_image_uncrop_pane_g2

0xb09f,	// (0x00036d64) cam4_image_uncrop_pane_g3

0xb0a8,	// (0x00036d6d) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x0003b569) cam4_image_uncrop_pane_g

0xd895,	// (0x0003955a) dia3_listrow_pane_ParamLimits

0xe14d,	// (0x00039e12) main_phob2_pane

0xcd85,	// (0x00038a4a) cell_tport_appsw_pane_cp02_ParamLimits

0xcd85,	// (0x00038a4a) cell_tport_appsw_pane_cp02

0xcd92,	// (0x00038a57) cell_tport_appsw_pane_cp03_ParamLimits

0xcd92,	// (0x00038a57) cell_tport_appsw_pane_cp03

0xe14d,	// (0x00039e12) phob2_contact_card_pane

0xe14d,	// (0x00039e12) phob2_listscroll_pane

0xdaec,	// (0x000397b1) phob2_list_pane

0xdaf4,	// (0x000397b9) scroll_pane_cp034

0xdafc,	// (0x000397c1) phob2_cc_data_pane_ParamLimits

0xdafc,	// (0x000397c1) phob2_cc_data_pane

0xdb14,	// (0x000397d9) phob2_cc_listscroll_pane_ParamLimits

0xdb14,	// (0x000397d9) phob2_cc_listscroll_pane

0xdb2c,	// (0x000397f1) list_double_large_graphic_phob2_pane_ParamLimits

0xdb2c,	// (0x000397f1) list_double_large_graphic_phob2_pane

0xdb3e,	// (0x00039803) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdb3e,	// (0x00039803) list_double_large_graphic_phob2_pane_g1

0x6f15,	// (0x00032bda) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6f15,	// (0x00032bda) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea5,	// (0x0003bb6a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea5,	// (0x0003bb6a) list_double_large_graphic_phob2_pane_g

0x6f39,	// (0x00032bfe) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6f39,	// (0x00032bfe) list_double_large_graphic_phob2_pane_t1

0x6f4e,	// (0x00032c13) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6f4e,	// (0x00032c13) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeae,	// (0x0003bb73) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeae,	// (0x0003bb73) list_double_large_graphic_phob2_pane_t

0xe14d,	// (0x00039e12) list_highlight_pane_cp024

0xdb4b,	// (0x00039810) phob2_cc_button_pane

0xdb53,	// (0x00039818) phob2_cc_data_pane_g1_ParamLimits

0xdb53,	// (0x00039818) phob2_cc_data_pane_g1

0xdb62,	// (0x00039827) phob2_cc_data_pane_g2_ParamLimits

0xdb62,	// (0x00039827) phob2_cc_data_pane_g2

0x0001,

0xfeb3,	// (0x0003bb78) phob2_cc_data_pane_g_ParamLimits

0xfeb3,	// (0x0003bb78) phob2_cc_data_pane_g

0xdb71,	// (0x00039836) phob2_cc_data_pane_t1_ParamLimits

0xdb71,	// (0x00039836) phob2_cc_data_pane_t1

0xdb86,	// (0x0003984b) phob2_cc_data_pane_t2_ParamLimits

0xdb86,	// (0x0003984b) phob2_cc_data_pane_t2

0xdb9b,	// (0x00039860) phob2_cc_data_pane_t3_ParamLimits

0xdb9b,	// (0x00039860) phob2_cc_data_pane_t3

0x0002,

0xfeb8,	// (0x0003bb7d) phob2_cc_data_pane_t_ParamLimits

0xfeb8,	// (0x0003bb7d) phob2_cc_data_pane_t

0xdbb0,	// (0x00039875) phob2_cc_list_pane_ParamLimits

0xdbb0,	// (0x00039875) phob2_cc_list_pane

0x4663,	// (0x00030328) scroll_pane_cp035_ParamLimits

0x4663,	// (0x00030328) scroll_pane_cp035

0xf050,	// (0x0003ad15) bg_button_pane_cp033

0xdbbc,	// (0x00039881) phob2_cc_button_pane_g1

0xdbc8,	// (0x0003988d) phob2_cc_button_pane_t1

0xdbdd,	// (0x000398a2) phob2_cc_button_pane_t2

0x0001,

0xfebf,	// (0x0003bb84) phob2_cc_button_pane_t

0xdbef,	// (0x000398b4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdbef,	// (0x000398b4) list_double_large_graphic_phob2_cc_pane

0xdc35,	// (0x000398fa) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdc35,	// (0x000398fa) list_double_large_graphic_phob2_cc_pane_g1

0x6f63,	// (0x00032c28) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6f63,	// (0x00032c28) list_double_large_graphic_phob2_cc_pane_g2

0x6f72,	// (0x00032c37) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6f72,	// (0x00032c37) list_double_large_graphic_phob2_cc_pane_g3

0x6f81,	// (0x00032c46) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6f81,	// (0x00032c46) list_double_large_graphic_phob2_cc_pane_g4

0x6f92,	// (0x00032c57) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6f92,	// (0x00032c57) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec4,	// (0x0003bb89) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec4,	// (0x0003bb89) list_double_large_graphic_phob2_cc_pane_g

0x6fa1,	// (0x00032c66) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6fa1,	// (0x00032c66) list_double_large_graphic_phob2_cc_pane_t1

0x6fca,	// (0x00032c8f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6fca,	// (0x00032c8f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecf,	// (0x0003bb94) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecf,	// (0x0003bb94) list_double_large_graphic_phob2_cc_pane_t

0xdc46,	// (0x0003990b) list_highlight_pane_cp025_ParamLimits

0xdc46,	// (0x0003990b) list_highlight_pane_cp025

0xf050,	// (0x0003ad15) bg_button_pane_cp033_ParamLimits

0xdbbc,	// (0x00039881) phob2_cc_button_pane_g1_ParamLimits

0xdbc8,	// (0x0003988d) phob2_cc_button_pane_t1_ParamLimits

0xdbdd,	// (0x000398a2) phob2_cc_button_pane_t2_ParamLimits

0xfebf,	// (0x0003bb84) phob2_cc_button_pane_t_ParamLimits

0x7275,	// (0x00032f3a) popup_wgtman_window

0x4766,	// (0x0003042b) scroll_pane_cp038

0xd638,	// (0x000392fd) wgtman_btn_pane_cp_01_ParamLimits

0xd638,	// (0x000392fd) wgtman_btn_pane_cp_01

0xdc54,	// (0x00039919) wgtman_content_pane

0xdc5d,	// (0x00039922) wgtman_heading_pane

0xe14d,	// (0x00039e12) bg_heading_pane_cp02

0xdc66,	// (0x0003992b) wgtman_heading_pane_g1

0xdc6e,	// (0x00039933) wgtman_heading_pane_t1

0xdc7c,	// (0x00039941) scroll_pane_cp036

0xdc84,	// (0x00039949) wgtman_list_pane

0x5357,	// (0x0003101c) wgtman_list_pane_t1_ParamLimits

0x5357,	// (0x0003101c) wgtman_list_pane_t1

0xaff2,	// (0x00036cb7) cam4_grid_pane

0x65fe,	// (0x000322c3) bg_button_pane_cp015_ParamLimits

0xbb9e,	// (0x00037863) bg_button_pane_cp016_ParamLimits

0xbbb1,	// (0x00037876) bg_button_pane_cp017_ParamLimits

0x663c,	// (0x00032301) popup_vitu2_query_window_g3_ParamLimits

0x663c,	// (0x00032301) popup_vitu2_query_window_g3

0x66b5,	// (0x0003237a) popup_vitu2_query_window_t6_ParamLimits

0x66b5,	// (0x0003237a) popup_vitu2_query_window_t6

0x66e0,	// (0x000323a5) popup_vitu2_query_window_t7_ParamLimits

0x66e0,	// (0x000323a5) popup_vitu2_query_window_t7

0xdc8c,	// (0x00039951) cam4_grid_pane_g1

0xdc95,	// (0x0003995a) cam4_grid_pane_g2

0xdc9e,	// (0x00039963) cam4_grid_pane_g3

0xdca7,	// (0x0003996c) cam4_grid_pane_g4

0x0003,

0xfed4,	// (0x0003bb99) cam4_grid_pane_g

0x7e8c,	// (0x00033b51) aid_placing_vt_slider_lsc_ParamLimits

0x8136,	// (0x00033dfb) vidtel_button_pane_ParamLimits

0x8136,	// (0x00033dfb) vidtel_button_pane

0xe14d,	// (0x00039e12) bg_button_pane_cp034

0xdcb0,	// (0x00039975) vidtel_button_pane_g1

0xdcb8,	// (0x0003997d) vidtel_button_pane_t1

0x3cee,	// (0x0002f9b3) aid_size_vtel_slider_touch

0x4663,	// (0x00030328) scroll_pane_cp039

0x4795,	// (0x0003045a) ncim_query_button_pane_cp01_ParamLimits

0x47b4,	// (0x00030479) ncimui_query_pane_g1_ParamLimits

0xf050,	// (0x0003ad15) input_focus_pane_cp012_ParamLimits

0x47d9,	// (0x0003049e) ncim_query_entry_pane_t1_ParamLimits

0x4663,	// (0x00030328) scroll_pane_cp039_ParamLimits

0x1216,	// (0x0002cedb) navi_pane_bcale_mc_g1

0x121e,	// (0x0002cee3) navi_pane_bcale_mc_t1

0x4d09,	// (0x000309ce) main_sp_fs_email_pane_g1

0x4d15,	// (0x000309da) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x0003b964) main_sp_fs_email_pane_g

0x5177,	// (0x00030e3c) list_single_cale_mrui_row_pane_g3_ParamLimits

0x5177,	// (0x00030e3c) list_single_cale_mrui_row_pane_g3

0x6e3c,	// (0x00032b01) list_single_recal_day_pane_g5_event_pane

0x6e53,	// (0x00032b18) list_single_recal_day_pane_g7

0xdcce,	// (0x00039993) list_recal_day_event_pane_cp01

0xdcd7,	// (0x0003999c) list_recal_vselct_arw_lo_pane_cp01

0xdcdf,	// (0x000399a4) list_recal_vselct_arw_up_pane_cp01

0xdce7,	// (0x000399ac) list_recal_vselct_pane_cp01

0x3d61,	// (0x0002fa26) list_recal_day_event_pane_cp01_g1

0x6ff3,	// (0x00032cb8) list_recal_day_event_pane_cp01_t1

0x6e5b,	// (0x00032b20) list_single_recal_day_pane_t1_ParamLimits

0x6e6d,	// (0x00032b32) list_single_recal_day_pane_t2_ParamLimits

0xfdb7,	// (0x0003ba7c) list_single_recal_day_pane_t_ParamLimits

0xe7c3,	// (0x0003a488) bg_notes_pane_ParamLimits

0xe88d,	// (0x0003a552) list_notes_pane_ParamLimits

0x7468,	// (0x0003312d) scroll_pane_cp06_ParamLimits

0xe8b3,	// (0x0003a578) main_notes_pane_ParamLimits

0xf050,	// (0x0003ad15) main_welc_pane

0xdd06,	// (0x000399cb) main_welc_body_pane_ParamLimits

0xdd06,	// (0x000399cb) main_welc_body_pane

0xdd1f,	// (0x000399e4) main_welc_opti_pane_ParamLimits

0xdd1f,	// (0x000399e4) main_welc_opti_pane

0xdd74,	// (0x00039a39) main_welc_pane_t1_ParamLimits

0xdd74,	// (0x00039a39) main_welc_pane_t1

0xde78,	// (0x00039b3d) main_welc_body_row_pane_ParamLimits

0xde78,	// (0x00039b3d) main_welc_body_row_pane

0x143a,	// (0x0002d0ff) main_welc_opti_row_pane_ParamLimits

0x143a,	// (0x0002d0ff) main_welc_opti_row_pane

0xde8d,	// (0x00039b52) main_welc_opti_row_pane_g1

0xde95,	// (0x00039b5a) main_welc_opti_row_pane_t1

0xdea4,	// (0x00039b69) main_welc_body_row_pane_t1

0xd40c,	// (0x000390d1) popup_notif_wgt_heading_pane

0xd438,	// (0x000390fd) aid_size_list_notif_wgt_del_ParamLimits

0xd445,	// (0x0003910a) list_notif_wgt_row_pane_g1_ParamLimits

0xd451,	// (0x00039116) list_notif_wgt_row_pane_g2_ParamLimits

0xd465,	// (0x0003912a) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x0003bae3) list_notif_wgt_row_pane_g_ParamLimits

0xd472,	// (0x00039137) list_notif_wgt_row_pane_t1_ParamLimits

0xd488,	// (0x0003914d) list_notif_wgt_row_pane_t2_ParamLimits

0xd49a,	// (0x0003915f) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x0003baea) list_notif_wgt_row_pane_t_ParamLimits

0xd6e1,	// (0x000393a6) listrow_wgtman_pane_g1_ParamLimits

0xd6ee,	// (0x000393b3) listrow_wgtman_pane_g2_ParamLimits

0xfe55,	// (0x0003bb1a) listrow_wgtman_pane_g_ParamLimits

0x6ec5,	// (0x00032b8a) listrow_wgtman_pane_t1_ParamLimits

0x6edd,	// (0x00032ba2) listrow_wgtman_pane_t2_ParamLimits

0xfe5a,	// (0x0003bb1f) listrow_wgtman_pane_t_ParamLimits

0x6f03,	// (0x00032bc8) wait_bar_pane_cp09_ParamLimits

0xe14d,	// (0x00039e12) bg_popup_heading_pane_cp02

0xdeb3,	// (0x00039b78) popup_notif_wgt_heading_pane_g1

0xdebb,	// (0x00039b80) popup_notif_wgt_heading_pane_t1

0x28d3,	// (0x0002e598) main_vids_pane

0xe14d,	// (0x00039e12) vids_listscroll_pane

0xdec9,	// (0x00039b8e) scroll_pane_cp040

0xe14d,	// (0x00039e12) vids_list_pane

0xded2,	// (0x00039b97) vids_list_double_pane_ParamLimits

0xded2,	// (0x00039b97) vids_list_double_pane

0xdee3,	// (0x00039ba8) vids_list_double_pane_g1

0xdeec,	// (0x00039bb1) vids_list_double_pane_t1

0xdefc,	// (0x00039bc1) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x0003bbb8) vids_list_double_pane_t

0xf050,	// (0x0003ad15) main_ncimui_pane_ParamLimits

0xc5ac,	// (0x00038271) main_ncimui_pane_g1_ParamLimits

0xc5b8,	// (0x0003827d) main_ncimui_pane_g2_ParamLimits

0xc5b8,	// (0x0003827d) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x0003b865) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x0003b865) main_ncimui_pane_g

0xdd34,	// (0x000399f9) main_welc_pane_g1_ParamLimits

0xdd34,	// (0x000399f9) main_welc_pane_g1

0xdd40,	// (0x00039a05) main_welc_pane_g2_ParamLimits

0xdd40,	// (0x00039a05) main_welc_pane_g2

0x0003,

0xfedd,	// (0x0003bba2) main_welc_pane_g_ParamLimits

0xfedd,	// (0x0003bba2) main_welc_pane_g

0xe7c3,	// (0x0003a488) listscroll_mce_pane_ParamLimits

0x9138,	// (0x00034dfd) wait_bar_pane_cp10

0x28c7,	// (0x0002e58c) main_cale_day_pane_ParamLimits

0x28c7,	// (0x0002e58c) main_cale_week_pane_ParamLimits

0xe7c3,	// (0x0003a488) main_messa_pane_ParamLimits

0xa647,	// (0x0003630c) main_clock2_btn_pane_ParamLimits

0xa647,	// (0x0003630c) main_clock2_btn_pane

0x314d,	// (0x0002ee12) main_clock2_btn_pane_cp01_ParamLimits

0x314d,	// (0x0002ee12) main_clock2_btn_pane_cp01

0x5132,	// (0x00030df7) list_cale_mrui_pane_ParamLimits

0xd4eb,	// (0x000391b0) main_cf0_pane_g2

0x0001,

0xfe2c,	// (0x0003baf1) main_cf0_pane_g

0xd8ed,	// (0x000395b2) area_left_week_number_pane_ParamLimits

0xd8fe,	// (0x000395c3) area_top_day_name_pane_ParamLimits

0xd90a,	// (0x000395cf) frame_month_view_pane_ParamLimits

0xd91b,	// (0x000395e0) grid_month_view_pane_ParamLimits

0xd984,	// (0x00039649) frm_month_g1_ParamLimits

0xd991,	// (0x00039656) frm_month_g2_ParamLimits

0xd9a0,	// (0x00039665) frm_month_g3_ParamLimits

0xd9af,	// (0x00039674) frm_month_g4_ParamLimits

0xd9be,	// (0x00039683) frm_month_g5_ParamLimits

0xd9cd,	// (0x00039692) frm_month_g6_ParamLimits

0xd9dc,	// (0x000396a1) frm_month_g7_ParamLimits

0xd9eb,	// (0x000396b0) frm_month_g8_ParamLimits

0xd9f8,	// (0x000396bd) frm_month_g9_ParamLimits

0xda05,	// (0x000396ca) frm_month_g10_ParamLimits

0xda12,	// (0x000396d7) frm_month_g11_ParamLimits

0xda1f,	// (0x000396e4) frm_month_g12_ParamLimits

0xda2c,	// (0x000396f1) frm_month_g13_ParamLimits

0xda39,	// (0x000396fe) frm_month_g14_ParamLimits

0xda46,	// (0x0003970b) frm_month_g15_ParamLimits

0xda53,	// (0x00039718) frm_month_g16_ParamLimits

0xfe84,	// (0x0003bb49) frm_month_g_ParamLimits

0xda60,	// (0x00039725) cell_top_day_name_pane_t1_ParamLimits

0xda73,	// (0x00039738) cell_area_left_week_number_pane_g1_ParamLimits

0xda82,	// (0x00039747) cell_area_left_week_number_pane_t1_ParamLimits

0xe83d,	// (0x0003a502) cell_month_view_pane_g1_ParamLimits

0xda98,	// (0x0003975d) cell_month_view_pane_t1_ParamLimits

0xe7bb,	// (0x0003a480) main_clock2_btn_pane_g1

0xdf0a,	// (0x00039bcf) main_clock2_btn_pane_t1

0xf050,	// (0x0003ad15) listscroll_cmail_pane_ParamLimits

0x4d09,	// (0x000309ce) main_sp_fs_email_pane_g1_ParamLimits

0x4d15,	// (0x000309da) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x0003b964) main_sp_fs_email_pane_g_ParamLimits

0x525c,	// (0x00030f21) list_recal_day_pane_ParamLimits

0x526d,	// (0x00030f32) mian_recal_day_pane_t1

0x6a37,	// (0x000326fc) list_single_dyc_row_text_pane_t4_ParamLimits

0x6a37,	// (0x000326fc) list_single_dyc_row_text_pane_t4

0x6a6e,	// (0x00032733) list_single_dyc_row_text_pane_t5_ParamLimits

0x6a6e,	// (0x00032733) list_single_dyc_row_text_pane_t5

0x6ade,	// (0x000327a3) list_single_dyc_row_text_pane_t6_ParamLimits

0x6ade,	// (0x000327a3) list_single_dyc_row_text_pane_t6

0x8d57,	// (0x00034a1c) aid_mgn_list_cale_time_pane

0xf050,	// (0x0003ad15) main_gallery2_pane_ParamLimits

0x3161,	// (0x0002ee26) main_clock2_pane_cp01_t1

0x316f,	// (0x0002ee34) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x0003b43b) main_clock2_pane_cp01_t

0x7823,	// (0x000334e8) cale_week_scroll_pane_g16_ParamLimits

0x7823,	// (0x000334e8) cale_week_scroll_pane_g16

0xea78,	// (0x0003a73d) vorec_slider_pane

0xdcb8,	// (0x0003997d) vidtel_button_pane_t1_ParamLimits

0xe84b,	// (0x0003a510) main_fs_bigclock_clock_pane_g1_ParamLimits

0xd121,	// (0x00038de6) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd12e,	// (0x00038df3) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd12e,	// (0x00038df3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdda,	// (0x0003ba9f) main_fs_bigclock_clock_pane_g_ParamLimits

0xd13a,	// (0x00038dff) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd14c,	// (0x00038e11) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde3,	// (0x0003baa8) main_fs_bigclock_clock_pane_t_ParamLimits

0xa047,	// (0x00035d0c) main_mup3_lyrics_pane_ParamLimits

0xa047,	// (0x00035d0c) main_mup3_lyrics_pane

0xdf3c,	// (0x00039c01) main_mup3_lyrics_pane_t1_ParamLimits

0xdf3c,	// (0x00039c01) main_mup3_lyrics_pane_t1

0xab15,	// (0x000367da) aid_main_mp4_pane_t1_area

0xab1f,	// (0x000367e4) aid_main_mp4_pane_t2_area

0xac0e,	// (0x000368d3) main_mp4_pane_g7_ParamLimits

0xac0e,	// (0x000368d3) main_mp4_pane_g7

0xac1a,	// (0x000368df) main_mp4_pane_g8_ParamLimits

0xac1a,	// (0x000368df) main_mp4_pane_g8

0xaf3c,	// (0x00036c01) aid_call6_pane_g1_size

0xdc19,	// (0x000398de) list_double_large_graphic_phob2_other_pane_ParamLimits

0xdc19,	// (0x000398de) list_double_large_graphic_phob2_other_pane

0x1169,	// (0x0002ce2e) list_double_large_graphic_phob2_other_pane_g1

0xe14d,	// (0x00039e12) list_highlight_pane_cp026

0xf050,	// (0x0003ad15) main_welc_pane_ParamLimits

0xcc54,	// (0x00038919) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xcc54,	// (0x00038919) main_sp_fs_ctrlbar_pane_g3

0xcc6c,	// (0x00038931) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xcc6c,	// (0x00038931) main_sp_fs_ctrlbar_pane_g4

0xccac,	// (0x00038971) toolbar2_fixed_button_pane_cp01

0xccb6,	// (0x0003897b) toolbar2_fixed_button_pane_cp02

0xccc1,	// (0x00038986) toolbar2_fixed_button_pane_cp03

0xdcf1,	// (0x000399b6) list_welc_entry_pane_ParamLimits

0xdcf1,	// (0x000399b6) list_welc_entry_pane

0xdd4c,	// (0x00039a11) main_welc_pane_g3_ParamLimits

0xdd4c,	// (0x00039a11) main_welc_pane_g3

0xdd8c,	// (0x00039a51) main_welc_pane_t2_ParamLimits

0xdd8c,	// (0x00039a51) main_welc_pane_t2

0xdd9e,	// (0x00039a63) main_welc_pane_t3_ParamLimits

0xdd9e,	// (0x00039a63) main_welc_pane_t3

0x0005,

0xfee6,	// (0x0003bbab) main_welc_pane_t_ParamLimits

0xfee6,	// (0x0003bbab) main_welc_pane_t

0xde26,	// (0x00039aeb) welc_button_pane_ParamLimits

0xde26,	// (0x00039aeb) welc_button_pane

0xde6c,	// (0x00039b31) welc_service_logo_pane_ParamLimits

0xde6c,	// (0x00039b31) welc_service_logo_pane

0xdf5a,	// (0x00039c1f) list_single_welc_entry_pane_ParamLimits

0xdf5a,	// (0x00039c1f) list_single_welc_entry_pane

0xdf6b,	// (0x00039c30) list_single_welc_entry_pane_g1

0xdf73,	// (0x00039c38) list_single_welc_entry_pane_t1

0xdf81,	// (0x00039c46) list_single_welc_entry_pane_t2

0x0001,

0xfef8,	// (0x0003bbbd) list_single_welc_entry_pane_t

0xe14d,	// (0x00039e12) bg_button_pane_cp035

0xdf8f,	// (0x00039c54) welc_button_pane_t1

0xdf9d,	// (0x00039c62) welc_service_logo_pane_g1

0xdfa6,	// (0x00039c6b) welc_service_logo_pane_g2

0x0001,

0xfefd,	// (0x0003bbc2) welc_service_logo_pane_g

0xe14d,	// (0x00039e12) main_int_radio_pane

0xe92a,	// (0x0003a5ef) list_single_fs_dyc_pane_g1

0x6f21,	// (0x00032be6) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x6f21,	// (0x00032be6) list_double_large_graphic_phob2_pane_g3

0x6f2d,	// (0x00032bf2) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x6f2d,	// (0x00032bf2) list_double_large_graphic_phob2_pane_g4

0xdfaf,	// (0x00039c74) main_int_radio1_pane_ParamLimits

0xdfaf,	// (0x00039c74) main_int_radio1_pane

0xdfc5,	// (0x00039c8a) find_pane_cp02

0xdfce,	// (0x00039c93) input_focus_pane_cp12_ParamLimits

0xdfce,	// (0x00039c93) input_focus_pane_cp12

0xdfda,	// (0x00039c9f) input_focus_pane_cp13_ParamLimits

0xdfda,	// (0x00039c9f) input_focus_pane_cp13

0xdff2,	// (0x00039cb7) input_focus_pane_cp14_ParamLimits

0xdff2,	// (0x00039cb7) input_focus_pane_cp14

0xe00a,	// (0x00039ccf) int_radio1_listscroll_pane

0xe014,	// (0x00039cd9) main_int_radio1_pane_g1_ParamLimits

0xe014,	// (0x00039cd9) main_int_radio1_pane_g1

0xe020,	// (0x00039ce5) main_int_radio1_pane_t1_ParamLimits

0xe020,	// (0x00039ce5) main_int_radio1_pane_t1

0xe032,	// (0x00039cf7) main_int_radio1_pane_t2_ParamLimits

0xe032,	// (0x00039cf7) main_int_radio1_pane_t2

0xe044,	// (0x00039d09) main_int_radio1_pane_t3_ParamLimits

0xe044,	// (0x00039d09) main_int_radio1_pane_t3

0xe056,	// (0x00039d1b) main_int_radio1_pane_t4_ParamLimits

0xe056,	// (0x00039d1b) main_int_radio1_pane_t4

0xe06d,	// (0x00039d32) main_int_radio1_pane_t5_ParamLimits

0xe06d,	// (0x00039d32) main_int_radio1_pane_t5

0xe07f,	// (0x00039d44) main_int_radio1_pane_t6_ParamLimits

0xe07f,	// (0x00039d44) main_int_radio1_pane_t6

0xe091,	// (0x00039d56) main_int_radio1_pane_t7_ParamLimits

0xe091,	// (0x00039d56) main_int_radio1_pane_t7

0xe0a3,	// (0x00039d68) main_int_radio1_pane_t8_ParamLimits

0xe0a3,	// (0x00039d68) main_int_radio1_pane_t8

0xe0b5,	// (0x00039d7a) main_int_radio1_pane_t9_ParamLimits

0xe0b5,	// (0x00039d7a) main_int_radio1_pane_t9

0xe0c7,	// (0x00039d8c) main_int_radio1_pane_t10_ParamLimits

0xe0c7,	// (0x00039d8c) main_int_radio1_pane_t10

0xe0f6,	// (0x00039dbb) main_int_radio1_pane_t11_ParamLimits

0xe0f6,	// (0x00039dbb) main_int_radio1_pane_t11

0xe125,	// (0x00039dea) main_int_radio1_pane_t12_ParamLimits

0xe125,	// (0x00039dea) main_int_radio1_pane_t12

0x000b,

0xff02,	// (0x0003bbc7) main_int_radio1_pane_t_ParamLimits

0xff02,	// (0x0003bbc7) main_int_radio1_pane_t

0xe13c,	// (0x00039e01) int_radio_list_pane

0xdaf4,	// (0x000397b9) scroll_pane_cp037

0xd6d0,	// (0x00039395) list_double_large_graphic_int_radio_pane_ParamLimits

0xd6d0,	// (0x00039395) list_double_large_graphic_int_radio_pane

0xe144,	// (0x00039e09) list_double_large_graphic_int_radio_pane_g1

0x7001,	// (0x00032cc6) list_double_large_graphic_int_radio_pane_t1

0x700f,	// (0x00032cd4) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff1b,	// (0x0003bbe0) list_double_large_graphic_int_radio_pane_t

0xe14d,	// (0x00039e12) list_highlight_pane_cp027

0xdcfe,	// (0x000399c3) main_button_pane_4

0xdd58,	// (0x00039a1d) main_welc_pane_g4_ParamLimits

0xdd58,	// (0x00039a1d) main_welc_pane_g4

0xddb0,	// (0x00039a75) main_welc_pane_t4_ParamLimits

0xddb0,	// (0x00039a75) main_welc_pane_t4

0xddc2,	// (0x00039a87) main_welc_pane_t5_ParamLimits

0xddc2,	// (0x00039a87) main_welc_pane_t5

0xddf4,	// (0x00039ab9) main_welc_pane_t6_ParamLimits

0xddf4,	// (0x00039ab9) main_welc_pane_t6

0xde32,	// (0x00039af7) welc_button_pane_2_ParamLimits

0xde32,	// (0x00039af7) welc_button_pane_2

0xde46,	// (0x00039b0b) welc_button_pane_3_ParamLimits

0xde46,	// (0x00039b0b) welc_button_pane_3

0xdcfe,	// (0x000399c3) welc_button_pane_4

0xde5e,	// (0x00039b23) welc_button_pane_5_ParamLimits

0xde5e,	// (0x00039b23) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	0, // AknLayoutScalable_Apps::Tmain_acti_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_sso_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_logo_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_logo_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_sso_logo_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_gap_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt1_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt2_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt3_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt_Limits_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_widget_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_window_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_window_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tinput_focus_pane_cp10_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tinput_focus_pane_cp10_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t3_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t3_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t4_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Tbg_button_pane_cp22_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tbg_popup_window_pane_cp11_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tbg_popup_window_pane_cp11_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_sk_window_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_sk_window_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_pane_sig*,
	0, // AknLayoutScalable_Apps::Tscroll_pane_cp21_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tscroll_pane_cp21_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_t1_sig*,
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
