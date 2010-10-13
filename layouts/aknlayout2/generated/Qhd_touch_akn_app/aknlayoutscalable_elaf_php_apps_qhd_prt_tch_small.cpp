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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000356f3 };

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
0x583c,	// (0x0003af2f) Screen

0x5848,	// (0x0003af3b) application_window

0x58a4,	// (0x0003af97) area_bottom_pane_ParamLimits

0x58a4,	// (0x0003af97) area_bottom_pane

0x58fc,	// (0x0003afef) area_top_pane_ParamLimits

0x58fc,	// (0x0003afef) area_top_pane

0x5960,	// (0x0003b053) call_video_uplink_pane_ParamLimits

0x5960,	// (0x0003b053) call_video_uplink_pane

0x599f,	// (0x0003b092) main_pane_ParamLimits

0x599f,	// (0x0003b092) main_pane

0x30a3,	// (0x00038796) context_pane

0x8504,	// (0x0003dbf7) navi_pane

0x852a,	// (0x0003dc1d) popup_cale_events_window_ParamLimits

0x852a,	// (0x0003dc1d) popup_cale_events_window

0x30b6,	// (0x000387a9) popup_mup_playback_window

0x8542,	// (0x0003dc35) signal_pane

0x11da,	// (0x000368cd) main_browser_pane

0x13b3,	// (0x00036aa6) main_burst_pane

0x8390,	// (0x0003da83) main_calc_pane

0x3097,	// (0x0003878a) main_cale_day_pane

0x5e2a,	// (0x0003b51d) main_cale_month_pane

0x3097,	// (0x0003878a) main_cale_week_pane

0x13b3,	// (0x00036aa6) main_call_pane

0x0e5a,	// (0x0003654d) main_call_poc_pane

0x13b3,	// (0x00036aa6) main_camera_pane

0x13b3,	// (0x00036aa6) main_chi_dic_pane

0x1b62,	// (0x00037255) main_clock_pane

0x0e5a,	// (0x0003654d) main_fmradio_pane

0x13b3,	// (0x00036aa6) main_graph_messa_pane

0x0e5a,	// (0x0003654d) main_help_pane

0x11da,	// (0x000368cd) main_im_pane

0x10b5,	// (0x000367a8) main_image_pane_ParamLimits

0x10b5,	// (0x000367a8) main_image_pane

0x0e5a,	// (0x0003654d) main_location2_pane

0x13b3,	// (0x00036aa6) main_location_pane

0x10b5,	// (0x000367a8) main_messa_pane

0x0e5a,	// (0x0003654d) main_mp2_pane

0x13b3,	// (0x00036aa6) main_mp_pane

0x0e5a,	// (0x0003654d) main_msg_pane

0x0e5a,	// (0x0003654d) main_mup_eq_pane

0x0e5a,	// (0x0003654d) main_mup_pane

0x11da,	// (0x000368cd) main_notes_pane

0x0e5a,	// (0x0003654d) main_pec_pane

0x0e5a,	// (0x0003654d) main_phob_pane

0x0e5a,	// (0x0003654d) main_pinb_pane

0x0e5a,	// (0x0003654d) main_postcard_pane

0x0e5a,	// (0x0003654d) main_qdial_pane

0x13b3,	// (0x00036aa6) main_skin_pane

0x0e5a,	// (0x0003654d) main_smil2_pane

0x13b3,	// (0x00036aa6) main_smil_pane

0x13b3,	// (0x00036aa6) main_video_pane

0x13b3,	// (0x00036aa6) main_video_tele_pane

0x10b5,	// (0x000367a8) main_viewer_pane_ParamLimits

0x10b5,	// (0x000367a8) main_viewer_pane

0x13b3,	// (0x00036aa6) main_vorec_pane

0x83ce,	// (0x0003dac1) popup_blid_sat_info_window_ParamLimits

0x83ce,	// (0x0003dac1) popup_blid_sat_info_window

0x83ee,	// (0x0003dae1) popup_dyc_status_message_window_ParamLimits

0x83ee,	// (0x0003dae1) popup_dyc_status_message_window

0x83fe,	// (0x0003daf1) popup_grid_large_graphic_window_ParamLimits

0x83fe,	// (0x0003daf1) popup_grid_large_graphic_window

0x848f,	// (0x0003db82) popup_loc_request_window_ParamLimits

0x848f,	// (0x0003db82) popup_loc_request_window

0x84dc,	// (0x0003dbcf) popup_wml_address_window_ParamLimits

0x84dc,	// (0x0003dbcf) popup_wml_address_window

0x8268,	// (0x0003d95b) call_muted_g1

0x7f5b,	// (0x0003d64e) popup_call_audio_conf_window_ParamLimits

0x7f5b,	// (0x0003d64e) popup_call_audio_conf_window

0x8278,	// (0x0003d96b) popup_call_audio_first_window_ParamLimits

0x8278,	// (0x0003d96b) popup_call_audio_first_window

0x82b8,	// (0x0003d9ab) popup_call_audio_in_window_ParamLimits

0x82b8,	// (0x0003d9ab) popup_call_audio_in_window

0x82dc,	// (0x0003d9cf) popup_call_audio_out_window_ParamLimits

0x82dc,	// (0x0003d9cf) popup_call_audio_out_window

0x82fe,	// (0x0003d9f1) popup_call_audio_second_window_ParamLimits

0x82fe,	// (0x0003d9f1) popup_call_audio_second_window

0x832e,	// (0x0003da21) popup_call_audio_wait_window_ParamLimits

0x832e,	// (0x0003da21) popup_call_audio_wait_window

0x834f,	// (0x0003da42) popup_number_entry_window_ParamLimits

0x834f,	// (0x0003da42) popup_number_entry_window

0x0a47,	// (0x0003613a) bg_popup_call_pane_cp05_ParamLimits

0x0a47,	// (0x0003613a) bg_popup_call_pane_cp05

0x0a67,	// (0x0003615a) popup_number_entry_window_t1

0x0a7a,	// (0x0003616d) popup_number_entry_window_t2

0x0a8c,	// (0x0003617f) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00044733) popup_number_entry_window_t

0x0a9e,	// (0x00036191) text_title_cp2

0x0ab1,	// (0x000361a4) bg_popup_call_pane_cp_ParamLimits

0x0ab1,	// (0x000361a4) bg_popup_call_pane_cp

0x0abf,	// (0x000361b2) call_thumbnail_pane

0x0ac7,	// (0x000361ba) popup_call_audio_in_window_g1_ParamLimits

0x0ac7,	// (0x000361ba) popup_call_audio_in_window_g1

0x0ad3,	// (0x000361c6) popup_call_audio_in_window_g2_ParamLimits

0x0ad3,	// (0x000361c6) popup_call_audio_in_window_g2

0x0adf,	// (0x000361d2) popup_call_audio_in_window_g3_ParamLimits

0x0adf,	// (0x000361d2) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0004473c) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0004473c) popup_call_audio_in_window_g

0x0aeb,	// (0x000361de) popup_call_audio_in_window_t1_ParamLimits

0x0aeb,	// (0x000361de) popup_call_audio_in_window_t1

0x0b07,	// (0x000361fa) popup_call_audio_in_window_t2_ParamLimits

0x0b07,	// (0x000361fa) popup_call_audio_in_window_t2

0x0b23,	// (0x00036216) popup_call_audio_in_window_t3_ParamLimits

0x0b23,	// (0x00036216) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00044743) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00044743) popup_call_audio_in_window_t

0x0ab1,	// (0x000361a4) bg_popup_call_pane_cp01_ParamLimits

0x0ab1,	// (0x000361a4) bg_popup_call_pane_cp01

0x0abf,	// (0x000361b2) call_thumbnail_pane_cp02

0x0b36,	// (0x00036229) call_type_pane_cp022

0x0b3e,	// (0x00036231) popup_call_audio_out_window_g1_ParamLimits

0x0b3e,	// (0x00036231) popup_call_audio_out_window_g1

0x0b50,	// (0x00036243) popup_call_audio_out_window_g2_ParamLimits

0x0b50,	// (0x00036243) popup_call_audio_out_window_g2

0x0b5c,	// (0x0003624f) popup_call_audio_out_window_g3_ParamLimits

0x0b5c,	// (0x0003624f) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0004474a) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0004474a) popup_call_audio_out_window_g

0x0b6e,	// (0x00036261) popup_call_audio_out_window_t1_ParamLimits

0x0b6e,	// (0x00036261) popup_call_audio_out_window_t1

0x0b86,	// (0x00036279) popup_call_audio_out_window_t2_ParamLimits

0x0b86,	// (0x00036279) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00044751) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00044751) popup_call_audio_out_window_t

0x0b9b,	// (0x0003628e) bg_popup_call_pane_ParamLimits

0x0b9b,	// (0x0003628e) bg_popup_call_pane

0x5b03,	// (0x0003b1f6) call_thumbnail_pane_cp_ParamLimits

0x5b03,	// (0x0003b1f6) call_thumbnail_pane_cp

0x0c1f,	// (0x00036312) call_type_pane_cp01_ParamLimits

0x0c1f,	// (0x00036312) call_type_pane_cp01

0x0c63,	// (0x00036356) popup_call_audio_first_window_g1_ParamLimits

0x0c63,	// (0x00036356) popup_call_audio_first_window_g1

0x0caf,	// (0x000363a2) popup_call_audio_first_window_g2_ParamLimits

0x0caf,	// (0x000363a2) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00044756) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00044756) popup_call_audio_first_window_g

0x0cf3,	// (0x000363e6) popup_call_audio_first_window_t1_ParamLimits

0x0cf3,	// (0x000363e6) popup_call_audio_first_window_t1

0x0d9f,	// (0x00036492) popup_call_audio_first_window_t4_ParamLimits

0x0d9f,	// (0x00036492) popup_call_audio_first_window_t4

0x0e2b,	// (0x0003651e) popup_call_audio_first_window_t5_ParamLimits

0x0e2b,	// (0x0003651e) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0004475b) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0004475b) popup_call_audio_first_window_t

0x0e5a,	// (0x0003654d) bg_popup_call_pane_cp02

0x0e64,	// (0x00036557) call_type_pane_cp023

0x0e6c,	// (0x0003655f) popup_call_audio_wait_window_g1

0x0e74,	// (0x00036567) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00044762) popup_call_audio_wait_window_g

0x0e7c,	// (0x0003656f) popup_call_audio_wait_window_t3

0x0e8a,	// (0x0003657d) bg_popup_call_pane_cp03_ParamLimits

0x0e8a,	// (0x0003657d) bg_popup_call_pane_cp03

0x0eea,	// (0x000365dd) call_thumbnail_pane_cp011_ParamLimits

0x0eea,	// (0x000365dd) call_thumbnail_pane_cp011

0x0ef6,	// (0x000365e9) call_type_pane_cp034_ParamLimits

0x0ef6,	// (0x000365e9) call_type_pane_cp034

0x0f32,	// (0x00036625) popup_call_audio_second_window_g1_ParamLimits

0x0f32,	// (0x00036625) popup_call_audio_second_window_g1

0x0f6e,	// (0x00036661) popup_call_audio_second_window_g2_ParamLimits

0x0f6e,	// (0x00036661) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00044767) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00044767) popup_call_audio_second_window_g

0x0faa,	// (0x0003669d) popup_call_audio_second_window_t1_ParamLimits

0x0faa,	// (0x0003669d) popup_call_audio_second_window_t1

0x102b,	// (0x0003671e) popup_call_audio_second_window_t2_ParamLimits

0x102b,	// (0x0003671e) popup_call_audio_second_window_t2

0x1061,	// (0x00036754) popup_call_audio_second_window_t3_ParamLimits

0x1061,	// (0x00036754) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0004476c) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0004476c) popup_call_audio_second_window_t

0x0e5a,	// (0x0003654d) bg_popup_call_pane_cp04

0x1097,	// (0x0003678a) list_conf_pane

0x109f,	// (0x00036792) popup_call_audio_conf_window_t1

0x10ad,	// (0x000367a0) call_thumbnail_pane_g1

0x10b5,	// (0x000367a8) bg_pinb_pane_ParamLimits

0x10b5,	// (0x000367a8) bg_pinb_pane

0x10c3,	// (0x000367b6) find_pinb_pane

0x10b5,	// (0x000367a8) listscroll_pinb_pane_ParamLimits

0x10b5,	// (0x000367a8) listscroll_pinb_pane

0x10cd,	// (0x000367c0) pinb_bg_pane_g1

0x10cd,	// (0x000367c0) pinb_bg_pane_g2

0x10cd,	// (0x000367c0) pinb_bg_pane_g3

0x10cd,	// (0x000367c0) pinb_bg_pane_g4

0x10cd,	// (0x000367c0) pinb_bg_pane_g5

0x10cd,	// (0x000367c0) pinb_bg_pane_g6

0x10cd,	// (0x000367c0) pinb_bg_pane_g7

0x10cd,	// (0x000367c0) pinb_bg_pane_g8

0x10cd,	// (0x000367c0) pinb_bg_pane_g9

0x10cd,	// (0x000367c0) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00044773) pinb_bg_pane_g

0x0a3d,	// (0x00036130) grid_pinb_pane

0x0a3d,	// (0x00036130) list_pinb_pane

0x10d7,	// (0x000367ca) scroll_pane_cp01_ParamLimits

0x10d7,	// (0x000367ca) scroll_pane_cp01

0x10e5,	// (0x000367d8) find_pinb_pane_g1_ParamLimits

0x10e5,	// (0x000367d8) find_pinb_pane_g1

0x10fd,	// (0x000367f0) find_pinb_pane_t1

0x110f,	// (0x00036802) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0004478d) find_pinb_pane_t

0x1124,	// (0x00036817) input_focus_pane_cp01_ParamLimits

0x1124,	// (0x00036817) input_focus_pane_cp01

0x1130,	// (0x00036823) cell_pinb_pane_ParamLimits

0x1130,	// (0x00036823) cell_pinb_pane

0x113e,	// (0x00036831) cell_pinb_pane_g1_ParamLimits

0x113e,	// (0x00036831) cell_pinb_pane_g1

0x114c,	// (0x0003683f) cell_pinb_pane_g2_ParamLimits

0x114c,	// (0x0003683f) cell_pinb_pane_g2

0x114c,	// (0x0003683f) cell_pinb_pane_g3_ParamLimits

0x114c,	// (0x0003683f) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00044792) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00044792) cell_pinb_pane_g

0x0e5a,	// (0x0003654d) grid_highlight_pane_cp01

0x1130,	// (0x00036823) list_pinb_item_pane_ParamLimits

0x1130,	// (0x00036823) list_pinb_item_pane

0x0a3d,	// (0x00036130) list_highlight_pane_cp02

0x115a,	// (0x0003684d) list_pinb_item_pane_g1_ParamLimits

0x115a,	// (0x0003684d) list_pinb_item_pane_g1

0x114c,	// (0x0003683f) list_pinb_item_pane_g2_ParamLimits

0x114c,	// (0x0003683f) list_pinb_item_pane_g2

0x113e,	// (0x00036831) list_pinb_item_pane_g3_ParamLimits

0x113e,	// (0x00036831) list_pinb_item_pane_g3

0x114c,	// (0x0003683f) list_pinb_item_pane_g4_ParamLimits

0x114c,	// (0x0003683f) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00044799) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00044799) list_pinb_item_pane_g

0x1168,	// (0x0003685b) list_pinb_item_pane_t1_ParamLimits

0x1168,	// (0x0003685b) list_pinb_item_pane_t1

0x5b41,	// (0x0003b234) calc_display_pane

0x5b5f,	// (0x0003b252) calc_paper_pane

0x5b7b,	// (0x0003b26e) grid_calc_pane

0x0a3d,	// (0x00036130) bg_list_pane_cp01

0x117c,	// (0x0003686f) clock_g1

0x117c,	// (0x0003686f) clock_g2

0x0001,

0xf0af,	// (0x000447a2) clock_g

0x1186,	// (0x00036879) clock_t1_ParamLimits

0x1186,	// (0x00036879) clock_t1

0x119a,	// (0x0003688d) clock_t2_ParamLimits

0x119a,	// (0x0003688d) clock_t2

0x119a,	// (0x0003688d) clock_t3_ParamLimits

0x119a,	// (0x0003688d) clock_t3

0x119a,	// (0x0003688d) clock_t4_ParamLimits

0x119a,	// (0x0003688d) clock_t4

0x1186,	// (0x00036879) clock_t5_ParamLimits

0x1186,	// (0x00036879) clock_t5

0x119a,	// (0x0003688d) clock_t6_ParamLimits

0x119a,	// (0x0003688d) clock_t6

0x119a,	// (0x0003688d) clock_t7_ParamLimits

0x119a,	// (0x0003688d) clock_t7

0x119a,	// (0x0003688d) clock_t8_ParamLimits

0x119a,	// (0x0003688d) clock_t8

0x119a,	// (0x0003688d) clock_t9_ParamLimits

0x119a,	// (0x0003688d) clock_t9

0x0008,

0xf0b4,	// (0x000447a7) clock_t_ParamLimits

0xf0b4,	// (0x000447a7) clock_t

0x0a3d,	// (0x00036130) popup_clock_analogue_window_cp02

0x0a3d,	// (0x00036130) popup_clock_digital_window_cp01

0x0e5a,	// (0x0003654d) listscroll_help_pane

0x0e5a,	// (0x0003654d) phob_pre_status_pane

0x11ae,	// (0x000368a1) grid_qdial_pane

0x10b5,	// (0x000367a8) listscroll_mce_pane

0x10b5,	// (0x000367a8) bg_notes_pane

0x11b8,	// (0x000368ab) list_notes_pane

0x5ba7,	// (0x0003b29a) scroll_pane_cp06

0x11c6,	// (0x000368b9) bg_calc_paper_pane

0x5bb6,	// (0x0003b2a9) list_calc_pane

0x11da,	// (0x000368cd) bg_calc_display_pane

0x5bd0,	// (0x0003b2c3) calc_display_pane_t1

0x5be5,	// (0x0003b2d8) calc_display_pane_t2

0x5bfa,	// (0x0003b2ed) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x000447ba) calc_display_pane_t

0x5c0c,	// (0x0003b2ff) cell_calc_pane_ParamLimits

0x5c0c,	// (0x0003b2ff) cell_calc_pane

0x11e6,	// (0x000368d9) bg_calc_paper_pane_g1

0x11fe,	// (0x000368f1) bg_calc_paper_pane_g2

0x11f2,	// (0x000368e5) bg_calc_paper_pane_g3

0x1216,	// (0x00036909) bg_calc_paper_pane_g4

0x120a,	// (0x000368fd) bg_calc_paper_pane_g5

0x5c39,	// (0x0003b32c) bg_calc_paper_pane_g6

0x5c4a,	// (0x0003b33d) bg_calc_paper_pane_g7

0x5c5b,	// (0x0003b34e) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000447c1) bg_calc_paper_pane_g

0x5c6c,	// (0x0003b35f) calc_bg_paper_pane_g9

0x5c7d,	// (0x0003b370) list_calc_item_pane_ParamLimits

0x5c7d,	// (0x0003b370) list_calc_item_pane

0x1222,	// (0x00036915) list_calc_item_pane_g1

0x5ca9,	// (0x0003b39c) list_calc_item_pane_t1_ParamLimits

0x5ca9,	// (0x0003b39c) list_calc_item_pane_t1

0x5cbb,	// (0x0003b3ae) list_calc_item_pane_t2_ParamLimits

0x5cbb,	// (0x0003b3ae) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x000447d2) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x000447d2) list_calc_item_pane_t

0x10cd,	// (0x000367c0) cell_calc_pane_g1

0x122f,	// (0x00036922) grid_highlight_pane_cp02

0x5ceb,	// (0x0003b3de) bg_calc_display_pane_g1

0x5cf4,	// (0x0003b3e7) bg_calc_display_pane_g2

0x5cfe,	// (0x0003b3f1) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x000447dc) bg_calc_display_pane_g

0x5d07,	// (0x0003b3fa) cell_qdial_pane_ParamLimits

0x5d07,	// (0x0003b3fa) cell_qdial_pane

0x5d1b,	// (0x0003b40e) cell_qdial_pane_g1_ParamLimits

0x5d1b,	// (0x0003b40e) cell_qdial_pane_g1

0x5d28,	// (0x0003b41b) cell_qdial_pane_g2_ParamLimits

0x5d28,	// (0x0003b41b) cell_qdial_pane_g2

0x125a,	// (0x0003694d) cell_qdial_pane_g3_ParamLimits

0x125a,	// (0x0003694d) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x000447e3) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x000447e3) cell_qdial_pane_g

0x5d46,	// (0x0003b439) cell_qdial_pane_t1_ParamLimits

0x5d46,	// (0x0003b439) cell_qdial_pane_t1

0x5d5e,	// (0x0003b451) cell_qdial_pane_t2_ParamLimits

0x5d5e,	// (0x0003b451) cell_qdial_pane_t2

0x5d71,	// (0x0003b464) cell_qdial_pane_t3_ParamLimits

0x5d71,	// (0x0003b464) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x000447ec) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x000447ec) cell_qdial_pane_t

0x0e5a,	// (0x0003654d) grid_highlight_pane_cp04

0x1266,	// (0x00036959) thumbnail_qdial_pane_ParamLimits

0x1266,	// (0x00036959) thumbnail_qdial_pane

0x12c2,	// (0x000369b5) list_help_pane

0x12cb,	// (0x000369be) scroll_pane_cp02

0x5d84,	// (0x0003b477) help_list_pane_t1_ParamLimits

0x5d84,	// (0x0003b477) help_list_pane_t1

0x5dba,	// (0x0003b4ad) bg_notes_pane_g2

0x5dc2,	// (0x0003b4b5) bg_notes_pane_g3

0x5dca,	// (0x0003b4bd) notes_bg_pane_g1

0x5dd2,	// (0x0003b4c5) notes_bg_pane_g4

0x5dda,	// (0x0003b4cd) notes_bg_pane_g5

0x5de2,	// (0x0003b4d5) notes_bg_pane_g6

0x5dea,	// (0x0003b4dd) notes_bg_pane_g7

0x5df2,	// (0x0003b4e5) notes_bg_pane_g8

0x5dfa,	// (0x0003b4ed) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0004480a) notes_bg_pane_g

0x5e02,	// (0x0003b4f5) list_notes_text_pane_ParamLimits

0x5e02,	// (0x0003b4f5) list_notes_text_pane

0x12f2,	// (0x000369e5) list_notes_text_pane_g1

0x4a83,	// (0x0003a176) list_notes_text_pane_t1

0x5e2a,	// (0x0003b51d) listscroll_cale_week_pane

0x5e4f,	// (0x0003b542) bg_cale_heading_pane

0x1315,	// (0x00036a08) bg_cale_pane_cp01

0x5e6f,	// (0x0003b562) cale_week_corner_pane

0x5e89,	// (0x0003b57c) cale_week_day_heading_pane

0x5ea9,	// (0x0003b59c) cale_week_scroll_pane_g1

0x5ec4,	// (0x0003b5b7) cale_week_scroll_pane_g2

0x5ed7,	// (0x0003b5ca) cale_week_scroll_pane_g3

0x5eea,	// (0x0003b5dd) cale_week_scroll_pane_g4

0x5efd,	// (0x0003b5f0) cale_week_scroll_pane_g5

0x5f10,	// (0x0003b603) cale_week_scroll_pane_g6

0x5f23,	// (0x0003b616) cale_week_scroll_pane_g7

0x5f38,	// (0x0003b62b) cale_week_scroll_pane_g8

0x5f4d,	// (0x0003b640) cale_week_scroll_pane_g9

0x5f60,	// (0x0003b653) cale_week_scroll_pane_g10

0x5f73,	// (0x0003b666) cale_week_scroll_pane_g11

0x5f86,	// (0x0003b679) cale_week_scroll_pane_g12

0x5f9d,	// (0x0003b690) cale_week_scroll_pane_g13

0x5fb8,	// (0x0003b6ab) cale_week_scroll_pane_g14

0x5fd3,	// (0x0003b6c6) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00044819) cale_week_scroll_pane_g

0x6003,	// (0x0003b6f6) cale_week_time_pane

0x6018,	// (0x0003b70b) grid_cale_week_pane

0x1344,	// (0x00036a37) scroll_pane_cp08

0x6037,	// (0x0003b72a) cell_cale_week_pane_ParamLimits

0x6037,	// (0x0003b72a) cell_cale_week_pane

0x6099,	// (0x0003b78c) cale_week_day_heading_pane_t1

0x60b4,	// (0x0003b7a7) cale_week_day_heading_pane_t2

0x60cf,	// (0x0003b7c2) cale_week_day_heading_pane_t3

0x60ea,	// (0x0003b7dd) cale_week_day_heading_pane_t4

0x6105,	// (0x0003b7f8) cale_week_day_heading_pane_t5

0x6120,	// (0x0003b813) cale_week_day_heading_pane_t6

0x613b,	// (0x0003b82e) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0004483a) cale_week_day_heading_pane_t

0x1361,	// (0x00036a54) bg_cale_side_pane

0x6156,	// (0x0003b849) cale_week_time_pane_t1

0x6170,	// (0x0003b863) cale_week_time_pane_t2

0x618a,	// (0x0003b87d) cale_week_time_pane_t3

0x61a4,	// (0x0003b897) cale_week_time_pane_t4

0x61be,	// (0x0003b8b1) cale_week_time_pane_t5

0x61d8,	// (0x0003b8cb) cale_week_time_pane_t6

0x61f6,	// (0x0003b8e9) cale_week_time_pane_t7

0x6218,	// (0x0003b90b) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00044849) cale_week_time_pane_t

0x623c,	// (0x0003b92f) cell_cale_week_pane_g2

0x6260,	// (0x0003b953) cell_cale_week_pane_g3_ParamLimits

0x6260,	// (0x0003b953) cell_cale_week_pane_g3

0x136f,	// (0x00036a62) grid_highlight_pane_cp07

0x1377,	// (0x00036a6a) listscroll_gms_pane

0x1381,	// (0x00036a74) grid_gms_pane

0x138a,	// (0x00036a7d) listscroll_gms_pane_g1

0x1392,	// (0x00036a85) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0004485a) listscroll_gms_pane_g

0x6278,	// (0x0003b96b) scroll_pane_cp010

0x6283,	// (0x0003b976) cell_gms_pane_ParamLimits

0x6283,	// (0x0003b976) cell_gms_pane

0x6296,	// (0x0003b989) cell_gms_pane_g1

0x139a,	// (0x00036a8d) cell_gms_pane_g2

0x12f2,	// (0x000369e5) cell_gms_pane_g3

0x13a2,	// (0x00036a95) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0004485f) cell_gms_pane_g

0x13ab,	// (0x00036a9e) grid_highlight_pane_cp09

0x81ec,	// (0x0003d8df) phob_pre_status_pane_g1

0x81f4,	// (0x0003d8e7) phob_pre_status_pane_g2

0x81fc,	// (0x0003d8ef) phob_pre_status_pane_g3

0x8204,	// (0x0003d8f7) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x00044c18) phob_pre_status_pane_g

0x8214,	// (0x0003d907) phob_pre_status_pane_t1

0x8224,	// (0x0003d917) phob_pre_status_pane_t2

0x8234,	// (0x0003d927) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x00044c23) phob_pre_status_pane_t

0x13b3,	// (0x00036aa6) bg_list_pane_cp05

0x62a6,	// (0x0003b999) grid_vorec_pane

0x62b0,	// (0x0003b9a3) vorec_t1

0x62be,	// (0x0003b9b1) vorec_t2

0x62cc,	// (0x0003b9bf) vorec_t3

0x62da,	// (0x0003b9cd) vorec_t4

0xc8ab,	// (0x00041f9e) vorec_t5

0xc8b9,	// (0x00041fac) vorec_t6

0x0004,

0xf175,	// (0x00044868) vorec_t

0xc8c7,	// (0x00041fba) wait_bar_pane_cp01

0x62f6,	// (0x0003b9e9) cell_vorec_pane_ParamLimits

0x62f6,	// (0x0003b9e9) cell_vorec_pane

0x6309,	// (0x0003b9fc) cell_vorec_pane_g1

0x0e5a,	// (0x0003654d) grid_highlight_pane_cp05

0x1130,	// (0x00036823) cams_zoom_pane

0x1130,	// (0x00036823) image_vga_pane

0x114c,	// (0x0003683f) main_camera_pane_g1

0x114c,	// (0x0003683f) main_camera_pane_g2

0x114c,	// (0x0003683f) main_camera_pane_g3

0x114c,	// (0x0003683f) main_camera_pane_g4

0x114c,	// (0x0003683f) main_camera_pane_g5

0x114c,	// (0x0003683f) main_camera_pane_g6

0x114c,	// (0x0003683f) main_camera_pane_g7

0x0007,

0xf180,	// (0x00044873) main_camera_pane_g

0x119a,	// (0x0003688d) main_camera_pane_t1

0x119a,	// (0x0003688d) main_camera_pane_t2

0x0001,

0xf191,	// (0x00044884) main_camera_pane_t

0x6313,	// (0x0003ba06) cams_zoom_pane_cp_ParamLimits

0x6313,	// (0x0003ba06) cams_zoom_pane_cp

0x6341,	// (0x0003ba34) image_cif_pane_ParamLimits

0x6341,	// (0x0003ba34) image_cif_pane

0x0a3d,	// (0x00036130) image_subqcif_pane

0x634f,	// (0x0003ba42) main_video_pane_g1_ParamLimits

0x634f,	// (0x0003ba42) main_video_pane_g1

0x6377,	// (0x0003ba6a) main_video_pane_g2_ParamLimits

0x6377,	// (0x0003ba6a) main_video_pane_g2

0x63aa,	// (0x0003ba9d) main_video_pane_g3_ParamLimits

0x63aa,	// (0x0003ba9d) main_video_pane_g3

0x63aa,	// (0x0003ba9d) main_video_pane_g4_ParamLimits

0x63aa,	// (0x0003ba9d) main_video_pane_g4

0x63d8,	// (0x0003bacb) main_video_pane_g5_ParamLimits

0x63d8,	// (0x0003bacb) main_video_pane_g5

0x13bb,	// (0x00036aae) main_video_pane_g6_ParamLimits

0x13bb,	// (0x00036aae) main_video_pane_g6

0x0006,

0xf196,	// (0x00044889) main_video_pane_g_ParamLimits

0xf196,	// (0x00044889) main_video_pane_g

0x63f4,	// (0x0003bae7) main_video_pane_t1_ParamLimits

0x63f4,	// (0x0003bae7) main_video_pane_t1

0x117c,	// (0x0003686f) cams_zoom_pane_g1

0x117c,	// (0x0003686f) cams_zoom_pane_g2

0x117c,	// (0x0003686f) cams_zoom_pane_g3

0x117c,	// (0x0003686f) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00044898) cams_zoom_pane_g

0x1130,	// (0x00036823) grid_cams_pane

0x1130,	// (0x00036823) linegrid_cams_pane

0x642e,	// (0x0003bb21) cell_cams_pane_ParamLimits

0x642e,	// (0x0003bb21) cell_cams_pane

0x0a3d,	// (0x00036130) cams_burst_image_pane

0x117c,	// (0x0003686f) cell_cams_pane_g1

0x0a3d,	// (0x00036130) grid_highlight_pane_cp03

0x10cd,	// (0x000367c0) mp_bg_pane_g1

0x0a3d,	// (0x00036130) bg_list_pane_cp03

0x0a3d,	// (0x00036130) bg_mp_pane

0x0a3d,	// (0x00036130) grid_mp_pane

0x117c,	// (0x0003686f) media_player_g1

0x18f6,	// (0x00036fe9) media_player_t1

0x18f6,	// (0x00036fe9) media_player_t2

0x18f6,	// (0x00036fe9) media_player_t3

0x18f6,	// (0x00036fe9) media_player_t4

0x18f6,	// (0x00036fe9) media_player_t5

0x18f6,	// (0x00036fe9) media_player_t6

0x18f6,	// (0x00036fe9) media_player_t7

0x0006,

0xf50f,	// (0x00044c02) media_player_t

0x0a3d,	// (0x00036130) wait_bar_pane_cp02

0xf4f4,	// (0x00044be7) main_usb_pane_t

0x1b62,	// (0x00037255) cell_mp_pane

0x10cd,	// (0x000367c0) cell_mp_pane_g1

0x0e5a,	// (0x0003654d) grid_highlight_pane_cp06

0x13d5,	// (0x00036ac8) grid_skin_colour_pane

0x13dd,	// (0x00036ad0) list_highlight_pane_cp03

0x6443,	// (0x0003bb36) skin_g1

0x13e5,	// (0x00036ad8) skin_t1

0x13f4,	// (0x00036ae7) skin_t2

0x0001,

0xf1d3,	// (0x000448c6) skin_t

0x644d,	// (0x0003bb40) cell_skin_colour_pane_ParamLimits

0x644d,	// (0x0003bb40) cell_skin_colour_pane

0x1402,	// (0x00036af5) cell_skin_colour_pane_g1

0x64d1,	// (0x0003bbc4) call_video_g1_ParamLimits

0x64d1,	// (0x0003bbc4) call_video_g1

0x64e1,	// (0x0003bbd4) call_video_g2_ParamLimits

0x64e1,	// (0x0003bbd4) call_video_g2

0x0001,

0xf1d8,	// (0x000448cb) call_video_g_ParamLimits

0xf1d8,	// (0x000448cb) call_video_g

0x653b,	// (0x0003bc2e) call_video_uplink_pane_cp1_ParamLimits

0x653b,	// (0x0003bc2e) call_video_uplink_pane_cp1

0x1414,	// (0x00036b07) call_video_uplink_pane_cp2

0x6607,	// (0x0003bcfa) video_down_crop_pane_ParamLimits

0x6607,	// (0x0003bcfa) video_down_crop_pane

0x6705,	// (0x0003bdf8) video_down_pane_ParamLimits

0x6705,	// (0x0003bdf8) video_down_pane

0x141c,	// (0x00036b0f) video_down_subqcif_pane_ParamLimits

0x141c,	// (0x00036b0f) video_down_subqcif_pane

0x1434,	// (0x00036b27) video_down_subqcif_pane_cp_ParamLimits

0x1434,	// (0x00036b27) video_down_subqcif_pane_cp

0x145a,	// (0x00036b4d) im_reading_pane_ParamLimits

0x145a,	// (0x00036b4d) im_reading_pane

0x6825,	// (0x0003bf18) im_writing_pane_ParamLimits

0x6825,	// (0x0003bf18) im_writing_pane

0x6843,	// (0x0003bf36) im_reading_pane_t1

0x1474,	// (0x00036b67) list_im_pane

0x1485,	// (0x00036b78) scroll_pane_cp07

0x6897,	// (0x0003bf8a) im_writing_pane_t1_ParamLimits

0x6897,	// (0x0003bf8a) im_writing_pane_t1

0x149e,	// (0x00036b91) im_writing_pane_t2_ParamLimits

0x149e,	// (0x00036b91) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x000448d5) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x000448d5) im_writing_pane_t

0x0e5a,	// (0x0003654d) input_focus_pane_cp04

0x0e5a,	// (0x0003654d) input_focus_pane_cp05

0x68ac,	// (0x0003bf9f) list_im_single_pane_ParamLimits

0x68ac,	// (0x0003bf9f) list_im_single_pane

0x68d0,	// (0x0003bfc3) list_single_im_pane_t1

0x13b3,	// (0x00036aa6) blid_accuracy_pane

0x13b3,	// (0x00036aa6) blid_compass_pane

0x304f,	// (0x00038742) main_location_t1

0x304f,	// (0x00038742) main_location_t2

0x304f,	// (0x00038742) main_location_t3

0x0002,

0xf51e,	// (0x00044c11) main_location_t

0x0e5a,	// (0x0003654d) aid_levels_location

0x10cd,	// (0x000367c0) blid_accuracy_pane_g1

0x10cd,	// (0x000367c0) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00044929) blid_accuracy_pane_g

0x14e6,	// (0x00036bd9) wml_content_pane

0x1524,	// (0x00036c17) wml_button_pane_ParamLimits

0x1524,	// (0x00036c17) wml_button_pane

0x68df,	// (0x0003bfd2) wml_list_single_large_pane_ParamLimits

0x68df,	// (0x0003bfd2) wml_list_single_large_pane

0x6909,	// (0x0003bffc) wml_list_single_medium_pane_ParamLimits

0x6909,	// (0x0003bffc) wml_list_single_medium_pane

0x693a,	// (0x0003c02d) wml_list_single_small_pane_ParamLimits

0x693a,	// (0x0003c02d) wml_list_single_small_pane

0x1538,	// (0x00036c2b) wml_selection_box_pane_ParamLimits

0x1538,	// (0x00036c2b) wml_selection_box_pane

0x154b,	// (0x00036c3e) wml_list_single_pane_t1

0x155a,	// (0x00036c4d) wml_list_single_medium_pane_t1

0x1569,	// (0x00036c5c) wml_list_single_large_pane_t1

0x1578,	// (0x00036c6b) input_focus_pane_cp02_ParamLimits

0x1578,	// (0x00036c6b) input_focus_pane_cp02

0x158b,	// (0x00036c7e) wml_selection_box_pane_g1

0x1594,	// (0x00036c87) wml_selection_box_pane_t1_ParamLimits

0x1594,	// (0x00036c87) wml_selection_box_pane_t1

0x10b5,	// (0x000367a8) bg_wml_button_pane_ParamLimits

0x10b5,	// (0x000367a8) bg_wml_button_pane

0x15ac,	// (0x00036c9f) wml_button_pane_g1

0x15b4,	// (0x00036ca7) wml_button_pane_t1

0x15ac,	// (0x00036c9f) wml_button_bg_pane_g1

0x15c4,	// (0x00036cb7) wml_button_bg_pane_g2

0x15cc,	// (0x00036cbf) wml_button_bg_pane_g3

0x15d4,	// (0x00036cc7) wml_button_bg_pane_g4

0x15dc,	// (0x00036ccf) wml_button_bg_pane_g5

0x15e4,	// (0x00036cd7) wml_button_bg_pane_g6

0x15ec,	// (0x00036cdf) wml_button_bg_pane_g7

0x15f4,	// (0x00036ce7) wml_button_bg_pane_g8

0x15fc,	// (0x00036cef) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x000448da) wml_button_bg_pane_g

0x6974,	// (0x0003c067) bg_list_pane_cp02

0x1604,	// (0x00036cf7) mce_header_pane_ParamLimits

0x1604,	// (0x00036cf7) mce_header_pane

0x161a,	// (0x00036d0d) mce_icon_pane

0x161a,	// (0x00036d0d) mce_image_pane

0x1623,	// (0x00036d16) mce_text_pane_ParamLimits

0x1623,	// (0x00036d16) mce_text_pane

0x697e,	// (0x0003c071) scroll_pane_cp03

0x151c,	// (0x00036c0f) scroll_pane_cp04

0x1636,	// (0x00036d29) scroll_pane_cp05_ParamLimits

0x1636,	// (0x00036d29) scroll_pane_cp05

0x6988,	// (0x0003c07b) mce_header_field_pane_ParamLimits

0x6988,	// (0x0003c07b) mce_header_field_pane

0x69a8,	// (0x0003c09b) mce_header_field_pane_2_ParamLimits

0x69a8,	// (0x0003c09b) mce_header_field_pane_2

0x69be,	// (0x0003c0b1) mce_header_field_pane_3

0x69c6,	// (0x0003c0b9) list_single_mce_message_pane_ParamLimits

0x69c6,	// (0x0003c0b9) list_single_mce_message_pane

0x69f1,	// (0x0003c0e4) list_single_mce_smart_pane_ParamLimits

0x69f1,	// (0x0003c0e4) list_single_mce_smart_pane

0x1642,	// (0x00036d35) input_focus_pane_cp03

0x164b,	// (0x00036d3e) list_header_data_pane

0x6a27,	// (0x0003c11a) mce_header_field_pane_t1

0x6a35,	// (0x0003c128) list_single_mce_header_pane_ParamLimits

0x6a35,	// (0x0003c128) list_single_mce_header_pane

0x1653,	// (0x00036d46) list_single_mce_header_pane_t1

0x1662,	// (0x00036d55) list_single_mce_message_pane_g1

0x166a,	// (0x00036d5d) list_single_mce_message_pane_t1

0x6a87,	// (0x0003c17a) bg_cale_heading_pane_cp01_ParamLimits

0x6a87,	// (0x0003c17a) bg_cale_heading_pane_cp01

0x1678,	// (0x00036d6b) bg_cale_pane_cp02_ParamLimits

0x1678,	// (0x00036d6b) bg_cale_pane_cp02

0x6ad5,	// (0x0003c1c8) cale_month_corner_pane

0x6af4,	// (0x0003c1e7) cale_month_day_heading_pane_ParamLimits

0x6af4,	// (0x0003c1e7) cale_month_day_heading_pane

0x6b5a,	// (0x0003c24d) cale_month_pane_g1_ParamLimits

0x6b5a,	// (0x0003c24d) cale_month_pane_g1

0x6b9d,	// (0x0003c290) cale_month_pane_g2_ParamLimits

0x6b9d,	// (0x0003c290) cale_month_pane_g2

0x6bd5,	// (0x0003c2c8) cale_month_pane_g3_ParamLimits

0x6bd5,	// (0x0003c2c8) cale_month_pane_g3

0x6c21,	// (0x0003c314) cale_month_pane_g4_ParamLimits

0x6c21,	// (0x0003c314) cale_month_pane_g4

0x6c6d,	// (0x0003c360) cale_month_pane_g5_ParamLimits

0x6c6d,	// (0x0003c360) cale_month_pane_g5

0x6cb9,	// (0x0003c3ac) cale_month_pane_g6_ParamLimits

0x6cb9,	// (0x0003c3ac) cale_month_pane_g6

0x6d05,	// (0x0003c3f8) cale_month_pane_g7_ParamLimits

0x6d05,	// (0x0003c3f8) cale_month_pane_g7

0x6d69,	// (0x0003c45c) cale_month_pane_g8_ParamLimits

0x6d69,	// (0x0003c45c) cale_month_pane_g8

0x6dcd,	// (0x0003c4c0) cale_month_pane_g9_ParamLimits

0x6dcd,	// (0x0003c4c0) cale_month_pane_g9

0x6e2b,	// (0x0003c51e) cale_month_pane_g10_ParamLimits

0x6e2b,	// (0x0003c51e) cale_month_pane_g10

0x6e87,	// (0x0003c57a) cale_month_pane_g11_ParamLimits

0x6e87,	// (0x0003c57a) cale_month_pane_g11

0x6edb,	// (0x0003c5ce) cale_month_pane_g12_ParamLimits

0x6edb,	// (0x0003c5ce) cale_month_pane_g12

0x6f31,	// (0x0003c624) cale_month_pane_g13_ParamLimits

0x6f31,	// (0x0003c624) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x000448ed) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x000448ed) cale_month_pane_g

0x6f87,	// (0x0003c67a) cale_month_week_pane

0x6fab,	// (0x0003c69e) grid_cale_month_pane_ParamLimits

0x6fab,	// (0x0003c69e) grid_cale_month_pane

0x7004,	// (0x0003c6f7) cale_month_day_heading_pane_t1

0x708a,	// (0x0003c77d) cale_month_day_heading_pane_t2

0x7103,	// (0x0003c7f6) cale_month_day_heading_pane_t3

0x717c,	// (0x0003c86f) cale_month_day_heading_pane_t4

0x71f5,	// (0x0003c8e8) cale_month_day_heading_pane_t5

0x726e,	// (0x0003c961) cale_month_day_heading_pane_t6

0x72e7,	// (0x0003c9da) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00044908) cale_month_day_heading_pane_t

0x1361,	// (0x00036a54) bg_cale_side_pane_cp01

0x7378,	// (0x0003ca6b) cale_month_week_pane_t1

0x7391,	// (0x0003ca84) cale_month_week_pane_t2

0x73aa,	// (0x0003ca9d) cale_month_week_pane_t3

0x73c3,	// (0x0003cab6) cale_month_week_pane_t4

0x73dc,	// (0x0003cacf) cale_month_week_pane_t5

0x73fd,	// (0x0003caf0) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00044917) cale_month_week_pane_t

0x741e,	// (0x0003cb11) cell_cale_month_pane_ParamLimits

0x741e,	// (0x0003cb11) cell_cale_month_pane

0x7540,	// (0x0003cc33) cell_cale_month_pane_g1

0x754c,	// (0x0003cc3f) cell_cale_month_pane_t1_ParamLimits

0x754c,	// (0x0003cc3f) cell_cale_month_pane_t1

0x136f,	// (0x00036a62) grid_highlight_pane_cp08

0x10cd,	// (0x000367c0) main_smil_g1

0x7578,	// (0x0003cc6b) smil_status_pane

0x16b7,	// (0x00036daa) smil_text_pane

0x2f67,	// (0x0003865a) bg_popup_call3_rect_pane_g8

0x2f6f,	// (0x00038662) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x00044ba5) bg_popup_call3_rect_pane_g

0x312b,	// (0x0003881e) smil_status_volume_pane_g1

0x16c1,	// (0x00036db4) smil_status_pane_t1

0x858b,	// (0x0003dc7e) volume_smil_pane

0x16d8,	// (0x00036dcb) list_smil_text_pane

0x758b,	// (0x0003cc7e) scroll_pane_cp011

0x7596,	// (0x0003cc89) smil_text_list_pane_t1_ParamLimits

0x7596,	// (0x0003cc89) smil_text_list_pane_t1

0x760e,	// (0x0003cd01) aid_volume_smil_ParamLimits

0x760e,	// (0x0003cd01) aid_volume_smil

0x10cd,	// (0x000367c0) smil_volume_pane_g1

0x10cd,	// (0x000367c0) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00044929) smil_volume_pane_g

0x5e2a,	// (0x0003b51d) listscroll_cale_day_pane

0x16e2,	// (0x00036dd5) bg_cale_pane

0x16fa,	// (0x00036ded) list_cale_pane

0x171d,	// (0x00036e10) scroll_pane_cp09

0x172e,	// (0x00036e21) cale_bg_pane_g1

0x1736,	// (0x00036e29) cale_bg_pane_g2

0x173e,	// (0x00036e31) cale_bg_pane_g3

0x1746,	// (0x00036e39) cale_bg_pane_g4

0x174e,	// (0x00036e41) cale_bg_pane_g5

0x1756,	// (0x00036e49) cale_bg_pane_g6

0x175e,	// (0x00036e51) cale_bg_pane_g7

0x1766,	// (0x00036e59) cale_bg_pane_g8

0x176e,	// (0x00036e61) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0004492e) cale_bg_pane_g

0x7630,	// (0x0003cd23) list_cale_time_pane_ParamLimits

0x7630,	// (0x0003cd23) list_cale_time_pane

0x177e,	// (0x00036e71) list_cale_time_pane_g1_ParamLimits

0x177e,	// (0x00036e71) list_cale_time_pane_g1

0x178a,	// (0x00036e7d) list_cale_time_pane_g2_ParamLimits

0x178a,	// (0x00036e7d) list_cale_time_pane_g2

0x7652,	// (0x0003cd45) list_cale_time_pane_g3_ParamLimits

0x7652,	// (0x0003cd45) list_cale_time_pane_g3

0x7660,	// (0x0003cd53) list_cale_time_pane_g4_ParamLimits

0x7660,	// (0x0003cd53) list_cale_time_pane_g4

0x766e,	// (0x0003cd61) list_cale_time_pane_g5_ParamLimits

0x766e,	// (0x0003cd61) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00044941) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00044941) list_cale_time_pane_g

0x17a4,	// (0x00036e97) list_cale_time_pane_t1_ParamLimits

0x17a4,	// (0x00036e97) list_cale_time_pane_t1

0x17cc,	// (0x00036ebf) list_cale_time_pane_t2_ParamLimits

0x17cc,	// (0x00036ebf) list_cale_time_pane_t2

0x7911,	// (0x0003d004) aid_blid_cardinal_pane

0x7953,	// (0x0003d046) compass_pane_t4

0x17f4,	// (0x00036ee7) list_cale_time_pane_t4_ParamLimits

0x17f4,	// (0x00036ee7) list_cale_time_pane_t4

0x7961,	// (0x0003d054) compass_pane_t5

0x7971,	// (0x0003d064) compass_pane_t6

0x797f,	// (0x0003d072) compass_pane_t7

0x1ca7,	// (0x0003739a) navi_pane_cc_t1

0x1e84,	// (0x00037577) aid_phob_thumbnail_center_pane

0x7d36,	// (0x0003d429) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0004494e) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0004494e) list_cale_time_pane_t

0x0ab1,	// (0x000361a4) bg_popup_window_pane_cp02_ParamLimits

0x0ab1,	// (0x000361a4) bg_popup_window_pane_cp02

0x181c,	// (0x00036f0f) heading_pane_cp01_ParamLimits

0x181c,	// (0x00036f0f) heading_pane_cp01

0x1828,	// (0x00036f1b) loc_req_pane_ParamLimits

0x1828,	// (0x00036f1b) loc_req_pane

0x1838,	// (0x00036f2b) loc_type_pane_ParamLimits

0x1838,	// (0x00036f2b) loc_type_pane

0x184a,	// (0x00036f3d) loc_type_pane_t1_ParamLimits

0x184a,	// (0x00036f3d) loc_type_pane_t1

0x185c,	// (0x00036f4f) loc_type_pane_t2_ParamLimits

0x185c,	// (0x00036f4f) loc_type_pane_t2

0x186e,	// (0x00036f61) loc_type_pane_t3_ParamLimits

0x186e,	// (0x00036f61) loc_type_pane_t3

0x0002,

0xf262,	// (0x00044955) loc_type_pane_t_ParamLimits

0xf262,	// (0x00044955) loc_type_pane_t

0x1880,	// (0x00036f73) list_loc_req_pane

0x188a,	// (0x00036f7d) scroll_pane_cp012

0x767c,	// (0x0003cd6f) list_single_loc_request_popup_menu_pane_ParamLimits

0x767c,	// (0x0003cd6f) list_single_loc_request_popup_menu_pane

0x1895,	// (0x00036f88) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1895,	// (0x00036f88) list_single_loc_request_popup_menu_pane_g1

0x18a1,	// (0x00036f94) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x18a1,	// (0x00036f94) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0004495c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0004495c) list_single_loc_request_popup_menu_pane_g

0x18ad,	// (0x00036fa0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x18ad,	// (0x00036fa0) list_single_loc_request_popup_menu_pane_t1

0x768e,	// (0x0003cd81) bg_popup_window_pane_cp03_ParamLimits

0x768e,	// (0x0003cd81) bg_popup_window_pane_cp03

0x769c,	// (0x0003cd8f) heading_loc_req_pane_ParamLimits

0x769c,	// (0x0003cd8f) heading_loc_req_pane

0x76a8,	// (0x0003cd9b) popup_dyc_status_message_window_g1_ParamLimits

0x76a8,	// (0x0003cd9b) popup_dyc_status_message_window_g1

0x76b4,	// (0x0003cda7) popup_dyc_status_message_window_t1_ParamLimits

0x76b4,	// (0x0003cda7) popup_dyc_status_message_window_t1

0x76c6,	// (0x0003cdb9) popup_dyc_status_message_window_t2_ParamLimits

0x76c6,	// (0x0003cdb9) popup_dyc_status_message_window_t2

0x76d8,	// (0x0003cdcb) popup_dyc_status_message_window_t3_ParamLimits

0x76d8,	// (0x0003cdcb) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00044961) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00044961) popup_dyc_status_message_window_t

0x0e5a,	// (0x0003654d) bg_heading_pane_cp01

0x18cf,	// (0x00036fc2) heading_loc_req_pane_g1

0x18d7,	// (0x00036fca) heading_loc_req_pane_g2

0x18df,	// (0x00036fd2) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00044968) heading_loc_req_pane_g

0x18e7,	// (0x00036fda) heading_loc_req_pane_t1

0x1906,	// (0x00036ff9) bg_popup_sub_pane_cp01_ParamLimits

0x1906,	// (0x00036ff9) bg_popup_sub_pane_cp01

0x1914,	// (0x00037007) popup_cale_events_window_g1_ParamLimits

0x1914,	// (0x00037007) popup_cale_events_window_g1

0x1934,	// (0x00037027) popup_cale_events_window_g2_ParamLimits

0x1934,	// (0x00037027) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0004498a) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0004498a) popup_cale_events_window_g

0x1954,	// (0x00037047) popup_cale_events_window_t1_ParamLimits

0x1954,	// (0x00037047) popup_cale_events_window_t1

0x1966,	// (0x00037059) popup_cale_events_window_t2_ParamLimits

0x1966,	// (0x00037059) popup_cale_events_window_t2

0x19a4,	// (0x00037097) popup_cale_events_window_t3_ParamLimits

0x19a4,	// (0x00037097) popup_cale_events_window_t3

0x19de,	// (0x000370d1) popup_cale_events_window_t4_ParamLimits

0x19de,	// (0x000370d1) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0004498f) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0004498f) popup_cale_events_window_t

0x7702,	// (0x0003cdf5) call_type_pane

0x26b8,	// (0x00037dab) popup_call_status_window_g1

0x770e,	// (0x0003ce01) popup_call_status_window_g2

0x771a,	// (0x0003ce0d) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00044998) popup_call_status_window_g

0x1a14,	// (0x00037107) call_type_pane_g1

0x1a1d,	// (0x00037110) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0004499f) call_type_pane_g

0x0e5a,	// (0x0003654d) bg_popup_sub_pane_cp02

0x1a26,	// (0x00037119) listscroll_popup_wml_pane

0x1a2e,	// (0x00037121) list_wml_pane

0x1a38,	// (0x0003712b) scroll_pane_cp013

0x1a43,	// (0x00037136) list_single_graphic_popup_wml_pane_ParamLimits

0x1a43,	// (0x00037136) list_single_graphic_popup_wml_pane

0x10cd,	// (0x000367c0) list_single_graphic_popup_wml_pane_g1

0x1a57,	// (0x0003714a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x000449a4) list_single_graphic_popup_wml_pane_g

0x1a5f,	// (0x00037152) list_single_graphic_popup_wml_pane_t1

0x1a6d,	// (0x00037160) aid_call_pane

0x10ad,	// (0x000367a0) popup_clock_analogue_window_g1

0x10ad,	// (0x000367a0) popup_clock_analogue_window_g2

0x7726,	// (0x0003ce19) popup_clock_analogue_window_g3

0x7726,	// (0x0003ce19) popup_clock_analogue_window_g4

0x10cd,	// (0x000367c0) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x000449a9) popup_clock_analogue_window_g

0x772e,	// (0x0003ce21) popup_clock_analogue_window_t1

0x773c,	// (0x0003ce2f) clock_digital_number_pane_ParamLimits

0x773c,	// (0x0003ce2f) clock_digital_number_pane

0x7748,	// (0x0003ce3b) clock_digital_number_pane_cp02_ParamLimits

0x7748,	// (0x0003ce3b) clock_digital_number_pane_cp02

0x7754,	// (0x0003ce47) clock_digital_number_pane_cp03_ParamLimits

0x7754,	// (0x0003ce47) clock_digital_number_pane_cp03

0x7760,	// (0x0003ce53) clock_digital_number_pane_cp04_ParamLimits

0x7760,	// (0x0003ce53) clock_digital_number_pane_cp04

0x7770,	// (0x0003ce63) clock_digital_separator_pane_ParamLimits

0x7770,	// (0x0003ce63) clock_digital_separator_pane

0x777c,	// (0x0003ce6f) popup_clock_digital_window_t1

0x10cd,	// (0x000367c0) clock_digital_number_pane_g1

0x10cd,	// (0x000367c0) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00044929) clock_digital_number_pane_g

0x10cd,	// (0x000367c0) clock_digital_separator_pane_g1

0x10cd,	// (0x000367c0) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00044929) clock_digital_separator_pane_g

0x0e5a,	// (0x0003654d) bg_popup_window_pane_cp04

0x1a7d,	// (0x00037170) heading_pane_cp03

0x13b3,	// (0x00036aa6) listscroll_popup_gms_pane

0x0e5a,	// (0x0003654d) grid_large_graphic_popup_pane

0x1a86,	// (0x00037179) listscroll_popup_gms_pane_g1

0x1a8f,	// (0x00037182) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x000449b4) listscroll_popup_gms_pane_g

0x1a98,	// (0x0003718b) scroll_pane_cp014

0x1130,	// (0x00036823) cell_large_graphic_popup_pane_ParamLimits

0x1130,	// (0x00036823) cell_large_graphic_popup_pane

0x113e,	// (0x00036831) cell_large_graphic_popup_pane_g1_ParamLimits

0x113e,	// (0x00036831) cell_large_graphic_popup_pane_g1

0x1aa1,	// (0x00037194) cell_large_graphic_popup_pane_g2_ParamLimits

0x1aa1,	// (0x00037194) cell_large_graphic_popup_pane_g2

0x1aaf,	// (0x000371a2) cell_large_graphic_popup_pane_g3_ParamLimits

0x1aaf,	// (0x000371a2) cell_large_graphic_popup_pane_g3

0x1abd,	// (0x000371b0) cell_large_graphic_popup_pane_g4_ParamLimits

0x1abd,	// (0x000371b0) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x000449b9) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x000449b9) cell_large_graphic_popup_pane_g

0x0e5a,	// (0x0003654d) grid_highlight_pane_cp010

0x10cd,	// (0x000367c0) bg_popup_call_pane_g1

0x1ace,	// (0x000371c1) list_single_graphic_popup_conf_pane_ParamLimits

0x1ace,	// (0x000371c1) list_single_graphic_popup_conf_pane

0x1ae1,	// (0x000371d4) list_highlight_pane_cp01

0x1aea,	// (0x000371dd) list_single_graphic_popup_conf_pane_g1

0x1af2,	// (0x000371e5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x000449c2) list_single_graphic_popup_conf_pane_g

0x1afa,	// (0x000371ed) list_single_graphic_popup_conf_pane_t1

0x1b08,	// (0x000371fb) linegrid_cams_pane_g1

0x7799,	// (0x0003ce8c) linegrid_cams_pane_g2

0x12f2,	// (0x000369e5) linegrid_cams_pane_g3

0x1b11,	// (0x00037204) linegrid_cams_pane_g4

0x77a2,	// (0x0003ce95) linegrid_cams_pane_g5

0x77ab,	// (0x0003ce9e) linegrid_cams_pane_g6

0x13a2,	// (0x00036a95) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x000449c7) linegrid_cams_pane_g

0x1b1a,	// (0x0003720d) popup_clock_analogue_window

0x1b1a,	// (0x0003720d) popup_clock_digital_window

0x0e5a,	// (0x0003654d) popup_phob_thumbnail_window

0x10cd,	// (0x000367c0) call_video_uplink_pane_g1

0x1b23,	// (0x00037216) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x000449d6) call_video_uplink_pane_g

0x1b2b,	// (0x0003721e) video_uplink_pane

0x1b33,	// (0x00037226) mce_image_pane_g1

0x77b4,	// (0x0003cea7) mce_image_pane_g2

0x77be,	// (0x0003ceb1) mce_image_pane_g3

0x77c6,	// (0x0003ceb9) mce_image_pane_g4

0x77ce,	// (0x0003cec1) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x000449db) mce_image_pane_g

0x1b3d,	// (0x00037230) control_top_pane_stacon_cp01_ParamLimits

0x1b3d,	// (0x00037230) control_top_pane_stacon_cp01

0x1b51,	// (0x00037244) uni_indicator_pane_stacon_cp01_ParamLimits

0x1b51,	// (0x00037244) uni_indicator_pane_stacon_cp01

0x1b62,	// (0x00037255) bg_popup_sub_pane_cp03

0x1b6c,	// (0x0003725f) chi_dic_find_pane

0x77d6,	// (0x0003cec9) listscroll_chi_dic_pane

0x1b74,	// (0x00037267) main_pane_chidic_g1

0x1b7c,	// (0x0003726f) chi_dic_find_pane_t1

0x1b8a,	// (0x0003727d) find_chidic_pane

0x1b93,	// (0x00037286) chi_dic_list_pane_ParamLimits

0x1b93,	// (0x00037286) chi_dic_list_pane

0x1ba4,	// (0x00037297) scroll_pane_cp020

0x1bac,	// (0x0003729f) find_chidic_pane_t1

0x0e5a,	// (0x0003654d) input_focus_pane_cp06

0x77ea,	// (0x0003cedd) list_chi_dic_pane_ParamLimits

0x77ea,	// (0x0003cedd) list_chi_dic_pane

0x7804,	// (0x0003cef7) list_chi_dic_pane_t1_ParamLimits

0x7804,	// (0x0003cef7) list_chi_dic_pane_t1

0x0e5a,	// (0x0003654d) list_highlight_pane_cp020

0x1bbb,	// (0x000372ae) bg_cale_heading_pane_g1

0x7817,	// (0x0003cf0a) bg_cale_heading_pane_g2

0x781f,	// (0x0003cf12) bg_cale_heading_pane_g3

0x7827,	// (0x0003cf1a) bg_cale_heading_pane_g4

0x7831,	// (0x0003cf24) bg_cale_heading_pane_g5

0x783b,	// (0x0003cf2e) bg_cale_heading_pane_g6

0x7843,	// (0x0003cf36) bg_cale_heading_pane_g7

0x784b,	// (0x0003cf3e) bg_cale_heading_pane_g8

0x7855,	// (0x0003cf48) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x000449e6) bg_cale_heading_pane_g

0x1bbb,	// (0x000372ae) bg_cale_side_pane_g1

0x785f,	// (0x0003cf52) bg_cale_side_pane_g2

0x7869,	// (0x0003cf5c) bg_cale_side_pane_g3

0x7873,	// (0x0003cf66) bg_cale_side_pane_g4

0x787d,	// (0x0003cf70) bg_cale_side_pane_g5

0x7887,	// (0x0003cf7a) bg_cale_side_pane_g6

0x7891,	// (0x0003cf84) bg_cale_side_pane_g7

0x789b,	// (0x0003cf8e) bg_cale_side_pane_g8

0x78a3,	// (0x0003cf96) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x000449f9) bg_cale_side_pane_g

0x78ab,	// (0x0003cf9e) popup_call_status_window_ParamLimits

0x78ab,	// (0x0003cf9e) popup_call_status_window

0x1bc3,	// (0x000372b6) stacon_top_pane

0x1bcb,	// (0x000372be) status_pane_ParamLimits

0x1bcb,	// (0x000372be) status_pane

0x1be0,	// (0x000372d3) status_small_pane

0x1be8,	// (0x000372db) control_pane

0x0e5a,	// (0x0003654d) stacon_bottom_pane

0x1bf0,	// (0x000372e3) list_single_mce_smart_pane_t1_ParamLimits

0x1bf0,	// (0x000372e3) list_single_mce_smart_pane_t1

0x1c03,	// (0x000372f6) list_single_mce_smart_pane_t2_ParamLimits

0x1c03,	// (0x000372f6) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00044a0c) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00044a0c) list_single_mce_smart_pane_t

0x78b7,	// (0x0003cfaa) compass_pane

0x78c3,	// (0x0003cfb6) main_location2_pane_t1

0x78d7,	// (0x0003cfca) main_location2_pane_t2

0x78eb,	// (0x0003cfde) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00044a11) main_location2_pane_t

0x1c22,	// (0x00037315) compass_pane_g1_ParamLimits

0x1c22,	// (0x00037315) compass_pane_g1

0x7935,	// (0x0003d028) compass_pane_t1

0x7944,	// (0x0003d037) compass_pane_t2

0x0005,

0xf327,	// (0x00044a1a) compass_pane_t

0x798f,	// (0x0003d082) text_secondary_cp61

0x1c9e,	// (0x00037391) navi_pane_cams_g5

0x1d1a,	// (0x0003740d) navi_pane_im_t1

0x1d28,	// (0x0003741b) navi_pane_mp_g1_ParamLimits

0x1d28,	// (0x0003741b) navi_pane_mp_g1

0x1d3c,	// (0x0003742f) navi_pane_mp_g2_ParamLimits

0x1d3c,	// (0x0003742f) navi_pane_mp_g2

0x1d48,	// (0x0003743b) navi_pane_mp_g3_ParamLimits

0x1d48,	// (0x0003743b) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00044a2e) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00044a2e) navi_pane_mp_g

0x1d54,	// (0x00037447) navi_pane_mp_t1

0x1d62,	// (0x00037455) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00044a35) navi_pane_mp_t

0x1dcd,	// (0x000374c0) navi_pane_vt_g1

0x1d54,	// (0x00037447) navi_pane_vt_t1

0x1dd5,	// (0x000374c8) navi_slider_pane

0x13b3,	// (0x00036aa6) zooming_pane

0x1de5,	// (0x000374d8) navi_slider_pane_g1

0x79ca,	// (0x0003d0bd) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00044a3c) navi_slider_pane_g

0x1e09,	// (0x000374fc) aid_levels_zoom

0x1e11,	// (0x00037504) zooming_pane_g1

0x1e19,	// (0x0003750c) zooming_pane_g2

0x1e19,	// (0x0003750c) zooming_pane_g3

0x0002,

0xf358,	// (0x00044a4b) zooming_pane_g

0x1e21,	// (0x00037514) level_10_zoom

0x1e2a,	// (0x0003751d) level_11_zoom

0x1e33,	// (0x00037526) level_1_zoom

0x1e3c,	// (0x0003752f) level_2_zoom

0x1e45,	// (0x00037538) level_3_zoom

0x1e4e,	// (0x00037541) level_4_zoom

0x1e57,	// (0x0003754a) level_5_zoom

0x1e60,	// (0x00037553) level_6_zoom

0x1e69,	// (0x0003755c) level_7_zoom

0x1e72,	// (0x00037565) level_8_zoom

0x1e7b,	// (0x0003756e) level_9_zoom

0x1e8c,	// (0x0003757f) popup_phob_thumbnail_window_g1

0x1e94,	// (0x00037587) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00044a52) popup_phob_thumbnail_window_g

0x8244,	// (0x0003d937) level_1_location

0x824c,	// (0x0003d93f) level_2_location

0x8254,	// (0x0003d947) level_3_location

0x825e,	// (0x0003d951) level_4_location

0x13b3,	// (0x00036aa6) level_5_location

0x79dc,	// (0x0003d0cf) mce_icon_pane_g1

0x79e4,	// (0x0003d0d7) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00044a57) mce_icon_pane_g

0x79ec,	// (0x0003d0df) main_mup_pane_g1_ParamLimits

0x79ec,	// (0x0003d0df) main_mup_pane_g1

0x115a,	// (0x0003684d) main_mup_pane_g2_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g2

0x115a,	// (0x0003684d) main_mup_pane_g3_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g3

0x115a,	// (0x0003684d) main_mup_pane_g4_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g4

0x115a,	// (0x0003684d) main_mup_pane_g5_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g5

0x115a,	// (0x0003684d) main_mup_pane_g6_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g6

0x115a,	// (0x0003684d) main_mup_pane_g7_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g7

0x115a,	// (0x0003684d) main_mup_pane_g8_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g8

0x115a,	// (0x0003684d) main_mup_pane_g9_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g9

0x115a,	// (0x0003684d) main_mup_pane_g10_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g10

0x115a,	// (0x0003684d) main_mup_pane_g11_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g11

0x114c,	// (0x0003683f) main_mup_pane_g12_ParamLimits

0x114c,	// (0x0003683f) main_mup_pane_g12

0x115a,	// (0x0003684d) main_mup_pane_g13_ParamLimits

0x115a,	// (0x0003684d) main_mup_pane_g13

0x000c,

0xf369,	// (0x00044a5c) main_mup_pane_g_ParamLimits

0xf369,	// (0x00044a5c) main_mup_pane_g

0x1168,	// (0x0003685b) main_mup_pane_t1_ParamLimits

0x1168,	// (0x0003685b) main_mup_pane_t1

0x1168,	// (0x0003685b) main_mup_pane_t2_ParamLimits

0x1168,	// (0x0003685b) main_mup_pane_t2

0x1168,	// (0x0003685b) main_mup_pane_t3_ParamLimits

0x1168,	// (0x0003685b) main_mup_pane_t3

0x119a,	// (0x0003688d) main_mup_pane_t4_ParamLimits

0x119a,	// (0x0003688d) main_mup_pane_t4

0x119a,	// (0x0003688d) main_mup_pane_t5_ParamLimits

0x119a,	// (0x0003688d) main_mup_pane_t5

0x1186,	// (0x00036879) main_mup_pane_t6_ParamLimits

0x1186,	// (0x00036879) main_mup_pane_t6

0x0005,

0xf384,	// (0x00044a77) main_mup_pane_t_ParamLimits

0xf384,	// (0x00044a77) main_mup_pane_t

0x10d7,	// (0x000367ca) mup_progress_pane_ParamLimits

0x10d7,	// (0x000367ca) mup_progress_pane

0x32b1,	// (0x000389a4) mup_visualizer_pane_ParamLimits

0x32b1,	// (0x000389a4) mup_visualizer_pane

0x32b1,	// (0x000389a4) mup_volume_pane_ParamLimits

0x32b1,	// (0x000389a4) mup_volume_pane

0x114c,	// (0x0003683f) mup_visualizer_pane_g1_ParamLimits

0x114c,	// (0x0003683f) mup_visualizer_pane_g1

0x1ecc,	// (0x000375bf) mup_visualizer_pane_g2_ParamLimits

0x1ecc,	// (0x000375bf) mup_visualizer_pane_g2

0x113e,	// (0x00036831) mup_visualizer_pane_g3_ParamLimits

0x113e,	// (0x00036831) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00044a84) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00044a84) mup_visualizer_pane_g

0x117c,	// (0x0003686f) mup_volume_pane_g1

0x117c,	// (0x0003686f) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000447a2) mup_volume_pane_g

0x117c,	// (0x0003686f) mup_progress_pane_g1

0x117c,	// (0x0003686f) mup_progress_pane_g2

0x117c,	// (0x0003686f) mup_progress_pane_g3

0x0002,

0xf398,	// (0x00044a8b) mup_progress_pane_g

0x0e5a,	// (0x0003654d) bg_popup_window_pane_cp05

0x1eda,	// (0x000375cd) heading_pane_cp02_ParamLimits

0x1eda,	// (0x000375cd) heading_pane_cp02

0x1ef4,	// (0x000375e7) list_popup_blid_pane

0x1efc,	// (0x000375ef) list_blid_sat_info_pane_ParamLimits

0x1efc,	// (0x000375ef) list_blid_sat_info_pane

0x1f0f,	// (0x00037602) list_blid_sat_info_pane_g1

0x1f17,	// (0x0003760a) list_blid_sat_info_pane_t1

0x7ae9,	// (0x0003d1dc) mup_equalizer_pane_ParamLimits

0x7ae9,	// (0x0003d1dc) mup_equalizer_pane

0x7b0a,	// (0x0003d1fd) mup_equalizer_pane_cp1_ParamLimits

0x7b0a,	// (0x0003d1fd) mup_equalizer_pane_cp1

0x7b2b,	// (0x0003d21e) mup_equalizer_pane_cp2_ParamLimits

0x7b2b,	// (0x0003d21e) mup_equalizer_pane_cp2

0x7b4c,	// (0x0003d23f) mup_equalizer_pane_cp3_ParamLimits

0x7b4c,	// (0x0003d23f) mup_equalizer_pane_cp3

0x7b6d,	// (0x0003d260) mup_equalizer_pane_cp4_ParamLimits

0x7b6d,	// (0x0003d260) mup_equalizer_pane_cp4

0x7b8e,	// (0x0003d281) mup_equalizer_pane_cp5

0x7ba4,	// (0x0003d297) mup_equalizer_pane_cp6

0x7bbc,	// (0x0003d2af) mup_equalizer_pane_cp7

0x2fe7,	// (0x000386da) bg_popup_call_poc_act_pane_g9

0x2fef,	// (0x000386e2) bg_popup_call_poc_act_pane_g10

0x2ff7,	// (0x000386ea) bg_popup_call_poc_act_pane_g11

0x000a,

0x10b5,	// (0x000367a8) mup_scale_pane

0x10cd,	// (0x000367c0) mup_scale_pane_g1

0x1f25,	// (0x00037618) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x00044aa7) mup_scale_pane_g

0x1f49,	// (0x0003763c) msg_data_pane

0x1f51,	// (0x00037644) scroll_pane_cp017

0x4a91,	// (0x0003a184) bg_list_pane_cp04_ParamLimits

0x4a91,	// (0x0003a184) bg_list_pane_cp04

0x1f59,	// (0x0003764c) msg_data_pane_g1

0x7be6,	// (0x0003d2d9) msg_data_pane_g2

0x7bf0,	// (0x0003d2e3) msg_data_pane_g3

0x7bf8,	// (0x0003d2eb) msg_data_pane_g4

0x7c00,	// (0x0003d2f3) msg_data_pane_g5

0x7c08,	// (0x0003d2fb) msg_data_pane_g6

0x7c10,	// (0x0003d303) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x00044ab6) msg_data_pane_g

0x4ab5,	// (0x0003a1a8) msg_text_pane_ParamLimits

0x4ab5,	// (0x0003a1a8) msg_text_pane

0x7c18,	// (0x0003d30b) qrid_highlight_pane_cp011_ParamLimits

0x7c18,	// (0x0003d30b) qrid_highlight_pane_cp011

0x0e5a,	// (0x0003654d) msg_body_pane

0x10b5,	// (0x000367a8) msg_header_pane

0x4b15,	// (0x0003a208) input_focus_pane_cp07

0x4b36,	// (0x0003a229) msg_header_pane_t1_ParamLimits

0x4b36,	// (0x0003a229) msg_header_pane_t1

0x4b52,	// (0x0003a245) msg_header_pane_t2_ParamLimits

0x4b52,	// (0x0003a245) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x00044aca) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x00044aca) msg_header_pane_t

0x1f96,	// (0x00037689) msg_body_pane_g1

0x4b72,	// (0x0003a265) msg_body_pane_t1_ParamLimits

0x4b72,	// (0x0003a265) msg_body_pane_t1

0x4ba3,	// (0x0003a296) msg_body_pane_t2_ParamLimits

0x4ba3,	// (0x0003a296) msg_body_pane_t2

0x4bb5,	// (0x0003a2a8) msg_body_pane_t3_ParamLimits

0x4bb5,	// (0x0003a2a8) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x00044acf) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x00044acf) msg_body_pane_t

0x7c86,	// (0x0003d379) main_viewer_pane_g1_ParamLimits

0x7c86,	// (0x0003d379) main_viewer_pane_g1

0x7c92,	// (0x0003d385) main_viewer_pane_g2_ParamLimits

0x7c92,	// (0x0003d385) main_viewer_pane_g2

0x7c9e,	// (0x0003d391) main_viewer_pane_g3_ParamLimits

0x7c9e,	// (0x0003d391) main_viewer_pane_g3

0x7caf,	// (0x0003d3a2) main_viewer_pane_g4_ParamLimits

0x7caf,	// (0x0003d3a2) main_viewer_pane_g4

0x7cc0,	// (0x0003d3b3) main_viewer_pane_g5_ParamLimits

0x7cc0,	// (0x0003d3b3) main_viewer_pane_g5

0x7cc0,	// (0x0003d3b3) main_viewer_pane_g7_ParamLimits

0x7cc0,	// (0x0003d3b3) main_viewer_pane_g7

0x7cd2,	// (0x0003d3c5) main_viewer_pane_g8_ParamLimits

0x7cd2,	// (0x0003d3c5) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x00044adf) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x00044adf) main_viewer_pane_g

0x1f9e,	// (0x00037691) viewer_content_pane_ParamLimits

0x1f9e,	// (0x00037691) viewer_content_pane

0x7d0a,	// (0x0003d3fd) main_postcard_pane_g1_ParamLimits

0x7d0a,	// (0x0003d3fd) main_postcard_pane_g1

0x7d18,	// (0x0003d40b) main_postcard_pane_g2_ParamLimits

0x7d18,	// (0x0003d40b) main_postcard_pane_g2

0x7d26,	// (0x0003d419) main_postcard_pane_g3_ParamLimits

0x7d26,	// (0x0003d419) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00044af0) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00044af0) main_postcard_pane_g

0x7d36,	// (0x0003d429) main_postcard_pane_g4

0x3118,	// (0x0003880b) smil_status_volume_pane_g2

0x7d62,	// (0x0003d455) postcard_pane_ParamLimits

0x7d62,	// (0x0003d455) postcard_pane

0x26b8,	// (0x00037dab) postcard_pane_g1_ParamLimits

0x26b8,	// (0x00037dab) postcard_pane_g1

0x7d94,	// (0x0003d487) postcard_pane_g2_ParamLimits

0x7d94,	// (0x0003d487) postcard_pane_g2

0x7da0,	// (0x0003d493) postcard_pane_g3_ParamLimits

0x7da0,	// (0x0003d493) postcard_pane_g3

0x1fba,	// (0x000376ad) postcard_pane_g4_ParamLimits

0x1fba,	// (0x000376ad) postcard_pane_g4

0x7dac,	// (0x0003d49f) postcard_pane_g5_ParamLimits

0x7dac,	// (0x0003d49f) postcard_pane_g5

0x7db8,	// (0x0003d4ab) postcard_pane_g6_ParamLimits

0x7db8,	// (0x0003d4ab) postcard_pane_g6

0x1fac,	// (0x0003769f) postcard_pane_g7_ParamLimits

0x1fac,	// (0x0003769f) postcard_pane_g7

0x0006,

0xf40a,	// (0x00044afd) postcard_pane_g_ParamLimits

0xf40a,	// (0x00044afd) postcard_pane_g

0x7dc4,	// (0x0003d4b7) main_mp2_pane_g1_ParamLimits

0x7dc4,	// (0x0003d4b7) main_mp2_pane_g1

0x7dd0,	// (0x0003d4c3) main_mp2_pane_g2_ParamLimits

0x7dd0,	// (0x0003d4c3) main_mp2_pane_g2

0x7ddc,	// (0x0003d4cf) main_mp2_pane_g3_ParamLimits

0x7ddc,	// (0x0003d4cf) main_mp2_pane_g3

0x0002,

0xf419,	// (0x00044b0c) main_mp2_pane_g_ParamLimits

0xf419,	// (0x00044b0c) main_mp2_pane_g

0x7de8,	// (0x0003d4db) main_mp2_pane_t1_ParamLimits

0x7de8,	// (0x0003d4db) main_mp2_pane_t1

0x7dff,	// (0x0003d4f2) main_mp2_pane_t2_ParamLimits

0x7dff,	// (0x0003d4f2) main_mp2_pane_t2

0x7e13,	// (0x0003d506) main_mp2_pane_t3_ParamLimits

0x7e13,	// (0x0003d506) main_mp2_pane_t3

0x0002,

0xf420,	// (0x00044b13) main_mp2_pane_t_ParamLimits

0xf420,	// (0x00044b13) main_mp2_pane_t

0x10d7,	// (0x000367ca) pec_content_pane_ParamLimits

0x10d7,	// (0x000367ca) pec_content_pane

0x0a3d,	// (0x00036130) scroll_pane_cp015

0x1ebe,	// (0x000375b1) pec_attribute_pane_ParamLimits

0x1ebe,	// (0x000375b1) pec_attribute_pane

0x113e,	// (0x00036831) pec_content_pane_g1_ParamLimits

0x113e,	// (0x00036831) pec_content_pane_g1

0x1fc8,	// (0x000376bb) pec_content_pane_t1_ParamLimits

0x1fc8,	// (0x000376bb) pec_content_pane_t1

0x1fdc,	// (0x000376cf) pec_content_pane_t2_ParamLimits

0x1fdc,	// (0x000376cf) pec_content_pane_t2

0x0001,

0xf427,	// (0x00044b1a) pec_content_pane_t_ParamLimits

0xf427,	// (0x00044b1a) pec_content_pane_t

0x1130,	// (0x00036823) list_single_graphic_pane_cp01_ParamLimits

0x1130,	// (0x00036823) list_single_graphic_pane_cp01

0x10b5,	// (0x000367a8) bg_popup_sub_pane_cp04

0x1ff0,	// (0x000376e3) popup_mup_playback_window_g1

0x1ffc,	// (0x000376ef) popup_mup_playback_window_t1

0x2011,	// (0x00037704) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x00044b1f) popup_mup_playback_window_t

0x2048,	// (0x0003773b) main_image_pane_g1_ParamLimits

0x2048,	// (0x0003773b) main_image_pane_g1

0x208b,	// (0x0003777e) scroll_pane_cp018_ParamLimits

0x208b,	// (0x0003777e) scroll_pane_cp018

0x20a3,	// (0x00037796) scroll_pane_cp016_ParamLimits

0x20a3,	// (0x00037796) scroll_pane_cp016

0x7e96,	// (0x0003d589) smil2_image_pane_ParamLimits

0x7e96,	// (0x0003d589) smil2_image_pane

0x7ec6,	// (0x0003d5b9) smil2_root_pane_ParamLimits

0x7ec6,	// (0x0003d5b9) smil2_root_pane

0x7ef2,	// (0x0003d5e5) smil2_text_pane_ParamLimits

0x7ef2,	// (0x0003d5e5) smil2_text_pane

0x0a3d,	// (0x00036130) bg_list_pane_cp06

0x0a3d,	// (0x00036130) grid_radio_pane

0x0e5a,	// (0x0003654d) bg_popup_window_pane_cp06

0x18f6,	// (0x00036fe9) main_fmradio_pane_t1

0x2fff,	// (0x000386f2) heading_pane_cp04

0x18f6,	// (0x00036fe9) main_fmradio_pane_t2

0x3007,	// (0x000386fa) popup_cale_lunar_info_window_g1

0x18f6,	// (0x00036fe9) main_fmradio_pane_t3

0x300f,	// (0x00038702) popup_cale_lunar_info_window_g2

0x18f6,	// (0x00036fe9) main_fmradio_pane_t4

0x0001,

0x18f6,	// (0x00036fe9) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x00044bf4) popup_cale_lunar_info_window_g

0xf28c,	// (0x0004497f) main_fmradio_pane_t

0x0a3d,	// (0x00036130) wait_bar_pane_cp03

0x1130,	// (0x00036823) cell_fmradio_pane_ParamLimits

0x1130,	// (0x00036823) cell_fmradio_pane

0x113e,	// (0x00036831) cell_fmradio_pane_g1_ParamLimits

0x113e,	// (0x00036831) cell_fmradio_pane_g1

0x0a3d,	// (0x00036130) grid_highlight_pane_cp011

0x20d7,	// (0x000377ca) poc_content_pane_ParamLimits

0x20d7,	// (0x000377ca) poc_content_pane

0x20e9,	// (0x000377dc) scroll_pane_cp019

0x7f32,	// (0x0003d625) popup_call_poc_act_window_ParamLimits

0x7f32,	// (0x0003d625) popup_call_poc_act_window

0x7f3f,	// (0x0003d632) popup_call_poc_inact_window_ParamLimits

0x7f3f,	// (0x0003d632) popup_call_poc_inact_window

0xf4d8,	// (0x00044bcb) bg_popup_call_poc_act_pane_g

0x2f77,	// (0x0003866a) bg_popup_call_poc_inact_pane_g1

0x2f7f,	// (0x00038672) bg_popup_call_poc_inact_pane_g2

0x20f1,	// (0x000377e4) popup_call_poc_act_window_g2

0x2f87,	// (0x0003867a) bg_popup_call_poc_inact_pane_g3

0x2f8f,	// (0x00038682) bg_popup_call_poc_inact_pane_g4

0x2f97,	// (0x0003868a) bg_popup_call_poc_inact_pane_g5

0x20f9,	// (0x000377ec) popup_call_poc_act_window_t1_ParamLimits

0x20f9,	// (0x000377ec) popup_call_poc_act_window_t1

0x2121,	// (0x00037814) popup_call_poc_act_window_t2_ParamLimits

0x2121,	// (0x00037814) popup_call_poc_act_window_t2

0x2149,	// (0x0003783c) popup_call_poc_act_window_t3_ParamLimits

0x2149,	// (0x0003783c) popup_call_poc_act_window_t3

0x2171,	// (0x00037864) popup_call_poc_act_window_t4_ParamLimits

0x2171,	// (0x00037864) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x00044b34) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x00044b34) popup_call_poc_act_window_t

0x2f9f,	// (0x00038692) bg_popup_call_poc_inact_pane_g6

0x2fa7,	// (0x0003869a) bg_popup_call_poc_inact_pane_g7

0x2faf,	// (0x000386a2) bg_popup_call_poc_inact_pane_g8

0x2183,	// (0x00037876) popup_call_poc_inact_window_g2

0x2fb7,	// (0x000386aa) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x00044bb8) bg_popup_call_poc_inact_pane_g

0x218b,	// (0x0003787e) popup_call_poc_inact_window_t1_ParamLimits

0x218b,	// (0x0003787e) popup_call_poc_inact_window_t1

0x21a0,	// (0x00037893) popup_call_poc_inact_window_t2_ParamLimits

0x21a0,	// (0x00037893) popup_call_poc_inact_window_t2

0x21b5,	// (0x000378a8) popup_call_poc_inact_window_t3_ParamLimits

0x21b5,	// (0x000378a8) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x00044b3d) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x00044b3d) popup_call_poc_inact_window_t

0x30a3,	// (0x00038796) context_pane_ParamLimits

0x8542,	// (0x0003dc35) signal_pane_ParamLimits

0x13b3,	// (0x00036aa6) main_call2_pane

0x84b5,	// (0x0003dba8) popup_phob_thumbnail2_window_ParamLimits

0x84b5,	// (0x0003dba8) popup_phob_thumbnail2_window

0x7c34,	// (0x0003d327) aid_hotspot_pointer_arrow_pane

0x7c3c,	// (0x0003d32f) aid_hotspot_pointer_hand_pane

0x820c,	// (0x0003d8ff) phob_pre_status_pane_g5

0x1130,	// (0x00036823) cams_zoom_pane_ParamLimits

0x1130,	// (0x00036823) image_vga_pane_ParamLimits

0x114c,	// (0x0003683f) main_camera_pane_g1_ParamLimits

0x114c,	// (0x0003683f) main_camera_pane_g2_ParamLimits

0x114c,	// (0x0003683f) main_camera_pane_g3_ParamLimits

0x114c,	// (0x0003683f) main_camera_pane_g4_ParamLimits

0x114c,	// (0x0003683f) main_camera_pane_g5_ParamLimits

0x114c,	// (0x0003683f) main_camera_pane_g6_ParamLimits

0x114c,	// (0x0003683f) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00044873) main_camera_pane_g_ParamLimits

0x119a,	// (0x0003688d) main_camera_pane_t1_ParamLimits

0x119a,	// (0x0003688d) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00044884) main_camera_pane_t_ParamLimits

0x10b5,	// (0x000367a8) bg_popup_preview_window_pane_cp01_ParamLimits

0x10b5,	// (0x000367a8) bg_popup_preview_window_pane_cp01

0x21ca,	// (0x000378bd) popup_phob_thumbnail2_window_g1_ParamLimits

0x21ca,	// (0x000378bd) popup_phob_thumbnail2_window_g1

0x0e5a,	// (0x0003654d) call2_cli_visual_pane

0x7f5b,	// (0x0003d64e) popup_call2_audio_conf_window_ParamLimits

0x7f5b,	// (0x0003d64e) popup_call2_audio_conf_window

0x7f70,	// (0x0003d663) popup_call2_audio_first_window_ParamLimits

0x7f70,	// (0x0003d663) popup_call2_audio_first_window

0x800e,	// (0x0003d701) popup_call2_audio_in_window_ParamLimits

0x800e,	// (0x0003d701) popup_call2_audio_in_window

0x8050,	// (0x0003d743) popup_call2_audio_out_window_ParamLimits

0x8050,	// (0x0003d743) popup_call2_audio_out_window

0x80b2,	// (0x0003d7a5) popup_call2_audio_second_window_ParamLimits

0x80b2,	// (0x0003d7a5) popup_call2_audio_second_window

0x8110,	// (0x0003d803) popup_call2_audio_wait_window_ParamLimits

0x8110,	// (0x0003d803) popup_call2_audio_wait_window

0x0e5a,	// (0x0003654d) bg_popup_call2_act_pane_cp03

0x1097,	// (0x0003678a) list_conf_pane_cp

0x21d6,	// (0x000378c9) popup_call2_audio_conf_window_t1

0x1ace,	// (0x000371c1) list_single_graphic_popup_conf2_pane_ParamLimits

0x1ace,	// (0x000371c1) list_single_graphic_popup_conf2_pane

0x1ae1,	// (0x000371d4) list_highlight_pane_cp04

0x21e4,	// (0x000378d7) list_single_graphic_popup_conf2_pane_g1

0x1af2,	// (0x000371e5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x00044b44) list_single_graphic_popup_conf2_pane_g

0x21ee,	// (0x000378e1) list_single_graphic_popup_conf2_pane_t1

0x21fc,	// (0x000378ef) bg_popup_call2_act_pane_cp01_ParamLimits

0x21fc,	// (0x000378ef) bg_popup_call2_act_pane_cp01

0x2286,	// (0x00037979) call_type_pane_cp05_ParamLimits

0x2286,	// (0x00037979) call_type_pane_cp05

0x22da,	// (0x000379cd) popup_call2_audio_second_window_g1_ParamLimits

0x22da,	// (0x000379cd) popup_call2_audio_second_window_g1

0x232e,	// (0x00037a21) popup_call2_audio_second_window_g2_ParamLimits

0x232e,	// (0x00037a21) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x00044b49) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x00044b49) popup_call2_audio_second_window_g

0x2393,	// (0x00037a86) popup_call2_audio_second_window_t1_ParamLimits

0x2393,	// (0x00037a86) popup_call2_audio_second_window_t1

0x244e,	// (0x00037b41) popup_call2_audio_second_window_t2_ParamLimits

0x244e,	// (0x00037b41) popup_call2_audio_second_window_t2

0x24a1,	// (0x00037b94) popup_call2_audio_second_window_t3_ParamLimits

0x24a1,	// (0x00037b94) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x00044b50) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x00044b50) popup_call2_audio_second_window_t

0x0e5a,	// (0x0003654d) bg_popup_call2_in_pane_cp02

0x0e64,	// (0x00036557) call_type_pane_cp04

0x814f,	// (0x0003d842) popup_call2_audio_wait_window_g1

0x8157,	// (0x0003d84a) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x00044b59) popup_call2_audio_wait_window_g

0x0e7c,	// (0x0003656f) popup_call2_audio_wait_window_t3

0x2594,	// (0x00037c87) bg_popup_call2_act_pane_ParamLimits

0x2594,	// (0x00037c87) bg_popup_call2_act_pane

0x2654,	// (0x00037d47) call_type_pane_cp03_ParamLimits

0x2654,	// (0x00037d47) call_type_pane_cp03

0x26c6,	// (0x00037db9) popup_call2_audio_first_window_g1_ParamLimits

0x26c6,	// (0x00037db9) popup_call2_audio_first_window_g1

0x2736,	// (0x00037e29) popup_call2_audio_first_window_g2_ParamLimits

0x2736,	// (0x00037e29) popup_call2_audio_first_window_g2

0x26b8,	// (0x00037dab) popup_call2_audio_first_window_g3_ParamLimits

0x26b8,	// (0x00037dab) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x00044b5e) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x00044b5e) popup_call2_audio_first_window_g

0x2814,	// (0x00037f07) popup_call2_audio_first_window_t1_ParamLimits

0x2814,	// (0x00037f07) popup_call2_audio_first_window_t1

0x2917,	// (0x0003800a) popup_call2_audio_first_window_t4_ParamLimits

0x2917,	// (0x0003800a) popup_call2_audio_first_window_t4

0x29fa,	// (0x000380ed) popup_call2_audio_first_window_t5_ParamLimits

0x29fa,	// (0x000380ed) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x00044b69) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x00044b69) popup_call2_audio_first_window_t

0x10ad,	// (0x000367a0) bg_popup_call2_act_pane_g1

0x3017,	// (0x0003870a) popup_cale_lunar_info_window_t1

0x3025,	// (0x00038718) popup_cale_lunar_info_window_t2

0x3033,	// (0x00038726) popup_cale_lunar_info_window_t3

0x0e5a,	// (0x0003654d) bg_popup_call2_bubble_pane

0x2afb,	// (0x000381ee) bg_popup_call2_in_pane_cp01_ParamLimits

0x2afb,	// (0x000381ee) bg_popup_call2_in_pane_cp01

0x0b36,	// (0x00036229) call_type_pane_cp02

0x815f,	// (0x0003d852) popup_call2_audio_out_window_g1_ParamLimits

0x815f,	// (0x0003d852) popup_call2_audio_out_window_g1

0x2b43,	// (0x00038236) popup_call2_audio_out_window_g2_ParamLimits

0x2b43,	// (0x00038236) popup_call2_audio_out_window_g2

0x818b,	// (0x0003d87e) popup_call2_audio_out_window_g3_ParamLimits

0x818b,	// (0x0003d87e) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x00044b72) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x00044b72) popup_call2_audio_out_window_g

0x2b7a,	// (0x0003826d) popup_call2_audio_out_window_t1_ParamLimits

0x2b7a,	// (0x0003826d) popup_call2_audio_out_window_t1

0x2bd9,	// (0x000382cc) popup_call2_audio_out_window_t2_ParamLimits

0x2bd9,	// (0x000382cc) popup_call2_audio_out_window_t2

0x2c2d,	// (0x00038320) popup_call2_audio_out_window_t3_ParamLimits

0x2c2d,	// (0x00038320) popup_call2_audio_out_window_t3

0x2c43,	// (0x00038336) popup_call2_audio_out_window_t4_ParamLimits

0x2c43,	// (0x00038336) popup_call2_audio_out_window_t4

0x2c59,	// (0x0003834c) popup_call2_audio_out_window_t5_ParamLimits

0x2c59,	// (0x0003834c) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x00044b7b) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x00044b7b) popup_call2_audio_out_window_t

0x2cbd,	// (0x000383b0) bg_popup_call2_in_pane_ParamLimits

0x2cbd,	// (0x000383b0) bg_popup_call2_in_pane

0x2d19,	// (0x0003840c) popup_call2_audio_in_window_g1_ParamLimits

0x2d19,	// (0x0003840c) popup_call2_audio_in_window_g1

0x2d51,	// (0x00038444) popup_call2_audio_in_window_g2_ParamLimits

0x2d51,	// (0x00038444) popup_call2_audio_in_window_g2

0x2d89,	// (0x0003847c) popup_call2_audio_in_window_g3_ParamLimits

0x2d89,	// (0x0003847c) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x00044b88) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x00044b88) popup_call2_audio_in_window_g

0x2de1,	// (0x000384d4) popup_call2_audio_in_window_t1_ParamLimits

0x2de1,	// (0x000384d4) popup_call2_audio_in_window_t1

0x2e61,	// (0x00038554) popup_call2_audio_in_window_t2_ParamLimits

0x2e61,	// (0x00038554) popup_call2_audio_in_window_t2

0x2ee1,	// (0x000385d4) popup_call2_audio_in_window_t3_ParamLimits

0x2ee1,	// (0x000385d4) popup_call2_audio_in_window_t3

0x2efb,	// (0x000385ee) popup_call2_audio_in_window_t4_ParamLimits

0x2efb,	// (0x000385ee) popup_call2_audio_in_window_t4

0x2f0d,	// (0x00038600) popup_call2_audio_in_window_t5_ParamLimits

0x2f0d,	// (0x00038600) popup_call2_audio_in_window_t5

0x2f22,	// (0x00038615) popup_call2_audio_in_window_t6_ParamLimits

0x2f22,	// (0x00038615) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x00044b91) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x00044b91) popup_call2_audio_in_window_t

0x10ad,	// (0x000367a0) bg_popup_call2_in_pane_g1

0x3041,	// (0x00038734) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x00044bf9) popup_cale_lunar_info_window_t

0x10b5,	// (0x000367a8) bg_popup_call2_rect_pane_ParamLimits

0x10b5,	// (0x000367a8) bg_popup_call2_rect_pane

0x0e5a,	// (0x0003654d) call2_cli_visual_graphic_pane

0x0e5a,	// (0x0003654d) call2_cli_visual_text_pane

0x857e,	// (0x0003dc71) smil_status_volume_pane_g3

0x0002,

0x10cd,	// (0x000367c0) call2_cli_visual_graphic_pane_g1

0x10cd,	// (0x000367c0) call2_cli_visual_graphic_pane_g2

0x10cd,	// (0x000367c0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x00044b9e) call2_cli_visual_graphic_pane_g

0x2f37,	// (0x0003862a) bg_popup_call2_rect_pane_g1

0x12ba,	// (0x000369ad) bg_popup_call2_rect_pane_g2

0x2f3f,	// (0x00038632) bg_popup_call2_rect_pane_g3

0x2f47,	// (0x0003863a) bg_popup_call2_rect_pane_g4

0x2f4f,	// (0x00038642) bg_popup_call2_rect_pane_g5

0x2f57,	// (0x0003864a) bg_popup_call2_rect_pane_g6

0x2f5f,	// (0x00038652) bg_popup_call2_rect_pane_g7

0x2f67,	// (0x0003865a) bg_popup_call2_rect_pane_g8

0x2f6f,	// (0x00038662) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x00044ba5) bg_popup_call2_rect_pane_g

0x2f77,	// (0x0003866a) bg_popup_call2_bubble_pane_g1

0x2f7f,	// (0x00038672) bg_popup_call2_bubble_pane_g2

0x2f87,	// (0x0003867a) bg_popup_call2_bubble_pane_g3

0x2f8f,	// (0x00038682) bg_popup_call2_bubble_pane_g4

0x2f97,	// (0x0003868a) bg_popup_call2_bubble_pane_g5

0x2f9f,	// (0x00038692) bg_popup_call2_bubble_pane_g6

0x2fa7,	// (0x0003869a) bg_popup_call2_bubble_pane_g7

0x2faf,	// (0x000386a2) bg_popup_call2_bubble_pane_g8

0x2fb7,	// (0x000386aa) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00044bb8) bg_popup_call2_bubble_pane_g

0x5e3a,	// (0x0003b52d) aid_cale_week_size_cell_pane

0x10b5,	// (0x000367a8) aid_cams_cif_uncrop_pane_ParamLimits

0x10b5,	// (0x000367a8) aid_cams_cif_uncrop_pane

0x1130,	// (0x00036823) aid_cams_size_cell_ParamLimits

0x1130,	// (0x00036823) aid_cams_size_cell

0x1130,	// (0x00036823) grid_cams_pane_ParamLimits

0x1130,	// (0x00036823) linegrid_cams_pane_ParamLimits

0x64f9,	// (0x0003bbec) call_video_pane_t1

0x651a,	// (0x0003bc0d) call_video_pane_t2

0x0001,

0xf1dd,	// (0x000448d0) call_video_pane_t

0x6a61,	// (0x0003c154) aid_cale_month_size_cell_pane_ParamLimits

0x6a61,	// (0x0003c154) aid_cale_month_size_cell_pane

0xf54a,	// (0x00044c3d) smil_status_volume_pane_g

0x858b,	// (0x0003dc7e) volume_smil_pane_ParamLimits

0x585c,	// (0x0003af4f) aid_popup2_width_pane

0x5d39,	// (0x0003b42c) cell_qdial_pane_g4_ParamLimits

0x5d39,	// (0x0003b42c) cell_qdial_pane_g4

0x7911,	// (0x0003d004) aid_blid_cardinal_pane_ParamLimits

0x7921,	// (0x0003d014) aid_blid_destination_pane_ParamLimits

0x7921,	// (0x0003d014) aid_blid_destination_pane

0x10b5,	// (0x000367a8) bg_popup_call_poc_act_pane_ParamLimits

0x10b5,	// (0x000367a8) bg_popup_call_poc_act_pane

0x10b5,	// (0x000367a8) bg_popup_call_poc_inact_pane_ParamLimits

0x10b5,	// (0x000367a8) bg_popup_call_poc_inact_pane

0x2fbf,	// (0x000386b2) bg_popup_call_poc_act_pane_g1

0x2fc7,	// (0x000386ba) bg_popup_call_poc_act_pane_g2

0x2fcf,	// (0x000386c2) bg_popup_call_poc_act_pane_g3

0x2f8f,	// (0x00038682) bg_popup_call_poc_act_pane_g4

0x2f97,	// (0x0003868a) bg_popup_call_poc_act_pane_g5

0x2fd7,	// (0x000386ca) bg_popup_call_poc_act_pane_g6

0x2fa7,	// (0x0003869a) bg_popup_call_poc_act_pane_g7

0x2fdf,	// (0x000386d2) bg_popup_call_poc_act_pane_g8

0x0e5a,	// (0x0003654d) main_usb_pane

0x83e4,	// (0x0003dad7) popup_cale_lunar_info_window

0x6843,	// (0x0003bf36) im_reading_pane_t1_ParamLimits

0x1474,	// (0x00036b67) list_im_pane_ParamLimits

0x1485,	// (0x00036b78) scroll_pane_cp07_ParamLimits

0x0e5a,	// (0x0003654d) grid_highlight_pane_cp012

0x10b5,	// (0x000367a8) mup_scale_pane_ParamLimits

0x114c,	// (0x0003683f) main_usb_pane_g1_ParamLimits

0x114c,	// (0x0003683f) main_usb_pane_g1

0x114c,	// (0x0003683f) main_usb_pane_g2_ParamLimits

0x114c,	// (0x0003683f) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x00044be2) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x00044be2) main_usb_pane_g

0x119a,	// (0x0003688d) main_usb_pane_t1_ParamLimits

0x119a,	// (0x0003688d) main_usb_pane_t1

0x119a,	// (0x0003688d) main_usb_pane_t2_ParamLimits

0x119a,	// (0x0003688d) main_usb_pane_t2

0x119a,	// (0x0003688d) main_usb_pane_t3_ParamLimits

0x119a,	// (0x0003688d) main_usb_pane_t3

0x119a,	// (0x0003688d) main_usb_pane_t4_ParamLimits

0x119a,	// (0x0003688d) main_usb_pane_t4

0x119a,	// (0x0003688d) main_usb_pane_t5_ParamLimits

0x119a,	// (0x0003688d) main_usb_pane_t5

0x119a,	// (0x0003688d) main_usb_pane_t6_ParamLimits

0x119a,	// (0x0003688d) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x00044be7) main_usb_pane_t_ParamLimits

0x78b7,	// (0x0003cfaa) aid_text_placing

0x78c3,	// (0x0003cfb6) main_location2_pane_t1_ParamLimits

0x78d7,	// (0x0003cfca) main_location2_pane_t2_ParamLimits

0x78eb,	// (0x0003cfde) main_location2_pane_t3_ParamLimits

0x78ff,	// (0x0003cff2) main_location2_pane_t4_ParamLimits

0x78ff,	// (0x0003cff2) main_location2_pane_t4

0xf31e,	// (0x00044a11) main_location2_pane_t_ParamLimits

0x10f1,	// (0x000367e4) find_pinb_pane_g2_ParamLimits

0x10f1,	// (0x000367e4) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00044788) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00044788) find_pinb_pane_g

0x10fd,	// (0x000367f0) find_pinb_pane_t1_ParamLimits

0x110f,	// (0x00036802) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0004478d) find_pinb_pane_t_ParamLimits

0x0e5a,	// (0x0003654d) main_call3_pane

0x7004,	// (0x0003c6f7) cale_month_day_heading_pane_t1_ParamLimits

0x708a,	// (0x0003c77d) cale_month_day_heading_pane_t2_ParamLimits

0x7103,	// (0x0003c7f6) cale_month_day_heading_pane_t3_ParamLimits

0x717c,	// (0x0003c86f) cale_month_day_heading_pane_t4_ParamLimits

0x71f5,	// (0x0003c8e8) cale_month_day_heading_pane_t5_ParamLimits

0x726e,	// (0x0003c961) cale_month_day_heading_pane_t6_ParamLimits

0x72e7,	// (0x0003c9da) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00044908) cale_month_day_heading_pane_t_ParamLimits

0x16cf,	// (0x00036dc2) smil_status_volume_pane

0x7d7c,	// (0x0003d46f) postcard_address_pane_ParamLimits

0x7d7c,	// (0x0003d46f) postcard_address_pane

0x7d88,	// (0x0003d47b) postcard_message_pane_ParamLimits

0x7d88,	// (0x0003d47b) postcard_message_pane

0x81b7,	// (0x0003d8aa) call2_cli_visual_pane_t1_ParamLimits

0x81b7,	// (0x0003d8aa) call2_cli_visual_pane_t1

0x3156,	// (0x00038849) postcard_message_pane_t1_ParamLimits

0x3156,	// (0x00038849) postcard_message_pane_t1

0x313e,	// (0x00038831) postcard_address_pane_t1_ParamLimits

0x313e,	// (0x00038831) postcard_address_pane_t1

0x86bc,	// (0x0003ddaf) popup_call3_audio_in_window_ParamLimits

0x86bc,	// (0x0003ddaf) popup_call3_audio_in_window

0x85a0,	// (0x0003dc93) bg_popup_call3_in_pane_ParamLimits

0x85a0,	// (0x0003dc93) bg_popup_call3_in_pane

0x8602,	// (0x0003dcf5) popup_call3_audio_in_window_g1_ParamLimits

0x8602,	// (0x0003dcf5) popup_call3_audio_in_window_g1

0x861a,	// (0x0003dd0d) popup_call3_audio_in_window_g2_ParamLimits

0x861a,	// (0x0003dd0d) popup_call3_audio_in_window_g2

0x8632,	// (0x0003dd25) popup_call3_audio_in_window_g3_ParamLimits

0x8632,	// (0x0003dd25) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x00044c44) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x00044c44) popup_call3_audio_in_window_g

0x865a,	// (0x0003dd4d) popup_call3_audio_in_window_t1_ParamLimits

0x865a,	// (0x0003dd4d) popup_call3_audio_in_window_t1

0x8682,	// (0x0003dd75) popup_call3_audio_in_window_t2_ParamLimits

0x8682,	// (0x0003dd75) popup_call3_audio_in_window_t2

0x86aa,	// (0x0003dd9d) popup_call3_audio_in_window_t3_ParamLimits

0x86aa,	// (0x0003dd9d) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x00044c4d) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x00044c4d) popup_call3_audio_in_window_t

0x13b3,	// (0x00036aa6) bg_popup_call3_rect_pane

0x2f37,	// (0x0003862a) bg_popup_call3_rect_pane_g1

0x12ba,	// (0x000369ad) bg_popup_call3_rect_pane_g2

0x2f3f,	// (0x00038632) bg_popup_call3_rect_pane_g3

0x2f47,	// (0x0003863a) bg_popup_call3_rect_pane_g4

0x2f4f,	// (0x00038642) bg_popup_call3_rect_pane_g5

0x2f57,	// (0x0003864a) bg_popup_call3_rect_pane_g6

0x2f5f,	// (0x00038652) bg_popup_call3_rect_pane_g7

0x0a3d,	// (0x00036130) mup_visualizer_osc_pane

0x0a3d,	// (0x00036130) mup_visualizer_spec_pane

0x85c0,	// (0x0003dcb3) call3_video_qcif_pane_ParamLimits

0x85c0,	// (0x0003dcb3) call3_video_qcif_pane

0x85d2,	// (0x0003dcc5) call3_video_qcif_uncrop_pane_ParamLimits

0x85d2,	// (0x0003dcc5) call3_video_qcif_uncrop_pane

0x85e0,	// (0x0003dcd3) call3_video_subqcif_pane_ParamLimits

0x85e0,	// (0x0003dcd3) call3_video_subqcif_pane

0x85f2,	// (0x0003dce5) call3_video_subqcif_uncrop_pane_ParamLimits

0x85f2,	// (0x0003dce5) call3_video_subqcif_uncrop_pane

0x864a,	// (0x0003dd3d) popup_call3_audio_in_window_g4_ParamLimits

0x864a,	// (0x0003dd3d) popup_call3_audio_in_window_g4

0x0a3d,	// (0x00036130) mup_spec_half_pane

0x0a3d,	// (0x00036130) mup_spec_half_pane_cp

0x0a3d,	// (0x00036130) mup_osc_middle_pane

0x117c,	// (0x0003686f) mup_visualizer_osc_pane_g1

0x30f1,	// (0x000387e4) mup_spec_bar_pane_ParamLimits

0x30f1,	// (0x000387e4) mup_spec_bar_pane

0x117c,	// (0x0003686f) mup_spec_bar_pane_g1

0x117c,	// (0x0003686f) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000447a2) mup_spec_bar_pane_g

0x5e3a,	// (0x0003b52d) aid_cale_week_size_cell_pane_ParamLimits

0x5e4f,	// (0x0003b542) bg_cale_heading_pane_ParamLimits

0x1315,	// (0x00036a08) bg_cale_pane_cp01_ParamLimits

0x5e6f,	// (0x0003b562) cale_week_corner_pane_ParamLimits

0x5e89,	// (0x0003b57c) cale_week_day_heading_pane_ParamLimits

0x5ea9,	// (0x0003b59c) cale_week_scroll_pane_g1_ParamLimits

0x5ec4,	// (0x0003b5b7) cale_week_scroll_pane_g2_ParamLimits

0x5ed7,	// (0x0003b5ca) cale_week_scroll_pane_g3_ParamLimits

0x5eea,	// (0x0003b5dd) cale_week_scroll_pane_g4_ParamLimits

0x5efd,	// (0x0003b5f0) cale_week_scroll_pane_g5_ParamLimits

0x5f10,	// (0x0003b603) cale_week_scroll_pane_g6_ParamLimits

0x5f23,	// (0x0003b616) cale_week_scroll_pane_g7_ParamLimits

0x5f38,	// (0x0003b62b) cale_week_scroll_pane_g8_ParamLimits

0x5f4d,	// (0x0003b640) cale_week_scroll_pane_g9_ParamLimits

0x5f60,	// (0x0003b653) cale_week_scroll_pane_g10_ParamLimits

0x5f73,	// (0x0003b666) cale_week_scroll_pane_g11_ParamLimits

0x5f86,	// (0x0003b679) cale_week_scroll_pane_g12_ParamLimits

0x5f9d,	// (0x0003b690) cale_week_scroll_pane_g13_ParamLimits

0x5fb8,	// (0x0003b6ab) cale_week_scroll_pane_g14_ParamLimits

0x5fd3,	// (0x0003b6c6) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00044819) cale_week_scroll_pane_g_ParamLimits

0x6003,	// (0x0003b6f6) cale_week_time_pane_ParamLimits

0x6018,	// (0x0003b70b) grid_cale_week_pane_ParamLimits

0x1332,	// (0x00036a25) listscroll_cale_week_pane_t1

0x1344,	// (0x00036a37) scroll_pane_cp08_ParamLimits

0x6ad5,	// (0x0003c1c8) cale_month_corner_pane_ParamLimits

0x16a5,	// (0x00036d98) cale_month_pane_t1

0x6f87,	// (0x0003c67a) cale_month_week_pane_ParamLimits

0x26b8,	// (0x00037dab) popup_call_status_window_g1_ParamLimits

0x770e,	// (0x0003ce01) popup_call_status_window_g2_ParamLimits

0x771a,	// (0x0003ce0d) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00044998) popup_call_status_window_g_ParamLimits

0x1a75,	// (0x00037168) aid_call2_pane

0x4b2a,	// (0x0003a21d) msg_header_pane_g1

0x7d7c,	// (0x0003d46f) postcard_address2_pane_ParamLimits

0x7d7c,	// (0x0003d46f) postcard_address2_pane

0x7d88,	// (0x0003d47b) postcard_message2_pane_ParamLimits

0x7d88,	// (0x0003d47b) postcard_message2_pane

0x8550,	// (0x0003dc43) message2_row_pane_ParamLimits

0x8550,	// (0x0003dc43) message2_row_pane

0x856b,	// (0x0003dc5e) address2_row_pane_ParamLimits

0x856b,	// (0x0003dc5e) address2_row_pane

0x30be,	// (0x000387b1) postcard_message2_row_pane_g1

0x30c6,	// (0x000387b9) postcard_message2_row_pane_t1

0x30be,	// (0x000387b1) address2_row_pane_g1

0x30c6,	// (0x000387b9) address2_row_pane_t1

0x629e,	// (0x0003b991) aid_size_cell_vorec

0x0e5a,	// (0x0003654d) main_rss_pane

0x30d4,	// (0x000387c7) rss_list_single_pane_ParamLimits

0x30d4,	// (0x000387c7) rss_list_single_pane

0x30e2,	// (0x000387d5) rss_list_single_pane_t1

0x30e2,	// (0x000387d5) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x00044c38) rss_list_single_pane_t

0x0e5a,	// (0x0003654d) main_camera2_pane

0x0e5a,	// (0x0003654d) main_video2_pane

0x1130,	// (0x00036823) cams_zoom_pane_cp2_ParamLimits

0x1130,	// (0x00036823) cams_zoom_pane_cp2

0x1130,	// (0x00036823) image2_vga_pane_ParamLimits

0x1130,	// (0x00036823) image2_vga_pane

0x114c,	// (0x0003683f) main_camera2_pane_g1_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g1

0x114c,	// (0x0003683f) main_camera2_pane_g2_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g2

0x114c,	// (0x0003683f) main_camera2_pane_g3_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g3

0x114c,	// (0x0003683f) main_camera2_pane_g4_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g4

0x114c,	// (0x0003683f) main_camera2_pane_g5_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g5

0x114c,	// (0x0003683f) main_camera2_pane_g6_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g6

0x114c,	// (0x0003683f) main_camera2_pane_g7_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g7

0x114c,	// (0x0003683f) main_camera2_pane_g8_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g8

0x0008,

0xf561,	// (0x00044c54) main_camera2_pane_g_ParamLimits

0xf561,	// (0x00044c54) main_camera2_pane_g

0x119a,	// (0x0003688d) main_camera2_pane_t1_ParamLimits

0x119a,	// (0x0003688d) main_camera2_pane_t1

0x119a,	// (0x0003688d) main_camera2_pane_t2_ParamLimits

0x119a,	// (0x0003688d) main_camera2_pane_t2

0x119a,	// (0x0003688d) main_camera2_pane_t3_ParamLimits

0x119a,	// (0x0003688d) main_camera2_pane_t3

0x119a,	// (0x0003688d) main_camera2_pane_t4_ParamLimits

0x119a,	// (0x0003688d) main_camera2_pane_t4

0x0006,

0xf574,	// (0x00044c67) main_camera2_pane_t_ParamLimits

0xf574,	// (0x00044c67) main_camera2_pane_t

0x1ebe,	// (0x000375b1) cams_zoom_pane_cp4_ParamLimits

0x1ebe,	// (0x000375b1) cams_zoom_pane_cp4

0x10d7,	// (0x000367ca) image2_cif_pane_ParamLimits

0x10d7,	// (0x000367ca) image2_cif_pane

0x1130,	// (0x00036823) image2_subqcif_pane_ParamLimits

0x1130,	// (0x00036823) image2_subqcif_pane

0x1e9c,	// (0x0003758f) main_video2_pane_g1_ParamLimits

0x1e9c,	// (0x0003758f) main_video2_pane_g1

0x1e9c,	// (0x0003758f) main_video2_pane_g2_ParamLimits

0x1e9c,	// (0x0003758f) main_video2_pane_g2

0x1e9c,	// (0x0003758f) main_video2_pane_g3_ParamLimits

0x1e9c,	// (0x0003758f) main_video2_pane_g3

0x1e9c,	// (0x0003758f) main_video2_pane_g4_ParamLimits

0x1e9c,	// (0x0003758f) main_video2_pane_g4

0x1e9c,	// (0x0003758f) main_video2_pane_g5_ParamLimits

0x1e9c,	// (0x0003758f) main_video2_pane_g5

0x1e9c,	// (0x0003758f) main_video2_pane_g6_ParamLimits

0x1e9c,	// (0x0003758f) main_video2_pane_g6

0x0005,

0xf583,	// (0x00044c76) main_video2_pane_g_ParamLimits

0xf583,	// (0x00044c76) main_video2_pane_g

0x1eaa,	// (0x0003759d) main_video2_pane_t1_ParamLimits

0x1eaa,	// (0x0003759d) main_video2_pane_t1

0x1eaa,	// (0x0003759d) main_video2_pane_t2_ParamLimits

0x1eaa,	// (0x0003759d) main_video2_pane_t2

0x1eaa,	// (0x0003759d) main_video2_pane_t3_ParamLimits

0x1eaa,	// (0x0003759d) main_video2_pane_t3

0x0002,

0xf590,	// (0x00044c83) main_video2_pane_t_ParamLimits

0xf590,	// (0x00044c83) main_video2_pane_t

0x8270,	// (0x0003d963) call_muted_g2

0x0001,

0xf537,	// (0x00044c2a) call_muted_g

0x0e5a,	// (0x0003654d) main_mup2_pane

0x115a,	// (0x0003684d) main_mup2_pane_g1_ParamLimits

0x115a,	// (0x0003684d) main_mup2_pane_g1

0x115a,	// (0x0003684d) main_mup2_pane_g2_ParamLimits

0x115a,	// (0x0003684d) main_mup2_pane_g2

0x117c,	// (0x0003686f) main_mup_pane_g13_cp1

0x0a3d,	// (0x00036130) mup_volume_pane_cp1

0x115a,	// (0x0003684d) main_mup2_pane_g4_ParamLimits

0x115a,	// (0x0003684d) main_mup2_pane_g4

0x115a,	// (0x0003684d) main_mup2_pane_g5_ParamLimits

0x115a,	// (0x0003684d) main_mup2_pane_g5

0x115a,	// (0x0003684d) main_mup2_pane_g6_ParamLimits

0x115a,	// (0x0003684d) main_mup2_pane_g6

0x115a,	// (0x0003684d) main_mup2_pane_g7_ParamLimits

0x115a,	// (0x0003684d) main_mup2_pane_g7

0x0006,

0xf597,	// (0x00044c8a) main_mup2_pane_g_ParamLimits

0xf597,	// (0x00044c8a) main_mup2_pane_g

0x1168,	// (0x0003685b) main_mup2_pane_t1_ParamLimits

0x1168,	// (0x0003685b) main_mup2_pane_t1

0x1168,	// (0x0003685b) main_mup2_pane_t2_ParamLimits

0x1168,	// (0x0003685b) main_mup2_pane_t2

0x1168,	// (0x0003685b) main_mup2_pane_t3_ParamLimits

0x1168,	// (0x0003685b) main_mup2_pane_t3

0x1168,	// (0x0003685b) main_mup2_pane_t4_ParamLimits

0x1168,	// (0x0003685b) main_mup2_pane_t4

0x1168,	// (0x0003685b) main_mup2_pane_t5_ParamLimits

0x1168,	// (0x0003685b) main_mup2_pane_t5

0x1168,	// (0x0003685b) main_mup2_pane_t6_ParamLimits

0x1168,	// (0x0003685b) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x00044c99) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x00044c99) main_mup2_pane_t

0x32b1,	// (0x000389a4) mup2_visualizer_pane_ParamLimits

0x32b1,	// (0x000389a4) mup2_visualizer_pane

0x32b1,	// (0x000389a4) mup_progress_pane_cp_ParamLimits

0x32b1,	// (0x000389a4) mup_progress_pane_cp

0x3172,	// (0x00038865) mup_volume_pane_cp_ParamLimits

0x3172,	// (0x00038865) mup_volume_pane_cp

0x113e,	// (0x00036831) mup2_visualizer_pane_g1_ParamLimits

0x113e,	// (0x00036831) mup2_visualizer_pane_g1

0x114c,	// (0x0003683f) mup2_visualizer_pane_g2_ParamLimits

0x114c,	// (0x0003683f) mup2_visualizer_pane_g2

0x114c,	// (0x0003683f) mup2_visualizer_pane_g3_ParamLimits

0x114c,	// (0x0003683f) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00044792) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00044792) mup2_visualizer_pane_g

0x0a3d,	// (0x00036130) aid_size_cell_fmradio

0x8386,	// (0x0003da79) aid_height_parent_landcape

0x1503,	// (0x00036bf6) wml_content_pane_cp

0x150b,	// (0x00036bfe) wml_tabs_pane

0x1514,	// (0x00036c07) popup_wml_miniature_window

0x151c,	// (0x00036c0f) scroll_pane_cp021

0x1530,	// (0x00036c23) wml_content_pane_comp8

0x0e5a,	// (0x0003654d) bg_popup_sub_pane_cp05

0x3188,	// (0x0003887b) popup_wml_miniature_window_g1

0x3190,	// (0x00038883) wml_miniature_view_pane

0x86d9,	// (0x0003ddcc) aid_size_wml_view

0x86e1,	// (0x0003ddd4) wml_miniature_view_pane_g1

0x86ea,	// (0x0003dddd) wml_miniature_view_pane_g2

0x86f3,	// (0x0003dde6) wml_miniature_view_pane_g3

0x86fb,	// (0x0003ddee) wml_miniature_view_pane_g4

0x8703,	// (0x0003ddf6) wml_miniature_view_pane_g5

0x870b,	// (0x0003ddfe) wml_miniature_view_pane_g6

0x8713,	// (0x0003de06) wml_miniature_view_pane_g7

0x871b,	// (0x0003de0e) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x00044ca6) wml_miniature_view_pane_g

0x3198,	// (0x0003888b) background_graphic_ParamLimits

0x3198,	// (0x0003888b) background_graphic

0x31a4,	// (0x00038897) wml_tabs_2_pane

0x31ad,	// (0x000388a0) wml_tabs_3_pane_ParamLimits

0x31ad,	// (0x000388a0) wml_tabs_3_pane

0x31bf,	// (0x000388b2) wml_tabs_4_pane_ParamLimits

0x31bf,	// (0x000388b2) wml_tabs_4_pane

0x31d5,	// (0x000388c8) wml_tabs_5_pane_ParamLimits

0x31d5,	// (0x000388c8) wml_tabs_5_pane

0x31ef,	// (0x000388e2) wml_tabs_pane_g2_ParamLimits

0x31ef,	// (0x000388e2) wml_tabs_pane_g2

0x3204,	// (0x000388f7) wml_tabs_pane_g3_ParamLimits

0x3204,	// (0x000388f7) wml_tabs_pane_g3

0x3219,	// (0x0003890c) wml_tabs_2_active_pane_ParamLimits

0x3219,	// (0x0003890c) wml_tabs_2_active_pane

0x3219,	// (0x0003890c) wml_tabs_2_passive_pane_ParamLimits

0x3219,	// (0x0003890c) wml_tabs_2_passive_pane

0x8723,	// (0x0003de16) wml_tabs_3_active_pane_cp_ParamLimits

0x8723,	// (0x0003de16) wml_tabs_3_active_pane_cp

0x8734,	// (0x0003de27) wml_tabs_3_passive_pane_ParamLimits

0x8734,	// (0x0003de27) wml_tabs_3_passive_pane

0x8745,	// (0x0003de38) wml_tabs_3_passive_pane_cp_ParamLimits

0x8745,	// (0x0003de38) wml_tabs_3_passive_pane_cp

0x8756,	// (0x0003de49) tabs_4_active_pane

0x875e,	// (0x0003de51) tabs_4_passive_pane

0x8766,	// (0x0003de59) tabs_4_passive_pane_cp

0x876e,	// (0x0003de61) tabs_4_passive_pane_cp2

0x81e4,	// (0x0003d8d7) aid_height_text

0x32b1,	// (0x000389a4) mup_volume_cont_pane_ParamLimits

0x32b1,	// (0x000389a4) mup_volume_cont_pane

0x0a3d,	// (0x00036130) aid_size_cell_pinb

0x0a3d,	// (0x00036130) aid_size_list_pinb

0x32b1,	// (0x000389a4) mup2_volume_cont_pane_ParamLimits

0x32b1,	// (0x000389a4) mup2_volume_cont_pane

0x8776,	// (0x0003de69) mup2_volume_cont_pane_g1_ParamLimits

0x8776,	// (0x0003de69) mup2_volume_cont_pane_g1

0x5868,	// (0x0003af5b) aid_size_cell_touch_ParamLimits

0x5868,	// (0x0003af5b) aid_size_cell_touch

0x5a73,	// (0x0003b166) touch_pane_ParamLimits

0x5a73,	// (0x0003b166) touch_pane

0x0a3d,	// (0x00036130) main_rss2_pane

0x3230,	// (0x00038923) listscroll_rss2_pane

0x3239,	// (0x0003892c) rss2_navigation_pane

0x3241,	// (0x00038934) list_rss2_pane

0x1ba4,	// (0x00037297) scroll_pane_cp22

0x3249,	// (0x0003893c) rss2_navigation_pane_g1

0x3252,	// (0x00038945) rss2_navigation_pane_g2

0x325a,	// (0x0003894d) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x00044cb7) rss2_navigation_pane_g

0x3262,	// (0x00038955) rss2_navigation_pane_t1

0x878c,	// (0x0003de7f) rss2_list_single_pane_ParamLimits

0x878c,	// (0x0003de7f) rss2_list_single_pane

0x3270,	// (0x00038963) rss2_list_single_pane_t2

0x327e,	// (0x00038971) rss2_list_single_pane_t3_ParamLimits

0x327e,	// (0x00038971) rss2_list_single_pane_t3

0x329b,	// (0x0003898e) rss2_list_single_pane_t4

0x7583,	// (0x0003cc76) smil_status_pane_g1

0x10d7,	// (0x000367ca) main_image2_pane_ParamLimits

0x10d7,	// (0x000367ca) main_image2_pane

0x114c,	// (0x0003683f) main_camera2_pane_g9_ParamLimits

0x114c,	// (0x0003683f) main_camera2_pane_g9

0x119a,	// (0x0003688d) main_camera2_pane_t5_ParamLimits

0x119a,	// (0x0003688d) main_camera2_pane_t5

0x34d9,	// (0x00038bcc) main_camera2_pane_t6_ParamLimits

0x34d9,	// (0x00038bcc) main_camera2_pane_t6

0x87bd,	// (0x0003deb0) main_image2_pane_g1_ParamLimits

0x87bd,	// (0x0003deb0) main_image2_pane_g1

0x7f1c,	// (0x0003d60f) smil2_video_pane_ParamLimits

0x7f1c,	// (0x0003d60f) smil2_video_pane

0x49df,	// (0x0003a0d2) aid_zoom_text_primary_cp

0x5a1c,	// (0x0003b10f) popup_preview_fixed_window

0x146c,	// (0x00036b5f) im_reading_pane_g1

0x86cb,	// (0x0003ddbe) cams2_bc_adjust_pane_cp_ParamLimits

0x86cb,	// (0x0003ddbe) cams2_bc_adjust_pane_cp

0x1130,	// (0x00036823) cams2_bc_adjust_pane_ParamLimits

0x1130,	// (0x00036823) cams2_bc_adjust_pane

0x117c,	// (0x0003686f) cams2_bc_adjust_pane_g1

0x0a3d,	// (0x00036130) cams2_slider_pane

0x117c,	// (0x0003686f) cams2_slider_pane_g1

0x117c,	// (0x0003686f) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x00044cbe) cams2_slider_pane_g

0x5b41,	// (0x0003b234) calc_display_pane_ParamLimits

0x5b5f,	// (0x0003b252) calc_paper_pane_ParamLimits

0x5b7b,	// (0x0003b26e) grid_calc_pane_ParamLimits

0x777c,	// (0x0003ce6f) popup_clock_digital_window_t1_ParamLimits

0x2074,	// (0x00037767) main_image_pane_t1

0x5b27,	// (0x0003b21a) aid_size_cell_calc_ParamLimits

0x5b27,	// (0x0003b21a) aid_size_cell_calc

0x83c0,	// (0x0003dab3) popup_blid_sat_info2_window_ParamLimits

0x83c0,	// (0x0003dab3) popup_blid_sat_info2_window

0x32a9,	// (0x0003899c) aid_size_cell_blid

0x32b1,	// (0x000389a4) bg_popup_window_pane_cp07

0x32d4,	// (0x000389c7) grid_popup_blid_pane

0x32de,	// (0x000389d1) heading_pane_cp05_ParamLimits

0x32de,	// (0x000389d1) heading_pane_cp05

0x33a8,	// (0x00038a9b) cell_popup_blid_pane_ParamLimits

0x33a8,	// (0x00038a9b) cell_popup_blid_pane

0x33cc,	// (0x00038abf) cell_popup_blid_pane_g1

0x33d4,	// (0x00038ac7) cell_popup_blid_pane_t1

0x32b1,	// (0x000389a4) mup2_indicator_pane_ParamLimits

0x32b1,	// (0x000389a4) mup2_indicator_pane

0x0a3d,	// (0x00036130) mup2_visualizer_osc_pane

0x3172,	// (0x00038865) mup2_visualizer_spec_pane_ParamLimits

0x3172,	// (0x00038865) mup2_visualizer_spec_pane

0x0a3d,	// (0x00036130) mup2_spec_half_pane

0x0a3d,	// (0x00036130) mup2_spec_half_pane_cp

0x33e2,	// (0x00038ad5) mup2_spec_bar_pane_ParamLimits

0x33e2,	// (0x00038ad5) mup2_spec_bar_pane

0x117c,	// (0x0003686f) mup2_spec_bar_pane_g1

0x3401,	// (0x00038af4) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x00044ce4) mup2_spec_bar_pane_g

0x0a3d,	// (0x00036130) mup2_osc_middle_pane

0x117c,	// (0x0003686f) mup2_visualizer_osc_pane_g1

0x0a67,	// (0x0003615a) popup_number_entry_window_t1_ParamLimits

0x0a7a,	// (0x0003616d) popup_number_entry_window_t2_ParamLimits

0x0a8c,	// (0x0003617f) popup_number_entry_window_t3_ParamLimits

0x5aca,	// (0x0003b1bd) popup_number_entry_window_t5_ParamLimits

0x5aca,	// (0x0003b1bd) popup_number_entry_window_t5

0xf040,	// (0x00044733) popup_number_entry_window_t_ParamLimits

0x0a9e,	// (0x00036191) text_title_cp2_ParamLimits

0x7c44,	// (0x0003d337) aid_hotspot_pointer_text2_pane

0x7cde,	// (0x0003d3d1) main_viewer_pane_g9_ParamLimits

0x7cde,	// (0x0003d3d1) main_viewer_pane_g9

0x16a5,	// (0x00036d98) cale_month_pane_t1_ParamLimits

0x16e2,	// (0x00036dd5) bg_cale_pane_ParamLimits

0x16fa,	// (0x00036ded) list_cale_pane_ParamLimits

0x170b,	// (0x00036dfe) listscroll_cale_day_pane_t1

0x171d,	// (0x00036e10) scroll_pane_cp09_ParamLimits

0x79ff,	// (0x0003d0f2) main_mup_eq_pane_t1_ParamLimits

0x79ff,	// (0x0003d0f2) main_mup_eq_pane_t1

0x7a19,	// (0x0003d10c) main_mup_eq_pane_t2_ParamLimits

0x7a19,	// (0x0003d10c) main_mup_eq_pane_t2

0x7a33,	// (0x0003d126) main_mup_eq_pane_t3_ParamLimits

0x7a33,	// (0x0003d126) main_mup_eq_pane_t3

0x7a4b,	// (0x0003d13e) main_mup_eq_pane_t4_ParamLimits

0x7a4b,	// (0x0003d13e) main_mup_eq_pane_t4

0x7a63,	// (0x0003d156) main_mup_eq_pane_t5_ParamLimits

0x7a63,	// (0x0003d156) main_mup_eq_pane_t5

0x7a7b,	// (0x0003d16e) main_mup_eq_pane_t6_ParamLimits

0x7a7b,	// (0x0003d16e) main_mup_eq_pane_t6

0x7a8f,	// (0x0003d182) main_mup_eq_pane_t7_ParamLimits

0x7a8f,	// (0x0003d182) main_mup_eq_pane_t7

0x7aa3,	// (0x0003d196) main_mup_eq_pane_t8_ParamLimits

0x7aa3,	// (0x0003d196) main_mup_eq_pane_t8

0x7ab9,	// (0x0003d1ac) main_mup_eq_pane_t9_ParamLimits

0x7ab9,	// (0x0003d1ac) main_mup_eq_pane_t9

0x7ad1,	// (0x0003d1c4) main_mup_eq_pane_t10_ParamLimits

0x7ad1,	// (0x0003d1c4) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x00044a92) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x00044a92) main_mup_eq_pane_t

0x7b8e,	// (0x0003d281) mup_equalizer_pane_cp5_ParamLimits

0x7ba4,	// (0x0003d297) mup_equalizer_pane_cp6_ParamLimits

0x7bbc,	// (0x0003d2af) mup_equalizer_pane_cp7_ParamLimits

0x0a3d,	// (0x00036130) main_gallery_pane

0x3110,	// (0x00038803) smil2_volume_pane

0x312b,	// (0x0003881e) smil_status_volume_pane_g1_ParamLimits

0x3118,	// (0x0003880b) smil_status_volume_pane_g2_ParamLimits

0x857e,	// (0x0003dc71) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x00044c3d) smil_status_volume_pane_g_ParamLimits

0x32b1,	// (0x000389a4) bg_popup_window_pane_cp07_ParamLimits

0x32bf,	// (0x000389b2) blid_firmament_pane

0x1130,	// (0x00036823) aid_size_cell_gallery_ParamLimits

0x1130,	// (0x00036823) aid_size_cell_gallery

0x1130,	// (0x00036823) grid_gallery_pane_ParamLimits

0x1130,	// (0x00036823) grid_gallery_pane

0x1ebe,	// (0x000375b1) cell_gallery_pane_ParamLimits

0x1ebe,	// (0x000375b1) cell_gallery_pane

0x10d7,	// (0x000367ca) bg_cell_gallery_focus_pane_ParamLimits

0x10d7,	// (0x000367ca) bg_cell_gallery_focus_pane

0x113e,	// (0x00036831) cell_gallery_pane_g1_ParamLimits

0x113e,	// (0x00036831) cell_gallery_pane_g1

0x113e,	// (0x00036831) cell_gallery_pane_g2_ParamLimits

0x113e,	// (0x00036831) cell_gallery_pane_g2

0x113e,	// (0x00036831) cell_gallery_pane_g3_ParamLimits

0x113e,	// (0x00036831) cell_gallery_pane_g3

0x114c,	// (0x0003683f) cell_gallery_pane_g4_ParamLimits

0x114c,	// (0x0003683f) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x00044ce9) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x00044ce9) cell_gallery_pane_g

0x340b,	// (0x00038afe) bg_cell_gallery_focus_pane_g1

0x3413,	// (0x00038b06) bg_cell_gallery_focus_pane_g2

0x341b,	// (0x00038b0e) bg_cell_gallery_focus_pane_g3

0x3423,	// (0x00038b16) bg_cell_gallery_focus_pane_g4

0x342b,	// (0x00038b1e) bg_cell_gallery_focus_pane_g5

0x3433,	// (0x00038b26) bg_cell_gallery_focus_pane_g6

0x343b,	// (0x00038b2e) bg_cell_gallery_focus_pane_g7

0x3443,	// (0x00038b36) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x00044cf2) bg_cell_gallery_focus_pane_g

0x344b,	// (0x00038b3e) aid_firma_cardinal

0x345f,	// (0x00038b52) blid_firmament_pane_t1

0x3476,	// (0x00038b69) blid_firmament_pane_t2

0x348d,	// (0x00038b80) blid_firmament_pane_t3

0x34a4,	// (0x00038b97) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x00044d03) blid_firmament_pane_t

0x34bb,	// (0x00038bae) blid_sat_info_pane

0x117c,	// (0x0003686f) blid_sat_info_pane_g1

0x117c,	// (0x0003686f) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000447a2) blid_sat_info_pane_g

0x34ed,	// (0x00038be0) blid_sat_info_pane_t1

0x34fb,	// (0x00038bee) smil2_volume_content_pane

0x3504,	// (0x00038bf7) smil2_volume_pane_g1

0x1251,	// (0x00036944) smil2_volume_content_pane_g1

0x350c,	// (0x00038bff) smil2_volume_content_pane_g2

0x3515,	// (0x00038c08) smil2_volume_content_pane_g3

0x351e,	// (0x00038c11) smil2_volume_content_pane_g4

0x3527,	// (0x00038c1a) smil2_volume_content_pane_g5

0x3530,	// (0x00038c23) smil2_volume_content_pane_g6

0x3539,	// (0x00038c2c) smil2_volume_content_pane_g7

0x3542,	// (0x00038c35) smil2_volume_content_pane_g8

0x354b,	// (0x00038c3e) smil2_volume_content_pane_g9

0x3554,	// (0x00038c47) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x00044d0c) smil2_volume_content_pane_g

0x6099,	// (0x0003b78c) cale_week_day_heading_pane_t1_ParamLimits

0x60b4,	// (0x0003b7a7) cale_week_day_heading_pane_t2_ParamLimits

0x60cf,	// (0x0003b7c2) cale_week_day_heading_pane_t3_ParamLimits

0x60ea,	// (0x0003b7dd) cale_week_day_heading_pane_t4_ParamLimits

0x6105,	// (0x0003b7f8) cale_week_day_heading_pane_t5_ParamLimits

0x6120,	// (0x0003b813) cale_week_day_heading_pane_t6_ParamLimits

0x613b,	// (0x0003b82e) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0004483a) cale_week_day_heading_pane_t_ParamLimits

0x1361,	// (0x00036a54) bg_cale_side_pane_ParamLimits

0x6156,	// (0x0003b849) cale_week_time_pane_t1_ParamLimits

0x6170,	// (0x0003b863) cale_week_time_pane_t2_ParamLimits

0x618a,	// (0x0003b87d) cale_week_time_pane_t3_ParamLimits

0x61a4,	// (0x0003b897) cale_week_time_pane_t4_ParamLimits

0x61be,	// (0x0003b8b1) cale_week_time_pane_t5_ParamLimits

0x61d8,	// (0x0003b8cb) cale_week_time_pane_t6_ParamLimits

0x61f6,	// (0x0003b8e9) cale_week_time_pane_t7_ParamLimits

0x6218,	// (0x0003b90b) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00044849) cale_week_time_pane_t_ParamLimits

0x623c,	// (0x0003b92f) cell_cale_week_pane_g2_ParamLimits

0x1361,	// (0x00036a54) bg_cale_side_pane_cp01_ParamLimits

0x7378,	// (0x0003ca6b) cale_month_week_pane_t1_ParamLimits

0x7391,	// (0x0003ca84) cale_month_week_pane_t2_ParamLimits

0x73aa,	// (0x0003ca9d) cale_month_week_pane_t3_ParamLimits

0x73c3,	// (0x0003cab6) cale_month_week_pane_t4_ParamLimits

0x73dc,	// (0x0003cacf) cale_month_week_pane_t5_ParamLimits

0x73fd,	// (0x0003caf0) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00044917) cale_month_week_pane_t_ParamLimits

0x7540,	// (0x0003cc33) cell_cale_month_pane_g1_ParamLimits

0x0a3d,	// (0x00036130) main_cale_event_viewer_pane

0x0a3d,	// (0x00036130) listscroll_cale_event_viewer_pane

0x355d,	// (0x00038c50) list_cale_ev_pane

0x3565,	// (0x00038c58) scroll_pane_cp023

0x3571,	// (0x00038c64) field_cale_ev_pane_ParamLimits

0x3571,	// (0x00038c64) field_cale_ev_pane

0x358f,	// (0x00038c82) field_cale_ev_content_pane_ParamLimits

0x358f,	// (0x00038c82) field_cale_ev_content_pane

0x359b,	// (0x00038c8e) field_cale_ev_pane_g1_ParamLimits

0x359b,	// (0x00038c8e) field_cale_ev_pane_g1

0x35a7,	// (0x00038c9a) field_cale_ev_pane_g2_ParamLimits

0x35a7,	// (0x00038c9a) field_cale_ev_pane_g2

0x35bf,	// (0x00038cb2) field_cale_ev_pane_g3_ParamLimits

0x35bf,	// (0x00038cb2) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x00044d21) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x00044d21) field_cale_ev_pane_g

0x35d7,	// (0x00038cca) field_cale_ev_pane_t1_ParamLimits

0x35d7,	// (0x00038cca) field_cale_ev_pane_t1

0x12d4,	// (0x000369c7) field_cale_ev_content_pane_t1_ParamLimits

0x12d4,	// (0x000369c7) field_cale_ev_content_pane_t1

0x1f61,	// (0x00037654) bg_button_pane_cp01

0x5e2a,	// (0x0003b51d) listscroll_cale_week_pane_ParamLimits

0x130c,	// (0x000369ff) popup_toolbar_window_cp01

0x1332,	// (0x00036a25) listscroll_cale_week_pane_t1_ParamLimits

0x5e2a,	// (0x0003b51d) listscroll_cale_day_pane_ParamLimits

0x130c,	// (0x000369ff) popup_toolbar_window_cp02

0x170b,	// (0x00036dfe) listscroll_cale_day_pane_t1_ParamLimits

0x5e2a,	// (0x0003b51d) main_cale_month_pane_ParamLimits

0x84c7,	// (0x0003dbba) popup_toolbar_window_cp03_ParamLimits

0x84c7,	// (0x0003dbba) popup_toolbar_window_cp03

0x7e32,	// (0x0003d525) main_image_pane_g2_ParamLimits

0x7e32,	// (0x0003d525) main_image_pane_g2

0x7e3e,	// (0x0003d531) main_image_pane_g3_ParamLimits

0x7e3e,	// (0x0003d531) main_image_pane_g3

0x0002,

0xf431,	// (0x00044b24) main_image_pane_g_ParamLimits

0xf431,	// (0x00044b24) main_image_pane_g

0x2074,	// (0x00037767) main_image_pane_t1_ParamLimits

0x7e4a,	// (0x0003d53d) main_image_pane_t2_ParamLimits

0x7e4a,	// (0x0003d53d) main_image_pane_t2

0x7e5c,	// (0x0003d54f) main_image_pane_t3_ParamLimits

0x7e5c,	// (0x0003d54f) main_image_pane_t3

0x7e6e,	// (0x0003d561) main_image_pane_t4_ParamLimits

0x7e6e,	// (0x0003d561) main_image_pane_t4

0x0003,

0xf438,	// (0x00044b2b) main_image_pane_t_ParamLimits

0xf438,	// (0x00044b2b) main_image_pane_t

0x7e80,	// (0x0003d573) popup_image_details_window_cp01

0x7e8a,	// (0x0003d57d) popup_toobar_trans_pane_cp01_ParamLimits

0x7e8a,	// (0x0003d57d) popup_toobar_trans_pane_cp01

0x8417,	// (0x0003db0a) popup_image_details_window_ParamLimits

0x8417,	// (0x0003db0a) popup_image_details_window

0x8425,	// (0x0003db18) popup_image_focus_window

0x1130,	// (0x00036823) camera2_autofocus_pane_ParamLimits

0x1130,	// (0x00036823) camera2_autofocus_pane

0x0a3d,	// (0x00036130) bg_popup_sub_pane_cp06

0x35ee,	// (0x00038ce1) popup_image_focus_window_g1

0x35f6,	// (0x00038ce9) popup_image_focus_window_g2

0x35fe,	// (0x00038cf1) popup_image_focus_window_g3

0x3606,	// (0x00038cf9) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x00044d28) popup_image_focus_window_g

0x360e,	// (0x00038d01) popup_image_focus_window_t1

0x361c,	// (0x00038d0f) popup_image_focus_window_t2

0x362c,	// (0x00038d1f) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x00044d31) popup_image_focus_window_t

0x113e,	// (0x00036831) camera2_autofocus_pane_g1

0x10d7,	// (0x000367ca) bg_tb_trans_pane_cp01

0x363a,	// (0x00038d2d) popup_image_details_window_g1

0x364d,	// (0x00038d40) popup_image_details_window_g2

0x0002,

0xf650,	// (0x00044d43) popup_image_details_window_g

0x3676,	// (0x00038d69) popup_image_details_window_t1

0x3688,	// (0x00038d7b) popup_image_details_window_t2

0x36a1,	// (0x00038d94) popup_image_details_window_t3

0x36b5,	// (0x00038da8) popup_image_details_window_t4

0x36d0,	// (0x00038dc3) popup_image_details_window_t5

0x0004,

0xf657,	// (0x00044d4a) popup_image_details_window_t

0x11c6,	// (0x000368b9) bg_calc_paper_pane_ParamLimits

0x0a3d,	// (0x00036130) grid_highlight_pane_cp013

0x5bb6,	// (0x0003b2a9) list_calc_pane_ParamLimits

0x5bc8,	// (0x0003b2bb) scroll_pane_cp024

0x11da,	// (0x000368cd) bg_calc_display_pane_ParamLimits

0x5bd0,	// (0x0003b2c3) calc_display_pane_t1_ParamLimits

0x5be5,	// (0x0003b2d8) calc_display_pane_t2_ParamLimits

0x5bfa,	// (0x0003b2ed) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x000447ba) calc_display_pane_t_ParamLimits

0x5cd3,	// (0x0003b3c6) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x000447d7) cell_calc_pane_g

0x5cdc,	// (0x0003b3cf) cell_calc_pane_t1

0x122f,	// (0x00036922) grid_highlight_pane_cp02_ParamLimits

0x1245,	// (0x00036938) toolbar_button_pane_cp01_ParamLimits

0x1245,	// (0x00036938) toolbar_button_pane_cp01

0x20b9,	// (0x000377ac) temp_image_control_pane_ParamLimits

0x20b9,	// (0x000377ac) temp_image_control_pane

0x10d7,	// (0x000367ca) main_mp3_pane

0x36ea,	// (0x00038ddd) temp_image_control_pane_g1_ParamLimits

0x36ea,	// (0x00038ddd) temp_image_control_pane_g1

0x36f8,	// (0x00038deb) temp_image_control_pane_g2_ParamLimits

0x36f8,	// (0x00038deb) temp_image_control_pane_g2

0x370a,	// (0x00038dfd) temp_image_control_pane_g3_ParamLimits

0x370a,	// (0x00038dfd) temp_image_control_pane_g3

0x87c9,	// (0x0003debc) temp_image_control_pane_g4_ParamLimits

0x87c9,	// (0x0003debc) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x00044d55) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x00044d55) temp_image_control_pane_g

0x36ea,	// (0x00038ddd) main_mp3_pane_g1

0x87da,	// (0x0003decd) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x00044d5e) main_mp3_pane_g

0x373f,	// (0x00038e32) main_mp3_pane_t1

0x114c,	// (0x0003683f) main_camera_pane_g8_ParamLimits

0x114c,	// (0x0003683f) main_camera_pane_g8

0x63e6,	// (0x0003bad9) main_video_pane_g7_ParamLimits

0x63e6,	// (0x0003bad9) main_video_pane_g7

0x119a,	// (0x0003688d) main_camera2_pane_t7_ParamLimits

0x119a,	// (0x0003688d) main_camera2_pane_t7

0x14c3,	// (0x00036bb6) scroll_pane_cp025_ParamLimits

0x14c3,	// (0x00036bb6) scroll_pane_cp025

0x14d7,	// (0x00036bca) scroll_pane_cp026_ParamLimits

0x14d7,	// (0x00036bca) scroll_pane_cp026

0x14e6,	// (0x00036bd9) wml_content_pane_ParamLimits

0x0a3d,	// (0x00036130) main_touch_calib_pane

0x887e,	// (0x0003df71) main_touch_calib_pane_g1

0x888a,	// (0x0003df7d) main_touch_calib_pane_g2

0x8896,	// (0x0003df89) main_touch_calib_pane_g3

0x88a2,	// (0x0003df95) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x00044d7c) main_touch_calib_pane_g

0x88ae,	// (0x0003dfa1) main_touch_calib_pane_t1

0x88c7,	// (0x0003dfba) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x00044d85) main_touch_calib_pane_t

0x1c80,	// (0x00037373) mup_progress_pane_cp02

0x1cb5,	// (0x000373a8) navi_pane_g1

0x1d70,	// (0x00037463) navi_pane_mp_t3

0x10d7,	// (0x000367ca) main_mp3_pane_ParamLimits

0x8504,	// (0x0003dbf7) navi_pane_ParamLimits

0x36ea,	// (0x00038ddd) main_mp3_pane_g1_ParamLimits

0x87da,	// (0x0003decd) main_mp3_pane_g2_ParamLimits

0x87e6,	// (0x0003ded9) main_mp3_pane_g3_ParamLimits

0x87e6,	// (0x0003ded9) main_mp3_pane_g3

0x87f2,	// (0x0003dee5) main_mp3_pane_g4_ParamLimits

0x87f2,	// (0x0003dee5) main_mp3_pane_g4

0x113e,	// (0x00036831) main_mp3_pane_g5_ParamLimits

0x113e,	// (0x00036831) main_mp3_pane_g5

0x371a,	// (0x00038e0d) main_mp3_pane_g6_ParamLimits

0x371a,	// (0x00038e0d) main_mp3_pane_g6

0x3727,	// (0x00038e1a) main_mp3_pane_g7_ParamLimits

0x3727,	// (0x00038e1a) main_mp3_pane_g7

0x3733,	// (0x00038e26) main_mp3_pane_g8_ParamLimits

0x3733,	// (0x00038e26) main_mp3_pane_g8

0xf66b,	// (0x00044d5e) main_mp3_pane_g_ParamLimits

0x87fe,	// (0x0003def1) main_mp3_pane_t2

0x880e,	// (0x0003df01) main_mp3_pane_t3

0x374d,	// (0x00038e40) main_mp3_pane_t4

0x375b,	// (0x00038e4e) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x00044d6f) main_mp3_pane_t

0x3769,	// (0x00038e5c) mup_progress_pane_cp01

0x49df,	// (0x0003a0d2) aid_zoom_text_secondary2

0x355d,	// (0x00038c50) list_cale_ev2_pane

0x3565,	// (0x00038c58) scroll_pane_cp023_ParamLimits

0x8922,	// (0x0003e015) field_cale_ev2_pane_ParamLimits

0x8922,	// (0x0003e015) field_cale_ev2_pane

0x4bc7,	// (0x0003a2ba) field_cale_ev2_pane_g1_ParamLimits

0x4bc7,	// (0x0003a2ba) field_cale_ev2_pane_g1

0x4bd3,	// (0x0003a2c6) field_cale_ev2_pane_g2_ParamLimits

0x4bd3,	// (0x0003a2c6) field_cale_ev2_pane_g2

0x4beb,	// (0x0003a2de) field_cale_ev2_pane_g3_ParamLimits

0x4beb,	// (0x0003a2de) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x00044d90) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x00044d90) field_cale_ev2_pane_g

0x4c0f,	// (0x0003a302) field_cale_ev2_pane_t1_ParamLimits

0x4c0f,	// (0x0003a302) field_cale_ev2_pane_t1

0x4c26,	// (0x0003a319) field_cale_ev2_pane_t2_ParamLimits

0x4c26,	// (0x0003a319) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x00044d99) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x00044d99) field_cale_ev2_pane_t

0x7d46,	// (0x0003d439) main_postcard_pane_g5_ParamLimits

0x7d46,	// (0x0003d439) main_postcard_pane_g5

0x7d54,	// (0x0003d447) main_postcard_pane_g6_ParamLimits

0x7d54,	// (0x0003d447) main_postcard_pane_g6

0x1130,	// (0x00036823) camera2_autofocus_pane_cp_ParamLimits

0x1130,	// (0x00036823) camera2_autofocus_pane_cp

0x10d7,	// (0x000367ca) main_mup3_pane

0x898a,	// (0x0003e07d) main_mup3_pane_g1_ParamLimits

0x898a,	// (0x0003e07d) main_mup3_pane_g1

0x89ab,	// (0x0003e09e) main_mup3_pane_g2_ParamLimits

0x89ab,	// (0x0003e09e) main_mup3_pane_g2

0x8a23,	// (0x0003e116) main_mup3_pane_g3_ParamLimits

0x8a23,	// (0x0003e116) main_mup3_pane_g3

0x8a66,	// (0x0003e159) main_mup3_pane_g4_ParamLimits

0x8a66,	// (0x0003e159) main_mup3_pane_g4

0x8aa9,	// (0x0003e19c) main_mup3_pane_g5_ParamLimits

0x8aa9,	// (0x0003e19c) main_mup3_pane_g5

0x8aec,	// (0x0003e1df) main_mup3_pane_g6_ParamLimits

0x8aec,	// (0x0003e1df) main_mup3_pane_g6

0x114c,	// (0x0003683f) main_mup3_pane_g7_ParamLimits

0x114c,	// (0x0003683f) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x00044da9) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x00044da9) main_mup3_pane_g

0x8b62,	// (0x0003e255) main_mup3_pane_t1_ParamLimits

0x8b62,	// (0x0003e255) main_mup3_pane_t1

0x8bd1,	// (0x0003e2c4) main_mup3_pane_t2_ParamLimits

0x8bd1,	// (0x0003e2c4) main_mup3_pane_t2

0x8c9a,	// (0x0003e38d) main_mup3_pane_t4_ParamLimits

0x8c9a,	// (0x0003e38d) main_mup3_pane_t4

0x8ce8,	// (0x0003e3db) main_mup3_pane_t5_ParamLimits

0x8ce8,	// (0x0003e3db) main_mup3_pane_t5

0x8d98,	// (0x0003e48b) main_mup3_pane_t6_ParamLimits

0x8d98,	// (0x0003e48b) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x00044dba) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x00044dba) main_mup3_pane_t

0x8e44,	// (0x0003e537) mup3_progress_pane_ParamLimits

0x8e44,	// (0x0003e537) mup3_progress_pane

0x8ec2,	// (0x0003e5b5) popup_mup3_control_window_ParamLimits

0x8ec2,	// (0x0003e5b5) popup_mup3_control_window

0x377d,	// (0x00038e70) popup_mup3_text_window

0x8edb,	// (0x0003e5ce) mup3_progress_pane_t1

0x8efa,	// (0x0003e5ed) mup3_progress_pane_t2

0x3785,	// (0x00038e78) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x00044dc7) mup3_progress_pane_t

0x37a2,	// (0x00038e95) mup_progress_pane_cp03

0x0a3d,	// (0x00036130) bg_tb_trans_pane_cp04

0x8f19,	// (0x0003e60c) mup3_volume_pane

0x8f21,	// (0x0003e614) popup_mup3_control_window_g1

0x8f2a,	// (0x0003e61d) mup3_volume_pane_g1

0x8f33,	// (0x0003e626) mup3_volume_pane_g2

0x8f3c,	// (0x0003e62f) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x00044dce) mup3_volume_pane_g

0x0a3d,	// (0x00036130) bg_tb_trans_pane_cp03

0x37b2,	// (0x00038ea5) popup_mup3_text_window_g1

0x37ba,	// (0x00038ead) popup_mup3_text_window_t1

0x1222,	// (0x00036915) list_calc_item_pane_g1_ParamLimits

0x3227,	// (0x0003891a) mup_volume_pane_cp_g1

0x88e0,	// (0x0003dfd3) main_touch_calib_pane_t3

0x88f6,	// (0x0003dfe9) main_touch_calib_pane_t4

0x890c,	// (0x0003dfff) main_touch_calib_pane_t5

0x5854,	// (0x0003af47) aid_cell_size_toolbar2

0x585c,	// (0x0003af4f) aid_popup3_width_pane

0x49d7,	// (0x0003a0ca) aid_zoom_text_msg_primary

0x62e8,	// (0x0003b9db) vorec_t7

0x11e6,	// (0x000368d9) bg_calc_paper_pane_g1_ParamLimits

0x11fe,	// (0x000368f1) bg_calc_paper_pane_g2_ParamLimits

0x11f2,	// (0x000368e5) bg_calc_paper_pane_g3_ParamLimits

0x1216,	// (0x00036909) bg_calc_paper_pane_g4_ParamLimits

0x120a,	// (0x000368fd) bg_calc_paper_pane_g5_ParamLimits

0x5c39,	// (0x0003b32c) bg_calc_paper_pane_g6_ParamLimits

0x5c4a,	// (0x0003b33d) bg_calc_paper_pane_g7_ParamLimits

0x5c5b,	// (0x0003b34e) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000447c1) bg_calc_paper_pane_g_ParamLimits

0x5c6c,	// (0x0003b35f) calc_bg_paper_pane_g9_ParamLimits

0x1130,	// (0x00036823) image_qvga_pane_ParamLimits

0x1130,	// (0x00036823) image_qvga_pane

0x10b5,	// (0x000367a8) bg_popup_sub_pane_cp04_ParamLimits

0x1ff0,	// (0x000376e3) popup_mup_playback_window_g1_ParamLimits

0x1ffc,	// (0x000376ef) popup_mup_playback_window_t1_ParamLimits

0x2011,	// (0x00037704) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x00044b1f) popup_mup_playback_window_t_ParamLimits

0x113e,	// (0x00036831) main_mup2_pane_g3_ParamLimits

0x113e,	// (0x00036831) main_mup2_pane_g3

0x65a7,	// (0x0003bc9a) popup_toolbar_window_cp04

0x2382,	// (0x00037a75) popup_call2_audio_second_window_g3_ParamLimits

0x2382,	// (0x00037a75) popup_call2_audio_second_window_g3

0x279a,	// (0x00037e8d) popup_call2_audio_first_window_g4_ParamLimits

0x279a,	// (0x00037e8d) popup_call2_audio_first_window_g4

0x2dc1,	// (0x000384b4) popup_call2_audio_in_window_g4_ParamLimits

0x2dc1,	// (0x000384b4) popup_call2_audio_in_window_g4

0x7e25,	// (0x0003d518) aid_area_sk_bg_cut_ParamLimits

0x7e25,	// (0x0003d518) aid_area_sk_bg_cut

0x2026,	// (0x00037719) aid_area_sk_bg_cut_2_ParamLimits

0x2026,	// (0x00037719) aid_area_sk_bg_cut_2

0x0a3d,	// (0x00036130) aid_placing_details_win

0x0a3d,	// (0x00036130) aid_placing_details_win_2

0x113e,	// (0x00036831) camera2_autofocus_pane_g1_ParamLimits

0x5a0d,	// (0x0003b100) popup_fixed_preview_cale_window_ParamLimits

0x5a0d,	// (0x0003b100) popup_fixed_preview_cale_window

0x1e00,	// (0x000374f3) navi_slider_pane_g3

0x1df7,	// (0x000374ea) navi_slider_pane_g4

0x1dee,	// (0x000374e1) navi_slider_pane_g5

0x1e00,	// (0x000374f3) navi_slider_pane_g6

0x79d3,	// (0x0003d0c6) navi_slider_pane_g7

0x1f2e,	// (0x00037621) mup_scale_pane_g3

0x1f37,	// (0x0003762a) mup_scale_pane_g4

0x1f40,	// (0x00037633) mup_scale_pane_g5

0x7bd4,	// (0x0003d2c7) mup_scale_pane_g6

0x7bdd,	// (0x0003d2d0) mup_scale_pane_g7

0x117c,	// (0x0003686f) cams2_slider_pane_g3

0x117c,	// (0x0003686f) cams2_slider_pane_g4

0x117c,	// (0x0003686f) cams2_slider_pane_g5

0x117c,	// (0x0003686f) cams2_slider_pane_g6

0x117c,	// (0x0003686f) cams2_slider_pane_g7

0x117c,	// (0x0003686f) camera2_autofocus_pane_cp_g1

0x3097,	// (0x0003878a) bg_popup_preview_window_pane_cp02_ParamLimits

0x3097,	// (0x0003878a) bg_popup_preview_window_pane_cp02

0x37c8,	// (0x00038ebb) list_fp_cale_pane_ParamLimits

0x37c8,	// (0x00038ebb) list_fp_cale_pane

0x37d4,	// (0x00038ec7) popup_fixed_preview_cale_window_t1_ParamLimits

0x37d4,	// (0x00038ec7) popup_fixed_preview_cale_window_t1

0x8f45,	// (0x0003e638) popup_fixed_preview_cale_window_t2_ParamLimits

0x8f45,	// (0x0003e638) popup_fixed_preview_cale_window_t2

0x8f5a,	// (0x0003e64d) popup_fixed_preview_cale_window_t3_ParamLimits

0x8f5a,	// (0x0003e64d) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x00044dd5) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x00044dd5) popup_fixed_preview_cale_window_t

0x8f6f,	// (0x0003e662) list_single_fp_cale_pane_ParamLimits

0x8f6f,	// (0x0003e662) list_single_fp_cale_pane

0x37f2,	// (0x00038ee5) list_single_fp_cale_pane_g1_ParamLimits

0x37f2,	// (0x00038ee5) list_single_fp_cale_pane_g1

0x37fe,	// (0x00038ef1) list_single_fp_cale_pane_g2_ParamLimits

0x37fe,	// (0x00038ef1) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x00044ddc) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x00044ddc) list_single_fp_cale_pane_g

0x3817,	// (0x00038f0a) list_single_fp_cale_pane_t1_ParamLimits

0x3817,	// (0x00038f0a) list_single_fp_cale_pane_t1

0x3829,	// (0x00038f1c) list_single_fp_cale_pane_t2_ParamLimits

0x3829,	// (0x00038f1c) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x00044de3) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x00044de3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0a3d,	// (0x00036130) main_dialer_pane

0x0a3d,	// (0x00036130) aid_cell_size_keypad

0x0a3d,	// (0x00036130) dialer_ne_pane

0x0a3d,	// (0x00036130) grid_dialer_command_1_pane

0x0a3d,	// (0x00036130) grid_dialer_command_2_pane

0x0a3d,	// (0x00036130) grid_dialer_keypad_pane

0x32b1,	// (0x000389a4) bg_popup_call_pane_cp06_ParamLimits

0x32b1,	// (0x000389a4) bg_popup_call_pane_cp06

0x32b1,	// (0x000389a4) dialer_ne_clear_pane_ParamLimits

0x32b1,	// (0x000389a4) dialer_ne_clear_pane

0x117c,	// (0x0003686f) dialer_ne_pane_g1

0x119a,	// (0x0003688d) dialer_ne_pane_t1_ParamLimits

0x119a,	// (0x0003688d) dialer_ne_pane_t1

0x3a6d,	// (0x00039160) dialer_ne_pane_t2_ParamLimits

0x3a6d,	// (0x00039160) dialer_ne_pane_t2

0x8f82,	// (0x0003e675) dialer_ne_pane_t3_ParamLimits

0x8f82,	// (0x0003e675) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x00044de8) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x00044de8) dialer_ne_pane_t

0x8f82,	// (0x0003e675) dialer_ne_pane_t3_copy1_ParamLimits

0x8f82,	// (0x0003e675) dialer_ne_pane_t3_copy1

0x385c,	// (0x00038f4f) cell_dialer_keypad_pane_ParamLimits

0x385c,	// (0x00038f4f) cell_dialer_keypad_pane

0x10d7,	// (0x000367ca) cell_dialer_command_1_pane_ParamLimits

0x10d7,	// (0x000367ca) cell_dialer_command_1_pane

0x3873,	// (0x00038f66) cell_dialer_command_2_pane_ParamLimits

0x3873,	// (0x00038f66) cell_dialer_command_2_pane

0x10d7,	// (0x000367ca) bg_button_pane_cp02_ParamLimits

0x10d7,	// (0x000367ca) bg_button_pane_cp02

0x113e,	// (0x00036831) cell_dialer_keypad_pane_g1_ParamLimits

0x113e,	// (0x00036831) cell_dialer_keypad_pane_g1

0x10d7,	// (0x000367ca) bg_button_pane_cp03_ParamLimits

0x10d7,	// (0x000367ca) bg_button_pane_cp03

0x113e,	// (0x00036831) cell_dialer_command_1_pane_g1_ParamLimits

0x113e,	// (0x00036831) cell_dialer_command_1_pane_g1

0x0a3d,	// (0x00036130) bg_button_pane_cp04

0x117c,	// (0x0003686f) cell_dialer_command_2_pane_g1

0x0a3d,	// (0x00036130) bg_button_pane_cp06

0x117c,	// (0x0003686f) dialer_ne_clear_pane_g1

0x1cc1,	// (0x000373b4) navi_pane_g2

0x1cef,	// (0x000373e2) navi_pane_g3

0x0002,

0xf334,	// (0x00044a27) navi_pane_g

0x1d7e,	// (0x00037471) navi_pane_mv_g2

0x1da5,	// (0x00037498) navi_pane_mv_g5

0x799e,	// (0x0003d091) navi_pane_mv_t1

0x11da,	// (0x000368cd) main_clock2_pane

0x1130,	// (0x00036823) main_clock2_list_pane_ParamLimits

0x1130,	// (0x00036823) main_clock2_list_pane

0x8ff8,	// (0x0003e6eb) main_clock2_pane_t1_ParamLimits

0x8ff8,	// (0x0003e6eb) main_clock2_pane_t1

0x9026,	// (0x0003e719) main_clock2_pane_t2_ParamLimits

0x9026,	// (0x0003e719) main_clock2_pane_t2

0x0004,

0xf701,	// (0x00044df4) main_clock2_pane_t_ParamLimits

0xf701,	// (0x00044df4) main_clock2_pane_t

0x908b,	// (0x0003e77e) popup_clock_analogue_window_cp03_ParamLimits

0x908b,	// (0x0003e77e) popup_clock_analogue_window_cp03

0x90a9,	// (0x0003e79c) popup_clock_digital_window_cp02_ParamLimits

0x90a9,	// (0x0003e79c) popup_clock_digital_window_cp02

0x911e,	// (0x0003e811) main_clock2_list_single_pane_ParamLimits

0x911e,	// (0x0003e811) main_clock2_list_single_pane

0x13b3,	// (0x00036aa6) list_highlight_pane_cp05

0x38ba,	// (0x00038fad) main_clock2_list_single_pane_t1

0x65a7,	// (0x0003bc9a) popup_toolbar_window_cp04_ParamLimits

0x114c,	// (0x0003683f) camera2_autofocus_pane_g2_ParamLimits

0x114c,	// (0x0003683f) camera2_autofocus_pane_g2

0x114c,	// (0x0003683f) camera2_autofocus_pane_g3_ParamLimits

0x114c,	// (0x0003683f) camera2_autofocus_pane_g3

0x114c,	// (0x0003683f) camera2_autofocus_pane_g4_ParamLimits

0x114c,	// (0x0003683f) camera2_autofocus_pane_g4

0x114c,	// (0x0003683f) camera2_autofocus_pane_g5_ParamLimits

0x114c,	// (0x0003683f) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x00044d38) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x00044d38) camera2_autofocus_pane_g

0x894b,	// (0x0003e03e) camera2_autofocus_pane_cp_g2

0x8953,	// (0x0003e046) camera2_autofocus_pane_cp_g3

0x895b,	// (0x0003e04e) camera2_autofocus_pane_cp_g4

0x8963,	// (0x0003e056) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x00044d9e) camera2_autofocus_pane_cp_g

0x0a3d,	// (0x00036130) popup_dialer_spcha_window

0x0a3d,	// (0x00036130) bg_popup_sub_pane_cp07

0x0a3d,	// (0x00036130) list_spcha_pane

0x38c8,	// (0x00038fbb) list_single_spcha_pane_ParamLimits

0x38c8,	// (0x00038fbb) list_single_spcha_pane

0x0a3d,	// (0x00036130) list_highlight_pane_cp06

0x18f6,	// (0x00036fe9) list_single_spcha_pane_t1

0x2b6b,	// (0x0003825e) popup_call2_audio_out_window_g4_ParamLimits

0x2b6b,	// (0x0003825e) popup_call2_audio_out_window_g4

0x0a3d,	// (0x00036130) main_imed2_pane

0x842d,	// (0x0003db20) popup_imed_adjust2_window

0x8440,	// (0x0003db33) popup_imed_trans_window_ParamLimits

0x8440,	// (0x0003db33) popup_imed_trans_window

0x330a,	// (0x000389fd) popup_blid_sat_info2_window_t1

0x3318,	// (0x00038a0b) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x00044ccd) popup_blid_sat_info2_window_t

0x91d3,	// (0x0003e8c6) aid_size_cell_colour_35

0x91ed,	// (0x0003e8e0) aid_size_cell_colour_112

0x9204,	// (0x0003e8f7) aid_size_cell_effect

0x10d7,	// (0x000367ca) bg_tb_trans_pane_cp02

0x18c3,	// (0x00036fb6) heading_imed_pane

0x921e,	// (0x0003e911) listscroll_imed_pane

0x38da,	// (0x00038fcd) heading_imed_pane_g1

0x38e2,	// (0x00038fd5) heading_imed_pane_t1

0x38f0,	// (0x00038fe3) grid_imed_colour_35_pane_ParamLimits

0x38f0,	// (0x00038fe3) grid_imed_colour_35_pane

0x922a,	// (0x0003e91d) grid_imed_effect_pane

0x3907,	// (0x00038ffa) list_imed_aspect_pane

0x923a,	// (0x0003e92d) scroll_pane_cp027_ParamLimits

0x923a,	// (0x0003e92d) scroll_pane_cp027

0x9246,	// (0x0003e939) cell_imed_effect_pane_ParamLimits

0x9246,	// (0x0003e939) cell_imed_effect_pane

0x390f,	// (0x00039002) cell_imed_colour_pane_ParamLimits

0x390f,	// (0x00039002) cell_imed_colour_pane

0x3951,	// (0x00039044) cell_imed_colour_pane_g1_ParamLimits

0x3951,	// (0x00039044) cell_imed_colour_pane_g1

0x3962,	// (0x00039055) hgihlgiht_grid_pane_cp016_ParamLimits

0x3962,	// (0x00039055) hgihlgiht_grid_pane_cp016

0x925e,	// (0x0003e951) cell_imed_effect_pane_g1

0x9266,	// (0x0003e959) grid_highlight_pane_cp017

0x3973,	// (0x00039066) list_imed_single_pane_ParamLimits

0x3973,	// (0x00039066) list_imed_single_pane

0x0a3d,	// (0x00036130) list_highlight_pane_cp07

0x3988,	// (0x0003907b) list_imed_aspect_pane_comp1_t1

0x1ebe,	// (0x000375b1) bg_tb_trans_pane_cp05

0x39aa,	// (0x0003909d) popup_imed_adjust2_window_g1

0x39d1,	// (0x000390c4) popup_imed_adjust2_window_t1

0x39e9,	// (0x000390dc) slider_imed_adjust_pane

0x39fd,	// (0x000390f0) slider_imed_adjust_pane_g1

0x3a0d,	// (0x00039100) slider_imed_adjust_pane_g2

0x3a1d,	// (0x00039110) slider_imed_adjust_pane_g3

0x3a2e,	// (0x00039121) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x00044e11) slider_imed_adjust_pane_g

0x926f,	// (0x0003e962) aid_size_cell_clipart2

0x927b,	// (0x0003e96e) grid_imed_clipart_pane

0x1f51,	// (0x00037644) scroll_pane_cp031

0x9285,	// (0x0003e978) cell_imed_clipart_pane_ParamLimits

0x9285,	// (0x0003e978) cell_imed_clipart_pane

0x92a7,	// (0x0003e99a) cell_imed_clipart_pane_g1

0x0a3d,	// (0x00036130) grid_highlight_pane_cp014

0x8fda,	// (0x0003e6cd) main_clock2_pane_g1_ParamLimits

0x8fda,	// (0x0003e6cd) main_clock2_pane_g1

0x90c5,	// (0x0003e7b8) aid_call2_pane_cp10

0x90d7,	// (0x0003e7ca) aid_call_pane_cp10

0x1c22,	// (0x00037315) popup_clock_analogue_window_cp10_g1

0x1c22,	// (0x00037315) popup_clock_analogue_window_cp10_g2

0x90e9,	// (0x0003e7dc) popup_clock_analogue_window_cp10_g3

0x90e9,	// (0x0003e7dc) popup_clock_analogue_window_cp10_g4

0x1c22,	// (0x00037315) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x00044dff) popup_clock_analogue_window_cp10_g

0x90ff,	// (0x0003e7f2) popup_clock_analogue_window_cp10_t1

0x9130,	// (0x0003e823) clock_digital_number_pane_cp10_ParamLimits

0x9130,	// (0x0003e823) clock_digital_number_pane_cp10

0x914a,	// (0x0003e83d) clock_digital_number_pane_cp11_ParamLimits

0x914a,	// (0x0003e83d) clock_digital_number_pane_cp11

0x9164,	// (0x0003e857) clock_digital_number_pane_cp12_ParamLimits

0x9164,	// (0x0003e857) clock_digital_number_pane_cp12

0x917e,	// (0x0003e871) clock_digital_number_pane_cp13_ParamLimits

0x917e,	// (0x0003e871) clock_digital_number_pane_cp13

0x9198,	// (0x0003e88b) clock_digital_separator_pane_cp10_ParamLimits

0x9198,	// (0x0003e88b) clock_digital_separator_pane_cp10

0x91b2,	// (0x0003e8a5) popup_clock_digital_window_cp02_t1_ParamLimits

0x91b2,	// (0x0003e8a5) popup_clock_digital_window_cp02_t1

0x10ad,	// (0x000367a0) clock_digital_number_pane_cp10_g1

0x10ad,	// (0x000367a0) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x00044e1a) clock_digital_number_pane_cp10_g

0x10ad,	// (0x000367a0) clock_digital_separator_pane_cp10_g1

0x10ad,	// (0x000367a0) clock_digital_separator_pane_g2_cp10

0x1dad,	// (0x000374a0) navi_pane_vded_g4

0x1db6,	// (0x000374a9) navi_pane_vded_g5

0x1dbf,	// (0x000374b2) navi_pane_vded_t1

0x0a3d,	// (0x00036130) main_vded_pane

0x92b0,	// (0x0003e9a3) main_vded_pane_g1

0x92bc,	// (0x0003e9af) main_vded_pane_g2

0x92c6,	// (0x0003e9b9) main_vded_pane_g3

0x0002,

0xf72c,	// (0x00044e1f) main_vded_pane_g

0x92d0,	// (0x0003e9c3) main_vded_pane_t1

0x92de,	// (0x0003e9d1) main_vded_pane_t2

0x0001,

0xf733,	// (0x00044e26) main_vded_pane_t

0x92ec,	// (0x0003e9df) vded_slider_pane

0x92f6,	// (0x0003e9e9) vded_video_pane

0x3a3f,	// (0x00039132) vded_video_pane_g1

0x9300,	// (0x0003e9f3) vded_video_pane_g2

0x117c,	// (0x0003686f) vded_video_pane_g3

0x0002,

0xf738,	// (0x00044e2b) vded_video_pane_g

0x3a49,	// (0x0003913c) vded_slider_pane_g1

0x3227,	// (0x0003891a) vded_slider_pane_g2

0x3a52,	// (0x00039145) vded_slider_pane_g3

0x3a5b,	// (0x0003914e) vded_slider_pane_g4

0x3a64,	// (0x00039157) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x00044e32) vded_slider_pane_g

0x8eb4,	// (0x0003e5a7) mup3_rocker_pane_ParamLimits

0x8eb4,	// (0x0003e5a7) mup3_rocker_pane

0x9309,	// (0x0003e9fc) mup3_control_keys_pane_g1

0x9311,	// (0x0003ea04) mup3_control_keys_pane_g2

0x9319,	// (0x0003ea0c) mup3_control_keys_pane_g3

0x9321,	// (0x0003ea14) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x00044e3d) mup3_control_keys_pane_g

0x5a35,	// (0x0003b128) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5a35,	// (0x0003b128) popup_toolbar2_fixed_window_cp01

0x8ece,	// (0x0003e5c1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8ece,	// (0x0003e5c1) popup_toolbar2_fixed_window_cp02

0x24f4,	// (0x00037be7) popup_call2_audio_second_window_t4_ParamLimits

0x24f4,	// (0x00037be7) popup_call2_audio_second_window_t4

0x2a30,	// (0x00038123) popup_call2_audio_first_window_t6_ParamLimits

0x2a30,	// (0x00038123) popup_call2_audio_first_window_t6

0x2c6e,	// (0x00038361) popup_call2_audio_out_window_t6_ParamLimits

0x2c6e,	// (0x00038361) popup_call2_audio_out_window_t6

0x0a3d,	// (0x00036130) main_vitu_pane

0x1130,	// (0x00036823) aid_size_cell_itu_ParamLimits

0x1130,	// (0x00036823) aid_size_cell_itu

0x1130,	// (0x00036823) bg_popup_window_pane_cp08_ParamLimits

0x1130,	// (0x00036823) bg_popup_window_pane_cp08

0x1130,	// (0x00036823) field_vitu_entry_pane_ParamLimits

0x1130,	// (0x00036823) field_vitu_entry_pane

0x1130,	// (0x00036823) grid_vitu_function_pane_ParamLimits

0x1130,	// (0x00036823) grid_vitu_function_pane

0x1130,	// (0x00036823) grid_vitu_itu_pane_ParamLimits

0x1130,	// (0x00036823) grid_vitu_itu_pane

0x1130,	// (0x00036823) cell_vitu_itu_pane_ParamLimits

0x1130,	// (0x00036823) cell_vitu_itu_pane

0x1130,	// (0x00036823) cell_vitu_function_pane_ParamLimits

0x1130,	// (0x00036823) cell_vitu_function_pane

0x10d7,	// (0x000367ca) bg_popup_sub_pane_cp08_ParamLimits

0x10d7,	// (0x000367ca) bg_popup_sub_pane_cp08

0x1186,	// (0x00036879) field_vitu_entry_pane_t1_ParamLimits

0x1186,	// (0x00036879) field_vitu_entry_pane_t1

0x3a6d,	// (0x00039160) field_vitu_entry_pane_t2_ParamLimits

0x3a6d,	// (0x00039160) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x00044e46) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x00044e46) field_vitu_entry_pane_t

0x32b1,	// (0x000389a4) bg_button_pane_cp05_ParamLimits

0x32b1,	// (0x000389a4) bg_button_pane_cp05

0x3a8a,	// (0x0003917d) cell_vitu_itu_pane_g1

0x1eaa,	// (0x0003759d) cell_vitu_itu_pane_t1_ParamLimits

0x1eaa,	// (0x0003759d) cell_vitu_itu_pane_t1

0x1eaa,	// (0x0003759d) cell_vitu_itu_pane_t2_ParamLimits

0x1eaa,	// (0x0003759d) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x00044e4b) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x00044e4b) cell_vitu_itu_pane_t

0x0a3d,	// (0x00036130) bg_button_pane_cp07

0x117c,	// (0x0003686f) cell_vitu_function_pane_g1

0x5b9f,	// (0x0003b292) main_calc_pane_g1

0x5890,	// (0x0003af83) aid_visual_content_pane

0x0a3d,	// (0x00036130) main_vradio_pane

0x114c,	// (0x0003683f) main_vradio_pane_g1_ParamLimits

0x114c,	// (0x0003683f) main_vradio_pane_g1

0x114c,	// (0x0003683f) main_vradio_pane_g2_ParamLimits

0x114c,	// (0x0003683f) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x00044be2) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x00044be2) main_vradio_pane_g

0x119a,	// (0x0003688d) main_vradio_pane_t1_ParamLimits

0x119a,	// (0x0003688d) main_vradio_pane_t1

0x119a,	// (0x0003688d) main_vradio_pane_t2_ParamLimits

0x119a,	// (0x0003688d) main_vradio_pane_t2

0x119a,	// (0x0003688d) main_vradio_pane_t3_ParamLimits

0x119a,	// (0x0003688d) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x00044e52) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x00044e52) main_vradio_pane_t

0x1130,	// (0x00036823) vradio_rocker_control_pane_ParamLimits

0x1130,	// (0x00036823) vradio_rocker_control_pane

0x1130,	// (0x00036823) vradio_station_info_pane_ParamLimits

0x1130,	// (0x00036823) vradio_station_info_pane

0x10d7,	// (0x000367ca) vradio_frequency_info_pane_ParamLimits

0x10d7,	// (0x000367ca) vradio_frequency_info_pane

0x117c,	// (0x0003686f) vradio_station_info_pane_g1

0x1eaa,	// (0x0003759d) vradio_station_info_pane_t1_ParamLimits

0x1eaa,	// (0x0003759d) vradio_station_info_pane_t1

0x119a,	// (0x0003688d) vradio_station_info_pane_t2_ParamLimits

0x119a,	// (0x0003688d) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x00044e59) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x00044e59) vradio_station_info_pane_t

0x0a3d,	// (0x00036130) vradio_tuning_pane

0x9331,	// (0x0003ea24) vradio_rocker_control_pane_g1

0x3aa6,	// (0x00039199) vradio_rocker_control_pane_g2

0x9339,	// (0x0003ea2c) vradio_rocker_control_pane_g3

0x9341,	// (0x0003ea34) vradio_rocker_control_pane_g4

0x9349,	// (0x0003ea3c) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x00044e5e) vradio_rocker_control_pane_g

0x117c,	// (0x0003686f) vradio_frequency_info_pane_g1

0x1186,	// (0x00036879) vradio_frequency_info_pane_t1_ParamLimits

0x1186,	// (0x00036879) vradio_frequency_info_pane_t1

0x9351,	// (0x0003ea44) vradio_tuning_pane_g1

0x935e,	// (0x0003ea51) vradio_tuning_pane_t1

0x58d9,	// (0x0003afcc) area_side_right_pane_ParamLimits

0x58d9,	// (0x0003afcc) area_side_right_pane

0x305e,	// (0x00038751) status_small_pane_g1

0x3066,	// (0x00038759) status_small_pane_g2

0x306f,	// (0x00038762) status_small_pane_g3

0x3078,	// (0x0003876b) status_small_pane_g4

0x0003,

0xf53c,	// (0x00044c2f) status_small_pane_g

0x3081,	// (0x00038774) status_small_pane_t1

0x0a3d,	// (0x00036130) main_video3_pane

0x0a3d,	// (0x00036130) cams_zoom_vslider_pane

0x3aae,	// (0x000391a1) image3_wide_pane_ParamLimits

0x3aae,	// (0x000391a1) image3_wide_pane

0x0a3d,	// (0x00036130) image3_wide_small_pane

0x3ac8,	// (0x000391bb) main_video3_pane_g1_ParamLimits

0x3ac8,	// (0x000391bb) main_video3_pane_g1

0x3ac8,	// (0x000391bb) main_video3_pane_g2_ParamLimits

0x3ac8,	// (0x000391bb) main_video3_pane_g2

0x0001,

0xf776,	// (0x00044e69) main_video3_pane_g_ParamLimits

0xf776,	// (0x00044e69) main_video3_pane_g

0x3ae6,	// (0x000391d9) main_video3_pane_t1_ParamLimits

0x3ae6,	// (0x000391d9) main_video3_pane_t1

0x3ae6,	// (0x000391d9) main_video3_pane_t2_ParamLimits

0x3ae6,	// (0x000391d9) main_video3_pane_t2

0x3ae6,	// (0x000391d9) main_video3_pane_t3_ParamLimits

0x3ae6,	// (0x000391d9) main_video3_pane_t3

0x0002,

0xf77b,	// (0x00044e6e) main_video3_pane_t_ParamLimits

0xf77b,	// (0x00044e6e) main_video3_pane_t

0x117c,	// (0x0003686f) cams_zoom_vslider_pane_g1

0x117c,	// (0x0003686f) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000447a2) cams_zoom_vslider_pane_g

0x0a3d,	// (0x00036130) small_slider_vertical_pane

0x117c,	// (0x0003686f) small_slider_vertical_pane_g1

0x117c,	// (0x0003686f) small_slider_vertical_pane_g2

0x3b0d,	// (0x00039200) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x00044e75) small_slider_vertical_pane_g

0x0a3d,	// (0x00036130) main_hwr_training_pane

0x3b16,	// (0x00039209) hwr_training_instruct_pane_ParamLimits

0x3b16,	// (0x00039209) hwr_training_instruct_pane

0x936d,	// (0x0003ea60) hwr_training_navi_pane_ParamLimits

0x936d,	// (0x0003ea60) hwr_training_navi_pane

0x9387,	// (0x0003ea7a) hwr_training_write_pane_ParamLimits

0x9387,	// (0x0003ea7a) hwr_training_write_pane

0x0a3d,	// (0x00036130) bg_frame_shadow_pane

0x3b4d,	// (0x00039240) hwr_training_write_pane_g1

0x3b55,	// (0x00039248) hwr_training_write_pane_g2

0x3b5d,	// (0x00039250) hwr_training_write_pane_g3

0x3b65,	// (0x00039258) hwr_training_write_pane_g4

0x3b6d,	// (0x00039260) hwr_training_write_pane_g5

0x3b75,	// (0x00039268) hwr_training_write_pane_g6

0x3b7d,	// (0x00039270) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x00044e7c) hwr_training_write_pane_g

0x93bf,	// (0x0003eab2) hwr_training_navi_pane_g1_ParamLimits

0x93bf,	// (0x0003eab2) hwr_training_navi_pane_g1

0x93d1,	// (0x0003eac4) hwr_training_navi_pane_g2_ParamLimits

0x93d1,	// (0x0003eac4) hwr_training_navi_pane_g2

0x93e3,	// (0x0003ead6) hwr_training_navi_pane_g3_ParamLimits

0x93e3,	// (0x0003ead6) hwr_training_navi_pane_g3

0x93f3,	// (0x0003eae6) hwr_training_navi_pane_g4_ParamLimits

0x93f3,	// (0x0003eae6) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x00044e8b) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x00044e8b) hwr_training_navi_pane_g

0x940d,	// (0x0003eb00) hwr_training_navi_pane_t1

0x941b,	// (0x0003eb0e) list_single_hwr_training_instruct_pane_ParamLimits

0x941b,	// (0x0003eb0e) list_single_hwr_training_instruct_pane

0x3b85,	// (0x00039278) list_single_hwr_training_instruct_pane_t1

0x340b,	// (0x00038afe) bg_frame_shadow_pane_g1

0x3b94,	// (0x00039287) bg_frame_shadow_pane_g2

0x3b9c,	// (0x0003928f) bg_frame_shadow_pane_g3

0x3ba4,	// (0x00039297) bg_frame_shadow_pane_g4

0x3bac,	// (0x0003929f) bg_frame_shadow_pane_g5

0x3bb4,	// (0x000392a7) bg_frame_shadow_pane_g6

0x3bbc,	// (0x000392af) bg_frame_shadow_pane_g7

0x1292,	// (0x00036985) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x00044e96) bg_frame_shadow_pane_g

0x0a3d,	// (0x00036130) main_video_tele_dialer_pane

0x9440,	// (0x0003eb33) aid_size_cell_video_keypad_ParamLimits

0x9440,	// (0x0003eb33) aid_size_cell_video_keypad

0x9450,	// (0x0003eb43) grid_video_dialer_keypad_pane_ParamLimits

0x9450,	// (0x0003eb43) grid_video_dialer_keypad_pane

0x9484,	// (0x0003eb77) video_down_pane_cp_ParamLimits

0x9484,	// (0x0003eb77) video_down_pane_cp

0x94ae,	// (0x0003eba1) cell_video_dialer_keypad_pane_ParamLimits

0x94ae,	// (0x0003eba1) cell_video_dialer_keypad_pane

0x3bc4,	// (0x000392b7) bg_button_pane_cp08_ParamLimits

0x3bc4,	// (0x000392b7) bg_button_pane_cp08

0x94c3,	// (0x0003ebb6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x94c3,	// (0x0003ebb6) cell_video_dialer_keypad_pane_g1

0x8ea8,	// (0x0003e59b) mup3_rocker2_pane_ParamLimits

0x8ea8,	// (0x0003e59b) mup3_rocker2_pane

0x117c,	// (0x0003686f) mup3_rocker2_pane_g1

0x839d,	// (0x0003da90) main_dialer2_pane

0x0a3d,	// (0x00036130) main_mp4_pane

0x9518,	// (0x0003ec0b) main_mp4_pane_g1_ParamLimits

0x9518,	// (0x0003ec0b) main_mp4_pane_g1

0x953a,	// (0x0003ec2d) main_mp4_pane_g2_ParamLimits

0x953a,	// (0x0003ec2d) main_mp4_pane_g2

0x9558,	// (0x0003ec4b) main_mp4_pane_g3_ParamLimits

0x9558,	// (0x0003ec4b) main_mp4_pane_g3

0x9591,	// (0x0003ec84) main_mp4_pane_g4_ParamLimits

0x9591,	// (0x0003ec84) main_mp4_pane_g4

0x95b9,	// (0x0003ecac) main_mp4_pane_g5_ParamLimits

0x95b9,	// (0x0003ecac) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x00044eb6) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x00044eb6) main_mp4_pane_g

0x9621,	// (0x0003ed14) main_mp4_pane_t1_ParamLimits

0x9621,	// (0x0003ed14) main_mp4_pane_t1

0x9683,	// (0x0003ed76) main_mp4_pane_t2_ParamLimits

0x9683,	// (0x0003ed76) main_mp4_pane_t2

0x96e7,	// (0x0003edda) main_mp4_pane_t3_ParamLimits

0x96e7,	// (0x0003edda) main_mp4_pane_t3

0x9745,	// (0x0003ee38) main_mp4_pane_t4_ParamLimits

0x9745,	// (0x0003ee38) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x00044ec7) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x00044ec7) main_mp4_pane_t

0x97a3,	// (0x0003ee96) mp4_progress_pane_ParamLimits

0x97a3,	// (0x0003ee96) mp4_progress_pane

0x97d7,	// (0x0003eeca) mp4_rocker_pane_ParamLimits

0x97d7,	// (0x0003eeca) mp4_rocker_pane

0xd5b4,	// (0x00042ca7) mp4_progress_pane_t1

0xd5d6,	// (0x00042cc9) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x00044ed0) mp4_progress_pane_t

0xd5f8,	// (0x00042ceb) mup_progress_pane_cp04

0x117c,	// (0x0003686f) mp4_rocker_pane_g1

0x1130,	// (0x00036823) aid_cell_size_keypad2_ParamLimits

0x1130,	// (0x00036823) aid_cell_size_keypad2

0x1130,	// (0x00036823) dialer2_ne_pane_ParamLimits

0x1130,	// (0x00036823) dialer2_ne_pane

0x1130,	// (0x00036823) grid_dialer2_keypad_pane_ParamLimits

0x1130,	// (0x00036823) grid_dialer2_keypad_pane

0x34cb,	// (0x00038bbe) bg_popup_call_pane_cp07_ParamLimits

0x34cb,	// (0x00038bbe) bg_popup_call_pane_cp07

0x97eb,	// (0x0003eede) dialer2_ne_pane_t1_ParamLimits

0x97eb,	// (0x0003eede) dialer2_ne_pane_t1

0x385c,	// (0x00038f4f) cell_dialer2_keypad_pane_ParamLimits

0x385c,	// (0x00038f4f) cell_dialer2_keypad_pane

0x32b1,	// (0x000389a4) bg_button_pane_pane_cp04_ParamLimits

0x32b1,	// (0x000389a4) bg_button_pane_pane_cp04

0x113e,	// (0x00036831) cell_dialer2_keypad_pane_g1_ParamLimits

0x113e,	// (0x00036831) cell_dialer2_keypad_pane_g1

0x6469,	// (0x0003bb5c) aid_placing_vt_set_content_ParamLimits

0x6469,	// (0x0003bb5c) aid_placing_vt_set_content

0x6495,	// (0x0003bb88) aid_placing_vt_set_title_ParamLimits

0x6495,	// (0x0003bb88) aid_placing_vt_set_title

0x0a3d,	// (0x00036130) main_image3_pane

0x9844,	// (0x0003ef37) area_side_right_pane_cp01_ParamLimits

0x9844,	// (0x0003ef37) area_side_right_pane_cp01

0x115a,	// (0x0003684d) main_image3_pane_g1_ParamLimits

0x115a,	// (0x0003684d) main_image3_pane_g1

0x9871,	// (0x0003ef64) main_image3_pane_g2_ParamLimits

0x9871,	// (0x0003ef64) main_image3_pane_g2

0x988a,	// (0x0003ef7d) main_image3_pane_g3_ParamLimits

0x988a,	// (0x0003ef7d) main_image3_pane_g3

0x98a3,	// (0x0003ef96) main_image3_pane_g4_ParamLimits

0x98a3,	// (0x0003ef96) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x00044edf) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x00044edf) main_image3_pane_g

0x98bc,	// (0x0003efaf) main_image3_pane_t1_ParamLimits

0x98bc,	// (0x0003efaf) main_image3_pane_t1

0x98e1,	// (0x0003efd4) main_image3_pane_t2_ParamLimits

0x98e1,	// (0x0003efd4) main_image3_pane_t2

0x9900,	// (0x0003eff3) main_image3_pane_t3_ParamLimits

0x9900,	// (0x0003eff3) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x00044ee8) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x00044ee8) main_image3_pane_t

0x1130,	// (0x00036823) grid_sctrl_middle_pane_cp01_ParamLimits

0x1130,	// (0x00036823) grid_sctrl_middle_pane_cp01

0x9961,	// (0x0003f054) cell_sctrl_middle_pane_cp01_ParamLimits

0x9961,	// (0x0003f054) cell_sctrl_middle_pane_cp01

0x9972,	// (0x0003f065) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9972,	// (0x0003f065) cell_sctrl_middle_pane_cp01_g1

0x0a3d,	// (0x00036130) main_call4_pane

0x997f,	// (0x0003f072) aid_size_button_call4_ParamLimits

0x997f,	// (0x0003f072) aid_size_button_call4

0x99b5,	// (0x0003f0a8) call4_windows_pane_ParamLimits

0x99b5,	// (0x0003f0a8) call4_windows_pane

0x99ca,	// (0x0003f0bd) grid_call4_button_pane_ParamLimits

0x99ca,	// (0x0003f0bd) grid_call4_button_pane

0x99f8,	// (0x0003f0eb) call4_windows_conf_pane

0x9a0f,	// (0x0003f102) popup_call4_audio_first_window_ParamLimits

0x9a0f,	// (0x0003f102) popup_call4_audio_first_window

0x9a5f,	// (0x0003f152) popup_call4_audio_second_window_ParamLimits

0x9a5f,	// (0x0003f152) popup_call4_audio_second_window

0x9a78,	// (0x0003f16b) popup_call4_audio_wait_window_ParamLimits

0x9a78,	// (0x0003f16b) popup_call4_audio_wait_window

0x9a86,	// (0x0003f179) cell_call4_button_pane_ParamLimits

0x9a86,	// (0x0003f179) cell_call4_button_pane

0x9aa9,	// (0x0003f19c) bg_button_pane_cp09_ParamLimits

0x9aa9,	// (0x0003f19c) bg_button_pane_cp09

0x9ab5,	// (0x0003f1a8) cell_call4_button_pane_g1_ParamLimits

0x9ab5,	// (0x0003f1a8) cell_call4_button_pane_g1

0x9ac2,	// (0x0003f1b5) cell_call4_button_pane_t1_ParamLimits

0x9ac2,	// (0x0003f1b5) cell_call4_button_pane_t1

0xd641,	// (0x00042d34) popup_call4_audio_conf_window_ParamLimits

0xd641,	// (0x00042d34) popup_call4_audio_conf_window

0x8edb,	// (0x0003e5ce) mup3_progress_pane_t1_ParamLimits

0x8efa,	// (0x0003e5ed) mup3_progress_pane_t2_ParamLimits

0x3785,	// (0x00038e78) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x00044dc7) mup3_progress_pane_t_ParamLimits

0x37a2,	// (0x00038e95) mup_progress_pane_cp03_ParamLimits

0x9329,	// (0x0003ea1c) mup3_control_keys_pane_g4_copy1

0x97d7,	// (0x0003eeca) mp4_rocker2_pane_ParamLimits

0x97d7,	// (0x0003eeca) mp4_rocker2_pane

0x9b06,	// (0x0003f1f9) mp4_rocker2_pane_g1

0x9b06,	// (0x0003f1f9) mp4_rocker2_pane_g2

0x9b06,	// (0x0003f1f9) mp4_rocker2_pane_g3

0x9b06,	// (0x0003f1f9) mp4_rocker2_pane_g4

0x9b06,	// (0x0003f1f9) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x00044ef1) mp4_rocker2_pane_g

0x0a3d,	// (0x00036130) main_camera4_pane

0x0a3d,	// (0x00036130) main_video4_pane

0x9460,	// (0x0003eb53) main_video_tele_dialer_pane_t1_ParamLimits

0x9460,	// (0x0003eb53) main_video_tele_dialer_pane_t1

0x9472,	// (0x0003eb65) main_video_tele_dialer_pane_t2_ParamLimits

0x9472,	// (0x0003eb65) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x00044ea7) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x00044ea7) main_video_tele_dialer_pane_t

0x9b26,	// (0x0003f219) cam4_autofocus_pane_ParamLimits

0x9b26,	// (0x0003f219) cam4_autofocus_pane

0x9b40,	// (0x0003f233) cam4_image_uncrop_pane_ParamLimits

0x9b40,	// (0x0003f233) cam4_image_uncrop_pane

0x9b57,	// (0x0003f24a) cam4_indicators_pane_ParamLimits

0x9b57,	// (0x0003f24a) cam4_indicators_pane

0x9b73,	// (0x0003f266) main_camera4_pane_g1_ParamLimits

0x9b73,	// (0x0003f266) main_camera4_pane_g1

0x9b7f,	// (0x0003f272) main_camera4_pane_g2_ParamLimits

0x9b7f,	// (0x0003f272) main_camera4_pane_g2

0x9b7f,	// (0x0003f272) main_camera4_pane_g3_ParamLimits

0x9b7f,	// (0x0003f272) main_camera4_pane_g3

0x9b8b,	// (0x0003f27e) main_camera4_pane_g4_ParamLimits

0x9b8b,	// (0x0003f27e) main_camera4_pane_g4

0x9b97,	// (0x0003f28a) main_camera4_pane_g5_ParamLimits

0x9b97,	// (0x0003f28a) main_camera4_pane_g5

0x0005,

0xf809,	// (0x00044efc) main_camera4_pane_g_ParamLimits

0xf809,	// (0x00044efc) main_camera4_pane_g

0x9bb1,	// (0x0003f2a4) main_camera4_pane_t1_ParamLimits

0x9bb1,	// (0x0003f2a4) main_camera4_pane_t1

0x113e,	// (0x00036831) bg_tb_trans_pane_cp06

0x9c01,	// (0x0003f2f4) cam4_indicators_pane_g1

0x9c12,	// (0x0003f305) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x00044f17) cam4_indicators_pane_g

0x9c30,	// (0x0003f323) cam4_indicators_pane_t1

0x9c5a,	// (0x0003f34d) main_video4_pane_g1_ParamLimits

0x9c5a,	// (0x0003f34d) main_video4_pane_g1

0x9c66,	// (0x0003f359) main_video4_pane_g2_ParamLimits

0x9c66,	// (0x0003f359) main_video4_pane_g2

0x9c72,	// (0x0003f365) main_video4_pane_g3_ParamLimits

0x9c72,	// (0x0003f365) main_video4_pane_g3

0x9c7e,	// (0x0003f371) main_video4_pane_g4_ParamLimits

0x9c7e,	// (0x0003f371) main_video4_pane_g4

0x0004,

0xf82b,	// (0x00044f1e) main_video4_pane_g_ParamLimits

0xf82b,	// (0x00044f1e) main_video4_pane_g

0x9c9e,	// (0x0003f391) vid4_indicators_pane_ParamLimits

0x9c9e,	// (0x0003f391) vid4_indicators_pane

0x9cbd,	// (0x0003f3b0) video4_image_uncrop_cif_pane_ParamLimits

0x9cbd,	// (0x0003f3b0) video4_image_uncrop_cif_pane

0x9ccc,	// (0x0003f3bf) video4_image_uncrop_nhd_pane_ParamLimits

0x9ccc,	// (0x0003f3bf) video4_image_uncrop_nhd_pane

0x9b40,	// (0x0003f233) video4_image_uncrop_vga_pane_ParamLimits

0x9b40,	// (0x0003f233) video4_image_uncrop_vga_pane

0x10d7,	// (0x000367ca) bg_tb_trans_pane_cp07

0x9ce3,	// (0x0003f3d6) vid4_indicators_pane_g1

0x9cf7,	// (0x0003f3ea) vid4_indicators_pane_g2

0x9d0b,	// (0x0003f3fe) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x00044f29) vid4_indicators_pane_g

0x9d3a,	// (0x0003f42d) vid4_indicators_pane_t1

0x9d51,	// (0x0003f444) cam4_autofocus_pane_g1

0x9d59,	// (0x0003f44c) cam4_autofocus_pane_g2

0x9d61,	// (0x0003f454) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x00044f34) cam4_autofocus_pane_g

0x9d69,	// (0x0003f45c) cam4_autofocus_pane_g3_copy1

0x9492,	// (0x0003eb85) video_down_pane_cp_t1

0x94a0,	// (0x0003eb93) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x00044eac) video_down_pane_cp_t

0x1130,	// (0x00036823) popup_vitu2_window_ParamLimits

0x1130,	// (0x00036823) popup_vitu2_window

0x9d71,	// (0x0003f464) aid_size_cell2_itu2_ParamLimits

0x9d71,	// (0x0003f464) aid_size_cell2_itu2

0x9d93,	// (0x0003f486) aid_size_cell_itu2_ParamLimits

0x9d93,	// (0x0003f486) aid_size_cell_itu2

0x34cb,	// (0x00038bbe) bg_popup_window_pane_cp09_ParamLimits

0x34cb,	// (0x00038bbe) bg_popup_window_pane_cp09

0x9dd7,	// (0x0003f4ca) field_vitu2_entry_pane_ParamLimits

0x9dd7,	// (0x0003f4ca) field_vitu2_entry_pane

0x9df7,	// (0x0003f4ea) grid_vitu2_function_pane_ParamLimits

0x9df7,	// (0x0003f4ea) grid_vitu2_function_pane

0x9e3b,	// (0x0003f52e) grid_vitu2_itu_pane_ParamLimits

0x9e3b,	// (0x0003f52e) grid_vitu2_itu_pane

0x9eb3,	// (0x0003f5a6) cell_vitu2_itu_pane_ParamLimits

0x9eb3,	// (0x0003f5a6) cell_vitu2_itu_pane

0x9ecc,	// (0x0003f5bf) cell_vitu2_function_pane_ParamLimits

0x9ecc,	// (0x0003f5bf) cell_vitu2_function_pane

0xd655,	// (0x00042d48) bg_popup_call_pane_cp08_ParamLimits

0xd655,	// (0x00042d48) bg_popup_call_pane_cp08

0xd66c,	// (0x00042d5f) field_vitu2_entry_pane_g1

0xd678,	// (0x00042d6b) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x00044f3b) field_vitu2_entry_pane_g

0x4c3b,	// (0x0003a32e) field_vitu2_entry_pane_t1_ParamLimits

0x4c3b,	// (0x0003a32e) field_vitu2_entry_pane_t1

0x4c6f,	// (0x0003a362) field_vitu2_entry_pane_t2_ParamLimits

0x4c6f,	// (0x0003a362) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x00044f42) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x00044f42) field_vitu2_entry_pane_t

0x86cb,	// (0x0003ddbe) bg_button_pane_cp010_ParamLimits

0x86cb,	// (0x0003ddbe) bg_button_pane_cp010

0x9f0d,	// (0x0003f600) cell_vitu2_itu_pane_g1

0x9f33,	// (0x0003f626) cell_vitu2_itu_pane_t1_ParamLimits

0x9f33,	// (0x0003f626) cell_vitu2_itu_pane_t1

0x4c8c,	// (0x0003a37f) cell_vitu2_itu_pane_t2_ParamLimits

0x4c8c,	// (0x0003a37f) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x00044f4c) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x00044f4c) cell_vitu2_itu_pane_t

0x10d7,	// (0x000367ca) bg_button_pane_cp011

0x9f7f,	// (0x0003f672) cell_vitu2_function_pane_g1

0x0a3d,	// (0x00036130) main_myfav_hc_pane

0x9942,	// (0x0003f035) popup_image3_note_pane_ParamLimits

0x9942,	// (0x0003f035) popup_image3_note_pane

0x9950,	// (0x0003f043) popup_image3_tool_bar_pane_ParamLimits

0x9950,	// (0x0003f043) popup_image3_tool_bar_pane

0x4d02,	// (0x0003a3f5) cell_vitu2_itu_pane_t3_ParamLimits

0x4d02,	// (0x0003a3f5) cell_vitu2_itu_pane_t3

0x0a3d,	// (0x00036130) bg_popup_trans_pane

0xd68c,	// (0x00042d7f) grid_image3_tool_bar_pane

0xd696,	// (0x00042d89) bg_popup_trans_pane_g1

0x15cc,	// (0x00036cbf) bg_popup_trans_pane_g2

0xd69e,	// (0x00042d91) bg_popup_trans_pane_g3

0xd6a6,	// (0x00042d99) bg_popup_trans_pane_g4

0xd6ae,	// (0x00042da1) bg_popup_trans_pane_g5

0xd6b6,	// (0x00042da9) bg_popup_trans_pane_g6

0xd6be,	// (0x00042db1) bg_popup_trans_pane_g7

0xd6c6,	// (0x00042db9) bg_popup_trans_pane_g8

0x15ac,	// (0x00036c9f) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x00044f53) bg_popup_trans_pane_g

0xd6ce,	// (0x00042dc1) cell_image3_tool_bar_pane_ParamLimits

0xd6ce,	// (0x00042dc1) cell_image3_tool_bar_pane

0x117c,	// (0x0003686f) cell_image3_tool_bar_pane_g1

0x0a3d,	// (0x00036130) bg_popup_trans_pane_cp1

0xd6e2,	// (0x00042dd5) popup_image3_note_pane_t1

0xd6f0,	// (0x00042de3) popup_image3_note_pane_t2

0xd6fe,	// (0x00042df1) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x00044f66) popup_image3_note_pane_t

0xd70c,	// (0x00042dff) popup_image3_note_pane_t3_copy1

0x9f93,	// (0x0003f686) bg_myfav_hc_instruction_pane_ParamLimits

0x9f93,	// (0x0003f686) bg_myfav_hc_instruction_pane

0x9fab,	// (0x0003f69e) cell_myfav_contact_pane_ParamLimits

0x9fab,	// (0x0003f69e) cell_myfav_contact_pane

0x9fc5,	// (0x0003f6b8) cell_myfav_contact_pane_cp1_ParamLimits

0x9fc5,	// (0x0003f6b8) cell_myfav_contact_pane_cp1

0x9fdd,	// (0x0003f6d0) cell_myfav_contact_pane_cp2_ParamLimits

0x9fdd,	// (0x0003f6d0) cell_myfav_contact_pane_cp2

0x9ff5,	// (0x0003f6e8) cell_myfav_contact_pane_cp3_ParamLimits

0x9ff5,	// (0x0003f6e8) cell_myfav_contact_pane_cp3

0xa00c,	// (0x0003f6ff) cell_myfav_contact_pane_cp4_ParamLimits

0xa00c,	// (0x0003f6ff) cell_myfav_contact_pane_cp4

0xa022,	// (0x0003f715) cell_myfav_contact_pane_cp5_ParamLimits

0xa022,	// (0x0003f715) cell_myfav_contact_pane_cp5

0xa036,	// (0x0003f729) cell_myfav_contact_pane_cp6_ParamLimits

0xa036,	// (0x0003f729) cell_myfav_contact_pane_cp6

0xa04a,	// (0x0003f73d) cell_myfav_contact_pane_cp7_ParamLimits

0xa04a,	// (0x0003f73d) cell_myfav_contact_pane_cp7

0xd71a,	// (0x00042e0d) listscroll_gen_pane_cp05

0xa062,	// (0x0003f755) main_myfav_hc_pane_g1_ParamLimits

0xa062,	// (0x0003f755) main_myfav_hc_pane_g1

0xa078,	// (0x0003f76b) main_myfav_hc_pane_g2_ParamLimits

0xa078,	// (0x0003f76b) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x00044f6d) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x00044f6d) main_myfav_hc_pane_g

0xa0a6,	// (0x0003f799) main_myfav_hc_pane_t1_ParamLimits

0xa0a6,	// (0x0003f799) main_myfav_hc_pane_t1

0xd723,	// (0x00042e16) main_myfav_hc_pane_t2_ParamLimits

0xd723,	// (0x00042e16) main_myfav_hc_pane_t2

0xd735,	// (0x00042e28) main_myfav_hc_pane_t3_ParamLimits

0xd735,	// (0x00042e28) main_myfav_hc_pane_t3

0xa0bd,	// (0x0003f7b0) main_myfav_hc_pane_t4_ParamLimits

0xa0bd,	// (0x0003f7b0) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x00044f74) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x00044f74) main_myfav_hc_pane_t

0x117c,	// (0x0003686f) bg_myfav_hc_instruction_pane_g1

0xd747,	// (0x00042e3a) cell_myfav_contact_pane_g1_ParamLimits

0xd747,	// (0x00042e3a) cell_myfav_contact_pane_g1

0xd747,	// (0x00042e3a) cell_myfav_contact_pane_g2_ParamLimits

0xd747,	// (0x00042e3a) cell_myfav_contact_pane_g2

0xd753,	// (0x00042e46) cell_myfav_contact_pane_g3_ParamLimits

0xd753,	// (0x00042e46) cell_myfav_contact_pane_g3

0x114c,	// (0x0003683f) cell_myfav_contact_pane_g4_ParamLimits

0x114c,	// (0x0003683f) cell_myfav_contact_pane_g4

0xd760,	// (0x00042e53) cell_myfav_contact_pane_g5_ParamLimits

0xd760,	// (0x00042e53) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x00044f7f) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x00044f7f) cell_myfav_contact_pane_g

0xa08e,	// (0x0003f781) main_myfav_hc_pane_g3_ParamLimits

0xa08e,	// (0x0003f781) main_myfav_hc_pane_g3

0x49e7,	// (0x0003a0da) popup_adpt_find_window

0xa0e7,	// (0x0003f7da) afind_page_pane_ParamLimits

0xa0e7,	// (0x0003f7da) afind_page_pane

0xa0f4,	// (0x0003f7e7) aid_size_cell_afind_ParamLimits

0xa0f4,	// (0x0003f7e7) aid_size_cell_afind

0xa10e,	// (0x0003f801) bg_popup_sub_pane_cp09_ParamLimits

0xa10e,	// (0x0003f801) bg_popup_sub_pane_cp09

0xa11b,	// (0x0003f80e) find_pane_cp01_ParamLimits

0xa11b,	// (0x0003f80e) find_pane_cp01

0xd76c,	// (0x00042e5f) grid_afind_control_pane_ParamLimits

0xd76c,	// (0x00042e5f) grid_afind_control_pane

0xa128,	// (0x0003f81b) grid_afind_pane_ParamLimits

0xa128,	// (0x0003f81b) grid_afind_pane

0xa144,	// (0x0003f837) cell_afind_pane_ParamLimits

0xa144,	// (0x0003f837) cell_afind_pane

0x117c,	// (0x0003686f) afind_page_pane_g1

0xa18c,	// (0x0003f87f) afind_page_pane_g2

0xa194,	// (0x0003f887) afind_page_pane_g3

0x0002,

0xf897,	// (0x00044f8a) afind_page_pane_g

0xa19c,	// (0x0003f88f) afind_page_pane_t1

0xd792,	// (0x00042e85) cell_afind_grid_control_pane_ParamLimits

0xd792,	// (0x00042e85) cell_afind_grid_control_pane

0xd7a1,	// (0x00042e94) bg_button_pane_cp69_ParamLimits

0xd7a1,	// (0x00042e94) bg_button_pane_cp69

0xa1aa,	// (0x0003f89d) cell_afind_pane_g1_ParamLimits

0xa1aa,	// (0x0003f89d) cell_afind_pane_g1

0xa1b7,	// (0x0003f8aa) cell_afind_pane_t1_ParamLimits

0xa1b7,	// (0x0003f8aa) cell_afind_pane_t1

0xd7ad,	// (0x00042ea0) bg_button_pane_cp72

0xd7b5,	// (0x00042ea8) cell_afind_grid_control_pane_g1

0x7f4c,	// (0x0003d63f) aid_image_placing_area_ParamLimits

0x7f4c,	// (0x0003d63f) aid_image_placing_area

0x113e,	// (0x00036831) field_vitu_entry_pane_g1_ParamLimits

0x113e,	// (0x00036831) field_vitu_entry_pane_g1

0x113e,	// (0x00036831) field_vitu_entry_pane_g2_ParamLimits

0x113e,	// (0x00036831) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x000448af) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x000448af) field_vitu_entry_pane_g

0x3a8a,	// (0x0003917d) cell_vitu_itu_pane_g1_ParamLimits

0x3a6d,	// (0x00039160) cell_vitu_itu_pane_t3_ParamLimits

0x3a6d,	// (0x00039160) cell_vitu_itu_pane_t3

0xd5b4,	// (0x00042ca7) mp4_progress_pane_t1_ParamLimits

0xd5d6,	// (0x00042cc9) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x00044ed0) mp4_progress_pane_t_ParamLimits

0xd5f8,	// (0x00042ceb) mup_progress_pane_cp04_ParamLimits

0xa0d1,	// (0x0003f7c4) main_myfav_hc_pane_t5_ParamLimits

0xa0d1,	// (0x0003f7c4) main_myfav_hc_pane_t5

0x589c,	// (0x0003af8f) aid_zoom_text_primary

0x49e7,	// (0x0003a0da) popup_adpt_find_window_ParamLimits

0x10d7,	// (0x000367ca) main_cam_set_pane

0x9b65,	// (0x0003f258) cam4_zoom_pane_ParamLimits

0x9b65,	// (0x0003f258) cam4_zoom_pane

0xa1c9,	// (0x0003f8bc) main_cam_set_pane_g1_ParamLimits

0xa1c9,	// (0x0003f8bc) main_cam_set_pane_g1

0xa1d7,	// (0x0003f8ca) main_cam_set_pane_g2_ParamLimits

0xa1d7,	// (0x0003f8ca) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x00044f91) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x00044f91) main_cam_set_pane_g

0xa1e3,	// (0x0003f8d6) main_cam_set_pane_t1_ParamLimits

0xa1e3,	// (0x0003f8d6) main_cam_set_pane_t1

0xa1ff,	// (0x0003f8f2) main_cset_listscroll_pane_ParamLimits

0xa1ff,	// (0x0003f8f2) main_cset_listscroll_pane

0xa231,	// (0x0003f924) main_cset_slider_pane_ParamLimits

0xa231,	// (0x0003f924) main_cset_slider_pane

0xd7c6,	// (0x00042eb9) main_cset_list_pane_ParamLimits

0xd7c6,	// (0x00042eb9) main_cset_list_pane

0xd7d6,	// (0x00042ec9) scroll_pane_cp028

0xa250,	// (0x0003f943) aid_area_touch_slider

0xa26c,	// (0x0003f95f) cset_slider_pane

0xa28f,	// (0x0003f982) main_cset_slider_pane_g1

0xa2a4,	// (0x0003f997) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x00044f96) main_cset_slider_pane_g

0xd80f,	// (0x00042f02) main_cset_slider_pane_t1

0xa366,	// (0x0003fa59) main_cset_slider_pane_t2

0xa380,	// (0x0003fa73) main_cset_slider_pane_t3

0xa39a,	// (0x0003fa8d) main_cset_slider_pane_t4

0xa3b4,	// (0x0003faa7) main_cset_slider_pane_t5

0xa3d2,	// (0x0003fac5) main_cset_slider_pane_t6

0xa3e9,	// (0x0003fadc) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x00044fbb) main_cset_slider_pane_t

0xa4f5,	// (0x0003fbe8) cset_list_set_pane_ParamLimits

0xa4f5,	// (0x0003fbe8) cset_list_set_pane

0xd8a9,	// (0x00042f9c) aid_position_infowindow_above

0xd8b1,	// (0x00042fa4) aid_position_infowindow_below

0x4d54,	// (0x0003a447) cset_list_set_pane_g1_ParamLimits

0x4d54,	// (0x0003a447) cset_list_set_pane_g1

0x4d60,	// (0x0003a453) cset_list_set_pane_g3_ParamLimits

0x4d60,	// (0x0003a453) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x00044fda) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x00044fda) cset_list_set_pane_g

0x4d6f,	// (0x0003a462) cset_list_set_pane_t1_ParamLimits

0x4d6f,	// (0x0003a462) cset_list_set_pane_t1

0x10d7,	// (0x000367ca) list_highlight_pane_cp021_ParamLimits

0x10d7,	// (0x000367ca) list_highlight_pane_cp021

0x1f2e,	// (0x00037621) cset_slider_pane_g1

0x1f40,	// (0x00037633) cset_slider_pane_g2

0x1f37,	// (0x0003762a) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x00044fdf) cset_slider_pane_g

0xa50b,	// (0x0003fbfe) aid_area_touch_cam4_zoom

0xa513,	// (0x0003fc06) cam4_zoom_cont_pane

0xa51b,	// (0x0003fc0e) cam4_zoom_pane_g1

0xa523,	// (0x0003fc16) cam4_zoom_pane_g2

0xa52b,	// (0x0003fc1e) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x00044fe6) cam4_zoom_pane_g

0xd8b9,	// (0x00042fac) cam4_zoom_cont_pane_g1

0xd8c2,	// (0x00042fb5) cam4_zoom_cont_pane_g2

0xd8cb,	// (0x00042fbe) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x00044fed) cam4_zoom_cont_pane_g

0x9999,	// (0x0003f08c) call4_image_pane_ParamLimits

0x9999,	// (0x0003f08c) call4_image_pane

0x99f8,	// (0x0003f0eb) call4_windows_conf_pane_ParamLimits

0x9a3d,	// (0x0003f130) popup_call4_audio_in_window_ParamLimits

0x9a3d,	// (0x0003f130) popup_call4_audio_in_window

0x0a3d,	// (0x00036130) bg_popup_call2_act_pane_cp02

0xd639,	// (0x00042d2c) call4_list_conf_pane

0x117c,	// (0x0003686f) call4_image_pane_g1

0x117c,	// (0x0003686f) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000447a2) call4_image_pane_g

0xd8d4,	// (0x00042fc7) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8d4,	// (0x00042fc7) list_single_graphic_popup_conf4_pane

0x0a3d,	// (0x00036130) list_highlight_pane_cp022

0xd8e7,	// (0x00042fda) list_single_graphic_popup_conf4_pane_g1

0x1af2,	// (0x000371e5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x00044ff4) list_single_graphic_popup_conf4_pane_g

0xd8ef,	// (0x00042fe2) list_single_graphic_popup_conf4_pane_t1

0x65f9,	// (0x0003bcec) popup_vtel_slider_window_ParamLimits

0x65f9,	// (0x0003bcec) popup_vtel_slider_window

0xd60b,	// (0x00042cfe) dialer2_ne_pane_t2_ParamLimits

0xd60b,	// (0x00042cfe) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x00044ed5) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x00044ed5) dialer2_ne_pane_t

0x10d7,	// (0x000367ca) bg_popup_sub_pane_cp010_ParamLimits

0x10d7,	// (0x000367ca) bg_popup_sub_pane_cp010

0xa533,	// (0x0003fc26) popup_vtel_slider_window_g1_ParamLimits

0xa533,	// (0x0003fc26) popup_vtel_slider_window_g1

0xa53f,	// (0x0003fc32) popup_vtel_slider_window_g2_ParamLimits

0xa53f,	// (0x0003fc32) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x00044ff9) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x00044ff9) popup_vtel_slider_window_g

0xa587,	// (0x0003fc7a) vtel_slider_pane_ParamLimits

0xa587,	// (0x0003fc7a) vtel_slider_pane

0xa596,	// (0x0003fc89) vtel_slider_pane_g1_ParamLimits

0xa596,	// (0x0003fc89) vtel_slider_pane_g1

0xa5a3,	// (0x0003fc96) vtel_slider_pane_g2_ParamLimits

0xa5a3,	// (0x0003fc96) vtel_slider_pane_g2

0xa5b0,	// (0x0003fca3) vtel_slider_pane_g3_ParamLimits

0xa5b0,	// (0x0003fca3) vtel_slider_pane_g3

0xa596,	// (0x0003fc89) vtel_slider_pane_g4_ParamLimits

0xa596,	// (0x0003fc89) vtel_slider_pane_g4

0xa5bd,	// (0x0003fcb0) vtel_slider_pane_g5_ParamLimits

0xa5bd,	// (0x0003fcb0) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x00045002) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x00045002) vtel_slider_pane_g

0x10d7,	// (0x000367ca) main_gallery2_pane

0x9db9,	// (0x0003f4ac) aid_size_row_itut2_dropdow_list_ParamLimits

0x9db9,	// (0x0003f4ac) aid_size_row_itut2_dropdow_list

0x9e19,	// (0x0003f50c) grid_vitu2_function_top_pane_ParamLimits

0x9e19,	// (0x0003f50c) grid_vitu2_function_top_pane

0x9e73,	// (0x0003f566) popup_vitu2_dropdown_list_window_ParamLimits

0x9e73,	// (0x0003f566) popup_vitu2_dropdown_list_window

0x9e91,	// (0x0003f584) popup_vitu2_match_list_window

0xa5ca,	// (0x0003fcbd) cell_vitu2_function_top_pane_ParamLimits

0xa5ca,	// (0x0003fcbd) cell_vitu2_function_top_pane

0xa5e4,	// (0x0003fcd7) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa5e4,	// (0x0003fcd7) cell_vitu2_function_top_pane_cp01

0xa600,	// (0x0003fcf3) cell_vitu2_function_top_wide_pane_ParamLimits

0xa600,	// (0x0003fcf3) cell_vitu2_function_top_wide_pane

0x10d7,	// (0x000367ca) bg_button_pane_cp012

0xa61e,	// (0x0003fd11) cell_vitu2_function_top_pane_g1

0xa632,	// (0x0003fd25) bg_button_pane_cp013_ParamLimits

0xa632,	// (0x0003fd25) bg_button_pane_cp013

0xa64e,	// (0x0003fd41) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa64e,	// (0x0003fd41) cell_vitu2_function_top_wide_pane_g1

0x1130,	// (0x00036823) bg_popup_sub_pane_cp20

0xa666,	// (0x0003fd59) list_vitu2_match_list_pane

0xd696,	// (0x00042d89) bg_popup_sub_pane_cp20_g1

0xd69e,	// (0x00042d91) bg_popup_sub_pane_cp20_g2

0x15cc,	// (0x00036cbf) bg_popup_sub_pane_cp20_g3

0xd6a6,	// (0x00042d99) bg_popup_sub_pane_cp20_g4

0x15ac,	// (0x00036c9f) bg_popup_sub_pane_cp20_g5

0xd905,	// (0x00042ff8) bg_popup_sub_pane_cp20_g6

0xd6b6,	// (0x00042da9) bg_popup_sub_pane_cp20_g7

0xd6be,	// (0x00042db1) bg_popup_sub_pane_cp20_g8

0xd6c6,	// (0x00042db9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x0004500d) bg_popup_sub_pane_cp20_g

0xa67e,	// (0x0003fd71) list_vitu2_match_list_item_pane_ParamLimits

0xa67e,	// (0x0003fd71) list_vitu2_match_list_item_pane

0xa690,	// (0x0003fd83) list_vitu2_match_list_item_pane_t1

0x0a3d,	// (0x00036130) bg_popup_sub_pane_cp21

0x13b3,	// (0x00036aa6) grid_vitu2_dropdown_list_pane

0xa69e,	// (0x0003fd91) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa69e,	// (0x0003fd91) cell_vitu2_dropdown_list_char_pane

0xa6c0,	// (0x0003fdb3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa6c0,	// (0x0003fdb3) cell_vitu2_dropdown_list_ctrl_pane

0xd90d,	// (0x00043000) cell_vitu2_dropdown_list_char_pane_g1

0xd916,	// (0x00043009) cell_vitu2_dropdown_list_char_pane_g2

0xd91f,	// (0x00043012) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x00045020) cell_vitu2_dropdown_list_char_pane_g

0xa6e8,	// (0x0003fddb) cell_vitu2_dropdown_list_char_pane_t1

0xa6f6,	// (0x0003fde9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa6f6,	// (0x0003fde9) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa703,	// (0x0003fdf6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa703,	// (0x0003fdf6) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa710,	// (0x0003fe03) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa710,	// (0x0003fe03) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa71d,	// (0x0003fe10) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa71d,	// (0x0003fe10) cell_vitu2_dropdown_list_ctrl_pane_g4

0x113e,	// (0x00036831) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x113e,	// (0x00036831) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x00045027) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x00045027) cell_vitu2_dropdown_list_ctrl_pane_g

0xa739,	// (0x0003fe2c) aid_size_cell_gallery2_ParamLimits

0xa739,	// (0x0003fe2c) aid_size_cell_gallery2

0xa753,	// (0x0003fe46) grid_gallery2_pane_ParamLimits

0xa753,	// (0x0003fe46) grid_gallery2_pane

0xa76a,	// (0x0003fe5d) scroll_pane_cp029_ParamLimits

0xa76a,	// (0x0003fe5d) scroll_pane_cp029

0xa77a,	// (0x0003fe6d) cell_gallery2_pane_ParamLimits

0xa77a,	// (0x0003fe6d) cell_gallery2_pane

0xd928,	// (0x0004301b) cell_gallery2_pane_g2

0xd930,	// (0x00043023) cell_gallery2_pane_g3

0xd938,	// (0x0004302b) cell_gallery2_pane_g4

0xd940,	// (0x00043033) cell_gallery2_pane_g5

0x13b3,	// (0x00036aa6) grid_highlight_pane_cp10

0x9e91,	// (0x0003f584) popup_vitu2_match_list_window_ParamLimits

0x9ea3,	// (0x0003f596) popup_vitu2_query_window_ParamLimits

0x9ea3,	// (0x0003f596) popup_vitu2_query_window

0x0a3d,	// (0x00036130) bg_vitu2_candi_button_pane

0xd90d,	// (0x00043000) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd916,	// (0x00043009) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd91f,	// (0x00043012) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4d84,	// (0x0003a477) bg_button_pane_cp015

0xa7cf,	// (0x0003fec2) bg_button_pane_cp016

0xa7db,	// (0x0003fece) bg_button_pane_cp017

0x1ebe,	// (0x000375b1) bg_popup_sub_pane_cp22

0xd948,	// (0x0004303b) popup_vitu2_query_window_g1

0x4dbe,	// (0x0003a4b1) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x00045032) popup_vitu2_query_window_g

0x4dd6,	// (0x0003a4c9) popup_vitu2_query_window_t1_ParamLimits

0x4dd6,	// (0x0003a4c9) popup_vitu2_query_window_t1

0x4e09,	// (0x0003a4fc) popup_vitu2_query_window_t2_ParamLimits

0x4e09,	// (0x0003a4fc) popup_vitu2_query_window_t2

0x4e1b,	// (0x0003a50e) popup_vitu2_query_window_t3_ParamLimits

0x4e1b,	// (0x0003a50e) popup_vitu2_query_window_t3

0xa802,	// (0x0003fef5) popup_vitu2_query_window_t4_ParamLimits

0xa802,	// (0x0003fef5) popup_vitu2_query_window_t4

0xa816,	// (0x0003ff09) popup_vitu2_query_window_t5_ParamLimits

0xa816,	// (0x0003ff09) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x00045039) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x00045039) popup_vitu2_query_window_t

0xd7be,	// (0x00042eb1) main_cset_text_pane

0xa250,	// (0x0003f943) aid_area_touch_slider_ParamLimits

0xa26c,	// (0x0003f95f) cset_slider_pane_ParamLimits

0xa28f,	// (0x0003f982) main_cset_slider_pane_g1_ParamLimits

0xa2a4,	// (0x0003f997) main_cset_slider_pane_g2_ParamLimits

0xd7df,	// (0x00042ed2) main_cset_slider_pane_g3_ParamLimits

0xd7df,	// (0x00042ed2) main_cset_slider_pane_g3

0xa2b9,	// (0x0003f9ac) main_cset_slider_pane_g4_ParamLimits

0xa2b9,	// (0x0003f9ac) main_cset_slider_pane_g4

0xa2c8,	// (0x0003f9bb) main_cset_slider_pane_g5_ParamLimits

0xa2c8,	// (0x0003f9bb) main_cset_slider_pane_g5

0xa2d6,	// (0x0003f9c9) main_cset_slider_pane_g6_ParamLimits

0xa2d6,	// (0x0003f9c9) main_cset_slider_pane_g6

0xf8a3,	// (0x00044f96) main_cset_slider_pane_g_ParamLimits

0xd80f,	// (0x00042f02) main_cset_slider_pane_t1_ParamLimits

0xa366,	// (0x0003fa59) main_cset_slider_pane_t2_ParamLimits

0xa380,	// (0x0003fa73) main_cset_slider_pane_t3_ParamLimits

0xa39a,	// (0x0003fa8d) main_cset_slider_pane_t4_ParamLimits

0xa3b4,	// (0x0003faa7) main_cset_slider_pane_t5_ParamLimits

0xa3d2,	// (0x0003fac5) main_cset_slider_pane_t6_ParamLimits

0xa3e9,	// (0x0003fadc) main_cset_slider_pane_t7_ParamLimits

0xa417,	// (0x0003fb0a) main_cset_slider_pane_t8_ParamLimits

0xa417,	// (0x0003fb0a) main_cset_slider_pane_t8

0xa43f,	// (0x0003fb32) main_cset_slider_pane_t9_ParamLimits

0xa43f,	// (0x0003fb32) main_cset_slider_pane_t9

0xa467,	// (0x0003fb5a) main_cset_slider_pane_t10_ParamLimits

0xa467,	// (0x0003fb5a) main_cset_slider_pane_t10

0xa48f,	// (0x0003fb82) main_cset_slider_pane_t11_ParamLimits

0xa48f,	// (0x0003fb82) main_cset_slider_pane_t11

0xa4b9,	// (0x0003fbac) main_cset_slider_pane_t12_ParamLimits

0xa4b9,	// (0x0003fbac) main_cset_slider_pane_t12

0xa4d6,	// (0x0003fbc9) main_cset_slider_pane_t13_ParamLimits

0xa4d6,	// (0x0003fbc9) main_cset_slider_pane_t13

0xf8c8,	// (0x00044fbb) main_cset_slider_pane_t_ParamLimits

0x0a3d,	// (0x00036130) bg_popup_sub_pane_cp011

0xd954,	// (0x00043047) main_cset_text_pane_g1

0xd95c,	// (0x0004304f) main_cset_text_pane_t1

0xd96a,	// (0x0004305d) main_cset_text_pane_t2

0xd978,	// (0x0004306b) main_cset_text_pane_t3

0xd986,	// (0x00043079) main_cset_text_pane_t4

0xd994,	// (0x00043087) main_cset_text_pane_t5

0xd9a2,	// (0x00043095) main_cset_text_pane_t6

0xd9b0,	// (0x000430a3) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x00045048) main_cset_text_pane_t

0x0a3d,	// (0x00036130) main_cam4_burst_pane

0x0a3d,	// (0x00036130) main_cam5_pane

0xd780,	// (0x00042e73) bg_button_pane_cp019

0xd789,	// (0x00042e7c) bg_button_pane_cp020

0xd7eb,	// (0x00042ede) main_cset_slider_pane_g7_ParamLimits

0xd7eb,	// (0x00042ede) main_cset_slider_pane_g7

0xd7f7,	// (0x00042eea) main_cset_slider_pane_g8_ParamLimits

0xd7f7,	// (0x00042eea) main_cset_slider_pane_g8

0xa2ea,	// (0x0003f9dd) main_cset_slider_pane_g9_ParamLimits

0xa2ea,	// (0x0003f9dd) main_cset_slider_pane_g9

0xa2f6,	// (0x0003f9e9) main_cset_slider_pane_g10_ParamLimits

0xa2f6,	// (0x0003f9e9) main_cset_slider_pane_g10

0xa302,	// (0x0003f9f5) main_cset_slider_pane_g11_ParamLimits

0xa302,	// (0x0003f9f5) main_cset_slider_pane_g11

0xa30e,	// (0x0003fa01) main_cset_slider_pane_g12_ParamLimits

0xa30e,	// (0x0003fa01) main_cset_slider_pane_g12

0xa31a,	// (0x0003fa0d) main_cset_slider_pane_g13_ParamLimits

0xa31a,	// (0x0003fa0d) main_cset_slider_pane_g13

0xa326,	// (0x0003fa19) main_cset_slider_pane_g14_ParamLimits

0xa326,	// (0x0003fa19) main_cset_slider_pane_g14

0xa332,	// (0x0003fa25) main_cset_slider_pane_g15_ParamLimits

0xa332,	// (0x0003fa25) main_cset_slider_pane_g15

0xd837,	// (0x00042f2a) main_cset_slider_pane_t14_ParamLimits

0xd837,	// (0x00042f2a) main_cset_slider_pane_t14

0xd870,	// (0x00042f63) main_cset_slider_pane_t15_ParamLimits

0xd870,	// (0x00042f63) main_cset_slider_pane_t15

0xa82a,	// (0x0003ff1d) aid_cam4_burst_size_cell_ParamLimits

0xa82a,	// (0x0003ff1d) aid_cam4_burst_size_cell

0xa846,	// (0x0003ff39) grid_cam4_burst_pane_ParamLimits

0xa846,	// (0x0003ff39) grid_cam4_burst_pane

0xa876,	// (0x0003ff69) linegrid_cam4_burst_pane_ParamLimits

0xa876,	// (0x0003ff69) linegrid_cam4_burst_pane

0xa896,	// (0x0003ff89) scroll_pane_cp30_ParamLimits

0xa896,	// (0x0003ff89) scroll_pane_cp30

0xa8a2,	// (0x0003ff95) cell_cam4_burst_pane_ParamLimits

0xa8a2,	// (0x0003ff95) cell_cam4_burst_pane

0xd9be,	// (0x000430b1) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9be,	// (0x000430b1) linegrid_cam4_burst_pane_g1

0xa8de,	// (0x0003ffd1) linegrid_cam4_burst_pane_g2_ParamLimits

0xa8de,	// (0x0003ffd1) linegrid_cam4_burst_pane_g2

0xd9cb,	// (0x000430be) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9cb,	// (0x000430be) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x00045057) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x00045057) linegrid_cam4_burst_pane_g

0xa8ef,	// (0x0003ffe2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa8ef,	// (0x0003ffe2) linegrid_cam4_burst_pane_g3_copy1

0xd9d8,	// (0x000430cb) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9d8,	// (0x000430cb) linegrid_cam4_burst_pane_g4

0xa909,	// (0x0003fffc) linegrid_cam4_burst_pane_g5_ParamLimits

0xa909,	// (0x0003fffc) linegrid_cam4_burst_pane_g5

0xa91a,	// (0x0004000d) linegrid_cam4_burst_pane_g6_ParamLimits

0xa91a,	// (0x0004000d) linegrid_cam4_burst_pane_g6

0xd9e5,	// (0x000430d8) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9e5,	// (0x000430d8) linegrid_cam4_burst_pane_g7

0xa92b,	// (0x0004001e) cell_cam4_burst_pane_g1

0xd9fe,	// (0x000430f1) main_cam5_pane_t1_ParamLimits

0xd9fe,	// (0x000430f1) main_cam5_pane_t1

0xda10,	// (0x00043103) main_cam5_pane_t2_ParamLimits

0xda10,	// (0x00043103) main_cam5_pane_t2

0xda22,	// (0x00043115) main_cam5_pane_t3_ParamLimits

0xda22,	// (0x00043115) main_cam5_pane_t3

0xda34,	// (0x00043127) main_cam5_pane_t4_ParamLimits

0xda34,	// (0x00043127) main_cam5_pane_t4

0xda4c,	// (0x0004313f) main_cam5_pane_t5_ParamLimits

0xda4c,	// (0x0004313f) main_cam5_pane_t5

0xda60,	// (0x00043153) main_cam5_pane_t6_ParamLimits

0xda60,	// (0x00043153) main_cam5_pane_t6

0xda74,	// (0x00043167) main_cam5_pane_t7_ParamLimits

0xda74,	// (0x00043167) main_cam5_pane_t7

0xda86,	// (0x00043179) main_cam5_pane_t8_ParamLimits

0xda86,	// (0x00043179) main_cam5_pane_t8

0xdaa2,	// (0x00043195) main_cam5_pane_t9_ParamLimits

0xdaa2,	// (0x00043195) main_cam5_pane_t9

0xdab4,	// (0x000431a7) main_cam5_pane_t10_ParamLimits

0xdab4,	// (0x000431a7) main_cam5_pane_t10

0xdac6,	// (0x000431b9) main_cam5_pane_t11_ParamLimits

0xdac6,	// (0x000431b9) main_cam5_pane_t11

0xdad8,	// (0x000431cb) main_cam5_pane_t12_ParamLimits

0xdad8,	// (0x000431cb) main_cam5_pane_t12

0xdaed,	// (0x000431e0) main_cam5_pane_t13_ParamLimits

0xdaed,	// (0x000431e0) main_cam5_pane_t13

0x000c,

0xf970,	// (0x00045063) main_cam5_pane_t_ParamLimits

0xf970,	// (0x00045063) main_cam5_pane_t

0x5a26,	// (0x0003b119) popup_scut_keymap_window_ParamLimits

0x5a26,	// (0x0003b119) popup_scut_keymap_window

0xa93e,	// (0x00040031) aid_size_cell_brow_shortcut

0x13b3,	// (0x00036aa6) bg_popup_window_pane_cp010

0xa94a,	// (0x0004003d) grid_scut_pane

0xa956,	// (0x00040049) cell_scut_pane_ParamLimits

0xa956,	// (0x00040049) cell_scut_pane

0xa96d,	// (0x00040060) cell_scut_pane_g1

0xdb0a,	// (0x000431fd) cell_scut_pane_t1

0xdb19,	// (0x0004320c) cell_scut_pane_t2

0xa976,	// (0x00040069) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x0004507e) cell_scut_pane_t

0x8afa,	// (0x0003e1ed) main_mup3_pane_g8_ParamLimits

0x8afa,	// (0x0003e1ed) main_mup3_pane_g8

0x9dc7,	// (0x0003f4ba) area_vitu2_query_pane_ParamLimits

0x9dc7,	// (0x0003f4ba) area_vitu2_query_pane

0x4d99,	// (0x0003a48c) input_focus_pane_cp08

0xdb28,	// (0x0004321b) area_vitu2_query_pane_g1

0x4e99,	// (0x0003a58c) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x00045085) area_vitu2_query_pane_g

0xa984,	// (0x00040077) area_vitu2_query_pane_t1_ParamLimits

0xa984,	// (0x00040077) area_vitu2_query_pane_t1

0xa998,	// (0x0004008b) area_vitu2_query_pane_t2_ParamLimits

0xa998,	// (0x0004008b) area_vitu2_query_pane_t2

0x4eaa,	// (0x0003a59d) area_vitu2_query_pane_t3_ParamLimits

0x4eaa,	// (0x0003a59d) area_vitu2_query_pane_t3

0x4ed2,	// (0x0003a5c5) area_vitu2_query_pane_t4_ParamLimits

0x4ed2,	// (0x0003a5c5) area_vitu2_query_pane_t4

0x4efa,	// (0x0003a5ed) area_vitu2_query_pane_t5_ParamLimits

0x4efa,	// (0x0003a5ed) area_vitu2_query_pane_t5

0x4f22,	// (0x0003a615) area_vitu2_query_pane_t6_ParamLimits

0x4f22,	// (0x0003a615) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x0004508a) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x0004508a) area_vitu2_query_pane_t

0xa7cf,	// (0x0003fec2) bg_button_pane_cp018

0xa9ac,	// (0x0004009f) bg_button_pane_cp021

0x4f6e,	// (0x0003a661) bg_button_pane_cp022

0x4f91,	// (0x0003a684) input_focus_pane_cp09

0x1c2e,	// (0x00037321) aid_size_touch_mv_arrow_left

0x1c57,	// (0x0003734a) aid_size_touch_mv_arrow_right

0xa34a,	// (0x0003fa3d) main_cset_slider_pane_g16_ParamLimits

0xa34a,	// (0x0003fa3d) main_cset_slider_pane_g16

0xa358,	// (0x0003fa4b) main_cset_slider_pane_g17_ParamLimits

0xa358,	// (0x0003fa4b) main_cset_slider_pane_g17

0xa92b,	// (0x0004001e) cell_cam4_burst_pane_g1_ParamLimits

0x0a3d,	// (0x00036130) compa_mode_pane

0xa54b,	// (0x0003fc3e) popup_vtel_slider_window_g3_ParamLimits

0xa54b,	// (0x0003fc3e) popup_vtel_slider_window_g3

0xa55f,	// (0x0003fc52) popup_vtel_slider_window_g4_ParamLimits

0xa55f,	// (0x0003fc52) popup_vtel_slider_window_g4

0xa573,	// (0x0003fc66) popup_vtel_slider_window_t1_ParamLimits

0xa573,	// (0x0003fc66) popup_vtel_slider_window_t1

0x0a3d,	// (0x00036130) main_cl_pane

0x842d,	// (0x0003db20) popup_imed_adjust2_window_ParamLimits

0x1ebe,	// (0x000375b1) bg_tb_trans_pane_cp05_ParamLimits

0x39aa,	// (0x0003909d) popup_imed_adjust2_window_g1_ParamLimits

0x39b9,	// (0x000390ac) popup_imed_adjust2_window_g2_ParamLimits

0x39b9,	// (0x000390ac) popup_imed_adjust2_window_g2

0x39c5,	// (0x000390b8) popup_imed_adjust2_window_g3_ParamLimits

0x39c5,	// (0x000390b8) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x00044e0a) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x00044e0a) popup_imed_adjust2_window_g

0x39d1,	// (0x000390c4) popup_imed_adjust2_window_t1_ParamLimits

0x39e9,	// (0x000390dc) slider_imed_adjust_pane_ParamLimits

0x39fd,	// (0x000390f0) slider_imed_adjust_pane_g1_ParamLimits

0x3a0d,	// (0x00039100) slider_imed_adjust_pane_g2_ParamLimits

0x3a1d,	// (0x00039110) slider_imed_adjust_pane_g3_ParamLimits

0x3a2e,	// (0x00039121) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x00044e11) slider_imed_adjust_pane_g_ParamLimits

0x9b0e,	// (0x0003f201) aid_touch_area_cam4_ParamLimits

0x9b0e,	// (0x0003f201) aid_touch_area_cam4

0x9b1e,	// (0x0003f211) battery_pane_cp01

0x9ba5,	// (0x0003f298) main_camera4_pane_g6_ParamLimits

0x9ba5,	// (0x0003f298) main_camera4_pane_g6

0x9bc3,	// (0x0003f2b6) main_camera4_pane_t2_ParamLimits

0x9bc3,	// (0x0003f2b6) main_camera4_pane_t2

0x0001,

0xf816,	// (0x00044f09) main_camera4_pane_t_ParamLimits

0xf816,	// (0x00044f09) main_camera4_pane_t

0x9c4a,	// (0x0003f33d) aid_touch_area_vid4_ParamLimits

0x9c4a,	// (0x0003f33d) aid_touch_area_vid4

0x9c8a,	// (0x0003f37d) main_video4_pane_g5_ParamLimits

0x9c8a,	// (0x0003f37d) main_video4_pane_g5

0x9cae,	// (0x0003f3a1) vid4_progress_pane_ParamLimits

0x9cae,	// (0x0003f3a1) vid4_progress_pane

0xd803,	// (0x00042ef6) main_cset_slider_pane_g18_ParamLimits

0xd803,	// (0x00042ef6) main_cset_slider_pane_g18

0xd9f2,	// (0x000430e5) cell_cam4_burst_pane_g2_ParamLimits

0xd9f2,	// (0x000430e5) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x0004505e) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x0004505e) cell_cam4_burst_pane_g

0xa9b8,	// (0x000400ab) bg_cl_pane_ParamLimits

0xa9b8,	// (0x000400ab) bg_cl_pane

0xa9c4,	// (0x000400b7) cl_header_pane_ParamLimits

0xa9c4,	// (0x000400b7) cl_header_pane

0xa9d0,	// (0x000400c3) cl_listscroll_pane_ParamLimits

0xa9d0,	// (0x000400c3) cl_listscroll_pane

0xdb34,	// (0x00043227) bg_cl_pane_g1

0xdb3c,	// (0x0004322f) bg_cl_pane_g2

0xdb44,	// (0x00043237) bg_cl_pane_g3

0xdb4c,	// (0x0004323f) bg_cl_pane_g4

0xdb54,	// (0x00043247) bg_cl_pane_g5

0xdb5c,	// (0x0004324f) bg_cl_pane_g6

0xdb64,	// (0x00043257) bg_cl_pane_g7

0xdb6c,	// (0x0004325f) bg_cl_pane_g8

0xdb74,	// (0x00043267) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x00045099) bg_cl_pane_g

0xa9dc,	// (0x000400cf) aid_height_cl_leading_ParamLimits

0xa9dc,	// (0x000400cf) aid_height_cl_leading

0xa9e8,	// (0x000400db) aid_height_cl_text_ParamLimits

0xa9e8,	// (0x000400db) aid_height_cl_text

0x1130,	// (0x00036823) bg_cl_header_pane_ParamLimits

0x1130,	// (0x00036823) bg_cl_header_pane

0xaa00,	// (0x000400f3) cl_header_pane_g1_ParamLimits

0xaa00,	// (0x000400f3) cl_header_pane_g1

0xaa0d,	// (0x00040100) cl_header_pane_t1_ParamLimits

0xaa0d,	// (0x00040100) cl_header_pane_t1

0xdb7c,	// (0x0004326f) cl_list_pane

0xd7d6,	// (0x00042ec9) hc_scroll_pane_cp01

0x15ac,	// (0x00036c9f) bg_cl_header_pane_g1

0xd696,	// (0x00042d89) bg_cl_header_pane_g2

0x15cc,	// (0x00036cbf) bg_cl_header_pane_g3

0xd6a6,	// (0x00042d99) bg_cl_header_pane_g4

0xd69e,	// (0x00042d91) bg_cl_header_pane_g5

0xd905,	// (0x00042ff8) bg_cl_header_pane_g6

0xd6be,	// (0x00042db1) bg_cl_header_pane_g7

0xd6c6,	// (0x00042db9) bg_cl_header_pane_g8

0xd6b6,	// (0x00042da9) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x000450ac) bg_cl_header_pane_g

0xaa1f,	// (0x00040112) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xaa1f,	// (0x00040112) hc_cl_list_double_graphic_heading_pane

0xaa30,	// (0x00040123) hc_cl_list_single_graphic_pane_ParamLimits

0xaa30,	// (0x00040123) hc_cl_list_single_graphic_pane

0xaa49,	// (0x0004013c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xaa49,	// (0x0004013c) hc_cl_list_single_graphic_pane_g1

0xaa55,	// (0x00040148) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xaa55,	// (0x00040148) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x000450bf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x000450bf) hc_cl_list_single_graphic_pane_g

0xaa69,	// (0x0004015c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xaa69,	// (0x0004015c) hc_cl_list_single_graphic_pane_t1

0xaa49,	// (0x0004013c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xaa49,	// (0x0004013c) hc_cl_list_double_graphic_heading_pane_g1

0xaa7e,	// (0x00040171) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xaa7e,	// (0x00040171) hc_cl_list_double_graphic_heading_pane_g2

0xaa92,	// (0x00040185) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xaa92,	// (0x00040185) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x000450c4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x000450c4) hc_cl_list_double_graphic_heading_pane_g

0xaaa6,	// (0x00040199) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xaaa6,	// (0x00040199) hc_cl_list_double_graphic_heading_pane_t1

0xaabb,	// (0x000401ae) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xaabb,	// (0x000401ae) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x000450cb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x000450cb) hc_cl_list_double_graphic_heading_pane_t

0xaad8,	// (0x000401cb) vid4_progress_pane_g1

0xaae8,	// (0x000401db) vid4_progress_pane_g2

0xaaf8,	// (0x000401eb) vid4_progress_pane_g3

0xab0a,	// (0x000401fd) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x000450d0) vid4_progress_pane_g

0xab22,	// (0x00040215) vid4_progress_pane_t1

0xab38,	// (0x0004022b) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x000450db) vid4_progress_pane_t

0xab62,	// (0x00040255) wait_bar_pane_cp07

0x32bf,	// (0x000389b2) blid_firmament_pane_ParamLimits

0x3302,	// (0x000389f5) popup_blid_sat_info2_window_g1

0x3326,	// (0x00038a19) popup_blid_sat_info2_window_t3

0x3334,	// (0x00038a27) popup_blid_sat_info2_window_t4

0x3342,	// (0x00038a35) popup_blid_sat_info2_window_t5

0x3350,	// (0x00038a43) popup_blid_sat_info2_window_t6

0x3360,	// (0x00038a53) popup_blid_sat_info2_window_t7

0x336e,	// (0x00038a61) popup_blid_sat_info2_window_t8

0x337c,	// (0x00038a6f) popup_blid_sat_info2_window_t9

0x338a,	// (0x00038a7d) popup_blid_sat_info2_window_t10

0x344b,	// (0x00038b3e) aid_firma_cardinal_ParamLimits

0x345f,	// (0x00038b52) blid_firmament_pane_t1_ParamLimits

0x3476,	// (0x00038b69) blid_firmament_pane_t2_ParamLimits

0x348d,	// (0x00038b80) blid_firmament_pane_t3_ParamLimits

0x34a4,	// (0x00038b97) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x00044d03) blid_firmament_pane_t_ParamLimits

0x34bb,	// (0x00038bae) blid_sat_info_pane_ParamLimits

0x10d7,	// (0x000367ca) main_cam_set_pane_ParamLimits

0x91d3,	// (0x0003e8c6) aid_size_cell_colour_35_ParamLimits

0x91ed,	// (0x0003e8e0) aid_size_cell_colour_112_ParamLimits

0x9204,	// (0x0003e8f7) aid_size_cell_effect_ParamLimits

0x10d7,	// (0x000367ca) bg_tb_trans_pane_cp02_ParamLimits

0x18c3,	// (0x00036fb6) heading_imed_pane_ParamLimits

0x921e,	// (0x0003e911) listscroll_imed_pane_ParamLimits

0x27ac,	// (0x00037e9f) popup_call2_audio_first_window_g5_ParamLimits

0x27ac,	// (0x00037e9f) popup_call2_audio_first_window_g5

0x9812,	// (0x0003ef05) aid_size_touch_image3_arrow_left_ParamLimits

0x9812,	// (0x0003ef05) aid_size_touch_image3_arrow_left

0x9828,	// (0x0003ef1b) aid_size_touch_image3_arrow_right_ParamLimits

0x9828,	// (0x0003ef1b) aid_size_touch_image3_arrow_right

0xab4d,	// (0x00040240) vid4_progress_pane_t3

0x939f,	// (0x0003ea92) main_hwr_training_symbol_option_pane_ParamLimits

0x939f,	// (0x0003ea92) main_hwr_training_symbol_option_pane

0x3b38,	// (0x0003922b) popup_hwr_training_preview_window_ParamLimits

0x3b38,	// (0x0003922b) popup_hwr_training_preview_window

0x9400,	// (0x0003eaf3) hwr_training_navi_pane_g5_ParamLimits

0x9400,	// (0x0003eaf3) hwr_training_navi_pane_g5

0xd684,	// (0x00042d77) popup_char_count_window

0x1130,	// (0x00036823) bg_popup_sub_pane_cp20_ParamLimits

0xa666,	// (0x0003fd59) list_vitu2_match_list_pane_ParamLimits

0xa672,	// (0x0003fd65) vitu2_page_scroll_pane_ParamLimits

0xa672,	// (0x0003fd65) vitu2_page_scroll_pane

0xdb8e,	// (0x00043281) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb8e,	// (0x00043281) list_single_hwr_training_symbol_option_pane

0xdba1,	// (0x00043294) list_single_hwr_training_symbol_option_pane_g1

0xdba9,	// (0x0004329c) list_single_hwr_training_symbol_option_pane_t1

0xdbb7,	// (0x000432aa) bg_button_pane_cp023

0xdbc0,	// (0x000432b3) bg_button_pane_cp024

0xdbf3,	// (0x000432e6) vitu2_page_scroll_pane_g1

0xdbfb,	// (0x000432ee) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x000450e2) vitu2_page_scroll_pane_g

0xdc03,	// (0x000432f6) vitu2_page_scroll_pane_t1

0x3227,	// (0x0003891a) popup_char_count_window_g1

0xdc12,	// (0x00043305) popup_char_count_window_g2

0xdc1b,	// (0x0004330e) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x000450e7) popup_char_count_window_g

0xdc24,	// (0x00043317) popup_char_count_window_t1

0x0a3d,	// (0x00036130) main_vded2_pane

0x3996,	// (0x00039089) aid_size_cell_imed_line

0x39a0,	// (0x00039093) grid_imed_line_width_pane

0x9d1c,	// (0x0003f40f) vid4_indicators_pane_g4

0xdc32,	// (0x00043325) cell_imed_line_width_pane_ParamLimits

0xdc32,	// (0x00043325) cell_imed_line_width_pane

0xdc46,	// (0x00043339) cell_imed_line_width_pane_g1

0xdc4f,	// (0x00043342) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x000450ee) cell_imed_line_width_pane_g

0xab75,	// (0x00040268) main_vded2_pane_g1_ParamLimits

0xab75,	// (0x00040268) main_vded2_pane_g1

0xab82,	// (0x00040275) main_vded2_pane_g2_ParamLimits

0xab82,	// (0x00040275) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x000450f3) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x000450f3) main_vded2_pane_g

0xab90,	// (0x00040283) vded2_slider_pane_ParamLimits

0xab90,	// (0x00040283) vded2_slider_pane

0xab9d,	// (0x00040290) aid_size_touch_vded2_end

0xaba7,	// (0x0004029a) aid_size_touch_vded2_playhead

0xdc57,	// (0x0004334a) aid_size_touch_vded2_start

0xdc5f,	// (0x00043352) vded2_slider_bg_pane

0xdc68,	// (0x0004335b) vded2_slider_pane_g1

0xdc71,	// (0x00043364) vded2_slider_pane_g2

0xabaf,	// (0x000402a2) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x000450f8) vded2_slider_pane_g

0xdc79,	// (0x0004336c) vded2_slider_bg_pane_g1

0xdc82,	// (0x00043375) vded2_slider_bg_pane_g2

0xdc8b,	// (0x0004337e) vded2_slider_bg_pane_g3

0x0002,

0xfa0c,	// (0x000450ff) vded2_slider_bg_pane_g

0x7cea,	// (0x0003d3dd) aid_postcard_touch_down_pane_ParamLimits

0x7cea,	// (0x0003d3dd) aid_postcard_touch_down_pane

0x7cfa,	// (0x0003d3ed) aid_postcard_touch_up_pane_ParamLimits

0x7cfa,	// (0x0003d3ed) aid_postcard_touch_up_pane

0x0a3d,	// (0x00036130) main_blid2_pane

0x83b8,	// (0x0003daab) popup_blid2_search_window

0x0a3d,	// (0x00036130) blid2_gps_pane

0x0a3d,	// (0x00036130) blid2_navig_pane

0x0a3d,	// (0x00036130) blid2_search_pane

0x0a3d,	// (0x00036130) blid2_tripm_pane

0xabb8,	// (0x000402ab) blid2_search_pane_g1_ParamLimits

0xabb8,	// (0x000402ab) blid2_search_pane_g1

0xabc8,	// (0x000402bb) blid2_search_pane_t1_ParamLimits

0xabc8,	// (0x000402bb) blid2_search_pane_t1

0xabda,	// (0x000402cd) aid_size_cell_blid2_gps_ParamLimits

0xabda,	// (0x000402cd) aid_size_cell_blid2_gps

0xabea,	// (0x000402dd) blid2_gps_pane_g1_ParamLimits

0xabea,	// (0x000402dd) blid2_gps_pane_g1

0xabf6,	// (0x000402e9) grid_blid2_satellite_pane_ParamLimits

0xabf6,	// (0x000402e9) grid_blid2_satellite_pane

0xac06,	// (0x000402f9) blid2_navig_pane_g1_ParamLimits

0xac06,	// (0x000402f9) blid2_navig_pane_g1

0xac12,	// (0x00040305) blid2_navig_pane_t1_ParamLimits

0xac12,	// (0x00040305) blid2_navig_pane_t1

0xac24,	// (0x00040317) blid2_navig_pane_t2_ParamLimits

0xac24,	// (0x00040317) blid2_navig_pane_t2

0x0001,

0xfa13,	// (0x00045106) blid2_navig_pane_t_ParamLimits

0xfa13,	// (0x00045106) blid2_navig_pane_t

0xac36,	// (0x00040329) blid2_navig_ring_pane_ParamLimits

0xac36,	// (0x00040329) blid2_navig_ring_pane

0xac46,	// (0x00040339) blid2_speed_pane_ParamLimits

0xac46,	// (0x00040339) blid2_speed_pane

0xac52,	// (0x00040345) blid2_tripm_pane_g1_ParamLimits

0xac52,	// (0x00040345) blid2_tripm_pane_g1

0xac62,	// (0x00040355) blid2_tripm_pane_g2_ParamLimits

0xac62,	// (0x00040355) blid2_tripm_pane_g2

0xac6e,	// (0x00040361) blid2_tripm_pane_g3_ParamLimits

0xac6e,	// (0x00040361) blid2_tripm_pane_g3

0xac7a,	// (0x0004036d) blid2_tripm_pane_g4_ParamLimits

0xac7a,	// (0x0004036d) blid2_tripm_pane_g4

0xac86,	// (0x00040379) blid2_tripm_pane_g5_ParamLimits

0xac86,	// (0x00040379) blid2_tripm_pane_g5

0x0005,

0xfa18,	// (0x0004510b) blid2_tripm_pane_g_ParamLimits

0xfa18,	// (0x0004510b) blid2_tripm_pane_g

0xaca2,	// (0x00040395) blid2_tripm_pane_t1_ParamLimits

0xaca2,	// (0x00040395) blid2_tripm_pane_t1

0xacb6,	// (0x000403a9) blid2_tripm_pane_t2_ParamLimits

0xacb6,	// (0x000403a9) blid2_tripm_pane_t2

0xacc8,	// (0x000403bb) blid2_tripm_pane_t3_ParamLimits

0xacc8,	// (0x000403bb) blid2_tripm_pane_t3

0x0003,

0xfa25,	// (0x00045118) blid2_tripm_pane_t_ParamLimits

0xfa25,	// (0x00045118) blid2_tripm_pane_t

0xacfa,	// (0x000403ed) cell_blid2_satellite_pane_ParamLimits

0xacfa,	// (0x000403ed) cell_blid2_satellite_pane

0xad14,	// (0x00040407) cell_blid2_satellite_pane_g1

0xdc94,	// (0x00043387) cell_blid2_satellite_pane_t1

0x117c,	// (0x0003686f) blid2_speed_pane_g1

0xdca2,	// (0x00043395) blid2_speed_pane_t1

0xdcb0,	// (0x000433a3) blid2_speed_pane_t2

0x0001,

0xfa2e,	// (0x00045121) blid2_speed_pane_t

0x117c,	// (0x0003686f) blid2_navig_ring_pane_g1

0xad1d,	// (0x00040410) blid2_navig_ring_pane_g2

0xad25,	// (0x00040418) blid2_navig_ring_pane_g3

0xad2d,	// (0x00040420) blid2_navig_ring_pane_g4

0xad35,	// (0x00040428) blid2_navig_ring_pane_g5

0x0004,

0xfa33,	// (0x00045126) blid2_navig_ring_pane_g

0x0a3d,	// (0x00036130) bg_popup_window_pane_cp011

0xdcbe,	// (0x000433b1) popup_blid2_search_window_g1

0xdcc6,	// (0x000433b9) popup_blid2_search_window_t1

0xdcd4,	// (0x000433c7) popup_blid2_search_window_t2

0x0001,

0xfa3e,	// (0x00045131) popup_blid2_search_window_t

0x14bb,	// (0x00036bae) main_browser_pane_g1

0x11da,	// (0x000368cd) main_browser_pane_ParamLimits

0x10d7,	// (0x000367ca) bg_button_pane_cp011_ParamLimits

0x9f7f,	// (0x0003f672) cell_vitu2_function_pane_g1_ParamLimits

0x1ebe,	// (0x000375b1) bg_popup_sub_pane_cp22_ParamLimits

0x4d99,	// (0x0003a48c) input_focus_pane_cp08_ParamLimits

0xa7e7,	// (0x0003feda) popup_vitu2_query_button_pane_ParamLimits

0xa7e7,	// (0x0003feda) popup_vitu2_query_button_pane

0x4db4,	// (0x0003a4a7) popup_vitu2_query_input_button_pane

0xd948,	// (0x0004303b) popup_vitu2_query_window_g1_ParamLimits

0x4dbe,	// (0x0003a4b1) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x00045032) popup_vitu2_query_window_g_ParamLimits

0x0a3d,	// (0x00036130) bg_button_pane_cp026

0xad3d,	// (0x00040430) popup_vitu2_query_input_button_pane_g1

0x0a3d,	// (0x00036130) bg_button_pane_cp025

0xdce2,	// (0x000433d5) popup_vitu2_query_button_pane_t1

0x881e,	// (0x0003df11) main_mp3_pane_t6

0x882e,	// (0x0003df21) popup_slider_window_cp01

0x9bf9,	// (0x0003f2ec) cam4_battery_pane

0x9cd9,	// (0x0003f3cc) cam4_battery_pane_cp02

0xaad0,	// (0x000401c3) cam4_battery_pane_cp01

0xaad0,	// (0x000401c3) cam4_battery_pane_cp03

0x117c,	// (0x0003686f) cam4_battery_pane_g1

0xdcf0,	// (0x000433e3) cam4_battery_pane_g2

0x0001,

0xfa43,	// (0x00045136) cam4_battery_pane_g

0x3398,	// (0x00038a8b) popup_blid_sat_info2_window_t11

0x1c2e,	// (0x00037321) aid_size_touch_mv_arrow_left_ParamLimits

0x1c57,	// (0x0003734a) aid_size_touch_mv_arrow_right_ParamLimits

0x1cb5,	// (0x000373a8) navi_pane_g1_ParamLimits

0x1cc1,	// (0x000373b4) navi_pane_g2_ParamLimits

0x1cef,	// (0x000373e2) navi_pane_g3_ParamLimits

0xf334,	// (0x00044a27) navi_pane_g_ParamLimits

0x799e,	// (0x0003d091) navi_pane_mv_t1_ParamLimits

0x922a,	// (0x0003e91d) grid_imed_effect_pane_ParamLimits

0x64b9,	// (0x0003bbac) aid_placing_vt_slider_lsc

0x140a,	// (0x00036afd) aid_placing_vt_slider_prt

0x10d7,	// (0x000367ca) bg_tb_trans_pane_cp01_ParamLimits

0x363a,	// (0x00038d2d) popup_image_details_window_g1_ParamLimits

0x364d,	// (0x00038d40) popup_image_details_window_g2_ParamLimits

0x3662,	// (0x00038d55) popup_image_details_window_g3_ParamLimits

0x3662,	// (0x00038d55) popup_image_details_window_g3

0xf650,	// (0x00044d43) popup_image_details_window_g_ParamLimits

0x3676,	// (0x00038d69) popup_image_details_window_t1_ParamLimits

0x3688,	// (0x00038d7b) popup_image_details_window_t2_ParamLimits

0x36a1,	// (0x00038d94) popup_image_details_window_t3_ParamLimits

0x36b5,	// (0x00038da8) popup_image_details_window_t4_ParamLimits

0x36d0,	// (0x00038dc3) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x00044d4a) popup_image_details_window_t_ParamLimits

0xa9f4,	// (0x000400e7) cl_header_name_pane_ParamLimits

0xa9f4,	// (0x000400e7) cl_header_name_pane

0xad45,	// (0x00040438) cl_header_name_pane_t1_ParamLimits

0xad45,	// (0x00040438) cl_header_name_pane_t1

0xad5c,	// (0x0004044f) cl_header_name_pane_t2_ParamLimits

0xad5c,	// (0x0004044f) cl_header_name_pane_t2

0xad86,	// (0x00040479) cl_header_name_pane_t3_ParamLimits

0xad86,	// (0x00040479) cl_header_name_pane_t3

0x0002,

0xfa48,	// (0x0004513b) cl_header_name_pane_t_ParamLimits

0xfa48,	// (0x0004513b) cl_header_name_pane_t

0x1d7e,	// (0x00037471) navi_pane_mv_g2_ParamLimits

0xd66c,	// (0x00042d5f) field_vitu2_entry_pane_g1_ParamLimits

0xd678,	// (0x00042d6b) field_vitu2_entry_pane_g2_ParamLimits

0x1e9c,	// (0x0003758f) field_vitu2_entry_pane_g3_ParamLimits

0x1e9c,	// (0x0003758f) field_vitu2_entry_pane_g3

0xf848,	// (0x00044f3b) field_vitu2_entry_pane_g_ParamLimits

0x9f0d,	// (0x0003f600) cell_vitu2_itu_pane_g1_ParamLimits

0x9f25,	// (0x0003f618) cell_vitu2_itu_pane_g2_ParamLimits

0x9f25,	// (0x0003f618) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x00044f47) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x00044f47) cell_vitu2_itu_pane_g

0x10d7,	// (0x000367ca) bg_vkb2_func_pane_cp05_ParamLimits

0x10d7,	// (0x000367ca) bg_vkb2_func_pane_cp05

0x10d7,	// (0x000367ca) bg_vkb2_func_pane_cp03

0x10d7,	// (0x000367ca) bg_vkb2_func_pane_cp04

0x10d7,	// (0x000367ca) bg_vkb2_func_pane_cp10_ParamLimits

0x10d7,	// (0x000367ca) bg_vkb2_func_pane_cp10

0x4f7f,	// (0x0003a672) bg_vkb2_func_pane_cp08

0xa7cf,	// (0x0003fec2) bg_vkb2_func_pane_cp06

0xa9ac,	// (0x0004009f) bg_vkb2_func_pane_cp07

0xdbc9,	// (0x000432bc) bg_vkb2_func_pane_cp11_ParamLimits

0xdbc9,	// (0x000432bc) bg_vkb2_func_pane_cp11

0xdbde,	// (0x000432d1) bg_vkb2_func_pane_cp12_ParamLimits

0xdbde,	// (0x000432d1) bg_vkb2_func_pane_cp12

0x0a3d,	// (0x00036130) bg_vkb2_func_pane_cp09

0xd696,	// (0x00042d89) bg_vkb2_func_pane_g1

0x15cc,	// (0x00036cbf) bg_vkb2_func_pane_g2

0xd69e,	// (0x00042d91) bg_vkb2_func_pane_g3

0xd6a6,	// (0x00042d99) bg_vkb2_func_pane_g4

0xd905,	// (0x00042ff8) bg_vkb2_func_pane_g5

0xd6be,	// (0x00042db1) bg_vkb2_func_pane_g6

0xd6c6,	// (0x00042db9) bg_vkb2_func_pane_g7

0xd6b6,	// (0x00042da9) bg_vkb2_func_pane_g8

0x15ac,	// (0x00036c9f) bg_vkb2_func_pane_g9

0x0008,

0xfa4f,	// (0x00045142) bg_vkb2_func_pane_g

0xac94,	// (0x00040387) blid2_tripm_pane_g6_ParamLimits

0xac94,	// (0x00040387) blid2_tripm_pane_g6

0xd5ac,	// (0x00042c9f) mp4_progress_pane_g1

0xacee,	// (0x000403e1) blid2_tripm_values_pane_ParamLimits

0xacee,	// (0x000403e1) blid2_tripm_values_pane

0xadab,	// (0x0004049e) blid2_tripm_values_pane_t1

0xadb9,	// (0x000404ac) blid2_tripm_values_pane_t2

0xadc7,	// (0x000404ba) blid2_tripm_values_pane_t3

0xadd5,	// (0x000404c8) blid2_tripm_values_pane_t4

0xade3,	// (0x000404d6) blid2_tripm_values_pane_t5

0xadf1,	// (0x000404e4) blid2_tripm_values_pane_t6

0xadff,	// (0x000404f2) blid2_tripm_values_pane_t7

0xae0d,	// (0x00040500) blid2_tripm_values_pane_t8

0xae1b,	// (0x0004050e) blid2_tripm_values_pane_t9

0x0008,

0xfa62,	// (0x00045155) blid2_tripm_values_pane_t

0x64f9,	// (0x0003bbec) call_video_pane_t1_ParamLimits

0x651a,	// (0x0003bc0d) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x000448d0) call_video_pane_t_ParamLimits

0x4b2a,	// (0x0003a21d) msg_header_pane_g1_ParamLimits

0x1f8a,	// (0x0003767d) msg_header_pane_g2_ParamLimits

0x1f8a,	// (0x0003767d) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x00044ac5) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x00044ac5) msg_header_pane_g

0x11da,	// (0x000368cd) main_clock2_pane_ParamLimits

0x8fa4,	// (0x0003e697) grid_clock2_toolbar_pane_ParamLimits

0x8fa4,	// (0x0003e697) grid_clock2_toolbar_pane

0x8fa4,	// (0x0003e697) listscroll_clock2_pane_ParamLimits

0x8fa4,	// (0x0003e697) listscroll_clock2_pane

0x9054,	// (0x0003e747) main_clock2_pane_t3_ParamLimits

0x9054,	// (0x0003e747) main_clock2_pane_t3

0x9066,	// (0x0003e759) main_clock2_pane_t4_ParamLimits

0x9066,	// (0x0003e759) main_clock2_pane_t4

0xdcfa,	// (0x000433ed) cell_clock2_toolbar_pane

0xdd02,	// (0x000433f5) cell_clock2_toolbar_pane_cp01

0xdd02,	// (0x000433f5) cell_clock2_toolbar_pane_cp02

0xdd0a,	// (0x000433fd) cell_clock2_toolbar_pane_cp03

0xdd12,	// (0x00043405) list_clock2_pane

0x1ba4,	// (0x00037297) scroll_pane_cp10

0xdd1a,	// (0x0004340d) list_single_clock2_pane_ParamLimits

0xdd1a,	// (0x0004340d) list_single_clock2_pane

0x13b3,	// (0x00036aa6) list_highlight_pane_cp08

0xdd27,	// (0x0004341a) list_single_clock2_pane_t1

0xdd35,	// (0x00043428) list_single_clock2_pane_t2

0x0001,

0xfa75,	// (0x00045168) list_single_clock2_pane_t

0x0a3d,	// (0x00036130) bg_button_pane_cp10

0xdd43,	// (0x00043436) cell_clock2_toolbar_pane_g1

0x7c4c,	// (0x0003d33f) aid_main_viewer_pane_g1_ParamLimits

0x7c4c,	// (0x0003d33f) aid_main_viewer_pane_g1

0x7c58,	// (0x0003d34b) aid_main_viewer_pane_g2_ParamLimits

0x7c58,	// (0x0003d34b) aid_main_viewer_pane_g2

0x7c64,	// (0x0003d357) aid_main_viewer_pane_g3_ParamLimits

0x7c64,	// (0x0003d357) aid_main_viewer_pane_g3

0x7c75,	// (0x0003d368) aid_main_viewer_pane_g4_ParamLimits

0x7c75,	// (0x0003d368) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x00044ad6) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x00044ad6) aid_main_viewer_pane_g

0x8390,	// (0x0003da83) main_calc_pane_ParamLimits

0x839d,	// (0x0003da90) main_dialer2_pane_ParamLimits

0x0a3d,	// (0x00036130) main_cam6_pane

0x0a3d,	// (0x00036130) main_vid6_pane

0x8fb0,	// (0x0003e6a3) listscroll_gen_pane_cp06_ParamLimits

0x8fb0,	// (0x0003e6a3) listscroll_gen_pane_cp06

0x9078,	// (0x0003e76b) main_clock2_pane_t5_ParamLimits

0x9078,	// (0x0003e76b) main_clock2_pane_t5

0x90c5,	// (0x0003e7b8) aid_call2_pane_cp10_ParamLimits

0x90d7,	// (0x0003e7ca) aid_call_pane_cp10_ParamLimits

0x1c22,	// (0x00037315) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1c22,	// (0x00037315) popup_clock_analogue_window_cp10_g2_ParamLimits

0x90e9,	// (0x0003e7dc) popup_clock_analogue_window_cp10_g3_ParamLimits

0x90e9,	// (0x0003e7dc) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1c22,	// (0x00037315) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x00044dff) popup_clock_analogue_window_cp10_g_ParamLimits

0x90ff,	// (0x0003e7f2) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd61d,	// (0x00042d10) cell_dialer2_keypad_pane_g2_ParamLimits

0xd61d,	// (0x00042d10) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x00044eda) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x00044eda) cell_dialer2_keypad_pane_g

0x1186,	// (0x00036879) cell_dialer2_keypad_pane_t1

0xa23d,	// (0x0003f930) main_cset_text2_pane_ParamLimits

0xa23d,	// (0x0003f930) main_cset_text2_pane

0xdb28,	// (0x0004321b) area_vitu2_query_pane_g1_ParamLimits

0x4e99,	// (0x0003a58c) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x00045085) area_vitu2_query_pane_g_ParamLimits

0x4f4a,	// (0x0003a63d) area_vitu2_query_pane_t7_ParamLimits

0x4f4a,	// (0x0003a63d) area_vitu2_query_pane_t7

0xa7cf,	// (0x0003fec2) bg_button_pane_cp018_ParamLimits

0xa9ac,	// (0x0004009f) bg_button_pane_cp021_ParamLimits

0x4f6e,	// (0x0003a661) bg_button_pane_cp022_ParamLimits

0x4f7f,	// (0x0003a672) bg_vkb2_func_pane_cp08_ParamLimits

0xa7cf,	// (0x0003fec2) bg_vkb2_func_pane_cp06_ParamLimits

0xa9ac,	// (0x0004009f) bg_vkb2_func_pane_cp07_ParamLimits

0x4f91,	// (0x0003a684) input_focus_pane_cp09_ParamLimits

0xae29,	// (0x0004051c) cam6_autofocus_pane_ParamLimits

0xae29,	// (0x0004051c) cam6_autofocus_pane

0xae45,	// (0x00040538) cam6_image_uncrop_pane_ParamLimits

0xae45,	// (0x00040538) cam6_image_uncrop_pane

0xae7e,	// (0x00040571) cam6_indi_pane_ParamLimits

0xae7e,	// (0x00040571) cam6_indi_pane

0xae98,	// (0x0004058b) cam6_mode_pane_ParamLimits

0xae98,	// (0x0004058b) cam6_mode_pane

0xaeac,	// (0x0004059f) cam6_timer_pane_ParamLimits

0xaeac,	// (0x0004059f) cam6_timer_pane

0xaec0,	// (0x000405b3) cam6_zoom_pane_ParamLimits

0xaec0,	// (0x000405b3) cam6_zoom_pane

0xaedb,	// (0x000405ce) cam6_mode_pane_g1_ParamLimits

0xaedb,	// (0x000405ce) cam6_mode_pane_g1

0xaee7,	// (0x000405da) cam6_mode_pane_g2_ParamLimits

0xaee7,	// (0x000405da) cam6_mode_pane_g2

0xaef3,	// (0x000405e6) cam6_mode_pane_g3_ParamLimits

0xaef3,	// (0x000405e6) cam6_mode_pane_g3

0xaeff,	// (0x000405f2) cam6_mode_pane_g4_ParamLimits

0xaeff,	// (0x000405f2) cam6_mode_pane_g4

0x0003,

0xfa7a,	// (0x0004516d) cam6_mode_pane_g_ParamLimits

0xfa7a,	// (0x0004516d) cam6_mode_pane_g

0x34cb,	// (0x00038bbe) bg_tb_trans_pane_cp08_ParamLimits

0x34cb,	// (0x00038bbe) bg_tb_trans_pane_cp08

0xdd4b,	// (0x0004343e) cam6_battery_pane_ParamLimits

0xdd4b,	// (0x0004343e) cam6_battery_pane

0xdd61,	// (0x00043454) cam6_indi_pane_g1_ParamLimits

0xdd61,	// (0x00043454) cam6_indi_pane_g1

0xdd73,	// (0x00043466) cam6_indi_pane_g2_ParamLimits

0xdd73,	// (0x00043466) cam6_indi_pane_g2

0xdd85,	// (0x00043478) cam6_indi_pane_g3_ParamLimits

0xdd85,	// (0x00043478) cam6_indi_pane_g3

0x0002,

0xfa83,	// (0x00045176) cam6_indi_pane_g_ParamLimits

0xfa83,	// (0x00045176) cam6_indi_pane_g

0xdd97,	// (0x0004348a) cam6_indi_pane_t1_ParamLimits

0xdd97,	// (0x0004348a) cam6_indi_pane_t1

0x9d51,	// (0x0003f444) cam6_autofocus_pane_g1

0x9d59,	// (0x0003f44c) cam6_autofocus_pane_g2

0x9d61,	// (0x0003f454) cam6_autofocus_pane_g3

0x9d69,	// (0x0003f45c) cam6_autofocus_pane_g4

0x0003,

0xfa8a,	// (0x0004517d) cam6_autofocus_pane_g

0xddbd,	// (0x000434b0) cam6_timer_pane_g1

0xddc5,	// (0x000434b8) cam6_timer_pane_t1

0xddd3,	// (0x000434c6) cam6_zoom_cont_pane

0xdddb,	// (0x000434ce) cam6_zoom_pane_g1

0xdde4,	// (0x000434d7) cam6_zoom_pane_g2

0xaf0b,	// (0x000405fe) cam6_zoom_pane_g3

0x0002,

0xfa93,	// (0x00045186) cam6_zoom_pane_g

0x117c,	// (0x0003686f) cam6_battery_pane_g1

0x117c,	// (0x0003686f) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000447a2) cam6_battery_pane_g

0xdddb,	// (0x000434ce) cam6_zoom_cont_pane_g1

0xdde4,	// (0x000434d7) cam6_zoom_cont_pane_g2

0xdded,	// (0x000434e0) cam6_zoom_cont_pane_g3

0x0002,

0xfa9a,	// (0x0004518d) cam6_zoom_cont_pane_g

0xaf29,	// (0x0004061c) cam6_mode_pane_cp_ParamLimits

0xaf29,	// (0x0004061c) cam6_mode_pane_cp

0xaf3d,	// (0x00040630) cam6_zoom_pane_cp_ParamLimits

0xaf3d,	// (0x00040630) cam6_zoom_pane_cp

0xaf55,	// (0x00040648) vid6_image_uncrop_cif_pane_ParamLimits

0xaf55,	// (0x00040648) vid6_image_uncrop_cif_pane

0xaf81,	// (0x00040674) vid6_image_uncrop_nhd_pane_ParamLimits

0xaf81,	// (0x00040674) vid6_image_uncrop_nhd_pane

0xaf9e,	// (0x00040691) vid6_image_uncrop_vga_pane_ParamLimits

0xaf9e,	// (0x00040691) vid6_image_uncrop_vga_pane

0xafbd,	// (0x000406b0) vid6_image_uncrop_wvga_pane_ParamLimits

0xafbd,	// (0x000406b0) vid6_image_uncrop_wvga_pane

0xafda,	// (0x000406cd) vid6_indi_pane_ParamLimits

0xafda,	// (0x000406cd) vid6_indi_pane

0x34cb,	// (0x00038bbe) bg_tb_trans_pane_cp09_ParamLimits

0x34cb,	// (0x00038bbe) bg_tb_trans_pane_cp09

0xde05,	// (0x000434f8) cam6_battery_pane_cp_ParamLimits

0xde05,	// (0x000434f8) cam6_battery_pane_cp

0xde11,	// (0x00043504) vid6_indi_pane_g1_ParamLimits

0xde11,	// (0x00043504) vid6_indi_pane_g1

0xde23,	// (0x00043516) vid6_indi_pane_g2_ParamLimits

0xde23,	// (0x00043516) vid6_indi_pane_g2

0xde35,	// (0x00043528) vid6_indi_pane_g3_ParamLimits

0xde35,	// (0x00043528) vid6_indi_pane_g3

0xde4a,	// (0x0004353d) vid6_indi_pane_g4_ParamLimits

0xde4a,	// (0x0004353d) vid6_indi_pane_g4

0xde5f,	// (0x00043552) vid6_indi_pane_g5_ParamLimits

0xde5f,	// (0x00043552) vid6_indi_pane_g5

0x0004,

0xfaa1,	// (0x00045194) vid6_indi_pane_g_ParamLimits

0xfaa1,	// (0x00045194) vid6_indi_pane_g

0xde79,	// (0x0004356c) vid6_indi_pane_t1_ParamLimits

0xde79,	// (0x0004356c) vid6_indi_pane_t1

0xde8f,	// (0x00043582) vid6_indi_pane_t2_ParamLimits

0xde8f,	// (0x00043582) vid6_indi_pane_t2

0xdeb7,	// (0x000435aa) vid6_indi_pane_t3_ParamLimits

0xdeb7,	// (0x000435aa) vid6_indi_pane_t3

0xdedf,	// (0x000435d2) vid6_indi_pane_t4_ParamLimits

0xdedf,	// (0x000435d2) vid6_indi_pane_t4

0x0003,

0xfaac,	// (0x0004519f) vid6_indi_pane_t_ParamLimits

0xfaac,	// (0x0004519f) vid6_indi_pane_t

0xdf03,	// (0x000435f6) wait_bar_pane_cp08

0xafff,	// (0x000406f2) main_cset_text2_pane_t1_ParamLimits

0xafff,	// (0x000406f2) main_cset_text2_pane_t1

0xaf14,	// (0x00040607) listscroll_gen_pane_cp06_t1_ParamLimits

0xaf14,	// (0x00040607) listscroll_gen_pane_cp06_t1

0x0a3d,	// (0x00036130) main_cam6_set_pane

0x113e,	// (0x00036831) bg_tb_trans_pane_cp06_ParamLimits

0x9c01,	// (0x0003f2f4) cam4_indicators_pane_g1_ParamLimits

0x9c12,	// (0x0003f305) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x00044f17) cam4_indicators_pane_g_ParamLimits

0x9c30,	// (0x0003f323) cam4_indicators_pane_t1_ParamLimits

0x10d7,	// (0x000367ca) bg_tb_trans_pane_cp07_ParamLimits

0x9ce3,	// (0x0003f3d6) vid4_indicators_pane_g1_ParamLimits

0x9cf7,	// (0x0003f3ea) vid4_indicators_pane_g2_ParamLimits

0x9d0b,	// (0x0003f3fe) vid4_indicators_pane_g3_ParamLimits

0x9d1c,	// (0x0003f40f) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x00044f29) vid4_indicators_pane_g_ParamLimits

0x9d3a,	// (0x0003f42d) vid4_indicators_pane_t1_ParamLimits

0xaad8,	// (0x000401cb) vid4_progress_pane_g1_ParamLimits

0xaae8,	// (0x000401db) vid4_progress_pane_g2_ParamLimits

0xaaf8,	// (0x000401eb) vid4_progress_pane_g3_ParamLimits

0xab0a,	// (0x000401fd) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x000450d0) vid4_progress_pane_g_ParamLimits

0xab22,	// (0x00040215) vid4_progress_pane_t1_ParamLimits

0xab38,	// (0x0004022b) vid4_progress_pane_t2_ParamLimits

0xab4d,	// (0x00040240) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x000450db) vid4_progress_pane_t_ParamLimits

0xab62,	// (0x00040255) wait_bar_pane_cp07_ParamLimits

0xb032,	// (0x00040725) main_cam6_set_pane_g2_ParamLimits

0xb032,	// (0x00040725) main_cam6_set_pane_g2

0xb03e,	// (0x00040731) main_cset6_listscroll_pane_ParamLimits

0xb03e,	// (0x00040731) main_cset6_listscroll_pane

0xb069,	// (0x0004075c) main_cset6_slider_pane_ParamLimits

0xb069,	// (0x0004075c) main_cset6_slider_pane

0xb075,	// (0x00040768) main_cset6_text2_pane_ParamLimits

0xb075,	// (0x00040768) main_cset6_text2_pane

0xdf12,	// (0x00043605) main_cset6_text_pane

0xdf1a,	// (0x0004360d) main_cset_list_pane_copy1_ParamLimits

0xdf1a,	// (0x0004360d) main_cset_list_pane_copy1

0xdf2a,	// (0x0004361d) scroll_pane_cp028_copy1

0xb088,	// (0x0004077b) cset_list_set_pane_copy1

0xb09b,	// (0x0004078e) aid_position_infowindow_above_copy1

0xb0a3,	// (0x00040796) aid_position_infowindow_below_copy1

0x4fce,	// (0x0003a6c1) cset_list_set_pane_g1_copy1

0x4d60,	// (0x0003a453) cset_list_set_pane_g3_copy1_ParamLimits

0x4d60,	// (0x0003a453) cset_list_set_pane_g3_copy1

0x4d6f,	// (0x0003a462) cset_list_set_pane_t1_copy1_ParamLimits

0x4d6f,	// (0x0003a462) cset_list_set_pane_t1_copy1

0x10d7,	// (0x000367ca) list_highlight_pane_cp021_copy1_ParamLimits

0x10d7,	// (0x000367ca) list_highlight_pane_cp021_copy1

0xdf33,	// (0x00043626) cset6_slider_pane_ParamLimits

0xdf33,	// (0x00043626) cset6_slider_pane

0xdf5f,	// (0x00043652) main_cset6_slider_pane_g1_ParamLimits

0xdf5f,	// (0x00043652) main_cset6_slider_pane_g1

0xb0ab,	// (0x0004079e) main_cset6_slider_pane_g2_ParamLimits

0xb0ab,	// (0x0004079e) main_cset6_slider_pane_g2

0xdf87,	// (0x0004367a) main_cset6_slider_pane_g3_ParamLimits

0xdf87,	// (0x0004367a) main_cset6_slider_pane_g3

0xb0d3,	// (0x000407c6) main_cset6_slider_pane_g4_ParamLimits

0xb0d3,	// (0x000407c6) main_cset6_slider_pane_g4

0xb0df,	// (0x000407d2) main_cset6_slider_pane_g5_ParamLimits

0xb0df,	// (0x000407d2) main_cset6_slider_pane_g5

0xd7eb,	// (0x00042ede) main_cset6_slider_pane_g7_ParamLimits

0xd7eb,	// (0x00042ede) main_cset6_slider_pane_g7

0xd7f7,	// (0x00042eea) main_cset6_slider_pane_g8_ParamLimits

0xd7f7,	// (0x00042eea) main_cset6_slider_pane_g8

0xb0ed,	// (0x000407e0) main_cset6_slider_pane_g9_ParamLimits

0xb0ed,	// (0x000407e0) main_cset6_slider_pane_g9

0xb0f9,	// (0x000407ec) main_cset6_slider_pane_g10_ParamLimits

0xb0f9,	// (0x000407ec) main_cset6_slider_pane_g10

0xb105,	// (0x000407f8) main_cset6_slider_pane_g11_ParamLimits

0xb105,	// (0x000407f8) main_cset6_slider_pane_g11

0xb111,	// (0x00040804) main_cset6_slider_pane_g12_ParamLimits

0xb111,	// (0x00040804) main_cset6_slider_pane_g12

0xb11d,	// (0x00040810) main_cset6_slider_pane_g13_ParamLimits

0xb11d,	// (0x00040810) main_cset6_slider_pane_g13

0xb129,	// (0x0004081c) main_cset6_slider_pane_g14_ParamLimits

0xb129,	// (0x0004081c) main_cset6_slider_pane_g14

0xb135,	// (0x00040828) main_cset6_slider_pane_g15_ParamLimits

0xb135,	// (0x00040828) main_cset6_slider_pane_g15

0xb14d,	// (0x00040840) main_cset6_slider_pane_g16_ParamLimits

0xb14d,	// (0x00040840) main_cset6_slider_pane_g16

0xb15b,	// (0x0004084e) main_cset6_slider_pane_g17_ParamLimits

0xb15b,	// (0x0004084e) main_cset6_slider_pane_g17

0x0011,

0xfab5,	// (0x000451a8) main_cset6_slider_pane_g_ParamLimits

0xfab5,	// (0x000451a8) main_cset6_slider_pane_g

0xdf93,	// (0x00043686) main_cset6_slider_pane_t1_ParamLimits

0xdf93,	// (0x00043686) main_cset6_slider_pane_t1

0xb181,	// (0x00040874) main_cset6_slider_pane_t2_ParamLimits

0xb181,	// (0x00040874) main_cset6_slider_pane_t2

0xb1ac,	// (0x0004089f) main_cset6_slider_pane_t3_ParamLimits

0xb1ac,	// (0x0004089f) main_cset6_slider_pane_t3

0xb1d7,	// (0x000408ca) main_cset6_slider_pane_t4_ParamLimits

0xb1d7,	// (0x000408ca) main_cset6_slider_pane_t4

0xb202,	// (0x000408f5) main_cset6_slider_pane_t5_ParamLimits

0xb202,	// (0x000408f5) main_cset6_slider_pane_t5

0xdfd4,	// (0x000436c7) main_cset6_slider_pane_t7_ParamLimits

0xdfd4,	// (0x000436c7) main_cset6_slider_pane_t7

0xb22f,	// (0x00040922) main_cset6_slider_pane_t8_ParamLimits

0xb22f,	// (0x00040922) main_cset6_slider_pane_t8

0xb253,	// (0x00040946) main_cset6_slider_pane_t9_ParamLimits

0xb253,	// (0x00040946) main_cset6_slider_pane_t9

0xb277,	// (0x0004096a) main_cset6_slider_pane_t10_ParamLimits

0xb277,	// (0x0004096a) main_cset6_slider_pane_t10

0xb29b,	// (0x0004098e) main_cset6_slider_pane_t11_ParamLimits

0xb29b,	// (0x0004098e) main_cset6_slider_pane_t11

0xe00a,	// (0x000436fd) main_cset6_slider_pane_t14_ParamLimits

0xe00a,	// (0x000436fd) main_cset6_slider_pane_t14

0xe043,	// (0x00043736) main_cset6_slider_pane_t15_ParamLimits

0xe043,	// (0x00043736) main_cset6_slider_pane_t15

0x000b,

0xfada,	// (0x000451cd) main_cset6_slider_pane_t_ParamLimits

0xfada,	// (0x000451cd) main_cset6_slider_pane_t

0xd8b9,	// (0x00042fac) cset_slider_pane_g1_copy1

0xd8c2,	// (0x00042fb5) cset_slider_pane_g2_copy1

0xd8cb,	// (0x00042fbe) cset_slider_pane_g3_copy1

0x0a3d,	// (0x00036130) bg_popup_sub_pane_cp011_copy1

0xe07c,	// (0x0004376f) main_cset_text_pane_g1_copy1

0xd95c,	// (0x0004304f) main_cset_text_pane_t1_copy1

0xd96a,	// (0x0004305d) main_cset_text_pane_t2_copy1

0xd978,	// (0x0004306b) main_cset_text_pane_t3_copy1

0xd986,	// (0x00043079) main_cset_text_pane_t4_copy1

0xd994,	// (0x00043087) main_cset_text_pane_t5_copy1

0xe084,	// (0x00043777) main_cset_text_pane_t6_copy1

0xe092,	// (0x00043785) main_cset_text_pane_t7_copy1

0xb2bf,	// (0x000409b2) main_cset_text2_pane_t1_copy1

0x10d7,	// (0x000367ca) main_ncimui_pane

0x83ee,	// (0x0003dae1) popup_query_ncimui_window_ParamLimits

0x83ee,	// (0x0003dae1) popup_query_ncimui_window

0x4c03,	// (0x0003a2f6) field_cale_ev2_pane_g4_ParamLimits

0x4c03,	// (0x0003a2f6) field_cale_ev2_pane_g4

0x94d4,	// (0x0003ebc7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x94d4,	// (0x0003ebc7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x00044eb1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x00044eb1) cell_video_dialer_keypad_pane_g

0x94ec,	// (0x0003ebdf) cell_video_dialer_keypad_pane_t1

0x0a3d,	// (0x00036130) bg_popup_window_pane_cp012

0x2fff,	// (0x000386f2) heading_pane_cp06

0xe0ca,	// (0x000437bd) ncim_query_content_pane

0x0a3d,	// (0x00036130) bg_popup_heading_pane_cp01

0xe0d2,	// (0x000437c5) ncim_heading_pane_t1

0xe0e0,	// (0x000437d3) ncim_indicator_popup_pane

0xe0f2,	// (0x000437e5) ncim_query_button_pane

0xe106,	// (0x000437f9) ncim_query_content_pane_t1

0xe118,	// (0x0004380b) ncim_query_content_pane_t2

0x0005,

0xfb1e,	// (0x00045211) ncim_query_content_pane_t

0xe152,	// (0x00043845) ncim_query_list_pane

0xe164,	// (0x00043857) ncim_query_popup_pane

0xe0e0,	// (0x000437d3) ncim_indicator_popup_pane_ParamLimits

0xb412,	// (0x00040b05) ncim_query_content_pane_g1_ParamLimits

0xb412,	// (0x00040b05) ncim_query_content_pane_g1

0xe106,	// (0x000437f9) ncim_query_content_pane_t1_ParamLimits

0xe118,	// (0x0004380b) ncim_query_content_pane_t2_ParamLimits

0xb41e,	// (0x00040b11) ncim_query_content_pane_t3_ParamLimits

0xb41e,	// (0x00040b11) ncim_query_content_pane_t3

0xb43b,	// (0x00040b2e) ncim_query_content_pane_t4_ParamLimits

0xb43b,	// (0x00040b2e) ncim_query_content_pane_t4

0xb458,	// (0x00040b4b) ncim_query_content_pane_t5_ParamLimits

0xb458,	// (0x00040b4b) ncim_query_content_pane_t5

0xe12a,	// (0x0004381d) ncim_query_content_pane_t6_ParamLimits

0xe12a,	// (0x0004381d) ncim_query_content_pane_t6

0xfb1e,	// (0x00045211) ncim_query_content_pane_t_ParamLimits

0xe152,	// (0x00043845) ncim_query_list_pane_ParamLimits

0xe164,	// (0x00043857) ncim_query_popup_pane_ParamLimits

0xe178,	// (0x0004386b) wait_bar_pane_cp04

0x0a3d,	// (0x00036130) input_focus_pane_cp011

0xe180,	// (0x00043873) ncim_query_popup_pane_t1

0xe18e,	// (0x00043881) ncim_list_query_list_pane_ParamLimits

0xe18e,	// (0x00043881) ncim_list_query_list_pane

0x0a3d,	// (0x00036130) bg_button_pane_cp027

0xe19b,	// (0x0004388e) ncim_query_button_pane_g1

0x0a3d,	// (0x00036130) list_highlight_pane_cp012

0xe1a5,	// (0x00043898) ncim_list_query_list_pane_g1

0xe1ad,	// (0x000438a0) ncim_list_query_list_pane_t1

0x9c21,	// (0x0003f314) cam4_indicators_pane_g3_ParamLimits

0x9c21,	// (0x0003f314) cam4_indicators_pane_g3

0x9d28,	// (0x0003f41b) vid4_indicators_pane_g5_ParamLimits

0x9d28,	// (0x0003f41b) vid4_indicators_pane_g5

0xab16,	// (0x00040209) vid4_progress_pane_g5_ParamLimits

0xab16,	// (0x00040209) vid4_progress_pane_g5

0xb2fe,	// (0x000409f1) main_ncimui_pane_g1

0xb366,	// (0x00040a59) ncimui_group_query_pane_ParamLimits

0xb366,	// (0x00040a59) ncimui_group_query_pane

0xb3ae,	// (0x00040aa1) ncimui_list_pane_ParamLimits

0xb3ae,	// (0x00040aa1) ncimui_list_pane

0xb3d5,	// (0x00040ac8) ncimui_text_pane_ParamLimits

0xb3d5,	// (0x00040ac8) ncimui_text_pane

0xb475,	// (0x00040b68) ncimui_text_pane_t1_ParamLimits

0xb475,	// (0x00040b68) ncimui_text_pane_t1

0xe1bb,	// (0x000438ae) ncimui_list_single_graphic_pane_ParamLimits

0xe1bb,	// (0x000438ae) ncimui_list_single_graphic_pane

0xb494,	// (0x00040b87) ncimui_query_pane_ParamLimits

0xb494,	// (0x00040b87) ncimui_query_pane

0x0a3d,	// (0x00036130) list_highlight_pane_cp013

0xe1cb,	// (0x000438be) ncim_list_query_list_pane_t1_copy1

0xe1a5,	// (0x00043898) ncim_list_single_graphic_pane_g1

0xb4a7,	// (0x00040b9a) ncim_query_button_pane_cp01

0xb4b3,	// (0x00040ba6) ncim_query_entry_pane_ParamLimits

0xb4b3,	// (0x00040ba6) ncim_query_entry_pane

0xb4c6,	// (0x00040bb9) ncimui_query_pane_g1

0xb4d2,	// (0x00040bc5) ncimui_query_pane_t1_ParamLimits

0xb4d2,	// (0x00040bc5) ncimui_query_pane_t1

0x10d7,	// (0x000367ca) input_focus_pane_cp012

0xe1d9,	// (0x000438cc) ncim_query_entry_pane_t1

0x11da,	// (0x000368cd) main_im_pane_ParamLimits

0x10d7,	// (0x000367ca) main_mobtv_pane_ParamLimits

0x10d7,	// (0x000367ca) main_mobtv_pane

0xb169,	// (0x0004085c) main_cset6_slider_pane_g18_ParamLimits

0xb169,	// (0x0004085c) main_cset6_slider_pane_g18

0xb175,	// (0x00040868) main_cset6_slider_pane_g19_ParamLimits

0xb175,	// (0x00040868) main_cset6_slider_pane_g19

0x1e9c,	// (0x0003758f) bg_main_mobtv_pane_ParamLimits

0x1e9c,	// (0x0003758f) bg_main_mobtv_pane

0xb4eb,	// (0x00040bde) main_mobtv_info_pane

0xb4f6,	// (0x00040be9) main_mobtv_loading_pane_ParamLimits

0xb4f6,	// (0x00040be9) main_mobtv_loading_pane

0xe1eb,	// (0x000438de) main_mobtv_pg_channel_list_pane

0xe1f5,	// (0x000438e8) main_mobtv_pg_hdr_pane

0xb503,	// (0x00040bf6) main_mobtv_programe_curr_pane_ParamLimits

0xb503,	// (0x00040bf6) main_mobtv_programe_curr_pane

0xb510,	// (0x00040c03) main_mobtv_programe_next_pane_ParamLimits

0xb510,	// (0x00040c03) main_mobtv_programe_next_pane

0xe1fe,	// (0x000438f1) popup_mobtv_noti_window

0x117c,	// (0x0003686f) main_tv_pg_hdr_pane_g1

0xe206,	// (0x000438f9) main_tv_pg_hdr_pane_g2

0xe20e,	// (0x00043901) main_tv_pg_hdr_pane_g3

0xe216,	// (0x00043909) main_tv_pg_hdr_pane_g4

0xe21e,	// (0x00043911) main_tv_pg_hdr_pane_g5

0xe228,	// (0x0004391b) main_tv_pg_hdr_pane_g6

0xe232,	// (0x00043925) main_tv_pg_hdr_pane_g7

0xe23c,	// (0x0004392f) main_tv_pg_hdr_pane_g8

0xe246,	// (0x00043939) main_tv_pg_hdr_pane_g9

0xe250,	// (0x00043943) main_tv_pg_hdr_pane_g10

0xe25a,	// (0x0004394d) main_tv_pg_hdr_pane_g11

0x000a,

0xfb2b,	// (0x0004521e) main_tv_pg_hdr_pane_g

0xe264,	// (0x00043957) main_tv_pg_hdr_pane_t1

0xe272,	// (0x00043965) main_tv_pg_hdr_pane_t2

0xe280,	// (0x00043973) main_tv_pg_hdr_pane_t3

0xe290,	// (0x00043983) main_tv_pg_hdr_pane_t4

0xe2a0,	// (0x00043993) main_tv_pg_hdr_pane_t5

0x0004,

0xfb42,	// (0x00045235) main_tv_pg_hdr_pane_t

0xe2b0,	// (0x000439a3) single_mobtv_pg_channel_pane_ParamLimits

0xe2b0,	// (0x000439a3) single_mobtv_pg_channel_pane

0xe2c2,	// (0x000439b5) single_mobtv_pg_channel_table_pane

0xe2cb,	// (0x000439be) single_mobtv_pg_channel_thumb_pane

0xe2d4,	// (0x000439c7) single_tv_pg_channel_pane_g1

0xe2dd,	// (0x000439d0) single_tv_pg_channel_pane_g2

0x0001,

0xfb4d,	// (0x00045240) single_tv_pg_channel_pane_g

0x113e,	// (0x00036831) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x113e,	// (0x00036831) bg_single_mobtv_pg_channel_thumb_pane

0xe2e6,	// (0x000439d9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2e6,	// (0x000439d9) single_mobtv_pg_channel_thumb_pane_g1

0xe2f4,	// (0x000439e7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2f4,	// (0x000439e7) single_mobtv_pg_channel_thumb_pane_g2

0xe300,	// (0x000439f3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe300,	// (0x000439f3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb52,	// (0x00045245) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb52,	// (0x00045245) single_mobtv_pg_channel_thumb_pane_g

0xe30c,	// (0x000439ff) single_mobtv_pg_channel_thumb_pane_t1

0xe31a,	// (0x00043a0d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb59,	// (0x0004524c) single_mobtv_pg_channel_thumb_pane_t

0x117c,	// (0x0003686f) bg_single_mobtv_pg_channel_table_pane_g1

0x117c,	// (0x0003686f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000447a2) bg_single_mobtv_pg_channel_table_pane_g

0xe328,	// (0x00043a1b) single_mobtv_pg_channel_table_pane_t1

0xe336,	// (0x00043a29) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb5e,	// (0x00045251) single_mobtv_pg_channel_table_pane_t

0xb525,	// (0x00040c18) main_mobtv_info_pane_g1_ParamLimits

0xb525,	// (0x00040c18) main_mobtv_info_pane_g1

0xb541,	// (0x00040c34) main_mobtv_info_pane_t1_ParamLimits

0xb541,	// (0x00040c34) main_mobtv_info_pane_t1

0xb5b9,	// (0x00040cac) main_mobtv_info_pane_t2_ParamLimits

0xb5b9,	// (0x00040cac) main_mobtv_info_pane_t2

0x0002,

0xfb68,	// (0x0004525b) main_mobtv_info_pane_t_ParamLimits

0xfb68,	// (0x0004525b) main_mobtv_info_pane_t

0xb648,	// (0x00040d3b) wait_bar_pane_cp05

0xb65a,	// (0x00040d4d) main_mobtv_loading_pane_g1_ParamLimits

0xb65a,	// (0x00040d4d) main_mobtv_loading_pane_g1

0xb668,	// (0x00040d5b) main_mobtv_loading_pane_g2_ParamLimits

0xb668,	// (0x00040d5b) main_mobtv_loading_pane_g2

0xb674,	// (0x00040d67) main_mobtv_loading_pane_g3_ParamLimits

0xb674,	// (0x00040d67) main_mobtv_loading_pane_g3

0x0002,

0xfb6f,	// (0x00045262) main_mobtv_loading_pane_g_ParamLimits

0xfb6f,	// (0x00045262) main_mobtv_loading_pane_g

0xe344,	// (0x00043a37) main_mobtv_loading_pane_t1_ParamLimits

0xe344,	// (0x00043a37) main_mobtv_loading_pane_t1

0xe35c,	// (0x00043a4f) main_mobtv_loading_pane_t2_ParamLimits

0xe35c,	// (0x00043a4f) main_mobtv_loading_pane_t2

0x0001,

0xfb76,	// (0x00045269) main_mobtv_loading_pane_t_ParamLimits

0xfb76,	// (0x00045269) main_mobtv_loading_pane_t

0xb682,	// (0x00040d75) wait_bar_pane_cp06_ParamLimits

0xb682,	// (0x00040d75) wait_bar_pane_cp06

0xe380,	// (0x00043a73) main_mobtv_programe_curr_pane_t1

0xe38e,	// (0x00043a81) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb7b,	// (0x0004526e) main_mobtv_programe_curr_pane_t

0xe39c,	// (0x00043a8f) main_mobtv_programe_next_pane_t1

0xe3aa,	// (0x00043a9d) main_mobtv_programe_next_pane_t2

0xe3b8,	// (0x00043aab) main_mobtv_programe_next_pane_t3

0x0002,

0xfb80,	// (0x00045273) main_mobtv_programe_next_pane_t

0x0a3d,	// (0x00036130) bg_popup_mobtv_noti_window_pane

0xe3c6,	// (0x00043ab9) popup_mobtv_noti_window_g1

0xe3ce,	// (0x00043ac1) popup_mobtv_noti_window_t1

0xe3dc,	// (0x00043acf) popup_mobtv_noti_window_t2

0x0001,

0xfb87,	// (0x0004527a) popup_mobtv_noti_window_t

0x117c,	// (0x0003686f) bg_popup_mobtv_noti_window_pane_g1

0x0a3d,	// (0x00036130) sc_clock_pane

0x0a3d,	// (0x00036130) main_fs_bigclock_pane

0xacdc,	// (0x000403cf) blid2_tripm_pane_t4_ParamLimits

0xacdc,	// (0x000403cf) blid2_tripm_pane_t4

0x114c,	// (0x0003683f) sc_clock_pane_g1_ParamLimits

0x114c,	// (0x0003683f) sc_clock_pane_g1

0x119a,	// (0x0003688d) sc_clock_pane_t1_ParamLimits

0x119a,	// (0x0003688d) sc_clock_pane_t1

0x119a,	// (0x0003688d) sc_clock_pane_t2_ParamLimits

0x119a,	// (0x0003688d) sc_clock_pane_t2

0x119a,	// (0x0003688d) sc_clock_pane_t3_ParamLimits

0x119a,	// (0x0003688d) sc_clock_pane_t3

0x0004,

0xfb8c,	// (0x0004527f) sc_clock_pane_t_ParamLimits

0xfb8c,	// (0x0004527f) sc_clock_pane_t

0xbddb,	// (0x000414ce) main_fs_bigclock_indicator_pane_ParamLimits

0xbddb,	// (0x000414ce) main_fs_bigclock_indicator_pane

0xb6c9,	// (0x00040dbc) main_fs_bigclock_pane_g1_ParamLimits

0xb6c9,	// (0x00040dbc) main_fs_bigclock_pane_g1

0xbde7,	// (0x000414da) main_fs_bigclock_pane_t1_ParamLimits

0xbde7,	// (0x000414da) main_fs_bigclock_pane_t1

0xbdf9,	// (0x000414ec) main_fs_bigclock_pane_t2_ParamLimits

0xbdf9,	// (0x000414ec) main_fs_bigclock_pane_t2

0xbe0d,	// (0x00041500) main_fs_bigclock_pane_t3_ParamLimits

0xbe0d,	// (0x00041500) main_fs_bigclock_pane_t3

0x0002,

0xfd22,	// (0x00045415) main_fs_bigclock_pane_t_ParamLimits

0xfd22,	// (0x00045415) main_fs_bigclock_pane_t

0xec2f,	// (0x00044322) main_fs_bigclock_indicator_pane_g1

0xe0fa,	// (0x000437ed) ncim_query_content_pane_g2_ParamLimits

0xe0fa,	// (0x000437ed) ncim_query_content_pane_g2

0x0001,

0xfb19,	// (0x0004520c) ncim_query_content_pane_g_ParamLimits

0xfb19,	// (0x0004520c) ncim_query_content_pane_g

0x119a,	// (0x0003688d) sc_clock_pane_t4_ParamLimits

0x119a,	// (0x0003688d) sc_clock_pane_t4

0x10d7,	// (0x000367ca) main_radioblah_pane

0x9ad4,	// (0x0003f1c7) cell_call4_button_pane_t1_copy1_ParamLimits

0x9ad4,	// (0x0003f1c7) cell_call4_button_pane_t1_copy1

0xb318,	// (0x00040a0b) main_ncimui_pane_t1_ParamLimits

0xb318,	// (0x00040a0b) main_ncimui_pane_t1

0xb332,	// (0x00040a25) main_ncimui_pane_t2_ParamLimits

0xb332,	// (0x00040a25) main_ncimui_pane_t2

0x0002,

0xfb12,	// (0x00045205) main_ncimui_pane_t_ParamLimits

0xfb12,	// (0x00045205) main_ncimui_pane_t

0x1ebe,	// (0x000375b1) main_radioblah_anim_pane_ParamLimits

0x1ebe,	// (0x000375b1) main_radioblah_anim_pane

0x1ebe,	// (0x000375b1) main_radioblah_info_pane_ParamLimits

0x1ebe,	// (0x000375b1) main_radioblah_info_pane

0x1eaa,	// (0x0003759d) main_radioblah_pane_t1_ParamLimits

0x1eaa,	// (0x0003759d) main_radioblah_pane_t1

0x1eaa,	// (0x0003759d) main_radioblah_pane_t2_ParamLimits

0x1eaa,	// (0x0003759d) main_radioblah_pane_t2

0x0003,

0xfbad,	// (0x000452a0) main_radioblah_pane_t_ParamLimits

0xfbad,	// (0x000452a0) main_radioblah_pane_t

0x1130,	// (0x00036823) main_radioblah_rocker_ctrl_pane_ParamLimits

0x1130,	// (0x00036823) main_radioblah_rocker_ctrl_pane

0x34d9,	// (0x00038bcc) main_radioblah_info_pane_t1_ParamLimits

0x34d9,	// (0x00038bcc) main_radioblah_info_pane_t1

0xe551,	// (0x00043c44) main_radioblah_info_pane_t2_ParamLimits

0xe551,	// (0x00043c44) main_radioblah_info_pane_t2

0x0003,

0xfbb6,	// (0x000452a9) main_radioblah_info_pane_t_ParamLimits

0xfbb6,	// (0x000452a9) main_radioblah_info_pane_t

0x117c,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g1

0x117c,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g2

0x117c,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g3

0x117c,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g4

0x117c,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g5

0x117c,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbbf,	// (0x000452b2) main_radioblah_rocker_ctrl_pane_g

0xb2bf,	// (0x000409b2) main_cset_text2_pane_t1_copy1_ParamLimits

0x9b4f,	// (0x0003f242) cam4_image_uncrop_qvga_pane

0x9c96,	// (0x0003f389) vid4_image_uncrop_qcif_pane

0xae70,	// (0x00040563) cam6_image_uncrop_qvga_pane_ParamLimits

0xae70,	// (0x00040563) cam6_image_uncrop_qvga_pane

0xddf5,	// (0x000434e8) vid6_image_uncrop_qcif_pane_ParamLimits

0xddf5,	// (0x000434e8) vid6_image_uncrop_qcif_pane

0x0a3d,	// (0x00036130) bg_popup_preview_window_pane_cp03

0xe0a0,	// (0x00043793) list_cset_text2_pane

0xe0a8,	// (0x0004379b) main_cset6_text2_pane_g1

0xe0b0,	// (0x000437a3) main_cset6_text2_pane_t1

0xb70d,	// (0x00040e00) list_cset_text2_pane_t1_ParamLimits

0xb70d,	// (0x00040e00) list_cset_text2_pane_t1

0x10d7,	// (0x000367ca) main_radioblah_pane_ParamLimits

0xb634,	// (0x00040d27) main_mobtv_info_pane_t3_ParamLimits

0xb634,	// (0x00040d27) main_mobtv_info_pane_t3

0x1e9c,	// (0x0003758f) main_radioblah_pane_g1

0xe521,	// (0x00043c14) main_radioblah_info_pane_g1

0x119a,	// (0x0003688d) main_radioblah_info_pane_t3_ParamLimits

0x119a,	// (0x0003688d) main_radioblah_info_pane_t3

0x751a,	// (0x0003cc0d) highlight_cell_cale_month_pane_ParamLimits

0x751a,	// (0x0003cc0d) highlight_cell_cale_month_pane

0x0a3d,	// (0x00036130) main_phob_fisheye_pane

0x37e6,	// (0x00038ed9) scroll_pane_cp0031_ParamLimits

0x37e6,	// (0x00038ed9) scroll_pane_cp0031

0xdf03,	// (0x000435f6) wait_bar_pane_cp08_ParamLimits

0xb088,	// (0x0004077b) cset_list_set_pane_copy1_ParamLimits

0xe5a0,	// (0x00043c93) highlight_cell_cale_month_pane_g1

0xb72a,	// (0x00040e1d) highlight_cell_cale_month_pane_t1

0xdb7c,	// (0x0004326f) list_gen_pane_cp01

0xd7d6,	// (0x00042ec9) scroll_pane_01

0xb738,	// (0x00040e2b) list_single_double_fisheye_pane

0x4ff3,	// (0x0003a6e6) list_double_fisheye_pane_g1_ParamLimits

0x4ff3,	// (0x0003a6e6) list_double_fisheye_pane_g1

0x4fff,	// (0x0003a6f2) list_double_fisheye_pane_g2_ParamLimits

0x4fff,	// (0x0003a6f2) list_double_fisheye_pane_g2

0xb741,	// (0x00040e34) list_double_fisheye_pane_g3_ParamLimits

0xb741,	// (0x00040e34) list_double_fisheye_pane_g3

0x0004,

0xfbcc,	// (0x000452bf) list_double_fisheye_pane_g_ParamLimits

0xfbcc,	// (0x000452bf) list_double_fisheye_pane_g

0x5030,	// (0x0003a723) list_double_fisheye_pane_t1_ParamLimits

0x5030,	// (0x0003a723) list_double_fisheye_pane_t1

0x504b,	// (0x0003a73e) list_double_fisheye_pane_t2_ParamLimits

0x504b,	// (0x0003a73e) list_double_fisheye_pane_t2

0x0001,

0xfbd7,	// (0x000452ca) list_double_fisheye_pane_t_ParamLimits

0xfbd7,	// (0x000452ca) list_double_fisheye_pane_t

0x0a3d,	// (0x00036130) main_call5_pane

0x1130,	// (0x00036823) sc_swipe_pane_ParamLimits

0x1130,	// (0x00036823) sc_swipe_pane

0xb759,	// (0x00040e4c) call5_image_pane_ParamLimits

0xb759,	// (0x00040e4c) call5_image_pane

0xb769,	// (0x00040e5c) call5_swipe_1_pane_ParamLimits

0xb769,	// (0x00040e5c) call5_swipe_1_pane

0xb775,	// (0x00040e68) call5_swipe_2_pane_ParamLimits

0xb775,	// (0x00040e68) call5_swipe_2_pane

0xb78f,	// (0x00040e82) popup_call5_audio_first_window_ParamLimits

0xb78f,	// (0x00040e82) popup_call5_audio_first_window

0x113e,	// (0x00036831) call5_swipe_1_pane_g1_ParamLimits

0x113e,	// (0x00036831) call5_swipe_1_pane_g1

0xe5a8,	// (0x00043c9b) call5_swipe_1_pane_g2_ParamLimits

0xe5a8,	// (0x00043c9b) call5_swipe_1_pane_g2

0x0001,

0xfbdc,	// (0x000452cf) call5_swipe_1_pane_g_ParamLimits

0xfbdc,	// (0x000452cf) call5_swipe_1_pane_g

0xe5b4,	// (0x00043ca7) call5_swipe_1_pane_t1_ParamLimits

0xe5b4,	// (0x00043ca7) call5_swipe_1_pane_t1

0x113e,	// (0x00036831) call5_swipe_2_pane_g1_ParamLimits

0x113e,	// (0x00036831) call5_swipe_2_pane_g1

0xe5c9,	// (0x00043cbc) call5_swipe_2_pane_g2_ParamLimits

0xe5c9,	// (0x00043cbc) call5_swipe_2_pane_g2

0x0001,

0xfbe1,	// (0x000452d4) call5_swipe_2_pane_g_ParamLimits

0xfbe1,	// (0x000452d4) call5_swipe_2_pane_g

0xe5d5,	// (0x00043cc8) call5_swipe_2_pane_t1_ParamLimits

0xe5d5,	// (0x00043cc8) call5_swipe_2_pane_t1

0x113e,	// (0x00036831) sc_swipe_pane_g1_ParamLimits

0x113e,	// (0x00036831) sc_swipe_pane_g1

0x114c,	// (0x0003683f) sc_swipe_pane_g2_ParamLimits

0x114c,	// (0x0003683f) sc_swipe_pane_g2

0x0001,

0xfbe6,	// (0x000452d9) sc_swipe_pane_g_ParamLimits

0xfbe6,	// (0x000452d9) sc_swipe_pane_g

0x1186,	// (0x00036879) sc_swipe_pane_t1_ParamLimits

0x1186,	// (0x00036879) sc_swipe_pane_t1

0x0a3d,	// (0x00036130) main_cmail_launcher_pane

0xb79d,	// (0x00040e90) aid_size_cell_cmail_l_ParamLimits

0xb79d,	// (0x00040e90) aid_size_cell_cmail_l

0xb7ab,	// (0x00040e9e) grid_cmail_l_pane_ParamLimits

0xb7ab,	// (0x00040e9e) grid_cmail_l_pane

0xb7bb,	// (0x00040eae) cell_cmail_l_pane_ParamLimits

0xb7bb,	// (0x00040eae) cell_cmail_l_pane

0xe5ea,	// (0x00043cdd) cell_cmail_l_pane_g1_ParamLimits

0xe5ea,	// (0x00043cdd) cell_cmail_l_pane_g1

0xe5f6,	// (0x00043ce9) cell_cmail_l_pane_t1_ParamLimits

0xe5f6,	// (0x00043ce9) cell_cmail_l_pane_t1

0xe60c,	// (0x00043cff) cell_cmail_l_pane_t2_ParamLimits

0xe60c,	// (0x00043cff) cell_cmail_l_pane_t2

0x0001,

0xfbeb,	// (0x000452de) cell_cmail_l_pane_t_ParamLimits

0xfbeb,	// (0x000452de) cell_cmail_l_pane_t

0x10d7,	// (0x000367ca) grid_highlight_pane_cp018_ParamLimits

0x10d7,	// (0x000367ca) grid_highlight_pane_cp018

0x5974,	// (0x0003b067) main2_pane_ParamLimits

0x5974,	// (0x0003b067) main2_pane

0x1272,	// (0x00036965) popup_sp_fs_action_menu_bg_pane_g1

0x127a,	// (0x0003696d) popup_sp_fs_action_menu_bg_pane_g2

0x1282,	// (0x00036975) popup_sp_fs_action_menu_bg_pane_g3

0x128a,	// (0x0003697d) popup_sp_fs_action_menu_bg_pane_g4

0x1292,	// (0x00036985) popup_sp_fs_action_menu_bg_pane_g5

0x129a,	// (0x0003698d) popup_sp_fs_action_menu_bg_pane_g6

0x12a2,	// (0x00036995) popup_sp_fs_action_menu_bg_pane_g7

0x12aa,	// (0x0003699d) popup_sp_fs_action_menu_bg_pane_g8

0x12b2,	// (0x000369a5) popup_sp_fs_action_menu_bg_pane_g9

0x12ba,	// (0x000369ad) popup_sp_fs_action_menu_bg_pane_g10

0x12ba,	// (0x000369ad) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x000447f3) popup_sp_fs_action_menu_bg_pane_g

0x113e,	// (0x00036831) list_medium_line_x2_t3_g3_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g3_g1

0x113e,	// (0x00036831) list_medium_line_x2_t3_g3_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g3_g2

0x113e,	// (0x00036831) list_medium_line_x2_t3_g3_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x000448a1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x000448a1) list_medium_line_x2_t3_g3_g

0x1186,	// (0x00036879) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g3_t1

0x1186,	// (0x00036879) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g3_t2

0x1186,	// (0x00036879) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x000448a8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x000448a8) list_medium_line_x2_t3_g3_t

0x113e,	// (0x00036831) list_medium_line_x2_t3_g2_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g2_g1

0x113e,	// (0x00036831) list_medium_line_x2_t3_g2_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x000448af) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x000448af) list_medium_line_x2_t3_g2_g

0x1186,	// (0x00036879) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g2_t1

0x1186,	// (0x00036879) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g2_t2

0x1186,	// (0x00036879) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x000448a8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x000448a8) list_medium_line_x2_t3_g2_t

0x113e,	// (0x00036831) list_medium_line_x2_t4_g4_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t4_g4_g1

0x113e,	// (0x00036831) list_medium_line_x2_t4_g4_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t4_g4_g2

0x113e,	// (0x00036831) list_medium_line_x2_t4_g4_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t4_g4_g3

0x113e,	// (0x00036831) list_medium_line_x2_t4_g4_g4_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x000448b4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x000448b4) list_medium_line_x2_t4_g4_g

0x1186,	// (0x00036879) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t4_g4_t1

0x1186,	// (0x00036879) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t4_g4_t2

0x1186,	// (0x00036879) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t4_g4_t3

0x1186,	// (0x00036879) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x000448bd) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x000448bd) list_medium_line_x2_t4_g4_t

0x113e,	// (0x00036831) list_medium_line_x2_t2_g4_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g4_g1

0x113e,	// (0x00036831) list_medium_line_x2_t2_g4_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g4_g2

0x113e,	// (0x00036831) list_medium_line_x2_t2_g4_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g4_g3

0x113e,	// (0x00036831) list_medium_line_x2_t2_g4_g4_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x000448b4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x000448b4) list_medium_line_x2_t2_g4_g

0x1186,	// (0x00036879) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t2_g4_t1

0x1186,	// (0x00036879) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00044924) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00044924) list_medium_line_x2_t2_g4_t

0x113e,	// (0x00036831) list_medium_line_x2_t2_g3_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g3_g1

0x113e,	// (0x00036831) list_medium_line_x2_t2_g3_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g3_g2

0x113e,	// (0x00036831) list_medium_line_x2_t2_g3_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x000448a1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x000448a1) list_medium_line_x2_t2_g3_g

0x1186,	// (0x00036879) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t2_g3_t1

0x1186,	// (0x00036879) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00044924) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00044924) list_medium_line_x2_t2_g3_t

0x76ea,	// (0x0003cddd) main_sp_fs_list_pane_ParamLimits

0x76ea,	// (0x0003cddd) main_sp_fs_list_pane

0x76f6,	// (0x0003cde9) sp_fs_scroll_pane_ParamLimits

0x76f6,	// (0x0003cde9) sp_fs_scroll_pane

0x18f6,	// (0x00036fe9) list_medium_line_x2_t3_t1

0x18f6,	// (0x00036fe9) list_medium_line_x2_t3_t2

0x18f6,	// (0x00036fe9) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0004496f) list_medium_line_x2_t3_t

0x18f6,	// (0x00036fe9) list_medium_line_x3_t4_t1

0x18f6,	// (0x00036fe9) list_medium_line_x3_t4_t2

0x18f6,	// (0x00036fe9) list_medium_line_x3_t4_t3

0x18f6,	// (0x00036fe9) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00044976) list_medium_line_x3_t4_t

0x18f6,	// (0x00036fe9) list_medium_line_x4_t5_t1

0x18f6,	// (0x00036fe9) list_medium_line_x4_t5_t2

0x18f6,	// (0x00036fe9) list_medium_line_x4_t5_t3

0x18f6,	// (0x00036fe9) list_medium_line_x4_t5_t4

0x18f6,	// (0x00036fe9) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0004497f) list_medium_line_x4_t5_t

0x113e,	// (0x00036831) list_medium_line_t4_g4_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t4_g4_g1

0x113e,	// (0x00036831) list_medium_line_t4_g4_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t4_g4_g2

0x113e,	// (0x00036831) list_medium_line_t4_g4_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t4_g4_g3

0x113e,	// (0x00036831) list_medium_line_t4_g4_g4_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x000448b4) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x000448b4) list_medium_line_t4_g4_g

0x1186,	// (0x00036879) list_medium_line_t4_g4_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t4_g4_t1

0x1186,	// (0x00036879) list_medium_line_t4_g4_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t4_g4_t2

0x1186,	// (0x00036879) list_medium_line_t4_g4_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t4_g4_t3

0x1186,	// (0x00036879) list_medium_line_t4_g4_t4_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x000448bd) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x000448bd) list_medium_line_t4_g4_t

0x77df,	// (0x0003ced2) chi_dic_find_pane_g1

0x83ab,	// (0x0003da9e) main_tport_pane

0x18f6,	// (0x00036fe9) list_medium_line_plain_t1

0x113e,	// (0x00036831) list_medium_line_t2_g2_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t2_g2_g1

0x113e,	// (0x00036831) list_medium_line_t2_g2_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x000448af) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x000448af) list_medium_line_t2_g2_g

0x1186,	// (0x00036879) list_medium_line_t2_g2_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t2_g2_t1

0x1186,	// (0x00036879) list_medium_line_t2_g2_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00044924) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00044924) list_medium_line_t2_g2_t

0x4fa1,	// (0x0003a694) aid_sp_fs_list_icon_a_sm

0x4fa9,	// (0x0003a69c) aid_sp_fs_list_icon_d

0xdb85,	// (0x00043278) aid_sp_fs_text_primary

0x4fb1,	// (0x0003a6a4) aid_sp_fs_text_secondary

0x0a3d,	// (0x00036130) list_medium_line

0x0a3d,	// (0x00036130) list_medium_line_g2

0x0a3d,	// (0x00036130) list_medium_line_g3

0x0a3d,	// (0x00036130) list_medium_line_plain

0x0a3d,	// (0x00036130) list_medium_line_plain_t2

0x0a3d,	// (0x00036130) list_medium_line_plain_t3

0x0a3d,	// (0x00036130) list_medium_line_right_icon

0x0a3d,	// (0x00036130) list_medium_line_right_iconx2

0x0a3d,	// (0x00036130) list_medium_line_t2

0x0a3d,	// (0x00036130) list_medium_line_t2_g2

0x0a3d,	// (0x00036130) list_medium_line_t2_g3

0x0a3d,	// (0x00036130) list_medium_line_t2_right_icon

0x0a3d,	// (0x00036130) list_medium_line_t2_right_iconx2

0x0a3d,	// (0x00036130) list_medium_line_t3

0x0a3d,	// (0x00036130) list_medium_line_t3_g2

0x0a3d,	// (0x00036130) list_medium_line_t3_g3

0x0a3d,	// (0x00036130) list_medium_line_t3_right_iconx2

0x0a3d,	// (0x00036130) list_medium_line_t4_g4

0x0a3d,	// (0x00036130) list_medium_line_x2

0x0a3d,	// (0x00036130) list_medium_line_x2_t2_g2

0x0a3d,	// (0x00036130) list_medium_line_x2_t2_g3

0x0a3d,	// (0x00036130) list_medium_line_x2_t2_g4

0x0a3d,	// (0x00036130) list_medium_line_x2_t3

0x0a3d,	// (0x00036130) list_medium_line_x2_t3_g2

0x0a3d,	// (0x00036130) list_medium_line_x2_t3_g3

0x0a3d,	// (0x00036130) list_medium_line_x2_t3_g4

0x0a3d,	// (0x00036130) list_medium_line_x2_t4_g2

0x0a3d,	// (0x00036130) list_medium_line_x2_t4_g4

0x0a3d,	// (0x00036130) list_medium_line_x3

0x0a3d,	// (0x00036130) list_medium_line_x3_t4

0x0a3d,	// (0x00036130) list_medium_line_x3_t4_g4

0x0a3d,	// (0x00036130) list_medium_line_x4_t4

0x0a3d,	// (0x00036130) list_medium_line_x4_t4_g7

0x0a3d,	// (0x00036130) list_medium_line_x4_t5

0x4fba,	// (0x0003a6ad) list_single_fs_dyc_pane_ParamLimits

0x4fba,	// (0x0003a6ad) list_single_fs_dyc_pane

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g1

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g2

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g3

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g4_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g4

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g5_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g5

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g6_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x4_t4_g7_g6

0x114c,	// (0x0003683f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x114c,	// (0x0003683f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaf3,	// (0x000451e6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaf3,	// (0x000451e6) list_medium_line_x4_t4_g7_g

0x1186,	// (0x00036879) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x4_t4_g7_t1

0x1186,	// (0x00036879) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x4_t4_g7_t2

0x1186,	// (0x00036879) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x4_t4_g7_t3

0x119a,	// (0x0003688d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x119a,	// (0x0003688d) list_medium_line_x4_t4_g7_t4

0x119a,	// (0x0003688d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x119a,	// (0x0003688d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb02,	// (0x000451f5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb02,	// (0x000451f5) list_medium_line_x4_t4_g7_t

0x4fd6,	// (0x0003a6c9) list_single_dyc_row_pane_ParamLimits

0x4fd6,	// (0x0003a6c9) list_single_dyc_row_pane

0xb74d,	// (0x00040e40) call5_gesture_pane_ParamLimits

0xb74d,	// (0x00040e40) call5_gesture_pane

0xb781,	// (0x00040e74) call5_windows_pane_ParamLimits

0xb781,	// (0x00040e74) call5_windows_pane

0xb7d4,	// (0x00040ec7) call5_swipe_1_pane_cp_ParamLimits

0xb7d4,	// (0x00040ec7) call5_swipe_1_pane_cp

0xb7e0,	// (0x00040ed3) call5_swipe_2_pane_cp_ParamLimits

0xb7e0,	// (0x00040ed3) call5_swipe_2_pane_cp

0x13b3,	// (0x00036aa6) call5_image_pane_cp

0xb7ec,	// (0x00040edf) popup_call5_audio_first_window_cp_ParamLimits

0xb7ec,	// (0x00040edf) popup_call5_audio_first_window_cp

0xe629,	// (0x00043d1c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe629,	// (0x00043d1c) call5_swipe_1_pane_g1_cp

0xe636,	// (0x00043d29) call5_swipe_1_pane_g2_cp

0xe63e,	// (0x00043d31) call5_swipe_1_pane_t1_cp_ParamLimits

0xe63e,	// (0x00043d31) call5_swipe_1_pane_t1_cp

0xe629,	// (0x00043d1c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe629,	// (0x00043d1c) call5_swipe_2_pane_g1_cp

0xe653,	// (0x00043d46) call5_swipe_2_pane_g2_cp

0xe65b,	// (0x00043d4e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe65b,	// (0x00043d4e) call5_swipe_2_pane_t1_cp

0x10d7,	// (0x000367ca) main_sp_fs_email_pane

0xe670,	// (0x00043d63) main_sp_fs_listscroll_pane_te

0x506d,	// (0x0003a760) popup_sp_fs_action_menu_pane_ParamLimits

0x506d,	// (0x0003a760) popup_sp_fs_action_menu_pane

0x117c,	// (0x0003686f) bg_sp_fs_ctrlbar_pane_g1

0xe679,	// (0x00043d6c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe682,	// (0x00043d75) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe68b,	// (0x00043d7e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x117c,	// (0x0003686f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf0,	// (0x000452e3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x32b1,	// (0x000389a4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x32b1,	// (0x000389a4) bg_sp_fs_ctrlbar_ddmenu_pane

0xe694,	// (0x00043d87) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe694,	// (0x00043d87) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6a0,	// (0x00043d93) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6a0,	// (0x00043d93) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf9,	// (0x000452ec) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf9,	// (0x000452ec) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ac,	// (0x00043d9f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ac,	// (0x00043d9f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x117c,	// (0x0003686f) list_medium_line_t2_right_icon_g1

0x18f6,	// (0x00036fe9) list_medium_line_t2_right_icon_t1

0x18f6,	// (0x00036fe9) list_medium_line_t2_right_icon_t2

0x0001,

0xfbfe,	// (0x000452f1) list_medium_line_t2_right_icon_t

0x1ebe,	// (0x000375b1) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1ebe,	// (0x000375b1) bg_sp_fs_ctrlbar_pane

0xb851,	// (0x00040f44) main_sp_fs_ctrlbar_button_pane_cp01

0xb859,	// (0x00040f4c) main_sp_fs_ctrlbar_ddmenu_pane

0xe6fe,	// (0x00043df1) main_sp_fs_ctrlbar_pane_g1

0xe70a,	// (0x00043dfd) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc03,	// (0x000452f6) main_sp_fs_ctrlbar_pane_g

0xb895,	// (0x00040f88) main_sp_fs_ctrlbar_pane_t1

0xb8d0,	// (0x00040fc3) main_sp_fs_ctrlbar_pane

0xb8e6,	// (0x00040fd9) main_sp_fs_listscroll_pane_te_cp01

0x50b1,	// (0x0003a7a4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x50b1,	// (0x0003a7a4) popup_sp_fs_action_menu_pane_cp01

0x10d7,	// (0x000367ca) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x10d7,	// (0x000367ca) bg_sp_fs_highlight_list_pane_cp01

0x50d1,	// (0x0003a7c4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x50d1,	// (0x0003a7c4) sp_fs_action_menu_list_gene_pane_g1

0xe731,	// (0x00043e24) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe731,	// (0x00043e24) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc11,	// (0x00045304) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc11,	// (0x00045304) sp_fs_action_menu_list_gene_pane_g

0x50e0,	// (0x0003a7d3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x50e0,	// (0x0003a7d3) sp_fs_action_menu_list_gene_pane_t1

0x50f8,	// (0x0003a7eb) sp_fs_action_menu_list_gene_pane_ParamLimits

0x50f8,	// (0x0003a7eb) sp_fs_action_menu_list_gene_pane

0xe73e,	// (0x00043e31) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe73e,	// (0x00043e31) popup_sp_fs_action_menu_bg_pane

0x5117,	// (0x0003a80a) sp_fs_action_menu_list_pane_ParamLimits

0x5117,	// (0x0003a80a) sp_fs_action_menu_list_pane

0x5137,	// (0x0003a82a) sp_fs_scroll_pane_cp01_ParamLimits

0x5137,	// (0x0003a82a) sp_fs_scroll_pane_cp01

0x18f6,	// (0x00036fe9) list_medium_line_plain_t2_t1

0x18f6,	// (0x00036fe9) list_medium_line_plain_t2_t2

0x0001,

0xfbfe,	// (0x000452f1) list_medium_line_plain_t2_t

0x18f6,	// (0x00036fe9) list_medium_line_plain_t3_t1

0x18f6,	// (0x00036fe9) list_medium_line_plain_t3_t2

0x18f6,	// (0x00036fe9) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0004496f) list_medium_line_plain_t3_t

0x113e,	// (0x00036831) list_medium_line_x2_t2_g2_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g2_g1

0x113e,	// (0x00036831) list_medium_line_x2_t2_g2_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x000448af) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x000448af) list_medium_line_x2_t2_g2_g

0x1186,	// (0x00036879) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t2_g2_t1

0x1186,	// (0x00036879) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00044924) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00044924) list_medium_line_x2_t2_g2_t

0x113e,	// (0x00036831) list_medium_line_x2_t4_g2_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t4_g2_g1

0x113e,	// (0x00036831) list_medium_line_x2_t4_g2_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x000448af) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x000448af) list_medium_line_x2_t4_g2_g

0x1186,	// (0x00036879) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t4_g2_t1

0x1186,	// (0x00036879) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t4_g2_t2

0x1186,	// (0x00036879) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t4_g2_t3

0x1186,	// (0x00036879) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x000448bd) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x000448bd) list_medium_line_x2_t4_g2_t

0x117c,	// (0x0003686f) list_medium_line_t3_right_iconx2_g1

0x117c,	// (0x0003686f) list_medium_line_t3_right_iconx2_g2

0x117c,	// (0x0003686f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x00044a8b) list_medium_line_t3_right_iconx2_g

0x18f6,	// (0x00036fe9) list_medium_line_t3_right_iconx2_t1

0x18f6,	// (0x00036fe9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbfe,	// (0x000452f1) list_medium_line_t3_right_iconx2_t

0x113e,	// (0x00036831) list_medium_line_x3_t4_g4_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x3_t4_g4_g1

0x113e,	// (0x00036831) list_medium_line_x3_t4_g4_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x3_t4_g4_g2

0x113e,	// (0x00036831) list_medium_line_x3_t4_g4_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x3_t4_g4_g3

0x113e,	// (0x00036831) list_medium_line_x3_t4_g4_g4_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x000448b4) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x000448b4) list_medium_line_x3_t4_g4_g

0x1186,	// (0x00036879) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x3_t4_g4_t1

0x1186,	// (0x00036879) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x3_t4_g4_t2

0x1186,	// (0x00036879) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x3_t4_g4_t3

0x1186,	// (0x00036879) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x000448bd) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x000448bd) list_medium_line_x3_t4_g4_t

0x515d,	// (0x0003a850) list_single_dyc_row_text_pane_t1_ParamLimits

0x515d,	// (0x0003a850) list_single_dyc_row_text_pane_t1

0x5194,	// (0x0003a887) list_single_dyc_row_text_pane_t2_ParamLimits

0x5194,	// (0x0003a887) list_single_dyc_row_text_pane_t2

0x520a,	// (0x0003a8fd) list_single_dyc_row_text_pane_t3_ParamLimits

0x520a,	// (0x0003a8fd) list_single_dyc_row_text_pane_t3

0x0005,

0xfc16,	// (0x00045309) list_single_dyc_row_text_pane_t_ParamLimits

0xfc16,	// (0x00045309) list_single_dyc_row_text_pane_t

0x52db,	// (0x0003a9ce) list_single_dyc_row_pane_g1_ParamLimits

0x52db,	// (0x0003a9ce) list_single_dyc_row_pane_g1

0x52e7,	// (0x0003a9da) list_single_dyc_row_pane_g2_ParamLimits

0x52e7,	// (0x0003a9da) list_single_dyc_row_pane_g2

0x52f3,	// (0x0003a9e6) list_single_dyc_row_pane_g3_ParamLimits

0x52f3,	// (0x0003a9e6) list_single_dyc_row_pane_g3

0x52ff,	// (0x0003a9f2) list_single_dyc_row_pane_g4_ParamLimits

0x52ff,	// (0x0003a9f2) list_single_dyc_row_pane_g4

0x0003,

0xfc23,	// (0x00045316) list_single_dyc_row_pane_g_ParamLimits

0xfc23,	// (0x00045316) list_single_dyc_row_pane_g

0x530b,	// (0x0003a9fe) list_single_dyc_row_text_pane_ParamLimits

0x530b,	// (0x0003a9fe) list_single_dyc_row_text_pane

0x0a3d,	// (0x00036130) bg_sp_fs_scroll_pane

0xe74c,	// (0x00043e3f) thumb_sp_fs_scroll_pane

0x113e,	// (0x00036831) list_medium_line_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_g1

0x1186,	// (0x00036879) list_medium_line_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t1

0x113e,	// (0x00036831) list_medium_line_x2_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_g1

0x113e,	// (0x00036831) list_medium_line_x2_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x000448af) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x000448af) list_medium_line_x2_g

0x1186,	// (0x00036879) list_medium_line_x2_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t1

0x113e,	// (0x00036831) list_medium_line_x3_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x3_g1

0xe755,	// (0x00043e48) list_medium_line_x3_g2_ParamLimits

0xe755,	// (0x00043e48) list_medium_line_x3_g2

0x0001,

0xfc2c,	// (0x0004531f) list_medium_line_x3_g_ParamLimits

0xfc2c,	// (0x0004531f) list_medium_line_x3_g

0xe763,	// (0x00043e56) list_medium_line_x3_t1_ParamLimits

0xe763,	// (0x00043e56) list_medium_line_x3_t1

0xe777,	// (0x00043e6a) thumb_sp_fs_scroll_pane_g1

0xe780,	// (0x00043e73) thumb_sp_fs_scroll_pane_g2

0xe789,	// (0x00043e7c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc31,	// (0x00045324) thumb_sp_fs_scroll_pane_g

0xe777,	// (0x00043e6a) bg_sp_fs_scroll_pane_g1

0xe780,	// (0x00043e73) bg_sp_fs_scroll_pane_g2

0xe789,	// (0x00043e7c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc31,	// (0x00045324) bg_sp_fs_scroll_pane_g

0x113e,	// (0x00036831) list_medium_line_x2_t3_g4_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g4_g1

0x113e,	// (0x00036831) list_medium_line_x2_t3_g4_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g4_g2

0x113e,	// (0x00036831) list_medium_line_x2_t3_g4_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g4_g3

0x113e,	// (0x00036831) list_medium_line_x2_t3_g4_g4_ParamLimits

0x113e,	// (0x00036831) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x000448b4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x000448b4) list_medium_line_x2_t3_g4_g

0x1186,	// (0x00036879) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g4_t1

0x1186,	// (0x00036879) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g4_t2

0x1186,	// (0x00036879) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x000448a8) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x000448a8) list_medium_line_x2_t3_g4_t

0x113e,	// (0x00036831) list_medium_line_g2_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_g2_g1

0x113e,	// (0x00036831) list_medium_line_g2_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x000448af) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x000448af) list_medium_line_g2_g

0x1186,	// (0x00036879) list_medium_line_g2_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_g2_t1

0x113e,	// (0x00036831) list_medium_line_t3_g2_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t3_g2_g1

0x113e,	// (0x00036831) list_medium_line_t3_g2_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x000448af) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x000448af) list_medium_line_t3_g2_g

0x1186,	// (0x00036879) list_medium_line_t3_g2_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_g2_t1

0x1186,	// (0x00036879) list_medium_line_t3_g2_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_g2_t2

0x1186,	// (0x00036879) list_medium_line_t3_g2_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x000448a8) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x000448a8) list_medium_line_t3_g2_t

0x117c,	// (0x0003686f) list_medium_line_right_icon_g1

0x18f6,	// (0x00036fe9) list_medium_line_right_icon_t1

0x113e,	// (0x00036831) list_medium_line_t2_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t2_g1

0x1186,	// (0x00036879) list_medium_line_t2_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t2_t1

0x1186,	// (0x00036879) list_medium_line_t2_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00044924) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00044924) list_medium_line_t2_t

0x113e,	// (0x00036831) list_medium_line_t3_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t3_g1

0x1186,	// (0x00036879) list_medium_line_t3_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_t1

0x1186,	// (0x00036879) list_medium_line_t3_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_t2

0x1186,	// (0x00036879) list_medium_line_t3_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x000448a8) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x000448a8) list_medium_line_t3_t

0x113e,	// (0x00036831) list_medium_line_g3_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_g3_g1

0x113e,	// (0x00036831) list_medium_line_g3_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_g3_g2

0x113e,	// (0x00036831) list_medium_line_g3_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x000448a1) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x000448a1) list_medium_line_g3_g

0x1186,	// (0x00036879) list_medium_line_g3_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_g3_t1

0x113e,	// (0x00036831) list_medium_line_t2_g3_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t2_g3_g1

0x113e,	// (0x00036831) list_medium_line_t2_g3_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t2_g3_g2

0x113e,	// (0x00036831) list_medium_line_t2_g3_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x000448a1) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x000448a1) list_medium_line_t2_g3_g

0x1186,	// (0x00036879) list_medium_line_t2_g3_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t2_g3_t1

0x1186,	// (0x00036879) list_medium_line_t2_g3_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00044924) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00044924) list_medium_line_t2_g3_t

0x113e,	// (0x00036831) list_medium_line_t3_g3_g1_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t3_g3_g1

0x113e,	// (0x00036831) list_medium_line_t3_g3_g2_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t3_g3_g2

0x113e,	// (0x00036831) list_medium_line_t3_g3_g3_ParamLimits

0x113e,	// (0x00036831) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x000448a1) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x000448a1) list_medium_line_t3_g3_g

0x1186,	// (0x00036879) list_medium_line_t3_g3_t1_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_g3_t1

0x1186,	// (0x00036879) list_medium_line_t3_g3_t2_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_g3_t2

0x1186,	// (0x00036879) list_medium_line_t3_g3_t3_ParamLimits

0x1186,	// (0x00036879) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x000448a8) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x000448a8) list_medium_line_t3_g3_t

0x117c,	// (0x0003686f) list_medium_line_right_iconx2_g1

0x117c,	// (0x0003686f) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000447a2) list_medium_line_right_iconx2_g

0x18f6,	// (0x00036fe9) list_medium_line_right_iconx2_t1

0x117c,	// (0x0003686f) list_medium_line_t2_right_iconx2_g1

0x117c,	// (0x0003686f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000447a2) list_medium_line_t2_right_iconx2_g

0x18f6,	// (0x00036fe9) list_medium_line_t2_right_iconx2_t1

0x18f6,	// (0x00036fe9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbfe,	// (0x000452f1) list_medium_line_t2_right_iconx2_t

0x18f6,	// (0x00036fe9) list_medium_line_x4_t4_t1

0x18f6,	// (0x00036fe9) list_medium_line_x4_t4_t2

0x18f6,	// (0x00036fe9) list_medium_line_x4_t4_t3

0x18f6,	// (0x00036fe9) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00044976) list_medium_line_x4_t4_t

0xb92b,	// (0x0004101e) tport_appsw_pane_ParamLimits

0xb92b,	// (0x0004101e) tport_appsw_pane

0xb939,	// (0x0004102c) tport_contact_pane_ParamLimits

0xb939,	// (0x0004102c) tport_contact_pane

0xb949,	// (0x0004103c) tport_listscroll_pane_ParamLimits

0xb949,	// (0x0004103c) tport_listscroll_pane

0xb959,	// (0x0004104c) cell_tport_appsw_pane_ParamLimits

0xb959,	// (0x0004104c) cell_tport_appsw_pane

0x114c,	// (0x0003683f) tport_appsw_pane_g1_ParamLimits

0x114c,	// (0x0003683f) tport_appsw_pane_g1

0xe792,	// (0x00043e85) tport_contact_pane_g1

0xe180,	// (0x00043873) tport_contact_pane_t1

0xe79b,	// (0x00043e8e) tport_contact_pane_t2

0x0001,

0xfc38,	// (0x0004532b) tport_contact_pane_t

0xe7a9,	// (0x00043e9c) list_tport_pane

0xe7b2,	// (0x00043ea5) scroll_pane_cp_030

0xb98c,	// (0x0004107f) cell_tport_appsw_pane_g1

0xb99c,	// (0x0004108f) cell_tport_appsw_pane_t1

0xb9aa,	// (0x0004109d) grid_highlight_pane_cp019

0xb9b2,	// (0x000410a5) list_tport_double_graphic_pane_ParamLimits

0xb9b2,	// (0x000410a5) list_tport_double_graphic_pane

0x10d7,	// (0x000367ca) list_highlight_pane_cp023_ParamLimits

0x10d7,	// (0x000367ca) list_highlight_pane_cp023

0xb9c3,	// (0x000410b6) list_tport_double_graphic_pane_g1_ParamLimits

0xb9c3,	// (0x000410b6) list_tport_double_graphic_pane_g1

0xb9d0,	// (0x000410c3) list_tport_double_graphic_pane_t1_ParamLimits

0xb9d0,	// (0x000410c3) list_tport_double_graphic_pane_t1

0xb9e5,	// (0x000410d8) list_tport_double_graphic_pane_t2_ParamLimits

0xb9e5,	// (0x000410d8) list_tport_double_graphic_pane_t2

0x0001,

0xfc44,	// (0x00045337) list_tport_double_graphic_pane_t_ParamLimits

0xfc44,	// (0x00045337) list_tport_double_graphic_pane_t

0x0a3d,	// (0x00036130) main_cale_note_pane

0x9ef3,	// (0x0003f5e6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9ef3,	// (0x0003f5e6) cell_vitu2_function_top_wide_pane_cp01

0xb648,	// (0x00040d3b) wait_bar_pane_cp05_ParamLimits

0x10d7,	// (0x000367ca) listscroll_cmail_pane

0xe7c3,	// (0x00043eb6) list_cmail_pane

0xb9f7,	// (0x000410ea) list_cmail_body_pane

0xba1e,	// (0x00041111) list_single_cmail_header_caption_pane

0xba47,	// (0x0004113a) list_single_cmail_header_detail_pane_ParamLimits

0xba47,	// (0x0004113a) list_single_cmail_header_detail_pane

0xe7e6,	// (0x00043ed9) list_single_cmail_header_caption_pane_t1

0x532a,	// (0x0003aa1d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x532a,	// (0x0003aa1d) list_single_cmail_header_detail_pane_g1

0x5340,	// (0x0003aa33) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5340,	// (0x0003aa33) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc49,	// (0x0004533c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc49,	// (0x0004533c) list_single_cmail_header_detail_pane_g

0x534c,	// (0x0003aa3f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x534c,	// (0x0003aa3f) list_single_cmail_header_detail_pane_t1

0x53ac,	// (0x0003aa9f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x53ac,	// (0x0003aa9f) list_single_cmail_header_editor_pane_bg

0xe2dd,	// (0x000439d0) list_cmail_body_pane_g1

0xe80a,	// (0x00043efd) list_cmail_body_pane_t1

0xd696,	// (0x00042d89) list_single_cmail_header_editor_pane_bg_g1

0x15cc,	// (0x00036cbf) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a6,	// (0x00042d99) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd69e,	// (0x00042d91) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd905,	// (0x00042ff8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c6,	// (0x00042db9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b6,	// (0x00042da9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6be,	// (0x00042db1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x15ac,	// (0x00036c9f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xba81,	// (0x00041174) calenote_gesture_pane_ParamLimits

0xba81,	// (0x00041174) calenote_gesture_pane

0xba9b,	// (0x0004118e) calenote_window_pane_ParamLimits

0xba9b,	// (0x0004118e) calenote_window_pane

0xe818,	// (0x00043f0b) popup_note_window_cp01

0xbab3,	// (0x000411a6) calenote_swipe_1_pane_ParamLimits

0xbab3,	// (0x000411a6) calenote_swipe_1_pane

0xb7e0,	// (0x00040ed3) calenote_swipe_2_pane_ParamLimits

0xb7e0,	// (0x00040ed3) calenote_swipe_2_pane

0xe629,	// (0x00043d1c) calenote_swipe_1_pane_g1_ParamLimits

0xe629,	// (0x00043d1c) calenote_swipe_1_pane_g1

0xe82a,	// (0x00043f1d) calenote_swipe_1_pane_g2_ParamLimits

0xe82a,	// (0x00043f1d) calenote_swipe_1_pane_g2

0x0001,

0xfc55,	// (0x00045348) calenote_swipe_1_pane_g_ParamLimits

0xfc55,	// (0x00045348) calenote_swipe_1_pane_g

0xe836,	// (0x00043f29) calenote_swipe_1_pane_t1_ParamLimits

0xe836,	// (0x00043f29) calenote_swipe_1_pane_t1

0xe629,	// (0x00043d1c) calenote_swipe_2_pane_g1_ParamLimits

0xe629,	// (0x00043d1c) calenote_swipe_2_pane_g1

0xe855,	// (0x00043f48) calenote_swipe_2_pane_g2_ParamLimits

0xe855,	// (0x00043f48) calenote_swipe_2_pane_g2

0x0001,

0xfc5a,	// (0x0004534d) calenote_swipe_2_pane_g_ParamLimits

0xfc5a,	// (0x0004534d) calenote_swipe_2_pane_g

0xe861,	// (0x00043f54) calenote_swipe_2_pane_t1_ParamLimits

0xe861,	// (0x00043f54) calenote_swipe_2_pane_t1

0x0a3d,	// (0x00036130) main_mup_navstr_pane

0x8daa,	// (0x0003e49d) main_mup3_pane_t7_ParamLimits

0x8daa,	// (0x0003e49d) main_mup3_pane_t7

0x95e1,	// (0x0003ecd4) main_mp4_pane_g6_ParamLimits

0x95e1,	// (0x0003ecd4) main_mp4_pane_g6

0x9930,	// (0x0003f023) main_image3_pane_t4_ParamLimits

0x9930,	// (0x0003f023) main_image3_pane_t4

0xbac6,	// (0x000411b9) popup_navstr_preview_pane_ParamLimits

0xbac6,	// (0x000411b9) popup_navstr_preview_pane

0xbad2,	// (0x000411c5) scroll_navstr_pane_ParamLimits

0xbad2,	// (0x000411c5) scroll_navstr_pane

0x0a3d,	// (0x00036130) bg_popup_preview_window_pane_cp04

0xe888,	// (0x00043f7b) popup_navstr_preview_pane_t1

0xbade,	// (0x000411d1) scroll_navstr_pane_g1_ParamLimits

0xbade,	// (0x000411d1) scroll_navstr_pane_g1

0xbaeb,	// (0x000411de) scroll_navstr_pane_t1_ParamLimits

0xbaeb,	// (0x000411de) scroll_navstr_pane_t1

0xe821,	// (0x00043f14) bg_button_pane_cp014

0xe821,	// (0x00043f14) bg_button_pane_cp030

0x5013,	// (0x0003a706) list_double_fisheye_pane_g4_ParamLimits

0x5013,	// (0x0003a706) list_double_fisheye_pane_g4

0x501f,	// (0x0003a712) list_double_fisheye_pane_g5_ParamLimits

0x501f,	// (0x0003a712) list_double_fisheye_pane_g5

0xe7da,	// (0x00043ecd) sp_fs_scroll_pane_cp03

0xe6fe,	// (0x00043df1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe70a,	// (0x00043dfd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc03,	// (0x000452f6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb895,	// (0x00040f88) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7d2,	// (0x00043ec5) sp_fs_scroll_pane_cp02

0x12fb,	// (0x000369ee) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x12fb,	// (0x000369ee) popup_sp_fs_calendar_preview_list_single_pane

0x0a3d,	// (0x00036130) main_cam6_pano_pane

0x10d7,	// (0x000367ca) main_mup3_pane_ParamLimits

0x0a3d,	// (0x00036130) main_phacti_pane

0xb51d,	// (0x00040c10) bg_button_pane_cp11

0xb535,	// (0x00040c28) main_mobtv_info_pane_g2_ParamLimits

0xb535,	// (0x00040c28) main_mobtv_info_pane_g2

0x0001,

0xfb63,	// (0x00045256) main_mobtv_info_pane_g_ParamLimits

0xfb63,	// (0x00045256) main_mobtv_info_pane_g

0x119a,	// (0x0003688d) sc_clock_pane_t5_ParamLimits

0x119a,	// (0x0003688d) sc_clock_pane_t5

0x1e9c,	// (0x0003758f) main_radioblah_pane_g1_ParamLimits

0x1eaa,	// (0x0003759d) main_radioblah_pane_t3_ParamLimits

0x1eaa,	// (0x0003759d) main_radioblah_pane_t3

0x1eaa,	// (0x0003759d) main_radioblah_pane_t4_ParamLimits

0x1eaa,	// (0x0003759d) main_radioblah_pane_t4

0x1130,	// (0x00036823) main_radioblah_text_pane_ParamLimits

0x1130,	// (0x00036823) main_radioblah_text_pane

0xe521,	// (0x00043c14) main_radioblah_info_pane_g1_ParamLimits

0xe565,	// (0x00043c58) main_radioblah_info_pane_t4_ParamLimits

0xe565,	// (0x00043c58) main_radioblah_info_pane_t4

0x10d7,	// (0x000367ca) main_sp_fs_calendar_pane

0xbafd,	// (0x000411f0) main_phacti_pane_g1

0xbb05,	// (0x000411f8) phacti_note_pane_ParamLimits

0xbb05,	// (0x000411f8) phacti_note_pane

0xe89f,	// (0x00043f92) phacti_term_pane_ParamLimits

0xe89f,	// (0x00043f92) phacti_term_pane

0xe8b4,	// (0x00043fa7) phacti_note_pane_t1_ParamLimits

0xe8b4,	// (0x00043fa7) phacti_note_pane_t1

0x53c3,	// (0x0003aab6) phacti_term_pane_g1

0x53cb,	// (0x0003aabe) phacti_term_pane_t1_ParamLimits

0x53cb,	// (0x0003aabe) phacti_term_pane_t1

0xe8cb,	// (0x00043fbe) popup_sp_fs_calendar_preview_list_single_pane_g1

0x139a,	// (0x00036a8d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc64,	// (0x00045357) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8d3,	// (0x00043fc6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8d3,	// (0x00043fc6) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8e9,	// (0x00043fdc) aid_popup_sp_fs_bg_corner_pane

0x117c,	// (0x0003686f) popup_sp_fs_calendar_preview_bg_pane_g1

0x0a3d,	// (0x00036130) popup_sp_fs_calendar_preview_bg_pane

0xe8f1,	// (0x00043fe4) popup_sp_fs_calendar_preview_list_pane

0x1ebe,	// (0x000375b1) bg_main_sp_fs_cale_pane_ParamLimits

0x1ebe,	// (0x000375b1) bg_main_sp_fs_cale_pane

0x53fe,	// (0x0003aaf1) listscroll_cale_mrui_pane_ParamLimits

0x53fe,	// (0x0003aaf1) listscroll_cale_mrui_pane

0x5413,	// (0x0003ab06) listscroll_sp_fs_schedule_track_pane

0x541c,	// (0x0003ab0f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x541c,	// (0x0003ab0f) main_sp_fs_ctrlbar_pane_cp01

0xe8f9,	// (0x00043fec) main_sp_fs_ribbon_pane

0x542f,	// (0x0003ab22) popup_sp_fs_cale_preview_window

0xbb68,	// (0x0004125b) list_single_sp_fs_schedule_track_pane_ParamLimits

0xbb68,	// (0x0004125b) list_single_sp_fs_schedule_track_pane

0x1130,	// (0x00036823) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1130,	// (0x00036823) bg_sp_fs_highlight_list_pane_cp03

0xbb88,	// (0x0004127b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xbb88,	// (0x0004127b) list_single_sp_fs_schedule_track_pane_g1

0xbb94,	// (0x00041287) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xbb94,	// (0x00041287) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc69,	// (0x0004535c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc69,	// (0x0004535c) list_single_sp_fs_schedule_track_pane_g

0xbba0,	// (0x00041293) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbba0,	// (0x00041293) list_single_sp_fs_schedule_track_pane_t1

0xbbb8,	// (0x000412ab) sp_fs_schedule_track_pane_ParamLimits

0xbbb8,	// (0x000412ab) sp_fs_schedule_track_pane

0xe901,	// (0x00043ff4) sp_fs_schedule_track_pane_g1

0xe909,	// (0x00043ffc) sp_fs_schedule_track_pane_g2

0xe911,	// (0x00044004) sp_fs_schedule_track_pane_g3

0xe919,	// (0x0004400c) sp_fs_schedule_track_pane_g4

0xe921,	// (0x00044014) sp_fs_schedule_track_pane_g5

0x0004,

0xfc6e,	// (0x00045361) sp_fs_schedule_track_pane_g

0xd696,	// (0x00042d89) bg_sp_fs_schedule_viewer_highlight_g1

0x15cc,	// (0x00036cbf) bg_sp_fs_schedule_viewer_highlight_g2

0xd69e,	// (0x00042d91) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a6,	// (0x00042d99) bg_sp_fs_schedule_viewer_highlight_g4

0xd905,	// (0x00042ff8) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b6,	// (0x00042da9) bg_sp_fs_schedule_viewer_highlight_g6

0xd6be,	// (0x00042db1) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c6,	// (0x00042db9) bg_sp_fs_schedule_viewer_highlight_g8

0x15ac,	// (0x00036c9f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc79,	// (0x0004536c) bg_sp_fs_schedule_viewer_highlight_g

0x0a3d,	// (0x00036130) bg_main_sp_fs_ribbon_pane

0xbbc8,	// (0x000412bb) main_sp_fs_ribbon_pane_g1

0xe929,	// (0x0004401c) main_sp_fs_ribbon_pane_t1

0xbbd1,	// (0x000412c4) main_sp_fs_ribbon_pane_t2

0xe938,	// (0x0004402b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc8c,	// (0x0004537f) main_sp_fs_ribbon_pane_t

0xe947,	// (0x0004403a) main_sp_fs_ribbon_scheduler_pane

0xe94f,	// (0x00044042) bg_main_sp_fs_ribbon_pane_g1

0xe958,	// (0x0004404b) bg_main_sp_fs_ribbon_pane_g2

0xe961,	// (0x00044054) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc93,	// (0x00045386) bg_main_sp_fs_ribbon_pane_g

0xe969,	// (0x0004405c) main_sp_fs_ribbon_scheduler_pane_g1

0xe972,	// (0x00044065) main_sp_fs_ribbon_scheduler_pane_g2

0xe97b,	// (0x0004406e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc9a,	// (0x0004538d) main_sp_fs_ribbon_scheduler_pane_g

0xe984,	// (0x00044077) list_cale_mrui_pane

0xbbe0,	// (0x000412d3) sp_fs_scroll_pane_cp07_ParamLimits

0xbbe0,	// (0x000412d3) sp_fs_scroll_pane_cp07

0xbbfc,	// (0x000412ef) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xbbfc,	// (0x000412ef) bg_sp_fs_schedule_viewer_highlight

0xe991,	// (0x00044084) list_single_sp_fs_schedule_track_pane_cp01

0xe999,	// (0x0004408c) list_sp_fs_schedule_track_pane

0xe9a1,	// (0x00044094) sp_fs_scroll_pane_cp06_ParamLimits

0xe9a1,	// (0x00044094) sp_fs_scroll_pane_cp06

0x117c,	// (0x0003686f) bgmain_sp_fs_calendar_pane_g1

0x5441,	// (0x0003ab34) list_single_cale_mrui_pane_ParamLimits

0x5441,	// (0x0003ab34) list_single_cale_mrui_pane

0x546f,	// (0x0003ab62) list_single_cale_mrui_row_pane_ParamLimits

0x546f,	// (0x0003ab62) list_single_cale_mrui_row_pane

0x547c,	// (0x0003ab6f) list_single_cale_mrui_row_pane_g1_ParamLimits

0x547c,	// (0x0003ab6f) list_single_cale_mrui_row_pane_g1

0x54b4,	// (0x0003aba7) list_single_cale_mrui_row_pane_t1_ParamLimits

0x54b4,	// (0x0003aba7) list_single_cale_mrui_row_pane_t1

0x54c6,	// (0x0003abb9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x54c6,	// (0x0003abb9) list_single_cale_mrui_row_pane_t2

0x552c,	// (0x0003ac1f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x552c,	// (0x0003ac1f) list_single_cale_mrui_row_pane_t3

0x555b,	// (0x0003ac4e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x555b,	// (0x0003ac4e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca8,	// (0x0004539b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca8,	// (0x0004539b) list_single_cale_mrui_row_pane_t

0x558a,	// (0x0003ac7d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x558a,	// (0x0003ac7d) list_single_cmail_header_editor_pane_bg_cp01

0x55b2,	// (0x0003aca5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x55b2,	// (0x0003aca5) list_single_cmail_header_editor_pane_bg_cp02

0xe9c0,	// (0x000440b3) main_radioblah_text_pane_t1_ParamLimits

0xe9c0,	// (0x000440b3) main_radioblah_text_pane_t1

0xe9da,	// (0x000440cd) cam6_indi_pane_cp01

0xe9e2,	// (0x000440d5) cam6_mode_pane_cp01

0xe9ea,	// (0x000440dd) cam6_pano_pane

0xe9f3,	// (0x000440e6) cam6_zoom_pane_cp01

0xe9fb,	// (0x000440ee) cam6_pano_image_pane

0xea06,	// (0x000440f9) cam6_pano_pane_g1

0xe2dd,	// (0x000439d0) cam6_pano_pane_g2

0xea0f,	// (0x00044102) cam6_pano_pane_g3

0xea18,	// (0x0004410b) cam6_pano_pane_g4

0x3a3f,	// (0x00039132) cam6_pano_pane_g5

0xea21,	// (0x00044114) cam6_pano_pane_g6

0xd930,	// (0x00043023) cam6_pano_pane_g7

0xea2b,	// (0x0004411e) cam6_pano_pane_g8

0xea34,	// (0x00044127) cam6_pano_pane_g9

0x0008,

0xfcb1,	// (0x000453a4) cam6_pano_pane_g

0x0a3d,	// (0x00036130) main_browser_tag_pane

0xe880,	// (0x00043f73) grid_navstr_albumart_pane

0xea3f,	// (0x00044132) cell_navstr_albumart_pane_ParamLimits

0xea3f,	// (0x00044132) cell_navstr_albumart_pane

0xea5f,	// (0x00044152) cell_navstr_albumart_pane_g1

0x2f3f,	// (0x00038632) cell_navstr_albumart_pane_g2

0x2f4f,	// (0x00038642) cell_navstr_albumart_pane_g3

0x2f47,	// (0x0003863a) cell_navstr_albumart_pane_g4

0x0003,

0xfcc4,	// (0x000453b7) cell_navstr_albumart_pane_g

0xbc09,	// (0x000412fc) bt_list_pane_ParamLimits

0xbc09,	// (0x000412fc) bt_list_pane

0xbc29,	// (0x0004131c) bt_list_pane_t1

0xbc38,	// (0x0004132b) bt_list_pane_t2

0x0001,

0xfccd,	// (0x000453c0) bt_list_pane_t

0x0a3d,	// (0x00036130) main_cale_prevew_pane

0xbc47,	// (0x0004133a) popup_cale_preview_window_ParamLimits

0xbc47,	// (0x0004133a) popup_cale_preview_window

0x10d7,	// (0x000367ca) bg_popup_preview_window_pane_cp05_ParamLimits

0x10d7,	// (0x000367ca) bg_popup_preview_window_pane_cp05

0xea67,	// (0x0004415a) list_cale_preview_pane_ParamLimits

0xea67,	// (0x0004415a) list_cale_preview_pane

0xbc60,	// (0x00041353) list_double_cale_preview_pane_ParamLimits

0xbc60,	// (0x00041353) list_double_cale_preview_pane

0xbc72,	// (0x00041365) list_single_cale_preview_pane_ParamLimits

0xbc72,	// (0x00041365) list_single_cale_preview_pane

0xbc88,	// (0x0004137b) list_single_cale_preview_pane_g1

0xbc90,	// (0x00041383) list_single_cale_preview_pane_t1_ParamLimits

0xbc90,	// (0x00041383) list_single_cale_preview_pane_t1

0xbca5,	// (0x00041398) list_double_cale_preview_pane_g1

0xbcad,	// (0x000413a0) list_double_cale_preview_pane_t1_ParamLimits

0xbcad,	// (0x000413a0) list_double_cale_preview_pane_t1

0xbcc2,	// (0x000413b5) list_double_cale_preview_pane_t2_ParamLimits

0xbcc2,	// (0x000413b5) list_double_cale_preview_pane_t2

0x0001,

0xfcd2,	// (0x000453c5) list_double_cale_preview_pane_t_ParamLimits

0xfcd2,	// (0x000453c5) list_double_cale_preview_pane_t

0x0a3d,	// (0x00036130) main_ezdial_pane

0x10d7,	// (0x000367ca) main_sp_fs_email_pane_ParamLimits

0xb7fa,	// (0x00040eed) cmail_ddmenu_btn01_pane_ParamLimits

0xb7fa,	// (0x00040eed) cmail_ddmenu_btn01_pane

0xb817,	// (0x00040f0a) cmail_ddmenu_btn02_pane_ParamLimits

0xb817,	// (0x00040f0a) cmail_ddmenu_btn02_pane

0xb835,	// (0x00040f28) cmail_ddmenu_btn03_pane_ParamLimits

0xb835,	// (0x00040f28) cmail_ddmenu_btn03_pane

0xb8d0,	// (0x00040fc3) main_sp_fs_ctrlbar_pane_ParamLimits

0xb8e6,	// (0x00040fd9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb9f7,	// (0x000410ea) list_cmail_body_pane_ParamLimits

0xe7f4,	// (0x00043ee7) bg_button_pane_cp12

0xe7fd,	// (0x00043ef0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7fd,	// (0x00043ef0) list_single_cmail_header_detail_pane_g3

0x5388,	// (0x0003aa7b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5388,	// (0x0003aa7b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc50,	// (0x00045343) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc50,	// (0x00045343) list_single_cmail_header_detail_pane_t

0x53e0,	// (0x0003aad3) phacti_term_pane_t2_ParamLimits

0x53e0,	// (0x0003aad3) phacti_term_pane_t2

0x0001,

0xfc5f,	// (0x00045352) phacti_term_pane_t_ParamLimits

0xfc5f,	// (0x00045352) phacti_term_pane_t

0xea73,	// (0x00044166) aid_size_list_single_double

0xbcda,	// (0x000413cd) popup_ezdial_listscroll_window

0xea7f,	// (0x00044172) popup_number_entry_window_cp01

0x13b3,	// (0x00036aa6) bg_popup_call_pane_cp09

0xea8c,	// (0x0004417f) ezdial_list_pane

0xea94,	// (0x00044187) scroll_pane_cp23

0x32b1,	// (0x000389a4) bg_button_pane_cp028_ParamLimits

0x32b1,	// (0x000389a4) bg_button_pane_cp028

0xbcf3,	// (0x000413e6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbcf3,	// (0x000413e6) cmail_ddmenu_btn01_pane_g1

0xbd03,	// (0x000413f6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbd03,	// (0x000413f6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd7,	// (0x000453ca) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd7,	// (0x000453ca) cmail_ddmenu_btn01_pane_g

0xea9c,	// (0x0004418f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea9c,	// (0x0004418f) cmail_ddmenu_btn01_pane_t1

0x1ebe,	// (0x000375b1) bg_button_pane_cp029_ParamLimits

0x1ebe,	// (0x000375b1) bg_button_pane_cp029

0xbd0f,	// (0x00041402) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbd0f,	// (0x00041402) cmail_ddmenu_btn02_pane_g1

0xbd27,	// (0x0004141a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbd27,	// (0x0004141a) cmail_ddmenu_btn02_pane_t1

0x1130,	// (0x00036823) bg_button_pane_cp031_ParamLimits

0x1130,	// (0x00036823) bg_button_pane_cp031

0xbd0f,	// (0x00041402) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbd0f,	// (0x00041402) cmail_ddmenu_btn03_pane_g1

0xbd27,	// (0x0004141a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbd27,	// (0x0004141a) cmail_ddmenu_btn03_pane_t1

0x1186,	// (0x00036879) cell_dialer2_keypad_pane_t1_ParamLimits

0x3a6d,	// (0x00039160) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x3a6d,	// (0x00039160) cell_dialer2_keypad_pane_t1_copy1

0xb35e,	// (0x00040a51) ncimui_group_button_pane

0x10d7,	// (0x000367ca) main_sp_fs_calendar_pane_ParamLimits

0xba1e,	// (0x00041111) list_single_cmail_header_caption_pane_ParamLimits

0x53f5,	// (0x0003aae8) aid_recal_txt_sm_pane

0x0a3d,	// (0x00036130) mian_recal_day_pane

0x542f,	// (0x0003ab22) popup_sp_fs_cale_preview_window_ParamLimits

0xeab2,	// (0x000441a5) list_recal_day_pane

0x55e9,	// (0x0003acdc) list_single_recal_day_pane_ParamLimits

0x55e9,	// (0x0003acdc) list_single_recal_day_pane

0xead9,	// (0x000441cc) list_single_recal_day_pane_g1_ParamLimits

0xead9,	// (0x000441cc) list_single_recal_day_pane_g1

0x55fb,	// (0x0003acee) list_single_recal_day_pane_g2_ParamLimits

0x55fb,	// (0x0003acee) list_single_recal_day_pane_g2

0x5607,	// (0x0003acfa) list_single_recal_day_pane_g3_ParamLimits

0x5607,	// (0x0003acfa) list_single_recal_day_pane_g3

0x5613,	// (0x0003ad06) list_single_recal_day_pane_g4_ParamLimits

0x5613,	// (0x0003ad06) list_single_recal_day_pane_g4

0x5621,	// (0x0003ad14) list_single_recal_day_pane_g5_ParamLimits

0x5621,	// (0x0003ad14) list_single_recal_day_pane_g5

0x5637,	// (0x0003ad2a) list_single_recal_day_pane_g6_ParamLimits

0x5637,	// (0x0003ad2a) list_single_recal_day_pane_g6

0x0004,

0xfce6,	// (0x000453d9) list_single_recal_day_pane_g_ParamLimits

0xfce6,	// (0x000453d9) list_single_recal_day_pane_g

0x564b,	// (0x0003ad3e) list_single_recal_day_pane_t1

0x565d,	// (0x0003ad50) list_single_recal_day_pane_t2

0x0001,

0xfcf1,	// (0x000453e4) list_single_recal_day_pane_t

0xbd4b,	// (0x0004143e) ncimui_query_button_pane_ParamLimits

0xbd4b,	// (0x0004143e) ncimui_query_button_pane

0xbd5b,	// (0x0004144e) ncimui_query_button_pane_t1_ParamLimits

0xbd5b,	// (0x0004144e) ncimui_query_button_pane_t1

0xeae5,	// (0x000441d8) ncimui_query_button_pane_t2_ParamLimits

0xeae5,	// (0x000441d8) ncimui_query_button_pane_t2

0x0001,

0xfcf6,	// (0x000453e9) ncimui_query_button_pane_t_ParamLimits

0xfcf6,	// (0x000453e9) ncimui_query_button_pane_t

0xbd6e,	// (0x00041461) query_button_pane_ParamLimits

0xbd6e,	// (0x00041461) query_button_pane

0x0a3d,	// (0x00036130) bg_button_pane_cp0028

0xeaf8,	// (0x000441eb) query_button_pane_t1

0x83ab,	// (0x0003da9e) main_tport_pane_ParamLimits

0xb901,	// (0x00040ff4) bg_popup_window_pane_cp01_ParamLimits

0xb901,	// (0x00040ff4) bg_popup_window_pane_cp01

0xb90f,	// (0x00041002) heading_pane_cp08_ParamLimits

0xb90f,	// (0x00041002) heading_pane_cp08

0xb91d,	// (0x00041010) heading_pane_cp07_ParamLimits

0xb91d,	// (0x00041010) heading_pane_cp07

0xb98c,	// (0x0004107f) cell_tport_appsw_pane_g2

0x0002,

0xfc3d,	// (0x00045330) cell_tport_appsw_pane_g

0x4aad,	// (0x0003a1a0) input_candi_list_open_g1

0x1797,	// (0x00036e8a) list_cale_time_pane_g6_ParamLimits

0x1797,	// (0x00036e8a) list_cale_time_pane_g6

0x8838,	// (0x0003df2b) aid_size_touch_calib_1_ParamLimits

0x8838,	// (0x0003df2b) aid_size_touch_calib_1

0x8844,	// (0x0003df37) aid_size_touch_calib_2_ParamLimits

0x8844,	// (0x0003df37) aid_size_touch_calib_2

0x8852,	// (0x0003df45) aid_size_touch_calib_3_ParamLimits

0x8852,	// (0x0003df45) aid_size_touch_calib_3

0x8862,	// (0x0003df55) aid_size_touch_calib_4_ParamLimits

0x8862,	// (0x0003df55) aid_size_touch_calib_4

0x8870,	// (0x0003df63) main_touch_calib_button_group_pane_ParamLimits

0x8870,	// (0x0003df63) main_touch_calib_button_group_pane

0x887e,	// (0x0003df71) main_touch_calib_pane_g1_ParamLimits

0x888a,	// (0x0003df7d) main_touch_calib_pane_g2_ParamLimits

0x8896,	// (0x0003df89) main_touch_calib_pane_g3_ParamLimits

0x88a2,	// (0x0003df95) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x00044d7c) main_touch_calib_pane_g_ParamLimits

0x88ae,	// (0x0003dfa1) main_touch_calib_pane_t1_ParamLimits

0x88c7,	// (0x0003dfba) main_touch_calib_pane_t2_ParamLimits

0x88e0,	// (0x0003dfd3) main_touch_calib_pane_t3_ParamLimits

0x88f6,	// (0x0003dfe9) main_touch_calib_pane_t4_ParamLimits

0x890c,	// (0x0003dfff) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x00044d85) main_touch_calib_pane_t_ParamLimits

0x380a,	// (0x00038efd) list_single_fp_cale_pane_g3_ParamLimits

0x380a,	// (0x00038efd) list_single_fp_cale_pane_g3

0x10d7,	// (0x000367ca) bg_button_pane_cp012_ParamLimits

0x10d7,	// (0x000367ca) bg_vkb2_func_pane_cp03_ParamLimits

0xa61e,	// (0x0003fd11) cell_vitu2_function_top_pane_g1_ParamLimits

0x10d7,	// (0x000367ca) bg_vkb2_func_pane_cp04_ParamLimits

0xb2e6,	// (0x000409d9) main_ncimui_button_group_pane_ParamLimits

0xb2e6,	// (0x000409d9) main_ncimui_button_group_pane

0xb34c,	// (0x00040a3f) main_ncimui_pane_t3_ParamLimits

0xb34c,	// (0x00040a3f) main_ncimui_pane_t3

0xe896,	// (0x00043f89) phacti_button_group_pane

0xea73,	// (0x00044166) aid_size_list_single_double_ParamLimits

0xbcda,	// (0x000413cd) popup_ezdial_listscroll_window_ParamLimits

0xea7f,	// (0x00044172) popup_number_entry_window_cp01_ParamLimits

0xbd7b,	// (0x0004146e) phacti_button_pane_ParamLimits

0xbd7b,	// (0x0004146e) phacti_button_pane

0x0a3d,	// (0x00036130) bg_button_pane_cp14

0xeb06,	// (0x000441f9) phacti_button_pane_t1

0xbd8c,	// (0x0004147f) main_touch_calib_button_pane_ParamLimits

0xbd8c,	// (0x0004147f) main_touch_calib_button_pane

0x11da,	// (0x000368cd) bg_button_pane_cp18_ParamLimits

0x11da,	// (0x000368cd) bg_button_pane_cp18

0xeb14,	// (0x00044207) main_touch_calib_button_pane_t1_ParamLimits

0xeb14,	// (0x00044207) main_touch_calib_button_pane_t1

0xeb2a,	// (0x0004421d) main_touch_calib_button_pane_t2_ParamLimits

0xeb2a,	// (0x0004421d) main_touch_calib_button_pane_t2

0x0001,

0xfcfb,	// (0x000453ee) main_touch_calib_button_pane_t_ParamLimits

0xfcfb,	// (0x000453ee) main_touch_calib_button_pane_t

0x0a3d,	// (0x00036130) cell_ncimui_button_pane

0x0a3d,	// (0x00036130) bg_button_pane_cp032

0xeb48,	// (0x0004423b) cell_ncimui_button_pane_t1

0x9851,	// (0x0003ef44) image3_infobar_pane_ParamLimits

0x9851,	// (0x0003ef44) image3_infobar_pane

0xb68e,	// (0x00040d81) fs_bigclock_status_pane_ParamLimits

0xb68e,	// (0x00040d81) fs_bigclock_status_pane

0xb69b,	// (0x00040d8e) main_fs_bigclock_clock_pane_ParamLimits

0xb69b,	// (0x00040d8e) main_fs_bigclock_clock_pane

0xb6af,	// (0x00040da2) main_fs_bigclock_indi_pane_ParamLimits

0xb6af,	// (0x00040da2) main_fs_bigclock_indi_pane

0xb6d7,	// (0x00040dca) main_fs_bigclock_swipe_pane_ParamLimits

0xb6d7,	// (0x00040dca) main_fs_bigclock_swipe_pane

0x0a3d,	// (0x00036130) main_fs_clock_dumped_data

0xe3ea,	// (0x00043add) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3ea,	// (0x00043add) list_single_fs_bigclock_indicator_pane_g1

0xe405,	// (0x00043af8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe405,	// (0x00043af8) list_single_fs_bigclock_indicator_pane_g2

0xe41f,	// (0x00043b12) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe41f,	// (0x00043b12) list_single_fs_bigclock_indicator_pane_g3

0xe439,	// (0x00043b2c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe439,	// (0x00043b2c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb97,	// (0x0004528a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb97,	// (0x0004528a) list_single_fs_bigclock_indicator_pane_g

0xe464,	// (0x00043b57) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe464,	// (0x00043b57) list_single_fs_bigclock_indicator_pane_t1

0xe48c,	// (0x00043b7f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe48c,	// (0x00043b7f) list_single_fs_bigclock_indicator_pane_t2

0xe4b4,	// (0x00043ba7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4b4,	// (0x00043ba7) list_single_fs_bigclock_indicator_pane_t3

0xe4dc,	// (0x00043bcf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4dc,	// (0x00043bcf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfba2,	// (0x00045295) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfba2,	// (0x00045295) list_single_fs_bigclock_indicator_pane_t

0xeb56,	// (0x00044249) image3_infobar_fav_pane_ParamLimits

0xeb56,	// (0x00044249) image3_infobar_fav_pane

0xeb66,	// (0x00044259) image3_infobar_loc_pane_ParamLimits

0xeb66,	// (0x00044259) image3_infobar_loc_pane

0xeb7a,	// (0x0004426d) image3_infobar_time_pane_ParamLimits

0xeb7a,	// (0x0004426d) image3_infobar_time_pane

0x117c,	// (0x0003686f) image3_infobar_time_pane_g1

0xeb8a,	// (0x0004427d) image3_infobar_time_pane_t1

0x117c,	// (0x0003686f) image3_infobar_loc_pane_g1

0xeb98,	// (0x0004428b) image3_infobar_loc_pane_g2

0x0001,

0xfd00,	// (0x000453f3) image3_infobar_loc_pane_g

0xeba0,	// (0x00044293) image3_infobar_loc_pane_t1

0x117c,	// (0x0003686f) image3_infobar_fav_pane_g1

0xebae,	// (0x000442a1) image3_infobar_fav_pane_g2

0x0001,

0xfd05,	// (0x000453f8) image3_infobar_fav_pane_g

0xebb6,	// (0x000442a9) fs_bigclock_status_battery_pane

0xebbf,	// (0x000442b2) fs_bigclock_status_signal_pane

0xebc8,	// (0x000442bb) fs_bigclock_status_title_pane

0xebd1,	// (0x000442c4) fs_bigclock_status_signal_pane_g1

0xebda,	// (0x000442cd) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd0a,	// (0x000453fd) fs_bigclock_status_signal_pane_g

0xebe2,	// (0x000442d5) fs_bigclock_status_battery_pane_g1

0xebeb,	// (0x000442de) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd0f,	// (0x00045402) fs_bigclock_status_battery_pane_g

0xebf3,	// (0x000442e6) fs_bigclock_status_title_pane_t1

0xbd9c,	// (0x0004148f) main_fs_bigclock_clock_pane_g1

0xbd9c,	// (0x0004148f) main_fs_bigclock_clock_pane_g2

0xbda9,	// (0x0004149c) main_fs_bigclock_clock_pane_g3

0xbda9,	// (0x0004149c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd14,	// (0x00045407) main_fs_bigclock_clock_pane_g

0xbdb5,	// (0x000414a8) main_fs_bigclock_clock_pane_t1

0xbdc8,	// (0x000414bb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd1d,	// (0x00045410) main_fs_bigclock_clock_pane_t

0xec01,	// (0x000442f4) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec01,	// (0x000442f4) list_single_fs_bigclock_indicator_pane

0xec12,	// (0x00044305) list_single_fs_bigclock_pane_ParamLimits

0xec12,	// (0x00044305) list_single_fs_bigclock_pane

0xec38,	// (0x0004432b) main_fs_bigclock_indicator_pane_t1

0xec47,	// (0x0004433a) list_single_fs_bigclock_pane_g1

0xec4f,	// (0x00044342) list_single_fs_bigclock_pane_t1

0x117c,	// (0x0003686f) main_fs_bigclock_swipe_pane_g1

0xec92,	// (0x00044385) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd2e,	// (0x00045421) main_fs_bigclock_swipe_pane_g

0xec9a,	// (0x0004438d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec9a,	// (0x0004438d) main_fs_bigclock_swipe_pane_t1

0x7702,	// (0x0003cdf5) call_type_pane_ParamLimits

0x0a3d,	// (0x00036130) main_btmg_pane

0x54a8,	// (0x0003ab9b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x54a8,	// (0x0003ab9b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfca1,	// (0x00045394) list_single_cale_mrui_row_pane_g_ParamLimits

0xfca1,	// (0x00045394) list_single_cale_mrui_row_pane_g

0x55d8,	// (0x0003accb) list_recal_vselct_arw_lo_pane

0xead1,	// (0x000441c4) list_recal_vselct_arw_up_pane

0x55e0,	// (0x0003acd3) list_recal_vselct_pane

0xbe1f,	// (0x00041512) btmg_button_pane

0xbe2b,	// (0x0004151e) main_btmg_pane_g1

0x0a3d,	// (0x00036130) bg_button_pane_cp044

0xecb7,	// (0x000443aa) btmg_button_pane_t1

0x308f,	// (0x00038782) aid_listscroll_gen

0x10d7,	// (0x000367ca) main_cntbar_detail_pane

0xe7bb,	// (0x00043eae) list_cmail_folder_pane

0xe7da,	// (0x00043ecd) sp_fs_scroll_pane_cp03_ParamLimits

0x566f,	// (0x0003ad62) list_single_fs_dyc_pane_cp01_ParamLimits

0x566f,	// (0x0003ad62) list_single_fs_dyc_pane_cp01

0xecc5,	// (0x000443b8) aid_size_cmail_indent

0x569b,	// (0x0003ad8e) list_single_dyc_row_pane_cp01

0xbe53,	// (0x00041546) cntbar_detail_list_pane_ParamLimits

0xbe53,	// (0x00041546) cntbar_detail_list_pane

0xbe8d,	// (0x00041580) main_cntbar_detail_cont_pane_ParamLimits

0xbe8d,	// (0x00041580) main_cntbar_detail_cont_pane

0x76f6,	// (0x0003cde9) scroll_pane_cp032_ParamLimits

0x76f6,	// (0x0003cde9) scroll_pane_cp032

0xbe99,	// (0x0004158c) cntbar_detail_list_event_pane_ParamLimits

0xbe99,	// (0x0004158c) cntbar_detail_list_event_pane

0xbe5f,	// (0x00041552) cntbar_detail_list_shct_pane

0x161a,	// (0x00036d0d) aid_list_gen

0xecce,	// (0x000443c1) aid_scroll

0xecd7,	// (0x000443ca) aid_size_touch_scroll_bar

0x56a4,	// (0x0003ad97) aid_list_double

0x56ad,	// (0x0003ada0) aid_list_single

0xece0,	// (0x000443d3) aid_list_single_lg

0x56b6,	// (0x0003ada9) aid_list_z_g_a_sm

0x56be,	// (0x0003adb1) aid_list_z_g_d

0x56c6,	// (0x0003adb9) aid_txt_z_prm

0x56d4,	// (0x0003adc7) aid_txt_z_prm_cp01

0x56e2,	// (0x0003add5) aid_txt_z_sec

0xbead,	// (0x000415a0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbead,	// (0x000415a0) main_cntbar_detail_cont_pane_g1

0xbeba,	// (0x000415ad) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbeba,	// (0x000415ad) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd33,	// (0x00045426) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd33,	// (0x00045426) main_cntbar_detail_cont_pane_g

0xece9,	// (0x000443dc) main_cntbar_detail_cont_pane_t1

0xecf7,	// (0x000443ea) main_cntbar_detail_cont_pane_t2

0xed05,	// (0x000443f8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd38,	// (0x0004542b) main_cntbar_detail_cont_pane_t

0xbec6,	// (0x000415b9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbec6,	// (0x000415b9) cell_cntbar_detail_list_shct_pane

0xed13,	// (0x00044406) cntbar_detail_list_shct_pane_g1

0xed1c,	// (0x0004440f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd3f,	// (0x00045432) cntbar_detail_list_shct_pane_g

0xbeda,	// (0x000415cd) cntbar_detail_list_event_pane_g1_ParamLimits

0xbeda,	// (0x000415cd) cntbar_detail_list_event_pane_g1

0xbee6,	// (0x000415d9) cntbar_detail_list_event_pane_g2_ParamLimits

0xbee6,	// (0x000415d9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd44,	// (0x00045437) cntbar_detail_list_event_pane_g_ParamLimits

0xfd44,	// (0x00045437) cntbar_detail_list_event_pane_g

0xbf52,	// (0x00041645) cntbar_detail_list_event_pane_t1_ParamLimits

0xbf52,	// (0x00041645) cntbar_detail_list_event_pane_t1

0xbf67,	// (0x0004165a) cntbar_detail_list_event_pane_t2_ParamLimits

0xbf67,	// (0x0004165a) cntbar_detail_list_event_pane_t2

0x0002,

0xfd51,	// (0x00045444) cntbar_detail_list_event_pane_t_ParamLimits

0xfd51,	// (0x00045444) cntbar_detail_list_event_pane_t

0x117c,	// (0x0003686f) cell_cntbar_detail_list_shct_pane_g1

0x1d9d,	// (0x00037490) navi_pane_mv_g3

0x10d7,	// (0x000367ca) main_cntbar_detail_pane_ParamLimits

0x0a3d,	// (0x00036130) main_notif_wgt_pane

0x9510,	// (0x0003ec03) aid_tch_main_mp4_pane_g4

0x97e3,	// (0x0003eed6) popup_slider_window_cp02

0x55ce,	// (0x0003acc1) list_recal_day_event_pane

0xbe33,	// (0x00041526) cntbar_detail_btn_pane_ParamLimits

0xbe33,	// (0x00041526) cntbar_detail_btn_pane

0xbe43,	// (0x00041536) cntbar_detail_btn_pane_cp01_ParamLimits

0xbe43,	// (0x00041536) cntbar_detail_btn_pane_cp01

0xbe5f,	// (0x00041552) cntbar_detail_list_shct_pane_ParamLimits

0xbe6b,	// (0x0004155e) cntbar_detail_pane_g1_ParamLimits

0xbe6b,	// (0x0004155e) cntbar_detail_pane_g1

0xbe77,	// (0x0004156a) cntbar_detail_pane_t1_ParamLimits

0xbe77,	// (0x0004156a) cntbar_detail_pane_t1

0xbef2,	// (0x000415e5) cntbar_detail_list_event_pane_g3_ParamLimits

0xbef2,	// (0x000415e5) cntbar_detail_list_event_pane_g3

0xbf0a,	// (0x000415fd) cntbar_detail_list_event_pane_g4_ParamLimits

0xbf0a,	// (0x000415fd) cntbar_detail_list_event_pane_g4

0xbf22,	// (0x00041615) cntbar_detail_list_event_pane_g5_ParamLimits

0xbf22,	// (0x00041615) cntbar_detail_list_event_pane_g5

0xbf3a,	// (0x0004162d) cntbar_detail_list_event_pane_g6_ParamLimits

0xbf3a,	// (0x0004162d) cntbar_detail_list_event_pane_g6

0xbf7c,	// (0x0004166f) cntbar_detail_list_event_pane_t3_ParamLimits

0xbf7c,	// (0x0004166f) cntbar_detail_list_event_pane_t3

0xbf8e,	// (0x00041681) popup_notif_wgt_window_ParamLimits

0xbf8e,	// (0x00041681) popup_notif_wgt_window

0xbf9e,	// (0x00041691) popup_submenu_window_cp01_ParamLimits

0xbf9e,	// (0x00041691) popup_submenu_window_cp01

0x13b3,	// (0x00036aa6) bg_popup_window_pane_cp10

0xed25,	// (0x00044418) listscroll_notif_wgt_pane

0xed37,	// (0x0004442a) list_notif_wgt_window

0xed40,	// (0x00044433) scroll_pane_cp033

0xbfb0,	// (0x000416a3) list_notif_wgt_row_pane_ParamLimits

0xbfb0,	// (0x000416a3) list_notif_wgt_row_pane

0xed49,	// (0x0004443c) aid_size_list_notif_wgt_del

0xed56,	// (0x00044449) list_notif_wgt_row_pane_g1

0xed62,	// (0x00044455) list_notif_wgt_row_pane_g2

0xed71,	// (0x00044464) list_notif_wgt_row_pane_g3

0x0002,

0xfd58,	// (0x0004544b) list_notif_wgt_row_pane_g

0xed7e,	// (0x00044471) list_notif_wgt_row_pane_t1

0xed94,	// (0x00044487) list_notif_wgt_row_pane_t2

0xeda6,	// (0x00044499) list_notif_wgt_row_pane_t3

0x0002,

0xfd5f,	// (0x00045452) list_notif_wgt_row_pane_t

0xd90d,	// (0x00043000) list_recal_day_event_pane_g1

0xedb8,	// (0x000444ab) list_recal_day_event_pane_t1

0x0a3d,	// (0x00036130) bg_button_pane_cp045

0xedc7,	// (0x000444ba) cntbar_detail_btn_pane_t1

0x1ebe,	// (0x000375b1) main_callh_pane_ParamLimits

0x1ebe,	// (0x000375b1) main_callh_pane

0x0a3d,	// (0x00036130) main_coverflow0_pane

0x0a3d,	// (0x00036130) main_wgtman_pane

0xb6ef,	// (0x00040de2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb6ef,	// (0x00040de2) main_fs_bigclock_unlock_btn_pane

0xb984,	// (0x00041077) bg_button_pane_cp16

0xb994,	// (0x00041087) cell_tport_appsw_pane_g3

0xbfc2,	// (0x000416b5) cf0_flow_pane_ParamLimits

0xbfc2,	// (0x000416b5) cf0_flow_pane

0xedd5,	// (0x000444c8) listscroll_cf0_pane

0xede0,	// (0x000444d3) main_cf0_pane_g1

0xbfd1,	// (0x000416c4) main_cf0_pane_t1_ParamLimits

0xbfd1,	// (0x000416c4) main_cf0_pane_t1

0xbfe5,	// (0x000416d8) main_cf0_pane_t2_ParamLimits

0xbfe5,	// (0x000416d8) main_cf0_pane_t2

0x0001,

0xfd6b,	// (0x0004545e) main_cf0_pane_t_ParamLimits

0xfd6b,	// (0x0004545e) main_cf0_pane_t

0xedf2,	// (0x000444e5) scroll_pane_cp11

0xbff9,	// (0x000416ec) cf0_flow_pane_g1

0xc001,	// (0x000416f4) cf0_flow_pane_g2

0x0001,

0xfd70,	// (0x00045463) cf0_flow_pane_g

0xc009,	// (0x000416fc) cf0_flow_pane_t1

0x0a3d,	// (0x00036130) main_call6_pane

0x0a3d,	// (0x00036130) main_calllock_pane

0xc017,	// (0x0004170a) call6_btn_grp_pane_ParamLimits

0xc017,	// (0x0004170a) call6_btn_grp_pane

0xc026,	// (0x00041719) call6_pane_g1_ParamLimits

0xc026,	// (0x00041719) call6_pane_g1

0xc036,	// (0x00041729) popup_call6_1st_window_ParamLimits

0xc036,	// (0x00041729) popup_call6_1st_window

0xc044,	// (0x00041737) popup_call6_2nd_window_ParamLimits

0xc044,	// (0x00041737) popup_call6_2nd_window

0xc052,	// (0x00041745) cell_call6_btn_pane_ParamLimits

0xc052,	// (0x00041745) cell_call6_btn_pane

0x13b3,	// (0x00036aa6) bg_popup_call2_in_pane_cp03

0xedfd,	// (0x000444f0) popup_call6_1st_window_g1

0xee05,	// (0x000444f8) popup_call6_1st_window_g2

0xee0d,	// (0x00044500) popup_call6_1st_window_g3

0x0002,

0xfd75,	// (0x00045468) popup_call6_1st_window_g

0xee15,	// (0x00044508) popup_call6_1st_window_t1

0xee24,	// (0x00044517) popup_call6_1st_window_t2

0xee32,	// (0x00044525) popup_call6_1st_window_t3

0x0002,

0xfd7c,	// (0x0004546f) popup_call6_1st_window_t

0x13b3,	// (0x00036aa6) bg_popup_call2_in_pane_cp04

0xee40,	// (0x00044533) popup_call6_2nd_window_g1

0xee48,	// (0x0004453b) popup_call6_2nd_window_g2

0xee50,	// (0x00044543) popup_call6_2nd_window_g3

0x0002,

0xfd83,	// (0x00045476) popup_call6_2nd_window_g

0xee58,	// (0x0004454b) popup_call6_2nd_window_t1

0x0a3d,	// (0x00036130) bg_button_pane_cp15

0xee67,	// (0x0004455a) cell_call6_btn_pane_g1

0xeeda,	// (0x000445cd) cell_call6_btn_pane_t1

0xc061,	// (0x00041754) listscroll_wgtman_pane_ParamLimits

0xc061,	// (0x00041754) listscroll_wgtman_pane

0xc07d,	// (0x00041770) wgtman_btn_pane_ParamLimits

0xc07d,	// (0x00041770) wgtman_btn_pane

0x1ba4,	// (0x00037297) aid_scroll_copy1

0xee70,	// (0x00044563) list_wgtman_pane

0xc0b2,	// (0x000417a5) wgtman_btn_pane_g1_ParamLimits

0xc0b2,	// (0x000417a5) wgtman_btn_pane_g1

0xc0da,	// (0x000417cd) wgtman_btn_pane_t1_ParamLimits

0xc0da,	// (0x000417cd) wgtman_btn_pane_t1

0xee7a,	// (0x0004456d) wgtman_btn_pane_t2_ParamLimits

0xee7a,	// (0x0004456d) wgtman_btn_pane_t2

0x0001,

0xfd8a,	// (0x0004547d) wgtman_btn_pane_t_ParamLimits

0xfd8a,	// (0x0004547d) wgtman_btn_pane_t

0xc111,	// (0x00041804) listrow_wgtman_pane_ParamLimits

0xc111,	// (0x00041804) listrow_wgtman_pane

0xc12c,	// (0x0004181f) listrow_wgtman_pane_g1

0xc139,	// (0x0004182c) listrow_wgtman_pane_g2

0x0001,

0xfd8f,	// (0x00045482) listrow_wgtman_pane_g

0x56f0,	// (0x0003ade3) listrow_wgtman_pane_t1

0x5708,	// (0x0003adfb) listrow_wgtman_pane_t2

0x0001,

0xfd94,	// (0x00045487) listrow_wgtman_pane_t

0x572e,	// (0x0003ae21) wait_bar_pane_cp09

0xee91,	// (0x00044584) main_calllock_btn_pane

0xee9b,	// (0x0004458e) main_calllock_pane_g1

0x0a3d,	// (0x00036130) bg_button_pane_cp17

0xee67,	// (0x0004455a) main_calllock_btn_pane_g1

0xeea3,	// (0x00044596) main_calllock_btn_pane_t1

0x0a3d,	// (0x00036130) main_dialer3_pane

0x0a3d,	// (0x00036130) main_fmrd2_pane

0x117c,	// (0x0003686f) main_fs_bigclock_unlock_btn_pane_g1

0xc15f,	// (0x00041852) main_fs_bigclock_unlock_btn_pane_t1

0xc16d,	// (0x00041860) area_fmrd2_info_pane_ParamLimits

0xc16d,	// (0x00041860) area_fmrd2_info_pane

0xc17b,	// (0x0004186e) area_fmrd2_visual_pane_ParamLimits

0xc17b,	// (0x0004186e) area_fmrd2_visual_pane

0xc189,	// (0x0004187c) fmrd2_indi_pane_ParamLimits

0xc189,	// (0x0004187c) fmrd2_indi_pane

0xc196,	// (0x00041889) area_fmrd2_visual_pane_g1

0xc19e,	// (0x00041891) area_fmrd2_visual_pane_t1

0xc1ae,	// (0x000418a1) area_fmrd2_visual_pane_t2

0xc1be,	// (0x000418b1) area_fmrd2_visual_pane_t3

0x0002,

0xfd9e,	// (0x00045491) area_fmrd2_visual_pane_t

0xc1ce,	// (0x000418c1) area_fmrd2_info_pane_g1

0xc1d6,	// (0x000418c9) area_fmrd2_info_pane_t1

0xc1e6,	// (0x000418d9) area_fmrd2_info_pane_t2

0xc1f6,	// (0x000418e9) area_fmrd2_info_pane_t3

0xc206,	// (0x000418f9) area_fmrd2_info_pane_t4

0x0003,

0xfda5,	// (0x00045498) area_fmrd2_info_pane_t

0xc214,	// (0x00041907) fmrd2_indi_pane_t1

0xc224,	// (0x00041917) fmrd2_indi_pane_t2

0xc234,	// (0x00041927) fmrd2_indi_pane_t3

0x0002,

0xfdae,	// (0x000454a1) fmrd2_indi_pane_t

0xe448,	// (0x00043b3b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe448,	// (0x00043b3b) list_single_fs_bigclock_indicator_pane_g5

0xe4f9,	// (0x00043bec) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4f9,	// (0x00043bec) list_single_fs_bigclock_indicator_pane_t5

0xbb1b,	// (0x0004120e) aid_cell_bcale_month_pane_ParamLimits

0xbb1b,	// (0x0004120e) aid_cell_bcale_month_pane

0xbb39,	// (0x0004122c) bcale_month_pane_ParamLimits

0xbb39,	// (0x0004122c) bcale_month_pane

0xbb57,	// (0x0004124a) bcale_preview_pane_ParamLimits

0xbb57,	// (0x0004124a) bcale_preview_pane

0xec4f,	// (0x00044342) list_single_fs_bigclock_pane_t1_ParamLimits

0xec6e,	// (0x00044361) list_single_fs_bigclock_pane_t2_ParamLimits

0xec6e,	// (0x00044361) list_single_fs_bigclock_pane_t2

0x0001,

0xfd29,	// (0x0004541c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd29,	// (0x0004541c) list_single_fs_bigclock_pane_t

0xc157,	// (0x0004184a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd99,	// (0x0004548c) main_fs_bigclock_unlock_btn_pane_g

0xc242,	// (0x00041935) aid_dia3_key_size_ParamLimits

0xc242,	// (0x00041935) aid_dia3_key_size

0xc24e,	// (0x00041941) aid_dia3_listrow_size_ParamLimits

0xc24e,	// (0x00041941) aid_dia3_listrow_size

0xc25e,	// (0x00041951) dia3_keypad_fun_pane_ParamLimits

0xc25e,	// (0x00041951) dia3_keypad_fun_pane

0xc270,	// (0x00041963) dia3_keypad_num_pane_ParamLimits

0xc270,	// (0x00041963) dia3_keypad_num_pane

0xc282,	// (0x00041975) dia3_listscroll_pane_ParamLimits

0xc282,	// (0x00041975) dia3_listscroll_pane

0xc290,	// (0x00041983) dia3_numentry_pane_ParamLimits

0xc290,	// (0x00041983) dia3_numentry_pane

0xeeb2,	// (0x000445a5) dia3_list_pane

0xeebd,	// (0x000445b0) scroll_pane_cp12

0x0a3d,	// (0x00036130) bg_dia3_numentry_pane

0xc29e,	// (0x00041991) dia3_numentry_pane_t1

0xc2ad,	// (0x000419a0) cell_dia3_key_num_pane

0xc2b5,	// (0x000419a8) cell_dia3_key0_fun_pane_ParamLimits

0xc2b5,	// (0x000419a8) cell_dia3_key0_fun_pane

0xc2c2,	// (0x000419b5) cell_dia3_key1_fun_pane_ParamLimits

0xc2c2,	// (0x000419b5) cell_dia3_key1_fun_pane

0xc2cf,	// (0x000419c2) dia3_listrow_pane

0xe19b,	// (0x0004388e) bg_dia3_numentry_pane_g1

0x0a3d,	// (0x00036130) bg_button_pane_cp21

0xeee9,	// (0x000445dc) cell_dia3_key_num_pane_t1

0xeef7,	// (0x000445ea) cell_dia3_key_num_pane_t2

0xef06,	// (0x000445f9) cell_dia3_key_num_pane_t3

0xef15,	// (0x00044608) cell_dia3_key_num_pane_t4

0x0003,

0xfdb5,	// (0x000454a8) cell_dia3_key_num_pane_t

0x0a3d,	// (0x00036130) bg_button_pane_cp19

0xc2dc,	// (0x000419cf) cell_dia3_key0_fun_pane_g1

0x0a3d,	// (0x00036130) bg_button_pane_cp20

0xc2e4,	// (0x000419d7) cell_dia3_key1_fun_pane_g1

0xc2ec,	// (0x000419df) area_left_week_number_pane

0xc2ff,	// (0x000419f2) area_top_day_name_pane

0xc30d,	// (0x00041a00) frame_month_view_pane

0xef24,	// (0x00044617) grid_month_view_pane

0xc322,	// (0x00041a15) cell_top_day_name_pane_ParamLimits

0xc322,	// (0x00041a15) cell_top_day_name_pane

0xc33c,	// (0x00041a2f) cell_area_left_week_number_pane_ParamLimits

0xc33c,	// (0x00041a2f) cell_area_left_week_number_pane

0xc35f,	// (0x00041a52) cell_month_view_pane_ParamLimits

0xc35f,	// (0x00041a52) cell_month_view_pane

0xef32,	// (0x00044625) frm_month_g1

0xc38b,	// (0x00041a7e) frm_month_g2

0xc39c,	// (0x00041a8f) frm_month_g3

0xc3ad,	// (0x00041aa0) frm_month_g4

0xc3be,	// (0x00041ab1) frm_month_g5

0xc3d1,	// (0x00041ac4) frm_month_g6

0xc3e4,	// (0x00041ad7) frm_month_g7

0xef3f,	// (0x00044632) frm_month_g8

0xc3f7,	// (0x00041aea) frm_month_g9

0xc404,	// (0x00041af7) frm_month_g10

0xc411,	// (0x00041b04) frm_month_g11

0xc41e,	// (0x00041b11) frm_month_g12

0xc42b,	// (0x00041b1e) frm_month_g13

0xc438,	// (0x00041b2b) frm_month_g14

0xc447,	// (0x00041b3a) frm_month_g15

0xc456,	// (0x00041b49) frm_month_g16

0x000f,

0xfdbe,	// (0x000454b1) frm_month_g

0xef4c,	// (0x0004463f) cell_top_day_name_pane_t1

0xc465,	// (0x00041b58) cell_area_left_week_number_pane_g1

0xc474,	// (0x00041b67) cell_area_left_week_number_pane_t1

0x113e,	// (0x00036831) cell_month_view_pane_g1

0xc48a,	// (0x00041b7d) cell_month_view_pane_t1

0x0a3d,	// (0x00036130) main_fps_pane

0xe6c6,	// (0x00043db9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6c6,	// (0x00043db9) cmail_ddmenu_btn02_pane_cp1

0xe6e2,	// (0x00043dd5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6e2,	// (0x00043dd5) cmail_ddmenu_btn02_pane_cp2

0xbd1b,	// (0x0004140e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbd1b,	// (0x0004140e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcdc,	// (0x000453cf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcdc,	// (0x000453cf) cmail_ddmenu_btn02_pane_g

0xbd39,	// (0x0004142c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbd39,	// (0x0004142c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfce1,	// (0x000453d4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfce1,	// (0x000453d4) cmail_ddmenu_btn02_pane_t

0xc4a0,	// (0x00041b93) fps_text_pane_ParamLimits

0xc4a0,	// (0x00041b93) fps_text_pane

0xc4ad,	// (0x00041ba0) main_fps_pane_g1_ParamLimits

0xc4ad,	// (0x00041ba0) main_fps_pane_g1

0xc4bb,	// (0x00041bae) wait_bar_pane_cp010_ParamLimits

0xc4bb,	// (0x00041bae) wait_bar_pane_cp010

0xc4c7,	// (0x00041bba) fps_text_pane_t1_ParamLimits

0xc4c7,	// (0x00041bba) fps_text_pane_t1

0x9bd5,	// (0x0003f2c8) cam4_image_uncrop_pane_g1

0x9bde,	// (0x0003f2d1) cam4_image_uncrop_pane_g2

0x9be7,	// (0x0003f2da) cam4_image_uncrop_pane_g3

0x9bf0,	// (0x0003f2e3) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x00044f0e) cam4_image_uncrop_pane_g

0xc2cf,	// (0x000419c2) dia3_listrow_pane_ParamLimits

0x0a3d,	// (0x00036130) main_phob2_pane

0xb966,	// (0x00041059) cell_tport_appsw_pane_cp02_ParamLimits

0xb966,	// (0x00041059) cell_tport_appsw_pane_cp02

0xb975,	// (0x00041068) cell_tport_appsw_pane_cp03_ParamLimits

0xb975,	// (0x00041068) cell_tport_appsw_pane_cp03

0x0a3d,	// (0x00036130) phob2_contact_card_pane

0x0a3d,	// (0x00036130) phob2_listscroll_pane

0xef5f,	// (0x00044652) phob2_list_pane

0xea94,	// (0x00044187) scroll_pane_cp034

0xc4e0,	// (0x00041bd3) phob2_cc_data_pane_ParamLimits

0xc4e0,	// (0x00041bd3) phob2_cc_data_pane

0xc4fa,	// (0x00041bed) phob2_cc_listscroll_pane_ParamLimits

0xc4fa,	// (0x00041bed) phob2_cc_listscroll_pane

0xc111,	// (0x00041804) list_double_large_graphic_phob2_pane_ParamLimits

0xc111,	// (0x00041804) list_double_large_graphic_phob2_pane

0xc514,	// (0x00041c07) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc514,	// (0x00041c07) list_double_large_graphic_phob2_pane_g1

0x5740,	// (0x0003ae33) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5740,	// (0x0003ae33) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfddf,	// (0x000454d2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfddf,	// (0x000454d2) list_double_large_graphic_phob2_pane_g

0x5766,	// (0x0003ae59) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5766,	// (0x0003ae59) list_double_large_graphic_phob2_pane_t1

0x577b,	// (0x0003ae6e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x577b,	// (0x0003ae6e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde8,	// (0x000454db) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde8,	// (0x000454db) list_double_large_graphic_phob2_pane_t

0x0a3d,	// (0x00036130) list_highlight_pane_cp024

0xef67,	// (0x0004465a) phob2_cc_button_pane

0xc521,	// (0x00041c14) phob2_cc_data_pane_g1_ParamLimits

0xc521,	// (0x00041c14) phob2_cc_data_pane_g1

0xc530,	// (0x00041c23) phob2_cc_data_pane_g2_ParamLimits

0xc530,	// (0x00041c23) phob2_cc_data_pane_g2

0x0001,

0xfded,	// (0x000454e0) phob2_cc_data_pane_g_ParamLimits

0xfded,	// (0x000454e0) phob2_cc_data_pane_g

0xc53f,	// (0x00041c32) phob2_cc_data_pane_t1_ParamLimits

0xc53f,	// (0x00041c32) phob2_cc_data_pane_t1

0xc554,	// (0x00041c47) phob2_cc_data_pane_t2_ParamLimits

0xc554,	// (0x00041c47) phob2_cc_data_pane_t2

0xc569,	// (0x00041c5c) phob2_cc_data_pane_t3_ParamLimits

0xc569,	// (0x00041c5c) phob2_cc_data_pane_t3

0x0002,

0xfdf2,	// (0x000454e5) phob2_cc_data_pane_t_ParamLimits

0xfdf2,	// (0x000454e5) phob2_cc_data_pane_t

0xef6f,	// (0x00044662) phob2_cc_list_pane_ParamLimits

0xef6f,	// (0x00044662) phob2_cc_list_pane

0xe0be,	// (0x000437b1) scroll_pane_cp035_ParamLimits

0xe0be,	// (0x000437b1) scroll_pane_cp035

0x10d7,	// (0x000367ca) bg_button_pane_cp033

0xef7b,	// (0x0004466e) phob2_cc_button_pane_g1

0xef87,	// (0x0004467a) phob2_cc_button_pane_t1

0xef9c,	// (0x0004468f) phob2_cc_button_pane_t2

0x0001,

0xfdf9,	// (0x000454ec) phob2_cc_button_pane_t

0xc57e,	// (0x00041c71) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc57e,	// (0x00041c71) list_double_large_graphic_phob2_cc_pane

0xc5ec,	// (0x00041cdf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc5ec,	// (0x00041cdf) list_double_large_graphic_phob2_cc_pane_g1

0x5790,	// (0x0003ae83) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5790,	// (0x0003ae83) list_double_large_graphic_phob2_cc_pane_g2

0x579c,	// (0x0003ae8f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x579c,	// (0x0003ae8f) list_double_large_graphic_phob2_cc_pane_g3

0x57a8,	// (0x0003ae9b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x57a8,	// (0x0003ae9b) list_double_large_graphic_phob2_cc_pane_g4

0x57b4,	// (0x0003aea7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x57b4,	// (0x0003aea7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdfe,	// (0x000454f1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdfe,	// (0x000454f1) list_double_large_graphic_phob2_cc_pane_g

0x57c0,	// (0x0003aeb3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x57c0,	// (0x0003aeb3) list_double_large_graphic_phob2_cc_pane_t1

0x57e9,	// (0x0003aedc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x57e9,	// (0x0003aedc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe09,	// (0x000454fc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe09,	// (0x000454fc) list_double_large_graphic_phob2_cc_pane_t

0xefae,	// (0x000446a1) list_highlight_pane_cp025_ParamLimits

0xefae,	// (0x000446a1) list_highlight_pane_cp025

0x10d7,	// (0x000367ca) bg_button_pane_cp033_ParamLimits

0xef7b,	// (0x0004466e) phob2_cc_button_pane_g1_ParamLimits

0xef87,	// (0x0004467a) phob2_cc_button_pane_t1_ParamLimits

0xef9c,	// (0x0004468f) phob2_cc_button_pane_t2_ParamLimits

0xfdf9,	// (0x000454ec) phob2_cc_button_pane_t_ParamLimits

0x5a67,	// (0x0003b15a) popup_wgtman_window

0xd7d6,	// (0x00042ec9) scroll_pane_cp038

0xc09a,	// (0x0004178d) wgtman_btn_pane_cp_01_ParamLimits

0xc09a,	// (0x0004178d) wgtman_btn_pane_cp_01

0xefbc,	// (0x000446af) wgtman_content_pane

0xefc5,	// (0x000446b8) wgtman_heading_pane

0x0a3d,	// (0x00036130) bg_heading_pane_cp02

0xefce,	// (0x000446c1) wgtman_heading_pane_g1

0xefd6,	// (0x000446c9) wgtman_heading_pane_t1

0xefe4,	// (0x000446d7) scroll_pane_cp036

0xefec,	// (0x000446df) wgtman_list_pane

0xeff4,	// (0x000446e7) wgtman_list_pane_t1_ParamLimits

0xeff4,	// (0x000446e7) wgtman_list_pane_t1

0x9b34,	// (0x0003f227) cam4_grid_pane

0x4d84,	// (0x0003a477) bg_button_pane_cp015_ParamLimits

0xa7cf,	// (0x0003fec2) bg_button_pane_cp016_ParamLimits

0xa7db,	// (0x0003fece) bg_button_pane_cp017_ParamLimits

0xa7f6,	// (0x0003fee9) popup_vitu2_query_window_g3_ParamLimits

0xa7f6,	// (0x0003fee9) popup_vitu2_query_window_g3

0x4e43,	// (0x0003a536) popup_vitu2_query_window_t6_ParamLimits

0x4e43,	// (0x0003a536) popup_vitu2_query_window_t6

0x4e6e,	// (0x0003a561) popup_vitu2_query_window_t7_ParamLimits

0x4e6e,	// (0x0003a561) popup_vitu2_query_window_t7

0xeec8,	// (0x000445bb) cam4_grid_pane_g1

0xeed1,	// (0x000445c4) cam4_grid_pane_g2

0xf00e,	// (0x00044701) cam4_grid_pane_g3

0xf017,	// (0x0004470a) cam4_grid_pane_g4

0x0003,

0xfe0e,	// (0x00045501) cam4_grid_pane_g

0x64b9,	// (0x0003bbac) aid_placing_vt_slider_lsc_ParamLimits

0x6805,	// (0x0003bef8) vidtel_button_pane_ParamLimits

0x6805,	// (0x0003bef8) vidtel_button_pane

0x0a3d,	// (0x00036130) bg_button_pane_cp034

0xf022,	// (0x00044715) vidtel_button_pane_g1

0xf02a,	// (0x0004471d) vidtel_button_pane_t1

0xd8fd,	// (0x00042ff0) aid_size_vtel_slider_touch

0xe0be,	// (0x000437b1) scroll_pane_cp039

0xb4a7,	// (0x00040b9a) ncim_query_button_pane_cp01_ParamLimits

0xb4c6,	// (0x00040bb9) ncimui_query_pane_g1_ParamLimits

0x10d7,	// (0x000367ca) input_focus_pane_cp012_ParamLimits

0xe1d9,	// (0x000438cc) ncim_query_entry_pane_t1_ParamLimits

0xe0be,	// (0x000437b1) scroll_pane_cp039_ParamLimits

0x1c88,	// (0x0003737b) navi_pane_bcale_mc_g1

0x1c90,	// (0x00037383) navi_pane_bcale_mc_t1

0xe716,	// (0x00043e09) main_sp_fs_email_pane_g1

0xe722,	// (0x00043e15) main_sp_fs_email_pane_g2

0x0001,

0xfc0c,	// (0x000452ff) main_sp_fs_email_pane_g

0xe9b3,	// (0x000440a6) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9b3,	// (0x000440a6) list_single_cale_mrui_row_pane_g3

0x562d,	// (0x0003ad20) list_single_recal_day_pane_g5_event_pane

0x5643,	// (0x0003ad36) list_single_recal_day_pane_g7

0x048c,	// (0x00035b7f) list_recal_day_event_pane_cp01

0x0495,	// (0x00035b88) list_recal_vselct_arw_lo_pane_cp01

0x049d,	// (0x00035b90) list_recal_vselct_arw_up_pane_cp01

0x04a5,	// (0x00035b98) list_recal_vselct_pane_cp01

0xd90d,	// (0x00043000) list_recal_day_event_pane_cp01_g1

0x5812,	// (0x0003af05) list_recal_day_event_pane_cp01_t1

0x564b,	// (0x0003ad3e) list_single_recal_day_pane_t1_ParamLimits

0x565d,	// (0x0003ad50) list_single_recal_day_pane_t2_ParamLimits

0xfcf1,	// (0x000453e4) list_single_recal_day_pane_t_ParamLimits

0x10b5,	// (0x000367a8) bg_notes_pane_ParamLimits

0x11b8,	// (0x000368ab) list_notes_pane_ParamLimits

0x5ba7,	// (0x0003b29a) scroll_pane_cp06_ParamLimits

0x11da,	// (0x000368cd) main_notes_pane_ParamLimits

0x10d7,	// (0x000367ca) main_welc_pane

0xc61f,	// (0x00041d12) main_welc_body_pane_ParamLimits

0xc61f,	// (0x00041d12) main_welc_body_pane

0xc639,	// (0x00041d2c) main_welc_opti_pane_ParamLimits

0xc639,	// (0x00041d2c) main_welc_opti_pane

0xc698,	// (0x00041d8b) main_welc_pane_t1_ParamLimits

0xc698,	// (0x00041d8b) main_welc_pane_t1

0xc82e,	// (0x00041f21) main_welc_body_row_pane_ParamLimits

0xc82e,	// (0x00041f21) main_welc_body_row_pane

0x1130,	// (0x00036823) main_welc_opti_row_pane_ParamLimits

0x1130,	// (0x00036823) main_welc_opti_row_pane

0x04cd,	// (0x00035bc0) main_welc_opti_row_pane_g1

0xc853,	// (0x00041f46) main_welc_opti_row_pane_t1

0x04d5,	// (0x00035bc8) main_welc_body_row_pane_t1

0xed2f,	// (0x00044422) popup_notif_wgt_heading_pane

0xed49,	// (0x0004443c) aid_size_list_notif_wgt_del_ParamLimits

0xed56,	// (0x00044449) list_notif_wgt_row_pane_g1_ParamLimits

0xed62,	// (0x00044455) list_notif_wgt_row_pane_g2_ParamLimits

0xed71,	// (0x00044464) list_notif_wgt_row_pane_g3_ParamLimits

0xfd58,	// (0x0004544b) list_notif_wgt_row_pane_g_ParamLimits

0xed7e,	// (0x00044471) list_notif_wgt_row_pane_t1_ParamLimits

0xed94,	// (0x00044487) list_notif_wgt_row_pane_t2_ParamLimits

0xeda6,	// (0x00044499) list_notif_wgt_row_pane_t3_ParamLimits

0xfd5f,	// (0x00045452) list_notif_wgt_row_pane_t_ParamLimits

0xc12c,	// (0x0004181f) listrow_wgtman_pane_g1_ParamLimits

0xc139,	// (0x0004182c) listrow_wgtman_pane_g2_ParamLimits

0xfd8f,	// (0x00045482) listrow_wgtman_pane_g_ParamLimits

0x56f0,	// (0x0003ade3) listrow_wgtman_pane_t1_ParamLimits

0x5708,	// (0x0003adfb) listrow_wgtman_pane_t2_ParamLimits

0xfd94,	// (0x00045487) listrow_wgtman_pane_t_ParamLimits

0x572e,	// (0x0003ae21) wait_bar_pane_cp09_ParamLimits

0x0a3d,	// (0x00036130) bg_popup_heading_pane_cp02

0x04e4,	// (0x00035bd7) popup_notif_wgt_heading_pane_g1

0x04ec,	// (0x00035bdf) popup_notif_wgt_heading_pane_t1

0x0a3d,	// (0x00036130) main_vids_pane

0x0a3d,	// (0x00036130) vids_listscroll_pane

0xc862,	// (0x00041f55) scroll_pane_cp040

0x0a3d,	// (0x00036130) vids_list_pane

0xc86d,	// (0x00041f60) vids_list_double_pane_ParamLimits

0xc86d,	// (0x00041f60) vids_list_double_pane

0xc884,	// (0x00041f77) vids_list_double_pane_g1

0xc88d,	// (0x00041f80) vids_list_double_pane_t1

0xc89d,	// (0x00041f90) vids_list_double_pane_t2

0x0001,

0xfe2d,	// (0x00045520) vids_list_double_pane_t

0x10d7,	// (0x000367ca) main_ncimui_pane_ParamLimits

0xb2fe,	// (0x000409f1) main_ncimui_pane_g1_ParamLimits

0xb30a,	// (0x000409fd) main_ncimui_pane_g2_ParamLimits

0xb30a,	// (0x000409fd) main_ncimui_pane_g2

0x0001,

0xfb0d,	// (0x00045200) main_ncimui_pane_g_ParamLimits

0xfb0d,	// (0x00045200) main_ncimui_pane_g

0xc652,	// (0x00041d45) main_welc_pane_g1_ParamLimits

0xc652,	// (0x00041d45) main_welc_pane_g1

0xc65e,	// (0x00041d51) main_welc_pane_g2_ParamLimits

0xc65e,	// (0x00041d51) main_welc_pane_g2

0x0003,

0xfe17,	// (0x0004550a) main_welc_pane_g_ParamLimits

0xfe17,	// (0x0004550a) main_welc_pane_g

0x10b5,	// (0x000367a8) listscroll_mce_pane_ParamLimits

0x1ddd,	// (0x000374d0) wait_bar_pane_cp10

0x3097,	// (0x0003878a) main_cale_day_pane_ParamLimits

0x3097,	// (0x0003878a) main_cale_week_pane_ParamLimits

0x10b5,	// (0x000367a8) main_messa_pane_ParamLimits

0x8fce,	// (0x0003e6c1) main_clock2_btn_pane_ParamLimits

0x8fce,	// (0x0003e6c1) main_clock2_btn_pane

0x3884,	// (0x00038f77) main_clock2_btn_pane_cp01_ParamLimits

0x3884,	// (0x00038f77) main_clock2_btn_pane_cp01

0xe984,	// (0x00044077) list_cale_mrui_pane_ParamLimits

0xedea,	// (0x000444dd) main_cf0_pane_g2

0x0001,

0xfd66,	// (0x00045459) main_cf0_pane_g

0xc2ec,	// (0x000419df) area_left_week_number_pane_ParamLimits

0xc2ff,	// (0x000419f2) area_top_day_name_pane_ParamLimits

0xc30d,	// (0x00041a00) frame_month_view_pane_ParamLimits

0xef24,	// (0x00044617) grid_month_view_pane_ParamLimits

0xef32,	// (0x00044625) frm_month_g1_ParamLimits

0xc38b,	// (0x00041a7e) frm_month_g2_ParamLimits

0xc39c,	// (0x00041a8f) frm_month_g3_ParamLimits

0xc3ad,	// (0x00041aa0) frm_month_g4_ParamLimits

0xc3be,	// (0x00041ab1) frm_month_g5_ParamLimits

0xc3d1,	// (0x00041ac4) frm_month_g6_ParamLimits

0xc3e4,	// (0x00041ad7) frm_month_g7_ParamLimits

0xef3f,	// (0x00044632) frm_month_g8_ParamLimits

0xc3f7,	// (0x00041aea) frm_month_g9_ParamLimits

0xc404,	// (0x00041af7) frm_month_g10_ParamLimits

0xc411,	// (0x00041b04) frm_month_g11_ParamLimits

0xc41e,	// (0x00041b11) frm_month_g12_ParamLimits

0xc42b,	// (0x00041b1e) frm_month_g13_ParamLimits

0xc438,	// (0x00041b2b) frm_month_g14_ParamLimits

0xc447,	// (0x00041b3a) frm_month_g15_ParamLimits

0xc456,	// (0x00041b49) frm_month_g16_ParamLimits

0xfdbe,	// (0x000454b1) frm_month_g_ParamLimits

0xef4c,	// (0x0004463f) cell_top_day_name_pane_t1_ParamLimits

0xc465,	// (0x00041b58) cell_area_left_week_number_pane_g1_ParamLimits

0xc474,	// (0x00041b67) cell_area_left_week_number_pane_t1_ParamLimits

0x113e,	// (0x00036831) cell_month_view_pane_g1_ParamLimits

0xc48a,	// (0x00041b7d) cell_month_view_pane_t1_ParamLimits

0x10ad,	// (0x000367a0) main_clock2_btn_pane_g1

0x04fa,	// (0x00035bed) main_clock2_btn_pane_t1

0x10d7,	// (0x000367ca) listscroll_cmail_pane_ParamLimits

0xe716,	// (0x00043e09) main_sp_fs_email_pane_g1_ParamLimits

0xe722,	// (0x00043e15) main_sp_fs_email_pane_g2_ParamLimits

0xfc0c,	// (0x000452ff) main_sp_fs_email_pane_g_ParamLimits

0xeab2,	// (0x000441a5) list_recal_day_pane_ParamLimits

0xeac3,	// (0x000441b6) mian_recal_day_pane_t1

0x521c,	// (0x0003a90f) list_single_dyc_row_text_pane_t4_ParamLimits

0x521c,	// (0x0003a90f) list_single_dyc_row_text_pane_t4

0x5253,	// (0x0003a946) list_single_dyc_row_text_pane_t5_ParamLimits

0x5253,	// (0x0003a946) list_single_dyc_row_text_pane_t5

0x52c9,	// (0x0003a9bc) list_single_dyc_row_text_pane_t6_ParamLimits

0x52c9,	// (0x0003a9bc) list_single_dyc_row_text_pane_t6

0x1776,	// (0x00036e69) aid_mgn_list_cale_time_pane

0x10d7,	// (0x000367ca) main_gallery2_pane_ParamLimits

0x389a,	// (0x00038f8d) main_clock2_pane_cp01_t1

0x38aa,	// (0x00038f9d) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x00044def) main_clock2_pane_cp01_t

0x5fee,	// (0x0003b6e1) cale_week_scroll_pane_g16_ParamLimits

0x5fee,	// (0x0003b6e1) cale_week_scroll_pane_g16

0x13b3,	// (0x00036aa6) vorec_slider_pane

0xf02a,	// (0x0004471d) vidtel_button_pane_t1_ParamLimits

0xbd9c,	// (0x0004148f) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbd9c,	// (0x0004148f) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbda9,	// (0x0004149c) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbda9,	// (0x0004149c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd14,	// (0x00045407) main_fs_bigclock_clock_pane_g_ParamLimits

0xbdb5,	// (0x000414a8) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbdc8,	// (0x000414bb) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd1d,	// (0x00045410) main_fs_bigclock_clock_pane_t_ParamLimits

0x896b,	// (0x0003e05e) main_mup3_lyrics_pane_ParamLimits

0x896b,	// (0x0003e05e) main_mup3_lyrics_pane

0xc8d0,	// (0x00041fc3) main_mup3_lyrics_pane_t1_ParamLimits

0xc8d0,	// (0x00041fc3) main_mup3_lyrics_pane_t1

0x94fa,	// (0x0003ebed) aid_main_mp4_pane_t1_area

0x9504,	// (0x0003ebf7) aid_main_mp4_pane_t2_area

0x9609,	// (0x0003ecfc) main_mp4_pane_g7_ParamLimits

0x9609,	// (0x0003ecfc) main_mp4_pane_g7

0x9615,	// (0x0003ed08) main_mp4_pane_g8_ParamLimits

0x9615,	// (0x0003ed08) main_mp4_pane_g8

0x99ec,	// (0x0003f0df) aid_call6_pane_g1_size

0xc5c0,	// (0x00041cb3) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc5c0,	// (0x00041cb3) list_double_large_graphic_phob2_other_pane

0x172e,	// (0x00036e21) list_double_large_graphic_phob2_other_pane_g1

0x0a3d,	// (0x00036130) list_highlight_pane_cp026

0x10d7,	// (0x000367ca) main_welc_pane_ParamLimits

0xb863,	// (0x00040f56) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb863,	// (0x00040f56) main_sp_fs_ctrlbar_pane_g3

0xb87b,	// (0x00040f6e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb87b,	// (0x00040f6e) main_sp_fs_ctrlbar_pane_g4

0xb8ad,	// (0x00040fa0) toolbar2_fixed_button_pane_cp01

0xb8b8,	// (0x00040fab) toolbar2_fixed_button_pane_cp02

0xb8c3,	// (0x00040fb6) toolbar2_fixed_button_pane_cp03

0xc60f,	// (0x00041d02) list_welc_entry_pane_ParamLimits

0xc60f,	// (0x00041d02) list_welc_entry_pane

0xc66c,	// (0x00041d5f) main_welc_pane_g3_ParamLimits

0xc66c,	// (0x00041d5f) main_welc_pane_g3

0xc6b2,	// (0x00041da5) main_welc_pane_t2_ParamLimits

0xc6b2,	// (0x00041da5) main_welc_pane_t2

0xc6c6,	// (0x00041db9) main_welc_pane_t3_ParamLimits

0xc6c6,	// (0x00041db9) main_welc_pane_t3

0x0005,

0xfe20,	// (0x00045513) main_welc_pane_t_ParamLimits

0xfe20,	// (0x00045513) main_welc_pane_t

0xc7c2,	// (0x00041eb5) welc_button_pane_ParamLimits

0xc7c2,	// (0x00041eb5) welc_button_pane

0xc820,	// (0x00041f13) welc_service_logo_pane_ParamLimits

0xc820,	// (0x00041f13) welc_service_logo_pane

0xc902,	// (0x00041ff5) list_single_welc_entry_pane_ParamLimits

0xc902,	// (0x00041ff5) list_single_welc_entry_pane

0xc913,	// (0x00042006) list_single_welc_entry_pane_g1

0xc91b,	// (0x0004200e) list_single_welc_entry_pane_t1

0xc929,	// (0x0004201c) list_single_welc_entry_pane_t2

0x0001,

0xfe32,	// (0x00045525) list_single_welc_entry_pane_t

0x0a3d,	// (0x00036130) bg_button_pane_cp035

0xc937,	// (0x0004202a) welc_button_pane_t1

0x0516,	// (0x00035c09) welc_service_logo_pane_g1

0x051f,	// (0x00035c12) welc_service_logo_pane_g2

0x0001,

0xfe37,	// (0x0004552a) welc_service_logo_pane_g

0x0a3d,	// (0x00036130) main_int_radio_pane

0x1251,	// (0x00036944) list_single_fs_dyc_pane_g1

0x574c,	// (0x0003ae3f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x574c,	// (0x0003ae3f) list_double_large_graphic_phob2_pane_g3

0x5758,	// (0x0003ae4b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x5758,	// (0x0003ae4b) list_double_large_graphic_phob2_pane_g4

0xc945,	// (0x00042038) main_int_radio1_pane_ParamLimits

0xc945,	// (0x00042038) main_int_radio1_pane

0x0528,	// (0x00035c1b) find_pane_cp02

0xc957,	// (0x0004204a) input_focus_pane_cp12_ParamLimits

0xc957,	// (0x0004204a) input_focus_pane_cp12

0xc963,	// (0x00042056) input_focus_pane_cp13_ParamLimits

0xc963,	// (0x00042056) input_focus_pane_cp13

0xc97b,	// (0x0004206e) input_focus_pane_cp14_ParamLimits

0xc97b,	// (0x0004206e) input_focus_pane_cp14

0x0531,	// (0x00035c24) int_radio1_listscroll_pane

0xc993,	// (0x00042086) main_int_radio1_pane_g1_ParamLimits

0xc993,	// (0x00042086) main_int_radio1_pane_g1

0xc9a3,	// (0x00042096) main_int_radio1_pane_t1_ParamLimits

0xc9a3,	// (0x00042096) main_int_radio1_pane_t1

0xc9b7,	// (0x000420aa) main_int_radio1_pane_t2_ParamLimits

0xc9b7,	// (0x000420aa) main_int_radio1_pane_t2

0xc9cb,	// (0x000420be) main_int_radio1_pane_t3_ParamLimits

0xc9cb,	// (0x000420be) main_int_radio1_pane_t3

0xc9df,	// (0x000420d2) main_int_radio1_pane_t4_ParamLimits

0xc9df,	// (0x000420d2) main_int_radio1_pane_t4

0x053b,	// (0x00035c2e) main_int_radio1_pane_t5_ParamLimits

0x053b,	// (0x00035c2e) main_int_radio1_pane_t5

0xc9f6,	// (0x000420e9) main_int_radio1_pane_t6_ParamLimits

0xc9f6,	// (0x000420e9) main_int_radio1_pane_t6

0xca08,	// (0x000420fb) main_int_radio1_pane_t7_ParamLimits

0xca08,	// (0x000420fb) main_int_radio1_pane_t7

0xca1a,	// (0x0004210d) main_int_radio1_pane_t8_ParamLimits

0xca1a,	// (0x0004210d) main_int_radio1_pane_t8

0xca2e,	// (0x00042121) main_int_radio1_pane_t9_ParamLimits

0xca2e,	// (0x00042121) main_int_radio1_pane_t9

0xca40,	// (0x00042133) main_int_radio1_pane_t10_ParamLimits

0xca40,	// (0x00042133) main_int_radio1_pane_t10

0xca71,	// (0x00042164) main_int_radio1_pane_t11_ParamLimits

0xca71,	// (0x00042164) main_int_radio1_pane_t11

0xcaa2,	// (0x00042195) main_int_radio1_pane_t12_ParamLimits

0xcaa2,	// (0x00042195) main_int_radio1_pane_t12

0x000b,

0xfe3c,	// (0x0004552f) main_int_radio1_pane_t_ParamLimits

0xfe3c,	// (0x0004552f) main_int_radio1_pane_t

0x054d,	// (0x00035c40) int_radio_list_pane

0xea94,	// (0x00044187) scroll_pane_cp037

0x0555,	// (0x00035c48) list_double_large_graphic_int_radio_pane_ParamLimits

0x0555,	// (0x00035c48) list_double_large_graphic_int_radio_pane

0x056d,	// (0x00035c60) list_double_large_graphic_int_radio_pane_g1

0x5820,	// (0x0003af13) list_double_large_graphic_int_radio_pane_t1

0x582e,	// (0x0003af21) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe55,	// (0x00045548) list_double_large_graphic_int_radio_pane_t

0x0a3d,	// (0x00036130) list_highlight_pane_cp027

0x04bd,	// (0x00035bb0) main_button_pane_4

0xc678,	// (0x00041d6b) main_welc_pane_g4_ParamLimits

0xc678,	// (0x00041d6b) main_welc_pane_g4

0xc6d8,	// (0x00041dcb) main_welc_pane_t4_ParamLimits

0xc6d8,	// (0x00041dcb) main_welc_pane_t4

0xc6ea,	// (0x00041ddd) main_welc_pane_t5_ParamLimits

0xc6ea,	// (0x00041ddd) main_welc_pane_t5

0xc71a,	// (0x00041e0d) main_welc_pane_t6_ParamLimits

0xc71a,	// (0x00041e0d) main_welc_pane_t6

0xc7d0,	// (0x00041ec3) welc_button_pane_2_ParamLimits

0xc7d0,	// (0x00041ec3) welc_button_pane_2

0xc7e8,	// (0x00041edb) welc_button_pane_3_ParamLimits

0xc7e8,	// (0x00041edb) welc_button_pane_3

0x04c5,	// (0x00035bb8) welc_button_pane_4

0xc802,	// (0x00041ef5) welc_button_pane_5_ParamLimits

0xc802,	// (0x00041ef5) welc_button_pane_5

0x5890,	// (0x0003af83) main_popup_welc_pane

0x05aa,	// (0x00035c9d) main_welc_sk_g3

0x05b4,	// (0x00035ca7) main_welc_sk_g4

0x05be,	// (0x00035cb1) main_welc_sk_t3

0x05ce,	// (0x00035cc1) main_welc_sk_t4

0x05de,	// (0x00035cd1) popup_welc_pane_t4

0x05ec,	// (0x00035cdf) popup_welc_pane_t5

0x05fa,	// (0x00035ced) popup_welc_pane_t6

0x0a3d,	// (0x00036130) main_acti_pane

0x0a3d,	// (0x00036130) main_sso_pane

0xcab9,	// (0x000421ac) sso_body_pane_ParamLimits

0xcab9,	// (0x000421ac) sso_body_pane

0xcac7,	// (0x000421ba) sso_logo_pane_ParamLimits

0xcac7,	// (0x000421ba) sso_logo_pane

0xcaf8,	// (0x000421eb) sso_sk_pane_ParamLimits

0xcaf8,	// (0x000421eb) sso_sk_pane

0x0638,	// (0x00035d2b) main_sso_logo_pane_g1

0xcb05,	// (0x000421f8) sso_sk_pane_t1_ParamLimits

0xcb05,	// (0x000421f8) sso_sk_pane_t1

0xcb19,	// (0x0004220c) sso_sk_pane_t2_ParamLimits

0xcb19,	// (0x0004220c) sso_sk_pane_t2

0x0001,

0xfe5a,	// (0x0004554d) sso_sk_pane_t_ParamLimits

0xfe5a,	// (0x0004554d) sso_sk_pane_t

0x0643,	// (0x00035d36) aid_sso_gap

0x064c,	// (0x00035d3f) aid_sso_txt1

0x0656,	// (0x00035d49) aid_sso_txt2

0x0660,	// (0x00035d53) aid_sso_txt3

0x0002,

0xfe5f,	// (0x00045552) aid_sso_txt

0x066a,	// (0x00035d5d) aid_sso_widget

0xcb76,	// (0x00042269) sso_btn_pane_ParamLimits

0xcb76,	// (0x00042269) sso_btn_pane

0xcbea,	// (0x000422dd) sso_option_pane_ParamLimits

0xcbea,	// (0x000422dd) sso_option_pane

0xcc96,	// (0x00042389) sso_query_pane_ParamLimits

0xcc96,	// (0x00042389) sso_query_pane

0xcce6,	// (0x000423d9) sso_query_pane_cp01_ParamLimits

0xcce6,	// (0x000423d9) sso_query_pane_cp01

0xcd38,	// (0x0004242b) sso_t_hdr_pane_ParamLimits

0xcd38,	// (0x0004242b) sso_t_hdr_pane

0xcd5c,	// (0x0004244f) sso_t_nml_pane_ParamLimits

0xcd5c,	// (0x0004244f) sso_t_nml_pane

0x0674,	// (0x00035d67) sso_t_sub_pane

0xcad4,	// (0x000421c7) sso_popup_window_ParamLimits

0xcad4,	// (0x000421c7) sso_popup_window

0xcb2b,	// (0x0004221e) sso_apps_pane_ParamLimits

0xcb2b,	// (0x0004221e) sso_apps_pane

0xcb4e,	// (0x00042241) sso_body_pane_g1

0xcb56,	// (0x00042249) sso_body_pane_t1

0xcb66,	// (0x00042259) sso_body_pane_t2

0x0001,

0xfe66,	// (0x00045559) sso_body_pane_t

0xcbba,	// (0x000422ad) sso_btn_pane_cp01_ParamLimits

0xcbba,	// (0x000422ad) sso_btn_pane_cp01

0xcc68,	// (0x0004235b) sso_prog_pane_ParamLimits

0xcc68,	// (0x0004235b) sso_prog_pane

0xcdac,	// (0x0004249f) sso_t_hdr_pane_t1_ParamLimits

0xcdac,	// (0x0004249f) sso_t_hdr_pane_t1

0x0689,	// (0x00035d7c) input_focus_pane_cp10_ParamLimits

0x0689,	// (0x00035d7c) input_focus_pane_cp10

0x069d,	// (0x00035d90) sso_query_pane_t1_ParamLimits

0x069d,	// (0x00035d90) sso_query_pane_t1

0x06b0,	// (0x00035da3) sso_query_pane_t2_ParamLimits

0x06b0,	// (0x00035da3) sso_query_pane_t2

0x06c9,	// (0x00035dbc) sso_query_pane_t3_ParamLimits

0x06c9,	// (0x00035dbc) sso_query_pane_t3

0x06f3,	// (0x00035de6) sso_query_pane_t4_ParamLimits

0x06f3,	// (0x00035de6) sso_query_pane_t4

0x0003,

0xfe6b,	// (0x0004555e) sso_query_pane_t_ParamLimits

0xfe6b,	// (0x0004555e) sso_query_pane_t

0x05a1,	// (0x00035c94) bg_button_pane_cp22

0x0592,	// (0x00035c85) sso_btn_pane_t1

0xcdc5,	// (0x000424b8) sso_t_nml_pane_t1_ParamLimits

0xcdc5,	// (0x000424b8) sso_t_nml_pane_t1

0x0717,	// (0x00035e0a) sso_option_row_pane_ParamLimits

0x0717,	// (0x00035e0a) sso_option_row_pane

0x0724,	// (0x00035e17) sso_t_sub_pane_t1_ParamLimits

0x0724,	// (0x00035e17) sso_t_sub_pane_t1

0x10d7,	// (0x000367ca) bg_popup_window_pane_cp11_ParamLimits

0x10d7,	// (0x000367ca) bg_popup_window_pane_cp11

0x0741,	// (0x00035e34) popup_sk_window_cp01_ParamLimits

0x0741,	// (0x00035e34) popup_sk_window_cp01

0x074e,	// (0x00035e41) sso_popup_body_pane_ParamLimits

0x074e,	// (0x00035e41) sso_popup_body_pane

0x075b,	// (0x00035e4e) scroll_pane_cp21_ParamLimits

0x075b,	// (0x00035e4e) scroll_pane_cp21

0x0768,	// (0x00035e5b) sso_popup_body_t_pane_ParamLimits

0x0768,	// (0x00035e5b) sso_popup_body_t_pane

0x0775,	// (0x00035e68) sso_popup_body_t_hdr_pane_ParamLimits

0x0775,	// (0x00035e68) sso_popup_body_t_hdr_pane

0xcde2,	// (0x000424d5) sso_popup_body_t_nml_pane_ParamLimits

0xcde2,	// (0x000424d5) sso_popup_body_t_nml_pane

0xce00,	// (0x000424f3) sso_popup_body_t_sub_pane_ParamLimits

0xce00,	// (0x000424f3) sso_popup_body_t_sub_pane

0x0787,	// (0x00035e7a) sso_popup_body_t_hdr_pane_t1

0xce23,	// (0x00042516) sso_popup_body_t_nml_pane_t1_ParamLimits

0xce23,	// (0x00042516) sso_popup_body_t_nml_pane_t1

0x0797,	// (0x00035e8a) sso_popup_body_t_sub_pane_t1_ParamLimits

0x0797,	// (0x00035e8a) sso_popup_body_t_sub_pane_t1

0x117c,	// (0x0003686f) sso_prog_pane_g1

0xce67,	// (0x0004255a) sso_apps_pane_comp1_ParamLimits

0xce67,	// (0x0004255a) sso_apps_pane_comp1

0x07bc,	// (0x00035eaf) sso_apps_pane_comp1_g1

0x07c4,	// (0x00035eb7) sso_apps_pane_comp1_t1

0x07e0,	// (0x00035ed3) sso_option_row_pane_g1

0x07e8,	// (0x00035edb) sso_option_row_pane_t1

0xe7c3,	// (0x00043eb6) list_cmail_pane_ParamLimits

0x0a3d,	// (0x00036130) main_call7_pane

0xc5fd,	// (0x00041cf0) bg_welc_area_ParamLimits

0xc5fd,	// (0x00041cf0) bg_welc_area

0xc750,	// (0x00041e43) sso_t_hdr_pane_a_t1_ParamLimits

0xc750,	// (0x00041e43) sso_t_hdr_pane_a_t1

0xc764,	// (0x00041e57) sso_t_nml_pane_a_t1_ParamLimits

0xc764,	// (0x00041e57) sso_t_nml_pane_a_t1

0xc78e,	// (0x00041e81) sso_t_sub_pane_a_t1_ParamLimits

0xc78e,	// (0x00041e81) sso_t_sub_pane_a_t1

0xc812,	// (0x00041f05) welc_button_pane_cp01_ParamLimits

0xc812,	// (0x00041f05) welc_button_pane_cp01

0x0592,	// (0x00035c85) sso_btn_pane_t1_copy1

0x05a1,	// (0x00035c94) welc_button_pane_2_comp1

0x0608,	// (0x00035cfb) sso_t_hdr_pane_p_t1

0x0618,	// (0x00035d0b) sso_t_nml_pane_p_t1

0x0628,	// (0x00035d1b) sso_t_sub_pane_p_t1

0x0a3d,	// (0x00036130) main_att_pane

0x0a3d,	// (0x00036130) main_vod_pane

0x0674,	// (0x00035d67) sso_t_sub_pane_ParamLimits

0x07d2,	// (0x00035ec5) input_focus_pane_cp10_t1

0x07e8,	// (0x00035edb) sso_option_row_pane_t1_ParamLimits

0xce7e,	// (0x00042571) main_att_body_pane_ParamLimits

0xce7e,	// (0x00042571) main_att_body_pane

0xce92,	// (0x00042585) att_btn_emg_pane_ParamLimits

0xce92,	// (0x00042585) att_btn_emg_pane

0xceaa,	// (0x0004259d) att_btn_pane_ParamLimits

0xceaa,	// (0x0004259d) att_btn_pane

0xcf12,	// (0x00042605) att_btn_pane_cp01_ParamLimits

0xcf12,	// (0x00042605) att_btn_pane_cp01

0xcf2c,	// (0x0004261f) att_li_srv_pane_ParamLimits

0xcf2c,	// (0x0004261f) att_li_srv_pane

0xcf3e,	// (0x00042631) att_opt_pane_ParamLimits

0xcf3e,	// (0x00042631) att_opt_pane

0xcf82,	// (0x00042675) att_query_pane_ParamLimits

0xcf82,	// (0x00042675) att_query_pane

0xcff2,	// (0x000426e5) att_query_pane_cp01_ParamLimits

0xcff2,	// (0x000426e5) att_query_pane_cp01

0xd036,	// (0x00042729) att_t_hdr_pane_ParamLimits

0xd036,	// (0x00042729) att_t_hdr_pane

0xd09c,	// (0x0004278f) att_t_nml_pane_ParamLimits

0xd09c,	// (0x0004278f) att_t_nml_pane

0xd104,	// (0x000427f7) att_t_nml_pane_cp01_ParamLimits

0xd104,	// (0x000427f7) att_t_nml_pane_cp01

0xd128,	// (0x0004281b) att_t_nmlb_pane_ParamLimits

0xd128,	// (0x0004281b) att_t_nmlb_pane

0xd18c,	// (0x0004287f) att_term_pane_ParamLimits

0xd18c,	// (0x0004287f) att_term_pane

0xd1ce,	// (0x000428c1) main_att_body_pane_g1_ParamLimits

0xd1ce,	// (0x000428c1) main_att_body_pane_g1

0x0801,	// (0x00035ef4) att_t_hdr_pane_t1_ParamLimits

0x0801,	// (0x00035ef4) att_t_hdr_pane_t1

0x081a,	// (0x00035f0d) att_t_nml_pane_t1_ParamLimits

0x081a,	// (0x00035f0d) att_t_nml_pane_t1

0x083f,	// (0x00035f32) att_btn_pane_t1

0x05a1,	// (0x00035c94) bg_button_pane_cp23

0xd1f8,	// (0x000428eb) att_li_srv_row_pane_ParamLimits

0xd1f8,	// (0x000428eb) att_li_srv_row_pane

0x084f,	// (0x00035f42) att_t_nmlb_pane_t1_ParamLimits

0x084f,	// (0x00035f42) att_t_nmlb_pane_t1

0x086d,	// (0x00035f60) att_query_pane_t1

0x087c,	// (0x00035f6f) att_query_pane_t2

0x088b,	// (0x00035f7e) att_query_pane_t3

0x0002,

0xfe74,	// (0x00045567) att_query_pane_t

0x089a,	// (0x00035f8d) input_focus_pane_cp11

0x08a3,	// (0x00035f96) att_term_pane_t1_ParamLimits

0x08a3,	// (0x00035f96) att_term_pane_t1

0x0a3d,	// (0x00036130) att_opt_row_pane

0x07e0,	// (0x00035ed3) att_opt_row_pane_g1

0x08c0,	// (0x00035fb3) att_opt_row_pane_t1_ParamLimits

0x08c0,	// (0x00035fb3) att_opt_row_pane_t1

0xd208,	// (0x000428fb) att_li_srv_row_pane_g1

0xd210,	// (0x00042903) att_li_srv_row_pane_t1_ParamLimits

0xd210,	// (0x00042903) att_li_srv_row_pane_t1

0xd225,	// (0x00042918) att_li_srv_row_pane_t2_ParamLimits

0xd225,	// (0x00042918) att_li_srv_row_pane_t2

0x0001,

0xfe7b,	// (0x0004556e) att_li_srv_row_pane_t_ParamLimits

0xfe7b,	// (0x0004556e) att_li_srv_row_pane_t

0x08d9,	// (0x00035fcc) att_btn_close_pane_g1

0x0a3d,	// (0x00036130) bg_button_pane_cp24

0x839d,	// (0x0003da90) main_vod_body_pane_ParamLimits

0x839d,	// (0x0003da90) main_vod_body_pane

0xd23a,	// (0x0004292d) main_vod_body_pane_g1_ParamLimits

0xd23a,	// (0x0004292d) main_vod_body_pane_g1

0xd26a,	// (0x0004295d) scroll_pane_cp24_ParamLimits

0xd26a,	// (0x0004295d) scroll_pane_cp24

0xd2b2,	// (0x000429a5) vod_btn_pane_ParamLimits

0xd2b2,	// (0x000429a5) vod_btn_pane

0xd2f0,	// (0x000429e3) vod_det_pane_ParamLimits

0xd2f0,	// (0x000429e3) vod_det_pane

0xd31c,	// (0x00042a0f) vod_logo_g1_ParamLimits

0xd31c,	// (0x00042a0f) vod_logo_g1

0xd356,	// (0x00042a49) vod_opt_pane_ParamLimits

0xd356,	// (0x00042a49) vod_opt_pane

0xd386,	// (0x00042a79) vod_opt_pane_cp01_ParamLimits

0xd386,	// (0x00042a79) vod_opt_pane_cp01

0xd3ae,	// (0x00042aa1) vod_query_pane_ParamLimits

0xd3ae,	// (0x00042aa1) vod_query_pane

0xd3d6,	// (0x00042ac9) vod_query_pane_cp01_ParamLimits

0xd3d6,	// (0x00042ac9) vod_query_pane_cp01

0xd3e2,	// (0x00042ad5) vod_t_nml_pane_ParamLimits

0xd3e2,	// (0x00042ad5) vod_t_nml_pane

0xd488,	// (0x00042b7b) vod_t_nml_pane_cp01_ParamLimits

0xd488,	// (0x00042b7b) vod_t_nml_pane_cp01

0xd4c0,	// (0x00042bb3) vod_t_sub_pane_ParamLimits

0xd4c0,	// (0x00042bb3) vod_t_sub_pane

0xd4ec,	// (0x00042bdf) vod_t_sub_pane_cp01_ParamLimits

0xd4ec,	// (0x00042bdf) vod_t_sub_pane_cp01

0x089a,	// (0x00035f8d) vod_query_field_pane

0x08e1,	// (0x00035fd4) vod_query_pane_t1

0x05a1,	// (0x00035c94) bg_button_pane_cp25

0x0592,	// (0x00035c85) sso_btn_pane_t1_copy2

0xd514,	// (0x00042c07) vod_t_nml_pane_t1_ParamLimits

0xd514,	// (0x00042c07) vod_t_nml_pane_t1

0x08f0,	// (0x00035fe3) vod_opt_row_pane_ParamLimits

0x08f0,	// (0x00035fe3) vod_opt_row_pane

0x0902,	// (0x00035ff5) vod_t_sub_pane_t1_ParamLimits

0x0902,	// (0x00035ff5) vod_t_sub_pane_t1

0x091b,	// (0x0003600e) vod_det_cell_pane_ParamLimits

0x091b,	// (0x0003600e) vod_det_cell_pane

0x0a3d,	// (0x00036130) input_focus_pane_cp15

0x092c,	// (0x0003601f) vod_query_field_pane_t1

0x093a,	// (0x0003602d) vod_opt_row_pane_g1_ParamLimits

0x093a,	// (0x0003602d) vod_opt_row_pane_g1

0x0946,	// (0x00036039) vod_opt_row_pane_t1_ParamLimits

0x0946,	// (0x00036039) vod_opt_row_pane_t1

0x0965,	// (0x00036058) vod_det_cell_field_pane

0x096e,	// (0x00036061) vod_det_cell_pane_g1

0x0976,	// (0x00036069) vod_det_cell_pane_t1

0x0a3d,	// (0x00036130) input_focus_pane_cp16

0x0985,	// (0x00036078) vod_det_cell_field_pane_t1

0xc017,	// (0x0004170a) call7_btn_grp_pane_ParamLimits

0xc017,	// (0x0004170a) call7_btn_grp_pane

0xd54b,	// (0x00042c3e) call7_bubble_pane_ParamLimits

0xd54b,	// (0x00042c3e) call7_bubble_pane

0xc052,	// (0x00041745) cell_call7_btn_pane_ParamLimits

0xc052,	// (0x00041745) cell_call7_btn_pane

0xd559,	// (0x00042c4c) call7_pane_g1_ParamLimits

0xd559,	// (0x00042c4c) call7_pane_g1

0xd568,	// (0x00042c5b) call7_windows_conf_pane_ParamLimits

0xd568,	// (0x00042c5b) call7_windows_conf_pane

0xd582,	// (0x00042c75) popup_call7_1st_window_ParamLimits

0xd582,	// (0x00042c75) popup_call7_1st_window

0xd590,	// (0x00042c83) popup_call7_2nd_window_ParamLimits

0xd590,	// (0x00042c83) popup_call7_2nd_window

0xd59e,	// (0x00042c91) popup_call7_3rd_window_ParamLimits

0xd59e,	// (0x00042c91) popup_call7_3rd_window

0x0a3d,	// (0x00036130) bg_button_pane_cp26

0xee67,	// (0x0004455a) cell_call7_btn_pane_g1

0xeeda,	// (0x000445cd) cell_call7_btn_pane_t1

0x0a3d,	// (0x00036130) bg_popup_window_pane_cp12

0x0993,	// (0x00036086) popup_call7_1st_window_g1

0x099b,	// (0x0003608e) popup_call7_1st_window_g2

0x09a3,	// (0x00036096) popup_call7_1st_window_g3

0x0002,

0xfe80,	// (0x00045573) popup_call7_1st_window_g

0x09ab,	// (0x0003609e) popup_call7_1st_window_t1

0x09ba,	// (0x000360ad) popup_call7_1st_window_t2

0x09c8,	// (0x000360bb) popup_call7_1st_window_t3

0x0002,

0xfe87,	// (0x0004557a) popup_call7_1st_window_t

0x0a3d,	// (0x00036130) bg_popup_window_pane_cp13

0x09d6,	// (0x000360c9) popup_call7_2nd_window_g1

0x09de,	// (0x000360d1) popup_call7_2nd_window_g2

0x09e6,	// (0x000360d9) popup_call7_2nd_window_g3

0x0002,

0xfe8e,	// (0x00045581) popup_call7_2nd_window_g

0x09ab,	// (0x0003609e) popup_call7_2nd_window_t1

0x0a3d,	// (0x00036130) bg_popup_window_pane_cp14

0x09ee,	// (0x000360e1) call7_list_conf_pane

0x09f6,	// (0x000360e9) call7_list_conf_row_pane_ParamLimits

0x09f6,	// (0x000360e9) call7_list_conf_row_pane

0x0a09,	// (0x000360fc) call7_list_conf_row_pane_g1

0x0a11,	// (0x00036104) call7_list_conf_row_pane_g2

0x0001,

0xfe95,	// (0x00045588) call7_list_conf_row_pane_g

0x0a19,	// (0x0003610c) call7_list_conf_row_pane_t1

0x0a3d,	// (0x00036130) list_highlight_pane_cp22

0xcc3a,	// (0x0004232d) sso_option_pane_cp01_ParamLimits

0xcc3a,	// (0x0004232d) sso_option_pane_cp01

0x10b5,	// (0x000367a8) msg_header_pane_ParamLimits

0x1f61,	// (0x00037654) bg_button_pane_cp01_ParamLimits

0x4b15,	// (0x0003a208) input_focus_pane_cp07_ParamLimits

0xb8f7,	// (0x00040fea) popup_email_progress_window

0x117c,	// (0x0003686f) popup_email_progress_window_g1

0x0a27,	// (0x0003611a) popup_email_progress_window_g2

0x0001,

0xfe9a,	// (0x0004558d) popup_email_progress_window_g

0x0a2f,	// (0x00036122) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
