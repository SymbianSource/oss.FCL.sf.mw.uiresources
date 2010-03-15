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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002e6be };

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
0x1076,	// (0x0002f734) Screen

0x1082,	// (0x0002f740) application_window

0x10be,	// (0x0002f77c) area_bottom_pane_ParamLimits

0x10be,	// (0x0002f77c) area_bottom_pane

0x10f7,	// (0x0002f7b5) area_top_pane_ParamLimits

0x10f7,	// (0x0002f7b5) area_top_pane

0x9bd4,	// (0x00038292) call_video_uplink_pane_ParamLimits

0x9bd4,	// (0x00038292) call_video_uplink_pane

0x1185,	// (0x0002f843) main_pane_ParamLimits

0x1185,	// (0x0002f843) main_pane

0xc3c0,	// (0x0003aa7e) context_pane

0x4adb,	// (0x00033199) navi_pane

0x4b0b,	// (0x000331c9) popup_cale_events_window_ParamLimits

0x4b0b,	// (0x000331c9) popup_cale_events_window

0xc3d3,	// (0x0003aa91) popup_mup_playback_window

0x4b23,	// (0x000331e1) signal_pane

0xa333,	// (0x000389f1) main_browser_pane

0xaf18,	// (0x000395d6) main_burst_pane

0x47dd,	// (0x00032e9b) main_calc_pane

0xc363,	// (0x0003aa21) main_cale_day_pane

0x1733,	// (0x0002fdf1) main_cale_month_pane

0xc363,	// (0x0003aa21) main_cale_week_pane

0xaf18,	// (0x000395d6) main_call_pane

0xa013,	// (0x000386d1) main_call_poc_pane

0xaf18,	// (0x000395d6) main_camera_pane

0xaf18,	// (0x000395d6) main_chi_dic_pane

0xadba,	// (0x00039478) main_clock_pane

0xa013,	// (0x000386d1) main_fmradio_pane

0xaf18,	// (0x000395d6) main_graph_messa_pane

0xa013,	// (0x000386d1) main_help_pane

0xa333,	// (0x000389f1) main_im_pane

0xa26e,	// (0x0003892c) main_image_pane_ParamLimits

0xa26e,	// (0x0003892c) main_image_pane

0xa013,	// (0x000386d1) main_location2_pane

0xaf18,	// (0x000395d6) main_location_pane

0xa26e,	// (0x0003892c) main_messa_pane

0xa013,	// (0x000386d1) main_mp2_pane

0xaf18,	// (0x000395d6) main_mp_pane

0xa013,	// (0x000386d1) main_msg_pane

0xa013,	// (0x000386d1) main_mup_eq_pane

0xa013,	// (0x000386d1) main_mup_pane

0xa333,	// (0x000389f1) main_notes_pane

0xa013,	// (0x000386d1) main_pec_pane

0xa013,	// (0x000386d1) main_phob_pane

0xa013,	// (0x000386d1) main_pinb_pane

0xa013,	// (0x000386d1) main_postcard_pane

0xa013,	// (0x000386d1) main_qdial_pane

0xaf18,	// (0x000395d6) main_skin_pane

0xa013,	// (0x000386d1) main_smil2_pane

0xaf18,	// (0x000395d6) main_smil_pane

0xaf18,	// (0x000395d6) main_video_pane

0xaf18,	// (0x000395d6) main_video_tele_pane

0xa26e,	// (0x0003892c) main_viewer_pane_ParamLimits

0xa26e,	// (0x0003892c) main_viewer_pane

0xaf18,	// (0x000395d6) main_vorec_pane

0x4833,	// (0x00032ef1) popup_blid_sat_info_window_ParamLimits

0x4833,	// (0x00032ef1) popup_blid_sat_info_window

0x4897,	// (0x00032f55) popup_dyc_status_message_window_ParamLimits

0x4897,	// (0x00032f55) popup_dyc_status_message_window

0x48b1,	// (0x00032f6f) popup_grid_large_graphic_window_ParamLimits

0x48b1,	// (0x00032f6f) popup_grid_large_graphic_window

0x4973,	// (0x00033031) popup_loc_request_window_ParamLimits

0x4973,	// (0x00033031) popup_loc_request_window

0x4aaf,	// (0x0003316d) popup_wml_address_window_ParamLimits

0x4aaf,	// (0x0003316d) popup_wml_address_window

0x461b,	// (0x00032cd9) call_muted_g1

0x42af,	// (0x0003296d) popup_call_audio_conf_window_ParamLimits

0x42af,	// (0x0003296d) popup_call_audio_conf_window

0x462b,	// (0x00032ce9) popup_call_audio_first_window_ParamLimits

0x462b,	// (0x00032ce9) popup_call_audio_first_window

0x46a1,	// (0x00032d5f) popup_call_audio_in_window_ParamLimits

0x46a1,	// (0x00032d5f) popup_call_audio_in_window

0x46dd,	// (0x00032d9b) popup_call_audio_out_window_ParamLimits

0x46dd,	// (0x00032d9b) popup_call_audio_out_window

0x4717,	// (0x00032dd5) popup_call_audio_second_window_ParamLimits

0x4717,	// (0x00032dd5) popup_call_audio_second_window

0x476d,	// (0x00032e2b) popup_call_audio_wait_window_ParamLimits

0x476d,	// (0x00032e2b) popup_call_audio_wait_window

0x47a2,	// (0x00032e60) popup_number_entry_window_ParamLimits

0x47a2,	// (0x00032e60) popup_number_entry_window

0x9c00,	// (0x000382be) bg_popup_call_pane_cp05_ParamLimits

0x9c00,	// (0x000382be) bg_popup_call_pane_cp05

0x9c20,	// (0x000382de) popup_number_entry_window_t1

0x9c33,	// (0x000382f1) popup_number_entry_window_t2

0x9c45,	// (0x00038303) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0003d791) popup_number_entry_window_t

0x9c57,	// (0x00038315) text_title_cp2

0x9c6a,	// (0x00038328) bg_popup_call_pane_cp_ParamLimits

0x9c6a,	// (0x00038328) bg_popup_call_pane_cp

0x9c78,	// (0x00038336) call_thumbnail_pane

0x9c80,	// (0x0003833e) popup_call_audio_in_window_g1_ParamLimits

0x9c80,	// (0x0003833e) popup_call_audio_in_window_g1

0x9c8c,	// (0x0003834a) popup_call_audio_in_window_g2_ParamLimits

0x9c8c,	// (0x0003834a) popup_call_audio_in_window_g2

0x9c98,	// (0x00038356) popup_call_audio_in_window_g3_ParamLimits

0x9c98,	// (0x00038356) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0003d79a) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0003d79a) popup_call_audio_in_window_g

0x9ca4,	// (0x00038362) popup_call_audio_in_window_t1_ParamLimits

0x9ca4,	// (0x00038362) popup_call_audio_in_window_t1

0x9cc0,	// (0x0003837e) popup_call_audio_in_window_t2_ParamLimits

0x9cc0,	// (0x0003837e) popup_call_audio_in_window_t2

0x9cdc,	// (0x0003839a) popup_call_audio_in_window_t3_ParamLimits

0x9cdc,	// (0x0003839a) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0003d7a1) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0003d7a1) popup_call_audio_in_window_t

0x9c6a,	// (0x00038328) bg_popup_call_pane_cp01_ParamLimits

0x9c6a,	// (0x00038328) bg_popup_call_pane_cp01

0x9c78,	// (0x00038336) call_thumbnail_pane_cp02

0x9cef,	// (0x000383ad) call_type_pane_cp022

0x9cf7,	// (0x000383b5) popup_call_audio_out_window_g1_ParamLimits

0x9cf7,	// (0x000383b5) popup_call_audio_out_window_g1

0x9d09,	// (0x000383c7) popup_call_audio_out_window_g2_ParamLimits

0x9d09,	// (0x000383c7) popup_call_audio_out_window_g2

0x9d15,	// (0x000383d3) popup_call_audio_out_window_g3_ParamLimits

0x9d15,	// (0x000383d3) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0003d7a8) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0003d7a8) popup_call_audio_out_window_g

0x9d27,	// (0x000383e5) popup_call_audio_out_window_t1_ParamLimits

0x9d27,	// (0x000383e5) popup_call_audio_out_window_t1

0x9d3f,	// (0x000383fd) popup_call_audio_out_window_t2_ParamLimits

0x9d3f,	// (0x000383fd) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0003d7af) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0003d7af) popup_call_audio_out_window_t

0x9d54,	// (0x00038412) bg_popup_call_pane_ParamLimits

0x9d54,	// (0x00038412) bg_popup_call_pane

0x133e,	// (0x0002f9fc) call_thumbnail_pane_cp_ParamLimits

0x133e,	// (0x0002f9fc) call_thumbnail_pane_cp

0x9dd8,	// (0x00038496) call_type_pane_cp01_ParamLimits

0x9dd8,	// (0x00038496) call_type_pane_cp01

0x9e1c,	// (0x000384da) popup_call_audio_first_window_g1_ParamLimits

0x9e1c,	// (0x000384da) popup_call_audio_first_window_g1

0x9e68,	// (0x00038526) popup_call_audio_first_window_g2_ParamLimits

0x9e68,	// (0x00038526) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0003d7b4) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0003d7b4) popup_call_audio_first_window_g

0x9eac,	// (0x0003856a) popup_call_audio_first_window_t1_ParamLimits

0x9eac,	// (0x0003856a) popup_call_audio_first_window_t1

0x9f58,	// (0x00038616) popup_call_audio_first_window_t4_ParamLimits

0x9f58,	// (0x00038616) popup_call_audio_first_window_t4

0x9fe4,	// (0x000386a2) popup_call_audio_first_window_t5_ParamLimits

0x9fe4,	// (0x000386a2) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0003d7b9) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0003d7b9) popup_call_audio_first_window_t

0xa013,	// (0x000386d1) bg_popup_call_pane_cp02

0xa01d,	// (0x000386db) call_type_pane_cp023

0xa025,	// (0x000386e3) popup_call_audio_wait_window_g1

0xa02d,	// (0x000386eb) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0003d7c0) popup_call_audio_wait_window_g

0xa035,	// (0x000386f3) popup_call_audio_wait_window_t3

0xa043,	// (0x00038701) bg_popup_call_pane_cp03_ParamLimits

0xa043,	// (0x00038701) bg_popup_call_pane_cp03

0xa0a3,	// (0x00038761) call_thumbnail_pane_cp011_ParamLimits

0xa0a3,	// (0x00038761) call_thumbnail_pane_cp011

0xa0af,	// (0x0003876d) call_type_pane_cp034_ParamLimits

0xa0af,	// (0x0003876d) call_type_pane_cp034

0xa0eb,	// (0x000387a9) popup_call_audio_second_window_g1_ParamLimits

0xa0eb,	// (0x000387a9) popup_call_audio_second_window_g1

0xa127,	// (0x000387e5) popup_call_audio_second_window_g2_ParamLimits

0xa127,	// (0x000387e5) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0003d7c5) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0003d7c5) popup_call_audio_second_window_g

0xa163,	// (0x00038821) popup_call_audio_second_window_t1_ParamLimits

0xa163,	// (0x00038821) popup_call_audio_second_window_t1

0xa1e4,	// (0x000388a2) popup_call_audio_second_window_t2_ParamLimits

0xa1e4,	// (0x000388a2) popup_call_audio_second_window_t2

0xa21a,	// (0x000388d8) popup_call_audio_second_window_t3_ParamLimits

0xa21a,	// (0x000388d8) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0003d7ca) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0003d7ca) popup_call_audio_second_window_t

0xa013,	// (0x000386d1) bg_popup_call_pane_cp04

0xa250,	// (0x0003890e) list_conf_pane

0xa258,	// (0x00038916) popup_call_audio_conf_window_t1

0xa266,	// (0x00038924) call_thumbnail_pane_g1

0xa26e,	// (0x0003892c) bg_pinb_pane_ParamLimits

0xa26e,	// (0x0003892c) bg_pinb_pane

0xa27c,	// (0x0003893a) find_pinb_pane

0xa285,	// (0x00038943) listscroll_pinb_pane_ParamLimits

0xa285,	// (0x00038943) listscroll_pinb_pane

0xa294,	// (0x00038952) pinb_bg_pane_g1

0x1362,	// (0x0002fa20) pinb_bg_pane_g2

0x136e,	// (0x0002fa2c) pinb_bg_pane_g3

0x137a,	// (0x0002fa38) pinb_bg_pane_g4

0x1386,	// (0x0002fa44) pinb_bg_pane_g5

0x1392,	// (0x0002fa50) pinb_bg_pane_g6

0x139d,	// (0x0002fa5b) pinb_bg_pane_g7

0x13a8,	// (0x0002fa66) pinb_bg_pane_g8

0x13b3,	// (0x0002fa71) pinb_bg_pane_g9

0x13bd,	// (0x0002fa7b) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0003d7d1) pinb_bg_pane_g

0x13da,	// (0x0002fa98) grid_pinb_pane

0x13e5,	// (0x0002faa3) list_pinb_pane

0x13f0,	// (0x0002faae) scroll_pane_cp01_ParamLimits

0x13f0,	// (0x0002faae) scroll_pane_cp01

0xa29e,	// (0x0003895c) find_pinb_pane_g1_ParamLimits

0xa29e,	// (0x0003895c) find_pinb_pane_g1

0xa2b6,	// (0x00038974) find_pinb_pane_t1

0xa2c8,	// (0x00038986) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0003d7eb) find_pinb_pane_t

0xa2dd,	// (0x0003899b) input_focus_pane_cp01_ParamLimits

0xa2dd,	// (0x0003899b) input_focus_pane_cp01

0x1402,	// (0x0002fac0) cell_pinb_pane_ParamLimits

0x1402,	// (0x0002fac0) cell_pinb_pane

0x1424,	// (0x0002fae2) cell_pinb_pane_g1_ParamLimits

0x1424,	// (0x0002fae2) cell_pinb_pane_g1

0x1439,	// (0x0002faf7) cell_pinb_pane_g2_ParamLimits

0x1439,	// (0x0002faf7) cell_pinb_pane_g2

0xa2e9,	// (0x000389a7) cell_pinb_pane_g3_ParamLimits

0xa2e9,	// (0x000389a7) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0003d7f0) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0003d7f0) cell_pinb_pane_g

0xa013,	// (0x000386d1) grid_highlight_pane_cp01

0x1445,	// (0x0002fb03) list_pinb_item_pane_ParamLimits

0x1445,	// (0x0002fb03) list_pinb_item_pane

0xa013,	// (0x000386d1) list_highlight_pane_cp02

0x1457,	// (0x0002fb15) list_pinb_item_pane_g1_ParamLimits

0x1457,	// (0x0002fb15) list_pinb_item_pane_g1

0x1464,	// (0x0002fb22) list_pinb_item_pane_g2_ParamLimits

0x1464,	// (0x0002fb22) list_pinb_item_pane_g2

0x1470,	// (0x0002fb2e) list_pinb_item_pane_g3_ParamLimits

0x1470,	// (0x0002fb2e) list_pinb_item_pane_g3

0x1481,	// (0x0002fb3f) list_pinb_item_pane_g4_ParamLimits

0x1481,	// (0x0002fb3f) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0003d7f7) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0003d7f7) list_pinb_item_pane_g

0x148d,	// (0x0002fb4b) list_pinb_item_pane_t1_ParamLimits

0x148d,	// (0x0002fb4b) list_pinb_item_pane_t1

0xfd62,	// (0x0002e420) calc_display_pane

0xfd8a,	// (0x0002e448) calc_paper_pane

0xfdad,	// (0x0002e46b) grid_calc_pane

0xa013,	// (0x000386d1) bg_list_pane_cp01

0x14ac,	// (0x0002fb6a) clock_g1

0x14b4,	// (0x0002fb72) clock_g2

0x0001,

0xf142,	// (0x0003d800) clock_g

0x14bc,	// (0x0002fb7a) clock_t1_ParamLimits

0x14bc,	// (0x0002fb7a) clock_t1

0x14d1,	// (0x0002fb8f) clock_t2_ParamLimits

0x14d1,	// (0x0002fb8f) clock_t2

0x14e3,	// (0x0002fba1) clock_t3_ParamLimits

0x14e3,	// (0x0002fba1) clock_t3

0x14f5,	// (0x0002fbb3) clock_t4_ParamLimits

0x14f5,	// (0x0002fbb3) clock_t4

0x1507,	// (0x0002fbc5) clock_t5_ParamLimits

0x1507,	// (0x0002fbc5) clock_t5

0x151c,	// (0x0002fbda) clock_t6_ParamLimits

0x151c,	// (0x0002fbda) clock_t6

0x152e,	// (0x0002fbec) clock_t7_ParamLimits

0x152e,	// (0x0002fbec) clock_t7

0x1540,	// (0x0002fbfe) clock_t8_ParamLimits

0x1540,	// (0x0002fbfe) clock_t8

0x1554,	// (0x0002fc12) clock_t9_ParamLimits

0x1554,	// (0x0002fc12) clock_t9

0x0008,

0xf147,	// (0x0003d805) clock_t_ParamLimits

0xf147,	// (0x0003d805) clock_t

0xa2f5,	// (0x000389b3) popup_clock_analogue_window_cp02

0xa2f5,	// (0x000389b3) popup_clock_digital_window_cp01

0xa2fd,	// (0x000389bb) listscroll_help_pane

0xa013,	// (0x000386d1) phob_pre_status_pane

0xa307,	// (0x000389c5) grid_qdial_pane

0xa26e,	// (0x0003892c) listscroll_mce_pane

0xa26e,	// (0x0003892c) bg_notes_pane

0xa311,	// (0x000389cf) list_notes_pane

0x156a,	// (0x0002fc28) scroll_pane_cp06

0xa31f,	// (0x000389dd) bg_calc_paper_pane

0x1588,	// (0x0002fc46) list_calc_pane

0xa333,	// (0x000389f1) bg_calc_display_pane

0xfddb,	// (0x0002e499) calc_display_pane_t1

0xfded,	// (0x0002e4ab) calc_display_pane_t2

0x15a2,	// (0x0002fc60) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0003d818) calc_display_pane_t

0xfdff,	// (0x0002e4bd) cell_calc_pane_ParamLimits

0xfdff,	// (0x0002e4bd) cell_calc_pane

0xa33f,	// (0x000389fd) bg_calc_paper_pane_g1

0xa34b,	// (0x00038a09) bg_calc_paper_pane_g2

0xa357,	// (0x00038a15) bg_calc_paper_pane_g3

0xa363,	// (0x00038a21) bg_calc_paper_pane_g4

0xa36f,	// (0x00038a2d) bg_calc_paper_pane_g5

0x15b4,	// (0x0002fc72) bg_calc_paper_pane_g6

0x15c7,	// (0x0002fc85) bg_calc_paper_pane_g7

0x15da,	// (0x0002fc98) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0003d81f) bg_calc_paper_pane_g

0x15eb,	// (0x0002fca9) calc_bg_paper_pane_g9

0x15fc,	// (0x0002fcba) list_calc_item_pane_ParamLimits

0x15fc,	// (0x0002fcba) list_calc_item_pane

0xa37b,	// (0x00038a39) list_calc_item_pane_g1

0x1614,	// (0x0002fcd2) list_calc_item_pane_t1_ParamLimits

0x1614,	// (0x0002fcd2) list_calc_item_pane_t1

0xfe3c,	// (0x0002e4fa) list_calc_item_pane_t2_ParamLimits

0xfe3c,	// (0x0002e4fa) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0003d830) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0003d830) list_calc_item_pane_t

0xa388,	// (0x00038a46) cell_calc_pane_g1

0xa392,	// (0x00038a50) grid_highlight_pane_cp02

0xa3b4,	// (0x00038a72) bg_calc_display_pane_g1

0x1626,	// (0x0002fce4) bg_calc_display_pane_g2

0xa3bd,	// (0x00038a7b) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0003d83a) bg_calc_display_pane_g

0xfe6e,	// (0x0002e52c) cell_qdial_pane_ParamLimits

0xfe6e,	// (0x0002e52c) cell_qdial_pane

0x1630,	// (0x0002fcee) cell_qdial_pane_g1_ParamLimits

0x1630,	// (0x0002fcee) cell_qdial_pane_g1

0x1646,	// (0x0002fd04) cell_qdial_pane_g2_ParamLimits

0x1646,	// (0x0002fd04) cell_qdial_pane_g2

0xa3c6,	// (0x00038a84) cell_qdial_pane_g3_ParamLimits

0xa3c6,	// (0x00038a84) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0003d841) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0003d841) cell_qdial_pane_g

0x166d,	// (0x0002fd2b) cell_qdial_pane_t1_ParamLimits

0x166d,	// (0x0002fd2b) cell_qdial_pane_t1

0x1685,	// (0x0002fd43) cell_qdial_pane_t2_ParamLimits

0x1685,	// (0x0002fd43) cell_qdial_pane_t2

0x1698,	// (0x0002fd56) cell_qdial_pane_t3_ParamLimits

0x1698,	// (0x0002fd56) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0003d84a) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0003d84a) cell_qdial_pane_t

0xa013,	// (0x000386d1) grid_highlight_pane_cp04

0xa3d2,	// (0x00038a90) thumbnail_qdial_pane_ParamLimits

0xa3d2,	// (0x00038a90) thumbnail_qdial_pane

0xa42e,	// (0x00038aec) list_help_pane

0xa437,	// (0x00038af5) scroll_pane_cp02

0x16ab,	// (0x0002fd69) help_list_pane_t1_ParamLimits

0x16ab,	// (0x0002fd69) help_list_pane_t1

0x16c9,	// (0x0002fd87) bg_notes_pane_g2

0x16d1,	// (0x0002fd8f) bg_notes_pane_g3

0x16d9,	// (0x0002fd97) notes_bg_pane_g1

0x16e1,	// (0x0002fd9f) notes_bg_pane_g4

0x16e9,	// (0x0002fda7) notes_bg_pane_g5

0x16f1,	// (0x0002fdaf) notes_bg_pane_g6

0x16f9,	// (0x0002fdb7) notes_bg_pane_g7

0x1701,	// (0x0002fdbf) notes_bg_pane_g8

0x1709,	// (0x0002fdc7) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0003d868) notes_bg_pane_g

0x1711,	// (0x0002fdcf) list_notes_text_pane_ParamLimits

0x1711,	// (0x0002fdcf) list_notes_text_pane

0xa440,	// (0x00038afe) list_notes_text_pane_g1

0x1725,	// (0x0002fde3) list_notes_text_pane_t1

0x1733,	// (0x0002fdf1) listscroll_cale_week_pane

0x176d,	// (0x0002fe2b) bg_cale_heading_pane

0xa45a,	// (0x00038b18) bg_cale_pane_cp01

0x1792,	// (0x0002fe50) cale_week_corner_pane

0x17b1,	// (0x0002fe6f) cale_week_day_heading_pane

0x17db,	// (0x0002fe99) cale_week_scroll_pane_g1

0x17fb,	// (0x0002feb9) cale_week_scroll_pane_g2

0x1813,	// (0x0002fed1) cale_week_scroll_pane_g3

0x182b,	// (0x0002fee9) cale_week_scroll_pane_g4

0x1843,	// (0x0002ff01) cale_week_scroll_pane_g5

0x185f,	// (0x0002ff1d) cale_week_scroll_pane_g6

0x187b,	// (0x0002ff39) cale_week_scroll_pane_g7

0x189b,	// (0x0002ff59) cale_week_scroll_pane_g8

0x18bb,	// (0x0002ff79) cale_week_scroll_pane_g9

0x18d8,	// (0x0002ff96) cale_week_scroll_pane_g10

0x18f5,	// (0x0002ffb3) cale_week_scroll_pane_g11

0x1912,	// (0x0002ffd0) cale_week_scroll_pane_g12

0x192f,	// (0x0002ffed) cale_week_scroll_pane_g13

0x194c,	// (0x0003000a) cale_week_scroll_pane_g14

0x1971,	// (0x0003002f) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0003d877) cale_week_scroll_pane_g

0x1996,	// (0x00030054) cale_week_time_pane

0x19b6,	// (0x00030074) grid_cale_week_pane

0xa48a,	// (0x00038b48) scroll_pane_cp08

0x19e5,	// (0x000300a3) cell_cale_week_pane_ParamLimits

0x19e5,	// (0x000300a3) cell_cale_week_pane

0x1a67,	// (0x00030125) cale_week_day_heading_pane_t1

0x1ab1,	// (0x0003016f) cale_week_day_heading_pane_t2

0x1b00,	// (0x000301be) cale_week_day_heading_pane_t3

0x1b4f,	// (0x0003020d) cale_week_day_heading_pane_t4

0x1b9e,	// (0x0003025c) cale_week_day_heading_pane_t5

0x1bed,	// (0x000302ab) cale_week_day_heading_pane_t6

0x1c40,	// (0x000302fe) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0003d896) cale_week_day_heading_pane_t

0xa4ac,	// (0x00038b6a) bg_cale_side_pane

0xfe82,	// (0x0002e540) cale_week_time_pane_t1

0xfebc,	// (0x0002e57a) cale_week_time_pane_t2

0xfef6,	// (0x0002e5b4) cale_week_time_pane_t3

0xff30,	// (0x0002e5ee) cale_week_time_pane_t4

0xff6a,	// (0x0002e628) cale_week_time_pane_t5

0xffa4,	// (0x0002e662) cale_week_time_pane_t6

0xffde,	// (0x0002e69c) cale_week_time_pane_t7

0x0018,	// (0x0002e6d6) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0003d8a5) cale_week_time_pane_t

0x1c8a,	// (0x00030348) cell_cale_week_pane_g2

0x1ca9,	// (0x00030367) cell_cale_week_pane_g3_ParamLimits

0x1ca9,	// (0x00030367) cell_cale_week_pane_g3

0xa4ba,	// (0x00038b78) grid_highlight_pane_cp07

0xa4c2,	// (0x00038b80) listscroll_gms_pane

0xa4cc,	// (0x00038b8a) grid_gms_pane

0xa4d5,	// (0x00038b93) listscroll_gms_pane_g1

0xa4dd,	// (0x00038b9b) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0003d8b6) listscroll_gms_pane_g

0x1cc1,	// (0x0003037f) scroll_pane_cp010

0x1ccc,	// (0x0003038a) cell_gms_pane_ParamLimits

0x1ccc,	// (0x0003038a) cell_gms_pane

0x1ce6,	// (0x000303a4) cell_gms_pane_g1

0xa4e5,	// (0x00038ba3) cell_gms_pane_g2

0xa4ed,	// (0x00038bab) cell_gms_pane_g3

0xa4f6,	// (0x00038bb4) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0003d8bb) cell_gms_pane_g

0xa4ff,	// (0x00038bbd) grid_highlight_pane_cp09

0x45c3,	// (0x00032c81) phob_pre_status_pane_g1

0x45cb,	// (0x00032c89) phob_pre_status_pane_g2

0x45d3,	// (0x00032c91) phob_pre_status_pane_g3

0x45db,	// (0x00032c99) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0003dcaa) phob_pre_status_pane_g

0x45eb,	// (0x00032ca9) phob_pre_status_pane_t1

0x45fb,	// (0x00032cb9) phob_pre_status_pane_t2

0x460b,	// (0x00032cc9) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0003dcb5) phob_pre_status_pane_t

0xa013,	// (0x000386d1) bg_list_pane_cp05

0x005e,	// (0x0002e71c) grid_vorec_pane

0x006a,	// (0x0002e728) vorec_t1

0x0078,	// (0x0002e736) vorec_t2

0x0086,	// (0x0002e744) vorec_t3

0x0094,	// (0x0002e752) vorec_t4

0x00a2,	// (0x0002e760) vorec_t5

0x1cee,	// (0x000303ac) vorec_t6

0x0006,

0xf206,	// (0x0003d8c4) vorec_t

0x00be,	// (0x0002e77c) wait_bar_pane_cp01

0x1cfc,	// (0x000303ba) cell_vorec_pane_ParamLimits

0x1cfc,	// (0x000303ba) cell_vorec_pane

0xa507,	// (0x00038bc5) cell_vorec_pane_g1

0xa013,	// (0x000386d1) grid_highlight_pane_cp05

0x1d27,	// (0x000303e5) cams_zoom_pane

0x1d36,	// (0x000303f4) image_vga_pane

0x1d50,	// (0x0003040e) main_camera_pane_g1

0x1d62,	// (0x00030420) main_camera_pane_g2

0x1d72,	// (0x00030430) main_camera_pane_g3

0x1d86,	// (0x00030444) main_camera_pane_g4

0x1d9a,	// (0x00030458) main_camera_pane_g5

0x1dae,	// (0x0003046c) main_camera_pane_g6

0x1dc2,	// (0x00030480) main_camera_pane_g7

0x0007,

0xf215,	// (0x0003d8d3) main_camera_pane_g

0x1dd6,	// (0x00030494) main_camera_pane_t1

0x1dec,	// (0x000304aa) main_camera_pane_t2

0x0001,

0xf226,	// (0x0003d8e4) main_camera_pane_t

0x1e2a,	// (0x000304e8) cams_zoom_pane_cp_ParamLimits

0x1e2a,	// (0x000304e8) cams_zoom_pane_cp

0x1e52,	// (0x00030510) image_cif_pane_ParamLimits

0x1e52,	// (0x00030510) image_cif_pane

0x1e8d,	// (0x0003054b) image_subqcif_pane

0x1e97,	// (0x00030555) main_video_pane_g1_ParamLimits

0x1e97,	// (0x00030555) main_video_pane_g1

0x1ebb,	// (0x00030579) main_video_pane_g2_ParamLimits

0x1ebb,	// (0x00030579) main_video_pane_g2

0x1ef1,	// (0x000305af) main_video_pane_g3_ParamLimits

0x1ef1,	// (0x000305af) main_video_pane_g3

0x1f1f,	// (0x000305dd) main_video_pane_g4_ParamLimits

0x1f1f,	// (0x000305dd) main_video_pane_g4

0x1f4d,	// (0x0003060b) main_video_pane_g5_ParamLimits

0x1f4d,	// (0x0003060b) main_video_pane_g5

0xa51d,	// (0x00038bdb) main_video_pane_g6_ParamLimits

0xa51d,	// (0x00038bdb) main_video_pane_g6

0x0006,

0xf22b,	// (0x0003d8e9) main_video_pane_g_ParamLimits

0xf22b,	// (0x0003d8e9) main_video_pane_g

0x1f76,	// (0x00030634) main_video_pane_t1_ParamLimits

0x1f76,	// (0x00030634) main_video_pane_t1

0xa537,	// (0x00038bf5) cams_zoom_pane_g1

0xa540,	// (0x00038bfe) cams_zoom_pane_g2

0xa549,	// (0x00038c07) cams_zoom_pane_g3

0xa552,	// (0x00038c10) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0003d8f8) cams_zoom_pane_g

0x1fd3,	// (0x00030691) grid_cams_pane

0x1fed,	// (0x000306ab) linegrid_cams_pane

0x1fff,	// (0x000306bd) cell_cams_pane_ParamLimits

0x1fff,	// (0x000306bd) cell_cams_pane

0xa55b,	// (0x00038c19) cams_burst_image_pane

0xa563,	// (0x00038c21) cell_cams_pane_g1

0xa013,	// (0x000386d1) grid_highlight_pane_cp03

0xa388,	// (0x00038a46) mp_bg_pane_g1

0xa013,	// (0x000386d1) bg_list_pane_cp03

0xc286,	// (0x0003a944) bg_mp_pane

0xc28e,	// (0x0003a94c) grid_mp_pane

0xc296,	// (0x0003a954) media_player_g1

0xc2a0,	// (0x0003a95e) media_player_t1

0xc2ae,	// (0x0003a96c) media_player_t2

0xc2bc,	// (0x0003a97a) media_player_t3

0xc2ca,	// (0x0003a988) media_player_t4

0xc2d8,	// (0x0003a996) media_player_t5

0xc2e6,	// (0x0003a9a4) media_player_t6

0xc2f4,	// (0x0003a9b2) media_player_t7

0x0006,

0xf5d6,	// (0x0003dc94) media_player_t

0xc302,	// (0x0003a9c0) wait_bar_pane_cp02

0xf5bb,	// (0x0003dc79) main_usb_pane_t

0x45ba,	// (0x00032c78) cell_mp_pane

0xa388,	// (0x00038a46) cell_mp_pane_g1

0xa013,	// (0x000386d1) grid_highlight_pane_cp06

0xa56b,	// (0x00038c29) grid_skin_colour_pane

0xa573,	// (0x00038c31) list_highlight_pane_cp03

0x2131,	// (0x000307ef) skin_g1

0xa57b,	// (0x00038c39) skin_t1

0xa58a,	// (0x00038c48) skin_t2

0x0001,

0xf26f,	// (0x0003d92d) skin_t

0x2139,	// (0x000307f7) cell_skin_colour_pane_ParamLimits

0x2139,	// (0x000307f7) cell_skin_colour_pane

0xa598,	// (0x00038c56) cell_skin_colour_pane_g1

0x21ac,	// (0x0003086a) call_video_g1_ParamLimits

0x21ac,	// (0x0003086a) call_video_g1

0x21c8,	// (0x00030886) call_video_g2_ParamLimits

0x21c8,	// (0x00030886) call_video_g2

0x0001,

0xf274,	// (0x0003d932) call_video_g_ParamLimits

0xf274,	// (0x0003d932) call_video_g

0x220d,	// (0x000308cb) call_video_uplink_pane_cp1_ParamLimits

0x220d,	// (0x000308cb) call_video_uplink_pane_cp1

0xa5aa,	// (0x00038c68) call_video_uplink_pane_cp2

0x22ae,	// (0x0003096c) video_down_crop_pane_ParamLimits

0x22ae,	// (0x0003096c) video_down_crop_pane

0x2397,	// (0x00030a55) video_down_pane_ParamLimits

0x2397,	// (0x00030a55) video_down_pane

0xa5b2,	// (0x00038c70) video_down_subqcif_pane_ParamLimits

0xa5b2,	// (0x00038c70) video_down_subqcif_pane

0xa5cc,	// (0x00038c8a) video_down_subqcif_pane_cp_ParamLimits

0xa5cc,	// (0x00038c8a) video_down_subqcif_pane_cp

0xa5f4,	// (0x00038cb2) im_reading_pane_ParamLimits

0xa5f4,	// (0x00038cb2) im_reading_pane

0x24a0,	// (0x00030b5e) im_writing_pane_ParamLimits

0x24a0,	// (0x00030b5e) im_writing_pane

0x24bc,	// (0x00030b7a) im_reading_pane_t1

0xa60e,	// (0x00038ccc) list_im_pane

0xa61f,	// (0x00038cdd) scroll_pane_cp07

0x24f8,	// (0x00030bb6) im_writing_pane_t1_ParamLimits

0x24f8,	// (0x00030bb6) im_writing_pane_t1

0xa638,	// (0x00038cf6) im_writing_pane_t2_ParamLimits

0xa638,	// (0x00038cf6) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0003d93c) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0003d93c) im_writing_pane_t

0xa013,	// (0x000386d1) input_focus_pane_cp04

0xa013,	// (0x000386d1) input_focus_pane_cp05

0x250d,	// (0x00030bcb) list_im_single_pane_ParamLimits

0x250d,	// (0x00030bcb) list_im_single_pane

0x2523,	// (0x00030be1) list_single_im_pane_t1

0x457a,	// (0x00032c38) blid_accuracy_pane

0x4582,	// (0x00032c40) blid_compass_pane

0x458c,	// (0x00032c4a) main_location_t1

0x459c,	// (0x00032c5a) main_location_t2

0x45ac,	// (0x00032c6a) main_location_t3

0x0002,

0xf5e5,	// (0x0003dca3) main_location_t

0xa013,	// (0x000386d1) aid_levels_location

0xa388,	// (0x00038a46) blid_accuracy_pane_g1

0xa388,	// (0x00038a46) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0003d99e) blid_accuracy_pane_g

0xa680,	// (0x00038d3e) wml_content_pane

0xa6be,	// (0x00038d7c) wml_button_pane_ParamLimits

0xa6be,	// (0x00038d7c) wml_button_pane

0x2532,	// (0x00030bf0) wml_list_single_large_pane_ParamLimits

0x2532,	// (0x00030bf0) wml_list_single_large_pane

0x2548,	// (0x00030c06) wml_list_single_medium_pane_ParamLimits

0x2548,	// (0x00030c06) wml_list_single_medium_pane

0x255f,	// (0x00030c1d) wml_list_single_small_pane_ParamLimits

0x255f,	// (0x00030c1d) wml_list_single_small_pane

0xa6d2,	// (0x00038d90) wml_selection_box_pane_ParamLimits

0xa6d2,	// (0x00038d90) wml_selection_box_pane

0xa6e5,	// (0x00038da3) wml_list_single_pane_t1

0xa6f4,	// (0x00038db2) wml_list_single_medium_pane_t1

0xa703,	// (0x00038dc1) wml_list_single_large_pane_t1

0xa712,	// (0x00038dd0) input_focus_pane_cp02_ParamLimits

0xa712,	// (0x00038dd0) input_focus_pane_cp02

0xa725,	// (0x00038de3) wml_selection_box_pane_g1

0xa72e,	// (0x00038dec) wml_selection_box_pane_t1_ParamLimits

0xa72e,	// (0x00038dec) wml_selection_box_pane_t1

0xa26e,	// (0x0003892c) bg_wml_button_pane_ParamLimits

0xa26e,	// (0x0003892c) bg_wml_button_pane

0xa746,	// (0x00038e04) wml_button_pane_g1

0xa74e,	// (0x00038e0c) wml_button_pane_t1

0xa746,	// (0x00038e04) wml_button_bg_pane_g1

0xa75e,	// (0x00038e1c) wml_button_bg_pane_g2

0xa766,	// (0x00038e24) wml_button_bg_pane_g3

0xa76e,	// (0x00038e2c) wml_button_bg_pane_g4

0xa776,	// (0x00038e34) wml_button_bg_pane_g5

0xa77e,	// (0x00038e3c) wml_button_bg_pane_g6

0xa786,	// (0x00038e44) wml_button_bg_pane_g7

0xa78e,	// (0x00038e4c) wml_button_bg_pane_g8

0xa796,	// (0x00038e54) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0003d941) wml_button_bg_pane_g

0x257b,	// (0x00030c39) bg_list_pane_cp02

0xa79e,	// (0x00038e5c) mce_header_pane_ParamLimits

0xa79e,	// (0x00038e5c) mce_header_pane

0xa7b4,	// (0x00038e72) mce_icon_pane

0xa7b4,	// (0x00038e72) mce_image_pane

0xa7bd,	// (0x00038e7b) mce_text_pane_ParamLimits

0xa7bd,	// (0x00038e7b) mce_text_pane

0x2585,	// (0x00030c43) scroll_pane_cp03

0xa6b6,	// (0x00038d74) scroll_pane_cp04

0xa7d0,	// (0x00038e8e) scroll_pane_cp05_ParamLimits

0xa7d0,	// (0x00038e8e) scroll_pane_cp05

0x258f,	// (0x00030c4d) mce_header_field_pane_ParamLimits

0x258f,	// (0x00030c4d) mce_header_field_pane

0x25a8,	// (0x00030c66) mce_header_field_pane_2_ParamLimits

0x25a8,	// (0x00030c66) mce_header_field_pane_2

0x25be,	// (0x00030c7c) mce_header_field_pane_3

0x25c6,	// (0x00030c84) list_single_mce_message_pane_ParamLimits

0x25c6,	// (0x00030c84) list_single_mce_message_pane

0x25df,	// (0x00030c9d) list_single_mce_smart_pane_ParamLimits

0x25df,	// (0x00030c9d) list_single_mce_smart_pane

0xa7dc,	// (0x00038e9a) input_focus_pane_cp03

0xa7e5,	// (0x00038ea3) list_header_data_pane

0x2603,	// (0x00030cc1) mce_header_field_pane_t1

0x2613,	// (0x00030cd1) list_single_mce_header_pane_ParamLimits

0x2613,	// (0x00030cd1) list_single_mce_header_pane

0xa7ed,	// (0x00038eab) list_single_mce_header_pane_t1

0xa7fc,	// (0x00038eba) list_single_mce_message_pane_g1

0xa804,	// (0x00038ec2) list_single_mce_message_pane_t1

0x264d,	// (0x00030d0b) bg_cale_heading_pane_cp01_ParamLimits

0x264d,	// (0x00030d0b) bg_cale_heading_pane_cp01

0xa812,	// (0x00038ed0) bg_cale_pane_cp02_ParamLimits

0xa812,	// (0x00038ed0) bg_cale_pane_cp02

0x268c,	// (0x00030d4a) cale_month_corner_pane

0x26ab,	// (0x00030d69) cale_month_day_heading_pane_ParamLimits

0x26ab,	// (0x00030d69) cale_month_day_heading_pane

0x2702,	// (0x00030dc0) cale_month_pane_g1_ParamLimits

0x2702,	// (0x00030dc0) cale_month_pane_g1

0x2736,	// (0x00030df4) cale_month_pane_g2_ParamLimits

0x2736,	// (0x00030df4) cale_month_pane_g2

0x276e,	// (0x00030e2c) cale_month_pane_g3_ParamLimits

0x276e,	// (0x00030e2c) cale_month_pane_g3

0x27ba,	// (0x00030e78) cale_month_pane_g4_ParamLimits

0x27ba,	// (0x00030e78) cale_month_pane_g4

0x2806,	// (0x00030ec4) cale_month_pane_g5_ParamLimits

0x2806,	// (0x00030ec4) cale_month_pane_g5

0x2856,	// (0x00030f14) cale_month_pane_g6_ParamLimits

0x2856,	// (0x00030f14) cale_month_pane_g6

0x28ae,	// (0x00030f6c) cale_month_pane_g7_ParamLimits

0x28ae,	// (0x00030f6c) cale_month_pane_g7

0x2912,	// (0x00030fd0) cale_month_pane_g8_ParamLimits

0x2912,	// (0x00030fd0) cale_month_pane_g8

0x2976,	// (0x00031034) cale_month_pane_g9_ParamLimits

0x2976,	// (0x00031034) cale_month_pane_g9

0x29d0,	// (0x0003108e) cale_month_pane_g10_ParamLimits

0x29d0,	// (0x0003108e) cale_month_pane_g10

0x2a22,	// (0x000310e0) cale_month_pane_g11_ParamLimits

0x2a22,	// (0x000310e0) cale_month_pane_g11

0x2a74,	// (0x00031132) cale_month_pane_g12_ParamLimits

0x2a74,	// (0x00031132) cale_month_pane_g12

0x2aca,	// (0x00031188) cale_month_pane_g13_ParamLimits

0x2aca,	// (0x00031188) cale_month_pane_g13

0x000c,

0xf296,	// (0x0003d954) cale_month_pane_g_ParamLimits

0xf296,	// (0x0003d954) cale_month_pane_g

0x2b20,	// (0x000311de) cale_month_week_pane

0x2b44,	// (0x00031202) grid_cale_month_pane_ParamLimits

0x2b44,	// (0x00031202) grid_cale_month_pane

0x2b92,	// (0x00031250) cale_month_day_heading_pane_t1

0x2c18,	// (0x000312d6) cale_month_day_heading_pane_t2

0x2ca9,	// (0x00031367) cale_month_day_heading_pane_t3

0x2d3a,	// (0x000313f8) cale_month_day_heading_pane_t4

0x2dcb,	// (0x00031489) cale_month_day_heading_pane_t5

0x2e64,	// (0x00031522) cale_month_day_heading_pane_t6

0x2f05,	// (0x000315c3) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0003d96f) cale_month_day_heading_pane_t

0xa4ac,	// (0x00038b6a) bg_cale_side_pane_cp01

0x2fae,	// (0x0003166c) cale_month_week_pane_t1

0x2fe7,	// (0x000316a5) cale_month_week_pane_t2

0x3020,	// (0x000316de) cale_month_week_pane_t3

0x3059,	// (0x00031717) cale_month_week_pane_t4

0x3092,	// (0x00031750) cale_month_week_pane_t5

0x30cb,	// (0x00031789) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0003d97e) cale_month_week_pane_t

0x3108,	// (0x000317c6) cell_cale_month_pane_ParamLimits

0x3108,	// (0x000317c6) cell_cale_month_pane

0x3250,	// (0x0003190e) cell_cale_month_pane_g1

0x00c6,	// (0x0002e784) cell_cale_month_pane_t1_ParamLimits

0x00c6,	// (0x0002e784) cell_cale_month_pane_t1

0xa4ba,	// (0x00038b78) grid_highlight_pane_cp08

0xa388,	// (0x00038a46) main_smil_g1

0x325c,	// (0x0003191a) smil_status_pane

0xa851,	// (0x00038f0f) smil_text_pane

0xc1a4,	// (0x0003a862) bg_popup_call3_rect_pane_g8

0xc1ac,	// (0x0003a86a) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0003dc37) bg_popup_call3_rect_pane_g

0xc43a,	// (0x0003aaf8) smil_status_volume_pane_g1

0x326f,	// (0x0003192d) smil_status_pane_t1

0x4bbf,	// (0x0003327d) volume_smil_pane

0xa85b,	// (0x00038f19) list_smil_text_pane

0x3288,	// (0x00031946) scroll_pane_cp011

0x3293,	// (0x00031951) smil_text_list_pane_t1_ParamLimits

0x3293,	// (0x00031951) smil_text_list_pane_t1

0x32cc,	// (0x0003198a) aid_volume_smil_ParamLimits

0x32cc,	// (0x0003198a) aid_volume_smil

0xa388,	// (0x00038a46) smil_volume_pane_g1

0xa388,	// (0x00038a46) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0003d99e) smil_volume_pane_g

0x32ee,	// (0x000319ac) listscroll_cale_day_pane

0xa865,	// (0x00038f23) bg_cale_pane

0xa87d,	// (0x00038f3b) list_cale_pane

0xa8a0,	// (0x00038f5e) scroll_pane_cp09

0xa8b1,	// (0x00038f6f) cale_bg_pane_g1

0xa8b9,	// (0x00038f77) cale_bg_pane_g2

0xa8c1,	// (0x00038f7f) cale_bg_pane_g3

0xa8c9,	// (0x00038f87) cale_bg_pane_g4

0xa8d1,	// (0x00038f8f) cale_bg_pane_g5

0xa8d9,	// (0x00038f97) cale_bg_pane_g6

0xa8e1,	// (0x00038f9f) cale_bg_pane_g7

0xa8e9,	// (0x00038fa7) cale_bg_pane_g8

0xa8f1,	// (0x00038faf) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0003d9a3) cale_bg_pane_g

0xa8f9,	// (0x00038fb7) list_cale_time_pane_ParamLimits

0xa8f9,	// (0x00038fb7) list_cale_time_pane

0xa90e,	// (0x00038fcc) list_cale_time_pane_g1_ParamLimits

0xa90e,	// (0x00038fcc) list_cale_time_pane_g1

0xa91a,	// (0x00038fd8) list_cale_time_pane_g2_ParamLimits

0xa91a,	// (0x00038fd8) list_cale_time_pane_g2

0x3310,	// (0x000319ce) list_cale_time_pane_g3_ParamLimits

0x3310,	// (0x000319ce) list_cale_time_pane_g3

0x331e,	// (0x000319dc) list_cale_time_pane_g4_ParamLimits

0x331e,	// (0x000319dc) list_cale_time_pane_g4

0x332c,	// (0x000319ea) list_cale_time_pane_g5_ParamLimits

0x332c,	// (0x000319ea) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0003d9b6) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0003d9b6) list_cale_time_pane_g

0xa934,	// (0x00038ff2) list_cale_time_pane_t1_ParamLimits

0xa934,	// (0x00038ff2) list_cale_time_pane_t1

0xa95c,	// (0x0003901a) list_cale_time_pane_t2_ParamLimits

0xa95c,	// (0x0003901a) list_cale_time_pane_t2

0x373a,	// (0x00031df8) aid_blid_cardinal_pane

0x3778,	// (0x00031e36) compass_pane_t4

0xa984,	// (0x00039042) list_cale_time_pane_t4_ParamLimits

0xa984,	// (0x00039042) list_cale_time_pane_t4

0x3786,	// (0x00031e44) compass_pane_t5

0x3794,	// (0x00031e52) compass_pane_t6

0x37a2,	// (0x00031e60) compass_pane_t7

0xae6a,	// (0x00039528) navi_pane_cc_t1

0xafbf,	// (0x0003967d) aid_phob_thumbnail_center_pane

0x3f45,	// (0x00032603) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0003d9c3) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0003d9c3) list_cale_time_pane_t

0x9c6a,	// (0x00038328) bg_popup_window_pane_cp02_ParamLimits

0x9c6a,	// (0x00038328) bg_popup_window_pane_cp02

0xa9ac,	// (0x0003906a) heading_pane_cp01_ParamLimits

0xa9ac,	// (0x0003906a) heading_pane_cp01

0xa9b8,	// (0x00039076) loc_req_pane_ParamLimits

0xa9b8,	// (0x00039076) loc_req_pane

0xa9c8,	// (0x00039086) loc_type_pane_ParamLimits

0xa9c8,	// (0x00039086) loc_type_pane

0xa9da,	// (0x00039098) loc_type_pane_t1_ParamLimits

0xa9da,	// (0x00039098) loc_type_pane_t1

0xa9ec,	// (0x000390aa) loc_type_pane_t2_ParamLimits

0xa9ec,	// (0x000390aa) loc_type_pane_t2

0xa9fe,	// (0x000390bc) loc_type_pane_t3_ParamLimits

0xa9fe,	// (0x000390bc) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0003d9ca) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0003d9ca) loc_type_pane_t

0xaa10,	// (0x000390ce) list_loc_req_pane

0xaa1a,	// (0x000390d8) scroll_pane_cp012

0x333a,	// (0x000319f8) list_single_loc_request_popup_menu_pane_ParamLimits

0x333a,	// (0x000319f8) list_single_loc_request_popup_menu_pane

0xaa25,	// (0x000390e3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa25,	// (0x000390e3) list_single_loc_request_popup_menu_pane_g1

0xaa31,	// (0x000390ef) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa31,	// (0x000390ef) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0003d9d1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0003d9d1) list_single_loc_request_popup_menu_pane_g

0xaa3d,	// (0x000390fb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa3d,	// (0x000390fb) list_single_loc_request_popup_menu_pane_t1

0xa26e,	// (0x0003892c) bg_popup_window_pane_cp03_ParamLimits

0xa26e,	// (0x0003892c) bg_popup_window_pane_cp03

0xaa53,	// (0x00039111) heading_loc_req_pane_ParamLimits

0xaa53,	// (0x00039111) heading_loc_req_pane

0x3347,	// (0x00031a05) popup_dyc_status_message_window_g1_ParamLimits

0x3347,	// (0x00031a05) popup_dyc_status_message_window_g1

0x335b,	// (0x00031a19) popup_dyc_status_message_window_t1_ParamLimits

0x335b,	// (0x00031a19) popup_dyc_status_message_window_t1

0x3370,	// (0x00031a2e) popup_dyc_status_message_window_t2_ParamLimits

0x3370,	// (0x00031a2e) popup_dyc_status_message_window_t2

0x3385,	// (0x00031a43) popup_dyc_status_message_window_t3_ParamLimits

0x3385,	// (0x00031a43) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0003d9d6) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0003d9d6) popup_dyc_status_message_window_t

0xa013,	// (0x000386d1) bg_heading_pane_cp01

0xaa5f,	// (0x0003911d) heading_loc_req_pane_g1

0xaa67,	// (0x00039125) heading_loc_req_pane_g2

0xaa6f,	// (0x0003912d) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0003d9dd) heading_loc_req_pane_g

0xaa77,	// (0x00039135) heading_loc_req_pane_t1

0xaa87,	// (0x00039145) bg_popup_sub_pane_cp01_ParamLimits

0xaa87,	// (0x00039145) bg_popup_sub_pane_cp01

0xaa95,	// (0x00039153) popup_cale_events_window_g1_ParamLimits

0xaa95,	// (0x00039153) popup_cale_events_window_g1

0xaab5,	// (0x00039173) popup_cale_events_window_g2_ParamLimits

0xaab5,	// (0x00039173) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0003da11) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0003da11) popup_cale_events_window_g

0xaad5,	// (0x00039193) popup_cale_events_window_t1_ParamLimits

0xaad5,	// (0x00039193) popup_cale_events_window_t1

0xabb3,	// (0x00039271) popup_cale_events_window_t2_ParamLimits

0xabb3,	// (0x00039271) popup_cale_events_window_t2

0xabf1,	// (0x000392af) popup_cale_events_window_t3_ParamLimits

0xabf1,	// (0x000392af) popup_cale_events_window_t3

0xac2b,	// (0x000392e9) popup_cale_events_window_t4_ParamLimits

0xac2b,	// (0x000392e9) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0003da16) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0003da16) popup_cale_events_window_t

0x348a,	// (0x00031b48) call_type_pane

0x349a,	// (0x00031b58) popup_call_status_window_g1

0x34ae,	// (0x00031b6c) popup_call_status_window_g2

0x34c2,	// (0x00031b80) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0003da1f) popup_call_status_window_g

0xac61,	// (0x0003931f) call_type_pane_g1

0xac6a,	// (0x00039328) call_type_pane_g2

0x0001,

0xf368,	// (0x0003da26) call_type_pane_g

0xa013,	// (0x000386d1) bg_popup_sub_pane_cp02

0xac73,	// (0x00039331) listscroll_popup_wml_pane

0xac7b,	// (0x00039339) list_wml_pane

0xac85,	// (0x00039343) scroll_pane_cp013

0xac90,	// (0x0003934e) list_single_graphic_popup_wml_pane_ParamLimits

0xac90,	// (0x0003934e) list_single_graphic_popup_wml_pane

0xa388,	// (0x00038a46) list_single_graphic_popup_wml_pane_g1

0xaca4,	// (0x00039362) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0003da2b) list_single_graphic_popup_wml_pane_g

0xacac,	// (0x0003936a) list_single_graphic_popup_wml_pane_t1

0xacc2,	// (0x00039380) aid_call_pane

0xa266,	// (0x00038924) popup_clock_analogue_window_g1

0xa266,	// (0x00038924) popup_clock_analogue_window_g2

0x34d2,	// (0x00031b90) popup_clock_analogue_window_g3

0x34d2,	// (0x00031b90) popup_clock_analogue_window_g4

0xa388,	// (0x00038a46) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0003da30) popup_clock_analogue_window_g

0x34da,	// (0x00031b98) popup_clock_analogue_window_t1

0x34e8,	// (0x00031ba6) clock_digital_number_pane_ParamLimits

0x34e8,	// (0x00031ba6) clock_digital_number_pane

0x34f4,	// (0x00031bb2) clock_digital_number_pane_cp02_ParamLimits

0x34f4,	// (0x00031bb2) clock_digital_number_pane_cp02

0x3500,	// (0x00031bbe) clock_digital_number_pane_cp03_ParamLimits

0x3500,	// (0x00031bbe) clock_digital_number_pane_cp03

0x350c,	// (0x00031bca) clock_digital_number_pane_cp04_ParamLimits

0x350c,	// (0x00031bca) clock_digital_number_pane_cp04

0x3518,	// (0x00031bd6) clock_digital_separator_pane_ParamLimits

0x3518,	// (0x00031bd6) clock_digital_separator_pane

0x3524,	// (0x00031be2) popup_clock_digital_window_t1

0xa388,	// (0x00038a46) clock_digital_number_pane_g1

0xa388,	// (0x00038a46) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0003d99e) clock_digital_number_pane_g

0xa388,	// (0x00038a46) clock_digital_separator_pane_g1

0xa388,	// (0x00038a46) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0003d99e) clock_digital_separator_pane_g

0xa013,	// (0x000386d1) bg_popup_window_pane_cp04

0xacca,	// (0x00039388) heading_pane_cp03

0xacd2,	// (0x00039390) listscroll_popup_gms_pane

0xacda,	// (0x00039398) grid_large_graphic_popup_pane

0xace4,	// (0x000393a2) listscroll_popup_gms_pane_g1

0xacec,	// (0x000393aa) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0003da3b) listscroll_popup_gms_pane_g

0xa6b6,	// (0x00038d74) scroll_pane_cp014

0x3541,	// (0x00031bff) cell_large_graphic_popup_pane_ParamLimits

0x3541,	// (0x00031bff) cell_large_graphic_popup_pane

0x3559,	// (0x00031c17) cell_large_graphic_popup_pane_g1_ParamLimits

0x3559,	// (0x00031c17) cell_large_graphic_popup_pane_g1

0xacf4,	// (0x000393b2) cell_large_graphic_popup_pane_g2_ParamLimits

0xacf4,	// (0x000393b2) cell_large_graphic_popup_pane_g2

0xad00,	// (0x000393be) cell_large_graphic_popup_pane_g3_ParamLimits

0xad00,	// (0x000393be) cell_large_graphic_popup_pane_g3

0xad0d,	// (0x000393cb) cell_large_graphic_popup_pane_g4_ParamLimits

0xad0d,	// (0x000393cb) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0003da40) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0003da40) cell_large_graphic_popup_pane_g

0xad1d,	// (0x000393db) grid_highlight_pane_cp010

0xa388,	// (0x00038a46) bg_popup_call_pane_g1

0xad27,	// (0x000393e5) list_single_graphic_popup_conf_pane_ParamLimits

0xad27,	// (0x000393e5) list_single_graphic_popup_conf_pane

0xad39,	// (0x000393f7) list_highlight_pane_cp01

0xad42,	// (0x00039400) list_single_graphic_popup_conf_pane_g1

0xad4a,	// (0x00039408) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0003da49) list_single_graphic_popup_conf_pane_g

0xad52,	// (0x00039410) list_single_graphic_popup_conf_pane_t1

0xad60,	// (0x0003941e) linegrid_cams_pane_g1

0x3565,	// (0x00031c23) linegrid_cams_pane_g2

0xa4ed,	// (0x00038bab) linegrid_cams_pane_g3

0xad69,	// (0x00039427) linegrid_cams_pane_g4

0x356e,	// (0x00031c2c) linegrid_cams_pane_g5

0x3577,	// (0x00031c35) linegrid_cams_pane_g6

0xa4f6,	// (0x00038bb4) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0003da4e) linegrid_cams_pane_g

0xad72,	// (0x00039430) popup_clock_analogue_window

0xad72,	// (0x00039430) popup_clock_digital_window

0xa013,	// (0x000386d1) popup_phob_thumbnail_window

0xa388,	// (0x00038a46) call_video_uplink_pane_g1

0xad7b,	// (0x00039439) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0003da5d) call_video_uplink_pane_g

0xad83,	// (0x00039441) video_uplink_pane

0xad8b,	// (0x00039449) mce_image_pane_g1

0x3582,	// (0x00031c40) mce_image_pane_g2

0x358c,	// (0x00031c4a) mce_image_pane_g3

0x3596,	// (0x00031c54) mce_image_pane_g4

0x359e,	// (0x00031c5c) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0003da62) mce_image_pane_g

0xad95,	// (0x00039453) control_top_pane_stacon_cp01_ParamLimits

0xad95,	// (0x00039453) control_top_pane_stacon_cp01

0xada9,	// (0x00039467) uni_indicator_pane_stacon_cp01_ParamLimits

0xada9,	// (0x00039467) uni_indicator_pane_stacon_cp01

0xadba,	// (0x00039478) bg_popup_sub_pane_cp03

0x35a6,	// (0x00031c64) chi_dic_find_pane

0x35ae,	// (0x00031c6c) listscroll_chi_dic_pane

0x35b7,	// (0x00031c75) main_pane_chidic_g1

0x35ca,	// (0x00031c88) chi_dic_find_pane_t1

0xadc4,	// (0x00039482) find_chidic_pane

0xadcd,	// (0x0003948b) chi_dic_list_pane_ParamLimits

0xadcd,	// (0x0003948b) chi_dic_list_pane

0xadde,	// (0x0003949c) scroll_pane_cp020

0x35d8,	// (0x00031c96) find_chidic_pane_t1

0xa013,	// (0x000386d1) input_focus_pane_cp06

0x1445,	// (0x0002fb03) list_chi_dic_pane_ParamLimits

0x1445,	// (0x0002fb03) list_chi_dic_pane

0x35e7,	// (0x00031ca5) list_chi_dic_pane_t1_ParamLimits

0x35e7,	// (0x00031ca5) list_chi_dic_pane_t1

0xa013,	// (0x000386d1) list_highlight_pane_cp020

0xade6,	// (0x000394a4) bg_cale_heading_pane_g1

0x35fa,	// (0x00031cb8) bg_cale_heading_pane_g2

0x3602,	// (0x00031cc0) bg_cale_heading_pane_g3

0x360a,	// (0x00031cc8) bg_cale_heading_pane_g4

0x3614,	// (0x00031cd2) bg_cale_heading_pane_g5

0x361e,	// (0x00031cdc) bg_cale_heading_pane_g6

0x3626,	// (0x00031ce4) bg_cale_heading_pane_g7

0x362e,	// (0x00031cec) bg_cale_heading_pane_g8

0x3638,	// (0x00031cf6) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0003da6d) bg_cale_heading_pane_g

0xade6,	// (0x000394a4) bg_cale_side_pane_g1

0x3642,	// (0x00031d00) bg_cale_side_pane_g2

0x364c,	// (0x00031d0a) bg_cale_side_pane_g3

0x3656,	// (0x00031d14) bg_cale_side_pane_g4

0x3660,	// (0x00031d1e) bg_cale_side_pane_g5

0x366a,	// (0x00031d28) bg_cale_side_pane_g6

0x3674,	// (0x00031d32) bg_cale_side_pane_g7

0x367e,	// (0x00031d3c) bg_cale_side_pane_g8

0x3686,	// (0x00031d44) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0003da80) bg_cale_side_pane_g

0x368e,	// (0x00031d4c) popup_call_status_window_ParamLimits

0x368e,	// (0x00031d4c) popup_call_status_window

0xadee,	// (0x000394ac) stacon_top_pane

0xadf6,	// (0x000394b4) status_pane_ParamLimits

0xadf6,	// (0x000394b4) status_pane

0xae0b,	// (0x000394c9) status_small_pane

0xae13,	// (0x000394d1) control_pane

0xa013,	// (0x000386d1) stacon_bottom_pane

0xae1b,	// (0x000394d9) list_single_mce_smart_pane_t1_ParamLimits

0xae1b,	// (0x000394d9) list_single_mce_smart_pane_t1

0xae2e,	// (0x000394ec) list_single_mce_smart_pane_t2_ParamLimits

0xae2e,	// (0x000394ec) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0003da93) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0003da93) list_single_mce_smart_pane_t

0x36db,	// (0x00031d99) compass_pane

0x36e6,	// (0x00031da4) main_location2_pane_t1

0x36fa,	// (0x00031db8) main_location2_pane_t2

0x3710,	// (0x00031dce) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0003da98) main_location2_pane_t

0xae4d,	// (0x0003950b) compass_pane_g1_ParamLimits

0xae4d,	// (0x0003950b) compass_pane_g1

0x375a,	// (0x00031e18) compass_pane_t1

0x3769,	// (0x00031e27) compass_pane_t2

0x0005,

0xf3e3,	// (0x0003daa1) compass_pane_t

0x37b0,	// (0x00031e6e) text_secondary_cp61

0xae61,	// (0x0003951f) navi_pane_cams_g5

0xae84,	// (0x00039542) navi_pane_im_t1

0xae92,	// (0x00039550) navi_pane_mp_g1_ParamLimits

0xae92,	// (0x00039550) navi_pane_mp_g1

0xaea6,	// (0x00039564) navi_pane_mp_g2_ParamLimits

0xaea6,	// (0x00039564) navi_pane_mp_g2

0xaeb2,	// (0x00039570) navi_pane_mp_g3_ParamLimits

0xaeb2,	// (0x00039570) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0003dab5) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0003dab5) navi_pane_mp_g

0xaebe,	// (0x0003957c) navi_pane_mp_t1

0xaecc,	// (0x0003958a) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0003dabc) navi_pane_mp_t

0xaf08,	// (0x000395c6) navi_pane_vt_g1

0xaebe,	// (0x0003957c) navi_pane_vt_t1

0xaf10,	// (0x000395ce) navi_slider_pane

0xaf18,	// (0x000395d6) zooming_pane

0xaf20,	// (0x000395de) navi_slider_pane_g1

0x38f9,	// (0x00031fb7) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0003dac3) navi_slider_pane_g

0xaf44,	// (0x00039602) aid_levels_zoom

0xaf4c,	// (0x0003960a) zooming_pane_g1

0xaf54,	// (0x00039612) zooming_pane_g2

0xaf54,	// (0x00039612) zooming_pane_g3

0x0002,

0xf414,	// (0x0003dad2) zooming_pane_g

0xaf5c,	// (0x0003961a) level_10_zoom

0xaf65,	// (0x00039623) level_11_zoom

0xaf6e,	// (0x0003962c) level_1_zoom

0xaf77,	// (0x00039635) level_2_zoom

0xaf80,	// (0x0003963e) level_3_zoom

0xaf89,	// (0x00039647) level_4_zoom

0xaf92,	// (0x00039650) level_5_zoom

0xaf9b,	// (0x00039659) level_6_zoom

0xafa4,	// (0x00039662) level_7_zoom

0xafad,	// (0x0003966b) level_8_zoom

0xafb6,	// (0x00039674) level_9_zoom

0xafc7,	// (0x00039685) popup_phob_thumbnail_window_g1

0xafcf,	// (0x0003968d) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0003dad9) popup_phob_thumbnail_window_g

0xc30a,	// (0x0003a9c8) level_1_location

0xc312,	// (0x0003a9d0) level_2_location

0xc31a,	// (0x0003a9d8) level_3_location

0xc322,	// (0x0003a9e0) level_4_location

0xaf18,	// (0x000395d6) level_5_location

0x390b,	// (0x00031fc9) mce_icon_pane_g1

0x3915,	// (0x00031fd3) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0003dade) mce_icon_pane_g

0x391d,	// (0x00031fdb) main_mup_pane_g1_ParamLimits

0x391d,	// (0x00031fdb) main_mup_pane_g1

0x3933,	// (0x00031ff1) main_mup_pane_g2_ParamLimits

0x3933,	// (0x00031ff1) main_mup_pane_g2

0x394b,	// (0x00032009) main_mup_pane_g3_ParamLimits

0x394b,	// (0x00032009) main_mup_pane_g3

0x3963,	// (0x00032021) main_mup_pane_g4_ParamLimits

0x3963,	// (0x00032021) main_mup_pane_g4

0x397b,	// (0x00032039) main_mup_pane_g5_ParamLimits

0x397b,	// (0x00032039) main_mup_pane_g5

0x3997,	// (0x00032055) main_mup_pane_g6_ParamLimits

0x3997,	// (0x00032055) main_mup_pane_g6

0x39b1,	// (0x0003206f) main_mup_pane_g7_ParamLimits

0x39b1,	// (0x0003206f) main_mup_pane_g7

0x39cf,	// (0x0003208d) main_mup_pane_g8_ParamLimits

0x39cf,	// (0x0003208d) main_mup_pane_g8

0x39ed,	// (0x000320ab) main_mup_pane_g9_ParamLimits

0x39ed,	// (0x000320ab) main_mup_pane_g9

0x3a09,	// (0x000320c7) main_mup_pane_g10_ParamLimits

0x3a09,	// (0x000320c7) main_mup_pane_g10

0x3a27,	// (0x000320e5) main_mup_pane_g11_ParamLimits

0x3a27,	// (0x000320e5) main_mup_pane_g11

0x3a41,	// (0x000320ff) main_mup_pane_g12_ParamLimits

0x3a41,	// (0x000320ff) main_mup_pane_g12

0x3a57,	// (0x00032115) main_mup_pane_g13_ParamLimits

0x3a57,	// (0x00032115) main_mup_pane_g13

0x000c,

0xf425,	// (0x0003dae3) main_mup_pane_g_ParamLimits

0xf425,	// (0x0003dae3) main_mup_pane_g

0x3a6b,	// (0x00032129) main_mup_pane_t1_ParamLimits

0x3a6b,	// (0x00032129) main_mup_pane_t1

0x3a87,	// (0x00032145) main_mup_pane_t2_ParamLimits

0x3a87,	// (0x00032145) main_mup_pane_t2

0x3a9f,	// (0x0003215d) main_mup_pane_t3_ParamLimits

0x3a9f,	// (0x0003215d) main_mup_pane_t3

0x3ab7,	// (0x00032175) main_mup_pane_t4_ParamLimits

0x3ab7,	// (0x00032175) main_mup_pane_t4

0x3ad5,	// (0x00032193) main_mup_pane_t5_ParamLimits

0x3ad5,	// (0x00032193) main_mup_pane_t5

0x3aea,	// (0x000321a8) main_mup_pane_t6_ParamLimits

0x3aea,	// (0x000321a8) main_mup_pane_t6

0x0005,

0xf440,	// (0x0003dafe) main_mup_pane_t_ParamLimits

0xf440,	// (0x0003dafe) main_mup_pane_t

0x3afc,	// (0x000321ba) mup_progress_pane_ParamLimits

0x3afc,	// (0x000321ba) mup_progress_pane

0x3b08,	// (0x000321c6) mup_visualizer_pane_ParamLimits

0x3b08,	// (0x000321c6) mup_visualizer_pane

0x3b3c,	// (0x000321fa) mup_volume_pane_ParamLimits

0x3b3c,	// (0x000321fa) mup_volume_pane

0xafd7,	// (0x00039695) mup_visualizer_pane_g1_ParamLimits

0xafd7,	// (0x00039695) mup_visualizer_pane_g1

0xafd7,	// (0x00039695) mup_visualizer_pane_g2_ParamLimits

0xafd7,	// (0x00039695) mup_visualizer_pane_g2

0xae4d,	// (0x0003950b) mup_visualizer_pane_g3_ParamLimits

0xae4d,	// (0x0003950b) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0003db0b) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0003db0b) mup_visualizer_pane_g

0xa388,	// (0x00038a46) mup_volume_pane_g1

0xafed,	// (0x000396ab) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0003db12) mup_volume_pane_g

0xa388,	// (0x00038a46) mup_progress_pane_g1

0xaff6,	// (0x000396b4) mup_progress_pane_g2

0xafff,	// (0x000396bd) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0003db17) mup_progress_pane_g

0xa013,	// (0x000386d1) bg_popup_window_pane_cp05

0xb008,	// (0x000396c6) heading_pane_cp02_ParamLimits

0xb008,	// (0x000396c6) heading_pane_cp02

0xb024,	// (0x000396e2) list_popup_blid_pane

0xb02c,	// (0x000396ea) list_blid_sat_info_pane_ParamLimits

0xb02c,	// (0x000396ea) list_blid_sat_info_pane

0xb03f,	// (0x000396fd) list_blid_sat_info_pane_g1

0xb047,	// (0x00039705) list_blid_sat_info_pane_t1

0x3c66,	// (0x00032324) mup_equalizer_pane_ParamLimits

0x3c66,	// (0x00032324) mup_equalizer_pane

0x3c87,	// (0x00032345) mup_equalizer_pane_cp1_ParamLimits

0x3c87,	// (0x00032345) mup_equalizer_pane_cp1

0x3ca8,	// (0x00032366) mup_equalizer_pane_cp2_ParamLimits

0x3ca8,	// (0x00032366) mup_equalizer_pane_cp2

0x3ccd,	// (0x0003238b) mup_equalizer_pane_cp3_ParamLimits

0x3ccd,	// (0x0003238b) mup_equalizer_pane_cp3

0x3cf6,	// (0x000323b4) mup_equalizer_pane_cp4_ParamLimits

0x3cf6,	// (0x000323b4) mup_equalizer_pane_cp4

0x3d1f,	// (0x000323dd) mup_equalizer_pane_cp5

0x3d37,	// (0x000323f5) mup_equalizer_pane_cp6

0x3d4f,	// (0x0003240d) mup_equalizer_pane_cp7

0xc224,	// (0x0003a8e2) bg_popup_call_poc_act_pane_g9

0xc22c,	// (0x0003a8ea) bg_popup_call_poc_act_pane_g10

0xc234,	// (0x0003a8f2) bg_popup_call_poc_act_pane_g11

0x000a,

0xa26e,	// (0x0003892c) mup_scale_pane

0xa388,	// (0x00038a46) mup_scale_pane_g1

0xb055,	// (0x00039713) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0003db33) mup_scale_pane_g

0xb079,	// (0x00039737) msg_data_pane

0xb081,	// (0x0003973f) scroll_pane_cp017

0x3d79,	// (0x00032437) bg_list_pane_cp04_ParamLimits

0x3d79,	// (0x00032437) bg_list_pane_cp04

0xb091,	// (0x0003974f) msg_data_pane_g1

0x3d99,	// (0x00032457) msg_data_pane_g2

0x3da3,	// (0x00032461) msg_data_pane_g3

0x3dad,	// (0x0003246b) msg_data_pane_g4

0x3db5,	// (0x00032473) msg_data_pane_g5

0x3dbd,	// (0x0003247b) msg_data_pane_g6

0x3dc5,	// (0x00032483) msg_data_pane_g7

0x0006,

0xf484,	// (0x0003db42) msg_data_pane_g

0x3dcd,	// (0x0003248b) msg_text_pane_ParamLimits

0x3dcd,	// (0x0003248b) msg_text_pane

0x3df5,	// (0x000324b3) qrid_highlight_pane_cp011_ParamLimits

0x3df5,	// (0x000324b3) qrid_highlight_pane_cp011

0xa013,	// (0x000386d1) msg_body_pane

0xa013,	// (0x000386d1) msg_header_pane

0xb099,	// (0x00039757) input_focus_pane_cp07

0xb0ae,	// (0x0003976c) msg_header_pane_t1_ParamLimits

0xb0ae,	// (0x0003976c) msg_header_pane_t1

0xb0c0,	// (0x0003977e) msg_header_pane_t2_ParamLimits

0xb0c0,	// (0x0003977e) msg_header_pane_t2

0x0001,

0xf498,	// (0x0003db56) msg_header_pane_t_ParamLimits

0xf498,	// (0x0003db56) msg_header_pane_t

0xb0d2,	// (0x00039790) msg_body_pane_g1

0x3e24,	// (0x000324e2) msg_body_pane_t1_ParamLimits

0x3e24,	// (0x000324e2) msg_body_pane_t1

0xb0da,	// (0x00039798) msg_body_pane_t2_ParamLimits

0xb0da,	// (0x00039798) msg_body_pane_t2

0xb0ec,	// (0x000397aa) msg_body_pane_t3_ParamLimits

0xb0ec,	// (0x000397aa) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0003db5b) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0003db5b) msg_body_pane_t

0x0102,	// (0x0002e7c0) main_viewer_pane_g1_ParamLimits

0x0102,	// (0x0002e7c0) main_viewer_pane_g1

0x0110,	// (0x0002e7ce) main_viewer_pane_g2_ParamLimits

0x0110,	// (0x0002e7ce) main_viewer_pane_g2

0x3e8b,	// (0x00032549) main_viewer_pane_g3_ParamLimits

0x3e8b,	// (0x00032549) main_viewer_pane_g3

0x3e9a,	// (0x00032558) main_viewer_pane_g4_ParamLimits

0x3e9a,	// (0x00032558) main_viewer_pane_g4

0x3ea9,	// (0x00032567) main_viewer_pane_g5_ParamLimits

0x3ea9,	// (0x00032567) main_viewer_pane_g5

0x3ea9,	// (0x00032567) main_viewer_pane_g7_ParamLimits

0x3ea9,	// (0x00032567) main_viewer_pane_g7

0x3ebb,	// (0x00032579) main_viewer_pane_g8_ParamLimits

0x3ebb,	// (0x00032579) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0003db6b) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0003db6b) main_viewer_pane_g

0xb0fe,	// (0x000397bc) viewer_content_pane_ParamLimits

0xb0fe,	// (0x000397bc) viewer_content_pane

0x3f02,	// (0x000325c0) main_postcard_pane_g1_ParamLimits

0x3f02,	// (0x000325c0) main_postcard_pane_g1

0x3f18,	// (0x000325d6) main_postcard_pane_g2_ParamLimits

0x3f18,	// (0x000325d6) main_postcard_pane_g2

0x3f2e,	// (0x000325ec) main_postcard_pane_g3_ParamLimits

0x3f2e,	// (0x000325ec) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0003db7c) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0003db7c) main_postcard_pane_g

0x3f45,	// (0x00032603) main_postcard_pane_g4

0xc44d,	// (0x0003ab0b) smil_status_volume_pane_g2

0x3f88,	// (0x00032646) postcard_pane_ParamLimits

0x3f88,	// (0x00032646) postcard_pane

0xb10c,	// (0x000397ca) postcard_pane_g1_ParamLimits

0xb10c,	// (0x000397ca) postcard_pane_g1

0x3fd8,	// (0x00032696) postcard_pane_g2_ParamLimits

0x3fd8,	// (0x00032696) postcard_pane_g2

0x3fe4,	// (0x000326a2) postcard_pane_g3_ParamLimits

0x3fe4,	// (0x000326a2) postcard_pane_g3

0xb11a,	// (0x000397d8) postcard_pane_g4_ParamLimits

0xb11a,	// (0x000397d8) postcard_pane_g4

0x3ff0,	// (0x000326ae) postcard_pane_g5_ParamLimits

0x3ff0,	// (0x000326ae) postcard_pane_g5

0x4005,	// (0x000326c3) postcard_pane_g6_ParamLimits

0x4005,	// (0x000326c3) postcard_pane_g6

0xb10c,	// (0x000397ca) postcard_pane_g7_ParamLimits

0xb10c,	// (0x000397ca) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0003db89) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0003db89) postcard_pane_g

0x401d,	// (0x000326db) main_mp2_pane_g1_ParamLimits

0x401d,	// (0x000326db) main_mp2_pane_g1

0x402b,	// (0x000326e9) main_mp2_pane_g2_ParamLimits

0x402b,	// (0x000326e9) main_mp2_pane_g2

0x4037,	// (0x000326f5) main_mp2_pane_g3_ParamLimits

0x4037,	// (0x000326f5) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0003db98) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0003db98) main_mp2_pane_g

0x4043,	// (0x00032701) main_mp2_pane_t1_ParamLimits

0x4043,	// (0x00032701) main_mp2_pane_t1

0x405a,	// (0x00032718) main_mp2_pane_t2_ParamLimits

0x405a,	// (0x00032718) main_mp2_pane_t2

0x406c,	// (0x0003272a) main_mp2_pane_t3_ParamLimits

0x406c,	// (0x0003272a) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0003db9f) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0003db9f) main_mp2_pane_t

0xb128,	// (0x000397e6) pec_content_pane_ParamLimits

0xb128,	// (0x000397e6) pec_content_pane

0xa6b6,	// (0x00038d74) scroll_pane_cp015

0xb13a,	// (0x000397f8) pec_attribute_pane_ParamLimits

0xb13a,	// (0x000397f8) pec_attribute_pane

0x407e,	// (0x0003273c) pec_content_pane_g1_ParamLimits

0x407e,	// (0x0003273c) pec_content_pane_g1

0xb14a,	// (0x00039808) pec_content_pane_t1_ParamLimits

0xb14a,	// (0x00039808) pec_content_pane_t1

0xb15c,	// (0x0003981a) pec_content_pane_t2_ParamLimits

0xb15c,	// (0x0003981a) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0003dba6) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0003dba6) pec_content_pane_t

0x408a,	// (0x00032748) list_single_graphic_pane_cp01_ParamLimits

0x408a,	// (0x00032748) list_single_graphic_pane_cp01

0xa26e,	// (0x0003892c) bg_popup_sub_pane_cp04

0xb16e,	// (0x0003982c) popup_mup_playback_window_g1

0xb17a,	// (0x00039838) popup_mup_playback_window_t1

0xb18f,	// (0x0003984d) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0003dbab) popup_mup_playback_window_t

0xb1c6,	// (0x00039884) main_image_pane_g1_ParamLimits

0xb1c6,	// (0x00039884) main_image_pane_g1

0xb209,	// (0x000398c7) scroll_pane_cp018_ParamLimits

0xb209,	// (0x000398c7) scroll_pane_cp018

0xb221,	// (0x000398df) scroll_pane_cp016_ParamLimits

0xb221,	// (0x000398df) scroll_pane_cp016

0x4159,	// (0x00032817) smil2_image_pane_ParamLimits

0x4159,	// (0x00032817) smil2_image_pane

0x418f,	// (0x0003284d) smil2_root_pane_ParamLimits

0x418f,	// (0x0003284d) smil2_root_pane

0x41c7,	// (0x00032885) smil2_text_pane_ParamLimits

0x41c7,	// (0x00032885) smil2_text_pane

0xa013,	// (0x000386d1) bg_list_pane_cp06

0xb25d,	// (0x0003991b) grid_radio_pane

0xa013,	// (0x000386d1) bg_popup_window_pane_cp06

0xb267,	// (0x00039925) main_fmradio_pane_t1

0xacca,	// (0x00039388) heading_pane_cp04

0xb275,	// (0x00039933) main_fmradio_pane_t2

0xc23c,	// (0x0003a8fa) popup_cale_lunar_info_window_g1

0xb283,	// (0x00039941) main_fmradio_pane_t3

0xc244,	// (0x0003a902) popup_cale_lunar_info_window_g2

0xb293,	// (0x00039951) main_fmradio_pane_t4

0x0001,

0xb2a1,	// (0x0003995f) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0003dc86) popup_cale_lunar_info_window_g

0xf502,	// (0x0003dbc0) main_fmradio_pane_t

0xb2af,	// (0x0003996d) wait_bar_pane_cp03

0xa8f9,	// (0x00038fb7) cell_fmradio_pane_ParamLimits

0xa8f9,	// (0x00038fb7) cell_fmradio_pane

0xb10c,	// (0x000397ca) cell_fmradio_pane_g1_ParamLimits

0xb10c,	// (0x000397ca) cell_fmradio_pane_g1

0xa013,	// (0x000386d1) grid_highlight_pane_cp011

0xb2b7,	// (0x00039975) poc_content_pane_ParamLimits

0xb2b7,	// (0x00039975) poc_content_pane

0xb2c9,	// (0x00039987) scroll_pane_cp019

0x4257,	// (0x00032915) popup_call_poc_act_window_ParamLimits

0x4257,	// (0x00032915) popup_call_poc_act_window

0x427b,	// (0x00032939) popup_call_poc_inact_window_ParamLimits

0x427b,	// (0x00032939) popup_call_poc_inact_window

0xf59f,	// (0x0003dc5d) bg_popup_call_poc_act_pane_g

0xc1b4,	// (0x0003a872) bg_popup_call_poc_inact_pane_g1

0xc1bc,	// (0x0003a87a) bg_popup_call_poc_inact_pane_g2

0xb2d1,	// (0x0003998f) popup_call_poc_act_window_g2

0xc1c4,	// (0x0003a882) bg_popup_call_poc_inact_pane_g3

0xc1cc,	// (0x0003a88a) bg_popup_call_poc_inact_pane_g4

0xc1d4,	// (0x0003a892) bg_popup_call_poc_inact_pane_g5

0xb2d9,	// (0x00039997) popup_call_poc_act_window_t1_ParamLimits

0xb2d9,	// (0x00039997) popup_call_poc_act_window_t1

0xb301,	// (0x000399bf) popup_call_poc_act_window_t2_ParamLimits

0xb301,	// (0x000399bf) popup_call_poc_act_window_t2

0xb329,	// (0x000399e7) popup_call_poc_act_window_t3_ParamLimits

0xb329,	// (0x000399e7) popup_call_poc_act_window_t3

0xb351,	// (0x00039a0f) popup_call_poc_act_window_t4_ParamLimits

0xb351,	// (0x00039a0f) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0003dbcb) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0003dbcb) popup_call_poc_act_window_t

0xc1dc,	// (0x0003a89a) bg_popup_call_poc_inact_pane_g6

0xc1e4,	// (0x0003a8a2) bg_popup_call_poc_inact_pane_g7

0xc1ec,	// (0x0003a8aa) bg_popup_call_poc_inact_pane_g8

0xb363,	// (0x00039a21) popup_call_poc_inact_window_g2

0xc1f4,	// (0x0003a8b2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0003dc4a) bg_popup_call_poc_inact_pane_g

0xb36b,	// (0x00039a29) popup_call_poc_inact_window_t1_ParamLimits

0xb36b,	// (0x00039a29) popup_call_poc_inact_window_t1

0xb380,	// (0x00039a3e) popup_call_poc_inact_window_t2_ParamLimits

0xb380,	// (0x00039a3e) popup_call_poc_inact_window_t2

0xb395,	// (0x00039a53) popup_call_poc_inact_window_t3_ParamLimits

0xb395,	// (0x00039a53) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0003dbd4) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0003dbd4) popup_call_poc_inact_window_t

0xc3c0,	// (0x0003aa7e) context_pane_ParamLimits

0x4b23,	// (0x000331e1) signal_pane_ParamLimits

0xaf18,	// (0x000395d6) main_call2_pane

0xc3ae,	// (0x0003aa6c) popup_phob_thumbnail2_window_ParamLimits

0xc3ae,	// (0x0003aa6c) popup_phob_thumbnail2_window

0x3e55,	// (0x00032513) aid_hotspot_pointer_arrow_pane

0x3e5d,	// (0x0003251b) aid_hotspot_pointer_hand_pane

0x45e3,	// (0x00032ca1) phob_pre_status_pane_g5

0x1d27,	// (0x000303e5) cams_zoom_pane_ParamLimits

0x1d36,	// (0x000303f4) image_vga_pane_ParamLimits

0x1d50,	// (0x0003040e) main_camera_pane_g1_ParamLimits

0x1d62,	// (0x00030420) main_camera_pane_g2_ParamLimits

0x1d72,	// (0x00030430) main_camera_pane_g3_ParamLimits

0x1d86,	// (0x00030444) main_camera_pane_g4_ParamLimits

0x1d9a,	// (0x00030458) main_camera_pane_g5_ParamLimits

0x1dae,	// (0x0003046c) main_camera_pane_g6_ParamLimits

0x1dc2,	// (0x00030480) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0003d8d3) main_camera_pane_g_ParamLimits

0x1dd6,	// (0x00030494) main_camera_pane_t1_ParamLimits

0x1dec,	// (0x000304aa) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0003d8e4) main_camera_pane_t_ParamLimits

0xa26e,	// (0x0003892c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa26e,	// (0x0003892c) bg_popup_preview_window_pane_cp01

0xb3aa,	// (0x00039a68) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3aa,	// (0x00039a68) popup_phob_thumbnail2_window_g1

0xa013,	// (0x000386d1) call2_cli_visual_pane

0x42af,	// (0x0003296d) popup_call2_audio_conf_window_ParamLimits

0x42af,	// (0x0003296d) popup_call2_audio_conf_window

0x42d7,	// (0x00032995) popup_call2_audio_first_window_ParamLimits

0x42d7,	// (0x00032995) popup_call2_audio_first_window

0x436d,	// (0x00032a2b) popup_call2_audio_in_window_ParamLimits

0x436d,	// (0x00032a2b) popup_call2_audio_in_window

0x43b9,	// (0x00032a77) popup_call2_audio_out_window_ParamLimits

0x43b9,	// (0x00032a77) popup_call2_audio_out_window

0x442b,	// (0x00032ae9) popup_call2_audio_second_window_ParamLimits

0x442b,	// (0x00032ae9) popup_call2_audio_second_window

0x4491,	// (0x00032b4f) popup_call2_audio_wait_window_ParamLimits

0x4491,	// (0x00032b4f) popup_call2_audio_wait_window

0xa013,	// (0x000386d1) bg_popup_call2_act_pane_cp03

0xa250,	// (0x0003890e) list_conf_pane_cp

0xb3b6,	// (0x00039a74) popup_call2_audio_conf_window_t1

0xb3c4,	// (0x00039a82) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3c4,	// (0x00039a82) list_single_graphic_popup_conf2_pane

0xad39,	// (0x000393f7) list_highlight_pane_cp04

0xb3d7,	// (0x00039a95) list_single_graphic_popup_conf2_pane_g1

0xad4a,	// (0x00039408) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0003dbdb) list_single_graphic_popup_conf2_pane_g

0xb3e1,	// (0x00039a9f) list_single_graphic_popup_conf2_pane_t1

0xb3ef,	// (0x00039aad) bg_popup_call2_act_pane_cp01_ParamLimits

0xb3ef,	// (0x00039aad) bg_popup_call2_act_pane_cp01

0xb479,	// (0x00039b37) call_type_pane_cp05_ParamLimits

0xb479,	// (0x00039b37) call_type_pane_cp05

0xb4cd,	// (0x00039b8b) popup_call2_audio_second_window_g1_ParamLimits

0xb4cd,	// (0x00039b8b) popup_call2_audio_second_window_g1

0xb521,	// (0x00039bdf) popup_call2_audio_second_window_g2_ParamLimits

0xb521,	// (0x00039bdf) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0003dbe0) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0003dbe0) popup_call2_audio_second_window_g

0xb586,	// (0x00039c44) popup_call2_audio_second_window_t1_ParamLimits

0xb586,	// (0x00039c44) popup_call2_audio_second_window_t1

0xb641,	// (0x00039cff) popup_call2_audio_second_window_t2_ParamLimits

0xb641,	// (0x00039cff) popup_call2_audio_second_window_t2

0xb694,	// (0x00039d52) popup_call2_audio_second_window_t3_ParamLimits

0xb694,	// (0x00039d52) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0003dbe7) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0003dbe7) popup_call2_audio_second_window_t

0xa013,	// (0x000386d1) bg_popup_call2_in_pane_cp02

0xa01d,	// (0x000386db) call_type_pane_cp04

0xa025,	// (0x000386e3) popup_call2_audio_wait_window_g1

0xa02d,	// (0x000386eb) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0003d7c0) popup_call2_audio_wait_window_g

0xa035,	// (0x000386f3) popup_call2_audio_wait_window_t3

0xb787,	// (0x00039e45) bg_popup_call2_act_pane_ParamLimits

0xb787,	// (0x00039e45) bg_popup_call2_act_pane

0xb847,	// (0x00039f05) call_type_pane_cp03_ParamLimits

0xb847,	// (0x00039f05) call_type_pane_cp03

0xb8ab,	// (0x00039f69) popup_call2_audio_first_window_g1_ParamLimits

0xb8ab,	// (0x00039f69) popup_call2_audio_first_window_g1

0xb91b,	// (0x00039fd9) popup_call2_audio_first_window_g2_ParamLimits

0xb91b,	// (0x00039fd9) popup_call2_audio_first_window_g2

0xafd7,	// (0x00039695) popup_call2_audio_first_window_g3_ParamLimits

0xafd7,	// (0x00039695) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0003dbf0) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0003dbf0) popup_call2_audio_first_window_g

0xb9f9,	// (0x0003a0b7) popup_call2_audio_first_window_t1_ParamLimits

0xb9f9,	// (0x0003a0b7) popup_call2_audio_first_window_t1

0xbafc,	// (0x0003a1ba) popup_call2_audio_first_window_t4_ParamLimits

0xbafc,	// (0x0003a1ba) popup_call2_audio_first_window_t4

0xbbdf,	// (0x0003a29d) popup_call2_audio_first_window_t5_ParamLimits

0xbbdf,	// (0x0003a29d) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0003dbfb) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0003dbfb) popup_call2_audio_first_window_t

0xa266,	// (0x00038924) bg_popup_call2_act_pane_g1

0xc24e,	// (0x0003a90c) popup_cale_lunar_info_window_t1

0xc25c,	// (0x0003a91a) popup_cale_lunar_info_window_t2

0xc26a,	// (0x0003a928) popup_cale_lunar_info_window_t3

0xa013,	// (0x000386d1) bg_popup_call2_bubble_pane

0xbce0,	// (0x0003a39e) bg_popup_call2_in_pane_cp01_ParamLimits

0xbce0,	// (0x0003a39e) bg_popup_call2_in_pane_cp01

0x9cef,	// (0x000383ad) call_type_pane_cp02

0xbd28,	// (0x0003a3e6) popup_call2_audio_out_window_g1_ParamLimits

0xbd28,	// (0x0003a3e6) popup_call2_audio_out_window_g1

0xbd54,	// (0x0003a412) popup_call2_audio_out_window_g2_ParamLimits

0xbd54,	// (0x0003a412) popup_call2_audio_out_window_g2

0xbd7c,	// (0x0003a43a) popup_call2_audio_out_window_g3_ParamLimits

0xbd7c,	// (0x0003a43a) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0003dc04) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0003dc04) popup_call2_audio_out_window_g

0xbdb7,	// (0x0003a475) popup_call2_audio_out_window_t1_ParamLimits

0xbdb7,	// (0x0003a475) popup_call2_audio_out_window_t1

0xbe16,	// (0x0003a4d4) popup_call2_audio_out_window_t2_ParamLimits

0xbe16,	// (0x0003a4d4) popup_call2_audio_out_window_t2

0xbe6a,	// (0x0003a528) popup_call2_audio_out_window_t3_ParamLimits

0xbe6a,	// (0x0003a528) popup_call2_audio_out_window_t3

0xbe80,	// (0x0003a53e) popup_call2_audio_out_window_t4_ParamLimits

0xbe80,	// (0x0003a53e) popup_call2_audio_out_window_t4

0xbe96,	// (0x0003a554) popup_call2_audio_out_window_t5_ParamLimits

0xbe96,	// (0x0003a554) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0003dc0d) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0003dc0d) popup_call2_audio_out_window_t

0xbefa,	// (0x0003a5b8) bg_popup_call2_in_pane_ParamLimits

0xbefa,	// (0x0003a5b8) bg_popup_call2_in_pane

0xbf56,	// (0x0003a614) popup_call2_audio_in_window_g1_ParamLimits

0xbf56,	// (0x0003a614) popup_call2_audio_in_window_g1

0xbf8e,	// (0x0003a64c) popup_call2_audio_in_window_g2_ParamLimits

0xbf8e,	// (0x0003a64c) popup_call2_audio_in_window_g2

0xbfc6,	// (0x0003a684) popup_call2_audio_in_window_g3_ParamLimits

0xbfc6,	// (0x0003a684) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0003dc1a) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0003dc1a) popup_call2_audio_in_window_g

0xc01e,	// (0x0003a6dc) popup_call2_audio_in_window_t1_ParamLimits

0xc01e,	// (0x0003a6dc) popup_call2_audio_in_window_t1

0xc09e,	// (0x0003a75c) popup_call2_audio_in_window_t2_ParamLimits

0xc09e,	// (0x0003a75c) popup_call2_audio_in_window_t2

0xc11e,	// (0x0003a7dc) popup_call2_audio_in_window_t3_ParamLimits

0xc11e,	// (0x0003a7dc) popup_call2_audio_in_window_t3

0xc138,	// (0x0003a7f6) popup_call2_audio_in_window_t4_ParamLimits

0xc138,	// (0x0003a7f6) popup_call2_audio_in_window_t4

0xc14a,	// (0x0003a808) popup_call2_audio_in_window_t5_ParamLimits

0xc14a,	// (0x0003a808) popup_call2_audio_in_window_t5

0xc15f,	// (0x0003a81d) popup_call2_audio_in_window_t6_ParamLimits

0xc15f,	// (0x0003a81d) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0003dc23) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0003dc23) popup_call2_audio_in_window_t

0xa266,	// (0x00038924) bg_popup_call2_in_pane_g1

0xc278,	// (0x0003a936) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0003dc8b) popup_cale_lunar_info_window_t

0xa26e,	// (0x0003892c) bg_popup_call2_rect_pane_ParamLimits

0xa26e,	// (0x0003892c) bg_popup_call2_rect_pane

0xa013,	// (0x000386d1) call2_cli_visual_graphic_pane

0xa013,	// (0x000386d1) call2_cli_visual_text_pane

0x4bb2,	// (0x00033270) smil_status_volume_pane_g3

0x0002,

0xa388,	// (0x00038a46) call2_cli_visual_graphic_pane_g1

0xa388,	// (0x00038a46) call2_cli_visual_graphic_pane_g2

0xa388,	// (0x00038a46) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0003dc30) call2_cli_visual_graphic_pane_g

0xc174,	// (0x0003a832) bg_popup_call2_rect_pane_g1

0xa426,	// (0x00038ae4) bg_popup_call2_rect_pane_g2

0xc17c,	// (0x0003a83a) bg_popup_call2_rect_pane_g3

0xc184,	// (0x0003a842) bg_popup_call2_rect_pane_g4

0xc18c,	// (0x0003a84a) bg_popup_call2_rect_pane_g5

0xc194,	// (0x0003a852) bg_popup_call2_rect_pane_g6

0xc19c,	// (0x0003a85a) bg_popup_call2_rect_pane_g7

0xc1a4,	// (0x0003a862) bg_popup_call2_rect_pane_g8

0xc1ac,	// (0x0003a86a) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0003dc37) bg_popup_call2_rect_pane_g

0xc1b4,	// (0x0003a872) bg_popup_call2_bubble_pane_g1

0xc1bc,	// (0x0003a87a) bg_popup_call2_bubble_pane_g2

0xc1c4,	// (0x0003a882) bg_popup_call2_bubble_pane_g3

0xc1cc,	// (0x0003a88a) bg_popup_call2_bubble_pane_g4

0xc1d4,	// (0x0003a892) bg_popup_call2_bubble_pane_g5

0xc1dc,	// (0x0003a89a) bg_popup_call2_bubble_pane_g6

0xc1e4,	// (0x0003a8a2) bg_popup_call2_bubble_pane_g7

0xc1ec,	// (0x0003a8aa) bg_popup_call2_bubble_pane_g8

0xc1f4,	// (0x0003a8b2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0003dc4a) bg_popup_call2_bubble_pane_g

0x1753,	// (0x0002fe11) aid_cale_week_size_cell_pane

0x1e06,	// (0x000304c4) aid_cams_cif_uncrop_pane_ParamLimits

0x1e06,	// (0x000304c4) aid_cams_cif_uncrop_pane

0x1fbf,	// (0x0003067d) aid_cams_size_cell_ParamLimits

0x1fbf,	// (0x0003067d) aid_cams_size_cell

0x1fd3,	// (0x00030691) grid_cams_pane_ParamLimits

0x1fed,	// (0x000306ab) linegrid_cams_pane_ParamLimits

0x21d9,	// (0x00030897) call_video_pane_t1

0x21f3,	// (0x000308b1) call_video_pane_t2

0x0001,

0xf279,	// (0x0003d937) call_video_pane_t

0x2627,	// (0x00030ce5) aid_cale_month_size_cell_pane_ParamLimits

0x2627,	// (0x00030ce5) aid_cale_month_size_cell_pane

0xf616,	// (0x0003dcd4) smil_status_volume_pane_g

0x4bbf,	// (0x0003327d) volume_smil_pane_ParamLimits

0x9ba3,	// (0x00038261) aid_popup2_width_pane

0x1657,	// (0x0002fd15) cell_qdial_pane_g4_ParamLimits

0x1657,	// (0x0002fd15) cell_qdial_pane_g4

0x373a,	// (0x00031df8) aid_blid_cardinal_pane_ParamLimits

0x3746,	// (0x00031e04) aid_blid_destination_pane_ParamLimits

0x3746,	// (0x00031e04) aid_blid_destination_pane

0xa26e,	// (0x0003892c) bg_popup_call_poc_act_pane_ParamLimits

0xa26e,	// (0x0003892c) bg_popup_call_poc_act_pane

0xa26e,	// (0x0003892c) bg_popup_call_poc_inact_pane_ParamLimits

0xa26e,	// (0x0003892c) bg_popup_call_poc_inact_pane

0xc1fc,	// (0x0003a8ba) bg_popup_call_poc_act_pane_g1

0xc204,	// (0x0003a8c2) bg_popup_call_poc_act_pane_g2

0xc20c,	// (0x0003a8ca) bg_popup_call_poc_act_pane_g3

0xc1cc,	// (0x0003a88a) bg_popup_call_poc_act_pane_g4

0xc1d4,	// (0x0003a892) bg_popup_call_poc_act_pane_g5

0xc214,	// (0x0003a8d2) bg_popup_call_poc_act_pane_g6

0xc1e4,	// (0x0003a8a2) bg_popup_call_poc_act_pane_g7

0xc21c,	// (0x0003a8da) bg_popup_call_poc_act_pane_g8

0xa013,	// (0x000386d1) main_usb_pane

0xc385,	// (0x0003aa43) popup_cale_lunar_info_window

0x24bc,	// (0x00030b7a) im_reading_pane_t1_ParamLimits

0xa60e,	// (0x00038ccc) list_im_pane_ParamLimits

0xa61f,	// (0x00038cdd) scroll_pane_cp07_ParamLimits

0xa013,	// (0x000386d1) grid_highlight_pane_cp012

0xa26e,	// (0x0003892c) mup_scale_pane_ParamLimits

0xb10c,	// (0x000397ca) main_usb_pane_g1_ParamLimits

0xb10c,	// (0x000397ca) main_usb_pane_g1

0x44ef,	// (0x00032bad) main_usb_pane_g2_ParamLimits

0x44ef,	// (0x00032bad) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0003dc74) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0003dc74) main_usb_pane_g

0x4505,	// (0x00032bc3) main_usb_pane_t1_ParamLimits

0x4505,	// (0x00032bc3) main_usb_pane_t1

0x4517,	// (0x00032bd5) main_usb_pane_t2_ParamLimits

0x4517,	// (0x00032bd5) main_usb_pane_t2

0x4529,	// (0x00032be7) main_usb_pane_t3_ParamLimits

0x4529,	// (0x00032be7) main_usb_pane_t3

0x453b,	// (0x00032bf9) main_usb_pane_t4_ParamLimits

0x453b,	// (0x00032bf9) main_usb_pane_t4

0x4550,	// (0x00032c0e) main_usb_pane_t5_ParamLimits

0x4550,	// (0x00032c0e) main_usb_pane_t5

0x4565,	// (0x00032c23) main_usb_pane_t6_ParamLimits

0x4565,	// (0x00032c23) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0003dc79) main_usb_pane_t_ParamLimits

0x36db,	// (0x00031d99) aid_text_placing

0x36e6,	// (0x00031da4) main_location2_pane_t1_ParamLimits

0x36fa,	// (0x00031db8) main_location2_pane_t2_ParamLimits

0x3710,	// (0x00031dce) main_location2_pane_t3_ParamLimits

0x3726,	// (0x00031de4) main_location2_pane_t4_ParamLimits

0x3726,	// (0x00031de4) main_location2_pane_t4

0xf3da,	// (0x0003da98) main_location2_pane_t_ParamLimits

0xa2aa,	// (0x00038968) find_pinb_pane_g2_ParamLimits

0xa2aa,	// (0x00038968) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0003d7e6) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0003d7e6) find_pinb_pane_g

0xa2b6,	// (0x00038974) find_pinb_pane_t1_ParamLimits

0xa2c8,	// (0x00038986) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0003d7eb) find_pinb_pane_t_ParamLimits

0xa013,	// (0x000386d1) main_call3_pane

0x2b92,	// (0x00031250) cale_month_day_heading_pane_t1_ParamLimits

0x2c18,	// (0x000312d6) cale_month_day_heading_pane_t2_ParamLimits

0x2ca9,	// (0x00031367) cale_month_day_heading_pane_t3_ParamLimits

0x2d3a,	// (0x000313f8) cale_month_day_heading_pane_t4_ParamLimits

0x2dcb,	// (0x00031489) cale_month_day_heading_pane_t5_ParamLimits

0x2e64,	// (0x00031522) cale_month_day_heading_pane_t6_ParamLimits

0x2f05,	// (0x000315c3) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0003d96f) cale_month_day_heading_pane_t_ParamLimits

0x327f,	// (0x0003193d) smil_status_volume_pane

0x3fac,	// (0x0003266a) postcard_address_pane_ParamLimits

0x3fac,	// (0x0003266a) postcard_address_pane

0x3fc2,	// (0x00032680) postcard_message_pane_ParamLimits

0x3fc2,	// (0x00032680) postcard_message_pane

0x44cb,	// (0x00032b89) call2_cli_visual_pane_t1_ParamLimits

0x44cb,	// (0x00032b89) call2_cli_visual_pane_t1

0x4d7c,	// (0x0003343a) postcard_message_pane_t1_ParamLimits

0x4d7c,	// (0x0003343a) postcard_message_pane_t1

0x4d65,	// (0x00033423) postcard_address_pane_t1_ParamLimits

0x4d65,	// (0x00033423) postcard_address_pane_t1

0x4d51,	// (0x0003340f) popup_call3_audio_in_window_ParamLimits

0x4d51,	// (0x0003340f) popup_call3_audio_in_window

0x4bd6,	// (0x00033294) bg_popup_call3_in_pane_ParamLimits

0x4bd6,	// (0x00033294) bg_popup_call3_in_pane

0x4c52,	// (0x00033310) popup_call3_audio_in_window_g1_ParamLimits

0x4c52,	// (0x00033310) popup_call3_audio_in_window_g1

0x4c72,	// (0x00033330) popup_call3_audio_in_window_g2_ParamLimits

0x4c72,	// (0x00033330) popup_call3_audio_in_window_g2

0x4c92,	// (0x00033350) popup_call3_audio_in_window_g3_ParamLimits

0x4c92,	// (0x00033350) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0003dcdb) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0003dcdb) popup_call3_audio_in_window_g

0x4cc3,	// (0x00033381) popup_call3_audio_in_window_t1_ParamLimits

0x4cc3,	// (0x00033381) popup_call3_audio_in_window_t1

0x4d01,	// (0x000333bf) popup_call3_audio_in_window_t2_ParamLimits

0x4d01,	// (0x000333bf) popup_call3_audio_in_window_t2

0x4d3f,	// (0x000333fd) popup_call3_audio_in_window_t3_ParamLimits

0x4d3f,	// (0x000333fd) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0003dce4) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0003dce4) popup_call3_audio_in_window_t

0xaf18,	// (0x000395d6) bg_popup_call3_rect_pane

0xc174,	// (0x0003a832) bg_popup_call3_rect_pane_g1

0xa426,	// (0x00038ae4) bg_popup_call3_rect_pane_g2

0xc17c,	// (0x0003a83a) bg_popup_call3_rect_pane_g3

0xc184,	// (0x0003a842) bg_popup_call3_rect_pane_g4

0xc18c,	// (0x0003a84a) bg_popup_call3_rect_pane_g5

0xc194,	// (0x0003a852) bg_popup_call3_rect_pane_g6

0xc19c,	// (0x0003a85a) bg_popup_call3_rect_pane_g7

0x3b52,	// (0x00032210) mup_visualizer_osc_pane

0xafe5,	// (0x000396a3) mup_visualizer_spec_pane

0x4c06,	// (0x000332c4) call3_video_qcif_pane_ParamLimits

0x4c06,	// (0x000332c4) call3_video_qcif_pane

0x4c19,	// (0x000332d7) call3_video_qcif_uncrop_pane_ParamLimits

0x4c19,	// (0x000332d7) call3_video_qcif_uncrop_pane

0x4c29,	// (0x000332e7) call3_video_subqcif_pane_ParamLimits

0x4c29,	// (0x000332e7) call3_video_subqcif_pane

0x4c3f,	// (0x000332fd) call3_video_subqcif_uncrop_pane_ParamLimits

0x4c3f,	// (0x000332fd) call3_video_subqcif_uncrop_pane

0x4cb2,	// (0x00033370) popup_call3_audio_in_window_g4_ParamLimits

0x4cb2,	// (0x00033370) popup_call3_audio_in_window_g4

0x4ba1,	// (0x0003325f) mup_spec_half_pane

0x4baa,	// (0x00033268) mup_spec_half_pane_cp

0xc420,	// (0x0003aade) mup_osc_middle_pane

0xc429,	// (0x0003aae7) mup_visualizer_osc_pane_g1

0x4b81,	// (0x0003323f) mup_spec_bar_pane_ParamLimits

0x4b81,	// (0x0003323f) mup_spec_bar_pane

0xc40d,	// (0x0003aacb) mup_spec_bar_pane_g1

0xc417,	// (0x0003aad5) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0003dccf) mup_spec_bar_pane_g

0x1753,	// (0x0002fe11) aid_cale_week_size_cell_pane_ParamLimits

0x176d,	// (0x0002fe2b) bg_cale_heading_pane_ParamLimits

0xa45a,	// (0x00038b18) bg_cale_pane_cp01_ParamLimits

0x1792,	// (0x0002fe50) cale_week_corner_pane_ParamLimits

0x17b1,	// (0x0002fe6f) cale_week_day_heading_pane_ParamLimits

0x17db,	// (0x0002fe99) cale_week_scroll_pane_g1_ParamLimits

0x17fb,	// (0x0002feb9) cale_week_scroll_pane_g2_ParamLimits

0x1813,	// (0x0002fed1) cale_week_scroll_pane_g3_ParamLimits

0x182b,	// (0x0002fee9) cale_week_scroll_pane_g4_ParamLimits

0x1843,	// (0x0002ff01) cale_week_scroll_pane_g5_ParamLimits

0x185f,	// (0x0002ff1d) cale_week_scroll_pane_g6_ParamLimits

0x187b,	// (0x0002ff39) cale_week_scroll_pane_g7_ParamLimits

0x189b,	// (0x0002ff59) cale_week_scroll_pane_g8_ParamLimits

0x18bb,	// (0x0002ff79) cale_week_scroll_pane_g9_ParamLimits

0x18d8,	// (0x0002ff96) cale_week_scroll_pane_g10_ParamLimits

0x18f5,	// (0x0002ffb3) cale_week_scroll_pane_g11_ParamLimits

0x1912,	// (0x0002ffd0) cale_week_scroll_pane_g12_ParamLimits

0x192f,	// (0x0002ffed) cale_week_scroll_pane_g13_ParamLimits

0x194c,	// (0x0003000a) cale_week_scroll_pane_g14_ParamLimits

0x1971,	// (0x0003002f) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0003d877) cale_week_scroll_pane_g_ParamLimits

0x1996,	// (0x00030054) cale_week_time_pane_ParamLimits

0x19b6,	// (0x00030074) grid_cale_week_pane_ParamLimits

0xa478,	// (0x00038b36) listscroll_cale_week_pane_t1

0xa48a,	// (0x00038b48) scroll_pane_cp08_ParamLimits

0x268c,	// (0x00030d4a) cale_month_corner_pane_ParamLimits

0xa83f,	// (0x00038efd) cale_month_pane_t1

0x2b20,	// (0x000311de) cale_month_week_pane_ParamLimits

0x349a,	// (0x00031b58) popup_call_status_window_g1_ParamLimits

0x34ae,	// (0x00031b6c) popup_call_status_window_g2_ParamLimits

0x34c2,	// (0x00031b80) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0003da1f) popup_call_status_window_g_ParamLimits

0xacba,	// (0x00039378) aid_call2_pane

0x3e16,	// (0x000324d4) msg_header_pane_g1

0x3fac,	// (0x0003266a) postcard_address2_pane_ParamLimits

0x3fac,	// (0x0003266a) postcard_address2_pane

0x3fc2,	// (0x00032680) postcard_message2_pane_ParamLimits

0x3fc2,	// (0x00032680) postcard_message2_pane

0x4b31,	// (0x000331ef) message2_row_pane_ParamLimits

0x4b31,	// (0x000331ef) message2_row_pane

0x4b4e,	// (0x0003320c) address2_row_pane_ParamLimits

0x4b4e,	// (0x0003320c) address2_row_pane

0xc3db,	// (0x0003aa99) postcard_message2_row_pane_g1

0xc3e3,	// (0x0003aaa1) postcard_message2_row_pane_t1

0xc3db,	// (0x0003aa99) address2_row_pane_g1

0xc3e3,	// (0x0003aaa1) address2_row_pane_t1

0x0056,	// (0x0002e714) aid_size_cell_vorec

0xa013,	// (0x000386d1) main_rss_pane

0x4b61,	// (0x0003321f) rss_list_single_pane_ParamLimits

0x4b61,	// (0x0003321f) rss_list_single_pane

0xc3f1,	// (0x0003aaaf) rss_list_single_pane_t1

0xc3ff,	// (0x0003aabd) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0003dcca) rss_list_single_pane_t

0xa013,	// (0x000386d1) main_camera2_pane

0xa013,	// (0x000386d1) main_video2_pane

0x0172,	// (0x0002e830) cams_zoom_pane_cp2_ParamLimits

0x0172,	// (0x0002e830) cams_zoom_pane_cp2

0x0189,	// (0x0002e847) image2_vga_pane_ParamLimits

0x0189,	// (0x0002e847) image2_vga_pane

0x01d1,	// (0x0002e88f) main_camera2_pane_g1_ParamLimits

0x01d1,	// (0x0002e88f) main_camera2_pane_g1

0x01f1,	// (0x0002e8af) main_camera2_pane_g2_ParamLimits

0x01f1,	// (0x0002e8af) main_camera2_pane_g2

0x0208,	// (0x0002e8c6) main_camera2_pane_g3_ParamLimits

0x0208,	// (0x0002e8c6) main_camera2_pane_g3

0x021f,	// (0x0002e8dd) main_camera2_pane_g4_ParamLimits

0x021f,	// (0x0002e8dd) main_camera2_pane_g4

0x0236,	// (0x0002e8f4) main_camera2_pane_g5_ParamLimits

0x0236,	// (0x0002e8f4) main_camera2_pane_g5

0x024d,	// (0x0002e90b) main_camera2_pane_g6_ParamLimits

0x024d,	// (0x0002e90b) main_camera2_pane_g6

0x0264,	// (0x0002e922) main_camera2_pane_g7_ParamLimits

0x0264,	// (0x0002e922) main_camera2_pane_g7

0x027b,	// (0x0002e939) main_camera2_pane_g8_ParamLimits

0x027b,	// (0x0002e939) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0003dceb) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0003dceb) main_camera2_pane_g

0x02a9,	// (0x0002e967) main_camera2_pane_t1_ParamLimits

0x02a9,	// (0x0002e967) main_camera2_pane_t1

0x02de,	// (0x0002e99c) main_camera2_pane_t2_ParamLimits

0x02de,	// (0x0002e99c) main_camera2_pane_t2

0x02fb,	// (0x0002e9b9) main_camera2_pane_t3_ParamLimits

0x02fb,	// (0x0002e9b9) main_camera2_pane_t3

0x0359,	// (0x0002ea17) main_camera2_pane_t4_ParamLimits

0x0359,	// (0x0002ea17) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0003dcfe) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0003dcfe) main_camera2_pane_t

0x03e2,	// (0x0002eaa0) cams_zoom_pane_cp4_ParamLimits

0x03e2,	// (0x0002eaa0) cams_zoom_pane_cp4

0x03f8,	// (0x0002eab6) image2_cif_pane_ParamLimits

0x03f8,	// (0x0002eab6) image2_cif_pane

0x0423,	// (0x0002eae1) image2_subqcif_pane_ParamLimits

0x0423,	// (0x0002eae1) image2_subqcif_pane

0x043e,	// (0x0002eafc) main_video2_pane_g1_ParamLimits

0x043e,	// (0x0002eafc) main_video2_pane_g1

0x0458,	// (0x0002eb16) main_video2_pane_g2_ParamLimits

0x0458,	// (0x0002eb16) main_video2_pane_g2

0x046e,	// (0x0002eb2c) main_video2_pane_g3_ParamLimits

0x046e,	// (0x0002eb2c) main_video2_pane_g3

0x0484,	// (0x0002eb42) main_video2_pane_g4_ParamLimits

0x0484,	// (0x0002eb42) main_video2_pane_g4

0x049a,	// (0x0002eb58) main_video2_pane_g5_ParamLimits

0x049a,	// (0x0002eb58) main_video2_pane_g5

0x04b0,	// (0x0002eb6e) main_video2_pane_g6_ParamLimits

0x04b0,	// (0x0002eb6e) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0003dd0d) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0003dd0d) main_video2_pane_g

0x04ca,	// (0x0002eb88) main_video2_pane_t1_ParamLimits

0x04ca,	// (0x0002eb88) main_video2_pane_t1

0x04ee,	// (0x0002ebac) main_video2_pane_t2_ParamLimits

0x04ee,	// (0x0002ebac) main_video2_pane_t2

0x053e,	// (0x0002ebfc) main_video2_pane_t3_ParamLimits

0x053e,	// (0x0002ebfc) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0003dd1a) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0003dd1a) main_video2_pane_t

0x4623,	// (0x00032ce1) call_muted_g2

0x0001,

0xf5fe,	// (0x0003dcbc) call_muted_g

0xa013,	// (0x000386d1) main_mup2_pane

0x4dc2,	// (0x00033480) main_mup2_pane_g1_ParamLimits

0x4dc2,	// (0x00033480) main_mup2_pane_g1

0x4dce,	// (0x0003348c) main_mup2_pane_g2_ParamLimits

0x4dce,	// (0x0003348c) main_mup2_pane_g2

0x5041,	// (0x000336ff) main_mup_pane_g13_cp1

0x5049,	// (0x00033707) mup_volume_pane_cp1

0x4dec,	// (0x000334aa) main_mup2_pane_g4_ParamLimits

0x4dec,	// (0x000334aa) main_mup2_pane_g4

0x4dfe,	// (0x000334bc) main_mup2_pane_g5_ParamLimits

0x4dfe,	// (0x000334bc) main_mup2_pane_g5

0x4e10,	// (0x000334ce) main_mup2_pane_g6_ParamLimits

0x4e10,	// (0x000334ce) main_mup2_pane_g6

0x4e22,	// (0x000334e0) main_mup2_pane_g7_ParamLimits

0x4e22,	// (0x000334e0) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0003dd21) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0003dd21) main_mup2_pane_g

0x4e3a,	// (0x000334f8) main_mup2_pane_t1_ParamLimits

0x4e3a,	// (0x000334f8) main_mup2_pane_t1

0x4e50,	// (0x0003350e) main_mup2_pane_t2_ParamLimits

0x4e50,	// (0x0003350e) main_mup2_pane_t2

0x4e66,	// (0x00033524) main_mup2_pane_t3_ParamLimits

0x4e66,	// (0x00033524) main_mup2_pane_t3

0x4e7c,	// (0x0003353a) main_mup2_pane_t4_ParamLimits

0x4e7c,	// (0x0003353a) main_mup2_pane_t4

0x4e94,	// (0x00033552) main_mup2_pane_t5_ParamLimits

0x4e94,	// (0x00033552) main_mup2_pane_t5

0x4eac,	// (0x0003356a) main_mup2_pane_t6_ParamLimits

0x4eac,	// (0x0003356a) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0003dd30) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0003dd30) main_mup2_pane_t

0x4edc,	// (0x0003359a) mup2_visualizer_pane_ParamLimits

0x4edc,	// (0x0003359a) mup2_visualizer_pane

0x4f0a,	// (0x000335c8) mup_progress_pane_cp_ParamLimits

0x4f0a,	// (0x000335c8) mup_progress_pane_cp

0x502c,	// (0x000336ea) mup_volume_pane_cp_ParamLimits

0x502c,	// (0x000336ea) mup_volume_pane_cp

0x4f20,	// (0x000335de) mup2_visualizer_pane_g1_ParamLimits

0x4f20,	// (0x000335de) mup2_visualizer_pane_g1

0xc460,	// (0x0003ab1e) mup2_visualizer_pane_g2_ParamLimits

0xc460,	// (0x0003ab1e) mup2_visualizer_pane_g2

0x4f37,	// (0x000335f5) mup2_visualizer_pane_g3_ParamLimits

0x4f37,	// (0x000335f5) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0003dd3d) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0003dd3d) mup2_visualizer_pane_g

0xb255,	// (0x00039913) aid_size_cell_fmradio

0x47d3,	// (0x00032e91) aid_height_parent_landcape

0xa69d,	// (0x00038d5b) wml_content_pane_cp

0xa6a5,	// (0x00038d63) wml_tabs_pane

0xa6ae,	// (0x00038d6c) popup_wml_miniature_window

0xa6b6,	// (0x00038d74) scroll_pane_cp021

0xa6ca,	// (0x00038d88) wml_content_pane_comp8

0xa013,	// (0x000386d1) bg_popup_sub_pane_cp05

0xc47e,	// (0x0003ab3c) popup_wml_miniature_window_g1

0xc486,	// (0x0003ab44) wml_miniature_view_pane

0x4f43,	// (0x00033601) aid_size_wml_view

0x4f4b,	// (0x00033609) wml_miniature_view_pane_g1

0x4f54,	// (0x00033612) wml_miniature_view_pane_g2

0x4f5d,	// (0x0003361b) wml_miniature_view_pane_g3

0x4f65,	// (0x00033623) wml_miniature_view_pane_g4

0x4f6d,	// (0x0003362b) wml_miniature_view_pane_g5

0x4f75,	// (0x00033633) wml_miniature_view_pane_g6

0x4f7d,	// (0x0003363b) wml_miniature_view_pane_g7

0x4f85,	// (0x00033643) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0003dd44) wml_miniature_view_pane_g

0xc48e,	// (0x0003ab4c) background_graphic_ParamLimits

0xc48e,	// (0x0003ab4c) background_graphic

0xc49a,	// (0x0003ab58) wml_tabs_2_pane

0xc4a3,	// (0x0003ab61) wml_tabs_3_pane_ParamLimits

0xc4a3,	// (0x0003ab61) wml_tabs_3_pane

0xc4b5,	// (0x0003ab73) wml_tabs_4_pane_ParamLimits

0xc4b5,	// (0x0003ab73) wml_tabs_4_pane

0xc4cb,	// (0x0003ab89) wml_tabs_5_pane_ParamLimits

0xc4cb,	// (0x0003ab89) wml_tabs_5_pane

0xc4e5,	// (0x0003aba3) wml_tabs_pane_g2_ParamLimits

0xc4e5,	// (0x0003aba3) wml_tabs_pane_g2

0xc4f9,	// (0x0003abb7) wml_tabs_pane_g3_ParamLimits

0xc4f9,	// (0x0003abb7) wml_tabs_pane_g3

0x4f8d,	// (0x0003364b) wml_tabs_2_active_pane_ParamLimits

0x4f8d,	// (0x0003364b) wml_tabs_2_active_pane

0x4fa1,	// (0x0003365f) wml_tabs_2_passive_pane_ParamLimits

0x4fa1,	// (0x0003365f) wml_tabs_2_passive_pane

0x4fb5,	// (0x00033673) wml_tabs_3_active_pane_cp_ParamLimits

0x4fb5,	// (0x00033673) wml_tabs_3_active_pane_cp

0x4fca,	// (0x00033688) wml_tabs_3_passive_pane_ParamLimits

0x4fca,	// (0x00033688) wml_tabs_3_passive_pane

0x4fdd,	// (0x0003369b) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fdd,	// (0x0003369b) wml_tabs_3_passive_pane_cp

0x4ff4,	// (0x000336b2) tabs_4_active_pane

0x4ffc,	// (0x000336ba) tabs_4_passive_pane

0x5006,	// (0x000336c4) tabs_4_passive_pane_cp

0x500e,	// (0x000336cc) tabs_4_passive_pane_cp2

0x44e7,	// (0x00032ba5) aid_height_text

0x3b24,	// (0x000321e2) mup_volume_cont_pane_ParamLimits

0x3b24,	// (0x000321e2) mup_volume_cont_pane

0x13c8,	// (0x0002fa86) aid_size_cell_pinb

0x13d2,	// (0x0002fa90) aid_size_list_pinb

0x4ef6,	// (0x000335b4) mup2_volume_cont_pane_ParamLimits

0x4ef6,	// (0x000335b4) mup2_volume_cont_pane

0x5018,	// (0x000336d6) mup2_volume_cont_pane_g1_ParamLimits

0x5018,	// (0x000336d6) mup2_volume_cont_pane_g1

0x108e,	// (0x0002f74c) aid_size_cell_touch_ParamLimits

0x108e,	// (0x0002f74c) aid_size_cell_touch

0x12b8,	// (0x0002f976) touch_pane_ParamLimits

0x12b8,	// (0x0002f976) touch_pane

0x9b91,	// (0x0003824f) main_rss2_pane

0xc516,	// (0x0003abd4) listscroll_rss2_pane

0xc51f,	// (0x0003abdd) rss2_navigation_pane

0xc527,	// (0x0003abe5) list_rss2_pane

0xadde,	// (0x0003949c) scroll_pane_cp22

0xc52f,	// (0x0003abed) rss2_navigation_pane_g1

0xc538,	// (0x0003abf6) rss2_navigation_pane_g2

0xc540,	// (0x0003abfe) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0003dd55) rss2_navigation_pane_g

0xc548,	// (0x0003ac06) rss2_navigation_pane_t1

0x5051,	// (0x0003370f) rss2_list_single_pane_ParamLimits

0x5051,	// (0x0003370f) rss2_list_single_pane

0xc556,	// (0x0003ac14) rss2_list_single_pane_t2

0xc564,	// (0x0003ac22) rss2_list_single_pane_t3_ParamLimits

0xc564,	// (0x0003ac22) rss2_list_single_pane_t3

0xc581,	// (0x0003ac3f) rss2_list_single_pane_t4

0x3267,	// (0x00031925) smil_status_pane_g1

0x9bf2,	// (0x000382b0) main_image2_pane_ParamLimits

0x9bf2,	// (0x000382b0) main_image2_pane

0x0292,	// (0x0002e950) main_camera2_pane_g9_ParamLimits

0x0292,	// (0x0002e950) main_camera2_pane_g9

0x03ae,	// (0x0002ea6c) main_camera2_pane_t5_ParamLimits

0x03ae,	// (0x0002ea6c) main_camera2_pane_t5

0x4d97,	// (0x00033455) main_camera2_pane_t6_ParamLimits

0x4d97,	// (0x00033455) main_camera2_pane_t6

0x5067,	// (0x00033725) main_image2_pane_g1_ParamLimits

0x5067,	// (0x00033725) main_image2_pane_g1

0x4201,	// (0x000328bf) smil2_video_pane_ParamLimits

0x4201,	// (0x000328bf) smil2_video_pane

0x9baf,	// (0x0003826d) aid_zoom_text_primary_cp

0x9be8,	// (0x000382a6) popup_preview_fixed_window

0xa606,	// (0x00038cc4) im_reading_pane_g1

0x0164,	// (0x0002e822) cams2_bc_adjust_pane_cp_ParamLimits

0x0164,	// (0x0002e822) cams2_bc_adjust_pane_cp

0x03d4,	// (0x0002ea92) cams2_bc_adjust_pane_ParamLimits

0x03d4,	// (0x0002ea92) cams2_bc_adjust_pane

0xcc07,	// (0x0003b2c5) cams2_bc_adjust_pane_g1

0x507d,	// (0x0003373b) cams2_slider_pane

0x5086,	// (0x00033744) cams2_slider_pane_g1

0x508f,	// (0x0003374d) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0003dd5c) cams2_slider_pane_g

0xfd62,	// (0x0002e420) calc_display_pane_ParamLimits

0xfd8a,	// (0x0002e448) calc_paper_pane_ParamLimits

0xfdad,	// (0x0002e46b) grid_calc_pane_ParamLimits

0x3524,	// (0x00031be2) popup_clock_digital_window_t1_ParamLimits

0xb1f2,	// (0x000398b0) main_image_pane_t1

0xfd44,	// (0x0002e402) aid_size_cell_calc_ParamLimits

0xfd44,	// (0x0002e402) aid_size_cell_calc

0x4819,	// (0x00032ed7) popup_blid_sat_info2_window_ParamLimits

0x4819,	// (0x00032ed7) popup_blid_sat_info2_window

0xc597,	// (0x0003ac55) aid_size_cell_blid

0xc59f,	// (0x0003ac5d) bg_popup_window_pane_cp07

0xc5c2,	// (0x0003ac80) grid_popup_blid_pane

0xc5cc,	// (0x0003ac8a) heading_pane_cp05_ParamLimits

0xc5cc,	// (0x0003ac8a) heading_pane_cp05

0xc696,	// (0x0003ad54) cell_popup_blid_pane_ParamLimits

0xc696,	// (0x0003ad54) cell_popup_blid_pane

0xc6c0,	// (0x0003ad7e) cell_popup_blid_pane_g1

0xc6c8,	// (0x0003ad86) cell_popup_blid_pane_t1

0x4ec6,	// (0x00033584) mup2_indicator_pane_ParamLimits

0x4ec6,	// (0x00033584) mup2_indicator_pane

0xaf18,	// (0x000395d6) mup2_visualizer_osc_pane

0xc46c,	// (0x0003ab2a) mup2_visualizer_spec_pane_ParamLimits

0xc46c,	// (0x0003ab2a) mup2_visualizer_spec_pane

0x50a9,	// (0x00033767) mup2_spec_half_pane

0x50b2,	// (0x00033770) mup2_spec_half_pane_cp

0x50ba,	// (0x00033778) mup2_spec_bar_pane_ParamLimits

0x50ba,	// (0x00033778) mup2_spec_bar_pane

0xc40d,	// (0x0003aacb) mup2_spec_bar_pane_g1

0xc417,	// (0x0003aad5) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0003dccf) mup2_spec_bar_pane_g

0x50da,	// (0x00033798) mup2_osc_middle_pane

0xc429,	// (0x0003aae7) mup2_visualizer_osc_pane_g1

0x9c20,	// (0x000382de) popup_number_entry_window_t1_ParamLimits

0x9c33,	// (0x000382f1) popup_number_entry_window_t2_ParamLimits

0x9c45,	// (0x00038303) popup_number_entry_window_t3_ParamLimits

0x130a,	// (0x0002f9c8) popup_number_entry_window_t5_ParamLimits

0x130a,	// (0x0002f9c8) popup_number_entry_window_t5

0xf0d3,	// (0x0003d791) popup_number_entry_window_t_ParamLimits

0x9c57,	// (0x00038315) text_title_cp2_ParamLimits

0x3e65,	// (0x00032523) aid_hotspot_pointer_text2_pane

0x3ec7,	// (0x00032585) main_viewer_pane_g9_ParamLimits

0x3ec7,	// (0x00032585) main_viewer_pane_g9

0xa83f,	// (0x00038efd) cale_month_pane_t1_ParamLimits

0xa865,	// (0x00038f23) bg_cale_pane_ParamLimits

0xa87d,	// (0x00038f3b) list_cale_pane_ParamLimits

0xa88e,	// (0x00038f4c) listscroll_cale_day_pane_t1

0xa8a0,	// (0x00038f5e) scroll_pane_cp09_ParamLimits

0x3b5a,	// (0x00032218) main_mup_eq_pane_t1_ParamLimits

0x3b5a,	// (0x00032218) main_mup_eq_pane_t1

0x3b76,	// (0x00032234) main_mup_eq_pane_t2_ParamLimits

0x3b76,	// (0x00032234) main_mup_eq_pane_t2

0x3b92,	// (0x00032250) main_mup_eq_pane_t3_ParamLimits

0x3b92,	// (0x00032250) main_mup_eq_pane_t3

0x3bb0,	// (0x0003226e) main_mup_eq_pane_t4_ParamLimits

0x3bb0,	// (0x0003226e) main_mup_eq_pane_t4

0x3bce,	// (0x0003228c) main_mup_eq_pane_t5_ParamLimits

0x3bce,	// (0x0003228c) main_mup_eq_pane_t5

0x3bec,	// (0x000322aa) main_mup_eq_pane_t6_ParamLimits

0x3bec,	// (0x000322aa) main_mup_eq_pane_t6

0x3c02,	// (0x000322c0) main_mup_eq_pane_t7_ParamLimits

0x3c02,	// (0x000322c0) main_mup_eq_pane_t7

0x3c18,	// (0x000322d6) main_mup_eq_pane_t8_ParamLimits

0x3c18,	// (0x000322d6) main_mup_eq_pane_t8

0x3c2e,	// (0x000322ec) main_mup_eq_pane_t9_ParamLimits

0x3c2e,	// (0x000322ec) main_mup_eq_pane_t9

0x3c4a,	// (0x00032308) main_mup_eq_pane_t10_ParamLimits

0x3c4a,	// (0x00032308) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0003db1e) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0003db1e) main_mup_eq_pane_t

0x3d1f,	// (0x000323dd) mup_equalizer_pane_cp5_ParamLimits

0x3d37,	// (0x000323f5) mup_equalizer_pane_cp6_ParamLimits

0x3d4f,	// (0x0003240d) mup_equalizer_pane_cp7_ParamLimits

0x9b91,	// (0x0003824f) main_gallery_pane

0xc432,	// (0x0003aaf0) smil2_volume_pane

0xc43a,	// (0x0003aaf8) smil_status_volume_pane_g1_ParamLimits

0xc44d,	// (0x0003ab0b) smil_status_volume_pane_g2_ParamLimits

0x4bb2,	// (0x00033270) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0003dcd4) smil_status_volume_pane_g_ParamLimits

0xc59f,	// (0x0003ac5d) bg_popup_window_pane_cp07_ParamLimits

0xc5ad,	// (0x0003ac6b) blid_firmament_pane

0x50e3,	// (0x000337a1) aid_size_cell_gallery_ParamLimits

0x50e3,	// (0x000337a1) aid_size_cell_gallery

0x50f9,	// (0x000337b7) grid_gallery_pane_ParamLimits

0x50f9,	// (0x000337b7) grid_gallery_pane

0x5114,	// (0x000337d2) cell_gallery_pane_ParamLimits

0x5114,	// (0x000337d2) cell_gallery_pane

0xc6d6,	// (0x0003ad94) bg_cell_gallery_focus_pane_ParamLimits

0xc6d6,	// (0x0003ad94) bg_cell_gallery_focus_pane

0xc6e8,	// (0x0003ada6) cell_gallery_pane_g1_ParamLimits

0xc6e8,	// (0x0003ada6) cell_gallery_pane_g1

0x515f,	// (0x0003381d) cell_gallery_pane_g2_ParamLimits

0x515f,	// (0x0003381d) cell_gallery_pane_g2

0x516c,	// (0x0003382a) cell_gallery_pane_g3_ParamLimits

0x516c,	// (0x0003382a) cell_gallery_pane_g3

0xc6f4,	// (0x0003adb2) cell_gallery_pane_g4_ParamLimits

0xc6f4,	// (0x0003adb2) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0003dd82) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0003dd82) cell_gallery_pane_g

0xc700,	// (0x0003adbe) bg_cell_gallery_focus_pane_g1

0xc708,	// (0x0003adc6) bg_cell_gallery_focus_pane_g2

0xc710,	// (0x0003adce) bg_cell_gallery_focus_pane_g3

0xc718,	// (0x0003add6) bg_cell_gallery_focus_pane_g4

0xc720,	// (0x0003adde) bg_cell_gallery_focus_pane_g5

0xc728,	// (0x0003ade6) bg_cell_gallery_focus_pane_g6

0xc730,	// (0x0003adee) bg_cell_gallery_focus_pane_g7

0xc738,	// (0x0003adf6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0003dd8b) bg_cell_gallery_focus_pane_g

0xc740,	// (0x0003adfe) aid_firma_cardinal

0xc754,	// (0x0003ae12) blid_firmament_pane_t1

0xc76b,	// (0x0003ae29) blid_firmament_pane_t2

0xc782,	// (0x0003ae40) blid_firmament_pane_t3

0xc799,	// (0x0003ae57) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0003dd9c) blid_firmament_pane_t

0xc7b0,	// (0x0003ae6e) blid_sat_info_pane

0xc7c0,	// (0x0003ae7e) blid_sat_info_pane_g1

0xc7c0,	// (0x0003ae7e) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0003dda5) blid_sat_info_pane_g

0xc7ca,	// (0x0003ae88) blid_sat_info_pane_t1

0xc7d8,	// (0x0003ae96) smil2_volume_content_pane

0xc7e1,	// (0x0003ae9f) smil2_volume_pane_g1

0xc7e9,	// (0x0003aea7) smil2_volume_content_pane_g1

0xc7f2,	// (0x0003aeb0) smil2_volume_content_pane_g2

0xc7fb,	// (0x0003aeb9) smil2_volume_content_pane_g3

0xc804,	// (0x0003aec2) smil2_volume_content_pane_g4

0xc80d,	// (0x0003aecb) smil2_volume_content_pane_g5

0xc816,	// (0x0003aed4) smil2_volume_content_pane_g6

0xc81f,	// (0x0003aedd) smil2_volume_content_pane_g7

0xc828,	// (0x0003aee6) smil2_volume_content_pane_g8

0xc831,	// (0x0003aeef) smil2_volume_content_pane_g9

0xc83a,	// (0x0003aef8) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0003ddaa) smil2_volume_content_pane_g

0x1a67,	// (0x00030125) cale_week_day_heading_pane_t1_ParamLimits

0x1ab1,	// (0x0003016f) cale_week_day_heading_pane_t2_ParamLimits

0x1b00,	// (0x000301be) cale_week_day_heading_pane_t3_ParamLimits

0x1b4f,	// (0x0003020d) cale_week_day_heading_pane_t4_ParamLimits

0x1b9e,	// (0x0003025c) cale_week_day_heading_pane_t5_ParamLimits

0x1bed,	// (0x000302ab) cale_week_day_heading_pane_t6_ParamLimits

0x1c40,	// (0x000302fe) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0003d896) cale_week_day_heading_pane_t_ParamLimits

0xa4ac,	// (0x00038b6a) bg_cale_side_pane_ParamLimits

0xfe82,	// (0x0002e540) cale_week_time_pane_t1_ParamLimits

0xfebc,	// (0x0002e57a) cale_week_time_pane_t2_ParamLimits

0xfef6,	// (0x0002e5b4) cale_week_time_pane_t3_ParamLimits

0xff30,	// (0x0002e5ee) cale_week_time_pane_t4_ParamLimits

0xff6a,	// (0x0002e628) cale_week_time_pane_t5_ParamLimits

0xffa4,	// (0x0002e662) cale_week_time_pane_t6_ParamLimits

0xffde,	// (0x0002e69c) cale_week_time_pane_t7_ParamLimits

0x0018,	// (0x0002e6d6) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0003d8a5) cale_week_time_pane_t_ParamLimits

0x1c8a,	// (0x00030348) cell_cale_week_pane_g2_ParamLimits

0xa4ac,	// (0x00038b6a) bg_cale_side_pane_cp01_ParamLimits

0x2fae,	// (0x0003166c) cale_month_week_pane_t1_ParamLimits

0x2fe7,	// (0x000316a5) cale_month_week_pane_t2_ParamLimits

0x3020,	// (0x000316de) cale_month_week_pane_t3_ParamLimits

0x3059,	// (0x00031717) cale_month_week_pane_t4_ParamLimits

0x3092,	// (0x00031750) cale_month_week_pane_t5_ParamLimits

0x30cb,	// (0x00031789) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0003d97e) cale_month_week_pane_t_ParamLimits

0x3250,	// (0x0003190e) cell_cale_month_pane_g1_ParamLimits

0x9b91,	// (0x0003824f) main_cale_event_viewer_pane

0x9b91,	// (0x0003824f) listscroll_cale_event_viewer_pane

0xc843,	// (0x0003af01) list_cale_ev_pane

0xc84b,	// (0x0003af09) scroll_pane_cp023

0x5179,	// (0x00033837) field_cale_ev_pane_ParamLimits

0x5179,	// (0x00033837) field_cale_ev_pane

0xc857,	// (0x0003af15) field_cale_ev_content_pane_ParamLimits

0xc857,	// (0x0003af15) field_cale_ev_content_pane

0xc863,	// (0x0003af21) field_cale_ev_pane_g1_ParamLimits

0xc863,	// (0x0003af21) field_cale_ev_pane_g1

0xc86f,	// (0x0003af2d) field_cale_ev_pane_g2_ParamLimits

0xc86f,	// (0x0003af2d) field_cale_ev_pane_g2

0xc887,	// (0x0003af45) field_cale_ev_pane_g3_ParamLimits

0xc887,	// (0x0003af45) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0003ddbf) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0003ddbf) field_cale_ev_pane_g

0xc89f,	// (0x0003af5d) field_cale_ev_pane_t1_ParamLimits

0xc89f,	// (0x0003af5d) field_cale_ev_pane_t1

0x519d,	// (0x0003385b) field_cale_ev_content_pane_t1_ParamLimits

0x519d,	// (0x0003385b) field_cale_ev_content_pane_t1

0x3e0b,	// (0x000324c9) bg_button_pane_cp01

0x1733,	// (0x0002fdf1) listscroll_cale_week_pane_ParamLimits

0x1749,	// (0x0002fe07) popup_toolbar_window_cp01

0xa478,	// (0x00038b36) listscroll_cale_week_pane_t1_ParamLimits

0x32ee,	// (0x000319ac) listscroll_cale_day_pane_ParamLimits

0x3306,	// (0x000319c4) popup_toolbar_window_cp02

0xa88e,	// (0x00038f4c) listscroll_cale_day_pane_t1_ParamLimits

0x1733,	// (0x0002fdf1) main_cale_month_pane_ParamLimits

0x4a99,	// (0x00033157) popup_toolbar_window_cp03_ParamLimits

0x4a99,	// (0x00033157) popup_toolbar_window_cp03

0x40bf,	// (0x0003277d) main_image_pane_g2_ParamLimits

0x40bf,	// (0x0003277d) main_image_pane_g2

0x40d0,	// (0x0003278e) main_image_pane_g3_ParamLimits

0x40d0,	// (0x0003278e) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0003dbb0) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0003dbb0) main_image_pane_g

0xb1f2,	// (0x000398b0) main_image_pane_t1_ParamLimits

0x40e1,	// (0x0003279f) main_image_pane_t2_ParamLimits

0x40e1,	// (0x0003279f) main_image_pane_t2

0x40f3,	// (0x000327b1) main_image_pane_t3_ParamLimits

0x40f3,	// (0x000327b1) main_image_pane_t3

0x411b,	// (0x000327d9) main_image_pane_t4_ParamLimits

0x411b,	// (0x000327d9) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0003dbb7) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0003dbb7) main_image_pane_t

0x413b,	// (0x000327f9) popup_image_details_window_cp01

0x4145,	// (0x00032803) popup_toobar_trans_pane_cp01_ParamLimits

0x4145,	// (0x00032803) popup_toobar_trans_pane_cp01

0x490c,	// (0x00032fca) popup_image_details_window_ParamLimits

0x490c,	// (0x00032fca) popup_image_details_window

0xc391,	// (0x0003aa4f) popup_image_focus_window

0x011e,	// (0x0002e7dc) camera2_autofocus_pane_ParamLimits

0x011e,	// (0x0002e7dc) camera2_autofocus_pane

0x9b91,	// (0x0003824f) bg_popup_sub_pane_cp06

0xc8b6,	// (0x0003af74) popup_image_focus_window_g1

0xc8be,	// (0x0003af7c) popup_image_focus_window_g2

0xc8c6,	// (0x0003af84) popup_image_focus_window_g3

0xc8ce,	// (0x0003af8c) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0003ddc6) popup_image_focus_window_g

0xc8d6,	// (0x0003af94) popup_image_focus_window_t1

0xc8e4,	// (0x0003afa2) popup_image_focus_window_t2

0xc8f4,	// (0x0003afb2) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0003ddcf) popup_image_focus_window_t

0xc902,	// (0x0003afc0) camera2_autofocus_pane_g1

0x9bf2,	// (0x000382b0) bg_tb_trans_pane_cp01

0xc910,	// (0x0003afce) popup_image_details_window_g1

0xc923,	// (0x0003afe1) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0003dde1) popup_image_details_window_g

0xc94c,	// (0x0003b00a) popup_image_details_window_t1

0xc95e,	// (0x0003b01c) popup_image_details_window_t2

0xc977,	// (0x0003b035) popup_image_details_window_t3

0xc98b,	// (0x0003b049) popup_image_details_window_t4

0xc9a6,	// (0x0003b064) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0003dde8) popup_image_details_window_t

0xa31f,	// (0x000389dd) bg_calc_paper_pane_ParamLimits

0x157e,	// (0x0002fc3c) grid_highlight_pane_cp013

0x1588,	// (0x0002fc46) list_calc_pane_ParamLimits

0x159a,	// (0x0002fc58) scroll_pane_cp024

0xa333,	// (0x000389f1) bg_calc_display_pane_ParamLimits

0xfddb,	// (0x0002e499) calc_display_pane_t1_ParamLimits

0xfded,	// (0x0002e4ab) calc_display_pane_t2_ParamLimits

0x15a2,	// (0x0002fc60) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0003d818) calc_display_pane_t_ParamLimits

0xfe56,	// (0x0002e514) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0003d835) cell_calc_pane_g

0xfe5f,	// (0x0002e51d) cell_calc_pane_t1

0xa392,	// (0x00038a50) grid_highlight_pane_cp02_ParamLimits

0xa3a8,	// (0x00038a66) toolbar_button_pane_cp01_ParamLimits

0xa3a8,	// (0x00038a66) toolbar_button_pane_cp01

0xb237,	// (0x000398f5) temp_image_control_pane_ParamLimits

0xb237,	// (0x000398f5) temp_image_control_pane

0x9bf2,	// (0x000382b0) main_mp3_pane

0xc9c0,	// (0x0003b07e) temp_image_control_pane_g1_ParamLimits

0xc9c0,	// (0x0003b07e) temp_image_control_pane_g1

0xc9ce,	// (0x0003b08c) temp_image_control_pane_g2_ParamLimits

0xc9ce,	// (0x0003b08c) temp_image_control_pane_g2

0xc9e0,	// (0x0003b09e) temp_image_control_pane_g3_ParamLimits

0xc9e0,	// (0x0003b09e) temp_image_control_pane_g3

0x51ee,	// (0x000338ac) temp_image_control_pane_g4_ParamLimits

0x51ee,	// (0x000338ac) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0003ddf3) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0003ddf3) temp_image_control_pane_g

0xc9c0,	// (0x0003b07e) main_mp3_pane_g1

0x5201,	// (0x000338bf) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0003ddfc) main_mp3_pane_g

0xca23,	// (0x0003b0e1) main_mp3_pane_t1

0xa511,	// (0x00038bcf) main_camera_pane_g8_ParamLimits

0xa511,	// (0x00038bcf) main_camera_pane_g8

0x1f65,	// (0x00030623) main_video_pane_g7_ParamLimits

0x1f65,	// (0x00030623) main_video_pane_g7

0x4db0,	// (0x0003346e) main_camera2_pane_t7_ParamLimits

0x4db0,	// (0x0003346e) main_camera2_pane_t7

0xa65d,	// (0x00038d1b) scroll_pane_cp025_ParamLimits

0xa65d,	// (0x00038d1b) scroll_pane_cp025

0xa671,	// (0x00038d2f) scroll_pane_cp026_ParamLimits

0xa671,	// (0x00038d2f) scroll_pane_cp026

0xa680,	// (0x00038d3e) wml_content_pane_ParamLimits

0x9b91,	// (0x0003824f) main_touch_calib_pane

0x52d3,	// (0x00033991) main_touch_calib_pane_g1

0x52e5,	// (0x000339a3) main_touch_calib_pane_g2

0x52f7,	// (0x000339b5) main_touch_calib_pane_g3

0x5309,	// (0x000339c7) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0003de1a) main_touch_calib_pane_g

0x531b,	// (0x000339d9) main_touch_calib_pane_t1

0x5335,	// (0x000339f3) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0003de23) main_touch_calib_pane_t

0xae59,	// (0x00039517) mup_progress_pane_cp02

0xae78,	// (0x00039536) navi_pane_g1

0xaeda,	// (0x00039598) navi_pane_mp_t3

0x9bf2,	// (0x000382b0) main_mp3_pane_ParamLimits

0x4adb,	// (0x00033199) navi_pane_ParamLimits

0xc9c0,	// (0x0003b07e) main_mp3_pane_g1_ParamLimits

0x5201,	// (0x000338bf) main_mp3_pane_g2_ParamLimits

0x520d,	// (0x000338cb) main_mp3_pane_g3_ParamLimits

0x520d,	// (0x000338cb) main_mp3_pane_g3

0x521b,	// (0x000338d9) main_mp3_pane_g4_ParamLimits

0x521b,	// (0x000338d9) main_mp3_pane_g4

0xc9f0,	// (0x0003b0ae) main_mp3_pane_g5_ParamLimits

0xc9f0,	// (0x0003b0ae) main_mp3_pane_g5

0xc9fe,	// (0x0003b0bc) main_mp3_pane_g6_ParamLimits

0xc9fe,	// (0x0003b0bc) main_mp3_pane_g6

0xca0b,	// (0x0003b0c9) main_mp3_pane_g7_ParamLimits

0xca0b,	// (0x0003b0c9) main_mp3_pane_g7

0xca17,	// (0x0003b0d5) main_mp3_pane_g8_ParamLimits

0xca17,	// (0x0003b0d5) main_mp3_pane_g8

0xf73e,	// (0x0003ddfc) main_mp3_pane_g_ParamLimits

0x5227,	// (0x000338e5) main_mp3_pane_t2

0x5235,	// (0x000338f3) main_mp3_pane_t3

0xca31,	// (0x0003b0ef) main_mp3_pane_t4

0xca3f,	// (0x0003b0fd) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0003de0d) main_mp3_pane_t

0xca4d,	// (0x0003b10b) mup_progress_pane_cp01

0x9baf,	// (0x0003826d) aid_zoom_text_secondary2

0xc843,	// (0x0003af01) list_cale_ev2_pane

0xc84b,	// (0x0003af09) scroll_pane_cp023_ParamLimits

0x538f,	// (0x00033a4d) field_cale_ev2_pane_ParamLimits

0x538f,	// (0x00033a4d) field_cale_ev2_pane

0x53b3,	// (0x00033a71) field_cale_ev2_pane_g1_ParamLimits

0x53b3,	// (0x00033a71) field_cale_ev2_pane_g1

0x53bf,	// (0x00033a7d) field_cale_ev2_pane_g2_ParamLimits

0x53bf,	// (0x00033a7d) field_cale_ev2_pane_g2

0x53d7,	// (0x00033a95) field_cale_ev2_pane_g3_ParamLimits

0x53d7,	// (0x00033a95) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0003de2e) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0003de2e) field_cale_ev2_pane_g

0x53ef,	// (0x00033aad) field_cale_ev2_pane_t1_ParamLimits

0x53ef,	// (0x00033aad) field_cale_ev2_pane_t1

0x5406,	// (0x00033ac4) field_cale_ev2_pane_t2_ParamLimits

0x5406,	// (0x00033ac4) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0003de37) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0003de37) field_cale_ev2_pane_t

0x3f5c,	// (0x0003261a) main_postcard_pane_g5_ParamLimits

0x3f5c,	// (0x0003261a) main_postcard_pane_g5

0x3f72,	// (0x00032630) main_postcard_pane_g6_ParamLimits

0x3f72,	// (0x00032630) main_postcard_pane_g6

0x1d11,	// (0x000303cf) camera2_autofocus_pane_cp_ParamLimits

0x1d11,	// (0x000303cf) camera2_autofocus_pane_cp

0x9bf2,	// (0x000382b0) main_mup3_pane

0x543b,	// (0x00033af9) main_mup3_pane_g1_ParamLimits

0x543b,	// (0x00033af9) main_mup3_pane_g1

0x545d,	// (0x00033b1b) main_mup3_pane_g2_ParamLimits

0x545d,	// (0x00033b1b) main_mup3_pane_g2

0x54e0,	// (0x00033b9e) main_mup3_pane_g3_ParamLimits

0x54e0,	// (0x00033b9e) main_mup3_pane_g3

0x5528,	// (0x00033be6) main_mup3_pane_g4_ParamLimits

0x5528,	// (0x00033be6) main_mup3_pane_g4

0x556e,	// (0x00033c2c) main_mup3_pane_g5_ParamLimits

0x556e,	// (0x00033c2c) main_mup3_pane_g5

0x55b6,	// (0x00033c74) main_mup3_pane_g6_ParamLimits

0x55b6,	// (0x00033c74) main_mup3_pane_g6

0xca61,	// (0x0003b11f) main_mup3_pane_g7_ParamLimits

0xca61,	// (0x0003b11f) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0003de47) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0003de47) main_mup3_pane_g

0x5636,	// (0x00033cf4) main_mup3_pane_t1_ParamLimits

0x5636,	// (0x00033cf4) main_mup3_pane_t1

0x56a4,	// (0x00033d62) main_mup3_pane_t2_ParamLimits

0x56a4,	// (0x00033d62) main_mup3_pane_t2

0x577a,	// (0x00033e38) main_mup3_pane_t4_ParamLimits

0x577a,	// (0x00033e38) main_mup3_pane_t4

0x57d8,	// (0x00033e96) main_mup3_pane_t5_ParamLimits

0x57d8,	// (0x00033e96) main_mup3_pane_t5

0x5892,	// (0x00033f50) main_mup3_pane_t6_ParamLimits

0x5892,	// (0x00033f50) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0003de58) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0003de58) main_mup3_pane_t

0x594a,	// (0x00034008) mup3_progress_pane_ParamLimits

0x594a,	// (0x00034008) mup3_progress_pane

0x59dc,	// (0x0003409a) popup_mup3_control_window_ParamLimits

0x59dc,	// (0x0003409a) popup_mup3_control_window

0xca6f,	// (0x0003b12d) popup_mup3_text_window

0x5a12,	// (0x000340d0) mup3_progress_pane_t1

0x5a30,	// (0x000340ee) mup3_progress_pane_t2

0xca77,	// (0x0003b135) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0003de65) mup3_progress_pane_t

0xca94,	// (0x0003b152) mup_progress_pane_cp03

0x9b91,	// (0x0003824f) bg_tb_trans_pane_cp04

0x5a4e,	// (0x0003410c) mup3_volume_pane

0x5a56,	// (0x00034114) popup_mup3_control_window_g1

0x5a5f,	// (0x0003411d) mup3_volume_pane_g1

0x5a68,	// (0x00034126) mup3_volume_pane_g2

0x5a71,	// (0x0003412f) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0003de6c) mup3_volume_pane_g

0x9b91,	// (0x0003824f) bg_tb_trans_pane_cp03

0xcaa4,	// (0x0003b162) popup_mup3_text_window_g1

0xcaac,	// (0x0003b16a) popup_mup3_text_window_t1

0xa37b,	// (0x00038a39) list_calc_item_pane_g1_ParamLimits

0xc50d,	// (0x0003abcb) mup_volume_pane_cp_g1

0x534f,	// (0x00033a0d) main_touch_calib_pane_t3

0x5363,	// (0x00033a21) main_touch_calib_pane_t4

0x5379,	// (0x00033a37) main_touch_calib_pane_t5

0x9b9b,	// (0x00038259) aid_cell_size_toolbar2

0x9ba3,	// (0x00038261) aid_popup3_width_pane

0x9baf,	// (0x0003826d) aid_zoom_text_msg_primary

0x00b0,	// (0x0002e76e) vorec_t7

0xa33f,	// (0x000389fd) bg_calc_paper_pane_g1_ParamLimits

0xa34b,	// (0x00038a09) bg_calc_paper_pane_g2_ParamLimits

0xa357,	// (0x00038a15) bg_calc_paper_pane_g3_ParamLimits

0xa363,	// (0x00038a21) bg_calc_paper_pane_g4_ParamLimits

0xa36f,	// (0x00038a2d) bg_calc_paper_pane_g5_ParamLimits

0x15b4,	// (0x0002fc72) bg_calc_paper_pane_g6_ParamLimits

0x15c7,	// (0x0002fc85) bg_calc_paper_pane_g7_ParamLimits

0x15da,	// (0x0002fc98) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0003d81f) bg_calc_paper_pane_g_ParamLimits

0x15eb,	// (0x0002fca9) calc_bg_paper_pane_g9_ParamLimits

0x1e73,	// (0x00030531) image_qvga_pane_ParamLimits

0x1e73,	// (0x00030531) image_qvga_pane

0xa26e,	// (0x0003892c) bg_popup_sub_pane_cp04_ParamLimits

0xb16e,	// (0x0003982c) popup_mup_playback_window_g1_ParamLimits

0xb17a,	// (0x00039838) popup_mup_playback_window_t1_ParamLimits

0xb18f,	// (0x0003984d) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0003dbab) popup_mup_playback_window_t_ParamLimits

0x4dde,	// (0x0003349c) main_mup2_pane_g3_ParamLimits

0x4dde,	// (0x0003349c) main_mup2_pane_g3

0x2272,	// (0x00030930) popup_toolbar_window_cp04

0xb575,	// (0x00039c33) popup_call2_audio_second_window_g3_ParamLimits

0xb575,	// (0x00039c33) popup_call2_audio_second_window_g3

0xb97f,	// (0x0003a03d) popup_call2_audio_first_window_g4_ParamLimits

0xb97f,	// (0x0003a03d) popup_call2_audio_first_window_g4

0xbffe,	// (0x0003a6bc) popup_call2_audio_in_window_g4_ParamLimits

0xbffe,	// (0x0003a6bc) popup_call2_audio_in_window_g4

0x40a1,	// (0x0003275f) aid_area_sk_bg_cut_ParamLimits

0x40a1,	// (0x0003275f) aid_area_sk_bg_cut

0xb1a4,	// (0x00039862) aid_area_sk_bg_cut_2_ParamLimits

0xb1a4,	// (0x00039862) aid_area_sk_bg_cut_2

0x514f,	// (0x0003380d) aid_placing_details_win

0x5157,	// (0x00033815) aid_placing_details_win_2

0xc902,	// (0x0003afc0) camera2_autofocus_pane_g1_ParamLimits

0x1257,	// (0x0002f915) popup_fixed_preview_cale_window_ParamLimits

0x1257,	// (0x0002f915) popup_fixed_preview_cale_window

0xaf29,	// (0x000395e7) navi_slider_pane_g3

0xaf32,	// (0x000395f0) navi_slider_pane_g4

0xaf3b,	// (0x000395f9) navi_slider_pane_g5

0xaf29,	// (0x000395e7) navi_slider_pane_g6

0x3902,	// (0x00031fc0) navi_slider_pane_g7

0xb05e,	// (0x0003971c) mup_scale_pane_g3

0xb067,	// (0x00039725) mup_scale_pane_g4

0xb070,	// (0x0003972e) mup_scale_pane_g5

0x3d67,	// (0x00032425) mup_scale_pane_g6

0x3d70,	// (0x0003242e) mup_scale_pane_g7

0xaf29,	// (0x000395e7) cams2_slider_pane_g3

0xc58f,	// (0x0003ac4d) cams2_slider_pane_g4

0x5098,	// (0x00033756) cams2_slider_pane_g5

0xaf29,	// (0x000395e7) cams2_slider_pane_g6

0x50a0,	// (0x0003375e) cams2_slider_pane_g7

0xc7c0,	// (0x0003ae7e) camera2_autofocus_pane_cp_g1

0xc363,	// (0x0003aa21) bg_popup_preview_window_pane_cp02_ParamLimits

0xc363,	// (0x0003aa21) bg_popup_preview_window_pane_cp02

0xcaba,	// (0x0003b178) list_fp_cale_pane_ParamLimits

0xcaba,	// (0x0003b178) list_fp_cale_pane

0xcac6,	// (0x0003b184) popup_fixed_preview_cale_window_t1_ParamLimits

0xcac6,	// (0x0003b184) popup_fixed_preview_cale_window_t1

0x5a7a,	// (0x00034138) popup_fixed_preview_cale_window_t2_ParamLimits

0x5a7a,	// (0x00034138) popup_fixed_preview_cale_window_t2

0x5a8f,	// (0x0003414d) popup_fixed_preview_cale_window_t3_ParamLimits

0x5a8f,	// (0x0003414d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0003de73) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0003de73) popup_fixed_preview_cale_window_t

0x5aa4,	// (0x00034162) list_single_fp_cale_pane_ParamLimits

0x5aa4,	// (0x00034162) list_single_fp_cale_pane

0xcae4,	// (0x0003b1a2) list_single_fp_cale_pane_g1_ParamLimits

0xcae4,	// (0x0003b1a2) list_single_fp_cale_pane_g1

0xcaf0,	// (0x0003b1ae) list_single_fp_cale_pane_g2_ParamLimits

0xcaf0,	// (0x0003b1ae) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0003de7a) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0003de7a) list_single_fp_cale_pane_g

0xcb09,	// (0x0003b1c7) list_single_fp_cale_pane_t1_ParamLimits

0xcb09,	// (0x0003b1c7) list_single_fp_cale_pane_t1

0xcb1b,	// (0x0003b1d9) list_single_fp_cale_pane_t2_ParamLimits

0xcb1b,	// (0x0003b1d9) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0003de81) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0003de81) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9b91,	// (0x0003824f) main_dialer_pane

0x5ab9,	// (0x00034177) aid_cell_size_keypad

0x5ac3,	// (0x00034181) dialer_ne_pane

0x5acd,	// (0x0003418b) grid_dialer_command_1_pane

0x5ad5,	// (0x00034193) grid_dialer_command_2_pane

0x5add,	// (0x0003419b) grid_dialer_keypad_pane

0x5aef,	// (0x000341ad) bg_popup_call_pane_cp06_ParamLimits

0x5aef,	// (0x000341ad) bg_popup_call_pane_cp06

0x5afb,	// (0x000341b9) dialer_ne_clear_pane_ParamLimits

0x5afb,	// (0x000341b9) dialer_ne_clear_pane

0xcb4e,	// (0x0003b20c) dialer_ne_pane_g1

0xcb56,	// (0x0003b214) dialer_ne_pane_t1_ParamLimits

0xcb56,	// (0x0003b214) dialer_ne_pane_t1

0x5b07,	// (0x000341c5) dialer_ne_pane_t2_ParamLimits

0x5b07,	// (0x000341c5) dialer_ne_pane_t2

0x5b31,	// (0x000341ef) dialer_ne_pane_t3_ParamLimits

0x5b31,	// (0x000341ef) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0003de86) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0003de86) dialer_ne_pane_t

0x5b61,	// (0x0003421f) dialer_ne_pane_t3_copy1_ParamLimits

0x5b61,	// (0x0003421f) dialer_ne_pane_t3_copy1

0x5b90,	// (0x0003424e) cell_dialer_keypad_pane_ParamLimits

0x5b90,	// (0x0003424e) cell_dialer_keypad_pane

0x5ba7,	// (0x00034265) cell_dialer_command_1_pane_ParamLimits

0x5ba7,	// (0x00034265) cell_dialer_command_1_pane

0x5bbd,	// (0x0003427b) cell_dialer_command_2_pane_ParamLimits

0x5bbd,	// (0x0003427b) cell_dialer_command_2_pane

0xcb68,	// (0x0003b226) bg_button_pane_cp02_ParamLimits

0xcb68,	// (0x0003b226) bg_button_pane_cp02

0x5bcc,	// (0x0003428a) cell_dialer_keypad_pane_g1_ParamLimits

0x5bcc,	// (0x0003428a) cell_dialer_keypad_pane_g1

0xcb68,	// (0x0003b226) bg_button_pane_cp03_ParamLimits

0xcb68,	// (0x0003b226) bg_button_pane_cp03

0x5be1,	// (0x0003429f) cell_dialer_command_1_pane_g1_ParamLimits

0x5be1,	// (0x0003429f) cell_dialer_command_1_pane_g1

0xcb74,	// (0x0003b232) bg_button_pane_cp04

0x5bf5,	// (0x000342b3) cell_dialer_command_2_pane_g1

0xaf18,	// (0x000395d6) bg_button_pane_cp06

0xcb7c,	// (0x0003b23a) dialer_ne_clear_pane_g1

0x3827,	// (0x00031ee5) navi_pane_g2

0x3855,	// (0x00031f13) navi_pane_g3

0x0002,

0xf3f0,	// (0x0003daae) navi_pane_g

0x3880,	// (0x00031f3e) navi_pane_mv_g2

0x38a7,	// (0x00031f65) navi_pane_mv_g5

0x38af,	// (0x00031f6d) navi_pane_mv_t1

0xa333,	// (0x000389f1) main_clock2_pane

0x5c40,	// (0x000342fe) main_clock2_list_pane_ParamLimits

0x5c40,	// (0x000342fe) main_clock2_list_pane

0x5c78,	// (0x00034336) main_clock2_pane_t1_ParamLimits

0x5c78,	// (0x00034336) main_clock2_pane_t1

0x5cb4,	// (0x00034372) main_clock2_pane_t2_ParamLimits

0x5cb4,	// (0x00034372) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0003de8d) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0003de8d) main_clock2_pane_t

0x5d54,	// (0x00034412) popup_clock_analogue_window_cp03_ParamLimits

0x5d54,	// (0x00034412) popup_clock_analogue_window_cp03

0x5d7b,	// (0x00034439) popup_clock_digital_window_cp02_ParamLimits

0x5d7b,	// (0x00034439) popup_clock_digital_window_cp02

0x5df4,	// (0x000344b2) main_clock2_list_single_pane_ParamLimits

0x5df4,	// (0x000344b2) main_clock2_list_single_pane

0xaf18,	// (0x000395d6) list_highlight_pane_cp05

0xcb98,	// (0x0003b256) main_clock2_list_single_pane_t1

0x2272,	// (0x00030930) popup_toolbar_window_cp04_ParamLimits

0x51be,	// (0x0003387c) camera2_autofocus_pane_g2_ParamLimits

0x51be,	// (0x0003387c) camera2_autofocus_pane_g2

0x51ca,	// (0x00033888) camera2_autofocus_pane_g3_ParamLimits

0x51ca,	// (0x00033888) camera2_autofocus_pane_g3

0x51d6,	// (0x00033894) camera2_autofocus_pane_g4_ParamLimits

0x51d6,	// (0x00033894) camera2_autofocus_pane_g4

0x51e2,	// (0x000338a0) camera2_autofocus_pane_g5_ParamLimits

0x51e2,	// (0x000338a0) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0003ddd6) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0003ddd6) camera2_autofocus_pane_g

0x541b,	// (0x00033ad9) camera2_autofocus_pane_cp_g2

0x5423,	// (0x00033ae1) camera2_autofocus_pane_cp_g3

0x542b,	// (0x00033ae9) camera2_autofocus_pane_cp_g4

0x5433,	// (0x00033af1) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0003de3c) camera2_autofocus_pane_cp_g

0x5ae7,	// (0x000341a5) popup_dialer_spcha_window

0x9b91,	// (0x0003824f) bg_popup_sub_pane_cp07

0xcba6,	// (0x0003b264) list_spcha_pane

0xcbae,	// (0x0003b26c) list_single_spcha_pane_ParamLimits

0xcbae,	// (0x0003b26c) list_single_spcha_pane

0x9b91,	// (0x0003824f) list_highlight_pane_cp06

0xcbbf,	// (0x0003b27d) list_single_spcha_pane_t1

0xbda8,	// (0x0003a466) popup_call2_audio_out_window_g4_ParamLimits

0xbda8,	// (0x0003a466) popup_call2_audio_out_window_g4

0x9b91,	// (0x0003824f) main_imed2_pane

0xc39b,	// (0x0003aa59) popup_imed_adjust2_window

0x4924,	// (0x00032fe2) popup_imed_trans_window_ParamLimits

0x4924,	// (0x00032fe2) popup_imed_trans_window

0xc5f8,	// (0x0003acb6) popup_blid_sat_info2_window_t1

0xc606,	// (0x0003acc4) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0003dd6b) popup_blid_sat_info2_window_t

0x5e28,	// (0x000344e6) aid_size_cell_colour_35

0x5e48,	// (0x00034506) aid_size_cell_colour_112

0x5e68,	// (0x00034526) aid_size_cell_effect

0xc36f,	// (0x0003aa2d) bg_tb_trans_pane_cp02

0xa9ac,	// (0x0003906a) heading_imed_pane

0x5e88,	// (0x00034546) listscroll_imed_pane

0xcbcd,	// (0x0003b28b) heading_imed_pane_g1

0xcbd5,	// (0x0003b293) heading_imed_pane_t1

0xcbe3,	// (0x0003b2a1) grid_imed_colour_35_pane_ParamLimits

0xcbe3,	// (0x0003b2a1) grid_imed_colour_35_pane

0x5e94,	// (0x00034552) grid_imed_effect_pane

0xcbff,	// (0x0003b2bd) list_imed_aspect_pane

0x5ea9,	// (0x00034567) scroll_pane_cp027_ParamLimits

0x5ea9,	// (0x00034567) scroll_pane_cp027

0x5eba,	// (0x00034578) cell_imed_effect_pane_ParamLimits

0x5eba,	// (0x00034578) cell_imed_effect_pane

0xcc0f,	// (0x0003b2cd) cell_imed_colour_pane_ParamLimits

0xcc0f,	// (0x0003b2cd) cell_imed_colour_pane

0xcc59,	// (0x0003b317) cell_imed_colour_pane_g1_ParamLimits

0xcc59,	// (0x0003b317) cell_imed_colour_pane_g1

0xcc6a,	// (0x0003b328) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc6a,	// (0x0003b328) hgihlgiht_grid_pane_cp016

0x5ee5,	// (0x000345a3) cell_imed_effect_pane_g1

0x5eed,	// (0x000345ab) grid_highlight_pane_cp017

0xcc7b,	// (0x0003b339) list_imed_single_pane_ParamLimits

0xcc7b,	// (0x0003b339) list_imed_single_pane

0x9b91,	// (0x0003824f) list_highlight_pane_cp07

0xcc8f,	// (0x0003b34d) list_imed_aspect_pane_comp1_t1

0xc36f,	// (0x0003aa2d) bg_tb_trans_pane_cp05

0xccb1,	// (0x0003b36f) popup_imed_adjust2_window_g1

0xccd8,	// (0x0003b396) popup_imed_adjust2_window_t1

0xccf0,	// (0x0003b3ae) slider_imed_adjust_pane

0xcd04,	// (0x0003b3c2) slider_imed_adjust_pane_g1

0xcd14,	// (0x0003b3d2) slider_imed_adjust_pane_g2

0xcd24,	// (0x0003b3e2) slider_imed_adjust_pane_g3

0xcd35,	// (0x0003b3f3) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0003deaa) slider_imed_adjust_pane_g

0x5ef6,	// (0x000345b4) aid_size_cell_clipart2

0x5f02,	// (0x000345c0) grid_imed_clipart_pane

0xcd46,	// (0x0003b404) scroll_pane_cp031

0x5f0c,	// (0x000345ca) cell_imed_clipart_pane_ParamLimits

0x5f0c,	// (0x000345ca) cell_imed_clipart_pane

0x5f29,	// (0x000345e7) cell_imed_clipart_pane_g1

0x9b91,	// (0x0003824f) grid_highlight_pane_cp014

0x5c55,	// (0x00034313) main_clock2_pane_g1_ParamLimits

0x5c55,	// (0x00034313) main_clock2_pane_g1

0x5d9b,	// (0x00034459) aid_call2_pane_cp10

0x5dad,	// (0x0003446b) aid_call_pane_cp10

0xae4d,	// (0x0003950b) popup_clock_analogue_window_cp10_g1

0xae4d,	// (0x0003950b) popup_clock_analogue_window_cp10_g2

0x5dbf,	// (0x0003447d) popup_clock_analogue_window_cp10_g3

0x5dbf,	// (0x0003447d) popup_clock_analogue_window_cp10_g4

0xae4d,	// (0x0003950b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0003de98) popup_clock_analogue_window_cp10_g

0x5dd5,	// (0x00034493) popup_clock_analogue_window_cp10_t1

0x0586,	// (0x0002ec44) clock_digital_number_pane_cp10_ParamLimits

0x0586,	// (0x0002ec44) clock_digital_number_pane_cp10

0x05a0,	// (0x0002ec5e) clock_digital_number_pane_cp11_ParamLimits

0x05a0,	// (0x0002ec5e) clock_digital_number_pane_cp11

0x05ba,	// (0x0002ec78) clock_digital_number_pane_cp12_ParamLimits

0x05ba,	// (0x0002ec78) clock_digital_number_pane_cp12

0x05d4,	// (0x0002ec92) clock_digital_number_pane_cp13_ParamLimits

0x05d4,	// (0x0002ec92) clock_digital_number_pane_cp13

0x05ee,	// (0x0002ecac) clock_digital_separator_pane_cp10_ParamLimits

0x05ee,	// (0x0002ecac) clock_digital_separator_pane_cp10

0x5e06,	// (0x000344c4) popup_clock_digital_window_cp02_t1_ParamLimits

0x5e06,	// (0x000344c4) popup_clock_digital_window_cp02_t1

0xa266,	// (0x00038924) clock_digital_number_pane_cp10_g1

0xa266,	// (0x00038924) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0003deb3) clock_digital_number_pane_cp10_g

0xa266,	// (0x00038924) clock_digital_separator_pane_cp10_g1

0xa266,	// (0x00038924) clock_digital_separator_pane_g2_cp10

0xaee8,	// (0x000395a6) navi_pane_vded_g4

0xaef1,	// (0x000395af) navi_pane_vded_g5

0xaefa,	// (0x000395b8) navi_pane_vded_t1

0x9b91,	// (0x0003824f) main_vded_pane

0x5f32,	// (0x000345f0) main_vded_pane_g1

0x5f3e,	// (0x000345fc) main_vded_pane_g2

0x5f4a,	// (0x00034608) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0003deb8) main_vded_pane_g

0x5f56,	// (0x00034614) main_vded_pane_t1

0x5f64,	// (0x00034622) main_vded_pane_t2

0x0001,

0xf801,	// (0x0003debf) main_vded_pane_t

0x5f72,	// (0x00034630) vded_slider_pane

0x5f7c,	// (0x0003463a) vded_video_pane

0xcd4e,	// (0x0003b40c) vded_video_pane_g1

0x5f86,	// (0x00034644) vded_video_pane_g2

0xc7c0,	// (0x0003ae7e) vded_video_pane_g3

0x0002,

0xf806,	// (0x0003dec4) vded_video_pane_g

0xcd58,	// (0x0003b416) vded_slider_pane_g1

0xc50d,	// (0x0003abcb) vded_slider_pane_g2

0xcd61,	// (0x0003b41f) vded_slider_pane_g3

0xcd6a,	// (0x0003b428) vded_slider_pane_g4

0xcd73,	// (0x0003b431) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0003decb) vded_slider_pane_g

0x59c6,	// (0x00034084) mup3_rocker_pane_ParamLimits

0x59c6,	// (0x00034084) mup3_rocker_pane

0x5f8f,	// (0x0003464d) mup3_control_keys_pane_g1

0x5f97,	// (0x00034655) mup3_control_keys_pane_g2

0x5f9f,	// (0x0003465d) mup3_control_keys_pane_g3

0x5fa7,	// (0x00034665) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0003ded6) mup3_control_keys_pane_g

0x128e,	// (0x0002f94c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x128e,	// (0x0002f94c) popup_toolbar2_fixed_window_cp01

0x59fc,	// (0x000340ba) popup_toolbar2_fixed_window_cp02_ParamLimits

0x59fc,	// (0x000340ba) popup_toolbar2_fixed_window_cp02

0xb6e7,	// (0x00039da5) popup_call2_audio_second_window_t4_ParamLimits

0xb6e7,	// (0x00039da5) popup_call2_audio_second_window_t4

0xbc15,	// (0x0003a2d3) popup_call2_audio_first_window_t6_ParamLimits

0xbc15,	// (0x0003a2d3) popup_call2_audio_first_window_t6

0xbeab,	// (0x0003a569) popup_call2_audio_out_window_t6_ParamLimits

0xbeab,	// (0x0003a569) popup_call2_audio_out_window_t6

0x9b91,	// (0x0003824f) main_vitu_pane

0x5fb7,	// (0x00034675) aid_size_cell_itu_ParamLimits

0x5fb7,	// (0x00034675) aid_size_cell_itu

0x9bf2,	// (0x000382b0) bg_popup_window_pane_cp08_ParamLimits

0x9bf2,	// (0x000382b0) bg_popup_window_pane_cp08

0x5fcd,	// (0x0003468b) field_vitu_entry_pane_ParamLimits

0x5fcd,	// (0x0003468b) field_vitu_entry_pane

0x5fe4,	// (0x000346a2) grid_vitu_function_pane_ParamLimits

0x5fe4,	// (0x000346a2) grid_vitu_function_pane

0x5fff,	// (0x000346bd) grid_vitu_itu_pane_ParamLimits

0x5fff,	// (0x000346bd) grid_vitu_itu_pane

0x601d,	// (0x000346db) cell_vitu_itu_pane_ParamLimits

0x601d,	// (0x000346db) cell_vitu_itu_pane

0x6043,	// (0x00034701) cell_vitu_function_pane_ParamLimits

0x6043,	// (0x00034701) cell_vitu_function_pane

0x9bf2,	// (0x000382b0) bg_popup_sub_pane_cp08_ParamLimits

0x9bf2,	// (0x000382b0) bg_popup_sub_pane_cp08

0x605e,	// (0x0003471c) field_vitu_entry_pane_t1_ParamLimits

0x605e,	// (0x0003471c) field_vitu_entry_pane_t1

0xcd94,	// (0x0003b452) field_vitu_entry_pane_t2_ParamLimits

0xcd94,	// (0x0003b452) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0003dee4) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0003dee4) field_vitu_entry_pane_t

0xcdb1,	// (0x0003b46f) bg_button_pane_cp05_ParamLimits

0xcdb1,	// (0x0003b46f) bg_button_pane_cp05

0x607e,	// (0x0003473c) cell_vitu_itu_pane_g1

0x6096,	// (0x00034754) cell_vitu_itu_pane_t1_ParamLimits

0x6096,	// (0x00034754) cell_vitu_itu_pane_t1

0x60a8,	// (0x00034766) cell_vitu_itu_pane_t2_ParamLimits

0x60a8,	// (0x00034766) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0003dee9) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0003dee9) cell_vitu_itu_pane_t

0xcdbf,	// (0x0003b47d) bg_button_pane_cp07

0x60dd,	// (0x0003479b) cell_vitu_function_pane_g1

0x14a4,	// (0x0002fb62) main_calc_pane_g1

0x10b2,	// (0x0002f770) aid_visual_content_pane

0x9b91,	// (0x0003824f) main_vradio_pane

0x60e6,	// (0x000347a4) main_vradio_pane_g1_ParamLimits

0x60e6,	// (0x000347a4) main_vradio_pane_g1

0xcdc9,	// (0x0003b487) main_vradio_pane_g2_ParamLimits

0xcdc9,	// (0x0003b487) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0003def0) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0003def0) main_vradio_pane_g

0x60fd,	// (0x000347bb) main_vradio_pane_t1_ParamLimits

0x60fd,	// (0x000347bb) main_vradio_pane_t1

0x6112,	// (0x000347d0) main_vradio_pane_t2_ParamLimits

0x6112,	// (0x000347d0) main_vradio_pane_t2

0xcdd6,	// (0x0003b494) main_vradio_pane_t3_ParamLimits

0xcdd6,	// (0x0003b494) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0003def5) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0003def5) main_vradio_pane_t

0x6127,	// (0x000347e5) vradio_rocker_control_pane_ParamLimits

0x6127,	// (0x000347e5) vradio_rocker_control_pane

0x6139,	// (0x000347f7) vradio_station_info_pane_ParamLimits

0x6139,	// (0x000347f7) vradio_station_info_pane

0xcdea,	// (0x0003b4a8) vradio_frequency_info_pane_ParamLimits

0xcdea,	// (0x0003b4a8) vradio_frequency_info_pane

0xc7c0,	// (0x0003ae7e) vradio_station_info_pane_g1

0xcdf9,	// (0x0003b4b7) vradio_station_info_pane_t1_ParamLimits

0xcdf9,	// (0x0003b4b7) vradio_station_info_pane_t1

0xce1b,	// (0x0003b4d9) vradio_station_info_pane_t2_ParamLimits

0xce1b,	// (0x0003b4d9) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0003defc) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0003defc) vradio_station_info_pane_t

0xce2d,	// (0x0003b4eb) vradio_tuning_pane

0xce35,	// (0x0003b4f3) vradio_rocker_control_pane_g1

0xce3d,	// (0x0003b4fb) vradio_rocker_control_pane_g2

0xce45,	// (0x0003b503) vradio_rocker_control_pane_g3

0xce4d,	// (0x0003b50b) vradio_rocker_control_pane_g4

0xce55,	// (0x0003b513) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0003df01) vradio_rocker_control_pane_g

0x6149,	// (0x00034807) vradio_frequency_info_pane_g1

0xce5d,	// (0x0003b51b) vradio_frequency_info_pane_t1_ParamLimits

0xce5d,	// (0x0003b51b) vradio_frequency_info_pane_t1

0x6153,	// (0x00034811) vradio_tuning_pane_g1

0x615e,	// (0x0003481c) vradio_tuning_pane_t1

0x9bbf,	// (0x0003827d) area_side_right_pane_ParamLimits

0x9bbf,	// (0x0003827d) area_side_right_pane

0xc32a,	// (0x0003a9e8) status_small_pane_g1

0xc332,	// (0x0003a9f0) status_small_pane_g2

0xc33b,	// (0x0003a9f9) status_small_pane_g3

0xc344,	// (0x0003aa02) status_small_pane_g4

0x0003,

0xf603,	// (0x0003dcc1) status_small_pane_g

0xc34d,	// (0x0003aa0b) status_small_pane_t1

0x9b91,	// (0x0003824f) main_video3_pane

0xce71,	// (0x0003b52f) cams_zoom_vslider_pane

0xce79,	// (0x0003b537) image3_wide_pane_ParamLimits

0xce79,	// (0x0003b537) image3_wide_pane

0xce93,	// (0x0003b551) image3_wide_small_pane

0xce9f,	// (0x0003b55d) main_video3_pane_g1_ParamLimits

0xce9f,	// (0x0003b55d) main_video3_pane_g1

0xcebb,	// (0x0003b579) main_video3_pane_g2_ParamLimits

0xcebb,	// (0x0003b579) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0003df0c) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0003df0c) main_video3_pane_g

0xced7,	// (0x0003b595) main_video3_pane_t1_ParamLimits

0xced7,	// (0x0003b595) main_video3_pane_t1

0xcf02,	// (0x0003b5c0) main_video3_pane_t2_ParamLimits

0xcf02,	// (0x0003b5c0) main_video3_pane_t2

0xcf2f,	// (0x0003b5ed) main_video3_pane_t3_ParamLimits

0xcf2f,	// (0x0003b5ed) main_video3_pane_t3

0x0002,

0xf853,	// (0x0003df11) main_video3_pane_t_ParamLimits

0xf853,	// (0x0003df11) main_video3_pane_t

0xcf5c,	// (0x0003b61a) cams_zoom_vslider_pane_g1

0xcf65,	// (0x0003b623) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0003df18) cams_zoom_vslider_pane_g

0xcf6d,	// (0x0003b62b) small_slider_vertical_pane

0xc7c0,	// (0x0003ae7e) small_slider_vertical_pane_g1

0xc7c0,	// (0x0003ae7e) small_slider_vertical_pane_g2

0xcf75,	// (0x0003b633) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0003df1d) small_slider_vertical_pane_g

0x9b91,	// (0x0003824f) main_hwr_training_pane

0xcf7e,	// (0x0003b63c) hwr_training_instruct_pane_ParamLimits

0xcf7e,	// (0x0003b63c) hwr_training_instruct_pane

0x616d,	// (0x0003482b) hwr_training_navi_pane_ParamLimits

0x616d,	// (0x0003482b) hwr_training_navi_pane

0x618c,	// (0x0003484a) hwr_training_write_pane_ParamLimits

0x618c,	// (0x0003484a) hwr_training_write_pane

0x9b91,	// (0x0003824f) bg_frame_shadow_pane

0xcfb5,	// (0x0003b673) hwr_training_write_pane_g1

0xcfbd,	// (0x0003b67b) hwr_training_write_pane_g2

0xcfc5,	// (0x0003b683) hwr_training_write_pane_g3

0xcfcd,	// (0x0003b68b) hwr_training_write_pane_g4

0xcfd5,	// (0x0003b693) hwr_training_write_pane_g5

0xcfdd,	// (0x0003b69b) hwr_training_write_pane_g6

0xcfe5,	// (0x0003b6a3) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0003df24) hwr_training_write_pane_g

0x61c7,	// (0x00034885) hwr_training_navi_pane_g1_ParamLimits

0x61c7,	// (0x00034885) hwr_training_navi_pane_g1

0x61d9,	// (0x00034897) hwr_training_navi_pane_g2_ParamLimits

0x61d9,	// (0x00034897) hwr_training_navi_pane_g2

0x61eb,	// (0x000348a9) hwr_training_navi_pane_g3_ParamLimits

0x61eb,	// (0x000348a9) hwr_training_navi_pane_g3

0x61fb,	// (0x000348b9) hwr_training_navi_pane_g4_ParamLimits

0x61fb,	// (0x000348b9) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0003df33) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0003df33) hwr_training_navi_pane_g

0x6208,	// (0x000348c6) hwr_training_navi_pane_t1

0x6216,	// (0x000348d4) list_single_hwr_training_instruct_pane_ParamLimits

0x6216,	// (0x000348d4) list_single_hwr_training_instruct_pane

0xcfed,	// (0x0003b6ab) list_single_hwr_training_instruct_pane_t1

0xc700,	// (0x0003adbe) bg_frame_shadow_pane_g1

0xcffc,	// (0x0003b6ba) bg_frame_shadow_pane_g2

0xd004,	// (0x0003b6c2) bg_frame_shadow_pane_g3

0xd00c,	// (0x0003b6ca) bg_frame_shadow_pane_g4

0xd014,	// (0x0003b6d2) bg_frame_shadow_pane_g5

0xd01c,	// (0x0003b6da) bg_frame_shadow_pane_g6

0xd024,	// (0x0003b6e2) bg_frame_shadow_pane_g7

0xa3fe,	// (0x00038abc) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0003df3e) bg_frame_shadow_pane_g

0x9b91,	// (0x0003824f) main_video_tele_dialer_pane

0x0615,	// (0x0002ecd3) aid_size_cell_video_keypad_ParamLimits

0x0615,	// (0x0002ecd3) aid_size_cell_video_keypad

0x062f,	// (0x0002eced) grid_video_dialer_keypad_pane_ParamLimits

0x062f,	// (0x0002eced) grid_video_dialer_keypad_pane

0x067b,	// (0x0002ed39) video_down_pane_cp_ParamLimits

0x067b,	// (0x0002ed39) video_down_pane_cp

0x068f,	// (0x0002ed4d) cell_video_dialer_keypad_pane_ParamLimits

0x068f,	// (0x0002ed4d) cell_video_dialer_keypad_pane

0xd02c,	// (0x0003b6ea) bg_button_pane_cp08_ParamLimits

0xd02c,	// (0x0003b6ea) bg_button_pane_cp08

0x6247,	// (0x00034905) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6247,	// (0x00034905) cell_video_dialer_keypad_pane_g1

0x59b0,	// (0x0003406e) mup3_rocker2_pane_ParamLimits

0x59b0,	// (0x0003406e) mup3_rocker2_pane

0xc7c0,	// (0x0003ae7e) mup3_rocker2_pane_g1

0x47f1,	// (0x00032eaf) main_dialer2_pane

0x9b91,	// (0x0003824f) main_mp4_pane

0x628a,	// (0x00034948) main_mp4_pane_g1_ParamLimits

0x628a,	// (0x00034948) main_mp4_pane_g1

0x628a,	// (0x00034948) main_mp4_pane_g2_ParamLimits

0x628a,	// (0x00034948) main_mp4_pane_g2

0x06b3,	// (0x0002ed71) main_mp4_pane_g3_ParamLimits

0x06b3,	// (0x0002ed71) main_mp4_pane_g3

0x6298,	// (0x00034956) main_mp4_pane_g4_ParamLimits

0x6298,	// (0x00034956) main_mp4_pane_g4

0x62c0,	// (0x0003497e) main_mp4_pane_g5_ParamLimits

0x62c0,	// (0x0003497e) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0003df5e) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0003df5e) main_mp4_pane_g

0x6310,	// (0x000349ce) main_mp4_pane_t1_ParamLimits

0x6310,	// (0x000349ce) main_mp4_pane_t1

0x636c,	// (0x00034a2a) main_mp4_pane_t2_ParamLimits

0x636c,	// (0x00034a2a) main_mp4_pane_t2

0xd038,	// (0x0003b6f6) main_mp4_pane_t3_ParamLimits

0xd038,	// (0x0003b6f6) main_mp4_pane_t3

0x63be,	// (0x00034a7c) main_mp4_pane_t4_ParamLimits

0x63be,	// (0x00034a7c) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0003df6b) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0003df6b) main_mp4_pane_t

0x63fe,	// (0x00034abc) mp4_progress_pane_ParamLimits

0x63fe,	// (0x00034abc) mp4_progress_pane

0x6448,	// (0x00034b06) mp4_rocker_pane_ParamLimits

0x6448,	// (0x00034b06) mp4_rocker_pane

0xd060,	// (0x0003b71e) mp4_progress_pane_t1

0xd079,	// (0x0003b737) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0003df74) mp4_progress_pane_t

0xd092,	// (0x0003b750) mup_progress_pane_cp04

0xd09e,	// (0x0003b75c) mp4_rocker_pane_g1

0x06fd,	// (0x0002edbb) aid_cell_size_keypad2_ParamLimits

0x06fd,	// (0x0002edbb) aid_cell_size_keypad2

0x0713,	// (0x0002edd1) dialer2_ne_pane_ParamLimits

0x0713,	// (0x0002edd1) dialer2_ne_pane

0x072b,	// (0x0002ede9) grid_dialer2_keypad_pane_ParamLimits

0x072b,	// (0x0002ede9) grid_dialer2_keypad_pane

0xc59f,	// (0x0003ac5d) bg_popup_call_pane_cp07_ParamLimits

0xc59f,	// (0x0003ac5d) bg_popup_call_pane_cp07

0x646a,	// (0x00034b28) dialer2_ne_pane_t1_ParamLimits

0x646a,	// (0x00034b28) dialer2_ne_pane_t1

0x0747,	// (0x0002ee05) cell_dialer2_keypad_pane_ParamLimits

0x0747,	// (0x0002ee05) cell_dialer2_keypad_pane

0xd0ba,	// (0x0003b778) bg_button_pane_pane_cp04_ParamLimits

0xd0ba,	// (0x0003b778) bg_button_pane_pane_cp04

0x64a5,	// (0x00034b63) cell_dialer2_keypad_pane_g1_ParamLimits

0x64a5,	// (0x00034b63) cell_dialer2_keypad_pane_g1

0x2159,	// (0x00030817) aid_placing_vt_set_content_ParamLimits

0x2159,	// (0x00030817) aid_placing_vt_set_content

0x217d,	// (0x0003083b) aid_placing_vt_set_title_ParamLimits

0x217d,	// (0x0003083b) aid_placing_vt_set_title

0x9b91,	// (0x0003824f) main_image3_pane

0x07c9,	// (0x0002ee87) area_side_right_pane_cp01_ParamLimits

0x07c9,	// (0x0002ee87) area_side_right_pane_cp01

0x628a,	// (0x00034948) main_image3_pane_g1_ParamLimits

0x628a,	// (0x00034948) main_image3_pane_g1

0x07e2,	// (0x0002eea0) main_image3_pane_g2_ParamLimits

0x07e2,	// (0x0002eea0) main_image3_pane_g2

0x080a,	// (0x0002eec8) main_image3_pane_g3_ParamLimits

0x080a,	// (0x0002eec8) main_image3_pane_g3

0x0834,	// (0x0002eef2) main_image3_pane_g4_ParamLimits

0x0834,	// (0x0002eef2) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0003df83) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0003df83) main_image3_pane_g

0x085e,	// (0x0002ef1c) main_image3_pane_t1_ParamLimits

0x085e,	// (0x0002ef1c) main_image3_pane_t1

0x08b6,	// (0x0002ef74) main_image3_pane_t2_ParamLimits

0x08b6,	// (0x0002ef74) main_image3_pane_t2

0x0908,	// (0x0002efc6) main_image3_pane_t3_ParamLimits

0x0908,	// (0x0002efc6) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0003df8c) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0003df8c) main_image3_pane_t

0x9bf2,	// (0x000382b0) grid_sctrl_middle_pane_cp01_ParamLimits

0x9bf2,	// (0x000382b0) grid_sctrl_middle_pane_cp01

0x6541,	// (0x00034bff) cell_sctrl_middle_pane_cp01_ParamLimits

0x6541,	// (0x00034bff) cell_sctrl_middle_pane_cp01

0x655e,	// (0x00034c1c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x655e,	// (0x00034c1c) cell_sctrl_middle_pane_cp01_g1

0x9b91,	// (0x0003824f) main_call4_pane

0x6573,	// (0x00034c31) aid_size_button_call4_ParamLimits

0x6573,	// (0x00034c31) aid_size_button_call4

0x65a6,	// (0x00034c64) call4_windows_pane_ParamLimits

0x65a6,	// (0x00034c64) call4_windows_pane

0x65c8,	// (0x00034c86) grid_call4_button_pane_ParamLimits

0x65c8,	// (0x00034c86) grid_call4_button_pane

0xd0c6,	// (0x0003b784) call4_windows_conf_pane

0x65f3,	// (0x00034cb1) popup_call4_audio_first_window_ParamLimits

0x65f3,	// (0x00034cb1) popup_call4_audio_first_window

0x661f,	// (0x00034cdd) popup_call4_audio_second_window_ParamLimits

0x661f,	// (0x00034cdd) popup_call4_audio_second_window

0xd103,	// (0x0003b7c1) popup_call4_audio_wait_window_ParamLimits

0xd103,	// (0x0003b7c1) popup_call4_audio_wait_window

0x6635,	// (0x00034cf3) cell_call4_button_pane_ParamLimits

0x6635,	// (0x00034cf3) cell_call4_button_pane

0x665c,	// (0x00034d1a) bg_button_pane_cp09_ParamLimits

0x665c,	// (0x00034d1a) bg_button_pane_cp09

0x6668,	// (0x00034d26) cell_call4_button_pane_g1_ParamLimits

0x6668,	// (0x00034d26) cell_call4_button_pane_g1

0x668e,	// (0x00034d4c) cell_call4_button_pane_t1_ParamLimits

0x668e,	// (0x00034d4c) cell_call4_button_pane_t1

0xd14b,	// (0x0003b809) popup_call4_audio_conf_window_ParamLimits

0xd14b,	// (0x0003b809) popup_call4_audio_conf_window

0x5a12,	// (0x000340d0) mup3_progress_pane_t1_ParamLimits

0x5a30,	// (0x000340ee) mup3_progress_pane_t2_ParamLimits

0xca77,	// (0x0003b135) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0003de65) mup3_progress_pane_t_ParamLimits

0xca94,	// (0x0003b152) mup_progress_pane_cp03_ParamLimits

0x5faf,	// (0x0003466d) mup3_control_keys_pane_g4_copy1

0x642c,	// (0x00034aea) mp4_rocker2_pane_ParamLimits

0x642c,	// (0x00034aea) mp4_rocker2_pane

0xd165,	// (0x0003b823) mp4_rocker2_pane_g1

0xd16d,	// (0x0003b82b) mp4_rocker2_pane_g2

0x66b4,	// (0x00034d72) mp4_rocker2_pane_g3

0x66bc,	// (0x00034d7a) mp4_rocker2_pane_g4

0x66c4,	// (0x00034d82) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0003df95) mp4_rocker2_pane_g

0x9b91,	// (0x0003824f) main_camera4_pane

0x9b91,	// (0x0003824f) main_video4_pane

0x0649,	// (0x0002ed07) main_video_tele_dialer_pane_t1_ParamLimits

0x0649,	// (0x0002ed07) main_video_tele_dialer_pane_t1

0x0662,	// (0x0002ed20) main_video_tele_dialer_pane_t2_ParamLimits

0x0662,	// (0x0002ed20) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0003df4f) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0003df4f) main_video_tele_dialer_pane_t

0x09a8,	// (0x0002f066) cam4_autofocus_pane_ParamLimits

0x09a8,	// (0x0002f066) cam4_autofocus_pane

0x09be,	// (0x0002f07c) cam4_image_uncrop_pane_ParamLimits

0x09be,	// (0x0002f07c) cam4_image_uncrop_pane

0x09d7,	// (0x0002f095) cam4_indicators_pane_ParamLimits

0x09d7,	// (0x0002f095) cam4_indicators_pane

0x0a06,	// (0x0002f0c4) main_camera4_pane_g1_ParamLimits

0x0a06,	// (0x0002f0c4) main_camera4_pane_g1

0x0a18,	// (0x0002f0d6) main_camera4_pane_g2_ParamLimits

0x0a18,	// (0x0002f0d6) main_camera4_pane_g2

0x0a2b,	// (0x0002f0e9) main_camera4_pane_g3_ParamLimits

0x0a2b,	// (0x0002f0e9) main_camera4_pane_g3

0x0a3e,	// (0x0002f0fc) main_camera4_pane_g4_ParamLimits

0x0a3e,	// (0x0002f0fc) main_camera4_pane_g4

0x0a51,	// (0x0002f10f) main_camera4_pane_g5_ParamLimits

0x0a51,	// (0x0002f10f) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0003dfa0) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0003dfa0) main_camera4_pane_g

0x0a75,	// (0x0002f133) main_camera4_pane_t1_ParamLimits

0x0a75,	// (0x0002f133) main_camera4_pane_t1

0x66fe,	// (0x00034dbc) bg_tb_trans_pane_cp06

0x6714,	// (0x00034dd2) cam4_indicators_pane_g1

0x6725,	// (0x00034de3) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0003dfbb) cam4_indicators_pane_g

0x673d,	// (0x00034dfb) cam4_indicators_pane_t1

0x0ac5,	// (0x0002f183) main_video4_pane_g1_ParamLimits

0x0ac5,	// (0x0002f183) main_video4_pane_g1

0x0ad4,	// (0x0002f192) main_video4_pane_g2_ParamLimits

0x0ad4,	// (0x0002f192) main_video4_pane_g2

0x0ae3,	// (0x0002f1a1) main_video4_pane_g3_ParamLimits

0x0ae3,	// (0x0002f1a1) main_video4_pane_g3

0x0af2,	// (0x0002f1b0) main_video4_pane_g4_ParamLimits

0x0af2,	// (0x0002f1b0) main_video4_pane_g4

0x0004,

0xf904,	// (0x0003dfc2) main_video4_pane_g_ParamLimits

0xf904,	// (0x0003dfc2) main_video4_pane_g

0x0b10,	// (0x0002f1ce) vid4_indicators_pane_ParamLimits

0x0b10,	// (0x0002f1ce) vid4_indicators_pane

0x0b3e,	// (0x0002f1fc) video4_image_uncrop_cif_pane_ParamLimits

0x0b3e,	// (0x0002f1fc) video4_image_uncrop_cif_pane

0x0b58,	// (0x0002f216) video4_image_uncrop_nhd_pane_ParamLimits

0x0b58,	// (0x0002f216) video4_image_uncrop_nhd_pane

0x09be,	// (0x0002f07c) video4_image_uncrop_vga_pane_ParamLimits

0x09be,	// (0x0002f07c) video4_image_uncrop_vga_pane

0x6761,	// (0x00034e1f) bg_tb_trans_pane_cp07

0x6779,	// (0x00034e37) vid4_indicators_pane_g1

0x678f,	// (0x00034e4d) vid4_indicators_pane_g2

0x67a3,	// (0x00034e61) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0003dfcd) vid4_indicators_pane_g

0x67d4,	// (0x00034e92) vid4_indicators_pane_t1

0x67eb,	// (0x00034ea9) cam4_autofocus_pane_g1

0x67f3,	// (0x00034eb1) cam4_autofocus_pane_g2

0x67fb,	// (0x00034eb9) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0003dfd8) cam4_autofocus_pane_g

0x6803,	// (0x00034ec1) cam4_autofocus_pane_g3_copy1

0x622b,	// (0x000348e9) video_down_pane_cp_t1

0x6239,	// (0x000348f7) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0003df54) video_down_pane_cp_t

0x9bf2,	// (0x000382b0) popup_vitu2_window_ParamLimits

0x9bf2,	// (0x000382b0) popup_vitu2_window

0x0b6e,	// (0x0002f22c) aid_size_cell2_itu2_ParamLimits

0x0b6e,	// (0x0002f22c) aid_size_cell2_itu2

0x0b94,	// (0x0002f252) aid_size_cell_itu2_ParamLimits

0x0b94,	// (0x0002f252) aid_size_cell_itu2

0x0bf2,	// (0x0002f2b0) bg_popup_window_pane_cp09_ParamLimits

0x0bf2,	// (0x0002f2b0) bg_popup_window_pane_cp09

0x0c00,	// (0x0002f2be) field_vitu2_entry_pane_ParamLimits

0x0c00,	// (0x0002f2be) field_vitu2_entry_pane

0x0c28,	// (0x0002f2e6) grid_vitu2_function_pane_ParamLimits

0x0c28,	// (0x0002f2e6) grid_vitu2_function_pane

0x0c79,	// (0x0002f337) grid_vitu2_itu_pane_ParamLimits

0x0c79,	// (0x0002f337) grid_vitu2_itu_pane

0x0d04,	// (0x0002f3c2) cell_vitu2_itu_pane_ParamLimits

0x0d04,	// (0x0002f3c2) cell_vitu2_itu_pane

0x0d2a,	// (0x0002f3e8) cell_vitu2_function_pane_ParamLimits

0x0d2a,	// (0x0002f3e8) cell_vitu2_function_pane

0xd175,	// (0x0003b833) bg_popup_call_pane_cp08_ParamLimits

0xd175,	// (0x0003b833) bg_popup_call_pane_cp08

0xd18e,	// (0x0003b84c) field_vitu2_entry_pane_g1

0xd19a,	// (0x0003b858) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0003dfdf) field_vitu2_entry_pane_g

0x680b,	// (0x00034ec9) field_vitu2_entry_pane_t1_ParamLimits

0x680b,	// (0x00034ec9) field_vitu2_entry_pane_t1

0xd1b4,	// (0x0003b872) field_vitu2_entry_pane_t2_ParamLimits

0xd1b4,	// (0x0003b872) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0003dfe6) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0003dfe6) field_vitu2_entry_pane_t

0x0d6e,	// (0x0002f42c) bg_button_pane_cp010_ParamLimits

0x0d6e,	// (0x0002f42c) bg_button_pane_cp010

0x0d7c,	// (0x0002f43a) cell_vitu2_itu_pane_g1

0x0d9a,	// (0x0002f458) cell_vitu2_itu_pane_t1_ParamLimits

0x0d9a,	// (0x0002f458) cell_vitu2_itu_pane_t1

0x0e00,	// (0x0002f4be) cell_vitu2_itu_pane_t2_ParamLimits

0x0e00,	// (0x0002f4be) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0003dff0) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0003dff0) cell_vitu2_itu_pane_t

0x6761,	// (0x00034e1f) bg_button_pane_cp011

0x0edc,	// (0x0002f59a) cell_vitu2_function_pane_g1

0x9b91,	// (0x0003824f) main_myfav_hc_pane

0x0958,	// (0x0002f016) popup_image3_note_pane_ParamLimits

0x0958,	// (0x0002f016) popup_image3_note_pane

0x0974,	// (0x0002f032) popup_image3_tool_bar_pane_ParamLimits

0x0974,	// (0x0002f032) popup_image3_tool_bar_pane

0x0e84,	// (0x0002f542) cell_vitu2_itu_pane_t3_ParamLimits

0x0e84,	// (0x0002f542) cell_vitu2_itu_pane_t3

0x9b91,	// (0x0003824f) bg_popup_trans_pane

0xd1d9,	// (0x0003b897) grid_image3_tool_bar_pane

0xd1e3,	// (0x0003b8a1) bg_popup_trans_pane_g1

0xa766,	// (0x00038e24) bg_popup_trans_pane_g2

0xd1eb,	// (0x0003b8a9) bg_popup_trans_pane_g3

0xd1f3,	// (0x0003b8b1) bg_popup_trans_pane_g4

0xd1fb,	// (0x0003b8b9) bg_popup_trans_pane_g5

0xd203,	// (0x0003b8c1) bg_popup_trans_pane_g6

0xd20b,	// (0x0003b8c9) bg_popup_trans_pane_g7

0xd213,	// (0x0003b8d1) bg_popup_trans_pane_g8

0xa746,	// (0x00038e04) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0003dff7) bg_popup_trans_pane_g

0xd21b,	// (0x0003b8d9) cell_image3_tool_bar_pane_ParamLimits

0xd21b,	// (0x0003b8d9) cell_image3_tool_bar_pane

0xc7c0,	// (0x0003ae7e) cell_image3_tool_bar_pane_g1

0x9b91,	// (0x0003824f) bg_popup_trans_pane_cp1

0xd231,	// (0x0003b8ef) popup_image3_note_pane_t1

0xd23f,	// (0x0003b8fd) popup_image3_note_pane_t2

0xd24d,	// (0x0003b90b) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0003e00a) popup_image3_note_pane_t

0xd25d,	// (0x0003b91b) popup_image3_note_pane_t3_copy1

0x683a,	// (0x00034ef8) bg_myfav_hc_instruction_pane_ParamLimits

0x683a,	// (0x00034ef8) bg_myfav_hc_instruction_pane

0x6852,	// (0x00034f10) cell_myfav_contact_pane_ParamLimits

0x6852,	// (0x00034f10) cell_myfav_contact_pane

0x686e,	// (0x00034f2c) cell_myfav_contact_pane_cp1_ParamLimits

0x686e,	// (0x00034f2c) cell_myfav_contact_pane_cp1

0x6886,	// (0x00034f44) cell_myfav_contact_pane_cp2_ParamLimits

0x6886,	// (0x00034f44) cell_myfav_contact_pane_cp2

0x689e,	// (0x00034f5c) cell_myfav_contact_pane_cp3_ParamLimits

0x689e,	// (0x00034f5c) cell_myfav_contact_pane_cp3

0x68b5,	// (0x00034f73) cell_myfav_contact_pane_cp4_ParamLimits

0x68b5,	// (0x00034f73) cell_myfav_contact_pane_cp4

0x68cd,	// (0x00034f8b) cell_myfav_contact_pane_cp5_ParamLimits

0x68cd,	// (0x00034f8b) cell_myfav_contact_pane_cp5

0x68e1,	// (0x00034f9f) cell_myfav_contact_pane_cp6_ParamLimits

0x68e1,	// (0x00034f9f) cell_myfav_contact_pane_cp6

0x68f7,	// (0x00034fb5) cell_myfav_contact_pane_cp7_ParamLimits

0x68f7,	// (0x00034fb5) cell_myfav_contact_pane_cp7

0xd26b,	// (0x0003b929) listscroll_gen_pane_cp05

0x690f,	// (0x00034fcd) main_myfav_hc_pane_g1_ParamLimits

0x690f,	// (0x00034fcd) main_myfav_hc_pane_g1

0x6929,	// (0x00034fe7) main_myfav_hc_pane_g2_ParamLimits

0x6929,	// (0x00034fe7) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0003e011) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0003e011) main_myfav_hc_pane_g

0x695d,	// (0x0003501b) main_myfav_hc_pane_t1_ParamLimits

0x695d,	// (0x0003501b) main_myfav_hc_pane_t1

0xd274,	// (0x0003b932) main_myfav_hc_pane_t2_ParamLimits

0xd274,	// (0x0003b932) main_myfav_hc_pane_t2

0xd286,	// (0x0003b944) main_myfav_hc_pane_t3_ParamLimits

0xd286,	// (0x0003b944) main_myfav_hc_pane_t3

0x6974,	// (0x00035032) main_myfav_hc_pane_t4_ParamLimits

0x6974,	// (0x00035032) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0003e018) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0003e018) main_myfav_hc_pane_t

0xc7c0,	// (0x0003ae7e) bg_myfav_hc_instruction_pane_g1

0xd298,	// (0x0003b956) cell_myfav_contact_pane_g1_ParamLimits

0xd298,	// (0x0003b956) cell_myfav_contact_pane_g1

0xd298,	// (0x0003b956) cell_myfav_contact_pane_g2_ParamLimits

0xd298,	// (0x0003b956) cell_myfav_contact_pane_g2

0xd2a4,	// (0x0003b962) cell_myfav_contact_pane_g3_ParamLimits

0xd2a4,	// (0x0003b962) cell_myfav_contact_pane_g3

0xca61,	// (0x0003b11f) cell_myfav_contact_pane_g4_ParamLimits

0xca61,	// (0x0003b11f) cell_myfav_contact_pane_g4

0xd2b1,	// (0x0003b96f) cell_myfav_contact_pane_g5_ParamLimits

0xd2b1,	// (0x0003b96f) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0003e023) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0003e023) cell_myfav_contact_pane_g

0x6943,	// (0x00035001) main_myfav_hc_pane_g3_ParamLimits

0x6943,	// (0x00035001) main_myfav_hc_pane_g3

0x11ef,	// (0x0002f8ad) popup_adpt_find_window

0x699e,	// (0x0003505c) afind_page_pane_ParamLimits

0x699e,	// (0x0003505c) afind_page_pane

0x69b3,	// (0x00035071) aid_size_cell_afind_ParamLimits

0x69b3,	// (0x00035071) aid_size_cell_afind

0x69d1,	// (0x0003508f) bg_popup_sub_pane_cp09_ParamLimits

0x69d1,	// (0x0003508f) bg_popup_sub_pane_cp09

0x69de,	// (0x0003509c) find_pane_cp01_ParamLimits

0x69de,	// (0x0003509c) find_pane_cp01

0xd2bd,	// (0x0003b97b) grid_afind_control_pane_ParamLimits

0xd2bd,	// (0x0003b97b) grid_afind_control_pane

0x69eb,	// (0x000350a9) grid_afind_pane_ParamLimits

0x69eb,	// (0x000350a9) grid_afind_pane

0x6a0d,	// (0x000350cb) cell_afind_pane_ParamLimits

0x6a0d,	// (0x000350cb) cell_afind_pane

0xc7c0,	// (0x0003ae7e) afind_page_pane_g1

0x6a74,	// (0x00035132) afind_page_pane_g2

0x6a7d,	// (0x0003513b) afind_page_pane_g3

0x0002,

0xf970,	// (0x0003e02e) afind_page_pane_g

0x6a86,	// (0x00035144) afind_page_pane_t1

0xd2d1,	// (0x0003b98f) cell_afind_grid_control_pane_ParamLimits

0xd2d1,	// (0x0003b98f) cell_afind_grid_control_pane

0xd0ba,	// (0x0003b778) bg_button_pane_cp69_ParamLimits

0xd0ba,	// (0x0003b778) bg_button_pane_cp69

0x6aa6,	// (0x00035164) cell_afind_pane_g1_ParamLimits

0x6aa6,	// (0x00035164) cell_afind_pane_g1

0x6ab3,	// (0x00035171) cell_afind_pane_t1_ParamLimits

0x6ab3,	// (0x00035171) cell_afind_pane_t1

0xa55b,	// (0x00038c19) bg_button_pane_cp72

0xd2e0,	// (0x0003b99e) cell_afind_grid_control_pane_g1

0x4294,	// (0x00032952) aid_image_placing_area_ParamLimits

0x4294,	// (0x00032952) aid_image_placing_area

0xcd7c,	// (0x0003b43a) field_vitu_entry_pane_g1_ParamLimits

0xcd7c,	// (0x0003b43a) field_vitu_entry_pane_g1

0xcd88,	// (0x0003b446) field_vitu_entry_pane_g2_ParamLimits

0xcd88,	// (0x0003b446) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0003dedf) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0003dedf) field_vitu_entry_pane_g

0x607e,	// (0x0003473c) cell_vitu_itu_pane_g1_ParamLimits

0x60c0,	// (0x0003477e) cell_vitu_itu_pane_t3_ParamLimits

0x60c0,	// (0x0003477e) cell_vitu_itu_pane_t3

0xd060,	// (0x0003b71e) mp4_progress_pane_t1_ParamLimits

0xd079,	// (0x0003b737) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0003df74) mp4_progress_pane_t_ParamLimits

0xd092,	// (0x0003b750) mup_progress_pane_cp04_ParamLimits

0x6988,	// (0x00035046) main_myfav_hc_pane_t5_ParamLimits

0x6988,	// (0x00035046) main_myfav_hc_pane_t5

0x9bb7,	// (0x00038275) aid_zoom_text_primary

0x11ef,	// (0x0002f8ad) popup_adpt_find_window_ParamLimits

0x9bf2,	// (0x000382b0) main_cam_set_pane

0x09f0,	// (0x0002f0ae) cam4_zoom_pane_ParamLimits

0x09f0,	// (0x0002f0ae) cam4_zoom_pane

0x6ac5,	// (0x00035183) main_cam_set_pane_g1_ParamLimits

0x6ac5,	// (0x00035183) main_cam_set_pane_g1

0x6ad3,	// (0x00035191) main_cam_set_pane_g2_ParamLimits

0x6ad3,	// (0x00035191) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0003e035) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0003e035) main_cam_set_pane_g

0x6af4,	// (0x000351b2) main_cam_set_pane_t1_ParamLimits

0x6af4,	// (0x000351b2) main_cam_set_pane_t1

0x6b0f,	// (0x000351cd) main_cset_listscroll_pane_ParamLimits

0x6b0f,	// (0x000351cd) main_cset_listscroll_pane

0x6b33,	// (0x000351f1) main_cset_slider_pane_ParamLimits

0x6b33,	// (0x000351f1) main_cset_slider_pane

0xd2f1,	// (0x0003b9af) main_cset_list_pane_ParamLimits

0xd2f1,	// (0x0003b9af) main_cset_list_pane

0xd301,	// (0x0003b9bf) scroll_pane_cp028

0x6b5d,	// (0x0003521b) aid_area_touch_slider

0x6b79,	// (0x00035237) cset_slider_pane

0x6ba3,	// (0x00035261) main_cset_slider_pane_g1

0x6bb8,	// (0x00035276) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0003e03a) main_cset_slider_pane_g

0xd33a,	// (0x0003b9f8) main_cset_slider_pane_t1

0x6c7a,	// (0x00035338) main_cset_slider_pane_t2

0x6c94,	// (0x00035352) main_cset_slider_pane_t3

0x6cae,	// (0x0003536c) main_cset_slider_pane_t4

0x6cc8,	// (0x00035386) main_cset_slider_pane_t5

0x6ce6,	// (0x000353a4) main_cset_slider_pane_t6

0x6cfb,	// (0x000353b9) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0003e05f) main_cset_slider_pane_t

0x6e07,	// (0x000354c5) cset_list_set_pane_ParamLimits

0x6e07,	// (0x000354c5) cset_list_set_pane

0x6e1b,	// (0x000354d9) aid_position_infowindow_above

0x6e23,	// (0x000354e1) aid_position_infowindow_below

0x6e2b,	// (0x000354e9) cset_list_set_pane_g1_ParamLimits

0x6e2b,	// (0x000354e9) cset_list_set_pane_g1

0x6e37,	// (0x000354f5) cset_list_set_pane_g3_ParamLimits

0x6e37,	// (0x000354f5) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0003e07e) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0003e07e) cset_list_set_pane_g

0x6e46,	// (0x00035504) cset_list_set_pane_t1_ParamLimits

0x6e46,	// (0x00035504) cset_list_set_pane_t1

0x9bf2,	// (0x000382b0) list_highlight_pane_cp021_ParamLimits

0x9bf2,	// (0x000382b0) list_highlight_pane_cp021

0xb05e,	// (0x0003971c) cset_slider_pane_g1

0xb070,	// (0x0003972e) cset_slider_pane_g2

0xb067,	// (0x00039725) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0003e083) cset_slider_pane_g

0x6e5b,	// (0x00035519) aid_area_touch_cam4_zoom

0x6e63,	// (0x00035521) cam4_zoom_cont_pane

0x6e6b,	// (0x00035529) cam4_zoom_pane_g1

0x6e73,	// (0x00035531) cam4_zoom_pane_g2

0x0ef0,	// (0x0002f5ae) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0003e08a) cam4_zoom_pane_g

0x6e7b,	// (0x00035539) cam4_zoom_cont_pane_g1

0x6e84,	// (0x00035542) cam4_zoom_cont_pane_g2

0x6e8d,	// (0x0003554b) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0003e091) cam4_zoom_cont_pane_g

0x6591,	// (0x00034c4f) call4_image_pane_ParamLimits

0x6591,	// (0x00034c4f) call4_image_pane

0xd0c6,	// (0x0003b784) call4_windows_conf_pane_ParamLimits

0xd0e1,	// (0x0003b79f) popup_call4_audio_in_window_ParamLimits

0xd0e1,	// (0x0003b79f) popup_call4_audio_in_window

0x9b91,	// (0x0003824f) bg_popup_call2_act_pane_cp02

0xd143,	// (0x0003b801) call4_list_conf_pane

0xc7c0,	// (0x0003ae7e) call4_image_pane_g1

0xc7c0,	// (0x0003ae7e) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0003dda5) call4_image_pane_g

0xd3da,	// (0x0003ba98) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3da,	// (0x0003ba98) list_single_graphic_popup_conf4_pane

0x9b91,	// (0x0003824f) list_highlight_pane_cp022

0xd3ef,	// (0x0003baad) list_single_graphic_popup_conf4_pane_g1

0xad4a,	// (0x00039408) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0003e098) list_single_graphic_popup_conf4_pane_g

0xd3f7,	// (0x0003bab5) list_single_graphic_popup_conf4_pane_t1

0x2294,	// (0x00030952) popup_vtel_slider_window_ParamLimits

0x2294,	// (0x00030952) popup_vtel_slider_window

0xd0a8,	// (0x0003b766) dialer2_ne_pane_t2_ParamLimits

0xd0a8,	// (0x0003b766) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0003df79) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0003df79) dialer2_ne_pane_t

0xc59f,	// (0x0003ac5d) bg_popup_sub_pane_cp010_ParamLimits

0xc59f,	// (0x0003ac5d) bg_popup_sub_pane_cp010

0x6e96,	// (0x00035554) popup_vtel_slider_window_g1_ParamLimits

0x6e96,	// (0x00035554) popup_vtel_slider_window_g1

0x6ea9,	// (0x00035567) popup_vtel_slider_window_g2_ParamLimits

0x6ea9,	// (0x00035567) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0003e09d) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0003e09d) popup_vtel_slider_window_g

0x6eff,	// (0x000355bd) vtel_slider_pane_ParamLimits

0x6eff,	// (0x000355bd) vtel_slider_pane

0x6f21,	// (0x000355df) vtel_slider_pane_g1_ParamLimits

0x6f21,	// (0x000355df) vtel_slider_pane_g1

0x6f35,	// (0x000355f3) vtel_slider_pane_g2_ParamLimits

0x6f35,	// (0x000355f3) vtel_slider_pane_g2

0x6f4d,	// (0x0003560b) vtel_slider_pane_g3_ParamLimits

0x6f4d,	// (0x0003560b) vtel_slider_pane_g3

0x6f21,	// (0x000355df) vtel_slider_pane_g4_ParamLimits

0x6f21,	// (0x000355df) vtel_slider_pane_g4

0x6f63,	// (0x00035621) vtel_slider_pane_g5_ParamLimits

0x6f63,	// (0x00035621) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0003e0a6) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0003e0a6) vtel_slider_pane_g

0x9b91,	// (0x0003824f) main_gallery2_pane

0x0bc0,	// (0x0002f27e) aid_size_row_itut2_dropdow_list_ParamLimits

0x0bc0,	// (0x0002f27e) aid_size_row_itut2_dropdow_list

0x0c50,	// (0x0002f30e) grid_vitu2_function_top_pane_ParamLimits

0x0c50,	// (0x0002f30e) grid_vitu2_function_top_pane

0x0caf,	// (0x0002f36d) popup_vitu2_dropdown_list_window_ParamLimits

0x0caf,	// (0x0002f36d) popup_vitu2_dropdown_list_window

0x0cd8,	// (0x0002f396) popup_vitu2_match_list_window

0x0ef8,	// (0x0002f5b6) cell_vitu2_function_top_pane_ParamLimits

0x0ef8,	// (0x0002f5b6) cell_vitu2_function_top_pane

0x0f18,	// (0x0002f5d6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x0f18,	// (0x0002f5d6) cell_vitu2_function_top_pane_cp01

0x0f36,	// (0x0002f5f4) cell_vitu2_function_top_wide_pane_ParamLimits

0x0f36,	// (0x0002f5f4) cell_vitu2_function_top_wide_pane

0x6761,	// (0x00034e1f) bg_button_pane_cp012

0x0f54,	// (0x0002f612) cell_vitu2_function_top_pane_g1

0xaae7,	// (0x000391a5) bg_button_pane_cp013_ParamLimits

0xaae7,	// (0x000391a5) bg_button_pane_cp013

0x6f79,	// (0x00035637) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f79,	// (0x00035637) cell_vitu2_function_top_wide_pane_g1

0x6761,	// (0x00034e1f) bg_popup_sub_pane_cp20

0x0f68,	// (0x0002f626) list_vitu2_match_list_pane

0xd1e3,	// (0x0003b8a1) bg_popup_sub_pane_cp20_g1

0xd1eb,	// (0x0003b8a9) bg_popup_sub_pane_cp20_g2

0xa766,	// (0x00038e24) bg_popup_sub_pane_cp20_g3

0xd1f3,	// (0x0003b8b1) bg_popup_sub_pane_cp20_g4

0xa746,	// (0x00038e04) bg_popup_sub_pane_cp20_g5

0xd41b,	// (0x0003bad9) bg_popup_sub_pane_cp20_g6

0xd203,	// (0x0003b8c1) bg_popup_sub_pane_cp20_g7

0xd20b,	// (0x0003b8c9) bg_popup_sub_pane_cp20_g8

0xd213,	// (0x0003b8d1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0003e0b1) bg_popup_sub_pane_cp20_g

0xab03,	// (0x000391c1) list_vitu2_match_list_item_pane_ParamLimits

0xab03,	// (0x000391c1) list_vitu2_match_list_item_pane

0xab15,	// (0x000391d3) list_vitu2_match_list_item_pane_t1

0x157e,	// (0x0002fc3c) bg_popup_sub_pane_cp21

0xab23,	// (0x000391e1) grid_vitu2_dropdown_list_pane

0x0f86,	// (0x0002f644) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x0f86,	// (0x0002f644) cell_vitu2_dropdown_list_char_pane

0x0fa9,	// (0x0002f667) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x0fa9,	// (0x0002f667) cell_vitu2_dropdown_list_ctrl_pane

0xd42f,	// (0x0003baed) cell_vitu2_dropdown_list_char_pane_g1

0xd438,	// (0x0003baf6) cell_vitu2_dropdown_list_char_pane_g2

0xd441,	// (0x0003baff) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0003e0ce) cell_vitu2_dropdown_list_char_pane_g

0x0fd7,	// (0x0002f695) cell_vitu2_dropdown_list_char_pane_t1

0x6fcf,	// (0x0003568d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6fcf,	// (0x0003568d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6fdf,	// (0x0003569d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6fdf,	// (0x0003569d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6ff0,	// (0x000356ae) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6ff0,	// (0x000356ae) cell_vitu2_dropdown_list_ctrl_pane_g3

0x0fe5,	// (0x0002f6a3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x0fe5,	// (0x0002f6a3) cell_vitu2_dropdown_list_ctrl_pane_g4

0x66fe,	// (0x00034dbc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x66fe,	// (0x00034dbc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0003e0d5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0003e0d5) cell_vitu2_dropdown_list_ctrl_pane_g

0x7000,	// (0x000356be) aid_size_cell_gallery2_ParamLimits

0x7000,	// (0x000356be) aid_size_cell_gallery2

0x7016,	// (0x000356d4) grid_gallery2_pane_ParamLimits

0x7016,	// (0x000356d4) grid_gallery2_pane

0x702a,	// (0x000356e8) scroll_pane_cp029_ParamLimits

0x702a,	// (0x000356e8) scroll_pane_cp029

0x7036,	// (0x000356f4) cell_gallery2_pane_ParamLimits

0x7036,	// (0x000356f4) cell_gallery2_pane

0xd44a,	// (0x0003bb08) cell_gallery2_pane_g2

0x706f,	// (0x0003572d) cell_gallery2_pane_g3

0xd454,	// (0x0003bb12) cell_gallery2_pane_g4

0xd45c,	// (0x0003bb1a) cell_gallery2_pane_g5

0xaf18,	// (0x000395d6) grid_highlight_pane_cp10

0x0cd8,	// (0x0002f396) popup_vitu2_match_list_window_ParamLimits

0x0cef,	// (0x0002f3ad) popup_vitu2_query_window_ParamLimits

0x0cef,	// (0x0002f3ad) popup_vitu2_query_window

0x157e,	// (0x0002fc3c) bg_vitu2_candi_button_pane

0xd42f,	// (0x0003baed) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd438,	// (0x0003baf6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd441,	// (0x0003baff) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7077,	// (0x00035735) bg_button_pane_cp015

0x708b,	// (0x00035749) bg_button_pane_cp016

0x709e,	// (0x0003575c) bg_button_pane_cp017

0xc36f,	// (0x0003aa2d) bg_popup_sub_pane_cp22

0xd464,	// (0x0003bb22) popup_vitu2_query_window_g1

0x70e3,	// (0x000357a1) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0003e0e0) popup_vitu2_query_window_g

0x7102,	// (0x000357c0) popup_vitu2_query_window_t1_ParamLimits

0x7102,	// (0x000357c0) popup_vitu2_query_window_t1

0x7137,	// (0x000357f5) popup_vitu2_query_window_t2_ParamLimits

0x7137,	// (0x000357f5) popup_vitu2_query_window_t2

0x7149,	// (0x00035807) popup_vitu2_query_window_t3_ParamLimits

0x7149,	// (0x00035807) popup_vitu2_query_window_t3

0x7171,	// (0x0003582f) popup_vitu2_query_window_t4_ParamLimits

0x7171,	// (0x0003582f) popup_vitu2_query_window_t4

0x7192,	// (0x00035850) popup_vitu2_query_window_t5_ParamLimits

0x7192,	// (0x00035850) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0003e0e7) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0003e0e7) popup_vitu2_query_window_t

0xd2e9,	// (0x0003b9a7) main_cset_text_pane

0x6b5d,	// (0x0003521b) aid_area_touch_slider_ParamLimits

0x6b79,	// (0x00035237) cset_slider_pane_ParamLimits

0x6ba3,	// (0x00035261) main_cset_slider_pane_g1_ParamLimits

0x6bb8,	// (0x00035276) main_cset_slider_pane_g2_ParamLimits

0xd30a,	// (0x0003b9c8) main_cset_slider_pane_g3_ParamLimits

0xd30a,	// (0x0003b9c8) main_cset_slider_pane_g3

0x6bcd,	// (0x0003528b) main_cset_slider_pane_g4_ParamLimits

0x6bcd,	// (0x0003528b) main_cset_slider_pane_g4

0x6bdc,	// (0x0003529a) main_cset_slider_pane_g5_ParamLimits

0x6bdc,	// (0x0003529a) main_cset_slider_pane_g5

0x6bea,	// (0x000352a8) main_cset_slider_pane_g6_ParamLimits

0x6bea,	// (0x000352a8) main_cset_slider_pane_g6

0xf97c,	// (0x0003e03a) main_cset_slider_pane_g_ParamLimits

0xd33a,	// (0x0003b9f8) main_cset_slider_pane_t1_ParamLimits

0x6c7a,	// (0x00035338) main_cset_slider_pane_t2_ParamLimits

0x6c94,	// (0x00035352) main_cset_slider_pane_t3_ParamLimits

0x6cae,	// (0x0003536c) main_cset_slider_pane_t4_ParamLimits

0x6cc8,	// (0x00035386) main_cset_slider_pane_t5_ParamLimits

0x6ce6,	// (0x000353a4) main_cset_slider_pane_t6_ParamLimits

0x6cfb,	// (0x000353b9) main_cset_slider_pane_t7_ParamLimits

0x6d29,	// (0x000353e7) main_cset_slider_pane_t8_ParamLimits

0x6d29,	// (0x000353e7) main_cset_slider_pane_t8

0x6d51,	// (0x0003540f) main_cset_slider_pane_t9_ParamLimits

0x6d51,	// (0x0003540f) main_cset_slider_pane_t9

0x6d79,	// (0x00035437) main_cset_slider_pane_t10_ParamLimits

0x6d79,	// (0x00035437) main_cset_slider_pane_t10

0x6da1,	// (0x0003545f) main_cset_slider_pane_t11_ParamLimits

0x6da1,	// (0x0003545f) main_cset_slider_pane_t11

0x6dcb,	// (0x00035489) main_cset_slider_pane_t12_ParamLimits

0x6dcb,	// (0x00035489) main_cset_slider_pane_t12

0x6de8,	// (0x000354a6) main_cset_slider_pane_t13_ParamLimits

0x6de8,	// (0x000354a6) main_cset_slider_pane_t13

0xf9a1,	// (0x0003e05f) main_cset_slider_pane_t_ParamLimits

0x9b91,	// (0x0003824f) bg_popup_sub_pane_cp011

0xd470,	// (0x0003bb2e) main_cset_text_pane_g1

0xd478,	// (0x0003bb36) main_cset_text_pane_t1

0xd486,	// (0x0003bb44) main_cset_text_pane_t2

0xd494,	// (0x0003bb52) main_cset_text_pane_t3

0xd4a2,	// (0x0003bb60) main_cset_text_pane_t4

0xd4b0,	// (0x0003bb6e) main_cset_text_pane_t5

0xd4be,	// (0x0003bb7c) main_cset_text_pane_t6

0xd4cc,	// (0x0003bb8a) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0003e0f6) main_cset_text_pane_t

0x9b91,	// (0x0003824f) main_cam4_burst_pane

0x9b91,	// (0x0003824f) main_cam5_pane

0x6a94,	// (0x00035152) bg_button_pane_cp019

0x6a9d,	// (0x0003515b) bg_button_pane_cp020

0xd316,	// (0x0003b9d4) main_cset_slider_pane_g7_ParamLimits

0xd316,	// (0x0003b9d4) main_cset_slider_pane_g7

0xd322,	// (0x0003b9e0) main_cset_slider_pane_g8_ParamLimits

0xd322,	// (0x0003b9e0) main_cset_slider_pane_g8

0x6bfe,	// (0x000352bc) main_cset_slider_pane_g9_ParamLimits

0x6bfe,	// (0x000352bc) main_cset_slider_pane_g9

0x6c0a,	// (0x000352c8) main_cset_slider_pane_g10_ParamLimits

0x6c0a,	// (0x000352c8) main_cset_slider_pane_g10

0x6c16,	// (0x000352d4) main_cset_slider_pane_g11_ParamLimits

0x6c16,	// (0x000352d4) main_cset_slider_pane_g11

0x6c22,	// (0x000352e0) main_cset_slider_pane_g12_ParamLimits

0x6c22,	// (0x000352e0) main_cset_slider_pane_g12

0x6c2e,	// (0x000352ec) main_cset_slider_pane_g13_ParamLimits

0x6c2e,	// (0x000352ec) main_cset_slider_pane_g13

0x6c3a,	// (0x000352f8) main_cset_slider_pane_g14_ParamLimits

0x6c3a,	// (0x000352f8) main_cset_slider_pane_g14

0x6c46,	// (0x00035304) main_cset_slider_pane_g15_ParamLimits

0x6c46,	// (0x00035304) main_cset_slider_pane_g15

0xd368,	// (0x0003ba26) main_cset_slider_pane_t14_ParamLimits

0xd368,	// (0x0003ba26) main_cset_slider_pane_t14

0xd3a1,	// (0x0003ba5f) main_cset_slider_pane_t15_ParamLimits

0xd3a1,	// (0x0003ba5f) main_cset_slider_pane_t15

0x7209,	// (0x000358c7) aid_cam4_burst_size_cell_ParamLimits

0x7209,	// (0x000358c7) aid_cam4_burst_size_cell

0x7229,	// (0x000358e7) grid_cam4_burst_pane_ParamLimits

0x7229,	// (0x000358e7) grid_cam4_burst_pane

0x7263,	// (0x00035921) linegrid_cam4_burst_pane_ParamLimits

0x7263,	// (0x00035921) linegrid_cam4_burst_pane

0xd4da,	// (0x0003bb98) scroll_pane_cp30_ParamLimits

0xd4da,	// (0x0003bb98) scroll_pane_cp30

0x7285,	// (0x00035943) cell_cam4_burst_pane_ParamLimits

0x7285,	// (0x00035943) cell_cam4_burst_pane

0xd4e6,	// (0x0003bba4) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4e6,	// (0x0003bba4) linegrid_cam4_burst_pane_g1

0x72da,	// (0x00035998) linegrid_cam4_burst_pane_g2_ParamLimits

0x72da,	// (0x00035998) linegrid_cam4_burst_pane_g2

0xd4f3,	// (0x0003bbb1) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4f3,	// (0x0003bbb1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0003e105) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0003e105) linegrid_cam4_burst_pane_g

0x72eb,	// (0x000359a9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x72eb,	// (0x000359a9) linegrid_cam4_burst_pane_g3_copy1

0xd500,	// (0x0003bbbe) linegrid_cam4_burst_pane_g4_ParamLimits

0xd500,	// (0x0003bbbe) linegrid_cam4_burst_pane_g4

0x7309,	// (0x000359c7) linegrid_cam4_burst_pane_g5_ParamLimits

0x7309,	// (0x000359c7) linegrid_cam4_burst_pane_g5

0x731a,	// (0x000359d8) linegrid_cam4_burst_pane_g6_ParamLimits

0x731a,	// (0x000359d8) linegrid_cam4_burst_pane_g6

0xd50d,	// (0x0003bbcb) linegrid_cam4_burst_pane_g7_ParamLimits

0xd50d,	// (0x0003bbcb) linegrid_cam4_burst_pane_g7

0x7331,	// (0x000359ef) cell_cam4_burst_pane_g1

0xd526,	// (0x0003bbe4) main_cam5_pane_t1_ParamLimits

0xd526,	// (0x0003bbe4) main_cam5_pane_t1

0xd538,	// (0x0003bbf6) main_cam5_pane_t2_ParamLimits

0xd538,	// (0x0003bbf6) main_cam5_pane_t2

0xd54a,	// (0x0003bc08) main_cam5_pane_t3_ParamLimits

0xd54a,	// (0x0003bc08) main_cam5_pane_t3

0xd55c,	// (0x0003bc1a) main_cam5_pane_t4_ParamLimits

0xd55c,	// (0x0003bc1a) main_cam5_pane_t4

0xd574,	// (0x0003bc32) main_cam5_pane_t5_ParamLimits

0xd574,	// (0x0003bc32) main_cam5_pane_t5

0xd588,	// (0x0003bc46) main_cam5_pane_t6_ParamLimits

0xd588,	// (0x0003bc46) main_cam5_pane_t6

0xd59c,	// (0x0003bc5a) main_cam5_pane_t7_ParamLimits

0xd59c,	// (0x0003bc5a) main_cam5_pane_t7

0xd5ae,	// (0x0003bc6c) main_cam5_pane_t8_ParamLimits

0xd5ae,	// (0x0003bc6c) main_cam5_pane_t8

0xd5cc,	// (0x0003bc8a) main_cam5_pane_t9_ParamLimits

0xd5cc,	// (0x0003bc8a) main_cam5_pane_t9

0xd5de,	// (0x0003bc9c) main_cam5_pane_t10_ParamLimits

0xd5de,	// (0x0003bc9c) main_cam5_pane_t10

0xd5f0,	// (0x0003bcae) main_cam5_pane_t11_ParamLimits

0xd5f0,	// (0x0003bcae) main_cam5_pane_t11

0xd604,	// (0x0003bcc2) main_cam5_pane_t12_ParamLimits

0xd604,	// (0x0003bcc2) main_cam5_pane_t12

0xd61b,	// (0x0003bcd9) main_cam5_pane_t13_ParamLimits

0xd61b,	// (0x0003bcd9) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0003e111) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0003e111) main_cam5_pane_t

0x1272,	// (0x0002f930) popup_scut_keymap_window_ParamLimits

0x1272,	// (0x0002f930) popup_scut_keymap_window

0x7344,	// (0x00035a02) aid_size_cell_brow_shortcut

0xaf18,	// (0x000395d6) bg_popup_window_pane_cp010

0x7350,	// (0x00035a0e) grid_scut_pane

0x735c,	// (0x00035a1a) cell_scut_pane_ParamLimits

0x735c,	// (0x00035a1a) cell_scut_pane

0x7375,	// (0x00035a33) cell_scut_pane_g1

0xd63e,	// (0x0003bcfc) cell_scut_pane_t1

0xd64d,	// (0x0003bd0b) cell_scut_pane_t2

0x737e,	// (0x00035a3c) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0003e12c) cell_scut_pane_t

0x55c9,	// (0x00033c87) main_mup3_pane_g8_ParamLimits

0x55c9,	// (0x00033c87) main_mup3_pane_g8

0x0bda,	// (0x0002f298) area_vitu2_query_pane_ParamLimits

0x0bda,	// (0x0002f298) area_vitu2_query_pane

0x70b1,	// (0x0003576f) input_focus_pane_cp08

0xd65c,	// (0x0003bd1a) area_vitu2_query_pane_g1

0x738c,	// (0x00035a4a) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0003e133) area_vitu2_query_pane_g

0x739d,	// (0x00035a5b) area_vitu2_query_pane_t1_ParamLimits

0x739d,	// (0x00035a5b) area_vitu2_query_pane_t1

0x73b1,	// (0x00035a6f) area_vitu2_query_pane_t2_ParamLimits

0x73b1,	// (0x00035a6f) area_vitu2_query_pane_t2

0x73c5,	// (0x00035a83) area_vitu2_query_pane_t3_ParamLimits

0x73c5,	// (0x00035a83) area_vitu2_query_pane_t3

0xd668,	// (0x0003bd26) area_vitu2_query_pane_t4_ParamLimits

0xd668,	// (0x0003bd26) area_vitu2_query_pane_t4

0xd690,	// (0x0003bd4e) area_vitu2_query_pane_t5_ParamLimits

0xd690,	// (0x0003bd4e) area_vitu2_query_pane_t5

0xd6b8,	// (0x0003bd76) area_vitu2_query_pane_t6_ParamLimits

0xd6b8,	// (0x0003bd76) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0003e138) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0003e138) area_vitu2_query_pane_t

0x73ed,	// (0x00035aab) bg_button_pane_cp018

0x73fb,	// (0x00035ab9) bg_button_pane_cp021

0x7407,	// (0x00035ac5) bg_button_pane_cp022

0x7418,	// (0x00035ad6) input_focus_pane_cp09

0x37bf,	// (0x00031e7d) aid_size_touch_mv_arrow_left

0x37e8,	// (0x00031ea6) aid_size_touch_mv_arrow_right

0x6c5e,	// (0x0003531c) main_cset_slider_pane_g16_ParamLimits

0x6c5e,	// (0x0003531c) main_cset_slider_pane_g16

0x6c6c,	// (0x0003532a) main_cset_slider_pane_g17_ParamLimits

0x6c6c,	// (0x0003532a) main_cset_slider_pane_g17

0x7331,	// (0x000359ef) cell_cam4_burst_pane_g1_ParamLimits

0x9b91,	// (0x0003824f) compa_mode_pane

0x6eb9,	// (0x00035577) popup_vtel_slider_window_g3_ParamLimits

0x6eb9,	// (0x00035577) popup_vtel_slider_window_g3

0x6ed0,	// (0x0003558e) popup_vtel_slider_window_g4_ParamLimits

0x6ed0,	// (0x0003558e) popup_vtel_slider_window_g4

0x6ee7,	// (0x000355a5) popup_vtel_slider_window_t1_ParamLimits

0x6ee7,	// (0x000355a5) popup_vtel_slider_window_t1

0x9b91,	// (0x0003824f) main_cl_pane

0xc39b,	// (0x0003aa59) popup_imed_adjust2_window_ParamLimits

0xc36f,	// (0x0003aa2d) bg_tb_trans_pane_cp05_ParamLimits

0xccb1,	// (0x0003b36f) popup_imed_adjust2_window_g1_ParamLimits

0xccc0,	// (0x0003b37e) popup_imed_adjust2_window_g2_ParamLimits

0xccc0,	// (0x0003b37e) popup_imed_adjust2_window_g2

0xcccc,	// (0x0003b38a) popup_imed_adjust2_window_g3_ParamLimits

0xcccc,	// (0x0003b38a) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0003dea3) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0003dea3) popup_imed_adjust2_window_g

0xccd8,	// (0x0003b396) popup_imed_adjust2_window_t1_ParamLimits

0xccf0,	// (0x0003b3ae) slider_imed_adjust_pane_ParamLimits

0xcd04,	// (0x0003b3c2) slider_imed_adjust_pane_g1_ParamLimits

0xcd14,	// (0x0003b3d2) slider_imed_adjust_pane_g2_ParamLimits

0xcd24,	// (0x0003b3e2) slider_imed_adjust_pane_g3_ParamLimits

0xcd35,	// (0x0003b3f3) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0003deaa) slider_imed_adjust_pane_g_ParamLimits

0x0990,	// (0x0002f04e) aid_touch_area_cam4_ParamLimits

0x0990,	// (0x0002f04e) aid_touch_area_cam4

0x66cc,	// (0x00034d8a) battery_pane_cp01

0x0a62,	// (0x0002f120) main_camera4_pane_g6_ParamLimits

0x0a62,	// (0x0002f120) main_camera4_pane_g6

0x0a8c,	// (0x0002f14a) main_camera4_pane_t2_ParamLimits

0x0a8c,	// (0x0002f14a) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0003dfad) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0003dfad) main_camera4_pane_t

0x0aad,	// (0x0002f16b) aid_touch_area_vid4_ParamLimits

0x0aad,	// (0x0002f16b) aid_touch_area_vid4

0x0b01,	// (0x0002f1bf) main_video4_pane_g5_ParamLimits

0x0b01,	// (0x0002f1bf) main_video4_pane_g5

0x0b26,	// (0x0002f1e4) vid4_progress_pane_ParamLimits

0x0b26,	// (0x0002f1e4) vid4_progress_pane

0xd32e,	// (0x0003b9ec) main_cset_slider_pane_g18_ParamLimits

0xd32e,	// (0x0003b9ec) main_cset_slider_pane_g18

0xd51a,	// (0x0003bbd8) cell_cam4_burst_pane_g2_ParamLimits

0xd51a,	// (0x0003bbd8) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0003e10c) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0003e10c) cell_cam4_burst_pane_g

0xa333,	// (0x000389f1) bg_cl_pane_ParamLimits

0xa333,	// (0x000389f1) bg_cl_pane

0x7429,	// (0x00035ae7) cl_header_pane_ParamLimits

0x7429,	// (0x00035ae7) cl_header_pane

0x743d,	// (0x00035afb) cl_listscroll_pane_ParamLimits

0x743d,	// (0x00035afb) cl_listscroll_pane

0xd704,	// (0x0003bdc2) bg_cl_pane_g1

0xd70c,	// (0x0003bdca) bg_cl_pane_g2

0xd714,	// (0x0003bdd2) bg_cl_pane_g3

0xd71c,	// (0x0003bdda) bg_cl_pane_g4

0xd724,	// (0x0003bde2) bg_cl_pane_g5

0xd72c,	// (0x0003bdea) bg_cl_pane_g6

0xd734,	// (0x0003bdf2) bg_cl_pane_g7

0xd73c,	// (0x0003bdfa) bg_cl_pane_g8

0xd744,	// (0x0003be02) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0003e147) bg_cl_pane_g

0x744d,	// (0x00035b0b) aid_height_cl_leading_ParamLimits

0x744d,	// (0x00035b0b) aid_height_cl_leading

0x7459,	// (0x00035b17) aid_height_cl_text_ParamLimits

0x7459,	// (0x00035b17) aid_height_cl_text

0x9bf2,	// (0x000382b0) bg_cl_header_pane_ParamLimits

0x9bf2,	// (0x000382b0) bg_cl_header_pane

0x7478,	// (0x00035b36) cl_header_pane_g1_ParamLimits

0x7478,	// (0x00035b36) cl_header_pane_g1

0x748e,	// (0x00035b4c) cl_header_pane_t1_ParamLimits

0x748e,	// (0x00035b4c) cl_header_pane_t1

0xd74c,	// (0x0003be0a) cl_list_pane

0xd301,	// (0x0003b9bf) hc_scroll_pane_cp01

0xa746,	// (0x00038e04) bg_cl_header_pane_g1

0xd1e3,	// (0x0003b8a1) bg_cl_header_pane_g2

0xa766,	// (0x00038e24) bg_cl_header_pane_g3

0xd1f3,	// (0x0003b8b1) bg_cl_header_pane_g4

0xd1eb,	// (0x0003b8a9) bg_cl_header_pane_g5

0xd41b,	// (0x0003bad9) bg_cl_header_pane_g6

0xd20b,	// (0x0003b8c9) bg_cl_header_pane_g7

0xd213,	// (0x0003b8d1) bg_cl_header_pane_g8

0xd203,	// (0x0003b8c1) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0003e15a) bg_cl_header_pane_g

0x74a7,	// (0x00035b65) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74a7,	// (0x00035b65) hc_cl_list_double_graphic_heading_pane

0x74ba,	// (0x00035b78) hc_cl_list_single_graphic_pane_ParamLimits

0x74ba,	// (0x00035b78) hc_cl_list_single_graphic_pane

0x74d2,	// (0x00035b90) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x74d2,	// (0x00035b90) hc_cl_list_single_graphic_pane_g1

0x74de,	// (0x00035b9c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x74de,	// (0x00035b9c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0003e16d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0003e16d) hc_cl_list_single_graphic_pane_g

0x74f2,	// (0x00035bb0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74f2,	// (0x00035bb0) hc_cl_list_single_graphic_pane_t1

0x74d2,	// (0x00035b90) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x74d2,	// (0x00035b90) hc_cl_list_double_graphic_heading_pane_g1

0x7507,	// (0x00035bc5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7507,	// (0x00035bc5) hc_cl_list_double_graphic_heading_pane_g2

0x751b,	// (0x00035bd9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x751b,	// (0x00035bd9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0003e172) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0003e172) hc_cl_list_double_graphic_heading_pane_g

0x752f,	// (0x00035bed) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x752f,	// (0x00035bed) hc_cl_list_double_graphic_heading_pane_t1

0x7544,	// (0x00035c02) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7544,	// (0x00035c02) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0003e179) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0003e179) hc_cl_list_double_graphic_heading_pane_t

0x1001,	// (0x0002f6bf) vid4_progress_pane_g1

0x1013,	// (0x0002f6d1) vid4_progress_pane_g2

0x3ebb,	// (0x00032579) vid4_progress_pane_g3

0xab33,	// (0x000391f1) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0003e17e) vid4_progress_pane_g

0xab51,	// (0x0003920f) vid4_progress_pane_t1

0xab66,	// (0x00039224) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0003e189) vid4_progress_pane_t

0xab91,	// (0x0003924f) wait_bar_pane_cp07

0xc5ad,	// (0x0003ac6b) blid_firmament_pane_ParamLimits

0xc5f0,	// (0x0003acae) popup_blid_sat_info2_window_g1

0xc614,	// (0x0003acd2) popup_blid_sat_info2_window_t3

0xc622,	// (0x0003ace0) popup_blid_sat_info2_window_t4

0xc630,	// (0x0003acee) popup_blid_sat_info2_window_t5

0xc63e,	// (0x0003acfc) popup_blid_sat_info2_window_t6

0xc64e,	// (0x0003ad0c) popup_blid_sat_info2_window_t7

0xc65c,	// (0x0003ad1a) popup_blid_sat_info2_window_t8

0xc66a,	// (0x0003ad28) popup_blid_sat_info2_window_t9

0xc678,	// (0x0003ad36) popup_blid_sat_info2_window_t10

0xc740,	// (0x0003adfe) aid_firma_cardinal_ParamLimits

0xc754,	// (0x0003ae12) blid_firmament_pane_t1_ParamLimits

0xc76b,	// (0x0003ae29) blid_firmament_pane_t2_ParamLimits

0xc782,	// (0x0003ae40) blid_firmament_pane_t3_ParamLimits

0xc799,	// (0x0003ae57) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0003dd9c) blid_firmament_pane_t_ParamLimits

0xc7b0,	// (0x0003ae6e) blid_sat_info_pane_ParamLimits

0x9bf2,	// (0x000382b0) main_cam_set_pane_ParamLimits

0x5e28,	// (0x000344e6) aid_size_cell_colour_35_ParamLimits

0x5e48,	// (0x00034506) aid_size_cell_colour_112_ParamLimits

0x5e68,	// (0x00034526) aid_size_cell_effect_ParamLimits

0xc36f,	// (0x0003aa2d) bg_tb_trans_pane_cp02_ParamLimits

0xa9ac,	// (0x0003906a) heading_imed_pane_ParamLimits

0x5e88,	// (0x00034546) listscroll_imed_pane_ParamLimits

0xb991,	// (0x0003a04f) popup_call2_audio_first_window_g5_ParamLimits

0xb991,	// (0x0003a04f) popup_call2_audio_first_window_g5

0x076b,	// (0x0002ee29) aid_size_touch_image3_arrow_left_ParamLimits

0x076b,	// (0x0002ee29) aid_size_touch_image3_arrow_left

0x0797,	// (0x0002ee55) aid_size_touch_image3_arrow_right_ParamLimits

0x0797,	// (0x0002ee55) aid_size_touch_image3_arrow_right

0xab7c,	// (0x0003923a) vid4_progress_pane_t3

0x61a7,	// (0x00034865) main_hwr_training_symbol_option_pane_ParamLimits

0x61a7,	// (0x00034865) main_hwr_training_symbol_option_pane

0xcfa0,	// (0x0003b65e) popup_hwr_training_preview_window_ParamLimits

0xcfa0,	// (0x0003b65e) popup_hwr_training_preview_window

0x0608,	// (0x0002ecc6) hwr_training_navi_pane_g5_ParamLimits

0x0608,	// (0x0002ecc6) hwr_training_navi_pane_g5

0xd1d1,	// (0x0003b88f) popup_char_count_window

0x6761,	// (0x00034e1f) bg_popup_sub_pane_cp20_ParamLimits

0x0f68,	// (0x0002f626) list_vitu2_match_list_pane_ParamLimits

0x0f77,	// (0x0002f635) vitu2_page_scroll_pane_ParamLimits

0x0f77,	// (0x0002f635) vitu2_page_scroll_pane

0xd777,	// (0x0003be35) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd777,	// (0x0003be35) list_single_hwr_training_symbol_option_pane

0xd78a,	// (0x0003be48) list_single_hwr_training_symbol_option_pane_g1

0xd792,	// (0x0003be50) list_single_hwr_training_symbol_option_pane_t1

0xd7a0,	// (0x0003be5e) bg_button_pane_cp023

0xd7a9,	// (0x0003be67) bg_button_pane_cp024

0x7588,	// (0x00035c46) vitu2_page_scroll_pane_g1

0x7590,	// (0x00035c4e) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0003e190) vitu2_page_scroll_pane_g

0x759a,	// (0x00035c58) vitu2_page_scroll_pane_t1

0xc50d,	// (0x0003abcb) popup_char_count_window_g1

0xd7dc,	// (0x0003be9a) popup_char_count_window_g2

0xd7e5,	// (0x0003bea3) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0003e195) popup_char_count_window_g

0xd7ee,	// (0x0003beac) popup_char_count_window_t1

0x9b91,	// (0x0003824f) main_vded2_pane

0xcc9d,	// (0x0003b35b) aid_size_cell_imed_line

0xcca7,	// (0x0003b365) grid_imed_line_width_pane

0x67b6,	// (0x00034e74) vid4_indicators_pane_g4

0xd7fc,	// (0x0003beba) cell_imed_line_width_pane_ParamLimits

0xd7fc,	// (0x0003beba) cell_imed_line_width_pane

0xd812,	// (0x0003bed0) cell_imed_line_width_pane_g1

0xcc07,	// (0x0003b2c5) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0003e19c) cell_imed_line_width_pane_g

0x75a9,	// (0x00035c67) main_vded2_pane_g1_ParamLimits

0x75a9,	// (0x00035c67) main_vded2_pane_g1

0x75c4,	// (0x00035c82) main_vded2_pane_g2_ParamLimits

0x75c4,	// (0x00035c82) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0003e1a1) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0003e1a1) main_vded2_pane_g

0x75d6,	// (0x00035c94) vded2_slider_pane_ParamLimits

0x75d6,	// (0x00035c94) vded2_slider_pane

0x75e6,	// (0x00035ca4) aid_size_touch_vded2_end

0x75f0,	// (0x00035cae) aid_size_touch_vded2_playhead

0xd81b,	// (0x0003bed9) aid_size_touch_vded2_start

0xd823,	// (0x0003bee1) vded2_slider_bg_pane

0xd82c,	// (0x0003beea) vded2_slider_pane_g1

0xd835,	// (0x0003bef3) vded2_slider_pane_g2

0x75fa,	// (0x00035cb8) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0003e1a6) vded2_slider_pane_g

0xd83d,	// (0x0003befb) vded2_slider_bg_pane_g1

0xd846,	// (0x0003bf04) vded2_slider_bg_pane_g2

0xd84f,	// (0x0003bf0d) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0003e1ad) vded2_slider_bg_pane_g

0x3ed3,	// (0x00032591) aid_postcard_touch_down_pane_ParamLimits

0x3ed3,	// (0x00032591) aid_postcard_touch_down_pane

0x3eeb,	// (0x000325a9) aid_postcard_touch_up_pane_ParamLimits

0x3eeb,	// (0x000325a9) aid_postcard_touch_up_pane

0x9b91,	// (0x0003824f) main_blid2_pane

0xc37d,	// (0x0003aa3b) popup_blid2_search_window

0x9b91,	// (0x0003824f) blid2_gps_pane

0x9b91,	// (0x0003824f) blid2_navig_pane

0x9b91,	// (0x0003824f) blid2_search_pane

0x9b91,	// (0x0003824f) blid2_tripm_pane

0x7605,	// (0x00035cc3) blid2_search_pane_g1_ParamLimits

0x7605,	// (0x00035cc3) blid2_search_pane_g1

0x7618,	// (0x00035cd6) blid2_search_pane_t1_ParamLimits

0x7618,	// (0x00035cd6) blid2_search_pane_t1

0x762a,	// (0x00035ce8) aid_size_cell_blid2_gps_ParamLimits

0x762a,	// (0x00035ce8) aid_size_cell_blid2_gps

0x7642,	// (0x00035d00) blid2_gps_pane_g1_ParamLimits

0x7642,	// (0x00035d00) blid2_gps_pane_g1

0x7656,	// (0x00035d14) grid_blid2_satellite_pane_ParamLimits

0x7656,	// (0x00035d14) grid_blid2_satellite_pane

0x766e,	// (0x00035d2c) blid2_navig_pane_g1_ParamLimits

0x766e,	// (0x00035d2c) blid2_navig_pane_g1

0x767a,	// (0x00035d38) blid2_navig_pane_t1_ParamLimits

0x767a,	// (0x00035d38) blid2_navig_pane_t1

0x7695,	// (0x00035d53) blid2_navig_pane_t2_ParamLimits

0x7695,	// (0x00035d53) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0003e1b4) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0003e1b4) blid2_navig_pane_t

0x76b0,	// (0x00035d6e) blid2_navig_ring_pane_ParamLimits

0x76b0,	// (0x00035d6e) blid2_navig_ring_pane

0x76cb,	// (0x00035d89) blid2_speed_pane_ParamLimits

0x76cb,	// (0x00035d89) blid2_speed_pane

0x76d7,	// (0x00035d95) blid2_tripm_pane_g1_ParamLimits

0x76d7,	// (0x00035d95) blid2_tripm_pane_g1

0x76f2,	// (0x00035db0) blid2_tripm_pane_g2_ParamLimits

0x76f2,	// (0x00035db0) blid2_tripm_pane_g2

0x7706,	// (0x00035dc4) blid2_tripm_pane_g3_ParamLimits

0x7706,	// (0x00035dc4) blid2_tripm_pane_g3

0x771a,	// (0x00035dd8) blid2_tripm_pane_g4_ParamLimits

0x771a,	// (0x00035dd8) blid2_tripm_pane_g4

0x772e,	// (0x00035dec) blid2_tripm_pane_g5_ParamLimits

0x772e,	// (0x00035dec) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0003e1b9) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0003e1b9) blid2_tripm_pane_g

0x7754,	// (0x00035e12) blid2_tripm_pane_t1_ParamLimits

0x7754,	// (0x00035e12) blid2_tripm_pane_t1

0x776d,	// (0x00035e2b) blid2_tripm_pane_t2_ParamLimits

0x776d,	// (0x00035e2b) blid2_tripm_pane_t2

0x7786,	// (0x00035e44) blid2_tripm_pane_t3_ParamLimits

0x7786,	// (0x00035e44) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0003e1c6) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0003e1c6) blid2_tripm_pane_t

0x77cd,	// (0x00035e8b) cell_blid2_satellite_pane_ParamLimits

0x77cd,	// (0x00035e8b) cell_blid2_satellite_pane

0x77eb,	// (0x00035ea9) cell_blid2_satellite_pane_g1

0xd858,	// (0x0003bf16) cell_blid2_satellite_pane_t1

0xc7c0,	// (0x0003ae7e) blid2_speed_pane_g1

0xd866,	// (0x0003bf24) blid2_speed_pane_t1

0xd874,	// (0x0003bf32) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0003e1cf) blid2_speed_pane_t

0xc7c0,	// (0x0003ae7e) blid2_navig_ring_pane_g1

0x77f4,	// (0x00035eb2) blid2_navig_ring_pane_g2

0x77fc,	// (0x00035eba) blid2_navig_ring_pane_g3

0x7804,	// (0x00035ec2) blid2_navig_ring_pane_g4

0x780c,	// (0x00035eca) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0003e1d4) blid2_navig_ring_pane_g

0x9b91,	// (0x0003824f) bg_popup_window_pane_cp011

0xd882,	// (0x0003bf40) popup_blid2_search_window_g1

0xd88a,	// (0x0003bf48) popup_blid2_search_window_t1

0xd898,	// (0x0003bf56) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0003e1df) popup_blid2_search_window_t

0xa655,	// (0x00038d13) main_browser_pane_g1

0xa333,	// (0x000389f1) main_browser_pane_ParamLimits

0x6761,	// (0x00034e1f) bg_button_pane_cp011_ParamLimits

0x0edc,	// (0x0002f59a) cell_vitu2_function_pane_g1_ParamLimits

0xc36f,	// (0x0003aa2d) bg_popup_sub_pane_cp22_ParamLimits

0x70b1,	// (0x0003576f) input_focus_pane_cp08_ParamLimits

0x70c8,	// (0x00035786) popup_vitu2_query_button_pane_ParamLimits

0x70c8,	// (0x00035786) popup_vitu2_query_button_pane

0x70d9,	// (0x00035797) popup_vitu2_query_input_button_pane

0xd464,	// (0x0003bb22) popup_vitu2_query_window_g1_ParamLimits

0x70e3,	// (0x000357a1) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0003e0e0) popup_vitu2_query_window_g_ParamLimits

0x9b91,	// (0x0003824f) bg_button_pane_cp026

0x7814,	// (0x00035ed2) popup_vitu2_query_input_button_pane_g1

0x9b91,	// (0x0003824f) bg_button_pane_cp025

0xd8a6,	// (0x0003bf64) popup_vitu2_query_button_pane_t1

0x5243,	// (0x00033901) main_mp3_pane_t6

0x5251,	// (0x0003390f) popup_slider_window_cp01

0x670c,	// (0x00034dca) cam4_battery_pane

0x676f,	// (0x00034e2d) cam4_battery_pane_cp02

0xab2b,	// (0x000391e9) cam4_battery_pane_cp01

0xab2b,	// (0x000391e9) cam4_battery_pane_cp03

0xd09e,	// (0x0003b75c) cam4_battery_pane_g1

0xc7c0,	// (0x0003ae7e) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0003e1e4) cam4_battery_pane_g

0xc686,	// (0x0003ad44) popup_blid_sat_info2_window_t11

0x37bf,	// (0x00031e7d) aid_size_touch_mv_arrow_left_ParamLimits

0x37e8,	// (0x00031ea6) aid_size_touch_mv_arrow_right_ParamLimits

0xae78,	// (0x00039536) navi_pane_g1_ParamLimits

0x3827,	// (0x00031ee5) navi_pane_g2_ParamLimits

0x3855,	// (0x00031f13) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0003daae) navi_pane_g_ParamLimits

0x38af,	// (0x00031f6d) navi_pane_mv_t1_ParamLimits

0x5e94,	// (0x00034552) grid_imed_effect_pane_ParamLimits

0x219c,	// (0x0003085a) aid_placing_vt_slider_lsc

0xa5a0,	// (0x00038c5e) aid_placing_vt_slider_prt

0x9bf2,	// (0x000382b0) bg_tb_trans_pane_cp01_ParamLimits

0xc910,	// (0x0003afce) popup_image_details_window_g1_ParamLimits

0xc923,	// (0x0003afe1) popup_image_details_window_g2_ParamLimits

0xc938,	// (0x0003aff6) popup_image_details_window_g3_ParamLimits

0xc938,	// (0x0003aff6) popup_image_details_window_g3

0xf723,	// (0x0003dde1) popup_image_details_window_g_ParamLimits

0xc94c,	// (0x0003b00a) popup_image_details_window_t1_ParamLimits

0xc95e,	// (0x0003b01c) popup_image_details_window_t2_ParamLimits

0xc977,	// (0x0003b035) popup_image_details_window_t3_ParamLimits

0xc98b,	// (0x0003b049) popup_image_details_window_t4_ParamLimits

0xc9a6,	// (0x0003b064) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0003dde8) popup_image_details_window_t_ParamLimits

0x7465,	// (0x00035b23) cl_header_name_pane_ParamLimits

0x7465,	// (0x00035b23) cl_header_name_pane

0x781c,	// (0x00035eda) cl_header_name_pane_t1_ParamLimits

0x781c,	// (0x00035eda) cl_header_name_pane_t1

0x783d,	// (0x00035efb) cl_header_name_pane_t2_ParamLimits

0x783d,	// (0x00035efb) cl_header_name_pane_t2

0x787f,	// (0x00035f3d) cl_header_name_pane_t3_ParamLimits

0x787f,	// (0x00035f3d) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0003e1e9) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0003e1e9) cl_header_name_pane_t

0x3880,	// (0x00031f3e) navi_pane_mv_g2_ParamLimits

0xd18e,	// (0x0003b84c) field_vitu2_entry_pane_g1_ParamLimits

0xd19a,	// (0x0003b858) field_vitu2_entry_pane_g2_ParamLimits

0xd1a6,	// (0x0003b864) field_vitu2_entry_pane_g3_ParamLimits

0xd1a6,	// (0x0003b864) field_vitu2_entry_pane_g3

0xf921,	// (0x0003dfdf) field_vitu2_entry_pane_g_ParamLimits

0x0d7c,	// (0x0002f43a) cell_vitu2_itu_pane_g1_ParamLimits

0x0d8c,	// (0x0002f44a) cell_vitu2_itu_pane_g2_ParamLimits

0x0d8c,	// (0x0002f44a) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0003dfeb) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0003dfeb) cell_vitu2_itu_pane_g

0x6761,	// (0x00034e1f) bg_vkb2_func_pane_cp05_ParamLimits

0x6761,	// (0x00034e1f) bg_vkb2_func_pane_cp05

0x6761,	// (0x00034e1f) bg_vkb2_func_pane_cp03

0x6761,	// (0x00034e1f) bg_vkb2_func_pane_cp04

0x6761,	// (0x00034e1f) bg_vkb2_func_pane_cp10_ParamLimits

0x6761,	// (0x00034e1f) bg_vkb2_func_pane_cp10

0x7407,	// (0x00035ac5) bg_vkb2_func_pane_cp08

0x73ed,	// (0x00035aab) bg_vkb2_func_pane_cp06

0x73fb,	// (0x00035ab9) bg_vkb2_func_pane_cp07

0xd7b2,	// (0x0003be70) bg_vkb2_func_pane_cp11_ParamLimits

0xd7b2,	// (0x0003be70) bg_vkb2_func_pane_cp11

0xd7c7,	// (0x0003be85) bg_vkb2_func_pane_cp12_ParamLimits

0xd7c7,	// (0x0003be85) bg_vkb2_func_pane_cp12

0x9b91,	// (0x0003824f) bg_vkb2_func_pane_cp09

0xd1e3,	// (0x0003b8a1) bg_vkb2_func_pane_g1

0xa766,	// (0x00038e24) bg_vkb2_func_pane_g2

0xd1eb,	// (0x0003b8a9) bg_vkb2_func_pane_g3

0xd1f3,	// (0x0003b8b1) bg_vkb2_func_pane_g4

0xd41b,	// (0x0003bad9) bg_vkb2_func_pane_g5

0xd20b,	// (0x0003b8c9) bg_vkb2_func_pane_g6

0xd213,	// (0x0003b8d1) bg_vkb2_func_pane_g7

0xd203,	// (0x0003b8c1) bg_vkb2_func_pane_g8

0xa746,	// (0x00038e04) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0003e1f0) bg_vkb2_func_pane_g

0x7742,	// (0x00035e00) blid2_tripm_pane_g6_ParamLimits

0x7742,	// (0x00035e00) blid2_tripm_pane_g6

0xd058,	// (0x0003b716) mp4_progress_pane_g1

0x77b9,	// (0x00035e77) blid2_tripm_values_pane_ParamLimits

0x77b9,	// (0x00035e77) blid2_tripm_values_pane

0x78b0,	// (0x00035f6e) blid2_tripm_values_pane_t1

0x78be,	// (0x00035f7c) blid2_tripm_values_pane_t2

0x78cc,	// (0x00035f8a) blid2_tripm_values_pane_t3

0x78da,	// (0x00035f98) blid2_tripm_values_pane_t4

0x78e8,	// (0x00035fa6) blid2_tripm_values_pane_t5

0x78f6,	// (0x00035fb4) blid2_tripm_values_pane_t6

0x7904,	// (0x00035fc2) blid2_tripm_values_pane_t7

0x7912,	// (0x00035fd0) blid2_tripm_values_pane_t8

0x7920,	// (0x00035fde) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0003e203) blid2_tripm_values_pane_t

0x21d9,	// (0x00030897) call_video_pane_t1_ParamLimits

0x21f3,	// (0x000308b1) call_video_pane_t2_ParamLimits

0xf279,	// (0x0003d937) call_video_pane_t_ParamLimits

0x3e16,	// (0x000324d4) msg_header_pane_g1_ParamLimits

0xb0a2,	// (0x00039760) msg_header_pane_g2_ParamLimits

0xb0a2,	// (0x00039760) msg_header_pane_g2

0x0001,

0xf493,	// (0x0003db51) msg_header_pane_g_ParamLimits

0xf493,	// (0x0003db51) msg_header_pane_g

0xa333,	// (0x000389f1) main_clock2_pane_ParamLimits

0x5bfd,	// (0x000342bb) grid_clock2_toolbar_pane_ParamLimits

0x5bfd,	// (0x000342bb) grid_clock2_toolbar_pane

0x5bfd,	// (0x000342bb) listscroll_clock2_pane_ParamLimits

0x5bfd,	// (0x000342bb) listscroll_clock2_pane

0x5cf4,	// (0x000343b2) main_clock2_pane_t3_ParamLimits

0x5cf4,	// (0x000343b2) main_clock2_pane_t3

0x5d18,	// (0x000343d6) main_clock2_pane_t4_ParamLimits

0x5d18,	// (0x000343d6) main_clock2_pane_t4

0xd8b4,	// (0x0003bf72) cell_clock2_toolbar_pane

0xd8bc,	// (0x0003bf7a) cell_clock2_toolbar_pane_cp01

0xd8bc,	// (0x0003bf7a) cell_clock2_toolbar_pane_cp02

0xd8c4,	// (0x0003bf82) cell_clock2_toolbar_pane_cp03

0xd8cc,	// (0x0003bf8a) list_clock2_pane

0xadde,	// (0x0003949c) scroll_pane_cp10

0xd8d4,	// (0x0003bf92) list_single_clock2_pane_ParamLimits

0xd8d4,	// (0x0003bf92) list_single_clock2_pane

0xaf18,	// (0x000395d6) list_highlight_pane_cp08

0xd8e1,	// (0x0003bf9f) list_single_clock2_pane_t1

0xd8ef,	// (0x0003bfad) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0003e216) list_single_clock2_pane_t

0x9b91,	// (0x0003824f) bg_button_pane_cp10

0xd8fd,	// (0x0003bfbb) cell_clock2_toolbar_pane_g1

0x00e6,	// (0x0002e7a4) aid_main_viewer_pane_g1_ParamLimits

0x00e6,	// (0x0002e7a4) aid_main_viewer_pane_g1

0x00f4,	// (0x0002e7b2) aid_main_viewer_pane_g2_ParamLimits

0x00f4,	// (0x0002e7b2) aid_main_viewer_pane_g2

0x3e6d,	// (0x0003252b) aid_main_viewer_pane_g3_ParamLimits

0x3e6d,	// (0x0003252b) aid_main_viewer_pane_g3

0x3e7c,	// (0x0003253a) aid_main_viewer_pane_g4_ParamLimits

0x3e7c,	// (0x0003253a) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0003db62) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0003db62) aid_main_viewer_pane_g

0x47dd,	// (0x00032e9b) main_calc_pane_ParamLimits

0x47f1,	// (0x00032eaf) main_dialer2_pane_ParamLimits

0x9b91,	// (0x0003824f) main_cam6_pane

0x9b91,	// (0x0003824f) main_vid6_pane

0x5c09,	// (0x000342c7) listscroll_gen_pane_cp06_ParamLimits

0x5c09,	// (0x000342c7) listscroll_gen_pane_cp06

0x5d3b,	// (0x000343f9) main_clock2_pane_t5_ParamLimits

0x5d3b,	// (0x000343f9) main_clock2_pane_t5

0x5d9b,	// (0x00034459) aid_call2_pane_cp10_ParamLimits

0x5dad,	// (0x0003446b) aid_call_pane_cp10_ParamLimits

0xae4d,	// (0x0003950b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae4d,	// (0x0003950b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5dbf,	// (0x0003447d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5dbf,	// (0x0003447d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae4d,	// (0x0003950b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0003de98) popup_clock_analogue_window_cp10_g_ParamLimits

0x5dd5,	// (0x00034493) popup_clock_analogue_window_cp10_t1_ParamLimits

0x64ba,	// (0x00034b78) cell_dialer2_keypad_pane_g2_ParamLimits

0x64ba,	// (0x00034b78) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0003df7e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0003df7e) cell_dialer2_keypad_pane_g

0x64d6,	// (0x00034b94) cell_dialer2_keypad_pane_t1

0x6b4f,	// (0x0003520d) main_cset_text2_pane_ParamLimits

0x6b4f,	// (0x0003520d) main_cset_text2_pane

0xd65c,	// (0x0003bd1a) area_vitu2_query_pane_g1_ParamLimits

0x738c,	// (0x00035a4a) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0003e133) area_vitu2_query_pane_g_ParamLimits

0xd6e0,	// (0x0003bd9e) area_vitu2_query_pane_t7_ParamLimits

0xd6e0,	// (0x0003bd9e) area_vitu2_query_pane_t7

0x73ed,	// (0x00035aab) bg_button_pane_cp018_ParamLimits

0x73fb,	// (0x00035ab9) bg_button_pane_cp021_ParamLimits

0x7407,	// (0x00035ac5) bg_button_pane_cp022_ParamLimits

0x7407,	// (0x00035ac5) bg_vkb2_func_pane_cp08_ParamLimits

0x73ed,	// (0x00035aab) bg_vkb2_func_pane_cp06_ParamLimits

0x73fb,	// (0x00035ab9) bg_vkb2_func_pane_cp07_ParamLimits

0x7418,	// (0x00035ad6) input_focus_pane_cp09_ParamLimits

0xaba5,	// (0x00039263) cam6_autofocus_pane_ParamLimits

0xaba5,	// (0x00039263) cam6_autofocus_pane

0x1025,	// (0x0002f6e3) cam6_image_uncrop_pane_ParamLimits

0x1025,	// (0x0002f6e3) cam6_image_uncrop_pane

0x1034,	// (0x0002f6f2) cam6_indi_pane_ParamLimits

0x1034,	// (0x0002f6f2) cam6_indi_pane

0x104a,	// (0x0002f708) cam6_mode_pane_ParamLimits

0x104a,	// (0x0002f708) cam6_mode_pane

0x105c,	// (0x0002f71a) cam6_timer_pane_ParamLimits

0x105c,	// (0x0002f71a) cam6_timer_pane

0x1068,	// (0x0002f726) cam6_zoom_pane_ParamLimits

0x1068,	// (0x0002f726) cam6_zoom_pane

0x792e,	// (0x00035fec) cam6_mode_pane_g1_ParamLimits

0x792e,	// (0x00035fec) cam6_mode_pane_g1

0x793e,	// (0x00035ffc) cam6_mode_pane_g2_ParamLimits

0x793e,	// (0x00035ffc) cam6_mode_pane_g2

0x794e,	// (0x0003600c) cam6_mode_pane_g3_ParamLimits

0x794e,	// (0x0003600c) cam6_mode_pane_g3

0x795e,	// (0x0003601c) cam6_mode_pane_g4_ParamLimits

0x795e,	// (0x0003601c) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0003e21b) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0003e21b) cam6_mode_pane_g

0xd905,	// (0x0003bfc3) bg_tb_trans_pane_cp08_ParamLimits

0xd905,	// (0x0003bfc3) bg_tb_trans_pane_cp08

0xd913,	// (0x0003bfd1) cam6_battery_pane_ParamLimits

0xd913,	// (0x0003bfd1) cam6_battery_pane

0xd929,	// (0x0003bfe7) cam6_indi_pane_g1_ParamLimits

0xd929,	// (0x0003bfe7) cam6_indi_pane_g1

0xd93b,	// (0x0003bff9) cam6_indi_pane_g2_ParamLimits

0xd93b,	// (0x0003bff9) cam6_indi_pane_g2

0xd94d,	// (0x0003c00b) cam6_indi_pane_g3_ParamLimits

0xd94d,	// (0x0003c00b) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0003e224) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0003e224) cam6_indi_pane_g

0xd95f,	// (0x0003c01d) cam6_indi_pane_t1_ParamLimits

0xd95f,	// (0x0003c01d) cam6_indi_pane_t1

0x67f3,	// (0x00034eb1) cam6_autofocus_pane_g1

0x67eb,	// (0x00034ea9) cam6_autofocus_pane_g2

0x6803,	// (0x00034ec1) cam6_autofocus_pane_g3

0x67fb,	// (0x00034eb9) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0003e22b) cam6_autofocus_pane_g

0xd985,	// (0x0003c043) cam6_timer_pane_g1

0xd98d,	// (0x0003c04b) cam6_timer_pane_t1

0xd99b,	// (0x0003c059) cam6_zoom_cont_pane

0xd9a3,	// (0x0003c061) cam6_zoom_pane_g1

0xd9ab,	// (0x0003c069) cam6_zoom_pane_g2

0x796e,	// (0x0003602c) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0003e234) cam6_zoom_pane_g

0xc7c0,	// (0x0003ae7e) cam6_battery_pane_g1

0xc7c0,	// (0x0003ae7e) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0003dda5) cam6_battery_pane_g

0xd9b3,	// (0x0003c071) cam6_zoom_cont_pane_g1

0xd9bc,	// (0x0003c07a) cam6_zoom_cont_pane_g2

0xd9c5,	// (0x0003c083) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0003e23b) cam6_zoom_cont_pane_g

0x798b,	// (0x00036049) cam6_mode_pane_cp_ParamLimits

0x798b,	// (0x00036049) cam6_mode_pane_cp

0x799d,	// (0x0003605b) cam6_zoom_pane_cp_ParamLimits

0x799d,	// (0x0003605b) cam6_zoom_pane_cp

0x79ab,	// (0x00036069) vid6_image_uncrop_cif_pane_ParamLimits

0x79ab,	// (0x00036069) vid6_image_uncrop_cif_pane

0x79bb,	// (0x00036079) vid6_image_uncrop_nhd_pane_ParamLimits

0x79bb,	// (0x00036079) vid6_image_uncrop_nhd_pane

0x79ca,	// (0x00036088) vid6_image_uncrop_vga_pane_ParamLimits

0x79ca,	// (0x00036088) vid6_image_uncrop_vga_pane

0x79d9,	// (0x00036097) vid6_image_uncrop_wvga_pane_ParamLimits

0x79d9,	// (0x00036097) vid6_image_uncrop_wvga_pane

0x79e8,	// (0x000360a6) vid6_indi_pane_ParamLimits

0x79e8,	// (0x000360a6) vid6_indi_pane

0xd905,	// (0x0003bfc3) bg_tb_trans_pane_cp09_ParamLimits

0xd905,	// (0x0003bfc3) bg_tb_trans_pane_cp09

0xd9dd,	// (0x0003c09b) cam6_battery_pane_cp_ParamLimits

0xd9dd,	// (0x0003c09b) cam6_battery_pane_cp

0xd9e9,	// (0x0003c0a7) vid6_indi_pane_g1_ParamLimits

0xd9e9,	// (0x0003c0a7) vid6_indi_pane_g1

0xd9fb,	// (0x0003c0b9) vid6_indi_pane_g2_ParamLimits

0xd9fb,	// (0x0003c0b9) vid6_indi_pane_g2

0xda0d,	// (0x0003c0cb) vid6_indi_pane_g3_ParamLimits

0xda0d,	// (0x0003c0cb) vid6_indi_pane_g3

0xda24,	// (0x0003c0e2) vid6_indi_pane_g4_ParamLimits

0xda24,	// (0x0003c0e2) vid6_indi_pane_g4

0xda3b,	// (0x0003c0f9) vid6_indi_pane_g5_ParamLimits

0xda3b,	// (0x0003c0f9) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0003e242) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0003e242) vid6_indi_pane_g

0xda55,	// (0x0003c113) vid6_indi_pane_t1_ParamLimits

0xda55,	// (0x0003c113) vid6_indi_pane_t1

0xda6b,	// (0x0003c129) vid6_indi_pane_t2_ParamLimits

0xda6b,	// (0x0003c129) vid6_indi_pane_t2

0xda93,	// (0x0003c151) vid6_indi_pane_t3_ParamLimits

0xda93,	// (0x0003c151) vid6_indi_pane_t3

0xdabb,	// (0x0003c179) vid6_indi_pane_t4_ParamLimits

0xdabb,	// (0x0003c179) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0003e24d) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0003e24d) vid6_indi_pane_t

0xdadf,	// (0x0003c19d) wait_bar_pane_cp08

0x7a00,	// (0x000360be) main_cset_text2_pane_t1_ParamLimits

0x7a00,	// (0x000360be) main_cset_text2_pane_t1

0x7976,	// (0x00036034) listscroll_gen_pane_cp06_t1_ParamLimits

0x7976,	// (0x00036034) listscroll_gen_pane_cp06_t1

0x9b91,	// (0x0003824f) main_cam6_set_pane

0x66fe,	// (0x00034dbc) bg_tb_trans_pane_cp06_ParamLimits

0x6714,	// (0x00034dd2) cam4_indicators_pane_g1_ParamLimits

0x6725,	// (0x00034de3) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0003dfbb) cam4_indicators_pane_g_ParamLimits

0x673d,	// (0x00034dfb) cam4_indicators_pane_t1_ParamLimits

0x6761,	// (0x00034e1f) bg_tb_trans_pane_cp07_ParamLimits

0x6779,	// (0x00034e37) vid4_indicators_pane_g1_ParamLimits

0x678f,	// (0x00034e4d) vid4_indicators_pane_g2_ParamLimits

0x67a3,	// (0x00034e61) vid4_indicators_pane_g3_ParamLimits

0x67b6,	// (0x00034e74) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0003dfcd) vid4_indicators_pane_g_ParamLimits

0x67d4,	// (0x00034e92) vid4_indicators_pane_t1_ParamLimits

0x1001,	// (0x0002f6bf) vid4_progress_pane_g1_ParamLimits

0x1013,	// (0x0002f6d1) vid4_progress_pane_g2_ParamLimits

0x3ebb,	// (0x00032579) vid4_progress_pane_g3_ParamLimits

0xab33,	// (0x000391f1) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0003e17e) vid4_progress_pane_g_ParamLimits

0xab51,	// (0x0003920f) vid4_progress_pane_t1_ParamLimits

0xab66,	// (0x00039224) vid4_progress_pane_t2_ParamLimits

0xab7c,	// (0x0003923a) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0003e189) vid4_progress_pane_t_ParamLimits

0xab91,	// (0x0003924f) wait_bar_pane_cp07_ParamLimits

0x7a1e,	// (0x000360dc) main_cam6_set_pane_g2_ParamLimits

0x7a1e,	// (0x000360dc) main_cam6_set_pane_g2

0x7a44,	// (0x00036102) main_cset6_listscroll_pane_ParamLimits

0x7a44,	// (0x00036102) main_cset6_listscroll_pane

0x7a62,	// (0x00036120) main_cset6_slider_pane_ParamLimits

0x7a62,	// (0x00036120) main_cset6_slider_pane

0x7a78,	// (0x00036136) main_cset6_text2_pane_ParamLimits

0x7a78,	// (0x00036136) main_cset6_text2_pane

0xdaee,	// (0x0003c1ac) main_cset6_text_pane

0xdaf6,	// (0x0003c1b4) main_cset_list_pane_copy1_ParamLimits

0xdaf6,	// (0x0003c1b4) main_cset_list_pane_copy1

0xdb06,	// (0x0003c1c4) scroll_pane_cp028_copy1

0x7a86,	// (0x00036144) cset_list_set_pane_copy1

0x7a9a,	// (0x00036158) aid_position_infowindow_above_copy1

0x7aa2,	// (0x00036160) aid_position_infowindow_below_copy1

0x7aaa,	// (0x00036168) cset_list_set_pane_g1_copy1

0x7ab2,	// (0x00036170) cset_list_set_pane_g3_copy1_ParamLimits

0x7ab2,	// (0x00036170) cset_list_set_pane_g3_copy1

0x7ac1,	// (0x0003617f) cset_list_set_pane_t1_copy1_ParamLimits

0x7ac1,	// (0x0003617f) cset_list_set_pane_t1_copy1

0x9bf2,	// (0x000382b0) list_highlight_pane_cp021_copy1_ParamLimits

0x9bf2,	// (0x000382b0) list_highlight_pane_cp021_copy1

0xdb0f,	// (0x0003c1cd) cset6_slider_pane_ParamLimits

0xdb0f,	// (0x0003c1cd) cset6_slider_pane

0xdb3b,	// (0x0003c1f9) main_cset6_slider_pane_g1_ParamLimits

0xdb3b,	// (0x0003c1f9) main_cset6_slider_pane_g1

0x7ad6,	// (0x00036194) main_cset6_slider_pane_g2_ParamLimits

0x7ad6,	// (0x00036194) main_cset6_slider_pane_g2

0xdb63,	// (0x0003c221) main_cset6_slider_pane_g3_ParamLimits

0xdb63,	// (0x0003c221) main_cset6_slider_pane_g3

0x7afe,	// (0x000361bc) main_cset6_slider_pane_g4_ParamLimits

0x7afe,	// (0x000361bc) main_cset6_slider_pane_g4

0x7b0a,	// (0x000361c8) main_cset6_slider_pane_g5_ParamLimits

0x7b0a,	// (0x000361c8) main_cset6_slider_pane_g5

0xd316,	// (0x0003b9d4) main_cset6_slider_pane_g7_ParamLimits

0xd316,	// (0x0003b9d4) main_cset6_slider_pane_g7

0xd322,	// (0x0003b9e0) main_cset6_slider_pane_g8_ParamLimits

0xd322,	// (0x0003b9e0) main_cset6_slider_pane_g8

0x6bfe,	// (0x000352bc) main_cset6_slider_pane_g9_ParamLimits

0x6bfe,	// (0x000352bc) main_cset6_slider_pane_g9

0x6c0a,	// (0x000352c8) main_cset6_slider_pane_g10_ParamLimits

0x6c0a,	// (0x000352c8) main_cset6_slider_pane_g10

0x6c16,	// (0x000352d4) main_cset6_slider_pane_g11_ParamLimits

0x6c16,	// (0x000352d4) main_cset6_slider_pane_g11

0x6c22,	// (0x000352e0) main_cset6_slider_pane_g12_ParamLimits

0x6c22,	// (0x000352e0) main_cset6_slider_pane_g12

0x6c2e,	// (0x000352ec) main_cset6_slider_pane_g13_ParamLimits

0x6c2e,	// (0x000352ec) main_cset6_slider_pane_g13

0x6c3a,	// (0x000352f8) main_cset6_slider_pane_g14_ParamLimits

0x6c3a,	// (0x000352f8) main_cset6_slider_pane_g14

0x7b18,	// (0x000361d6) main_cset6_slider_pane_g15_ParamLimits

0x7b18,	// (0x000361d6) main_cset6_slider_pane_g15

0x6c5e,	// (0x0003531c) main_cset6_slider_pane_g16_ParamLimits

0x6c5e,	// (0x0003531c) main_cset6_slider_pane_g16

0x6c6c,	// (0x0003532a) main_cset6_slider_pane_g17_ParamLimits

0x6c6c,	// (0x0003532a) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0003e256) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0003e256) main_cset6_slider_pane_g

0xdb6f,	// (0x0003c22d) main_cset6_slider_pane_t1_ParamLimits

0xdb6f,	// (0x0003c22d) main_cset6_slider_pane_t1

0x7b48,	// (0x00036206) main_cset6_slider_pane_t2_ParamLimits

0x7b48,	// (0x00036206) main_cset6_slider_pane_t2

0x7b73,	// (0x00036231) main_cset6_slider_pane_t3_ParamLimits

0x7b73,	// (0x00036231) main_cset6_slider_pane_t3

0x7b9e,	// (0x0003625c) main_cset6_slider_pane_t4_ParamLimits

0x7b9e,	// (0x0003625c) main_cset6_slider_pane_t4

0x7bc9,	// (0x00036287) main_cset6_slider_pane_t5_ParamLimits

0x7bc9,	// (0x00036287) main_cset6_slider_pane_t5

0xdbb0,	// (0x0003c26e) main_cset6_slider_pane_t7_ParamLimits

0xdbb0,	// (0x0003c26e) main_cset6_slider_pane_t7

0x7bf6,	// (0x000362b4) main_cset6_slider_pane_t8_ParamLimits

0x7bf6,	// (0x000362b4) main_cset6_slider_pane_t8

0x7c1a,	// (0x000362d8) main_cset6_slider_pane_t9_ParamLimits

0x7c1a,	// (0x000362d8) main_cset6_slider_pane_t9

0x7c3e,	// (0x000362fc) main_cset6_slider_pane_t10_ParamLimits

0x7c3e,	// (0x000362fc) main_cset6_slider_pane_t10

0x7c62,	// (0x00036320) main_cset6_slider_pane_t11_ParamLimits

0x7c62,	// (0x00036320) main_cset6_slider_pane_t11

0xdbe6,	// (0x0003c2a4) main_cset6_slider_pane_t14_ParamLimits

0xdbe6,	// (0x0003c2a4) main_cset6_slider_pane_t14

0xdc3a,	// (0x0003c2f8) main_cset6_slider_pane_t15_ParamLimits

0xdc3a,	// (0x0003c2f8) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0003e27b) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0003e27b) main_cset6_slider_pane_t

0xdc1f,	// (0x0003c2dd) cset_slider_pane_g1_copy1

0xdc28,	// (0x0003c2e6) cset_slider_pane_g2_copy1

0xdc31,	// (0x0003c2ef) cset_slider_pane_g3_copy1

0x9b91,	// (0x0003824f) bg_popup_sub_pane_cp011_copy1

0xdc73,	// (0x0003c331) main_cset_text_pane_g1_copy1

0xd478,	// (0x0003bb36) main_cset_text_pane_t1_copy1

0xd486,	// (0x0003bb44) main_cset_text_pane_t2_copy1

0xd494,	// (0x0003bb52) main_cset_text_pane_t3_copy1

0xd4a2,	// (0x0003bb60) main_cset_text_pane_t4_copy1

0xd4b0,	// (0x0003bb6e) main_cset_text_pane_t5_copy1

0xdc7b,	// (0x0003c339) main_cset_text_pane_t6_copy1

0xdc89,	// (0x0003c347) main_cset_text_pane_t7_copy1

0x7a00,	// (0x000360be) main_cset_text2_pane_t1_copy1

0x9bf2,	// (0x000382b0) main_ncimui_pane

0x4a7f,	// (0x0003313d) popup_query_ncimui_window_ParamLimits

0x4a7f,	// (0x0003313d) popup_query_ncimui_window

0xca55,	// (0x0003b113) field_cale_ev2_pane_g4_ParamLimits

0xca55,	// (0x0003b113) field_cale_ev2_pane_g4

0x625c,	// (0x0003491a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x625c,	// (0x0003491a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0003df59) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0003df59) cell_video_dialer_keypad_pane_g

0x6274,	// (0x00034932) cell_video_dialer_keypad_pane_t1

0x9b91,	// (0x0003824f) bg_popup_window_pane_cp012

0xacca,	// (0x00039388) heading_pane_cp06

0xdcb5,	// (0x0003c373) ncim_query_content_pane

0x9b91,	// (0x0003824f) bg_popup_heading_pane_cp01

0xdcbd,	// (0x0003c37b) ncim_heading_pane_t1

0xdccb,	// (0x0003c389) ncim_indicator_popup_pane

0xdcdd,	// (0x0003c39b) ncim_query_button_pane

0xdcf3,	// (0x0003c3b1) ncim_query_content_pane_t1

0xdd05,	// (0x0003c3c3) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0003e2bf) ncim_query_content_pane_t

0xdd3f,	// (0x0003c3fd) ncim_query_list_pane

0xdd51,	// (0x0003c40f) ncim_query_popup_pane

0xdccb,	// (0x0003c389) ncim_indicator_popup_pane_ParamLimits

0x7e7e,	// (0x0003653c) ncim_query_content_pane_g1_ParamLimits

0x7e7e,	// (0x0003653c) ncim_query_content_pane_g1

0xdcf3,	// (0x0003c3b1) ncim_query_content_pane_t1_ParamLimits

0xdd05,	// (0x0003c3c3) ncim_query_content_pane_t2_ParamLimits

0x7e8a,	// (0x00036548) ncim_query_content_pane_t3_ParamLimits

0x7e8a,	// (0x00036548) ncim_query_content_pane_t3

0x7eb2,	// (0x00036570) ncim_query_content_pane_t4_ParamLimits

0x7eb2,	// (0x00036570) ncim_query_content_pane_t4

0x7eda,	// (0x00036598) ncim_query_content_pane_t5_ParamLimits

0x7eda,	// (0x00036598) ncim_query_content_pane_t5

0xdd17,	// (0x0003c3d5) ncim_query_content_pane_t6_ParamLimits

0xdd17,	// (0x0003c3d5) ncim_query_content_pane_t6

0xfc01,	// (0x0003e2bf) ncim_query_content_pane_t_ParamLimits

0xdd3f,	// (0x0003c3fd) ncim_query_list_pane_ParamLimits

0xdd51,	// (0x0003c40f) ncim_query_popup_pane_ParamLimits

0xdd65,	// (0x0003c423) wait_bar_pane_cp04

0x9b91,	// (0x0003824f) input_focus_pane_cp011

0xdd6d,	// (0x0003c42b) ncim_query_popup_pane_t1

0xdd7b,	// (0x0003c439) ncim_list_query_list_pane_ParamLimits

0xdd7b,	// (0x0003c439) ncim_list_query_list_pane

0x9b91,	// (0x0003824f) bg_button_pane_cp027

0xdd8e,	// (0x0003c44c) ncim_query_button_pane_g1

0x9b91,	// (0x0003824f) list_highlight_pane_cp012

0xdd98,	// (0x0003c456) ncim_list_query_list_pane_g1

0xdda0,	// (0x0003c45e) ncim_list_query_list_pane_t1

0x6731,	// (0x00034def) cam4_indicators_pane_g3_ParamLimits

0x6731,	// (0x00034def) cam4_indicators_pane_g3

0x67c2,	// (0x00034e80) vid4_indicators_pane_g5_ParamLimits

0x67c2,	// (0x00034e80) vid4_indicators_pane_g5

0xab42,	// (0x00039200) vid4_progress_pane_g5_ParamLimits

0xab42,	// (0x00039200) vid4_progress_pane_g5

0x7d6c,	// (0x0003642a) main_ncimui_pane_g1

0x7dd2,	// (0x00036490) ncimui_group_query_pane_ParamLimits

0x7dd2,	// (0x00036490) ncimui_group_query_pane

0x7e1a,	// (0x000364d8) ncimui_list_pane_ParamLimits

0x7e1a,	// (0x000364d8) ncimui_list_pane

0x7e41,	// (0x000364ff) ncimui_text_pane_ParamLimits

0x7e41,	// (0x000364ff) ncimui_text_pane

0x7f02,	// (0x000365c0) ncimui_text_pane_t1_ParamLimits

0x7f02,	// (0x000365c0) ncimui_text_pane_t1

0xddae,	// (0x0003c46c) ncimui_list_single_graphic_pane_ParamLimits

0xddae,	// (0x0003c46c) ncimui_list_single_graphic_pane

0x7f20,	// (0x000365de) ncimui_query_pane_ParamLimits

0x7f20,	// (0x000365de) ncimui_query_pane

0x9b91,	// (0x0003824f) list_highlight_pane_cp013

0xddbe,	// (0x0003c47c) ncim_list_query_list_pane_t1_copy1

0xdd98,	// (0x0003c456) ncim_list_single_graphic_pane_g1

0xddcc,	// (0x0003c48a) ncim_query_button_pane_cp01

0xddd8,	// (0x0003c496) ncim_query_entry_pane_ParamLimits

0xddd8,	// (0x0003c496) ncim_query_entry_pane

0xddeb,	// (0x0003c4a9) ncimui_query_pane_g1

0xddf7,	// (0x0003c4b5) ncimui_query_pane_t1_ParamLimits

0xddf7,	// (0x0003c4b5) ncimui_query_pane_t1

0x9bf2,	// (0x000382b0) input_focus_pane_cp012

0xde10,	// (0x0003c4ce) ncim_query_entry_pane_t1

0xa333,	// (0x000389f1) main_im_pane_ParamLimits

0x9bf2,	// (0x000382b0) main_mobtv_pane_ParamLimits

0x9bf2,	// (0x000382b0) main_mobtv_pane

0x7b30,	// (0x000361ee) main_cset6_slider_pane_g18_ParamLimits

0x7b30,	// (0x000361ee) main_cset6_slider_pane_g18

0x7b3c,	// (0x000361fa) main_cset6_slider_pane_g19_ParamLimits

0x7b3c,	// (0x000361fa) main_cset6_slider_pane_g19

0x7f33,	// (0x000365f1) bg_main_mobtv_pane_ParamLimits

0x7f33,	// (0x000365f1) bg_main_mobtv_pane

0x7f41,	// (0x000365ff) main_mobtv_info_pane

0x7f4c,	// (0x0003660a) main_mobtv_loading_pane_ParamLimits

0x7f4c,	// (0x0003660a) main_mobtv_loading_pane

0xde22,	// (0x0003c4e0) main_mobtv_pg_channel_list_pane

0xde2c,	// (0x0003c4ea) main_mobtv_pg_hdr_pane

0x7f59,	// (0x00036617) main_mobtv_programe_curr_pane_ParamLimits

0x7f59,	// (0x00036617) main_mobtv_programe_curr_pane

0x7f66,	// (0x00036624) main_mobtv_programe_next_pane_ParamLimits

0x7f66,	// (0x00036624) main_mobtv_programe_next_pane

0xde35,	// (0x0003c4f3) popup_mobtv_noti_window

0xc7c0,	// (0x0003ae7e) main_tv_pg_hdr_pane_g1

0xde3f,	// (0x0003c4fd) main_tv_pg_hdr_pane_g2

0xde47,	// (0x0003c505) main_tv_pg_hdr_pane_g3

0xde4f,	// (0x0003c50d) main_tv_pg_hdr_pane_g4

0xde57,	// (0x0003c515) main_tv_pg_hdr_pane_g5

0xde61,	// (0x0003c51f) main_tv_pg_hdr_pane_g6

0xde6b,	// (0x0003c529) main_tv_pg_hdr_pane_g7

0xde75,	// (0x0003c533) main_tv_pg_hdr_pane_g8

0xde7f,	// (0x0003c53d) main_tv_pg_hdr_pane_g9

0xde89,	// (0x0003c547) main_tv_pg_hdr_pane_g10

0xde93,	// (0x0003c551) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0003e2cc) main_tv_pg_hdr_pane_g

0xde9d,	// (0x0003c55b) main_tv_pg_hdr_pane_t1

0xdeab,	// (0x0003c569) main_tv_pg_hdr_pane_t2

0xdeb9,	// (0x0003c577) main_tv_pg_hdr_pane_t3

0xdec9,	// (0x0003c587) main_tv_pg_hdr_pane_t4

0xded9,	// (0x0003c597) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0003e2e3) main_tv_pg_hdr_pane_t

0xdee9,	// (0x0003c5a7) single_mobtv_pg_channel_pane_ParamLimits

0xdee9,	// (0x0003c5a7) single_mobtv_pg_channel_pane

0xdefb,	// (0x0003c5b9) single_mobtv_pg_channel_table_pane

0xdf04,	// (0x0003c5c2) single_mobtv_pg_channel_thumb_pane

0xdf0d,	// (0x0003c5cb) single_tv_pg_channel_pane_g1

0xdf16,	// (0x0003c5d4) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0003e2ee) single_tv_pg_channel_pane_g

0xc9f0,	// (0x0003b0ae) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc9f0,	// (0x0003b0ae) bg_single_mobtv_pg_channel_thumb_pane

0xdf1f,	// (0x0003c5dd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf1f,	// (0x0003c5dd) single_mobtv_pg_channel_thumb_pane_g1

0xdf2d,	// (0x0003c5eb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf2d,	// (0x0003c5eb) single_mobtv_pg_channel_thumb_pane_g2

0xdf39,	// (0x0003c5f7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf39,	// (0x0003c5f7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0003e2f3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0003e2f3) single_mobtv_pg_channel_thumb_pane_g

0xdf45,	// (0x0003c603) single_mobtv_pg_channel_thumb_pane_t1

0xdf53,	// (0x0003c611) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0003e2fa) single_mobtv_pg_channel_thumb_pane_t

0xc7c0,	// (0x0003ae7e) bg_single_mobtv_pg_channel_table_pane_g1

0xc7c0,	// (0x0003ae7e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0003dda5) bg_single_mobtv_pg_channel_table_pane_g

0xdf61,	// (0x0003c61f) single_mobtv_pg_channel_table_pane_t1

0xdf6f,	// (0x0003c62d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0003e2ff) single_mobtv_pg_channel_table_pane_t

0x7f7b,	// (0x00036639) main_mobtv_info_pane_g1_ParamLimits

0x7f7b,	// (0x00036639) main_mobtv_info_pane_g1

0x7f99,	// (0x00036657) main_mobtv_info_pane_t1_ParamLimits

0x7f99,	// (0x00036657) main_mobtv_info_pane_t1

0x8011,	// (0x000366cf) main_mobtv_info_pane_t2_ParamLimits

0x8011,	// (0x000366cf) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0003e309) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0003e309) main_mobtv_info_pane_t

0x80a0,	// (0x0003675e) wait_bar_pane_cp05

0x80b2,	// (0x00036770) main_mobtv_loading_pane_g1_ParamLimits

0x80b2,	// (0x00036770) main_mobtv_loading_pane_g1

0x80c3,	// (0x00036781) main_mobtv_loading_pane_g2_ParamLimits

0x80c3,	// (0x00036781) main_mobtv_loading_pane_g2

0x80cf,	// (0x0003678d) main_mobtv_loading_pane_g3_ParamLimits

0x80cf,	// (0x0003678d) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0003e310) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0003e310) main_mobtv_loading_pane_g

0xdf7d,	// (0x0003c63b) main_mobtv_loading_pane_t1_ParamLimits

0xdf7d,	// (0x0003c63b) main_mobtv_loading_pane_t1

0xdf95,	// (0x0003c653) main_mobtv_loading_pane_t2_ParamLimits

0xdf95,	// (0x0003c653) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0003e317) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0003e317) main_mobtv_loading_pane_t

0x80e2,	// (0x000367a0) wait_bar_pane_cp06_ParamLimits

0x80e2,	// (0x000367a0) wait_bar_pane_cp06

0xdfb9,	// (0x0003c677) main_mobtv_programe_curr_pane_t1

0xdfc7,	// (0x0003c685) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0003e31c) main_mobtv_programe_curr_pane_t

0xdfd5,	// (0x0003c693) main_mobtv_programe_next_pane_t1

0xdfe3,	// (0x0003c6a1) main_mobtv_programe_next_pane_t2

0xdff1,	// (0x0003c6af) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0003e321) main_mobtv_programe_next_pane_t

0x9b91,	// (0x0003824f) bg_popup_mobtv_noti_window_pane

0xdfff,	// (0x0003c6bd) popup_mobtv_noti_window_g1

0xe007,	// (0x0003c6c5) popup_mobtv_noti_window_t1

0xe015,	// (0x0003c6d3) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0003e328) popup_mobtv_noti_window_t

0xc7c0,	// (0x0003ae7e) bg_popup_mobtv_noti_window_pane_g1

0x9b91,	// (0x0003824f) sc_clock_pane

0x9b91,	// (0x0003824f) main_fs_bigclock_pane

0x77a3,	// (0x00035e61) blid2_tripm_pane_t4_ParamLimits

0x77a3,	// (0x00035e61) blid2_tripm_pane_t4

0x80f1,	// (0x000367af) sc_clock_pane_g1_ParamLimits

0x80f1,	// (0x000367af) sc_clock_pane_g1

0x8103,	// (0x000367c1) sc_clock_pane_t1_ParamLimits

0x8103,	// (0x000367c1) sc_clock_pane_t1

0x8127,	// (0x000367e5) sc_clock_pane_t2_ParamLimits

0x8127,	// (0x000367e5) sc_clock_pane_t2

0x813f,	// (0x000367fd) sc_clock_pane_t3_ParamLimits

0x813f,	// (0x000367fd) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0003e32d) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0003e32d) sc_clock_pane_t

0x907b,	// (0x00037739) main_fs_bigclock_indicator_pane_ParamLimits

0x907b,	// (0x00037739) main_fs_bigclock_indicator_pane

0xc9c0,	// (0x0003b07e) main_fs_bigclock_pane_g1_ParamLimits

0xc9c0,	// (0x0003b07e) main_fs_bigclock_pane_g1

0x9087,	// (0x00037745) main_fs_bigclock_pane_t1_ParamLimits

0x9087,	// (0x00037745) main_fs_bigclock_pane_t1

0x9099,	// (0x00037757) main_fs_bigclock_pane_t2_ParamLimits

0x9099,	// (0x00037757) main_fs_bigclock_pane_t2

0x90ad,	// (0x0003776b) main_fs_bigclock_pane_t3_ParamLimits

0x90ad,	// (0x0003776b) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003e52c) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003e52c) main_fs_bigclock_pane_t

0xec00,	// (0x0003d2be) main_fs_bigclock_indicator_pane_g1

0xdce5,	// (0x0003c3a3) ncim_query_content_pane_g2_ParamLimits

0xdce5,	// (0x0003c3a3) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0003e2ba) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0003e2ba) ncim_query_content_pane_g

0x8156,	// (0x00036814) sc_clock_pane_t4_ParamLimits

0x8156,	// (0x00036814) sc_clock_pane_t4

0x9bf2,	// (0x000382b0) main_radioblah_pane

0xd111,	// (0x0003b7cf) cell_call4_button_pane_t1_copy1_ParamLimits

0xd111,	// (0x0003b7cf) cell_call4_button_pane_t1_copy1

0x7d84,	// (0x00036442) main_ncimui_pane_t1_ParamLimits

0x7d84,	// (0x00036442) main_ncimui_pane_t1

0x7d9e,	// (0x0003645c) main_ncimui_pane_t2_ParamLimits

0x7d9e,	// (0x0003645c) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0003e2b3) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0003e2b3) main_ncimui_pane_t

0xe161,	// (0x0003c81f) main_radioblah_anim_pane_ParamLimits

0xe161,	// (0x0003c81f) main_radioblah_anim_pane

0xe172,	// (0x0003c830) main_radioblah_info_pane_ParamLimits

0xe172,	// (0x0003c830) main_radioblah_info_pane

0xe186,	// (0x0003c844) main_radioblah_pane_t1_ParamLimits

0xe186,	// (0x0003c844) main_radioblah_pane_t1

0xe1a2,	// (0x0003c860) main_radioblah_pane_t2_ParamLimits

0xe1a2,	// (0x0003c860) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0003e34e) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0003e34e) main_radioblah_pane_t

0x8206,	// (0x000368c4) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8206,	// (0x000368c4) main_radioblah_rocker_ctrl_pane

0xe1ea,	// (0x0003c8a8) main_radioblah_info_pane_t1_ParamLimits

0xe1ea,	// (0x0003c8a8) main_radioblah_info_pane_t1

0x825e,	// (0x0003691c) main_radioblah_info_pane_t2_ParamLimits

0x825e,	// (0x0003691c) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0003e357) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0003e357) main_radioblah_info_pane_t

0xc7c0,	// (0x0003ae7e) main_radioblah_rocker_ctrl_pane_g1

0x830e,	// (0x000369cc) main_radioblah_rocker_ctrl_pane_g2

0x8316,	// (0x000369d4) main_radioblah_rocker_ctrl_pane_g3

0x831e,	// (0x000369dc) main_radioblah_rocker_ctrl_pane_g4

0x8326,	// (0x000369e4) main_radioblah_rocker_ctrl_pane_g5

0x832e,	// (0x000369ec) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0003e360) main_radioblah_rocker_ctrl_pane_g

0x7a00,	// (0x000360be) main_cset_text2_pane_t1_copy1_ParamLimits

0x66e0,	// (0x00034d9e) cam4_image_uncrop_qvga_pane

0x6757,	// (0x00034e15) vid4_image_uncrop_qcif_pane

0xaba5,	// (0x00039263) cam6_image_uncrop_qvga_pane_ParamLimits

0xaba5,	// (0x00039263) cam6_image_uncrop_qvga_pane

0xd9cd,	// (0x0003c08b) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9cd,	// (0x0003c08b) vid6_image_uncrop_qcif_pane

0x9b91,	// (0x0003824f) bg_popup_preview_window_pane_cp03

0xdc97,	// (0x0003c355) list_cset_text2_pane

0xdc9f,	// (0x0003c35d) main_cset6_text2_pane_g1

0xdca7,	// (0x0003c365) main_cset6_text2_pane_t1

0x8336,	// (0x000369f4) list_cset_text2_pane_t1_ParamLimits

0x8336,	// (0x000369f4) list_cset_text2_pane_t1

0x9bf2,	// (0x000382b0) main_radioblah_pane_ParamLimits

0x808c,	// (0x0003674a) main_mobtv_info_pane_t3_ParamLimits

0x808c,	// (0x0003674a) main_mobtv_info_pane_t3

0x81f4,	// (0x000368b2) main_radioblah_pane_g1

0x822e,	// (0x000368ec) main_radioblah_info_pane_g1

0x82b3,	// (0x00036971) main_radioblah_info_pane_t3_ParamLimits

0x82b3,	// (0x00036971) main_radioblah_info_pane_t3

0x3200,	// (0x000318be) highlight_cell_cale_month_pane_ParamLimits

0x3200,	// (0x000318be) highlight_cell_cale_month_pane

0x9b91,	// (0x0003824f) main_phob_fisheye_pane

0xcad8,	// (0x0003b196) scroll_pane_cp0031_ParamLimits

0xcad8,	// (0x0003b196) scroll_pane_cp0031

0xdadf,	// (0x0003c19d) wait_bar_pane_cp08_ParamLimits

0x7a86,	// (0x00036144) cset_list_set_pane_copy1_ParamLimits

0xe224,	// (0x0003c8e2) highlight_cell_cale_month_pane_g1

0x834f,	// (0x00036a0d) highlight_cell_cale_month_pane_t1

0xd74c,	// (0x0003be0a) list_gen_pane_cp01

0xd301,	// (0x0003b9bf) scroll_pane_01

0x835d,	// (0x00036a1b) list_single_double_fisheye_pane

0x8366,	// (0x00036a24) list_double_fisheye_pane_g1_ParamLimits

0x8366,	// (0x00036a24) list_double_fisheye_pane_g1

0x8372,	// (0x00036a30) list_double_fisheye_pane_g2_ParamLimits

0x8372,	// (0x00036a30) list_double_fisheye_pane_g2

0x8386,	// (0x00036a44) list_double_fisheye_pane_g3_ParamLimits

0x8386,	// (0x00036a44) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0003e36d) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0003e36d) list_double_fisheye_pane_g

0x83af,	// (0x00036a6d) list_double_fisheye_pane_t1_ParamLimits

0x83af,	// (0x00036a6d) list_double_fisheye_pane_t1

0x83ca,	// (0x00036a88) list_double_fisheye_pane_t2_ParamLimits

0x83ca,	// (0x00036a88) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0003e378) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0003e378) list_double_fisheye_pane_t

0x9b91,	// (0x0003824f) main_call5_pane

0x8181,	// (0x0003683f) sc_swipe_pane_ParamLimits

0x8181,	// (0x0003683f) sc_swipe_pane

0x83ff,	// (0x00036abd) call5_image_pane_ParamLimits

0x83ff,	// (0x00036abd) call5_image_pane

0x841c,	// (0x00036ada) call5_swipe_1_pane_ParamLimits

0x841c,	// (0x00036ada) call5_swipe_1_pane

0x842f,	// (0x00036aed) call5_swipe_2_pane_ParamLimits

0x842f,	// (0x00036aed) call5_swipe_2_pane

0x845c,	// (0x00036b1a) popup_call5_audio_first_window_ParamLimits

0x845c,	// (0x00036b1a) popup_call5_audio_first_window

0xc9f0,	// (0x0003b0ae) call5_swipe_1_pane_g1_ParamLimits

0xc9f0,	// (0x0003b0ae) call5_swipe_1_pane_g1

0xe22c,	// (0x0003c8ea) call5_swipe_1_pane_g2_ParamLimits

0xe22c,	// (0x0003c8ea) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0003e37d) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0003e37d) call5_swipe_1_pane_g

0xe238,	// (0x0003c8f6) call5_swipe_1_pane_t1_ParamLimits

0xe238,	// (0x0003c8f6) call5_swipe_1_pane_t1

0xc9f0,	// (0x0003b0ae) call5_swipe_2_pane_g1_ParamLimits

0xc9f0,	// (0x0003b0ae) call5_swipe_2_pane_g1

0xe24d,	// (0x0003c90b) call5_swipe_2_pane_g2_ParamLimits

0xe24d,	// (0x0003c90b) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0003e382) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0003e382) call5_swipe_2_pane_g

0xe259,	// (0x0003c917) call5_swipe_2_pane_t1_ParamLimits

0xe259,	// (0x0003c917) call5_swipe_2_pane_t1

0xe26e,	// (0x0003c92c) sc_swipe_pane_g1_ParamLimits

0xe26e,	// (0x0003c92c) sc_swipe_pane_g1

0xe27b,	// (0x0003c939) sc_swipe_pane_g2_ParamLimits

0xe27b,	// (0x0003c939) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0003e387) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0003e387) sc_swipe_pane_g

0xe287,	// (0x0003c945) sc_swipe_pane_t1_ParamLimits

0xe287,	// (0x0003c945) sc_swipe_pane_t1

0x9b91,	// (0x0003824f) main_cmail_launcher_pane

0x8471,	// (0x00036b2f) aid_size_cell_cmail_l_ParamLimits

0x8471,	// (0x00036b2f) aid_size_cell_cmail_l

0x848b,	// (0x00036b49) grid_cmail_l_pane_ParamLimits

0x848b,	// (0x00036b49) grid_cmail_l_pane

0x84a6,	// (0x00036b64) cell_cmail_l_pane_ParamLimits

0x84a6,	// (0x00036b64) cell_cmail_l_pane

0x84ce,	// (0x00036b8c) cell_cmail_l_pane_g1_ParamLimits

0x84ce,	// (0x00036b8c) cell_cmail_l_pane_g1

0x84da,	// (0x00036b98) cell_cmail_l_pane_t1_ParamLimits

0x84da,	// (0x00036b98) cell_cmail_l_pane_t1

0xe29c,	// (0x0003c95a) cell_cmail_l_pane_t2_ParamLimits

0xe29c,	// (0x0003c95a) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0003e38c) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0003e38c) cell_cmail_l_pane_t

0x9bf2,	// (0x000382b0) grid_highlight_pane_cp018_ParamLimits

0x9bf2,	// (0x000382b0) grid_highlight_pane_cp018

0x1154,	// (0x0002f812) main2_pane_ParamLimits

0x1154,	// (0x0002f812) main2_pane

0xa3de,	// (0x00038a9c) popup_sp_fs_action_menu_bg_pane_g1

0xa3e6,	// (0x00038aa4) popup_sp_fs_action_menu_bg_pane_g2

0xa3ee,	// (0x00038aac) popup_sp_fs_action_menu_bg_pane_g3

0xa3f6,	// (0x00038ab4) popup_sp_fs_action_menu_bg_pane_g4

0xa3fe,	// (0x00038abc) popup_sp_fs_action_menu_bg_pane_g5

0xa406,	// (0x00038ac4) popup_sp_fs_action_menu_bg_pane_g6

0xa40e,	// (0x00038acc) popup_sp_fs_action_menu_bg_pane_g7

0xa416,	// (0x00038ad4) popup_sp_fs_action_menu_bg_pane_g8

0xa41e,	// (0x00038adc) popup_sp_fs_action_menu_bg_pane_g9

0xa426,	// (0x00038ae4) popup_sp_fs_action_menu_bg_pane_g10

0xa426,	// (0x00038ae4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0003d851) popup_sp_fs_action_menu_bg_pane_g

0x2021,	// (0x000306df) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_t3_g3_g1

0x202d,	// (0x000306eb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x202d,	// (0x000306eb) list_medium_line_x2_t3_g3_g2

0x2039,	// (0x000306f7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2039,	// (0x000306f7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0003d901) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0003d901) list_medium_line_x2_t3_g3_g

0x2045,	// (0x00030703) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2045,	// (0x00030703) list_medium_line_x2_t3_g3_t1

0x205a,	// (0x00030718) list_medium_line_x2_t3_g3_t2_ParamLimits

0x205a,	// (0x00030718) list_medium_line_x2_t3_g3_t2

0x206e,	// (0x0003072c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x206e,	// (0x0003072c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0003d908) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0003d908) list_medium_line_x2_t3_g3_t

0x2021,	// (0x000306df) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_t3_g2_g1

0x2039,	// (0x000306f7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2039,	// (0x000306f7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0003d90f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0003d90f) list_medium_line_x2_t3_g2_g

0x2083,	// (0x00030741) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2083,	// (0x00030741) list_medium_line_x2_t3_g2_t1

0x2099,	// (0x00030757) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2099,	// (0x00030757) list_medium_line_x2_t3_g2_t2

0x20ab,	// (0x00030769) list_medium_line_x2_t3_g2_t3_ParamLimits

0x20ab,	// (0x00030769) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0003d914) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0003d914) list_medium_line_x2_t3_g2_t

0x2021,	// (0x000306df) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_t4_g4_g1

0x20c9,	// (0x00030787) list_medium_line_x2_t4_g4_g2_ParamLimits

0x20c9,	// (0x00030787) list_medium_line_x2_t4_g4_g2

0x202d,	// (0x000306eb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x202d,	// (0x000306eb) list_medium_line_x2_t4_g4_g3

0x20d5,	// (0x00030793) list_medium_line_x2_t4_g4_g4_ParamLimits

0x20d5,	// (0x00030793) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0003d91b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0003d91b) list_medium_line_x2_t4_g4_g

0x20e1,	// (0x0003079f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x20e1,	// (0x0003079f) list_medium_line_x2_t4_g4_t1

0x20f8,	// (0x000307b6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x20f8,	// (0x000307b6) list_medium_line_x2_t4_g4_t2

0x210d,	// (0x000307cb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x210d,	// (0x000307cb) list_medium_line_x2_t4_g4_t3

0x211f,	// (0x000307dd) list_medium_line_x2_t4_g4_t4_ParamLimits

0x211f,	// (0x000307dd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0003d924) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0003d924) list_medium_line_x2_t4_g4_t

0x2021,	// (0x000306df) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_t2_g4_g1

0x20c9,	// (0x00030787) list_medium_line_x2_t2_g4_g2_ParamLimits

0x20c9,	// (0x00030787) list_medium_line_x2_t2_g4_g2

0x202d,	// (0x000306eb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x202d,	// (0x000306eb) list_medium_line_x2_t2_g4_g3

0x2039,	// (0x000306f7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2039,	// (0x000306f7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0003d98b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0003d98b) list_medium_line_x2_t2_g4_g

0x3226,	// (0x000318e4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3226,	// (0x000318e4) list_medium_line_x2_t2_g4_t1

0x206e,	// (0x0003072c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x206e,	// (0x0003072c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0003d994) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0003d994) list_medium_line_x2_t2_g4_t

0x2021,	// (0x000306df) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_t2_g3_g1

0x202d,	// (0x000306eb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x202d,	// (0x000306eb) list_medium_line_x2_t2_g3_g2

0x2039,	// (0x000306f7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2039,	// (0x000306f7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0003d901) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0003d901) list_medium_line_x2_t2_g3_g

0x323b,	// (0x000318f9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x323b,	// (0x000318f9) list_medium_line_x2_t2_g3_t1

0x206e,	// (0x0003072c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x206e,	// (0x0003072c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0003d999) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0003d999) list_medium_line_x2_t2_g3_t

0x33a1,	// (0x00031a5f) main_sp_fs_list_pane_ParamLimits

0x33a1,	// (0x00031a5f) main_sp_fs_list_pane

0x33ad,	// (0x00031a6b) sp_fs_scroll_pane_ParamLimits

0x33ad,	// (0x00031a6b) sp_fs_scroll_pane

0x33b9,	// (0x00031a77) list_medium_line_x2_t3_t1

0x33c9,	// (0x00031a87) list_medium_line_x2_t3_t2

0x33d7,	// (0x00031a95) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0003d9e4) list_medium_line_x2_t3_t

0x33e5,	// (0x00031aa3) list_medium_line_x3_t4_t1

0x33f5,	// (0x00031ab3) list_medium_line_x3_t4_t2

0x3403,	// (0x00031ac1) list_medium_line_x3_t4_t3

0x33d7,	// (0x00031a95) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0003d9eb) list_medium_line_x3_t4_t

0x3411,	// (0x00031acf) list_medium_line_x4_t5_t1

0x3421,	// (0x00031adf) list_medium_line_x4_t5_t2

0x3403,	// (0x00031ac1) list_medium_line_x4_t5_t3

0x342f,	// (0x00031aed) list_medium_line_x4_t5_t4

0x33d7,	// (0x00031a95) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0003d9f4) list_medium_line_x4_t5_t

0x2021,	// (0x000306df) list_medium_line_t4_g4_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_t4_g4_g1

0x20d5,	// (0x00030793) list_medium_line_t4_g4_g2_ParamLimits

0x20d5,	// (0x00030793) list_medium_line_t4_g4_g2

0x343d,	// (0x00031afb) list_medium_line_t4_g4_g3_ParamLimits

0x343d,	// (0x00031afb) list_medium_line_t4_g4_g3

0x2039,	// (0x000306f7) list_medium_line_t4_g4_g4_ParamLimits

0x2039,	// (0x000306f7) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0003d9ff) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0003d9ff) list_medium_line_t4_g4_g

0x3449,	// (0x00031b07) list_medium_line_t4_g4_t1_ParamLimits

0x3449,	// (0x00031b07) list_medium_line_t4_g4_t1

0x345e,	// (0x00031b1c) list_medium_line_t4_g4_t2_ParamLimits

0x345e,	// (0x00031b1c) list_medium_line_t4_g4_t2

0x3474,	// (0x00031b32) list_medium_line_t4_g4_t3_ParamLimits

0x3474,	// (0x00031b32) list_medium_line_t4_g4_t3

0x206e,	// (0x0003072c) list_medium_line_t4_g4_t4_ParamLimits

0x206e,	// (0x0003072c) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0003da08) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0003da08) list_medium_line_t4_g4_t

0x35bf,	// (0x00031c7d) chi_dic_find_pane_g1

0x4805,	// (0x00032ec3) main_tport_pane

0xd40d,	// (0x0003bacb) list_medium_line_plain_t1

0x6f91,	// (0x0003564f) list_medium_line_t2_g2_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_t2_g2_g1

0xd423,	// (0x0003bae1) list_medium_line_t2_g2_g2_ParamLimits

0xd423,	// (0x0003bae1) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0003e0c4) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0003e0c4) list_medium_line_t2_g2_g

0x6f9d,	// (0x0003565b) list_medium_line_t2_g2_t1_ParamLimits

0x6f9d,	// (0x0003565b) list_medium_line_t2_g2_t1

0x6fb4,	// (0x00035672) list_medium_line_t2_g2_t2_ParamLimits

0x6fb4,	// (0x00035672) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0003e0c9) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0003e0c9) list_medium_line_t2_g2_t

0xd755,	// (0x0003be13) aid_sp_fs_list_icon_a_sm

0xd75d,	// (0x0003be1b) aid_sp_fs_list_icon_d

0xd765,	// (0x0003be23) aid_sp_fs_text_primary

0xd76e,	// (0x0003be2c) aid_sp_fs_text_secondary

0x7559,	// (0x00035c17) list_medium_line

0x7559,	// (0x00035c17) list_medium_line_g2

0x7559,	// (0x00035c17) list_medium_line_g3

0x7559,	// (0x00035c17) list_medium_line_plain

0x7559,	// (0x00035c17) list_medium_line_plain_t2

0x7559,	// (0x00035c17) list_medium_line_plain_t3

0x7559,	// (0x00035c17) list_medium_line_right_icon

0x7559,	// (0x00035c17) list_medium_line_right_iconx2

0x7559,	// (0x00035c17) list_medium_line_t2

0x7559,	// (0x00035c17) list_medium_line_t2_g2

0x7559,	// (0x00035c17) list_medium_line_t2_g3

0x7559,	// (0x00035c17) list_medium_line_t2_right_icon

0x7559,	// (0x00035c17) list_medium_line_t2_right_iconx2

0x7559,	// (0x00035c17) list_medium_line_t3

0x7559,	// (0x00035c17) list_medium_line_t3_g2

0x7559,	// (0x00035c17) list_medium_line_t3_g3

0x7559,	// (0x00035c17) list_medium_line_t3_right_iconx2

0x7562,	// (0x00035c20) list_medium_line_t4_g4

0x7559,	// (0x00035c17) list_medium_line_x2

0x7559,	// (0x00035c17) list_medium_line_x2_t2_g2

0x7559,	// (0x00035c17) list_medium_line_x2_t2_g3

0x7559,	// (0x00035c17) list_medium_line_x2_t2_g4

0x7559,	// (0x00035c17) list_medium_line_x2_t3

0x7559,	// (0x00035c17) list_medium_line_x2_t3_g2

0x7559,	// (0x00035c17) list_medium_line_x2_t3_g3

0x7559,	// (0x00035c17) list_medium_line_x2_t3_g4

0x7559,	// (0x00035c17) list_medium_line_x2_t4_g2

0x7559,	// (0x00035c17) list_medium_line_x2_t4_g4

0x756b,	// (0x00035c29) list_medium_line_x3

0x756b,	// (0x00035c29) list_medium_line_x3_t4

0x756b,	// (0x00035c29) list_medium_line_x3_t4_g4

0x7562,	// (0x00035c20) list_medium_line_x4_t4

0x7562,	// (0x00035c20) list_medium_line_x4_t4_g7

0x7562,	// (0x00035c20) list_medium_line_x4_t5

0x7574,	// (0x00035c32) list_single_fs_dyc_pane_ParamLimits

0x7574,	// (0x00035c32) list_single_fs_dyc_pane

0x2021,	// (0x000306df) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x4_t4_g7_g1

0x7c88,	// (0x00036346) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7c88,	// (0x00036346) list_medium_line_x4_t4_g7_g2

0x7c94,	// (0x00036352) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c94,	// (0x00036352) list_medium_line_x4_t4_g7_g3

0x7ca3,	// (0x00036361) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7ca3,	// (0x00036361) list_medium_line_x4_t4_g7_g4

0x7caf,	// (0x0003636d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7caf,	// (0x0003636d) list_medium_line_x4_t4_g7_g5

0x7cbe,	// (0x0003637c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7cbe,	// (0x0003637c) list_medium_line_x4_t4_g7_g6

0x7ccd,	// (0x0003638b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ccd,	// (0x0003638b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0003e294) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0003e294) list_medium_line_x4_t4_g7_g

0x7cd9,	// (0x00036397) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7cd9,	// (0x00036397) list_medium_line_x4_t4_g7_t1

0x7cee,	// (0x000363ac) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7cee,	// (0x000363ac) list_medium_line_x4_t4_g7_t2

0x7d03,	// (0x000363c1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d03,	// (0x000363c1) list_medium_line_x4_t4_g7_t3

0x7d18,	// (0x000363d6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d18,	// (0x000363d6) list_medium_line_x4_t4_g7_t4

0x7d2a,	// (0x000363e8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d2a,	// (0x000363e8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0003e2a3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0003e2a3) list_medium_line_x4_t4_g7_t

0x7d3c,	// (0x000363fa) list_single_dyc_row_pane_ParamLimits

0x7d3c,	// (0x000363fa) list_single_dyc_row_pane

0x83ec,	// (0x00036aaa) call5_gesture_pane_ParamLimits

0x83ec,	// (0x00036aaa) call5_gesture_pane

0x8442,	// (0x00036b00) call5_windows_pane_ParamLimits

0x8442,	// (0x00036b00) call5_windows_pane

0x84f0,	// (0x00036bae) call5_swipe_1_pane_cp_ParamLimits

0x84f0,	// (0x00036bae) call5_swipe_1_pane_cp

0x84fc,	// (0x00036bba) call5_swipe_2_pane_cp_ParamLimits

0x84fc,	// (0x00036bba) call5_swipe_2_pane_cp

0xaf18,	// (0x000395d6) call5_image_pane_cp

0x8508,	// (0x00036bc6) popup_call5_audio_first_window_cp_ParamLimits

0x8508,	// (0x00036bc6) popup_call5_audio_first_window_cp

0xe26e,	// (0x0003c92c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe26e,	// (0x0003c92c) call5_swipe_1_pane_g1_cp

0xe2ae,	// (0x0003c96c) call5_swipe_1_pane_g2_cp

0xe287,	// (0x0003c945) call5_swipe_1_pane_t1_cp_ParamLimits

0xe287,	// (0x0003c945) call5_swipe_1_pane_t1_cp

0xe26e,	// (0x0003c92c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe26e,	// (0x0003c92c) call5_swipe_2_pane_g1_cp

0xe2b6,	// (0x0003c974) call5_swipe_2_pane_g2_cp

0xe2be,	// (0x0003c97c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2be,	// (0x0003c97c) call5_swipe_2_pane_t1_cp

0x9bf2,	// (0x000382b0) main_sp_fs_email_pane

0xe2d3,	// (0x0003c991) main_sp_fs_listscroll_pane_te

0xe2dc,	// (0x0003c99a) popup_sp_fs_action_menu_pane_ParamLimits

0xe2dc,	// (0x0003c99a) popup_sp_fs_action_menu_pane

0xc7c0,	// (0x0003ae7e) bg_sp_fs_ctrlbar_pane_g1

0xe322,	// (0x0003c9e0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe32b,	// (0x0003c9e9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe334,	// (0x0003c9f2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7c0,	// (0x0003ae7e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0003e391) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc59f,	// (0x0003ac5d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc59f,	// (0x0003ac5d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe33d,	// (0x0003c9fb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe33d,	// (0x0003c9fb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe349,	// (0x0003ca07) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe349,	// (0x0003ca07) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0003e39a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0003e39a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe355,	// (0x0003ca13) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe355,	// (0x0003ca13) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe36f,	// (0x0003ca2d) list_medium_line_t2_right_icon_g1

0x8516,	// (0x00036bd4) list_medium_line_t2_right_icon_t1

0x8526,	// (0x00036be4) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0003e39f) list_medium_line_t2_right_icon_t

0xc36f,	// (0x0003aa2d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc36f,	// (0x0003aa2d) bg_sp_fs_ctrlbar_pane

0x8585,	// (0x00036c43) main_sp_fs_ctrlbar_button_pane_cp01

0x858f,	// (0x00036c4d) main_sp_fs_ctrlbar_ddmenu_pane

0xe3af,	// (0x0003ca6d) main_sp_fs_ctrlbar_pane_g1

0xe3bb,	// (0x0003ca79) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0003e3a4) main_sp_fs_ctrlbar_pane_g

0xe3c7,	// (0x0003ca85) main_sp_fs_ctrlbar_pane_t1

0x8599,	// (0x00036c57) main_sp_fs_ctrlbar_pane

0x85bd,	// (0x00036c7b) main_sp_fs_listscroll_pane_te_cp01

0x85dd,	// (0x00036c9b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85dd,	// (0x00036c9b) popup_sp_fs_action_menu_pane_cp01

0x9bf2,	// (0x000382b0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9bf2,	// (0x000382b0) bg_sp_fs_highlight_list_pane_cp01

0xe3f7,	// (0x0003cab5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3f7,	// (0x0003cab5) sp_fs_action_menu_list_gene_pane_g1

0xe406,	// (0x0003cac4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe406,	// (0x0003cac4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0003e3ae) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0003e3ae) sp_fs_action_menu_list_gene_pane_g

0xe413,	// (0x0003cad1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe413,	// (0x0003cad1) sp_fs_action_menu_list_gene_pane_t1

0xe42b,	// (0x0003cae9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe42b,	// (0x0003cae9) sp_fs_action_menu_list_gene_pane

0xe44e,	// (0x0003cb0c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe44e,	// (0x0003cb0c) popup_sp_fs_action_menu_bg_pane

0xe45c,	// (0x0003cb1a) sp_fs_action_menu_list_pane_ParamLimits

0xe45c,	// (0x0003cb1a) sp_fs_action_menu_list_pane

0xe480,	// (0x0003cb3e) sp_fs_scroll_pane_cp01_ParamLimits

0xe480,	// (0x0003cb3e) sp_fs_scroll_pane_cp01

0x8613,	// (0x00036cd1) list_medium_line_plain_t2_t1

0x8623,	// (0x00036ce1) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0003e3b3) list_medium_line_plain_t2_t

0x8633,	// (0x00036cf1) list_medium_line_plain_t3_t1

0x8643,	// (0x00036d01) list_medium_line_plain_t3_t2

0x8651,	// (0x00036d0f) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0003e3b8) list_medium_line_plain_t3_t

0x2021,	// (0x000306df) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_t2_g2_g1

0x2039,	// (0x000306f7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2039,	// (0x000306f7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0003d90f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0003d90f) list_medium_line_x2_t2_g2_g

0x3449,	// (0x00031b07) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3449,	// (0x00031b07) list_medium_line_x2_t2_g2_t1

0x206e,	// (0x0003072c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x206e,	// (0x0003072c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0003e3bf) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0003e3bf) list_medium_line_x2_t2_g2_t

0x2021,	// (0x000306df) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_t4_g2_g1

0x2039,	// (0x000306f7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2039,	// (0x000306f7) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0003d90f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0003d90f) list_medium_line_x2_t4_g2_g

0x865f,	// (0x00036d1d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x865f,	// (0x00036d1d) list_medium_line_x2_t4_g2_t1

0x8679,	// (0x00036d37) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8679,	// (0x00036d37) list_medium_line_x2_t4_g2_t2

0x868f,	// (0x00036d4d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x868f,	// (0x00036d4d) list_medium_line_x2_t4_g2_t3

0x206e,	// (0x0003072c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x206e,	// (0x0003072c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x0003e3c4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x0003e3c4) list_medium_line_x2_t4_g2_t

0xe4a6,	// (0x0003cb64) list_medium_line_t3_right_iconx2_g1

0xe36f,	// (0x0003ca2d) list_medium_line_t3_right_iconx2_g2

0x86a4,	// (0x00036d62) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x0003e3cd) list_medium_line_t3_right_iconx2_g

0x86ae,	// (0x00036d6c) list_medium_line_t3_right_iconx2_t1

0x86be,	// (0x00036d7c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x0003e3d4) list_medium_line_t3_right_iconx2_t

0x2021,	// (0x000306df) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x3_t4_g4_g1

0x202d,	// (0x000306eb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x202d,	// (0x000306eb) list_medium_line_x3_t4_g4_g2

0x20d5,	// (0x00030793) list_medium_line_x3_t4_g4_g3_ParamLimits

0x20d5,	// (0x00030793) list_medium_line_x3_t4_g4_g3

0x86cc,	// (0x00036d8a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86cc,	// (0x00036d8a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x0003e3d9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x0003e3d9) list_medium_line_x3_t4_g4_g

0x86d8,	// (0x00036d96) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86d8,	// (0x00036d96) list_medium_line_x3_t4_g4_t1

0x86ef,	// (0x00036dad) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86ef,	// (0x00036dad) list_medium_line_x3_t4_g4_t2

0x870a,	// (0x00036dc8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x870a,	// (0x00036dc8) list_medium_line_x3_t4_g4_t3

0x871f,	// (0x00036ddd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x871f,	// (0x00036ddd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x0003e3e2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x0003e3e2) list_medium_line_x3_t4_g4_t

0x873c,	// (0x00036dfa) list_single_dyc_row_text_pane_t1_ParamLimits

0x873c,	// (0x00036dfa) list_single_dyc_row_text_pane_t1

0x8785,	// (0x00036e43) list_single_dyc_row_text_pane_t2_ParamLimits

0x8785,	// (0x00036e43) list_single_dyc_row_text_pane_t2

0xe4ae,	// (0x0003cb6c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4ae,	// (0x0003cb6c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x0003e3eb) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x0003e3eb) list_single_dyc_row_text_pane_t

0xe4c0,	// (0x0003cb7e) list_single_dyc_row_pane_g1_ParamLimits

0xe4c0,	// (0x0003cb7e) list_single_dyc_row_pane_g1

0xe4cc,	// (0x0003cb8a) list_single_dyc_row_pane_g2_ParamLimits

0xe4cc,	// (0x0003cb8a) list_single_dyc_row_pane_g2

0xe4d8,	// (0x0003cb96) list_single_dyc_row_pane_g3_ParamLimits

0xe4d8,	// (0x0003cb96) list_single_dyc_row_pane_g3

0xe4e4,	// (0x0003cba2) list_single_dyc_row_pane_g4_ParamLimits

0xe4e4,	// (0x0003cba2) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003e3f2) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003e3f2) list_single_dyc_row_pane_g

0xe4f0,	// (0x0003cbae) list_single_dyc_row_text_pane_ParamLimits

0xe4f0,	// (0x0003cbae) list_single_dyc_row_text_pane

0x9b91,	// (0x0003824f) bg_sp_fs_scroll_pane

0xe50f,	// (0x0003cbcd) thumb_sp_fs_scroll_pane

0x6f91,	// (0x0003564f) list_medium_line_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_g1

0xe518,	// (0x0003cbd6) list_medium_line_t1_ParamLimits

0xe518,	// (0x0003cbd6) list_medium_line_t1

0x2021,	// (0x000306df) list_medium_line_x2_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_g1

0x202d,	// (0x000306eb) list_medium_line_x2_g2_ParamLimits

0x202d,	// (0x000306eb) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003e3fb) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003e3fb) list_medium_line_x2_g

0xe52d,	// (0x0003cbeb) list_medium_line_x2_t1_ParamLimits

0xe52d,	// (0x0003cbeb) list_medium_line_x2_t1

0x2021,	// (0x000306df) list_medium_line_x3_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x3_g1

0x202d,	// (0x000306eb) list_medium_line_x3_g2_ParamLimits

0x202d,	// (0x000306eb) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003e3fb) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003e3fb) list_medium_line_x3_g

0xe52d,	// (0x0003cbeb) list_medium_line_x3_t1_ParamLimits

0xe52d,	// (0x0003cbeb) list_medium_line_x3_t1

0xe543,	// (0x0003cc01) thumb_sp_fs_scroll_pane_g1

0xe54c,	// (0x0003cc0a) thumb_sp_fs_scroll_pane_g2

0xe555,	// (0x0003cc13) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003e400) thumb_sp_fs_scroll_pane_g

0xe543,	// (0x0003cc01) bg_sp_fs_scroll_pane_g1

0xe54c,	// (0x0003cc0a) bg_sp_fs_scroll_pane_g2

0xe555,	// (0x0003cc13) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003e400) bg_sp_fs_scroll_pane_g

0x2021,	// (0x000306df) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2021,	// (0x000306df) list_medium_line_x2_t3_g4_g1

0x20c9,	// (0x00030787) list_medium_line_x2_t3_g4_g2_ParamLimits

0x20c9,	// (0x00030787) list_medium_line_x2_t3_g4_g2

0x202d,	// (0x000306eb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x202d,	// (0x000306eb) list_medium_line_x2_t3_g4_g3

0x2039,	// (0x000306f7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2039,	// (0x000306f7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0003d98b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0003d98b) list_medium_line_x2_t3_g4_g

0x87df,	// (0x00036e9d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x87df,	// (0x00036e9d) list_medium_line_x2_t3_g4_t1

0x87f5,	// (0x00036eb3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x87f5,	// (0x00036eb3) list_medium_line_x2_t3_g4_t2

0x206e,	// (0x0003072c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x206e,	// (0x0003072c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003e407) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003e407) list_medium_line_x2_t3_g4_t

0x6f91,	// (0x0003564f) list_medium_line_g2_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_g2_g1

0xd423,	// (0x0003bae1) list_medium_line_g2_g2_ParamLimits

0xd423,	// (0x0003bae1) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0003e0c4) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0003e0c4) list_medium_line_g2_g

0xe55e,	// (0x0003cc1c) list_medium_line_g2_t1_ParamLimits

0xe55e,	// (0x0003cc1c) list_medium_line_g2_t1

0x6f91,	// (0x0003564f) list_medium_line_t3_g2_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_t3_g2_g1

0xd423,	// (0x0003bae1) list_medium_line_t3_g2_g2_ParamLimits

0xd423,	// (0x0003bae1) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0003e0c4) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0003e0c4) list_medium_line_t3_g2_g

0x880e,	// (0x00036ecc) list_medium_line_t3_g2_t1_ParamLimits

0x880e,	// (0x00036ecc) list_medium_line_t3_g2_t1

0x8828,	// (0x00036ee6) list_medium_line_t3_g2_t2_ParamLimits

0x8828,	// (0x00036ee6) list_medium_line_t3_g2_t2

0x883e,	// (0x00036efc) list_medium_line_t3_g2_t3_ParamLimits

0x883e,	// (0x00036efc) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003e40e) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003e40e) list_medium_line_t3_g2_t

0xe36f,	// (0x0003ca2d) list_medium_line_right_icon_g1

0xe573,	// (0x0003cc31) list_medium_line_right_icon_t1

0x6f91,	// (0x0003564f) list_medium_line_t2_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_t2_g1

0x8855,	// (0x00036f13) list_medium_line_t2_t1_ParamLimits

0x8855,	// (0x00036f13) list_medium_line_t2_t1

0x886f,	// (0x00036f2d) list_medium_line_t2_t2_ParamLimits

0x886f,	// (0x00036f2d) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003e415) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003e415) list_medium_line_t2_t

0x6f91,	// (0x0003564f) list_medium_line_t3_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_t3_g1

0x8888,	// (0x00036f46) list_medium_line_t3_t1_ParamLimits

0x8888,	// (0x00036f46) list_medium_line_t3_t1

0x88a2,	// (0x00036f60) list_medium_line_t3_t2_ParamLimits

0x88a2,	// (0x00036f60) list_medium_line_t3_t2

0x88b8,	// (0x00036f76) list_medium_line_t3_t3_ParamLimits

0x88b8,	// (0x00036f76) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003e41a) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003e41a) list_medium_line_t3_t

0x6f91,	// (0x0003564f) list_medium_line_g3_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_g3_g1

0xe581,	// (0x0003cc3f) list_medium_line_g3_g2_ParamLimits

0xe581,	// (0x0003cc3f) list_medium_line_g3_g2

0xd423,	// (0x0003bae1) list_medium_line_g3_g3_ParamLimits

0xd423,	// (0x0003bae1) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003e421) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003e421) list_medium_line_g3_g

0xe58d,	// (0x0003cc4b) list_medium_line_g3_t1_ParamLimits

0xe58d,	// (0x0003cc4b) list_medium_line_g3_t1

0x6f91,	// (0x0003564f) list_medium_line_t2_g3_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_t2_g3_g1

0xe581,	// (0x0003cc3f) list_medium_line_t2_g3_g2_ParamLimits

0xe581,	// (0x0003cc3f) list_medium_line_t2_g3_g2

0xd423,	// (0x0003bae1) list_medium_line_t2_g3_g3_ParamLimits

0xd423,	// (0x0003bae1) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003e421) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003e421) list_medium_line_t2_g3_g

0x88cd,	// (0x00036f8b) list_medium_line_t2_g3_t1_ParamLimits

0x88cd,	// (0x00036f8b) list_medium_line_t2_g3_t1

0x88e4,	// (0x00036fa2) list_medium_line_t2_g3_t2_ParamLimits

0x88e4,	// (0x00036fa2) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003e428) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003e428) list_medium_line_t2_g3_t

0x6f91,	// (0x0003564f) list_medium_line_t3_g3_g1_ParamLimits

0x6f91,	// (0x0003564f) list_medium_line_t3_g3_g1

0xe581,	// (0x0003cc3f) list_medium_line_t3_g3_g2_ParamLimits

0xe581,	// (0x0003cc3f) list_medium_line_t3_g3_g2

0xd423,	// (0x0003bae1) list_medium_line_t3_g3_g3_ParamLimits

0xd423,	// (0x0003bae1) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003e421) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003e421) list_medium_line_t3_g3_g

0x88fd,	// (0x00036fbb) list_medium_line_t3_g3_t1_ParamLimits

0x88fd,	// (0x00036fbb) list_medium_line_t3_g3_t1

0x8916,	// (0x00036fd4) list_medium_line_t3_g3_t2_ParamLimits

0x8916,	// (0x00036fd4) list_medium_line_t3_g3_t2

0x892c,	// (0x00036fea) list_medium_line_t3_g3_t3_ParamLimits

0x892c,	// (0x00036fea) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003e42d) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003e42d) list_medium_line_t3_g3_t

0xe4a6,	// (0x0003cb64) list_medium_line_right_iconx2_g1

0xe36f,	// (0x0003ca2d) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003e434) list_medium_line_right_iconx2_g

0xe5a2,	// (0x0003cc60) list_medium_line_right_iconx2_t1

0xe4a6,	// (0x0003cb64) list_medium_line_t2_right_iconx2_g1

0xe36f,	// (0x0003ca2d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003e434) list_medium_line_t2_right_iconx2_g

0x8946,	// (0x00037004) list_medium_line_t2_right_iconx2_t1

0x8956,	// (0x00037014) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003e439) list_medium_line_t2_right_iconx2_t

0x8968,	// (0x00037026) list_medium_line_x4_t4_t1

0x8976,	// (0x00037034) list_medium_line_x4_t4_t2

0x8986,	// (0x00037044) list_medium_line_x4_t4_t3

0x8996,	// (0x00037054) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003e43e) list_medium_line_x4_t4_t

0x89e9,	// (0x000370a7) tport_appsw_pane_ParamLimits

0x89e9,	// (0x000370a7) tport_appsw_pane

0x8a01,	// (0x000370bf) tport_contact_pane_ParamLimits

0x8a01,	// (0x000370bf) tport_contact_pane

0x8a19,	// (0x000370d7) tport_listscroll_pane_ParamLimits

0x8a19,	// (0x000370d7) tport_listscroll_pane

0x8a33,	// (0x000370f1) cell_tport_appsw_pane_ParamLimits

0x8a33,	// (0x000370f1) cell_tport_appsw_pane

0xd1a6,	// (0x0003b864) tport_appsw_pane_g1_ParamLimits

0xd1a6,	// (0x0003b864) tport_appsw_pane_g1

0xe5b0,	// (0x0003cc6e) tport_contact_pane_g1

0xe5b9,	// (0x0003cc77) tport_contact_pane_t1

0xe5c7,	// (0x0003cc85) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003e447) tport_contact_pane_t

0xe5d5,	// (0x0003cc93) list_tport_pane

0xe5de,	// (0x0003cc9c) scroll_pane_cp_030

0x8a7f,	// (0x0003713d) cell_tport_appsw_pane_g1

0x8a8f,	// (0x0003714d) cell_tport_appsw_pane_t1

0x9b91,	// (0x0003824f) grid_highlight_pane_cp019

0x8a9d,	// (0x0003715b) list_tport_double_graphic_pane_ParamLimits

0x8a9d,	// (0x0003715b) list_tport_double_graphic_pane

0x9bf2,	// (0x000382b0) list_highlight_pane_cp023_ParamLimits

0x9bf2,	// (0x000382b0) list_highlight_pane_cp023

0x8aaa,	// (0x00037168) list_tport_double_graphic_pane_g1_ParamLimits

0x8aaa,	// (0x00037168) list_tport_double_graphic_pane_g1

0x8ab7,	// (0x00037175) list_tport_double_graphic_pane_t1_ParamLimits

0x8ab7,	// (0x00037175) list_tport_double_graphic_pane_t1

0x8acc,	// (0x0003718a) list_tport_double_graphic_pane_t2_ParamLimits

0x8acc,	// (0x0003718a) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003e453) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003e453) list_tport_double_graphic_pane_t

0x9b91,	// (0x0003824f) main_cale_note_pane

0x0d53,	// (0x0002f411) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x0d53,	// (0x0002f411) cell_vitu2_function_top_wide_pane_cp01

0x80a0,	// (0x0003675e) wait_bar_pane_cp05_ParamLimits

0x9bf2,	// (0x000382b0) listscroll_cmail_pane

0xe5ef,	// (0x0003ccad) list_cmail_pane

0x8ae8,	// (0x000371a6) list_cmail_body_pane

0x8afd,	// (0x000371bb) list_single_cmail_header_caption_pane

0x8b17,	// (0x000371d5) list_single_cmail_header_detail_pane_ParamLimits

0x8b17,	// (0x000371d5) list_single_cmail_header_detail_pane

0x8b46,	// (0x00037204) list_single_cmail_header_caption_pane_t1

0x8b61,	// (0x0003721f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8b61,	// (0x0003721f) list_single_cmail_header_detail_pane_g1

0xe606,	// (0x0003ccc4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe606,	// (0x0003ccc4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003e458) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003e458) list_single_cmail_header_detail_pane_g

0x8b79,	// (0x00037237) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8b79,	// (0x00037237) list_single_cmail_header_detail_pane_t1

0x8bc9,	// (0x00037287) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8bc9,	// (0x00037287) list_single_cmail_header_editor_pane_bg

0xdf16,	// (0x0003c5d4) list_cmail_body_pane_g1

0xe643,	// (0x0003cd01) list_cmail_body_pane_t1

0xd1e3,	// (0x0003b8a1) list_single_cmail_header_editor_pane_bg_g1

0xa766,	// (0x00038e24) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1f3,	// (0x0003b8b1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1eb,	// (0x0003b8a9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd41b,	// (0x0003bad9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd213,	// (0x0003b8d1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd203,	// (0x0003b8c1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd20b,	// (0x0003b8c9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa746,	// (0x00038e04) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8be2,	// (0x000372a0) calenote_gesture_pane_ParamLimits

0x8be2,	// (0x000372a0) calenote_gesture_pane

0x8c02,	// (0x000372c0) calenote_window_pane_ParamLimits

0x8c02,	// (0x000372c0) calenote_window_pane

0xe651,	// (0x0003cd0f) popup_note_window_cp01

0x8c1e,	// (0x000372dc) calenote_swipe_1_pane_ParamLimits

0x8c1e,	// (0x000372dc) calenote_swipe_1_pane

0x84fc,	// (0x00036bba) calenote_swipe_2_pane_ParamLimits

0x84fc,	// (0x00036bba) calenote_swipe_2_pane

0xe26e,	// (0x0003c92c) calenote_swipe_1_pane_g1_ParamLimits

0xe26e,	// (0x0003c92c) calenote_swipe_1_pane_g1

0xe27b,	// (0x0003c939) calenote_swipe_1_pane_g2_ParamLimits

0xe27b,	// (0x0003c939) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0003e387) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0003e387) calenote_swipe_1_pane_g

0xe663,	// (0x0003cd21) calenote_swipe_1_pane_t1_ParamLimits

0xe663,	// (0x0003cd21) calenote_swipe_1_pane_t1

0xe26e,	// (0x0003c92c) calenote_swipe_2_pane_g1_ParamLimits

0xe26e,	// (0x0003c92c) calenote_swipe_2_pane_g1

0xe682,	// (0x0003cd40) calenote_swipe_2_pane_g2_ParamLimits

0xe682,	// (0x0003cd40) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003e464) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003e464) calenote_swipe_2_pane_g

0xe68e,	// (0x0003cd4c) calenote_swipe_2_pane_t1_ParamLimits

0xe68e,	// (0x0003cd4c) calenote_swipe_2_pane_t1

0x9b91,	// (0x0003824f) main_mup_navstr_pane

0x58a4,	// (0x00033f62) main_mup3_pane_t7_ParamLimits

0x58a4,	// (0x00033f62) main_mup3_pane_t7

0x62e8,	// (0x000349a6) main_mp4_pane_g6_ParamLimits

0x62e8,	// (0x000349a6) main_mp4_pane_g6

0x652f,	// (0x00034bed) main_image3_pane_t4_ParamLimits

0x652f,	// (0x00034bed) main_image3_pane_t4

0x8c33,	// (0x000372f1) popup_navstr_preview_pane_ParamLimits

0x8c33,	// (0x000372f1) popup_navstr_preview_pane

0x8c43,	// (0x00037301) scroll_navstr_pane_ParamLimits

0x8c43,	// (0x00037301) scroll_navstr_pane

0x9b91,	// (0x0003824f) bg_popup_preview_window_pane_cp04

0xe6b5,	// (0x0003cd73) popup_navstr_preview_pane_t1

0x8c57,	// (0x00037315) scroll_navstr_pane_g1_ParamLimits

0x8c57,	// (0x00037315) scroll_navstr_pane_g1

0x8c6b,	// (0x00037329) scroll_navstr_pane_t1_ParamLimits

0x8c6b,	// (0x00037329) scroll_navstr_pane_t1

0xe65a,	// (0x0003cd18) bg_button_pane_cp014

0xe65a,	// (0x0003cd18) bg_button_pane_cp030

0x8392,	// (0x00036a50) list_double_fisheye_pane_g4_ParamLimits

0x8392,	// (0x00036a50) list_double_fisheye_pane_g4

0x839e,	// (0x00036a5c) list_double_fisheye_pane_g5_ParamLimits

0x839e,	// (0x00036a5c) list_double_fisheye_pane_g5

0xe5f7,	// (0x0003ccb5) sp_fs_scroll_pane_cp03

0xe3af,	// (0x0003ca6d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3bb,	// (0x0003ca79) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0003e3a4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3c7,	// (0x0003ca85) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8ade,	// (0x0003719c) sp_fs_scroll_pane_cp02

0xa449,	// (0x00038b07) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa449,	// (0x00038b07) popup_sp_fs_calendar_preview_list_single_pane

0x9b91,	// (0x0003824f) main_cam6_pano_pane

0x9bf2,	// (0x000382b0) main_mup3_pane_ParamLimits

0x9b91,	// (0x0003824f) main_phacti_pane

0x7f73,	// (0x00036631) bg_button_pane_cp11

0x7f8d,	// (0x0003664b) main_mobtv_info_pane_g2_ParamLimits

0x7f8d,	// (0x0003664b) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0003e304) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0003e304) main_mobtv_info_pane_g

0x8168,	// (0x00036826) sc_clock_pane_t5_ParamLimits

0x8168,	// (0x00036826) sc_clock_pane_t5

0x81f4,	// (0x000368b2) main_radioblah_pane_g1_ParamLimits

0xe1ba,	// (0x0003c878) main_radioblah_pane_t3_ParamLimits

0xe1ba,	// (0x0003c878) main_radioblah_pane_t3

0xe1d2,	// (0x0003c890) main_radioblah_pane_t4_ParamLimits

0xe1d2,	// (0x0003c890) main_radioblah_pane_t4

0x821c,	// (0x000368da) main_radioblah_text_pane_ParamLimits

0x821c,	// (0x000368da) main_radioblah_text_pane

0x822e,	// (0x000368ec) main_radioblah_info_pane_g1_ParamLimits

0x82c7,	// (0x00036985) main_radioblah_info_pane_t4_ParamLimits

0x82c7,	// (0x00036985) main_radioblah_info_pane_t4

0x9bf2,	// (0x000382b0) main_sp_fs_calendar_pane

0x8c82,	// (0x00037340) main_phacti_pane_g1

0x8c8a,	// (0x00037348) phacti_note_pane_ParamLimits

0x8c8a,	// (0x00037348) phacti_note_pane

0xe6cc,	// (0x0003cd8a) phacti_term_pane_ParamLimits

0xe6cc,	// (0x0003cd8a) phacti_term_pane

0xe6e1,	// (0x0003cd9f) phacti_note_pane_t1_ParamLimits

0xe6e1,	// (0x0003cd9f) phacti_note_pane_t1

0xe6f8,	// (0x0003cdb6) phacti_term_pane_g1

0xe700,	// (0x0003cdbe) phacti_term_pane_t1_ParamLimits

0xe700,	// (0x0003cdbe) phacti_term_pane_t1

0xe72a,	// (0x0003cde8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe732,	// (0x0003cdf0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003e46e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe73a,	// (0x0003cdf8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe73a,	// (0x0003cdf8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe750,	// (0x0003ce0e) aid_popup_sp_fs_bg_corner_pane

0xc7c0,	// (0x0003ae7e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b91,	// (0x0003824f) popup_sp_fs_calendar_preview_bg_pane

0xe758,	// (0x0003ce16) popup_sp_fs_calendar_preview_list_pane

0xc36f,	// (0x0003aa2d) bg_main_sp_fs_cale_pane_ParamLimits

0xc36f,	// (0x0003aa2d) bg_main_sp_fs_cale_pane

0xe769,	// (0x0003ce27) listscroll_cale_mrui_pane_ParamLimits

0xe769,	// (0x0003ce27) listscroll_cale_mrui_pane

0xe77e,	// (0x0003ce3c) listscroll_sp_fs_schedule_track_pane

0xe787,	// (0x0003ce45) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe787,	// (0x0003ce45) main_sp_fs_ctrlbar_pane_cp01

0xe79a,	// (0x0003ce58) main_sp_fs_ribbon_pane

0xe7a2,	// (0x0003ce60) popup_sp_fs_cale_preview_window

0x8cfb,	// (0x000373b9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8cfb,	// (0x000373b9) list_single_sp_fs_schedule_track_pane

0x9bf2,	// (0x000382b0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9bf2,	// (0x000382b0) bg_sp_fs_highlight_list_pane_cp03

0x8d0e,	// (0x000373cc) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d0e,	// (0x000373cc) list_single_sp_fs_schedule_track_pane_g1

0x8d1a,	// (0x000373d8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d1a,	// (0x000373d8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003e473) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003e473) list_single_sp_fs_schedule_track_pane_g

0x8d26,	// (0x000373e4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d26,	// (0x000373e4) list_single_sp_fs_schedule_track_pane_t1

0x8d48,	// (0x00037406) sp_fs_schedule_track_pane_ParamLimits

0x8d48,	// (0x00037406) sp_fs_schedule_track_pane

0xe7b4,	// (0x0003ce72) sp_fs_schedule_track_pane_g1

0xe7bc,	// (0x0003ce7a) sp_fs_schedule_track_pane_g2

0xe7c4,	// (0x0003ce82) sp_fs_schedule_track_pane_g3

0xe7cc,	// (0x0003ce8a) sp_fs_schedule_track_pane_g4

0xe7d4,	// (0x0003ce92) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003e478) sp_fs_schedule_track_pane_g

0xd1e3,	// (0x0003b8a1) bg_sp_fs_schedule_viewer_highlight_g1

0xa766,	// (0x00038e24) bg_sp_fs_schedule_viewer_highlight_g2

0xd1eb,	// (0x0003b8a9) bg_sp_fs_schedule_viewer_highlight_g3

0xd1f3,	// (0x0003b8b1) bg_sp_fs_schedule_viewer_highlight_g4

0xd41b,	// (0x0003bad9) bg_sp_fs_schedule_viewer_highlight_g5

0xd203,	// (0x0003b8c1) bg_sp_fs_schedule_viewer_highlight_g6

0xd20b,	// (0x0003b8c9) bg_sp_fs_schedule_viewer_highlight_g7

0xd213,	// (0x0003b8d1) bg_sp_fs_schedule_viewer_highlight_g8

0xa746,	// (0x00038e04) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003e483) bg_sp_fs_schedule_viewer_highlight_g

0x9b91,	// (0x0003824f) bg_main_sp_fs_ribbon_pane

0x8d5d,	// (0x0003741b) main_sp_fs_ribbon_pane_g1

0xe7dc,	// (0x0003ce9a) main_sp_fs_ribbon_pane_t1

0x8d66,	// (0x00037424) main_sp_fs_ribbon_pane_t2

0xe7eb,	// (0x0003cea9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003e496) main_sp_fs_ribbon_pane_t

0xe7fa,	// (0x0003ceb8) main_sp_fs_ribbon_scheduler_pane

0xe802,	// (0x0003cec0) bg_main_sp_fs_ribbon_pane_g1

0xe80b,	// (0x0003cec9) bg_main_sp_fs_ribbon_pane_g2

0xe814,	// (0x0003ced2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003e49d) bg_main_sp_fs_ribbon_pane_g

0xe81c,	// (0x0003ceda) main_sp_fs_ribbon_scheduler_pane_g1

0xe825,	// (0x0003cee3) main_sp_fs_ribbon_scheduler_pane_g2

0xe82e,	// (0x0003ceec) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003e4a4) main_sp_fs_ribbon_scheduler_pane_g

0xe837,	// (0x0003cef5) list_cale_mrui_pane

0x8d75,	// (0x00037433) sp_fs_scroll_pane_cp07_ParamLimits

0x8d75,	// (0x00037433) sp_fs_scroll_pane_cp07

0x8d91,	// (0x0003744f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d91,	// (0x0003744f) bg_sp_fs_schedule_viewer_highlight

0xe844,	// (0x0003cf02) list_single_sp_fs_schedule_track_pane_cp01

0xe84c,	// (0x0003cf0a) list_sp_fs_schedule_track_pane

0xe854,	// (0x0003cf12) sp_fs_scroll_pane_cp06_ParamLimits

0xe854,	// (0x0003cf12) sp_fs_scroll_pane_cp06

0xc7c0,	// (0x0003ae7e) bgmain_sp_fs_calendar_pane_g1

0x8da3,	// (0x00037461) list_single_cale_mrui_pane_ParamLimits

0x8da3,	// (0x00037461) list_single_cale_mrui_pane

0xe866,	// (0x0003cf24) list_single_cale_mrui_row_pane_ParamLimits

0xe866,	// (0x0003cf24) list_single_cale_mrui_row_pane

0xe87c,	// (0x0003cf3a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe87c,	// (0x0003cf3a) list_single_cale_mrui_row_pane_g1

0xe8c1,	// (0x0003cf7f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8c1,	// (0x0003cf7f) list_single_cale_mrui_row_pane_t1

0x8db8,	// (0x00037476) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8db8,	// (0x00037476) list_single_cale_mrui_row_pane_t2

0xe8d3,	// (0x0003cf91) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8d3,	// (0x0003cf91) list_single_cale_mrui_row_pane_t3

0xe902,	// (0x0003cfc0) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe902,	// (0x0003cfc0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003e4b2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003e4b2) list_single_cale_mrui_row_pane_t

0x8e20,	// (0x000374de) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e20,	// (0x000374de) list_single_cmail_header_editor_pane_bg_cp01

0x8e44,	// (0x00037502) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e44,	// (0x00037502) list_single_cmail_header_editor_pane_bg_cp02

0x8e62,	// (0x00037520) main_radioblah_text_pane_t1_ParamLimits

0x8e62,	// (0x00037520) main_radioblah_text_pane_t1

0xe931,	// (0x0003cfef) cam6_indi_pane_cp01

0xe939,	// (0x0003cff7) cam6_mode_pane_cp01

0xe941,	// (0x0003cfff) cam6_pano_pane

0xe94a,	// (0x0003d008) cam6_zoom_pane_cp01

0xe954,	// (0x0003d012) cam6_pano_image_pane

0xe95d,	// (0x0003d01b) cam6_pano_pane_g1

0xdf16,	// (0x0003c5d4) cam6_pano_pane_g2

0xe966,	// (0x0003d024) cam6_pano_pane_g3

0xe96f,	// (0x0003d02d) cam6_pano_pane_g4

0xcd4e,	// (0x0003b40c) cam6_pano_pane_g5

0xe978,	// (0x0003d036) cam6_pano_pane_g6

0xe980,	// (0x0003d03e) cam6_pano_pane_g7

0xe988,	// (0x0003d046) cam6_pano_pane_g8

0xe991,	// (0x0003d04f) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003e4bb) cam6_pano_pane_g

0x9b91,	// (0x0003824f) main_browser_tag_pane

0xe6ad,	// (0x0003cd6b) grid_navstr_albumart_pane

0xe99c,	// (0x0003d05a) cell_navstr_albumart_pane_ParamLimits

0xe99c,	// (0x0003d05a) cell_navstr_albumart_pane

0xe9bb,	// (0x0003d079) cell_navstr_albumart_pane_g1

0xc17c,	// (0x0003a83a) cell_navstr_albumart_pane_g2

0xc18c,	// (0x0003a84a) cell_navstr_albumart_pane_g3

0xc184,	// (0x0003a842) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003e4ce) cell_navstr_albumart_pane_g

0x8e7d,	// (0x0003753b) bt_list_pane_ParamLimits

0x8e7d,	// (0x0003753b) bt_list_pane

0x8e93,	// (0x00037551) bt_list_pane_t1

0x8ea2,	// (0x00037560) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003e4d7) bt_list_pane_t

0x9b91,	// (0x0003824f) main_cale_prevew_pane

0x8eb1,	// (0x0003756f) popup_cale_preview_window_ParamLimits

0x8eb1,	// (0x0003756f) popup_cale_preview_window

0x9bf2,	// (0x000382b0) bg_popup_preview_window_pane_cp05_ParamLimits

0x9bf2,	// (0x000382b0) bg_popup_preview_window_pane_cp05

0xe9c3,	// (0x0003d081) list_cale_preview_pane_ParamLimits

0xe9c3,	// (0x0003d081) list_cale_preview_pane

0x8ece,	// (0x0003758c) list_double_cale_preview_pane_ParamLimits

0x8ece,	// (0x0003758c) list_double_cale_preview_pane

0x8ee2,	// (0x000375a0) list_single_cale_preview_pane_ParamLimits

0x8ee2,	// (0x000375a0) list_single_cale_preview_pane

0x8efa,	// (0x000375b8) list_single_cale_preview_pane_g1

0x8f02,	// (0x000375c0) list_single_cale_preview_pane_t1_ParamLimits

0x8f02,	// (0x000375c0) list_single_cale_preview_pane_t1

0x8f17,	// (0x000375d5) list_double_cale_preview_pane_g1

0x8f1f,	// (0x000375dd) list_double_cale_preview_pane_t1_ParamLimits

0x8f1f,	// (0x000375dd) list_double_cale_preview_pane_t1

0x8f34,	// (0x000375f2) list_double_cale_preview_pane_t2_ParamLimits

0x8f34,	// (0x000375f2) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003e4dc) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003e4dc) list_double_cale_preview_pane_t

0x9b91,	// (0x0003824f) main_ezdial_pane

0x9bf2,	// (0x000382b0) main_sp_fs_email_pane_ParamLimits

0x8538,	// (0x00036bf6) cmail_ddmenu_btn01_pane_ParamLimits

0x8538,	// (0x00036bf6) cmail_ddmenu_btn01_pane

0x854b,	// (0x00036c09) cmail_ddmenu_btn02_pane_ParamLimits

0x854b,	// (0x00036c09) cmail_ddmenu_btn02_pane

0x856e,	// (0x00036c2c) cmail_ddmenu_btn03_pane_ParamLimits

0x856e,	// (0x00036c2c) cmail_ddmenu_btn03_pane

0x8599,	// (0x00036c57) main_sp_fs_ctrlbar_pane_ParamLimits

0x85bd,	// (0x00036c7b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ae8,	// (0x000371a6) list_cmail_body_pane_ParamLimits

0x8b56,	// (0x00037214) bg_button_pane_cp12

0xe612,	// (0x0003ccd0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe612,	// (0x0003ccd0) list_single_cmail_header_detail_pane_g3

0xe61f,	// (0x0003ccdd) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe61f,	// (0x0003ccdd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003e45f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003e45f) list_single_cmail_header_detail_pane_t

0xe715,	// (0x0003cdd3) phacti_term_pane_t2_ParamLimits

0xe715,	// (0x0003cdd3) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003e469) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003e469) phacti_term_pane_t

0xe9cf,	// (0x0003d08d) aid_size_list_single_double

0x8f4c,	// (0x0003760a) popup_ezdial_listscroll_window

0x8f68,	// (0x00037626) popup_number_entry_window_cp01

0xaf18,	// (0x000395d6) bg_popup_call_pane_cp09

0xe9db,	// (0x0003d099) ezdial_list_pane

0xe9e3,	// (0x0003d0a1) scroll_pane_cp23

0xc36f,	// (0x0003aa2d) bg_button_pane_cp028_ParamLimits

0xc36f,	// (0x0003aa2d) bg_button_pane_cp028

0x8f76,	// (0x00037634) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f76,	// (0x00037634) cmail_ddmenu_btn01_pane_g1

0x8f85,	// (0x00037643) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f85,	// (0x00037643) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003e4e1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003e4e1) cmail_ddmenu_btn01_pane_g

0xe9eb,	// (0x0003d0a9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9eb,	// (0x0003d0a9) cmail_ddmenu_btn01_pane_t1

0xc36f,	// (0x0003aa2d) bg_button_pane_cp029_ParamLimits

0xc36f,	// (0x0003aa2d) bg_button_pane_cp029

0x8f95,	// (0x00037653) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f95,	// (0x00037653) cmail_ddmenu_btn02_pane_g1

0x8fb0,	// (0x0003766e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fb0,	// (0x0003766e) cmail_ddmenu_btn02_pane_t1

0x9bf2,	// (0x000382b0) bg_button_pane_cp031_ParamLimits

0x9bf2,	// (0x000382b0) bg_button_pane_cp031

0x8f95,	// (0x00037653) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f95,	// (0x00037653) cmail_ddmenu_btn03_pane_g1

0x8fb0,	// (0x0003766e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fb0,	// (0x0003766e) cmail_ddmenu_btn03_pane_t1

0x64d6,	// (0x00034b94) cell_dialer2_keypad_pane_t1_ParamLimits

0x64f0,	// (0x00034bae) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64f0,	// (0x00034bae) cell_dialer2_keypad_pane_t1_copy1

0x7dca,	// (0x00036488) ncimui_group_button_pane

0x9bf2,	// (0x000382b0) main_sp_fs_calendar_pane_ParamLimits

0x8afd,	// (0x000371bb) list_single_cmail_header_caption_pane_ParamLimits

0xe760,	// (0x0003ce1e) aid_recal_txt_sm_pane

0x9b91,	// (0x0003824f) mian_recal_day_pane

0xe7a2,	// (0x0003ce60) popup_sp_fs_cale_preview_window_ParamLimits

0xea00,	// (0x0003d0be) list_recal_day_pane

0xea43,	// (0x0003d101) list_single_recal_day_pane_ParamLimits

0xea43,	// (0x0003d101) list_single_recal_day_pane

0xea55,	// (0x0003d113) list_single_recal_day_pane_g1_ParamLimits

0xea55,	// (0x0003d113) list_single_recal_day_pane_g1

0xea61,	// (0x0003d11f) list_single_recal_day_pane_g2_ParamLimits

0xea61,	// (0x0003d11f) list_single_recal_day_pane_g2

0xea6d,	// (0x0003d12b) list_single_recal_day_pane_g3_ParamLimits

0xea6d,	// (0x0003d12b) list_single_recal_day_pane_g3

0x8fd7,	// (0x00037695) list_single_recal_day_pane_g4_ParamLimits

0x8fd7,	// (0x00037695) list_single_recal_day_pane_g4

0xea79,	// (0x0003d137) list_single_recal_day_pane_g5_ParamLimits

0xea79,	// (0x0003d137) list_single_recal_day_pane_g5

0xea85,	// (0x0003d143) list_single_recal_day_pane_g6_ParamLimits

0xea85,	// (0x0003d143) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003e4f0) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003e4f0) list_single_recal_day_pane_g

0xea99,	// (0x0003d157) list_single_recal_day_pane_t1

0xeaab,	// (0x0003d169) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003e4fb) list_single_recal_day_pane_t

0x8fef,	// (0x000376ad) ncimui_query_button_pane_ParamLimits

0x8fef,	// (0x000376ad) ncimui_query_button_pane

0x8fff,	// (0x000376bd) ncimui_query_button_pane_t1_ParamLimits

0x8fff,	// (0x000376bd) ncimui_query_button_pane_t1

0xeabd,	// (0x0003d17b) ncimui_query_button_pane_t2_ParamLimits

0xeabd,	// (0x0003d17b) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003e500) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003e500) ncimui_query_button_pane_t

0x9012,	// (0x000376d0) query_button_pane_ParamLimits

0x9012,	// (0x000376d0) query_button_pane

0x9b91,	// (0x0003824f) bg_button_pane_cp0028

0xead0,	// (0x0003d18e) query_button_pane_t1

0x4805,	// (0x00032ec3) main_tport_pane_ParamLimits

0x89a6,	// (0x00037064) bg_popup_window_pane_cp01_ParamLimits

0x89a6,	// (0x00037064) bg_popup_window_pane_cp01

0x89c1,	// (0x0003707f) heading_pane_cp08_ParamLimits

0x89c1,	// (0x0003707f) heading_pane_cp08

0x89d4,	// (0x00037092) heading_pane_cp07_ParamLimits

0x89d4,	// (0x00037092) heading_pane_cp07

0x8a7f,	// (0x0003713d) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003e44c) cell_tport_appsw_pane_g

0xb089,	// (0x00039747) input_candi_list_open_g1

0xa927,	// (0x00038fe5) list_cale_time_pane_g6_ParamLimits

0xa927,	// (0x00038fe5) list_cale_time_pane_g6

0x525b,	// (0x00033919) aid_size_touch_calib_1_ParamLimits

0x525b,	// (0x00033919) aid_size_touch_calib_1

0x526d,	// (0x0003392b) aid_size_touch_calib_2_ParamLimits

0x526d,	// (0x0003392b) aid_size_touch_calib_2

0x5285,	// (0x00033943) aid_size_touch_calib_3_ParamLimits

0x5285,	// (0x00033943) aid_size_touch_calib_3

0x52a3,	// (0x00033961) aid_size_touch_calib_4_ParamLimits

0x52a3,	// (0x00033961) aid_size_touch_calib_4

0x52bb,	// (0x00033979) main_touch_calib_button_group_pane_ParamLimits

0x52bb,	// (0x00033979) main_touch_calib_button_group_pane

0x52d3,	// (0x00033991) main_touch_calib_pane_g1_ParamLimits

0x52e5,	// (0x000339a3) main_touch_calib_pane_g2_ParamLimits

0x52f7,	// (0x000339b5) main_touch_calib_pane_g3_ParamLimits

0x5309,	// (0x000339c7) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0003de1a) main_touch_calib_pane_g_ParamLimits

0x531b,	// (0x000339d9) main_touch_calib_pane_t1_ParamLimits

0x5335,	// (0x000339f3) main_touch_calib_pane_t2_ParamLimits

0x534f,	// (0x00033a0d) main_touch_calib_pane_t3_ParamLimits

0x5363,	// (0x00033a21) main_touch_calib_pane_t4_ParamLimits

0x5379,	// (0x00033a37) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0003de23) main_touch_calib_pane_t_ParamLimits

0xcafc,	// (0x0003b1ba) list_single_fp_cale_pane_g3_ParamLimits

0xcafc,	// (0x0003b1ba) list_single_fp_cale_pane_g3

0x6761,	// (0x00034e1f) bg_button_pane_cp012_ParamLimits

0x6761,	// (0x00034e1f) bg_vkb2_func_pane_cp03_ParamLimits

0x0f54,	// (0x0002f612) cell_vitu2_function_top_pane_g1_ParamLimits

0x6761,	// (0x00034e1f) bg_vkb2_func_pane_cp04_ParamLimits

0x7d58,	// (0x00036416) main_ncimui_button_group_pane_ParamLimits

0x7d58,	// (0x00036416) main_ncimui_button_group_pane

0x7db8,	// (0x00036476) main_ncimui_pane_t3_ParamLimits

0x7db8,	// (0x00036476) main_ncimui_pane_t3

0xe6c3,	// (0x0003cd81) phacti_button_group_pane

0xe9cf,	// (0x0003d08d) aid_size_list_single_double_ParamLimits

0x8f4c,	// (0x0003760a) popup_ezdial_listscroll_window_ParamLimits

0x8f68,	// (0x00037626) popup_number_entry_window_cp01_ParamLimits

0x9025,	// (0x000376e3) phacti_button_pane_ParamLimits

0x9025,	// (0x000376e3) phacti_button_pane

0x9b91,	// (0x0003824f) bg_button_pane_cp14

0xeade,	// (0x0003d19c) phacti_button_pane_t1

0x9036,	// (0x000376f4) main_touch_calib_button_pane_ParamLimits

0x9036,	// (0x000376f4) main_touch_calib_button_pane

0xa333,	// (0x000389f1) bg_button_pane_cp18_ParamLimits

0xa333,	// (0x000389f1) bg_button_pane_cp18

0xeaec,	// (0x0003d1aa) main_touch_calib_button_pane_t1_ParamLimits

0xeaec,	// (0x0003d1aa) main_touch_calib_button_pane_t1

0xeb02,	// (0x0003d1c0) main_touch_calib_button_pane_t2_ParamLimits

0xeb02,	// (0x0003d1c0) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003e505) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003e505) main_touch_calib_button_pane_t

0x9b91,	// (0x0003824f) cell_ncimui_button_pane

0x9b91,	// (0x0003824f) bg_button_pane_cp032

0xeb20,	// (0x0003d1de) cell_ncimui_button_pane_t1

0x650d,	// (0x00034bcb) image3_infobar_pane_ParamLimits

0x650d,	// (0x00034bcb) image3_infobar_pane

0x8194,	// (0x00036852) fs_bigclock_status_pane_ParamLimits

0x8194,	// (0x00036852) fs_bigclock_status_pane

0x81a1,	// (0x0003685f) main_fs_bigclock_clock_pane_ParamLimits

0x81a1,	// (0x0003685f) main_fs_bigclock_clock_pane

0x81b5,	// (0x00036873) main_fs_bigclock_indi_pane_ParamLimits

0x81b5,	// (0x00036873) main_fs_bigclock_indi_pane

0x81d0,	// (0x0003688e) main_fs_bigclock_swipe_pane_ParamLimits

0x81d0,	// (0x0003688e) main_fs_bigclock_swipe_pane

0x9b91,	// (0x0003824f) main_fs_clock_dumped_data

0xe023,	// (0x0003c6e1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe023,	// (0x0003c6e1) list_single_fs_bigclock_indicator_pane_g1

0xe04d,	// (0x0003c70b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe04d,	// (0x0003c70b) list_single_fs_bigclock_indicator_pane_g2

0xe067,	// (0x0003c725) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe067,	// (0x0003c725) list_single_fs_bigclock_indicator_pane_g3

0xe081,	// (0x0003c73f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe081,	// (0x0003c73f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0003e338) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0003e338) list_single_fs_bigclock_indicator_pane_g

0xe0ac,	// (0x0003c76a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0ac,	// (0x0003c76a) list_single_fs_bigclock_indicator_pane_t1

0xe0d4,	// (0x0003c792) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0d4,	// (0x0003c792) list_single_fs_bigclock_indicator_pane_t2

0xe0fc,	// (0x0003c7ba) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0fc,	// (0x0003c7ba) list_single_fs_bigclock_indicator_pane_t3

0xe124,	// (0x0003c7e2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe124,	// (0x0003c7e2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0003e343) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0003e343) list_single_fs_bigclock_indicator_pane_t

0xeb2e,	// (0x0003d1ec) image3_infobar_fav_pane_ParamLimits

0xeb2e,	// (0x0003d1ec) image3_infobar_fav_pane

0xeb3e,	// (0x0003d1fc) image3_infobar_loc_pane_ParamLimits

0xeb3e,	// (0x0003d1fc) image3_infobar_loc_pane

0xeb54,	// (0x0003d212) image3_infobar_time_pane_ParamLimits

0xeb54,	// (0x0003d212) image3_infobar_time_pane

0xc7c0,	// (0x0003ae7e) image3_infobar_time_pane_g1

0xeb64,	// (0x0003d222) image3_infobar_time_pane_t1

0xc7c0,	// (0x0003ae7e) image3_infobar_loc_pane_g1

0xeb72,	// (0x0003d230) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003e50a) image3_infobar_loc_pane_g

0xeb7a,	// (0x0003d238) image3_infobar_loc_pane_t1

0xc7c0,	// (0x0003ae7e) image3_infobar_fav_pane_g1

0xeb88,	// (0x0003d246) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003e50f) image3_infobar_fav_pane_g

0xeb90,	// (0x0003d24e) fs_bigclock_status_battery_pane

0xeb99,	// (0x0003d257) fs_bigclock_status_signal_pane

0xeba2,	// (0x0003d260) fs_bigclock_status_title_pane

0xebab,	// (0x0003d269) fs_bigclock_status_signal_pane_g1

0xebb4,	// (0x0003d272) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003e514) fs_bigclock_status_signal_pane_g

0xebbc,	// (0x0003d27a) fs_bigclock_status_battery_pane_g1

0xebc5,	// (0x0003d283) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003e519) fs_bigclock_status_battery_pane_g

0xebcd,	// (0x0003d28b) fs_bigclock_status_title_pane_t1

0xc7c0,	// (0x0003ae7e) main_fs_bigclock_clock_pane_g1

0xebdb,	// (0x0003d299) main_fs_bigclock_clock_pane_g2

0xebdb,	// (0x0003d299) main_fs_bigclock_clock_pane_g3

0xebdb,	// (0x0003d299) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003e51e) main_fs_bigclock_clock_pane_g

0xebe3,	// (0x0003d2a1) main_fs_bigclock_clock_pane_t1

0xebf1,	// (0x0003d2af) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003e527) main_fs_bigclock_clock_pane_t

0x904b,	// (0x00037709) list_single_fs_bigclock_indicator_pane_ParamLimits

0x904b,	// (0x00037709) list_single_fs_bigclock_indicator_pane

0x905c,	// (0x0003771a) list_single_fs_bigclock_pane_ParamLimits

0x905c,	// (0x0003771a) list_single_fs_bigclock_pane

0xec09,	// (0x0003d2c7) main_fs_bigclock_indicator_pane_t1

0xec18,	// (0x0003d2d6) list_single_fs_bigclock_pane_g1

0xec20,	// (0x0003d2de) list_single_fs_bigclock_pane_t1

0xc7c0,	// (0x0003ae7e) main_fs_bigclock_swipe_pane_g1

0xec8b,	// (0x0003d349) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003e538) main_fs_bigclock_swipe_pane_g

0xec93,	// (0x0003d351) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec93,	// (0x0003d351) main_fs_bigclock_swipe_pane_t1

0x348a,	// (0x00031b48) call_type_pane_ParamLimits

0x9b91,	// (0x0003824f) main_btmg_pane

0xe8a8,	// (0x0003cf66) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8a8,	// (0x0003cf66) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003e4ab) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003e4ab) list_single_cale_mrui_row_pane_g

0xea29,	// (0x0003d0e7) list_recal_vselct_arw_lo_pane

0xea31,	// (0x0003d0ef) list_recal_vselct_arw_up_pane

0xea39,	// (0x0003d0f7) list_recal_vselct_pane

0x90bf,	// (0x0003777d) btmg_button_pane

0x90c9,	// (0x00037787) main_btmg_pane_g1

0x9b91,	// (0x0003824f) bg_button_pane_cp044

0xecb0,	// (0x0003d36e) btmg_button_pane_t1

0xc35b,	// (0x0003aa19) aid_listscroll_gen

0x9bf2,	// (0x000382b0) main_cntbar_detail_pane

0xe5e7,	// (0x0003cca5) list_cmail_folder_pane

0xe5f7,	// (0x0003ccb5) sp_fs_scroll_pane_cp03_ParamLimits

0xecbe,	// (0x0003d37c) list_single_fs_dyc_pane_cp01_ParamLimits

0xecbe,	// (0x0003d37c) list_single_fs_dyc_pane_cp01

0xecd8,	// (0x0003d396) aid_size_cmail_indent

0xece1,	// (0x0003d39f) list_single_dyc_row_pane_cp01

0x9103,	// (0x000377c1) cntbar_detail_list_pane_ParamLimits

0x9103,	// (0x000377c1) cntbar_detail_list_pane

0x9155,	// (0x00037813) main_cntbar_detail_cont_pane_ParamLimits

0x9155,	// (0x00037813) main_cntbar_detail_cont_pane

0x33ad,	// (0x00031a6b) scroll_pane_cp032_ParamLimits

0x33ad,	// (0x00031a6b) scroll_pane_cp032

0x9169,	// (0x00037827) cntbar_detail_list_event_pane_ParamLimits

0x9169,	// (0x00037827) cntbar_detail_list_event_pane

0x9115,	// (0x000377d3) cntbar_detail_list_shct_pane

0xa7b4,	// (0x00038e72) aid_list_gen

0xecea,	// (0x0003d3a8) aid_scroll

0xecf3,	// (0x0003d3b1) aid_size_touch_scroll_bar

0x7559,	// (0x00035c17) aid_list_double

0xecfc,	// (0x0003d3ba) aid_list_single

0x7559,	// (0x00035c17) aid_list_single_lg

0xed05,	// (0x0003d3c3) aid_list_z_g_a_sm

0xed0d,	// (0x0003d3cb) aid_list_z_g_d

0x9179,	// (0x00037837) aid_txt_z_prm

0x9187,	// (0x00037845) aid_txt_z_prm_cp01

0x9195,	// (0x00037853) aid_txt_z_sec

0x91a3,	// (0x00037861) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91a3,	// (0x00037861) main_cntbar_detail_cont_pane_g1

0x91b7,	// (0x00037875) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91b7,	// (0x00037875) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003e53d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003e53d) main_cntbar_detail_cont_pane_g

0xed15,	// (0x0003d3d3) main_cntbar_detail_cont_pane_t1

0xed23,	// (0x0003d3e1) main_cntbar_detail_cont_pane_t2

0xed31,	// (0x0003d3ef) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003e542) main_cntbar_detail_cont_pane_t

0x91c7,	// (0x00037885) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91c7,	// (0x00037885) cell_cntbar_detail_list_shct_pane

0xed3f,	// (0x0003d3fd) cntbar_detail_list_shct_pane_g1

0xed48,	// (0x0003d406) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003e549) cntbar_detail_list_shct_pane_g

0x91d9,	// (0x00037897) cntbar_detail_list_event_pane_g1_ParamLimits

0x91d9,	// (0x00037897) cntbar_detail_list_event_pane_g1

0x91e5,	// (0x000378a3) cntbar_detail_list_event_pane_g2_ParamLimits

0x91e5,	// (0x000378a3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003e54e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003e54e) cntbar_detail_list_event_pane_g

0x9253,	// (0x00037911) cntbar_detail_list_event_pane_t1_ParamLimits

0x9253,	// (0x00037911) cntbar_detail_list_event_pane_t1

0x9268,	// (0x00037926) cntbar_detail_list_event_pane_t2_ParamLimits

0x9268,	// (0x00037926) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003e55b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003e55b) cntbar_detail_list_event_pane_t

0xc7c0,	// (0x0003ae7e) cell_cntbar_detail_list_shct_pane_g1

0x389f,	// (0x00031f5d) navi_pane_mv_g3

0x9bf2,	// (0x000382b0) main_cntbar_detail_pane_ParamLimits

0x9b91,	// (0x0003824f) main_notif_wgt_pane

0x6282,	// (0x00034940) aid_tch_main_mp4_pane_g4

0x6460,	// (0x00034b1e) popup_slider_window_cp02

0xea1f,	// (0x0003d0dd) list_recal_day_event_pane

0x90d3,	// (0x00037791) cntbar_detail_btn_pane_ParamLimits

0x90d3,	// (0x00037791) cntbar_detail_btn_pane

0x90eb,	// (0x000377a9) cntbar_detail_btn_pane_cp01_ParamLimits

0x90eb,	// (0x000377a9) cntbar_detail_btn_pane_cp01

0x9115,	// (0x000377d3) cntbar_detail_list_shct_pane_ParamLimits

0x9125,	// (0x000377e3) cntbar_detail_pane_g1_ParamLimits

0x9125,	// (0x000377e3) cntbar_detail_pane_g1

0x9139,	// (0x000377f7) cntbar_detail_pane_t1_ParamLimits

0x9139,	// (0x000377f7) cntbar_detail_pane_t1

0x91f1,	// (0x000378af) cntbar_detail_list_event_pane_g3_ParamLimits

0x91f1,	// (0x000378af) cntbar_detail_list_event_pane_g3

0x9209,	// (0x000378c7) cntbar_detail_list_event_pane_g4_ParamLimits

0x9209,	// (0x000378c7) cntbar_detail_list_event_pane_g4

0x9221,	// (0x000378df) cntbar_detail_list_event_pane_g5_ParamLimits

0x9221,	// (0x000378df) cntbar_detail_list_event_pane_g5

0x9239,	// (0x000378f7) cntbar_detail_list_event_pane_g6_ParamLimits

0x9239,	// (0x000378f7) cntbar_detail_list_event_pane_g6

0x927d,	// (0x0003793b) cntbar_detail_list_event_pane_t3_ParamLimits

0x927d,	// (0x0003793b) cntbar_detail_list_event_pane_t3

0x928f,	// (0x0003794d) popup_notif_wgt_window_ParamLimits

0x928f,	// (0x0003794d) popup_notif_wgt_window

0x92a8,	// (0x00037966) popup_submenu_window_cp01_ParamLimits

0x92a8,	// (0x00037966) popup_submenu_window_cp01

0xaf18,	// (0x000395d6) bg_popup_window_pane_cp10

0xed51,	// (0x0003d40f) listscroll_notif_wgt_pane

0xed63,	// (0x0003d421) list_notif_wgt_window

0xed6c,	// (0x0003d42a) scroll_pane_cp033

0x92bc,	// (0x0003797a) list_notif_wgt_row_pane_ParamLimits

0x92bc,	// (0x0003797a) list_notif_wgt_row_pane

0xed75,	// (0x0003d433) aid_size_list_notif_wgt_del

0xed82,	// (0x0003d440) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0003d44c) list_notif_wgt_row_pane_g2

0xed9a,	// (0x0003d458) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003e562) list_notif_wgt_row_pane_g

0xeda7,	// (0x0003d465) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0003d47a) list_notif_wgt_row_pane_t2

0xedce,	// (0x0003d48c) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003e569) list_notif_wgt_row_pane_t

0xd441,	// (0x0003baff) list_recal_day_event_pane_g1

0xede0,	// (0x0003d49e) list_recal_day_event_pane_t1

0x9b91,	// (0x0003824f) bg_button_pane_cp045

0xedef,	// (0x0003d4ad) cntbar_detail_btn_pane_t1

0xc36f,	// (0x0003aa2d) main_callh_pane_ParamLimits

0xc36f,	// (0x0003aa2d) main_callh_pane

0x9b91,	// (0x0003824f) main_coverflow0_pane

0x9b91,	// (0x0003824f) main_wgtman_pane

0x81de,	// (0x0003689c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81de,	// (0x0003689c) main_fs_bigclock_unlock_btn_pane

0x8a77,	// (0x00037135) bg_button_pane_cp16

0x8a87,	// (0x00037145) cell_tport_appsw_pane_g3

0x92cc,	// (0x0003798a) cf0_flow_pane_ParamLimits

0x92cc,	// (0x0003798a) cf0_flow_pane

0xedfd,	// (0x0003d4bb) listscroll_cf0_pane

0xee08,	// (0x0003d4c6) main_cf0_pane_g1

0x92e1,	// (0x0003799f) main_cf0_pane_t1_ParamLimits

0x92e1,	// (0x0003799f) main_cf0_pane_t1

0x92f8,	// (0x000379b6) main_cf0_pane_t2_ParamLimits

0x92f8,	// (0x000379b6) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003e575) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003e575) main_cf0_pane_t

0xee1a,	// (0x0003d4d8) scroll_pane_cp11

0x930f,	// (0x000379cd) cf0_flow_pane_g1

0x931b,	// (0x000379d9) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003e57a) cf0_flow_pane_g

0x9327,	// (0x000379e5) cf0_flow_pane_t1

0x9b91,	// (0x0003824f) main_call6_pane

0x9b91,	// (0x0003824f) main_calllock_pane

0x9339,	// (0x000379f7) call6_btn_grp_pane_ParamLimits

0x9339,	// (0x000379f7) call6_btn_grp_pane

0x9353,	// (0x00037a11) call6_pane_g1_ParamLimits

0x9353,	// (0x00037a11) call6_pane_g1

0x9369,	// (0x00037a27) popup_call6_1st_window_ParamLimits

0x9369,	// (0x00037a27) popup_call6_1st_window

0x937a,	// (0x00037a38) popup_call6_2nd_window_ParamLimits

0x937a,	// (0x00037a38) popup_call6_2nd_window

0x938b,	// (0x00037a49) cell_call6_btn_pane_ParamLimits

0x938b,	// (0x00037a49) cell_call6_btn_pane

0xaf18,	// (0x000395d6) bg_popup_call2_in_pane_cp03

0xee25,	// (0x0003d4e3) popup_call6_1st_window_g1

0xee2d,	// (0x0003d4eb) popup_call6_1st_window_g2

0xee35,	// (0x0003d4f3) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003e57f) popup_call6_1st_window_g

0xee3d,	// (0x0003d4fb) popup_call6_1st_window_t1

0xee4c,	// (0x0003d50a) popup_call6_1st_window_t2

0xee5c,	// (0x0003d51a) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003e586) popup_call6_1st_window_t

0xaf18,	// (0x000395d6) bg_popup_call2_in_pane_cp04

0xee25,	// (0x0003d4e3) popup_call6_2nd_window_g1

0xee2d,	// (0x0003d4eb) popup_call6_2nd_window_g2

0xee35,	// (0x0003d4f3) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003e57f) popup_call6_2nd_window_g

0xee3d,	// (0x0003d4fb) popup_call6_2nd_window_t1

0x9b91,	// (0x0003824f) bg_button_pane_cp15

0xee6c,	// (0x0003d52a) cell_call6_btn_pane_g1

0xee75,	// (0x0003d533) cell_call6_btn_pane_t1

0x939f,	// (0x00037a5d) listscroll_wgtman_pane_ParamLimits

0x939f,	// (0x00037a5d) listscroll_wgtman_pane

0x93c2,	// (0x00037a80) wgtman_btn_pane_ParamLimits

0x93c2,	// (0x00037a80) wgtman_btn_pane

0xadde,	// (0x0003949c) aid_scroll_copy1

0xee84,	// (0x0003d542) list_wgtman_pane

0x9405,	// (0x00037ac3) wgtman_btn_pane_g1_ParamLimits

0x9405,	// (0x00037ac3) wgtman_btn_pane_g1

0x9431,	// (0x00037aef) wgtman_btn_pane_t1_ParamLimits

0x9431,	// (0x00037aef) wgtman_btn_pane_t1

0xee8e,	// (0x0003d54c) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x0003d54c) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003e58d) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003e58d) wgtman_btn_pane_t

0x946e,	// (0x00037b2c) listrow_wgtman_pane_ParamLimits

0x946e,	// (0x00037b2c) listrow_wgtman_pane

0x9480,	// (0x00037b3e) listrow_wgtman_pane_g1

0x948d,	// (0x00037b4b) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003e592) listrow_wgtman_pane_g

0x94ab,	// (0x00037b69) listrow_wgtman_pane_t1

0x94c3,	// (0x00037b81) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003e597) listrow_wgtman_pane_t

0x94e9,	// (0x00037ba7) wait_bar_pane_cp09

0xeea5,	// (0x0003d563) main_calllock_btn_pane

0xeeaf,	// (0x0003d56d) main_calllock_pane_g1

0x9b91,	// (0x0003824f) bg_button_pane_cp17

0xeebb,	// (0x0003d579) main_calllock_btn_pane_g1

0xeec4,	// (0x0003d582) main_calllock_btn_pane_t1

0x9b91,	// (0x0003824f) main_dialer3_pane

0x9b91,	// (0x0003824f) main_fmrd2_pane

0xc7c0,	// (0x0003ae7e) main_fs_bigclock_unlock_btn_pane_g1

0xeedb,	// (0x0003d599) main_fs_bigclock_unlock_btn_pane_t1

0x94fb,	// (0x00037bb9) area_fmrd2_info_pane_ParamLimits

0x94fb,	// (0x00037bb9) area_fmrd2_info_pane

0x950a,	// (0x00037bc8) area_fmrd2_visual_pane_ParamLimits

0x950a,	// (0x00037bc8) area_fmrd2_visual_pane

0x9518,	// (0x00037bd6) fmrd2_indi_pane_ParamLimits

0x9518,	// (0x00037bd6) fmrd2_indi_pane

0x9525,	// (0x00037be3) area_fmrd2_visual_pane_g1

0x952d,	// (0x00037beb) area_fmrd2_visual_pane_t1

0x953d,	// (0x00037bfb) area_fmrd2_visual_pane_t2

0x954d,	// (0x00037c0b) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003e5a1) area_fmrd2_visual_pane_t

0x955d,	// (0x00037c1b) area_fmrd2_info_pane_g1

0x9565,	// (0x00037c23) area_fmrd2_info_pane_t1

0x9575,	// (0x00037c33) area_fmrd2_info_pane_t2

0x9585,	// (0x00037c43) area_fmrd2_info_pane_t3

0x9595,	// (0x00037c53) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003e5a8) area_fmrd2_info_pane_t

0x95a5,	// (0x00037c63) fmrd2_indi_pane_t1

0x95b5,	// (0x00037c73) fmrd2_indi_pane_t2

0x95c5,	// (0x00037c83) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003e5b1) fmrd2_indi_pane_t

0xe090,	// (0x0003c74e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe090,	// (0x0003c74e) list_single_fs_bigclock_indicator_pane_g5

0xe139,	// (0x0003c7f7) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe139,	// (0x0003c7f7) list_single_fs_bigclock_indicator_pane_t5

0x8c9e,	// (0x0003735c) aid_cell_bcale_month_pane_ParamLimits

0x8c9e,	// (0x0003735c) aid_cell_bcale_month_pane

0x8cbc,	// (0x0003737a) bcale_month_pane_ParamLimits

0x8cbc,	// (0x0003737a) bcale_month_pane

0x8cde,	// (0x0003739c) bcale_preview_pane_ParamLimits

0x8cde,	// (0x0003739c) bcale_preview_pane

0xec20,	// (0x0003d2de) list_single_fs_bigclock_pane_t1_ParamLimits

0xec3f,	// (0x0003d2fd) list_single_fs_bigclock_pane_t2_ParamLimits

0xec3f,	// (0x0003d2fd) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003e533) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003e533) list_single_fs_bigclock_pane_t

0xeed3,	// (0x0003d591) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003e59c) main_fs_bigclock_unlock_btn_pane_g

0x95d5,	// (0x00037c93) aid_dia3_key_size_ParamLimits

0x95d5,	// (0x00037c93) aid_dia3_key_size

0x95e4,	// (0x00037ca2) aid_dia3_listrow_size_ParamLimits

0x95e4,	// (0x00037ca2) aid_dia3_listrow_size

0x95f9,	// (0x00037cb7) dia3_keypad_fun_pane_ParamLimits

0x95f9,	// (0x00037cb7) dia3_keypad_fun_pane

0x9615,	// (0x00037cd3) dia3_keypad_num_pane_ParamLimits

0x9615,	// (0x00037cd3) dia3_keypad_num_pane

0x962e,	// (0x00037cec) dia3_listscroll_pane_ParamLimits

0x962e,	// (0x00037cec) dia3_listscroll_pane

0x9641,	// (0x00037cff) dia3_numentry_pane_ParamLimits

0x9641,	// (0x00037cff) dia3_numentry_pane

0xeee9,	// (0x0003d5a7) dia3_list_pane

0xeef4,	// (0x0003d5b2) scroll_pane_cp12

0x9b91,	// (0x0003824f) bg_dia3_numentry_pane

0x9655,	// (0x00037d13) dia3_numentry_pane_t1

0x9664,	// (0x00037d22) cell_dia3_key_num_pane

0x966c,	// (0x00037d2a) cell_dia3_key0_fun_pane_ParamLimits

0x966c,	// (0x00037d2a) cell_dia3_key0_fun_pane

0x9680,	// (0x00037d3e) cell_dia3_key1_fun_pane_ParamLimits

0x9680,	// (0x00037d3e) cell_dia3_key1_fun_pane

0x9698,	// (0x00037d56) dia3_listrow_pane

0xdd8e,	// (0x0003c44c) bg_dia3_numentry_pane_g1

0x9b91,	// (0x0003824f) bg_button_pane_cp21

0xeeff,	// (0x0003d5bd) cell_dia3_key_num_pane_t1

0xef0d,	// (0x0003d5cb) cell_dia3_key_num_pane_t2

0xef1c,	// (0x0003d5da) cell_dia3_key_num_pane_t3

0xef2b,	// (0x0003d5e9) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003e5b8) cell_dia3_key_num_pane_t

0x9b91,	// (0x0003824f) bg_button_pane_cp19

0x96aa,	// (0x00037d68) cell_dia3_key0_fun_pane_g1

0x9b91,	// (0x0003824f) bg_button_pane_cp20

0x96b2,	// (0x00037d70) cell_dia3_key1_fun_pane_g1

0x96ba,	// (0x00037d78) area_left_week_number_pane

0x96c8,	// (0x00037d86) area_top_day_name_pane

0x96db,	// (0x00037d99) frame_month_view_pane

0xef3a,	// (0x0003d5f8) grid_month_view_pane

0x96f0,	// (0x00037dae) cell_top_day_name_pane_ParamLimits

0x96f0,	// (0x00037dae) cell_top_day_name_pane

0x971f,	// (0x00037ddd) cell_area_left_week_number_pane_ParamLimits

0x971f,	// (0x00037ddd) cell_area_left_week_number_pane

0x9733,	// (0x00037df1) cell_month_view_pane_ParamLimits

0x9733,	// (0x00037df1) cell_month_view_pane

0xef48,	// (0x0003d606) frm_month_g1

0x9762,	// (0x00037e20) frm_month_g2

0x9775,	// (0x00037e33) frm_month_g3

0x9788,	// (0x00037e46) frm_month_g4

0x979b,	// (0x00037e59) frm_month_g5

0x97ae,	// (0x00037e6c) frm_month_g6

0x97c1,	// (0x00037e7f) frm_month_g7

0xef55,	// (0x0003d613) frm_month_g8

0x97d6,	// (0x00037e94) frm_month_g9

0x97e6,	// (0x00037ea4) frm_month_g10

0x97f6,	// (0x00037eb4) frm_month_g11

0x9806,	// (0x00037ec4) frm_month_g12

0x9818,	// (0x00037ed6) frm_month_g13

0x982c,	// (0x00037eea) frm_month_g14

0x9840,	// (0x00037efe) frm_month_g15

0x9854,	// (0x00037f12) frm_month_g16

0x000f,

0xff03,	// (0x0003e5c1) frm_month_g

0xef62,	// (0x0003d620) cell_top_day_name_pane_t1

0x9868,	// (0x00037f26) cell_area_left_week_number_pane_g1

0x9874,	// (0x00037f32) cell_area_left_week_number_pane_t1

0xc9f0,	// (0x0003b0ae) cell_month_view_pane_g1

0x9887,	// (0x00037f45) cell_month_view_pane_t1

0x9b91,	// (0x0003824f) main_fps_pane

0xe377,	// (0x0003ca35) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe377,	// (0x0003ca35) cmail_ddmenu_btn02_pane_cp1

0xe393,	// (0x0003ca51) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe393,	// (0x0003ca51) cmail_ddmenu_btn02_pane_cp2

0x8fa4,	// (0x00037662) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fa4,	// (0x00037662) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003e4e6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003e4e6) cmail_ddmenu_btn02_pane_g

0x8fc5,	// (0x00037683) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fc5,	// (0x00037683) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003e4eb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003e4eb) cmail_ddmenu_btn02_pane_t

0x989a,	// (0x00037f58) fps_text_pane_ParamLimits

0x989a,	// (0x00037f58) fps_text_pane

0x98b1,	// (0x00037f6f) main_fps_pane_g1_ParamLimits

0x98b1,	// (0x00037f6f) main_fps_pane_g1

0x98c9,	// (0x00037f87) wait_bar_pane_cp010_ParamLimits

0x98c9,	// (0x00037f87) wait_bar_pane_cp010

0x98dc,	// (0x00037f9a) fps_text_pane_t1_ParamLimits

0x98dc,	// (0x00037f9a) fps_text_pane_t1

0xec77,	// (0x0003d335) cam4_image_uncrop_pane_g1

0xec80,	// (0x0003d33e) cam4_image_uncrop_pane_g2

0x66ea,	// (0x00034da8) cam4_image_uncrop_pane_g3

0x66f3,	// (0x00034db1) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0003dfb2) cam4_image_uncrop_pane_g

0x9698,	// (0x00037d56) dia3_listrow_pane_ParamLimits

0x9b91,	// (0x0003824f) main_phob2_pane

0x8a46,	// (0x00037104) cell_tport_appsw_pane_cp02_ParamLimits

0x8a46,	// (0x00037104) cell_tport_appsw_pane_cp02

0x8a5a,	// (0x00037118) cell_tport_appsw_pane_cp03_ParamLimits

0x8a5a,	// (0x00037118) cell_tport_appsw_pane_cp03

0x9b91,	// (0x0003824f) phob2_contact_card_pane

0x9b91,	// (0x0003824f) phob2_listscroll_pane

0xef75,	// (0x0003d633) phob2_list_pane

0xef7d,	// (0x0003d63b) scroll_pane_cp034

0x98f4,	// (0x00037fb2) phob2_cc_data_pane_ParamLimits

0x98f4,	// (0x00037fb2) phob2_cc_data_pane

0x9915,	// (0x00037fd3) phob2_cc_listscroll_pane_ParamLimits

0x9915,	// (0x00037fd3) phob2_cc_listscroll_pane

0x9937,	// (0x00037ff5) list_double_large_graphic_phob2_pane_ParamLimits

0x9937,	// (0x00037ff5) list_double_large_graphic_phob2_pane

0x994b,	// (0x00038009) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x994b,	// (0x00038009) list_double_large_graphic_phob2_pane_g1

0x9961,	// (0x0003801f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9961,	// (0x0003801f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003e5e2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003e5e2) list_double_large_graphic_phob2_pane_g

0x996d,	// (0x0003802b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x996d,	// (0x0003802b) list_double_large_graphic_phob2_pane_t1

0x9982,	// (0x00038040) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9982,	// (0x00038040) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003e5e7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003e5e7) list_double_large_graphic_phob2_pane_t

0x9b91,	// (0x0003824f) list_highlight_pane_cp024

0xef85,	// (0x0003d643) phob2_cc_button_pane

0x9994,	// (0x00038052) phob2_cc_data_pane_g1_ParamLimits

0x9994,	// (0x00038052) phob2_cc_data_pane_g1

0x99aa,	// (0x00038068) phob2_cc_data_pane_g2_ParamLimits

0x99aa,	// (0x00038068) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003e5ec) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003e5ec) phob2_cc_data_pane_g

0x99bc,	// (0x0003807a) phob2_cc_data_pane_t1_ParamLimits

0x99bc,	// (0x0003807a) phob2_cc_data_pane_t1

0x99d4,	// (0x00038092) phob2_cc_data_pane_t2_ParamLimits

0x99d4,	// (0x00038092) phob2_cc_data_pane_t2

0x99ee,	// (0x000380ac) phob2_cc_data_pane_t3_ParamLimits

0x99ee,	// (0x000380ac) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003e5f1) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003e5f1) phob2_cc_data_pane_t

0xef8d,	// (0x0003d64b) phob2_cc_list_pane_ParamLimits

0xef8d,	// (0x0003d64b) phob2_cc_list_pane

0xd4da,	// (0x0003bb98) scroll_pane_cp035_ParamLimits

0xd4da,	// (0x0003bb98) scroll_pane_cp035

0x9bf2,	// (0x000382b0) bg_button_pane_cp033

0xef99,	// (0x0003d657) phob2_cc_button_pane_g1

0xefa5,	// (0x0003d663) phob2_cc_button_pane_t1

0xefba,	// (0x0003d678) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003e5f8) phob2_cc_button_pane_t

0x9a08,	// (0x000380c6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a08,	// (0x000380c6) list_double_large_graphic_phob2_cc_pane

0x9a1c,	// (0x000380da) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a1c,	// (0x000380da) list_double_large_graphic_phob2_cc_pane_g1

0x9a28,	// (0x000380e6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a28,	// (0x000380e6) list_double_large_graphic_phob2_cc_pane_g2

0x9a34,	// (0x000380f2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a34,	// (0x000380f2) list_double_large_graphic_phob2_cc_pane_g3

0x9a40,	// (0x000380fe) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a40,	// (0x000380fe) list_double_large_graphic_phob2_cc_pane_g4

0x9a4c,	// (0x0003810a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a4c,	// (0x0003810a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003e5fd) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003e5fd) list_double_large_graphic_phob2_cc_pane_g

0x9a58,	// (0x00038116) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a58,	// (0x00038116) list_double_large_graphic_phob2_cc_pane_t1

0x9a81,	// (0x0003813f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a81,	// (0x0003813f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003e608) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003e608) list_double_large_graphic_phob2_cc_pane_t

0xefcc,	// (0x0003d68a) list_highlight_pane_cp025_ParamLimits

0xefcc,	// (0x0003d68a) list_highlight_pane_cp025

0x9bf2,	// (0x000382b0) bg_button_pane_cp033_ParamLimits

0xef99,	// (0x0003d657) phob2_cc_button_pane_g1_ParamLimits

0xefa5,	// (0x0003d663) phob2_cc_button_pane_t1_ParamLimits

0xefba,	// (0x0003d678) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003e5f8) phob2_cc_button_pane_t_ParamLimits

0x12ac,	// (0x0002f96a) popup_wgtman_window

0xd301,	// (0x0003b9bf) scroll_pane_cp038

0x93e7,	// (0x00037aa5) wgtman_btn_pane_cp_01_ParamLimits

0x93e7,	// (0x00037aa5) wgtman_btn_pane_cp_01

0xefda,	// (0x0003d698) wgtman_content_pane

0xefe3,	// (0x0003d6a1) wgtman_heading_pane

0x9b91,	// (0x0003824f) bg_heading_pane_cp02

0xefec,	// (0x0003d6aa) wgtman_heading_pane_g1

0xeff4,	// (0x0003d6b2) wgtman_heading_pane_t1

0xf002,	// (0x0003d6c0) scroll_pane_cp036

0xf00a,	// (0x0003d6c8) wgtman_list_pane

0xf012,	// (0x0003d6d0) wgtman_list_pane_t1_ParamLimits

0xf012,	// (0x0003d6d0) wgtman_list_pane_t1

0x66d4,	// (0x00034d92) cam4_grid_pane

0x7077,	// (0x00035735) bg_button_pane_cp015_ParamLimits

0x708b,	// (0x00035749) bg_button_pane_cp016_ParamLimits

0x709e,	// (0x0003575c) bg_button_pane_cp017_ParamLimits

0x70f6,	// (0x000357b4) popup_vitu2_query_window_g3_ParamLimits

0x70f6,	// (0x000357b4) popup_vitu2_query_window_g3

0x71b3,	// (0x00035871) popup_vitu2_query_window_t6_ParamLimits

0x71b3,	// (0x00035871) popup_vitu2_query_window_t6

0x71de,	// (0x0003589c) popup_vitu2_query_window_t7_ParamLimits

0x71de,	// (0x0003589c) popup_vitu2_query_window_t7

0xec77,	// (0x0003d335) cam4_grid_pane_g1

0xec80,	// (0x0003d33e) cam4_grid_pane_g2

0xf02c,	// (0x0003d6ea) cam4_grid_pane_g3

0xf035,	// (0x0003d6f3) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003e60d) cam4_grid_pane_g

0x219c,	// (0x0003085a) aid_placing_vt_slider_lsc_ParamLimits

0x2489,	// (0x00030b47) vidtel_button_pane_ParamLimits

0x2489,	// (0x00030b47) vidtel_button_pane

0xf040,	// (0x0003d6fe) bg_button_pane_cp034

0x9aaa,	// (0x00038168) vidtel_button_pane_g1

0xf04a,	// (0x0003d708) vidtel_button_pane_t1

0xd405,	// (0x0003bac3) aid_size_vtel_slider_touch

0xd4da,	// (0x0003bb98) scroll_pane_cp039

0xddcc,	// (0x0003c48a) ncim_query_button_pane_cp01_ParamLimits

0xddeb,	// (0x0003c4a9) ncimui_query_pane_g1_ParamLimits

0x9bf2,	// (0x000382b0) input_focus_pane_cp012_ParamLimits

0xde10,	// (0x0003c4ce) ncim_query_entry_pane_t1_ParamLimits

0xd4da,	// (0x0003bb98) scroll_pane_cp039_ParamLimits

0x3811,	// (0x00031ecf) navi_pane_bcale_mc_g1

0x3819,	// (0x00031ed7) navi_pane_bcale_mc_t1

0xe3dc,	// (0x0003ca9a) main_sp_fs_email_pane_g1

0xe3e8,	// (0x0003caa6) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0003e3a9) main_sp_fs_email_pane_g

0xe8b4,	// (0x0003cf72) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8b4,	// (0x0003cf72) list_single_cale_mrui_row_pane_g3

0x8fe5,	// (0x000376a3) list_single_recal_day_pane_g5_event_pane

0xea91,	// (0x0003d14f) list_single_recal_day_pane_g7

0xf058,	// (0x0003d716) list_recal_day_event_pane_cp01

0xf061,	// (0x0003d71f) list_recal_vselct_arw_lo_pane_cp01

0xf069,	// (0x0003d727) list_recal_vselct_arw_up_pane_cp01

0xf071,	// (0x0003d72f) list_recal_vselct_pane_cp01

0xd441,	// (0x0003baff) list_recal_day_event_pane_cp01_g1

0xf07b,	// (0x0003d739) list_recal_day_event_pane_cp01_t1

0xea99,	// (0x0003d157) list_single_recal_day_pane_t1_ParamLimits

0xeaab,	// (0x0003d169) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003e4fb) list_single_recal_day_pane_t_ParamLimits

0xa26e,	// (0x0003892c) bg_notes_pane_ParamLimits

0xa311,	// (0x000389cf) list_notes_pane_ParamLimits

0x156a,	// (0x0002fc28) scroll_pane_cp06_ParamLimits

0xa333,	// (0x000389f1) main_notes_pane_ParamLimits

0x9b91,	// (0x0003824f) main_welc_pane

0x9ab2,	// (0x00038170) main_welc_body_pane_ParamLimits

0x9ab2,	// (0x00038170) main_welc_body_pane

0x9ad1,	// (0x0003818f) main_welc_opti_pane_ParamLimits

0x9ad1,	// (0x0003818f) main_welc_opti_pane

0x9b1a,	// (0x000381d8) main_welc_pane_t1_ParamLimits

0x9b1a,	// (0x000381d8) main_welc_pane_t1

0xec63,	// (0x0003d321) main_welc_body_row_pane_ParamLimits

0xec63,	// (0x0003d321) main_welc_body_row_pane

0x9b3c,	// (0x000381fa) main_welc_opti_row_pane_ParamLimits

0x9b3c,	// (0x000381fa) main_welc_opti_row_pane

0xf089,	// (0x0003d747) main_welc_opti_row_pane_g1

0xf091,	// (0x0003d74f) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0003d75e) main_welc_body_row_pane_t1

0xed5b,	// (0x0003d419) popup_notif_wgt_heading_pane

0xed75,	// (0x0003d433) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0003d440) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0003d44c) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x0003d458) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003e562) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x0003d465) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0003d47a) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0003d48c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003e569) list_notif_wgt_row_pane_t_ParamLimits

0x9480,	// (0x00037b3e) listrow_wgtman_pane_g1_ParamLimits

0x948d,	// (0x00037b4b) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003e592) listrow_wgtman_pane_g_ParamLimits

0x94ab,	// (0x00037b69) listrow_wgtman_pane_t1_ParamLimits

0x94c3,	// (0x00037b81) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003e597) listrow_wgtman_pane_t_ParamLimits

0x94e9,	// (0x00037ba7) wait_bar_pane_cp09_ParamLimits

0x9b91,	// (0x0003824f) bg_popup_heading_pane_cp02

0xf0af,	// (0x0003d76d) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0003d775) popup_notif_wgt_heading_pane_t1

0x9b91,	// (0x0003824f) main_vids_pane

0x9b91,	// (0x0003824f) vids_listscroll_pane

0x9b4c,	// (0x0003820a) scroll_pane_cp040

0x9b91,	// (0x0003824f) vids_list_pane

0x9b57,	// (0x00038215) vids_list_double_pane_ParamLimits

0x9b57,	// (0x00038215) vids_list_double_pane

0x9b68,	// (0x00038226) vids_list_double_pane_g1

0x9b71,	// (0x0003822f) vids_list_double_pane_t1

0x9b81,	// (0x0003823f) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003e61b) vids_list_double_pane_t

0x9bf2,	// (0x000382b0) main_ncimui_pane_ParamLimits

0x7d6c,	// (0x0003642a) main_ncimui_pane_g1_ParamLimits

0x7d78,	// (0x00036436) main_ncimui_pane_g2_ParamLimits

0x7d78,	// (0x00036436) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0003e2ae) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0003e2ae) main_ncimui_pane_g

0x9af0,	// (0x000381ae) main_welc_pane_g1_ParamLimits

0x9af0,	// (0x000381ae) main_welc_pane_g1

0x9b05,	// (0x000381c3) main_welc_pane_g2_ParamLimits

0x9b05,	// (0x000381c3) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003e616) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003e616) main_welc_pane_g

0xa26e,	// (0x0003892c) listscroll_mce_pane_ParamLimits

0x38f1,	// (0x00031faf) wait_bar_pane_cp10

0xc363,	// (0x0003aa21) main_cale_day_pane_ParamLimits

0xc363,	// (0x0003aa21) main_cale_week_pane_ParamLimits

0xa26e,	// (0x0003892c) main_messa_pane_ParamLimits

0x5c2e,	// (0x000342ec) main_clock2_btn_pane_ParamLimits

0x5c2e,	// (0x000342ec) main_clock2_btn_pane

0xcb84,	// (0x0003b242) main_clock2_btn_pane_cp01_ParamLimits

0xcb84,	// (0x0003b242) main_clock2_btn_pane_cp01

0xe837,	// (0x0003cef5) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x0003d4d0) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003e570) main_cf0_pane_g

0x96ba,	// (0x00037d78) area_left_week_number_pane_ParamLimits

0x96c8,	// (0x00037d86) area_top_day_name_pane_ParamLimits

0x96db,	// (0x00037d99) frame_month_view_pane_ParamLimits

0xef3a,	// (0x0003d5f8) grid_month_view_pane_ParamLimits

0xef48,	// (0x0003d606) frm_month_g1_ParamLimits

0x9762,	// (0x00037e20) frm_month_g2_ParamLimits

0x9775,	// (0x00037e33) frm_month_g3_ParamLimits

0x9788,	// (0x00037e46) frm_month_g4_ParamLimits

0x979b,	// (0x00037e59) frm_month_g5_ParamLimits

0x97ae,	// (0x00037e6c) frm_month_g6_ParamLimits

0x97c1,	// (0x00037e7f) frm_month_g7_ParamLimits

0xef55,	// (0x0003d613) frm_month_g8_ParamLimits

0x97d6,	// (0x00037e94) frm_month_g9_ParamLimits

0x97e6,	// (0x00037ea4) frm_month_g10_ParamLimits

0x97f6,	// (0x00037eb4) frm_month_g11_ParamLimits

0x9806,	// (0x00037ec4) frm_month_g12_ParamLimits

0x9818,	// (0x00037ed6) frm_month_g13_ParamLimits

0x982c,	// (0x00037eea) frm_month_g14_ParamLimits

0x9840,	// (0x00037efe) frm_month_g15_ParamLimits

0x9854,	// (0x00037f12) frm_month_g16_ParamLimits

0xff03,	// (0x0003e5c1) frm_month_g_ParamLimits

0xef62,	// (0x0003d620) cell_top_day_name_pane_t1_ParamLimits

0x9868,	// (0x00037f26) cell_area_left_week_number_pane_g1_ParamLimits

0x9874,	// (0x00037f32) cell_area_left_week_number_pane_t1_ParamLimits

0xc9f0,	// (0x0003b0ae) cell_month_view_pane_g1_ParamLimits

0x9887,	// (0x00037f45) cell_month_view_pane_t1_ParamLimits

0xa266,	// (0x00038924) main_clock2_btn_pane_g1

0xf0c5,	// (0x0003d783) main_clock2_btn_pane_t1

0x9bf2,	// (0x000382b0) listscroll_cmail_pane_ParamLimits

0xe3dc,	// (0x0003ca9a) main_sp_fs_email_pane_g1_ParamLimits

0xe3e8,	// (0x0003caa6) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0003e3a9) main_sp_fs_email_pane_g_ParamLimits

0xea00,	// (0x0003d0be) list_recal_day_pane_ParamLimits

0xea11,	// (0x0003d0cf) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
