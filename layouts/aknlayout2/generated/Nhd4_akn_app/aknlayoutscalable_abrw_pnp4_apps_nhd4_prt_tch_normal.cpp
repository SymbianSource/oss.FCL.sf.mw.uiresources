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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001e184 };

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
0x26cf,	// (0x00020853) Screen

0x26db,	// (0x0002085f) application_window

0x26e7,	// (0x0002086b) area_bottom_pane_ParamLimits

0x26e7,	// (0x0002086b) area_bottom_pane

0x0d28,	// (0x0001eeac) area_top_pane_ParamLimits

0x0d28,	// (0x0001eeac) area_top_pane

0x0d8c,	// (0x0001ef10) call_video_uplink_pane_ParamLimits

0x0d8c,	// (0x0001ef10) call_video_uplink_pane

0x0dcb,	// (0x0001ef4f) main_pane_ParamLimits

0x0dcb,	// (0x0001ef4f) main_pane

0xc44d,	// (0x0002a5d1) context_pane

0x5570,	// (0x000236f4) navi_pane

0x5596,	// (0x0002371a) popup_cale_events_window_ParamLimits

0x5596,	// (0x0002371a) popup_cale_events_window

0xc460,	// (0x0002a5e4) popup_mup_playback_window

0x55ae,	// (0x00023732) signal_pane

0xa3b1,	// (0x00028535) main_browser_pane

0xa5b9,	// (0x0002873d) main_burst_pane

0x1387,	// (0x0001f50b) main_calc_pane

0xc433,	// (0x0002a5b7) main_cale_day_pane

0x2afd,	// (0x00020c81) main_cale_month_pane

0xc433,	// (0x0002a5b7) main_cale_week_pane

0xa5b9,	// (0x0002873d) main_call_pane

0xa085,	// (0x00028209) main_call_poc_pane

0xa5b9,	// (0x0002873d) main_camera_pane

0xa5b9,	// (0x0002873d) main_chi_dic_pane

0xad90,	// (0x00028f14) main_clock_pane

0xa085,	// (0x00028209) main_fmradio_pane

0xa5b9,	// (0x0002873d) main_graph_messa_pane

0xa085,	// (0x00028209) main_help_pane

0xa3b1,	// (0x00028535) main_im_pane

0xa2e0,	// (0x00028464) main_image_pane_ParamLimits

0xa2e0,	// (0x00028464) main_image_pane

0xa085,	// (0x00028209) main_location2_pane

0xa5b9,	// (0x0002873d) main_location_pane

0xa2e0,	// (0x00028464) main_messa_pane

0xa085,	// (0x00028209) main_mp2_pane

0xa5b9,	// (0x0002873d) main_mp_pane

0xa085,	// (0x00028209) main_msg_pane

0xa085,	// (0x00028209) main_mup_eq_pane

0xa085,	// (0x00028209) main_mup_pane

0xa3b1,	// (0x00028535) main_notes_pane

0xa085,	// (0x00028209) main_pec_pane

0xa085,	// (0x00028209) main_phob_pane

0xa085,	// (0x00028209) main_pinb_pane

0xa085,	// (0x00028209) main_postcard_pane

0xa085,	// (0x00028209) main_qdial_pane

0xa5b9,	// (0x0002873d) main_skin_pane

0xa085,	// (0x00028209) main_smil2_pane

0xa5b9,	// (0x0002873d) main_smil_pane

0xa5b9,	// (0x0002873d) main_video_pane

0xa5b9,	// (0x0002873d) main_video_tele_pane

0xa2e0,	// (0x00028464) main_viewer_pane_ParamLimits

0xa2e0,	// (0x00028464) main_viewer_pane

0xa5b9,	// (0x0002873d) main_vorec_pane

0x13d3,	// (0x0001f557) popup_blid_sat_info_window_ParamLimits

0x13d3,	// (0x0001f557) popup_blid_sat_info_window

0x13f3,	// (0x0001f577) popup_dyc_status_message_window_ParamLimits

0x13f3,	// (0x0001f577) popup_dyc_status_message_window

0x1401,	// (0x0001f585) popup_grid_large_graphic_window_ParamLimits

0x1401,	// (0x0001f585) popup_grid_large_graphic_window

0x1490,	// (0x0001f614) popup_loc_request_window_ParamLimits

0x1490,	// (0x0001f614) popup_loc_request_window

0x14dd,	// (0x0001f661) popup_wml_address_window_ParamLimits

0x14dd,	// (0x0001f661) popup_wml_address_window

0x5452,	// (0x000235d6) call_muted_g1

0x510e,	// (0x00023292) popup_call_audio_conf_window_ParamLimits

0x510e,	// (0x00023292) popup_call_audio_conf_window

0x5462,	// (0x000235e6) popup_call_audio_first_window_ParamLimits

0x5462,	// (0x000235e6) popup_call_audio_first_window

0x54a2,	// (0x00023626) popup_call_audio_in_window_ParamLimits

0x54a2,	// (0x00023626) popup_call_audio_in_window

0x54c6,	// (0x0002364a) popup_call_audio_out_window_ParamLimits

0x54c6,	// (0x0002364a) popup_call_audio_out_window

0x54e8,	// (0x0002366c) popup_call_audio_second_window_ParamLimits

0x54e8,	// (0x0002366c) popup_call_audio_second_window

0x5518,	// (0x0002369c) popup_call_audio_wait_window_ParamLimits

0x5518,	// (0x0002369c) popup_call_audio_wait_window

0x5539,	// (0x000236bd) popup_number_entry_window_ParamLimits

0x5539,	// (0x000236bd) popup_number_entry_window

0x9c72,	// (0x00027df6) bg_popup_call_pane_cp05_ParamLimits

0x9c72,	// (0x00027df6) bg_popup_call_pane_cp05

0x9c92,	// (0x00027e16) popup_number_entry_window_t1

0x9ca5,	// (0x00027e29) popup_number_entry_window_t2

0x9cb7,	// (0x00027e3b) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0002d24a) popup_number_entry_window_t

0x9cc9,	// (0x00027e4d) text_title_cp2

0x9cdc,	// (0x00027e60) bg_popup_call_pane_cp_ParamLimits

0x9cdc,	// (0x00027e60) bg_popup_call_pane_cp

0x9cea,	// (0x00027e6e) call_thumbnail_pane

0x9cf2,	// (0x00027e76) popup_call_audio_in_window_g1_ParamLimits

0x9cf2,	// (0x00027e76) popup_call_audio_in_window_g1

0x9cfe,	// (0x00027e82) popup_call_audio_in_window_g2_ParamLimits

0x9cfe,	// (0x00027e82) popup_call_audio_in_window_g2

0x9d0a,	// (0x00027e8e) popup_call_audio_in_window_g3_ParamLimits

0x9d0a,	// (0x00027e8e) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0002d253) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0002d253) popup_call_audio_in_window_g

0x9d16,	// (0x00027e9a) popup_call_audio_in_window_t1_ParamLimits

0x9d16,	// (0x00027e9a) popup_call_audio_in_window_t1

0x9d32,	// (0x00027eb6) popup_call_audio_in_window_t2_ParamLimits

0x9d32,	// (0x00027eb6) popup_call_audio_in_window_t2

0x9d4e,	// (0x00027ed2) popup_call_audio_in_window_t3_ParamLimits

0x9d4e,	// (0x00027ed2) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0002d25a) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0002d25a) popup_call_audio_in_window_t

0x9cdc,	// (0x00027e60) bg_popup_call_pane_cp01_ParamLimits

0x9cdc,	// (0x00027e60) bg_popup_call_pane_cp01

0x9cea,	// (0x00027e6e) call_thumbnail_pane_cp02

0x9d61,	// (0x00027ee5) call_type_pane_cp022

0x9d69,	// (0x00027eed) popup_call_audio_out_window_g1_ParamLimits

0x9d69,	// (0x00027eed) popup_call_audio_out_window_g1

0x9d7b,	// (0x00027eff) popup_call_audio_out_window_g2_ParamLimits

0x9d7b,	// (0x00027eff) popup_call_audio_out_window_g2

0x9d87,	// (0x00027f0b) popup_call_audio_out_window_g3_ParamLimits

0x9d87,	// (0x00027f0b) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0002d261) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0002d261) popup_call_audio_out_window_g

0x9d99,	// (0x00027f1d) popup_call_audio_out_window_t1_ParamLimits

0x9d99,	// (0x00027f1d) popup_call_audio_out_window_t1

0x9db1,	// (0x00027f35) popup_call_audio_out_window_t2_ParamLimits

0x9db1,	// (0x00027f35) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0002d268) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0002d268) popup_call_audio_out_window_t

0x9dc6,	// (0x00027f4a) bg_popup_call_pane_ParamLimits

0x9dc6,	// (0x00027f4a) bg_popup_call_pane

0x2764,	// (0x000208e8) call_thumbnail_pane_cp_ParamLimits

0x2764,	// (0x000208e8) call_thumbnail_pane_cp

0x9e4a,	// (0x00027fce) call_type_pane_cp01_ParamLimits

0x9e4a,	// (0x00027fce) call_type_pane_cp01

0x9e8e,	// (0x00028012) popup_call_audio_first_window_g1_ParamLimits

0x9e8e,	// (0x00028012) popup_call_audio_first_window_g1

0x9eda,	// (0x0002805e) popup_call_audio_first_window_g2_ParamLimits

0x9eda,	// (0x0002805e) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0002d26d) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0002d26d) popup_call_audio_first_window_g

0x9f1e,	// (0x000280a2) popup_call_audio_first_window_t1_ParamLimits

0x9f1e,	// (0x000280a2) popup_call_audio_first_window_t1

0x9fca,	// (0x0002814e) popup_call_audio_first_window_t4_ParamLimits

0x9fca,	// (0x0002814e) popup_call_audio_first_window_t4

0xa056,	// (0x000281da) popup_call_audio_first_window_t5_ParamLimits

0xa056,	// (0x000281da) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0002d272) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0002d272) popup_call_audio_first_window_t

0xa085,	// (0x00028209) bg_popup_call_pane_cp02

0xa08f,	// (0x00028213) call_type_pane_cp023

0xa097,	// (0x0002821b) popup_call_audio_wait_window_g1

0xa09f,	// (0x00028223) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002d279) popup_call_audio_wait_window_g

0xa0a7,	// (0x0002822b) popup_call_audio_wait_window_t3

0xa0b5,	// (0x00028239) bg_popup_call_pane_cp03_ParamLimits

0xa0b5,	// (0x00028239) bg_popup_call_pane_cp03

0xa115,	// (0x00028299) call_thumbnail_pane_cp011_ParamLimits

0xa115,	// (0x00028299) call_thumbnail_pane_cp011

0xa121,	// (0x000282a5) call_type_pane_cp034_ParamLimits

0xa121,	// (0x000282a5) call_type_pane_cp034

0xa15d,	// (0x000282e1) popup_call_audio_second_window_g1_ParamLimits

0xa15d,	// (0x000282e1) popup_call_audio_second_window_g1

0xa199,	// (0x0002831d) popup_call_audio_second_window_g2_ParamLimits

0xa199,	// (0x0002831d) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0002d27e) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0002d27e) popup_call_audio_second_window_g

0xa1d5,	// (0x00028359) popup_call_audio_second_window_t1_ParamLimits

0xa1d5,	// (0x00028359) popup_call_audio_second_window_t1

0xa256,	// (0x000283da) popup_call_audio_second_window_t2_ParamLimits

0xa256,	// (0x000283da) popup_call_audio_second_window_t2

0xa28c,	// (0x00028410) popup_call_audio_second_window_t3_ParamLimits

0xa28c,	// (0x00028410) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0002d283) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0002d283) popup_call_audio_second_window_t

0xa085,	// (0x00028209) bg_popup_call_pane_cp04

0xa2c2,	// (0x00028446) list_conf_pane

0xa2ca,	// (0x0002844e) popup_call_audio_conf_window_t1

0xa2d8,	// (0x0002845c) call_thumbnail_pane_g1

0xa2e0,	// (0x00028464) bg_pinb_pane_ParamLimits

0xa2e0,	// (0x00028464) bg_pinb_pane

0xa2ee,	// (0x00028472) find_pinb_pane

0xa2f7,	// (0x0002847b) listscroll_pinb_pane_ParamLimits

0xa2f7,	// (0x0002847b) listscroll_pinb_pane

0xa306,	// (0x0002848a) pinb_bg_pane_g1

0x2788,	// (0x0002090c) pinb_bg_pane_g2

0x2794,	// (0x00020918) pinb_bg_pane_g3

0x27a0,	// (0x00020924) pinb_bg_pane_g4

0x27ac,	// (0x00020930) pinb_bg_pane_g5

0x27b8,	// (0x0002093c) pinb_bg_pane_g6

0x27c3,	// (0x00020947) pinb_bg_pane_g7

0x27ce,	// (0x00020952) pinb_bg_pane_g8

0x27d9,	// (0x0002095d) pinb_bg_pane_g9

0x27e3,	// (0x00020967) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0002d28a) pinb_bg_pane_g

0x2800,	// (0x00020984) grid_pinb_pane

0x280b,	// (0x0002098f) list_pinb_pane

0x2816,	// (0x0002099a) scroll_pane_cp01_ParamLimits

0x2816,	// (0x0002099a) scroll_pane_cp01

0xa310,	// (0x00028494) find_pinb_pane_g1_ParamLimits

0xa310,	// (0x00028494) find_pinb_pane_g1

0xa328,	// (0x000284ac) find_pinb_pane_t1

0xa33a,	// (0x000284be) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0002d2a4) find_pinb_pane_t

0xa34f,	// (0x000284d3) input_focus_pane_cp01_ParamLimits

0xa34f,	// (0x000284d3) input_focus_pane_cp01

0x2828,	// (0x000209ac) cell_pinb_pane_ParamLimits

0x2828,	// (0x000209ac) cell_pinb_pane

0x2853,	// (0x000209d7) cell_pinb_pane_g1_ParamLimits

0x2853,	// (0x000209d7) cell_pinb_pane_g1

0xa35b,	// (0x000284df) cell_pinb_pane_g2_ParamLimits

0xa35b,	// (0x000284df) cell_pinb_pane_g2

0xa367,	// (0x000284eb) cell_pinb_pane_g3_ParamLimits

0xa367,	// (0x000284eb) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0002d2a9) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0002d2a9) cell_pinb_pane_g

0xa085,	// (0x00028209) grid_highlight_pane_cp01

0x2868,	// (0x000209ec) list_pinb_item_pane_ParamLimits

0x2868,	// (0x000209ec) list_pinb_item_pane

0xa085,	// (0x00028209) list_highlight_pane_cp02

0x2891,	// (0x00020a15) list_pinb_item_pane_g1_ParamLimits

0x2891,	// (0x00020a15) list_pinb_item_pane_g1

0x289e,	// (0x00020a22) list_pinb_item_pane_g2_ParamLimits

0x289e,	// (0x00020a22) list_pinb_item_pane_g2

0x28aa,	// (0x00020a2e) list_pinb_item_pane_g3_ParamLimits

0x28aa,	// (0x00020a2e) list_pinb_item_pane_g3

0x28bb,	// (0x00020a3f) list_pinb_item_pane_g4_ParamLimits

0x28bb,	// (0x00020a3f) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0002d2b0) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0002d2b0) list_pinb_item_pane_g

0x28c7,	// (0x00020a4b) list_pinb_item_pane_t1_ParamLimits

0x28c7,	// (0x00020a4b) list_pinb_item_pane_t1

0x0fb9,	// (0x0001f13d) calc_display_pane

0x0fd7,	// (0x0001f15b) calc_paper_pane

0x0ff3,	// (0x0001f177) grid_calc_pane

0xa085,	// (0x00028209) bg_list_pane_cp01

0x28de,	// (0x00020a62) clock_g1

0x28e6,	// (0x00020a6a) clock_g2

0x0001,

0xf135,	// (0x0002d2b9) clock_g

0x28f0,	// (0x00020a74) clock_t1_ParamLimits

0x28f0,	// (0x00020a74) clock_t1

0x2905,	// (0x00020a89) clock_t2_ParamLimits

0x2905,	// (0x00020a89) clock_t2

0x2917,	// (0x00020a9b) clock_t3_ParamLimits

0x2917,	// (0x00020a9b) clock_t3

0x2929,	// (0x00020aad) clock_t4_ParamLimits

0x2929,	// (0x00020aad) clock_t4

0x293b,	// (0x00020abf) clock_t5_ParamLimits

0x293b,	// (0x00020abf) clock_t5

0x2950,	// (0x00020ad4) clock_t6_ParamLimits

0x2950,	// (0x00020ad4) clock_t6

0x2962,	// (0x00020ae6) clock_t7_ParamLimits

0x2962,	// (0x00020ae6) clock_t7

0x2974,	// (0x00020af8) clock_t8_ParamLimits

0x2974,	// (0x00020af8) clock_t8

0x298a,	// (0x00020b0e) clock_t9_ParamLimits

0x298a,	// (0x00020b0e) clock_t9

0x0008,

0xf13a,	// (0x0002d2be) clock_t_ParamLimits

0xf13a,	// (0x0002d2be) clock_t

0xa373,	// (0x000284f7) popup_clock_analogue_window_cp02

0xa373,	// (0x000284f7) popup_clock_digital_window_cp01

0xa37b,	// (0x000284ff) listscroll_help_pane

0xa085,	// (0x00028209) phob_pre_status_pane

0xa385,	// (0x00028509) grid_qdial_pane

0xa2e0,	// (0x00028464) listscroll_mce_pane

0xa2e0,	// (0x00028464) bg_notes_pane

0xa38f,	// (0x00028513) list_notes_pane

0x29a0,	// (0x00020b24) scroll_pane_cp06

0xa39d,	// (0x00028521) bg_calc_paper_pane

0x101f,	// (0x0001f1a3) list_calc_pane

0xa3b1,	// (0x00028535) bg_calc_display_pane

0x1039,	// (0x0001f1bd) calc_display_pane_t1

0x104e,	// (0x0001f1d2) calc_display_pane_t2

0x1063,	// (0x0001f1e7) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0002d2d1) calc_display_pane_t

0x1075,	// (0x0001f1f9) cell_calc_pane_ParamLimits

0x1075,	// (0x0001f1f9) cell_calc_pane

0xa3bd,	// (0x00028541) bg_calc_paper_pane_g1

0xa3c9,	// (0x0002854d) bg_calc_paper_pane_g2

0xa3d5,	// (0x00028559) bg_calc_paper_pane_g3

0xa3e1,	// (0x00028565) bg_calc_paper_pane_g4

0xa3ed,	// (0x00028571) bg_calc_paper_pane_g5

0x29af,	// (0x00020b33) bg_calc_paper_pane_g6

0x29c0,	// (0x00020b44) bg_calc_paper_pane_g7

0x29d1,	// (0x00020b55) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0002d2d8) bg_calc_paper_pane_g

0x29e2,	// (0x00020b66) calc_bg_paper_pane_g9

0x29f3,	// (0x00020b77) list_calc_item_pane_ParamLimits

0x29f3,	// (0x00020b77) list_calc_item_pane

0xa3f9,	// (0x0002857d) list_calc_item_pane_g1

0x10a2,	// (0x0001f226) list_calc_item_pane_t1_ParamLimits

0x10a2,	// (0x0001f226) list_calc_item_pane_t1

0x10b4,	// (0x0001f238) list_calc_item_pane_t2_ParamLimits

0x10b4,	// (0x0001f238) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0002d2e9) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0002d2e9) list_calc_item_pane_t

0xa406,	// (0x0002858a) cell_calc_pane_g1

0xa410,	// (0x00028594) grid_highlight_pane_cp02

0x2a20,	// (0x00020ba4) bg_calc_display_pane_g1

0x10e4,	// (0x0001f268) bg_calc_display_pane_g2

0x2a29,	// (0x00020bad) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0002d2f3) bg_calc_display_pane_g

0x10ee,	// (0x0001f272) cell_qdial_pane_ParamLimits

0x10ee,	// (0x0001f272) cell_qdial_pane

0x2a32,	// (0x00020bb6) cell_qdial_pane_g1_ParamLimits

0x2a32,	// (0x00020bb6) cell_qdial_pane_g1

0x2a3f,	// (0x00020bc3) cell_qdial_pane_g2_ParamLimits

0x2a3f,	// (0x00020bc3) cell_qdial_pane_g2

0xa432,	// (0x000285b6) cell_qdial_pane_g3_ParamLimits

0xa432,	// (0x000285b6) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0002d2fa) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0002d2fa) cell_qdial_pane_g

0x2a5c,	// (0x00020be0) cell_qdial_pane_t1_ParamLimits

0x2a5c,	// (0x00020be0) cell_qdial_pane_t1

0x2a74,	// (0x00020bf8) cell_qdial_pane_t2_ParamLimits

0x2a74,	// (0x00020bf8) cell_qdial_pane_t2

0x2a87,	// (0x00020c0b) cell_qdial_pane_t3_ParamLimits

0x2a87,	// (0x00020c0b) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0002d303) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0002d303) cell_qdial_pane_t

0xa085,	// (0x00028209) grid_highlight_pane_cp04

0xa43e,	// (0x000285c2) thumbnail_qdial_pane_ParamLimits

0xa43e,	// (0x000285c2) thumbnail_qdial_pane

0xa49a,	// (0x0002861e) list_help_pane

0xa4a3,	// (0x00028627) scroll_pane_cp02

0x2a9a,	// (0x00020c1e) help_list_pane_t1_ParamLimits

0x2a9a,	// (0x00020c1e) help_list_pane_t1

0x1102,	// (0x0001f286) bg_notes_pane_g2

0x110a,	// (0x0001f28e) bg_notes_pane_g3

0x1112,	// (0x0001f296) notes_bg_pane_g1

0x111a,	// (0x0001f29e) notes_bg_pane_g4

0x1122,	// (0x0001f2a6) notes_bg_pane_g5

0x112a,	// (0x0001f2ae) notes_bg_pane_g6

0x1132,	// (0x0001f2b6) notes_bg_pane_g7

0x113a,	// (0x0001f2be) notes_bg_pane_g8

0x1142,	// (0x0001f2c6) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0002d321) notes_bg_pane_g

0x2ad1,	// (0x00020c55) list_notes_text_pane_ParamLimits

0x2ad1,	// (0x00020c55) list_notes_text_pane

0xa4ac,	// (0x00028630) list_notes_text_pane_g1

0xa4b5,	// (0x00028639) list_notes_text_pane_t1

0x2afd,	// (0x00020c81) listscroll_cale_week_pane

0x2b22,	// (0x00020ca6) bg_cale_heading_pane

0xa4dd,	// (0x00028661) bg_cale_pane_cp01

0x2b44,	// (0x00020cc8) cale_week_corner_pane

0x2b5e,	// (0x00020ce2) cale_week_day_heading_pane

0x2b80,	// (0x00020d04) cale_week_scroll_pane_g1

0x2b9d,	// (0x00020d21) cale_week_scroll_pane_g2

0x2bb0,	// (0x00020d34) cale_week_scroll_pane_g3

0x2bc3,	// (0x00020d47) cale_week_scroll_pane_g4

0x2bd6,	// (0x00020d5a) cale_week_scroll_pane_g5

0x2be9,	// (0x00020d6d) cale_week_scroll_pane_g6

0x2bfc,	// (0x00020d80) cale_week_scroll_pane_g7

0x2c11,	// (0x00020d95) cale_week_scroll_pane_g8

0x2c26,	// (0x00020daa) cale_week_scroll_pane_g9

0x2c39,	// (0x00020dbd) cale_week_scroll_pane_g10

0x2c4c,	// (0x00020dd0) cale_week_scroll_pane_g11

0x2c5f,	// (0x00020de3) cale_week_scroll_pane_g12

0x2c76,	// (0x00020dfa) cale_week_scroll_pane_g13

0x2c91,	// (0x00020e15) cale_week_scroll_pane_g14

0x2cac,	// (0x00020e30) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0002d330) cale_week_scroll_pane_g

0x2cdc,	// (0x00020e60) cale_week_time_pane

0x2cf1,	// (0x00020e75) grid_cale_week_pane

0xa50c,	// (0x00028690) scroll_pane_cp08

0x2d10,	// (0x00020e94) cell_cale_week_pane_ParamLimits

0x2d10,	// (0x00020e94) cell_cale_week_pane

0x2d72,	// (0x00020ef6) cale_week_day_heading_pane_t1

0x2d8d,	// (0x00020f11) cale_week_day_heading_pane_t2

0x2da8,	// (0x00020f2c) cale_week_day_heading_pane_t3

0x2dc3,	// (0x00020f47) cale_week_day_heading_pane_t4

0x2dde,	// (0x00020f62) cale_week_day_heading_pane_t5

0x2df9,	// (0x00020f7d) cale_week_day_heading_pane_t6

0x2e14,	// (0x00020f98) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0002d351) cale_week_day_heading_pane_t

0xa55e,	// (0x000286e2) bg_cale_side_pane

0x114a,	// (0x0001f2ce) cale_week_time_pane_t1

0x1164,	// (0x0001f2e8) cale_week_time_pane_t2

0x117e,	// (0x0001f302) cale_week_time_pane_t3

0x1198,	// (0x0001f31c) cale_week_time_pane_t4

0x11b2,	// (0x0001f336) cale_week_time_pane_t5

0x11cc,	// (0x0001f350) cale_week_time_pane_t6

0x11ec,	// (0x0001f370) cale_week_time_pane_t7

0x120e,	// (0x0001f392) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0002d360) cale_week_time_pane_t

0x2e2f,	// (0x00020fb3) cell_cale_week_pane_g2

0x2e53,	// (0x00020fd7) cell_cale_week_pane_g3_ParamLimits

0x2e53,	// (0x00020fd7) cell_cale_week_pane_g3

0xa56c,	// (0x000286f0) grid_highlight_pane_cp07

0xa574,	// (0x000286f8) listscroll_gms_pane

0xa57e,	// (0x00028702) grid_gms_pane

0xa587,	// (0x0002870b) listscroll_gms_pane_g1

0xa58f,	// (0x00028713) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0002d371) listscroll_gms_pane_g

0x2e6b,	// (0x00020fef) scroll_pane_cp010

0x2e76,	// (0x00020ffa) cell_gms_pane_ParamLimits

0x2e76,	// (0x00020ffa) cell_gms_pane

0x2e86,	// (0x0002100a) cell_gms_pane_g1

0xa597,	// (0x0002871b) cell_gms_pane_g2

0xa59f,	// (0x00028723) cell_gms_pane_g3

0xa5a8,	// (0x0002872c) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0002d376) cell_gms_pane_g

0xa5b1,	// (0x00028735) grid_highlight_pane_cp09

0x53fa,	// (0x0002357e) phob_pre_status_pane_g1

0x5402,	// (0x00023586) phob_pre_status_pane_g2

0x540a,	// (0x0002358e) phob_pre_status_pane_g3

0x5412,	// (0x00023596) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0002d774) phob_pre_status_pane_g

0x5422,	// (0x000235a6) phob_pre_status_pane_t1

0x5432,	// (0x000235b6) phob_pre_status_pane_t2

0x5442,	// (0x000235c6) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0002d77f) phob_pre_status_pane_t

0xa5b9,	// (0x0002873d) bg_list_pane_cp05

0x2e96,	// (0x0002101a) grid_vorec_pane

0x2ea0,	// (0x00021024) vorec_t1

0x2eae,	// (0x00021032) vorec_t2

0x2ebc,	// (0x00021040) vorec_t3

0x2eca,	// (0x0002104e) vorec_t4

0x26a9,	// (0x0002082d) vorec_t5

0x26b7,	// (0x0002083b) vorec_t6

0x0004,

0xf1fb,	// (0x0002d37f) vorec_t

0x26c5,	// (0x00020849) wait_bar_pane_cp01

0x2ee6,	// (0x0002106a) cell_vorec_pane_ParamLimits

0x2ee6,	// (0x0002106a) cell_vorec_pane

0x1232,	// (0x0001f3b6) cell_vorec_pane_g1

0xa085,	// (0x00028209) grid_highlight_pane_cp05

0x2f09,	// (0x0002108d) cams_zoom_pane

0x2f15,	// (0x00021099) image_vga_pane

0x2f24,	// (0x000210a8) main_camera_pane_g1

0x2f32,	// (0x000210b6) main_camera_pane_g2

0x2f3e,	// (0x000210c2) main_camera_pane_g3

0x2f4a,	// (0x000210ce) main_camera_pane_g4

0x2f56,	// (0x000210da) main_camera_pane_g5

0x2f62,	// (0x000210e6) main_camera_pane_g6

0x2f6e,	// (0x000210f2) main_camera_pane_g7

0x0007,

0xf206,	// (0x0002d38a) main_camera_pane_g

0x2f7a,	// (0x000210fe) main_camera_pane_t1

0x2f8c,	// (0x00021110) main_camera_pane_t2

0x0001,

0xf217,	// (0x0002d39b) main_camera_pane_t

0x2fad,	// (0x00021131) cams_zoom_pane_cp_ParamLimits

0x2fad,	// (0x00021131) cams_zoom_pane_cp

0x2fd1,	// (0x00021155) image_cif_pane_ParamLimits

0x2fd1,	// (0x00021155) image_cif_pane

0x2fef,	// (0x00021173) image_subqcif_pane

0x2ff7,	// (0x0002117b) main_video_pane_g1_ParamLimits

0x2ff7,	// (0x0002117b) main_video_pane_g1

0x3017,	// (0x0002119b) main_video_pane_g2_ParamLimits

0x3017,	// (0x0002119b) main_video_pane_g2

0x3047,	// (0x000211cb) main_video_pane_g3_ParamLimits

0x3047,	// (0x000211cb) main_video_pane_g3

0x3070,	// (0x000211f4) main_video_pane_g4_ParamLimits

0x3070,	// (0x000211f4) main_video_pane_g4

0x3099,	// (0x0002121d) main_video_pane_g5_ParamLimits

0x3099,	// (0x0002121d) main_video_pane_g5

0xa5cd,	// (0x00028751) main_video_pane_g6_ParamLimits

0xa5cd,	// (0x00028751) main_video_pane_g6

0x0006,

0xf21c,	// (0x0002d3a0) main_video_pane_g_ParamLimits

0xf21c,	// (0x0002d3a0) main_video_pane_g

0x30bb,	// (0x0002123f) main_video_pane_t1_ParamLimits

0x30bb,	// (0x0002123f) main_video_pane_t1

0xa5e7,	// (0x0002876b) cams_zoom_pane_g1

0xa5f0,	// (0x00028774) cams_zoom_pane_g2

0xa5f9,	// (0x0002877d) cams_zoom_pane_g3

0xa602,	// (0x00028786) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0002d3af) cams_zoom_pane_g

0x3105,	// (0x00021289) grid_cams_pane

0x3113,	// (0x00021297) linegrid_cams_pane

0x3121,	// (0x000212a5) cell_cams_pane_ParamLimits

0x3121,	// (0x000212a5) cell_cams_pane

0xa60b,	// (0x0002878f) cams_burst_image_pane

0xa613,	// (0x00028797) cell_cams_pane_g1

0xa085,	// (0x00028209) grid_highlight_pane_cp03

0xa406,	// (0x0002858a) mp_bg_pane_g1

0xa085,	// (0x00028209) bg_list_pane_cp03

0xc358,	// (0x0002a4dc) bg_mp_pane

0xc360,	// (0x0002a4e4) grid_mp_pane

0xc368,	// (0x0002a4ec) media_player_g1

0xc370,	// (0x0002a4f4) media_player_t1

0xc37e,	// (0x0002a502) media_player_t2

0xc38c,	// (0x0002a510) media_player_t3

0xc39a,	// (0x0002a51e) media_player_t4

0xc3a8,	// (0x0002a52c) media_player_t5

0xc3b6,	// (0x0002a53a) media_player_t6

0xc3c4,	// (0x0002a548) media_player_t7

0x0006,

0xf5da,	// (0x0002d75e) media_player_t

0xc3d2,	// (0x0002a556) wait_bar_pane_cp02

0xf5bf,	// (0x0002d743) main_usb_pane_t

0x53f1,	// (0x00023575) cell_mp_pane

0xa406,	// (0x0002858a) cell_mp_pane_g1

0xa085,	// (0x00028209) grid_highlight_pane_cp06

0xa61b,	// (0x0002879f) grid_skin_colour_pane

0xa623,	// (0x000287a7) list_highlight_pane_cp03

0x3249,	// (0x000213cd) skin_g1

0xa62b,	// (0x000287af) skin_t1

0xa63a,	// (0x000287be) skin_t2

0x0001,

0xf260,	// (0x0002d3e4) skin_t

0x3253,	// (0x000213d7) cell_skin_colour_pane_ParamLimits

0x3253,	// (0x000213d7) cell_skin_colour_pane

0xa648,	// (0x000287cc) cell_skin_colour_pane_g1

0x32d7,	// (0x0002145b) call_video_g1_ParamLimits

0x32d7,	// (0x0002145b) call_video_g1

0x32e7,	// (0x0002146b) call_video_g2_ParamLimits

0x32e7,	// (0x0002146b) call_video_g2

0x0001,

0xf265,	// (0x0002d3e9) call_video_g_ParamLimits

0xf265,	// (0x0002d3e9) call_video_g

0x3341,	// (0x000214c5) call_video_uplink_pane_cp1_ParamLimits

0x3341,	// (0x000214c5) call_video_uplink_pane_cp1

0xa65a,	// (0x000287de) call_video_uplink_pane_cp2

0x340d,	// (0x00021591) video_down_crop_pane_ParamLimits

0x340d,	// (0x00021591) video_down_crop_pane

0x34ff,	// (0x00021683) video_down_pane_ParamLimits

0x34ff,	// (0x00021683) video_down_pane

0xa662,	// (0x000287e6) video_down_subqcif_pane_ParamLimits

0xa662,	// (0x000287e6) video_down_subqcif_pane

0xa67a,	// (0x000287fe) video_down_subqcif_pane_cp_ParamLimits

0xa67a,	// (0x000287fe) video_down_subqcif_pane_cp

0xa6a0,	// (0x00028824) im_reading_pane_ParamLimits

0xa6a0,	// (0x00028824) im_reading_pane

0x361f,	// (0x000217a3) im_writing_pane_ParamLimits

0x361f,	// (0x000217a3) im_writing_pane

0x363d,	// (0x000217c1) im_reading_pane_t1

0xa6ba,	// (0x0002883e) list_im_pane

0xa6cb,	// (0x0002884f) scroll_pane_cp07

0x3695,	// (0x00021819) im_writing_pane_t1_ParamLimits

0x3695,	// (0x00021819) im_writing_pane_t1

0xa6e4,	// (0x00028868) im_writing_pane_t2_ParamLimits

0xa6e4,	// (0x00028868) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0002d3f3) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0002d3f3) im_writing_pane_t

0xa085,	// (0x00028209) input_focus_pane_cp04

0xa085,	// (0x00028209) input_focus_pane_cp05

0x36a7,	// (0x0002182b) list_im_single_pane_ParamLimits

0x36a7,	// (0x0002182b) list_im_single_pane

0x36ce,	// (0x00021852) list_single_im_pane_t1

0x53b5,	// (0x00023539) blid_accuracy_pane

0x53bd,	// (0x00023541) blid_compass_pane

0x53c7,	// (0x0002354b) main_location_t1

0x53d5,	// (0x00023559) main_location_t2

0x53e3,	// (0x00023567) main_location_t3

0x0002,

0xf5e9,	// (0x0002d76d) main_location_t

0xa085,	// (0x00028209) aid_levels_location

0xa406,	// (0x0002858a) blid_accuracy_pane_g1

0xa406,	// (0x0002858a) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0002d455) blid_accuracy_pane_g

0xa72c,	// (0x000288b0) wml_content_pane

0xa76a,	// (0x000288ee) wml_button_pane_ParamLimits

0xa76a,	// (0x000288ee) wml_button_pane

0x36dd,	// (0x00021861) wml_list_single_large_pane_ParamLimits

0x36dd,	// (0x00021861) wml_list_single_large_pane

0x3708,	// (0x0002188c) wml_list_single_medium_pane_ParamLimits

0x3708,	// (0x0002188c) wml_list_single_medium_pane

0x373a,	// (0x000218be) wml_list_single_small_pane_ParamLimits

0x373a,	// (0x000218be) wml_list_single_small_pane

0xa77e,	// (0x00028902) wml_selection_box_pane_ParamLimits

0xa77e,	// (0x00028902) wml_selection_box_pane

0xa791,	// (0x00028915) wml_list_single_pane_t1

0xa7a0,	// (0x00028924) wml_list_single_medium_pane_t1

0xa7af,	// (0x00028933) wml_list_single_large_pane_t1

0xa7be,	// (0x00028942) input_focus_pane_cp02_ParamLimits

0xa7be,	// (0x00028942) input_focus_pane_cp02

0xa7d1,	// (0x00028955) wml_selection_box_pane_g1

0xa7da,	// (0x0002895e) wml_selection_box_pane_t1_ParamLimits

0xa7da,	// (0x0002895e) wml_selection_box_pane_t1

0xa2e0,	// (0x00028464) bg_wml_button_pane_ParamLimits

0xa2e0,	// (0x00028464) bg_wml_button_pane

0xa7f2,	// (0x00028976) wml_button_pane_g1

0xa7fa,	// (0x0002897e) wml_button_pane_t1

0xa7f2,	// (0x00028976) wml_button_bg_pane_g1

0xa80a,	// (0x0002898e) wml_button_bg_pane_g2

0xa812,	// (0x00028996) wml_button_bg_pane_g3

0xa81a,	// (0x0002899e) wml_button_bg_pane_g4

0xa822,	// (0x000289a6) wml_button_bg_pane_g5

0xa82a,	// (0x000289ae) wml_button_bg_pane_g6

0xa832,	// (0x000289b6) wml_button_bg_pane_g7

0xa83a,	// (0x000289be) wml_button_bg_pane_g8

0xa842,	// (0x000289c6) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0002d3f8) wml_button_bg_pane_g

0x3777,	// (0x000218fb) bg_list_pane_cp02

0xa84a,	// (0x000289ce) mce_header_pane_ParamLimits

0xa84a,	// (0x000289ce) mce_header_pane

0xa860,	// (0x000289e4) mce_icon_pane

0xa860,	// (0x000289e4) mce_image_pane

0xa869,	// (0x000289ed) mce_text_pane_ParamLimits

0xa869,	// (0x000289ed) mce_text_pane

0x3781,	// (0x00021905) scroll_pane_cp03

0xa762,	// (0x000288e6) scroll_pane_cp04

0xa87c,	// (0x00028a00) scroll_pane_cp05_ParamLimits

0xa87c,	// (0x00028a00) scroll_pane_cp05

0x378b,	// (0x0002190f) mce_header_field_pane_ParamLimits

0x378b,	// (0x0002190f) mce_header_field_pane

0x37ab,	// (0x0002192f) mce_header_field_pane_2_ParamLimits

0x37ab,	// (0x0002192f) mce_header_field_pane_2

0x37c1,	// (0x00021945) mce_header_field_pane_3

0x37c9,	// (0x0002194d) list_single_mce_message_pane_ParamLimits

0x37c9,	// (0x0002194d) list_single_mce_message_pane

0x37f7,	// (0x0002197b) list_single_mce_smart_pane_ParamLimits

0x37f7,	// (0x0002197b) list_single_mce_smart_pane

0xa888,	// (0x00028a0c) input_focus_pane_cp03

0xa891,	// (0x00028a15) list_header_data_pane

0x3830,	// (0x000219b4) mce_header_field_pane_t1

0x383e,	// (0x000219c2) list_single_mce_header_pane_ParamLimits

0x383e,	// (0x000219c2) list_single_mce_header_pane

0xa899,	// (0x00028a1d) list_single_mce_header_pane_t1

0xa8a8,	// (0x00028a2c) list_single_mce_message_pane_g1

0xa8b0,	// (0x00028a34) list_single_mce_message_pane_t1

0x3894,	// (0x00021a18) bg_cale_heading_pane_cp01_ParamLimits

0x3894,	// (0x00021a18) bg_cale_heading_pane_cp01

0xa8be,	// (0x00028a42) bg_cale_pane_cp02_ParamLimits

0xa8be,	// (0x00028a42) bg_cale_pane_cp02

0x38e2,	// (0x00021a66) cale_month_corner_pane

0x3901,	// (0x00021a85) cale_month_day_heading_pane_ParamLimits

0x3901,	// (0x00021a85) cale_month_day_heading_pane

0x3967,	// (0x00021aeb) cale_month_pane_g1_ParamLimits

0x3967,	// (0x00021aeb) cale_month_pane_g1

0x39aa,	// (0x00021b2e) cale_month_pane_g2_ParamLimits

0x39aa,	// (0x00021b2e) cale_month_pane_g2

0x39e4,	// (0x00021b68) cale_month_pane_g3_ParamLimits

0x39e4,	// (0x00021b68) cale_month_pane_g3

0x3a34,	// (0x00021bb8) cale_month_pane_g4_ParamLimits

0x3a34,	// (0x00021bb8) cale_month_pane_g4

0x3a84,	// (0x00021c08) cale_month_pane_g5_ParamLimits

0x3a84,	// (0x00021c08) cale_month_pane_g5

0x3ad4,	// (0x00021c58) cale_month_pane_g6_ParamLimits

0x3ad4,	// (0x00021c58) cale_month_pane_g6

0x3b24,	// (0x00021ca8) cale_month_pane_g7_ParamLimits

0x3b24,	// (0x00021ca8) cale_month_pane_g7

0x3b8c,	// (0x00021d10) cale_month_pane_g8_ParamLimits

0x3b8c,	// (0x00021d10) cale_month_pane_g8

0x3bf4,	// (0x00021d78) cale_month_pane_g9_ParamLimits

0x3bf4,	// (0x00021d78) cale_month_pane_g9

0x3c52,	// (0x00021dd6) cale_month_pane_g10_ParamLimits

0x3c52,	// (0x00021dd6) cale_month_pane_g10

0x3cb0,	// (0x00021e34) cale_month_pane_g11_ParamLimits

0x3cb0,	// (0x00021e34) cale_month_pane_g11

0x3d04,	// (0x00021e88) cale_month_pane_g12_ParamLimits

0x3d04,	// (0x00021e88) cale_month_pane_g12

0x3d5a,	// (0x00021ede) cale_month_pane_g13_ParamLimits

0x3d5a,	// (0x00021ede) cale_month_pane_g13

0x000c,

0xf287,	// (0x0002d40b) cale_month_pane_g_ParamLimits

0xf287,	// (0x0002d40b) cale_month_pane_g

0x3db0,	// (0x00021f34) cale_month_week_pane

0x3dd4,	// (0x00021f58) grid_cale_month_pane_ParamLimits

0x3dd4,	// (0x00021f58) grid_cale_month_pane

0x3e31,	// (0x00021fb5) cale_month_day_heading_pane_t1

0x3eb7,	// (0x0002203b) cale_month_day_heading_pane_t2

0x3f30,	// (0x000220b4) cale_month_day_heading_pane_t3

0x3fa9,	// (0x0002212d) cale_month_day_heading_pane_t4

0x4022,	// (0x000221a6) cale_month_day_heading_pane_t5

0x409b,	// (0x0002221f) cale_month_day_heading_pane_t6

0x4114,	// (0x00022298) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0002d426) cale_month_day_heading_pane_t

0xa55e,	// (0x000286e2) bg_cale_side_pane_cp01

0x41a5,	// (0x00022329) cale_month_week_pane_t1

0x41be,	// (0x00022342) cale_month_week_pane_t2

0x41d7,	// (0x0002235b) cale_month_week_pane_t3

0x41f0,	// (0x00022374) cale_month_week_pane_t4

0x420b,	// (0x0002238f) cale_month_week_pane_t5

0x422c,	// (0x000223b0) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0002d435) cale_month_week_pane_t

0x424d,	// (0x000223d1) cell_cale_month_pane_ParamLimits

0x424d,	// (0x000223d1) cell_cale_month_pane

0x123c,	// (0x0001f3c0) cell_cale_month_pane_g1

0x1248,	// (0x0001f3cc) cell_cale_month_pane_t1_ParamLimits

0x1248,	// (0x0001f3cc) cell_cale_month_pane_t1

0xa56c,	// (0x000286f0) grid_highlight_pane_cp08

0xa406,	// (0x0002858a) main_smil_g1

0x439d,	// (0x00022521) smil_status_pane

0xa8fd,	// (0x00028a81) smil_text_pane

0xc238,	// (0x0002a3bc) bg_popup_call3_rect_pane_g8

0xc240,	// (0x0002a3c4) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0002d6ee) bg_popup_call3_rect_pane_g

0xc4c7,	// (0x0002a64b) smil_status_volume_pane_g1

0xa907,	// (0x00028a8b) smil_status_pane_t1

0x1512,	// (0x0001f696) volume_smil_pane

0xa91e,	// (0x00028aa2) list_smil_text_pane

0x43b0,	// (0x00022534) scroll_pane_cp011

0x43bb,	// (0x0002253f) smil_text_list_pane_t1_ParamLimits

0x43bb,	// (0x0002253f) smil_text_list_pane_t1

0x1274,	// (0x0001f3f8) aid_volume_smil_ParamLimits

0x1274,	// (0x0001f3f8) aid_volume_smil

0xa406,	// (0x0002858a) smil_volume_pane_g1

0xa406,	// (0x0002858a) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0002d455) smil_volume_pane_g

0x2afd,	// (0x00020c81) listscroll_cale_day_pane

0xa928,	// (0x00028aac) bg_cale_pane

0xa940,	// (0x00028ac4) list_cale_pane

0xa963,	// (0x00028ae7) scroll_pane_cp09

0xa974,	// (0x00028af8) cale_bg_pane_g1

0xa97c,	// (0x00028b00) cale_bg_pane_g2

0xa984,	// (0x00028b08) cale_bg_pane_g3

0xa98c,	// (0x00028b10) cale_bg_pane_g4

0xa994,	// (0x00028b18) cale_bg_pane_g5

0xa99c,	// (0x00028b20) cale_bg_pane_g6

0xa9a4,	// (0x00028b28) cale_bg_pane_g7

0xa9ac,	// (0x00028b30) cale_bg_pane_g8

0xa9b4,	// (0x00028b38) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0002d45a) cale_bg_pane_g

0x4450,	// (0x000225d4) list_cale_time_pane_ParamLimits

0x4450,	// (0x000225d4) list_cale_time_pane

0xa9bc,	// (0x00028b40) list_cale_time_pane_g1_ParamLimits

0xa9bc,	// (0x00028b40) list_cale_time_pane_g1

0xa9c8,	// (0x00028b4c) list_cale_time_pane_g2_ParamLimits

0xa9c8,	// (0x00028b4c) list_cale_time_pane_g2

0x4478,	// (0x000225fc) list_cale_time_pane_g3_ParamLimits

0x4478,	// (0x000225fc) list_cale_time_pane_g3

0x4486,	// (0x0002260a) list_cale_time_pane_g4_ParamLimits

0x4486,	// (0x0002260a) list_cale_time_pane_g4

0x4494,	// (0x00022618) list_cale_time_pane_g5_ParamLimits

0x4494,	// (0x00022618) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0002d46d) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0002d46d) list_cale_time_pane_g

0xa9e2,	// (0x00028b66) list_cale_time_pane_t1_ParamLimits

0xa9e2,	// (0x00028b66) list_cale_time_pane_t1

0xaa0a,	// (0x00028b8e) list_cale_time_pane_t2_ParamLimits

0xaa0a,	// (0x00028b8e) list_cale_time_pane_t2

0x47ed,	// (0x00022971) aid_blid_cardinal_pane

0x482f,	// (0x000229b3) compass_pane_t4

0xaa32,	// (0x00028bb6) list_cale_time_pane_t4_ParamLimits

0xaa32,	// (0x00028bb6) list_cale_time_pane_t4

0x483d,	// (0x000229c1) compass_pane_t5

0x484d,	// (0x000229d1) compass_pane_t6

0x485b,	// (0x000229df) compass_pane_t7

0xaec4,	// (0x00029048) navi_pane_cc_t1

0xb0a1,	// (0x00029225) aid_phob_thumbnail_center_pane

0x4eb6,	// (0x0002303a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0002d47a) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0002d47a) list_cale_time_pane_t

0x9cdc,	// (0x00027e60) bg_popup_window_pane_cp02_ParamLimits

0x9cdc,	// (0x00027e60) bg_popup_window_pane_cp02

0xaa5a,	// (0x00028bde) heading_pane_cp01_ParamLimits

0xaa5a,	// (0x00028bde) heading_pane_cp01

0xaa66,	// (0x00028bea) loc_req_pane_ParamLimits

0xaa66,	// (0x00028bea) loc_req_pane

0xaa76,	// (0x00028bfa) loc_type_pane_ParamLimits

0xaa76,	// (0x00028bfa) loc_type_pane

0xaa88,	// (0x00028c0c) loc_type_pane_t1_ParamLimits

0xaa88,	// (0x00028c0c) loc_type_pane_t1

0xaa9a,	// (0x00028c1e) loc_type_pane_t2_ParamLimits

0xaa9a,	// (0x00028c1e) loc_type_pane_t2

0xaaac,	// (0x00028c30) loc_type_pane_t3_ParamLimits

0xaaac,	// (0x00028c30) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0002d481) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0002d481) loc_type_pane_t

0xaabe,	// (0x00028c42) list_loc_req_pane

0xaac8,	// (0x00028c4c) scroll_pane_cp012

0x44a2,	// (0x00022626) list_single_loc_request_popup_menu_pane_ParamLimits

0x44a2,	// (0x00022626) list_single_loc_request_popup_menu_pane

0xaad3,	// (0x00028c57) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaad3,	// (0x00028c57) list_single_loc_request_popup_menu_pane_g1

0xaadf,	// (0x00028c63) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaadf,	// (0x00028c63) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0002d488) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0002d488) list_single_loc_request_popup_menu_pane_g

0xaaeb,	// (0x00028c6f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaaeb,	// (0x00028c6f) list_single_loc_request_popup_menu_pane_t1

0x44ba,	// (0x0002263e) bg_popup_window_pane_cp03_ParamLimits

0x44ba,	// (0x0002263e) bg_popup_window_pane_cp03

0x44c8,	// (0x0002264c) heading_loc_req_pane_ParamLimits

0x44c8,	// (0x0002264c) heading_loc_req_pane

0x44d4,	// (0x00022658) popup_dyc_status_message_window_g1_ParamLimits

0x44d4,	// (0x00022658) popup_dyc_status_message_window_g1

0x44e0,	// (0x00022664) popup_dyc_status_message_window_t1_ParamLimits

0x44e0,	// (0x00022664) popup_dyc_status_message_window_t1

0x44f2,	// (0x00022676) popup_dyc_status_message_window_t2_ParamLimits

0x44f2,	// (0x00022676) popup_dyc_status_message_window_t2

0x4504,	// (0x00022688) popup_dyc_status_message_window_t3_ParamLimits

0x4504,	// (0x00022688) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0002d48d) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0002d48d) popup_dyc_status_message_window_t

0xa085,	// (0x00028209) bg_heading_pane_cp01

0xab01,	// (0x00028c85) heading_loc_req_pane_g1

0xab09,	// (0x00028c8d) heading_loc_req_pane_g2

0xab11,	// (0x00028c95) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0002d494) heading_loc_req_pane_g

0xab19,	// (0x00028c9d) heading_loc_req_pane_t1

0xab28,	// (0x00028cac) bg_popup_sub_pane_cp01_ParamLimits

0xab28,	// (0x00028cac) bg_popup_sub_pane_cp01

0xab36,	// (0x00028cba) popup_cale_events_window_g1_ParamLimits

0xab36,	// (0x00028cba) popup_cale_events_window_g1

0xab56,	// (0x00028cda) popup_cale_events_window_g2_ParamLimits

0xab56,	// (0x00028cda) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0002d4c8) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0002d4c8) popup_cale_events_window_g

0xab76,	// (0x00028cfa) popup_cale_events_window_t1_ParamLimits

0xab76,	// (0x00028cfa) popup_cale_events_window_t1

0xab88,	// (0x00028d0c) popup_cale_events_window_t2_ParamLimits

0xab88,	// (0x00028d0c) popup_cale_events_window_t2

0xabc6,	// (0x00028d4a) popup_cale_events_window_t3_ParamLimits

0xabc6,	// (0x00028d4a) popup_cale_events_window_t3

0xac00,	// (0x00028d84) popup_cale_events_window_t4_ParamLimits

0xac00,	// (0x00028d84) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0002d4cd) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0002d4cd) popup_cale_events_window_t

0x45ff,	// (0x00022783) call_type_pane

0xada6,	// (0x00028f2a) popup_call_status_window_g1

0x460b,	// (0x0002278f) popup_call_status_window_g2

0x4617,	// (0x0002279b) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0002d4d6) popup_call_status_window_g

0xac36,	// (0x00028dba) call_type_pane_g1

0xac3f,	// (0x00028dc3) call_type_pane_g2

0x0001,

0xf359,	// (0x0002d4dd) call_type_pane_g

0xa085,	// (0x00028209) bg_popup_sub_pane_cp02

0xac48,	// (0x00028dcc) listscroll_popup_wml_pane

0xac50,	// (0x00028dd4) list_wml_pane

0xac5a,	// (0x00028dde) scroll_pane_cp013

0xac65,	// (0x00028de9) list_single_graphic_popup_wml_pane_ParamLimits

0xac65,	// (0x00028de9) list_single_graphic_popup_wml_pane

0xa406,	// (0x0002858a) list_single_graphic_popup_wml_pane_g1

0xac79,	// (0x00028dfd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0002d4e2) list_single_graphic_popup_wml_pane_g

0xac81,	// (0x00028e05) list_single_graphic_popup_wml_pane_t1

0xac97,	// (0x00028e1b) aid_call_pane

0xa2d8,	// (0x0002845c) popup_clock_analogue_window_g1

0xa2d8,	// (0x0002845c) popup_clock_analogue_window_g2

0x1296,	// (0x0001f41a) popup_clock_analogue_window_g3

0x1296,	// (0x0001f41a) popup_clock_analogue_window_g4

0xa406,	// (0x0002858a) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0002d4e7) popup_clock_analogue_window_g

0x129e,	// (0x0001f422) popup_clock_analogue_window_t1

0x12ac,	// (0x0001f430) clock_digital_number_pane_ParamLimits

0x12ac,	// (0x0001f430) clock_digital_number_pane

0x12b8,	// (0x0001f43c) clock_digital_number_pane_cp02_ParamLimits

0x12b8,	// (0x0001f43c) clock_digital_number_pane_cp02

0x12c4,	// (0x0001f448) clock_digital_number_pane_cp03_ParamLimits

0x12c4,	// (0x0001f448) clock_digital_number_pane_cp03

0x12d0,	// (0x0001f454) clock_digital_number_pane_cp04_ParamLimits

0x12d0,	// (0x0001f454) clock_digital_number_pane_cp04

0x12dc,	// (0x0001f460) clock_digital_separator_pane_ParamLimits

0x12dc,	// (0x0001f460) clock_digital_separator_pane

0x12e8,	// (0x0001f46c) popup_clock_digital_window_t1

0xa406,	// (0x0002858a) clock_digital_number_pane_g1

0xa406,	// (0x0002858a) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0002d455) clock_digital_number_pane_g

0xa406,	// (0x0002858a) clock_digital_separator_pane_g1

0xa406,	// (0x0002858a) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0002d455) clock_digital_separator_pane_g

0xa085,	// (0x00028209) bg_popup_window_pane_cp04

0xac9f,	// (0x00028e23) heading_pane_cp03

0xaca7,	// (0x00028e2b) listscroll_popup_gms_pane

0xacaf,	// (0x00028e33) grid_large_graphic_popup_pane

0xacb9,	// (0x00028e3d) listscroll_popup_gms_pane_g1

0xacc1,	// (0x00028e45) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0002d4f2) listscroll_popup_gms_pane_g

0xa762,	// (0x000288e6) scroll_pane_cp014

0x4623,	// (0x000227a7) cell_large_graphic_popup_pane_ParamLimits

0x4623,	// (0x000227a7) cell_large_graphic_popup_pane

0x463b,	// (0x000227bf) cell_large_graphic_popup_pane_g1_ParamLimits

0x463b,	// (0x000227bf) cell_large_graphic_popup_pane_g1

0xacc9,	// (0x00028e4d) cell_large_graphic_popup_pane_g2_ParamLimits

0xacc9,	// (0x00028e4d) cell_large_graphic_popup_pane_g2

0xacd5,	// (0x00028e59) cell_large_graphic_popup_pane_g3_ParamLimits

0xacd5,	// (0x00028e59) cell_large_graphic_popup_pane_g3

0xace2,	// (0x00028e66) cell_large_graphic_popup_pane_g4_ParamLimits

0xace2,	// (0x00028e66) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0002d4f7) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0002d4f7) cell_large_graphic_popup_pane_g

0xacf2,	// (0x00028e76) grid_highlight_pane_cp010

0xa406,	// (0x0002858a) bg_popup_call_pane_g1

0xacfc,	// (0x00028e80) list_single_graphic_popup_conf_pane_ParamLimits

0xacfc,	// (0x00028e80) list_single_graphic_popup_conf_pane

0xad0f,	// (0x00028e93) list_highlight_pane_cp01

0xad18,	// (0x00028e9c) list_single_graphic_popup_conf_pane_g1

0xad20,	// (0x00028ea4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0002d500) list_single_graphic_popup_conf_pane_g

0xad28,	// (0x00028eac) list_single_graphic_popup_conf_pane_t1

0xad36,	// (0x00028eba) linegrid_cams_pane_g1

0x4647,	// (0x000227cb) linegrid_cams_pane_g2

0xa59f,	// (0x00028723) linegrid_cams_pane_g3

0xad3f,	// (0x00028ec3) linegrid_cams_pane_g4

0x4650,	// (0x000227d4) linegrid_cams_pane_g5

0x4659,	// (0x000227dd) linegrid_cams_pane_g6

0xa5a8,	// (0x0002872c) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0002d505) linegrid_cams_pane_g

0xad48,	// (0x00028ecc) popup_clock_analogue_window

0xad48,	// (0x00028ecc) popup_clock_digital_window

0xa085,	// (0x00028209) popup_phob_thumbnail_window

0xa406,	// (0x0002858a) call_video_uplink_pane_g1

0xad51,	// (0x00028ed5) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0002d514) call_video_uplink_pane_g

0xad59,	// (0x00028edd) video_uplink_pane

0xad61,	// (0x00028ee5) mce_image_pane_g1

0x4662,	// (0x000227e6) mce_image_pane_g2

0x466a,	// (0x000227ee) mce_image_pane_g3

0x4672,	// (0x000227f6) mce_image_pane_g4

0x467a,	// (0x000227fe) mce_image_pane_g5

0x0004,

0xf395,	// (0x0002d519) mce_image_pane_g

0xad6b,	// (0x00028eef) control_top_pane_stacon_cp01_ParamLimits

0xad6b,	// (0x00028eef) control_top_pane_stacon_cp01

0xad7f,	// (0x00028f03) uni_indicator_pane_stacon_cp01_ParamLimits

0xad7f,	// (0x00028f03) uni_indicator_pane_stacon_cp01

0xad90,	// (0x00028f14) bg_popup_sub_pane_cp03

0x4682,	// (0x00022806) chi_dic_find_pane

0x468a,	// (0x0002280e) listscroll_chi_dic_pane

0x4693,	// (0x00022817) main_pane_chidic_g1

0x46a6,	// (0x0002282a) chi_dic_find_pane_t1

0xadb4,	// (0x00028f38) find_chidic_pane

0xadbd,	// (0x00028f41) chi_dic_list_pane_ParamLimits

0xadbd,	// (0x00028f41) chi_dic_list_pane

0xadce,	// (0x00028f52) scroll_pane_cp020

0x46b4,	// (0x00022838) find_chidic_pane_t1

0xa085,	// (0x00028209) input_focus_pane_cp06

0x46c3,	// (0x00022847) list_chi_dic_pane_ParamLimits

0x46c3,	// (0x00022847) list_chi_dic_pane

0x46e0,	// (0x00022864) list_chi_dic_pane_t1_ParamLimits

0x46e0,	// (0x00022864) list_chi_dic_pane_t1

0xa085,	// (0x00028209) list_highlight_pane_cp020

0xadd6,	// (0x00028f5a) bg_cale_heading_pane_g1

0x46f3,	// (0x00022877) bg_cale_heading_pane_g2

0x46fb,	// (0x0002287f) bg_cale_heading_pane_g3

0x4703,	// (0x00022887) bg_cale_heading_pane_g4

0x470d,	// (0x00022891) bg_cale_heading_pane_g5

0x4717,	// (0x0002289b) bg_cale_heading_pane_g6

0x471f,	// (0x000228a3) bg_cale_heading_pane_g7

0x4727,	// (0x000228ab) bg_cale_heading_pane_g8

0x4731,	// (0x000228b5) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0002d524) bg_cale_heading_pane_g

0xadd6,	// (0x00028f5a) bg_cale_side_pane_g1

0x473b,	// (0x000228bf) bg_cale_side_pane_g2

0x4745,	// (0x000228c9) bg_cale_side_pane_g3

0x474f,	// (0x000228d3) bg_cale_side_pane_g4

0x4759,	// (0x000228dd) bg_cale_side_pane_g5

0x4763,	// (0x000228e7) bg_cale_side_pane_g6

0x476d,	// (0x000228f1) bg_cale_side_pane_g7

0x4777,	// (0x000228fb) bg_cale_side_pane_g8

0x477f,	// (0x00022903) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0002d537) bg_cale_side_pane_g

0x4787,	// (0x0002290b) popup_call_status_window_ParamLimits

0x4787,	// (0x0002290b) popup_call_status_window

0xadde,	// (0x00028f62) stacon_top_pane

0xade6,	// (0x00028f6a) status_pane_ParamLimits

0xade6,	// (0x00028f6a) status_pane

0xadfb,	// (0x00028f7f) status_small_pane

0xae03,	// (0x00028f87) control_pane

0xa085,	// (0x00028209) stacon_bottom_pane

0xae0b,	// (0x00028f8f) list_single_mce_smart_pane_t1_ParamLimits

0xae0b,	// (0x00028f8f) list_single_mce_smart_pane_t1

0xae1e,	// (0x00028fa2) list_single_mce_smart_pane_t2_ParamLimits

0xae1e,	// (0x00028fa2) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0002d54a) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0002d54a) list_single_mce_smart_pane_t

0x4793,	// (0x00022917) compass_pane

0x479f,	// (0x00022923) main_location2_pane_t1

0x47b3,	// (0x00022937) main_location2_pane_t2

0x47c7,	// (0x0002294b) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0002d54f) main_location2_pane_t

0xae3d,	// (0x00028fc1) compass_pane_g1_ParamLimits

0xae3d,	// (0x00028fc1) compass_pane_g1

0x4811,	// (0x00022995) compass_pane_t1

0x4820,	// (0x000229a4) compass_pane_t2

0x0005,

0xf3d4,	// (0x0002d558) compass_pane_t

0x486b,	// (0x000229ef) text_secondary_cp61

0xaebb,	// (0x0002903f) navi_pane_cams_g5

0xaf37,	// (0x000290bb) navi_pane_im_t1

0xaf45,	// (0x000290c9) navi_pane_mp_g1_ParamLimits

0xaf45,	// (0x000290c9) navi_pane_mp_g1

0xaf59,	// (0x000290dd) navi_pane_mp_g2_ParamLimits

0xaf59,	// (0x000290dd) navi_pane_mp_g2

0xaf65,	// (0x000290e9) navi_pane_mp_g3_ParamLimits

0xaf65,	// (0x000290e9) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0002d56c) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0002d56c) navi_pane_mp_g

0xaf71,	// (0x000290f5) navi_pane_mp_t1

0xaf7f,	// (0x00029103) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0002d573) navi_pane_mp_t

0xafea,	// (0x0002916e) navi_pane_vt_g1

0xaf71,	// (0x000290f5) navi_pane_vt_t1

0xaff2,	// (0x00029176) navi_slider_pane

0xa5b9,	// (0x0002873d) zooming_pane

0xb002,	// (0x00029186) navi_slider_pane_g1

0x1305,	// (0x0001f489) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0002d57a) navi_slider_pane_g

0xb026,	// (0x000291aa) aid_levels_zoom

0xb02e,	// (0x000291b2) zooming_pane_g1

0xb036,	// (0x000291ba) zooming_pane_g2

0xb036,	// (0x000291ba) zooming_pane_g3

0x0002,

0xf405,	// (0x0002d589) zooming_pane_g

0xb03e,	// (0x000291c2) level_10_zoom

0xb047,	// (0x000291cb) level_11_zoom

0xb050,	// (0x000291d4) level_1_zoom

0xb059,	// (0x000291dd) level_2_zoom

0xb062,	// (0x000291e6) level_3_zoom

0xb06b,	// (0x000291ef) level_4_zoom

0xb074,	// (0x000291f8) level_5_zoom

0xb07d,	// (0x00029201) level_6_zoom

0xb086,	// (0x0002920a) level_7_zoom

0xb08f,	// (0x00029213) level_8_zoom

0xb098,	// (0x0002921c) level_9_zoom

0xb0a9,	// (0x0002922d) popup_phob_thumbnail_window_g1

0xb0b1,	// (0x00029235) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0002d590) popup_phob_thumbnail_window_g

0xc3da,	// (0x0002a55e) level_1_location

0xc3e2,	// (0x0002a566) level_2_location

0xc3ea,	// (0x0002a56e) level_3_location

0xc3f2,	// (0x0002a576) level_4_location

0xa5b9,	// (0x0002873d) level_5_location

0x48a6,	// (0x00022a2a) mce_icon_pane_g1

0x48ae,	// (0x00022a32) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0002d595) mce_icon_pane_g

0x48b6,	// (0x00022a3a) main_mup_pane_g1_ParamLimits

0x48b6,	// (0x00022a3a) main_mup_pane_g1

0x48ce,	// (0x00022a52) main_mup_pane_g2_ParamLimits

0x48ce,	// (0x00022a52) main_mup_pane_g2

0x48e2,	// (0x00022a66) main_mup_pane_g3_ParamLimits

0x48e2,	// (0x00022a66) main_mup_pane_g3

0x48f6,	// (0x00022a7a) main_mup_pane_g4_ParamLimits

0x48f6,	// (0x00022a7a) main_mup_pane_g4

0x4912,	// (0x00022a96) main_mup_pane_g5_ParamLimits

0x4912,	// (0x00022a96) main_mup_pane_g5

0x4933,	// (0x00022ab7) main_mup_pane_g6_ParamLimits

0x4933,	// (0x00022ab7) main_mup_pane_g6

0x494f,	// (0x00022ad3) main_mup_pane_g7_ParamLimits

0x494f,	// (0x00022ad3) main_mup_pane_g7

0x496b,	// (0x00022aef) main_mup_pane_g8_ParamLimits

0x496b,	// (0x00022aef) main_mup_pane_g8

0x4987,	// (0x00022b0b) main_mup_pane_g9_ParamLimits

0x4987,	// (0x00022b0b) main_mup_pane_g9

0x49a6,	// (0x00022b2a) main_mup_pane_g10_ParamLimits

0x49a6,	// (0x00022b2a) main_mup_pane_g10

0x49c5,	// (0x00022b49) main_mup_pane_g11_ParamLimits

0x49c5,	// (0x00022b49) main_mup_pane_g11

0x49dd,	// (0x00022b61) main_mup_pane_g12_ParamLimits

0x49dd,	// (0x00022b61) main_mup_pane_g12

0x49eb,	// (0x00022b6f) main_mup_pane_g13_ParamLimits

0x49eb,	// (0x00022b6f) main_mup_pane_g13

0x000c,

0xf416,	// (0x0002d59a) main_mup_pane_g_ParamLimits

0xf416,	// (0x0002d59a) main_mup_pane_g

0x4a01,	// (0x00022b85) main_mup_pane_t1_ParamLimits

0x4a01,	// (0x00022b85) main_mup_pane_t1

0x4a1e,	// (0x00022ba2) main_mup_pane_t2_ParamLimits

0x4a1e,	// (0x00022ba2) main_mup_pane_t2

0x4a38,	// (0x00022bbc) main_mup_pane_t3_ParamLimits

0x4a38,	// (0x00022bbc) main_mup_pane_t3

0x4a52,	// (0x00022bd6) main_mup_pane_t4_ParamLimits

0x4a52,	// (0x00022bd6) main_mup_pane_t4

0x4a64,	// (0x00022be8) main_mup_pane_t5_ParamLimits

0x4a64,	// (0x00022be8) main_mup_pane_t5

0x4a76,	// (0x00022bfa) main_mup_pane_t6_ParamLimits

0x4a76,	// (0x00022bfa) main_mup_pane_t6

0x0005,

0xf431,	// (0x0002d5b5) main_mup_pane_t_ParamLimits

0xf431,	// (0x0002d5b5) main_mup_pane_t

0x4a8c,	// (0x00022c10) mup_progress_pane_ParamLimits

0x4a8c,	// (0x00022c10) mup_progress_pane

0x4a98,	// (0x00022c1c) mup_visualizer_pane_ParamLimits

0x4a98,	// (0x00022c1c) mup_visualizer_pane

0x4ad6,	// (0x00022c5a) mup_volume_pane_ParamLimits

0x4ad6,	// (0x00022c5a) mup_volume_pane

0xada6,	// (0x00028f2a) mup_visualizer_pane_g1_ParamLimits

0xada6,	// (0x00028f2a) mup_visualizer_pane_g1

0xada6,	// (0x00028f2a) mup_visualizer_pane_g2_ParamLimits

0xada6,	// (0x00028f2a) mup_visualizer_pane_g2

0xae3d,	// (0x00028fc1) mup_visualizer_pane_g3_ParamLimits

0xae3d,	// (0x00028fc1) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0002d5c2) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0002d5c2) mup_visualizer_pane_g

0xa406,	// (0x0002858a) mup_volume_pane_g1

0xb0c1,	// (0x00029245) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0002d5c9) mup_volume_pane_g

0xa406,	// (0x0002858a) mup_progress_pane_g1

0xb0ca,	// (0x0002924e) mup_progress_pane_g2

0xb0d3,	// (0x00029257) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0002d5ce) mup_progress_pane_g

0xa085,	// (0x00028209) bg_popup_window_pane_cp05

0xb0dc,	// (0x00029260) heading_pane_cp02_ParamLimits

0xb0dc,	// (0x00029260) heading_pane_cp02

0xb0f6,	// (0x0002927a) list_popup_blid_pane

0xb0fe,	// (0x00029282) list_blid_sat_info_pane_ParamLimits

0xb0fe,	// (0x00029282) list_blid_sat_info_pane

0xb111,	// (0x00029295) list_blid_sat_info_pane_g1

0xb119,	// (0x0002929d) list_blid_sat_info_pane_t1

0x4be1,	// (0x00022d65) mup_equalizer_pane_ParamLimits

0x4be1,	// (0x00022d65) mup_equalizer_pane

0x4c02,	// (0x00022d86) mup_equalizer_pane_cp1_ParamLimits

0x4c02,	// (0x00022d86) mup_equalizer_pane_cp1

0x4c23,	// (0x00022da7) mup_equalizer_pane_cp2_ParamLimits

0x4c23,	// (0x00022da7) mup_equalizer_pane_cp2

0x4c44,	// (0x00022dc8) mup_equalizer_pane_cp3_ParamLimits

0x4c44,	// (0x00022dc8) mup_equalizer_pane_cp3

0x4c65,	// (0x00022de9) mup_equalizer_pane_cp4_ParamLimits

0x4c65,	// (0x00022de9) mup_equalizer_pane_cp4

0x4c86,	// (0x00022e0a) mup_equalizer_pane_cp5

0x4c9c,	// (0x00022e20) mup_equalizer_pane_cp6

0x4cb4,	// (0x00022e38) mup_equalizer_pane_cp7

0xc2b8,	// (0x0002a43c) bg_popup_call_poc_act_pane_g9

0xc2c0,	// (0x0002a444) bg_popup_call_poc_act_pane_g10

0xc2c8,	// (0x0002a44c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2e0,	// (0x00028464) mup_scale_pane

0xa406,	// (0x0002858a) mup_scale_pane_g1

0xb127,	// (0x000292ab) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0002d5ea) mup_scale_pane_g

0xb14b,	// (0x000292cf) msg_data_pane

0xb153,	// (0x000292d7) scroll_pane_cp017

0x4cde,	// (0x00022e62) bg_list_pane_cp04_ParamLimits

0x4cde,	// (0x00022e62) bg_list_pane_cp04

0xb15b,	// (0x000292df) msg_data_pane_g1

0x4d02,	// (0x00022e86) msg_data_pane_g2

0x4d0a,	// (0x00022e8e) msg_data_pane_g3

0x4d12,	// (0x00022e96) msg_data_pane_g4

0x4d1a,	// (0x00022e9e) msg_data_pane_g5

0x4d22,	// (0x00022ea6) msg_data_pane_g6

0x4d2a,	// (0x00022eae) msg_data_pane_g7

0x0006,

0xf475,	// (0x0002d5f9) msg_data_pane_g

0x4d32,	// (0x00022eb6) msg_text_pane_ParamLimits

0x4d32,	// (0x00022eb6) msg_text_pane

0x4d85,	// (0x00022f09) qrid_highlight_pane_cp011_ParamLimits

0x4d85,	// (0x00022f09) qrid_highlight_pane_cp011

0xa085,	// (0x00028209) msg_body_pane

0xa085,	// (0x00028209) msg_header_pane

0xb16c,	// (0x000292f0) input_focus_pane_cp07

0x4dad,	// (0x00022f31) msg_header_pane_t1_ParamLimits

0x4dad,	// (0x00022f31) msg_header_pane_t1

0x4dbf,	// (0x00022f43) msg_header_pane_t2_ParamLimits

0x4dbf,	// (0x00022f43) msg_header_pane_t2

0x0001,

0xf489,	// (0x0002d60d) msg_header_pane_t_ParamLimits

0xf489,	// (0x0002d60d) msg_header_pane_t

0xb181,	// (0x00029305) msg_body_pane_g1

0x4dd1,	// (0x00022f55) msg_body_pane_t1_ParamLimits

0x4dd1,	// (0x00022f55) msg_body_pane_t1

0x4e02,	// (0x00022f86) msg_body_pane_t2_ParamLimits

0x4e02,	// (0x00022f86) msg_body_pane_t2

0x4e14,	// (0x00022f98) msg_body_pane_t3_ParamLimits

0x4e14,	// (0x00022f98) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0002d612) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0002d612) msg_body_pane_t

0x1347,	// (0x0001f4cb) main_viewer_pane_g1_ParamLimits

0x1347,	// (0x0001f4cb) main_viewer_pane_g1

0x1353,	// (0x0001f4d7) main_viewer_pane_g2_ParamLimits

0x1353,	// (0x0001f4d7) main_viewer_pane_g2

0x4e48,	// (0x00022fcc) main_viewer_pane_g3_ParamLimits

0x4e48,	// (0x00022fcc) main_viewer_pane_g3

0x4e59,	// (0x00022fdd) main_viewer_pane_g4_ParamLimits

0x4e59,	// (0x00022fdd) main_viewer_pane_g4

0x135f,	// (0x0001f4e3) main_viewer_pane_g5_ParamLimits

0x135f,	// (0x0001f4e3) main_viewer_pane_g5

0x135f,	// (0x0001f4e3) main_viewer_pane_g7_ParamLimits

0x135f,	// (0x0001f4e3) main_viewer_pane_g7

0xaad3,	// (0x00028c57) main_viewer_pane_g8_ParamLimits

0xaad3,	// (0x00028c57) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0002d622) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0002d622) main_viewer_pane_g

0xb189,	// (0x0002930d) viewer_content_pane_ParamLimits

0xb189,	// (0x0002930d) viewer_content_pane

0x4e8a,	// (0x0002300e) main_postcard_pane_g1_ParamLimits

0x4e8a,	// (0x0002300e) main_postcard_pane_g1

0x4e98,	// (0x0002301c) main_postcard_pane_g2_ParamLimits

0x4e98,	// (0x0002301c) main_postcard_pane_g2

0x4ea6,	// (0x0002302a) main_postcard_pane_g3_ParamLimits

0x4ea6,	// (0x0002302a) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0002d633) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0002d633) main_postcard_pane_g

0x4eb6,	// (0x0002303a) main_postcard_pane_g4

0xc4da,	// (0x0002a65e) smil_status_volume_pane_g2

0x4ee2,	// (0x00023066) postcard_pane_ParamLimits

0x4ee2,	// (0x00023066) postcard_pane

0xada6,	// (0x00028f2a) postcard_pane_g1_ParamLimits

0xada6,	// (0x00028f2a) postcard_pane_g1

0x4f14,	// (0x00023098) postcard_pane_g2_ParamLimits

0x4f14,	// (0x00023098) postcard_pane_g2

0x4f20,	// (0x000230a4) postcard_pane_g3_ParamLimits

0x4f20,	// (0x000230a4) postcard_pane_g3

0xb197,	// (0x0002931b) postcard_pane_g4_ParamLimits

0xb197,	// (0x0002931b) postcard_pane_g4

0x4f2c,	// (0x000230b0) postcard_pane_g5_ParamLimits

0x4f2c,	// (0x000230b0) postcard_pane_g5

0x4f38,	// (0x000230bc) postcard_pane_g6_ParamLimits

0x4f38,	// (0x000230bc) postcard_pane_g6

0xb1a5,	// (0x00029329) postcard_pane_g7_ParamLimits

0xb1a5,	// (0x00029329) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0002d640) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0002d640) postcard_pane_g

0x4f44,	// (0x000230c8) main_mp2_pane_g1_ParamLimits

0x4f44,	// (0x000230c8) main_mp2_pane_g1

0x4f50,	// (0x000230d4) main_mp2_pane_g2_ParamLimits

0x4f50,	// (0x000230d4) main_mp2_pane_g2

0x4f5c,	// (0x000230e0) main_mp2_pane_g3_ParamLimits

0x4f5c,	// (0x000230e0) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0002d64f) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0002d64f) main_mp2_pane_g

0x4f68,	// (0x000230ec) main_mp2_pane_t1_ParamLimits

0x4f68,	// (0x000230ec) main_mp2_pane_t1

0x4f7f,	// (0x00023103) main_mp2_pane_t2_ParamLimits

0x4f7f,	// (0x00023103) main_mp2_pane_t2

0x4f91,	// (0x00023115) main_mp2_pane_t3_ParamLimits

0x4f91,	// (0x00023115) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0002d656) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0002d656) main_mp2_pane_t

0xb1b3,	// (0x00029337) pec_content_pane_ParamLimits

0xb1b3,	// (0x00029337) pec_content_pane

0xa762,	// (0x000288e6) scroll_pane_cp015

0xb1c5,	// (0x00029349) pec_attribute_pane_ParamLimits

0xb1c5,	// (0x00029349) pec_attribute_pane

0x4fa3,	// (0x00023127) pec_content_pane_g1_ParamLimits

0x4fa3,	// (0x00023127) pec_content_pane_g1

0xb1d5,	// (0x00029359) pec_content_pane_t1_ParamLimits

0xb1d5,	// (0x00029359) pec_content_pane_t1

0xb1e7,	// (0x0002936b) pec_content_pane_t2_ParamLimits

0xb1e7,	// (0x0002936b) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0002d65d) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0002d65d) pec_content_pane_t

0x4faf,	// (0x00023133) list_single_graphic_pane_cp01_ParamLimits

0x4faf,	// (0x00023133) list_single_graphic_pane_cp01

0xa2e0,	// (0x00028464) bg_popup_sub_pane_cp04

0xb1f9,	// (0x0002937d) popup_mup_playback_window_g1

0xb205,	// (0x00029389) popup_mup_playback_window_t1

0xb21a,	// (0x0002939e) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0002d662) popup_mup_playback_window_t

0xb251,	// (0x000293d5) main_image_pane_g1_ParamLimits

0xb251,	// (0x000293d5) main_image_pane_g1

0xb294,	// (0x00029418) scroll_pane_cp018_ParamLimits

0xb294,	// (0x00029418) scroll_pane_cp018

0xb2ac,	// (0x00029430) scroll_pane_cp016_ParamLimits

0xb2ac,	// (0x00029430) scroll_pane_cp016

0x5049,	// (0x000231cd) smil2_image_pane_ParamLimits

0x5049,	// (0x000231cd) smil2_image_pane

0x5079,	// (0x000231fd) smil2_root_pane_ParamLimits

0x5079,	// (0x000231fd) smil2_root_pane

0x50a5,	// (0x00023229) smil2_text_pane_ParamLimits

0x50a5,	// (0x00023229) smil2_text_pane

0xa085,	// (0x00028209) bg_list_pane_cp06

0xb2e8,	// (0x0002946c) grid_radio_pane

0xa085,	// (0x00028209) bg_popup_window_pane_cp06

0xb2f0,	// (0x00029474) main_fmradio_pane_t1

0xac9f,	// (0x00028e23) heading_pane_cp04

0xb2fe,	// (0x00029482) main_fmradio_pane_t2

0xc310,	// (0x0002a494) popup_cale_lunar_info_window_g1

0xb30c,	// (0x00029490) main_fmradio_pane_t3

0xc318,	// (0x0002a49c) popup_cale_lunar_info_window_g2

0xb31a,	// (0x0002949e) main_fmradio_pane_t4

0x0001,

0xb328,	// (0x000294ac) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0002d750) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0002d677) main_fmradio_pane_t

0xb336,	// (0x000294ba) wait_bar_pane_cp03

0xb33e,	// (0x000294c2) cell_fmradio_pane_ParamLimits

0xb33e,	// (0x000294c2) cell_fmradio_pane

0xb1a5,	// (0x00029329) cell_fmradio_pane_g1_ParamLimits

0xb1a5,	// (0x00029329) cell_fmradio_pane_g1

0xa085,	// (0x00028209) grid_highlight_pane_cp011

0xb351,	// (0x000294d5) poc_content_pane_ParamLimits

0xb351,	// (0x000294d5) poc_content_pane

0xb363,	// (0x000294e7) scroll_pane_cp019

0x50e5,	// (0x00023269) popup_call_poc_act_window_ParamLimits

0x50e5,	// (0x00023269) popup_call_poc_act_window

0x50f2,	// (0x00023276) popup_call_poc_inact_window_ParamLimits

0x50f2,	// (0x00023276) popup_call_poc_inact_window

0xf590,	// (0x0002d714) bg_popup_call_poc_act_pane_g

0xc2d0,	// (0x0002a454) bg_popup_call_poc_inact_pane_g1

0xc2d8,	// (0x0002a45c) bg_popup_call_poc_inact_pane_g2

0xb36b,	// (0x000294ef) popup_call_poc_act_window_g2

0xc2e0,	// (0x0002a464) bg_popup_call_poc_inact_pane_g3

0xc260,	// (0x0002a3e4) bg_popup_call_poc_inact_pane_g4

0xc2e8,	// (0x0002a46c) bg_popup_call_poc_inact_pane_g5

0xb373,	// (0x000294f7) popup_call_poc_act_window_t1_ParamLimits

0xb373,	// (0x000294f7) popup_call_poc_act_window_t1

0xb39b,	// (0x0002951f) popup_call_poc_act_window_t2_ParamLimits

0xb39b,	// (0x0002951f) popup_call_poc_act_window_t2

0xb3c3,	// (0x00029547) popup_call_poc_act_window_t3_ParamLimits

0xb3c3,	// (0x00029547) popup_call_poc_act_window_t3

0xb3eb,	// (0x0002956f) popup_call_poc_act_window_t4_ParamLimits

0xb3eb,	// (0x0002956f) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0002d682) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0002d682) popup_call_poc_act_window_t

0xc2f0,	// (0x0002a474) bg_popup_call_poc_inact_pane_g6

0xc2f8,	// (0x0002a47c) bg_popup_call_poc_inact_pane_g7

0xc300,	// (0x0002a484) bg_popup_call_poc_inact_pane_g8

0xb3fd,	// (0x00029581) popup_call_poc_inact_window_g2

0xc308,	// (0x0002a48c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0002d72b) bg_popup_call_poc_inact_pane_g

0xb405,	// (0x00029589) popup_call_poc_inact_window_t1_ParamLimits

0xb405,	// (0x00029589) popup_call_poc_inact_window_t1

0xb41a,	// (0x0002959e) popup_call_poc_inact_window_t2_ParamLimits

0xb41a,	// (0x0002959e) popup_call_poc_inact_window_t2

0xb42f,	// (0x000295b3) popup_call_poc_inact_window_t3_ParamLimits

0xb42f,	// (0x000295b3) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0002d68b) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0002d68b) popup_call_poc_inact_window_t

0xc44d,	// (0x0002a5d1) context_pane_ParamLimits

0x55ae,	// (0x00023732) signal_pane_ParamLimits

0xa5b9,	// (0x0002873d) main_call2_pane

0x14b6,	// (0x0001f63a) popup_phob_thumbnail2_window_ParamLimits

0x14b6,	// (0x0001f63a) popup_phob_thumbnail2_window

0x1317,	// (0x0001f49b) aid_hotspot_pointer_arrow_pane

0x131f,	// (0x0001f4a3) aid_hotspot_pointer_hand_pane

0x541a,	// (0x0002359e) phob_pre_status_pane_g5

0x2f09,	// (0x0002108d) cams_zoom_pane_ParamLimits

0x2f15,	// (0x00021099) image_vga_pane_ParamLimits

0x2f24,	// (0x000210a8) main_camera_pane_g1_ParamLimits

0x2f32,	// (0x000210b6) main_camera_pane_g2_ParamLimits

0x2f3e,	// (0x000210c2) main_camera_pane_g3_ParamLimits

0x2f4a,	// (0x000210ce) main_camera_pane_g4_ParamLimits

0x2f56,	// (0x000210da) main_camera_pane_g5_ParamLimits

0x2f62,	// (0x000210e6) main_camera_pane_g6_ParamLimits

0x2f6e,	// (0x000210f2) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0002d38a) main_camera_pane_g_ParamLimits

0x2f7a,	// (0x000210fe) main_camera_pane_t1_ParamLimits

0x2f8c,	// (0x00021110) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0002d39b) main_camera_pane_t_ParamLimits

0xa2e0,	// (0x00028464) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2e0,	// (0x00028464) bg_popup_preview_window_pane_cp01

0xb444,	// (0x000295c8) popup_phob_thumbnail2_window_g1_ParamLimits

0xb444,	// (0x000295c8) popup_phob_thumbnail2_window_g1

0xa085,	// (0x00028209) call2_cli_visual_pane

0x510e,	// (0x00023292) popup_call2_audio_conf_window_ParamLimits

0x510e,	// (0x00023292) popup_call2_audio_conf_window

0x5123,	// (0x000232a7) popup_call2_audio_first_window_ParamLimits

0x5123,	// (0x000232a7) popup_call2_audio_first_window

0x51c1,	// (0x00023345) popup_call2_audio_in_window_ParamLimits

0x51c1,	// (0x00023345) popup_call2_audio_in_window

0x5203,	// (0x00023387) popup_call2_audio_out_window_ParamLimits

0x5203,	// (0x00023387) popup_call2_audio_out_window

0x5265,	// (0x000233e9) popup_call2_audio_second_window_ParamLimits

0x5265,	// (0x000233e9) popup_call2_audio_second_window

0x52c3,	// (0x00023447) popup_call2_audio_wait_window_ParamLimits

0x52c3,	// (0x00023447) popup_call2_audio_wait_window

0xa085,	// (0x00028209) bg_popup_call2_act_pane_cp03

0xa2c2,	// (0x00028446) list_conf_pane_cp

0xb450,	// (0x000295d4) popup_call2_audio_conf_window_t1

0xb45e,	// (0x000295e2) list_single_graphic_popup_conf2_pane_ParamLimits

0xb45e,	// (0x000295e2) list_single_graphic_popup_conf2_pane

0xad0f,	// (0x00028e93) list_highlight_pane_cp04

0xb471,	// (0x000295f5) list_single_graphic_popup_conf2_pane_g1

0xad20,	// (0x00028ea4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0002d692) list_single_graphic_popup_conf2_pane_g

0xb47b,	// (0x000295ff) list_single_graphic_popup_conf2_pane_t1

0xb489,	// (0x0002960d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb489,	// (0x0002960d) bg_popup_call2_act_pane_cp01

0xb513,	// (0x00029697) call_type_pane_cp05_ParamLimits

0xb513,	// (0x00029697) call_type_pane_cp05

0xb567,	// (0x000296eb) popup_call2_audio_second_window_g1_ParamLimits

0xb567,	// (0x000296eb) popup_call2_audio_second_window_g1

0xb5bb,	// (0x0002973f) popup_call2_audio_second_window_g2_ParamLimits

0xb5bb,	// (0x0002973f) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0002d697) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0002d697) popup_call2_audio_second_window_g

0xb620,	// (0x000297a4) popup_call2_audio_second_window_t1_ParamLimits

0xb620,	// (0x000297a4) popup_call2_audio_second_window_t1

0xb6db,	// (0x0002985f) popup_call2_audio_second_window_t2_ParamLimits

0xb6db,	// (0x0002985f) popup_call2_audio_second_window_t2

0xb72e,	// (0x000298b2) popup_call2_audio_second_window_t3_ParamLimits

0xb72e,	// (0x000298b2) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0002d69e) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0002d69e) popup_call2_audio_second_window_t

0xa085,	// (0x00028209) bg_popup_call2_in_pane_cp02

0xa08f,	// (0x00028213) call_type_pane_cp04

0xa097,	// (0x0002821b) popup_call2_audio_wait_window_g1

0xa09f,	// (0x00028223) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002d279) popup_call2_audio_wait_window_g

0xa0a7,	// (0x0002822b) popup_call2_audio_wait_window_t3

0xb821,	// (0x000299a5) bg_popup_call2_act_pane_ParamLimits

0xb821,	// (0x000299a5) bg_popup_call2_act_pane

0xb8e1,	// (0x00029a65) call_type_pane_cp03_ParamLimits

0xb8e1,	// (0x00029a65) call_type_pane_cp03

0xb945,	// (0x00029ac9) popup_call2_audio_first_window_g1_ParamLimits

0xb945,	// (0x00029ac9) popup_call2_audio_first_window_g1

0xb9b5,	// (0x00029b39) popup_call2_audio_first_window_g2_ParamLimits

0xb9b5,	// (0x00029b39) popup_call2_audio_first_window_g2

0xada6,	// (0x00028f2a) popup_call2_audio_first_window_g3_ParamLimits

0xada6,	// (0x00028f2a) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0002d6a7) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0002d6a7) popup_call2_audio_first_window_g

0xba93,	// (0x00029c17) popup_call2_audio_first_window_t1_ParamLimits

0xba93,	// (0x00029c17) popup_call2_audio_first_window_t1

0xbb96,	// (0x00029d1a) popup_call2_audio_first_window_t4_ParamLimits

0xbb96,	// (0x00029d1a) popup_call2_audio_first_window_t4

0xbc79,	// (0x00029dfd) popup_call2_audio_first_window_t5_ParamLimits

0xbc79,	// (0x00029dfd) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0002d6b2) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0002d6b2) popup_call2_audio_first_window_t

0xa2d8,	// (0x0002845c) bg_popup_call2_act_pane_g1

0xc320,	// (0x0002a4a4) popup_cale_lunar_info_window_t1

0xc32e,	// (0x0002a4b2) popup_cale_lunar_info_window_t2

0xc33c,	// (0x0002a4c0) popup_cale_lunar_info_window_t3

0xa085,	// (0x00028209) bg_popup_call2_bubble_pane

0xbd7a,	// (0x00029efe) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd7a,	// (0x00029efe) bg_popup_call2_in_pane_cp01

0x9d61,	// (0x00027ee5) call_type_pane_cp02

0xbdc2,	// (0x00029f46) popup_call2_audio_out_window_g1_ParamLimits

0xbdc2,	// (0x00029f46) popup_call2_audio_out_window_g1

0xbdee,	// (0x00029f72) popup_call2_audio_out_window_g2_ParamLimits

0xbdee,	// (0x00029f72) popup_call2_audio_out_window_g2

0xbe16,	// (0x00029f9a) popup_call2_audio_out_window_g3_ParamLimits

0xbe16,	// (0x00029f9a) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0002d6bb) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0002d6bb) popup_call2_audio_out_window_g

0xbe51,	// (0x00029fd5) popup_call2_audio_out_window_t1_ParamLimits

0xbe51,	// (0x00029fd5) popup_call2_audio_out_window_t1

0xbeb0,	// (0x0002a034) popup_call2_audio_out_window_t2_ParamLimits

0xbeb0,	// (0x0002a034) popup_call2_audio_out_window_t2

0xbf04,	// (0x0002a088) popup_call2_audio_out_window_t3_ParamLimits

0xbf04,	// (0x0002a088) popup_call2_audio_out_window_t3

0xbf1a,	// (0x0002a09e) popup_call2_audio_out_window_t4_ParamLimits

0xbf1a,	// (0x0002a09e) popup_call2_audio_out_window_t4

0xbf30,	// (0x0002a0b4) popup_call2_audio_out_window_t5_ParamLimits

0xbf30,	// (0x0002a0b4) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0002d6c4) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0002d6c4) popup_call2_audio_out_window_t

0xbf94,	// (0x0002a118) bg_popup_call2_in_pane_ParamLimits

0xbf94,	// (0x0002a118) bg_popup_call2_in_pane

0xbff0,	// (0x0002a174) popup_call2_audio_in_window_g1_ParamLimits

0xbff0,	// (0x0002a174) popup_call2_audio_in_window_g1

0xc028,	// (0x0002a1ac) popup_call2_audio_in_window_g2_ParamLimits

0xc028,	// (0x0002a1ac) popup_call2_audio_in_window_g2

0xc060,	// (0x0002a1e4) popup_call2_audio_in_window_g3_ParamLimits

0xc060,	// (0x0002a1e4) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0002d6d1) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0002d6d1) popup_call2_audio_in_window_g

0xc0b8,	// (0x0002a23c) popup_call2_audio_in_window_t1_ParamLimits

0xc0b8,	// (0x0002a23c) popup_call2_audio_in_window_t1

0xc138,	// (0x0002a2bc) popup_call2_audio_in_window_t2_ParamLimits

0xc138,	// (0x0002a2bc) popup_call2_audio_in_window_t2

0xc1b8,	// (0x0002a33c) popup_call2_audio_in_window_t3_ParamLimits

0xc1b8,	// (0x0002a33c) popup_call2_audio_in_window_t3

0xc1d2,	// (0x0002a356) popup_call2_audio_in_window_t4_ParamLimits

0xc1d2,	// (0x0002a356) popup_call2_audio_in_window_t4

0xc1e4,	// (0x0002a368) popup_call2_audio_in_window_t5_ParamLimits

0xc1e4,	// (0x0002a368) popup_call2_audio_in_window_t5

0xc1f6,	// (0x0002a37a) popup_call2_audio_in_window_t6_ParamLimits

0xc1f6,	// (0x0002a37a) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0002d6da) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0002d6da) popup_call2_audio_in_window_t

0xa2d8,	// (0x0002845c) bg_popup_call2_in_pane_g1

0xc34a,	// (0x0002a4ce) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0002d755) popup_cale_lunar_info_window_t

0xa2e0,	// (0x00028464) bg_popup_call2_rect_pane_ParamLimits

0xa2e0,	// (0x00028464) bg_popup_call2_rect_pane

0xa085,	// (0x00028209) call2_cli_visual_graphic_pane

0xa085,	// (0x00028209) call2_cli_visual_text_pane

0x1505,	// (0x0001f689) smil_status_volume_pane_g3

0x0002,

0xa406,	// (0x0002858a) call2_cli_visual_graphic_pane_g1

0xa406,	// (0x0002858a) call2_cli_visual_graphic_pane_g2

0xa406,	// (0x0002858a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0002d6e7) call2_cli_visual_graphic_pane_g

0xc208,	// (0x0002a38c) bg_popup_call2_rect_pane_g1

0xa492,	// (0x00028616) bg_popup_call2_rect_pane_g2

0xc210,	// (0x0002a394) bg_popup_call2_rect_pane_g3

0xc218,	// (0x0002a39c) bg_popup_call2_rect_pane_g4

0xc220,	// (0x0002a3a4) bg_popup_call2_rect_pane_g5

0xc228,	// (0x0002a3ac) bg_popup_call2_rect_pane_g6

0xc230,	// (0x0002a3b4) bg_popup_call2_rect_pane_g7

0xc238,	// (0x0002a3bc) bg_popup_call2_rect_pane_g8

0xc240,	// (0x0002a3c4) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0002d6ee) bg_popup_call2_rect_pane_g

0xc248,	// (0x0002a3cc) bg_popup_call2_bubble_pane_g1

0xc250,	// (0x0002a3d4) bg_popup_call2_bubble_pane_g2

0xc258,	// (0x0002a3dc) bg_popup_call2_bubble_pane_g3

0xc260,	// (0x0002a3e4) bg_popup_call2_bubble_pane_g4

0xc268,	// (0x0002a3ec) bg_popup_call2_bubble_pane_g5

0xc270,	// (0x0002a3f4) bg_popup_call2_bubble_pane_g6

0xc278,	// (0x0002a3fc) bg_popup_call2_bubble_pane_g7

0xc280,	// (0x0002a404) bg_popup_call2_bubble_pane_g8

0xc288,	// (0x0002a40c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0002d701) bg_popup_call2_bubble_pane_g

0x2b0d,	// (0x00020c91) aid_cale_week_size_cell_pane

0x2f9e,	// (0x00021122) aid_cams_cif_uncrop_pane_ParamLimits

0x2f9e,	// (0x00021122) aid_cams_cif_uncrop_pane

0x30f9,	// (0x0002127d) aid_cams_size_cell_ParamLimits

0x30f9,	// (0x0002127d) aid_cams_size_cell

0x3105,	// (0x00021289) grid_cams_pane_ParamLimits

0x3113,	// (0x00021297) linegrid_cams_pane_ParamLimits

0x32ff,	// (0x00021483) call_video_pane_t1

0x3320,	// (0x000214a4) call_video_pane_t2

0x0001,

0xf26a,	// (0x0002d3ee) call_video_pane_t

0x386e,	// (0x000219f2) aid_cale_month_size_cell_pane_ParamLimits

0x386e,	// (0x000219f2) aid_cale_month_size_cell_pane

0xf61a,	// (0x0002d79e) smil_status_volume_pane_g

0x1512,	// (0x0001f696) volume_smil_pane_ParamLimits

0x0cb4,	// (0x0001ee38) aid_popup2_width_pane

0x2a4f,	// (0x00020bd3) cell_qdial_pane_g4_ParamLimits

0x2a4f,	// (0x00020bd3) cell_qdial_pane_g4

0x47ed,	// (0x00022971) aid_blid_cardinal_pane_ParamLimits

0x47fd,	// (0x00022981) aid_blid_destination_pane_ParamLimits

0x47fd,	// (0x00022981) aid_blid_destination_pane

0xa2e0,	// (0x00028464) bg_popup_call_poc_act_pane_ParamLimits

0xa2e0,	// (0x00028464) bg_popup_call_poc_act_pane

0xa2e0,	// (0x00028464) bg_popup_call_poc_inact_pane_ParamLimits

0xa2e0,	// (0x00028464) bg_popup_call_poc_inact_pane

0xc290,	// (0x0002a414) bg_popup_call_poc_act_pane_g1

0xc298,	// (0x0002a41c) bg_popup_call_poc_act_pane_g2

0xc2a0,	// (0x0002a424) bg_popup_call_poc_act_pane_g3

0xc260,	// (0x0002a3e4) bg_popup_call_poc_act_pane_g4

0xc268,	// (0x0002a3ec) bg_popup_call_poc_act_pane_g5

0xc2a8,	// (0x0002a42c) bg_popup_call_poc_act_pane_g6

0xc278,	// (0x0002a3fc) bg_popup_call_poc_act_pane_g7

0xc2b0,	// (0x0002a434) bg_popup_call_poc_act_pane_g8

0xa085,	// (0x00028209) main_usb_pane

0x13e9,	// (0x0001f56d) popup_cale_lunar_info_window

0x363d,	// (0x000217c1) im_reading_pane_t1_ParamLimits

0xa6ba,	// (0x0002883e) list_im_pane_ParamLimits

0xa6cb,	// (0x0002884f) scroll_pane_cp07_ParamLimits

0xa085,	// (0x00028209) grid_highlight_pane_cp012

0xa2e0,	// (0x00028464) mup_scale_pane_ParamLimits

0xada6,	// (0x00028f2a) main_usb_pane_g1_ParamLimits

0xada6,	// (0x00028f2a) main_usb_pane_g1

0x533d,	// (0x000234c1) main_usb_pane_g2_ParamLimits

0x533d,	// (0x000234c1) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0002d73e) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0002d73e) main_usb_pane_g

0x5349,	// (0x000234cd) main_usb_pane_t1_ParamLimits

0x5349,	// (0x000234cd) main_usb_pane_t1

0x535b,	// (0x000234df) main_usb_pane_t2_ParamLimits

0x535b,	// (0x000234df) main_usb_pane_t2

0x536d,	// (0x000234f1) main_usb_pane_t3_ParamLimits

0x536d,	// (0x000234f1) main_usb_pane_t3

0x537f,	// (0x00023503) main_usb_pane_t4_ParamLimits

0x537f,	// (0x00023503) main_usb_pane_t4

0x5391,	// (0x00023515) main_usb_pane_t5_ParamLimits

0x5391,	// (0x00023515) main_usb_pane_t5

0x53a3,	// (0x00023527) main_usb_pane_t6_ParamLimits

0x53a3,	// (0x00023527) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0002d743) main_usb_pane_t_ParamLimits

0x4793,	// (0x00022917) aid_text_placing

0x479f,	// (0x00022923) main_location2_pane_t1_ParamLimits

0x47b3,	// (0x00022937) main_location2_pane_t2_ParamLimits

0x47c7,	// (0x0002294b) main_location2_pane_t3_ParamLimits

0x47db,	// (0x0002295f) main_location2_pane_t4_ParamLimits

0x47db,	// (0x0002295f) main_location2_pane_t4

0xf3cb,	// (0x0002d54f) main_location2_pane_t_ParamLimits

0xa31c,	// (0x000284a0) find_pinb_pane_g2_ParamLimits

0xa31c,	// (0x000284a0) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0002d29f) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0002d29f) find_pinb_pane_g

0xa328,	// (0x000284ac) find_pinb_pane_t1_ParamLimits

0xa33a,	// (0x000284be) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0002d2a4) find_pinb_pane_t_ParamLimits

0xa085,	// (0x00028209) main_call3_pane

0x3e31,	// (0x00021fb5) cale_month_day_heading_pane_t1_ParamLimits

0x3eb7,	// (0x0002203b) cale_month_day_heading_pane_t2_ParamLimits

0x3f30,	// (0x000220b4) cale_month_day_heading_pane_t3_ParamLimits

0x3fa9,	// (0x0002212d) cale_month_day_heading_pane_t4_ParamLimits

0x4022,	// (0x000221a6) cale_month_day_heading_pane_t5_ParamLimits

0x409b,	// (0x0002221f) cale_month_day_heading_pane_t6_ParamLimits

0x4114,	// (0x00022298) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0002d426) cale_month_day_heading_pane_t_ParamLimits

0xa915,	// (0x00028a99) smil_status_volume_pane

0x4efc,	// (0x00023080) postcard_address_pane_ParamLimits

0x4efc,	// (0x00023080) postcard_address_pane

0x4f08,	// (0x0002308c) postcard_message_pane_ParamLimits

0x4f08,	// (0x0002308c) postcard_message_pane

0x5302,	// (0x00023486) call2_cli_visual_pane_t1_ParamLimits

0x5302,	// (0x00023486) call2_cli_visual_pane_t1

0x5799,	// (0x0002391d) postcard_message_pane_t1_ParamLimits

0x5799,	// (0x0002391d) postcard_message_pane_t1

0x5782,	// (0x00023906) postcard_address_pane_t1_ParamLimits

0x5782,	// (0x00023906) postcard_address_pane_t1

0x5773,	// (0x000238f7) popup_call3_audio_in_window_ParamLimits

0x5773,	// (0x000238f7) popup_call3_audio_in_window

0x5657,	// (0x000237db) bg_popup_call3_in_pane_ParamLimits

0x5657,	// (0x000237db) bg_popup_call3_in_pane

0x56b9,	// (0x0002383d) popup_call3_audio_in_window_g1_ParamLimits

0x56b9,	// (0x0002383d) popup_call3_audio_in_window_g1

0x56d1,	// (0x00023855) popup_call3_audio_in_window_g2_ParamLimits

0x56d1,	// (0x00023855) popup_call3_audio_in_window_g2

0x56e9,	// (0x0002386d) popup_call3_audio_in_window_g3_ParamLimits

0x56e9,	// (0x0002386d) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0002d7a5) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0002d7a5) popup_call3_audio_in_window_g

0x5711,	// (0x00023895) popup_call3_audio_in_window_t1_ParamLimits

0x5711,	// (0x00023895) popup_call3_audio_in_window_t1

0x5739,	// (0x000238bd) popup_call3_audio_in_window_t2_ParamLimits

0x5739,	// (0x000238bd) popup_call3_audio_in_window_t2

0x5761,	// (0x000238e5) popup_call3_audio_in_window_t3_ParamLimits

0x5761,	// (0x000238e5) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0002d7ae) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0002d7ae) popup_call3_audio_in_window_t

0xa5b9,	// (0x0002873d) bg_popup_call3_rect_pane

0xc208,	// (0x0002a38c) bg_popup_call3_rect_pane_g1

0xa492,	// (0x00028616) bg_popup_call3_rect_pane_g2

0xc210,	// (0x0002a394) bg_popup_call3_rect_pane_g3

0xc218,	// (0x0002a39c) bg_popup_call3_rect_pane_g4

0xc220,	// (0x0002a3a4) bg_popup_call3_rect_pane_g5

0xc228,	// (0x0002a3ac) bg_popup_call3_rect_pane_g6

0xc230,	// (0x0002a3b4) bg_popup_call3_rect_pane_g7

0x4af1,	// (0x00022c75) mup_visualizer_osc_pane

0xb0b9,	// (0x0002923d) mup_visualizer_spec_pane

0x5677,	// (0x000237fb) call3_video_qcif_pane_ParamLimits

0x5677,	// (0x000237fb) call3_video_qcif_pane

0x5689,	// (0x0002380d) call3_video_qcif_uncrop_pane_ParamLimits

0x5689,	// (0x0002380d) call3_video_qcif_uncrop_pane

0x5697,	// (0x0002381b) call3_video_subqcif_pane_ParamLimits

0x5697,	// (0x0002381b) call3_video_subqcif_pane

0x56a9,	// (0x0002382d) call3_video_subqcif_uncrop_pane_ParamLimits

0x56a9,	// (0x0002382d) call3_video_subqcif_uncrop_pane

0x5701,	// (0x00023885) popup_call3_audio_in_window_g4_ParamLimits

0x5701,	// (0x00023885) popup_call3_audio_in_window_g4

0x5644,	// (0x000237c8) mup_spec_half_pane

0x564d,	// (0x000237d1) mup_spec_half_pane_cp

0xc4ad,	// (0x0002a631) mup_osc_middle_pane

0xc4b6,	// (0x0002a63a) mup_visualizer_osc_pane_g1

0x5625,	// (0x000237a9) mup_spec_bar_pane_ParamLimits

0x5625,	// (0x000237a9) mup_spec_bar_pane

0xc49a,	// (0x0002a61e) mup_spec_bar_pane_g1

0xc4a4,	// (0x0002a628) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0002d799) mup_spec_bar_pane_g

0x2b0d,	// (0x00020c91) aid_cale_week_size_cell_pane_ParamLimits

0x2b22,	// (0x00020ca6) bg_cale_heading_pane_ParamLimits

0xa4dd,	// (0x00028661) bg_cale_pane_cp01_ParamLimits

0x2b44,	// (0x00020cc8) cale_week_corner_pane_ParamLimits

0x2b5e,	// (0x00020ce2) cale_week_day_heading_pane_ParamLimits

0x2b80,	// (0x00020d04) cale_week_scroll_pane_g1_ParamLimits

0x2b9d,	// (0x00020d21) cale_week_scroll_pane_g2_ParamLimits

0x2bb0,	// (0x00020d34) cale_week_scroll_pane_g3_ParamLimits

0x2bc3,	// (0x00020d47) cale_week_scroll_pane_g4_ParamLimits

0x2bd6,	// (0x00020d5a) cale_week_scroll_pane_g5_ParamLimits

0x2be9,	// (0x00020d6d) cale_week_scroll_pane_g6_ParamLimits

0x2bfc,	// (0x00020d80) cale_week_scroll_pane_g7_ParamLimits

0x2c11,	// (0x00020d95) cale_week_scroll_pane_g8_ParamLimits

0x2c26,	// (0x00020daa) cale_week_scroll_pane_g9_ParamLimits

0x2c39,	// (0x00020dbd) cale_week_scroll_pane_g10_ParamLimits

0x2c4c,	// (0x00020dd0) cale_week_scroll_pane_g11_ParamLimits

0x2c5f,	// (0x00020de3) cale_week_scroll_pane_g12_ParamLimits

0x2c76,	// (0x00020dfa) cale_week_scroll_pane_g13_ParamLimits

0x2c91,	// (0x00020e15) cale_week_scroll_pane_g14_ParamLimits

0x2cac,	// (0x00020e30) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0002d330) cale_week_scroll_pane_g_ParamLimits

0x2cdc,	// (0x00020e60) cale_week_time_pane_ParamLimits

0x2cf1,	// (0x00020e75) grid_cale_week_pane_ParamLimits

0xa4fa,	// (0x0002867e) listscroll_cale_week_pane_t1

0xa50c,	// (0x00028690) scroll_pane_cp08_ParamLimits

0x38e2,	// (0x00021a66) cale_month_corner_pane_ParamLimits

0xa8eb,	// (0x00028a6f) cale_month_pane_t1

0x3db0,	// (0x00021f34) cale_month_week_pane_ParamLimits

0xada6,	// (0x00028f2a) popup_call_status_window_g1_ParamLimits

0x460b,	// (0x0002278f) popup_call_status_window_g2_ParamLimits

0x4617,	// (0x0002279b) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0002d4d6) popup_call_status_window_g_ParamLimits

0xac8f,	// (0x00028e13) aid_call2_pane

0x4da1,	// (0x00022f25) msg_header_pane_g1

0x4efc,	// (0x00023080) postcard_address2_pane_ParamLimits

0x4efc,	// (0x00023080) postcard_address2_pane

0x4f08,	// (0x0002308c) postcard_message2_pane_ParamLimits

0x4f08,	// (0x0002308c) postcard_message2_pane

0x55bc,	// (0x00023740) message2_row_pane_ParamLimits

0x55bc,	// (0x00023740) message2_row_pane

0x55d7,	// (0x0002375b) address2_row_pane_ParamLimits

0x55d7,	// (0x0002375b) address2_row_pane

0xc468,	// (0x0002a5ec) postcard_message2_row_pane_g1

0xc470,	// (0x0002a5f4) postcard_message2_row_pane_t1

0xc468,	// (0x0002a5ec) address2_row_pane_g1

0xc470,	// (0x0002a5f4) address2_row_pane_t1

0x2e8e,	// (0x00021012) aid_size_cell_vorec

0xa085,	// (0x00028209) main_rss_pane

0x55ea,	// (0x0002376e) rss_list_single_pane_ParamLimits

0x55ea,	// (0x0002376e) rss_list_single_pane

0xc47e,	// (0x0002a602) rss_list_single_pane_t1

0xc48c,	// (0x0002a610) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0002d794) rss_list_single_pane_t

0xa085,	// (0x00028209) main_camera2_pane

0xa085,	// (0x00028209) main_video2_pane

0x1570,	// (0x0001f6f4) cams_zoom_pane_cp2_ParamLimits

0x1570,	// (0x0001f6f4) cams_zoom_pane_cp2

0x157c,	// (0x0001f700) image2_vga_pane_ParamLimits

0x157c,	// (0x0001f700) image2_vga_pane

0x158b,	// (0x0001f70f) main_camera2_pane_g1_ParamLimits

0x158b,	// (0x0001f70f) main_camera2_pane_g1

0x1597,	// (0x0001f71b) main_camera2_pane_g2_ParamLimits

0x1597,	// (0x0001f71b) main_camera2_pane_g2

0x15a3,	// (0x0001f727) main_camera2_pane_g3_ParamLimits

0x15a3,	// (0x0001f727) main_camera2_pane_g3

0x15af,	// (0x0001f733) main_camera2_pane_g4_ParamLimits

0x15af,	// (0x0001f733) main_camera2_pane_g4

0x15bb,	// (0x0001f73f) main_camera2_pane_g5_ParamLimits

0x15bb,	// (0x0001f73f) main_camera2_pane_g5

0x15c7,	// (0x0001f74b) main_camera2_pane_g6_ParamLimits

0x15c7,	// (0x0001f74b) main_camera2_pane_g6

0x15d3,	// (0x0001f757) main_camera2_pane_g7_ParamLimits

0x15d3,	// (0x0001f757) main_camera2_pane_g7

0x15df,	// (0x0001f763) main_camera2_pane_g8_ParamLimits

0x15df,	// (0x0001f763) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0002d7b5) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0002d7b5) main_camera2_pane_g

0x15f7,	// (0x0001f77b) main_camera2_pane_t1_ParamLimits

0x15f7,	// (0x0001f77b) main_camera2_pane_t1

0x1609,	// (0x0001f78d) main_camera2_pane_t2_ParamLimits

0x1609,	// (0x0001f78d) main_camera2_pane_t2

0x161b,	// (0x0001f79f) main_camera2_pane_t3_ParamLimits

0x161b,	// (0x0001f79f) main_camera2_pane_t3

0x162d,	// (0x0001f7b1) main_camera2_pane_t4_ParamLimits

0x162d,	// (0x0001f7b1) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0002d7c8) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0002d7c8) main_camera2_pane_t

0x168f,	// (0x0001f813) cams_zoom_pane_cp4_ParamLimits

0x168f,	// (0x0001f813) cams_zoom_pane_cp4

0x169f,	// (0x0001f823) image2_cif_pane_ParamLimits

0x169f,	// (0x0001f823) image2_cif_pane

0x16b4,	// (0x0001f838) image2_subqcif_pane_ParamLimits

0x16b4,	// (0x0001f838) image2_subqcif_pane

0x16c3,	// (0x0001f847) main_video2_pane_g1_ParamLimits

0x16c3,	// (0x0001f847) main_video2_pane_g1

0x16d5,	// (0x0001f859) main_video2_pane_g2_ParamLimits

0x16d5,	// (0x0001f859) main_video2_pane_g2

0x16e5,	// (0x0001f869) main_video2_pane_g3_ParamLimits

0x16e5,	// (0x0001f869) main_video2_pane_g3

0x16f5,	// (0x0001f879) main_video2_pane_g4_ParamLimits

0x16f5,	// (0x0001f879) main_video2_pane_g4

0x1705,	// (0x0001f889) main_video2_pane_g5_ParamLimits

0x1705,	// (0x0001f889) main_video2_pane_g5

0x1715,	// (0x0001f899) main_video2_pane_g6_ParamLimits

0x1715,	// (0x0001f899) main_video2_pane_g6

0x0005,

0xf653,	// (0x0002d7d7) main_video2_pane_g_ParamLimits

0xf653,	// (0x0002d7d7) main_video2_pane_g

0x1727,	// (0x0001f8ab) main_video2_pane_t1_ParamLimits

0x1727,	// (0x0001f8ab) main_video2_pane_t1

0x1741,	// (0x0001f8c5) main_video2_pane_t2_ParamLimits

0x1741,	// (0x0001f8c5) main_video2_pane_t2

0x1767,	// (0x0001f8eb) main_video2_pane_t3_ParamLimits

0x1767,	// (0x0001f8eb) main_video2_pane_t3

0x0002,

0xf660,	// (0x0002d7e4) main_video2_pane_t_ParamLimits

0xf660,	// (0x0002d7e4) main_video2_pane_t

0x545a,	// (0x000235de) call_muted_g2

0x0001,

0xf602,	// (0x0002d786) call_muted_g

0xa085,	// (0x00028209) main_mup2_pane

0xc513,	// (0x0002a697) main_mup2_pane_g1_ParamLimits

0xc513,	// (0x0002a697) main_mup2_pane_g1

0x57b4,	// (0x00023938) main_mup2_pane_g2_ParamLimits

0x57b4,	// (0x00023938) main_mup2_pane_g2

0x17b6,	// (0x0001f93a) main_mup_pane_g13_cp1

0x17be,	// (0x0001f942) mup_volume_pane_cp1

0x57d4,	// (0x00023958) main_mup2_pane_g4_ParamLimits

0x57d4,	// (0x00023958) main_mup2_pane_g4

0x57e9,	// (0x0002396d) main_mup2_pane_g5_ParamLimits

0x57e9,	// (0x0002396d) main_mup2_pane_g5

0x57fe,	// (0x00023982) main_mup2_pane_g6_ParamLimits

0x57fe,	// (0x00023982) main_mup2_pane_g6

0x5813,	// (0x00023997) main_mup2_pane_g7_ParamLimits

0x5813,	// (0x00023997) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0002d7eb) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0002d7eb) main_mup2_pane_g

0x582f,	// (0x000239b3) main_mup2_pane_t1_ParamLimits

0x582f,	// (0x000239b3) main_mup2_pane_t1

0x5846,	// (0x000239ca) main_mup2_pane_t2_ParamLimits

0x5846,	// (0x000239ca) main_mup2_pane_t2

0x585d,	// (0x000239e1) main_mup2_pane_t3_ParamLimits

0x585d,	// (0x000239e1) main_mup2_pane_t3

0x5874,	// (0x000239f8) main_mup2_pane_t4_ParamLimits

0x5874,	// (0x000239f8) main_mup2_pane_t4

0x588e,	// (0x00023a12) main_mup2_pane_t5_ParamLimits

0x588e,	// (0x00023a12) main_mup2_pane_t5

0x58a8,	// (0x00023a2c) main_mup2_pane_t6_ParamLimits

0x58a8,	// (0x00023a2c) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0002d7fa) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0002d7fa) main_mup2_pane_t

0x58e0,	// (0x00023a64) mup2_visualizer_pane_ParamLimits

0x58e0,	// (0x00023a64) mup2_visualizer_pane

0x5916,	// (0x00023a9a) mup_progress_pane_cp_ParamLimits

0x5916,	// (0x00023a9a) mup_progress_pane_cp

0x17a1,	// (0x0001f925) mup_volume_pane_cp_ParamLimits

0x17a1,	// (0x0001f925) mup_volume_pane_cp

0x592d,	// (0x00023ab1) mup2_visualizer_pane_g1_ParamLimits

0x592d,	// (0x00023ab1) mup2_visualizer_pane_g1

0xc4ed,	// (0x0002a671) mup2_visualizer_pane_g2_ParamLimits

0xc4ed,	// (0x0002a671) mup2_visualizer_pane_g2

0x5942,	// (0x00023ac6) mup2_visualizer_pane_g3_ParamLimits

0x5942,	// (0x00023ac6) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0002d807) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0002d807) mup2_visualizer_pane_g

0xb2e0,	// (0x00029464) aid_size_cell_fmradio

0x137d,	// (0x0001f501) aid_height_parent_landcape

0xa749,	// (0x000288cd) wml_content_pane_cp

0xa751,	// (0x000288d5) wml_tabs_pane

0xa75a,	// (0x000288de) popup_wml_miniature_window

0xa762,	// (0x000288e6) scroll_pane_cp021

0xa776,	// (0x000288fa) wml_content_pane_comp8

0xa085,	// (0x00028209) bg_popup_sub_pane_cp05

0xc50b,	// (0x0002a68f) popup_wml_miniature_window_g1

0xc51f,	// (0x0002a6a3) wml_miniature_view_pane

0x5950,	// (0x00023ad4) aid_size_wml_view

0x5958,	// (0x00023adc) wml_miniature_view_pane_g1

0x5961,	// (0x00023ae5) wml_miniature_view_pane_g2

0x596a,	// (0x00023aee) wml_miniature_view_pane_g3

0x5972,	// (0x00023af6) wml_miniature_view_pane_g4

0x597a,	// (0x00023afe) wml_miniature_view_pane_g5

0x5982,	// (0x00023b06) wml_miniature_view_pane_g6

0x598a,	// (0x00023b0e) wml_miniature_view_pane_g7

0x5992,	// (0x00023b16) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0002d80e) wml_miniature_view_pane_g

0xc513,	// (0x0002a697) background_graphic_ParamLimits

0xc513,	// (0x0002a697) background_graphic

0xc527,	// (0x0002a6ab) wml_tabs_2_pane

0xc530,	// (0x0002a6b4) wml_tabs_3_pane_ParamLimits

0xc530,	// (0x0002a6b4) wml_tabs_3_pane

0xc542,	// (0x0002a6c6) wml_tabs_4_pane_ParamLimits

0xc542,	// (0x0002a6c6) wml_tabs_4_pane

0xc558,	// (0x0002a6dc) wml_tabs_5_pane_ParamLimits

0xc558,	// (0x0002a6dc) wml_tabs_5_pane

0xc572,	// (0x0002a6f6) wml_tabs_pane_g2_ParamLimits

0xc572,	// (0x0002a6f6) wml_tabs_pane_g2

0xc586,	// (0x0002a70a) wml_tabs_pane_g3_ParamLimits

0xc586,	// (0x0002a70a) wml_tabs_pane_g3

0x599a,	// (0x00023b1e) wml_tabs_2_active_pane_ParamLimits

0x599a,	// (0x00023b1e) wml_tabs_2_active_pane

0x59aa,	// (0x00023b2e) wml_tabs_2_passive_pane_ParamLimits

0x59aa,	// (0x00023b2e) wml_tabs_2_passive_pane

0x59ba,	// (0x00023b3e) wml_tabs_3_active_pane_cp_ParamLimits

0x59ba,	// (0x00023b3e) wml_tabs_3_active_pane_cp

0x59cb,	// (0x00023b4f) wml_tabs_3_passive_pane_ParamLimits

0x59cb,	// (0x00023b4f) wml_tabs_3_passive_pane

0x59dc,	// (0x00023b60) wml_tabs_3_passive_pane_cp_ParamLimits

0x59dc,	// (0x00023b60) wml_tabs_3_passive_pane_cp

0x59ed,	// (0x00023b71) tabs_4_active_pane

0x59f5,	// (0x00023b79) tabs_4_passive_pane

0x59fd,	// (0x00023b81) tabs_4_passive_pane_cp

0x5a05,	// (0x00023b89) tabs_4_passive_pane_cp2

0x5335,	// (0x000234b9) aid_height_text

0x4aba,	// (0x00022c3e) mup_volume_cont_pane_ParamLimits

0x4aba,	// (0x00022c3e) mup_volume_cont_pane

0x27ee,	// (0x00020972) aid_size_cell_pinb

0x27f8,	// (0x0002097c) aid_size_list_pinb

0x58ff,	// (0x00023a83) mup2_volume_cont_pane_ParamLimits

0x58ff,	// (0x00023a83) mup2_volume_cont_pane

0x178d,	// (0x0001f911) mup2_volume_cont_pane_g1_ParamLimits

0x178d,	// (0x0001f911) mup2_volume_cont_pane_g1

0x0cc0,	// (0x0001ee44) aid_size_cell_touch_ParamLimits

0x0cc0,	// (0x0001ee44) aid_size_cell_touch

0x0f48,	// (0x0001f0cc) touch_pane_ParamLimits

0x0f48,	// (0x0001f0cc) touch_pane

0x0f3e,	// (0x0001f0c2) main_rss2_pane

0xc5a3,	// (0x0002a727) listscroll_rss2_pane

0xc5ac,	// (0x0002a730) rss2_navigation_pane

0xc5b4,	// (0x0002a738) list_rss2_pane

0xadce,	// (0x00028f52) scroll_pane_cp22

0xc5bc,	// (0x0002a740) rss2_navigation_pane_g1

0xc5c5,	// (0x0002a749) rss2_navigation_pane_g2

0xc5cd,	// (0x0002a751) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0002d81f) rss2_navigation_pane_g

0xc5d5,	// (0x0002a759) rss2_navigation_pane_t1

0x5a0d,	// (0x00023b91) rss2_list_single_pane_ParamLimits

0x5a0d,	// (0x00023b91) rss2_list_single_pane

0xc5e3,	// (0x0002a767) rss2_list_single_pane_t2

0xc5f1,	// (0x0002a775) rss2_list_single_pane_t3_ParamLimits

0xc5f1,	// (0x0002a775) rss2_list_single_pane_t3

0xc60e,	// (0x0002a792) rss2_list_single_pane_t4

0x43a8,	// (0x0002252c) smil_status_pane_g1

0x1394,	// (0x0001f518) main_image2_pane_ParamLimits

0x1394,	// (0x0001f518) main_image2_pane

0x15eb,	// (0x0001f76f) main_camera2_pane_g9_ParamLimits

0x15eb,	// (0x0001f76f) main_camera2_pane_g9

0x163f,	// (0x0001f7c3) main_camera2_pane_t5_ParamLimits

0x163f,	// (0x0001f7c3) main_camera2_pane_t5

0x1651,	// (0x0001f7d5) main_camera2_pane_t6_ParamLimits

0x1651,	// (0x0001f7d5) main_camera2_pane_t6

0x5a41,	// (0x00023bc5) main_image2_pane_g1_ParamLimits

0x5a41,	// (0x00023bc5) main_image2_pane_g1

0x50cf,	// (0x00023253) smil2_video_pane_ParamLimits

0x50cf,	// (0x00023253) smil2_video_pane

0x0cf4,	// (0x0001ee78) aid_zoom_text_primary_cp

0x0ee5,	// (0x0001f069) popup_preview_fixed_window

0xa6b2,	// (0x00028836) im_reading_pane_g1

0x1535,	// (0x0001f6b9) cams2_bc_adjust_pane_cp_ParamLimits

0x1535,	// (0x0001f6b9) cams2_bc_adjust_pane_cp

0x1681,	// (0x0001f805) cams2_bc_adjust_pane_ParamLimits

0x1681,	// (0x0001f805) cams2_bc_adjust_pane

0xd6d2,	// (0x0002b856) cams2_bc_adjust_pane_g1

0x17c6,	// (0x0001f94a) cams2_slider_pane

0x17cf,	// (0x0001f953) cams2_slider_pane_g1

0x17d8,	// (0x0001f95c) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0002d826) cams2_slider_pane_g

0x0fb9,	// (0x0001f13d) calc_display_pane_ParamLimits

0x0fd7,	// (0x0001f15b) calc_paper_pane_ParamLimits

0x0ff3,	// (0x0001f177) grid_calc_pane_ParamLimits

0x12e8,	// (0x0001f46c) popup_clock_digital_window_t1_ParamLimits

0xb27d,	// (0x00029401) main_image_pane_t1

0x0f9f,	// (0x0001f123) aid_size_cell_calc_ParamLimits

0x0f9f,	// (0x0001f123) aid_size_cell_calc

0x13c5,	// (0x0001f549) popup_blid_sat_info2_window_ParamLimits

0x13c5,	// (0x0001f549) popup_blid_sat_info2_window

0xc624,	// (0x0002a7a8) aid_size_cell_blid

0xc62c,	// (0x0002a7b0) bg_popup_window_pane_cp07

0xc64f,	// (0x0002a7d3) grid_popup_blid_pane

0xc659,	// (0x0002a7dd) heading_pane_cp05_ParamLimits

0xc659,	// (0x0002a7dd) heading_pane_cp05

0xc723,	// (0x0002a8a7) cell_popup_blid_pane_ParamLimits

0xc723,	// (0x0002a8a7) cell_popup_blid_pane

0xc747,	// (0x0002a8cb) cell_popup_blid_pane_g1

0xc74f,	// (0x0002a8d3) cell_popup_blid_pane_t1

0x58c5,	// (0x00023a49) mup2_indicator_pane_ParamLimits

0x58c5,	// (0x00023a49) mup2_indicator_pane

0xa5b9,	// (0x0002873d) mup2_visualizer_osc_pane

0xc4f9,	// (0x0002a67d) mup2_visualizer_spec_pane_ParamLimits

0xc4f9,	// (0x0002a67d) mup2_visualizer_spec_pane

0x5a4d,	// (0x00023bd1) mup2_spec_half_pane

0x5a56,	// (0x00023bda) mup2_spec_half_pane_cp

0x5a60,	// (0x00023be4) mup2_spec_bar_pane_ParamLimits

0x5a60,	// (0x00023be4) mup2_spec_bar_pane

0xc49a,	// (0x0002a61e) mup2_spec_bar_pane_g1

0xc4a4,	// (0x0002a628) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0002d799) mup2_spec_bar_pane_g

0x5a7f,	// (0x00023c03) mup2_osc_middle_pane

0xc4b6,	// (0x0002a63a) mup2_visualizer_osc_pane_g1

0x9c92,	// (0x00027e16) popup_number_entry_window_t1_ParamLimits

0x9ca5,	// (0x00027e29) popup_number_entry_window_t2_ParamLimits

0x9cb7,	// (0x00027e3b) popup_number_entry_window_t3_ParamLimits

0x2728,	// (0x000208ac) popup_number_entry_window_t5_ParamLimits

0x2728,	// (0x000208ac) popup_number_entry_window_t5

0xf0c6,	// (0x0002d24a) popup_number_entry_window_t_ParamLimits

0x9cc9,	// (0x00027e4d) text_title_cp2_ParamLimits

0x1327,	// (0x0001f4ab) aid_hotspot_pointer_text2_pane

0x1371,	// (0x0001f4f5) main_viewer_pane_g9_ParamLimits

0x1371,	// (0x0001f4f5) main_viewer_pane_g9

0xa8eb,	// (0x00028a6f) cale_month_pane_t1_ParamLimits

0xa928,	// (0x00028aac) bg_cale_pane_ParamLimits

0xa940,	// (0x00028ac4) list_cale_pane_ParamLimits

0xa951,	// (0x00028ad5) listscroll_cale_day_pane_t1

0xa963,	// (0x00028ae7) scroll_pane_cp09_ParamLimits

0x4af9,	// (0x00022c7d) main_mup_eq_pane_t1_ParamLimits

0x4af9,	// (0x00022c7d) main_mup_eq_pane_t1

0x4b13,	// (0x00022c97) main_mup_eq_pane_t2_ParamLimits

0x4b13,	// (0x00022c97) main_mup_eq_pane_t2

0x4b2b,	// (0x00022caf) main_mup_eq_pane_t3_ParamLimits

0x4b2b,	// (0x00022caf) main_mup_eq_pane_t3

0x4b43,	// (0x00022cc7) main_mup_eq_pane_t4_ParamLimits

0x4b43,	// (0x00022cc7) main_mup_eq_pane_t4

0x4b5b,	// (0x00022cdf) main_mup_eq_pane_t5_ParamLimits

0x4b5b,	// (0x00022cdf) main_mup_eq_pane_t5

0x4b73,	// (0x00022cf7) main_mup_eq_pane_t6_ParamLimits

0x4b73,	// (0x00022cf7) main_mup_eq_pane_t6

0x4b87,	// (0x00022d0b) main_mup_eq_pane_t7_ParamLimits

0x4b87,	// (0x00022d0b) main_mup_eq_pane_t7

0x4b9b,	// (0x00022d1f) main_mup_eq_pane_t8_ParamLimits

0x4b9b,	// (0x00022d1f) main_mup_eq_pane_t8

0x4bb1,	// (0x00022d35) main_mup_eq_pane_t9_ParamLimits

0x4bb1,	// (0x00022d35) main_mup_eq_pane_t9

0x4bc9,	// (0x00022d4d) main_mup_eq_pane_t10_ParamLimits

0x4bc9,	// (0x00022d4d) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0002d5d5) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0002d5d5) main_mup_eq_pane_t

0x4c86,	// (0x00022e0a) mup_equalizer_pane_cp5_ParamLimits

0x4c9c,	// (0x00022e20) mup_equalizer_pane_cp6_ParamLimits

0x4cb4,	// (0x00022e38) mup_equalizer_pane_cp7_ParamLimits

0x0f3e,	// (0x0001f0c2) main_gallery_pane

0xc4bf,	// (0x0002a643) smil2_volume_pane

0xc4c7,	// (0x0002a64b) smil_status_volume_pane_g1_ParamLimits

0xc4da,	// (0x0002a65e) smil_status_volume_pane_g2_ParamLimits

0x1505,	// (0x0001f689) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0002d79e) smil_status_volume_pane_g_ParamLimits

0xc62c,	// (0x0002a7b0) bg_popup_window_pane_cp07_ParamLimits

0xc63a,	// (0x0002a7be) blid_firmament_pane

0x5a88,	// (0x00023c0c) aid_size_cell_gallery_ParamLimits

0x5a88,	// (0x00023c0c) aid_size_cell_gallery

0x5a96,	// (0x00023c1a) grid_gallery_pane_ParamLimits

0x5a96,	// (0x00023c1a) grid_gallery_pane

0x5aa6,	// (0x00023c2a) cell_gallery_pane_ParamLimits

0x5aa6,	// (0x00023c2a) cell_gallery_pane

0xc75d,	// (0x0002a8e1) bg_cell_gallery_focus_pane_ParamLimits

0xc75d,	// (0x0002a8e1) bg_cell_gallery_focus_pane

0xc76f,	// (0x0002a8f3) cell_gallery_pane_g1_ParamLimits

0xc76f,	// (0x0002a8f3) cell_gallery_pane_g1

0x5af4,	// (0x00023c78) cell_gallery_pane_g2_ParamLimits

0x5af4,	// (0x00023c78) cell_gallery_pane_g2

0x5b01,	// (0x00023c85) cell_gallery_pane_g3_ParamLimits

0x5b01,	// (0x00023c85) cell_gallery_pane_g3

0xc77b,	// (0x0002a8ff) cell_gallery_pane_g4_ParamLimits

0xc77b,	// (0x0002a8ff) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0002d84c) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0002d84c) cell_gallery_pane_g

0xc787,	// (0x0002a90b) bg_cell_gallery_focus_pane_g1

0xc78f,	// (0x0002a913) bg_cell_gallery_focus_pane_g2

0xc797,	// (0x0002a91b) bg_cell_gallery_focus_pane_g3

0xc79f,	// (0x0002a923) bg_cell_gallery_focus_pane_g4

0xc7a7,	// (0x0002a92b) bg_cell_gallery_focus_pane_g5

0xc7af,	// (0x0002a933) bg_cell_gallery_focus_pane_g6

0xc7b7,	// (0x0002a93b) bg_cell_gallery_focus_pane_g7

0xc7bf,	// (0x0002a943) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0002d855) bg_cell_gallery_focus_pane_g

0xc7c7,	// (0x0002a94b) aid_firma_cardinal

0xc7db,	// (0x0002a95f) blid_firmament_pane_t1

0xc7f2,	// (0x0002a976) blid_firmament_pane_t2

0xc809,	// (0x0002a98d) blid_firmament_pane_t3

0xc820,	// (0x0002a9a4) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0002d866) blid_firmament_pane_t

0xc837,	// (0x0002a9bb) blid_sat_info_pane

0xc847,	// (0x0002a9cb) blid_sat_info_pane_g1

0xc847,	// (0x0002a9cb) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0002d86f) blid_sat_info_pane_g

0xc851,	// (0x0002a9d5) blid_sat_info_pane_t1

0xc85f,	// (0x0002a9e3) smil2_volume_content_pane

0xc868,	// (0x0002a9ec) smil2_volume_pane_g1

0xa537,	// (0x000286bb) smil2_volume_content_pane_g1

0xc870,	// (0x0002a9f4) smil2_volume_content_pane_g2

0xc879,	// (0x0002a9fd) smil2_volume_content_pane_g3

0xc882,	// (0x0002aa06) smil2_volume_content_pane_g4

0xc88b,	// (0x0002aa0f) smil2_volume_content_pane_g5

0xc894,	// (0x0002aa18) smil2_volume_content_pane_g6

0xc89d,	// (0x0002aa21) smil2_volume_content_pane_g7

0xc8a6,	// (0x0002aa2a) smil2_volume_content_pane_g8

0xc8af,	// (0x0002aa33) smil2_volume_content_pane_g9

0xc8b8,	// (0x0002aa3c) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0002d874) smil2_volume_content_pane_g

0x2d72,	// (0x00020ef6) cale_week_day_heading_pane_t1_ParamLimits

0x2d8d,	// (0x00020f11) cale_week_day_heading_pane_t2_ParamLimits

0x2da8,	// (0x00020f2c) cale_week_day_heading_pane_t3_ParamLimits

0x2dc3,	// (0x00020f47) cale_week_day_heading_pane_t4_ParamLimits

0x2dde,	// (0x00020f62) cale_week_day_heading_pane_t5_ParamLimits

0x2df9,	// (0x00020f7d) cale_week_day_heading_pane_t6_ParamLimits

0x2e14,	// (0x00020f98) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0002d351) cale_week_day_heading_pane_t_ParamLimits

0xa55e,	// (0x000286e2) bg_cale_side_pane_ParamLimits

0x114a,	// (0x0001f2ce) cale_week_time_pane_t1_ParamLimits

0x1164,	// (0x0001f2e8) cale_week_time_pane_t2_ParamLimits

0x117e,	// (0x0001f302) cale_week_time_pane_t3_ParamLimits

0x1198,	// (0x0001f31c) cale_week_time_pane_t4_ParamLimits

0x11b2,	// (0x0001f336) cale_week_time_pane_t5_ParamLimits

0x11cc,	// (0x0001f350) cale_week_time_pane_t6_ParamLimits

0x11ec,	// (0x0001f370) cale_week_time_pane_t7_ParamLimits

0x120e,	// (0x0001f392) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0002d360) cale_week_time_pane_t_ParamLimits

0x2e2f,	// (0x00020fb3) cell_cale_week_pane_g2_ParamLimits

0xa55e,	// (0x000286e2) bg_cale_side_pane_cp01_ParamLimits

0x41a5,	// (0x00022329) cale_month_week_pane_t1_ParamLimits

0x41be,	// (0x00022342) cale_month_week_pane_t2_ParamLimits

0x41d7,	// (0x0002235b) cale_month_week_pane_t3_ParamLimits

0x41f0,	// (0x00022374) cale_month_week_pane_t4_ParamLimits

0x420b,	// (0x0002238f) cale_month_week_pane_t5_ParamLimits

0x422c,	// (0x000223b0) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0002d435) cale_month_week_pane_t_ParamLimits

0x123c,	// (0x0001f3c0) cell_cale_month_pane_g1_ParamLimits

0x0f3e,	// (0x0001f0c2) main_cale_event_viewer_pane

0x9c68,	// (0x00027dec) listscroll_cale_event_viewer_pane

0xc8c1,	// (0x0002aa45) list_cale_ev_pane

0xc8c9,	// (0x0002aa4d) scroll_pane_cp023

0xc8d5,	// (0x0002aa59) field_cale_ev_pane_ParamLimits

0xc8d5,	// (0x0002aa59) field_cale_ev_pane

0xc8f3,	// (0x0002aa77) field_cale_ev_content_pane_ParamLimits

0xc8f3,	// (0x0002aa77) field_cale_ev_content_pane

0xc8ff,	// (0x0002aa83) field_cale_ev_pane_g1_ParamLimits

0xc8ff,	// (0x0002aa83) field_cale_ev_pane_g1

0xc90b,	// (0x0002aa8f) field_cale_ev_pane_g2_ParamLimits

0xc90b,	// (0x0002aa8f) field_cale_ev_pane_g2

0xc923,	// (0x0002aaa7) field_cale_ev_pane_g3_ParamLimits

0xc923,	// (0x0002aaa7) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0002d889) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0002d889) field_cale_ev_pane_g

0xc93b,	// (0x0002aabf) field_cale_ev_pane_t1_ParamLimits

0xc93b,	// (0x0002aabf) field_cale_ev_pane_t1

0xa540,	// (0x000286c4) field_cale_ev_content_pane_t1_ParamLimits

0xa540,	// (0x000286c4) field_cale_ev_content_pane_t1

0xb163,	// (0x000292e7) bg_button_pane_cp01

0x2afd,	// (0x00020c81) listscroll_cale_week_pane_ParamLimits

0xa4d4,	// (0x00028658) popup_toolbar_window_cp01

0xa4fa,	// (0x0002867e) listscroll_cale_week_pane_t1_ParamLimits

0x2afd,	// (0x00020c81) listscroll_cale_day_pane_ParamLimits

0xa4d4,	// (0x00028658) popup_toolbar_window_cp02

0xa951,	// (0x00028ad5) listscroll_cale_day_pane_t1_ParamLimits

0x2afd,	// (0x00020c81) main_cale_month_pane_ParamLimits

0x14c8,	// (0x0001f64c) popup_toolbar_window_cp03_ParamLimits

0x14c8,	// (0x0001f64c) popup_toolbar_window_cp03

0x4fe5,	// (0x00023169) main_image_pane_g2_ParamLimits

0x4fe5,	// (0x00023169) main_image_pane_g2

0x4ff1,	// (0x00023175) main_image_pane_g3_ParamLimits

0x4ff1,	// (0x00023175) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0002d667) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0002d667) main_image_pane_g

0xb27d,	// (0x00029401) main_image_pane_t1_ParamLimits

0x4ffd,	// (0x00023181) main_image_pane_t2_ParamLimits

0x4ffd,	// (0x00023181) main_image_pane_t2

0x500f,	// (0x00023193) main_image_pane_t3_ParamLimits

0x500f,	// (0x00023193) main_image_pane_t3

0x5021,	// (0x000231a5) main_image_pane_t4_ParamLimits

0x5021,	// (0x000231a5) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0002d66e) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0002d66e) main_image_pane_t

0x5033,	// (0x000231b7) popup_image_details_window_cp01

0x503d,	// (0x000231c1) popup_toobar_trans_pane_cp01_ParamLimits

0x503d,	// (0x000231c1) popup_toobar_trans_pane_cp01

0x1418,	// (0x0001f59c) popup_image_details_window_ParamLimits

0x1418,	// (0x0001f59c) popup_image_details_window

0x1426,	// (0x0001f5aa) popup_image_focus_window

0x1527,	// (0x0001f6ab) camera2_autofocus_pane_ParamLimits

0x1527,	// (0x0001f6ab) camera2_autofocus_pane

0x9c68,	// (0x00027dec) bg_popup_sub_pane_cp06

0xc952,	// (0x0002aad6) popup_image_focus_window_g1

0xc95a,	// (0x0002aade) popup_image_focus_window_g2

0xc962,	// (0x0002aae6) popup_image_focus_window_g3

0xc96a,	// (0x0002aaee) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0002d890) popup_image_focus_window_g

0xc972,	// (0x0002aaf6) popup_image_focus_window_t1

0xc980,	// (0x0002ab04) popup_image_focus_window_t2

0xc990,	// (0x0002ab14) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0002d899) popup_image_focus_window_t

0xc99e,	// (0x0002ab22) camera2_autofocus_pane_g1

0xa529,	// (0x000286ad) bg_tb_trans_pane_cp01

0xc9ac,	// (0x0002ab30) popup_image_details_window_g1

0xc9bf,	// (0x0002ab43) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0002d8ab) popup_image_details_window_g

0xc9e8,	// (0x0002ab6c) popup_image_details_window_t1

0xc9fa,	// (0x0002ab7e) popup_image_details_window_t2

0xca13,	// (0x0002ab97) popup_image_details_window_t3

0xca27,	// (0x0002abab) popup_image_details_window_t4

0xca42,	// (0x0002abc6) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0002d8b2) popup_image_details_window_t

0xa39d,	// (0x00028521) bg_calc_paper_pane_ParamLimits

0x0f3e,	// (0x0001f0c2) grid_highlight_pane_cp013

0x101f,	// (0x0001f1a3) list_calc_pane_ParamLimits

0x1031,	// (0x0001f1b5) scroll_pane_cp024

0xa3b1,	// (0x00028535) bg_calc_display_pane_ParamLimits

0x1039,	// (0x0001f1bd) calc_display_pane_t1_ParamLimits

0x104e,	// (0x0001f1d2) calc_display_pane_t2_ParamLimits

0x1063,	// (0x0001f1e7) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0002d2d1) calc_display_pane_t_ParamLimits

0x10cc,	// (0x0001f250) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0002d2ee) cell_calc_pane_g

0x10d5,	// (0x0001f259) cell_calc_pane_t1

0xa410,	// (0x00028594) grid_highlight_pane_cp02_ParamLimits

0xa426,	// (0x000285aa) toolbar_button_pane_cp01_ParamLimits

0xa426,	// (0x000285aa) toolbar_button_pane_cp01

0xb2c2,	// (0x00029446) temp_image_control_pane_ParamLimits

0xb2c2,	// (0x00029446) temp_image_control_pane

0x1394,	// (0x0001f518) main_mp3_pane

0xca5c,	// (0x0002abe0) temp_image_control_pane_g1_ParamLimits

0xca5c,	// (0x0002abe0) temp_image_control_pane_g1

0xca6a,	// (0x0002abee) temp_image_control_pane_g2_ParamLimits

0xca6a,	// (0x0002abee) temp_image_control_pane_g2

0xca7c,	// (0x0002ac00) temp_image_control_pane_g3_ParamLimits

0xca7c,	// (0x0002ac00) temp_image_control_pane_g3

0x5b3e,	// (0x00023cc2) temp_image_control_pane_g4_ParamLimits

0x5b3e,	// (0x00023cc2) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0002d8bd) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0002d8bd) temp_image_control_pane_g

0xca5c,	// (0x0002abe0) main_mp3_pane_g1

0x5b4f,	// (0x00023cd3) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0002d8c6) main_mp3_pane_g

0xcabf,	// (0x0002ac43) main_mp3_pane_t1

0xa5c1,	// (0x00028745) main_camera_pane_g8_ParamLimits

0xa5c1,	// (0x00028745) main_camera_pane_g8

0x30af,	// (0x00021233) main_video_pane_g7_ParamLimits

0x30af,	// (0x00021233) main_video_pane_g7

0x166f,	// (0x0001f7f3) main_camera2_pane_t7_ParamLimits

0x166f,	// (0x0001f7f3) main_camera2_pane_t7

0xa709,	// (0x0002888d) scroll_pane_cp025_ParamLimits

0xa709,	// (0x0002888d) scroll_pane_cp025

0xa71d,	// (0x000288a1) scroll_pane_cp026_ParamLimits

0xa71d,	// (0x000288a1) scroll_pane_cp026

0xa72c,	// (0x000288b0) wml_content_pane_ParamLimits

0x0f3e,	// (0x0001f0c2) main_touch_calib_pane

0x5bf3,	// (0x00023d77) main_touch_calib_pane_g1

0x5bff,	// (0x00023d83) main_touch_calib_pane_g2

0x5c0b,	// (0x00023d8f) main_touch_calib_pane_g3

0x5c17,	// (0x00023d9b) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0002d8e4) main_touch_calib_pane_g

0x5c23,	// (0x00023da7) main_touch_calib_pane_t1

0x5c3c,	// (0x00023dc0) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0002d8ed) main_touch_calib_pane_t

0xae9d,	// (0x00029021) mup_progress_pane_cp02

0xaed2,	// (0x00029056) navi_pane_g1

0xaf8d,	// (0x00029111) navi_pane_mp_t3

0x1394,	// (0x0001f518) main_mp3_pane_ParamLimits

0x5570,	// (0x000236f4) navi_pane_ParamLimits

0xca5c,	// (0x0002abe0) main_mp3_pane_g1_ParamLimits

0x5b4f,	// (0x00023cd3) main_mp3_pane_g2_ParamLimits

0x5b5b,	// (0x00023cdf) main_mp3_pane_g3_ParamLimits

0x5b5b,	// (0x00023cdf) main_mp3_pane_g3

0x5b67,	// (0x00023ceb) main_mp3_pane_g4_ParamLimits

0x5b67,	// (0x00023ceb) main_mp3_pane_g4

0xca8c,	// (0x0002ac10) main_mp3_pane_g5_ParamLimits

0xca8c,	// (0x0002ac10) main_mp3_pane_g5

0xca9a,	// (0x0002ac1e) main_mp3_pane_g6_ParamLimits

0xca9a,	// (0x0002ac1e) main_mp3_pane_g6

0xcaa7,	// (0x0002ac2b) main_mp3_pane_g7_ParamLimits

0xcaa7,	// (0x0002ac2b) main_mp3_pane_g7

0xcab3,	// (0x0002ac37) main_mp3_pane_g8_ParamLimits

0xcab3,	// (0x0002ac37) main_mp3_pane_g8

0xf742,	// (0x0002d8c6) main_mp3_pane_g_ParamLimits

0x5b73,	// (0x00023cf7) main_mp3_pane_t2

0x5b83,	// (0x00023d07) main_mp3_pane_t3

0xcacd,	// (0x0002ac51) main_mp3_pane_t4

0xcadb,	// (0x0002ac5f) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0002d8d7) main_mp3_pane_t

0xcae9,	// (0x0002ac6d) mup_progress_pane_cp01

0x0cf4,	// (0x0001ee78) aid_zoom_text_secondary2

0xc8c1,	// (0x0002aa45) list_cale_ev2_pane

0xc8c9,	// (0x0002aa4d) scroll_pane_cp023_ParamLimits

0x5c97,	// (0x00023e1b) field_cale_ev2_pane_ParamLimits

0x5c97,	// (0x00023e1b) field_cale_ev2_pane

0xcaf1,	// (0x0002ac75) field_cale_ev2_pane_g1_ParamLimits

0xcaf1,	// (0x0002ac75) field_cale_ev2_pane_g1

0xcafd,	// (0x0002ac81) field_cale_ev2_pane_g2_ParamLimits

0xcafd,	// (0x0002ac81) field_cale_ev2_pane_g2

0xcb15,	// (0x0002ac99) field_cale_ev2_pane_g3_ParamLimits

0xcb15,	// (0x0002ac99) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0002d8f8) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0002d8f8) field_cale_ev2_pane_g

0xcb39,	// (0x0002acbd) field_cale_ev2_pane_t1_ParamLimits

0xcb39,	// (0x0002acbd) field_cale_ev2_pane_t1

0xcb50,	// (0x0002acd4) field_cale_ev2_pane_t2_ParamLimits

0xcb50,	// (0x0002acd4) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0002d901) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0002d901) field_cale_ev2_pane_t

0x4ec6,	// (0x0002304a) main_postcard_pane_g5_ParamLimits

0x4ec6,	// (0x0002304a) main_postcard_pane_g5

0x4ed4,	// (0x00023058) main_postcard_pane_g6_ParamLimits

0x4ed4,	// (0x00023058) main_postcard_pane_g6

0x2ef9,	// (0x0002107d) camera2_autofocus_pane_cp_ParamLimits

0x2ef9,	// (0x0002107d) camera2_autofocus_pane_cp

0x1394,	// (0x0001f518) main_mup3_pane

0x5d00,	// (0x00023e84) main_mup3_pane_g1_ParamLimits

0x5d00,	// (0x00023e84) main_mup3_pane_g1

0x5d21,	// (0x00023ea5) main_mup3_pane_g2_ParamLimits

0x5d21,	// (0x00023ea5) main_mup3_pane_g2

0x5d9b,	// (0x00023f1f) main_mup3_pane_g3_ParamLimits

0x5d9b,	// (0x00023f1f) main_mup3_pane_g3

0x5dde,	// (0x00023f62) main_mup3_pane_g4_ParamLimits

0x5dde,	// (0x00023f62) main_mup3_pane_g4

0x5e21,	// (0x00023fa5) main_mup3_pane_g5_ParamLimits

0x5e21,	// (0x00023fa5) main_mup3_pane_g5

0x5e64,	// (0x00023fe8) main_mup3_pane_g6_ParamLimits

0x5e64,	// (0x00023fe8) main_mup3_pane_g6

0xcb65,	// (0x0002ace9) main_mup3_pane_g7_ParamLimits

0xcb65,	// (0x0002ace9) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0002d911) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0002d911) main_mup3_pane_g

0x5eda,	// (0x0002405e) main_mup3_pane_t1_ParamLimits

0x5eda,	// (0x0002405e) main_mup3_pane_t1

0x5f49,	// (0x000240cd) main_mup3_pane_t2_ParamLimits

0x5f49,	// (0x000240cd) main_mup3_pane_t2

0x6012,	// (0x00024196) main_mup3_pane_t4_ParamLimits

0x6012,	// (0x00024196) main_mup3_pane_t4

0x6060,	// (0x000241e4) main_mup3_pane_t5_ParamLimits

0x6060,	// (0x000241e4) main_mup3_pane_t5

0x6110,	// (0x00024294) main_mup3_pane_t6_ParamLimits

0x6110,	// (0x00024294) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0002d922) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0002d922) main_mup3_pane_t

0x61bc,	// (0x00024340) mup3_progress_pane_ParamLimits

0x61bc,	// (0x00024340) mup3_progress_pane

0x6230,	// (0x000243b4) popup_mup3_control_window_ParamLimits

0x6230,	// (0x000243b4) popup_mup3_control_window

0xcb73,	// (0x0002acf7) popup_mup3_text_window

0x6249,	// (0x000243cd) mup3_progress_pane_t1

0x6268,	// (0x000243ec) mup3_progress_pane_t2

0xcb7b,	// (0x0002acff) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0002d92f) mup3_progress_pane_t

0xcb98,	// (0x0002ad1c) mup_progress_pane_cp03

0x9c68,	// (0x00027dec) bg_tb_trans_pane_cp04

0x6287,	// (0x0002440b) mup3_volume_pane

0x628f,	// (0x00024413) popup_mup3_control_window_g1

0x6298,	// (0x0002441c) mup3_volume_pane_g1

0x62a1,	// (0x00024425) mup3_volume_pane_g2

0x62aa,	// (0x0002442e) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0002d936) mup3_volume_pane_g

0x9c68,	// (0x00027dec) bg_tb_trans_pane_cp03

0xcba8,	// (0x0002ad2c) popup_mup3_text_window_g1

0xcbb0,	// (0x0002ad34) popup_mup3_text_window_t1

0xa3f9,	// (0x0002857d) list_calc_item_pane_g1_ParamLimits

0xc59a,	// (0x0002a71e) mup_volume_pane_cp_g1

0x5c55,	// (0x00023dd9) main_touch_calib_pane_t3

0x5c6b,	// (0x00023def) main_touch_calib_pane_t4

0x5c81,	// (0x00023e05) main_touch_calib_pane_t5

0x0cac,	// (0x0001ee30) aid_cell_size_toolbar2

0x0cb4,	// (0x0001ee38) aid_popup3_width_pane

0x0cf4,	// (0x0001ee78) aid_zoom_text_msg_primary

0x2ed8,	// (0x0002105c) vorec_t7

0xa3bd,	// (0x00028541) bg_calc_paper_pane_g1_ParamLimits

0xa3c9,	// (0x0002854d) bg_calc_paper_pane_g2_ParamLimits

0xa3d5,	// (0x00028559) bg_calc_paper_pane_g3_ParamLimits

0xa3e1,	// (0x00028565) bg_calc_paper_pane_g4_ParamLimits

0xa3ed,	// (0x00028571) bg_calc_paper_pane_g5_ParamLimits

0x29af,	// (0x00020b33) bg_calc_paper_pane_g6_ParamLimits

0x29c0,	// (0x00020b44) bg_calc_paper_pane_g7_ParamLimits

0x29d1,	// (0x00020b55) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0002d2d8) bg_calc_paper_pane_g_ParamLimits

0x29e2,	// (0x00020b66) calc_bg_paper_pane_g9_ParamLimits

0x2fe0,	// (0x00021164) image_qvga_pane_ParamLimits

0x2fe0,	// (0x00021164) image_qvga_pane

0xa2e0,	// (0x00028464) bg_popup_sub_pane_cp04_ParamLimits

0xb1f9,	// (0x0002937d) popup_mup_playback_window_g1_ParamLimits

0xb205,	// (0x00029389) popup_mup_playback_window_t1_ParamLimits

0xb21a,	// (0x0002939e) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0002d662) popup_mup_playback_window_t_ParamLimits

0x57c5,	// (0x00023949) main_mup2_pane_g3_ParamLimits

0x57c5,	// (0x00023949) main_mup2_pane_g3

0x33ad,	// (0x00021531) popup_toolbar_window_cp04

0xb60f,	// (0x00029793) popup_call2_audio_second_window_g3_ParamLimits

0xb60f,	// (0x00029793) popup_call2_audio_second_window_g3

0xba19,	// (0x00029b9d) popup_call2_audio_first_window_g4_ParamLimits

0xba19,	// (0x00029b9d) popup_call2_audio_first_window_g4

0xc098,	// (0x0002a21c) popup_call2_audio_in_window_g4_ParamLimits

0xc098,	// (0x0002a21c) popup_call2_audio_in_window_g4

0x4fd8,	// (0x0002315c) aid_area_sk_bg_cut_ParamLimits

0x4fd8,	// (0x0002315c) aid_area_sk_bg_cut

0xb22f,	// (0x000293b3) aid_area_sk_bg_cut_2_ParamLimits

0xb22f,	// (0x000293b3) aid_area_sk_bg_cut_2

0x5ae4,	// (0x00023c68) aid_placing_details_win

0x5aec,	// (0x00023c70) aid_placing_details_win_2

0xc99e,	// (0x0002ab22) camera2_autofocus_pane_g1_ParamLimits

0x0ed6,	// (0x0001f05a) popup_fixed_preview_cale_window_ParamLimits

0x0ed6,	// (0x0001f05a) popup_fixed_preview_cale_window

0xb00b,	// (0x0002918f) navi_slider_pane_g3

0xb014,	// (0x00029198) navi_slider_pane_g4

0xb01d,	// (0x000291a1) navi_slider_pane_g5

0xb00b,	// (0x0002918f) navi_slider_pane_g6

0x130e,	// (0x0001f492) navi_slider_pane_g7

0xb130,	// (0x000292b4) mup_scale_pane_g3

0xb139,	// (0x000292bd) mup_scale_pane_g4

0xb142,	// (0x000292c6) mup_scale_pane_g5

0x4ccc,	// (0x00022e50) mup_scale_pane_g6

0x4cd5,	// (0x00022e59) mup_scale_pane_g7

0xb00b,	// (0x0002918f) cams2_slider_pane_g3

0xc61c,	// (0x0002a7a0) cams2_slider_pane_g4

0x17e1,	// (0x0001f965) cams2_slider_pane_g5

0xb00b,	// (0x0002918f) cams2_slider_pane_g6

0x17e9,	// (0x0001f96d) cams2_slider_pane_g7

0xc847,	// (0x0002a9cb) camera2_autofocus_pane_cp_g1

0xc433,	// (0x0002a5b7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc433,	// (0x0002a5b7) bg_popup_preview_window_pane_cp02

0xcbbe,	// (0x0002ad42) list_fp_cale_pane_ParamLimits

0xcbbe,	// (0x0002ad42) list_fp_cale_pane

0xcbca,	// (0x0002ad4e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcbca,	// (0x0002ad4e) popup_fixed_preview_cale_window_t1

0x62b3,	// (0x00024437) popup_fixed_preview_cale_window_t2_ParamLimits

0x62b3,	// (0x00024437) popup_fixed_preview_cale_window_t2

0x62c8,	// (0x0002444c) popup_fixed_preview_cale_window_t3_ParamLimits

0x62c8,	// (0x0002444c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0002d93d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0002d93d) popup_fixed_preview_cale_window_t

0x62dd,	// (0x00024461) list_single_fp_cale_pane_ParamLimits

0x62dd,	// (0x00024461) list_single_fp_cale_pane

0xcbe8,	// (0x0002ad6c) list_single_fp_cale_pane_g1_ParamLimits

0xcbe8,	// (0x0002ad6c) list_single_fp_cale_pane_g1

0xcbf4,	// (0x0002ad78) list_single_fp_cale_pane_g2_ParamLimits

0xcbf4,	// (0x0002ad78) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0002d944) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0002d944) list_single_fp_cale_pane_g

0xcc0d,	// (0x0002ad91) list_single_fp_cale_pane_t1_ParamLimits

0xcc0d,	// (0x0002ad91) list_single_fp_cale_pane_t1

0xcc1f,	// (0x0002ada3) list_single_fp_cale_pane_t2_ParamLimits

0xcc1f,	// (0x0002ada3) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0002d94b) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0002d94b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f3e,	// (0x0001f0c2) main_dialer_pane

0x62f0,	// (0x00024474) aid_cell_size_keypad

0x62fa,	// (0x0002447e) dialer_ne_pane

0x6304,	// (0x00024488) grid_dialer_command_1_pane

0x630c,	// (0x00024490) grid_dialer_command_2_pane

0x6314,	// (0x00024498) grid_dialer_keypad_pane

0x6328,	// (0x000244ac) bg_popup_call_pane_cp06_ParamLimits

0x6328,	// (0x000244ac) bg_popup_call_pane_cp06

0x6334,	// (0x000244b8) dialer_ne_clear_pane_ParamLimits

0x6334,	// (0x000244b8) dialer_ne_clear_pane

0xcc52,	// (0x0002add6) dialer_ne_pane_g1

0xcc5a,	// (0x0002adde) dialer_ne_pane_t1_ParamLimits

0xcc5a,	// (0x0002adde) dialer_ne_pane_t1

0x6340,	// (0x000244c4) dialer_ne_pane_t2_ParamLimits

0x6340,	// (0x000244c4) dialer_ne_pane_t2

0x635d,	// (0x000244e1) dialer_ne_pane_t3_ParamLimits

0x635d,	// (0x000244e1) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0002d950) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0002d950) dialer_ne_pane_t

0x6381,	// (0x00024505) dialer_ne_pane_t3_copy1_ParamLimits

0x6381,	// (0x00024505) dialer_ne_pane_t3_copy1

0x63a5,	// (0x00024529) cell_dialer_keypad_pane_ParamLimits

0x63a5,	// (0x00024529) cell_dialer_keypad_pane

0x63bc,	// (0x00024540) cell_dialer_command_1_pane_ParamLimits

0x63bc,	// (0x00024540) cell_dialer_command_1_pane

0x63d2,	// (0x00024556) cell_dialer_command_2_pane_ParamLimits

0x63d2,	// (0x00024556) cell_dialer_command_2_pane

0xcc6c,	// (0x0002adf0) bg_button_pane_cp02_ParamLimits

0xcc6c,	// (0x0002adf0) bg_button_pane_cp02

0x63e1,	// (0x00024565) cell_dialer_keypad_pane_g1_ParamLimits

0x63e1,	// (0x00024565) cell_dialer_keypad_pane_g1

0xcc6c,	// (0x0002adf0) bg_button_pane_cp03_ParamLimits

0xcc6c,	// (0x0002adf0) bg_button_pane_cp03

0x63f6,	// (0x0002457a) cell_dialer_command_1_pane_g1_ParamLimits

0x63f6,	// (0x0002457a) cell_dialer_command_1_pane_g1

0xcc78,	// (0x0002adfc) bg_button_pane_cp04

0x640a,	// (0x0002458e) cell_dialer_command_2_pane_g1

0xa5b9,	// (0x0002873d) bg_button_pane_cp06

0xcc80,	// (0x0002ae04) dialer_ne_clear_pane_g1

0xaede,	// (0x00029062) navi_pane_g2

0xaf0c,	// (0x00029090) navi_pane_g3

0x0002,

0xf3e1,	// (0x0002d565) navi_pane_g

0xaf9b,	// (0x0002911f) navi_pane_mv_g2

0xafc2,	// (0x00029146) navi_pane_mv_g5

0x487a,	// (0x000229fe) navi_pane_mv_t1

0xa3b1,	// (0x00028535) main_clock2_pane

0xd145,	// (0x0002b2c9) main_clock2_list_pane_ParamLimits

0xd145,	// (0x0002b2c9) main_clock2_list_pane

0x6466,	// (0x000245ea) main_clock2_pane_t1_ParamLimits

0x6466,	// (0x000245ea) main_clock2_pane_t1

0x6494,	// (0x00024618) main_clock2_pane_t2_ParamLimits

0x6494,	// (0x00024618) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0002d95c) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0002d95c) main_clock2_pane_t

0x64f9,	// (0x0002467d) popup_clock_analogue_window_cp03_ParamLimits

0x64f9,	// (0x0002467d) popup_clock_analogue_window_cp03

0x6517,	// (0x0002469b) popup_clock_digital_window_cp02_ParamLimits

0x6517,	// (0x0002469b) popup_clock_digital_window_cp02

0x658c,	// (0x00024710) main_clock2_list_single_pane_ParamLimits

0x658c,	// (0x00024710) main_clock2_list_single_pane

0xa5b9,	// (0x0002873d) list_highlight_pane_cp05

0xccba,	// (0x0002ae3e) main_clock2_list_single_pane_t1

0x33ad,	// (0x00021531) popup_toolbar_window_cp04_ParamLimits

0x5b0e,	// (0x00023c92) camera2_autofocus_pane_g2_ParamLimits

0x5b0e,	// (0x00023c92) camera2_autofocus_pane_g2

0x5b1a,	// (0x00023c9e) camera2_autofocus_pane_g3_ParamLimits

0x5b1a,	// (0x00023c9e) camera2_autofocus_pane_g3

0x5b26,	// (0x00023caa) camera2_autofocus_pane_g4_ParamLimits

0x5b26,	// (0x00023caa) camera2_autofocus_pane_g4

0x5b32,	// (0x00023cb6) camera2_autofocus_pane_g5_ParamLimits

0x5b32,	// (0x00023cb6) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0002d8a0) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0002d8a0) camera2_autofocus_pane_g

0x5cc1,	// (0x00023e45) camera2_autofocus_pane_cp_g2

0x5cc9,	// (0x00023e4d) camera2_autofocus_pane_cp_g3

0x5cd1,	// (0x00023e55) camera2_autofocus_pane_cp_g4

0x5cd9,	// (0x00023e5d) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0002d906) camera2_autofocus_pane_cp_g

0x6320,	// (0x000244a4) popup_dialer_spcha_window

0x9c68,	// (0x00027dec) bg_popup_sub_pane_cp07

0xccc8,	// (0x0002ae4c) list_spcha_pane

0xccd0,	// (0x0002ae54) list_single_spcha_pane_ParamLimits

0xccd0,	// (0x0002ae54) list_single_spcha_pane

0x9c68,	// (0x00027dec) list_highlight_pane_cp06

0xcce1,	// (0x0002ae65) list_single_spcha_pane_t1

0xbe42,	// (0x00029fc6) popup_call2_audio_out_window_g4_ParamLimits

0xbe42,	// (0x00029fc6) popup_call2_audio_out_window_g4

0x0f3e,	// (0x0001f0c2) main_imed2_pane

0x142e,	// (0x0001f5b2) popup_imed_adjust2_window

0x1441,	// (0x0001f5c5) popup_imed_trans_window_ParamLimits

0x1441,	// (0x0001f5c5) popup_imed_trans_window

0xc685,	// (0x0002a809) popup_blid_sat_info2_window_t1

0xc693,	// (0x0002a817) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0002d835) popup_blid_sat_info2_window_t

0x659e,	// (0x00024722) aid_size_cell_colour_35

0x65b8,	// (0x0002473c) aid_size_cell_colour_112

0x65cf,	// (0x00024753) aid_size_cell_effect

0xa529,	// (0x000286ad) bg_tb_trans_pane_cp02

0xad9a,	// (0x00028f1e) heading_imed_pane

0x65e9,	// (0x0002476d) listscroll_imed_pane

0xccef,	// (0x0002ae73) heading_imed_pane_g1

0xccf7,	// (0x0002ae7b) heading_imed_pane_t1

0xcd05,	// (0x0002ae89) grid_imed_colour_35_pane_ParamLimits

0xcd05,	// (0x0002ae89) grid_imed_colour_35_pane

0x65f5,	// (0x00024779) grid_imed_effect_pane

0xcd1d,	// (0x0002aea1) list_imed_aspect_pane

0x6605,	// (0x00024789) scroll_pane_cp027_ParamLimits

0x6605,	// (0x00024789) scroll_pane_cp027

0x6611,	// (0x00024795) cell_imed_effect_pane_ParamLimits

0x6611,	// (0x00024795) cell_imed_effect_pane

0xcd25,	// (0x0002aea9) cell_imed_colour_pane_ParamLimits

0xcd25,	// (0x0002aea9) cell_imed_colour_pane

0xcd67,	// (0x0002aeeb) cell_imed_colour_pane_g1_ParamLimits

0xcd67,	// (0x0002aeeb) cell_imed_colour_pane_g1

0xcd78,	// (0x0002aefc) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd78,	// (0x0002aefc) hgihlgiht_grid_pane_cp016

0x6629,	// (0x000247ad) cell_imed_effect_pane_g1

0x6631,	// (0x000247b5) grid_highlight_pane_cp017

0xcd89,	// (0x0002af0d) list_imed_single_pane_ParamLimits

0xcd89,	// (0x0002af0d) list_imed_single_pane

0x9c68,	// (0x00027dec) list_highlight_pane_cp07

0xcd9e,	// (0x0002af22) list_imed_aspect_pane_comp1_t1

0xc43f,	// (0x0002a5c3) bg_tb_trans_pane_cp05

0xcdc0,	// (0x0002af44) popup_imed_adjust2_window_g1

0xcde7,	// (0x0002af6b) popup_imed_adjust2_window_t1

0xcdff,	// (0x0002af83) slider_imed_adjust_pane

0xce13,	// (0x0002af97) slider_imed_adjust_pane_g1

0xce23,	// (0x0002afa7) slider_imed_adjust_pane_g2

0xce33,	// (0x0002afb7) slider_imed_adjust_pane_g3

0xce44,	// (0x0002afc8) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0002d979) slider_imed_adjust_pane_g

0x663a,	// (0x000247be) aid_size_cell_clipart2

0x6646,	// (0x000247ca) grid_imed_clipart_pane

0xce55,	// (0x0002afd9) scroll_pane_cp031

0x6650,	// (0x000247d4) cell_imed_clipart_pane_ParamLimits

0x6650,	// (0x000247d4) cell_imed_clipart_pane

0x6673,	// (0x000247f7) cell_imed_clipart_pane_g1

0x9c68,	// (0x00027dec) grid_highlight_pane_cp014

0x6448,	// (0x000245cc) main_clock2_pane_g1_ParamLimits

0x6448,	// (0x000245cc) main_clock2_pane_g1

0x6533,	// (0x000246b7) aid_call2_pane_cp10

0x6545,	// (0x000246c9) aid_call_pane_cp10

0xae3d,	// (0x00028fc1) popup_clock_analogue_window_cp10_g1

0xae3d,	// (0x00028fc1) popup_clock_analogue_window_cp10_g2

0x6557,	// (0x000246db) popup_clock_analogue_window_cp10_g3

0x6557,	// (0x000246db) popup_clock_analogue_window_cp10_g4

0xae3d,	// (0x00028fc1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0002d967) popup_clock_analogue_window_cp10_g

0x656d,	// (0x000246f1) popup_clock_analogue_window_cp10_t1

0x17f2,	// (0x0001f976) clock_digital_number_pane_cp10_ParamLimits

0x17f2,	// (0x0001f976) clock_digital_number_pane_cp10

0x180c,	// (0x0001f990) clock_digital_number_pane_cp11_ParamLimits

0x180c,	// (0x0001f990) clock_digital_number_pane_cp11

0x1826,	// (0x0001f9aa) clock_digital_number_pane_cp12_ParamLimits

0x1826,	// (0x0001f9aa) clock_digital_number_pane_cp12

0x1840,	// (0x0001f9c4) clock_digital_number_pane_cp13_ParamLimits

0x1840,	// (0x0001f9c4) clock_digital_number_pane_cp13

0x185a,	// (0x0001f9de) clock_digital_separator_pane_cp10_ParamLimits

0x185a,	// (0x0001f9de) clock_digital_separator_pane_cp10

0x1874,	// (0x0001f9f8) popup_clock_digital_window_cp02_t1_ParamLimits

0x1874,	// (0x0001f9f8) popup_clock_digital_window_cp02_t1

0xa2d8,	// (0x0002845c) clock_digital_number_pane_cp10_g1

0xa2d8,	// (0x0002845c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0002d982) clock_digital_number_pane_cp10_g

0xa2d8,	// (0x0002845c) clock_digital_separator_pane_cp10_g1

0xa2d8,	// (0x0002845c) clock_digital_separator_pane_g2_cp10

0xafca,	// (0x0002914e) navi_pane_vded_g4

0xafd3,	// (0x00029157) navi_pane_vded_g5

0xafdc,	// (0x00029160) navi_pane_vded_t1

0x0f3e,	// (0x0001f0c2) main_vded_pane

0x667c,	// (0x00024800) main_vded_pane_g1

0x6688,	// (0x0002480c) main_vded_pane_g2

0x6692,	// (0x00024816) main_vded_pane_g3

0x0002,

0xf803,	// (0x0002d987) main_vded_pane_g

0x669c,	// (0x00024820) main_vded_pane_t1

0x66aa,	// (0x0002482e) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0002d98e) main_vded_pane_t

0x66b8,	// (0x0002483c) vded_slider_pane

0x66c2,	// (0x00024846) vded_video_pane

0xce5d,	// (0x0002afe1) vded_video_pane_g1

0x66cc,	// (0x00024850) vded_video_pane_g2

0xc847,	// (0x0002a9cb) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0002d993) vded_video_pane_g

0xce67,	// (0x0002afeb) vded_slider_pane_g1

0xc59a,	// (0x0002a71e) vded_slider_pane_g2

0xce70,	// (0x0002aff4) vded_slider_pane_g3

0xce79,	// (0x0002affd) vded_slider_pane_g4

0xce82,	// (0x0002b006) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0002d99a) vded_slider_pane_g

0x6222,	// (0x000243a6) mup3_rocker_pane_ParamLimits

0x6222,	// (0x000243a6) mup3_rocker_pane

0x66d5,	// (0x00024859) mup3_control_keys_pane_g1

0x66dd,	// (0x00024861) mup3_control_keys_pane_g2

0x66e5,	// (0x00024869) mup3_control_keys_pane_g3

0x66ed,	// (0x00024871) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0002d9a5) mup3_control_keys_pane_g

0x0efe,	// (0x0001f082) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0efe,	// (0x0001f082) popup_toolbar2_fixed_window_cp01

0x623c,	// (0x000243c0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x623c,	// (0x000243c0) popup_toolbar2_fixed_window_cp02

0xb781,	// (0x00029905) popup_call2_audio_second_window_t4_ParamLimits

0xb781,	// (0x00029905) popup_call2_audio_second_window_t4

0xbcaf,	// (0x00029e33) popup_call2_audio_first_window_t6_ParamLimits

0xbcaf,	// (0x00029e33) popup_call2_audio_first_window_t6

0xbf45,	// (0x0002a0c9) popup_call2_audio_out_window_t6_ParamLimits

0xbf45,	// (0x0002a0c9) popup_call2_audio_out_window_t6

0x0f3e,	// (0x0001f0c2) main_vitu_pane

0x66fd,	// (0x00024881) aid_size_cell_itu_ParamLimits

0x66fd,	// (0x00024881) aid_size_cell_itu

0xd145,	// (0x0002b2c9) bg_popup_window_pane_cp08_ParamLimits

0xd145,	// (0x0002b2c9) bg_popup_window_pane_cp08

0x670b,	// (0x0002488f) field_vitu_entry_pane_ParamLimits

0x670b,	// (0x0002488f) field_vitu_entry_pane

0x671a,	// (0x0002489e) grid_vitu_function_pane_ParamLimits

0x671a,	// (0x0002489e) grid_vitu_function_pane

0x672a,	// (0x000248ae) grid_vitu_itu_pane_ParamLimits

0x672a,	// (0x000248ae) grid_vitu_itu_pane

0x673a,	// (0x000248be) cell_vitu_itu_pane_ParamLimits

0x673a,	// (0x000248be) cell_vitu_itu_pane

0x674f,	// (0x000248d3) cell_vitu_function_pane_ParamLimits

0x674f,	// (0x000248d3) cell_vitu_function_pane

0xa529,	// (0x000286ad) bg_popup_sub_pane_cp08_ParamLimits

0xa529,	// (0x000286ad) bg_popup_sub_pane_cp08

0x6761,	// (0x000248e5) field_vitu_entry_pane_t1_ParamLimits

0x6761,	// (0x000248e5) field_vitu_entry_pane_t1

0xcea3,	// (0x0002b027) field_vitu_entry_pane_t2_ParamLimits

0xcea3,	// (0x0002b027) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0002d9b3) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0002d9b3) field_vitu_entry_pane_t

0xcec0,	// (0x0002b044) bg_button_pane_cp05_ParamLimits

0xcec0,	// (0x0002b044) bg_button_pane_cp05

0x677e,	// (0x00024902) cell_vitu_itu_pane_g1

0x6796,	// (0x0002491a) cell_vitu_itu_pane_t1_ParamLimits

0x6796,	// (0x0002491a) cell_vitu_itu_pane_t1

0x67a8,	// (0x0002492c) cell_vitu_itu_pane_t2_ParamLimits

0x67a8,	// (0x0002492c) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0002d9b8) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0002d9b8) cell_vitu_itu_pane_t

0xcece,	// (0x0002b052) bg_button_pane_cp07

0x67dd,	// (0x00024961) cell_vitu_function_pane_g1

0x1017,	// (0x0001f19b) main_calc_pane_g1

0x0ce8,	// (0x0001ee6c) aid_visual_content_pane

0x0f3e,	// (0x0001f0c2) main_vradio_pane

0x67e6,	// (0x0002496a) main_vradio_pane_g1_ParamLimits

0x67e6,	// (0x0002496a) main_vradio_pane_g1

0xced8,	// (0x0002b05c) main_vradio_pane_g2_ParamLimits

0xced8,	// (0x0002b05c) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0002d9bf) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0002d9bf) main_vradio_pane_g

0x67f6,	// (0x0002497a) main_vradio_pane_t1_ParamLimits

0x67f6,	// (0x0002497a) main_vradio_pane_t1

0x6808,	// (0x0002498c) main_vradio_pane_t2_ParamLimits

0x6808,	// (0x0002498c) main_vradio_pane_t2

0xcee5,	// (0x0002b069) main_vradio_pane_t3_ParamLimits

0xcee5,	// (0x0002b069) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0002d9c4) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0002d9c4) main_vradio_pane_t

0x681a,	// (0x0002499e) vradio_rocker_control_pane_ParamLimits

0x681a,	// (0x0002499e) vradio_rocker_control_pane

0x6826,	// (0x000249aa) vradio_station_info_pane_ParamLimits

0x6826,	// (0x000249aa) vradio_station_info_pane

0xcef9,	// (0x0002b07d) vradio_frequency_info_pane_ParamLimits

0xcef9,	// (0x0002b07d) vradio_frequency_info_pane

0xc847,	// (0x0002a9cb) vradio_station_info_pane_g1

0xcf08,	// (0x0002b08c) vradio_station_info_pane_t1_ParamLimits

0xcf08,	// (0x0002b08c) vradio_station_info_pane_t1

0xcf2a,	// (0x0002b0ae) vradio_station_info_pane_t2_ParamLimits

0xcf2a,	// (0x0002b0ae) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0002d9cb) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0002d9cb) vradio_station_info_pane_t

0xcf3c,	// (0x0002b0c0) vradio_tuning_pane

0xcf44,	// (0x0002b0c8) vradio_rocker_control_pane_g1

0xcf4c,	// (0x0002b0d0) vradio_rocker_control_pane_g2

0xcf54,	// (0x0002b0d8) vradio_rocker_control_pane_g3

0xcf5c,	// (0x0002b0e0) vradio_rocker_control_pane_g4

0xcf64,	// (0x0002b0e8) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0002d9d0) vradio_rocker_control_pane_g

0x6835,	// (0x000249b9) vradio_frequency_info_pane_g1

0xcf6c,	// (0x0002b0f0) vradio_frequency_info_pane_t1_ParamLimits

0xcf6c,	// (0x0002b0f0) vradio_frequency_info_pane_t1

0x683f,	// (0x000249c3) vradio_tuning_pane_g1

0x6848,	// (0x000249cc) vradio_tuning_pane_t1

0x0d04,	// (0x0001ee88) area_side_right_pane_ParamLimits

0x0d04,	// (0x0001ee88) area_side_right_pane

0xc3fa,	// (0x0002a57e) status_small_pane_g1

0xc402,	// (0x0002a586) status_small_pane_g2

0xc40b,	// (0x0002a58f) status_small_pane_g3

0xc414,	// (0x0002a598) status_small_pane_g4

0x0003,

0xf607,	// (0x0002d78b) status_small_pane_g

0xc41d,	// (0x0002a5a1) status_small_pane_t1

0x0f3e,	// (0x0001f0c2) main_video3_pane

0xcf80,	// (0x0002b104) cams_zoom_vslider_pane

0xcf88,	// (0x0002b10c) image3_wide_pane_ParamLimits

0xcf88,	// (0x0002b10c) image3_wide_pane

0xcfa2,	// (0x0002b126) image3_wide_small_pane

0xcfae,	// (0x0002b132) main_video3_pane_g1_ParamLimits

0xcfae,	// (0x0002b132) main_video3_pane_g1

0xcfca,	// (0x0002b14e) main_video3_pane_g2_ParamLimits

0xcfca,	// (0x0002b14e) main_video3_pane_g2

0x0001,

0xf857,	// (0x0002d9db) main_video3_pane_g_ParamLimits

0xf857,	// (0x0002d9db) main_video3_pane_g

0xcfe6,	// (0x0002b16a) main_video3_pane_t1_ParamLimits

0xcfe6,	// (0x0002b16a) main_video3_pane_t1

0xd011,	// (0x0002b195) main_video3_pane_t2_ParamLimits

0xd011,	// (0x0002b195) main_video3_pane_t2

0xd03c,	// (0x0002b1c0) main_video3_pane_t3_ParamLimits

0xd03c,	// (0x0002b1c0) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0002d9e0) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0002d9e0) main_video3_pane_t

0xd069,	// (0x0002b1ed) cams_zoom_vslider_pane_g1

0xd072,	// (0x0002b1f6) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0002d9e7) cams_zoom_vslider_pane_g

0xd07a,	// (0x0002b1fe) small_slider_vertical_pane

0xc847,	// (0x0002a9cb) small_slider_vertical_pane_g1

0xc847,	// (0x0002a9cb) small_slider_vertical_pane_g2

0xd082,	// (0x0002b206) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0002d9ec) small_slider_vertical_pane_g

0x0f3e,	// (0x0001f0c2) main_hwr_training_pane

0xd08b,	// (0x0002b20f) hwr_training_instruct_pane_ParamLimits

0xd08b,	// (0x0002b20f) hwr_training_instruct_pane

0x6857,	// (0x000249db) hwr_training_navi_pane_ParamLimits

0x6857,	// (0x000249db) hwr_training_navi_pane

0x6871,	// (0x000249f5) hwr_training_write_pane_ParamLimits

0x6871,	// (0x000249f5) hwr_training_write_pane

0x9c68,	// (0x00027dec) bg_frame_shadow_pane

0xd0c2,	// (0x0002b246) hwr_training_write_pane_g1

0xd0ca,	// (0x0002b24e) hwr_training_write_pane_g2

0xd0d2,	// (0x0002b256) hwr_training_write_pane_g3

0xd0da,	// (0x0002b25e) hwr_training_write_pane_g4

0xd0e2,	// (0x0002b266) hwr_training_write_pane_g5

0xd0ea,	// (0x0002b26e) hwr_training_write_pane_g6

0xd0f2,	// (0x0002b276) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0002d9f3) hwr_training_write_pane_g

0x1895,	// (0x0001fa19) hwr_training_navi_pane_g1_ParamLimits

0x1895,	// (0x0001fa19) hwr_training_navi_pane_g1

0x18a7,	// (0x0001fa2b) hwr_training_navi_pane_g2_ParamLimits

0x18a7,	// (0x0001fa2b) hwr_training_navi_pane_g2

0x18b9,	// (0x0001fa3d) hwr_training_navi_pane_g3_ParamLimits

0x18b9,	// (0x0001fa3d) hwr_training_navi_pane_g3

0x18c9,	// (0x0001fa4d) hwr_training_navi_pane_g4_ParamLimits

0x18c9,	// (0x0001fa4d) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0002da02) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0002da02) hwr_training_navi_pane_g

0x18e3,	// (0x0001fa67) hwr_training_navi_pane_t1

0x68a9,	// (0x00024a2d) list_single_hwr_training_instruct_pane_ParamLimits

0x68a9,	// (0x00024a2d) list_single_hwr_training_instruct_pane

0xd0fa,	// (0x0002b27e) list_single_hwr_training_instruct_pane_t1

0xc787,	// (0x0002a90b) bg_frame_shadow_pane_g1

0xd109,	// (0x0002b28d) bg_frame_shadow_pane_g2

0xd111,	// (0x0002b295) bg_frame_shadow_pane_g3

0xd119,	// (0x0002b29d) bg_frame_shadow_pane_g4

0xd121,	// (0x0002b2a5) bg_frame_shadow_pane_g5

0xd129,	// (0x0002b2ad) bg_frame_shadow_pane_g6

0xd131,	// (0x0002b2b5) bg_frame_shadow_pane_g7

0xa46a,	// (0x000285ee) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0002da0d) bg_frame_shadow_pane_g

0x0f3e,	// (0x0001f0c2) main_video_tele_dialer_pane

0x18f1,	// (0x0001fa75) aid_size_cell_video_keypad_ParamLimits

0x18f1,	// (0x0001fa75) aid_size_cell_video_keypad

0x1901,	// (0x0001fa85) grid_video_dialer_keypad_pane_ParamLimits

0x1901,	// (0x0001fa85) grid_video_dialer_keypad_pane

0x1935,	// (0x0001fab9) video_down_pane_cp_ParamLimits

0x1935,	// (0x0001fab9) video_down_pane_cp

0x1943,	// (0x0001fac7) cell_video_dialer_keypad_pane_ParamLimits

0x1943,	// (0x0001fac7) cell_video_dialer_keypad_pane

0xd139,	// (0x0002b2bd) bg_button_pane_cp08_ParamLimits

0xd139,	// (0x0002b2bd) bg_button_pane_cp08

0x68ee,	// (0x00024a72) cell_video_dialer_keypad_pane_g1_ParamLimits

0x68ee,	// (0x00024a72) cell_video_dialer_keypad_pane_g1

0x6216,	// (0x0002439a) mup3_rocker2_pane_ParamLimits

0x6216,	// (0x0002439a) mup3_rocker2_pane

0xc847,	// (0x0002a9cb) mup3_rocker2_pane_g1

0x13a2,	// (0x0001f526) main_dialer2_pane

0x0f3e,	// (0x0001f0c2) main_mp4_pane

0x1976,	// (0x0001fafa) main_mp4_pane_g1_ParamLimits

0x1976,	// (0x0001fafa) main_mp4_pane_g1

0x1984,	// (0x0001fb08) main_mp4_pane_g2_ParamLimits

0x1984,	// (0x0001fb08) main_mp4_pane_g2

0x1992,	// (0x0001fb16) main_mp4_pane_g3_ParamLimits

0x1992,	// (0x0001fb16) main_mp4_pane_g3

0x19d7,	// (0x0001fb5b) main_mp4_pane_g4_ParamLimits

0x19d7,	// (0x0001fb5b) main_mp4_pane_g4

0x1a05,	// (0x0001fb89) main_mp4_pane_g5_ParamLimits

0x1a05,	// (0x0001fb89) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0002da2d) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0002da2d) main_mp4_pane_g

0x1a79,	// (0x0001fbfd) main_mp4_pane_t1_ParamLimits

0x1a79,	// (0x0001fbfd) main_mp4_pane_t1

0x1ad5,	// (0x0001fc59) main_mp4_pane_t2_ParamLimits

0x1ad5,	// (0x0001fc59) main_mp4_pane_t2

0xd153,	// (0x0002b2d7) main_mp4_pane_t3_ParamLimits

0xd153,	// (0x0002b2d7) main_mp4_pane_t3

0x1b27,	// (0x0001fcab) main_mp4_pane_t4_ParamLimits

0x1b27,	// (0x0001fcab) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0002da3e) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0002da3e) main_mp4_pane_t

0x1b6b,	// (0x0001fcef) mp4_progress_pane_ParamLimits

0x1b6b,	// (0x0001fcef) mp4_progress_pane

0x1bb5,	// (0x0001fd39) mp4_rocker_pane_ParamLimits

0x1bb5,	// (0x0001fd39) mp4_rocker_pane

0xd181,	// (0x0002b305) mp4_progress_pane_t1

0xd19a,	// (0x0002b31e) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0002da47) mp4_progress_pane_t

0xd1b3,	// (0x0002b337) mup_progress_pane_cp04

0xd8f8,	// (0x0002ba7c) mp4_rocker_pane_g1

0x1bd5,	// (0x0001fd59) aid_cell_size_keypad2_ParamLimits

0x1bd5,	// (0x0001fd59) aid_cell_size_keypad2

0x1be5,	// (0x0001fd69) dialer2_ne_pane_ParamLimits

0x1be5,	// (0x0001fd69) dialer2_ne_pane

0x1bf3,	// (0x0001fd77) grid_dialer2_keypad_pane_ParamLimits

0x1bf3,	// (0x0001fd77) grid_dialer2_keypad_pane

0xd1c6,	// (0x0002b34a) bg_popup_call_pane_cp07_ParamLimits

0xd1c6,	// (0x0002b34a) bg_popup_call_pane_cp07

0x6928,	// (0x00024aac) dialer2_ne_pane_t1_ParamLimits

0x6928,	// (0x00024aac) dialer2_ne_pane_t1

0x1c03,	// (0x0001fd87) cell_dialer2_keypad_pane_ParamLimits

0x1c03,	// (0x0001fd87) cell_dialer2_keypad_pane

0xd1e6,	// (0x0002b36a) bg_button_pane_pane_cp04_ParamLimits

0xd1e6,	// (0x0002b36a) bg_button_pane_pane_cp04

0x694d,	// (0x00024ad1) cell_dialer2_keypad_pane_g1_ParamLimits

0x694d,	// (0x00024ad1) cell_dialer2_keypad_pane_g1

0x326f,	// (0x000213f3) aid_placing_vt_set_content_ParamLimits

0x326f,	// (0x000213f3) aid_placing_vt_set_content

0x329b,	// (0x0002141f) aid_placing_vt_set_title_ParamLimits

0x329b,	// (0x0002141f) aid_placing_vt_set_title

0x0f3e,	// (0x0001f0c2) main_image3_pane

0x1c4a,	// (0x0001fdce) area_side_right_pane_cp01_ParamLimits

0x1c4a,	// (0x0001fdce) area_side_right_pane_cp01

0x1c77,	// (0x0001fdfb) main_image3_pane_g1_ParamLimits

0x1c77,	// (0x0001fdfb) main_image3_pane_g1

0x1c85,	// (0x0001fe09) main_image3_pane_g2_ParamLimits

0x1c85,	// (0x0001fe09) main_image3_pane_g2

0x1c9e,	// (0x0001fe22) main_image3_pane_g3_ParamLimits

0x1c9e,	// (0x0001fe22) main_image3_pane_g3

0x1cb7,	// (0x0001fe3b) main_image3_pane_g4_ParamLimits

0x1cb7,	// (0x0001fe3b) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0002da56) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0002da56) main_image3_pane_g

0x1cd0,	// (0x0001fe54) main_image3_pane_t1_ParamLimits

0x1cd0,	// (0x0001fe54) main_image3_pane_t1

0x1cf5,	// (0x0001fe79) main_image3_pane_t2_ParamLimits

0x1cf5,	// (0x0001fe79) main_image3_pane_t2

0x1d14,	// (0x0001fe98) main_image3_pane_t3_ParamLimits

0x1d14,	// (0x0001fe98) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0002da5f) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0002da5f) main_image3_pane_t

0xd145,	// (0x0002b2c9) grid_sctrl_middle_pane_cp01_ParamLimits

0xd145,	// (0x0002b2c9) grid_sctrl_middle_pane_cp01

0x69b5,	// (0x00024b39) cell_sctrl_middle_pane_cp01_ParamLimits

0x69b5,	// (0x00024b39) cell_sctrl_middle_pane_cp01

0x69c6,	// (0x00024b4a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x69c6,	// (0x00024b4a) cell_sctrl_middle_pane_cp01_g1

0x0f3e,	// (0x0001f0c2) main_call4_pane

0x1d75,	// (0x0001fef9) aid_size_button_call4_ParamLimits

0x1d75,	// (0x0001fef9) aid_size_button_call4

0x1dab,	// (0x0001ff2f) call4_windows_pane_ParamLimits

0x1dab,	// (0x0001ff2f) call4_windows_pane

0x1dc0,	// (0x0001ff44) grid_call4_button_pane_ParamLimits

0x1dc0,	// (0x0001ff44) grid_call4_button_pane

0x69df,	// (0x00024b63) call4_windows_conf_pane

0x69f6,	// (0x00024b7a) popup_call4_audio_first_window_ParamLimits

0x69f6,	// (0x00024b7a) popup_call4_audio_first_window

0x6a46,	// (0x00024bca) popup_call4_audio_second_window_ParamLimits

0x6a46,	// (0x00024bca) popup_call4_audio_second_window

0x6a5f,	// (0x00024be3) popup_call4_audio_wait_window_ParamLimits

0x6a5f,	// (0x00024be3) popup_call4_audio_wait_window

0x1de2,	// (0x0001ff66) cell_call4_button_pane_ParamLimits

0x1de2,	// (0x0001ff66) cell_call4_button_pane

0x6a6d,	// (0x00024bf1) bg_button_pane_cp09_ParamLimits

0x6a6d,	// (0x00024bf1) bg_button_pane_cp09

0x1e05,	// (0x0001ff89) cell_call4_button_pane_g1_ParamLimits

0x1e05,	// (0x0001ff89) cell_call4_button_pane_g1

0x6a79,	// (0x00024bfd) cell_call4_button_pane_t1_ParamLimits

0x6a79,	// (0x00024bfd) cell_call4_button_pane_t1

0xd1fa,	// (0x0002b37e) popup_call4_audio_conf_window_ParamLimits

0xd1fa,	// (0x0002b37e) popup_call4_audio_conf_window

0x6249,	// (0x000243cd) mup3_progress_pane_t1_ParamLimits

0x6268,	// (0x000243ec) mup3_progress_pane_t2_ParamLimits

0xcb7b,	// (0x0002acff) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0002d92f) mup3_progress_pane_t_ParamLimits

0xcb98,	// (0x0002ad1c) mup_progress_pane_cp03_ParamLimits

0x66f5,	// (0x00024879) mup3_control_keys_pane_g4_copy1

0x1b99,	// (0x0001fd1d) mp4_rocker2_pane_ParamLimits

0x1b99,	// (0x0001fd1d) mp4_rocker2_pane

0xd20e,	// (0x0002b392) mp4_rocker2_pane_g1

0xd216,	// (0x0002b39a) mp4_rocker2_pane_g2

0x1e44,	// (0x0001ffc8) mp4_rocker2_pane_g3

0x1e4c,	// (0x0001ffd0) mp4_rocker2_pane_g4

0x1e54,	// (0x0001ffd8) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0002da68) mp4_rocker2_pane_g

0x0f3e,	// (0x0001f0c2) main_camera4_pane

0x0f3e,	// (0x0001f0c2) main_video4_pane

0x1911,	// (0x0001fa95) main_video_tele_dialer_pane_t1_ParamLimits

0x1911,	// (0x0001fa95) main_video_tele_dialer_pane_t1

0x1923,	// (0x0001faa7) main_video_tele_dialer_pane_t2_ParamLimits

0x1923,	// (0x0001faa7) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0002da1e) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0002da1e) main_video_tele_dialer_pane_t

0x1e74,	// (0x0001fff8) cam4_autofocus_pane_ParamLimits

0x1e74,	// (0x0001fff8) cam4_autofocus_pane

0x1e8e,	// (0x00020012) cam4_image_uncrop_pane_ParamLimits

0x1e8e,	// (0x00020012) cam4_image_uncrop_pane

0x1ea5,	// (0x00020029) cam4_indicators_pane_ParamLimits

0x1ea5,	// (0x00020029) cam4_indicators_pane

0x1ec1,	// (0x00020045) main_camera4_pane_g1_ParamLimits

0x1ec1,	// (0x00020045) main_camera4_pane_g1

0x1ecd,	// (0x00020051) main_camera4_pane_g2_ParamLimits

0x1ecd,	// (0x00020051) main_camera4_pane_g2

0x1ecd,	// (0x00020051) main_camera4_pane_g3_ParamLimits

0x1ecd,	// (0x00020051) main_camera4_pane_g3

0x1ed9,	// (0x0002005d) main_camera4_pane_g4_ParamLimits

0x1ed9,	// (0x0002005d) main_camera4_pane_g4

0x1ee5,	// (0x00020069) main_camera4_pane_g5_ParamLimits

0x1ee5,	// (0x00020069) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0002da73) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0002da73) main_camera4_pane_g

0x1eff,	// (0x00020083) main_camera4_pane_t1_ParamLimits

0x1eff,	// (0x00020083) main_camera4_pane_t1

0x1f23,	// (0x000200a7) bg_tb_trans_pane_cp06

0x1f39,	// (0x000200bd) cam4_indicators_pane_g1

0x1f4a,	// (0x000200ce) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0002da8e) cam4_indicators_pane_g

0x1f62,	// (0x000200e6) cam4_indicators_pane_t1

0x1f8c,	// (0x00020110) main_video4_pane_g1_ParamLimits

0x1f8c,	// (0x00020110) main_video4_pane_g1

0x1f98,	// (0x0002011c) main_video4_pane_g2_ParamLimits

0x1f98,	// (0x0002011c) main_video4_pane_g2

0x1fa4,	// (0x00020128) main_video4_pane_g3_ParamLimits

0x1fa4,	// (0x00020128) main_video4_pane_g3

0x1fb0,	// (0x00020134) main_video4_pane_g4_ParamLimits

0x1fb0,	// (0x00020134) main_video4_pane_g4

0x0004,

0xf911,	// (0x0002da95) main_video4_pane_g_ParamLimits

0xf911,	// (0x0002da95) main_video4_pane_g

0x1fd0,	// (0x00020154) vid4_indicators_pane_ParamLimits

0x1fd0,	// (0x00020154) vid4_indicators_pane

0x1fef,	// (0x00020173) video4_image_uncrop_cif_pane_ParamLimits

0x1fef,	// (0x00020173) video4_image_uncrop_cif_pane

0x1ffe,	// (0x00020182) video4_image_uncrop_nhd_pane_ParamLimits

0x1ffe,	// (0x00020182) video4_image_uncrop_nhd_pane

0x1e8e,	// (0x00020012) video4_image_uncrop_vga_pane_ParamLimits

0x1e8e,	// (0x00020012) video4_image_uncrop_vga_pane

0x1394,	// (0x0001f518) bg_tb_trans_pane_cp07

0x2013,	// (0x00020197) vid4_indicators_pane_g1

0x2027,	// (0x000201ab) vid4_indicators_pane_g2

0x203b,	// (0x000201bf) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0002daa0) vid4_indicators_pane_g

0x2068,	// (0x000201ec) vid4_indicators_pane_t1

0x6aaf,	// (0x00024c33) cam4_autofocus_pane_g1

0x6ab7,	// (0x00024c3b) cam4_autofocus_pane_g2

0x6abf,	// (0x00024c43) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0002daab) cam4_autofocus_pane_g

0x6ac7,	// (0x00024c4b) cam4_autofocus_pane_g3_copy1

0x68d2,	// (0x00024a56) video_down_pane_cp_t1

0x68e0,	// (0x00024a64) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0002da23) video_down_pane_cp_t

0x0f30,	// (0x0001f0b4) popup_vitu2_window_ParamLimits

0x0f30,	// (0x0001f0b4) popup_vitu2_window

0x207f,	// (0x00020203) aid_size_cell2_itu2_ParamLimits

0x207f,	// (0x00020203) aid_size_cell2_itu2

0x20a1,	// (0x00020225) aid_size_cell_itu2_ParamLimits

0x20a1,	// (0x00020225) aid_size_cell_itu2

0x20e5,	// (0x00020269) bg_popup_window_pane_cp09_ParamLimits

0x20e5,	// (0x00020269) bg_popup_window_pane_cp09

0x20f3,	// (0x00020277) field_vitu2_entry_pane_ParamLimits

0x20f3,	// (0x00020277) field_vitu2_entry_pane

0x2113,	// (0x00020297) grid_vitu2_function_pane_ParamLimits

0x2113,	// (0x00020297) grid_vitu2_function_pane

0x2157,	// (0x000202db) grid_vitu2_itu_pane_ParamLimits

0x2157,	// (0x000202db) grid_vitu2_itu_pane

0x21d1,	// (0x00020355) cell_vitu2_itu_pane_ParamLimits

0x21d1,	// (0x00020355) cell_vitu2_itu_pane

0x21ea,	// (0x0002036e) cell_vitu2_function_pane_ParamLimits

0x21ea,	// (0x0002036e) cell_vitu2_function_pane

0xd21e,	// (0x0002b3a2) bg_popup_call_pane_cp08_ParamLimits

0xd21e,	// (0x0002b3a2) bg_popup_call_pane_cp08

0xd235,	// (0x0002b3b9) field_vitu2_entry_pane_g1

0xd241,	// (0x0002b3c5) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0002dab2) field_vitu2_entry_pane_g

0x6acf,	// (0x00024c53) field_vitu2_entry_pane_t1_ParamLimits

0x6acf,	// (0x00024c53) field_vitu2_entry_pane_t1

0xd25b,	// (0x0002b3df) field_vitu2_entry_pane_t2_ParamLimits

0xd25b,	// (0x0002b3df) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0002dab9) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0002dab9) field_vitu2_entry_pane_t

0x222b,	// (0x000203af) bg_button_pane_cp010_ParamLimits

0x222b,	// (0x000203af) bg_button_pane_cp010

0x2239,	// (0x000203bd) cell_vitu2_itu_pane_g1

0x2259,	// (0x000203dd) cell_vitu2_itu_pane_t1_ParamLimits

0x2259,	// (0x000203dd) cell_vitu2_itu_pane_t1

0x22a5,	// (0x00020429) cell_vitu2_itu_pane_t2_ParamLimits

0x22a5,	// (0x00020429) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0002dac3) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0002dac3) cell_vitu2_itu_pane_t

0x1394,	// (0x0001f518) bg_button_pane_cp011

0x236d,	// (0x000204f1) cell_vitu2_function_pane_g1

0x0f3e,	// (0x0001f0c2) main_myfav_hc_pane

0x1d56,	// (0x0001feda) popup_image3_note_pane_ParamLimits

0x1d56,	// (0x0001feda) popup_image3_note_pane

0x1d64,	// (0x0001fee8) popup_image3_tool_bar_pane_ParamLimits

0x1d64,	// (0x0001fee8) popup_image3_tool_bar_pane

0x231b,	// (0x0002049f) cell_vitu2_itu_pane_t3_ParamLimits

0x231b,	// (0x0002049f) cell_vitu2_itu_pane_t3

0x9c68,	// (0x00027dec) bg_popup_trans_pane

0xd280,	// (0x0002b404) grid_image3_tool_bar_pane

0xd28a,	// (0x0002b40e) bg_popup_trans_pane_g1

0xa812,	// (0x00028996) bg_popup_trans_pane_g2

0xd292,	// (0x0002b416) bg_popup_trans_pane_g3

0xd29a,	// (0x0002b41e) bg_popup_trans_pane_g4

0xd2a2,	// (0x0002b426) bg_popup_trans_pane_g5

0xd2aa,	// (0x0002b42e) bg_popup_trans_pane_g6

0xd2b2,	// (0x0002b436) bg_popup_trans_pane_g7

0xd2ba,	// (0x0002b43e) bg_popup_trans_pane_g8

0xa7f2,	// (0x00028976) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0002daca) bg_popup_trans_pane_g

0xd2c2,	// (0x0002b446) cell_image3_tool_bar_pane_ParamLimits

0xd2c2,	// (0x0002b446) cell_image3_tool_bar_pane

0xc847,	// (0x0002a9cb) cell_image3_tool_bar_pane_g1

0x9c68,	// (0x00027dec) bg_popup_trans_pane_cp1

0xd2d6,	// (0x0002b45a) popup_image3_note_pane_t1

0xd2e4,	// (0x0002b468) popup_image3_note_pane_t2

0xd2f2,	// (0x0002b476) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0002dadd) popup_image3_note_pane_t

0xd300,	// (0x0002b484) popup_image3_note_pane_t3_copy1

0x6b00,	// (0x00024c84) bg_myfav_hc_instruction_pane_ParamLimits

0x6b00,	// (0x00024c84) bg_myfav_hc_instruction_pane

0x6b18,	// (0x00024c9c) cell_myfav_contact_pane_ParamLimits

0x6b18,	// (0x00024c9c) cell_myfav_contact_pane

0x6b32,	// (0x00024cb6) cell_myfav_contact_pane_cp1_ParamLimits

0x6b32,	// (0x00024cb6) cell_myfav_contact_pane_cp1

0x6b4a,	// (0x00024cce) cell_myfav_contact_pane_cp2_ParamLimits

0x6b4a,	// (0x00024cce) cell_myfav_contact_pane_cp2

0x6b62,	// (0x00024ce6) cell_myfav_contact_pane_cp3_ParamLimits

0x6b62,	// (0x00024ce6) cell_myfav_contact_pane_cp3

0x6b79,	// (0x00024cfd) cell_myfav_contact_pane_cp4_ParamLimits

0x6b79,	// (0x00024cfd) cell_myfav_contact_pane_cp4

0x6b8f,	// (0x00024d13) cell_myfav_contact_pane_cp5_ParamLimits

0x6b8f,	// (0x00024d13) cell_myfav_contact_pane_cp5

0x6ba3,	// (0x00024d27) cell_myfav_contact_pane_cp6_ParamLimits

0x6ba3,	// (0x00024d27) cell_myfav_contact_pane_cp6

0x6bb7,	// (0x00024d3b) cell_myfav_contact_pane_cp7_ParamLimits

0x6bb7,	// (0x00024d3b) cell_myfav_contact_pane_cp7

0xd30e,	// (0x0002b492) listscroll_gen_pane_cp05

0x6bcf,	// (0x00024d53) main_myfav_hc_pane_g1_ParamLimits

0x6bcf,	// (0x00024d53) main_myfav_hc_pane_g1

0x6be5,	// (0x00024d69) main_myfav_hc_pane_g2_ParamLimits

0x6be5,	// (0x00024d69) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0002dae4) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0002dae4) main_myfav_hc_pane_g

0x6c15,	// (0x00024d99) main_myfav_hc_pane_t1_ParamLimits

0x6c15,	// (0x00024d99) main_myfav_hc_pane_t1

0xd317,	// (0x0002b49b) main_myfav_hc_pane_t2_ParamLimits

0xd317,	// (0x0002b49b) main_myfav_hc_pane_t2

0xd329,	// (0x0002b4ad) main_myfav_hc_pane_t3_ParamLimits

0xd329,	// (0x0002b4ad) main_myfav_hc_pane_t3

0x6c2c,	// (0x00024db0) main_myfav_hc_pane_t4_ParamLimits

0x6c2c,	// (0x00024db0) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0002daeb) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0002daeb) main_myfav_hc_pane_t

0xc847,	// (0x0002a9cb) bg_myfav_hc_instruction_pane_g1

0xd33b,	// (0x0002b4bf) cell_myfav_contact_pane_g1_ParamLimits

0xd33b,	// (0x0002b4bf) cell_myfav_contact_pane_g1

0xd33b,	// (0x0002b4bf) cell_myfav_contact_pane_g2_ParamLimits

0xd33b,	// (0x0002b4bf) cell_myfav_contact_pane_g2

0xd347,	// (0x0002b4cb) cell_myfav_contact_pane_g3_ParamLimits

0xd347,	// (0x0002b4cb) cell_myfav_contact_pane_g3

0xcb65,	// (0x0002ace9) cell_myfav_contact_pane_g4_ParamLimits

0xcb65,	// (0x0002ace9) cell_myfav_contact_pane_g4

0xd354,	// (0x0002b4d8) cell_myfav_contact_pane_g5_ParamLimits

0xd354,	// (0x0002b4d8) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0002daf6) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0002daf6) cell_myfav_contact_pane_g

0x6bfd,	// (0x00024d81) main_myfav_hc_pane_g3_ParamLimits

0x6bfd,	// (0x00024d81) main_myfav_hc_pane_g3

0x0e39,	// (0x0001efbd) popup_adpt_find_window

0x6c56,	// (0x00024dda) afind_page_pane_ParamLimits

0x6c56,	// (0x00024dda) afind_page_pane

0x6c63,	// (0x00024de7) aid_size_cell_afind_ParamLimits

0x6c63,	// (0x00024de7) aid_size_cell_afind

0x6c7d,	// (0x00024e01) bg_popup_sub_pane_cp09_ParamLimits

0x6c7d,	// (0x00024e01) bg_popup_sub_pane_cp09

0x6c8a,	// (0x00024e0e) find_pane_cp01_ParamLimits

0x6c8a,	// (0x00024e0e) find_pane_cp01

0xd360,	// (0x0002b4e4) grid_afind_control_pane_ParamLimits

0xd360,	// (0x0002b4e4) grid_afind_control_pane

0x6c97,	// (0x00024e1b) grid_afind_pane_ParamLimits

0x6c97,	// (0x00024e1b) grid_afind_pane

0x6cb1,	// (0x00024e35) cell_afind_pane_ParamLimits

0x6cb1,	// (0x00024e35) cell_afind_pane

0xc847,	// (0x0002a9cb) afind_page_pane_g1

0x6cf9,	// (0x00024e7d) afind_page_pane_g2

0x6d02,	// (0x00024e86) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0002db01) afind_page_pane_g

0x6d0b,	// (0x00024e8f) afind_page_pane_t1

0xd374,	// (0x0002b4f8) cell_afind_grid_control_pane_ParamLimits

0xd374,	// (0x0002b4f8) cell_afind_grid_control_pane

0xd1e6,	// (0x0002b36a) bg_button_pane_cp69_ParamLimits

0xd1e6,	// (0x0002b36a) bg_button_pane_cp69

0x6d2b,	// (0x00024eaf) cell_afind_pane_g1_ParamLimits

0x6d2b,	// (0x00024eaf) cell_afind_pane_g1

0x6d38,	// (0x00024ebc) cell_afind_pane_t1_ParamLimits

0x6d38,	// (0x00024ebc) cell_afind_pane_t1

0xa60b,	// (0x0002878f) bg_button_pane_cp72

0xd383,	// (0x0002b507) cell_afind_grid_control_pane_g1

0x50ff,	// (0x00023283) aid_image_placing_area_ParamLimits

0x50ff,	// (0x00023283) aid_image_placing_area

0xce8b,	// (0x0002b00f) field_vitu_entry_pane_g1_ParamLimits

0xce8b,	// (0x0002b00f) field_vitu_entry_pane_g1

0xce97,	// (0x0002b01b) field_vitu_entry_pane_g2_ParamLimits

0xce97,	// (0x0002b01b) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0002d9ae) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0002d9ae) field_vitu_entry_pane_g

0x677e,	// (0x00024902) cell_vitu_itu_pane_g1_ParamLimits

0x67c0,	// (0x00024944) cell_vitu_itu_pane_t3_ParamLimits

0x67c0,	// (0x00024944) cell_vitu_itu_pane_t3

0xd181,	// (0x0002b305) mp4_progress_pane_t1_ParamLimits

0xd19a,	// (0x0002b31e) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0002da47) mp4_progress_pane_t_ParamLimits

0xd1b3,	// (0x0002b337) mup_progress_pane_cp04_ParamLimits

0x6c40,	// (0x00024dc4) main_myfav_hc_pane_t5_ParamLimits

0x6c40,	// (0x00024dc4) main_myfav_hc_pane_t5

0x0cfc,	// (0x0001ee80) aid_zoom_text_primary

0x0e39,	// (0x0001efbd) popup_adpt_find_window_ParamLimits

0x1394,	// (0x0001f518) main_cam_set_pane

0x1eb3,	// (0x00020037) cam4_zoom_pane_ParamLimits

0x1eb3,	// (0x00020037) cam4_zoom_pane

0x6d4a,	// (0x00024ece) main_cam_set_pane_g1_ParamLimits

0x6d4a,	// (0x00024ece) main_cam_set_pane_g1

0x6d58,	// (0x00024edc) main_cam_set_pane_g2_ParamLimits

0x6d58,	// (0x00024edc) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0002db08) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0002db08) main_cam_set_pane_g

0x6d64,	// (0x00024ee8) main_cam_set_pane_t1_ParamLimits

0x6d64,	// (0x00024ee8) main_cam_set_pane_t1

0x6d80,	// (0x00024f04) main_cset_listscroll_pane_ParamLimits

0x6d80,	// (0x00024f04) main_cset_listscroll_pane

0x6dab,	// (0x00024f2f) main_cset_slider_pane_ParamLimits

0x6dab,	// (0x00024f2f) main_cset_slider_pane

0xd394,	// (0x0002b518) main_cset_list_pane_ParamLimits

0xd394,	// (0x0002b518) main_cset_list_pane

0xd3a4,	// (0x0002b528) scroll_pane_cp028

0x6dca,	// (0x00024f4e) aid_area_touch_slider

0x6de6,	// (0x00024f6a) cset_slider_pane

0x6e10,	// (0x00024f94) main_cset_slider_pane_g1

0x6e25,	// (0x00024fa9) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0002db0d) main_cset_slider_pane_g

0xd3dd,	// (0x0002b561) main_cset_slider_pane_t1

0x6eeb,	// (0x0002506f) main_cset_slider_pane_t2

0x6f05,	// (0x00025089) main_cset_slider_pane_t3

0x6f1f,	// (0x000250a3) main_cset_slider_pane_t4

0x6f3d,	// (0x000250c1) main_cset_slider_pane_t5

0x6f5b,	// (0x000250df) main_cset_slider_pane_t6

0x6f72,	// (0x000250f6) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0002db32) main_cset_slider_pane_t

0x7080,	// (0x00025204) cset_list_set_pane_ParamLimits

0x7080,	// (0x00025204) cset_list_set_pane

0x7099,	// (0x0002521d) aid_position_infowindow_above

0x70a1,	// (0x00025225) aid_position_infowindow_below

0x70a9,	// (0x0002522d) cset_list_set_pane_g1_ParamLimits

0x70a9,	// (0x0002522d) cset_list_set_pane_g1

0x70b5,	// (0x00025239) cset_list_set_pane_g3_ParamLimits

0x70b5,	// (0x00025239) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0002db51) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0002db51) cset_list_set_pane_g

0x70c4,	// (0x00025248) cset_list_set_pane_t1_ParamLimits

0x70c4,	// (0x00025248) cset_list_set_pane_t1

0xa529,	// (0x000286ad) list_highlight_pane_cp021_ParamLimits

0xa529,	// (0x000286ad) list_highlight_pane_cp021

0xb130,	// (0x000292b4) cset_slider_pane_g1

0xb142,	// (0x000292c6) cset_slider_pane_g2

0xb139,	// (0x000292bd) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0002db56) cset_slider_pane_g

0x2381,	// (0x00020505) aid_area_touch_cam4_zoom

0x2389,	// (0x0002050d) cam4_zoom_cont_pane

0x2391,	// (0x00020515) cam4_zoom_pane_g1

0x2399,	// (0x0002051d) cam4_zoom_pane_g2

0x23a1,	// (0x00020525) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0002db5d) cam4_zoom_pane_g

0x23a9,	// (0x0002052d) cam4_zoom_cont_pane_g1

0x23b2,	// (0x00020536) cam4_zoom_cont_pane_g2

0x23bb,	// (0x0002053f) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0002db64) cam4_zoom_cont_pane_g

0x1d8f,	// (0x0001ff13) call4_image_pane_ParamLimits

0x1d8f,	// (0x0001ff13) call4_image_pane

0x69df,	// (0x00024b63) call4_windows_conf_pane_ParamLimits

0x6a24,	// (0x00024ba8) popup_call4_audio_in_window_ParamLimits

0x6a24,	// (0x00024ba8) popup_call4_audio_in_window

0x9c68,	// (0x00027dec) bg_popup_call2_act_pane_cp02

0xd1f2,	// (0x0002b376) call4_list_conf_pane

0xc847,	// (0x0002a9cb) call4_image_pane_g1

0xc847,	// (0x0002a9cb) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0002d86f) call4_image_pane_g

0xd4aa,	// (0x0002b62e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4aa,	// (0x0002b62e) list_single_graphic_popup_conf4_pane

0x9c68,	// (0x00027dec) list_highlight_pane_cp022

0xd4bd,	// (0x0002b641) list_single_graphic_popup_conf4_pane_g1

0xad20,	// (0x00028ea4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0002db6b) list_single_graphic_popup_conf4_pane_g

0xd4c5,	// (0x0002b649) list_single_graphic_popup_conf4_pane_t1

0x33ff,	// (0x00021583) popup_vtel_slider_window_ParamLimits

0x33ff,	// (0x00021583) popup_vtel_slider_window

0xd1d4,	// (0x0002b358) dialer2_ne_pane_t2_ParamLimits

0xd1d4,	// (0x0002b358) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0002da4c) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0002da4c) dialer2_ne_pane_t

0xa529,	// (0x000286ad) bg_popup_sub_pane_cp010_ParamLimits

0xa529,	// (0x000286ad) bg_popup_sub_pane_cp010

0x70d9,	// (0x0002525d) popup_vtel_slider_window_g1_ParamLimits

0x70d9,	// (0x0002525d) popup_vtel_slider_window_g1

0x70e5,	// (0x00025269) popup_vtel_slider_window_g2_ParamLimits

0x70e5,	// (0x00025269) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0002db70) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0002db70) popup_vtel_slider_window_g

0x712d,	// (0x000252b1) vtel_slider_pane_ParamLimits

0x712d,	// (0x000252b1) vtel_slider_pane

0x713c,	// (0x000252c0) vtel_slider_pane_g1_ParamLimits

0x713c,	// (0x000252c0) vtel_slider_pane_g1

0x7149,	// (0x000252cd) vtel_slider_pane_g2_ParamLimits

0x7149,	// (0x000252cd) vtel_slider_pane_g2

0x7156,	// (0x000252da) vtel_slider_pane_g3_ParamLimits

0x7156,	// (0x000252da) vtel_slider_pane_g3

0x713c,	// (0x000252c0) vtel_slider_pane_g4_ParamLimits

0x713c,	// (0x000252c0) vtel_slider_pane_g4

0x7163,	// (0x000252e7) vtel_slider_pane_g5_ParamLimits

0x7163,	// (0x000252e7) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0002db79) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0002db79) vtel_slider_pane_g

0x1394,	// (0x0001f518) main_gallery2_pane

0x20c7,	// (0x0002024b) aid_size_row_itut2_dropdow_list_ParamLimits

0x20c7,	// (0x0002024b) aid_size_row_itut2_dropdow_list

0x2135,	// (0x000202b9) grid_vitu2_function_top_pane_ParamLimits

0x2135,	// (0x000202b9) grid_vitu2_function_top_pane

0x218f,	// (0x00020313) popup_vitu2_dropdown_list_window_ParamLimits

0x218f,	// (0x00020313) popup_vitu2_dropdown_list_window

0x21af,	// (0x00020333) popup_vitu2_match_list_window

0x23c4,	// (0x00020548) cell_vitu2_function_top_pane_ParamLimits

0x23c4,	// (0x00020548) cell_vitu2_function_top_pane

0x23de,	// (0x00020562) cell_vitu2_function_top_pane_cp01_ParamLimits

0x23de,	// (0x00020562) cell_vitu2_function_top_pane_cp01

0x23fa,	// (0x0002057e) cell_vitu2_function_top_wide_pane_ParamLimits

0x23fa,	// (0x0002057e) cell_vitu2_function_top_wide_pane

0x1394,	// (0x0001f518) bg_button_pane_cp012

0x2416,	// (0x0002059a) cell_vitu2_function_top_pane_g1

0x242a,	// (0x000205ae) bg_button_pane_cp013_ParamLimits

0x242a,	// (0x000205ae) bg_button_pane_cp013

0x7170,	// (0x000252f4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7170,	// (0x000252f4) cell_vitu2_function_top_wide_pane_g1

0x0f30,	// (0x0001f0b4) bg_popup_sub_pane_cp20

0x2446,	// (0x000205ca) list_vitu2_match_list_pane

0xd28a,	// (0x0002b40e) bg_popup_sub_pane_cp20_g1

0xd292,	// (0x0002b416) bg_popup_sub_pane_cp20_g2

0xa812,	// (0x00028996) bg_popup_sub_pane_cp20_g3

0xd29a,	// (0x0002b41e) bg_popup_sub_pane_cp20_g4

0xa7f2,	// (0x00028976) bg_popup_sub_pane_cp20_g5

0xd4e9,	// (0x0002b66d) bg_popup_sub_pane_cp20_g6

0xd2aa,	// (0x0002b42e) bg_popup_sub_pane_cp20_g7

0xd2b2,	// (0x0002b436) bg_popup_sub_pane_cp20_g8

0xd2ba,	// (0x0002b43e) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0002db84) bg_popup_sub_pane_cp20_g

0x245e,	// (0x000205e2) list_vitu2_match_list_item_pane_ParamLimits

0x245e,	// (0x000205e2) list_vitu2_match_list_item_pane

0x2470,	// (0x000205f4) list_vitu2_match_list_item_pane_t1

0x0f3e,	// (0x0001f0c2) bg_popup_sub_pane_cp21

0x247e,	// (0x00020602) grid_vitu2_dropdown_list_pane

0x2486,	// (0x0002060a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2486,	// (0x0002060a) cell_vitu2_dropdown_list_char_pane

0x24a7,	// (0x0002062b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x24a7,	// (0x0002062b) cell_vitu2_dropdown_list_ctrl_pane

0xd4f1,	// (0x0002b675) cell_vitu2_dropdown_list_char_pane_g1

0xd4fa,	// (0x0002b67e) cell_vitu2_dropdown_list_char_pane_g2

0xd503,	// (0x0002b687) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0002dba1) cell_vitu2_dropdown_list_char_pane_g

0x24d3,	// (0x00020657) cell_vitu2_dropdown_list_char_pane_t1

0x71d0,	// (0x00025354) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71d0,	// (0x00025354) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71e0,	// (0x00025364) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71e0,	// (0x00025364) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71f1,	// (0x00025375) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71f1,	// (0x00025375) cell_vitu2_dropdown_list_ctrl_pane_g3

0x24e1,	// (0x00020665) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x24e1,	// (0x00020665) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1f23,	// (0x000200a7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1f23,	// (0x000200a7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0002dba8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0002dba8) cell_vitu2_dropdown_list_ctrl_pane_g

0x7201,	// (0x00025385) aid_size_cell_gallery2_ParamLimits

0x7201,	// (0x00025385) aid_size_cell_gallery2

0x721b,	// (0x0002539f) grid_gallery2_pane_ParamLimits

0x721b,	// (0x0002539f) grid_gallery2_pane

0x7232,	// (0x000253b6) scroll_pane_cp029_ParamLimits

0x7232,	// (0x000253b6) scroll_pane_cp029

0x7242,	// (0x000253c6) cell_gallery2_pane_ParamLimits

0x7242,	// (0x000253c6) cell_gallery2_pane

0xd50c,	// (0x0002b690) cell_gallery2_pane_g2

0x7297,	// (0x0002541b) cell_gallery2_pane_g3

0xd514,	// (0x0002b698) cell_gallery2_pane_g4

0xd51c,	// (0x0002b6a0) cell_gallery2_pane_g5

0xa5b9,	// (0x0002873d) grid_highlight_pane_cp10

0x21af,	// (0x00020333) popup_vitu2_match_list_window_ParamLimits

0x21c1,	// (0x00020345) popup_vitu2_query_window_ParamLimits

0x21c1,	// (0x00020345) popup_vitu2_query_window

0x0f3e,	// (0x0001f0c2) bg_vitu2_candi_button_pane

0xd4f1,	// (0x0002b675) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4fa,	// (0x0002b67e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd503,	// (0x0002b687) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x729f,	// (0x00025423) bg_button_pane_cp015

0x72b1,	// (0x00025435) bg_button_pane_cp016

0x72c4,	// (0x00025448) bg_button_pane_cp017

0xc43f,	// (0x0002a5c3) bg_popup_sub_pane_cp22

0xd524,	// (0x0002b6a8) popup_vitu2_query_window_g1

0x7309,	// (0x0002548d) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0002dbb3) popup_vitu2_query_window_g

0x7326,	// (0x000254aa) popup_vitu2_query_window_t1_ParamLimits

0x7326,	// (0x000254aa) popup_vitu2_query_window_t1

0x7359,	// (0x000254dd) popup_vitu2_query_window_t2_ParamLimits

0x7359,	// (0x000254dd) popup_vitu2_query_window_t2

0x736b,	// (0x000254ef) popup_vitu2_query_window_t3_ParamLimits

0x736b,	// (0x000254ef) popup_vitu2_query_window_t3

0x7393,	// (0x00025517) popup_vitu2_query_window_t4_ParamLimits

0x7393,	// (0x00025517) popup_vitu2_query_window_t4

0x73b4,	// (0x00025538) popup_vitu2_query_window_t5_ParamLimits

0x73b4,	// (0x00025538) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0002dbba) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0002dbba) popup_vitu2_query_window_t

0xd38c,	// (0x0002b510) main_cset_text_pane

0x6dca,	// (0x00024f4e) aid_area_touch_slider_ParamLimits

0x6de6,	// (0x00024f6a) cset_slider_pane_ParamLimits

0x6e10,	// (0x00024f94) main_cset_slider_pane_g1_ParamLimits

0x6e25,	// (0x00024fa9) main_cset_slider_pane_g2_ParamLimits

0xd3ad,	// (0x0002b531) main_cset_slider_pane_g3_ParamLimits

0xd3ad,	// (0x0002b531) main_cset_slider_pane_g3

0x6e3a,	// (0x00024fbe) main_cset_slider_pane_g4_ParamLimits

0x6e3a,	// (0x00024fbe) main_cset_slider_pane_g4

0x6e49,	// (0x00024fcd) main_cset_slider_pane_g5_ParamLimits

0x6e49,	// (0x00024fcd) main_cset_slider_pane_g5

0x6e57,	// (0x00024fdb) main_cset_slider_pane_g6_ParamLimits

0x6e57,	// (0x00024fdb) main_cset_slider_pane_g6

0xf989,	// (0x0002db0d) main_cset_slider_pane_g_ParamLimits

0xd3dd,	// (0x0002b561) main_cset_slider_pane_t1_ParamLimits

0x6eeb,	// (0x0002506f) main_cset_slider_pane_t2_ParamLimits

0x6f05,	// (0x00025089) main_cset_slider_pane_t3_ParamLimits

0x6f1f,	// (0x000250a3) main_cset_slider_pane_t4_ParamLimits

0x6f3d,	// (0x000250c1) main_cset_slider_pane_t5_ParamLimits

0x6f5b,	// (0x000250df) main_cset_slider_pane_t6_ParamLimits

0x6f72,	// (0x000250f6) main_cset_slider_pane_t7_ParamLimits

0x6fa0,	// (0x00025124) main_cset_slider_pane_t8_ParamLimits

0x6fa0,	// (0x00025124) main_cset_slider_pane_t8

0x6fc8,	// (0x0002514c) main_cset_slider_pane_t9_ParamLimits

0x6fc8,	// (0x0002514c) main_cset_slider_pane_t9

0x6ff0,	// (0x00025174) main_cset_slider_pane_t10_ParamLimits

0x6ff0,	// (0x00025174) main_cset_slider_pane_t10

0x7018,	// (0x0002519c) main_cset_slider_pane_t11_ParamLimits

0x7018,	// (0x0002519c) main_cset_slider_pane_t11

0x7042,	// (0x000251c6) main_cset_slider_pane_t12_ParamLimits

0x7042,	// (0x000251c6) main_cset_slider_pane_t12

0x7061,	// (0x000251e5) main_cset_slider_pane_t13_ParamLimits

0x7061,	// (0x000251e5) main_cset_slider_pane_t13

0xf9ae,	// (0x0002db32) main_cset_slider_pane_t_ParamLimits

0x9c68,	// (0x00027dec) bg_popup_sub_pane_cp011

0xd530,	// (0x0002b6b4) main_cset_text_pane_g1

0xd538,	// (0x0002b6bc) main_cset_text_pane_t1

0xd546,	// (0x0002b6ca) main_cset_text_pane_t2

0xd554,	// (0x0002b6d8) main_cset_text_pane_t3

0xd562,	// (0x0002b6e6) main_cset_text_pane_t4

0xd570,	// (0x0002b6f4) main_cset_text_pane_t5

0xd57e,	// (0x0002b702) main_cset_text_pane_t6

0xd58c,	// (0x0002b710) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0002dbc9) main_cset_text_pane_t

0x0f3e,	// (0x0001f0c2) main_cam4_burst_pane

0x0f3e,	// (0x0001f0c2) main_cam5_pane

0x6d19,	// (0x00024e9d) bg_button_pane_cp019

0x6d22,	// (0x00024ea6) bg_button_pane_cp020

0xd3b9,	// (0x0002b53d) main_cset_slider_pane_g7_ParamLimits

0xd3b9,	// (0x0002b53d) main_cset_slider_pane_g7

0xd3c5,	// (0x0002b549) main_cset_slider_pane_g8_ParamLimits

0xd3c5,	// (0x0002b549) main_cset_slider_pane_g8

0x6e6b,	// (0x00024fef) main_cset_slider_pane_g9_ParamLimits

0x6e6b,	// (0x00024fef) main_cset_slider_pane_g9

0x6e77,	// (0x00024ffb) main_cset_slider_pane_g10_ParamLimits

0x6e77,	// (0x00024ffb) main_cset_slider_pane_g10

0x6e83,	// (0x00025007) main_cset_slider_pane_g11_ParamLimits

0x6e83,	// (0x00025007) main_cset_slider_pane_g11

0x6e8f,	// (0x00025013) main_cset_slider_pane_g12_ParamLimits

0x6e8f,	// (0x00025013) main_cset_slider_pane_g12

0x6e9b,	// (0x0002501f) main_cset_slider_pane_g13_ParamLimits

0x6e9b,	// (0x0002501f) main_cset_slider_pane_g13

0x6ea9,	// (0x0002502d) main_cset_slider_pane_g14_ParamLimits

0x6ea9,	// (0x0002502d) main_cset_slider_pane_g14

0x6eb7,	// (0x0002503b) main_cset_slider_pane_g15_ParamLimits

0x6eb7,	// (0x0002503b) main_cset_slider_pane_g15

0xd438,	// (0x0002b5bc) main_cset_slider_pane_t14_ParamLimits

0xd438,	// (0x0002b5bc) main_cset_slider_pane_t14

0xd471,	// (0x0002b5f5) main_cset_slider_pane_t15_ParamLimits

0xd471,	// (0x0002b5f5) main_cset_slider_pane_t15

0x742b,	// (0x000255af) aid_cam4_burst_size_cell_ParamLimits

0x742b,	// (0x000255af) aid_cam4_burst_size_cell

0x7447,	// (0x000255cb) grid_cam4_burst_pane_ParamLimits

0x7447,	// (0x000255cb) grid_cam4_burst_pane

0x7477,	// (0x000255fb) linegrid_cam4_burst_pane_ParamLimits

0x7477,	// (0x000255fb) linegrid_cam4_burst_pane

0x7497,	// (0x0002561b) scroll_pane_cp30_ParamLimits

0x7497,	// (0x0002561b) scroll_pane_cp30

0x74a3,	// (0x00025627) cell_cam4_burst_pane_ParamLimits

0x74a3,	// (0x00025627) cell_cam4_burst_pane

0xd59a,	// (0x0002b71e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd59a,	// (0x0002b71e) linegrid_cam4_burst_pane_g1

0x74df,	// (0x00025663) linegrid_cam4_burst_pane_g2_ParamLimits

0x74df,	// (0x00025663) linegrid_cam4_burst_pane_g2

0xd5a7,	// (0x0002b72b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5a7,	// (0x0002b72b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0002dbd8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0002dbd8) linegrid_cam4_burst_pane_g

0x74f0,	// (0x00025674) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74f0,	// (0x00025674) linegrid_cam4_burst_pane_g3_copy1

0xd5b4,	// (0x0002b738) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5b4,	// (0x0002b738) linegrid_cam4_burst_pane_g4

0x750a,	// (0x0002568e) linegrid_cam4_burst_pane_g5_ParamLimits

0x750a,	// (0x0002568e) linegrid_cam4_burst_pane_g5

0x751b,	// (0x0002569f) linegrid_cam4_burst_pane_g6_ParamLimits

0x751b,	// (0x0002569f) linegrid_cam4_burst_pane_g6

0xd5c1,	// (0x0002b745) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5c1,	// (0x0002b745) linegrid_cam4_burst_pane_g7

0x752c,	// (0x000256b0) cell_cam4_burst_pane_g1

0xd5da,	// (0x0002b75e) main_cam5_pane_t1_ParamLimits

0xd5da,	// (0x0002b75e) main_cam5_pane_t1

0xd5ec,	// (0x0002b770) main_cam5_pane_t2_ParamLimits

0xd5ec,	// (0x0002b770) main_cam5_pane_t2

0xd5fe,	// (0x0002b782) main_cam5_pane_t3_ParamLimits

0xd5fe,	// (0x0002b782) main_cam5_pane_t3

0xd610,	// (0x0002b794) main_cam5_pane_t4_ParamLimits

0xd610,	// (0x0002b794) main_cam5_pane_t4

0xd628,	// (0x0002b7ac) main_cam5_pane_t5_ParamLimits

0xd628,	// (0x0002b7ac) main_cam5_pane_t5

0xd63c,	// (0x0002b7c0) main_cam5_pane_t6_ParamLimits

0xd63c,	// (0x0002b7c0) main_cam5_pane_t6

0xd650,	// (0x0002b7d4) main_cam5_pane_t7_ParamLimits

0xd650,	// (0x0002b7d4) main_cam5_pane_t7

0xd662,	// (0x0002b7e6) main_cam5_pane_t8_ParamLimits

0xd662,	// (0x0002b7e6) main_cam5_pane_t8

0xd67e,	// (0x0002b802) main_cam5_pane_t9_ParamLimits

0xd67e,	// (0x0002b802) main_cam5_pane_t9

0xd690,	// (0x0002b814) main_cam5_pane_t10_ParamLimits

0xd690,	// (0x0002b814) main_cam5_pane_t10

0xd6a2,	// (0x0002b826) main_cam5_pane_t11_ParamLimits

0xd6a2,	// (0x0002b826) main_cam5_pane_t11

0xd6da,	// (0x0002b85e) main_cam5_pane_t12_ParamLimits

0xd6da,	// (0x0002b85e) main_cam5_pane_t12

0xd6ef,	// (0x0002b873) main_cam5_pane_t13_ParamLimits

0xd6ef,	// (0x0002b873) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0002dbe4) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0002dbe4) main_cam5_pane_t

0x0eef,	// (0x0001f073) popup_scut_keymap_window_ParamLimits

0x0eef,	// (0x0001f073) popup_scut_keymap_window

0x753f,	// (0x000256c3) aid_size_cell_brow_shortcut

0xa5b9,	// (0x0002873d) bg_popup_window_pane_cp010

0x754b,	// (0x000256cf) grid_scut_pane

0x7557,	// (0x000256db) cell_scut_pane_ParamLimits

0x7557,	// (0x000256db) cell_scut_pane

0x756e,	// (0x000256f2) cell_scut_pane_g1

0xd70c,	// (0x0002b890) cell_scut_pane_t1

0xd71b,	// (0x0002b89f) cell_scut_pane_t2

0x7577,	// (0x000256fb) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0002dbff) cell_scut_pane_t

0x5e72,	// (0x00023ff6) main_mup3_pane_g8_ParamLimits

0x5e72,	// (0x00023ff6) main_mup3_pane_g8

0x20d5,	// (0x00020259) area_vitu2_query_pane_ParamLimits

0x20d5,	// (0x00020259) area_vitu2_query_pane

0x72d7,	// (0x0002545b) input_focus_pane_cp08

0xd72a,	// (0x0002b8ae) area_vitu2_query_pane_g1

0x7585,	// (0x00025709) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0002dc06) area_vitu2_query_pane_g

0x7596,	// (0x0002571a) area_vitu2_query_pane_t1_ParamLimits

0x7596,	// (0x0002571a) area_vitu2_query_pane_t1

0x75aa,	// (0x0002572e) area_vitu2_query_pane_t2_ParamLimits

0x75aa,	// (0x0002572e) area_vitu2_query_pane_t2

0x75be,	// (0x00025742) area_vitu2_query_pane_t3_ParamLimits

0x75be,	// (0x00025742) area_vitu2_query_pane_t3

0xd736,	// (0x0002b8ba) area_vitu2_query_pane_t4_ParamLimits

0xd736,	// (0x0002b8ba) area_vitu2_query_pane_t4

0xd75e,	// (0x0002b8e2) area_vitu2_query_pane_t5_ParamLimits

0xd75e,	// (0x0002b8e2) area_vitu2_query_pane_t5

0xd786,	// (0x0002b90a) area_vitu2_query_pane_t6_ParamLimits

0xd786,	// (0x0002b90a) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0002dc0b) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0002dc0b) area_vitu2_query_pane_t

0x75e6,	// (0x0002576a) bg_button_pane_cp018

0x75f4,	// (0x00025778) bg_button_pane_cp021

0x7600,	// (0x00025784) bg_button_pane_cp022

0x7611,	// (0x00025795) input_focus_pane_cp09

0xae49,	// (0x00028fcd) aid_size_touch_mv_arrow_left

0xae74,	// (0x00028ff8) aid_size_touch_mv_arrow_right

0x6ecf,	// (0x00025053) main_cset_slider_pane_g16_ParamLimits

0x6ecf,	// (0x00025053) main_cset_slider_pane_g16

0x6edd,	// (0x00025061) main_cset_slider_pane_g17_ParamLimits

0x6edd,	// (0x00025061) main_cset_slider_pane_g17

0x752c,	// (0x000256b0) cell_cam4_burst_pane_g1_ParamLimits

0x9c68,	// (0x00027dec) compa_mode_pane

0x70f1,	// (0x00025275) popup_vtel_slider_window_g3_ParamLimits

0x70f1,	// (0x00025275) popup_vtel_slider_window_g3

0x7105,	// (0x00025289) popup_vtel_slider_window_g4_ParamLimits

0x7105,	// (0x00025289) popup_vtel_slider_window_g4

0x7119,	// (0x0002529d) popup_vtel_slider_window_t1_ParamLimits

0x7119,	// (0x0002529d) popup_vtel_slider_window_t1

0x0f3e,	// (0x0001f0c2) main_cl_pane

0x142e,	// (0x0001f5b2) popup_imed_adjust2_window_ParamLimits

0xc43f,	// (0x0002a5c3) bg_tb_trans_pane_cp05_ParamLimits

0xcdc0,	// (0x0002af44) popup_imed_adjust2_window_g1_ParamLimits

0xcdcf,	// (0x0002af53) popup_imed_adjust2_window_g2_ParamLimits

0xcdcf,	// (0x0002af53) popup_imed_adjust2_window_g2

0xcddb,	// (0x0002af5f) popup_imed_adjust2_window_g3_ParamLimits

0xcddb,	// (0x0002af5f) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0002d972) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0002d972) popup_imed_adjust2_window_g

0xcde7,	// (0x0002af6b) popup_imed_adjust2_window_t1_ParamLimits

0xcdff,	// (0x0002af83) slider_imed_adjust_pane_ParamLimits

0xce13,	// (0x0002af97) slider_imed_adjust_pane_g1_ParamLimits

0xce23,	// (0x0002afa7) slider_imed_adjust_pane_g2_ParamLimits

0xce33,	// (0x0002afb7) slider_imed_adjust_pane_g3_ParamLimits

0xce44,	// (0x0002afc8) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0002d979) slider_imed_adjust_pane_g_ParamLimits

0x1e5c,	// (0x0001ffe0) aid_touch_area_cam4_ParamLimits

0x1e5c,	// (0x0001ffe0) aid_touch_area_cam4

0x1e6c,	// (0x0001fff0) battery_pane_cp01

0x1ef3,	// (0x00020077) main_camera4_pane_g6_ParamLimits

0x1ef3,	// (0x00020077) main_camera4_pane_g6

0x1f11,	// (0x00020095) main_camera4_pane_t2_ParamLimits

0x1f11,	// (0x00020095) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0002da80) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0002da80) main_camera4_pane_t

0x1f7c,	// (0x00020100) aid_touch_area_vid4_ParamLimits

0x1f7c,	// (0x00020100) aid_touch_area_vid4

0x1fbc,	// (0x00020140) main_video4_pane_g5_ParamLimits

0x1fbc,	// (0x00020140) main_video4_pane_g5

0x1fe0,	// (0x00020164) vid4_progress_pane_ParamLimits

0x1fe0,	// (0x00020164) vid4_progress_pane

0xd3d1,	// (0x0002b555) main_cset_slider_pane_g18_ParamLimits

0xd3d1,	// (0x0002b555) main_cset_slider_pane_g18

0xd5ce,	// (0x0002b752) cell_cam4_burst_pane_g2_ParamLimits

0xd5ce,	// (0x0002b752) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0002dbdf) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0002dbdf) cell_cam4_burst_pane_g

0x7622,	// (0x000257a6) bg_cl_pane_ParamLimits

0x7622,	// (0x000257a6) bg_cl_pane

0x762e,	// (0x000257b2) cl_header_pane_ParamLimits

0x762e,	// (0x000257b2) cl_header_pane

0x763a,	// (0x000257be) cl_listscroll_pane_ParamLimits

0x763a,	// (0x000257be) cl_listscroll_pane

0xd7d2,	// (0x0002b956) bg_cl_pane_g1

0xd7da,	// (0x0002b95e) bg_cl_pane_g2

0xd7e2,	// (0x0002b966) bg_cl_pane_g3

0xd7ea,	// (0x0002b96e) bg_cl_pane_g4

0xd7f2,	// (0x0002b976) bg_cl_pane_g5

0xd7fa,	// (0x0002b97e) bg_cl_pane_g6

0xd802,	// (0x0002b986) bg_cl_pane_g7

0xd80a,	// (0x0002b98e) bg_cl_pane_g8

0xd812,	// (0x0002b996) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0002dc1a) bg_cl_pane_g

0x7646,	// (0x000257ca) aid_height_cl_leading_ParamLimits

0x7646,	// (0x000257ca) aid_height_cl_leading

0x7652,	// (0x000257d6) aid_height_cl_text_ParamLimits

0x7652,	// (0x000257d6) aid_height_cl_text

0xd145,	// (0x0002b2c9) bg_cl_header_pane_ParamLimits

0xd145,	// (0x0002b2c9) bg_cl_header_pane

0x766a,	// (0x000257ee) cl_header_pane_g1_ParamLimits

0x766a,	// (0x000257ee) cl_header_pane_g1

0x7677,	// (0x000257fb) cl_header_pane_t1_ParamLimits

0x7677,	// (0x000257fb) cl_header_pane_t1

0xd81a,	// (0x0002b99e) cl_list_pane

0xd3a4,	// (0x0002b528) hc_scroll_pane_cp01

0xa7f2,	// (0x00028976) bg_cl_header_pane_g1

0xd28a,	// (0x0002b40e) bg_cl_header_pane_g2

0xa812,	// (0x00028996) bg_cl_header_pane_g3

0xd29a,	// (0x0002b41e) bg_cl_header_pane_g4

0xd292,	// (0x0002b416) bg_cl_header_pane_g5

0xd4e9,	// (0x0002b66d) bg_cl_header_pane_g6

0xd2b2,	// (0x0002b436) bg_cl_header_pane_g7

0xd2ba,	// (0x0002b43e) bg_cl_header_pane_g8

0xd2aa,	// (0x0002b42e) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0002dc2d) bg_cl_header_pane_g

0x7689,	// (0x0002580d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7689,	// (0x0002580d) hc_cl_list_double_graphic_heading_pane

0x769d,	// (0x00025821) hc_cl_list_single_graphic_pane_ParamLimits

0x769d,	// (0x00025821) hc_cl_list_single_graphic_pane

0x76b7,	// (0x0002583b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76b7,	// (0x0002583b) hc_cl_list_single_graphic_pane_g1

0x76c3,	// (0x00025847) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76c3,	// (0x00025847) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0002dc40) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0002dc40) hc_cl_list_single_graphic_pane_g

0x76d7,	// (0x0002585b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76d7,	// (0x0002585b) hc_cl_list_single_graphic_pane_t1

0x76b7,	// (0x0002583b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76b7,	// (0x0002583b) hc_cl_list_double_graphic_heading_pane_g1

0x76ec,	// (0x00025870) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76ec,	// (0x00025870) hc_cl_list_double_graphic_heading_pane_g2

0x7700,	// (0x00025884) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7700,	// (0x00025884) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0002dc45) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0002dc45) hc_cl_list_double_graphic_heading_pane_g

0x7714,	// (0x00025898) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7714,	// (0x00025898) hc_cl_list_double_graphic_heading_pane_t1

0x7729,	// (0x000258ad) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7729,	// (0x000258ad) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0002dc4c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0002dc4c) hc_cl_list_double_graphic_heading_pane_t

0x2505,	// (0x00020689) vid4_progress_pane_g1

0x2515,	// (0x00020699) vid4_progress_pane_g2

0x2525,	// (0x000206a9) vid4_progress_pane_g3

0x2537,	// (0x000206bb) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0002dc51) vid4_progress_pane_g

0x254f,	// (0x000206d3) vid4_progress_pane_t1

0x2565,	// (0x000206e9) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0002dc5c) vid4_progress_pane_t

0x2590,	// (0x00020714) wait_bar_pane_cp07

0xc63a,	// (0x0002a7be) blid_firmament_pane_ParamLimits

0xc67d,	// (0x0002a801) popup_blid_sat_info2_window_g1

0xc6a1,	// (0x0002a825) popup_blid_sat_info2_window_t3

0xc6af,	// (0x0002a833) popup_blid_sat_info2_window_t4

0xc6bd,	// (0x0002a841) popup_blid_sat_info2_window_t5

0xc6cb,	// (0x0002a84f) popup_blid_sat_info2_window_t6

0xc6db,	// (0x0002a85f) popup_blid_sat_info2_window_t7

0xc6e9,	// (0x0002a86d) popup_blid_sat_info2_window_t8

0xc6f7,	// (0x0002a87b) popup_blid_sat_info2_window_t9

0xc705,	// (0x0002a889) popup_blid_sat_info2_window_t10

0xc7c7,	// (0x0002a94b) aid_firma_cardinal_ParamLimits

0xc7db,	// (0x0002a95f) blid_firmament_pane_t1_ParamLimits

0xc7f2,	// (0x0002a976) blid_firmament_pane_t2_ParamLimits

0xc809,	// (0x0002a98d) blid_firmament_pane_t3_ParamLimits

0xc820,	// (0x0002a9a4) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0002d866) blid_firmament_pane_t_ParamLimits

0xc837,	// (0x0002a9bb) blid_sat_info_pane_ParamLimits

0x1394,	// (0x0001f518) main_cam_set_pane_ParamLimits

0x659e,	// (0x00024722) aid_size_cell_colour_35_ParamLimits

0x65b8,	// (0x0002473c) aid_size_cell_colour_112_ParamLimits

0x65cf,	// (0x00024753) aid_size_cell_effect_ParamLimits

0xa529,	// (0x000286ad) bg_tb_trans_pane_cp02_ParamLimits

0xad9a,	// (0x00028f1e) heading_imed_pane_ParamLimits

0x65e9,	// (0x0002476d) listscroll_imed_pane_ParamLimits

0xba2b,	// (0x00029baf) popup_call2_audio_first_window_g5_ParamLimits

0xba2b,	// (0x00029baf) popup_call2_audio_first_window_g5

0x1c18,	// (0x0001fd9c) aid_size_touch_image3_arrow_left_ParamLimits

0x1c18,	// (0x0001fd9c) aid_size_touch_image3_arrow_left

0x1c2e,	// (0x0001fdb2) aid_size_touch_image3_arrow_right_ParamLimits

0x1c2e,	// (0x0001fdb2) aid_size_touch_image3_arrow_right

0x257a,	// (0x000206fe) vid4_progress_pane_t3

0x6889,	// (0x00024a0d) main_hwr_training_symbol_option_pane_ParamLimits

0x6889,	// (0x00024a0d) main_hwr_training_symbol_option_pane

0xd0ad,	// (0x0002b231) popup_hwr_training_preview_window_ParamLimits

0xd0ad,	// (0x0002b231) popup_hwr_training_preview_window

0x18d6,	// (0x0001fa5a) hwr_training_navi_pane_g5_ParamLimits

0x18d6,	// (0x0001fa5a) hwr_training_navi_pane_g5

0xd278,	// (0x0002b3fc) popup_char_count_window

0x0f30,	// (0x0001f0b4) bg_popup_sub_pane_cp20_ParamLimits

0x2446,	// (0x000205ca) list_vitu2_match_list_pane_ParamLimits

0x2452,	// (0x000205d6) vitu2_page_scroll_pane_ParamLimits

0x2452,	// (0x000205d6) vitu2_page_scroll_pane

0xd845,	// (0x0002b9c9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd845,	// (0x0002b9c9) list_single_hwr_training_symbol_option_pane

0xd858,	// (0x0002b9dc) list_single_hwr_training_symbol_option_pane_g1

0xd860,	// (0x0002b9e4) list_single_hwr_training_symbol_option_pane_t1

0xd86e,	// (0x0002b9f2) bg_button_pane_cp023

0xd877,	// (0x0002b9fb) bg_button_pane_cp024

0x7776,	// (0x000258fa) vitu2_page_scroll_pane_g1

0x777e,	// (0x00025902) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0002dc63) vitu2_page_scroll_pane_g

0x7786,	// (0x0002590a) vitu2_page_scroll_pane_t1

0xa537,	// (0x000286bb) popup_char_count_window_g1

0xd8aa,	// (0x0002ba2e) popup_char_count_window_g2

0xd40b,	// (0x0002b58f) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0002dc68) popup_char_count_window_g

0xd8b3,	// (0x0002ba37) popup_char_count_window_t1

0x0f3e,	// (0x0001f0c2) main_vded2_pane

0xcdac,	// (0x0002af30) aid_size_cell_imed_line

0xcdb6,	// (0x0002af3a) grid_imed_line_width_pane

0x204c,	// (0x000201d0) vid4_indicators_pane_g4

0xd8c1,	// (0x0002ba45) cell_imed_line_width_pane_ParamLimits

0xd8c1,	// (0x0002ba45) cell_imed_line_width_pane

0xd8d5,	// (0x0002ba59) cell_imed_line_width_pane_g1

0xd6d2,	// (0x0002b856) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0002dc6f) cell_imed_line_width_pane_g

0x7795,	// (0x00025919) main_vded2_pane_g1_ParamLimits

0x7795,	// (0x00025919) main_vded2_pane_g1

0x77a2,	// (0x00025926) main_vded2_pane_g2_ParamLimits

0x77a2,	// (0x00025926) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0002dc74) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0002dc74) main_vded2_pane_g

0x77b0,	// (0x00025934) vded2_slider_pane_ParamLimits

0x77b0,	// (0x00025934) vded2_slider_pane

0x77bd,	// (0x00025941) aid_size_touch_vded2_end

0x77c7,	// (0x0002594b) aid_size_touch_vded2_playhead

0xd8de,	// (0x0002ba62) aid_size_touch_vded2_start

0xd8e6,	// (0x0002ba6a) vded2_slider_bg_pane

0xd8ef,	// (0x0002ba73) vded2_slider_pane_g1

0xd902,	// (0x0002ba86) vded2_slider_pane_g2

0x77cf,	// (0x00025953) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0002dc79) vded2_slider_pane_g

0xd90a,	// (0x0002ba8e) vded2_slider_bg_pane_g1

0xd913,	// (0x0002ba97) vded2_slider_bg_pane_g2

0xd91c,	// (0x0002baa0) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0002dc80) vded2_slider_bg_pane_g

0x4e6a,	// (0x00022fee) aid_postcard_touch_down_pane_ParamLimits

0x4e6a,	// (0x00022fee) aid_postcard_touch_down_pane

0x4e7a,	// (0x00022ffe) aid_postcard_touch_up_pane_ParamLimits

0x4e7a,	// (0x00022ffe) aid_postcard_touch_up_pane

0x0f3e,	// (0x0001f0c2) main_blid2_pane

0x13bd,	// (0x0001f541) popup_blid2_search_window

0x9c68,	// (0x00027dec) blid2_gps_pane

0x9c68,	// (0x00027dec) blid2_navig_pane

0x9c68,	// (0x00027dec) blid2_search_pane

0x9c68,	// (0x00027dec) blid2_tripm_pane

0x77d8,	// (0x0002595c) blid2_search_pane_g1_ParamLimits

0x77d8,	// (0x0002595c) blid2_search_pane_g1

0x77e8,	// (0x0002596c) blid2_search_pane_t1_ParamLimits

0x77e8,	// (0x0002596c) blid2_search_pane_t1

0x77fa,	// (0x0002597e) aid_size_cell_blid2_gps_ParamLimits

0x77fa,	// (0x0002597e) aid_size_cell_blid2_gps

0x780a,	// (0x0002598e) blid2_gps_pane_g1_ParamLimits

0x780a,	// (0x0002598e) blid2_gps_pane_g1

0x7816,	// (0x0002599a) grid_blid2_satellite_pane_ParamLimits

0x7816,	// (0x0002599a) grid_blid2_satellite_pane

0x7826,	// (0x000259aa) blid2_navig_pane_g1_ParamLimits

0x7826,	// (0x000259aa) blid2_navig_pane_g1

0x7832,	// (0x000259b6) blid2_navig_pane_t1_ParamLimits

0x7832,	// (0x000259b6) blid2_navig_pane_t1

0x7844,	// (0x000259c8) blid2_navig_pane_t2_ParamLimits

0x7844,	// (0x000259c8) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0002dc87) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0002dc87) blid2_navig_pane_t

0x7856,	// (0x000259da) blid2_navig_ring_pane_ParamLimits

0x7856,	// (0x000259da) blid2_navig_ring_pane

0x7866,	// (0x000259ea) blid2_speed_pane_ParamLimits

0x7866,	// (0x000259ea) blid2_speed_pane

0x7872,	// (0x000259f6) blid2_tripm_pane_g1_ParamLimits

0x7872,	// (0x000259f6) blid2_tripm_pane_g1

0x7882,	// (0x00025a06) blid2_tripm_pane_g2_ParamLimits

0x7882,	// (0x00025a06) blid2_tripm_pane_g2

0x788e,	// (0x00025a12) blid2_tripm_pane_g3_ParamLimits

0x788e,	// (0x00025a12) blid2_tripm_pane_g3

0x789a,	// (0x00025a1e) blid2_tripm_pane_g4_ParamLimits

0x789a,	// (0x00025a1e) blid2_tripm_pane_g4

0x78a6,	// (0x00025a2a) blid2_tripm_pane_g5_ParamLimits

0x78a6,	// (0x00025a2a) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0002dc8c) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0002dc8c) blid2_tripm_pane_g

0x78c2,	// (0x00025a46) blid2_tripm_pane_t1_ParamLimits

0x78c2,	// (0x00025a46) blid2_tripm_pane_t1

0x78d6,	// (0x00025a5a) blid2_tripm_pane_t2_ParamLimits

0x78d6,	// (0x00025a5a) blid2_tripm_pane_t2

0x78e8,	// (0x00025a6c) blid2_tripm_pane_t3_ParamLimits

0x78e8,	// (0x00025a6c) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0002dc99) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0002dc99) blid2_tripm_pane_t

0x791a,	// (0x00025a9e) cell_blid2_satellite_pane_ParamLimits

0x791a,	// (0x00025a9e) cell_blid2_satellite_pane

0x7934,	// (0x00025ab8) cell_blid2_satellite_pane_g1

0xd925,	// (0x0002baa9) cell_blid2_satellite_pane_t1

0xc847,	// (0x0002a9cb) blid2_speed_pane_g1

0xd933,	// (0x0002bab7) blid2_speed_pane_t1

0xd941,	// (0x0002bac5) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0002dca2) blid2_speed_pane_t

0xc847,	// (0x0002a9cb) blid2_navig_ring_pane_g1

0x793d,	// (0x00025ac1) blid2_navig_ring_pane_g2

0x7945,	// (0x00025ac9) blid2_navig_ring_pane_g3

0x794d,	// (0x00025ad1) blid2_navig_ring_pane_g4

0x7955,	// (0x00025ad9) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0002dca7) blid2_navig_ring_pane_g

0x9c68,	// (0x00027dec) bg_popup_window_pane_cp011

0xd94f,	// (0x0002bad3) popup_blid2_search_window_g1

0xd957,	// (0x0002badb) popup_blid2_search_window_t1

0xd965,	// (0x0002bae9) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0002dcb2) popup_blid2_search_window_t

0xa701,	// (0x00028885) main_browser_pane_g1

0xa3b1,	// (0x00028535) main_browser_pane_ParamLimits

0x1394,	// (0x0001f518) bg_button_pane_cp011_ParamLimits

0x236d,	// (0x000204f1) cell_vitu2_function_pane_g1_ParamLimits

0xc43f,	// (0x0002a5c3) bg_popup_sub_pane_cp22_ParamLimits

0x72d7,	// (0x0002545b) input_focus_pane_cp08_ParamLimits

0x72ee,	// (0x00025472) popup_vitu2_query_button_pane_ParamLimits

0x72ee,	// (0x00025472) popup_vitu2_query_button_pane

0x72ff,	// (0x00025483) popup_vitu2_query_input_button_pane

0xd524,	// (0x0002b6a8) popup_vitu2_query_window_g1_ParamLimits

0x7309,	// (0x0002548d) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0002dbb3) popup_vitu2_query_window_g_ParamLimits

0x9c68,	// (0x00027dec) bg_button_pane_cp026

0x795d,	// (0x00025ae1) popup_vitu2_query_input_button_pane_g1

0x9c68,	// (0x00027dec) bg_button_pane_cp025

0xd973,	// (0x0002baf7) popup_vitu2_query_button_pane_t1

0x5b93,	// (0x00023d17) main_mp3_pane_t6

0x5ba3,	// (0x00023d27) popup_slider_window_cp01

0x1f31,	// (0x000200b5) cam4_battery_pane

0x200b,	// (0x0002018f) cam4_battery_pane_cp02

0x24fd,	// (0x00020681) cam4_battery_pane_cp01

0x24fd,	// (0x00020681) cam4_battery_pane_cp03

0xd8f8,	// (0x0002ba7c) cam4_battery_pane_g1

0xc847,	// (0x0002a9cb) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0002dcb7) cam4_battery_pane_g

0xc713,	// (0x0002a897) popup_blid_sat_info2_window_t11

0xae49,	// (0x00028fcd) aid_size_touch_mv_arrow_left_ParamLimits

0xae74,	// (0x00028ff8) aid_size_touch_mv_arrow_right_ParamLimits

0xaed2,	// (0x00029056) navi_pane_g1_ParamLimits

0xaede,	// (0x00029062) navi_pane_g2_ParamLimits

0xaf0c,	// (0x00029090) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0002d565) navi_pane_g_ParamLimits

0x487a,	// (0x000229fe) navi_pane_mv_t1_ParamLimits

0x65f5,	// (0x00024779) grid_imed_effect_pane_ParamLimits

0x32bf,	// (0x00021443) aid_placing_vt_slider_lsc

0xa650,	// (0x000287d4) aid_placing_vt_slider_prt

0xa529,	// (0x000286ad) bg_tb_trans_pane_cp01_ParamLimits

0xc9ac,	// (0x0002ab30) popup_image_details_window_g1_ParamLimits

0xc9bf,	// (0x0002ab43) popup_image_details_window_g2_ParamLimits

0xc9d4,	// (0x0002ab58) popup_image_details_window_g3_ParamLimits

0xc9d4,	// (0x0002ab58) popup_image_details_window_g3

0xf727,	// (0x0002d8ab) popup_image_details_window_g_ParamLimits

0xc9e8,	// (0x0002ab6c) popup_image_details_window_t1_ParamLimits

0xc9fa,	// (0x0002ab7e) popup_image_details_window_t2_ParamLimits

0xca13,	// (0x0002ab97) popup_image_details_window_t3_ParamLimits

0xca27,	// (0x0002abab) popup_image_details_window_t4_ParamLimits

0xca42,	// (0x0002abc6) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0002d8b2) popup_image_details_window_t_ParamLimits

0x765e,	// (0x000257e2) cl_header_name_pane_ParamLimits

0x765e,	// (0x000257e2) cl_header_name_pane

0x7965,	// (0x00025ae9) cl_header_name_pane_t1_ParamLimits

0x7965,	// (0x00025ae9) cl_header_name_pane_t1

0x797c,	// (0x00025b00) cl_header_name_pane_t2_ParamLimits

0x797c,	// (0x00025b00) cl_header_name_pane_t2

0x79a6,	// (0x00025b2a) cl_header_name_pane_t3_ParamLimits

0x79a6,	// (0x00025b2a) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0002dcbc) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0002dcbc) cl_header_name_pane_t

0xaf9b,	// (0x0002911f) navi_pane_mv_g2_ParamLimits

0xd235,	// (0x0002b3b9) field_vitu2_entry_pane_g1_ParamLimits

0xd241,	// (0x0002b3c5) field_vitu2_entry_pane_g2_ParamLimits

0xd24d,	// (0x0002b3d1) field_vitu2_entry_pane_g3_ParamLimits

0xd24d,	// (0x0002b3d1) field_vitu2_entry_pane_g3

0xf92e,	// (0x0002dab2) field_vitu2_entry_pane_g_ParamLimits

0x2239,	// (0x000203bd) cell_vitu2_itu_pane_g1_ParamLimits

0x224b,	// (0x000203cf) cell_vitu2_itu_pane_g2_ParamLimits

0x224b,	// (0x000203cf) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0002dabe) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0002dabe) cell_vitu2_itu_pane_g

0x1394,	// (0x0001f518) bg_vkb2_func_pane_cp05_ParamLimits

0x1394,	// (0x0001f518) bg_vkb2_func_pane_cp05

0x1394,	// (0x0001f518) bg_vkb2_func_pane_cp03

0x1394,	// (0x0001f518) bg_vkb2_func_pane_cp04

0x1394,	// (0x0001f518) bg_vkb2_func_pane_cp10_ParamLimits

0x1394,	// (0x0001f518) bg_vkb2_func_pane_cp10

0x7600,	// (0x00025784) bg_vkb2_func_pane_cp08

0x75e6,	// (0x0002576a) bg_vkb2_func_pane_cp06

0x75f4,	// (0x00025778) bg_vkb2_func_pane_cp07

0xd880,	// (0x0002ba04) bg_vkb2_func_pane_cp11_ParamLimits

0xd880,	// (0x0002ba04) bg_vkb2_func_pane_cp11

0xd895,	// (0x0002ba19) bg_vkb2_func_pane_cp12_ParamLimits

0xd895,	// (0x0002ba19) bg_vkb2_func_pane_cp12

0x9c68,	// (0x00027dec) bg_vkb2_func_pane_cp09

0xd28a,	// (0x0002b40e) bg_vkb2_func_pane_g1

0xa812,	// (0x00028996) bg_vkb2_func_pane_g2

0xd292,	// (0x0002b416) bg_vkb2_func_pane_g3

0xd29a,	// (0x0002b41e) bg_vkb2_func_pane_g4

0xd4e9,	// (0x0002b66d) bg_vkb2_func_pane_g5

0xd2b2,	// (0x0002b436) bg_vkb2_func_pane_g6

0xd2ba,	// (0x0002b43e) bg_vkb2_func_pane_g7

0xd2aa,	// (0x0002b42e) bg_vkb2_func_pane_g8

0xa7f2,	// (0x00028976) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0002dcc3) bg_vkb2_func_pane_g

0x78b4,	// (0x00025a38) blid2_tripm_pane_g6_ParamLimits

0x78b4,	// (0x00025a38) blid2_tripm_pane_g6

0xd179,	// (0x0002b2fd) mp4_progress_pane_g1

0x790e,	// (0x00025a92) blid2_tripm_values_pane_ParamLimits

0x790e,	// (0x00025a92) blid2_tripm_values_pane

0x79cb,	// (0x00025b4f) blid2_tripm_values_pane_t1

0x79d9,	// (0x00025b5d) blid2_tripm_values_pane_t2

0x79e7,	// (0x00025b6b) blid2_tripm_values_pane_t3

0x79f5,	// (0x00025b79) blid2_tripm_values_pane_t4

0x7a03,	// (0x00025b87) blid2_tripm_values_pane_t5

0x7a11,	// (0x00025b95) blid2_tripm_values_pane_t6

0x7a1f,	// (0x00025ba3) blid2_tripm_values_pane_t7

0x7a2d,	// (0x00025bb1) blid2_tripm_values_pane_t8

0x7a3b,	// (0x00025bbf) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0002dcd6) blid2_tripm_values_pane_t

0x32ff,	// (0x00021483) call_video_pane_t1_ParamLimits

0x3320,	// (0x000214a4) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0002d3ee) call_video_pane_t_ParamLimits

0x4da1,	// (0x00022f25) msg_header_pane_g1_ParamLimits

0xb175,	// (0x000292f9) msg_header_pane_g2_ParamLimits

0xb175,	// (0x000292f9) msg_header_pane_g2

0x0001,

0xf484,	// (0x0002d608) msg_header_pane_g_ParamLimits

0xf484,	// (0x0002d608) msg_header_pane_g

0xa3b1,	// (0x00028535) main_clock2_pane_ParamLimits

0x6412,	// (0x00024596) grid_clock2_toolbar_pane_ParamLimits

0x6412,	// (0x00024596) grid_clock2_toolbar_pane

0x6412,	// (0x00024596) listscroll_clock2_pane_ParamLimits

0x6412,	// (0x00024596) listscroll_clock2_pane

0x64c2,	// (0x00024646) main_clock2_pane_t3_ParamLimits

0x64c2,	// (0x00024646) main_clock2_pane_t3

0x64d4,	// (0x00024658) main_clock2_pane_t4_ParamLimits

0x64d4,	// (0x00024658) main_clock2_pane_t4

0xd981,	// (0x0002bb05) cell_clock2_toolbar_pane

0xd989,	// (0x0002bb0d) cell_clock2_toolbar_pane_cp01

0xd989,	// (0x0002bb0d) cell_clock2_toolbar_pane_cp02

0xd991,	// (0x0002bb15) cell_clock2_toolbar_pane_cp03

0xd999,	// (0x0002bb1d) list_clock2_pane

0xadce,	// (0x00028f52) scroll_pane_cp10

0xd9a1,	// (0x0002bb25) list_single_clock2_pane_ParamLimits

0xd9a1,	// (0x0002bb25) list_single_clock2_pane

0xa5b9,	// (0x0002873d) list_highlight_pane_cp08

0xd9ae,	// (0x0002bb32) list_single_clock2_pane_t1

0xd9bc,	// (0x0002bb40) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0002dce9) list_single_clock2_pane_t

0x9c68,	// (0x00027dec) bg_button_pane_cp10

0xd9ca,	// (0x0002bb4e) cell_clock2_toolbar_pane_g1

0x132f,	// (0x0001f4b3) aid_main_viewer_pane_g1_ParamLimits

0x132f,	// (0x0001f4b3) aid_main_viewer_pane_g1

0x133b,	// (0x0001f4bf) aid_main_viewer_pane_g2_ParamLimits

0x133b,	// (0x0001f4bf) aid_main_viewer_pane_g2

0x4e26,	// (0x00022faa) aid_main_viewer_pane_g3_ParamLimits

0x4e26,	// (0x00022faa) aid_main_viewer_pane_g3

0x4e37,	// (0x00022fbb) aid_main_viewer_pane_g4_ParamLimits

0x4e37,	// (0x00022fbb) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0002d619) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0002d619) aid_main_viewer_pane_g

0x1387,	// (0x0001f50b) main_calc_pane_ParamLimits

0x13a2,	// (0x0001f526) main_dialer2_pane_ParamLimits

0x0f3e,	// (0x0001f0c2) main_cam6_pane

0x0f3e,	// (0x0001f0c2) main_vid6_pane

0x641e,	// (0x000245a2) listscroll_gen_pane_cp06_ParamLimits

0x641e,	// (0x000245a2) listscroll_gen_pane_cp06

0x64e6,	// (0x0002466a) main_clock2_pane_t5_ParamLimits

0x64e6,	// (0x0002466a) main_clock2_pane_t5

0x6533,	// (0x000246b7) aid_call2_pane_cp10_ParamLimits

0x6545,	// (0x000246c9) aid_call_pane_cp10_ParamLimits

0xae3d,	// (0x00028fc1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae3d,	// (0x00028fc1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6557,	// (0x000246db) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6557,	// (0x000246db) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae3d,	// (0x00028fc1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0002d967) popup_clock_analogue_window_cp10_g_ParamLimits

0x656d,	// (0x000246f1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6962,	// (0x00024ae6) cell_dialer2_keypad_pane_g2_ParamLimits

0x6962,	// (0x00024ae6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0002da51) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0002da51) cell_dialer2_keypad_pane_g

0x697e,	// (0x00024b02) cell_dialer2_keypad_pane_t1

0x6db7,	// (0x00024f3b) main_cset_text2_pane_ParamLimits

0x6db7,	// (0x00024f3b) main_cset_text2_pane

0xd72a,	// (0x0002b8ae) area_vitu2_query_pane_g1_ParamLimits

0x7585,	// (0x00025709) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0002dc06) area_vitu2_query_pane_g_ParamLimits

0xd7ae,	// (0x0002b932) area_vitu2_query_pane_t7_ParamLimits

0xd7ae,	// (0x0002b932) area_vitu2_query_pane_t7

0x75e6,	// (0x0002576a) bg_button_pane_cp018_ParamLimits

0x75f4,	// (0x00025778) bg_button_pane_cp021_ParamLimits

0x7600,	// (0x00025784) bg_button_pane_cp022_ParamLimits

0x7600,	// (0x00025784) bg_vkb2_func_pane_cp08_ParamLimits

0x75e6,	// (0x0002576a) bg_vkb2_func_pane_cp06_ParamLimits

0x75f4,	// (0x00025778) bg_vkb2_func_pane_cp07_ParamLimits

0x7611,	// (0x00025795) input_focus_pane_cp09_ParamLimits

0x25a1,	// (0x00020725) cam6_autofocus_pane_ParamLimits

0x25a1,	// (0x00020725) cam6_autofocus_pane

0x25c3,	// (0x00020747) cam6_image_uncrop_pane_ParamLimits

0x25c3,	// (0x00020747) cam6_image_uncrop_pane

0x25f0,	// (0x00020774) cam6_indi_pane_ParamLimits

0x25f0,	// (0x00020774) cam6_indi_pane

0x260a,	// (0x0002078e) cam6_mode_pane_ParamLimits

0x260a,	// (0x0002078e) cam6_mode_pane

0x261e,	// (0x000207a2) cam6_timer_pane_ParamLimits

0x261e,	// (0x000207a2) cam6_timer_pane

0x262f,	// (0x000207b3) cam6_zoom_pane_ParamLimits

0x262f,	// (0x000207b3) cam6_zoom_pane

0x7a49,	// (0x00025bcd) cam6_mode_pane_g1_ParamLimits

0x7a49,	// (0x00025bcd) cam6_mode_pane_g1

0x7a55,	// (0x00025bd9) cam6_mode_pane_g2_ParamLimits

0x7a55,	// (0x00025bd9) cam6_mode_pane_g2

0x7a61,	// (0x00025be5) cam6_mode_pane_g3_ParamLimits

0x7a61,	// (0x00025be5) cam6_mode_pane_g3

0x7a6d,	// (0x00025bf1) cam6_mode_pane_g4_ParamLimits

0x7a6d,	// (0x00025bf1) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0002dcee) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0002dcee) cam6_mode_pane_g

0xd1c6,	// (0x0002b34a) bg_tb_trans_pane_cp08_ParamLimits

0xd1c6,	// (0x0002b34a) bg_tb_trans_pane_cp08

0xd9d2,	// (0x0002bb56) cam6_battery_pane_ParamLimits

0xd9d2,	// (0x0002bb56) cam6_battery_pane

0xd9e8,	// (0x0002bb6c) cam6_indi_pane_g1_ParamLimits

0xd9e8,	// (0x0002bb6c) cam6_indi_pane_g1

0xd9fa,	// (0x0002bb7e) cam6_indi_pane_g2_ParamLimits

0xd9fa,	// (0x0002bb7e) cam6_indi_pane_g2

0xda0c,	// (0x0002bb90) cam6_indi_pane_g3_ParamLimits

0xda0c,	// (0x0002bb90) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0002dcf7) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0002dcf7) cam6_indi_pane_g

0xda1e,	// (0x0002bba2) cam6_indi_pane_t1_ParamLimits

0xda1e,	// (0x0002bba2) cam6_indi_pane_t1

0x6ab7,	// (0x00024c3b) cam6_autofocus_pane_g1

0x6aaf,	// (0x00024c33) cam6_autofocus_pane_g2

0x6ac7,	// (0x00024c4b) cam6_autofocus_pane_g3

0x6abf,	// (0x00024c43) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0002dcfe) cam6_autofocus_pane_g

0xda44,	// (0x0002bbc8) cam6_timer_pane_g1

0xda4c,	// (0x0002bbd0) cam6_timer_pane_t1

0xda5a,	// (0x0002bbde) cam6_zoom_cont_pane

0xda62,	// (0x0002bbe6) cam6_zoom_pane_g1

0xda6a,	// (0x0002bbee) cam6_zoom_pane_g2

0x7a79,	// (0x00025bfd) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0002dd07) cam6_zoom_pane_g

0xc847,	// (0x0002a9cb) cam6_battery_pane_g1

0xc847,	// (0x0002a9cb) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0002d86f) cam6_battery_pane_g

0xda72,	// (0x0002bbf6) cam6_zoom_cont_pane_g1

0xda7b,	// (0x0002bbff) cam6_zoom_cont_pane_g2

0xda84,	// (0x0002bc08) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0002dd0e) cam6_zoom_cont_pane_g

0x7a96,	// (0x00025c1a) cam6_mode_pane_cp_ParamLimits

0x7a96,	// (0x00025c1a) cam6_mode_pane_cp

0x7aaa,	// (0x00025c2e) cam6_zoom_pane_cp_ParamLimits

0x7aaa,	// (0x00025c2e) cam6_zoom_pane_cp

0x7ac2,	// (0x00025c46) vid6_image_uncrop_cif_pane_ParamLimits

0x7ac2,	// (0x00025c46) vid6_image_uncrop_cif_pane

0x7aee,	// (0x00025c72) vid6_image_uncrop_nhd_pane_ParamLimits

0x7aee,	// (0x00025c72) vid6_image_uncrop_nhd_pane

0x7b0b,	// (0x00025c8f) vid6_image_uncrop_vga_pane_ParamLimits

0x7b0b,	// (0x00025c8f) vid6_image_uncrop_vga_pane

0x7b2a,	// (0x00025cae) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b2a,	// (0x00025cae) vid6_image_uncrop_wvga_pane

0x7b47,	// (0x00025ccb) vid6_indi_pane_ParamLimits

0x7b47,	// (0x00025ccb) vid6_indi_pane

0xd1c6,	// (0x0002b34a) bg_tb_trans_pane_cp09_ParamLimits

0xd1c6,	// (0x0002b34a) bg_tb_trans_pane_cp09

0xda9c,	// (0x0002bc20) cam6_battery_pane_cp_ParamLimits

0xda9c,	// (0x0002bc20) cam6_battery_pane_cp

0xdaa8,	// (0x0002bc2c) vid6_indi_pane_g1_ParamLimits

0xdaa8,	// (0x0002bc2c) vid6_indi_pane_g1

0xdaba,	// (0x0002bc3e) vid6_indi_pane_g2_ParamLimits

0xdaba,	// (0x0002bc3e) vid6_indi_pane_g2

0xdacc,	// (0x0002bc50) vid6_indi_pane_g3_ParamLimits

0xdacc,	// (0x0002bc50) vid6_indi_pane_g3

0xdae1,	// (0x0002bc65) vid6_indi_pane_g4_ParamLimits

0xdae1,	// (0x0002bc65) vid6_indi_pane_g4

0xdaf6,	// (0x0002bc7a) vid6_indi_pane_g5_ParamLimits

0xdaf6,	// (0x0002bc7a) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0002dd15) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0002dd15) vid6_indi_pane_g

0xdb10,	// (0x0002bc94) vid6_indi_pane_t1_ParamLimits

0xdb10,	// (0x0002bc94) vid6_indi_pane_t1

0xdb26,	// (0x0002bcaa) vid6_indi_pane_t2_ParamLimits

0xdb26,	// (0x0002bcaa) vid6_indi_pane_t2

0xdb4e,	// (0x0002bcd2) vid6_indi_pane_t3_ParamLimits

0xdb4e,	// (0x0002bcd2) vid6_indi_pane_t3

0xdb76,	// (0x0002bcfa) vid6_indi_pane_t4_ParamLimits

0xdb76,	// (0x0002bcfa) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0002dd20) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0002dd20) vid6_indi_pane_t

0xdb9a,	// (0x0002bd1e) wait_bar_pane_cp08

0x7b6a,	// (0x00025cee) main_cset_text2_pane_t1_ParamLimits

0x7b6a,	// (0x00025cee) main_cset_text2_pane_t1

0x7a81,	// (0x00025c05) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a81,	// (0x00025c05) listscroll_gen_pane_cp06_t1

0x0f3e,	// (0x0001f0c2) main_cam6_set_pane

0x1f23,	// (0x000200a7) bg_tb_trans_pane_cp06_ParamLimits

0x1f39,	// (0x000200bd) cam4_indicators_pane_g1_ParamLimits

0x1f4a,	// (0x000200ce) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0002da8e) cam4_indicators_pane_g_ParamLimits

0x1f62,	// (0x000200e6) cam4_indicators_pane_t1_ParamLimits

0x1394,	// (0x0001f518) bg_tb_trans_pane_cp07_ParamLimits

0x2013,	// (0x00020197) vid4_indicators_pane_g1_ParamLimits

0x2027,	// (0x000201ab) vid4_indicators_pane_g2_ParamLimits

0x203b,	// (0x000201bf) vid4_indicators_pane_g3_ParamLimits

0x204c,	// (0x000201d0) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0002daa0) vid4_indicators_pane_g_ParamLimits

0x2068,	// (0x000201ec) vid4_indicators_pane_t1_ParamLimits

0x2505,	// (0x00020689) vid4_progress_pane_g1_ParamLimits

0x2515,	// (0x00020699) vid4_progress_pane_g2_ParamLimits

0x2525,	// (0x000206a9) vid4_progress_pane_g3_ParamLimits

0x2537,	// (0x000206bb) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0002dc51) vid4_progress_pane_g_ParamLimits

0x254f,	// (0x000206d3) vid4_progress_pane_t1_ParamLimits

0x2565,	// (0x000206e9) vid4_progress_pane_t2_ParamLimits

0x257a,	// (0x000206fe) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0002dc5c) vid4_progress_pane_t_ParamLimits

0x2590,	// (0x00020714) wait_bar_pane_cp07_ParamLimits

0x7ba1,	// (0x00025d25) main_cam6_set_pane_g2_ParamLimits

0x7ba1,	// (0x00025d25) main_cam6_set_pane_g2

0x7bad,	// (0x00025d31) main_cset6_listscroll_pane_ParamLimits

0x7bad,	// (0x00025d31) main_cset6_listscroll_pane

0x7bd8,	// (0x00025d5c) main_cset6_slider_pane_ParamLimits

0x7bd8,	// (0x00025d5c) main_cset6_slider_pane

0x7be4,	// (0x00025d68) main_cset6_text2_pane_ParamLimits

0x7be4,	// (0x00025d68) main_cset6_text2_pane

0xdba9,	// (0x0002bd2d) main_cset6_text_pane

0xdbb1,	// (0x0002bd35) main_cset_list_pane_copy1_ParamLimits

0xdbb1,	// (0x0002bd35) main_cset_list_pane_copy1

0xdbc1,	// (0x0002bd45) scroll_pane_cp028_copy1

0x7bf7,	// (0x00025d7b) cset_list_set_pane_copy1

0x7c0d,	// (0x00025d91) aid_position_infowindow_above_copy1

0x7c15,	// (0x00025d99) aid_position_infowindow_below_copy1

0xdbca,	// (0x0002bd4e) cset_list_set_pane_g1_copy1

0xdbd2,	// (0x0002bd56) cset_list_set_pane_g3_copy1_ParamLimits

0xdbd2,	// (0x0002bd56) cset_list_set_pane_g3_copy1

0xdbe1,	// (0x0002bd65) cset_list_set_pane_t1_copy1_ParamLimits

0xdbe1,	// (0x0002bd65) cset_list_set_pane_t1_copy1

0xa529,	// (0x000286ad) list_highlight_pane_cp021_copy1_ParamLimits

0xa529,	// (0x000286ad) list_highlight_pane_cp021_copy1

0xdbf6,	// (0x0002bd7a) cset6_slider_pane_ParamLimits

0xdbf6,	// (0x0002bd7a) cset6_slider_pane

0xdc22,	// (0x0002bda6) main_cset6_slider_pane_g1_ParamLimits

0xdc22,	// (0x0002bda6) main_cset6_slider_pane_g1

0x7c1d,	// (0x00025da1) main_cset6_slider_pane_g2_ParamLimits

0x7c1d,	// (0x00025da1) main_cset6_slider_pane_g2

0xdc4a,	// (0x0002bdce) main_cset6_slider_pane_g3_ParamLimits

0xdc4a,	// (0x0002bdce) main_cset6_slider_pane_g3

0x7c45,	// (0x00025dc9) main_cset6_slider_pane_g4_ParamLimits

0x7c45,	// (0x00025dc9) main_cset6_slider_pane_g4

0x7c51,	// (0x00025dd5) main_cset6_slider_pane_g5_ParamLimits

0x7c51,	// (0x00025dd5) main_cset6_slider_pane_g5

0xd3b9,	// (0x0002b53d) main_cset6_slider_pane_g7_ParamLimits

0xd3b9,	// (0x0002b53d) main_cset6_slider_pane_g7

0xd3c5,	// (0x0002b549) main_cset6_slider_pane_g8_ParamLimits

0xd3c5,	// (0x0002b549) main_cset6_slider_pane_g8

0x7c5f,	// (0x00025de3) main_cset6_slider_pane_g9_ParamLimits

0x7c5f,	// (0x00025de3) main_cset6_slider_pane_g9

0x7c6b,	// (0x00025def) main_cset6_slider_pane_g10_ParamLimits

0x7c6b,	// (0x00025def) main_cset6_slider_pane_g10

0x7c77,	// (0x00025dfb) main_cset6_slider_pane_g11_ParamLimits

0x7c77,	// (0x00025dfb) main_cset6_slider_pane_g11

0x7c83,	// (0x00025e07) main_cset6_slider_pane_g12_ParamLimits

0x7c83,	// (0x00025e07) main_cset6_slider_pane_g12

0xd414,	// (0x0002b598) main_cset6_slider_pane_g13_ParamLimits

0xd414,	// (0x0002b598) main_cset6_slider_pane_g13

0xd420,	// (0x0002b5a4) main_cset6_slider_pane_g14_ParamLimits

0xd420,	// (0x0002b5a4) main_cset6_slider_pane_g14

0x7c8f,	// (0x00025e13) main_cset6_slider_pane_g15_ParamLimits

0x7c8f,	// (0x00025e13) main_cset6_slider_pane_g15

0x7ca7,	// (0x00025e2b) main_cset6_slider_pane_g16_ParamLimits

0x7ca7,	// (0x00025e2b) main_cset6_slider_pane_g16

0x7cb5,	// (0x00025e39) main_cset6_slider_pane_g17_ParamLimits

0x7cb5,	// (0x00025e39) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0002dd29) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0002dd29) main_cset6_slider_pane_g

0xdc62,	// (0x0002bde6) main_cset6_slider_pane_t1_ParamLimits

0xdc62,	// (0x0002bde6) main_cset6_slider_pane_t1

0x7ccf,	// (0x00025e53) main_cset6_slider_pane_t2_ParamLimits

0x7ccf,	// (0x00025e53) main_cset6_slider_pane_t2

0x7cfa,	// (0x00025e7e) main_cset6_slider_pane_t3_ParamLimits

0x7cfa,	// (0x00025e7e) main_cset6_slider_pane_t3

0x7d25,	// (0x00025ea9) main_cset6_slider_pane_t4_ParamLimits

0x7d25,	// (0x00025ea9) main_cset6_slider_pane_t4

0x7d50,	// (0x00025ed4) main_cset6_slider_pane_t5_ParamLimits

0x7d50,	// (0x00025ed4) main_cset6_slider_pane_t5

0xdca3,	// (0x0002be27) main_cset6_slider_pane_t7_ParamLimits

0xdca3,	// (0x0002be27) main_cset6_slider_pane_t7

0x7d7d,	// (0x00025f01) main_cset6_slider_pane_t8_ParamLimits

0x7d7d,	// (0x00025f01) main_cset6_slider_pane_t8

0x7da1,	// (0x00025f25) main_cset6_slider_pane_t9_ParamLimits

0x7da1,	// (0x00025f25) main_cset6_slider_pane_t9

0x7dc5,	// (0x00025f49) main_cset6_slider_pane_t10_ParamLimits

0x7dc5,	// (0x00025f49) main_cset6_slider_pane_t10

0x7de9,	// (0x00025f6d) main_cset6_slider_pane_t11_ParamLimits

0x7de9,	// (0x00025f6d) main_cset6_slider_pane_t11

0xdcd9,	// (0x0002be5d) main_cset6_slider_pane_t14_ParamLimits

0xdcd9,	// (0x0002be5d) main_cset6_slider_pane_t14

0xdd12,	// (0x0002be96) main_cset6_slider_pane_t15_ParamLimits

0xdd12,	// (0x0002be96) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0002dd4e) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0002dd4e) main_cset6_slider_pane_t

0xd082,	// (0x0002b206) cset_slider_pane_g1_copy1

0xd6b4,	// (0x0002b838) cset_slider_pane_g2_copy1

0xd6bd,	// (0x0002b841) cset_slider_pane_g3_copy1

0x9c68,	// (0x00027dec) bg_popup_sub_pane_cp011_copy1

0xdd4b,	// (0x0002becf) main_cset_text_pane_g1_copy1

0xd538,	// (0x0002b6bc) main_cset_text_pane_t1_copy1

0xd546,	// (0x0002b6ca) main_cset_text_pane_t2_copy1

0xd554,	// (0x0002b6d8) main_cset_text_pane_t3_copy1

0xd562,	// (0x0002b6e6) main_cset_text_pane_t4_copy1

0xd570,	// (0x0002b6f4) main_cset_text_pane_t5_copy1

0xdd53,	// (0x0002bed7) main_cset_text_pane_t6_copy1

0xdd61,	// (0x0002bee5) main_cset_text_pane_t7_copy1

0x7ee5,	// (0x00026069) main_cset_text2_pane_t1_copy1

0x1394,	// (0x0001f518) main_ncimui_pane

0x13f3,	// (0x0001f577) popup_query_ncimui_window_ParamLimits

0x13f3,	// (0x0001f577) popup_query_ncimui_window

0xcb2d,	// (0x0002acb1) field_cale_ev2_pane_g4_ParamLimits

0xcb2d,	// (0x0002acb1) field_cale_ev2_pane_g4

0x6902,	// (0x00024a86) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6902,	// (0x00024a86) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0002da28) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0002da28) cell_video_dialer_keypad_pane_g

0x691a,	// (0x00024a9e) cell_video_dialer_keypad_pane_t1

0x9c68,	// (0x00027dec) bg_popup_window_pane_cp012

0xac9f,	// (0x00028e23) heading_pane_cp06

0xdd8d,	// (0x0002bf11) ncim_query_content_pane

0x9c68,	// (0x00027dec) bg_popup_heading_pane_cp01

0xdd95,	// (0x0002bf19) ncim_heading_pane_t1

0xdda3,	// (0x0002bf27) ncim_indicator_popup_pane

0xddb5,	// (0x0002bf39) ncim_query_button_pane

0xddc9,	// (0x0002bf4d) ncim_query_content_pane_t1

0xdddb,	// (0x0002bf5f) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0002dd92) ncim_query_content_pane_t

0xde15,	// (0x0002bf99) ncim_query_list_pane

0xde27,	// (0x0002bfab) ncim_query_popup_pane

0xdda3,	// (0x0002bf27) ncim_indicator_popup_pane_ParamLimits

0x8039,	// (0x000261bd) ncim_query_content_pane_g1_ParamLimits

0x8039,	// (0x000261bd) ncim_query_content_pane_g1

0xddc9,	// (0x0002bf4d) ncim_query_content_pane_t1_ParamLimits

0xdddb,	// (0x0002bf5f) ncim_query_content_pane_t2_ParamLimits

0x8045,	// (0x000261c9) ncim_query_content_pane_t3_ParamLimits

0x8045,	// (0x000261c9) ncim_query_content_pane_t3

0x8062,	// (0x000261e6) ncim_query_content_pane_t4_ParamLimits

0x8062,	// (0x000261e6) ncim_query_content_pane_t4

0x807f,	// (0x00026203) ncim_query_content_pane_t5_ParamLimits

0x807f,	// (0x00026203) ncim_query_content_pane_t5

0xdded,	// (0x0002bf71) ncim_query_content_pane_t6_ParamLimits

0xdded,	// (0x0002bf71) ncim_query_content_pane_t6

0xfc0e,	// (0x0002dd92) ncim_query_content_pane_t_ParamLimits

0xde15,	// (0x0002bf99) ncim_query_list_pane_ParamLimits

0xde27,	// (0x0002bfab) ncim_query_popup_pane_ParamLimits

0xde3b,	// (0x0002bfbf) wait_bar_pane_cp04

0x9c68,	// (0x00027dec) input_focus_pane_cp011

0xde43,	// (0x0002bfc7) ncim_query_popup_pane_t1

0xde51,	// (0x0002bfd5) ncim_list_query_list_pane_ParamLimits

0xde51,	// (0x0002bfd5) ncim_list_query_list_pane

0x9c68,	// (0x00027dec) bg_button_pane_cp027

0xde5e,	// (0x0002bfe2) ncim_query_button_pane_g1

0x9c68,	// (0x00027dec) list_highlight_pane_cp012

0xde68,	// (0x0002bfec) ncim_list_query_list_pane_g1

0xde70,	// (0x0002bff4) ncim_list_query_list_pane_t1

0x1f56,	// (0x000200da) cam4_indicators_pane_g3_ParamLimits

0x1f56,	// (0x000200da) cam4_indicators_pane_g3

0x2058,	// (0x000201dc) vid4_indicators_pane_g5_ParamLimits

0x2058,	// (0x000201dc) vid4_indicators_pane_g5

0x2543,	// (0x000206c7) vid4_progress_pane_g5_ParamLimits

0x2543,	// (0x000206c7) vid4_progress_pane_g5

0x7f25,	// (0x000260a9) main_ncimui_pane_g1

0x7f8d,	// (0x00026111) ncimui_group_query_pane_ParamLimits

0x7f8d,	// (0x00026111) ncimui_group_query_pane

0x7fd5,	// (0x00026159) ncimui_list_pane_ParamLimits

0x7fd5,	// (0x00026159) ncimui_list_pane

0x7ffc,	// (0x00026180) ncimui_text_pane_ParamLimits

0x7ffc,	// (0x00026180) ncimui_text_pane

0x809c,	// (0x00026220) ncimui_text_pane_t1_ParamLimits

0x809c,	// (0x00026220) ncimui_text_pane_t1

0xde7e,	// (0x0002c002) ncimui_list_single_graphic_pane_ParamLimits

0xde7e,	// (0x0002c002) ncimui_list_single_graphic_pane

0x80bb,	// (0x0002623f) ncimui_query_pane_ParamLimits

0x80bb,	// (0x0002623f) ncimui_query_pane

0x9c68,	// (0x00027dec) list_highlight_pane_cp013

0xde8e,	// (0x0002c012) ncim_list_query_list_pane_t1_copy1

0xde9c,	// (0x0002c020) ncim_list_single_graphic_pane_g1

0x80ce,	// (0x00026252) ncim_query_button_pane_cp01

0x80da,	// (0x0002625e) ncim_query_entry_pane_ParamLimits

0x80da,	// (0x0002625e) ncim_query_entry_pane

0x80ed,	// (0x00026271) ncimui_query_pane_g1

0x80f9,	// (0x0002627d) ncimui_query_pane_t1_ParamLimits

0x80f9,	// (0x0002627d) ncimui_query_pane_t1

0xa529,	// (0x000286ad) input_focus_pane_cp012

0xdea4,	// (0x0002c028) ncim_query_entry_pane_t1

0xa3b1,	// (0x00028535) main_im_pane_ParamLimits

0x1394,	// (0x0001f518) main_mobtv_pane_ParamLimits

0x1394,	// (0x0001f518) main_mobtv_pane

0x7cc3,	// (0x00025e47) main_cset6_slider_pane_g18_ParamLimits

0x7cc3,	// (0x00025e47) main_cset6_slider_pane_g18

0xdc56,	// (0x0002bdda) main_cset6_slider_pane_g19_ParamLimits

0xdc56,	// (0x0002bdda) main_cset6_slider_pane_g19

0xd24d,	// (0x0002b3d1) bg_main_mobtv_pane_ParamLimits

0xd24d,	// (0x0002b3d1) bg_main_mobtv_pane

0x8112,	// (0x00026296) main_mobtv_info_pane

0x811d,	// (0x000262a1) main_mobtv_loading_pane_ParamLimits

0x811d,	// (0x000262a1) main_mobtv_loading_pane

0xdeb6,	// (0x0002c03a) main_mobtv_pg_channel_list_pane

0xdec0,	// (0x0002c044) main_mobtv_pg_hdr_pane

0x812a,	// (0x000262ae) main_mobtv_programe_curr_pane_ParamLimits

0x812a,	// (0x000262ae) main_mobtv_programe_curr_pane

0x8137,	// (0x000262bb) main_mobtv_programe_next_pane_ParamLimits

0x8137,	// (0x000262bb) main_mobtv_programe_next_pane

0xdec9,	// (0x0002c04d) popup_mobtv_noti_window

0xc847,	// (0x0002a9cb) main_tv_pg_hdr_pane_g1

0xded1,	// (0x0002c055) main_tv_pg_hdr_pane_g2

0xded9,	// (0x0002c05d) main_tv_pg_hdr_pane_g3

0xdee1,	// (0x0002c065) main_tv_pg_hdr_pane_g4

0xdee9,	// (0x0002c06d) main_tv_pg_hdr_pane_g5

0xdef3,	// (0x0002c077) main_tv_pg_hdr_pane_g6

0xdefd,	// (0x0002c081) main_tv_pg_hdr_pane_g7

0xdf07,	// (0x0002c08b) main_tv_pg_hdr_pane_g8

0xdf11,	// (0x0002c095) main_tv_pg_hdr_pane_g9

0xdf1b,	// (0x0002c09f) main_tv_pg_hdr_pane_g10

0xdf25,	// (0x0002c0a9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0002dd9f) main_tv_pg_hdr_pane_g

0xdf2f,	// (0x0002c0b3) main_tv_pg_hdr_pane_t1

0xdf3d,	// (0x0002c0c1) main_tv_pg_hdr_pane_t2

0xdf4b,	// (0x0002c0cf) main_tv_pg_hdr_pane_t3

0xdf5b,	// (0x0002c0df) main_tv_pg_hdr_pane_t4

0xdf6b,	// (0x0002c0ef) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0002ddb6) main_tv_pg_hdr_pane_t

0xdf7b,	// (0x0002c0ff) single_mobtv_pg_channel_pane_ParamLimits

0xdf7b,	// (0x0002c0ff) single_mobtv_pg_channel_pane

0xdf8d,	// (0x0002c111) single_mobtv_pg_channel_table_pane

0xa915,	// (0x00028a99) single_mobtv_pg_channel_thumb_pane

0xdf96,	// (0x0002c11a) single_tv_pg_channel_pane_g1

0xdf9f,	// (0x0002c123) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0002ddc1) single_tv_pg_channel_pane_g

0xca8c,	// (0x0002ac10) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca8c,	// (0x0002ac10) bg_single_mobtv_pg_channel_thumb_pane

0xdfa8,	// (0x0002c12c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfa8,	// (0x0002c12c) single_mobtv_pg_channel_thumb_pane_g1

0xdfb6,	// (0x0002c13a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfb6,	// (0x0002c13a) single_mobtv_pg_channel_thumb_pane_g2

0xdfc2,	// (0x0002c146) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfc2,	// (0x0002c146) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0002ddc6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0002ddc6) single_mobtv_pg_channel_thumb_pane_g

0xdfce,	// (0x0002c152) single_mobtv_pg_channel_thumb_pane_t1

0xdfdc,	// (0x0002c160) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0002ddcd) single_mobtv_pg_channel_thumb_pane_t

0xc847,	// (0x0002a9cb) bg_single_mobtv_pg_channel_table_pane_g1

0xc847,	// (0x0002a9cb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0002d86f) bg_single_mobtv_pg_channel_table_pane_g

0xdfea,	// (0x0002c16e) single_mobtv_pg_channel_table_pane_t1

0xdff8,	// (0x0002c17c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0002ddd2) single_mobtv_pg_channel_table_pane_t

0x814c,	// (0x000262d0) main_mobtv_info_pane_g1_ParamLimits

0x814c,	// (0x000262d0) main_mobtv_info_pane_g1

0x8168,	// (0x000262ec) main_mobtv_info_pane_t1_ParamLimits

0x8168,	// (0x000262ec) main_mobtv_info_pane_t1

0x81e0,	// (0x00026364) main_mobtv_info_pane_t2_ParamLimits

0x81e0,	// (0x00026364) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0002dddc) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0002dddc) main_mobtv_info_pane_t

0x826f,	// (0x000263f3) wait_bar_pane_cp05

0x8281,	// (0x00026405) main_mobtv_loading_pane_g1_ParamLimits

0x8281,	// (0x00026405) main_mobtv_loading_pane_g1

0x828f,	// (0x00026413) main_mobtv_loading_pane_g2_ParamLimits

0x828f,	// (0x00026413) main_mobtv_loading_pane_g2

0x829b,	// (0x0002641f) main_mobtv_loading_pane_g3_ParamLimits

0x829b,	// (0x0002641f) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0002dde3) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0002dde3) main_mobtv_loading_pane_g

0xe006,	// (0x0002c18a) main_mobtv_loading_pane_t1_ParamLimits

0xe006,	// (0x0002c18a) main_mobtv_loading_pane_t1

0xe01e,	// (0x0002c1a2) main_mobtv_loading_pane_t2_ParamLimits

0xe01e,	// (0x0002c1a2) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0002ddea) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0002ddea) main_mobtv_loading_pane_t

0x82a9,	// (0x0002642d) wait_bar_pane_cp06_ParamLimits

0x82a9,	// (0x0002642d) wait_bar_pane_cp06

0xe042,	// (0x0002c1c6) main_mobtv_programe_curr_pane_t1

0xe050,	// (0x0002c1d4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0002ddef) main_mobtv_programe_curr_pane_t

0xe05e,	// (0x0002c1e2) main_mobtv_programe_next_pane_t1

0xe06c,	// (0x0002c1f0) main_mobtv_programe_next_pane_t2

0xe07a,	// (0x0002c1fe) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0002ddf4) main_mobtv_programe_next_pane_t

0x9c68,	// (0x00027dec) bg_popup_mobtv_noti_window_pane

0xe088,	// (0x0002c20c) popup_mobtv_noti_window_g1

0xe090,	// (0x0002c214) popup_mobtv_noti_window_t1

0xe09e,	// (0x0002c222) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0002ddfb) popup_mobtv_noti_window_t

0xc847,	// (0x0002a9cb) bg_popup_mobtv_noti_window_pane_g1

0x0f3e,	// (0x0001f0c2) sc_clock_pane

0x0f3e,	// (0x0001f0c2) main_fs_bigclock_pane

0x78fc,	// (0x00025a80) blid2_tripm_pane_t4_ParamLimits

0x78fc,	// (0x00025a80) blid2_tripm_pane_t4

0x82b5,	// (0x00026439) sc_clock_pane_g1_ParamLimits

0x82b5,	// (0x00026439) sc_clock_pane_g1

0x82c3,	// (0x00026447) sc_clock_pane_t1_ParamLimits

0x82c3,	// (0x00026447) sc_clock_pane_t1

0x82d6,	// (0x0002645a) sc_clock_pane_t2_ParamLimits

0x82d6,	// (0x0002645a) sc_clock_pane_t2

0x82e8,	// (0x0002646c) sc_clock_pane_t3_ParamLimits

0x82e8,	// (0x0002646c) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0002de00) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0002de00) sc_clock_pane_t

0x91d4,	// (0x00027358) main_fs_bigclock_indicator_pane_ParamLimits

0x91d4,	// (0x00027358) main_fs_bigclock_indicator_pane

0x836b,	// (0x000264ef) main_fs_bigclock_pane_g1_ParamLimits

0x836b,	// (0x000264ef) main_fs_bigclock_pane_g1

0x91e0,	// (0x00027364) main_fs_bigclock_pane_t1_ParamLimits

0x91e0,	// (0x00027364) main_fs_bigclock_pane_t1

0x91f2,	// (0x00027376) main_fs_bigclock_pane_t2_ParamLimits

0x91f2,	// (0x00027376) main_fs_bigclock_pane_t2

0x9206,	// (0x0002738a) main_fs_bigclock_pane_t3_ParamLimits

0x9206,	// (0x0002738a) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0002e005) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0002e005) main_fs_bigclock_pane_t

0xeca9,	// (0x0002ce2d) main_fs_bigclock_indicator_pane_g1

0xddbd,	// (0x0002bf41) ncim_query_content_pane_g2_ParamLimits

0xddbd,	// (0x0002bf41) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0002dd8d) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0002dd8d) ncim_query_content_pane_g

0x82fc,	// (0x00026480) sc_clock_pane_t4_ParamLimits

0x82fc,	// (0x00026480) sc_clock_pane_t4

0x1394,	// (0x0001f518) main_radioblah_pane

0x1e12,	// (0x0001ff96) cell_call4_button_pane_t1_copy1_ParamLimits

0x1e12,	// (0x0001ff96) cell_call4_button_pane_t1_copy1

0x7f3f,	// (0x000260c3) main_ncimui_pane_t1_ParamLimits

0x7f3f,	// (0x000260c3) main_ncimui_pane_t1

0x7f59,	// (0x000260dd) main_ncimui_pane_t2_ParamLimits

0x7f59,	// (0x000260dd) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0002dd86) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0002dd86) main_ncimui_pane_t

0xe1e4,	// (0x0002c368) main_radioblah_anim_pane_ParamLimits

0xe1e4,	// (0x0002c368) main_radioblah_anim_pane

0xe1f5,	// (0x0002c379) main_radioblah_info_pane_ParamLimits

0xe1f5,	// (0x0002c379) main_radioblah_info_pane

0xe209,	// (0x0002c38d) main_radioblah_pane_t1_ParamLimits

0xe209,	// (0x0002c38d) main_radioblah_pane_t1

0xe225,	// (0x0002c3a9) main_radioblah_pane_t2_ParamLimits

0xe225,	// (0x0002c3a9) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0002de21) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0002de21) main_radioblah_pane_t

0x83c1,	// (0x00026545) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83c1,	// (0x00026545) main_radioblah_rocker_ctrl_pane

0xe26d,	// (0x0002c3f1) main_radioblah_info_pane_t1_ParamLimits

0xe26d,	// (0x0002c3f1) main_radioblah_info_pane_t1

0x8406,	// (0x0002658a) main_radioblah_info_pane_t2_ParamLimits

0x8406,	// (0x0002658a) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0002de2a) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0002de2a) main_radioblah_info_pane_t

0xc847,	// (0x0002a9cb) main_radioblah_rocker_ctrl_pane_g1

0x84b6,	// (0x0002663a) main_radioblah_rocker_ctrl_pane_g2

0x84be,	// (0x00026642) main_radioblah_rocker_ctrl_pane_g3

0x84c6,	// (0x0002664a) main_radioblah_rocker_ctrl_pane_g4

0x84ce,	// (0x00026652) main_radioblah_rocker_ctrl_pane_g5

0x84d6,	// (0x0002665a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0002de33) main_radioblah_rocker_ctrl_pane_g

0x7ee5,	// (0x00026069) main_cset_text2_pane_t1_copy1_ParamLimits

0x1e9d,	// (0x00020021) cam4_image_uncrop_qvga_pane

0x1fc8,	// (0x0002014c) vid4_image_uncrop_qcif_pane

0x25e2,	// (0x00020766) cam6_image_uncrop_qvga_pane_ParamLimits

0x25e2,	// (0x00020766) cam6_image_uncrop_qvga_pane

0xda8c,	// (0x0002bc10) vid6_image_uncrop_qcif_pane_ParamLimits

0xda8c,	// (0x0002bc10) vid6_image_uncrop_qcif_pane

0x9c68,	// (0x00027dec) bg_popup_preview_window_pane_cp03

0xdd6f,	// (0x0002bef3) list_cset_text2_pane

0xdd77,	// (0x0002befb) main_cset6_text2_pane_g1

0xdd7f,	// (0x0002bf03) main_cset6_text2_pane_t1

0x84de,	// (0x00026662) list_cset_text2_pane_t1_ParamLimits

0x84de,	// (0x00026662) list_cset_text2_pane_t1

0x1394,	// (0x0001f518) main_radioblah_pane_ParamLimits

0x825b,	// (0x000263df) main_mobtv_info_pane_t3_ParamLimits

0x825b,	// (0x000263df) main_mobtv_info_pane_t3

0x83af,	// (0x00026533) main_radioblah_pane_g1

0x83da,	// (0x0002655e) main_radioblah_info_pane_g1

0x845b,	// (0x000265df) main_radioblah_info_pane_t3_ParamLimits

0x845b,	// (0x000265df) main_radioblah_info_pane_t3

0x434d,	// (0x000224d1) highlight_cell_cale_month_pane_ParamLimits

0x434d,	// (0x000224d1) highlight_cell_cale_month_pane

0x0f3e,	// (0x0001f0c2) main_phob_fisheye_pane

0xcbdc,	// (0x0002ad60) scroll_pane_cp0031_ParamLimits

0xcbdc,	// (0x0002ad60) scroll_pane_cp0031

0xdb9a,	// (0x0002bd1e) wait_bar_pane_cp08_ParamLimits

0x7bf7,	// (0x00025d7b) cset_list_set_pane_copy1_ParamLimits

0xe2a7,	// (0x0002c42b) highlight_cell_cale_month_pane_g1

0x84ff,	// (0x00026683) highlight_cell_cale_month_pane_t1

0xd81a,	// (0x0002b99e) list_gen_pane_cp01

0xd3a4,	// (0x0002b528) scroll_pane_01

0x850d,	// (0x00026691) list_single_double_fisheye_pane

0x8516,	// (0x0002669a) list_double_fisheye_pane_g1_ParamLimits

0x8516,	// (0x0002669a) list_double_fisheye_pane_g1

0x8522,	// (0x000266a6) list_double_fisheye_pane_g2_ParamLimits

0x8522,	// (0x000266a6) list_double_fisheye_pane_g2

0x8536,	// (0x000266ba) list_double_fisheye_pane_g3_ParamLimits

0x8536,	// (0x000266ba) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0002de40) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0002de40) list_double_fisheye_pane_g

0x855f,	// (0x000266e3) list_double_fisheye_pane_t1_ParamLimits

0x855f,	// (0x000266e3) list_double_fisheye_pane_t1

0x857a,	// (0x000266fe) list_double_fisheye_pane_t2_ParamLimits

0x857a,	// (0x000266fe) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0002de4b) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0002de4b) list_double_fisheye_pane_t

0x0f3e,	// (0x0001f0c2) main_call5_pane

0x8322,	// (0x000264a6) sc_swipe_pane_ParamLimits

0x8322,	// (0x000264a6) sc_swipe_pane

0x85a8,	// (0x0002672c) call5_image_pane_ParamLimits

0x85a8,	// (0x0002672c) call5_image_pane

0x85b8,	// (0x0002673c) call5_swipe_1_pane_ParamLimits

0x85b8,	// (0x0002673c) call5_swipe_1_pane

0x85c4,	// (0x00026748) call5_swipe_2_pane_ParamLimits

0x85c4,	// (0x00026748) call5_swipe_2_pane

0x85de,	// (0x00026762) popup_call5_audio_first_window_ParamLimits

0x85de,	// (0x00026762) popup_call5_audio_first_window

0xca8c,	// (0x0002ac10) call5_swipe_1_pane_g1_ParamLimits

0xca8c,	// (0x0002ac10) call5_swipe_1_pane_g1

0xe2af,	// (0x0002c433) call5_swipe_1_pane_g2_ParamLimits

0xe2af,	// (0x0002c433) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0002de50) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0002de50) call5_swipe_1_pane_g

0xe2bb,	// (0x0002c43f) call5_swipe_1_pane_t1_ParamLimits

0xe2bb,	// (0x0002c43f) call5_swipe_1_pane_t1

0xca8c,	// (0x0002ac10) call5_swipe_2_pane_g1_ParamLimits

0xca8c,	// (0x0002ac10) call5_swipe_2_pane_g1

0xe2d0,	// (0x0002c454) call5_swipe_2_pane_g2_ParamLimits

0xe2d0,	// (0x0002c454) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0002de55) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0002de55) call5_swipe_2_pane_g

0xe2dc,	// (0x0002c460) call5_swipe_2_pane_t1_ParamLimits

0xe2dc,	// (0x0002c460) call5_swipe_2_pane_t1

0xe2f1,	// (0x0002c475) sc_swipe_pane_g1_ParamLimits

0xe2f1,	// (0x0002c475) sc_swipe_pane_g1

0xe2fe,	// (0x0002c482) sc_swipe_pane_g2_ParamLimits

0xe2fe,	// (0x0002c482) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0002de5a) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0002de5a) sc_swipe_pane_g

0xe30a,	// (0x0002c48e) sc_swipe_pane_t1_ParamLimits

0xe30a,	// (0x0002c48e) sc_swipe_pane_t1

0x0f3e,	// (0x0001f0c2) main_cmail_launcher_pane

0x85ec,	// (0x00026770) aid_size_cell_cmail_l_ParamLimits

0x85ec,	// (0x00026770) aid_size_cell_cmail_l

0x85fa,	// (0x0002677e) grid_cmail_l_pane_ParamLimits

0x85fa,	// (0x0002677e) grid_cmail_l_pane

0x860a,	// (0x0002678e) cell_cmail_l_pane_ParamLimits

0x860a,	// (0x0002678e) cell_cmail_l_pane

0xe31f,	// (0x0002c4a3) cell_cmail_l_pane_g1_ParamLimits

0xe31f,	// (0x0002c4a3) cell_cmail_l_pane_g1

0xe32b,	// (0x0002c4af) cell_cmail_l_pane_t1_ParamLimits

0xe32b,	// (0x0002c4af) cell_cmail_l_pane_t1

0xe341,	// (0x0002c4c5) cell_cmail_l_pane_t2_ParamLimits

0xe341,	// (0x0002c4c5) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0002de5f) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0002de5f) cell_cmail_l_pane_t

0xa529,	// (0x000286ad) grid_highlight_pane_cp018_ParamLimits

0xa529,	// (0x000286ad) grid_highlight_pane_cp018

0x0da0,	// (0x0001ef24) main2_pane_ParamLimits

0x0da0,	// (0x0001ef24) main2_pane

0xa44a,	// (0x000285ce) popup_sp_fs_action_menu_bg_pane_g1

0xa452,	// (0x000285d6) popup_sp_fs_action_menu_bg_pane_g2

0xa45a,	// (0x000285de) popup_sp_fs_action_menu_bg_pane_g3

0xa462,	// (0x000285e6) popup_sp_fs_action_menu_bg_pane_g4

0xa46a,	// (0x000285ee) popup_sp_fs_action_menu_bg_pane_g5

0xa472,	// (0x000285f6) popup_sp_fs_action_menu_bg_pane_g6

0xa47a,	// (0x000285fe) popup_sp_fs_action_menu_bg_pane_g7

0xa482,	// (0x00028606) popup_sp_fs_action_menu_bg_pane_g8

0xa48a,	// (0x0002860e) popup_sp_fs_action_menu_bg_pane_g9

0xa492,	// (0x00028616) popup_sp_fs_action_menu_bg_pane_g10

0xa492,	// (0x00028616) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0002d30a) popup_sp_fs_action_menu_bg_pane_g

0x3134,	// (0x000212b8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_t3_g3_g1

0x3140,	// (0x000212c4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3140,	// (0x000212c4) list_medium_line_x2_t3_g3_g2

0x314c,	// (0x000212d0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x314c,	// (0x000212d0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0002d3b8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0002d3b8) list_medium_line_x2_t3_g3_g

0x3158,	// (0x000212dc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3158,	// (0x000212dc) list_medium_line_x2_t3_g3_t1

0x316d,	// (0x000212f1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x316d,	// (0x000212f1) list_medium_line_x2_t3_g3_t2

0x317f,	// (0x00021303) list_medium_line_x2_t3_g3_t3_ParamLimits

0x317f,	// (0x00021303) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0002d3bf) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0002d3bf) list_medium_line_x2_t3_g3_t

0x3134,	// (0x000212b8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_t3_g2_g1

0x314c,	// (0x000212d0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x314c,	// (0x000212d0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0002d3c6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0002d3c6) list_medium_line_x2_t3_g2_g

0x3194,	// (0x00021318) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3194,	// (0x00021318) list_medium_line_x2_t3_g2_t1

0x31aa,	// (0x0002132e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x31aa,	// (0x0002132e) list_medium_line_x2_t3_g2_t2

0x31bc,	// (0x00021340) list_medium_line_x2_t3_g2_t3_ParamLimits

0x31bc,	// (0x00021340) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0002d3cb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0002d3cb) list_medium_line_x2_t3_g2_t

0x3134,	// (0x000212b8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_t4_g4_g1

0x31da,	// (0x0002135e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x31da,	// (0x0002135e) list_medium_line_x2_t4_g4_g2

0x3140,	// (0x000212c4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3140,	// (0x000212c4) list_medium_line_x2_t4_g4_g3

0x31e6,	// (0x0002136a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x31e6,	// (0x0002136a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0002d3d2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0002d3d2) list_medium_line_x2_t4_g4_g

0x31f2,	// (0x00021376) list_medium_line_x2_t4_g4_t1_ParamLimits

0x31f2,	// (0x00021376) list_medium_line_x2_t4_g4_t1

0x320c,	// (0x00021390) list_medium_line_x2_t4_g4_t2_ParamLimits

0x320c,	// (0x00021390) list_medium_line_x2_t4_g4_t2

0x3222,	// (0x000213a6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3222,	// (0x000213a6) list_medium_line_x2_t4_g4_t3

0x3237,	// (0x000213bb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3237,	// (0x000213bb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0002d3db) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0002d3db) list_medium_line_x2_t4_g4_t

0x3134,	// (0x000212b8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_t2_g4_g1

0x31da,	// (0x0002135e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x31da,	// (0x0002135e) list_medium_line_x2_t2_g4_g2

0x3140,	// (0x000212c4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3140,	// (0x000212c4) list_medium_line_x2_t2_g4_g3

0x314c,	// (0x000212d0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x314c,	// (0x000212d0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0002d442) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0002d442) list_medium_line_x2_t2_g4_g

0x4373,	// (0x000224f7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4373,	// (0x000224f7) list_medium_line_x2_t2_g4_t1

0x317f,	// (0x00021303) list_medium_line_x2_t2_g4_t2_ParamLimits

0x317f,	// (0x00021303) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0002d44b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0002d44b) list_medium_line_x2_t2_g4_t

0x3134,	// (0x000212b8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_t2_g3_g1

0x3140,	// (0x000212c4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3140,	// (0x000212c4) list_medium_line_x2_t2_g3_g2

0x314c,	// (0x000212d0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x314c,	// (0x000212d0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0002d3b8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0002d3b8) list_medium_line_x2_t2_g3_g

0x4388,	// (0x0002250c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4388,	// (0x0002250c) list_medium_line_x2_t2_g3_t1

0x317f,	// (0x00021303) list_medium_line_x2_t2_g3_t2_ParamLimits

0x317f,	// (0x00021303) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0002d450) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0002d450) list_medium_line_x2_t2_g3_t

0x4516,	// (0x0002269a) main_sp_fs_list_pane_ParamLimits

0x4516,	// (0x0002269a) main_sp_fs_list_pane

0x4522,	// (0x000226a6) sp_fs_scroll_pane_ParamLimits

0x4522,	// (0x000226a6) sp_fs_scroll_pane

0x452e,	// (0x000226b2) list_medium_line_x2_t3_t1

0x453e,	// (0x000226c2) list_medium_line_x2_t3_t2

0x454c,	// (0x000226d0) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0002d49b) list_medium_line_x2_t3_t

0x455a,	// (0x000226de) list_medium_line_x3_t4_t1

0x456a,	// (0x000226ee) list_medium_line_x3_t4_t2

0x4578,	// (0x000226fc) list_medium_line_x3_t4_t3

0x454c,	// (0x000226d0) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0002d4a2) list_medium_line_x3_t4_t

0x4586,	// (0x0002270a) list_medium_line_x4_t5_t1

0x4596,	// (0x0002271a) list_medium_line_x4_t5_t2

0x4578,	// (0x000226fc) list_medium_line_x4_t5_t3

0x45a4,	// (0x00022728) list_medium_line_x4_t5_t4

0x454c,	// (0x000226d0) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0002d4ab) list_medium_line_x4_t5_t

0x3134,	// (0x000212b8) list_medium_line_t4_g4_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_t4_g4_g1

0x31e6,	// (0x0002136a) list_medium_line_t4_g4_g2_ParamLimits

0x31e6,	// (0x0002136a) list_medium_line_t4_g4_g2

0x45b2,	// (0x00022736) list_medium_line_t4_g4_g3_ParamLimits

0x45b2,	// (0x00022736) list_medium_line_t4_g4_g3

0x314c,	// (0x000212d0) list_medium_line_t4_g4_g4_ParamLimits

0x314c,	// (0x000212d0) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0002d4b6) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0002d4b6) list_medium_line_t4_g4_g

0x45be,	// (0x00022742) list_medium_line_t4_g4_t1_ParamLimits

0x45be,	// (0x00022742) list_medium_line_t4_g4_t1

0x45d3,	// (0x00022757) list_medium_line_t4_g4_t2_ParamLimits

0x45d3,	// (0x00022757) list_medium_line_t4_g4_t2

0x45e9,	// (0x0002276d) list_medium_line_t4_g4_t3_ParamLimits

0x45e9,	// (0x0002276d) list_medium_line_t4_g4_t3

0x317f,	// (0x00021303) list_medium_line_t4_g4_t4_ParamLimits

0x317f,	// (0x00021303) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0002d4bf) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0002d4bf) list_medium_line_t4_g4_t

0x469b,	// (0x0002281f) chi_dic_find_pane_g1

0x13b0,	// (0x0001f534) main_tport_pane

0xd4db,	// (0x0002b65f) list_medium_line_plain_t1

0x7188,	// (0x0002530c) list_medium_line_t2_g2_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_t2_g2_g1

0x7194,	// (0x00025318) list_medium_line_t2_g2_g2_ParamLimits

0x7194,	// (0x00025318) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0002db97) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0002db97) list_medium_line_t2_g2_g

0x71a0,	// (0x00025324) list_medium_line_t2_g2_t1_ParamLimits

0x71a0,	// (0x00025324) list_medium_line_t2_g2_t1

0x71ba,	// (0x0002533e) list_medium_line_t2_g2_t2_ParamLimits

0x71ba,	// (0x0002533e) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0002db9c) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0002db9c) list_medium_line_t2_g2_t

0xd823,	// (0x0002b9a7) aid_sp_fs_list_icon_a_sm

0xd82b,	// (0x0002b9af) aid_sp_fs_list_icon_d

0xd833,	// (0x0002b9b7) aid_sp_fs_text_primary

0xd83c,	// (0x0002b9c0) aid_sp_fs_text_secondary

0x773e,	// (0x000258c2) list_medium_line

0x773e,	// (0x000258c2) list_medium_line_g2

0x773e,	// (0x000258c2) list_medium_line_g3

0x773e,	// (0x000258c2) list_medium_line_plain

0x773e,	// (0x000258c2) list_medium_line_plain_t2

0x773e,	// (0x000258c2) list_medium_line_plain_t3

0x773e,	// (0x000258c2) list_medium_line_right_icon

0x773e,	// (0x000258c2) list_medium_line_right_iconx2

0x773e,	// (0x000258c2) list_medium_line_t2

0x773e,	// (0x000258c2) list_medium_line_t2_g2

0x773e,	// (0x000258c2) list_medium_line_t2_g3

0x773e,	// (0x000258c2) list_medium_line_t2_right_icon

0x773e,	// (0x000258c2) list_medium_line_t2_right_iconx2

0x773e,	// (0x000258c2) list_medium_line_t3

0x773e,	// (0x000258c2) list_medium_line_t3_g2

0x773e,	// (0x000258c2) list_medium_line_t3_g3

0x773e,	// (0x000258c2) list_medium_line_t3_right_iconx2

0x7747,	// (0x000258cb) list_medium_line_t4_g4

0x7750,	// (0x000258d4) list_medium_line_x2

0x7750,	// (0x000258d4) list_medium_line_x2_t2_g2

0x7750,	// (0x000258d4) list_medium_line_x2_t2_g3

0x7750,	// (0x000258d4) list_medium_line_x2_t2_g4

0x7750,	// (0x000258d4) list_medium_line_x2_t3

0x7750,	// (0x000258d4) list_medium_line_x2_t3_g2

0x7750,	// (0x000258d4) list_medium_line_x2_t3_g3

0x7750,	// (0x000258d4) list_medium_line_x2_t3_g4

0x7750,	// (0x000258d4) list_medium_line_x2_t4_g2

0x7750,	// (0x000258d4) list_medium_line_x2_t4_g4

0x7759,	// (0x000258dd) list_medium_line_x3

0x7759,	// (0x000258dd) list_medium_line_x3_t4

0x7759,	// (0x000258dd) list_medium_line_x3_t4_g4

0x7747,	// (0x000258cb) list_medium_line_x4_t4

0x7747,	// (0x000258cb) list_medium_line_x4_t4_g7

0x7747,	// (0x000258cb) list_medium_line_x4_t5

0x7762,	// (0x000258e6) list_single_fs_dyc_pane_ParamLimits

0x7762,	// (0x000258e6) list_single_fs_dyc_pane

0x3134,	// (0x000212b8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x4_t4_g7_g1

0x7e0f,	// (0x00025f93) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e0f,	// (0x00025f93) list_medium_line_x4_t4_g7_g2

0x7e1b,	// (0x00025f9f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e1b,	// (0x00025f9f) list_medium_line_x4_t4_g7_g3

0x7e2a,	// (0x00025fae) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e2a,	// (0x00025fae) list_medium_line_x4_t4_g7_g4

0x7e36,	// (0x00025fba) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e36,	// (0x00025fba) list_medium_line_x4_t4_g7_g5

0x7e45,	// (0x00025fc9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e45,	// (0x00025fc9) list_medium_line_x4_t4_g7_g6

0x7e54,	// (0x00025fd8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e54,	// (0x00025fd8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0002dd67) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0002dd67) list_medium_line_x4_t4_g7_g

0x7e60,	// (0x00025fe4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e60,	// (0x00025fe4) list_medium_line_x4_t4_g7_t1

0x7e75,	// (0x00025ff9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e75,	// (0x00025ff9) list_medium_line_x4_t4_g7_t2

0x7e8a,	// (0x0002600e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e8a,	// (0x0002600e) list_medium_line_x4_t4_g7_t3

0x7e9f,	// (0x00026023) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e9f,	// (0x00026023) list_medium_line_x4_t4_g7_t4

0x7eb1,	// (0x00026035) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7eb1,	// (0x00026035) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0002dd76) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0002dd76) list_medium_line_x4_t4_g7_t

0x7ec3,	// (0x00026047) list_single_dyc_row_pane_ParamLimits

0x7ec3,	// (0x00026047) list_single_dyc_row_pane

0x859c,	// (0x00026720) call5_gesture_pane_ParamLimits

0x859c,	// (0x00026720) call5_gesture_pane

0x85d0,	// (0x00026754) call5_windows_pane_ParamLimits

0x85d0,	// (0x00026754) call5_windows_pane

0x8623,	// (0x000267a7) call5_swipe_1_pane_cp_ParamLimits

0x8623,	// (0x000267a7) call5_swipe_1_pane_cp

0x862f,	// (0x000267b3) call5_swipe_2_pane_cp_ParamLimits

0x862f,	// (0x000267b3) call5_swipe_2_pane_cp

0xa5b9,	// (0x0002873d) call5_image_pane_cp

0x863b,	// (0x000267bf) popup_call5_audio_first_window_cp_ParamLimits

0x863b,	// (0x000267bf) popup_call5_audio_first_window_cp

0xe2f1,	// (0x0002c475) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2f1,	// (0x0002c475) call5_swipe_1_pane_g1_cp

0xe35e,	// (0x0002c4e2) call5_swipe_1_pane_g2_cp

0xe30a,	// (0x0002c48e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe30a,	// (0x0002c48e) call5_swipe_1_pane_t1_cp

0xe2f1,	// (0x0002c475) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2f1,	// (0x0002c475) call5_swipe_2_pane_g1_cp

0xe366,	// (0x0002c4ea) call5_swipe_2_pane_g2_cp

0xe36e,	// (0x0002c4f2) call5_swipe_2_pane_t1_cp_ParamLimits

0xe36e,	// (0x0002c4f2) call5_swipe_2_pane_t1_cp

0xa529,	// (0x000286ad) main_sp_fs_email_pane

0xe383,	// (0x0002c507) main_sp_fs_listscroll_pane_te

0x8649,	// (0x000267cd) popup_sp_fs_action_menu_pane_ParamLimits

0x8649,	// (0x000267cd) popup_sp_fs_action_menu_pane

0xc847,	// (0x0002a9cb) bg_sp_fs_ctrlbar_pane_g1

0xe38c,	// (0x0002c510) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe395,	// (0x0002c519) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe39e,	// (0x0002c522) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc847,	// (0x0002a9cb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0002de64) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc62c,	// (0x0002a7b0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc62c,	// (0x0002a7b0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3a7,	// (0x0002c52b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3a7,	// (0x0002c52b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3b3,	// (0x0002c537) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3b3,	// (0x0002c537) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0002de6d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0002de6d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3bf,	// (0x0002c543) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3bf,	// (0x0002c543) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x868d,	// (0x00026811) list_medium_line_t2_right_icon_g1

0x8695,	// (0x00026819) list_medium_line_t2_right_icon_t1

0x86a5,	// (0x00026829) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0002de72) list_medium_line_t2_right_icon_t

0xc43f,	// (0x0002a5c3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc43f,	// (0x0002a5c3) bg_sp_fs_ctrlbar_pane

0x86f6,	// (0x0002687a) main_sp_fs_ctrlbar_button_pane_cp01

0x86fe,	// (0x00026882) main_sp_fs_ctrlbar_ddmenu_pane

0xe411,	// (0x0002c595) main_sp_fs_ctrlbar_pane_g1

0xe41d,	// (0x0002c5a1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0002de77) main_sp_fs_ctrlbar_pane_g

0xe429,	// (0x0002c5ad) main_sp_fs_ctrlbar_pane_t1

0x8708,	// (0x0002688c) main_sp_fs_ctrlbar_pane

0x871e,	// (0x000268a2) main_sp_fs_listscroll_pane_te_cp01

0x872f,	// (0x000268b3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x872f,	// (0x000268b3) popup_sp_fs_action_menu_pane_cp01

0xa529,	// (0x000286ad) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa529,	// (0x000286ad) bg_sp_fs_highlight_list_pane_cp01

0xe459,	// (0x0002c5dd) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe459,	// (0x0002c5dd) sp_fs_action_menu_list_gene_pane_g1

0xe468,	// (0x0002c5ec) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe468,	// (0x0002c5ec) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0002de81) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0002de81) sp_fs_action_menu_list_gene_pane_g

0xe475,	// (0x0002c5f9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe475,	// (0x0002c5f9) sp_fs_action_menu_list_gene_pane_t1

0xe48d,	// (0x0002c611) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe48d,	// (0x0002c611) sp_fs_action_menu_list_gene_pane

0xe4ac,	// (0x0002c630) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4ac,	// (0x0002c630) popup_sp_fs_action_menu_bg_pane

0xe4ba,	// (0x0002c63e) sp_fs_action_menu_list_pane_ParamLimits

0xe4ba,	// (0x0002c63e) sp_fs_action_menu_list_pane

0x8759,	// (0x000268dd) sp_fs_scroll_pane_cp01_ParamLimits

0x8759,	// (0x000268dd) sp_fs_scroll_pane_cp01

0x877f,	// (0x00026903) list_medium_line_plain_t2_t1

0x878f,	// (0x00026913) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0002de86) list_medium_line_plain_t2_t

0x879d,	// (0x00026921) list_medium_line_plain_t3_t1

0x87ad,	// (0x00026931) list_medium_line_plain_t3_t2

0x87bb,	// (0x0002693f) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0002de8b) list_medium_line_plain_t3_t

0x3134,	// (0x000212b8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_t2_g2_g1

0x314c,	// (0x000212d0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x314c,	// (0x000212d0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0002d3c6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0002d3c6) list_medium_line_x2_t2_g2_g

0x45be,	// (0x00022742) list_medium_line_x2_t2_g2_t1_ParamLimits

0x45be,	// (0x00022742) list_medium_line_x2_t2_g2_t1

0x317f,	// (0x00021303) list_medium_line_x2_t2_g2_t2_ParamLimits

0x317f,	// (0x00021303) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0002de92) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0002de92) list_medium_line_x2_t2_g2_t

0x3134,	// (0x000212b8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_t4_g2_g1

0x314c,	// (0x000212d0) list_medium_line_x2_t4_g2_g2_ParamLimits

0x314c,	// (0x000212d0) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0002d3c6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0002d3c6) list_medium_line_x2_t4_g2_g

0x87c9,	// (0x0002694d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87c9,	// (0x0002694d) list_medium_line_x2_t4_g2_t1

0x87e3,	// (0x00026967) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87e3,	// (0x00026967) list_medium_line_x2_t4_g2_t2

0x87f9,	// (0x0002697d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87f9,	// (0x0002697d) list_medium_line_x2_t4_g2_t3

0x317f,	// (0x00021303) list_medium_line_x2_t4_g2_t4_ParamLimits

0x317f,	// (0x00021303) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0002de97) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0002de97) list_medium_line_x2_t4_g2_t

0x880e,	// (0x00026992) list_medium_line_t3_right_iconx2_g1

0x868d,	// (0x00026811) list_medium_line_t3_right_iconx2_g2

0x8816,	// (0x0002699a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0002dea0) list_medium_line_t3_right_iconx2_g

0x881e,	// (0x000269a2) list_medium_line_t3_right_iconx2_t1

0x882e,	// (0x000269b2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0002dea7) list_medium_line_t3_right_iconx2_t

0x3134,	// (0x000212b8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x3_t4_g4_g1

0x3140,	// (0x000212c4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3140,	// (0x000212c4) list_medium_line_x3_t4_g4_g2

0x31e6,	// (0x0002136a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x31e6,	// (0x0002136a) list_medium_line_x3_t4_g4_g3

0x883c,	// (0x000269c0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x883c,	// (0x000269c0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0002deac) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0002deac) list_medium_line_x3_t4_g4_g

0x8848,	// (0x000269cc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8848,	// (0x000269cc) list_medium_line_x3_t4_g4_t1

0x885f,	// (0x000269e3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x885f,	// (0x000269e3) list_medium_line_x3_t4_g4_t2

0x8874,	// (0x000269f8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8874,	// (0x000269f8) list_medium_line_x3_t4_g4_t3

0x8889,	// (0x00026a0d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8889,	// (0x00026a0d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0002deb5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0002deb5) list_medium_line_x3_t4_g4_t

0x88a6,	// (0x00026a2a) list_single_dyc_row_text_pane_t1_ParamLimits

0x88a6,	// (0x00026a2a) list_single_dyc_row_text_pane_t1

0x88dd,	// (0x00026a61) list_single_dyc_row_text_pane_t2_ParamLimits

0x88dd,	// (0x00026a61) list_single_dyc_row_text_pane_t2

0xe4da,	// (0x0002c65e) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4da,	// (0x0002c65e) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0002debe) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0002debe) list_single_dyc_row_text_pane_t

0xe4fe,	// (0x0002c682) list_single_dyc_row_pane_g1_ParamLimits

0xe4fe,	// (0x0002c682) list_single_dyc_row_pane_g1

0xe50a,	// (0x0002c68e) list_single_dyc_row_pane_g2_ParamLimits

0xe50a,	// (0x0002c68e) list_single_dyc_row_pane_g2

0xe516,	// (0x0002c69a) list_single_dyc_row_pane_g3_ParamLimits

0xe516,	// (0x0002c69a) list_single_dyc_row_pane_g3

0xe522,	// (0x0002c6a6) list_single_dyc_row_pane_g4_ParamLimits

0xe522,	// (0x0002c6a6) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0002decb) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0002decb) list_single_dyc_row_pane_g

0xe52e,	// (0x0002c6b2) list_single_dyc_row_text_pane_ParamLimits

0xe52e,	// (0x0002c6b2) list_single_dyc_row_text_pane

0x9c68,	// (0x00027dec) bg_sp_fs_scroll_pane

0xe54d,	// (0x0002c6d1) thumb_sp_fs_scroll_pane

0x7188,	// (0x0002530c) list_medium_line_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_g1

0xe556,	// (0x0002c6da) list_medium_line_t1_ParamLimits

0xe556,	// (0x0002c6da) list_medium_line_t1

0x3134,	// (0x000212b8) list_medium_line_x2_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_g1

0x3140,	// (0x000212c4) list_medium_line_x2_g2_ParamLimits

0x3140,	// (0x000212c4) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0002ded4) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0002ded4) list_medium_line_x2_g

0xe56b,	// (0x0002c6ef) list_medium_line_x2_t1_ParamLimits

0xe56b,	// (0x0002c6ef) list_medium_line_x2_t1

0x3134,	// (0x000212b8) list_medium_line_x3_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x3_g1

0x3140,	// (0x000212c4) list_medium_line_x3_g2_ParamLimits

0x3140,	// (0x000212c4) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0002ded4) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0002ded4) list_medium_line_x3_g

0xe56b,	// (0x0002c6ef) list_medium_line_x3_t1_ParamLimits

0xe56b,	// (0x0002c6ef) list_medium_line_x3_t1

0xe581,	// (0x0002c705) thumb_sp_fs_scroll_pane_g1

0xe58a,	// (0x0002c70e) thumb_sp_fs_scroll_pane_g2

0xe593,	// (0x0002c717) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0002ded9) thumb_sp_fs_scroll_pane_g

0xe581,	// (0x0002c705) bg_sp_fs_scroll_pane_g1

0xe58a,	// (0x0002c70e) bg_sp_fs_scroll_pane_g2

0xe593,	// (0x0002c717) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0002ded9) bg_sp_fs_scroll_pane_g

0x3134,	// (0x000212b8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3134,	// (0x000212b8) list_medium_line_x2_t3_g4_g1

0x31da,	// (0x0002135e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x31da,	// (0x0002135e) list_medium_line_x2_t3_g4_g2

0x3140,	// (0x000212c4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3140,	// (0x000212c4) list_medium_line_x2_t3_g4_g3

0x314c,	// (0x000212d0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x314c,	// (0x000212d0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0002d442) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0002d442) list_medium_line_x2_t3_g4_g

0x8a00,	// (0x00026b84) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a00,	// (0x00026b84) list_medium_line_x2_t3_g4_t1

0x8a16,	// (0x00026b9a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a16,	// (0x00026b9a) list_medium_line_x2_t3_g4_t2

0x317f,	// (0x00021303) list_medium_line_x2_t3_g4_t3_ParamLimits

0x317f,	// (0x00021303) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0002dee0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0002dee0) list_medium_line_x2_t3_g4_t

0x7188,	// (0x0002530c) list_medium_line_g2_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_g2_g1

0x7194,	// (0x00025318) list_medium_line_g2_g2_ParamLimits

0x7194,	// (0x00025318) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0002db97) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0002db97) list_medium_line_g2_g

0xe59c,	// (0x0002c720) list_medium_line_g2_t1_ParamLimits

0xe59c,	// (0x0002c720) list_medium_line_g2_t1

0x7188,	// (0x0002530c) list_medium_line_t3_g2_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_t3_g2_g1

0x7194,	// (0x00025318) list_medium_line_t3_g2_g2_ParamLimits

0x7194,	// (0x00025318) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0002db97) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0002db97) list_medium_line_t3_g2_g

0x8a30,	// (0x00026bb4) list_medium_line_t3_g2_t1_ParamLimits

0x8a30,	// (0x00026bb4) list_medium_line_t3_g2_t1

0x8a4a,	// (0x00026bce) list_medium_line_t3_g2_t2_ParamLimits

0x8a4a,	// (0x00026bce) list_medium_line_t3_g2_t2

0x8a60,	// (0x00026be4) list_medium_line_t3_g2_t3_ParamLimits

0x8a60,	// (0x00026be4) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0002dee7) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0002dee7) list_medium_line_t3_g2_t

0x868d,	// (0x00026811) list_medium_line_right_icon_g1

0xe5b1,	// (0x0002c735) list_medium_line_right_icon_t1

0x7188,	// (0x0002530c) list_medium_line_t2_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_t2_g1

0x8a76,	// (0x00026bfa) list_medium_line_t2_t1_ParamLimits

0x8a76,	// (0x00026bfa) list_medium_line_t2_t1

0x8a90,	// (0x00026c14) list_medium_line_t2_t2_ParamLimits

0x8a90,	// (0x00026c14) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0002deee) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0002deee) list_medium_line_t2_t

0x7188,	// (0x0002530c) list_medium_line_t3_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_t3_g1

0x8aa5,	// (0x00026c29) list_medium_line_t3_t1_ParamLimits

0x8aa5,	// (0x00026c29) list_medium_line_t3_t1

0x8abf,	// (0x00026c43) list_medium_line_t3_t2_ParamLimits

0x8abf,	// (0x00026c43) list_medium_line_t3_t2

0x8ad5,	// (0x00026c59) list_medium_line_t3_t3_ParamLimits

0x8ad5,	// (0x00026c59) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0002def3) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0002def3) list_medium_line_t3_t

0x7188,	// (0x0002530c) list_medium_line_g3_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_g3_g1

0x8aea,	// (0x00026c6e) list_medium_line_g3_g2_ParamLimits

0x8aea,	// (0x00026c6e) list_medium_line_g3_g2

0x7194,	// (0x00025318) list_medium_line_g3_g3_ParamLimits

0x7194,	// (0x00025318) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0002defa) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0002defa) list_medium_line_g3_g

0xe5bf,	// (0x0002c743) list_medium_line_g3_t1_ParamLimits

0xe5bf,	// (0x0002c743) list_medium_line_g3_t1

0x7188,	// (0x0002530c) list_medium_line_t2_g3_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_t2_g3_g1

0x8aea,	// (0x00026c6e) list_medium_line_t2_g3_g2_ParamLimits

0x8aea,	// (0x00026c6e) list_medium_line_t2_g3_g2

0x7194,	// (0x00025318) list_medium_line_t2_g3_g3_ParamLimits

0x7194,	// (0x00025318) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0002defa) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0002defa) list_medium_line_t2_g3_g

0x8af6,	// (0x00026c7a) list_medium_line_t2_g3_t1_ParamLimits

0x8af6,	// (0x00026c7a) list_medium_line_t2_g3_t1

0x8b10,	// (0x00026c94) list_medium_line_t2_g3_t2_ParamLimits

0x8b10,	// (0x00026c94) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0002df01) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0002df01) list_medium_line_t2_g3_t

0x7188,	// (0x0002530c) list_medium_line_t3_g3_g1_ParamLimits

0x7188,	// (0x0002530c) list_medium_line_t3_g3_g1

0x8aea,	// (0x00026c6e) list_medium_line_t3_g3_g2_ParamLimits

0x8aea,	// (0x00026c6e) list_medium_line_t3_g3_g2

0x7194,	// (0x00025318) list_medium_line_t3_g3_g3_ParamLimits

0x7194,	// (0x00025318) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0002defa) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0002defa) list_medium_line_t3_g3_g

0x8b26,	// (0x00026caa) list_medium_line_t3_g3_t1_ParamLimits

0x8b26,	// (0x00026caa) list_medium_line_t3_g3_t1

0x8b3f,	// (0x00026cc3) list_medium_line_t3_g3_t2_ParamLimits

0x8b3f,	// (0x00026cc3) list_medium_line_t3_g3_t2

0x8b55,	// (0x00026cd9) list_medium_line_t3_g3_t3_ParamLimits

0x8b55,	// (0x00026cd9) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0002df06) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0002df06) list_medium_line_t3_g3_t

0x880e,	// (0x00026992) list_medium_line_right_iconx2_g1

0x868d,	// (0x00026811) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0002df0d) list_medium_line_right_iconx2_g

0xe5d4,	// (0x0002c758) list_medium_line_right_iconx2_t1

0x880e,	// (0x00026992) list_medium_line_t2_right_iconx2_g1

0x868d,	// (0x00026811) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0002df0d) list_medium_line_t2_right_iconx2_g

0x8b6b,	// (0x00026cef) list_medium_line_t2_right_iconx2_t1

0x8b7b,	// (0x00026cff) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0002df12) list_medium_line_t2_right_iconx2_t

0x8b89,	// (0x00026d0d) list_medium_line_x4_t4_t1

0x8b97,	// (0x00026d1b) list_medium_line_x4_t4_t2

0x8ba7,	// (0x00026d2b) list_medium_line_x4_t4_t3

0x8bb7,	// (0x00026d3b) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0002df17) list_medium_line_x4_t4_t

0x8bf1,	// (0x00026d75) tport_appsw_pane_ParamLimits

0x8bf1,	// (0x00026d75) tport_appsw_pane

0x8bff,	// (0x00026d83) tport_contact_pane_ParamLimits

0x8bff,	// (0x00026d83) tport_contact_pane

0x8c0f,	// (0x00026d93) tport_listscroll_pane_ParamLimits

0x8c0f,	// (0x00026d93) tport_listscroll_pane

0x8c1f,	// (0x00026da3) cell_tport_appsw_pane_ParamLimits

0x8c1f,	// (0x00026da3) cell_tport_appsw_pane

0xcb65,	// (0x0002ace9) tport_appsw_pane_g1_ParamLimits

0xcb65,	// (0x0002ace9) tport_appsw_pane_g1

0xe5e2,	// (0x0002c766) tport_contact_pane_g1

0xe5eb,	// (0x0002c76f) tport_contact_pane_t1

0xe5f9,	// (0x0002c77d) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0002df20) tport_contact_pane_t

0xe607,	// (0x0002c78b) list_tport_pane

0xe610,	// (0x0002c794) scroll_pane_cp_030

0x8c52,	// (0x00026dd6) cell_tport_appsw_pane_g1

0x8c62,	// (0x00026de6) cell_tport_appsw_pane_t1

0x8c70,	// (0x00026df4) grid_highlight_pane_cp019

0x8c78,	// (0x00026dfc) list_tport_double_graphic_pane_ParamLimits

0x8c78,	// (0x00026dfc) list_tport_double_graphic_pane

0xa529,	// (0x000286ad) list_highlight_pane_cp023_ParamLimits

0xa529,	// (0x000286ad) list_highlight_pane_cp023

0x8c89,	// (0x00026e0d) list_tport_double_graphic_pane_g1_ParamLimits

0x8c89,	// (0x00026e0d) list_tport_double_graphic_pane_g1

0x8c96,	// (0x00026e1a) list_tport_double_graphic_pane_t1_ParamLimits

0x8c96,	// (0x00026e1a) list_tport_double_graphic_pane_t1

0x8cab,	// (0x00026e2f) list_tport_double_graphic_pane_t2_ParamLimits

0x8cab,	// (0x00026e2f) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0002df2c) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0002df2c) list_tport_double_graphic_pane_t

0x9c68,	// (0x00027dec) main_cale_note_pane

0x2211,	// (0x00020395) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2211,	// (0x00020395) cell_vitu2_function_top_wide_pane_cp01

0x826f,	// (0x000263f3) wait_bar_pane_cp05_ParamLimits

0xa529,	// (0x000286ad) listscroll_cmail_pane

0xe619,	// (0x0002c79d) list_cmail_pane

0x8cbd,	// (0x00026e41) list_cmail_body_pane

0x8ce5,	// (0x00026e69) list_single_cmail_header_caption_pane

0x8d11,	// (0x00026e95) list_single_cmail_header_detail_pane_ParamLimits

0x8d11,	// (0x00026e95) list_single_cmail_header_detail_pane

0xe629,	// (0x0002c7ad) list_single_cmail_header_caption_pane_t1

0x8d4a,	// (0x00026ece) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d4a,	// (0x00026ece) list_single_cmail_header_detail_pane_g1

0xe640,	// (0x0002c7c4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe640,	// (0x0002c7c4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0002df31) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0002df31) list_single_cmail_header_detail_pane_g

0xe659,	// (0x0002c7dd) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe659,	// (0x0002c7dd) list_single_cmail_header_detail_pane_t1

0xe6b9,	// (0x0002c83d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6b9,	// (0x0002c83d) list_single_cmail_header_editor_pane_bg

0xdf9f,	// (0x0002c123) list_cmail_body_pane_g1

0xe6d0,	// (0x0002c854) list_cmail_body_pane_t1

0xd28a,	// (0x0002b40e) list_single_cmail_header_editor_pane_bg_g1

0xa812,	// (0x00028996) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd29a,	// (0x0002b41e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd292,	// (0x0002b416) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4e9,	// (0x0002b66d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2ba,	// (0x0002b43e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2aa,	// (0x0002b42e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2b2,	// (0x0002b436) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7f2,	// (0x00028976) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d60,	// (0x00026ee4) calenote_gesture_pane_ParamLimits

0x8d60,	// (0x00026ee4) calenote_gesture_pane

0x8d7a,	// (0x00026efe) calenote_window_pane_ParamLimits

0x8d7a,	// (0x00026efe) calenote_window_pane

0xe6de,	// (0x0002c862) popup_note_window_cp01

0x8d92,	// (0x00026f16) calenote_swipe_1_pane_ParamLimits

0x8d92,	// (0x00026f16) calenote_swipe_1_pane

0x862f,	// (0x000267b3) calenote_swipe_2_pane_ParamLimits

0x862f,	// (0x000267b3) calenote_swipe_2_pane

0xe2f1,	// (0x0002c475) calenote_swipe_1_pane_g1_ParamLimits

0xe2f1,	// (0x0002c475) calenote_swipe_1_pane_g1

0xe2fe,	// (0x0002c482) calenote_swipe_1_pane_g2_ParamLimits

0xe2fe,	// (0x0002c482) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0002de5a) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0002de5a) calenote_swipe_1_pane_g

0xe6f0,	// (0x0002c874) calenote_swipe_1_pane_t1_ParamLimits

0xe6f0,	// (0x0002c874) calenote_swipe_1_pane_t1

0xe2f1,	// (0x0002c475) calenote_swipe_2_pane_g1_ParamLimits

0xe2f1,	// (0x0002c475) calenote_swipe_2_pane_g1

0xe70f,	// (0x0002c893) calenote_swipe_2_pane_g2_ParamLimits

0xe70f,	// (0x0002c893) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0002df3d) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0002df3d) calenote_swipe_2_pane_g

0xe71b,	// (0x0002c89f) calenote_swipe_2_pane_t1_ParamLimits

0xe71b,	// (0x0002c89f) calenote_swipe_2_pane_t1

0x9c68,	// (0x00027dec) main_mup_navstr_pane

0x6122,	// (0x000242a6) main_mup3_pane_t7_ParamLimits

0x6122,	// (0x000242a6) main_mup3_pane_t7

0x1a33,	// (0x0001fbb7) main_mp4_pane_g6_ParamLimits

0x1a33,	// (0x0001fbb7) main_mp4_pane_g6

0x1d44,	// (0x0001fec8) main_image3_pane_t4_ParamLimits

0x1d44,	// (0x0001fec8) main_image3_pane_t4

0x8da5,	// (0x00026f29) popup_navstr_preview_pane_ParamLimits

0x8da5,	// (0x00026f29) popup_navstr_preview_pane

0x8db1,	// (0x00026f35) scroll_navstr_pane_ParamLimits

0x8db1,	// (0x00026f35) scroll_navstr_pane

0x9c68,	// (0x00027dec) bg_popup_preview_window_pane_cp04

0xe742,	// (0x0002c8c6) popup_navstr_preview_pane_t1

0x8dbd,	// (0x00026f41) scroll_navstr_pane_g1_ParamLimits

0x8dbd,	// (0x00026f41) scroll_navstr_pane_g1

0x8dca,	// (0x00026f4e) scroll_navstr_pane_t1_ParamLimits

0x8dca,	// (0x00026f4e) scroll_navstr_pane_t1

0xe6e7,	// (0x0002c86b) bg_button_pane_cp014

0xe6e7,	// (0x0002c86b) bg_button_pane_cp030

0x8542,	// (0x000266c6) list_double_fisheye_pane_g4_ParamLimits

0x8542,	// (0x000266c6) list_double_fisheye_pane_g4

0x854e,	// (0x000266d2) list_double_fisheye_pane_g5_ParamLimits

0x854e,	// (0x000266d2) list_double_fisheye_pane_g5

0xd42c,	// (0x0002b5b0) sp_fs_scroll_pane_cp03

0xe411,	// (0x0002c595) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe41d,	// (0x0002c5a1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0002de77) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe429,	// (0x0002c5ad) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe621,	// (0x0002c7a5) sp_fs_scroll_pane_cp02

0xa4c3,	// (0x00028647) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4c3,	// (0x00028647) popup_sp_fs_calendar_preview_list_single_pane

0x9c68,	// (0x00027dec) main_cam6_pano_pane

0x1394,	// (0x0001f518) main_mup3_pane_ParamLimits

0x9c68,	// (0x00027dec) main_phacti_pane

0x8144,	// (0x000262c8) bg_button_pane_cp11

0x815c,	// (0x000262e0) main_mobtv_info_pane_g2_ParamLimits

0x815c,	// (0x000262e0) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0002ddd7) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0002ddd7) main_mobtv_info_pane_g

0x830e,	// (0x00026492) sc_clock_pane_t5_ParamLimits

0x830e,	// (0x00026492) sc_clock_pane_t5

0x83af,	// (0x00026533) main_radioblah_pane_g1_ParamLimits

0xe23d,	// (0x0002c3c1) main_radioblah_pane_t3_ParamLimits

0xe23d,	// (0x0002c3c1) main_radioblah_pane_t3

0xe255,	// (0x0002c3d9) main_radioblah_pane_t4_ParamLimits

0xe255,	// (0x0002c3d9) main_radioblah_pane_t4

0x83cd,	// (0x00026551) main_radioblah_text_pane_ParamLimits

0x83cd,	// (0x00026551) main_radioblah_text_pane

0x83da,	// (0x0002655e) main_radioblah_info_pane_g1_ParamLimits

0x846f,	// (0x000265f3) main_radioblah_info_pane_t4_ParamLimits

0x846f,	// (0x000265f3) main_radioblah_info_pane_t4

0xa529,	// (0x000286ad) main_sp_fs_calendar_pane

0x8ddc,	// (0x00026f60) main_phacti_pane_g1

0x8de4,	// (0x00026f68) phacti_note_pane_ParamLimits

0x8de4,	// (0x00026f68) phacti_note_pane

0xe759,	// (0x0002c8dd) phacti_term_pane_ParamLimits

0xe759,	// (0x0002c8dd) phacti_term_pane

0xe76e,	// (0x0002c8f2) phacti_note_pane_t1_ParamLimits

0xe76e,	// (0x0002c8f2) phacti_note_pane_t1

0xe785,	// (0x0002c909) phacti_term_pane_g1

0xe78d,	// (0x0002c911) phacti_term_pane_t1_ParamLimits

0xe78d,	// (0x0002c911) phacti_term_pane_t1

0xe7b7,	// (0x0002c93b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7bf,	// (0x0002c943) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0002df47) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7c7,	// (0x0002c94b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7c7,	// (0x0002c94b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7dd,	// (0x0002c961) aid_popup_sp_fs_bg_corner_pane

0xc847,	// (0x0002a9cb) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c68,	// (0x00027dec) popup_sp_fs_calendar_preview_bg_pane

0x8dfa,	// (0x00026f7e) popup_sp_fs_calendar_preview_list_pane

0xc43f,	// (0x0002a5c3) bg_main_sp_fs_cale_pane_ParamLimits

0xc43f,	// (0x0002a5c3) bg_main_sp_fs_cale_pane

0xe7ee,	// (0x0002c972) listscroll_cale_mrui_pane_ParamLimits

0xe7ee,	// (0x0002c972) listscroll_cale_mrui_pane

0xd30e,	// (0x0002b492) listscroll_sp_fs_schedule_track_pane

0xe803,	// (0x0002c987) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe803,	// (0x0002c987) main_sp_fs_ctrlbar_pane_cp01

0xe816,	// (0x0002c99a) main_sp_fs_ribbon_pane

0xe81e,	// (0x0002c9a2) popup_sp_fs_cale_preview_window

0x8e4f,	// (0x00026fd3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e4f,	// (0x00026fd3) list_single_sp_fs_schedule_track_pane

0xd145,	// (0x0002b2c9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd145,	// (0x0002b2c9) bg_sp_fs_highlight_list_pane_cp03

0x8e72,	// (0x00026ff6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e72,	// (0x00026ff6) list_single_sp_fs_schedule_track_pane_g1

0x8e7e,	// (0x00027002) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e7e,	// (0x00027002) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0002df4c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0002df4c) list_single_sp_fs_schedule_track_pane_g

0x8e8a,	// (0x0002700e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e8a,	// (0x0002700e) list_single_sp_fs_schedule_track_pane_t1

0x8ea2,	// (0x00027026) sp_fs_schedule_track_pane_ParamLimits

0x8ea2,	// (0x00027026) sp_fs_schedule_track_pane

0xe830,	// (0x0002c9b4) sp_fs_schedule_track_pane_g1

0xe838,	// (0x0002c9bc) sp_fs_schedule_track_pane_g2

0xe840,	// (0x0002c9c4) sp_fs_schedule_track_pane_g3

0xe848,	// (0x0002c9cc) sp_fs_schedule_track_pane_g4

0xe850,	// (0x0002c9d4) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0002df51) sp_fs_schedule_track_pane_g

0xd28a,	// (0x0002b40e) bg_sp_fs_schedule_viewer_highlight_g1

0xa812,	// (0x00028996) bg_sp_fs_schedule_viewer_highlight_g2

0xd292,	// (0x0002b416) bg_sp_fs_schedule_viewer_highlight_g3

0xd29a,	// (0x0002b41e) bg_sp_fs_schedule_viewer_highlight_g4

0xd4e9,	// (0x0002b66d) bg_sp_fs_schedule_viewer_highlight_g5

0xd2aa,	// (0x0002b42e) bg_sp_fs_schedule_viewer_highlight_g6

0xd2b2,	// (0x0002b436) bg_sp_fs_schedule_viewer_highlight_g7

0xd2ba,	// (0x0002b43e) bg_sp_fs_schedule_viewer_highlight_g8

0xa7f2,	// (0x00028976) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0002df5c) bg_sp_fs_schedule_viewer_highlight_g

0x9c68,	// (0x00027dec) bg_main_sp_fs_ribbon_pane

0x8eb2,	// (0x00027036) main_sp_fs_ribbon_pane_g1

0xe858,	// (0x0002c9dc) main_sp_fs_ribbon_pane_t1

0x8ebb,	// (0x0002703f) main_sp_fs_ribbon_pane_t2

0xe867,	// (0x0002c9eb) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0002df6f) main_sp_fs_ribbon_pane_t

0xe876,	// (0x0002c9fa) main_sp_fs_ribbon_scheduler_pane

0xe87e,	// (0x0002ca02) bg_main_sp_fs_ribbon_pane_g1

0xe887,	// (0x0002ca0b) bg_main_sp_fs_ribbon_pane_g2

0xe890,	// (0x0002ca14) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0002df76) bg_main_sp_fs_ribbon_pane_g

0xe898,	// (0x0002ca1c) main_sp_fs_ribbon_scheduler_pane_g1

0xe8a1,	// (0x0002ca25) main_sp_fs_ribbon_scheduler_pane_g2

0xe8aa,	// (0x0002ca2e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0002df7d) main_sp_fs_ribbon_scheduler_pane_g

0xe8b3,	// (0x0002ca37) list_cale_mrui_pane

0x8eca,	// (0x0002704e) sp_fs_scroll_pane_cp07_ParamLimits

0x8eca,	// (0x0002704e) sp_fs_scroll_pane_cp07

0x8ee6,	// (0x0002706a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ee6,	// (0x0002706a) bg_sp_fs_schedule_viewer_highlight

0xe8c0,	// (0x0002ca44) list_single_sp_fs_schedule_track_pane_cp01

0xe8c8,	// (0x0002ca4c) list_sp_fs_schedule_track_pane

0xe8d0,	// (0x0002ca54) sp_fs_scroll_pane_cp06_ParamLimits

0xe8d0,	// (0x0002ca54) sp_fs_scroll_pane_cp06

0xc847,	// (0x0002a9cb) bgmain_sp_fs_calendar_pane_g1

0x8ef3,	// (0x00027077) list_single_cale_mrui_pane_ParamLimits

0x8ef3,	// (0x00027077) list_single_cale_mrui_pane

0xe8e2,	// (0x0002ca66) list_single_cale_mrui_row_pane_ParamLimits

0xe8e2,	// (0x0002ca66) list_single_cale_mrui_row_pane

0xe8ef,	// (0x0002ca73) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8ef,	// (0x0002ca73) list_single_cale_mrui_row_pane_g1

0xe934,	// (0x0002cab8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe934,	// (0x0002cab8) list_single_cale_mrui_row_pane_t1

0x8f21,	// (0x000270a5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f21,	// (0x000270a5) list_single_cale_mrui_row_pane_t2

0xe946,	// (0x0002caca) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe946,	// (0x0002caca) list_single_cale_mrui_row_pane_t3

0xe975,	// (0x0002caf9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe975,	// (0x0002caf9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0002df8b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0002df8b) list_single_cale_mrui_row_pane_t

0x8f87,	// (0x0002710b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f87,	// (0x0002710b) list_single_cmail_header_editor_pane_bg_cp01

0x8fa7,	// (0x0002712b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fa7,	// (0x0002712b) list_single_cmail_header_editor_pane_bg_cp02

0x8fc3,	// (0x00027147) main_radioblah_text_pane_t1_ParamLimits

0x8fc3,	// (0x00027147) main_radioblah_text_pane_t1

0xe9a4,	// (0x0002cb28) cam6_indi_pane_cp01

0xe9ac,	// (0x0002cb30) cam6_mode_pane_cp01

0xe9b4,	// (0x0002cb38) cam6_pano_pane

0xe9bd,	// (0x0002cb41) cam6_zoom_pane_cp01

0xe9c5,	// (0x0002cb49) cam6_pano_image_pane

0xe9d0,	// (0x0002cb54) cam6_pano_pane_g1

0xdf9f,	// (0x0002c123) cam6_pano_pane_g2

0xe9d9,	// (0x0002cb5d) cam6_pano_pane_g3

0xe9e2,	// (0x0002cb66) cam6_pano_pane_g4

0xce5d,	// (0x0002afe1) cam6_pano_pane_g5

0xe9eb,	// (0x0002cb6f) cam6_pano_pane_g6

0xe9f5,	// (0x0002cb79) cam6_pano_pane_g7

0xe9fd,	// (0x0002cb81) cam6_pano_pane_g8

0xea06,	// (0x0002cb8a) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0002df94) cam6_pano_pane_g

0x9c68,	// (0x00027dec) main_browser_tag_pane

0xe73a,	// (0x0002c8be) grid_navstr_albumart_pane

0xea11,	// (0x0002cb95) cell_navstr_albumart_pane_ParamLimits

0xea11,	// (0x0002cb95) cell_navstr_albumart_pane

0xea31,	// (0x0002cbb5) cell_navstr_albumart_pane_g1

0xc210,	// (0x0002a394) cell_navstr_albumart_pane_g2

0xc220,	// (0x0002a3a4) cell_navstr_albumart_pane_g3

0xc218,	// (0x0002a39c) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0002dfa7) cell_navstr_albumart_pane_g

0x8fde,	// (0x00027162) bt_list_pane_ParamLimits

0x8fde,	// (0x00027162) bt_list_pane

0x8fff,	// (0x00027183) bt_list_pane_t1

0x900e,	// (0x00027192) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0002dfb0) bt_list_pane_t

0x9c68,	// (0x00027dec) main_cale_prevew_pane

0x901d,	// (0x000271a1) popup_cale_preview_window_ParamLimits

0x901d,	// (0x000271a1) popup_cale_preview_window

0xa529,	// (0x000286ad) bg_popup_preview_window_pane_cp05_ParamLimits

0xa529,	// (0x000286ad) bg_popup_preview_window_pane_cp05

0xea39,	// (0x0002cbbd) list_cale_preview_pane_ParamLimits

0xea39,	// (0x0002cbbd) list_cale_preview_pane

0x9036,	// (0x000271ba) list_double_cale_preview_pane_ParamLimits

0x9036,	// (0x000271ba) list_double_cale_preview_pane

0x9048,	// (0x000271cc) list_single_cale_preview_pane_ParamLimits

0x9048,	// (0x000271cc) list_single_cale_preview_pane

0x905c,	// (0x000271e0) list_single_cale_preview_pane_g1

0x9064,	// (0x000271e8) list_single_cale_preview_pane_t1_ParamLimits

0x9064,	// (0x000271e8) list_single_cale_preview_pane_t1

0x9079,	// (0x000271fd) list_double_cale_preview_pane_g1

0x9081,	// (0x00027205) list_double_cale_preview_pane_t1_ParamLimits

0x9081,	// (0x00027205) list_double_cale_preview_pane_t1

0x9096,	// (0x0002721a) list_double_cale_preview_pane_t2_ParamLimits

0x9096,	// (0x0002721a) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0002dfb5) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0002dfb5) list_double_cale_preview_pane_t

0x9c68,	// (0x00027dec) main_ezdial_pane

0xa529,	// (0x000286ad) main_sp_fs_email_pane_ParamLimits

0x86b3,	// (0x00026837) cmail_ddmenu_btn01_pane_ParamLimits

0x86b3,	// (0x00026837) cmail_ddmenu_btn01_pane

0x86c8,	// (0x0002684c) cmail_ddmenu_btn02_pane_ParamLimits

0x86c8,	// (0x0002684c) cmail_ddmenu_btn02_pane

0x86e0,	// (0x00026864) cmail_ddmenu_btn03_pane_ParamLimits

0x86e0,	// (0x00026864) cmail_ddmenu_btn03_pane

0x8708,	// (0x0002688c) main_sp_fs_ctrlbar_pane_ParamLimits

0x871e,	// (0x000268a2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cbd,	// (0x00026e41) list_cmail_body_pane_ParamLimits

0xe637,	// (0x0002c7bb) bg_button_pane_cp12

0xe64c,	// (0x0002c7d0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe64c,	// (0x0002c7d0) list_single_cmail_header_detail_pane_g3

0xe695,	// (0x0002c819) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe695,	// (0x0002c819) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0002df38) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0002df38) list_single_cmail_header_detail_pane_t

0xe7a2,	// (0x0002c926) phacti_term_pane_t2_ParamLimits

0xe7a2,	// (0x0002c926) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0002df42) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0002df42) phacti_term_pane_t

0xea45,	// (0x0002cbc9) aid_size_list_single_double

0x90ae,	// (0x00027232) popup_ezdial_listscroll_window

0x90d2,	// (0x00027256) popup_number_entry_window_cp01

0xa5b9,	// (0x0002873d) bg_popup_call_pane_cp09

0xea51,	// (0x0002cbd5) ezdial_list_pane

0xea59,	// (0x0002cbdd) scroll_pane_cp23

0xc62c,	// (0x0002a7b0) bg_button_pane_cp028_ParamLimits

0xc62c,	// (0x0002a7b0) bg_button_pane_cp028

0x90e0,	// (0x00027264) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90e0,	// (0x00027264) cmail_ddmenu_btn01_pane_g1

0x90f0,	// (0x00027274) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90f0,	// (0x00027274) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0002dfba) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0002dfba) cmail_ddmenu_btn01_pane_g

0xea61,	// (0x0002cbe5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea61,	// (0x0002cbe5) cmail_ddmenu_btn01_pane_t1

0xc43f,	// (0x0002a5c3) bg_button_pane_cp029_ParamLimits

0xc43f,	// (0x0002a5c3) bg_button_pane_cp029

0x90f0,	// (0x00027274) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90f0,	// (0x00027274) cmail_ddmenu_btn02_pane_g1

0x9108,	// (0x0002728c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9108,	// (0x0002728c) cmail_ddmenu_btn02_pane_t1

0xd145,	// (0x0002b2c9) bg_button_pane_cp031_ParamLimits

0xd145,	// (0x0002b2c9) bg_button_pane_cp031

0x90f0,	// (0x00027274) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90f0,	// (0x00027274) cmail_ddmenu_btn03_pane_g1

0x9108,	// (0x0002728c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9108,	// (0x0002728c) cmail_ddmenu_btn03_pane_t1

0x697e,	// (0x00024b02) cell_dialer2_keypad_pane_t1_ParamLimits

0x6998,	// (0x00024b1c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6998,	// (0x00024b1c) cell_dialer2_keypad_pane_t1_copy1

0x7f85,	// (0x00026109) ncimui_group_button_pane

0xa529,	// (0x000286ad) main_sp_fs_calendar_pane_ParamLimits

0x8ce5,	// (0x00026e69) list_single_cmail_header_caption_pane_ParamLimits

0xe7e5,	// (0x0002c969) aid_recal_txt_sm_pane

0x9c68,	// (0x00027dec) mian_recal_day_pane

0xe81e,	// (0x0002c9a2) popup_sp_fs_cale_preview_window_ParamLimits

0xea76,	// (0x0002cbfa) list_recal_day_pane

0xeab8,	// (0x0002cc3c) list_single_recal_day_pane_ParamLimits

0xeab8,	// (0x0002cc3c) list_single_recal_day_pane

0xeaca,	// (0x0002cc4e) list_single_recal_day_pane_g1_ParamLimits

0xeaca,	// (0x0002cc4e) list_single_recal_day_pane_g1

0xead6,	// (0x0002cc5a) list_single_recal_day_pane_g2_ParamLimits

0xead6,	// (0x0002cc5a) list_single_recal_day_pane_g2

0xeae2,	// (0x0002cc66) list_single_recal_day_pane_g3_ParamLimits

0xeae2,	// (0x0002cc66) list_single_recal_day_pane_g3

0x912c,	// (0x000272b0) list_single_recal_day_pane_g4_ParamLimits

0x912c,	// (0x000272b0) list_single_recal_day_pane_g4

0xeaee,	// (0x0002cc72) list_single_recal_day_pane_g5_ParamLimits

0xeaee,	// (0x0002cc72) list_single_recal_day_pane_g5

0xeafa,	// (0x0002cc7e) list_single_recal_day_pane_g6_ParamLimits

0xeafa,	// (0x0002cc7e) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0002dfc9) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0002dfc9) list_single_recal_day_pane_g

0xeb0e,	// (0x0002cc92) list_single_recal_day_pane_t1

0xeb20,	// (0x0002cca4) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0002dfd4) list_single_recal_day_pane_t

0x9144,	// (0x000272c8) ncimui_query_button_pane_ParamLimits

0x9144,	// (0x000272c8) ncimui_query_button_pane

0x9154,	// (0x000272d8) ncimui_query_button_pane_t1_ParamLimits

0x9154,	// (0x000272d8) ncimui_query_button_pane_t1

0xeb32,	// (0x0002ccb6) ncimui_query_button_pane_t2_ParamLimits

0xeb32,	// (0x0002ccb6) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0002dfd9) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0002dfd9) ncimui_query_button_pane_t

0x9167,	// (0x000272eb) query_button_pane_ParamLimits

0x9167,	// (0x000272eb) query_button_pane

0x9c68,	// (0x00027dec) bg_button_pane_cp0028

0xeb45,	// (0x0002ccc9) query_button_pane_t1

0x13b0,	// (0x0001f534) main_tport_pane_ParamLimits

0x8bc7,	// (0x00026d4b) bg_popup_window_pane_cp01_ParamLimits

0x8bc7,	// (0x00026d4b) bg_popup_window_pane_cp01

0x8bd5,	// (0x00026d59) heading_pane_cp08_ParamLimits

0x8bd5,	// (0x00026d59) heading_pane_cp08

0x8be3,	// (0x00026d67) heading_pane_cp07_ParamLimits

0x8be3,	// (0x00026d67) heading_pane_cp07

0x8c52,	// (0x00026dd6) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0002df25) cell_tport_appsw_pane_g

0x4cfa,	// (0x00022e7e) input_candi_list_open_g1

0xa9d5,	// (0x00028b59) list_cale_time_pane_g6_ParamLimits

0xa9d5,	// (0x00028b59) list_cale_time_pane_g6

0x5bad,	// (0x00023d31) aid_size_touch_calib_1_ParamLimits

0x5bad,	// (0x00023d31) aid_size_touch_calib_1

0x5bb9,	// (0x00023d3d) aid_size_touch_calib_2_ParamLimits

0x5bb9,	// (0x00023d3d) aid_size_touch_calib_2

0x5bc7,	// (0x00023d4b) aid_size_touch_calib_3_ParamLimits

0x5bc7,	// (0x00023d4b) aid_size_touch_calib_3

0x5bd7,	// (0x00023d5b) aid_size_touch_calib_4_ParamLimits

0x5bd7,	// (0x00023d5b) aid_size_touch_calib_4

0x5be5,	// (0x00023d69) main_touch_calib_button_group_pane_ParamLimits

0x5be5,	// (0x00023d69) main_touch_calib_button_group_pane

0x5bf3,	// (0x00023d77) main_touch_calib_pane_g1_ParamLimits

0x5bff,	// (0x00023d83) main_touch_calib_pane_g2_ParamLimits

0x5c0b,	// (0x00023d8f) main_touch_calib_pane_g3_ParamLimits

0x5c17,	// (0x00023d9b) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0002d8e4) main_touch_calib_pane_g_ParamLimits

0x5c23,	// (0x00023da7) main_touch_calib_pane_t1_ParamLimits

0x5c3c,	// (0x00023dc0) main_touch_calib_pane_t2_ParamLimits

0x5c55,	// (0x00023dd9) main_touch_calib_pane_t3_ParamLimits

0x5c6b,	// (0x00023def) main_touch_calib_pane_t4_ParamLimits

0x5c81,	// (0x00023e05) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0002d8ed) main_touch_calib_pane_t_ParamLimits

0xcc00,	// (0x0002ad84) list_single_fp_cale_pane_g3_ParamLimits

0xcc00,	// (0x0002ad84) list_single_fp_cale_pane_g3

0x1394,	// (0x0001f518) bg_button_pane_cp012_ParamLimits

0x1394,	// (0x0001f518) bg_vkb2_func_pane_cp03_ParamLimits

0x2416,	// (0x0002059a) cell_vitu2_function_top_pane_g1_ParamLimits

0x1394,	// (0x0001f518) bg_vkb2_func_pane_cp04_ParamLimits

0x7f0d,	// (0x00026091) main_ncimui_button_group_pane_ParamLimits

0x7f0d,	// (0x00026091) main_ncimui_button_group_pane

0x7f73,	// (0x000260f7) main_ncimui_pane_t3_ParamLimits

0x7f73,	// (0x000260f7) main_ncimui_pane_t3

0xe750,	// (0x0002c8d4) phacti_button_group_pane

0xea45,	// (0x0002cbc9) aid_size_list_single_double_ParamLimits

0x90ae,	// (0x00027232) popup_ezdial_listscroll_window_ParamLimits

0x90d2,	// (0x00027256) popup_number_entry_window_cp01_ParamLimits

0x9174,	// (0x000272f8) phacti_button_pane_ParamLimits

0x9174,	// (0x000272f8) phacti_button_pane

0x9c68,	// (0x00027dec) bg_button_pane_cp14

0xeb53,	// (0x0002ccd7) phacti_button_pane_t1

0x9185,	// (0x00027309) main_touch_calib_button_pane_ParamLimits

0x9185,	// (0x00027309) main_touch_calib_button_pane

0xa3b1,	// (0x00028535) bg_button_pane_cp18_ParamLimits

0xa3b1,	// (0x00028535) bg_button_pane_cp18

0xeb61,	// (0x0002cce5) main_touch_calib_button_pane_t1_ParamLimits

0xeb61,	// (0x0002cce5) main_touch_calib_button_pane_t1

0xeb77,	// (0x0002ccfb) main_touch_calib_button_pane_t2_ParamLimits

0xeb77,	// (0x0002ccfb) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0002dfde) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0002dfde) main_touch_calib_button_pane_t

0x9c68,	// (0x00027dec) cell_ncimui_button_pane

0x9c68,	// (0x00027dec) bg_button_pane_cp032

0xeb95,	// (0x0002cd19) cell_ncimui_button_pane_t1

0x1c57,	// (0x0001fddb) image3_infobar_pane_ParamLimits

0x1c57,	// (0x0001fddb) image3_infobar_pane

0x8330,	// (0x000264b4) fs_bigclock_status_pane_ParamLimits

0x8330,	// (0x000264b4) fs_bigclock_status_pane

0x833d,	// (0x000264c1) main_fs_bigclock_clock_pane_ParamLimits

0x833d,	// (0x000264c1) main_fs_bigclock_clock_pane

0x8351,	// (0x000264d5) main_fs_bigclock_indi_pane_ParamLimits

0x8351,	// (0x000264d5) main_fs_bigclock_indi_pane

0x8379,	// (0x000264fd) main_fs_bigclock_swipe_pane_ParamLimits

0x8379,	// (0x000264fd) main_fs_bigclock_swipe_pane

0x9c68,	// (0x00027dec) main_fs_clock_dumped_data

0xe0ac,	// (0x0002c230) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0ac,	// (0x0002c230) list_single_fs_bigclock_indicator_pane_g1

0xe0c8,	// (0x0002c24c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0c8,	// (0x0002c24c) list_single_fs_bigclock_indicator_pane_g2

0xe0e2,	// (0x0002c266) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0e2,	// (0x0002c266) list_single_fs_bigclock_indicator_pane_g3

0xe0fc,	// (0x0002c280) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0fc,	// (0x0002c280) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0002de0b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0002de0b) list_single_fs_bigclock_indicator_pane_g

0xe127,	// (0x0002c2ab) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe127,	// (0x0002c2ab) list_single_fs_bigclock_indicator_pane_t1

0xe14f,	// (0x0002c2d3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe14f,	// (0x0002c2d3) list_single_fs_bigclock_indicator_pane_t2

0xe177,	// (0x0002c2fb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe177,	// (0x0002c2fb) list_single_fs_bigclock_indicator_pane_t3

0xe19f,	// (0x0002c323) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe19f,	// (0x0002c323) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0002de16) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0002de16) list_single_fs_bigclock_indicator_pane_t

0xeba3,	// (0x0002cd27) image3_infobar_fav_pane_ParamLimits

0xeba3,	// (0x0002cd27) image3_infobar_fav_pane

0xebb3,	// (0x0002cd37) image3_infobar_loc_pane_ParamLimits

0xebb3,	// (0x0002cd37) image3_infobar_loc_pane

0xebc7,	// (0x0002cd4b) image3_infobar_time_pane_ParamLimits

0xebc7,	// (0x0002cd4b) image3_infobar_time_pane

0xc847,	// (0x0002a9cb) image3_infobar_time_pane_g1

0xebd7,	// (0x0002cd5b) image3_infobar_time_pane_t1

0xc847,	// (0x0002a9cb) image3_infobar_loc_pane_g1

0xebe5,	// (0x0002cd69) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0002dfe3) image3_infobar_loc_pane_g

0xec1a,	// (0x0002cd9e) image3_infobar_loc_pane_t1

0xc847,	// (0x0002a9cb) image3_infobar_fav_pane_g1

0xec28,	// (0x0002cdac) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0002dfe8) image3_infobar_fav_pane_g

0xec30,	// (0x0002cdb4) fs_bigclock_status_battery_pane

0xec39,	// (0x0002cdbd) fs_bigclock_status_signal_pane

0xec42,	// (0x0002cdc6) fs_bigclock_status_title_pane

0xec4b,	// (0x0002cdcf) fs_bigclock_status_signal_pane_g1

0xec54,	// (0x0002cdd8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0002dfed) fs_bigclock_status_signal_pane_g

0xec5c,	// (0x0002cde0) fs_bigclock_status_battery_pane_g1

0xec65,	// (0x0002cde9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0002dff2) fs_bigclock_status_battery_pane_g

0xec6d,	// (0x0002cdf1) fs_bigclock_status_title_pane_t1

0x9195,	// (0x00027319) main_fs_bigclock_clock_pane_g1

0x9195,	// (0x00027319) main_fs_bigclock_clock_pane_g2

0x91a2,	// (0x00027326) main_fs_bigclock_clock_pane_g3

0x91a2,	// (0x00027326) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0002dff7) main_fs_bigclock_clock_pane_g

0x91ae,	// (0x00027332) main_fs_bigclock_clock_pane_t1

0x91c1,	// (0x00027345) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0002e000) main_fs_bigclock_clock_pane_t

0xec7b,	// (0x0002cdff) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec7b,	// (0x0002cdff) list_single_fs_bigclock_indicator_pane

0xec8c,	// (0x0002ce10) list_single_fs_bigclock_pane_ParamLimits

0xec8c,	// (0x0002ce10) list_single_fs_bigclock_pane

0xecb2,	// (0x0002ce36) main_fs_bigclock_indicator_pane_t1

0xecc1,	// (0x0002ce45) list_single_fs_bigclock_pane_g1

0xecc9,	// (0x0002ce4d) list_single_fs_bigclock_pane_t1

0xc847,	// (0x0002a9cb) main_fs_bigclock_swipe_pane_g1

0xed0c,	// (0x0002ce90) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x0002e011) main_fs_bigclock_swipe_pane_g

0xed14,	// (0x0002ce98) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed14,	// (0x0002ce98) main_fs_bigclock_swipe_pane_t1

0x45ff,	// (0x00022783) call_type_pane_ParamLimits

0x9c68,	// (0x00027dec) main_btmg_pane

0xe91b,	// (0x0002ca9f) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe91b,	// (0x0002ca9f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0002df84) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0002df84) list_single_cale_mrui_row_pane_g

0xea9f,	// (0x0002cc23) list_recal_vselct_arw_lo_pane

0xeaa7,	// (0x0002cc2b) list_recal_vselct_arw_up_pane

0xeaaf,	// (0x0002cc33) list_recal_vselct_pane

0x9218,	// (0x0002739c) btmg_button_pane

0x9224,	// (0x000273a8) main_btmg_pane_g1

0x9c68,	// (0x00027dec) bg_button_pane_cp044

0xed31,	// (0x0002ceb5) btmg_button_pane_t1

0xc42b,	// (0x0002a5af) aid_listscroll_gen

0xa529,	// (0x000286ad) main_cntbar_detail_pane

0xe619,	// (0x0002c79d) list_cmail_folder_pane

0xd42c,	// (0x0002b5b0) sp_fs_scroll_pane_cp03_ParamLimits

0x922c,	// (0x000273b0) list_single_fs_dyc_pane_cp01_ParamLimits

0x922c,	// (0x000273b0) list_single_fs_dyc_pane_cp01

0xed3f,	// (0x0002cec3) aid_size_cmail_indent

0xed48,	// (0x0002cecc) list_single_dyc_row_pane_cp01

0x9278,	// (0x000273fc) cntbar_detail_list_pane_ParamLimits

0x9278,	// (0x000273fc) cntbar_detail_list_pane

0x92b2,	// (0x00027436) main_cntbar_detail_cont_pane_ParamLimits

0x92b2,	// (0x00027436) main_cntbar_detail_cont_pane

0x4522,	// (0x000226a6) scroll_pane_cp032_ParamLimits

0x4522,	// (0x000226a6) scroll_pane_cp032

0x92be,	// (0x00027442) cntbar_detail_list_event_pane_ParamLimits

0x92be,	// (0x00027442) cntbar_detail_list_event_pane

0x9284,	// (0x00027408) cntbar_detail_list_shct_pane

0xa860,	// (0x000289e4) aid_list_gen

0xed51,	// (0x0002ced5) aid_scroll

0xed5a,	// (0x0002cede) aid_size_touch_scroll_bar

0x7750,	// (0x000258d4) aid_list_double

0x92d2,	// (0x00027456) aid_list_single

0x773e,	// (0x000258c2) aid_list_single_lg

0x92db,	// (0x0002745f) aid_list_z_g_a_sm

0x92e3,	// (0x00027467) aid_list_z_g_d

0x92eb,	// (0x0002746f) aid_txt_z_prm

0x92f9,	// (0x0002747d) aid_txt_z_prm_cp01

0x9307,	// (0x0002748b) aid_txt_z_sec

0x9315,	// (0x00027499) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9315,	// (0x00027499) main_cntbar_detail_cont_pane_g1

0x9322,	// (0x000274a6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9322,	// (0x000274a6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0002e016) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0002e016) main_cntbar_detail_cont_pane_g

0xed63,	// (0x0002cee7) main_cntbar_detail_cont_pane_t1

0xed71,	// (0x0002cef5) main_cntbar_detail_cont_pane_t2

0xed7f,	// (0x0002cf03) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x0002e01b) main_cntbar_detail_cont_pane_t

0x932e,	// (0x000274b2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x932e,	// (0x000274b2) cell_cntbar_detail_list_shct_pane

0xed8d,	// (0x0002cf11) cntbar_detail_list_shct_pane_g1

0xed96,	// (0x0002cf1a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0002e022) cntbar_detail_list_shct_pane_g

0x9342,	// (0x000274c6) cntbar_detail_list_event_pane_g1_ParamLimits

0x9342,	// (0x000274c6) cntbar_detail_list_event_pane_g1

0x934e,	// (0x000274d2) cntbar_detail_list_event_pane_g2_ParamLimits

0x934e,	// (0x000274d2) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0002e027) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0002e027) cntbar_detail_list_event_pane_g

0x93ba,	// (0x0002753e) cntbar_detail_list_event_pane_t1_ParamLimits

0x93ba,	// (0x0002753e) cntbar_detail_list_event_pane_t1

0x93cf,	// (0x00027553) cntbar_detail_list_event_pane_t2_ParamLimits

0x93cf,	// (0x00027553) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0002e034) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0002e034) cntbar_detail_list_event_pane_t

0xc847,	// (0x0002a9cb) cell_cntbar_detail_list_shct_pane_g1

0xafba,	// (0x0002913e) navi_pane_mv_g3

0xa529,	// (0x000286ad) main_cntbar_detail_pane_ParamLimits

0x9c68,	// (0x00027dec) main_notif_wgt_pane

0x196e,	// (0x0001faf2) aid_tch_main_mp4_pane_g4

0x1bcd,	// (0x0001fd51) popup_slider_window_cp02

0xea95,	// (0x0002cc19) list_recal_day_event_pane

0x9258,	// (0x000273dc) cntbar_detail_btn_pane_ParamLimits

0x9258,	// (0x000273dc) cntbar_detail_btn_pane

0x9268,	// (0x000273ec) cntbar_detail_btn_pane_cp01_ParamLimits

0x9268,	// (0x000273ec) cntbar_detail_btn_pane_cp01

0x9284,	// (0x00027408) cntbar_detail_list_shct_pane_ParamLimits

0x9290,	// (0x00027414) cntbar_detail_pane_g1_ParamLimits

0x9290,	// (0x00027414) cntbar_detail_pane_g1

0x929c,	// (0x00027420) cntbar_detail_pane_t1_ParamLimits

0x929c,	// (0x00027420) cntbar_detail_pane_t1

0x935a,	// (0x000274de) cntbar_detail_list_event_pane_g3_ParamLimits

0x935a,	// (0x000274de) cntbar_detail_list_event_pane_g3

0x9372,	// (0x000274f6) cntbar_detail_list_event_pane_g4_ParamLimits

0x9372,	// (0x000274f6) cntbar_detail_list_event_pane_g4

0x938a,	// (0x0002750e) cntbar_detail_list_event_pane_g5_ParamLimits

0x938a,	// (0x0002750e) cntbar_detail_list_event_pane_g5

0x93a2,	// (0x00027526) cntbar_detail_list_event_pane_g6_ParamLimits

0x93a2,	// (0x00027526) cntbar_detail_list_event_pane_g6

0x93e4,	// (0x00027568) cntbar_detail_list_event_pane_t3_ParamLimits

0x93e4,	// (0x00027568) cntbar_detail_list_event_pane_t3

0x93f6,	// (0x0002757a) popup_notif_wgt_window_ParamLimits

0x93f6,	// (0x0002757a) popup_notif_wgt_window

0x9406,	// (0x0002758a) popup_submenu_window_cp01_ParamLimits

0x9406,	// (0x0002758a) popup_submenu_window_cp01

0xa5b9,	// (0x0002873d) bg_popup_window_pane_cp10

0xed9f,	// (0x0002cf23) listscroll_notif_wgt_pane

0xedb1,	// (0x0002cf35) list_notif_wgt_window

0xedba,	// (0x0002cf3e) scroll_pane_cp033

0x9414,	// (0x00027598) list_notif_wgt_row_pane_ParamLimits

0x9414,	// (0x00027598) list_notif_wgt_row_pane

0xedc3,	// (0x0002cf47) aid_size_list_notif_wgt_del

0xedd0,	// (0x0002cf54) list_notif_wgt_row_pane_g1

0xeddc,	// (0x0002cf60) list_notif_wgt_row_pane_g2

0xedeb,	// (0x0002cf6f) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x0002e03b) list_notif_wgt_row_pane_g

0xedf8,	// (0x0002cf7c) list_notif_wgt_row_pane_t1

0xee0e,	// (0x0002cf92) list_notif_wgt_row_pane_t2

0xee20,	// (0x0002cfa4) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x0002e042) list_notif_wgt_row_pane_t

0xd503,	// (0x0002b687) list_recal_day_event_pane_g1

0xee32,	// (0x0002cfb6) list_recal_day_event_pane_t1

0x9c68,	// (0x00027dec) bg_button_pane_cp045

0x9426,	// (0x000275aa) cntbar_detail_btn_pane_t1

0xc43f,	// (0x0002a5c3) main_callh_pane_ParamLimits

0xc43f,	// (0x0002a5c3) main_callh_pane

0x9c68,	// (0x00027dec) main_coverflow0_pane

0x9c68,	// (0x00027dec) main_wgtman_pane

0x8391,	// (0x00026515) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8391,	// (0x00026515) main_fs_bigclock_unlock_btn_pane

0x8c4a,	// (0x00026dce) bg_button_pane_cp16

0x8c5a,	// (0x00026dde) cell_tport_appsw_pane_g3

0x9434,	// (0x000275b8) cf0_flow_pane_ParamLimits

0x9434,	// (0x000275b8) cf0_flow_pane

0xee41,	// (0x0002cfc5) listscroll_cf0_pane

0xee4c,	// (0x0002cfd0) main_cf0_pane_g1

0x9443,	// (0x000275c7) main_cf0_pane_t1_ParamLimits

0x9443,	// (0x000275c7) main_cf0_pane_t1

0x9457,	// (0x000275db) main_cf0_pane_t2_ParamLimits

0x9457,	// (0x000275db) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0002e04e) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0002e04e) main_cf0_pane_t

0xee5e,	// (0x0002cfe2) scroll_pane_cp11

0x946b,	// (0x000275ef) cf0_flow_pane_g1

0x9473,	// (0x000275f7) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0002e053) cf0_flow_pane_g

0x947b,	// (0x000275ff) cf0_flow_pane_t1

0x9c68,	// (0x00027dec) main_call6_pane

0x9c68,	// (0x00027dec) main_calllock_pane

0x2647,	// (0x000207cb) call6_btn_grp_pane_ParamLimits

0x2647,	// (0x000207cb) call6_btn_grp_pane

0x2656,	// (0x000207da) call6_pane_g1_ParamLimits

0x2656,	// (0x000207da) call6_pane_g1

0x2666,	// (0x000207ea) popup_call6_1st_window_ParamLimits

0x2666,	// (0x000207ea) popup_call6_1st_window

0x2674,	// (0x000207f8) popup_call6_2nd_window_ParamLimits

0x2674,	// (0x000207f8) popup_call6_2nd_window

0x2682,	// (0x00020806) cell_call6_btn_pane_ParamLimits

0x2682,	// (0x00020806) cell_call6_btn_pane

0xa5b9,	// (0x0002873d) bg_popup_call2_in_pane_cp03

0xee69,	// (0x0002cfed) popup_call6_1st_window_g1

0xee71,	// (0x0002cff5) popup_call6_1st_window_g2

0xee79,	// (0x0002cffd) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0002e058) popup_call6_1st_window_g

0xee81,	// (0x0002d005) popup_call6_1st_window_t1

0xee90,	// (0x0002d014) popup_call6_1st_window_t2

0xee9e,	// (0x0002d022) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0002e05f) popup_call6_1st_window_t

0xa5b9,	// (0x0002873d) bg_popup_call2_in_pane_cp04

0xee69,	// (0x0002cfed) popup_call6_2nd_window_g1

0xee71,	// (0x0002cff5) popup_call6_2nd_window_g2

0xee79,	// (0x0002cffd) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0002e058) popup_call6_2nd_window_g

0xee81,	// (0x0002d005) popup_call6_2nd_window_t1

0x0f3e,	// (0x0001f0c2) bg_button_pane_cp15

0x2691,	// (0x00020815) cell_call6_btn_pane_g1

0x269a,	// (0x0002081e) cell_call6_btn_pane_t1

0x9489,	// (0x0002760d) listscroll_wgtman_pane_ParamLimits

0x9489,	// (0x0002760d) listscroll_wgtman_pane

0x94a5,	// (0x00027629) wgtman_btn_pane_ParamLimits

0x94a5,	// (0x00027629) wgtman_btn_pane

0xadce,	// (0x00028f52) aid_scroll_copy1

0xeeac,	// (0x0002d030) list_wgtman_pane

0x94da,	// (0x0002765e) wgtman_btn_pane_g1_ParamLimits

0x94da,	// (0x0002765e) wgtman_btn_pane_g1

0x9502,	// (0x00027686) wgtman_btn_pane_t1_ParamLimits

0x9502,	// (0x00027686) wgtman_btn_pane_t1

0xeeb6,	// (0x0002d03a) wgtman_btn_pane_t2_ParamLimits

0xeeb6,	// (0x0002d03a) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0002e066) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0002e066) wgtman_btn_pane_t

0x9539,	// (0x000276bd) listrow_wgtman_pane_ParamLimits

0x9539,	// (0x000276bd) listrow_wgtman_pane

0x9555,	// (0x000276d9) listrow_wgtman_pane_g1

0x9562,	// (0x000276e6) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0002e06b) listrow_wgtman_pane_g

0x9580,	// (0x00027704) listrow_wgtman_pane_t1

0x9598,	// (0x0002771c) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0002e070) listrow_wgtman_pane_t

0x95be,	// (0x00027742) wait_bar_pane_cp09

0xeecd,	// (0x0002d051) main_calllock_btn_pane

0xeed7,	// (0x0002d05b) main_calllock_pane_g1

0x9c68,	// (0x00027dec) bg_button_pane_cp17

0xeee3,	// (0x0002d067) main_calllock_btn_pane_g1

0xeeec,	// (0x0002d070) main_calllock_btn_pane_t1

0x9c68,	// (0x00027dec) main_dialer3_pane

0x9c68,	// (0x00027dec) main_fmrd2_pane

0xc847,	// (0x0002a9cb) main_fs_bigclock_unlock_btn_pane_g1

0x95d8,	// (0x0002775c) main_fs_bigclock_unlock_btn_pane_t1

0x95e6,	// (0x0002776a) area_fmrd2_info_pane_ParamLimits

0x95e6,	// (0x0002776a) area_fmrd2_info_pane

0x95f4,	// (0x00027778) area_fmrd2_visual_pane_ParamLimits

0x95f4,	// (0x00027778) area_fmrd2_visual_pane

0x9602,	// (0x00027786) fmrd2_indi_pane_ParamLimits

0x9602,	// (0x00027786) fmrd2_indi_pane

0x960f,	// (0x00027793) area_fmrd2_visual_pane_g1

0x9617,	// (0x0002779b) area_fmrd2_visual_pane_t1

0x9627,	// (0x000277ab) area_fmrd2_visual_pane_t2

0x9637,	// (0x000277bb) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0002e07a) area_fmrd2_visual_pane_t

0x9647,	// (0x000277cb) area_fmrd2_info_pane_g1

0x964f,	// (0x000277d3) area_fmrd2_info_pane_t1

0x965f,	// (0x000277e3) area_fmrd2_info_pane_t2

0x966f,	// (0x000277f3) area_fmrd2_info_pane_t3

0x967f,	// (0x00027803) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0002e081) area_fmrd2_info_pane_t

0x968d,	// (0x00027811) fmrd2_indi_pane_t1

0x969d,	// (0x00027821) fmrd2_indi_pane_t2

0x96ad,	// (0x00027831) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0002e08a) fmrd2_indi_pane_t

0xe10b,	// (0x0002c28f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe10b,	// (0x0002c28f) list_single_fs_bigclock_indicator_pane_g5

0xe1bc,	// (0x0002c340) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1bc,	// (0x0002c340) list_single_fs_bigclock_indicator_pane_t5

0x8e02,	// (0x00026f86) aid_cell_bcale_month_pane_ParamLimits

0x8e02,	// (0x00026f86) aid_cell_bcale_month_pane

0x8e20,	// (0x00026fa4) bcale_month_pane_ParamLimits

0x8e20,	// (0x00026fa4) bcale_month_pane

0x8e3e,	// (0x00026fc2) bcale_preview_pane_ParamLimits

0x8e3e,	// (0x00026fc2) bcale_preview_pane

0xecc9,	// (0x0002ce4d) list_single_fs_bigclock_pane_t1_ParamLimits

0xece8,	// (0x0002ce6c) list_single_fs_bigclock_pane_t2_ParamLimits

0xece8,	// (0x0002ce6c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0002e00c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0002e00c) list_single_fs_bigclock_pane_t

0x95d0,	// (0x00027754) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0002e075) main_fs_bigclock_unlock_btn_pane_g

0x96bb,	// (0x0002783f) aid_dia3_key_size_ParamLimits

0x96bb,	// (0x0002783f) aid_dia3_key_size

0x96c7,	// (0x0002784b) aid_dia3_listrow_size_ParamLimits

0x96c7,	// (0x0002784b) aid_dia3_listrow_size

0x96d7,	// (0x0002785b) dia3_keypad_fun_pane_ParamLimits

0x96d7,	// (0x0002785b) dia3_keypad_fun_pane

0x96e9,	// (0x0002786d) dia3_keypad_num_pane_ParamLimits

0x96e9,	// (0x0002786d) dia3_keypad_num_pane

0x96fb,	// (0x0002787f) dia3_listscroll_pane_ParamLimits

0x96fb,	// (0x0002787f) dia3_listscroll_pane

0x9709,	// (0x0002788d) dia3_numentry_pane_ParamLimits

0x9709,	// (0x0002788d) dia3_numentry_pane

0xeefb,	// (0x0002d07f) dia3_list_pane

0xef06,	// (0x0002d08a) scroll_pane_cp12

0x9c68,	// (0x00027dec) bg_dia3_numentry_pane

0x9717,	// (0x0002789b) dia3_numentry_pane_t1

0x9726,	// (0x000278aa) cell_dia3_key_num_pane

0x972e,	// (0x000278b2) cell_dia3_key0_fun_pane_ParamLimits

0x972e,	// (0x000278b2) cell_dia3_key0_fun_pane

0x973b,	// (0x000278bf) cell_dia3_key1_fun_pane_ParamLimits

0x973b,	// (0x000278bf) cell_dia3_key1_fun_pane

0x9748,	// (0x000278cc) dia3_listrow_pane

0xde5e,	// (0x0002bfe2) bg_dia3_numentry_pane_g1

0x9c68,	// (0x00027dec) bg_button_pane_cp21

0xef11,	// (0x0002d095) cell_dia3_key_num_pane_t1

0xef1f,	// (0x0002d0a3) cell_dia3_key_num_pane_t2

0xef2e,	// (0x0002d0b2) cell_dia3_key_num_pane_t3

0xef3d,	// (0x0002d0c1) cell_dia3_key_num_pane_t4

0x0003,

0x0c44,	// (0x0001edc8) cell_dia3_key_num_pane_t

0x9c68,	// (0x00027dec) bg_button_pane_cp19

0x9755,	// (0x000278d9) cell_dia3_key0_fun_pane_g1

0x9c68,	// (0x00027dec) bg_button_pane_cp20

0x975d,	// (0x000278e1) cell_dia3_key1_fun_pane_g1

0x9765,	// (0x000278e9) area_left_week_number_pane

0x9778,	// (0x000278fc) area_top_day_name_pane

0x9786,	// (0x0002790a) frame_month_view_pane

0xef4c,	// (0x0002d0d0) grid_month_view_pane

0x979b,	// (0x0002791f) cell_top_day_name_pane_ParamLimits

0x979b,	// (0x0002791f) cell_top_day_name_pane

0x97b5,	// (0x00027939) cell_area_left_week_number_pane_ParamLimits

0x97b5,	// (0x00027939) cell_area_left_week_number_pane

0x97d8,	// (0x0002795c) cell_month_view_pane_ParamLimits

0x97d8,	// (0x0002795c) cell_month_view_pane

0xef5a,	// (0x0002d0de) frm_month_g1

0x9804,	// (0x00027988) frm_month_g2

0x9815,	// (0x00027999) frm_month_g3

0x9826,	// (0x000279aa) frm_month_g4

0x9837,	// (0x000279bb) frm_month_g5

0x984a,	// (0x000279ce) frm_month_g6

0x985d,	// (0x000279e1) frm_month_g7

0xef67,	// (0x0002d0eb) frm_month_g8

0x9870,	// (0x000279f4) frm_month_g9

0x987d,	// (0x00027a01) frm_month_g10

0x988a,	// (0x00027a0e) frm_month_g11

0x9897,	// (0x00027a1b) frm_month_g12

0x98a4,	// (0x00027a28) frm_month_g13

0x98b1,	// (0x00027a35) frm_month_g14

0x98c0,	// (0x00027a44) frm_month_g15

0x98cf,	// (0x00027a53) frm_month_g16

0x000f,

0xff0d,	// (0x0002e091) frm_month_g

0xef74,	// (0x0002d0f8) cell_top_day_name_pane_t1

0x98de,	// (0x00027a62) cell_area_left_week_number_pane_g1

0x98ed,	// (0x00027a71) cell_area_left_week_number_pane_t1

0xca8c,	// (0x0002ac10) cell_month_view_pane_g1

0x9903,	// (0x00027a87) cell_month_view_pane_t1

0x9c68,	// (0x00027dec) main_fps_pane

0xe3d9,	// (0x0002c55d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3d9,	// (0x0002c55d) cmail_ddmenu_btn02_pane_cp1

0xe3f5,	// (0x0002c579) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3f5,	// (0x0002c579) cmail_ddmenu_btn02_pane_cp2

0x90fc,	// (0x00027280) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90fc,	// (0x00027280) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0002dfbf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0002dfbf) cmail_ddmenu_btn02_pane_g

0x911a,	// (0x0002729e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x911a,	// (0x0002729e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0002dfc4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0002dfc4) cmail_ddmenu_btn02_pane_t

0x9919,	// (0x00027a9d) fps_text_pane_ParamLimits

0x9919,	// (0x00027a9d) fps_text_pane

0x9926,	// (0x00027aaa) main_fps_pane_g1_ParamLimits

0x9926,	// (0x00027aaa) main_fps_pane_g1

0x9934,	// (0x00027ab8) wait_bar_pane_cp010_ParamLimits

0x9934,	// (0x00027ab8) wait_bar_pane_cp010

0x9940,	// (0x00027ac4) fps_text_pane_t1_ParamLimits

0x9940,	// (0x00027ac4) fps_text_pane_t1

0x6a8b,	// (0x00024c0f) cam4_image_uncrop_pane_g1

0x6a94,	// (0x00024c18) cam4_image_uncrop_pane_g2

0x6a9d,	// (0x00024c21) cam4_image_uncrop_pane_g3

0x6aa6,	// (0x00024c2a) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0002da85) cam4_image_uncrop_pane_g

0x9748,	// (0x000278cc) dia3_listrow_pane_ParamLimits

0x9c68,	// (0x00027dec) main_phob2_pane

0x8c2c,	// (0x00026db0) cell_tport_appsw_pane_cp02_ParamLimits

0x8c2c,	// (0x00026db0) cell_tport_appsw_pane_cp02

0x8c3b,	// (0x00026dbf) cell_tport_appsw_pane_cp03_ParamLimits

0x8c3b,	// (0x00026dbf) cell_tport_appsw_pane_cp03

0x9c68,	// (0x00027dec) phob2_contact_card_pane

0x9c68,	// (0x00027dec) phob2_listscroll_pane

0xef87,	// (0x0002d10b) phob2_list_pane

0xef8f,	// (0x0002d113) scroll_pane_cp034

0x9959,	// (0x00027add) phob2_cc_data_pane_ParamLimits

0x9959,	// (0x00027add) phob2_cc_data_pane

0x9973,	// (0x00027af7) phob2_cc_listscroll_pane_ParamLimits

0x9973,	// (0x00027af7) phob2_cc_listscroll_pane

0x998d,	// (0x00027b11) list_double_large_graphic_phob2_pane_ParamLimits

0x998d,	// (0x00027b11) list_double_large_graphic_phob2_pane

0x99ac,	// (0x00027b30) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99ac,	// (0x00027b30) list_double_large_graphic_phob2_pane_g1

0x99c2,	// (0x00027b46) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99c2,	// (0x00027b46) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0002e0b2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0002e0b2) list_double_large_graphic_phob2_pane_g

0x99ce,	// (0x00027b52) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99ce,	// (0x00027b52) list_double_large_graphic_phob2_pane_t1

0x99e4,	// (0x00027b68) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99e4,	// (0x00027b68) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0002e0b7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0002e0b7) list_double_large_graphic_phob2_pane_t

0x9c68,	// (0x00027dec) list_highlight_pane_cp024

0x99f9,	// (0x00027b7d) phob2_cc_button_pane

0x9a01,	// (0x00027b85) phob2_cc_data_pane_g1_ParamLimits

0x9a01,	// (0x00027b85) phob2_cc_data_pane_g1

0x9a0d,	// (0x00027b91) phob2_cc_data_pane_g2_ParamLimits

0x9a0d,	// (0x00027b91) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0002e0bc) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0002e0bc) phob2_cc_data_pane_g

0x9a19,	// (0x00027b9d) phob2_cc_data_pane_t1_ParamLimits

0x9a19,	// (0x00027b9d) phob2_cc_data_pane_t1

0x9a2b,	// (0x00027baf) phob2_cc_data_pane_t2_ParamLimits

0x9a2b,	// (0x00027baf) phob2_cc_data_pane_t2

0x9a3d,	// (0x00027bc1) phob2_cc_data_pane_t3_ParamLimits

0x9a3d,	// (0x00027bc1) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0002e0c1) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0002e0c1) phob2_cc_data_pane_t

0xef97,	// (0x0002d11b) phob2_cc_list_pane_ParamLimits

0xef97,	// (0x0002d11b) phob2_cc_list_pane

0xd6c6,	// (0x0002b84a) scroll_pane_cp035_ParamLimits

0xd6c6,	// (0x0002b84a) scroll_pane_cp035

0xa529,	// (0x000286ad) bg_button_pane_cp033

0xefa3,	// (0x0002d127) phob2_cc_button_pane_g1

0xefaf,	// (0x0002d133) phob2_cc_button_pane_t1

0xefc4,	// (0x0002d148) phob2_cc_button_pane_t2

0x0001,

0x0c84,	// (0x0001ee08) phob2_cc_button_pane_t

0x9a4f,	// (0x00027bd3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a4f,	// (0x00027bd3) list_double_large_graphic_phob2_cc_pane

0x9ac3,	// (0x00027c47) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ac3,	// (0x00027c47) list_double_large_graphic_phob2_cc_pane_g1

0x9ad4,	// (0x00027c58) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9ad4,	// (0x00027c58) list_double_large_graphic_phob2_cc_pane_g2

0x9ae0,	// (0x00027c64) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9ae0,	// (0x00027c64) list_double_large_graphic_phob2_cc_pane_g3

0x9aec,	// (0x00027c70) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9aec,	// (0x00027c70) list_double_large_graphic_phob2_cc_pane_g4

0xefd6,	// (0x0002d15a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xefd6,	// (0x0002d15a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0002e0c8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0002e0c8) list_double_large_graphic_phob2_cc_pane_g

0x9af8,	// (0x00027c7c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9af8,	// (0x00027c7c) list_double_large_graphic_phob2_cc_pane_t1

0x9b21,	// (0x00027ca5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b21,	// (0x00027ca5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0002e0d3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0002e0d3) list_double_large_graphic_phob2_cc_pane_t

0xefe2,	// (0x0002d166) list_highlight_pane_cp025_ParamLimits

0xefe2,	// (0x0002d166) list_highlight_pane_cp025

0xa529,	// (0x000286ad) bg_button_pane_cp033_ParamLimits

0xefa3,	// (0x0002d127) phob2_cc_button_pane_g1_ParamLimits

0xefaf,	// (0x0002d133) phob2_cc_button_pane_t1_ParamLimits

0xefc4,	// (0x0002d148) phob2_cc_button_pane_t2_ParamLimits

0x0c84,	// (0x0001ee08) phob2_cc_button_pane_t_ParamLimits

0x271c,	// (0x000208a0) popup_wgtman_window

0xd3a4,	// (0x0002b528) scroll_pane_cp038

0x94c2,	// (0x00027646) wgtman_btn_pane_cp_01_ParamLimits

0x94c2,	// (0x00027646) wgtman_btn_pane_cp_01

0xeff0,	// (0x0002d174) wgtman_content_pane

0xeff9,	// (0x0002d17d) wgtman_heading_pane

0x9c68,	// (0x00027dec) bg_heading_pane_cp02

0xf002,	// (0x0002d186) wgtman_heading_pane_g1

0xf00a,	// (0x0002d18e) wgtman_heading_pane_t1

0xf018,	// (0x0002d19c) scroll_pane_cp036

0xf020,	// (0x0002d1a4) wgtman_list_pane

0xebed,	// (0x0002cd71) wgtman_list_pane_t1_ParamLimits

0xebed,	// (0x0002cd71) wgtman_list_pane_t1

0x1e82,	// (0x00020006) cam4_grid_pane

0x729f,	// (0x00025423) bg_button_pane_cp015_ParamLimits

0x72b1,	// (0x00025435) bg_button_pane_cp016_ParamLimits

0x72c4,	// (0x00025448) bg_button_pane_cp017_ParamLimits

0x731a,	// (0x0002549e) popup_vitu2_query_window_g3_ParamLimits

0x731a,	// (0x0002549e) popup_vitu2_query_window_g3

0x73d5,	// (0x00025559) popup_vitu2_query_window_t6_ParamLimits

0x73d5,	// (0x00025559) popup_vitu2_query_window_t6

0x7400,	// (0x00025584) popup_vitu2_query_window_t7_ParamLimits

0x7400,	// (0x00025584) popup_vitu2_query_window_t7

0xec08,	// (0x0002cd8c) cam4_grid_pane_g1

0xec11,	// (0x0002cd95) cam4_grid_pane_g2

0xf028,	// (0x0002d1ac) cam4_grid_pane_g3

0xf031,	// (0x0002d1b5) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0002e0d8) cam4_grid_pane_g

0x32bf,	// (0x00021443) aid_placing_vt_slider_lsc_ParamLimits

0x35ff,	// (0x00021783) vidtel_button_pane_ParamLimits

0x35ff,	// (0x00021783) vidtel_button_pane

0x9c68,	// (0x00027dec) bg_button_pane_cp034

0xf03c,	// (0x0002d1c0) vidtel_button_pane_g1

0xf044,	// (0x0002d1c8) vidtel_button_pane_t1

0xd4d3,	// (0x0002b657) aid_size_vtel_slider_touch

0xd6c6,	// (0x0002b84a) scroll_pane_cp039

0x80ce,	// (0x00026252) ncim_query_button_pane_cp01_ParamLimits

0x80ed,	// (0x00026271) ncimui_query_pane_g1_ParamLimits

0xa529,	// (0x000286ad) input_focus_pane_cp012_ParamLimits

0xdea4,	// (0x0002c028) ncim_query_entry_pane_t1_ParamLimits

0xd6c6,	// (0x0002b84a) scroll_pane_cp039_ParamLimits

0xaea5,	// (0x00029029) navi_pane_bcale_mc_g1

0xaead,	// (0x00029031) navi_pane_bcale_mc_t1

0xe43e,	// (0x0002c5c2) main_sp_fs_email_pane_g1

0xe44a,	// (0x0002c5ce) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0002de7c) main_sp_fs_email_pane_g

0xe927,	// (0x0002caab) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe927,	// (0x0002caab) list_single_cale_mrui_row_pane_g3

0x913a,	// (0x000272be) list_single_recal_day_pane_g5_event_pane

0xeb06,	// (0x0002cc8a) list_single_recal_day_pane_g7

0xf05a,	// (0x0002d1de) list_recal_day_event_pane_cp01

0xf063,	// (0x0002d1e7) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0002d1ef) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0002d1f7) list_recal_vselct_pane_cp01

0xd503,	// (0x0002b687) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0002d201) list_recal_day_event_pane_cp01_t1

0xeb0e,	// (0x0002cc92) list_single_recal_day_pane_t1_ParamLimits

0xeb20,	// (0x0002cca4) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0002dfd4) list_single_recal_day_pane_t_ParamLimits

0xa2e0,	// (0x00028464) bg_notes_pane_ParamLimits

0xa38f,	// (0x00028513) list_notes_pane_ParamLimits

0x29a0,	// (0x00020b24) scroll_pane_cp06_ParamLimits

0xa3b1,	// (0x00028535) main_notes_pane_ParamLimits

0x9c68,	// (0x00027dec) main_welc_pane

0x9b4a,	// (0x00027cce) main_welc_body_pane_ParamLimits

0x9b4a,	// (0x00027cce) main_welc_body_pane

0x9b63,	// (0x00027ce7) main_welc_opti_pane_ParamLimits

0x9b63,	// (0x00027ce7) main_welc_opti_pane

0x9b96,	// (0x00027d1a) main_welc_pane_t1_ParamLimits

0x9b96,	// (0x00027d1a) main_welc_pane_t1

0x9bb0,	// (0x00027d34) main_welc_body_row_pane_ParamLimits

0x9bb0,	// (0x00027d34) main_welc_body_row_pane

0xd145,	// (0x0002b2c9) main_welc_opti_row_pane_ParamLimits

0xd145,	// (0x0002b2c9) main_welc_opti_row_pane

0xf08b,	// (0x0002d20f) main_welc_opti_row_pane_g1

0x9bd9,	// (0x00027d5d) main_welc_opti_row_pane_t1

0xf093,	// (0x0002d217) main_welc_body_row_pane_t1

0xeda9,	// (0x0002cf2d) popup_notif_wgt_heading_pane

0xedc3,	// (0x0002cf47) aid_size_list_notif_wgt_del_ParamLimits

0xedd0,	// (0x0002cf54) list_notif_wgt_row_pane_g1_ParamLimits

0xeddc,	// (0x0002cf60) list_notif_wgt_row_pane_g2_ParamLimits

0xedeb,	// (0x0002cf6f) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x0002e03b) list_notif_wgt_row_pane_g_ParamLimits

0xedf8,	// (0x0002cf7c) list_notif_wgt_row_pane_t1_ParamLimits

0xee0e,	// (0x0002cf92) list_notif_wgt_row_pane_t2_ParamLimits

0xee20,	// (0x0002cfa4) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x0002e042) list_notif_wgt_row_pane_t_ParamLimits

0x9555,	// (0x000276d9) listrow_wgtman_pane_g1_ParamLimits

0x9562,	// (0x000276e6) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x0002e06b) listrow_wgtman_pane_g_ParamLimits

0x9580,	// (0x00027704) listrow_wgtman_pane_t1_ParamLimits

0x9598,	// (0x0002771c) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x0002e070) listrow_wgtman_pane_t_ParamLimits

0x95be,	// (0x00027742) wait_bar_pane_cp09_ParamLimits

0x9c68,	// (0x00027dec) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0002d226) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0002d22e) popup_notif_wgt_heading_pane_t1

0x9c68,	// (0x00027dec) main_vids_pane

0x9c68,	// (0x00027dec) vids_listscroll_pane

0x9be8,	// (0x00027d6c) scroll_pane_cp040

0x9c68,	// (0x00027dec) vids_list_pane

0x9bf3,	// (0x00027d77) vids_list_double_pane_ParamLimits

0x9bf3,	// (0x00027d77) vids_list_double_pane

0x9c0b,	// (0x00027d8f) vids_list_double_pane_g1

0x9c14,	// (0x00027d98) vids_list_double_pane_t1

0x9c24,	// (0x00027da8) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0002e0e6) vids_list_double_pane_t

0x1394,	// (0x0001f518) main_ncimui_pane_ParamLimits

0x7f25,	// (0x000260a9) main_ncimui_pane_g1_ParamLimits

0x7f31,	// (0x000260b5) main_ncimui_pane_g2_ParamLimits

0x7f31,	// (0x000260b5) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0002dd81) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0002dd81) main_ncimui_pane_g

0x9b7c,	// (0x00027d00) main_welc_pane_g1_ParamLimits

0x9b7c,	// (0x00027d00) main_welc_pane_g1

0x9b88,	// (0x00027d0c) main_welc_pane_g2_ParamLimits

0x9b88,	// (0x00027d0c) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0002e0e1) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0002e0e1) main_welc_pane_g

0xa2e0,	// (0x00028464) listscroll_mce_pane_ParamLimits

0xaffa,	// (0x0002917e) wait_bar_pane_cp10

0xc433,	// (0x0002a5b7) main_cale_day_pane_ParamLimits

0xc433,	// (0x0002a5b7) main_cale_week_pane_ParamLimits

0xa2e0,	// (0x00028464) main_messa_pane_ParamLimits

0x643c,	// (0x000245c0) main_clock2_btn_pane_ParamLimits

0x643c,	// (0x000245c0) main_clock2_btn_pane

0xcc88,	// (0x0002ae0c) main_clock2_btn_pane_cp01_ParamLimits

0xcc88,	// (0x0002ae0c) main_clock2_btn_pane_cp01

0xe8b3,	// (0x0002ca37) list_cale_mrui_pane_ParamLimits

0xee56,	// (0x0002cfda) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x0002e049) main_cf0_pane_g

0x9765,	// (0x000278e9) area_left_week_number_pane_ParamLimits

0x9778,	// (0x000278fc) area_top_day_name_pane_ParamLimits

0x9786,	// (0x0002790a) frame_month_view_pane_ParamLimits

0xef4c,	// (0x0002d0d0) grid_month_view_pane_ParamLimits

0xef5a,	// (0x0002d0de) frm_month_g1_ParamLimits

0x9804,	// (0x00027988) frm_month_g2_ParamLimits

0x9815,	// (0x00027999) frm_month_g3_ParamLimits

0x9826,	// (0x000279aa) frm_month_g4_ParamLimits

0x9837,	// (0x000279bb) frm_month_g5_ParamLimits

0x984a,	// (0x000279ce) frm_month_g6_ParamLimits

0x985d,	// (0x000279e1) frm_month_g7_ParamLimits

0xef67,	// (0x0002d0eb) frm_month_g8_ParamLimits

0x9870,	// (0x000279f4) frm_month_g9_ParamLimits

0x987d,	// (0x00027a01) frm_month_g10_ParamLimits

0x988a,	// (0x00027a0e) frm_month_g11_ParamLimits

0x9897,	// (0x00027a1b) frm_month_g12_ParamLimits

0x98a4,	// (0x00027a28) frm_month_g13_ParamLimits

0x98b1,	// (0x00027a35) frm_month_g14_ParamLimits

0x98c0,	// (0x00027a44) frm_month_g15_ParamLimits

0x98cf,	// (0x00027a53) frm_month_g16_ParamLimits

0xff0d,	// (0x0002e091) frm_month_g_ParamLimits

0xef74,	// (0x0002d0f8) cell_top_day_name_pane_t1_ParamLimits

0x98de,	// (0x00027a62) cell_area_left_week_number_pane_g1_ParamLimits

0x98ed,	// (0x00027a71) cell_area_left_week_number_pane_t1_ParamLimits

0xca8c,	// (0x0002ac10) cell_month_view_pane_g1_ParamLimits

0x9903,	// (0x00027a87) cell_month_view_pane_t1_ParamLimits

0xa2d8,	// (0x0002845c) main_clock2_btn_pane_g1

0xf0b8,	// (0x0002d23c) main_clock2_btn_pane_t1

0xa529,	// (0x000286ad) listscroll_cmail_pane_ParamLimits

0xe43e,	// (0x0002c5c2) main_sp_fs_email_pane_g1_ParamLimits

0xe44a,	// (0x0002c5ce) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0002de7c) main_sp_fs_email_pane_g_ParamLimits

0xea76,	// (0x0002cbfa) list_recal_day_pane_ParamLimits

0xea87,	// (0x0002cc0b) mian_recal_day_pane_t1

0x8953,	// (0x00026ad7) list_single_dyc_row_text_pane_t4_ParamLimits

0x8953,	// (0x00026ad7) list_single_dyc_row_text_pane_t4

0x898a,	// (0x00026b0e) list_single_dyc_row_text_pane_t5_ParamLimits

0x898a,	// (0x00026b0e) list_single_dyc_row_text_pane_t5

0xe4ec,	// (0x0002c670) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4ec,	// (0x0002c670) list_single_dyc_row_text_pane_t6

0x4448,	// (0x000225cc) aid_mgn_list_cale_time_pane

0x1394,	// (0x0001f518) main_gallery2_pane_ParamLimits

0xcc9e,	// (0x0002ae22) main_clock2_pane_cp01_t1

0xccac,	// (0x0002ae30) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0002d957) main_clock2_pane_cp01_t

0x2cc7,	// (0x00020e4b) cale_week_scroll_pane_g16_ParamLimits

0x2cc7,	// (0x00020e4b) cale_week_scroll_pane_g16

0xa5b9,	// (0x0002873d) vorec_slider_pane

0xf044,	// (0x0002d1c8) vidtel_button_pane_t1_ParamLimits

0x9195,	// (0x00027319) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9195,	// (0x00027319) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91a2,	// (0x00027326) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91a2,	// (0x00027326) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0002dff7) main_fs_bigclock_clock_pane_g_ParamLimits

0x91ae,	// (0x00027332) main_fs_bigclock_clock_pane_t1_ParamLimits

0x91c1,	// (0x00027345) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x0002e000) main_fs_bigclock_clock_pane_t_ParamLimits

0x5ce1,	// (0x00023e65) main_mup3_lyrics_pane_ParamLimits

0x5ce1,	// (0x00023e65) main_mup3_lyrics_pane

0x9c32,	// (0x00027db6) main_mup3_lyrics_pane_t1_ParamLimits

0x9c32,	// (0x00027db6) main_mup3_lyrics_pane_t1

0x1958,	// (0x0001fadc) aid_main_mp4_pane_t1_area

0x1962,	// (0x0001fae6) aid_main_mp4_pane_t2_area

0x1a61,	// (0x0001fbe5) main_mp4_pane_g7_ParamLimits

0x1a61,	// (0x0001fbe5) main_mp4_pane_g7

0x1a6d,	// (0x0001fbf1) main_mp4_pane_g8_ParamLimits

0x1a6d,	// (0x0001fbf1) main_mp4_pane_g8

0x69d3,	// (0x00024b57) aid_call6_pane_g1_size

0x9a95,	// (0x00027c19) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9a95,	// (0x00027c19) list_double_large_graphic_phob2_other_pane

0xa974,	// (0x00028af8) list_double_large_graphic_phob2_other_pane_g1

0x9c68,	// (0x00027dec) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
