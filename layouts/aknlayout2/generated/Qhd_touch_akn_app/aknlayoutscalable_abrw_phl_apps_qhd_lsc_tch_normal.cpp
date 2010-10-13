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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002a283 };

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
0x1b78,	// (0x0002bdfb) Screen

0x1b84,	// (0x0002be07) application_window

0x1b90,	// (0x0002be13) area_bottom_pane_ParamLimits

0x1b90,	// (0x0002be13) area_bottom_pane

0x0785,	// (0x0002aa08) area_top_pane_ParamLimits

0x0785,	// (0x0002aa08) area_top_pane

0xb0fe,	// (0x00035381) call_video_uplink_pane_ParamLimits

0xb0fe,	// (0x00035381) call_video_uplink_pane

0x0813,	// (0x0002aa96) main_pane_ParamLimits

0x0813,	// (0x0002aa96) main_pane

0xe513,	// (0x00038796) context_pane

0x425a,	// (0x0002e4dd) navi_pane

0x428c,	// (0x0002e50f) popup_cale_events_window_ParamLimits

0x428c,	// (0x0002e50f) popup_cale_events_window

0xe526,	// (0x000387a9) popup_mup_playback_window

0x42a4,	// (0x0002e527) signal_pane

0xc64a,	// (0x000368cd) main_browser_pane

0xc823,	// (0x00036aa6) main_burst_pane

0x0c0f,	// (0x0002ae92) main_calc_pane

0xe507,	// (0x0003878a) main_cale_day_pane

0x0c23,	// (0x0002aea6) main_cale_month_pane

0xe507,	// (0x0003878a) main_cale_week_pane

0xc823,	// (0x00036aa6) main_call_pane

0xc2ca,	// (0x0003654d) main_call_poc_pane

0xc823,	// (0x00036aa6) main_camera_pane

0xc823,	// (0x00036aa6) main_chi_dic_pane

0xcfd2,	// (0x00037255) main_clock_pane

0xc2ca,	// (0x0003654d) main_fmradio_pane

0xc823,	// (0x00036aa6) main_graph_messa_pane

0xc2ca,	// (0x0003654d) main_help_pane

0xc64a,	// (0x000368cd) main_im_pane

0xc525,	// (0x000367a8) main_image_pane_ParamLimits

0xc525,	// (0x000367a8) main_image_pane

0xc2ca,	// (0x0003654d) main_location2_pane

0xc823,	// (0x00036aa6) main_location_pane

0xc525,	// (0x000367a8) main_messa_pane

0xc2ca,	// (0x0003654d) main_mp2_pane

0xc823,	// (0x00036aa6) main_mp_pane

0xc2ca,	// (0x0003654d) main_msg_pane

0xc2ca,	// (0x0003654d) main_mup_eq_pane

0xc2ca,	// (0x0003654d) main_mup_pane

0xc64a,	// (0x000368cd) main_notes_pane

0xc2ca,	// (0x0003654d) main_pec_pane

0xc2ca,	// (0x0003654d) main_phob_pane

0xc2ca,	// (0x0003654d) main_pinb_pane

0xc2ca,	// (0x0003654d) main_postcard_pane

0xc2ca,	// (0x0003654d) main_qdial_pane

0xc823,	// (0x00036aa6) main_skin_pane

0xc2ca,	// (0x0003654d) main_smil2_pane

0xc823,	// (0x00036aa6) main_smil_pane

0xc823,	// (0x00036aa6) main_video_pane

0xc823,	// (0x00036aa6) main_video_tele_pane

0xc525,	// (0x000367a8) main_viewer_pane_ParamLimits

0xc525,	// (0x000367a8) main_viewer_pane

0xc823,	// (0x00036aa6) main_vorec_pane

0x0c75,	// (0x0002aef8) popup_blid_sat_info_window_ParamLimits

0x0c75,	// (0x0002aef8) popup_blid_sat_info_window

0x0ccd,	// (0x0002af50) popup_dyc_status_message_window_ParamLimits

0x0ccd,	// (0x0002af50) popup_dyc_status_message_window

0x0ce7,	// (0x0002af6a) popup_grid_large_graphic_window_ParamLimits

0x0ce7,	// (0x0002af6a) popup_grid_large_graphic_window

0x0da3,	// (0x0002b026) popup_loc_request_window_ParamLimits

0x0da3,	// (0x0002b026) popup_loc_request_window

0x0e99,	// (0x0002b11c) popup_wml_address_window_ParamLimits

0x0e99,	// (0x0002b11c) popup_wml_address_window

0x409e,	// (0x0002e321) call_muted_g1

0x3d94,	// (0x0002e017) popup_call_audio_conf_window_ParamLimits

0x3d94,	// (0x0002e017) popup_call_audio_conf_window

0x40b2,	// (0x0002e335) popup_call_audio_first_window_ParamLimits

0x40b2,	// (0x0002e335) popup_call_audio_first_window

0x4128,	// (0x0002e3ab) popup_call_audio_in_window_ParamLimits

0x4128,	// (0x0002e3ab) popup_call_audio_in_window

0x4164,	// (0x0002e3e7) popup_call_audio_out_window_ParamLimits

0x4164,	// (0x0002e3e7) popup_call_audio_out_window

0x419e,	// (0x0002e421) popup_call_audio_second_window_ParamLimits

0x419e,	// (0x0002e421) popup_call_audio_second_window

0x41f4,	// (0x0002e477) popup_call_audio_wait_window_ParamLimits

0x41f4,	// (0x0002e477) popup_call_audio_wait_window

0x4229,	// (0x0002e4ac) popup_number_entry_window_ParamLimits

0x4229,	// (0x0002e4ac) popup_number_entry_window

0xbeb7,	// (0x0003613a) bg_popup_call_pane_cp05_ParamLimits

0xbeb7,	// (0x0003613a) bg_popup_call_pane_cp05

0xbed7,	// (0x0003615a) popup_number_entry_window_t1

0xbeea,	// (0x0003616d) popup_number_entry_window_t2

0xbefc,	// (0x0003617f) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x000392c3) popup_number_entry_window_t

0xbf0e,	// (0x00036191) text_title_cp2

0xbf21,	// (0x000361a4) bg_popup_call_pane_cp_ParamLimits

0xbf21,	// (0x000361a4) bg_popup_call_pane_cp

0xbf2f,	// (0x000361b2) call_thumbnail_pane

0xbf37,	// (0x000361ba) popup_call_audio_in_window_g1_ParamLimits

0xbf37,	// (0x000361ba) popup_call_audio_in_window_g1

0xbf43,	// (0x000361c6) popup_call_audio_in_window_g2_ParamLimits

0xbf43,	// (0x000361c6) popup_call_audio_in_window_g2

0xbf4f,	// (0x000361d2) popup_call_audio_in_window_g3_ParamLimits

0xbf4f,	// (0x000361d2) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x000392cc) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x000392cc) popup_call_audio_in_window_g

0xbf5b,	// (0x000361de) popup_call_audio_in_window_t1_ParamLimits

0xbf5b,	// (0x000361de) popup_call_audio_in_window_t1

0xbf77,	// (0x000361fa) popup_call_audio_in_window_t2_ParamLimits

0xbf77,	// (0x000361fa) popup_call_audio_in_window_t2

0xbf93,	// (0x00036216) popup_call_audio_in_window_t3_ParamLimits

0xbf93,	// (0x00036216) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x000392d3) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x000392d3) popup_call_audio_in_window_t

0xbf21,	// (0x000361a4) bg_popup_call_pane_cp01_ParamLimits

0xbf21,	// (0x000361a4) bg_popup_call_pane_cp01

0xbf2f,	// (0x000361b2) call_thumbnail_pane_cp02

0xbfa6,	// (0x00036229) call_type_pane_cp022

0xbfae,	// (0x00036231) popup_call_audio_out_window_g1_ParamLimits

0xbfae,	// (0x00036231) popup_call_audio_out_window_g1

0xbfc0,	// (0x00036243) popup_call_audio_out_window_g2_ParamLimits

0xbfc0,	// (0x00036243) popup_call_audio_out_window_g2

0xbfcc,	// (0x0003624f) popup_call_audio_out_window_g3_ParamLimits

0xbfcc,	// (0x0003624f) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000392da) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000392da) popup_call_audio_out_window_g

0xbfde,	// (0x00036261) popup_call_audio_out_window_t1_ParamLimits

0xbfde,	// (0x00036261) popup_call_audio_out_window_t1

0xbff6,	// (0x00036279) popup_call_audio_out_window_t2_ParamLimits

0xbff6,	// (0x00036279) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000392e1) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000392e1) popup_call_audio_out_window_t

0xc00b,	// (0x0003628e) bg_popup_call_pane_ParamLimits

0xc00b,	// (0x0003628e) bg_popup_call_pane

0x1c09,	// (0x0002be8c) call_thumbnail_pane_cp_ParamLimits

0x1c09,	// (0x0002be8c) call_thumbnail_pane_cp

0xc08f,	// (0x00036312) call_type_pane_cp01_ParamLimits

0xc08f,	// (0x00036312) call_type_pane_cp01

0xc0d3,	// (0x00036356) popup_call_audio_first_window_g1_ParamLimits

0xc0d3,	// (0x00036356) popup_call_audio_first_window_g1

0xc11f,	// (0x000363a2) popup_call_audio_first_window_g2_ParamLimits

0xc11f,	// (0x000363a2) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000392e6) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000392e6) popup_call_audio_first_window_g

0xc163,	// (0x000363e6) popup_call_audio_first_window_t1_ParamLimits

0xc163,	// (0x000363e6) popup_call_audio_first_window_t1

0xc20f,	// (0x00036492) popup_call_audio_first_window_t4_ParamLimits

0xc20f,	// (0x00036492) popup_call_audio_first_window_t4

0xc29b,	// (0x0003651e) popup_call_audio_first_window_t5_ParamLimits

0xc29b,	// (0x0003651e) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000392eb) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000392eb) popup_call_audio_first_window_t

0xc2ca,	// (0x0003654d) bg_popup_call_pane_cp02

0xc2d4,	// (0x00036557) call_type_pane_cp023

0xc2dc,	// (0x0003655f) popup_call_audio_wait_window_g1

0xc2e4,	// (0x00036567) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000392f2) popup_call_audio_wait_window_g

0xc2ec,	// (0x0003656f) popup_call_audio_wait_window_t3

0xc2fa,	// (0x0003657d) bg_popup_call_pane_cp03_ParamLimits

0xc2fa,	// (0x0003657d) bg_popup_call_pane_cp03

0xc35a,	// (0x000365dd) call_thumbnail_pane_cp011_ParamLimits

0xc35a,	// (0x000365dd) call_thumbnail_pane_cp011

0xc366,	// (0x000365e9) call_type_pane_cp034_ParamLimits

0xc366,	// (0x000365e9) call_type_pane_cp034

0xc3a2,	// (0x00036625) popup_call_audio_second_window_g1_ParamLimits

0xc3a2,	// (0x00036625) popup_call_audio_second_window_g1

0xc3de,	// (0x00036661) popup_call_audio_second_window_g2_ParamLimits

0xc3de,	// (0x00036661) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000392f7) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000392f7) popup_call_audio_second_window_g

0xc41a,	// (0x0003669d) popup_call_audio_second_window_t1_ParamLimits

0xc41a,	// (0x0003669d) popup_call_audio_second_window_t1

0xc49b,	// (0x0003671e) popup_call_audio_second_window_t2_ParamLimits

0xc49b,	// (0x0003671e) popup_call_audio_second_window_t2

0xc4d1,	// (0x00036754) popup_call_audio_second_window_t3_ParamLimits

0xc4d1,	// (0x00036754) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000392fc) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000392fc) popup_call_audio_second_window_t

0xc2ca,	// (0x0003654d) bg_popup_call_pane_cp04

0xc507,	// (0x0003678a) list_conf_pane

0xc50f,	// (0x00036792) popup_call_audio_conf_window_t1

0xc51d,	// (0x000367a0) call_thumbnail_pane_g1

0xc525,	// (0x000367a8) bg_pinb_pane_ParamLimits

0xc525,	// (0x000367a8) bg_pinb_pane

0xc533,	// (0x000367b6) find_pinb_pane

0xc525,	// (0x000367a8) listscroll_pinb_pane_ParamLimits

0xc525,	// (0x000367a8) listscroll_pinb_pane

0xc53d,	// (0x000367c0) pinb_bg_pane_g1

0xc53d,	// (0x000367c0) pinb_bg_pane_g2

0xc53d,	// (0x000367c0) pinb_bg_pane_g3

0xc53d,	// (0x000367c0) pinb_bg_pane_g4

0xc53d,	// (0x000367c0) pinb_bg_pane_g5

0xc53d,	// (0x000367c0) pinb_bg_pane_g6

0xc53d,	// (0x000367c0) pinb_bg_pane_g7

0xc53d,	// (0x000367c0) pinb_bg_pane_g8

0xc53d,	// (0x000367c0) pinb_bg_pane_g9

0xc53d,	// (0x000367c0) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00039303) pinb_bg_pane_g

0xbead,	// (0x00036130) grid_pinb_pane

0xbead,	// (0x00036130) list_pinb_pane

0xc547,	// (0x000367ca) scroll_pane_cp01_ParamLimits

0xc547,	// (0x000367ca) scroll_pane_cp01

0xc555,	// (0x000367d8) find_pinb_pane_g1_ParamLimits

0xc555,	// (0x000367d8) find_pinb_pane_g1

0xc56d,	// (0x000367f0) find_pinb_pane_t1

0xc57f,	// (0x00036802) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0003931d) find_pinb_pane_t

0xc594,	// (0x00036817) input_focus_pane_cp01_ParamLimits

0xc594,	// (0x00036817) input_focus_pane_cp01

0xc5a0,	// (0x00036823) cell_pinb_pane_ParamLimits

0xc5a0,	// (0x00036823) cell_pinb_pane

0xc5ae,	// (0x00036831) cell_pinb_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) cell_pinb_pane_g1

0xc5bc,	// (0x0003683f) cell_pinb_pane_g2_ParamLimits

0xc5bc,	// (0x0003683f) cell_pinb_pane_g2

0xc5bc,	// (0x0003683f) cell_pinb_pane_g3_ParamLimits

0xc5bc,	// (0x0003683f) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00039322) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00039322) cell_pinb_pane_g

0xc2ca,	// (0x0003654d) grid_highlight_pane_cp01

0xc5a0,	// (0x00036823) list_pinb_item_pane_ParamLimits

0xc5a0,	// (0x00036823) list_pinb_item_pane

0xbead,	// (0x00036130) list_highlight_pane_cp02

0xc5ca,	// (0x0003684d) list_pinb_item_pane_g1_ParamLimits

0xc5ca,	// (0x0003684d) list_pinb_item_pane_g1

0xc5bc,	// (0x0003683f) list_pinb_item_pane_g2_ParamLimits

0xc5bc,	// (0x0003683f) list_pinb_item_pane_g2

0xc5ae,	// (0x00036831) list_pinb_item_pane_g3_ParamLimits

0xc5ae,	// (0x00036831) list_pinb_item_pane_g3

0xc5bc,	// (0x0003683f) list_pinb_item_pane_g4_ParamLimits

0xc5bc,	// (0x0003683f) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00039329) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00039329) list_pinb_item_pane_g

0xc5d8,	// (0x0003685b) list_pinb_item_pane_t1_ParamLimits

0xc5d8,	// (0x0003685b) list_pinb_item_pane_t1

0x09ac,	// (0x0002ac2f) calc_display_pane

0x09d1,	// (0x0002ac54) calc_paper_pane

0x09f4,	// (0x0002ac77) grid_calc_pane

0xbead,	// (0x00036130) bg_list_pane_cp01

0xc5ec,	// (0x0003686f) clock_g1

0xc5ec,	// (0x0003686f) clock_g2

0x0001,

0xf0af,	// (0x00039332) clock_g

0xc5f6,	// (0x00036879) clock_t1_ParamLimits

0xc5f6,	// (0x00036879) clock_t1

0xc60a,	// (0x0003688d) clock_t2_ParamLimits

0xc60a,	// (0x0003688d) clock_t2

0xc60a,	// (0x0003688d) clock_t3_ParamLimits

0xc60a,	// (0x0003688d) clock_t3

0xc60a,	// (0x0003688d) clock_t4_ParamLimits

0xc60a,	// (0x0003688d) clock_t4

0xc5f6,	// (0x00036879) clock_t5_ParamLimits

0xc5f6,	// (0x00036879) clock_t5

0xc60a,	// (0x0003688d) clock_t6_ParamLimits

0xc60a,	// (0x0003688d) clock_t6

0xc60a,	// (0x0003688d) clock_t7_ParamLimits

0xc60a,	// (0x0003688d) clock_t7

0xc60a,	// (0x0003688d) clock_t8_ParamLimits

0xc60a,	// (0x0003688d) clock_t8

0xc60a,	// (0x0003688d) clock_t9_ParamLimits

0xc60a,	// (0x0003688d) clock_t9

0x0008,

0xf0b4,	// (0x00039337) clock_t_ParamLimits

0xf0b4,	// (0x00039337) clock_t

0xbead,	// (0x00036130) popup_clock_analogue_window_cp02

0xbead,	// (0x00036130) popup_clock_digital_window_cp01

0xc2ca,	// (0x0003654d) listscroll_help_pane

0xc2ca,	// (0x0003654d) phob_pre_status_pane

0xc61e,	// (0x000368a1) grid_qdial_pane

0xc525,	// (0x000367a8) listscroll_mce_pane

0xc525,	// (0x000367a8) bg_notes_pane

0xc628,	// (0x000368ab) list_notes_pane

0x1c2d,	// (0x0002beb0) scroll_pane_cp06

0xc636,	// (0x000368b9) bg_calc_paper_pane

0xb13c,	// (0x000353bf) list_calc_pane

0xc64a,	// (0x000368cd) bg_calc_display_pane

0x0a22,	// (0x0002aca5) calc_display_pane_t1

0x0a37,	// (0x0002acba) calc_display_pane_t2

0xb156,	// (0x000353d9) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0003934a) calc_display_pane_t

0x0a4c,	// (0x0002accf) cell_calc_pane_ParamLimits

0x0a4c,	// (0x0002accf) cell_calc_pane

0xc656,	// (0x000368d9) bg_calc_paper_pane_g1

0xc662,	// (0x000368e5) bg_calc_paper_pane_g2

0xc66e,	// (0x000368f1) bg_calc_paper_pane_g3

0xc67a,	// (0x000368fd) bg_calc_paper_pane_g4

0xc686,	// (0x00036909) bg_calc_paper_pane_g5

0x1c41,	// (0x0002bec4) bg_calc_paper_pane_g6

0x1c50,	// (0x0002bed3) bg_calc_paper_pane_g7

0x1c5f,	// (0x0002bee2) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00039351) bg_calc_paper_pane_g

0x1c72,	// (0x0002bef5) calc_bg_paper_pane_g9

0x1c85,	// (0x0002bf08) list_calc_item_pane_ParamLimits

0x1c85,	// (0x0002bf08) list_calc_item_pane

0xc692,	// (0x00036915) list_calc_item_pane_g1

0xb168,	// (0x000353eb) list_calc_item_pane_t1_ParamLimits

0xb168,	// (0x000353eb) list_calc_item_pane_t1

0x0a81,	// (0x0002ad04) list_calc_item_pane_t2_ParamLimits

0x0a81,	// (0x0002ad04) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00039362) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00039362) list_calc_item_pane_t

0xc53d,	// (0x000367c0) cell_calc_pane_g1

0xc69f,	// (0x00036922) grid_highlight_pane_cp02

0x1c9d,	// (0x0002bf20) bg_calc_display_pane_g1

0x0ab3,	// (0x0002ad36) bg_calc_display_pane_g2

0xc6c1,	// (0x00036944) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0003936c) bg_calc_display_pane_g

0x0abd,	// (0x0002ad40) cell_qdial_pane_ParamLimits

0x0abd,	// (0x0002ad40) cell_qdial_pane

0x1ca6,	// (0x0002bf29) cell_qdial_pane_g1_ParamLimits

0x1ca6,	// (0x0002bf29) cell_qdial_pane_g1

0x1cbc,	// (0x0002bf3f) cell_qdial_pane_g2_ParamLimits

0x1cbc,	// (0x0002bf3f) cell_qdial_pane_g2

0xc6ca,	// (0x0003694d) cell_qdial_pane_g3_ParamLimits

0xc6ca,	// (0x0003694d) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00039373) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00039373) cell_qdial_pane_g

0x1ce3,	// (0x0002bf66) cell_qdial_pane_t1_ParamLimits

0x1ce3,	// (0x0002bf66) cell_qdial_pane_t1

0x1cfb,	// (0x0002bf7e) cell_qdial_pane_t2_ParamLimits

0x1cfb,	// (0x0002bf7e) cell_qdial_pane_t2

0x1d0e,	// (0x0002bf91) cell_qdial_pane_t3_ParamLimits

0x1d0e,	// (0x0002bf91) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0003937c) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0003937c) cell_qdial_pane_t

0xc2ca,	// (0x0003654d) grid_highlight_pane_cp04

0xc6d6,	// (0x00036959) thumbnail_qdial_pane_ParamLimits

0xc6d6,	// (0x00036959) thumbnail_qdial_pane

0xc732,	// (0x000369b5) list_help_pane

0xc73b,	// (0x000369be) scroll_pane_cp02

0xc744,	// (0x000369c7) help_list_pane_t1_ParamLimits

0xc744,	// (0x000369c7) help_list_pane_t1

0xb17a,	// (0x000353fd) bg_notes_pane_g2

0xb182,	// (0x00035405) bg_notes_pane_g3

0xb18a,	// (0x0003540d) notes_bg_pane_g1

0xb192,	// (0x00035415) notes_bg_pane_g4

0xb19a,	// (0x0003541d) notes_bg_pane_g5

0xb1a2,	// (0x00035425) notes_bg_pane_g6

0xb1aa,	// (0x0003542d) notes_bg_pane_g7

0xb1b2,	// (0x00035435) notes_bg_pane_g8

0xb1ba,	// (0x0003543d) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0003939a) notes_bg_pane_g

0x1d21,	// (0x0002bfa4) list_notes_text_pane_ParamLimits

0x1d21,	// (0x0002bfa4) list_notes_text_pane

0xc762,	// (0x000369e5) list_notes_text_pane_g1

0x1d36,	// (0x0002bfb9) list_notes_text_pane_t1

0x1d44,	// (0x0002bfc7) listscroll_cale_week_pane

0x1d70,	// (0x0002bff3) bg_cale_heading_pane

0xc785,	// (0x00036a08) bg_cale_pane_cp01

0x1d88,	// (0x0002c00b) cale_week_corner_pane

0x1da7,	// (0x0002c02a) cale_week_day_heading_pane

0x1dc4,	// (0x0002c047) cale_week_scroll_pane_g1

0x1dd7,	// (0x0002c05a) cale_week_scroll_pane_g2

0x1def,	// (0x0002c072) cale_week_scroll_pane_g3

0x1e07,	// (0x0002c08a) cale_week_scroll_pane_g4

0x1e1f,	// (0x0002c0a2) cale_week_scroll_pane_g5

0x1e3f,	// (0x0002c0c2) cale_week_scroll_pane_g6

0x1e5f,	// (0x0002c0e2) cale_week_scroll_pane_g7

0x1e7f,	// (0x0002c102) cale_week_scroll_pane_g8

0x1ea3,	// (0x0002c126) cale_week_scroll_pane_g9

0x1ebb,	// (0x0002c13e) cale_week_scroll_pane_g10

0x1ed3,	// (0x0002c156) cale_week_scroll_pane_g11

0x1eeb,	// (0x0002c16e) cale_week_scroll_pane_g12

0x1f03,	// (0x0002c186) cale_week_scroll_pane_g13

0x1f03,	// (0x0002c186) cale_week_scroll_pane_g14

0x1f03,	// (0x0002c186) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x000393a9) cale_week_scroll_pane_g

0x1f3f,	// (0x0002c1c2) cale_week_time_pane

0x1f63,	// (0x0002c1e6) grid_cale_week_pane

0xc7b4,	// (0x00036a37) scroll_pane_cp08

0x1f89,	// (0x0002c20c) cell_cale_week_pane_ParamLimits

0x1f89,	// (0x0002c20c) cell_cale_week_pane

0x2017,	// (0x0002c29a) cale_week_day_heading_pane_t1

0x2041,	// (0x0002c2c4) cale_week_day_heading_pane_t2

0x2070,	// (0x0002c2f3) cale_week_day_heading_pane_t3

0x209f,	// (0x0002c322) cale_week_day_heading_pane_t4

0x20ce,	// (0x0002c351) cale_week_day_heading_pane_t5

0x2105,	// (0x0002c388) cale_week_day_heading_pane_t6

0x213c,	// (0x0002c3bf) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x000393ca) cale_week_day_heading_pane_t

0xc7d1,	// (0x00036a54) bg_cale_side_pane

0x0ad1,	// (0x0002ad54) cale_week_time_pane_t1

0x0aeb,	// (0x0002ad6e) cale_week_time_pane_t2

0x0b05,	// (0x0002ad88) cale_week_time_pane_t3

0x0b1f,	// (0x0002ada2) cale_week_time_pane_t4

0x0b39,	// (0x0002adbc) cale_week_time_pane_t5

0x0b53,	// (0x0002add6) cale_week_time_pane_t6

0x0b6d,	// (0x0002adf0) cale_week_time_pane_t7

0x0b87,	// (0x0002ae0a) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x000393d9) cale_week_time_pane_t

0x2166,	// (0x0002c3e9) cell_cale_week_pane_g2

0x2185,	// (0x0002c408) cell_cale_week_pane_g3_ParamLimits

0x2185,	// (0x0002c408) cell_cale_week_pane_g3

0xc7df,	// (0x00036a62) grid_highlight_pane_cp07

0xc7e7,	// (0x00036a6a) listscroll_gms_pane

0xc7f1,	// (0x00036a74) grid_gms_pane

0xc7fa,	// (0x00036a7d) listscroll_gms_pane_g1

0xc802,	// (0x00036a85) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x000393ea) listscroll_gms_pane_g

0x219d,	// (0x0002c420) scroll_pane_cp010

0x21a8,	// (0x0002c42b) cell_gms_pane_ParamLimits

0x21a8,	// (0x0002c42b) cell_gms_pane

0x21bb,	// (0x0002c43e) cell_gms_pane_g1

0xc80a,	// (0x00036a8d) cell_gms_pane_g2

0xc762,	// (0x000369e5) cell_gms_pane_g3

0xc812,	// (0x00036a95) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x000393ef) cell_gms_pane_g

0xc81b,	// (0x00036a9e) grid_highlight_pane_cp09

0x4026,	// (0x0002e2a9) phob_pre_status_pane_g1

0x402e,	// (0x0002e2b1) phob_pre_status_pane_g2

0x4036,	// (0x0002e2b9) phob_pre_status_pane_g3

0x403e,	// (0x0002e2c1) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x0003979e) phob_pre_status_pane_g

0x404e,	// (0x0002e2d1) phob_pre_status_pane_t1

0x405c,	// (0x0002e2df) phob_pre_status_pane_t2

0x406c,	// (0x0002e2ef) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x000397a9) phob_pre_status_pane_t

0xc823,	// (0x00036aa6) bg_list_pane_cp05

0x21cb,	// (0x0002c44e) grid_vorec_pane

0x21d3,	// (0x0002c456) vorec_t1

0x21e1,	// (0x0002c464) vorec_t2

0x21ef,	// (0x0002c472) vorec_t3

0x21fd,	// (0x0002c480) vorec_t4

0xb978,	// (0x00035bfb) vorec_t5

0x1b60,	// (0x0002bde3) vorec_t6

0x0004,

0xf175,	// (0x000393f8) vorec_t

0x1b6e,	// (0x0002bdf1) wait_bar_pane_cp01

0x2219,	// (0x0002c49c) cell_vorec_pane_ParamLimits

0x2219,	// (0x0002c49c) cell_vorec_pane

0xb1c2,	// (0x00035445) cell_vorec_pane_g1

0xc2ca,	// (0x0003654d) grid_highlight_pane_cp05

0xc547,	// (0x000367ca) cams_zoom_pane

0xc547,	// (0x000367ca) image_vga_pane

0xc5ae,	// (0x00036831) main_camera_pane_g1

0xc5ae,	// (0x00036831) main_camera_pane_g2

0xc5ae,	// (0x00036831) main_camera_pane_g3

0xc5ae,	// (0x00036831) main_camera_pane_g4

0xc5ae,	// (0x00036831) main_camera_pane_g5

0xc5ae,	// (0x00036831) main_camera_pane_g6

0xc5ae,	// (0x00036831) main_camera_pane_g7

0x0007,

0xf180,	// (0x00039403) main_camera_pane_g

0xc5f6,	// (0x00036879) main_camera_pane_t1

0xc5f6,	// (0x00036879) main_camera_pane_t2

0x0001,

0xf191,	// (0x00039414) main_camera_pane_t

0x2240,	// (0x0002c4c3) cams_zoom_pane_cp_ParamLimits

0x2240,	// (0x0002c4c3) cams_zoom_pane_cp

0x2274,	// (0x0002c4f7) image_cif_pane_ParamLimits

0x2274,	// (0x0002c4f7) image_cif_pane

0xbead,	// (0x00036130) image_subqcif_pane

0x2286,	// (0x0002c509) main_video_pane_g1_ParamLimits

0x2286,	// (0x0002c509) main_video_pane_g1

0x22b4,	// (0x0002c537) main_video_pane_g2_ParamLimits

0x22b4,	// (0x0002c537) main_video_pane_g2

0x22ee,	// (0x0002c571) main_video_pane_g3_ParamLimits

0x22ee,	// (0x0002c571) main_video_pane_g3

0x22ee,	// (0x0002c571) main_video_pane_g4_ParamLimits

0x22ee,	// (0x0002c571) main_video_pane_g4

0x2322,	// (0x0002c5a5) main_video_pane_g5_ParamLimits

0x2322,	// (0x0002c5a5) main_video_pane_g5

0xc82b,	// (0x00036aae) main_video_pane_g6_ParamLimits

0xc82b,	// (0x00036aae) main_video_pane_g6

0x0006,

0xf196,	// (0x00039419) main_video_pane_g_ParamLimits

0xf196,	// (0x00039419) main_video_pane_g

0x233e,	// (0x0002c5c1) main_video_pane_t1_ParamLimits

0x233e,	// (0x0002c5c1) main_video_pane_t1

0xc5ec,	// (0x0003686f) cams_zoom_pane_g1

0xc5ec,	// (0x0003686f) cams_zoom_pane_g2

0xc5ec,	// (0x0003686f) cams_zoom_pane_g3

0xc5ec,	// (0x0003686f) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00039428) cams_zoom_pane_g

0xc547,	// (0x000367ca) grid_cams_pane

0xc547,	// (0x000367ca) linegrid_cams_pane

0x2382,	// (0x0002c605) cell_cams_pane_ParamLimits

0x2382,	// (0x0002c605) cell_cams_pane

0xbead,	// (0x00036130) cams_burst_image_pane

0xc5ec,	// (0x0003686f) cell_cams_pane_g1

0xbead,	// (0x00036130) grid_highlight_pane_cp03

0xc53d,	// (0x000367c0) mp_bg_pane_g1

0xbead,	// (0x00036130) bg_list_pane_cp03

0xbead,	// (0x00036130) bg_mp_pane

0xbead,	// (0x00036130) grid_mp_pane

0xc5ec,	// (0x0003686f) media_player_g1

0xcd66,	// (0x00036fe9) media_player_t1

0xcd66,	// (0x00036fe9) media_player_t2

0xcd66,	// (0x00036fe9) media_player_t3

0xcd66,	// (0x00036fe9) media_player_t4

0xcd66,	// (0x00036fe9) media_player_t5

0xcd66,	// (0x00036fe9) media_player_t6

0xcd66,	// (0x00036fe9) media_player_t7

0x0006,

0xf505,	// (0x00039788) media_player_t

0xbead,	// (0x00036130) wait_bar_pane_cp02

0xf4ea,	// (0x0003976d) main_usb_pane_t

0xcfd2,	// (0x00037255) cell_mp_pane

0xc53d,	// (0x000367c0) cell_mp_pane_g1

0xc2ca,	// (0x0003654d) grid_highlight_pane_cp06

0xc845,	// (0x00036ac8) grid_skin_colour_pane

0xc84d,	// (0x00036ad0) list_highlight_pane_cp03

0x2397,	// (0x0002c61a) skin_g1

0xc855,	// (0x00036ad8) skin_t1

0xc864,	// (0x00036ae7) skin_t2

0x0001,

0xf1d3,	// (0x00039456) skin_t

0x239f,	// (0x0002c622) cell_skin_colour_pane_ParamLimits

0x239f,	// (0x0002c622) cell_skin_colour_pane

0xc872,	// (0x00036af5) cell_skin_colour_pane_g1

0x2418,	// (0x0002c69b) call_video_g1_ParamLimits

0x2418,	// (0x0002c69b) call_video_g1

0x2434,	// (0x0002c6b7) call_video_g2_ParamLimits

0x2434,	// (0x0002c6b7) call_video_g2

0x0001,

0xf1d8,	// (0x0003945b) call_video_g_ParamLimits

0xf1d8,	// (0x0003945b) call_video_g

0x2486,	// (0x0002c709) call_video_uplink_pane_cp1_ParamLimits

0x2486,	// (0x0002c709) call_video_uplink_pane_cp1

0xc884,	// (0x00036b07) call_video_uplink_pane_cp2

0x2525,	// (0x0002c7a8) video_down_crop_pane_ParamLimits

0x2525,	// (0x0002c7a8) video_down_crop_pane

0x261c,	// (0x0002c89f) video_down_pane_ParamLimits

0x261c,	// (0x0002c89f) video_down_pane

0xc88c,	// (0x00036b0f) video_down_subqcif_pane_ParamLimits

0xc88c,	// (0x00036b0f) video_down_subqcif_pane

0xc8a4,	// (0x00036b27) video_down_subqcif_pane_cp_ParamLimits

0xc8a4,	// (0x00036b27) video_down_subqcif_pane_cp

0xc8ca,	// (0x00036b4d) im_reading_pane_ParamLimits

0xc8ca,	// (0x00036b4d) im_reading_pane

0x272c,	// (0x0002c9af) im_writing_pane_ParamLimits

0x272c,	// (0x0002c9af) im_writing_pane

0x2742,	// (0x0002c9c5) im_reading_pane_t1

0xc8e4,	// (0x00036b67) list_im_pane

0xc8f5,	// (0x00036b78) scroll_pane_cp07

0x277b,	// (0x0002c9fe) im_writing_pane_t1_ParamLimits

0x277b,	// (0x0002c9fe) im_writing_pane_t1

0xc90e,	// (0x00036b91) im_writing_pane_t2_ParamLimits

0xc90e,	// (0x00036b91) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00039465) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00039465) im_writing_pane_t

0xc2ca,	// (0x0003654d) input_focus_pane_cp04

0xc2ca,	// (0x0003654d) input_focus_pane_cp05

0x2790,	// (0x0002ca13) list_im_single_pane_ParamLimits

0x2790,	// (0x0002ca13) list_im_single_pane

0x27a4,	// (0x0002ca27) list_single_im_pane_t1

0xc823,	// (0x00036aa6) blid_accuracy_pane

0xc823,	// (0x00036aa6) blid_compass_pane

0xe4bf,	// (0x00038742) main_location_t1

0xe4bf,	// (0x00038742) main_location_t2

0xe4bf,	// (0x00038742) main_location_t3

0x0002,

0xf514,	// (0x00039797) main_location_t

0xc2ca,	// (0x0003654d) aid_levels_location

0xc53d,	// (0x000367c0) blid_accuracy_pane_g1

0xc53d,	// (0x000367c0) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x000394b4) blid_accuracy_pane_g

0xc956,	// (0x00036bd9) wml_content_pane

0xc994,	// (0x00036c17) wml_button_pane_ParamLimits

0xc994,	// (0x00036c17) wml_button_pane

0x27b3,	// (0x0002ca36) wml_list_single_large_pane_ParamLimits

0x27b3,	// (0x0002ca36) wml_list_single_large_pane

0x27c8,	// (0x0002ca4b) wml_list_single_medium_pane_ParamLimits

0x27c8,	// (0x0002ca4b) wml_list_single_medium_pane

0x27de,	// (0x0002ca61) wml_list_single_small_pane_ParamLimits

0x27de,	// (0x0002ca61) wml_list_single_small_pane

0xc9a8,	// (0x00036c2b) wml_selection_box_pane_ParamLimits

0xc9a8,	// (0x00036c2b) wml_selection_box_pane

0xc9bb,	// (0x00036c3e) wml_list_single_pane_t1

0xc9ca,	// (0x00036c4d) wml_list_single_medium_pane_t1

0xc9d9,	// (0x00036c5c) wml_list_single_large_pane_t1

0xc9e8,	// (0x00036c6b) input_focus_pane_cp02_ParamLimits

0xc9e8,	// (0x00036c6b) input_focus_pane_cp02

0xc9fb,	// (0x00036c7e) wml_selection_box_pane_g1

0xca04,	// (0x00036c87) wml_selection_box_pane_t1_ParamLimits

0xca04,	// (0x00036c87) wml_selection_box_pane_t1

0xc525,	// (0x000367a8) bg_wml_button_pane_ParamLimits

0xc525,	// (0x000367a8) bg_wml_button_pane

0xca1c,	// (0x00036c9f) wml_button_pane_g1

0xca24,	// (0x00036ca7) wml_button_pane_t1

0xca1c,	// (0x00036c9f) wml_button_bg_pane_g1

0xca34,	// (0x00036cb7) wml_button_bg_pane_g2

0xca3c,	// (0x00036cbf) wml_button_bg_pane_g3

0xca44,	// (0x00036cc7) wml_button_bg_pane_g4

0xca4c,	// (0x00036ccf) wml_button_bg_pane_g5

0xca54,	// (0x00036cd7) wml_button_bg_pane_g6

0xca5c,	// (0x00036cdf) wml_button_bg_pane_g7

0xca64,	// (0x00036ce7) wml_button_bg_pane_g8

0xca6c,	// (0x00036cef) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0003946a) wml_button_bg_pane_g

0x27f6,	// (0x0002ca79) bg_list_pane_cp02

0xca74,	// (0x00036cf7) mce_header_pane_ParamLimits

0xca74,	// (0x00036cf7) mce_header_pane

0xca8a,	// (0x00036d0d) mce_icon_pane

0xca8a,	// (0x00036d0d) mce_image_pane

0xca93,	// (0x00036d16) mce_text_pane_ParamLimits

0xca93,	// (0x00036d16) mce_text_pane

0x27fe,	// (0x0002ca81) scroll_pane_cp03

0xc98c,	// (0x00036c0f) scroll_pane_cp04

0xcaa6,	// (0x00036d29) scroll_pane_cp05_ParamLimits

0xcaa6,	// (0x00036d29) scroll_pane_cp05

0x2808,	// (0x0002ca8b) mce_header_field_pane_ParamLimits

0x2808,	// (0x0002ca8b) mce_header_field_pane

0x281f,	// (0x0002caa2) mce_header_field_pane_2_ParamLimits

0x281f,	// (0x0002caa2) mce_header_field_pane_2

0x2835,	// (0x0002cab8) mce_header_field_pane_3

0x283d,	// (0x0002cac0) list_single_mce_message_pane_ParamLimits

0x283d,	// (0x0002cac0) list_single_mce_message_pane

0x2852,	// (0x0002cad5) list_single_mce_smart_pane_ParamLimits

0x2852,	// (0x0002cad5) list_single_mce_smart_pane

0xcab2,	// (0x00036d35) input_focus_pane_cp03

0xcabb,	// (0x00036d3e) list_header_data_pane

0x2872,	// (0x0002caf5) mce_header_field_pane_t1

0x2882,	// (0x0002cb05) list_single_mce_header_pane_ParamLimits

0x2882,	// (0x0002cb05) list_single_mce_header_pane

0xcac3,	// (0x00036d46) list_single_mce_header_pane_t1

0xcad2,	// (0x00036d55) list_single_mce_message_pane_g1

0xcada,	// (0x00036d5d) list_single_mce_message_pane_t1

0x28bc,	// (0x0002cb3f) bg_cale_heading_pane_cp01_ParamLimits

0x28bc,	// (0x0002cb3f) bg_cale_heading_pane_cp01

0xcae8,	// (0x00036d6b) bg_cale_pane_cp02_ParamLimits

0xcae8,	// (0x00036d6b) bg_cale_pane_cp02

0x28f6,	// (0x0002cb79) cale_month_corner_pane

0x2915,	// (0x0002cb98) cale_month_day_heading_pane_ParamLimits

0x2915,	// (0x0002cb98) cale_month_day_heading_pane

0x2967,	// (0x0002cbea) cale_month_pane_g1_ParamLimits

0x2967,	// (0x0002cbea) cale_month_pane_g1

0x2996,	// (0x0002cc19) cale_month_pane_g2_ParamLimits

0x2996,	// (0x0002cc19) cale_month_pane_g2

0x29c6,	// (0x0002cc49) cale_month_pane_g3_ParamLimits

0x29c6,	// (0x0002cc49) cale_month_pane_g3

0x2a02,	// (0x0002cc85) cale_month_pane_g4_ParamLimits

0x2a02,	// (0x0002cc85) cale_month_pane_g4

0x2a3e,	// (0x0002ccc1) cale_month_pane_g5_ParamLimits

0x2a3e,	// (0x0002ccc1) cale_month_pane_g5

0x2a86,	// (0x0002cd09) cale_month_pane_g6_ParamLimits

0x2a86,	// (0x0002cd09) cale_month_pane_g6

0x2ad2,	// (0x0002cd55) cale_month_pane_g7_ParamLimits

0x2ad2,	// (0x0002cd55) cale_month_pane_g7

0x2b26,	// (0x0002cda9) cale_month_pane_g8_ParamLimits

0x2b26,	// (0x0002cda9) cale_month_pane_g8

0x2b7a,	// (0x0002cdfd) cale_month_pane_g9_ParamLimits

0x2b7a,	// (0x0002cdfd) cale_month_pane_g9

0x2bcc,	// (0x0002ce4f) cale_month_pane_g10_ParamLimits

0x2bcc,	// (0x0002ce4f) cale_month_pane_g10

0x2c1e,	// (0x0002cea1) cale_month_pane_g11_ParamLimits

0x2c1e,	// (0x0002cea1) cale_month_pane_g11

0x2c70,	// (0x0002cef3) cale_month_pane_g12_ParamLimits

0x2c70,	// (0x0002cef3) cale_month_pane_g12

0x2cc2,	// (0x0002cf45) cale_month_pane_g13_ParamLimits

0x2cc2,	// (0x0002cf45) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0003947d) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0003947d) cale_month_pane_g

0x2d14,	// (0x0002cf97) cale_month_week_pane

0x2d38,	// (0x0002cfbb) grid_cale_month_pane_ParamLimits

0x2d38,	// (0x0002cfbb) grid_cale_month_pane

0x2d81,	// (0x0002d004) cale_month_day_heading_pane_t1

0x2e07,	// (0x0002d08a) cale_month_day_heading_pane_t2

0x2e80,	// (0x0002d103) cale_month_day_heading_pane_t3

0x2ef9,	// (0x0002d17c) cale_month_day_heading_pane_t4

0x2f7a,	// (0x0002d1fd) cale_month_day_heading_pane_t5

0x3003,	// (0x0002d286) cale_month_day_heading_pane_t6

0x308c,	// (0x0002d30f) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00039498) cale_month_day_heading_pane_t

0xc7d1,	// (0x00036a54) bg_cale_side_pane_cp01

0x311d,	// (0x0002d3a0) cale_month_week_pane_t1

0x3136,	// (0x0002d3b9) cale_month_week_pane_t2

0x314f,	// (0x0002d3d2) cale_month_week_pane_t3

0x3168,	// (0x0002d3eb) cale_month_week_pane_t4

0x3181,	// (0x0002d404) cale_month_week_pane_t5

0x319a,	// (0x0002d41d) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x000394a7) cale_month_week_pane_t

0x31b3,	// (0x0002d436) cell_cale_month_pane_ParamLimits

0x31b3,	// (0x0002d436) cell_cale_month_pane

0xb1cc,	// (0x0003544f) cell_cale_month_pane_g1

0x0ba1,	// (0x0002ae24) cell_cale_month_pane_t1_ParamLimits

0x0ba1,	// (0x0002ae24) cell_cale_month_pane_t1

0xc7df,	// (0x00036a62) grid_highlight_pane_cp08

0xc53d,	// (0x000367c0) main_smil_g1

0x32e1,	// (0x0002d564) smil_status_pane

0xcb27,	// (0x00036daa) smil_text_pane

0xe3d7,	// (0x0003865a) bg_popup_call3_rect_pane_g8

0xe3df,	// (0x00038662) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x00039730) bg_popup_call3_rect_pane_g

0xe588,	// (0x0003880b) smil_status_volume_pane_g1

0xcb31,	// (0x00036db4) smil_status_pane_t1

0xb316,	// (0x00035599) volume_smil_pane

0xcb48,	// (0x00036dcb) list_smil_text_pane

0x32f4,	// (0x0002d577) scroll_pane_cp011

0x32ff,	// (0x0002d582) smil_text_list_pane_t1_ParamLimits

0x32ff,	// (0x0002d582) smil_text_list_pane_t1

0xb1d8,	// (0x0003545b) aid_volume_smil_ParamLimits

0xb1d8,	// (0x0003545b) aid_volume_smil

0xc53d,	// (0x000367c0) smil_volume_pane_g1

0xc53d,	// (0x000367c0) smil_volume_pane_g2

0x0001,

0xf231,	// (0x000394b4) smil_volume_pane_g

0x1d44,	// (0x0002bfc7) listscroll_cale_day_pane

0xcb52,	// (0x00036dd5) bg_cale_pane

0xcb6a,	// (0x00036ded) list_cale_pane

0xcb8d,	// (0x00036e10) scroll_pane_cp09

0xcb9e,	// (0x00036e21) cale_bg_pane_g1

0xcba6,	// (0x00036e29) cale_bg_pane_g2

0xcbae,	// (0x00036e31) cale_bg_pane_g3

0xcbb6,	// (0x00036e39) cale_bg_pane_g4

0xcbbe,	// (0x00036e41) cale_bg_pane_g5

0xcbc6,	// (0x00036e49) cale_bg_pane_g6

0xcbce,	// (0x00036e51) cale_bg_pane_g7

0xcbd6,	// (0x00036e59) cale_bg_pane_g8

0xcbde,	// (0x00036e61) cale_bg_pane_g9

0x0008,

0xf236,	// (0x000394b9) cale_bg_pane_g

0x333b,	// (0x0002d5be) list_cale_time_pane_ParamLimits

0x333b,	// (0x0002d5be) list_cale_time_pane

0xcbee,	// (0x00036e71) list_cale_time_pane_g1_ParamLimits

0xcbee,	// (0x00036e71) list_cale_time_pane_g1

0xcbfa,	// (0x00036e7d) list_cale_time_pane_g2_ParamLimits

0xcbfa,	// (0x00036e7d) list_cale_time_pane_g2

0x3350,	// (0x0002d5d3) list_cale_time_pane_g3_ParamLimits

0x3350,	// (0x0002d5d3) list_cale_time_pane_g3

0x335e,	// (0x0002d5e1) list_cale_time_pane_g4_ParamLimits

0x335e,	// (0x0002d5e1) list_cale_time_pane_g4

0x336c,	// (0x0002d5ef) list_cale_time_pane_g5_ParamLimits

0x336c,	// (0x0002d5ef) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x000394cc) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x000394cc) list_cale_time_pane_g

0xcc14,	// (0x00036e97) list_cale_time_pane_t1_ParamLimits

0xcc14,	// (0x00036e97) list_cale_time_pane_t1

0xcc3c,	// (0x00036ebf) list_cale_time_pane_t2_ParamLimits

0xcc3c,	// (0x00036ebf) list_cale_time_pane_t2

0x35da,	// (0x0002d85d) aid_blid_cardinal_pane

0x3618,	// (0x0002d89b) compass_pane_t4

0xcc64,	// (0x00036ee7) list_cale_time_pane_t4_ParamLimits

0xcc64,	// (0x00036ee7) list_cale_time_pane_t4

0x3626,	// (0x0002d8a9) compass_pane_t5

0x3634,	// (0x0002d8b7) compass_pane_t6

0x3642,	// (0x0002d8c5) compass_pane_t7

0xd117,	// (0x0003739a) navi_pane_cc_t1

0xd2f4,	// (0x00037577) aid_phob_thumbnail_center_pane

0x3a79,	// (0x0002dcfc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x000394d9) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x000394d9) list_cale_time_pane_t

0xbf21,	// (0x000361a4) bg_popup_window_pane_cp02_ParamLimits

0xbf21,	// (0x000361a4) bg_popup_window_pane_cp02

0xcc8c,	// (0x00036f0f) heading_pane_cp01_ParamLimits

0xcc8c,	// (0x00036f0f) heading_pane_cp01

0xcc98,	// (0x00036f1b) loc_req_pane_ParamLimits

0xcc98,	// (0x00036f1b) loc_req_pane

0xcca8,	// (0x00036f2b) loc_type_pane_ParamLimits

0xcca8,	// (0x00036f2b) loc_type_pane

0xccba,	// (0x00036f3d) loc_type_pane_t1_ParamLimits

0xccba,	// (0x00036f3d) loc_type_pane_t1

0xcccc,	// (0x00036f4f) loc_type_pane_t2_ParamLimits

0xcccc,	// (0x00036f4f) loc_type_pane_t2

0xccde,	// (0x00036f61) loc_type_pane_t3_ParamLimits

0xccde,	// (0x00036f61) loc_type_pane_t3

0x0002,

0xf25d,	// (0x000394e0) loc_type_pane_t_ParamLimits

0xf25d,	// (0x000394e0) loc_type_pane_t

0xccf0,	// (0x00036f73) list_loc_req_pane

0xccfa,	// (0x00036f7d) scroll_pane_cp012

0x337a,	// (0x0002d5fd) list_single_loc_request_popup_menu_pane_ParamLimits

0x337a,	// (0x0002d5fd) list_single_loc_request_popup_menu_pane

0xcd05,	// (0x00036f88) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcd05,	// (0x00036f88) list_single_loc_request_popup_menu_pane_g1

0xcd11,	// (0x00036f94) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcd11,	// (0x00036f94) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x000394e7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x000394e7) list_single_loc_request_popup_menu_pane_g

0xcd1d,	// (0x00036fa0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcd1d,	// (0x00036fa0) list_single_loc_request_popup_menu_pane_t1

0xc525,	// (0x000367a8) bg_popup_window_pane_cp03_ParamLimits

0xc525,	// (0x000367a8) bg_popup_window_pane_cp03

0xcd33,	// (0x00036fb6) heading_loc_req_pane_ParamLimits

0xcd33,	// (0x00036fb6) heading_loc_req_pane

0x3387,	// (0x0002d60a) popup_dyc_status_message_window_g1_ParamLimits

0x3387,	// (0x0002d60a) popup_dyc_status_message_window_g1

0x339b,	// (0x0002d61e) popup_dyc_status_message_window_t1_ParamLimits

0x339b,	// (0x0002d61e) popup_dyc_status_message_window_t1

0x33b0,	// (0x0002d633) popup_dyc_status_message_window_t2_ParamLimits

0x33b0,	// (0x0002d633) popup_dyc_status_message_window_t2

0x33c5,	// (0x0002d648) popup_dyc_status_message_window_t3_ParamLimits

0x33c5,	// (0x0002d648) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x000394ec) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x000394ec) popup_dyc_status_message_window_t

0xc2ca,	// (0x0003654d) bg_heading_pane_cp01

0xcd3f,	// (0x00036fc2) heading_loc_req_pane_g1

0xcd47,	// (0x00036fca) heading_loc_req_pane_g2

0xcd4f,	// (0x00036fd2) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x000394f3) heading_loc_req_pane_g

0xcd57,	// (0x00036fda) heading_loc_req_pane_t1

0xcd76,	// (0x00036ff9) bg_popup_sub_pane_cp01_ParamLimits

0xcd76,	// (0x00036ff9) bg_popup_sub_pane_cp01

0xcd84,	// (0x00037007) popup_cale_events_window_g1_ParamLimits

0xcd84,	// (0x00037007) popup_cale_events_window_g1

0xcda4,	// (0x00037027) popup_cale_events_window_g2_ParamLimits

0xcda4,	// (0x00037027) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x00039515) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x00039515) popup_cale_events_window_g

0xcdc4,	// (0x00037047) popup_cale_events_window_t1_ParamLimits

0xcdc4,	// (0x00037047) popup_cale_events_window_t1

0xcdd6,	// (0x00037059) popup_cale_events_window_t2_ParamLimits

0xcdd6,	// (0x00037059) popup_cale_events_window_t2

0xce14,	// (0x00037097) popup_cale_events_window_t3_ParamLimits

0xce14,	// (0x00037097) popup_cale_events_window_t3

0xce4e,	// (0x000370d1) popup_cale_events_window_t4_ParamLimits

0xce4e,	// (0x000370d1) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x0003951a) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x0003951a) popup_cale_events_window_t

0x33f9,	// (0x0002d67c) call_type_pane

0x3409,	// (0x0002d68c) popup_call_status_window_g1

0x341d,	// (0x0002d6a0) popup_call_status_window_g2

0x3431,	// (0x0002d6b4) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00039523) popup_call_status_window_g

0xce84,	// (0x00037107) call_type_pane_g1

0xce8d,	// (0x00037110) call_type_pane_g2

0x0001,

0xf2a7,	// (0x0003952a) call_type_pane_g

0xc2ca,	// (0x0003654d) bg_popup_sub_pane_cp02

0xce96,	// (0x00037119) listscroll_popup_wml_pane

0xce9e,	// (0x00037121) list_wml_pane

0xcea8,	// (0x0003712b) scroll_pane_cp013

0xceb3,	// (0x00037136) list_single_graphic_popup_wml_pane_ParamLimits

0xceb3,	// (0x00037136) list_single_graphic_popup_wml_pane

0xc53d,	// (0x000367c0) list_single_graphic_popup_wml_pane_g1

0xcec7,	// (0x0003714a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0003952f) list_single_graphic_popup_wml_pane_g

0xcecf,	// (0x00037152) list_single_graphic_popup_wml_pane_t1

0xcee5,	// (0x00037168) aid_call_pane

0xc51d,	// (0x000367a0) popup_clock_analogue_window_g1

0xc51d,	// (0x000367a0) popup_clock_analogue_window_g2

0xb1fa,	// (0x0003547d) popup_clock_analogue_window_g3

0xb1fa,	// (0x0003547d) popup_clock_analogue_window_g4

0xc53d,	// (0x000367c0) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00039534) popup_clock_analogue_window_g

0xb202,	// (0x00035485) popup_clock_analogue_window_t1

0xb210,	// (0x00035493) clock_digital_number_pane_ParamLimits

0xb210,	// (0x00035493) clock_digital_number_pane

0xb21c,	// (0x0003549f) clock_digital_number_pane_cp02_ParamLimits

0xb21c,	// (0x0003549f) clock_digital_number_pane_cp02

0xb228,	// (0x000354ab) clock_digital_number_pane_cp03_ParamLimits

0xb228,	// (0x000354ab) clock_digital_number_pane_cp03

0xb234,	// (0x000354b7) clock_digital_number_pane_cp04_ParamLimits

0xb234,	// (0x000354b7) clock_digital_number_pane_cp04

0xb244,	// (0x000354c7) clock_digital_separator_pane_ParamLimits

0xb244,	// (0x000354c7) clock_digital_separator_pane

0xb250,	// (0x000354d3) popup_clock_digital_window_t1

0xc53d,	// (0x000367c0) clock_digital_number_pane_g1

0xc53d,	// (0x000367c0) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x000394b4) clock_digital_number_pane_g

0xc53d,	// (0x000367c0) clock_digital_separator_pane_g1

0xc53d,	// (0x000367c0) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x000394b4) clock_digital_separator_pane_g

0xc2ca,	// (0x0003654d) bg_popup_window_pane_cp04

0xceed,	// (0x00037170) heading_pane_cp03

0xc823,	// (0x00036aa6) listscroll_popup_gms_pane

0xc2ca,	// (0x0003654d) grid_large_graphic_popup_pane

0xcef6,	// (0x00037179) listscroll_popup_gms_pane_g1

0xceff,	// (0x00037182) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0003953f) listscroll_popup_gms_pane_g

0xcf08,	// (0x0003718b) scroll_pane_cp014

0xc5a0,	// (0x00036823) cell_large_graphic_popup_pane_ParamLimits

0xc5a0,	// (0x00036823) cell_large_graphic_popup_pane

0xc5ae,	// (0x00036831) cell_large_graphic_popup_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) cell_large_graphic_popup_pane_g1

0xcf11,	// (0x00037194) cell_large_graphic_popup_pane_g2_ParamLimits

0xcf11,	// (0x00037194) cell_large_graphic_popup_pane_g2

0xcf1f,	// (0x000371a2) cell_large_graphic_popup_pane_g3_ParamLimits

0xcf1f,	// (0x000371a2) cell_large_graphic_popup_pane_g3

0xcf2d,	// (0x000371b0) cell_large_graphic_popup_pane_g4_ParamLimits

0xcf2d,	// (0x000371b0) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00039544) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00039544) cell_large_graphic_popup_pane_g

0xc2ca,	// (0x0003654d) grid_highlight_pane_cp010

0xc53d,	// (0x000367c0) bg_popup_call_pane_g1

0xcf3e,	// (0x000371c1) list_single_graphic_popup_conf_pane_ParamLimits

0xcf3e,	// (0x000371c1) list_single_graphic_popup_conf_pane

0xcf51,	// (0x000371d4) list_highlight_pane_cp01

0xcf5a,	// (0x000371dd) list_single_graphic_popup_conf_pane_g1

0xcf62,	// (0x000371e5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0003954d) list_single_graphic_popup_conf_pane_g

0xcf6a,	// (0x000371ed) list_single_graphic_popup_conf_pane_t1

0xcf78,	// (0x000371fb) linegrid_cams_pane_g1

0x3440,	// (0x0002d6c3) linegrid_cams_pane_g2

0xc762,	// (0x000369e5) linegrid_cams_pane_g3

0xcf81,	// (0x00037204) linegrid_cams_pane_g4

0x3449,	// (0x0002d6cc) linegrid_cams_pane_g5

0x3452,	// (0x0002d6d5) linegrid_cams_pane_g6

0xc812,	// (0x00036a95) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x00039552) linegrid_cams_pane_g

0xcf8a,	// (0x0003720d) popup_clock_analogue_window

0xcf8a,	// (0x0003720d) popup_clock_digital_window

0xc2ca,	// (0x0003654d) popup_phob_thumbnail_window

0xc53d,	// (0x000367c0) call_video_uplink_pane_g1

0xcf93,	// (0x00037216) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x00039561) call_video_uplink_pane_g

0xcf9b,	// (0x0003721e) video_uplink_pane

0xcfa3,	// (0x00037226) mce_image_pane_g1

0x345d,	// (0x0002d6e0) mce_image_pane_g2

0x3467,	// (0x0002d6ea) mce_image_pane_g3

0x346f,	// (0x0002d6f2) mce_image_pane_g4

0x3477,	// (0x0002d6fa) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x00039566) mce_image_pane_g

0xcfad,	// (0x00037230) control_top_pane_stacon_cp01_ParamLimits

0xcfad,	// (0x00037230) control_top_pane_stacon_cp01

0xcfc1,	// (0x00037244) uni_indicator_pane_stacon_cp01_ParamLimits

0xcfc1,	// (0x00037244) uni_indicator_pane_stacon_cp01

0xcfd2,	// (0x00037255) bg_popup_sub_pane_cp03

0xcfdc,	// (0x0003725f) chi_dic_find_pane

0x347f,	// (0x0002d702) listscroll_chi_dic_pane

0xcfe4,	// (0x00037267) main_pane_chidic_g1

0xcfec,	// (0x0003726f) chi_dic_find_pane_t1

0xcffa,	// (0x0003727d) find_chidic_pane

0xd003,	// (0x00037286) chi_dic_list_pane_ParamLimits

0xd003,	// (0x00037286) chi_dic_list_pane

0xd014,	// (0x00037297) scroll_pane_cp020

0xd01c,	// (0x0003729f) find_chidic_pane_t1

0xc2ca,	// (0x0003654d) input_focus_pane_cp06

0x3493,	// (0x0002d716) list_chi_dic_pane_ParamLimits

0x3493,	// (0x0002d716) list_chi_dic_pane

0x34a5,	// (0x0002d728) list_chi_dic_pane_t1_ParamLimits

0x34a5,	// (0x0002d728) list_chi_dic_pane_t1

0xc2ca,	// (0x0003654d) list_highlight_pane_cp020

0xd02b,	// (0x000372ae) bg_cale_heading_pane_g1

0x34b8,	// (0x0002d73b) bg_cale_heading_pane_g2

0x34c0,	// (0x0002d743) bg_cale_heading_pane_g3

0x34c8,	// (0x0002d74b) bg_cale_heading_pane_g4

0x34d2,	// (0x0002d755) bg_cale_heading_pane_g5

0x34dc,	// (0x0002d75f) bg_cale_heading_pane_g6

0x34e4,	// (0x0002d767) bg_cale_heading_pane_g7

0x34ec,	// (0x0002d76f) bg_cale_heading_pane_g8

0x34f6,	// (0x0002d779) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x00039571) bg_cale_heading_pane_g

0xd02b,	// (0x000372ae) bg_cale_side_pane_g1

0x3500,	// (0x0002d783) bg_cale_side_pane_g2

0x3508,	// (0x0002d78b) bg_cale_side_pane_g3

0x3510,	// (0x0002d793) bg_cale_side_pane_g4

0x3518,	// (0x0002d79b) bg_cale_side_pane_g5

0x3520,	// (0x0002d7a3) bg_cale_side_pane_g6

0x3528,	// (0x0002d7ab) bg_cale_side_pane_g7

0x3530,	// (0x0002d7b3) bg_cale_side_pane_g8

0x3538,	// (0x0002d7bb) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x00039584) bg_cale_side_pane_g

0x3540,	// (0x0002d7c3) popup_call_status_window_ParamLimits

0x3540,	// (0x0002d7c3) popup_call_status_window

0xd033,	// (0x000372b6) stacon_top_pane

0xd03b,	// (0x000372be) status_pane_ParamLimits

0xd03b,	// (0x000372be) status_pane

0xd050,	// (0x000372d3) status_small_pane

0xd058,	// (0x000372db) control_pane

0xc2ca,	// (0x0003654d) stacon_bottom_pane

0xd060,	// (0x000372e3) list_single_mce_smart_pane_t1_ParamLimits

0xd060,	// (0x000372e3) list_single_mce_smart_pane_t1

0xd073,	// (0x000372f6) list_single_mce_smart_pane_t2_ParamLimits

0xd073,	// (0x000372f6) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x00039597) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x00039597) list_single_mce_smart_pane_t

0x3589,	// (0x0002d80c) compass_pane

0x3592,	// (0x0002d815) main_location2_pane_t1

0x35a4,	// (0x0002d827) main_location2_pane_t2

0x35b6,	// (0x0002d839) main_location2_pane_t3

0x0003,

0xf319,	// (0x0003959c) main_location2_pane_t

0xd092,	// (0x00037315) compass_pane_g1_ParamLimits

0xd092,	// (0x00037315) compass_pane_g1

0x35fa,	// (0x0002d87d) compass_pane_t1

0x3609,	// (0x0002d88c) compass_pane_t2

0x0005,

0xf322,	// (0x000395a5) compass_pane_t

0x3650,	// (0x0002d8d3) text_secondary_cp61

0xd10e,	// (0x00037391) navi_pane_cams_g5

0xd18a,	// (0x0003740d) navi_pane_im_t1

0xd198,	// (0x0003741b) navi_pane_mp_g1_ParamLimits

0xd198,	// (0x0003741b) navi_pane_mp_g1

0xd1ac,	// (0x0003742f) navi_pane_mp_g2_ParamLimits

0xd1ac,	// (0x0003742f) navi_pane_mp_g2

0xd1b8,	// (0x0003743b) navi_pane_mp_g3_ParamLimits

0xd1b8,	// (0x0003743b) navi_pane_mp_g3

0x0002,

0xf336,	// (0x000395b9) navi_pane_mp_g_ParamLimits

0xf336,	// (0x000395b9) navi_pane_mp_g

0xd1c4,	// (0x00037447) navi_pane_mp_t1

0xd1d2,	// (0x00037455) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x000395c0) navi_pane_mp_t

0xd23d,	// (0x000374c0) navi_pane_vt_g1

0xd1c4,	// (0x00037447) navi_pane_vt_t1

0xd245,	// (0x000374c8) navi_slider_pane

0xc823,	// (0x00036aa6) zooming_pane

0xd255,	// (0x000374d8) navi_slider_pane_g1

0xb26d,	// (0x000354f0) navi_slider_pane_g2

0x0006,

0xf344,	// (0x000395c7) navi_slider_pane_g

0xd279,	// (0x000374fc) aid_levels_zoom

0xd281,	// (0x00037504) zooming_pane_g1

0xd289,	// (0x0003750c) zooming_pane_g2

0xd289,	// (0x0003750c) zooming_pane_g3

0x0002,

0xf353,	// (0x000395d6) zooming_pane_g

0xd291,	// (0x00037514) level_10_zoom

0xd29a,	// (0x0003751d) level_11_zoom

0xd2a3,	// (0x00037526) level_1_zoom

0xd2ac,	// (0x0003752f) level_2_zoom

0xd2b5,	// (0x00037538) level_3_zoom

0xd2be,	// (0x00037541) level_4_zoom

0xd2c7,	// (0x0003754a) level_5_zoom

0xd2d0,	// (0x00037553) level_6_zoom

0xd2d9,	// (0x0003755c) level_7_zoom

0xd2e2,	// (0x00037565) level_8_zoom

0xd2eb,	// (0x0003756e) level_9_zoom

0xd2fc,	// (0x0003757f) popup_phob_thumbnail_window_g1

0xd304,	// (0x00037587) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x000395dd) popup_phob_thumbnail_window_g

0x407c,	// (0x0002e2ff) level_1_location

0x4084,	// (0x0002e307) level_2_location

0x408c,	// (0x0002e30f) level_3_location

0x4094,	// (0x0002e317) level_4_location

0xc823,	// (0x00036aa6) level_5_location

0x36a1,	// (0x0002d924) mce_icon_pane_g1

0x36ab,	// (0x0002d92e) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x000395e2) mce_icon_pane_g

0xd30c,	// (0x0003758f) main_mup_pane_g1_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g1

0xd30c,	// (0x0003758f) main_mup_pane_g2_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g2

0xd30c,	// (0x0003758f) main_mup_pane_g3_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g3

0xd30c,	// (0x0003758f) main_mup_pane_g4_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g4

0xd30c,	// (0x0003758f) main_mup_pane_g5_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g5

0xd30c,	// (0x0003758f) main_mup_pane_g6_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g6

0xd30c,	// (0x0003758f) main_mup_pane_g7_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g7

0xd30c,	// (0x0003758f) main_mup_pane_g8_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g8

0xd30c,	// (0x0003758f) main_mup_pane_g9_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g9

0xd30c,	// (0x0003758f) main_mup_pane_g10_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g10

0xd30c,	// (0x0003758f) main_mup_pane_g11_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g11

0xc5ae,	// (0x00036831) main_mup_pane_g12_ParamLimits

0xc5ae,	// (0x00036831) main_mup_pane_g12

0xd30c,	// (0x0003758f) main_mup_pane_g13_ParamLimits

0xd30c,	// (0x0003758f) main_mup_pane_g13

0x000c,

0xf364,	// (0x000395e7) main_mup_pane_g_ParamLimits

0xf364,	// (0x000395e7) main_mup_pane_g

0xd31a,	// (0x0003759d) main_mup_pane_t1_ParamLimits

0xd31a,	// (0x0003759d) main_mup_pane_t1

0xd31a,	// (0x0003759d) main_mup_pane_t2_ParamLimits

0xd31a,	// (0x0003759d) main_mup_pane_t2

0xd31a,	// (0x0003759d) main_mup_pane_t3_ParamLimits

0xd31a,	// (0x0003759d) main_mup_pane_t3

0xc5f6,	// (0x00036879) main_mup_pane_t4_ParamLimits

0xc5f6,	// (0x00036879) main_mup_pane_t4

0xc5f6,	// (0x00036879) main_mup_pane_t5_ParamLimits

0xc5f6,	// (0x00036879) main_mup_pane_t5

0xc60a,	// (0x0003688d) main_mup_pane_t6_ParamLimits

0xc60a,	// (0x0003688d) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00039602) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00039602) main_mup_pane_t

0xc5a0,	// (0x00036823) mup_progress_pane_ParamLimits

0xc5a0,	// (0x00036823) mup_progress_pane

0xd32e,	// (0x000375b1) mup_visualizer_pane_ParamLimits

0xd32e,	// (0x000375b1) mup_visualizer_pane

0xd32e,	// (0x000375b1) mup_volume_pane_ParamLimits

0xd32e,	// (0x000375b1) mup_volume_pane

0xc5bc,	// (0x0003683f) mup_visualizer_pane_g1_ParamLimits

0xc5bc,	// (0x0003683f) mup_visualizer_pane_g1

0xd33c,	// (0x000375bf) mup_visualizer_pane_g2_ParamLimits

0xd33c,	// (0x000375bf) mup_visualizer_pane_g2

0xc5ae,	// (0x00036831) mup_visualizer_pane_g3_ParamLimits

0xc5ae,	// (0x00036831) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0003960f) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0003960f) mup_visualizer_pane_g

0xc5ec,	// (0x0003686f) mup_volume_pane_g1

0xc5ec,	// (0x0003686f) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00039332) mup_volume_pane_g

0xc5ec,	// (0x0003686f) mup_progress_pane_g1

0xc5ec,	// (0x0003686f) mup_progress_pane_g2

0xc5ec,	// (0x0003686f) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00039616) mup_progress_pane_g

0xc2ca,	// (0x0003654d) bg_popup_window_pane_cp05

0xd34a,	// (0x000375cd) heading_pane_cp02_ParamLimits

0xd34a,	// (0x000375cd) heading_pane_cp02

0xd364,	// (0x000375e7) list_popup_blid_pane

0xd36c,	// (0x000375ef) list_blid_sat_info_pane_ParamLimits

0xd36c,	// (0x000375ef) list_blid_sat_info_pane

0xd37f,	// (0x00037602) list_blid_sat_info_pane_g1

0xd387,	// (0x0003760a) list_blid_sat_info_pane_t1

0x37ab,	// (0x0002da2e) mup_equalizer_pane_ParamLimits

0x37ab,	// (0x0002da2e) mup_equalizer_pane

0x37c4,	// (0x0002da47) mup_equalizer_pane_cp1_ParamLimits

0x37c4,	// (0x0002da47) mup_equalizer_pane_cp1

0x37e1,	// (0x0002da64) mup_equalizer_pane_cp2_ParamLimits

0x37e1,	// (0x0002da64) mup_equalizer_pane_cp2

0x37fe,	// (0x0002da81) mup_equalizer_pane_cp3_ParamLimits

0x37fe,	// (0x0002da81) mup_equalizer_pane_cp3

0x381f,	// (0x0002daa2) mup_equalizer_pane_cp4_ParamLimits

0x381f,	// (0x0002daa2) mup_equalizer_pane_cp4

0x3840,	// (0x0002dac3) mup_equalizer_pane_cp5

0x3854,	// (0x0002dad7) mup_equalizer_pane_cp6

0x3868,	// (0x0002daeb) mup_equalizer_pane_cp7

0xe457,	// (0x000386da) bg_popup_call_poc_act_pane_g9

0xe45f,	// (0x000386e2) bg_popup_call_poc_act_pane_g10

0xe467,	// (0x000386ea) bg_popup_call_poc_act_pane_g11

0x000a,

0xc525,	// (0x000367a8) mup_scale_pane

0xc53d,	// (0x000367c0) mup_scale_pane_g1

0xd395,	// (0x00037618) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00039632) mup_scale_pane_g

0xd3b9,	// (0x0003763c) msg_data_pane

0xd3c1,	// (0x00037644) scroll_pane_cp017

0x388e,	// (0x0002db11) bg_list_pane_cp04_ParamLimits

0x388e,	// (0x0002db11) bg_list_pane_cp04

0xd3c9,	// (0x0003764c) msg_data_pane_g1

0x38b4,	// (0x0002db37) msg_data_pane_g2

0x38be,	// (0x0002db41) msg_data_pane_g3

0x38c6,	// (0x0002db49) msg_data_pane_g4

0x38ce,	// (0x0002db51) msg_data_pane_g5

0x38d6,	// (0x0002db59) msg_data_pane_g6

0x38de,	// (0x0002db61) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00039641) msg_data_pane_g

0x38e6,	// (0x0002db69) msg_text_pane_ParamLimits

0x38e6,	// (0x0002db69) msg_text_pane

0x3918,	// (0x0002db9b) qrid_highlight_pane_cp011_ParamLimits

0x3918,	// (0x0002db9b) qrid_highlight_pane_cp011

0xc2ca,	// (0x0003654d) msg_body_pane

0xc525,	// (0x000367a8) msg_header_pane

0xd3e5,	// (0x00037668) input_focus_pane_cp07

0x393c,	// (0x0002dbbf) msg_header_pane_t1_ParamLimits

0x393c,	// (0x0002dbbf) msg_header_pane_t1

0x3958,	// (0x0002dbdb) msg_header_pane_t2_ParamLimits

0x3958,	// (0x0002dbdb) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x00039655) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x00039655) msg_header_pane_t

0xd406,	// (0x00037689) msg_body_pane_g1

0x3978,	// (0x0002dbfb) msg_body_pane_t1_ParamLimits

0x3978,	// (0x0002dbfb) msg_body_pane_t1

0x39a9,	// (0x0002dc2c) msg_body_pane_t2_ParamLimits

0x39a9,	// (0x0002dc2c) msg_body_pane_t2

0x39bb,	// (0x0002dc3e) msg_body_pane_t3_ParamLimits

0x39bb,	// (0x0002dc3e) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x0003965a) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x0003965a) msg_body_pane_t

0x0be9,	// (0x0002ae6c) main_viewer_pane_g1_ParamLimits

0x0be9,	// (0x0002ae6c) main_viewer_pane_g1

0x0bf7,	// (0x0002ae7a) main_viewer_pane_g2_ParamLimits

0x0bf7,	// (0x0002ae7a) main_viewer_pane_g2

0x39eb,	// (0x0002dc6e) main_viewer_pane_g3_ParamLimits

0x39eb,	// (0x0002dc6e) main_viewer_pane_g3

0x39fa,	// (0x0002dc7d) main_viewer_pane_g4_ParamLimits

0x39fa,	// (0x0002dc7d) main_viewer_pane_g4

0xb297,	// (0x0003551a) main_viewer_pane_g5_ParamLimits

0xb297,	// (0x0003551a) main_viewer_pane_g5

0xb297,	// (0x0003551a) main_viewer_pane_g7_ParamLimits

0xb297,	// (0x0003551a) main_viewer_pane_g7

0xcd05,	// (0x00036f88) main_viewer_pane_g8_ParamLimits

0xcd05,	// (0x00036f88) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x0003966a) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x0003966a) main_viewer_pane_g

0xd40e,	// (0x00037691) viewer_content_pane_ParamLimits

0xd40e,	// (0x00037691) viewer_content_pane

0x3a36,	// (0x0002dcb9) main_postcard_pane_g1_ParamLimits

0x3a36,	// (0x0002dcb9) main_postcard_pane_g1

0x3a4c,	// (0x0002dccf) main_postcard_pane_g2_ParamLimits

0x3a4c,	// (0x0002dccf) main_postcard_pane_g2

0x3a62,	// (0x0002dce5) main_postcard_pane_g3_ParamLimits

0x3a62,	// (0x0002dce5) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x0003967b) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x0003967b) main_postcard_pane_g

0x3a79,	// (0x0002dcfc) main_postcard_pane_g4

0xe59b,	// (0x0003881e) smil_status_volume_pane_g2

0x3abc,	// (0x0002dd3f) postcard_pane_ParamLimits

0x3abc,	// (0x0002dd3f) postcard_pane

0xd41c,	// (0x0003769f) postcard_pane_g1_ParamLimits

0xd41c,	// (0x0003769f) postcard_pane_g1

0x3afe,	// (0x0002dd81) postcard_pane_g2_ParamLimits

0x3afe,	// (0x0002dd81) postcard_pane_g2

0x3b0a,	// (0x0002dd8d) postcard_pane_g3_ParamLimits

0x3b0a,	// (0x0002dd8d) postcard_pane_g3

0xd42a,	// (0x000376ad) postcard_pane_g4_ParamLimits

0xd42a,	// (0x000376ad) postcard_pane_g4

0x3b16,	// (0x0002dd99) postcard_pane_g5_ParamLimits

0x3b16,	// (0x0002dd99) postcard_pane_g5

0x3b2b,	// (0x0002ddae) postcard_pane_g6_ParamLimits

0x3b2b,	// (0x0002ddae) postcard_pane_g6

0xd41c,	// (0x0003769f) postcard_pane_g7_ParamLimits

0xd41c,	// (0x0003769f) postcard_pane_g7

0x0006,

0xf405,	// (0x00039688) postcard_pane_g_ParamLimits

0xf405,	// (0x00039688) postcard_pane_g

0x3b3f,	// (0x0002ddc2) main_mp2_pane_g1_ParamLimits

0x3b3f,	// (0x0002ddc2) main_mp2_pane_g1

0x3b4b,	// (0x0002ddce) main_mp2_pane_g2_ParamLimits

0x3b4b,	// (0x0002ddce) main_mp2_pane_g2

0x3b57,	// (0x0002ddda) main_mp2_pane_g3_ParamLimits

0x3b57,	// (0x0002ddda) main_mp2_pane_g3

0x0002,

0xf414,	// (0x00039697) main_mp2_pane_g_ParamLimits

0xf414,	// (0x00039697) main_mp2_pane_g

0x3b63,	// (0x0002dde6) main_mp2_pane_t1_ParamLimits

0x3b63,	// (0x0002dde6) main_mp2_pane_t1

0x3b78,	// (0x0002ddfb) main_mp2_pane_t2_ParamLimits

0x3b78,	// (0x0002ddfb) main_mp2_pane_t2

0x3b8a,	// (0x0002de0d) main_mp2_pane_t3_ParamLimits

0x3b8a,	// (0x0002de0d) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x0003969e) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x0003969e) main_mp2_pane_t

0xc547,	// (0x000367ca) pec_content_pane_ParamLimits

0xc547,	// (0x000367ca) pec_content_pane

0xbead,	// (0x00036130) scroll_pane_cp015

0xd32e,	// (0x000375b1) pec_attribute_pane_ParamLimits

0xd32e,	// (0x000375b1) pec_attribute_pane

0xc5ae,	// (0x00036831) pec_content_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) pec_content_pane_g1

0xd438,	// (0x000376bb) pec_content_pane_t1_ParamLimits

0xd438,	// (0x000376bb) pec_content_pane_t1

0xd44c,	// (0x000376cf) pec_content_pane_t2_ParamLimits

0xd44c,	// (0x000376cf) pec_content_pane_t2

0x0001,

0xf422,	// (0x000396a5) pec_content_pane_t_ParamLimits

0xf422,	// (0x000396a5) pec_content_pane_t

0xc5a0,	// (0x00036823) list_single_graphic_pane_cp01_ParamLimits

0xc5a0,	// (0x00036823) list_single_graphic_pane_cp01

0xc525,	// (0x000367a8) bg_popup_sub_pane_cp04

0xd460,	// (0x000376e3) popup_mup_playback_window_g1

0xd46c,	// (0x000376ef) popup_mup_playback_window_t1

0xd481,	// (0x00037704) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000396aa) popup_mup_playback_window_t

0xd4b8,	// (0x0003773b) main_image_pane_g1_ParamLimits

0xd4b8,	// (0x0003773b) main_image_pane_g1

0xd4fb,	// (0x0003777e) scroll_pane_cp018_ParamLimits

0xd4fb,	// (0x0003777e) scroll_pane_cp018

0xd513,	// (0x00037796) scroll_pane_cp016_ParamLimits

0xd513,	// (0x00037796) scroll_pane_cp016

0x3c54,	// (0x0002ded7) smil2_image_pane_ParamLimits

0x3c54,	// (0x0002ded7) smil2_image_pane

0x3c84,	// (0x0002df07) smil2_root_pane_ParamLimits

0x3c84,	// (0x0002df07) smil2_root_pane

0x3cbc,	// (0x0002df3f) smil2_text_pane_ParamLimits

0x3cbc,	// (0x0002df3f) smil2_text_pane

0xbead,	// (0x00036130) bg_list_pane_cp06

0xbead,	// (0x00036130) grid_radio_pane

0xc2ca,	// (0x0003654d) bg_popup_window_pane_cp06

0xcd66,	// (0x00036fe9) main_fmradio_pane_t1

0xe46f,	// (0x000386f2) heading_pane_cp04

0xcd66,	// (0x00036fe9) main_fmradio_pane_t2

0xe477,	// (0x000386fa) popup_cale_lunar_info_window_g1

0xcd66,	// (0x00036fe9) main_fmradio_pane_t3

0xe47f,	// (0x00038702) popup_cale_lunar_info_window_g2

0xcd66,	// (0x00036fe9) main_fmradio_pane_t4

0x0001,

0xcd66,	// (0x00036fe9) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x0003977a) popup_cale_lunar_info_window_g

0xf287,	// (0x0003950a) main_fmradio_pane_t

0xbead,	// (0x00036130) wait_bar_pane_cp03

0xc5a0,	// (0x00036823) cell_fmradio_pane_ParamLimits

0xc5a0,	// (0x00036823) cell_fmradio_pane

0xc5ae,	// (0x00036831) cell_fmradio_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) cell_fmradio_pane_g1

0xbead,	// (0x00036130) grid_highlight_pane_cp011

0xd547,	// (0x000377ca) poc_content_pane_ParamLimits

0xd547,	// (0x000377ca) poc_content_pane

0xd559,	// (0x000377dc) scroll_pane_cp019

0x3d3c,	// (0x0002dfbf) popup_call_poc_act_window_ParamLimits

0x3d3c,	// (0x0002dfbf) popup_call_poc_act_window

0x3d60,	// (0x0002dfe3) popup_call_poc_inact_window_ParamLimits

0x3d60,	// (0x0002dfe3) popup_call_poc_inact_window

0xf4d3,	// (0x00039756) bg_popup_call_poc_act_pane_g

0xe3e7,	// (0x0003866a) bg_popup_call_poc_inact_pane_g1

0xe3ef,	// (0x00038672) bg_popup_call_poc_inact_pane_g2

0xd561,	// (0x000377e4) popup_call_poc_act_window_g2

0xe3f7,	// (0x0003867a) bg_popup_call_poc_inact_pane_g3

0xe3ff,	// (0x00038682) bg_popup_call_poc_inact_pane_g4

0xe407,	// (0x0003868a) bg_popup_call_poc_inact_pane_g5

0xd569,	// (0x000377ec) popup_call_poc_act_window_t1_ParamLimits

0xd569,	// (0x000377ec) popup_call_poc_act_window_t1

0xd591,	// (0x00037814) popup_call_poc_act_window_t2_ParamLimits

0xd591,	// (0x00037814) popup_call_poc_act_window_t2

0xd5b9,	// (0x0003783c) popup_call_poc_act_window_t3_ParamLimits

0xd5b9,	// (0x0003783c) popup_call_poc_act_window_t3

0xd5e1,	// (0x00037864) popup_call_poc_act_window_t4_ParamLimits

0xd5e1,	// (0x00037864) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x000396bf) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x000396bf) popup_call_poc_act_window_t

0xe40f,	// (0x00038692) bg_popup_call_poc_inact_pane_g6

0xe417,	// (0x0003869a) bg_popup_call_poc_inact_pane_g7

0xe41f,	// (0x000386a2) bg_popup_call_poc_inact_pane_g8

0xd5f3,	// (0x00037876) popup_call_poc_inact_window_g2

0xe427,	// (0x000386aa) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x00039743) bg_popup_call_poc_inact_pane_g

0xd5fb,	// (0x0003787e) popup_call_poc_inact_window_t1_ParamLimits

0xd5fb,	// (0x0003787e) popup_call_poc_inact_window_t1

0xd610,	// (0x00037893) popup_call_poc_inact_window_t2_ParamLimits

0xd610,	// (0x00037893) popup_call_poc_inact_window_t2

0xd625,	// (0x000378a8) popup_call_poc_inact_window_t3_ParamLimits

0xd625,	// (0x000378a8) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x000396c8) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x000396c8) popup_call_poc_inact_window_t

0xe513,	// (0x00038796) context_pane_ParamLimits

0x42a4,	// (0x0002e527) signal_pane_ParamLimits

0xc823,	// (0x00036aa6) main_call2_pane

0xb2e2,	// (0x00035565) popup_phob_thumbnail2_window_ParamLimits

0xb2e2,	// (0x00035565) popup_phob_thumbnail2_window

0xb27f,	// (0x00035502) aid_hotspot_pointer_arrow_pane

0xb287,	// (0x0003550a) aid_hotspot_pointer_hand_pane

0x4046,	// (0x0002e2c9) phob_pre_status_pane_g5

0xc547,	// (0x000367ca) cams_zoom_pane_ParamLimits

0xc547,	// (0x000367ca) image_vga_pane_ParamLimits

0xc5ae,	// (0x00036831) main_camera_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) main_camera_pane_g2_ParamLimits

0xc5ae,	// (0x00036831) main_camera_pane_g3_ParamLimits

0xc5ae,	// (0x00036831) main_camera_pane_g4_ParamLimits

0xc5ae,	// (0x00036831) main_camera_pane_g5_ParamLimits

0xc5ae,	// (0x00036831) main_camera_pane_g6_ParamLimits

0xc5ae,	// (0x00036831) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00039403) main_camera_pane_g_ParamLimits

0xc5f6,	// (0x00036879) main_camera_pane_t1_ParamLimits

0xc5f6,	// (0x00036879) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00039414) main_camera_pane_t_ParamLimits

0xc525,	// (0x000367a8) bg_popup_preview_window_pane_cp01_ParamLimits

0xc525,	// (0x000367a8) bg_popup_preview_window_pane_cp01

0xd63a,	// (0x000378bd) popup_phob_thumbnail2_window_g1_ParamLimits

0xd63a,	// (0x000378bd) popup_phob_thumbnail2_window_g1

0xc2ca,	// (0x0003654d) call2_cli_visual_pane

0x3d94,	// (0x0002e017) popup_call2_audio_conf_window_ParamLimits

0x3d94,	// (0x0002e017) popup_call2_audio_conf_window

0x3db4,	// (0x0002e037) popup_call2_audio_first_window_ParamLimits

0x3db4,	// (0x0002e037) popup_call2_audio_first_window

0x3e4a,	// (0x0002e0cd) popup_call2_audio_in_window_ParamLimits

0x3e4a,	// (0x0002e0cd) popup_call2_audio_in_window

0x3e92,	// (0x0002e115) popup_call2_audio_out_window_ParamLimits

0x3e92,	// (0x0002e115) popup_call2_audio_out_window

0x3efc,	// (0x0002e17f) popup_call2_audio_second_window_ParamLimits

0x3efc,	// (0x0002e17f) popup_call2_audio_second_window

0x3f62,	// (0x0002e1e5) popup_call2_audio_wait_window_ParamLimits

0x3f62,	// (0x0002e1e5) popup_call2_audio_wait_window

0xc2ca,	// (0x0003654d) bg_popup_call2_act_pane_cp03

0xc507,	// (0x0003678a) list_conf_pane_cp

0xd646,	// (0x000378c9) popup_call2_audio_conf_window_t1

0xcf3e,	// (0x000371c1) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf3e,	// (0x000371c1) list_single_graphic_popup_conf2_pane

0xcf51,	// (0x000371d4) list_highlight_pane_cp04

0xd654,	// (0x000378d7) list_single_graphic_popup_conf2_pane_g1

0xcf62,	// (0x000371e5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x000396cf) list_single_graphic_popup_conf2_pane_g

0xd65e,	// (0x000378e1) list_single_graphic_popup_conf2_pane_t1

0xd66c,	// (0x000378ef) bg_popup_call2_act_pane_cp01_ParamLimits

0xd66c,	// (0x000378ef) bg_popup_call2_act_pane_cp01

0xd6f6,	// (0x00037979) call_type_pane_cp05_ParamLimits

0xd6f6,	// (0x00037979) call_type_pane_cp05

0xd74a,	// (0x000379cd) popup_call2_audio_second_window_g1_ParamLimits

0xd74a,	// (0x000379cd) popup_call2_audio_second_window_g1

0xd79e,	// (0x00037a21) popup_call2_audio_second_window_g2_ParamLimits

0xd79e,	// (0x00037a21) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x000396d4) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x000396d4) popup_call2_audio_second_window_g

0xd803,	// (0x00037a86) popup_call2_audio_second_window_t1_ParamLimits

0xd803,	// (0x00037a86) popup_call2_audio_second_window_t1

0xd8be,	// (0x00037b41) popup_call2_audio_second_window_t2_ParamLimits

0xd8be,	// (0x00037b41) popup_call2_audio_second_window_t2

0xd911,	// (0x00037b94) popup_call2_audio_second_window_t3_ParamLimits

0xd911,	// (0x00037b94) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x000396db) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x000396db) popup_call2_audio_second_window_t

0xc2ca,	// (0x0003654d) bg_popup_call2_in_pane_cp02

0xc2d4,	// (0x00036557) call_type_pane_cp04

0x3f9c,	// (0x0002e21f) popup_call2_audio_wait_window_g1

0x3fa4,	// (0x0002e227) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x000396e4) popup_call2_audio_wait_window_g

0xc2ec,	// (0x0003656f) popup_call2_audio_wait_window_t3

0xda04,	// (0x00037c87) bg_popup_call2_act_pane_ParamLimits

0xda04,	// (0x00037c87) bg_popup_call2_act_pane

0xdac4,	// (0x00037d47) call_type_pane_cp03_ParamLimits

0xdac4,	// (0x00037d47) call_type_pane_cp03

0xdb36,	// (0x00037db9) popup_call2_audio_first_window_g1_ParamLimits

0xdb36,	// (0x00037db9) popup_call2_audio_first_window_g1

0xdba6,	// (0x00037e29) popup_call2_audio_first_window_g2_ParamLimits

0xdba6,	// (0x00037e29) popup_call2_audio_first_window_g2

0xdb28,	// (0x00037dab) popup_call2_audio_first_window_g3_ParamLimits

0xdb28,	// (0x00037dab) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x000396e9) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x000396e9) popup_call2_audio_first_window_g

0xdc84,	// (0x00037f07) popup_call2_audio_first_window_t1_ParamLimits

0xdc84,	// (0x00037f07) popup_call2_audio_first_window_t1

0xdd87,	// (0x0003800a) popup_call2_audio_first_window_t4_ParamLimits

0xdd87,	// (0x0003800a) popup_call2_audio_first_window_t4

0xde6a,	// (0x000380ed) popup_call2_audio_first_window_t5_ParamLimits

0xde6a,	// (0x000380ed) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x000396f4) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x000396f4) popup_call2_audio_first_window_t

0xc51d,	// (0x000367a0) bg_popup_call2_act_pane_g1

0xe487,	// (0x0003870a) popup_cale_lunar_info_window_t1

0xe495,	// (0x00038718) popup_cale_lunar_info_window_t2

0xe4a3,	// (0x00038726) popup_cale_lunar_info_window_t3

0xc2ca,	// (0x0003654d) bg_popup_call2_bubble_pane

0xdf6b,	// (0x000381ee) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf6b,	// (0x000381ee) bg_popup_call2_in_pane_cp01

0xbfa6,	// (0x00036229) call_type_pane_cp02

0x3fac,	// (0x0002e22f) popup_call2_audio_out_window_g1_ParamLimits

0x3fac,	// (0x0002e22f) popup_call2_audio_out_window_g1

0xdfb3,	// (0x00038236) popup_call2_audio_out_window_g2_ParamLimits

0xdfb3,	// (0x00038236) popup_call2_audio_out_window_g2

0x3fd8,	// (0x0002e25b) popup_call2_audio_out_window_g3_ParamLimits

0x3fd8,	// (0x0002e25b) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x000396fd) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x000396fd) popup_call2_audio_out_window_g

0xdfea,	// (0x0003826d) popup_call2_audio_out_window_t1_ParamLimits

0xdfea,	// (0x0003826d) popup_call2_audio_out_window_t1

0xe049,	// (0x000382cc) popup_call2_audio_out_window_t2_ParamLimits

0xe049,	// (0x000382cc) popup_call2_audio_out_window_t2

0xe09d,	// (0x00038320) popup_call2_audio_out_window_t3_ParamLimits

0xe09d,	// (0x00038320) popup_call2_audio_out_window_t3

0xe0b3,	// (0x00038336) popup_call2_audio_out_window_t4_ParamLimits

0xe0b3,	// (0x00038336) popup_call2_audio_out_window_t4

0xe0c9,	// (0x0003834c) popup_call2_audio_out_window_t5_ParamLimits

0xe0c9,	// (0x0003834c) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00039706) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00039706) popup_call2_audio_out_window_t

0xe12d,	// (0x000383b0) bg_popup_call2_in_pane_ParamLimits

0xe12d,	// (0x000383b0) bg_popup_call2_in_pane

0xe189,	// (0x0003840c) popup_call2_audio_in_window_g1_ParamLimits

0xe189,	// (0x0003840c) popup_call2_audio_in_window_g1

0xe1c1,	// (0x00038444) popup_call2_audio_in_window_g2_ParamLimits

0xe1c1,	// (0x00038444) popup_call2_audio_in_window_g2

0xe1f9,	// (0x0003847c) popup_call2_audio_in_window_g3_ParamLimits

0xe1f9,	// (0x0003847c) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x00039713) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x00039713) popup_call2_audio_in_window_g

0xe251,	// (0x000384d4) popup_call2_audio_in_window_t1_ParamLimits

0xe251,	// (0x000384d4) popup_call2_audio_in_window_t1

0xe2d1,	// (0x00038554) popup_call2_audio_in_window_t2_ParamLimits

0xe2d1,	// (0x00038554) popup_call2_audio_in_window_t2

0xe351,	// (0x000385d4) popup_call2_audio_in_window_t3_ParamLimits

0xe351,	// (0x000385d4) popup_call2_audio_in_window_t3

0xe36b,	// (0x000385ee) popup_call2_audio_in_window_t4_ParamLimits

0xe36b,	// (0x000385ee) popup_call2_audio_in_window_t4

0xe37d,	// (0x00038600) popup_call2_audio_in_window_t5_ParamLimits

0xe37d,	// (0x00038600) popup_call2_audio_in_window_t5

0xe392,	// (0x00038615) popup_call2_audio_in_window_t6_ParamLimits

0xe392,	// (0x00038615) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0003971c) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0003971c) popup_call2_audio_in_window_t

0xc51d,	// (0x000367a0) bg_popup_call2_in_pane_g1

0xe4b1,	// (0x00038734) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x0003977f) popup_cale_lunar_info_window_t

0xc525,	// (0x000367a8) bg_popup_call2_rect_pane_ParamLimits

0xc525,	// (0x000367a8) bg_popup_call2_rect_pane

0xc2ca,	// (0x0003654d) call2_cli_visual_graphic_pane

0xc2ca,	// (0x0003654d) call2_cli_visual_text_pane

0xb309,	// (0x0003558c) smil_status_volume_pane_g3

0x0002,

0xc53d,	// (0x000367c0) call2_cli_visual_graphic_pane_g1

0xc53d,	// (0x000367c0) call2_cli_visual_graphic_pane_g2

0xc53d,	// (0x000367c0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x00039729) call2_cli_visual_graphic_pane_g

0xe3a7,	// (0x0003862a) bg_popup_call2_rect_pane_g1

0xc72a,	// (0x000369ad) bg_popup_call2_rect_pane_g2

0xe3af,	// (0x00038632) bg_popup_call2_rect_pane_g3

0xe3b7,	// (0x0003863a) bg_popup_call2_rect_pane_g4

0xe3bf,	// (0x00038642) bg_popup_call2_rect_pane_g5

0xe3c7,	// (0x0003864a) bg_popup_call2_rect_pane_g6

0xe3cf,	// (0x00038652) bg_popup_call2_rect_pane_g7

0xe3d7,	// (0x0003865a) bg_popup_call2_rect_pane_g8

0xe3df,	// (0x00038662) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x00039730) bg_popup_call2_rect_pane_g

0xe3e7,	// (0x0003866a) bg_popup_call2_bubble_pane_g1

0xe3ef,	// (0x00038672) bg_popup_call2_bubble_pane_g2

0xe3f7,	// (0x0003867a) bg_popup_call2_bubble_pane_g3

0xe3ff,	// (0x00038682) bg_popup_call2_bubble_pane_g4

0xe407,	// (0x0003868a) bg_popup_call2_bubble_pane_g5

0xe40f,	// (0x00038692) bg_popup_call2_bubble_pane_g6

0xe417,	// (0x0003869a) bg_popup_call2_bubble_pane_g7

0xe41f,	// (0x000386a2) bg_popup_call2_bubble_pane_g8

0xe427,	// (0x000386aa) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x00039743) bg_popup_call2_bubble_pane_g

0x1d56,	// (0x0002bfd9) aid_cale_week_size_cell_pane

0x222c,	// (0x0002c4af) aid_cams_cif_uncrop_pane_ParamLimits

0x222c,	// (0x0002c4af) aid_cams_cif_uncrop_pane

0xc547,	// (0x000367ca) aid_cams_size_cell_ParamLimits

0xc547,	// (0x000367ca) aid_cams_size_cell

0xc547,	// (0x000367ca) grid_cams_pane_ParamLimits

0xc547,	// (0x000367ca) linegrid_cams_pane_ParamLimits

0x244a,	// (0x0002c6cd) call_video_pane_t1

0x2468,	// (0x0002c6eb) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00039460) call_video_pane_t

0x2896,	// (0x0002cb19) aid_cale_month_size_cell_pane_ParamLimits

0x2896,	// (0x0002cb19) aid_cale_month_size_cell_pane

0xf540,	// (0x000397c3) smil_status_volume_pane_g

0xb316,	// (0x00035599) volume_smil_pane_ParamLimits

0xb0bf,	// (0x00035342) aid_popup2_width_pane

0x1ccd,	// (0x0002bf50) cell_qdial_pane_g4_ParamLimits

0x1ccd,	// (0x0002bf50) cell_qdial_pane_g4

0x35da,	// (0x0002d85d) aid_blid_cardinal_pane_ParamLimits

0x35e6,	// (0x0002d869) aid_blid_destination_pane_ParamLimits

0x35e6,	// (0x0002d869) aid_blid_destination_pane

0xc525,	// (0x000367a8) bg_popup_call_poc_act_pane_ParamLimits

0xc525,	// (0x000367a8) bg_popup_call_poc_act_pane

0xc525,	// (0x000367a8) bg_popup_call_poc_inact_pane_ParamLimits

0xc525,	// (0x000367a8) bg_popup_call_poc_inact_pane

0xe42f,	// (0x000386b2) bg_popup_call_poc_act_pane_g1

0xe437,	// (0x000386ba) bg_popup_call_poc_act_pane_g2

0xe43f,	// (0x000386c2) bg_popup_call_poc_act_pane_g3

0xe3ff,	// (0x00038682) bg_popup_call_poc_act_pane_g4

0xe407,	// (0x0003868a) bg_popup_call_poc_act_pane_g5

0xe447,	// (0x000386ca) bg_popup_call_poc_act_pane_g6

0xe417,	// (0x0003869a) bg_popup_call_poc_act_pane_g7

0xe44f,	// (0x000386d2) bg_popup_call_poc_act_pane_g8

0xc2ca,	// (0x0003654d) main_usb_pane

0xb2bd,	// (0x00035540) popup_cale_lunar_info_window

0x2742,	// (0x0002c9c5) im_reading_pane_t1_ParamLimits

0xc8e4,	// (0x00036b67) list_im_pane_ParamLimits

0xc8f5,	// (0x00036b78) scroll_pane_cp07_ParamLimits

0xc2ca,	// (0x0003654d) grid_highlight_pane_cp012

0xc525,	// (0x000367a8) mup_scale_pane_ParamLimits

0xc5ae,	// (0x00036831) main_usb_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) main_usb_pane_g1

0xc5ae,	// (0x00036831) main_usb_pane_g2_ParamLimits

0xc5ae,	// (0x00036831) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x0003943f) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x0003943f) main_usb_pane_g

0xc5f6,	// (0x00036879) main_usb_pane_t1_ParamLimits

0xc5f6,	// (0x00036879) main_usb_pane_t1

0xc5f6,	// (0x00036879) main_usb_pane_t2_ParamLimits

0xc5f6,	// (0x00036879) main_usb_pane_t2

0xc5f6,	// (0x00036879) main_usb_pane_t3_ParamLimits

0xc5f6,	// (0x00036879) main_usb_pane_t3

0xc5f6,	// (0x00036879) main_usb_pane_t4_ParamLimits

0xc5f6,	// (0x00036879) main_usb_pane_t4

0xc5f6,	// (0x00036879) main_usb_pane_t5_ParamLimits

0xc5f6,	// (0x00036879) main_usb_pane_t5

0xc5f6,	// (0x00036879) main_usb_pane_t6_ParamLimits

0xc5f6,	// (0x00036879) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x0003976d) main_usb_pane_t_ParamLimits

0x3589,	// (0x0002d80c) aid_text_placing

0x3592,	// (0x0002d815) main_location2_pane_t1_ParamLimits

0x35a4,	// (0x0002d827) main_location2_pane_t2_ParamLimits

0x35b6,	// (0x0002d839) main_location2_pane_t3_ParamLimits

0x35c8,	// (0x0002d84b) main_location2_pane_t4_ParamLimits

0x35c8,	// (0x0002d84b) main_location2_pane_t4

0xf319,	// (0x0003959c) main_location2_pane_t_ParamLimits

0xc561,	// (0x000367e4) find_pinb_pane_g2_ParamLimits

0xc561,	// (0x000367e4) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00039318) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00039318) find_pinb_pane_g

0xc56d,	// (0x000367f0) find_pinb_pane_t1_ParamLimits

0xc57f,	// (0x00036802) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0003931d) find_pinb_pane_t_ParamLimits

0xc2ca,	// (0x0003654d) main_call3_pane

0x2d81,	// (0x0002d004) cale_month_day_heading_pane_t1_ParamLimits

0x2e07,	// (0x0002d08a) cale_month_day_heading_pane_t2_ParamLimits

0x2e80,	// (0x0002d103) cale_month_day_heading_pane_t3_ParamLimits

0x2ef9,	// (0x0002d17c) cale_month_day_heading_pane_t4_ParamLimits

0x2f7a,	// (0x0002d1fd) cale_month_day_heading_pane_t5_ParamLimits

0x3003,	// (0x0002d286) cale_month_day_heading_pane_t6_ParamLimits

0x308c,	// (0x0002d30f) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00039498) cale_month_day_heading_pane_t_ParamLimits

0xcb3f,	// (0x00036dc2) smil_status_volume_pane

0x3ada,	// (0x0002dd5d) postcard_address_pane_ParamLimits

0x3ada,	// (0x0002dd5d) postcard_address_pane

0x3aec,	// (0x0002dd6f) postcard_message_pane_ParamLimits

0x3aec,	// (0x0002dd6f) postcard_message_pane

0x4004,	// (0x0002e287) call2_cli_visual_pane_t1_ParamLimits

0x4004,	// (0x0002e287) call2_cli_visual_pane_t1

0xe5c6,	// (0x00038849) postcard_message_pane_t1_ParamLimits

0xe5c6,	// (0x00038849) postcard_message_pane_t1

0xe5ae,	// (0x00038831) postcard_address_pane_t1_ParamLimits

0xe5ae,	// (0x00038831) postcard_address_pane_t1

0x4456,	// (0x0002e6d9) popup_call3_audio_in_window_ParamLimits

0x4456,	// (0x0002e6d9) popup_call3_audio_in_window

0x42e1,	// (0x0002e564) bg_popup_call3_in_pane_ParamLimits

0x42e1,	// (0x0002e564) bg_popup_call3_in_pane

0x4357,	// (0x0002e5da) popup_call3_audio_in_window_g1_ParamLimits

0x4357,	// (0x0002e5da) popup_call3_audio_in_window_g1

0x4377,	// (0x0002e5fa) popup_call3_audio_in_window_g2_ParamLimits

0x4377,	// (0x0002e5fa) popup_call3_audio_in_window_g2

0x4397,	// (0x0002e61a) popup_call3_audio_in_window_g3_ParamLimits

0x4397,	// (0x0002e61a) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x000397ca) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x000397ca) popup_call3_audio_in_window_g

0x43c8,	// (0x0002e64b) popup_call3_audio_in_window_t1_ParamLimits

0x43c8,	// (0x0002e64b) popup_call3_audio_in_window_t1

0x4406,	// (0x0002e689) popup_call3_audio_in_window_t2_ParamLimits

0x4406,	// (0x0002e689) popup_call3_audio_in_window_t2

0x4444,	// (0x0002e6c7) popup_call3_audio_in_window_t3_ParamLimits

0x4444,	// (0x0002e6c7) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x000397d3) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x000397d3) popup_call3_audio_in_window_t

0xc823,	// (0x00036aa6) bg_popup_call3_rect_pane

0xe3a7,	// (0x0003862a) bg_popup_call3_rect_pane_g1

0xc72a,	// (0x000369ad) bg_popup_call3_rect_pane_g2

0xe3af,	// (0x00038632) bg_popup_call3_rect_pane_g3

0xe3b7,	// (0x0003863a) bg_popup_call3_rect_pane_g4

0xe3bf,	// (0x00038642) bg_popup_call3_rect_pane_g5

0xe3c7,	// (0x0003864a) bg_popup_call3_rect_pane_g6

0xe3cf,	// (0x00038652) bg_popup_call3_rect_pane_g7

0xbead,	// (0x00036130) mup_visualizer_osc_pane

0xbead,	// (0x00036130) mup_visualizer_spec_pane

0x4311,	// (0x0002e594) call3_video_qcif_pane_ParamLimits

0x4311,	// (0x0002e594) call3_video_qcif_pane

0x4324,	// (0x0002e5a7) call3_video_qcif_uncrop_pane_ParamLimits

0x4324,	// (0x0002e5a7) call3_video_qcif_uncrop_pane

0x4332,	// (0x0002e5b5) call3_video_subqcif_pane_ParamLimits

0x4332,	// (0x0002e5b5) call3_video_subqcif_pane

0x4346,	// (0x0002e5c9) call3_video_subqcif_uncrop_pane_ParamLimits

0x4346,	// (0x0002e5c9) call3_video_subqcif_uncrop_pane

0x43b7,	// (0x0002e63a) popup_call3_audio_in_window_g4_ParamLimits

0x43b7,	// (0x0002e63a) popup_call3_audio_in_window_g4

0xbead,	// (0x00036130) mup_spec_half_pane

0xbead,	// (0x00036130) mup_spec_half_pane_cp

0xbead,	// (0x00036130) mup_osc_middle_pane

0xc5ec,	// (0x0003686f) mup_visualizer_osc_pane_g1

0xe561,	// (0x000387e4) mup_spec_bar_pane_ParamLimits

0xe561,	// (0x000387e4) mup_spec_bar_pane

0xc5ec,	// (0x0003686f) mup_spec_bar_pane_g1

0xc5ec,	// (0x0003686f) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00039332) mup_spec_bar_pane_g

0x1d56,	// (0x0002bfd9) aid_cale_week_size_cell_pane_ParamLimits

0x1d70,	// (0x0002bff3) bg_cale_heading_pane_ParamLimits

0xc785,	// (0x00036a08) bg_cale_pane_cp01_ParamLimits

0x1d88,	// (0x0002c00b) cale_week_corner_pane_ParamLimits

0x1da7,	// (0x0002c02a) cale_week_day_heading_pane_ParamLimits

0x1dc4,	// (0x0002c047) cale_week_scroll_pane_g1_ParamLimits

0x1dd7,	// (0x0002c05a) cale_week_scroll_pane_g2_ParamLimits

0x1def,	// (0x0002c072) cale_week_scroll_pane_g3_ParamLimits

0x1e07,	// (0x0002c08a) cale_week_scroll_pane_g4_ParamLimits

0x1e1f,	// (0x0002c0a2) cale_week_scroll_pane_g5_ParamLimits

0x1e3f,	// (0x0002c0c2) cale_week_scroll_pane_g6_ParamLimits

0x1e5f,	// (0x0002c0e2) cale_week_scroll_pane_g7_ParamLimits

0x1e7f,	// (0x0002c102) cale_week_scroll_pane_g8_ParamLimits

0x1ea3,	// (0x0002c126) cale_week_scroll_pane_g9_ParamLimits

0x1ebb,	// (0x0002c13e) cale_week_scroll_pane_g10_ParamLimits

0x1ed3,	// (0x0002c156) cale_week_scroll_pane_g11_ParamLimits

0x1eeb,	// (0x0002c16e) cale_week_scroll_pane_g12_ParamLimits

0x1f03,	// (0x0002c186) cale_week_scroll_pane_g13_ParamLimits

0x1f03,	// (0x0002c186) cale_week_scroll_pane_g14_ParamLimits

0x1f03,	// (0x0002c186) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x000393a9) cale_week_scroll_pane_g_ParamLimits

0x1f3f,	// (0x0002c1c2) cale_week_time_pane_ParamLimits

0x1f63,	// (0x0002c1e6) grid_cale_week_pane_ParamLimits

0xc7a2,	// (0x00036a25) listscroll_cale_week_pane_t1

0xc7b4,	// (0x00036a37) scroll_pane_cp08_ParamLimits

0x28f6,	// (0x0002cb79) cale_month_corner_pane_ParamLimits

0xcb15,	// (0x00036d98) cale_month_pane_t1

0x2d14,	// (0x0002cf97) cale_month_week_pane_ParamLimits

0x3409,	// (0x0002d68c) popup_call_status_window_g1_ParamLimits

0x341d,	// (0x0002d6a0) popup_call_status_window_g2_ParamLimits

0x3431,	// (0x0002d6b4) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00039523) popup_call_status_window_g_ParamLimits

0xcedd,	// (0x00037160) aid_call2_pane

0x392e,	// (0x0002dbb1) msg_header_pane_g1

0x3ada,	// (0x0002dd5d) postcard_address2_pane_ParamLimits

0x3ada,	// (0x0002dd5d) postcard_address2_pane

0x3aec,	// (0x0002dd6f) postcard_message2_pane_ParamLimits

0x3aec,	// (0x0002dd6f) postcard_message2_pane

0x42b2,	// (0x0002e535) message2_row_pane_ParamLimits

0x42b2,	// (0x0002e535) message2_row_pane

0x42ce,	// (0x0002e551) address2_row_pane_ParamLimits

0x42ce,	// (0x0002e551) address2_row_pane

0xe52e,	// (0x000387b1) postcard_message2_row_pane_g1

0xe536,	// (0x000387b9) postcard_message2_row_pane_t1

0xe52e,	// (0x000387b1) address2_row_pane_g1

0xe536,	// (0x000387b9) address2_row_pane_t1

0x21c3,	// (0x0002c446) aid_size_cell_vorec

0xc2ca,	// (0x0003654d) main_rss_pane

0xe544,	// (0x000387c7) rss_list_single_pane_ParamLimits

0xe544,	// (0x000387c7) rss_list_single_pane

0xe552,	// (0x000387d5) rss_list_single_pane_t1

0xe552,	// (0x000387d5) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x000397be) rss_list_single_pane_t

0xc2ca,	// (0x0003654d) main_camera2_pane

0xc2ca,	// (0x0003654d) main_video2_pane

0xb32b,	// (0x000355ae) cams_zoom_pane_cp2_ParamLimits

0xb32b,	// (0x000355ae) cams_zoom_pane_cp2

0xb32b,	// (0x000355ae) image2_vga_pane_ParamLimits

0xb32b,	// (0x000355ae) image2_vga_pane

0xb339,	// (0x000355bc) main_camera2_pane_g1_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g1

0xb339,	// (0x000355bc) main_camera2_pane_g2_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g2

0xb339,	// (0x000355bc) main_camera2_pane_g3_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g3

0xb339,	// (0x000355bc) main_camera2_pane_g4_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g4

0xb339,	// (0x000355bc) main_camera2_pane_g5_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g5

0xb339,	// (0x000355bc) main_camera2_pane_g6_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g6

0xb339,	// (0x000355bc) main_camera2_pane_g7_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g7

0xb339,	// (0x000355bc) main_camera2_pane_g8_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g8

0x0008,

0xf557,	// (0x000397da) main_camera2_pane_g_ParamLimits

0xf557,	// (0x000397da) main_camera2_pane_g

0x0ecf,	// (0x0002b152) main_camera2_pane_t1_ParamLimits

0x0ecf,	// (0x0002b152) main_camera2_pane_t1

0x0ecf,	// (0x0002b152) main_camera2_pane_t2_ParamLimits

0x0ecf,	// (0x0002b152) main_camera2_pane_t2

0x0ecf,	// (0x0002b152) main_camera2_pane_t3_ParamLimits

0x0ecf,	// (0x0002b152) main_camera2_pane_t3

0x0ecf,	// (0x0002b152) main_camera2_pane_t4_ParamLimits

0x0ecf,	// (0x0002b152) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x000397ed) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x000397ed) main_camera2_pane_t

0xb37d,	// (0x00035600) cams_zoom_pane_cp4_ParamLimits

0xb37d,	// (0x00035600) cams_zoom_pane_cp4

0x0ee3,	// (0x0002b166) image2_cif_pane_ParamLimits

0x0ee3,	// (0x0002b166) image2_cif_pane

0xb11c,	// (0x0003539f) image2_subqcif_pane_ParamLimits

0xb11c,	// (0x0003539f) image2_subqcif_pane

0x0ef1,	// (0x0002b174) main_video2_pane_g1_ParamLimits

0x0ef1,	// (0x0002b174) main_video2_pane_g1

0x0ef1,	// (0x0002b174) main_video2_pane_g2_ParamLimits

0x0ef1,	// (0x0002b174) main_video2_pane_g2

0x0ef1,	// (0x0002b174) main_video2_pane_g3_ParamLimits

0x0ef1,	// (0x0002b174) main_video2_pane_g3

0x0ef1,	// (0x0002b174) main_video2_pane_g4_ParamLimits

0x0ef1,	// (0x0002b174) main_video2_pane_g4

0x0ef1,	// (0x0002b174) main_video2_pane_g5_ParamLimits

0x0ef1,	// (0x0002b174) main_video2_pane_g5

0x0ef1,	// (0x0002b174) main_video2_pane_g6_ParamLimits

0x0ef1,	// (0x0002b174) main_video2_pane_g6

0x0005,

0xf579,	// (0x000397fc) main_video2_pane_g_ParamLimits

0xf579,	// (0x000397fc) main_video2_pane_g

0x0eff,	// (0x0002b182) main_video2_pane_t1_ParamLimits

0x0eff,	// (0x0002b182) main_video2_pane_t1

0x0eff,	// (0x0002b182) main_video2_pane_t2_ParamLimits

0x0eff,	// (0x0002b182) main_video2_pane_t2

0x0eff,	// (0x0002b182) main_video2_pane_t3_ParamLimits

0x0eff,	// (0x0002b182) main_video2_pane_t3

0x0002,

0xf586,	// (0x00039809) main_video2_pane_t_ParamLimits

0xf586,	// (0x00039809) main_video2_pane_t

0x40a8,	// (0x0002e32b) call_muted_g2

0x0001,

0xf52d,	// (0x000397b0) call_muted_g

0xc2ca,	// (0x0003654d) main_mup2_pane

0xd30c,	// (0x0003758f) main_mup2_pane_g1_ParamLimits

0xd30c,	// (0x0003758f) main_mup2_pane_g1

0xd30c,	// (0x0003758f) main_mup2_pane_g2_ParamLimits

0xd30c,	// (0x0003758f) main_mup2_pane_g2

0x4517,	// (0x0002e79a) main_mup_pane_g13_cp1

0xb12a,	// (0x000353ad) mup_volume_pane_cp1

0xd30c,	// (0x0003758f) main_mup2_pane_g4_ParamLimits

0xd30c,	// (0x0003758f) main_mup2_pane_g4

0xd30c,	// (0x0003758f) main_mup2_pane_g5_ParamLimits

0xd30c,	// (0x0003758f) main_mup2_pane_g5

0xd30c,	// (0x0003758f) main_mup2_pane_g6_ParamLimits

0xd30c,	// (0x0003758f) main_mup2_pane_g6

0xd30c,	// (0x0003758f) main_mup2_pane_g7_ParamLimits

0xd30c,	// (0x0003758f) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x00039810) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x00039810) main_mup2_pane_g

0xd31a,	// (0x0003759d) main_mup2_pane_t1_ParamLimits

0xd31a,	// (0x0003759d) main_mup2_pane_t1

0xd31a,	// (0x0003759d) main_mup2_pane_t2_ParamLimits

0xd31a,	// (0x0003759d) main_mup2_pane_t2

0xd31a,	// (0x0003759d) main_mup2_pane_t3_ParamLimits

0xd31a,	// (0x0003759d) main_mup2_pane_t3

0xd31a,	// (0x0003759d) main_mup2_pane_t4_ParamLimits

0xd31a,	// (0x0003759d) main_mup2_pane_t4

0xd31a,	// (0x0003759d) main_mup2_pane_t5_ParamLimits

0xd31a,	// (0x0003759d) main_mup2_pane_t5

0xd31a,	// (0x0003759d) main_mup2_pane_t6_ParamLimits

0xd31a,	// (0x0003759d) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x0003981f) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x0003981f) main_mup2_pane_t

0xd32e,	// (0x000375b1) mup2_visualizer_pane_ParamLimits

0xd32e,	// (0x000375b1) mup2_visualizer_pane

0xd32e,	// (0x000375b1) mup_progress_pane_cp_ParamLimits

0xd32e,	// (0x000375b1) mup_progress_pane_cp

0xb3a1,	// (0x00035624) mup_volume_pane_cp_ParamLimits

0xb3a1,	// (0x00035624) mup_volume_pane_cp

0xc5ae,	// (0x00036831) mup2_visualizer_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) mup2_visualizer_pane_g1

0xc5bc,	// (0x0003683f) mup2_visualizer_pane_g2_ParamLimits

0xc5bc,	// (0x0003683f) mup2_visualizer_pane_g2

0xc5bc,	// (0x0003683f) mup2_visualizer_pane_g3_ParamLimits

0xc5bc,	// (0x0003683f) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00039322) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00039322) mup2_visualizer_pane_g

0xbead,	// (0x00036130) aid_size_cell_fmradio

0x0c05,	// (0x0002ae88) aid_height_parent_landcape

0xc973,	// (0x00036bf6) wml_content_pane_cp

0xc97b,	// (0x00036bfe) wml_tabs_pane

0xc984,	// (0x00036c07) popup_wml_miniature_window

0xc98c,	// (0x00036c0f) scroll_pane_cp021

0xc9a0,	// (0x00036c23) wml_content_pane_comp8

0xc2ca,	// (0x0003654d) bg_popup_sub_pane_cp05

0xe5f8,	// (0x0003887b) popup_wml_miniature_window_g1

0xe600,	// (0x00038883) wml_miniature_view_pane

0x446a,	// (0x0002e6ed) aid_size_wml_view

0x4472,	// (0x0002e6f5) wml_miniature_view_pane_g1

0x447b,	// (0x0002e6fe) wml_miniature_view_pane_g2

0x4484,	// (0x0002e707) wml_miniature_view_pane_g3

0x448c,	// (0x0002e70f) wml_miniature_view_pane_g4

0x4494,	// (0x0002e717) wml_miniature_view_pane_g5

0x449c,	// (0x0002e71f) wml_miniature_view_pane_g6

0x44a4,	// (0x0002e727) wml_miniature_view_pane_g7

0x44ac,	// (0x0002e72f) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x0003982c) wml_miniature_view_pane_g

0xe608,	// (0x0003888b) background_graphic_ParamLimits

0xe608,	// (0x0003888b) background_graphic

0xe614,	// (0x00038897) wml_tabs_2_pane

0xe61d,	// (0x000388a0) wml_tabs_3_pane_ParamLimits

0xe61d,	// (0x000388a0) wml_tabs_3_pane

0xe62f,	// (0x000388b2) wml_tabs_4_pane_ParamLimits

0xe62f,	// (0x000388b2) wml_tabs_4_pane

0xe645,	// (0x000388c8) wml_tabs_5_pane_ParamLimits

0xe645,	// (0x000388c8) wml_tabs_5_pane

0xe65f,	// (0x000388e2) wml_tabs_pane_g2_ParamLimits

0xe65f,	// (0x000388e2) wml_tabs_pane_g2

0xe674,	// (0x000388f7) wml_tabs_pane_g3_ParamLimits

0xe674,	// (0x000388f7) wml_tabs_pane_g3

0xe689,	// (0x0003890c) wml_tabs_2_active_pane_ParamLimits

0xe689,	// (0x0003890c) wml_tabs_2_active_pane

0xe689,	// (0x0003890c) wml_tabs_2_passive_pane_ParamLimits

0xe689,	// (0x0003890c) wml_tabs_2_passive_pane

0x44b4,	// (0x0002e737) wml_tabs_3_active_pane_cp_ParamLimits

0x44b4,	// (0x0002e737) wml_tabs_3_active_pane_cp

0x44c9,	// (0x0002e74c) wml_tabs_3_passive_pane_ParamLimits

0x44c9,	// (0x0002e74c) wml_tabs_3_passive_pane

0x44dc,	// (0x0002e75f) wml_tabs_3_passive_pane_cp_ParamLimits

0x44dc,	// (0x0002e75f) wml_tabs_3_passive_pane_cp

0x44f3,	// (0x0002e776) tabs_4_active_pane

0x44fb,	// (0x0002e77e) tabs_4_passive_pane

0x4505,	// (0x0002e788) tabs_4_passive_pane_cp

0x450d,	// (0x0002e790) tabs_4_passive_pane_cp2

0x401e,	// (0x0002e2a1) aid_height_text

0xd32e,	// (0x000375b1) mup_volume_cont_pane_ParamLimits

0xd32e,	// (0x000375b1) mup_volume_cont_pane

0xbead,	// (0x00036130) aid_size_cell_pinb

0xbead,	// (0x00036130) aid_size_list_pinb

0xd32e,	// (0x000375b1) mup2_volume_cont_pane_ParamLimits

0xd32e,	// (0x000375b1) mup2_volume_cont_pane

0xb38b,	// (0x0003560e) mup2_volume_cont_pane_g1_ParamLimits

0xb38b,	// (0x0003560e) mup2_volume_cont_pane_g1

0x0755,	// (0x0002a9d8) aid_size_cell_touch_ParamLimits

0x0755,	// (0x0002a9d8) aid_size_cell_touch

0x093c,	// (0x0002abbf) touch_pane_ParamLimits

0x093c,	// (0x0002abbf) touch_pane

0xb12a,	// (0x000353ad) main_rss2_pane

0xe6a0,	// (0x00038923) listscroll_rss2_pane

0xe6a9,	// (0x0003892c) rss2_navigation_pane

0xe6b1,	// (0x00038934) list_rss2_pane

0xd014,	// (0x00037297) scroll_pane_cp22

0xe6b9,	// (0x0003893c) rss2_navigation_pane_g1

0xe6c2,	// (0x00038945) rss2_navigation_pane_g2

0xe6ca,	// (0x0003894d) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x0003983d) rss2_navigation_pane_g

0xe6d2,	// (0x00038955) rss2_navigation_pane_t1

0x4521,	// (0x0002e7a4) rss2_list_single_pane_ParamLimits

0x4521,	// (0x0002e7a4) rss2_list_single_pane

0xe6e0,	// (0x00038963) rss2_list_single_pane_t2

0xe6ee,	// (0x00038971) rss2_list_single_pane_t3_ParamLimits

0xe6ee,	// (0x00038971) rss2_list_single_pane_t3

0xe70b,	// (0x0003898e) rss2_list_single_pane_t4

0x32ea,	// (0x0002d56d) smil_status_pane_g1

0xb11c,	// (0x0003539f) main_image2_pane_ParamLimits

0xb11c,	// (0x0003539f) main_image2_pane

0xb339,	// (0x000355bc) main_camera2_pane_g9_ParamLimits

0xb339,	// (0x000355bc) main_camera2_pane_g9

0x0ecf,	// (0x0002b152) main_camera2_pane_t5_ParamLimits

0x0ecf,	// (0x0002b152) main_camera2_pane_t5

0xb347,	// (0x000355ca) main_camera2_pane_t6_ParamLimits

0xb347,	// (0x000355ca) main_camera2_pane_t6

0x4536,	// (0x0002e7b9) main_image2_pane_g1_ParamLimits

0x4536,	// (0x0002e7b9) main_image2_pane_g1

0x3cf2,	// (0x0002df75) smil2_video_pane_ParamLimits

0x3cf2,	// (0x0002df75) smil2_video_pane

0xb0cb,	// (0x0003534e) aid_zoom_text_primary_cp

0xb112,	// (0x00035395) popup_preview_fixed_window

0xc8dc,	// (0x00036b5f) im_reading_pane_g1

0x0ec1,	// (0x0002b144) cams2_bc_adjust_pane_cp_ParamLimits

0x0ec1,	// (0x0002b144) cams2_bc_adjust_pane_cp

0xb36f,	// (0x000355f2) cams2_bc_adjust_pane_ParamLimits

0xb36f,	// (0x000355f2) cams2_bc_adjust_pane

0x4517,	// (0x0002e79a) cams2_bc_adjust_pane_g1

0xb12a,	// (0x000353ad) cams2_slider_pane

0x4517,	// (0x0002e79a) cams2_slider_pane_g1

0x4517,	// (0x0002e79a) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x00039844) cams2_slider_pane_g

0x09ac,	// (0x0002ac2f) calc_display_pane_ParamLimits

0x09d1,	// (0x0002ac54) calc_paper_pane_ParamLimits

0x09f4,	// (0x0002ac77) grid_calc_pane_ParamLimits

0xb250,	// (0x000354d3) popup_clock_digital_window_t1_ParamLimits

0xd4e4,	// (0x00037767) main_image_pane_t1

0x098e,	// (0x0002ac11) aid_size_cell_calc_ParamLimits

0x098e,	// (0x0002ac11) aid_size_cell_calc

0x0c5d,	// (0x0002aee0) popup_blid_sat_info2_window_ParamLimits

0x0c5d,	// (0x0002aee0) popup_blid_sat_info2_window

0xe719,	// (0x0003899c) aid_size_cell_blid

0xe721,	// (0x000389a4) bg_popup_window_pane_cp07

0xe744,	// (0x000389c7) grid_popup_blid_pane

0xe74e,	// (0x000389d1) heading_pane_cp05_ParamLimits

0xe74e,	// (0x000389d1) heading_pane_cp05

0xe818,	// (0x00038a9b) cell_popup_blid_pane_ParamLimits

0xe818,	// (0x00038a9b) cell_popup_blid_pane

0xe83c,	// (0x00038abf) cell_popup_blid_pane_g1

0xe844,	// (0x00038ac7) cell_popup_blid_pane_t1

0xd32e,	// (0x000375b1) mup2_indicator_pane_ParamLimits

0xd32e,	// (0x000375b1) mup2_indicator_pane

0xbead,	// (0x00036130) mup2_visualizer_osc_pane

0xe5e2,	// (0x00038865) mup2_visualizer_spec_pane_ParamLimits

0xe5e2,	// (0x00038865) mup2_visualizer_spec_pane

0xbead,	// (0x00036130) mup2_spec_half_pane

0xbead,	// (0x00036130) mup2_spec_half_pane_cp

0xe852,	// (0x00038ad5) mup2_spec_bar_pane_ParamLimits

0xe852,	// (0x00038ad5) mup2_spec_bar_pane

0xc5ec,	// (0x0003686f) mup2_spec_bar_pane_g1

0xe871,	// (0x00038af4) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x0003986a) mup2_spec_bar_pane_g

0xbead,	// (0x00036130) mup2_osc_middle_pane

0xc5ec,	// (0x0003686f) mup2_visualizer_osc_pane_g1

0xbed7,	// (0x0003615a) popup_number_entry_window_t1_ParamLimits

0xbeea,	// (0x0003616d) popup_number_entry_window_t2_ParamLimits

0xbefc,	// (0x0003617f) popup_number_entry_window_t3_ParamLimits

0x1bd5,	// (0x0002be58) popup_number_entry_window_t5_ParamLimits

0x1bd5,	// (0x0002be58) popup_number_entry_window_t5

0xf040,	// (0x000392c3) popup_number_entry_window_t_ParamLimits

0xbf0e,	// (0x00036191) text_title_cp2_ParamLimits

0xb28f,	// (0x00035512) aid_hotspot_pointer_text2_pane

0xb2a9,	// (0x0003552c) main_viewer_pane_g9_ParamLimits

0xb2a9,	// (0x0003552c) main_viewer_pane_g9

0xcb15,	// (0x00036d98) cale_month_pane_t1_ParamLimits

0xcb52,	// (0x00036dd5) bg_cale_pane_ParamLimits

0xcb6a,	// (0x00036ded) list_cale_pane_ParamLimits

0xcb7b,	// (0x00036dfe) listscroll_cale_day_pane_t1

0xcb8d,	// (0x00036e10) scroll_pane_cp09_ParamLimits

0x36b3,	// (0x0002d936) main_mup_eq_pane_t1_ParamLimits

0x36b3,	// (0x0002d936) main_mup_eq_pane_t1

0x36cd,	// (0x0002d950) main_mup_eq_pane_t2_ParamLimits

0x36cd,	// (0x0002d950) main_mup_eq_pane_t2

0x36e7,	// (0x0002d96a) main_mup_eq_pane_t3_ParamLimits

0x36e7,	// (0x0002d96a) main_mup_eq_pane_t3

0x3703,	// (0x0002d986) main_mup_eq_pane_t4_ParamLimits

0x3703,	// (0x0002d986) main_mup_eq_pane_t4

0x371f,	// (0x0002d9a2) main_mup_eq_pane_t5_ParamLimits

0x371f,	// (0x0002d9a2) main_mup_eq_pane_t5

0x373b,	// (0x0002d9be) main_mup_eq_pane_t6_ParamLimits

0x373b,	// (0x0002d9be) main_mup_eq_pane_t6

0x374f,	// (0x0002d9d2) main_mup_eq_pane_t7_ParamLimits

0x374f,	// (0x0002d9d2) main_mup_eq_pane_t7

0x3763,	// (0x0002d9e6) main_mup_eq_pane_t8_ParamLimits

0x3763,	// (0x0002d9e6) main_mup_eq_pane_t8

0x3777,	// (0x0002d9fa) main_mup_eq_pane_t9_ParamLimits

0x3777,	// (0x0002d9fa) main_mup_eq_pane_t9

0x3791,	// (0x0002da14) main_mup_eq_pane_t10_ParamLimits

0x3791,	// (0x0002da14) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0003961d) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0003961d) main_mup_eq_pane_t

0x3840,	// (0x0002dac3) mup_equalizer_pane_cp5_ParamLimits

0x3854,	// (0x0002dad7) mup_equalizer_pane_cp6_ParamLimits

0x3868,	// (0x0002daeb) mup_equalizer_pane_cp7_ParamLimits

0xb12a,	// (0x000353ad) main_gallery_pane

0xe580,	// (0x00038803) smil2_volume_pane

0xe588,	// (0x0003880b) smil_status_volume_pane_g1_ParamLimits

0xe59b,	// (0x0003881e) smil_status_volume_pane_g2_ParamLimits

0xb309,	// (0x0003558c) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x000397c3) smil_status_volume_pane_g_ParamLimits

0xe721,	// (0x000389a4) bg_popup_window_pane_cp07_ParamLimits

0xe72f,	// (0x000389b2) blid_firmament_pane

0xc547,	// (0x000367ca) aid_size_cell_gallery_ParamLimits

0xc547,	// (0x000367ca) aid_size_cell_gallery

0xc547,	// (0x000367ca) grid_gallery_pane_ParamLimits

0xc547,	// (0x000367ca) grid_gallery_pane

0xe721,	// (0x000389a4) cell_gallery_pane_ParamLimits

0xe721,	// (0x000389a4) cell_gallery_pane

0xc547,	// (0x000367ca) bg_cell_gallery_focus_pane_ParamLimits

0xc547,	// (0x000367ca) bg_cell_gallery_focus_pane

0xc5ae,	// (0x00036831) cell_gallery_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) cell_gallery_pane_g1

0xc5ae,	// (0x00036831) cell_gallery_pane_g2_ParamLimits

0xc5ae,	// (0x00036831) cell_gallery_pane_g2

0xc5ae,	// (0x00036831) cell_gallery_pane_g3_ParamLimits

0xc5ae,	// (0x00036831) cell_gallery_pane_g3

0xc5bc,	// (0x0003683f) cell_gallery_pane_g4_ParamLimits

0xc5bc,	// (0x0003683f) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x0003986f) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x0003986f) cell_gallery_pane_g

0xe87b,	// (0x00038afe) bg_cell_gallery_focus_pane_g1

0xe883,	// (0x00038b06) bg_cell_gallery_focus_pane_g2

0xe88b,	// (0x00038b0e) bg_cell_gallery_focus_pane_g3

0xe893,	// (0x00038b16) bg_cell_gallery_focus_pane_g4

0xe89b,	// (0x00038b1e) bg_cell_gallery_focus_pane_g5

0xe8a3,	// (0x00038b26) bg_cell_gallery_focus_pane_g6

0xe8ab,	// (0x00038b2e) bg_cell_gallery_focus_pane_g7

0xe8b3,	// (0x00038b36) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x00039878) bg_cell_gallery_focus_pane_g

0xe8bb,	// (0x00038b3e) aid_firma_cardinal

0xe8cf,	// (0x00038b52) blid_firmament_pane_t1

0xe8e6,	// (0x00038b69) blid_firmament_pane_t2

0xe8fd,	// (0x00038b80) blid_firmament_pane_t3

0xe914,	// (0x00038b97) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x00039889) blid_firmament_pane_t

0xe92b,	// (0x00038bae) blid_sat_info_pane

0xc5ec,	// (0x0003686f) blid_sat_info_pane_g1

0xc5ec,	// (0x0003686f) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00039332) blid_sat_info_pane_g

0xe95d,	// (0x00038be0) blid_sat_info_pane_t1

0xe96b,	// (0x00038bee) smil2_volume_content_pane

0xe974,	// (0x00038bf7) smil2_volume_pane_g1

0xc6c1,	// (0x00036944) smil2_volume_content_pane_g1

0xe97c,	// (0x00038bff) smil2_volume_content_pane_g2

0xe985,	// (0x00038c08) smil2_volume_content_pane_g3

0xe98e,	// (0x00038c11) smil2_volume_content_pane_g4

0xe997,	// (0x00038c1a) smil2_volume_content_pane_g5

0xe9a0,	// (0x00038c23) smil2_volume_content_pane_g6

0xe9a9,	// (0x00038c2c) smil2_volume_content_pane_g7

0xe9b2,	// (0x00038c35) smil2_volume_content_pane_g8

0xe9bb,	// (0x00038c3e) smil2_volume_content_pane_g9

0xe9c4,	// (0x00038c47) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x00039892) smil2_volume_content_pane_g

0x2017,	// (0x0002c29a) cale_week_day_heading_pane_t1_ParamLimits

0x2041,	// (0x0002c2c4) cale_week_day_heading_pane_t2_ParamLimits

0x2070,	// (0x0002c2f3) cale_week_day_heading_pane_t3_ParamLimits

0x209f,	// (0x0002c322) cale_week_day_heading_pane_t4_ParamLimits

0x20ce,	// (0x0002c351) cale_week_day_heading_pane_t5_ParamLimits

0x2105,	// (0x0002c388) cale_week_day_heading_pane_t6_ParamLimits

0x213c,	// (0x0002c3bf) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x000393ca) cale_week_day_heading_pane_t_ParamLimits

0xc7d1,	// (0x00036a54) bg_cale_side_pane_ParamLimits

0x0ad1,	// (0x0002ad54) cale_week_time_pane_t1_ParamLimits

0x0aeb,	// (0x0002ad6e) cale_week_time_pane_t2_ParamLimits

0x0b05,	// (0x0002ad88) cale_week_time_pane_t3_ParamLimits

0x0b1f,	// (0x0002ada2) cale_week_time_pane_t4_ParamLimits

0x0b39,	// (0x0002adbc) cale_week_time_pane_t5_ParamLimits

0x0b53,	// (0x0002add6) cale_week_time_pane_t6_ParamLimits

0x0b6d,	// (0x0002adf0) cale_week_time_pane_t7_ParamLimits

0x0b87,	// (0x0002ae0a) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x000393d9) cale_week_time_pane_t_ParamLimits

0x2166,	// (0x0002c3e9) cell_cale_week_pane_g2_ParamLimits

0xc7d1,	// (0x00036a54) bg_cale_side_pane_cp01_ParamLimits

0x311d,	// (0x0002d3a0) cale_month_week_pane_t1_ParamLimits

0x3136,	// (0x0002d3b9) cale_month_week_pane_t2_ParamLimits

0x314f,	// (0x0002d3d2) cale_month_week_pane_t3_ParamLimits

0x3168,	// (0x0002d3eb) cale_month_week_pane_t4_ParamLimits

0x3181,	// (0x0002d404) cale_month_week_pane_t5_ParamLimits

0x319a,	// (0x0002d41d) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x000394a7) cale_month_week_pane_t_ParamLimits

0xb1cc,	// (0x0003544f) cell_cale_month_pane_g1_ParamLimits

0xb12a,	// (0x000353ad) main_cale_event_viewer_pane

0xbead,	// (0x00036130) listscroll_cale_event_viewer_pane

0xe9cd,	// (0x00038c50) list_cale_ev_pane

0xe9d5,	// (0x00038c58) scroll_pane_cp023

0xe9e1,	// (0x00038c64) field_cale_ev_pane_ParamLimits

0xe9e1,	// (0x00038c64) field_cale_ev_pane

0xe9ff,	// (0x00038c82) field_cale_ev_content_pane_ParamLimits

0xe9ff,	// (0x00038c82) field_cale_ev_content_pane

0xea0b,	// (0x00038c8e) field_cale_ev_pane_g1_ParamLimits

0xea0b,	// (0x00038c8e) field_cale_ev_pane_g1

0xea17,	// (0x00038c9a) field_cale_ev_pane_g2_ParamLimits

0xea17,	// (0x00038c9a) field_cale_ev_pane_g2

0xea2f,	// (0x00038cb2) field_cale_ev_pane_g3_ParamLimits

0xea2f,	// (0x00038cb2) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x000398a7) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x000398a7) field_cale_ev_pane_g

0xea47,	// (0x00038cca) field_cale_ev_pane_t1_ParamLimits

0xea47,	// (0x00038cca) field_cale_ev_pane_t1

0xc744,	// (0x000369c7) field_cale_ev_content_pane_t1_ParamLimits

0xc744,	// (0x000369c7) field_cale_ev_content_pane_t1

0xd3d1,	// (0x00037654) bg_button_pane_cp01

0x1d44,	// (0x0002bfc7) listscroll_cale_week_pane_ParamLimits

0xc77c,	// (0x000369ff) popup_toolbar_window_cp01

0xc7a2,	// (0x00036a25) listscroll_cale_week_pane_t1_ParamLimits

0x1d44,	// (0x0002bfc7) listscroll_cale_day_pane_ParamLimits

0xc77c,	// (0x000369ff) popup_toolbar_window_cp02

0xcb7b,	// (0x00036dfe) listscroll_cale_day_pane_t1_ParamLimits

0x0c23,	// (0x0002aea6) main_cale_month_pane_ParamLimits

0xb2f4,	// (0x00035577) popup_toolbar_window_cp03_ParamLimits

0xb2f4,	// (0x00035577) popup_toolbar_window_cp03

0x3bba,	// (0x0002de3d) main_image_pane_g2_ParamLimits

0x3bba,	// (0x0002de3d) main_image_pane_g2

0x3bcb,	// (0x0002de4e) main_image_pane_g3_ParamLimits

0x3bcb,	// (0x0002de4e) main_image_pane_g3

0x0002,

0xf42c,	// (0x000396af) main_image_pane_g_ParamLimits

0xf42c,	// (0x000396af) main_image_pane_g

0xd4e4,	// (0x00037767) main_image_pane_t1_ParamLimits

0x3bdc,	// (0x0002de5f) main_image_pane_t2_ParamLimits

0x3bdc,	// (0x0002de5f) main_image_pane_t2

0x3bee,	// (0x0002de71) main_image_pane_t3_ParamLimits

0x3bee,	// (0x0002de71) main_image_pane_t3

0x3c16,	// (0x0002de99) main_image_pane_t4_ParamLimits

0x3c16,	// (0x0002de99) main_image_pane_t4

0x0003,

0xf433,	// (0x000396b6) main_image_pane_t_ParamLimits

0xf433,	// (0x000396b6) main_image_pane_t

0x3c36,	// (0x0002deb9) popup_image_details_window_cp01

0x3c40,	// (0x0002dec3) popup_toobar_trans_pane_cp01_ParamLimits

0x3c40,	// (0x0002dec3) popup_toobar_trans_pane_cp01

0x0d3c,	// (0x0002afbf) popup_image_details_window_ParamLimits

0x0d3c,	// (0x0002afbf) popup_image_details_window

0xb2c7,	// (0x0003554a) popup_image_focus_window

0xb32b,	// (0x000355ae) camera2_autofocus_pane_ParamLimits

0xb32b,	// (0x000355ae) camera2_autofocus_pane

0xbead,	// (0x00036130) bg_popup_sub_pane_cp06

0xea5e,	// (0x00038ce1) popup_image_focus_window_g1

0xea66,	// (0x00038ce9) popup_image_focus_window_g2

0xea6e,	// (0x00038cf1) popup_image_focus_window_g3

0xea76,	// (0x00038cf9) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x000398ae) popup_image_focus_window_g

0xea7e,	// (0x00038d01) popup_image_focus_window_t1

0xea8c,	// (0x00038d0f) popup_image_focus_window_t2

0xea9c,	// (0x00038d1f) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x000398b7) popup_image_focus_window_t

0xc5ae,	// (0x00036831) camera2_autofocus_pane_g1

0xc547,	// (0x000367ca) bg_tb_trans_pane_cp01

0xeaaa,	// (0x00038d2d) popup_image_details_window_g1

0xeabd,	// (0x00038d40) popup_image_details_window_g2

0x0002,

0xf646,	// (0x000398c9) popup_image_details_window_g

0xeae6,	// (0x00038d69) popup_image_details_window_t1

0xeaf8,	// (0x00038d7b) popup_image_details_window_t2

0xeb11,	// (0x00038d94) popup_image_details_window_t3

0xeb25,	// (0x00038da8) popup_image_details_window_t4

0xeb40,	// (0x00038dc3) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x000398d0) popup_image_details_window_t

0xc636,	// (0x000368b9) bg_calc_paper_pane_ParamLimits

0xb12a,	// (0x000353ad) grid_highlight_pane_cp013

0xb13c,	// (0x000353bf) list_calc_pane_ParamLimits

0xb14e,	// (0x000353d1) scroll_pane_cp024

0xc64a,	// (0x000368cd) bg_calc_display_pane_ParamLimits

0x0a22,	// (0x0002aca5) calc_display_pane_t1_ParamLimits

0x0a37,	// (0x0002acba) calc_display_pane_t2_ParamLimits

0xb156,	// (0x000353d9) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0003934a) calc_display_pane_t_ParamLimits

0x0a9b,	// (0x0002ad1e) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00039367) cell_calc_pane_g

0x0aa4,	// (0x0002ad27) cell_calc_pane_t1

0xc69f,	// (0x00036922) grid_highlight_pane_cp02_ParamLimits

0xc6b5,	// (0x00036938) toolbar_button_pane_cp01_ParamLimits

0xc6b5,	// (0x00036938) toolbar_button_pane_cp01

0xd529,	// (0x000377ac) temp_image_control_pane_ParamLimits

0xd529,	// (0x000377ac) temp_image_control_pane

0xb11c,	// (0x0003539f) main_mp3_pane

0xeb5a,	// (0x00038ddd) temp_image_control_pane_g1_ParamLimits

0xeb5a,	// (0x00038ddd) temp_image_control_pane_g1

0xeb68,	// (0x00038deb) temp_image_control_pane_g2_ParamLimits

0xeb68,	// (0x00038deb) temp_image_control_pane_g2

0xeb7a,	// (0x00038dfd) temp_image_control_pane_g3_ParamLimits

0xeb7a,	// (0x00038dfd) temp_image_control_pane_g3

0x454c,	// (0x0002e7cf) temp_image_control_pane_g4_ParamLimits

0x454c,	// (0x0002e7cf) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x000398db) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x000398db) temp_image_control_pane_g

0xeb5a,	// (0x00038ddd) main_mp3_pane_g1

0x455f,	// (0x0002e7e2) main_mp3_pane_g2

0x0007,

0xf661,	// (0x000398e4) main_mp3_pane_g

0xebaf,	// (0x00038e32) main_mp3_pane_t1

0xc5bc,	// (0x0003683f) main_camera_pane_g8_ParamLimits

0xc5bc,	// (0x0003683f) main_camera_pane_g8

0x2330,	// (0x0002c5b3) main_video_pane_g7_ParamLimits

0x2330,	// (0x0002c5b3) main_video_pane_g7

0xb35b,	// (0x000355de) main_camera2_pane_t7_ParamLimits

0xb35b,	// (0x000355de) main_camera2_pane_t7

0xc933,	// (0x00036bb6) scroll_pane_cp025_ParamLimits

0xc933,	// (0x00036bb6) scroll_pane_cp025

0xc947,	// (0x00036bca) scroll_pane_cp026_ParamLimits

0xc947,	// (0x00036bca) scroll_pane_cp026

0xc956,	// (0x00036bd9) wml_content_pane_ParamLimits

0xb12a,	// (0x000353ad) main_touch_calib_pane

0x4633,	// (0x0002e8b6) main_touch_calib_pane_g1

0x4645,	// (0x0002e8c8) main_touch_calib_pane_g2

0x4657,	// (0x0002e8da) main_touch_calib_pane_g3

0x4669,	// (0x0002e8ec) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x00039902) main_touch_calib_pane_g

0x467b,	// (0x0002e8fe) main_touch_calib_pane_t1

0x4695,	// (0x0002e918) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x0003990b) main_touch_calib_pane_t

0xd0f0,	// (0x00037373) mup_progress_pane_cp02

0xd125,	// (0x000373a8) navi_pane_g1

0xd1e0,	// (0x00037463) navi_pane_mp_t3

0xb11c,	// (0x0003539f) main_mp3_pane_ParamLimits

0x425a,	// (0x0002e4dd) navi_pane_ParamLimits

0xeb5a,	// (0x00038ddd) main_mp3_pane_g1_ParamLimits

0x455f,	// (0x0002e7e2) main_mp3_pane_g2_ParamLimits

0x456d,	// (0x0002e7f0) main_mp3_pane_g3_ParamLimits

0x456d,	// (0x0002e7f0) main_mp3_pane_g3

0x457b,	// (0x0002e7fe) main_mp3_pane_g4_ParamLimits

0x457b,	// (0x0002e7fe) main_mp3_pane_g4

0xc5ae,	// (0x00036831) main_mp3_pane_g5_ParamLimits

0xc5ae,	// (0x00036831) main_mp3_pane_g5

0xeb8a,	// (0x00038e0d) main_mp3_pane_g6_ParamLimits

0xeb8a,	// (0x00038e0d) main_mp3_pane_g6

0xeb97,	// (0x00038e1a) main_mp3_pane_g7_ParamLimits

0xeb97,	// (0x00038e1a) main_mp3_pane_g7

0xeba3,	// (0x00038e26) main_mp3_pane_g8_ParamLimits

0xeba3,	// (0x00038e26) main_mp3_pane_g8

0xf661,	// (0x000398e4) main_mp3_pane_g_ParamLimits

0x4587,	// (0x0002e80a) main_mp3_pane_t2

0x4595,	// (0x0002e818) main_mp3_pane_t3

0xebbd,	// (0x00038e40) main_mp3_pane_t4

0xebcb,	// (0x00038e4e) main_mp3_pane_t5

0x0005,

0xf672,	// (0x000398f5) main_mp3_pane_t

0xebd9,	// (0x00038e5c) mup_progress_pane_cp01

0xb0cb,	// (0x0003534e) aid_zoom_text_secondary2

0xe9cd,	// (0x00038c50) list_cale_ev2_pane

0xe9d5,	// (0x00038c58) scroll_pane_cp023_ParamLimits

0x46eb,	// (0x0002e96e) field_cale_ev2_pane_ParamLimits

0x46eb,	// (0x0002e96e) field_cale_ev2_pane

0x470b,	// (0x0002e98e) field_cale_ev2_pane_g1_ParamLimits

0x470b,	// (0x0002e98e) field_cale_ev2_pane_g1

0x4717,	// (0x0002e99a) field_cale_ev2_pane_g2_ParamLimits

0x4717,	// (0x0002e99a) field_cale_ev2_pane_g2

0x472f,	// (0x0002e9b2) field_cale_ev2_pane_g3_ParamLimits

0x472f,	// (0x0002e9b2) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x00039916) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x00039916) field_cale_ev2_pane_g

0x4747,	// (0x0002e9ca) field_cale_ev2_pane_t1_ParamLimits

0x4747,	// (0x0002e9ca) field_cale_ev2_pane_t1

0x475e,	// (0x0002e9e1) field_cale_ev2_pane_t2_ParamLimits

0x475e,	// (0x0002e9e1) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x0003991f) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x0003991f) field_cale_ev2_pane_t

0x3a90,	// (0x0002dd13) main_postcard_pane_g5_ParamLimits

0x3a90,	// (0x0002dd13) main_postcard_pane_g5

0x3aa6,	// (0x0002dd29) main_postcard_pane_g6_ParamLimits

0x3aa6,	// (0x0002dd29) main_postcard_pane_g6

0xc547,	// (0x000367ca) camera2_autofocus_pane_cp_ParamLimits

0xc547,	// (0x000367ca) camera2_autofocus_pane_cp

0xb11c,	// (0x0003539f) main_mup3_pane

0x47b7,	// (0x0002ea3a) main_mup3_pane_g1_ParamLimits

0x47b7,	// (0x0002ea3a) main_mup3_pane_g1

0x47d9,	// (0x0002ea5c) main_mup3_pane_g2_ParamLimits

0x47d9,	// (0x0002ea5c) main_mup3_pane_g2

0x4857,	// (0x0002eada) main_mup3_pane_g3_ParamLimits

0x4857,	// (0x0002eada) main_mup3_pane_g3

0x489d,	// (0x0002eb20) main_mup3_pane_g4_ParamLimits

0x489d,	// (0x0002eb20) main_mup3_pane_g4

0x48e3,	// (0x0002eb66) main_mup3_pane_g5_ParamLimits

0x48e3,	// (0x0002eb66) main_mup3_pane_g5

0x4929,	// (0x0002ebac) main_mup3_pane_g6_ParamLimits

0x4929,	// (0x0002ebac) main_mup3_pane_g6

0xc5bc,	// (0x0003683f) main_mup3_pane_g7_ParamLimits

0xc5bc,	// (0x0003683f) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x0003992f) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x0003992f) main_mup3_pane_g

0x49a7,	// (0x0002ec2a) main_mup3_pane_t1_ParamLimits

0x49a7,	// (0x0002ec2a) main_mup3_pane_t1

0x4a1b,	// (0x0002ec9e) main_mup3_pane_t2_ParamLimits

0x4a1b,	// (0x0002ec9e) main_mup3_pane_t2

0x4aef,	// (0x0002ed72) main_mup3_pane_t4_ParamLimits

0x4aef,	// (0x0002ed72) main_mup3_pane_t4

0x4b45,	// (0x0002edc8) main_mup3_pane_t5_ParamLimits

0x4b45,	// (0x0002edc8) main_mup3_pane_t5

0x4c01,	// (0x0002ee84) main_mup3_pane_t6_ParamLimits

0x4c01,	// (0x0002ee84) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x00039940) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x00039940) main_mup3_pane_t

0x4cb9,	// (0x0002ef3c) mup3_progress_pane_ParamLimits

0x4cb9,	// (0x0002ef3c) mup3_progress_pane

0x4d4f,	// (0x0002efd2) popup_mup3_control_window_ParamLimits

0x4d4f,	// (0x0002efd2) popup_mup3_control_window

0xebed,	// (0x00038e70) popup_mup3_text_window

0x4d81,	// (0x0002f004) mup3_progress_pane_t1

0x4da0,	// (0x0002f023) mup3_progress_pane_t2

0xebf5,	// (0x00038e78) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x0003994d) mup3_progress_pane_t

0xec12,	// (0x00038e95) mup_progress_pane_cp03

0xbead,	// (0x00036130) bg_tb_trans_pane_cp04

0x4dbf,	// (0x0002f042) mup3_volume_pane

0x4dc7,	// (0x0002f04a) popup_mup3_control_window_g1

0x4dd0,	// (0x0002f053) mup3_volume_pane_g1

0x4dd9,	// (0x0002f05c) mup3_volume_pane_g2

0x4de2,	// (0x0002f065) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x00039954) mup3_volume_pane_g

0xbead,	// (0x00036130) bg_tb_trans_pane_cp03

0xec22,	// (0x00038ea5) popup_mup3_text_window_g1

0xec2a,	// (0x00038ead) popup_mup3_text_window_t1

0xc692,	// (0x00036915) list_calc_item_pane_g1_ParamLimits

0xe697,	// (0x0003891a) mup_volume_pane_cp_g1

0x46af,	// (0x0002e932) main_touch_calib_pane_t3

0x46c3,	// (0x0002e946) main_touch_calib_pane_t4

0x46d7,	// (0x0002e95a) main_touch_calib_pane_t5

0xb0b7,	// (0x0003533a) aid_cell_size_toolbar2

0xb0bf,	// (0x00035342) aid_popup3_width_pane

0xb0cb,	// (0x0003534e) aid_zoom_text_msg_primary

0x220b,	// (0x0002c48e) vorec_t7

0xc656,	// (0x000368d9) bg_calc_paper_pane_g1_ParamLimits

0xc662,	// (0x000368e5) bg_calc_paper_pane_g2_ParamLimits

0xc66e,	// (0x000368f1) bg_calc_paper_pane_g3_ParamLimits

0xc67a,	// (0x000368fd) bg_calc_paper_pane_g4_ParamLimits

0xc686,	// (0x00036909) bg_calc_paper_pane_g5_ParamLimits

0x1c41,	// (0x0002bec4) bg_calc_paper_pane_g6_ParamLimits

0x1c50,	// (0x0002bed3) bg_calc_paper_pane_g7_ParamLimits

0x1c5f,	// (0x0002bee2) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00039351) bg_calc_paper_pane_g_ParamLimits

0x1c72,	// (0x0002bef5) calc_bg_paper_pane_g9_ParamLimits

0xc547,	// (0x000367ca) image_qvga_pane_ParamLimits

0xc547,	// (0x000367ca) image_qvga_pane

0xc525,	// (0x000367a8) bg_popup_sub_pane_cp04_ParamLimits

0xd460,	// (0x000376e3) popup_mup_playback_window_g1_ParamLimits

0xd46c,	// (0x000376ef) popup_mup_playback_window_t1_ParamLimits

0xd481,	// (0x00037704) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000396aa) popup_mup_playback_window_t_ParamLimits

0xc5bc,	// (0x0003683f) main_mup2_pane_g3_ParamLimits

0xc5bc,	// (0x0003683f) main_mup2_pane_g3

0x24eb,	// (0x0002c76e) popup_toolbar_window_cp04

0xd7f2,	// (0x00037a75) popup_call2_audio_second_window_g3_ParamLimits

0xd7f2,	// (0x00037a75) popup_call2_audio_second_window_g3

0xdc0a,	// (0x00037e8d) popup_call2_audio_first_window_g4_ParamLimits

0xdc0a,	// (0x00037e8d) popup_call2_audio_first_window_g4

0xe231,	// (0x000384b4) popup_call2_audio_in_window_g4_ParamLimits

0xe231,	// (0x000384b4) popup_call2_audio_in_window_g4

0x3b9c,	// (0x0002de1f) aid_area_sk_bg_cut_ParamLimits

0x3b9c,	// (0x0002de1f) aid_area_sk_bg_cut

0xd496,	// (0x00037719) aid_area_sk_bg_cut_2_ParamLimits

0xd496,	// (0x00037719) aid_area_sk_bg_cut_2

0xbead,	// (0x00036130) aid_placing_details_win

0xbead,	// (0x00036130) aid_placing_details_win_2

0xc5ae,	// (0x00036831) camera2_autofocus_pane_g1_ParamLimits

0x08e1,	// (0x0002ab64) popup_fixed_preview_cale_window_ParamLimits

0x08e1,	// (0x0002ab64) popup_fixed_preview_cale_window

0xd25e,	// (0x000374e1) navi_slider_pane_g3

0xd267,	// (0x000374ea) navi_slider_pane_g4

0xd270,	// (0x000374f3) navi_slider_pane_g5

0xd25e,	// (0x000374e1) navi_slider_pane_g6

0xb276,	// (0x000354f9) navi_slider_pane_g7

0xd39e,	// (0x00037621) mup_scale_pane_g3

0xd3a7,	// (0x0003762a) mup_scale_pane_g4

0xd3b0,	// (0x00037633) mup_scale_pane_g5

0x387c,	// (0x0002daff) mup_scale_pane_g6

0x3885,	// (0x0002db08) mup_scale_pane_g7

0x4517,	// (0x0002e79a) cams2_slider_pane_g3

0x4517,	// (0x0002e79a) cams2_slider_pane_g4

0x4517,	// (0x0002e79a) cams2_slider_pane_g5

0x4517,	// (0x0002e79a) cams2_slider_pane_g6

0x4517,	// (0x0002e79a) cams2_slider_pane_g7

0xc5ec,	// (0x0003686f) camera2_autofocus_pane_cp_g1

0xe507,	// (0x0003878a) bg_popup_preview_window_pane_cp02_ParamLimits

0xe507,	// (0x0003878a) bg_popup_preview_window_pane_cp02

0xec38,	// (0x00038ebb) list_fp_cale_pane_ParamLimits

0xec38,	// (0x00038ebb) list_fp_cale_pane

0xec44,	// (0x00038ec7) popup_fixed_preview_cale_window_t1_ParamLimits

0xec44,	// (0x00038ec7) popup_fixed_preview_cale_window_t1

0x4deb,	// (0x0002f06e) popup_fixed_preview_cale_window_t2_ParamLimits

0x4deb,	// (0x0002f06e) popup_fixed_preview_cale_window_t2

0x4e00,	// (0x0002f083) popup_fixed_preview_cale_window_t3_ParamLimits

0x4e00,	// (0x0002f083) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x0003995b) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x0003995b) popup_fixed_preview_cale_window_t

0x4e15,	// (0x0002f098) list_single_fp_cale_pane_ParamLimits

0x4e15,	// (0x0002f098) list_single_fp_cale_pane

0xec62,	// (0x00038ee5) list_single_fp_cale_pane_g1_ParamLimits

0xec62,	// (0x00038ee5) list_single_fp_cale_pane_g1

0xec6e,	// (0x00038ef1) list_single_fp_cale_pane_g2_ParamLimits

0xec6e,	// (0x00038ef1) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x00039962) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x00039962) list_single_fp_cale_pane_g

0xec87,	// (0x00038f0a) list_single_fp_cale_pane_t1_ParamLimits

0xec87,	// (0x00038f0a) list_single_fp_cale_pane_t1

0xec99,	// (0x00038f1c) list_single_fp_cale_pane_t2_ParamLimits

0xec99,	// (0x00038f1c) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x00039969) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x00039969) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb12a,	// (0x000353ad) main_dialer_pane

0xbead,	// (0x00036130) aid_cell_size_keypad

0xbead,	// (0x00036130) dialer_ne_pane

0xbead,	// (0x00036130) grid_dialer_command_1_pane

0xbead,	// (0x00036130) grid_dialer_command_2_pane

0xbead,	// (0x00036130) grid_dialer_keypad_pane

0x4e2a,	// (0x0002f0ad) bg_popup_call_pane_cp06_ParamLimits

0x4e2a,	// (0x0002f0ad) bg_popup_call_pane_cp06

0x4e2a,	// (0x0002f0ad) dialer_ne_clear_pane_ParamLimits

0x4e2a,	// (0x0002f0ad) dialer_ne_clear_pane

0xc5ec,	// (0x0003686f) dialer_ne_pane_g1

0xc60a,	// (0x0003688d) dialer_ne_pane_t1_ParamLimits

0xc60a,	// (0x0003688d) dialer_ne_pane_t1

0x4e38,	// (0x0002f0bb) dialer_ne_pane_t2_ParamLimits

0x4e38,	// (0x0002f0bb) dialer_ne_pane_t2

0x4e60,	// (0x0002f0e3) dialer_ne_pane_t3_ParamLimits

0x4e60,	// (0x0002f0e3) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x0003996e) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x0003996e) dialer_ne_pane_t

0x4e60,	// (0x0002f0e3) dialer_ne_pane_t3_copy1_ParamLimits

0x4e60,	// (0x0002f0e3) dialer_ne_pane_t3_copy1

0xeccc,	// (0x00038f4f) cell_dialer_keypad_pane_ParamLimits

0xeccc,	// (0x00038f4f) cell_dialer_keypad_pane

0xc547,	// (0x000367ca) cell_dialer_command_1_pane_ParamLimits

0xc547,	// (0x000367ca) cell_dialer_command_1_pane

0xece3,	// (0x00038f66) cell_dialer_command_2_pane_ParamLimits

0xece3,	// (0x00038f66) cell_dialer_command_2_pane

0xc547,	// (0x000367ca) bg_button_pane_cp02_ParamLimits

0xc547,	// (0x000367ca) bg_button_pane_cp02

0xc5ae,	// (0x00036831) cell_dialer_keypad_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) cell_dialer_keypad_pane_g1

0xc547,	// (0x000367ca) bg_button_pane_cp03_ParamLimits

0xc547,	// (0x000367ca) bg_button_pane_cp03

0xc5ae,	// (0x00036831) cell_dialer_command_1_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) cell_dialer_command_1_pane_g1

0xbead,	// (0x00036130) bg_button_pane_cp04

0xc5ec,	// (0x0003686f) cell_dialer_command_2_pane_g1

0xbead,	// (0x00036130) bg_button_pane_cp06

0xc5ec,	// (0x0003686f) dialer_ne_clear_pane_g1

0xd131,	// (0x000373b4) navi_pane_g2

0xd15f,	// (0x000373e2) navi_pane_g3

0x0002,

0xf32f,	// (0x000395b2) navi_pane_g

0xd1ee,	// (0x00037471) navi_pane_mv_g2

0xd215,	// (0x00037498) navi_pane_mv_g5

0x365f,	// (0x0002d8e2) navi_pane_mv_t1

0xc64a,	// (0x000368cd) main_clock2_pane

0xc547,	// (0x000367ca) main_clock2_list_pane_ParamLimits

0xc547,	// (0x000367ca) main_clock2_list_pane

0x4ef6,	// (0x0002f179) main_clock2_pane_t1_ParamLimits

0x4ef6,	// (0x0002f179) main_clock2_pane_t1

0x4f31,	// (0x0002f1b4) main_clock2_pane_t2_ParamLimits

0x4f31,	// (0x0002f1b4) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x0003997a) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x0003997a) main_clock2_pane_t

0x4fd1,	// (0x0002f254) popup_clock_analogue_window_cp03_ParamLimits

0x4fd1,	// (0x0002f254) popup_clock_analogue_window_cp03

0x4ff6,	// (0x0002f279) popup_clock_digital_window_cp02_ParamLimits

0x4ff6,	// (0x0002f279) popup_clock_digital_window_cp02

0x503a,	// (0x0002f2bd) main_clock2_list_single_pane_ParamLimits

0x503a,	// (0x0002f2bd) main_clock2_list_single_pane

0xc823,	// (0x00036aa6) list_highlight_pane_cp05

0xed2a,	// (0x00038fad) main_clock2_list_single_pane_t1

0x24eb,	// (0x0002c76e) popup_toolbar_window_cp04_ParamLimits

0xc5bc,	// (0x0003683f) camera2_autofocus_pane_g2_ParamLimits

0xc5bc,	// (0x0003683f) camera2_autofocus_pane_g2

0xc5bc,	// (0x0003683f) camera2_autofocus_pane_g3_ParamLimits

0xc5bc,	// (0x0003683f) camera2_autofocus_pane_g3

0xc5bc,	// (0x0003683f) camera2_autofocus_pane_g4_ParamLimits

0xc5bc,	// (0x0003683f) camera2_autofocus_pane_g4

0xc5bc,	// (0x0003683f) camera2_autofocus_pane_g5_ParamLimits

0xc5bc,	// (0x0003683f) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x000398be) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x000398be) camera2_autofocus_pane_g

0x4773,	// (0x0002e9f6) camera2_autofocus_pane_cp_g2

0x477b,	// (0x0002e9fe) camera2_autofocus_pane_cp_g3

0x4783,	// (0x0002ea06) camera2_autofocus_pane_cp_g4

0x478b,	// (0x0002ea0e) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x00039924) camera2_autofocus_pane_cp_g

0xbead,	// (0x00036130) popup_dialer_spcha_window

0xbead,	// (0x00036130) bg_popup_sub_pane_cp07

0xbead,	// (0x00036130) list_spcha_pane

0xed38,	// (0x00038fbb) list_single_spcha_pane_ParamLimits

0xed38,	// (0x00038fbb) list_single_spcha_pane

0xbead,	// (0x00036130) list_highlight_pane_cp06

0xcd66,	// (0x00036fe9) list_single_spcha_pane_t1

0xdfdb,	// (0x0003825e) popup_call2_audio_out_window_g4_ParamLimits

0xdfdb,	// (0x0003825e) popup_call2_audio_out_window_g4

0xb12a,	// (0x000353ad) main_imed2_pane

0xb2cf,	// (0x00035552) popup_imed_adjust2_window

0x0d54,	// (0x0002afd7) popup_imed_trans_window_ParamLimits

0x0d54,	// (0x0002afd7) popup_imed_trans_window

0xe77a,	// (0x000389fd) popup_blid_sat_info2_window_t1

0xe788,	// (0x00038a0b) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x00039853) popup_blid_sat_info2_window_t

0x504c,	// (0x0002f2cf) aid_size_cell_colour_35

0x506c,	// (0x0002f2ef) aid_size_cell_colour_112

0x508c,	// (0x0002f30f) aid_size_cell_effect

0xd32e,	// (0x000375b1) bg_tb_trans_pane_cp02

0xcc8c,	// (0x00036f0f) heading_imed_pane

0x50ac,	// (0x0002f32f) listscroll_imed_pane

0xed4a,	// (0x00038fcd) heading_imed_pane_g1

0xed52,	// (0x00038fd5) heading_imed_pane_t1

0xed60,	// (0x00038fe3) grid_imed_colour_35_pane_ParamLimits

0xed60,	// (0x00038fe3) grid_imed_colour_35_pane

0x50b8,	// (0x0002f33b) grid_imed_effect_pane

0xed77,	// (0x00038ffa) list_imed_aspect_pane

0x50ce,	// (0x0002f351) scroll_pane_cp027_ParamLimits

0x50ce,	// (0x0002f351) scroll_pane_cp027

0x50df,	// (0x0002f362) cell_imed_effect_pane_ParamLimits

0x50df,	// (0x0002f362) cell_imed_effect_pane

0xed7f,	// (0x00039002) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x00039002) cell_imed_colour_pane

0xedc1,	// (0x00039044) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x00039044) cell_imed_colour_pane_g1

0xedd2,	// (0x00039055) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x00039055) hgihlgiht_grid_pane_cp016

0x5106,	// (0x0002f389) cell_imed_effect_pane_g1

0x510e,	// (0x0002f391) grid_highlight_pane_cp017

0xede3,	// (0x00039066) list_imed_single_pane_ParamLimits

0xede3,	// (0x00039066) list_imed_single_pane

0xbead,	// (0x00036130) list_highlight_pane_cp07

0xedf8,	// (0x0003907b) list_imed_aspect_pane_comp1_t1

0xd32e,	// (0x000375b1) bg_tb_trans_pane_cp05

0xee1a,	// (0x0003909d) popup_imed_adjust2_window_g1

0xee41,	// (0x000390c4) popup_imed_adjust2_window_t1

0xee59,	// (0x000390dc) slider_imed_adjust_pane

0xee6d,	// (0x000390f0) slider_imed_adjust_pane_g1

0xee7d,	// (0x00039100) slider_imed_adjust_pane_g2

0xee8d,	// (0x00039110) slider_imed_adjust_pane_g3

0xee9e,	// (0x00039121) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x00039997) slider_imed_adjust_pane_g

0x5117,	// (0x0002f39a) aid_size_cell_clipart2

0x5123,	// (0x0002f3a6) grid_imed_clipart_pane

0xd3c1,	// (0x00037644) scroll_pane_cp031

0x512d,	// (0x0002f3b0) cell_imed_clipart_pane_ParamLimits

0x512d,	// (0x0002f3b0) cell_imed_clipart_pane

0x514f,	// (0x0002f3d2) cell_imed_clipart_pane_g1

0xbead,	// (0x00036130) grid_highlight_pane_cp014

0x4ed2,	// (0x0002f155) main_clock2_pane_g1_ParamLimits

0x4ed2,	// (0x0002f155) main_clock2_pane_g1

0x5016,	// (0x0002f299) aid_call2_pane_cp10

0x5028,	// (0x0002f2ab) aid_call_pane_cp10

0xd092,	// (0x00037315) popup_clock_analogue_window_cp10_g1

0xd092,	// (0x00037315) popup_clock_analogue_window_cp10_g2

0x0f13,	// (0x0002b196) popup_clock_analogue_window_cp10_g3

0x0f13,	// (0x0002b196) popup_clock_analogue_window_cp10_g4

0xd092,	// (0x00037315) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x00039985) popup_clock_analogue_window_cp10_g

0x0f29,	// (0x0002b1ac) popup_clock_analogue_window_cp10_t1

0x0f48,	// (0x0002b1cb) clock_digital_number_pane_cp10_ParamLimits

0x0f48,	// (0x0002b1cb) clock_digital_number_pane_cp10

0x0f60,	// (0x0002b1e3) clock_digital_number_pane_cp11_ParamLimits

0x0f60,	// (0x0002b1e3) clock_digital_number_pane_cp11

0x0f78,	// (0x0002b1fb) clock_digital_number_pane_cp12_ParamLimits

0x0f78,	// (0x0002b1fb) clock_digital_number_pane_cp12

0x0f92,	// (0x0002b215) clock_digital_number_pane_cp13_ParamLimits

0x0f92,	// (0x0002b215) clock_digital_number_pane_cp13

0x0fac,	// (0x0002b22f) clock_digital_separator_pane_cp10_ParamLimits

0x0fac,	// (0x0002b22f) clock_digital_separator_pane_cp10

0x0fc6,	// (0x0002b249) popup_clock_digital_window_cp02_t1_ParamLimits

0x0fc6,	// (0x0002b249) popup_clock_digital_window_cp02_t1

0xc51d,	// (0x000367a0) clock_digital_number_pane_cp10_g1

0xc51d,	// (0x000367a0) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x000399a0) clock_digital_number_pane_cp10_g

0xc51d,	// (0x000367a0) clock_digital_separator_pane_cp10_g1

0xc51d,	// (0x000367a0) clock_digital_separator_pane_g2_cp10

0xd21d,	// (0x000374a0) navi_pane_vded_g4

0xd226,	// (0x000374a9) navi_pane_vded_g5

0xd22f,	// (0x000374b2) navi_pane_vded_t1

0xb12a,	// (0x000353ad) main_vded_pane

0x5158,	// (0x0002f3db) main_vded_pane_g1

0x5162,	// (0x0002f3e5) main_vded_pane_g2

0x516c,	// (0x0002f3ef) main_vded_pane_g3

0x0002,

0xf722,	// (0x000399a5) main_vded_pane_g

0x5176,	// (0x0002f3f9) main_vded_pane_t1

0x5184,	// (0x0002f407) main_vded_pane_t2

0x0001,

0xf729,	// (0x000399ac) main_vded_pane_t

0x5192,	// (0x0002f415) vded_slider_pane

0x519a,	// (0x0002f41d) vded_video_pane

0xeeaf,	// (0x00039132) vded_video_pane_g1

0x51a2,	// (0x0002f425) vded_video_pane_g2

0xc5ec,	// (0x0003686f) vded_video_pane_g3

0x0002,

0xf72e,	// (0x000399b1) vded_video_pane_g

0xeeb9,	// (0x0003913c) vded_slider_pane_g1

0xe697,	// (0x0003891a) vded_slider_pane_g2

0xeec2,	// (0x00039145) vded_slider_pane_g3

0xeecb,	// (0x0003914e) vded_slider_pane_g4

0xeed4,	// (0x00039157) vded_slider_pane_g5

0x0004,

0xf735,	// (0x000399b8) vded_slider_pane_g

0x4d37,	// (0x0002efba) mup3_rocker_pane_ParamLimits

0x4d37,	// (0x0002efba) mup3_rocker_pane

0x51ab,	// (0x0002f42e) mup3_control_keys_pane_g1

0x51b3,	// (0x0002f436) mup3_control_keys_pane_g2

0x51bb,	// (0x0002f43e) mup3_control_keys_pane_g3

0x51c3,	// (0x0002f446) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x000399c3) mup3_control_keys_pane_g

0x0918,	// (0x0002ab9b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0918,	// (0x0002ab9b) popup_toolbar2_fixed_window_cp01

0x4d6b,	// (0x0002efee) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4d6b,	// (0x0002efee) popup_toolbar2_fixed_window_cp02

0xd964,	// (0x00037be7) popup_call2_audio_second_window_t4_ParamLimits

0xd964,	// (0x00037be7) popup_call2_audio_second_window_t4

0xdea0,	// (0x00038123) popup_call2_audio_first_window_t6_ParamLimits

0xdea0,	// (0x00038123) popup_call2_audio_first_window_t6

0xe0de,	// (0x00038361) popup_call2_audio_out_window_t6_ParamLimits

0xe0de,	// (0x00038361) popup_call2_audio_out_window_t6

0xb12a,	// (0x000353ad) main_vitu_pane

0xc547,	// (0x000367ca) aid_size_cell_itu_ParamLimits

0xc547,	// (0x000367ca) aid_size_cell_itu

0xc547,	// (0x000367ca) bg_popup_window_pane_cp08_ParamLimits

0xc547,	// (0x000367ca) bg_popup_window_pane_cp08

0xc547,	// (0x000367ca) field_vitu_entry_pane_ParamLimits

0xc547,	// (0x000367ca) field_vitu_entry_pane

0xc547,	// (0x000367ca) grid_vitu_function_pane_ParamLimits

0xc547,	// (0x000367ca) grid_vitu_function_pane

0xc547,	// (0x000367ca) grid_vitu_itu_pane_ParamLimits

0xc547,	// (0x000367ca) grid_vitu_itu_pane

0xc547,	// (0x000367ca) cell_vitu_itu_pane_ParamLimits

0xc547,	// (0x000367ca) cell_vitu_itu_pane

0xc547,	// (0x000367ca) cell_vitu_function_pane_ParamLimits

0xc547,	// (0x000367ca) cell_vitu_function_pane

0xc547,	// (0x000367ca) bg_popup_sub_pane_cp08_ParamLimits

0xc547,	// (0x000367ca) bg_popup_sub_pane_cp08

0xc5f6,	// (0x00036879) field_vitu_entry_pane_t1_ParamLimits

0xc5f6,	// (0x00036879) field_vitu_entry_pane_t1

0xeedd,	// (0x00039160) field_vitu_entry_pane_t2_ParamLimits

0xeedd,	// (0x00039160) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x000399cc) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x000399cc) field_vitu_entry_pane_t

0xe721,	// (0x000389a4) bg_button_pane_cp05_ParamLimits

0xe721,	// (0x000389a4) bg_button_pane_cp05

0xeefa,	// (0x0003917d) cell_vitu_itu_pane_g1

0xd31a,	// (0x0003759d) cell_vitu_itu_pane_t1_ParamLimits

0xd31a,	// (0x0003759d) cell_vitu_itu_pane_t1

0xd31a,	// (0x0003759d) cell_vitu_itu_pane_t2_ParamLimits

0xd31a,	// (0x0003759d) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x000399d1) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x000399d1) cell_vitu_itu_pane_t

0xbead,	// (0x00036130) bg_button_pane_cp07

0xc5ec,	// (0x0003686f) cell_vitu_function_pane_g1

0xb134,	// (0x000353b7) main_calc_pane_g1

0x0779,	// (0x0002a9fc) aid_visual_content_pane

0xb12a,	// (0x000353ad) main_vradio_pane

0xc5ae,	// (0x00036831) main_vradio_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) main_vradio_pane_g1

0xc5bc,	// (0x0003683f) main_vradio_pane_g2_ParamLimits

0xc5bc,	// (0x0003683f) main_vradio_pane_g2

0x0001,

0x049c,	// (0x0002a71f) main_vradio_pane_g_ParamLimits

0x049c,	// (0x0002a71f) main_vradio_pane_g

0xc5f6,	// (0x00036879) main_vradio_pane_t1_ParamLimits

0xc5f6,	// (0x00036879) main_vradio_pane_t1

0xc5f6,	// (0x00036879) main_vradio_pane_t2_ParamLimits

0xc5f6,	// (0x00036879) main_vradio_pane_t2

0xc60a,	// (0x0003688d) main_vradio_pane_t3_ParamLimits

0xc60a,	// (0x0003688d) main_vradio_pane_t3

0x0002,

0xf755,	// (0x000399d8) main_vradio_pane_t_ParamLimits

0xf755,	// (0x000399d8) main_vradio_pane_t

0xc547,	// (0x000367ca) vradio_rocker_control_pane_ParamLimits

0xc547,	// (0x000367ca) vradio_rocker_control_pane

0xc547,	// (0x000367ca) vradio_station_info_pane_ParamLimits

0xc547,	// (0x000367ca) vradio_station_info_pane

0xc547,	// (0x000367ca) vradio_frequency_info_pane_ParamLimits

0xc547,	// (0x000367ca) vradio_frequency_info_pane

0xc5ec,	// (0x0003686f) vradio_station_info_pane_g1

0xd31a,	// (0x0003759d) vradio_station_info_pane_t1_ParamLimits

0xd31a,	// (0x0003759d) vradio_station_info_pane_t1

0xc60a,	// (0x0003688d) vradio_station_info_pane_t2_ParamLimits

0xc60a,	// (0x0003688d) vradio_station_info_pane_t2

0x0001,

0xf75c,	// (0x000399df) vradio_station_info_pane_t_ParamLimits

0xf75c,	// (0x000399df) vradio_station_info_pane_t

0xbead,	// (0x00036130) vradio_tuning_pane

0x51d3,	// (0x0002f456) vradio_rocker_control_pane_g1

0xef16,	// (0x00039199) vradio_rocker_control_pane_g2

0x51dd,	// (0x0002f460) vradio_rocker_control_pane_g3

0x51e7,	// (0x0002f46a) vradio_rocker_control_pane_g4

0x51f1,	// (0x0002f474) vradio_rocker_control_pane_g5

0x0004,

0xf761,	// (0x000399e4) vradio_rocker_control_pane_g

0xc5ec,	// (0x0003686f) vradio_frequency_info_pane_g1

0xc5f6,	// (0x00036879) vradio_frequency_info_pane_t1_ParamLimits

0xc5f6,	// (0x00036879) vradio_frequency_info_pane_t1

0x51fb,	// (0x0002f47e) vradio_tuning_pane_g1

0x5208,	// (0x0002f48b) vradio_tuning_pane_t1

0xb0db,	// (0x0003535e) area_side_right_pane_ParamLimits

0xb0db,	// (0x0003535e) area_side_right_pane

0xe4ce,	// (0x00038751) status_small_pane_g1

0xe4d6,	// (0x00038759) status_small_pane_g2

0xe4df,	// (0x00038762) status_small_pane_g3

0xe4e8,	// (0x0003876b) status_small_pane_g4

0x0003,

0xf532,	// (0x000397b5) status_small_pane_g

0xe4f1,	// (0x00038774) status_small_pane_t1

0xb12a,	// (0x000353ad) main_video3_pane

0xbead,	// (0x00036130) cams_zoom_vslider_pane

0xef1e,	// (0x000391a1) image3_wide_pane_ParamLimits

0xef1e,	// (0x000391a1) image3_wide_pane

0xbead,	// (0x00036130) image3_wide_small_pane

0xef38,	// (0x000391bb) main_video3_pane_g1_ParamLimits

0xef38,	// (0x000391bb) main_video3_pane_g1

0xef38,	// (0x000391bb) main_video3_pane_g2_ParamLimits

0xef38,	// (0x000391bb) main_video3_pane_g2

0x0001,

0x002c,	// (0x0002a2af) main_video3_pane_g_ParamLimits

0x002c,	// (0x0002a2af) main_video3_pane_g

0xef56,	// (0x000391d9) main_video3_pane_t1_ParamLimits

0xef56,	// (0x000391d9) main_video3_pane_t1

0xef56,	// (0x000391d9) main_video3_pane_t2_ParamLimits

0xef56,	// (0x000391d9) main_video3_pane_t2

0xef56,	// (0x000391d9) main_video3_pane_t3_ParamLimits

0xef56,	// (0x000391d9) main_video3_pane_t3

0x0002,

0x0031,	// (0x0002a2b4) main_video3_pane_t_ParamLimits

0x0031,	// (0x0002a2b4) main_video3_pane_t

0xc5ec,	// (0x0003686f) cams_zoom_vslider_pane_g1

0xc5ec,	// (0x0003686f) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00039332) cams_zoom_vslider_pane_g

0xbead,	// (0x00036130) small_slider_vertical_pane

0xc5ec,	// (0x0003686f) small_slider_vertical_pane_g1

0xc5ec,	// (0x0003686f) small_slider_vertical_pane_g2

0xef7d,	// (0x00039200) small_slider_vertical_pane_g3

0x0002,

0x0038,	// (0x0002a2bb) small_slider_vertical_pane_g

0xb12a,	// (0x000353ad) main_hwr_training_pane

0xef86,	// (0x00039209) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x00039209) hwr_training_instruct_pane

0x5217,	// (0x0002f49a) hwr_training_navi_pane_ParamLimits

0x5217,	// (0x0002f49a) hwr_training_navi_pane

0x5236,	// (0x0002f4b9) hwr_training_write_pane_ParamLimits

0x5236,	// (0x0002f4b9) hwr_training_write_pane

0xbead,	// (0x00036130) bg_frame_shadow_pane

0xefbd,	// (0x00039240) hwr_training_write_pane_g1

0xefc5,	// (0x00039248) hwr_training_write_pane_g2

0xefcd,	// (0x00039250) hwr_training_write_pane_g3

0xefd5,	// (0x00039258) hwr_training_write_pane_g4

0xefdd,	// (0x00039260) hwr_training_write_pane_g5

0xefe5,	// (0x00039268) hwr_training_write_pane_g6

0xefed,	// (0x00039270) hwr_training_write_pane_g7

0x0006,

0x003f,	// (0x0002a2c2) hwr_training_write_pane_g

0xb3b7,	// (0x0003563a) hwr_training_navi_pane_g1_ParamLimits

0xb3b7,	// (0x0003563a) hwr_training_navi_pane_g1

0xb3c9,	// (0x0003564c) hwr_training_navi_pane_g2_ParamLimits

0xb3c9,	// (0x0003564c) hwr_training_navi_pane_g2

0xb3db,	// (0x0003565e) hwr_training_navi_pane_g3_ParamLimits

0xb3db,	// (0x0003565e) hwr_training_navi_pane_g3

0xb3eb,	// (0x0003566e) hwr_training_navi_pane_g4_ParamLimits

0xb3eb,	// (0x0003566e) hwr_training_navi_pane_g4

0x0004,

0xf76c,	// (0x000399ef) hwr_training_navi_pane_g_ParamLimits

0xf76c,	// (0x000399ef) hwr_training_navi_pane_g

0xb3f8,	// (0x0003567b) hwr_training_navi_pane_t1

0x5271,	// (0x0002f4f4) list_single_hwr_training_instruct_pane_ParamLimits

0x5271,	// (0x0002f4f4) list_single_hwr_training_instruct_pane

0xeff5,	// (0x00039278) list_single_hwr_training_instruct_pane_t1

0xe87b,	// (0x00038afe) bg_frame_shadow_pane_g1

0xf004,	// (0x00039287) bg_frame_shadow_pane_g2

0xf00c,	// (0x0003928f) bg_frame_shadow_pane_g3

0xf014,	// (0x00039297) bg_frame_shadow_pane_g4

0xf01c,	// (0x0003929f) bg_frame_shadow_pane_g5

0xf024,	// (0x000392a7) bg_frame_shadow_pane_g6

0xf02c,	// (0x000392af) bg_frame_shadow_pane_g7

0xc702,	// (0x00036985) bg_frame_shadow_pane_g8

0x0007,

0xf777,	// (0x000399fa) bg_frame_shadow_pane_g

0xb12a,	// (0x000353ad) main_video_tele_dialer_pane

0x0ff4,	// (0x0002b277) aid_size_cell_video_keypad_ParamLimits

0x0ff4,	// (0x0002b277) aid_size_cell_video_keypad

0x100e,	// (0x0002b291) grid_video_dialer_keypad_pane_ParamLimits

0x100e,	// (0x0002b291) grid_video_dialer_keypad_pane

0x105a,	// (0x0002b2dd) video_down_pane_cp_ParamLimits

0x105a,	// (0x0002b2dd) video_down_pane_cp

0x1070,	// (0x0002b2f3) cell_video_dialer_keypad_pane_ParamLimits

0x1070,	// (0x0002b2f3) cell_video_dialer_keypad_pane

0xf034,	// (0x000392b7) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x000392b7) bg_button_pane_cp08

0x52a2,	// (0x0002f525) cell_video_dialer_keypad_pane_g1_ParamLimits

0x52a2,	// (0x0002f525) cell_video_dialer_keypad_pane_g1

0x4d21,	// (0x0002efa4) mup3_rocker2_pane_ParamLimits

0x4d21,	// (0x0002efa4) mup3_rocker2_pane

0xc5ec,	// (0x0003686f) mup3_rocker2_pane_g1

0x0c35,	// (0x0002aeb8) main_dialer2_pane

0xb12a,	// (0x000353ad) main_mp4_pane

0xb424,	// (0x000356a7) main_mp4_pane_g1_ParamLimits

0xb424,	// (0x000356a7) main_mp4_pane_g1

0xb424,	// (0x000356a7) main_mp4_pane_g2_ParamLimits

0xb424,	// (0x000356a7) main_mp4_pane_g2

0x1092,	// (0x0002b315) main_mp4_pane_g3_ParamLimits

0x1092,	// (0x0002b315) main_mp4_pane_g3

0xb442,	// (0x000356c5) main_mp4_pane_g4_ParamLimits

0xb442,	// (0x000356c5) main_mp4_pane_g4

0xb46a,	// (0x000356ed) main_mp4_pane_g5_ParamLimits

0xb46a,	// (0x000356ed) main_mp4_pane_g5

0x0007,

0xf797,	// (0x00039a1a) main_mp4_pane_g_ParamLimits

0xf797,	// (0x00039a1a) main_mp4_pane_g

0xb4d2,	// (0x00035755) main_mp4_pane_t1_ParamLimits

0xb4d2,	// (0x00035755) main_mp4_pane_t1

0xb534,	// (0x000357b7) main_mp4_pane_t2_ParamLimits

0xb534,	// (0x000357b7) main_mp4_pane_t2

0xb598,	// (0x0003581b) main_mp4_pane_t3_ParamLimits

0xb598,	// (0x0003581b) main_mp4_pane_t3

0xb5f6,	// (0x00035879) main_mp4_pane_t4_ParamLimits

0xb5f6,	// (0x00035879) main_mp4_pane_t4

0x0003,

0xf7a8,	// (0x00039a2b) main_mp4_pane_t_ParamLimits

0xf7a8,	// (0x00039a2b) main_mp4_pane_t

0xb654,	// (0x000358d7) mp4_progress_pane_ParamLimits

0xb654,	// (0x000358d7) mp4_progress_pane

0xb688,	// (0x0003590b) mp4_rocker_pane_ParamLimits

0xb688,	// (0x0003590b) mp4_rocker_pane

0x52e1,	// (0x0002f564) mp4_progress_pane_t1

0x5303,	// (0x0002f586) mp4_progress_pane_t2

0x0001,

0xf7b1,	// (0x00039a34) mp4_progress_pane_t

0x5325,	// (0x0002f5a8) mup_progress_pane_cp04

0x4517,	// (0x0002e79a) mp4_rocker_pane_g1

0xb11c,	// (0x0003539f) aid_cell_size_keypad2_ParamLimits

0xb11c,	// (0x0003539f) aid_cell_size_keypad2

0xb11c,	// (0x0003539f) dialer2_ne_pane_ParamLimits

0xb11c,	// (0x0003539f) dialer2_ne_pane

0xb11c,	// (0x0003539f) grid_dialer2_keypad_pane_ParamLimits

0xb11c,	// (0x0003539f) grid_dialer2_keypad_pane

0xe721,	// (0x000389a4) bg_popup_call_pane_cp07_ParamLimits

0xe721,	// (0x000389a4) bg_popup_call_pane_cp07

0x5338,	// (0x0002f5bb) dialer2_ne_pane_t1_ParamLimits

0x5338,	// (0x0002f5bb) dialer2_ne_pane_t1

0x10c2,	// (0x0002b345) cell_dialer2_keypad_pane_ParamLimits

0x10c2,	// (0x0002b345) cell_dialer2_keypad_pane

0xe721,	// (0x000389a4) bg_button_pane_pane_cp04_ParamLimits

0xe721,	// (0x000389a4) bg_button_pane_pane_cp04

0xc5ae,	// (0x00036831) cell_dialer2_keypad_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) cell_dialer2_keypad_pane_g1

0x23bf,	// (0x0002c642) aid_placing_vt_set_content_ParamLimits

0x23bf,	// (0x0002c642) aid_placing_vt_set_content

0x23e7,	// (0x0002c66a) aid_placing_vt_set_title_ParamLimits

0x23e7,	// (0x0002c66a) aid_placing_vt_set_title

0xb12a,	// (0x000353ad) main_image3_pane

0x1137,	// (0x0002b3ba) area_side_right_pane_cp01_ParamLimits

0x1137,	// (0x0002b3ba) area_side_right_pane_cp01

0x114e,	// (0x0002b3d1) main_image3_pane_g1_ParamLimits

0x114e,	// (0x0002b3d1) main_image3_pane_g1

0x115c,	// (0x0002b3df) main_image3_pane_g2_ParamLimits

0x115c,	// (0x0002b3df) main_image3_pane_g2

0x1184,	// (0x0002b407) main_image3_pane_g3_ParamLimits

0x1184,	// (0x0002b407) main_image3_pane_g3

0x11ae,	// (0x0002b431) main_image3_pane_g4_ParamLimits

0x11ae,	// (0x0002b431) main_image3_pane_g4

0x0003,

0xf7c0,	// (0x00039a43) main_image3_pane_g_ParamLimits

0xf7c0,	// (0x00039a43) main_image3_pane_g

0x11d8,	// (0x0002b45b) main_image3_pane_t1_ParamLimits

0x11d8,	// (0x0002b45b) main_image3_pane_t1

0x1230,	// (0x0002b4b3) main_image3_pane_t2_ParamLimits

0x1230,	// (0x0002b4b3) main_image3_pane_t2

0x1282,	// (0x0002b505) main_image3_pane_t3_ParamLimits

0x1282,	// (0x0002b505) main_image3_pane_t3

0x0003,

0xf7c9,	// (0x00039a4c) main_image3_pane_t_ParamLimits

0xf7c9,	// (0x00039a4c) main_image3_pane_t

0xc547,	// (0x000367ca) grid_sctrl_middle_pane_cp01_ParamLimits

0xc547,	// (0x000367ca) grid_sctrl_middle_pane_cp01

0x53a4,	// (0x0002f627) cell_sctrl_middle_pane_cp01_ParamLimits

0x53a4,	// (0x0002f627) cell_sctrl_middle_pane_cp01

0x53c1,	// (0x0002f644) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x53c1,	// (0x0002f644) cell_sctrl_middle_pane_cp01_g1

0xb12a,	// (0x000353ad) main_call4_pane

0x130a,	// (0x0002b58d) aid_size_button_call4_ParamLimits

0x130a,	// (0x0002b58d) aid_size_button_call4

0x133d,	// (0x0002b5c0) call4_windows_pane_ParamLimits

0x133d,	// (0x0002b5c0) call4_windows_pane

0x135c,	// (0x0002b5df) grid_call4_button_pane_ParamLimits

0x135c,	// (0x0002b5df) grid_call4_button_pane

0x53e1,	// (0x0002f664) call4_windows_conf_pane

0x53f8,	// (0x0002f67b) popup_call4_audio_first_window_ParamLimits

0x53f8,	// (0x0002f67b) popup_call4_audio_first_window

0x5448,	// (0x0002f6cb) popup_call4_audio_second_window_ParamLimits

0x5448,	// (0x0002f6cb) popup_call4_audio_second_window

0x545f,	// (0x0002f6e2) popup_call4_audio_wait_window_ParamLimits

0x545f,	// (0x0002f6e2) popup_call4_audio_wait_window

0x1385,	// (0x0002b608) cell_call4_button_pane_ParamLimits

0x1385,	// (0x0002b608) cell_call4_button_pane

0x546d,	// (0x0002f6f0) bg_button_pane_cp09_ParamLimits

0x546d,	// (0x0002f6f0) bg_button_pane_cp09

0x13aa,	// (0x0002b62d) cell_call4_button_pane_g1_ParamLimits

0x13aa,	// (0x0002b62d) cell_call4_button_pane_g1

0x13d0,	// (0x0002b653) cell_call4_button_pane_t1_ParamLimits

0x13d0,	// (0x0002b653) cell_call4_button_pane_t1

0x5481,	// (0x0002f704) popup_call4_audio_conf_window_ParamLimits

0x5481,	// (0x0002f704) popup_call4_audio_conf_window

0x4d81,	// (0x0002f004) mup3_progress_pane_t1_ParamLimits

0x4da0,	// (0x0002f023) mup3_progress_pane_t2_ParamLimits

0xebf5,	// (0x00038e78) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x0003994d) mup3_progress_pane_t_ParamLimits

0xec12,	// (0x00038e95) mup_progress_pane_cp03_ParamLimits

0x51cb,	// (0x0002f44e) mup3_control_keys_pane_g4_copy1

0xb688,	// (0x0003590b) mp4_rocker2_pane_ParamLimits

0xb688,	// (0x0003590b) mp4_rocker2_pane

0xb700,	// (0x00035983) mp4_rocker2_pane_g1

0xb700,	// (0x00035983) mp4_rocker2_pane_g2

0xb700,	// (0x00035983) mp4_rocker2_pane_g3

0xb700,	// (0x00035983) mp4_rocker2_pane_g4

0xb700,	// (0x00035983) mp4_rocker2_pane_g5

0x0004,

0xf7d2,	// (0x00039a55) mp4_rocker2_pane_g

0xb12a,	// (0x000353ad) main_camera4_pane

0xb12a,	// (0x000353ad) main_video4_pane

0x1028,	// (0x0002b2ab) main_video_tele_dialer_pane_t1_ParamLimits

0x1028,	// (0x0002b2ab) main_video_tele_dialer_pane_t1

0x1041,	// (0x0002b2c4) main_video_tele_dialer_pane_t2_ParamLimits

0x1041,	// (0x0002b2c4) main_video_tele_dialer_pane_t2

0x0001,

0xf788,	// (0x00039a0b) main_video_tele_dialer_pane_t_ParamLimits

0xf788,	// (0x00039a0b) main_video_tele_dialer_pane_t

0x140e,	// (0x0002b691) cam4_autofocus_pane_ParamLimits

0x140e,	// (0x0002b691) cam4_autofocus_pane

0x1424,	// (0x0002b6a7) cam4_image_uncrop_pane_ParamLimits

0x1424,	// (0x0002b6a7) cam4_image_uncrop_pane

0x143e,	// (0x0002b6c1) cam4_indicators_pane_ParamLimits

0x143e,	// (0x0002b6c1) cam4_indicators_pane

0x1469,	// (0x0002b6ec) main_camera4_pane_g1_ParamLimits

0x1469,	// (0x0002b6ec) main_camera4_pane_g1

0x147b,	// (0x0002b6fe) main_camera4_pane_g2_ParamLimits

0x147b,	// (0x0002b6fe) main_camera4_pane_g2

0x148e,	// (0x0002b711) main_camera4_pane_g3_ParamLimits

0x148e,	// (0x0002b711) main_camera4_pane_g3

0x14a1,	// (0x0002b724) main_camera4_pane_g4_ParamLimits

0x14a1,	// (0x0002b724) main_camera4_pane_g4

0x14b4,	// (0x0002b737) main_camera4_pane_g5_ParamLimits

0x14b4,	// (0x0002b737) main_camera4_pane_g5

0x0005,

0xf7dd,	// (0x00039a60) main_camera4_pane_g_ParamLimits

0xf7dd,	// (0x00039a60) main_camera4_pane_g

0x14d8,	// (0x0002b75b) main_camera4_pane_t1_ParamLimits

0x14d8,	// (0x0002b75b) main_camera4_pane_t1

0x54bb,	// (0x0002f73e) bg_tb_trans_pane_cp06

0xb72c,	// (0x000359af) cam4_indicators_pane_g1

0xb73d,	// (0x000359c0) cam4_indicators_pane_g2

0x0002,

0xf7f8,	// (0x00039a7b) cam4_indicators_pane_g

0xb75b,	// (0x000359de) cam4_indicators_pane_t1

0x1528,	// (0x0002b7ab) main_video4_pane_g1_ParamLimits

0x1528,	// (0x0002b7ab) main_video4_pane_g1

0x1537,	// (0x0002b7ba) main_video4_pane_g2_ParamLimits

0x1537,	// (0x0002b7ba) main_video4_pane_g2

0x1546,	// (0x0002b7c9) main_video4_pane_g3_ParamLimits

0x1546,	// (0x0002b7c9) main_video4_pane_g3

0x1555,	// (0x0002b7d8) main_video4_pane_g4_ParamLimits

0x1555,	// (0x0002b7d8) main_video4_pane_g4

0x0004,

0xf7ff,	// (0x00039a82) main_video4_pane_g_ParamLimits

0xf7ff,	// (0x00039a82) main_video4_pane_g

0x1573,	// (0x0002b7f6) vid4_indicators_pane_ParamLimits

0x1573,	// (0x0002b7f6) vid4_indicators_pane

0x15a1,	// (0x0002b824) video4_image_uncrop_cif_pane_ParamLimits

0x15a1,	// (0x0002b824) video4_image_uncrop_cif_pane

0x15bb,	// (0x0002b83e) video4_image_uncrop_nhd_pane_ParamLimits

0x15bb,	// (0x0002b83e) video4_image_uncrop_nhd_pane

0x1424,	// (0x0002b6a7) video4_image_uncrop_vga_pane_ParamLimits

0x1424,	// (0x0002b6a7) video4_image_uncrop_vga_pane

0xb11c,	// (0x0003539f) bg_tb_trans_pane_cp07

0xb787,	// (0x00035a0a) vid4_indicators_pane_g1

0xb79b,	// (0x00035a1e) vid4_indicators_pane_g2

0xb7af,	// (0x00035a32) vid4_indicators_pane_g3

0x0004,

0xf80a,	// (0x00039a8d) vid4_indicators_pane_g

0xb7de,	// (0x00035a61) vid4_indicators_pane_t1

0x54c9,	// (0x0002f74c) cam4_autofocus_pane_g1

0x54d1,	// (0x0002f754) cam4_autofocus_pane_g2

0x54d9,	// (0x0002f75c) cam4_autofocus_pane_g3

0x0002,

0xf815,	// (0x00039a98) cam4_autofocus_pane_g

0x54e1,	// (0x0002f764) cam4_autofocus_pane_g3_copy1

0x5286,	// (0x0002f509) video_down_pane_cp_t1

0x5294,	// (0x0002f517) video_down_pane_cp_t2

0x0001,

0xf78d,	// (0x00039a10) video_down_pane_cp_t

0xb11c,	// (0x0003539f) popup_vitu2_window_ParamLimits

0xb11c,	// (0x0003539f) popup_vitu2_window

0x15cf,	// (0x0002b852) aid_size_cell2_itu2_ParamLimits

0x15cf,	// (0x0002b852) aid_size_cell2_itu2

0x15f5,	// (0x0002b878) aid_size_cell_itu2_ParamLimits

0x15f5,	// (0x0002b878) aid_size_cell_itu2

0x1651,	// (0x0002b8d4) bg_popup_window_pane_cp09_ParamLimits

0x1651,	// (0x0002b8d4) bg_popup_window_pane_cp09

0x165f,	// (0x0002b8e2) field_vitu2_entry_pane_ParamLimits

0x165f,	// (0x0002b8e2) field_vitu2_entry_pane

0x1685,	// (0x0002b908) grid_vitu2_function_pane_ParamLimits

0x1685,	// (0x0002b908) grid_vitu2_function_pane

0x16d6,	// (0x0002b959) grid_vitu2_itu_pane_ParamLimits

0x16d6,	// (0x0002b959) grid_vitu2_itu_pane

0x176c,	// (0x0002b9ef) cell_vitu2_itu_pane_ParamLimits

0x176c,	// (0x0002b9ef) cell_vitu2_itu_pane

0x1798,	// (0x0002ba1b) cell_vitu2_function_pane_ParamLimits

0x1798,	// (0x0002ba1b) cell_vitu2_function_pane

0x54e9,	// (0x0002f76c) bg_popup_call_pane_cp08_ParamLimits

0x54e9,	// (0x0002f76c) bg_popup_call_pane_cp08

0x5500,	// (0x0002f783) field_vitu2_entry_pane_g1

0x550c,	// (0x0002f78f) field_vitu2_entry_pane_g2

0x0002,

0xf81c,	// (0x00039a9f) field_vitu2_entry_pane_g

0x5518,	// (0x0002f79b) field_vitu2_entry_pane_t1_ParamLimits

0x5518,	// (0x0002f79b) field_vitu2_entry_pane_t1

0x5547,	// (0x0002f7ca) field_vitu2_entry_pane_t2_ParamLimits

0x5547,	// (0x0002f7ca) field_vitu2_entry_pane_t2

0x0001,

0xf823,	// (0x00039aa6) field_vitu2_entry_pane_t_ParamLimits

0xf823,	// (0x00039aa6) field_vitu2_entry_pane_t

0x17d7,	// (0x0002ba5a) bg_button_pane_cp010_ParamLimits

0x17d7,	// (0x0002ba5a) bg_button_pane_cp010

0x17e5,	// (0x0002ba68) cell_vitu2_itu_pane_g1

0x180b,	// (0x0002ba8e) cell_vitu2_itu_pane_t1_ParamLimits

0x180b,	// (0x0002ba8e) cell_vitu2_itu_pane_t1

0x1869,	// (0x0002baec) cell_vitu2_itu_pane_t2_ParamLimits

0x1869,	// (0x0002baec) cell_vitu2_itu_pane_t2

0x0002,

0xf82d,	// (0x00039ab0) cell_vitu2_itu_pane_t_ParamLimits

0xf82d,	// (0x00039ab0) cell_vitu2_itu_pane_t

0xb11c,	// (0x0003539f) bg_button_pane_cp011

0x1955,	// (0x0002bbd8) cell_vitu2_function_pane_g1

0xb12a,	// (0x000353ad) main_myfav_hc_pane

0x12d2,	// (0x0002b555) popup_image3_note_pane_ParamLimits

0x12d2,	// (0x0002b555) popup_image3_note_pane

0x12ee,	// (0x0002b571) popup_image3_tool_bar_pane_ParamLimits

0x12ee,	// (0x0002b571) popup_image3_tool_bar_pane

0x18f7,	// (0x0002bb7a) cell_vitu2_itu_pane_t3_ParamLimits

0x18f7,	// (0x0002bb7a) cell_vitu2_itu_pane_t3

0xbead,	// (0x00036130) bg_popup_trans_pane

0x556c,	// (0x0002f7ef) grid_image3_tool_bar_pane

0x5576,	// (0x0002f7f9) bg_popup_trans_pane_g1

0xca3c,	// (0x00036cbf) bg_popup_trans_pane_g2

0x557e,	// (0x0002f801) bg_popup_trans_pane_g3

0x5586,	// (0x0002f809) bg_popup_trans_pane_g4

0x558e,	// (0x0002f811) bg_popup_trans_pane_g5

0x5596,	// (0x0002f819) bg_popup_trans_pane_g6

0x559e,	// (0x0002f821) bg_popup_trans_pane_g7

0x55a6,	// (0x0002f829) bg_popup_trans_pane_g8

0xca1c,	// (0x00036c9f) bg_popup_trans_pane_g9

0x0008,

0xf834,	// (0x00039ab7) bg_popup_trans_pane_g

0x55ae,	// (0x0002f831) cell_image3_tool_bar_pane_ParamLimits

0x55ae,	// (0x0002f831) cell_image3_tool_bar_pane

0xc5ec,	// (0x0003686f) cell_image3_tool_bar_pane_g1

0xbead,	// (0x00036130) bg_popup_trans_pane_cp1

0x55c2,	// (0x0002f845) popup_image3_note_pane_t1

0x55d0,	// (0x0002f853) popup_image3_note_pane_t2

0x55de,	// (0x0002f861) popup_image3_note_pane_t3

0x0002,

0xf847,	// (0x00039aca) popup_image3_note_pane_t

0x55ec,	// (0x0002f86f) popup_image3_note_pane_t3_copy1

0x55fa,	// (0x0002f87d) bg_myfav_hc_instruction_pane_ParamLimits

0x55fa,	// (0x0002f87d) bg_myfav_hc_instruction_pane

0x560e,	// (0x0002f891) cell_myfav_contact_pane_ParamLimits

0x560e,	// (0x0002f891) cell_myfav_contact_pane

0x562c,	// (0x0002f8af) cell_myfav_contact_pane_cp1_ParamLimits

0x562c,	// (0x0002f8af) cell_myfav_contact_pane_cp1

0x5644,	// (0x0002f8c7) cell_myfav_contact_pane_cp2_ParamLimits

0x5644,	// (0x0002f8c7) cell_myfav_contact_pane_cp2

0x565c,	// (0x0002f8df) cell_myfav_contact_pane_cp3_ParamLimits

0x565c,	// (0x0002f8df) cell_myfav_contact_pane_cp3

0x5673,	// (0x0002f8f6) cell_myfav_contact_pane_cp4_ParamLimits

0x5673,	// (0x0002f8f6) cell_myfav_contact_pane_cp4

0x568b,	// (0x0002f90e) cell_myfav_contact_pane_cp5_ParamLimits

0x568b,	// (0x0002f90e) cell_myfav_contact_pane_cp5

0x569f,	// (0x0002f922) cell_myfav_contact_pane_cp6_ParamLimits

0x569f,	// (0x0002f922) cell_myfav_contact_pane_cp6

0x56b5,	// (0x0002f938) cell_myfav_contact_pane_cp7_ParamLimits

0x56b5,	// (0x0002f938) cell_myfav_contact_pane_cp7

0x56cf,	// (0x0002f952) listscroll_gen_pane_cp05

0x56d8,	// (0x0002f95b) main_myfav_hc_pane_g1_ParamLimits

0x56d8,	// (0x0002f95b) main_myfav_hc_pane_g1

0x56f2,	// (0x0002f975) main_myfav_hc_pane_g2_ParamLimits

0x56f2,	// (0x0002f975) main_myfav_hc_pane_g2

0x0002,

0xf84e,	// (0x00039ad1) main_myfav_hc_pane_g_ParamLimits

0xf84e,	// (0x00039ad1) main_myfav_hc_pane_g

0x5724,	// (0x0002f9a7) main_myfav_hc_pane_t1_ParamLimits

0x5724,	// (0x0002f9a7) main_myfav_hc_pane_t1

0x573b,	// (0x0002f9be) main_myfav_hc_pane_t2_ParamLimits

0x573b,	// (0x0002f9be) main_myfav_hc_pane_t2

0x574d,	// (0x0002f9d0) main_myfav_hc_pane_t3_ParamLimits

0x574d,	// (0x0002f9d0) main_myfav_hc_pane_t3

0x575f,	// (0x0002f9e2) main_myfav_hc_pane_t4_ParamLimits

0x575f,	// (0x0002f9e2) main_myfav_hc_pane_t4

0x0004,

0xf855,	// (0x00039ad8) main_myfav_hc_pane_t_ParamLimits

0xf855,	// (0x00039ad8) main_myfav_hc_pane_t

0xc5ec,	// (0x0003686f) bg_myfav_hc_instruction_pane_g1

0x5787,	// (0x0002fa0a) cell_myfav_contact_pane_g1_ParamLimits

0x5787,	// (0x0002fa0a) cell_myfav_contact_pane_g1

0x5787,	// (0x0002fa0a) cell_myfav_contact_pane_g2_ParamLimits

0x5787,	// (0x0002fa0a) cell_myfav_contact_pane_g2

0x5793,	// (0x0002fa16) cell_myfav_contact_pane_g3_ParamLimits

0x5793,	// (0x0002fa16) cell_myfav_contact_pane_g3

0xc5bc,	// (0x0003683f) cell_myfav_contact_pane_g4_ParamLimits

0xc5bc,	// (0x0003683f) cell_myfav_contact_pane_g4

0x57a0,	// (0x0002fa23) cell_myfav_contact_pane_g5_ParamLimits

0x57a0,	// (0x0002fa23) cell_myfav_contact_pane_g5

0x0004,

0xf860,	// (0x00039ae3) cell_myfav_contact_pane_g_ParamLimits

0xf860,	// (0x00039ae3) cell_myfav_contact_pane_g

0x570c,	// (0x0002f98f) main_myfav_hc_pane_g3_ParamLimits

0x570c,	// (0x0002f98f) main_myfav_hc_pane_g3

0x087b,	// (0x0002aafe) popup_adpt_find_window

0x57ac,	// (0x0002fa2f) afind_page_pane_ParamLimits

0x57ac,	// (0x0002fa2f) afind_page_pane

0x57c1,	// (0x0002fa44) aid_size_cell_afind_ParamLimits

0x57c1,	// (0x0002fa44) aid_size_cell_afind

0x57df,	// (0x0002fa62) bg_popup_sub_pane_cp09_ParamLimits

0x57df,	// (0x0002fa62) bg_popup_sub_pane_cp09

0x57ec,	// (0x0002fa6f) find_pane_cp01_ParamLimits

0x57ec,	// (0x0002fa6f) find_pane_cp01

0x57f9,	// (0x0002fa7c) grid_afind_control_pane_ParamLimits

0x57f9,	// (0x0002fa7c) grid_afind_control_pane

0x580d,	// (0x0002fa90) grid_afind_pane_ParamLimits

0x580d,	// (0x0002fa90) grid_afind_pane

0x582f,	// (0x0002fab2) cell_afind_pane_ParamLimits

0x582f,	// (0x0002fab2) cell_afind_pane

0xc5ec,	// (0x0003686f) afind_page_pane_g1

0x5896,	// (0x0002fb19) afind_page_pane_g2

0x589e,	// (0x0002fb21) afind_page_pane_g3

0x0002,

0xf86b,	// (0x00039aee) afind_page_pane_g

0x58a6,	// (0x0002fb29) afind_page_pane_t1

0x58c6,	// (0x0002fb49) cell_afind_grid_control_pane_ParamLimits

0x58c6,	// (0x0002fb49) cell_afind_grid_control_pane

0x58d5,	// (0x0002fb58) bg_button_pane_cp69_ParamLimits

0x58d5,	// (0x0002fb58) bg_button_pane_cp69

0x58e1,	// (0x0002fb64) cell_afind_pane_g1_ParamLimits

0x58e1,	// (0x0002fb64) cell_afind_pane_g1

0x58ee,	// (0x0002fb71) cell_afind_pane_t1_ParamLimits

0x58ee,	// (0x0002fb71) cell_afind_pane_t1

0x5900,	// (0x0002fb83) bg_button_pane_cp72

0x5908,	// (0x0002fb8b) cell_afind_grid_control_pane_g1

0x3d79,	// (0x0002dffc) aid_image_placing_area_ParamLimits

0x3d79,	// (0x0002dffc) aid_image_placing_area

0xc5ae,	// (0x00036831) field_vitu_entry_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) field_vitu_entry_pane_g1

0xc5ae,	// (0x00036831) field_vitu_entry_pane_g2_ParamLimits

0xc5ae,	// (0x00036831) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0003943f) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0003943f) field_vitu_entry_pane_g

0xeefa,	// (0x0003917d) cell_vitu_itu_pane_g1_ParamLimits

0xeedd,	// (0x00039160) cell_vitu_itu_pane_t3_ParamLimits

0xeedd,	// (0x00039160) cell_vitu_itu_pane_t3

0x52e1,	// (0x0002f564) mp4_progress_pane_t1_ParamLimits

0x5303,	// (0x0002f586) mp4_progress_pane_t2_ParamLimits

0xf7b1,	// (0x00039a34) mp4_progress_pane_t_ParamLimits

0x5325,	// (0x0002f5a8) mup_progress_pane_cp04_ParamLimits

0x5773,	// (0x0002f9f6) main_myfav_hc_pane_t5_ParamLimits

0x5773,	// (0x0002f9f6) main_myfav_hc_pane_t5

0xb0d3,	// (0x00035356) aid_zoom_text_primary

0x087b,	// (0x0002aafe) popup_adpt_find_window_ParamLimits

0xb11c,	// (0x0003539f) main_cam_set_pane

0x1455,	// (0x0002b6d8) cam4_zoom_pane_ParamLimits

0x1455,	// (0x0002b6d8) cam4_zoom_pane

0x5911,	// (0x0002fb94) main_cam_set_pane_g1_ParamLimits

0x5911,	// (0x0002fb94) main_cam_set_pane_g1

0x591f,	// (0x0002fba2) main_cam_set_pane_g2_ParamLimits

0x591f,	// (0x0002fba2) main_cam_set_pane_g2

0x0001,

0xf872,	// (0x00039af5) main_cam_set_pane_g_ParamLimits

0xf872,	// (0x00039af5) main_cam_set_pane_g

0x5940,	// (0x0002fbc3) main_cam_set_pane_t1_ParamLimits

0x5940,	// (0x0002fbc3) main_cam_set_pane_t1

0x595b,	// (0x0002fbde) main_cset_listscroll_pane_ParamLimits

0x595b,	// (0x0002fbde) main_cset_listscroll_pane

0x5981,	// (0x0002fc04) main_cset_slider_pane_ParamLimits

0x5981,	// (0x0002fc04) main_cset_slider_pane

0x59af,	// (0x0002fc32) main_cset_list_pane_ParamLimits

0x59af,	// (0x0002fc32) main_cset_list_pane

0x59bf,	// (0x0002fc42) scroll_pane_cp028

0x59c8,	// (0x0002fc4b) aid_area_touch_slider

0x59e4,	// (0x0002fc67) cset_slider_pane

0x5a07,	// (0x0002fc8a) main_cset_slider_pane_g1

0x5a1c,	// (0x0002fc9f) main_cset_slider_pane_g2

0x0011,

0xf877,	// (0x00039afa) main_cset_slider_pane_g

0x5b08,	// (0x0002fd8b) main_cset_slider_pane_t1

0x5b30,	// (0x0002fdb3) main_cset_slider_pane_t2

0x5b4a,	// (0x0002fdcd) main_cset_slider_pane_t3

0x5b64,	// (0x0002fde7) main_cset_slider_pane_t4

0x5b7e,	// (0x0002fe01) main_cset_slider_pane_t5

0x5b98,	// (0x0002fe1b) main_cset_slider_pane_t6

0x5bad,	// (0x0002fe30) main_cset_slider_pane_t7

0x000e,

0xf89c,	// (0x00039b1f) main_cset_slider_pane_t

0x5d23,	// (0x0002ffa6) cset_list_set_pane_ParamLimits

0x5d23,	// (0x0002ffa6) cset_list_set_pane

0x5d35,	// (0x0002ffb8) aid_position_infowindow_above

0x5d3d,	// (0x0002ffc0) aid_position_infowindow_below

0x5d45,	// (0x0002ffc8) cset_list_set_pane_g1_ParamLimits

0x5d45,	// (0x0002ffc8) cset_list_set_pane_g1

0x5d51,	// (0x0002ffd4) cset_list_set_pane_g3_ParamLimits

0x5d51,	// (0x0002ffd4) cset_list_set_pane_g3

0x0001,

0xf8bb,	// (0x00039b3e) cset_list_set_pane_g_ParamLimits

0xf8bb,	// (0x00039b3e) cset_list_set_pane_g

0x5d60,	// (0x0002ffe3) cset_list_set_pane_t1_ParamLimits

0x5d60,	// (0x0002ffe3) cset_list_set_pane_t1

0xc547,	// (0x000367ca) list_highlight_pane_cp021_ParamLimits

0xc547,	// (0x000367ca) list_highlight_pane_cp021

0xd39e,	// (0x00037621) cset_slider_pane_g1

0xd3b0,	// (0x00037633) cset_slider_pane_g2

0xd3a7,	// (0x0003762a) cset_slider_pane_g3

0x0002,

0xf8c0,	// (0x00039b43) cset_slider_pane_g

0xb7f5,	// (0x00035a78) aid_area_touch_cam4_zoom

0xb7fd,	// (0x00035a80) cam4_zoom_cont_pane

0xb805,	// (0x00035a88) cam4_zoom_pane_g1

0xb80d,	// (0x00035a90) cam4_zoom_pane_g2

0x1969,	// (0x0002bbec) cam4_zoom_pane_g3

0x0002,

0xf8c7,	// (0x00039b4a) cam4_zoom_pane_g

0xb815,	// (0x00035a98) cam4_zoom_cont_pane_g1

0xb81e,	// (0x00035aa1) cam4_zoom_cont_pane_g2

0xb827,	// (0x00035aaa) cam4_zoom_cont_pane_g3

0x0002,

0xf8ce,	// (0x00039b51) cam4_zoom_cont_pane_g

0x1328,	// (0x0002b5ab) call4_image_pane_ParamLimits

0x1328,	// (0x0002b5ab) call4_image_pane

0x53e1,	// (0x0002f664) call4_windows_conf_pane_ParamLimits

0x5426,	// (0x0002f6a9) popup_call4_audio_in_window_ParamLimits

0x5426,	// (0x0002f6a9) popup_call4_audio_in_window

0xbead,	// (0x00036130) bg_popup_call2_act_pane_cp02

0x5479,	// (0x0002f6fc) call4_list_conf_pane

0xc5ec,	// (0x0003686f) call4_image_pane_g1

0xc5ec,	// (0x0003686f) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00039332) call4_image_pane_g

0x5d75,	// (0x0002fff8) list_single_graphic_popup_conf4_pane_ParamLimits

0x5d75,	// (0x0002fff8) list_single_graphic_popup_conf4_pane

0xbead,	// (0x00036130) list_highlight_pane_cp022

0x5d88,	// (0x0003000b) list_single_graphic_popup_conf4_pane_g1

0xcf62,	// (0x000371e5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8d5,	// (0x00039b58) list_single_graphic_popup_conf4_pane_g

0x5d90,	// (0x00030013) list_single_graphic_popup_conf4_pane_t1

0x250b,	// (0x0002c78e) popup_vtel_slider_window_ParamLimits

0x250b,	// (0x0002c78e) popup_vtel_slider_window

0x5376,	// (0x0002f5f9) dialer2_ne_pane_t2_ParamLimits

0x5376,	// (0x0002f5f9) dialer2_ne_pane_t2

0x0001,

0xf7b6,	// (0x00039a39) dialer2_ne_pane_t_ParamLimits

0xf7b6,	// (0x00039a39) dialer2_ne_pane_t

0xe721,	// (0x000389a4) bg_popup_sub_pane_cp010_ParamLimits

0xe721,	// (0x000389a4) bg_popup_sub_pane_cp010

0x5da6,	// (0x00030029) popup_vtel_slider_window_g1_ParamLimits

0x5da6,	// (0x00030029) popup_vtel_slider_window_g1

0x5db9,	// (0x0003003c) popup_vtel_slider_window_g2_ParamLimits

0x5db9,	// (0x0003003c) popup_vtel_slider_window_g2

0x0003,

0xf8da,	// (0x00039b5d) popup_vtel_slider_window_g_ParamLimits

0xf8da,	// (0x00039b5d) popup_vtel_slider_window_g

0x5e0f,	// (0x00030092) vtel_slider_pane_ParamLimits

0x5e0f,	// (0x00030092) vtel_slider_pane

0x5e31,	// (0x000300b4) vtel_slider_pane_g1_ParamLimits

0x5e31,	// (0x000300b4) vtel_slider_pane_g1

0x5e45,	// (0x000300c8) vtel_slider_pane_g2_ParamLimits

0x5e45,	// (0x000300c8) vtel_slider_pane_g2

0x5e5d,	// (0x000300e0) vtel_slider_pane_g3_ParamLimits

0x5e5d,	// (0x000300e0) vtel_slider_pane_g3

0x5e31,	// (0x000300b4) vtel_slider_pane_g4_ParamLimits

0x5e31,	// (0x000300b4) vtel_slider_pane_g4

0x5e73,	// (0x000300f6) vtel_slider_pane_g5_ParamLimits

0x5e73,	// (0x000300f6) vtel_slider_pane_g5

0x0004,

0xf8e3,	// (0x00039b66) vtel_slider_pane_g_ParamLimits

0xf8e3,	// (0x00039b66) vtel_slider_pane_g

0xb11c,	// (0x0003539f) main_gallery2_pane

0x1621,	// (0x0002b8a4) aid_size_row_itut2_dropdow_list_ParamLimits

0x1621,	// (0x0002b8a4) aid_size_row_itut2_dropdow_list

0x16ad,	// (0x0002b930) grid_vitu2_function_top_pane_ParamLimits

0x16ad,	// (0x0002b930) grid_vitu2_function_top_pane

0x1717,	// (0x0002b99a) popup_vitu2_dropdown_list_window_ParamLimits

0x1717,	// (0x0002b99a) popup_vitu2_dropdown_list_window

0x173e,	// (0x0002b9c1) popup_vitu2_match_list_window

0x1971,	// (0x0002bbf4) cell_vitu2_function_top_pane_ParamLimits

0x1971,	// (0x0002bbf4) cell_vitu2_function_top_pane

0x1989,	// (0x0002bc0c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1989,	// (0x0002bc0c) cell_vitu2_function_top_pane_cp01

0x19a5,	// (0x0002bc28) cell_vitu2_function_top_wide_pane_ParamLimits

0x19a5,	// (0x0002bc28) cell_vitu2_function_top_wide_pane

0xb11c,	// (0x0003539f) bg_button_pane_cp012

0x19c3,	// (0x0002bc46) cell_vitu2_function_top_pane_g1

0xb830,	// (0x00035ab3) bg_button_pane_cp013_ParamLimits

0xb830,	// (0x00035ab3) bg_button_pane_cp013

0x5e89,	// (0x0003010c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5e89,	// (0x0003010c) cell_vitu2_function_top_wide_pane_g1

0xb11c,	// (0x0003539f) bg_popup_sub_pane_cp20

0x19d7,	// (0x0002bc5a) list_vitu2_match_list_pane

0x5576,	// (0x0002f7f9) bg_popup_sub_pane_cp20_g1

0x557e,	// (0x0002f801) bg_popup_sub_pane_cp20_g2

0xca3c,	// (0x00036cbf) bg_popup_sub_pane_cp20_g3

0x5586,	// (0x0002f809) bg_popup_sub_pane_cp20_g4

0xca1c,	// (0x00036c9f) bg_popup_sub_pane_cp20_g5

0x5ea1,	// (0x00030124) bg_popup_sub_pane_cp20_g6

0x5596,	// (0x0002f819) bg_popup_sub_pane_cp20_g7

0x559e,	// (0x0002f821) bg_popup_sub_pane_cp20_g8

0x55a6,	// (0x0002f829) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8ee,	// (0x00039b71) bg_popup_sub_pane_cp20_g

0xb84c,	// (0x00035acf) list_vitu2_match_list_item_pane_ParamLimits

0xb84c,	// (0x00035acf) list_vitu2_match_list_item_pane

0xb85e,	// (0x00035ae1) list_vitu2_match_list_item_pane_t1

0xb12a,	// (0x000353ad) bg_popup_sub_pane_cp21

0xc823,	// (0x00036aa6) grid_vitu2_dropdown_list_pane

0x19ef,	// (0x0002bc72) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x19ef,	// (0x0002bc72) cell_vitu2_dropdown_list_char_pane

0x1a0f,	// (0x0002bc92) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1a0f,	// (0x0002bc92) cell_vitu2_dropdown_list_ctrl_pane

0x5ea9,	// (0x0003012c) cell_vitu2_dropdown_list_char_pane_g1

0x5eb2,	// (0x00030135) cell_vitu2_dropdown_list_char_pane_g2

0x5ebb,	// (0x0003013e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf901,	// (0x00039b84) cell_vitu2_dropdown_list_char_pane_g

0x1a37,	// (0x0002bcba) cell_vitu2_dropdown_list_char_pane_t1

0x5ec4,	// (0x00030147) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5ec4,	// (0x00030147) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5ed1,	// (0x00030154) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5ed1,	// (0x00030154) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5ede,	// (0x00030161) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5ede,	// (0x00030161) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1a45,	// (0x0002bcc8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1a45,	// (0x0002bcc8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x54bb,	// (0x0002f73e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x54bb,	// (0x0002f73e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf908,	// (0x00039b8b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf908,	// (0x00039b8b) cell_vitu2_dropdown_list_ctrl_pane_g

0x5eeb,	// (0x0003016e) aid_size_cell_gallery2_ParamLimits

0x5eeb,	// (0x0003016e) aid_size_cell_gallery2

0x5f09,	// (0x0003018c) grid_gallery2_pane_ParamLimits

0x5f09,	// (0x0003018c) grid_gallery2_pane

0x5f23,	// (0x000301a6) scroll_pane_cp029_ParamLimits

0x5f23,	// (0x000301a6) scroll_pane_cp029

0x5f34,	// (0x000301b7) cell_gallery2_pane_ParamLimits

0x5f34,	// (0x000301b7) cell_gallery2_pane

0x5f93,	// (0x00030216) cell_gallery2_pane_g2

0x5f9b,	// (0x0003021e) cell_gallery2_pane_g3

0x5fa3,	// (0x00030226) cell_gallery2_pane_g4

0x5fab,	// (0x0003022e) cell_gallery2_pane_g5

0xc823,	// (0x00036aa6) grid_highlight_pane_cp10

0x173e,	// (0x0002b9c1) popup_vitu2_match_list_window_ParamLimits

0x1753,	// (0x0002b9d6) popup_vitu2_query_window_ParamLimits

0x1753,	// (0x0002b9d6) popup_vitu2_query_window

0xb12a,	// (0x000353ad) bg_vitu2_candi_button_pane

0x5ea9,	// (0x0003012c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5eb2,	// (0x00030135) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5ebb,	// (0x0003013e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5fb3,	// (0x00030236) bg_button_pane_cp015

0x5fc4,	// (0x00030247) bg_button_pane_cp016

0x5fd0,	// (0x00030253) bg_button_pane_cp017

0xd32e,	// (0x000375b1) bg_popup_sub_pane_cp22

0x600e,	// (0x00030291) popup_vitu2_query_window_g1

0x601a,	// (0x0003029d) popup_vitu2_query_window_g2

0x0002,

0xf913,	// (0x00039b96) popup_vitu2_query_window_g

0x603c,	// (0x000302bf) popup_vitu2_query_window_t1_ParamLimits

0x603c,	// (0x000302bf) popup_vitu2_query_window_t1

0x606f,	// (0x000302f2) popup_vitu2_query_window_t2_ParamLimits

0x606f,	// (0x000302f2) popup_vitu2_query_window_t2

0x6081,	// (0x00030304) popup_vitu2_query_window_t3_ParamLimits

0x6081,	// (0x00030304) popup_vitu2_query_window_t3

0x60a9,	// (0x0003032c) popup_vitu2_query_window_t4_ParamLimits

0x60a9,	// (0x0003032c) popup_vitu2_query_window_t4

0x60bd,	// (0x00030340) popup_vitu2_query_window_t5_ParamLimits

0x60bd,	// (0x00030340) popup_vitu2_query_window_t5

0x0006,

0xf91a,	// (0x00039b9d) popup_vitu2_query_window_t_ParamLimits

0xf91a,	// (0x00039b9d) popup_vitu2_query_window_t

0x59a7,	// (0x0002fc2a) main_cset_text_pane

0x59c8,	// (0x0002fc4b) aid_area_touch_slider_ParamLimits

0x59e4,	// (0x0002fc67) cset_slider_pane_ParamLimits

0x5a07,	// (0x0002fc8a) main_cset_slider_pane_g1_ParamLimits

0x5a1c,	// (0x0002fc9f) main_cset_slider_pane_g2_ParamLimits

0x5a31,	// (0x0002fcb4) main_cset_slider_pane_g3_ParamLimits

0x5a31,	// (0x0002fcb4) main_cset_slider_pane_g3

0x5a3d,	// (0x0002fcc0) main_cset_slider_pane_g4_ParamLimits

0x5a3d,	// (0x0002fcc0) main_cset_slider_pane_g4

0x5a4c,	// (0x0002fccf) main_cset_slider_pane_g5_ParamLimits

0x5a4c,	// (0x0002fccf) main_cset_slider_pane_g5

0x5a58,	// (0x0002fcdb) main_cset_slider_pane_g6_ParamLimits

0x5a58,	// (0x0002fcdb) main_cset_slider_pane_g6

0xf877,	// (0x00039afa) main_cset_slider_pane_g_ParamLimits

0x5b08,	// (0x0002fd8b) main_cset_slider_pane_t1_ParamLimits

0x5b30,	// (0x0002fdb3) main_cset_slider_pane_t2_ParamLimits

0x5b4a,	// (0x0002fdcd) main_cset_slider_pane_t3_ParamLimits

0x5b64,	// (0x0002fde7) main_cset_slider_pane_t4_ParamLimits

0x5b7e,	// (0x0002fe01) main_cset_slider_pane_t5_ParamLimits

0x5b98,	// (0x0002fe1b) main_cset_slider_pane_t6_ParamLimits

0x5bad,	// (0x0002fe30) main_cset_slider_pane_t7_ParamLimits

0x5bd7,	// (0x0002fe5a) main_cset_slider_pane_t8_ParamLimits

0x5bd7,	// (0x0002fe5a) main_cset_slider_pane_t8

0x5bff,	// (0x0002fe82) main_cset_slider_pane_t9_ParamLimits

0x5bff,	// (0x0002fe82) main_cset_slider_pane_t9

0x5c27,	// (0x0002feaa) main_cset_slider_pane_t10_ParamLimits

0x5c27,	// (0x0002feaa) main_cset_slider_pane_t10

0x5c4f,	// (0x0002fed2) main_cset_slider_pane_t11_ParamLimits

0x5c4f,	// (0x0002fed2) main_cset_slider_pane_t11

0x5c77,	// (0x0002fefa) main_cset_slider_pane_t12_ParamLimits

0x5c77,	// (0x0002fefa) main_cset_slider_pane_t12

0x5c94,	// (0x0002ff17) main_cset_slider_pane_t13_ParamLimits

0x5c94,	// (0x0002ff17) main_cset_slider_pane_t13

0xf89c,	// (0x00039b1f) main_cset_slider_pane_t_ParamLimits

0xbead,	// (0x00036130) bg_popup_sub_pane_cp011

0x6127,	// (0x000303aa) main_cset_text_pane_g1

0x612f,	// (0x000303b2) main_cset_text_pane_t1

0x613d,	// (0x000303c0) main_cset_text_pane_t2

0x614b,	// (0x000303ce) main_cset_text_pane_t3

0x6159,	// (0x000303dc) main_cset_text_pane_t4

0x6167,	// (0x000303ea) main_cset_text_pane_t5

0x6175,	// (0x000303f8) main_cset_text_pane_t6

0x6183,	// (0x00030406) main_cset_text_pane_t7

0x0006,

0xf929,	// (0x00039bac) main_cset_text_pane_t

0xb12a,	// (0x000353ad) main_cam4_burst_pane

0xb12a,	// (0x000353ad) main_cam5_pane

0x58b4,	// (0x0002fb37) bg_button_pane_cp019

0x58bd,	// (0x0002fb40) bg_button_pane_cp020

0x5a6c,	// (0x0002fcef) main_cset_slider_pane_g7_ParamLimits

0x5a6c,	// (0x0002fcef) main_cset_slider_pane_g7

0x5a78,	// (0x0002fcfb) main_cset_slider_pane_g8_ParamLimits

0x5a78,	// (0x0002fcfb) main_cset_slider_pane_g8

0x5a84,	// (0x0002fd07) main_cset_slider_pane_g9_ParamLimits

0x5a84,	// (0x0002fd07) main_cset_slider_pane_g9

0x5a90,	// (0x0002fd13) main_cset_slider_pane_g10_ParamLimits

0x5a90,	// (0x0002fd13) main_cset_slider_pane_g10

0x5a9c,	// (0x0002fd1f) main_cset_slider_pane_g11_ParamLimits

0x5a9c,	// (0x0002fd1f) main_cset_slider_pane_g11

0x5aa8,	// (0x0002fd2b) main_cset_slider_pane_g12_ParamLimits

0x5aa8,	// (0x0002fd2b) main_cset_slider_pane_g12

0x5ab4,	// (0x0002fd37) main_cset_slider_pane_g13_ParamLimits

0x5ab4,	// (0x0002fd37) main_cset_slider_pane_g13

0x5ac0,	// (0x0002fd43) main_cset_slider_pane_g14_ParamLimits

0x5ac0,	// (0x0002fd43) main_cset_slider_pane_g14

0x5acc,	// (0x0002fd4f) main_cset_slider_pane_g15_ParamLimits

0x5acc,	// (0x0002fd4f) main_cset_slider_pane_g15

0x5cb1,	// (0x0002ff34) main_cset_slider_pane_t14_ParamLimits

0x5cb1,	// (0x0002ff34) main_cset_slider_pane_t14

0x5cea,	// (0x0002ff6d) main_cset_slider_pane_t15_ParamLimits

0x5cea,	// (0x0002ff6d) main_cset_slider_pane_t15

0x6191,	// (0x00030414) aid_cam4_burst_size_cell_ParamLimits

0x6191,	// (0x00030414) aid_cam4_burst_size_cell

0x61b1,	// (0x00030434) grid_cam4_burst_pane_ParamLimits

0x61b1,	// (0x00030434) grid_cam4_burst_pane

0x61e9,	// (0x0003046c) linegrid_cam4_burst_pane_ParamLimits

0x61e9,	// (0x0003046c) linegrid_cam4_burst_pane

0x620d,	// (0x00030490) scroll_pane_cp30_ParamLimits

0x620d,	// (0x00030490) scroll_pane_cp30

0x6219,	// (0x0003049c) cell_cam4_burst_pane_ParamLimits

0x6219,	// (0x0003049c) cell_cam4_burst_pane

0x6266,	// (0x000304e9) linegrid_cam4_burst_pane_g1_ParamLimits

0x6266,	// (0x000304e9) linegrid_cam4_burst_pane_g1

0x6273,	// (0x000304f6) linegrid_cam4_burst_pane_g2_ParamLimits

0x6273,	// (0x000304f6) linegrid_cam4_burst_pane_g2

0x6284,	// (0x00030507) linegrid_cam4_burst_pane_g3_ParamLimits

0x6284,	// (0x00030507) linegrid_cam4_burst_pane_g3

0x0002,

0xf938,	// (0x00039bbb) linegrid_cam4_burst_pane_g_ParamLimits

0xf938,	// (0x00039bbb) linegrid_cam4_burst_pane_g

0x6291,	// (0x00030514) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6291,	// (0x00030514) linegrid_cam4_burst_pane_g3_copy1

0x62ab,	// (0x0003052e) linegrid_cam4_burst_pane_g4_ParamLimits

0x62ab,	// (0x0003052e) linegrid_cam4_burst_pane_g4

0x62b8,	// (0x0003053b) linegrid_cam4_burst_pane_g5_ParamLimits

0x62b8,	// (0x0003053b) linegrid_cam4_burst_pane_g5

0x62c9,	// (0x0003054c) linegrid_cam4_burst_pane_g6_ParamLimits

0x62c9,	// (0x0003054c) linegrid_cam4_burst_pane_g6

0x62e0,	// (0x00030563) linegrid_cam4_burst_pane_g7_ParamLimits

0x62e0,	// (0x00030563) linegrid_cam4_burst_pane_g7

0x62ed,	// (0x00030570) cell_cam4_burst_pane_g1

0x630c,	// (0x0003058f) main_cam5_pane_t1_ParamLimits

0x630c,	// (0x0003058f) main_cam5_pane_t1

0x631e,	// (0x000305a1) main_cam5_pane_t2_ParamLimits

0x631e,	// (0x000305a1) main_cam5_pane_t2

0x6330,	// (0x000305b3) main_cam5_pane_t3_ParamLimits

0x6330,	// (0x000305b3) main_cam5_pane_t3

0x6342,	// (0x000305c5) main_cam5_pane_t4_ParamLimits

0x6342,	// (0x000305c5) main_cam5_pane_t4

0x635a,	// (0x000305dd) main_cam5_pane_t5_ParamLimits

0x635a,	// (0x000305dd) main_cam5_pane_t5

0x636e,	// (0x000305f1) main_cam5_pane_t6_ParamLimits

0x636e,	// (0x000305f1) main_cam5_pane_t6

0x6382,	// (0x00030605) main_cam5_pane_t7_ParamLimits

0x6382,	// (0x00030605) main_cam5_pane_t7

0x6394,	// (0x00030617) main_cam5_pane_t8_ParamLimits

0x6394,	// (0x00030617) main_cam5_pane_t8

0x63b0,	// (0x00030633) main_cam5_pane_t9_ParamLimits

0x63b0,	// (0x00030633) main_cam5_pane_t9

0x63c2,	// (0x00030645) main_cam5_pane_t10_ParamLimits

0x63c2,	// (0x00030645) main_cam5_pane_t10

0x63d4,	// (0x00030657) main_cam5_pane_t11_ParamLimits

0x63d4,	// (0x00030657) main_cam5_pane_t11

0x63e6,	// (0x00030669) main_cam5_pane_t12_ParamLimits

0x63e6,	// (0x00030669) main_cam5_pane_t12

0x63fb,	// (0x0003067e) main_cam5_pane_t13_ParamLimits

0x63fb,	// (0x0003067e) main_cam5_pane_t13

0x000c,

0xf944,	// (0x00039bc7) main_cam5_pane_t_ParamLimits

0xf944,	// (0x00039bc7) main_cam5_pane_t

0x08fc,	// (0x0002ab7f) popup_scut_keymap_window_ParamLimits

0x08fc,	// (0x0002ab7f) popup_scut_keymap_window

0x6418,	// (0x0003069b) aid_size_cell_brow_shortcut

0xc823,	// (0x00036aa6) bg_popup_window_pane_cp010

0x6424,	// (0x000306a7) grid_scut_pane

0x6430,	// (0x000306b3) cell_scut_pane_ParamLimits

0x6430,	// (0x000306b3) cell_scut_pane

0x6447,	// (0x000306ca) cell_scut_pane_g1

0x6450,	// (0x000306d3) cell_scut_pane_t1

0x645f,	// (0x000306e2) cell_scut_pane_t2

0x646e,	// (0x000306f1) cell_scut_pane_t3

0x0002,

0xf95f,	// (0x00039be2) cell_scut_pane_t

0x493a,	// (0x0002ebbd) main_mup3_pane_g8_ParamLimits

0x493a,	// (0x0002ebbd) main_mup3_pane_g8

0x1639,	// (0x0002b8bc) area_vitu2_query_pane_ParamLimits

0x1639,	// (0x0002b8bc) area_vitu2_query_pane

0x5fdc,	// (0x0003025f) input_focus_pane_cp08

0x647c,	// (0x000306ff) area_vitu2_query_pane_g1

0x6488,	// (0x0003070b) area_vitu2_query_pane_g2

0x0001,

0xf966,	// (0x00039be9) area_vitu2_query_pane_g

0x6497,	// (0x0003071a) area_vitu2_query_pane_t1_ParamLimits

0x6497,	// (0x0003071a) area_vitu2_query_pane_t1

0x64ab,	// (0x0003072e) area_vitu2_query_pane_t2_ParamLimits

0x64ab,	// (0x0003072e) area_vitu2_query_pane_t2

0x64bf,	// (0x00030742) area_vitu2_query_pane_t3_ParamLimits

0x64bf,	// (0x00030742) area_vitu2_query_pane_t3

0x64e7,	// (0x0003076a) area_vitu2_query_pane_t4_ParamLimits

0x64e7,	// (0x0003076a) area_vitu2_query_pane_t4

0x650f,	// (0x00030792) area_vitu2_query_pane_t5_ParamLimits

0x650f,	// (0x00030792) area_vitu2_query_pane_t5

0x6537,	// (0x000307ba) area_vitu2_query_pane_t6_ParamLimits

0x6537,	// (0x000307ba) area_vitu2_query_pane_t6

0x0006,

0xf96b,	// (0x00039bee) area_vitu2_query_pane_t_ParamLimits

0xf96b,	// (0x00039bee) area_vitu2_query_pane_t

0x6583,	// (0x00030806) bg_button_pane_cp018

0x658f,	// (0x00030812) bg_button_pane_cp021

0x659b,	// (0x0003081e) bg_button_pane_cp022

0x65ba,	// (0x0003083d) input_focus_pane_cp09

0xd09e,	// (0x00037321) aid_size_touch_mv_arrow_left

0xd0c7,	// (0x0003734a) aid_size_touch_mv_arrow_right

0x5ae4,	// (0x0002fd67) main_cset_slider_pane_g16_ParamLimits

0x5ae4,	// (0x0002fd67) main_cset_slider_pane_g16

0x5af0,	// (0x0002fd73) main_cset_slider_pane_g17_ParamLimits

0x5af0,	// (0x0002fd73) main_cset_slider_pane_g17

0x62ed,	// (0x00030570) cell_cam4_burst_pane_g1_ParamLimits

0xbead,	// (0x00036130) compa_mode_pane

0x5dc9,	// (0x0003004c) popup_vtel_slider_window_g3_ParamLimits

0x5dc9,	// (0x0003004c) popup_vtel_slider_window_g3

0x5de0,	// (0x00030063) popup_vtel_slider_window_g4_ParamLimits

0x5de0,	// (0x00030063) popup_vtel_slider_window_g4

0x5df7,	// (0x0003007a) popup_vtel_slider_window_t1_ParamLimits

0x5df7,	// (0x0003007a) popup_vtel_slider_window_t1

0xb12a,	// (0x000353ad) main_cl_pane

0xb2cf,	// (0x00035552) popup_imed_adjust2_window_ParamLimits

0xd32e,	// (0x000375b1) bg_tb_trans_pane_cp05_ParamLimits

0xee1a,	// (0x0003909d) popup_imed_adjust2_window_g1_ParamLimits

0xee29,	// (0x000390ac) popup_imed_adjust2_window_g2_ParamLimits

0xee29,	// (0x000390ac) popup_imed_adjust2_window_g2

0xee35,	// (0x000390b8) popup_imed_adjust2_window_g3_ParamLimits

0xee35,	// (0x000390b8) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x00039990) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x00039990) popup_imed_adjust2_window_g

0xee41,	// (0x000390c4) popup_imed_adjust2_window_t1_ParamLimits

0xee59,	// (0x000390dc) slider_imed_adjust_pane_ParamLimits

0xee6d,	// (0x000390f0) slider_imed_adjust_pane_g1_ParamLimits

0xee7d,	// (0x00039100) slider_imed_adjust_pane_g2_ParamLimits

0xee8d,	// (0x00039110) slider_imed_adjust_pane_g3_ParamLimits

0xee9e,	// (0x00039121) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x00039997) slider_imed_adjust_pane_g_ParamLimits

0x13f6,	// (0x0002b679) aid_touch_area_cam4_ParamLimits

0x13f6,	// (0x0002b679) aid_touch_area_cam4

0xb708,	// (0x0003598b) battery_pane_cp01

0x14c5,	// (0x0002b748) main_camera4_pane_g6_ParamLimits

0x14c5,	// (0x0002b748) main_camera4_pane_g6

0x14ef,	// (0x0002b772) main_camera4_pane_t2_ParamLimits

0x14ef,	// (0x0002b772) main_camera4_pane_t2

0x0001,

0xf7ea,	// (0x00039a6d) main_camera4_pane_t_ParamLimits

0xf7ea,	// (0x00039a6d) main_camera4_pane_t

0x1510,	// (0x0002b793) aid_touch_area_vid4_ParamLimits

0x1510,	// (0x0002b793) aid_touch_area_vid4

0x1564,	// (0x0002b7e7) main_video4_pane_g5_ParamLimits

0x1564,	// (0x0002b7e7) main_video4_pane_g5

0x1589,	// (0x0002b80c) vid4_progress_pane_ParamLimits

0x1589,	// (0x0002b80c) vid4_progress_pane

0x5afc,	// (0x0002fd7f) main_cset_slider_pane_g18_ParamLimits

0x5afc,	// (0x0002fd7f) main_cset_slider_pane_g18

0x6300,	// (0x00030583) cell_cam4_burst_pane_g2_ParamLimits

0x6300,	// (0x00030583) cell_cam4_burst_pane_g2

0x0001,

0xf93f,	// (0x00039bc2) cell_cam4_burst_pane_g_ParamLimits

0xf93f,	// (0x00039bc2) cell_cam4_burst_pane_g

0xc64a,	// (0x000368cd) bg_cl_pane_ParamLimits

0xc64a,	// (0x000368cd) bg_cl_pane

0x65ca,	// (0x0003084d) cl_header_pane_ParamLimits

0x65ca,	// (0x0003084d) cl_header_pane

0x65de,	// (0x00030861) cl_listscroll_pane_ParamLimits

0x65de,	// (0x00030861) cl_listscroll_pane

0x65ee,	// (0x00030871) bg_cl_pane_g1

0x65f6,	// (0x00030879) bg_cl_pane_g2

0x65fe,	// (0x00030881) bg_cl_pane_g3

0x6606,	// (0x00030889) bg_cl_pane_g4

0x660e,	// (0x00030891) bg_cl_pane_g5

0x6616,	// (0x00030899) bg_cl_pane_g6

0x661e,	// (0x000308a1) bg_cl_pane_g7

0x6626,	// (0x000308a9) bg_cl_pane_g8

0x662e,	// (0x000308b1) bg_cl_pane_g9

0x0008,

0xf97a,	// (0x00039bfd) bg_cl_pane_g

0x6636,	// (0x000308b9) aid_height_cl_leading_ParamLimits

0x6636,	// (0x000308b9) aid_height_cl_leading

0x6642,	// (0x000308c5) aid_height_cl_text_ParamLimits

0x6642,	// (0x000308c5) aid_height_cl_text

0xc547,	// (0x000367ca) bg_cl_header_pane_ParamLimits

0xc547,	// (0x000367ca) bg_cl_header_pane

0x6661,	// (0x000308e4) cl_header_pane_g1_ParamLimits

0x6661,	// (0x000308e4) cl_header_pane_g1

0x6677,	// (0x000308fa) cl_header_pane_t1_ParamLimits

0x6677,	// (0x000308fa) cl_header_pane_t1

0x6690,	// (0x00030913) cl_list_pane

0x59bf,	// (0x0002fc42) hc_scroll_pane_cp01

0xca1c,	// (0x00036c9f) bg_cl_header_pane_g1

0x5576,	// (0x0002f7f9) bg_cl_header_pane_g2

0xca3c,	// (0x00036cbf) bg_cl_header_pane_g3

0x5586,	// (0x0002f809) bg_cl_header_pane_g4

0x557e,	// (0x0002f801) bg_cl_header_pane_g5

0x5ea1,	// (0x00030124) bg_cl_header_pane_g6

0x559e,	// (0x0002f821) bg_cl_header_pane_g7

0x55a6,	// (0x0002f829) bg_cl_header_pane_g8

0x5596,	// (0x0002f819) bg_cl_header_pane_g9

0x0008,

0xf98d,	// (0x00039c10) bg_cl_header_pane_g

0x6699,	// (0x0003091c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6699,	// (0x0003091c) hc_cl_list_double_graphic_heading_pane

0x66aa,	// (0x0003092d) hc_cl_list_single_graphic_pane_ParamLimits

0x66aa,	// (0x0003092d) hc_cl_list_single_graphic_pane

0x66c0,	// (0x00030943) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x66c0,	// (0x00030943) hc_cl_list_single_graphic_pane_g1

0x66cc,	// (0x0003094f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x66cc,	// (0x0003094f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a0,	// (0x00039c23) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a0,	// (0x00039c23) hc_cl_list_single_graphic_pane_g

0x66e0,	// (0x00030963) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x66e0,	// (0x00030963) hc_cl_list_single_graphic_pane_t1

0x66c0,	// (0x00030943) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x66c0,	// (0x00030943) hc_cl_list_double_graphic_heading_pane_g1

0x66f5,	// (0x00030978) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x66f5,	// (0x00030978) hc_cl_list_double_graphic_heading_pane_g2

0x6709,	// (0x0003098c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6709,	// (0x0003098c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9a5,	// (0x00039c28) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9a5,	// (0x00039c28) hc_cl_list_double_graphic_heading_pane_g

0x671d,	// (0x000309a0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x671d,	// (0x000309a0) hc_cl_list_double_graphic_heading_pane_t1

0x6732,	// (0x000309b5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6732,	// (0x000309b5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9ac,	// (0x00039c2f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9ac,	// (0x00039c2f) hc_cl_list_double_graphic_heading_pane_t

0xb874,	// (0x00035af7) vid4_progress_pane_g1

0xb884,	// (0x00035b07) vid4_progress_pane_g2

0x1a61,	// (0x0002bce4) vid4_progress_pane_g3

0xb894,	// (0x00035b17) vid4_progress_pane_g4

0x0004,

0xf9b1,	// (0x00039c34) vid4_progress_pane_g

0x1a73,	// (0x0002bcf6) vid4_progress_pane_t1

0xb8ac,	// (0x00035b2f) vid4_progress_pane_t2

0x0002,

0xf9bc,	// (0x00039c3f) vid4_progress_pane_t

0x1a8b,	// (0x0002bd0e) wait_bar_pane_cp07

0xe72f,	// (0x000389b2) blid_firmament_pane_ParamLimits

0xe772,	// (0x000389f5) popup_blid_sat_info2_window_g1

0xe796,	// (0x00038a19) popup_blid_sat_info2_window_t3

0xe7a4,	// (0x00038a27) popup_blid_sat_info2_window_t4

0xe7b2,	// (0x00038a35) popup_blid_sat_info2_window_t5

0xe7c0,	// (0x00038a43) popup_blid_sat_info2_window_t6

0xe7d0,	// (0x00038a53) popup_blid_sat_info2_window_t7

0xe7de,	// (0x00038a61) popup_blid_sat_info2_window_t8

0xe7ec,	// (0x00038a6f) popup_blid_sat_info2_window_t9

0xe7fa,	// (0x00038a7d) popup_blid_sat_info2_window_t10

0xe8bb,	// (0x00038b3e) aid_firma_cardinal_ParamLimits

0xe8cf,	// (0x00038b52) blid_firmament_pane_t1_ParamLimits

0xe8e6,	// (0x00038b69) blid_firmament_pane_t2_ParamLimits

0xe8fd,	// (0x00038b80) blid_firmament_pane_t3_ParamLimits

0xe914,	// (0x00038b97) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x00039889) blid_firmament_pane_t_ParamLimits

0xe92b,	// (0x00038bae) blid_sat_info_pane_ParamLimits

0xb11c,	// (0x0003539f) main_cam_set_pane_ParamLimits

0x504c,	// (0x0002f2cf) aid_size_cell_colour_35_ParamLimits

0x506c,	// (0x0002f2ef) aid_size_cell_colour_112_ParamLimits

0x508c,	// (0x0002f30f) aid_size_cell_effect_ParamLimits

0xd32e,	// (0x000375b1) bg_tb_trans_pane_cp02_ParamLimits

0xcc8c,	// (0x00036f0f) heading_imed_pane_ParamLimits

0x50ac,	// (0x0002f32f) listscroll_imed_pane_ParamLimits

0xdc1c,	// (0x00037e9f) popup_call2_audio_first_window_g5_ParamLimits

0xdc1c,	// (0x00037e9f) popup_call2_audio_first_window_g5

0x10d9,	// (0x0002b35c) aid_size_touch_image3_arrow_left_ParamLimits

0x10d9,	// (0x0002b35c) aid_size_touch_image3_arrow_left

0x1105,	// (0x0002b388) aid_size_touch_image3_arrow_right_ParamLimits

0x1105,	// (0x0002b388) aid_size_touch_image3_arrow_right

0xb8c1,	// (0x00035b44) vid4_progress_pane_t3

0x5251,	// (0x0002f4d4) main_hwr_training_symbol_option_pane_ParamLimits

0x5251,	// (0x0002f4d4) main_hwr_training_symbol_option_pane

0xefa8,	// (0x0003922b) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x0003922b) popup_hwr_training_preview_window

0x0fe7,	// (0x0002b26a) hwr_training_navi_pane_g5_ParamLimits

0x0fe7,	// (0x0002b26a) hwr_training_navi_pane_g5

0x5564,	// (0x0002f7e7) popup_char_count_window

0xb11c,	// (0x0003539f) bg_popup_sub_pane_cp20_ParamLimits

0x19d7,	// (0x0002bc5a) list_vitu2_match_list_pane_ParamLimits

0x19e3,	// (0x0002bc66) vitu2_page_scroll_pane_ParamLimits

0x19e3,	// (0x0002bc66) vitu2_page_scroll_pane

0x677d,	// (0x00030a00) list_single_hwr_training_symbol_option_pane_ParamLimits

0x677d,	// (0x00030a00) list_single_hwr_training_symbol_option_pane

0x6790,	// (0x00030a13) list_single_hwr_training_symbol_option_pane_g1

0x6798,	// (0x00030a1b) list_single_hwr_training_symbol_option_pane_t1

0x67a6,	// (0x00030a29) bg_button_pane_cp023

0x67af,	// (0x00030a32) bg_button_pane_cp024

0x67e2,	// (0x00030a65) vitu2_page_scroll_pane_g1

0x67ea,	// (0x00030a6d) vitu2_page_scroll_pane_g2

0x0001,

0xf9c3,	// (0x00039c46) vitu2_page_scroll_pane_g

0x67f2,	// (0x00030a75) vitu2_page_scroll_pane_t1

0xe697,	// (0x0003891a) popup_char_count_window_g1

0x6801,	// (0x00030a84) popup_char_count_window_g2

0x680a,	// (0x00030a8d) popup_char_count_window_g3

0x0002,

0xf9c8,	// (0x00039c4b) popup_char_count_window_g

0x6813,	// (0x00030a96) popup_char_count_window_t1

0xb12a,	// (0x000353ad) main_vded2_pane

0xee06,	// (0x00039089) aid_size_cell_imed_line

0xee10,	// (0x00039093) grid_imed_line_width_pane

0xb7c0,	// (0x00035a43) vid4_indicators_pane_g4

0x6821,	// (0x00030aa4) cell_imed_line_width_pane_ParamLimits

0x6821,	// (0x00030aa4) cell_imed_line_width_pane

0x6835,	// (0x00030ab8) cell_imed_line_width_pane_g1

0x683e,	// (0x00030ac1) cell_imed_line_width_pane_g2

0x0001,

0xf9cf,	// (0x00039c52) cell_imed_line_width_pane_g

0x6846,	// (0x00030ac9) main_vded2_pane_g1_ParamLimits

0x6846,	// (0x00030ac9) main_vded2_pane_g1

0x685c,	// (0x00030adf) main_vded2_pane_g2_ParamLimits

0x685c,	// (0x00030adf) main_vded2_pane_g2

0x0001,

0xf9d4,	// (0x00039c57) main_vded2_pane_g_ParamLimits

0xf9d4,	// (0x00039c57) main_vded2_pane_g

0x686e,	// (0x00030af1) vded2_slider_pane_ParamLimits

0x686e,	// (0x00030af1) vded2_slider_pane

0x687e,	// (0x00030b01) aid_size_touch_vded2_end

0x6888,	// (0x00030b0b) aid_size_touch_vded2_playhead

0x6892,	// (0x00030b15) aid_size_touch_vded2_start

0x689a,	// (0x00030b1d) vded2_slider_bg_pane

0x68a3,	// (0x00030b26) vded2_slider_pane_g1

0x68ac,	// (0x00030b2f) vded2_slider_pane_g2

0x68b4,	// (0x00030b37) vded2_slider_pane_g3

0x0002,

0xf9d9,	// (0x00039c5c) vded2_slider_pane_g

0x68bf,	// (0x00030b42) vded2_slider_bg_pane_g1

0x68c8,	// (0x00030b4b) vded2_slider_bg_pane_g2

0x68d1,	// (0x00030b54) vded2_slider_bg_pane_g3

0x0002,

0xf9e0,	// (0x00039c63) vded2_slider_bg_pane_g

0x3a09,	// (0x0002dc8c) aid_postcard_touch_down_pane_ParamLimits

0x3a09,	// (0x0002dc8c) aid_postcard_touch_down_pane

0x3a1f,	// (0x0002dca2) aid_postcard_touch_up_pane_ParamLimits

0x3a1f,	// (0x0002dca2) aid_postcard_touch_up_pane

0xb12a,	// (0x000353ad) main_blid2_pane

0xb2b5,	// (0x00035538) popup_blid2_search_window

0xbead,	// (0x00036130) blid2_gps_pane

0xbead,	// (0x00036130) blid2_navig_pane

0xbead,	// (0x00036130) blid2_search_pane

0xbead,	// (0x00036130) blid2_tripm_pane

0x68da,	// (0x00030b5d) blid2_search_pane_g1_ParamLimits

0x68da,	// (0x00030b5d) blid2_search_pane_g1

0x68f4,	// (0x00030b77) blid2_search_pane_t1_ParamLimits

0x68f4,	// (0x00030b77) blid2_search_pane_t1

0x6906,	// (0x00030b89) aid_size_cell_blid2_gps_ParamLimits

0x6906,	// (0x00030b89) aid_size_cell_blid2_gps

0x691e,	// (0x00030ba1) blid2_gps_pane_g1_ParamLimits

0x691e,	// (0x00030ba1) blid2_gps_pane_g1

0x6932,	// (0x00030bb5) grid_blid2_satellite_pane_ParamLimits

0x6932,	// (0x00030bb5) grid_blid2_satellite_pane

0x694c,	// (0x00030bcf) blid2_navig_pane_g1_ParamLimits

0x694c,	// (0x00030bcf) blid2_navig_pane_g1

0x6958,	// (0x00030bdb) blid2_navig_pane_t1_ParamLimits

0x6958,	// (0x00030bdb) blid2_navig_pane_t1

0x6973,	// (0x00030bf6) blid2_navig_pane_t2_ParamLimits

0x6973,	// (0x00030bf6) blid2_navig_pane_t2

0x0001,

0xf9e7,	// (0x00039c6a) blid2_navig_pane_t_ParamLimits

0xf9e7,	// (0x00039c6a) blid2_navig_pane_t

0x698e,	// (0x00030c11) blid2_navig_ring_pane_ParamLimits

0x698e,	// (0x00030c11) blid2_navig_ring_pane

0x69a7,	// (0x00030c2a) blid2_speed_pane_ParamLimits

0x69a7,	// (0x00030c2a) blid2_speed_pane

0x69b3,	// (0x00030c36) blid2_tripm_pane_g1_ParamLimits

0x69b3,	// (0x00030c36) blid2_tripm_pane_g1

0x69cc,	// (0x00030c4f) blid2_tripm_pane_g2_ParamLimits

0x69cc,	// (0x00030c4f) blid2_tripm_pane_g2

0x69e0,	// (0x00030c63) blid2_tripm_pane_g3_ParamLimits

0x69e0,	// (0x00030c63) blid2_tripm_pane_g3

0x69f4,	// (0x00030c77) blid2_tripm_pane_g4_ParamLimits

0x69f4,	// (0x00030c77) blid2_tripm_pane_g4

0x6a08,	// (0x00030c8b) blid2_tripm_pane_g5_ParamLimits

0x6a08,	// (0x00030c8b) blid2_tripm_pane_g5

0x0005,

0xf9ec,	// (0x00039c6f) blid2_tripm_pane_g_ParamLimits

0xf9ec,	// (0x00039c6f) blid2_tripm_pane_g

0x6a2e,	// (0x00030cb1) blid2_tripm_pane_t1_ParamLimits

0x6a2e,	// (0x00030cb1) blid2_tripm_pane_t1

0x6a49,	// (0x00030ccc) blid2_tripm_pane_t2_ParamLimits

0x6a49,	// (0x00030ccc) blid2_tripm_pane_t2

0x6a62,	// (0x00030ce5) blid2_tripm_pane_t3_ParamLimits

0x6a62,	// (0x00030ce5) blid2_tripm_pane_t3

0x0003,

0xf9f9,	// (0x00039c7c) blid2_tripm_pane_t_ParamLimits

0xf9f9,	// (0x00039c7c) blid2_tripm_pane_t

0x6aa9,	// (0x00030d2c) cell_blid2_satellite_pane_ParamLimits

0x6aa9,	// (0x00030d2c) cell_blid2_satellite_pane

0x6ac7,	// (0x00030d4a) cell_blid2_satellite_pane_g1

0x6ad0,	// (0x00030d53) cell_blid2_satellite_pane_t1

0xc5ec,	// (0x0003686f) blid2_speed_pane_g1

0x6ade,	// (0x00030d61) blid2_speed_pane_t1

0x6aec,	// (0x00030d6f) blid2_speed_pane_t2

0x0001,

0xfa02,	// (0x00039c85) blid2_speed_pane_t

0xc5ec,	// (0x0003686f) blid2_navig_ring_pane_g1

0x6afa,	// (0x00030d7d) blid2_navig_ring_pane_g2

0x6b02,	// (0x00030d85) blid2_navig_ring_pane_g3

0x6b0a,	// (0x00030d8d) blid2_navig_ring_pane_g4

0x6b12,	// (0x00030d95) blid2_navig_ring_pane_g5

0x0004,

0xfa07,	// (0x00039c8a) blid2_navig_ring_pane_g

0xbead,	// (0x00036130) bg_popup_window_pane_cp011

0x6b1a,	// (0x00030d9d) popup_blid2_search_window_g1

0x6b22,	// (0x00030da5) popup_blid2_search_window_t1

0x6b30,	// (0x00030db3) popup_blid2_search_window_t2

0x0001,

0xfa12,	// (0x00039c95) popup_blid2_search_window_t

0xc92b,	// (0x00036bae) main_browser_pane_g1

0xc64a,	// (0x000368cd) main_browser_pane_ParamLimits

0xb11c,	// (0x0003539f) bg_button_pane_cp011_ParamLimits

0x1955,	// (0x0002bbd8) cell_vitu2_function_pane_g1_ParamLimits

0xd32e,	// (0x000375b1) bg_popup_sub_pane_cp22_ParamLimits

0x5fdc,	// (0x0003025f) input_focus_pane_cp08_ParamLimits

0x5ff7,	// (0x0003027a) popup_vitu2_query_button_pane_ParamLimits

0x5ff7,	// (0x0003027a) popup_vitu2_query_button_pane

0x6006,	// (0x00030289) popup_vitu2_query_input_button_pane

0x600e,	// (0x00030291) popup_vitu2_query_window_g1_ParamLimits

0x601a,	// (0x0003029d) popup_vitu2_query_window_g2_ParamLimits

0xf913,	// (0x00039b96) popup_vitu2_query_window_g_ParamLimits

0xbead,	// (0x00036130) bg_button_pane_cp026

0x6b3e,	// (0x00030dc1) popup_vitu2_query_input_button_pane_g1

0xbead,	// (0x00036130) bg_button_pane_cp025

0x6b46,	// (0x00030dc9) popup_vitu2_query_button_pane_t1

0x45a3,	// (0x0002e826) main_mp3_pane_t6

0x45b1,	// (0x0002e834) popup_slider_window_cp01

0xb724,	// (0x000359a7) cam4_battery_pane

0xb77d,	// (0x00035a00) cam4_battery_pane_cp02

0xb86c,	// (0x00035aef) cam4_battery_pane_cp01

0xb86c,	// (0x00035aef) cam4_battery_pane_cp03

0x4517,	// (0x0002e79a) cam4_battery_pane_g1

0xc5ec,	// (0x0003686f) cam4_battery_pane_g2

0x0001,

0xfa17,	// (0x00039c9a) cam4_battery_pane_g

0xe808,	// (0x00038a8b) popup_blid_sat_info2_window_t11

0xd09e,	// (0x00037321) aid_size_touch_mv_arrow_left_ParamLimits

0xd0c7,	// (0x0003734a) aid_size_touch_mv_arrow_right_ParamLimits

0xd125,	// (0x000373a8) navi_pane_g1_ParamLimits

0xd131,	// (0x000373b4) navi_pane_g2_ParamLimits

0xd15f,	// (0x000373e2) navi_pane_g3_ParamLimits

0xf32f,	// (0x000395b2) navi_pane_g_ParamLimits

0x365f,	// (0x0002d8e2) navi_pane_mv_t1_ParamLimits

0x50b8,	// (0x0002f33b) grid_imed_effect_pane_ParamLimits

0x2408,	// (0x0002c68b) aid_placing_vt_slider_lsc

0xc87a,	// (0x00036afd) aid_placing_vt_slider_prt

0xc547,	// (0x000367ca) bg_tb_trans_pane_cp01_ParamLimits

0xeaaa,	// (0x00038d2d) popup_image_details_window_g1_ParamLimits

0xeabd,	// (0x00038d40) popup_image_details_window_g2_ParamLimits

0xead2,	// (0x00038d55) popup_image_details_window_g3_ParamLimits

0xead2,	// (0x00038d55) popup_image_details_window_g3

0xf646,	// (0x000398c9) popup_image_details_window_g_ParamLimits

0xeae6,	// (0x00038d69) popup_image_details_window_t1_ParamLimits

0xeaf8,	// (0x00038d7b) popup_image_details_window_t2_ParamLimits

0xeb11,	// (0x00038d94) popup_image_details_window_t3_ParamLimits

0xeb25,	// (0x00038da8) popup_image_details_window_t4_ParamLimits

0xeb40,	// (0x00038dc3) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x000398d0) popup_image_details_window_t_ParamLimits

0x664e,	// (0x000308d1) cl_header_name_pane_ParamLimits

0x664e,	// (0x000308d1) cl_header_name_pane

0x6b54,	// (0x00030dd7) cl_header_name_pane_t1_ParamLimits

0x6b54,	// (0x00030dd7) cl_header_name_pane_t1

0x6b75,	// (0x00030df8) cl_header_name_pane_t2_ParamLimits

0x6b75,	// (0x00030df8) cl_header_name_pane_t2

0x6bb7,	// (0x00030e3a) cl_header_name_pane_t3_ParamLimits

0x6bb7,	// (0x00030e3a) cl_header_name_pane_t3

0x0002,

0xfa1c,	// (0x00039c9f) cl_header_name_pane_t_ParamLimits

0xfa1c,	// (0x00039c9f) cl_header_name_pane_t

0xd1ee,	// (0x00037471) navi_pane_mv_g2_ParamLimits

0x5500,	// (0x0002f783) field_vitu2_entry_pane_g1_ParamLimits

0x550c,	// (0x0002f78f) field_vitu2_entry_pane_g2_ParamLimits

0xd30c,	// (0x0003758f) field_vitu2_entry_pane_g3_ParamLimits

0xd30c,	// (0x0003758f) field_vitu2_entry_pane_g3

0xf81c,	// (0x00039a9f) field_vitu2_entry_pane_g_ParamLimits

0x17e5,	// (0x0002ba68) cell_vitu2_itu_pane_g1_ParamLimits

0x17fd,	// (0x0002ba80) cell_vitu2_itu_pane_g2_ParamLimits

0x17fd,	// (0x0002ba80) cell_vitu2_itu_pane_g2

0x0001,

0xf828,	// (0x00039aab) cell_vitu2_itu_pane_g_ParamLimits

0xf828,	// (0x00039aab) cell_vitu2_itu_pane_g

0xb11c,	// (0x0003539f) bg_vkb2_func_pane_cp05_ParamLimits

0xb11c,	// (0x0003539f) bg_vkb2_func_pane_cp05

0xb11c,	// (0x0003539f) bg_vkb2_func_pane_cp03

0xb11c,	// (0x0003539f) bg_vkb2_func_pane_cp04

0xb11c,	// (0x0003539f) bg_vkb2_func_pane_cp10_ParamLimits

0xb11c,	// (0x0003539f) bg_vkb2_func_pane_cp10

0x65aa,	// (0x0003082d) bg_vkb2_func_pane_cp08

0x6583,	// (0x00030806) bg_vkb2_func_pane_cp06

0x658f,	// (0x00030812) bg_vkb2_func_pane_cp07

0x67b8,	// (0x00030a3b) bg_vkb2_func_pane_cp11_ParamLimits

0x67b8,	// (0x00030a3b) bg_vkb2_func_pane_cp11

0x67cd,	// (0x00030a50) bg_vkb2_func_pane_cp12_ParamLimits

0x67cd,	// (0x00030a50) bg_vkb2_func_pane_cp12

0xbead,	// (0x00036130) bg_vkb2_func_pane_cp09

0x5576,	// (0x0002f7f9) bg_vkb2_func_pane_g1

0xca3c,	// (0x00036cbf) bg_vkb2_func_pane_g2

0x557e,	// (0x0002f801) bg_vkb2_func_pane_g3

0x5586,	// (0x0002f809) bg_vkb2_func_pane_g4

0x5ea1,	// (0x00030124) bg_vkb2_func_pane_g5

0x559e,	// (0x0002f821) bg_vkb2_func_pane_g6

0x55a6,	// (0x0002f829) bg_vkb2_func_pane_g7

0x5596,	// (0x0002f819) bg_vkb2_func_pane_g8

0xca1c,	// (0x00036c9f) bg_vkb2_func_pane_g9

0x0008,

0xfa23,	// (0x00039ca6) bg_vkb2_func_pane_g

0x6a1c,	// (0x00030c9f) blid2_tripm_pane_g6_ParamLimits

0x6a1c,	// (0x00030c9f) blid2_tripm_pane_g6

0x52d9,	// (0x0002f55c) mp4_progress_pane_g1

0x6a95,	// (0x00030d18) blid2_tripm_values_pane_ParamLimits

0x6a95,	// (0x00030d18) blid2_tripm_values_pane

0x6be8,	// (0x00030e6b) blid2_tripm_values_pane_t1

0x6bf6,	// (0x00030e79) blid2_tripm_values_pane_t2

0x6c04,	// (0x00030e87) blid2_tripm_values_pane_t3

0x6c12,	// (0x00030e95) blid2_tripm_values_pane_t4

0x6c20,	// (0x00030ea3) blid2_tripm_values_pane_t5

0x6c2e,	// (0x00030eb1) blid2_tripm_values_pane_t6

0x6c3c,	// (0x00030ebf) blid2_tripm_values_pane_t7

0x6c4a,	// (0x00030ecd) blid2_tripm_values_pane_t8

0x6c58,	// (0x00030edb) blid2_tripm_values_pane_t9

0x0008,

0xfa36,	// (0x00039cb9) blid2_tripm_values_pane_t

0x244a,	// (0x0002c6cd) call_video_pane_t1_ParamLimits

0x2468,	// (0x0002c6eb) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00039460) call_video_pane_t_ParamLimits

0x392e,	// (0x0002dbb1) msg_header_pane_g1_ParamLimits

0xd3fa,	// (0x0003767d) msg_header_pane_g2_ParamLimits

0xd3fa,	// (0x0003767d) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x00039650) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x00039650) msg_header_pane_g

0xc64a,	// (0x000368cd) main_clock2_pane_ParamLimits

0x4e8d,	// (0x0002f110) grid_clock2_toolbar_pane_ParamLimits

0x4e8d,	// (0x0002f110) grid_clock2_toolbar_pane

0x4e8d,	// (0x0002f110) listscroll_clock2_pane_ParamLimits

0x4e8d,	// (0x0002f110) listscroll_clock2_pane

0x4f71,	// (0x0002f1f4) main_clock2_pane_t3_ParamLimits

0x4f71,	// (0x0002f1f4) main_clock2_pane_t3

0x4f95,	// (0x0002f218) main_clock2_pane_t4_ParamLimits

0x4f95,	// (0x0002f218) main_clock2_pane_t4

0x6c66,	// (0x00030ee9) cell_clock2_toolbar_pane

0x6c6e,	// (0x00030ef1) cell_clock2_toolbar_pane_cp01

0x6c6e,	// (0x00030ef1) cell_clock2_toolbar_pane_cp02

0x6c76,	// (0x00030ef9) cell_clock2_toolbar_pane_cp03

0x6c7e,	// (0x00030f01) list_clock2_pane

0xd014,	// (0x00037297) scroll_pane_cp10

0x6c86,	// (0x00030f09) list_single_clock2_pane_ParamLimits

0x6c86,	// (0x00030f09) list_single_clock2_pane

0xc823,	// (0x00036aa6) list_highlight_pane_cp08

0x6c93,	// (0x00030f16) list_single_clock2_pane_t1

0x6ca1,	// (0x00030f24) list_single_clock2_pane_t2

0x0001,

0xfa49,	// (0x00039ccc) list_single_clock2_pane_t

0xbead,	// (0x00036130) bg_button_pane_cp10

0x6caf,	// (0x00030f32) cell_clock2_toolbar_pane_g1

0x0bcd,	// (0x0002ae50) aid_main_viewer_pane_g1_ParamLimits

0x0bcd,	// (0x0002ae50) aid_main_viewer_pane_g1

0x0bdb,	// (0x0002ae5e) aid_main_viewer_pane_g2_ParamLimits

0x0bdb,	// (0x0002ae5e) aid_main_viewer_pane_g2

0x39cd,	// (0x0002dc50) aid_main_viewer_pane_g3_ParamLimits

0x39cd,	// (0x0002dc50) aid_main_viewer_pane_g3

0x39dc,	// (0x0002dc5f) aid_main_viewer_pane_g4_ParamLimits

0x39dc,	// (0x0002dc5f) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x00039661) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x00039661) aid_main_viewer_pane_g

0x0c0f,	// (0x0002ae92) main_calc_pane_ParamLimits

0x0c35,	// (0x0002aeb8) main_dialer2_pane_ParamLimits

0xb12a,	// (0x000353ad) main_cam6_pane

0xb12a,	// (0x000353ad) main_vid6_pane

0x4e99,	// (0x0002f11c) listscroll_gen_pane_cp06_ParamLimits

0x4e99,	// (0x0002f11c) listscroll_gen_pane_cp06

0x4fb8,	// (0x0002f23b) main_clock2_pane_t5_ParamLimits

0x4fb8,	// (0x0002f23b) main_clock2_pane_t5

0x5016,	// (0x0002f299) aid_call2_pane_cp10_ParamLimits

0x5028,	// (0x0002f2ab) aid_call_pane_cp10_ParamLimits

0xd092,	// (0x00037315) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd092,	// (0x00037315) popup_clock_analogue_window_cp10_g2_ParamLimits

0x0f13,	// (0x0002b196) popup_clock_analogue_window_cp10_g3_ParamLimits

0x0f13,	// (0x0002b196) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd092,	// (0x00037315) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x00039985) popup_clock_analogue_window_cp10_g_ParamLimits

0x0f29,	// (0x0002b1ac) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5388,	// (0x0002f60b) cell_dialer2_keypad_pane_g2_ParamLimits

0x5388,	// (0x0002f60b) cell_dialer2_keypad_pane_g2

0x0001,

0xf7bb,	// (0x00039a3e) cell_dialer2_keypad_pane_g_ParamLimits

0xf7bb,	// (0x00039a3e) cell_dialer2_keypad_pane_g

0xc5f6,	// (0x00036879) cell_dialer2_keypad_pane_t1

0x5999,	// (0x0002fc1c) main_cset_text2_pane_ParamLimits

0x5999,	// (0x0002fc1c) main_cset_text2_pane

0x647c,	// (0x000306ff) area_vitu2_query_pane_g1_ParamLimits

0x6488,	// (0x0003070b) area_vitu2_query_pane_g2_ParamLimits

0xf966,	// (0x00039be9) area_vitu2_query_pane_g_ParamLimits

0x655f,	// (0x000307e2) area_vitu2_query_pane_t7_ParamLimits

0x655f,	// (0x000307e2) area_vitu2_query_pane_t7

0x6583,	// (0x00030806) bg_button_pane_cp018_ParamLimits

0x658f,	// (0x00030812) bg_button_pane_cp021_ParamLimits

0x659b,	// (0x0003081e) bg_button_pane_cp022_ParamLimits

0x65aa,	// (0x0003082d) bg_vkb2_func_pane_cp08_ParamLimits

0x6583,	// (0x00030806) bg_vkb2_func_pane_cp06_ParamLimits

0x658f,	// (0x00030812) bg_vkb2_func_pane_cp07_ParamLimits

0x65ba,	// (0x0003083d) input_focus_pane_cp09_ParamLimits

0x1a9e,	// (0x0002bd21) cam6_autofocus_pane_ParamLimits

0x1a9e,	// (0x0002bd21) cam6_autofocus_pane

0x1aaa,	// (0x0002bd2d) cam6_image_uncrop_pane_ParamLimits

0x1aaa,	// (0x0002bd2d) cam6_image_uncrop_pane

0x1aba,	// (0x0002bd3d) cam6_indi_pane_ParamLimits

0x1aba,	// (0x0002bd3d) cam6_indi_pane

0x1ad0,	// (0x0002bd53) cam6_mode_pane_ParamLimits

0x1ad0,	// (0x0002bd53) cam6_mode_pane

0x1ae2,	// (0x0002bd65) cam6_timer_pane_ParamLimits

0x1ae2,	// (0x0002bd65) cam6_timer_pane

0x1aee,	// (0x0002bd71) cam6_zoom_pane_ParamLimits

0x1aee,	// (0x0002bd71) cam6_zoom_pane

0x6cb7,	// (0x00030f3a) cam6_mode_pane_g1_ParamLimits

0x6cb7,	// (0x00030f3a) cam6_mode_pane_g1

0x6cc7,	// (0x00030f4a) cam6_mode_pane_g2_ParamLimits

0x6cc7,	// (0x00030f4a) cam6_mode_pane_g2

0x6cd7,	// (0x00030f5a) cam6_mode_pane_g3_ParamLimits

0x6cd7,	// (0x00030f5a) cam6_mode_pane_g3

0x6ce7,	// (0x00030f6a) cam6_mode_pane_g4_ParamLimits

0x6ce7,	// (0x00030f6a) cam6_mode_pane_g4

0x0003,

0xfa4e,	// (0x00039cd1) cam6_mode_pane_g_ParamLimits

0xfa4e,	// (0x00039cd1) cam6_mode_pane_g

0xe93b,	// (0x00038bbe) bg_tb_trans_pane_cp08_ParamLimits

0xe93b,	// (0x00038bbe) bg_tb_trans_pane_cp08

0x6cf7,	// (0x00030f7a) cam6_battery_pane_ParamLimits

0x6cf7,	// (0x00030f7a) cam6_battery_pane

0x6d0d,	// (0x00030f90) cam6_indi_pane_g1_ParamLimits

0x6d0d,	// (0x00030f90) cam6_indi_pane_g1

0x6d1f,	// (0x00030fa2) cam6_indi_pane_g2_ParamLimits

0x6d1f,	// (0x00030fa2) cam6_indi_pane_g2

0x6d31,	// (0x00030fb4) cam6_indi_pane_g3_ParamLimits

0x6d31,	// (0x00030fb4) cam6_indi_pane_g3

0x0002,

0xfa57,	// (0x00039cda) cam6_indi_pane_g_ParamLimits

0xfa57,	// (0x00039cda) cam6_indi_pane_g

0x6d43,	// (0x00030fc6) cam6_indi_pane_t1_ParamLimits

0x6d43,	// (0x00030fc6) cam6_indi_pane_t1

0x54d1,	// (0x0002f754) cam6_autofocus_pane_g1

0x54c9,	// (0x0002f74c) cam6_autofocus_pane_g2

0x54e1,	// (0x0002f764) cam6_autofocus_pane_g3

0x54d9,	// (0x0002f75c) cam6_autofocus_pane_g4

0x0003,

0xfa5e,	// (0x00039ce1) cam6_autofocus_pane_g

0x6d69,	// (0x00030fec) cam6_timer_pane_g1

0x6d71,	// (0x00030ff4) cam6_timer_pane_t1

0x6d7f,	// (0x00031002) cam6_zoom_cont_pane

0x6d87,	// (0x0003100a) cam6_zoom_pane_g1

0x6d90,	// (0x00031013) cam6_zoom_pane_g2

0x6d99,	// (0x0003101c) cam6_zoom_pane_g3

0x0002,

0xfa67,	// (0x00039cea) cam6_zoom_pane_g

0xc5ec,	// (0x0003686f) cam6_battery_pane_g1

0xc5ec,	// (0x0003686f) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00039332) cam6_battery_pane_g

0x6d87,	// (0x0003100a) cam6_zoom_cont_pane_g1

0x6d90,	// (0x00031013) cam6_zoom_cont_pane_g2

0x6da2,	// (0x00031025) cam6_zoom_cont_pane_g3

0x0002,

0xfa6e,	// (0x00039cf1) cam6_zoom_cont_pane_g

0x6dbc,	// (0x0003103f) cam6_mode_pane_cp_ParamLimits

0x6dbc,	// (0x0003103f) cam6_mode_pane_cp

0x6dce,	// (0x00031051) cam6_zoom_pane_cp_ParamLimits

0x6dce,	// (0x00031051) cam6_zoom_pane_cp

0x6dda,	// (0x0003105d) vid6_image_uncrop_cif_pane_ParamLimits

0x6dda,	// (0x0003105d) vid6_image_uncrop_cif_pane

0x6dea,	// (0x0003106d) vid6_image_uncrop_nhd_pane_ParamLimits

0x6dea,	// (0x0003106d) vid6_image_uncrop_nhd_pane

0x6e09,	// (0x0003108c) vid6_image_uncrop_vga_pane_ParamLimits

0x6e09,	// (0x0003108c) vid6_image_uncrop_vga_pane

0x6e18,	// (0x0003109b) vid6_image_uncrop_wvga_pane_ParamLimits

0x6e18,	// (0x0003109b) vid6_image_uncrop_wvga_pane

0x6e27,	// (0x000310aa) vid6_indi_pane_ParamLimits

0x6e27,	// (0x000310aa) vid6_indi_pane

0xe93b,	// (0x00038bbe) bg_tb_trans_pane_cp09_ParamLimits

0xe93b,	// (0x00038bbe) bg_tb_trans_pane_cp09

0x6e3f,	// (0x000310c2) cam6_battery_pane_cp_ParamLimits

0x6e3f,	// (0x000310c2) cam6_battery_pane_cp

0x6e4b,	// (0x000310ce) vid6_indi_pane_g1_ParamLimits

0x6e4b,	// (0x000310ce) vid6_indi_pane_g1

0x6e5d,	// (0x000310e0) vid6_indi_pane_g2_ParamLimits

0x6e5d,	// (0x000310e0) vid6_indi_pane_g2

0x6e6f,	// (0x000310f2) vid6_indi_pane_g3_ParamLimits

0x6e6f,	// (0x000310f2) vid6_indi_pane_g3

0x6e84,	// (0x00031107) vid6_indi_pane_g4_ParamLimits

0x6e84,	// (0x00031107) vid6_indi_pane_g4

0x6e99,	// (0x0003111c) vid6_indi_pane_g5_ParamLimits

0x6e99,	// (0x0003111c) vid6_indi_pane_g5

0x0004,

0xfa75,	// (0x00039cf8) vid6_indi_pane_g_ParamLimits

0xfa75,	// (0x00039cf8) vid6_indi_pane_g

0x6eb3,	// (0x00031136) vid6_indi_pane_t1_ParamLimits

0x6eb3,	// (0x00031136) vid6_indi_pane_t1

0x6ec9,	// (0x0003114c) vid6_indi_pane_t2_ParamLimits

0x6ec9,	// (0x0003114c) vid6_indi_pane_t2

0x6ef1,	// (0x00031174) vid6_indi_pane_t3_ParamLimits

0x6ef1,	// (0x00031174) vid6_indi_pane_t3

0x6f19,	// (0x0003119c) vid6_indi_pane_t4_ParamLimits

0x6f19,	// (0x0003119c) vid6_indi_pane_t4

0x0003,

0xfa80,	// (0x00039d03) vid6_indi_pane_t_ParamLimits

0xfa80,	// (0x00039d03) vid6_indi_pane_t

0x6f3d,	// (0x000311c0) wait_bar_pane_cp08

0x6f4c,	// (0x000311cf) main_cset_text2_pane_t1_ParamLimits

0x6f4c,	// (0x000311cf) main_cset_text2_pane_t1

0x6daa,	// (0x0003102d) listscroll_gen_pane_cp06_t1_ParamLimits

0x6daa,	// (0x0003102d) listscroll_gen_pane_cp06_t1

0xb12a,	// (0x000353ad) main_cam6_set_pane

0x54bb,	// (0x0002f73e) bg_tb_trans_pane_cp06_ParamLimits

0xb72c,	// (0x000359af) cam4_indicators_pane_g1_ParamLimits

0xb73d,	// (0x000359c0) cam4_indicators_pane_g2_ParamLimits

0xf7f8,	// (0x00039a7b) cam4_indicators_pane_g_ParamLimits

0xb75b,	// (0x000359de) cam4_indicators_pane_t1_ParamLimits

0xb11c,	// (0x0003539f) bg_tb_trans_pane_cp07_ParamLimits

0xb787,	// (0x00035a0a) vid4_indicators_pane_g1_ParamLimits

0xb79b,	// (0x00035a1e) vid4_indicators_pane_g2_ParamLimits

0xb7af,	// (0x00035a32) vid4_indicators_pane_g3_ParamLimits

0xb7c0,	// (0x00035a43) vid4_indicators_pane_g4_ParamLimits

0xf80a,	// (0x00039a8d) vid4_indicators_pane_g_ParamLimits

0xb7de,	// (0x00035a61) vid4_indicators_pane_t1_ParamLimits

0xb874,	// (0x00035af7) vid4_progress_pane_g1_ParamLimits

0xb884,	// (0x00035b07) vid4_progress_pane_g2_ParamLimits

0x1a61,	// (0x0002bce4) vid4_progress_pane_g3_ParamLimits

0xb894,	// (0x00035b17) vid4_progress_pane_g4_ParamLimits

0xf9b1,	// (0x00039c34) vid4_progress_pane_g_ParamLimits

0x1a73,	// (0x0002bcf6) vid4_progress_pane_t1_ParamLimits

0xb8ac,	// (0x00035b2f) vid4_progress_pane_t2_ParamLimits

0xb8c1,	// (0x00035b44) vid4_progress_pane_t3_ParamLimits

0xf9bc,	// (0x00039c3f) vid4_progress_pane_t_ParamLimits

0x1a8b,	// (0x0002bd0e) wait_bar_pane_cp07_ParamLimits

0x6f69,	// (0x000311ec) main_cam6_set_pane_g2_ParamLimits

0x6f69,	// (0x000311ec) main_cam6_set_pane_g2

0x6f8d,	// (0x00031210) main_cset6_listscroll_pane_ParamLimits

0x6f8d,	// (0x00031210) main_cset6_listscroll_pane

0x6fad,	// (0x00031230) main_cset6_slider_pane_ParamLimits

0x6fad,	// (0x00031230) main_cset6_slider_pane

0x6fc3,	// (0x00031246) main_cset6_text2_pane_ParamLimits

0x6fc3,	// (0x00031246) main_cset6_text2_pane

0x6fd1,	// (0x00031254) main_cset6_text_pane

0x6fd9,	// (0x0003125c) main_cset_list_pane_copy1_ParamLimits

0x6fd9,	// (0x0003125c) main_cset_list_pane_copy1

0x6fe9,	// (0x0003126c) scroll_pane_cp028_copy1

0x6ff2,	// (0x00031275) cset_list_set_pane_copy1

0x7003,	// (0x00031286) aid_position_infowindow_above_copy1

0x700b,	// (0x0003128e) aid_position_infowindow_below_copy1

0x7013,	// (0x00031296) cset_list_set_pane_g1_copy1

0x701b,	// (0x0003129e) cset_list_set_pane_g3_copy1_ParamLimits

0x701b,	// (0x0003129e) cset_list_set_pane_g3_copy1

0x702a,	// (0x000312ad) cset_list_set_pane_t1_copy1_ParamLimits

0x702a,	// (0x000312ad) cset_list_set_pane_t1_copy1

0xc547,	// (0x000367ca) list_highlight_pane_cp021_copy1_ParamLimits

0xc547,	// (0x000367ca) list_highlight_pane_cp021_copy1

0x703f,	// (0x000312c2) cset6_slider_pane_ParamLimits

0x703f,	// (0x000312c2) cset6_slider_pane

0x706b,	// (0x000312ee) main_cset6_slider_pane_g1_ParamLimits

0x706b,	// (0x000312ee) main_cset6_slider_pane_g1

0x7093,	// (0x00031316) main_cset6_slider_pane_g2_ParamLimits

0x7093,	// (0x00031316) main_cset6_slider_pane_g2

0x70bb,	// (0x0003133e) main_cset6_slider_pane_g3_ParamLimits

0x70bb,	// (0x0003133e) main_cset6_slider_pane_g3

0x70c7,	// (0x0003134a) main_cset6_slider_pane_g4_ParamLimits

0x70c7,	// (0x0003134a) main_cset6_slider_pane_g4

0x70d3,	// (0x00031356) main_cset6_slider_pane_g5_ParamLimits

0x70d3,	// (0x00031356) main_cset6_slider_pane_g5

0x5a6c,	// (0x0002fcef) main_cset6_slider_pane_g7_ParamLimits

0x5a6c,	// (0x0002fcef) main_cset6_slider_pane_g7

0x5a78,	// (0x0002fcfb) main_cset6_slider_pane_g8_ParamLimits

0x5a78,	// (0x0002fcfb) main_cset6_slider_pane_g8

0x5a84,	// (0x0002fd07) main_cset6_slider_pane_g9_ParamLimits

0x5a84,	// (0x0002fd07) main_cset6_slider_pane_g9

0x5a90,	// (0x0002fd13) main_cset6_slider_pane_g10_ParamLimits

0x5a90,	// (0x0002fd13) main_cset6_slider_pane_g10

0x5a9c,	// (0x0002fd1f) main_cset6_slider_pane_g11_ParamLimits

0x5a9c,	// (0x0002fd1f) main_cset6_slider_pane_g11

0x5aa8,	// (0x0002fd2b) main_cset6_slider_pane_g12_ParamLimits

0x5aa8,	// (0x0002fd2b) main_cset6_slider_pane_g12

0x5ab4,	// (0x0002fd37) main_cset6_slider_pane_g13_ParamLimits

0x5ab4,	// (0x0002fd37) main_cset6_slider_pane_g13

0x5ac0,	// (0x0002fd43) main_cset6_slider_pane_g14_ParamLimits

0x5ac0,	// (0x0002fd43) main_cset6_slider_pane_g14

0x70df,	// (0x00031362) main_cset6_slider_pane_g15_ParamLimits

0x70df,	// (0x00031362) main_cset6_slider_pane_g15

0x5ae4,	// (0x0002fd67) main_cset6_slider_pane_g16_ParamLimits

0x5ae4,	// (0x0002fd67) main_cset6_slider_pane_g16

0x5af0,	// (0x0002fd73) main_cset6_slider_pane_g17_ParamLimits

0x5af0,	// (0x0002fd73) main_cset6_slider_pane_g17

0x0011,

0xfa89,	// (0x00039d0c) main_cset6_slider_pane_g_ParamLimits

0xfa89,	// (0x00039d0c) main_cset6_slider_pane_g

0x710f,	// (0x00031392) main_cset6_slider_pane_t1_ParamLimits

0x710f,	// (0x00031392) main_cset6_slider_pane_t1

0x7150,	// (0x000313d3) main_cset6_slider_pane_t2_ParamLimits

0x7150,	// (0x000313d3) main_cset6_slider_pane_t2

0x717b,	// (0x000313fe) main_cset6_slider_pane_t3_ParamLimits

0x717b,	// (0x000313fe) main_cset6_slider_pane_t3

0x71a6,	// (0x00031429) main_cset6_slider_pane_t4_ParamLimits

0x71a6,	// (0x00031429) main_cset6_slider_pane_t4

0x71d1,	// (0x00031454) main_cset6_slider_pane_t5_ParamLimits

0x71d1,	// (0x00031454) main_cset6_slider_pane_t5

0x71fc,	// (0x0003147f) main_cset6_slider_pane_t7_ParamLimits

0x71fc,	// (0x0003147f) main_cset6_slider_pane_t7

0x7232,	// (0x000314b5) main_cset6_slider_pane_t8_ParamLimits

0x7232,	// (0x000314b5) main_cset6_slider_pane_t8

0x7256,	// (0x000314d9) main_cset6_slider_pane_t9_ParamLimits

0x7256,	// (0x000314d9) main_cset6_slider_pane_t9

0x727a,	// (0x000314fd) main_cset6_slider_pane_t10_ParamLimits

0x727a,	// (0x000314fd) main_cset6_slider_pane_t10

0x729e,	// (0x00031521) main_cset6_slider_pane_t11_ParamLimits

0x729e,	// (0x00031521) main_cset6_slider_pane_t11

0x72c2,	// (0x00031545) main_cset6_slider_pane_t14_ParamLimits

0x72c2,	// (0x00031545) main_cset6_slider_pane_t14

0x72fb,	// (0x0003157e) main_cset6_slider_pane_t15_ParamLimits

0x72fb,	// (0x0003157e) main_cset6_slider_pane_t15

0x000b,

0xfaae,	// (0x00039d31) main_cset6_slider_pane_t_ParamLimits

0xfaae,	// (0x00039d31) main_cset6_slider_pane_t

0x7334,	// (0x000315b7) cset_slider_pane_g1_copy1

0x733d,	// (0x000315c0) cset_slider_pane_g2_copy1

0x7346,	// (0x000315c9) cset_slider_pane_g3_copy1

0xbead,	// (0x00036130) bg_popup_sub_pane_cp011_copy1

0x736c,	// (0x000315ef) main_cset_text_pane_g1_copy1

0x612f,	// (0x000303b2) main_cset_text_pane_t1_copy1

0x613d,	// (0x000303c0) main_cset_text_pane_t2_copy1

0x614b,	// (0x000303ce) main_cset_text_pane_t3_copy1

0x6159,	// (0x000303dc) main_cset_text_pane_t4_copy1

0x6167,	// (0x000303ea) main_cset_text_pane_t5_copy1

0x7374,	// (0x000315f7) main_cset_text_pane_t6_copy1

0x7382,	// (0x00031605) main_cset_text_pane_t7_copy1

0x6f4c,	// (0x000311cf) main_cset_text2_pane_t1_copy1

0xb11c,	// (0x0003539f) main_ncimui_pane

0x0e7f,	// (0x0002b102) popup_query_ncimui_window_ParamLimits

0x0e7f,	// (0x0002b102) popup_query_ncimui_window

0xebe1,	// (0x00038e64) field_cale_ev2_pane_g4_ParamLimits

0xebe1,	// (0x00038e64) field_cale_ev2_pane_g4

0x52b3,	// (0x0002f536) cell_video_dialer_keypad_pane_g2_ParamLimits

0x52b3,	// (0x0002f536) cell_video_dialer_keypad_pane_g2

0x0001,

0xf792,	// (0x00039a15) cell_video_dialer_keypad_pane_g_ParamLimits

0xf792,	// (0x00039a15) cell_video_dialer_keypad_pane_g

0x52cb,	// (0x0002f54e) cell_video_dialer_keypad_pane_t1

0xbead,	// (0x00036130) bg_popup_window_pane_cp012

0xe46f,	// (0x000386f2) heading_pane_cp06

0x74d7,	// (0x0003175a) ncim_query_content_pane

0xbead,	// (0x00036130) bg_popup_heading_pane_cp01

0x74df,	// (0x00031762) ncim_heading_pane_t1

0x74ed,	// (0x00031770) ncim_indicator_popup_pane

0x74ff,	// (0x00031782) ncim_query_button_pane

0x751f,	// (0x000317a2) ncim_query_content_pane_t1

0x7531,	// (0x000317b4) ncim_query_content_pane_t2

0x0005,

0xfad8,	// (0x00039d5b) ncim_query_content_pane_t

0x75e3,	// (0x00031866) ncim_query_list_pane

0x75f5,	// (0x00031878) ncim_query_popup_pane

0x74ed,	// (0x00031770) ncim_indicator_popup_pane_ParamLimits

0x7507,	// (0x0003178a) ncim_query_content_pane_g1_ParamLimits

0x7507,	// (0x0003178a) ncim_query_content_pane_g1

0x751f,	// (0x000317a2) ncim_query_content_pane_t1_ParamLimits

0x7531,	// (0x000317b4) ncim_query_content_pane_t2_ParamLimits

0x7543,	// (0x000317c6) ncim_query_content_pane_t3_ParamLimits

0x7543,	// (0x000317c6) ncim_query_content_pane_t3

0x756b,	// (0x000317ee) ncim_query_content_pane_t4_ParamLimits

0x756b,	// (0x000317ee) ncim_query_content_pane_t4

0x7593,	// (0x00031816) ncim_query_content_pane_t5_ParamLimits

0x7593,	// (0x00031816) ncim_query_content_pane_t5

0x75bb,	// (0x0003183e) ncim_query_content_pane_t6_ParamLimits

0x75bb,	// (0x0003183e) ncim_query_content_pane_t6

0xfad8,	// (0x00039d5b) ncim_query_content_pane_t_ParamLimits

0x75e3,	// (0x00031866) ncim_query_list_pane_ParamLimits

0x75f5,	// (0x00031878) ncim_query_popup_pane_ParamLimits

0x7609,	// (0x0003188c) wait_bar_pane_cp04

0xbead,	// (0x00036130) input_focus_pane_cp011

0x7611,	// (0x00031894) ncim_query_popup_pane_t1

0x761f,	// (0x000318a2) ncim_list_query_list_pane_ParamLimits

0x761f,	// (0x000318a2) ncim_list_query_list_pane

0xbead,	// (0x00036130) bg_button_pane_cp027

0x762c,	// (0x000318af) ncim_query_button_pane_g1

0xbead,	// (0x00036130) list_highlight_pane_cp012

0x7636,	// (0x000318b9) ncim_list_query_list_pane_g1

0x763e,	// (0x000318c1) ncim_list_query_list_pane_t1

0xb74c,	// (0x000359cf) cam4_indicators_pane_g3_ParamLimits

0xb74c,	// (0x000359cf) cam4_indicators_pane_g3

0xb7cc,	// (0x00035a4f) vid4_indicators_pane_g5_ParamLimits

0xb7cc,	// (0x00035a4f) vid4_indicators_pane_g5

0xb8a0,	// (0x00035b23) vid4_progress_pane_g5_ParamLimits

0xb8a0,	// (0x00035b23) vid4_progress_pane_g5

0x73c2,	// (0x00031645) main_ncimui_pane_g1

0x742b,	// (0x000316ae) ncimui_group_query_pane_ParamLimits

0x742b,	// (0x000316ae) ncimui_group_query_pane

0x7473,	// (0x000316f6) ncimui_list_pane_ParamLimits

0x7473,	// (0x000316f6) ncimui_list_pane

0x749a,	// (0x0003171d) ncimui_text_pane_ParamLimits

0x749a,	// (0x0003171d) ncimui_text_pane

0x764c,	// (0x000318cf) ncimui_text_pane_t1_ParamLimits

0x764c,	// (0x000318cf) ncimui_text_pane_t1

0x766a,	// (0x000318ed) ncimui_list_single_graphic_pane_ParamLimits

0x766a,	// (0x000318ed) ncimui_list_single_graphic_pane

0x767a,	// (0x000318fd) ncimui_query_pane_ParamLimits

0x767a,	// (0x000318fd) ncimui_query_pane

0xbead,	// (0x00036130) list_highlight_pane_cp013

0x768d,	// (0x00031910) ncim_list_query_list_pane_t1_copy1

0x7636,	// (0x000318b9) ncim_list_single_graphic_pane_g1

0x769b,	// (0x0003191e) ncim_query_button_pane_cp01

0x76a7,	// (0x0003192a) ncim_query_entry_pane_ParamLimits

0x76a7,	// (0x0003192a) ncim_query_entry_pane

0x76ba,	// (0x0003193d) ncimui_query_pane_g1

0x76c6,	// (0x00031949) ncimui_query_pane_t1_ParamLimits

0x76c6,	// (0x00031949) ncimui_query_pane_t1

0xc547,	// (0x000367ca) input_focus_pane_cp012

0x76df,	// (0x00031962) ncim_query_entry_pane_t1

0xc64a,	// (0x000368cd) main_im_pane_ParamLimits

0xb11c,	// (0x0003539f) main_mobtv_pane_ParamLimits

0xb11c,	// (0x0003539f) main_mobtv_pane

0x70f7,	// (0x0003137a) main_cset6_slider_pane_g18_ParamLimits

0x70f7,	// (0x0003137a) main_cset6_slider_pane_g18

0x7103,	// (0x00031386) main_cset6_slider_pane_g19_ParamLimits

0x7103,	// (0x00031386) main_cset6_slider_pane_g19

0xc5ca,	// (0x0003684d) bg_main_mobtv_pane_ParamLimits

0xc5ca,	// (0x0003684d) bg_main_mobtv_pane

0x76f1,	// (0x00031974) main_mobtv_info_pane

0x76fa,	// (0x0003197d) main_mobtv_loading_pane_ParamLimits

0x76fa,	// (0x0003197d) main_mobtv_loading_pane

0x7707,	// (0x0003198a) main_mobtv_pg_channel_list_pane

0x7711,	// (0x00031994) main_mobtv_pg_hdr_pane

0x771a,	// (0x0003199d) main_mobtv_programe_curr_pane_ParamLimits

0x771a,	// (0x0003199d) main_mobtv_programe_curr_pane

0x7727,	// (0x000319aa) main_mobtv_programe_next_pane_ParamLimits

0x7727,	// (0x000319aa) main_mobtv_programe_next_pane

0x7734,	// (0x000319b7) popup_mobtv_noti_window

0xc5ec,	// (0x0003686f) main_tv_pg_hdr_pane_g1

0x773c,	// (0x000319bf) main_tv_pg_hdr_pane_g2

0x7744,	// (0x000319c7) main_tv_pg_hdr_pane_g3

0x774c,	// (0x000319cf) main_tv_pg_hdr_pane_g4

0x7754,	// (0x000319d7) main_tv_pg_hdr_pane_g5

0x775e,	// (0x000319e1) main_tv_pg_hdr_pane_g6

0x7768,	// (0x000319eb) main_tv_pg_hdr_pane_g7

0x7772,	// (0x000319f5) main_tv_pg_hdr_pane_g8

0x777c,	// (0x000319ff) main_tv_pg_hdr_pane_g9

0x7786,	// (0x00031a09) main_tv_pg_hdr_pane_g10

0x7790,	// (0x00031a13) main_tv_pg_hdr_pane_g11

0x000a,

0xfae5,	// (0x00039d68) main_tv_pg_hdr_pane_g

0x779a,	// (0x00031a1d) main_tv_pg_hdr_pane_t1

0x77a8,	// (0x00031a2b) main_tv_pg_hdr_pane_t2

0x77b6,	// (0x00031a39) main_tv_pg_hdr_pane_t3

0x77c6,	// (0x00031a49) main_tv_pg_hdr_pane_t4

0x77d6,	// (0x00031a59) main_tv_pg_hdr_pane_t5

0x0004,

0xfafc,	// (0x00039d7f) main_tv_pg_hdr_pane_t

0x77e6,	// (0x00031a69) single_mobtv_pg_channel_pane_ParamLimits

0x77e6,	// (0x00031a69) single_mobtv_pg_channel_pane

0x77f8,	// (0x00031a7b) single_mobtv_pg_channel_table_pane

0x7801,	// (0x00031a84) single_mobtv_pg_channel_thumb_pane

0x780a,	// (0x00031a8d) single_tv_pg_channel_pane_g1

0x7813,	// (0x00031a96) single_tv_pg_channel_pane_g2

0x0001,

0xfb07,	// (0x00039d8a) single_tv_pg_channel_pane_g

0xc5ae,	// (0x00036831) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc5ae,	// (0x00036831) bg_single_mobtv_pg_channel_thumb_pane

0x781c,	// (0x00031a9f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x781c,	// (0x00031a9f) single_mobtv_pg_channel_thumb_pane_g1

0x782a,	// (0x00031aad) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x782a,	// (0x00031aad) single_mobtv_pg_channel_thumb_pane_g2

0x7836,	// (0x00031ab9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x7836,	// (0x00031ab9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb0c,	// (0x00039d8f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb0c,	// (0x00039d8f) single_mobtv_pg_channel_thumb_pane_g

0x7842,	// (0x00031ac5) single_mobtv_pg_channel_thumb_pane_t1

0x7850,	// (0x00031ad3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb13,	// (0x00039d96) single_mobtv_pg_channel_thumb_pane_t

0xc5ec,	// (0x0003686f) bg_single_mobtv_pg_channel_table_pane_g1

0xc5ec,	// (0x0003686f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00039332) bg_single_mobtv_pg_channel_table_pane_g

0x785e,	// (0x00031ae1) single_mobtv_pg_channel_table_pane_t1

0x786c,	// (0x00031aef) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb18,	// (0x00039d9b) single_mobtv_pg_channel_table_pane_t

0x7882,	// (0x00031b05) main_mobtv_info_pane_g1_ParamLimits

0x7882,	// (0x00031b05) main_mobtv_info_pane_g1

0x78a0,	// (0x00031b23) main_mobtv_info_pane_t1_ParamLimits

0x78a0,	// (0x00031b23) main_mobtv_info_pane_t1

0x7918,	// (0x00031b9b) main_mobtv_info_pane_t2_ParamLimits

0x7918,	// (0x00031b9b) main_mobtv_info_pane_t2

0x0002,

0xfb22,	// (0x00039da5) main_mobtv_info_pane_t_ParamLimits

0xfb22,	// (0x00039da5) main_mobtv_info_pane_t

0x79a7,	// (0x00031c2a) wait_bar_pane_cp05

0x79b9,	// (0x00031c3c) main_mobtv_loading_pane_g1_ParamLimits

0x79b9,	// (0x00031c3c) main_mobtv_loading_pane_g1

0x79cc,	// (0x00031c4f) main_mobtv_loading_pane_g2_ParamLimits

0x79cc,	// (0x00031c4f) main_mobtv_loading_pane_g2

0x79d8,	// (0x00031c5b) main_mobtv_loading_pane_g3_ParamLimits

0x79d8,	// (0x00031c5b) main_mobtv_loading_pane_g3

0x0002,

0xfb29,	// (0x00039dac) main_mobtv_loading_pane_g_ParamLimits

0xfb29,	// (0x00039dac) main_mobtv_loading_pane_g

0x79eb,	// (0x00031c6e) main_mobtv_loading_pane_t1_ParamLimits

0x79eb,	// (0x00031c6e) main_mobtv_loading_pane_t1

0x7a03,	// (0x00031c86) main_mobtv_loading_pane_t2_ParamLimits

0x7a03,	// (0x00031c86) main_mobtv_loading_pane_t2

0x0001,

0xfb30,	// (0x00039db3) main_mobtv_loading_pane_t_ParamLimits

0xfb30,	// (0x00039db3) main_mobtv_loading_pane_t

0x7a27,	// (0x00031caa) wait_bar_pane_cp06_ParamLimits

0x7a27,	// (0x00031caa) wait_bar_pane_cp06

0x7a36,	// (0x00031cb9) main_mobtv_programe_curr_pane_t1

0x7a44,	// (0x00031cc7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb35,	// (0x00039db8) main_mobtv_programe_curr_pane_t

0x7a52,	// (0x00031cd5) main_mobtv_programe_next_pane_t1

0x7a60,	// (0x00031ce3) main_mobtv_programe_next_pane_t2

0x7a6e,	// (0x00031cf1) main_mobtv_programe_next_pane_t3

0x0002,

0xfb3a,	// (0x00039dbd) main_mobtv_programe_next_pane_t

0xbead,	// (0x00036130) bg_popup_mobtv_noti_window_pane

0x7a7c,	// (0x00031cff) popup_mobtv_noti_window_g1

0x7a84,	// (0x00031d07) popup_mobtv_noti_window_t1

0x7a92,	// (0x00031d15) popup_mobtv_noti_window_t2

0x0001,

0xfb41,	// (0x00039dc4) popup_mobtv_noti_window_t

0xc5ec,	// (0x0003686f) bg_popup_mobtv_noti_window_pane_g1

0xb12a,	// (0x000353ad) sc_clock_pane

0xb12a,	// (0x000353ad) main_fs_bigclock_pane

0x6a7f,	// (0x00030d02) blid2_tripm_pane_t4_ParamLimits

0x6a7f,	// (0x00030d02) blid2_tripm_pane_t4

0xc5ae,	// (0x00036831) sc_clock_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) sc_clock_pane_g1

0xc5f6,	// (0x00036879) sc_clock_pane_t1_ParamLimits

0xc5f6,	// (0x00036879) sc_clock_pane_t1

0xc5f6,	// (0x00036879) sc_clock_pane_t2_ParamLimits

0xc5f6,	// (0x00036879) sc_clock_pane_t2

0xc5f6,	// (0x00036879) sc_clock_pane_t3_ParamLimits

0xc5f6,	// (0x00036879) sc_clock_pane_t3

0x0004,

0xfb46,	// (0x00039dc9) sc_clock_pane_t_ParamLimits

0xfb46,	// (0x00039dc9) sc_clock_pane_t

0x918d,	// (0x00033410) main_fs_bigclock_indicator_pane_ParamLimits

0x918d,	// (0x00033410) main_fs_bigclock_indicator_pane

0x7aef,	// (0x00031d72) main_fs_bigclock_pane_g1_ParamLimits

0x7aef,	// (0x00031d72) main_fs_bigclock_pane_g1

0x9199,	// (0x0003341c) main_fs_bigclock_pane_t1_ParamLimits

0x9199,	// (0x0003341c) main_fs_bigclock_pane_t1

0x91ab,	// (0x0003342e) main_fs_bigclock_pane_t2_ParamLimits

0x91ab,	// (0x0003342e) main_fs_bigclock_pane_t2

0x91bf,	// (0x00033442) main_fs_bigclock_pane_t3_ParamLimits

0x91bf,	// (0x00033442) main_fs_bigclock_pane_t3

0x0002,

0xfcca,	// (0x00039f4d) main_fs_bigclock_pane_t_ParamLimits

0xfcca,	// (0x00039f4d) main_fs_bigclock_pane_t

0x91d1,	// (0x00033454) main_fs_bigclock_indicator_pane_g1

0x7513,	// (0x00031796) ncim_query_content_pane_g2_ParamLimits

0x7513,	// (0x00031796) ncim_query_content_pane_g2

0x0001,

0xfad3,	// (0x00039d56) ncim_query_content_pane_g_ParamLimits

0xfad3,	// (0x00039d56) ncim_query_content_pane_g

0xc5f6,	// (0x00036879) sc_clock_pane_t4_ParamLimits

0xc5f6,	// (0x00036879) sc_clock_pane_t4

0xb11c,	// (0x0003539f) main_radioblah_pane

0xb6ce,	// (0x00035951) cell_call4_button_pane_t1_copy1_ParamLimits

0xb6ce,	// (0x00035951) cell_call4_button_pane_t1_copy1

0x73da,	// (0x0003165d) main_ncimui_pane_t1_ParamLimits

0x73da,	// (0x0003165d) main_ncimui_pane_t1

0x73f4,	// (0x00031677) main_ncimui_pane_t2_ParamLimits

0x73f4,	// (0x00031677) main_ncimui_pane_t2

0x0002,

0xfacc,	// (0x00039d4f) main_ncimui_pane_t_ParamLimits

0xfacc,	// (0x00039d4f) main_ncimui_pane_t

0xd32e,	// (0x000375b1) main_radioblah_anim_pane_ParamLimits

0xd32e,	// (0x000375b1) main_radioblah_anim_pane

0xd32e,	// (0x000375b1) main_radioblah_info_pane_ParamLimits

0xd32e,	// (0x000375b1) main_radioblah_info_pane

0xd31a,	// (0x0003759d) main_radioblah_pane_t1_ParamLimits

0xd31a,	// (0x0003759d) main_radioblah_pane_t1

0xd31a,	// (0x0003759d) main_radioblah_pane_t2_ParamLimits

0xd31a,	// (0x0003759d) main_radioblah_pane_t2

0x0003,

0xfb67,	// (0x00039dea) main_radioblah_pane_t_ParamLimits

0xfb67,	// (0x00039dea) main_radioblah_pane_t

0xc547,	// (0x000367ca) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc547,	// (0x000367ca) main_radioblah_rocker_ctrl_pane

0xe949,	// (0x00038bcc) main_radioblah_info_pane_t1_ParamLimits

0xe949,	// (0x00038bcc) main_radioblah_info_pane_t1

0x7ca3,	// (0x00031f26) main_radioblah_info_pane_t2_ParamLimits

0x7ca3,	// (0x00031f26) main_radioblah_info_pane_t2

0x0003,

0xfb70,	// (0x00039df3) main_radioblah_info_pane_t_ParamLimits

0xfb70,	// (0x00039df3) main_radioblah_info_pane_t

0xc5ec,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g1

0xc5ec,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g2

0xc5ec,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g3

0xc5ec,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g4

0xc5ec,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g5

0xc5ec,	// (0x0003686f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x0475,	// (0x0002a6f8) main_radioblah_rocker_ctrl_pane_g

0x6f4c,	// (0x000311cf) main_cset_text2_pane_t1_copy1_ParamLimits

0xb71c,	// (0x0003599f) cam4_image_uncrop_qvga_pane

0xb775,	// (0x000359f8) vid4_image_uncrop_qcif_pane

0xb8d6,	// (0x00035b59) cam6_image_uncrop_qvga_pane_ParamLimits

0xb8d6,	// (0x00035b59) cam6_image_uncrop_qvga_pane

0x6df9,	// (0x0003107c) vid6_image_uncrop_qcif_pane_ParamLimits

0x6df9,	// (0x0003107c) vid6_image_uncrop_qcif_pane

0xbead,	// (0x00036130) bg_popup_preview_window_pane_cp03

0x7390,	// (0x00031613) list_cset_text2_pane

0x7398,	// (0x0003161b) main_cset6_text2_pane_g1

0x73a0,	// (0x00031623) main_cset6_text2_pane_t1

0x7cf2,	// (0x00031f75) list_cset_text2_pane_t1_ParamLimits

0x7cf2,	// (0x00031f75) list_cset_text2_pane_t1

0xb11c,	// (0x0003539f) main_radioblah_pane_ParamLimits

0x7993,	// (0x00031c16) main_mobtv_info_pane_t3_ParamLimits

0x7993,	// (0x00031c16) main_mobtv_info_pane_t3

0xd30c,	// (0x0003758f) main_radioblah_pane_g1

0x7c73,	// (0x00031ef6) main_radioblah_info_pane_g1

0xc60a,	// (0x0003688d) main_radioblah_info_pane_t3_ParamLimits

0xc60a,	// (0x0003688d) main_radioblah_info_pane_t3

0x32bb,	// (0x0002d53e) highlight_cell_cale_month_pane_ParamLimits

0x32bb,	// (0x0002d53e) highlight_cell_cale_month_pane

0xb12a,	// (0x000353ad) main_phob_fisheye_pane

0xec56,	// (0x00038ed9) scroll_pane_cp0031_ParamLimits

0xec56,	// (0x00038ed9) scroll_pane_cp0031

0x6f3d,	// (0x000311c0) wait_bar_pane_cp08_ParamLimits

0x6ff2,	// (0x00031275) cset_list_set_pane_copy1_ParamLimits

0x7d0b,	// (0x00031f8e) highlight_cell_cale_month_pane_g1

0x7d13,	// (0x00031f96) highlight_cell_cale_month_pane_t1

0x6690,	// (0x00030913) list_gen_pane_cp01

0x59bf,	// (0x0002fc42) scroll_pane_01

0x7d21,	// (0x00031fa4) list_single_double_fisheye_pane

0x7d2a,	// (0x00031fad) list_double_fisheye_pane_g1_ParamLimits

0x7d2a,	// (0x00031fad) list_double_fisheye_pane_g1

0x7d36,	// (0x00031fb9) list_double_fisheye_pane_g2_ParamLimits

0x7d36,	// (0x00031fb9) list_double_fisheye_pane_g2

0x7d4a,	// (0x00031fcd) list_double_fisheye_pane_g3_ParamLimits

0x7d4a,	// (0x00031fcd) list_double_fisheye_pane_g3

0x0004,

0xfb79,	// (0x00039dfc) list_double_fisheye_pane_g_ParamLimits

0xfb79,	// (0x00039dfc) list_double_fisheye_pane_g

0x7d73,	// (0x00031ff6) list_double_fisheye_pane_t1_ParamLimits

0x7d73,	// (0x00031ff6) list_double_fisheye_pane_t1

0x7d8e,	// (0x00032011) list_double_fisheye_pane_t2_ParamLimits

0x7d8e,	// (0x00032011) list_double_fisheye_pane_t2

0x0001,

0xfb84,	// (0x00039e07) list_double_fisheye_pane_t_ParamLimits

0xfb84,	// (0x00039e07) list_double_fisheye_pane_t

0xb12a,	// (0x000353ad) main_call5_pane

0xc547,	// (0x000367ca) sc_swipe_pane_ParamLimits

0xc547,	// (0x000367ca) sc_swipe_pane

0x7dc3,	// (0x00032046) call5_image_pane_ParamLimits

0x7dc3,	// (0x00032046) call5_image_pane

0x7de0,	// (0x00032063) call5_swipe_1_pane_ParamLimits

0x7de0,	// (0x00032063) call5_swipe_1_pane

0x7df3,	// (0x00032076) call5_swipe_2_pane_ParamLimits

0x7df3,	// (0x00032076) call5_swipe_2_pane

0x7e1e,	// (0x000320a1) popup_call5_audio_first_window_ParamLimits

0x7e1e,	// (0x000320a1) popup_call5_audio_first_window

0xc5ae,	// (0x00036831) call5_swipe_1_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) call5_swipe_1_pane_g1

0x7e2f,	// (0x000320b2) call5_swipe_1_pane_g2_ParamLimits

0x7e2f,	// (0x000320b2) call5_swipe_1_pane_g2

0x0001,

0xfb89,	// (0x00039e0c) call5_swipe_1_pane_g_ParamLimits

0xfb89,	// (0x00039e0c) call5_swipe_1_pane_g

0x7e3b,	// (0x000320be) call5_swipe_1_pane_t1_ParamLimits

0x7e3b,	// (0x000320be) call5_swipe_1_pane_t1

0xc5ae,	// (0x00036831) call5_swipe_2_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) call5_swipe_2_pane_g1

0x7e50,	// (0x000320d3) call5_swipe_2_pane_g2_ParamLimits

0x7e50,	// (0x000320d3) call5_swipe_2_pane_g2

0x0001,

0xfb8e,	// (0x00039e11) call5_swipe_2_pane_g_ParamLimits

0xfb8e,	// (0x00039e11) call5_swipe_2_pane_g

0x7e5c,	// (0x000320df) call5_swipe_2_pane_t1_ParamLimits

0x7e5c,	// (0x000320df) call5_swipe_2_pane_t1

0xc5ae,	// (0x00036831) sc_swipe_pane_g1_ParamLimits

0xc5ae,	// (0x00036831) sc_swipe_pane_g1

0xc5bc,	// (0x0003683f) sc_swipe_pane_g2_ParamLimits

0xc5bc,	// (0x0003683f) sc_swipe_pane_g2

0x0001,

0x049c,	// (0x0002a71f) sc_swipe_pane_g_ParamLimits

0x049c,	// (0x0002a71f) sc_swipe_pane_g

0xc5f6,	// (0x00036879) sc_swipe_pane_t1_ParamLimits

0xc5f6,	// (0x00036879) sc_swipe_pane_t1

0xb12a,	// (0x000353ad) main_cmail_launcher_pane

0x7e71,	// (0x000320f4) aid_size_cell_cmail_l_ParamLimits

0x7e71,	// (0x000320f4) aid_size_cell_cmail_l

0x7e7f,	// (0x00032102) grid_cmail_l_pane_ParamLimits

0x7e7f,	// (0x00032102) grid_cmail_l_pane

0x7e99,	// (0x0003211c) cell_cmail_l_pane_ParamLimits

0x7e99,	// (0x0003211c) cell_cmail_l_pane

0x7eb3,	// (0x00032136) cell_cmail_l_pane_g1_ParamLimits

0x7eb3,	// (0x00032136) cell_cmail_l_pane_g1

0x7ebf,	// (0x00032142) cell_cmail_l_pane_t1_ParamLimits

0x7ebf,	// (0x00032142) cell_cmail_l_pane_t1

0x7ed5,	// (0x00032158) cell_cmail_l_pane_t2_ParamLimits

0x7ed5,	// (0x00032158) cell_cmail_l_pane_t2

0x0001,

0xfb93,	// (0x00039e16) cell_cmail_l_pane_t_ParamLimits

0xfb93,	// (0x00039e16) cell_cmail_l_pane_t

0xc547,	// (0x000367ca) grid_highlight_pane_cp018_ParamLimits

0xc547,	// (0x000367ca) grid_highlight_pane_cp018

0x07e2,	// (0x0002aa65) main2_pane_ParamLimits

0x07e2,	// (0x0002aa65) main2_pane

0xc6e2,	// (0x00036965) popup_sp_fs_action_menu_bg_pane_g1

0xc6ea,	// (0x0003696d) popup_sp_fs_action_menu_bg_pane_g2

0xc6f2,	// (0x00036975) popup_sp_fs_action_menu_bg_pane_g3

0xc6fa,	// (0x0003697d) popup_sp_fs_action_menu_bg_pane_g4

0xc702,	// (0x00036985) popup_sp_fs_action_menu_bg_pane_g5

0xc70a,	// (0x0003698d) popup_sp_fs_action_menu_bg_pane_g6

0xc712,	// (0x00036995) popup_sp_fs_action_menu_bg_pane_g7

0xc71a,	// (0x0003699d) popup_sp_fs_action_menu_bg_pane_g8

0xc722,	// (0x000369a5) popup_sp_fs_action_menu_bg_pane_g9

0xc72a,	// (0x000369ad) popup_sp_fs_action_menu_bg_pane_g10

0xc72a,	// (0x000369ad) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00039383) popup_sp_fs_action_menu_bg_pane_g

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g3_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g3_g2

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_x2_t3_g3_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g3_t1

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g3_t2

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g3_t

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g2_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_x2_t3_g2_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g2_t1

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g2_t2

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g2_t

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g4_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g4_g2

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g4_g3

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_x2_t4_g4_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g4_t1

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g4_t2

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g4_t3

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003944d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003944d) list_medium_line_x2_t4_g4_t

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g4_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g4_g2

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g4_g3

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_x2_t2_g4_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g4_t1

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_x2_t2_g4_t

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g3_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g3_g2

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_x2_t2_g3_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g3_t1

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_x2_t2_g3_t

0x33e1,	// (0x0002d664) main_sp_fs_list_pane_ParamLimits

0x33e1,	// (0x0002d664) main_sp_fs_list_pane

0x33ed,	// (0x0002d670) sp_fs_scroll_pane_ParamLimits

0x33ed,	// (0x0002d670) sp_fs_scroll_pane

0xcd66,	// (0x00036fe9) list_medium_line_x2_t3_t1

0xcd66,	// (0x00036fe9) list_medium_line_x2_t3_t2

0xcd66,	// (0x00036fe9) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x000394fa) list_medium_line_x2_t3_t

0xcd66,	// (0x00036fe9) list_medium_line_x3_t4_t1

0xcd66,	// (0x00036fe9) list_medium_line_x3_t4_t2

0xcd66,	// (0x00036fe9) list_medium_line_x3_t4_t3

0xcd66,	// (0x00036fe9) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00039501) list_medium_line_x3_t4_t

0xcd66,	// (0x00036fe9) list_medium_line_x4_t5_t1

0xcd66,	// (0x00036fe9) list_medium_line_x4_t5_t2

0xcd66,	// (0x00036fe9) list_medium_line_x4_t5_t3

0xcd66,	// (0x00036fe9) list_medium_line_x4_t5_t4

0xcd66,	// (0x00036fe9) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x0003950a) list_medium_line_x4_t5_t

0xc5ae,	// (0x00036831) list_medium_line_t4_g4_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t4_g4_g1

0xc5ae,	// (0x00036831) list_medium_line_t4_g4_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t4_g4_g2

0xc5ae,	// (0x00036831) list_medium_line_t4_g4_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t4_g4_g3

0xc5ae,	// (0x00036831) list_medium_line_t4_g4_g4_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_t4_g4_g

0xc5f6,	// (0x00036879) list_medium_line_t4_g4_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t4_g4_t1

0xc5f6,	// (0x00036879) list_medium_line_t4_g4_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t4_g4_t2

0xc5f6,	// (0x00036879) list_medium_line_t4_g4_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t4_g4_t3

0xc5f6,	// (0x00036879) list_medium_line_t4_g4_t4_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003944d) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003944d) list_medium_line_t4_g4_t

0x3488,	// (0x0002d70b) chi_dic_find_pane_g1

0x0c49,	// (0x0002aecc) main_tport_pane

0xcd66,	// (0x00036fe9) list_medium_line_plain_t1

0xc5ae,	// (0x00036831) list_medium_line_t2_g2_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t2_g2_g1

0xc5ae,	// (0x00036831) list_medium_line_t2_g2_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_t2_g2_g

0xc5f6,	// (0x00036879) list_medium_line_t2_g2_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t2_g2_t1

0xc5f6,	// (0x00036879) list_medium_line_t2_g2_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_t2_g2_t

0x6747,	// (0x000309ca) aid_sp_fs_list_icon_a_sm

0x674f,	// (0x000309d2) aid_sp_fs_list_icon_d

0x6757,	// (0x000309da) aid_sp_fs_text_primary

0x6760,	// (0x000309e3) aid_sp_fs_text_secondary

0xbead,	// (0x00036130) list_medium_line

0xbead,	// (0x00036130) list_medium_line_g2

0xbead,	// (0x00036130) list_medium_line_g3

0xbead,	// (0x00036130) list_medium_line_plain

0xbead,	// (0x00036130) list_medium_line_plain_t2

0xbead,	// (0x00036130) list_medium_line_plain_t3

0xbead,	// (0x00036130) list_medium_line_right_icon

0xbead,	// (0x00036130) list_medium_line_right_iconx2

0xbead,	// (0x00036130) list_medium_line_t2

0xbead,	// (0x00036130) list_medium_line_t2_g2

0xbead,	// (0x00036130) list_medium_line_t2_g3

0xbead,	// (0x00036130) list_medium_line_t2_right_icon

0xbead,	// (0x00036130) list_medium_line_t2_right_iconx2

0xbead,	// (0x00036130) list_medium_line_t3

0xbead,	// (0x00036130) list_medium_line_t3_g2

0xbead,	// (0x00036130) list_medium_line_t3_g3

0xbead,	// (0x00036130) list_medium_line_t3_right_iconx2

0xbead,	// (0x00036130) list_medium_line_t4_g4

0xbead,	// (0x00036130) list_medium_line_x2

0xbead,	// (0x00036130) list_medium_line_x2_t2_g2

0xbead,	// (0x00036130) list_medium_line_x2_t2_g3

0xbead,	// (0x00036130) list_medium_line_x2_t2_g4

0xbead,	// (0x00036130) list_medium_line_x2_t3

0xbead,	// (0x00036130) list_medium_line_x2_t3_g2

0xbead,	// (0x00036130) list_medium_line_x2_t3_g3

0xbead,	// (0x00036130) list_medium_line_x2_t3_g4

0xbead,	// (0x00036130) list_medium_line_x2_t4_g2

0xbead,	// (0x00036130) list_medium_line_x2_t4_g4

0xbead,	// (0x00036130) list_medium_line_x3

0xbead,	// (0x00036130) list_medium_line_x3_t4

0xbead,	// (0x00036130) list_medium_line_x3_t4_g4

0xbead,	// (0x00036130) list_medium_line_x4_t4

0xbead,	// (0x00036130) list_medium_line_x4_t4_g7

0xbead,	// (0x00036130) list_medium_line_x4_t5

0x6769,	// (0x000309ec) list_single_fs_dyc_pane_ParamLimits

0x6769,	// (0x000309ec) list_single_fs_dyc_pane

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g1

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g2

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g3

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g4

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g5

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x4_t4_g7_g6

0xc5bc,	// (0x0003683f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc5bc,	// (0x0003683f) list_medium_line_x4_t4_g7_g7

0x0006,

0x03a9,	// (0x0002a62c) list_medium_line_x4_t4_g7_g_ParamLimits

0x03a9,	// (0x0002a62c) list_medium_line_x4_t4_g7_g

0xc5f6,	// (0x00036879) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x4_t4_g7_t1

0xc5f6,	// (0x00036879) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x4_t4_g7_t2

0xc5f6,	// (0x00036879) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x4_t4_g7_t3

0xc60a,	// (0x0003688d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc60a,	// (0x0003688d) list_medium_line_x4_t4_g7_t4

0xc60a,	// (0x0003688d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc60a,	// (0x0003688d) list_medium_line_x4_t4_g7_t5

0x0004,

0x03b8,	// (0x0002a63b) list_medium_line_x4_t4_g7_t_ParamLimits

0x03b8,	// (0x0002a63b) list_medium_line_x4_t4_g7_t

0x734f,	// (0x000315d2) list_single_dyc_row_pane_ParamLimits

0x734f,	// (0x000315d2) list_single_dyc_row_pane

0x7db0,	// (0x00032033) call5_gesture_pane_ParamLimits

0x7db0,	// (0x00032033) call5_gesture_pane

0x7e06,	// (0x00032089) call5_windows_pane_ParamLimits

0x7e06,	// (0x00032089) call5_windows_pane

0x7ef2,	// (0x00032175) call5_swipe_1_pane_cp_ParamLimits

0x7ef2,	// (0x00032175) call5_swipe_1_pane_cp

0x7efe,	// (0x00032181) call5_swipe_2_pane_cp_ParamLimits

0x7efe,	// (0x00032181) call5_swipe_2_pane_cp

0xc823,	// (0x00036aa6) call5_image_pane_cp

0x7f0a,	// (0x0003218d) popup_call5_audio_first_window_cp_ParamLimits

0x7f0a,	// (0x0003218d) popup_call5_audio_first_window_cp

0x7f18,	// (0x0003219b) call5_swipe_1_pane_g1_cp_ParamLimits

0x7f18,	// (0x0003219b) call5_swipe_1_pane_g1_cp

0x7f25,	// (0x000321a8) call5_swipe_1_pane_g2_cp

0x7f2d,	// (0x000321b0) call5_swipe_1_pane_t1_cp_ParamLimits

0x7f2d,	// (0x000321b0) call5_swipe_1_pane_t1_cp

0x7f18,	// (0x0003219b) call5_swipe_2_pane_g1_cp_ParamLimits

0x7f18,	// (0x0003219b) call5_swipe_2_pane_g1_cp

0x7f42,	// (0x000321c5) call5_swipe_2_pane_g2_cp

0x7f4a,	// (0x000321cd) call5_swipe_2_pane_t1_cp_ParamLimits

0x7f4a,	// (0x000321cd) call5_swipe_2_pane_t1_cp

0xc547,	// (0x000367ca) main_sp_fs_email_pane

0x7f5f,	// (0x000321e2) main_sp_fs_listscroll_pane_te

0x7f68,	// (0x000321eb) popup_sp_fs_action_menu_pane_ParamLimits

0x7f68,	// (0x000321eb) popup_sp_fs_action_menu_pane

0xc5ec,	// (0x0003686f) bg_sp_fs_ctrlbar_pane_g1

0x7fac,	// (0x0003222f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7fb5,	// (0x00032238) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x7fbe,	// (0x00032241) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc5ec,	// (0x0003686f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb98,	// (0x00039e1b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe721,	// (0x000389a4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe721,	// (0x000389a4) bg_sp_fs_ctrlbar_ddmenu_pane

0x7fc7,	// (0x0003224a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7fc7,	// (0x0003224a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x7fd3,	// (0x00032256) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x7fd3,	// (0x00032256) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfba1,	// (0x00039e24) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfba1,	// (0x00039e24) main_sp_fs_ctrlbar_ddmenu_pane_g

0x7fdf,	// (0x00032262) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x7fdf,	// (0x00032262) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc5ec,	// (0x0003686f) list_medium_line_t2_right_icon_g1

0xcd66,	// (0x00036fe9) list_medium_line_t2_right_icon_t1

0xcd66,	// (0x00036fe9) list_medium_line_t2_right_icon_t2

0x0001,

0xfba6,	// (0x00039e29) list_medium_line_t2_right_icon_t

0xd32e,	// (0x000375b1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd32e,	// (0x000375b1) bg_sp_fs_ctrlbar_pane

0x8079,	// (0x000322fc) main_sp_fs_ctrlbar_button_pane_cp01

0x8083,	// (0x00032306) main_sp_fs_ctrlbar_ddmenu_pane

0x808d,	// (0x00032310) main_sp_fs_ctrlbar_pane_g1

0x8099,	// (0x0003231c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbab,	// (0x00039e2e) main_sp_fs_ctrlbar_pane_g

0x80d9,	// (0x0003235c) main_sp_fs_ctrlbar_pane_t1

0x8118,	// (0x0003239b) main_sp_fs_ctrlbar_pane

0x8157,	// (0x000323da) main_sp_fs_listscroll_pane_te_cp01

0x8181,	// (0x00032404) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8181,	// (0x00032404) popup_sp_fs_action_menu_pane_cp01

0xc547,	// (0x000367ca) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc547,	// (0x000367ca) bg_sp_fs_highlight_list_pane_cp01

0x81a6,	// (0x00032429) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x81a6,	// (0x00032429) sp_fs_action_menu_list_gene_pane_g1

0x81b5,	// (0x00032438) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x81b5,	// (0x00032438) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbb9,	// (0x00039e3c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbb9,	// (0x00039e3c) sp_fs_action_menu_list_gene_pane_g

0x81c2,	// (0x00032445) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x81c2,	// (0x00032445) sp_fs_action_menu_list_gene_pane_t1

0x81da,	// (0x0003245d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x81da,	// (0x0003245d) sp_fs_action_menu_list_gene_pane

0x81f9,	// (0x0003247c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x81f9,	// (0x0003247c) popup_sp_fs_action_menu_bg_pane

0x8207,	// (0x0003248a) sp_fs_action_menu_list_pane_ParamLimits

0x8207,	// (0x0003248a) sp_fs_action_menu_list_pane

0x8227,	// (0x000324aa) sp_fs_scroll_pane_cp01_ParamLimits

0x8227,	// (0x000324aa) sp_fs_scroll_pane_cp01

0xcd66,	// (0x00036fe9) list_medium_line_plain_t2_t1

0xcd66,	// (0x00036fe9) list_medium_line_plain_t2_t2

0x0001,

0xfba6,	// (0x00039e29) list_medium_line_plain_t2_t

0xcd66,	// (0x00036fe9) list_medium_line_plain_t3_t1

0xcd66,	// (0x00036fe9) list_medium_line_plain_t3_t2

0xcd66,	// (0x00036fe9) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x000394fa) list_medium_line_plain_t3_t

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g2_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_x2_t2_g2_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g2_t1

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_x2_t2_g2_t

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g2_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_x2_t4_g2_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g2_t1

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g2_t2

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g2_t3

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0003944d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0003944d) list_medium_line_x2_t4_g2_t

0xc5ec,	// (0x0003686f) list_medium_line_t3_right_iconx2_g1

0xc5ec,	// (0x0003686f) list_medium_line_t3_right_iconx2_g2

0xc5ec,	// (0x0003686f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00039616) list_medium_line_t3_right_iconx2_g

0xcd66,	// (0x00036fe9) list_medium_line_t3_right_iconx2_t1

0xcd66,	// (0x00036fe9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfba6,	// (0x00039e29) list_medium_line_t3_right_iconx2_t

0xc5ae,	// (0x00036831) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x3_t4_g4_g1

0xc5ae,	// (0x00036831) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x3_t4_g4_g2

0xc5ae,	// (0x00036831) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x3_t4_g4_g3

0xc5ae,	// (0x00036831) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_x3_t4_g4_g

0xc5f6,	// (0x00036879) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x3_t4_g4_t1

0xc5f6,	// (0x00036879) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x3_t4_g4_t2

0xc5f6,	// (0x00036879) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x3_t4_g4_t3

0xc5f6,	// (0x00036879) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003944d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003944d) list_medium_line_x3_t4_g4_t

0x824d,	// (0x000324d0) list_single_dyc_row_text_pane_t1_ParamLimits

0x824d,	// (0x000324d0) list_single_dyc_row_text_pane_t1

0x8296,	// (0x00032519) list_single_dyc_row_text_pane_t2_ParamLimits

0x8296,	// (0x00032519) list_single_dyc_row_text_pane_t2

0x830c,	// (0x0003258f) list_single_dyc_row_text_pane_t3_ParamLimits

0x830c,	// (0x0003258f) list_single_dyc_row_text_pane_t3

0x0005,

0xfbbe,	// (0x00039e41) list_single_dyc_row_text_pane_t_ParamLimits

0xfbbe,	// (0x00039e41) list_single_dyc_row_text_pane_t

0x83ef,	// (0x00032672) list_single_dyc_row_pane_g1_ParamLimits

0x83ef,	// (0x00032672) list_single_dyc_row_pane_g1

0x83fb,	// (0x0003267e) list_single_dyc_row_pane_g2_ParamLimits

0x83fb,	// (0x0003267e) list_single_dyc_row_pane_g2

0x8407,	// (0x0003268a) list_single_dyc_row_pane_g3_ParamLimits

0x8407,	// (0x0003268a) list_single_dyc_row_pane_g3

0x8413,	// (0x00032696) list_single_dyc_row_pane_g4_ParamLimits

0x8413,	// (0x00032696) list_single_dyc_row_pane_g4

0x0003,

0xfbcb,	// (0x00039e4e) list_single_dyc_row_pane_g_ParamLimits

0xfbcb,	// (0x00039e4e) list_single_dyc_row_pane_g

0x841f,	// (0x000326a2) list_single_dyc_row_text_pane_ParamLimits

0x841f,	// (0x000326a2) list_single_dyc_row_text_pane

0xbead,	// (0x00036130) bg_sp_fs_scroll_pane

0x843e,	// (0x000326c1) thumb_sp_fs_scroll_pane

0xc5ae,	// (0x00036831) list_medium_line_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_g1

0xc5f6,	// (0x00036879) list_medium_line_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t1

0xc5ae,	// (0x00036831) list_medium_line_x2_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_x2_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t1

0xc5ae,	// (0x00036831) list_medium_line_x3_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x3_g1

0x54bb,	// (0x0002f73e) list_medium_line_x3_g2_ParamLimits

0x54bb,	// (0x0002f73e) list_medium_line_x3_g2

0x0001,

0xfbd4,	// (0x00039e57) list_medium_line_x3_g_ParamLimits

0xfbd4,	// (0x00039e57) list_medium_line_x3_g

0x8447,	// (0x000326ca) list_medium_line_x3_t1_ParamLimits

0x8447,	// (0x000326ca) list_medium_line_x3_t1

0x845b,	// (0x000326de) thumb_sp_fs_scroll_pane_g1

0x8464,	// (0x000326e7) thumb_sp_fs_scroll_pane_g2

0x846d,	// (0x000326f0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbd9,	// (0x00039e5c) thumb_sp_fs_scroll_pane_g

0x845b,	// (0x000326de) bg_sp_fs_scroll_pane_g1

0x8464,	// (0x000326e7) bg_sp_fs_scroll_pane_g2

0x846d,	// (0x000326f0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbd9,	// (0x00039e5c) bg_sp_fs_scroll_pane_g

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g4_g1

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g4_g2

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g4_g3

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_x2_t3_g4_g

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g4_t1

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g4_t2

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g4_t

0xc5ae,	// (0x00036831) list_medium_line_g2_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_g2_g1

0xc5ae,	// (0x00036831) list_medium_line_g2_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_g2_g

0xc5f6,	// (0x00036879) list_medium_line_g2_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_g2_t1

0xc5ae,	// (0x00036831) list_medium_line_t3_g2_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t3_g2_g1

0xc5ae,	// (0x00036831) list_medium_line_t3_g2_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_t3_g2_g

0xc5f6,	// (0x00036879) list_medium_line_t3_g2_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_g2_t1

0xc5f6,	// (0x00036879) list_medium_line_t3_g2_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_g2_t2

0xc5f6,	// (0x00036879) list_medium_line_t3_g2_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_t3_g2_t

0xc5ec,	// (0x0003686f) list_medium_line_right_icon_g1

0xcd66,	// (0x00036fe9) list_medium_line_right_icon_t1

0xc5ae,	// (0x00036831) list_medium_line_t2_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t2_g1

0xc5f6,	// (0x00036879) list_medium_line_t2_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t2_t1

0xc5f6,	// (0x00036879) list_medium_line_t2_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_t2_t

0xc5ae,	// (0x00036831) list_medium_line_t3_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t3_g1

0xc5f6,	// (0x00036879) list_medium_line_t3_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_t1

0xc5f6,	// (0x00036879) list_medium_line_t3_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_t2

0xc5f6,	// (0x00036879) list_medium_line_t3_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_t3_t

0xc5ae,	// (0x00036831) list_medium_line_g3_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_g3_g1

0xc5ae,	// (0x00036831) list_medium_line_g3_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_g3_g2

0xc5ae,	// (0x00036831) list_medium_line_g3_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_g3_g

0xc5f6,	// (0x00036879) list_medium_line_g3_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_g3_t1

0xc5ae,	// (0x00036831) list_medium_line_t2_g3_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t2_g3_g1

0xc5ae,	// (0x00036831) list_medium_line_t2_g3_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t2_g3_g2

0xc5ae,	// (0x00036831) list_medium_line_t2_g3_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_t2_g3_g

0xc5f6,	// (0x00036879) list_medium_line_t2_g3_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t2_g3_t1

0xc5f6,	// (0x00036879) list_medium_line_t2_g3_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_t2_g3_t

0xc5ae,	// (0x00036831) list_medium_line_t3_g3_g1_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t3_g3_g1

0xc5ae,	// (0x00036831) list_medium_line_t3_g3_g2_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t3_g3_g2

0xc5ae,	// (0x00036831) list_medium_line_t3_g3_g3_ParamLimits

0xc5ae,	// (0x00036831) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_t3_g3_g

0xc5f6,	// (0x00036879) list_medium_line_t3_g3_t1_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_g3_t1

0xc5f6,	// (0x00036879) list_medium_line_t3_g3_t2_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_g3_t2

0xc5f6,	// (0x00036879) list_medium_line_t3_g3_t3_ParamLimits

0xc5f6,	// (0x00036879) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_t3_g3_t

0xc5ec,	// (0x0003686f) list_medium_line_right_iconx2_g1

0xc5ec,	// (0x0003686f) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00039332) list_medium_line_right_iconx2_g

0xcd66,	// (0x00036fe9) list_medium_line_right_iconx2_t1

0xc5ec,	// (0x0003686f) list_medium_line_t2_right_iconx2_g1

0xc5ec,	// (0x0003686f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00039332) list_medium_line_t2_right_iconx2_g

0xcd66,	// (0x00036fe9) list_medium_line_t2_right_iconx2_t1

0xcd66,	// (0x00036fe9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfba6,	// (0x00039e29) list_medium_line_t2_right_iconx2_t

0xcd66,	// (0x00036fe9) list_medium_line_x4_t4_t1

0xcd66,	// (0x00036fe9) list_medium_line_x4_t4_t2

0xcd66,	// (0x00036fe9) list_medium_line_x4_t4_t3

0xcd66,	// (0x00036fe9) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00039501) list_medium_line_x4_t4_t

0x84b9,	// (0x0003273c) tport_appsw_pane_ParamLimits

0x84b9,	// (0x0003273c) tport_appsw_pane

0x84d1,	// (0x00032754) tport_contact_pane_ParamLimits

0x84d1,	// (0x00032754) tport_contact_pane

0x84e9,	// (0x0003276c) tport_listscroll_pane_ParamLimits

0x84e9,	// (0x0003276c) tport_listscroll_pane

0x8503,	// (0x00032786) cell_tport_appsw_pane_ParamLimits

0x8503,	// (0x00032786) cell_tport_appsw_pane

0xd30c,	// (0x0003758f) tport_appsw_pane_g1_ParamLimits

0xd30c,	// (0x0003758f) tport_appsw_pane_g1

0x8543,	// (0x000327c6) tport_contact_pane_g1

0x7611,	// (0x00031894) tport_contact_pane_t1

0x854c,	// (0x000327cf) tport_contact_pane_t2

0x0001,

0xfbe0,	// (0x00039e63) tport_contact_pane_t

0x855a,	// (0x000327dd) list_tport_pane

0x8563,	// (0x000327e6) scroll_pane_cp_030

0x8574,	// (0x000327f7) cell_tport_appsw_pane_g1

0x8584,	// (0x00032807) cell_tport_appsw_pane_t1

0x8592,	// (0x00032815) grid_highlight_pane_cp019

0x859a,	// (0x0003281d) list_tport_double_graphic_pane_ParamLimits

0x859a,	// (0x0003281d) list_tport_double_graphic_pane

0xc547,	// (0x000367ca) list_highlight_pane_cp023_ParamLimits

0xc547,	// (0x000367ca) list_highlight_pane_cp023

0x85a7,	// (0x0003282a) list_tport_double_graphic_pane_g1_ParamLimits

0x85a7,	// (0x0003282a) list_tport_double_graphic_pane_g1

0x85b4,	// (0x00032837) list_tport_double_graphic_pane_t1_ParamLimits

0x85b4,	// (0x00032837) list_tport_double_graphic_pane_t1

0x85c9,	// (0x0003284c) list_tport_double_graphic_pane_t2_ParamLimits

0x85c9,	// (0x0003284c) list_tport_double_graphic_pane_t2

0x0001,

0xfbec,	// (0x00039e6f) list_tport_double_graphic_pane_t_ParamLimits

0xfbec,	// (0x00039e6f) list_tport_double_graphic_pane_t

0xbead,	// (0x00036130) main_cale_note_pane

0x17bd,	// (0x0002ba40) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x17bd,	// (0x0002ba40) cell_vitu2_function_top_wide_pane_cp01

0x79a7,	// (0x00031c2a) wait_bar_pane_cp05_ParamLimits

0xc547,	// (0x000367ca) listscroll_cmail_pane

0x85e3,	// (0x00032866) list_cmail_pane

0x85fa,	// (0x0003287d) list_cmail_body_pane

0x860f,	// (0x00032892) list_single_cmail_header_caption_pane

0x8625,	// (0x000328a8) list_single_cmail_header_detail_pane_ParamLimits

0x8625,	// (0x000328a8) list_single_cmail_header_detail_pane

0x8652,	// (0x000328d5) list_single_cmail_header_caption_pane_t1

0x8669,	// (0x000328ec) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8669,	// (0x000328ec) list_single_cmail_header_detail_pane_g1

0x8681,	// (0x00032904) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8681,	// (0x00032904) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbf1,	// (0x00039e74) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbf1,	// (0x00039e74) list_single_cmail_header_detail_pane_g

0x869a,	// (0x0003291d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x869a,	// (0x0003291d) list_single_cmail_header_detail_pane_t1

0x86fc,	// (0x0003297f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x86fc,	// (0x0003297f) list_single_cmail_header_editor_pane_bg

0x7813,	// (0x00031a96) list_cmail_body_pane_g1

0x8715,	// (0x00032998) list_cmail_body_pane_t1

0x5576,	// (0x0002f7f9) list_single_cmail_header_editor_pane_bg_g1

0xca3c,	// (0x00036cbf) list_single_cmail_header_editor_pane_bg_g1_copy1

0x5586,	// (0x0002f809) list_single_cmail_header_editor_pane_bg_g1_copy2

0x557e,	// (0x0002f801) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5ea1,	// (0x00030124) list_single_cmail_header_editor_pane_bg_g1_copy4

0x55a6,	// (0x0002f829) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5596,	// (0x0002f819) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x559e,	// (0x0002f821) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xca1c,	// (0x00036c9f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8723,	// (0x000329a6) calenote_gesture_pane_ParamLimits

0x8723,	// (0x000329a6) calenote_gesture_pane

0x8743,	// (0x000329c6) calenote_window_pane_ParamLimits

0x8743,	// (0x000329c6) calenote_window_pane

0x875f,	// (0x000329e2) popup_note_window_cp01

0x8768,	// (0x000329eb) calenote_swipe_1_pane_ParamLimits

0x8768,	// (0x000329eb) calenote_swipe_1_pane

0x7efe,	// (0x00032181) calenote_swipe_2_pane_ParamLimits

0x7efe,	// (0x00032181) calenote_swipe_2_pane

0x7f18,	// (0x0003219b) calenote_swipe_1_pane_g1_ParamLimits

0x7f18,	// (0x0003219b) calenote_swipe_1_pane_g1

0x8786,	// (0x00032a09) calenote_swipe_1_pane_g2_ParamLimits

0x8786,	// (0x00032a09) calenote_swipe_1_pane_g2

0x0001,

0xfbfd,	// (0x00039e80) calenote_swipe_1_pane_g_ParamLimits

0xfbfd,	// (0x00039e80) calenote_swipe_1_pane_g

0x8792,	// (0x00032a15) calenote_swipe_1_pane_t1_ParamLimits

0x8792,	// (0x00032a15) calenote_swipe_1_pane_t1

0x7f18,	// (0x0003219b) calenote_swipe_2_pane_g1_ParamLimits

0x7f18,	// (0x0003219b) calenote_swipe_2_pane_g1

0x87b1,	// (0x00032a34) calenote_swipe_2_pane_g2_ParamLimits

0x87b1,	// (0x00032a34) calenote_swipe_2_pane_g2

0x0001,

0xfc02,	// (0x00039e85) calenote_swipe_2_pane_g_ParamLimits

0xfc02,	// (0x00039e85) calenote_swipe_2_pane_g

0x87bd,	// (0x00032a40) calenote_swipe_2_pane_t1_ParamLimits

0x87bd,	// (0x00032a40) calenote_swipe_2_pane_t1

0xbead,	// (0x00036130) main_mup_navstr_pane

0x4c13,	// (0x0002ee96) main_mup3_pane_t7_ParamLimits

0x4c13,	// (0x0002ee96) main_mup3_pane_t7

0xb492,	// (0x00035715) main_mp4_pane_g6_ParamLimits

0xb492,	// (0x00035715) main_mp4_pane_g6

0xb6bc,	// (0x0003593f) main_image3_pane_t4_ParamLimits

0xb6bc,	// (0x0003593f) main_image3_pane_t4

0x87e4,	// (0x00032a67) popup_navstr_preview_pane_ParamLimits

0x87e4,	// (0x00032a67) popup_navstr_preview_pane

0x87f8,	// (0x00032a7b) scroll_navstr_pane_ParamLimits

0x87f8,	// (0x00032a7b) scroll_navstr_pane

0xbead,	// (0x00036130) bg_popup_preview_window_pane_cp04

0x880c,	// (0x00032a8f) popup_navstr_preview_pane_t1

0x881a,	// (0x00032a9d) scroll_navstr_pane_g1_ParamLimits

0x881a,	// (0x00032a9d) scroll_navstr_pane_g1

0x882e,	// (0x00032ab1) scroll_navstr_pane_t1_ParamLimits

0x882e,	// (0x00032ab1) scroll_navstr_pane_t1

0x877d,	// (0x00032a00) bg_button_pane_cp014

0x877d,	// (0x00032a00) bg_button_pane_cp030

0x7d56,	// (0x00031fd9) list_double_fisheye_pane_g4_ParamLimits

0x7d56,	// (0x00031fd9) list_double_fisheye_pane_g4

0x7d62,	// (0x00031fe5) list_double_fisheye_pane_g5_ParamLimits

0x7d62,	// (0x00031fe5) list_double_fisheye_pane_g5

0x33ed,	// (0x0002d670) sp_fs_scroll_pane_cp03

0x808d,	// (0x00032310) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x8099,	// (0x0003231c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbab,	// (0x00039e2e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x80d9,	// (0x0003235c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x85f2,	// (0x00032875) sp_fs_scroll_pane_cp02

0xc76b,	// (0x000369ee) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc76b,	// (0x000369ee) popup_sp_fs_calendar_preview_list_single_pane

0xbead,	// (0x00036130) main_cam6_pano_pane

0xb11c,	// (0x0003539f) main_mup3_pane_ParamLimits

0xbead,	// (0x00036130) main_phacti_pane

0x787a,	// (0x00031afd) bg_button_pane_cp11

0x7894,	// (0x00031b17) main_mobtv_info_pane_g2_ParamLimits

0x7894,	// (0x00031b17) main_mobtv_info_pane_g2

0x0001,

0xfb1d,	// (0x00039da0) main_mobtv_info_pane_g_ParamLimits

0xfb1d,	// (0x00039da0) main_mobtv_info_pane_g

0xc5f6,	// (0x00036879) sc_clock_pane_t5_ParamLimits

0xc5f6,	// (0x00036879) sc_clock_pane_t5

0xd30c,	// (0x0003758f) main_radioblah_pane_g1_ParamLimits

0xd31a,	// (0x0003759d) main_radioblah_pane_t3_ParamLimits

0xd31a,	// (0x0003759d) main_radioblah_pane_t3

0xd31a,	// (0x0003759d) main_radioblah_pane_t4_ParamLimits

0xd31a,	// (0x0003759d) main_radioblah_pane_t4

0xc547,	// (0x000367ca) main_radioblah_text_pane_ParamLimits

0xc547,	// (0x000367ca) main_radioblah_text_pane

0x7c73,	// (0x00031ef6) main_radioblah_info_pane_g1_ParamLimits

0x7cb7,	// (0x00031f3a) main_radioblah_info_pane_t4_ParamLimits

0x7cb7,	// (0x00031f3a) main_radioblah_info_pane_t4

0xc547,	// (0x000367ca) main_sp_fs_calendar_pane

0x8845,	// (0x00032ac8) main_phacti_pane_g1

0x8856,	// (0x00032ad9) phacti_note_pane_ParamLimits

0x8856,	// (0x00032ad9) phacti_note_pane

0x886a,	// (0x00032aed) phacti_term_pane_ParamLimits

0x886a,	// (0x00032aed) phacti_term_pane

0x887f,	// (0x00032b02) phacti_note_pane_t1_ParamLimits

0x887f,	// (0x00032b02) phacti_note_pane_t1

0x8896,	// (0x00032b19) phacti_term_pane_g1

0x889e,	// (0x00032b21) phacti_term_pane_t1_ParamLimits

0x889e,	// (0x00032b21) phacti_term_pane_t1

0x88c8,	// (0x00032b4b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc80a,	// (0x00036a8d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc0c,	// (0x00039e8f) popup_sp_fs_calendar_preview_list_single_pane_g

0x88d0,	// (0x00032b53) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x88d0,	// (0x00032b53) popup_sp_fs_calendar_preview_list_single_pane_t1

0x88e6,	// (0x00032b69) aid_popup_sp_fs_bg_corner_pane

0xc5ec,	// (0x0003686f) popup_sp_fs_calendar_preview_bg_pane_g1

0xbead,	// (0x00036130) popup_sp_fs_calendar_preview_bg_pane

0x88ee,	// (0x00032b71) popup_sp_fs_calendar_preview_list_pane

0xd32e,	// (0x000375b1) bg_main_sp_fs_cale_pane_ParamLimits

0xd32e,	// (0x000375b1) bg_main_sp_fs_cale_pane

0x8960,	// (0x00032be3) listscroll_cale_mrui_pane_ParamLimits

0x8960,	// (0x00032be3) listscroll_cale_mrui_pane

0x8975,	// (0x00032bf8) listscroll_sp_fs_schedule_track_pane

0x897e,	// (0x00032c01) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x897e,	// (0x00032c01) main_sp_fs_ctrlbar_pane_cp01

0x8991,	// (0x00032c14) main_sp_fs_ribbon_pane

0x8999,	// (0x00032c1c) popup_sp_fs_cale_preview_window

0x89ab,	// (0x00032c2e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x89ab,	// (0x00032c2e) list_single_sp_fs_schedule_track_pane

0xc547,	// (0x000367ca) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc547,	// (0x000367ca) bg_sp_fs_highlight_list_pane_cp03

0x89be,	// (0x00032c41) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x89be,	// (0x00032c41) list_single_sp_fs_schedule_track_pane_g1

0x89ca,	// (0x00032c4d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x89ca,	// (0x00032c4d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc11,	// (0x00039e94) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc11,	// (0x00039e94) list_single_sp_fs_schedule_track_pane_g

0x89d6,	// (0x00032c59) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x89d6,	// (0x00032c59) list_single_sp_fs_schedule_track_pane_t1

0x89f0,	// (0x00032c73) sp_fs_schedule_track_pane_ParamLimits

0x89f0,	// (0x00032c73) sp_fs_schedule_track_pane

0x8a01,	// (0x00032c84) sp_fs_schedule_track_pane_g1

0x8a09,	// (0x00032c8c) sp_fs_schedule_track_pane_g2

0x8a11,	// (0x00032c94) sp_fs_schedule_track_pane_g3

0x8a19,	// (0x00032c9c) sp_fs_schedule_track_pane_g4

0x8a21,	// (0x00032ca4) sp_fs_schedule_track_pane_g5

0x0004,

0xfc16,	// (0x00039e99) sp_fs_schedule_track_pane_g

0x5576,	// (0x0002f7f9) bg_sp_fs_schedule_viewer_highlight_g1

0xca3c,	// (0x00036cbf) bg_sp_fs_schedule_viewer_highlight_g2

0x557e,	// (0x0002f801) bg_sp_fs_schedule_viewer_highlight_g3

0x5586,	// (0x0002f809) bg_sp_fs_schedule_viewer_highlight_g4

0x5ea1,	// (0x00030124) bg_sp_fs_schedule_viewer_highlight_g5

0x5596,	// (0x0002f819) bg_sp_fs_schedule_viewer_highlight_g6

0x559e,	// (0x0002f821) bg_sp_fs_schedule_viewer_highlight_g7

0x55a6,	// (0x0002f829) bg_sp_fs_schedule_viewer_highlight_g8

0xca1c,	// (0x00036c9f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc21,	// (0x00039ea4) bg_sp_fs_schedule_viewer_highlight_g

0xbead,	// (0x00036130) bg_main_sp_fs_ribbon_pane

0x8a29,	// (0x00032cac) main_sp_fs_ribbon_pane_g1

0x8a32,	// (0x00032cb5) main_sp_fs_ribbon_pane_t1

0x8a41,	// (0x00032cc4) main_sp_fs_ribbon_pane_t2

0x8a50,	// (0x00032cd3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc34,	// (0x00039eb7) main_sp_fs_ribbon_pane_t

0x8a5f,	// (0x00032ce2) main_sp_fs_ribbon_scheduler_pane

0x8a67,	// (0x00032cea) bg_main_sp_fs_ribbon_pane_g1

0x8a70,	// (0x00032cf3) bg_main_sp_fs_ribbon_pane_g2

0x8a79,	// (0x00032cfc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc3b,	// (0x00039ebe) bg_main_sp_fs_ribbon_pane_g

0x8a81,	// (0x00032d04) main_sp_fs_ribbon_scheduler_pane_g1

0x8a8a,	// (0x00032d0d) main_sp_fs_ribbon_scheduler_pane_g2

0x8a93,	// (0x00032d16) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc42,	// (0x00039ec5) main_sp_fs_ribbon_scheduler_pane_g

0x8a9c,	// (0x00032d1f) list_cale_mrui_pane

0x8aa9,	// (0x00032d2c) sp_fs_scroll_pane_cp07_ParamLimits

0x8aa9,	// (0x00032d2c) sp_fs_scroll_pane_cp07

0x8ac5,	// (0x00032d48) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ac5,	// (0x00032d48) bg_sp_fs_schedule_viewer_highlight

0x8ad5,	// (0x00032d58) list_single_sp_fs_schedule_track_pane_cp01

0x8add,	// (0x00032d60) list_sp_fs_schedule_track_pane

0x8ae5,	// (0x00032d68) sp_fs_scroll_pane_cp06_ParamLimits

0x8ae5,	// (0x00032d68) sp_fs_scroll_pane_cp06

0xc5ec,	// (0x0003686f) bgmain_sp_fs_calendar_pane_g1

0x8af7,	// (0x00032d7a) list_single_cale_mrui_pane_ParamLimits

0x8af7,	// (0x00032d7a) list_single_cale_mrui_pane

0x8b17,	// (0x00032d9a) list_single_cale_mrui_row_pane_ParamLimits

0x8b17,	// (0x00032d9a) list_single_cale_mrui_row_pane

0x8b24,	// (0x00032da7) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8b24,	// (0x00032da7) list_single_cale_mrui_row_pane_g1

0x8b69,	// (0x00032dec) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8b69,	// (0x00032dec) list_single_cale_mrui_row_pane_t1

0x8b7b,	// (0x00032dfe) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8b7b,	// (0x00032dfe) list_single_cale_mrui_row_pane_t2

0x8be3,	// (0x00032e66) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8be3,	// (0x00032e66) list_single_cale_mrui_row_pane_t3

0x8c12,	// (0x00032e95) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8c12,	// (0x00032e95) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc50,	// (0x00039ed3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc50,	// (0x00039ed3) list_single_cale_mrui_row_pane_t

0x8c41,	// (0x00032ec4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8c41,	// (0x00032ec4) list_single_cmail_header_editor_pane_bg_cp01

0x8c6f,	// (0x00032ef2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8c6f,	// (0x00032ef2) list_single_cmail_header_editor_pane_bg_cp02

0x8c8f,	// (0x00032f12) main_radioblah_text_pane_t1_ParamLimits

0x8c8f,	// (0x00032f12) main_radioblah_text_pane_t1

0x8ca9,	// (0x00032f2c) cam6_indi_pane_cp01

0x8cb1,	// (0x00032f34) cam6_mode_pane_cp01

0x8cb9,	// (0x00032f3c) cam6_pano_pane

0x8cc2,	// (0x00032f45) cam6_zoom_pane_cp01

0x8cca,	// (0x00032f4d) cam6_pano_image_pane

0x8cd5,	// (0x00032f58) cam6_pano_pane_g1

0x7813,	// (0x00031a96) cam6_pano_pane_g2

0x8cde,	// (0x00032f61) cam6_pano_pane_g3

0x8ce7,	// (0x00032f6a) cam6_pano_pane_g4

0xeeaf,	// (0x00039132) cam6_pano_pane_g5

0x8cf0,	// (0x00032f73) cam6_pano_pane_g6

0x8cfa,	// (0x00032f7d) cam6_pano_pane_g7

0x8d02,	// (0x00032f85) cam6_pano_pane_g8

0x8d0b,	// (0x00032f8e) cam6_pano_pane_g9

0x0008,

0xfc59,	// (0x00039edc) cam6_pano_pane_g

0xbead,	// (0x00036130) main_browser_tag_pane

0x87dc,	// (0x00032a5f) grid_navstr_albumart_pane

0x8d16,	// (0x00032f99) cell_navstr_albumart_pane_ParamLimits

0x8d16,	// (0x00032f99) cell_navstr_albumart_pane

0x8d36,	// (0x00032fb9) cell_navstr_albumart_pane_g1

0xe3af,	// (0x00038632) cell_navstr_albumart_pane_g2

0xe3bf,	// (0x00038642) cell_navstr_albumart_pane_g3

0xe3b7,	// (0x0003863a) cell_navstr_albumart_pane_g4

0x0003,

0xfc6c,	// (0x00039eef) cell_navstr_albumart_pane_g

0x8d3e,	// (0x00032fc1) bt_list_pane_ParamLimits

0x8d3e,	// (0x00032fc1) bt_list_pane

0x8d52,	// (0x00032fd5) bt_list_pane_t1

0x8d61,	// (0x00032fe4) bt_list_pane_t2

0x0001,

0xfc75,	// (0x00039ef8) bt_list_pane_t

0xbead,	// (0x00036130) main_cale_prevew_pane

0x8d70,	// (0x00032ff3) popup_cale_preview_window_ParamLimits

0x8d70,	// (0x00032ff3) popup_cale_preview_window

0xc547,	// (0x000367ca) bg_popup_preview_window_pane_cp05_ParamLimits

0xc547,	// (0x000367ca) bg_popup_preview_window_pane_cp05

0x8d8b,	// (0x0003300e) list_cale_preview_pane_ParamLimits

0x8d8b,	// (0x0003300e) list_cale_preview_pane

0x8d97,	// (0x0003301a) list_double_cale_preview_pane_ParamLimits

0x8d97,	// (0x0003301a) list_double_cale_preview_pane

0x8da9,	// (0x0003302c) list_single_cale_preview_pane_ParamLimits

0x8da9,	// (0x0003302c) list_single_cale_preview_pane

0x8dbf,	// (0x00033042) list_single_cale_preview_pane_g1

0x8dc7,	// (0x0003304a) list_single_cale_preview_pane_t1_ParamLimits

0x8dc7,	// (0x0003304a) list_single_cale_preview_pane_t1

0x8ddc,	// (0x0003305f) list_double_cale_preview_pane_g1

0x8de4,	// (0x00033067) list_double_cale_preview_pane_t1_ParamLimits

0x8de4,	// (0x00033067) list_double_cale_preview_pane_t1

0x8df9,	// (0x0003307c) list_double_cale_preview_pane_t2_ParamLimits

0x8df9,	// (0x0003307c) list_double_cale_preview_pane_t2

0x0001,

0xfc7a,	// (0x00039efd) list_double_cale_preview_pane_t_ParamLimits

0xfc7a,	// (0x00039efd) list_double_cale_preview_pane_t

0xbead,	// (0x00036130) main_ezdial_pane

0xc547,	// (0x000367ca) main_sp_fs_email_pane_ParamLimits

0x7ff9,	// (0x0003227c) cmail_ddmenu_btn01_pane_ParamLimits

0x7ff9,	// (0x0003227c) cmail_ddmenu_btn01_pane

0x800c,	// (0x0003228f) cmail_ddmenu_btn02_pane_ParamLimits

0x800c,	// (0x0003228f) cmail_ddmenu_btn02_pane

0x8067,	// (0x000322ea) cmail_ddmenu_btn03_pane_ParamLimits

0x8067,	// (0x000322ea) cmail_ddmenu_btn03_pane

0x8118,	// (0x0003239b) main_sp_fs_ctrlbar_pane_ParamLimits

0x8157,	// (0x000323da) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x85fa,	// (0x0003287d) list_cmail_body_pane_ParamLimits

0x8660,	// (0x000328e3) bg_button_pane_cp12

0x868d,	// (0x00032910) list_single_cmail_header_detail_pane_g3_ParamLimits

0x868d,	// (0x00032910) list_single_cmail_header_detail_pane_g3

0x86d8,	// (0x0003295b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x86d8,	// (0x0003295b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbf8,	// (0x00039e7b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbf8,	// (0x00039e7b) list_single_cmail_header_detail_pane_t

0x88b3,	// (0x00032b36) phacti_term_pane_t2_ParamLimits

0x88b3,	// (0x00032b36) phacti_term_pane_t2

0x0001,

0xfc07,	// (0x00039e8a) phacti_term_pane_t_ParamLimits

0xfc07,	// (0x00039e8a) phacti_term_pane_t

0x8e11,	// (0x00033094) aid_size_list_single_double

0x8e1d,	// (0x000330a0) popup_ezdial_listscroll_window

0x8e34,	// (0x000330b7) popup_number_entry_window_cp01

0xc823,	// (0x00036aa6) bg_popup_call_pane_cp09

0x8e41,	// (0x000330c4) ezdial_list_pane

0x8e49,	// (0x000330cc) scroll_pane_cp23

0xd32e,	// (0x000375b1) bg_button_pane_cp028_ParamLimits

0xd32e,	// (0x000375b1) bg_button_pane_cp028

0x8e51,	// (0x000330d4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e51,	// (0x000330d4) cmail_ddmenu_btn01_pane_g1

0x8e5d,	// (0x000330e0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e5d,	// (0x000330e0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc7f,	// (0x00039f02) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc7f,	// (0x00039f02) cmail_ddmenu_btn01_pane_g

0x8e71,	// (0x000330f4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x8e71,	// (0x000330f4) cmail_ddmenu_btn01_pane_t1

0xd32e,	// (0x000375b1) bg_button_pane_cp029_ParamLimits

0xd32e,	// (0x000375b1) bg_button_pane_cp029

0x8e87,	// (0x0003310a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e87,	// (0x0003310a) cmail_ddmenu_btn02_pane_g1

0x8e9f,	// (0x00033122) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e9f,	// (0x00033122) cmail_ddmenu_btn02_pane_t1

0xc547,	// (0x000367ca) bg_button_pane_cp031_ParamLimits

0xc547,	// (0x000367ca) bg_button_pane_cp031

0x8e87,	// (0x0003310a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e87,	// (0x0003310a) cmail_ddmenu_btn03_pane_g1

0x8e9f,	// (0x00033122) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e9f,	// (0x00033122) cmail_ddmenu_btn03_pane_t1

0xc5f6,	// (0x00036879) cell_dialer2_keypad_pane_t1_ParamLimits

0xeedd,	// (0x00039160) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeedd,	// (0x00039160) cell_dialer2_keypad_pane_t1_copy1

0x7423,	// (0x000316a6) ncimui_group_button_pane

0xc547,	// (0x000367ca) main_sp_fs_calendar_pane_ParamLimits

0x860f,	// (0x00032892) list_single_cmail_header_caption_pane_ParamLimits

0x8914,	// (0x00032b97) aid_recal_txt_sm_pane

0xbead,	// (0x00036130) mian_recal_day_pane

0x8999,	// (0x00032c1c) popup_sp_fs_cale_preview_window_ParamLimits

0x8ec3,	// (0x00033146) list_recal_day_pane

0x8f05,	// (0x00033188) list_single_recal_day_pane_ParamLimits

0x8f05,	// (0x00033188) list_single_recal_day_pane

0x8f17,	// (0x0003319a) list_single_recal_day_pane_g1_ParamLimits

0x8f17,	// (0x0003319a) list_single_recal_day_pane_g1

0x8f23,	// (0x000331a6) list_single_recal_day_pane_g2_ParamLimits

0x8f23,	// (0x000331a6) list_single_recal_day_pane_g2

0x8f2f,	// (0x000331b2) list_single_recal_day_pane_g3_ParamLimits

0x8f2f,	// (0x000331b2) list_single_recal_day_pane_g3

0x8f3b,	// (0x000331be) list_single_recal_day_pane_g4_ParamLimits

0x8f3b,	// (0x000331be) list_single_recal_day_pane_g4

0x8f49,	// (0x000331cc) list_single_recal_day_pane_g5_ParamLimits

0x8f49,	// (0x000331cc) list_single_recal_day_pane_g5

0x8f5f,	// (0x000331e2) list_single_recal_day_pane_g6_ParamLimits

0x8f5f,	// (0x000331e2) list_single_recal_day_pane_g6

0x0004,

0xfc8e,	// (0x00039f11) list_single_recal_day_pane_g_ParamLimits

0xfc8e,	// (0x00039f11) list_single_recal_day_pane_g

0x8f73,	// (0x000331f6) list_single_recal_day_pane_t1

0x8f85,	// (0x00033208) list_single_recal_day_pane_t2

0x0001,

0xfc99,	// (0x00039f1c) list_single_recal_day_pane_t

0x8f97,	// (0x0003321a) ncimui_query_button_pane_ParamLimits

0x8f97,	// (0x0003321a) ncimui_query_button_pane

0x8fa7,	// (0x0003322a) ncimui_query_button_pane_t1_ParamLimits

0x8fa7,	// (0x0003322a) ncimui_query_button_pane_t1

0x8fba,	// (0x0003323d) ncimui_query_button_pane_t2_ParamLimits

0x8fba,	// (0x0003323d) ncimui_query_button_pane_t2

0x0001,

0xfc9e,	// (0x00039f21) ncimui_query_button_pane_t_ParamLimits

0xfc9e,	// (0x00039f21) ncimui_query_button_pane_t

0x8fcd,	// (0x00033250) query_button_pane_ParamLimits

0x8fcd,	// (0x00033250) query_button_pane

0xbead,	// (0x00036130) bg_button_pane_cp0028

0x8fe0,	// (0x00033263) query_button_pane_t1

0x0c49,	// (0x0002aecc) main_tport_pane_ParamLimits

0x8476,	// (0x000326f9) bg_popup_window_pane_cp01_ParamLimits

0x8476,	// (0x000326f9) bg_popup_window_pane_cp01

0x8491,	// (0x00032714) heading_pane_cp08_ParamLimits

0x8491,	// (0x00032714) heading_pane_cp08

0x84a4,	// (0x00032727) heading_pane_cp07_ParamLimits

0x84a4,	// (0x00032727) heading_pane_cp07

0x8574,	// (0x000327f7) cell_tport_appsw_pane_g2

0x0002,

0xfbe5,	// (0x00039e68) cell_tport_appsw_pane_g

0x38ac,	// (0x0002db2f) input_candi_list_open_g1

0xcc07,	// (0x00036e8a) list_cale_time_pane_g6_ParamLimits

0xcc07,	// (0x00036e8a) list_cale_time_pane_g6

0x45bb,	// (0x0002e83e) aid_size_touch_calib_1_ParamLimits

0x45bb,	// (0x0002e83e) aid_size_touch_calib_1

0x45cd,	// (0x0002e850) aid_size_touch_calib_2_ParamLimits

0x45cd,	// (0x0002e850) aid_size_touch_calib_2

0x45e5,	// (0x0002e868) aid_size_touch_calib_3_ParamLimits

0x45e5,	// (0x0002e868) aid_size_touch_calib_3

0x4603,	// (0x0002e886) aid_size_touch_calib_4_ParamLimits

0x4603,	// (0x0002e886) aid_size_touch_calib_4

0x461b,	// (0x0002e89e) main_touch_calib_button_group_pane_ParamLimits

0x461b,	// (0x0002e89e) main_touch_calib_button_group_pane

0x4633,	// (0x0002e8b6) main_touch_calib_pane_g1_ParamLimits

0x4645,	// (0x0002e8c8) main_touch_calib_pane_g2_ParamLimits

0x4657,	// (0x0002e8da) main_touch_calib_pane_g3_ParamLimits

0x4669,	// (0x0002e8ec) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x00039902) main_touch_calib_pane_g_ParamLimits

0x467b,	// (0x0002e8fe) main_touch_calib_pane_t1_ParamLimits

0x4695,	// (0x0002e918) main_touch_calib_pane_t2_ParamLimits

0x46af,	// (0x0002e932) main_touch_calib_pane_t3_ParamLimits

0x46c3,	// (0x0002e946) main_touch_calib_pane_t4_ParamLimits

0x46d7,	// (0x0002e95a) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x0003990b) main_touch_calib_pane_t_ParamLimits

0xec7a,	// (0x00038efd) list_single_fp_cale_pane_g3_ParamLimits

0xec7a,	// (0x00038efd) list_single_fp_cale_pane_g3

0xb11c,	// (0x0003539f) bg_button_pane_cp012_ParamLimits

0xb11c,	// (0x0003539f) bg_vkb2_func_pane_cp03_ParamLimits

0x19c3,	// (0x0002bc46) cell_vitu2_function_top_pane_g1_ParamLimits

0xb11c,	// (0x0003539f) bg_vkb2_func_pane_cp04_ParamLimits

0x73ae,	// (0x00031631) main_ncimui_button_group_pane_ParamLimits

0x73ae,	// (0x00031631) main_ncimui_button_group_pane

0x740e,	// (0x00031691) main_ncimui_pane_t3_ParamLimits

0x740e,	// (0x00031691) main_ncimui_pane_t3

0x884d,	// (0x00032ad0) phacti_button_group_pane

0x8e11,	// (0x00033094) aid_size_list_single_double_ParamLimits

0x8e1d,	// (0x000330a0) popup_ezdial_listscroll_window_ParamLimits

0x8e34,	// (0x000330b7) popup_number_entry_window_cp01_ParamLimits

0x8fee,	// (0x00033271) phacti_button_pane_ParamLimits

0x8fee,	// (0x00033271) phacti_button_pane

0xbead,	// (0x00036130) bg_button_pane_cp14

0x8fff,	// (0x00033282) phacti_button_pane_t1

0x900d,	// (0x00033290) main_touch_calib_button_pane_ParamLimits

0x900d,	// (0x00033290) main_touch_calib_button_pane

0xc64a,	// (0x000368cd) bg_button_pane_cp18_ParamLimits

0xc64a,	// (0x000368cd) bg_button_pane_cp18

0x9022,	// (0x000332a5) main_touch_calib_button_pane_t1_ParamLimits

0x9022,	// (0x000332a5) main_touch_calib_button_pane_t1

0x9038,	// (0x000332bb) main_touch_calib_button_pane_t2_ParamLimits

0x9038,	// (0x000332bb) main_touch_calib_button_pane_t2

0x0001,

0xfca3,	// (0x00039f26) main_touch_calib_button_pane_t_ParamLimits

0xfca3,	// (0x00039f26) main_touch_calib_button_pane_t

0xbead,	// (0x00036130) cell_ncimui_button_pane

0xbead,	// (0x00036130) bg_button_pane_cp032

0x9056,	// (0x000332d9) cell_ncimui_button_pane_t1

0xb69c,	// (0x0003591f) image3_infobar_pane_ParamLimits

0xb69c,	// (0x0003591f) image3_infobar_pane

0x7aa0,	// (0x00031d23) fs_bigclock_status_pane_ParamLimits

0x7aa0,	// (0x00031d23) fs_bigclock_status_pane

0x7aad,	// (0x00031d30) main_fs_bigclock_clock_pane_ParamLimits

0x7aad,	// (0x00031d30) main_fs_bigclock_clock_pane

0x7acb,	// (0x00031d4e) main_fs_bigclock_indi_pane_ParamLimits

0x7acb,	// (0x00031d4e) main_fs_bigclock_indi_pane

0x7afd,	// (0x00031d80) main_fs_bigclock_swipe_pane_ParamLimits

0x7afd,	// (0x00031d80) main_fs_bigclock_swipe_pane

0xbead,	// (0x00036130) main_fs_clock_dumped_data

0x7b3c,	// (0x00031dbf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7b3c,	// (0x00031dbf) list_single_fs_bigclock_indicator_pane_g1

0x7b57,	// (0x00031dda) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7b57,	// (0x00031dda) list_single_fs_bigclock_indicator_pane_g2

0x7b71,	// (0x00031df4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7b71,	// (0x00031df4) list_single_fs_bigclock_indicator_pane_g3

0x7b8b,	// (0x00031e0e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7b8b,	// (0x00031e0e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb51,	// (0x00039dd4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb51,	// (0x00039dd4) list_single_fs_bigclock_indicator_pane_g

0x7bb6,	// (0x00031e39) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7bb6,	// (0x00031e39) list_single_fs_bigclock_indicator_pane_t1

0x7bde,	// (0x00031e61) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7bde,	// (0x00031e61) list_single_fs_bigclock_indicator_pane_t2

0x7c06,	// (0x00031e89) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7c06,	// (0x00031e89) list_single_fs_bigclock_indicator_pane_t3

0x7c2e,	// (0x00031eb1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7c2e,	// (0x00031eb1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb5c,	// (0x00039ddf) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb5c,	// (0x00039ddf) list_single_fs_bigclock_indicator_pane_t

0x9064,	// (0x000332e7) image3_infobar_fav_pane_ParamLimits

0x9064,	// (0x000332e7) image3_infobar_fav_pane

0x9074,	// (0x000332f7) image3_infobar_loc_pane_ParamLimits

0x9074,	// (0x000332f7) image3_infobar_loc_pane

0x9088,	// (0x0003330b) image3_infobar_time_pane_ParamLimits

0x9088,	// (0x0003330b) image3_infobar_time_pane

0xc5ec,	// (0x0003686f) image3_infobar_time_pane_g1

0x9098,	// (0x0003331b) image3_infobar_time_pane_t1

0xc5ec,	// (0x0003686f) image3_infobar_loc_pane_g1

0x90a6,	// (0x00033329) image3_infobar_loc_pane_g2

0x0001,

0xfca8,	// (0x00039f2b) image3_infobar_loc_pane_g

0x90ae,	// (0x00033331) image3_infobar_loc_pane_t1

0xc5ec,	// (0x0003686f) image3_infobar_fav_pane_g1

0x90bc,	// (0x0003333f) image3_infobar_fav_pane_g2

0x0001,

0xfcad,	// (0x00039f30) image3_infobar_fav_pane_g

0x90c4,	// (0x00033347) fs_bigclock_status_battery_pane

0x90cd,	// (0x00033350) fs_bigclock_status_signal_pane

0x90d6,	// (0x00033359) fs_bigclock_status_title_pane

0x90df,	// (0x00033362) fs_bigclock_status_signal_pane_g1

0x90e8,	// (0x0003336b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcb2,	// (0x00039f35) fs_bigclock_status_signal_pane_g

0x90f0,	// (0x00033373) fs_bigclock_status_battery_pane_g1

0x90f9,	// (0x0003337c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcb7,	// (0x00039f3a) fs_bigclock_status_battery_pane_g

0x9101,	// (0x00033384) fs_bigclock_status_title_pane_t1

0x910f,	// (0x00033392) main_fs_bigclock_clock_pane_g1

0x910f,	// (0x00033392) main_fs_bigclock_clock_pane_g2

0x9120,	// (0x000333a3) main_fs_bigclock_clock_pane_g3

0x9120,	// (0x000333a3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcbc,	// (0x00039f3f) main_fs_bigclock_clock_pane_g

0x9133,	// (0x000333b6) main_fs_bigclock_clock_pane_t1

0x9149,	// (0x000333cc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcc5,	// (0x00039f48) main_fs_bigclock_clock_pane_t

0x915f,	// (0x000333e2) list_single_fs_bigclock_indicator_pane_ParamLimits

0x915f,	// (0x000333e2) list_single_fs_bigclock_indicator_pane

0x9170,	// (0x000333f3) list_single_fs_bigclock_pane_ParamLimits

0x9170,	// (0x000333f3) list_single_fs_bigclock_pane

0x91da,	// (0x0003345d) main_fs_bigclock_indicator_pane_t1

0x91e9,	// (0x0003346c) list_single_fs_bigclock_pane_g1

0x91f1,	// (0x00033474) list_single_fs_bigclock_pane_t1

0xc5ec,	// (0x0003686f) main_fs_bigclock_swipe_pane_g1

0x9234,	// (0x000334b7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00039f59) main_fs_bigclock_swipe_pane_g

0x923c,	// (0x000334bf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x923c,	// (0x000334bf) main_fs_bigclock_swipe_pane_t1

0x33f9,	// (0x0002d67c) call_type_pane_ParamLimits

0xbead,	// (0x00036130) main_btmg_pane

0x8b50,	// (0x00032dd3) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8b50,	// (0x00032dd3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc49,	// (0x00039ecc) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc49,	// (0x00039ecc) list_single_cale_mrui_row_pane_g

0x8eec,	// (0x0003316f) list_recal_vselct_arw_lo_pane

0x8ef4,	// (0x00033177) list_recal_vselct_arw_up_pane

0x8efc,	// (0x0003317f) list_recal_vselct_pane

0x9259,	// (0x000334dc) btmg_button_pane

0x9263,	// (0x000334e6) main_btmg_pane_g1

0xbead,	// (0x00036130) bg_button_pane_cp044

0x926d,	// (0x000334f0) btmg_button_pane_t1

0xe4ff,	// (0x00038782) aid_listscroll_gen

0xc547,	// (0x000367ca) main_cntbar_detail_pane

0x85db,	// (0x0003285e) list_cmail_folder_pane

0x33ed,	// (0x0002d670) sp_fs_scroll_pane_cp03_ParamLimits

0x860f,	// (0x00032892) list_single_fs_dyc_pane_cp01_ParamLimits

0x860f,	// (0x00032892) list_single_fs_dyc_pane_cp01

0x927b,	// (0x000334fe) aid_size_cmail_indent

0x9284,	// (0x00033507) list_single_dyc_row_pane_cp01

0x92b9,	// (0x0003353c) cntbar_detail_list_pane_ParamLimits

0x92b9,	// (0x0003353c) cntbar_detail_list_pane

0x9305,	// (0x00033588) main_cntbar_detail_cont_pane_ParamLimits

0x9305,	// (0x00033588) main_cntbar_detail_cont_pane

0x33ed,	// (0x0002d670) scroll_pane_cp032_ParamLimits

0x33ed,	// (0x0002d670) scroll_pane_cp032

0x9319,	// (0x0003359c) cntbar_detail_list_event_pane_ParamLimits

0x9319,	// (0x0003359c) cntbar_detail_list_event_pane

0x92c9,	// (0x0003354c) cntbar_detail_list_shct_pane

0xca8a,	// (0x00036d0d) aid_list_gen

0x9329,	// (0x000335ac) aid_scroll

0x9332,	// (0x000335b5) aid_size_touch_scroll_bar

0x7d21,	// (0x00031fa4) aid_list_double

0x933b,	// (0x000335be) aid_list_single

0x933b,	// (0x000335be) aid_list_single_lg

0x9344,	// (0x000335c7) aid_list_z_g_a_sm

0x934c,	// (0x000335cf) aid_list_z_g_d

0x9354,	// (0x000335d7) aid_txt_z_prm

0x9362,	// (0x000335e5) aid_txt_z_prm_cp01

0x9370,	// (0x000335f3) aid_txt_z_sec

0x937e,	// (0x00033601) main_cntbar_detail_cont_pane_g1_ParamLimits

0x937e,	// (0x00033601) main_cntbar_detail_cont_pane_g1

0x9392,	// (0x00033615) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9392,	// (0x00033615) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcdb,	// (0x00039f5e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcdb,	// (0x00039f5e) main_cntbar_detail_cont_pane_g

0x93a2,	// (0x00033625) main_cntbar_detail_cont_pane_t1

0x93b0,	// (0x00033633) main_cntbar_detail_cont_pane_t2

0x93be,	// (0x00033641) main_cntbar_detail_cont_pane_t3

0x0002,

0xfce0,	// (0x00039f63) main_cntbar_detail_cont_pane_t

0x93cc,	// (0x0003364f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93cc,	// (0x0003364f) cell_cntbar_detail_list_shct_pane

0x93e0,	// (0x00033663) cntbar_detail_list_shct_pane_g1

0x93e9,	// (0x0003366c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfce7,	// (0x00039f6a) cntbar_detail_list_shct_pane_g

0x93f2,	// (0x00033675) cntbar_detail_list_event_pane_g1_ParamLimits

0x93f2,	// (0x00033675) cntbar_detail_list_event_pane_g1

0x93fe,	// (0x00033681) cntbar_detail_list_event_pane_g2_ParamLimits

0x93fe,	// (0x00033681) cntbar_detail_list_event_pane_g2

0x0005,

0xfcec,	// (0x00039f6f) cntbar_detail_list_event_pane_g_ParamLimits

0xfcec,	// (0x00039f6f) cntbar_detail_list_event_pane_g

0x946a,	// (0x000336ed) cntbar_detail_list_event_pane_t1_ParamLimits

0x946a,	// (0x000336ed) cntbar_detail_list_event_pane_t1

0x947f,	// (0x00033702) cntbar_detail_list_event_pane_t2_ParamLimits

0x947f,	// (0x00033702) cntbar_detail_list_event_pane_t2

0x0002,

0xfcf9,	// (0x00039f7c) cntbar_detail_list_event_pane_t_ParamLimits

0xfcf9,	// (0x00039f7c) cntbar_detail_list_event_pane_t

0xc5ec,	// (0x0003686f) cell_cntbar_detail_list_shct_pane_g1

0xd20d,	// (0x00037490) navi_pane_mv_g3

0xc547,	// (0x000367ca) main_cntbar_detail_pane_ParamLimits

0xbead,	// (0x00036130) main_notif_wgt_pane

0xb41c,	// (0x0003569f) aid_tch_main_mp4_pane_g4

0xb694,	// (0x00035917) popup_slider_window_cp02

0x8ee2,	// (0x00033165) list_recal_day_event_pane

0x928d,	// (0x00033510) cntbar_detail_btn_pane_ParamLimits

0x928d,	// (0x00033510) cntbar_detail_btn_pane

0x92a3,	// (0x00033526) cntbar_detail_btn_pane_cp01_ParamLimits

0x92a3,	// (0x00033526) cntbar_detail_btn_pane_cp01

0x92c9,	// (0x0003354c) cntbar_detail_list_shct_pane_ParamLimits

0x92d9,	// (0x0003355c) cntbar_detail_pane_g1_ParamLimits

0x92d9,	// (0x0003355c) cntbar_detail_pane_g1

0x92e9,	// (0x0003356c) cntbar_detail_pane_t1_ParamLimits

0x92e9,	// (0x0003356c) cntbar_detail_pane_t1

0x940a,	// (0x0003368d) cntbar_detail_list_event_pane_g3_ParamLimits

0x940a,	// (0x0003368d) cntbar_detail_list_event_pane_g3

0x9422,	// (0x000336a5) cntbar_detail_list_event_pane_g4_ParamLimits

0x9422,	// (0x000336a5) cntbar_detail_list_event_pane_g4

0x943a,	// (0x000336bd) cntbar_detail_list_event_pane_g5_ParamLimits

0x943a,	// (0x000336bd) cntbar_detail_list_event_pane_g5

0x9452,	// (0x000336d5) cntbar_detail_list_event_pane_g6_ParamLimits

0x9452,	// (0x000336d5) cntbar_detail_list_event_pane_g6

0x9494,	// (0x00033717) cntbar_detail_list_event_pane_t3_ParamLimits

0x9494,	// (0x00033717) cntbar_detail_list_event_pane_t3

0x94a6,	// (0x00033729) popup_notif_wgt_window_ParamLimits

0x94a6,	// (0x00033729) popup_notif_wgt_window

0x94bf,	// (0x00033742) popup_submenu_window_cp01_ParamLimits

0x94bf,	// (0x00033742) popup_submenu_window_cp01

0xc823,	// (0x00036aa6) bg_popup_window_pane_cp10

0x94d5,	// (0x00033758) listscroll_notif_wgt_pane

0x94e7,	// (0x0003376a) list_notif_wgt_window

0x94f0,	// (0x00033773) scroll_pane_cp033

0x94f9,	// (0x0003377c) list_notif_wgt_row_pane_ParamLimits

0x94f9,	// (0x0003377c) list_notif_wgt_row_pane

0x9509,	// (0x0003378c) aid_size_list_notif_wgt_del

0x9516,	// (0x00033799) list_notif_wgt_row_pane_g1

0x9522,	// (0x000337a5) list_notif_wgt_row_pane_g2

0x9531,	// (0x000337b4) list_notif_wgt_row_pane_g3

0x0002,

0xfd00,	// (0x00039f83) list_notif_wgt_row_pane_g

0x953e,	// (0x000337c1) list_notif_wgt_row_pane_t1

0x9554,	// (0x000337d7) list_notif_wgt_row_pane_t2

0x9566,	// (0x000337e9) list_notif_wgt_row_pane_t3

0x0002,

0xfd07,	// (0x00039f8a) list_notif_wgt_row_pane_t

0x5ebb,	// (0x0003013e) list_recal_day_event_pane_g1

0x9578,	// (0x000337fb) list_recal_day_event_pane_t1

0xbead,	// (0x00036130) bg_button_pane_cp045

0x9587,	// (0x0003380a) cntbar_detail_btn_pane_t1

0xd32e,	// (0x000375b1) main_callh_pane_ParamLimits

0xd32e,	// (0x000375b1) main_callh_pane

0xbead,	// (0x00036130) main_coverflow0_pane

0xbead,	// (0x00036130) main_wgtman_pane

0x7b15,	// (0x00031d98) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7b15,	// (0x00031d98) main_fs_bigclock_unlock_btn_pane

0x856c,	// (0x000327ef) bg_button_pane_cp16

0x857c,	// (0x000327ff) cell_tport_appsw_pane_g3

0x9595,	// (0x00033818) cf0_flow_pane_ParamLimits

0x9595,	// (0x00033818) cf0_flow_pane

0x95aa,	// (0x0003382d) listscroll_cf0_pane

0x95b5,	// (0x00033838) main_cf0_pane_g1

0x95c7,	// (0x0003384a) main_cf0_pane_t1_ParamLimits

0x95c7,	// (0x0003384a) main_cf0_pane_t1

0x95de,	// (0x00033861) main_cf0_pane_t2_ParamLimits

0x95de,	// (0x00033861) main_cf0_pane_t2

0x0001,

0xfd13,	// (0x00039f96) main_cf0_pane_t_ParamLimits

0xfd13,	// (0x00039f96) main_cf0_pane_t

0x95f5,	// (0x00033878) scroll_pane_cp11

0x9600,	// (0x00033883) cf0_flow_pane_g1

0x9608,	// (0x0003388b) cf0_flow_pane_g2

0x0001,

0xfd18,	// (0x00039f9b) cf0_flow_pane_g

0x9610,	// (0x00033893) cf0_flow_pane_t1

0xbead,	// (0x00036130) main_call6_pane

0xbead,	// (0x00036130) main_calllock_pane

0x1afb,	// (0x0002bd7e) call6_btn_grp_pane_ParamLimits

0x1afb,	// (0x0002bd7e) call6_btn_grp_pane

0x1b15,	// (0x0002bd98) call6_pane_g1_ParamLimits

0x1b15,	// (0x0002bd98) call6_pane_g1

0x1b2b,	// (0x0002bdae) popup_call6_1st_window_ParamLimits

0x1b2b,	// (0x0002bdae) popup_call6_1st_window

0x1b3c,	// (0x0002bdbf) popup_call6_2nd_window_ParamLimits

0x1b3c,	// (0x0002bdbf) popup_call6_2nd_window

0x1b4d,	// (0x0002bdd0) cell_call6_btn_pane_ParamLimits

0x1b4d,	// (0x0002bdd0) cell_call6_btn_pane

0xc823,	// (0x00036aa6) bg_popup_call2_in_pane_cp03

0x961e,	// (0x000338a1) popup_call6_1st_window_g1

0x9626,	// (0x000338a9) popup_call6_1st_window_g2

0x962e,	// (0x000338b1) popup_call6_1st_window_g3

0x0002,

0xfd1d,	// (0x00039fa0) popup_call6_1st_window_g

0x9636,	// (0x000338b9) popup_call6_1st_window_t1

0x9645,	// (0x000338c8) popup_call6_1st_window_t2

0x9653,	// (0x000338d6) popup_call6_1st_window_t3

0x0002,

0xfd24,	// (0x00039fa7) popup_call6_1st_window_t

0xc823,	// (0x00036aa6) bg_popup_call2_in_pane_cp04

0x9661,	// (0x000338e4) popup_call6_2nd_window_g1

0x9669,	// (0x000338ec) popup_call6_2nd_window_g2

0x9671,	// (0x000338f4) popup_call6_2nd_window_g3

0x0002,

0xfd2b,	// (0x00039fae) popup_call6_2nd_window_g

0x9679,	// (0x000338fc) popup_call6_2nd_window_t1

0xb12a,	// (0x000353ad) bg_button_pane_cp15

0xb8e4,	// (0x00035b67) cell_call6_btn_pane_g1

0xb8ed,	// (0x00035b70) cell_call6_btn_pane_t1

0x9688,	// (0x0003390b) listscroll_wgtman_pane_ParamLimits

0x9688,	// (0x0003390b) listscroll_wgtman_pane

0x96a9,	// (0x0003392c) wgtman_btn_pane_ParamLimits

0x96a9,	// (0x0003392c) wgtman_btn_pane

0xd014,	// (0x00037297) aid_scroll_copy1

0x96ec,	// (0x0003396f) list_wgtman_pane

0x96f6,	// (0x00033979) wgtman_btn_pane_g1_ParamLimits

0x96f6,	// (0x00033979) wgtman_btn_pane_g1

0x9722,	// (0x000339a5) wgtman_btn_pane_t1_ParamLimits

0x9722,	// (0x000339a5) wgtman_btn_pane_t1

0x975f,	// (0x000339e2) wgtman_btn_pane_t2_ParamLimits

0x975f,	// (0x000339e2) wgtman_btn_pane_t2

0x0001,

0xfd32,	// (0x00039fb5) wgtman_btn_pane_t_ParamLimits

0xfd32,	// (0x00039fb5) wgtman_btn_pane_t

0x9776,	// (0x000339f9) listrow_wgtman_pane_ParamLimits

0x9776,	// (0x000339f9) listrow_wgtman_pane

0x9788,	// (0x00033a0b) listrow_wgtman_pane_g1

0x9795,	// (0x00033a18) listrow_wgtman_pane_g2

0x0001,

0xfd37,	// (0x00039fba) listrow_wgtman_pane_g

0x97b3,	// (0x00033a36) listrow_wgtman_pane_t1

0x97cb,	// (0x00033a4e) listrow_wgtman_pane_t2

0x0001,

0xfd3c,	// (0x00039fbf) listrow_wgtman_pane_t

0x97f1,	// (0x00033a74) wait_bar_pane_cp09

0x9803,	// (0x00033a86) main_calllock_btn_pane

0x980d,	// (0x00033a90) main_calllock_pane_g1

0xbead,	// (0x00036130) bg_button_pane_cp17

0x9815,	// (0x00033a98) main_calllock_btn_pane_g1

0x981e,	// (0x00033aa1) main_calllock_btn_pane_t1

0xbead,	// (0x00036130) main_dialer3_pane

0xbead,	// (0x00036130) main_fmrd2_pane

0xc5ec,	// (0x0003686f) main_fs_bigclock_unlock_btn_pane_g1

0x9835,	// (0x00033ab8) main_fs_bigclock_unlock_btn_pane_t1

0x9843,	// (0x00033ac6) area_fmrd2_info_pane_ParamLimits

0x9843,	// (0x00033ac6) area_fmrd2_info_pane

0x9854,	// (0x00033ad7) area_fmrd2_visual_pane_ParamLimits

0x9854,	// (0x00033ad7) area_fmrd2_visual_pane

0x9862,	// (0x00033ae5) fmrd2_indi_pane_ParamLimits

0x9862,	// (0x00033ae5) fmrd2_indi_pane

0x986f,	// (0x00033af2) area_fmrd2_visual_pane_g1

0x9877,	// (0x00033afa) area_fmrd2_visual_pane_t1

0x9887,	// (0x00033b0a) area_fmrd2_visual_pane_t2

0x9897,	// (0x00033b1a) area_fmrd2_visual_pane_t3

0x0002,

0xfd46,	// (0x00039fc9) area_fmrd2_visual_pane_t

0x98a7,	// (0x00033b2a) area_fmrd2_info_pane_g1

0x98af,	// (0x00033b32) area_fmrd2_info_pane_t1

0x98bf,	// (0x00033b42) area_fmrd2_info_pane_t2

0x98cf,	// (0x00033b52) area_fmrd2_info_pane_t3

0x98df,	// (0x00033b62) area_fmrd2_info_pane_t4

0x0003,

0xfd4d,	// (0x00039fd0) area_fmrd2_info_pane_t

0x98ed,	// (0x00033b70) fmrd2_indi_pane_t1

0x98fd,	// (0x00033b80) fmrd2_indi_pane_t2

0x990d,	// (0x00033b90) fmrd2_indi_pane_t3

0x0002,

0xfd56,	// (0x00039fd9) fmrd2_indi_pane_t

0x7b9a,	// (0x00031e1d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7b9a,	// (0x00031e1d) list_single_fs_bigclock_indicator_pane_g5

0x7c4b,	// (0x00031ece) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7c4b,	// (0x00031ece) list_single_fs_bigclock_indicator_pane_t5

0x88f6,	// (0x00032b79) aid_cell_bcale_month_pane_ParamLimits

0x88f6,	// (0x00032b79) aid_cell_bcale_month_pane

0x891d,	// (0x00032ba0) bcale_month_pane_ParamLimits

0x891d,	// (0x00032ba0) bcale_month_pane

0x8941,	// (0x00032bc4) bcale_preview_pane_ParamLimits

0x8941,	// (0x00032bc4) bcale_preview_pane

0x91f1,	// (0x00033474) list_single_fs_bigclock_pane_t1_ParamLimits

0x9210,	// (0x00033493) list_single_fs_bigclock_pane_t2_ParamLimits

0x9210,	// (0x00033493) list_single_fs_bigclock_pane_t2

0x0001,

0xfcd1,	// (0x00039f54) list_single_fs_bigclock_pane_t_ParamLimits

0xfcd1,	// (0x00039f54) list_single_fs_bigclock_pane_t

0x982d,	// (0x00033ab0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd41,	// (0x00039fc4) main_fs_bigclock_unlock_btn_pane_g

0x991d,	// (0x00033ba0) aid_dia3_key_size_ParamLimits

0x991d,	// (0x00033ba0) aid_dia3_key_size

0x992c,	// (0x00033baf) aid_dia3_listrow_size_ParamLimits

0x992c,	// (0x00033baf) aid_dia3_listrow_size

0x9941,	// (0x00033bc4) dia3_keypad_fun_pane_ParamLimits

0x9941,	// (0x00033bc4) dia3_keypad_fun_pane

0x995d,	// (0x00033be0) dia3_keypad_num_pane_ParamLimits

0x995d,	// (0x00033be0) dia3_keypad_num_pane

0x9978,	// (0x00033bfb) dia3_listscroll_pane_ParamLimits

0x9978,	// (0x00033bfb) dia3_listscroll_pane

0x998b,	// (0x00033c0e) dia3_numentry_pane_ParamLimits

0x998b,	// (0x00033c0e) dia3_numentry_pane

0x99a3,	// (0x00033c26) dia3_list_pane

0x99ae,	// (0x00033c31) scroll_pane_cp12

0xbead,	// (0x00036130) bg_dia3_numentry_pane

0x99b9,	// (0x00033c3c) dia3_numentry_pane_t1

0x99c8,	// (0x00033c4b) cell_dia3_key_num_pane

0x99d0,	// (0x00033c53) cell_dia3_key0_fun_pane_ParamLimits

0x99d0,	// (0x00033c53) cell_dia3_key0_fun_pane

0x99e4,	// (0x00033c67) cell_dia3_key1_fun_pane_ParamLimits

0x99e4,	// (0x00033c67) cell_dia3_key1_fun_pane

0x99fc,	// (0x00033c7f) dia3_listrow_pane

0x762c,	// (0x000318af) bg_dia3_numentry_pane_g1

0xbead,	// (0x00036130) bg_button_pane_cp21

0x9a0e,	// (0x00033c91) cell_dia3_key_num_pane_t1

0x9a1c,	// (0x00033c9f) cell_dia3_key_num_pane_t2

0x9a2b,	// (0x00033cae) cell_dia3_key_num_pane_t3

0x9a3a,	// (0x00033cbd) cell_dia3_key_num_pane_t4

0x0003,

0xfd5d,	// (0x00039fe0) cell_dia3_key_num_pane_t

0xbead,	// (0x00036130) bg_button_pane_cp19

0x9a49,	// (0x00033ccc) cell_dia3_key0_fun_pane_g1

0xbead,	// (0x00036130) bg_button_pane_cp20

0x9a51,	// (0x00033cd4) cell_dia3_key1_fun_pane_g1

0x9a59,	// (0x00033cdc) area_left_week_number_pane

0x9a65,	// (0x00033ce8) area_top_day_name_pane

0x9a78,	// (0x00033cfb) frame_month_view_pane

0x9a8b,	// (0x00033d0e) grid_month_view_pane

0x9a99,	// (0x00033d1c) cell_top_day_name_pane_ParamLimits

0x9a99,	// (0x00033d1c) cell_top_day_name_pane

0x9ac6,	// (0x00033d49) cell_area_left_week_number_pane_ParamLimits

0x9ac6,	// (0x00033d49) cell_area_left_week_number_pane

0x9ada,	// (0x00033d5d) cell_month_view_pane_ParamLimits

0x9ada,	// (0x00033d5d) cell_month_view_pane

0x9b07,	// (0x00033d8a) frm_month_g1

0x9b14,	// (0x00033d97) frm_month_g2

0x9b27,	// (0x00033daa) frm_month_g3

0x9b3a,	// (0x00033dbd) frm_month_g4

0x9b4d,	// (0x00033dd0) frm_month_g5

0x9b60,	// (0x00033de3) frm_month_g6

0x9b73,	// (0x00033df6) frm_month_g7

0x9b86,	// (0x00033e09) frm_month_g8

0x9b93,	// (0x00033e16) frm_month_g9

0x9ba3,	// (0x00033e26) frm_month_g10

0x9bb3,	// (0x00033e36) frm_month_g11

0x9bc3,	// (0x00033e46) frm_month_g12

0x9bd5,	// (0x00033e58) frm_month_g13

0x9be7,	// (0x00033e6a) frm_month_g14

0x9bfb,	// (0x00033e7e) frm_month_g15

0x9c0f,	// (0x00033e92) frm_month_g16

0x000f,

0xfd66,	// (0x00039fe9) frm_month_g

0x9c23,	// (0x00033ea6) cell_top_day_name_pane_t1

0x9c36,	// (0x00033eb9) cell_area_left_week_number_pane_g1

0x9c42,	// (0x00033ec5) cell_area_left_week_number_pane_t1

0xc5ae,	// (0x00036831) cell_month_view_pane_g1

0x9c55,	// (0x00033ed8) cell_month_view_pane_t1

0xbead,	// (0x00036130) main_fps_pane

0x802f,	// (0x000322b2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x802f,	// (0x000322b2) cmail_ddmenu_btn02_pane_cp1

0x804b,	// (0x000322ce) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x804b,	// (0x000322ce) cmail_ddmenu_btn02_pane_cp2

0x8e93,	// (0x00033116) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e93,	// (0x00033116) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc84,	// (0x00039f07) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc84,	// (0x00039f07) cmail_ddmenu_btn02_pane_g

0x8eb1,	// (0x00033134) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8eb1,	// (0x00033134) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc89,	// (0x00039f0c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc89,	// (0x00039f0c) cmail_ddmenu_btn02_pane_t

0x9c68,	// (0x00033eeb) fps_text_pane_ParamLimits

0x9c68,	// (0x00033eeb) fps_text_pane

0x9c7f,	// (0x00033f02) main_fps_pane_g1_ParamLimits

0x9c7f,	// (0x00033f02) main_fps_pane_g1

0x9c99,	// (0x00033f1c) wait_bar_pane_cp010_ParamLimits

0x9c99,	// (0x00033f1c) wait_bar_pane_cp010

0x9caa,	// (0x00033f2d) fps_text_pane_t1_ParamLimits

0x9caa,	// (0x00033f2d) fps_text_pane_t1

0x5495,	// (0x0002f718) cam4_image_uncrop_pane_g1

0x549e,	// (0x0002f721) cam4_image_uncrop_pane_g2

0x54a7,	// (0x0002f72a) cam4_image_uncrop_pane_g3

0x54b0,	// (0x0002f733) cam4_image_uncrop_pane_g4

0x0003,

0xf7ef,	// (0x00039a72) cam4_image_uncrop_pane_g

0x99fc,	// (0x00033c7f) dia3_listrow_pane_ParamLimits

0xbead,	// (0x00036130) main_phob2_pane

0x8514,	// (0x00032797) cell_tport_appsw_pane_cp02_ParamLimits

0x8514,	// (0x00032797) cell_tport_appsw_pane_cp02

0x8528,	// (0x000327ab) cell_tport_appsw_pane_cp03_ParamLimits

0x8528,	// (0x000327ab) cell_tport_appsw_pane_cp03

0xbead,	// (0x00036130) phob2_contact_card_pane

0xbead,	// (0x00036130) phob2_listscroll_pane

0x9cc2,	// (0x00033f45) phob2_list_pane

0x8e49,	// (0x000330cc) scroll_pane_cp034

0x9cca,	// (0x00033f4d) phob2_cc_data_pane_ParamLimits

0x9cca,	// (0x00033f4d) phob2_cc_data_pane

0x9ce9,	// (0x00033f6c) phob2_cc_listscroll_pane_ParamLimits

0x9ce9,	// (0x00033f6c) phob2_cc_listscroll_pane

0x9776,	// (0x000339f9) list_double_large_graphic_phob2_pane_ParamLimits

0x9776,	// (0x000339f9) list_double_large_graphic_phob2_pane

0x9d07,	// (0x00033f8a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9d07,	// (0x00033f8a) list_double_large_graphic_phob2_pane_g1

0x9d14,	// (0x00033f97) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9d14,	// (0x00033f97) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd87,	// (0x0003a00a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd87,	// (0x0003a00a) list_double_large_graphic_phob2_pane_g

0x9d3a,	// (0x00033fbd) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9d3a,	// (0x00033fbd) list_double_large_graphic_phob2_pane_t1

0x9d4f,	// (0x00033fd2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9d4f,	// (0x00033fd2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd90,	// (0x0003a013) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd90,	// (0x0003a013) list_double_large_graphic_phob2_pane_t

0xbead,	// (0x00036130) list_highlight_pane_cp024

0x9d64,	// (0x00033fe7) phob2_cc_button_pane

0x9d6c,	// (0x00033fef) phob2_cc_data_pane_g1_ParamLimits

0x9d6c,	// (0x00033fef) phob2_cc_data_pane_g1

0x9d83,	// (0x00034006) phob2_cc_data_pane_g2_ParamLimits

0x9d83,	// (0x00034006) phob2_cc_data_pane_g2

0x0001,

0xfd95,	// (0x0003a018) phob2_cc_data_pane_g_ParamLimits

0xfd95,	// (0x0003a018) phob2_cc_data_pane_g

0x9d95,	// (0x00034018) phob2_cc_data_pane_t1_ParamLimits

0x9d95,	// (0x00034018) phob2_cc_data_pane_t1

0x9dad,	// (0x00034030) phob2_cc_data_pane_t2_ParamLimits

0x9dad,	// (0x00034030) phob2_cc_data_pane_t2

0x9dc5,	// (0x00034048) phob2_cc_data_pane_t3_ParamLimits

0x9dc5,	// (0x00034048) phob2_cc_data_pane_t3

0x0002,

0xfd9a,	// (0x0003a01d) phob2_cc_data_pane_t_ParamLimits

0xfd9a,	// (0x0003a01d) phob2_cc_data_pane_t

0x9ddd,	// (0x00034060) phob2_cc_list_pane_ParamLimits

0x9ddd,	// (0x00034060) phob2_cc_list_pane

0x620d,	// (0x00030490) scroll_pane_cp035_ParamLimits

0x620d,	// (0x00030490) scroll_pane_cp035

0xc547,	// (0x000367ca) bg_button_pane_cp033

0x9de9,	// (0x0003406c) phob2_cc_button_pane_g1

0x9df5,	// (0x00034078) phob2_cc_button_pane_t1

0x9e0a,	// (0x0003408d) phob2_cc_button_pane_t2

0x0001,

0xfda1,	// (0x0003a024) phob2_cc_button_pane_t

0x9e1c,	// (0x0003409f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9e1c,	// (0x0003409f) list_double_large_graphic_phob2_cc_pane

0x9e4c,	// (0x000340cf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9e4c,	// (0x000340cf) list_double_large_graphic_phob2_cc_pane_g1

0x9e58,	// (0x000340db) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9e58,	// (0x000340db) list_double_large_graphic_phob2_cc_pane_g2

0x9e64,	// (0x000340e7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9e64,	// (0x000340e7) list_double_large_graphic_phob2_cc_pane_g3

0x9e70,	// (0x000340f3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9e70,	// (0x000340f3) list_double_large_graphic_phob2_cc_pane_g4

0x9e7c,	// (0x000340ff) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9e7c,	// (0x000340ff) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfda6,	// (0x0003a029) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfda6,	// (0x0003a029) list_double_large_graphic_phob2_cc_pane_g

0x9e88,	// (0x0003410b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9e88,	// (0x0003410b) list_double_large_graphic_phob2_cc_pane_t1

0x9eb1,	// (0x00034134) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9eb1,	// (0x00034134) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdb1,	// (0x0003a034) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdb1,	// (0x0003a034) list_double_large_graphic_phob2_cc_pane_t

0x9eda,	// (0x0003415d) list_highlight_pane_cp025_ParamLimits

0x9eda,	// (0x0003415d) list_highlight_pane_cp025

0xc547,	// (0x000367ca) bg_button_pane_cp033_ParamLimits

0x9de9,	// (0x0003406c) phob2_cc_button_pane_g1_ParamLimits

0x9df5,	// (0x00034078) phob2_cc_button_pane_t1_ParamLimits

0x9e0a,	// (0x0003408d) phob2_cc_button_pane_t2_ParamLimits

0xfda1,	// (0x0003a024) phob2_cc_button_pane_t_ParamLimits

0x1bc9,	// (0x0002be4c) popup_wgtman_window

0x59bf,	// (0x0002fc42) scroll_pane_cp038

0x96ce,	// (0x00033951) wgtman_btn_pane_cp_01_ParamLimits

0x96ce,	// (0x00033951) wgtman_btn_pane_cp_01

0x9ee8,	// (0x0003416b) wgtman_content_pane

0x9ef1,	// (0x00034174) wgtman_heading_pane

0xbead,	// (0x00036130) bg_heading_pane_cp02

0x9efa,	// (0x0003417d) wgtman_heading_pane_g1

0x9f02,	// (0x00034185) wgtman_heading_pane_t1

0x9f10,	// (0x00034193) scroll_pane_cp036

0x9f18,	// (0x0003419b) wgtman_list_pane

0x9f20,	// (0x000341a3) wgtman_list_pane_t1_ParamLimits

0x9f20,	// (0x000341a3) wgtman_list_pane_t1

0xb710,	// (0x00035993) cam4_grid_pane

0x5fb3,	// (0x00030236) bg_button_pane_cp015_ParamLimits

0x5fc4,	// (0x00030247) bg_button_pane_cp016_ParamLimits

0x5fd0,	// (0x00030253) bg_button_pane_cp017_ParamLimits

0x6030,	// (0x000302b3) popup_vitu2_query_window_g3_ParamLimits

0x6030,	// (0x000302b3) popup_vitu2_query_window_g3

0x60d1,	// (0x00030354) popup_vitu2_query_window_t6_ParamLimits

0x60d1,	// (0x00030354) popup_vitu2_query_window_t6

0x60fc,	// (0x0003037f) popup_vitu2_query_window_t7_ParamLimits

0x60fc,	// (0x0003037f) popup_vitu2_query_window_t7

0x5495,	// (0x0002f718) cam4_grid_pane_g1

0x549e,	// (0x0002f721) cam4_grid_pane_g2

0x9f3a,	// (0x000341bd) cam4_grid_pane_g3

0x9f43,	// (0x000341c6) cam4_grid_pane_g4

0x0003,

0xfdb6,	// (0x0003a039) cam4_grid_pane_g

0x2408,	// (0x0002c68b) aid_placing_vt_slider_lsc_ParamLimits

0x2713,	// (0x0002c996) vidtel_button_pane_ParamLimits

0x2713,	// (0x0002c996) vidtel_button_pane

0xbead,	// (0x00036130) bg_button_pane_cp034

0x9f4e,	// (0x000341d1) vidtel_button_pane_g1

0x9f56,	// (0x000341d9) vidtel_button_pane_t1

0x5d9e,	// (0x00030021) aid_size_vtel_slider_touch

0x620d,	// (0x00030490) scroll_pane_cp039

0x769b,	// (0x0003191e) ncim_query_button_pane_cp01_ParamLimits

0x76ba,	// (0x0003193d) ncimui_query_pane_g1_ParamLimits

0xc547,	// (0x000367ca) input_focus_pane_cp012_ParamLimits

0x76df,	// (0x00031962) ncim_query_entry_pane_t1_ParamLimits

0x620d,	// (0x00030490) scroll_pane_cp039_ParamLimits

0xd0f8,	// (0x0003737b) navi_pane_bcale_mc_g1

0xd100,	// (0x00037383) navi_pane_bcale_mc_t1

0x813c,	// (0x000323bf) main_sp_fs_email_pane_g1

0x8148,	// (0x000323cb) main_sp_fs_email_pane_g2

0x0001,

0xfbb4,	// (0x00039e37) main_sp_fs_email_pane_g

0x8b5c,	// (0x00032ddf) list_single_cale_mrui_row_pane_g3_ParamLimits

0x8b5c,	// (0x00032ddf) list_single_cale_mrui_row_pane_g3

0x8f55,	// (0x000331d8) list_single_recal_day_pane_g5_event_pane

0x8f6b,	// (0x000331ee) list_single_recal_day_pane_g7

0xb8fc,	// (0x00035b7f) list_recal_day_event_pane_cp01

0xb905,	// (0x00035b88) list_recal_vselct_arw_lo_pane_cp01

0xb90d,	// (0x00035b90) list_recal_vselct_arw_up_pane_cp01

0xb915,	// (0x00035b98) list_recal_vselct_pane_cp01

0x5ebb,	// (0x0003013e) list_recal_day_event_pane_cp01_g1

0xb91f,	// (0x00035ba2) list_recal_day_event_pane_cp01_t1

0x8f73,	// (0x000331f6) list_single_recal_day_pane_t1_ParamLimits

0x8f85,	// (0x00033208) list_single_recal_day_pane_t2_ParamLimits

0xfc99,	// (0x00039f1c) list_single_recal_day_pane_t_ParamLimits

0xc525,	// (0x000367a8) bg_notes_pane_ParamLimits

0xc628,	// (0x000368ab) list_notes_pane_ParamLimits

0x1c2d,	// (0x0002beb0) scroll_pane_cp06_ParamLimits

0xc64a,	// (0x000368cd) main_notes_pane_ParamLimits

0xc547,	// (0x000367ca) main_welc_pane

0x9f99,	// (0x0003421c) main_welc_body_pane_ParamLimits

0x9f99,	// (0x0003421c) main_welc_body_pane

0x9fb7,	// (0x0003423a) main_welc_opti_pane_ParamLimits

0x9fb7,	// (0x0003423a) main_welc_opti_pane

0xa033,	// (0x000342b6) main_welc_pane_t1_ParamLimits

0xa033,	// (0x000342b6) main_welc_pane_t1

0xa22b,	// (0x000344ae) main_welc_body_row_pane_ParamLimits

0xa22b,	// (0x000344ae) main_welc_body_row_pane

0xc5a0,	// (0x00036823) main_welc_opti_row_pane_ParamLimits

0xc5a0,	// (0x00036823) main_welc_opti_row_pane

0xb93d,	// (0x00035bc0) main_welc_opti_row_pane_g1

0xa23f,	// (0x000344c2) main_welc_opti_row_pane_t1

0xb945,	// (0x00035bc8) main_welc_body_row_pane_t1

0x94df,	// (0x00033762) popup_notif_wgt_heading_pane

0x9509,	// (0x0003378c) aid_size_list_notif_wgt_del_ParamLimits

0x9516,	// (0x00033799) list_notif_wgt_row_pane_g1_ParamLimits

0x9522,	// (0x000337a5) list_notif_wgt_row_pane_g2_ParamLimits

0x9531,	// (0x000337b4) list_notif_wgt_row_pane_g3_ParamLimits

0xfd00,	// (0x00039f83) list_notif_wgt_row_pane_g_ParamLimits

0x953e,	// (0x000337c1) list_notif_wgt_row_pane_t1_ParamLimits

0x9554,	// (0x000337d7) list_notif_wgt_row_pane_t2_ParamLimits

0x9566,	// (0x000337e9) list_notif_wgt_row_pane_t3_ParamLimits

0xfd07,	// (0x00039f8a) list_notif_wgt_row_pane_t_ParamLimits

0x9788,	// (0x00033a0b) listrow_wgtman_pane_g1_ParamLimits

0x9795,	// (0x00033a18) listrow_wgtman_pane_g2_ParamLimits

0xfd37,	// (0x00039fba) listrow_wgtman_pane_g_ParamLimits

0x97b3,	// (0x00033a36) listrow_wgtman_pane_t1_ParamLimits

0x97cb,	// (0x00033a4e) listrow_wgtman_pane_t2_ParamLimits

0xfd3c,	// (0x00039fbf) listrow_wgtman_pane_t_ParamLimits

0x97f1,	// (0x00033a74) wait_bar_pane_cp09_ParamLimits

0xbead,	// (0x00036130) bg_popup_heading_pane_cp02

0xb954,	// (0x00035bd7) popup_notif_wgt_heading_pane_g1

0xb95c,	// (0x00035bdf) popup_notif_wgt_heading_pane_t1

0xbead,	// (0x00036130) main_vids_pane

0xbead,	// (0x00036130) vids_listscroll_pane

0xa24e,	// (0x000344d1) scroll_pane_cp040

0xbead,	// (0x00036130) vids_list_pane

0xa259,	// (0x000344dc) vids_list_double_pane_ParamLimits

0xa259,	// (0x000344dc) vids_list_double_pane

0xa26a,	// (0x000344ed) vids_list_double_pane_g1

0xa273,	// (0x000344f6) vids_list_double_pane_t1

0xa283,	// (0x00034506) vids_list_double_pane_t2

0x0001,

0xfdd5,	// (0x0003a058) vids_list_double_pane_t

0xb11c,	// (0x0003539f) main_ncimui_pane_ParamLimits

0x73c2,	// (0x00031645) main_ncimui_pane_g1_ParamLimits

0x73ce,	// (0x00031651) main_ncimui_pane_g2_ParamLimits

0x73ce,	// (0x00031651) main_ncimui_pane_g2

0x0001,

0xfac7,	// (0x00039d4a) main_ncimui_pane_g_ParamLimits

0xfac7,	// (0x00039d4a) main_ncimui_pane_g

0x9fd2,	// (0x00034255) main_welc_pane_g1_ParamLimits

0x9fd2,	// (0x00034255) main_welc_pane_g1

0x9fe7,	// (0x0003426a) main_welc_pane_g2_ParamLimits

0x9fe7,	// (0x0003426a) main_welc_pane_g2

0x0003,

0xfdbf,	// (0x0003a042) main_welc_pane_g_ParamLimits

0xfdbf,	// (0x0003a042) main_welc_pane_g

0xc525,	// (0x000367a8) listscroll_mce_pane_ParamLimits

0xd24d,	// (0x000374d0) wait_bar_pane_cp10

0xe507,	// (0x0003878a) main_cale_day_pane_ParamLimits

0xe507,	// (0x0003878a) main_cale_week_pane_ParamLimits

0xc525,	// (0x000367a8) main_messa_pane_ParamLimits

0x4ebe,	// (0x0002f141) main_clock2_btn_pane_ParamLimits

0x4ebe,	// (0x0002f141) main_clock2_btn_pane

0xecf4,	// (0x00038f77) main_clock2_btn_pane_cp01_ParamLimits

0xecf4,	// (0x00038f77) main_clock2_btn_pane_cp01

0x8a9c,	// (0x00032d1f) list_cale_mrui_pane_ParamLimits

0x95bf,	// (0x00033842) main_cf0_pane_g2

0x0001,

0xfd0e,	// (0x00039f91) main_cf0_pane_g

0x9a59,	// (0x00033cdc) area_left_week_number_pane_ParamLimits

0x9a65,	// (0x00033ce8) area_top_day_name_pane_ParamLimits

0x9a78,	// (0x00033cfb) frame_month_view_pane_ParamLimits

0x9a8b,	// (0x00033d0e) grid_month_view_pane_ParamLimits

0x9b07,	// (0x00033d8a) frm_month_g1_ParamLimits

0x9b14,	// (0x00033d97) frm_month_g2_ParamLimits

0x9b27,	// (0x00033daa) frm_month_g3_ParamLimits

0x9b3a,	// (0x00033dbd) frm_month_g4_ParamLimits

0x9b4d,	// (0x00033dd0) frm_month_g5_ParamLimits

0x9b60,	// (0x00033de3) frm_month_g6_ParamLimits

0x9b73,	// (0x00033df6) frm_month_g7_ParamLimits

0x9b86,	// (0x00033e09) frm_month_g8_ParamLimits

0x9b93,	// (0x00033e16) frm_month_g9_ParamLimits

0x9ba3,	// (0x00033e26) frm_month_g10_ParamLimits

0x9bb3,	// (0x00033e36) frm_month_g11_ParamLimits

0x9bc3,	// (0x00033e46) frm_month_g12_ParamLimits

0x9bd5,	// (0x00033e58) frm_month_g13_ParamLimits

0x9be7,	// (0x00033e6a) frm_month_g14_ParamLimits

0x9bfb,	// (0x00033e7e) frm_month_g15_ParamLimits

0x9c0f,	// (0x00033e92) frm_month_g16_ParamLimits

0xfd66,	// (0x00039fe9) frm_month_g_ParamLimits

0x9c23,	// (0x00033ea6) cell_top_day_name_pane_t1_ParamLimits

0x9c36,	// (0x00033eb9) cell_area_left_week_number_pane_g1_ParamLimits

0x9c42,	// (0x00033ec5) cell_area_left_week_number_pane_t1_ParamLimits

0xc5ae,	// (0x00036831) cell_month_view_pane_g1_ParamLimits

0x9c55,	// (0x00033ed8) cell_month_view_pane_t1_ParamLimits

0xc51d,	// (0x000367a0) main_clock2_btn_pane_g1

0xb96a,	// (0x00035bed) main_clock2_btn_pane_t1

0xc547,	// (0x000367ca) listscroll_cmail_pane_ParamLimits

0x813c,	// (0x000323bf) main_sp_fs_email_pane_g1_ParamLimits

0x8148,	// (0x000323cb) main_sp_fs_email_pane_g2_ParamLimits

0xfbb4,	// (0x00039e37) main_sp_fs_email_pane_g_ParamLimits

0x8ec3,	// (0x00033146) list_recal_day_pane_ParamLimits

0x8ed4,	// (0x00033157) mian_recal_day_pane_t1

0x831e,	// (0x000325a1) list_single_dyc_row_text_pane_t4_ParamLimits

0x831e,	// (0x000325a1) list_single_dyc_row_text_pane_t4

0x8367,	// (0x000325ea) list_single_dyc_row_text_pane_t5_ParamLimits

0x8367,	// (0x000325ea) list_single_dyc_row_text_pane_t5

0x83dd,	// (0x00032660) list_single_dyc_row_text_pane_t6_ParamLimits

0x83dd,	// (0x00032660) list_single_dyc_row_text_pane_t6

0xcbe6,	// (0x00036e69) aid_mgn_list_cale_time_pane

0xb11c,	// (0x0003539f) main_gallery2_pane_ParamLimits

0xed0a,	// (0x00038f8d) main_clock2_pane_cp01_t1

0xed1a,	// (0x00038f9d) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x00039975) main_clock2_pane_cp01_t

0x1f1b,	// (0x0002c19e) cale_week_scroll_pane_g16_ParamLimits

0x1f1b,	// (0x0002c19e) cale_week_scroll_pane_g16

0xc823,	// (0x00036aa6) vorec_slider_pane

0x9f56,	// (0x000341d9) vidtel_button_pane_t1_ParamLimits

0x910f,	// (0x00033392) main_fs_bigclock_clock_pane_g1_ParamLimits

0x910f,	// (0x00033392) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9120,	// (0x000333a3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9120,	// (0x000333a3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcbc,	// (0x00039f3f) main_fs_bigclock_clock_pane_g_ParamLimits

0x9133,	// (0x000333b6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9149,	// (0x000333cc) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcc5,	// (0x00039f48) main_fs_bigclock_clock_pane_t_ParamLimits

0x4793,	// (0x0002ea16) main_mup3_lyrics_pane_ParamLimits

0x4793,	// (0x0002ea16) main_mup3_lyrics_pane

0xa293,	// (0x00034516) main_mup3_lyrics_pane_t1_ParamLimits

0xa293,	// (0x00034516) main_mup3_lyrics_pane_t1

0xb406,	// (0x00035689) aid_main_mp4_pane_t1_area

0xb410,	// (0x00035693) aid_main_mp4_pane_t2_area

0xb4ba,	// (0x0003573d) main_mp4_pane_g7_ParamLimits

0xb4ba,	// (0x0003573d) main_mp4_pane_g7

0xb4c6,	// (0x00035749) main_mp4_pane_g8_ParamLimits

0xb4c6,	// (0x00035749) main_mp4_pane_g8

0x53d7,	// (0x0002f65a) aid_call6_pane_g1_size

0x9e36,	// (0x000340b9) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9e36,	// (0x000340b9) list_double_large_graphic_phob2_other_pane

0xcb9e,	// (0x00036e21) list_double_large_graphic_phob2_other_pane_g1

0xbead,	// (0x00036130) list_highlight_pane_cp026

0xc547,	// (0x000367ca) main_welc_pane_ParamLimits

0x80a5,	// (0x00032328) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x80a5,	// (0x00032328) main_sp_fs_ctrlbar_pane_g3

0x80bf,	// (0x00032342) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x80bf,	// (0x00032342) main_sp_fs_ctrlbar_pane_g4

0x80f3,	// (0x00032376) toolbar2_fixed_button_pane_cp01

0x80fe,	// (0x00032381) toolbar2_fixed_button_pane_cp02

0x810b,	// (0x0003238e) toolbar2_fixed_button_pane_cp03

0x9f7f,	// (0x00034202) list_welc_entry_pane_ParamLimits

0x9f7f,	// (0x00034202) list_welc_entry_pane

0x9ffc,	// (0x0003427f) main_welc_pane_g3_ParamLimits

0x9ffc,	// (0x0003427f) main_welc_pane_g3

0xa051,	// (0x000342d4) main_welc_pane_t2_ParamLimits

0xa051,	// (0x000342d4) main_welc_pane_t2

0xa06c,	// (0x000342ef) main_welc_pane_t3_ParamLimits

0xa06c,	// (0x000342ef) main_welc_pane_t3

0x0005,

0xfdc8,	// (0x0003a04b) main_welc_pane_t_ParamLimits

0xfdc8,	// (0x0003a04b) main_welc_pane_t

0xa19c,	// (0x0003441f) welc_button_pane_ParamLimits

0xa19c,	// (0x0003441f) welc_button_pane

0xa216,	// (0x00034499) welc_service_logo_pane_ParamLimits

0xa216,	// (0x00034499) welc_service_logo_pane

0xa2af,	// (0x00034532) list_single_welc_entry_pane_ParamLimits

0xa2af,	// (0x00034532) list_single_welc_entry_pane

0xa2c0,	// (0x00034543) list_single_welc_entry_pane_g1

0xa2c8,	// (0x0003454b) list_single_welc_entry_pane_t1

0xa2d6,	// (0x00034559) list_single_welc_entry_pane_t2

0x0001,

0xfdda,	// (0x0003a05d) list_single_welc_entry_pane_t

0xbead,	// (0x00036130) bg_button_pane_cp035

0xa2e4,	// (0x00034567) welc_button_pane_t1

0xb986,	// (0x00035c09) welc_service_logo_pane_g1

0xb98f,	// (0x00035c12) welc_service_logo_pane_g2

0x0001,

0xfddf,	// (0x0003a062) welc_service_logo_pane_g

0xb12a,	// (0x000353ad) main_int_radio_pane

0xc6c1,	// (0x00036944) list_single_fs_dyc_pane_g1

0x9d20,	// (0x00033fa3) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9d20,	// (0x00033fa3) list_double_large_graphic_phob2_pane_g3

0x9d2c,	// (0x00033faf) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9d2c,	// (0x00033faf) list_double_large_graphic_phob2_pane_g4

0xa2f2,	// (0x00034575) main_int_radio1_pane_ParamLimits

0xa2f2,	// (0x00034575) main_int_radio1_pane

0xb998,	// (0x00035c1b) find_pane_cp02

0xa30f,	// (0x00034592) input_focus_pane_cp12_ParamLimits

0xa30f,	// (0x00034592) input_focus_pane_cp12

0xa31f,	// (0x000345a2) input_focus_pane_cp13_ParamLimits

0xa31f,	// (0x000345a2) input_focus_pane_cp13

0xa333,	// (0x000345b6) input_focus_pane_cp14_ParamLimits

0xa333,	// (0x000345b6) input_focus_pane_cp14

0xb9a1,	// (0x00035c24) int_radio1_listscroll_pane

0xa347,	// (0x000345ca) main_int_radio1_pane_g1_ParamLimits

0xa347,	// (0x000345ca) main_int_radio1_pane_g1

0xa35f,	// (0x000345e2) main_int_radio1_pane_t1_ParamLimits

0xa35f,	// (0x000345e2) main_int_radio1_pane_t1

0xa37a,	// (0x000345fd) main_int_radio1_pane_t2_ParamLimits

0xa37a,	// (0x000345fd) main_int_radio1_pane_t2

0xa395,	// (0x00034618) main_int_radio1_pane_t3_ParamLimits

0xa395,	// (0x00034618) main_int_radio1_pane_t3

0xa3b0,	// (0x00034633) main_int_radio1_pane_t4_ParamLimits

0xa3b0,	// (0x00034633) main_int_radio1_pane_t4

0xb9ab,	// (0x00035c2e) main_int_radio1_pane_t5_ParamLimits

0xb9ab,	// (0x00035c2e) main_int_radio1_pane_t5

0xa3c2,	// (0x00034645) main_int_radio1_pane_t6_ParamLimits

0xa3c2,	// (0x00034645) main_int_radio1_pane_t6

0xa3d7,	// (0x0003465a) main_int_radio1_pane_t7_ParamLimits

0xa3d7,	// (0x0003465a) main_int_radio1_pane_t7

0xa3ec,	// (0x0003466f) main_int_radio1_pane_t8_ParamLimits

0xa3ec,	// (0x0003466f) main_int_radio1_pane_t8

0xa40b,	// (0x0003468e) main_int_radio1_pane_t9_ParamLimits

0xa40b,	// (0x0003468e) main_int_radio1_pane_t9

0xa41d,	// (0x000346a0) main_int_radio1_pane_t10_ParamLimits

0xa41d,	// (0x000346a0) main_int_radio1_pane_t10

0xa443,	// (0x000346c6) main_int_radio1_pane_t11_ParamLimits

0xa443,	// (0x000346c6) main_int_radio1_pane_t11

0xa469,	// (0x000346ec) main_int_radio1_pane_t12_ParamLimits

0xa469,	// (0x000346ec) main_int_radio1_pane_t12

0x000b,

0xfde4,	// (0x0003a067) main_int_radio1_pane_t_ParamLimits

0xfde4,	// (0x0003a067) main_int_radio1_pane_t

0xb9bd,	// (0x00035c40) int_radio_list_pane

0x8e49,	// (0x000330cc) scroll_pane_cp037

0xb9c5,	// (0x00035c48) list_double_large_graphic_int_radio_pane_ParamLimits

0xb9c5,	// (0x00035c48) list_double_large_graphic_int_radio_pane

0xb9dd,	// (0x00035c60) list_double_large_graphic_int_radio_pane_g1

0xb9e6,	// (0x00035c69) list_double_large_graphic_int_radio_pane_t1

0xb9f4,	// (0x00035c77) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdfd,	// (0x0003a080) list_double_large_graphic_int_radio_pane_t

0xbead,	// (0x00036130) list_highlight_pane_cp027

0xb92d,	// (0x00035bb0) main_button_pane_4

0xa00f,	// (0x00034292) main_welc_pane_g4_ParamLimits

0xa00f,	// (0x00034292) main_welc_pane_g4

0xa085,	// (0x00034308) main_welc_pane_t4_ParamLimits

0xa085,	// (0x00034308) main_welc_pane_t4

0xa09c,	// (0x0003431f) main_welc_pane_t5_ParamLimits

0xa09c,	// (0x0003431f) main_welc_pane_t5

0xa0d9,	// (0x0003435c) main_welc_pane_t6_ParamLimits

0xa0d9,	// (0x0003435c) main_welc_pane_t6

0xa1b3,	// (0x00034436) welc_button_pane_2_ParamLimits

0xa1b3,	// (0x00034436) welc_button_pane_2

0xa1cf,	// (0x00034452) welc_button_pane_3_ParamLimits

0xa1cf,	// (0x00034452) welc_button_pane_3

0xb935,	// (0x00035bb8) welc_button_pane_4

0xa1ee,	// (0x00034471) welc_button_pane_5_ParamLimits

0xa1ee,	// (0x00034471) welc_button_pane_5

0x0779,	// (0x0002a9fc) main_popup_welc_pane

0xba1a,	// (0x00035c9d) main_welc_sk_g3

0xba24,	// (0x00035ca7) main_welc_sk_g4

0xba2e,	// (0x00035cb1) main_welc_sk_t3

0xba3e,	// (0x00035cc1) main_welc_sk_t4

0xba4e,	// (0x00035cd1) popup_welc_pane_t4

0xba5c,	// (0x00035cdf) popup_welc_pane_t5

0xba6a,	// (0x00035ced) popup_welc_pane_t6

0xb12a,	// (0x000353ad) main_acti_pane

0xbead,	// (0x00036130) main_sso_pane

0xa47b,	// (0x000346fe) sso_body_pane_ParamLimits

0xa47b,	// (0x000346fe) sso_body_pane

0xa48f,	// (0x00034712) sso_logo_pane_ParamLimits

0xa48f,	// (0x00034712) sso_logo_pane

0xa4c8,	// (0x0003474b) sso_sk_pane_ParamLimits

0xa4c8,	// (0x0003474b) sso_sk_pane

0xbaa8,	// (0x00035d2b) main_sso_logo_pane_g1

0xa4da,	// (0x0003475d) sso_sk_pane_t1_ParamLimits

0xa4da,	// (0x0003475d) sso_sk_pane_t1

0xa4f4,	// (0x00034777) sso_sk_pane_t2_ParamLimits

0xa4f4,	// (0x00034777) sso_sk_pane_t2

0x0001,

0xfe02,	// (0x0003a085) sso_sk_pane_t_ParamLimits

0xfe02,	// (0x0003a085) sso_sk_pane_t

0xbab3,	// (0x00035d36) aid_sso_gap

0xbabc,	// (0x00035d3f) aid_sso_txt1

0xbac6,	// (0x00035d49) aid_sso_txt2

0xbad0,	// (0x00035d53) aid_sso_txt3

0x0002,

0xfe07,	// (0x0003a08a) aid_sso_txt

0xbada,	// (0x00035d5d) aid_sso_widget

0xa55e,	// (0x000347e1) sso_btn_pane_ParamLimits

0xa55e,	// (0x000347e1) sso_btn_pane

0xa5e2,	// (0x00034865) sso_option_pane_ParamLimits

0xa5e2,	// (0x00034865) sso_option_pane

0xa698,	// (0x0003491b) sso_query_pane_ParamLimits

0xa698,	// (0x0003491b) sso_query_pane

0xa6ee,	// (0x00034971) sso_query_pane_cp01_ParamLimits

0xa6ee,	// (0x00034971) sso_query_pane_cp01

0xa748,	// (0x000349cb) sso_t_hdr_pane_ParamLimits

0xa748,	// (0x000349cb) sso_t_hdr_pane

0xa772,	// (0x000349f5) sso_t_nml_pane_ParamLimits

0xa772,	// (0x000349f5) sso_t_nml_pane

0xbae4,	// (0x00035d67) sso_t_sub_pane

0xa49c,	// (0x0003471f) sso_popup_window_ParamLimits

0xa49c,	// (0x0003471f) sso_popup_window

0xa50a,	// (0x0003478d) sso_apps_pane_ParamLimits

0xa50a,	// (0x0003478d) sso_apps_pane

0xa534,	// (0x000347b7) sso_body_pane_g1

0xa53e,	// (0x000347c1) sso_body_pane_t1

0xa54e,	// (0x000347d1) sso_body_pane_t2

0x0001,

0xfe0e,	// (0x0003a091) sso_body_pane_t

0xa5aa,	// (0x0003482d) sso_btn_pane_cp01_ParamLimits

0xa5aa,	// (0x0003482d) sso_btn_pane_cp01

0xa66c,	// (0x000348ef) sso_prog_pane_ParamLimits

0xa66c,	// (0x000348ef) sso_prog_pane

0xa7c8,	// (0x00034a4b) sso_t_hdr_pane_t1_ParamLimits

0xa7c8,	// (0x00034a4b) sso_t_hdr_pane_t1

0xbaf9,	// (0x00035d7c) input_focus_pane_cp10_ParamLimits

0xbaf9,	// (0x00035d7c) input_focus_pane_cp10

0xbb0d,	// (0x00035d90) sso_query_pane_t1_ParamLimits

0xbb0d,	// (0x00035d90) sso_query_pane_t1

0xbb20,	// (0x00035da3) sso_query_pane_t2_ParamLimits

0xbb20,	// (0x00035da3) sso_query_pane_t2

0xbb39,	// (0x00035dbc) sso_query_pane_t3_ParamLimits

0xbb39,	// (0x00035dbc) sso_query_pane_t3

0xbb63,	// (0x00035de6) sso_query_pane_t4_ParamLimits

0xbb63,	// (0x00035de6) sso_query_pane_t4

0x0003,

0xfe13,	// (0x0003a096) sso_query_pane_t_ParamLimits

0xfe13,	// (0x0003a096) sso_query_pane_t

0xba11,	// (0x00035c94) bg_button_pane_cp22

0xba02,	// (0x00035c85) sso_btn_pane_t1

0xa7db,	// (0x00034a5e) sso_t_nml_pane_t1_ParamLimits

0xa7db,	// (0x00034a5e) sso_t_nml_pane_t1

0xbb87,	// (0x00035e0a) sso_option_row_pane_ParamLimits

0xbb87,	// (0x00035e0a) sso_option_row_pane

0xbb94,	// (0x00035e17) sso_t_sub_pane_t1_ParamLimits

0xbb94,	// (0x00035e17) sso_t_sub_pane_t1

0xc547,	// (0x000367ca) bg_popup_window_pane_cp11_ParamLimits

0xc547,	// (0x000367ca) bg_popup_window_pane_cp11

0xbbb1,	// (0x00035e34) popup_sk_window_cp01_ParamLimits

0xbbb1,	// (0x00035e34) popup_sk_window_cp01

0xbbbe,	// (0x00035e41) sso_popup_body_pane_ParamLimits

0xbbbe,	// (0x00035e41) sso_popup_body_pane

0xbbcb,	// (0x00035e4e) scroll_pane_cp21_ParamLimits

0xbbcb,	// (0x00035e4e) scroll_pane_cp21

0xbbd8,	// (0x00035e5b) sso_popup_body_t_pane_ParamLimits

0xbbd8,	// (0x00035e5b) sso_popup_body_t_pane

0xbbe5,	// (0x00035e68) sso_popup_body_t_hdr_pane_ParamLimits

0xbbe5,	// (0x00035e68) sso_popup_body_t_hdr_pane

0xa7f6,	// (0x00034a79) sso_popup_body_t_nml_pane_ParamLimits

0xa7f6,	// (0x00034a79) sso_popup_body_t_nml_pane

0xa81d,	// (0x00034aa0) sso_popup_body_t_sub_pane_ParamLimits

0xa81d,	// (0x00034aa0) sso_popup_body_t_sub_pane

0xbbf7,	// (0x00035e7a) sso_popup_body_t_hdr_pane_t1

0xa840,	// (0x00034ac3) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa840,	// (0x00034ac3) sso_popup_body_t_nml_pane_t1

0xbc07,	// (0x00035e8a) sso_popup_body_t_sub_pane_t1_ParamLimits

0xbc07,	// (0x00035e8a) sso_popup_body_t_sub_pane_t1

0xc5ec,	// (0x0003686f) sso_prog_pane_g1

0xa878,	// (0x00034afb) sso_apps_pane_comp1_ParamLimits

0xa878,	// (0x00034afb) sso_apps_pane_comp1

0xbc2c,	// (0x00035eaf) sso_apps_pane_comp1_g1

0xbc34,	// (0x00035eb7) sso_apps_pane_comp1_t1

0xbc50,	// (0x00035ed3) sso_option_row_pane_g1

0xbc58,	// (0x00035edb) sso_option_row_pane_t1

0x85e3,	// (0x00032866) list_cmail_pane_ParamLimits

0xbead,	// (0x00036130) main_call7_pane

0x9f6c,	// (0x000341ef) bg_welc_area_ParamLimits

0x9f6c,	// (0x000341ef) bg_welc_area

0xa117,	// (0x0003439a) sso_t_hdr_pane_a_t1_ParamLimits

0xa117,	// (0x0003439a) sso_t_hdr_pane_a_t1

0xa132,	// (0x000343b5) sso_t_nml_pane_a_t1_ParamLimits

0xa132,	// (0x000343b5) sso_t_nml_pane_a_t1

0xa161,	// (0x000343e4) sso_t_sub_pane_a_t1_ParamLimits

0xa161,	// (0x000343e4) sso_t_sub_pane_a_t1

0xa204,	// (0x00034487) welc_button_pane_cp01_ParamLimits

0xa204,	// (0x00034487) welc_button_pane_cp01

0xba02,	// (0x00035c85) sso_btn_pane_t1_copy1

0xba11,	// (0x00035c94) welc_button_pane_2_comp1

0xba78,	// (0x00035cfb) sso_t_hdr_pane_p_t1

0xba88,	// (0x00035d0b) sso_t_nml_pane_p_t1

0xba98,	// (0x00035d1b) sso_t_sub_pane_p_t1

0xbead,	// (0x00036130) main_att_pane

0xbead,	// (0x00036130) main_vod_pane

0xbae4,	// (0x00035d67) sso_t_sub_pane_ParamLimits

0xbc42,	// (0x00035ec5) input_focus_pane_cp10_t1

0xbc58,	// (0x00035edb) sso_option_row_pane_t1_ParamLimits

0xa892,	// (0x00034b15) main_att_body_pane_ParamLimits

0xa892,	// (0x00034b15) main_att_body_pane

0xa8a8,	// (0x00034b2b) att_btn_emg_pane_ParamLimits

0xa8a8,	// (0x00034b2b) att_btn_emg_pane

0xa8c7,	// (0x00034b4a) att_btn_pane_ParamLimits

0xa8c7,	// (0x00034b4a) att_btn_pane

0xa938,	// (0x00034bbb) att_btn_pane_cp01_ParamLimits

0xa938,	// (0x00034bbb) att_btn_pane_cp01

0xa958,	// (0x00034bdb) att_li_srv_pane_ParamLimits

0xa958,	// (0x00034bdb) att_li_srv_pane

0xa975,	// (0x00034bf8) att_opt_pane_ParamLimits

0xa975,	// (0x00034bf8) att_opt_pane

0xa9bf,	// (0x00034c42) att_query_pane_ParamLimits

0xa9bf,	// (0x00034c42) att_query_pane

0xaa38,	// (0x00034cbb) att_query_pane_cp01_ParamLimits

0xaa38,	// (0x00034cbb) att_query_pane_cp01

0xaa84,	// (0x00034d07) att_t_hdr_pane_ParamLimits

0xaa84,	// (0x00034d07) att_t_hdr_pane

0xaaf0,	// (0x00034d73) att_t_nml_pane_ParamLimits

0xaaf0,	// (0x00034d73) att_t_nml_pane

0xab60,	// (0x00034de3) att_t_nml_pane_cp01_ParamLimits

0xab60,	// (0x00034de3) att_t_nml_pane_cp01

0xab8c,	// (0x00034e0f) att_t_nmlb_pane_ParamLimits

0xab8c,	// (0x00034e0f) att_t_nmlb_pane

0xabf9,	// (0x00034e7c) att_term_pane_ParamLimits

0xabf9,	// (0x00034e7c) att_term_pane

0xac43,	// (0x00034ec6) main_att_body_pane_g1_ParamLimits

0xac43,	// (0x00034ec6) main_att_body_pane_g1

0xbc71,	// (0x00035ef4) att_t_hdr_pane_t1_ParamLimits

0xbc71,	// (0x00035ef4) att_t_hdr_pane_t1

0xbc8a,	// (0x00035f0d) att_t_nml_pane_t1_ParamLimits

0xbc8a,	// (0x00035f0d) att_t_nml_pane_t1

0xbcaf,	// (0x00035f32) att_btn_pane_t1

0xba11,	// (0x00035c94) bg_button_pane_cp23

0xac6f,	// (0x00034ef2) att_li_srv_row_pane_ParamLimits

0xac6f,	// (0x00034ef2) att_li_srv_row_pane

0xbcbf,	// (0x00035f42) att_t_nmlb_pane_t1_ParamLimits

0xbcbf,	// (0x00035f42) att_t_nmlb_pane_t1

0xbcdd,	// (0x00035f60) att_query_pane_t1

0xbcec,	// (0x00035f6f) att_query_pane_t2

0xbcfb,	// (0x00035f7e) att_query_pane_t3

0x0002,

0xfe1c,	// (0x0003a09f) att_query_pane_t

0xbd0a,	// (0x00035f8d) input_focus_pane_cp11

0xbd13,	// (0x00035f96) att_term_pane_t1_ParamLimits

0xbd13,	// (0x00035f96) att_term_pane_t1

0xbead,	// (0x00036130) att_opt_row_pane

0xbc50,	// (0x00035ed3) att_opt_row_pane_g1

0xbd30,	// (0x00035fb3) att_opt_row_pane_t1_ParamLimits

0xbd30,	// (0x00035fb3) att_opt_row_pane_t1

0xac7f,	// (0x00034f02) att_li_srv_row_pane_g1

0xac87,	// (0x00034f0a) att_li_srv_row_pane_t1_ParamLimits

0xac87,	// (0x00034f0a) att_li_srv_row_pane_t1

0xac9c,	// (0x00034f1f) att_li_srv_row_pane_t2_ParamLimits

0xac9c,	// (0x00034f1f) att_li_srv_row_pane_t2

0x0001,

0xfe23,	// (0x0003a0a6) att_li_srv_row_pane_t_ParamLimits

0xfe23,	// (0x0003a0a6) att_li_srv_row_pane_t

0xbd49,	// (0x00035fcc) att_btn_close_pane_g1

0xbead,	// (0x00036130) bg_button_pane_cp24

0xacb1,	// (0x00034f34) main_vod_body_pane_ParamLimits

0xacb1,	// (0x00034f34) main_vod_body_pane

0xacc5,	// (0x00034f48) main_vod_body_pane_g1_ParamLimits

0xacc5,	// (0x00034f48) main_vod_body_pane_g1

0xacf9,	// (0x00034f7c) scroll_pane_cp24_ParamLimits

0xacf9,	// (0x00034f7c) scroll_pane_cp24

0xad47,	// (0x00034fca) vod_btn_pane_ParamLimits

0xad47,	// (0x00034fca) vod_btn_pane

0xad89,	// (0x0003500c) vod_det_pane_ParamLimits

0xad89,	// (0x0003500c) vod_det_pane

0xadbd,	// (0x00035040) vod_logo_g1_ParamLimits

0xadbd,	// (0x00035040) vod_logo_g1

0xadfb,	// (0x0003507e) vod_opt_pane_ParamLimits

0xadfb,	// (0x0003507e) vod_opt_pane

0xae2e,	// (0x000350b1) vod_opt_pane_cp01_ParamLimits

0xae2e,	// (0x000350b1) vod_opt_pane_cp01

0xae5a,	// (0x000350dd) vod_query_pane_ParamLimits

0xae5a,	// (0x000350dd) vod_query_pane

0xae85,	// (0x00035108) vod_query_pane_cp01_ParamLimits

0xae85,	// (0x00035108) vod_query_pane_cp01

0xae91,	// (0x00035114) vod_t_nml_pane_ParamLimits

0xae91,	// (0x00035114) vod_t_nml_pane

0xaf3e,	// (0x000351c1) vod_t_nml_pane_cp01_ParamLimits

0xaf3e,	// (0x000351c1) vod_t_nml_pane_cp01

0xaf7a,	// (0x000351fd) vod_t_sub_pane_ParamLimits

0xaf7a,	// (0x000351fd) vod_t_sub_pane

0xafab,	// (0x0003522e) vod_t_sub_pane_cp01_ParamLimits

0xafab,	// (0x0003522e) vod_t_sub_pane_cp01

0xbd0a,	// (0x00035f8d) vod_query_field_pane

0xbd51,	// (0x00035fd4) vod_query_pane_t1

0xba11,	// (0x00035c94) bg_button_pane_cp25

0xba02,	// (0x00035c85) sso_btn_pane_t1_copy2

0xafd7,	// (0x0003525a) vod_t_nml_pane_t1_ParamLimits

0xafd7,	// (0x0003525a) vod_t_nml_pane_t1

0xbd60,	// (0x00035fe3) vod_opt_row_pane_ParamLimits

0xbd60,	// (0x00035fe3) vod_opt_row_pane

0xbd72,	// (0x00035ff5) vod_t_sub_pane_t1_ParamLimits

0xbd72,	// (0x00035ff5) vod_t_sub_pane_t1

0xbd8b,	// (0x0003600e) vod_det_cell_pane_ParamLimits

0xbd8b,	// (0x0003600e) vod_det_cell_pane

0xbead,	// (0x00036130) input_focus_pane_cp15

0xbd9c,	// (0x0003601f) vod_query_field_pane_t1

0xbdaa,	// (0x0003602d) vod_opt_row_pane_g1_ParamLimits

0xbdaa,	// (0x0003602d) vod_opt_row_pane_g1

0xbdb6,	// (0x00036039) vod_opt_row_pane_t1_ParamLimits

0xbdb6,	// (0x00036039) vod_opt_row_pane_t1

0xbdd5,	// (0x00036058) vod_det_cell_field_pane

0xbdde,	// (0x00036061) vod_det_cell_pane_g1

0xbde6,	// (0x00036069) vod_det_cell_pane_t1

0xbead,	// (0x00036130) input_focus_pane_cp16

0xbdf5,	// (0x00036078) vod_det_cell_field_pane_t1

0xb008,	// (0x0003528b) call7_btn_grp_pane_ParamLimits

0xb008,	// (0x0003528b) call7_btn_grp_pane

0xb022,	// (0x000352a5) call7_bubble_pane_ParamLimits

0xb022,	// (0x000352a5) call7_bubble_pane

0xb039,	// (0x000352bc) cell_call7_btn_pane_ParamLimits

0xb039,	// (0x000352bc) cell_call7_btn_pane

0xb04c,	// (0x000352cf) call7_pane_g1_ParamLimits

0xb04c,	// (0x000352cf) call7_pane_g1

0xb05b,	// (0x000352de) call7_windows_conf_pane_ParamLimits

0xb05b,	// (0x000352de) call7_windows_conf_pane

0xb075,	// (0x000352f8) popup_call7_1st_window_ParamLimits

0xb075,	// (0x000352f8) popup_call7_1st_window

0xb086,	// (0x00035309) popup_call7_2nd_window_ParamLimits

0xb086,	// (0x00035309) popup_call7_2nd_window

0xb097,	// (0x0003531a) popup_call7_3rd_window_ParamLimits

0xb097,	// (0x0003531a) popup_call7_3rd_window

0xbead,	// (0x00036130) bg_button_pane_cp26

0x9815,	// (0x00033a98) cell_call7_btn_pane_g1

0xb0a8,	// (0x0003532b) cell_call7_btn_pane_t1

0xbead,	// (0x00036130) bg_popup_window_pane_cp12

0xbe03,	// (0x00036086) popup_call7_1st_window_g1

0xbe0b,	// (0x0003608e) popup_call7_1st_window_g2

0xbe13,	// (0x00036096) popup_call7_1st_window_g3

0x0002,

0xfe28,	// (0x0003a0ab) popup_call7_1st_window_g

0xbe1b,	// (0x0003609e) popup_call7_1st_window_t1

0xbe2a,	// (0x000360ad) popup_call7_1st_window_t2

0xbe38,	// (0x000360bb) popup_call7_1st_window_t3

0x0002,

0xfe2f,	// (0x0003a0b2) popup_call7_1st_window_t

0xbead,	// (0x00036130) bg_popup_window_pane_cp13

0xbe46,	// (0x000360c9) popup_call7_2nd_window_g1

0xbe4e,	// (0x000360d1) popup_call7_2nd_window_g2

0xbe56,	// (0x000360d9) popup_call7_2nd_window_g3

0x0002,

0xfe36,	// (0x0003a0b9) popup_call7_2nd_window_g

0xbe1b,	// (0x0003609e) popup_call7_2nd_window_t1

0xbead,	// (0x00036130) bg_popup_window_pane_cp14

0xbe5e,	// (0x000360e1) call7_list_conf_pane

0xbe66,	// (0x000360e9) call7_list_conf_row_pane_ParamLimits

0xbe66,	// (0x000360e9) call7_list_conf_row_pane

0xbe79,	// (0x000360fc) call7_list_conf_row_pane_g1

0xbe81,	// (0x00036104) call7_list_conf_row_pane_g2

0x0001,

0xfe3d,	// (0x0003a0c0) call7_list_conf_row_pane_g

0xbe89,	// (0x0003610c) call7_list_conf_row_pane_t1

0xbead,	// (0x00036130) list_highlight_pane_cp22

0xa638,	// (0x000348bb) sso_option_pane_cp01_ParamLimits

0xa638,	// (0x000348bb) sso_option_pane_cp01

0xc525,	// (0x000367a8) msg_header_pane_ParamLimits

0xd3d1,	// (0x00037654) bg_button_pane_cp01_ParamLimits

0xd3e5,	// (0x00037668) input_focus_pane_cp07_ParamLimits

0x8177,	// (0x000323fa) popup_email_progress_window

0xc5ec,	// (0x0003686f) popup_email_progress_window_g1

0xbe97,	// (0x0003611a) popup_email_progress_window_g2

0x0001,

0xfe42,	// (0x0003a0c5) popup_email_progress_window_g

0xbe9f,	// (0x00036122) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
