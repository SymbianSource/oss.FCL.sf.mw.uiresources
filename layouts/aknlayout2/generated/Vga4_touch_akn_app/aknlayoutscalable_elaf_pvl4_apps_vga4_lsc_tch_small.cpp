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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003cfdb };

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
0x2ebc,	// (0x0003fe97) Screen

0x2ec8,	// (0x0003fea3) application_window

0x2f04,	// (0x0003fedf) area_bottom_pane_ParamLimits

0x2f04,	// (0x0003fedf) area_bottom_pane

0x2f3d,	// (0x0003ff18) area_top_pane_ParamLimits

0x2f3d,	// (0x0003ff18) area_top_pane

0x030b,	// (0x0003d2e6) call_video_uplink_pane_ParamLimits

0x030b,	// (0x0003d2e6) call_video_uplink_pane

0x2fb7,	// (0x0003ff92) main_pane_ParamLimits

0x2fb7,	// (0x0003ff92) main_pane

0x7181,	// (0x0004415c) context_pane

0x7194,	// (0x0004416f) navi_pane

0x71c4,	// (0x0004419f) popup_cale_events_window_ParamLimits

0x71c4,	// (0x0004419f) popup_cale_events_window

0x71dc,	// (0x000441b7) popup_mup_playback_window

0x71e4,	// (0x000441bf) signal_pane

0x0a62,	// (0x0003da3d) main_browser_pane

0x14be,	// (0x0003e499) main_burst_pane

0x6e32,	// (0x00043e0d) main_calc_pane

0x14be,	// (0x0003e499) main_cale_day_pane

0x0a62,	// (0x0003da3d) main_cale_month_pane

0x14be,	// (0x0003e499) main_cale_week_pane

0x14be,	// (0x0003e499) main_call_pane

0x073c,	// (0x0003d717) main_call_poc_pane

0x14be,	// (0x0003e499) main_camera_pane

0x14be,	// (0x0003e499) main_chi_dic_pane

0x1360,	// (0x0003e33b) main_clock_pane

0x073c,	// (0x0003d717) main_fmradio_pane

0x14be,	// (0x0003e499) main_graph_messa_pane

0x073c,	// (0x0003d717) main_help_pane

0x0a62,	// (0x0003da3d) main_im_pane

0x0997,	// (0x0003d972) main_image_pane_ParamLimits

0x0997,	// (0x0003d972) main_image_pane

0x073c,	// (0x0003d717) main_location2_pane

0x14be,	// (0x0003e499) main_location_pane

0x073c,	// (0x0003d717) main_messa_pane

0x073c,	// (0x0003d717) main_mp2_pane

0x14be,	// (0x0003e499) main_mp_pane

0x073c,	// (0x0003d717) main_msg_pane

0x073c,	// (0x0003d717) main_mup_eq_pane

0x073c,	// (0x0003d717) main_mup_pane

0x14be,	// (0x0003e499) main_notes_pane

0x073c,	// (0x0003d717) main_pec_pane

0x073c,	// (0x0003d717) main_phob_pane

0x073c,	// (0x0003d717) main_pinb_pane

0x073c,	// (0x0003d717) main_postcard_pane

0x073c,	// (0x0003d717) main_qdial_pane

0x14be,	// (0x0003e499) main_skin_pane

0x073c,	// (0x0003d717) main_smil2_pane

0x14be,	// (0x0003e499) main_smil_pane

0x14be,	// (0x0003e499) main_video_pane

0x14be,	// (0x0003e499) main_video_tele_pane

0x0997,	// (0x0003d972) main_viewer_pane_ParamLimits

0x0997,	// (0x0003d972) main_viewer_pane

0x14be,	// (0x0003e499) main_vorec_pane

0x6e9e,	// (0x00043e79) popup_blid_sat_info_window_ParamLimits

0x6e9e,	// (0x00043e79) popup_blid_sat_info_window

0x6f0e,	// (0x00043ee9) popup_dyc_status_message_window_ParamLimits

0x6f0e,	// (0x00043ee9) popup_dyc_status_message_window

0x6f28,	// (0x00043f03) popup_grid_large_graphic_window_ParamLimits

0x6f28,	// (0x00043f03) popup_grid_large_graphic_window

0x7007,	// (0x00043fe2) popup_loc_request_window_ParamLimits

0x7007,	// (0x00043fe2) popup_loc_request_window

0x7155,	// (0x00044130) popup_wml_address_window_ParamLimits

0x7155,	// (0x00044130) popup_wml_address_window

0x6c37,	// (0x00043c12) call_muted_g1

0x5954,	// (0x0004292f) popup_call_audio_conf_window_ParamLimits

0x5954,	// (0x0004292f) popup_call_audio_conf_window

0x6c47,	// (0x00043c22) popup_call_audio_first_window_ParamLimits

0x6c47,	// (0x00043c22) popup_call_audio_first_window

0x6cbd,	// (0x00043c98) popup_call_audio_in_window_ParamLimits

0x6cbd,	// (0x00043c98) popup_call_audio_in_window

0x6cf9,	// (0x00043cd4) popup_call_audio_out_window_ParamLimits

0x6cf9,	// (0x00043cd4) popup_call_audio_out_window

0x6d33,	// (0x00043d0e) popup_call_audio_second_window_ParamLimits

0x6d33,	// (0x00043d0e) popup_call_audio_second_window

0x6d89,	// (0x00043d64) popup_call_audio_wait_window_ParamLimits

0x6d89,	// (0x00043d64) popup_call_audio_wait_window

0x6dbe,	// (0x00043d99) popup_number_entry_window_ParamLimits

0x6dbe,	// (0x00043d99) popup_number_entry_window

0x0329,	// (0x0003d304) bg_popup_call_pane_cp05_ParamLimits

0x0329,	// (0x0003d304) bg_popup_call_pane_cp05

0x0349,	// (0x0003d324) popup_number_entry_window_t1

0x035c,	// (0x0003d337) popup_number_entry_window_t2

0x036e,	// (0x0003d349) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0004c10a) popup_number_entry_window_t

0x0380,	// (0x0003d35b) text_title_cp2

0x0393,	// (0x0003d36e) bg_popup_call_pane_cp_ParamLimits

0x0393,	// (0x0003d36e) bg_popup_call_pane_cp

0x03a1,	// (0x0003d37c) call_thumbnail_pane

0x03a9,	// (0x0003d384) popup_call_audio_in_window_g1_ParamLimits

0x03a9,	// (0x0003d384) popup_call_audio_in_window_g1

0x03b5,	// (0x0003d390) popup_call_audio_in_window_g2_ParamLimits

0x03b5,	// (0x0003d390) popup_call_audio_in_window_g2

0x03c1,	// (0x0003d39c) popup_call_audio_in_window_g3_ParamLimits

0x03c1,	// (0x0003d39c) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0004c113) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0004c113) popup_call_audio_in_window_g

0x03cd,	// (0x0003d3a8) popup_call_audio_in_window_t1_ParamLimits

0x03cd,	// (0x0003d3a8) popup_call_audio_in_window_t1

0x03e9,	// (0x0003d3c4) popup_call_audio_in_window_t2_ParamLimits

0x03e9,	// (0x0003d3c4) popup_call_audio_in_window_t2

0x0405,	// (0x0003d3e0) popup_call_audio_in_window_t3_ParamLimits

0x0405,	// (0x0003d3e0) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0004c11a) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0004c11a) popup_call_audio_in_window_t

0x0393,	// (0x0003d36e) bg_popup_call_pane_cp01_ParamLimits

0x0393,	// (0x0003d36e) bg_popup_call_pane_cp01

0x03a1,	// (0x0003d37c) call_thumbnail_pane_cp02

0x0418,	// (0x0003d3f3) call_type_pane_cp022

0x0420,	// (0x0003d3fb) popup_call_audio_out_window_g1_ParamLimits

0x0420,	// (0x0003d3fb) popup_call_audio_out_window_g1

0x0432,	// (0x0003d40d) popup_call_audio_out_window_g2_ParamLimits

0x0432,	// (0x0003d40d) popup_call_audio_out_window_g2

0x043e,	// (0x0003d419) popup_call_audio_out_window_g3_ParamLimits

0x043e,	// (0x0003d419) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0004c121) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0004c121) popup_call_audio_out_window_g

0x0450,	// (0x0003d42b) popup_call_audio_out_window_t1_ParamLimits

0x0450,	// (0x0003d42b) popup_call_audio_out_window_t1

0x0468,	// (0x0003d443) popup_call_audio_out_window_t2_ParamLimits

0x0468,	// (0x0003d443) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0004c128) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0004c128) popup_call_audio_out_window_t

0x047d,	// (0x0003d458) bg_popup_call_pane_ParamLimits

0x047d,	// (0x0003d458) bg_popup_call_pane

0x316a,	// (0x00040145) call_thumbnail_pane_cp_ParamLimits

0x316a,	// (0x00040145) call_thumbnail_pane_cp

0x0501,	// (0x0003d4dc) call_type_pane_cp01_ParamLimits

0x0501,	// (0x0003d4dc) call_type_pane_cp01

0x0545,	// (0x0003d520) popup_call_audio_first_window_g1_ParamLimits

0x0545,	// (0x0003d520) popup_call_audio_first_window_g1

0x0591,	// (0x0003d56c) popup_call_audio_first_window_g2_ParamLimits

0x0591,	// (0x0003d56c) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0004c12d) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0004c12d) popup_call_audio_first_window_g

0x05d5,	// (0x0003d5b0) popup_call_audio_first_window_t1_ParamLimits

0x05d5,	// (0x0003d5b0) popup_call_audio_first_window_t1

0x0681,	// (0x0003d65c) popup_call_audio_first_window_t4_ParamLimits

0x0681,	// (0x0003d65c) popup_call_audio_first_window_t4

0x070d,	// (0x0003d6e8) popup_call_audio_first_window_t5_ParamLimits

0x070d,	// (0x0003d6e8) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0004c132) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0004c132) popup_call_audio_first_window_t

0x073c,	// (0x0003d717) bg_popup_call_pane_cp02

0x0746,	// (0x0003d721) call_type_pane_cp023

0x074e,	// (0x0003d729) popup_call_audio_wait_window_g1

0x0756,	// (0x0003d731) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0004c139) popup_call_audio_wait_window_g

0x075e,	// (0x0003d739) popup_call_audio_wait_window_t3

0x076c,	// (0x0003d747) bg_popup_call_pane_cp03_ParamLimits

0x076c,	// (0x0003d747) bg_popup_call_pane_cp03

0x07cc,	// (0x0003d7a7) call_thumbnail_pane_cp011_ParamLimits

0x07cc,	// (0x0003d7a7) call_thumbnail_pane_cp011

0x07d8,	// (0x0003d7b3) call_type_pane_cp034_ParamLimits

0x07d8,	// (0x0003d7b3) call_type_pane_cp034

0x0814,	// (0x0003d7ef) popup_call_audio_second_window_g1_ParamLimits

0x0814,	// (0x0003d7ef) popup_call_audio_second_window_g1

0x0850,	// (0x0003d82b) popup_call_audio_second_window_g2_ParamLimits

0x0850,	// (0x0003d82b) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0004c13e) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0004c13e) popup_call_audio_second_window_g

0x088c,	// (0x0003d867) popup_call_audio_second_window_t1_ParamLimits

0x088c,	// (0x0003d867) popup_call_audio_second_window_t1

0x090d,	// (0x0003d8e8) popup_call_audio_second_window_t2_ParamLimits

0x090d,	// (0x0003d8e8) popup_call_audio_second_window_t2

0x0943,	// (0x0003d91e) popup_call_audio_second_window_t3_ParamLimits

0x0943,	// (0x0003d91e) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0004c143) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0004c143) popup_call_audio_second_window_t

0x073c,	// (0x0003d717) bg_popup_call_pane_cp04

0x0979,	// (0x0003d954) list_conf_pane

0x0981,	// (0x0003d95c) popup_call_audio_conf_window_t1

0x098f,	// (0x0003d96a) call_thumbnail_pane_g1

0x0997,	// (0x0003d972) bg_pinb_pane_ParamLimits

0x0997,	// (0x0003d972) bg_pinb_pane

0x09a5,	// (0x0003d980) find_pinb_pane

0x09ae,	// (0x0003d989) listscroll_pinb_pane_ParamLimits

0x09ae,	// (0x0003d989) listscroll_pinb_pane

0x09bd,	// (0x0003d998) pinb_bg_pane_g1

0x318e,	// (0x00040169) pinb_bg_pane_g2

0x319a,	// (0x00040175) pinb_bg_pane_g3

0x31a6,	// (0x00040181) pinb_bg_pane_g4

0x31b2,	// (0x0004018d) pinb_bg_pane_g5

0x31be,	// (0x00040199) pinb_bg_pane_g6

0x31c9,	// (0x000401a4) pinb_bg_pane_g7

0x31d4,	// (0x000401af) pinb_bg_pane_g8

0x31df,	// (0x000401ba) pinb_bg_pane_g9

0x31e9,	// (0x000401c4) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0004c14a) pinb_bg_pane_g

0x3206,	// (0x000401e1) grid_pinb_pane

0x3211,	// (0x000401ec) list_pinb_pane

0x321c,	// (0x000401f7) scroll_pane_cp01_ParamLimits

0x321c,	// (0x000401f7) scroll_pane_cp01

0x09c7,	// (0x0003d9a2) find_pinb_pane_g1_ParamLimits

0x09c7,	// (0x0003d9a2) find_pinb_pane_g1

0x09df,	// (0x0003d9ba) find_pinb_pane_t1

0x09f1,	// (0x0003d9cc) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0004c164) find_pinb_pane_t

0x0a06,	// (0x0003d9e1) input_focus_pane_cp01_ParamLimits

0x0a06,	// (0x0003d9e1) input_focus_pane_cp01

0x322e,	// (0x00040209) cell_pinb_pane_ParamLimits

0x322e,	// (0x00040209) cell_pinb_pane

0x3250,	// (0x0004022b) cell_pinb_pane_g1_ParamLimits

0x3250,	// (0x0004022b) cell_pinb_pane_g1

0x3264,	// (0x0004023f) cell_pinb_pane_g2_ParamLimits

0x3264,	// (0x0004023f) cell_pinb_pane_g2

0x0a12,	// (0x0003d9ed) cell_pinb_pane_g3_ParamLimits

0x0a12,	// (0x0003d9ed) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0004c169) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0004c169) cell_pinb_pane_g

0x073c,	// (0x0003d717) grid_highlight_pane_cp01

0x3270,	// (0x0004024b) list_pinb_item_pane_ParamLimits

0x3270,	// (0x0004024b) list_pinb_item_pane

0x073c,	// (0x0003d717) list_highlight_pane_cp02

0x3283,	// (0x0004025e) list_pinb_item_pane_g1_ParamLimits

0x3283,	// (0x0004025e) list_pinb_item_pane_g1

0x3290,	// (0x0004026b) list_pinb_item_pane_g2_ParamLimits

0x3290,	// (0x0004026b) list_pinb_item_pane_g2

0x329c,	// (0x00040277) list_pinb_item_pane_g3_ParamLimits

0x329c,	// (0x00040277) list_pinb_item_pane_g3

0x32ad,	// (0x00040288) list_pinb_item_pane_g4_ParamLimits

0x32ad,	// (0x00040288) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0004c170) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0004c170) list_pinb_item_pane_g

0x32b9,	// (0x00040294) list_pinb_item_pane_t1_ParamLimits

0x32b9,	// (0x00040294) list_pinb_item_pane_t1

0x32ee,	// (0x000402c9) calc_display_pane

0x3314,	// (0x000402ef) calc_paper_pane

0x3337,	// (0x00040312) grid_calc_pane

0x073c,	// (0x0003d717) bg_list_pane_cp01

0x3365,	// (0x00040340) clock_g1

0x336d,	// (0x00040348) clock_g2

0x0001,

0xf19e,	// (0x0004c179) clock_g

0x3375,	// (0x00040350) clock_t1_ParamLimits

0x3375,	// (0x00040350) clock_t1

0x338a,	// (0x00040365) clock_t2_ParamLimits

0x338a,	// (0x00040365) clock_t2

0x339c,	// (0x00040377) clock_t3_ParamLimits

0x339c,	// (0x00040377) clock_t3

0x33ae,	// (0x00040389) clock_t4_ParamLimits

0x33ae,	// (0x00040389) clock_t4

0x33c0,	// (0x0004039b) clock_t5_ParamLimits

0x33c0,	// (0x0004039b) clock_t5

0x33d5,	// (0x000403b0) clock_t6_ParamLimits

0x33d5,	// (0x000403b0) clock_t6

0x33e7,	// (0x000403c2) clock_t7_ParamLimits

0x33e7,	// (0x000403c2) clock_t7

0x33f9,	// (0x000403d4) clock_t8_ParamLimits

0x33f9,	// (0x000403d4) clock_t8

0x340d,	// (0x000403e8) clock_t9_ParamLimits

0x340d,	// (0x000403e8) clock_t9

0x0008,

0xf1a3,	// (0x0004c17e) clock_t_ParamLimits

0xf1a3,	// (0x0004c17e) clock_t

0x0a1e,	// (0x0003d9f9) popup_clock_analogue_window_cp02

0x0a1e,	// (0x0003d9f9) popup_clock_digital_window_cp01

0x0a26,	// (0x0003da01) listscroll_help_pane

0x073c,	// (0x0003d717) phob_pre_status_pane

0x0a30,	// (0x0003da0b) grid_qdial_pane

0x073c,	// (0x0003d717) listscroll_mce_pane

0x0a3a,	// (0x0003da15) bg_notes_pane

0x0a44,	// (0x0003da1f) list_notes_pane

0x3423,	// (0x000403fe) scroll_pane_cp06

0x0a4e,	// (0x0003da29) bg_calc_paper_pane

0xbd4e,	// (0x00048d29) list_calc_pane

0x0a62,	// (0x0003da3d) bg_calc_display_pane

0x342e,	// (0x00040409) calc_display_pane_t1

0x3440,	// (0x0004041b) calc_display_pane_t2

0xbd68,	// (0x00048d43) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0004c191) calc_display_pane_t

0x3452,	// (0x0004042d) cell_calc_pane_ParamLimits

0x3452,	// (0x0004042d) cell_calc_pane

0x0a6e,	// (0x0003da49) bg_calc_paper_pane_g1

0x0a7a,	// (0x0003da55) bg_calc_paper_pane_g2

0x0a86,	// (0x0003da61) bg_calc_paper_pane_g3

0x0a92,	// (0x0003da6d) bg_calc_paper_pane_g4

0x0a9e,	// (0x0003da79) bg_calc_paper_pane_g5

0x348d,	// (0x00040468) bg_calc_paper_pane_g6

0x34a0,	// (0x0004047b) bg_calc_paper_pane_g7

0x34b3,	// (0x0004048e) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0004c198) bg_calc_paper_pane_g

0x34c4,	// (0x0004049f) calc_bg_paper_pane_g9

0x34d5,	// (0x000404b0) list_calc_item_pane_ParamLimits

0x34d5,	// (0x000404b0) list_calc_item_pane

0x0aaa,	// (0x0003da85) list_calc_item_pane_g1

0xbd7a,	// (0x00048d55) list_calc_item_pane_t1_ParamLimits

0xbd7a,	// (0x00048d55) list_calc_item_pane_t1

0x34e9,	// (0x000404c4) list_calc_item_pane_t2_ParamLimits

0x34e9,	// (0x000404c4) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0004c1a9) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0004c1a9) list_calc_item_pane_t

0x0ab7,	// (0x0003da92) cell_calc_pane_g1

0x0ac1,	// (0x0003da9c) grid_highlight_pane_cp02

0x0ae3,	// (0x0003dabe) bg_calc_display_pane_g1

0xbd8c,	// (0x00048d67) bg_calc_display_pane_g2

0x0aec,	// (0x0003dac7) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0004c1b3) bg_calc_display_pane_g

0x351b,	// (0x000404f6) cell_qdial_pane_ParamLimits

0x351b,	// (0x000404f6) cell_qdial_pane

0x3531,	// (0x0004050c) cell_qdial_pane_g1_ParamLimits

0x3531,	// (0x0004050c) cell_qdial_pane_g1

0x3547,	// (0x00040522) cell_qdial_pane_g2_ParamLimits

0x3547,	// (0x00040522) cell_qdial_pane_g2

0x0af5,	// (0x0003dad0) cell_qdial_pane_g3_ParamLimits

0x0af5,	// (0x0003dad0) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0004c1ba) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0004c1ba) cell_qdial_pane_g

0x356d,	// (0x00040548) cell_qdial_pane_t1_ParamLimits

0x356d,	// (0x00040548) cell_qdial_pane_t1

0x3585,	// (0x00040560) cell_qdial_pane_t2_ParamLimits

0x3585,	// (0x00040560) cell_qdial_pane_t2

0x3598,	// (0x00040573) cell_qdial_pane_t3_ParamLimits

0x3598,	// (0x00040573) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0004c1c3) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0004c1c3) cell_qdial_pane_t

0x073c,	// (0x0003d717) grid_highlight_pane_cp04

0x0b01,	// (0x0003dadc) thumbnail_qdial_pane_ParamLimits

0x0b01,	// (0x0003dadc) thumbnail_qdial_pane

0x0b5d,	// (0x0003db38) list_help_pane

0x0b66,	// (0x0003db41) scroll_pane_cp02

0x35ab,	// (0x00040586) help_list_pane_t1_ParamLimits

0x35ab,	// (0x00040586) help_list_pane_t1

0xbd96,	// (0x00048d71) bg_notes_pane_g2

0xbd9e,	// (0x00048d79) bg_notes_pane_g3

0xbda6,	// (0x00048d81) notes_bg_pane_g1

0xbdae,	// (0x00048d89) notes_bg_pane_g4

0xbdb6,	// (0x00048d91) notes_bg_pane_g5

0xbdbe,	// (0x00048d99) notes_bg_pane_g6

0xbdc6,	// (0x00048da1) notes_bg_pane_g7

0xbdce,	// (0x00048da9) notes_bg_pane_g8

0xbdd6,	// (0x00048db1) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0004c1e1) notes_bg_pane_g

0x35cf,	// (0x000405aa) list_notes_text_pane_ParamLimits

0x35cf,	// (0x000405aa) list_notes_text_pane

0x0b6f,	// (0x0003db4a) list_notes_text_pane_g1

0xbdde,	// (0x00048db9) list_notes_text_pane_t1

0x0a62,	// (0x0003da3d) listscroll_cale_week_pane

0x3603,	// (0x000405de) bg_cale_heading_pane

0x0b89,	// (0x0003db64) bg_cale_pane_cp01

0x361f,	// (0x000405fa) cale_week_corner_pane

0x3635,	// (0x00040610) cale_week_day_heading_pane

0x3651,	// (0x0004062c) cale_week_scroll_pane_g1

0x366a,	// (0x00040645) cale_week_scroll_pane_g2

0x367b,	// (0x00040656) cale_week_scroll_pane_g3

0x368c,	// (0x00040667) cale_week_scroll_pane_g4

0x369d,	// (0x00040678) cale_week_scroll_pane_g5

0x36ae,	// (0x00040689) cale_week_scroll_pane_g6

0x36bf,	// (0x0004069a) cale_week_scroll_pane_g7

0x36d0,	// (0x000406ab) cale_week_scroll_pane_g8

0x36e1,	// (0x000406bc) cale_week_scroll_pane_g9

0x36f2,	// (0x000406cd) cale_week_scroll_pane_g10

0x3703,	// (0x000406de) cale_week_scroll_pane_g11

0x3714,	// (0x000406ef) cale_week_scroll_pane_g12

0x3725,	// (0x00040700) cale_week_scroll_pane_g13

0x373e,	// (0x00040719) cale_week_scroll_pane_g14

0x3757,	// (0x00040732) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0004c1f0) cale_week_scroll_pane_g

0x3770,	// (0x0004074b) cale_week_time_pane

0x3781,	// (0x0004075c) grid_cale_week_pane

0x379c,	// (0x00040777) scroll_pane_cp08

0x37b4,	// (0x0004078f) cell_cale_week_pane_ParamLimits

0x37b4,	// (0x0004078f) cell_cale_week_pane

0x37fc,	// (0x000407d7) cale_week_day_heading_pane_t1

0x3810,	// (0x000407eb) cale_week_day_heading_pane_t2

0x3824,	// (0x000407ff) cale_week_day_heading_pane_t3

0x3838,	// (0x00040813) cale_week_day_heading_pane_t4

0x384c,	// (0x00040827) cale_week_day_heading_pane_t5

0x3860,	// (0x0004083b) cale_week_day_heading_pane_t6

0x3874,	// (0x0004084f) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0004c20f) cale_week_day_heading_pane_t

0x0bb4,	// (0x0003db8f) bg_cale_side_pane

0x3888,	// (0x00040863) cale_week_time_pane_t1

0x38a0,	// (0x0004087b) cale_week_time_pane_t2

0x38b8,	// (0x00040893) cale_week_time_pane_t3

0x38d0,	// (0x000408ab) cale_week_time_pane_t4

0x38e8,	// (0x000408c3) cale_week_time_pane_t5

0x3900,	// (0x000408db) cale_week_time_pane_t6

0x3918,	// (0x000408f3) cale_week_time_pane_t7

0x3934,	// (0x0004090f) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0004c21e) cale_week_time_pane_t

0x3954,	// (0x0004092f) cell_cale_week_pane_g2

0x3965,	// (0x00040940) cell_cale_week_pane_g3_ParamLimits

0x3965,	// (0x00040940) cell_cale_week_pane_g3

0x0bc2,	// (0x0003db9d) grid_highlight_pane_cp07

0x0bca,	// (0x0003dba5) listscroll_gms_pane

0x0bd4,	// (0x0003dbaf) grid_gms_pane

0x0bdd,	// (0x0003dbb8) listscroll_gms_pane_g1

0x0be5,	// (0x0003dbc0) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0004c22f) listscroll_gms_pane_g

0x397d,	// (0x00040958) scroll_pane_cp010

0x3988,	// (0x00040963) cell_gms_pane_ParamLimits

0x3988,	// (0x00040963) cell_gms_pane

0x39a2,	// (0x0004097d) cell_gms_pane_g1

0x0bed,	// (0x0003dbc8) cell_gms_pane_g2

0x0bf5,	// (0x0003dbd0) cell_gms_pane_g3

0x0bfe,	// (0x0003dbd9) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0004c234) cell_gms_pane_g

0x0c07,	// (0x0003dbe2) grid_highlight_pane_cp09

0x6bbf,	// (0x00043b9a) phob_pre_status_pane_g1

0x6bc7,	// (0x00043ba2) phob_pre_status_pane_g2

0x6bcf,	// (0x00043baa) phob_pre_status_pane_g3

0x6bd7,	// (0x00043bb2) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0004c623) phob_pre_status_pane_g

0x6be7,	// (0x00043bc2) phob_pre_status_pane_t1

0x6bf7,	// (0x00043bd2) phob_pre_status_pane_t2

0x6c07,	// (0x00043be2) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0004c62e) phob_pre_status_pane_t

0x073c,	// (0x0003d717) bg_list_pane_cp05

0x39b2,	// (0x0004098d) grid_vorec_pane

0xbdec,	// (0x00048dc7) vorec_t1

0xbdfa,	// (0x00048dd5) vorec_t2

0xbe08,	// (0x00048de3) vorec_t3

0xbe16,	// (0x00048df1) vorec_t4

0xbe24,	// (0x00048dff) vorec_t5

0xbe32,	// (0x00048e0d) vorec_t6

0x0006,

0xf262,	// (0x0004c23d) vorec_t

0xbe4e,	// (0x00048e29) wait_bar_pane_cp01

0x39bc,	// (0x00040997) cell_vorec_pane_ParamLimits

0x39bc,	// (0x00040997) cell_vorec_pane

0x0c0f,	// (0x0003dbea) cell_vorec_pane_g1

0x073c,	// (0x0003d717) grid_highlight_pane_cp05

0x39e7,	// (0x000409c2) cams_zoom_pane

0x39f6,	// (0x000409d1) image_vga_pane

0x3a10,	// (0x000409eb) main_camera_pane_g1

0x3a22,	// (0x000409fd) main_camera_pane_g2

0x3a32,	// (0x00040a0d) main_camera_pane_g3

0x3a46,	// (0x00040a21) main_camera_pane_g4

0x3a5a,	// (0x00040a35) main_camera_pane_g5

0x3a6e,	// (0x00040a49) main_camera_pane_g6

0x3a82,	// (0x00040a5d) main_camera_pane_g7

0x0007,

0xf271,	// (0x0004c24c) main_camera_pane_g

0x3a96,	// (0x00040a71) main_camera_pane_t1

0x3aac,	// (0x00040a87) main_camera_pane_t2

0x0001,

0xf282,	// (0x0004c25d) main_camera_pane_t

0x3aea,	// (0x00040ac5) cams_zoom_pane_cp_ParamLimits

0x3aea,	// (0x00040ac5) cams_zoom_pane_cp

0x3b12,	// (0x00040aed) image_cif_pane_ParamLimits

0x3b12,	// (0x00040aed) image_cif_pane

0x3b4d,	// (0x00040b28) image_subqcif_pane

0x3b57,	// (0x00040b32) main_video_pane_g1_ParamLimits

0x3b57,	// (0x00040b32) main_video_pane_g1

0x3b7b,	// (0x00040b56) main_video_pane_g2_ParamLimits

0x3b7b,	// (0x00040b56) main_video_pane_g2

0x3bb1,	// (0x00040b8c) main_video_pane_g3_ParamLimits

0x3bb1,	// (0x00040b8c) main_video_pane_g3

0x3bdf,	// (0x00040bba) main_video_pane_g4_ParamLimits

0x3bdf,	// (0x00040bba) main_video_pane_g4

0x3c0d,	// (0x00040be8) main_video_pane_g5_ParamLimits

0x3c0d,	// (0x00040be8) main_video_pane_g5

0x0c25,	// (0x0003dc00) main_video_pane_g6_ParamLimits

0x0c25,	// (0x0003dc00) main_video_pane_g6

0x0006,

0xf287,	// (0x0004c262) main_video_pane_g_ParamLimits

0xf287,	// (0x0004c262) main_video_pane_g

0x3c36,	// (0x00040c11) main_video_pane_t1_ParamLimits

0x3c36,	// (0x00040c11) main_video_pane_t1

0x0c3f,	// (0x0003dc1a) cams_zoom_pane_g1

0x0c48,	// (0x0003dc23) cams_zoom_pane_g2

0x0c51,	// (0x0003dc2c) cams_zoom_pane_g3

0x0c5a,	// (0x0003dc35) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0004c271) cams_zoom_pane_g

0x3c93,	// (0x00040c6e) grid_cams_pane

0x3cad,	// (0x00040c88) linegrid_cams_pane

0x3cc1,	// (0x00040c9c) cell_cams_pane_ParamLimits

0x3cc1,	// (0x00040c9c) cell_cams_pane

0x0c63,	// (0x0003dc3e) cams_burst_image_pane

0x0c6b,	// (0x0003dc46) cell_cams_pane_g1

0x073c,	// (0x0003d717) grid_highlight_pane_cp03

0x0ab7,	// (0x0003da92) mp_bg_pane_g1

0x073c,	// (0x0003d717) bg_list_pane_cp03

0x6af2,	// (0x00043acd) bg_mp_pane

0x6afa,	// (0x00043ad5) grid_mp_pane

0x6b02,	// (0x00043add) media_player_g1

0x6b0c,	// (0x00043ae7) media_player_t1

0x6b1a,	// (0x00043af5) media_player_t2

0x6b28,	// (0x00043b03) media_player_t3

0x6b36,	// (0x00043b11) media_player_t4

0x6b44,	// (0x00043b1f) media_player_t5

0x6b52,	// (0x00043b2d) media_player_t6

0x6b60,	// (0x00043b3b) media_player_t7

0x0006,

0xf632,	// (0x0004c60d) media_player_t

0x6b6e,	// (0x00043b49) wait_bar_pane_cp02

0xf617,	// (0x0004c5f2) main_usb_pane_t

0x6bb6,	// (0x00043b91) cell_mp_pane

0x0ab7,	// (0x0003da92) cell_mp_pane_g1

0x073c,	// (0x0003d717) grid_highlight_pane_cp06

0x0c73,	// (0x0003dc4e) grid_skin_colour_pane

0x0c7b,	// (0x0003dc56) list_highlight_pane_cp03

0x3ce3,	// (0x00040cbe) skin_g1

0x0c83,	// (0x0003dc5e) skin_t1

0x0c92,	// (0x0003dc6d) skin_t2

0x0001,

0xf2cb,	// (0x0004c2a6) skin_t

0x3ced,	// (0x00040cc8) cell_skin_colour_pane_ParamLimits

0x3ced,	// (0x00040cc8) cell_skin_colour_pane

0x0ca0,	// (0x0003dc7b) cell_skin_colour_pane_g1

0x3d49,	// (0x00040d24) call_video_g1_ParamLimits

0x3d49,	// (0x00040d24) call_video_g1

0x3d65,	// (0x00040d40) call_video_g2_ParamLimits

0x3d65,	// (0x00040d40) call_video_g2

0x0001,

0xf2d0,	// (0x0004c2ab) call_video_g_ParamLimits

0xf2d0,	// (0x0004c2ab) call_video_g

0x3d9b,	// (0x00040d76) call_video_uplink_pane_cp1_ParamLimits

0x3d9b,	// (0x00040d76) call_video_uplink_pane_cp1

0x0cba,	// (0x0003dc95) call_video_uplink_pane_cp2

0x3e1b,	// (0x00040df6) video_down_crop_pane_ParamLimits

0x3e1b,	// (0x00040df6) video_down_crop_pane

0x3ee1,	// (0x00040ebc) video_down_pane_ParamLimits

0x3ee1,	// (0x00040ebc) video_down_pane

0x0cc2,	// (0x0003dc9d) video_down_subqcif_pane_ParamLimits

0x0cc2,	// (0x0003dc9d) video_down_subqcif_pane

0x0cdc,	// (0x0003dcb7) video_down_subqcif_pane_cp_ParamLimits

0x0cdc,	// (0x0003dcb7) video_down_subqcif_pane_cp

0x0d02,	// (0x0003dcdd) im_reading_pane_ParamLimits

0x0d02,	// (0x0003dcdd) im_reading_pane

0x3fad,	// (0x00040f88) im_writing_pane_ParamLimits

0x3fad,	// (0x00040f88) im_writing_pane

0x3fcb,	// (0x00040fa6) im_reading_pane_t1

0x0d1c,	// (0x0003dcf7) list_im_pane

0x0d2d,	// (0x0003dd08) scroll_pane_cp07

0x400a,	// (0x00040fe5) im_writing_pane_t1_ParamLimits

0x400a,	// (0x00040fe5) im_writing_pane_t1

0x0d46,	// (0x0003dd21) im_writing_pane_t2_ParamLimits

0x0d46,	// (0x0003dd21) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0004c2b5) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0004c2b5) im_writing_pane_t

0x073c,	// (0x0003d717) input_focus_pane_cp04

0x073c,	// (0x0003d717) input_focus_pane_cp05

0x401f,	// (0x00040ffa) list_im_single_pane_ParamLimits

0x401f,	// (0x00040ffa) list_im_single_pane

0x4038,	// (0x00041013) list_single_im_pane_t1

0x6b76,	// (0x00043b51) blid_accuracy_pane

0x6b7e,	// (0x00043b59) blid_compass_pane

0x6b88,	// (0x00043b63) main_location_t1

0x6b98,	// (0x00043b73) main_location_t2

0x6ba8,	// (0x00043b83) main_location_t3

0x0002,

0xf641,	// (0x0004c61c) main_location_t

0x073c,	// (0x0003d717) aid_levels_location

0x0ab7,	// (0x0003da92) blid_accuracy_pane_g1

0x0ab7,	// (0x0003da92) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0004c317) blid_accuracy_pane_g

0x0d8e,	// (0x0003dd69) wml_content_pane

0x0dcc,	// (0x0003dda7) wml_button_pane_ParamLimits

0x0dcc,	// (0x0003dda7) wml_button_pane

0x4047,	// (0x00041022) wml_list_single_large_pane_ParamLimits

0x4047,	// (0x00041022) wml_list_single_large_pane

0x4060,	// (0x0004103b) wml_list_single_medium_pane_ParamLimits

0x4060,	// (0x0004103b) wml_list_single_medium_pane

0x407a,	// (0x00041055) wml_list_single_small_pane_ParamLimits

0x407a,	// (0x00041055) wml_list_single_small_pane

0x0de0,	// (0x0003ddbb) wml_selection_box_pane_ParamLimits

0x0de0,	// (0x0003ddbb) wml_selection_box_pane

0x0df3,	// (0x0003ddce) wml_list_single_pane_t1

0x0e02,	// (0x0003dddd) wml_list_single_medium_pane_t1

0x0e11,	// (0x0003ddec) wml_list_single_large_pane_t1

0x0e20,	// (0x0003ddfb) input_focus_pane_cp02_ParamLimits

0x0e20,	// (0x0003ddfb) input_focus_pane_cp02

0x0e33,	// (0x0003de0e) wml_selection_box_pane_g1

0x0e3c,	// (0x0003de17) wml_selection_box_pane_t1_ParamLimits

0x0e3c,	// (0x0003de17) wml_selection_box_pane_t1

0x0997,	// (0x0003d972) bg_wml_button_pane_ParamLimits

0x0997,	// (0x0003d972) bg_wml_button_pane

0x0e54,	// (0x0003de2f) wml_button_pane_g1

0x0e5c,	// (0x0003de37) wml_button_pane_t1

0x0e54,	// (0x0003de2f) wml_button_bg_pane_g1

0x0e6c,	// (0x0003de47) wml_button_bg_pane_g2

0x0e74,	// (0x0003de4f) wml_button_bg_pane_g3

0x0e7c,	// (0x0003de57) wml_button_bg_pane_g4

0x0e84,	// (0x0003de5f) wml_button_bg_pane_g5

0x0e8c,	// (0x0003de67) wml_button_bg_pane_g6

0x0e94,	// (0x0003de6f) wml_button_bg_pane_g7

0x0e9c,	// (0x0003de77) wml_button_bg_pane_g8

0x0ea4,	// (0x0003de7f) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0004c2ba) wml_button_bg_pane_g

0x4099,	// (0x00041074) bg_list_pane_cp02

0x0eac,	// (0x0003de87) mce_header_pane_ParamLimits

0x0eac,	// (0x0003de87) mce_header_pane

0x0ec2,	// (0x0003de9d) mce_icon_pane

0x0ec2,	// (0x0003de9d) mce_image_pane

0x0ecb,	// (0x0003dea6) mce_text_pane_ParamLimits

0x0ecb,	// (0x0003dea6) mce_text_pane

0x40a3,	// (0x0004107e) scroll_pane_cp03

0x0dc4,	// (0x0003dd9f) scroll_pane_cp04

0x0ede,	// (0x0003deb9) scroll_pane_cp05_ParamLimits

0x0ede,	// (0x0003deb9) scroll_pane_cp05

0x40ad,	// (0x00041088) mce_header_field_pane_ParamLimits

0x40ad,	// (0x00041088) mce_header_field_pane

0x40c6,	// (0x000410a1) mce_header_field_pane_2_ParamLimits

0x40c6,	// (0x000410a1) mce_header_field_pane_2

0x40dc,	// (0x000410b7) mce_header_field_pane_3

0x40e4,	// (0x000410bf) list_single_mce_message_pane_ParamLimits

0x40e4,	// (0x000410bf) list_single_mce_message_pane

0x4100,	// (0x000410db) list_single_mce_smart_pane_ParamLimits

0x4100,	// (0x000410db) list_single_mce_smart_pane

0x0eea,	// (0x0003dec5) input_focus_pane_cp03

0x0ef3,	// (0x0003dece) list_header_data_pane

0x4127,	// (0x00041102) mce_header_field_pane_t1

0x4137,	// (0x00041112) list_single_mce_header_pane_ParamLimits

0x4137,	// (0x00041112) list_single_mce_header_pane

0x0efb,	// (0x0003ded6) list_single_mce_header_pane_t1

0x0f0a,	// (0x0003dee5) list_single_mce_message_pane_g1

0x0f12,	// (0x0003deed) list_single_mce_message_pane_t1

0x4169,	// (0x00041144) bg_cale_heading_pane_cp01_ParamLimits

0x4169,	// (0x00041144) bg_cale_heading_pane_cp01

0x0f20,	// (0x0003defb) bg_cale_pane_cp02_ParamLimits

0x0f20,	// (0x0003defb) bg_cale_pane_cp02

0x419c,	// (0x00041177) cale_month_corner_pane

0x41b2,	// (0x0004118d) cale_month_day_heading_pane_ParamLimits

0x41b2,	// (0x0004118d) cale_month_day_heading_pane

0x41e5,	// (0x000411c0) cale_month_pane_g1_ParamLimits

0x41e5,	// (0x000411c0) cale_month_pane_g1

0x4211,	// (0x000411ec) cale_month_pane_g2_ParamLimits

0x4211,	// (0x000411ec) cale_month_pane_g2

0x4232,	// (0x0004120d) cale_month_pane_g3_ParamLimits

0x4232,	// (0x0004120d) cale_month_pane_g3

0x426e,	// (0x00041249) cale_month_pane_g4_ParamLimits

0x426e,	// (0x00041249) cale_month_pane_g4

0x42aa,	// (0x00041285) cale_month_pane_g5_ParamLimits

0x42aa,	// (0x00041285) cale_month_pane_g5

0x42e6,	// (0x000412c1) cale_month_pane_g6_ParamLimits

0x42e6,	// (0x000412c1) cale_month_pane_g6

0x4322,	// (0x000412fd) cale_month_pane_g7_ParamLimits

0x4322,	// (0x000412fd) cale_month_pane_g7

0x435e,	// (0x00041339) cale_month_pane_g8_ParamLimits

0x435e,	// (0x00041339) cale_month_pane_g8

0x439a,	// (0x00041375) cale_month_pane_g9_ParamLimits

0x439a,	// (0x00041375) cale_month_pane_g9

0x43d0,	// (0x000413ab) cale_month_pane_g10_ParamLimits

0x43d0,	// (0x000413ab) cale_month_pane_g10

0x43fa,	// (0x000413d5) cale_month_pane_g11_ParamLimits

0x43fa,	// (0x000413d5) cale_month_pane_g11

0x4424,	// (0x000413ff) cale_month_pane_g12_ParamLimits

0x4424,	// (0x000413ff) cale_month_pane_g12

0x4452,	// (0x0004142d) cale_month_pane_g13_ParamLimits

0x4452,	// (0x0004142d) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0004c2cd) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0004c2cd) cale_month_pane_g

0x4480,	// (0x0004145b) cale_month_week_pane

0x4491,	// (0x0004146c) grid_cale_month_pane_ParamLimits

0x4491,	// (0x0004146c) grid_cale_month_pane

0x44bf,	// (0x0004149a) cale_month_day_heading_pane_t1

0x451d,	// (0x000414f8) cale_month_day_heading_pane_t2

0x4582,	// (0x0004155d) cale_month_day_heading_pane_t3

0x45e7,	// (0x000415c2) cale_month_day_heading_pane_t4

0x464c,	// (0x00041627) cale_month_day_heading_pane_t5

0x46b1,	// (0x0004168c) cale_month_day_heading_pane_t6

0x4716,	// (0x000416f1) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0004c2e8) cale_month_day_heading_pane_t

0x0bb4,	// (0x0003db8f) bg_cale_side_pane_cp01

0x477b,	// (0x00041756) cale_month_week_pane_t1

0x4792,	// (0x0004176d) cale_month_week_pane_t2

0x47a9,	// (0x00041784) cale_month_week_pane_t3

0x47c0,	// (0x0004179b) cale_month_week_pane_t4

0x47d7,	// (0x000417b2) cale_month_week_pane_t5

0x47ee,	// (0x000417c9) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0004c2f7) cale_month_week_pane_t

0x480d,	// (0x000417e8) cell_cale_month_pane_ParamLimits

0x480d,	// (0x000417e8) cell_cale_month_pane

0xbf3e,	// (0x00048f19) cell_cale_month_pane_g1

0x48bb,	// (0x00041896) cell_cale_month_pane_t1_ParamLimits

0x48bb,	// (0x00041896) cell_cale_month_pane_t1

0x0bc2,	// (0x0003db9d) grid_highlight_pane_cp08

0x0ab7,	// (0x0003da92) main_smil_g1

0x48d7,	// (0x000418b2) smil_status_pane

0x0f55,	// (0x0003df30) smil_text_pane

0x697d,	// (0x00043958) bg_popup_call3_rect_pane_g8

0x6985,	// (0x00043960) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0004c5b0) bg_popup_call3_rect_pane_g

0x72d8,	// (0x000442b3) smil_status_volume_pane_g1

0x0f5f,	// (0x0003df3a) smil_status_pane_t1

0xc0b3,	// (0x0004908e) volume_smil_pane

0x0f76,	// (0x0003df51) list_smil_text_pane

0x48ec,	// (0x000418c7) scroll_pane_cp011

0x48f7,	// (0x000418d2) smil_text_list_pane_t1_ParamLimits

0x48f7,	// (0x000418d2) smil_text_list_pane_t1

0xbf4a,	// (0x00048f25) aid_volume_smil_ParamLimits

0xbf4a,	// (0x00048f25) aid_volume_smil

0x0ab7,	// (0x0003da92) smil_volume_pane_g1

0x0ab7,	// (0x0003da92) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0004c317) smil_volume_pane_g

0x0a62,	// (0x0003da3d) listscroll_cale_day_pane

0x0f80,	// (0x0003df5b) bg_cale_pane

0x0f98,	// (0x0003df73) list_cale_pane

0x0fa9,	// (0x0003df84) scroll_pane_cp09

0x0fba,	// (0x0003df95) cale_bg_pane_g1

0x0fc2,	// (0x0003df9d) cale_bg_pane_g2

0x0fca,	// (0x0003dfa5) cale_bg_pane_g3

0x0fd2,	// (0x0003dfad) cale_bg_pane_g4

0x0fda,	// (0x0003dfb5) cale_bg_pane_g5

0x0fe2,	// (0x0003dfbd) cale_bg_pane_g6

0x0fea,	// (0x0003dfc5) cale_bg_pane_g7

0x0ff2,	// (0x0003dfcd) cale_bg_pane_g8

0x0ffa,	// (0x0003dfd5) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0004c31c) cale_bg_pane_g

0x494c,	// (0x00041927) list_cale_time_pane_ParamLimits

0x494c,	// (0x00041927) list_cale_time_pane

0x4961,	// (0x0004193c) list_cale_time_pane_g1_ParamLimits

0x4961,	// (0x0004193c) list_cale_time_pane_g1

0x1002,	// (0x0003dfdd) list_cale_time_pane_g2_ParamLimits

0x1002,	// (0x0003dfdd) list_cale_time_pane_g2

0x496d,	// (0x00041948) list_cale_time_pane_g3_ParamLimits

0x496d,	// (0x00041948) list_cale_time_pane_g3

0x497b,	// (0x00041956) list_cale_time_pane_g4_ParamLimits

0x497b,	// (0x00041956) list_cale_time_pane_g4

0x4989,	// (0x00041964) list_cale_time_pane_g5_ParamLimits

0x4989,	// (0x00041964) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0004c32f) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0004c32f) list_cale_time_pane_g

0x4997,	// (0x00041972) list_cale_time_pane_t1_ParamLimits

0x4997,	// (0x00041972) list_cale_time_pane_t1

0x49bf,	// (0x0004199a) list_cale_time_pane_t2_ParamLimits

0x49bf,	// (0x0004199a) list_cale_time_pane_t2

0x4ce7,	// (0x00041cc2) aid_blid_cardinal_pane

0x4d29,	// (0x00041d04) compass_pane_t4

0x49e7,	// (0x000419c2) list_cale_time_pane_t4_ParamLimits

0x49e7,	// (0x000419c2) list_cale_time_pane_t4

0x4d37,	// (0x00041d12) compass_pane_t5

0x4d47,	// (0x00041d22) compass_pane_t6

0x4d55,	// (0x00041d30) compass_pane_t7

0x1410,	// (0x0003e3eb) navi_pane_cc_t1

0x1565,	// (0x0003e540) aid_phob_thumbnail_center_pane

0x5426,	// (0x00042401) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0004c33c) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0004c33c) list_cale_time_pane_t

0x0393,	// (0x0003d36e) bg_popup_window_pane_cp02_ParamLimits

0x0393,	// (0x0003d36e) bg_popup_window_pane_cp02

0x101c,	// (0x0003dff7) heading_pane_cp01_ParamLimits

0x101c,	// (0x0003dff7) heading_pane_cp01

0x1028,	// (0x0003e003) loc_req_pane_ParamLimits

0x1028,	// (0x0003e003) loc_req_pane

0x1038,	// (0x0003e013) loc_type_pane_ParamLimits

0x1038,	// (0x0003e013) loc_type_pane

0x104a,	// (0x0003e025) loc_type_pane_t1_ParamLimits

0x104a,	// (0x0003e025) loc_type_pane_t1

0x105c,	// (0x0003e037) loc_type_pane_t2_ParamLimits

0x105c,	// (0x0003e037) loc_type_pane_t2

0x106e,	// (0x0003e049) loc_type_pane_t3_ParamLimits

0x106e,	// (0x0003e049) loc_type_pane_t3

0x0002,

0xf368,	// (0x0004c343) loc_type_pane_t_ParamLimits

0xf368,	// (0x0004c343) loc_type_pane_t

0x1080,	// (0x0003e05b) list_loc_req_pane

0x108a,	// (0x0003e065) scroll_pane_cp012

0x4a0f,	// (0x000419ea) list_single_loc_request_popup_menu_pane_ParamLimits

0x4a0f,	// (0x000419ea) list_single_loc_request_popup_menu_pane

0x1095,	// (0x0003e070) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1095,	// (0x0003e070) list_single_loc_request_popup_menu_pane_g1

0x10a1,	// (0x0003e07c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x10a1,	// (0x0003e07c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0004c34a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0004c34a) list_single_loc_request_popup_menu_pane_g

0x10ad,	// (0x0003e088) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x10ad,	// (0x0003e088) list_single_loc_request_popup_menu_pane_t1

0x0997,	// (0x0003d972) bg_popup_window_pane_cp03_ParamLimits

0x0997,	// (0x0003d972) bg_popup_window_pane_cp03

0x4a1c,	// (0x000419f7) heading_loc_req_pane_ParamLimits

0x4a1c,	// (0x000419f7) heading_loc_req_pane

0x4a28,	// (0x00041a03) popup_dyc_status_message_window_g1_ParamLimits

0x4a28,	// (0x00041a03) popup_dyc_status_message_window_g1

0x4a3c,	// (0x00041a17) popup_dyc_status_message_window_t1_ParamLimits

0x4a3c,	// (0x00041a17) popup_dyc_status_message_window_t1

0x4a51,	// (0x00041a2c) popup_dyc_status_message_window_t2_ParamLimits

0x4a51,	// (0x00041a2c) popup_dyc_status_message_window_t2

0x4a66,	// (0x00041a41) popup_dyc_status_message_window_t3_ParamLimits

0x4a66,	// (0x00041a41) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0004c34f) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0004c34f) popup_dyc_status_message_window_t

0x073c,	// (0x0003d717) bg_heading_pane_cp01

0x10c3,	// (0x0003e09e) heading_loc_req_pane_g1

0x10cb,	// (0x0003e0a6) heading_loc_req_pane_g2

0x10d3,	// (0x0003e0ae) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0004c356) heading_loc_req_pane_g

0x10db,	// (0x0003e0b6) heading_loc_req_pane_t1

0x10eb,	// (0x0003e0c6) bg_popup_sub_pane_cp01_ParamLimits

0x10eb,	// (0x0003e0c6) bg_popup_sub_pane_cp01

0x10f9,	// (0x0003e0d4) popup_cale_events_window_g1_ParamLimits

0x10f9,	// (0x0003e0d4) popup_cale_events_window_g1

0x1119,	// (0x0003e0f4) popup_cale_events_window_g2_ParamLimits

0x1119,	// (0x0003e0f4) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0004c38a) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0004c38a) popup_cale_events_window_g

0x1139,	// (0x0003e114) popup_cale_events_window_t1_ParamLimits

0x1139,	// (0x0003e114) popup_cale_events_window_t1

0x114b,	// (0x0003e126) popup_cale_events_window_t2_ParamLimits

0x114b,	// (0x0003e126) popup_cale_events_window_t2

0x1189,	// (0x0003e164) popup_cale_events_window_t3_ParamLimits

0x1189,	// (0x0003e164) popup_cale_events_window_t3

0x11c3,	// (0x0003e19e) popup_cale_events_window_t4_ParamLimits

0x11c3,	// (0x0003e19e) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0004c38f) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0004c38f) popup_cale_events_window_t

0x4a9a,	// (0x00041a75) call_type_pane

0x4aaa,	// (0x00041a85) popup_call_status_window_g1

0x4abe,	// (0x00041a99) popup_call_status_window_g2

0x4ad2,	// (0x00041aad) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0004c398) popup_call_status_window_g

0x1207,	// (0x0003e1e2) call_type_pane_g1

0x1210,	// (0x0003e1eb) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0004c39f) call_type_pane_g

0x073c,	// (0x0003d717) bg_popup_sub_pane_cp02

0x1219,	// (0x0003e1f4) listscroll_popup_wml_pane

0x1221,	// (0x0003e1fc) list_wml_pane

0x122b,	// (0x0003e206) scroll_pane_cp013

0x1236,	// (0x0003e211) list_single_graphic_popup_wml_pane_ParamLimits

0x1236,	// (0x0003e211) list_single_graphic_popup_wml_pane

0x0ab7,	// (0x0003da92) list_single_graphic_popup_wml_pane_g1

0x124a,	// (0x0003e225) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0004c3a4) list_single_graphic_popup_wml_pane_g

0x1252,	// (0x0003e22d) list_single_graphic_popup_wml_pane_t1

0x1268,	// (0x0003e243) aid_call_pane

0x098f,	// (0x0003d96a) popup_clock_analogue_window_g1

0x098f,	// (0x0003d96a) popup_clock_analogue_window_g2

0xbfe3,	// (0x00048fbe) popup_clock_analogue_window_g3

0xbfe3,	// (0x00048fbe) popup_clock_analogue_window_g4

0x0ab7,	// (0x0003da92) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0004c3a9) popup_clock_analogue_window_g

0xbfeb,	// (0x00048fc6) popup_clock_analogue_window_t1

0xbff9,	// (0x00048fd4) clock_digital_number_pane_ParamLimits

0xbff9,	// (0x00048fd4) clock_digital_number_pane

0xc005,	// (0x00048fe0) clock_digital_number_pane_cp02_ParamLimits

0xc005,	// (0x00048fe0) clock_digital_number_pane_cp02

0xc011,	// (0x00048fec) clock_digital_number_pane_cp03_ParamLimits

0xc011,	// (0x00048fec) clock_digital_number_pane_cp03

0xc01d,	// (0x00048ff8) clock_digital_number_pane_cp04_ParamLimits

0xc01d,	// (0x00048ff8) clock_digital_number_pane_cp04

0xc029,	// (0x00049004) clock_digital_separator_pane_ParamLimits

0xc029,	// (0x00049004) clock_digital_separator_pane

0xc035,	// (0x00049010) popup_clock_digital_window_t1

0x0ab7,	// (0x0003da92) clock_digital_number_pane_g1

0x0ab7,	// (0x0003da92) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0004c317) clock_digital_number_pane_g

0x0ab7,	// (0x0003da92) clock_digital_separator_pane_g1

0x0ab7,	// (0x0003da92) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0004c317) clock_digital_separator_pane_g

0x073c,	// (0x0003d717) bg_popup_window_pane_cp04

0x1270,	// (0x0003e24b) heading_pane_cp03

0x1278,	// (0x0003e253) listscroll_popup_gms_pane

0x1280,	// (0x0003e25b) grid_large_graphic_popup_pane

0x128a,	// (0x0003e265) listscroll_popup_gms_pane_g1

0x1292,	// (0x0003e26d) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0004c3b4) listscroll_popup_gms_pane_g

0x0dc4,	// (0x0003dd9f) scroll_pane_cp014

0x4ae2,	// (0x00041abd) cell_large_graphic_popup_pane_ParamLimits

0x4ae2,	// (0x00041abd) cell_large_graphic_popup_pane

0x4afa,	// (0x00041ad5) cell_large_graphic_popup_pane_g1_ParamLimits

0x4afa,	// (0x00041ad5) cell_large_graphic_popup_pane_g1

0x129a,	// (0x0003e275) cell_large_graphic_popup_pane_g2_ParamLimits

0x129a,	// (0x0003e275) cell_large_graphic_popup_pane_g2

0x12a6,	// (0x0003e281) cell_large_graphic_popup_pane_g3_ParamLimits

0x12a6,	// (0x0003e281) cell_large_graphic_popup_pane_g3

0x12b3,	// (0x0003e28e) cell_large_graphic_popup_pane_g4_ParamLimits

0x12b3,	// (0x0003e28e) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0004c3b9) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0004c3b9) cell_large_graphic_popup_pane_g

0x12c3,	// (0x0003e29e) grid_highlight_pane_cp010

0x0ab7,	// (0x0003da92) bg_popup_call_pane_g1

0x12cd,	// (0x0003e2a8) list_single_graphic_popup_conf_pane_ParamLimits

0x12cd,	// (0x0003e2a8) list_single_graphic_popup_conf_pane

0x12df,	// (0x0003e2ba) list_highlight_pane_cp01

0x12e8,	// (0x0003e2c3) list_single_graphic_popup_conf_pane_g1

0x12f0,	// (0x0003e2cb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0004c3c2) list_single_graphic_popup_conf_pane_g

0x12f8,	// (0x0003e2d3) list_single_graphic_popup_conf_pane_t1

0x1306,	// (0x0003e2e1) linegrid_cams_pane_g1

0x4b06,	// (0x00041ae1) linegrid_cams_pane_g2

0x0bf5,	// (0x0003dbd0) linegrid_cams_pane_g3

0x130f,	// (0x0003e2ea) linegrid_cams_pane_g4

0x4b0f,	// (0x00041aea) linegrid_cams_pane_g5

0x4b18,	// (0x00041af3) linegrid_cams_pane_g6

0x0bfe,	// (0x0003dbd9) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0004c3c7) linegrid_cams_pane_g

0x1318,	// (0x0003e2f3) popup_clock_analogue_window

0x1318,	// (0x0003e2f3) popup_clock_digital_window

0x073c,	// (0x0003d717) popup_phob_thumbnail_window

0x0ab7,	// (0x0003da92) call_video_uplink_pane_g1

0x1321,	// (0x0003e2fc) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0004c3d6) call_video_uplink_pane_g

0x1329,	// (0x0003e304) video_uplink_pane

0x1331,	// (0x0003e30c) mce_image_pane_g1

0x4b23,	// (0x00041afe) mce_image_pane_g2

0x4b2d,	// (0x00041b08) mce_image_pane_g3

0x4b37,	// (0x00041b12) mce_image_pane_g4

0x4b3f,	// (0x00041b1a) mce_image_pane_g5

0x0004,

0xf400,	// (0x0004c3db) mce_image_pane_g

0x133b,	// (0x0003e316) control_top_pane_stacon_cp01_ParamLimits

0x133b,	// (0x0003e316) control_top_pane_stacon_cp01

0x134f,	// (0x0003e32a) uni_indicator_pane_stacon_cp01_ParamLimits

0x134f,	// (0x0003e32a) uni_indicator_pane_stacon_cp01

0x1360,	// (0x0003e33b) bg_popup_sub_pane_cp03

0x4b47,	// (0x00041b22) chi_dic_find_pane

0x4b4f,	// (0x00041b2a) listscroll_chi_dic_pane

0x4b58,	// (0x00041b33) main_pane_chidic_g1

0x4b6b,	// (0x00041b46) chi_dic_find_pane_t1

0x136a,	// (0x0003e345) find_chidic_pane

0x1373,	// (0x0003e34e) chi_dic_list_pane_ParamLimits

0x1373,	// (0x0003e34e) chi_dic_list_pane

0x1384,	// (0x0003e35f) scroll_pane_cp020

0x4b79,	// (0x00041b54) find_chidic_pane_t1

0x073c,	// (0x0003d717) input_focus_pane_cp06

0x4b88,	// (0x00041b63) list_chi_dic_pane_ParamLimits

0x4b88,	// (0x00041b63) list_chi_dic_pane

0x4b9a,	// (0x00041b75) list_chi_dic_pane_t1_ParamLimits

0x4b9a,	// (0x00041b75) list_chi_dic_pane_t1

0x073c,	// (0x0003d717) list_highlight_pane_cp020

0x138c,	// (0x0003e367) bg_cale_heading_pane_g1

0x4bad,	// (0x00041b88) bg_cale_heading_pane_g2

0x4bb5,	// (0x00041b90) bg_cale_heading_pane_g3

0x4bbd,	// (0x00041b98) bg_cale_heading_pane_g4

0x4bc5,	// (0x00041ba0) bg_cale_heading_pane_g5

0x4bcd,	// (0x00041ba8) bg_cale_heading_pane_g6

0x4bd5,	// (0x00041bb0) bg_cale_heading_pane_g7

0x4bdd,	// (0x00041bb8) bg_cale_heading_pane_g8

0x4be5,	// (0x00041bc0) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0004c3e6) bg_cale_heading_pane_g

0x138c,	// (0x0003e367) bg_cale_side_pane_g1

0x4bed,	// (0x00041bc8) bg_cale_side_pane_g2

0x4bf7,	// (0x00041bd2) bg_cale_side_pane_g3

0x4c01,	// (0x00041bdc) bg_cale_side_pane_g4

0x4c0b,	// (0x00041be6) bg_cale_side_pane_g5

0x4c15,	// (0x00041bf0) bg_cale_side_pane_g6

0x4c1f,	// (0x00041bfa) bg_cale_side_pane_g7

0x4c29,	// (0x00041c04) bg_cale_side_pane_g8

0x4c31,	// (0x00041c0c) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0004c3f9) bg_cale_side_pane_g

0x4c39,	// (0x00041c14) popup_call_status_window_ParamLimits

0x4c39,	// (0x00041c14) popup_call_status_window

0x1394,	// (0x0003e36f) stacon_top_pane

0x139c,	// (0x0003e377) status_pane_ParamLimits

0x139c,	// (0x0003e377) status_pane

0x13b1,	// (0x0003e38c) status_small_pane

0x13b9,	// (0x0003e394) control_pane

0x073c,	// (0x0003d717) stacon_bottom_pane

0x13c1,	// (0x0003e39c) list_single_mce_smart_pane_t1_ParamLimits

0x13c1,	// (0x0003e39c) list_single_mce_smart_pane_t1

0x13d4,	// (0x0003e3af) list_single_mce_smart_pane_t2_ParamLimits

0x13d4,	// (0x0003e3af) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0004c40c) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0004c40c) list_single_mce_smart_pane_t

0x4c86,	// (0x00041c61) compass_pane

0x4c91,	// (0x00041c6c) main_location2_pane_t1

0x4ca7,	// (0x00041c82) main_location2_pane_t2

0x4cbd,	// (0x00041c98) main_location2_pane_t3

0x0003,

0xf436,	// (0x0004c411) main_location2_pane_t

0x13f3,	// (0x0003e3ce) compass_pane_g1_ParamLimits

0x13f3,	// (0x0003e3ce) compass_pane_g1

0x4d0b,	// (0x00041ce6) compass_pane_t1

0x4d1a,	// (0x00041cf5) compass_pane_t2

0x0005,

0xf43f,	// (0x0004c41a) compass_pane_t

0x4d65,	// (0x00041d40) text_secondary_cp61

0x1407,	// (0x0003e3e2) navi_pane_cams_g5

0x142a,	// (0x0003e405) navi_pane_im_t1

0x1438,	// (0x0003e413) navi_pane_mp_g1_ParamLimits

0x1438,	// (0x0003e413) navi_pane_mp_g1

0x144c,	// (0x0003e427) navi_pane_mp_g2_ParamLimits

0x144c,	// (0x0003e427) navi_pane_mp_g2

0x1458,	// (0x0003e433) navi_pane_mp_g3_ParamLimits

0x1458,	// (0x0003e433) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0004c42e) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0004c42e) navi_pane_mp_g

0x1464,	// (0x0003e43f) navi_pane_mp_t1

0x1472,	// (0x0003e44d) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0004c435) navi_pane_mp_t

0x14ae,	// (0x0003e489) navi_pane_vt_g1

0x1464,	// (0x0003e43f) navi_pane_vt_t1

0x14b6,	// (0x0003e491) navi_slider_pane

0x14be,	// (0x0003e499) zooming_pane

0x14c6,	// (0x0003e4a1) navi_slider_pane_g1

0xc052,	// (0x0004902d) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0004c43c) navi_slider_pane_g

0x14ea,	// (0x0003e4c5) aid_levels_zoom

0x14f2,	// (0x0003e4cd) zooming_pane_g1

0x14fa,	// (0x0003e4d5) zooming_pane_g2

0x14fa,	// (0x0003e4d5) zooming_pane_g3

0x0002,

0xf470,	// (0x0004c44b) zooming_pane_g

0x1502,	// (0x0003e4dd) level_10_zoom

0x150b,	// (0x0003e4e6) level_11_zoom

0x1514,	// (0x0003e4ef) level_1_zoom

0x151d,	// (0x0003e4f8) level_2_zoom

0x1526,	// (0x0003e501) level_3_zoom

0x152f,	// (0x0003e50a) level_4_zoom

0x1538,	// (0x0003e513) level_5_zoom

0x1541,	// (0x0003e51c) level_6_zoom

0x154a,	// (0x0003e525) level_7_zoom

0x1553,	// (0x0003e52e) level_8_zoom

0x155c,	// (0x0003e537) level_9_zoom

0x156d,	// (0x0003e548) popup_phob_thumbnail_window_g1

0x1575,	// (0x0003e550) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0004c452) popup_phob_thumbnail_window_g

0x6c17,	// (0x00043bf2) level_1_location

0x6c1f,	// (0x00043bfa) level_2_location

0x6c27,	// (0x00043c02) level_3_location

0x6c2f,	// (0x00043c0a) level_4_location

0x14be,	// (0x0003e499) level_5_location

0x4e90,	// (0x00041e6b) mce_icon_pane_g1

0x4e98,	// (0x00041e73) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0004c457) mce_icon_pane_g

0x4ea0,	// (0x00041e7b) main_mup_pane_g1_ParamLimits

0x4ea0,	// (0x00041e7b) main_mup_pane_g1

0x4eb6,	// (0x00041e91) main_mup_pane_g2_ParamLimits

0x4eb6,	// (0x00041e91) main_mup_pane_g2

0x4ece,	// (0x00041ea9) main_mup_pane_g3_ParamLimits

0x4ece,	// (0x00041ea9) main_mup_pane_g3

0x4ee6,	// (0x00041ec1) main_mup_pane_g4_ParamLimits

0x4ee6,	// (0x00041ec1) main_mup_pane_g4

0x4ef8,	// (0x00041ed3) main_mup_pane_g5_ParamLimits

0x4ef8,	// (0x00041ed3) main_mup_pane_g5

0x4f14,	// (0x00041eef) main_mup_pane_g6_ParamLimits

0x4f14,	// (0x00041eef) main_mup_pane_g6

0x4f2e,	// (0x00041f09) main_mup_pane_g7_ParamLimits

0x4f2e,	// (0x00041f09) main_mup_pane_g7

0x4f4c,	// (0x00041f27) main_mup_pane_g8_ParamLimits

0x4f4c,	// (0x00041f27) main_mup_pane_g8

0x4f6a,	// (0x00041f45) main_mup_pane_g9_ParamLimits

0x4f6a,	// (0x00041f45) main_mup_pane_g9

0x4f86,	// (0x00041f61) main_mup_pane_g10_ParamLimits

0x4f86,	// (0x00041f61) main_mup_pane_g10

0x4fa4,	// (0x00041f7f) main_mup_pane_g11_ParamLimits

0x4fa4,	// (0x00041f7f) main_mup_pane_g11

0x4fbe,	// (0x00041f99) main_mup_pane_g12_ParamLimits

0x4fbe,	// (0x00041f99) main_mup_pane_g12

0x4fd4,	// (0x00041faf) main_mup_pane_g13_ParamLimits

0x4fd4,	// (0x00041faf) main_mup_pane_g13

0x000c,

0xf481,	// (0x0004c45c) main_mup_pane_g_ParamLimits

0xf481,	// (0x0004c45c) main_mup_pane_g

0x4fe8,	// (0x00041fc3) main_mup_pane_t1_ParamLimits

0x4fe8,	// (0x00041fc3) main_mup_pane_t1

0x5004,	// (0x00041fdf) main_mup_pane_t2_ParamLimits

0x5004,	// (0x00041fdf) main_mup_pane_t2

0x501c,	// (0x00041ff7) main_mup_pane_t3_ParamLimits

0x501c,	// (0x00041ff7) main_mup_pane_t3

0x5034,	// (0x0004200f) main_mup_pane_t4_ParamLimits

0x5034,	// (0x0004200f) main_mup_pane_t4

0x5052,	// (0x0004202d) main_mup_pane_t5_ParamLimits

0x5052,	// (0x0004202d) main_mup_pane_t5

0x5067,	// (0x00042042) main_mup_pane_t6_ParamLimits

0x5067,	// (0x00042042) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0004c477) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0004c477) main_mup_pane_t

0x5079,	// (0x00042054) mup_progress_pane_ParamLimits

0x5079,	// (0x00042054) mup_progress_pane

0x5085,	// (0x00042060) mup_visualizer_pane_ParamLimits

0x5085,	// (0x00042060) mup_visualizer_pane

0x50b9,	// (0x00042094) mup_volume_pane_ParamLimits

0x50b9,	// (0x00042094) mup_volume_pane

0x11f9,	// (0x0003e1d4) mup_visualizer_pane_g1_ParamLimits

0x11f9,	// (0x0003e1d4) mup_visualizer_pane_g1

0x11f9,	// (0x0003e1d4) mup_visualizer_pane_g2_ParamLimits

0x11f9,	// (0x0003e1d4) mup_visualizer_pane_g2

0x13f3,	// (0x0003e3ce) mup_visualizer_pane_g3_ParamLimits

0x13f3,	// (0x0003e3ce) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0004c484) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0004c484) mup_visualizer_pane_g

0x0ab7,	// (0x0003da92) mup_volume_pane_g1

0x1585,	// (0x0003e560) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0004c48b) mup_volume_pane_g

0x0ab7,	// (0x0003da92) mup_progress_pane_g1

0x158e,	// (0x0003e569) mup_progress_pane_g2

0x1597,	// (0x0003e572) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0004c490) mup_progress_pane_g

0x073c,	// (0x0003d717) bg_popup_window_pane_cp05

0x15a0,	// (0x0003e57b) heading_pane_cp02_ParamLimits

0x15a0,	// (0x0003e57b) heading_pane_cp02

0x15bc,	// (0x0003e597) list_popup_blid_pane

0x15c4,	// (0x0003e59f) list_blid_sat_info_pane_ParamLimits

0x15c4,	// (0x0003e59f) list_blid_sat_info_pane

0x15d7,	// (0x0003e5b2) list_blid_sat_info_pane_g1

0x15df,	// (0x0003e5ba) list_blid_sat_info_pane_t1

0x51e3,	// (0x000421be) mup_equalizer_pane_ParamLimits

0x51e3,	// (0x000421be) mup_equalizer_pane

0x5204,	// (0x000421df) mup_equalizer_pane_cp1_ParamLimits

0x5204,	// (0x000421df) mup_equalizer_pane_cp1

0x5225,	// (0x00042200) mup_equalizer_pane_cp2_ParamLimits

0x5225,	// (0x00042200) mup_equalizer_pane_cp2

0x524a,	// (0x00042225) mup_equalizer_pane_cp3_ParamLimits

0x524a,	// (0x00042225) mup_equalizer_pane_cp3

0x5273,	// (0x0004224e) mup_equalizer_pane_cp4_ParamLimits

0x5273,	// (0x0004224e) mup_equalizer_pane_cp4

0x529c,	// (0x00042277) mup_equalizer_pane_cp5

0x52b4,	// (0x0004228f) mup_equalizer_pane_cp6

0x52cc,	// (0x000422a7) mup_equalizer_pane_cp7

0x6a05,	// (0x000439e0) bg_popup_call_poc_act_pane_g9

0x6a0d,	// (0x000439e8) bg_popup_call_poc_act_pane_g10

0x6a15,	// (0x000439f0) bg_popup_call_poc_act_pane_g11

0x000a,

0x0997,	// (0x0003d972) mup_scale_pane

0x0ab7,	// (0x0003da92) mup_scale_pane_g1

0x15ed,	// (0x0003e5c8) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0004c4ac) mup_scale_pane_g

0x1611,	// (0x0003e5ec) msg_data_pane

0x1619,	// (0x0003e5f4) scroll_pane_cp017

0x2664,	// (0x0003f63f) bg_list_pane_cp04_ParamLimits

0x2664,	// (0x0003f63f) bg_list_pane_cp04

0x1621,	// (0x0003e5fc) msg_data_pane_g1

0x52f6,	// (0x000422d1) msg_data_pane_g2

0x5300,	// (0x000422db) msg_data_pane_g3

0x530a,	// (0x000422e5) msg_data_pane_g4

0x5312,	// (0x000422ed) msg_data_pane_g5

0x531a,	// (0x000422f5) msg_data_pane_g6

0x5322,	// (0x000422fd) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0004c4bb) msg_data_pane_g

0x268a,	// (0x0003f665) msg_text_pane_ParamLimits

0x268a,	// (0x0003f665) msg_text_pane

0x532a,	// (0x00042305) qrid_highlight_pane_cp011_ParamLimits

0x532a,	// (0x00042305) qrid_highlight_pane_cp011

0x073c,	// (0x0003d717) msg_body_pane

0x073c,	// (0x0003d717) msg_header_pane

0x1632,	// (0x0003e60d) input_focus_pane_cp07

0x26c9,	// (0x0003f6a4) msg_header_pane_t1_ParamLimits

0x26c9,	// (0x0003f6a4) msg_header_pane_t1

0x26dd,	// (0x0003f6b8) msg_header_pane_t2_ParamLimits

0x26dd,	// (0x0003f6b8) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0004c4cf) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0004c4cf) msg_header_pane_t

0x1647,	// (0x0003e622) msg_body_pane_g1

0x26ef,	// (0x0003f6ca) msg_body_pane_t1_ParamLimits

0x26ef,	// (0x0003f6ca) msg_body_pane_t1

0x2720,	// (0x0003f6fb) msg_body_pane_t2_ParamLimits

0x2720,	// (0x0003f6fb) msg_body_pane_t2

0x2732,	// (0x0003f70d) msg_body_pane_t3_ParamLimits

0x2732,	// (0x0003f70d) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0004c4d4) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0004c4d4) msg_body_pane_t

0x537a,	// (0x00042355) main_viewer_pane_g1_ParamLimits

0x537a,	// (0x00042355) main_viewer_pane_g1

0x5388,	// (0x00042363) main_viewer_pane_g2_ParamLimits

0x5388,	// (0x00042363) main_viewer_pane_g2

0x5396,	// (0x00042371) main_viewer_pane_g3_ParamLimits

0x5396,	// (0x00042371) main_viewer_pane_g3

0x53a5,	// (0x00042380) main_viewer_pane_g4_ParamLimits

0x53a5,	// (0x00042380) main_viewer_pane_g4

0xc07c,	// (0x00049057) main_viewer_pane_g5_ParamLimits

0xc07c,	// (0x00049057) main_viewer_pane_g5

0xc07c,	// (0x00049057) main_viewer_pane_g7_ParamLimits

0xc07c,	// (0x00049057) main_viewer_pane_g7

0xc08e,	// (0x00049069) main_viewer_pane_g8_ParamLimits

0xc08e,	// (0x00049069) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0004c4e4) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0004c4e4) main_viewer_pane_g

0x164f,	// (0x0003e62a) viewer_content_pane_ParamLimits

0x164f,	// (0x0003e62a) viewer_content_pane

0x53e3,	// (0x000423be) main_postcard_pane_g1_ParamLimits

0x53e3,	// (0x000423be) main_postcard_pane_g1

0x53f9,	// (0x000423d4) main_postcard_pane_g2_ParamLimits

0x53f9,	// (0x000423d4) main_postcard_pane_g2

0x540f,	// (0x000423ea) main_postcard_pane_g3_ParamLimits

0x540f,	// (0x000423ea) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0004c4f5) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0004c4f5) main_postcard_pane_g

0x5426,	// (0x00042401) main_postcard_pane_g4

0x72eb,	// (0x000442c6) smil_status_volume_pane_g2

0x5469,	// (0x00042444) postcard_pane_ParamLimits

0x5469,	// (0x00042444) postcard_pane

0x166b,	// (0x0003e646) postcard_pane_g1_ParamLimits

0x166b,	// (0x0003e646) postcard_pane_g1

0x54b9,	// (0x00042494) postcard_pane_g2_ParamLimits

0x54b9,	// (0x00042494) postcard_pane_g2

0x54c5,	// (0x000424a0) postcard_pane_g3_ParamLimits

0x54c5,	// (0x000424a0) postcard_pane_g3

0x165d,	// (0x0003e638) postcard_pane_g4_ParamLimits

0x165d,	// (0x0003e638) postcard_pane_g4

0x54d1,	// (0x000424ac) postcard_pane_g5_ParamLimits

0x54d1,	// (0x000424ac) postcard_pane_g5

0x54e3,	// (0x000424be) postcard_pane_g6_ParamLimits

0x54e3,	// (0x000424be) postcard_pane_g6

0x166b,	// (0x0003e646) postcard_pane_g7_ParamLimits

0x166b,	// (0x0003e646) postcard_pane_g7

0x0006,

0xf527,	// (0x0004c502) postcard_pane_g_ParamLimits

0xf527,	// (0x0004c502) postcard_pane_g

0x54fb,	// (0x000424d6) main_mp2_pane_g1_ParamLimits

0x54fb,	// (0x000424d6) main_mp2_pane_g1

0x5509,	// (0x000424e4) main_mp2_pane_g2_ParamLimits

0x5509,	// (0x000424e4) main_mp2_pane_g2

0x5515,	// (0x000424f0) main_mp2_pane_g3_ParamLimits

0x5515,	// (0x000424f0) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0004c511) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0004c511) main_mp2_pane_g

0x5521,	// (0x000424fc) main_mp2_pane_t1_ParamLimits

0x5521,	// (0x000424fc) main_mp2_pane_t1

0x5538,	// (0x00042513) main_mp2_pane_t2_ParamLimits

0x5538,	// (0x00042513) main_mp2_pane_t2

0x554c,	// (0x00042527) main_mp2_pane_t3_ParamLimits

0x554c,	// (0x00042527) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0004c518) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0004c518) main_mp2_pane_t

0x1679,	// (0x0003e654) pec_content_pane_ParamLimits

0x1679,	// (0x0003e654) pec_content_pane

0x0dc4,	// (0x0003dd9f) scroll_pane_cp015

0x168b,	// (0x0003e666) pec_attribute_pane_ParamLimits

0x168b,	// (0x0003e666) pec_attribute_pane

0x555e,	// (0x00042539) pec_content_pane_g1_ParamLimits

0x555e,	// (0x00042539) pec_content_pane_g1

0x169b,	// (0x0003e676) pec_content_pane_t1_ParamLimits

0x169b,	// (0x0003e676) pec_content_pane_t1

0x16ad,	// (0x0003e688) pec_content_pane_t2_ParamLimits

0x16ad,	// (0x0003e688) pec_content_pane_t2

0x0001,

0xf544,	// (0x0004c51f) pec_content_pane_t_ParamLimits

0xf544,	// (0x0004c51f) pec_content_pane_t

0x556a,	// (0x00042545) list_single_graphic_pane_cp01_ParamLimits

0x556a,	// (0x00042545) list_single_graphic_pane_cp01

0x0997,	// (0x0003d972) bg_popup_sub_pane_cp04

0x16bf,	// (0x0003e69a) popup_mup_playback_window_g1

0x16cb,	// (0x0003e6a6) popup_mup_playback_window_t1

0x16e0,	// (0x0003e6bb) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0004c524) popup_mup_playback_window_t

0x1717,	// (0x0003e6f2) main_image_pane_g1_ParamLimits

0x1717,	// (0x0003e6f2) main_image_pane_g1

0x563c,	// (0x00042617) scroll_pane_cp018_ParamLimits

0x563c,	// (0x00042617) scroll_pane_cp018

0x5654,	// (0x0004262f) scroll_pane_cp016_ParamLimits

0x5654,	// (0x0004262f) scroll_pane_cp016

0x5688,	// (0x00042663) smil2_image_pane_ParamLimits

0x5688,	// (0x00042663) smil2_image_pane

0x56be,	// (0x00042699) smil2_root_pane_ParamLimits

0x56be,	// (0x00042699) smil2_root_pane

0x56f6,	// (0x000426d1) smil2_text_pane_ParamLimits

0x56f6,	// (0x000426d1) smil2_text_pane

0x073c,	// (0x0003d717) bg_list_pane_cp06

0x578e,	// (0x00042769) grid_radio_pane

0x073c,	// (0x0003d717) bg_popup_window_pane_cp06

0x5798,	// (0x00042773) main_fmradio_pane_t1

0x1270,	// (0x0003e24b) heading_pane_cp04

0x57a6,	// (0x00042781) main_fmradio_pane_t2

0x6aa8,	// (0x00043a83) popup_cale_lunar_info_window_g1

0x57b4,	// (0x0004278f) main_fmradio_pane_t3

0x6ab0,	// (0x00043a8b) popup_cale_lunar_info_window_g2

0x57c4,	// (0x0004279f) main_fmradio_pane_t4

0x0001,

0x57d2,	// (0x000427ad) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0004c5ff) popup_cale_lunar_info_window_g

0xf55e,	// (0x0004c539) main_fmradio_pane_t

0x57e0,	// (0x000427bb) wait_bar_pane_cp03

0x57e8,	// (0x000427c3) cell_fmradio_pane_ParamLimits

0x57e8,	// (0x000427c3) cell_fmradio_pane

0x166b,	// (0x0003e646) cell_fmradio_pane_g1_ParamLimits

0x166b,	// (0x0003e646) cell_fmradio_pane_g1

0x073c,	// (0x0003d717) grid_highlight_pane_cp011

0x57fd,	// (0x000427d8) poc_content_pane_ParamLimits

0x57fd,	// (0x000427d8) poc_content_pane

0x580f,	// (0x000427ea) scroll_pane_cp019

0x5817,	// (0x000427f2) popup_call_poc_act_window_ParamLimits

0x5817,	// (0x000427f2) popup_call_poc_act_window

0x583b,	// (0x00042816) popup_call_poc_inact_window_ParamLimits

0x583b,	// (0x00042816) popup_call_poc_inact_window

0xf5fb,	// (0x0004c5d6) bg_popup_call_poc_act_pane_g

0x698d,	// (0x00043968) bg_popup_call_poc_inact_pane_g1

0x6995,	// (0x00043970) bg_popup_call_poc_inact_pane_g2

0x5854,	// (0x0004282f) popup_call_poc_act_window_g2

0x699d,	// (0x00043978) bg_popup_call_poc_inact_pane_g3

0x69a5,	// (0x00043980) bg_popup_call_poc_inact_pane_g4

0x69ad,	// (0x00043988) bg_popup_call_poc_inact_pane_g5

0x585c,	// (0x00042837) popup_call_poc_act_window_t1_ParamLimits

0x585c,	// (0x00042837) popup_call_poc_act_window_t1

0x5884,	// (0x0004285f) popup_call_poc_act_window_t2_ParamLimits

0x5884,	// (0x0004285f) popup_call_poc_act_window_t2

0x58ac,	// (0x00042887) popup_call_poc_act_window_t3_ParamLimits

0x58ac,	// (0x00042887) popup_call_poc_act_window_t3

0x58d4,	// (0x000428af) popup_call_poc_act_window_t4_ParamLimits

0x58d4,	// (0x000428af) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0004c544) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0004c544) popup_call_poc_act_window_t

0x69b5,	// (0x00043990) bg_popup_call_poc_inact_pane_g6

0x69bd,	// (0x00043998) bg_popup_call_poc_inact_pane_g7

0x69c5,	// (0x000439a0) bg_popup_call_poc_inact_pane_g8

0x58e6,	// (0x000428c1) popup_call_poc_inact_window_g2

0x69cd,	// (0x000439a8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0004c5c3) bg_popup_call_poc_inact_pane_g

0x58ee,	// (0x000428c9) popup_call_poc_inact_window_t1_ParamLimits

0x58ee,	// (0x000428c9) popup_call_poc_inact_window_t1

0x5903,	// (0x000428de) popup_call_poc_inact_window_t2_ParamLimits

0x5903,	// (0x000428de) popup_call_poc_inact_window_t2

0x5918,	// (0x000428f3) popup_call_poc_inact_window_t3_ParamLimits

0x5918,	// (0x000428f3) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0004c54d) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0004c54d) popup_call_poc_inact_window_t

0x7181,	// (0x0004415c) context_pane_ParamLimits

0x71e4,	// (0x000441bf) signal_pane_ParamLimits

0x14be,	// (0x0003e499) main_call2_pane

0x7113,	// (0x000440ee) popup_phob_thumbnail2_window_ParamLimits

0x7113,	// (0x000440ee) popup_phob_thumbnail2_window

0xc064,	// (0x0004903f) aid_hotspot_pointer_arrow_pane

0xc06c,	// (0x00049047) aid_hotspot_pointer_hand_pane

0x6bdf,	// (0x00043bba) phob_pre_status_pane_g5

0x39e7,	// (0x000409c2) cams_zoom_pane_ParamLimits

0x39f6,	// (0x000409d1) image_vga_pane_ParamLimits

0x3a10,	// (0x000409eb) main_camera_pane_g1_ParamLimits

0x3a22,	// (0x000409fd) main_camera_pane_g2_ParamLimits

0x3a32,	// (0x00040a0d) main_camera_pane_g3_ParamLimits

0x3a46,	// (0x00040a21) main_camera_pane_g4_ParamLimits

0x3a5a,	// (0x00040a35) main_camera_pane_g5_ParamLimits

0x3a6e,	// (0x00040a49) main_camera_pane_g6_ParamLimits

0x3a82,	// (0x00040a5d) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0004c24c) main_camera_pane_g_ParamLimits

0x3a96,	// (0x00040a71) main_camera_pane_t1_ParamLimits

0x3aac,	// (0x00040a87) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0004c25d) main_camera_pane_t_ParamLimits

0x0997,	// (0x0003d972) bg_popup_preview_window_pane_cp01_ParamLimits

0x0997,	// (0x0003d972) bg_popup_preview_window_pane_cp01

0x592d,	// (0x00042908) popup_phob_thumbnail2_window_g1_ParamLimits

0x592d,	// (0x00042908) popup_phob_thumbnail2_window_g1

0x073c,	// (0x0003d717) call2_cli_visual_pane

0x5954,	// (0x0004292f) popup_call2_audio_conf_window_ParamLimits

0x5954,	// (0x0004292f) popup_call2_audio_conf_window

0x597c,	// (0x00042957) popup_call2_audio_first_window_ParamLimits

0x597c,	// (0x00042957) popup_call2_audio_first_window

0x5a12,	// (0x000429ed) popup_call2_audio_in_window_ParamLimits

0x5a12,	// (0x000429ed) popup_call2_audio_in_window

0x5a5e,	// (0x00042a39) popup_call2_audio_out_window_ParamLimits

0x5a5e,	// (0x00042a39) popup_call2_audio_out_window

0x5ad0,	// (0x00042aab) popup_call2_audio_second_window_ParamLimits

0x5ad0,	// (0x00042aab) popup_call2_audio_second_window

0x5b36,	// (0x00042b11) popup_call2_audio_wait_window_ParamLimits

0x5b36,	// (0x00042b11) popup_call2_audio_wait_window

0x073c,	// (0x0003d717) bg_popup_call2_act_pane_cp03

0x0979,	// (0x0003d954) list_conf_pane_cp

0x5b70,	// (0x00042b4b) popup_call2_audio_conf_window_t1

0x5b7e,	// (0x00042b59) list_single_graphic_popup_conf2_pane_ParamLimits

0x5b7e,	// (0x00042b59) list_single_graphic_popup_conf2_pane

0x12df,	// (0x0003e2ba) list_highlight_pane_cp04

0x5b91,	// (0x00042b6c) list_single_graphic_popup_conf2_pane_g1

0x12f0,	// (0x0003e2cb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0004c554) list_single_graphic_popup_conf2_pane_g

0x5b9b,	// (0x00042b76) list_single_graphic_popup_conf2_pane_t1

0x5ba9,	// (0x00042b84) bg_popup_call2_act_pane_cp01_ParamLimits

0x5ba9,	// (0x00042b84) bg_popup_call2_act_pane_cp01

0x5c33,	// (0x00042c0e) call_type_pane_cp05_ParamLimits

0x5c33,	// (0x00042c0e) call_type_pane_cp05

0x5c87,	// (0x00042c62) popup_call2_audio_second_window_g1_ParamLimits

0x5c87,	// (0x00042c62) popup_call2_audio_second_window_g1

0x5cdb,	// (0x00042cb6) popup_call2_audio_second_window_g2_ParamLimits

0x5cdb,	// (0x00042cb6) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0004c559) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0004c559) popup_call2_audio_second_window_g

0x5d40,	// (0x00042d1b) popup_call2_audio_second_window_t1_ParamLimits

0x5d40,	// (0x00042d1b) popup_call2_audio_second_window_t1

0x5dfb,	// (0x00042dd6) popup_call2_audio_second_window_t2_ParamLimits

0x5dfb,	// (0x00042dd6) popup_call2_audio_second_window_t2

0x5e4e,	// (0x00042e29) popup_call2_audio_second_window_t3_ParamLimits

0x5e4e,	// (0x00042e29) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0004c560) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0004c560) popup_call2_audio_second_window_t

0x073c,	// (0x0003d717) bg_popup_call2_in_pane_cp02

0x0746,	// (0x0003d721) call_type_pane_cp04

0x074e,	// (0x0003d729) popup_call2_audio_wait_window_g1

0x0756,	// (0x0003d731) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0004c139) popup_call2_audio_wait_window_g

0x075e,	// (0x0003d739) popup_call2_audio_wait_window_t3

0x5f41,	// (0x00042f1c) bg_popup_call2_act_pane_ParamLimits

0x5f41,	// (0x00042f1c) bg_popup_call2_act_pane

0x6001,	// (0x00042fdc) call_type_pane_cp03_ParamLimits

0x6001,	// (0x00042fdc) call_type_pane_cp03

0x6065,	// (0x00043040) popup_call2_audio_first_window_g1_ParamLimits

0x6065,	// (0x00043040) popup_call2_audio_first_window_g1

0x60d5,	// (0x000430b0) popup_call2_audio_first_window_g2_ParamLimits

0x60d5,	// (0x000430b0) popup_call2_audio_first_window_g2

0x11f9,	// (0x0003e1d4) popup_call2_audio_first_window_g3_ParamLimits

0x11f9,	// (0x0003e1d4) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0004c569) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0004c569) popup_call2_audio_first_window_g

0x61b3,	// (0x0004318e) popup_call2_audio_first_window_t1_ParamLimits

0x61b3,	// (0x0004318e) popup_call2_audio_first_window_t1

0x62b6,	// (0x00043291) popup_call2_audio_first_window_t4_ParamLimits

0x62b6,	// (0x00043291) popup_call2_audio_first_window_t4

0x6399,	// (0x00043374) popup_call2_audio_first_window_t5_ParamLimits

0x6399,	// (0x00043374) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0004c574) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0004c574) popup_call2_audio_first_window_t

0x098f,	// (0x0003d96a) bg_popup_call2_act_pane_g1

0x6aba,	// (0x00043a95) popup_cale_lunar_info_window_t1

0x6ac8,	// (0x00043aa3) popup_cale_lunar_info_window_t2

0x6ad6,	// (0x00043ab1) popup_cale_lunar_info_window_t3

0x073c,	// (0x0003d717) bg_popup_call2_bubble_pane

0x649a,	// (0x00043475) bg_popup_call2_in_pane_cp01_ParamLimits

0x649a,	// (0x00043475) bg_popup_call2_in_pane_cp01

0x0418,	// (0x0003d3f3) call_type_pane_cp02

0x64e2,	// (0x000434bd) popup_call2_audio_out_window_g1_ParamLimits

0x64e2,	// (0x000434bd) popup_call2_audio_out_window_g1

0x650e,	// (0x000434e9) popup_call2_audio_out_window_g2_ParamLimits

0x650e,	// (0x000434e9) popup_call2_audio_out_window_g2

0x6536,	// (0x00043511) popup_call2_audio_out_window_g3_ParamLimits

0x6536,	// (0x00043511) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0004c57d) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0004c57d) popup_call2_audio_out_window_g

0x6571,	// (0x0004354c) popup_call2_audio_out_window_t1_ParamLimits

0x6571,	// (0x0004354c) popup_call2_audio_out_window_t1

0x65d0,	// (0x000435ab) popup_call2_audio_out_window_t2_ParamLimits

0x65d0,	// (0x000435ab) popup_call2_audio_out_window_t2

0x6624,	// (0x000435ff) popup_call2_audio_out_window_t3_ParamLimits

0x6624,	// (0x000435ff) popup_call2_audio_out_window_t3

0x663a,	// (0x00043615) popup_call2_audio_out_window_t4_ParamLimits

0x663a,	// (0x00043615) popup_call2_audio_out_window_t4

0x6650,	// (0x0004362b) popup_call2_audio_out_window_t5_ParamLimits

0x6650,	// (0x0004362b) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0004c586) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0004c586) popup_call2_audio_out_window_t

0x66b4,	// (0x0004368f) bg_popup_call2_in_pane_ParamLimits

0x66b4,	// (0x0004368f) bg_popup_call2_in_pane

0x6710,	// (0x000436eb) popup_call2_audio_in_window_g1_ParamLimits

0x6710,	// (0x000436eb) popup_call2_audio_in_window_g1

0x6748,	// (0x00043723) popup_call2_audio_in_window_g2_ParamLimits

0x6748,	// (0x00043723) popup_call2_audio_in_window_g2

0x6780,	// (0x0004375b) popup_call2_audio_in_window_g3_ParamLimits

0x6780,	// (0x0004375b) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0004c593) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0004c593) popup_call2_audio_in_window_g

0x67d8,	// (0x000437b3) popup_call2_audio_in_window_t1_ParamLimits

0x67d8,	// (0x000437b3) popup_call2_audio_in_window_t1

0x6858,	// (0x00043833) popup_call2_audio_in_window_t2_ParamLimits

0x6858,	// (0x00043833) popup_call2_audio_in_window_t2

0x68d8,	// (0x000438b3) popup_call2_audio_in_window_t3_ParamLimits

0x68d8,	// (0x000438b3) popup_call2_audio_in_window_t3

0x68f2,	// (0x000438cd) popup_call2_audio_in_window_t4_ParamLimits

0x68f2,	// (0x000438cd) popup_call2_audio_in_window_t4

0x6904,	// (0x000438df) popup_call2_audio_in_window_t5_ParamLimits

0x6904,	// (0x000438df) popup_call2_audio_in_window_t5

0x6919,	// (0x000438f4) popup_call2_audio_in_window_t6_ParamLimits

0x6919,	// (0x000438f4) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0004c59c) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0004c59c) popup_call2_audio_in_window_t

0x098f,	// (0x0003d96a) bg_popup_call2_in_pane_g1

0x6ae4,	// (0x00043abf) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0004c604) popup_cale_lunar_info_window_t

0x0997,	// (0x0003d972) bg_popup_call2_rect_pane_ParamLimits

0x0997,	// (0x0003d972) bg_popup_call2_rect_pane

0x073c,	// (0x0003d717) call2_cli_visual_graphic_pane

0x073c,	// (0x0003d717) call2_cli_visual_text_pane

0xc0a6,	// (0x00049081) smil_status_volume_pane_g3

0x0002,

0x0ab7,	// (0x0003da92) call2_cli_visual_graphic_pane_g1

0x0ab7,	// (0x0003da92) call2_cli_visual_graphic_pane_g2

0x0ab7,	// (0x0003da92) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0004c5a9) call2_cli_visual_graphic_pane_g

0x694d,	// (0x00043928) bg_popup_call2_rect_pane_g1

0x0b55,	// (0x0003db30) bg_popup_call2_rect_pane_g2

0x6955,	// (0x00043930) bg_popup_call2_rect_pane_g3

0x695d,	// (0x00043938) bg_popup_call2_rect_pane_g4

0x6965,	// (0x00043940) bg_popup_call2_rect_pane_g5

0x696d,	// (0x00043948) bg_popup_call2_rect_pane_g6

0x6975,	// (0x00043950) bg_popup_call2_rect_pane_g7

0x697d,	// (0x00043958) bg_popup_call2_rect_pane_g8

0x6985,	// (0x00043960) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0004c5b0) bg_popup_call2_rect_pane_g

0x698d,	// (0x00043968) bg_popup_call2_bubble_pane_g1

0x6995,	// (0x00043970) bg_popup_call2_bubble_pane_g2

0x699d,	// (0x00043978) bg_popup_call2_bubble_pane_g3

0x69a5,	// (0x00043980) bg_popup_call2_bubble_pane_g4

0x69ad,	// (0x00043988) bg_popup_call2_bubble_pane_g5

0x69b5,	// (0x00043990) bg_popup_call2_bubble_pane_g6

0x69bd,	// (0x00043998) bg_popup_call2_bubble_pane_g7

0x69c5,	// (0x000439a0) bg_popup_call2_bubble_pane_g8

0x69cd,	// (0x000439a8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0004c5c3) bg_popup_call2_bubble_pane_g

0x35f0,	// (0x000405cb) aid_cale_week_size_cell_pane

0x3ac6,	// (0x00040aa1) aid_cams_cif_uncrop_pane_ParamLimits

0x3ac6,	// (0x00040aa1) aid_cams_cif_uncrop_pane

0x3c7f,	// (0x00040c5a) aid_cams_size_cell_ParamLimits

0x3c7f,	// (0x00040c5a) aid_cams_size_cell

0x3c93,	// (0x00040c6e) grid_cams_pane_ParamLimits

0x3cad,	// (0x00040c88) linegrid_cams_pane_ParamLimits

0x3d77,	// (0x00040d52) call_video_pane_t1

0x3d89,	// (0x00040d64) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0004c2b0) call_video_pane_t

0x414b,	// (0x00041126) aid_cale_month_size_cell_pane_ParamLimits

0x414b,	// (0x00041126) aid_cale_month_size_cell_pane

0xf672,	// (0x0004c64d) smil_status_volume_pane_g

0xc0b3,	// (0x0004908e) volume_smil_pane_ParamLimits

0x02d2,	// (0x0003d2ad) aid_popup2_width_pane

0x3558,	// (0x00040533) cell_qdial_pane_g4_ParamLimits

0x3558,	// (0x00040533) cell_qdial_pane_g4

0x4ce7,	// (0x00041cc2) aid_blid_cardinal_pane_ParamLimits

0x4cf7,	// (0x00041cd2) aid_blid_destination_pane_ParamLimits

0x4cf7,	// (0x00041cd2) aid_blid_destination_pane

0x0997,	// (0x0003d972) bg_popup_call_poc_act_pane_ParamLimits

0x0997,	// (0x0003d972) bg_popup_call_poc_act_pane

0x0997,	// (0x0003d972) bg_popup_call_poc_inact_pane_ParamLimits

0x0997,	// (0x0003d972) bg_popup_call_poc_inact_pane

0x69dd,	// (0x000439b8) bg_popup_call_poc_act_pane_g1

0x69e5,	// (0x000439c0) bg_popup_call_poc_act_pane_g2

0x69ed,	// (0x000439c8) bg_popup_call_poc_act_pane_g3

0x69a5,	// (0x00043980) bg_popup_call_poc_act_pane_g4

0x69ad,	// (0x00043988) bg_popup_call_poc_act_pane_g5

0x69f5,	// (0x000439d0) bg_popup_call_poc_act_pane_g6

0x69bd,	// (0x00043998) bg_popup_call_poc_act_pane_g7

0x69fd,	// (0x000439d8) bg_popup_call_poc_act_pane_g8

0x073c,	// (0x0003d717) main_usb_pane

0x6f02,	// (0x00043edd) popup_cale_lunar_info_window

0x3fcb,	// (0x00040fa6) im_reading_pane_t1_ParamLimits

0x0d1c,	// (0x0003dcf7) list_im_pane_ParamLimits

0x0d2d,	// (0x0003dd08) scroll_pane_cp07_ParamLimits

0x073c,	// (0x0003d717) grid_highlight_pane_cp012

0x0997,	// (0x0003d972) mup_scale_pane_ParamLimits

0x166b,	// (0x0003e646) main_usb_pane_g1_ParamLimits

0x166b,	// (0x0003e646) main_usb_pane_g1

0x6a1d,	// (0x000439f8) main_usb_pane_g2_ParamLimits

0x6a1d,	// (0x000439f8) main_usb_pane_g2

0x0001,

0xf612,	// (0x0004c5ed) main_usb_pane_g_ParamLimits

0xf612,	// (0x0004c5ed) main_usb_pane_g

0x6a33,	// (0x00043a0e) main_usb_pane_t1_ParamLimits

0x6a33,	// (0x00043a0e) main_usb_pane_t1

0x6a45,	// (0x00043a20) main_usb_pane_t2_ParamLimits

0x6a45,	// (0x00043a20) main_usb_pane_t2

0x6a57,	// (0x00043a32) main_usb_pane_t3_ParamLimits

0x6a57,	// (0x00043a32) main_usb_pane_t3

0x6a69,	// (0x00043a44) main_usb_pane_t4_ParamLimits

0x6a69,	// (0x00043a44) main_usb_pane_t4

0x6a7e,	// (0x00043a59) main_usb_pane_t5_ParamLimits

0x6a7e,	// (0x00043a59) main_usb_pane_t5

0x6a93,	// (0x00043a6e) main_usb_pane_t6_ParamLimits

0x6a93,	// (0x00043a6e) main_usb_pane_t6

0x0005,

0xf617,	// (0x0004c5f2) main_usb_pane_t_ParamLimits

0x4c86,	// (0x00041c61) aid_text_placing

0x4c91,	// (0x00041c6c) main_location2_pane_t1_ParamLimits

0x4ca7,	// (0x00041c82) main_location2_pane_t2_ParamLimits

0x4cbd,	// (0x00041c98) main_location2_pane_t3_ParamLimits

0x4cd3,	// (0x00041cae) main_location2_pane_t4_ParamLimits

0x4cd3,	// (0x00041cae) main_location2_pane_t4

0xf436,	// (0x0004c411) main_location2_pane_t_ParamLimits

0x09d3,	// (0x0003d9ae) find_pinb_pane_g2_ParamLimits

0x09d3,	// (0x0003d9ae) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0004c15f) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0004c15f) find_pinb_pane_g

0x09df,	// (0x0003d9ba) find_pinb_pane_t1_ParamLimits

0x09f1,	// (0x0003d9cc) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0004c164) find_pinb_pane_t_ParamLimits

0x073c,	// (0x0003d717) main_call3_pane

0x44bf,	// (0x0004149a) cale_month_day_heading_pane_t1_ParamLimits

0x451d,	// (0x000414f8) cale_month_day_heading_pane_t2_ParamLimits

0x4582,	// (0x0004155d) cale_month_day_heading_pane_t3_ParamLimits

0x45e7,	// (0x000415c2) cale_month_day_heading_pane_t4_ParamLimits

0x464c,	// (0x00041627) cale_month_day_heading_pane_t5_ParamLimits

0x46b1,	// (0x0004168c) cale_month_day_heading_pane_t6_ParamLimits

0x4716,	// (0x000416f1) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0004c2e8) cale_month_day_heading_pane_t_ParamLimits

0x0f6d,	// (0x0003df48) smil_status_volume_pane

0x548d,	// (0x00042468) postcard_address_pane_ParamLimits

0x548d,	// (0x00042468) postcard_address_pane

0x54a3,	// (0x0004247e) postcard_message_pane_ParamLimits

0x54a3,	// (0x0004247e) postcard_message_pane

0x692e,	// (0x00043909) call2_cli_visual_pane_t1_ParamLimits

0x692e,	// (0x00043909) call2_cli_visual_pane_t1

0x74a4,	// (0x0004447f) postcard_message_pane_t1_ParamLimits

0x74a4,	// (0x0004447f) postcard_message_pane_t1

0x748d,	// (0x00044468) postcard_address_pane_t1_ParamLimits

0x748d,	// (0x00044468) postcard_address_pane_t1

0x7479,	// (0x00044454) popup_call3_audio_in_window_ParamLimits

0x7479,	// (0x00044454) popup_call3_audio_in_window

0x72fe,	// (0x000442d9) bg_popup_call3_in_pane_ParamLimits

0x72fe,	// (0x000442d9) bg_popup_call3_in_pane

0x737a,	// (0x00044355) popup_call3_audio_in_window_g1_ParamLimits

0x737a,	// (0x00044355) popup_call3_audio_in_window_g1

0x739a,	// (0x00044375) popup_call3_audio_in_window_g2_ParamLimits

0x739a,	// (0x00044375) popup_call3_audio_in_window_g2

0x73ba,	// (0x00044395) popup_call3_audio_in_window_g3_ParamLimits

0x73ba,	// (0x00044395) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0004c654) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0004c654) popup_call3_audio_in_window_g

0x73eb,	// (0x000443c6) popup_call3_audio_in_window_t1_ParamLimits

0x73eb,	// (0x000443c6) popup_call3_audio_in_window_t1

0x7429,	// (0x00044404) popup_call3_audio_in_window_t2_ParamLimits

0x7429,	// (0x00044404) popup_call3_audio_in_window_t2

0x7467,	// (0x00044442) popup_call3_audio_in_window_t3_ParamLimits

0x7467,	// (0x00044442) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0004c65d) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0004c65d) popup_call3_audio_in_window_t

0x14be,	// (0x0003e499) bg_popup_call3_rect_pane

0x694d,	// (0x00043928) bg_popup_call3_rect_pane_g1

0x0b55,	// (0x0003db30) bg_popup_call3_rect_pane_g2

0x6955,	// (0x00043930) bg_popup_call3_rect_pane_g3

0x695d,	// (0x00043938) bg_popup_call3_rect_pane_g4

0x6965,	// (0x00043940) bg_popup_call3_rect_pane_g5

0x696d,	// (0x00043948) bg_popup_call3_rect_pane_g6

0x6975,	// (0x00043950) bg_popup_call3_rect_pane_g7

0x50cf,	// (0x000420aa) mup_visualizer_osc_pane

0x157d,	// (0x0003e558) mup_visualizer_spec_pane

0x732e,	// (0x00044309) call3_video_qcif_pane_ParamLimits

0x732e,	// (0x00044309) call3_video_qcif_pane

0x7341,	// (0x0004431c) call3_video_qcif_uncrop_pane_ParamLimits

0x7341,	// (0x0004431c) call3_video_qcif_uncrop_pane

0x7351,	// (0x0004432c) call3_video_subqcif_pane_ParamLimits

0x7351,	// (0x0004432c) call3_video_subqcif_pane

0x7367,	// (0x00044342) call3_video_subqcif_uncrop_pane_ParamLimits

0x7367,	// (0x00044342) call3_video_subqcif_uncrop_pane

0x73da,	// (0x000443b5) popup_call3_audio_in_window_g4_ParamLimits

0x73da,	// (0x000443b5) popup_call3_audio_in_window_g4

0x72bf,	// (0x0004429a) mup_spec_half_pane

0x72c8,	// (0x000442a3) mup_spec_half_pane_cp

0x72ad,	// (0x00044288) mup_osc_middle_pane

0x72b6,	// (0x00044291) mup_visualizer_osc_pane_g1

0x728d,	// (0x00044268) mup_spec_bar_pane_ParamLimits

0x728d,	// (0x00044268) mup_spec_bar_pane

0x727a,	// (0x00044255) mup_spec_bar_pane_g1

0x7284,	// (0x0004425f) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0004c648) mup_spec_bar_pane_g

0x35f0,	// (0x000405cb) aid_cale_week_size_cell_pane_ParamLimits

0x3603,	// (0x000405de) bg_cale_heading_pane_ParamLimits

0x0b89,	// (0x0003db64) bg_cale_pane_cp01_ParamLimits

0x361f,	// (0x000405fa) cale_week_corner_pane_ParamLimits

0x3635,	// (0x00040610) cale_week_day_heading_pane_ParamLimits

0x3651,	// (0x0004062c) cale_week_scroll_pane_g1_ParamLimits

0x366a,	// (0x00040645) cale_week_scroll_pane_g2_ParamLimits

0x367b,	// (0x00040656) cale_week_scroll_pane_g3_ParamLimits

0x368c,	// (0x00040667) cale_week_scroll_pane_g4_ParamLimits

0x369d,	// (0x00040678) cale_week_scroll_pane_g5_ParamLimits

0x36ae,	// (0x00040689) cale_week_scroll_pane_g6_ParamLimits

0x36bf,	// (0x0004069a) cale_week_scroll_pane_g7_ParamLimits

0x36d0,	// (0x000406ab) cale_week_scroll_pane_g8_ParamLimits

0x36e1,	// (0x000406bc) cale_week_scroll_pane_g9_ParamLimits

0x36f2,	// (0x000406cd) cale_week_scroll_pane_g10_ParamLimits

0x3703,	// (0x000406de) cale_week_scroll_pane_g11_ParamLimits

0x3714,	// (0x000406ef) cale_week_scroll_pane_g12_ParamLimits

0x3725,	// (0x00040700) cale_week_scroll_pane_g13_ParamLimits

0x373e,	// (0x00040719) cale_week_scroll_pane_g14_ParamLimits

0x3757,	// (0x00040732) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0004c1f0) cale_week_scroll_pane_g_ParamLimits

0x3770,	// (0x0004074b) cale_week_time_pane_ParamLimits

0x3781,	// (0x0004075c) grid_cale_week_pane_ParamLimits

0x0ba2,	// (0x0003db7d) listscroll_cale_week_pane_t1

0x379c,	// (0x00040777) scroll_pane_cp08_ParamLimits

0x419c,	// (0x00041177) cale_month_corner_pane_ParamLimits

0x0f43,	// (0x0003df1e) cale_month_pane_t1

0x4480,	// (0x0004145b) cale_month_week_pane_ParamLimits

0x4aaa,	// (0x00041a85) popup_call_status_window_g1_ParamLimits

0x4abe,	// (0x00041a99) popup_call_status_window_g2_ParamLimits

0x4ad2,	// (0x00041aad) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0004c398) popup_call_status_window_g_ParamLimits

0x1260,	// (0x0003e23b) aid_call2_pane

0x26bb,	// (0x0003f696) msg_header_pane_g1

0x548d,	// (0x00042468) postcard_address2_pane_ParamLimits

0x548d,	// (0x00042468) postcard_address2_pane

0x54a3,	// (0x0004247e) postcard_message2_pane_ParamLimits

0x54a3,	// (0x0004247e) postcard_message2_pane

0x71f2,	// (0x000441cd) message2_row_pane_ParamLimits

0x71f2,	// (0x000441cd) message2_row_pane

0x7215,	// (0x000441f0) address2_row_pane_ParamLimits

0x7215,	// (0x000441f0) address2_row_pane

0x7228,	// (0x00044203) postcard_message2_row_pane_g1

0x7230,	// (0x0004420b) postcard_message2_row_pane_t1

0x7228,	// (0x00044203) address2_row_pane_g1

0x7230,	// (0x0004420b) address2_row_pane_t1

0x39aa,	// (0x00040985) aid_size_cell_vorec

0x073c,	// (0x0003d717) main_rss_pane

0x723e,	// (0x00044219) rss_list_single_pane_ParamLimits

0x723e,	// (0x00044219) rss_list_single_pane

0x725e,	// (0x00044239) rss_list_single_pane_t1

0x726c,	// (0x00044247) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0004c643) rss_list_single_pane_t

0x073c,	// (0x0003d717) main_camera2_pane

0x073c,	// (0x0003d717) main_video2_pane

0x7513,	// (0x000444ee) cams_zoom_pane_cp2_ParamLimits

0x7513,	// (0x000444ee) cams_zoom_pane_cp2

0x752a,	// (0x00044505) image2_vga_pane_ParamLimits

0x752a,	// (0x00044505) image2_vga_pane

0x7572,	// (0x0004454d) main_camera2_pane_g1_ParamLimits

0x7572,	// (0x0004454d) main_camera2_pane_g1

0x7592,	// (0x0004456d) main_camera2_pane_g2_ParamLimits

0x7592,	// (0x0004456d) main_camera2_pane_g2

0x75a9,	// (0x00044584) main_camera2_pane_g3_ParamLimits

0x75a9,	// (0x00044584) main_camera2_pane_g3

0x75c0,	// (0x0004459b) main_camera2_pane_g4_ParamLimits

0x75c0,	// (0x0004459b) main_camera2_pane_g4

0x75d7,	// (0x000445b2) main_camera2_pane_g5_ParamLimits

0x75d7,	// (0x000445b2) main_camera2_pane_g5

0x75ee,	// (0x000445c9) main_camera2_pane_g6_ParamLimits

0x75ee,	// (0x000445c9) main_camera2_pane_g6

0x7605,	// (0x000445e0) main_camera2_pane_g7_ParamLimits

0x7605,	// (0x000445e0) main_camera2_pane_g7

0x761c,	// (0x000445f7) main_camera2_pane_g8_ParamLimits

0x761c,	// (0x000445f7) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0004c664) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0004c664) main_camera2_pane_g

0x764a,	// (0x00044625) main_camera2_pane_t1_ParamLimits

0x764a,	// (0x00044625) main_camera2_pane_t1

0x767f,	// (0x0004465a) main_camera2_pane_t2_ParamLimits

0x767f,	// (0x0004465a) main_camera2_pane_t2

0x769c,	// (0x00044677) main_camera2_pane_t3_ParamLimits

0x769c,	// (0x00044677) main_camera2_pane_t3

0x76fa,	// (0x000446d5) main_camera2_pane_t4_ParamLimits

0x76fa,	// (0x000446d5) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0004c677) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0004c677) main_camera2_pane_t

0x7783,	// (0x0004475e) cams_zoom_pane_cp4_ParamLimits

0x7783,	// (0x0004475e) cams_zoom_pane_cp4

0x7799,	// (0x00044774) image2_cif_pane_ParamLimits

0x7799,	// (0x00044774) image2_cif_pane

0x77c4,	// (0x0004479f) image2_subqcif_pane_ParamLimits

0x77c4,	// (0x0004479f) image2_subqcif_pane

0x77df,	// (0x000447ba) main_video2_pane_g1_ParamLimits

0x77df,	// (0x000447ba) main_video2_pane_g1

0x77f9,	// (0x000447d4) main_video2_pane_g2_ParamLimits

0x77f9,	// (0x000447d4) main_video2_pane_g2

0x780f,	// (0x000447ea) main_video2_pane_g3_ParamLimits

0x780f,	// (0x000447ea) main_video2_pane_g3

0x7825,	// (0x00044800) main_video2_pane_g4_ParamLimits

0x7825,	// (0x00044800) main_video2_pane_g4

0x783b,	// (0x00044816) main_video2_pane_g5_ParamLimits

0x783b,	// (0x00044816) main_video2_pane_g5

0x7851,	// (0x0004482c) main_video2_pane_g6_ParamLimits

0x7851,	// (0x0004482c) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0004c686) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0004c686) main_video2_pane_g

0x786b,	// (0x00044846) main_video2_pane_t1_ParamLimits

0x786b,	// (0x00044846) main_video2_pane_t1

0x788f,	// (0x0004486a) main_video2_pane_t2_ParamLimits

0x788f,	// (0x0004486a) main_video2_pane_t2

0x78df,	// (0x000448ba) main_video2_pane_t3_ParamLimits

0x78df,	// (0x000448ba) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0004c693) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0004c693) main_video2_pane_t

0x6c3f,	// (0x00043c1a) call_muted_g2

0x0001,

0xf65a,	// (0x0004c635) call_muted_g

0x073c,	// (0x0003d717) main_mup2_pane

0x7927,	// (0x00044902) main_mup2_pane_g1_ParamLimits

0x7927,	// (0x00044902) main_mup2_pane_g1

0x7933,	// (0x0004490e) main_mup2_pane_g2_ParamLimits

0x7933,	// (0x0004490e) main_mup2_pane_g2

0xc1a4,	// (0x0004917f) main_mup_pane_g13_cp1

0xc1ac,	// (0x00049187) mup_volume_pane_cp1

0x7951,	// (0x0004492c) main_mup2_pane_g4_ParamLimits

0x7951,	// (0x0004492c) main_mup2_pane_g4

0x7963,	// (0x0004493e) main_mup2_pane_g5_ParamLimits

0x7963,	// (0x0004493e) main_mup2_pane_g5

0x7975,	// (0x00044950) main_mup2_pane_g6_ParamLimits

0x7975,	// (0x00044950) main_mup2_pane_g6

0x7987,	// (0x00044962) main_mup2_pane_g7_ParamLimits

0x7987,	// (0x00044962) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0004c69a) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0004c69a) main_mup2_pane_g

0x799f,	// (0x0004497a) main_mup2_pane_t1_ParamLimits

0x799f,	// (0x0004497a) main_mup2_pane_t1

0x79b5,	// (0x00044990) main_mup2_pane_t2_ParamLimits

0x79b5,	// (0x00044990) main_mup2_pane_t2

0x79cb,	// (0x000449a6) main_mup2_pane_t3_ParamLimits

0x79cb,	// (0x000449a6) main_mup2_pane_t3

0x79e1,	// (0x000449bc) main_mup2_pane_t4_ParamLimits

0x79e1,	// (0x000449bc) main_mup2_pane_t4

0x79f9,	// (0x000449d4) main_mup2_pane_t5_ParamLimits

0x79f9,	// (0x000449d4) main_mup2_pane_t5

0x7a11,	// (0x000449ec) main_mup2_pane_t6_ParamLimits

0x7a11,	// (0x000449ec) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0004c6a9) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0004c6a9) main_mup2_pane_t

0x7a41,	// (0x00044a1c) mup2_visualizer_pane_ParamLimits

0x7a41,	// (0x00044a1c) mup2_visualizer_pane

0x7a6f,	// (0x00044a4a) mup_progress_pane_cp_ParamLimits

0x7a6f,	// (0x00044a4a) mup_progress_pane_cp

0xc186,	// (0x00049161) mup_volume_pane_cp_ParamLimits

0xc186,	// (0x00049161) mup_volume_pane_cp

0x7a85,	// (0x00044a60) mup2_visualizer_pane_g1_ParamLimits

0x7a85,	// (0x00044a60) mup2_visualizer_pane_g1

0x7a9a,	// (0x00044a75) mup2_visualizer_pane_g2_ParamLimits

0x7a9a,	// (0x00044a75) mup2_visualizer_pane_g2

0x7aa6,	// (0x00044a81) mup2_visualizer_pane_g3_ParamLimits

0x7aa6,	// (0x00044a81) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0004c6b6) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0004c6b6) mup2_visualizer_pane_g

0x5786,	// (0x00042761) aid_size_cell_fmradio

0x6e20,	// (0x00043dfb) aid_height_parent_landcape

0x0dab,	// (0x0003dd86) wml_content_pane_cp

0x0db3,	// (0x0003dd8e) wml_tabs_pane

0x0dbc,	// (0x0003dd97) popup_wml_miniature_window

0x0dc4,	// (0x0003dd9f) scroll_pane_cp021

0x0dd8,	// (0x0003ddb3) wml_content_pane_comp8

0x073c,	// (0x0003d717) bg_popup_sub_pane_cp05

0x7ac4,	// (0x00044a9f) popup_wml_miniature_window_g1

0x7acc,	// (0x00044aa7) wml_miniature_view_pane

0x7ad4,	// (0x00044aaf) aid_size_wml_view

0x7adc,	// (0x00044ab7) wml_miniature_view_pane_g1

0x7ae5,	// (0x00044ac0) wml_miniature_view_pane_g2

0x7aee,	// (0x00044ac9) wml_miniature_view_pane_g3

0x7af6,	// (0x00044ad1) wml_miniature_view_pane_g4

0x7afe,	// (0x00044ad9) wml_miniature_view_pane_g5

0x7b06,	// (0x00044ae1) wml_miniature_view_pane_g6

0x7b0e,	// (0x00044ae9) wml_miniature_view_pane_g7

0x7b16,	// (0x00044af1) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0004c6bd) wml_miniature_view_pane_g

0xc0f3,	// (0x000490ce) background_graphic_ParamLimits

0xc0f3,	// (0x000490ce) background_graphic

0xc0ff,	// (0x000490da) wml_tabs_2_pane

0xc108,	// (0x000490e3) wml_tabs_3_pane_ParamLimits

0xc108,	// (0x000490e3) wml_tabs_3_pane

0xc11a,	// (0x000490f5) wml_tabs_4_pane_ParamLimits

0xc11a,	// (0x000490f5) wml_tabs_4_pane

0xc130,	// (0x0004910b) wml_tabs_5_pane_ParamLimits

0xc130,	// (0x0004910b) wml_tabs_5_pane

0xc14a,	// (0x00049125) wml_tabs_pane_g2_ParamLimits

0xc14a,	// (0x00049125) wml_tabs_pane_g2

0xc15e,	// (0x00049139) wml_tabs_pane_g3_ParamLimits

0xc15e,	// (0x00049139) wml_tabs_pane_g3

0x7b1e,	// (0x00044af9) wml_tabs_2_active_pane_ParamLimits

0x7b1e,	// (0x00044af9) wml_tabs_2_active_pane

0x7b32,	// (0x00044b0d) wml_tabs_2_passive_pane_ParamLimits

0x7b32,	// (0x00044b0d) wml_tabs_2_passive_pane

0x7b46,	// (0x00044b21) wml_tabs_3_active_pane_cp_ParamLimits

0x7b46,	// (0x00044b21) wml_tabs_3_active_pane_cp

0x7b5b,	// (0x00044b36) wml_tabs_3_passive_pane_ParamLimits

0x7b5b,	// (0x00044b36) wml_tabs_3_passive_pane

0x7b6e,	// (0x00044b49) wml_tabs_3_passive_pane_cp_ParamLimits

0x7b6e,	// (0x00044b49) wml_tabs_3_passive_pane_cp

0x7b85,	// (0x00044b60) tabs_4_active_pane

0x7b8d,	// (0x00044b68) tabs_4_passive_pane

0x7b97,	// (0x00044b72) tabs_4_passive_pane_cp

0x7b9f,	// (0x00044b7a) tabs_4_passive_pane_cp2

0x69d5,	// (0x000439b0) aid_height_text

0x50a1,	// (0x0004207c) mup_volume_cont_pane_ParamLimits

0x50a1,	// (0x0004207c) mup_volume_cont_pane

0x31f4,	// (0x000401cf) aid_size_cell_pinb

0x31fe,	// (0x000401d9) aid_size_list_pinb

0x7a5b,	// (0x00044a36) mup2_volume_cont_pane_ParamLimits

0x7a5b,	// (0x00044a36) mup2_volume_cont_pane

0xc172,	// (0x0004914d) mup2_volume_cont_pane_g1_ParamLimits

0xc172,	// (0x0004914d) mup2_volume_cont_pane_g1

0x2ed4,	// (0x0003feaf) aid_size_cell_touch_ParamLimits

0x2ed4,	// (0x0003feaf) aid_size_cell_touch

0x30e3,	// (0x000400be) touch_pane_ParamLimits

0x30e3,	// (0x000400be) touch_pane

0x02c0,	// (0x0003d29b) main_rss2_pane

0xc1b4,	// (0x0004918f) listscroll_rss2_pane

0xc1bd,	// (0x00049198) rss2_navigation_pane

0xc1c5,	// (0x000491a0) list_rss2_pane

0x1384,	// (0x0003e35f) scroll_pane_cp22

0xc1cd,	// (0x000491a8) rss2_navigation_pane_g1

0xc1d6,	// (0x000491b1) rss2_navigation_pane_g2

0xc1de,	// (0x000491b9) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0004c6ce) rss2_navigation_pane_g

0xc1e6,	// (0x000491c1) rss2_navigation_pane_t1

0x7ba9,	// (0x00044b84) rss2_list_single_pane_ParamLimits

0x7ba9,	// (0x00044b84) rss2_list_single_pane

0xc1f4,	// (0x000491cf) rss2_list_single_pane_t2

0xc202,	// (0x000491dd) rss2_list_single_pane_t3_ParamLimits

0xc202,	// (0x000491dd) rss2_list_single_pane_t3

0xc21f,	// (0x000491fa) rss2_list_single_pane_t4

0x48e2,	// (0x000418bd) smil_status_pane_g1

0x175a,	// (0x0003e735) main_image2_pane_ParamLimits

0x175a,	// (0x0003e735) main_image2_pane

0x7633,	// (0x0004460e) main_camera2_pane_g9_ParamLimits

0x7633,	// (0x0004460e) main_camera2_pane_g9

0x774f,	// (0x0004472a) main_camera2_pane_t5_ParamLimits

0x774f,	// (0x0004472a) main_camera2_pane_t5

0xc0c8,	// (0x000490a3) main_camera2_pane_t6_ParamLimits

0xc0c8,	// (0x000490a3) main_camera2_pane_t6

0x7bc3,	// (0x00044b9e) main_image2_pane_g1_ParamLimits

0x7bc3,	// (0x00044b9e) main_image2_pane_g1

0x5730,	// (0x0004270b) smil2_video_pane_ParamLimits

0x5730,	// (0x0004270b) smil2_video_pane

0xbd3e,	// (0x00048d19) aid_zoom_text_primary_cp

0x031f,	// (0x0003d2fa) popup_preview_fixed_window

0x0d14,	// (0x0003dcef) im_reading_pane_g1

0x7505,	// (0x000444e0) cams2_bc_adjust_pane_cp_ParamLimits

0x7505,	// (0x000444e0) cams2_bc_adjust_pane_cp

0x7775,	// (0x00044750) cams2_bc_adjust_pane_ParamLimits

0x7775,	// (0x00044750) cams2_bc_adjust_pane

0xc22d,	// (0x00049208) cams2_bc_adjust_pane_g1

0xc235,	// (0x00049210) cams2_slider_pane

0xc23e,	// (0x00049219) cams2_slider_pane_g1

0xc247,	// (0x00049222) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0004c6d5) cams2_slider_pane_g

0x32ee,	// (0x000402c9) calc_display_pane_ParamLimits

0x3314,	// (0x000402ef) calc_paper_pane_ParamLimits

0x3337,	// (0x00040312) grid_calc_pane_ParamLimits

0xc035,	// (0x00049010) popup_clock_digital_window_t1_ParamLimits

0x1743,	// (0x0003e71e) main_image_pane_t1

0x32d0,	// (0x000402ab) aid_size_cell_calc_ParamLimits

0x32d0,	// (0x000402ab) aid_size_cell_calc

0x6e84,	// (0x00043e5f) popup_blid_sat_info2_window_ParamLimits

0x6e84,	// (0x00043e5f) popup_blid_sat_info2_window

0xc269,	// (0x00049244) aid_size_cell_blid

0xc271,	// (0x0004924c) bg_popup_window_pane_cp07

0xc294,	// (0x0004926f) grid_popup_blid_pane

0xc29e,	// (0x00049279) heading_pane_cp05_ParamLimits

0xc29e,	// (0x00049279) heading_pane_cp05

0xc368,	// (0x00049343) cell_popup_blid_pane_ParamLimits

0xc368,	// (0x00049343) cell_popup_blid_pane

0xc392,	// (0x0004936d) cell_popup_blid_pane_g1

0xc39a,	// (0x00049375) cell_popup_blid_pane_t1

0x7a2b,	// (0x00044a06) mup2_indicator_pane_ParamLimits

0x7a2b,	// (0x00044a06) mup2_indicator_pane

0x14be,	// (0x0003e499) mup2_visualizer_osc_pane

0x7ab2,	// (0x00044a8d) mup2_visualizer_spec_pane_ParamLimits

0x7ab2,	// (0x00044a8d) mup2_visualizer_spec_pane

0x7bd9,	// (0x00044bb4) mup2_spec_half_pane

0x7be2,	// (0x00044bbd) mup2_spec_half_pane_cp

0x7bea,	// (0x00044bc5) mup2_spec_bar_pane_ParamLimits

0x7bea,	// (0x00044bc5) mup2_spec_bar_pane

0x727a,	// (0x00044255) mup2_spec_bar_pane_g1

0x7284,	// (0x0004425f) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0004c648) mup2_spec_bar_pane_g

0x7c0a,	// (0x00044be5) mup2_osc_middle_pane

0x72b6,	// (0x00044291) mup2_visualizer_osc_pane_g1

0x0349,	// (0x0003d324) popup_number_entry_window_t1_ParamLimits

0x035c,	// (0x0003d337) popup_number_entry_window_t2_ParamLimits

0x036e,	// (0x0003d349) popup_number_entry_window_t3_ParamLimits

0x3135,	// (0x00040110) popup_number_entry_window_t5_ParamLimits

0x3135,	// (0x00040110) popup_number_entry_window_t5

0xf12f,	// (0x0004c10a) popup_number_entry_window_t_ParamLimits

0x0380,	// (0x0003d35b) text_title_cp2_ParamLimits

0xc074,	// (0x0004904f) aid_hotspot_pointer_text2_pane

0xc09a,	// (0x00049075) main_viewer_pane_g9_ParamLimits

0xc09a,	// (0x00049075) main_viewer_pane_g9

0x0f43,	// (0x0003df1e) cale_month_pane_t1_ParamLimits

0x0f80,	// (0x0003df5b) bg_cale_pane_ParamLimits

0x0f98,	// (0x0003df73) list_cale_pane_ParamLimits

0x0ba2,	// (0x0003db7d) listscroll_cale_day_pane_t1

0x0fa9,	// (0x0003df84) scroll_pane_cp09_ParamLimits

0x50d7,	// (0x000420b2) main_mup_eq_pane_t1_ParamLimits

0x50d7,	// (0x000420b2) main_mup_eq_pane_t1

0x50f3,	// (0x000420ce) main_mup_eq_pane_t2_ParamLimits

0x50f3,	// (0x000420ce) main_mup_eq_pane_t2

0x510f,	// (0x000420ea) main_mup_eq_pane_t3_ParamLimits

0x510f,	// (0x000420ea) main_mup_eq_pane_t3

0x512d,	// (0x00042108) main_mup_eq_pane_t4_ParamLimits

0x512d,	// (0x00042108) main_mup_eq_pane_t4

0x514b,	// (0x00042126) main_mup_eq_pane_t5_ParamLimits

0x514b,	// (0x00042126) main_mup_eq_pane_t5

0x5169,	// (0x00042144) main_mup_eq_pane_t6_ParamLimits

0x5169,	// (0x00042144) main_mup_eq_pane_t6

0x517f,	// (0x0004215a) main_mup_eq_pane_t7_ParamLimits

0x517f,	// (0x0004215a) main_mup_eq_pane_t7

0x5195,	// (0x00042170) main_mup_eq_pane_t8_ParamLimits

0x5195,	// (0x00042170) main_mup_eq_pane_t8

0x51ab,	// (0x00042186) main_mup_eq_pane_t9_ParamLimits

0x51ab,	// (0x00042186) main_mup_eq_pane_t9

0x51c7,	// (0x000421a2) main_mup_eq_pane_t10_ParamLimits

0x51c7,	// (0x000421a2) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0004c497) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0004c497) main_mup_eq_pane_t

0x529c,	// (0x00042277) mup_equalizer_pane_cp5_ParamLimits

0x52b4,	// (0x0004228f) mup_equalizer_pane_cp6_ParamLimits

0x52cc,	// (0x000422a7) mup_equalizer_pane_cp7_ParamLimits

0x02c0,	// (0x0003d29b) main_gallery_pane

0x72d0,	// (0x000442ab) smil2_volume_pane

0x72d8,	// (0x000442b3) smil_status_volume_pane_g1_ParamLimits

0x72eb,	// (0x000442c6) smil_status_volume_pane_g2_ParamLimits

0xc0a6,	// (0x00049081) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0004c64d) smil_status_volume_pane_g_ParamLimits

0xc271,	// (0x0004924c) bg_popup_window_pane_cp07_ParamLimits

0xc27f,	// (0x0004925a) blid_firmament_pane

0x7c13,	// (0x00044bee) aid_size_cell_gallery_ParamLimits

0x7c13,	// (0x00044bee) aid_size_cell_gallery

0x7c29,	// (0x00044c04) grid_gallery_pane_ParamLimits

0x7c29,	// (0x00044c04) grid_gallery_pane

0x7c44,	// (0x00044c1f) cell_gallery_pane_ParamLimits

0x7c44,	// (0x00044c1f) cell_gallery_pane

0xc3a8,	// (0x00049383) bg_cell_gallery_focus_pane_ParamLimits

0xc3a8,	// (0x00049383) bg_cell_gallery_focus_pane

0xc3ba,	// (0x00049395) cell_gallery_pane_g1_ParamLimits

0xc3ba,	// (0x00049395) cell_gallery_pane_g1

0x7c95,	// (0x00044c70) cell_gallery_pane_g2_ParamLimits

0x7c95,	// (0x00044c70) cell_gallery_pane_g2

0x7ca2,	// (0x00044c7d) cell_gallery_pane_g3_ParamLimits

0x7ca2,	// (0x00044c7d) cell_gallery_pane_g3

0xc3c6,	// (0x000493a1) cell_gallery_pane_g4_ParamLimits

0xc3c6,	// (0x000493a1) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0004c6fb) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0004c6fb) cell_gallery_pane_g

0xc3d2,	// (0x000493ad) bg_cell_gallery_focus_pane_g1

0xc3da,	// (0x000493b5) bg_cell_gallery_focus_pane_g2

0xc3e2,	// (0x000493bd) bg_cell_gallery_focus_pane_g3

0xc3ea,	// (0x000493c5) bg_cell_gallery_focus_pane_g4

0xc3f2,	// (0x000493cd) bg_cell_gallery_focus_pane_g5

0xc3fa,	// (0x000493d5) bg_cell_gallery_focus_pane_g6

0xc402,	// (0x000493dd) bg_cell_gallery_focus_pane_g7

0xc40a,	// (0x000493e5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0004c704) bg_cell_gallery_focus_pane_g

0xc412,	// (0x000493ed) aid_firma_cardinal

0xc426,	// (0x00049401) blid_firmament_pane_t1

0xc43d,	// (0x00049418) blid_firmament_pane_t2

0xc454,	// (0x0004942f) blid_firmament_pane_t3

0xc46b,	// (0x00049446) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0004c715) blid_firmament_pane_t

0xc482,	// (0x0004945d) blid_sat_info_pane

0xc492,	// (0x0004946d) blid_sat_info_pane_g1

0xc492,	// (0x0004946d) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0004c71e) blid_sat_info_pane_g

0xc49c,	// (0x00049477) blid_sat_info_pane_t1

0xc4aa,	// (0x00049485) smil2_volume_content_pane

0xc4b3,	// (0x0004948e) smil2_volume_pane_g1

0xc4bb,	// (0x00049496) smil2_volume_content_pane_g1

0xc4c4,	// (0x0004949f) smil2_volume_content_pane_g2

0xc4cd,	// (0x000494a8) smil2_volume_content_pane_g3

0xc4d6,	// (0x000494b1) smil2_volume_content_pane_g4

0xc4df,	// (0x000494ba) smil2_volume_content_pane_g5

0xc4e8,	// (0x000494c3) smil2_volume_content_pane_g6

0xc4f1,	// (0x000494cc) smil2_volume_content_pane_g7

0xc4fa,	// (0x000494d5) smil2_volume_content_pane_g8

0xc503,	// (0x000494de) smil2_volume_content_pane_g9

0xc50c,	// (0x000494e7) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0004c723) smil2_volume_content_pane_g

0x37fc,	// (0x000407d7) cale_week_day_heading_pane_t1_ParamLimits

0x3810,	// (0x000407eb) cale_week_day_heading_pane_t2_ParamLimits

0x3824,	// (0x000407ff) cale_week_day_heading_pane_t3_ParamLimits

0x3838,	// (0x00040813) cale_week_day_heading_pane_t4_ParamLimits

0x384c,	// (0x00040827) cale_week_day_heading_pane_t5_ParamLimits

0x3860,	// (0x0004083b) cale_week_day_heading_pane_t6_ParamLimits

0x3874,	// (0x0004084f) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0004c20f) cale_week_day_heading_pane_t_ParamLimits

0x0bb4,	// (0x0003db8f) bg_cale_side_pane_ParamLimits

0x3888,	// (0x00040863) cale_week_time_pane_t1_ParamLimits

0x38a0,	// (0x0004087b) cale_week_time_pane_t2_ParamLimits

0x38b8,	// (0x00040893) cale_week_time_pane_t3_ParamLimits

0x38d0,	// (0x000408ab) cale_week_time_pane_t4_ParamLimits

0x38e8,	// (0x000408c3) cale_week_time_pane_t5_ParamLimits

0x3900,	// (0x000408db) cale_week_time_pane_t6_ParamLimits

0x3918,	// (0x000408f3) cale_week_time_pane_t7_ParamLimits

0x3934,	// (0x0004090f) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0004c21e) cale_week_time_pane_t_ParamLimits

0x3954,	// (0x0004092f) cell_cale_week_pane_g2_ParamLimits

0x0bb4,	// (0x0003db8f) bg_cale_side_pane_cp01_ParamLimits

0x477b,	// (0x00041756) cale_month_week_pane_t1_ParamLimits

0x4792,	// (0x0004176d) cale_month_week_pane_t2_ParamLimits

0x47a9,	// (0x00041784) cale_month_week_pane_t3_ParamLimits

0x47c0,	// (0x0004179b) cale_month_week_pane_t4_ParamLimits

0x47d7,	// (0x000417b2) cale_month_week_pane_t5_ParamLimits

0x47ee,	// (0x000417c9) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0004c2f7) cale_month_week_pane_t_ParamLimits

0xbf3e,	// (0x00048f19) cell_cale_month_pane_g1_ParamLimits

0x02c0,	// (0x0003d29b) main_cale_event_viewer_pane

0x02c0,	// (0x0003d29b) listscroll_cale_event_viewer_pane

0xc515,	// (0x000494f0) list_cale_ev_pane

0xc51d,	// (0x000494f8) scroll_pane_cp023

0x7caf,	// (0x00044c8a) field_cale_ev_pane_ParamLimits

0x7caf,	// (0x00044c8a) field_cale_ev_pane

0xc529,	// (0x00049504) field_cale_ev_content_pane_ParamLimits

0xc529,	// (0x00049504) field_cale_ev_content_pane

0xc535,	// (0x00049510) field_cale_ev_pane_g1_ParamLimits

0xc535,	// (0x00049510) field_cale_ev_pane_g1

0xc541,	// (0x0004951c) field_cale_ev_pane_g2_ParamLimits

0xc541,	// (0x0004951c) field_cale_ev_pane_g2

0xc559,	// (0x00049534) field_cale_ev_pane_g3_ParamLimits

0xc559,	// (0x00049534) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0004c738) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0004c738) field_cale_ev_pane_g

0xc571,	// (0x0004954c) field_cale_ev_pane_t1_ParamLimits

0xc571,	// (0x0004954c) field_cale_ev_pane_t1

0x7cd3,	// (0x00044cae) field_cale_ev_content_pane_t1_ParamLimits

0x7cd3,	// (0x00044cae) field_cale_ev_content_pane_t1

0x1629,	// (0x0003e604) bg_button_pane_cp01

0x0a62,	// (0x0003da3d) listscroll_cale_week_pane_ParamLimits

0x35e6,	// (0x000405c1) popup_toolbar_window_cp01

0x0ba2,	// (0x0003db7d) listscroll_cale_week_pane_t1_ParamLimits

0x0a62,	// (0x0003da3d) listscroll_cale_day_pane_ParamLimits

0x4942,	// (0x0004191d) popup_toolbar_window_cp02

0x0ba2,	// (0x0003db7d) listscroll_cale_day_pane_t1_ParamLimits

0x0a62,	// (0x0003da3d) main_cale_month_pane_ParamLimits

0x713f,	// (0x0004411a) popup_toolbar_window_cp03_ParamLimits

0x713f,	// (0x0004411a) popup_toolbar_window_cp03

0x55a2,	// (0x0004257d) main_image_pane_g2_ParamLimits

0x55a2,	// (0x0004257d) main_image_pane_g2

0x55b3,	// (0x0004258e) main_image_pane_g3_ParamLimits

0x55b3,	// (0x0004258e) main_image_pane_g3

0x0002,

0xf54e,	// (0x0004c529) main_image_pane_g_ParamLimits

0xf54e,	// (0x0004c529) main_image_pane_g

0x1743,	// (0x0003e71e) main_image_pane_t1_ParamLimits

0x55c4,	// (0x0004259f) main_image_pane_t2_ParamLimits

0x55c4,	// (0x0004259f) main_image_pane_t2

0x55d6,	// (0x000425b1) main_image_pane_t3_ParamLimits

0x55d6,	// (0x000425b1) main_image_pane_t3

0x55fe,	// (0x000425d9) main_image_pane_t4_ParamLimits

0x55fe,	// (0x000425d9) main_image_pane_t4

0x0003,

0xf555,	// (0x0004c530) main_image_pane_t_ParamLimits

0xf555,	// (0x0004c530) main_image_pane_t

0x561e,	// (0x000425f9) popup_image_details_window_cp01

0x5628,	// (0x00042603) popup_toobar_trans_pane_cp01_ParamLimits

0x5628,	// (0x00042603) popup_toobar_trans_pane_cp01

0x6f83,	// (0x00043f5e) popup_image_details_window_ParamLimits

0x6f83,	// (0x00043f5e) popup_image_details_window

0x6f9b,	// (0x00043f76) popup_image_focus_window

0x74bf,	// (0x0004449a) camera2_autofocus_pane_ParamLimits

0x74bf,	// (0x0004449a) camera2_autofocus_pane

0x02c0,	// (0x0003d29b) bg_popup_sub_pane_cp06

0xc588,	// (0x00049563) popup_image_focus_window_g1

0xc590,	// (0x0004956b) popup_image_focus_window_g2

0xc598,	// (0x00049573) popup_image_focus_window_g3

0xc5a0,	// (0x0004957b) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0004c73f) popup_image_focus_window_g

0xc5a8,	// (0x00049583) popup_image_focus_window_t1

0xc5b6,	// (0x00049591) popup_image_focus_window_t2

0xc5c6,	// (0x000495a1) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0004c748) popup_image_focus_window_t

0xc5d4,	// (0x000495af) camera2_autofocus_pane_g1

0x175a,	// (0x0003e735) bg_tb_trans_pane_cp01

0xc5e2,	// (0x000495bd) popup_image_details_window_g1

0xc5f5,	// (0x000495d0) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0004c75a) popup_image_details_window_g

0xc61e,	// (0x000495f9) popup_image_details_window_t1

0xc630,	// (0x0004960b) popup_image_details_window_t2

0xc649,	// (0x00049624) popup_image_details_window_t3

0xc65d,	// (0x00049638) popup_image_details_window_t4

0xc678,	// (0x00049653) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0004c761) popup_image_details_window_t

0x0a4e,	// (0x0003da29) bg_calc_paper_pane_ParamLimits

0x02c0,	// (0x0003d29b) grid_highlight_pane_cp013

0xbd4e,	// (0x00048d29) list_calc_pane_ParamLimits

0xbd60,	// (0x00048d3b) scroll_pane_cp024

0x0a62,	// (0x0003da3d) bg_calc_display_pane_ParamLimits

0x342e,	// (0x00040409) calc_display_pane_t1_ParamLimits

0x3440,	// (0x0004041b) calc_display_pane_t2_ParamLimits

0xbd68,	// (0x00048d43) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0004c191) calc_display_pane_t_ParamLimits

0x3503,	// (0x000404de) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0004c1ae) cell_calc_pane_g

0x350c,	// (0x000404e7) cell_calc_pane_t1

0x0ac1,	// (0x0003da9c) grid_highlight_pane_cp02_ParamLimits

0x0ad7,	// (0x0003dab2) toolbar_button_pane_cp01_ParamLimits

0x0ad7,	// (0x0003dab2) toolbar_button_pane_cp01

0x566a,	// (0x00042645) temp_image_control_pane_ParamLimits

0x566a,	// (0x00042645) temp_image_control_pane

0x175a,	// (0x0003e735) main_mp3_pane

0xc692,	// (0x0004966d) temp_image_control_pane_g1_ParamLimits

0xc692,	// (0x0004966d) temp_image_control_pane_g1

0xc6a0,	// (0x0004967b) temp_image_control_pane_g2_ParamLimits

0xc6a0,	// (0x0004967b) temp_image_control_pane_g2

0xc6b2,	// (0x0004968d) temp_image_control_pane_g3_ParamLimits

0xc6b2,	// (0x0004968d) temp_image_control_pane_g3

0x7d24,	// (0x00044cff) temp_image_control_pane_g4_ParamLimits

0x7d24,	// (0x00044cff) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0004c76c) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0004c76c) temp_image_control_pane_g

0xc692,	// (0x0004966d) main_mp3_pane_g1

0x7d37,	// (0x00044d12) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0004c775) main_mp3_pane_g

0xc6f5,	// (0x000496d0) main_mp3_pane_t1

0x0c19,	// (0x0003dbf4) main_camera_pane_g8_ParamLimits

0x0c19,	// (0x0003dbf4) main_camera_pane_g8

0x3c25,	// (0x00040c00) main_video_pane_g7_ParamLimits

0x3c25,	// (0x00040c00) main_video_pane_g7

0xc0e1,	// (0x000490bc) main_camera2_pane_t7_ParamLimits

0xc0e1,	// (0x000490bc) main_camera2_pane_t7

0x0d6b,	// (0x0003dd46) scroll_pane_cp025_ParamLimits

0x0d6b,	// (0x0003dd46) scroll_pane_cp025

0x0d7f,	// (0x0003dd5a) scroll_pane_cp026_ParamLimits

0x0d7f,	// (0x0003dd5a) scroll_pane_cp026

0x0d8e,	// (0x0003dd69) wml_content_pane_ParamLimits

0x02c0,	// (0x0003d29b) main_touch_calib_pane

0x7dfe,	// (0x00044dd9) main_touch_calib_pane_g1

0x7e0a,	// (0x00044de5) main_touch_calib_pane_g2

0x7e16,	// (0x00044df1) main_touch_calib_pane_g3

0x7e22,	// (0x00044dfd) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0004c793) main_touch_calib_pane_g

0x7e2e,	// (0x00044e09) main_touch_calib_pane_t1

0x7e48,	// (0x00044e23) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0004c79c) main_touch_calib_pane_t

0x13ff,	// (0x0003e3da) mup_progress_pane_cp02

0x141e,	// (0x0003e3f9) navi_pane_g1

0x1480,	// (0x0003e45b) navi_pane_mp_t3

0x175a,	// (0x0003e735) main_mp3_pane_ParamLimits

0x7194,	// (0x0004416f) navi_pane_ParamLimits

0xc692,	// (0x0004966d) main_mp3_pane_g1_ParamLimits

0x7d37,	// (0x00044d12) main_mp3_pane_g2_ParamLimits

0x7d43,	// (0x00044d1e) main_mp3_pane_g3_ParamLimits

0x7d43,	// (0x00044d1e) main_mp3_pane_g3

0x7d51,	// (0x00044d2c) main_mp3_pane_g4_ParamLimits

0x7d51,	// (0x00044d2c) main_mp3_pane_g4

0xc6c2,	// (0x0004969d) main_mp3_pane_g5_ParamLimits

0xc6c2,	// (0x0004969d) main_mp3_pane_g5

0xc6d0,	// (0x000496ab) main_mp3_pane_g6_ParamLimits

0xc6d0,	// (0x000496ab) main_mp3_pane_g6

0xc6dd,	// (0x000496b8) main_mp3_pane_g7_ParamLimits

0xc6dd,	// (0x000496b8) main_mp3_pane_g7

0xc6e9,	// (0x000496c4) main_mp3_pane_g8_ParamLimits

0xc6e9,	// (0x000496c4) main_mp3_pane_g8

0xf79a,	// (0x0004c775) main_mp3_pane_g_ParamLimits

0x7d5d,	// (0x00044d38) main_mp3_pane_t2

0x7d6b,	// (0x00044d46) main_mp3_pane_t3

0xc703,	// (0x000496de) main_mp3_pane_t4

0xc711,	// (0x000496ec) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0004c786) main_mp3_pane_t

0xc71f,	// (0x000496fa) mup_progress_pane_cp01

0xbd3e,	// (0x00048d19) aid_zoom_text_secondary2

0xc515,	// (0x000494f0) list_cale_ev2_pane

0xc51d,	// (0x000494f8) scroll_pane_cp023_ParamLimits

0x7ea0,	// (0x00044e7b) field_cale_ev2_pane_ParamLimits

0x7ea0,	// (0x00044e7b) field_cale_ev2_pane

0xc727,	// (0x00049702) field_cale_ev2_pane_g1_ParamLimits

0xc727,	// (0x00049702) field_cale_ev2_pane_g1

0xc733,	// (0x0004970e) field_cale_ev2_pane_g2_ParamLimits

0xc733,	// (0x0004970e) field_cale_ev2_pane_g2

0xc74b,	// (0x00049726) field_cale_ev2_pane_g3_ParamLimits

0xc74b,	// (0x00049726) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0004c7a7) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0004c7a7) field_cale_ev2_pane_g

0xc76f,	// (0x0004974a) field_cale_ev2_pane_t1_ParamLimits

0xc76f,	// (0x0004974a) field_cale_ev2_pane_t1

0xc786,	// (0x00049761) field_cale_ev2_pane_t2_ParamLimits

0xc786,	// (0x00049761) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0004c7b0) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0004c7b0) field_cale_ev2_pane_t

0x543d,	// (0x00042418) main_postcard_pane_g5_ParamLimits

0x543d,	// (0x00042418) main_postcard_pane_g5

0x5453,	// (0x0004242e) main_postcard_pane_g6_ParamLimits

0x5453,	// (0x0004242e) main_postcard_pane_g6

0x39d1,	// (0x000409ac) camera2_autofocus_pane_cp_ParamLimits

0x39d1,	// (0x000409ac) camera2_autofocus_pane_cp

0x175a,	// (0x0003e735) main_mup3_pane

0x7ee4,	// (0x00044ebf) main_mup3_pane_g1_ParamLimits

0x7ee4,	// (0x00044ebf) main_mup3_pane_g1

0x7f06,	// (0x00044ee1) main_mup3_pane_g2_ParamLimits

0x7f06,	// (0x00044ee1) main_mup3_pane_g2

0x7f89,	// (0x00044f64) main_mup3_pane_g3_ParamLimits

0x7f89,	// (0x00044f64) main_mup3_pane_g3

0x7fcd,	// (0x00044fa8) main_mup3_pane_g4_ParamLimits

0x7fcd,	// (0x00044fa8) main_mup3_pane_g4

0x8011,	// (0x00044fec) main_mup3_pane_g5_ParamLimits

0x8011,	// (0x00044fec) main_mup3_pane_g5

0x8055,	// (0x00045030) main_mup3_pane_g6_ParamLimits

0x8055,	// (0x00045030) main_mup3_pane_g6

0xc79b,	// (0x00049776) main_mup3_pane_g7_ParamLimits

0xc79b,	// (0x00049776) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0004c7c0) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0004c7c0) main_mup3_pane_g

0x80d1,	// (0x000450ac) main_mup3_pane_t1_ParamLimits

0x80d1,	// (0x000450ac) main_mup3_pane_t1

0x814b,	// (0x00045126) main_mup3_pane_t2_ParamLimits

0x814b,	// (0x00045126) main_mup3_pane_t2

0x8225,	// (0x00045200) main_mup3_pane_t4_ParamLimits

0x8225,	// (0x00045200) main_mup3_pane_t4

0x8283,	// (0x0004525e) main_mup3_pane_t5_ParamLimits

0x8283,	// (0x0004525e) main_mup3_pane_t5

0x833b,	// (0x00045316) main_mup3_pane_t6_ParamLimits

0x833b,	// (0x00045316) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0004c7d1) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0004c7d1) main_mup3_pane_t

0x83f1,	// (0x000453cc) mup3_progress_pane_ParamLimits

0x83f1,	// (0x000453cc) mup3_progress_pane

0x8475,	// (0x00045450) popup_mup3_control_window_ParamLimits

0x8475,	// (0x00045450) popup_mup3_control_window

0xc7a9,	// (0x00049784) popup_mup3_text_window

0x84ab,	// (0x00045486) mup3_progress_pane_t1

0x84c2,	// (0x0004549d) mup3_progress_pane_t2

0xc7b1,	// (0x0004978c) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0004c7de) mup3_progress_pane_t

0xc7c8,	// (0x000497a3) mup_progress_pane_cp03

0x02c0,	// (0x0003d29b) bg_tb_trans_pane_cp04

0x84d9,	// (0x000454b4) mup3_volume_pane

0x84e1,	// (0x000454bc) popup_mup3_control_window_g1

0x84ea,	// (0x000454c5) mup3_volume_pane_g1

0x84f3,	// (0x000454ce) mup3_volume_pane_g2

0x84fc,	// (0x000454d7) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0004c7e5) mup3_volume_pane_g

0x02c0,	// (0x0003d29b) bg_tb_trans_pane_cp03

0xc7d8,	// (0x000497b3) popup_mup3_text_window_g1

0xc7e0,	// (0x000497bb) popup_mup3_text_window_t1

0x0aaa,	// (0x0003da85) list_calc_item_pane_g1_ParamLimits

0xc19b,	// (0x00049176) mup_volume_pane_cp_g1

0x7e62,	// (0x00044e3d) main_touch_calib_pane_t3

0x7e76,	// (0x00044e51) main_touch_calib_pane_t4

0x7e8a,	// (0x00044e65) main_touch_calib_pane_t5

0x02ca,	// (0x0003d2a5) aid_cell_size_toolbar2

0x02d2,	// (0x0003d2ad) aid_popup3_width_pane

0xbd36,	// (0x00048d11) aid_zoom_text_msg_primary

0xbe40,	// (0x00048e1b) vorec_t7

0x0a6e,	// (0x0003da49) bg_calc_paper_pane_g1_ParamLimits

0x0a7a,	// (0x0003da55) bg_calc_paper_pane_g2_ParamLimits

0x0a86,	// (0x0003da61) bg_calc_paper_pane_g3_ParamLimits

0x0a92,	// (0x0003da6d) bg_calc_paper_pane_g4_ParamLimits

0x0a9e,	// (0x0003da79) bg_calc_paper_pane_g5_ParamLimits

0x348d,	// (0x00040468) bg_calc_paper_pane_g6_ParamLimits

0x34a0,	// (0x0004047b) bg_calc_paper_pane_g7_ParamLimits

0x34b3,	// (0x0004048e) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0004c198) bg_calc_paper_pane_g_ParamLimits

0x34c4,	// (0x0004049f) calc_bg_paper_pane_g9_ParamLimits

0x3b33,	// (0x00040b0e) image_qvga_pane_ParamLimits

0x3b33,	// (0x00040b0e) image_qvga_pane

0x0997,	// (0x0003d972) bg_popup_sub_pane_cp04_ParamLimits

0x16bf,	// (0x0003e69a) popup_mup_playback_window_g1_ParamLimits

0x16cb,	// (0x0003e6a6) popup_mup_playback_window_t1_ParamLimits

0x16e0,	// (0x0003e6bb) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0004c524) popup_mup_playback_window_t_ParamLimits

0x7943,	// (0x0004491e) main_mup2_pane_g3_ParamLimits

0x7943,	// (0x0004491e) main_mup2_pane_g3

0x3ddf,	// (0x00040dba) popup_toolbar_window_cp04

0x5d2f,	// (0x00042d0a) popup_call2_audio_second_window_g3_ParamLimits

0x5d2f,	// (0x00042d0a) popup_call2_audio_second_window_g3

0x6139,	// (0x00043114) popup_call2_audio_first_window_g4_ParamLimits

0x6139,	// (0x00043114) popup_call2_audio_first_window_g4

0x67b8,	// (0x00043793) popup_call2_audio_in_window_g4_ParamLimits

0x67b8,	// (0x00043793) popup_call2_audio_in_window_g4

0x5584,	// (0x0004255f) aid_area_sk_bg_cut_ParamLimits

0x5584,	// (0x0004255f) aid_area_sk_bg_cut

0x16f5,	// (0x0003e6d0) aid_area_sk_bg_cut_2_ParamLimits

0x16f5,	// (0x0003e6d0) aid_area_sk_bg_cut_2

0x7c85,	// (0x00044c60) aid_placing_details_win

0x7c8d,	// (0x00044c68) aid_placing_details_win_2

0xc5d4,	// (0x000495af) camera2_autofocus_pane_g1_ParamLimits

0x308e,	// (0x00040069) popup_fixed_preview_cale_window_ParamLimits

0x308e,	// (0x00040069) popup_fixed_preview_cale_window

0x14cf,	// (0x0003e4aa) navi_slider_pane_g3

0x14d8,	// (0x0003e4b3) navi_slider_pane_g4

0x14e1,	// (0x0003e4bc) navi_slider_pane_g5

0x14cf,	// (0x0003e4aa) navi_slider_pane_g6

0xc05b,	// (0x00049036) navi_slider_pane_g7

0x15f6,	// (0x0003e5d1) mup_scale_pane_g3

0x15ff,	// (0x0003e5da) mup_scale_pane_g4

0x1608,	// (0x0003e5e3) mup_scale_pane_g5

0x52e4,	// (0x000422bf) mup_scale_pane_g6

0x52ed,	// (0x000422c8) mup_scale_pane_g7

0x14cf,	// (0x0003e4aa) cams2_slider_pane_g3

0xc250,	// (0x0004922b) cams2_slider_pane_g4

0xc258,	// (0x00049233) cams2_slider_pane_g5

0x14cf,	// (0x0003e4aa) cams2_slider_pane_g6

0xc260,	// (0x0004923b) cams2_slider_pane_g7

0xc492,	// (0x0004946d) camera2_autofocus_pane_cp_g1

0xc7ee,	// (0x000497c9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7ee,	// (0x000497c9) bg_popup_preview_window_pane_cp02

0xc7fa,	// (0x000497d5) list_fp_cale_pane_ParamLimits

0xc7fa,	// (0x000497d5) list_fp_cale_pane

0xc806,	// (0x000497e1) popup_fixed_preview_cale_window_t1_ParamLimits

0xc806,	// (0x000497e1) popup_fixed_preview_cale_window_t1

0x8505,	// (0x000454e0) popup_fixed_preview_cale_window_t2_ParamLimits

0x8505,	// (0x000454e0) popup_fixed_preview_cale_window_t2

0x851a,	// (0x000454f5) popup_fixed_preview_cale_window_t3_ParamLimits

0x851a,	// (0x000454f5) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0004c7ec) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0004c7ec) popup_fixed_preview_cale_window_t

0x1768,	// (0x0003e743) list_single_fp_cale_pane_ParamLimits

0x1768,	// (0x0003e743) list_single_fp_cale_pane

0xc824,	// (0x000497ff) list_single_fp_cale_pane_g1_ParamLimits

0xc824,	// (0x000497ff) list_single_fp_cale_pane_g1

0xc830,	// (0x0004980b) list_single_fp_cale_pane_g2_ParamLimits

0xc830,	// (0x0004980b) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0004c7f3) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0004c7f3) list_single_fp_cale_pane_g

0xc849,	// (0x00049824) list_single_fp_cale_pane_t1_ParamLimits

0xc849,	// (0x00049824) list_single_fp_cale_pane_t1

0xc85b,	// (0x00049836) list_single_fp_cale_pane_t2_ParamLimits

0xc85b,	// (0x00049836) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0004c7fa) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0004c7fa) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x02c0,	// (0x0003d29b) main_dialer_pane

0x8531,	// (0x0004550c) aid_cell_size_keypad

0x853b,	// (0x00045516) dialer_ne_pane

0x8545,	// (0x00045520) grid_dialer_command_1_pane

0x854d,	// (0x00045528) grid_dialer_command_2_pane

0x8555,	// (0x00045530) grid_dialer_keypad_pane

0x8569,	// (0x00045544) bg_popup_call_pane_cp06_ParamLimits

0x8569,	// (0x00045544) bg_popup_call_pane_cp06

0x8575,	// (0x00045550) dialer_ne_clear_pane_ParamLimits

0x8575,	// (0x00045550) dialer_ne_clear_pane

0xc88e,	// (0x00049869) dialer_ne_pane_g1

0xc896,	// (0x00049871) dialer_ne_pane_t1_ParamLimits

0xc896,	// (0x00049871) dialer_ne_pane_t1

0x8581,	// (0x0004555c) dialer_ne_pane_t2_ParamLimits

0x8581,	// (0x0004555c) dialer_ne_pane_t2

0x85ab,	// (0x00045586) dialer_ne_pane_t3_ParamLimits

0x85ab,	// (0x00045586) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0004c7ff) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0004c7ff) dialer_ne_pane_t

0x85db,	// (0x000455b6) dialer_ne_pane_t3_copy1_ParamLimits

0x85db,	// (0x000455b6) dialer_ne_pane_t3_copy1

0x860a,	// (0x000455e5) cell_dialer_keypad_pane_ParamLimits

0x860a,	// (0x000455e5) cell_dialer_keypad_pane

0x8621,	// (0x000455fc) cell_dialer_command_1_pane_ParamLimits

0x8621,	// (0x000455fc) cell_dialer_command_1_pane

0x8637,	// (0x00045612) cell_dialer_command_2_pane_ParamLimits

0x8637,	// (0x00045612) cell_dialer_command_2_pane

0xc8a8,	// (0x00049883) bg_button_pane_cp02_ParamLimits

0xc8a8,	// (0x00049883) bg_button_pane_cp02

0x8646,	// (0x00045621) cell_dialer_keypad_pane_g1_ParamLimits

0x8646,	// (0x00045621) cell_dialer_keypad_pane_g1

0xc8a8,	// (0x00049883) bg_button_pane_cp03_ParamLimits

0xc8a8,	// (0x00049883) bg_button_pane_cp03

0x865b,	// (0x00045636) cell_dialer_command_1_pane_g1_ParamLimits

0x865b,	// (0x00045636) cell_dialer_command_1_pane_g1

0xc8b4,	// (0x0004988f) bg_button_pane_cp04

0x866f,	// (0x0004564a) cell_dialer_command_2_pane_g1

0x14be,	// (0x0003e499) bg_button_pane_cp06

0xc8bc,	// (0x00049897) dialer_ne_clear_pane_g1

0x4dc6,	// (0x00041da1) navi_pane_g2

0x4df4,	// (0x00041dcf) navi_pane_g3

0x0002,

0xf44c,	// (0x0004c427) navi_pane_g

0x4e1f,	// (0x00041dfa) navi_pane_mv_g2

0x4e46,	// (0x00041e21) navi_pane_mv_g5

0x4e4e,	// (0x00041e29) navi_pane_mv_t1

0x0a62,	// (0x0003da3d) main_clock2_pane

0x86a7,	// (0x00045682) main_clock2_list_pane_ParamLimits

0x86a7,	// (0x00045682) main_clock2_list_pane

0x86df,	// (0x000456ba) main_clock2_pane_t1_ParamLimits

0x86df,	// (0x000456ba) main_clock2_pane_t1

0x871b,	// (0x000456f6) main_clock2_pane_t2_ParamLimits

0x871b,	// (0x000456f6) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0004c806) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0004c806) main_clock2_pane_t

0x87a7,	// (0x00045782) popup_clock_analogue_window_cp03_ParamLimits

0x87a7,	// (0x00045782) popup_clock_analogue_window_cp03

0x87ce,	// (0x000457a9) popup_clock_digital_window_cp02_ParamLimits

0x87ce,	// (0x000457a9) popup_clock_digital_window_cp02

0x8847,	// (0x00045822) main_clock2_list_single_pane_ParamLimits

0x8847,	// (0x00045822) main_clock2_list_single_pane

0x14be,	// (0x0003e499) list_highlight_pane_cp05

0xc8c4,	// (0x0004989f) main_clock2_list_single_pane_t1

0x3ddf,	// (0x00040dba) popup_toolbar_window_cp04_ParamLimits

0x7cf4,	// (0x00044ccf) camera2_autofocus_pane_g2_ParamLimits

0x7cf4,	// (0x00044ccf) camera2_autofocus_pane_g2

0x7d00,	// (0x00044cdb) camera2_autofocus_pane_g3_ParamLimits

0x7d00,	// (0x00044cdb) camera2_autofocus_pane_g3

0x7d0c,	// (0x00044ce7) camera2_autofocus_pane_g4_ParamLimits

0x7d0c,	// (0x00044ce7) camera2_autofocus_pane_g4

0x7d18,	// (0x00044cf3) camera2_autofocus_pane_g5_ParamLimits

0x7d18,	// (0x00044cf3) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0004c74f) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0004c74f) camera2_autofocus_pane_g

0x7ec4,	// (0x00044e9f) camera2_autofocus_pane_cp_g2

0x7ecc,	// (0x00044ea7) camera2_autofocus_pane_cp_g3

0x7ed4,	// (0x00044eaf) camera2_autofocus_pane_cp_g4

0x7edc,	// (0x00044eb7) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0004c7b5) camera2_autofocus_pane_cp_g

0x8561,	// (0x0004553c) popup_dialer_spcha_window

0x02c0,	// (0x0003d29b) bg_popup_sub_pane_cp07

0xc8d2,	// (0x000498ad) list_spcha_pane

0xc8da,	// (0x000498b5) list_single_spcha_pane_ParamLimits

0xc8da,	// (0x000498b5) list_single_spcha_pane

0x02c0,	// (0x0003d29b) list_highlight_pane_cp06

0xc8eb,	// (0x000498c6) list_single_spcha_pane_t1

0x6562,	// (0x0004353d) popup_call2_audio_out_window_g4_ParamLimits

0x6562,	// (0x0004353d) popup_call2_audio_out_window_g4

0x02c0,	// (0x0003d29b) main_imed2_pane

0x6fa5,	// (0x00043f80) popup_imed_adjust2_window

0x6fb8,	// (0x00043f93) popup_imed_trans_window_ParamLimits

0x6fb8,	// (0x00043f93) popup_imed_trans_window

0xc2ca,	// (0x000492a5) popup_blid_sat_info2_window_t1

0xc2d8,	// (0x000492b3) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0004c6e4) popup_blid_sat_info2_window_t

0x88fd,	// (0x000458d8) aid_size_cell_colour_35

0x891d,	// (0x000458f8) aid_size_cell_colour_112

0x893d,	// (0x00045918) aid_size_cell_effect

0x6e46,	// (0x00043e21) bg_tb_trans_pane_cp02

0x101c,	// (0x0003dff7) heading_imed_pane

0x895d,	// (0x00045938) listscroll_imed_pane

0xc8f9,	// (0x000498d4) heading_imed_pane_g1

0xc901,	// (0x000498dc) heading_imed_pane_t1

0xc90f,	// (0x000498ea) grid_imed_colour_35_pane_ParamLimits

0xc90f,	// (0x000498ea) grid_imed_colour_35_pane

0x8969,	// (0x00045944) grid_imed_effect_pane

0xc92b,	// (0x00049906) list_imed_aspect_pane

0x8980,	// (0x0004595b) scroll_pane_cp027_ParamLimits

0x8980,	// (0x0004595b) scroll_pane_cp027

0x8991,	// (0x0004596c) cell_imed_effect_pane_ParamLimits

0x8991,	// (0x0004596c) cell_imed_effect_pane

0xc933,	// (0x0004990e) cell_imed_colour_pane_ParamLimits

0xc933,	// (0x0004990e) cell_imed_colour_pane

0xc97d,	// (0x00049958) cell_imed_colour_pane_g1_ParamLimits

0xc97d,	// (0x00049958) cell_imed_colour_pane_g1

0xc98e,	// (0x00049969) hgihlgiht_grid_pane_cp016_ParamLimits

0xc98e,	// (0x00049969) hgihlgiht_grid_pane_cp016

0x89b6,	// (0x00045991) cell_imed_effect_pane_g1

0x89be,	// (0x00045999) grid_highlight_pane_cp017

0xc99f,	// (0x0004997a) list_imed_single_pane_ParamLimits

0xc99f,	// (0x0004997a) list_imed_single_pane

0x02c0,	// (0x0003d29b) list_highlight_pane_cp07

0xc9b3,	// (0x0004998e) list_imed_aspect_pane_comp1_t1

0x6e46,	// (0x00043e21) bg_tb_trans_pane_cp05

0xc9d5,	// (0x000499b0) popup_imed_adjust2_window_g1

0xc9fc,	// (0x000499d7) popup_imed_adjust2_window_t1

0xca14,	// (0x000499ef) slider_imed_adjust_pane

0xca28,	// (0x00049a03) slider_imed_adjust_pane_g1

0xca38,	// (0x00049a13) slider_imed_adjust_pane_g2

0xca48,	// (0x00049a23) slider_imed_adjust_pane_g3

0xca59,	// (0x00049a34) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0004c823) slider_imed_adjust_pane_g

0x89c7,	// (0x000459a2) aid_size_cell_clipart2

0x89d3,	// (0x000459ae) grid_imed_clipart_pane

0xca6a,	// (0x00049a45) scroll_pane_cp031

0x89dd,	// (0x000459b8) cell_imed_clipart_pane_ParamLimits

0x89dd,	// (0x000459b8) cell_imed_clipart_pane

0x89fa,	// (0x000459d5) cell_imed_clipart_pane_g1

0x02c0,	// (0x0003d29b) grid_highlight_pane_cp014

0x86bc,	// (0x00045697) main_clock2_pane_g1_ParamLimits

0x86bc,	// (0x00045697) main_clock2_pane_g1

0x87ee,	// (0x000457c9) aid_call2_pane_cp10

0x8800,	// (0x000457db) aid_call_pane_cp10

0x13f3,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g1

0x13f3,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g2

0x8812,	// (0x000457ed) popup_clock_analogue_window_cp10_g3

0x8812,	// (0x000457ed) popup_clock_analogue_window_cp10_g4

0x13f3,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0004c811) popup_clock_analogue_window_cp10_g

0x8828,	// (0x00045803) popup_clock_analogue_window_cp10_t1

0x8859,	// (0x00045834) clock_digital_number_pane_cp10_ParamLimits

0x8859,	// (0x00045834) clock_digital_number_pane_cp10

0x8873,	// (0x0004584e) clock_digital_number_pane_cp11_ParamLimits

0x8873,	// (0x0004584e) clock_digital_number_pane_cp11

0x888d,	// (0x00045868) clock_digital_number_pane_cp12_ParamLimits

0x888d,	// (0x00045868) clock_digital_number_pane_cp12

0x88a7,	// (0x00045882) clock_digital_number_pane_cp13_ParamLimits

0x88a7,	// (0x00045882) clock_digital_number_pane_cp13

0x88c1,	// (0x0004589c) clock_digital_separator_pane_cp10_ParamLimits

0x88c1,	// (0x0004589c) clock_digital_separator_pane_cp10

0x88db,	// (0x000458b6) popup_clock_digital_window_cp02_t1_ParamLimits

0x88db,	// (0x000458b6) popup_clock_digital_window_cp02_t1

0x098f,	// (0x0003d96a) clock_digital_number_pane_cp10_g1

0x098f,	// (0x0003d96a) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0004c82c) clock_digital_number_pane_cp10_g

0x098f,	// (0x0003d96a) clock_digital_separator_pane_cp10_g1

0x098f,	// (0x0003d96a) clock_digital_separator_pane_g2_cp10

0x148e,	// (0x0003e469) navi_pane_vded_g4

0x1497,	// (0x0003e472) navi_pane_vded_g5

0x14a0,	// (0x0003e47b) navi_pane_vded_t1

0x02c0,	// (0x0003d29b) main_vded_pane

0x8a03,	// (0x000459de) main_vded_pane_g1

0x8a0f,	// (0x000459ea) main_vded_pane_g2

0x8a1b,	// (0x000459f6) main_vded_pane_g3

0x0002,

0xf856,	// (0x0004c831) main_vded_pane_g

0x8a27,	// (0x00045a02) main_vded_pane_t1

0x8a35,	// (0x00045a10) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0004c838) main_vded_pane_t

0x8a43,	// (0x00045a1e) vded_slider_pane

0x8a4d,	// (0x00045a28) vded_video_pane

0xca72,	// (0x00049a4d) vded_video_pane_g1

0x8a59,	// (0x00045a34) vded_video_pane_g2

0xc492,	// (0x0004946d) vded_video_pane_g3

0x0002,

0xf862,	// (0x0004c83d) vded_video_pane_g

0xca7c,	// (0x00049a57) vded_slider_pane_g1

0xc19b,	// (0x00049176) vded_slider_pane_g2

0xca85,	// (0x00049a60) vded_slider_pane_g3

0xca8e,	// (0x00049a69) vded_slider_pane_g4

0xca97,	// (0x00049a72) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0004c844) vded_slider_pane_g

0x845f,	// (0x0004543a) mup3_rocker_pane_ParamLimits

0x845f,	// (0x0004543a) mup3_rocker_pane

0x8a62,	// (0x00045a3d) mup3_control_keys_pane_g1

0x8a6a,	// (0x00045a45) mup3_control_keys_pane_g2

0x8a72,	// (0x00045a4d) mup3_control_keys_pane_g3

0x8a7a,	// (0x00045a55) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0004c84f) mup3_control_keys_pane_g

0x30c5,	// (0x000400a0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x30c5,	// (0x000400a0) popup_toolbar2_fixed_window_cp01

0x8495,	// (0x00045470) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8495,	// (0x00045470) popup_toolbar2_fixed_window_cp02

0x5ea1,	// (0x00042e7c) popup_call2_audio_second_window_t4_ParamLimits

0x5ea1,	// (0x00042e7c) popup_call2_audio_second_window_t4

0x63cf,	// (0x000433aa) popup_call2_audio_first_window_t6_ParamLimits

0x63cf,	// (0x000433aa) popup_call2_audio_first_window_t6

0x6665,	// (0x00043640) popup_call2_audio_out_window_t6_ParamLimits

0x6665,	// (0x00043640) popup_call2_audio_out_window_t6

0x02c0,	// (0x0003d29b) main_vitu_pane

0x8a8a,	// (0x00045a65) aid_size_cell_itu_ParamLimits

0x8a8a,	// (0x00045a65) aid_size_cell_itu

0x175a,	// (0x0003e735) bg_popup_window_pane_cp08_ParamLimits

0x175a,	// (0x0003e735) bg_popup_window_pane_cp08

0x8aa0,	// (0x00045a7b) field_vitu_entry_pane_ParamLimits

0x8aa0,	// (0x00045a7b) field_vitu_entry_pane

0x8ab7,	// (0x00045a92) grid_vitu_function_pane_ParamLimits

0x8ab7,	// (0x00045a92) grid_vitu_function_pane

0x8ad2,	// (0x00045aad) grid_vitu_itu_pane_ParamLimits

0x8ad2,	// (0x00045aad) grid_vitu_itu_pane

0x8af0,	// (0x00045acb) cell_vitu_itu_pane_ParamLimits

0x8af0,	// (0x00045acb) cell_vitu_itu_pane

0x8b16,	// (0x00045af1) cell_vitu_function_pane_ParamLimits

0x8b16,	// (0x00045af1) cell_vitu_function_pane

0x175a,	// (0x0003e735) bg_popup_sub_pane_cp08_ParamLimits

0x175a,	// (0x0003e735) bg_popup_sub_pane_cp08

0x8b31,	// (0x00045b0c) field_vitu_entry_pane_t1_ParamLimits

0x8b31,	// (0x00045b0c) field_vitu_entry_pane_t1

0xcab8,	// (0x00049a93) field_vitu_entry_pane_t2_ParamLimits

0xcab8,	// (0x00049a93) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0004c85d) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0004c85d) field_vitu_entry_pane_t

0xcad5,	// (0x00049ab0) bg_button_pane_cp05_ParamLimits

0xcad5,	// (0x00049ab0) bg_button_pane_cp05

0x8b51,	// (0x00045b2c) cell_vitu_itu_pane_g1

0x8b69,	// (0x00045b44) cell_vitu_itu_pane_t1_ParamLimits

0x8b69,	// (0x00045b44) cell_vitu_itu_pane_t1

0x8b7b,	// (0x00045b56) cell_vitu_itu_pane_t2_ParamLimits

0x8b7b,	// (0x00045b56) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0004c862) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0004c862) cell_vitu_itu_pane_t

0xcae3,	// (0x00049abe) bg_button_pane_cp07

0x8bb0,	// (0x00045b8b) cell_vitu_function_pane_g1

0xbd46,	// (0x00048d21) main_calc_pane_g1

0x2ef8,	// (0x0003fed3) aid_visual_content_pane

0x02c0,	// (0x0003d29b) main_vradio_pane

0x8bb9,	// (0x00045b94) main_vradio_pane_g1_ParamLimits

0x8bb9,	// (0x00045b94) main_vradio_pane_g1

0xcaed,	// (0x00049ac8) main_vradio_pane_g2_ParamLimits

0xcaed,	// (0x00049ac8) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0004c869) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0004c869) main_vradio_pane_g

0x8bd0,	// (0x00045bab) main_vradio_pane_t1_ParamLimits

0x8bd0,	// (0x00045bab) main_vradio_pane_t1

0x8be5,	// (0x00045bc0) main_vradio_pane_t2_ParamLimits

0x8be5,	// (0x00045bc0) main_vradio_pane_t2

0xcafa,	// (0x00049ad5) main_vradio_pane_t3_ParamLimits

0xcafa,	// (0x00049ad5) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0004c86e) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0004c86e) main_vradio_pane_t

0x8bfa,	// (0x00045bd5) vradio_rocker_control_pane_ParamLimits

0x8bfa,	// (0x00045bd5) vradio_rocker_control_pane

0x8c0c,	// (0x00045be7) vradio_station_info_pane_ParamLimits

0x8c0c,	// (0x00045be7) vradio_station_info_pane

0xcb0e,	// (0x00049ae9) vradio_frequency_info_pane_ParamLimits

0xcb0e,	// (0x00049ae9) vradio_frequency_info_pane

0xc492,	// (0x0004946d) vradio_station_info_pane_g1

0xcb1d,	// (0x00049af8) vradio_station_info_pane_t1_ParamLimits

0xcb1d,	// (0x00049af8) vradio_station_info_pane_t1

0xcb3f,	// (0x00049b1a) vradio_station_info_pane_t2_ParamLimits

0xcb3f,	// (0x00049b1a) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0004c875) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0004c875) vradio_station_info_pane_t

0xcb51,	// (0x00049b2c) vradio_tuning_pane

0xcb59,	// (0x00049b34) vradio_rocker_control_pane_g1

0xcb61,	// (0x00049b3c) vradio_rocker_control_pane_g2

0xcb69,	// (0x00049b44) vradio_rocker_control_pane_g3

0xcb71,	// (0x00049b4c) vradio_rocker_control_pane_g4

0xcb79,	// (0x00049b54) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0004c87a) vradio_rocker_control_pane_g

0x8c1c,	// (0x00045bf7) vradio_frequency_info_pane_g1

0xcb81,	// (0x00049b5c) vradio_frequency_info_pane_t1_ParamLimits

0xcb81,	// (0x00049b5c) vradio_frequency_info_pane_t1

0x8c26,	// (0x00045c01) vradio_tuning_pane_g1

0x8c31,	// (0x00045c0c) vradio_tuning_pane_t1

0x02e6,	// (0x0003d2c1) area_side_right_pane_ParamLimits

0x02e6,	// (0x0003d2c1) area_side_right_pane

0x6def,	// (0x00043dca) status_small_pane_g1

0x6df7,	// (0x00043dd2) status_small_pane_g2

0x6e00,	// (0x00043ddb) status_small_pane_g3

0x6e09,	// (0x00043de4) status_small_pane_g4

0x0003,

0xf65f,	// (0x0004c63a) status_small_pane_g

0x6e12,	// (0x00043ded) status_small_pane_t1

0x02c0,	// (0x0003d29b) main_video3_pane

0xcb95,	// (0x00049b70) cams_zoom_vslider_pane

0xcb9d,	// (0x00049b78) image3_wide_pane_ParamLimits

0xcb9d,	// (0x00049b78) image3_wide_pane

0xcbb7,	// (0x00049b92) image3_wide_small_pane

0xcbc3,	// (0x00049b9e) main_video3_pane_g1_ParamLimits

0xcbc3,	// (0x00049b9e) main_video3_pane_g1

0xcbdf,	// (0x00049bba) main_video3_pane_g2_ParamLimits

0xcbdf,	// (0x00049bba) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0004c885) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0004c885) main_video3_pane_g

0xcbfb,	// (0x00049bd6) main_video3_pane_t1_ParamLimits

0xcbfb,	// (0x00049bd6) main_video3_pane_t1

0xcc26,	// (0x00049c01) main_video3_pane_t2_ParamLimits

0xcc26,	// (0x00049c01) main_video3_pane_t2

0xcc53,	// (0x00049c2e) main_video3_pane_t3_ParamLimits

0xcc53,	// (0x00049c2e) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0004c88a) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0004c88a) main_video3_pane_t

0xcc80,	// (0x00049c5b) cams_zoom_vslider_pane_g1

0xcc89,	// (0x00049c64) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0004c891) cams_zoom_vslider_pane_g

0xcc91,	// (0x00049c6c) small_slider_vertical_pane

0xc492,	// (0x0004946d) small_slider_vertical_pane_g1

0xc492,	// (0x0004946d) small_slider_vertical_pane_g2

0xcc99,	// (0x00049c74) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0004c896) small_slider_vertical_pane_g

0x02c0,	// (0x0003d29b) main_hwr_training_pane

0xcca2,	// (0x00049c7d) hwr_training_instruct_pane_ParamLimits

0xcca2,	// (0x00049c7d) hwr_training_instruct_pane

0x8c40,	// (0x00045c1b) hwr_training_navi_pane_ParamLimits

0x8c40,	// (0x00045c1b) hwr_training_navi_pane

0x8c5f,	// (0x00045c3a) hwr_training_write_pane_ParamLimits

0x8c5f,	// (0x00045c3a) hwr_training_write_pane

0x02c0,	// (0x0003d29b) bg_frame_shadow_pane

0xccd9,	// (0x00049cb4) hwr_training_write_pane_g1

0xcce1,	// (0x00049cbc) hwr_training_write_pane_g2

0xcce9,	// (0x00049cc4) hwr_training_write_pane_g3

0xccf1,	// (0x00049ccc) hwr_training_write_pane_g4

0xccf9,	// (0x00049cd4) hwr_training_write_pane_g5

0xcd01,	// (0x00049cdc) hwr_training_write_pane_g6

0xcd09,	// (0x00049ce4) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0004c89d) hwr_training_write_pane_g

0xed9e,	// (0x0004bd79) hwr_training_navi_pane_g1_ParamLimits

0xed9e,	// (0x0004bd79) hwr_training_navi_pane_g1

0xedb0,	// (0x0004bd8b) hwr_training_navi_pane_g2_ParamLimits

0xedb0,	// (0x0004bd8b) hwr_training_navi_pane_g2

0xedc2,	// (0x0004bd9d) hwr_training_navi_pane_g3_ParamLimits

0xedc2,	// (0x0004bd9d) hwr_training_navi_pane_g3

0xedd2,	// (0x0004bdad) hwr_training_navi_pane_g4_ParamLimits

0xedd2,	// (0x0004bdad) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0004c8ac) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0004c8ac) hwr_training_navi_pane_g

0xeddf,	// (0x0004bdba) hwr_training_navi_pane_t1

0x8ca7,	// (0x00045c82) list_single_hwr_training_instruct_pane_ParamLimits

0x8ca7,	// (0x00045c82) list_single_hwr_training_instruct_pane

0xcd11,	// (0x00049cec) list_single_hwr_training_instruct_pane_t1

0xc3d2,	// (0x000493ad) bg_frame_shadow_pane_g1

0xcd20,	// (0x00049cfb) bg_frame_shadow_pane_g2

0xcd28,	// (0x00049d03) bg_frame_shadow_pane_g3

0xcd30,	// (0x00049d0b) bg_frame_shadow_pane_g4

0xcd38,	// (0x00049d13) bg_frame_shadow_pane_g5

0xcd40,	// (0x00049d1b) bg_frame_shadow_pane_g6

0xcd48,	// (0x00049d23) bg_frame_shadow_pane_g7

0x0b2d,	// (0x0003db08) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0004c8b7) bg_frame_shadow_pane_g

0x02c0,	// (0x0003d29b) main_video_tele_dialer_pane

0x8cc3,	// (0x00045c9e) aid_size_cell_video_keypad_ParamLimits

0x8cc3,	// (0x00045c9e) aid_size_cell_video_keypad

0x8cdd,	// (0x00045cb8) grid_video_dialer_keypad_pane_ParamLimits

0x8cdd,	// (0x00045cb8) grid_video_dialer_keypad_pane

0x8d2b,	// (0x00045d06) video_down_pane_cp_ParamLimits

0x8d2b,	// (0x00045d06) video_down_pane_cp

0x8d5f,	// (0x00045d3a) cell_video_dialer_keypad_pane_ParamLimits

0x8d5f,	// (0x00045d3a) cell_video_dialer_keypad_pane

0xcd50,	// (0x00049d2b) bg_button_pane_cp08_ParamLimits

0xcd50,	// (0x00049d2b) bg_button_pane_cp08

0x8d85,	// (0x00045d60) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8d85,	// (0x00045d60) cell_video_dialer_keypad_pane_g1

0x8449,	// (0x00045424) mup3_rocker2_pane_ParamLimits

0x8449,	// (0x00045424) mup3_rocker2_pane

0xc492,	// (0x0004946d) mup3_rocker2_pane_g1

0x6e54,	// (0x00043e2f) main_dialer2_pane

0x02c0,	// (0x0003d29b) main_mp4_pane

0xedf5,	// (0x0004bdd0) main_mp4_pane_g1_ParamLimits

0xedf5,	// (0x0004bdd0) main_mp4_pane_g1

0xedf5,	// (0x0004bdd0) main_mp4_pane_g2_ParamLimits

0xedf5,	// (0x0004bdd0) main_mp4_pane_g2

0x8dc0,	// (0x00045d9b) main_mp4_pane_g3_ParamLimits

0x8dc0,	// (0x00045d9b) main_mp4_pane_g3

0xee03,	// (0x0004bdde) main_mp4_pane_g4_ParamLimits

0xee03,	// (0x0004bdde) main_mp4_pane_g4

0xee1d,	// (0x0004bdf8) main_mp4_pane_g5_ParamLimits

0xee1d,	// (0x0004bdf8) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0004c8d7) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0004c8d7) main_mp4_pane_g

0xee51,	// (0x0004be2c) main_mp4_pane_t1_ParamLimits

0xee51,	// (0x0004be2c) main_mp4_pane_t1

0xeead,	// (0x0004be88) main_mp4_pane_t2_ParamLimits

0xeead,	// (0x0004be88) main_mp4_pane_t2

0xcd5c,	// (0x00049d37) main_mp4_pane_t3_ParamLimits

0xcd5c,	// (0x00049d37) main_mp4_pane_t3

0xeeff,	// (0x0004beda) main_mp4_pane_t4_ParamLimits

0xeeff,	// (0x0004beda) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0004c8e4) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0004c8e4) main_mp4_pane_t

0xef3f,	// (0x0004bf1a) mp4_progress_pane_ParamLimits

0xef3f,	// (0x0004bf1a) mp4_progress_pane

0xef89,	// (0x0004bf64) mp4_rocker_pane_ParamLimits

0xef89,	// (0x0004bf64) mp4_rocker_pane

0xcd84,	// (0x00049d5f) mp4_progress_pane_t1

0xcd9d,	// (0x00049d78) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0004c8ed) mp4_progress_pane_t

0xcdb6,	// (0x00049d91) mup_progress_pane_cp04

0xc492,	// (0x0004946d) mp4_rocker_pane_g1

0x8e0a,	// (0x00045de5) aid_cell_size_keypad2_ParamLimits

0x8e0a,	// (0x00045de5) aid_cell_size_keypad2

0x8e20,	// (0x00045dfb) dialer2_ne_pane_ParamLimits

0x8e20,	// (0x00045dfb) dialer2_ne_pane

0x8e38,	// (0x00045e13) grid_dialer2_keypad_pane_ParamLimits

0x8e38,	// (0x00045e13) grid_dialer2_keypad_pane

0xc271,	// (0x0004924c) bg_popup_call_pane_cp07_ParamLimits

0xc271,	// (0x0004924c) bg_popup_call_pane_cp07

0x8e54,	// (0x00045e2f) dialer2_ne_pane_t1_ParamLimits

0x8e54,	// (0x00045e2f) dialer2_ne_pane_t1

0x8e94,	// (0x00045e6f) cell_dialer2_keypad_pane_ParamLimits

0x8e94,	// (0x00045e6f) cell_dialer2_keypad_pane

0xcdd4,	// (0x00049daf) bg_button_pane_pane_cp04_ParamLimits

0xcdd4,	// (0x00049daf) bg_button_pane_pane_cp04

0x8eba,	// (0x00045e95) cell_dialer2_keypad_pane_g1_ParamLimits

0x8eba,	// (0x00045e95) cell_dialer2_keypad_pane_g1

0x3d0d,	// (0x00040ce8) aid_placing_vt_set_content_ParamLimits

0x3d0d,	// (0x00040ce8) aid_placing_vt_set_content

0x3d2d,	// (0x00040d08) aid_placing_vt_set_title_ParamLimits

0x3d2d,	// (0x00040d08) aid_placing_vt_set_title

0x02c0,	// (0x0003d29b) main_image3_pane

0x8f80,	// (0x00045f5b) area_side_right_pane_cp01_ParamLimits

0x8f80,	// (0x00045f5b) area_side_right_pane_cp01

0xedf5,	// (0x0004bdd0) main_image3_pane_g1_ParamLimits

0xedf5,	// (0x0004bdd0) main_image3_pane_g1

0x8f99,	// (0x00045f74) main_image3_pane_g2_ParamLimits

0x8f99,	// (0x00045f74) main_image3_pane_g2

0x8fc1,	// (0x00045f9c) main_image3_pane_g3_ParamLimits

0x8fc1,	// (0x00045f9c) main_image3_pane_g3

0x8feb,	// (0x00045fc6) main_image3_pane_g4_ParamLimits

0x8feb,	// (0x00045fc6) main_image3_pane_g4

0x0003,

0xf921,	// (0x0004c8fc) main_image3_pane_g_ParamLimits

0xf921,	// (0x0004c8fc) main_image3_pane_g

0x9015,	// (0x00045ff0) main_image3_pane_t1_ParamLimits

0x9015,	// (0x00045ff0) main_image3_pane_t1

0x906d,	// (0x00046048) main_image3_pane_t2_ParamLimits

0x906d,	// (0x00046048) main_image3_pane_t2

0x90bf,	// (0x0004609a) main_image3_pane_t3_ParamLimits

0x90bf,	// (0x0004609a) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0004c905) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0004c905) main_image3_pane_t

0x175a,	// (0x0003e735) grid_sctrl_middle_pane_cp01_ParamLimits

0x175a,	// (0x0003e735) grid_sctrl_middle_pane_cp01

0x9147,	// (0x00046122) cell_sctrl_middle_pane_cp01_ParamLimits

0x9147,	// (0x00046122) cell_sctrl_middle_pane_cp01

0x9164,	// (0x0004613f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9164,	// (0x0004613f) cell_sctrl_middle_pane_cp01_g1

0x02c0,	// (0x0003d29b) main_call4_pane

0x9179,	// (0x00046154) aid_size_button_call4_ParamLimits

0x9179,	// (0x00046154) aid_size_button_call4

0x91ac,	// (0x00046187) call4_windows_pane_ParamLimits

0x91ac,	// (0x00046187) call4_windows_pane

0x91ce,	// (0x000461a9) grid_call4_button_pane_ParamLimits

0x91ce,	// (0x000461a9) grid_call4_button_pane

0xcde0,	// (0x00049dbb) call4_windows_conf_pane

0xcdfb,	// (0x00049dd6) popup_call4_audio_first_window_ParamLimits

0xcdfb,	// (0x00049dd6) popup_call4_audio_first_window

0xce49,	// (0x00049e24) popup_call4_audio_second_window_ParamLimits

0xce49,	// (0x00049e24) popup_call4_audio_second_window

0xce5f,	// (0x00049e3a) popup_call4_audio_wait_window_ParamLimits

0xce5f,	// (0x00049e3a) popup_call4_audio_wait_window

0x91f9,	// (0x000461d4) cell_call4_button_pane_ParamLimits

0x91f9,	// (0x000461d4) cell_call4_button_pane

0x9220,	// (0x000461fb) bg_button_pane_cp09_ParamLimits

0x9220,	// (0x000461fb) bg_button_pane_cp09

0x922c,	// (0x00046207) cell_call4_button_pane_g1_ParamLimits

0x922c,	// (0x00046207) cell_call4_button_pane_g1

0x9252,	// (0x0004622d) cell_call4_button_pane_t1_ParamLimits

0x9252,	// (0x0004622d) cell_call4_button_pane_t1

0xcea7,	// (0x00049e82) popup_call4_audio_conf_window_ParamLimits

0xcea7,	// (0x00049e82) popup_call4_audio_conf_window

0x84ab,	// (0x00045486) mup3_progress_pane_t1_ParamLimits

0x84c2,	// (0x0004549d) mup3_progress_pane_t2_ParamLimits

0xc7b1,	// (0x0004978c) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0004c7de) mup3_progress_pane_t_ParamLimits

0xc7c8,	// (0x000497a3) mup_progress_pane_cp03_ParamLimits

0x8a82,	// (0x00045a5d) mup3_control_keys_pane_g4_copy1

0xef6d,	// (0x0004bf48) mp4_rocker2_pane_ParamLimits

0xef6d,	// (0x0004bf48) mp4_rocker2_pane

0xcec1,	// (0x00049e9c) mp4_rocker2_pane_g1

0xcec9,	// (0x00049ea4) mp4_rocker2_pane_g2

0xefdf,	// (0x0004bfba) mp4_rocker2_pane_g3

0xefe7,	// (0x0004bfc2) mp4_rocker2_pane_g4

0xefef,	// (0x0004bfca) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0004c90e) mp4_rocker2_pane_g

0x02c0,	// (0x0003d29b) main_camera4_pane

0x02c0,	// (0x0003d29b) main_video4_pane

0x8cf9,	// (0x00045cd4) main_video_tele_dialer_pane_t1_ParamLimits

0x8cf9,	// (0x00045cd4) main_video_tele_dialer_pane_t1

0x8d12,	// (0x00045ced) main_video_tele_dialer_pane_t2_ParamLimits

0x8d12,	// (0x00045ced) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0004c8c8) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0004c8c8) main_video_tele_dialer_pane_t

0x9290,	// (0x0004626b) cam4_autofocus_pane_ParamLimits

0x9290,	// (0x0004626b) cam4_autofocus_pane

0x92a6,	// (0x00046281) cam4_image_uncrop_pane_ParamLimits

0x92a6,	// (0x00046281) cam4_image_uncrop_pane

0x92bf,	// (0x0004629a) cam4_indicators_pane_ParamLimits

0x92bf,	// (0x0004629a) cam4_indicators_pane

0x92ee,	// (0x000462c9) main_camera4_pane_g1_ParamLimits

0x92ee,	// (0x000462c9) main_camera4_pane_g1

0x92fa,	// (0x000462d5) main_camera4_pane_g2_ParamLimits

0x92fa,	// (0x000462d5) main_camera4_pane_g2

0x9306,	// (0x000462e1) main_camera4_pane_g3_ParamLimits

0x9306,	// (0x000462e1) main_camera4_pane_g3

0x9312,	// (0x000462ed) main_camera4_pane_g4_ParamLimits

0x9312,	// (0x000462ed) main_camera4_pane_g4

0x931e,	// (0x000462f9) main_camera4_pane_g5_ParamLimits

0x931e,	// (0x000462f9) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0004c919) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0004c919) main_camera4_pane_g

0x933b,	// (0x00046316) main_camera4_pane_t1_ParamLimits

0x933b,	// (0x00046316) main_camera4_pane_t1

0xc79b,	// (0x00049776) bg_tb_trans_pane_cp06

0x9373,	// (0x0004634e) cam4_indicators_pane_g1

0x9380,	// (0x0004635b) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0004c92b) cam4_indicators_pane_g

0x9398,	// (0x00046373) cam4_indicators_pane_t1

0x93c2,	// (0x0004639d) main_video4_pane_g1_ParamLimits

0x93c2,	// (0x0004639d) main_video4_pane_g1

0x93d4,	// (0x000463af) main_video4_pane_g2_ParamLimits

0x93d4,	// (0x000463af) main_video4_pane_g2

0x93e8,	// (0x000463c3) main_video4_pane_g3_ParamLimits

0x93e8,	// (0x000463c3) main_video4_pane_g3

0x93f8,	// (0x000463d3) main_video4_pane_g4_ParamLimits

0x93f8,	// (0x000463d3) main_video4_pane_g4

0x0004,

0xf957,	// (0x0004c932) main_video4_pane_g_ParamLimits

0xf957,	// (0x0004c932) main_video4_pane_g

0x9418,	// (0x000463f3) vid4_indicators_pane_ParamLimits

0x9418,	// (0x000463f3) vid4_indicators_pane

0x9448,	// (0x00046423) video4_image_uncrop_cif_pane_ParamLimits

0x9448,	// (0x00046423) video4_image_uncrop_cif_pane

0x9462,	// (0x0004643d) video4_image_uncrop_nhd_pane_ParamLimits

0x9462,	// (0x0004643d) video4_image_uncrop_nhd_pane

0x92a6,	// (0x00046281) video4_image_uncrop_vga_pane_ParamLimits

0x92a6,	// (0x00046281) video4_image_uncrop_vga_pane

0xced1,	// (0x00049eac) bg_tb_trans_pane_cp07

0x9373,	// (0x0004634e) vid4_indicators_pane_g1

0x9478,	// (0x00046453) vid4_indicators_pane_g2

0x9485,	// (0x00046460) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0004c93d) vid4_indicators_pane_g

0x949e,	// (0x00046479) vid4_indicators_pane_t1

0x94b0,	// (0x0004648b) cam4_autofocus_pane_g1

0x94b8,	// (0x00046493) cam4_autofocus_pane_g2

0x94c0,	// (0x0004649b) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0004c948) cam4_autofocus_pane_g

0x94c8,	// (0x000464a3) cam4_autofocus_pane_g3_copy1

0x8d43,	// (0x00045d1e) video_down_pane_cp_t1

0x8d51,	// (0x00045d2c) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0004c8cd) video_down_pane_cp_t

0x175a,	// (0x0003e735) popup_vitu2_window_ParamLimits

0x175a,	// (0x0003e735) popup_vitu2_window

0x94d0,	// (0x000464ab) aid_size_cell2_itu2_ParamLimits

0x94d0,	// (0x000464ab) aid_size_cell2_itu2

0x94f6,	// (0x000464d1) aid_size_cell_itu2_ParamLimits

0x94f6,	// (0x000464d1) aid_size_cell_itu2

0x9554,	// (0x0004652f) bg_popup_window_pane_cp09_ParamLimits

0x9554,	// (0x0004652f) bg_popup_window_pane_cp09

0x9562,	// (0x0004653d) field_vitu2_entry_pane_ParamLimits

0x9562,	// (0x0004653d) field_vitu2_entry_pane

0x958a,	// (0x00046565) grid_vitu2_function_pane_ParamLimits

0x958a,	// (0x00046565) grid_vitu2_function_pane

0x95db,	// (0x000465b6) grid_vitu2_itu_pane_ParamLimits

0x95db,	// (0x000465b6) grid_vitu2_itu_pane

0x9666,	// (0x00046641) cell_vitu2_itu_pane_ParamLimits

0x9666,	// (0x00046641) cell_vitu2_itu_pane

0x968c,	// (0x00046667) cell_vitu2_function_pane_ParamLimits

0x968c,	// (0x00046667) cell_vitu2_function_pane

0xcedf,	// (0x00049eba) bg_popup_call_pane_cp08_ParamLimits

0xcedf,	// (0x00049eba) bg_popup_call_pane_cp08

0xcef8,	// (0x00049ed3) field_vitu2_entry_pane_g1

0xcf04,	// (0x00049edf) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0004c94f) field_vitu2_entry_pane_g

0xcf1e,	// (0x00049ef9) field_vitu2_entry_pane_t1_ParamLimits

0xcf1e,	// (0x00049ef9) field_vitu2_entry_pane_t1

0xcf3b,	// (0x00049f16) field_vitu2_entry_pane_t2_ParamLimits

0xcf3b,	// (0x00049f16) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0004c956) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0004c956) field_vitu2_entry_pane_t

0x96d0,	// (0x000466ab) bg_button_pane_cp010_ParamLimits

0x96d0,	// (0x000466ab) bg_button_pane_cp010

0x96de,	// (0x000466b9) cell_vitu2_itu_pane_g1

0x96fc,	// (0x000466d7) cell_vitu2_itu_pane_t1_ParamLimits

0x96fc,	// (0x000466d7) cell_vitu2_itu_pane_t1

0x2744,	// (0x0003f71f) cell_vitu2_itu_pane_t2_ParamLimits

0x2744,	// (0x0003f71f) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0004c960) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0004c960) cell_vitu2_itu_pane_t

0x175a,	// (0x0003e735) bg_button_pane_cp011

0x9762,	// (0x0004673d) cell_vitu2_function_pane_g1

0x02c0,	// (0x0003d29b) main_myfav_hc_pane

0x910f,	// (0x000460ea) popup_image3_note_pane_ParamLimits

0x910f,	// (0x000460ea) popup_image3_note_pane

0x912b,	// (0x00046106) popup_image3_tool_bar_pane_ParamLimits

0x912b,	// (0x00046106) popup_image3_tool_bar_pane

0x27c8,	// (0x0003f7a3) cell_vitu2_itu_pane_t3_ParamLimits

0x27c8,	// (0x0003f7a3) cell_vitu2_itu_pane_t3

0x02c0,	// (0x0003d29b) bg_popup_trans_pane

0xcf60,	// (0x00049f3b) grid_image3_tool_bar_pane

0xcf6a,	// (0x00049f45) bg_popup_trans_pane_g1

0x0e74,	// (0x0003de4f) bg_popup_trans_pane_g2

0xcf72,	// (0x00049f4d) bg_popup_trans_pane_g3

0xcf7a,	// (0x00049f55) bg_popup_trans_pane_g4

0xcf82,	// (0x00049f5d) bg_popup_trans_pane_g5

0xcf8a,	// (0x00049f65) bg_popup_trans_pane_g6

0xcf92,	// (0x00049f6d) bg_popup_trans_pane_g7

0xcf9a,	// (0x00049f75) bg_popup_trans_pane_g8

0x0e54,	// (0x0003de2f) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0004c967) bg_popup_trans_pane_g

0xcfa2,	// (0x00049f7d) cell_image3_tool_bar_pane_ParamLimits

0xcfa2,	// (0x00049f7d) cell_image3_tool_bar_pane

0xc492,	// (0x0004946d) cell_image3_tool_bar_pane_g1

0x02c0,	// (0x0003d29b) bg_popup_trans_pane_cp1

0xcfb8,	// (0x00049f93) popup_image3_note_pane_t1

0xcfc6,	// (0x00049fa1) popup_image3_note_pane_t2

0xcfd4,	// (0x00049faf) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0004c97a) popup_image3_note_pane_t

0xcfe4,	// (0x00049fbf) popup_image3_note_pane_t3_copy1

0x9776,	// (0x00046751) bg_myfav_hc_instruction_pane_ParamLimits

0x9776,	// (0x00046751) bg_myfav_hc_instruction_pane

0x978e,	// (0x00046769) cell_myfav_contact_pane_ParamLimits

0x978e,	// (0x00046769) cell_myfav_contact_pane

0x97aa,	// (0x00046785) cell_myfav_contact_pane_cp1_ParamLimits

0x97aa,	// (0x00046785) cell_myfav_contact_pane_cp1

0x97c2,	// (0x0004679d) cell_myfav_contact_pane_cp2_ParamLimits

0x97c2,	// (0x0004679d) cell_myfav_contact_pane_cp2

0x97da,	// (0x000467b5) cell_myfav_contact_pane_cp3_ParamLimits

0x97da,	// (0x000467b5) cell_myfav_contact_pane_cp3

0x97f1,	// (0x000467cc) cell_myfav_contact_pane_cp4_ParamLimits

0x97f1,	// (0x000467cc) cell_myfav_contact_pane_cp4

0x9809,	// (0x000467e4) cell_myfav_contact_pane_cp5_ParamLimits

0x9809,	// (0x000467e4) cell_myfav_contact_pane_cp5

0x981d,	// (0x000467f8) cell_myfav_contact_pane_cp6_ParamLimits

0x981d,	// (0x000467f8) cell_myfav_contact_pane_cp6

0x9833,	// (0x0004680e) cell_myfav_contact_pane_cp7_ParamLimits

0x9833,	// (0x0004680e) cell_myfav_contact_pane_cp7

0xcff2,	// (0x00049fcd) listscroll_gen_pane_cp05

0x984b,	// (0x00046826) main_myfav_hc_pane_g1_ParamLimits

0x984b,	// (0x00046826) main_myfav_hc_pane_g1

0x9865,	// (0x00046840) main_myfav_hc_pane_g2_ParamLimits

0x9865,	// (0x00046840) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0004c981) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0004c981) main_myfav_hc_pane_g

0x9899,	// (0x00046874) main_myfav_hc_pane_t1_ParamLimits

0x9899,	// (0x00046874) main_myfav_hc_pane_t1

0xcffb,	// (0x00049fd6) main_myfav_hc_pane_t2_ParamLimits

0xcffb,	// (0x00049fd6) main_myfav_hc_pane_t2

0xd00d,	// (0x00049fe8) main_myfav_hc_pane_t3_ParamLimits

0xd00d,	// (0x00049fe8) main_myfav_hc_pane_t3

0x98b0,	// (0x0004688b) main_myfav_hc_pane_t4_ParamLimits

0x98b0,	// (0x0004688b) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0004c988) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0004c988) main_myfav_hc_pane_t

0xc492,	// (0x0004946d) bg_myfav_hc_instruction_pane_g1

0xd01f,	// (0x00049ffa) cell_myfav_contact_pane_g1_ParamLimits

0xd01f,	// (0x00049ffa) cell_myfav_contact_pane_g1

0xd01f,	// (0x00049ffa) cell_myfav_contact_pane_g2_ParamLimits

0xd01f,	// (0x00049ffa) cell_myfav_contact_pane_g2

0xd02b,	// (0x0004a006) cell_myfav_contact_pane_g3_ParamLimits

0xd02b,	// (0x0004a006) cell_myfav_contact_pane_g3

0xc79b,	// (0x00049776) cell_myfav_contact_pane_g4_ParamLimits

0xc79b,	// (0x00049776) cell_myfav_contact_pane_g4

0xd038,	// (0x0004a013) cell_myfav_contact_pane_g5_ParamLimits

0xd038,	// (0x0004a013) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0004c993) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0004c993) cell_myfav_contact_pane_g

0x987f,	// (0x0004685a) main_myfav_hc_pane_g3_ParamLimits

0x987f,	// (0x0004685a) main_myfav_hc_pane_g3

0x3025,	// (0x00040000) popup_adpt_find_window

0x98da,	// (0x000468b5) afind_page_pane_ParamLimits

0x98da,	// (0x000468b5) afind_page_pane

0x98ef,	// (0x000468ca) aid_size_cell_afind_ParamLimits

0x98ef,	// (0x000468ca) aid_size_cell_afind

0x990d,	// (0x000468e8) bg_popup_sub_pane_cp09_ParamLimits

0x990d,	// (0x000468e8) bg_popup_sub_pane_cp09

0x991a,	// (0x000468f5) find_pane_cp01_ParamLimits

0x991a,	// (0x000468f5) find_pane_cp01

0xd044,	// (0x0004a01f) grid_afind_control_pane_ParamLimits

0xd044,	// (0x0004a01f) grid_afind_control_pane

0x9927,	// (0x00046902) grid_afind_pane_ParamLimits

0x9927,	// (0x00046902) grid_afind_pane

0x9949,	// (0x00046924) cell_afind_pane_ParamLimits

0x9949,	// (0x00046924) cell_afind_pane

0xc492,	// (0x0004946d) afind_page_pane_g1

0x99b0,	// (0x0004698b) afind_page_pane_g2

0x99b9,	// (0x00046994) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0004c99e) afind_page_pane_g

0x99c2,	// (0x0004699d) afind_page_pane_t1

0xd058,	// (0x0004a033) cell_afind_grid_control_pane_ParamLimits

0xd058,	// (0x0004a033) cell_afind_grid_control_pane

0xcdd4,	// (0x00049daf) bg_button_pane_cp69_ParamLimits

0xcdd4,	// (0x00049daf) bg_button_pane_cp69

0x99e2,	// (0x000469bd) cell_afind_pane_g1_ParamLimits

0x99e2,	// (0x000469bd) cell_afind_pane_g1

0x99ef,	// (0x000469ca) cell_afind_pane_t1_ParamLimits

0x99ef,	// (0x000469ca) cell_afind_pane_t1

0x0c63,	// (0x0003dc3e) bg_button_pane_cp72

0xd067,	// (0x0004a042) cell_afind_grid_control_pane_g1

0x5939,	// (0x00042914) aid_image_placing_area_ParamLimits

0x5939,	// (0x00042914) aid_image_placing_area

0xcaa0,	// (0x00049a7b) field_vitu_entry_pane_g1_ParamLimits

0xcaa0,	// (0x00049a7b) field_vitu_entry_pane_g1

0xcaac,	// (0x00049a87) field_vitu_entry_pane_g2_ParamLimits

0xcaac,	// (0x00049a87) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0004c858) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0004c858) field_vitu_entry_pane_g

0x8b51,	// (0x00045b2c) cell_vitu_itu_pane_g1_ParamLimits

0x8b93,	// (0x00045b6e) cell_vitu_itu_pane_t3_ParamLimits

0x8b93,	// (0x00045b6e) cell_vitu_itu_pane_t3

0xcd84,	// (0x00049d5f) mp4_progress_pane_t1_ParamLimits

0xcd9d,	// (0x00049d78) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0004c8ed) mp4_progress_pane_t_ParamLimits

0xcdb6,	// (0x00049d91) mup_progress_pane_cp04_ParamLimits

0x98c4,	// (0x0004689f) main_myfav_hc_pane_t5_ParamLimits

0x98c4,	// (0x0004689f) main_myfav_hc_pane_t5

0x02de,	// (0x0003d2b9) aid_zoom_text_primary

0x3025,	// (0x00040000) popup_adpt_find_window_ParamLimits

0x175a,	// (0x0003e735) main_cam_set_pane

0x92d8,	// (0x000462b3) cam4_zoom_pane_ParamLimits

0x92d8,	// (0x000462b3) cam4_zoom_pane

0x9a01,	// (0x000469dc) main_cam_set_pane_g1_ParamLimits

0x9a01,	// (0x000469dc) main_cam_set_pane_g1

0x9a0f,	// (0x000469ea) main_cam_set_pane_g2_ParamLimits

0x9a0f,	// (0x000469ea) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0004c9a5) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0004c9a5) main_cam_set_pane_g

0x9a32,	// (0x00046a0d) main_cam_set_pane_t1_ParamLimits

0x9a32,	// (0x00046a0d) main_cam_set_pane_t1

0x9a4d,	// (0x00046a28) main_cset_listscroll_pane_ParamLimits

0x9a4d,	// (0x00046a28) main_cset_listscroll_pane

0x9a71,	// (0x00046a4c) main_cset_slider_pane_ParamLimits

0x9a71,	// (0x00046a4c) main_cset_slider_pane

0xd078,	// (0x0004a053) main_cset_list_pane_ParamLimits

0xd078,	// (0x0004a053) main_cset_list_pane

0xd088,	// (0x0004a063) scroll_pane_cp028

0x9a9b,	// (0x00046a76) aid_area_touch_slider

0x9ab7,	// (0x00046a92) cset_slider_pane

0x9ae1,	// (0x00046abc) main_cset_slider_pane_g1

0x9af6,	// (0x00046ad1) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0004c9aa) main_cset_slider_pane_g

0xd0c1,	// (0x0004a09c) main_cset_slider_pane_t1

0x9bb8,	// (0x00046b93) main_cset_slider_pane_t2

0x9bd2,	// (0x00046bad) main_cset_slider_pane_t3

0x9bec,	// (0x00046bc7) main_cset_slider_pane_t4

0x9c06,	// (0x00046be1) main_cset_slider_pane_t5

0x9c24,	// (0x00046bff) main_cset_slider_pane_t6

0x9c3b,	// (0x00046c16) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0004c9cf) main_cset_slider_pane_t

0x9d47,	// (0x00046d22) cset_list_set_pane_ParamLimits

0x9d47,	// (0x00046d22) cset_list_set_pane

0x9d5b,	// (0x00046d36) aid_position_infowindow_above

0x9d63,	// (0x00046d3e) aid_position_infowindow_below

0xd161,	// (0x0004a13c) cset_list_set_pane_g1_ParamLimits

0xd161,	// (0x0004a13c) cset_list_set_pane_g1

0x2820,	// (0x0003f7fb) cset_list_set_pane_g3_ParamLimits

0x2820,	// (0x0003f7fb) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0004c9ee) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0004c9ee) cset_list_set_pane_g

0xd16d,	// (0x0004a148) cset_list_set_pane_t1_ParamLimits

0xd16d,	// (0x0004a148) cset_list_set_pane_t1

0x175a,	// (0x0003e735) list_highlight_pane_cp021_ParamLimits

0x175a,	// (0x0003e735) list_highlight_pane_cp021

0x15f6,	// (0x0003e5d1) cset_slider_pane_g1

0x1608,	// (0x0003e5e3) cset_slider_pane_g2

0x15ff,	// (0x0003e5da) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0004c9f3) cset_slider_pane_g

0xf025,	// (0x0004c000) aid_area_touch_cam4_zoom

0xf02d,	// (0x0004c008) cam4_zoom_cont_pane

0xf035,	// (0x0004c010) cam4_zoom_pane_g1

0xf03d,	// (0x0004c018) cam4_zoom_pane_g2

0x9d6b,	// (0x00046d46) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0004c9fa) cam4_zoom_pane_g

0xd182,	// (0x0004a15d) cam4_zoom_cont_pane_g1

0xd18b,	// (0x0004a166) cam4_zoom_cont_pane_g2

0xd194,	// (0x0004a16f) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0004ca01) cam4_zoom_cont_pane_g

0x9197,	// (0x00046172) call4_image_pane_ParamLimits

0x9197,	// (0x00046172) call4_image_pane

0xcde0,	// (0x00049dbb) call4_windows_conf_pane_ParamLimits

0xce27,	// (0x00049e02) popup_call4_audio_in_window_ParamLimits

0xce27,	// (0x00049e02) popup_call4_audio_in_window

0x02c0,	// (0x0003d29b) bg_popup_call2_act_pane_cp02

0xce9f,	// (0x00049e7a) call4_list_conf_pane

0xc492,	// (0x0004946d) call4_image_pane_g1

0xc492,	// (0x0004946d) call4_image_pane_g2

0x0001,

0xf743,	// (0x0004c71e) call4_image_pane_g

0xd19d,	// (0x0004a178) list_single_graphic_popup_conf4_pane_ParamLimits

0xd19d,	// (0x0004a178) list_single_graphic_popup_conf4_pane

0x02c0,	// (0x0003d29b) list_highlight_pane_cp022

0xd1b2,	// (0x0004a18d) list_single_graphic_popup_conf4_pane_g1

0x12f0,	// (0x0003e2cb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0004ca08) list_single_graphic_popup_conf4_pane_g

0xd1ba,	// (0x0004a195) list_single_graphic_popup_conf4_pane_t1

0x3e01,	// (0x00040ddc) popup_vtel_slider_window_ParamLimits

0x3e01,	// (0x00040ddc) popup_vtel_slider_window

0xcdc2,	// (0x00049d9d) dialer2_ne_pane_t2_ParamLimits

0xcdc2,	// (0x00049d9d) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0004c8f2) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0004c8f2) dialer2_ne_pane_t

0xc271,	// (0x0004924c) bg_popup_sub_pane_cp010_ParamLimits

0xc271,	// (0x0004924c) bg_popup_sub_pane_cp010

0x9d73,	// (0x00046d4e) popup_vtel_slider_window_g1_ParamLimits

0x9d73,	// (0x00046d4e) popup_vtel_slider_window_g1

0x9d86,	// (0x00046d61) popup_vtel_slider_window_g2_ParamLimits

0x9d86,	// (0x00046d61) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0004ca0d) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0004ca0d) popup_vtel_slider_window_g

0x9ddc,	// (0x00046db7) vtel_slider_pane_ParamLimits

0x9ddc,	// (0x00046db7) vtel_slider_pane

0x9dfe,	// (0x00046dd9) vtel_slider_pane_g1_ParamLimits

0x9dfe,	// (0x00046dd9) vtel_slider_pane_g1

0x9e12,	// (0x00046ded) vtel_slider_pane_g2_ParamLimits

0x9e12,	// (0x00046ded) vtel_slider_pane_g2

0x9e2a,	// (0x00046e05) vtel_slider_pane_g3_ParamLimits

0x9e2a,	// (0x00046e05) vtel_slider_pane_g3

0x9dfe,	// (0x00046dd9) vtel_slider_pane_g4_ParamLimits

0x9dfe,	// (0x00046dd9) vtel_slider_pane_g4

0x9e40,	// (0x00046e1b) vtel_slider_pane_g5_ParamLimits

0x9e40,	// (0x00046e1b) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0004ca16) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0004ca16) vtel_slider_pane_g

0x02c0,	// (0x0003d29b) main_gallery2_pane

0x9522,	// (0x000464fd) aid_size_row_itut2_dropdow_list_ParamLimits

0x9522,	// (0x000464fd) aid_size_row_itut2_dropdow_list

0x95b2,	// (0x0004658d) grid_vitu2_function_top_pane_ParamLimits

0x95b2,	// (0x0004658d) grid_vitu2_function_top_pane

0x9611,	// (0x000465ec) popup_vitu2_dropdown_list_window_ParamLimits

0x9611,	// (0x000465ec) popup_vitu2_dropdown_list_window

0x963a,	// (0x00046615) popup_vitu2_match_list_window

0x9e56,	// (0x00046e31) cell_vitu2_function_top_pane_ParamLimits

0x9e56,	// (0x00046e31) cell_vitu2_function_top_pane

0x9e76,	// (0x00046e51) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9e76,	// (0x00046e51) cell_vitu2_function_top_pane_cp01

0x9e94,	// (0x00046e6f) cell_vitu2_function_top_wide_pane_ParamLimits

0x9e94,	// (0x00046e6f) cell_vitu2_function_top_wide_pane

0x175a,	// (0x0003e735) bg_button_pane_cp012

0x9eb2,	// (0x00046e8d) cell_vitu2_function_top_pane_g1

0xf045,	// (0x0004c020) bg_button_pane_cp013_ParamLimits

0xf045,	// (0x0004c020) bg_button_pane_cp013

0x9ec6,	// (0x00046ea1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9ec6,	// (0x00046ea1) cell_vitu2_function_top_wide_pane_g1

0x175a,	// (0x0003e735) bg_popup_sub_pane_cp20

0x9ede,	// (0x00046eb9) list_vitu2_match_list_pane

0xcf6a,	// (0x00049f45) bg_popup_sub_pane_cp20_g1

0xcf72,	// (0x00049f4d) bg_popup_sub_pane_cp20_g2

0x0e74,	// (0x0003de4f) bg_popup_sub_pane_cp20_g3

0xcf7a,	// (0x00049f55) bg_popup_sub_pane_cp20_g4

0x0e54,	// (0x0003de2f) bg_popup_sub_pane_cp20_g5

0xd1d6,	// (0x0004a1b1) bg_popup_sub_pane_cp20_g6

0xcf8a,	// (0x00049f65) bg_popup_sub_pane_cp20_g7

0xcf92,	// (0x00049f6d) bg_popup_sub_pane_cp20_g8

0xcf9a,	// (0x00049f75) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0004ca21) bg_popup_sub_pane_cp20_g

0xf061,	// (0x0004c03c) list_vitu2_match_list_item_pane_ParamLimits

0xf061,	// (0x0004c03c) list_vitu2_match_list_item_pane

0xf073,	// (0x0004c04e) list_vitu2_match_list_item_pane_t1

0x02c0,	// (0x0003d29b) bg_popup_sub_pane_cp21

0x1219,	// (0x0003e1f4) grid_vitu2_dropdown_list_pane

0x9efc,	// (0x00046ed7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9efc,	// (0x00046ed7) cell_vitu2_dropdown_list_char_pane

0x9f1f,	// (0x00046efa) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9f1f,	// (0x00046efa) cell_vitu2_dropdown_list_ctrl_pane

0xd1f6,	// (0x0004a1d1) cell_vitu2_dropdown_list_char_pane_g1

0xd1ff,	// (0x0004a1da) cell_vitu2_dropdown_list_char_pane_g2

0xd208,	// (0x0004a1e3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0004ca3e) cell_vitu2_dropdown_list_char_pane_g

0x9f4d,	// (0x00046f28) cell_vitu2_dropdown_list_char_pane_t1

0x9f5b,	// (0x00046f36) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9f5b,	// (0x00046f36) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9f6b,	// (0x00046f46) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9f6b,	// (0x00046f46) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9f7c,	// (0x00046f57) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9f7c,	// (0x00046f57) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9f8c,	// (0x00046f67) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9f8c,	// (0x00046f67) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc6c2,	// (0x0004969d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc6c2,	// (0x0004969d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0004ca45) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0004ca45) cell_vitu2_dropdown_list_ctrl_pane_g

0x9fa8,	// (0x00046f83) aid_size_cell_gallery2_ParamLimits

0x9fa8,	// (0x00046f83) aid_size_cell_gallery2

0x9fbe,	// (0x00046f99) grid_gallery2_pane_ParamLimits

0x9fbe,	// (0x00046f99) grid_gallery2_pane

0x9fd2,	// (0x00046fad) scroll_pane_cp029_ParamLimits

0x9fd2,	// (0x00046fad) scroll_pane_cp029

0x9fde,	// (0x00046fb9) cell_gallery2_pane_ParamLimits

0x9fde,	// (0x00046fb9) cell_gallery2_pane

0xd211,	// (0x0004a1ec) cell_gallery2_pane_g2

0xa018,	// (0x00046ff3) cell_gallery2_pane_g3

0xd21b,	// (0x0004a1f6) cell_gallery2_pane_g4

0xd223,	// (0x0004a1fe) cell_gallery2_pane_g5

0x14be,	// (0x0003e499) grid_highlight_pane_cp10

0x963a,	// (0x00046615) popup_vitu2_match_list_window_ParamLimits

0x9651,	// (0x0004662c) popup_vitu2_query_window_ParamLimits

0x9651,	// (0x0004662c) popup_vitu2_query_window

0x02c0,	// (0x0003d29b) bg_vitu2_candi_button_pane

0xd1f6,	// (0x0004a1d1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1ff,	// (0x0004a1da) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd208,	// (0x0004a1e3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x285b,	// (0x0003f836) bg_button_pane_cp015

0xa020,	// (0x00046ffb) bg_button_pane_cp016

0xa02a,	// (0x00047005) bg_button_pane_cp017

0x175a,	// (0x0003e735) bg_popup_sub_pane_cp22

0xd22b,	// (0x0004a206) popup_vitu2_query_window_g1

0x2872,	// (0x0003f84d) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0004ca50) popup_vitu2_query_window_g

0x2880,	// (0x0003f85b) popup_vitu2_query_window_t1_ParamLimits

0x2880,	// (0x0003f85b) popup_vitu2_query_window_t1

0x28a8,	// (0x0003f883) popup_vitu2_query_window_t2_ParamLimits

0x28a8,	// (0x0003f883) popup_vitu2_query_window_t2

0x28ba,	// (0x0003f895) popup_vitu2_query_window_t3_ParamLimits

0x28ba,	// (0x0003f895) popup_vitu2_query_window_t3

0xa045,	// (0x00047020) popup_vitu2_query_window_t4_ParamLimits

0xa045,	// (0x00047020) popup_vitu2_query_window_t4

0xa059,	// (0x00047034) popup_vitu2_query_window_t5_ParamLimits

0xa059,	// (0x00047034) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0004ca55) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0004ca55) popup_vitu2_query_window_t

0xd070,	// (0x0004a04b) main_cset_text_pane

0x9a9b,	// (0x00046a76) aid_area_touch_slider_ParamLimits

0x9ab7,	// (0x00046a92) cset_slider_pane_ParamLimits

0x9ae1,	// (0x00046abc) main_cset_slider_pane_g1_ParamLimits

0x9af6,	// (0x00046ad1) main_cset_slider_pane_g2_ParamLimits

0xd091,	// (0x0004a06c) main_cset_slider_pane_g3_ParamLimits

0xd091,	// (0x0004a06c) main_cset_slider_pane_g3

0x9b0b,	// (0x00046ae6) main_cset_slider_pane_g4_ParamLimits

0x9b0b,	// (0x00046ae6) main_cset_slider_pane_g4

0x9b1a,	// (0x00046af5) main_cset_slider_pane_g5_ParamLimits

0x9b1a,	// (0x00046af5) main_cset_slider_pane_g5

0x9b28,	// (0x00046b03) main_cset_slider_pane_g6_ParamLimits

0x9b28,	// (0x00046b03) main_cset_slider_pane_g6

0xf9cf,	// (0x0004c9aa) main_cset_slider_pane_g_ParamLimits

0xd0c1,	// (0x0004a09c) main_cset_slider_pane_t1_ParamLimits

0x9bb8,	// (0x00046b93) main_cset_slider_pane_t2_ParamLimits

0x9bd2,	// (0x00046bad) main_cset_slider_pane_t3_ParamLimits

0x9bec,	// (0x00046bc7) main_cset_slider_pane_t4_ParamLimits

0x9c06,	// (0x00046be1) main_cset_slider_pane_t5_ParamLimits

0x9c24,	// (0x00046bff) main_cset_slider_pane_t6_ParamLimits

0x9c3b,	// (0x00046c16) main_cset_slider_pane_t7_ParamLimits

0x9c69,	// (0x00046c44) main_cset_slider_pane_t8_ParamLimits

0x9c69,	// (0x00046c44) main_cset_slider_pane_t8

0x9c91,	// (0x00046c6c) main_cset_slider_pane_t9_ParamLimits

0x9c91,	// (0x00046c6c) main_cset_slider_pane_t9

0x9cb9,	// (0x00046c94) main_cset_slider_pane_t10_ParamLimits

0x9cb9,	// (0x00046c94) main_cset_slider_pane_t10

0x9ce1,	// (0x00046cbc) main_cset_slider_pane_t11_ParamLimits

0x9ce1,	// (0x00046cbc) main_cset_slider_pane_t11

0x9d0b,	// (0x00046ce6) main_cset_slider_pane_t12_ParamLimits

0x9d0b,	// (0x00046ce6) main_cset_slider_pane_t12

0x9d28,	// (0x00046d03) main_cset_slider_pane_t13_ParamLimits

0x9d28,	// (0x00046d03) main_cset_slider_pane_t13

0xf9f4,	// (0x0004c9cf) main_cset_slider_pane_t_ParamLimits

0x02c0,	// (0x0003d29b) bg_popup_sub_pane_cp011

0xd237,	// (0x0004a212) main_cset_text_pane_g1

0xd23f,	// (0x0004a21a) main_cset_text_pane_t1

0xd24d,	// (0x0004a228) main_cset_text_pane_t2

0xd25b,	// (0x0004a236) main_cset_text_pane_t3

0xd269,	// (0x0004a244) main_cset_text_pane_t4

0xd277,	// (0x0004a252) main_cset_text_pane_t5

0xd285,	// (0x0004a260) main_cset_text_pane_t6

0xd293,	// (0x0004a26e) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0004ca60) main_cset_text_pane_t

0x02c0,	// (0x0003d29b) main_cam4_burst_pane

0x02c0,	// (0x0003d29b) main_cam5_pane

0x99d0,	// (0x000469ab) bg_button_pane_cp019

0x99d9,	// (0x000469b4) bg_button_pane_cp020

0xd09d,	// (0x0004a078) main_cset_slider_pane_g7_ParamLimits

0xd09d,	// (0x0004a078) main_cset_slider_pane_g7

0xd0a9,	// (0x0004a084) main_cset_slider_pane_g8_ParamLimits

0xd0a9,	// (0x0004a084) main_cset_slider_pane_g8

0x9b3c,	// (0x00046b17) main_cset_slider_pane_g9_ParamLimits

0x9b3c,	// (0x00046b17) main_cset_slider_pane_g9

0x9b48,	// (0x00046b23) main_cset_slider_pane_g10_ParamLimits

0x9b48,	// (0x00046b23) main_cset_slider_pane_g10

0x9b54,	// (0x00046b2f) main_cset_slider_pane_g11_ParamLimits

0x9b54,	// (0x00046b2f) main_cset_slider_pane_g11

0x9b60,	// (0x00046b3b) main_cset_slider_pane_g12_ParamLimits

0x9b60,	// (0x00046b3b) main_cset_slider_pane_g12

0x9b6c,	// (0x00046b47) main_cset_slider_pane_g13_ParamLimits

0x9b6c,	// (0x00046b47) main_cset_slider_pane_g13

0x9b78,	// (0x00046b53) main_cset_slider_pane_g14_ParamLimits

0x9b78,	// (0x00046b53) main_cset_slider_pane_g14

0x9b84,	// (0x00046b5f) main_cset_slider_pane_g15_ParamLimits

0x9b84,	// (0x00046b5f) main_cset_slider_pane_g15

0xd0ef,	// (0x0004a0ca) main_cset_slider_pane_t14_ParamLimits

0xd0ef,	// (0x0004a0ca) main_cset_slider_pane_t14

0xd128,	// (0x0004a103) main_cset_slider_pane_t15_ParamLimits

0xd128,	// (0x0004a103) main_cset_slider_pane_t15

0xa06d,	// (0x00047048) aid_cam4_burst_size_cell_ParamLimits

0xa06d,	// (0x00047048) aid_cam4_burst_size_cell

0xa08d,	// (0x00047068) grid_cam4_burst_pane_ParamLimits

0xa08d,	// (0x00047068) grid_cam4_burst_pane

0xa0c7,	// (0x000470a2) linegrid_cam4_burst_pane_ParamLimits

0xa0c7,	// (0x000470a2) linegrid_cam4_burst_pane

0xa0eb,	// (0x000470c6) scroll_pane_cp30_ParamLimits

0xa0eb,	// (0x000470c6) scroll_pane_cp30

0xa0f7,	// (0x000470d2) cell_cam4_burst_pane_ParamLimits

0xa0f7,	// (0x000470d2) cell_cam4_burst_pane

0xd2a1,	// (0x0004a27c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd2a1,	// (0x0004a27c) linegrid_cam4_burst_pane_g1

0xa14c,	// (0x00047127) linegrid_cam4_burst_pane_g2_ParamLimits

0xa14c,	// (0x00047127) linegrid_cam4_burst_pane_g2

0xd2ae,	// (0x0004a289) linegrid_cam4_burst_pane_g3_ParamLimits

0xd2ae,	// (0x0004a289) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0004ca6f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0004ca6f) linegrid_cam4_burst_pane_g

0xa15d,	// (0x00047138) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa15d,	// (0x00047138) linegrid_cam4_burst_pane_g3_copy1

0xd2bb,	// (0x0004a296) linegrid_cam4_burst_pane_g4_ParamLimits

0xd2bb,	// (0x0004a296) linegrid_cam4_burst_pane_g4

0xa17b,	// (0x00047156) linegrid_cam4_burst_pane_g5_ParamLimits

0xa17b,	// (0x00047156) linegrid_cam4_burst_pane_g5

0xa18c,	// (0x00047167) linegrid_cam4_burst_pane_g6_ParamLimits

0xa18c,	// (0x00047167) linegrid_cam4_burst_pane_g6

0xd2c8,	// (0x0004a2a3) linegrid_cam4_burst_pane_g7_ParamLimits

0xd2c8,	// (0x0004a2a3) linegrid_cam4_burst_pane_g7

0xa1a3,	// (0x0004717e) cell_cam4_burst_pane_g1

0xd2e1,	// (0x0004a2bc) main_cam5_pane_t1_ParamLimits

0xd2e1,	// (0x0004a2bc) main_cam5_pane_t1

0xd2f3,	// (0x0004a2ce) main_cam5_pane_t2_ParamLimits

0xd2f3,	// (0x0004a2ce) main_cam5_pane_t2

0xd305,	// (0x0004a2e0) main_cam5_pane_t3_ParamLimits

0xd305,	// (0x0004a2e0) main_cam5_pane_t3

0xd317,	// (0x0004a2f2) main_cam5_pane_t4_ParamLimits

0xd317,	// (0x0004a2f2) main_cam5_pane_t4

0xd32f,	// (0x0004a30a) main_cam5_pane_t5_ParamLimits

0xd32f,	// (0x0004a30a) main_cam5_pane_t5

0xd343,	// (0x0004a31e) main_cam5_pane_t6_ParamLimits

0xd343,	// (0x0004a31e) main_cam5_pane_t6

0xd357,	// (0x0004a332) main_cam5_pane_t7_ParamLimits

0xd357,	// (0x0004a332) main_cam5_pane_t7

0xd369,	// (0x0004a344) main_cam5_pane_t8_ParamLimits

0xd369,	// (0x0004a344) main_cam5_pane_t8

0xd387,	// (0x0004a362) main_cam5_pane_t9_ParamLimits

0xd387,	// (0x0004a362) main_cam5_pane_t9

0xd399,	// (0x0004a374) main_cam5_pane_t10_ParamLimits

0xd399,	// (0x0004a374) main_cam5_pane_t10

0xd3ab,	// (0x0004a386) main_cam5_pane_t11_ParamLimits

0xd3ab,	// (0x0004a386) main_cam5_pane_t11

0xd3bf,	// (0x0004a39a) main_cam5_pane_t12_ParamLimits

0xd3bf,	// (0x0004a39a) main_cam5_pane_t12

0xd3d6,	// (0x0004a3b1) main_cam5_pane_t13_ParamLimits

0xd3d6,	// (0x0004a3b1) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0004ca7b) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0004ca7b) main_cam5_pane_t

0x30a9,	// (0x00040084) popup_scut_keymap_window_ParamLimits

0x30a9,	// (0x00040084) popup_scut_keymap_window

0xa1b6,	// (0x00047191) aid_size_cell_brow_shortcut

0x14be,	// (0x0003e499) bg_popup_window_pane_cp010

0xa1c2,	// (0x0004719d) grid_scut_pane

0xa1ce,	// (0x000471a9) cell_scut_pane_ParamLimits

0xa1ce,	// (0x000471a9) cell_scut_pane

0xa1e7,	// (0x000471c2) cell_scut_pane_g1

0xd3f9,	// (0x0004a3d4) cell_scut_pane_t1

0xd408,	// (0x0004a3e3) cell_scut_pane_t2

0xa1f0,	// (0x000471cb) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0004ca96) cell_scut_pane_t

0x8068,	// (0x00045043) main_mup3_pane_g8_ParamLimits

0x8068,	// (0x00045043) main_mup3_pane_g8

0x953c,	// (0x00046517) area_vitu2_query_pane_ParamLimits

0x953c,	// (0x00046517) area_vitu2_query_pane

0x2865,	// (0x0003f840) input_focus_pane_cp08

0xd417,	// (0x0004a3f2) area_vitu2_query_pane_g1

0x28e2,	// (0x0003f8bd) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0004ca9d) area_vitu2_query_pane_g

0xa1fe,	// (0x000471d9) area_vitu2_query_pane_t1_ParamLimits

0xa1fe,	// (0x000471d9) area_vitu2_query_pane_t1

0xa212,	// (0x000471ed) area_vitu2_query_pane_t2_ParamLimits

0xa212,	// (0x000471ed) area_vitu2_query_pane_t2

0x28f3,	// (0x0003f8ce) area_vitu2_query_pane_t3_ParamLimits

0x28f3,	// (0x0003f8ce) area_vitu2_query_pane_t3

0xd423,	// (0x0004a3fe) area_vitu2_query_pane_t4_ParamLimits

0xd423,	// (0x0004a3fe) area_vitu2_query_pane_t4

0xd44b,	// (0x0004a426) area_vitu2_query_pane_t5_ParamLimits

0xd44b,	// (0x0004a426) area_vitu2_query_pane_t5

0xd473,	// (0x0004a44e) area_vitu2_query_pane_t6_ParamLimits

0xd473,	// (0x0004a44e) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0004caa2) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0004caa2) area_vitu2_query_pane_t

0xa226,	// (0x00047201) bg_button_pane_cp018

0xa234,	// (0x0004720f) bg_button_pane_cp021

0x291b,	// (0x0003f8f6) bg_button_pane_cp022

0x292c,	// (0x0003f907) input_focus_pane_cp09

0x4d74,	// (0x00041d4f) aid_size_touch_mv_arrow_left

0x4d9d,	// (0x00041d78) aid_size_touch_mv_arrow_right

0x9b9c,	// (0x00046b77) main_cset_slider_pane_g16_ParamLimits

0x9b9c,	// (0x00046b77) main_cset_slider_pane_g16

0x9baa,	// (0x00046b85) main_cset_slider_pane_g17_ParamLimits

0x9baa,	// (0x00046b85) main_cset_slider_pane_g17

0xa1a3,	// (0x0004717e) cell_cam4_burst_pane_g1_ParamLimits

0x02c0,	// (0x0003d29b) compa_mode_pane

0x9d96,	// (0x00046d71) popup_vtel_slider_window_g3_ParamLimits

0x9d96,	// (0x00046d71) popup_vtel_slider_window_g3

0x9dad,	// (0x00046d88) popup_vtel_slider_window_g4_ParamLimits

0x9dad,	// (0x00046d88) popup_vtel_slider_window_g4

0x9dc4,	// (0x00046d9f) popup_vtel_slider_window_t1_ParamLimits

0x9dc4,	// (0x00046d9f) popup_vtel_slider_window_t1

0x02c0,	// (0x0003d29b) main_cl_pane

0x6fa5,	// (0x00043f80) popup_imed_adjust2_window_ParamLimits

0x6e46,	// (0x00043e21) bg_tb_trans_pane_cp05_ParamLimits

0xc9d5,	// (0x000499b0) popup_imed_adjust2_window_g1_ParamLimits

0xc9e4,	// (0x000499bf) popup_imed_adjust2_window_g2_ParamLimits

0xc9e4,	// (0x000499bf) popup_imed_adjust2_window_g2

0xc9f0,	// (0x000499cb) popup_imed_adjust2_window_g3_ParamLimits

0xc9f0,	// (0x000499cb) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0004c81c) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0004c81c) popup_imed_adjust2_window_g

0xc9fc,	// (0x000499d7) popup_imed_adjust2_window_t1_ParamLimits

0xca14,	// (0x000499ef) slider_imed_adjust_pane_ParamLimits

0xca28,	// (0x00049a03) slider_imed_adjust_pane_g1_ParamLimits

0xca38,	// (0x00049a13) slider_imed_adjust_pane_g2_ParamLimits

0xca48,	// (0x00049a23) slider_imed_adjust_pane_g3_ParamLimits

0xca59,	// (0x00049a34) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0004c823) slider_imed_adjust_pane_g_ParamLimits

0x9278,	// (0x00046253) aid_touch_area_cam4_ParamLimits

0x9278,	// (0x00046253) aid_touch_area_cam4

0xeff7,	// (0x0004bfd2) battery_pane_cp01

0x932f,	// (0x0004630a) main_camera4_pane_g6_ParamLimits

0x932f,	// (0x0004630a) main_camera4_pane_g6

0x9352,	// (0x0004632d) main_camera4_pane_t2_ParamLimits

0x9352,	// (0x0004632d) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0004c926) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0004c926) main_camera4_pane_t

0x93aa,	// (0x00046385) aid_touch_area_vid4_ParamLimits

0x93aa,	// (0x00046385) aid_touch_area_vid4

0x9408,	// (0x000463e3) main_video4_pane_g5_ParamLimits

0x9408,	// (0x000463e3) main_video4_pane_g5

0x942f,	// (0x0004640a) vid4_progress_pane_ParamLimits

0x942f,	// (0x0004640a) vid4_progress_pane

0xd0b5,	// (0x0004a090) main_cset_slider_pane_g18_ParamLimits

0xd0b5,	// (0x0004a090) main_cset_slider_pane_g18

0xd2d5,	// (0x0004a2b0) cell_cam4_burst_pane_g2_ParamLimits

0xd2d5,	// (0x0004a2b0) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0004ca76) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0004ca76) cell_cam4_burst_pane_g

0x0a62,	// (0x0003da3d) bg_cl_pane_ParamLimits

0x0a62,	// (0x0003da3d) bg_cl_pane

0xa240,	// (0x0004721b) cl_header_pane_ParamLimits

0xa240,	// (0x0004721b) cl_header_pane

0xa254,	// (0x0004722f) cl_listscroll_pane_ParamLimits

0xa254,	// (0x0004722f) cl_listscroll_pane

0xd4bf,	// (0x0004a49a) bg_cl_pane_g1

0xd4c7,	// (0x0004a4a2) bg_cl_pane_g2

0xd4cf,	// (0x0004a4aa) bg_cl_pane_g3

0xd4d7,	// (0x0004a4b2) bg_cl_pane_g4

0xd4df,	// (0x0004a4ba) bg_cl_pane_g5

0xd4e7,	// (0x0004a4c2) bg_cl_pane_g6

0xd4ef,	// (0x0004a4ca) bg_cl_pane_g7

0xd4f7,	// (0x0004a4d2) bg_cl_pane_g8

0xd4ff,	// (0x0004a4da) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0004cab1) bg_cl_pane_g

0xa264,	// (0x0004723f) aid_height_cl_leading_ParamLimits

0xa264,	// (0x0004723f) aid_height_cl_leading

0xa270,	// (0x0004724b) aid_height_cl_text_ParamLimits

0xa270,	// (0x0004724b) aid_height_cl_text

0x175a,	// (0x0003e735) bg_cl_header_pane_ParamLimits

0x175a,	// (0x0003e735) bg_cl_header_pane

0xa28f,	// (0x0004726a) cl_header_pane_g1_ParamLimits

0xa28f,	// (0x0004726a) cl_header_pane_g1

0xa2a5,	// (0x00047280) cl_header_pane_t1_ParamLimits

0xa2a5,	// (0x00047280) cl_header_pane_t1

0xd507,	// (0x0004a4e2) cl_list_pane

0xd088,	// (0x0004a063) hc_scroll_pane_cp01

0x0e54,	// (0x0003de2f) bg_cl_header_pane_g1

0xcf6a,	// (0x00049f45) bg_cl_header_pane_g2

0x0e74,	// (0x0003de4f) bg_cl_header_pane_g3

0xcf7a,	// (0x00049f55) bg_cl_header_pane_g4

0xcf72,	// (0x00049f4d) bg_cl_header_pane_g5

0xd1d6,	// (0x0004a1b1) bg_cl_header_pane_g6

0xcf92,	// (0x00049f6d) bg_cl_header_pane_g7

0xcf9a,	// (0x00049f75) bg_cl_header_pane_g8

0xcf8a,	// (0x00049f65) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0004cac4) bg_cl_header_pane_g

0xa2be,	// (0x00047299) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa2be,	// (0x00047299) hc_cl_list_double_graphic_heading_pane

0xa2d1,	// (0x000472ac) hc_cl_list_single_graphic_pane_ParamLimits

0xa2d1,	// (0x000472ac) hc_cl_list_single_graphic_pane

0xa2e9,	// (0x000472c4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa2e9,	// (0x000472c4) hc_cl_list_single_graphic_pane_g1

0xa2f5,	// (0x000472d0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa2f5,	// (0x000472d0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0004cad7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0004cad7) hc_cl_list_single_graphic_pane_g

0xa309,	// (0x000472e4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa309,	// (0x000472e4) hc_cl_list_single_graphic_pane_t1

0xa2e9,	// (0x000472c4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa2e9,	// (0x000472c4) hc_cl_list_double_graphic_heading_pane_g1

0xa31e,	// (0x000472f9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa31e,	// (0x000472f9) hc_cl_list_double_graphic_heading_pane_g2

0xa332,	// (0x0004730d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa332,	// (0x0004730d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0004cadc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0004cadc) hc_cl_list_double_graphic_heading_pane_g

0xa346,	// (0x00047321) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa346,	// (0x00047321) hc_cl_list_double_graphic_heading_pane_t1

0xa35b,	// (0x00047336) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa35b,	// (0x00047336) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0004cae3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0004cae3) hc_cl_list_double_graphic_heading_pane_t

0xf089,	// (0x0004c064) vid4_progress_pane_g1

0xf095,	// (0x0004c070) vid4_progress_pane_g2

0xf0a1,	// (0x0004c07c) vid4_progress_pane_g3

0xf0b0,	// (0x0004c08b) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0004cae8) vid4_progress_pane_g

0xf0ce,	// (0x0004c0a9) vid4_progress_pane_t1

0xf0e4,	// (0x0004c0bf) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0004caf3) vid4_progress_pane_t

0xf10f,	// (0x0004c0ea) wait_bar_pane_cp07

0xc27f,	// (0x0004925a) blid_firmament_pane_ParamLimits

0xc2c2,	// (0x0004929d) popup_blid_sat_info2_window_g1

0xc2e6,	// (0x000492c1) popup_blid_sat_info2_window_t3

0xc2f4,	// (0x000492cf) popup_blid_sat_info2_window_t4

0xc302,	// (0x000492dd) popup_blid_sat_info2_window_t5

0xc310,	// (0x000492eb) popup_blid_sat_info2_window_t6

0xc320,	// (0x000492fb) popup_blid_sat_info2_window_t7

0xc32e,	// (0x00049309) popup_blid_sat_info2_window_t8

0xc33c,	// (0x00049317) popup_blid_sat_info2_window_t9

0xc34a,	// (0x00049325) popup_blid_sat_info2_window_t10

0xc412,	// (0x000493ed) aid_firma_cardinal_ParamLimits

0xc426,	// (0x00049401) blid_firmament_pane_t1_ParamLimits

0xc43d,	// (0x00049418) blid_firmament_pane_t2_ParamLimits

0xc454,	// (0x0004942f) blid_firmament_pane_t3_ParamLimits

0xc46b,	// (0x00049446) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0004c715) blid_firmament_pane_t_ParamLimits

0xc482,	// (0x0004945d) blid_sat_info_pane_ParamLimits

0x175a,	// (0x0003e735) main_cam_set_pane_ParamLimits

0x88fd,	// (0x000458d8) aid_size_cell_colour_35_ParamLimits

0x891d,	// (0x000458f8) aid_size_cell_colour_112_ParamLimits

0x893d,	// (0x00045918) aid_size_cell_effect_ParamLimits

0x6e46,	// (0x00043e21) bg_tb_trans_pane_cp02_ParamLimits

0x101c,	// (0x0003dff7) heading_imed_pane_ParamLimits

0x895d,	// (0x00045938) listscroll_imed_pane_ParamLimits

0x614b,	// (0x00043126) popup_call2_audio_first_window_g5_ParamLimits

0x614b,	// (0x00043126) popup_call2_audio_first_window_g5

0x8f22,	// (0x00045efd) aid_size_touch_image3_arrow_left_ParamLimits

0x8f22,	// (0x00045efd) aid_size_touch_image3_arrow_left

0x8f4e,	// (0x00045f29) aid_size_touch_image3_arrow_right_ParamLimits

0x8f4e,	// (0x00045f29) aid_size_touch_image3_arrow_right

0xf0fa,	// (0x0004c0d5) vid4_progress_pane_t3

0x8c7a,	// (0x00045c55) main_hwr_training_symbol_option_pane_ParamLimits

0x8c7a,	// (0x00045c55) main_hwr_training_symbol_option_pane

0xccc4,	// (0x00049c9f) popup_hwr_training_preview_window_ParamLimits

0xccc4,	// (0x00049c9f) popup_hwr_training_preview_window

0x8c9a,	// (0x00045c75) hwr_training_navi_pane_g5_ParamLimits

0x8c9a,	// (0x00045c75) hwr_training_navi_pane_g5

0xcf58,	// (0x00049f33) popup_char_count_window

0x175a,	// (0x0003e735) bg_popup_sub_pane_cp20_ParamLimits

0x9ede,	// (0x00046eb9) list_vitu2_match_list_pane_ParamLimits

0x9eed,	// (0x00046ec8) vitu2_page_scroll_pane_ParamLimits

0x9eed,	// (0x00046ec8) vitu2_page_scroll_pane

0xd56a,	// (0x0004a545) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd56a,	// (0x0004a545) list_single_hwr_training_symbol_option_pane

0xd57d,	// (0x0004a558) list_single_hwr_training_symbol_option_pane_g1

0xd585,	// (0x0004a560) list_single_hwr_training_symbol_option_pane_t1

0xd593,	// (0x0004a56e) bg_button_pane_cp023

0xd59c,	// (0x0004a577) bg_button_pane_cp024

0xa37a,	// (0x00047355) vitu2_page_scroll_pane_g1

0xa382,	// (0x0004735d) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0004cafa) vitu2_page_scroll_pane_g

0xa38c,	// (0x00047367) vitu2_page_scroll_pane_t1

0xc19b,	// (0x00049176) popup_char_count_window_g1

0xd5cf,	// (0x0004a5aa) popup_char_count_window_g2

0xd5d8,	// (0x0004a5b3) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0004caff) popup_char_count_window_g

0xd5e1,	// (0x0004a5bc) popup_char_count_window_t1

0x02c0,	// (0x0003d29b) main_vded2_pane

0xc9c1,	// (0x0004999c) aid_size_cell_imed_line

0xc9cb,	// (0x000499a6) grid_imed_line_width_pane

0x9492,	// (0x0004646d) vid4_indicators_pane_g4

0xd5ef,	// (0x0004a5ca) cell_imed_line_width_pane_ParamLimits

0xd5ef,	// (0x0004a5ca) cell_imed_line_width_pane

0xd605,	// (0x0004a5e0) cell_imed_line_width_pane_g1

0xd60e,	// (0x0004a5e9) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0004cb06) cell_imed_line_width_pane_g

0xa39b,	// (0x00047376) main_vded2_pane_g1_ParamLimits

0xa39b,	// (0x00047376) main_vded2_pane_g1

0xa3b6,	// (0x00047391) main_vded2_pane_g2_ParamLimits

0xa3b6,	// (0x00047391) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0004cb0b) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0004cb0b) main_vded2_pane_g

0xa3c8,	// (0x000473a3) vded2_slider_pane_ParamLimits

0xa3c8,	// (0x000473a3) vded2_slider_pane

0xa3d8,	// (0x000473b3) aid_size_touch_vded2_end

0xa3e2,	// (0x000473bd) aid_size_touch_vded2_playhead

0xd616,	// (0x0004a5f1) aid_size_touch_vded2_start

0xd61e,	// (0x0004a5f9) vded2_slider_bg_pane

0xd627,	// (0x0004a602) vded2_slider_pane_g1

0xd630,	// (0x0004a60b) vded2_slider_pane_g2

0xa3ec,	// (0x000473c7) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0004cb10) vded2_slider_pane_g

0xd638,	// (0x0004a613) vded2_slider_bg_pane_g1

0xd641,	// (0x0004a61c) vded2_slider_bg_pane_g2

0xd64a,	// (0x0004a625) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0004cb17) vded2_slider_bg_pane_g

0x53b4,	// (0x0004238f) aid_postcard_touch_down_pane_ParamLimits

0x53b4,	// (0x0004238f) aid_postcard_touch_down_pane

0x53cc,	// (0x000423a7) aid_postcard_touch_up_pane_ParamLimits

0x53cc,	// (0x000423a7) aid_postcard_touch_up_pane

0x02c0,	// (0x0003d29b) main_blid2_pane

0x6e7c,	// (0x00043e57) popup_blid2_search_window

0x02c0,	// (0x0003d29b) blid2_gps_pane

0x02c0,	// (0x0003d29b) blid2_navig_pane

0x02c0,	// (0x0003d29b) blid2_search_pane

0x02c0,	// (0x0003d29b) blid2_tripm_pane

0xa3f7,	// (0x000473d2) blid2_search_pane_g1_ParamLimits

0xa3f7,	// (0x000473d2) blid2_search_pane_g1

0xa40f,	// (0x000473ea) blid2_search_pane_t1_ParamLimits

0xa40f,	// (0x000473ea) blid2_search_pane_t1

0xa421,	// (0x000473fc) aid_size_cell_blid2_gps_ParamLimits

0xa421,	// (0x000473fc) aid_size_cell_blid2_gps

0xa439,	// (0x00047414) blid2_gps_pane_g1_ParamLimits

0xa439,	// (0x00047414) blid2_gps_pane_g1

0xa44d,	// (0x00047428) grid_blid2_satellite_pane_ParamLimits

0xa44d,	// (0x00047428) grid_blid2_satellite_pane

0xa465,	// (0x00047440) blid2_navig_pane_g1_ParamLimits

0xa465,	// (0x00047440) blid2_navig_pane_g1

0xa471,	// (0x0004744c) blid2_navig_pane_t1_ParamLimits

0xa471,	// (0x0004744c) blid2_navig_pane_t1

0xa48c,	// (0x00047467) blid2_navig_pane_t2_ParamLimits

0xa48c,	// (0x00047467) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0004cb1e) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0004cb1e) blid2_navig_pane_t

0xa4a7,	// (0x00047482) blid2_navig_ring_pane_ParamLimits

0xa4a7,	// (0x00047482) blid2_navig_ring_pane

0xa4c2,	// (0x0004749d) blid2_speed_pane_ParamLimits

0xa4c2,	// (0x0004749d) blid2_speed_pane

0xa4ce,	// (0x000474a9) blid2_tripm_pane_g1_ParamLimits

0xa4ce,	// (0x000474a9) blid2_tripm_pane_g1

0xa4e9,	// (0x000474c4) blid2_tripm_pane_g2_ParamLimits

0xa4e9,	// (0x000474c4) blid2_tripm_pane_g2

0xa4fd,	// (0x000474d8) blid2_tripm_pane_g3_ParamLimits

0xa4fd,	// (0x000474d8) blid2_tripm_pane_g3

0xa511,	// (0x000474ec) blid2_tripm_pane_g4_ParamLimits

0xa511,	// (0x000474ec) blid2_tripm_pane_g4

0xa525,	// (0x00047500) blid2_tripm_pane_g5_ParamLimits

0xa525,	// (0x00047500) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0004cb23) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0004cb23) blid2_tripm_pane_g

0xa54b,	// (0x00047526) blid2_tripm_pane_t1_ParamLimits

0xa54b,	// (0x00047526) blid2_tripm_pane_t1

0xa566,	// (0x00047541) blid2_tripm_pane_t2_ParamLimits

0xa566,	// (0x00047541) blid2_tripm_pane_t2

0xa57f,	// (0x0004755a) blid2_tripm_pane_t3_ParamLimits

0xa57f,	// (0x0004755a) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0004cb30) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0004cb30) blid2_tripm_pane_t

0xa5c6,	// (0x000475a1) cell_blid2_satellite_pane_ParamLimits

0xa5c6,	// (0x000475a1) cell_blid2_satellite_pane

0xa5e2,	// (0x000475bd) cell_blid2_satellite_pane_g1

0xd653,	// (0x0004a62e) cell_blid2_satellite_pane_t1

0xc492,	// (0x0004946d) blid2_speed_pane_g1

0xd661,	// (0x0004a63c) blid2_speed_pane_t1

0xd66f,	// (0x0004a64a) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0004cb39) blid2_speed_pane_t

0xc492,	// (0x0004946d) blid2_navig_ring_pane_g1

0xa5eb,	// (0x000475c6) blid2_navig_ring_pane_g2

0xa5f3,	// (0x000475ce) blid2_navig_ring_pane_g3

0xa5fb,	// (0x000475d6) blid2_navig_ring_pane_g4

0xa603,	// (0x000475de) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0004cb3e) blid2_navig_ring_pane_g

0x02c0,	// (0x0003d29b) bg_popup_window_pane_cp011

0xd67d,	// (0x0004a658) popup_blid2_search_window_g1

0xd685,	// (0x0004a660) popup_blid2_search_window_t1

0xd693,	// (0x0004a66e) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0004cb49) popup_blid2_search_window_t

0x0d63,	// (0x0003dd3e) main_browser_pane_g1

0x0a62,	// (0x0003da3d) main_browser_pane_ParamLimits

0x175a,	// (0x0003e735) bg_button_pane_cp011_ParamLimits

0x9762,	// (0x0004673d) cell_vitu2_function_pane_g1_ParamLimits

0x175a,	// (0x0003e735) bg_popup_sub_pane_cp22_ParamLimits

0x2865,	// (0x0003f840) input_focus_pane_cp08_ParamLimits

0xa034,	// (0x0004700f) popup_vitu2_query_button_pane_ParamLimits

0xa034,	// (0x0004700f) popup_vitu2_query_button_pane

0x285b,	// (0x0003f836) popup_vitu2_query_input_button_pane

0xd22b,	// (0x0004a206) popup_vitu2_query_window_g1_ParamLimits

0x2872,	// (0x0003f84d) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0004ca50) popup_vitu2_query_window_g_ParamLimits

0x02c0,	// (0x0003d29b) bg_button_pane_cp026

0xa60b,	// (0x000475e6) popup_vitu2_query_input_button_pane_g1

0x02c0,	// (0x0003d29b) bg_button_pane_cp025

0xd6a1,	// (0x0004a67c) popup_vitu2_query_button_pane_t1

0x7d79,	// (0x00044d54) main_mp3_pane_t6

0x7d87,	// (0x00044d62) popup_slider_window_cp01

0xf009,	// (0x0004bfe4) cam4_battery_pane

0xf01b,	// (0x0004bff6) cam4_battery_pane_cp02

0xa370,	// (0x0004734b) cam4_battery_pane_cp01

0xf081,	// (0x0004c05c) cam4_battery_pane_cp03

0xc492,	// (0x0004946d) cam4_battery_pane_g1

0xd6af,	// (0x0004a68a) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0004cb4e) cam4_battery_pane_g

0xc358,	// (0x00049333) popup_blid_sat_info2_window_t11

0x4d74,	// (0x00041d4f) aid_size_touch_mv_arrow_left_ParamLimits

0x4d9d,	// (0x00041d78) aid_size_touch_mv_arrow_right_ParamLimits

0x141e,	// (0x0003e3f9) navi_pane_g1_ParamLimits

0x4dc6,	// (0x00041da1) navi_pane_g2_ParamLimits

0x4df4,	// (0x00041dcf) navi_pane_g3_ParamLimits

0xf44c,	// (0x0004c427) navi_pane_g_ParamLimits

0x4e4e,	// (0x00041e29) navi_pane_mv_t1_ParamLimits

0x8969,	// (0x00045944) grid_imed_effect_pane_ParamLimits

0x0ca8,	// (0x0003dc83) aid_placing_vt_slider_lsc

0x0cb0,	// (0x0003dc8b) aid_placing_vt_slider_prt

0x175a,	// (0x0003e735) bg_tb_trans_pane_cp01_ParamLimits

0xc5e2,	// (0x000495bd) popup_image_details_window_g1_ParamLimits

0xc5f5,	// (0x000495d0) popup_image_details_window_g2_ParamLimits

0xc60a,	// (0x000495e5) popup_image_details_window_g3_ParamLimits

0xc60a,	// (0x000495e5) popup_image_details_window_g3

0xf77f,	// (0x0004c75a) popup_image_details_window_g_ParamLimits

0xc61e,	// (0x000495f9) popup_image_details_window_t1_ParamLimits

0xc630,	// (0x0004960b) popup_image_details_window_t2_ParamLimits

0xc649,	// (0x00049624) popup_image_details_window_t3_ParamLimits

0xc65d,	// (0x00049638) popup_image_details_window_t4_ParamLimits

0xc678,	// (0x00049653) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0004c761) popup_image_details_window_t_ParamLimits

0xa27c,	// (0x00047257) cl_header_name_pane_ParamLimits

0xa27c,	// (0x00047257) cl_header_name_pane

0xa613,	// (0x000475ee) cl_header_name_pane_t1_ParamLimits

0xa613,	// (0x000475ee) cl_header_name_pane_t1

0xa634,	// (0x0004760f) cl_header_name_pane_t2_ParamLimits

0xa634,	// (0x0004760f) cl_header_name_pane_t2

0xa676,	// (0x00047651) cl_header_name_pane_t3_ParamLimits

0xa676,	// (0x00047651) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0004cb53) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0004cb53) cl_header_name_pane_t

0x4e1f,	// (0x00041dfa) navi_pane_mv_g2_ParamLimits

0xcef8,	// (0x00049ed3) field_vitu2_entry_pane_g1_ParamLimits

0xcf04,	// (0x00049edf) field_vitu2_entry_pane_g2_ParamLimits

0xcf10,	// (0x00049eeb) field_vitu2_entry_pane_g3_ParamLimits

0xcf10,	// (0x00049eeb) field_vitu2_entry_pane_g3

0xf974,	// (0x0004c94f) field_vitu2_entry_pane_g_ParamLimits

0x96de,	// (0x000466b9) cell_vitu2_itu_pane_g1_ParamLimits

0x96ee,	// (0x000466c9) cell_vitu2_itu_pane_g2_ParamLimits

0x96ee,	// (0x000466c9) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0004c95b) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0004c95b) cell_vitu2_itu_pane_g

0x175a,	// (0x0003e735) bg_vkb2_func_pane_cp05_ParamLimits

0x175a,	// (0x0003e735) bg_vkb2_func_pane_cp05

0x175a,	// (0x0003e735) bg_vkb2_func_pane_cp03

0x175a,	// (0x0003e735) bg_vkb2_func_pane_cp04

0x175a,	// (0x0003e735) bg_vkb2_func_pane_cp10_ParamLimits

0x175a,	// (0x0003e735) bg_vkb2_func_pane_cp10

0x291b,	// (0x0003f8f6) bg_vkb2_func_pane_cp08

0xa226,	// (0x00047201) bg_vkb2_func_pane_cp06

0xa234,	// (0x0004720f) bg_vkb2_func_pane_cp07

0xd5a5,	// (0x0004a580) bg_vkb2_func_pane_cp11_ParamLimits

0xd5a5,	// (0x0004a580) bg_vkb2_func_pane_cp11

0xd5ba,	// (0x0004a595) bg_vkb2_func_pane_cp12_ParamLimits

0xd5ba,	// (0x0004a595) bg_vkb2_func_pane_cp12

0x02c0,	// (0x0003d29b) bg_vkb2_func_pane_cp09

0xcf6a,	// (0x00049f45) bg_vkb2_func_pane_g1

0x0e74,	// (0x0003de4f) bg_vkb2_func_pane_g2

0xcf72,	// (0x00049f4d) bg_vkb2_func_pane_g3

0xcf7a,	// (0x00049f55) bg_vkb2_func_pane_g4

0xd1d6,	// (0x0004a1b1) bg_vkb2_func_pane_g5

0xcf92,	// (0x00049f6d) bg_vkb2_func_pane_g6

0xcf9a,	// (0x00049f75) bg_vkb2_func_pane_g7

0xcf8a,	// (0x00049f65) bg_vkb2_func_pane_g8

0x0e54,	// (0x0003de2f) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0004cb5a) bg_vkb2_func_pane_g

0xa539,	// (0x00047514) blid2_tripm_pane_g6_ParamLimits

0xa539,	// (0x00047514) blid2_tripm_pane_g6

0xcd7c,	// (0x00049d57) mp4_progress_pane_g1

0xa5b2,	// (0x0004758d) blid2_tripm_values_pane_ParamLimits

0xa5b2,	// (0x0004758d) blid2_tripm_values_pane

0xa6a7,	// (0x00047682) blid2_tripm_values_pane_t1

0xa6b5,	// (0x00047690) blid2_tripm_values_pane_t2

0xa6c3,	// (0x0004769e) blid2_tripm_values_pane_t3

0xa6d1,	// (0x000476ac) blid2_tripm_values_pane_t4

0xa6df,	// (0x000476ba) blid2_tripm_values_pane_t5

0xa6ed,	// (0x000476c8) blid2_tripm_values_pane_t6

0xa6fb,	// (0x000476d6) blid2_tripm_values_pane_t7

0xa709,	// (0x000476e4) blid2_tripm_values_pane_t8

0xa717,	// (0x000476f2) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0004cb6d) blid2_tripm_values_pane_t

0x3d77,	// (0x00040d52) call_video_pane_t1_ParamLimits

0x3d89,	// (0x00040d64) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0004c2b0) call_video_pane_t_ParamLimits

0x26bb,	// (0x0003f696) msg_header_pane_g1_ParamLimits

0x163b,	// (0x0003e616) msg_header_pane_g2_ParamLimits

0x163b,	// (0x0003e616) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0004c4ca) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0004c4ca) msg_header_pane_g

0x0a62,	// (0x0003da3d) main_clock2_pane_ParamLimits

0x8677,	// (0x00045652) grid_clock2_toolbar_pane_ParamLimits

0x8677,	// (0x00045652) grid_clock2_toolbar_pane

0x8677,	// (0x00045652) listscroll_clock2_pane_ParamLimits

0x8677,	// (0x00045652) listscroll_clock2_pane

0x875b,	// (0x00045736) main_clock2_pane_t3_ParamLimits

0x875b,	// (0x00045736) main_clock2_pane_t3

0x8776,	// (0x00045751) main_clock2_pane_t4_ParamLimits

0x8776,	// (0x00045751) main_clock2_pane_t4

0xd6b9,	// (0x0004a694) cell_clock2_toolbar_pane

0xd6c1,	// (0x0004a69c) cell_clock2_toolbar_pane_cp01

0xd6c1,	// (0x0004a69c) cell_clock2_toolbar_pane_cp02

0xd6c9,	// (0x0004a6a4) cell_clock2_toolbar_pane_cp03

0xd6d1,	// (0x0004a6ac) list_clock2_pane

0x1384,	// (0x0003e35f) scroll_pane_cp10

0xd6d9,	// (0x0004a6b4) list_single_clock2_pane_ParamLimits

0xd6d9,	// (0x0004a6b4) list_single_clock2_pane

0x14be,	// (0x0003e499) list_highlight_pane_cp08

0xd6e6,	// (0x0004a6c1) list_single_clock2_pane_t1

0xd6f4,	// (0x0004a6cf) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0004cb80) list_single_clock2_pane_t

0x02c0,	// (0x0003d29b) bg_button_pane_cp10

0xd702,	// (0x0004a6dd) cell_clock2_toolbar_pane_g1

0x5340,	// (0x0004231b) aid_main_viewer_pane_g1_ParamLimits

0x5340,	// (0x0004231b) aid_main_viewer_pane_g1

0x534e,	// (0x00042329) aid_main_viewer_pane_g2_ParamLimits

0x534e,	// (0x00042329) aid_main_viewer_pane_g2

0x535c,	// (0x00042337) aid_main_viewer_pane_g3_ParamLimits

0x535c,	// (0x00042337) aid_main_viewer_pane_g3

0x536b,	// (0x00042346) aid_main_viewer_pane_g4_ParamLimits

0x536b,	// (0x00042346) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0004c4db) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0004c4db) aid_main_viewer_pane_g

0x6e32,	// (0x00043e0d) main_calc_pane_ParamLimits

0x6e54,	// (0x00043e2f) main_dialer2_pane_ParamLimits

0x02c0,	// (0x0003d29b) main_cam6_pane

0x02c0,	// (0x0003d29b) main_vid6_pane

0x8683,	// (0x0004565e) listscroll_gen_pane_cp06_ParamLimits

0x8683,	// (0x0004565e) listscroll_gen_pane_cp06

0x8791,	// (0x0004576c) main_clock2_pane_t5_ParamLimits

0x8791,	// (0x0004576c) main_clock2_pane_t5

0x87ee,	// (0x000457c9) aid_call2_pane_cp10_ParamLimits

0x8800,	// (0x000457db) aid_call_pane_cp10_ParamLimits

0x13f3,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g1_ParamLimits

0x13f3,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8812,	// (0x000457ed) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8812,	// (0x000457ed) popup_clock_analogue_window_cp10_g4_ParamLimits

0x13f3,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0004c811) popup_clock_analogue_window_cp10_g_ParamLimits

0x8828,	// (0x00045803) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8ecf,	// (0x00045eaa) cell_dialer2_keypad_pane_g2_ParamLimits

0x8ecf,	// (0x00045eaa) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0004c8f7) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0004c8f7) cell_dialer2_keypad_pane_g

0x8eeb,	// (0x00045ec6) cell_dialer2_keypad_pane_t1

0x9a8d,	// (0x00046a68) main_cset_text2_pane_ParamLimits

0x9a8d,	// (0x00046a68) main_cset_text2_pane

0xd417,	// (0x0004a3f2) area_vitu2_query_pane_g1_ParamLimits

0x28e2,	// (0x0003f8bd) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0004ca9d) area_vitu2_query_pane_g_ParamLimits

0xd49b,	// (0x0004a476) area_vitu2_query_pane_t7_ParamLimits

0xd49b,	// (0x0004a476) area_vitu2_query_pane_t7

0xa226,	// (0x00047201) bg_button_pane_cp018_ParamLimits

0xa234,	// (0x0004720f) bg_button_pane_cp021_ParamLimits

0x291b,	// (0x0003f8f6) bg_button_pane_cp022_ParamLimits

0x291b,	// (0x0003f8f6) bg_vkb2_func_pane_cp08_ParamLimits

0xa226,	// (0x00047201) bg_vkb2_func_pane_cp06_ParamLimits

0xa234,	// (0x0004720f) bg_vkb2_func_pane_cp07_ParamLimits

0x292c,	// (0x0003f907) input_focus_pane_cp09_ParamLimits

0xf121,	// (0x0004c0fc) cam6_autofocus_pane_ParamLimits

0xf121,	// (0x0004c0fc) cam6_autofocus_pane

0xa725,	// (0x00047700) cam6_image_uncrop_pane_ParamLimits

0xa725,	// (0x00047700) cam6_image_uncrop_pane

0xa734,	// (0x0004770f) cam6_indi_pane_ParamLimits

0xa734,	// (0x0004770f) cam6_indi_pane

0xa74a,	// (0x00047725) cam6_mode_pane_ParamLimits

0xa74a,	// (0x00047725) cam6_mode_pane

0xa75c,	// (0x00047737) cam6_timer_pane_ParamLimits

0xa75c,	// (0x00047737) cam6_timer_pane

0xa768,	// (0x00047743) cam6_zoom_pane_ParamLimits

0xa768,	// (0x00047743) cam6_zoom_pane

0xa776,	// (0x00047751) cam6_mode_pane_g1_ParamLimits

0xa776,	// (0x00047751) cam6_mode_pane_g1

0xa786,	// (0x00047761) cam6_mode_pane_g2_ParamLimits

0xa786,	// (0x00047761) cam6_mode_pane_g2

0xa796,	// (0x00047771) cam6_mode_pane_g3_ParamLimits

0xa796,	// (0x00047771) cam6_mode_pane_g3

0xa7a6,	// (0x00047781) cam6_mode_pane_g4_ParamLimits

0xa7a6,	// (0x00047781) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0004cb85) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0004cb85) cam6_mode_pane_g

0xd70a,	// (0x0004a6e5) bg_tb_trans_pane_cp08_ParamLimits

0xd70a,	// (0x0004a6e5) bg_tb_trans_pane_cp08

0xd718,	// (0x0004a6f3) cam6_battery_pane_ParamLimits

0xd718,	// (0x0004a6f3) cam6_battery_pane

0xd72e,	// (0x0004a709) cam6_indi_pane_g1_ParamLimits

0xd72e,	// (0x0004a709) cam6_indi_pane_g1

0xd740,	// (0x0004a71b) cam6_indi_pane_g2_ParamLimits

0xd740,	// (0x0004a71b) cam6_indi_pane_g2

0xd752,	// (0x0004a72d) cam6_indi_pane_g3_ParamLimits

0xd752,	// (0x0004a72d) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0004cb8e) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0004cb8e) cam6_indi_pane_g

0xd764,	// (0x0004a73f) cam6_indi_pane_t1_ParamLimits

0xd764,	// (0x0004a73f) cam6_indi_pane_t1

0x94b0,	// (0x0004648b) cam6_autofocus_pane_g1

0x94b8,	// (0x00046493) cam6_autofocus_pane_g2

0x94c0,	// (0x0004649b) cam6_autofocus_pane_g3

0x94c8,	// (0x000464a3) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0004cb95) cam6_autofocus_pane_g

0xd78a,	// (0x0004a765) cam6_timer_pane_g1

0xd792,	// (0x0004a76d) cam6_timer_pane_t1

0xd7a0,	// (0x0004a77b) cam6_zoom_cont_pane

0xd7a8,	// (0x0004a783) cam6_zoom_pane_g1

0xd7b0,	// (0x0004a78b) cam6_zoom_pane_g2

0xa7b6,	// (0x00047791) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0004cb9e) cam6_zoom_pane_g

0xc492,	// (0x0004946d) cam6_battery_pane_g1

0xc492,	// (0x0004946d) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0004c71e) cam6_battery_pane_g

0xd7b8,	// (0x0004a793) cam6_zoom_cont_pane_g1

0xd7c1,	// (0x0004a79c) cam6_zoom_cont_pane_g2

0xd7ca,	// (0x0004a7a5) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0004cba5) cam6_zoom_cont_pane_g

0xa7d3,	// (0x000477ae) cam6_mode_pane_cp_ParamLimits

0xa7d3,	// (0x000477ae) cam6_mode_pane_cp

0xa768,	// (0x00047743) cam6_zoom_pane_cp_ParamLimits

0xa768,	// (0x00047743) cam6_zoom_pane_cp

0xa7e5,	// (0x000477c0) vid6_image_uncrop_cif_pane_ParamLimits

0xa7e5,	// (0x000477c0) vid6_image_uncrop_cif_pane

0xa7f5,	// (0x000477d0) vid6_image_uncrop_nhd_pane_ParamLimits

0xa7f5,	// (0x000477d0) vid6_image_uncrop_nhd_pane

0xa725,	// (0x00047700) vid6_image_uncrop_vga_pane_ParamLimits

0xa725,	// (0x00047700) vid6_image_uncrop_vga_pane

0xa804,	// (0x000477df) vid6_image_uncrop_wvga_pane_ParamLimits

0xa804,	// (0x000477df) vid6_image_uncrop_wvga_pane

0xa813,	// (0x000477ee) vid6_indi_pane_ParamLimits

0xa813,	// (0x000477ee) vid6_indi_pane

0xd70a,	// (0x0004a6e5) bg_tb_trans_pane_cp09_ParamLimits

0xd70a,	// (0x0004a6e5) bg_tb_trans_pane_cp09

0xd7e2,	// (0x0004a7bd) cam6_battery_pane_cp_ParamLimits

0xd7e2,	// (0x0004a7bd) cam6_battery_pane_cp

0xd7ee,	// (0x0004a7c9) vid6_indi_pane_g1_ParamLimits

0xd7ee,	// (0x0004a7c9) vid6_indi_pane_g1

0xd800,	// (0x0004a7db) vid6_indi_pane_g2_ParamLimits

0xd800,	// (0x0004a7db) vid6_indi_pane_g2

0xd812,	// (0x0004a7ed) vid6_indi_pane_g3_ParamLimits

0xd812,	// (0x0004a7ed) vid6_indi_pane_g3

0xd829,	// (0x0004a804) vid6_indi_pane_g4_ParamLimits

0xd829,	// (0x0004a804) vid6_indi_pane_g4

0xd840,	// (0x0004a81b) vid6_indi_pane_g5_ParamLimits

0xd840,	// (0x0004a81b) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0004cbac) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0004cbac) vid6_indi_pane_g

0xd85a,	// (0x0004a835) vid6_indi_pane_t1_ParamLimits

0xd85a,	// (0x0004a835) vid6_indi_pane_t1

0xd870,	// (0x0004a84b) vid6_indi_pane_t2_ParamLimits

0xd870,	// (0x0004a84b) vid6_indi_pane_t2

0xd898,	// (0x0004a873) vid6_indi_pane_t3_ParamLimits

0xd898,	// (0x0004a873) vid6_indi_pane_t3

0xd8c0,	// (0x0004a89b) vid6_indi_pane_t4_ParamLimits

0xd8c0,	// (0x0004a89b) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0004cbb7) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0004cbb7) vid6_indi_pane_t

0xd8e4,	// (0x0004a8bf) wait_bar_pane_cp08

0xa82b,	// (0x00047806) main_cset_text2_pane_t1_ParamLimits

0xa82b,	// (0x00047806) main_cset_text2_pane_t1

0xa7be,	// (0x00047799) listscroll_gen_pane_cp06_t1_ParamLimits

0xa7be,	// (0x00047799) listscroll_gen_pane_cp06_t1

0x02c0,	// (0x0003d29b) main_cam6_set_pane

0xc79b,	// (0x00049776) bg_tb_trans_pane_cp06_ParamLimits

0x9373,	// (0x0004634e) cam4_indicators_pane_g1_ParamLimits

0x9380,	// (0x0004635b) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0004c92b) cam4_indicators_pane_g_ParamLimits

0x9398,	// (0x00046373) cam4_indicators_pane_t1_ParamLimits

0xced1,	// (0x00049eac) bg_tb_trans_pane_cp07_ParamLimits

0x9373,	// (0x0004634e) vid4_indicators_pane_g1_ParamLimits

0x9478,	// (0x00046453) vid4_indicators_pane_g2_ParamLimits

0x9485,	// (0x00046460) vid4_indicators_pane_g3_ParamLimits

0x9492,	// (0x0004646d) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0004c93d) vid4_indicators_pane_g_ParamLimits

0x949e,	// (0x00046479) vid4_indicators_pane_t1_ParamLimits

0xf089,	// (0x0004c064) vid4_progress_pane_g1_ParamLimits

0xf095,	// (0x0004c070) vid4_progress_pane_g2_ParamLimits

0xf0a1,	// (0x0004c07c) vid4_progress_pane_g3_ParamLimits

0xf0b0,	// (0x0004c08b) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0004cae8) vid4_progress_pane_g_ParamLimits

0xf0ce,	// (0x0004c0a9) vid4_progress_pane_t1_ParamLimits

0xf0e4,	// (0x0004c0bf) vid4_progress_pane_t2_ParamLimits

0xf0fa,	// (0x0004c0d5) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0004caf3) vid4_progress_pane_t_ParamLimits

0xf10f,	// (0x0004c0ea) wait_bar_pane_cp07_ParamLimits

0xa84c,	// (0x00047827) main_cam6_set_pane_g2_ParamLimits

0xa84c,	// (0x00047827) main_cam6_set_pane_g2

0xa872,	// (0x0004784d) main_cset6_listscroll_pane_ParamLimits

0xa872,	// (0x0004784d) main_cset6_listscroll_pane

0xa890,	// (0x0004786b) main_cset6_slider_pane_ParamLimits

0xa890,	// (0x0004786b) main_cset6_slider_pane

0xa8a6,	// (0x00047881) main_cset6_text2_pane_ParamLimits

0xa8a6,	// (0x00047881) main_cset6_text2_pane

0xd8f3,	// (0x0004a8ce) main_cset6_text_pane

0xd8fb,	// (0x0004a8d6) main_cset_list_pane_copy1_ParamLimits

0xd8fb,	// (0x0004a8d6) main_cset_list_pane_copy1

0xd90b,	// (0x0004a8e6) scroll_pane_cp028_copy1

0xa8b4,	// (0x0004788f) cset_list_set_pane_copy1

0xa8c8,	// (0x000478a3) aid_position_infowindow_above_copy1

0xa8d0,	// (0x000478ab) aid_position_infowindow_below_copy1

0x293d,	// (0x0003f918) cset_list_set_pane_g1_copy1

0xd914,	// (0x0004a8ef) cset_list_set_pane_g3_copy1_ParamLimits

0xd914,	// (0x0004a8ef) cset_list_set_pane_g3_copy1

0x2945,	// (0x0003f920) cset_list_set_pane_t1_copy1_ParamLimits

0x2945,	// (0x0003f920) cset_list_set_pane_t1_copy1

0x175a,	// (0x0003e735) list_highlight_pane_cp021_copy1_ParamLimits

0x175a,	// (0x0003e735) list_highlight_pane_cp021_copy1

0xd923,	// (0x0004a8fe) cset6_slider_pane_ParamLimits

0xd923,	// (0x0004a8fe) cset6_slider_pane

0xd94f,	// (0x0004a92a) main_cset6_slider_pane_g1_ParamLimits

0xd94f,	// (0x0004a92a) main_cset6_slider_pane_g1

0xa8d8,	// (0x000478b3) main_cset6_slider_pane_g2_ParamLimits

0xa8d8,	// (0x000478b3) main_cset6_slider_pane_g2

0xd977,	// (0x0004a952) main_cset6_slider_pane_g3_ParamLimits

0xd977,	// (0x0004a952) main_cset6_slider_pane_g3

0xa900,	// (0x000478db) main_cset6_slider_pane_g4_ParamLimits

0xa900,	// (0x000478db) main_cset6_slider_pane_g4

0xa90c,	// (0x000478e7) main_cset6_slider_pane_g5_ParamLimits

0xa90c,	// (0x000478e7) main_cset6_slider_pane_g5

0xd09d,	// (0x0004a078) main_cset6_slider_pane_g7_ParamLimits

0xd09d,	// (0x0004a078) main_cset6_slider_pane_g7

0xd0a9,	// (0x0004a084) main_cset6_slider_pane_g8_ParamLimits

0xd0a9,	// (0x0004a084) main_cset6_slider_pane_g8

0x9b3c,	// (0x00046b17) main_cset6_slider_pane_g9_ParamLimits

0x9b3c,	// (0x00046b17) main_cset6_slider_pane_g9

0x9b48,	// (0x00046b23) main_cset6_slider_pane_g10_ParamLimits

0x9b48,	// (0x00046b23) main_cset6_slider_pane_g10

0x9b54,	// (0x00046b2f) main_cset6_slider_pane_g11_ParamLimits

0x9b54,	// (0x00046b2f) main_cset6_slider_pane_g11

0x9b60,	// (0x00046b3b) main_cset6_slider_pane_g12_ParamLimits

0x9b60,	// (0x00046b3b) main_cset6_slider_pane_g12

0x9b6c,	// (0x00046b47) main_cset6_slider_pane_g13_ParamLimits

0x9b6c,	// (0x00046b47) main_cset6_slider_pane_g13

0x9b78,	// (0x00046b53) main_cset6_slider_pane_g14_ParamLimits

0x9b78,	// (0x00046b53) main_cset6_slider_pane_g14

0xa91a,	// (0x000478f5) main_cset6_slider_pane_g15_ParamLimits

0xa91a,	// (0x000478f5) main_cset6_slider_pane_g15

0x9b9c,	// (0x00046b77) main_cset6_slider_pane_g16_ParamLimits

0x9b9c,	// (0x00046b77) main_cset6_slider_pane_g16

0x9baa,	// (0x00046b85) main_cset6_slider_pane_g17_ParamLimits

0x9baa,	// (0x00046b85) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0004cbc0) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0004cbc0) main_cset6_slider_pane_g

0xd983,	// (0x0004a95e) main_cset6_slider_pane_t1_ParamLimits

0xd983,	// (0x0004a95e) main_cset6_slider_pane_t1

0xa94a,	// (0x00047925) main_cset6_slider_pane_t2_ParamLimits

0xa94a,	// (0x00047925) main_cset6_slider_pane_t2

0xa975,	// (0x00047950) main_cset6_slider_pane_t3_ParamLimits

0xa975,	// (0x00047950) main_cset6_slider_pane_t3

0xa9a0,	// (0x0004797b) main_cset6_slider_pane_t4_ParamLimits

0xa9a0,	// (0x0004797b) main_cset6_slider_pane_t4

0xa9cd,	// (0x000479a8) main_cset6_slider_pane_t5_ParamLimits

0xa9cd,	// (0x000479a8) main_cset6_slider_pane_t5

0xd9c4,	// (0x0004a99f) main_cset6_slider_pane_t7_ParamLimits

0xd9c4,	// (0x0004a99f) main_cset6_slider_pane_t7

0xa9fa,	// (0x000479d5) main_cset6_slider_pane_t8_ParamLimits

0xa9fa,	// (0x000479d5) main_cset6_slider_pane_t8

0xaa1e,	// (0x000479f9) main_cset6_slider_pane_t9_ParamLimits

0xaa1e,	// (0x000479f9) main_cset6_slider_pane_t9

0xaa42,	// (0x00047a1d) main_cset6_slider_pane_t10_ParamLimits

0xaa42,	// (0x00047a1d) main_cset6_slider_pane_t10

0xaa66,	// (0x00047a41) main_cset6_slider_pane_t11_ParamLimits

0xaa66,	// (0x00047a41) main_cset6_slider_pane_t11

0xd9fa,	// (0x0004a9d5) main_cset6_slider_pane_t14_ParamLimits

0xd9fa,	// (0x0004a9d5) main_cset6_slider_pane_t14

0xda33,	// (0x0004aa0e) main_cset6_slider_pane_t15_ParamLimits

0xda33,	// (0x0004aa0e) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0004cbe5) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0004cbe5) main_cset6_slider_pane_t

0xd182,	// (0x0004a15d) cset_slider_pane_g1_copy1

0xd18b,	// (0x0004a166) cset_slider_pane_g2_copy1

0xd194,	// (0x0004a16f) cset_slider_pane_g3_copy1

0x02c0,	// (0x0003d29b) bg_popup_sub_pane_cp011_copy1

0xd237,	// (0x0004a212) main_cset_text_pane_g1_copy1

0xd23f,	// (0x0004a21a) main_cset_text_pane_t1_copy1

0xd24d,	// (0x0004a228) main_cset_text_pane_t2_copy1

0xd25b,	// (0x0004a236) main_cset_text_pane_t3_copy1

0xd269,	// (0x0004a244) main_cset_text_pane_t4_copy1

0xd277,	// (0x0004a252) main_cset_text_pane_t5_copy1

0xd285,	// (0x0004a260) main_cset_text_pane_t6_copy1

0xd293,	// (0x0004a26e) main_cset_text_pane_t7_copy1

0xa82b,	// (0x00047806) main_cset_text2_pane_t1_copy1

0x02c0,	// (0x0003d29b) main_ncimui_pane

0x7125,	// (0x00044100) popup_query_ncimui_window_ParamLimits

0x7125,	// (0x00044100) popup_query_ncimui_window

0xc763,	// (0x0004973e) field_cale_ev2_pane_g4_ParamLimits

0xc763,	// (0x0004973e) field_cale_ev2_pane_g4

0x8d9a,	// (0x00045d75) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8d9a,	// (0x00045d75) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0004c8d2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0004c8d2) cell_video_dialer_keypad_pane_g

0x8db2,	// (0x00045d8d) cell_video_dialer_keypad_pane_t1

0x02c0,	// (0x0003d29b) bg_popup_window_pane_cp012

0x1270,	// (0x0003e24b) heading_pane_cp06

0xdb5b,	// (0x0004ab36) ncim_query_content_pane

0x02c0,	// (0x0003d29b) bg_popup_heading_pane_cp01

0xdb63,	// (0x0004ab3e) ncim_heading_pane_t1

0xdb71,	// (0x0004ab4c) ncim_indicator_popup_pane

0xdb83,	// (0x0004ab5e) ncim_query_button_pane

0xdb99,	// (0x0004ab74) ncim_query_content_pane_t1

0xdbab,	// (0x0004ab86) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0004cc24) ncim_query_content_pane_t

0xdbe5,	// (0x0004abc0) ncim_query_list_pane

0xdbf7,	// (0x0004abd2) ncim_query_popup_pane

0xdb71,	// (0x0004ab4c) ncim_indicator_popup_pane_ParamLimits

0xab52,	// (0x00047b2d) ncim_query_content_pane_g1_ParamLimits

0xab52,	// (0x00047b2d) ncim_query_content_pane_g1

0xdb99,	// (0x0004ab74) ncim_query_content_pane_t1_ParamLimits

0xdbab,	// (0x0004ab86) ncim_query_content_pane_t2_ParamLimits

0xab5e,	// (0x00047b39) ncim_query_content_pane_t3_ParamLimits

0xab5e,	// (0x00047b39) ncim_query_content_pane_t3

0xab86,	// (0x00047b61) ncim_query_content_pane_t4_ParamLimits

0xab86,	// (0x00047b61) ncim_query_content_pane_t4

0xabae,	// (0x00047b89) ncim_query_content_pane_t5_ParamLimits

0xabae,	// (0x00047b89) ncim_query_content_pane_t5

0xdbbd,	// (0x0004ab98) ncim_query_content_pane_t6_ParamLimits

0xdbbd,	// (0x0004ab98) ncim_query_content_pane_t6

0xfc49,	// (0x0004cc24) ncim_query_content_pane_t_ParamLimits

0xdbe5,	// (0x0004abc0) ncim_query_list_pane_ParamLimits

0xdbf7,	// (0x0004abd2) ncim_query_popup_pane_ParamLimits

0xdc0b,	// (0x0004abe6) wait_bar_pane_cp04

0x02c0,	// (0x0003d29b) input_focus_pane_cp011

0xdc13,	// (0x0004abee) ncim_query_popup_pane_t1

0xdc21,	// (0x0004abfc) ncim_list_query_list_pane_ParamLimits

0xdc21,	// (0x0004abfc) ncim_list_query_list_pane

0x02c0,	// (0x0003d29b) bg_button_pane_cp027

0xdc34,	// (0x0004ac0f) ncim_query_button_pane_g1

0x02c0,	// (0x0003d29b) list_highlight_pane_cp012

0xdc3e,	// (0x0004ac19) ncim_list_query_list_pane_g1

0xdc46,	// (0x0004ac21) ncim_list_query_list_pane_t1

0x938c,	// (0x00046367) cam4_indicators_pane_g3_ParamLimits

0x938c,	// (0x00046367) cam4_indicators_pane_g3

0x938c,	// (0x00046367) vid4_indicators_pane_g5_ParamLimits

0x938c,	// (0x00046367) vid4_indicators_pane_g5

0xf0bf,	// (0x0004c09a) vid4_progress_pane_g5_ParamLimits

0xf0bf,	// (0x0004c09a) vid4_progress_pane_g5

0xaa9a,	// (0x00047a75) main_ncimui_pane_g1

0xaae0,	// (0x00047abb) ncimui_group_query_pane_ParamLimits

0xaae0,	// (0x00047abb) ncimui_group_query_pane

0xab14,	// (0x00047aef) ncimui_list_pane_ParamLimits

0xab14,	// (0x00047aef) ncimui_list_pane

0xab2e,	// (0x00047b09) ncimui_text_pane_ParamLimits

0xab2e,	// (0x00047b09) ncimui_text_pane

0xabd6,	// (0x00047bb1) ncimui_text_pane_t1_ParamLimits

0xabd6,	// (0x00047bb1) ncimui_text_pane_t1

0xdc54,	// (0x0004ac2f) ncimui_list_single_graphic_pane_ParamLimits

0xdc54,	// (0x0004ac2f) ncimui_list_single_graphic_pane

0xabf3,	// (0x00047bce) ncimui_query_pane_ParamLimits

0xabf3,	// (0x00047bce) ncimui_query_pane

0x02c0,	// (0x0003d29b) list_highlight_pane_cp013

0xdc64,	// (0x0004ac3f) ncim_list_query_list_pane_t1_copy1

0xdc3e,	// (0x0004ac19) ncim_list_single_graphic_pane_g1

0xdc72,	// (0x0004ac4d) ncim_query_button_pane_cp01

0xdc7a,	// (0x0004ac55) ncim_query_entry_pane_ParamLimits

0xdc7a,	// (0x0004ac55) ncim_query_entry_pane

0xdc8a,	// (0x0004ac65) ncimui_query_pane_g1

0xdc92,	// (0x0004ac6d) ncimui_query_pane_t1_ParamLimits

0xdc92,	// (0x0004ac6d) ncimui_query_pane_t1

0x02c0,	// (0x0003d29b) input_focus_pane_cp012

0xdc13,	// (0x0004abee) ncim_query_entry_pane_t1

0x0a62,	// (0x0003da3d) main_im_pane_ParamLimits

0x175a,	// (0x0003e735) main_mobtv_pane_ParamLimits

0x175a,	// (0x0003e735) main_mobtv_pane

0xa932,	// (0x0004790d) main_cset6_slider_pane_g18_ParamLimits

0xa932,	// (0x0004790d) main_cset6_slider_pane_g18

0xa93e,	// (0x00047919) main_cset6_slider_pane_g19_ParamLimits

0xa93e,	// (0x00047919) main_cset6_slider_pane_g19

0xdca8,	// (0x0004ac83) bg_main_mobtv_pane_ParamLimits

0xdca8,	// (0x0004ac83) bg_main_mobtv_pane

0xac03,	// (0x00047bde) main_mobtv_info_pane

0xac0e,	// (0x00047be9) main_mobtv_loading_pane_ParamLimits

0xac0e,	// (0x00047be9) main_mobtv_loading_pane

0xdcb6,	// (0x0004ac91) main_mobtv_pg_channel_list_pane

0xdcc0,	// (0x0004ac9b) main_mobtv_pg_hdr_pane

0xac1b,	// (0x00047bf6) main_mobtv_programe_curr_pane_ParamLimits

0xac1b,	// (0x00047bf6) main_mobtv_programe_curr_pane

0xac28,	// (0x00047c03) main_mobtv_programe_next_pane_ParamLimits

0xac28,	// (0x00047c03) main_mobtv_programe_next_pane

0xdcc9,	// (0x0004aca4) popup_mobtv_noti_window

0xc492,	// (0x0004946d) main_tv_pg_hdr_pane_g1

0xdcd3,	// (0x0004acae) main_tv_pg_hdr_pane_g2

0xdcdb,	// (0x0004acb6) main_tv_pg_hdr_pane_g3

0xdce3,	// (0x0004acbe) main_tv_pg_hdr_pane_g4

0xdceb,	// (0x0004acc6) main_tv_pg_hdr_pane_g5

0xdcf5,	// (0x0004acd0) main_tv_pg_hdr_pane_g6

0xdcff,	// (0x0004acda) main_tv_pg_hdr_pane_g7

0xdd09,	// (0x0004ace4) main_tv_pg_hdr_pane_g8

0xdd13,	// (0x0004acee) main_tv_pg_hdr_pane_g9

0xdd1d,	// (0x0004acf8) main_tv_pg_hdr_pane_g10

0xdd27,	// (0x0004ad02) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0004cc31) main_tv_pg_hdr_pane_g

0xdd31,	// (0x0004ad0c) main_tv_pg_hdr_pane_t1

0xdd3f,	// (0x0004ad1a) main_tv_pg_hdr_pane_t2

0xdd4d,	// (0x0004ad28) main_tv_pg_hdr_pane_t3

0xdd5d,	// (0x0004ad38) main_tv_pg_hdr_pane_t4

0xdd6d,	// (0x0004ad48) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0004cc48) main_tv_pg_hdr_pane_t

0xdd7d,	// (0x0004ad58) single_mobtv_pg_channel_pane_ParamLimits

0xdd7d,	// (0x0004ad58) single_mobtv_pg_channel_pane

0xdd8f,	// (0x0004ad6a) single_mobtv_pg_channel_table_pane

0xdd98,	// (0x0004ad73) single_mobtv_pg_channel_thumb_pane

0xdda1,	// (0x0004ad7c) single_tv_pg_channel_pane_g1

0xddaa,	// (0x0004ad85) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0004cc53) single_tv_pg_channel_pane_g

0xc6c2,	// (0x0004969d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc6c2,	// (0x0004969d) bg_single_mobtv_pg_channel_thumb_pane

0xddb3,	// (0x0004ad8e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xddb3,	// (0x0004ad8e) single_mobtv_pg_channel_thumb_pane_g1

0xddc1,	// (0x0004ad9c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xddc1,	// (0x0004ad9c) single_mobtv_pg_channel_thumb_pane_g2

0xddcd,	// (0x0004ada8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xddcd,	// (0x0004ada8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0004cc58) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0004cc58) single_mobtv_pg_channel_thumb_pane_g

0xddd9,	// (0x0004adb4) single_mobtv_pg_channel_thumb_pane_t1

0xdde7,	// (0x0004adc2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0004cc5f) single_mobtv_pg_channel_thumb_pane_t

0xc492,	// (0x0004946d) bg_single_mobtv_pg_channel_table_pane_g1

0xc492,	// (0x0004946d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0004c71e) bg_single_mobtv_pg_channel_table_pane_g

0xddf5,	// (0x0004add0) single_mobtv_pg_channel_table_pane_t1

0xde03,	// (0x0004adde) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0004cc64) single_mobtv_pg_channel_table_pane_t

0xac3d,	// (0x00047c18) main_mobtv_info_pane_g1_ParamLimits

0xac3d,	// (0x00047c18) main_mobtv_info_pane_g1

0xac5b,	// (0x00047c36) main_mobtv_info_pane_t1_ParamLimits

0xac5b,	// (0x00047c36) main_mobtv_info_pane_t1

0xacd3,	// (0x00047cae) main_mobtv_info_pane_t2_ParamLimits

0xacd3,	// (0x00047cae) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0004cc6e) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0004cc6e) main_mobtv_info_pane_t

0xad64,	// (0x00047d3f) wait_bar_pane_cp05

0xad76,	// (0x00047d51) main_mobtv_loading_pane_g1_ParamLimits

0xad76,	// (0x00047d51) main_mobtv_loading_pane_g1

0xad87,	// (0x00047d62) main_mobtv_loading_pane_g2_ParamLimits

0xad87,	// (0x00047d62) main_mobtv_loading_pane_g2

0xad93,	// (0x00047d6e) main_mobtv_loading_pane_g3_ParamLimits

0xad93,	// (0x00047d6e) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0004cc75) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0004cc75) main_mobtv_loading_pane_g

0xde11,	// (0x0004adec) main_mobtv_loading_pane_t1_ParamLimits

0xde11,	// (0x0004adec) main_mobtv_loading_pane_t1

0xde29,	// (0x0004ae04) main_mobtv_loading_pane_t2_ParamLimits

0xde29,	// (0x0004ae04) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0004cc7c) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0004cc7c) main_mobtv_loading_pane_t

0xada6,	// (0x00047d81) wait_bar_pane_cp06_ParamLimits

0xada6,	// (0x00047d81) wait_bar_pane_cp06

0xde4d,	// (0x0004ae28) main_mobtv_programe_curr_pane_t1

0xde5b,	// (0x0004ae36) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0004cc81) main_mobtv_programe_curr_pane_t

0xde69,	// (0x0004ae44) main_mobtv_programe_next_pane_t1

0xde77,	// (0x0004ae52) main_mobtv_programe_next_pane_t2

0xde85,	// (0x0004ae60) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0004cc86) main_mobtv_programe_next_pane_t

0x02c0,	// (0x0003d29b) bg_popup_mobtv_noti_window_pane

0xde93,	// (0x0004ae6e) popup_mobtv_noti_window_g1

0xde9b,	// (0x0004ae76) popup_mobtv_noti_window_t1

0xdea9,	// (0x0004ae84) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0004cc8d) popup_mobtv_noti_window_t

0xc492,	// (0x0004946d) bg_popup_mobtv_noti_window_pane_g1

0x02c0,	// (0x0003d29b) sc_clock_pane

0x02c0,	// (0x0003d29b) main_fs_bigclock_pane

0xa59c,	// (0x00047577) blid2_tripm_pane_t4_ParamLimits

0xa59c,	// (0x00047577) blid2_tripm_pane_t4

0xadb5,	// (0x00047d90) sc_clock_pane_g1_ParamLimits

0xadb5,	// (0x00047d90) sc_clock_pane_g1

0xadc7,	// (0x00047da2) sc_clock_pane_t1_ParamLimits

0xadc7,	// (0x00047da2) sc_clock_pane_t1

0xadeb,	// (0x00047dc6) sc_clock_pane_t2_ParamLimits

0xadeb,	// (0x00047dc6) sc_clock_pane_t2

0xae03,	// (0x00047dde) sc_clock_pane_t3_ParamLimits

0xae03,	// (0x00047dde) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0004cc92) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0004cc92) sc_clock_pane_t

0xb6bf,	// (0x0004869a) main_fs_bigclock_indicator_pane_ParamLimits

0xb6bf,	// (0x0004869a) main_fs_bigclock_indicator_pane

0xc692,	// (0x0004966d) main_fs_bigclock_pane_g1_ParamLimits

0xc692,	// (0x0004966d) main_fs_bigclock_pane_g1

0xb6cb,	// (0x000486a6) main_fs_bigclock_pane_t1_ParamLimits

0xb6cb,	// (0x000486a6) main_fs_bigclock_pane_t1

0xb6dd,	// (0x000486b8) main_fs_bigclock_pane_t2_ParamLimits

0xb6dd,	// (0x000486b8) main_fs_bigclock_pane_t2

0xb6f1,	// (0x000486cc) main_fs_bigclock_pane_t3_ParamLimits

0xb6f1,	// (0x000486cc) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0004ce91) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0004ce91) main_fs_bigclock_pane_t

0xeaba,	// (0x0004ba95) main_fs_bigclock_indicator_pane_g1

0xdb8b,	// (0x0004ab66) ncim_query_content_pane_g2_ParamLimits

0xdb8b,	// (0x0004ab66) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0004cc1f) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0004cc1f) ncim_query_content_pane_g

0xae18,	// (0x00047df3) sc_clock_pane_t4_ParamLimits

0xae18,	// (0x00047df3) sc_clock_pane_t4

0x175a,	// (0x0003e735) main_radioblah_pane

0xce6d,	// (0x00049e48) cell_call4_button_pane_t1_copy1_ParamLimits

0xce6d,	// (0x00049e48) cell_call4_button_pane_t1_copy1

0xaaa2,	// (0x00047a7d) main_ncimui_pane_t1_ParamLimits

0xaaa2,	// (0x00047a7d) main_ncimui_pane_t1

0xaab4,	// (0x00047a8f) main_ncimui_pane_t2_ParamLimits

0xaab4,	// (0x00047a8f) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0004cc18) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0004cc18) main_ncimui_pane_t

0xdfe1,	// (0x0004afbc) main_radioblah_anim_pane_ParamLimits

0xdfe1,	// (0x0004afbc) main_radioblah_anim_pane

0xdff2,	// (0x0004afcd) main_radioblah_info_pane_ParamLimits

0xdff2,	// (0x0004afcd) main_radioblah_info_pane

0xe006,	// (0x0004afe1) main_radioblah_pane_t1_ParamLimits

0xe006,	// (0x0004afe1) main_radioblah_pane_t1

0xe022,	// (0x0004affd) main_radioblah_pane_t2_ParamLimits

0xe022,	// (0x0004affd) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0004ccb3) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0004ccb3) main_radioblah_pane_t

0xaec6,	// (0x00047ea1) main_radioblah_rocker_ctrl_pane_ParamLimits

0xaec6,	// (0x00047ea1) main_radioblah_rocker_ctrl_pane

0xe06a,	// (0x0004b045) main_radioblah_info_pane_t1_ParamLimits

0xe06a,	// (0x0004b045) main_radioblah_info_pane_t1

0xaf1e,	// (0x00047ef9) main_radioblah_info_pane_t2_ParamLimits

0xaf1e,	// (0x00047ef9) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0004ccbc) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0004ccbc) main_radioblah_info_pane_t

0xc492,	// (0x0004946d) main_radioblah_rocker_ctrl_pane_g1

0xafce,	// (0x00047fa9) main_radioblah_rocker_ctrl_pane_g2

0xafd6,	// (0x00047fb1) main_radioblah_rocker_ctrl_pane_g3

0xafde,	// (0x00047fb9) main_radioblah_rocker_ctrl_pane_g4

0xafe6,	// (0x00047fc1) main_radioblah_rocker_ctrl_pane_g5

0xafee,	// (0x00047fc9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0004ccc5) main_radioblah_rocker_ctrl_pane_g

0xa82b,	// (0x00047806) main_cset_text2_pane_t1_copy1_ParamLimits

0xefff,	// (0x0004bfda) cam4_image_uncrop_qvga_pane

0xf011,	// (0x0004bfec) vid4_image_uncrop_qcif_pane

0xf121,	// (0x0004c0fc) cam6_image_uncrop_qvga_pane_ParamLimits

0xf121,	// (0x0004c0fc) cam6_image_uncrop_qvga_pane

0xd7d2,	// (0x0004a7ad) vid6_image_uncrop_qcif_pane_ParamLimits

0xd7d2,	// (0x0004a7ad) vid6_image_uncrop_qcif_pane

0x02c0,	// (0x0003d29b) bg_popup_preview_window_pane_cp03

0xdb3d,	// (0x0004ab18) list_cset_text2_pane

0xdb45,	// (0x0004ab20) main_cset6_text2_pane_g1

0xdb4d,	// (0x0004ab28) main_cset6_text2_pane_t1

0xaff6,	// (0x00047fd1) list_cset_text2_pane_t1_ParamLimits

0xaff6,	// (0x00047fd1) list_cset_text2_pane_t1

0x175a,	// (0x0003e735) main_radioblah_pane_ParamLimits

0xad50,	// (0x00047d2b) main_mobtv_info_pane_t3_ParamLimits

0xad50,	// (0x00047d2b) main_mobtv_info_pane_t3

0xaeb4,	// (0x00047e8f) main_radioblah_pane_g1

0xaeee,	// (0x00047ec9) main_radioblah_info_pane_g1

0xaf73,	// (0x00047f4e) main_radioblah_info_pane_t3_ParamLimits

0xaf73,	// (0x00047f4e) main_radioblah_info_pane_t3

0x489d,	// (0x00041878) highlight_cell_cale_month_pane_ParamLimits

0x489d,	// (0x00041878) highlight_cell_cale_month_pane

0x02c0,	// (0x0003d29b) main_phob_fisheye_pane

0xc818,	// (0x000497f3) scroll_pane_cp0031_ParamLimits

0xc818,	// (0x000497f3) scroll_pane_cp0031

0xd8e4,	// (0x0004a8bf) wait_bar_pane_cp08_ParamLimits

0xa8b4,	// (0x0004788f) cset_list_set_pane_copy1_ParamLimits

0xe0a4,	// (0x0004b07f) highlight_cell_cale_month_pane_g1

0xb010,	// (0x00047feb) highlight_cell_cale_month_pane_t1

0xd507,	// (0x0004a4e2) list_gen_pane_cp01

0xd088,	// (0x0004a063) scroll_pane_01

0xb01e,	// (0x00047ff9) list_single_double_fisheye_pane

0x295a,	// (0x0003f935) list_double_fisheye_pane_g1_ParamLimits

0x295a,	// (0x0003f935) list_double_fisheye_pane_g1

0x2966,	// (0x0003f941) list_double_fisheye_pane_g2_ParamLimits

0x2966,	// (0x0003f941) list_double_fisheye_pane_g2

0xb027,	// (0x00048002) list_double_fisheye_pane_g3_ParamLimits

0xb027,	// (0x00048002) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0004ccd2) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0004ccd2) list_double_fisheye_pane_g

0x2997,	// (0x0003f972) list_double_fisheye_pane_t1_ParamLimits

0x2997,	// (0x0003f972) list_double_fisheye_pane_t1

0x29b2,	// (0x0003f98d) list_double_fisheye_pane_t2_ParamLimits

0x29b2,	// (0x0003f98d) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0004ccdd) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0004ccdd) list_double_fisheye_pane_t

0x02c0,	// (0x0003d29b) main_call5_pane

0xae43,	// (0x00047e1e) sc_swipe_pane_ParamLimits

0xae43,	// (0x00047e1e) sc_swipe_pane

0xb046,	// (0x00048021) call5_image_pane_ParamLimits

0xb046,	// (0x00048021) call5_image_pane

0xb063,	// (0x0004803e) call5_swipe_1_pane_ParamLimits

0xb063,	// (0x0004803e) call5_swipe_1_pane

0xb076,	// (0x00048051) call5_swipe_2_pane_ParamLimits

0xb076,	// (0x00048051) call5_swipe_2_pane

0xb0a3,	// (0x0004807e) popup_call5_audio_first_window_ParamLimits

0xb0a3,	// (0x0004807e) popup_call5_audio_first_window

0xc6c2,	// (0x0004969d) call5_swipe_1_pane_g1_ParamLimits

0xc6c2,	// (0x0004969d) call5_swipe_1_pane_g1

0xe0ac,	// (0x0004b087) call5_swipe_1_pane_g2_ParamLimits

0xe0ac,	// (0x0004b087) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0004cce2) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0004cce2) call5_swipe_1_pane_g

0xe0b8,	// (0x0004b093) call5_swipe_1_pane_t1_ParamLimits

0xe0b8,	// (0x0004b093) call5_swipe_1_pane_t1

0xc6c2,	// (0x0004969d) call5_swipe_2_pane_g1_ParamLimits

0xc6c2,	// (0x0004969d) call5_swipe_2_pane_g1

0xe0cd,	// (0x0004b0a8) call5_swipe_2_pane_g2_ParamLimits

0xe0cd,	// (0x0004b0a8) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0004cce7) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0004cce7) call5_swipe_2_pane_g

0xe0d9,	// (0x0004b0b4) call5_swipe_2_pane_t1_ParamLimits

0xe0d9,	// (0x0004b0b4) call5_swipe_2_pane_t1

0xe0ee,	// (0x0004b0c9) sc_swipe_pane_g1_ParamLimits

0xe0ee,	// (0x0004b0c9) sc_swipe_pane_g1

0xe0fb,	// (0x0004b0d6) sc_swipe_pane_g2_ParamLimits

0xe0fb,	// (0x0004b0d6) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0004ccec) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0004ccec) sc_swipe_pane_g

0xe107,	// (0x0004b0e2) sc_swipe_pane_t1_ParamLimits

0xe107,	// (0x0004b0e2) sc_swipe_pane_t1

0x02c0,	// (0x0003d29b) main_cmail_launcher_pane

0xb0b8,	// (0x00048093) aid_size_cell_cmail_l_ParamLimits

0xb0b8,	// (0x00048093) aid_size_cell_cmail_l

0xb0d2,	// (0x000480ad) grid_cmail_l_pane_ParamLimits

0xb0d2,	// (0x000480ad) grid_cmail_l_pane

0xb0ee,	// (0x000480c9) cell_cmail_l_pane_ParamLimits

0xb0ee,	// (0x000480c9) cell_cmail_l_pane

0xb116,	// (0x000480f1) cell_cmail_l_pane_g1_ParamLimits

0xb116,	// (0x000480f1) cell_cmail_l_pane_g1

0xb122,	// (0x000480fd) cell_cmail_l_pane_t1_ParamLimits

0xb122,	// (0x000480fd) cell_cmail_l_pane_t1

0xe11c,	// (0x0004b0f7) cell_cmail_l_pane_t2_ParamLimits

0xe11c,	// (0x0004b0f7) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0004ccf1) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0004ccf1) cell_cmail_l_pane_t

0x175a,	// (0x0003e735) grid_highlight_pane_cp018_ParamLimits

0x175a,	// (0x0003e735) grid_highlight_pane_cp018

0x2f9a,	// (0x0003ff75) main2_pane_ParamLimits

0x2f9a,	// (0x0003ff75) main2_pane

0x0b0d,	// (0x0003dae8) popup_sp_fs_action_menu_bg_pane_g1

0x0b15,	// (0x0003daf0) popup_sp_fs_action_menu_bg_pane_g2

0x0b1d,	// (0x0003daf8) popup_sp_fs_action_menu_bg_pane_g3

0x0b25,	// (0x0003db00) popup_sp_fs_action_menu_bg_pane_g4

0x0b2d,	// (0x0003db08) popup_sp_fs_action_menu_bg_pane_g5

0x0b35,	// (0x0003db10) popup_sp_fs_action_menu_bg_pane_g6

0x0b3d,	// (0x0003db18) popup_sp_fs_action_menu_bg_pane_g7

0x0b45,	// (0x0003db20) popup_sp_fs_action_menu_bg_pane_g8

0x0b4d,	// (0x0003db28) popup_sp_fs_action_menu_bg_pane_g9

0x0b55,	// (0x0003db30) popup_sp_fs_action_menu_bg_pane_g10

0x0b55,	// (0x0003db30) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0004c1ca) popup_sp_fs_action_menu_bg_pane_g

0xbe56,	// (0x00048e31) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_t3_g3_g1

0xbe62,	// (0x00048e3d) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbe62,	// (0x00048e3d) list_medium_line_x2_t3_g3_g2

0xbe6e,	// (0x00048e49) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbe6e,	// (0x00048e49) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0004c27a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0004c27a) list_medium_line_x2_t3_g3_g

0xbe7a,	// (0x00048e55) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbe7a,	// (0x00048e55) list_medium_line_x2_t3_g3_t1

0x25b1,	// (0x0003f58c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x25b1,	// (0x0003f58c) list_medium_line_x2_t3_g3_t2

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0004c281) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0004c281) list_medium_line_x2_t3_g3_t

0xbe56,	// (0x00048e31) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_t3_g2_g1

0xbe6e,	// (0x00048e49) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbe6e,	// (0x00048e49) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0004c288) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0004c288) list_medium_line_x2_t3_g2_g

0xbea4,	// (0x00048e7f) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbea4,	// (0x00048e7f) list_medium_line_x2_t3_g2_t1

0xbeba,	// (0x00048e95) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbeba,	// (0x00048e95) list_medium_line_x2_t3_g2_t2

0xbecc,	// (0x00048ea7) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbecc,	// (0x00048ea7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0004c28d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0004c28d) list_medium_line_x2_t3_g2_t

0xbe56,	// (0x00048e31) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_t4_g4_g1

0xbeea,	// (0x00048ec5) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbeea,	// (0x00048ec5) list_medium_line_x2_t4_g4_g2

0xbe62,	// (0x00048e3d) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbe62,	// (0x00048e3d) list_medium_line_x2_t4_g4_g3

0xbef6,	// (0x00048ed1) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbef6,	// (0x00048ed1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0004c294) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0004c294) list_medium_line_x2_t4_g4_g

0x25c5,	// (0x0003f5a0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x25c5,	// (0x0003f5a0) list_medium_line_x2_t4_g4_t1

0x25df,	// (0x0003f5ba) list_medium_line_x2_t4_g4_t2_ParamLimits

0x25df,	// (0x0003f5ba) list_medium_line_x2_t4_g4_t2

0x25f5,	// (0x0003f5d0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x25f5,	// (0x0003f5d0) list_medium_line_x2_t4_g4_t3

0xbf02,	// (0x00048edd) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbf02,	// (0x00048edd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0004c29d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0004c29d) list_medium_line_x2_t4_g4_t

0xbe56,	// (0x00048e31) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_t2_g4_g1

0xbeea,	// (0x00048ec5) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbeea,	// (0x00048ec5) list_medium_line_x2_t2_g4_g2

0xbe62,	// (0x00048e3d) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbe62,	// (0x00048e3d) list_medium_line_x2_t2_g4_g3

0xbe6e,	// (0x00048e49) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbe6e,	// (0x00048e49) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0004c304) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0004c304) list_medium_line_x2_t2_g4_g

0xbf14,	// (0x00048eef) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbf14,	// (0x00048eef) list_medium_line_x2_t2_g4_t1

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0004c30d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0004c30d) list_medium_line_x2_t2_g4_t

0xbe56,	// (0x00048e31) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_t2_g3_g1

0xbe62,	// (0x00048e3d) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbe62,	// (0x00048e3d) list_medium_line_x2_t2_g3_g2

0xbe6e,	// (0x00048e49) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbe6e,	// (0x00048e49) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0004c27a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0004c27a) list_medium_line_x2_t2_g3_g

0xbf29,	// (0x00048f04) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbf29,	// (0x00048f04) list_medium_line_x2_t2_g3_t1

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0004c312) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0004c312) list_medium_line_x2_t2_g3_t

0x4a82,	// (0x00041a5d) main_sp_fs_list_pane_ParamLimits

0x4a82,	// (0x00041a5d) main_sp_fs_list_pane

0x4a8e,	// (0x00041a69) sp_fs_scroll_pane_ParamLimits

0x4a8e,	// (0x00041a69) sp_fs_scroll_pane

0x260a,	// (0x0003f5e5) list_medium_line_x2_t3_t1

0x261a,	// (0x0003f5f5) list_medium_line_x2_t3_t2

0xbf6c,	// (0x00048f47) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0004c35d) list_medium_line_x2_t3_t

0x2628,	// (0x0003f603) list_medium_line_x3_t4_t1

0x2638,	// (0x0003f613) list_medium_line_x3_t4_t2

0xbf7a,	// (0x00048f55) list_medium_line_x3_t4_t3

0xbf6c,	// (0x00048f47) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0004c364) list_medium_line_x3_t4_t

0x2646,	// (0x0003f621) list_medium_line_x4_t5_t1

0x2656,	// (0x0003f631) list_medium_line_x4_t5_t2

0xbf7a,	// (0x00048f55) list_medium_line_x4_t5_t3

0xbf88,	// (0x00048f63) list_medium_line_x4_t5_t4

0xbf6c,	// (0x00048f47) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0004c36d) list_medium_line_x4_t5_t

0xbe56,	// (0x00048e31) list_medium_line_t4_g4_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_t4_g4_g1

0xbef6,	// (0x00048ed1) list_medium_line_t4_g4_g2_ParamLimits

0xbef6,	// (0x00048ed1) list_medium_line_t4_g4_g2

0xbf96,	// (0x00048f71) list_medium_line_t4_g4_g3_ParamLimits

0xbf96,	// (0x00048f71) list_medium_line_t4_g4_g3

0xbe6e,	// (0x00048e49) list_medium_line_t4_g4_g4_ParamLimits

0xbe6e,	// (0x00048e49) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0004c378) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0004c378) list_medium_line_t4_g4_g

0xbfa2,	// (0x00048f7d) list_medium_line_t4_g4_t1_ParamLimits

0xbfa2,	// (0x00048f7d) list_medium_line_t4_g4_t1

0xbfb7,	// (0x00048f92) list_medium_line_t4_g4_t2_ParamLimits

0xbfb7,	// (0x00048f92) list_medium_line_t4_g4_t2

0xbfcd,	// (0x00048fa8) list_medium_line_t4_g4_t3_ParamLimits

0xbfcd,	// (0x00048fa8) list_medium_line_t4_g4_t3

0xbe8f,	// (0x00048e6a) list_medium_line_t4_g4_t4_ParamLimits

0xbe8f,	// (0x00048e6a) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0004c381) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0004c381) list_medium_line_t4_g4_t

0x4b60,	// (0x00041b3b) chi_dic_find_pane_g1

0x6e68,	// (0x00043e43) main_tport_pane

0xd1c8,	// (0x0004a1a3) list_medium_line_plain_t1

0xd1de,	// (0x0004a1b9) list_medium_line_t2_g2_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_t2_g2_g1

0xd1ea,	// (0x0004a1c5) list_medium_line_t2_g2_g2_ParamLimits

0xd1ea,	// (0x0004a1c5) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0004ca34) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0004ca34) list_medium_line_t2_g2_g

0x282f,	// (0x0003f80a) list_medium_line_t2_g2_t1_ParamLimits

0x282f,	// (0x0003f80a) list_medium_line_t2_g2_t1

0x2846,	// (0x0003f821) list_medium_line_t2_g2_t2_ParamLimits

0x2846,	// (0x0003f821) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0004ca39) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0004ca39) list_medium_line_t2_g2_t

0xd510,	// (0x0004a4eb) aid_sp_fs_list_icon_a_sm

0xd518,	// (0x0004a4f3) aid_sp_fs_list_icon_d

0xd520,	// (0x0004a4fb) aid_sp_fs_text_primary

0xd529,	// (0x0004a504) aid_sp_fs_text_secondary

0xd532,	// (0x0004a50d) list_medium_line

0xd532,	// (0x0004a50d) list_medium_line_g2

0xd532,	// (0x0004a50d) list_medium_line_g3

0xd532,	// (0x0004a50d) list_medium_line_plain

0xd532,	// (0x0004a50d) list_medium_line_plain_t2

0xd532,	// (0x0004a50d) list_medium_line_plain_t3

0xd532,	// (0x0004a50d) list_medium_line_right_icon

0xd532,	// (0x0004a50d) list_medium_line_right_iconx2

0xd532,	// (0x0004a50d) list_medium_line_t2

0xd532,	// (0x0004a50d) list_medium_line_t2_g2

0xd532,	// (0x0004a50d) list_medium_line_t2_g3

0xd532,	// (0x0004a50d) list_medium_line_t2_right_icon

0xd532,	// (0x0004a50d) list_medium_line_t2_right_iconx2

0xd532,	// (0x0004a50d) list_medium_line_t3

0xd532,	// (0x0004a50d) list_medium_line_t3_g2

0xd532,	// (0x0004a50d) list_medium_line_t3_g3

0xd532,	// (0x0004a50d) list_medium_line_t3_right_iconx2

0xd53b,	// (0x0004a516) list_medium_line_t4_g4

0xd544,	// (0x0004a51f) list_medium_line_x2

0xd544,	// (0x0004a51f) list_medium_line_x2_t2_g2

0xd544,	// (0x0004a51f) list_medium_line_x2_t2_g3

0xd544,	// (0x0004a51f) list_medium_line_x2_t2_g4

0xd544,	// (0x0004a51f) list_medium_line_x2_t3

0xd544,	// (0x0004a51f) list_medium_line_x2_t3_g2

0xd544,	// (0x0004a51f) list_medium_line_x2_t3_g3

0xd544,	// (0x0004a51f) list_medium_line_x2_t3_g4

0xd544,	// (0x0004a51f) list_medium_line_x2_t4_g2

0xd544,	// (0x0004a51f) list_medium_line_x2_t4_g4

0xd54d,	// (0x0004a528) list_medium_line_x3

0xd54d,	// (0x0004a528) list_medium_line_x3_t4

0xd54d,	// (0x0004a528) list_medium_line_x3_t4_g4

0xd53b,	// (0x0004a516) list_medium_line_x4_t4

0xd53b,	// (0x0004a516) list_medium_line_x4_t4_g7

0xd53b,	// (0x0004a516) list_medium_line_x4_t5

0xd556,	// (0x0004a531) list_single_fs_dyc_pane_ParamLimits

0xd556,	// (0x0004a531) list_single_fs_dyc_pane

0xbe56,	// (0x00048e31) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x4_t4_g7_g1

0xda6c,	// (0x0004aa47) list_medium_line_x4_t4_g7_g2_ParamLimits

0xda6c,	// (0x0004aa47) list_medium_line_x4_t4_g7_g2

0xda78,	// (0x0004aa53) list_medium_line_x4_t4_g7_g3_ParamLimits

0xda78,	// (0x0004aa53) list_medium_line_x4_t4_g7_g3

0xda87,	// (0x0004aa62) list_medium_line_x4_t4_g7_g4_ParamLimits

0xda87,	// (0x0004aa62) list_medium_line_x4_t4_g7_g4

0xda93,	// (0x0004aa6e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xda93,	// (0x0004aa6e) list_medium_line_x4_t4_g7_g5

0xdaa2,	// (0x0004aa7d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdaa2,	// (0x0004aa7d) list_medium_line_x4_t4_g7_g6

0xdab1,	// (0x0004aa8c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdab1,	// (0x0004aa8c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0004cbfe) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0004cbfe) list_medium_line_x4_t4_g7_g

0xdabd,	// (0x0004aa98) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdabd,	// (0x0004aa98) list_medium_line_x4_t4_g7_t1

0xdad2,	// (0x0004aaad) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdad2,	// (0x0004aaad) list_medium_line_x4_t4_g7_t2

0xdae7,	// (0x0004aac2) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdae7,	// (0x0004aac2) list_medium_line_x4_t4_g7_t3

0xdafc,	// (0x0004aad7) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdafc,	// (0x0004aad7) list_medium_line_x4_t4_g7_t4

0xdb0e,	// (0x0004aae9) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdb0e,	// (0x0004aae9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0004cc0d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0004cc0d) list_medium_line_x4_t4_g7_t

0xdb20,	// (0x0004aafb) list_single_dyc_row_pane_ParamLimits

0xdb20,	// (0x0004aafb) list_single_dyc_row_pane

0xb033,	// (0x0004800e) call5_gesture_pane_ParamLimits

0xb033,	// (0x0004800e) call5_gesture_pane

0xb089,	// (0x00048064) call5_windows_pane_ParamLimits

0xb089,	// (0x00048064) call5_windows_pane

0xb138,	// (0x00048113) call5_swipe_1_pane_cp_ParamLimits

0xb138,	// (0x00048113) call5_swipe_1_pane_cp

0xb144,	// (0x0004811f) call5_swipe_2_pane_cp_ParamLimits

0xb144,	// (0x0004811f) call5_swipe_2_pane_cp

0x14be,	// (0x0003e499) call5_image_pane_cp

0xb150,	// (0x0004812b) popup_call5_audio_first_window_cp_ParamLimits

0xb150,	// (0x0004812b) popup_call5_audio_first_window_cp

0xe0ee,	// (0x0004b0c9) call5_swipe_1_pane_g1_cp_ParamLimits

0xe0ee,	// (0x0004b0c9) call5_swipe_1_pane_g1_cp

0xe12e,	// (0x0004b109) call5_swipe_1_pane_g2_cp

0xe107,	// (0x0004b0e2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe107,	// (0x0004b0e2) call5_swipe_1_pane_t1_cp

0xe0ee,	// (0x0004b0c9) call5_swipe_2_pane_g1_cp_ParamLimits

0xe0ee,	// (0x0004b0c9) call5_swipe_2_pane_g1_cp

0xe136,	// (0x0004b111) call5_swipe_2_pane_g2_cp

0xe13e,	// (0x0004b119) call5_swipe_2_pane_t1_cp_ParamLimits

0xe13e,	// (0x0004b119) call5_swipe_2_pane_t1_cp

0x175a,	// (0x0003e735) main_sp_fs_email_pane

0xe153,	// (0x0004b12e) main_sp_fs_listscroll_pane_te

0xe15c,	// (0x0004b137) popup_sp_fs_action_menu_pane_ParamLimits

0xe15c,	// (0x0004b137) popup_sp_fs_action_menu_pane

0xc492,	// (0x0004946d) bg_sp_fs_ctrlbar_pane_g1

0xe1a2,	// (0x0004b17d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1ab,	// (0x0004b186) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe1b4,	// (0x0004b18f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc492,	// (0x0004946d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0004ccf6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc271,	// (0x0004924c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc271,	// (0x0004924c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1bd,	// (0x0004b198) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1bd,	// (0x0004b198) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1c9,	// (0x0004b1a4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe1c9,	// (0x0004b1a4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0004ccff) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0004ccff) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe1d5,	// (0x0004b1b0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe1d5,	// (0x0004b1b0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe1ef,	// (0x0004b1ca) list_medium_line_t2_right_icon_g1

0x29d4,	// (0x0003f9af) list_medium_line_t2_right_icon_t1

0x29e4,	// (0x0003f9bf) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0004cd04) list_medium_line_t2_right_icon_t

0x6e46,	// (0x00043e21) bg_sp_fs_ctrlbar_pane_ParamLimits

0x6e46,	// (0x00043e21) bg_sp_fs_ctrlbar_pane

0xb1a6,	// (0x00048181) main_sp_fs_ctrlbar_button_pane_cp01

0xb1ae,	// (0x00048189) main_sp_fs_ctrlbar_ddmenu_pane

0xe231,	// (0x0004b20c) main_sp_fs_ctrlbar_pane_g1

0xe23d,	// (0x0004b218) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0004cd09) main_sp_fs_ctrlbar_pane_g

0xe249,	// (0x0004b224) main_sp_fs_ctrlbar_pane_t1

0x29f2,	// (0x0003f9cd) main_sp_fs_ctrlbar_pane

0x2a16,	// (0x0003f9f1) main_sp_fs_listscroll_pane_te_cp01

0x2a36,	// (0x0003fa11) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2a36,	// (0x0003fa11) popup_sp_fs_action_menu_pane_cp01

0x175a,	// (0x0003e735) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x175a,	// (0x0003e735) bg_sp_fs_highlight_list_pane_cp01

0xe25e,	// (0x0004b239) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe25e,	// (0x0004b239) sp_fs_action_menu_list_gene_pane_g1

0xe26d,	// (0x0004b248) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe26d,	// (0x0004b248) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0004cd0e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0004cd0e) sp_fs_action_menu_list_gene_pane_g

0xe27a,	// (0x0004b255) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe27a,	// (0x0004b255) sp_fs_action_menu_list_gene_pane_t1

0xe292,	// (0x0004b26d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe292,	// (0x0004b26d) sp_fs_action_menu_list_gene_pane

0xe2b5,	// (0x0004b290) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2b5,	// (0x0004b290) popup_sp_fs_action_menu_bg_pane

0xe2c3,	// (0x0004b29e) sp_fs_action_menu_list_pane_ParamLimits

0xe2c3,	// (0x0004b29e) sp_fs_action_menu_list_pane

0xe2e7,	// (0x0004b2c2) sp_fs_scroll_pane_cp01_ParamLimits

0xe2e7,	// (0x0004b2c2) sp_fs_scroll_pane_cp01

0x2a52,	// (0x0003fa2d) list_medium_line_plain_t2_t1

0x2a62,	// (0x0003fa3d) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0004cd13) list_medium_line_plain_t2_t

0x2a70,	// (0x0003fa4b) list_medium_line_plain_t3_t1

0x2a80,	// (0x0003fa5b) list_medium_line_plain_t3_t2

0x2a8e,	// (0x0003fa69) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0004cd18) list_medium_line_plain_t3_t

0xbe56,	// (0x00048e31) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_t2_g2_g1

0xbe6e,	// (0x00048e49) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbe6e,	// (0x00048e49) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0004c288) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0004c288) list_medium_line_x2_t2_g2_g

0xbfa2,	// (0x00048f7d) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbfa2,	// (0x00048f7d) list_medium_line_x2_t2_g2_t1

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0004cd1f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0004cd1f) list_medium_line_x2_t2_g2_t

0xbe56,	// (0x00048e31) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_t4_g2_g1

0xe30d,	// (0x0004b2e8) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe30d,	// (0x0004b2e8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0004cd24) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0004cd24) list_medium_line_x2_t4_g2_g

0x2a9c,	// (0x0003fa77) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2a9c,	// (0x0003fa77) list_medium_line_x2_t4_g2_t1

0x2ab6,	// (0x0003fa91) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2ab6,	// (0x0003fa91) list_medium_line_x2_t4_g2_t2

0x2acc,	// (0x0003faa7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2acc,	// (0x0003faa7) list_medium_line_x2_t4_g2_t3

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0004cd29) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0004cd29) list_medium_line_x2_t4_g2_t

0xe31f,	// (0x0004b2fa) list_medium_line_t3_right_iconx2_g1

0xe1ef,	// (0x0004b1ca) list_medium_line_t3_right_iconx2_g2

0x2ae1,	// (0x0003fabc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0004cd32) list_medium_line_t3_right_iconx2_g

0x2aeb,	// (0x0003fac6) list_medium_line_t3_right_iconx2_t1

0x2afb,	// (0x0003fad6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0004cd39) list_medium_line_t3_right_iconx2_t

0xbe56,	// (0x00048e31) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x3_t4_g4_g1

0xbe62,	// (0x00048e3d) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbe62,	// (0x00048e3d) list_medium_line_x3_t4_g4_g2

0xbef6,	// (0x00048ed1) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbef6,	// (0x00048ed1) list_medium_line_x3_t4_g4_g3

0xe327,	// (0x0004b302) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe327,	// (0x0004b302) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0004cd3e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0004cd3e) list_medium_line_x3_t4_g4_g

0x2b09,	// (0x0003fae4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2b09,	// (0x0003fae4) list_medium_line_x3_t4_g4_t1

0x2b20,	// (0x0003fafb) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2b20,	// (0x0003fafb) list_medium_line_x3_t4_g4_t2

0xe333,	// (0x0004b30e) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe333,	// (0x0004b30e) list_medium_line_x3_t4_g4_t3

0xe348,	// (0x0004b323) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe348,	// (0x0004b323) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0004cd47) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0004cd47) list_medium_line_x3_t4_g4_t

0x2b35,	// (0x0003fb10) list_single_dyc_row_text_pane_t1_ParamLimits

0x2b35,	// (0x0003fb10) list_single_dyc_row_text_pane_t1

0x2b78,	// (0x0003fb53) list_single_dyc_row_text_pane_t2_ParamLimits

0x2b78,	// (0x0003fb53) list_single_dyc_row_text_pane_t2

0xe365,	// (0x0004b340) list_single_dyc_row_text_pane_t3_ParamLimits

0xe365,	// (0x0004b340) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0004cd50) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0004cd50) list_single_dyc_row_text_pane_t

0xe377,	// (0x0004b352) list_single_dyc_row_pane_g1_ParamLimits

0xe377,	// (0x0004b352) list_single_dyc_row_pane_g1

0xe383,	// (0x0004b35e) list_single_dyc_row_pane_g2_ParamLimits

0xe383,	// (0x0004b35e) list_single_dyc_row_pane_g2

0xe38f,	// (0x0004b36a) list_single_dyc_row_pane_g3_ParamLimits

0xe38f,	// (0x0004b36a) list_single_dyc_row_pane_g3

0xe39b,	// (0x0004b376) list_single_dyc_row_pane_g4_ParamLimits

0xe39b,	// (0x0004b376) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0004cd57) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0004cd57) list_single_dyc_row_pane_g

0xe3a7,	// (0x0004b382) list_single_dyc_row_text_pane_ParamLimits

0xe3a7,	// (0x0004b382) list_single_dyc_row_text_pane

0x02c0,	// (0x0003d29b) bg_sp_fs_scroll_pane

0xe3c6,	// (0x0004b3a1) thumb_sp_fs_scroll_pane

0xd1de,	// (0x0004a1b9) list_medium_line_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_g1

0xe3cf,	// (0x0004b3aa) list_medium_line_t1_ParamLimits

0xe3cf,	// (0x0004b3aa) list_medium_line_t1

0xbe56,	// (0x00048e31) list_medium_line_x2_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_g1

0xbe62,	// (0x00048e3d) list_medium_line_x2_g2_ParamLimits

0xbe62,	// (0x00048e3d) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0004cd60) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0004cd60) list_medium_line_x2_g

0xe3e4,	// (0x0004b3bf) list_medium_line_x2_t1_ParamLimits

0xe3e4,	// (0x0004b3bf) list_medium_line_x2_t1

0xbe56,	// (0x00048e31) list_medium_line_x3_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x3_g1

0xbe62,	// (0x00048e3d) list_medium_line_x3_g2_ParamLimits

0xbe62,	// (0x00048e3d) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0004cd60) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0004cd60) list_medium_line_x3_g

0xe3e4,	// (0x0004b3bf) list_medium_line_x3_t1_ParamLimits

0xe3e4,	// (0x0004b3bf) list_medium_line_x3_t1

0xe3fa,	// (0x0004b3d5) thumb_sp_fs_scroll_pane_g1

0xe403,	// (0x0004b3de) thumb_sp_fs_scroll_pane_g2

0xe40c,	// (0x0004b3e7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0004cd65) thumb_sp_fs_scroll_pane_g

0xe3fa,	// (0x0004b3d5) bg_sp_fs_scroll_pane_g1

0xe403,	// (0x0004b3de) bg_sp_fs_scroll_pane_g2

0xe40c,	// (0x0004b3e7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0004cd65) bg_sp_fs_scroll_pane_g

0xbe56,	// (0x00048e31) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbe56,	// (0x00048e31) list_medium_line_x2_t3_g4_g1

0xbeea,	// (0x00048ec5) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbeea,	// (0x00048ec5) list_medium_line_x2_t3_g4_g2

0xbe62,	// (0x00048e3d) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbe62,	// (0x00048e3d) list_medium_line_x2_t3_g4_g3

0xbe6e,	// (0x00048e49) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbe6e,	// (0x00048e49) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0004c304) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0004c304) list_medium_line_x2_t3_g4_g

0x2bd2,	// (0x0003fbad) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2bd2,	// (0x0003fbad) list_medium_line_x2_t3_g4_t1

0x2be8,	// (0x0003fbc3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2be8,	// (0x0003fbc3) list_medium_line_x2_t3_g4_t2

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbe8f,	// (0x00048e6a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0004cd6c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0004cd6c) list_medium_line_x2_t3_g4_t

0xd1de,	// (0x0004a1b9) list_medium_line_g2_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_g2_g1

0xd1ea,	// (0x0004a1c5) list_medium_line_g2_g2_ParamLimits

0xd1ea,	// (0x0004a1c5) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0004ca34) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0004ca34) list_medium_line_g2_g

0xe415,	// (0x0004b3f0) list_medium_line_g2_t1_ParamLimits

0xe415,	// (0x0004b3f0) list_medium_line_g2_t1

0xd1de,	// (0x0004a1b9) list_medium_line_t3_g2_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_t3_g2_g1

0xd1ea,	// (0x0004a1c5) list_medium_line_t3_g2_g2_ParamLimits

0xd1ea,	// (0x0004a1c5) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0004ca34) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0004ca34) list_medium_line_t3_g2_g

0x2c01,	// (0x0003fbdc) list_medium_line_t3_g2_t1_ParamLimits

0x2c01,	// (0x0003fbdc) list_medium_line_t3_g2_t1

0x2c1b,	// (0x0003fbf6) list_medium_line_t3_g2_t2_ParamLimits

0x2c1b,	// (0x0003fbf6) list_medium_line_t3_g2_t2

0x2c31,	// (0x0003fc0c) list_medium_line_t3_g2_t3_ParamLimits

0x2c31,	// (0x0003fc0c) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0004cd73) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0004cd73) list_medium_line_t3_g2_t

0xe1ef,	// (0x0004b1ca) list_medium_line_right_icon_g1

0xe42a,	// (0x0004b405) list_medium_line_right_icon_t1

0xd1de,	// (0x0004a1b9) list_medium_line_t2_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_t2_g1

0x2c48,	// (0x0003fc23) list_medium_line_t2_t1_ParamLimits

0x2c48,	// (0x0003fc23) list_medium_line_t2_t1

0x2c62,	// (0x0003fc3d) list_medium_line_t2_t2_ParamLimits

0x2c62,	// (0x0003fc3d) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0004cd7a) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0004cd7a) list_medium_line_t2_t

0xd1de,	// (0x0004a1b9) list_medium_line_t3_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_t3_g1

0x2c77,	// (0x0003fc52) list_medium_line_t3_t1_ParamLimits

0x2c77,	// (0x0003fc52) list_medium_line_t3_t1

0x2c8e,	// (0x0003fc69) list_medium_line_t3_t2_ParamLimits

0x2c8e,	// (0x0003fc69) list_medium_line_t3_t2

0x2ca3,	// (0x0003fc7e) list_medium_line_t3_t3_ParamLimits

0x2ca3,	// (0x0003fc7e) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0004cd7f) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0004cd7f) list_medium_line_t3_t

0xd1de,	// (0x0004a1b9) list_medium_line_g3_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_g3_g1

0xe438,	// (0x0004b413) list_medium_line_g3_g2_ParamLimits

0xe438,	// (0x0004b413) list_medium_line_g3_g2

0xd1ea,	// (0x0004a1c5) list_medium_line_g3_g3_ParamLimits

0xd1ea,	// (0x0004a1c5) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0004cd86) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0004cd86) list_medium_line_g3_g

0xe444,	// (0x0004b41f) list_medium_line_g3_t1_ParamLimits

0xe444,	// (0x0004b41f) list_medium_line_g3_t1

0xd1de,	// (0x0004a1b9) list_medium_line_t2_g3_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_t2_g3_g1

0xe438,	// (0x0004b413) list_medium_line_t2_g3_g2_ParamLimits

0xe438,	// (0x0004b413) list_medium_line_t2_g3_g2

0xd1ea,	// (0x0004a1c5) list_medium_line_t2_g3_g3_ParamLimits

0xd1ea,	// (0x0004a1c5) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0004cd86) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0004cd86) list_medium_line_t2_g3_g

0x2cb5,	// (0x0003fc90) list_medium_line_t2_g3_t1_ParamLimits

0x2cb5,	// (0x0003fc90) list_medium_line_t2_g3_t1

0x2ccc,	// (0x0003fca7) list_medium_line_t2_g3_t2_ParamLimits

0x2ccc,	// (0x0003fca7) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0004cd8d) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0004cd8d) list_medium_line_t2_g3_t

0xd1de,	// (0x0004a1b9) list_medium_line_t3_g3_g1_ParamLimits

0xd1de,	// (0x0004a1b9) list_medium_line_t3_g3_g1

0xe438,	// (0x0004b413) list_medium_line_t3_g3_g2_ParamLimits

0xe438,	// (0x0004b413) list_medium_line_t3_g3_g2

0xd1ea,	// (0x0004a1c5) list_medium_line_t3_g3_g3_ParamLimits

0xd1ea,	// (0x0004a1c5) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0004cd86) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0004cd86) list_medium_line_t3_g3_g

0x2ce1,	// (0x0003fcbc) list_medium_line_t3_g3_t1_ParamLimits

0x2ce1,	// (0x0003fcbc) list_medium_line_t3_g3_t1

0x2cfa,	// (0x0003fcd5) list_medium_line_t3_g3_t2_ParamLimits

0x2cfa,	// (0x0003fcd5) list_medium_line_t3_g3_t2

0x2d10,	// (0x0003fceb) list_medium_line_t3_g3_t3_ParamLimits

0x2d10,	// (0x0003fceb) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0004cd92) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0004cd92) list_medium_line_t3_g3_t

0xe31f,	// (0x0004b2fa) list_medium_line_right_iconx2_g1

0xe1ef,	// (0x0004b1ca) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0004cd99) list_medium_line_right_iconx2_g

0xe459,	// (0x0004b434) list_medium_line_right_iconx2_t1

0xe31f,	// (0x0004b2fa) list_medium_line_t2_right_iconx2_g1

0xe1ef,	// (0x0004b1ca) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0004cd99) list_medium_line_t2_right_iconx2_g

0x2d2a,	// (0x0003fd05) list_medium_line_t2_right_iconx2_t1

0x2d3a,	// (0x0003fd15) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0004cd9e) list_medium_line_t2_right_iconx2_t

0xe467,	// (0x0004b442) list_medium_line_x4_t4_t1

0x2d48,	// (0x0003fd23) list_medium_line_x4_t4_t2

0x2d58,	// (0x0003fd33) list_medium_line_x4_t4_t3

0x2d68,	// (0x0003fd43) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0004cda3) list_medium_line_x4_t4_t

0xb1f2,	// (0x000481cd) tport_appsw_pane_ParamLimits

0xb1f2,	// (0x000481cd) tport_appsw_pane

0xb205,	// (0x000481e0) tport_contact_pane_ParamLimits

0xb205,	// (0x000481e0) tport_contact_pane

0xb218,	// (0x000481f3) tport_listscroll_pane_ParamLimits

0xb218,	// (0x000481f3) tport_listscroll_pane

0xb22e,	// (0x00048209) cell_tport_appsw_pane_ParamLimits

0xb22e,	// (0x00048209) cell_tport_appsw_pane

0xcf10,	// (0x00049eeb) tport_appsw_pane_g1_ParamLimits

0xcf10,	// (0x00049eeb) tport_appsw_pane_g1

0xe475,	// (0x0004b450) tport_contact_pane_g1

0xe47e,	// (0x0004b459) tport_contact_pane_t1

0xe48c,	// (0x0004b467) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0004cdac) tport_contact_pane_t

0xe49a,	// (0x0004b475) list_tport_pane

0xe4a3,	// (0x0004b47e) scroll_pane_cp_030

0xb24b,	// (0x00048226) cell_tport_appsw_pane_g1

0xe4ac,	// (0x0004b487) cell_tport_appsw_pane_t1

0x02c0,	// (0x0003d29b) grid_highlight_pane_cp019

0xb263,	// (0x0004823e) list_tport_double_graphic_pane_ParamLimits

0xb263,	// (0x0004823e) list_tport_double_graphic_pane

0x175a,	// (0x0003e735) list_highlight_pane_cp023_ParamLimits

0x175a,	// (0x0003e735) list_highlight_pane_cp023

0xb273,	// (0x0004824e) list_tport_double_graphic_pane_g1_ParamLimits

0xb273,	// (0x0004824e) list_tport_double_graphic_pane_g1

0xb280,	// (0x0004825b) list_tport_double_graphic_pane_t1_ParamLimits

0xb280,	// (0x0004825b) list_tport_double_graphic_pane_t1

0xb295,	// (0x00048270) list_tport_double_graphic_pane_t2_ParamLimits

0xb295,	// (0x00048270) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0004cdb8) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0004cdb8) list_tport_double_graphic_pane_t

0x02c0,	// (0x0003d29b) main_cale_note_pane

0x96b5,	// (0x00046690) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x96b5,	// (0x00046690) cell_vitu2_function_top_wide_pane_cp01

0xad64,	// (0x00047d3f) wait_bar_pane_cp05_ParamLimits

0x02c0,	// (0x0003d29b) listscroll_cmail_pane

0xe4c2,	// (0x0004b49d) list_cmail_pane

0xb2b1,	// (0x0004828c) list_cmail_body_pane

0xb2c9,	// (0x000482a4) list_single_cmail_header_caption_pane

0xb2e9,	// (0x000482c4) list_single_cmail_header_detail_pane_ParamLimits

0xb2e9,	// (0x000482c4) list_single_cmail_header_detail_pane

0xb31b,	// (0x000482f6) list_single_cmail_header_caption_pane_t1

0x2d78,	// (0x0003fd53) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2d78,	// (0x0003fd53) list_single_cmail_header_detail_pane_g1

0xe4e2,	// (0x0004b4bd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe4e2,	// (0x0004b4bd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0004cdbd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0004cdbd) list_single_cmail_header_detail_pane_g

0xe4fb,	// (0x0004b4d6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe4fb,	// (0x0004b4d6) list_single_cmail_header_detail_pane_t1

0xe539,	// (0x0004b514) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe539,	// (0x0004b514) list_single_cmail_header_editor_pane_bg

0xddaa,	// (0x0004ad85) list_cmail_body_pane_g1

0xe54b,	// (0x0004b526) list_cmail_body_pane_t1

0xcf6a,	// (0x00049f45) list_single_cmail_header_editor_pane_bg_g1

0x0e74,	// (0x0003de4f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf7a,	// (0x00049f55) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf72,	// (0x00049f4d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1d6,	// (0x0004a1b1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf9a,	// (0x00049f75) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf8a,	// (0x00049f65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf92,	// (0x00049f6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0e54,	// (0x0003de2f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb32b,	// (0x00048306) calenote_gesture_pane_ParamLimits

0xb32b,	// (0x00048306) calenote_gesture_pane

0xb34b,	// (0x00048326) calenote_window_pane_ParamLimits

0xb34b,	// (0x00048326) calenote_window_pane

0xe559,	// (0x0004b534) popup_note_window_cp01

0xb367,	// (0x00048342) calenote_swipe_1_pane_ParamLimits

0xb367,	// (0x00048342) calenote_swipe_1_pane

0xb144,	// (0x0004811f) calenote_swipe_2_pane_ParamLimits

0xb144,	// (0x0004811f) calenote_swipe_2_pane

0xe0ee,	// (0x0004b0c9) calenote_swipe_1_pane_g1_ParamLimits

0xe0ee,	// (0x0004b0c9) calenote_swipe_1_pane_g1

0xe0fb,	// (0x0004b0d6) calenote_swipe_1_pane_g2_ParamLimits

0xe0fb,	// (0x0004b0d6) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0004ccec) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0004ccec) calenote_swipe_1_pane_g

0xe56b,	// (0x0004b546) calenote_swipe_1_pane_t1_ParamLimits

0xe56b,	// (0x0004b546) calenote_swipe_1_pane_t1

0xe0ee,	// (0x0004b0c9) calenote_swipe_2_pane_g1_ParamLimits

0xe0ee,	// (0x0004b0c9) calenote_swipe_2_pane_g1

0xe58a,	// (0x0004b565) calenote_swipe_2_pane_g2_ParamLimits

0xe58a,	// (0x0004b565) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0004cdc9) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0004cdc9) calenote_swipe_2_pane_g

0xe596,	// (0x0004b571) calenote_swipe_2_pane_t1_ParamLimits

0xe596,	// (0x0004b571) calenote_swipe_2_pane_t1

0x02c0,	// (0x0003d29b) main_mup_navstr_pane

0x834d,	// (0x00045328) main_mup3_pane_t7_ParamLimits

0x834d,	// (0x00045328) main_mup3_pane_t7

0xee37,	// (0x0004be12) main_mp4_pane_g6_ParamLimits

0xee37,	// (0x0004be12) main_mp4_pane_g6

0xefcd,	// (0x0004bfa8) main_image3_pane_t4_ParamLimits

0xefcd,	// (0x0004bfa8) main_image3_pane_t4

0xb37c,	// (0x00048357) popup_navstr_preview_pane_ParamLimits

0xb37c,	// (0x00048357) popup_navstr_preview_pane

0xb38c,	// (0x00048367) scroll_navstr_pane_ParamLimits

0xb38c,	// (0x00048367) scroll_navstr_pane

0x02c0,	// (0x0003d29b) bg_popup_preview_window_pane_cp04

0xe5bd,	// (0x0004b598) popup_navstr_preview_pane_t1

0xb3a0,	// (0x0004837b) scroll_navstr_pane_g1_ParamLimits

0xb3a0,	// (0x0004837b) scroll_navstr_pane_g1

0xb3b4,	// (0x0004838f) scroll_navstr_pane_t1_ParamLimits

0xb3b4,	// (0x0004838f) scroll_navstr_pane_t1

0xe562,	// (0x0004b53d) bg_button_pane_cp014

0xe562,	// (0x0004b53d) bg_button_pane_cp030

0x297a,	// (0x0003f955) list_double_fisheye_pane_g4_ParamLimits

0x297a,	// (0x0003f955) list_double_fisheye_pane_g4

0x2986,	// (0x0003f961) list_double_fisheye_pane_g5_ParamLimits

0x2986,	// (0x0003f961) list_double_fisheye_pane_g5

0xe4ca,	// (0x0004b4a5) sp_fs_scroll_pane_cp03

0xe231,	// (0x0004b20c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe23d,	// (0x0004b218) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0004cd09) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe249,	// (0x0004b224) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb2a7,	// (0x00048282) sp_fs_scroll_pane_cp02

0x0b78,	// (0x0003db53) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0b78,	// (0x0003db53) popup_sp_fs_calendar_preview_list_single_pane

0x02c0,	// (0x0003d29b) main_cam6_pano_pane

0x175a,	// (0x0003e735) main_mup3_pane_ParamLimits

0x02c0,	// (0x0003d29b) main_phacti_pane

0xac35,	// (0x00047c10) bg_button_pane_cp11

0xac4f,	// (0x00047c2a) main_mobtv_info_pane_g2_ParamLimits

0xac4f,	// (0x00047c2a) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0004cc69) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0004cc69) main_mobtv_info_pane_g

0xae2a,	// (0x00047e05) sc_clock_pane_t5_ParamLimits

0xae2a,	// (0x00047e05) sc_clock_pane_t5

0xaeb4,	// (0x00047e8f) main_radioblah_pane_g1_ParamLimits

0xe03a,	// (0x0004b015) main_radioblah_pane_t3_ParamLimits

0xe03a,	// (0x0004b015) main_radioblah_pane_t3

0xe052,	// (0x0004b02d) main_radioblah_pane_t4_ParamLimits

0xe052,	// (0x0004b02d) main_radioblah_pane_t4

0xaedc,	// (0x00047eb7) main_radioblah_text_pane_ParamLimits

0xaedc,	// (0x00047eb7) main_radioblah_text_pane

0xaeee,	// (0x00047ec9) main_radioblah_info_pane_g1_ParamLimits

0xaf87,	// (0x00047f62) main_radioblah_info_pane_t4_ParamLimits

0xaf87,	// (0x00047f62) main_radioblah_info_pane_t4

0x175a,	// (0x0003e735) main_sp_fs_calendar_pane

0xb3cb,	// (0x000483a6) main_phacti_pane_g1

0xb3d3,	// (0x000483ae) phacti_note_pane_ParamLimits

0xb3d3,	// (0x000483ae) phacti_note_pane

0xe5d4,	// (0x0004b5af) phacti_term_pane_ParamLimits

0xe5d4,	// (0x0004b5af) phacti_term_pane

0xe5e9,	// (0x0004b5c4) phacti_note_pane_t1_ParamLimits

0xe5e9,	// (0x0004b5c4) phacti_note_pane_t1

0xe600,	// (0x0004b5db) phacti_term_pane_g1

0xe608,	// (0x0004b5e3) phacti_term_pane_t1_ParamLimits

0xe608,	// (0x0004b5e3) phacti_term_pane_t1

0xe632,	// (0x0004b60d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe63a,	// (0x0004b615) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0004cdd3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe642,	// (0x0004b61d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe642,	// (0x0004b61d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe658,	// (0x0004b633) aid_popup_sp_fs_bg_corner_pane

0xc492,	// (0x0004946d) popup_sp_fs_calendar_preview_bg_pane_g1

0x02c0,	// (0x0003d29b) popup_sp_fs_calendar_preview_bg_pane

0xe660,	// (0x0004b63b) popup_sp_fs_calendar_preview_list_pane

0x175a,	// (0x0003e735) bg_main_sp_fs_cale_pane_ParamLimits

0x175a,	// (0x0003e735) bg_main_sp_fs_cale_pane

0xe668,	// (0x0004b643) listscroll_cale_mrui_pane_ParamLimits

0xe668,	// (0x0004b643) listscroll_cale_mrui_pane

0xe67c,	// (0x0004b657) listscroll_sp_fs_schedule_track_pane

0xe685,	// (0x0004b660) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe685,	// (0x0004b660) main_sp_fs_ctrlbar_pane_cp01

0xe696,	// (0x0004b671) main_sp_fs_ribbon_pane

0xe69e,	// (0x0004b679) popup_sp_fs_cale_preview_window

0xb42a,	// (0x00048405) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb42a,	// (0x00048405) list_single_sp_fs_schedule_track_pane

0x175a,	// (0x0003e735) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x175a,	// (0x0003e735) bg_sp_fs_highlight_list_pane_cp03

0xb43e,	// (0x00048419) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb43e,	// (0x00048419) list_single_sp_fs_schedule_track_pane_g1

0xb44a,	// (0x00048425) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb44a,	// (0x00048425) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0004cdd8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0004cdd8) list_single_sp_fs_schedule_track_pane_g

0xb456,	// (0x00048431) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb456,	// (0x00048431) list_single_sp_fs_schedule_track_pane_t1

0xb478,	// (0x00048453) sp_fs_schedule_track_pane_ParamLimits

0xb478,	// (0x00048453) sp_fs_schedule_track_pane

0xe6b0,	// (0x0004b68b) sp_fs_schedule_track_pane_g1

0xe6b8,	// (0x0004b693) sp_fs_schedule_track_pane_g2

0xe6c0,	// (0x0004b69b) sp_fs_schedule_track_pane_g3

0xe6c8,	// (0x0004b6a3) sp_fs_schedule_track_pane_g4

0xe6d0,	// (0x0004b6ab) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0004cddd) sp_fs_schedule_track_pane_g

0xcf6a,	// (0x00049f45) bg_sp_fs_schedule_viewer_highlight_g1

0x0e74,	// (0x0003de4f) bg_sp_fs_schedule_viewer_highlight_g2

0xcf72,	// (0x00049f4d) bg_sp_fs_schedule_viewer_highlight_g3

0xcf7a,	// (0x00049f55) bg_sp_fs_schedule_viewer_highlight_g4

0xd1d6,	// (0x0004a1b1) bg_sp_fs_schedule_viewer_highlight_g5

0xcf8a,	// (0x00049f65) bg_sp_fs_schedule_viewer_highlight_g6

0xcf92,	// (0x00049f6d) bg_sp_fs_schedule_viewer_highlight_g7

0xcf9a,	// (0x00049f75) bg_sp_fs_schedule_viewer_highlight_g8

0x0e54,	// (0x0003de2f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0004cde8) bg_sp_fs_schedule_viewer_highlight_g

0x02c0,	// (0x0003d29b) bg_main_sp_fs_ribbon_pane

0xb48d,	// (0x00048468) main_sp_fs_ribbon_pane_g1

0xe6d8,	// (0x0004b6b3) main_sp_fs_ribbon_pane_t1

0xb496,	// (0x00048471) main_sp_fs_ribbon_pane_t2

0xe6e7,	// (0x0004b6c2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0004cdfb) main_sp_fs_ribbon_pane_t

0xe6f6,	// (0x0004b6d1) main_sp_fs_ribbon_scheduler_pane

0xe6fe,	// (0x0004b6d9) bg_main_sp_fs_ribbon_pane_g1

0xe707,	// (0x0004b6e2) bg_main_sp_fs_ribbon_pane_g2

0xe710,	// (0x0004b6eb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0004ce02) bg_main_sp_fs_ribbon_pane_g

0xe718,	// (0x0004b6f3) main_sp_fs_ribbon_scheduler_pane_g1

0xe721,	// (0x0004b6fc) main_sp_fs_ribbon_scheduler_pane_g2

0xe72a,	// (0x0004b705) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0004ce09) main_sp_fs_ribbon_scheduler_pane_g

0xe733,	// (0x0004b70e) list_cale_mrui_pane

0xb4a5,	// (0x00048480) sp_fs_scroll_pane_cp07_ParamLimits

0xb4a5,	// (0x00048480) sp_fs_scroll_pane_cp07

0xb4bb,	// (0x00048496) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb4bb,	// (0x00048496) bg_sp_fs_schedule_viewer_highlight

0xe73c,	// (0x0004b717) list_single_sp_fs_schedule_track_pane_cp01

0xe744,	// (0x0004b71f) list_sp_fs_schedule_track_pane

0xe74c,	// (0x0004b727) sp_fs_scroll_pane_cp06_ParamLimits

0xe74c,	// (0x0004b727) sp_fs_scroll_pane_cp06

0xc492,	// (0x0004946d) bgmain_sp_fs_calendar_pane_g1

0x2db6,	// (0x0003fd91) list_single_cale_mrui_pane_ParamLimits

0x2db6,	// (0x0003fd91) list_single_cale_mrui_pane

0xe75e,	// (0x0004b739) list_single_cale_mrui_row_pane_ParamLimits

0xe75e,	// (0x0004b739) list_single_cale_mrui_row_pane

0xe76b,	// (0x0004b746) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe76b,	// (0x0004b746) list_single_cale_mrui_row_pane_g1

0xe7a3,	// (0x0004b77e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe7a3,	// (0x0004b77e) list_single_cale_mrui_row_pane_t1

0x2ddc,	// (0x0003fdb7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2ddc,	// (0x0003fdb7) list_single_cale_mrui_row_pane_t2

0xe7b5,	// (0x0004b790) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe7b5,	// (0x0004b790) list_single_cale_mrui_row_pane_t3

0xe7e4,	// (0x0004b7bf) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe7e4,	// (0x0004b7bf) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0004ce15) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0004ce15) list_single_cale_mrui_row_pane_t

0x2e42,	// (0x0003fe1d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x2e42,	// (0x0003fe1d) list_single_cmail_header_editor_pane_bg_cp01

0x2e66,	// (0x0003fe41) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2e66,	// (0x0003fe41) list_single_cmail_header_editor_pane_bg_cp02

0xb4cd,	// (0x000484a8) main_radioblah_text_pane_t1_ParamLimits

0xb4cd,	// (0x000484a8) main_radioblah_text_pane_t1

0xe813,	// (0x0004b7ee) cam6_indi_pane_cp01

0xe81b,	// (0x0004b7f6) cam6_mode_pane_cp01

0xe823,	// (0x0004b7fe) cam6_pano_pane

0xe82c,	// (0x0004b807) cam6_zoom_pane_cp01

0xe836,	// (0x0004b811) cam6_pano_image_pane

0xe83f,	// (0x0004b81a) cam6_pano_pane_g1

0xddaa,	// (0x0004ad85) cam6_pano_pane_g2

0xe848,	// (0x0004b823) cam6_pano_pane_g3

0xe851,	// (0x0004b82c) cam6_pano_pane_g4

0xca72,	// (0x00049a4d) cam6_pano_pane_g5

0xe85a,	// (0x0004b835) cam6_pano_pane_g6

0xe862,	// (0x0004b83d) cam6_pano_pane_g7

0xe86a,	// (0x0004b845) cam6_pano_pane_g8

0xe873,	// (0x0004b84e) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0004ce1e) cam6_pano_pane_g

0x02c0,	// (0x0003d29b) main_browser_tag_pane

0xe5b5,	// (0x0004b590) grid_navstr_albumart_pane

0xe87e,	// (0x0004b859) cell_navstr_albumart_pane_ParamLimits

0xe87e,	// (0x0004b859) cell_navstr_albumart_pane

0xe89a,	// (0x0004b875) cell_navstr_albumart_pane_g1

0x6955,	// (0x00043930) cell_navstr_albumart_pane_g2

0x6965,	// (0x00043940) cell_navstr_albumart_pane_g3

0x695d,	// (0x00043938) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0004ce31) cell_navstr_albumart_pane_g

0xb4e8,	// (0x000484c3) bt_list_pane_ParamLimits

0xb4e8,	// (0x000484c3) bt_list_pane

0xb4fe,	// (0x000484d9) bt_list_pane_t1

0xb50d,	// (0x000484e8) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0004ce3a) bt_list_pane_t

0x02c0,	// (0x0003d29b) main_cale_prevew_pane

0xb51c,	// (0x000484f7) popup_cale_preview_window_ParamLimits

0xb51c,	// (0x000484f7) popup_cale_preview_window

0x175a,	// (0x0003e735) bg_popup_preview_window_pane_cp05_ParamLimits

0x175a,	// (0x0003e735) bg_popup_preview_window_pane_cp05

0xe8a2,	// (0x0004b87d) list_cale_preview_pane_ParamLimits

0xe8a2,	// (0x0004b87d) list_cale_preview_pane

0xb537,	// (0x00048512) list_double_cale_preview_pane_ParamLimits

0xb537,	// (0x00048512) list_double_cale_preview_pane

0xb54b,	// (0x00048526) list_single_cale_preview_pane_ParamLimits

0xb54b,	// (0x00048526) list_single_cale_preview_pane

0xb563,	// (0x0004853e) list_single_cale_preview_pane_g1

0xb56b,	// (0x00048546) list_single_cale_preview_pane_t1_ParamLimits

0xb56b,	// (0x00048546) list_single_cale_preview_pane_t1

0xb580,	// (0x0004855b) list_double_cale_preview_pane_g1

0xb588,	// (0x00048563) list_double_cale_preview_pane_t1_ParamLimits

0xb588,	// (0x00048563) list_double_cale_preview_pane_t1

0xb59d,	// (0x00048578) list_double_cale_preview_pane_t2_ParamLimits

0xb59d,	// (0x00048578) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0004ce3f) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0004ce3f) list_double_cale_preview_pane_t

0x02c0,	// (0x0003d29b) main_ezdial_pane

0x175a,	// (0x0003e735) main_sp_fs_email_pane_ParamLimits

0xb15e,	// (0x00048139) cmail_ddmenu_btn01_pane_ParamLimits

0xb15e,	// (0x00048139) cmail_ddmenu_btn01_pane

0xb171,	// (0x0004814c) cmail_ddmenu_btn02_pane_ParamLimits

0xb171,	// (0x0004814c) cmail_ddmenu_btn02_pane

0xb194,	// (0x0004816f) cmail_ddmenu_btn03_pane_ParamLimits

0xb194,	// (0x0004816f) cmail_ddmenu_btn03_pane

0x29f2,	// (0x0003f9cd) main_sp_fs_ctrlbar_pane_ParamLimits

0x2a16,	// (0x0003f9f1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb2b1,	// (0x0004828c) list_cmail_body_pane_ParamLimits

0xe4d9,	// (0x0004b4b4) bg_button_pane_cp12

0xe4ee,	// (0x0004b4c9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe4ee,	// (0x0004b4c9) list_single_cmail_header_detail_pane_g3

0x2d90,	// (0x0003fd6b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2d90,	// (0x0003fd6b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0004cdc4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0004cdc4) list_single_cmail_header_detail_pane_t

0xe61d,	// (0x0004b5f8) phacti_term_pane_t2_ParamLimits

0xe61d,	// (0x0004b5f8) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0004cdce) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0004cdce) phacti_term_pane_t

0xe8ae,	// (0x0004b889) aid_size_list_single_double

0xb5b5,	// (0x00048590) popup_ezdial_listscroll_window

0xb5d1,	// (0x000485ac) popup_number_entry_window_cp01

0x14be,	// (0x0003e499) bg_popup_call_pane_cp09

0xe8ba,	// (0x0004b895) ezdial_list_pane

0xe8c2,	// (0x0004b89d) scroll_pane_cp23

0x6e46,	// (0x00043e21) bg_button_pane_cp028_ParamLimits

0x6e46,	// (0x00043e21) bg_button_pane_cp028

0xb5df,	// (0x000485ba) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb5df,	// (0x000485ba) cmail_ddmenu_btn01_pane_g1

0xb5eb,	// (0x000485c6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb5eb,	// (0x000485c6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0004ce44) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0004ce44) cmail_ddmenu_btn01_pane_g

0xe8ca,	// (0x0004b8a5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe8ca,	// (0x0004b8a5) cmail_ddmenu_btn01_pane_t1

0x6e46,	// (0x00043e21) bg_button_pane_cp029_ParamLimits

0x6e46,	// (0x00043e21) bg_button_pane_cp029

0xb5f7,	// (0x000485d2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb5f7,	// (0x000485d2) cmail_ddmenu_btn02_pane_g1

0xb60f,	// (0x000485ea) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb60f,	// (0x000485ea) cmail_ddmenu_btn02_pane_t1

0x175a,	// (0x0003e735) bg_button_pane_cp031_ParamLimits

0x175a,	// (0x0003e735) bg_button_pane_cp031

0xb5f7,	// (0x000485d2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb5f7,	// (0x000485d2) cmail_ddmenu_btn03_pane_g1

0xb60f,	// (0x000485ea) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb60f,	// (0x000485ea) cmail_ddmenu_btn03_pane_t1

0x8eeb,	// (0x00045ec6) cell_dialer2_keypad_pane_t1_ParamLimits

0x8f05,	// (0x00045ee0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8f05,	// (0x00045ee0) cell_dialer2_keypad_pane_t1_copy1

0xaad8,	// (0x00047ab3) ncimui_group_button_pane

0x175a,	// (0x0003e735) main_sp_fs_calendar_pane_ParamLimits

0xb2c9,	// (0x000482a4) list_single_cmail_header_caption_pane_ParamLimits

0xd529,	// (0x0004a504) aid_recal_txt_sm_pane

0x02c0,	// (0x0003d29b) mian_recal_day_pane

0xe69e,	// (0x0004b679) popup_sp_fs_cale_preview_window_ParamLimits

0x02c0,	// (0x0003d29b) list_recal_day_pane

0xe8f8,	// (0x0004b8d3) list_single_recal_day_pane_ParamLimits

0xe8f8,	// (0x0004b8d3) list_single_recal_day_pane

0xe90a,	// (0x0004b8e5) list_single_recal_day_pane_g1_ParamLimits

0xe90a,	// (0x0004b8e5) list_single_recal_day_pane_g1

0xe916,	// (0x0004b8f1) list_single_recal_day_pane_g2_ParamLimits

0xe916,	// (0x0004b8f1) list_single_recal_day_pane_g2

0xe922,	// (0x0004b8fd) list_single_recal_day_pane_g3_ParamLimits

0xe922,	// (0x0004b8fd) list_single_recal_day_pane_g3

0xb633,	// (0x0004860e) list_single_recal_day_pane_g4_ParamLimits

0xb633,	// (0x0004860e) list_single_recal_day_pane_g4

0xe92e,	// (0x0004b909) list_single_recal_day_pane_g5_ParamLimits

0xe92e,	// (0x0004b909) list_single_recal_day_pane_g5

0xe93a,	// (0x0004b915) list_single_recal_day_pane_g6_ParamLimits

0xe93a,	// (0x0004b915) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0004ce53) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0004ce53) list_single_recal_day_pane_g

0xe946,	// (0x0004b921) list_single_recal_day_pane_t1

0xe954,	// (0x0004b92f) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0004ce60) list_single_recal_day_pane_t

0xb641,	// (0x0004861c) ncimui_query_button_pane_ParamLimits

0xb641,	// (0x0004861c) ncimui_query_button_pane

0xb651,	// (0x0004862c) ncimui_query_button_pane_t1_ParamLimits

0xb651,	// (0x0004862c) ncimui_query_button_pane_t1

0xe962,	// (0x0004b93d) ncimui_query_button_pane_t2_ParamLimits

0xe962,	// (0x0004b93d) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0004ce65) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0004ce65) ncimui_query_button_pane_t

0xb664,	// (0x0004863f) query_button_pane_ParamLimits

0xb664,	// (0x0004863f) query_button_pane

0x02c0,	// (0x0003d29b) bg_button_pane_cp0028

0xe975,	// (0x0004b950) query_button_pane_t1

0x6e68,	// (0x00043e43) main_tport_pane_ParamLimits

0xb1b8,	// (0x00048193) bg_popup_window_pane_cp01_ParamLimits

0xb1b8,	// (0x00048193) bg_popup_window_pane_cp01

0xb1ce,	// (0x000481a9) heading_pane_cp08_ParamLimits

0xb1ce,	// (0x000481a9) heading_pane_cp08

0xb1df,	// (0x000481ba) heading_pane_cp07_ParamLimits

0xb1df,	// (0x000481ba) heading_pane_cp07

0xb253,	// (0x0004822e) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0004cdb1) cell_tport_appsw_pane_g

0x2682,	// (0x0003f65d) input_candi_list_open_g1

0x100f,	// (0x0003dfea) list_cale_time_pane_g6_ParamLimits

0x100f,	// (0x0003dfea) list_cale_time_pane_g6

0x7d91,	// (0x00044d6c) aid_size_touch_calib_1_ParamLimits

0x7d91,	// (0x00044d6c) aid_size_touch_calib_1

0x7d9d,	// (0x00044d78) aid_size_touch_calib_2_ParamLimits

0x7d9d,	// (0x00044d78) aid_size_touch_calib_2

0x7db3,	// (0x00044d8e) aid_size_touch_calib_3_ParamLimits

0x7db3,	// (0x00044d8e) aid_size_touch_calib_3

0x7dd1,	// (0x00044dac) aid_size_touch_calib_4_ParamLimits

0x7dd1,	// (0x00044dac) aid_size_touch_calib_4

0x7de7,	// (0x00044dc2) main_touch_calib_button_group_pane_ParamLimits

0x7de7,	// (0x00044dc2) main_touch_calib_button_group_pane

0x7dfe,	// (0x00044dd9) main_touch_calib_pane_g1_ParamLimits

0x7e0a,	// (0x00044de5) main_touch_calib_pane_g2_ParamLimits

0x7e16,	// (0x00044df1) main_touch_calib_pane_g3_ParamLimits

0x7e22,	// (0x00044dfd) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0004c793) main_touch_calib_pane_g_ParamLimits

0x7e2e,	// (0x00044e09) main_touch_calib_pane_t1_ParamLimits

0x7e48,	// (0x00044e23) main_touch_calib_pane_t2_ParamLimits

0x7e62,	// (0x00044e3d) main_touch_calib_pane_t3_ParamLimits

0x7e76,	// (0x00044e51) main_touch_calib_pane_t4_ParamLimits

0x7e8a,	// (0x00044e65) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0004c79c) main_touch_calib_pane_t_ParamLimits

0xc83c,	// (0x00049817) list_single_fp_cale_pane_g3_ParamLimits

0xc83c,	// (0x00049817) list_single_fp_cale_pane_g3

0x175a,	// (0x0003e735) bg_button_pane_cp012_ParamLimits

0x175a,	// (0x0003e735) bg_vkb2_func_pane_cp03_ParamLimits

0x9eb2,	// (0x00046e8d) cell_vitu2_function_top_pane_g1_ParamLimits

0x175a,	// (0x0003e735) bg_vkb2_func_pane_cp04_ParamLimits

0xaa8c,	// (0x00047a67) main_ncimui_button_group_pane_ParamLimits

0xaa8c,	// (0x00047a67) main_ncimui_button_group_pane

0xaac6,	// (0x00047aa1) main_ncimui_pane_t3_ParamLimits

0xaac6,	// (0x00047aa1) main_ncimui_pane_t3

0xe5cb,	// (0x0004b5a6) phacti_button_group_pane

0xe8ae,	// (0x0004b889) aid_size_list_single_double_ParamLimits

0xb5b5,	// (0x00048590) popup_ezdial_listscroll_window_ParamLimits

0xb5d1,	// (0x000485ac) popup_number_entry_window_cp01_ParamLimits

0xb677,	// (0x00048652) phacti_button_pane_ParamLimits

0xb677,	// (0x00048652) phacti_button_pane

0x02c0,	// (0x0003d29b) bg_button_pane_cp14

0xe983,	// (0x0004b95e) phacti_button_pane_t1

0xb688,	// (0x00048663) main_touch_calib_button_pane_ParamLimits

0xb688,	// (0x00048663) main_touch_calib_button_pane

0x0a62,	// (0x0003da3d) bg_button_pane_cp18_ParamLimits

0x0a62,	// (0x0003da3d) bg_button_pane_cp18

0xe991,	// (0x0004b96c) main_touch_calib_button_pane_t1_ParamLimits

0xe991,	// (0x0004b96c) main_touch_calib_button_pane_t1

0xe9a7,	// (0x0004b982) main_touch_calib_button_pane_t2_ParamLimits

0xe9a7,	// (0x0004b982) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0004ce6a) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0004ce6a) main_touch_calib_button_pane_t

0x02c0,	// (0x0003d29b) cell_ncimui_button_pane

0x02c0,	// (0x0003d29b) bg_button_pane_cp032

0xe9c5,	// (0x0004b9a0) cell_ncimui_button_pane_t1

0xefab,	// (0x0004bf86) image3_infobar_pane_ParamLimits

0xefab,	// (0x0004bf86) image3_infobar_pane

0xae56,	// (0x00047e31) fs_bigclock_status_pane_ParamLimits

0xae56,	// (0x00047e31) fs_bigclock_status_pane

0xae63,	// (0x00047e3e) main_fs_bigclock_clock_pane_ParamLimits

0xae63,	// (0x00047e3e) main_fs_bigclock_clock_pane

0xae76,	// (0x00047e51) main_fs_bigclock_indi_pane_ParamLimits

0xae76,	// (0x00047e51) main_fs_bigclock_indi_pane

0xae91,	// (0x00047e6c) main_fs_bigclock_swipe_pane_ParamLimits

0xae91,	// (0x00047e6c) main_fs_bigclock_swipe_pane

0x02c0,	// (0x0003d29b) main_fs_clock_dumped_data

0xdeb7,	// (0x0004ae92) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdeb7,	// (0x0004ae92) list_single_fs_bigclock_indicator_pane_g1

0xded7,	// (0x0004aeb2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xded7,	// (0x0004aeb2) list_single_fs_bigclock_indicator_pane_g2

0xdef1,	// (0x0004aecc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdef1,	// (0x0004aecc) list_single_fs_bigclock_indicator_pane_g3

0xdf0d,	// (0x0004aee8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdf0d,	// (0x0004aee8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0004cc9d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0004cc9d) list_single_fs_bigclock_indicator_pane_g

0xdf33,	// (0x0004af0e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdf33,	// (0x0004af0e) list_single_fs_bigclock_indicator_pane_t1

0xdf5b,	// (0x0004af36) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdf5b,	// (0x0004af36) list_single_fs_bigclock_indicator_pane_t2

0xdf83,	// (0x0004af5e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdf83,	// (0x0004af5e) list_single_fs_bigclock_indicator_pane_t3

0xdfad,	// (0x0004af88) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdfad,	// (0x0004af88) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0004cca8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0004cca8) list_single_fs_bigclock_indicator_pane_t

0xe9d3,	// (0x0004b9ae) image3_infobar_fav_pane_ParamLimits

0xe9d3,	// (0x0004b9ae) image3_infobar_fav_pane

0xe9e3,	// (0x0004b9be) image3_infobar_loc_pane_ParamLimits

0xe9e3,	// (0x0004b9be) image3_infobar_loc_pane

0xe9f9,	// (0x0004b9d4) image3_infobar_time_pane_ParamLimits

0xe9f9,	// (0x0004b9d4) image3_infobar_time_pane

0xc492,	// (0x0004946d) image3_infobar_time_pane_g1

0xea09,	// (0x0004b9e4) image3_infobar_time_pane_t1

0xc492,	// (0x0004946d) image3_infobar_loc_pane_g1

0xea17,	// (0x0004b9f2) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0004ce6f) image3_infobar_loc_pane_g

0xea1f,	// (0x0004b9fa) image3_infobar_loc_pane_t1

0xc492,	// (0x0004946d) image3_infobar_fav_pane_g1

0xea2d,	// (0x0004ba08) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0004ce74) image3_infobar_fav_pane_g

0xea35,	// (0x0004ba10) fs_bigclock_status_battery_pane

0xea3e,	// (0x0004ba19) fs_bigclock_status_signal_pane

0xea47,	// (0x0004ba22) fs_bigclock_status_title_pane

0xea50,	// (0x0004ba2b) fs_bigclock_status_signal_pane_g1

0xea59,	// (0x0004ba34) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0004ce79) fs_bigclock_status_signal_pane_g

0xea61,	// (0x0004ba3c) fs_bigclock_status_battery_pane_g1

0xea6a,	// (0x0004ba45) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0004ce7e) fs_bigclock_status_battery_pane_g

0xea72,	// (0x0004ba4d) fs_bigclock_status_title_pane_t1

0xc492,	// (0x0004946d) main_fs_bigclock_clock_pane_g1

0xea80,	// (0x0004ba5b) main_fs_bigclock_clock_pane_g2

0xea80,	// (0x0004ba5b) main_fs_bigclock_clock_pane_g3

0xea80,	// (0x0004ba5b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0004ce83) main_fs_bigclock_clock_pane_g

0xea8c,	// (0x0004ba67) main_fs_bigclock_clock_pane_t1

0xea9a,	// (0x0004ba75) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0004ce8c) main_fs_bigclock_clock_pane_t

0xeaa9,	// (0x0004ba84) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeaa9,	// (0x0004ba84) list_single_fs_bigclock_indicator_pane

0xb69d,	// (0x00048678) list_single_fs_bigclock_pane_ParamLimits

0xb69d,	// (0x00048678) list_single_fs_bigclock_pane

0xeac3,	// (0x0004ba9e) main_fs_bigclock_indicator_pane_t1

0xead2,	// (0x0004baad) list_single_fs_bigclock_pane_g1

0xeada,	// (0x0004bab5) list_single_fs_bigclock_pane_t1

0xc492,	// (0x0004946d) main_fs_bigclock_swipe_pane_g1

0xeb18,	// (0x0004baf3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0004ce9d) main_fs_bigclock_swipe_pane_g

0xeb20,	// (0x0004bafb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeb20,	// (0x0004bafb) main_fs_bigclock_swipe_pane_t1

0x4a9a,	// (0x00041a75) call_type_pane_ParamLimits

0x02c0,	// (0x0003d29b) main_btmg_pane

0xe797,	// (0x0004b772) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe797,	// (0x0004b772) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0004ce10) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0004ce10) list_single_cale_mrui_row_pane_g

0xe8e8,	// (0x0004b8c3) list_recal_vselct_arw_lo_pane

0xe8f0,	// (0x0004b8cb) list_recal_vselct_arw_up_pane

0xd520,	// (0x0004a4fb) list_recal_vselct_pane

0xeb3d,	// (0x0004bb18) btmg_button_pane

0xb703,	// (0x000486de) main_btmg_pane_g1

0x02c0,	// (0x0003d29b) bg_button_pane_cp044

0xeb47,	// (0x0004bb22) btmg_button_pane_t1

0x6e2a,	// (0x00043e05) aid_listscroll_gen

0x175a,	// (0x0003e735) main_cntbar_detail_pane

0xe4ba,	// (0x0004b495) list_cmail_folder_pane

0xe4ca,	// (0x0004b4a5) sp_fs_scroll_pane_cp03_ParamLimits

0x2e82,	// (0x0003fe5d) list_single_fs_dyc_pane_cp01_ParamLimits

0x2e82,	// (0x0003fe5d) list_single_fs_dyc_pane_cp01

0xeb55,	// (0x0004bb30) aid_size_cmail_indent

0xeb5e,	// (0x0004bb39) list_single_dyc_row_pane_cp01

0xb73d,	// (0x00048718) cntbar_detail_list_pane_ParamLimits

0xb73d,	// (0x00048718) cntbar_detail_list_pane

0xb78f,	// (0x0004876a) main_cntbar_detail_cont_pane_ParamLimits

0xb78f,	// (0x0004876a) main_cntbar_detail_cont_pane

0x4a8e,	// (0x00041a69) scroll_pane_cp032_ParamLimits

0x4a8e,	// (0x00041a69) scroll_pane_cp032

0xb7a3,	// (0x0004877e) cntbar_detail_list_event_pane_ParamLimits

0xb7a3,	// (0x0004877e) cntbar_detail_list_event_pane

0xb74f,	// (0x0004872a) cntbar_detail_list_shct_pane

0x0ec2,	// (0x0003de9d) aid_list_gen

0xeb67,	// (0x0004bb42) aid_scroll

0xeb70,	// (0x0004bb4b) aid_size_touch_scroll_bar

0xeb79,	// (0x0004bb54) aid_list_double

0xeb82,	// (0x0004bb5d) aid_list_single

0x00f5,	// (0x0003d0d0) aid_list_single_lg

0xeb8b,	// (0x0004bb66) aid_list_z_g_a_sm

0xeb93,	// (0x0004bb6e) aid_list_z_g_d

0xeb9b,	// (0x0004bb76) aid_txt_z_prm

0x2ea0,	// (0x0003fe7b) aid_txt_z_prm_cp01

0x2eae,	// (0x0003fe89) aid_txt_z_sec

0xb7b3,	// (0x0004878e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb7b3,	// (0x0004878e) main_cntbar_detail_cont_pane_g1

0xb7c7,	// (0x000487a2) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb7c7,	// (0x000487a2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0004cea2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0004cea2) main_cntbar_detail_cont_pane_g

0xeba9,	// (0x0004bb84) main_cntbar_detail_cont_pane_t1

0xebb7,	// (0x0004bb92) main_cntbar_detail_cont_pane_t2

0xebc5,	// (0x0004bba0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0004cea7) main_cntbar_detail_cont_pane_t

0xb7d7,	// (0x000487b2) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb7d7,	// (0x000487b2) cell_cntbar_detail_list_shct_pane

0xebd3,	// (0x0004bbae) cntbar_detail_list_shct_pane_g1

0xebdc,	// (0x0004bbb7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0004ceae) cntbar_detail_list_shct_pane_g

0xb7e9,	// (0x000487c4) cntbar_detail_list_event_pane_g1_ParamLimits

0xb7e9,	// (0x000487c4) cntbar_detail_list_event_pane_g1

0xb7f5,	// (0x000487d0) cntbar_detail_list_event_pane_g2_ParamLimits

0xb7f5,	// (0x000487d0) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0004ceb3) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0004ceb3) cntbar_detail_list_event_pane_g

0xb863,	// (0x0004883e) cntbar_detail_list_event_pane_t1_ParamLimits

0xb863,	// (0x0004883e) cntbar_detail_list_event_pane_t1

0xb878,	// (0x00048853) cntbar_detail_list_event_pane_t2_ParamLimits

0xb878,	// (0x00048853) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0004cec0) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0004cec0) cntbar_detail_list_event_pane_t

0xc492,	// (0x0004946d) cell_cntbar_detail_list_shct_pane_g1

0x4e3e,	// (0x00041e19) navi_pane_mv_g3

0x175a,	// (0x0003e735) main_cntbar_detail_pane_ParamLimits

0x02c0,	// (0x0003d29b) main_notif_wgt_pane

0xeded,	// (0x0004bdc8) aid_tch_main_mp4_pane_g4

0xefa1,	// (0x0004bf7c) popup_slider_window_cp02

0xe8df,	// (0x0004b8ba) list_recal_day_event_pane

0xb70d,	// (0x000486e8) cntbar_detail_btn_pane_ParamLimits

0xb70d,	// (0x000486e8) cntbar_detail_btn_pane

0xb725,	// (0x00048700) cntbar_detail_btn_pane_cp01_ParamLimits

0xb725,	// (0x00048700) cntbar_detail_btn_pane_cp01

0xb74f,	// (0x0004872a) cntbar_detail_list_shct_pane_ParamLimits

0xb75f,	// (0x0004873a) cntbar_detail_pane_g1_ParamLimits

0xb75f,	// (0x0004873a) cntbar_detail_pane_g1

0xb773,	// (0x0004874e) cntbar_detail_pane_t1_ParamLimits

0xb773,	// (0x0004874e) cntbar_detail_pane_t1

0xb801,	// (0x000487dc) cntbar_detail_list_event_pane_g3_ParamLimits

0xb801,	// (0x000487dc) cntbar_detail_list_event_pane_g3

0xb819,	// (0x000487f4) cntbar_detail_list_event_pane_g4_ParamLimits

0xb819,	// (0x000487f4) cntbar_detail_list_event_pane_g4

0xb831,	// (0x0004880c) cntbar_detail_list_event_pane_g5_ParamLimits

0xb831,	// (0x0004880c) cntbar_detail_list_event_pane_g5

0xb849,	// (0x00048824) cntbar_detail_list_event_pane_g6_ParamLimits

0xb849,	// (0x00048824) cntbar_detail_list_event_pane_g6

0xb88d,	// (0x00048868) cntbar_detail_list_event_pane_t3_ParamLimits

0xb88d,	// (0x00048868) cntbar_detail_list_event_pane_t3

0xb89f,	// (0x0004887a) popup_notif_wgt_window_ParamLimits

0xb89f,	// (0x0004887a) popup_notif_wgt_window

0xb8b8,	// (0x00048893) popup_submenu_window_cp01_ParamLimits

0xb8b8,	// (0x00048893) popup_submenu_window_cp01

0x14be,	// (0x0003e499) bg_popup_window_pane_cp10

0xebe5,	// (0x0004bbc0) listscroll_notif_wgt_pane

0xebef,	// (0x0004bbca) list_notif_wgt_window

0xebf8,	// (0x0004bbd3) scroll_pane_cp033

0xec01,	// (0x0004bbdc) list_notif_wgt_row_pane_ParamLimits

0xec01,	// (0x0004bbdc) list_notif_wgt_row_pane

0xec15,	// (0x0004bbf0) aid_size_list_notif_wgt_del

0xec1e,	// (0x0004bbf9) list_notif_wgt_row_pane_g1

0xec26,	// (0x0004bc01) list_notif_wgt_row_pane_g2

0xec2e,	// (0x0004bc09) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0004cec7) list_notif_wgt_row_pane_g

0xec37,	// (0x0004bc12) list_notif_wgt_row_pane_t1

0xec45,	// (0x0004bc20) list_notif_wgt_row_pane_t2

0xec53,	// (0x0004bc2e) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0004cece) list_notif_wgt_row_pane_t

0xd1f6,	// (0x0004a1d1) list_recal_day_event_pane_g1

0xec61,	// (0x0004bc3c) list_recal_day_event_pane_t1

0x02c0,	// (0x0003d29b) bg_button_pane_cp045

0xec70,	// (0x0004bc4b) cntbar_detail_btn_pane_t1

0x6e46,	// (0x00043e21) main_callh_pane_ParamLimits

0x6e46,	// (0x00043e21) main_callh_pane

0x02c0,	// (0x0003d29b) main_coverflow0_pane

0x02c0,	// (0x0003d29b) main_wgtman_pane

0xae9f,	// (0x00047e7a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xae9f,	// (0x00047e7a) main_fs_bigclock_unlock_btn_pane

0xb243,	// (0x0004821e) bg_button_pane_cp16

0xb25b,	// (0x00048236) cell_tport_appsw_pane_g3

0xb8ca,	// (0x000488a5) cf0_flow_pane_ParamLimits

0xb8ca,	// (0x000488a5) cf0_flow_pane

0xec7e,	// (0x0004bc59) listscroll_cf0_pane

0xec87,	// (0x0004bc62) main_cf0_pane_g1

0xb8df,	// (0x000488ba) main_cf0_pane_t1_ParamLimits

0xb8df,	// (0x000488ba) main_cf0_pane_t1

0xb8f7,	// (0x000488d2) main_cf0_pane_t2_ParamLimits

0xb8f7,	// (0x000488d2) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0004ced5) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0004ced5) main_cf0_pane_t

0xec91,	// (0x0004bc6c) scroll_pane_cp11

0xb90f,	// (0x000488ea) cf0_flow_pane_g1

0xb91b,	// (0x000488f6) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0004ceda) cf0_flow_pane_g

0xb927,	// (0x00048902) cf0_flow_pane_t1

0x02c0,	// (0x0003d29b) main_call6_pane

0x02c0,	// (0x0003d29b) main_calllock_pane

0xb939,	// (0x00048914) call6_btn_grp_pane_ParamLimits

0xb939,	// (0x00048914) call6_btn_grp_pane

0xb955,	// (0x00048930) call6_pane_g1_ParamLimits

0xb955,	// (0x00048930) call6_pane_g1

0xb96b,	// (0x00048946) popup_call6_1st_window_ParamLimits

0xb96b,	// (0x00048946) popup_call6_1st_window

0xb97c,	// (0x00048957) popup_call6_2nd_window_ParamLimits

0xb97c,	// (0x00048957) popup_call6_2nd_window

0xb98d,	// (0x00048968) cell_call6_btn_pane_ParamLimits

0xb98d,	// (0x00048968) cell_call6_btn_pane

0x14be,	// (0x0003e499) bg_popup_call2_in_pane_cp03

0xec9c,	// (0x0004bc77) popup_call6_1st_window_g1

0xeca4,	// (0x0004bc7f) popup_call6_1st_window_g2

0xecac,	// (0x0004bc87) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0004cedf) popup_call6_1st_window_g

0xecb4,	// (0x0004bc8f) popup_call6_1st_window_t1

0xecc3,	// (0x0004bc9e) popup_call6_1st_window_t2

0xecd3,	// (0x0004bcae) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0004cee6) popup_call6_1st_window_t

0x14be,	// (0x0003e499) bg_popup_call2_in_pane_cp04

0xec9c,	// (0x0004bc77) popup_call6_2nd_window_g1

0xeca4,	// (0x0004bc7f) popup_call6_2nd_window_g2

0xecac,	// (0x0004bc87) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0004cedf) popup_call6_2nd_window_g

0xecb4,	// (0x0004bc8f) popup_call6_2nd_window_t1

0x02c0,	// (0x0003d29b) bg_button_pane_cp15

0xece3,	// (0x0004bcbe) cell_call6_btn_pane_g1

0xecec,	// (0x0004bcc7) cell_call6_btn_pane_t1

0xb9a1,	// (0x0004897c) listscroll_wgtman_pane_ParamLimits

0xb9a1,	// (0x0004897c) listscroll_wgtman_pane

0xb9b9,	// (0x00048994) wgtman_btn_pane_ParamLimits

0xb9b9,	// (0x00048994) wgtman_btn_pane

0x1384,	// (0x0003e35f) aid_scroll_copy1

0xecfb,	// (0x0004bcd6) list_wgtman_pane

0xb9d2,	// (0x000489ad) wgtman_btn_pane_g1_ParamLimits

0xb9d2,	// (0x000489ad) wgtman_btn_pane_g1

0xb9e6,	// (0x000489c1) wgtman_btn_pane_t1_ParamLimits

0xb9e6,	// (0x000489c1) wgtman_btn_pane_t1

0xed05,	// (0x0004bce0) wgtman_btn_pane_t2_ParamLimits

0xed05,	// (0x0004bce0) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0004ceed) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0004ceed) wgtman_btn_pane_t

0xed19,	// (0x0004bcf4) listrow_wgtman_pane_ParamLimits

0xed19,	// (0x0004bcf4) listrow_wgtman_pane

0xed2d,	// (0x0004bd08) listrow_wgtman_pane_g1

0xba01,	// (0x000489dc) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0004cef2) listrow_wgtman_pane_g

0xed36,	// (0x0004bd11) listrow_wgtman_pane_t1

0xed44,	// (0x0004bd1f) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0004cef7) listrow_wgtman_pane_t

0xed52,	// (0x0004bd2d) wait_bar_pane_cp09

0xed5a,	// (0x0004bd35) main_calllock_btn_pane

0xed64,	// (0x0004bd3f) main_calllock_pane_g1

0x02c0,	// (0x0003d29b) bg_button_pane_cp17

0xed70,	// (0x0004bd4b) main_calllock_btn_pane_g1

0xed79,	// (0x0004bd54) main_calllock_btn_pane_t1

0x02c0,	// (0x0003d29b) main_dialer3_pane

0x02c0,	// (0x0003d29b) main_fmrd2_pane

0xc492,	// (0x0004946d) main_fs_bigclock_unlock_btn_pane_g1

0xed90,	// (0x0004bd6b) main_fs_bigclock_unlock_btn_pane_t1

0xba0b,	// (0x000489e6) area_fmrd2_info_pane_ParamLimits

0xba0b,	// (0x000489e6) area_fmrd2_info_pane

0xba1f,	// (0x000489fa) area_fmrd2_visual_pane_ParamLimits

0xba1f,	// (0x000489fa) area_fmrd2_visual_pane

0xba2d,	// (0x00048a08) fmrd2_indi_pane_ParamLimits

0xba2d,	// (0x00048a08) fmrd2_indi_pane

0xba3a,	// (0x00048a15) area_fmrd2_visual_pane_g1

0xba42,	// (0x00048a1d) area_fmrd2_visual_pane_t1

0xba52,	// (0x00048a2d) area_fmrd2_visual_pane_t2

0xba62,	// (0x00048a3d) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0004cf01) area_fmrd2_visual_pane_t

0xba72,	// (0x00048a4d) area_fmrd2_info_pane_g1

0xba7a,	// (0x00048a55) area_fmrd2_info_pane_t1

0xba8a,	// (0x00048a65) area_fmrd2_info_pane_t2

0xba9a,	// (0x00048a75) area_fmrd2_info_pane_t3

0xbaaa,	// (0x00048a85) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0004cf08) area_fmrd2_info_pane_t

0xbaba,	// (0x00048a95) fmrd2_indi_pane_t1

0xbaca,	// (0x00048aa5) fmrd2_indi_pane_t2

0xbada,	// (0x00048ab5) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0004cf11) fmrd2_indi_pane_t

0xdf1c,	// (0x0004aef7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdf1c,	// (0x0004aef7) list_single_fs_bigclock_indicator_pane_g5

0xdfc2,	// (0x0004af9d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdfc2,	// (0x0004af9d) list_single_fs_bigclock_indicator_pane_t5

0xb3e7,	// (0x000483c2) aid_cell_bcale_month_pane_ParamLimits

0xb3e7,	// (0x000483c2) aid_cell_bcale_month_pane

0xb3f9,	// (0x000483d4) bcale_month_pane_ParamLimits

0xb3f9,	// (0x000483d4) bcale_month_pane

0xb411,	// (0x000483ec) bcale_preview_pane_ParamLimits

0xb411,	// (0x000483ec) bcale_preview_pane

0xeada,	// (0x0004bab5) list_single_fs_bigclock_pane_t1_ParamLimits

0xeaf4,	// (0x0004bacf) list_single_fs_bigclock_pane_t2_ParamLimits

0xeaf4,	// (0x0004bacf) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0004ce98) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0004ce98) list_single_fs_bigclock_pane_t

0xed88,	// (0x0004bd63) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0004cefc) main_fs_bigclock_unlock_btn_pane_g

0xbaea,	// (0x00048ac5) aid_dia3_key_size_ParamLimits

0xbaea,	// (0x00048ac5) aid_dia3_key_size

0xbaf9,	// (0x00048ad4) aid_dia3_listrow_size_ParamLimits

0xbaf9,	// (0x00048ad4) aid_dia3_listrow_size

0xbb07,	// (0x00048ae2) dia3_keypad_fun_pane_ParamLimits

0xbb07,	// (0x00048ae2) dia3_keypad_fun_pane

0xbb23,	// (0x00048afe) dia3_keypad_num_pane_ParamLimits

0xbb23,	// (0x00048afe) dia3_keypad_num_pane

0xbb3c,	// (0x00048b17) dia3_listscroll_pane_ParamLimits

0xbb3c,	// (0x00048b17) dia3_listscroll_pane

0xbb4f,	// (0x00048b2a) dia3_numentry_pane_ParamLimits

0xbb4f,	// (0x00048b2a) dia3_numentry_pane

0x00ae,	// (0x0003d089) dia3_list_pane

0x00b9,	// (0x0003d094) scroll_pane_cp12

0x02c0,	// (0x0003d29b) bg_dia3_numentry_pane

0x00c4,	// (0x0003d09f) dia3_numentry_pane_t1

0xbb60,	// (0x00048b3b) cell_dia3_key_num_pane

0xbb68,	// (0x00048b43) cell_dia3_key0_fun_pane_ParamLimits

0xbb68,	// (0x00048b43) cell_dia3_key0_fun_pane

0xbb7c,	// (0x00048b57) cell_dia3_key1_fun_pane_ParamLimits

0xbb7c,	// (0x00048b57) cell_dia3_key1_fun_pane

0xbb94,	// (0x00048b6f) dia3_listrow_pane

0xdc34,	// (0x0004ac0f) bg_dia3_numentry_pane_g1

0x02c0,	// (0x0003d29b) bg_button_pane_cp21

0x00fe,	// (0x0003d0d9) cell_dia3_key_num_pane_t1

0x010c,	// (0x0003d0e7) cell_dia3_key_num_pane_t2

0x011b,	// (0x0003d0f6) cell_dia3_key_num_pane_t3

0x012a,	// (0x0003d105) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0004cf18) cell_dia3_key_num_pane_t

0x02c0,	// (0x0003d29b) bg_button_pane_cp19

0xbb9d,	// (0x00048b78) cell_dia3_key0_fun_pane_g1

0x02c0,	// (0x0003d29b) bg_button_pane_cp20

0xbba5,	// (0x00048b80) cell_dia3_key1_fun_pane_g1

0xbbad,	// (0x00048b88) area_left_week_number_pane

0xbbb6,	// (0x00048b91) area_top_day_name_pane

0xbbbf,	// (0x00048b9a) frame_month_view_pane

0xbbcb,	// (0x00048ba6) grid_month_view_pane

0xbbd5,	// (0x00048bb0) cell_top_day_name_pane_ParamLimits

0xbbd5,	// (0x00048bb0) cell_top_day_name_pane

0xbbf1,	// (0x00048bcc) cell_area_left_week_number_pane_ParamLimits

0xbbf1,	// (0x00048bcc) cell_area_left_week_number_pane

0xbc07,	// (0x00048be2) cell_month_view_pane_ParamLimits

0xbc07,	// (0x00048be2) cell_month_view_pane

0x01be,	// (0x0003d199) frm_month_g1

0xbc28,	// (0x00048c03) frm_month_g2

0xbc32,	// (0x00048c0d) frm_month_g3

0xbc3c,	// (0x00048c17) frm_month_g4

0xbc46,	// (0x00048c21) frm_month_g5

0xbc50,	// (0x00048c2b) frm_month_g6

0xbc5c,	// (0x00048c37) frm_month_g7

0x0203,	// (0x0003d1de) frm_month_g8

0xbc68,	// (0x00048c43) frm_month_g9

0xbc71,	// (0x00048c4c) frm_month_g10

0xbc7a,	// (0x00048c55) frm_month_g11

0xbc83,	// (0x00048c5e) frm_month_g12

0xbc8c,	// (0x00048c67) frm_month_g13

0xbc95,	// (0x00048c70) frm_month_g14

0xbca0,	// (0x00048c7b) frm_month_g15

0xbcab,	// (0x00048c86) frm_month_g16

0x000f,

0xff46,	// (0x0004cf21) frm_month_g

0xbcb6,	// (0x00048c91) cell_top_day_name_pane_t1

0xbcc5,	// (0x00048ca0) cell_area_left_week_number_pane_g1

0xbcb6,	// (0x00048c91) cell_area_left_week_number_pane_t1

0xc492,	// (0x0004946d) cell_month_view_pane_g1

0xbccd,	// (0x00048ca8) cell_month_view_pane_t1

0x02c0,	// (0x0003d29b) main_fps_pane

0xe1f7,	// (0x0004b1d2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe1f7,	// (0x0004b1d2) cmail_ddmenu_btn02_pane_cp1

0xe213,	// (0x0004b1ee) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe213,	// (0x0004b1ee) cmail_ddmenu_btn02_pane_cp2

0xb603,	// (0x000485de) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb603,	// (0x000485de) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0004ce49) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0004ce49) cmail_ddmenu_btn02_pane_g

0xb621,	// (0x000485fc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb621,	// (0x000485fc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0004ce4e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0004ce4e) cmail_ddmenu_btn02_pane_t

0xbcdc,	// (0x00048cb7) fps_text_pane_ParamLimits

0xbcdc,	// (0x00048cb7) fps_text_pane

0xbcf3,	// (0x00048cce) main_fps_pane_g1_ParamLimits

0xbcf3,	// (0x00048cce) main_fps_pane_g1

0xbd0b,	// (0x00048ce6) wait_bar_pane_cp010_ParamLimits

0xbd0b,	// (0x00048ce6) wait_bar_pane_cp010

0xbd1e,	// (0x00048cf9) fps_text_pane_t1_ParamLimits

0xbd1e,	// (0x00048cf9) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
