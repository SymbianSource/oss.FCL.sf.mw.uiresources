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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002e2a9 };

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
0x1a85,	// (0x0002fd2e) Screen

0x1a91,	// (0x0002fd3a) application_window

0x1ac1,	// (0x0002fd6a) area_bottom_pane_ParamLimits

0x1ac1,	// (0x0002fd6a) area_bottom_pane

0x01f6,	// (0x0002e49f) area_top_pane_ParamLimits

0x01f6,	// (0x0002e49f) area_top_pane

0x1b1e,	// (0x0002fdc7) call_video_uplink_pane_ParamLimits

0x1b1e,	// (0x0002fdc7) call_video_uplink_pane

0x0284,	// (0x0002e52d) main_pane_ParamLimits

0x0284,	// (0x0002e52d) main_pane

0xc3f6,	// (0x0003a69f) context_pane

0x49f6,	// (0x00032c9f) navi_pane

0x4a28,	// (0x00032cd1) popup_cale_events_window_ParamLimits

0x4a28,	// (0x00032cd1) popup_cale_events_window

0xc409,	// (0x0003a6b2) popup_mup_playback_window

0x4a40,	// (0x00032ce9) signal_pane

0xa35a,	// (0x00038603) main_browser_pane

0xa554,	// (0x000387fd) main_burst_pane

0x0681,	// (0x0002e92a) main_calc_pane

0xc3dc,	// (0x0003a685) main_cale_day_pane

0x0695,	// (0x0002e93e) main_cale_month_pane

0xc3dc,	// (0x0003a685) main_cale_week_pane

0xa554,	// (0x000387fd) main_call_pane

0xa02e,	// (0x000382d7) main_call_poc_pane

0xa554,	// (0x000387fd) main_camera_pane

0xa554,	// (0x000387fd) main_chi_dic_pane

0xad45,	// (0x00038fee) main_clock_pane

0xa02e,	// (0x000382d7) main_fmradio_pane

0xa554,	// (0x000387fd) main_graph_messa_pane

0xa02e,	// (0x000382d7) main_help_pane

0xa35a,	// (0x00038603) main_im_pane

0xa289,	// (0x00038532) main_image_pane_ParamLimits

0xa289,	// (0x00038532) main_image_pane

0xa02e,	// (0x000382d7) main_location2_pane

0xa554,	// (0x000387fd) main_location_pane

0xa289,	// (0x00038532) main_messa_pane

0xa02e,	// (0x000382d7) main_mp2_pane

0xa554,	// (0x000387fd) main_mp_pane

0xa02e,	// (0x000382d7) main_msg_pane

0xa02e,	// (0x000382d7) main_mup_eq_pane

0xa02e,	// (0x000382d7) main_mup_pane

0xa35a,	// (0x00038603) main_notes_pane

0xa02e,	// (0x000382d7) main_pec_pane

0xa02e,	// (0x000382d7) main_phob_pane

0xa02e,	// (0x000382d7) main_pinb_pane

0xa02e,	// (0x000382d7) main_postcard_pane

0xa02e,	// (0x000382d7) main_qdial_pane

0xa554,	// (0x000387fd) main_skin_pane

0xa02e,	// (0x000382d7) main_smil2_pane

0xa554,	// (0x000387fd) main_smil_pane

0xa554,	// (0x000387fd) main_video_pane

0xa554,	// (0x000387fd) main_video_tele_pane

0xa289,	// (0x00038532) main_viewer_pane_ParamLimits

0xa289,	// (0x00038532) main_viewer_pane

0xa554,	// (0x000387fd) main_vorec_pane

0x06e7,	// (0x0002e990) popup_blid_sat_info_window_ParamLimits

0x06e7,	// (0x0002e990) popup_blid_sat_info_window

0x073f,	// (0x0002e9e8) popup_dyc_status_message_window_ParamLimits

0x073f,	// (0x0002e9e8) popup_dyc_status_message_window

0x0757,	// (0x0002ea00) popup_grid_large_graphic_window_ParamLimits

0x0757,	// (0x0002ea00) popup_grid_large_graphic_window

0x0807,	// (0x0002eab0) popup_loc_request_window_ParamLimits

0x0807,	// (0x0002eab0) popup_loc_request_window

0x0903,	// (0x0002ebac) popup_wml_address_window_ParamLimits

0x0903,	// (0x0002ebac) popup_wml_address_window

0x47e6,	// (0x00032a8f) call_muted_g1

0x449a,	// (0x00032743) popup_call_audio_conf_window_ParamLimits

0x449a,	// (0x00032743) popup_call_audio_conf_window

0x47fa,	// (0x00032aa3) popup_call_audio_first_window_ParamLimits

0x47fa,	// (0x00032aa3) popup_call_audio_first_window

0x4870,	// (0x00032b19) popup_call_audio_in_window_ParamLimits

0x4870,	// (0x00032b19) popup_call_audio_in_window

0x48ac,	// (0x00032b55) popup_call_audio_out_window_ParamLimits

0x48ac,	// (0x00032b55) popup_call_audio_out_window

0x48e6,	// (0x00032b8f) popup_call_audio_second_window_ParamLimits

0x48e6,	// (0x00032b8f) popup_call_audio_second_window

0x493c,	// (0x00032be5) popup_call_audio_wait_window_ParamLimits

0x493c,	// (0x00032be5) popup_call_audio_wait_window

0x4971,	// (0x00032c1a) popup_number_entry_window_ParamLimits

0x4971,	// (0x00032c1a) popup_number_entry_window

0x9c1b,	// (0x00037ec4) bg_popup_call_pane_cp05_ParamLimits

0x9c1b,	// (0x00037ec4) bg_popup_call_pane_cp05

0x9c3b,	// (0x00037ee4) popup_number_entry_window_t1

0x9c4e,	// (0x00037ef7) popup_number_entry_window_t2

0x9c60,	// (0x00037f09) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0003d358) popup_number_entry_window_t

0x9c72,	// (0x00037f1b) text_title_cp2

0x9c85,	// (0x00037f2e) bg_popup_call_pane_cp_ParamLimits

0x9c85,	// (0x00037f2e) bg_popup_call_pane_cp

0x9c93,	// (0x00037f3c) call_thumbnail_pane

0x9c9b,	// (0x00037f44) popup_call_audio_in_window_g1_ParamLimits

0x9c9b,	// (0x00037f44) popup_call_audio_in_window_g1

0x9ca7,	// (0x00037f50) popup_call_audio_in_window_g2_ParamLimits

0x9ca7,	// (0x00037f50) popup_call_audio_in_window_g2

0x9cb3,	// (0x00037f5c) popup_call_audio_in_window_g3_ParamLimits

0x9cb3,	// (0x00037f5c) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0003d361) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0003d361) popup_call_audio_in_window_g

0x9cbf,	// (0x00037f68) popup_call_audio_in_window_t1_ParamLimits

0x9cbf,	// (0x00037f68) popup_call_audio_in_window_t1

0x9cdb,	// (0x00037f84) popup_call_audio_in_window_t2_ParamLimits

0x9cdb,	// (0x00037f84) popup_call_audio_in_window_t2

0x9cf7,	// (0x00037fa0) popup_call_audio_in_window_t3_ParamLimits

0x9cf7,	// (0x00037fa0) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0003d368) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0003d368) popup_call_audio_in_window_t

0x9c85,	// (0x00037f2e) bg_popup_call_pane_cp01_ParamLimits

0x9c85,	// (0x00037f2e) bg_popup_call_pane_cp01

0x9c93,	// (0x00037f3c) call_thumbnail_pane_cp02

0x9d0a,	// (0x00037fb3) call_type_pane_cp022

0x9d12,	// (0x00037fbb) popup_call_audio_out_window_g1_ParamLimits

0x9d12,	// (0x00037fbb) popup_call_audio_out_window_g1

0x9d24,	// (0x00037fcd) popup_call_audio_out_window_g2_ParamLimits

0x9d24,	// (0x00037fcd) popup_call_audio_out_window_g2

0x9d30,	// (0x00037fd9) popup_call_audio_out_window_g3_ParamLimits

0x9d30,	// (0x00037fd9) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0003d36f) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0003d36f) popup_call_audio_out_window_g

0x9d42,	// (0x00037feb) popup_call_audio_out_window_t1_ParamLimits

0x9d42,	// (0x00037feb) popup_call_audio_out_window_t1

0x9d5a,	// (0x00038003) popup_call_audio_out_window_t2_ParamLimits

0x9d5a,	// (0x00038003) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0003d376) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0003d376) popup_call_audio_out_window_t

0x9d6f,	// (0x00038018) bg_popup_call_pane_ParamLimits

0x9d6f,	// (0x00038018) bg_popup_call_pane

0x1b95,	// (0x0002fe3e) call_thumbnail_pane_cp_ParamLimits

0x1b95,	// (0x0002fe3e) call_thumbnail_pane_cp

0x9df3,	// (0x0003809c) call_type_pane_cp01_ParamLimits

0x9df3,	// (0x0003809c) call_type_pane_cp01

0x9e37,	// (0x000380e0) popup_call_audio_first_window_g1_ParamLimits

0x9e37,	// (0x000380e0) popup_call_audio_first_window_g1

0x9e83,	// (0x0003812c) popup_call_audio_first_window_g2_ParamLimits

0x9e83,	// (0x0003812c) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0003d37b) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0003d37b) popup_call_audio_first_window_g

0x9ec7,	// (0x00038170) popup_call_audio_first_window_t1_ParamLimits

0x9ec7,	// (0x00038170) popup_call_audio_first_window_t1

0x9f73,	// (0x0003821c) popup_call_audio_first_window_t4_ParamLimits

0x9f73,	// (0x0003821c) popup_call_audio_first_window_t4

0x9fff,	// (0x000382a8) popup_call_audio_first_window_t5_ParamLimits

0x9fff,	// (0x000382a8) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0003d380) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0003d380) popup_call_audio_first_window_t

0xa02e,	// (0x000382d7) bg_popup_call_pane_cp02

0xa038,	// (0x000382e1) call_type_pane_cp023

0xa040,	// (0x000382e9) popup_call_audio_wait_window_g1

0xa048,	// (0x000382f1) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0003d387) popup_call_audio_wait_window_g

0xa050,	// (0x000382f9) popup_call_audio_wait_window_t3

0xa05e,	// (0x00038307) bg_popup_call_pane_cp03_ParamLimits

0xa05e,	// (0x00038307) bg_popup_call_pane_cp03

0xa0be,	// (0x00038367) call_thumbnail_pane_cp011_ParamLimits

0xa0be,	// (0x00038367) call_thumbnail_pane_cp011

0xa0ca,	// (0x00038373) call_type_pane_cp034_ParamLimits

0xa0ca,	// (0x00038373) call_type_pane_cp034

0xa106,	// (0x000383af) popup_call_audio_second_window_g1_ParamLimits

0xa106,	// (0x000383af) popup_call_audio_second_window_g1

0xa142,	// (0x000383eb) popup_call_audio_second_window_g2_ParamLimits

0xa142,	// (0x000383eb) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0003d38c) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0003d38c) popup_call_audio_second_window_g

0xa17e,	// (0x00038427) popup_call_audio_second_window_t1_ParamLimits

0xa17e,	// (0x00038427) popup_call_audio_second_window_t1

0xa1ff,	// (0x000384a8) popup_call_audio_second_window_t2_ParamLimits

0xa1ff,	// (0x000384a8) popup_call_audio_second_window_t2

0xa235,	// (0x000384de) popup_call_audio_second_window_t3_ParamLimits

0xa235,	// (0x000384de) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0003d391) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0003d391) popup_call_audio_second_window_t

0xa02e,	// (0x000382d7) bg_popup_call_pane_cp04

0xa26b,	// (0x00038514) list_conf_pane

0xa273,	// (0x0003851c) popup_call_audio_conf_window_t1

0xa281,	// (0x0003852a) call_thumbnail_pane_g1

0xa289,	// (0x00038532) bg_pinb_pane_ParamLimits

0xa289,	// (0x00038532) bg_pinb_pane

0xa297,	// (0x00038540) find_pinb_pane

0xa2a0,	// (0x00038549) listscroll_pinb_pane_ParamLimits

0xa2a0,	// (0x00038549) listscroll_pinb_pane

0xa2af,	// (0x00038558) pinb_bg_pane_g1

0x1bb9,	// (0x0002fe62) pinb_bg_pane_g2

0x1bc5,	// (0x0002fe6e) pinb_bg_pane_g3

0x1bd1,	// (0x0002fe7a) pinb_bg_pane_g4

0x1bdd,	// (0x0002fe86) pinb_bg_pane_g5

0x1be9,	// (0x0002fe92) pinb_bg_pane_g6

0x1bf4,	// (0x0002fe9d) pinb_bg_pane_g7

0x1bff,	// (0x0002fea8) pinb_bg_pane_g8

0x1c0a,	// (0x0002feb3) pinb_bg_pane_g9

0x1c14,	// (0x0002febd) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0003d398) pinb_bg_pane_g

0x1c31,	// (0x0002feda) grid_pinb_pane

0x1c3a,	// (0x0002fee3) list_pinb_pane

0x1c43,	// (0x0002feec) scroll_pane_cp01_ParamLimits

0x1c43,	// (0x0002feec) scroll_pane_cp01

0xa2b9,	// (0x00038562) find_pinb_pane_g1_ParamLimits

0xa2b9,	// (0x00038562) find_pinb_pane_g1

0xa2d1,	// (0x0003857a) find_pinb_pane_t1

0xa2e3,	// (0x0003858c) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0003d3b2) find_pinb_pane_t

0xa2f8,	// (0x000385a1) input_focus_pane_cp01_ParamLimits

0xa2f8,	// (0x000385a1) input_focus_pane_cp01

0x1c55,	// (0x0002fefe) cell_pinb_pane_ParamLimits

0x1c55,	// (0x0002fefe) cell_pinb_pane

0x1c80,	// (0x0002ff29) cell_pinb_pane_g1_ParamLimits

0x1c80,	// (0x0002ff29) cell_pinb_pane_g1

0xa304,	// (0x000385ad) cell_pinb_pane_g2_ParamLimits

0xa304,	// (0x000385ad) cell_pinb_pane_g2

0xa310,	// (0x000385b9) cell_pinb_pane_g3_ParamLimits

0xa310,	// (0x000385b9) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0003d3b7) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0003d3b7) cell_pinb_pane_g

0xa02e,	// (0x000382d7) grid_highlight_pane_cp01

0x1c93,	// (0x0002ff3c) list_pinb_item_pane_ParamLimits

0x1c93,	// (0x0002ff3c) list_pinb_item_pane

0xa02e,	// (0x000382d7) list_highlight_pane_cp02

0x1ca6,	// (0x0002ff4f) list_pinb_item_pane_g1_ParamLimits

0x1ca6,	// (0x0002ff4f) list_pinb_item_pane_g1

0x1cb3,	// (0x0002ff5c) list_pinb_item_pane_g2_ParamLimits

0x1cb3,	// (0x0002ff5c) list_pinb_item_pane_g2

0x1cbf,	// (0x0002ff68) list_pinb_item_pane_g3_ParamLimits

0x1cbf,	// (0x0002ff68) list_pinb_item_pane_g3

0x1cd0,	// (0x0002ff79) list_pinb_item_pane_g4_ParamLimits

0x1cd0,	// (0x0002ff79) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0003d3be) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0003d3be) list_pinb_item_pane_g

0x1cdc,	// (0x0002ff85) list_pinb_item_pane_t1_ParamLimits

0x1cdc,	// (0x0002ff85) list_pinb_item_pane_t1

0x041e,	// (0x0002e6c7) calc_display_pane

0x0443,	// (0x0002e6ec) calc_paper_pane

0x0466,	// (0x0002e70f) grid_calc_pane

0xa02e,	// (0x000382d7) bg_list_pane_cp01

0x1cfb,	// (0x0002ffa4) clock_g1

0x1d03,	// (0x0002ffac) clock_g2

0x0001,

0xf11e,	// (0x0003d3c7) clock_g

0x1d0b,	// (0x0002ffb4) clock_t1_ParamLimits

0x1d0b,	// (0x0002ffb4) clock_t1

0x1d20,	// (0x0002ffc9) clock_t2_ParamLimits

0x1d20,	// (0x0002ffc9) clock_t2

0x1d32,	// (0x0002ffdb) clock_t3_ParamLimits

0x1d32,	// (0x0002ffdb) clock_t3

0x1d44,	// (0x0002ffed) clock_t4_ParamLimits

0x1d44,	// (0x0002ffed) clock_t4

0x1d56,	// (0x0002ffff) clock_t5_ParamLimits

0x1d56,	// (0x0002ffff) clock_t5

0x1d6b,	// (0x00030014) clock_t6_ParamLimits

0x1d6b,	// (0x00030014) clock_t6

0x1d7d,	// (0x00030026) clock_t7_ParamLimits

0x1d7d,	// (0x00030026) clock_t7

0x1d8f,	// (0x00030038) clock_t8_ParamLimits

0x1d8f,	// (0x00030038) clock_t8

0x1da3,	// (0x0003004c) clock_t9_ParamLimits

0x1da3,	// (0x0003004c) clock_t9

0x0008,

0xf123,	// (0x0003d3cc) clock_t_ParamLimits

0xf123,	// (0x0003d3cc) clock_t

0xa31c,	// (0x000385c5) popup_clock_analogue_window_cp02

0xa31c,	// (0x000385c5) popup_clock_digital_window_cp01

0xa324,	// (0x000385cd) listscroll_help_pane

0xa02e,	// (0x000382d7) phob_pre_status_pane

0xa32e,	// (0x000385d7) grid_qdial_pane

0xa289,	// (0x00038532) listscroll_mce_pane

0xa289,	// (0x00038532) bg_notes_pane

0xa338,	// (0x000385e1) list_notes_pane

0x1db7,	// (0x00030060) scroll_pane_cp06

0xa346,	// (0x000385ef) bg_calc_paper_pane

0x1dcb,	// (0x00030074) list_calc_pane

0xa35a,	// (0x00038603) bg_calc_display_pane

0x0494,	// (0x0002e73d) calc_display_pane_t1

0x04a6,	// (0x0002e74f) calc_display_pane_t2

0x1de5,	// (0x0003008e) calc_display_pane_t3

0x0002,

0xf136,	// (0x0003d3df) calc_display_pane_t

0x04b8,	// (0x0002e761) cell_calc_pane_ParamLimits

0x04b8,	// (0x0002e761) cell_calc_pane

0xa366,	// (0x0003860f) bg_calc_paper_pane_g1

0xa372,	// (0x0003861b) bg_calc_paper_pane_g2

0xa37e,	// (0x00038627) bg_calc_paper_pane_g3

0xa38a,	// (0x00038633) bg_calc_paper_pane_g4

0xa396,	// (0x0003863f) bg_calc_paper_pane_g5

0x1df7,	// (0x000300a0) bg_calc_paper_pane_g6

0x1e06,	// (0x000300af) bg_calc_paper_pane_g7

0x1e15,	// (0x000300be) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0003d3e6) bg_calc_paper_pane_g

0x1e28,	// (0x000300d1) calc_bg_paper_pane_g9

0x1e3b,	// (0x000300e4) list_calc_item_pane_ParamLimits

0x1e3b,	// (0x000300e4) list_calc_item_pane

0xa3a2,	// (0x0003864b) list_calc_item_pane_g1

0x1e50,	// (0x000300f9) list_calc_item_pane_t1_ParamLimits

0x1e50,	// (0x000300f9) list_calc_item_pane_t1

0x04ed,	// (0x0002e796) list_calc_item_pane_t2_ParamLimits

0x04ed,	// (0x0002e796) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0003d3f7) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0003d3f7) list_calc_item_pane_t

0xa3af,	// (0x00038658) cell_calc_pane_g1

0xa3b9,	// (0x00038662) grid_highlight_pane_cp02

0xd056,	// (0x0003b2ff) bg_calc_display_pane_g1

0x051f,	// (0x0002e7c8) bg_calc_display_pane_g2

0xa3db,	// (0x00038684) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0003d401) bg_calc_display_pane_g

0x0529,	// (0x0002e7d2) cell_qdial_pane_ParamLimits

0x0529,	// (0x0002e7d2) cell_qdial_pane

0x1e62,	// (0x0003010b) cell_qdial_pane_g1_ParamLimits

0x1e62,	// (0x0003010b) cell_qdial_pane_g1

0x1e78,	// (0x00030121) cell_qdial_pane_g2_ParamLimits

0x1e78,	// (0x00030121) cell_qdial_pane_g2

0xa3e4,	// (0x0003868d) cell_qdial_pane_g3_ParamLimits

0xa3e4,	// (0x0003868d) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0003d408) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0003d408) cell_qdial_pane_g

0x1e9e,	// (0x00030147) cell_qdial_pane_t1_ParamLimits

0x1e9e,	// (0x00030147) cell_qdial_pane_t1

0x1eb6,	// (0x0003015f) cell_qdial_pane_t2_ParamLimits

0x1eb6,	// (0x0003015f) cell_qdial_pane_t2

0x1ec9,	// (0x00030172) cell_qdial_pane_t3_ParamLimits

0x1ec9,	// (0x00030172) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0003d411) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0003d411) cell_qdial_pane_t

0xa02e,	// (0x000382d7) grid_highlight_pane_cp04

0xa3f0,	// (0x00038699) thumbnail_qdial_pane_ParamLimits

0xa3f0,	// (0x00038699) thumbnail_qdial_pane

0xa44c,	// (0x000386f5) list_help_pane

0xa455,	// (0x000386fe) scroll_pane_cp02

0xa45e,	// (0x00038707) help_list_pane_t1_ParamLimits

0xa45e,	// (0x00038707) help_list_pane_t1

0x1edc,	// (0x00030185) bg_notes_pane_g2

0x1ee4,	// (0x0003018d) bg_notes_pane_g3

0x1eec,	// (0x00030195) notes_bg_pane_g1

0x1ef4,	// (0x0003019d) notes_bg_pane_g4

0x1efc,	// (0x000301a5) notes_bg_pane_g5

0x1f04,	// (0x000301ad) notes_bg_pane_g6

0x1f0c,	// (0x000301b5) notes_bg_pane_g7

0x1f14,	// (0x000301bd) notes_bg_pane_g8

0x1f1c,	// (0x000301c5) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0003d42f) notes_bg_pane_g

0x1f24,	// (0x000301cd) list_notes_text_pane_ParamLimits

0x1f24,	// (0x000301cd) list_notes_text_pane

0xa47c,	// (0x00038725) list_notes_text_pane_g1

0xa485,	// (0x0003872e) list_notes_text_pane_t1

0x1f3a,	// (0x000301e3) listscroll_cale_week_pane

0x1f66,	// (0x0003020f) bg_cale_heading_pane

0xa4ad,	// (0x00038756) bg_cale_pane_cp01

0x1f7e,	// (0x00030227) cale_week_corner_pane

0x1f9d,	// (0x00030246) cale_week_day_heading_pane

0x1fba,	// (0x00030263) cale_week_scroll_pane_g1

0x1fcd,	// (0x00030276) cale_week_scroll_pane_g2

0x1fe5,	// (0x0003028e) cale_week_scroll_pane_g3

0x1ffd,	// (0x000302a6) cale_week_scroll_pane_g4

0x2015,	// (0x000302be) cale_week_scroll_pane_g5

0x2035,	// (0x000302de) cale_week_scroll_pane_g6

0x2055,	// (0x000302fe) cale_week_scroll_pane_g7

0x2075,	// (0x0003031e) cale_week_scroll_pane_g8

0x2099,	// (0x00030342) cale_week_scroll_pane_g9

0x20b1,	// (0x0003035a) cale_week_scroll_pane_g10

0x20c9,	// (0x00030372) cale_week_scroll_pane_g11

0x20e1,	// (0x0003038a) cale_week_scroll_pane_g12

0x20f9,	// (0x000303a2) cale_week_scroll_pane_g13

0x20f9,	// (0x000303a2) cale_week_scroll_pane_g14

0x20f9,	// (0x000303a2) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0003d43e) cale_week_scroll_pane_g

0x2135,	// (0x000303de) cale_week_time_pane

0x2159,	// (0x00030402) grid_cale_week_pane

0xa4dc,	// (0x00038785) scroll_pane_cp08

0x217f,	// (0x00030428) cell_cale_week_pane_ParamLimits

0x217f,	// (0x00030428) cell_cale_week_pane

0x220d,	// (0x000304b6) cale_week_day_heading_pane_t1

0x2237,	// (0x000304e0) cale_week_day_heading_pane_t2

0x2266,	// (0x0003050f) cale_week_day_heading_pane_t3

0x2295,	// (0x0003053e) cale_week_day_heading_pane_t4

0x22c4,	// (0x0003056d) cale_week_day_heading_pane_t5

0x22fb,	// (0x000305a4) cale_week_day_heading_pane_t6

0x2332,	// (0x000305db) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0003d45f) cale_week_day_heading_pane_t

0xa4f9,	// (0x000387a2) bg_cale_side_pane

0x053d,	// (0x0002e7e6) cale_week_time_pane_t1

0x0557,	// (0x0002e800) cale_week_time_pane_t2

0x0571,	// (0x0002e81a) cale_week_time_pane_t3

0x058b,	// (0x0002e834) cale_week_time_pane_t4

0x05a5,	// (0x0002e84e) cale_week_time_pane_t5

0x05bf,	// (0x0002e868) cale_week_time_pane_t6

0x05d9,	// (0x0002e882) cale_week_time_pane_t7

0x05f3,	// (0x0002e89c) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0003d46e) cale_week_time_pane_t

0x235c,	// (0x00030605) cell_cale_week_pane_g2

0x2380,	// (0x00030629) cell_cale_week_pane_g3_ParamLimits

0x2380,	// (0x00030629) cell_cale_week_pane_g3

0xa507,	// (0x000387b0) grid_highlight_pane_cp07

0xa50f,	// (0x000387b8) listscroll_gms_pane

0xa519,	// (0x000387c2) grid_gms_pane

0xa522,	// (0x000387cb) listscroll_gms_pane_g1

0xa52a,	// (0x000387d3) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0003d47f) listscroll_gms_pane_g

0x2398,	// (0x00030641) scroll_pane_cp010

0x23a3,	// (0x0003064c) cell_gms_pane_ParamLimits

0x23a3,	// (0x0003064c) cell_gms_pane

0x23b5,	// (0x0003065e) cell_gms_pane_g1

0xa532,	// (0x000387db) cell_gms_pane_g2

0xa53a,	// (0x000387e3) cell_gms_pane_g3

0xa543,	// (0x000387ec) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0003d484) cell_gms_pane_g

0xa54c,	// (0x000387f5) grid_highlight_pane_cp09

0x4790,	// (0x00032a39) phob_pre_status_pane_g1

0x4798,	// (0x00032a41) phob_pre_status_pane_g2

0x47a0,	// (0x00032a49) phob_pre_status_pane_g3

0x47a8,	// (0x00032a51) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0003d882) phob_pre_status_pane_g

0x47b8,	// (0x00032a61) phob_pre_status_pane_t1

0x47c6,	// (0x00032a6f) phob_pre_status_pane_t2

0x47d6,	// (0x00032a7f) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0003d88d) phob_pre_status_pane_t

0xa554,	// (0x000387fd) bg_list_pane_cp05

0x23c5,	// (0x0003066e) grid_vorec_pane

0x23cd,	// (0x00030676) vorec_t1

0x23db,	// (0x00030684) vorec_t2

0x23e9,	// (0x00030692) vorec_t3

0x23f7,	// (0x000306a0) vorec_t4

0x1a5f,	// (0x0002fd08) vorec_t5

0x1a6d,	// (0x0002fd16) vorec_t6

0x0004,

0xf1e4,	// (0x0003d48d) vorec_t

0x1a7b,	// (0x0002fd24) wait_bar_pane_cp01

0x2413,	// (0x000306bc) cell_vorec_pane_ParamLimits

0x2413,	// (0x000306bc) cell_vorec_pane

0x2426,	// (0x000306cf) cell_vorec_pane_g1

0xa02e,	// (0x000382d7) grid_highlight_pane_cp05

0x2448,	// (0x000306f1) cams_zoom_pane

0x2457,	// (0x00030700) image_vga_pane

0x2471,	// (0x0003071a) main_camera_pane_g1

0x2483,	// (0x0003072c) main_camera_pane_g2

0x2493,	// (0x0003073c) main_camera_pane_g3

0x24a3,	// (0x0003074c) main_camera_pane_g4

0x24b3,	// (0x0003075c) main_camera_pane_g5

0x24c3,	// (0x0003076c) main_camera_pane_g6

0x24d3,	// (0x0003077c) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0003d498) main_camera_pane_g

0x24e3,	// (0x0003078c) main_camera_pane_t1

0x24f9,	// (0x000307a2) main_camera_pane_t2

0x0001,

0xf200,	// (0x0003d4a9) main_camera_pane_t

0x2533,	// (0x000307dc) cams_zoom_pane_cp_ParamLimits

0x2533,	// (0x000307dc) cams_zoom_pane_cp

0x255b,	// (0x00030804) image_cif_pane_ParamLimits

0x255b,	// (0x00030804) image_cif_pane

0x2596,	// (0x0003083f) image_subqcif_pane

0x259e,	// (0x00030847) main_video_pane_g1_ParamLimits

0x259e,	// (0x00030847) main_video_pane_g1

0x25c2,	// (0x0003086b) main_video_pane_g2_ParamLimits

0x25c2,	// (0x0003086b) main_video_pane_g2

0x25f6,	// (0x0003089f) main_video_pane_g3_ParamLimits

0x25f6,	// (0x0003089f) main_video_pane_g3

0x2624,	// (0x000308cd) main_video_pane_g4_ParamLimits

0x2624,	// (0x000308cd) main_video_pane_g4

0x2652,	// (0x000308fb) main_video_pane_g5_ParamLimits

0x2652,	// (0x000308fb) main_video_pane_g5

0xa568,	// (0x00038811) main_video_pane_g6_ParamLimits

0xa568,	// (0x00038811) main_video_pane_g6

0x0006,

0xf205,	// (0x0003d4ae) main_video_pane_g_ParamLimits

0xf205,	// (0x0003d4ae) main_video_pane_g

0x267b,	// (0x00030924) main_video_pane_t1_ParamLimits

0x267b,	// (0x00030924) main_video_pane_t1

0xa582,	// (0x0003882b) cams_zoom_pane_g1

0xa58b,	// (0x00038834) cams_zoom_pane_g2

0xa594,	// (0x0003883d) cams_zoom_pane_g3

0xa59d,	// (0x00038846) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0003d4bd) cams_zoom_pane_g

0x26d8,	// (0x00030981) grid_cams_pane

0x26f2,	// (0x0003099b) linegrid_cams_pane

0x2705,	// (0x000309ae) cell_cams_pane_ParamLimits

0x2705,	// (0x000309ae) cell_cams_pane

0xa5a6,	// (0x0003884f) cams_burst_image_pane

0xa5ae,	// (0x00038857) cell_cams_pane_g1

0xa02e,	// (0x000382d7) grid_highlight_pane_cp03

0xa3af,	// (0x00038658) mp_bg_pane_g1

0xa02e,	// (0x000382d7) bg_list_pane_cp03

0xc301,	// (0x0003a5aa) bg_mp_pane

0xc309,	// (0x0003a5b2) grid_mp_pane

0xc311,	// (0x0003a5ba) media_player_g1

0xc319,	// (0x0003a5c2) media_player_t1

0xc327,	// (0x0003a5d0) media_player_t2

0xc335,	// (0x0003a5de) media_player_t3

0xc343,	// (0x0003a5ec) media_player_t4

0xc351,	// (0x0003a5fa) media_player_t5

0xc35f,	// (0x0003a608) media_player_t6

0xc36d,	// (0x0003a616) media_player_t7

0x0006,

0xf5c3,	// (0x0003d86c) media_player_t

0xc37b,	// (0x0003a624) wait_bar_pane_cp02

0xf5a8,	// (0x0003d851) main_usb_pane_t

0x4787,	// (0x00032a30) cell_mp_pane

0xa3af,	// (0x00038658) cell_mp_pane_g1

0xa02e,	// (0x000382d7) grid_highlight_pane_cp06

0xa5b6,	// (0x0003885f) grid_skin_colour_pane

0xa5be,	// (0x00038867) list_highlight_pane_cp03

0x283c,	// (0x00030ae5) skin_g1

0xa5c6,	// (0x0003886f) skin_t1

0xa5d5,	// (0x0003887e) skin_t2

0x0001,

0xf249,	// (0x0003d4f2) skin_t

0x2844,	// (0x00030aed) cell_skin_colour_pane_ParamLimits

0x2844,	// (0x00030aed) cell_skin_colour_pane

0xa5e3,	// (0x0003888c) cell_skin_colour_pane_g1

0x28bd,	// (0x00030b66) call_video_g1_ParamLimits

0x28bd,	// (0x00030b66) call_video_g1

0x28d9,	// (0x00030b82) call_video_g2_ParamLimits

0x28d9,	// (0x00030b82) call_video_g2

0x0001,

0xf24e,	// (0x0003d4f7) call_video_g_ParamLimits

0xf24e,	// (0x0003d4f7) call_video_g

0x292b,	// (0x00030bd4) call_video_uplink_pane_cp1_ParamLimits

0x292b,	// (0x00030bd4) call_video_uplink_pane_cp1

0xa5f5,	// (0x0003889e) call_video_uplink_pane_cp2

0x29ca,	// (0x00030c73) video_down_crop_pane_ParamLimits

0x29ca,	// (0x00030c73) video_down_crop_pane

0x2ab3,	// (0x00030d5c) video_down_pane_ParamLimits

0x2ab3,	// (0x00030d5c) video_down_pane

0xa5fd,	// (0x000388a6) video_down_subqcif_pane_ParamLimits

0xa5fd,	// (0x000388a6) video_down_subqcif_pane

0xa615,	// (0x000388be) video_down_subqcif_pane_cp_ParamLimits

0xa615,	// (0x000388be) video_down_subqcif_pane_cp

0xa63b,	// (0x000388e4) im_reading_pane_ParamLimits

0xa63b,	// (0x000388e4) im_reading_pane

0x2bc3,	// (0x00030e6c) im_writing_pane_ParamLimits

0x2bc3,	// (0x00030e6c) im_writing_pane

0x2bd9,	// (0x00030e82) im_reading_pane_t1

0xa655,	// (0x000388fe) list_im_pane

0xa666,	// (0x0003890f) scroll_pane_cp07

0x2c13,	// (0x00030ebc) im_writing_pane_t1_ParamLimits

0x2c13,	// (0x00030ebc) im_writing_pane_t1

0xa67f,	// (0x00038928) im_writing_pane_t2_ParamLimits

0xa67f,	// (0x00038928) im_writing_pane_t2

0x0001,

0xf258,	// (0x0003d501) im_writing_pane_t_ParamLimits

0xf258,	// (0x0003d501) im_writing_pane_t

0xa02e,	// (0x000382d7) input_focus_pane_cp04

0xa02e,	// (0x000382d7) input_focus_pane_cp05

0x2c28,	// (0x00030ed1) list_im_single_pane_ParamLimits

0x2c28,	// (0x00030ed1) list_im_single_pane

0x2c3d,	// (0x00030ee6) list_single_im_pane_t1

0x4747,	// (0x000329f0) blid_accuracy_pane

0x474f,	// (0x000329f8) blid_compass_pane

0x4759,	// (0x00032a02) main_location_t1

0x4769,	// (0x00032a12) main_location_t2

0x4779,	// (0x00032a22) main_location_t3

0x0002,

0xf5d2,	// (0x0003d87b) main_location_t

0xa02e,	// (0x000382d7) aid_levels_location

0xa3af,	// (0x00038658) blid_accuracy_pane_g1

0xa3af,	// (0x00038658) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0003d563) blid_accuracy_pane_g

0xa6c7,	// (0x00038970) wml_content_pane

0xa705,	// (0x000389ae) wml_button_pane_ParamLimits

0xa705,	// (0x000389ae) wml_button_pane

0x2c4c,	// (0x00030ef5) wml_list_single_large_pane_ParamLimits

0x2c4c,	// (0x00030ef5) wml_list_single_large_pane

0x2c61,	// (0x00030f0a) wml_list_single_medium_pane_ParamLimits

0x2c61,	// (0x00030f0a) wml_list_single_medium_pane

0x2c78,	// (0x00030f21) wml_list_single_small_pane_ParamLimits

0x2c78,	// (0x00030f21) wml_list_single_small_pane

0xa719,	// (0x000389c2) wml_selection_box_pane_ParamLimits

0xa719,	// (0x000389c2) wml_selection_box_pane

0xa72c,	// (0x000389d5) wml_list_single_pane_t1

0xa73b,	// (0x000389e4) wml_list_single_medium_pane_t1

0xa74a,	// (0x000389f3) wml_list_single_large_pane_t1

0xa759,	// (0x00038a02) input_focus_pane_cp02_ParamLimits

0xa759,	// (0x00038a02) input_focus_pane_cp02

0xa76c,	// (0x00038a15) wml_selection_box_pane_g1

0xa775,	// (0x00038a1e) wml_selection_box_pane_t1_ParamLimits

0xa775,	// (0x00038a1e) wml_selection_box_pane_t1

0xa289,	// (0x00038532) bg_wml_button_pane_ParamLimits

0xa289,	// (0x00038532) bg_wml_button_pane

0xa78d,	// (0x00038a36) wml_button_pane_g1

0xa795,	// (0x00038a3e) wml_button_pane_t1

0xa78d,	// (0x00038a36) wml_button_bg_pane_g1

0xa7a5,	// (0x00038a4e) wml_button_bg_pane_g2

0xa7ad,	// (0x00038a56) wml_button_bg_pane_g3

0xa7b5,	// (0x00038a5e) wml_button_bg_pane_g4

0xa7bd,	// (0x00038a66) wml_button_bg_pane_g5

0xa7c5,	// (0x00038a6e) wml_button_bg_pane_g6

0xa7cd,	// (0x00038a76) wml_button_bg_pane_g7

0xa7d5,	// (0x00038a7e) wml_button_bg_pane_g8

0xa7dd,	// (0x00038a86) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0003d506) wml_button_bg_pane_g

0x2c91,	// (0x00030f3a) bg_list_pane_cp02

0xa7e5,	// (0x00038a8e) mce_header_pane_ParamLimits

0xa7e5,	// (0x00038a8e) mce_header_pane

0xa7fb,	// (0x00038aa4) mce_icon_pane

0xa7fb,	// (0x00038aa4) mce_image_pane

0xa804,	// (0x00038aad) mce_text_pane_ParamLimits

0xa804,	// (0x00038aad) mce_text_pane

0x2c99,	// (0x00030f42) scroll_pane_cp03

0xa6fd,	// (0x000389a6) scroll_pane_cp04

0xa817,	// (0x00038ac0) scroll_pane_cp05_ParamLimits

0xa817,	// (0x00038ac0) scroll_pane_cp05

0x2ca3,	// (0x00030f4c) mce_header_field_pane_ParamLimits

0x2ca3,	// (0x00030f4c) mce_header_field_pane

0x2cba,	// (0x00030f63) mce_header_field_pane_2_ParamLimits

0x2cba,	// (0x00030f63) mce_header_field_pane_2

0x2cd0,	// (0x00030f79) mce_header_field_pane_3

0x2cd8,	// (0x00030f81) list_single_mce_message_pane_ParamLimits

0x2cd8,	// (0x00030f81) list_single_mce_message_pane

0x2cee,	// (0x00030f97) list_single_mce_smart_pane_ParamLimits

0x2cee,	// (0x00030f97) list_single_mce_smart_pane

0xa823,	// (0x00038acc) input_focus_pane_cp03

0xa82c,	// (0x00038ad5) list_header_data_pane

0x2d0f,	// (0x00030fb8) mce_header_field_pane_t1

0x2d1f,	// (0x00030fc8) list_single_mce_header_pane_ParamLimits

0x2d1f,	// (0x00030fc8) list_single_mce_header_pane

0xa834,	// (0x00038add) list_single_mce_header_pane_t1

0xa843,	// (0x00038aec) list_single_mce_message_pane_g1

0xa84b,	// (0x00038af4) list_single_mce_message_pane_t1

0x2d59,	// (0x00031002) bg_cale_heading_pane_cp01_ParamLimits

0x2d59,	// (0x00031002) bg_cale_heading_pane_cp01

0xa859,	// (0x00038b02) bg_cale_pane_cp02_ParamLimits

0xa859,	// (0x00038b02) bg_cale_pane_cp02

0x2d93,	// (0x0003103c) cale_month_corner_pane

0x2db2,	// (0x0003105b) cale_month_day_heading_pane_ParamLimits

0x2db2,	// (0x0003105b) cale_month_day_heading_pane

0x2e04,	// (0x000310ad) cale_month_pane_g1_ParamLimits

0x2e04,	// (0x000310ad) cale_month_pane_g1

0x2e33,	// (0x000310dc) cale_month_pane_g2_ParamLimits

0x2e33,	// (0x000310dc) cale_month_pane_g2

0x2e63,	// (0x0003110c) cale_month_pane_g3_ParamLimits

0x2e63,	// (0x0003110c) cale_month_pane_g3

0x2e9f,	// (0x00031148) cale_month_pane_g4_ParamLimits

0x2e9f,	// (0x00031148) cale_month_pane_g4

0x2edb,	// (0x00031184) cale_month_pane_g5_ParamLimits

0x2edb,	// (0x00031184) cale_month_pane_g5

0x2f23,	// (0x000311cc) cale_month_pane_g6_ParamLimits

0x2f23,	// (0x000311cc) cale_month_pane_g6

0x2f6f,	// (0x00031218) cale_month_pane_g7_ParamLimits

0x2f6f,	// (0x00031218) cale_month_pane_g7

0x2fbf,	// (0x00031268) cale_month_pane_g8_ParamLimits

0x2fbf,	// (0x00031268) cale_month_pane_g8

0x3013,	// (0x000312bc) cale_month_pane_g9_ParamLimits

0x3013,	// (0x000312bc) cale_month_pane_g9

0x3065,	// (0x0003130e) cale_month_pane_g10_ParamLimits

0x3065,	// (0x0003130e) cale_month_pane_g10

0x30b7,	// (0x00031360) cale_month_pane_g11_ParamLimits

0x30b7,	// (0x00031360) cale_month_pane_g11

0x3109,	// (0x000313b2) cale_month_pane_g12_ParamLimits

0x3109,	// (0x000313b2) cale_month_pane_g12

0x315b,	// (0x00031404) cale_month_pane_g13_ParamLimits

0x315b,	// (0x00031404) cale_month_pane_g13

0x000c,

0xf270,	// (0x0003d519) cale_month_pane_g_ParamLimits

0xf270,	// (0x0003d519) cale_month_pane_g

0x31ad,	// (0x00031456) cale_month_week_pane

0x31d1,	// (0x0003147a) grid_cale_month_pane_ParamLimits

0x31d1,	// (0x0003147a) grid_cale_month_pane

0x321a,	// (0x000314c3) cale_month_day_heading_pane_t1

0x325c,	// (0x00031505) cale_month_day_heading_pane_t2

0x3291,	// (0x0003153a) cale_month_day_heading_pane_t3

0x32c6,	// (0x0003156f) cale_month_day_heading_pane_t4

0x3303,	// (0x000315ac) cale_month_day_heading_pane_t5

0x3348,	// (0x000315f1) cale_month_day_heading_pane_t6

0x338d,	// (0x00031636) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0003d534) cale_month_day_heading_pane_t

0xa4f9,	// (0x000387a2) bg_cale_side_pane_cp01

0x33da,	// (0x00031683) cale_month_week_pane_t1

0x33f3,	// (0x0003169c) cale_month_week_pane_t2

0x340c,	// (0x000316b5) cale_month_week_pane_t3

0x3425,	// (0x000316ce) cale_month_week_pane_t4

0x343e,	// (0x000316e7) cale_month_week_pane_t5

0x3457,	// (0x00031700) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0003d543) cale_month_week_pane_t

0x3470,	// (0x00031719) cell_cale_month_pane_ParamLimits

0x3470,	// (0x00031719) cell_cale_month_pane

0x35c8,	// (0x00031871) cell_cale_month_pane_g1

0x0613,	// (0x0002e8bc) cell_cale_month_pane_t1_ParamLimits

0x0613,	// (0x0002e8bc) cell_cale_month_pane_t1

0xa507,	// (0x000387b0) grid_highlight_pane_cp08

0xa3af,	// (0x00038658) main_smil_g1

0x35d4,	// (0x0003187d) smil_status_pane

0xa898,	// (0x00038b41) smil_text_pane

0xc1e1,	// (0x0003a48a) bg_popup_call3_rect_pane_g8

0xc1e9,	// (0x0003a492) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0003d7fc) bg_popup_call3_rect_pane_g

0xc470,	// (0x0003a719) smil_status_volume_pane_g1

0xa8a2,	// (0x00038b4b) smil_status_pane_t1

0x4adc,	// (0x00032d85) volume_smil_pane

0xa8b9,	// (0x00038b62) list_smil_text_pane

0x35e9,	// (0x00031892) scroll_pane_cp011

0x35f4,	// (0x0003189d) smil_text_list_pane_t1_ParamLimits

0x35f4,	// (0x0003189d) smil_text_list_pane_t1

0x3638,	// (0x000318e1) aid_volume_smil_ParamLimits

0x3638,	// (0x000318e1) aid_volume_smil

0xa3af,	// (0x00038658) smil_volume_pane_g1

0xa3af,	// (0x00038658) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0003d563) smil_volume_pane_g

0x1f3a,	// (0x000301e3) listscroll_cale_day_pane

0xa8c3,	// (0x00038b6c) bg_cale_pane

0xa8db,	// (0x00038b84) list_cale_pane

0xa90c,	// (0x00038bb5) scroll_pane_cp09

0xa91d,	// (0x00038bc6) cale_bg_pane_g1

0xa925,	// (0x00038bce) cale_bg_pane_g2

0xa92d,	// (0x00038bd6) cale_bg_pane_g3

0xa935,	// (0x00038bde) cale_bg_pane_g4

0xa93d,	// (0x00038be6) cale_bg_pane_g5

0xa945,	// (0x00038bee) cale_bg_pane_g6

0xa94d,	// (0x00038bf6) cale_bg_pane_g7

0xa955,	// (0x00038bfe) cale_bg_pane_g8

0xa95d,	// (0x00038c06) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0003d568) cale_bg_pane_g

0x3662,	// (0x0003190b) list_cale_time_pane_ParamLimits

0x3662,	// (0x0003190b) list_cale_time_pane

0xa965,	// (0x00038c0e) list_cale_time_pane_g1_ParamLimits

0xa965,	// (0x00038c0e) list_cale_time_pane_g1

0xa971,	// (0x00038c1a) list_cale_time_pane_g2_ParamLimits

0xa971,	// (0x00038c1a) list_cale_time_pane_g2

0x3678,	// (0x00031921) list_cale_time_pane_g3_ParamLimits

0x3678,	// (0x00031921) list_cale_time_pane_g3

0x3686,	// (0x0003192f) list_cale_time_pane_g4_ParamLimits

0x3686,	// (0x0003192f) list_cale_time_pane_g4

0x3694,	// (0x0003193d) list_cale_time_pane_g5_ParamLimits

0x3694,	// (0x0003193d) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0003d57b) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0003d57b) list_cale_time_pane_g

0xa98b,	// (0x00038c34) list_cale_time_pane_t1_ParamLimits

0xa98b,	// (0x00038c34) list_cale_time_pane_t1

0xa9b3,	// (0x00038c5c) list_cale_time_pane_t2_ParamLimits

0xa9b3,	// (0x00038c5c) list_cale_time_pane_t2

0x3a85,	// (0x00031d2e) aid_blid_cardinal_pane

0x3ac3,	// (0x00031d6c) compass_pane_t4

0xa9db,	// (0x00038c84) list_cale_time_pane_t4_ParamLimits

0xa9db,	// (0x00038c84) list_cale_time_pane_t4

0x3ad1,	// (0x00031d7a) compass_pane_t5

0x3adf,	// (0x00031d88) compass_pane_t6

0x3aed,	// (0x00031d96) compass_pane_t7

0xae5f,	// (0x00039108) navi_pane_cc_t1

0xb03c,	// (0x000392e5) aid_phob_thumbnail_center_pane

0x415d,	// (0x00032406) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0003d588) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0003d588) list_cale_time_pane_t

0x9c85,	// (0x00037f2e) bg_popup_window_pane_cp02_ParamLimits

0x9c85,	// (0x00037f2e) bg_popup_window_pane_cp02

0xaa03,	// (0x00038cac) heading_pane_cp01_ParamLimits

0xaa03,	// (0x00038cac) heading_pane_cp01

0xaa0f,	// (0x00038cb8) loc_req_pane_ParamLimits

0xaa0f,	// (0x00038cb8) loc_req_pane

0xaa1f,	// (0x00038cc8) loc_type_pane_ParamLimits

0xaa1f,	// (0x00038cc8) loc_type_pane

0xaa31,	// (0x00038cda) loc_type_pane_t1_ParamLimits

0xaa31,	// (0x00038cda) loc_type_pane_t1

0xaa43,	// (0x00038cec) loc_type_pane_t2_ParamLimits

0xaa43,	// (0x00038cec) loc_type_pane_t2

0xaa55,	// (0x00038cfe) loc_type_pane_t3_ParamLimits

0xaa55,	// (0x00038cfe) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0003d58f) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0003d58f) loc_type_pane_t

0xaa67,	// (0x00038d10) list_loc_req_pane

0xaa71,	// (0x00038d1a) scroll_pane_cp012

0x36a2,	// (0x0003194b) list_single_loc_request_popup_menu_pane_ParamLimits

0x36a2,	// (0x0003194b) list_single_loc_request_popup_menu_pane

0xaa7c,	// (0x00038d25) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa7c,	// (0x00038d25) list_single_loc_request_popup_menu_pane_g1

0xaa88,	// (0x00038d31) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa88,	// (0x00038d31) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0003d596) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0003d596) list_single_loc_request_popup_menu_pane_g

0xaa94,	// (0x00038d3d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa94,	// (0x00038d3d) list_single_loc_request_popup_menu_pane_t1

0xa289,	// (0x00038532) bg_popup_window_pane_cp03_ParamLimits

0xa289,	// (0x00038532) bg_popup_window_pane_cp03

0xaaaa,	// (0x00038d53) heading_loc_req_pane_ParamLimits

0xaaaa,	// (0x00038d53) heading_loc_req_pane

0x36af,	// (0x00031958) popup_dyc_status_message_window_g1_ParamLimits

0x36af,	// (0x00031958) popup_dyc_status_message_window_g1

0x36c3,	// (0x0003196c) popup_dyc_status_message_window_t1_ParamLimits

0x36c3,	// (0x0003196c) popup_dyc_status_message_window_t1

0x36d8,	// (0x00031981) popup_dyc_status_message_window_t2_ParamLimits

0x36d8,	// (0x00031981) popup_dyc_status_message_window_t2

0x36ed,	// (0x00031996) popup_dyc_status_message_window_t3_ParamLimits

0x36ed,	// (0x00031996) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0003d59b) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0003d59b) popup_dyc_status_message_window_t

0xa02e,	// (0x000382d7) bg_heading_pane_cp01

0xaab6,	// (0x00038d5f) heading_loc_req_pane_g1

0xaabe,	// (0x00038d67) heading_loc_req_pane_g2

0xaac6,	// (0x00038d6f) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0003d5a2) heading_loc_req_pane_g

0xaace,	// (0x00038d77) heading_loc_req_pane_t1

0xaadd,	// (0x00038d86) bg_popup_sub_pane_cp01_ParamLimits

0xaadd,	// (0x00038d86) bg_popup_sub_pane_cp01

0xaaeb,	// (0x00038d94) popup_cale_events_window_g1_ParamLimits

0xaaeb,	// (0x00038d94) popup_cale_events_window_g1

0xab0b,	// (0x00038db4) popup_cale_events_window_g2_ParamLimits

0xab0b,	// (0x00038db4) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0003d5d6) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0003d5d6) popup_cale_events_window_g

0xab2b,	// (0x00038dd4) popup_cale_events_window_t1_ParamLimits

0xab2b,	// (0x00038dd4) popup_cale_events_window_t1

0xab3d,	// (0x00038de6) popup_cale_events_window_t2_ParamLimits

0xab3d,	// (0x00038de6) popup_cale_events_window_t2

0xab7b,	// (0x00038e24) popup_cale_events_window_t3_ParamLimits

0xab7b,	// (0x00038e24) popup_cale_events_window_t3

0xabb5,	// (0x00038e5e) popup_cale_events_window_t4_ParamLimits

0xabb5,	// (0x00038e5e) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0003d5db) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0003d5db) popup_cale_events_window_t

0x37e6,	// (0x00031a8f) call_type_pane

0x37f6,	// (0x00031a9f) popup_call_status_window_g1

0x380a,	// (0x00031ab3) popup_call_status_window_g2

0x381e,	// (0x00031ac7) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0003d5e4) popup_call_status_window_g

0xabeb,	// (0x00038e94) call_type_pane_g1

0xabf4,	// (0x00038e9d) call_type_pane_g2

0x0001,

0xf342,	// (0x0003d5eb) call_type_pane_g

0xa02e,	// (0x000382d7) bg_popup_sub_pane_cp02

0xabfd,	// (0x00038ea6) listscroll_popup_wml_pane

0xac05,	// (0x00038eae) list_wml_pane

0xac0f,	// (0x00038eb8) scroll_pane_cp013

0xac1a,	// (0x00038ec3) list_single_graphic_popup_wml_pane_ParamLimits

0xac1a,	// (0x00038ec3) list_single_graphic_popup_wml_pane

0xa3af,	// (0x00038658) list_single_graphic_popup_wml_pane_g1

0xac2e,	// (0x00038ed7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0003d5f0) list_single_graphic_popup_wml_pane_g

0xac36,	// (0x00038edf) list_single_graphic_popup_wml_pane_t1

0xac4c,	// (0x00038ef5) aid_call_pane

0xa281,	// (0x0003852a) popup_clock_analogue_window_g1

0xa281,	// (0x0003852a) popup_clock_analogue_window_g2

0x382d,	// (0x00031ad6) popup_clock_analogue_window_g3

0x382d,	// (0x00031ad6) popup_clock_analogue_window_g4

0xa3af,	// (0x00038658) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0003d5f5) popup_clock_analogue_window_g

0x3835,	// (0x00031ade) popup_clock_analogue_window_t1

0x3843,	// (0x00031aec) clock_digital_number_pane_ParamLimits

0x3843,	// (0x00031aec) clock_digital_number_pane

0x384f,	// (0x00031af8) clock_digital_number_pane_cp02_ParamLimits

0x384f,	// (0x00031af8) clock_digital_number_pane_cp02

0x385b,	// (0x00031b04) clock_digital_number_pane_cp03_ParamLimits

0x385b,	// (0x00031b04) clock_digital_number_pane_cp03

0x3867,	// (0x00031b10) clock_digital_number_pane_cp04_ParamLimits

0x3867,	// (0x00031b10) clock_digital_number_pane_cp04

0x3873,	// (0x00031b1c) clock_digital_separator_pane_ParamLimits

0x3873,	// (0x00031b1c) clock_digital_separator_pane

0x387f,	// (0x00031b28) popup_clock_digital_window_t1

0xa3af,	// (0x00038658) clock_digital_number_pane_g1

0xa3af,	// (0x00038658) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0003d563) clock_digital_number_pane_g

0xa3af,	// (0x00038658) clock_digital_separator_pane_g1

0xa3af,	// (0x00038658) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0003d563) clock_digital_separator_pane_g

0xa02e,	// (0x000382d7) bg_popup_window_pane_cp04

0xac54,	// (0x00038efd) heading_pane_cp03

0xac5c,	// (0x00038f05) listscroll_popup_gms_pane

0xac64,	// (0x00038f0d) grid_large_graphic_popup_pane

0xac6e,	// (0x00038f17) listscroll_popup_gms_pane_g1

0xac76,	// (0x00038f1f) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0003d600) listscroll_popup_gms_pane_g

0xa6fd,	// (0x000389a6) scroll_pane_cp014

0x389c,	// (0x00031b45) cell_large_graphic_popup_pane_ParamLimits

0x389c,	// (0x00031b45) cell_large_graphic_popup_pane

0x38b4,	// (0x00031b5d) cell_large_graphic_popup_pane_g1_ParamLimits

0x38b4,	// (0x00031b5d) cell_large_graphic_popup_pane_g1

0xac7e,	// (0x00038f27) cell_large_graphic_popup_pane_g2_ParamLimits

0xac7e,	// (0x00038f27) cell_large_graphic_popup_pane_g2

0xac8a,	// (0x00038f33) cell_large_graphic_popup_pane_g3_ParamLimits

0xac8a,	// (0x00038f33) cell_large_graphic_popup_pane_g3

0xac97,	// (0x00038f40) cell_large_graphic_popup_pane_g4_ParamLimits

0xac97,	// (0x00038f40) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0003d605) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0003d605) cell_large_graphic_popup_pane_g

0xaca7,	// (0x00038f50) grid_highlight_pane_cp010

0xa3af,	// (0x00038658) bg_popup_call_pane_g1

0xacb1,	// (0x00038f5a) list_single_graphic_popup_conf_pane_ParamLimits

0xacb1,	// (0x00038f5a) list_single_graphic_popup_conf_pane

0xacc4,	// (0x00038f6d) list_highlight_pane_cp01

0xaccd,	// (0x00038f76) list_single_graphic_popup_conf_pane_g1

0xacd5,	// (0x00038f7e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0003d60e) list_single_graphic_popup_conf_pane_g

0xacdd,	// (0x00038f86) list_single_graphic_popup_conf_pane_t1

0xaceb,	// (0x00038f94) linegrid_cams_pane_g1

0x38c0,	// (0x00031b69) linegrid_cams_pane_g2

0xa53a,	// (0x000387e3) linegrid_cams_pane_g3

0xacf4,	// (0x00038f9d) linegrid_cams_pane_g4

0x38c9,	// (0x00031b72) linegrid_cams_pane_g5

0x38d2,	// (0x00031b7b) linegrid_cams_pane_g6

0xa543,	// (0x000387ec) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0003d613) linegrid_cams_pane_g

0xacfd,	// (0x00038fa6) popup_clock_analogue_window

0xacfd,	// (0x00038fa6) popup_clock_digital_window

0xa02e,	// (0x000382d7) popup_phob_thumbnail_window

0xa3af,	// (0x00038658) call_video_uplink_pane_g1

0xad06,	// (0x00038faf) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0003d622) call_video_uplink_pane_g

0xad0e,	// (0x00038fb7) video_uplink_pane

0xad16,	// (0x00038fbf) mce_image_pane_g1

0x38dd,	// (0x00031b86) mce_image_pane_g2

0x38e5,	// (0x00031b8e) mce_image_pane_g3

0x38ed,	// (0x00031b96) mce_image_pane_g4

0x38f7,	// (0x00031ba0) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0003d627) mce_image_pane_g

0xad20,	// (0x00038fc9) control_top_pane_stacon_cp01_ParamLimits

0xad20,	// (0x00038fc9) control_top_pane_stacon_cp01

0xad34,	// (0x00038fdd) uni_indicator_pane_stacon_cp01_ParamLimits

0xad34,	// (0x00038fdd) uni_indicator_pane_stacon_cp01

0xad45,	// (0x00038fee) bg_popup_sub_pane_cp03

0x38ff,	// (0x00031ba8) chi_dic_find_pane

0x3907,	// (0x00031bb0) listscroll_chi_dic_pane

0x3910,	// (0x00031bb9) main_pane_chidic_g1

0x3923,	// (0x00031bcc) chi_dic_find_pane_t1

0xad4f,	// (0x00038ff8) find_chidic_pane

0xad58,	// (0x00039001) chi_dic_list_pane_ParamLimits

0xad58,	// (0x00039001) chi_dic_list_pane

0xad69,	// (0x00039012) scroll_pane_cp020

0x3931,	// (0x00031bda) find_chidic_pane_t1

0xa02e,	// (0x000382d7) input_focus_pane_cp06

0x3940,	// (0x00031be9) list_chi_dic_pane_ParamLimits

0x3940,	// (0x00031be9) list_chi_dic_pane

0x3952,	// (0x00031bfb) list_chi_dic_pane_t1_ParamLimits

0x3952,	// (0x00031bfb) list_chi_dic_pane_t1

0xa02e,	// (0x000382d7) list_highlight_pane_cp020

0xad71,	// (0x0003901a) bg_cale_heading_pane_g1

0x3965,	// (0x00031c0e) bg_cale_heading_pane_g2

0x396d,	// (0x00031c16) bg_cale_heading_pane_g3

0x3975,	// (0x00031c1e) bg_cale_heading_pane_g4

0x397f,	// (0x00031c28) bg_cale_heading_pane_g5

0x3989,	// (0x00031c32) bg_cale_heading_pane_g6

0x3991,	// (0x00031c3a) bg_cale_heading_pane_g7

0x3999,	// (0x00031c42) bg_cale_heading_pane_g8

0x39a3,	// (0x00031c4c) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0003d632) bg_cale_heading_pane_g

0xad71,	// (0x0003901a) bg_cale_side_pane_g1

0x39ad,	// (0x00031c56) bg_cale_side_pane_g2

0x39b5,	// (0x00031c5e) bg_cale_side_pane_g3

0x39bd,	// (0x00031c66) bg_cale_side_pane_g4

0x39c5,	// (0x00031c6e) bg_cale_side_pane_g5

0x39cd,	// (0x00031c76) bg_cale_side_pane_g6

0x39d5,	// (0x00031c7e) bg_cale_side_pane_g7

0x39dd,	// (0x00031c86) bg_cale_side_pane_g8

0x39e5,	// (0x00031c8e) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0003d645) bg_cale_side_pane_g

0x39ed,	// (0x00031c96) popup_call_status_window_ParamLimits

0x39ed,	// (0x00031c96) popup_call_status_window

0xad79,	// (0x00039022) stacon_top_pane

0xad81,	// (0x0003902a) status_pane_ParamLimits

0xad81,	// (0x0003902a) status_pane

0xad96,	// (0x0003903f) status_small_pane

0xad9e,	// (0x00039047) control_pane

0xa02e,	// (0x000382d7) stacon_bottom_pane

0xada6,	// (0x0003904f) list_single_mce_smart_pane_t1_ParamLimits

0xada6,	// (0x0003904f) list_single_mce_smart_pane_t1

0xadb9,	// (0x00039062) list_single_mce_smart_pane_t2_ParamLimits

0xadb9,	// (0x00039062) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0003d658) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0003d658) list_single_mce_smart_pane_t

0x3a34,	// (0x00031cdd) compass_pane

0x3a3d,	// (0x00031ce6) main_location2_pane_t1

0x3a4f,	// (0x00031cf8) main_location2_pane_t2

0x3a61,	// (0x00031d0a) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0003d65d) main_location2_pane_t

0xadd8,	// (0x00039081) compass_pane_g1_ParamLimits

0xadd8,	// (0x00039081) compass_pane_g1

0x3aa5,	// (0x00031d4e) compass_pane_t1

0x3ab4,	// (0x00031d5d) compass_pane_t2

0x0005,

0xf3bd,	// (0x0003d666) compass_pane_t

0x3afb,	// (0x00031da4) text_secondary_cp61

0xae56,	// (0x000390ff) navi_pane_cams_g5

0xaed2,	// (0x0003917b) navi_pane_im_t1

0xaee0,	// (0x00039189) navi_pane_mp_g1_ParamLimits

0xaee0,	// (0x00039189) navi_pane_mp_g1

0xaef4,	// (0x0003919d) navi_pane_mp_g2_ParamLimits

0xaef4,	// (0x0003919d) navi_pane_mp_g2

0xaf00,	// (0x000391a9) navi_pane_mp_g3_ParamLimits

0xaf00,	// (0x000391a9) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0003d67a) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0003d67a) navi_pane_mp_g

0xaf0c,	// (0x000391b5) navi_pane_mp_t1

0xaf1a,	// (0x000391c3) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0003d681) navi_pane_mp_t

0xaf85,	// (0x0003922e) navi_pane_vt_g1

0xaf0c,	// (0x000391b5) navi_pane_vt_t1

0xaf8d,	// (0x00039236) navi_slider_pane

0xa554,	// (0x000387fd) zooming_pane

0xaf9d,	// (0x00039246) navi_slider_pane_g1

0x3b4c,	// (0x00031df5) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0003d688) navi_slider_pane_g

0xafc1,	// (0x0003926a) aid_levels_zoom

0xafc9,	// (0x00039272) zooming_pane_g1

0xafd1,	// (0x0003927a) zooming_pane_g2

0xafd1,	// (0x0003927a) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0003d697) zooming_pane_g

0xafd9,	// (0x00039282) level_10_zoom

0xafe2,	// (0x0003928b) level_11_zoom

0xafeb,	// (0x00039294) level_1_zoom

0xaff4,	// (0x0003929d) level_2_zoom

0xaffd,	// (0x000392a6) level_3_zoom

0xb006,	// (0x000392af) level_4_zoom

0xb00f,	// (0x000392b8) level_5_zoom

0xb018,	// (0x000392c1) level_6_zoom

0xb021,	// (0x000392ca) level_7_zoom

0xb02a,	// (0x000392d3) level_8_zoom

0xb033,	// (0x000392dc) level_9_zoom

0xb044,	// (0x000392ed) popup_phob_thumbnail_window_g1

0xb04c,	// (0x000392f5) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0003d69e) popup_phob_thumbnail_window_g

0xc383,	// (0x0003a62c) level_1_location

0xc38b,	// (0x0003a634) level_2_location

0xc393,	// (0x0003a63c) level_3_location

0xc39b,	// (0x0003a644) level_4_location

0xa554,	// (0x000387fd) level_5_location

0x3b5e,	// (0x00031e07) mce_icon_pane_g1

0x3b68,	// (0x00031e11) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0003d6a3) mce_icon_pane_g

0x3b70,	// (0x00031e19) main_mup_pane_g1_ParamLimits

0x3b70,	// (0x00031e19) main_mup_pane_g1

0x3b86,	// (0x00031e2f) main_mup_pane_g2_ParamLimits

0x3b86,	// (0x00031e2f) main_mup_pane_g2

0x3b98,	// (0x00031e41) main_mup_pane_g3_ParamLimits

0x3b98,	// (0x00031e41) main_mup_pane_g3

0x3baa,	// (0x00031e53) main_mup_pane_g4_ParamLimits

0x3baa,	// (0x00031e53) main_mup_pane_g4

0x3bc2,	// (0x00031e6b) main_mup_pane_g5_ParamLimits

0x3bc2,	// (0x00031e6b) main_mup_pane_g5

0x3bde,	// (0x00031e87) main_mup_pane_g6_ParamLimits

0x3bde,	// (0x00031e87) main_mup_pane_g6

0x3bf6,	// (0x00031e9f) main_mup_pane_g7_ParamLimits

0x3bf6,	// (0x00031e9f) main_mup_pane_g7

0x3c0e,	// (0x00031eb7) main_mup_pane_g8_ParamLimits

0x3c0e,	// (0x00031eb7) main_mup_pane_g8

0x3c26,	// (0x00031ecf) main_mup_pane_g9_ParamLimits

0x3c26,	// (0x00031ecf) main_mup_pane_g9

0x3c40,	// (0x00031ee9) main_mup_pane_g10_ParamLimits

0x3c40,	// (0x00031ee9) main_mup_pane_g10

0x3c5a,	// (0x00031f03) main_mup_pane_g11_ParamLimits

0x3c5a,	// (0x00031f03) main_mup_pane_g11

0x3c6e,	// (0x00031f17) main_mup_pane_g12_ParamLimits

0x3c6e,	// (0x00031f17) main_mup_pane_g12

0x3c84,	// (0x00031f2d) main_mup_pane_g13_ParamLimits

0x3c84,	// (0x00031f2d) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0003d6a8) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0003d6a8) main_mup_pane_g

0x3c98,	// (0x00031f41) main_mup_pane_t1_ParamLimits

0x3c98,	// (0x00031f41) main_mup_pane_t1

0x3cb2,	// (0x00031f5b) main_mup_pane_t2_ParamLimits

0x3cb2,	// (0x00031f5b) main_mup_pane_t2

0x3cca,	// (0x00031f73) main_mup_pane_t3_ParamLimits

0x3cca,	// (0x00031f73) main_mup_pane_t3

0x3ce2,	// (0x00031f8b) main_mup_pane_t4_ParamLimits

0x3ce2,	// (0x00031f8b) main_mup_pane_t4

0x3d00,	// (0x00031fa9) main_mup_pane_t5_ParamLimits

0x3d00,	// (0x00031fa9) main_mup_pane_t5

0x3d15,	// (0x00031fbe) main_mup_pane_t6_ParamLimits

0x3d15,	// (0x00031fbe) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0003d6c3) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0003d6c3) main_mup_pane_t

0x3d27,	// (0x00031fd0) mup_progress_pane_ParamLimits

0x3d27,	// (0x00031fd0) mup_progress_pane

0x3d33,	// (0x00031fdc) mup_visualizer_pane_ParamLimits

0x3d33,	// (0x00031fdc) mup_visualizer_pane

0x3d67,	// (0x00032010) mup_volume_pane_ParamLimits

0x3d67,	// (0x00032010) mup_volume_pane

0xb054,	// (0x000392fd) mup_visualizer_pane_g1_ParamLimits

0xb054,	// (0x000392fd) mup_visualizer_pane_g1

0xb054,	// (0x000392fd) mup_visualizer_pane_g2_ParamLimits

0xb054,	// (0x000392fd) mup_visualizer_pane_g2

0xadd8,	// (0x00039081) mup_visualizer_pane_g3_ParamLimits

0xadd8,	// (0x00039081) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0003d6d0) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0003d6d0) mup_visualizer_pane_g

0xa3af,	// (0x00038658) mup_volume_pane_g1

0xb06a,	// (0x00039313) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0003d6d7) mup_volume_pane_g

0xa3af,	// (0x00038658) mup_progress_pane_g1

0xb073,	// (0x0003931c) mup_progress_pane_g2

0xb07c,	// (0x00039325) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0003d6dc) mup_progress_pane_g

0xa02e,	// (0x000382d7) bg_popup_window_pane_cp05

0xb085,	// (0x0003932e) heading_pane_cp02_ParamLimits

0xb085,	// (0x0003932e) heading_pane_cp02

0xb09f,	// (0x00039348) list_popup_blid_pane

0xb0a7,	// (0x00039350) list_blid_sat_info_pane_ParamLimits

0xb0a7,	// (0x00039350) list_blid_sat_info_pane

0xb0ba,	// (0x00039363) list_blid_sat_info_pane_g1

0xb0c2,	// (0x0003936b) list_blid_sat_info_pane_t1

0x3e7d,	// (0x00032126) mup_equalizer_pane_ParamLimits

0x3e7d,	// (0x00032126) mup_equalizer_pane

0x3e96,	// (0x0003213f) mup_equalizer_pane_cp1_ParamLimits

0x3e96,	// (0x0003213f) mup_equalizer_pane_cp1

0x3eb3,	// (0x0003215c) mup_equalizer_pane_cp2_ParamLimits

0x3eb3,	// (0x0003215c) mup_equalizer_pane_cp2

0x3ed0,	// (0x00032179) mup_equalizer_pane_cp3_ParamLimits

0x3ed0,	// (0x00032179) mup_equalizer_pane_cp3

0x3ef1,	// (0x0003219a) mup_equalizer_pane_cp4_ParamLimits

0x3ef1,	// (0x0003219a) mup_equalizer_pane_cp4

0x3f12,	// (0x000321bb) mup_equalizer_pane_cp5

0x3f26,	// (0x000321cf) mup_equalizer_pane_cp6

0x3f3a,	// (0x000321e3) mup_equalizer_pane_cp7

0xc261,	// (0x0003a50a) bg_popup_call_poc_act_pane_g9

0xc269,	// (0x0003a512) bg_popup_call_poc_act_pane_g10

0xc271,	// (0x0003a51a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa289,	// (0x00038532) mup_scale_pane

0xa3af,	// (0x00038658) mup_scale_pane_g1

0xb0d0,	// (0x00039379) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0003d6f8) mup_scale_pane_g

0xb0f4,	// (0x0003939d) msg_data_pane

0xb0fc,	// (0x000393a5) scroll_pane_cp017

0x3f60,	// (0x00032209) bg_list_pane_cp04_ParamLimits

0x3f60,	// (0x00032209) bg_list_pane_cp04

0xb104,	// (0x000393ad) msg_data_pane_g1

0x3f80,	// (0x00032229) msg_data_pane_g2

0x3f88,	// (0x00032231) msg_data_pane_g3

0x3f90,	// (0x00032239) msg_data_pane_g4

0x3f98,	// (0x00032241) msg_data_pane_g5

0x3fa0,	// (0x00032249) msg_data_pane_g6

0x3fa8,	// (0x00032251) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0003d707) msg_data_pane_g

0x3fb0,	// (0x00032259) msg_text_pane_ParamLimits

0x3fb0,	// (0x00032259) msg_text_pane

0x3fde,	// (0x00032287) qrid_highlight_pane_cp011_ParamLimits

0x3fde,	// (0x00032287) qrid_highlight_pane_cp011

0xa02e,	// (0x000382d7) msg_body_pane

0xa02e,	// (0x000382d7) msg_header_pane

0xb115,	// (0x000393be) input_focus_pane_cp07

0x4002,	// (0x000322ab) msg_header_pane_t1_ParamLimits

0x4002,	// (0x000322ab) msg_header_pane_t1

0x4014,	// (0x000322bd) msg_header_pane_t2_ParamLimits

0x4014,	// (0x000322bd) msg_header_pane_t2

0x0001,

0xf472,	// (0x0003d71b) msg_header_pane_t_ParamLimits

0xf472,	// (0x0003d71b) msg_header_pane_t

0xb12a,	// (0x000393d3) msg_body_pane_g1

0x4026,	// (0x000322cf) msg_body_pane_t1_ParamLimits

0x4026,	// (0x000322cf) msg_body_pane_t1

0x4057,	// (0x00032300) msg_body_pane_t2_ParamLimits

0x4057,	// (0x00032300) msg_body_pane_t2

0x4069,	// (0x00032312) msg_body_pane_t3_ParamLimits

0x4069,	// (0x00032312) msg_body_pane_t3

0x0002,

0xf477,	// (0x0003d720) msg_body_pane_t_ParamLimits

0xf477,	// (0x0003d720) msg_body_pane_t

0x065b,	// (0x0002e904) main_viewer_pane_g1_ParamLimits

0x065b,	// (0x0002e904) main_viewer_pane_g1

0x0669,	// (0x0002e912) main_viewer_pane_g2_ParamLimits

0x0669,	// (0x0002e912) main_viewer_pane_g2

0x40b1,	// (0x0003235a) main_viewer_pane_g3_ParamLimits

0x40b1,	// (0x0003235a) main_viewer_pane_g3

0x40c0,	// (0x00032369) main_viewer_pane_g4_ParamLimits

0x40c0,	// (0x00032369) main_viewer_pane_g4

0x40cf,	// (0x00032378) main_viewer_pane_g5_ParamLimits

0x40cf,	// (0x00032378) main_viewer_pane_g5

0x40cf,	// (0x00032378) main_viewer_pane_g7_ParamLimits

0x40cf,	// (0x00032378) main_viewer_pane_g7

0xaa7c,	// (0x00038d25) main_viewer_pane_g8_ParamLimits

0xaa7c,	// (0x00038d25) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0003d730) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0003d730) main_viewer_pane_g

0xb132,	// (0x000393db) viewer_content_pane_ParamLimits

0xb132,	// (0x000393db) viewer_content_pane

0x411a,	// (0x000323c3) main_postcard_pane_g1_ParamLimits

0x411a,	// (0x000323c3) main_postcard_pane_g1

0x4130,	// (0x000323d9) main_postcard_pane_g2_ParamLimits

0x4130,	// (0x000323d9) main_postcard_pane_g2

0x4146,	// (0x000323ef) main_postcard_pane_g3_ParamLimits

0x4146,	// (0x000323ef) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0003d741) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0003d741) main_postcard_pane_g

0x415d,	// (0x00032406) main_postcard_pane_g4

0xc483,	// (0x0003a72c) smil_status_volume_pane_g2

0x41a0,	// (0x00032449) postcard_pane_ParamLimits

0x41a0,	// (0x00032449) postcard_pane

0xb140,	// (0x000393e9) postcard_pane_g1_ParamLimits

0xb140,	// (0x000393e9) postcard_pane_g1

0x41e2,	// (0x0003248b) postcard_pane_g2_ParamLimits

0x41e2,	// (0x0003248b) postcard_pane_g2

0x41ee,	// (0x00032497) postcard_pane_g3_ParamLimits

0x41ee,	// (0x00032497) postcard_pane_g3

0xb14e,	// (0x000393f7) postcard_pane_g4_ParamLimits

0xb14e,	// (0x000393f7) postcard_pane_g4

0x41fa,	// (0x000324a3) postcard_pane_g5_ParamLimits

0x41fa,	// (0x000324a3) postcard_pane_g5

0x420f,	// (0x000324b8) postcard_pane_g6_ParamLimits

0x420f,	// (0x000324b8) postcard_pane_g6

0xb140,	// (0x000393e9) postcard_pane_g7_ParamLimits

0xb140,	// (0x000393e9) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0003d74e) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0003d74e) postcard_pane_g

0x4223,	// (0x000324cc) main_mp2_pane_g1_ParamLimits

0x4223,	// (0x000324cc) main_mp2_pane_g1

0x422f,	// (0x000324d8) main_mp2_pane_g2_ParamLimits

0x422f,	// (0x000324d8) main_mp2_pane_g2

0x423b,	// (0x000324e4) main_mp2_pane_g3_ParamLimits

0x423b,	// (0x000324e4) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0003d75d) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0003d75d) main_mp2_pane_g

0x4247,	// (0x000324f0) main_mp2_pane_t1_ParamLimits

0x4247,	// (0x000324f0) main_mp2_pane_t1

0x425c,	// (0x00032505) main_mp2_pane_t2_ParamLimits

0x425c,	// (0x00032505) main_mp2_pane_t2

0x426e,	// (0x00032517) main_mp2_pane_t3_ParamLimits

0x426e,	// (0x00032517) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0003d764) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0003d764) main_mp2_pane_t

0xb15c,	// (0x00039405) pec_content_pane_ParamLimits

0xb15c,	// (0x00039405) pec_content_pane

0xa6fd,	// (0x000389a6) scroll_pane_cp015

0xb16e,	// (0x00039417) pec_attribute_pane_ParamLimits

0xb16e,	// (0x00039417) pec_attribute_pane

0x4280,	// (0x00032529) pec_content_pane_g1_ParamLimits

0x4280,	// (0x00032529) pec_content_pane_g1

0xb17e,	// (0x00039427) pec_content_pane_t1_ParamLimits

0xb17e,	// (0x00039427) pec_content_pane_t1

0xb190,	// (0x00039439) pec_content_pane_t2_ParamLimits

0xb190,	// (0x00039439) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0003d76b) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0003d76b) pec_content_pane_t

0x428c,	// (0x00032535) list_single_graphic_pane_cp01_ParamLimits

0x428c,	// (0x00032535) list_single_graphic_pane_cp01

0xa289,	// (0x00038532) bg_popup_sub_pane_cp04

0xb1a2,	// (0x0003944b) popup_mup_playback_window_g1

0xb1ae,	// (0x00039457) popup_mup_playback_window_t1

0xb1c3,	// (0x0003946c) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0003d770) popup_mup_playback_window_t

0xb1fa,	// (0x000394a3) main_image_pane_g1_ParamLimits

0xb1fa,	// (0x000394a3) main_image_pane_g1

0xb23d,	// (0x000394e6) scroll_pane_cp018_ParamLimits

0xb23d,	// (0x000394e6) scroll_pane_cp018

0xb255,	// (0x000394fe) scroll_pane_cp016_ParamLimits

0xb255,	// (0x000394fe) scroll_pane_cp016

0x435a,	// (0x00032603) smil2_image_pane_ParamLimits

0x435a,	// (0x00032603) smil2_image_pane

0x438a,	// (0x00032633) smil2_root_pane_ParamLimits

0x438a,	// (0x00032633) smil2_root_pane

0x43c2,	// (0x0003266b) smil2_text_pane_ParamLimits

0x43c2,	// (0x0003266b) smil2_text_pane

0xa02e,	// (0x000382d7) bg_list_pane_cp06

0xb291,	// (0x0003953a) grid_radio_pane

0xa02e,	// (0x000382d7) bg_popup_window_pane_cp06

0xb299,	// (0x00039542) main_fmradio_pane_t1

0xac54,	// (0x00038efd) heading_pane_cp04

0xb2a7,	// (0x00039550) main_fmradio_pane_t2

0xc2b9,	// (0x0003a562) popup_cale_lunar_info_window_g1

0xb2b5,	// (0x0003955e) main_fmradio_pane_t3

0xc2c1,	// (0x0003a56a) popup_cale_lunar_info_window_g2

0xb2c3,	// (0x0003956c) main_fmradio_pane_t4

0x0001,

0xb2d1,	// (0x0003957a) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0003d85e) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0003d785) main_fmradio_pane_t

0xb2df,	// (0x00039588) wait_bar_pane_cp03

0xb2e7,	// (0x00039590) cell_fmradio_pane_ParamLimits

0xb2e7,	// (0x00039590) cell_fmradio_pane

0xb140,	// (0x000393e9) cell_fmradio_pane_g1_ParamLimits

0xb140,	// (0x000393e9) cell_fmradio_pane_g1

0xa02e,	// (0x000382d7) grid_highlight_pane_cp011

0xb2fa,	// (0x000395a3) poc_content_pane_ParamLimits

0xb2fa,	// (0x000395a3) poc_content_pane

0xb30c,	// (0x000395b5) scroll_pane_cp019

0x4442,	// (0x000326eb) popup_call_poc_act_window_ParamLimits

0x4442,	// (0x000326eb) popup_call_poc_act_window

0x4466,	// (0x0003270f) popup_call_poc_inact_window_ParamLimits

0x4466,	// (0x0003270f) popup_call_poc_inact_window

0xf579,	// (0x0003d822) bg_popup_call_poc_act_pane_g

0xc279,	// (0x0003a522) bg_popup_call_poc_inact_pane_g1

0xc281,	// (0x0003a52a) bg_popup_call_poc_inact_pane_g2

0xb314,	// (0x000395bd) popup_call_poc_act_window_g2

0xc289,	// (0x0003a532) bg_popup_call_poc_inact_pane_g3

0xc209,	// (0x0003a4b2) bg_popup_call_poc_inact_pane_g4

0xc291,	// (0x0003a53a) bg_popup_call_poc_inact_pane_g5

0xb31c,	// (0x000395c5) popup_call_poc_act_window_t1_ParamLimits

0xb31c,	// (0x000395c5) popup_call_poc_act_window_t1

0xb344,	// (0x000395ed) popup_call_poc_act_window_t2_ParamLimits

0xb344,	// (0x000395ed) popup_call_poc_act_window_t2

0xb36c,	// (0x00039615) popup_call_poc_act_window_t3_ParamLimits

0xb36c,	// (0x00039615) popup_call_poc_act_window_t3

0xb394,	// (0x0003963d) popup_call_poc_act_window_t4_ParamLimits

0xb394,	// (0x0003963d) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0003d790) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0003d790) popup_call_poc_act_window_t

0xc299,	// (0x0003a542) bg_popup_call_poc_inact_pane_g6

0xc2a1,	// (0x0003a54a) bg_popup_call_poc_inact_pane_g7

0xc2a9,	// (0x0003a552) bg_popup_call_poc_inact_pane_g8

0xb3a6,	// (0x0003964f) popup_call_poc_inact_window_g2

0xc2b1,	// (0x0003a55a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0003d839) bg_popup_call_poc_inact_pane_g

0xb3ae,	// (0x00039657) popup_call_poc_inact_window_t1_ParamLimits

0xb3ae,	// (0x00039657) popup_call_poc_inact_window_t1

0xb3c3,	// (0x0003966c) popup_call_poc_inact_window_t2_ParamLimits

0xb3c3,	// (0x0003966c) popup_call_poc_inact_window_t2

0xb3d8,	// (0x00039681) popup_call_poc_inact_window_t3_ParamLimits

0xb3d8,	// (0x00039681) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0003d799) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0003d799) popup_call_poc_inact_window_t

0xc3f6,	// (0x0003a69f) context_pane_ParamLimits

0x4a40,	// (0x00032ce9) signal_pane_ParamLimits

0xa554,	// (0x000387fd) main_call2_pane

0x49cf,	// (0x00032c78) popup_phob_thumbnail2_window_ParamLimits

0x49cf,	// (0x00032c78) popup_phob_thumbnail2_window

0x407b,	// (0x00032324) aid_hotspot_pointer_arrow_pane

0x4083,	// (0x0003232c) aid_hotspot_pointer_hand_pane

0x47b0,	// (0x00032a59) phob_pre_status_pane_g5

0x2448,	// (0x000306f1) cams_zoom_pane_ParamLimits

0x2457,	// (0x00030700) image_vga_pane_ParamLimits

0x2471,	// (0x0003071a) main_camera_pane_g1_ParamLimits

0x2483,	// (0x0003072c) main_camera_pane_g2_ParamLimits

0x2493,	// (0x0003073c) main_camera_pane_g3_ParamLimits

0x24a3,	// (0x0003074c) main_camera_pane_g4_ParamLimits

0x24b3,	// (0x0003075c) main_camera_pane_g5_ParamLimits

0x24c3,	// (0x0003076c) main_camera_pane_g6_ParamLimits

0x24d3,	// (0x0003077c) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0003d498) main_camera_pane_g_ParamLimits

0x24e3,	// (0x0003078c) main_camera_pane_t1_ParamLimits

0x24f9,	// (0x000307a2) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0003d4a9) main_camera_pane_t_ParamLimits

0xa289,	// (0x00038532) bg_popup_preview_window_pane_cp01_ParamLimits

0xa289,	// (0x00038532) bg_popup_preview_window_pane_cp01

0xb3ed,	// (0x00039696) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3ed,	// (0x00039696) popup_phob_thumbnail2_window_g1

0xa02e,	// (0x000382d7) call2_cli_visual_pane

0x449a,	// (0x00032743) popup_call2_audio_conf_window_ParamLimits

0x449a,	// (0x00032743) popup_call2_audio_conf_window

0x44ba,	// (0x00032763) popup_call2_audio_first_window_ParamLimits

0x44ba,	// (0x00032763) popup_call2_audio_first_window

0x4550,	// (0x000327f9) popup_call2_audio_in_window_ParamLimits

0x4550,	// (0x000327f9) popup_call2_audio_in_window

0x4598,	// (0x00032841) popup_call2_audio_out_window_ParamLimits

0x4598,	// (0x00032841) popup_call2_audio_out_window

0x4602,	// (0x000328ab) popup_call2_audio_second_window_ParamLimits

0x4602,	// (0x000328ab) popup_call2_audio_second_window

0x4668,	// (0x00032911) popup_call2_audio_wait_window_ParamLimits

0x4668,	// (0x00032911) popup_call2_audio_wait_window

0xa02e,	// (0x000382d7) bg_popup_call2_act_pane_cp03

0xa26b,	// (0x00038514) list_conf_pane_cp

0xb3f9,	// (0x000396a2) popup_call2_audio_conf_window_t1

0xb407,	// (0x000396b0) list_single_graphic_popup_conf2_pane_ParamLimits

0xb407,	// (0x000396b0) list_single_graphic_popup_conf2_pane

0xacc4,	// (0x00038f6d) list_highlight_pane_cp04

0xb41a,	// (0x000396c3) list_single_graphic_popup_conf2_pane_g1

0xacd5,	// (0x00038f7e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0003d7a0) list_single_graphic_popup_conf2_pane_g

0xb424,	// (0x000396cd) list_single_graphic_popup_conf2_pane_t1

0xb432,	// (0x000396db) bg_popup_call2_act_pane_cp01_ParamLimits

0xb432,	// (0x000396db) bg_popup_call2_act_pane_cp01

0xb4bc,	// (0x00039765) call_type_pane_cp05_ParamLimits

0xb4bc,	// (0x00039765) call_type_pane_cp05

0xb510,	// (0x000397b9) popup_call2_audio_second_window_g1_ParamLimits

0xb510,	// (0x000397b9) popup_call2_audio_second_window_g1

0xb564,	// (0x0003980d) popup_call2_audio_second_window_g2_ParamLimits

0xb564,	// (0x0003980d) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0003d7a5) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0003d7a5) popup_call2_audio_second_window_g

0xb5c9,	// (0x00039872) popup_call2_audio_second_window_t1_ParamLimits

0xb5c9,	// (0x00039872) popup_call2_audio_second_window_t1

0xb684,	// (0x0003992d) popup_call2_audio_second_window_t2_ParamLimits

0xb684,	// (0x0003992d) popup_call2_audio_second_window_t2

0xb6d7,	// (0x00039980) popup_call2_audio_second_window_t3_ParamLimits

0xb6d7,	// (0x00039980) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0003d7ac) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0003d7ac) popup_call2_audio_second_window_t

0xa02e,	// (0x000382d7) bg_popup_call2_in_pane_cp02

0xa038,	// (0x000382e1) call_type_pane_cp04

0xa040,	// (0x000382e9) popup_call2_audio_wait_window_g1

0xa048,	// (0x000382f1) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0003d387) popup_call2_audio_wait_window_g

0xa050,	// (0x000382f9) popup_call2_audio_wait_window_t3

0xb7ca,	// (0x00039a73) bg_popup_call2_act_pane_ParamLimits

0xb7ca,	// (0x00039a73) bg_popup_call2_act_pane

0xb88a,	// (0x00039b33) call_type_pane_cp03_ParamLimits

0xb88a,	// (0x00039b33) call_type_pane_cp03

0xb8ee,	// (0x00039b97) popup_call2_audio_first_window_g1_ParamLimits

0xb8ee,	// (0x00039b97) popup_call2_audio_first_window_g1

0xb95e,	// (0x00039c07) popup_call2_audio_first_window_g2_ParamLimits

0xb95e,	// (0x00039c07) popup_call2_audio_first_window_g2

0xb054,	// (0x000392fd) popup_call2_audio_first_window_g3_ParamLimits

0xb054,	// (0x000392fd) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0003d7b5) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0003d7b5) popup_call2_audio_first_window_g

0xba3c,	// (0x00039ce5) popup_call2_audio_first_window_t1_ParamLimits

0xba3c,	// (0x00039ce5) popup_call2_audio_first_window_t1

0xbb3f,	// (0x00039de8) popup_call2_audio_first_window_t4_ParamLimits

0xbb3f,	// (0x00039de8) popup_call2_audio_first_window_t4

0xbc22,	// (0x00039ecb) popup_call2_audio_first_window_t5_ParamLimits

0xbc22,	// (0x00039ecb) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0003d7c0) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0003d7c0) popup_call2_audio_first_window_t

0xa281,	// (0x0003852a) bg_popup_call2_act_pane_g1

0xc2c9,	// (0x0003a572) popup_cale_lunar_info_window_t1

0xc2d7,	// (0x0003a580) popup_cale_lunar_info_window_t2

0xc2e5,	// (0x0003a58e) popup_cale_lunar_info_window_t3

0xa02e,	// (0x000382d7) bg_popup_call2_bubble_pane

0xbd23,	// (0x00039fcc) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd23,	// (0x00039fcc) bg_popup_call2_in_pane_cp01

0x9d0a,	// (0x00037fb3) call_type_pane_cp02

0xbd6b,	// (0x0003a014) popup_call2_audio_out_window_g1_ParamLimits

0xbd6b,	// (0x0003a014) popup_call2_audio_out_window_g1

0xbd97,	// (0x0003a040) popup_call2_audio_out_window_g2_ParamLimits

0xbd97,	// (0x0003a040) popup_call2_audio_out_window_g2

0xbdbf,	// (0x0003a068) popup_call2_audio_out_window_g3_ParamLimits

0xbdbf,	// (0x0003a068) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0003d7c9) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0003d7c9) popup_call2_audio_out_window_g

0xbdfa,	// (0x0003a0a3) popup_call2_audio_out_window_t1_ParamLimits

0xbdfa,	// (0x0003a0a3) popup_call2_audio_out_window_t1

0xbe59,	// (0x0003a102) popup_call2_audio_out_window_t2_ParamLimits

0xbe59,	// (0x0003a102) popup_call2_audio_out_window_t2

0xbead,	// (0x0003a156) popup_call2_audio_out_window_t3_ParamLimits

0xbead,	// (0x0003a156) popup_call2_audio_out_window_t3

0xbec3,	// (0x0003a16c) popup_call2_audio_out_window_t4_ParamLimits

0xbec3,	// (0x0003a16c) popup_call2_audio_out_window_t4

0xbed9,	// (0x0003a182) popup_call2_audio_out_window_t5_ParamLimits

0xbed9,	// (0x0003a182) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0003d7d2) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0003d7d2) popup_call2_audio_out_window_t

0xbf3d,	// (0x0003a1e6) bg_popup_call2_in_pane_ParamLimits

0xbf3d,	// (0x0003a1e6) bg_popup_call2_in_pane

0xbf99,	// (0x0003a242) popup_call2_audio_in_window_g1_ParamLimits

0xbf99,	// (0x0003a242) popup_call2_audio_in_window_g1

0xbfd1,	// (0x0003a27a) popup_call2_audio_in_window_g2_ParamLimits

0xbfd1,	// (0x0003a27a) popup_call2_audio_in_window_g2

0xc009,	// (0x0003a2b2) popup_call2_audio_in_window_g3_ParamLimits

0xc009,	// (0x0003a2b2) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0003d7df) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0003d7df) popup_call2_audio_in_window_g

0xc061,	// (0x0003a30a) popup_call2_audio_in_window_t1_ParamLimits

0xc061,	// (0x0003a30a) popup_call2_audio_in_window_t1

0xc0e1,	// (0x0003a38a) popup_call2_audio_in_window_t2_ParamLimits

0xc0e1,	// (0x0003a38a) popup_call2_audio_in_window_t2

0xc161,	// (0x0003a40a) popup_call2_audio_in_window_t3_ParamLimits

0xc161,	// (0x0003a40a) popup_call2_audio_in_window_t3

0xc17b,	// (0x0003a424) popup_call2_audio_in_window_t4_ParamLimits

0xc17b,	// (0x0003a424) popup_call2_audio_in_window_t4

0xc18d,	// (0x0003a436) popup_call2_audio_in_window_t5_ParamLimits

0xc18d,	// (0x0003a436) popup_call2_audio_in_window_t5

0xc19f,	// (0x0003a448) popup_call2_audio_in_window_t6_ParamLimits

0xc19f,	// (0x0003a448) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0003d7e8) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0003d7e8) popup_call2_audio_in_window_t

0xa281,	// (0x0003852a) bg_popup_call2_in_pane_g1

0xc2f3,	// (0x0003a59c) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0003d863) popup_cale_lunar_info_window_t

0xa289,	// (0x00038532) bg_popup_call2_rect_pane_ParamLimits

0xa289,	// (0x00038532) bg_popup_call2_rect_pane

0xa02e,	// (0x000382d7) call2_cli_visual_graphic_pane

0xa02e,	// (0x000382d7) call2_cli_visual_text_pane

0x4acf,	// (0x00032d78) smil_status_volume_pane_g3

0x0002,

0xa3af,	// (0x00038658) call2_cli_visual_graphic_pane_g1

0xa3af,	// (0x00038658) call2_cli_visual_graphic_pane_g2

0xa3af,	// (0x00038658) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0003d7f5) call2_cli_visual_graphic_pane_g

0xc1b1,	// (0x0003a45a) bg_popup_call2_rect_pane_g1

0xa444,	// (0x000386ed) bg_popup_call2_rect_pane_g2

0xc1b9,	// (0x0003a462) bg_popup_call2_rect_pane_g3

0xc1c1,	// (0x0003a46a) bg_popup_call2_rect_pane_g4

0xc1c9,	// (0x0003a472) bg_popup_call2_rect_pane_g5

0xc1d1,	// (0x0003a47a) bg_popup_call2_rect_pane_g6

0xc1d9,	// (0x0003a482) bg_popup_call2_rect_pane_g7

0xc1e1,	// (0x0003a48a) bg_popup_call2_rect_pane_g8

0xc1e9,	// (0x0003a492) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0003d7fc) bg_popup_call2_rect_pane_g

0xc1f1,	// (0x0003a49a) bg_popup_call2_bubble_pane_g1

0xc1f9,	// (0x0003a4a2) bg_popup_call2_bubble_pane_g2

0xc201,	// (0x0003a4aa) bg_popup_call2_bubble_pane_g3

0xc209,	// (0x0003a4b2) bg_popup_call2_bubble_pane_g4

0xc211,	// (0x0003a4ba) bg_popup_call2_bubble_pane_g5

0xc219,	// (0x0003a4c2) bg_popup_call2_bubble_pane_g6

0xc221,	// (0x0003a4ca) bg_popup_call2_bubble_pane_g7

0xc229,	// (0x0003a4d2) bg_popup_call2_bubble_pane_g8

0xc231,	// (0x0003a4da) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0003d80f) bg_popup_call2_bubble_pane_g

0x1f4c,	// (0x000301f5) aid_cale_week_size_cell_pane

0x250f,	// (0x000307b8) aid_cams_cif_uncrop_pane_ParamLimits

0x250f,	// (0x000307b8) aid_cams_cif_uncrop_pane

0x26c4,	// (0x0003096d) aid_cams_size_cell_ParamLimits

0x26c4,	// (0x0003096d) aid_cams_size_cell

0x26d8,	// (0x00030981) grid_cams_pane_ParamLimits

0x26f2,	// (0x0003099b) linegrid_cams_pane_ParamLimits

0x28ef,	// (0x00030b98) call_video_pane_t1

0x290d,	// (0x00030bb6) call_video_pane_t2

0x0001,

0xf253,	// (0x0003d4fc) call_video_pane_t

0x2d33,	// (0x00030fdc) aid_cale_month_size_cell_pane_ParamLimits

0x2d33,	// (0x00030fdc) aid_cale_month_size_cell_pane

0xf603,	// (0x0003d8ac) smil_status_volume_pane_g

0x4adc,	// (0x00032d85) volume_smil_pane_ParamLimits

0x1aa5,	// (0x0002fd4e) aid_popup2_width_pane

0x1e88,	// (0x00030131) cell_qdial_pane_g4_ParamLimits

0x1e88,	// (0x00030131) cell_qdial_pane_g4

0x3a85,	// (0x00031d2e) aid_blid_cardinal_pane_ParamLimits

0x3a91,	// (0x00031d3a) aid_blid_destination_pane_ParamLimits

0x3a91,	// (0x00031d3a) aid_blid_destination_pane

0xa289,	// (0x00038532) bg_popup_call_poc_act_pane_ParamLimits

0xa289,	// (0x00038532) bg_popup_call_poc_act_pane

0xa289,	// (0x00038532) bg_popup_call_poc_inact_pane_ParamLimits

0xa289,	// (0x00038532) bg_popup_call_poc_inact_pane

0xc239,	// (0x0003a4e2) bg_popup_call_poc_act_pane_g1

0xc241,	// (0x0003a4ea) bg_popup_call_poc_act_pane_g2

0xc249,	// (0x0003a4f2) bg_popup_call_poc_act_pane_g3

0xc209,	// (0x0003a4b2) bg_popup_call_poc_act_pane_g4

0xc211,	// (0x0003a4ba) bg_popup_call_poc_act_pane_g5

0xc251,	// (0x0003a4fa) bg_popup_call_poc_act_pane_g6

0xc221,	// (0x0003a4ca) bg_popup_call_poc_act_pane_g7

0xc259,	// (0x0003a502) bg_popup_call_poc_act_pane_g8

0xa02e,	// (0x000382d7) main_usb_pane

0x49aa,	// (0x00032c53) popup_cale_lunar_info_window

0x2bd9,	// (0x00030e82) im_reading_pane_t1_ParamLimits

0xa655,	// (0x000388fe) list_im_pane_ParamLimits

0xa666,	// (0x0003890f) scroll_pane_cp07_ParamLimits

0xa02e,	// (0x000382d7) grid_highlight_pane_cp012

0xa289,	// (0x00038532) mup_scale_pane_ParamLimits

0xb140,	// (0x000393e9) main_usb_pane_g1_ParamLimits

0xb140,	// (0x000393e9) main_usb_pane_g1

0x46c5,	// (0x0003296e) main_usb_pane_g2_ParamLimits

0x46c5,	// (0x0003296e) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0003d84c) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0003d84c) main_usb_pane_g

0x46db,	// (0x00032984) main_usb_pane_t1_ParamLimits

0x46db,	// (0x00032984) main_usb_pane_t1

0x46ed,	// (0x00032996) main_usb_pane_t2_ParamLimits

0x46ed,	// (0x00032996) main_usb_pane_t2

0x46ff,	// (0x000329a8) main_usb_pane_t3_ParamLimits

0x46ff,	// (0x000329a8) main_usb_pane_t3

0x4711,	// (0x000329ba) main_usb_pane_t4_ParamLimits

0x4711,	// (0x000329ba) main_usb_pane_t4

0x4723,	// (0x000329cc) main_usb_pane_t5_ParamLimits

0x4723,	// (0x000329cc) main_usb_pane_t5

0x4735,	// (0x000329de) main_usb_pane_t6_ParamLimits

0x4735,	// (0x000329de) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0003d851) main_usb_pane_t_ParamLimits

0x3a34,	// (0x00031cdd) aid_text_placing

0x3a3d,	// (0x00031ce6) main_location2_pane_t1_ParamLimits

0x3a4f,	// (0x00031cf8) main_location2_pane_t2_ParamLimits

0x3a61,	// (0x00031d0a) main_location2_pane_t3_ParamLimits

0x3a73,	// (0x00031d1c) main_location2_pane_t4_ParamLimits

0x3a73,	// (0x00031d1c) main_location2_pane_t4

0xf3b4,	// (0x0003d65d) main_location2_pane_t_ParamLimits

0xa2c5,	// (0x0003856e) find_pinb_pane_g2_ParamLimits

0xa2c5,	// (0x0003856e) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0003d3ad) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0003d3ad) find_pinb_pane_g

0xa2d1,	// (0x0003857a) find_pinb_pane_t1_ParamLimits

0xa2e3,	// (0x0003858c) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0003d3b2) find_pinb_pane_t_ParamLimits

0xa02e,	// (0x000382d7) main_call3_pane

0x321a,	// (0x000314c3) cale_month_day_heading_pane_t1_ParamLimits

0x325c,	// (0x00031505) cale_month_day_heading_pane_t2_ParamLimits

0x3291,	// (0x0003153a) cale_month_day_heading_pane_t3_ParamLimits

0x32c6,	// (0x0003156f) cale_month_day_heading_pane_t4_ParamLimits

0x3303,	// (0x000315ac) cale_month_day_heading_pane_t5_ParamLimits

0x3348,	// (0x000315f1) cale_month_day_heading_pane_t6_ParamLimits

0x338d,	// (0x00031636) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0003d534) cale_month_day_heading_pane_t_ParamLimits

0xa8b0,	// (0x00038b59) smil_status_volume_pane

0x41be,	// (0x00032467) postcard_address_pane_ParamLimits

0x41be,	// (0x00032467) postcard_address_pane

0x41d0,	// (0x00032479) postcard_message_pane_ParamLimits

0x41d0,	// (0x00032479) postcard_message_pane

0x46a2,	// (0x0003294b) call2_cli_visual_pane_t1_ParamLimits

0x46a2,	// (0x0003294b) call2_cli_visual_pane_t1

0x4c91,	// (0x00032f3a) postcard_message_pane_t1_ParamLimits

0x4c91,	// (0x00032f3a) postcard_message_pane_t1

0x4c7a,	// (0x00032f23) postcard_address_pane_t1_ParamLimits

0x4c7a,	// (0x00032f23) postcard_address_pane_t1

0x4c66,	// (0x00032f0f) popup_call3_audio_in_window_ParamLimits

0x4c66,	// (0x00032f0f) popup_call3_audio_in_window

0x4af1,	// (0x00032d9a) bg_popup_call3_in_pane_ParamLimits

0x4af1,	// (0x00032d9a) bg_popup_call3_in_pane

0x4b67,	// (0x00032e10) popup_call3_audio_in_window_g1_ParamLimits

0x4b67,	// (0x00032e10) popup_call3_audio_in_window_g1

0x4b87,	// (0x00032e30) popup_call3_audio_in_window_g2_ParamLimits

0x4b87,	// (0x00032e30) popup_call3_audio_in_window_g2

0x4ba7,	// (0x00032e50) popup_call3_audio_in_window_g3_ParamLimits

0x4ba7,	// (0x00032e50) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0003d8b3) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0003d8b3) popup_call3_audio_in_window_g

0x4bd8,	// (0x00032e81) popup_call3_audio_in_window_t1_ParamLimits

0x4bd8,	// (0x00032e81) popup_call3_audio_in_window_t1

0x4c16,	// (0x00032ebf) popup_call3_audio_in_window_t2_ParamLimits

0x4c16,	// (0x00032ebf) popup_call3_audio_in_window_t2

0x4c54,	// (0x00032efd) popup_call3_audio_in_window_t3_ParamLimits

0x4c54,	// (0x00032efd) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0003d8bc) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0003d8bc) popup_call3_audio_in_window_t

0xa554,	// (0x000387fd) bg_popup_call3_rect_pane

0xc1b1,	// (0x0003a45a) bg_popup_call3_rect_pane_g1

0xa444,	// (0x000386ed) bg_popup_call3_rect_pane_g2

0xc1b9,	// (0x0003a462) bg_popup_call3_rect_pane_g3

0xc1c1,	// (0x0003a46a) bg_popup_call3_rect_pane_g4

0xc1c9,	// (0x0003a472) bg_popup_call3_rect_pane_g5

0xc1d1,	// (0x0003a47a) bg_popup_call3_rect_pane_g6

0xc1d9,	// (0x0003a482) bg_popup_call3_rect_pane_g7

0x3d7d,	// (0x00032026) mup_visualizer_osc_pane

0xb062,	// (0x0003930b) mup_visualizer_spec_pane

0x4b21,	// (0x00032dca) call3_video_qcif_pane_ParamLimits

0x4b21,	// (0x00032dca) call3_video_qcif_pane

0x4b34,	// (0x00032ddd) call3_video_qcif_uncrop_pane_ParamLimits

0x4b34,	// (0x00032ddd) call3_video_qcif_uncrop_pane

0x4b42,	// (0x00032deb) call3_video_subqcif_pane_ParamLimits

0x4b42,	// (0x00032deb) call3_video_subqcif_pane

0x4b56,	// (0x00032dff) call3_video_subqcif_uncrop_pane_ParamLimits

0x4b56,	// (0x00032dff) call3_video_subqcif_uncrop_pane

0x4bc7,	// (0x00032e70) popup_call3_audio_in_window_g4_ParamLimits

0x4bc7,	// (0x00032e70) popup_call3_audio_in_window_g4

0x4abe,	// (0x00032d67) mup_spec_half_pane

0x4ac7,	// (0x00032d70) mup_spec_half_pane_cp

0xc456,	// (0x0003a6ff) mup_osc_middle_pane

0xc45f,	// (0x0003a708) mup_visualizer_osc_pane_g1

0x4a9e,	// (0x00032d47) mup_spec_bar_pane_ParamLimits

0x4a9e,	// (0x00032d47) mup_spec_bar_pane

0xc443,	// (0x0003a6ec) mup_spec_bar_pane_g1

0xc44d,	// (0x0003a6f6) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0003d8a7) mup_spec_bar_pane_g

0x1f4c,	// (0x000301f5) aid_cale_week_size_cell_pane_ParamLimits

0x1f66,	// (0x0003020f) bg_cale_heading_pane_ParamLimits

0xa4ad,	// (0x00038756) bg_cale_pane_cp01_ParamLimits

0x1f7e,	// (0x00030227) cale_week_corner_pane_ParamLimits

0x1f9d,	// (0x00030246) cale_week_day_heading_pane_ParamLimits

0x1fba,	// (0x00030263) cale_week_scroll_pane_g1_ParamLimits

0x1fcd,	// (0x00030276) cale_week_scroll_pane_g2_ParamLimits

0x1fe5,	// (0x0003028e) cale_week_scroll_pane_g3_ParamLimits

0x1ffd,	// (0x000302a6) cale_week_scroll_pane_g4_ParamLimits

0x2015,	// (0x000302be) cale_week_scroll_pane_g5_ParamLimits

0x2035,	// (0x000302de) cale_week_scroll_pane_g6_ParamLimits

0x2055,	// (0x000302fe) cale_week_scroll_pane_g7_ParamLimits

0x2075,	// (0x0003031e) cale_week_scroll_pane_g8_ParamLimits

0x2099,	// (0x00030342) cale_week_scroll_pane_g9_ParamLimits

0x20b1,	// (0x0003035a) cale_week_scroll_pane_g10_ParamLimits

0x20c9,	// (0x00030372) cale_week_scroll_pane_g11_ParamLimits

0x20e1,	// (0x0003038a) cale_week_scroll_pane_g12_ParamLimits

0x20f9,	// (0x000303a2) cale_week_scroll_pane_g13_ParamLimits

0x20f9,	// (0x000303a2) cale_week_scroll_pane_g14_ParamLimits

0x20f9,	// (0x000303a2) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0003d43e) cale_week_scroll_pane_g_ParamLimits

0x2135,	// (0x000303de) cale_week_time_pane_ParamLimits

0x2159,	// (0x00030402) grid_cale_week_pane_ParamLimits

0xa4ca,	// (0x00038773) listscroll_cale_week_pane_t1

0xa4dc,	// (0x00038785) scroll_pane_cp08_ParamLimits

0x2d93,	// (0x0003103c) cale_month_corner_pane_ParamLimits

0xa886,	// (0x00038b2f) cale_month_pane_t1

0x31ad,	// (0x00031456) cale_month_week_pane_ParamLimits

0x37f6,	// (0x00031a9f) popup_call_status_window_g1_ParamLimits

0x380a,	// (0x00031ab3) popup_call_status_window_g2_ParamLimits

0x381e,	// (0x00031ac7) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0003d5e4) popup_call_status_window_g_ParamLimits

0xac44,	// (0x00038eed) aid_call2_pane

0x3ff4,	// (0x0003229d) msg_header_pane_g1

0x41be,	// (0x00032467) postcard_address2_pane_ParamLimits

0x41be,	// (0x00032467) postcard_address2_pane

0x41d0,	// (0x00032479) postcard_message2_pane_ParamLimits

0x41d0,	// (0x00032479) postcard_message2_pane

0x4a4e,	// (0x00032cf7) message2_row_pane_ParamLimits

0x4a4e,	// (0x00032cf7) message2_row_pane

0x4a6b,	// (0x00032d14) address2_row_pane_ParamLimits

0x4a6b,	// (0x00032d14) address2_row_pane

0xc411,	// (0x0003a6ba) postcard_message2_row_pane_g1

0xc419,	// (0x0003a6c2) postcard_message2_row_pane_t1

0xc411,	// (0x0003a6ba) address2_row_pane_g1

0xc419,	// (0x0003a6c2) address2_row_pane_t1

0x23bd,	// (0x00030666) aid_size_cell_vorec

0xa02e,	// (0x000382d7) main_rss_pane

0x4a7e,	// (0x00032d27) rss_list_single_pane_ParamLimits

0x4a7e,	// (0x00032d27) rss_list_single_pane

0xc427,	// (0x0003a6d0) rss_list_single_pane_t1

0xc435,	// (0x0003a6de) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0003d8a2) rss_list_single_pane_t

0xa02e,	// (0x000382d7) main_camera2_pane

0xa02e,	// (0x000382d7) main_video2_pane

0x0989,	// (0x0002ec32) cams_zoom_pane_cp2_ParamLimits

0x0989,	// (0x0002ec32) cams_zoom_pane_cp2

0x09a9,	// (0x0002ec52) image2_vga_pane_ParamLimits

0x09a9,	// (0x0002ec52) image2_vga_pane

0x09fa,	// (0x0002eca3) main_camera2_pane_g1_ParamLimits

0x09fa,	// (0x0002eca3) main_camera2_pane_g1

0x0a1a,	// (0x0002ecc3) main_camera2_pane_g2_ParamLimits

0x0a1a,	// (0x0002ecc3) main_camera2_pane_g2

0x0a3a,	// (0x0002ece3) main_camera2_pane_g3_ParamLimits

0x0a3a,	// (0x0002ece3) main_camera2_pane_g3

0x0a5a,	// (0x0002ed03) main_camera2_pane_g4_ParamLimits

0x0a5a,	// (0x0002ed03) main_camera2_pane_g4

0x0a7a,	// (0x0002ed23) main_camera2_pane_g5_ParamLimits

0x0a7a,	// (0x0002ed23) main_camera2_pane_g5

0x0a9a,	// (0x0002ed43) main_camera2_pane_g6_ParamLimits

0x0a9a,	// (0x0002ed43) main_camera2_pane_g6

0x0aba,	// (0x0002ed63) main_camera2_pane_g7_ParamLimits

0x0aba,	// (0x0002ed63) main_camera2_pane_g7

0x0ada,	// (0x0002ed83) main_camera2_pane_g8_ParamLimits

0x0ada,	// (0x0002ed83) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0003d8c3) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0003d8c3) main_camera2_pane_g

0x0b1a,	// (0x0002edc3) main_camera2_pane_t1_ParamLimits

0x0b1a,	// (0x0002edc3) main_camera2_pane_t1

0x0b4f,	// (0x0002edf8) main_camera2_pane_t2_ParamLimits

0x0b4f,	// (0x0002edf8) main_camera2_pane_t2

0x0b75,	// (0x0002ee1e) main_camera2_pane_t3_ParamLimits

0x0b75,	// (0x0002ee1e) main_camera2_pane_t3

0x0bd3,	// (0x0002ee7c) main_camera2_pane_t4_ParamLimits

0x0bd3,	// (0x0002ee7c) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0003d8d6) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0003d8d6) main_camera2_pane_t

0x0c65,	// (0x0002ef0e) cams_zoom_pane_cp4_ParamLimits

0x0c65,	// (0x0002ef0e) cams_zoom_pane_cp4

0x0c7b,	// (0x0002ef24) image2_cif_pane_ParamLimits

0x0c7b,	// (0x0002ef24) image2_cif_pane

0x0ca6,	// (0x0002ef4f) image2_subqcif_pane_ParamLimits

0x0ca6,	// (0x0002ef4f) image2_subqcif_pane

0x0cc0,	// (0x0002ef69) main_video2_pane_g1_ParamLimits

0x0cc0,	// (0x0002ef69) main_video2_pane_g1

0x0cda,	// (0x0002ef83) main_video2_pane_g2_ParamLimits

0x0cda,	// (0x0002ef83) main_video2_pane_g2

0x0cf0,	// (0x0002ef99) main_video2_pane_g3_ParamLimits

0x0cf0,	// (0x0002ef99) main_video2_pane_g3

0x0d06,	// (0x0002efaf) main_video2_pane_g4_ParamLimits

0x0d06,	// (0x0002efaf) main_video2_pane_g4

0x0d1c,	// (0x0002efc5) main_video2_pane_g5_ParamLimits

0x0d1c,	// (0x0002efc5) main_video2_pane_g5

0x0d32,	// (0x0002efdb) main_video2_pane_g6_ParamLimits

0x0d32,	// (0x0002efdb) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0003d8e5) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0003d8e5) main_video2_pane_g

0x0d4c,	// (0x0002eff5) main_video2_pane_t1_ParamLimits

0x0d4c,	// (0x0002eff5) main_video2_pane_t1

0x0d70,	// (0x0002f019) main_video2_pane_t2_ParamLimits

0x0d70,	// (0x0002f019) main_video2_pane_t2

0x0dbe,	// (0x0002f067) main_video2_pane_t3_ParamLimits

0x0dbe,	// (0x0002f067) main_video2_pane_t3

0x0002,

0xf649,	// (0x0003d8f2) main_video2_pane_t_ParamLimits

0xf649,	// (0x0003d8f2) main_video2_pane_t

0x47f0,	// (0x00032a99) call_muted_g2

0x0001,

0xf5eb,	// (0x0003d894) call_muted_g

0xa02e,	// (0x000382d7) main_mup2_pane

0x4cdc,	// (0x00032f85) main_mup2_pane_g1_ParamLimits

0x4cdc,	// (0x00032f85) main_mup2_pane_g1

0x4ce8,	// (0x00032f91) main_mup2_pane_g2_ParamLimits

0x4ce8,	// (0x00032f91) main_mup2_pane_g2

0x4f57,	// (0x00033200) main_mup_pane_g13_cp1

0x4f5f,	// (0x00033208) mup_volume_pane_cp1

0x4d04,	// (0x00032fad) main_mup2_pane_g4_ParamLimits

0x4d04,	// (0x00032fad) main_mup2_pane_g4

0x4d16,	// (0x00032fbf) main_mup2_pane_g5_ParamLimits

0x4d16,	// (0x00032fbf) main_mup2_pane_g5

0x4d28,	// (0x00032fd1) main_mup2_pane_g6_ParamLimits

0x4d28,	// (0x00032fd1) main_mup2_pane_g6

0x4d3a,	// (0x00032fe3) main_mup2_pane_g7_ParamLimits

0x4d3a,	// (0x00032fe3) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0003d8f9) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0003d8f9) main_mup2_pane_g

0x4d52,	// (0x00032ffb) main_mup2_pane_t1_ParamLimits

0x4d52,	// (0x00032ffb) main_mup2_pane_t1

0x4d68,	// (0x00033011) main_mup2_pane_t2_ParamLimits

0x4d68,	// (0x00033011) main_mup2_pane_t2

0x4d7e,	// (0x00033027) main_mup2_pane_t3_ParamLimits

0x4d7e,	// (0x00033027) main_mup2_pane_t3

0x4d94,	// (0x0003303d) main_mup2_pane_t4_ParamLimits

0x4d94,	// (0x0003303d) main_mup2_pane_t4

0x4dac,	// (0x00033055) main_mup2_pane_t5_ParamLimits

0x4dac,	// (0x00033055) main_mup2_pane_t5

0x4dc4,	// (0x0003306d) main_mup2_pane_t6_ParamLimits

0x4dc4,	// (0x0003306d) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0003d908) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0003d908) main_mup2_pane_t

0x4df4,	// (0x0003309d) mup2_visualizer_pane_ParamLimits

0x4df4,	// (0x0003309d) mup2_visualizer_pane

0x4e22,	// (0x000330cb) mup_progress_pane_cp_ParamLimits

0x4e22,	// (0x000330cb) mup_progress_pane_cp

0x4f42,	// (0x000331eb) mup_volume_pane_cp_ParamLimits

0x4f42,	// (0x000331eb) mup_volume_pane_cp

0x4e36,	// (0x000330df) mup2_visualizer_pane_g1_ParamLimits

0x4e36,	// (0x000330df) mup2_visualizer_pane_g1

0xc496,	// (0x0003a73f) mup2_visualizer_pane_g2_ParamLimits

0xc496,	// (0x0003a73f) mup2_visualizer_pane_g2

0x4e4d,	// (0x000330f6) mup2_visualizer_pane_g3_ParamLimits

0x4e4d,	// (0x000330f6) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0003d915) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0003d915) mup2_visualizer_pane_g

0xb289,	// (0x00039532) aid_size_cell_fmradio

0x0677,	// (0x0002e920) aid_height_parent_landcape

0xa6e4,	// (0x0003898d) wml_content_pane_cp

0xa6ec,	// (0x00038995) wml_tabs_pane

0xa6f5,	// (0x0003899e) popup_wml_miniature_window

0xa6fd,	// (0x000389a6) scroll_pane_cp021

0xa711,	// (0x000389ba) wml_content_pane_comp8

0xa02e,	// (0x000382d7) bg_popup_sub_pane_cp05

0xc4b4,	// (0x0003a75d) popup_wml_miniature_window_g1

0xc4bc,	// (0x0003a765) wml_miniature_view_pane

0x4e59,	// (0x00033102) aid_size_wml_view

0x4e61,	// (0x0003310a) wml_miniature_view_pane_g1

0x4e6a,	// (0x00033113) wml_miniature_view_pane_g2

0x4e73,	// (0x0003311c) wml_miniature_view_pane_g3

0x4e7b,	// (0x00033124) wml_miniature_view_pane_g4

0x4e83,	// (0x0003312c) wml_miniature_view_pane_g5

0x4e8b,	// (0x00033134) wml_miniature_view_pane_g6

0x4e93,	// (0x0003313c) wml_miniature_view_pane_g7

0x4e9b,	// (0x00033144) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0003d91c) wml_miniature_view_pane_g

0xc4c4,	// (0x0003a76d) background_graphic_ParamLimits

0xc4c4,	// (0x0003a76d) background_graphic

0xc4d0,	// (0x0003a779) wml_tabs_2_pane

0xc4d9,	// (0x0003a782) wml_tabs_3_pane_ParamLimits

0xc4d9,	// (0x0003a782) wml_tabs_3_pane

0xc4eb,	// (0x0003a794) wml_tabs_4_pane_ParamLimits

0xc4eb,	// (0x0003a794) wml_tabs_4_pane

0xc501,	// (0x0003a7aa) wml_tabs_5_pane_ParamLimits

0xc501,	// (0x0003a7aa) wml_tabs_5_pane

0xc51b,	// (0x0003a7c4) wml_tabs_pane_g2_ParamLimits

0xc51b,	// (0x0003a7c4) wml_tabs_pane_g2

0xc52f,	// (0x0003a7d8) wml_tabs_pane_g3_ParamLimits

0xc52f,	// (0x0003a7d8) wml_tabs_pane_g3

0x4ea3,	// (0x0003314c) wml_tabs_2_active_pane_ParamLimits

0x4ea3,	// (0x0003314c) wml_tabs_2_active_pane

0x4eb7,	// (0x00033160) wml_tabs_2_passive_pane_ParamLimits

0x4eb7,	// (0x00033160) wml_tabs_2_passive_pane

0x4ecb,	// (0x00033174) wml_tabs_3_active_pane_cp_ParamLimits

0x4ecb,	// (0x00033174) wml_tabs_3_active_pane_cp

0x4ee0,	// (0x00033189) wml_tabs_3_passive_pane_ParamLimits

0x4ee0,	// (0x00033189) wml_tabs_3_passive_pane

0x4ef3,	// (0x0003319c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ef3,	// (0x0003319c) wml_tabs_3_passive_pane_cp

0x4f0a,	// (0x000331b3) tabs_4_active_pane

0x4f12,	// (0x000331bb) tabs_4_passive_pane

0x4f1c,	// (0x000331c5) tabs_4_passive_pane_cp

0x4f24,	// (0x000331cd) tabs_4_passive_pane_cp2

0x46bd,	// (0x00032966) aid_height_text

0x3d4f,	// (0x00031ff8) mup_volume_cont_pane_ParamLimits

0x3d4f,	// (0x00031ff8) mup_volume_cont_pane

0x1c1f,	// (0x0002fec8) aid_size_cell_pinb

0x1c29,	// (0x0002fed2) aid_size_list_pinb

0x4e0e,	// (0x000330b7) mup2_volume_cont_pane_ParamLimits

0x4e0e,	// (0x000330b7) mup2_volume_cont_pane

0x4f2e,	// (0x000331d7) mup2_volume_cont_pane_g1_ParamLimits

0x4f2e,	// (0x000331d7) mup2_volume_cont_pane_g1

0x01c6,	// (0x0002e46f) aid_size_cell_touch_ParamLimits

0x01c6,	// (0x0002e46f) aid_size_cell_touch

0x03ae,	// (0x0002e657) touch_pane_ParamLimits

0x03ae,	// (0x0002e657) touch_pane

0x1b56,	// (0x0002fdff) main_rss2_pane

0xc54c,	// (0x0003a7f5) listscroll_rss2_pane

0xc555,	// (0x0003a7fe) rss2_navigation_pane

0xc55d,	// (0x0003a806) list_rss2_pane

0xad69,	// (0x00039012) scroll_pane_cp22

0xc565,	// (0x0003a80e) rss2_navigation_pane_g1

0xc56e,	// (0x0003a817) rss2_navigation_pane_g2

0xc576,	// (0x0003a81f) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0003d92d) rss2_navigation_pane_g

0xc57e,	// (0x0003a827) rss2_navigation_pane_t1

0x4f67,	// (0x00033210) rss2_list_single_pane_ParamLimits

0x4f67,	// (0x00033210) rss2_list_single_pane

0xc58c,	// (0x0003a835) rss2_list_single_pane_t2

0xc59a,	// (0x0003a843) rss2_list_single_pane_t3_ParamLimits

0xc59a,	// (0x0003a843) rss2_list_single_pane_t3

0xc5b7,	// (0x0003a860) rss2_list_single_pane_t4

0x35df,	// (0x00031888) smil_status_pane_g1

0x1b3c,	// (0x0002fde5) main_image2_pane_ParamLimits

0x1b3c,	// (0x0002fde5) main_image2_pane

0x0afa,	// (0x0002eda3) main_camera2_pane_g9_ParamLimits

0x0afa,	// (0x0002eda3) main_camera2_pane_g9

0x0c28,	// (0x0002eed1) main_camera2_pane_t5_ParamLimits

0x0c28,	// (0x0002eed1) main_camera2_pane_t5

0x4cac,	// (0x00032f55) main_camera2_pane_t6_ParamLimits

0x4cac,	// (0x00032f55) main_camera2_pane_t6

0x4f7d,	// (0x00033226) main_image2_pane_g1_ParamLimits

0x4f7d,	// (0x00033226) main_image2_pane_g1

0x43f8,	// (0x000326a1) smil2_video_pane_ParamLimits

0x43f8,	// (0x000326a1) smil2_video_pane

0x1ab1,	// (0x0002fd5a) aid_zoom_text_primary_cp

0x1b32,	// (0x0002fddb) popup_preview_fixed_window

0xa64d,	// (0x000388f6) im_reading_pane_g1

0x0971,	// (0x0002ec1a) cams2_bc_adjust_pane_cp_ParamLimits

0x0971,	// (0x0002ec1a) cams2_bc_adjust_pane_cp

0x0c57,	// (0x0002ef00) cams2_bc_adjust_pane_ParamLimits

0x0c57,	// (0x0002ef00) cams2_bc_adjust_pane

0xd06b,	// (0x0003b314) cams2_bc_adjust_pane_g1

0x4f93,	// (0x0003323c) cams2_slider_pane

0x4f9c,	// (0x00033245) cams2_slider_pane_g1

0x4fa5,	// (0x0003324e) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0003d934) cams2_slider_pane_g

0x041e,	// (0x0002e6c7) calc_display_pane_ParamLimits

0x0443,	// (0x0002e6ec) calc_paper_pane_ParamLimits

0x0466,	// (0x0002e70f) grid_calc_pane_ParamLimits

0x387f,	// (0x00031b28) popup_clock_digital_window_t1_ParamLimits

0xb226,	// (0x000394cf) main_image_pane_t1

0x0400,	// (0x0002e6a9) aid_size_cell_calc_ParamLimits

0x0400,	// (0x0002e6a9) aid_size_cell_calc

0x06cf,	// (0x0002e978) popup_blid_sat_info2_window_ParamLimits

0x06cf,	// (0x0002e978) popup_blid_sat_info2_window

0xc5cd,	// (0x0003a876) aid_size_cell_blid

0xc5d5,	// (0x0003a87e) bg_popup_window_pane_cp07

0xc5f8,	// (0x0003a8a1) grid_popup_blid_pane

0xc602,	// (0x0003a8ab) heading_pane_cp05_ParamLimits

0xc602,	// (0x0003a8ab) heading_pane_cp05

0xc6cc,	// (0x0003a975) cell_popup_blid_pane_ParamLimits

0xc6cc,	// (0x0003a975) cell_popup_blid_pane

0xc6f0,	// (0x0003a999) cell_popup_blid_pane_g1

0xc6f8,	// (0x0003a9a1) cell_popup_blid_pane_t1

0x4dde,	// (0x00033087) mup2_indicator_pane_ParamLimits

0x4dde,	// (0x00033087) mup2_indicator_pane

0xa554,	// (0x000387fd) mup2_visualizer_osc_pane

0xc4a2,	// (0x0003a74b) mup2_visualizer_spec_pane_ParamLimits

0xc4a2,	// (0x0003a74b) mup2_visualizer_spec_pane

0x4fbf,	// (0x00033268) mup2_spec_half_pane

0x4fc8,	// (0x00033271) mup2_spec_half_pane_cp

0x4fd0,	// (0x00033279) mup2_spec_bar_pane_ParamLimits

0x4fd0,	// (0x00033279) mup2_spec_bar_pane

0xc443,	// (0x0003a6ec) mup2_spec_bar_pane_g1

0xc44d,	// (0x0003a6f6) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0003d8a7) mup2_spec_bar_pane_g

0x4ff0,	// (0x00033299) mup2_osc_middle_pane

0xc45f,	// (0x0003a708) mup2_visualizer_osc_pane_g1

0x9c3b,	// (0x00037ee4) popup_number_entry_window_t1_ParamLimits

0x9c4e,	// (0x00037ef7) popup_number_entry_window_t2_ParamLimits

0x9c60,	// (0x00037f09) popup_number_entry_window_t3_ParamLimits

0x1b60,	// (0x0002fe09) popup_number_entry_window_t5_ParamLimits

0x1b60,	// (0x0002fe09) popup_number_entry_window_t5

0xf0af,	// (0x0003d358) popup_number_entry_window_t_ParamLimits

0x9c72,	// (0x00037f1b) text_title_cp2_ParamLimits

0x408b,	// (0x00032334) aid_hotspot_pointer_text2_pane

0x40e1,	// (0x0003238a) main_viewer_pane_g9_ParamLimits

0x40e1,	// (0x0003238a) main_viewer_pane_g9

0xa886,	// (0x00038b2f) cale_month_pane_t1_ParamLimits

0xa8c3,	// (0x00038b6c) bg_cale_pane_ParamLimits

0xa8db,	// (0x00038b84) list_cale_pane_ParamLimits

0xa8fa,	// (0x00038ba3) listscroll_cale_day_pane_t1

0xa90c,	// (0x00038bb5) scroll_pane_cp09_ParamLimits

0x3d85,	// (0x0003202e) main_mup_eq_pane_t1_ParamLimits

0x3d85,	// (0x0003202e) main_mup_eq_pane_t1

0x3d9f,	// (0x00032048) main_mup_eq_pane_t2_ParamLimits

0x3d9f,	// (0x00032048) main_mup_eq_pane_t2

0x3db9,	// (0x00032062) main_mup_eq_pane_t3_ParamLimits

0x3db9,	// (0x00032062) main_mup_eq_pane_t3

0x3dd5,	// (0x0003207e) main_mup_eq_pane_t4_ParamLimits

0x3dd5,	// (0x0003207e) main_mup_eq_pane_t4

0x3df1,	// (0x0003209a) main_mup_eq_pane_t5_ParamLimits

0x3df1,	// (0x0003209a) main_mup_eq_pane_t5

0x3e0d,	// (0x000320b6) main_mup_eq_pane_t6_ParamLimits

0x3e0d,	// (0x000320b6) main_mup_eq_pane_t6

0x3e21,	// (0x000320ca) main_mup_eq_pane_t7_ParamLimits

0x3e21,	// (0x000320ca) main_mup_eq_pane_t7

0x3e35,	// (0x000320de) main_mup_eq_pane_t8_ParamLimits

0x3e35,	// (0x000320de) main_mup_eq_pane_t8

0x3e49,	// (0x000320f2) main_mup_eq_pane_t9_ParamLimits

0x3e49,	// (0x000320f2) main_mup_eq_pane_t9

0x3e63,	// (0x0003210c) main_mup_eq_pane_t10_ParamLimits

0x3e63,	// (0x0003210c) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0003d6e3) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0003d6e3) main_mup_eq_pane_t

0x3f12,	// (0x000321bb) mup_equalizer_pane_cp5_ParamLimits

0x3f26,	// (0x000321cf) mup_equalizer_pane_cp6_ParamLimits

0x3f3a,	// (0x000321e3) mup_equalizer_pane_cp7_ParamLimits

0x1b56,	// (0x0002fdff) main_gallery_pane

0xc468,	// (0x0003a711) smil2_volume_pane

0xc470,	// (0x0003a719) smil_status_volume_pane_g1_ParamLimits

0xc483,	// (0x0003a72c) smil_status_volume_pane_g2_ParamLimits

0x4acf,	// (0x00032d78) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0003d8ac) smil_status_volume_pane_g_ParamLimits

0xc5d5,	// (0x0003a87e) bg_popup_window_pane_cp07_ParamLimits

0xc5e3,	// (0x0003a88c) blid_firmament_pane

0x4ff9,	// (0x000332a2) aid_size_cell_gallery_ParamLimits

0x4ff9,	// (0x000332a2) aid_size_cell_gallery

0x500f,	// (0x000332b8) grid_gallery_pane_ParamLimits

0x500f,	// (0x000332b8) grid_gallery_pane

0x5028,	// (0x000332d1) cell_gallery_pane_ParamLimits

0x5028,	// (0x000332d1) cell_gallery_pane

0xc706,	// (0x0003a9af) bg_cell_gallery_focus_pane_ParamLimits

0xc706,	// (0x0003a9af) bg_cell_gallery_focus_pane

0xc718,	// (0x0003a9c1) cell_gallery_pane_g1_ParamLimits

0xc718,	// (0x0003a9c1) cell_gallery_pane_g1

0x5071,	// (0x0003331a) cell_gallery_pane_g2_ParamLimits

0x5071,	// (0x0003331a) cell_gallery_pane_g2

0x507e,	// (0x00033327) cell_gallery_pane_g3_ParamLimits

0x507e,	// (0x00033327) cell_gallery_pane_g3

0xc724,	// (0x0003a9cd) cell_gallery_pane_g4_ParamLimits

0xc724,	// (0x0003a9cd) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0003d95a) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0003d95a) cell_gallery_pane_g

0xc730,	// (0x0003a9d9) bg_cell_gallery_focus_pane_g1

0xc738,	// (0x0003a9e1) bg_cell_gallery_focus_pane_g2

0xc740,	// (0x0003a9e9) bg_cell_gallery_focus_pane_g3

0xc748,	// (0x0003a9f1) bg_cell_gallery_focus_pane_g4

0xc750,	// (0x0003a9f9) bg_cell_gallery_focus_pane_g5

0xc758,	// (0x0003aa01) bg_cell_gallery_focus_pane_g6

0xc760,	// (0x0003aa09) bg_cell_gallery_focus_pane_g7

0xc768,	// (0x0003aa11) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0003d963) bg_cell_gallery_focus_pane_g

0xc770,	// (0x0003aa19) aid_firma_cardinal

0xc784,	// (0x0003aa2d) blid_firmament_pane_t1

0xc79b,	// (0x0003aa44) blid_firmament_pane_t2

0xc7b2,	// (0x0003aa5b) blid_firmament_pane_t3

0xc7c9,	// (0x0003aa72) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0003d974) blid_firmament_pane_t

0xc7e0,	// (0x0003aa89) blid_sat_info_pane

0xc7f0,	// (0x0003aa99) blid_sat_info_pane_g1

0xc7f0,	// (0x0003aa99) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0003d97d) blid_sat_info_pane_g

0xc7fa,	// (0x0003aaa3) blid_sat_info_pane_t1

0xc808,	// (0x0003aab1) smil2_volume_content_pane

0xc811,	// (0x0003aaba) smil2_volume_pane_g1

0xa3db,	// (0x00038684) smil2_volume_content_pane_g1

0xc819,	// (0x0003aac2) smil2_volume_content_pane_g2

0xc822,	// (0x0003aacb) smil2_volume_content_pane_g3

0xc82b,	// (0x0003aad4) smil2_volume_content_pane_g4

0xc834,	// (0x0003aadd) smil2_volume_content_pane_g5

0xc83d,	// (0x0003aae6) smil2_volume_content_pane_g6

0xc846,	// (0x0003aaef) smil2_volume_content_pane_g7

0xc84f,	// (0x0003aaf8) smil2_volume_content_pane_g8

0xc858,	// (0x0003ab01) smil2_volume_content_pane_g9

0xc861,	// (0x0003ab0a) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0003d982) smil2_volume_content_pane_g

0x220d,	// (0x000304b6) cale_week_day_heading_pane_t1_ParamLimits

0x2237,	// (0x000304e0) cale_week_day_heading_pane_t2_ParamLimits

0x2266,	// (0x0003050f) cale_week_day_heading_pane_t3_ParamLimits

0x2295,	// (0x0003053e) cale_week_day_heading_pane_t4_ParamLimits

0x22c4,	// (0x0003056d) cale_week_day_heading_pane_t5_ParamLimits

0x22fb,	// (0x000305a4) cale_week_day_heading_pane_t6_ParamLimits

0x2332,	// (0x000305db) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0003d45f) cale_week_day_heading_pane_t_ParamLimits

0xa4f9,	// (0x000387a2) bg_cale_side_pane_ParamLimits

0x053d,	// (0x0002e7e6) cale_week_time_pane_t1_ParamLimits

0x0557,	// (0x0002e800) cale_week_time_pane_t2_ParamLimits

0x0571,	// (0x0002e81a) cale_week_time_pane_t3_ParamLimits

0x058b,	// (0x0002e834) cale_week_time_pane_t4_ParamLimits

0x05a5,	// (0x0002e84e) cale_week_time_pane_t5_ParamLimits

0x05bf,	// (0x0002e868) cale_week_time_pane_t6_ParamLimits

0x05d9,	// (0x0002e882) cale_week_time_pane_t7_ParamLimits

0x05f3,	// (0x0002e89c) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0003d46e) cale_week_time_pane_t_ParamLimits

0x235c,	// (0x00030605) cell_cale_week_pane_g2_ParamLimits

0xa4f9,	// (0x000387a2) bg_cale_side_pane_cp01_ParamLimits

0x33da,	// (0x00031683) cale_month_week_pane_t1_ParamLimits

0x33f3,	// (0x0003169c) cale_month_week_pane_t2_ParamLimits

0x340c,	// (0x000316b5) cale_month_week_pane_t3_ParamLimits

0x3425,	// (0x000316ce) cale_month_week_pane_t4_ParamLimits

0x343e,	// (0x000316e7) cale_month_week_pane_t5_ParamLimits

0x3457,	// (0x00031700) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0003d543) cale_month_week_pane_t_ParamLimits

0x35c8,	// (0x00031871) cell_cale_month_pane_g1_ParamLimits

0x1b56,	// (0x0002fdff) main_cale_event_viewer_pane

0x9c11,	// (0x00037eba) listscroll_cale_event_viewer_pane

0xc86a,	// (0x0003ab13) list_cale_ev_pane

0xc872,	// (0x0003ab1b) scroll_pane_cp023

0xc87e,	// (0x0003ab27) field_cale_ev_pane_ParamLimits

0xc87e,	// (0x0003ab27) field_cale_ev_pane

0xc89c,	// (0x0003ab45) field_cale_ev_content_pane_ParamLimits

0xc89c,	// (0x0003ab45) field_cale_ev_content_pane

0xc8a8,	// (0x0003ab51) field_cale_ev_pane_g1_ParamLimits

0xc8a8,	// (0x0003ab51) field_cale_ev_pane_g1

0xc8b4,	// (0x0003ab5d) field_cale_ev_pane_g2_ParamLimits

0xc8b4,	// (0x0003ab5d) field_cale_ev_pane_g2

0xc8cc,	// (0x0003ab75) field_cale_ev_pane_g3_ParamLimits

0xc8cc,	// (0x0003ab75) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0003d997) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0003d997) field_cale_ev_pane_g

0xc8e4,	// (0x0003ab8d) field_cale_ev_pane_t1_ParamLimits

0xc8e4,	// (0x0003ab8d) field_cale_ev_pane_t1

0xa45e,	// (0x00038707) field_cale_ev_content_pane_t1_ParamLimits

0xa45e,	// (0x00038707) field_cale_ev_content_pane_t1

0xb10c,	// (0x000393b5) bg_button_pane_cp01

0x1f3a,	// (0x000301e3) listscroll_cale_week_pane_ParamLimits

0xa4a4,	// (0x0003874d) popup_toolbar_window_cp01

0xa4ca,	// (0x00038773) listscroll_cale_week_pane_t1_ParamLimits

0x1f3a,	// (0x000301e3) listscroll_cale_day_pane_ParamLimits

0xa4a4,	// (0x0003874d) popup_toolbar_window_cp02

0xa8fa,	// (0x00038ba3) listscroll_cale_day_pane_t1_ParamLimits

0x0695,	// (0x0002e93e) main_cale_month_pane_ParamLimits

0x49e1,	// (0x00032c8a) popup_toolbar_window_cp03_ParamLimits

0x49e1,	// (0x00032c8a) popup_toolbar_window_cp03

0x42c0,	// (0x00032569) main_image_pane_g2_ParamLimits

0x42c0,	// (0x00032569) main_image_pane_g2

0x42d1,	// (0x0003257a) main_image_pane_g3_ParamLimits

0x42d1,	// (0x0003257a) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0003d775) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0003d775) main_image_pane_g

0xb226,	// (0x000394cf) main_image_pane_t1_ParamLimits

0x42e2,	// (0x0003258b) main_image_pane_t2_ParamLimits

0x42e2,	// (0x0003258b) main_image_pane_t2

0x42f4,	// (0x0003259d) main_image_pane_t3_ParamLimits

0x42f4,	// (0x0003259d) main_image_pane_t3

0x431c,	// (0x000325c5) main_image_pane_t4_ParamLimits

0x431c,	// (0x000325c5) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0003d77c) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0003d77c) main_image_pane_t

0x433c,	// (0x000325e5) popup_image_details_window_cp01

0x4346,	// (0x000325ef) popup_toobar_trans_pane_cp01_ParamLimits

0x4346,	// (0x000325ef) popup_toobar_trans_pane_cp01

0x07a0,	// (0x0002ea49) popup_image_details_window_ParamLimits

0x07a0,	// (0x0002ea49) popup_image_details_window

0x49b4,	// (0x00032c5d) popup_image_focus_window

0x092b,	// (0x0002ebd4) camera2_autofocus_pane_ParamLimits

0x092b,	// (0x0002ebd4) camera2_autofocus_pane

0x9c11,	// (0x00037eba) bg_popup_sub_pane_cp06

0xc8fb,	// (0x0003aba4) popup_image_focus_window_g1

0xc903,	// (0x0003abac) popup_image_focus_window_g2

0xc90b,	// (0x0003abb4) popup_image_focus_window_g3

0xc913,	// (0x0003abbc) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0003d99e) popup_image_focus_window_g

0xc91b,	// (0x0003abc4) popup_image_focus_window_t1

0xc929,	// (0x0003abd2) popup_image_focus_window_t2

0xc939,	// (0x0003abe2) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0003d9a7) popup_image_focus_window_t

0xc947,	// (0x0003abf0) camera2_autofocus_pane_g1

0xa8ec,	// (0x00038b95) bg_tb_trans_pane_cp01

0xc955,	// (0x0003abfe) popup_image_details_window_g1

0xc968,	// (0x0003ac11) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0003d9b9) popup_image_details_window_g

0xc991,	// (0x0003ac3a) popup_image_details_window_t1

0xc9a3,	// (0x0003ac4c) popup_image_details_window_t2

0xc9bc,	// (0x0003ac65) popup_image_details_window_t3

0xc9d0,	// (0x0003ac79) popup_image_details_window_t4

0xc9eb,	// (0x0003ac94) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0003d9c0) popup_image_details_window_t

0xa346,	// (0x000385ef) bg_calc_paper_pane_ParamLimits

0x1b56,	// (0x0002fdff) grid_highlight_pane_cp013

0x1dcb,	// (0x00030074) list_calc_pane_ParamLimits

0x1ddd,	// (0x00030086) scroll_pane_cp024

0xa35a,	// (0x00038603) bg_calc_display_pane_ParamLimits

0x0494,	// (0x0002e73d) calc_display_pane_t1_ParamLimits

0x04a6,	// (0x0002e74f) calc_display_pane_t2_ParamLimits

0x1de5,	// (0x0003008e) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0003d3df) calc_display_pane_t_ParamLimits

0x0507,	// (0x0002e7b0) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0003d3fc) cell_calc_pane_g

0x0510,	// (0x0002e7b9) cell_calc_pane_t1

0xa3b9,	// (0x00038662) grid_highlight_pane_cp02_ParamLimits

0xa3cf,	// (0x00038678) toolbar_button_pane_cp01_ParamLimits

0xa3cf,	// (0x00038678) toolbar_button_pane_cp01

0xb26b,	// (0x00039514) temp_image_control_pane_ParamLimits

0xb26b,	// (0x00039514) temp_image_control_pane

0x1b3c,	// (0x0002fde5) main_mp3_pane

0xca05,	// (0x0003acae) temp_image_control_pane_g1_ParamLimits

0xca05,	// (0x0003acae) temp_image_control_pane_g1

0xca13,	// (0x0003acbc) temp_image_control_pane_g2_ParamLimits

0xca13,	// (0x0003acbc) temp_image_control_pane_g2

0xca25,	// (0x0003acce) temp_image_control_pane_g3_ParamLimits

0xca25,	// (0x0003acce) temp_image_control_pane_g3

0x50bb,	// (0x00033364) temp_image_control_pane_g4_ParamLimits

0x50bb,	// (0x00033364) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0003d9cb) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0003d9cb) temp_image_control_pane_g

0xca05,	// (0x0003acae) main_mp3_pane_g1

0x50ce,	// (0x00033377) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0003d9d4) main_mp3_pane_g

0xca68,	// (0x0003ad11) main_mp3_pane_t1

0xa55c,	// (0x00038805) main_camera_pane_g8_ParamLimits

0xa55c,	// (0x00038805) main_camera_pane_g8

0x266a,	// (0x00030913) main_video_pane_g7_ParamLimits

0x266a,	// (0x00030913) main_video_pane_g7

0x4cca,	// (0x00032f73) main_camera2_pane_t7_ParamLimits

0x4cca,	// (0x00032f73) main_camera2_pane_t7

0xa6a4,	// (0x0003894d) scroll_pane_cp025_ParamLimits

0xa6a4,	// (0x0003894d) scroll_pane_cp025

0xa6b8,	// (0x00038961) scroll_pane_cp026_ParamLimits

0xa6b8,	// (0x00038961) scroll_pane_cp026

0xa6c7,	// (0x00038970) wml_content_pane_ParamLimits

0x1b56,	// (0x0002fdff) main_touch_calib_pane

0x51a2,	// (0x0003344b) main_touch_calib_pane_g1

0x51b4,	// (0x0003345d) main_touch_calib_pane_g2

0x51c6,	// (0x0003346f) main_touch_calib_pane_g3

0x51d8,	// (0x00033481) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0003d9f2) main_touch_calib_pane_g

0x51ea,	// (0x00033493) main_touch_calib_pane_t1

0x5204,	// (0x000334ad) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0003d9fb) main_touch_calib_pane_t

0xae38,	// (0x000390e1) mup_progress_pane_cp02

0xae6d,	// (0x00039116) navi_pane_g1

0xaf28,	// (0x000391d1) navi_pane_mp_t3

0x1b3c,	// (0x0002fde5) main_mp3_pane_ParamLimits

0x49f6,	// (0x00032c9f) navi_pane_ParamLimits

0xca05,	// (0x0003acae) main_mp3_pane_g1_ParamLimits

0x50ce,	// (0x00033377) main_mp3_pane_g2_ParamLimits

0x50dc,	// (0x00033385) main_mp3_pane_g3_ParamLimits

0x50dc,	// (0x00033385) main_mp3_pane_g3

0x50ea,	// (0x00033393) main_mp3_pane_g4_ParamLimits

0x50ea,	// (0x00033393) main_mp3_pane_g4

0xca35,	// (0x0003acde) main_mp3_pane_g5_ParamLimits

0xca35,	// (0x0003acde) main_mp3_pane_g5

0xca43,	// (0x0003acec) main_mp3_pane_g6_ParamLimits

0xca43,	// (0x0003acec) main_mp3_pane_g6

0xca50,	// (0x0003acf9) main_mp3_pane_g7_ParamLimits

0xca50,	// (0x0003acf9) main_mp3_pane_g7

0xca5c,	// (0x0003ad05) main_mp3_pane_g8_ParamLimits

0xca5c,	// (0x0003ad05) main_mp3_pane_g8

0xf72b,	// (0x0003d9d4) main_mp3_pane_g_ParamLimits

0x50f6,	// (0x0003339f) main_mp3_pane_t2

0x5104,	// (0x000333ad) main_mp3_pane_t3

0xca76,	// (0x0003ad1f) main_mp3_pane_t4

0xca84,	// (0x0003ad2d) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0003d9e5) main_mp3_pane_t

0xca92,	// (0x0003ad3b) mup_progress_pane_cp01

0x1ab1,	// (0x0002fd5a) aid_zoom_text_secondary2

0xc86a,	// (0x0003ab13) list_cale_ev2_pane

0xc872,	// (0x0003ab1b) scroll_pane_cp023_ParamLimits

0x525a,	// (0x00033503) field_cale_ev2_pane_ParamLimits

0x525a,	// (0x00033503) field_cale_ev2_pane

0xca9a,	// (0x0003ad43) field_cale_ev2_pane_g1_ParamLimits

0xca9a,	// (0x0003ad43) field_cale_ev2_pane_g1

0xcaa6,	// (0x0003ad4f) field_cale_ev2_pane_g2_ParamLimits

0xcaa6,	// (0x0003ad4f) field_cale_ev2_pane_g2

0xcabe,	// (0x0003ad67) field_cale_ev2_pane_g3_ParamLimits

0xcabe,	// (0x0003ad67) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0003da06) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0003da06) field_cale_ev2_pane_g

0xcae2,	// (0x0003ad8b) field_cale_ev2_pane_t1_ParamLimits

0xcae2,	// (0x0003ad8b) field_cale_ev2_pane_t1

0xcaf9,	// (0x0003ada2) field_cale_ev2_pane_t2_ParamLimits

0xcaf9,	// (0x0003ada2) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0003da0f) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0003da0f) field_cale_ev2_pane_t

0x4174,	// (0x0003241d) main_postcard_pane_g5_ParamLimits

0x4174,	// (0x0003241d) main_postcard_pane_g5

0x418a,	// (0x00032433) main_postcard_pane_g6_ParamLimits

0x418a,	// (0x00032433) main_postcard_pane_g6

0x2430,	// (0x000306d9) camera2_autofocus_pane_cp_ParamLimits

0x2430,	// (0x000306d9) camera2_autofocus_pane_cp

0x1b3c,	// (0x0002fde5) main_mup3_pane

0x52bf,	// (0x00033568) main_mup3_pane_g1_ParamLimits

0x52bf,	// (0x00033568) main_mup3_pane_g1

0x52e1,	// (0x0003358a) main_mup3_pane_g2_ParamLimits

0x52e1,	// (0x0003358a) main_mup3_pane_g2

0x5361,	// (0x0003360a) main_mup3_pane_g3_ParamLimits

0x5361,	// (0x0003360a) main_mup3_pane_g3

0x53a7,	// (0x00033650) main_mup3_pane_g4_ParamLimits

0x53a7,	// (0x00033650) main_mup3_pane_g4

0x53ed,	// (0x00033696) main_mup3_pane_g5_ParamLimits

0x53ed,	// (0x00033696) main_mup3_pane_g5

0x5433,	// (0x000336dc) main_mup3_pane_g6_ParamLimits

0x5433,	// (0x000336dc) main_mup3_pane_g6

0xcb0e,	// (0x0003adb7) main_mup3_pane_g7_ParamLimits

0xcb0e,	// (0x0003adb7) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0003da1f) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0003da1f) main_mup3_pane_g

0x54b1,	// (0x0003375a) main_mup3_pane_t1_ParamLimits

0x54b1,	// (0x0003375a) main_mup3_pane_t1

0x5525,	// (0x000337ce) main_mup3_pane_t2_ParamLimits

0x5525,	// (0x000337ce) main_mup3_pane_t2

0x55f9,	// (0x000338a2) main_mup3_pane_t4_ParamLimits

0x55f9,	// (0x000338a2) main_mup3_pane_t4

0x564f,	// (0x000338f8) main_mup3_pane_t5_ParamLimits

0x564f,	// (0x000338f8) main_mup3_pane_t5

0x570b,	// (0x000339b4) main_mup3_pane_t6_ParamLimits

0x570b,	// (0x000339b4) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0003da30) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0003da30) main_mup3_pane_t

0x57c3,	// (0x00033a6c) mup3_progress_pane_ParamLimits

0x57c3,	// (0x00033a6c) mup3_progress_pane

0x584f,	// (0x00033af8) popup_mup3_control_window_ParamLimits

0x584f,	// (0x00033af8) popup_mup3_control_window

0xcb1c,	// (0x0003adc5) popup_mup3_text_window

0x5881,	// (0x00033b2a) mup3_progress_pane_t1

0x58a0,	// (0x00033b49) mup3_progress_pane_t2

0xcb24,	// (0x0003adcd) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0003da3d) mup3_progress_pane_t

0xcb41,	// (0x0003adea) mup_progress_pane_cp03

0x9c11,	// (0x00037eba) bg_tb_trans_pane_cp04

0x58bf,	// (0x00033b68) mup3_volume_pane

0x58c7,	// (0x00033b70) popup_mup3_control_window_g1

0x58d0,	// (0x00033b79) mup3_volume_pane_g1

0x58d9,	// (0x00033b82) mup3_volume_pane_g2

0x58e2,	// (0x00033b8b) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0003da44) mup3_volume_pane_g

0x9c11,	// (0x00037eba) bg_tb_trans_pane_cp03

0xcb51,	// (0x0003adfa) popup_mup3_text_window_g1

0xcb59,	// (0x0003ae02) popup_mup3_text_window_t1

0xa3a2,	// (0x0003864b) list_calc_item_pane_g1_ParamLimits

0xc543,	// (0x0003a7ec) mup_volume_pane_cp_g1

0x521e,	// (0x000334c7) main_touch_calib_pane_t3

0x5232,	// (0x000334db) main_touch_calib_pane_t4

0x5246,	// (0x000334ef) main_touch_calib_pane_t5

0x1a9d,	// (0x0002fd46) aid_cell_size_toolbar2

0x1aa5,	// (0x0002fd4e) aid_popup3_width_pane

0x1ab1,	// (0x0002fd5a) aid_zoom_text_msg_primary

0x2405,	// (0x000306ae) vorec_t7

0xa366,	// (0x0003860f) bg_calc_paper_pane_g1_ParamLimits

0xa372,	// (0x0003861b) bg_calc_paper_pane_g2_ParamLimits

0xa37e,	// (0x00038627) bg_calc_paper_pane_g3_ParamLimits

0xa38a,	// (0x00038633) bg_calc_paper_pane_g4_ParamLimits

0xa396,	// (0x0003863f) bg_calc_paper_pane_g5_ParamLimits

0x1df7,	// (0x000300a0) bg_calc_paper_pane_g6_ParamLimits

0x1e06,	// (0x000300af) bg_calc_paper_pane_g7_ParamLimits

0x1e15,	// (0x000300be) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0003d3e6) bg_calc_paper_pane_g_ParamLimits

0x1e28,	// (0x000300d1) calc_bg_paper_pane_g9_ParamLimits

0x257c,	// (0x00030825) image_qvga_pane_ParamLimits

0x257c,	// (0x00030825) image_qvga_pane

0xa289,	// (0x00038532) bg_popup_sub_pane_cp04_ParamLimits

0xb1a2,	// (0x0003944b) popup_mup_playback_window_g1_ParamLimits

0xb1ae,	// (0x00039457) popup_mup_playback_window_t1_ParamLimits

0xb1c3,	// (0x0003946c) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0003d770) popup_mup_playback_window_t_ParamLimits

0x4cf8,	// (0x00032fa1) main_mup2_pane_g3_ParamLimits

0x4cf8,	// (0x00032fa1) main_mup2_pane_g3

0x2990,	// (0x00030c39) popup_toolbar_window_cp04

0xb5b8,	// (0x00039861) popup_call2_audio_second_window_g3_ParamLimits

0xb5b8,	// (0x00039861) popup_call2_audio_second_window_g3

0xb9c2,	// (0x00039c6b) popup_call2_audio_first_window_g4_ParamLimits

0xb9c2,	// (0x00039c6b) popup_call2_audio_first_window_g4

0xc041,	// (0x0003a2ea) popup_call2_audio_in_window_g4_ParamLimits

0xc041,	// (0x0003a2ea) popup_call2_audio_in_window_g4

0x42a2,	// (0x0003254b) aid_area_sk_bg_cut_ParamLimits

0x42a2,	// (0x0003254b) aid_area_sk_bg_cut

0xb1d8,	// (0x00039481) aid_area_sk_bg_cut_2_ParamLimits

0xb1d8,	// (0x00039481) aid_area_sk_bg_cut_2

0x5061,	// (0x0003330a) aid_placing_details_win

0x5069,	// (0x00033312) aid_placing_details_win_2

0xc947,	// (0x0003abf0) camera2_autofocus_pane_g1_ParamLimits

0x0353,	// (0x0002e5fc) popup_fixed_preview_cale_window_ParamLimits

0x0353,	// (0x0002e5fc) popup_fixed_preview_cale_window

0xafa6,	// (0x0003924f) navi_slider_pane_g3

0xafaf,	// (0x00039258) navi_slider_pane_g4

0xafb8,	// (0x00039261) navi_slider_pane_g5

0xafa6,	// (0x0003924f) navi_slider_pane_g6

0x3b55,	// (0x00031dfe) navi_slider_pane_g7

0xb0d9,	// (0x00039382) mup_scale_pane_g3

0xb0e2,	// (0x0003938b) mup_scale_pane_g4

0xb0eb,	// (0x00039394) mup_scale_pane_g5

0x3f4e,	// (0x000321f7) mup_scale_pane_g6

0x3f57,	// (0x00032200) mup_scale_pane_g7

0xafa6,	// (0x0003924f) cams2_slider_pane_g3

0xc5c5,	// (0x0003a86e) cams2_slider_pane_g4

0x4fae,	// (0x00033257) cams2_slider_pane_g5

0xafa6,	// (0x0003924f) cams2_slider_pane_g6

0x4fb6,	// (0x0003325f) cams2_slider_pane_g7

0xc7f0,	// (0x0003aa99) camera2_autofocus_pane_cp_g1

0xc3dc,	// (0x0003a685) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3dc,	// (0x0003a685) bg_popup_preview_window_pane_cp02

0xcb67,	// (0x0003ae10) list_fp_cale_pane_ParamLimits

0xcb67,	// (0x0003ae10) list_fp_cale_pane

0xcb73,	// (0x0003ae1c) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb73,	// (0x0003ae1c) popup_fixed_preview_cale_window_t1

0x58eb,	// (0x00033b94) popup_fixed_preview_cale_window_t2_ParamLimits

0x58eb,	// (0x00033b94) popup_fixed_preview_cale_window_t2

0x5900,	// (0x00033ba9) popup_fixed_preview_cale_window_t3_ParamLimits

0x5900,	// (0x00033ba9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0003da4b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0003da4b) popup_fixed_preview_cale_window_t

0x5915,	// (0x00033bbe) list_single_fp_cale_pane_ParamLimits

0x5915,	// (0x00033bbe) list_single_fp_cale_pane

0xcb91,	// (0x0003ae3a) list_single_fp_cale_pane_g1_ParamLimits

0xcb91,	// (0x0003ae3a) list_single_fp_cale_pane_g1

0xcb9d,	// (0x0003ae46) list_single_fp_cale_pane_g2_ParamLimits

0xcb9d,	// (0x0003ae46) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0003da52) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0003da52) list_single_fp_cale_pane_g

0xcbb6,	// (0x0003ae5f) list_single_fp_cale_pane_t1_ParamLimits

0xcbb6,	// (0x0003ae5f) list_single_fp_cale_pane_t1

0xcbc8,	// (0x0003ae71) list_single_fp_cale_pane_t2_ParamLimits

0xcbc8,	// (0x0003ae71) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0003da59) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0003da59) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1b56,	// (0x0002fdff) main_dialer_pane

0x592b,	// (0x00033bd4) aid_cell_size_keypad

0x5935,	// (0x00033bde) dialer_ne_pane

0x593d,	// (0x00033be6) grid_dialer_command_1_pane

0x5945,	// (0x00033bee) grid_dialer_command_2_pane

0x594d,	// (0x00033bf6) grid_dialer_keypad_pane

0x595f,	// (0x00033c08) bg_popup_call_pane_cp06_ParamLimits

0x595f,	// (0x00033c08) bg_popup_call_pane_cp06

0x596b,	// (0x00033c14) dialer_ne_clear_pane_ParamLimits

0x596b,	// (0x00033c14) dialer_ne_clear_pane

0xcbfb,	// (0x0003aea4) dialer_ne_pane_g1

0xcc03,	// (0x0003aeac) dialer_ne_pane_t1_ParamLimits

0xcc03,	// (0x0003aeac) dialer_ne_pane_t1

0x5977,	// (0x00033c20) dialer_ne_pane_t2_ParamLimits

0x5977,	// (0x00033c20) dialer_ne_pane_t2

0x59a1,	// (0x00033c4a) dialer_ne_pane_t3_ParamLimits

0x59a1,	// (0x00033c4a) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0003da5e) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0003da5e) dialer_ne_pane_t

0x59d1,	// (0x00033c7a) dialer_ne_pane_t3_copy1_ParamLimits

0x59d1,	// (0x00033c7a) dialer_ne_pane_t3_copy1

0x5a00,	// (0x00033ca9) cell_dialer_keypad_pane_ParamLimits

0x5a00,	// (0x00033ca9) cell_dialer_keypad_pane

0x5a17,	// (0x00033cc0) cell_dialer_command_1_pane_ParamLimits

0x5a17,	// (0x00033cc0) cell_dialer_command_1_pane

0x5a2d,	// (0x00033cd6) cell_dialer_command_2_pane_ParamLimits

0x5a2d,	// (0x00033cd6) cell_dialer_command_2_pane

0xcc15,	// (0x0003aebe) bg_button_pane_cp02_ParamLimits

0xcc15,	// (0x0003aebe) bg_button_pane_cp02

0x5a3c,	// (0x00033ce5) cell_dialer_keypad_pane_g1_ParamLimits

0x5a3c,	// (0x00033ce5) cell_dialer_keypad_pane_g1

0xcc15,	// (0x0003aebe) bg_button_pane_cp03_ParamLimits

0xcc15,	// (0x0003aebe) bg_button_pane_cp03

0x5a50,	// (0x00033cf9) cell_dialer_command_1_pane_g1_ParamLimits

0x5a50,	// (0x00033cf9) cell_dialer_command_1_pane_g1

0xcc21,	// (0x0003aeca) bg_button_pane_cp04

0x5a64,	// (0x00033d0d) cell_dialer_command_2_pane_g1

0xa554,	// (0x000387fd) bg_button_pane_cp06

0xcc29,	// (0x0003aed2) dialer_ne_clear_pane_g1

0xae79,	// (0x00039122) navi_pane_g2

0xaea7,	// (0x00039150) navi_pane_g3

0x0002,

0xf3ca,	// (0x0003d673) navi_pane_g

0xaf36,	// (0x000391df) navi_pane_mv_g2

0xaf5d,	// (0x00039206) navi_pane_mv_g5

0x3b0a,	// (0x00031db3) navi_pane_mv_t1

0xa35a,	// (0x00038603) main_clock2_pane

0xa8ec,	// (0x00038b95) main_clock2_list_pane_ParamLimits

0xa8ec,	// (0x00038b95) main_clock2_list_pane

0x5ad5,	// (0x00033d7e) main_clock2_pane_t1_ParamLimits

0x5ad5,	// (0x00033d7e) main_clock2_pane_t1

0x5b10,	// (0x00033db9) main_clock2_pane_t2_ParamLimits

0x5b10,	// (0x00033db9) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0003da6a) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0003da6a) main_clock2_pane_t

0x5bb0,	// (0x00033e59) popup_clock_analogue_window_cp03_ParamLimits

0x5bb0,	// (0x00033e59) popup_clock_analogue_window_cp03

0x5bd5,	// (0x00033e7e) popup_clock_digital_window_cp02_ParamLimits

0x5bd5,	// (0x00033e7e) popup_clock_digital_window_cp02

0x5c4e,	// (0x00033ef7) main_clock2_list_single_pane_ParamLimits

0x5c4e,	// (0x00033ef7) main_clock2_list_single_pane

0xa554,	// (0x000387fd) list_highlight_pane_cp05

0xcc63,	// (0x0003af0c) main_clock2_list_single_pane_t1

0x2990,	// (0x00030c39) popup_toolbar_window_cp04_ParamLimits

0x508b,	// (0x00033334) camera2_autofocus_pane_g2_ParamLimits

0x508b,	// (0x00033334) camera2_autofocus_pane_g2

0x5097,	// (0x00033340) camera2_autofocus_pane_g3_ParamLimits

0x5097,	// (0x00033340) camera2_autofocus_pane_g3

0x50a3,	// (0x0003334c) camera2_autofocus_pane_g4_ParamLimits

0x50a3,	// (0x0003334c) camera2_autofocus_pane_g4

0x50af,	// (0x00033358) camera2_autofocus_pane_g5_ParamLimits

0x50af,	// (0x00033358) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0003d9ae) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0003d9ae) camera2_autofocus_pane_g

0x527b,	// (0x00033524) camera2_autofocus_pane_cp_g2

0x5283,	// (0x0003352c) camera2_autofocus_pane_cp_g3

0x528b,	// (0x00033534) camera2_autofocus_pane_cp_g4

0x5293,	// (0x0003353c) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0003da14) camera2_autofocus_pane_cp_g

0x5957,	// (0x00033c00) popup_dialer_spcha_window

0x9c11,	// (0x00037eba) bg_popup_sub_pane_cp07

0xcc71,	// (0x0003af1a) list_spcha_pane

0xcc79,	// (0x0003af22) list_single_spcha_pane_ParamLimits

0xcc79,	// (0x0003af22) list_single_spcha_pane

0x9c11,	// (0x00037eba) list_highlight_pane_cp06

0xcc8a,	// (0x0003af33) list_single_spcha_pane_t1

0xbdeb,	// (0x0003a094) popup_call2_audio_out_window_g4_ParamLimits

0xbdeb,	// (0x0003a094) popup_call2_audio_out_window_g4

0x1b56,	// (0x0002fdff) main_imed2_pane

0x49bc,	// (0x00032c65) popup_imed_adjust2_window

0x07b8,	// (0x0002ea61) popup_imed_trans_window_ParamLimits

0x07b8,	// (0x0002ea61) popup_imed_trans_window

0xc62e,	// (0x0003a8d7) popup_blid_sat_info2_window_t1

0xc63c,	// (0x0003a8e5) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0003d943) popup_blid_sat_info2_window_t

0x5c60,	// (0x00033f09) aid_size_cell_colour_35

0x5c80,	// (0x00033f29) aid_size_cell_colour_112

0x5ca0,	// (0x00033f49) aid_size_cell_effect

0xc3e8,	// (0x0003a691) bg_tb_trans_pane_cp02

0xaa03,	// (0x00038cac) heading_imed_pane

0x5cc0,	// (0x00033f69) listscroll_imed_pane

0xcc98,	// (0x0003af41) heading_imed_pane_g1

0xcca0,	// (0x0003af49) heading_imed_pane_t1

0xccae,	// (0x0003af57) grid_imed_colour_35_pane_ParamLimits

0xccae,	// (0x0003af57) grid_imed_colour_35_pane

0x5ccc,	// (0x00033f75) grid_imed_effect_pane

0xccc6,	// (0x0003af6f) list_imed_aspect_pane

0x5ce2,	// (0x00033f8b) scroll_pane_cp027_ParamLimits

0x5ce2,	// (0x00033f8b) scroll_pane_cp027

0x5cf3,	// (0x00033f9c) cell_imed_effect_pane_ParamLimits

0x5cf3,	// (0x00033f9c) cell_imed_effect_pane

0xccce,	// (0x0003af77) cell_imed_colour_pane_ParamLimits

0xccce,	// (0x0003af77) cell_imed_colour_pane

0xcd10,	// (0x0003afb9) cell_imed_colour_pane_g1_ParamLimits

0xcd10,	// (0x0003afb9) cell_imed_colour_pane_g1

0xcd21,	// (0x0003afca) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd21,	// (0x0003afca) hgihlgiht_grid_pane_cp016

0x5d1a,	// (0x00033fc3) cell_imed_effect_pane_g1

0x5d22,	// (0x00033fcb) grid_highlight_pane_cp017

0xcd32,	// (0x0003afdb) list_imed_single_pane_ParamLimits

0xcd32,	// (0x0003afdb) list_imed_single_pane

0x9c11,	// (0x00037eba) list_highlight_pane_cp07

0xcd47,	// (0x0003aff0) list_imed_aspect_pane_comp1_t1

0xc3e8,	// (0x0003a691) bg_tb_trans_pane_cp05

0xcd69,	// (0x0003b012) popup_imed_adjust2_window_g1

0xcd90,	// (0x0003b039) popup_imed_adjust2_window_t1

0xcda8,	// (0x0003b051) slider_imed_adjust_pane

0xcdbc,	// (0x0003b065) slider_imed_adjust_pane_g1

0xcdcc,	// (0x0003b075) slider_imed_adjust_pane_g2

0xcddc,	// (0x0003b085) slider_imed_adjust_pane_g3

0xcded,	// (0x0003b096) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0003da87) slider_imed_adjust_pane_g

0x5d2b,	// (0x00033fd4) aid_size_cell_clipart2

0x5d37,	// (0x00033fe0) grid_imed_clipart_pane

0xcdfe,	// (0x0003b0a7) scroll_pane_cp031

0x5d41,	// (0x00033fea) cell_imed_clipart_pane_ParamLimits

0x5d41,	// (0x00033fea) cell_imed_clipart_pane

0x5d63,	// (0x0003400c) cell_imed_clipart_pane_g1

0x9c11,	// (0x00037eba) grid_highlight_pane_cp014

0x5ab1,	// (0x00033d5a) main_clock2_pane_g1_ParamLimits

0x5ab1,	// (0x00033d5a) main_clock2_pane_g1

0x5bf5,	// (0x00033e9e) aid_call2_pane_cp10

0x5c07,	// (0x00033eb0) aid_call_pane_cp10

0xadd8,	// (0x00039081) popup_clock_analogue_window_cp10_g1

0xadd8,	// (0x00039081) popup_clock_analogue_window_cp10_g2

0x5c19,	// (0x00033ec2) popup_clock_analogue_window_cp10_g3

0x5c19,	// (0x00033ec2) popup_clock_analogue_window_cp10_g4

0xadd8,	// (0x00039081) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0003da75) popup_clock_analogue_window_cp10_g

0x5c2f,	// (0x00033ed8) popup_clock_analogue_window_cp10_t1

0x0e06,	// (0x0002f0af) clock_digital_number_pane_cp10_ParamLimits

0x0e06,	// (0x0002f0af) clock_digital_number_pane_cp10

0x0e1e,	// (0x0002f0c7) clock_digital_number_pane_cp11_ParamLimits

0x0e1e,	// (0x0002f0c7) clock_digital_number_pane_cp11

0x0e36,	// (0x0002f0df) clock_digital_number_pane_cp12_ParamLimits

0x0e36,	// (0x0002f0df) clock_digital_number_pane_cp12

0x0e50,	// (0x0002f0f9) clock_digital_number_pane_cp13_ParamLimits

0x0e50,	// (0x0002f0f9) clock_digital_number_pane_cp13

0x0e6a,	// (0x0002f113) clock_digital_separator_pane_cp10_ParamLimits

0x0e6a,	// (0x0002f113) clock_digital_separator_pane_cp10

0x0e84,	// (0x0002f12d) popup_clock_digital_window_cp02_t1_ParamLimits

0x0e84,	// (0x0002f12d) popup_clock_digital_window_cp02_t1

0xa281,	// (0x0003852a) clock_digital_number_pane_cp10_g1

0xa281,	// (0x0003852a) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0003da90) clock_digital_number_pane_cp10_g

0xa281,	// (0x0003852a) clock_digital_separator_pane_cp10_g1

0xa281,	// (0x0003852a) clock_digital_separator_pane_g2_cp10

0xaf65,	// (0x0003920e) navi_pane_vded_g4

0xaf6e,	// (0x00039217) navi_pane_vded_g5

0xaf77,	// (0x00039220) navi_pane_vded_t1

0x1b56,	// (0x0002fdff) main_vded_pane

0x5d6c,	// (0x00034015) main_vded_pane_g1

0x5d76,	// (0x0003401f) main_vded_pane_g2

0x5d80,	// (0x00034029) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0003da95) main_vded_pane_g

0x5d8a,	// (0x00034033) main_vded_pane_t1

0x5d98,	// (0x00034041) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0003da9c) main_vded_pane_t

0x5da6,	// (0x0003404f) vded_slider_pane

0x5dae,	// (0x00034057) vded_video_pane

0xce06,	// (0x0003b0af) vded_video_pane_g1

0x5db6,	// (0x0003405f) vded_video_pane_g2

0xc7f0,	// (0x0003aa99) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0003daa1) vded_video_pane_g

0xce10,	// (0x0003b0b9) vded_slider_pane_g1

0xc543,	// (0x0003a7ec) vded_slider_pane_g2

0xce19,	// (0x0003b0c2) vded_slider_pane_g3

0xce22,	// (0x0003b0cb) vded_slider_pane_g4

0xce2b,	// (0x0003b0d4) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0003daa8) vded_slider_pane_g

0x5837,	// (0x00033ae0) mup3_rocker_pane_ParamLimits

0x5837,	// (0x00033ae0) mup3_rocker_pane

0x5dbf,	// (0x00034068) mup3_control_keys_pane_g1

0x5dc7,	// (0x00034070) mup3_control_keys_pane_g2

0x5dcf,	// (0x00034078) mup3_control_keys_pane_g3

0x5dd7,	// (0x00034080) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0003dab3) mup3_control_keys_pane_g

0x038a,	// (0x0002e633) popup_toolbar2_fixed_window_cp01_ParamLimits

0x038a,	// (0x0002e633) popup_toolbar2_fixed_window_cp01

0x586b,	// (0x00033b14) popup_toolbar2_fixed_window_cp02_ParamLimits

0x586b,	// (0x00033b14) popup_toolbar2_fixed_window_cp02

0xb72a,	// (0x000399d3) popup_call2_audio_second_window_t4_ParamLimits

0xb72a,	// (0x000399d3) popup_call2_audio_second_window_t4

0xbc58,	// (0x00039f01) popup_call2_audio_first_window_t6_ParamLimits

0xbc58,	// (0x00039f01) popup_call2_audio_first_window_t6

0xbeee,	// (0x0003a197) popup_call2_audio_out_window_t6_ParamLimits

0xbeee,	// (0x0003a197) popup_call2_audio_out_window_t6

0x1b56,	// (0x0002fdff) main_vitu_pane

0x5de7,	// (0x00034090) aid_size_cell_itu_ParamLimits

0x5de7,	// (0x00034090) aid_size_cell_itu

0xa8ec,	// (0x00038b95) bg_popup_window_pane_cp08_ParamLimits

0xa8ec,	// (0x00038b95) bg_popup_window_pane_cp08

0x5dfd,	// (0x000340a6) field_vitu_entry_pane_ParamLimits

0x5dfd,	// (0x000340a6) field_vitu_entry_pane

0x5e15,	// (0x000340be) grid_vitu_function_pane_ParamLimits

0x5e15,	// (0x000340be) grid_vitu_function_pane

0x5e30,	// (0x000340d9) grid_vitu_itu_pane_ParamLimits

0x5e30,	// (0x000340d9) grid_vitu_itu_pane

0x5e4e,	// (0x000340f7) cell_vitu_itu_pane_ParamLimits

0x5e4e,	// (0x000340f7) cell_vitu_itu_pane

0x5e70,	// (0x00034119) cell_vitu_function_pane_ParamLimits

0x5e70,	// (0x00034119) cell_vitu_function_pane

0xa8ec,	// (0x00038b95) bg_popup_sub_pane_cp08_ParamLimits

0xa8ec,	// (0x00038b95) bg_popup_sub_pane_cp08

0x5e89,	// (0x00034132) field_vitu_entry_pane_t1_ParamLimits

0x5e89,	// (0x00034132) field_vitu_entry_pane_t1

0xce4c,	// (0x0003b0f5) field_vitu_entry_pane_t2_ParamLimits

0xce4c,	// (0x0003b0f5) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0003dac1) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0003dac1) field_vitu_entry_pane_t

0xce69,	// (0x0003b112) bg_button_pane_cp05_ParamLimits

0xce69,	// (0x0003b112) bg_button_pane_cp05

0x5ea8,	// (0x00034151) cell_vitu_itu_pane_g1

0x5ec0,	// (0x00034169) cell_vitu_itu_pane_t1_ParamLimits

0x5ec0,	// (0x00034169) cell_vitu_itu_pane_t1

0x5ed2,	// (0x0003417b) cell_vitu_itu_pane_t2_ParamLimits

0x5ed2,	// (0x0003417b) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0003dac6) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0003dac6) cell_vitu_itu_pane_t

0xce77,	// (0x0003b120) bg_button_pane_cp07

0x5f07,	// (0x000341b0) cell_vitu_function_pane_g1

0x1cf3,	// (0x0002ff9c) main_calc_pane_g1

0x01ea,	// (0x0002e493) aid_visual_content_pane

0x1b56,	// (0x0002fdff) main_vradio_pane

0x5f10,	// (0x000341b9) main_vradio_pane_g1_ParamLimits

0x5f10,	// (0x000341b9) main_vradio_pane_g1

0xce81,	// (0x0003b12a) main_vradio_pane_g2_ParamLimits

0xce81,	// (0x0003b12a) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0003dacd) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0003dacd) main_vradio_pane_g

0x5f29,	// (0x000341d2) main_vradio_pane_t1_ParamLimits

0x5f29,	// (0x000341d2) main_vradio_pane_t1

0x5f3e,	// (0x000341e7) main_vradio_pane_t2_ParamLimits

0x5f3e,	// (0x000341e7) main_vradio_pane_t2

0xce8e,	// (0x0003b137) main_vradio_pane_t3_ParamLimits

0xce8e,	// (0x0003b137) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0003dad2) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0003dad2) main_vradio_pane_t

0x5f53,	// (0x000341fc) vradio_rocker_control_pane_ParamLimits

0x5f53,	// (0x000341fc) vradio_rocker_control_pane

0x5f65,	// (0x0003420e) vradio_station_info_pane_ParamLimits

0x5f65,	// (0x0003420e) vradio_station_info_pane

0xcea2,	// (0x0003b14b) vradio_frequency_info_pane_ParamLimits

0xcea2,	// (0x0003b14b) vradio_frequency_info_pane

0xc7f0,	// (0x0003aa99) vradio_station_info_pane_g1

0xceb1,	// (0x0003b15a) vradio_station_info_pane_t1_ParamLimits

0xceb1,	// (0x0003b15a) vradio_station_info_pane_t1

0xced3,	// (0x0003b17c) vradio_station_info_pane_t2_ParamLimits

0xced3,	// (0x0003b17c) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0003dad9) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0003dad9) vradio_station_info_pane_t

0xcee5,	// (0x0003b18e) vradio_tuning_pane

0xceed,	// (0x0003b196) vradio_rocker_control_pane_g1

0xcef5,	// (0x0003b19e) vradio_rocker_control_pane_g2

0xcefd,	// (0x0003b1a6) vradio_rocker_control_pane_g3

0xcf05,	// (0x0003b1ae) vradio_rocker_control_pane_g4

0xcf0d,	// (0x0003b1b6) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0003dade) vradio_rocker_control_pane_g

0x5f77,	// (0x00034220) vradio_frequency_info_pane_g1

0xcf15,	// (0x0003b1be) vradio_frequency_info_pane_t1_ParamLimits

0xcf15,	// (0x0003b1be) vradio_frequency_info_pane_t1

0x5f81,	// (0x0003422a) vradio_tuning_pane_g1

0x5f8c,	// (0x00034235) vradio_tuning_pane_t1

0x1afa,	// (0x0002fda3) area_side_right_pane_ParamLimits

0x1afa,	// (0x0002fda3) area_side_right_pane

0xc3a3,	// (0x0003a64c) status_small_pane_g1

0xc3ab,	// (0x0003a654) status_small_pane_g2

0xc3b4,	// (0x0003a65d) status_small_pane_g3

0xc3bd,	// (0x0003a666) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0003d899) status_small_pane_g

0xc3c6,	// (0x0003a66f) status_small_pane_t1

0x1b56,	// (0x0002fdff) main_video3_pane

0xcf29,	// (0x0003b1d2) cams_zoom_vslider_pane

0xcf31,	// (0x0003b1da) image3_wide_pane_ParamLimits

0xcf31,	// (0x0003b1da) image3_wide_pane

0xcf4b,	// (0x0003b1f4) image3_wide_small_pane

0xcf57,	// (0x0003b200) main_video3_pane_g1_ParamLimits

0xcf57,	// (0x0003b200) main_video3_pane_g1

0xcf73,	// (0x0003b21c) main_video3_pane_g2_ParamLimits

0xcf73,	// (0x0003b21c) main_video3_pane_g2

0x0001,

0xf840,	// (0x0003dae9) main_video3_pane_g_ParamLimits

0xf840,	// (0x0003dae9) main_video3_pane_g

0xcf8f,	// (0x0003b238) main_video3_pane_t1_ParamLimits

0xcf8f,	// (0x0003b238) main_video3_pane_t1

0xcfba,	// (0x0003b263) main_video3_pane_t2_ParamLimits

0xcfba,	// (0x0003b263) main_video3_pane_t2

0xcfe5,	// (0x0003b28e) main_video3_pane_t3_ParamLimits

0xcfe5,	// (0x0003b28e) main_video3_pane_t3

0x0002,

0xf845,	// (0x0003daee) main_video3_pane_t_ParamLimits

0xf845,	// (0x0003daee) main_video3_pane_t

0xd012,	// (0x0003b2bb) cams_zoom_vslider_pane_g1

0xd01b,	// (0x0003b2c4) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0003daf5) cams_zoom_vslider_pane_g

0xd023,	// (0x0003b2cc) small_slider_vertical_pane

0xc7f0,	// (0x0003aa99) small_slider_vertical_pane_g1

0xc7f0,	// (0x0003aa99) small_slider_vertical_pane_g2

0xd02b,	// (0x0003b2d4) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0003dafa) small_slider_vertical_pane_g

0x1b56,	// (0x0002fdff) main_hwr_training_pane

0xd034,	// (0x0003b2dd) hwr_training_instruct_pane_ParamLimits

0xd034,	// (0x0003b2dd) hwr_training_instruct_pane

0x5f9b,	// (0x00034244) hwr_training_navi_pane_ParamLimits

0x5f9b,	// (0x00034244) hwr_training_navi_pane

0x5fba,	// (0x00034263) hwr_training_write_pane_ParamLimits

0x5fba,	// (0x00034263) hwr_training_write_pane

0x9c11,	// (0x00037eba) bg_frame_shadow_pane

0xd088,	// (0x0003b331) hwr_training_write_pane_g1

0xd090,	// (0x0003b339) hwr_training_write_pane_g2

0xd098,	// (0x0003b341) hwr_training_write_pane_g3

0xd0a0,	// (0x0003b349) hwr_training_write_pane_g4

0xd0a8,	// (0x0003b351) hwr_training_write_pane_g5

0xd0b0,	// (0x0003b359) hwr_training_write_pane_g6

0xd0b8,	// (0x0003b361) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0003db01) hwr_training_write_pane_g

0x5ff5,	// (0x0003429e) hwr_training_navi_pane_g1_ParamLimits

0x5ff5,	// (0x0003429e) hwr_training_navi_pane_g1

0x6007,	// (0x000342b0) hwr_training_navi_pane_g2_ParamLimits

0x6007,	// (0x000342b0) hwr_training_navi_pane_g2

0x6019,	// (0x000342c2) hwr_training_navi_pane_g3_ParamLimits

0x6019,	// (0x000342c2) hwr_training_navi_pane_g3

0x6029,	// (0x000342d2) hwr_training_navi_pane_g4_ParamLimits

0x6029,	// (0x000342d2) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0003db10) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0003db10) hwr_training_navi_pane_g

0x6036,	// (0x000342df) hwr_training_navi_pane_t1

0x6044,	// (0x000342ed) list_single_hwr_training_instruct_pane_ParamLimits

0x6044,	// (0x000342ed) list_single_hwr_training_instruct_pane

0xd0c0,	// (0x0003b369) list_single_hwr_training_instruct_pane_t1

0xc730,	// (0x0003a9d9) bg_frame_shadow_pane_g1

0xd0cf,	// (0x0003b378) bg_frame_shadow_pane_g2

0xd0d7,	// (0x0003b380) bg_frame_shadow_pane_g3

0xd0df,	// (0x0003b388) bg_frame_shadow_pane_g4

0xd0e7,	// (0x0003b390) bg_frame_shadow_pane_g5

0xd0ef,	// (0x0003b398) bg_frame_shadow_pane_g6

0xd0f7,	// (0x0003b3a0) bg_frame_shadow_pane_g7

0xa41c,	// (0x000386c5) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0003db1b) bg_frame_shadow_pane_g

0x1b56,	// (0x0002fdff) main_video_tele_dialer_pane

0x0eb4,	// (0x0002f15d) aid_size_cell_video_keypad_ParamLimits

0x0eb4,	// (0x0002f15d) aid_size_cell_video_keypad

0x0ece,	// (0x0002f177) grid_video_dialer_keypad_pane_ParamLimits

0x0ece,	// (0x0002f177) grid_video_dialer_keypad_pane

0x0f1c,	// (0x0002f1c5) video_down_pane_cp_ParamLimits

0x0f1c,	// (0x0002f1c5) video_down_pane_cp

0x0f32,	// (0x0002f1db) cell_video_dialer_keypad_pane_ParamLimits

0x0f32,	// (0x0002f1db) cell_video_dialer_keypad_pane

0xd0ff,	// (0x0003b3a8) bg_button_pane_cp08_ParamLimits

0xd0ff,	// (0x0003b3a8) bg_button_pane_cp08

0x6076,	// (0x0003431f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6076,	// (0x0003431f) cell_video_dialer_keypad_pane_g1

0x5821,	// (0x00033aca) mup3_rocker2_pane_ParamLimits

0x5821,	// (0x00033aca) mup3_rocker2_pane

0xc7f0,	// (0x0003aa99) mup3_rocker2_pane_g1

0x06a7,	// (0x0002e950) main_dialer2_pane

0x1b56,	// (0x0002fdff) main_mp4_pane

0x60ce,	// (0x00034377) main_mp4_pane_g1_ParamLimits

0x60ce,	// (0x00034377) main_mp4_pane_g1

0x60ce,	// (0x00034377) main_mp4_pane_g2_ParamLimits

0x60ce,	// (0x00034377) main_mp4_pane_g2

0x0f54,	// (0x0002f1fd) main_mp4_pane_g3_ParamLimits

0x0f54,	// (0x0002f1fd) main_mp4_pane_g3

0x60dc,	// (0x00034385) main_mp4_pane_g4_ParamLimits

0x60dc,	// (0x00034385) main_mp4_pane_g4

0x610a,	// (0x000343b3) main_mp4_pane_g5_ParamLimits

0x610a,	// (0x000343b3) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0003db3b) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0003db3b) main_mp4_pane_g

0x617e,	// (0x00034427) main_mp4_pane_t1_ParamLimits

0x617e,	// (0x00034427) main_mp4_pane_t1

0x61da,	// (0x00034483) main_mp4_pane_t2_ParamLimits

0x61da,	// (0x00034483) main_mp4_pane_t2

0xd10b,	// (0x0003b3b4) main_mp4_pane_t3_ParamLimits

0xd10b,	// (0x0003b3b4) main_mp4_pane_t3

0x622c,	// (0x000344d5) main_mp4_pane_t4_ParamLimits

0x622c,	// (0x000344d5) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0003db4c) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0003db4c) main_mp4_pane_t

0x6270,	// (0x00034519) mp4_progress_pane_ParamLimits

0x6270,	// (0x00034519) mp4_progress_pane

0x62ba,	// (0x00034563) mp4_rocker_pane_ParamLimits

0x62ba,	// (0x00034563) mp4_rocker_pane

0xd139,	// (0x0003b3e2) mp4_progress_pane_t1

0xd152,	// (0x0003b3fb) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0003db55) mp4_progress_pane_t

0xd16b,	// (0x0003b414) mup_progress_pane_cp04

0xd17e,	// (0x0003b427) mp4_rocker_pane_g1

0x0f90,	// (0x0002f239) aid_cell_size_keypad2_ParamLimits

0x0f90,	// (0x0002f239) aid_cell_size_keypad2

0x0fa6,	// (0x0002f24f) dialer2_ne_pane_ParamLimits

0x0fa6,	// (0x0002f24f) dialer2_ne_pane

0x0fc0,	// (0x0002f269) grid_dialer2_keypad_pane_ParamLimits

0x0fc0,	// (0x0002f269) grid_dialer2_keypad_pane

0xc5d5,	// (0x0003a87e) bg_popup_call_pane_cp07_ParamLimits

0xc5d5,	// (0x0003a87e) bg_popup_call_pane_cp07

0x62da,	// (0x00034583) dialer2_ne_pane_t1_ParamLimits

0x62da,	// (0x00034583) dialer2_ne_pane_t1

0x0fdc,	// (0x0002f285) cell_dialer2_keypad_pane_ParamLimits

0x0fdc,	// (0x0002f285) cell_dialer2_keypad_pane

0xd19a,	// (0x0003b443) bg_button_pane_pane_cp04_ParamLimits

0xd19a,	// (0x0003b443) bg_button_pane_pane_cp04

0x6316,	// (0x000345bf) cell_dialer2_keypad_pane_g1_ParamLimits

0x6316,	// (0x000345bf) cell_dialer2_keypad_pane_g1

0x2864,	// (0x00030b0d) aid_placing_vt_set_content_ParamLimits

0x2864,	// (0x00030b0d) aid_placing_vt_set_content

0x288c,	// (0x00030b35) aid_placing_vt_set_title_ParamLimits

0x288c,	// (0x00030b35) aid_placing_vt_set_title

0x1b56,	// (0x0002fdff) main_image3_pane

0x105c,	// (0x0002f305) area_side_right_pane_cp01_ParamLimits

0x105c,	// (0x0002f305) area_side_right_pane_cp01

0x60ce,	// (0x00034377) main_image3_pane_g1_ParamLimits

0x60ce,	// (0x00034377) main_image3_pane_g1

0x1073,	// (0x0002f31c) main_image3_pane_g2_ParamLimits

0x1073,	// (0x0002f31c) main_image3_pane_g2

0x109b,	// (0x0002f344) main_image3_pane_g3_ParamLimits

0x109b,	// (0x0002f344) main_image3_pane_g3

0x10c5,	// (0x0002f36e) main_image3_pane_g4_ParamLimits

0x10c5,	// (0x0002f36e) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0003db64) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0003db64) main_image3_pane_g

0x10ef,	// (0x0002f398) main_image3_pane_t1_ParamLimits

0x10ef,	// (0x0002f398) main_image3_pane_t1

0x1147,	// (0x0002f3f0) main_image3_pane_t2_ParamLimits

0x1147,	// (0x0002f3f0) main_image3_pane_t2

0x1199,	// (0x0002f442) main_image3_pane_t3_ParamLimits

0x1199,	// (0x0002f442) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0003db6d) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0003db6d) main_image3_pane_t

0xa8ec,	// (0x00038b95) grid_sctrl_middle_pane_cp01_ParamLimits

0xa8ec,	// (0x00038b95) grid_sctrl_middle_pane_cp01

0x63b0,	// (0x00034659) cell_sctrl_middle_pane_cp01_ParamLimits

0x63b0,	// (0x00034659) cell_sctrl_middle_pane_cp01

0x63cd,	// (0x00034676) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63cd,	// (0x00034676) cell_sctrl_middle_pane_cp01_g1

0x1b56,	// (0x0002fdff) main_call4_pane

0x1221,	// (0x0002f4ca) aid_size_button_call4_ParamLimits

0x1221,	// (0x0002f4ca) aid_size_button_call4

0x1254,	// (0x0002f4fd) call4_windows_pane_ParamLimits

0x1254,	// (0x0002f4fd) call4_windows_pane

0x1273,	// (0x0002f51c) grid_call4_button_pane_ParamLimits

0x1273,	// (0x0002f51c) grid_call4_button_pane

0x63ed,	// (0x00034696) call4_windows_conf_pane

0x6404,	// (0x000346ad) popup_call4_audio_first_window_ParamLimits

0x6404,	// (0x000346ad) popup_call4_audio_first_window

0x6454,	// (0x000346fd) popup_call4_audio_second_window_ParamLimits

0x6454,	// (0x000346fd) popup_call4_audio_second_window

0x646b,	// (0x00034714) popup_call4_audio_wait_window_ParamLimits

0x646b,	// (0x00034714) popup_call4_audio_wait_window

0x129c,	// (0x0002f545) cell_call4_button_pane_ParamLimits

0x129c,	// (0x0002f545) cell_call4_button_pane

0x6479,	// (0x00034722) bg_button_pane_cp09_ParamLimits

0x6479,	// (0x00034722) bg_button_pane_cp09

0x12c1,	// (0x0002f56a) cell_call4_button_pane_g1_ParamLimits

0x12c1,	// (0x0002f56a) cell_call4_button_pane_g1

0x12e7,	// (0x0002f590) cell_call4_button_pane_t1_ParamLimits

0x12e7,	// (0x0002f590) cell_call4_button_pane_t1

0xd1ae,	// (0x0003b457) popup_call4_audio_conf_window_ParamLimits

0xd1ae,	// (0x0003b457) popup_call4_audio_conf_window

0x5881,	// (0x00033b2a) mup3_progress_pane_t1_ParamLimits

0x58a0,	// (0x00033b49) mup3_progress_pane_t2_ParamLimits

0xcb24,	// (0x0003adcd) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0003da3d) mup3_progress_pane_t_ParamLimits

0xcb41,	// (0x0003adea) mup_progress_pane_cp03_ParamLimits

0x5ddf,	// (0x00034088) mup3_control_keys_pane_g4_copy1

0x629e,	// (0x00034547) mp4_rocker2_pane_ParamLimits

0x629e,	// (0x00034547) mp4_rocker2_pane

0xd1c2,	// (0x0003b46b) mp4_rocker2_pane_g1

0xd1ca,	// (0x0003b473) mp4_rocker2_pane_g2

0x64b7,	// (0x00034760) mp4_rocker2_pane_g3

0x64bf,	// (0x00034768) mp4_rocker2_pane_g4

0x64c7,	// (0x00034770) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0003db76) mp4_rocker2_pane_g

0x1b56,	// (0x0002fdff) main_camera4_pane

0x1b56,	// (0x0002fdff) main_video4_pane

0x0eea,	// (0x0002f193) main_video_tele_dialer_pane_t1_ParamLimits

0x0eea,	// (0x0002f193) main_video_tele_dialer_pane_t1

0x0f03,	// (0x0002f1ac) main_video_tele_dialer_pane_t2_ParamLimits

0x0f03,	// (0x0002f1ac) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0003db2c) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0003db2c) main_video_tele_dialer_pane_t

0x1329,	// (0x0002f5d2) cam4_autofocus_pane_ParamLimits

0x1329,	// (0x0002f5d2) cam4_autofocus_pane

0x133f,	// (0x0002f5e8) cam4_image_uncrop_pane_ParamLimits

0x133f,	// (0x0002f5e8) cam4_image_uncrop_pane

0x1359,	// (0x0002f602) cam4_indicators_pane_ParamLimits

0x1359,	// (0x0002f602) cam4_indicators_pane

0x1384,	// (0x0002f62d) main_camera4_pane_g1_ParamLimits

0x1384,	// (0x0002f62d) main_camera4_pane_g1

0x1396,	// (0x0002f63f) main_camera4_pane_g2_ParamLimits

0x1396,	// (0x0002f63f) main_camera4_pane_g2

0x13a9,	// (0x0002f652) main_camera4_pane_g3_ParamLimits

0x13a9,	// (0x0002f652) main_camera4_pane_g3

0x13bc,	// (0x0002f665) main_camera4_pane_g4_ParamLimits

0x13bc,	// (0x0002f665) main_camera4_pane_g4

0x13cf,	// (0x0002f678) main_camera4_pane_g5_ParamLimits

0x13cf,	// (0x0002f678) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0003db81) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0003db81) main_camera4_pane_g

0x13f3,	// (0x0002f69c) main_camera4_pane_t1_ParamLimits

0x13f3,	// (0x0002f69c) main_camera4_pane_t1

0x64ff,	// (0x000347a8) bg_tb_trans_pane_cp06

0x6515,	// (0x000347be) cam4_indicators_pane_g1

0x6526,	// (0x000347cf) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0003db9c) cam4_indicators_pane_g

0x653e,	// (0x000347e7) cam4_indicators_pane_t1

0x1443,	// (0x0002f6ec) main_video4_pane_g1_ParamLimits

0x1443,	// (0x0002f6ec) main_video4_pane_g1

0x1452,	// (0x0002f6fb) main_video4_pane_g2_ParamLimits

0x1452,	// (0x0002f6fb) main_video4_pane_g2

0x1461,	// (0x0002f70a) main_video4_pane_g3_ParamLimits

0x1461,	// (0x0002f70a) main_video4_pane_g3

0x1470,	// (0x0002f719) main_video4_pane_g4_ParamLimits

0x1470,	// (0x0002f719) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0003dba3) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0003dba3) main_video4_pane_g

0x148e,	// (0x0002f737) vid4_indicators_pane_ParamLimits

0x148e,	// (0x0002f737) vid4_indicators_pane

0x14bc,	// (0x0002f765) video4_image_uncrop_cif_pane_ParamLimits

0x14bc,	// (0x0002f765) video4_image_uncrop_cif_pane

0x14d6,	// (0x0002f77f) video4_image_uncrop_nhd_pane_ParamLimits

0x14d6,	// (0x0002f77f) video4_image_uncrop_nhd_pane

0x133f,	// (0x0002f5e8) video4_image_uncrop_vga_pane_ParamLimits

0x133f,	// (0x0002f5e8) video4_image_uncrop_vga_pane

0x1b3c,	// (0x0002fde5) bg_tb_trans_pane_cp07

0x6568,	// (0x00034811) vid4_indicators_pane_g1

0x657c,	// (0x00034825) vid4_indicators_pane_g2

0x6590,	// (0x00034839) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0003dbae) vid4_indicators_pane_g

0x65bd,	// (0x00034866) vid4_indicators_pane_t1

0x65d4,	// (0x0003487d) cam4_autofocus_pane_g1

0x65dc,	// (0x00034885) cam4_autofocus_pane_g2

0x65e4,	// (0x0003488d) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0003dbb9) cam4_autofocus_pane_g

0x65ec,	// (0x00034895) cam4_autofocus_pane_g3_copy1

0x605a,	// (0x00034303) video_down_pane_cp_t1

0x6068,	// (0x00034311) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0003db31) video_down_pane_cp_t

0x1b3c,	// (0x0002fde5) popup_vitu2_window_ParamLimits

0x1b3c,	// (0x0002fde5) popup_vitu2_window

0x14ea,	// (0x0002f793) aid_size_cell2_itu2_ParamLimits

0x14ea,	// (0x0002f793) aid_size_cell2_itu2

0x1510,	// (0x0002f7b9) aid_size_cell_itu2_ParamLimits

0x1510,	// (0x0002f7b9) aid_size_cell_itu2

0x156c,	// (0x0002f815) bg_popup_window_pane_cp09_ParamLimits

0x156c,	// (0x0002f815) bg_popup_window_pane_cp09

0x157a,	// (0x0002f823) field_vitu2_entry_pane_ParamLimits

0x157a,	// (0x0002f823) field_vitu2_entry_pane

0x15a0,	// (0x0002f849) grid_vitu2_function_pane_ParamLimits

0x15a0,	// (0x0002f849) grid_vitu2_function_pane

0x15f1,	// (0x0002f89a) grid_vitu2_itu_pane_ParamLimits

0x15f1,	// (0x0002f89a) grid_vitu2_itu_pane

0x1687,	// (0x0002f930) cell_vitu2_itu_pane_ParamLimits

0x1687,	// (0x0002f930) cell_vitu2_itu_pane

0x16b3,	// (0x0002f95c) cell_vitu2_function_pane_ParamLimits

0x16b3,	// (0x0002f95c) cell_vitu2_function_pane

0xd1d2,	// (0x0003b47b) bg_popup_call_pane_cp08_ParamLimits

0xd1d2,	// (0x0003b47b) bg_popup_call_pane_cp08

0xd1e9,	// (0x0003b492) field_vitu2_entry_pane_g1

0xd1f5,	// (0x0003b49e) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0003dbc0) field_vitu2_entry_pane_g

0x65f4,	// (0x0003489d) field_vitu2_entry_pane_t1_ParamLimits

0x65f4,	// (0x0003489d) field_vitu2_entry_pane_t1

0xd20f,	// (0x0003b4b8) field_vitu2_entry_pane_t2_ParamLimits

0xd20f,	// (0x0003b4b8) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0003dbc7) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0003dbc7) field_vitu2_entry_pane_t

0x16f2,	// (0x0002f99b) bg_button_pane_cp010_ParamLimits

0x16f2,	// (0x0002f99b) bg_button_pane_cp010

0x6623,	// (0x000348cc) cell_vitu2_itu_pane_g1

0x170e,	// (0x0002f9b7) cell_vitu2_itu_pane_t1_ParamLimits

0x170e,	// (0x0002f9b7) cell_vitu2_itu_pane_t1

0x176c,	// (0x0002fa15) cell_vitu2_itu_pane_t2_ParamLimits

0x176c,	// (0x0002fa15) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0003dbd1) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0003dbd1) cell_vitu2_itu_pane_t

0x1b3c,	// (0x0002fde5) bg_button_pane_cp011

0x1858,	// (0x0002fb01) cell_vitu2_function_pane_g1

0x1b56,	// (0x0002fdff) main_myfav_hc_pane

0x11e9,	// (0x0002f492) popup_image3_note_pane_ParamLimits

0x11e9,	// (0x0002f492) popup_image3_note_pane

0x1205,	// (0x0002f4ae) popup_image3_tool_bar_pane_ParamLimits

0x1205,	// (0x0002f4ae) popup_image3_tool_bar_pane

0x17fa,	// (0x0002faa3) cell_vitu2_itu_pane_t3_ParamLimits

0x17fa,	// (0x0002faa3) cell_vitu2_itu_pane_t3

0x9c11,	// (0x00037eba) bg_popup_trans_pane

0xd234,	// (0x0003b4dd) grid_image3_tool_bar_pane

0xd23e,	// (0x0003b4e7) bg_popup_trans_pane_g1

0xa7ad,	// (0x00038a56) bg_popup_trans_pane_g2

0xd246,	// (0x0003b4ef) bg_popup_trans_pane_g3

0xd24e,	// (0x0003b4f7) bg_popup_trans_pane_g4

0xd256,	// (0x0003b4ff) bg_popup_trans_pane_g5

0xd25e,	// (0x0003b507) bg_popup_trans_pane_g6

0xd266,	// (0x0003b50f) bg_popup_trans_pane_g7

0xd26e,	// (0x0003b517) bg_popup_trans_pane_g8

0xa78d,	// (0x00038a36) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0003dbd8) bg_popup_trans_pane_g

0xd276,	// (0x0003b51f) cell_image3_tool_bar_pane_ParamLimits

0xd276,	// (0x0003b51f) cell_image3_tool_bar_pane

0xc7f0,	// (0x0003aa99) cell_image3_tool_bar_pane_g1

0x9c11,	// (0x00037eba) bg_popup_trans_pane_cp1

0xd28a,	// (0x0003b533) popup_image3_note_pane_t1

0xd298,	// (0x0003b541) popup_image3_note_pane_t2

0xd2a6,	// (0x0003b54f) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0003dbeb) popup_image3_note_pane_t

0xd2b4,	// (0x0003b55d) popup_image3_note_pane_t3_copy1

0x6635,	// (0x000348de) bg_myfav_hc_instruction_pane_ParamLimits

0x6635,	// (0x000348de) bg_myfav_hc_instruction_pane

0x6649,	// (0x000348f2) cell_myfav_contact_pane_ParamLimits

0x6649,	// (0x000348f2) cell_myfav_contact_pane

0x6667,	// (0x00034910) cell_myfav_contact_pane_cp1_ParamLimits

0x6667,	// (0x00034910) cell_myfav_contact_pane_cp1

0x667f,	// (0x00034928) cell_myfav_contact_pane_cp2_ParamLimits

0x667f,	// (0x00034928) cell_myfav_contact_pane_cp2

0x6697,	// (0x00034940) cell_myfav_contact_pane_cp3_ParamLimits

0x6697,	// (0x00034940) cell_myfav_contact_pane_cp3

0x66ae,	// (0x00034957) cell_myfav_contact_pane_cp4_ParamLimits

0x66ae,	// (0x00034957) cell_myfav_contact_pane_cp4

0x66c6,	// (0x0003496f) cell_myfav_contact_pane_cp5_ParamLimits

0x66c6,	// (0x0003496f) cell_myfav_contact_pane_cp5

0x66da,	// (0x00034983) cell_myfav_contact_pane_cp6_ParamLimits

0x66da,	// (0x00034983) cell_myfav_contact_pane_cp6

0x66f0,	// (0x00034999) cell_myfav_contact_pane_cp7_ParamLimits

0x66f0,	// (0x00034999) cell_myfav_contact_pane_cp7

0xd2c2,	// (0x0003b56b) listscroll_gen_pane_cp05

0x670a,	// (0x000349b3) main_myfav_hc_pane_g1_ParamLimits

0x670a,	// (0x000349b3) main_myfav_hc_pane_g1

0x6724,	// (0x000349cd) main_myfav_hc_pane_g2_ParamLimits

0x6724,	// (0x000349cd) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0003dbf2) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0003dbf2) main_myfav_hc_pane_g

0x6756,	// (0x000349ff) main_myfav_hc_pane_t1_ParamLimits

0x6756,	// (0x000349ff) main_myfav_hc_pane_t1

0xd2cb,	// (0x0003b574) main_myfav_hc_pane_t2_ParamLimits

0xd2cb,	// (0x0003b574) main_myfav_hc_pane_t2

0xd2dd,	// (0x0003b586) main_myfav_hc_pane_t3_ParamLimits

0xd2dd,	// (0x0003b586) main_myfav_hc_pane_t3

0x676d,	// (0x00034a16) main_myfav_hc_pane_t4_ParamLimits

0x676d,	// (0x00034a16) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0003dbf9) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0003dbf9) main_myfav_hc_pane_t

0xc7f0,	// (0x0003aa99) bg_myfav_hc_instruction_pane_g1

0xd2ef,	// (0x0003b598) cell_myfav_contact_pane_g1_ParamLimits

0xd2ef,	// (0x0003b598) cell_myfav_contact_pane_g1

0xd2ef,	// (0x0003b598) cell_myfav_contact_pane_g2_ParamLimits

0xd2ef,	// (0x0003b598) cell_myfav_contact_pane_g2

0xd2fb,	// (0x0003b5a4) cell_myfav_contact_pane_g3_ParamLimits

0xd2fb,	// (0x0003b5a4) cell_myfav_contact_pane_g3

0xcb0e,	// (0x0003adb7) cell_myfav_contact_pane_g4_ParamLimits

0xcb0e,	// (0x0003adb7) cell_myfav_contact_pane_g4

0xd308,	// (0x0003b5b1) cell_myfav_contact_pane_g5_ParamLimits

0xd308,	// (0x0003b5b1) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0003dc04) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0003dc04) cell_myfav_contact_pane_g

0x673e,	// (0x000349e7) main_myfav_hc_pane_g3_ParamLimits

0x673e,	// (0x000349e7) main_myfav_hc_pane_g3

0x02ec,	// (0x0002e595) popup_adpt_find_window

0x6795,	// (0x00034a3e) afind_page_pane_ParamLimits

0x6795,	// (0x00034a3e) afind_page_pane

0x67aa,	// (0x00034a53) aid_size_cell_afind_ParamLimits

0x67aa,	// (0x00034a53) aid_size_cell_afind

0x67c8,	// (0x00034a71) bg_popup_sub_pane_cp09_ParamLimits

0x67c8,	// (0x00034a71) bg_popup_sub_pane_cp09

0x67d5,	// (0x00034a7e) find_pane_cp01_ParamLimits

0x67d5,	// (0x00034a7e) find_pane_cp01

0xd314,	// (0x0003b5bd) grid_afind_control_pane_ParamLimits

0xd314,	// (0x0003b5bd) grid_afind_control_pane

0x67e2,	// (0x00034a8b) grid_afind_pane_ParamLimits

0x67e2,	// (0x00034a8b) grid_afind_pane

0x6801,	// (0x00034aaa) cell_afind_pane_ParamLimits

0x6801,	// (0x00034aaa) cell_afind_pane

0xc7f0,	// (0x0003aa99) afind_page_pane_g1

0x6868,	// (0x00034b11) afind_page_pane_g2

0x6871,	// (0x00034b1a) afind_page_pane_g3

0x0002,

0xf966,	// (0x0003dc0f) afind_page_pane_g

0x687a,	// (0x00034b23) afind_page_pane_t1

0xd328,	// (0x0003b5d1) cell_afind_grid_control_pane_ParamLimits

0xd328,	// (0x0003b5d1) cell_afind_grid_control_pane

0xd19a,	// (0x0003b443) bg_button_pane_cp69_ParamLimits

0xd19a,	// (0x0003b443) bg_button_pane_cp69

0x689a,	// (0x00034b43) cell_afind_pane_g1_ParamLimits

0x689a,	// (0x00034b43) cell_afind_pane_g1

0x68a7,	// (0x00034b50) cell_afind_pane_t1_ParamLimits

0x68a7,	// (0x00034b50) cell_afind_pane_t1

0xa5a6,	// (0x0003884f) bg_button_pane_cp72

0xd337,	// (0x0003b5e0) cell_afind_grid_control_pane_g1

0x447f,	// (0x00032728) aid_image_placing_area_ParamLimits

0x447f,	// (0x00032728) aid_image_placing_area

0xce34,	// (0x0003b0dd) field_vitu_entry_pane_g1_ParamLimits

0xce34,	// (0x0003b0dd) field_vitu_entry_pane_g1

0xce40,	// (0x0003b0e9) field_vitu_entry_pane_g2_ParamLimits

0xce40,	// (0x0003b0e9) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0003dabc) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0003dabc) field_vitu_entry_pane_g

0x5ea8,	// (0x00034151) cell_vitu_itu_pane_g1_ParamLimits

0x5eea,	// (0x00034193) cell_vitu_itu_pane_t3_ParamLimits

0x5eea,	// (0x00034193) cell_vitu_itu_pane_t3

0xd139,	// (0x0003b3e2) mp4_progress_pane_t1_ParamLimits

0xd152,	// (0x0003b3fb) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0003db55) mp4_progress_pane_t_ParamLimits

0xd16b,	// (0x0003b414) mup_progress_pane_cp04_ParamLimits

0x6781,	// (0x00034a2a) main_myfav_hc_pane_t5_ParamLimits

0x6781,	// (0x00034a2a) main_myfav_hc_pane_t5

0x1ab9,	// (0x0002fd62) aid_zoom_text_primary

0x02ec,	// (0x0002e595) popup_adpt_find_window_ParamLimits

0x1b3c,	// (0x0002fde5) main_cam_set_pane

0x1370,	// (0x0002f619) cam4_zoom_pane_ParamLimits

0x1370,	// (0x0002f619) cam4_zoom_pane

0x68b9,	// (0x00034b62) main_cam_set_pane_g1_ParamLimits

0x68b9,	// (0x00034b62) main_cam_set_pane_g1

0x68c7,	// (0x00034b70) main_cam_set_pane_g2_ParamLimits

0x68c7,	// (0x00034b70) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0003dc16) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0003dc16) main_cam_set_pane_g

0x68e8,	// (0x00034b91) main_cam_set_pane_t1_ParamLimits

0x68e8,	// (0x00034b91) main_cam_set_pane_t1

0x6903,	// (0x00034bac) main_cset_listscroll_pane_ParamLimits

0x6903,	// (0x00034bac) main_cset_listscroll_pane

0x6923,	// (0x00034bcc) main_cset_slider_pane_ParamLimits

0x6923,	// (0x00034bcc) main_cset_slider_pane

0xd348,	// (0x0003b5f1) main_cset_list_pane_ParamLimits

0xd348,	// (0x0003b5f1) main_cset_list_pane

0xd358,	// (0x0003b601) scroll_pane_cp028

0x6949,	// (0x00034bf2) aid_area_touch_slider

0x6965,	// (0x00034c0e) cset_slider_pane

0x698f,	// (0x00034c38) main_cset_slider_pane_g1

0x69a4,	// (0x00034c4d) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0003dc1b) main_cset_slider_pane_g

0xd3a9,	// (0x0003b652) main_cset_slider_pane_t1

0x6a48,	// (0x00034cf1) main_cset_slider_pane_t2

0x6a62,	// (0x00034d0b) main_cset_slider_pane_t3

0x6a7c,	// (0x00034d25) main_cset_slider_pane_t4

0x6a96,	// (0x00034d3f) main_cset_slider_pane_t5

0x6ab0,	// (0x00034d59) main_cset_slider_pane_t6

0x6ac5,	// (0x00034d6e) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0003dc40) main_cset_slider_pane_t

0x6bc9,	// (0x00034e72) cset_list_set_pane_ParamLimits

0x6bc9,	// (0x00034e72) cset_list_set_pane

0x6bdb,	// (0x00034e84) aid_position_infowindow_above

0x6be3,	// (0x00034e8c) aid_position_infowindow_below

0x6beb,	// (0x00034e94) cset_list_set_pane_g1_ParamLimits

0x6beb,	// (0x00034e94) cset_list_set_pane_g1

0x6bf7,	// (0x00034ea0) cset_list_set_pane_g3_ParamLimits

0x6bf7,	// (0x00034ea0) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0003dc5f) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0003dc5f) cset_list_set_pane_g

0x6c06,	// (0x00034eaf) cset_list_set_pane_t1_ParamLimits

0x6c06,	// (0x00034eaf) cset_list_set_pane_t1

0xa8ec,	// (0x00038b95) list_highlight_pane_cp021_ParamLimits

0xa8ec,	// (0x00038b95) list_highlight_pane_cp021

0xb0d9,	// (0x00039382) cset_slider_pane_g1

0xb0eb,	// (0x00039394) cset_slider_pane_g2

0xb0e2,	// (0x0003938b) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0003dc64) cset_slider_pane_g

0x6c1b,	// (0x00034ec4) aid_area_touch_cam4_zoom

0x6c23,	// (0x00034ecc) cam4_zoom_cont_pane

0x6c2b,	// (0x00034ed4) cam4_zoom_pane_g1

0x6c33,	// (0x00034edc) cam4_zoom_pane_g2

0x186c,	// (0x0002fb15) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0003dc6b) cam4_zoom_pane_g

0x6c3b,	// (0x00034ee4) cam4_zoom_cont_pane_g1

0x6c44,	// (0x00034eed) cam4_zoom_cont_pane_g2

0x6c4d,	// (0x00034ef6) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0003dc72) cam4_zoom_cont_pane_g

0x123f,	// (0x0002f4e8) call4_image_pane_ParamLimits

0x123f,	// (0x0002f4e8) call4_image_pane

0x63ed,	// (0x00034696) call4_windows_conf_pane_ParamLimits

0x6432,	// (0x000346db) popup_call4_audio_in_window_ParamLimits

0x6432,	// (0x000346db) popup_call4_audio_in_window

0x9c11,	// (0x00037eba) bg_popup_call2_act_pane_cp02

0xd1a6,	// (0x0003b44f) call4_list_conf_pane

0xc7f0,	// (0x0003aa99) call4_image_pane_g1

0xc7f0,	// (0x0003aa99) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0003d97d) call4_image_pane_g

0xd449,	// (0x0003b6f2) list_single_graphic_popup_conf4_pane_ParamLimits

0xd449,	// (0x0003b6f2) list_single_graphic_popup_conf4_pane

0x9c11,	// (0x00037eba) list_highlight_pane_cp022

0xd45c,	// (0x0003b705) list_single_graphic_popup_conf4_pane_g1

0xacd5,	// (0x00038f7e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0003dc79) list_single_graphic_popup_conf4_pane_g

0xd464,	// (0x0003b70d) list_single_graphic_popup_conf4_pane_t1

0x29b0,	// (0x00030c59) popup_vtel_slider_window_ParamLimits

0x29b0,	// (0x00030c59) popup_vtel_slider_window

0xd188,	// (0x0003b431) dialer2_ne_pane_t2_ParamLimits

0xd188,	// (0x0003b431) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0003db5a) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0003db5a) dialer2_ne_pane_t

0xc5d5,	// (0x0003a87e) bg_popup_sub_pane_cp010_ParamLimits

0xc5d5,	// (0x0003a87e) bg_popup_sub_pane_cp010

0x6c56,	// (0x00034eff) popup_vtel_slider_window_g1_ParamLimits

0x6c56,	// (0x00034eff) popup_vtel_slider_window_g1

0x6c69,	// (0x00034f12) popup_vtel_slider_window_g2_ParamLimits

0x6c69,	// (0x00034f12) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0003dc7e) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0003dc7e) popup_vtel_slider_window_g

0x6cbf,	// (0x00034f68) vtel_slider_pane_ParamLimits

0x6cbf,	// (0x00034f68) vtel_slider_pane

0x6ce1,	// (0x00034f8a) vtel_slider_pane_g1_ParamLimits

0x6ce1,	// (0x00034f8a) vtel_slider_pane_g1

0x6cf5,	// (0x00034f9e) vtel_slider_pane_g2_ParamLimits

0x6cf5,	// (0x00034f9e) vtel_slider_pane_g2

0x6d0d,	// (0x00034fb6) vtel_slider_pane_g3_ParamLimits

0x6d0d,	// (0x00034fb6) vtel_slider_pane_g3

0x6ce1,	// (0x00034f8a) vtel_slider_pane_g4_ParamLimits

0x6ce1,	// (0x00034f8a) vtel_slider_pane_g4

0x6d23,	// (0x00034fcc) vtel_slider_pane_g5_ParamLimits

0x6d23,	// (0x00034fcc) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0003dc87) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0003dc87) vtel_slider_pane_g

0x1b3c,	// (0x0002fde5) main_gallery2_pane

0x153c,	// (0x0002f7e5) aid_size_row_itut2_dropdow_list_ParamLimits

0x153c,	// (0x0002f7e5) aid_size_row_itut2_dropdow_list

0x15c8,	// (0x0002f871) grid_vitu2_function_top_pane_ParamLimits

0x15c8,	// (0x0002f871) grid_vitu2_function_top_pane

0x1632,	// (0x0002f8db) popup_vitu2_dropdown_list_window_ParamLimits

0x1632,	// (0x0002f8db) popup_vitu2_dropdown_list_window

0x165b,	// (0x0002f904) popup_vitu2_match_list_window

0x1874,	// (0x0002fb1d) cell_vitu2_function_top_pane_ParamLimits

0x1874,	// (0x0002fb1d) cell_vitu2_function_top_pane

0x188c,	// (0x0002fb35) cell_vitu2_function_top_pane_cp01_ParamLimits

0x188c,	// (0x0002fb35) cell_vitu2_function_top_pane_cp01

0x18a8,	// (0x0002fb51) cell_vitu2_function_top_wide_pane_ParamLimits

0x18a8,	// (0x0002fb51) cell_vitu2_function_top_wide_pane

0x1b3c,	// (0x0002fde5) bg_button_pane_cp012

0x18c4,	// (0x0002fb6d) cell_vitu2_function_top_pane_g1

0x6d39,	// (0x00034fe2) bg_button_pane_cp013_ParamLimits

0x6d39,	// (0x00034fe2) bg_button_pane_cp013

0x6d55,	// (0x00034ffe) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d55,	// (0x00034ffe) cell_vitu2_function_top_wide_pane_g1

0x1b3c,	// (0x0002fde5) bg_popup_sub_pane_cp20

0x18d8,	// (0x0002fb81) list_vitu2_match_list_pane

0xd23e,	// (0x0003b4e7) bg_popup_sub_pane_cp20_g1

0xd246,	// (0x0003b4ef) bg_popup_sub_pane_cp20_g2

0xa7ad,	// (0x00038a56) bg_popup_sub_pane_cp20_g3

0xd24e,	// (0x0003b4f7) bg_popup_sub_pane_cp20_g4

0xa78d,	// (0x00038a36) bg_popup_sub_pane_cp20_g5

0xd488,	// (0x0003b731) bg_popup_sub_pane_cp20_g6

0xd25e,	// (0x0003b507) bg_popup_sub_pane_cp20_g7

0xd266,	// (0x0003b50f) bg_popup_sub_pane_cp20_g8

0xd26e,	// (0x0003b517) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0003dc92) bg_popup_sub_pane_cp20_g

0x6d6d,	// (0x00035016) list_vitu2_match_list_item_pane_ParamLimits

0x6d6d,	// (0x00035016) list_vitu2_match_list_item_pane

0x6d7f,	// (0x00035028) list_vitu2_match_list_item_pane_t1

0x1b56,	// (0x0002fdff) bg_popup_sub_pane_cp21

0x6ddd,	// (0x00035086) grid_vitu2_dropdown_list_pane

0x18f6,	// (0x0002fb9f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x18f6,	// (0x0002fb9f) cell_vitu2_dropdown_list_char_pane

0x1917,	// (0x0002fbc0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1917,	// (0x0002fbc0) cell_vitu2_dropdown_list_ctrl_pane

0xd490,	// (0x0003b739) cell_vitu2_dropdown_list_char_pane_g1

0xd499,	// (0x0003b742) cell_vitu2_dropdown_list_char_pane_g2

0xd4a2,	// (0x0003b74b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0003dcaf) cell_vitu2_dropdown_list_char_pane_g

0x1943,	// (0x0002fbec) cell_vitu2_dropdown_list_char_pane_t1

0x6de5,	// (0x0003508e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6de5,	// (0x0003508e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6df2,	// (0x0003509b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6df2,	// (0x0003509b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6dff,	// (0x000350a8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6dff,	// (0x000350a8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1951,	// (0x0002fbfa) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1951,	// (0x0002fbfa) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64ff,	// (0x000347a8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64ff,	// (0x000347a8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0003dcb6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0003dcb6) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e0c,	// (0x000350b5) aid_size_cell_gallery2_ParamLimits

0x6e0c,	// (0x000350b5) aid_size_cell_gallery2

0x6e2a,	// (0x000350d3) grid_gallery2_pane_ParamLimits

0x6e2a,	// (0x000350d3) grid_gallery2_pane

0x6e44,	// (0x000350ed) scroll_pane_cp029_ParamLimits

0x6e44,	// (0x000350ed) scroll_pane_cp029

0x6e55,	// (0x000350fe) cell_gallery2_pane_ParamLimits

0x6e55,	// (0x000350fe) cell_gallery2_pane

0xd4ab,	// (0x0003b754) cell_gallery2_pane_g2

0x6eb4,	// (0x0003515d) cell_gallery2_pane_g3

0xd4b3,	// (0x0003b75c) cell_gallery2_pane_g4

0xd4bb,	// (0x0003b764) cell_gallery2_pane_g5

0xa554,	// (0x000387fd) grid_highlight_pane_cp10

0x165b,	// (0x0002f904) popup_vitu2_match_list_window_ParamLimits

0x1670,	// (0x0002f919) popup_vitu2_query_window_ParamLimits

0x1670,	// (0x0002f919) popup_vitu2_query_window

0x1b56,	// (0x0002fdff) bg_vitu2_candi_button_pane

0xd490,	// (0x0003b739) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd499,	// (0x0003b742) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4a2,	// (0x0003b74b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6ebc,	// (0x00035165) bg_button_pane_cp015

0x6ed0,	// (0x00035179) bg_button_pane_cp016

0x6ee3,	// (0x0003518c) bg_button_pane_cp017

0xc3e8,	// (0x0003a691) bg_popup_sub_pane_cp22

0xd4c3,	// (0x0003b76c) popup_vitu2_query_window_g1

0x6f28,	// (0x000351d1) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0003dcc1) popup_vitu2_query_window_g

0x6f47,	// (0x000351f0) popup_vitu2_query_window_t1_ParamLimits

0x6f47,	// (0x000351f0) popup_vitu2_query_window_t1

0x6f7c,	// (0x00035225) popup_vitu2_query_window_t2_ParamLimits

0x6f7c,	// (0x00035225) popup_vitu2_query_window_t2

0x6f8e,	// (0x00035237) popup_vitu2_query_window_t3_ParamLimits

0x6f8e,	// (0x00035237) popup_vitu2_query_window_t3

0x6fb6,	// (0x0003525f) popup_vitu2_query_window_t4_ParamLimits

0x6fb6,	// (0x0003525f) popup_vitu2_query_window_t4

0x6fd7,	// (0x00035280) popup_vitu2_query_window_t5_ParamLimits

0x6fd7,	// (0x00035280) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0003dcc8) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0003dcc8) popup_vitu2_query_window_t

0xd340,	// (0x0003b5e9) main_cset_text_pane

0x6949,	// (0x00034bf2) aid_area_touch_slider_ParamLimits

0x6965,	// (0x00034c0e) cset_slider_pane_ParamLimits

0x698f,	// (0x00034c38) main_cset_slider_pane_g1_ParamLimits

0x69a4,	// (0x00034c4d) main_cset_slider_pane_g2_ParamLimits

0xd361,	// (0x0003b60a) main_cset_slider_pane_g3_ParamLimits

0xd361,	// (0x0003b60a) main_cset_slider_pane_g3

0x69b9,	// (0x00034c62) main_cset_slider_pane_g4_ParamLimits

0x69b9,	// (0x00034c62) main_cset_slider_pane_g4

0x69c8,	// (0x00034c71) main_cset_slider_pane_g5_ParamLimits

0x69c8,	// (0x00034c71) main_cset_slider_pane_g5

0x69d4,	// (0x00034c7d) main_cset_slider_pane_g6_ParamLimits

0x69d4,	// (0x00034c7d) main_cset_slider_pane_g6

0xf972,	// (0x0003dc1b) main_cset_slider_pane_g_ParamLimits

0xd3a9,	// (0x0003b652) main_cset_slider_pane_t1_ParamLimits

0x6a48,	// (0x00034cf1) main_cset_slider_pane_t2_ParamLimits

0x6a62,	// (0x00034d0b) main_cset_slider_pane_t3_ParamLimits

0x6a7c,	// (0x00034d25) main_cset_slider_pane_t4_ParamLimits

0x6a96,	// (0x00034d3f) main_cset_slider_pane_t5_ParamLimits

0x6ab0,	// (0x00034d59) main_cset_slider_pane_t6_ParamLimits

0x6ac5,	// (0x00034d6e) main_cset_slider_pane_t7_ParamLimits

0x6aef,	// (0x00034d98) main_cset_slider_pane_t8_ParamLimits

0x6aef,	// (0x00034d98) main_cset_slider_pane_t8

0x6b17,	// (0x00034dc0) main_cset_slider_pane_t9_ParamLimits

0x6b17,	// (0x00034dc0) main_cset_slider_pane_t9

0x6b3f,	// (0x00034de8) main_cset_slider_pane_t10_ParamLimits

0x6b3f,	// (0x00034de8) main_cset_slider_pane_t10

0x6b67,	// (0x00034e10) main_cset_slider_pane_t11_ParamLimits

0x6b67,	// (0x00034e10) main_cset_slider_pane_t11

0x6b8f,	// (0x00034e38) main_cset_slider_pane_t12_ParamLimits

0x6b8f,	// (0x00034e38) main_cset_slider_pane_t12

0x6bac,	// (0x00034e55) main_cset_slider_pane_t13_ParamLimits

0x6bac,	// (0x00034e55) main_cset_slider_pane_t13

0xf997,	// (0x0003dc40) main_cset_slider_pane_t_ParamLimits

0x9c11,	// (0x00037eba) bg_popup_sub_pane_cp011

0xd4cf,	// (0x0003b778) main_cset_text_pane_g1

0xd4d7,	// (0x0003b780) main_cset_text_pane_t1

0xd4e5,	// (0x0003b78e) main_cset_text_pane_t2

0xd4f3,	// (0x0003b79c) main_cset_text_pane_t3

0xd501,	// (0x0003b7aa) main_cset_text_pane_t4

0xd50f,	// (0x0003b7b8) main_cset_text_pane_t5

0xd51d,	// (0x0003b7c6) main_cset_text_pane_t6

0xd52b,	// (0x0003b7d4) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0003dcd7) main_cset_text_pane_t

0x1b56,	// (0x0002fdff) main_cam4_burst_pane

0x1b56,	// (0x0002fdff) main_cam5_pane

0x6888,	// (0x00034b31) bg_button_pane_cp019

0x6891,	// (0x00034b3a) bg_button_pane_cp020

0xd36d,	// (0x0003b616) main_cset_slider_pane_g7_ParamLimits

0xd36d,	// (0x0003b616) main_cset_slider_pane_g7

0xd379,	// (0x0003b622) main_cset_slider_pane_g8_ParamLimits

0xd379,	// (0x0003b622) main_cset_slider_pane_g8

0x69e8,	// (0x00034c91) main_cset_slider_pane_g9_ParamLimits

0x69e8,	// (0x00034c91) main_cset_slider_pane_g9

0x69f4,	// (0x00034c9d) main_cset_slider_pane_g10_ParamLimits

0x69f4,	// (0x00034c9d) main_cset_slider_pane_g10

0x6a00,	// (0x00034ca9) main_cset_slider_pane_g11_ParamLimits

0x6a00,	// (0x00034ca9) main_cset_slider_pane_g11

0x6a0c,	// (0x00034cb5) main_cset_slider_pane_g12_ParamLimits

0x6a0c,	// (0x00034cb5) main_cset_slider_pane_g12

0x6a18,	// (0x00034cc1) main_cset_slider_pane_g13_ParamLimits

0x6a18,	// (0x00034cc1) main_cset_slider_pane_g13

0x6a24,	// (0x00034ccd) main_cset_slider_pane_g14_ParamLimits

0x6a24,	// (0x00034ccd) main_cset_slider_pane_g14

0x6a30,	// (0x00034cd9) main_cset_slider_pane_g15_ParamLimits

0x6a30,	// (0x00034cd9) main_cset_slider_pane_g15

0xd3d7,	// (0x0003b680) main_cset_slider_pane_t14_ParamLimits

0xd3d7,	// (0x0003b680) main_cset_slider_pane_t14

0xd410,	// (0x0003b6b9) main_cset_slider_pane_t15_ParamLimits

0xd410,	// (0x0003b6b9) main_cset_slider_pane_t15

0x704e,	// (0x000352f7) aid_cam4_burst_size_cell_ParamLimits

0x704e,	// (0x000352f7) aid_cam4_burst_size_cell

0x706e,	// (0x00035317) grid_cam4_burst_pane_ParamLimits

0x706e,	// (0x00035317) grid_cam4_burst_pane

0x70a6,	// (0x0003534f) linegrid_cam4_burst_pane_ParamLimits

0x70a6,	// (0x0003534f) linegrid_cam4_burst_pane

0xd539,	// (0x0003b7e2) scroll_pane_cp30_ParamLimits

0xd539,	// (0x0003b7e2) scroll_pane_cp30

0x70ca,	// (0x00035373) cell_cam4_burst_pane_ParamLimits

0x70ca,	// (0x00035373) cell_cam4_burst_pane

0xd545,	// (0x0003b7ee) linegrid_cam4_burst_pane_g1_ParamLimits

0xd545,	// (0x0003b7ee) linegrid_cam4_burst_pane_g1

0x7117,	// (0x000353c0) linegrid_cam4_burst_pane_g2_ParamLimits

0x7117,	// (0x000353c0) linegrid_cam4_burst_pane_g2

0xd552,	// (0x0003b7fb) linegrid_cam4_burst_pane_g3_ParamLimits

0xd552,	// (0x0003b7fb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0003dce6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0003dce6) linegrid_cam4_burst_pane_g

0x7128,	// (0x000353d1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7128,	// (0x000353d1) linegrid_cam4_burst_pane_g3_copy1

0xd55f,	// (0x0003b808) linegrid_cam4_burst_pane_g4_ParamLimits

0xd55f,	// (0x0003b808) linegrid_cam4_burst_pane_g4

0x7142,	// (0x000353eb) linegrid_cam4_burst_pane_g5_ParamLimits

0x7142,	// (0x000353eb) linegrid_cam4_burst_pane_g5

0x7153,	// (0x000353fc) linegrid_cam4_burst_pane_g6_ParamLimits

0x7153,	// (0x000353fc) linegrid_cam4_burst_pane_g6

0xd56c,	// (0x0003b815) linegrid_cam4_burst_pane_g7_ParamLimits

0xd56c,	// (0x0003b815) linegrid_cam4_burst_pane_g7

0x716a,	// (0x00035413) cell_cam4_burst_pane_g1

0xd585,	// (0x0003b82e) main_cam5_pane_t1_ParamLimits

0xd585,	// (0x0003b82e) main_cam5_pane_t1

0xd597,	// (0x0003b840) main_cam5_pane_t2_ParamLimits

0xd597,	// (0x0003b840) main_cam5_pane_t2

0xd5a9,	// (0x0003b852) main_cam5_pane_t3_ParamLimits

0xd5a9,	// (0x0003b852) main_cam5_pane_t3

0xd5bb,	// (0x0003b864) main_cam5_pane_t4_ParamLimits

0xd5bb,	// (0x0003b864) main_cam5_pane_t4

0xd5d3,	// (0x0003b87c) main_cam5_pane_t5_ParamLimits

0xd5d3,	// (0x0003b87c) main_cam5_pane_t5

0xd5e7,	// (0x0003b890) main_cam5_pane_t6_ParamLimits

0xd5e7,	// (0x0003b890) main_cam5_pane_t6

0xd5fb,	// (0x0003b8a4) main_cam5_pane_t7_ParamLimits

0xd5fb,	// (0x0003b8a4) main_cam5_pane_t7

0xd60d,	// (0x0003b8b6) main_cam5_pane_t8_ParamLimits

0xd60d,	// (0x0003b8b6) main_cam5_pane_t8

0xd629,	// (0x0003b8d2) main_cam5_pane_t9_ParamLimits

0xd629,	// (0x0003b8d2) main_cam5_pane_t9

0xd63b,	// (0x0003b8e4) main_cam5_pane_t10_ParamLimits

0xd63b,	// (0x0003b8e4) main_cam5_pane_t10

0xd64d,	// (0x0003b8f6) main_cam5_pane_t11_ParamLimits

0xd64d,	// (0x0003b8f6) main_cam5_pane_t11

0xd65f,	// (0x0003b908) main_cam5_pane_t12_ParamLimits

0xd65f,	// (0x0003b908) main_cam5_pane_t12

0xd674,	// (0x0003b91d) main_cam5_pane_t13_ParamLimits

0xd674,	// (0x0003b91d) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0003dcf2) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0003dcf2) main_cam5_pane_t

0x036e,	// (0x0002e617) popup_scut_keymap_window_ParamLimits

0x036e,	// (0x0002e617) popup_scut_keymap_window

0x717d,	// (0x00035426) aid_size_cell_brow_shortcut

0xa554,	// (0x000387fd) bg_popup_window_pane_cp010

0x7189,	// (0x00035432) grid_scut_pane

0x7195,	// (0x0003543e) cell_scut_pane_ParamLimits

0x7195,	// (0x0003543e) cell_scut_pane

0x71ac,	// (0x00035455) cell_scut_pane_g1

0xd691,	// (0x0003b93a) cell_scut_pane_t1

0xd6a0,	// (0x0003b949) cell_scut_pane_t2

0x71b5,	// (0x0003545e) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0003dd0d) cell_scut_pane_t

0x5444,	// (0x000336ed) main_mup3_pane_g8_ParamLimits

0x5444,	// (0x000336ed) main_mup3_pane_g8

0x1554,	// (0x0002f7fd) area_vitu2_query_pane_ParamLimits

0x1554,	// (0x0002f7fd) area_vitu2_query_pane

0x6ef6,	// (0x0003519f) input_focus_pane_cp08

0xd6af,	// (0x0003b958) area_vitu2_query_pane_g1

0x71c3,	// (0x0003546c) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0003dd14) area_vitu2_query_pane_g

0x71d4,	// (0x0003547d) area_vitu2_query_pane_t1_ParamLimits

0x71d4,	// (0x0003547d) area_vitu2_query_pane_t1

0x71e8,	// (0x00035491) area_vitu2_query_pane_t2_ParamLimits

0x71e8,	// (0x00035491) area_vitu2_query_pane_t2

0x71fc,	// (0x000354a5) area_vitu2_query_pane_t3_ParamLimits

0x71fc,	// (0x000354a5) area_vitu2_query_pane_t3

0xd6bb,	// (0x0003b964) area_vitu2_query_pane_t4_ParamLimits

0xd6bb,	// (0x0003b964) area_vitu2_query_pane_t4

0xd6e3,	// (0x0003b98c) area_vitu2_query_pane_t5_ParamLimits

0xd6e3,	// (0x0003b98c) area_vitu2_query_pane_t5

0xd70b,	// (0x0003b9b4) area_vitu2_query_pane_t6_ParamLimits

0xd70b,	// (0x0003b9b4) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0003dd19) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0003dd19) area_vitu2_query_pane_t

0x7224,	// (0x000354cd) bg_button_pane_cp018

0x7232,	// (0x000354db) bg_button_pane_cp021

0x723e,	// (0x000354e7) bg_button_pane_cp022

0x724f,	// (0x000354f8) input_focus_pane_cp09

0xade4,	// (0x0003908d) aid_size_touch_mv_arrow_left

0xae0f,	// (0x000390b8) aid_size_touch_mv_arrow_right

0xd385,	// (0x0003b62e) main_cset_slider_pane_g16_ParamLimits

0xd385,	// (0x0003b62e) main_cset_slider_pane_g16

0xd391,	// (0x0003b63a) main_cset_slider_pane_g17_ParamLimits

0xd391,	// (0x0003b63a) main_cset_slider_pane_g17

0x716a,	// (0x00035413) cell_cam4_burst_pane_g1_ParamLimits

0x9c11,	// (0x00037eba) compa_mode_pane

0x6c79,	// (0x00034f22) popup_vtel_slider_window_g3_ParamLimits

0x6c79,	// (0x00034f22) popup_vtel_slider_window_g3

0x6c90,	// (0x00034f39) popup_vtel_slider_window_g4_ParamLimits

0x6c90,	// (0x00034f39) popup_vtel_slider_window_g4

0x6ca7,	// (0x00034f50) popup_vtel_slider_window_t1_ParamLimits

0x6ca7,	// (0x00034f50) popup_vtel_slider_window_t1

0x1b56,	// (0x0002fdff) main_cl_pane

0x49bc,	// (0x00032c65) popup_imed_adjust2_window_ParamLimits

0xc3e8,	// (0x0003a691) bg_tb_trans_pane_cp05_ParamLimits

0xcd69,	// (0x0003b012) popup_imed_adjust2_window_g1_ParamLimits

0xcd78,	// (0x0003b021) popup_imed_adjust2_window_g2_ParamLimits

0xcd78,	// (0x0003b021) popup_imed_adjust2_window_g2

0xcd84,	// (0x0003b02d) popup_imed_adjust2_window_g3_ParamLimits

0xcd84,	// (0x0003b02d) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0003da80) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0003da80) popup_imed_adjust2_window_g

0xcd90,	// (0x0003b039) popup_imed_adjust2_window_t1_ParamLimits

0xcda8,	// (0x0003b051) slider_imed_adjust_pane_ParamLimits

0xcdbc,	// (0x0003b065) slider_imed_adjust_pane_g1_ParamLimits

0xcdcc,	// (0x0003b075) slider_imed_adjust_pane_g2_ParamLimits

0xcddc,	// (0x0003b085) slider_imed_adjust_pane_g3_ParamLimits

0xcded,	// (0x0003b096) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0003da87) slider_imed_adjust_pane_g_ParamLimits

0x1311,	// (0x0002f5ba) aid_touch_area_cam4_ParamLimits

0x1311,	// (0x0002f5ba) aid_touch_area_cam4

0x64cf,	// (0x00034778) battery_pane_cp01

0x13e0,	// (0x0002f689) main_camera4_pane_g6_ParamLimits

0x13e0,	// (0x0002f689) main_camera4_pane_g6

0x140a,	// (0x0002f6b3) main_camera4_pane_t2_ParamLimits

0x140a,	// (0x0002f6b3) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0003db8e) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0003db8e) main_camera4_pane_t

0x142b,	// (0x0002f6d4) aid_touch_area_vid4_ParamLimits

0x142b,	// (0x0002f6d4) aid_touch_area_vid4

0x147f,	// (0x0002f728) main_video4_pane_g5_ParamLimits

0x147f,	// (0x0002f728) main_video4_pane_g5

0x14a4,	// (0x0002f74d) vid4_progress_pane_ParamLimits

0x14a4,	// (0x0002f74d) vid4_progress_pane

0xd39d,	// (0x0003b646) main_cset_slider_pane_g18_ParamLimits

0xd39d,	// (0x0003b646) main_cset_slider_pane_g18

0xd579,	// (0x0003b822) cell_cam4_burst_pane_g2_ParamLimits

0xd579,	// (0x0003b822) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0003dced) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0003dced) cell_cam4_burst_pane_g

0xa35a,	// (0x00038603) bg_cl_pane_ParamLimits

0xa35a,	// (0x00038603) bg_cl_pane

0x7260,	// (0x00035509) cl_header_pane_ParamLimits

0x7260,	// (0x00035509) cl_header_pane

0x7274,	// (0x0003551d) cl_listscroll_pane_ParamLimits

0x7274,	// (0x0003551d) cl_listscroll_pane

0xd757,	// (0x0003ba00) bg_cl_pane_g1

0xd75f,	// (0x0003ba08) bg_cl_pane_g2

0xd767,	// (0x0003ba10) bg_cl_pane_g3

0xd76f,	// (0x0003ba18) bg_cl_pane_g4

0xd777,	// (0x0003ba20) bg_cl_pane_g5

0xd77f,	// (0x0003ba28) bg_cl_pane_g6

0xd787,	// (0x0003ba30) bg_cl_pane_g7

0xd78f,	// (0x0003ba38) bg_cl_pane_g8

0xd797,	// (0x0003ba40) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0003dd28) bg_cl_pane_g

0x7284,	// (0x0003552d) aid_height_cl_leading_ParamLimits

0x7284,	// (0x0003552d) aid_height_cl_leading

0x7290,	// (0x00035539) aid_height_cl_text_ParamLimits

0x7290,	// (0x00035539) aid_height_cl_text

0xa8ec,	// (0x00038b95) bg_cl_header_pane_ParamLimits

0xa8ec,	// (0x00038b95) bg_cl_header_pane

0x72af,	// (0x00035558) cl_header_pane_g1_ParamLimits

0x72af,	// (0x00035558) cl_header_pane_g1

0x72c5,	// (0x0003556e) cl_header_pane_t1_ParamLimits

0x72c5,	// (0x0003556e) cl_header_pane_t1

0xd79f,	// (0x0003ba48) cl_list_pane

0xd358,	// (0x0003b601) hc_scroll_pane_cp01

0xa78d,	// (0x00038a36) bg_cl_header_pane_g1

0xd23e,	// (0x0003b4e7) bg_cl_header_pane_g2

0xa7ad,	// (0x00038a56) bg_cl_header_pane_g3

0xd24e,	// (0x0003b4f7) bg_cl_header_pane_g4

0xd246,	// (0x0003b4ef) bg_cl_header_pane_g5

0xd488,	// (0x0003b731) bg_cl_header_pane_g6

0xd266,	// (0x0003b50f) bg_cl_header_pane_g7

0xd26e,	// (0x0003b517) bg_cl_header_pane_g8

0xd25e,	// (0x0003b507) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0003dd3b) bg_cl_header_pane_g

0x72de,	// (0x00035587) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x72de,	// (0x00035587) hc_cl_list_double_graphic_heading_pane

0x72ef,	// (0x00035598) hc_cl_list_single_graphic_pane_ParamLimits

0x72ef,	// (0x00035598) hc_cl_list_single_graphic_pane

0x7308,	// (0x000355b1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7308,	// (0x000355b1) hc_cl_list_single_graphic_pane_g1

0x7314,	// (0x000355bd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7314,	// (0x000355bd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0003dd4e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0003dd4e) hc_cl_list_single_graphic_pane_g

0x7328,	// (0x000355d1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7328,	// (0x000355d1) hc_cl_list_single_graphic_pane_t1

0x7308,	// (0x000355b1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7308,	// (0x000355b1) hc_cl_list_double_graphic_heading_pane_g1

0x733d,	// (0x000355e6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x733d,	// (0x000355e6) hc_cl_list_double_graphic_heading_pane_g2

0x7351,	// (0x000355fa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7351,	// (0x000355fa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0003dd53) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0003dd53) hc_cl_list_double_graphic_heading_pane_g

0x7365,	// (0x0003560e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7365,	// (0x0003560e) hc_cl_list_double_graphic_heading_pane_t1

0x737a,	// (0x00035623) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x737a,	// (0x00035623) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0003dd5a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0003dd5a) hc_cl_list_double_graphic_heading_pane_t

0x7397,	// (0x00035640) vid4_progress_pane_g1

0x73a7,	// (0x00035650) vid4_progress_pane_g2

0x196d,	// (0x0002fc16) vid4_progress_pane_g3

0x73b7,	// (0x00035660) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0003dd5f) vid4_progress_pane_g

0x197f,	// (0x0002fc28) vid4_progress_pane_t1

0x73cf,	// (0x00035678) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0003dd6a) vid4_progress_pane_t

0x1995,	// (0x0002fc3e) wait_bar_pane_cp07

0xc5e3,	// (0x0003a88c) blid_firmament_pane_ParamLimits

0xc626,	// (0x0003a8cf) popup_blid_sat_info2_window_g1

0xc64a,	// (0x0003a8f3) popup_blid_sat_info2_window_t3

0xc658,	// (0x0003a901) popup_blid_sat_info2_window_t4

0xc666,	// (0x0003a90f) popup_blid_sat_info2_window_t5

0xc674,	// (0x0003a91d) popup_blid_sat_info2_window_t6

0xc684,	// (0x0003a92d) popup_blid_sat_info2_window_t7

0xc692,	// (0x0003a93b) popup_blid_sat_info2_window_t8

0xc6a0,	// (0x0003a949) popup_blid_sat_info2_window_t9

0xc6ae,	// (0x0003a957) popup_blid_sat_info2_window_t10

0xc770,	// (0x0003aa19) aid_firma_cardinal_ParamLimits

0xc784,	// (0x0003aa2d) blid_firmament_pane_t1_ParamLimits

0xc79b,	// (0x0003aa44) blid_firmament_pane_t2_ParamLimits

0xc7b2,	// (0x0003aa5b) blid_firmament_pane_t3_ParamLimits

0xc7c9,	// (0x0003aa72) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0003d974) blid_firmament_pane_t_ParamLimits

0xc7e0,	// (0x0003aa89) blid_sat_info_pane_ParamLimits

0x1b3c,	// (0x0002fde5) main_cam_set_pane_ParamLimits

0x5c60,	// (0x00033f09) aid_size_cell_colour_35_ParamLimits

0x5c80,	// (0x00033f29) aid_size_cell_colour_112_ParamLimits

0x5ca0,	// (0x00033f49) aid_size_cell_effect_ParamLimits

0xc3e8,	// (0x0003a691) bg_tb_trans_pane_cp02_ParamLimits

0xaa03,	// (0x00038cac) heading_imed_pane_ParamLimits

0x5cc0,	// (0x00033f69) listscroll_imed_pane_ParamLimits

0xb9d4,	// (0x00039c7d) popup_call2_audio_first_window_g5_ParamLimits

0xb9d4,	// (0x00039c7d) popup_call2_audio_first_window_g5

0x0ffe,	// (0x0002f2a7) aid_size_touch_image3_arrow_left_ParamLimits

0x0ffe,	// (0x0002f2a7) aid_size_touch_image3_arrow_left

0x102a,	// (0x0002f2d3) aid_size_touch_image3_arrow_right_ParamLimits

0x102a,	// (0x0002f2d3) aid_size_touch_image3_arrow_right

0x73e4,	// (0x0003568d) vid4_progress_pane_t3

0x5fd5,	// (0x0003427e) main_hwr_training_symbol_option_pane_ParamLimits

0x5fd5,	// (0x0003427e) main_hwr_training_symbol_option_pane

0xd073,	// (0x0003b31c) popup_hwr_training_preview_window_ParamLimits

0xd073,	// (0x0003b31c) popup_hwr_training_preview_window

0x0ea5,	// (0x0002f14e) hwr_training_navi_pane_g5_ParamLimits

0x0ea5,	// (0x0002f14e) hwr_training_navi_pane_g5

0xd22c,	// (0x0003b4d5) popup_char_count_window

0x1b3c,	// (0x0002fde5) bg_popup_sub_pane_cp20_ParamLimits

0x18d8,	// (0x0002fb81) list_vitu2_match_list_pane_ParamLimits

0x18e7,	// (0x0002fb90) vitu2_page_scroll_pane_ParamLimits

0x18e7,	// (0x0002fb90) vitu2_page_scroll_pane

0xd7ca,	// (0x0003ba73) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7ca,	// (0x0003ba73) list_single_hwr_training_symbol_option_pane

0xd7dd,	// (0x0003ba86) list_single_hwr_training_symbol_option_pane_g1

0xd7e5,	// (0x0003ba8e) list_single_hwr_training_symbol_option_pane_t1

0xd7f3,	// (0x0003ba9c) bg_button_pane_cp023

0xd7fc,	// (0x0003baa5) bg_button_pane_cp024

0x7432,	// (0x000356db) vitu2_page_scroll_pane_g1

0x743a,	// (0x000356e3) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0003dd71) vitu2_page_scroll_pane_g

0x7442,	// (0x000356eb) vitu2_page_scroll_pane_t1

0xa3db,	// (0x00038684) popup_char_count_window_g1

0xd82f,	// (0x0003bad8) popup_char_count_window_g2

0xd056,	// (0x0003b2ff) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0003dd76) popup_char_count_window_g

0xd838,	// (0x0003bae1) popup_char_count_window_t1

0x1b56,	// (0x0002fdff) main_vded2_pane

0xcd55,	// (0x0003affe) aid_size_cell_imed_line

0xcd5f,	// (0x0003b008) grid_imed_line_width_pane

0x65a1,	// (0x0003484a) vid4_indicators_pane_g4

0xd846,	// (0x0003baef) cell_imed_line_width_pane_ParamLimits

0xd846,	// (0x0003baef) cell_imed_line_width_pane

0xd85a,	// (0x0003bb03) cell_imed_line_width_pane_g1

0xd06b,	// (0x0003b314) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0003dd7d) cell_imed_line_width_pane_g

0x7451,	// (0x000356fa) main_vded2_pane_g1_ParamLimits

0x7451,	// (0x000356fa) main_vded2_pane_g1

0x7467,	// (0x00035710) main_vded2_pane_g2_ParamLimits

0x7467,	// (0x00035710) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0003dd82) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0003dd82) main_vded2_pane_g

0x7479,	// (0x00035722) vded2_slider_pane_ParamLimits

0x7479,	// (0x00035722) vded2_slider_pane

0x7489,	// (0x00035732) aid_size_touch_vded2_end

0x7493,	// (0x0003573c) aid_size_touch_vded2_playhead

0xd863,	// (0x0003bb0c) aid_size_touch_vded2_start

0xd86b,	// (0x0003bb14) vded2_slider_bg_pane

0xd874,	// (0x0003bb1d) vded2_slider_pane_g1

0xd87d,	// (0x0003bb26) vded2_slider_pane_g2

0x749d,	// (0x00035746) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0003dd87) vded2_slider_pane_g

0xd885,	// (0x0003bb2e) vded2_slider_bg_pane_g1

0xd88e,	// (0x0003bb37) vded2_slider_bg_pane_g2

0xd897,	// (0x0003bb40) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0003dd8e) vded2_slider_bg_pane_g

0x40ed,	// (0x00032396) aid_postcard_touch_down_pane_ParamLimits

0x40ed,	// (0x00032396) aid_postcard_touch_down_pane

0x4103,	// (0x000323ac) aid_postcard_touch_up_pane_ParamLimits

0x4103,	// (0x000323ac) aid_postcard_touch_up_pane

0x1b56,	// (0x0002fdff) main_blid2_pane

0x49a2,	// (0x00032c4b) popup_blid2_search_window

0x9c11,	// (0x00037eba) blid2_gps_pane

0x9c11,	// (0x00037eba) blid2_navig_pane

0x9c11,	// (0x00037eba) blid2_search_pane

0x9c11,	// (0x00037eba) blid2_tripm_pane

0x74a8,	// (0x00035751) blid2_search_pane_g1_ParamLimits

0x74a8,	// (0x00035751) blid2_search_pane_g1

0x74c0,	// (0x00035769) blid2_search_pane_t1_ParamLimits

0x74c0,	// (0x00035769) blid2_search_pane_t1

0x74d2,	// (0x0003577b) aid_size_cell_blid2_gps_ParamLimits

0x74d2,	// (0x0003577b) aid_size_cell_blid2_gps

0x74ea,	// (0x00035793) blid2_gps_pane_g1_ParamLimits

0x74ea,	// (0x00035793) blid2_gps_pane_g1

0x74fe,	// (0x000357a7) grid_blid2_satellite_pane_ParamLimits

0x74fe,	// (0x000357a7) grid_blid2_satellite_pane

0x7518,	// (0x000357c1) blid2_navig_pane_g1_ParamLimits

0x7518,	// (0x000357c1) blid2_navig_pane_g1

0x7524,	// (0x000357cd) blid2_navig_pane_t1_ParamLimits

0x7524,	// (0x000357cd) blid2_navig_pane_t1

0x753f,	// (0x000357e8) blid2_navig_pane_t2_ParamLimits

0x753f,	// (0x000357e8) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0003dd95) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0003dd95) blid2_navig_pane_t

0x755a,	// (0x00035803) blid2_navig_ring_pane_ParamLimits

0x755a,	// (0x00035803) blid2_navig_ring_pane

0x7573,	// (0x0003581c) blid2_speed_pane_ParamLimits

0x7573,	// (0x0003581c) blid2_speed_pane

0x757f,	// (0x00035828) blid2_tripm_pane_g1_ParamLimits

0x757f,	// (0x00035828) blid2_tripm_pane_g1

0x759a,	// (0x00035843) blid2_tripm_pane_g2_ParamLimits

0x759a,	// (0x00035843) blid2_tripm_pane_g2

0x75ae,	// (0x00035857) blid2_tripm_pane_g3_ParamLimits

0x75ae,	// (0x00035857) blid2_tripm_pane_g3

0x75c2,	// (0x0003586b) blid2_tripm_pane_g4_ParamLimits

0x75c2,	// (0x0003586b) blid2_tripm_pane_g4

0x75d6,	// (0x0003587f) blid2_tripm_pane_g5_ParamLimits

0x75d6,	// (0x0003587f) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0003dd9a) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0003dd9a) blid2_tripm_pane_g

0x75fc,	// (0x000358a5) blid2_tripm_pane_t1_ParamLimits

0x75fc,	// (0x000358a5) blid2_tripm_pane_t1

0x7617,	// (0x000358c0) blid2_tripm_pane_t2_ParamLimits

0x7617,	// (0x000358c0) blid2_tripm_pane_t2

0x7630,	// (0x000358d9) blid2_tripm_pane_t3_ParamLimits

0x7630,	// (0x000358d9) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0003dda7) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0003dda7) blid2_tripm_pane_t

0x7677,	// (0x00035920) cell_blid2_satellite_pane_ParamLimits

0x7677,	// (0x00035920) cell_blid2_satellite_pane

0x7695,	// (0x0003593e) cell_blid2_satellite_pane_g1

0xd8a0,	// (0x0003bb49) cell_blid2_satellite_pane_t1

0xc7f0,	// (0x0003aa99) blid2_speed_pane_g1

0xd8ae,	// (0x0003bb57) blid2_speed_pane_t1

0xd8bc,	// (0x0003bb65) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0003ddb0) blid2_speed_pane_t

0xc7f0,	// (0x0003aa99) blid2_navig_ring_pane_g1

0x769e,	// (0x00035947) blid2_navig_ring_pane_g2

0x76a6,	// (0x0003594f) blid2_navig_ring_pane_g3

0x76ae,	// (0x00035957) blid2_navig_ring_pane_g4

0x76b6,	// (0x0003595f) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0003ddb5) blid2_navig_ring_pane_g

0x9c11,	// (0x00037eba) bg_popup_window_pane_cp011

0xd8ca,	// (0x0003bb73) popup_blid2_search_window_g1

0xd8d2,	// (0x0003bb7b) popup_blid2_search_window_t1

0xd8e0,	// (0x0003bb89) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0003ddc0) popup_blid2_search_window_t

0xa69c,	// (0x00038945) main_browser_pane_g1

0xa35a,	// (0x00038603) main_browser_pane_ParamLimits

0x1b3c,	// (0x0002fde5) bg_button_pane_cp011_ParamLimits

0x1858,	// (0x0002fb01) cell_vitu2_function_pane_g1_ParamLimits

0xc3e8,	// (0x0003a691) bg_popup_sub_pane_cp22_ParamLimits

0x6ef6,	// (0x0003519f) input_focus_pane_cp08_ParamLimits

0x6f0d,	// (0x000351b6) popup_vitu2_query_button_pane_ParamLimits

0x6f0d,	// (0x000351b6) popup_vitu2_query_button_pane

0x6f1e,	// (0x000351c7) popup_vitu2_query_input_button_pane

0xd4c3,	// (0x0003b76c) popup_vitu2_query_window_g1_ParamLimits

0x6f28,	// (0x000351d1) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0003dcc1) popup_vitu2_query_window_g_ParamLimits

0x9c11,	// (0x00037eba) bg_button_pane_cp026

0x76be,	// (0x00035967) popup_vitu2_query_input_button_pane_g1

0x9c11,	// (0x00037eba) bg_button_pane_cp025

0xd8ee,	// (0x0003bb97) popup_vitu2_query_button_pane_t1

0x5112,	// (0x000333bb) main_mp3_pane_t6

0x5120,	// (0x000333c9) popup_slider_window_cp01

0x650d,	// (0x000347b6) cam4_battery_pane

0x6560,	// (0x00034809) cam4_battery_pane_cp02

0x738f,	// (0x00035638) cam4_battery_pane_cp01

0x738f,	// (0x00035638) cam4_battery_pane_cp03

0xd17e,	// (0x0003b427) cam4_battery_pane_g1

0xc7f0,	// (0x0003aa99) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0003ddc5) cam4_battery_pane_g

0xc6bc,	// (0x0003a965) popup_blid_sat_info2_window_t11

0xade4,	// (0x0003908d) aid_size_touch_mv_arrow_left_ParamLimits

0xae0f,	// (0x000390b8) aid_size_touch_mv_arrow_right_ParamLimits

0xae6d,	// (0x00039116) navi_pane_g1_ParamLimits

0xae79,	// (0x00039122) navi_pane_g2_ParamLimits

0xaea7,	// (0x00039150) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0003d673) navi_pane_g_ParamLimits

0x3b0a,	// (0x00031db3) navi_pane_mv_t1_ParamLimits

0x5ccc,	// (0x00033f75) grid_imed_effect_pane_ParamLimits

0x28ad,	// (0x00030b56) aid_placing_vt_slider_lsc

0xa5eb,	// (0x00038894) aid_placing_vt_slider_prt

0xa8ec,	// (0x00038b95) bg_tb_trans_pane_cp01_ParamLimits

0xc955,	// (0x0003abfe) popup_image_details_window_g1_ParamLimits

0xc968,	// (0x0003ac11) popup_image_details_window_g2_ParamLimits

0xc97d,	// (0x0003ac26) popup_image_details_window_g3_ParamLimits

0xc97d,	// (0x0003ac26) popup_image_details_window_g3

0xf710,	// (0x0003d9b9) popup_image_details_window_g_ParamLimits

0xc991,	// (0x0003ac3a) popup_image_details_window_t1_ParamLimits

0xc9a3,	// (0x0003ac4c) popup_image_details_window_t2_ParamLimits

0xc9bc,	// (0x0003ac65) popup_image_details_window_t3_ParamLimits

0xc9d0,	// (0x0003ac79) popup_image_details_window_t4_ParamLimits

0xc9eb,	// (0x0003ac94) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0003d9c0) popup_image_details_window_t_ParamLimits

0x729c,	// (0x00035545) cl_header_name_pane_ParamLimits

0x729c,	// (0x00035545) cl_header_name_pane

0x76c6,	// (0x0003596f) cl_header_name_pane_t1_ParamLimits

0x76c6,	// (0x0003596f) cl_header_name_pane_t1

0x76e7,	// (0x00035990) cl_header_name_pane_t2_ParamLimits

0x76e7,	// (0x00035990) cl_header_name_pane_t2

0x7729,	// (0x000359d2) cl_header_name_pane_t3_ParamLimits

0x7729,	// (0x000359d2) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0003ddca) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0003ddca) cl_header_name_pane_t

0xaf36,	// (0x000391df) navi_pane_mv_g2_ParamLimits

0xd1e9,	// (0x0003b492) field_vitu2_entry_pane_g1_ParamLimits

0xd1f5,	// (0x0003b49e) field_vitu2_entry_pane_g2_ParamLimits

0xd201,	// (0x0003b4aa) field_vitu2_entry_pane_g3_ParamLimits

0xd201,	// (0x0003b4aa) field_vitu2_entry_pane_g3

0xf917,	// (0x0003dbc0) field_vitu2_entry_pane_g_ParamLimits

0x6623,	// (0x000348cc) cell_vitu2_itu_pane_g1_ParamLimits

0x1700,	// (0x0002f9a9) cell_vitu2_itu_pane_g2_ParamLimits

0x1700,	// (0x0002f9a9) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0003dbcc) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0003dbcc) cell_vitu2_itu_pane_g

0x1b3c,	// (0x0002fde5) bg_vkb2_func_pane_cp05_ParamLimits

0x1b3c,	// (0x0002fde5) bg_vkb2_func_pane_cp05

0x1b3c,	// (0x0002fde5) bg_vkb2_func_pane_cp03

0x1b3c,	// (0x0002fde5) bg_vkb2_func_pane_cp04

0x1b3c,	// (0x0002fde5) bg_vkb2_func_pane_cp10_ParamLimits

0x1b3c,	// (0x0002fde5) bg_vkb2_func_pane_cp10

0x723e,	// (0x000354e7) bg_vkb2_func_pane_cp08

0x7224,	// (0x000354cd) bg_vkb2_func_pane_cp06

0x7232,	// (0x000354db) bg_vkb2_func_pane_cp07

0xd805,	// (0x0003baae) bg_vkb2_func_pane_cp11_ParamLimits

0xd805,	// (0x0003baae) bg_vkb2_func_pane_cp11

0xd81a,	// (0x0003bac3) bg_vkb2_func_pane_cp12_ParamLimits

0xd81a,	// (0x0003bac3) bg_vkb2_func_pane_cp12

0x9c11,	// (0x00037eba) bg_vkb2_func_pane_cp09

0xd23e,	// (0x0003b4e7) bg_vkb2_func_pane_g1

0xa7ad,	// (0x00038a56) bg_vkb2_func_pane_g2

0xd246,	// (0x0003b4ef) bg_vkb2_func_pane_g3

0xd24e,	// (0x0003b4f7) bg_vkb2_func_pane_g4

0xd488,	// (0x0003b731) bg_vkb2_func_pane_g5

0xd266,	// (0x0003b50f) bg_vkb2_func_pane_g6

0xd26e,	// (0x0003b517) bg_vkb2_func_pane_g7

0xd25e,	// (0x0003b507) bg_vkb2_func_pane_g8

0xa78d,	// (0x00038a36) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0003ddd1) bg_vkb2_func_pane_g

0x75ea,	// (0x00035893) blid2_tripm_pane_g6_ParamLimits

0x75ea,	// (0x00035893) blid2_tripm_pane_g6

0xd131,	// (0x0003b3da) mp4_progress_pane_g1

0x7663,	// (0x0003590c) blid2_tripm_values_pane_ParamLimits

0x7663,	// (0x0003590c) blid2_tripm_values_pane

0x775a,	// (0x00035a03) blid2_tripm_values_pane_t1

0x7768,	// (0x00035a11) blid2_tripm_values_pane_t2

0x7776,	// (0x00035a1f) blid2_tripm_values_pane_t3

0x7784,	// (0x00035a2d) blid2_tripm_values_pane_t4

0x7792,	// (0x00035a3b) blid2_tripm_values_pane_t5

0x77a0,	// (0x00035a49) blid2_tripm_values_pane_t6

0x77ae,	// (0x00035a57) blid2_tripm_values_pane_t7

0x77bc,	// (0x00035a65) blid2_tripm_values_pane_t8

0x77ca,	// (0x00035a73) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0003dde4) blid2_tripm_values_pane_t

0x28ef,	// (0x00030b98) call_video_pane_t1_ParamLimits

0x290d,	// (0x00030bb6) call_video_pane_t2_ParamLimits

0xf253,	// (0x0003d4fc) call_video_pane_t_ParamLimits

0x3ff4,	// (0x0003229d) msg_header_pane_g1_ParamLimits

0xb11e,	// (0x000393c7) msg_header_pane_g2_ParamLimits

0xb11e,	// (0x000393c7) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0003d716) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0003d716) msg_header_pane_g

0xa35a,	// (0x00038603) main_clock2_pane_ParamLimits

0x5a6c,	// (0x00033d15) grid_clock2_toolbar_pane_ParamLimits

0x5a6c,	// (0x00033d15) grid_clock2_toolbar_pane

0x5a6c,	// (0x00033d15) listscroll_clock2_pane_ParamLimits

0x5a6c,	// (0x00033d15) listscroll_clock2_pane

0x5b50,	// (0x00033df9) main_clock2_pane_t3_ParamLimits

0x5b50,	// (0x00033df9) main_clock2_pane_t3

0x5b74,	// (0x00033e1d) main_clock2_pane_t4_ParamLimits

0x5b74,	// (0x00033e1d) main_clock2_pane_t4

0xd8fc,	// (0x0003bba5) cell_clock2_toolbar_pane

0xd904,	// (0x0003bbad) cell_clock2_toolbar_pane_cp01

0xd904,	// (0x0003bbad) cell_clock2_toolbar_pane_cp02

0xd90c,	// (0x0003bbb5) cell_clock2_toolbar_pane_cp03

0xd914,	// (0x0003bbbd) list_clock2_pane

0xad69,	// (0x00039012) scroll_pane_cp10

0xd91c,	// (0x0003bbc5) list_single_clock2_pane_ParamLimits

0xd91c,	// (0x0003bbc5) list_single_clock2_pane

0xa554,	// (0x000387fd) list_highlight_pane_cp08

0xd929,	// (0x0003bbd2) list_single_clock2_pane_t1

0xd937,	// (0x0003bbe0) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0003ddf7) list_single_clock2_pane_t

0x9c11,	// (0x00037eba) bg_button_pane_cp10

0xd945,	// (0x0003bbee) cell_clock2_toolbar_pane_g1

0x063f,	// (0x0002e8e8) aid_main_viewer_pane_g1_ParamLimits

0x063f,	// (0x0002e8e8) aid_main_viewer_pane_g1

0x064d,	// (0x0002e8f6) aid_main_viewer_pane_g2_ParamLimits

0x064d,	// (0x0002e8f6) aid_main_viewer_pane_g2

0x4093,	// (0x0003233c) aid_main_viewer_pane_g3_ParamLimits

0x4093,	// (0x0003233c) aid_main_viewer_pane_g3

0x40a2,	// (0x0003234b) aid_main_viewer_pane_g4_ParamLimits

0x40a2,	// (0x0003234b) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0003d727) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0003d727) aid_main_viewer_pane_g

0x0681,	// (0x0002e92a) main_calc_pane_ParamLimits

0x06a7,	// (0x0002e950) main_dialer2_pane_ParamLimits

0x1b56,	// (0x0002fdff) main_cam6_pane

0x1b56,	// (0x0002fdff) main_vid6_pane

0x5a78,	// (0x00033d21) listscroll_gen_pane_cp06_ParamLimits

0x5a78,	// (0x00033d21) listscroll_gen_pane_cp06

0x5b97,	// (0x00033e40) main_clock2_pane_t5_ParamLimits

0x5b97,	// (0x00033e40) main_clock2_pane_t5

0x5bf5,	// (0x00033e9e) aid_call2_pane_cp10_ParamLimits

0x5c07,	// (0x00033eb0) aid_call_pane_cp10_ParamLimits

0xadd8,	// (0x00039081) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadd8,	// (0x00039081) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c19,	// (0x00033ec2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c19,	// (0x00033ec2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadd8,	// (0x00039081) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0003da75) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c2f,	// (0x00033ed8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x632b,	// (0x000345d4) cell_dialer2_keypad_pane_g2_ParamLimits

0x632b,	// (0x000345d4) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0003db5f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0003db5f) cell_dialer2_keypad_pane_g

0x6347,	// (0x000345f0) cell_dialer2_keypad_pane_t1

0x693b,	// (0x00034be4) main_cset_text2_pane_ParamLimits

0x693b,	// (0x00034be4) main_cset_text2_pane

0xd6af,	// (0x0003b958) area_vitu2_query_pane_g1_ParamLimits

0x71c3,	// (0x0003546c) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0003dd14) area_vitu2_query_pane_g_ParamLimits

0xd733,	// (0x0003b9dc) area_vitu2_query_pane_t7_ParamLimits

0xd733,	// (0x0003b9dc) area_vitu2_query_pane_t7

0x7224,	// (0x000354cd) bg_button_pane_cp018_ParamLimits

0x7232,	// (0x000354db) bg_button_pane_cp021_ParamLimits

0x723e,	// (0x000354e7) bg_button_pane_cp022_ParamLimits

0x723e,	// (0x000354e7) bg_vkb2_func_pane_cp08_ParamLimits

0x7224,	// (0x000354cd) bg_vkb2_func_pane_cp06_ParamLimits

0x7232,	// (0x000354db) bg_vkb2_func_pane_cp07_ParamLimits

0x724f,	// (0x000354f8) input_focus_pane_cp09_ParamLimits

0x77d8,	// (0x00035a81) cam6_autofocus_pane_ParamLimits

0x77d8,	// (0x00035a81) cam6_autofocus_pane

0x19a6,	// (0x0002fc4f) cam6_image_uncrop_pane_ParamLimits

0x19a6,	// (0x0002fc4f) cam6_image_uncrop_pane

0x19b5,	// (0x0002fc5e) cam6_indi_pane_ParamLimits

0x19b5,	// (0x0002fc5e) cam6_indi_pane

0x19cb,	// (0x0002fc74) cam6_mode_pane_ParamLimits

0x19cb,	// (0x0002fc74) cam6_mode_pane

0x19dd,	// (0x0002fc86) cam6_timer_pane_ParamLimits

0x19dd,	// (0x0002fc86) cam6_timer_pane

0x19ed,	// (0x0002fc96) cam6_zoom_pane_ParamLimits

0x19ed,	// (0x0002fc96) cam6_zoom_pane

0x77e6,	// (0x00035a8f) cam6_mode_pane_g1_ParamLimits

0x77e6,	// (0x00035a8f) cam6_mode_pane_g1

0x77f6,	// (0x00035a9f) cam6_mode_pane_g2_ParamLimits

0x77f6,	// (0x00035a9f) cam6_mode_pane_g2

0x7806,	// (0x00035aaf) cam6_mode_pane_g3_ParamLimits

0x7806,	// (0x00035aaf) cam6_mode_pane_g3

0x7816,	// (0x00035abf) cam6_mode_pane_g4_ParamLimits

0x7816,	// (0x00035abf) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0003ddfc) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0003ddfc) cam6_mode_pane_g

0xd94d,	// (0x0003bbf6) bg_tb_trans_pane_cp08_ParamLimits

0xd94d,	// (0x0003bbf6) bg_tb_trans_pane_cp08

0xd95b,	// (0x0003bc04) cam6_battery_pane_ParamLimits

0xd95b,	// (0x0003bc04) cam6_battery_pane

0xd971,	// (0x0003bc1a) cam6_indi_pane_g1_ParamLimits

0xd971,	// (0x0003bc1a) cam6_indi_pane_g1

0xd983,	// (0x0003bc2c) cam6_indi_pane_g2_ParamLimits

0xd983,	// (0x0003bc2c) cam6_indi_pane_g2

0xd995,	// (0x0003bc3e) cam6_indi_pane_g3_ParamLimits

0xd995,	// (0x0003bc3e) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0003de05) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0003de05) cam6_indi_pane_g

0xd9a7,	// (0x0003bc50) cam6_indi_pane_t1_ParamLimits

0xd9a7,	// (0x0003bc50) cam6_indi_pane_t1

0x7826,	// (0x00035acf) cam6_autofocus_pane_g1

0x782e,	// (0x00035ad7) cam6_autofocus_pane_g2

0x7836,	// (0x00035adf) cam6_autofocus_pane_g3

0x783e,	// (0x00035ae7) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0003de0c) cam6_autofocus_pane_g

0xd9cd,	// (0x0003bc76) cam6_timer_pane_g1

0xd9d5,	// (0x0003bc7e) cam6_timer_pane_t1

0xd9e3,	// (0x0003bc8c) cam6_zoom_cont_pane

0xd9eb,	// (0x0003bc94) cam6_zoom_pane_g1

0xd9f3,	// (0x0003bc9c) cam6_zoom_pane_g2

0x7846,	// (0x00035aef) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0003de15) cam6_zoom_pane_g

0xc7f0,	// (0x0003aa99) cam6_battery_pane_g1

0xc7f0,	// (0x0003aa99) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0003d97d) cam6_battery_pane_g

0xd9fb,	// (0x0003bca4) cam6_zoom_cont_pane_g1

0xda04,	// (0x0003bcad) cam6_zoom_cont_pane_g2

0xda0d,	// (0x0003bcb6) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0003de1c) cam6_zoom_cont_pane_g

0x7863,	// (0x00035b0c) cam6_mode_pane_cp_ParamLimits

0x7863,	// (0x00035b0c) cam6_mode_pane_cp

0x7875,	// (0x00035b1e) cam6_zoom_pane_cp_ParamLimits

0x7875,	// (0x00035b1e) cam6_zoom_pane_cp

0x7881,	// (0x00035b2a) vid6_image_uncrop_cif_pane_ParamLimits

0x7881,	// (0x00035b2a) vid6_image_uncrop_cif_pane

0x7891,	// (0x00035b3a) vid6_image_uncrop_nhd_pane_ParamLimits

0x7891,	// (0x00035b3a) vid6_image_uncrop_nhd_pane

0x78a0,	// (0x00035b49) vid6_image_uncrop_vga_pane_ParamLimits

0x78a0,	// (0x00035b49) vid6_image_uncrop_vga_pane

0x78af,	// (0x00035b58) vid6_image_uncrop_wvga_pane_ParamLimits

0x78af,	// (0x00035b58) vid6_image_uncrop_wvga_pane

0x78be,	// (0x00035b67) vid6_indi_pane_ParamLimits

0x78be,	// (0x00035b67) vid6_indi_pane

0xd94d,	// (0x0003bbf6) bg_tb_trans_pane_cp09_ParamLimits

0xd94d,	// (0x0003bbf6) bg_tb_trans_pane_cp09

0xda25,	// (0x0003bcce) cam6_battery_pane_cp_ParamLimits

0xda25,	// (0x0003bcce) cam6_battery_pane_cp

0xda31,	// (0x0003bcda) vid6_indi_pane_g1_ParamLimits

0xda31,	// (0x0003bcda) vid6_indi_pane_g1

0xda43,	// (0x0003bcec) vid6_indi_pane_g2_ParamLimits

0xda43,	// (0x0003bcec) vid6_indi_pane_g2

0xda55,	// (0x0003bcfe) vid6_indi_pane_g3_ParamLimits

0xda55,	// (0x0003bcfe) vid6_indi_pane_g3

0xda6a,	// (0x0003bd13) vid6_indi_pane_g4_ParamLimits

0xda6a,	// (0x0003bd13) vid6_indi_pane_g4

0xda7f,	// (0x0003bd28) vid6_indi_pane_g5_ParamLimits

0xda7f,	// (0x0003bd28) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0003de23) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0003de23) vid6_indi_pane_g

0xda99,	// (0x0003bd42) vid6_indi_pane_t1_ParamLimits

0xda99,	// (0x0003bd42) vid6_indi_pane_t1

0xdaaf,	// (0x0003bd58) vid6_indi_pane_t2_ParamLimits

0xdaaf,	// (0x0003bd58) vid6_indi_pane_t2

0xdad7,	// (0x0003bd80) vid6_indi_pane_t3_ParamLimits

0xdad7,	// (0x0003bd80) vid6_indi_pane_t3

0xdaff,	// (0x0003bda8) vid6_indi_pane_t4_ParamLimits

0xdaff,	// (0x0003bda8) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0003de2e) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0003de2e) vid6_indi_pane_t

0xdb23,	// (0x0003bdcc) wait_bar_pane_cp08

0x78d6,	// (0x00035b7f) main_cset_text2_pane_t1_ParamLimits

0x78d6,	// (0x00035b7f) main_cset_text2_pane_t1

0x784e,	// (0x00035af7) listscroll_gen_pane_cp06_t1_ParamLimits

0x784e,	// (0x00035af7) listscroll_gen_pane_cp06_t1

0x1b56,	// (0x0002fdff) main_cam6_set_pane

0x64ff,	// (0x000347a8) bg_tb_trans_pane_cp06_ParamLimits

0x6515,	// (0x000347be) cam4_indicators_pane_g1_ParamLimits

0x6526,	// (0x000347cf) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0003db9c) cam4_indicators_pane_g_ParamLimits

0x653e,	// (0x000347e7) cam4_indicators_pane_t1_ParamLimits

0x1b3c,	// (0x0002fde5) bg_tb_trans_pane_cp07_ParamLimits

0x6568,	// (0x00034811) vid4_indicators_pane_g1_ParamLimits

0x657c,	// (0x00034825) vid4_indicators_pane_g2_ParamLimits

0x6590,	// (0x00034839) vid4_indicators_pane_g3_ParamLimits

0x65a1,	// (0x0003484a) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0003dbae) vid4_indicators_pane_g_ParamLimits

0x65bd,	// (0x00034866) vid4_indicators_pane_t1_ParamLimits

0x7397,	// (0x00035640) vid4_progress_pane_g1_ParamLimits

0x73a7,	// (0x00035650) vid4_progress_pane_g2_ParamLimits

0x196d,	// (0x0002fc16) vid4_progress_pane_g3_ParamLimits

0x73b7,	// (0x00035660) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0003dd5f) vid4_progress_pane_g_ParamLimits

0x197f,	// (0x0002fc28) vid4_progress_pane_t1_ParamLimits

0x73cf,	// (0x00035678) vid4_progress_pane_t2_ParamLimits

0x73e4,	// (0x0003568d) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0003dd6a) vid4_progress_pane_t_ParamLimits

0x1995,	// (0x0002fc3e) wait_bar_pane_cp07_ParamLimits

0x78f4,	// (0x00035b9d) main_cam6_set_pane_g2_ParamLimits

0x78f4,	// (0x00035b9d) main_cam6_set_pane_g2

0x7918,	// (0x00035bc1) main_cset6_listscroll_pane_ParamLimits

0x7918,	// (0x00035bc1) main_cset6_listscroll_pane

0x7934,	// (0x00035bdd) main_cset6_slider_pane_ParamLimits

0x7934,	// (0x00035bdd) main_cset6_slider_pane

0x794a,	// (0x00035bf3) main_cset6_text2_pane_ParamLimits

0x794a,	// (0x00035bf3) main_cset6_text2_pane

0xdb32,	// (0x0003bddb) main_cset6_text_pane

0xdb3a,	// (0x0003bde3) main_cset_list_pane_copy1_ParamLimits

0xdb3a,	// (0x0003bde3) main_cset_list_pane_copy1

0xdb4a,	// (0x0003bdf3) scroll_pane_cp028_copy1

0x7958,	// (0x00035c01) cset_list_set_pane_copy1

0x796a,	// (0x00035c13) aid_position_infowindow_above_copy1

0x7972,	// (0x00035c1b) aid_position_infowindow_below_copy1

0xdb53,	// (0x0003bdfc) cset_list_set_pane_g1_copy1

0xdb5b,	// (0x0003be04) cset_list_set_pane_g3_copy1_ParamLimits

0xdb5b,	// (0x0003be04) cset_list_set_pane_g3_copy1

0xdb6a,	// (0x0003be13) cset_list_set_pane_t1_copy1_ParamLimits

0xdb6a,	// (0x0003be13) cset_list_set_pane_t1_copy1

0xa8ec,	// (0x00038b95) list_highlight_pane_cp021_copy1_ParamLimits

0xa8ec,	// (0x00038b95) list_highlight_pane_cp021_copy1

0xdb7f,	// (0x0003be28) cset6_slider_pane_ParamLimits

0xdb7f,	// (0x0003be28) cset6_slider_pane

0xdbab,	// (0x0003be54) main_cset6_slider_pane_g1_ParamLimits

0xdbab,	// (0x0003be54) main_cset6_slider_pane_g1

0x797a,	// (0x00035c23) main_cset6_slider_pane_g2_ParamLimits

0x797a,	// (0x00035c23) main_cset6_slider_pane_g2

0xdbd3,	// (0x0003be7c) main_cset6_slider_pane_g3_ParamLimits

0xdbd3,	// (0x0003be7c) main_cset6_slider_pane_g3

0x79a2,	// (0x00035c4b) main_cset6_slider_pane_g4_ParamLimits

0x79a2,	// (0x00035c4b) main_cset6_slider_pane_g4

0xdbdf,	// (0x0003be88) main_cset6_slider_pane_g5_ParamLimits

0xdbdf,	// (0x0003be88) main_cset6_slider_pane_g5

0xd36d,	// (0x0003b616) main_cset6_slider_pane_g7_ParamLimits

0xd36d,	// (0x0003b616) main_cset6_slider_pane_g7

0xd379,	// (0x0003b622) main_cset6_slider_pane_g8_ParamLimits

0xd379,	// (0x0003b622) main_cset6_slider_pane_g8

0x69e8,	// (0x00034c91) main_cset6_slider_pane_g9_ParamLimits

0x69e8,	// (0x00034c91) main_cset6_slider_pane_g9

0x69f4,	// (0x00034c9d) main_cset6_slider_pane_g10_ParamLimits

0x69f4,	// (0x00034c9d) main_cset6_slider_pane_g10

0x6a00,	// (0x00034ca9) main_cset6_slider_pane_g11_ParamLimits

0x6a00,	// (0x00034ca9) main_cset6_slider_pane_g11

0x6a0c,	// (0x00034cb5) main_cset6_slider_pane_g12_ParamLimits

0x6a0c,	// (0x00034cb5) main_cset6_slider_pane_g12

0x6a18,	// (0x00034cc1) main_cset6_slider_pane_g13_ParamLimits

0x6a18,	// (0x00034cc1) main_cset6_slider_pane_g13

0x6a24,	// (0x00034ccd) main_cset6_slider_pane_g14_ParamLimits

0x6a24,	// (0x00034ccd) main_cset6_slider_pane_g14

0x79ae,	// (0x00035c57) main_cset6_slider_pane_g15_ParamLimits

0x79ae,	// (0x00035c57) main_cset6_slider_pane_g15

0xd385,	// (0x0003b62e) main_cset6_slider_pane_g16_ParamLimits

0xd385,	// (0x0003b62e) main_cset6_slider_pane_g16

0xd391,	// (0x0003b63a) main_cset6_slider_pane_g17_ParamLimits

0xd391,	// (0x0003b63a) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0003de37) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0003de37) main_cset6_slider_pane_g

0xdbeb,	// (0x0003be94) main_cset6_slider_pane_t1_ParamLimits

0xdbeb,	// (0x0003be94) main_cset6_slider_pane_t1

0x79de,	// (0x00035c87) main_cset6_slider_pane_t2_ParamLimits

0x79de,	// (0x00035c87) main_cset6_slider_pane_t2

0x7a09,	// (0x00035cb2) main_cset6_slider_pane_t3_ParamLimits

0x7a09,	// (0x00035cb2) main_cset6_slider_pane_t3

0x7a34,	// (0x00035cdd) main_cset6_slider_pane_t4_ParamLimits

0x7a34,	// (0x00035cdd) main_cset6_slider_pane_t4

0x7a5f,	// (0x00035d08) main_cset6_slider_pane_t5_ParamLimits

0x7a5f,	// (0x00035d08) main_cset6_slider_pane_t5

0xdc2c,	// (0x0003bed5) main_cset6_slider_pane_t7_ParamLimits

0xdc2c,	// (0x0003bed5) main_cset6_slider_pane_t7

0x7a8a,	// (0x00035d33) main_cset6_slider_pane_t8_ParamLimits

0x7a8a,	// (0x00035d33) main_cset6_slider_pane_t8

0x7aae,	// (0x00035d57) main_cset6_slider_pane_t9_ParamLimits

0x7aae,	// (0x00035d57) main_cset6_slider_pane_t9

0x7ad2,	// (0x00035d7b) main_cset6_slider_pane_t10_ParamLimits

0x7ad2,	// (0x00035d7b) main_cset6_slider_pane_t10

0x7af6,	// (0x00035d9f) main_cset6_slider_pane_t11_ParamLimits

0x7af6,	// (0x00035d9f) main_cset6_slider_pane_t11

0xdc62,	// (0x0003bf0b) main_cset6_slider_pane_t14_ParamLimits

0xdc62,	// (0x0003bf0b) main_cset6_slider_pane_t14

0xdc9b,	// (0x0003bf44) main_cset6_slider_pane_t15_ParamLimits

0xdc9b,	// (0x0003bf44) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0003de5c) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0003de5c) main_cset6_slider_pane_t

0xd02b,	// (0x0003b2d4) cset_slider_pane_g1_copy1

0xdcd4,	// (0x0003bf7d) cset_slider_pane_g2_copy1

0xdcdd,	// (0x0003bf86) cset_slider_pane_g3_copy1

0x9c11,	// (0x00037eba) bg_popup_sub_pane_cp011_copy1

0xdce6,	// (0x0003bf8f) main_cset_text_pane_g1_copy1

0xd4d7,	// (0x0003b780) main_cset_text_pane_t1_copy1

0xd4e5,	// (0x0003b78e) main_cset_text_pane_t2_copy1

0xd4f3,	// (0x0003b79c) main_cset_text_pane_t3_copy1

0xd501,	// (0x0003b7aa) main_cset_text_pane_t4_copy1

0xd50f,	// (0x0003b7b8) main_cset_text_pane_t5_copy1

0xdcee,	// (0x0003bf97) main_cset_text_pane_t6_copy1

0xdcfc,	// (0x0003bfa5) main_cset_text_pane_t7_copy1

0x78d6,	// (0x00035b7f) main_cset_text2_pane_t1_copy1

0x1b3c,	// (0x0002fde5) main_ncimui_pane

0x08eb,	// (0x0002eb94) popup_query_ncimui_window_ParamLimits

0x08eb,	// (0x0002eb94) popup_query_ncimui_window

0xcad6,	// (0x0003ad7f) field_cale_ev2_pane_g4_ParamLimits

0xcad6,	// (0x0003ad7f) field_cale_ev2_pane_g4

0x608a,	// (0x00034333) cell_video_dialer_keypad_pane_g2_ParamLimits

0x608a,	// (0x00034333) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0003db36) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0003db36) cell_video_dialer_keypad_pane_g

0x60a2,	// (0x0003434b) cell_video_dialer_keypad_pane_t1

0x9c11,	// (0x00037eba) bg_popup_window_pane_cp012

0xac54,	// (0x00038efd) heading_pane_cp06

0xdd28,	// (0x0003bfd1) ncim_query_content_pane

0x9c11,	// (0x00037eba) bg_popup_heading_pane_cp01

0xdd3e,	// (0x0003bfe7) ncim_heading_pane_t1

0xdd4c,	// (0x0003bff5) ncim_indicator_popup_pane

0xdd5e,	// (0x0003c007) ncim_query_button_pane

0xdd72,	// (0x0003c01b) ncim_query_content_pane_t1

0xdd84,	// (0x0003c02d) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0003dea0) ncim_query_content_pane_t

0xddbe,	// (0x0003c067) ncim_query_list_pane

0xddd0,	// (0x0003c079) ncim_query_popup_pane

0xdd4c,	// (0x0003bff5) ncim_indicator_popup_pane_ParamLimits

0x7d19,	// (0x00035fc2) ncim_query_content_pane_g1_ParamLimits

0x7d19,	// (0x00035fc2) ncim_query_content_pane_g1

0xdd72,	// (0x0003c01b) ncim_query_content_pane_t1_ParamLimits

0xdd84,	// (0x0003c02d) ncim_query_content_pane_t2_ParamLimits

0x7d25,	// (0x00035fce) ncim_query_content_pane_t3_ParamLimits

0x7d25,	// (0x00035fce) ncim_query_content_pane_t3

0x7d4d,	// (0x00035ff6) ncim_query_content_pane_t4_ParamLimits

0x7d4d,	// (0x00035ff6) ncim_query_content_pane_t4

0x7d75,	// (0x0003601e) ncim_query_content_pane_t5_ParamLimits

0x7d75,	// (0x0003601e) ncim_query_content_pane_t5

0xdd96,	// (0x0003c03f) ncim_query_content_pane_t6_ParamLimits

0xdd96,	// (0x0003c03f) ncim_query_content_pane_t6

0xfbf7,	// (0x0003dea0) ncim_query_content_pane_t_ParamLimits

0xddbe,	// (0x0003c067) ncim_query_list_pane_ParamLimits

0xddd0,	// (0x0003c079) ncim_query_popup_pane_ParamLimits

0xdde4,	// (0x0003c08d) wait_bar_pane_cp04

0x9c11,	// (0x00037eba) input_focus_pane_cp011

0xddec,	// (0x0003c095) ncim_query_popup_pane_t1

0xddfa,	// (0x0003c0a3) ncim_list_query_list_pane_ParamLimits

0xddfa,	// (0x0003c0a3) ncim_list_query_list_pane

0x9c11,	// (0x00037eba) bg_button_pane_cp027

0xde07,	// (0x0003c0b0) ncim_query_button_pane_g1

0x9c11,	// (0x00037eba) list_highlight_pane_cp012

0xde11,	// (0x0003c0ba) ncim_list_query_list_pane_g1

0xde19,	// (0x0003c0c2) ncim_list_query_list_pane_t1

0x6532,	// (0x000347db) cam4_indicators_pane_g3_ParamLimits

0x6532,	// (0x000347db) cam4_indicators_pane_g3

0x65ad,	// (0x00034856) vid4_indicators_pane_g5_ParamLimits

0x65ad,	// (0x00034856) vid4_indicators_pane_g5

0x73c3,	// (0x0003566c) vid4_progress_pane_g5_ParamLimits

0x73c3,	// (0x0003566c) vid4_progress_pane_g5

0x7c04,	// (0x00035ead) main_ncimui_pane_g1

0x7c6d,	// (0x00035f16) ncimui_group_query_pane_ParamLimits

0x7c6d,	// (0x00035f16) ncimui_group_query_pane

0x7cb5,	// (0x00035f5e) ncimui_list_pane_ParamLimits

0x7cb5,	// (0x00035f5e) ncimui_list_pane

0x7cdc,	// (0x00035f85) ncimui_text_pane_ParamLimits

0x7cdc,	// (0x00035f85) ncimui_text_pane

0x7d9d,	// (0x00036046) ncimui_text_pane_t1_ParamLimits

0x7d9d,	// (0x00036046) ncimui_text_pane_t1

0xde27,	// (0x0003c0d0) ncimui_list_single_graphic_pane_ParamLimits

0xde27,	// (0x0003c0d0) ncimui_list_single_graphic_pane

0x7dbb,	// (0x00036064) ncimui_query_pane_ParamLimits

0x7dbb,	// (0x00036064) ncimui_query_pane

0x9c11,	// (0x00037eba) list_highlight_pane_cp013

0xde37,	// (0x0003c0e0) ncim_list_query_list_pane_t1_copy1

0xde45,	// (0x0003c0ee) ncim_list_single_graphic_pane_g1

0x7dce,	// (0x00036077) ncim_query_button_pane_cp01

0x7dda,	// (0x00036083) ncim_query_entry_pane_ParamLimits

0x7dda,	// (0x00036083) ncim_query_entry_pane

0x7ded,	// (0x00036096) ncimui_query_pane_g1

0x7df9,	// (0x000360a2) ncimui_query_pane_t1_ParamLimits

0x7df9,	// (0x000360a2) ncimui_query_pane_t1

0xa8ec,	// (0x00038b95) input_focus_pane_cp012

0xde4d,	// (0x0003c0f6) ncim_query_entry_pane_t1

0xa35a,	// (0x00038603) main_im_pane_ParamLimits

0x1b3c,	// (0x0002fde5) main_mobtv_pane_ParamLimits

0x1b3c,	// (0x0002fde5) main_mobtv_pane

0x79c6,	// (0x00035c6f) main_cset6_slider_pane_g18_ParamLimits

0x79c6,	// (0x00035c6f) main_cset6_slider_pane_g18

0x79d2,	// (0x00035c7b) main_cset6_slider_pane_g19_ParamLimits

0x79d2,	// (0x00035c7b) main_cset6_slider_pane_g19

0x7e12,	// (0x000360bb) bg_main_mobtv_pane_ParamLimits

0x7e12,	// (0x000360bb) bg_main_mobtv_pane

0x7e20,	// (0x000360c9) main_mobtv_info_pane

0x7e29,	// (0x000360d2) main_mobtv_loading_pane_ParamLimits

0x7e29,	// (0x000360d2) main_mobtv_loading_pane

0xde5f,	// (0x0003c108) main_mobtv_pg_channel_list_pane

0xde69,	// (0x0003c112) main_mobtv_pg_hdr_pane

0x7e36,	// (0x000360df) main_mobtv_programe_curr_pane_ParamLimits

0x7e36,	// (0x000360df) main_mobtv_programe_curr_pane

0x7e43,	// (0x000360ec) main_mobtv_programe_next_pane_ParamLimits

0x7e43,	// (0x000360ec) main_mobtv_programe_next_pane

0xde72,	// (0x0003c11b) popup_mobtv_noti_window

0xc7f0,	// (0x0003aa99) main_tv_pg_hdr_pane_g1

0xde7a,	// (0x0003c123) main_tv_pg_hdr_pane_g2

0xde82,	// (0x0003c12b) main_tv_pg_hdr_pane_g3

0xde8a,	// (0x0003c133) main_tv_pg_hdr_pane_g4

0xde92,	// (0x0003c13b) main_tv_pg_hdr_pane_g5

0xde9c,	// (0x0003c145) main_tv_pg_hdr_pane_g6

0xdea6,	// (0x0003c14f) main_tv_pg_hdr_pane_g7

0xdeb0,	// (0x0003c159) main_tv_pg_hdr_pane_g8

0xdeba,	// (0x0003c163) main_tv_pg_hdr_pane_g9

0xdec4,	// (0x0003c16d) main_tv_pg_hdr_pane_g10

0xdece,	// (0x0003c177) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0003dead) main_tv_pg_hdr_pane_g

0xded8,	// (0x0003c181) main_tv_pg_hdr_pane_t1

0xdee6,	// (0x0003c18f) main_tv_pg_hdr_pane_t2

0xdef4,	// (0x0003c19d) main_tv_pg_hdr_pane_t3

0xdf04,	// (0x0003c1ad) main_tv_pg_hdr_pane_t4

0xdf14,	// (0x0003c1bd) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0003dec4) main_tv_pg_hdr_pane_t

0xdf24,	// (0x0003c1cd) single_mobtv_pg_channel_pane_ParamLimits

0xdf24,	// (0x0003c1cd) single_mobtv_pg_channel_pane

0xdf36,	// (0x0003c1df) single_mobtv_pg_channel_table_pane

0xa8b0,	// (0x00038b59) single_mobtv_pg_channel_thumb_pane

0xdf3f,	// (0x0003c1e8) single_tv_pg_channel_pane_g1

0xdf48,	// (0x0003c1f1) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0003decf) single_tv_pg_channel_pane_g

0xca35,	// (0x0003acde) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca35,	// (0x0003acde) bg_single_mobtv_pg_channel_thumb_pane

0xdf51,	// (0x0003c1fa) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf51,	// (0x0003c1fa) single_mobtv_pg_channel_thumb_pane_g1

0xdf5f,	// (0x0003c208) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf5f,	// (0x0003c208) single_mobtv_pg_channel_thumb_pane_g2

0xdf6b,	// (0x0003c214) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf6b,	// (0x0003c214) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0003ded4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0003ded4) single_mobtv_pg_channel_thumb_pane_g

0xdf77,	// (0x0003c220) single_mobtv_pg_channel_thumb_pane_t1

0xdf85,	// (0x0003c22e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0003dedb) single_mobtv_pg_channel_thumb_pane_t

0xc7f0,	// (0x0003aa99) bg_single_mobtv_pg_channel_table_pane_g1

0xc7f0,	// (0x0003aa99) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0003d97d) bg_single_mobtv_pg_channel_table_pane_g

0xdf93,	// (0x0003c23c) single_mobtv_pg_channel_table_pane_t1

0xdfa1,	// (0x0003c24a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0003dee0) single_mobtv_pg_channel_table_pane_t

0x7e58,	// (0x00036101) main_mobtv_info_pane_g1_ParamLimits

0x7e58,	// (0x00036101) main_mobtv_info_pane_g1

0x7e76,	// (0x0003611f) main_mobtv_info_pane_t1_ParamLimits

0x7e76,	// (0x0003611f) main_mobtv_info_pane_t1

0x7eee,	// (0x00036197) main_mobtv_info_pane_t2_ParamLimits

0x7eee,	// (0x00036197) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0003deea) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0003deea) main_mobtv_info_pane_t

0x7f7d,	// (0x00036226) wait_bar_pane_cp05

0x7f8f,	// (0x00036238) main_mobtv_loading_pane_g1_ParamLimits

0x7f8f,	// (0x00036238) main_mobtv_loading_pane_g1

0x7fa2,	// (0x0003624b) main_mobtv_loading_pane_g2_ParamLimits

0x7fa2,	// (0x0003624b) main_mobtv_loading_pane_g2

0x7fae,	// (0x00036257) main_mobtv_loading_pane_g3_ParamLimits

0x7fae,	// (0x00036257) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0003def1) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0003def1) main_mobtv_loading_pane_g

0xdfaf,	// (0x0003c258) main_mobtv_loading_pane_t1_ParamLimits

0xdfaf,	// (0x0003c258) main_mobtv_loading_pane_t1

0xdfc7,	// (0x0003c270) main_mobtv_loading_pane_t2_ParamLimits

0xdfc7,	// (0x0003c270) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0003def8) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0003def8) main_mobtv_loading_pane_t

0x7fc1,	// (0x0003626a) wait_bar_pane_cp06_ParamLimits

0x7fc1,	// (0x0003626a) wait_bar_pane_cp06

0xdfeb,	// (0x0003c294) main_mobtv_programe_curr_pane_t1

0xdff9,	// (0x0003c2a2) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0003defd) main_mobtv_programe_curr_pane_t

0xe007,	// (0x0003c2b0) main_mobtv_programe_next_pane_t1

0xe015,	// (0x0003c2be) main_mobtv_programe_next_pane_t2

0xe023,	// (0x0003c2cc) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0003df02) main_mobtv_programe_next_pane_t

0x9c11,	// (0x00037eba) bg_popup_mobtv_noti_window_pane

0xe031,	// (0x0003c2da) popup_mobtv_noti_window_g1

0xe039,	// (0x0003c2e2) popup_mobtv_noti_window_t1

0xe047,	// (0x0003c2f0) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0003df09) popup_mobtv_noti_window_t

0xc7f0,	// (0x0003aa99) bg_popup_mobtv_noti_window_pane_g1

0x1b56,	// (0x0002fdff) sc_clock_pane

0x1b56,	// (0x0002fdff) main_fs_bigclock_pane

0x764d,	// (0x000358f6) blid2_tripm_pane_t4_ParamLimits

0x764d,	// (0x000358f6) blid2_tripm_pane_t4

0x7fd0,	// (0x00036279) sc_clock_pane_g1_ParamLimits

0x7fd0,	// (0x00036279) sc_clock_pane_g1

0x7fe2,	// (0x0003628b) sc_clock_pane_t1_ParamLimits

0x7fe2,	// (0x0003628b) sc_clock_pane_t1

0x8004,	// (0x000362ad) sc_clock_pane_t2_ParamLimits

0x8004,	// (0x000362ad) sc_clock_pane_t2

0x801c,	// (0x000362c5) sc_clock_pane_t3_ParamLimits

0x801c,	// (0x000362c5) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0003df0e) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0003df0e) sc_clock_pane_t

0x907f,	// (0x00037328) main_fs_bigclock_indicator_pane_ParamLimits

0x907f,	// (0x00037328) main_fs_bigclock_indicator_pane

0x80c2,	// (0x0003636b) main_fs_bigclock_pane_g1_ParamLimits

0x80c2,	// (0x0003636b) main_fs_bigclock_pane_g1

0x908b,	// (0x00037334) main_fs_bigclock_pane_t1_ParamLimits

0x908b,	// (0x00037334) main_fs_bigclock_pane_t1

0x909d,	// (0x00037346) main_fs_bigclock_pane_t2_ParamLimits

0x909d,	// (0x00037346) main_fs_bigclock_pane_t2

0x90b1,	// (0x0003735a) main_fs_bigclock_pane_t3_ParamLimits

0x90b1,	// (0x0003735a) main_fs_bigclock_pane_t3

0x0002,

0xfe1e,	// (0x0003e0c7) main_fs_bigclock_pane_t_ParamLimits

0xfe1e,	// (0x0003e0c7) main_fs_bigclock_pane_t

0xec3d,	// (0x0003cee6) main_fs_bigclock_indicator_pane_g1

0xdd66,	// (0x0003c00f) ncim_query_content_pane_g2_ParamLimits

0xdd66,	// (0x0003c00f) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0003de9b) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0003de9b) ncim_query_content_pane_g

0x8035,	// (0x000362de) sc_clock_pane_t4_ParamLimits

0x8035,	// (0x000362de) sc_clock_pane_t4

0x1b3c,	// (0x0002fde5) main_radioblah_pane

0x6485,	// (0x0003472e) cell_call4_button_pane_t1_copy1_ParamLimits

0x6485,	// (0x0003472e) cell_call4_button_pane_t1_copy1

0x7c1c,	// (0x00035ec5) main_ncimui_pane_t1_ParamLimits

0x7c1c,	// (0x00035ec5) main_ncimui_pane_t1

0x7c36,	// (0x00035edf) main_ncimui_pane_t2_ParamLimits

0x7c36,	// (0x00035edf) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0003de94) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0003de94) main_ncimui_pane_t

0xe18d,	// (0x0003c436) main_radioblah_anim_pane_ParamLimits

0xe18d,	// (0x0003c436) main_radioblah_anim_pane

0xe19e,	// (0x0003c447) main_radioblah_info_pane_ParamLimits

0xe19e,	// (0x0003c447) main_radioblah_info_pane

0xe1b2,	// (0x0003c45b) main_radioblah_pane_t1_ParamLimits

0xe1b2,	// (0x0003c45b) main_radioblah_pane_t1

0xe1ce,	// (0x0003c477) main_radioblah_pane_t2_ParamLimits

0xe1ce,	// (0x0003c477) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0003df2f) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0003df2f) main_radioblah_pane_t

0x8121,	// (0x000363ca) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8121,	// (0x000363ca) main_radioblah_rocker_ctrl_pane

0xe216,	// (0x0003c4bf) main_radioblah_info_pane_t1_ParamLimits

0xe216,	// (0x0003c4bf) main_radioblah_info_pane_t1

0x8179,	// (0x00036422) main_radioblah_info_pane_t2_ParamLimits

0x8179,	// (0x00036422) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0003df38) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0003df38) main_radioblah_info_pane_t

0xc7f0,	// (0x0003aa99) main_radioblah_rocker_ctrl_pane_g1

0x8229,	// (0x000364d2) main_radioblah_rocker_ctrl_pane_g2

0x8231,	// (0x000364da) main_radioblah_rocker_ctrl_pane_g3

0x8239,	// (0x000364e2) main_radioblah_rocker_ctrl_pane_g4

0x8241,	// (0x000364ea) main_radioblah_rocker_ctrl_pane_g5

0x8249,	// (0x000364f2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0003df41) main_radioblah_rocker_ctrl_pane_g

0x78d6,	// (0x00035b7f) main_cset_text2_pane_t1_copy1_ParamLimits

0x64e3,	// (0x0003478c) cam4_image_uncrop_qvga_pane

0x6558,	// (0x00034801) vid4_image_uncrop_qcif_pane

0x77d8,	// (0x00035a81) cam6_image_uncrop_qvga_pane_ParamLimits

0x77d8,	// (0x00035a81) cam6_image_uncrop_qvga_pane

0xda15,	// (0x0003bcbe) vid6_image_uncrop_qcif_pane_ParamLimits

0xda15,	// (0x0003bcbe) vid6_image_uncrop_qcif_pane

0x9c11,	// (0x00037eba) bg_popup_preview_window_pane_cp03

0xdd0a,	// (0x0003bfb3) list_cset_text2_pane

0xdd12,	// (0x0003bfbb) main_cset6_text2_pane_g1

0xdd1a,	// (0x0003bfc3) main_cset6_text2_pane_t1

0xea3b,	// (0x0003cce4) list_cset_text2_pane_t1_ParamLimits

0xea3b,	// (0x0003cce4) list_cset_text2_pane_t1

0x1b3c,	// (0x0002fde5) main_radioblah_pane_ParamLimits

0x7f69,	// (0x00036212) main_mobtv_info_pane_t3_ParamLimits

0x7f69,	// (0x00036212) main_mobtv_info_pane_t3

0x810f,	// (0x000363b8) main_radioblah_pane_g1

0x8149,	// (0x000363f2) main_radioblah_info_pane_g1

0x81ce,	// (0x00036477) main_radioblah_info_pane_t3_ParamLimits

0x81ce,	// (0x00036477) main_radioblah_info_pane_t3

0x3578,	// (0x00031821) highlight_cell_cale_month_pane_ParamLimits

0x3578,	// (0x00031821) highlight_cell_cale_month_pane

0x1b56,	// (0x0002fdff) main_phob_fisheye_pane

0xcb85,	// (0x0003ae2e) scroll_pane_cp0031_ParamLimits

0xcb85,	// (0x0003ae2e) scroll_pane_cp0031

0xdb23,	// (0x0003bdcc) wait_bar_pane_cp08_ParamLimits

0x7958,	// (0x00035c01) cset_list_set_pane_copy1_ParamLimits

0xe250,	// (0x0003c4f9) highlight_cell_cale_month_pane_g1

0x8251,	// (0x000364fa) highlight_cell_cale_month_pane_t1

0xd79f,	// (0x0003ba48) list_gen_pane_cp01

0xd358,	// (0x0003b601) scroll_pane_01

0x825f,	// (0x00036508) list_single_double_fisheye_pane

0x8268,	// (0x00036511) list_double_fisheye_pane_g1_ParamLimits

0x8268,	// (0x00036511) list_double_fisheye_pane_g1

0x8274,	// (0x0003651d) list_double_fisheye_pane_g2_ParamLimits

0x8274,	// (0x0003651d) list_double_fisheye_pane_g2

0x8288,	// (0x00036531) list_double_fisheye_pane_g3_ParamLimits

0x8288,	// (0x00036531) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0003df4e) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0003df4e) list_double_fisheye_pane_g

0x82b1,	// (0x0003655a) list_double_fisheye_pane_t1_ParamLimits

0x82b1,	// (0x0003655a) list_double_fisheye_pane_t1

0x82cc,	// (0x00036575) list_double_fisheye_pane_t2_ParamLimits

0x82cc,	// (0x00036575) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0003df59) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0003df59) list_double_fisheye_pane_t

0x1b56,	// (0x0002fdff) main_call5_pane

0x8060,	// (0x00036309) sc_swipe_pane_ParamLimits

0x8060,	// (0x00036309) sc_swipe_pane

0x8301,	// (0x000365aa) call5_image_pane_ParamLimits

0x8301,	// (0x000365aa) call5_image_pane

0x831e,	// (0x000365c7) call5_swipe_1_pane_ParamLimits

0x831e,	// (0x000365c7) call5_swipe_1_pane

0x8331,	// (0x000365da) call5_swipe_2_pane_ParamLimits

0x8331,	// (0x000365da) call5_swipe_2_pane

0x835c,	// (0x00036605) popup_call5_audio_first_window_ParamLimits

0x835c,	// (0x00036605) popup_call5_audio_first_window

0xca35,	// (0x0003acde) call5_swipe_1_pane_g1_ParamLimits

0xca35,	// (0x0003acde) call5_swipe_1_pane_g1

0xe258,	// (0x0003c501) call5_swipe_1_pane_g2_ParamLimits

0xe258,	// (0x0003c501) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0003df5e) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0003df5e) call5_swipe_1_pane_g

0xe264,	// (0x0003c50d) call5_swipe_1_pane_t1_ParamLimits

0xe264,	// (0x0003c50d) call5_swipe_1_pane_t1

0xca35,	// (0x0003acde) call5_swipe_2_pane_g1_ParamLimits

0xca35,	// (0x0003acde) call5_swipe_2_pane_g1

0xe279,	// (0x0003c522) call5_swipe_2_pane_g2_ParamLimits

0xe279,	// (0x0003c522) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0003df63) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0003df63) call5_swipe_2_pane_g

0xe285,	// (0x0003c52e) call5_swipe_2_pane_t1_ParamLimits

0xe285,	// (0x0003c52e) call5_swipe_2_pane_t1

0xe29a,	// (0x0003c543) sc_swipe_pane_g1_ParamLimits

0xe29a,	// (0x0003c543) sc_swipe_pane_g1

0xe2a7,	// (0x0003c550) sc_swipe_pane_g2_ParamLimits

0xe2a7,	// (0x0003c550) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0003df68) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0003df68) sc_swipe_pane_g

0xe2b3,	// (0x0003c55c) sc_swipe_pane_t1_ParamLimits

0xe2b3,	// (0x0003c55c) sc_swipe_pane_t1

0x1b56,	// (0x0002fdff) main_cmail_launcher_pane

0x836d,	// (0x00036616) aid_size_cell_cmail_l_ParamLimits

0x836d,	// (0x00036616) aid_size_cell_cmail_l

0x837b,	// (0x00036624) grid_cmail_l_pane_ParamLimits

0x837b,	// (0x00036624) grid_cmail_l_pane

0x8395,	// (0x0003663e) cell_cmail_l_pane_ParamLimits

0x8395,	// (0x0003663e) cell_cmail_l_pane

0xe2c8,	// (0x0003c571) cell_cmail_l_pane_g1_ParamLimits

0xe2c8,	// (0x0003c571) cell_cmail_l_pane_g1

0xe2d4,	// (0x0003c57d) cell_cmail_l_pane_t1_ParamLimits

0xe2d4,	// (0x0003c57d) cell_cmail_l_pane_t1

0xe2ea,	// (0x0003c593) cell_cmail_l_pane_t2_ParamLimits

0xe2ea,	// (0x0003c593) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0003df6d) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0003df6d) cell_cmail_l_pane_t

0xa8ec,	// (0x00038b95) grid_highlight_pane_cp018_ParamLimits

0xa8ec,	// (0x00038b95) grid_highlight_pane_cp018

0x0253,	// (0x0002e4fc) main2_pane_ParamLimits

0x0253,	// (0x0002e4fc) main2_pane

0xa3fc,	// (0x000386a5) popup_sp_fs_action_menu_bg_pane_g1

0xa404,	// (0x000386ad) popup_sp_fs_action_menu_bg_pane_g2

0xa40c,	// (0x000386b5) popup_sp_fs_action_menu_bg_pane_g3

0xa414,	// (0x000386bd) popup_sp_fs_action_menu_bg_pane_g4

0xa41c,	// (0x000386c5) popup_sp_fs_action_menu_bg_pane_g5

0xa424,	// (0x000386cd) popup_sp_fs_action_menu_bg_pane_g6

0xa42c,	// (0x000386d5) popup_sp_fs_action_menu_bg_pane_g7

0xa434,	// (0x000386dd) popup_sp_fs_action_menu_bg_pane_g8

0xa43c,	// (0x000386e5) popup_sp_fs_action_menu_bg_pane_g9

0xa444,	// (0x000386ed) popup_sp_fs_action_menu_bg_pane_g10

0xa444,	// (0x000386ed) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0003d418) popup_sp_fs_action_menu_bg_pane_g

0x2725,	// (0x000309ce) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_t3_g3_g1

0x2731,	// (0x000309da) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2731,	// (0x000309da) list_medium_line_x2_t3_g3_g2

0x273d,	// (0x000309e6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x273d,	// (0x000309e6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0003d4c6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0003d4c6) list_medium_line_x2_t3_g3_g

0x2749,	// (0x000309f2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2749,	// (0x000309f2) list_medium_line_x2_t3_g3_t1

0x275e,	// (0x00030a07) list_medium_line_x2_t3_g3_t2_ParamLimits

0x275e,	// (0x00030a07) list_medium_line_x2_t3_g3_t2

0x2772,	// (0x00030a1b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2772,	// (0x00030a1b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0003d4cd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0003d4cd) list_medium_line_x2_t3_g3_t

0x2725,	// (0x000309ce) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_t3_g2_g1

0x273d,	// (0x000309e6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x273d,	// (0x000309e6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0003d4d4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0003d4d4) list_medium_line_x2_t3_g2_g

0x2787,	// (0x00030a30) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2787,	// (0x00030a30) list_medium_line_x2_t3_g2_t1

0x279d,	// (0x00030a46) list_medium_line_x2_t3_g2_t2_ParamLimits

0x279d,	// (0x00030a46) list_medium_line_x2_t3_g2_t2

0x27af,	// (0x00030a58) list_medium_line_x2_t3_g2_t3_ParamLimits

0x27af,	// (0x00030a58) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0003d4d9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0003d4d9) list_medium_line_x2_t3_g2_t

0x2725,	// (0x000309ce) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_t4_g4_g1

0x27cd,	// (0x00030a76) list_medium_line_x2_t4_g4_g2_ParamLimits

0x27cd,	// (0x00030a76) list_medium_line_x2_t4_g4_g2

0x2731,	// (0x000309da) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2731,	// (0x000309da) list_medium_line_x2_t4_g4_g3

0x27d9,	// (0x00030a82) list_medium_line_x2_t4_g4_g4_ParamLimits

0x27d9,	// (0x00030a82) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0003d4e0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0003d4e0) list_medium_line_x2_t4_g4_g

0x27e5,	// (0x00030a8e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x27e5,	// (0x00030a8e) list_medium_line_x2_t4_g4_t1

0x27ff,	// (0x00030aa8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x27ff,	// (0x00030aa8) list_medium_line_x2_t4_g4_t2

0x2815,	// (0x00030abe) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2815,	// (0x00030abe) list_medium_line_x2_t4_g4_t3

0x282a,	// (0x00030ad3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x282a,	// (0x00030ad3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0003d4e9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0003d4e9) list_medium_line_x2_t4_g4_t

0x2725,	// (0x000309ce) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_t2_g4_g1

0x27cd,	// (0x00030a76) list_medium_line_x2_t2_g4_g2_ParamLimits

0x27cd,	// (0x00030a76) list_medium_line_x2_t2_g4_g2

0x2731,	// (0x000309da) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2731,	// (0x000309da) list_medium_line_x2_t2_g4_g3

0x273d,	// (0x000309e6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x273d,	// (0x000309e6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0003d550) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0003d550) list_medium_line_x2_t2_g4_g

0x359e,	// (0x00031847) list_medium_line_x2_t2_g4_t1_ParamLimits

0x359e,	// (0x00031847) list_medium_line_x2_t2_g4_t1

0x2772,	// (0x00030a1b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2772,	// (0x00030a1b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0003d559) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0003d559) list_medium_line_x2_t2_g4_t

0x2725,	// (0x000309ce) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_t2_g3_g1

0x2731,	// (0x000309da) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2731,	// (0x000309da) list_medium_line_x2_t2_g3_g2

0x273d,	// (0x000309e6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x273d,	// (0x000309e6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0003d4c6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0003d4c6) list_medium_line_x2_t2_g3_g

0x35b3,	// (0x0003185c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x35b3,	// (0x0003185c) list_medium_line_x2_t2_g3_t1

0x2772,	// (0x00030a1b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2772,	// (0x00030a1b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0003d55e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0003d55e) list_medium_line_x2_t2_g3_t

0x3709,	// (0x000319b2) main_sp_fs_list_pane_ParamLimits

0x3709,	// (0x000319b2) main_sp_fs_list_pane

0xd05f,	// (0x0003b308) sp_fs_scroll_pane_ParamLimits

0xd05f,	// (0x0003b308) sp_fs_scroll_pane

0x3715,	// (0x000319be) list_medium_line_x2_t3_t1

0x3725,	// (0x000319ce) list_medium_line_x2_t3_t2

0x3733,	// (0x000319dc) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0003d5a9) list_medium_line_x2_t3_t

0x3741,	// (0x000319ea) list_medium_line_x3_t4_t1

0x3751,	// (0x000319fa) list_medium_line_x3_t4_t2

0x375f,	// (0x00031a08) list_medium_line_x3_t4_t3

0x3733,	// (0x000319dc) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0003d5b0) list_medium_line_x3_t4_t

0x376d,	// (0x00031a16) list_medium_line_x4_t5_t1

0x377d,	// (0x00031a26) list_medium_line_x4_t5_t2

0x375f,	// (0x00031a08) list_medium_line_x4_t5_t3

0x378b,	// (0x00031a34) list_medium_line_x4_t5_t4

0x3733,	// (0x000319dc) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0003d5b9) list_medium_line_x4_t5_t

0x2725,	// (0x000309ce) list_medium_line_t4_g4_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_t4_g4_g1

0x27d9,	// (0x00030a82) list_medium_line_t4_g4_g2_ParamLimits

0x27d9,	// (0x00030a82) list_medium_line_t4_g4_g2

0x3799,	// (0x00031a42) list_medium_line_t4_g4_g3_ParamLimits

0x3799,	// (0x00031a42) list_medium_line_t4_g4_g3

0x273d,	// (0x000309e6) list_medium_line_t4_g4_g4_ParamLimits

0x273d,	// (0x000309e6) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0003d5c4) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0003d5c4) list_medium_line_t4_g4_g

0x37a5,	// (0x00031a4e) list_medium_line_t4_g4_t1_ParamLimits

0x37a5,	// (0x00031a4e) list_medium_line_t4_g4_t1

0x37ba,	// (0x00031a63) list_medium_line_t4_g4_t2_ParamLimits

0x37ba,	// (0x00031a63) list_medium_line_t4_g4_t2

0x37d0,	// (0x00031a79) list_medium_line_t4_g4_t3_ParamLimits

0x37d0,	// (0x00031a79) list_medium_line_t4_g4_t3

0x2772,	// (0x00030a1b) list_medium_line_t4_g4_t4_ParamLimits

0x2772,	// (0x00030a1b) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0003d5cd) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0003d5cd) list_medium_line_t4_g4_t

0x3918,	// (0x00031bc1) chi_dic_find_pane_g1

0x06bb,	// (0x0002e964) main_tport_pane

0xd47a,	// (0x0003b723) list_medium_line_plain_t1

0x6d8d,	// (0x00035036) list_medium_line_t2_g2_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_t2_g2_g1

0x6d99,	// (0x00035042) list_medium_line_t2_g2_g2_ParamLimits

0x6d99,	// (0x00035042) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0003dca5) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0003dca5) list_medium_line_t2_g2_g

0x6da5,	// (0x0003504e) list_medium_line_t2_g2_t1_ParamLimits

0x6da5,	// (0x0003504e) list_medium_line_t2_g2_t1

0x6dbf,	// (0x00035068) list_medium_line_t2_g2_t2_ParamLimits

0x6dbf,	// (0x00035068) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0003dcaa) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0003dcaa) list_medium_line_t2_g2_t

0xd7a8,	// (0x0003ba51) aid_sp_fs_list_icon_a_sm

0xd7b0,	// (0x0003ba59) aid_sp_fs_list_icon_d

0xd7b8,	// (0x0003ba61) aid_sp_fs_text_primary

0xd7c1,	// (0x0003ba6a) aid_sp_fs_text_secondary

0x73fa,	// (0x000356a3) list_medium_line

0x73fa,	// (0x000356a3) list_medium_line_g2

0x73fa,	// (0x000356a3) list_medium_line_g3

0x73fa,	// (0x000356a3) list_medium_line_plain

0x73fa,	// (0x000356a3) list_medium_line_plain_t2

0x73fa,	// (0x000356a3) list_medium_line_plain_t3

0x73fa,	// (0x000356a3) list_medium_line_right_icon

0x73fa,	// (0x000356a3) list_medium_line_right_iconx2

0x73fa,	// (0x000356a3) list_medium_line_t2

0x73fa,	// (0x000356a3) list_medium_line_t2_g2

0x73fa,	// (0x000356a3) list_medium_line_t2_g3

0x73fa,	// (0x000356a3) list_medium_line_t2_right_icon

0x73fa,	// (0x000356a3) list_medium_line_t2_right_iconx2

0x73fa,	// (0x000356a3) list_medium_line_t3

0x73fa,	// (0x000356a3) list_medium_line_t3_g2

0x73fa,	// (0x000356a3) list_medium_line_t3_g3

0x73fa,	// (0x000356a3) list_medium_line_t3_right_iconx2

0x7403,	// (0x000356ac) list_medium_line_t4_g4

0x740c,	// (0x000356b5) list_medium_line_x2

0x740c,	// (0x000356b5) list_medium_line_x2_t2_g2

0x740c,	// (0x000356b5) list_medium_line_x2_t2_g3

0x740c,	// (0x000356b5) list_medium_line_x2_t2_g4

0x740c,	// (0x000356b5) list_medium_line_x2_t3

0x740c,	// (0x000356b5) list_medium_line_x2_t3_g2

0x740c,	// (0x000356b5) list_medium_line_x2_t3_g3

0x740c,	// (0x000356b5) list_medium_line_x2_t3_g4

0x740c,	// (0x000356b5) list_medium_line_x2_t4_g2

0x740c,	// (0x000356b5) list_medium_line_x2_t4_g4

0x7415,	// (0x000356be) list_medium_line_x3

0x7415,	// (0x000356be) list_medium_line_x3_t4

0x7415,	// (0x000356be) list_medium_line_x3_t4_g4

0x7403,	// (0x000356ac) list_medium_line_x4_t4

0x7403,	// (0x000356ac) list_medium_line_x4_t4_g7

0x7403,	// (0x000356ac) list_medium_line_x4_t5

0x741e,	// (0x000356c7) list_single_fs_dyc_pane_ParamLimits

0x741e,	// (0x000356c7) list_single_fs_dyc_pane

0x2725,	// (0x000309ce) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x4_t4_g7_g1

0x7b1a,	// (0x00035dc3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7b1a,	// (0x00035dc3) list_medium_line_x4_t4_g7_g2

0x7b26,	// (0x00035dcf) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b26,	// (0x00035dcf) list_medium_line_x4_t4_g7_g3

0x7b35,	// (0x00035dde) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b35,	// (0x00035dde) list_medium_line_x4_t4_g7_g4

0x7b41,	// (0x00035dea) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b41,	// (0x00035dea) list_medium_line_x4_t4_g7_g5

0x7b50,	// (0x00035df9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7b50,	// (0x00035df9) list_medium_line_x4_t4_g7_g6

0x7b5f,	// (0x00035e08) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7b5f,	// (0x00035e08) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0003de75) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0003de75) list_medium_line_x4_t4_g7_g

0x7b6b,	// (0x00035e14) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7b6b,	// (0x00035e14) list_medium_line_x4_t4_g7_t1

0x7b80,	// (0x00035e29) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7b80,	// (0x00035e29) list_medium_line_x4_t4_g7_t2

0x7b95,	// (0x00035e3e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7b95,	// (0x00035e3e) list_medium_line_x4_t4_g7_t3

0x7baa,	// (0x00035e53) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7baa,	// (0x00035e53) list_medium_line_x4_t4_g7_t4

0x7bbc,	// (0x00035e65) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7bbc,	// (0x00035e65) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0003de84) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0003de84) list_medium_line_x4_t4_g7_t

0x7bce,	// (0x00035e77) list_single_dyc_row_pane_ParamLimits

0x7bce,	// (0x00035e77) list_single_dyc_row_pane

0x82ee,	// (0x00036597) call5_gesture_pane_ParamLimits

0x82ee,	// (0x00036597) call5_gesture_pane

0x8344,	// (0x000365ed) call5_windows_pane_ParamLimits

0x8344,	// (0x000365ed) call5_windows_pane

0x83af,	// (0x00036658) call5_swipe_1_pane_cp_ParamLimits

0x83af,	// (0x00036658) call5_swipe_1_pane_cp

0x83bb,	// (0x00036664) call5_swipe_2_pane_cp_ParamLimits

0x83bb,	// (0x00036664) call5_swipe_2_pane_cp

0xa554,	// (0x000387fd) call5_image_pane_cp

0x83c7,	// (0x00036670) popup_call5_audio_first_window_cp_ParamLimits

0x83c7,	// (0x00036670) popup_call5_audio_first_window_cp

0xe29a,	// (0x0003c543) call5_swipe_1_pane_g1_cp_ParamLimits

0xe29a,	// (0x0003c543) call5_swipe_1_pane_g1_cp

0xe307,	// (0x0003c5b0) call5_swipe_1_pane_g2_cp

0xe2b3,	// (0x0003c55c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2b3,	// (0x0003c55c) call5_swipe_1_pane_t1_cp

0xe29a,	// (0x0003c543) call5_swipe_2_pane_g1_cp_ParamLimits

0xe29a,	// (0x0003c543) call5_swipe_2_pane_g1_cp

0xe30f,	// (0x0003c5b8) call5_swipe_2_pane_g2_cp

0xe317,	// (0x0003c5c0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe317,	// (0x0003c5c0) call5_swipe_2_pane_t1_cp

0xa8ec,	// (0x00038b95) main_sp_fs_email_pane

0xe32c,	// (0x0003c5d5) main_sp_fs_listscroll_pane_te

0x83d5,	// (0x0003667e) popup_sp_fs_action_menu_pane_ParamLimits

0x83d5,	// (0x0003667e) popup_sp_fs_action_menu_pane

0xc7f0,	// (0x0003aa99) bg_sp_fs_ctrlbar_pane_g1

0xe335,	// (0x0003c5de) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe33e,	// (0x0003c5e7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe347,	// (0x0003c5f0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7f0,	// (0x0003aa99) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0003df72) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5d5,	// (0x0003a87e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5d5,	// (0x0003a87e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe350,	// (0x0003c5f9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe350,	// (0x0003c5f9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe35c,	// (0x0003c605) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe35c,	// (0x0003c605) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0003df7b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0003df7b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe368,	// (0x0003c611) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe368,	// (0x0003c611) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8419,	// (0x000366c2) list_medium_line_t2_right_icon_g1

0x8421,	// (0x000366ca) list_medium_line_t2_right_icon_t1

0x8431,	// (0x000366da) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0003df80) list_medium_line_t2_right_icon_t

0xc3e8,	// (0x0003a691) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3e8,	// (0x0003a691) bg_sp_fs_ctrlbar_pane

0x848b,	// (0x00036734) main_sp_fs_ctrlbar_button_pane_cp01

0x8495,	// (0x0003673e) main_sp_fs_ctrlbar_ddmenu_pane

0xe3ba,	// (0x0003c663) main_sp_fs_ctrlbar_pane_g1

0xe3c6,	// (0x0003c66f) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0003df85) main_sp_fs_ctrlbar_pane_g

0x84d3,	// (0x0003677c) main_sp_fs_ctrlbar_pane_t1

0x8512,	// (0x000367bb) main_sp_fs_ctrlbar_pane

0x8536,	// (0x000367df) main_sp_fs_listscroll_pane_te_cp01

0x8556,	// (0x000367ff) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8556,	// (0x000367ff) popup_sp_fs_action_menu_pane_cp01

0xa8ec,	// (0x00038b95) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa8ec,	// (0x00038b95) bg_sp_fs_highlight_list_pane_cp01

0xe3ed,	// (0x0003c696) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3ed,	// (0x0003c696) sp_fs_action_menu_list_gene_pane_g1

0xe3fc,	// (0x0003c6a5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3fc,	// (0x0003c6a5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003df93) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003df93) sp_fs_action_menu_list_gene_pane_g

0xe409,	// (0x0003c6b2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe409,	// (0x0003c6b2) sp_fs_action_menu_list_gene_pane_t1

0xe421,	// (0x0003c6ca) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe421,	// (0x0003c6ca) sp_fs_action_menu_list_gene_pane

0xe440,	// (0x0003c6e9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe440,	// (0x0003c6e9) popup_sp_fs_action_menu_bg_pane

0xe44e,	// (0x0003c6f7) sp_fs_action_menu_list_pane_ParamLimits

0xe44e,	// (0x0003c6f7) sp_fs_action_menu_list_pane

0x8586,	// (0x0003682f) sp_fs_scroll_pane_cp01_ParamLimits

0x8586,	// (0x0003682f) sp_fs_scroll_pane_cp01

0x85ac,	// (0x00036855) list_medium_line_plain_t2_t1

0x85bc,	// (0x00036865) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003df98) list_medium_line_plain_t2_t

0x85cc,	// (0x00036875) list_medium_line_plain_t3_t1

0x85dc,	// (0x00036885) list_medium_line_plain_t3_t2

0x85ea,	// (0x00036893) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003df9d) list_medium_line_plain_t3_t

0x2725,	// (0x000309ce) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_t2_g2_g1

0x273d,	// (0x000309e6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x273d,	// (0x000309e6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0003d4d4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0003d4d4) list_medium_line_x2_t2_g2_g

0x37a5,	// (0x00031a4e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x37a5,	// (0x00031a4e) list_medium_line_x2_t2_g2_t1

0x2772,	// (0x00030a1b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2772,	// (0x00030a1b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003dfa4) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003dfa4) list_medium_line_x2_t2_g2_t

0x2725,	// (0x000309ce) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_t4_g2_g1

0x273d,	// (0x000309e6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x273d,	// (0x000309e6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0003d4d4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0003d4d4) list_medium_line_x2_t4_g2_g

0x85f8,	// (0x000368a1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85f8,	// (0x000368a1) list_medium_line_x2_t4_g2_t1

0x8612,	// (0x000368bb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8612,	// (0x000368bb) list_medium_line_x2_t4_g2_t2

0x8628,	// (0x000368d1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8628,	// (0x000368d1) list_medium_line_x2_t4_g2_t3

0x2772,	// (0x00030a1b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2772,	// (0x00030a1b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003dfa9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003dfa9) list_medium_line_x2_t4_g2_t

0x863d,	// (0x000368e6) list_medium_line_t3_right_iconx2_g1

0x8419,	// (0x000366c2) list_medium_line_t3_right_iconx2_g2

0x8645,	// (0x000368ee) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003dfb2) list_medium_line_t3_right_iconx2_g

0x864f,	// (0x000368f8) list_medium_line_t3_right_iconx2_t1

0x865f,	// (0x00036908) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003dfb9) list_medium_line_t3_right_iconx2_t

0x2725,	// (0x000309ce) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x3_t4_g4_g1

0x2731,	// (0x000309da) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2731,	// (0x000309da) list_medium_line_x3_t4_g4_g2

0x27d9,	// (0x00030a82) list_medium_line_x3_t4_g4_g3_ParamLimits

0x27d9,	// (0x00030a82) list_medium_line_x3_t4_g4_g3

0x866d,	// (0x00036916) list_medium_line_x3_t4_g4_g4_ParamLimits

0x866d,	// (0x00036916) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003dfbe) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003dfbe) list_medium_line_x3_t4_g4_g

0x8679,	// (0x00036922) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8679,	// (0x00036922) list_medium_line_x3_t4_g4_t1

0x8690,	// (0x00036939) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8690,	// (0x00036939) list_medium_line_x3_t4_g4_t2

0x86ab,	// (0x00036954) list_medium_line_x3_t4_g4_t3_ParamLimits

0x86ab,	// (0x00036954) list_medium_line_x3_t4_g4_t3

0x86c0,	// (0x00036969) list_medium_line_x3_t4_g4_t4_ParamLimits

0x86c0,	// (0x00036969) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003dfc7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003dfc7) list_medium_line_x3_t4_g4_t

0x86dd,	// (0x00036986) list_single_dyc_row_text_pane_t1_ParamLimits

0x86dd,	// (0x00036986) list_single_dyc_row_text_pane_t1

0x8726,	// (0x000369cf) list_single_dyc_row_text_pane_t2_ParamLimits

0x8726,	// (0x000369cf) list_single_dyc_row_text_pane_t2

0xe46e,	// (0x0003c717) list_single_dyc_row_text_pane_t3_ParamLimits

0xe46e,	// (0x0003c717) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003dfd0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003dfd0) list_single_dyc_row_text_pane_t

0xe492,	// (0x0003c73b) list_single_dyc_row_pane_g1_ParamLimits

0xe492,	// (0x0003c73b) list_single_dyc_row_pane_g1

0xe49e,	// (0x0003c747) list_single_dyc_row_pane_g2_ParamLimits

0xe49e,	// (0x0003c747) list_single_dyc_row_pane_g2

0xe4aa,	// (0x0003c753) list_single_dyc_row_pane_g3_ParamLimits

0xe4aa,	// (0x0003c753) list_single_dyc_row_pane_g3

0xe4b6,	// (0x0003c75f) list_single_dyc_row_pane_g4_ParamLimits

0xe4b6,	// (0x0003c75f) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003dfdd) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003dfdd) list_single_dyc_row_pane_g

0xe4c2,	// (0x0003c76b) list_single_dyc_row_text_pane_ParamLimits

0xe4c2,	// (0x0003c76b) list_single_dyc_row_text_pane

0x9c11,	// (0x00037eba) bg_sp_fs_scroll_pane

0xe4e1,	// (0x0003c78a) thumb_sp_fs_scroll_pane

0x6d8d,	// (0x00035036) list_medium_line_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_g1

0xe4ea,	// (0x0003c793) list_medium_line_t1_ParamLimits

0xe4ea,	// (0x0003c793) list_medium_line_t1

0x2725,	// (0x000309ce) list_medium_line_x2_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_g1

0x2731,	// (0x000309da) list_medium_line_x2_g2_ParamLimits

0x2731,	// (0x000309da) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003dfe6) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003dfe6) list_medium_line_x2_g

0xe4ff,	// (0x0003c7a8) list_medium_line_x2_t1_ParamLimits

0xe4ff,	// (0x0003c7a8) list_medium_line_x2_t1

0x2725,	// (0x000309ce) list_medium_line_x3_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x3_g1

0x2731,	// (0x000309da) list_medium_line_x3_g2_ParamLimits

0x2731,	// (0x000309da) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003dfe6) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003dfe6) list_medium_line_x3_g

0xe4ff,	// (0x0003c7a8) list_medium_line_x3_t1_ParamLimits

0xe4ff,	// (0x0003c7a8) list_medium_line_x3_t1

0xe515,	// (0x0003c7be) thumb_sp_fs_scroll_pane_g1

0xe51e,	// (0x0003c7c7) thumb_sp_fs_scroll_pane_g2

0xe527,	// (0x0003c7d0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003dfeb) thumb_sp_fs_scroll_pane_g

0xe515,	// (0x0003c7be) bg_sp_fs_scroll_pane_g1

0xe51e,	// (0x0003c7c7) bg_sp_fs_scroll_pane_g2

0xe527,	// (0x0003c7d0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003dfeb) bg_sp_fs_scroll_pane_g

0x2725,	// (0x000309ce) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2725,	// (0x000309ce) list_medium_line_x2_t3_g4_g1

0x27cd,	// (0x00030a76) list_medium_line_x2_t3_g4_g2_ParamLimits

0x27cd,	// (0x00030a76) list_medium_line_x2_t3_g4_g2

0x2731,	// (0x000309da) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2731,	// (0x000309da) list_medium_line_x2_t3_g4_g3

0x273d,	// (0x000309e6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x273d,	// (0x000309e6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0003d550) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0003d550) list_medium_line_x2_t3_g4_g

0x885b,	// (0x00036b04) list_medium_line_x2_t3_g4_t1_ParamLimits

0x885b,	// (0x00036b04) list_medium_line_x2_t3_g4_t1

0x8875,	// (0x00036b1e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8875,	// (0x00036b1e) list_medium_line_x2_t3_g4_t2

0x2772,	// (0x00030a1b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2772,	// (0x00030a1b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003dff2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003dff2) list_medium_line_x2_t3_g4_t

0x6d8d,	// (0x00035036) list_medium_line_g2_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_g2_g1

0x6d99,	// (0x00035042) list_medium_line_g2_g2_ParamLimits

0x6d99,	// (0x00035042) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0003dca5) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0003dca5) list_medium_line_g2_g

0xe530,	// (0x0003c7d9) list_medium_line_g2_t1_ParamLimits

0xe530,	// (0x0003c7d9) list_medium_line_g2_t1

0x6d8d,	// (0x00035036) list_medium_line_t3_g2_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_t3_g2_g1

0x6d99,	// (0x00035042) list_medium_line_t3_g2_g2_ParamLimits

0x6d99,	// (0x00035042) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0003dca5) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0003dca5) list_medium_line_t3_g2_g

0x888f,	// (0x00036b38) list_medium_line_t3_g2_t1_ParamLimits

0x888f,	// (0x00036b38) list_medium_line_t3_g2_t1

0x88a9,	// (0x00036b52) list_medium_line_t3_g2_t2_ParamLimits

0x88a9,	// (0x00036b52) list_medium_line_t3_g2_t2

0x88bf,	// (0x00036b68) list_medium_line_t3_g2_t3_ParamLimits

0x88bf,	// (0x00036b68) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003dff9) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003dff9) list_medium_line_t3_g2_t

0x8419,	// (0x000366c2) list_medium_line_right_icon_g1

0xe545,	// (0x0003c7ee) list_medium_line_right_icon_t1

0x6d8d,	// (0x00035036) list_medium_line_t2_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_t2_g1

0x88d9,	// (0x00036b82) list_medium_line_t2_t1_ParamLimits

0x88d9,	// (0x00036b82) list_medium_line_t2_t1

0x88f3,	// (0x00036b9c) list_medium_line_t2_t2_ParamLimits

0x88f3,	// (0x00036b9c) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003e000) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003e000) list_medium_line_t2_t

0x6d8d,	// (0x00035036) list_medium_line_t3_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_t3_g1

0x890c,	// (0x00036bb5) list_medium_line_t3_t1_ParamLimits

0x890c,	// (0x00036bb5) list_medium_line_t3_t1

0x8926,	// (0x00036bcf) list_medium_line_t3_t2_ParamLimits

0x8926,	// (0x00036bcf) list_medium_line_t3_t2

0x893c,	// (0x00036be5) list_medium_line_t3_t3_ParamLimits

0x893c,	// (0x00036be5) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003e005) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003e005) list_medium_line_t3_t

0x6d8d,	// (0x00035036) list_medium_line_g3_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_g3_g1

0x8951,	// (0x00036bfa) list_medium_line_g3_g2_ParamLimits

0x8951,	// (0x00036bfa) list_medium_line_g3_g2

0x6d99,	// (0x00035042) list_medium_line_g3_g3_ParamLimits

0x6d99,	// (0x00035042) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003e00c) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003e00c) list_medium_line_g3_g

0xe553,	// (0x0003c7fc) list_medium_line_g3_t1_ParamLimits

0xe553,	// (0x0003c7fc) list_medium_line_g3_t1

0x6d8d,	// (0x00035036) list_medium_line_t2_g3_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_t2_g3_g1

0x8951,	// (0x00036bfa) list_medium_line_t2_g3_g2_ParamLimits

0x8951,	// (0x00036bfa) list_medium_line_t2_g3_g2

0x6d99,	// (0x00035042) list_medium_line_t2_g3_g3_ParamLimits

0x6d99,	// (0x00035042) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003e00c) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003e00c) list_medium_line_t2_g3_g

0x895d,	// (0x00036c06) list_medium_line_t2_g3_t1_ParamLimits

0x895d,	// (0x00036c06) list_medium_line_t2_g3_t1

0x8977,	// (0x00036c20) list_medium_line_t2_g3_t2_ParamLimits

0x8977,	// (0x00036c20) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003e013) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003e013) list_medium_line_t2_g3_t

0x6d8d,	// (0x00035036) list_medium_line_t3_g3_g1_ParamLimits

0x6d8d,	// (0x00035036) list_medium_line_t3_g3_g1

0x8951,	// (0x00036bfa) list_medium_line_t3_g3_g2_ParamLimits

0x8951,	// (0x00036bfa) list_medium_line_t3_g3_g2

0x6d99,	// (0x00035042) list_medium_line_t3_g3_g3_ParamLimits

0x6d99,	// (0x00035042) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003e00c) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003e00c) list_medium_line_t3_g3_g

0x8995,	// (0x00036c3e) list_medium_line_t3_g3_t1_ParamLimits

0x8995,	// (0x00036c3e) list_medium_line_t3_g3_t1

0x89ae,	// (0x00036c57) list_medium_line_t3_g3_t2_ParamLimits

0x89ae,	// (0x00036c57) list_medium_line_t3_g3_t2

0x89c4,	// (0x00036c6d) list_medium_line_t3_g3_t3_ParamLimits

0x89c4,	// (0x00036c6d) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003e018) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003e018) list_medium_line_t3_g3_t

0x863d,	// (0x000368e6) list_medium_line_right_iconx2_g1

0x8419,	// (0x000366c2) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003e01f) list_medium_line_right_iconx2_g

0xe568,	// (0x0003c811) list_medium_line_right_iconx2_t1

0x863d,	// (0x000368e6) list_medium_line_t2_right_iconx2_g1

0x8419,	// (0x000366c2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003e01f) list_medium_line_t2_right_iconx2_g

0x89de,	// (0x00036c87) list_medium_line_t2_right_iconx2_t1

0x89ee,	// (0x00036c97) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003e024) list_medium_line_t2_right_iconx2_t

0x8a00,	// (0x00036ca9) list_medium_line_x4_t4_t1

0x8a0e,	// (0x00036cb7) list_medium_line_x4_t4_t2

0x8a1e,	// (0x00036cc7) list_medium_line_x4_t4_t3

0x8a2e,	// (0x00036cd7) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003e029) list_medium_line_x4_t4_t

0x8a81,	// (0x00036d2a) tport_appsw_pane_ParamLimits

0x8a81,	// (0x00036d2a) tport_appsw_pane

0x8a99,	// (0x00036d42) tport_contact_pane_ParamLimits

0x8a99,	// (0x00036d42) tport_contact_pane

0x8ab1,	// (0x00036d5a) tport_listscroll_pane_ParamLimits

0x8ab1,	// (0x00036d5a) tport_listscroll_pane

0x8acb,	// (0x00036d74) cell_tport_appsw_pane_ParamLimits

0x8acb,	// (0x00036d74) cell_tport_appsw_pane

0xd201,	// (0x0003b4aa) tport_appsw_pane_g1_ParamLimits

0xd201,	// (0x0003b4aa) tport_appsw_pane_g1

0xe576,	// (0x0003c81f) tport_contact_pane_g1

0xe57f,	// (0x0003c828) tport_contact_pane_t1

0xe58d,	// (0x0003c836) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003e032) tport_contact_pane_t

0xe59b,	// (0x0003c844) list_tport_pane

0xe5a4,	// (0x0003c84d) scroll_pane_cp_030

0x8b13,	// (0x00036dbc) cell_tport_appsw_pane_g1

0x8b23,	// (0x00036dcc) cell_tport_appsw_pane_t1

0x8b31,	// (0x00036dda) grid_highlight_pane_cp019

0x8b39,	// (0x00036de2) list_tport_double_graphic_pane_ParamLimits

0x8b39,	// (0x00036de2) list_tport_double_graphic_pane

0xa8ec,	// (0x00038b95) list_highlight_pane_cp023_ParamLimits

0xa8ec,	// (0x00038b95) list_highlight_pane_cp023

0x8b46,	// (0x00036def) list_tport_double_graphic_pane_g1_ParamLimits

0x8b46,	// (0x00036def) list_tport_double_graphic_pane_g1

0x8b53,	// (0x00036dfc) list_tport_double_graphic_pane_t1_ParamLimits

0x8b53,	// (0x00036dfc) list_tport_double_graphic_pane_t1

0x8b68,	// (0x00036e11) list_tport_double_graphic_pane_t2_ParamLimits

0x8b68,	// (0x00036e11) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003e03e) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003e03e) list_tport_double_graphic_pane_t

0x9c11,	// (0x00037eba) main_cale_note_pane

0x16d8,	// (0x0002f981) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x16d8,	// (0x0002f981) cell_vitu2_function_top_wide_pane_cp01

0x7f7d,	// (0x00036226) wait_bar_pane_cp05_ParamLimits

0xa8ec,	// (0x00038b95) listscroll_cmail_pane

0xe5ad,	// (0x0003c856) list_cmail_pane

0x8b7a,	// (0x00036e23) list_cmail_body_pane

0x8b8f,	// (0x00036e38) list_single_cmail_header_caption_pane

0x8ba6,	// (0x00036e4f) list_single_cmail_header_detail_pane_ParamLimits

0x8ba6,	// (0x00036e4f) list_single_cmail_header_detail_pane

0xe5bd,	// (0x0003c866) list_single_cmail_header_caption_pane_t1

0x8bd0,	// (0x00036e79) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bd0,	// (0x00036e79) list_single_cmail_header_detail_pane_g1

0xe5d4,	// (0x0003c87d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5d4,	// (0x0003c87d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003e043) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003e043) list_single_cmail_header_detail_pane_g

0xe5ed,	// (0x0003c896) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5ed,	// (0x0003c896) list_single_cmail_header_detail_pane_t1

0xe64d,	// (0x0003c8f6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe64d,	// (0x0003c8f6) list_single_cmail_header_editor_pane_bg

0xdf48,	// (0x0003c1f1) list_cmail_body_pane_g1

0xe664,	// (0x0003c90d) list_cmail_body_pane_t1

0xd23e,	// (0x0003b4e7) list_single_cmail_header_editor_pane_bg_g1

0xa7ad,	// (0x00038a56) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd24e,	// (0x0003b4f7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd246,	// (0x0003b4ef) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd488,	// (0x0003b731) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd26e,	// (0x0003b517) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd25e,	// (0x0003b507) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd266,	// (0x0003b50f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa78d,	// (0x00038a36) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8be8,	// (0x00036e91) calenote_gesture_pane_ParamLimits

0x8be8,	// (0x00036e91) calenote_gesture_pane

0x8c08,	// (0x00036eb1) calenote_window_pane_ParamLimits

0x8c08,	// (0x00036eb1) calenote_window_pane

0xe672,	// (0x0003c91b) popup_note_window_cp01

0x8c24,	// (0x00036ecd) calenote_swipe_1_pane_ParamLimits

0x8c24,	// (0x00036ecd) calenote_swipe_1_pane

0x83bb,	// (0x00036664) calenote_swipe_2_pane_ParamLimits

0x83bb,	// (0x00036664) calenote_swipe_2_pane

0xe29a,	// (0x0003c543) calenote_swipe_1_pane_g1_ParamLimits

0xe29a,	// (0x0003c543) calenote_swipe_1_pane_g1

0xe2a7,	// (0x0003c550) calenote_swipe_1_pane_g2_ParamLimits

0xe2a7,	// (0x0003c550) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0003df68) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0003df68) calenote_swipe_1_pane_g

0xe684,	// (0x0003c92d) calenote_swipe_1_pane_t1_ParamLimits

0xe684,	// (0x0003c92d) calenote_swipe_1_pane_t1

0xe29a,	// (0x0003c543) calenote_swipe_2_pane_g1_ParamLimits

0xe29a,	// (0x0003c543) calenote_swipe_2_pane_g1

0xe6a3,	// (0x0003c94c) calenote_swipe_2_pane_g2_ParamLimits

0xe6a3,	// (0x0003c94c) calenote_swipe_2_pane_g2

0x0001,

0x000f,	// (0x0002e2b8) calenote_swipe_2_pane_g_ParamLimits

0x000f,	// (0x0002e2b8) calenote_swipe_2_pane_g

0xe6af,	// (0x0003c958) calenote_swipe_2_pane_t1_ParamLimits

0xe6af,	// (0x0003c958) calenote_swipe_2_pane_t1

0x9c11,	// (0x00037eba) main_mup_navstr_pane

0x571d,	// (0x000339c6) main_mup3_pane_t7_ParamLimits

0x571d,	// (0x000339c6) main_mup3_pane_t7

0x6138,	// (0x000343e1) main_mp4_pane_g6_ParamLimits

0x6138,	// (0x000343e1) main_mp4_pane_g6

0x639e,	// (0x00034647) main_image3_pane_t4_ParamLimits

0x639e,	// (0x00034647) main_image3_pane_t4

0x8c39,	// (0x00036ee2) popup_navstr_preview_pane_ParamLimits

0x8c39,	// (0x00036ee2) popup_navstr_preview_pane

0x8c4d,	// (0x00036ef6) scroll_navstr_pane_ParamLimits

0x8c4d,	// (0x00036ef6) scroll_navstr_pane

0x9c11,	// (0x00037eba) bg_popup_preview_window_pane_cp04

0xe6d6,	// (0x0003c97f) popup_navstr_preview_pane_t1

0x8c61,	// (0x00036f0a) scroll_navstr_pane_g1_ParamLimits

0x8c61,	// (0x00036f0a) scroll_navstr_pane_g1

0x8c75,	// (0x00036f1e) scroll_navstr_pane_t1_ParamLimits

0x8c75,	// (0x00036f1e) scroll_navstr_pane_t1

0xe67b,	// (0x0003c924) bg_button_pane_cp014

0xe67b,	// (0x0003c924) bg_button_pane_cp030

0x8294,	// (0x0003653d) list_double_fisheye_pane_g4_ParamLimits

0x8294,	// (0x0003653d) list_double_fisheye_pane_g4

0x82a0,	// (0x00036549) list_double_fisheye_pane_g5_ParamLimits

0x82a0,	// (0x00036549) list_double_fisheye_pane_g5

0xd05f,	// (0x0003b308) sp_fs_scroll_pane_cp03

0xe3ba,	// (0x0003c663) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3c6,	// (0x0003c66f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0003df85) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x84d3,	// (0x0003677c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5b5,	// (0x0003c85e) sp_fs_scroll_pane_cp02

0xa493,	// (0x0003873c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa493,	// (0x0003873c) popup_sp_fs_calendar_preview_list_single_pane

0x9c11,	// (0x00037eba) main_cam6_pano_pane

0x1b3c,	// (0x0002fde5) main_mup3_pane_ParamLimits

0x9c11,	// (0x00037eba) main_phacti_pane

0x7e50,	// (0x000360f9) bg_button_pane_cp11

0x7e6a,	// (0x00036113) main_mobtv_info_pane_g2_ParamLimits

0x7e6a,	// (0x00036113) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0003dee5) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0003dee5) main_mobtv_info_pane_g

0x8047,	// (0x000362f0) sc_clock_pane_t5_ParamLimits

0x8047,	// (0x000362f0) sc_clock_pane_t5

0x810f,	// (0x000363b8) main_radioblah_pane_g1_ParamLimits

0xe1e6,	// (0x0003c48f) main_radioblah_pane_t3_ParamLimits

0xe1e6,	// (0x0003c48f) main_radioblah_pane_t3

0xe1fe,	// (0x0003c4a7) main_radioblah_pane_t4_ParamLimits

0xe1fe,	// (0x0003c4a7) main_radioblah_pane_t4

0x8137,	// (0x000363e0) main_radioblah_text_pane_ParamLimits

0x8137,	// (0x000363e0) main_radioblah_text_pane

0x8149,	// (0x000363f2) main_radioblah_info_pane_g1_ParamLimits

0x81e2,	// (0x0003648b) main_radioblah_info_pane_t4_ParamLimits

0x81e2,	// (0x0003648b) main_radioblah_info_pane_t4

0xa8ec,	// (0x00038b95) main_sp_fs_calendar_pane

0x8c8c,	// (0x00036f35) main_phacti_pane_g1

0x8c94,	// (0x00036f3d) phacti_note_pane_ParamLimits

0x8c94,	// (0x00036f3d) phacti_note_pane

0xe6ed,	// (0x0003c996) phacti_term_pane_ParamLimits

0xe6ed,	// (0x0003c996) phacti_term_pane

0xe702,	// (0x0003c9ab) phacti_note_pane_t1_ParamLimits

0xe702,	// (0x0003c9ab) phacti_note_pane_t1

0xe719,	// (0x0003c9c2) phacti_term_pane_g1

0xe721,	// (0x0003c9ca) phacti_term_pane_t1_ParamLimits

0xe721,	// (0x0003c9ca) phacti_term_pane_t1

0xe74b,	// (0x0003c9f4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe753,	// (0x0003c9fc) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0019,	// (0x0002e2c2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe75b,	// (0x0003ca04) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe75b,	// (0x0003ca04) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe771,	// (0x0003ca1a) aid_popup_sp_fs_bg_corner_pane

0xc7f0,	// (0x0003aa99) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c11,	// (0x00037eba) popup_sp_fs_calendar_preview_bg_pane

0x25ae,	// (0x00030857) popup_sp_fs_calendar_preview_list_pane

0xc3e8,	// (0x0003a691) bg_main_sp_fs_cale_pane_ParamLimits

0xc3e8,	// (0x0003a691) bg_main_sp_fs_cale_pane

0xe782,	// (0x0003ca2b) listscroll_cale_mrui_pane_ParamLimits

0xe782,	// (0x0003ca2b) listscroll_cale_mrui_pane

0xd2c2,	// (0x0003b56b) listscroll_sp_fs_schedule_track_pane

0xe797,	// (0x0003ca40) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe797,	// (0x0003ca40) main_sp_fs_ctrlbar_pane_cp01

0xe7aa,	// (0x0003ca53) main_sp_fs_ribbon_pane

0xe7b2,	// (0x0003ca5b) popup_sp_fs_cale_preview_window

0x8d09,	// (0x00036fb2) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d09,	// (0x00036fb2) list_single_sp_fs_schedule_track_pane

0xa8ec,	// (0x00038b95) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa8ec,	// (0x00038b95) bg_sp_fs_highlight_list_pane_cp03

0x8d1d,	// (0x00036fc6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d1d,	// (0x00036fc6) list_single_sp_fs_schedule_track_pane_g1

0x8d29,	// (0x00036fd2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d29,	// (0x00036fd2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda1,	// (0x0003e04a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda1,	// (0x0003e04a) list_single_sp_fs_schedule_track_pane_g

0x8d35,	// (0x00036fde) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d35,	// (0x00036fde) list_single_sp_fs_schedule_track_pane_t1

0x8d4f,	// (0x00036ff8) sp_fs_schedule_track_pane_ParamLimits

0x8d4f,	// (0x00036ff8) sp_fs_schedule_track_pane

0xe7c4,	// (0x0003ca6d) sp_fs_schedule_track_pane_g1

0xe7cc,	// (0x0003ca75) sp_fs_schedule_track_pane_g2

0xe7d4,	// (0x0003ca7d) sp_fs_schedule_track_pane_g3

0xe7dc,	// (0x0003ca85) sp_fs_schedule_track_pane_g4

0xe7e4,	// (0x0003ca8d) sp_fs_schedule_track_pane_g5

0x0004,

0x0023,	// (0x0002e2cc) sp_fs_schedule_track_pane_g

0xd23e,	// (0x0003b4e7) bg_sp_fs_schedule_viewer_highlight_g1

0xa7ad,	// (0x00038a56) bg_sp_fs_schedule_viewer_highlight_g2

0xd246,	// (0x0003b4ef) bg_sp_fs_schedule_viewer_highlight_g3

0xd24e,	// (0x0003b4f7) bg_sp_fs_schedule_viewer_highlight_g4

0xd488,	// (0x0003b731) bg_sp_fs_schedule_viewer_highlight_g5

0xd25e,	// (0x0003b507) bg_sp_fs_schedule_viewer_highlight_g6

0xd266,	// (0x0003b50f) bg_sp_fs_schedule_viewer_highlight_g7

0xd26e,	// (0x0003b517) bg_sp_fs_schedule_viewer_highlight_g8

0xa78d,	// (0x00038a36) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfda6,	// (0x0003e04f) bg_sp_fs_schedule_viewer_highlight_g

0x9c11,	// (0x00037eba) bg_main_sp_fs_ribbon_pane

0x8d60,	// (0x00037009) main_sp_fs_ribbon_pane_g1

0xe7ec,	// (0x0003ca95) main_sp_fs_ribbon_pane_t1

0x8d69,	// (0x00037012) main_sp_fs_ribbon_pane_t2

0xe7fb,	// (0x0003caa4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdb9,	// (0x0003e062) main_sp_fs_ribbon_pane_t

0xe80a,	// (0x0003cab3) main_sp_fs_ribbon_scheduler_pane

0xe812,	// (0x0003cabb) bg_main_sp_fs_ribbon_pane_g1

0xe81b,	// (0x0003cac4) bg_main_sp_fs_ribbon_pane_g2

0xe824,	// (0x0003cacd) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0048,	// (0x0002e2f1) bg_main_sp_fs_ribbon_pane_g

0xe82c,	// (0x0003cad5) main_sp_fs_ribbon_scheduler_pane_g1

0xe835,	// (0x0003cade) main_sp_fs_ribbon_scheduler_pane_g2

0xe83e,	// (0x0003cae7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x004f,	// (0x0002e2f8) main_sp_fs_ribbon_scheduler_pane_g

0xe847,	// (0x0003caf0) list_cale_mrui_pane

0x8d78,	// (0x00037021) sp_fs_scroll_pane_cp07_ParamLimits

0x8d78,	// (0x00037021) sp_fs_scroll_pane_cp07

0x8d94,	// (0x0003703d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d94,	// (0x0003703d) bg_sp_fs_schedule_viewer_highlight

0xe854,	// (0x0003cafd) list_single_sp_fs_schedule_track_pane_cp01

0xe85c,	// (0x0003cb05) list_sp_fs_schedule_track_pane

0xe864,	// (0x0003cb0d) sp_fs_scroll_pane_cp06_ParamLimits

0xe864,	// (0x0003cb0d) sp_fs_scroll_pane_cp06

0xc7f0,	// (0x0003aa99) bgmain_sp_fs_calendar_pane_g1

0x8da4,	// (0x0003704d) list_single_cale_mrui_pane_ParamLimits

0x8da4,	// (0x0003704d) list_single_cale_mrui_pane

0xe876,	// (0x0003cb1f) list_single_cale_mrui_row_pane_ParamLimits

0xe876,	// (0x0003cb1f) list_single_cale_mrui_row_pane

0xe883,	// (0x0003cb2c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe883,	// (0x0003cb2c) list_single_cale_mrui_row_pane_g1

0xe8c8,	// (0x0003cb71) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8c8,	// (0x0003cb71) list_single_cale_mrui_row_pane_t1

0x8dc5,	// (0x0003706e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dc5,	// (0x0003706e) list_single_cale_mrui_row_pane_t2

0xe8da,	// (0x0003cb83) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8da,	// (0x0003cb83) list_single_cale_mrui_row_pane_t3

0xe909,	// (0x0003cbb2) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe909,	// (0x0003cbb2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdc0,	// (0x0003e069) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdc0,	// (0x0003e069) list_single_cale_mrui_row_pane_t

0x8e2d,	// (0x000370d6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e2d,	// (0x000370d6) list_single_cmail_header_editor_pane_bg_cp01

0x8e53,	// (0x000370fc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e53,	// (0x000370fc) list_single_cmail_header_editor_pane_bg_cp02

0x8e73,	// (0x0003711c) main_radioblah_text_pane_t1_ParamLimits

0x8e73,	// (0x0003711c) main_radioblah_text_pane_t1

0xe938,	// (0x0003cbe1) cam6_indi_pane_cp01

0xe940,	// (0x0003cbe9) cam6_mode_pane_cp01

0xe948,	// (0x0003cbf1) cam6_pano_pane

0xe951,	// (0x0003cbfa) cam6_zoom_pane_cp01

0xe959,	// (0x0003cc02) cam6_pano_image_pane

0xe964,	// (0x0003cc0d) cam6_pano_pane_g1

0xdf48,	// (0x0003c1f1) cam6_pano_pane_g2

0xe96d,	// (0x0003cc16) cam6_pano_pane_g3

0xe976,	// (0x0003cc1f) cam6_pano_pane_g4

0xce06,	// (0x0003b0af) cam6_pano_pane_g5

0xe97f,	// (0x0003cc28) cam6_pano_pane_g6

0xe989,	// (0x0003cc32) cam6_pano_pane_g7

0xe991,	// (0x0003cc3a) cam6_pano_pane_g8

0xe99a,	// (0x0003cc43) cam6_pano_pane_g9

0x0008,

0x0066,	// (0x0002e30f) cam6_pano_pane_g

0x9c11,	// (0x00037eba) main_browser_tag_pane

0xe6ce,	// (0x0003c977) grid_navstr_albumart_pane

0xe9a5,	// (0x0003cc4e) cell_navstr_albumart_pane_ParamLimits

0xe9a5,	// (0x0003cc4e) cell_navstr_albumart_pane

0xe9c5,	// (0x0003cc6e) cell_navstr_albumart_pane_g1

0xc1b9,	// (0x0003a462) cell_navstr_albumart_pane_g2

0xc1c9,	// (0x0003a472) cell_navstr_albumart_pane_g3

0xc1c1,	// (0x0003a46a) cell_navstr_albumart_pane_g4

0x0003,

0x0079,	// (0x0002e322) cell_navstr_albumart_pane_g

0x8e8e,	// (0x00037137) bt_list_pane_ParamLimits

0x8e8e,	// (0x00037137) bt_list_pane

0x8ea2,	// (0x0003714b) bt_list_pane_t1

0x8eb1,	// (0x0003715a) bt_list_pane_t2

0x0001,

0xfdc9,	// (0x0003e072) bt_list_pane_t

0x9c11,	// (0x00037eba) main_cale_prevew_pane

0x8ec0,	// (0x00037169) popup_cale_preview_window_ParamLimits

0x8ec0,	// (0x00037169) popup_cale_preview_window

0xa8ec,	// (0x00038b95) bg_popup_preview_window_pane_cp05_ParamLimits

0xa8ec,	// (0x00038b95) bg_popup_preview_window_pane_cp05

0xe9cd,	// (0x0003cc76) list_cale_preview_pane_ParamLimits

0xe9cd,	// (0x0003cc76) list_cale_preview_pane

0x8ed9,	// (0x00037182) list_double_cale_preview_pane_ParamLimits

0x8ed9,	// (0x00037182) list_double_cale_preview_pane

0xd276,	// (0x0003b51f) list_single_cale_preview_pane_ParamLimits

0xd276,	// (0x0003b51f) list_single_cale_preview_pane

0x8eeb,	// (0x00037194) list_single_cale_preview_pane_g1

0x8ef3,	// (0x0003719c) list_single_cale_preview_pane_t1_ParamLimits

0x8ef3,	// (0x0003719c) list_single_cale_preview_pane_t1

0x8f08,	// (0x000371b1) list_double_cale_preview_pane_g1

0x8f10,	// (0x000371b9) list_double_cale_preview_pane_t1_ParamLimits

0x8f10,	// (0x000371b9) list_double_cale_preview_pane_t1

0x8f25,	// (0x000371ce) list_double_cale_preview_pane_t2_ParamLimits

0x8f25,	// (0x000371ce) list_double_cale_preview_pane_t2

0x0001,

0xfdce,	// (0x0003e077) list_double_cale_preview_pane_t_ParamLimits

0xfdce,	// (0x0003e077) list_double_cale_preview_pane_t

0x9c11,	// (0x00037eba) main_ezdial_pane

0xa8ec,	// (0x00038b95) main_sp_fs_email_pane_ParamLimits

0x8443,	// (0x000366ec) cmail_ddmenu_btn01_pane_ParamLimits

0x8443,	// (0x000366ec) cmail_ddmenu_btn01_pane

0x8456,	// (0x000366ff) cmail_ddmenu_btn02_pane_ParamLimits

0x8456,	// (0x000366ff) cmail_ddmenu_btn02_pane

0x8479,	// (0x00036722) cmail_ddmenu_btn03_pane_ParamLimits

0x8479,	// (0x00036722) cmail_ddmenu_btn03_pane

0x8512,	// (0x000367bb) main_sp_fs_ctrlbar_pane_ParamLimits

0x8536,	// (0x000367df) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b7a,	// (0x00036e23) list_cmail_body_pane_ParamLimits

0xe5cb,	// (0x0003c874) bg_button_pane_cp12

0xe5e0,	// (0x0003c889) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5e0,	// (0x0003c889) list_single_cmail_header_detail_pane_g3

0xe629,	// (0x0003c8d2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe629,	// (0x0003c8d2) list_single_cmail_header_detail_pane_t2

0x0001,

0x000a,	// (0x0002e2b3) list_single_cmail_header_detail_pane_t_ParamLimits

0x000a,	// (0x0002e2b3) list_single_cmail_header_detail_pane_t

0xe736,	// (0x0003c9df) phacti_term_pane_t2_ParamLimits

0xe736,	// (0x0003c9df) phacti_term_pane_t2

0x0001,

0x0014,	// (0x0002e2bd) phacti_term_pane_t_ParamLimits

0x0014,	// (0x0002e2bd) phacti_term_pane_t

0xe9d9,	// (0x0003cc82) aid_size_list_single_double

0x8f3d,	// (0x000371e6) popup_ezdial_listscroll_window

0x8f59,	// (0x00037202) popup_number_entry_window_cp01

0xa554,	// (0x000387fd) bg_popup_call_pane_cp09

0xe9e5,	// (0x0003cc8e) ezdial_list_pane

0xe9ed,	// (0x0003cc96) scroll_pane_cp23

0xc3e8,	// (0x0003a691) bg_button_pane_cp028_ParamLimits

0xc3e8,	// (0x0003a691) bg_button_pane_cp028

0x8f67,	// (0x00037210) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f67,	// (0x00037210) cmail_ddmenu_btn01_pane_g1

0x8f73,	// (0x0003721c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f73,	// (0x0003721c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdd3,	// (0x0003e07c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdd3,	// (0x0003e07c) cmail_ddmenu_btn01_pane_g

0xe9f5,	// (0x0003cc9e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9f5,	// (0x0003cc9e) cmail_ddmenu_btn01_pane_t1

0xc3e8,	// (0x0003a691) bg_button_pane_cp029_ParamLimits

0xc3e8,	// (0x0003a691) bg_button_pane_cp029

0x8f7f,	// (0x00037228) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f7f,	// (0x00037228) cmail_ddmenu_btn02_pane_g1

0x8f97,	// (0x00037240) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f97,	// (0x00037240) cmail_ddmenu_btn02_pane_t1

0xa8ec,	// (0x00038b95) bg_button_pane_cp031_ParamLimits

0xa8ec,	// (0x00038b95) bg_button_pane_cp031

0x8f7f,	// (0x00037228) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f7f,	// (0x00037228) cmail_ddmenu_btn03_pane_g1

0x8f97,	// (0x00037240) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f97,	// (0x00037240) cmail_ddmenu_btn03_pane_t1

0x6347,	// (0x000345f0) cell_dialer2_keypad_pane_t1_ParamLimits

0x6361,	// (0x0003460a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6361,	// (0x0003460a) cell_dialer2_keypad_pane_t1_copy1

0x7c65,	// (0x00035f0e) ncimui_group_button_pane

0xa8ec,	// (0x00038b95) main_sp_fs_calendar_pane_ParamLimits

0x8b8f,	// (0x00036e38) list_single_cmail_header_caption_pane_ParamLimits

0xe779,	// (0x0003ca22) aid_recal_txt_sm_pane

0x9c11,	// (0x00037eba) mian_recal_day_pane

0xe7b2,	// (0x0003ca5b) popup_sp_fs_cale_preview_window_ParamLimits

0xea0a,	// (0x0003ccb3) list_recal_day_pane

0xea79,	// (0x0003cd22) list_single_recal_day_pane_ParamLimits

0xea79,	// (0x0003cd22) list_single_recal_day_pane

0xea8b,	// (0x0003cd34) list_single_recal_day_pane_g1_ParamLimits

0xea8b,	// (0x0003cd34) list_single_recal_day_pane_g1

0xea97,	// (0x0003cd40) list_single_recal_day_pane_g2_ParamLimits

0xea97,	// (0x0003cd40) list_single_recal_day_pane_g2

0xeaa3,	// (0x0003cd4c) list_single_recal_day_pane_g3_ParamLimits

0xeaa3,	// (0x0003cd4c) list_single_recal_day_pane_g3

0x8fbb,	// (0x00037264) list_single_recal_day_pane_g4_ParamLimits

0x8fbb,	// (0x00037264) list_single_recal_day_pane_g4

0xeaaf,	// (0x0003cd58) list_single_recal_day_pane_g5_ParamLimits

0xeaaf,	// (0x0003cd58) list_single_recal_day_pane_g5

0xeabb,	// (0x0003cd64) list_single_recal_day_pane_g6_ParamLimits

0xeabb,	// (0x0003cd64) list_single_recal_day_pane_g6

0x0004,

0xfde2,	// (0x0003e08b) list_single_recal_day_pane_g_ParamLimits

0xfde2,	// (0x0003e08b) list_single_recal_day_pane_g

0xeacf,	// (0x0003cd78) list_single_recal_day_pane_t1

0xeae1,	// (0x0003cd8a) list_single_recal_day_pane_t2

0x0001,

0xfded,	// (0x0003e096) list_single_recal_day_pane_t

0x8fd3,	// (0x0003727c) ncimui_query_button_pane_ParamLimits

0x8fd3,	// (0x0003727c) ncimui_query_button_pane

0x8fe3,	// (0x0003728c) ncimui_query_button_pane_t1_ParamLimits

0x8fe3,	// (0x0003728c) ncimui_query_button_pane_t1

0xeaf3,	// (0x0003cd9c) ncimui_query_button_pane_t2_ParamLimits

0xeaf3,	// (0x0003cd9c) ncimui_query_button_pane_t2

0x0001,

0xfdf2,	// (0x0003e09b) ncimui_query_button_pane_t_ParamLimits

0xfdf2,	// (0x0003e09b) ncimui_query_button_pane_t

0x8ff6,	// (0x0003729f) query_button_pane_ParamLimits

0x8ff6,	// (0x0003729f) query_button_pane

0x9c11,	// (0x00037eba) bg_button_pane_cp0028

0xeb06,	// (0x0003cdaf) query_button_pane_t1

0x06bb,	// (0x0002e964) main_tport_pane_ParamLimits

0x8a3e,	// (0x00036ce7) bg_popup_window_pane_cp01_ParamLimits

0x8a3e,	// (0x00036ce7) bg_popup_window_pane_cp01

0x8a59,	// (0x00036d02) heading_pane_cp08_ParamLimits

0x8a59,	// (0x00036d02) heading_pane_cp08

0x8a6c,	// (0x00036d15) heading_pane_cp07_ParamLimits

0x8a6c,	// (0x00036d15) heading_pane_cp07

0x8b13,	// (0x00036dbc) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003e037) cell_tport_appsw_pane_g

0x3f78,	// (0x00032221) input_candi_list_open_g1

0xa97e,	// (0x00038c27) list_cale_time_pane_g6_ParamLimits

0xa97e,	// (0x00038c27) list_cale_time_pane_g6

0x512a,	// (0x000333d3) aid_size_touch_calib_1_ParamLimits

0x512a,	// (0x000333d3) aid_size_touch_calib_1

0x513c,	// (0x000333e5) aid_size_touch_calib_2_ParamLimits

0x513c,	// (0x000333e5) aid_size_touch_calib_2

0x5154,	// (0x000333fd) aid_size_touch_calib_3_ParamLimits

0x5154,	// (0x000333fd) aid_size_touch_calib_3

0x5172,	// (0x0003341b) aid_size_touch_calib_4_ParamLimits

0x5172,	// (0x0003341b) aid_size_touch_calib_4

0x518a,	// (0x00033433) main_touch_calib_button_group_pane_ParamLimits

0x518a,	// (0x00033433) main_touch_calib_button_group_pane

0x51a2,	// (0x0003344b) main_touch_calib_pane_g1_ParamLimits

0x51b4,	// (0x0003345d) main_touch_calib_pane_g2_ParamLimits

0x51c6,	// (0x0003346f) main_touch_calib_pane_g3_ParamLimits

0x51d8,	// (0x00033481) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0003d9f2) main_touch_calib_pane_g_ParamLimits

0x51ea,	// (0x00033493) main_touch_calib_pane_t1_ParamLimits

0x5204,	// (0x000334ad) main_touch_calib_pane_t2_ParamLimits

0x521e,	// (0x000334c7) main_touch_calib_pane_t3_ParamLimits

0x5232,	// (0x000334db) main_touch_calib_pane_t4_ParamLimits

0x5246,	// (0x000334ef) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0003d9fb) main_touch_calib_pane_t_ParamLimits

0xcba9,	// (0x0003ae52) list_single_fp_cale_pane_g3_ParamLimits

0xcba9,	// (0x0003ae52) list_single_fp_cale_pane_g3

0x1b3c,	// (0x0002fde5) bg_button_pane_cp012_ParamLimits

0x1b3c,	// (0x0002fde5) bg_vkb2_func_pane_cp03_ParamLimits

0x18c4,	// (0x0002fb6d) cell_vitu2_function_top_pane_g1_ParamLimits

0x1b3c,	// (0x0002fde5) bg_vkb2_func_pane_cp04_ParamLimits

0x7bf0,	// (0x00035e99) main_ncimui_button_group_pane_ParamLimits

0x7bf0,	// (0x00035e99) main_ncimui_button_group_pane

0x7c50,	// (0x00035ef9) main_ncimui_pane_t3_ParamLimits

0x7c50,	// (0x00035ef9) main_ncimui_pane_t3

0xe6e4,	// (0x0003c98d) phacti_button_group_pane

0xe9d9,	// (0x0003cc82) aid_size_list_single_double_ParamLimits

0x8f3d,	// (0x000371e6) popup_ezdial_listscroll_window_ParamLimits

0x8f59,	// (0x00037202) popup_number_entry_window_cp01_ParamLimits

0x9009,	// (0x000372b2) phacti_button_pane_ParamLimits

0x9009,	// (0x000372b2) phacti_button_pane

0x9c11,	// (0x00037eba) bg_button_pane_cp14

0xeb14,	// (0x0003cdbd) phacti_button_pane_t1

0x901a,	// (0x000372c3) main_touch_calib_button_pane_ParamLimits

0x901a,	// (0x000372c3) main_touch_calib_button_pane

0xa35a,	// (0x00038603) bg_button_pane_cp18_ParamLimits

0xa35a,	// (0x00038603) bg_button_pane_cp18

0xeb22,	// (0x0003cdcb) main_touch_calib_button_pane_t1_ParamLimits

0xeb22,	// (0x0003cdcb) main_touch_calib_button_pane_t1

0xeb38,	// (0x0003cde1) main_touch_calib_button_pane_t2_ParamLimits

0xeb38,	// (0x0003cde1) main_touch_calib_button_pane_t2

0x0001,

0xfdf7,	// (0x0003e0a0) main_touch_calib_button_pane_t_ParamLimits

0xfdf7,	// (0x0003e0a0) main_touch_calib_button_pane_t

0x9c11,	// (0x00037eba) cell_ncimui_button_pane

0x9c11,	// (0x00037eba) bg_button_pane_cp032

0xeb56,	// (0x0003cdff) cell_ncimui_button_pane_t1

0x637e,	// (0x00034627) image3_infobar_pane_ParamLimits

0x637e,	// (0x00034627) image3_infobar_pane

0x8073,	// (0x0003631c) fs_bigclock_status_pane_ParamLimits

0x8073,	// (0x0003631c) fs_bigclock_status_pane

0x8080,	// (0x00036329) main_fs_bigclock_clock_pane_ParamLimits

0x8080,	// (0x00036329) main_fs_bigclock_clock_pane

0x809e,	// (0x00036347) main_fs_bigclock_indi_pane_ParamLimits

0x809e,	// (0x00036347) main_fs_bigclock_indi_pane

0x80d0,	// (0x00036379) main_fs_bigclock_swipe_pane_ParamLimits

0x80d0,	// (0x00036379) main_fs_bigclock_swipe_pane

0x9c11,	// (0x00037eba) main_fs_clock_dumped_data

0xe055,	// (0x0003c2fe) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe055,	// (0x0003c2fe) list_single_fs_bigclock_indicator_pane_g1

0xe071,	// (0x0003c31a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe071,	// (0x0003c31a) list_single_fs_bigclock_indicator_pane_g2

0xe08b,	// (0x0003c334) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe08b,	// (0x0003c334) list_single_fs_bigclock_indicator_pane_g3

0xe0a5,	// (0x0003c34e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0a5,	// (0x0003c34e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0003df19) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0003df19) list_single_fs_bigclock_indicator_pane_g

0xe0d0,	// (0x0003c379) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0d0,	// (0x0003c379) list_single_fs_bigclock_indicator_pane_t1

0xe0f8,	// (0x0003c3a1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0f8,	// (0x0003c3a1) list_single_fs_bigclock_indicator_pane_t2

0xe120,	// (0x0003c3c9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe120,	// (0x0003c3c9) list_single_fs_bigclock_indicator_pane_t3

0xe148,	// (0x0003c3f1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe148,	// (0x0003c3f1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0003df24) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0003df24) list_single_fs_bigclock_indicator_pane_t

0xeb64,	// (0x0003ce0d) image3_infobar_fav_pane_ParamLimits

0xeb64,	// (0x0003ce0d) image3_infobar_fav_pane

0xeb74,	// (0x0003ce1d) image3_infobar_loc_pane_ParamLimits

0xeb74,	// (0x0003ce1d) image3_infobar_loc_pane

0xeb88,	// (0x0003ce31) image3_infobar_time_pane_ParamLimits

0xeb88,	// (0x0003ce31) image3_infobar_time_pane

0xc7f0,	// (0x0003aa99) image3_infobar_time_pane_g1

0xeb98,	// (0x0003ce41) image3_infobar_time_pane_t1

0xc7f0,	// (0x0003aa99) image3_infobar_loc_pane_g1

0xeba6,	// (0x0003ce4f) image3_infobar_loc_pane_g2

0x0001,

0xfdfc,	// (0x0003e0a5) image3_infobar_loc_pane_g

0xebae,	// (0x0003ce57) image3_infobar_loc_pane_t1

0xc7f0,	// (0x0003aa99) image3_infobar_fav_pane_g1

0xebbc,	// (0x0003ce65) image3_infobar_fav_pane_g2

0x0001,

0xfe01,	// (0x0003e0aa) image3_infobar_fav_pane_g

0xebc4,	// (0x0003ce6d) fs_bigclock_status_battery_pane

0xebcd,	// (0x0003ce76) fs_bigclock_status_signal_pane

0xebd6,	// (0x0003ce7f) fs_bigclock_status_title_pane

0xebdf,	// (0x0003ce88) fs_bigclock_status_signal_pane_g1

0xebe8,	// (0x0003ce91) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe06,	// (0x0003e0af) fs_bigclock_status_signal_pane_g

0xebf0,	// (0x0003ce99) fs_bigclock_status_battery_pane_g1

0xebf9,	// (0x0003cea2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe0b,	// (0x0003e0b4) fs_bigclock_status_battery_pane_g

0xec01,	// (0x0003ceaa) fs_bigclock_status_title_pane_t1

0x902f,	// (0x000372d8) main_fs_bigclock_clock_pane_g1

0x902f,	// (0x000372d8) main_fs_bigclock_clock_pane_g2

0x9040,	// (0x000372e9) main_fs_bigclock_clock_pane_g3

0x9040,	// (0x000372e9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe10,	// (0x0003e0b9) main_fs_bigclock_clock_pane_g

0x9053,	// (0x000372fc) main_fs_bigclock_clock_pane_t1

0x9069,	// (0x00037312) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe19,	// (0x0003e0c2) main_fs_bigclock_clock_pane_t

0xec0f,	// (0x0003ceb8) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec0f,	// (0x0003ceb8) list_single_fs_bigclock_indicator_pane

0xec20,	// (0x0003cec9) list_single_fs_bigclock_pane_ParamLimits

0xec20,	// (0x0003cec9) list_single_fs_bigclock_pane

0xec46,	// (0x0003ceef) main_fs_bigclock_indicator_pane_t1

0xec55,	// (0x0003cefe) list_single_fs_bigclock_pane_g1

0xec5d,	// (0x0003cf06) list_single_fs_bigclock_pane_t1

0xc7f0,	// (0x0003aa99) main_fs_bigclock_swipe_pane_g1

0xeca0,	// (0x0003cf49) main_fs_bigclock_swipe_pane_g2

0x0001,

0x00e3,	// (0x0002e38c) main_fs_bigclock_swipe_pane_g

0xeca8,	// (0x0003cf51) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca8,	// (0x0003cf51) main_fs_bigclock_swipe_pane_t1

0x37e6,	// (0x00031a8f) call_type_pane_ParamLimits

0x9c11,	// (0x00037eba) main_btmg_pane

0xe8af,	// (0x0003cb58) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8af,	// (0x0003cb58) list_single_cale_mrui_row_pane_g2

0x0002,

0x0056,	// (0x0002e2ff) list_single_cale_mrui_row_pane_g_ParamLimits

0x0056,	// (0x0002e2ff) list_single_cale_mrui_row_pane_g

0xea60,	// (0x0003cd09) list_recal_vselct_arw_lo_pane

0xea68,	// (0x0003cd11) list_recal_vselct_arw_up_pane

0xea70,	// (0x0003cd19) list_recal_vselct_pane

0x90c3,	// (0x0003736c) btmg_button_pane

0x90cd,	// (0x00037376) main_btmg_pane_g1

0x9c11,	// (0x00037eba) bg_button_pane_cp044

0xecc5,	// (0x0003cf6e) btmg_button_pane_t1

0xc3d4,	// (0x0003a67d) aid_listscroll_gen

0xa8ec,	// (0x00038b95) main_cntbar_detail_pane

0xe5ad,	// (0x0003c856) list_cmail_folder_pane

0xd05f,	// (0x0003b308) sp_fs_scroll_pane_cp03_ParamLimits

0x90d7,	// (0x00037380) list_single_fs_dyc_pane_cp01_ParamLimits

0x90d7,	// (0x00037380) list_single_fs_dyc_pane_cp01

0xecd3,	// (0x0003cf7c) aid_size_cmail_indent

0xecdc,	// (0x0003cf85) list_single_dyc_row_pane_cp01

0x9120,	// (0x000373c9) cntbar_detail_list_pane_ParamLimits

0x9120,	// (0x000373c9) cntbar_detail_list_pane

0x916c,	// (0x00037415) main_cntbar_detail_cont_pane_ParamLimits

0x916c,	// (0x00037415) main_cntbar_detail_cont_pane

0xd05f,	// (0x0003b308) scroll_pane_cp032_ParamLimits

0xd05f,	// (0x0003b308) scroll_pane_cp032

0x9180,	// (0x00037429) cntbar_detail_list_event_pane_ParamLimits

0x9180,	// (0x00037429) cntbar_detail_list_event_pane

0x9130,	// (0x000373d9) cntbar_detail_list_shct_pane

0xa7fb,	// (0x00038aa4) aid_list_gen

0xece5,	// (0x0003cf8e) aid_scroll

0xecee,	// (0x0003cf97) aid_size_touch_scroll_bar

0x740c,	// (0x000356b5) aid_list_double

0x73fa,	// (0x000356a3) aid_list_single

0x73fa,	// (0x000356a3) aid_list_single_lg

0x9190,	// (0x00037439) aid_list_z_g_a_sm

0x9198,	// (0x00037441) aid_list_z_g_d

0x91a0,	// (0x00037449) aid_txt_z_prm

0x91ae,	// (0x00037457) aid_txt_z_prm_cp01

0x91bc,	// (0x00037465) aid_txt_z_sec

0x91ca,	// (0x00037473) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91ca,	// (0x00037473) main_cntbar_detail_cont_pane_g1

0x91de,	// (0x00037487) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91de,	// (0x00037487) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe25,	// (0x0003e0ce) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe25,	// (0x0003e0ce) main_cntbar_detail_cont_pane_g

0xecf7,	// (0x0003cfa0) main_cntbar_detail_cont_pane_t1

0xed05,	// (0x0003cfae) main_cntbar_detail_cont_pane_t2

0xed13,	// (0x0003cfbc) main_cntbar_detail_cont_pane_t3

0x0002,

0x00ed,	// (0x0002e396) main_cntbar_detail_cont_pane_t

0x91ee,	// (0x00037497) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91ee,	// (0x00037497) cell_cntbar_detail_list_shct_pane

0xed21,	// (0x0003cfca) cntbar_detail_list_shct_pane_g1

0xed2a,	// (0x0003cfd3) cntbar_detail_list_shct_pane_g2

0x0001,

0x00f4,	// (0x0002e39d) cntbar_detail_list_shct_pane_g

0x9202,	// (0x000374ab) cntbar_detail_list_event_pane_g1_ParamLimits

0x9202,	// (0x000374ab) cntbar_detail_list_event_pane_g1

0x920e,	// (0x000374b7) cntbar_detail_list_event_pane_g2_ParamLimits

0x920e,	// (0x000374b7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe2a,	// (0x0003e0d3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe2a,	// (0x0003e0d3) cntbar_detail_list_event_pane_g

0x927a,	// (0x00037523) cntbar_detail_list_event_pane_t1_ParamLimits

0x927a,	// (0x00037523) cntbar_detail_list_event_pane_t1

0x928f,	// (0x00037538) cntbar_detail_list_event_pane_t2_ParamLimits

0x928f,	// (0x00037538) cntbar_detail_list_event_pane_t2

0x0002,

0xfe37,	// (0x0003e0e0) cntbar_detail_list_event_pane_t_ParamLimits

0xfe37,	// (0x0003e0e0) cntbar_detail_list_event_pane_t

0xc7f0,	// (0x0003aa99) cell_cntbar_detail_list_shct_pane_g1

0xaf55,	// (0x000391fe) navi_pane_mv_g3

0xa8ec,	// (0x00038b95) main_cntbar_detail_pane_ParamLimits

0x9c11,	// (0x00037eba) main_notif_wgt_pane

0x60c6,	// (0x0003436f) aid_tch_main_mp4_pane_g4

0x62d2,	// (0x0003457b) popup_slider_window_cp02

0xea56,	// (0x0003ccff) list_recal_day_event_pane

0x90ee,	// (0x00037397) cntbar_detail_btn_pane_ParamLimits

0x90ee,	// (0x00037397) cntbar_detail_btn_pane

0x9107,	// (0x000373b0) cntbar_detail_btn_pane_cp01_ParamLimits

0x9107,	// (0x000373b0) cntbar_detail_btn_pane_cp01

0x9130,	// (0x000373d9) cntbar_detail_list_shct_pane_ParamLimits

0x9140,	// (0x000373e9) cntbar_detail_pane_g1_ParamLimits

0x9140,	// (0x000373e9) cntbar_detail_pane_g1

0x9150,	// (0x000373f9) cntbar_detail_pane_t1_ParamLimits

0x9150,	// (0x000373f9) cntbar_detail_pane_t1

0x921a,	// (0x000374c3) cntbar_detail_list_event_pane_g3_ParamLimits

0x921a,	// (0x000374c3) cntbar_detail_list_event_pane_g3

0x9232,	// (0x000374db) cntbar_detail_list_event_pane_g4_ParamLimits

0x9232,	// (0x000374db) cntbar_detail_list_event_pane_g4

0x924a,	// (0x000374f3) cntbar_detail_list_event_pane_g5_ParamLimits

0x924a,	// (0x000374f3) cntbar_detail_list_event_pane_g5

0x9262,	// (0x0003750b) cntbar_detail_list_event_pane_g6_ParamLimits

0x9262,	// (0x0003750b) cntbar_detail_list_event_pane_g6

0x92a4,	// (0x0003754d) cntbar_detail_list_event_pane_t3_ParamLimits

0x92a4,	// (0x0003754d) cntbar_detail_list_event_pane_t3

0x92b6,	// (0x0003755f) popup_notif_wgt_window_ParamLimits

0x92b6,	// (0x0003755f) popup_notif_wgt_window

0x92cf,	// (0x00037578) popup_submenu_window_cp01_ParamLimits

0x92cf,	// (0x00037578) popup_submenu_window_cp01

0xa554,	// (0x000387fd) bg_popup_window_pane_cp10

0xed33,	// (0x0003cfdc) listscroll_notif_wgt_pane

0xed45,	// (0x0003cfee) list_notif_wgt_window

0xed4e,	// (0x0003cff7) scroll_pane_cp033

0x92e1,	// (0x0003758a) list_notif_wgt_row_pane_ParamLimits

0x92e1,	// (0x0003758a) list_notif_wgt_row_pane

0xed57,	// (0x0003d000) aid_size_list_notif_wgt_del

0xed64,	// (0x0003d00d) list_notif_wgt_row_pane_g1

0xed70,	// (0x0003d019) list_notif_wgt_row_pane_g2

0xed7f,	// (0x0003d028) list_notif_wgt_row_pane_g3

0x0002,

0x010d,	// (0x0002e3b6) list_notif_wgt_row_pane_g

0xed8c,	// (0x0003d035) list_notif_wgt_row_pane_t1

0xeda2,	// (0x0003d04b) list_notif_wgt_row_pane_t2

0xedb4,	// (0x0003d05d) list_notif_wgt_row_pane_t3

0x0002,

0x0114,	// (0x0002e3bd) list_notif_wgt_row_pane_t

0xd4a2,	// (0x0003b74b) list_recal_day_event_pane_g1

0xedc6,	// (0x0003d06f) list_recal_day_event_pane_t1

0x9c11,	// (0x00037eba) bg_button_pane_cp045

0x92f1,	// (0x0003759a) cntbar_detail_btn_pane_t1

0xc3e8,	// (0x0003a691) main_callh_pane_ParamLimits

0xc3e8,	// (0x0003a691) main_callh_pane

0x9c11,	// (0x00037eba) main_coverflow0_pane

0x9c11,	// (0x00037eba) main_wgtman_pane

0x80e8,	// (0x00036391) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x80e8,	// (0x00036391) main_fs_bigclock_unlock_btn_pane

0x8b0b,	// (0x00036db4) bg_button_pane_cp16

0x8b1b,	// (0x00036dc4) cell_tport_appsw_pane_g3

0x92ff,	// (0x000375a8) cf0_flow_pane_ParamLimits

0x92ff,	// (0x000375a8) cf0_flow_pane

0xedd5,	// (0x0003d07e) listscroll_cf0_pane

0xede0,	// (0x0003d089) main_cf0_pane_g1

0x9314,	// (0x000375bd) main_cf0_pane_t1_ParamLimits

0x9314,	// (0x000375bd) main_cf0_pane_t1

0x932b,	// (0x000375d4) main_cf0_pane_t2_ParamLimits

0x932b,	// (0x000375d4) main_cf0_pane_t2

0x0001,

0xfe3e,	// (0x0003e0e7) main_cf0_pane_t_ParamLimits

0xfe3e,	// (0x0003e0e7) main_cf0_pane_t

0xedf2,	// (0x0003d09b) scroll_pane_cp11

0x9342,	// (0x000375eb) cf0_flow_pane_g1

0x934a,	// (0x000375f3) cf0_flow_pane_g2

0x0001,

0xfe43,	// (0x0003e0ec) cf0_flow_pane_g

0x9352,	// (0x000375fb) cf0_flow_pane_t1

0x9c11,	// (0x00037eba) main_call6_pane

0x9c11,	// (0x00037eba) main_calllock_pane

0x19f9,	// (0x0002fca2) call6_btn_grp_pane_ParamLimits

0x19f9,	// (0x0002fca2) call6_btn_grp_pane

0x1a13,	// (0x0002fcbc) call6_pane_g1_ParamLimits

0x1a13,	// (0x0002fcbc) call6_pane_g1

0x1a29,	// (0x0002fcd2) popup_call6_1st_window_ParamLimits

0x1a29,	// (0x0002fcd2) popup_call6_1st_window

0x1a3a,	// (0x0002fce3) popup_call6_2nd_window_ParamLimits

0x1a3a,	// (0x0002fce3) popup_call6_2nd_window

0x1a4b,	// (0x0002fcf4) cell_call6_btn_pane_ParamLimits

0x1a4b,	// (0x0002fcf4) cell_call6_btn_pane

0xa554,	// (0x000387fd) bg_popup_call2_in_pane_cp03

0xedfd,	// (0x0003d0a6) popup_call6_1st_window_g1

0xee05,	// (0x0003d0ae) popup_call6_1st_window_g2

0xee0d,	// (0x0003d0b6) popup_call6_1st_window_g3

0x0002,

0x012a,	// (0x0002e3d3) popup_call6_1st_window_g

0xee15,	// (0x0003d0be) popup_call6_1st_window_t1

0xee24,	// (0x0003d0cd) popup_call6_1st_window_t2

0xee32,	// (0x0003d0db) popup_call6_1st_window_t3

0x0002,

0x0131,	// (0x0002e3da) popup_call6_1st_window_t

0xa554,	// (0x000387fd) bg_popup_call2_in_pane_cp04

0xedfd,	// (0x0003d0a6) popup_call6_2nd_window_g1

0xee05,	// (0x0003d0ae) popup_call6_2nd_window_g2

0xee0d,	// (0x0003d0b6) popup_call6_2nd_window_g3

0x0002,

0x012a,	// (0x0002e3d3) popup_call6_2nd_window_g

0xee15,	// (0x0003d0be) popup_call6_2nd_window_t1

0x1b56,	// (0x0002fdff) bg_button_pane_cp15

0x9360,	// (0x00037609) cell_call6_btn_pane_g1

0x9369,	// (0x00037612) cell_call6_btn_pane_t1

0x9378,	// (0x00037621) listscroll_wgtman_pane_ParamLimits

0x9378,	// (0x00037621) listscroll_wgtman_pane

0x9399,	// (0x00037642) wgtman_btn_pane_ParamLimits

0x9399,	// (0x00037642) wgtman_btn_pane

0xad69,	// (0x00039012) aid_scroll_copy1

0xee40,	// (0x0003d0e9) list_wgtman_pane

0x93dc,	// (0x00037685) wgtman_btn_pane_g1_ParamLimits

0x93dc,	// (0x00037685) wgtman_btn_pane_g1

0x9408,	// (0x000376b1) wgtman_btn_pane_t1_ParamLimits

0x9408,	// (0x000376b1) wgtman_btn_pane_t1

0xee4a,	// (0x0003d0f3) wgtman_btn_pane_t2_ParamLimits

0xee4a,	// (0x0003d0f3) wgtman_btn_pane_t2

0x0001,

0xfe48,	// (0x0003e0f1) wgtman_btn_pane_t_ParamLimits

0xfe48,	// (0x0003e0f1) wgtman_btn_pane_t

0x9445,	// (0x000376ee) listrow_wgtman_pane_ParamLimits

0x9445,	// (0x000376ee) listrow_wgtman_pane

0x9457,	// (0x00037700) listrow_wgtman_pane_g1

0x9464,	// (0x0003770d) listrow_wgtman_pane_g2

0x0001,

0xfe4d,	// (0x0003e0f6) listrow_wgtman_pane_g

0x9482,	// (0x0003772b) listrow_wgtman_pane_t1

0x949a,	// (0x00037743) listrow_wgtman_pane_t2

0x0001,

0xfe52,	// (0x0003e0fb) listrow_wgtman_pane_t

0x94c0,	// (0x00037769) wait_bar_pane_cp09

0xee61,	// (0x0003d10a) main_calllock_btn_pane

0xee6b,	// (0x0003d114) main_calllock_pane_g1

0x9c11,	// (0x00037eba) bg_button_pane_cp17

0xee77,	// (0x0003d120) main_calllock_btn_pane_g1

0xee80,	// (0x0003d129) main_calllock_btn_pane_t1

0x9c11,	// (0x00037eba) main_dialer3_pane

0x9c11,	// (0x00037eba) main_fmrd2_pane

0xc7f0,	// (0x0003aa99) main_fs_bigclock_unlock_btn_pane_g1

0x94da,	// (0x00037783) main_fs_bigclock_unlock_btn_pane_t1

0x94e8,	// (0x00037791) area_fmrd2_info_pane_ParamLimits

0x94e8,	// (0x00037791) area_fmrd2_info_pane

0x94f9,	// (0x000377a2) area_fmrd2_visual_pane_ParamLimits

0x94f9,	// (0x000377a2) area_fmrd2_visual_pane

0x9507,	// (0x000377b0) fmrd2_indi_pane_ParamLimits

0x9507,	// (0x000377b0) fmrd2_indi_pane

0x9514,	// (0x000377bd) area_fmrd2_visual_pane_g1

0x951c,	// (0x000377c5) area_fmrd2_visual_pane_t1

0x952c,	// (0x000377d5) area_fmrd2_visual_pane_t2

0x953c,	// (0x000377e5) area_fmrd2_visual_pane_t3

0x0002,

0xfe5c,	// (0x0003e105) area_fmrd2_visual_pane_t

0x954c,	// (0x000377f5) area_fmrd2_info_pane_g1

0x9554,	// (0x000377fd) area_fmrd2_info_pane_t1

0x9564,	// (0x0003780d) area_fmrd2_info_pane_t2

0x9574,	// (0x0003781d) area_fmrd2_info_pane_t3

0x9584,	// (0x0003782d) area_fmrd2_info_pane_t4

0x0003,

0xfe63,	// (0x0003e10c) area_fmrd2_info_pane_t

0x9592,	// (0x0003783b) fmrd2_indi_pane_t1

0x95a2,	// (0x0003784b) fmrd2_indi_pane_t2

0x95b2,	// (0x0003785b) fmrd2_indi_pane_t3

0x0002,

0xfe6c,	// (0x0003e115) fmrd2_indi_pane_t

0xe0b4,	// (0x0003c35d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0b4,	// (0x0003c35d) list_single_fs_bigclock_indicator_pane_g5

0xe165,	// (0x0003c40e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe165,	// (0x0003c40e) list_single_fs_bigclock_indicator_pane_t5

0x8ca8,	// (0x00036f51) aid_cell_bcale_month_pane_ParamLimits

0x8ca8,	// (0x00036f51) aid_cell_bcale_month_pane

0x8cc6,	// (0x00036f6f) bcale_month_pane_ParamLimits

0x8cc6,	// (0x00036f6f) bcale_month_pane

0x8cea,	// (0x00036f93) bcale_preview_pane_ParamLimits

0x8cea,	// (0x00036f93) bcale_preview_pane

0xec5d,	// (0x0003cf06) list_single_fs_bigclock_pane_t1_ParamLimits

0xec7c,	// (0x0003cf25) list_single_fs_bigclock_pane_t2_ParamLimits

0xec7c,	// (0x0003cf25) list_single_fs_bigclock_pane_t2

0x0001,

0x00de,	// (0x0002e387) list_single_fs_bigclock_pane_t_ParamLimits

0x00de,	// (0x0002e387) list_single_fs_bigclock_pane_t

0x94d2,	// (0x0003777b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe57,	// (0x0003e100) main_fs_bigclock_unlock_btn_pane_g

0x95c2,	// (0x0003786b) aid_dia3_key_size_ParamLimits

0x95c2,	// (0x0003786b) aid_dia3_key_size

0x95d1,	// (0x0003787a) aid_dia3_listrow_size_ParamLimits

0x95d1,	// (0x0003787a) aid_dia3_listrow_size

0x95e6,	// (0x0003788f) dia3_keypad_fun_pane_ParamLimits

0x95e6,	// (0x0003788f) dia3_keypad_fun_pane

0x9602,	// (0x000378ab) dia3_keypad_num_pane_ParamLimits

0x9602,	// (0x000378ab) dia3_keypad_num_pane

0x961d,	// (0x000378c6) dia3_listscroll_pane_ParamLimits

0x961d,	// (0x000378c6) dia3_listscroll_pane

0x9630,	// (0x000378d9) dia3_numentry_pane_ParamLimits

0x9630,	// (0x000378d9) dia3_numentry_pane

0xee8f,	// (0x0003d138) dia3_list_pane

0xee9a,	// (0x0003d143) scroll_pane_cp12

0x9c11,	// (0x00037eba) bg_dia3_numentry_pane

0x9644,	// (0x000378ed) dia3_numentry_pane_t1

0x9653,	// (0x000378fc) cell_dia3_key_num_pane

0x965b,	// (0x00037904) cell_dia3_key0_fun_pane_ParamLimits

0x965b,	// (0x00037904) cell_dia3_key0_fun_pane

0x966f,	// (0x00037918) cell_dia3_key1_fun_pane_ParamLimits

0x966f,	// (0x00037918) cell_dia3_key1_fun_pane

0x9687,	// (0x00037930) dia3_listrow_pane

0xde07,	// (0x0003c0b0) bg_dia3_numentry_pane_g1

0x9c11,	// (0x00037eba) bg_button_pane_cp21

0xeea5,	// (0x0003d14e) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x0003d15c) cell_dia3_key_num_pane_t2

0xeec2,	// (0x0003d16b) cell_dia3_key_num_pane_t3

0xeed1,	// (0x0003d17a) cell_dia3_key_num_pane_t4

0x0003,

0xfe73,	// (0x0003e11c) cell_dia3_key_num_pane_t

0x9c11,	// (0x00037eba) bg_button_pane_cp19

0x9699,	// (0x00037942) cell_dia3_key0_fun_pane_g1

0x9c11,	// (0x00037eba) bg_button_pane_cp20

0x96a1,	// (0x0003794a) cell_dia3_key1_fun_pane_g1

0x96a9,	// (0x00037952) area_left_week_number_pane

0x96b5,	// (0x0003795e) area_top_day_name_pane

0x96c8,	// (0x00037971) frame_month_view_pane

0xeee0,	// (0x0003d189) grid_month_view_pane

0x96db,	// (0x00037984) cell_top_day_name_pane_ParamLimits

0x96db,	// (0x00037984) cell_top_day_name_pane

0x9708,	// (0x000379b1) cell_area_left_week_number_pane_ParamLimits

0x9708,	// (0x000379b1) cell_area_left_week_number_pane

0x971c,	// (0x000379c5) cell_month_view_pane_ParamLimits

0x971c,	// (0x000379c5) cell_month_view_pane

0xeeee,	// (0x0003d197) frm_month_g1

0x9749,	// (0x000379f2) frm_month_g2

0x975c,	// (0x00037a05) frm_month_g3

0x976f,	// (0x00037a18) frm_month_g4

0x9782,	// (0x00037a2b) frm_month_g5

0x9795,	// (0x00037a3e) frm_month_g6

0x97a8,	// (0x00037a51) frm_month_g7

0xeefb,	// (0x0003d1a4) frm_month_g8

0x97bb,	// (0x00037a64) frm_month_g9

0x97cb,	// (0x00037a74) frm_month_g10

0x97db,	// (0x00037a84) frm_month_g11

0x97eb,	// (0x00037a94) frm_month_g12

0x97fd,	// (0x00037aa6) frm_month_g13

0x980f,	// (0x00037ab8) frm_month_g14

0x9823,	// (0x00037acc) frm_month_g15

0x9837,	// (0x00037ae0) frm_month_g16

0x000f,

0xfe7c,	// (0x0003e125) frm_month_g

0xef08,	// (0x0003d1b1) cell_top_day_name_pane_t1

0x984b,	// (0x00037af4) cell_area_left_week_number_pane_g1

0x9857,	// (0x00037b00) cell_area_left_week_number_pane_t1

0xca35,	// (0x0003acde) cell_month_view_pane_g1

0x986a,	// (0x00037b13) cell_month_view_pane_t1

0x9c11,	// (0x00037eba) main_fps_pane

0xe382,	// (0x0003c62b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe382,	// (0x0003c62b) cmail_ddmenu_btn02_pane_cp1

0xe39e,	// (0x0003c647) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe39e,	// (0x0003c647) cmail_ddmenu_btn02_pane_cp2

0x8f8b,	// (0x00037234) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f8b,	// (0x00037234) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdd8,	// (0x0003e081) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdd8,	// (0x0003e081) cmail_ddmenu_btn02_pane_g

0x8fa9,	// (0x00037252) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fa9,	// (0x00037252) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfddd,	// (0x0003e086) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfddd,	// (0x0003e086) cmail_ddmenu_btn02_pane_t

0x987d,	// (0x00037b26) fps_text_pane_ParamLimits

0x987d,	// (0x00037b26) fps_text_pane

0x9894,	// (0x00037b3d) main_fps_pane_g1_ParamLimits

0x9894,	// (0x00037b3d) main_fps_pane_g1

0x98ae,	// (0x00037b57) wait_bar_pane_cp010_ParamLimits

0x98ae,	// (0x00037b57) wait_bar_pane_cp010

0x98bf,	// (0x00037b68) fps_text_pane_t1_ParamLimits

0x98bf,	// (0x00037b68) fps_text_pane_t1

0xea29,	// (0x0003ccd2) cam4_image_uncrop_pane_g1

0xea32,	// (0x0003ccdb) cam4_image_uncrop_pane_g2

0x64eb,	// (0x00034794) cam4_image_uncrop_pane_g3

0x64f4,	// (0x0003479d) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0003db93) cam4_image_uncrop_pane_g

0x9687,	// (0x00037930) dia3_listrow_pane_ParamLimits

0x9c11,	// (0x00037eba) main_phob2_pane

0x8adc,	// (0x00036d85) cell_tport_appsw_pane_cp02_ParamLimits

0x8adc,	// (0x00036d85) cell_tport_appsw_pane_cp02

0x8af0,	// (0x00036d99) cell_tport_appsw_pane_cp03_ParamLimits

0x8af0,	// (0x00036d99) cell_tport_appsw_pane_cp03

0x9c11,	// (0x00037eba) phob2_contact_card_pane

0x9c11,	// (0x00037eba) phob2_listscroll_pane

0xef1b,	// (0x0003d1c4) phob2_list_pane

0xef23,	// (0x0003d1cc) scroll_pane_cp034

0x98d7,	// (0x00037b80) phob2_cc_data_pane_ParamLimits

0x98d7,	// (0x00037b80) phob2_cc_data_pane

0x98f6,	// (0x00037b9f) phob2_cc_listscroll_pane_ParamLimits

0x98f6,	// (0x00037b9f) phob2_cc_listscroll_pane

0x9445,	// (0x000376ee) list_double_large_graphic_phob2_pane_ParamLimits

0x9445,	// (0x000376ee) list_double_large_graphic_phob2_pane

0x9914,	// (0x00037bbd) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9914,	// (0x00037bbd) list_double_large_graphic_phob2_pane_g1

0x992a,	// (0x00037bd3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x992a,	// (0x00037bd3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe9d,	// (0x0003e146) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe9d,	// (0x0003e146) list_double_large_graphic_phob2_pane_g

0x9936,	// (0x00037bdf) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9936,	// (0x00037bdf) list_double_large_graphic_phob2_pane_t1

0x994c,	// (0x00037bf5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x994c,	// (0x00037bf5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfea2,	// (0x0003e14b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfea2,	// (0x0003e14b) list_double_large_graphic_phob2_pane_t

0x9c11,	// (0x00037eba) list_highlight_pane_cp024

0x9961,	// (0x00037c0a) phob2_cc_button_pane

0x9969,	// (0x00037c12) phob2_cc_data_pane_g1_ParamLimits

0x9969,	// (0x00037c12) phob2_cc_data_pane_g1

0x997e,	// (0x00037c27) phob2_cc_data_pane_g2_ParamLimits

0x997e,	// (0x00037c27) phob2_cc_data_pane_g2

0x0001,

0xfea7,	// (0x0003e150) phob2_cc_data_pane_g_ParamLimits

0xfea7,	// (0x0003e150) phob2_cc_data_pane_g

0x998e,	// (0x00037c37) phob2_cc_data_pane_t1_ParamLimits

0x998e,	// (0x00037c37) phob2_cc_data_pane_t1

0x99a6,	// (0x00037c4f) phob2_cc_data_pane_t2_ParamLimits

0x99a6,	// (0x00037c4f) phob2_cc_data_pane_t2

0x99be,	// (0x00037c67) phob2_cc_data_pane_t3_ParamLimits

0x99be,	// (0x00037c67) phob2_cc_data_pane_t3

0x0002,

0xfeac,	// (0x0003e155) phob2_cc_data_pane_t_ParamLimits

0xfeac,	// (0x0003e155) phob2_cc_data_pane_t

0xef2b,	// (0x0003d1d4) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x0003d1d4) phob2_cc_list_pane

0xd539,	// (0x0003b7e2) scroll_pane_cp035_ParamLimits

0xd539,	// (0x0003b7e2) scroll_pane_cp035

0xa8ec,	// (0x00038b95) bg_button_pane_cp033

0xef37,	// (0x0003d1e0) phob2_cc_button_pane_g1

0xef43,	// (0x0003d1ec) phob2_cc_button_pane_t1

0xef58,	// (0x0003d201) phob2_cc_button_pane_t2

0x0001,

0xfeb3,	// (0x0003e15c) phob2_cc_button_pane_t

0x99d6,	// (0x00037c7f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99d6,	// (0x00037c7f) list_double_large_graphic_phob2_cc_pane

0x9a08,	// (0x00037cb1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a08,	// (0x00037cb1) list_double_large_graphic_phob2_cc_pane_g1

0xef6a,	// (0x0003d213) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xef6a,	// (0x0003d213) list_double_large_graphic_phob2_cc_pane_g2

0x9a14,	// (0x00037cbd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a14,	// (0x00037cbd) list_double_large_graphic_phob2_cc_pane_g3

0x9a20,	// (0x00037cc9) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a20,	// (0x00037cc9) list_double_large_graphic_phob2_cc_pane_g4

0x9a2c,	// (0x00037cd5) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a2c,	// (0x00037cd5) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeb8,	// (0x0003e161) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeb8,	// (0x0003e161) list_double_large_graphic_phob2_cc_pane_g

0x9a38,	// (0x00037ce1) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a38,	// (0x00037ce1) list_double_large_graphic_phob2_cc_pane_t1

0x9a61,	// (0x00037d0a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a61,	// (0x00037d0a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfec3,	// (0x0003e16c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfec3,	// (0x0003e16c) list_double_large_graphic_phob2_cc_pane_t

0xef76,	// (0x0003d21f) list_highlight_pane_cp025_ParamLimits

0xef76,	// (0x0003d21f) list_highlight_pane_cp025

0xa8ec,	// (0x00038b95) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x0003d1e0) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x0003d1ec) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x0003d201) phob2_cc_button_pane_t2_ParamLimits

0xfeb3,	// (0x0003e15c) phob2_cc_button_pane_t_ParamLimits

0x1b4a,	// (0x0002fdf3) popup_wgtman_window

0xd358,	// (0x0003b601) scroll_pane_cp038

0x93be,	// (0x00037667) wgtman_btn_pane_cp_01_ParamLimits

0x93be,	// (0x00037667) wgtman_btn_pane_cp_01

0xef84,	// (0x0003d22d) wgtman_content_pane

0xef8d,	// (0x0003d236) wgtman_heading_pane

0x9c11,	// (0x00037eba) bg_heading_pane_cp02

0xef96,	// (0x0003d23f) wgtman_heading_pane_g1

0xef9e,	// (0x0003d247) wgtman_heading_pane_t1

0xefac,	// (0x0003d255) scroll_pane_cp036

0xefb4,	// (0x0003d25d) wgtman_list_pane

0xea3b,	// (0x0003cce4) wgtman_list_pane_t1_ParamLimits

0xea3b,	// (0x0003cce4) wgtman_list_pane_t1

0x64d7,	// (0x00034780) cam4_grid_pane

0x6ebc,	// (0x00035165) bg_button_pane_cp015_ParamLimits

0x6ed0,	// (0x00035179) bg_button_pane_cp016_ParamLimits

0x6ee3,	// (0x0003518c) bg_button_pane_cp017_ParamLimits

0x6f3b,	// (0x000351e4) popup_vitu2_query_window_g3_ParamLimits

0x6f3b,	// (0x000351e4) popup_vitu2_query_window_g3

0x6ff8,	// (0x000352a1) popup_vitu2_query_window_t6_ParamLimits

0x6ff8,	// (0x000352a1) popup_vitu2_query_window_t6

0x7023,	// (0x000352cc) popup_vitu2_query_window_t7_ParamLimits

0x7023,	// (0x000352cc) popup_vitu2_query_window_t7

0xea29,	// (0x0003ccd2) cam4_grid_pane_g1

0xea32,	// (0x0003ccdb) cam4_grid_pane_g2

0xefbc,	// (0x0003d265) cam4_grid_pane_g3

0xefc5,	// (0x0003d26e) cam4_grid_pane_g4

0x0003,

0xfec8,	// (0x0003e171) cam4_grid_pane_g

0x28ad,	// (0x00030b56) aid_placing_vt_slider_lsc_ParamLimits

0x2baa,	// (0x00030e53) vidtel_button_pane_ParamLimits

0x2baa,	// (0x00030e53) vidtel_button_pane

0x9c11,	// (0x00037eba) bg_button_pane_cp034

0xefd0,	// (0x0003d279) vidtel_button_pane_g1

0xefd8,	// (0x0003d281) vidtel_button_pane_t1

0xd472,	// (0x0003b71b) aid_size_vtel_slider_touch

0xd539,	// (0x0003b7e2) scroll_pane_cp039

0x7dce,	// (0x00036077) ncim_query_button_pane_cp01_ParamLimits

0x7ded,	// (0x00036096) ncimui_query_pane_g1_ParamLimits

0xa8ec,	// (0x00038b95) input_focus_pane_cp012_ParamLimits

0xde4d,	// (0x0003c0f6) ncim_query_entry_pane_t1_ParamLimits

0xd539,	// (0x0003b7e2) scroll_pane_cp039_ParamLimits

0xae40,	// (0x000390e9) navi_pane_bcale_mc_g1

0xae48,	// (0x000390f1) navi_pane_bcale_mc_t1

0xe3d2,	// (0x0003c67b) main_sp_fs_email_pane_g1

0xe3de,	// (0x0003c687) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003df8e) main_sp_fs_email_pane_g

0xe8bb,	// (0x0003cb64) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8bb,	// (0x0003cb64) list_single_cale_mrui_row_pane_g3

0x8fc9,	// (0x00037272) list_single_recal_day_pane_g5_event_pane

0xeac7,	// (0x0003cd70) list_single_recal_day_pane_g7

0xefee,	// (0x0003d297) list_recal_day_event_pane_cp01

0xeff7,	// (0x0003d2a0) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x0003d2a8) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x0003d2b0) list_recal_vselct_pane_cp01

0xd4a2,	// (0x0003b74b) list_recal_day_event_pane_cp01_g1

0xf011,	// (0x0003d2ba) list_recal_day_event_pane_cp01_t1

0xeacf,	// (0x0003cd78) list_single_recal_day_pane_t1_ParamLimits

0xeae1,	// (0x0003cd8a) list_single_recal_day_pane_t2_ParamLimits

0xfded,	// (0x0003e096) list_single_recal_day_pane_t_ParamLimits

0xa289,	// (0x00038532) bg_notes_pane_ParamLimits

0xa338,	// (0x000385e1) list_notes_pane_ParamLimits

0x1db7,	// (0x00030060) scroll_pane_cp06_ParamLimits

0xa35a,	// (0x00038603) main_notes_pane_ParamLimits

0xa8ec,	// (0x00038b95) main_welc_pane

0x9aa1,	// (0x00037d4a) main_welc_body_pane_ParamLimits

0x9aa1,	// (0x00037d4a) main_welc_body_pane

0x9abe,	// (0x00037d67) main_welc_opti_pane_ParamLimits

0x9abe,	// (0x00037d67) main_welc_opti_pane

0x9b12,	// (0x00037dbb) main_welc_pane_t1_ParamLimits

0x9b12,	// (0x00037dbb) main_welc_pane_t1

0x9b8c,	// (0x00037e35) main_welc_body_row_pane_ParamLimits

0x9b8c,	// (0x00037e35) main_welc_body_row_pane

0xdd30,	// (0x0003bfd9) main_welc_opti_row_pane_ParamLimits

0xdd30,	// (0x0003bfd9) main_welc_opti_row_pane

0xf01f,	// (0x0003d2c8) main_welc_opti_row_pane_g1

0x9ba1,	// (0x00037e4a) main_welc_opti_row_pane_t1

0xf027,	// (0x0003d2d0) main_welc_body_row_pane_t1

0xed3d,	// (0x0003cfe6) popup_notif_wgt_heading_pane

0xed57,	// (0x0003d000) aid_size_list_notif_wgt_del_ParamLimits

0xed64,	// (0x0003d00d) list_notif_wgt_row_pane_g1_ParamLimits

0xed70,	// (0x0003d019) list_notif_wgt_row_pane_g2_ParamLimits

0xed7f,	// (0x0003d028) list_notif_wgt_row_pane_g3_ParamLimits

0x010d,	// (0x0002e3b6) list_notif_wgt_row_pane_g_ParamLimits

0xed8c,	// (0x0003d035) list_notif_wgt_row_pane_t1_ParamLimits

0xeda2,	// (0x0003d04b) list_notif_wgt_row_pane_t2_ParamLimits

0xedb4,	// (0x0003d05d) list_notif_wgt_row_pane_t3_ParamLimits

0x0114,	// (0x0002e3bd) list_notif_wgt_row_pane_t_ParamLimits

0x9457,	// (0x00037700) listrow_wgtman_pane_g1_ParamLimits

0x9464,	// (0x0003770d) listrow_wgtman_pane_g2_ParamLimits

0xfe4d,	// (0x0003e0f6) listrow_wgtman_pane_g_ParamLimits

0x9482,	// (0x0003772b) listrow_wgtman_pane_t1_ParamLimits

0x949a,	// (0x00037743) listrow_wgtman_pane_t2_ParamLimits

0xfe52,	// (0x0003e0fb) listrow_wgtman_pane_t_ParamLimits

0x94c0,	// (0x00037769) wait_bar_pane_cp09_ParamLimits

0x9c11,	// (0x00037eba) bg_popup_heading_pane_cp02

0xf036,	// (0x0003d2df) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0003d2e7) popup_notif_wgt_heading_pane_t1

0x9c11,	// (0x00037eba) main_vids_pane

0x9c11,	// (0x00037eba) vids_listscroll_pane

0x9bb0,	// (0x00037e59) scroll_pane_cp040

0x9c11,	// (0x00037eba) vids_list_pane

0x9bbb,	// (0x00037e64) vids_list_double_pane_ParamLimits

0x9bbb,	// (0x00037e64) vids_list_double_pane

0x9bcc,	// (0x00037e75) vids_list_double_pane_g1

0x9bd5,	// (0x00037e7e) vids_list_double_pane_t1

0x9be5,	// (0x00037e8e) vids_list_double_pane_t2

0x0001,

0xfedf,	// (0x0003e188) vids_list_double_pane_t

0x1b3c,	// (0x0002fde5) main_ncimui_pane_ParamLimits

0x7c04,	// (0x00035ead) main_ncimui_pane_g1_ParamLimits

0x7c10,	// (0x00035eb9) main_ncimui_pane_g2_ParamLimits

0x7c10,	// (0x00035eb9) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0003de8f) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0003de8f) main_ncimui_pane_g

0x9ad9,	// (0x00037d82) main_welc_pane_g1_ParamLimits

0x9ad9,	// (0x00037d82) main_welc_pane_g1

0x9aee,	// (0x00037d97) main_welc_pane_g2_ParamLimits

0x9aee,	// (0x00037d97) main_welc_pane_g2

0x0002,

0xfed1,	// (0x0003e17a) main_welc_pane_g_ParamLimits

0xfed1,	// (0x0003e17a) main_welc_pane_g

0xa289,	// (0x00038532) listscroll_mce_pane_ParamLimits

0xaf95,	// (0x0003923e) wait_bar_pane_cp10

0xc3dc,	// (0x0003a685) main_cale_day_pane_ParamLimits

0xc3dc,	// (0x0003a685) main_cale_week_pane_ParamLimits

0xa289,	// (0x00038532) main_messa_pane_ParamLimits

0x5a9d,	// (0x00033d46) main_clock2_btn_pane_ParamLimits

0x5a9d,	// (0x00033d46) main_clock2_btn_pane

0xcc31,	// (0x0003aeda) main_clock2_btn_pane_cp01_ParamLimits

0xcc31,	// (0x0003aeda) main_clock2_btn_pane_cp01

0xe847,	// (0x0003caf0) list_cale_mrui_pane_ParamLimits

0xedea,	// (0x0003d093) main_cf0_pane_g2

0x0001,

0x011b,	// (0x0002e3c4) main_cf0_pane_g

0x96a9,	// (0x00037952) area_left_week_number_pane_ParamLimits

0x96b5,	// (0x0003795e) area_top_day_name_pane_ParamLimits

0x96c8,	// (0x00037971) frame_month_view_pane_ParamLimits

0xeee0,	// (0x0003d189) grid_month_view_pane_ParamLimits

0xeeee,	// (0x0003d197) frm_month_g1_ParamLimits

0x9749,	// (0x000379f2) frm_month_g2_ParamLimits

0x975c,	// (0x00037a05) frm_month_g3_ParamLimits

0x976f,	// (0x00037a18) frm_month_g4_ParamLimits

0x9782,	// (0x00037a2b) frm_month_g5_ParamLimits

0x9795,	// (0x00037a3e) frm_month_g6_ParamLimits

0x97a8,	// (0x00037a51) frm_month_g7_ParamLimits

0xeefb,	// (0x0003d1a4) frm_month_g8_ParamLimits

0x97bb,	// (0x00037a64) frm_month_g9_ParamLimits

0x97cb,	// (0x00037a74) frm_month_g10_ParamLimits

0x97db,	// (0x00037a84) frm_month_g11_ParamLimits

0x97eb,	// (0x00037a94) frm_month_g12_ParamLimits

0x97fd,	// (0x00037aa6) frm_month_g13_ParamLimits

0x980f,	// (0x00037ab8) frm_month_g14_ParamLimits

0x9823,	// (0x00037acc) frm_month_g15_ParamLimits

0x9837,	// (0x00037ae0) frm_month_g16_ParamLimits

0xfe7c,	// (0x0003e125) frm_month_g_ParamLimits

0xef08,	// (0x0003d1b1) cell_top_day_name_pane_t1_ParamLimits

0x984b,	// (0x00037af4) cell_area_left_week_number_pane_g1_ParamLimits

0x9857,	// (0x00037b00) cell_area_left_week_number_pane_t1_ParamLimits

0xca35,	// (0x0003acde) cell_month_view_pane_g1_ParamLimits

0x986a,	// (0x00037b13) cell_month_view_pane_t1_ParamLimits

0xa281,	// (0x0003852a) main_clock2_btn_pane_g1

0xf04c,	// (0x0003d2f5) main_clock2_btn_pane_t1

0xa8ec,	// (0x00038b95) listscroll_cmail_pane_ParamLimits

0xe3d2,	// (0x0003c67b) main_sp_fs_email_pane_g1_ParamLimits

0xe3de,	// (0x0003c687) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003df8e) main_sp_fs_email_pane_g_ParamLimits

0xea0a,	// (0x0003ccb3) list_recal_day_pane_ParamLimits

0xea1b,	// (0x0003ccc4) mian_recal_day_pane_t1

0x879c,	// (0x00036a45) list_single_dyc_row_text_pane_t4_ParamLimits

0x879c,	// (0x00036a45) list_single_dyc_row_text_pane_t4

0x87e5,	// (0x00036a8e) list_single_dyc_row_text_pane_t5_ParamLimits

0x87e5,	// (0x00036a8e) list_single_dyc_row_text_pane_t5

0xe480,	// (0x0003c729) list_single_dyc_row_text_pane_t6_ParamLimits

0xe480,	// (0x0003c729) list_single_dyc_row_text_pane_t6

0x365a,	// (0x00031903) aid_mgn_list_cale_time_pane

0x1b3c,	// (0x0002fde5) main_gallery2_pane_ParamLimits

0xcc47,	// (0x0003aef0) main_clock2_pane_cp01_t1

0xcc55,	// (0x0003aefe) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0003da65) main_clock2_pane_cp01_t

0x2111,	// (0x000303ba) cale_week_scroll_pane_g16_ParamLimits

0x2111,	// (0x000303ba) cale_week_scroll_pane_g16

0xa554,	// (0x000387fd) vorec_slider_pane

0xefd8,	// (0x0003d281) vidtel_button_pane_t1_ParamLimits

0x902f,	// (0x000372d8) main_fs_bigclock_clock_pane_g1_ParamLimits

0x902f,	// (0x000372d8) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9040,	// (0x000372e9) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9040,	// (0x000372e9) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe10,	// (0x0003e0b9) main_fs_bigclock_clock_pane_g_ParamLimits

0x9053,	// (0x000372fc) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9069,	// (0x00037312) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe19,	// (0x0003e0c2) main_fs_bigclock_clock_pane_t_ParamLimits

0x529b,	// (0x00033544) main_mup3_lyrics_pane_ParamLimits

0x529b,	// (0x00033544) main_mup3_lyrics_pane

0x9bf5,	// (0x00037e9e) main_mup3_lyrics_pane_t1_ParamLimits

0x9bf5,	// (0x00037e9e) main_mup3_lyrics_pane_t1

0x60b0,	// (0x00034359) aid_main_mp4_pane_t1_area

0x60ba,	// (0x00034363) aid_main_mp4_pane_t2_area

0x6166,	// (0x0003440f) main_mp4_pane_g7_ParamLimits

0x6166,	// (0x0003440f) main_mp4_pane_g7

0x6172,	// (0x0003441b) main_mp4_pane_g8_ParamLimits

0x6172,	// (0x0003441b) main_mp4_pane_g8

0x63e3,	// (0x0003468c) aid_call6_pane_g1_size

0x99f1,	// (0x00037c9a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x99f1,	// (0x00037c9a) list_double_large_graphic_phob2_other_pane

0xad71,	// (0x0003901a) list_double_large_graphic_phob2_other_pane_g1

0x9c11,	// (0x00037eba) list_highlight_pane_cp026

0xa8ec,	// (0x00038b95) main_welc_pane_ParamLimits

0x849f,	// (0x00036748) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x849f,	// (0x00036748) main_sp_fs_ctrlbar_pane_g3

0x84b9,	// (0x00036762) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x84b9,	// (0x00036762) main_sp_fs_ctrlbar_pane_g4

0x84ed,	// (0x00036796) toolbar2_fixed_button_pane_cp01

0x84f8,	// (0x000367a1) toolbar2_fixed_button_pane_cp02

0x8505,	// (0x000367ae) toolbar2_fixed_button_pane_cp03

0x9a8a,	// (0x00037d33) list_welc_entry_pane_ParamLimits

0x9a8a,	// (0x00037d33) list_welc_entry_pane

0x9b03,	// (0x00037dac) main_welc_pane_g3_ParamLimits

0x9b03,	// (0x00037dac) main_welc_pane_g3

0x9b30,	// (0x00037dd9) main_welc_pane_t2_ParamLimits

0x9b30,	// (0x00037dd9) main_welc_pane_t2

0x9b4a,	// (0x00037df3) main_welc_pane_t3_ParamLimits

0x9b4a,	// (0x00037df3) main_welc_pane_t3

0x0002,

0xfed8,	// (0x0003e181) main_welc_pane_t_ParamLimits

0xfed8,	// (0x0003e181) main_welc_pane_t

0x9b61,	// (0x00037e0a) welc_button_pane_ParamLimits

0x9b61,	// (0x00037e0a) welc_button_pane

0x9b78,	// (0x00037e21) welc_service_logo_pane_ParamLimits

0x9b78,	// (0x00037e21) welc_service_logo_pane

0xf05a,	// (0x0003d303) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0003d303) list_single_welc_entry_pane

0xf06b,	// (0x0003d314) list_single_welc_entry_pane_g1

0xf073,	// (0x0003d31c) list_single_welc_entry_pane_t1

0xf081,	// (0x0003d32a) list_single_welc_entry_pane_t2

0x0001,

0xfee4,	// (0x0003e18d) list_single_welc_entry_pane_t

0x9c11,	// (0x00037eba) bg_button_pane_cp035

0xf08f,	// (0x0003d338) welc_button_pane_t1

0xf09d,	// (0x0003d346) welc_service_logo_pane_g1

0xf0a6,	// (0x0003d34f) welc_service_logo_pane_g2

0x0001,

0xfee9,	// (0x0003e192) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
