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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005ec0f };

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
0x5dbb,	// (0x000649ca) Screen

0x5dc7,	// (0x000649d6) application_window

0x5e0f,	// (0x00064a1e) area_bottom_pane_ParamLimits

0x5e0f,	// (0x00064a1e) area_bottom_pane

0x5e44,	// (0x00064a53) area_top_pane_ParamLimits

0x5e44,	// (0x00064a53) area_top_pane

0x058b,	// (0x0005f19a) call_video_uplink_pane_ParamLimits

0x058b,	// (0x0005f19a) call_video_uplink_pane

0x5ed2,	// (0x00064ae1) main_pane_ParamLimits

0x5ed2,	// (0x00064ae1) main_pane

0x1090,	// (0x0005fc9f) context_pane

0xa3df,	// (0x00068fee) navi_pane

0xa3ff,	// (0x0006900e) popup_cale_events_window_ParamLimits

0xa3ff,	// (0x0006900e) popup_cale_events_window

0x10a3,	// (0x0005fcb2) popup_mup_playback_window

0xa417,	// (0x00069026) signal_pane

0x646d,	// (0x0006507c) main_browser_pane

0x8ab7,	// (0x000676c6) main_burst_pane

0xa2a9,	// (0x00068eb8) main_calc_pane

0x8ab7,	// (0x000676c6) main_cale_day_pane

0x646d,	// (0x0006507c) main_cale_month_pane

0x8ab7,	// (0x000676c6) main_cale_week_pane

0x8ab7,	// (0x000676c6) main_call_pane

0x09bc,	// (0x0005f5cb) main_call_poc_pane

0x8ab7,	// (0x000676c6) main_camera_pane

0x8ab7,	// (0x000676c6) main_chi_dic_pane

0x866a,	// (0x00067279) main_clock_pane

0x09bc,	// (0x0005f5cb) main_fmradio_pane

0x8ab7,	// (0x000676c6) main_graph_messa_pane

0x09bc,	// (0x0005f5cb) main_help_pane

0x646d,	// (0x0006507c) main_im_pane

0x60ea,	// (0x00064cf9) main_image_pane_ParamLimits

0x60ea,	// (0x00064cf9) main_image_pane

0x09bc,	// (0x0005f5cb) main_location2_pane

0x8ab7,	// (0x000676c6) main_location_pane

0x09bc,	// (0x0005f5cb) main_messa_pane

0x09bc,	// (0x0005f5cb) main_mp2_pane

0x8ab7,	// (0x000676c6) main_mp_pane

0x09bc,	// (0x0005f5cb) main_msg_pane

0x09bc,	// (0x0005f5cb) main_mup_eq_pane

0x09bc,	// (0x0005f5cb) main_mup_pane

0x8ab7,	// (0x000676c6) main_notes_pane

0x09bc,	// (0x0005f5cb) main_pec_pane

0x09bc,	// (0x0005f5cb) main_phob_pane

0x09bc,	// (0x0005f5cb) main_pinb_pane

0x09bc,	// (0x0005f5cb) main_postcard_pane

0x09bc,	// (0x0005f5cb) main_qdial_pane

0x8ab7,	// (0x000676c6) main_skin_pane

0x09bc,	// (0x0005f5cb) main_smil2_pane

0x8ab7,	// (0x000676c6) main_smil_pane

0x8ab7,	// (0x000676c6) main_video_pane

0x8ab7,	// (0x000676c6) main_video_tele_pane

0x60ea,	// (0x00064cf9) main_viewer_pane_ParamLimits

0x60ea,	// (0x00064cf9) main_viewer_pane

0x8ab7,	// (0x000676c6) main_vorec_pane

0xa2df,	// (0x00068eee) popup_blid_sat_info_window_ParamLimits

0xa2df,	// (0x00068eee) popup_blid_sat_info_window

0xa2f5,	// (0x00068f04) popup_dyc_status_message_window_ParamLimits

0xa2f5,	// (0x00068f04) popup_dyc_status_message_window

0xa305,	// (0x00068f14) popup_grid_large_graphic_window_ParamLimits

0xa305,	// (0x00068f14) popup_grid_large_graphic_window

0xa37b,	// (0x00068f8a) popup_loc_request_window_ParamLimits

0xa37b,	// (0x00068f8a) popup_loc_request_window

0xa3b7,	// (0x00068fc6) popup_wml_address_window_ParamLimits

0xa3b7,	// (0x00068fc6) popup_wml_address_window

0xa181,	// (0x00068d90) call_muted_g1

0x9710,	// (0x0006831f) popup_call_audio_conf_window_ParamLimits

0x9710,	// (0x0006831f) popup_call_audio_conf_window

0xa191,	// (0x00068da0) popup_call_audio_first_window_ParamLimits

0xa191,	// (0x00068da0) popup_call_audio_first_window

0xa1d1,	// (0x00068de0) popup_call_audio_in_window_ParamLimits

0xa1d1,	// (0x00068de0) popup_call_audio_in_window

0xa1f5,	// (0x00068e04) popup_call_audio_out_window_ParamLimits

0xa1f5,	// (0x00068e04) popup_call_audio_out_window

0xa217,	// (0x00068e26) popup_call_audio_second_window_ParamLimits

0xa217,	// (0x00068e26) popup_call_audio_second_window

0xa247,	// (0x00068e56) popup_call_audio_wait_window_ParamLimits

0xa247,	// (0x00068e56) popup_call_audio_wait_window

0xa268,	// (0x00068e77) popup_number_entry_window_ParamLimits

0xa268,	// (0x00068e77) popup_number_entry_window

0x05a9,	// (0x0005f1b8) bg_popup_call_pane_cp05_ParamLimits

0x05a9,	// (0x0005f1b8) bg_popup_call_pane_cp05

0x05c9,	// (0x0005f1d8) popup_number_entry_window_t1

0x05dc,	// (0x0005f1eb) popup_number_entry_window_t2

0x05ee,	// (0x0005f1fd) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0006dd3e) popup_number_entry_window_t

0x0600,	// (0x0005f20f) text_title_cp2

0x0613,	// (0x0005f222) bg_popup_call_pane_cp_ParamLimits

0x0613,	// (0x0005f222) bg_popup_call_pane_cp

0x0621,	// (0x0005f230) call_thumbnail_pane

0x0629,	// (0x0005f238) popup_call_audio_in_window_g1_ParamLimits

0x0629,	// (0x0005f238) popup_call_audio_in_window_g1

0x0635,	// (0x0005f244) popup_call_audio_in_window_g2_ParamLimits

0x0635,	// (0x0005f244) popup_call_audio_in_window_g2

0x0641,	// (0x0005f250) popup_call_audio_in_window_g3_ParamLimits

0x0641,	// (0x0005f250) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0006dd47) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0006dd47) popup_call_audio_in_window_g

0x064d,	// (0x0005f25c) popup_call_audio_in_window_t1_ParamLimits

0x064d,	// (0x0005f25c) popup_call_audio_in_window_t1

0x0669,	// (0x0005f278) popup_call_audio_in_window_t2_ParamLimits

0x0669,	// (0x0005f278) popup_call_audio_in_window_t2

0x0685,	// (0x0005f294) popup_call_audio_in_window_t3_ParamLimits

0x0685,	// (0x0005f294) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0006dd4e) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0006dd4e) popup_call_audio_in_window_t

0x0613,	// (0x0005f222) bg_popup_call_pane_cp01_ParamLimits

0x0613,	// (0x0005f222) bg_popup_call_pane_cp01

0x0621,	// (0x0005f230) call_thumbnail_pane_cp02

0x0698,	// (0x0005f2a7) call_type_pane_cp022

0x06a0,	// (0x0005f2af) popup_call_audio_out_window_g1_ParamLimits

0x06a0,	// (0x0005f2af) popup_call_audio_out_window_g1

0x06b2,	// (0x0005f2c1) popup_call_audio_out_window_g2_ParamLimits

0x06b2,	// (0x0005f2c1) popup_call_audio_out_window_g2

0x06be,	// (0x0005f2cd) popup_call_audio_out_window_g3_ParamLimits

0x06be,	// (0x0005f2cd) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0006dd55) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0006dd55) popup_call_audio_out_window_g

0x06d0,	// (0x0005f2df) popup_call_audio_out_window_t1_ParamLimits

0x06d0,	// (0x0005f2df) popup_call_audio_out_window_t1

0x06e8,	// (0x0005f2f7) popup_call_audio_out_window_t2_ParamLimits

0x06e8,	// (0x0005f2f7) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0006dd5c) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0006dd5c) popup_call_audio_out_window_t

0x06fd,	// (0x0005f30c) bg_popup_call_pane_ParamLimits

0x06fd,	// (0x0005f30c) bg_popup_call_pane

0x60c6,	// (0x00064cd5) call_thumbnail_pane_cp_ParamLimits

0x60c6,	// (0x00064cd5) call_thumbnail_pane_cp

0x0781,	// (0x0005f390) call_type_pane_cp01_ParamLimits

0x0781,	// (0x0005f390) call_type_pane_cp01

0x07c5,	// (0x0005f3d4) popup_call_audio_first_window_g1_ParamLimits

0x07c5,	// (0x0005f3d4) popup_call_audio_first_window_g1

0x0811,	// (0x0005f420) popup_call_audio_first_window_g2_ParamLimits

0x0811,	// (0x0005f420) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0006dd61) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0006dd61) popup_call_audio_first_window_g

0x0855,	// (0x0005f464) popup_call_audio_first_window_t1_ParamLimits

0x0855,	// (0x0005f464) popup_call_audio_first_window_t1

0x0901,	// (0x0005f510) popup_call_audio_first_window_t4_ParamLimits

0x0901,	// (0x0005f510) popup_call_audio_first_window_t4

0x098d,	// (0x0005f59c) popup_call_audio_first_window_t5_ParamLimits

0x098d,	// (0x0005f59c) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0006dd66) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0006dd66) popup_call_audio_first_window_t

0x09bc,	// (0x0005f5cb) bg_popup_call_pane_cp02

0x09c6,	// (0x0005f5d5) call_type_pane_cp023

0x09ce,	// (0x0005f5dd) popup_call_audio_wait_window_g1

0x09d6,	// (0x0005f5e5) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0006dd6d) popup_call_audio_wait_window_g

0x09de,	// (0x0005f5ed) popup_call_audio_wait_window_t3

0x09ec,	// (0x0005f5fb) bg_popup_call_pane_cp03_ParamLimits

0x09ec,	// (0x0005f5fb) bg_popup_call_pane_cp03

0x0a4c,	// (0x0005f65b) call_thumbnail_pane_cp011_ParamLimits

0x0a4c,	// (0x0005f65b) call_thumbnail_pane_cp011

0x0a58,	// (0x0005f667) call_type_pane_cp034_ParamLimits

0x0a58,	// (0x0005f667) call_type_pane_cp034

0x0a94,	// (0x0005f6a3) popup_call_audio_second_window_g1_ParamLimits

0x0a94,	// (0x0005f6a3) popup_call_audio_second_window_g1

0x0ad0,	// (0x0005f6df) popup_call_audio_second_window_g2_ParamLimits

0x0ad0,	// (0x0005f6df) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0006dd72) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0006dd72) popup_call_audio_second_window_g

0x0b0c,	// (0x0005f71b) popup_call_audio_second_window_t1_ParamLimits

0x0b0c,	// (0x0005f71b) popup_call_audio_second_window_t1

0x0b8d,	// (0x0005f79c) popup_call_audio_second_window_t2_ParamLimits

0x0b8d,	// (0x0005f79c) popup_call_audio_second_window_t2

0x0bc3,	// (0x0005f7d2) popup_call_audio_second_window_t3_ParamLimits

0x0bc3,	// (0x0005f7d2) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0006dd77) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0006dd77) popup_call_audio_second_window_t

0x09bc,	// (0x0005f5cb) bg_popup_call_pane_cp04

0x0bf9,	// (0x0005f808) list_conf_pane

0x0c01,	// (0x0005f810) popup_call_audio_conf_window_t1

0x0c0f,	// (0x0005f81e) call_thumbnail_pane_g1

0x60ea,	// (0x00064cf9) bg_pinb_pane_ParamLimits

0x60ea,	// (0x00064cf9) bg_pinb_pane

0x60f8,	// (0x00064d07) find_pinb_pane

0x6101,	// (0x00064d10) listscroll_pinb_pane_ParamLimits

0x6101,	// (0x00064d10) listscroll_pinb_pane

0x6110,	// (0x00064d1f) pinb_bg_pane_g1

0x611a,	// (0x00064d29) pinb_bg_pane_g2

0x6126,	// (0x00064d35) pinb_bg_pane_g3

0x6132,	// (0x00064d41) pinb_bg_pane_g4

0x613e,	// (0x00064d4d) pinb_bg_pane_g5

0x614a,	// (0x00064d59) pinb_bg_pane_g6

0x6155,	// (0x00064d64) pinb_bg_pane_g7

0x6160,	// (0x00064d6f) pinb_bg_pane_g8

0x616b,	// (0x00064d7a) pinb_bg_pane_g9

0x6175,	// (0x00064d84) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0006dd7e) pinb_bg_pane_g

0x6192,	// (0x00064da1) grid_pinb_pane

0x619d,	// (0x00064dac) list_pinb_pane

0x61a8,	// (0x00064db7) scroll_pane_cp01_ParamLimits

0x61a8,	// (0x00064db7) scroll_pane_cp01

0x61ba,	// (0x00064dc9) find_pinb_pane_g1_ParamLimits

0x61ba,	// (0x00064dc9) find_pinb_pane_g1

0x61d2,	// (0x00064de1) find_pinb_pane_t1

0x61e4,	// (0x00064df3) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0006dd98) find_pinb_pane_t

0x61f9,	// (0x00064e08) input_focus_pane_cp01_ParamLimits

0x61f9,	// (0x00064e08) input_focus_pane_cp01

0x6205,	// (0x00064e14) cell_pinb_pane_ParamLimits

0x6205,	// (0x00064e14) cell_pinb_pane

0x622a,	// (0x00064e39) cell_pinb_pane_g1_ParamLimits

0x622a,	// (0x00064e39) cell_pinb_pane_g1

0x623f,	// (0x00064e4e) cell_pinb_pane_g2_ParamLimits

0x623f,	// (0x00064e4e) cell_pinb_pane_g2

0x624b,	// (0x00064e5a) cell_pinb_pane_g3_ParamLimits

0x624b,	// (0x00064e5a) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0006dd9d) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0006dd9d) cell_pinb_pane_g

0x09bc,	// (0x0005f5cb) grid_highlight_pane_cp01

0x6257,	// (0x00064e66) list_pinb_item_pane_ParamLimits

0x6257,	// (0x00064e66) list_pinb_item_pane

0x09bc,	// (0x0005f5cb) list_highlight_pane_cp02

0x6277,	// (0x00064e86) list_pinb_item_pane_g1_ParamLimits

0x6277,	// (0x00064e86) list_pinb_item_pane_g1

0x6284,	// (0x00064e93) list_pinb_item_pane_g2_ParamLimits

0x6284,	// (0x00064e93) list_pinb_item_pane_g2

0x6290,	// (0x00064e9f) list_pinb_item_pane_g3_ParamLimits

0x6290,	// (0x00064e9f) list_pinb_item_pane_g3

0x62a1,	// (0x00064eb0) list_pinb_item_pane_g4_ParamLimits

0x62a1,	// (0x00064eb0) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0006dda4) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0006dda4) list_pinb_item_pane_g

0x62ad,	// (0x00064ebc) list_pinb_item_pane_t1_ParamLimits

0x62ad,	// (0x00064ebc) list_pinb_item_pane_t1

0x62de,	// (0x00064eed) calc_display_pane

0x62fc,	// (0x00064f0b) calc_paper_pane

0x6318,	// (0x00064f27) grid_calc_pane

0x09bc,	// (0x0005f5cb) bg_list_pane_cp01

0x6342,	// (0x00064f51) clock_g1

0x634a,	// (0x00064f59) clock_g2

0x0001,

0xf19e,	// (0x0006ddad) clock_g

0x6354,	// (0x00064f63) clock_t1_ParamLimits

0x6354,	// (0x00064f63) clock_t1

0x6369,	// (0x00064f78) clock_t2_ParamLimits

0x6369,	// (0x00064f78) clock_t2

0x637b,	// (0x00064f8a) clock_t3_ParamLimits

0x637b,	// (0x00064f8a) clock_t3

0x638d,	// (0x00064f9c) clock_t4_ParamLimits

0x638d,	// (0x00064f9c) clock_t4

0x639f,	// (0x00064fae) clock_t5_ParamLimits

0x639f,	// (0x00064fae) clock_t5

0x63b4,	// (0x00064fc3) clock_t6_ParamLimits

0x63b4,	// (0x00064fc3) clock_t6

0x63c6,	// (0x00064fd5) clock_t7_ParamLimits

0x63c6,	// (0x00064fd5) clock_t7

0x63d8,	// (0x00064fe7) clock_t8_ParamLimits

0x63d8,	// (0x00064fe7) clock_t8

0x63ee,	// (0x00064ffd) clock_t9_ParamLimits

0x63ee,	// (0x00064ffd) clock_t9

0x0008,

0xf1a3,	// (0x0006ddb2) clock_t_ParamLimits

0xf1a3,	// (0x0006ddb2) clock_t

0x6404,	// (0x00065013) popup_clock_analogue_window_cp02

0x6404,	// (0x00065013) popup_clock_digital_window_cp01

0x640c,	// (0x0006501b) listscroll_help_pane

0x09bc,	// (0x0005f5cb) phob_pre_status_pane

0x6416,	// (0x00065025) grid_qdial_pane

0x09bc,	// (0x0005f5cb) listscroll_mce_pane

0x6420,	// (0x0006502f) bg_notes_pane

0x642a,	// (0x00065039) list_notes_pane

0x6434,	// (0x00065043) scroll_pane_cp06

0x643f,	// (0x0006504e) bg_calc_paper_pane

0x6453,	// (0x00065062) list_calc_pane

0x646d,	// (0x0006507c) bg_calc_display_pane

0x6479,	// (0x00065088) calc_display_pane_t1

0x648e,	// (0x0006509d) calc_display_pane_t2

0x64a3,	// (0x000650b2) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0006ddc5) calc_display_pane_t

0x64b5,	// (0x000650c4) cell_calc_pane_ParamLimits

0x64b5,	// (0x000650c4) cell_calc_pane

0x64e2,	// (0x000650f1) bg_calc_paper_pane_g1

0x64ee,	// (0x000650fd) bg_calc_paper_pane_g2

0x64fa,	// (0x00065109) bg_calc_paper_pane_g3

0x6506,	// (0x00065115) bg_calc_paper_pane_g4

0x6512,	// (0x00065121) bg_calc_paper_pane_g5

0x651e,	// (0x0006512d) bg_calc_paper_pane_g6

0x652f,	// (0x0006513e) bg_calc_paper_pane_g7

0x6540,	// (0x0006514f) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0006ddcc) bg_calc_paper_pane_g

0x6551,	// (0x00065160) calc_bg_paper_pane_g9

0x6562,	// (0x00065171) list_calc_item_pane_ParamLimits

0x6562,	// (0x00065171) list_calc_item_pane

0x6591,	// (0x000651a0) list_calc_item_pane_g1

0x659e,	// (0x000651ad) list_calc_item_pane_t1_ParamLimits

0x659e,	// (0x000651ad) list_calc_item_pane_t1

0x65b0,	// (0x000651bf) list_calc_item_pane_t2_ParamLimits

0x65b0,	// (0x000651bf) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0006dddd) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0006dddd) list_calc_item_pane_t

0x65c8,	// (0x000651d7) cell_calc_pane_g1

0x65ea,	// (0x000651f9) grid_highlight_pane_cp02

0x1572,	// (0x00060181) bg_calc_display_pane_g1

0x660c,	// (0x0006521b) bg_calc_display_pane_g2

0x6616,	// (0x00065225) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0006dde7) bg_calc_display_pane_g

0x661f,	// (0x0006522e) cell_qdial_pane_ParamLimits

0x661f,	// (0x0006522e) cell_qdial_pane

0x6633,	// (0x00065242) cell_qdial_pane_g1_ParamLimits

0x6633,	// (0x00065242) cell_qdial_pane_g1

0x6640,	// (0x0006524f) cell_qdial_pane_g2_ParamLimits

0x6640,	// (0x0006524f) cell_qdial_pane_g2

0x6651,	// (0x00065260) cell_qdial_pane_g3_ParamLimits

0x6651,	// (0x00065260) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0006ddee) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0006ddee) cell_qdial_pane_g

0x666a,	// (0x00065279) cell_qdial_pane_t1_ParamLimits

0x666a,	// (0x00065279) cell_qdial_pane_t1

0x6682,	// (0x00065291) cell_qdial_pane_t2_ParamLimits

0x6682,	// (0x00065291) cell_qdial_pane_t2

0x6695,	// (0x000652a4) cell_qdial_pane_t3_ParamLimits

0x6695,	// (0x000652a4) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0006ddf7) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0006ddf7) cell_qdial_pane_t

0x09bc,	// (0x0005f5cb) grid_highlight_pane_cp04

0x66a8,	// (0x000652b7) thumbnail_qdial_pane_ParamLimits

0x66a8,	// (0x000652b7) thumbnail_qdial_pane

0x6704,	// (0x00065313) list_help_pane

0x670d,	// (0x0006531c) scroll_pane_cp02

0x6716,	// (0x00065325) help_list_pane_t1_ParamLimits

0x6716,	// (0x00065325) help_list_pane_t1

0x6749,	// (0x00065358) bg_notes_pane_g2

0x6751,	// (0x00065360) bg_notes_pane_g3

0x6759,	// (0x00065368) notes_bg_pane_g1

0x6761,	// (0x00065370) notes_bg_pane_g4

0x6769,	// (0x00065378) notes_bg_pane_g5

0x6771,	// (0x00065380) notes_bg_pane_g6

0x6779,	// (0x00065388) notes_bg_pane_g7

0x6781,	// (0x00065390) notes_bg_pane_g8

0x6789,	// (0x00065398) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0006de15) notes_bg_pane_g

0x6791,	// (0x000653a0) list_notes_text_pane_ParamLimits

0x6791,	// (0x000653a0) list_notes_text_pane

0x67b6,	// (0x000653c5) list_notes_text_pane_g1

0x4dda,	// (0x000639e9) list_notes_text_pane_t1

0x646d,	// (0x0006507c) listscroll_cale_week_pane

0x67ed,	// (0x000653fc) bg_cale_heading_pane

0x6801,	// (0x00065410) bg_cale_pane_cp01

0x681a,	// (0x00065429) cale_week_corner_pane

0x6830,	// (0x0006543f) cale_week_day_heading_pane

0x6844,	// (0x00065453) cale_week_scroll_pane_g1

0x6855,	// (0x00065464) cale_week_scroll_pane_g2

0x6866,	// (0x00065475) cale_week_scroll_pane_g3

0x6877,	// (0x00065486) cale_week_scroll_pane_g4

0x6888,	// (0x00065497) cale_week_scroll_pane_g5

0x6899,	// (0x000654a8) cale_week_scroll_pane_g6

0x68aa,	// (0x000654b9) cale_week_scroll_pane_g7

0x68bd,	// (0x000654cc) cale_week_scroll_pane_g8

0x68d0,	// (0x000654df) cale_week_scroll_pane_g9

0x68e1,	// (0x000654f0) cale_week_scroll_pane_g10

0x68f2,	// (0x00065501) cale_week_scroll_pane_g11

0x6903,	// (0x00065512) cale_week_scroll_pane_g12

0x6914,	// (0x00065523) cale_week_scroll_pane_g13

0x6925,	// (0x00065534) cale_week_scroll_pane_g14

0x6936,	// (0x00065545) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0006de24) cale_week_scroll_pane_g

0x6947,	// (0x00065556) cale_week_time_pane

0x695a,	// (0x00065569) grid_cale_week_pane

0x6981,	// (0x00065590) scroll_pane_cp08

0x699b,	// (0x000655aa) cell_cale_week_pane_ParamLimits

0x699b,	// (0x000655aa) cell_cale_week_pane

0x69d7,	// (0x000655e6) cale_week_day_heading_pane_t1

0x6a04,	// (0x00065613) cale_week_day_heading_pane_t2

0x6a31,	// (0x00065640) cale_week_day_heading_pane_t3

0x6a5e,	// (0x0006566d) cale_week_day_heading_pane_t4

0x6a8b,	// (0x0006569a) cale_week_day_heading_pane_t5

0x6ab8,	// (0x000656c7) cale_week_day_heading_pane_t6

0x6ae5,	// (0x000656f4) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0006de43) cale_week_day_heading_pane_t

0x6b12,	// (0x00065721) bg_cale_side_pane

0x6b20,	// (0x0006572f) cale_week_time_pane_t1

0x6b38,	// (0x00065747) cale_week_time_pane_t2

0x6b50,	// (0x0006575f) cale_week_time_pane_t3

0x6b68,	// (0x00065777) cale_week_time_pane_t4

0x6b80,	// (0x0006578f) cale_week_time_pane_t5

0x6b98,	// (0x000657a7) cale_week_time_pane_t6

0x6bb0,	// (0x000657bf) cale_week_time_pane_t7

0x6bc8,	// (0x000657d7) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0006de52) cale_week_time_pane_t

0x6be0,	// (0x000657ef) cell_cale_week_pane_g2

0x6bf9,	// (0x00065808) cell_cale_week_pane_g3_ParamLimits

0x6bf9,	// (0x00065808) cell_cale_week_pane_g3

0x6c11,	// (0x00065820) grid_highlight_pane_cp07

0x6c19,	// (0x00065828) listscroll_gms_pane

0x6c23,	// (0x00065832) grid_gms_pane

0x6c2c,	// (0x0006583b) listscroll_gms_pane_g1

0x6c34,	// (0x00065843) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0006de63) listscroll_gms_pane_g

0x6c3c,	// (0x0006584b) scroll_pane_cp010

0x6c47,	// (0x00065856) cell_gms_pane_ParamLimits

0x6c47,	// (0x00065856) cell_gms_pane

0x6c5a,	// (0x00065869) cell_gms_pane_g1

0x6c62,	// (0x00065871) cell_gms_pane_g2

0x6c6a,	// (0x00065879) cell_gms_pane_g3

0x6c73,	// (0x00065882) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0006de68) cell_gms_pane_g

0x6c7c,	// (0x0006588b) grid_highlight_pane_cp09

0xa129,	// (0x00068d38) phob_pre_status_pane_g1

0xa131,	// (0x00068d40) phob_pre_status_pane_g2

0xa139,	// (0x00068d48) phob_pre_status_pane_g3

0xa141,	// (0x00068d50) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0006e257) phob_pre_status_pane_g

0xa151,	// (0x00068d60) phob_pre_status_pane_t1

0xa161,	// (0x00068d70) phob_pre_status_pane_t2

0xa171,	// (0x00068d80) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0006e262) phob_pre_status_pane_t

0x09bc,	// (0x0005f5cb) bg_list_pane_cp05

0x6c8c,	// (0x0006589b) grid_vorec_pane

0x6c96,	// (0x000658a5) vorec_t1

0x6ca4,	// (0x000658b3) vorec_t2

0x6cb2,	// (0x000658c1) vorec_t3

0x6cc0,	// (0x000658cf) vorec_t4

0x6cce,	// (0x000658dd) vorec_t5

0x6cdc,	// (0x000658eb) vorec_t6

0x0006,

0xf262,	// (0x0006de71) vorec_t

0x6cf8,	// (0x00065907) wait_bar_pane_cp01

0x6d00,	// (0x0006590f) cell_vorec_pane_ParamLimits

0x6d00,	// (0x0006590f) cell_vorec_pane

0x6d13,	// (0x00065922) cell_vorec_pane_g1

0x09bc,	// (0x0005f5cb) grid_highlight_pane_cp05

0x6d2d,	// (0x0006593c) cams_zoom_pane

0x6d39,	// (0x00065948) image_vga_pane

0x6d48,	// (0x00065957) main_camera_pane_g1

0x6d56,	// (0x00065965) main_camera_pane_g2

0x6d62,	// (0x00065971) main_camera_pane_g3

0x6d6e,	// (0x0006597d) main_camera_pane_g4

0x6d7a,	// (0x00065989) main_camera_pane_g5

0x6d86,	// (0x00065995) main_camera_pane_g6

0x6d92,	// (0x000659a1) main_camera_pane_g7

0x0007,

0xf271,	// (0x0006de80) main_camera_pane_g

0x6daa,	// (0x000659b9) main_camera_pane_t1

0x6dbc,	// (0x000659cb) main_camera_pane_t2

0x0001,

0xf282,	// (0x0006de91) main_camera_pane_t

0x6ddd,	// (0x000659ec) cams_zoom_pane_cp_ParamLimits

0x6ddd,	// (0x000659ec) cams_zoom_pane_cp

0x6e01,	// (0x00065a10) image_cif_pane_ParamLimits

0x6e01,	// (0x00065a10) image_cif_pane

0x6e1f,	// (0x00065a2e) image_subqcif_pane

0x6e27,	// (0x00065a36) main_video_pane_g1_ParamLimits

0x6e27,	// (0x00065a36) main_video_pane_g1

0x6e47,	// (0x00065a56) main_video_pane_g2_ParamLimits

0x6e47,	// (0x00065a56) main_video_pane_g2

0x6e77,	// (0x00065a86) main_video_pane_g3_ParamLimits

0x6e77,	// (0x00065a86) main_video_pane_g3

0x6ea0,	// (0x00065aaf) main_video_pane_g4_ParamLimits

0x6ea0,	// (0x00065aaf) main_video_pane_g4

0x6ec9,	// (0x00065ad8) main_video_pane_g5_ParamLimits

0x6ec9,	// (0x00065ad8) main_video_pane_g5

0x6ee1,	// (0x00065af0) main_video_pane_g6_ParamLimits

0x6ee1,	// (0x00065af0) main_video_pane_g6

0x0006,

0xf287,	// (0x0006de96) main_video_pane_g_ParamLimits

0xf287,	// (0x0006de96) main_video_pane_g

0x6f07,	// (0x00065b16) main_video_pane_t1_ParamLimits

0x6f07,	// (0x00065b16) main_video_pane_t1

0x6f45,	// (0x00065b54) cams_zoom_pane_g1

0x6f4e,	// (0x00065b5d) cams_zoom_pane_g2

0x6f57,	// (0x00065b66) cams_zoom_pane_g3

0x6f60,	// (0x00065b6f) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0006dea5) cams_zoom_pane_g

0x6f75,	// (0x00065b84) grid_cams_pane

0x6f83,	// (0x00065b92) linegrid_cams_pane

0x6f91,	// (0x00065ba0) cell_cams_pane_ParamLimits

0x6f91,	// (0x00065ba0) cell_cams_pane

0x6fa4,	// (0x00065bb3) cams_burst_image_pane

0x6fac,	// (0x00065bbb) cell_cams_pane_g1

0x09bc,	// (0x0005f5cb) grid_highlight_pane_cp03

0x65c8,	// (0x000651d7) mp_bg_pane_g1

0x09bc,	// (0x0005f5cb) bg_list_pane_cp03

0x0f68,	// (0x0005fb77) bg_mp_pane

0x0f70,	// (0x0005fb7f) grid_mp_pane

0x0f78,	// (0x0005fb87) media_player_g1

0x0f80,	// (0x0005fb8f) media_player_t1

0x0f8e,	// (0x0005fb9d) media_player_t2

0x0f9c,	// (0x0005fbab) media_player_t3

0x0faa,	// (0x0005fbb9) media_player_t4

0x0fb8,	// (0x0005fbc7) media_player_t5

0x0fc6,	// (0x0005fbd5) media_player_t6

0x0fd4,	// (0x0005fbe3) media_player_t7

0x0006,

0xf632,	// (0x0006e241) media_player_t

0x0fe2,	// (0x0005fbf1) wait_bar_pane_cp02

0xf617,	// (0x0006e226) main_usb_pane_t

0xa120,	// (0x00068d2f) cell_mp_pane

0x65c8,	// (0x000651d7) cell_mp_pane_g1

0x09bc,	// (0x0005f5cb) grid_highlight_pane_cp06

0x6fb4,	// (0x00065bc3) grid_skin_colour_pane

0x6fbc,	// (0x00065bcb) list_highlight_pane_cp03

0x6fc4,	// (0x00065bd3) skin_g1

0x6fce,	// (0x00065bdd) skin_t1

0x6fdd,	// (0x00065bec) skin_t2

0x0001,

0xf2cb,	// (0x0006deda) skin_t

0x6feb,	// (0x00065bfa) cell_skin_colour_pane_ParamLimits

0x6feb,	// (0x00065bfa) cell_skin_colour_pane

0x7007,	// (0x00065c16) cell_skin_colour_pane_g1

0x705a,	// (0x00065c69) call_video_g1_ParamLimits

0x705a,	// (0x00065c69) call_video_g1

0x706a,	// (0x00065c79) call_video_g2_ParamLimits

0x706a,	// (0x00065c79) call_video_g2

0x0001,

0xf2d0,	// (0x0006dedf) call_video_g_ParamLimits

0xf2d0,	// (0x0006dedf) call_video_g

0x70aa,	// (0x00065cb9) call_video_uplink_pane_cp1_ParamLimits

0x70aa,	// (0x00065cb9) call_video_uplink_pane_cp1

0x70f6,	// (0x00065d05) call_video_uplink_pane_cp2

0x715e,	// (0x00065d6d) video_down_crop_pane_ParamLimits

0x715e,	// (0x00065d6d) video_down_crop_pane

0x7244,	// (0x00065e53) video_down_pane_ParamLimits

0x7244,	// (0x00065e53) video_down_pane

0x7326,	// (0x00065f35) video_down_subqcif_pane_ParamLimits

0x7326,	// (0x00065f35) video_down_subqcif_pane

0x733e,	// (0x00065f4d) video_down_subqcif_pane_cp_ParamLimits

0x733e,	// (0x00065f4d) video_down_subqcif_pane_cp

0x7362,	// (0x00065f71) im_reading_pane_ParamLimits

0x7362,	// (0x00065f71) im_reading_pane

0x7374,	// (0x00065f83) im_writing_pane_ParamLimits

0x7374,	// (0x00065f83) im_writing_pane

0x739a,	// (0x00065fa9) im_reading_pane_t1

0x73ee,	// (0x00065ffd) list_im_pane

0x73ff,	// (0x0006600e) scroll_pane_cp07

0x7418,	// (0x00066027) im_writing_pane_t1_ParamLimits

0x7418,	// (0x00066027) im_writing_pane_t1

0x742d,	// (0x0006603c) im_writing_pane_t2_ParamLimits

0x742d,	// (0x0006603c) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0006dee9) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0006dee9) im_writing_pane_t

0x09bc,	// (0x0005f5cb) input_focus_pane_cp04

0x09bc,	// (0x0005f5cb) input_focus_pane_cp05

0x744a,	// (0x00066059) list_im_single_pane_ParamLimits

0x744a,	// (0x00066059) list_im_single_pane

0x746e,	// (0x0006607d) list_single_im_pane_t1

0xa0e4,	// (0x00068cf3) blid_accuracy_pane

0xa0ec,	// (0x00068cfb) blid_compass_pane

0xa0f6,	// (0x00068d05) main_location_t1

0xa104,	// (0x00068d13) main_location_t2

0xa112,	// (0x00068d21) main_location_t3

0x0002,

0xf641,	// (0x0006e250) main_location_t

0x09bc,	// (0x0005f5cb) aid_levels_location

0x65c8,	// (0x000651d7) blid_accuracy_pane_g1

0x65c8,	// (0x000651d7) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0006df4b) blid_accuracy_pane_g

0x74a8,	// (0x000660b7) wml_content_pane

0x74e6,	// (0x000660f5) wml_button_pane_ParamLimits

0x74e6,	// (0x000660f5) wml_button_pane

0x74fa,	// (0x00066109) wml_list_single_large_pane_ParamLimits

0x74fa,	// (0x00066109) wml_list_single_large_pane

0x7524,	// (0x00066133) wml_list_single_medium_pane_ParamLimits

0x7524,	// (0x00066133) wml_list_single_medium_pane

0x7555,	// (0x00066164) wml_list_single_small_pane_ParamLimits

0x7555,	// (0x00066164) wml_list_single_small_pane

0x758f,	// (0x0006619e) wml_selection_box_pane_ParamLimits

0x758f,	// (0x0006619e) wml_selection_box_pane

0x75a2,	// (0x000661b1) wml_list_single_pane_t1

0x75b1,	// (0x000661c0) wml_list_single_medium_pane_t1

0x75c0,	// (0x000661cf) wml_list_single_large_pane_t1

0x75cf,	// (0x000661de) input_focus_pane_cp02_ParamLimits

0x75cf,	// (0x000661de) input_focus_pane_cp02

0x75e2,	// (0x000661f1) wml_selection_box_pane_g1

0x75eb,	// (0x000661fa) wml_selection_box_pane_t1_ParamLimits

0x75eb,	// (0x000661fa) wml_selection_box_pane_t1

0x60ea,	// (0x00064cf9) bg_wml_button_pane_ParamLimits

0x60ea,	// (0x00064cf9) bg_wml_button_pane

0x7603,	// (0x00066212) wml_button_pane_g1

0x760b,	// (0x0006621a) wml_button_pane_t1

0x7603,	// (0x00066212) wml_button_bg_pane_g1

0x761b,	// (0x0006622a) wml_button_bg_pane_g2

0x7623,	// (0x00066232) wml_button_bg_pane_g3

0x762b,	// (0x0006623a) wml_button_bg_pane_g4

0x7633,	// (0x00066242) wml_button_bg_pane_g5

0x763b,	// (0x0006624a) wml_button_bg_pane_g6

0x7643,	// (0x00066252) wml_button_bg_pane_g7

0x764b,	// (0x0006625a) wml_button_bg_pane_g8

0x7653,	// (0x00066262) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0006deee) wml_button_bg_pane_g

0x765b,	// (0x0006626a) bg_list_pane_cp02

0x7665,	// (0x00066274) mce_header_pane_ParamLimits

0x7665,	// (0x00066274) mce_header_pane

0x767b,	// (0x0006628a) mce_icon_pane

0x767b,	// (0x0006628a) mce_image_pane

0x7684,	// (0x00066293) mce_text_pane_ParamLimits

0x7684,	// (0x00066293) mce_text_pane

0x7697,	// (0x000662a6) scroll_pane_cp03

0x74de,	// (0x000660ed) scroll_pane_cp04

0x76a1,	// (0x000662b0) scroll_pane_cp05_ParamLimits

0x76a1,	// (0x000662b0) scroll_pane_cp05

0x76ad,	// (0x000662bc) mce_header_field_pane_ParamLimits

0x76ad,	// (0x000662bc) mce_header_field_pane

0x76cd,	// (0x000662dc) mce_header_field_pane_2_ParamLimits

0x76cd,	// (0x000662dc) mce_header_field_pane_2

0x76e3,	// (0x000662f2) mce_header_field_pane_3

0x76eb,	// (0x000662fa) list_single_mce_message_pane_ParamLimits

0x76eb,	// (0x000662fa) list_single_mce_message_pane

0x7710,	// (0x0006631f) list_single_mce_smart_pane_ParamLimits

0x7710,	// (0x0006631f) list_single_mce_smart_pane

0x7740,	// (0x0006634f) input_focus_pane_cp03

0x7749,	// (0x00066358) list_header_data_pane

0x7751,	// (0x00066360) mce_header_field_pane_t1

0x775f,	// (0x0006636e) list_single_mce_header_pane_ParamLimits

0x775f,	// (0x0006636e) list_single_mce_header_pane

0x7785,	// (0x00066394) list_single_mce_header_pane_t1

0x7794,	// (0x000663a3) list_single_mce_message_pane_g1

0x779c,	// (0x000663ab) list_single_mce_message_pane_t1

0x77c8,	// (0x000663d7) bg_cale_heading_pane_cp01_ParamLimits

0x77c8,	// (0x000663d7) bg_cale_heading_pane_cp01

0x77eb,	// (0x000663fa) bg_cale_pane_cp02_ParamLimits

0x77eb,	// (0x000663fa) bg_cale_pane_cp02

0x780e,	// (0x0006641d) cale_month_corner_pane

0x7824,	// (0x00066433) cale_month_day_heading_pane_ParamLimits

0x7824,	// (0x00066433) cale_month_day_heading_pane

0x7857,	// (0x00066466) cale_month_pane_g1_ParamLimits

0x7857,	// (0x00066466) cale_month_pane_g1

0x7873,	// (0x00066482) cale_month_pane_g2_ParamLimits

0x7873,	// (0x00066482) cale_month_pane_g2

0x788e,	// (0x0006649d) cale_month_pane_g3_ParamLimits

0x788e,	// (0x0006649d) cale_month_pane_g3

0x78ba,	// (0x000664c9) cale_month_pane_g4_ParamLimits

0x78ba,	// (0x000664c9) cale_month_pane_g4

0x78e6,	// (0x000664f5) cale_month_pane_g5_ParamLimits

0x78e6,	// (0x000664f5) cale_month_pane_g5

0x7912,	// (0x00066521) cale_month_pane_g6_ParamLimits

0x7912,	// (0x00066521) cale_month_pane_g6

0x793e,	// (0x0006654d) cale_month_pane_g7_ParamLimits

0x793e,	// (0x0006654d) cale_month_pane_g7

0x797a,	// (0x00066589) cale_month_pane_g8_ParamLimits

0x797a,	// (0x00066589) cale_month_pane_g8

0x79b6,	// (0x000665c5) cale_month_pane_g9_ParamLimits

0x79b6,	// (0x000665c5) cale_month_pane_g9

0x79f0,	// (0x000665ff) cale_month_pane_g10_ParamLimits

0x79f0,	// (0x000665ff) cale_month_pane_g10

0x7a2a,	// (0x00066639) cale_month_pane_g11_ParamLimits

0x7a2a,	// (0x00066639) cale_month_pane_g11

0x7a64,	// (0x00066673) cale_month_pane_g12_ParamLimits

0x7a64,	// (0x00066673) cale_month_pane_g12

0x7a9e,	// (0x000666ad) cale_month_pane_g13_ParamLimits

0x7a9e,	// (0x000666ad) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0006df01) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0006df01) cale_month_pane_g

0x7aea,	// (0x000666f9) cale_month_week_pane

0x7afd,	// (0x0006670c) grid_cale_month_pane_ParamLimits

0x7afd,	// (0x0006670c) grid_cale_month_pane

0x7b2b,	// (0x0006673a) cale_month_day_heading_pane_t1

0x7b89,	// (0x00066798) cale_month_day_heading_pane_t2

0x7bee,	// (0x000667fd) cale_month_day_heading_pane_t3

0x7c53,	// (0x00066862) cale_month_day_heading_pane_t4

0x7cb8,	// (0x000668c7) cale_month_day_heading_pane_t5

0x7d1d,	// (0x0006692c) cale_month_day_heading_pane_t6

0x7d82,	// (0x00066991) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0006df1c) cale_month_day_heading_pane_t

0x6b12,	// (0x00065721) bg_cale_side_pane_cp01

0x7df7,	// (0x00066a06) cale_month_week_pane_t1

0x7e0e,	// (0x00066a1d) cale_month_week_pane_t2

0x7e25,	// (0x00066a34) cale_month_week_pane_t3

0x7e3c,	// (0x00066a4b) cale_month_week_pane_t4

0x7e53,	// (0x00066a62) cale_month_week_pane_t5

0x7e6a,	// (0x00066a79) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0006df2b) cale_month_week_pane_t

0x7e81,	// (0x00066a90) cell_cale_month_pane_ParamLimits

0x7e81,	// (0x00066a90) cell_cale_month_pane

0x7f37,	// (0x00066b46) cell_cale_month_pane_g1

0x7f43,	// (0x00066b52) cell_cale_month_pane_t1_ParamLimits

0x7f43,	// (0x00066b52) cell_cale_month_pane_t1

0x6c11,	// (0x00065820) grid_highlight_pane_cp08

0x65c8,	// (0x000651d7) main_smil_g1

0x7f5f,	// (0x00066b6e) smil_status_pane

0x7f6a,	// (0x00066b79) smil_text_pane

0x0e88,	// (0x0005fa97) bg_popup_call3_rect_pane_g8

0x0e90,	// (0x0005fa9f) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0006e1e4) bg_popup_call3_rect_pane_g

0x111d,	// (0x0005fd2c) smil_status_volume_pane_g1

0x7f7c,	// (0x00066b8b) smil_status_pane_t1

0xa4ca,	// (0x000690d9) volume_smil_pane

0x7f93,	// (0x00066ba2) list_smil_text_pane

0x7f9d,	// (0x00066bac) scroll_pane_cp011

0x7fa8,	// (0x00066bb7) smil_text_list_pane_t1_ParamLimits

0x7fa8,	// (0x00066bb7) smil_text_list_pane_t1

0x8020,	// (0x00066c2f) aid_volume_smil_ParamLimits

0x8020,	// (0x00066c2f) aid_volume_smil

0x65c8,	// (0x000651d7) smil_volume_pane_g1

0x65c8,	// (0x000651d7) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0006df4b) smil_volume_pane_g

0x646d,	// (0x0006507c) listscroll_cale_day_pane

0x8042,	// (0x00066c51) bg_cale_pane

0x805a,	// (0x00066c69) list_cale_pane

0x806b,	// (0x00066c7a) scroll_pane_cp09

0x807c,	// (0x00066c8b) cale_bg_pane_g1

0x8084,	// (0x00066c93) cale_bg_pane_g2

0x808c,	// (0x00066c9b) cale_bg_pane_g3

0x8094,	// (0x00066ca3) cale_bg_pane_g4

0x809c,	// (0x00066cab) cale_bg_pane_g5

0x80a4,	// (0x00066cb3) cale_bg_pane_g6

0x80ac,	// (0x00066cbb) cale_bg_pane_g7

0x80b4,	// (0x00066cc3) cale_bg_pane_g8

0x80bc,	// (0x00066ccb) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0006df50) cale_bg_pane_g

0x80c4,	// (0x00066cd3) list_cale_time_pane_ParamLimits

0x80c4,	// (0x00066cd3) list_cale_time_pane

0x80e0,	// (0x00066cef) list_cale_time_pane_g1_ParamLimits

0x80e0,	// (0x00066cef) list_cale_time_pane_g1

0x80ec,	// (0x00066cfb) list_cale_time_pane_g2_ParamLimits

0x80ec,	// (0x00066cfb) list_cale_time_pane_g2

0x80f9,	// (0x00066d08) list_cale_time_pane_g3_ParamLimits

0x80f9,	// (0x00066d08) list_cale_time_pane_g3

0x8107,	// (0x00066d16) list_cale_time_pane_g4_ParamLimits

0x8107,	// (0x00066d16) list_cale_time_pane_g4

0x8115,	// (0x00066d24) list_cale_time_pane_g5_ParamLimits

0x8115,	// (0x00066d24) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0006df63) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0006df63) list_cale_time_pane_g

0x8130,	// (0x00066d3f) list_cale_time_pane_t1_ParamLimits

0x8130,	// (0x00066d3f) list_cale_time_pane_t1

0x8158,	// (0x00066d67) list_cale_time_pane_t2_ParamLimits

0x8158,	// (0x00066d67) list_cale_time_pane_t2

0x8859,	// (0x00067468) aid_blid_cardinal_pane

0x88a7,	// (0x000674b6) compass_pane_t4

0x8180,	// (0x00066d8f) list_cale_time_pane_t4_ParamLimits

0x8180,	// (0x00066d8f) list_cale_time_pane_t4

0x88b5,	// (0x000674c4) compass_pane_t5

0x88c5,	// (0x000674d4) compass_pane_t6

0x88d3,	// (0x000674e2) compass_pane_t7

0x8955,	// (0x00067564) navi_pane_cc_t1

0x8b70,	// (0x0006777f) aid_phob_thumbnail_center_pane

0x91fe,	// (0x00067e0d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0006df70) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0006df70) list_cale_time_pane_t

0x0613,	// (0x0005f222) bg_popup_window_pane_cp02_ParamLimits

0x0613,	// (0x0005f222) bg_popup_window_pane_cp02

0x81a8,	// (0x00066db7) heading_pane_cp01_ParamLimits

0x81a8,	// (0x00066db7) heading_pane_cp01

0x81b4,	// (0x00066dc3) loc_req_pane_ParamLimits

0x81b4,	// (0x00066dc3) loc_req_pane

0x81c4,	// (0x00066dd3) loc_type_pane_ParamLimits

0x81c4,	// (0x00066dd3) loc_type_pane

0x81d6,	// (0x00066de5) loc_type_pane_t1_ParamLimits

0x81d6,	// (0x00066de5) loc_type_pane_t1

0x81e8,	// (0x00066df7) loc_type_pane_t2_ParamLimits

0x81e8,	// (0x00066df7) loc_type_pane_t2

0x81fa,	// (0x00066e09) loc_type_pane_t3_ParamLimits

0x81fa,	// (0x00066e09) loc_type_pane_t3

0x0002,

0xf368,	// (0x0006df77) loc_type_pane_t_ParamLimits

0xf368,	// (0x0006df77) loc_type_pane_t

0x820c,	// (0x00066e1b) list_loc_req_pane

0x8216,	// (0x00066e25) scroll_pane_cp012

0x8221,	// (0x00066e30) list_single_loc_request_popup_menu_pane_ParamLimits

0x8221,	// (0x00066e30) list_single_loc_request_popup_menu_pane

0x8233,	// (0x00066e42) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x8233,	// (0x00066e42) list_single_loc_request_popup_menu_pane_g1

0x823f,	// (0x00066e4e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x823f,	// (0x00066e4e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0006df7e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0006df7e) list_single_loc_request_popup_menu_pane_g

0x824b,	// (0x00066e5a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x824b,	// (0x00066e5a) list_single_loc_request_popup_menu_pane_t1

0x8261,	// (0x00066e70) bg_popup_window_pane_cp03_ParamLimits

0x8261,	// (0x00066e70) bg_popup_window_pane_cp03

0x826f,	// (0x00066e7e) heading_loc_req_pane_ParamLimits

0x826f,	// (0x00066e7e) heading_loc_req_pane

0x827b,	// (0x00066e8a) popup_dyc_status_message_window_g1_ParamLimits

0x827b,	// (0x00066e8a) popup_dyc_status_message_window_g1

0x8287,	// (0x00066e96) popup_dyc_status_message_window_t1_ParamLimits

0x8287,	// (0x00066e96) popup_dyc_status_message_window_t1

0x8299,	// (0x00066ea8) popup_dyc_status_message_window_t2_ParamLimits

0x8299,	// (0x00066ea8) popup_dyc_status_message_window_t2

0x82ab,	// (0x00066eba) popup_dyc_status_message_window_t3_ParamLimits

0x82ab,	// (0x00066eba) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0006df83) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0006df83) popup_dyc_status_message_window_t

0x09bc,	// (0x0005f5cb) bg_heading_pane_cp01

0x82bd,	// (0x00066ecc) heading_loc_req_pane_g1

0x82c5,	// (0x00066ed4) heading_loc_req_pane_g2

0x82cd,	// (0x00066edc) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0006df8a) heading_loc_req_pane_g

0x82d5,	// (0x00066ee4) heading_loc_req_pane_t1

0x82fc,	// (0x00066f0b) bg_popup_sub_pane_cp01_ParamLimits

0x82fc,	// (0x00066f0b) bg_popup_sub_pane_cp01

0x830a,	// (0x00066f19) popup_cale_events_window_g1_ParamLimits

0x830a,	// (0x00066f19) popup_cale_events_window_g1

0x832a,	// (0x00066f39) popup_cale_events_window_g2_ParamLimits

0x832a,	// (0x00066f39) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0006dfbe) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0006dfbe) popup_cale_events_window_g

0x834a,	// (0x00066f59) popup_cale_events_window_t1_ParamLimits

0x834a,	// (0x00066f59) popup_cale_events_window_t1

0x835c,	// (0x00066f6b) popup_cale_events_window_t2_ParamLimits

0x835c,	// (0x00066f6b) popup_cale_events_window_t2

0x839a,	// (0x00066fa9) popup_cale_events_window_t3_ParamLimits

0x839a,	// (0x00066fa9) popup_cale_events_window_t3

0x83d4,	// (0x00066fe3) popup_cale_events_window_t4_ParamLimits

0x83d4,	// (0x00066fe3) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0006dfc3) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0006dfc3) popup_cale_events_window_t

0x840a,	// (0x00067019) call_type_pane

0x8416,	// (0x00067025) popup_call_status_window_g1

0x8424,	// (0x00067033) popup_call_status_window_g2

0x8430,	// (0x0006703f) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0006dfcc) popup_call_status_window_g

0x843c,	// (0x0006704b) call_type_pane_g1

0x8445,	// (0x00067054) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0006dfd3) call_type_pane_g

0x09bc,	// (0x0005f5cb) bg_popup_sub_pane_cp02

0x844e,	// (0x0006705d) listscroll_popup_wml_pane

0x8456,	// (0x00067065) list_wml_pane

0x8460,	// (0x0006706f) scroll_pane_cp013

0x846b,	// (0x0006707a) list_single_graphic_popup_wml_pane_ParamLimits

0x846b,	// (0x0006707a) list_single_graphic_popup_wml_pane

0x65c8,	// (0x000651d7) list_single_graphic_popup_wml_pane_g1

0x847f,	// (0x0006708e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0006dfd8) list_single_graphic_popup_wml_pane_g

0x8487,	// (0x00067096) list_single_graphic_popup_wml_pane_t1

0x849d,	// (0x000670ac) aid_call_pane

0x0c0f,	// (0x0005f81e) popup_clock_analogue_window_g1

0x0c0f,	// (0x0005f81e) popup_clock_analogue_window_g2

0x84a5,	// (0x000670b4) popup_clock_analogue_window_g3

0x84a5,	// (0x000670b4) popup_clock_analogue_window_g4

0x65c8,	// (0x000651d7) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0006dfdd) popup_clock_analogue_window_g

0x84ad,	// (0x000670bc) popup_clock_analogue_window_t1

0x84bb,	// (0x000670ca) clock_digital_number_pane_ParamLimits

0x84bb,	// (0x000670ca) clock_digital_number_pane

0x84c7,	// (0x000670d6) clock_digital_number_pane_cp02_ParamLimits

0x84c7,	// (0x000670d6) clock_digital_number_pane_cp02

0x84d3,	// (0x000670e2) clock_digital_number_pane_cp03_ParamLimits

0x84d3,	// (0x000670e2) clock_digital_number_pane_cp03

0x84df,	// (0x000670ee) clock_digital_number_pane_cp04_ParamLimits

0x84df,	// (0x000670ee) clock_digital_number_pane_cp04

0x84ef,	// (0x000670fe) clock_digital_separator_pane_ParamLimits

0x84ef,	// (0x000670fe) clock_digital_separator_pane

0x84fb,	// (0x0006710a) popup_clock_digital_window_t1

0x65c8,	// (0x000651d7) clock_digital_number_pane_g1

0x65c8,	// (0x000651d7) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0006df4b) clock_digital_number_pane_g

0x65c8,	// (0x000651d7) clock_digital_separator_pane_g1

0x65c8,	// (0x000651d7) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0006df4b) clock_digital_separator_pane_g

0x09bc,	// (0x0005f5cb) bg_popup_window_pane_cp04

0x8518,	// (0x00067127) heading_pane_cp03

0x8520,	// (0x0006712f) listscroll_popup_gms_pane

0x8528,	// (0x00067137) grid_large_graphic_popup_pane

0x8532,	// (0x00067141) listscroll_popup_gms_pane_g1

0x853a,	// (0x00067149) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0006dfe8) listscroll_popup_gms_pane_g

0x74de,	// (0x000660ed) scroll_pane_cp014

0x8542,	// (0x00067151) cell_large_graphic_popup_pane_ParamLimits

0x8542,	// (0x00067151) cell_large_graphic_popup_pane

0x855a,	// (0x00067169) cell_large_graphic_popup_pane_g1_ParamLimits

0x855a,	// (0x00067169) cell_large_graphic_popup_pane_g1

0x8566,	// (0x00067175) cell_large_graphic_popup_pane_g2_ParamLimits

0x8566,	// (0x00067175) cell_large_graphic_popup_pane_g2

0x8572,	// (0x00067181) cell_large_graphic_popup_pane_g3_ParamLimits

0x8572,	// (0x00067181) cell_large_graphic_popup_pane_g3

0x857f,	// (0x0006718e) cell_large_graphic_popup_pane_g4_ParamLimits

0x857f,	// (0x0006718e) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0006dfed) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0006dfed) cell_large_graphic_popup_pane_g

0x858f,	// (0x0006719e) grid_highlight_pane_cp010

0x65c8,	// (0x000651d7) bg_popup_call_pane_g1

0x8599,	// (0x000671a8) list_single_graphic_popup_conf_pane_ParamLimits

0x8599,	// (0x000671a8) list_single_graphic_popup_conf_pane

0x85ac,	// (0x000671bb) list_highlight_pane_cp01

0x85b5,	// (0x000671c4) list_single_graphic_popup_conf_pane_g1

0x85bd,	// (0x000671cc) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0006dff6) list_single_graphic_popup_conf_pane_g

0x85c5,	// (0x000671d4) list_single_graphic_popup_conf_pane_t1

0x85d3,	// (0x000671e2) linegrid_cams_pane_g1

0x85dc,	// (0x000671eb) linegrid_cams_pane_g2

0x6c6a,	// (0x00065879) linegrid_cams_pane_g3

0x85e5,	// (0x000671f4) linegrid_cams_pane_g4

0x85ee,	// (0x000671fd) linegrid_cams_pane_g5

0x85f7,	// (0x00067206) linegrid_cams_pane_g6

0x6c73,	// (0x00065882) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0006dffb) linegrid_cams_pane_g

0x8600,	// (0x0006720f) popup_clock_analogue_window

0x8600,	// (0x0006720f) popup_clock_digital_window

0x09bc,	// (0x0005f5cb) popup_phob_thumbnail_window

0x65c8,	// (0x000651d7) call_video_uplink_pane_g1

0x8609,	// (0x00067218) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0006e00a) call_video_uplink_pane_g

0x8611,	// (0x00067220) video_uplink_pane

0x8619,	// (0x00067228) mce_image_pane_g1

0x8623,	// (0x00067232) mce_image_pane_g2

0x862d,	// (0x0006723c) mce_image_pane_g3

0x8635,	// (0x00067244) mce_image_pane_g4

0x863d,	// (0x0006724c) mce_image_pane_g5

0x0004,

0xf400,	// (0x0006e00f) mce_image_pane_g

0x8645,	// (0x00067254) control_top_pane_stacon_cp01_ParamLimits

0x8645,	// (0x00067254) control_top_pane_stacon_cp01

0x8659,	// (0x00067268) uni_indicator_pane_stacon_cp01_ParamLimits

0x8659,	// (0x00067268) uni_indicator_pane_stacon_cp01

0x866a,	// (0x00067279) bg_popup_sub_pane_cp03

0x8674,	// (0x00067283) chi_dic_find_pane

0x867c,	// (0x0006728b) listscroll_chi_dic_pane

0x8685,	// (0x00067294) main_pane_chidic_g1

0x8698,	// (0x000672a7) chi_dic_find_pane_t1

0x86a6,	// (0x000672b5) find_chidic_pane

0x86af,	// (0x000672be) chi_dic_list_pane_ParamLimits

0x86af,	// (0x000672be) chi_dic_list_pane

0x86c0,	// (0x000672cf) scroll_pane_cp020

0x86c8,	// (0x000672d7) find_chidic_pane_t1

0x09bc,	// (0x0005f5cb) input_focus_pane_cp06

0x86d7,	// (0x000672e6) list_chi_dic_pane_ParamLimits

0x86d7,	// (0x000672e6) list_chi_dic_pane

0x86f1,	// (0x00067300) list_chi_dic_pane_t1_ParamLimits

0x86f1,	// (0x00067300) list_chi_dic_pane_t1

0x09bc,	// (0x0005f5cb) list_highlight_pane_cp020

0x8704,	// (0x00067313) bg_cale_heading_pane_g1

0x870c,	// (0x0006731b) bg_cale_heading_pane_g2

0x8714,	// (0x00067323) bg_cale_heading_pane_g3

0x871c,	// (0x0006732b) bg_cale_heading_pane_g4

0x8726,	// (0x00067335) bg_cale_heading_pane_g5

0x8730,	// (0x0006733f) bg_cale_heading_pane_g6

0x8738,	// (0x00067347) bg_cale_heading_pane_g7

0x8740,	// (0x0006734f) bg_cale_heading_pane_g8

0x874a,	// (0x00067359) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0006e01a) bg_cale_heading_pane_g

0x8704,	// (0x00067313) bg_cale_side_pane_g1

0x8754,	// (0x00067363) bg_cale_side_pane_g2

0x875c,	// (0x0006736b) bg_cale_side_pane_g3

0x8764,	// (0x00067373) bg_cale_side_pane_g4

0x876c,	// (0x0006737b) bg_cale_side_pane_g5

0x8774,	// (0x00067383) bg_cale_side_pane_g6

0x877c,	// (0x0006738b) bg_cale_side_pane_g7

0x8784,	// (0x00067393) bg_cale_side_pane_g8

0x878c,	// (0x0006739b) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0006e02d) bg_cale_side_pane_g

0x8794,	// (0x000673a3) popup_call_status_window_ParamLimits

0x8794,	// (0x000673a3) popup_call_status_window

0x87a0,	// (0x000673af) stacon_top_pane

0x87a8,	// (0x000673b7) status_pane_ParamLimits

0x87a8,	// (0x000673b7) status_pane

0x87bd,	// (0x000673cc) status_small_pane

0x87c5,	// (0x000673d4) control_pane

0x09bc,	// (0x0005f5cb) stacon_bottom_pane

0x87cd,	// (0x000673dc) list_single_mce_smart_pane_t1_ParamLimits

0x87cd,	// (0x000673dc) list_single_mce_smart_pane_t1

0x87e0,	// (0x000673ef) list_single_mce_smart_pane_t2_ParamLimits

0x87e0,	// (0x000673ef) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0006e040) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0006e040) list_single_mce_smart_pane_t

0x87ff,	// (0x0006740e) compass_pane

0x880b,	// (0x0006741a) main_location2_pane_t1

0x881f,	// (0x0006742e) main_location2_pane_t2

0x8833,	// (0x00067442) main_location2_pane_t3

0x0003,

0xf436,	// (0x0006e045) main_location2_pane_t

0x887d,	// (0x0006748c) compass_pane_g1_ParamLimits

0x887d,	// (0x0006748c) compass_pane_g1

0x8889,	// (0x00067498) compass_pane_t1

0x8898,	// (0x000674a7) compass_pane_t2

0x0005,

0xf43f,	// (0x0006e04e) compass_pane_t

0x88e3,	// (0x000674f2) text_secondary_cp61

0x894c,	// (0x0006755b) navi_pane_cams_g5

0x89c8,	// (0x000675d7) navi_pane_im_t1

0x89d6,	// (0x000675e5) navi_pane_mp_g1_ParamLimits

0x89d6,	// (0x000675e5) navi_pane_mp_g1

0x89ea,	// (0x000675f9) navi_pane_mp_g2_ParamLimits

0x89ea,	// (0x000675f9) navi_pane_mp_g2

0x89f6,	// (0x00067605) navi_pane_mp_g3_ParamLimits

0x89f6,	// (0x00067605) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0006e062) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0006e062) navi_pane_mp_g

0x8a02,	// (0x00067611) navi_pane_mp_t1

0x8a10,	// (0x0006761f) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0006e069) navi_pane_mp_t

0x8aa7,	// (0x000676b6) navi_pane_vt_g1

0x8a02,	// (0x00067611) navi_pane_vt_t1

0x8aaf,	// (0x000676be) navi_slider_pane

0x8ab7,	// (0x000676c6) zooming_pane

0x8abf,	// (0x000676ce) navi_slider_pane_g1

0x8ac8,	// (0x000676d7) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0006e070) navi_slider_pane_g

0x8af5,	// (0x00067704) aid_levels_zoom

0x8afd,	// (0x0006770c) zooming_pane_g1

0x8b05,	// (0x00067714) zooming_pane_g2

0x8b05,	// (0x00067714) zooming_pane_g3

0x0002,

0xf470,	// (0x0006e07f) zooming_pane_g

0x8b0d,	// (0x0006771c) level_10_zoom

0x8b16,	// (0x00067725) level_11_zoom

0x8b1f,	// (0x0006772e) level_1_zoom

0x8b28,	// (0x00067737) level_2_zoom

0x8b31,	// (0x00067740) level_3_zoom

0x8b3a,	// (0x00067749) level_4_zoom

0x8b43,	// (0x00067752) level_5_zoom

0x8b4c,	// (0x0006775b) level_6_zoom

0x8b55,	// (0x00067764) level_7_zoom

0x8b5e,	// (0x0006776d) level_8_zoom

0x8b67,	// (0x00067776) level_9_zoom

0x8b78,	// (0x00067787) popup_phob_thumbnail_window_g1

0x8b80,	// (0x0006778f) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0006e086) popup_phob_thumbnail_window_g

0x0fea,	// (0x0005fbf9) level_1_location

0x0ff2,	// (0x0005fc01) level_2_location

0x0ffa,	// (0x0005fc09) level_3_location

0x1002,	// (0x0005fc11) level_4_location

0x8ab7,	// (0x000676c6) level_5_location

0x8b88,	// (0x00067797) mce_icon_pane_g1

0x8b90,	// (0x0006779f) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0006e08b) mce_icon_pane_g

0x8b98,	// (0x000677a7) main_mup_pane_g1_ParamLimits

0x8b98,	// (0x000677a7) main_mup_pane_g1

0x8bb0,	// (0x000677bf) main_mup_pane_g2_ParamLimits

0x8bb0,	// (0x000677bf) main_mup_pane_g2

0x8bcc,	// (0x000677db) main_mup_pane_g3_ParamLimits

0x8bcc,	// (0x000677db) main_mup_pane_g3

0x8be8,	// (0x000677f7) main_mup_pane_g4_ParamLimits

0x8be8,	// (0x000677f7) main_mup_pane_g4

0x8c04,	// (0x00067813) main_mup_pane_g5_ParamLimits

0x8c04,	// (0x00067813) main_mup_pane_g5

0x8c25,	// (0x00067834) main_mup_pane_g6_ParamLimits

0x8c25,	// (0x00067834) main_mup_pane_g6

0x8c41,	// (0x00067850) main_mup_pane_g7_ParamLimits

0x8c41,	// (0x00067850) main_mup_pane_g7

0x8c5d,	// (0x0006786c) main_mup_pane_g8_ParamLimits

0x8c5d,	// (0x0006786c) main_mup_pane_g8

0x8c7d,	// (0x0006788c) main_mup_pane_g9_ParamLimits

0x8c7d,	// (0x0006788c) main_mup_pane_g9

0x8c9c,	// (0x000678ab) main_mup_pane_g10_ParamLimits

0x8c9c,	// (0x000678ab) main_mup_pane_g10

0x8cbb,	// (0x000678ca) main_mup_pane_g11_ParamLimits

0x8cbb,	// (0x000678ca) main_mup_pane_g11

0x8cd3,	// (0x000678e2) main_mup_pane_g12_ParamLimits

0x8cd3,	// (0x000678e2) main_mup_pane_g12

0x8ce1,	// (0x000678f0) main_mup_pane_g13_ParamLimits

0x8ce1,	// (0x000678f0) main_mup_pane_g13

0x000c,

0xf481,	// (0x0006e090) main_mup_pane_g_ParamLimits

0xf481,	// (0x0006e090) main_mup_pane_g

0x8cf7,	// (0x00067906) main_mup_pane_t1_ParamLimits

0x8cf7,	// (0x00067906) main_mup_pane_t1

0x8d14,	// (0x00067923) main_mup_pane_t2_ParamLimits

0x8d14,	// (0x00067923) main_mup_pane_t2

0x8d2e,	// (0x0006793d) main_mup_pane_t3_ParamLimits

0x8d2e,	// (0x0006793d) main_mup_pane_t3

0x8d48,	// (0x00067957) main_mup_pane_t4_ParamLimits

0x8d48,	// (0x00067957) main_mup_pane_t4

0x8d5a,	// (0x00067969) main_mup_pane_t5_ParamLimits

0x8d5a,	// (0x00067969) main_mup_pane_t5

0x8d6c,	// (0x0006797b) main_mup_pane_t6_ParamLimits

0x8d6c,	// (0x0006797b) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0006e0ab) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0006e0ab) main_mup_pane_t

0x8d82,	// (0x00067991) mup_progress_pane_ParamLimits

0x8d82,	// (0x00067991) mup_progress_pane

0x8d8e,	// (0x0006799d) mup_visualizer_pane_ParamLimits

0x8d8e,	// (0x0006799d) mup_visualizer_pane

0x8dc8,	// (0x000679d7) mup_volume_pane_ParamLimits

0x8dc8,	// (0x000679d7) mup_volume_pane

0x8416,	// (0x00067025) mup_visualizer_pane_g1_ParamLimits

0x8416,	// (0x00067025) mup_visualizer_pane_g1

0x8416,	// (0x00067025) mup_visualizer_pane_g2_ParamLimits

0x8416,	// (0x00067025) mup_visualizer_pane_g2

0x887d,	// (0x0006748c) mup_visualizer_pane_g3_ParamLimits

0x887d,	// (0x0006748c) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0006e0b8) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0006e0b8) mup_visualizer_pane_g

0x65c8,	// (0x000651d7) mup_volume_pane_g1

0x8df3,	// (0x00067a02) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0006e0bf) mup_volume_pane_g

0x65c8,	// (0x000651d7) mup_progress_pane_g1

0x8dfc,	// (0x00067a0b) mup_progress_pane_g2

0x8e05,	// (0x00067a14) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0006e0c4) mup_progress_pane_g

0x09bc,	// (0x0005f5cb) bg_popup_window_pane_cp05

0x8e0e,	// (0x00067a1d) heading_pane_cp02_ParamLimits

0x8e0e,	// (0x00067a1d) heading_pane_cp02

0x8e28,	// (0x00067a37) list_popup_blid_pane

0x8e30,	// (0x00067a3f) list_blid_sat_info_pane_ParamLimits

0x8e30,	// (0x00067a3f) list_blid_sat_info_pane

0x8e43,	// (0x00067a52) list_blid_sat_info_pane_g1

0x8e4b,	// (0x00067a5a) list_blid_sat_info_pane_t1

0x8f43,	// (0x00067b52) mup_equalizer_pane_ParamLimits

0x8f43,	// (0x00067b52) mup_equalizer_pane

0x8f64,	// (0x00067b73) mup_equalizer_pane_cp1_ParamLimits

0x8f64,	// (0x00067b73) mup_equalizer_pane_cp1

0x8f85,	// (0x00067b94) mup_equalizer_pane_cp2_ParamLimits

0x8f85,	// (0x00067b94) mup_equalizer_pane_cp2

0x8fa6,	// (0x00067bb5) mup_equalizer_pane_cp3_ParamLimits

0x8fa6,	// (0x00067bb5) mup_equalizer_pane_cp3

0x8fc7,	// (0x00067bd6) mup_equalizer_pane_cp4_ParamLimits

0x8fc7,	// (0x00067bd6) mup_equalizer_pane_cp4

0x8fe8,	// (0x00067bf7) mup_equalizer_pane_cp5

0x8ffe,	// (0x00067c0d) mup_equalizer_pane_cp6

0x9016,	// (0x00067c25) mup_equalizer_pane_cp7

0x0f08,	// (0x0005fb17) bg_popup_call_poc_act_pane_g9

0x0f10,	// (0x0005fb1f) bg_popup_call_poc_act_pane_g10

0x0f18,	// (0x0005fb27) bg_popup_call_poc_act_pane_g11

0x000a,

0x60ea,	// (0x00064cf9) mup_scale_pane

0x65c8,	// (0x000651d7) mup_scale_pane_g1

0x902e,	// (0x00067c3d) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0006e0e0) mup_scale_pane_g

0x9064,	// (0x00067c73) msg_data_pane

0x906c,	// (0x00067c7b) scroll_pane_cp017

0x4ff5,	// (0x00063c04) bg_list_pane_cp04_ParamLimits

0x4ff5,	// (0x00063c04) bg_list_pane_cp04

0x9074,	// (0x00067c83) msg_data_pane_g1

0x907c,	// (0x00067c8b) msg_data_pane_g2

0x9086,	// (0x00067c95) msg_data_pane_g3

0x908e,	// (0x00067c9d) msg_data_pane_g4

0x9096,	// (0x00067ca5) msg_data_pane_g5

0x909e,	// (0x00067cad) msg_data_pane_g6

0x90a6,	// (0x00067cb5) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0006e0ef) msg_data_pane_g

0x501b,	// (0x00063c2a) msg_text_pane_ParamLimits

0x501b,	// (0x00063c2a) msg_text_pane

0x90ae,	// (0x00067cbd) qrid_highlight_pane_cp011_ParamLimits

0x90ae,	// (0x00067cbd) qrid_highlight_pane_cp011

0x09bc,	// (0x0005f5cb) msg_body_pane

0x09bc,	// (0x0005f5cb) msg_header_pane

0x90d1,	// (0x00067ce0) input_focus_pane_cp07

0x505e,	// (0x00063c6d) msg_header_pane_t1_ParamLimits

0x505e,	// (0x00063c6d) msg_header_pane_t1

0x5070,	// (0x00063c7f) msg_header_pane_t2_ParamLimits

0x5070,	// (0x00063c7f) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0006e103) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0006e103) msg_header_pane_t

0x90e6,	// (0x00067cf5) msg_body_pane_g1

0x5082,	// (0x00063c91) msg_body_pane_t1_ParamLimits

0x5082,	// (0x00063c91) msg_body_pane_t1

0x50b3,	// (0x00063cc2) msg_body_pane_t2_ParamLimits

0x50b3,	// (0x00063cc2) msg_body_pane_t2

0x50c5,	// (0x00063cd4) msg_body_pane_t3_ParamLimits

0x50c5,	// (0x00063cd4) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0006e108) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0006e108) msg_body_pane_t

0x9140,	// (0x00067d4f) main_viewer_pane_g1_ParamLimits

0x9140,	// (0x00067d4f) main_viewer_pane_g1

0x914c,	// (0x00067d5b) main_viewer_pane_g2_ParamLimits

0x914c,	// (0x00067d5b) main_viewer_pane_g2

0x9158,	// (0x00067d67) main_viewer_pane_g3_ParamLimits

0x9158,	// (0x00067d67) main_viewer_pane_g3

0x9169,	// (0x00067d78) main_viewer_pane_g4_ParamLimits

0x9169,	// (0x00067d78) main_viewer_pane_g4

0x917a,	// (0x00067d89) main_viewer_pane_g5_ParamLimits

0x917a,	// (0x00067d89) main_viewer_pane_g5

0x917a,	// (0x00067d89) main_viewer_pane_g7_ParamLimits

0x917a,	// (0x00067d89) main_viewer_pane_g7

0x918c,	// (0x00067d9b) main_viewer_pane_g8_ParamLimits

0x918c,	// (0x00067d9b) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0006e118) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0006e118) main_viewer_pane_g

0x91a4,	// (0x00067db3) viewer_content_pane_ParamLimits

0x91a4,	// (0x00067db3) viewer_content_pane

0x91d2,	// (0x00067de1) main_postcard_pane_g1_ParamLimits

0x91d2,	// (0x00067de1) main_postcard_pane_g1

0x91e0,	// (0x00067def) main_postcard_pane_g2_ParamLimits

0x91e0,	// (0x00067def) main_postcard_pane_g2

0x91ee,	// (0x00067dfd) main_postcard_pane_g3_ParamLimits

0x91ee,	// (0x00067dfd) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0006e129) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0006e129) main_postcard_pane_g

0x91fe,	// (0x00067e0d) main_postcard_pane_g4

0x110a,	// (0x0005fd19) smil_status_volume_pane_g2

0x922a,	// (0x00067e39) postcard_pane_ParamLimits

0x922a,	// (0x00067e39) postcard_pane

0x8416,	// (0x00067025) postcard_pane_g1_ParamLimits

0x8416,	// (0x00067025) postcard_pane_g1

0x925c,	// (0x00067e6b) postcard_pane_g2_ParamLimits

0x925c,	// (0x00067e6b) postcard_pane_g2

0x9268,	// (0x00067e77) postcard_pane_g3_ParamLimits

0x9268,	// (0x00067e77) postcard_pane_g3

0x9274,	// (0x00067e83) postcard_pane_g4_ParamLimits

0x9274,	// (0x00067e83) postcard_pane_g4

0x9282,	// (0x00067e91) postcard_pane_g5_ParamLimits

0x9282,	// (0x00067e91) postcard_pane_g5

0x928e,	// (0x00067e9d) postcard_pane_g6_ParamLimits

0x928e,	// (0x00067e9d) postcard_pane_g6

0x929a,	// (0x00067ea9) postcard_pane_g7_ParamLimits

0x929a,	// (0x00067ea9) postcard_pane_g7

0x0006,

0xf527,	// (0x0006e136) postcard_pane_g_ParamLimits

0xf527,	// (0x0006e136) postcard_pane_g

0x92a8,	// (0x00067eb7) main_mp2_pane_g1_ParamLimits

0x92a8,	// (0x00067eb7) main_mp2_pane_g1

0x92b4,	// (0x00067ec3) main_mp2_pane_g2_ParamLimits

0x92b4,	// (0x00067ec3) main_mp2_pane_g2

0x92c0,	// (0x00067ecf) main_mp2_pane_g3_ParamLimits

0x92c0,	// (0x00067ecf) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0006e145) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0006e145) main_mp2_pane_g

0x92cc,	// (0x00067edb) main_mp2_pane_t1_ParamLimits

0x92cc,	// (0x00067edb) main_mp2_pane_t1

0x92e3,	// (0x00067ef2) main_mp2_pane_t2_ParamLimits

0x92e3,	// (0x00067ef2) main_mp2_pane_t2

0x92f7,	// (0x00067f06) main_mp2_pane_t3_ParamLimits

0x92f7,	// (0x00067f06) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0006e14c) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0006e14c) main_mp2_pane_t

0x9309,	// (0x00067f18) pec_content_pane_ParamLimits

0x9309,	// (0x00067f18) pec_content_pane

0x74de,	// (0x000660ed) scroll_pane_cp015

0x931b,	// (0x00067f2a) pec_attribute_pane_ParamLimits

0x931b,	// (0x00067f2a) pec_attribute_pane

0x932b,	// (0x00067f3a) pec_content_pane_g1_ParamLimits

0x932b,	// (0x00067f3a) pec_content_pane_g1

0x9337,	// (0x00067f46) pec_content_pane_t1_ParamLimits

0x9337,	// (0x00067f46) pec_content_pane_t1

0x9349,	// (0x00067f58) pec_content_pane_t2_ParamLimits

0x9349,	// (0x00067f58) pec_content_pane_t2

0x0001,

0xf544,	// (0x0006e153) pec_content_pane_t_ParamLimits

0xf544,	// (0x0006e153) pec_content_pane_t

0x935b,	// (0x00067f6a) list_single_graphic_pane_cp01_ParamLimits

0x935b,	// (0x00067f6a) list_single_graphic_pane_cp01

0x60ea,	// (0x00064cf9) bg_popup_sub_pane_cp04

0x9383,	// (0x00067f92) popup_mup_playback_window_g1

0x938f,	// (0x00067f9e) popup_mup_playback_window_t1

0x93a4,	// (0x00067fb3) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0006e158) popup_mup_playback_window_t

0x93e8,	// (0x00067ff7) main_image_pane_g1_ParamLimits

0x93e8,	// (0x00067ff7) main_image_pane_g1

0x948f,	// (0x0006809e) scroll_pane_cp018_ParamLimits

0x948f,	// (0x0006809e) scroll_pane_cp018

0x94a7,	// (0x000680b6) scroll_pane_cp016_ParamLimits

0x94a7,	// (0x000680b6) scroll_pane_cp016

0x94db,	// (0x000680ea) smil2_image_pane_ParamLimits

0x94db,	// (0x000680ea) smil2_image_pane

0x950b,	// (0x0006811a) smil2_root_pane_ParamLimits

0x950b,	// (0x0006811a) smil2_root_pane

0x9537,	// (0x00068146) smil2_text_pane_ParamLimits

0x9537,	// (0x00068146) smil2_text_pane

0x09bc,	// (0x0005f5cb) bg_list_pane_cp06

0x957f,	// (0x0006818e) grid_radio_pane

0x09bc,	// (0x0005f5cb) bg_popup_window_pane_cp06

0x9587,	// (0x00068196) main_fmradio_pane_t1

0x8518,	// (0x00067127) heading_pane_cp04

0x9595,	// (0x000681a4) main_fmradio_pane_t2

0x0f20,	// (0x0005fb2f) popup_cale_lunar_info_window_g1

0x95a3,	// (0x000681b2) main_fmradio_pane_t3

0x0f28,	// (0x0005fb37) popup_cale_lunar_info_window_g2

0x95b1,	// (0x000681c0) main_fmradio_pane_t4

0x0001,

0x95bf,	// (0x000681ce) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0006e233) popup_cale_lunar_info_window_g

0xf55e,	// (0x0006e16d) main_fmradio_pane_t

0x95cd,	// (0x000681dc) wait_bar_pane_cp03

0x95d5,	// (0x000681e4) cell_fmradio_pane_ParamLimits

0x95d5,	// (0x000681e4) cell_fmradio_pane

0x929a,	// (0x00067ea9) cell_fmradio_pane_g1_ParamLimits

0x929a,	// (0x00067ea9) cell_fmradio_pane_g1

0x09bc,	// (0x0005f5cb) grid_highlight_pane_cp011

0x95e8,	// (0x000681f7) poc_content_pane_ParamLimits

0x95e8,	// (0x000681f7) poc_content_pane

0x95fa,	// (0x00068209) scroll_pane_cp019

0x9602,	// (0x00068211) popup_call_poc_act_window_ParamLimits

0x9602,	// (0x00068211) popup_call_poc_act_window

0x960f,	// (0x0006821e) popup_call_poc_inact_window_ParamLimits

0x960f,	// (0x0006821e) popup_call_poc_inact_window

0xf5fb,	// (0x0006e20a) bg_popup_call_poc_act_pane_g

0x0e98,	// (0x0005faa7) bg_popup_call_poc_inact_pane_g1

0x0ea0,	// (0x0005faaf) bg_popup_call_poc_inact_pane_g2

0x961c,	// (0x0006822b) popup_call_poc_act_window_g2

0x0ea8,	// (0x0005fab7) bg_popup_call_poc_inact_pane_g3

0x0eb0,	// (0x0005fabf) bg_popup_call_poc_inact_pane_g4

0x0eb8,	// (0x0005fac7) bg_popup_call_poc_inact_pane_g5

0x9624,	// (0x00068233) popup_call_poc_act_window_t1_ParamLimits

0x9624,	// (0x00068233) popup_call_poc_act_window_t1

0x964c,	// (0x0006825b) popup_call_poc_act_window_t2_ParamLimits

0x964c,	// (0x0006825b) popup_call_poc_act_window_t2

0x9674,	// (0x00068283) popup_call_poc_act_window_t3_ParamLimits

0x9674,	// (0x00068283) popup_call_poc_act_window_t3

0x969c,	// (0x000682ab) popup_call_poc_act_window_t4_ParamLimits

0x969c,	// (0x000682ab) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0006e178) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0006e178) popup_call_poc_act_window_t

0x0ec0,	// (0x0005facf) bg_popup_call_poc_inact_pane_g6

0x0ec8,	// (0x0005fad7) bg_popup_call_poc_inact_pane_g7

0x0ed0,	// (0x0005fadf) bg_popup_call_poc_inact_pane_g8

0x96ae,	// (0x000682bd) popup_call_poc_inact_window_g2

0x0ed8,	// (0x0005fae7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0006e1f7) bg_popup_call_poc_inact_pane_g

0x96b6,	// (0x000682c5) popup_call_poc_inact_window_t1_ParamLimits

0x96b6,	// (0x000682c5) popup_call_poc_inact_window_t1

0x96cb,	// (0x000682da) popup_call_poc_inact_window_t2_ParamLimits

0x96cb,	// (0x000682da) popup_call_poc_inact_window_t2

0x96e0,	// (0x000682ef) popup_call_poc_inact_window_t3_ParamLimits

0x96e0,	// (0x000682ef) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0006e181) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0006e181) popup_call_poc_inact_window_t

0x1090,	// (0x0005fc9f) context_pane_ParamLimits

0xa417,	// (0x00069026) signal_pane_ParamLimits

0x8ab7,	// (0x000676c6) main_call2_pane

0x107e,	// (0x0005fc8d) popup_phob_thumbnail2_window_ParamLimits

0x107e,	// (0x0005fc8d) popup_phob_thumbnail2_window

0x90ee,	// (0x00067cfd) aid_hotspot_pointer_arrow_pane

0x90f6,	// (0x00067d05) aid_hotspot_pointer_hand_pane

0xa149,	// (0x00068d58) phob_pre_status_pane_g5

0x6d2d,	// (0x0006593c) cams_zoom_pane_ParamLimits

0x6d39,	// (0x00065948) image_vga_pane_ParamLimits

0x6d48,	// (0x00065957) main_camera_pane_g1_ParamLimits

0x6d56,	// (0x00065965) main_camera_pane_g2_ParamLimits

0x6d62,	// (0x00065971) main_camera_pane_g3_ParamLimits

0x6d6e,	// (0x0006597d) main_camera_pane_g4_ParamLimits

0x6d7a,	// (0x00065989) main_camera_pane_g5_ParamLimits

0x6d86,	// (0x00065995) main_camera_pane_g6_ParamLimits

0x6d92,	// (0x000659a1) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0006de80) main_camera_pane_g_ParamLimits

0x6daa,	// (0x000659b9) main_camera_pane_t1_ParamLimits

0x6dbc,	// (0x000659cb) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0006de91) main_camera_pane_t_ParamLimits

0x60ea,	// (0x00064cf9) bg_popup_preview_window_pane_cp01_ParamLimits

0x60ea,	// (0x00064cf9) bg_popup_preview_window_pane_cp01

0x96f5,	// (0x00068304) popup_phob_thumbnail2_window_g1_ParamLimits

0x96f5,	// (0x00068304) popup_phob_thumbnail2_window_g1

0x09bc,	// (0x0005f5cb) call2_cli_visual_pane

0x9710,	// (0x0006831f) popup_call2_audio_conf_window_ParamLimits

0x9710,	// (0x0006831f) popup_call2_audio_conf_window

0x9725,	// (0x00068334) popup_call2_audio_first_window_ParamLimits

0x9725,	// (0x00068334) popup_call2_audio_first_window

0x97c3,	// (0x000683d2) popup_call2_audio_in_window_ParamLimits

0x97c3,	// (0x000683d2) popup_call2_audio_in_window

0x9805,	// (0x00068414) popup_call2_audio_out_window_ParamLimits

0x9805,	// (0x00068414) popup_call2_audio_out_window

0x9867,	// (0x00068476) popup_call2_audio_second_window_ParamLimits

0x9867,	// (0x00068476) popup_call2_audio_second_window

0x98c5,	// (0x000684d4) popup_call2_audio_wait_window_ParamLimits

0x98c5,	// (0x000684d4) popup_call2_audio_wait_window

0x09bc,	// (0x0005f5cb) bg_popup_call2_act_pane_cp03

0x0bf9,	// (0x0005f808) list_conf_pane_cp

0x9904,	// (0x00068513) popup_call2_audio_conf_window_t1

0x8599,	// (0x000671a8) list_single_graphic_popup_conf2_pane_ParamLimits

0x8599,	// (0x000671a8) list_single_graphic_popup_conf2_pane

0x85ac,	// (0x000671bb) list_highlight_pane_cp04

0x9912,	// (0x00068521) list_single_graphic_popup_conf2_pane_g1

0x85bd,	// (0x000671cc) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0006e188) list_single_graphic_popup_conf2_pane_g

0x991c,	// (0x0006852b) list_single_graphic_popup_conf2_pane_t1

0x992a,	// (0x00068539) bg_popup_call2_act_pane_cp01_ParamLimits

0x992a,	// (0x00068539) bg_popup_call2_act_pane_cp01

0x99b4,	// (0x000685c3) call_type_pane_cp05_ParamLimits

0x99b4,	// (0x000685c3) call_type_pane_cp05

0x9a08,	// (0x00068617) popup_call2_audio_second_window_g1_ParamLimits

0x9a08,	// (0x00068617) popup_call2_audio_second_window_g1

0x9a5c,	// (0x0006866b) popup_call2_audio_second_window_g2_ParamLimits

0x9a5c,	// (0x0006866b) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0006e18d) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0006e18d) popup_call2_audio_second_window_g

0x9ac1,	// (0x000686d0) popup_call2_audio_second_window_t1_ParamLimits

0x9ac1,	// (0x000686d0) popup_call2_audio_second_window_t1

0x9b7c,	// (0x0006878b) popup_call2_audio_second_window_t2_ParamLimits

0x9b7c,	// (0x0006878b) popup_call2_audio_second_window_t2

0x9bcf,	// (0x000687de) popup_call2_audio_second_window_t3_ParamLimits

0x9bcf,	// (0x000687de) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0006e194) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0006e194) popup_call2_audio_second_window_t

0x09bc,	// (0x0005f5cb) bg_popup_call2_in_pane_cp02

0x09c6,	// (0x0005f5d5) call_type_pane_cp04

0x09ce,	// (0x0005f5dd) popup_call2_audio_wait_window_g1

0x09d6,	// (0x0005f5e5) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0006dd6d) popup_call2_audio_wait_window_g

0x09de,	// (0x0005f5ed) popup_call2_audio_wait_window_t3

0x9cc2,	// (0x000688d1) bg_popup_call2_act_pane_ParamLimits

0x9cc2,	// (0x000688d1) bg_popup_call2_act_pane

0x9d82,	// (0x00068991) call_type_pane_cp03_ParamLimits

0x9d82,	// (0x00068991) call_type_pane_cp03

0x9de6,	// (0x000689f5) popup_call2_audio_first_window_g1_ParamLimits

0x9de6,	// (0x000689f5) popup_call2_audio_first_window_g1

0x9e56,	// (0x00068a65) popup_call2_audio_first_window_g2_ParamLimits

0x9e56,	// (0x00068a65) popup_call2_audio_first_window_g2

0x8416,	// (0x00067025) popup_call2_audio_first_window_g3_ParamLimits

0x8416,	// (0x00067025) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0006e19d) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0006e19d) popup_call2_audio_first_window_g

0x9f34,	// (0x00068b43) popup_call2_audio_first_window_t1_ParamLimits

0x9f34,	// (0x00068b43) popup_call2_audio_first_window_t1

0xeaf3,	// (0x0006d702) popup_call2_audio_first_window_t4_ParamLimits

0xeaf3,	// (0x0006d702) popup_call2_audio_first_window_t4

0xebd6,	// (0x0006d7e5) popup_call2_audio_first_window_t5_ParamLimits

0xebd6,	// (0x0006d7e5) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0006e1a8) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0006e1a8) popup_call2_audio_first_window_t

0x0c0f,	// (0x0005f81e) bg_popup_call2_act_pane_g1

0x0f30,	// (0x0005fb3f) popup_cale_lunar_info_window_t1

0x0f3e,	// (0x0005fb4d) popup_cale_lunar_info_window_t2

0x0f4c,	// (0x0005fb5b) popup_cale_lunar_info_window_t3

0x09bc,	// (0x0005f5cb) bg_popup_call2_bubble_pane

0xecd7,	// (0x0006d8e6) bg_popup_call2_in_pane_cp01_ParamLimits

0xecd7,	// (0x0006d8e6) bg_popup_call2_in_pane_cp01

0x0698,	// (0x0005f2a7) call_type_pane_cp02

0xed1f,	// (0x0006d92e) popup_call2_audio_out_window_g1_ParamLimits

0xed1f,	// (0x0006d92e) popup_call2_audio_out_window_g1

0xed4b,	// (0x0006d95a) popup_call2_audio_out_window_g2_ParamLimits

0xed4b,	// (0x0006d95a) popup_call2_audio_out_window_g2

0xed73,	// (0x0006d982) popup_call2_audio_out_window_g3_ParamLimits

0xed73,	// (0x0006d982) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0006e1b1) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0006e1b1) popup_call2_audio_out_window_g

0xedae,	// (0x0006d9bd) popup_call2_audio_out_window_t1_ParamLimits

0xedae,	// (0x0006d9bd) popup_call2_audio_out_window_t1

0xee0d,	// (0x0006da1c) popup_call2_audio_out_window_t2_ParamLimits

0xee0d,	// (0x0006da1c) popup_call2_audio_out_window_t2

0xee61,	// (0x0006da70) popup_call2_audio_out_window_t3_ParamLimits

0xee61,	// (0x0006da70) popup_call2_audio_out_window_t3

0xee77,	// (0x0006da86) popup_call2_audio_out_window_t4_ParamLimits

0xee77,	// (0x0006da86) popup_call2_audio_out_window_t4

0xee8d,	// (0x0006da9c) popup_call2_audio_out_window_t5_ParamLimits

0xee8d,	// (0x0006da9c) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0006e1ba) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0006e1ba) popup_call2_audio_out_window_t

0xeef1,	// (0x0006db00) bg_popup_call2_in_pane_ParamLimits

0xeef1,	// (0x0006db00) bg_popup_call2_in_pane

0xef4d,	// (0x0006db5c) popup_call2_audio_in_window_g1_ParamLimits

0xef4d,	// (0x0006db5c) popup_call2_audio_in_window_g1

0xef85,	// (0x0006db94) popup_call2_audio_in_window_g2_ParamLimits

0xef85,	// (0x0006db94) popup_call2_audio_in_window_g2

0xefbd,	// (0x0006dbcc) popup_call2_audio_in_window_g3_ParamLimits

0xefbd,	// (0x0006dbcc) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0006e1c7) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0006e1c7) popup_call2_audio_in_window_g

0xf015,	// (0x0006dc24) popup_call2_audio_in_window_t1_ParamLimits

0xf015,	// (0x0006dc24) popup_call2_audio_in_window_t1

0xf095,	// (0x0006dca4) popup_call2_audio_in_window_t2_ParamLimits

0xf095,	// (0x0006dca4) popup_call2_audio_in_window_t2

0x0e02,	// (0x0005fa11) popup_call2_audio_in_window_t3_ParamLimits

0x0e02,	// (0x0005fa11) popup_call2_audio_in_window_t3

0x0e1c,	// (0x0005fa2b) popup_call2_audio_in_window_t4_ParamLimits

0x0e1c,	// (0x0005fa2b) popup_call2_audio_in_window_t4

0x0e2e,	// (0x0005fa3d) popup_call2_audio_in_window_t5_ParamLimits

0x0e2e,	// (0x0005fa3d) popup_call2_audio_in_window_t5

0x0e43,	// (0x0005fa52) popup_call2_audio_in_window_t6_ParamLimits

0x0e43,	// (0x0005fa52) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0006e1d0) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0006e1d0) popup_call2_audio_in_window_t

0x0c0f,	// (0x0005f81e) bg_popup_call2_in_pane_g1

0x0f5a,	// (0x0005fb69) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0006e238) popup_cale_lunar_info_window_t

0x60ea,	// (0x00064cf9) bg_popup_call2_rect_pane_ParamLimits

0x60ea,	// (0x00064cf9) bg_popup_call2_rect_pane

0x09bc,	// (0x0005f5cb) call2_cli_visual_graphic_pane

0x09bc,	// (0x0005f5cb) call2_cli_visual_text_pane

0xa4bd,	// (0x000690cc) smil_status_volume_pane_g3

0x0002,

0x65c8,	// (0x000651d7) call2_cli_visual_graphic_pane_g1

0x65c8,	// (0x000651d7) call2_cli_visual_graphic_pane_g2

0x65c8,	// (0x000651d7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0006e1dd) call2_cli_visual_graphic_pane_g

0x0e58,	// (0x0005fa67) bg_popup_call2_rect_pane_g1

0x66fc,	// (0x0006530b) bg_popup_call2_rect_pane_g2

0x0e60,	// (0x0005fa6f) bg_popup_call2_rect_pane_g3

0x0e68,	// (0x0005fa77) bg_popup_call2_rect_pane_g4

0x0e70,	// (0x0005fa7f) bg_popup_call2_rect_pane_g5

0x0e78,	// (0x0005fa87) bg_popup_call2_rect_pane_g6

0x0e80,	// (0x0005fa8f) bg_popup_call2_rect_pane_g7

0x0e88,	// (0x0005fa97) bg_popup_call2_rect_pane_g8

0x0e90,	// (0x0005fa9f) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0006e1e4) bg_popup_call2_rect_pane_g

0x0e98,	// (0x0005faa7) bg_popup_call2_bubble_pane_g1

0x0ea0,	// (0x0005faaf) bg_popup_call2_bubble_pane_g2

0x0ea8,	// (0x0005fab7) bg_popup_call2_bubble_pane_g3

0x0eb0,	// (0x0005fabf) bg_popup_call2_bubble_pane_g4

0x0eb8,	// (0x0005fac7) bg_popup_call2_bubble_pane_g5

0x0ec0,	// (0x0005facf) bg_popup_call2_bubble_pane_g6

0x0ec8,	// (0x0005fad7) bg_popup_call2_bubble_pane_g7

0x0ed0,	// (0x0005fadf) bg_popup_call2_bubble_pane_g8

0x0ed8,	// (0x0005fae7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0006e1f7) bg_popup_call2_bubble_pane_g

0x67da,	// (0x000653e9) aid_cale_week_size_cell_pane

0x6dce,	// (0x000659dd) aid_cams_cif_uncrop_pane_ParamLimits

0x6dce,	// (0x000659dd) aid_cams_cif_uncrop_pane

0x6f69,	// (0x00065b78) aid_cams_size_cell_ParamLimits

0x6f69,	// (0x00065b78) aid_cams_size_cell

0x6f75,	// (0x00065b84) grid_cams_pane_ParamLimits

0x6f83,	// (0x00065b92) linegrid_cams_pane_ParamLimits

0x7076,	// (0x00065c85) call_video_pane_t1

0x7090,	// (0x00065c9f) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0006dee4) call_video_pane_t

0x77aa,	// (0x000663b9) aid_cale_month_size_cell_pane_ParamLimits

0x77aa,	// (0x000663b9) aid_cale_month_size_cell_pane

0xf672,	// (0x0006e281) smil_status_volume_pane_g

0xa4ca,	// (0x000690d9) volume_smil_pane_ParamLimits

0x0553,	// (0x0005f162) aid_popup2_width_pane

0x665d,	// (0x0006526c) cell_qdial_pane_g4_ParamLimits

0x665d,	// (0x0006526c) cell_qdial_pane_g4

0x8859,	// (0x00067468) aid_blid_cardinal_pane_ParamLimits

0x8869,	// (0x00067478) aid_blid_destination_pane_ParamLimits

0x8869,	// (0x00067478) aid_blid_destination_pane

0x60ea,	// (0x00064cf9) bg_popup_call_poc_act_pane_ParamLimits

0x60ea,	// (0x00064cf9) bg_popup_call_poc_act_pane

0x60ea,	// (0x00064cf9) bg_popup_call_poc_inact_pane_ParamLimits

0x60ea,	// (0x00064cf9) bg_popup_call_poc_inact_pane

0x0ee0,	// (0x0005faef) bg_popup_call_poc_act_pane_g1

0x0ee8,	// (0x0005faf7) bg_popup_call_poc_act_pane_g2

0x0ef0,	// (0x0005faff) bg_popup_call_poc_act_pane_g3

0x0eb0,	// (0x0005fabf) bg_popup_call_poc_act_pane_g4

0x0eb8,	// (0x0005fac7) bg_popup_call_poc_act_pane_g5

0x0ef8,	// (0x0005fb07) bg_popup_call_poc_act_pane_g6

0x0ec8,	// (0x0005fad7) bg_popup_call_poc_act_pane_g7

0x0f00,	// (0x0005fb0f) bg_popup_call_poc_act_pane_g8

0x09bc,	// (0x0005f5cb) main_usb_pane

0x1059,	// (0x0005fc68) popup_cale_lunar_info_window

0x739a,	// (0x00065fa9) im_reading_pane_t1_ParamLimits

0x73ee,	// (0x00065ffd) list_im_pane_ParamLimits

0x73ff,	// (0x0006600e) scroll_pane_cp07_ParamLimits

0x09bc,	// (0x0005f5cb) grid_highlight_pane_cp012

0x60ea,	// (0x00064cf9) mup_scale_pane_ParamLimits

0x8416,	// (0x00067025) main_usb_pane_g1_ParamLimits

0x8416,	// (0x00067025) main_usb_pane_g1

0xa06c,	// (0x00068c7b) main_usb_pane_g2_ParamLimits

0xa06c,	// (0x00068c7b) main_usb_pane_g2

0x0001,

0xf612,	// (0x0006e221) main_usb_pane_g_ParamLimits

0xf612,	// (0x0006e221) main_usb_pane_g

0xa078,	// (0x00068c87) main_usb_pane_t1_ParamLimits

0xa078,	// (0x00068c87) main_usb_pane_t1

0xa08a,	// (0x00068c99) main_usb_pane_t2_ParamLimits

0xa08a,	// (0x00068c99) main_usb_pane_t2

0xa09c,	// (0x00068cab) main_usb_pane_t3_ParamLimits

0xa09c,	// (0x00068cab) main_usb_pane_t3

0xa0ae,	// (0x00068cbd) main_usb_pane_t4_ParamLimits

0xa0ae,	// (0x00068cbd) main_usb_pane_t4

0xa0c0,	// (0x00068ccf) main_usb_pane_t5_ParamLimits

0xa0c0,	// (0x00068ccf) main_usb_pane_t5

0xa0d2,	// (0x00068ce1) main_usb_pane_t6_ParamLimits

0xa0d2,	// (0x00068ce1) main_usb_pane_t6

0x0005,

0xf617,	// (0x0006e226) main_usb_pane_t_ParamLimits

0x87ff,	// (0x0006740e) aid_text_placing

0x880b,	// (0x0006741a) main_location2_pane_t1_ParamLimits

0x881f,	// (0x0006742e) main_location2_pane_t2_ParamLimits

0x8833,	// (0x00067442) main_location2_pane_t3_ParamLimits

0x8847,	// (0x00067456) main_location2_pane_t4_ParamLimits

0x8847,	// (0x00067456) main_location2_pane_t4

0xf436,	// (0x0006e045) main_location2_pane_t_ParamLimits

0x61c6,	// (0x00064dd5) find_pinb_pane_g2_ParamLimits

0x61c6,	// (0x00064dd5) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0006dd93) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0006dd93) find_pinb_pane_g

0x61d2,	// (0x00064de1) find_pinb_pane_t1_ParamLimits

0x61e4,	// (0x00064df3) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0006dd98) find_pinb_pane_t_ParamLimits

0x09bc,	// (0x0005f5cb) main_call3_pane

0x7b2b,	// (0x0006673a) cale_month_day_heading_pane_t1_ParamLimits

0x7b89,	// (0x00066798) cale_month_day_heading_pane_t2_ParamLimits

0x7bee,	// (0x000667fd) cale_month_day_heading_pane_t3_ParamLimits

0x7c53,	// (0x00066862) cale_month_day_heading_pane_t4_ParamLimits

0x7cb8,	// (0x000668c7) cale_month_day_heading_pane_t5_ParamLimits

0x7d1d,	// (0x0006692c) cale_month_day_heading_pane_t6_ParamLimits

0x7d82,	// (0x00066991) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0006df1c) cale_month_day_heading_pane_t_ParamLimits

0x7f8a,	// (0x00066b99) smil_status_volume_pane

0x9244,	// (0x00067e53) postcard_address_pane_ParamLimits

0x9244,	// (0x00067e53) postcard_address_pane

0x9250,	// (0x00067e5f) postcard_message_pane_ParamLimits

0x9250,	// (0x00067e5f) postcard_message_pane

0xa037,	// (0x00068c46) call2_cli_visual_pane_t1_ParamLimits

0xa037,	// (0x00068c46) call2_cli_visual_pane_t1

0xa621,	// (0x00069230) postcard_message_pane_t1_ParamLimits

0xa621,	// (0x00069230) postcard_message_pane_t1

0xa60a,	// (0x00069219) postcard_address_pane_t1_ParamLimits

0xa60a,	// (0x00069219) postcard_address_pane_t1

0xa5fb,	// (0x0006920a) popup_call3_audio_in_window_ParamLimits

0xa5fb,	// (0x0006920a) popup_call3_audio_in_window

0xa4df,	// (0x000690ee) bg_popup_call3_in_pane_ParamLimits

0xa4df,	// (0x000690ee) bg_popup_call3_in_pane

0xa541,	// (0x00069150) popup_call3_audio_in_window_g1_ParamLimits

0xa541,	// (0x00069150) popup_call3_audio_in_window_g1

0xa559,	// (0x00069168) popup_call3_audio_in_window_g2_ParamLimits

0xa559,	// (0x00069168) popup_call3_audio_in_window_g2

0xa571,	// (0x00069180) popup_call3_audio_in_window_g3_ParamLimits

0xa571,	// (0x00069180) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0006e288) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0006e288) popup_call3_audio_in_window_g

0xa599,	// (0x000691a8) popup_call3_audio_in_window_t1_ParamLimits

0xa599,	// (0x000691a8) popup_call3_audio_in_window_t1

0xa5c1,	// (0x000691d0) popup_call3_audio_in_window_t2_ParamLimits

0xa5c1,	// (0x000691d0) popup_call3_audio_in_window_t2

0xa5e9,	// (0x000691f8) popup_call3_audio_in_window_t3_ParamLimits

0xa5e9,	// (0x000691f8) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0006e291) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0006e291) popup_call3_audio_in_window_t

0x8ab7,	// (0x000676c6) bg_popup_call3_rect_pane

0x0e58,	// (0x0005fa67) bg_popup_call3_rect_pane_g1

0x66fc,	// (0x0006530b) bg_popup_call3_rect_pane_g2

0x0e60,	// (0x0005fa6f) bg_popup_call3_rect_pane_g3

0x0e68,	// (0x0005fa77) bg_popup_call3_rect_pane_g4

0x0e70,	// (0x0005fa7f) bg_popup_call3_rect_pane_g5

0x0e78,	// (0x0005fa87) bg_popup_call3_rect_pane_g6

0x0e80,	// (0x0005fa8f) bg_popup_call3_rect_pane_g7

0x8de3,	// (0x000679f2) mup_visualizer_osc_pane

0x8deb,	// (0x000679fa) mup_visualizer_spec_pane

0xa4ff,	// (0x0006910e) call3_video_qcif_pane_ParamLimits

0xa4ff,	// (0x0006910e) call3_video_qcif_pane

0xa511,	// (0x00069120) call3_video_qcif_uncrop_pane_ParamLimits

0xa511,	// (0x00069120) call3_video_qcif_uncrop_pane

0xa51f,	// (0x0006912e) call3_video_subqcif_pane_ParamLimits

0xa51f,	// (0x0006912e) call3_video_subqcif_pane

0xa531,	// (0x00069140) call3_video_subqcif_uncrop_pane_ParamLimits

0xa531,	// (0x00069140) call3_video_subqcif_uncrop_pane

0xa589,	// (0x00069198) popup_call3_audio_in_window_g4_ParamLimits

0xa589,	// (0x00069198) popup_call3_audio_in_window_g4

0xa4ac,	// (0x000690bb) mup_spec_half_pane

0xa4b5,	// (0x000690c4) mup_spec_half_pane_cp

0x10f0,	// (0x0005fcff) mup_osc_middle_pane

0x10f9,	// (0x0005fd08) mup_visualizer_osc_pane_g1

0xa48d,	// (0x0006909c) mup_spec_bar_pane_ParamLimits

0xa48d,	// (0x0006909c) mup_spec_bar_pane

0x10dd,	// (0x0005fcec) mup_spec_bar_pane_g1

0x10e7,	// (0x0005fcf6) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0006e27c) mup_spec_bar_pane_g

0x67da,	// (0x000653e9) aid_cale_week_size_cell_pane_ParamLimits

0x67ed,	// (0x000653fc) bg_cale_heading_pane_ParamLimits

0x6801,	// (0x00065410) bg_cale_pane_cp01_ParamLimits

0x681a,	// (0x00065429) cale_week_corner_pane_ParamLimits

0x6830,	// (0x0006543f) cale_week_day_heading_pane_ParamLimits

0x6844,	// (0x00065453) cale_week_scroll_pane_g1_ParamLimits

0x6855,	// (0x00065464) cale_week_scroll_pane_g2_ParamLimits

0x6866,	// (0x00065475) cale_week_scroll_pane_g3_ParamLimits

0x6877,	// (0x00065486) cale_week_scroll_pane_g4_ParamLimits

0x6888,	// (0x00065497) cale_week_scroll_pane_g5_ParamLimits

0x6899,	// (0x000654a8) cale_week_scroll_pane_g6_ParamLimits

0x68aa,	// (0x000654b9) cale_week_scroll_pane_g7_ParamLimits

0x68bd,	// (0x000654cc) cale_week_scroll_pane_g8_ParamLimits

0x68d0,	// (0x000654df) cale_week_scroll_pane_g9_ParamLimits

0x68e1,	// (0x000654f0) cale_week_scroll_pane_g10_ParamLimits

0x68f2,	// (0x00065501) cale_week_scroll_pane_g11_ParamLimits

0x6903,	// (0x00065512) cale_week_scroll_pane_g12_ParamLimits

0x6914,	// (0x00065523) cale_week_scroll_pane_g13_ParamLimits

0x6925,	// (0x00065534) cale_week_scroll_pane_g14_ParamLimits

0x6936,	// (0x00065545) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0006de24) cale_week_scroll_pane_g_ParamLimits

0x6947,	// (0x00065556) cale_week_time_pane_ParamLimits

0x695a,	// (0x00065569) grid_cale_week_pane_ParamLimits

0x696f,	// (0x0006557e) listscroll_cale_week_pane_t1

0x6981,	// (0x00065590) scroll_pane_cp08_ParamLimits

0x780e,	// (0x0006641d) cale_month_corner_pane_ParamLimits

0x7ad8,	// (0x000666e7) cale_month_pane_t1

0x7aea,	// (0x000666f9) cale_month_week_pane_ParamLimits

0x8416,	// (0x00067025) popup_call_status_window_g1_ParamLimits

0x8424,	// (0x00067033) popup_call_status_window_g2_ParamLimits

0x8430,	// (0x0006703f) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0006dfcc) popup_call_status_window_g_ParamLimits

0x8495,	// (0x000670a4) aid_call2_pane

0x5052,	// (0x00063c61) msg_header_pane_g1

0x9244,	// (0x00067e53) postcard_address2_pane_ParamLimits

0x9244,	// (0x00067e53) postcard_address2_pane

0x9250,	// (0x00067e5f) postcard_message2_pane_ParamLimits

0x9250,	// (0x00067e5f) postcard_message2_pane

0xa425,	// (0x00069034) message2_row_pane_ParamLimits

0xa425,	// (0x00069034) message2_row_pane

0xa440,	// (0x0006904f) address2_row_pane_ParamLimits

0xa440,	// (0x0006904f) address2_row_pane

0x10ab,	// (0x0005fcba) postcard_message2_row_pane_g1

0x10b3,	// (0x0005fcc2) postcard_message2_row_pane_t1

0x10ab,	// (0x0005fcba) address2_row_pane_g1

0x10b3,	// (0x0005fcc2) address2_row_pane_t1

0x6c84,	// (0x00065893) aid_size_cell_vorec

0x09bc,	// (0x0005f5cb) main_rss_pane

0xa453,	// (0x00069062) rss_list_single_pane_ParamLimits

0xa453,	// (0x00069062) rss_list_single_pane

0x10c1,	// (0x0005fcd0) rss_list_single_pane_t1

0x10cf,	// (0x0005fcde) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0006e277) rss_list_single_pane_t

0x09bc,	// (0x0005f5cb) main_camera2_pane

0x09bc,	// (0x0005f5cb) main_video2_pane

0xa685,	// (0x00069294) cams_zoom_pane_cp2_ParamLimits

0xa685,	// (0x00069294) cams_zoom_pane_cp2

0xa691,	// (0x000692a0) image2_vga_pane_ParamLimits

0xa691,	// (0x000692a0) image2_vga_pane

0xa6a0,	// (0x000692af) main_camera2_pane_g1_ParamLimits

0xa6a0,	// (0x000692af) main_camera2_pane_g1

0xa6ac,	// (0x000692bb) main_camera2_pane_g2_ParamLimits

0xa6ac,	// (0x000692bb) main_camera2_pane_g2

0xa6b8,	// (0x000692c7) main_camera2_pane_g3_ParamLimits

0xa6b8,	// (0x000692c7) main_camera2_pane_g3

0xa6c4,	// (0x000692d3) main_camera2_pane_g4_ParamLimits

0xa6c4,	// (0x000692d3) main_camera2_pane_g4

0xa6d0,	// (0x000692df) main_camera2_pane_g5_ParamLimits

0xa6d0,	// (0x000692df) main_camera2_pane_g5

0xa6dc,	// (0x000692eb) main_camera2_pane_g6_ParamLimits

0xa6dc,	// (0x000692eb) main_camera2_pane_g6

0xa6e8,	// (0x000692f7) main_camera2_pane_g7_ParamLimits

0xa6e8,	// (0x000692f7) main_camera2_pane_g7

0xa6f4,	// (0x00069303) main_camera2_pane_g8_ParamLimits

0xa6f4,	// (0x00069303) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0006e298) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0006e298) main_camera2_pane_g

0xa70c,	// (0x0006931b) main_camera2_pane_t1_ParamLimits

0xa70c,	// (0x0006931b) main_camera2_pane_t1

0xa71e,	// (0x0006932d) main_camera2_pane_t2_ParamLimits

0xa71e,	// (0x0006932d) main_camera2_pane_t2

0xa730,	// (0x0006933f) main_camera2_pane_t3_ParamLimits

0xa730,	// (0x0006933f) main_camera2_pane_t3

0xa742,	// (0x00069351) main_camera2_pane_t4_ParamLimits

0xa742,	// (0x00069351) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0006e2ab) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0006e2ab) main_camera2_pane_t

0xa7a4,	// (0x000693b3) cams_zoom_pane_cp4_ParamLimits

0xa7a4,	// (0x000693b3) cams_zoom_pane_cp4

0xa7b4,	// (0x000693c3) image2_cif_pane_ParamLimits

0xa7b4,	// (0x000693c3) image2_cif_pane

0xa7c9,	// (0x000693d8) image2_subqcif_pane_ParamLimits

0xa7c9,	// (0x000693d8) image2_subqcif_pane

0xa7d8,	// (0x000693e7) main_video2_pane_g1_ParamLimits

0xa7d8,	// (0x000693e7) main_video2_pane_g1

0xa7ea,	// (0x000693f9) main_video2_pane_g2_ParamLimits

0xa7ea,	// (0x000693f9) main_video2_pane_g2

0xa7fa,	// (0x00069409) main_video2_pane_g3_ParamLimits

0xa7fa,	// (0x00069409) main_video2_pane_g3

0xa80a,	// (0x00069419) main_video2_pane_g4_ParamLimits

0xa80a,	// (0x00069419) main_video2_pane_g4

0xa81a,	// (0x00069429) main_video2_pane_g5_ParamLimits

0xa81a,	// (0x00069429) main_video2_pane_g5

0xa82a,	// (0x00069439) main_video2_pane_g6_ParamLimits

0xa82a,	// (0x00069439) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0006e2ba) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0006e2ba) main_video2_pane_g

0xa83c,	// (0x0006944b) main_video2_pane_t1_ParamLimits

0xa83c,	// (0x0006944b) main_video2_pane_t1

0xa856,	// (0x00069465) main_video2_pane_t2_ParamLimits

0xa856,	// (0x00069465) main_video2_pane_t2

0xa87c,	// (0x0006948b) main_video2_pane_t3_ParamLimits

0xa87c,	// (0x0006948b) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0006e2c7) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0006e2c7) main_video2_pane_t

0xa189,	// (0x00068d98) call_muted_g2

0x0001,

0xf65a,	// (0x0006e269) call_muted_g

0x09bc,	// (0x0005f5cb) main_mup2_pane

0x11b0,	// (0x0005fdbf) main_mup2_pane_g1_ParamLimits

0x11b0,	// (0x0005fdbf) main_mup2_pane_g1

0xa8a2,	// (0x000694b1) main_mup2_pane_g2_ParamLimits

0xa8a2,	// (0x000694b1) main_mup2_pane_g2

0xab24,	// (0x00069733) main_mup_pane_g13_cp1

0xab2c,	// (0x0006973b) mup_volume_pane_cp1

0xa8c2,	// (0x000694d1) main_mup2_pane_g4_ParamLimits

0xa8c2,	// (0x000694d1) main_mup2_pane_g4

0xa8d7,	// (0x000694e6) main_mup2_pane_g5_ParamLimits

0xa8d7,	// (0x000694e6) main_mup2_pane_g5

0xa8ec,	// (0x000694fb) main_mup2_pane_g6_ParamLimits

0xa8ec,	// (0x000694fb) main_mup2_pane_g6

0xa901,	// (0x00069510) main_mup2_pane_g7_ParamLimits

0xa901,	// (0x00069510) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0006e2ce) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0006e2ce) main_mup2_pane_g

0xa91d,	// (0x0006952c) main_mup2_pane_t1_ParamLimits

0xa91d,	// (0x0006952c) main_mup2_pane_t1

0xa934,	// (0x00069543) main_mup2_pane_t2_ParamLimits

0xa934,	// (0x00069543) main_mup2_pane_t2

0xa94b,	// (0x0006955a) main_mup2_pane_t3_ParamLimits

0xa94b,	// (0x0006955a) main_mup2_pane_t3

0xa962,	// (0x00069571) main_mup2_pane_t4_ParamLimits

0xa962,	// (0x00069571) main_mup2_pane_t4

0xa97c,	// (0x0006958b) main_mup2_pane_t5_ParamLimits

0xa97c,	// (0x0006958b) main_mup2_pane_t5

0xa996,	// (0x000695a5) main_mup2_pane_t6_ParamLimits

0xa996,	// (0x000695a5) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0006e2dd) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0006e2dd) main_mup2_pane_t

0xa9ce,	// (0x000695dd) mup2_visualizer_pane_ParamLimits

0xa9ce,	// (0x000695dd) mup2_visualizer_pane

0xaa04,	// (0x00069613) mup_progress_pane_cp_ParamLimits

0xaa04,	// (0x00069613) mup_progress_pane_cp

0xab0f,	// (0x0006971e) mup_volume_pane_cp_ParamLimits

0xab0f,	// (0x0006971e) mup_volume_pane_cp

0xaa1b,	// (0x0006962a) mup2_visualizer_pane_g1_ParamLimits

0xaa1b,	// (0x0006962a) mup2_visualizer_pane_g1

0x1182,	// (0x0005fd91) mup2_visualizer_pane_g2_ParamLimits

0x1182,	// (0x0005fd91) mup2_visualizer_pane_g2

0xaa30,	// (0x0006963f) mup2_visualizer_pane_g3_ParamLimits

0xaa30,	// (0x0006963f) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0006e2ea) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0006e2ea) mup2_visualizer_pane_g

0x9577,	// (0x00068186) aid_size_cell_fmradio

0xa29f,	// (0x00068eae) aid_height_parent_landcape

0x74c5,	// (0x000660d4) wml_content_pane_cp

0x74cd,	// (0x000660dc) wml_tabs_pane

0x74d6,	// (0x000660e5) popup_wml_miniature_window

0x74de,	// (0x000660ed) scroll_pane_cp021

0x74f2,	// (0x00066101) wml_content_pane_comp8

0x09bc,	// (0x0005f5cb) bg_popup_sub_pane_cp05

0x11a0,	// (0x0005fdaf) popup_wml_miniature_window_g1

0x11a8,	// (0x0005fdb7) wml_miniature_view_pane

0xaa3e,	// (0x0006964d) aid_size_wml_view

0xaa46,	// (0x00069655) wml_miniature_view_pane_g1

0xaa4f,	// (0x0006965e) wml_miniature_view_pane_g2

0xaa58,	// (0x00069667) wml_miniature_view_pane_g3

0xaa60,	// (0x0006966f) wml_miniature_view_pane_g4

0xaa68,	// (0x00069677) wml_miniature_view_pane_g5

0xaa70,	// (0x0006967f) wml_miniature_view_pane_g6

0xaa78,	// (0x00069687) wml_miniature_view_pane_g7

0xaa80,	// (0x0006968f) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0006e2f1) wml_miniature_view_pane_g

0x11b0,	// (0x0005fdbf) background_graphic_ParamLimits

0x11b0,	// (0x0005fdbf) background_graphic

0x11bc,	// (0x0005fdcb) wml_tabs_2_pane

0x11c5,	// (0x0005fdd4) wml_tabs_3_pane_ParamLimits

0x11c5,	// (0x0005fdd4) wml_tabs_3_pane

0x11d7,	// (0x0005fde6) wml_tabs_4_pane_ParamLimits

0x11d7,	// (0x0005fde6) wml_tabs_4_pane

0x11ed,	// (0x0005fdfc) wml_tabs_5_pane_ParamLimits

0x11ed,	// (0x0005fdfc) wml_tabs_5_pane

0x1207,	// (0x0005fe16) wml_tabs_pane_g2_ParamLimits

0x1207,	// (0x0005fe16) wml_tabs_pane_g2

0x121b,	// (0x0005fe2a) wml_tabs_pane_g3_ParamLimits

0x121b,	// (0x0005fe2a) wml_tabs_pane_g3

0xaa88,	// (0x00069697) wml_tabs_2_active_pane_ParamLimits

0xaa88,	// (0x00069697) wml_tabs_2_active_pane

0xaa98,	// (0x000696a7) wml_tabs_2_passive_pane_ParamLimits

0xaa98,	// (0x000696a7) wml_tabs_2_passive_pane

0xaaa8,	// (0x000696b7) wml_tabs_3_active_pane_cp_ParamLimits

0xaaa8,	// (0x000696b7) wml_tabs_3_active_pane_cp

0xaab9,	// (0x000696c8) wml_tabs_3_passive_pane_ParamLimits

0xaab9,	// (0x000696c8) wml_tabs_3_passive_pane

0xaaca,	// (0x000696d9) wml_tabs_3_passive_pane_cp_ParamLimits

0xaaca,	// (0x000696d9) wml_tabs_3_passive_pane_cp

0xaadb,	// (0x000696ea) tabs_4_active_pane

0xaae3,	// (0x000696f2) tabs_4_passive_pane

0xaaeb,	// (0x000696fa) tabs_4_passive_pane_cp

0xaaf3,	// (0x00069702) tabs_4_passive_pane_cp2

0xa064,	// (0x00068c73) aid_height_text

0x8db0,	// (0x000679bf) mup_volume_cont_pane_ParamLimits

0x8db0,	// (0x000679bf) mup_volume_cont_pane

0x6180,	// (0x00064d8f) aid_size_cell_pinb

0x618a,	// (0x00064d99) aid_size_list_pinb

0xa9ed,	// (0x000695fc) mup2_volume_cont_pane_ParamLimits

0xa9ed,	// (0x000695fc) mup2_volume_cont_pane

0xaafb,	// (0x0006970a) mup2_volume_cont_pane_g1_ParamLimits

0xaafb,	// (0x0006970a) mup2_volume_cont_pane_g1

0x5dd3,	// (0x000649e2) aid_size_cell_touch_ParamLimits

0x5dd3,	// (0x000649e2) aid_size_cell_touch

0x6036,	// (0x00064c45) touch_pane_ParamLimits

0x6036,	// (0x00064c45) touch_pane

0x0541,	// (0x0005f150) main_rss2_pane

0x1271,	// (0x0005fe80) listscroll_rss2_pane

0x127a,	// (0x0005fe89) rss2_navigation_pane

0x1282,	// (0x0005fe91) list_rss2_pane

0x86c0,	// (0x000672cf) scroll_pane_cp22

0x128a,	// (0x0005fe99) rss2_navigation_pane_g1

0x1293,	// (0x0005fea2) rss2_navigation_pane_g2

0x129b,	// (0x0005feaa) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0006e302) rss2_navigation_pane_g

0x12a3,	// (0x0005feb2) rss2_navigation_pane_t1

0xab34,	// (0x00069743) rss2_list_single_pane_ParamLimits

0xab34,	// (0x00069743) rss2_list_single_pane

0x12b1,	// (0x0005fec0) rss2_list_single_pane_t2

0x12bf,	// (0x0005fece) rss2_list_single_pane_t3_ParamLimits

0x12bf,	// (0x0005fece) rss2_list_single_pane_t3

0x12dc,	// (0x0005feeb) rss2_list_single_pane_t4

0x7f74,	// (0x00066b83) smil_status_pane_g1

0xf115,	// (0x0006dd24) main_image2_pane_ParamLimits

0xf115,	// (0x0006dd24) main_image2_pane

0xa700,	// (0x0006930f) main_camera2_pane_g9_ParamLimits

0xa700,	// (0x0006930f) main_camera2_pane_g9

0xa754,	// (0x00069363) main_camera2_pane_t5_ParamLimits

0xa754,	// (0x00069363) main_camera2_pane_t5

0xa766,	// (0x00069375) main_camera2_pane_t6_ParamLimits

0xa766,	// (0x00069375) main_camera2_pane_t6

0xab65,	// (0x00069774) main_image2_pane_g1_ParamLimits

0xab65,	// (0x00069774) main_image2_pane_g1

0x9561,	// (0x00068170) smil2_video_pane_ParamLimits

0x9561,	// (0x00068170) smil2_video_pane

0x5e07,	// (0x00064a16) aid_zoom_text_primary_cp

0x059f,	// (0x0005f1ae) popup_preview_fixed_window

0x7392,	// (0x00065fa1) im_reading_pane_g1

0xa64a,	// (0x00069259) cams2_bc_adjust_pane_cp_ParamLimits

0xa64a,	// (0x00069259) cams2_bc_adjust_pane_cp

0xa796,	// (0x000693a5) cams2_bc_adjust_pane_ParamLimits

0xa796,	// (0x000693a5) cams2_bc_adjust_pane

0xab71,	// (0x00069780) cams2_bc_adjust_pane_g1

0xab79,	// (0x00069788) cams2_slider_pane

0xab82,	// (0x00069791) cams2_slider_pane_g1

0xab8b,	// (0x0006979a) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0006e309) cams2_slider_pane_g

0x62de,	// (0x00064eed) calc_display_pane_ParamLimits

0x62fc,	// (0x00064f0b) calc_paper_pane_ParamLimits

0x6318,	// (0x00064f27) grid_calc_pane_ParamLimits

0x84fb,	// (0x0006710a) popup_clock_digital_window_t1_ParamLimits

0x942c,	// (0x0006803b) main_image_pane_t1

0x62c4,	// (0x00064ed3) aid_size_cell_calc_ParamLimits

0x62c4,	// (0x00064ed3) aid_size_cell_calc

0xa2d1,	// (0x00068ee0) popup_blid_sat_info2_window_ParamLimits

0xa2d1,	// (0x00068ee0) popup_blid_sat_info2_window

0x1326,	// (0x0005ff35) aid_size_cell_blid

0x132e,	// (0x0005ff3d) bg_popup_window_pane_cp07

0x1351,	// (0x0005ff60) grid_popup_blid_pane

0x135b,	// (0x0005ff6a) heading_pane_cp05_ParamLimits

0x135b,	// (0x0005ff6a) heading_pane_cp05

0x1425,	// (0x00060034) cell_popup_blid_pane_ParamLimits

0x1425,	// (0x00060034) cell_popup_blid_pane

0x1449,	// (0x00060058) cell_popup_blid_pane_g1

0x1451,	// (0x00060060) cell_popup_blid_pane_t1

0xa9b3,	// (0x000695c2) mup2_indicator_pane_ParamLimits

0xa9b3,	// (0x000695c2) mup2_indicator_pane

0x8ab7,	// (0x000676c6) mup2_visualizer_osc_pane

0x118e,	// (0x0005fd9d) mup2_visualizer_spec_pane_ParamLimits

0x118e,	// (0x0005fd9d) mup2_visualizer_spec_pane

0xaba5,	// (0x000697b4) mup2_spec_half_pane

0xabae,	// (0x000697bd) mup2_spec_half_pane_cp

0xabb8,	// (0x000697c7) mup2_spec_bar_pane_ParamLimits

0xabb8,	// (0x000697c7) mup2_spec_bar_pane

0x10dd,	// (0x0005fcec) mup2_spec_bar_pane_g1

0x10e7,	// (0x0005fcf6) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0006e27c) mup2_spec_bar_pane_g

0xabd7,	// (0x000697e6) mup2_osc_middle_pane

0x10f9,	// (0x0005fd08) mup2_visualizer_osc_pane_g1

0x05c9,	// (0x0005f1d8) popup_number_entry_window_t1_ParamLimits

0x05dc,	// (0x0005f1eb) popup_number_entry_window_t2_ParamLimits

0x05ee,	// (0x0005f1fd) popup_number_entry_window_t3_ParamLimits

0x608d,	// (0x00064c9c) popup_number_entry_window_t5_ParamLimits

0x608d,	// (0x00064c9c) popup_number_entry_window_t5

0xf12f,	// (0x0006dd3e) popup_number_entry_window_t_ParamLimits

0x0600,	// (0x0005f20f) text_title_cp2_ParamLimits

0x90fe,	// (0x00067d0d) aid_hotspot_pointer_text2_pane

0x9198,	// (0x00067da7) main_viewer_pane_g9_ParamLimits

0x9198,	// (0x00067da7) main_viewer_pane_g9

0x7ad8,	// (0x000666e7) cale_month_pane_t1_ParamLimits

0x8042,	// (0x00066c51) bg_cale_pane_ParamLimits

0x805a,	// (0x00066c69) list_cale_pane_ParamLimits

0x696f,	// (0x0006557e) listscroll_cale_day_pane_t1

0x806b,	// (0x00066c7a) scroll_pane_cp09_ParamLimits

0x8e59,	// (0x00067a68) main_mup_eq_pane_t1_ParamLimits

0x8e59,	// (0x00067a68) main_mup_eq_pane_t1

0x8e73,	// (0x00067a82) main_mup_eq_pane_t2_ParamLimits

0x8e73,	// (0x00067a82) main_mup_eq_pane_t2

0x8e8d,	// (0x00067a9c) main_mup_eq_pane_t3_ParamLimits

0x8e8d,	// (0x00067a9c) main_mup_eq_pane_t3

0x8ea5,	// (0x00067ab4) main_mup_eq_pane_t4_ParamLimits

0x8ea5,	// (0x00067ab4) main_mup_eq_pane_t4

0x8ebd,	// (0x00067acc) main_mup_eq_pane_t5_ParamLimits

0x8ebd,	// (0x00067acc) main_mup_eq_pane_t5

0x8ed5,	// (0x00067ae4) main_mup_eq_pane_t6_ParamLimits

0x8ed5,	// (0x00067ae4) main_mup_eq_pane_t6

0x8ee9,	// (0x00067af8) main_mup_eq_pane_t7_ParamLimits

0x8ee9,	// (0x00067af8) main_mup_eq_pane_t7

0x8efd,	// (0x00067b0c) main_mup_eq_pane_t8_ParamLimits

0x8efd,	// (0x00067b0c) main_mup_eq_pane_t8

0x8f13,	// (0x00067b22) main_mup_eq_pane_t9_ParamLimits

0x8f13,	// (0x00067b22) main_mup_eq_pane_t9

0x8f2b,	// (0x00067b3a) main_mup_eq_pane_t10_ParamLimits

0x8f2b,	// (0x00067b3a) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0006e0cb) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0006e0cb) main_mup_eq_pane_t

0x8fe8,	// (0x00067bf7) mup_equalizer_pane_cp5_ParamLimits

0x8ffe,	// (0x00067c0d) mup_equalizer_pane_cp6_ParamLimits

0x9016,	// (0x00067c25) mup_equalizer_pane_cp7_ParamLimits

0x0541,	// (0x0005f150) main_gallery_pane

0x1102,	// (0x0005fd11) smil2_volume_pane

0x111d,	// (0x0005fd2c) smil_status_volume_pane_g1_ParamLimits

0x110a,	// (0x0005fd19) smil_status_volume_pane_g2_ParamLimits

0xa4bd,	// (0x000690cc) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0006e281) smil_status_volume_pane_g_ParamLimits

0x132e,	// (0x0005ff3d) bg_popup_window_pane_cp07_ParamLimits

0x133c,	// (0x0005ff4b) blid_firmament_pane

0xabe0,	// (0x000697ef) aid_size_cell_gallery_ParamLimits

0xabe0,	// (0x000697ef) aid_size_cell_gallery

0xabee,	// (0x000697fd) grid_gallery_pane_ParamLimits

0xabee,	// (0x000697fd) grid_gallery_pane

0xabfe,	// (0x0006980d) cell_gallery_pane_ParamLimits

0xabfe,	// (0x0006980d) cell_gallery_pane

0x145f,	// (0x0006006e) bg_cell_gallery_focus_pane_ParamLimits

0x145f,	// (0x0006006e) bg_cell_gallery_focus_pane

0x1471,	// (0x00060080) cell_gallery_pane_g1_ParamLimits

0x1471,	// (0x00060080) cell_gallery_pane_g1

0xac4c,	// (0x0006985b) cell_gallery_pane_g2_ParamLimits

0xac4c,	// (0x0006985b) cell_gallery_pane_g2

0xac59,	// (0x00069868) cell_gallery_pane_g3_ParamLimits

0xac59,	// (0x00069868) cell_gallery_pane_g3

0x147d,	// (0x0006008c) cell_gallery_pane_g4_ParamLimits

0x147d,	// (0x0006008c) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0006e32f) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0006e32f) cell_gallery_pane_g

0x1489,	// (0x00060098) bg_cell_gallery_focus_pane_g1

0x1491,	// (0x000600a0) bg_cell_gallery_focus_pane_g2

0x1499,	// (0x000600a8) bg_cell_gallery_focus_pane_g3

0x14a1,	// (0x000600b0) bg_cell_gallery_focus_pane_g4

0x14a9,	// (0x000600b8) bg_cell_gallery_focus_pane_g5

0x14b1,	// (0x000600c0) bg_cell_gallery_focus_pane_g6

0x14b9,	// (0x000600c8) bg_cell_gallery_focus_pane_g7

0x14c1,	// (0x000600d0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0006e338) bg_cell_gallery_focus_pane_g

0x14c9,	// (0x000600d8) aid_firma_cardinal

0x14dd,	// (0x000600ec) blid_firmament_pane_t1

0x14f4,	// (0x00060103) blid_firmament_pane_t2

0x150b,	// (0x0006011a) blid_firmament_pane_t3

0x1522,	// (0x00060131) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0006e349) blid_firmament_pane_t

0x1539,	// (0x00060148) blid_sat_info_pane

0x1549,	// (0x00060158) blid_sat_info_pane_g1

0x1549,	// (0x00060158) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0006e352) blid_sat_info_pane_g

0x1553,	// (0x00060162) blid_sat_info_pane_t1

0x1561,	// (0x00060170) smil2_volume_content_pane

0x156a,	// (0x00060179) smil2_volume_pane_g1

0x1572,	// (0x00060181) smil2_volume_content_pane_g1

0x157b,	// (0x0006018a) smil2_volume_content_pane_g2

0x1584,	// (0x00060193) smil2_volume_content_pane_g3

0x158d,	// (0x0006019c) smil2_volume_content_pane_g4

0x1596,	// (0x000601a5) smil2_volume_content_pane_g5

0x159f,	// (0x000601ae) smil2_volume_content_pane_g6

0x15a8,	// (0x000601b7) smil2_volume_content_pane_g7

0x15b1,	// (0x000601c0) smil2_volume_content_pane_g8

0x15ba,	// (0x000601c9) smil2_volume_content_pane_g9

0x15c3,	// (0x000601d2) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0006e357) smil2_volume_content_pane_g

0x69d7,	// (0x000655e6) cale_week_day_heading_pane_t1_ParamLimits

0x6a04,	// (0x00065613) cale_week_day_heading_pane_t2_ParamLimits

0x6a31,	// (0x00065640) cale_week_day_heading_pane_t3_ParamLimits

0x6a5e,	// (0x0006566d) cale_week_day_heading_pane_t4_ParamLimits

0x6a8b,	// (0x0006569a) cale_week_day_heading_pane_t5_ParamLimits

0x6ab8,	// (0x000656c7) cale_week_day_heading_pane_t6_ParamLimits

0x6ae5,	// (0x000656f4) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0006de43) cale_week_day_heading_pane_t_ParamLimits

0x6b12,	// (0x00065721) bg_cale_side_pane_ParamLimits

0x6b20,	// (0x0006572f) cale_week_time_pane_t1_ParamLimits

0x6b38,	// (0x00065747) cale_week_time_pane_t2_ParamLimits

0x6b50,	// (0x0006575f) cale_week_time_pane_t3_ParamLimits

0x6b68,	// (0x00065777) cale_week_time_pane_t4_ParamLimits

0x6b80,	// (0x0006578f) cale_week_time_pane_t5_ParamLimits

0x6b98,	// (0x000657a7) cale_week_time_pane_t6_ParamLimits

0x6bb0,	// (0x000657bf) cale_week_time_pane_t7_ParamLimits

0x6bc8,	// (0x000657d7) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0006de52) cale_week_time_pane_t_ParamLimits

0x6be0,	// (0x000657ef) cell_cale_week_pane_g2_ParamLimits

0x6b12,	// (0x00065721) bg_cale_side_pane_cp01_ParamLimits

0x7df7,	// (0x00066a06) cale_month_week_pane_t1_ParamLimits

0x7e0e,	// (0x00066a1d) cale_month_week_pane_t2_ParamLimits

0x7e25,	// (0x00066a34) cale_month_week_pane_t3_ParamLimits

0x7e3c,	// (0x00066a4b) cale_month_week_pane_t4_ParamLimits

0x7e53,	// (0x00066a62) cale_month_week_pane_t5_ParamLimits

0x7e6a,	// (0x00066a79) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0006df2b) cale_month_week_pane_t_ParamLimits

0x7f37,	// (0x00066b46) cell_cale_month_pane_g1_ParamLimits

0x0541,	// (0x0005f150) main_cale_event_viewer_pane

0x0541,	// (0x0005f150) listscroll_cale_event_viewer_pane

0x15cc,	// (0x000601db) list_cale_ev_pane

0x15d4,	// (0x000601e3) scroll_pane_cp023

0x15e0,	// (0x000601ef) field_cale_ev_pane_ParamLimits

0x15e0,	// (0x000601ef) field_cale_ev_pane

0x15fe,	// (0x0006020d) field_cale_ev_content_pane_ParamLimits

0x15fe,	// (0x0006020d) field_cale_ev_content_pane

0x160a,	// (0x00060219) field_cale_ev_pane_g1_ParamLimits

0x160a,	// (0x00060219) field_cale_ev_pane_g1

0x1616,	// (0x00060225) field_cale_ev_pane_g2_ParamLimits

0x1616,	// (0x00060225) field_cale_ev_pane_g2

0x162e,	// (0x0006023d) field_cale_ev_pane_g3_ParamLimits

0x162e,	// (0x0006023d) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0006e36c) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0006e36c) field_cale_ev_pane_g

0x1646,	// (0x00060255) field_cale_ev_pane_t1_ParamLimits

0x1646,	// (0x00060255) field_cale_ev_pane_t1

0x165d,	// (0x0006026c) field_cale_ev_content_pane_t1_ParamLimits

0x165d,	// (0x0006026c) field_cale_ev_content_pane_t1

0x90c8,	// (0x00067cd7) bg_button_pane_cp01

0x646d,	// (0x0006507c) listscroll_cale_week_pane_ParamLimits

0x67d0,	// (0x000653df) popup_toolbar_window_cp01

0x696f,	// (0x0006557e) listscroll_cale_week_pane_t1_ParamLimits

0x646d,	// (0x0006507c) listscroll_cale_day_pane_ParamLimits

0x67d0,	// (0x000653df) popup_toolbar_window_cp02

0x696f,	// (0x0006557e) listscroll_cale_day_pane_t1_ParamLimits

0x646d,	// (0x0006507c) main_cale_month_pane_ParamLimits

0xa3a1,	// (0x00068fb0) popup_toolbar_window_cp03_ParamLimits

0xa3a1,	// (0x00068fb0) popup_toolbar_window_cp03

0x9414,	// (0x00068023) main_image_pane_g2_ParamLimits

0x9414,	// (0x00068023) main_image_pane_g2

0x9420,	// (0x0006802f) main_image_pane_g3_ParamLimits

0x9420,	// (0x0006802f) main_image_pane_g3

0x0002,

0xf54e,	// (0x0006e15d) main_image_pane_g_ParamLimits

0xf54e,	// (0x0006e15d) main_image_pane_g

0x942c,	// (0x0006803b) main_image_pane_t1_ParamLimits

0x9443,	// (0x00068052) main_image_pane_t2_ParamLimits

0x9443,	// (0x00068052) main_image_pane_t2

0x9455,	// (0x00068064) main_image_pane_t3_ParamLimits

0x9455,	// (0x00068064) main_image_pane_t3

0x9467,	// (0x00068076) main_image_pane_t4_ParamLimits

0x9467,	// (0x00068076) main_image_pane_t4

0x0003,

0xf555,	// (0x0006e164) main_image_pane_t_ParamLimits

0xf555,	// (0x0006e164) main_image_pane_t

0x9479,	// (0x00068088) popup_image_details_window_cp01

0x9483,	// (0x00068092) popup_toobar_trans_pane_cp01_ParamLimits

0x9483,	// (0x00068092) popup_toobar_trans_pane_cp01

0xa31e,	// (0x00068f2d) popup_image_details_window_ParamLimits

0xa31e,	// (0x00068f2d) popup_image_details_window

0x1063,	// (0x0005fc72) popup_image_focus_window

0xa63c,	// (0x0006924b) camera2_autofocus_pane_ParamLimits

0xa63c,	// (0x0006924b) camera2_autofocus_pane

0x0541,	// (0x0005f150) bg_popup_sub_pane_cp06

0x167b,	// (0x0006028a) popup_image_focus_window_g1

0x1683,	// (0x00060292) popup_image_focus_window_g2

0x168b,	// (0x0006029a) popup_image_focus_window_g3

0x1693,	// (0x000602a2) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0006e373) popup_image_focus_window_g

0x169b,	// (0x000602aa) popup_image_focus_window_t1

0x16a9,	// (0x000602b8) popup_image_focus_window_t2

0x16b9,	// (0x000602c8) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0006e37c) popup_image_focus_window_t

0x16c7,	// (0x000602d6) camera2_autofocus_pane_g1

0xf115,	// (0x0006dd24) bg_tb_trans_pane_cp01

0x16d5,	// (0x000602e4) popup_image_details_window_g1

0x16e8,	// (0x000602f7) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0006e38e) popup_image_details_window_g

0x1711,	// (0x00060320) popup_image_details_window_t1

0x1723,	// (0x00060332) popup_image_details_window_t2

0x173c,	// (0x0006034b) popup_image_details_window_t3

0x1750,	// (0x0006035f) popup_image_details_window_t4

0x176b,	// (0x0006037a) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0006e395) popup_image_details_window_t

0x643f,	// (0x0006504e) bg_calc_paper_pane_ParamLimits

0x0541,	// (0x0005f150) grid_highlight_pane_cp013

0x6453,	// (0x00065062) list_calc_pane_ParamLimits

0x6465,	// (0x00065074) scroll_pane_cp024

0x646d,	// (0x0006507c) bg_calc_display_pane_ParamLimits

0x6479,	// (0x00065088) calc_display_pane_t1_ParamLimits

0x648e,	// (0x0006509d) calc_display_pane_t2_ParamLimits

0x64a3,	// (0x000650b2) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0006ddc5) calc_display_pane_t_ParamLimits

0x65d2,	// (0x000651e1) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0006dde2) cell_calc_pane_g

0x65db,	// (0x000651ea) cell_calc_pane_t1

0x65ea,	// (0x000651f9) grid_highlight_pane_cp02_ParamLimits

0x6600,	// (0x0006520f) toolbar_button_pane_cp01_ParamLimits

0x6600,	// (0x0006520f) toolbar_button_pane_cp01

0x94bd,	// (0x000680cc) temp_image_control_pane_ParamLimits

0x94bd,	// (0x000680cc) temp_image_control_pane

0xf115,	// (0x0006dd24) main_mp3_pane

0x1785,	// (0x00060394) temp_image_control_pane_g1_ParamLimits

0x1785,	// (0x00060394) temp_image_control_pane_g1

0x1793,	// (0x000603a2) temp_image_control_pane_g2_ParamLimits

0x1793,	// (0x000603a2) temp_image_control_pane_g2

0x17a5,	// (0x000603b4) temp_image_control_pane_g3_ParamLimits

0x17a5,	// (0x000603b4) temp_image_control_pane_g3

0xac96,	// (0x000698a5) temp_image_control_pane_g4_ParamLimits

0xac96,	// (0x000698a5) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0006e3a0) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0006e3a0) temp_image_control_pane_g

0x1785,	// (0x00060394) main_mp3_pane_g1

0xaca7,	// (0x000698b6) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0006e3a9) main_mp3_pane_g

0x17e8,	// (0x000603f7) main_mp3_pane_t1

0x6d9e,	// (0x000659ad) main_camera_pane_g8_ParamLimits

0x6d9e,	// (0x000659ad) main_camera_pane_g8

0x6efb,	// (0x00065b0a) main_video_pane_g7_ParamLimits

0x6efb,	// (0x00065b0a) main_video_pane_g7

0xa784,	// (0x00069393) main_camera2_pane_t7_ParamLimits

0xa784,	// (0x00069393) main_camera2_pane_t7

0x7485,	// (0x00066094) scroll_pane_cp025_ParamLimits

0x7485,	// (0x00066094) scroll_pane_cp025

0x7499,	// (0x000660a8) scroll_pane_cp026_ParamLimits

0x7499,	// (0x000660a8) scroll_pane_cp026

0x74a8,	// (0x000660b7) wml_content_pane_ParamLimits

0x0541,	// (0x0005f150) main_touch_calib_pane

0xad4b,	// (0x0006995a) main_touch_calib_pane_g1

0xad57,	// (0x00069966) main_touch_calib_pane_g2

0xad63,	// (0x00069972) main_touch_calib_pane_g3

0xad6f,	// (0x0006997e) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0006e3c7) main_touch_calib_pane_g

0xad7b,	// (0x0006998a) main_touch_calib_pane_t1

0xad92,	// (0x000699a1) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0006e3d0) main_touch_calib_pane_t

0x8944,	// (0x00067553) mup_progress_pane_cp02

0x8963,	// (0x00067572) navi_pane_g1

0x8a1e,	// (0x0006762d) navi_pane_mp_t3

0xf115,	// (0x0006dd24) main_mp3_pane_ParamLimits

0xa3df,	// (0x00068fee) navi_pane_ParamLimits

0x1785,	// (0x00060394) main_mp3_pane_g1_ParamLimits

0xaca7,	// (0x000698b6) main_mp3_pane_g2_ParamLimits

0xacb3,	// (0x000698c2) main_mp3_pane_g3_ParamLimits

0xacb3,	// (0x000698c2) main_mp3_pane_g3

0xacbf,	// (0x000698ce) main_mp3_pane_g4_ParamLimits

0xacbf,	// (0x000698ce) main_mp3_pane_g4

0x17b5,	// (0x000603c4) main_mp3_pane_g5_ParamLimits

0x17b5,	// (0x000603c4) main_mp3_pane_g5

0x17c3,	// (0x000603d2) main_mp3_pane_g6_ParamLimits

0x17c3,	// (0x000603d2) main_mp3_pane_g6

0x17d0,	// (0x000603df) main_mp3_pane_g7_ParamLimits

0x17d0,	// (0x000603df) main_mp3_pane_g7

0x17dc,	// (0x000603eb) main_mp3_pane_g8_ParamLimits

0x17dc,	// (0x000603eb) main_mp3_pane_g8

0xf79a,	// (0x0006e3a9) main_mp3_pane_g_ParamLimits

0xaccb,	// (0x000698da) main_mp3_pane_t2

0xacdb,	// (0x000698ea) main_mp3_pane_t3

0x17f6,	// (0x00060405) main_mp3_pane_t4

0x1804,	// (0x00060413) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0006e3ba) main_mp3_pane_t

0x1812,	// (0x00060421) mup_progress_pane_cp01

0x5e07,	// (0x00064a16) aid_zoom_text_secondary2

0x15cc,	// (0x000601db) list_cale_ev2_pane

0x15d4,	// (0x000601e3) scroll_pane_cp023_ParamLimits

0xade7,	// (0x000699f6) field_cale_ev2_pane_ParamLimits

0xade7,	// (0x000699f6) field_cale_ev2_pane

0xae10,	// (0x00069a1f) field_cale_ev2_pane_g1_ParamLimits

0xae10,	// (0x00069a1f) field_cale_ev2_pane_g1

0xae1c,	// (0x00069a2b) field_cale_ev2_pane_g2_ParamLimits

0xae1c,	// (0x00069a2b) field_cale_ev2_pane_g2

0xae34,	// (0x00069a43) field_cale_ev2_pane_g3_ParamLimits

0xae34,	// (0x00069a43) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0006e3db) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0006e3db) field_cale_ev2_pane_g

0x50d7,	// (0x00063ce6) field_cale_ev2_pane_t1_ParamLimits

0x50d7,	// (0x00063ce6) field_cale_ev2_pane_t1

0x50ee,	// (0x00063cfd) field_cale_ev2_pane_t2_ParamLimits

0x50ee,	// (0x00063cfd) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0006e3e4) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0006e3e4) field_cale_ev2_pane_t

0x920e,	// (0x00067e1d) main_postcard_pane_g5_ParamLimits

0x920e,	// (0x00067e1d) main_postcard_pane_g5

0x921c,	// (0x00067e2b) main_postcard_pane_g6_ParamLimits

0x921c,	// (0x00067e2b) main_postcard_pane_g6

0x6d1d,	// (0x0006592c) camera2_autofocus_pane_cp_ParamLimits

0x6d1d,	// (0x0006592c) camera2_autofocus_pane_cp

0xf115,	// (0x0006dd24) main_mup3_pane

0xae78,	// (0x00069a87) main_mup3_pane_g1_ParamLimits

0xae78,	// (0x00069a87) main_mup3_pane_g1

0xae99,	// (0x00069aa8) main_mup3_pane_g2_ParamLimits

0xae99,	// (0x00069aa8) main_mup3_pane_g2

0xaf11,	// (0x00069b20) main_mup3_pane_g3_ParamLimits

0xaf11,	// (0x00069b20) main_mup3_pane_g3

0xaf50,	// (0x00069b5f) main_mup3_pane_g4_ParamLimits

0xaf50,	// (0x00069b5f) main_mup3_pane_g4

0xaf8f,	// (0x00069b9e) main_mup3_pane_g5_ParamLimits

0xaf8f,	// (0x00069b9e) main_mup3_pane_g5

0xafce,	// (0x00069bdd) main_mup3_pane_g6_ParamLimits

0xafce,	// (0x00069bdd) main_mup3_pane_g6

0x1862,	// (0x00060471) main_mup3_pane_g7_ParamLimits

0x1862,	// (0x00060471) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0006e3f4) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0006e3f4) main_mup3_pane_g

0xb040,	// (0x00069c4f) main_mup3_pane_t1_ParamLimits

0xb040,	// (0x00069c4f) main_mup3_pane_t1

0xb0ab,	// (0x00069cba) main_mup3_pane_t2_ParamLimits

0xb0ab,	// (0x00069cba) main_mup3_pane_t2

0xb170,	// (0x00069d7f) main_mup3_pane_t4_ParamLimits

0xb170,	// (0x00069d7f) main_mup3_pane_t4

0xb1be,	// (0x00069dcd) main_mup3_pane_t5_ParamLimits

0xb1be,	// (0x00069dcd) main_mup3_pane_t5

0xb266,	// (0x00069e75) main_mup3_pane_t6_ParamLimits

0xb266,	// (0x00069e75) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0006e405) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0006e405) main_mup3_pane_t

0xb30e,	// (0x00069f1d) mup3_progress_pane_ParamLimits

0xb30e,	// (0x00069f1d) mup3_progress_pane

0xb379,	// (0x00069f88) popup_mup3_control_window_ParamLimits

0xb379,	// (0x00069f88) popup_mup3_control_window

0x1870,	// (0x0006047f) popup_mup3_text_window

0xb392,	// (0x00069fa1) mup3_progress_pane_t1

0xb3a9,	// (0x00069fb8) mup3_progress_pane_t2

0x1878,	// (0x00060487) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0006e412) mup3_progress_pane_t

0x188f,	// (0x0006049e) mup_progress_pane_cp03

0x0541,	// (0x0005f150) bg_tb_trans_pane_cp04

0xb3c0,	// (0x00069fcf) mup3_volume_pane

0xb3c8,	// (0x00069fd7) popup_mup3_control_window_g1

0xb3d1,	// (0x00069fe0) mup3_volume_pane_g1

0xb3da,	// (0x00069fe9) mup3_volume_pane_g2

0xb3e3,	// (0x00069ff2) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0006e419) mup3_volume_pane_g

0x0541,	// (0x0005f150) bg_tb_trans_pane_cp03

0x189f,	// (0x000604ae) popup_mup3_text_window_g1

0x18a7,	// (0x000604b6) popup_mup3_text_window_t1

0x6591,	// (0x000651a0) list_calc_item_pane_g1_ParamLimits

0x1258,	// (0x0005fe67) mup_volume_pane_cp_g1

0xada9,	// (0x000699b8) main_touch_calib_pane_t3

0xadbd,	// (0x000699cc) main_touch_calib_pane_t4

0xadd1,	// (0x000699e0) main_touch_calib_pane_t5

0x054b,	// (0x0005f15a) aid_cell_size_toolbar2

0x0553,	// (0x0005f162) aid_popup3_width_pane

0x4dca,	// (0x000639d9) aid_zoom_text_msg_primary

0x6cea,	// (0x000658f9) vorec_t7

0x64e2,	// (0x000650f1) bg_calc_paper_pane_g1_ParamLimits

0x64ee,	// (0x000650fd) bg_calc_paper_pane_g2_ParamLimits

0x64fa,	// (0x00065109) bg_calc_paper_pane_g3_ParamLimits

0x6506,	// (0x00065115) bg_calc_paper_pane_g4_ParamLimits

0x6512,	// (0x00065121) bg_calc_paper_pane_g5_ParamLimits

0x651e,	// (0x0006512d) bg_calc_paper_pane_g6_ParamLimits

0x652f,	// (0x0006513e) bg_calc_paper_pane_g7_ParamLimits

0x6540,	// (0x0006514f) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0006ddcc) bg_calc_paper_pane_g_ParamLimits

0x6551,	// (0x00065160) calc_bg_paper_pane_g9_ParamLimits

0x6e10,	// (0x00065a1f) image_qvga_pane_ParamLimits

0x6e10,	// (0x00065a1f) image_qvga_pane

0x60ea,	// (0x00064cf9) bg_popup_sub_pane_cp04_ParamLimits

0x9383,	// (0x00067f92) popup_mup_playback_window_g1_ParamLimits

0x938f,	// (0x00067f9e) popup_mup_playback_window_t1_ParamLimits

0x93a4,	// (0x00067fb3) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0006e158) popup_mup_playback_window_t_ParamLimits

0xa8b3,	// (0x000694c2) main_mup2_pane_g3_ParamLimits

0xa8b3,	// (0x000694c2) main_mup2_pane_g3

0x70fe,	// (0x00065d0d) popup_toolbar_window_cp04

0x9ab0,	// (0x000686bf) popup_call2_audio_second_window_g3_ParamLimits

0x9ab0,	// (0x000686bf) popup_call2_audio_second_window_g3

0x9eba,	// (0x00068ac9) popup_call2_audio_first_window_g4_ParamLimits

0x9eba,	// (0x00068ac9) popup_call2_audio_first_window_g4

0xeff5,	// (0x0006dc04) popup_call2_audio_in_window_g4_ParamLimits

0xeff5,	// (0x0006dc04) popup_call2_audio_in_window_g4

0x93b9,	// (0x00067fc8) aid_area_sk_bg_cut_ParamLimits

0x93b9,	// (0x00067fc8) aid_area_sk_bg_cut

0x93c6,	// (0x00067fd5) aid_area_sk_bg_cut_2_ParamLimits

0x93c6,	// (0x00067fd5) aid_area_sk_bg_cut_2

0xac3c,	// (0x0006984b) aid_placing_details_win

0xac44,	// (0x00069853) aid_placing_details_win_2

0x16c7,	// (0x000602d6) camera2_autofocus_pane_g1_ParamLimits

0x5fe2,	// (0x00064bf1) popup_fixed_preview_cale_window_ParamLimits

0x5fe2,	// (0x00064bf1) popup_fixed_preview_cale_window

0x8ad1,	// (0x000676e0) navi_slider_pane_g3

0x8ada,	// (0x000676e9) navi_slider_pane_g4

0x8ae3,	// (0x000676f2) navi_slider_pane_g5

0x8ad1,	// (0x000676e0) navi_slider_pane_g6

0x8aec,	// (0x000676fb) navi_slider_pane_g7

0x9037,	// (0x00067c46) mup_scale_pane_g3

0x9040,	// (0x00067c4f) mup_scale_pane_g4

0x9049,	// (0x00067c58) mup_scale_pane_g5

0x9052,	// (0x00067c61) mup_scale_pane_g6

0x905b,	// (0x00067c6a) mup_scale_pane_g7

0x8ad1,	// (0x000676e0) cams2_slider_pane_g3

0x130d,	// (0x0005ff1c) cams2_slider_pane_g4

0xab94,	// (0x000697a3) cams2_slider_pane_g5

0x8ad1,	// (0x000676e0) cams2_slider_pane_g6

0xab9c,	// (0x000697ab) cams2_slider_pane_g7

0x1549,	// (0x00060158) camera2_autofocus_pane_cp_g1

0x18b5,	// (0x000604c4) bg_popup_preview_window_pane_cp02_ParamLimits

0x18b5,	// (0x000604c4) bg_popup_preview_window_pane_cp02

0x18c1,	// (0x000604d0) list_fp_cale_pane_ParamLimits

0x18c1,	// (0x000604d0) list_fp_cale_pane

0x18cd,	// (0x000604dc) popup_fixed_preview_cale_window_t1_ParamLimits

0x18cd,	// (0x000604dc) popup_fixed_preview_cale_window_t1

0xb3ec,	// (0x00069ffb) popup_fixed_preview_cale_window_t2_ParamLimits

0xb3ec,	// (0x00069ffb) popup_fixed_preview_cale_window_t2

0xb401,	// (0x0006a010) popup_fixed_preview_cale_window_t3_ParamLimits

0xb401,	// (0x0006a010) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0006e420) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0006e420) popup_fixed_preview_cale_window_t

0xb416,	// (0x0006a025) list_single_fp_cale_pane_ParamLimits

0xb416,	// (0x0006a025) list_single_fp_cale_pane

0x18eb,	// (0x000604fa) list_single_fp_cale_pane_g1_ParamLimits

0x18eb,	// (0x000604fa) list_single_fp_cale_pane_g1

0x18f7,	// (0x00060506) list_single_fp_cale_pane_g2_ParamLimits

0x18f7,	// (0x00060506) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0006e427) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0006e427) list_single_fp_cale_pane_g

0x1910,	// (0x0006051f) list_single_fp_cale_pane_t1_ParamLimits

0x1910,	// (0x0006051f) list_single_fp_cale_pane_t1

0x1922,	// (0x00060531) list_single_fp_cale_pane_t2_ParamLimits

0x1922,	// (0x00060531) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0006e42e) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0006e42e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0541,	// (0x0005f150) main_dialer_pane

0xb428,	// (0x0006a037) aid_cell_size_keypad

0xb432,	// (0x0006a041) dialer_ne_pane

0xb43c,	// (0x0006a04b) grid_dialer_command_1_pane

0xb444,	// (0x0006a053) grid_dialer_command_2_pane

0xb44c,	// (0x0006a05b) grid_dialer_keypad_pane

0xb45e,	// (0x0006a06d) bg_popup_call_pane_cp06_ParamLimits

0xb45e,	// (0x0006a06d) bg_popup_call_pane_cp06

0xb46a,	// (0x0006a079) dialer_ne_clear_pane_ParamLimits

0xb46a,	// (0x0006a079) dialer_ne_clear_pane

0x1955,	// (0x00060564) dialer_ne_pane_g1

0x195d,	// (0x0006056c) dialer_ne_pane_t1_ParamLimits

0x195d,	// (0x0006056c) dialer_ne_pane_t1

0xb476,	// (0x0006a085) dialer_ne_pane_t2_ParamLimits

0xb476,	// (0x0006a085) dialer_ne_pane_t2

0xb493,	// (0x0006a0a2) dialer_ne_pane_t3_ParamLimits

0xb493,	// (0x0006a0a2) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0006e433) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0006e433) dialer_ne_pane_t

0xb4b7,	// (0x0006a0c6) dialer_ne_pane_t3_copy1_ParamLimits

0xb4b7,	// (0x0006a0c6) dialer_ne_pane_t3_copy1

0xb4db,	// (0x0006a0ea) cell_dialer_keypad_pane_ParamLimits

0xb4db,	// (0x0006a0ea) cell_dialer_keypad_pane

0xb4f2,	// (0x0006a101) cell_dialer_command_1_pane_ParamLimits

0xb4f2,	// (0x0006a101) cell_dialer_command_1_pane

0xb508,	// (0x0006a117) cell_dialer_command_2_pane_ParamLimits

0xb508,	// (0x0006a117) cell_dialer_command_2_pane

0x196f,	// (0x0006057e) bg_button_pane_cp02_ParamLimits

0x196f,	// (0x0006057e) bg_button_pane_cp02

0xb517,	// (0x0006a126) cell_dialer_keypad_pane_g1_ParamLimits

0xb517,	// (0x0006a126) cell_dialer_keypad_pane_g1

0x196f,	// (0x0006057e) bg_button_pane_cp03_ParamLimits

0x196f,	// (0x0006057e) bg_button_pane_cp03

0xb52c,	// (0x0006a13b) cell_dialer_command_1_pane_g1_ParamLimits

0xb52c,	// (0x0006a13b) cell_dialer_command_1_pane_g1

0x197b,	// (0x0006058a) bg_button_pane_cp04

0xb540,	// (0x0006a14f) cell_dialer_command_2_pane_g1

0x8ab7,	// (0x000676c6) bg_button_pane_cp06

0x1983,	// (0x00060592) dialer_ne_clear_pane_g1

0x896f,	// (0x0006757e) navi_pane_g2

0x899d,	// (0x000675ac) navi_pane_g3

0x0002,

0xf44c,	// (0x0006e05b) navi_pane_g

0x8a2c,	// (0x0006763b) navi_pane_mv_g2

0x8a53,	// (0x00067662) navi_pane_mv_g5

0x8a5b,	// (0x0006766a) navi_pane_mv_t1

0x646d,	// (0x0006507c) main_clock2_pane

0xb56f,	// (0x0006a17e) main_clock2_list_pane_ParamLimits

0xb56f,	// (0x0006a17e) main_clock2_list_pane

0xb597,	// (0x0006a1a6) main_clock2_pane_t1_ParamLimits

0xb597,	// (0x0006a1a6) main_clock2_pane_t1

0xb5c5,	// (0x0006a1d4) main_clock2_pane_t2_ParamLimits

0xb5c5,	// (0x0006a1d4) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0006e43a) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0006e43a) main_clock2_pane_t

0xb62c,	// (0x0006a23b) popup_clock_analogue_window_cp03_ParamLimits

0xb62c,	// (0x0006a23b) popup_clock_analogue_window_cp03

0xb64a,	// (0x0006a259) popup_clock_digital_window_cp02_ParamLimits

0xb64a,	// (0x0006a259) popup_clock_digital_window_cp02

0xb6b7,	// (0x0006a2c6) main_clock2_list_single_pane_ParamLimits

0xb6b7,	// (0x0006a2c6) main_clock2_list_single_pane

0x8ab7,	// (0x000676c6) list_highlight_pane_cp05

0x198b,	// (0x0006059a) main_clock2_list_single_pane_t1

0x70fe,	// (0x00065d0d) popup_toolbar_window_cp04_ParamLimits

0xac66,	// (0x00069875) camera2_autofocus_pane_g2_ParamLimits

0xac66,	// (0x00069875) camera2_autofocus_pane_g2

0xac72,	// (0x00069881) camera2_autofocus_pane_g3_ParamLimits

0xac72,	// (0x00069881) camera2_autofocus_pane_g3

0xac7e,	// (0x0006988d) camera2_autofocus_pane_g4_ParamLimits

0xac7e,	// (0x0006988d) camera2_autofocus_pane_g4

0xac8a,	// (0x00069899) camera2_autofocus_pane_g5_ParamLimits

0xac8a,	// (0x00069899) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0006e383) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0006e383) camera2_autofocus_pane_g

0xae58,	// (0x00069a67) camera2_autofocus_pane_cp_g2

0xae60,	// (0x00069a6f) camera2_autofocus_pane_cp_g3

0xae68,	// (0x00069a77) camera2_autofocus_pane_cp_g4

0xae70,	// (0x00069a7f) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0006e3e9) camera2_autofocus_pane_cp_g

0xb456,	// (0x0006a065) popup_dialer_spcha_window

0x0541,	// (0x0005f150) bg_popup_sub_pane_cp07

0x1999,	// (0x000605a8) list_spcha_pane

0x19a1,	// (0x000605b0) list_single_spcha_pane_ParamLimits

0x19a1,	// (0x000605b0) list_single_spcha_pane

0x0541,	// (0x0005f150) list_highlight_pane_cp06

0x19b2,	// (0x000605c1) list_single_spcha_pane_t1

0xed9f,	// (0x0006d9ae) popup_call2_audio_out_window_g4_ParamLimits

0xed9f,	// (0x0006d9ae) popup_call2_audio_out_window_g4

0x0541,	// (0x0005f150) main_imed2_pane

0x106b,	// (0x0005fc7a) popup_imed_adjust2_window

0xa32c,	// (0x00068f3b) popup_imed_trans_window_ParamLimits

0xa32c,	// (0x00068f3b) popup_imed_trans_window

0x1387,	// (0x0005ff96) popup_blid_sat_info2_window_t1

0x1395,	// (0x0005ffa4) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0006e318) popup_blid_sat_info2_window_t

0xb761,	// (0x0006a370) aid_size_cell_colour_35

0xb77b,	// (0x0006a38a) aid_size_cell_colour_112

0xb792,	// (0x0006a3a1) aid_size_cell_effect

0xf115,	// (0x0006dd24) bg_tb_trans_pane_cp02

0xf123,	// (0x0006dd32) heading_imed_pane

0xb7ac,	// (0x0006a3bb) listscroll_imed_pane

0x19c0,	// (0x000605cf) heading_imed_pane_g1

0x19c8,	// (0x000605d7) heading_imed_pane_t1

0x19d6,	// (0x000605e5) grid_imed_colour_35_pane_ParamLimits

0x19d6,	// (0x000605e5) grid_imed_colour_35_pane

0xb7b8,	// (0x0006a3c7) grid_imed_effect_pane

0x19ed,	// (0x000605fc) list_imed_aspect_pane

0xb7c8,	// (0x0006a3d7) scroll_pane_cp027_ParamLimits

0xb7c8,	// (0x0006a3d7) scroll_pane_cp027

0xb7d4,	// (0x0006a3e3) cell_imed_effect_pane_ParamLimits

0xb7d4,	// (0x0006a3e3) cell_imed_effect_pane

0x19f5,	// (0x00060604) cell_imed_colour_pane_ParamLimits

0x19f5,	// (0x00060604) cell_imed_colour_pane

0x1a37,	// (0x00060646) cell_imed_colour_pane_g1_ParamLimits

0x1a37,	// (0x00060646) cell_imed_colour_pane_g1

0x1a48,	// (0x00060657) hgihlgiht_grid_pane_cp016_ParamLimits

0x1a48,	// (0x00060657) hgihlgiht_grid_pane_cp016

0xb7ec,	// (0x0006a3fb) cell_imed_effect_pane_g1

0xb7f4,	// (0x0006a403) grid_highlight_pane_cp017

0x1a59,	// (0x00060668) list_imed_single_pane_ParamLimits

0x1a59,	// (0x00060668) list_imed_single_pane

0x0541,	// (0x0005f150) list_highlight_pane_cp07

0x1a6e,	// (0x0006067d) list_imed_aspect_pane_comp1_t1

0x1043,	// (0x0005fc52) bg_tb_trans_pane_cp05

0x1a90,	// (0x0006069f) popup_imed_adjust2_window_g1

0x1ab7,	// (0x000606c6) popup_imed_adjust2_window_t1

0x1acf,	// (0x000606de) slider_imed_adjust_pane

0x1ae3,	// (0x000606f2) slider_imed_adjust_pane_g1

0x1af3,	// (0x00060702) slider_imed_adjust_pane_g2

0x1b03,	// (0x00060712) slider_imed_adjust_pane_g3

0x1b14,	// (0x00060723) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0006e457) slider_imed_adjust_pane_g

0xb7fd,	// (0x0006a40c) aid_size_cell_clipart2

0xb809,	// (0x0006a418) grid_imed_clipart_pane

0x1b25,	// (0x00060734) scroll_pane_cp031

0xb813,	// (0x0006a422) cell_imed_clipart_pane_ParamLimits

0xb813,	// (0x0006a422) cell_imed_clipart_pane

0xb835,	// (0x0006a444) cell_imed_clipart_pane_g1

0x0541,	// (0x0005f150) grid_highlight_pane_cp014

0xb57b,	// (0x0006a18a) main_clock2_pane_g1_ParamLimits

0xb57b,	// (0x0006a18a) main_clock2_pane_g1

0xb662,	// (0x0006a271) aid_call2_pane_cp10

0xb674,	// (0x0006a283) aid_call_pane_cp10

0x887d,	// (0x0006748c) popup_clock_analogue_window_cp10_g1

0x887d,	// (0x0006748c) popup_clock_analogue_window_cp10_g2

0xb686,	// (0x0006a295) popup_clock_analogue_window_cp10_g3

0xb686,	// (0x0006a295) popup_clock_analogue_window_cp10_g4

0x887d,	// (0x0006748c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0006e445) popup_clock_analogue_window_cp10_g

0xb698,	// (0x0006a2a7) popup_clock_analogue_window_cp10_t1

0xb6c9,	// (0x0006a2d8) clock_digital_number_pane_cp10_ParamLimits

0xb6c9,	// (0x0006a2d8) clock_digital_number_pane_cp10

0xb6e1,	// (0x0006a2f0) clock_digital_number_pane_cp11_ParamLimits

0xb6e1,	// (0x0006a2f0) clock_digital_number_pane_cp11

0xb6f9,	// (0x0006a308) clock_digital_number_pane_cp12_ParamLimits

0xb6f9,	// (0x0006a308) clock_digital_number_pane_cp12

0xb711,	// (0x0006a320) clock_digital_number_pane_cp13_ParamLimits

0xb711,	// (0x0006a320) clock_digital_number_pane_cp13

0xb729,	// (0x0006a338) clock_digital_separator_pane_cp10_ParamLimits

0xb729,	// (0x0006a338) clock_digital_separator_pane_cp10

0xb741,	// (0x0006a350) popup_clock_digital_window_cp02_t1_ParamLimits

0xb741,	// (0x0006a350) popup_clock_digital_window_cp02_t1

0x0c0f,	// (0x0005f81e) clock_digital_number_pane_cp10_g1

0x0c0f,	// (0x0005f81e) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0006e460) clock_digital_number_pane_cp10_g

0x0c0f,	// (0x0005f81e) clock_digital_separator_pane_cp10_g1

0x0c0f,	// (0x0005f81e) clock_digital_separator_pane_g2_cp10

0x8a87,	// (0x00067696) navi_pane_vded_g4

0x8a90,	// (0x0006769f) navi_pane_vded_g5

0x8a99,	// (0x000676a8) navi_pane_vded_t1

0x0541,	// (0x0005f150) main_vded_pane

0xb83e,	// (0x0006a44d) main_vded_pane_g1

0xb84a,	// (0x0006a459) main_vded_pane_g2

0xb854,	// (0x0006a463) main_vded_pane_g3

0x0002,

0xf856,	// (0x0006e465) main_vded_pane_g

0xb85e,	// (0x0006a46d) main_vded_pane_t1

0xb86c,	// (0x0006a47b) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0006e46c) main_vded_pane_t

0xb87a,	// (0x0006a489) vded_slider_pane

0xb884,	// (0x0006a493) vded_video_pane

0x1b2d,	// (0x0006073c) vded_video_pane_g1

0xb88e,	// (0x0006a49d) vded_video_pane_g2

0x1549,	// (0x00060158) vded_video_pane_g3

0x0002,

0xf862,	// (0x0006e471) vded_video_pane_g

0x1b37,	// (0x00060746) vded_slider_pane_g1

0x1258,	// (0x0005fe67) vded_slider_pane_g2

0x1b40,	// (0x0006074f) vded_slider_pane_g3

0x1b49,	// (0x00060758) vded_slider_pane_g4

0x1b52,	// (0x00060761) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0006e478) vded_slider_pane_g

0xb36b,	// (0x00069f7a) mup3_rocker_pane_ParamLimits

0xb36b,	// (0x00069f7a) mup3_rocker_pane

0xb897,	// (0x0006a4a6) mup3_control_keys_pane_g1

0xb89f,	// (0x0006a4ae) mup3_control_keys_pane_g2

0xb8a7,	// (0x0006a4b6) mup3_control_keys_pane_g3

0xb8af,	// (0x0006a4be) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0006e483) mup3_control_keys_pane_g

0x6000,	// (0x00064c0f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6000,	// (0x00064c0f) popup_toolbar2_fixed_window_cp01

0xb385,	// (0x00069f94) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb385,	// (0x00069f94) popup_toolbar2_fixed_window_cp02

0x9c22,	// (0x00068831) popup_call2_audio_second_window_t4_ParamLimits

0x9c22,	// (0x00068831) popup_call2_audio_second_window_t4

0xec0c,	// (0x0006d81b) popup_call2_audio_first_window_t6_ParamLimits

0xec0c,	// (0x0006d81b) popup_call2_audio_first_window_t6

0xeea2,	// (0x0006dab1) popup_call2_audio_out_window_t6_ParamLimits

0xeea2,	// (0x0006dab1) popup_call2_audio_out_window_t6

0x0541,	// (0x0005f150) main_vitu_pane

0xb8bf,	// (0x0006a4ce) aid_size_cell_itu_ParamLimits

0xb8bf,	// (0x0006a4ce) aid_size_cell_itu

0x6028,	// (0x00064c37) bg_popup_window_pane_cp08_ParamLimits

0x6028,	// (0x00064c37) bg_popup_window_pane_cp08

0xb8cd,	// (0x0006a4dc) field_vitu_entry_pane_ParamLimits

0xb8cd,	// (0x0006a4dc) field_vitu_entry_pane

0xb8dc,	// (0x0006a4eb) grid_vitu_function_pane_ParamLimits

0xb8dc,	// (0x0006a4eb) grid_vitu_function_pane

0xb8ec,	// (0x0006a4fb) grid_vitu_itu_pane_ParamLimits

0xb8ec,	// (0x0006a4fb) grid_vitu_itu_pane

0xb8fc,	// (0x0006a50b) cell_vitu_itu_pane_ParamLimits

0xb8fc,	// (0x0006a50b) cell_vitu_itu_pane

0xb911,	// (0x0006a520) cell_vitu_function_pane_ParamLimits

0xb911,	// (0x0006a520) cell_vitu_function_pane

0xf115,	// (0x0006dd24) bg_popup_sub_pane_cp08_ParamLimits

0xf115,	// (0x0006dd24) bg_popup_sub_pane_cp08

0xb923,	// (0x0006a532) field_vitu_entry_pane_t1_ParamLimits

0xb923,	// (0x0006a532) field_vitu_entry_pane_t1

0x1b73,	// (0x00060782) field_vitu_entry_pane_t2_ParamLimits

0x1b73,	// (0x00060782) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0006e491) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0006e491) field_vitu_entry_pane_t

0x1b90,	// (0x0006079f) bg_button_pane_cp05_ParamLimits

0x1b90,	// (0x0006079f) bg_button_pane_cp05

0xb93e,	// (0x0006a54d) cell_vitu_itu_pane_g1

0xb956,	// (0x0006a565) cell_vitu_itu_pane_t1_ParamLimits

0xb956,	// (0x0006a565) cell_vitu_itu_pane_t1

0xb968,	// (0x0006a577) cell_vitu_itu_pane_t2_ParamLimits

0xb968,	// (0x0006a577) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0006e496) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0006e496) cell_vitu_itu_pane_t

0x1b9e,	// (0x000607ad) bg_button_pane_cp07

0xb99d,	// (0x0006a5ac) cell_vitu_function_pane_g1

0x633a,	// (0x00064f49) main_calc_pane_g1

0x5dfb,	// (0x00064a0a) aid_visual_content_pane

0x0541,	// (0x0005f150) main_vradio_pane

0xb9a6,	// (0x0006a5b5) main_vradio_pane_g1_ParamLimits

0xb9a6,	// (0x0006a5b5) main_vradio_pane_g1

0x1ba8,	// (0x000607b7) main_vradio_pane_g2_ParamLimits

0x1ba8,	// (0x000607b7) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0006e49d) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0006e49d) main_vradio_pane_g

0xb9b6,	// (0x0006a5c5) main_vradio_pane_t1_ParamLimits

0xb9b6,	// (0x0006a5c5) main_vradio_pane_t1

0xb9c8,	// (0x0006a5d7) main_vradio_pane_t2_ParamLimits

0xb9c8,	// (0x0006a5d7) main_vradio_pane_t2

0x1bb5,	// (0x000607c4) main_vradio_pane_t3_ParamLimits

0x1bb5,	// (0x000607c4) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0006e4a2) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0006e4a2) main_vradio_pane_t

0xb9da,	// (0x0006a5e9) vradio_rocker_control_pane_ParamLimits

0xb9da,	// (0x0006a5e9) vradio_rocker_control_pane

0xb9e6,	// (0x0006a5f5) vradio_station_info_pane_ParamLimits

0xb9e6,	// (0x0006a5f5) vradio_station_info_pane

0x1bc9,	// (0x000607d8) vradio_frequency_info_pane_ParamLimits

0x1bc9,	// (0x000607d8) vradio_frequency_info_pane

0x1549,	// (0x00060158) vradio_station_info_pane_g1

0x1bd8,	// (0x000607e7) vradio_station_info_pane_t1_ParamLimits

0x1bd8,	// (0x000607e7) vradio_station_info_pane_t1

0x1bfa,	// (0x00060809) vradio_station_info_pane_t2_ParamLimits

0x1bfa,	// (0x00060809) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0006e4a9) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0006e4a9) vradio_station_info_pane_t

0x1c0c,	// (0x0006081b) vradio_tuning_pane

0x1c14,	// (0x00060823) vradio_rocker_control_pane_g1

0x1c1c,	// (0x0006082b) vradio_rocker_control_pane_g2

0x1c24,	// (0x00060833) vradio_rocker_control_pane_g3

0x1c2c,	// (0x0006083b) vradio_rocker_control_pane_g4

0x1c34,	// (0x00060843) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0006e4ae) vradio_rocker_control_pane_g

0xb9f5,	// (0x0006a604) vradio_frequency_info_pane_g1

0x1c3c,	// (0x0006084b) vradio_frequency_info_pane_t1_ParamLimits

0x1c3c,	// (0x0006084b) vradio_frequency_info_pane_t1

0xb9ff,	// (0x0006a60e) vradio_tuning_pane_g1

0xba08,	// (0x0006a617) vradio_tuning_pane_t1

0x0567,	// (0x0005f176) area_side_right_pane_ParamLimits

0x0567,	// (0x0005f176) area_side_right_pane

0x100a,	// (0x0005fc19) status_small_pane_g1

0x1012,	// (0x0005fc21) status_small_pane_g2

0x101b,	// (0x0005fc2a) status_small_pane_g3

0x1024,	// (0x0005fc33) status_small_pane_g4

0x0003,

0xf65f,	// (0x0006e26e) status_small_pane_g

0x102d,	// (0x0005fc3c) status_small_pane_t1

0x0541,	// (0x0005f150) main_video3_pane

0x1c50,	// (0x0006085f) cams_zoom_vslider_pane

0x1c58,	// (0x00060867) image3_wide_pane_ParamLimits

0x1c58,	// (0x00060867) image3_wide_pane

0x1c72,	// (0x00060881) image3_wide_small_pane

0x1c7e,	// (0x0006088d) main_video3_pane_g1_ParamLimits

0x1c7e,	// (0x0006088d) main_video3_pane_g1

0x1c9a,	// (0x000608a9) main_video3_pane_g2_ParamLimits

0x1c9a,	// (0x000608a9) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0006e4b9) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0006e4b9) main_video3_pane_g

0x1cb6,	// (0x000608c5) main_video3_pane_t1_ParamLimits

0x1cb6,	// (0x000608c5) main_video3_pane_t1

0x1ce1,	// (0x000608f0) main_video3_pane_t2_ParamLimits

0x1ce1,	// (0x000608f0) main_video3_pane_t2

0x1d0c,	// (0x0006091b) main_video3_pane_t3_ParamLimits

0x1d0c,	// (0x0006091b) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0006e4be) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0006e4be) main_video3_pane_t

0x1d39,	// (0x00060948) cams_zoom_vslider_pane_g1

0x1d42,	// (0x00060951) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0006e4c5) cams_zoom_vslider_pane_g

0x1d4a,	// (0x00060959) small_slider_vertical_pane

0x1549,	// (0x00060158) small_slider_vertical_pane_g1

0x1549,	// (0x00060158) small_slider_vertical_pane_g2

0x1d52,	// (0x00060961) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0006e4ca) small_slider_vertical_pane_g

0x0541,	// (0x0005f150) main_hwr_training_pane

0x1d5b,	// (0x0006096a) hwr_training_instruct_pane_ParamLimits

0x1d5b,	// (0x0006096a) hwr_training_instruct_pane

0xba17,	// (0x0006a626) hwr_training_navi_pane_ParamLimits

0xba17,	// (0x0006a626) hwr_training_navi_pane

0xba31,	// (0x0006a640) hwr_training_write_pane_ParamLimits

0xba31,	// (0x0006a640) hwr_training_write_pane

0x0541,	// (0x0005f150) bg_frame_shadow_pane

0x1d92,	// (0x000609a1) hwr_training_write_pane_g1

0x1d9a,	// (0x000609a9) hwr_training_write_pane_g2

0x1da2,	// (0x000609b1) hwr_training_write_pane_g3

0x1daa,	// (0x000609b9) hwr_training_write_pane_g4

0x1db2,	// (0x000609c1) hwr_training_write_pane_g5

0x1dba,	// (0x000609c9) hwr_training_write_pane_g6

0x1dc2,	// (0x000609d1) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0006e4d1) hwr_training_write_pane_g

0xba69,	// (0x0006a678) hwr_training_navi_pane_g1_ParamLimits

0xba69,	// (0x0006a678) hwr_training_navi_pane_g1

0xba7b,	// (0x0006a68a) hwr_training_navi_pane_g2_ParamLimits

0xba7b,	// (0x0006a68a) hwr_training_navi_pane_g2

0xba8d,	// (0x0006a69c) hwr_training_navi_pane_g3_ParamLimits

0xba8d,	// (0x0006a69c) hwr_training_navi_pane_g3

0xba9d,	// (0x0006a6ac) hwr_training_navi_pane_g4_ParamLimits

0xba9d,	// (0x0006a6ac) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0006e4e0) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0006e4e0) hwr_training_navi_pane_g

0xbab7,	// (0x0006a6c6) hwr_training_navi_pane_t1

0xbac5,	// (0x0006a6d4) list_single_hwr_training_instruct_pane_ParamLimits

0xbac5,	// (0x0006a6d4) list_single_hwr_training_instruct_pane

0x1dca,	// (0x000609d9) list_single_hwr_training_instruct_pane_t1

0x1489,	// (0x00060098) bg_frame_shadow_pane_g1

0x1dd9,	// (0x000609e8) bg_frame_shadow_pane_g2

0x1de1,	// (0x000609f0) bg_frame_shadow_pane_g3

0x1de9,	// (0x000609f8) bg_frame_shadow_pane_g4

0x1df1,	// (0x00060a00) bg_frame_shadow_pane_g5

0x1df9,	// (0x00060a08) bg_frame_shadow_pane_g6

0x1e01,	// (0x00060a10) bg_frame_shadow_pane_g7

0x66d4,	// (0x000652e3) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0006e4eb) bg_frame_shadow_pane_g

0x0541,	// (0x0005f150) main_video_tele_dialer_pane

0xbaea,	// (0x0006a6f9) aid_size_cell_video_keypad_ParamLimits

0xbaea,	// (0x0006a6f9) aid_size_cell_video_keypad

0xbafa,	// (0x0006a709) grid_video_dialer_keypad_pane_ParamLimits

0xbafa,	// (0x0006a709) grid_video_dialer_keypad_pane

0xbb2e,	// (0x0006a73d) video_down_pane_cp_ParamLimits

0xbb2e,	// (0x0006a73d) video_down_pane_cp

0xbb58,	// (0x0006a767) cell_video_dialer_keypad_pane_ParamLimits

0xbb58,	// (0x0006a767) cell_video_dialer_keypad_pane

0x1e09,	// (0x00060a18) bg_button_pane_cp08_ParamLimits

0x1e09,	// (0x00060a18) bg_button_pane_cp08

0xbb6d,	// (0x0006a77c) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbb6d,	// (0x0006a77c) cell_video_dialer_keypad_pane_g1

0xb35f,	// (0x00069f6e) mup3_rocker2_pane_ParamLimits

0xb35f,	// (0x00069f6e) mup3_rocker2_pane

0x1549,	// (0x00060158) mup3_rocker2_pane_g1

0xa2b6,	// (0x00068ec5) main_dialer2_pane

0x0541,	// (0x0005f150) main_mp4_pane

0xbbac,	// (0x0006a7bb) main_mp4_pane_g1_ParamLimits

0xbbac,	// (0x0006a7bb) main_mp4_pane_g1

0xbbba,	// (0x0006a7c9) main_mp4_pane_g2_ParamLimits

0xbbba,	// (0x0006a7c9) main_mp4_pane_g2

0xbbc8,	// (0x0006a7d7) main_mp4_pane_g3_ParamLimits

0xbbc8,	// (0x0006a7d7) main_mp4_pane_g3

0xbc0d,	// (0x0006a81c) main_mp4_pane_g4_ParamLimits

0xbc0d,	// (0x0006a81c) main_mp4_pane_g4

0xbc27,	// (0x0006a836) main_mp4_pane_g5_ParamLimits

0xbc27,	// (0x0006a836) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0006e50b) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0006e50b) main_mp4_pane_g

0xbc5b,	// (0x0006a86a) main_mp4_pane_t1_ParamLimits

0xbc5b,	// (0x0006a86a) main_mp4_pane_t1

0xbcb7,	// (0x0006a8c6) main_mp4_pane_t2_ParamLimits

0xbcb7,	// (0x0006a8c6) main_mp4_pane_t2

0x1e15,	// (0x00060a24) main_mp4_pane_t3_ParamLimits

0x1e15,	// (0x00060a24) main_mp4_pane_t3

0xbd09,	// (0x0006a918) main_mp4_pane_t4_ParamLimits

0xbd09,	// (0x0006a918) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0006e518) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0006e518) main_mp4_pane_t

0xbd4d,	// (0x0006a95c) mp4_progress_pane_ParamLimits

0xbd4d,	// (0x0006a95c) mp4_progress_pane

0xbd97,	// (0x0006a9a6) mp4_rocker_pane_ParamLimits

0xbd97,	// (0x0006a9a6) mp4_rocker_pane

0x1e3d,	// (0x00060a4c) mp4_progress_pane_t1

0x1e56,	// (0x00060a65) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0006e521) mp4_progress_pane_t

0x1e6f,	// (0x00060a7e) mup_progress_pane_cp04

0x1549,	// (0x00060158) mp4_rocker_pane_g1

0xbdb7,	// (0x0006a9c6) aid_cell_size_keypad2_ParamLimits

0xbdb7,	// (0x0006a9c6) aid_cell_size_keypad2

0xbdc7,	// (0x0006a9d6) dialer2_ne_pane_ParamLimits

0xbdc7,	// (0x0006a9d6) dialer2_ne_pane

0xbdd5,	// (0x0006a9e4) grid_dialer2_keypad_pane_ParamLimits

0xbdd5,	// (0x0006a9e4) grid_dialer2_keypad_pane

0x2756,	// (0x00061365) bg_popup_call_pane_cp07_ParamLimits

0x2756,	// (0x00061365) bg_popup_call_pane_cp07

0xbde5,	// (0x0006a9f4) dialer2_ne_pane_t1_ParamLimits

0xbde5,	// (0x0006a9f4) dialer2_ne_pane_t1

0xbe0a,	// (0x0006aa19) cell_dialer2_keypad_pane_ParamLimits

0xbe0a,	// (0x0006aa19) cell_dialer2_keypad_pane

0x1e97,	// (0x00060aa6) bg_button_pane_pane_cp04_ParamLimits

0x1e97,	// (0x00060aa6) bg_button_pane_pane_cp04

0xbe1f,	// (0x0006aa2e) cell_dialer2_keypad_pane_g1_ParamLimits

0xbe1f,	// (0x0006aa2e) cell_dialer2_keypad_pane_g1

0x700f,	// (0x00065c1e) aid_placing_vt_set_content_ParamLimits

0x700f,	// (0x00065c1e) aid_placing_vt_set_content

0x702d,	// (0x00065c3c) aid_placing_vt_set_title_ParamLimits

0x702d,	// (0x00065c3c) aid_placing_vt_set_title

0x0541,	// (0x0005f150) main_image3_pane

0xbeb9,	// (0x0006aac8) area_side_right_pane_cp01_ParamLimits

0xbeb9,	// (0x0006aac8) area_side_right_pane_cp01

0x2cf4,	// (0x00061903) main_image3_pane_g1_ParamLimits

0x2cf4,	// (0x00061903) main_image3_pane_g1

0xbee6,	// (0x0006aaf5) main_image3_pane_g2_ParamLimits

0xbee6,	// (0x0006aaf5) main_image3_pane_g2

0xbeff,	// (0x0006ab0e) main_image3_pane_g3_ParamLimits

0xbeff,	// (0x0006ab0e) main_image3_pane_g3

0xbf18,	// (0x0006ab27) main_image3_pane_g4_ParamLimits

0xbf18,	// (0x0006ab27) main_image3_pane_g4

0x0003,

0xf921,	// (0x0006e530) main_image3_pane_g_ParamLimits

0xf921,	// (0x0006e530) main_image3_pane_g

0xbf31,	// (0x0006ab40) main_image3_pane_t1_ParamLimits

0xbf31,	// (0x0006ab40) main_image3_pane_t1

0xbf56,	// (0x0006ab65) main_image3_pane_t2_ParamLimits

0xbf56,	// (0x0006ab65) main_image3_pane_t2

0xbf75,	// (0x0006ab84) main_image3_pane_t3_ParamLimits

0xbf75,	// (0x0006ab84) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0006e539) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0006e539) main_image3_pane_t

0x6028,	// (0x00064c37) grid_sctrl_middle_pane_cp01_ParamLimits

0x6028,	// (0x00064c37) grid_sctrl_middle_pane_cp01

0xbfd6,	// (0x0006abe5) cell_sctrl_middle_pane_cp01_ParamLimits

0xbfd6,	// (0x0006abe5) cell_sctrl_middle_pane_cp01

0xbfe7,	// (0x0006abf6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbfe7,	// (0x0006abf6) cell_sctrl_middle_pane_cp01_g1

0x0541,	// (0x0005f150) main_call4_pane

0xbff4,	// (0x0006ac03) aid_size_button_call4_ParamLimits

0xbff4,	// (0x0006ac03) aid_size_button_call4

0xc024,	// (0x0006ac33) call4_windows_pane_ParamLimits

0xc024,	// (0x0006ac33) call4_windows_pane

0xc03e,	// (0x0006ac4d) grid_call4_button_pane_ParamLimits

0xc03e,	// (0x0006ac4d) grid_call4_button_pane

0x1ea3,	// (0x00060ab2) call4_windows_conf_pane

0x1eba,	// (0x00060ac9) popup_call4_audio_first_window_ParamLimits

0x1eba,	// (0x00060ac9) popup_call4_audio_first_window

0x1f06,	// (0x00060b15) popup_call4_audio_second_window_ParamLimits

0x1f06,	// (0x00060b15) popup_call4_audio_second_window

0x1f1a,	// (0x00060b29) popup_call4_audio_wait_window_ParamLimits

0x1f1a,	// (0x00060b29) popup_call4_audio_wait_window

0xc062,	// (0x0006ac71) cell_call4_button_pane_ParamLimits

0xc062,	// (0x0006ac71) cell_call4_button_pane

0xc087,	// (0x0006ac96) bg_button_pane_cp09_ParamLimits

0xc087,	// (0x0006ac96) bg_button_pane_cp09

0xc093,	// (0x0006aca2) cell_call4_button_pane_g1_ParamLimits

0xc093,	// (0x0006aca2) cell_call4_button_pane_g1

0xc0a0,	// (0x0006acaf) cell_call4_button_pane_t1_ParamLimits

0xc0a0,	// (0x0006acaf) cell_call4_button_pane_t1

0x1f62,	// (0x00060b71) popup_call4_audio_conf_window_ParamLimits

0x1f62,	// (0x00060b71) popup_call4_audio_conf_window

0xb392,	// (0x00069fa1) mup3_progress_pane_t1_ParamLimits

0xb3a9,	// (0x00069fb8) mup3_progress_pane_t2_ParamLimits

0x1878,	// (0x00060487) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0006e412) mup3_progress_pane_t_ParamLimits

0x188f,	// (0x0006049e) mup_progress_pane_cp03_ParamLimits

0xb8b7,	// (0x0006a4c6) mup3_control_keys_pane_g4_copy1

0xbd7b,	// (0x0006a98a) mp4_rocker2_pane_ParamLimits

0xbd7b,	// (0x0006a98a) mp4_rocker2_pane

0x1f7e,	// (0x00060b8d) mp4_rocker2_pane_g1

0x1f76,	// (0x00060b85) mp4_rocker2_pane_g2

0xc0b2,	// (0x0006acc1) mp4_rocker2_pane_g3

0xc0ba,	// (0x0006acc9) mp4_rocker2_pane_g4

0xc0c2,	// (0x0006acd1) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0006e542) mp4_rocker2_pane_g

0x0541,	// (0x0005f150) main_camera4_pane

0x0541,	// (0x0005f150) main_video4_pane

0xbb0a,	// (0x0006a719) main_video_tele_dialer_pane_t1_ParamLimits

0xbb0a,	// (0x0006a719) main_video_tele_dialer_pane_t1

0xbb1c,	// (0x0006a72b) main_video_tele_dialer_pane_t2_ParamLimits

0xbb1c,	// (0x0006a72b) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0006e4fc) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0006e4fc) main_video_tele_dialer_pane_t

0xc0e2,	// (0x0006acf1) cam4_autofocus_pane_ParamLimits

0xc0e2,	// (0x0006acf1) cam4_autofocus_pane

0xc0f0,	// (0x0006acff) cam4_image_uncrop_pane_ParamLimits

0xc0f0,	// (0x0006acff) cam4_image_uncrop_pane

0xc107,	// (0x0006ad16) cam4_indicators_pane_ParamLimits

0xc107,	// (0x0006ad16) cam4_indicators_pane

0xc123,	// (0x0006ad32) main_camera4_pane_g1_ParamLimits

0xc123,	// (0x0006ad32) main_camera4_pane_g1

0xc12f,	// (0x0006ad3e) main_camera4_pane_g2_ParamLimits

0xc12f,	// (0x0006ad3e) main_camera4_pane_g2

0xc13b,	// (0x0006ad4a) main_camera4_pane_g3_ParamLimits

0xc13b,	// (0x0006ad4a) main_camera4_pane_g3

0xc147,	// (0x0006ad56) main_camera4_pane_g4_ParamLimits

0xc147,	// (0x0006ad56) main_camera4_pane_g4

0xc153,	// (0x0006ad62) main_camera4_pane_g5_ParamLimits

0xc153,	// (0x0006ad62) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0006e54d) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0006e54d) main_camera4_pane_g

0xc16d,	// (0x0006ad7c) main_camera4_pane_t1_ParamLimits

0xc16d,	// (0x0006ad7c) main_camera4_pane_t1

0x17b5,	// (0x000603c4) bg_tb_trans_pane_cp06

0xc199,	// (0x0006ada8) cam4_indicators_pane_g1

0xc1a6,	// (0x0006adb5) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0006e55f) cam4_indicators_pane_g

0xc1c6,	// (0x0006add5) cam4_indicators_pane_t1

0xc1f0,	// (0x0006adff) main_video4_pane_g1_ParamLimits

0xc1f0,	// (0x0006adff) main_video4_pane_g1

0xc1fc,	// (0x0006ae0b) main_video4_pane_g2_ParamLimits

0xc1fc,	// (0x0006ae0b) main_video4_pane_g2

0xc208,	// (0x0006ae17) main_video4_pane_g3_ParamLimits

0xc208,	// (0x0006ae17) main_video4_pane_g3

0xc214,	// (0x0006ae23) main_video4_pane_g4_ParamLimits

0xc214,	// (0x0006ae23) main_video4_pane_g4

0x0004,

0xf957,	// (0x0006e566) main_video4_pane_g_ParamLimits

0xf957,	// (0x0006e566) main_video4_pane_g

0xc234,	// (0x0006ae43) vid4_indicators_pane_ParamLimits

0xc234,	// (0x0006ae43) vid4_indicators_pane

0xc252,	// (0x0006ae61) video4_image_uncrop_cif_pane_ParamLimits

0xc252,	// (0x0006ae61) video4_image_uncrop_cif_pane

0xc261,	// (0x0006ae70) video4_image_uncrop_nhd_pane_ParamLimits

0xc261,	// (0x0006ae70) video4_image_uncrop_nhd_pane

0xc0f0,	// (0x0006acff) video4_image_uncrop_vga_pane_ParamLimits

0xc0f0,	// (0x0006acff) video4_image_uncrop_vga_pane

0xf115,	// (0x0006dd24) bg_tb_trans_pane_cp07

0xc199,	// (0x0006ada8) vid4_indicators_pane_g1

0xc278,	// (0x0006ae87) vid4_indicators_pane_g2

0xc285,	// (0x0006ae94) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0006e571) vid4_indicators_pane_g

0xc2b2,	// (0x0006aec1) vid4_indicators_pane_t1

0xc2cc,	// (0x0006aedb) cam4_autofocus_pane_g1

0xc2d4,	// (0x0006aee3) cam4_autofocus_pane_g2

0xc2dc,	// (0x0006aeeb) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0006e57c) cam4_autofocus_pane_g

0xc2e4,	// (0x0006aef3) cam4_autofocus_pane_g3_copy1

0xbb3c,	// (0x0006a74b) video_down_pane_cp_t1

0xbb4a,	// (0x0006a759) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0006e501) video_down_pane_cp_t

0x6028,	// (0x00064c37) popup_vitu2_window_ParamLimits

0x6028,	// (0x00064c37) popup_vitu2_window

0xc2ec,	// (0x0006aefb) aid_size_cell2_itu2_ParamLimits

0xc2ec,	// (0x0006aefb) aid_size_cell2_itu2

0xc30e,	// (0x0006af1d) aid_size_cell_itu2_ParamLimits

0xc30e,	// (0x0006af1d) aid_size_cell_itu2

0x2756,	// (0x00061365) bg_popup_window_pane_cp09_ParamLimits

0x2756,	// (0x00061365) bg_popup_window_pane_cp09

0xc352,	// (0x0006af61) field_vitu2_entry_pane_ParamLimits

0xc352,	// (0x0006af61) field_vitu2_entry_pane

0xc372,	// (0x0006af81) grid_vitu2_function_pane_ParamLimits

0xc372,	// (0x0006af81) grid_vitu2_function_pane

0xc3b6,	// (0x0006afc5) grid_vitu2_itu_pane_ParamLimits

0xc3b6,	// (0x0006afc5) grid_vitu2_itu_pane

0xc42e,	// (0x0006b03d) cell_vitu2_itu_pane_ParamLimits

0xc42e,	// (0x0006b03d) cell_vitu2_itu_pane

0xc443,	// (0x0006b052) cell_vitu2_function_pane_ParamLimits

0xc443,	// (0x0006b052) cell_vitu2_function_pane

0x1f86,	// (0x00060b95) bg_popup_call_pane_cp08_ParamLimits

0x1f86,	// (0x00060b95) bg_popup_call_pane_cp08

0x1f9f,	// (0x00060bae) field_vitu2_entry_pane_g1

0x1fab,	// (0x00060bba) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0006e583) field_vitu2_entry_pane_g

0x5103,	// (0x00063d12) field_vitu2_entry_pane_t1_ParamLimits

0x5103,	// (0x00063d12) field_vitu2_entry_pane_t1

0x5120,	// (0x00063d2f) field_vitu2_entry_pane_t2_ParamLimits

0x5120,	// (0x00063d2f) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0006e58a) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0006e58a) field_vitu2_entry_pane_t

0xc482,	// (0x0006b091) bg_button_pane_cp010_ParamLimits

0xc482,	// (0x0006b091) bg_button_pane_cp010

0xc490,	// (0x0006b09f) cell_vitu2_itu_pane_g1

0xc4ae,	// (0x0006b0bd) cell_vitu2_itu_pane_t1_ParamLimits

0xc4ae,	// (0x0006b0bd) cell_vitu2_itu_pane_t1

0x513d,	// (0x00063d4c) cell_vitu2_itu_pane_t2_ParamLimits

0x513d,	// (0x00063d4c) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0006e594) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0006e594) cell_vitu2_itu_pane_t

0xf115,	// (0x0006dd24) bg_button_pane_cp011

0xc500,	// (0x0006b10f) cell_vitu2_function_pane_g1

0x0541,	// (0x0005f150) main_myfav_hc_pane

0xbfb7,	// (0x0006abc6) popup_image3_note_pane_ParamLimits

0xbfb7,	// (0x0006abc6) popup_image3_note_pane

0xbfc5,	// (0x0006abd4) popup_image3_tool_bar_pane_ParamLimits

0xbfc5,	// (0x0006abd4) popup_image3_tool_bar_pane

0x51ab,	// (0x00063dba) cell_vitu2_itu_pane_t3_ParamLimits

0x51ab,	// (0x00063dba) cell_vitu2_itu_pane_t3

0x0541,	// (0x0005f150) bg_popup_trans_pane

0x1fea,	// (0x00060bf9) grid_image3_tool_bar_pane

0x1ff4,	// (0x00060c03) bg_popup_trans_pane_g1

0x7623,	// (0x00066232) bg_popup_trans_pane_g2

0x1ffc,	// (0x00060c0b) bg_popup_trans_pane_g3

0x2004,	// (0x00060c13) bg_popup_trans_pane_g4

0x200c,	// (0x00060c1b) bg_popup_trans_pane_g5

0x2014,	// (0x00060c23) bg_popup_trans_pane_g6

0x201c,	// (0x00060c2b) bg_popup_trans_pane_g7

0x2024,	// (0x00060c33) bg_popup_trans_pane_g8

0x7603,	// (0x00066212) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0006e59b) bg_popup_trans_pane_g

0x202c,	// (0x00060c3b) cell_image3_tool_bar_pane_ParamLimits

0x202c,	// (0x00060c3b) cell_image3_tool_bar_pane

0x1549,	// (0x00060158) cell_image3_tool_bar_pane_g1

0x0541,	// (0x0005f150) bg_popup_trans_pane_cp1

0x2040,	// (0x00060c4f) popup_image3_note_pane_t1

0x204e,	// (0x00060c5d) popup_image3_note_pane_t2

0x205c,	// (0x00060c6b) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0006e5ae) popup_image3_note_pane_t

0x206a,	// (0x00060c79) popup_image3_note_pane_t3_copy1

0xc514,	// (0x0006b123) bg_myfav_hc_instruction_pane_ParamLimits

0xc514,	// (0x0006b123) bg_myfav_hc_instruction_pane

0xc52c,	// (0x0006b13b) cell_myfav_contact_pane_ParamLimits

0xc52c,	// (0x0006b13b) cell_myfav_contact_pane

0xc546,	// (0x0006b155) cell_myfav_contact_pane_cp1_ParamLimits

0xc546,	// (0x0006b155) cell_myfav_contact_pane_cp1

0xc55e,	// (0x0006b16d) cell_myfav_contact_pane_cp2_ParamLimits

0xc55e,	// (0x0006b16d) cell_myfav_contact_pane_cp2

0xc576,	// (0x0006b185) cell_myfav_contact_pane_cp3_ParamLimits

0xc576,	// (0x0006b185) cell_myfav_contact_pane_cp3

0xc58d,	// (0x0006b19c) cell_myfav_contact_pane_cp4_ParamLimits

0xc58d,	// (0x0006b19c) cell_myfav_contact_pane_cp4

0xc5a3,	// (0x0006b1b2) cell_myfav_contact_pane_cp5_ParamLimits

0xc5a3,	// (0x0006b1b2) cell_myfav_contact_pane_cp5

0xc5b7,	// (0x0006b1c6) cell_myfav_contact_pane_cp6_ParamLimits

0xc5b7,	// (0x0006b1c6) cell_myfav_contact_pane_cp6

0xc5cb,	// (0x0006b1da) cell_myfav_contact_pane_cp7_ParamLimits

0xc5cb,	// (0x0006b1da) cell_myfav_contact_pane_cp7

0x2078,	// (0x00060c87) listscroll_gen_pane_cp05

0xc5e3,	// (0x0006b1f2) main_myfav_hc_pane_g1_ParamLimits

0xc5e3,	// (0x0006b1f2) main_myfav_hc_pane_g1

0xc5f9,	// (0x0006b208) main_myfav_hc_pane_g2_ParamLimits

0xc5f9,	// (0x0006b208) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0006e5b5) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0006e5b5) main_myfav_hc_pane_g

0xc627,	// (0x0006b236) main_myfav_hc_pane_t1_ParamLimits

0xc627,	// (0x0006b236) main_myfav_hc_pane_t1

0x2081,	// (0x00060c90) main_myfav_hc_pane_t2_ParamLimits

0x2081,	// (0x00060c90) main_myfav_hc_pane_t2

0x2093,	// (0x00060ca2) main_myfav_hc_pane_t3_ParamLimits

0x2093,	// (0x00060ca2) main_myfav_hc_pane_t3

0xc63e,	// (0x0006b24d) main_myfav_hc_pane_t4_ParamLimits

0xc63e,	// (0x0006b24d) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0006e5bc) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0006e5bc) main_myfav_hc_pane_t

0x1549,	// (0x00060158) bg_myfav_hc_instruction_pane_g1

0x20a5,	// (0x00060cb4) cell_myfav_contact_pane_g1_ParamLimits

0x20a5,	// (0x00060cb4) cell_myfav_contact_pane_g1

0x20a5,	// (0x00060cb4) cell_myfav_contact_pane_g2_ParamLimits

0x20a5,	// (0x00060cb4) cell_myfav_contact_pane_g2

0x20b1,	// (0x00060cc0) cell_myfav_contact_pane_g3_ParamLimits

0x20b1,	// (0x00060cc0) cell_myfav_contact_pane_g3

0x1862,	// (0x00060471) cell_myfav_contact_pane_g4_ParamLimits

0x1862,	// (0x00060471) cell_myfav_contact_pane_g4

0x20be,	// (0x00060ccd) cell_myfav_contact_pane_g5_ParamLimits

0x20be,	// (0x00060ccd) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0006e5c7) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0006e5c7) cell_myfav_contact_pane_g

0xc60f,	// (0x0006b21e) main_myfav_hc_pane_g3_ParamLimits

0xc60f,	// (0x0006b21e) main_myfav_hc_pane_g3

0x5f44,	// (0x00064b53) popup_adpt_find_window

0xc668,	// (0x0006b277) afind_page_pane_ParamLimits

0xc668,	// (0x0006b277) afind_page_pane

0xc675,	// (0x0006b284) aid_size_cell_afind_ParamLimits

0xc675,	// (0x0006b284) aid_size_cell_afind

0xc68f,	// (0x0006b29e) bg_popup_sub_pane_cp09_ParamLimits

0xc68f,	// (0x0006b29e) bg_popup_sub_pane_cp09

0xc69c,	// (0x0006b2ab) find_pane_cp01_ParamLimits

0xc69c,	// (0x0006b2ab) find_pane_cp01

0x20ca,	// (0x00060cd9) grid_afind_control_pane_ParamLimits

0x20ca,	// (0x00060cd9) grid_afind_control_pane

0xc6a9,	// (0x0006b2b8) grid_afind_pane_ParamLimits

0xc6a9,	// (0x0006b2b8) grid_afind_pane

0xc6c5,	// (0x0006b2d4) cell_afind_pane_ParamLimits

0xc6c5,	// (0x0006b2d4) cell_afind_pane

0x1549,	// (0x00060158) afind_page_pane_g1

0xc70b,	// (0x0006b31a) afind_page_pane_g2

0xc714,	// (0x0006b323) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0006e5d2) afind_page_pane_g

0xc71d,	// (0x0006b32c) afind_page_pane_t1

0x20de,	// (0x00060ced) cell_afind_grid_control_pane_ParamLimits

0x20de,	// (0x00060ced) cell_afind_grid_control_pane

0x1e97,	// (0x00060aa6) bg_button_pane_cp69_ParamLimits

0x1e97,	// (0x00060aa6) bg_button_pane_cp69

0xc73d,	// (0x0006b34c) cell_afind_pane_g1_ParamLimits

0xc73d,	// (0x0006b34c) cell_afind_pane_g1

0xc74a,	// (0x0006b359) cell_afind_pane_t1_ParamLimits

0xc74a,	// (0x0006b359) cell_afind_pane_t1

0x6fa4,	// (0x00065bb3) bg_button_pane_cp72

0x20ed,	// (0x00060cfc) cell_afind_grid_control_pane_g1

0x9701,	// (0x00068310) aid_image_placing_area_ParamLimits

0x9701,	// (0x00068310) aid_image_placing_area

0x1b5b,	// (0x0006076a) field_vitu_entry_pane_g1_ParamLimits

0x1b5b,	// (0x0006076a) field_vitu_entry_pane_g1

0x1b67,	// (0x00060776) field_vitu_entry_pane_g2_ParamLimits

0x1b67,	// (0x00060776) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0006e48c) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0006e48c) field_vitu_entry_pane_g

0xb93e,	// (0x0006a54d) cell_vitu_itu_pane_g1_ParamLimits

0xb980,	// (0x0006a58f) cell_vitu_itu_pane_t3_ParamLimits

0xb980,	// (0x0006a58f) cell_vitu_itu_pane_t3

0x1e3d,	// (0x00060a4c) mp4_progress_pane_t1_ParamLimits

0x1e56,	// (0x00060a65) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0006e521) mp4_progress_pane_t_ParamLimits

0x1e6f,	// (0x00060a7e) mup_progress_pane_cp04_ParamLimits

0xc652,	// (0x0006b261) main_myfav_hc_pane_t5_ParamLimits

0xc652,	// (0x0006b261) main_myfav_hc_pane_t5

0x4dd2,	// (0x000639e1) aid_zoom_text_primary

0x5f44,	// (0x00064b53) popup_adpt_find_window_ParamLimits

0xf115,	// (0x0006dd24) main_cam_set_pane

0xc115,	// (0x0006ad24) cam4_zoom_pane_ParamLimits

0xc115,	// (0x0006ad24) cam4_zoom_pane

0xc75c,	// (0x0006b36b) main_cam_set_pane_g1_ParamLimits

0xc75c,	// (0x0006b36b) main_cam_set_pane_g1

0xc76a,	// (0x0006b379) main_cam_set_pane_g2_ParamLimits

0xc76a,	// (0x0006b379) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0006e5d9) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0006e5d9) main_cam_set_pane_g

0xc776,	// (0x0006b385) main_cam_set_pane_t1_ParamLimits

0xc776,	// (0x0006b385) main_cam_set_pane_t1

0xc792,	// (0x0006b3a1) main_cset_listscroll_pane_ParamLimits

0xc792,	// (0x0006b3a1) main_cset_listscroll_pane

0xc7bf,	// (0x0006b3ce) main_cset_slider_pane_ParamLimits

0xc7bf,	// (0x0006b3ce) main_cset_slider_pane

0x20fe,	// (0x00060d0d) main_cset_list_pane_ParamLimits

0x20fe,	// (0x00060d0d) main_cset_list_pane

0x210e,	// (0x00060d1d) scroll_pane_cp028

0xc7de,	// (0x0006b3ed) aid_area_touch_slider

0xc7fa,	// (0x0006b409) cset_slider_pane

0xc824,	// (0x0006b433) main_cset_slider_pane_g1

0xc839,	// (0x0006b448) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0006e5de) main_cset_slider_pane_g

0x2147,	// (0x00060d56) main_cset_slider_pane_t1

0xc8fb,	// (0x0006b50a) main_cset_slider_pane_t2

0xc915,	// (0x0006b524) main_cset_slider_pane_t3

0xc92f,	// (0x0006b53e) main_cset_slider_pane_t4

0xc949,	// (0x0006b558) main_cset_slider_pane_t5

0xc967,	// (0x0006b576) main_cset_slider_pane_t6

0xc97e,	// (0x0006b58d) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0006e603) main_cset_slider_pane_t

0xca8a,	// (0x0006b699) cset_list_set_pane_ParamLimits

0xca8a,	// (0x0006b699) cset_list_set_pane

0xcaa0,	// (0x0006b6af) aid_position_infowindow_above

0xcaa8,	// (0x0006b6b7) aid_position_infowindow_below

0xcab0,	// (0x0006b6bf) cset_list_set_pane_g1_ParamLimits

0xcab0,	// (0x0006b6bf) cset_list_set_pane_g1

0x51f8,	// (0x00063e07) cset_list_set_pane_g3_ParamLimits

0x51f8,	// (0x00063e07) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0006e622) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0006e622) cset_list_set_pane_g

0x5207,	// (0x00063e16) cset_list_set_pane_t1_ParamLimits

0x5207,	// (0x00063e16) cset_list_set_pane_t1

0xf115,	// (0x0006dd24) list_highlight_pane_cp021_ParamLimits

0xf115,	// (0x0006dd24) list_highlight_pane_cp021

0x9037,	// (0x00067c46) cset_slider_pane_g1

0x9049,	// (0x00067c58) cset_slider_pane_g2

0x9040,	// (0x00067c4f) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0006e627) cset_slider_pane_g

0xcabc,	// (0x0006b6cb) aid_area_touch_cam4_zoom

0xcac4,	// (0x0006b6d3) cam4_zoom_cont_pane

0xcacc,	// (0x0006b6db) cam4_zoom_pane_g1

0xcad4,	// (0x0006b6e3) cam4_zoom_pane_g2

0xcadc,	// (0x0006b6eb) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0006e62e) cam4_zoom_pane_g

0x2aa5,	// (0x000616b4) cam4_zoom_cont_pane_g1

0x2aae,	// (0x000616bd) cam4_zoom_cont_pane_g2

0x2ab7,	// (0x000616c6) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0006e635) cam4_zoom_cont_pane_g

0xc00e,	// (0x0006ac1d) call4_image_pane_ParamLimits

0xc00e,	// (0x0006ac1d) call4_image_pane

0x1ea3,	// (0x00060ab2) call4_windows_conf_pane_ParamLimits

0x1ee4,	// (0x00060af3) popup_call4_audio_in_window_ParamLimits

0x1ee4,	// (0x00060af3) popup_call4_audio_in_window

0x0541,	// (0x0005f150) bg_popup_call2_act_pane_cp02

0x1f5a,	// (0x00060b69) call4_list_conf_pane

0x1549,	// (0x00060158) call4_image_pane_g1

0x1549,	// (0x00060158) call4_image_pane_g2

0x0001,

0xf743,	// (0x0006e352) call4_image_pane_g

0x2202,	// (0x00060e11) list_single_graphic_popup_conf4_pane_ParamLimits

0x2202,	// (0x00060e11) list_single_graphic_popup_conf4_pane

0x0541,	// (0x0005f150) list_highlight_pane_cp022

0x2215,	// (0x00060e24) list_single_graphic_popup_conf4_pane_g1

0x85bd,	// (0x000671cc) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0006e63c) list_single_graphic_popup_conf4_pane_g

0x221d,	// (0x00060e2c) list_single_graphic_popup_conf4_pane_t1

0x7150,	// (0x00065d5f) popup_vtel_slider_window_ParamLimits

0x7150,	// (0x00065d5f) popup_vtel_slider_window

0x1e85,	// (0x00060a94) dialer2_ne_pane_t2_ParamLimits

0x1e85,	// (0x00060a94) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0006e526) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0006e526) dialer2_ne_pane_t

0xf115,	// (0x0006dd24) bg_popup_sub_pane_cp010_ParamLimits

0xf115,	// (0x0006dd24) bg_popup_sub_pane_cp010

0xcae4,	// (0x0006b6f3) popup_vtel_slider_window_g1_ParamLimits

0xcae4,	// (0x0006b6f3) popup_vtel_slider_window_g1

0xcaf0,	// (0x0006b6ff) popup_vtel_slider_window_g2_ParamLimits

0xcaf0,	// (0x0006b6ff) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0006e641) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0006e641) popup_vtel_slider_window_g

0xcb38,	// (0x0006b747) vtel_slider_pane_ParamLimits

0xcb38,	// (0x0006b747) vtel_slider_pane

0xcb47,	// (0x0006b756) vtel_slider_pane_g1_ParamLimits

0xcb47,	// (0x0006b756) vtel_slider_pane_g1

0xcb54,	// (0x0006b763) vtel_slider_pane_g2_ParamLimits

0xcb54,	// (0x0006b763) vtel_slider_pane_g2

0xcb61,	// (0x0006b770) vtel_slider_pane_g3_ParamLimits

0xcb61,	// (0x0006b770) vtel_slider_pane_g3

0xcb47,	// (0x0006b756) vtel_slider_pane_g4_ParamLimits

0xcb47,	// (0x0006b756) vtel_slider_pane_g4

0xcb6e,	// (0x0006b77d) vtel_slider_pane_g5_ParamLimits

0xcb6e,	// (0x0006b77d) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0006e64a) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0006e64a) vtel_slider_pane_g

0x0541,	// (0x0005f150) main_gallery2_pane

0xc334,	// (0x0006af43) aid_size_row_itut2_dropdow_list_ParamLimits

0xc334,	// (0x0006af43) aid_size_row_itut2_dropdow_list

0xc394,	// (0x0006afa3) grid_vitu2_function_top_pane_ParamLimits

0xc394,	// (0x0006afa3) grid_vitu2_function_top_pane

0xc3ea,	// (0x0006aff9) popup_vitu2_dropdown_list_window_ParamLimits

0xc3ea,	// (0x0006aff9) popup_vitu2_dropdown_list_window

0xc40a,	// (0x0006b019) popup_vitu2_match_list_window

0xcb7b,	// (0x0006b78a) cell_vitu2_function_top_pane_ParamLimits

0xcb7b,	// (0x0006b78a) cell_vitu2_function_top_pane

0xcb9b,	// (0x0006b7aa) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcb9b,	// (0x0006b7aa) cell_vitu2_function_top_pane_cp01

0xcbb9,	// (0x0006b7c8) cell_vitu2_function_top_wide_pane_ParamLimits

0xcbb9,	// (0x0006b7c8) cell_vitu2_function_top_wide_pane

0xf115,	// (0x0006dd24) bg_button_pane_cp012

0xcbd7,	// (0x0006b7e6) cell_vitu2_function_top_pane_g1

0xcbe6,	// (0x0006b7f5) bg_button_pane_cp013_ParamLimits

0xcbe6,	// (0x0006b7f5) bg_button_pane_cp013

0xcc02,	// (0x0006b811) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcc02,	// (0x0006b811) cell_vitu2_function_top_wide_pane_g1

0x6028,	// (0x00064c37) bg_popup_sub_pane_cp20

0xcc1a,	// (0x0006b829) list_vitu2_match_list_pane

0x1ff4,	// (0x00060c03) bg_popup_sub_pane_cp20_g1

0x1ffc,	// (0x00060c0b) bg_popup_sub_pane_cp20_g2

0x7623,	// (0x00066232) bg_popup_sub_pane_cp20_g3

0x2004,	// (0x00060c13) bg_popup_sub_pane_cp20_g4

0x7603,	// (0x00066212) bg_popup_sub_pane_cp20_g5

0x2239,	// (0x00060e48) bg_popup_sub_pane_cp20_g6

0x2014,	// (0x00060c23) bg_popup_sub_pane_cp20_g7

0x201c,	// (0x00060c2b) bg_popup_sub_pane_cp20_g8

0x2024,	// (0x00060c33) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0006e655) bg_popup_sub_pane_cp20_g

0xcc32,	// (0x0006b841) list_vitu2_match_list_item_pane_ParamLimits

0xcc32,	// (0x0006b841) list_vitu2_match_list_item_pane

0xcc44,	// (0x0006b853) list_vitu2_match_list_item_pane_t1

0x0541,	// (0x0005f150) bg_popup_sub_pane_cp21

0x844e,	// (0x0006705d) grid_vitu2_dropdown_list_pane

0xcc52,	// (0x0006b861) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcc52,	// (0x0006b861) cell_vitu2_dropdown_list_char_pane

0xcc73,	// (0x0006b882) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xcc73,	// (0x0006b882) cell_vitu2_dropdown_list_ctrl_pane

0x226b,	// (0x00060e7a) cell_vitu2_dropdown_list_char_pane_g1

0x2262,	// (0x00060e71) cell_vitu2_dropdown_list_char_pane_g2

0x2259,	// (0x00060e68) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0006e672) cell_vitu2_dropdown_list_char_pane_g

0xcc9f,	// (0x0006b8ae) cell_vitu2_dropdown_list_char_pane_t1

0xccad,	// (0x0006b8bc) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xccad,	// (0x0006b8bc) cell_vitu2_dropdown_list_ctrl_pane_g1

0xccbd,	// (0x0006b8cc) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xccbd,	// (0x0006b8cc) cell_vitu2_dropdown_list_ctrl_pane_g2

0xccce,	// (0x0006b8dd) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xccce,	// (0x0006b8dd) cell_vitu2_dropdown_list_ctrl_pane_g3

0xccde,	// (0x0006b8ed) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xccde,	// (0x0006b8ed) cell_vitu2_dropdown_list_ctrl_pane_g4

0x17b5,	// (0x000603c4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x17b5,	// (0x000603c4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0006e679) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0006e679) cell_vitu2_dropdown_list_ctrl_pane_g

0xccfa,	// (0x0006b909) aid_size_cell_gallery2_ParamLimits

0xccfa,	// (0x0006b909) aid_size_cell_gallery2

0xcd08,	// (0x0006b917) grid_gallery2_pane_ParamLimits

0xcd08,	// (0x0006b917) grid_gallery2_pane

0xcd17,	// (0x0006b926) scroll_pane_cp029_ParamLimits

0xcd17,	// (0x0006b926) scroll_pane_cp029

0xcd23,	// (0x0006b932) cell_gallery2_pane_ParamLimits

0xcd23,	// (0x0006b932) cell_gallery2_pane

0x2274,	// (0x00060e83) cell_gallery2_pane_g2

0x387e,	// (0x0006248d) cell_gallery2_pane_g3

0x227e,	// (0x00060e8d) cell_gallery2_pane_g4

0x2286,	// (0x00060e95) cell_gallery2_pane_g5

0x8ab7,	// (0x000676c6) grid_highlight_pane_cp10

0xc40a,	// (0x0006b019) popup_vitu2_match_list_window_ParamLimits

0xc41e,	// (0x0006b02d) popup_vitu2_query_window_ParamLimits

0xc41e,	// (0x0006b02d) popup_vitu2_query_window

0x0541,	// (0x0005f150) bg_vitu2_candi_button_pane

0x226b,	// (0x00060e7a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2262,	// (0x00060e71) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2259,	// (0x00060e68) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5271,	// (0x00063e80) bg_button_pane_cp015

0xcd51,	// (0x0006b960) bg_button_pane_cp016

0xcd5b,	// (0x0006b96a) bg_button_pane_cp017

0xf115,	// (0x0006dd24) bg_popup_sub_pane_cp22

0x228e,	// (0x00060e9d) popup_vitu2_query_window_g1

0x5288,	// (0x00063e97) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0006e684) popup_vitu2_query_window_g

0x5296,	// (0x00063ea5) popup_vitu2_query_window_t1_ParamLimits

0x5296,	// (0x00063ea5) popup_vitu2_query_window_t1

0x52be,	// (0x00063ecd) popup_vitu2_query_window_t2_ParamLimits

0x52be,	// (0x00063ecd) popup_vitu2_query_window_t2

0x52d0,	// (0x00063edf) popup_vitu2_query_window_t3_ParamLimits

0x52d0,	// (0x00063edf) popup_vitu2_query_window_t3

0xcd76,	// (0x0006b985) popup_vitu2_query_window_t4_ParamLimits

0xcd76,	// (0x0006b985) popup_vitu2_query_window_t4

0xcd8a,	// (0x0006b999) popup_vitu2_query_window_t5_ParamLimits

0xcd8a,	// (0x0006b999) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0006e689) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0006e689) popup_vitu2_query_window_t

0x20f6,	// (0x00060d05) main_cset_text_pane

0xc7de,	// (0x0006b3ed) aid_area_touch_slider_ParamLimits

0xc7fa,	// (0x0006b409) cset_slider_pane_ParamLimits

0xc824,	// (0x0006b433) main_cset_slider_pane_g1_ParamLimits

0xc839,	// (0x0006b448) main_cset_slider_pane_g2_ParamLimits

0x2117,	// (0x00060d26) main_cset_slider_pane_g3_ParamLimits

0x2117,	// (0x00060d26) main_cset_slider_pane_g3

0xc84e,	// (0x0006b45d) main_cset_slider_pane_g4_ParamLimits

0xc84e,	// (0x0006b45d) main_cset_slider_pane_g4

0xc85d,	// (0x0006b46c) main_cset_slider_pane_g5_ParamLimits

0xc85d,	// (0x0006b46c) main_cset_slider_pane_g5

0xc86b,	// (0x0006b47a) main_cset_slider_pane_g6_ParamLimits

0xc86b,	// (0x0006b47a) main_cset_slider_pane_g6

0xf9cf,	// (0x0006e5de) main_cset_slider_pane_g_ParamLimits

0x2147,	// (0x00060d56) main_cset_slider_pane_t1_ParamLimits

0xc8fb,	// (0x0006b50a) main_cset_slider_pane_t2_ParamLimits

0xc915,	// (0x0006b524) main_cset_slider_pane_t3_ParamLimits

0xc92f,	// (0x0006b53e) main_cset_slider_pane_t4_ParamLimits

0xc949,	// (0x0006b558) main_cset_slider_pane_t5_ParamLimits

0xc967,	// (0x0006b576) main_cset_slider_pane_t6_ParamLimits

0xc97e,	// (0x0006b58d) main_cset_slider_pane_t7_ParamLimits

0xc9ac,	// (0x0006b5bb) main_cset_slider_pane_t8_ParamLimits

0xc9ac,	// (0x0006b5bb) main_cset_slider_pane_t8

0xc9d4,	// (0x0006b5e3) main_cset_slider_pane_t9_ParamLimits

0xc9d4,	// (0x0006b5e3) main_cset_slider_pane_t9

0xc9fc,	// (0x0006b60b) main_cset_slider_pane_t10_ParamLimits

0xc9fc,	// (0x0006b60b) main_cset_slider_pane_t10

0xca24,	// (0x0006b633) main_cset_slider_pane_t11_ParamLimits

0xca24,	// (0x0006b633) main_cset_slider_pane_t11

0xca4e,	// (0x0006b65d) main_cset_slider_pane_t12_ParamLimits

0xca4e,	// (0x0006b65d) main_cset_slider_pane_t12

0xca6b,	// (0x0006b67a) main_cset_slider_pane_t13_ParamLimits

0xca6b,	// (0x0006b67a) main_cset_slider_pane_t13

0xf9f4,	// (0x0006e603) main_cset_slider_pane_t_ParamLimits

0x0541,	// (0x0005f150) bg_popup_sub_pane_cp011

0x229a,	// (0x00060ea9) main_cset_text_pane_g1

0x22a2,	// (0x00060eb1) main_cset_text_pane_t1

0x22b0,	// (0x00060ebf) main_cset_text_pane_t2

0x22be,	// (0x00060ecd) main_cset_text_pane_t3

0x22cc,	// (0x00060edb) main_cset_text_pane_t4

0x22da,	// (0x00060ee9) main_cset_text_pane_t5

0x22e8,	// (0x00060ef7) main_cset_text_pane_t6

0x22f6,	// (0x00060f05) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0006e694) main_cset_text_pane_t

0x0541,	// (0x0005f150) main_cam4_burst_pane

0x0541,	// (0x0005f150) main_cam5_pane

0xc72b,	// (0x0006b33a) bg_button_pane_cp019

0xc734,	// (0x0006b343) bg_button_pane_cp020

0x2123,	// (0x00060d32) main_cset_slider_pane_g7_ParamLimits

0x2123,	// (0x00060d32) main_cset_slider_pane_g7

0x212f,	// (0x00060d3e) main_cset_slider_pane_g8_ParamLimits

0x212f,	// (0x00060d3e) main_cset_slider_pane_g8

0xc87f,	// (0x0006b48e) main_cset_slider_pane_g9_ParamLimits

0xc87f,	// (0x0006b48e) main_cset_slider_pane_g9

0xc88b,	// (0x0006b49a) main_cset_slider_pane_g10_ParamLimits

0xc88b,	// (0x0006b49a) main_cset_slider_pane_g10

0xc897,	// (0x0006b4a6) main_cset_slider_pane_g11_ParamLimits

0xc897,	// (0x0006b4a6) main_cset_slider_pane_g11

0xc8a3,	// (0x0006b4b2) main_cset_slider_pane_g12_ParamLimits

0xc8a3,	// (0x0006b4b2) main_cset_slider_pane_g12

0xc8af,	// (0x0006b4be) main_cset_slider_pane_g13_ParamLimits

0xc8af,	// (0x0006b4be) main_cset_slider_pane_g13

0xc8bb,	// (0x0006b4ca) main_cset_slider_pane_g14_ParamLimits

0xc8bb,	// (0x0006b4ca) main_cset_slider_pane_g14

0xc8c7,	// (0x0006b4d6) main_cset_slider_pane_g15_ParamLimits

0xc8c7,	// (0x0006b4d6) main_cset_slider_pane_g15

0x2175,	// (0x00060d84) main_cset_slider_pane_t14_ParamLimits

0x2175,	// (0x00060d84) main_cset_slider_pane_t14

0x21ae,	// (0x00060dbd) main_cset_slider_pane_t15_ParamLimits

0x21ae,	// (0x00060dbd) main_cset_slider_pane_t15

0xcd9e,	// (0x0006b9ad) aid_cam4_burst_size_cell_ParamLimits

0xcd9e,	// (0x0006b9ad) aid_cam4_burst_size_cell

0xcdba,	// (0x0006b9c9) grid_cam4_burst_pane_ParamLimits

0xcdba,	// (0x0006b9c9) grid_cam4_burst_pane

0xcdea,	// (0x0006b9f9) linegrid_cam4_burst_pane_ParamLimits

0xcdea,	// (0x0006b9f9) linegrid_cam4_burst_pane

0xce0a,	// (0x0006ba19) scroll_pane_cp30_ParamLimits

0xce0a,	// (0x0006ba19) scroll_pane_cp30

0xce16,	// (0x0006ba25) cell_cam4_burst_pane_ParamLimits

0xce16,	// (0x0006ba25) cell_cam4_burst_pane

0x2304,	// (0x00060f13) linegrid_cam4_burst_pane_g1_ParamLimits

0x2304,	// (0x00060f13) linegrid_cam4_burst_pane_g1

0xce52,	// (0x0006ba61) linegrid_cam4_burst_pane_g2_ParamLimits

0xce52,	// (0x0006ba61) linegrid_cam4_burst_pane_g2

0x2311,	// (0x00060f20) linegrid_cam4_burst_pane_g3_ParamLimits

0x2311,	// (0x00060f20) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0006e6a3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0006e6a3) linegrid_cam4_burst_pane_g

0xce63,	// (0x0006ba72) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xce63,	// (0x0006ba72) linegrid_cam4_burst_pane_g3_copy1

0x231e,	// (0x00060f2d) linegrid_cam4_burst_pane_g4_ParamLimits

0x231e,	// (0x00060f2d) linegrid_cam4_burst_pane_g4

0xce7d,	// (0x0006ba8c) linegrid_cam4_burst_pane_g5_ParamLimits

0xce7d,	// (0x0006ba8c) linegrid_cam4_burst_pane_g5

0xce8e,	// (0x0006ba9d) linegrid_cam4_burst_pane_g6_ParamLimits

0xce8e,	// (0x0006ba9d) linegrid_cam4_burst_pane_g6

0x232b,	// (0x00060f3a) linegrid_cam4_burst_pane_g7_ParamLimits

0x232b,	// (0x00060f3a) linegrid_cam4_burst_pane_g7

0xce9f,	// (0x0006baae) cell_cam4_burst_pane_g1

0x2344,	// (0x00060f53) main_cam5_pane_t1_ParamLimits

0x2344,	// (0x00060f53) main_cam5_pane_t1

0x2356,	// (0x00060f65) main_cam5_pane_t2_ParamLimits

0x2356,	// (0x00060f65) main_cam5_pane_t2

0x2368,	// (0x00060f77) main_cam5_pane_t3_ParamLimits

0x2368,	// (0x00060f77) main_cam5_pane_t3

0x237a,	// (0x00060f89) main_cam5_pane_t4_ParamLimits

0x237a,	// (0x00060f89) main_cam5_pane_t4

0x2392,	// (0x00060fa1) main_cam5_pane_t5_ParamLimits

0x2392,	// (0x00060fa1) main_cam5_pane_t5

0x23a6,	// (0x00060fb5) main_cam5_pane_t6_ParamLimits

0x23a6,	// (0x00060fb5) main_cam5_pane_t6

0x23ba,	// (0x00060fc9) main_cam5_pane_t7_ParamLimits

0x23ba,	// (0x00060fc9) main_cam5_pane_t7

0x23cc,	// (0x00060fdb) main_cam5_pane_t8_ParamLimits

0x23cc,	// (0x00060fdb) main_cam5_pane_t8

0x23e8,	// (0x00060ff7) main_cam5_pane_t9_ParamLimits

0x23e8,	// (0x00060ff7) main_cam5_pane_t9

0x23fa,	// (0x00061009) main_cam5_pane_t10_ParamLimits

0x23fa,	// (0x00061009) main_cam5_pane_t10

0x240c,	// (0x0006101b) main_cam5_pane_t11_ParamLimits

0x240c,	// (0x0006101b) main_cam5_pane_t11

0x241e,	// (0x0006102d) main_cam5_pane_t12_ParamLimits

0x241e,	// (0x0006102d) main_cam5_pane_t12

0x2433,	// (0x00061042) main_cam5_pane_t13_ParamLimits

0x2433,	// (0x00061042) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0006e6af) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0006e6af) main_cam5_pane_t

0x5ff1,	// (0x00064c00) popup_scut_keymap_window_ParamLimits

0x5ff1,	// (0x00064c00) popup_scut_keymap_window

0xceb2,	// (0x0006bac1) aid_size_cell_brow_shortcut

0x8ab7,	// (0x000676c6) bg_popup_window_pane_cp010

0xcebe,	// (0x0006bacd) grid_scut_pane

0xceca,	// (0x0006bad9) cell_scut_pane_ParamLimits

0xceca,	// (0x0006bad9) cell_scut_pane

0xcee1,	// (0x0006baf0) cell_scut_pane_g1

0x2450,	// (0x0006105f) cell_scut_pane_t1

0x245f,	// (0x0006106e) cell_scut_pane_t2

0xceea,	// (0x0006baf9) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0006e6ca) cell_scut_pane_t

0xafdc,	// (0x00069beb) main_mup3_pane_g8_ParamLimits

0xafdc,	// (0x00069beb) main_mup3_pane_g8

0xc342,	// (0x0006af51) area_vitu2_query_pane_ParamLimits

0xc342,	// (0x0006af51) area_vitu2_query_pane

0x527b,	// (0x00063e8a) input_focus_pane_cp08

0x246e,	// (0x0006107d) area_vitu2_query_pane_g1

0x52f8,	// (0x00063f07) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0006e6d1) area_vitu2_query_pane_g

0xcef8,	// (0x0006bb07) area_vitu2_query_pane_t1_ParamLimits

0xcef8,	// (0x0006bb07) area_vitu2_query_pane_t1

0xcf0c,	// (0x0006bb1b) area_vitu2_query_pane_t2_ParamLimits

0xcf0c,	// (0x0006bb1b) area_vitu2_query_pane_t2

0x5309,	// (0x00063f18) area_vitu2_query_pane_t3_ParamLimits

0x5309,	// (0x00063f18) area_vitu2_query_pane_t3

0x5331,	// (0x00063f40) area_vitu2_query_pane_t4_ParamLimits

0x5331,	// (0x00063f40) area_vitu2_query_pane_t4

0x5359,	// (0x00063f68) area_vitu2_query_pane_t5_ParamLimits

0x5359,	// (0x00063f68) area_vitu2_query_pane_t5

0x5381,	// (0x00063f90) area_vitu2_query_pane_t6_ParamLimits

0x5381,	// (0x00063f90) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0006e6d6) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0006e6d6) area_vitu2_query_pane_t

0xcf20,	// (0x0006bb2f) bg_button_pane_cp018

0xcf2e,	// (0x0006bb3d) bg_button_pane_cp021

0x53cd,	// (0x00063fdc) bg_button_pane_cp022

0x53de,	// (0x00063fed) input_focus_pane_cp09

0x88f2,	// (0x00067501) aid_size_touch_mv_arrow_left

0x891b,	// (0x0006752a) aid_size_touch_mv_arrow_right

0xc8df,	// (0x0006b4ee) main_cset_slider_pane_g16_ParamLimits

0xc8df,	// (0x0006b4ee) main_cset_slider_pane_g16

0xc8ed,	// (0x0006b4fc) main_cset_slider_pane_g17_ParamLimits

0xc8ed,	// (0x0006b4fc) main_cset_slider_pane_g17

0xce9f,	// (0x0006baae) cell_cam4_burst_pane_g1_ParamLimits

0x0541,	// (0x0005f150) compa_mode_pane

0xcafc,	// (0x0006b70b) popup_vtel_slider_window_g3_ParamLimits

0xcafc,	// (0x0006b70b) popup_vtel_slider_window_g3

0xcb10,	// (0x0006b71f) popup_vtel_slider_window_g4_ParamLimits

0xcb10,	// (0x0006b71f) popup_vtel_slider_window_g4

0xcb24,	// (0x0006b733) popup_vtel_slider_window_t1_ParamLimits

0xcb24,	// (0x0006b733) popup_vtel_slider_window_t1

0x0541,	// (0x0005f150) main_cl_pane

0x106b,	// (0x0005fc7a) popup_imed_adjust2_window_ParamLimits

0x1043,	// (0x0005fc52) bg_tb_trans_pane_cp05_ParamLimits

0x1a90,	// (0x0006069f) popup_imed_adjust2_window_g1_ParamLimits

0x1a9f,	// (0x000606ae) popup_imed_adjust2_window_g2_ParamLimits

0x1a9f,	// (0x000606ae) popup_imed_adjust2_window_g2

0x1aab,	// (0x000606ba) popup_imed_adjust2_window_g3_ParamLimits

0x1aab,	// (0x000606ba) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0006e450) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0006e450) popup_imed_adjust2_window_g

0x1ab7,	// (0x000606c6) popup_imed_adjust2_window_t1_ParamLimits

0x1acf,	// (0x000606de) slider_imed_adjust_pane_ParamLimits

0x1ae3,	// (0x000606f2) slider_imed_adjust_pane_g1_ParamLimits

0x1af3,	// (0x00060702) slider_imed_adjust_pane_g2_ParamLimits

0x1b03,	// (0x00060712) slider_imed_adjust_pane_g3_ParamLimits

0x1b14,	// (0x00060723) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0006e457) slider_imed_adjust_pane_g_ParamLimits

0xc0ca,	// (0x0006acd9) aid_touch_area_cam4_ParamLimits

0xc0ca,	// (0x0006acd9) aid_touch_area_cam4

0xc0da,	// (0x0006ace9) battery_pane_cp01

0xc161,	// (0x0006ad70) main_camera4_pane_g6_ParamLimits

0xc161,	// (0x0006ad70) main_camera4_pane_g6

0xc17f,	// (0x0006ad8e) main_camera4_pane_t2_ParamLimits

0xc17f,	// (0x0006ad8e) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0006e55a) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0006e55a) main_camera4_pane_t

0xc1e0,	// (0x0006adef) aid_touch_area_vid4_ParamLimits

0xc1e0,	// (0x0006adef) aid_touch_area_vid4

0xc220,	// (0x0006ae2f) main_video4_pane_g5_ParamLimits

0xc220,	// (0x0006ae2f) main_video4_pane_g5

0xc242,	// (0x0006ae51) vid4_progress_pane_ParamLimits

0xc242,	// (0x0006ae51) vid4_progress_pane

0x213b,	// (0x00060d4a) main_cset_slider_pane_g18_ParamLimits

0x213b,	// (0x00060d4a) main_cset_slider_pane_g18

0x2338,	// (0x00060f47) cell_cam4_burst_pane_g2_ParamLimits

0x2338,	// (0x00060f47) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0006e6aa) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0006e6aa) cell_cam4_burst_pane_g

0xcf3a,	// (0x0006bb49) bg_cl_pane_ParamLimits

0xcf3a,	// (0x0006bb49) bg_cl_pane

0xcf46,	// (0x0006bb55) cl_header_pane_ParamLimits

0xcf46,	// (0x0006bb55) cl_header_pane

0xcf52,	// (0x0006bb61) cl_listscroll_pane_ParamLimits

0xcf52,	// (0x0006bb61) cl_listscroll_pane

0x2516,	// (0x00061125) bg_cl_pane_g1

0x251e,	// (0x0006112d) bg_cl_pane_g2

0x2526,	// (0x00061135) bg_cl_pane_g3

0x252e,	// (0x0006113d) bg_cl_pane_g4

0x2536,	// (0x00061145) bg_cl_pane_g5

0x253e,	// (0x0006114d) bg_cl_pane_g6

0x2546,	// (0x00061155) bg_cl_pane_g7

0x254e,	// (0x0006115d) bg_cl_pane_g8

0x2556,	// (0x00061165) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0006e6e5) bg_cl_pane_g

0xcf5e,	// (0x0006bb6d) aid_height_cl_leading_ParamLimits

0xcf5e,	// (0x0006bb6d) aid_height_cl_leading

0xcf6a,	// (0x0006bb79) aid_height_cl_text_ParamLimits

0xcf6a,	// (0x0006bb79) aid_height_cl_text

0x6028,	// (0x00064c37) bg_cl_header_pane_ParamLimits

0x6028,	// (0x00064c37) bg_cl_header_pane

0xcf82,	// (0x0006bb91) cl_header_pane_g1_ParamLimits

0xcf82,	// (0x0006bb91) cl_header_pane_g1

0xcf8f,	// (0x0006bb9e) cl_header_pane_t1_ParamLimits

0xcf8f,	// (0x0006bb9e) cl_header_pane_t1

0x255e,	// (0x0006116d) cl_list_pane

0x210e,	// (0x00060d1d) hc_scroll_pane_cp01

0x7603,	// (0x00066212) bg_cl_header_pane_g1

0x1ff4,	// (0x00060c03) bg_cl_header_pane_g2

0x7623,	// (0x00066232) bg_cl_header_pane_g3

0x2004,	// (0x00060c13) bg_cl_header_pane_g4

0x1ffc,	// (0x00060c0b) bg_cl_header_pane_g5

0x2239,	// (0x00060e48) bg_cl_header_pane_g6

0x201c,	// (0x00060c2b) bg_cl_header_pane_g7

0x2024,	// (0x00060c33) bg_cl_header_pane_g8

0x2014,	// (0x00060c23) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0006e6f8) bg_cl_header_pane_g

0xcfa1,	// (0x0006bbb0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcfa1,	// (0x0006bbb0) hc_cl_list_double_graphic_heading_pane

0xcfb2,	// (0x0006bbc1) hc_cl_list_single_graphic_pane_ParamLimits

0xcfb2,	// (0x0006bbc1) hc_cl_list_single_graphic_pane

0xcfcb,	// (0x0006bbda) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcfcb,	// (0x0006bbda) hc_cl_list_single_graphic_pane_g1

0xcfd7,	// (0x0006bbe6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcfd7,	// (0x0006bbe6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0006e70b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0006e70b) hc_cl_list_single_graphic_pane_g

0xcfeb,	// (0x0006bbfa) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcfeb,	// (0x0006bbfa) hc_cl_list_single_graphic_pane_t1

0xcfcb,	// (0x0006bbda) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcfcb,	// (0x0006bbda) hc_cl_list_double_graphic_heading_pane_g1

0xd000,	// (0x0006bc0f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd000,	// (0x0006bc0f) hc_cl_list_double_graphic_heading_pane_g2

0xd014,	// (0x0006bc23) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd014,	// (0x0006bc23) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0006e710) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0006e710) hc_cl_list_double_graphic_heading_pane_g

0xd028,	// (0x0006bc37) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd028,	// (0x0006bc37) hc_cl_list_double_graphic_heading_pane_t1

0xd03d,	// (0x0006bc4c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd03d,	// (0x0006bc4c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0006e717) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0006e717) hc_cl_list_double_graphic_heading_pane_t

0xd064,	// (0x0006bc73) vid4_progress_pane_g1

0xd070,	// (0x0006bc7f) vid4_progress_pane_g2

0xd07c,	// (0x0006bc8b) vid4_progress_pane_g3

0xd08b,	// (0x0006bc9a) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0006e71c) vid4_progress_pane_g

0xd0a9,	// (0x0006bcb8) vid4_progress_pane_t1

0xd0bf,	// (0x0006bcce) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0006e727) vid4_progress_pane_t

0xd0ea,	// (0x0006bcf9) wait_bar_pane_cp07

0x133c,	// (0x0005ff4b) blid_firmament_pane_ParamLimits

0x137f,	// (0x0005ff8e) popup_blid_sat_info2_window_g1

0x13a3,	// (0x0005ffb2) popup_blid_sat_info2_window_t3

0x13b1,	// (0x0005ffc0) popup_blid_sat_info2_window_t4

0x13bf,	// (0x0005ffce) popup_blid_sat_info2_window_t5

0x13cd,	// (0x0005ffdc) popup_blid_sat_info2_window_t6

0x13dd,	// (0x0005ffec) popup_blid_sat_info2_window_t7

0x13eb,	// (0x0005fffa) popup_blid_sat_info2_window_t8

0x13f9,	// (0x00060008) popup_blid_sat_info2_window_t9

0x1407,	// (0x00060016) popup_blid_sat_info2_window_t10

0x14c9,	// (0x000600d8) aid_firma_cardinal_ParamLimits

0x14dd,	// (0x000600ec) blid_firmament_pane_t1_ParamLimits

0x14f4,	// (0x00060103) blid_firmament_pane_t2_ParamLimits

0x150b,	// (0x0006011a) blid_firmament_pane_t3_ParamLimits

0x1522,	// (0x00060131) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0006e349) blid_firmament_pane_t_ParamLimits

0x1539,	// (0x00060148) blid_sat_info_pane_ParamLimits

0xf115,	// (0x0006dd24) main_cam_set_pane_ParamLimits

0xb761,	// (0x0006a370) aid_size_cell_colour_35_ParamLimits

0xb77b,	// (0x0006a38a) aid_size_cell_colour_112_ParamLimits

0xb792,	// (0x0006a3a1) aid_size_cell_effect_ParamLimits

0xf115,	// (0x0006dd24) bg_tb_trans_pane_cp02_ParamLimits

0xf123,	// (0x0006dd32) heading_imed_pane_ParamLimits

0xb7ac,	// (0x0006a3bb) listscroll_imed_pane_ParamLimits

0x9ecc,	// (0x00068adb) popup_call2_audio_first_window_g5_ParamLimits

0x9ecc,	// (0x00068adb) popup_call2_audio_first_window_g5

0xbe87,	// (0x0006aa96) aid_size_touch_image3_arrow_left_ParamLimits

0xbe87,	// (0x0006aa96) aid_size_touch_image3_arrow_left

0xbe9d,	// (0x0006aaac) aid_size_touch_image3_arrow_right_ParamLimits

0xbe9d,	// (0x0006aaac) aid_size_touch_image3_arrow_right

0xd0d5,	// (0x0006bce4) vid4_progress_pane_t3

0xba49,	// (0x0006a658) main_hwr_training_symbol_option_pane_ParamLimits

0xba49,	// (0x0006a658) main_hwr_training_symbol_option_pane

0x1d7d,	// (0x0006098c) popup_hwr_training_preview_window_ParamLimits

0x1d7d,	// (0x0006098c) popup_hwr_training_preview_window

0xbaaa,	// (0x0006a6b9) hwr_training_navi_pane_g5_ParamLimits

0xbaaa,	// (0x0006a6b9) hwr_training_navi_pane_g5

0x1fe2,	// (0x00060bf1) popup_char_count_window

0x6028,	// (0x00064c37) bg_popup_sub_pane_cp20_ParamLimits

0xcc1a,	// (0x0006b829) list_vitu2_match_list_pane_ParamLimits

0xcc26,	// (0x0006b835) vitu2_page_scroll_pane_ParamLimits

0xcc26,	// (0x0006b835) vitu2_page_scroll_pane

0x25c1,	// (0x000611d0) list_single_hwr_training_symbol_option_pane_ParamLimits

0x25c1,	// (0x000611d0) list_single_hwr_training_symbol_option_pane

0x25d4,	// (0x000611e3) list_single_hwr_training_symbol_option_pane_g1

0x25dc,	// (0x000611eb) list_single_hwr_training_symbol_option_pane_t1

0x25ea,	// (0x000611f9) bg_button_pane_cp023

0x25f3,	// (0x00061202) bg_button_pane_cp024

0xd102,	// (0x0006bd11) vitu2_page_scroll_pane_g1

0xd10a,	// (0x0006bd19) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0006e72e) vitu2_page_scroll_pane_g

0xd112,	// (0x0006bd21) vitu2_page_scroll_pane_t1

0x2626,	// (0x00061235) popup_char_count_window_g1

0x262f,	// (0x0006123e) popup_char_count_window_g2

0x2638,	// (0x00061247) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0006e733) popup_char_count_window_g

0x2641,	// (0x00061250) popup_char_count_window_t1

0x0541,	// (0x0005f150) main_vded2_pane

0x1a7c,	// (0x0006068b) aid_size_cell_imed_line

0x1a86,	// (0x00060695) grid_imed_line_width_pane

0xc296,	// (0x0006aea5) vid4_indicators_pane_g4

0x264f,	// (0x0006125e) cell_imed_line_width_pane_ParamLimits

0x264f,	// (0x0006125e) cell_imed_line_width_pane

0x2663,	// (0x00061272) cell_imed_line_width_pane_g1

0x12ea,	// (0x0005fef9) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0006e73a) cell_imed_line_width_pane_g

0xd121,	// (0x0006bd30) main_vded2_pane_g1_ParamLimits

0xd121,	// (0x0006bd30) main_vded2_pane_g1

0xd12e,	// (0x0006bd3d) main_vded2_pane_g2_ParamLimits

0xd12e,	// (0x0006bd3d) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0006e73f) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0006e73f) main_vded2_pane_g

0xd13c,	// (0x0006bd4b) vded2_slider_pane_ParamLimits

0xd13c,	// (0x0006bd4b) vded2_slider_pane

0xd149,	// (0x0006bd58) aid_size_touch_vded2_end

0xd153,	// (0x0006bd62) aid_size_touch_vded2_playhead

0x266c,	// (0x0006127b) aid_size_touch_vded2_start

0x2674,	// (0x00061283) vded2_slider_bg_pane

0x267d,	// (0x0006128c) vded2_slider_pane_g1

0x2686,	// (0x00061295) vded2_slider_pane_g2

0xd15b,	// (0x0006bd6a) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0006e744) vded2_slider_pane_g

0x268e,	// (0x0006129d) vded2_slider_bg_pane_g1

0x2697,	// (0x000612a6) vded2_slider_bg_pane_g2

0x26a0,	// (0x000612af) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0006e74b) vded2_slider_bg_pane_g

0x91b2,	// (0x00067dc1) aid_postcard_touch_down_pane_ParamLimits

0x91b2,	// (0x00067dc1) aid_postcard_touch_down_pane

0x91c2,	// (0x00067dd1) aid_postcard_touch_up_pane_ParamLimits

0x91c2,	// (0x00067dd1) aid_postcard_touch_up_pane

0x0541,	// (0x0005f150) main_blid2_pane

0x1051,	// (0x0005fc60) popup_blid2_search_window

0x0541,	// (0x0005f150) blid2_gps_pane

0x0541,	// (0x0005f150) blid2_navig_pane

0x0541,	// (0x0005f150) blid2_search_pane

0x0541,	// (0x0005f150) blid2_tripm_pane

0xd164,	// (0x0006bd73) blid2_search_pane_g1_ParamLimits

0xd164,	// (0x0006bd73) blid2_search_pane_g1

0xd174,	// (0x0006bd83) blid2_search_pane_t1_ParamLimits

0xd174,	// (0x0006bd83) blid2_search_pane_t1

0xd186,	// (0x0006bd95) aid_size_cell_blid2_gps_ParamLimits

0xd186,	// (0x0006bd95) aid_size_cell_blid2_gps

0xd196,	// (0x0006bda5) blid2_gps_pane_g1_ParamLimits

0xd196,	// (0x0006bda5) blid2_gps_pane_g1

0xd1a2,	// (0x0006bdb1) grid_blid2_satellite_pane_ParamLimits

0xd1a2,	// (0x0006bdb1) grid_blid2_satellite_pane

0xd1b2,	// (0x0006bdc1) blid2_navig_pane_g1_ParamLimits

0xd1b2,	// (0x0006bdc1) blid2_navig_pane_g1

0xd1be,	// (0x0006bdcd) blid2_navig_pane_t1_ParamLimits

0xd1be,	// (0x0006bdcd) blid2_navig_pane_t1

0xd1d0,	// (0x0006bddf) blid2_navig_pane_t2_ParamLimits

0xd1d0,	// (0x0006bddf) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0006e752) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0006e752) blid2_navig_pane_t

0xd1e2,	// (0x0006bdf1) blid2_navig_ring_pane_ParamLimits

0xd1e2,	// (0x0006bdf1) blid2_navig_ring_pane

0xd1f2,	// (0x0006be01) blid2_speed_pane_ParamLimits

0xd1f2,	// (0x0006be01) blid2_speed_pane

0xd1fe,	// (0x0006be0d) blid2_tripm_pane_g1_ParamLimits

0xd1fe,	// (0x0006be0d) blid2_tripm_pane_g1

0xd20e,	// (0x0006be1d) blid2_tripm_pane_g2_ParamLimits

0xd20e,	// (0x0006be1d) blid2_tripm_pane_g2

0xd21a,	// (0x0006be29) blid2_tripm_pane_g3_ParamLimits

0xd21a,	// (0x0006be29) blid2_tripm_pane_g3

0xd226,	// (0x0006be35) blid2_tripm_pane_g4_ParamLimits

0xd226,	// (0x0006be35) blid2_tripm_pane_g4

0xd232,	// (0x0006be41) blid2_tripm_pane_g5_ParamLimits

0xd232,	// (0x0006be41) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0006e757) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0006e757) blid2_tripm_pane_g

0xd24e,	// (0x0006be5d) blid2_tripm_pane_t1_ParamLimits

0xd24e,	// (0x0006be5d) blid2_tripm_pane_t1

0xd262,	// (0x0006be71) blid2_tripm_pane_t2_ParamLimits

0xd262,	// (0x0006be71) blid2_tripm_pane_t2

0xd274,	// (0x0006be83) blid2_tripm_pane_t3_ParamLimits

0xd274,	// (0x0006be83) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0006e764) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0006e764) blid2_tripm_pane_t

0xd2a6,	// (0x0006beb5) cell_blid2_satellite_pane_ParamLimits

0xd2a6,	// (0x0006beb5) cell_blid2_satellite_pane

0xd2c0,	// (0x0006becf) cell_blid2_satellite_pane_g1

0x26a9,	// (0x000612b8) cell_blid2_satellite_pane_t1

0x1549,	// (0x00060158) blid2_speed_pane_g1

0x26b7,	// (0x000612c6) blid2_speed_pane_t1

0x26c5,	// (0x000612d4) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0006e76d) blid2_speed_pane_t

0x1549,	// (0x00060158) blid2_navig_ring_pane_g1

0xd2c9,	// (0x0006bed8) blid2_navig_ring_pane_g2

0xd2d1,	// (0x0006bee0) blid2_navig_ring_pane_g3

0xd2d9,	// (0x0006bee8) blid2_navig_ring_pane_g4

0xd2e1,	// (0x0006bef0) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0006e772) blid2_navig_ring_pane_g

0x0541,	// (0x0005f150) bg_popup_window_pane_cp011

0x26d3,	// (0x000612e2) popup_blid2_search_window_g1

0x26db,	// (0x000612ea) popup_blid2_search_window_t1

0x26e9,	// (0x000612f8) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0006e77d) popup_blid2_search_window_t

0x747d,	// (0x0006608c) main_browser_pane_g1

0x646d,	// (0x0006507c) main_browser_pane_ParamLimits

0xf115,	// (0x0006dd24) bg_button_pane_cp011_ParamLimits

0xc500,	// (0x0006b10f) cell_vitu2_function_pane_g1_ParamLimits

0xf115,	// (0x0006dd24) bg_popup_sub_pane_cp22_ParamLimits

0x527b,	// (0x00063e8a) input_focus_pane_cp08_ParamLimits

0xcd65,	// (0x0006b974) popup_vitu2_query_button_pane_ParamLimits

0xcd65,	// (0x0006b974) popup_vitu2_query_button_pane

0x5271,	// (0x00063e80) popup_vitu2_query_input_button_pane

0x228e,	// (0x00060e9d) popup_vitu2_query_window_g1_ParamLimits

0x5288,	// (0x00063e97) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0006e684) popup_vitu2_query_window_g_ParamLimits

0x0541,	// (0x0005f150) bg_button_pane_cp026

0xd2e9,	// (0x0006bef8) popup_vitu2_query_input_button_pane_g1

0x0541,	// (0x0005f150) bg_button_pane_cp025

0x26f7,	// (0x00061306) popup_vitu2_query_button_pane_t1

0xaceb,	// (0x000698fa) main_mp3_pane_t6

0xacfb,	// (0x0006990a) popup_slider_window_cp01

0xc191,	// (0x0006ada0) cam4_battery_pane

0xc26e,	// (0x0006ae7d) cam4_battery_pane_cp02

0xd052,	// (0x0006bc61) cam4_battery_pane_cp01

0xd05c,	// (0x0006bc6b) cam4_battery_pane_cp03

0x1549,	// (0x00060158) cam4_battery_pane_g1

0x1e7b,	// (0x00060a8a) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0006e782) cam4_battery_pane_g

0x1415,	// (0x00060024) popup_blid_sat_info2_window_t11

0x88f2,	// (0x00067501) aid_size_touch_mv_arrow_left_ParamLimits

0x891b,	// (0x0006752a) aid_size_touch_mv_arrow_right_ParamLimits

0x8963,	// (0x00067572) navi_pane_g1_ParamLimits

0x896f,	// (0x0006757e) navi_pane_g2_ParamLimits

0x899d,	// (0x000675ac) navi_pane_g3_ParamLimits

0xf44c,	// (0x0006e05b) navi_pane_g_ParamLimits

0x8a5b,	// (0x0006766a) navi_pane_mv_t1_ParamLimits

0xb7b8,	// (0x0006a3c7) grid_imed_effect_pane_ParamLimits

0x7048,	// (0x00065c57) aid_placing_vt_slider_lsc

0x7050,	// (0x00065c5f) aid_placing_vt_slider_prt

0xf115,	// (0x0006dd24) bg_tb_trans_pane_cp01_ParamLimits

0x16d5,	// (0x000602e4) popup_image_details_window_g1_ParamLimits

0x16e8,	// (0x000602f7) popup_image_details_window_g2_ParamLimits

0x16fd,	// (0x0006030c) popup_image_details_window_g3_ParamLimits

0x16fd,	// (0x0006030c) popup_image_details_window_g3

0xf77f,	// (0x0006e38e) popup_image_details_window_g_ParamLimits

0x1711,	// (0x00060320) popup_image_details_window_t1_ParamLimits

0x1723,	// (0x00060332) popup_image_details_window_t2_ParamLimits

0x173c,	// (0x0006034b) popup_image_details_window_t3_ParamLimits

0x1750,	// (0x0006035f) popup_image_details_window_t4_ParamLimits

0x176b,	// (0x0006037a) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0006e395) popup_image_details_window_t_ParamLimits

0xcf76,	// (0x0006bb85) cl_header_name_pane_ParamLimits

0xcf76,	// (0x0006bb85) cl_header_name_pane

0xd2f1,	// (0x0006bf00) cl_header_name_pane_t1_ParamLimits

0xd2f1,	// (0x0006bf00) cl_header_name_pane_t1

0xd308,	// (0x0006bf17) cl_header_name_pane_t2_ParamLimits

0xd308,	// (0x0006bf17) cl_header_name_pane_t2

0xd332,	// (0x0006bf41) cl_header_name_pane_t3_ParamLimits

0xd332,	// (0x0006bf41) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0006e787) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0006e787) cl_header_name_pane_t

0x8a2c,	// (0x0006763b) navi_pane_mv_g2_ParamLimits

0x1f9f,	// (0x00060bae) field_vitu2_entry_pane_g1_ParamLimits

0x1fab,	// (0x00060bba) field_vitu2_entry_pane_g2_ParamLimits

0x1fb7,	// (0x00060bc6) field_vitu2_entry_pane_g3_ParamLimits

0x1fb7,	// (0x00060bc6) field_vitu2_entry_pane_g3

0xf974,	// (0x0006e583) field_vitu2_entry_pane_g_ParamLimits

0xc490,	// (0x0006b09f) cell_vitu2_itu_pane_g1_ParamLimits

0xc4a0,	// (0x0006b0af) cell_vitu2_itu_pane_g2_ParamLimits

0xc4a0,	// (0x0006b0af) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0006e58f) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0006e58f) cell_vitu2_itu_pane_g

0xf115,	// (0x0006dd24) bg_vkb2_func_pane_cp05_ParamLimits

0xf115,	// (0x0006dd24) bg_vkb2_func_pane_cp05

0xf115,	// (0x0006dd24) bg_vkb2_func_pane_cp03

0xf115,	// (0x0006dd24) bg_vkb2_func_pane_cp04

0xf115,	// (0x0006dd24) bg_vkb2_func_pane_cp10_ParamLimits

0xf115,	// (0x0006dd24) bg_vkb2_func_pane_cp10

0x53cd,	// (0x00063fdc) bg_vkb2_func_pane_cp08

0xcf20,	// (0x0006bb2f) bg_vkb2_func_pane_cp06

0xcf2e,	// (0x0006bb3d) bg_vkb2_func_pane_cp07

0x25fc,	// (0x0006120b) bg_vkb2_func_pane_cp11_ParamLimits

0x25fc,	// (0x0006120b) bg_vkb2_func_pane_cp11

0x2611,	// (0x00061220) bg_vkb2_func_pane_cp12_ParamLimits

0x2611,	// (0x00061220) bg_vkb2_func_pane_cp12

0x0541,	// (0x0005f150) bg_vkb2_func_pane_cp09

0x1ff4,	// (0x00060c03) bg_vkb2_func_pane_g1

0x7623,	// (0x00066232) bg_vkb2_func_pane_g2

0x1ffc,	// (0x00060c0b) bg_vkb2_func_pane_g3

0x2004,	// (0x00060c13) bg_vkb2_func_pane_g4

0x2239,	// (0x00060e48) bg_vkb2_func_pane_g5

0x201c,	// (0x00060c2b) bg_vkb2_func_pane_g6

0x2024,	// (0x00060c33) bg_vkb2_func_pane_g7

0x2014,	// (0x00060c23) bg_vkb2_func_pane_g8

0x7603,	// (0x00066212) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0006e78e) bg_vkb2_func_pane_g

0xd240,	// (0x0006be4f) blid2_tripm_pane_g6_ParamLimits

0xd240,	// (0x0006be4f) blid2_tripm_pane_g6

0x1e35,	// (0x00060a44) mp4_progress_pane_g1

0xd29a,	// (0x0006bea9) blid2_tripm_values_pane_ParamLimits

0xd29a,	// (0x0006bea9) blid2_tripm_values_pane

0xd357,	// (0x0006bf66) blid2_tripm_values_pane_t1

0xd365,	// (0x0006bf74) blid2_tripm_values_pane_t2

0xd373,	// (0x0006bf82) blid2_tripm_values_pane_t3

0xd381,	// (0x0006bf90) blid2_tripm_values_pane_t4

0xd38f,	// (0x0006bf9e) blid2_tripm_values_pane_t5

0xd39d,	// (0x0006bfac) blid2_tripm_values_pane_t6

0xd3ab,	// (0x0006bfba) blid2_tripm_values_pane_t7

0xd3b9,	// (0x0006bfc8) blid2_tripm_values_pane_t8

0xd3c7,	// (0x0006bfd6) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0006e7a1) blid2_tripm_values_pane_t

0x7076,	// (0x00065c85) call_video_pane_t1_ParamLimits

0x7090,	// (0x00065c9f) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0006dee4) call_video_pane_t_ParamLimits

0x5052,	// (0x00063c61) msg_header_pane_g1_ParamLimits

0x90da,	// (0x00067ce9) msg_header_pane_g2_ParamLimits

0x90da,	// (0x00067ce9) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0006e0fe) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0006e0fe) msg_header_pane_g

0x646d,	// (0x0006507c) main_clock2_pane_ParamLimits

0xb548,	// (0x0006a157) grid_clock2_toolbar_pane_ParamLimits

0xb548,	// (0x0006a157) grid_clock2_toolbar_pane

0xb548,	// (0x0006a157) listscroll_clock2_pane_ParamLimits

0xb548,	// (0x0006a157) listscroll_clock2_pane

0xb5f5,	// (0x0006a204) main_clock2_pane_t3_ParamLimits

0xb5f5,	// (0x0006a204) main_clock2_pane_t3

0xb607,	// (0x0006a216) main_clock2_pane_t4_ParamLimits

0xb607,	// (0x0006a216) main_clock2_pane_t4

0x2705,	// (0x00061314) cell_clock2_toolbar_pane

0x270d,	// (0x0006131c) cell_clock2_toolbar_pane_cp01

0x270d,	// (0x0006131c) cell_clock2_toolbar_pane_cp02

0x2715,	// (0x00061324) cell_clock2_toolbar_pane_cp03

0x271d,	// (0x0006132c) list_clock2_pane

0x86c0,	// (0x000672cf) scroll_pane_cp10

0x2725,	// (0x00061334) list_single_clock2_pane_ParamLimits

0x2725,	// (0x00061334) list_single_clock2_pane

0x8ab7,	// (0x000676c6) list_highlight_pane_cp08

0x2732,	// (0x00061341) list_single_clock2_pane_t1

0x2740,	// (0x0006134f) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0006e7b4) list_single_clock2_pane_t

0x0541,	// (0x0005f150) bg_button_pane_cp10

0x274e,	// (0x0006135d) cell_clock2_toolbar_pane_g1

0x9106,	// (0x00067d15) aid_main_viewer_pane_g1_ParamLimits

0x9106,	// (0x00067d15) aid_main_viewer_pane_g1

0x9112,	// (0x00067d21) aid_main_viewer_pane_g2_ParamLimits

0x9112,	// (0x00067d21) aid_main_viewer_pane_g2

0x911e,	// (0x00067d2d) aid_main_viewer_pane_g3_ParamLimits

0x911e,	// (0x00067d2d) aid_main_viewer_pane_g3

0x912f,	// (0x00067d3e) aid_main_viewer_pane_g4_ParamLimits

0x912f,	// (0x00067d3e) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0006e10f) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0006e10f) aid_main_viewer_pane_g

0xa2a9,	// (0x00068eb8) main_calc_pane_ParamLimits

0xa2b6,	// (0x00068ec5) main_dialer2_pane_ParamLimits

0x0541,	// (0x0005f150) main_cam6_pane

0x0541,	// (0x0005f150) main_vid6_pane

0xb554,	// (0x0006a163) listscroll_gen_pane_cp06_ParamLimits

0xb554,	// (0x0006a163) listscroll_gen_pane_cp06

0xb619,	// (0x0006a228) main_clock2_pane_t5_ParamLimits

0xb619,	// (0x0006a228) main_clock2_pane_t5

0xb662,	// (0x0006a271) aid_call2_pane_cp10_ParamLimits

0xb674,	// (0x0006a283) aid_call_pane_cp10_ParamLimits

0x887d,	// (0x0006748c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x887d,	// (0x0006748c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb686,	// (0x0006a295) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb686,	// (0x0006a295) popup_clock_analogue_window_cp10_g4_ParamLimits

0x887d,	// (0x0006748c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0006e445) popup_clock_analogue_window_cp10_g_ParamLimits

0xb698,	// (0x0006a2a7) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbe34,	// (0x0006aa43) cell_dialer2_keypad_pane_g2_ParamLimits

0xbe34,	// (0x0006aa43) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0006e52b) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0006e52b) cell_dialer2_keypad_pane_g

0xbe50,	// (0x0006aa5f) cell_dialer2_keypad_pane_t1

0xc7cb,	// (0x0006b3da) main_cset_text2_pane_ParamLimits

0xc7cb,	// (0x0006b3da) main_cset_text2_pane

0x246e,	// (0x0006107d) area_vitu2_query_pane_g1_ParamLimits

0x52f8,	// (0x00063f07) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0006e6d1) area_vitu2_query_pane_g_ParamLimits

0x53a9,	// (0x00063fb8) area_vitu2_query_pane_t7_ParamLimits

0x53a9,	// (0x00063fb8) area_vitu2_query_pane_t7

0xcf20,	// (0x0006bb2f) bg_button_pane_cp018_ParamLimits

0xcf2e,	// (0x0006bb3d) bg_button_pane_cp021_ParamLimits

0x53cd,	// (0x00063fdc) bg_button_pane_cp022_ParamLimits

0x53cd,	// (0x00063fdc) bg_vkb2_func_pane_cp08_ParamLimits

0xcf20,	// (0x0006bb2f) bg_vkb2_func_pane_cp06_ParamLimits

0xcf2e,	// (0x0006bb3d) bg_vkb2_func_pane_cp07_ParamLimits

0x53de,	// (0x00063fed) input_focus_pane_cp09_ParamLimits

0xd3d5,	// (0x0006bfe4) cam6_autofocus_pane_ParamLimits

0xd3d5,	// (0x0006bfe4) cam6_autofocus_pane

0xd3f7,	// (0x0006c006) cam6_image_uncrop_pane_ParamLimits

0xd3f7,	// (0x0006c006) cam6_image_uncrop_pane

0xd424,	// (0x0006c033) cam6_indi_pane_ParamLimits

0xd424,	// (0x0006c033) cam6_indi_pane

0xd43e,	// (0x0006c04d) cam6_mode_pane_ParamLimits

0xd43e,	// (0x0006c04d) cam6_mode_pane

0xd452,	// (0x0006c061) cam6_timer_pane_ParamLimits

0xd452,	// (0x0006c061) cam6_timer_pane

0xd45e,	// (0x0006c06d) cam6_zoom_pane_ParamLimits

0xd45e,	// (0x0006c06d) cam6_zoom_pane

0xc1f0,	// (0x0006adff) cam6_mode_pane_g1_ParamLimits

0xc1f0,	// (0x0006adff) cam6_mode_pane_g1

0xc208,	// (0x0006ae17) cam6_mode_pane_g2_ParamLimits

0xc208,	// (0x0006ae17) cam6_mode_pane_g2

0xc214,	// (0x0006ae23) cam6_mode_pane_g3_ParamLimits

0xc214,	// (0x0006ae23) cam6_mode_pane_g3

0xc220,	// (0x0006ae2f) cam6_mode_pane_g4_ParamLimits

0xc220,	// (0x0006ae2f) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0006e7b9) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0006e7b9) cam6_mode_pane_g

0x2756,	// (0x00061365) bg_tb_trans_pane_cp08_ParamLimits

0x2756,	// (0x00061365) bg_tb_trans_pane_cp08

0x2764,	// (0x00061373) cam6_battery_pane_ParamLimits

0x2764,	// (0x00061373) cam6_battery_pane

0x277a,	// (0x00061389) cam6_indi_pane_g1_ParamLimits

0x277a,	// (0x00061389) cam6_indi_pane_g1

0x278c,	// (0x0006139b) cam6_indi_pane_g2_ParamLimits

0x278c,	// (0x0006139b) cam6_indi_pane_g2

0x279e,	// (0x000613ad) cam6_indi_pane_g3_ParamLimits

0x279e,	// (0x000613ad) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0006e7c2) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0006e7c2) cam6_indi_pane_g

0x27b0,	// (0x000613bf) cam6_indi_pane_t1_ParamLimits

0x27b0,	// (0x000613bf) cam6_indi_pane_t1

0xc2cc,	// (0x0006aedb) cam6_autofocus_pane_g1

0xc2d4,	// (0x0006aee3) cam6_autofocus_pane_g2

0xc2dc,	// (0x0006aeeb) cam6_autofocus_pane_g3

0xc2e4,	// (0x0006aef3) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0006e7c9) cam6_autofocus_pane_g

0x27d6,	// (0x000613e5) cam6_timer_pane_g1

0x27de,	// (0x000613ed) cam6_timer_pane_t1

0x27ec,	// (0x000613fb) cam6_zoom_cont_pane

0x27f4,	// (0x00061403) cam6_zoom_pane_g1

0x27fc,	// (0x0006140b) cam6_zoom_pane_g2

0xd476,	// (0x0006c085) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0006e7d2) cam6_zoom_pane_g

0x1549,	// (0x00060158) cam6_battery_pane_g1

0x1549,	// (0x00060158) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0006e352) cam6_battery_pane_g

0x2804,	// (0x00061413) cam6_zoom_cont_pane_g1

0x280d,	// (0x0006141c) cam6_zoom_cont_pane_g2

0x2816,	// (0x00061425) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0006e7d9) cam6_zoom_cont_pane_g

0xd493,	// (0x0006c0a2) cam6_mode_pane_cp_ParamLimits

0xd493,	// (0x0006c0a2) cam6_mode_pane_cp

0xd45e,	// (0x0006c06d) cam6_zoom_pane_cp_ParamLimits

0xd45e,	// (0x0006c06d) cam6_zoom_pane_cp

0xd4a7,	// (0x0006c0b6) vid6_image_uncrop_cif_pane_ParamLimits

0xd4a7,	// (0x0006c0b6) vid6_image_uncrop_cif_pane

0xd4d3,	// (0x0006c0e2) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4d3,	// (0x0006c0e2) vid6_image_uncrop_nhd_pane

0xd3f7,	// (0x0006c006) vid6_image_uncrop_vga_pane_ParamLimits

0xd3f7,	// (0x0006c006) vid6_image_uncrop_vga_pane

0xd4f0,	// (0x0006c0ff) vid6_image_uncrop_wvga_pane_ParamLimits

0xd4f0,	// (0x0006c0ff) vid6_image_uncrop_wvga_pane

0xd50d,	// (0x0006c11c) vid6_indi_pane_ParamLimits

0xd50d,	// (0x0006c11c) vid6_indi_pane

0x2756,	// (0x00061365) bg_tb_trans_pane_cp09_ParamLimits

0x2756,	// (0x00061365) bg_tb_trans_pane_cp09

0x282e,	// (0x0006143d) cam6_battery_pane_cp_ParamLimits

0x282e,	// (0x0006143d) cam6_battery_pane_cp

0x283a,	// (0x00061449) vid6_indi_pane_g1_ParamLimits

0x283a,	// (0x00061449) vid6_indi_pane_g1

0x284c,	// (0x0006145b) vid6_indi_pane_g2_ParamLimits

0x284c,	// (0x0006145b) vid6_indi_pane_g2

0x285e,	// (0x0006146d) vid6_indi_pane_g3_ParamLimits

0x285e,	// (0x0006146d) vid6_indi_pane_g3

0x2873,	// (0x00061482) vid6_indi_pane_g4_ParamLimits

0x2873,	// (0x00061482) vid6_indi_pane_g4

0x2888,	// (0x00061497) vid6_indi_pane_g5_ParamLimits

0x2888,	// (0x00061497) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0006e7e0) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0006e7e0) vid6_indi_pane_g

0x28a2,	// (0x000614b1) vid6_indi_pane_t1_ParamLimits

0x28a2,	// (0x000614b1) vid6_indi_pane_t1

0x28b8,	// (0x000614c7) vid6_indi_pane_t2_ParamLimits

0x28b8,	// (0x000614c7) vid6_indi_pane_t2

0x28e0,	// (0x000614ef) vid6_indi_pane_t3_ParamLimits

0x28e0,	// (0x000614ef) vid6_indi_pane_t3

0x2908,	// (0x00061517) vid6_indi_pane_t4_ParamLimits

0x2908,	// (0x00061517) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0006e7eb) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0006e7eb) vid6_indi_pane_t

0x292c,	// (0x0006153b) wait_bar_pane_cp08

0xd532,	// (0x0006c141) main_cset_text2_pane_t1_ParamLimits

0xd532,	// (0x0006c141) main_cset_text2_pane_t1

0xd47e,	// (0x0006c08d) listscroll_gen_pane_cp06_t1_ParamLimits

0xd47e,	// (0x0006c08d) listscroll_gen_pane_cp06_t1

0x0541,	// (0x0005f150) main_cam6_set_pane

0x17b5,	// (0x000603c4) bg_tb_trans_pane_cp06_ParamLimits

0xc199,	// (0x0006ada8) cam4_indicators_pane_g1_ParamLimits

0xc1a6,	// (0x0006adb5) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0006e55f) cam4_indicators_pane_g_ParamLimits

0xc1c6,	// (0x0006add5) cam4_indicators_pane_t1_ParamLimits

0xf115,	// (0x0006dd24) bg_tb_trans_pane_cp07_ParamLimits

0xc199,	// (0x0006ada8) vid4_indicators_pane_g1_ParamLimits

0xc278,	// (0x0006ae87) vid4_indicators_pane_g2_ParamLimits

0xc285,	// (0x0006ae94) vid4_indicators_pane_g3_ParamLimits

0xc296,	// (0x0006aea5) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0006e571) vid4_indicators_pane_g_ParamLimits

0xc2b2,	// (0x0006aec1) vid4_indicators_pane_t1_ParamLimits

0xd064,	// (0x0006bc73) vid4_progress_pane_g1_ParamLimits

0xd070,	// (0x0006bc7f) vid4_progress_pane_g2_ParamLimits

0xd07c,	// (0x0006bc8b) vid4_progress_pane_g3_ParamLimits

0xd08b,	// (0x0006bc9a) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0006e71c) vid4_progress_pane_g_ParamLimits

0xd0a9,	// (0x0006bcb8) vid4_progress_pane_t1_ParamLimits

0xd0bf,	// (0x0006bcce) vid4_progress_pane_t2_ParamLimits

0xd0d5,	// (0x0006bce4) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0006e727) vid4_progress_pane_t_ParamLimits

0xd0ea,	// (0x0006bcf9) wait_bar_pane_cp07_ParamLimits

0xd565,	// (0x0006c174) main_cam6_set_pane_g2_ParamLimits

0xd565,	// (0x0006c174) main_cam6_set_pane_g2

0xd571,	// (0x0006c180) main_cset6_listscroll_pane_ParamLimits

0xd571,	// (0x0006c180) main_cset6_listscroll_pane

0xd59c,	// (0x0006c1ab) main_cset6_slider_pane_ParamLimits

0xd59c,	// (0x0006c1ab) main_cset6_slider_pane

0xd5a8,	// (0x0006c1b7) main_cset6_text2_pane_ParamLimits

0xd5a8,	// (0x0006c1b7) main_cset6_text2_pane

0x293b,	// (0x0006154a) main_cset6_text_pane

0x2943,	// (0x00061552) main_cset_list_pane_copy1_ParamLimits

0x2943,	// (0x00061552) main_cset_list_pane_copy1

0x2953,	// (0x00061562) scroll_pane_cp028_copy1

0xd5bb,	// (0x0006c1ca) cset_list_set_pane_copy1

0xd5ce,	// (0x0006c1dd) aid_position_infowindow_above_copy1

0xd5d6,	// (0x0006c1e5) aid_position_infowindow_below_copy1

0xd5de,	// (0x0006c1ed) cset_list_set_pane_g1_copy1

0x51f8,	// (0x00063e07) cset_list_set_pane_g3_copy1_ParamLimits

0x51f8,	// (0x00063e07) cset_list_set_pane_g3_copy1

0x5207,	// (0x00063e16) cset_list_set_pane_t1_copy1_ParamLimits

0x5207,	// (0x00063e16) cset_list_set_pane_t1_copy1

0xf115,	// (0x0006dd24) list_highlight_pane_cp021_copy1_ParamLimits

0xf115,	// (0x0006dd24) list_highlight_pane_cp021_copy1

0x295c,	// (0x0006156b) cset6_slider_pane_ParamLimits

0x295c,	// (0x0006156b) cset6_slider_pane

0x2988,	// (0x00061597) main_cset6_slider_pane_g1_ParamLimits

0x2988,	// (0x00061597) main_cset6_slider_pane_g1

0xd5e6,	// (0x0006c1f5) main_cset6_slider_pane_g2_ParamLimits

0xd5e6,	// (0x0006c1f5) main_cset6_slider_pane_g2

0x29b0,	// (0x000615bf) main_cset6_slider_pane_g3_ParamLimits

0x29b0,	// (0x000615bf) main_cset6_slider_pane_g3

0xd60e,	// (0x0006c21d) main_cset6_slider_pane_g4_ParamLimits

0xd60e,	// (0x0006c21d) main_cset6_slider_pane_g4

0xd61a,	// (0x0006c229) main_cset6_slider_pane_g5_ParamLimits

0xd61a,	// (0x0006c229) main_cset6_slider_pane_g5

0x2123,	// (0x00060d32) main_cset6_slider_pane_g7_ParamLimits

0x2123,	// (0x00060d32) main_cset6_slider_pane_g7

0x212f,	// (0x00060d3e) main_cset6_slider_pane_g8_ParamLimits

0x212f,	// (0x00060d3e) main_cset6_slider_pane_g8

0xd628,	// (0x0006c237) main_cset6_slider_pane_g9_ParamLimits

0xd628,	// (0x0006c237) main_cset6_slider_pane_g9

0xd634,	// (0x0006c243) main_cset6_slider_pane_g10_ParamLimits

0xd634,	// (0x0006c243) main_cset6_slider_pane_g10

0xd640,	// (0x0006c24f) main_cset6_slider_pane_g11_ParamLimits

0xd640,	// (0x0006c24f) main_cset6_slider_pane_g11

0xd64c,	// (0x0006c25b) main_cset6_slider_pane_g12_ParamLimits

0xd64c,	// (0x0006c25b) main_cset6_slider_pane_g12

0xd658,	// (0x0006c267) main_cset6_slider_pane_g13_ParamLimits

0xd658,	// (0x0006c267) main_cset6_slider_pane_g13

0xd664,	// (0x0006c273) main_cset6_slider_pane_g14_ParamLimits

0xd664,	// (0x0006c273) main_cset6_slider_pane_g14

0xd670,	// (0x0006c27f) main_cset6_slider_pane_g15_ParamLimits

0xd670,	// (0x0006c27f) main_cset6_slider_pane_g15

0xd688,	// (0x0006c297) main_cset6_slider_pane_g16_ParamLimits

0xd688,	// (0x0006c297) main_cset6_slider_pane_g16

0xd696,	// (0x0006c2a5) main_cset6_slider_pane_g17_ParamLimits

0xd696,	// (0x0006c2a5) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0006e7f4) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0006e7f4) main_cset6_slider_pane_g

0x29bc,	// (0x000615cb) main_cset6_slider_pane_t1_ParamLimits

0x29bc,	// (0x000615cb) main_cset6_slider_pane_t1

0xd6bc,	// (0x0006c2cb) main_cset6_slider_pane_t2_ParamLimits

0xd6bc,	// (0x0006c2cb) main_cset6_slider_pane_t2

0xd6e7,	// (0x0006c2f6) main_cset6_slider_pane_t3_ParamLimits

0xd6e7,	// (0x0006c2f6) main_cset6_slider_pane_t3

0xd712,	// (0x0006c321) main_cset6_slider_pane_t4_ParamLimits

0xd712,	// (0x0006c321) main_cset6_slider_pane_t4

0xd73d,	// (0x0006c34c) main_cset6_slider_pane_t5_ParamLimits

0xd73d,	// (0x0006c34c) main_cset6_slider_pane_t5

0x29fd,	// (0x0006160c) main_cset6_slider_pane_t7_ParamLimits

0x29fd,	// (0x0006160c) main_cset6_slider_pane_t7

0xd76a,	// (0x0006c379) main_cset6_slider_pane_t8_ParamLimits

0xd76a,	// (0x0006c379) main_cset6_slider_pane_t8

0xd78e,	// (0x0006c39d) main_cset6_slider_pane_t9_ParamLimits

0xd78e,	// (0x0006c39d) main_cset6_slider_pane_t9

0xd7b2,	// (0x0006c3c1) main_cset6_slider_pane_t10_ParamLimits

0xd7b2,	// (0x0006c3c1) main_cset6_slider_pane_t10

0xd7d6,	// (0x0006c3e5) main_cset6_slider_pane_t11_ParamLimits

0xd7d6,	// (0x0006c3e5) main_cset6_slider_pane_t11

0x2a33,	// (0x00061642) main_cset6_slider_pane_t14_ParamLimits

0x2a33,	// (0x00061642) main_cset6_slider_pane_t14

0x2a6c,	// (0x0006167b) main_cset6_slider_pane_t15_ParamLimits

0x2a6c,	// (0x0006167b) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0006e819) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0006e819) main_cset6_slider_pane_t

0x2aa5,	// (0x000616b4) cset_slider_pane_g1_copy1

0x2aae,	// (0x000616bd) cset_slider_pane_g2_copy1

0x2ab7,	// (0x000616c6) cset_slider_pane_g3_copy1

0x0541,	// (0x0005f150) bg_popup_sub_pane_cp011_copy1

0x229a,	// (0x00060ea9) main_cset_text_pane_g1_copy1

0x22a2,	// (0x00060eb1) main_cset_text_pane_t1_copy1

0x22b0,	// (0x00060ebf) main_cset_text_pane_t2_copy1

0x22be,	// (0x00060ecd) main_cset_text_pane_t3_copy1

0x22cc,	// (0x00060edb) main_cset_text_pane_t4_copy1

0x22da,	// (0x00060ee9) main_cset_text_pane_t5_copy1

0x22e8,	// (0x00060ef7) main_cset_text_pane_t6_copy1

0x22f6,	// (0x00060f05) main_cset_text_pane_t7_copy1

0xd7fa,	// (0x0006c409) main_cset_text2_pane_t1_copy1

0x0541,	// (0x0005f150) main_ncimui_pane

0xa2f5,	// (0x00068f04) popup_query_ncimui_window_ParamLimits

0xa2f5,	// (0x00068f04) popup_query_ncimui_window

0xae4c,	// (0x00069a5b) field_cale_ev2_pane_g4_ParamLimits

0xae4c,	// (0x00069a5b) field_cale_ev2_pane_g4

0xbb7e,	// (0x0006a78d) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbb7e,	// (0x0006a78d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0006e506) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0006e506) cell_video_dialer_keypad_pane_g

0xbb96,	// (0x0006a7a5) cell_video_dialer_keypad_pane_t1

0x0541,	// (0x0005f150) bg_popup_window_pane_cp012

0x8518,	// (0x00067127) heading_pane_cp06

0x2baf,	// (0x000617be) ncim_query_content_pane

0x0541,	// (0x0005f150) bg_popup_heading_pane_cp01

0x2bb7,	// (0x000617c6) ncim_heading_pane_t1

0x2bc5,	// (0x000617d4) ncim_indicator_popup_pane

0x2bd7,	// (0x000617e6) ncim_query_button_pane

0x2beb,	// (0x000617fa) ncim_query_content_pane_t1

0x2bfd,	// (0x0006180c) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0006e858) ncim_query_content_pane_t

0x2c37,	// (0x00061846) ncim_query_list_pane

0x2c49,	// (0x00061858) ncim_query_popup_pane

0x2bc5,	// (0x000617d4) ncim_indicator_popup_pane_ParamLimits

0xd8ea,	// (0x0006c4f9) ncim_query_content_pane_g1_ParamLimits

0xd8ea,	// (0x0006c4f9) ncim_query_content_pane_g1

0x2beb,	// (0x000617fa) ncim_query_content_pane_t1_ParamLimits

0x2bfd,	// (0x0006180c) ncim_query_content_pane_t2_ParamLimits

0xd8f6,	// (0x0006c505) ncim_query_content_pane_t3_ParamLimits

0xd8f6,	// (0x0006c505) ncim_query_content_pane_t3

0xd913,	// (0x0006c522) ncim_query_content_pane_t4_ParamLimits

0xd913,	// (0x0006c522) ncim_query_content_pane_t4

0xd930,	// (0x0006c53f) ncim_query_content_pane_t5_ParamLimits

0xd930,	// (0x0006c53f) ncim_query_content_pane_t5

0x2c0f,	// (0x0006181e) ncim_query_content_pane_t6_ParamLimits

0x2c0f,	// (0x0006181e) ncim_query_content_pane_t6

0xfc49,	// (0x0006e858) ncim_query_content_pane_t_ParamLimits

0x2c37,	// (0x00061846) ncim_query_list_pane_ParamLimits

0x2c49,	// (0x00061858) ncim_query_popup_pane_ParamLimits

0x2c5d,	// (0x0006186c) wait_bar_pane_cp04

0x0541,	// (0x0005f150) input_focus_pane_cp011

0x2c65,	// (0x00061874) ncim_query_popup_pane_t1

0x2c73,	// (0x00061882) ncim_list_query_list_pane_ParamLimits

0x2c73,	// (0x00061882) ncim_list_query_list_pane

0x0541,	// (0x0005f150) bg_button_pane_cp027

0x2c80,	// (0x0006188f) ncim_query_button_pane_g1

0x0541,	// (0x0005f150) list_highlight_pane_cp012

0x2c8a,	// (0x00061899) ncim_list_query_list_pane_g1

0x2c92,	// (0x000618a1) ncim_list_query_list_pane_t1

0xc1b6,	// (0x0006adc5) cam4_indicators_pane_g3_ParamLimits

0xc1b6,	// (0x0006adc5) cam4_indicators_pane_g3

0xc2a2,	// (0x0006aeb1) vid4_indicators_pane_g5_ParamLimits

0xc2a2,	// (0x0006aeb1) vid4_indicators_pane_g5

0xd09a,	// (0x0006bca9) vid4_progress_pane_g5_ParamLimits

0xd09a,	// (0x0006bca9) vid4_progress_pane_g5

0xd832,	// (0x0006c441) main_ncimui_pane_g1

0xd878,	// (0x0006c487) ncimui_group_query_pane_ParamLimits

0xd878,	// (0x0006c487) ncimui_group_query_pane

0xd8ac,	// (0x0006c4bb) ncimui_list_pane_ParamLimits

0xd8ac,	// (0x0006c4bb) ncimui_list_pane

0xd8c6,	// (0x0006c4d5) ncimui_text_pane_ParamLimits

0xd8c6,	// (0x0006c4d5) ncimui_text_pane

0xd94d,	// (0x0006c55c) ncimui_text_pane_t1_ParamLimits

0xd94d,	// (0x0006c55c) ncimui_text_pane_t1

0x2ca0,	// (0x000618af) ncimui_list_single_graphic_pane_ParamLimits

0x2ca0,	// (0x000618af) ncimui_list_single_graphic_pane

0xd96c,	// (0x0006c57b) ncimui_query_pane_ParamLimits

0xd96c,	// (0x0006c57b) ncimui_query_pane

0x0541,	// (0x0005f150) list_highlight_pane_cp013

0x2cb0,	// (0x000618bf) ncim_list_query_list_pane_t1_copy1

0x2c8a,	// (0x00061899) ncim_list_single_graphic_pane_g1

0x2cbe,	// (0x000618cd) ncim_query_button_pane_cp01

0x2cc6,	// (0x000618d5) ncim_query_entry_pane_ParamLimits

0x2cc6,	// (0x000618d5) ncim_query_entry_pane

0x2cd6,	// (0x000618e5) ncimui_query_pane_g1

0x2cde,	// (0x000618ed) ncimui_query_pane_t1_ParamLimits

0x2cde,	// (0x000618ed) ncimui_query_pane_t1

0x0541,	// (0x0005f150) input_focus_pane_cp012

0x2c65,	// (0x00061874) ncim_query_entry_pane_t1

0x646d,	// (0x0006507c) main_im_pane_ParamLimits

0xf115,	// (0x0006dd24) main_mobtv_pane_ParamLimits

0xf115,	// (0x0006dd24) main_mobtv_pane

0xd6a4,	// (0x0006c2b3) main_cset6_slider_pane_g18_ParamLimits

0xd6a4,	// (0x0006c2b3) main_cset6_slider_pane_g18

0xd6b0,	// (0x0006c2bf) main_cset6_slider_pane_g19_ParamLimits

0xd6b0,	// (0x0006c2bf) main_cset6_slider_pane_g19

0x1fb7,	// (0x00060bc6) bg_main_mobtv_pane_ParamLimits

0x1fb7,	// (0x00060bc6) bg_main_mobtv_pane

0xd97c,	// (0x0006c58b) main_mobtv_info_pane

0xd987,	// (0x0006c596) main_mobtv_loading_pane_ParamLimits

0xd987,	// (0x0006c596) main_mobtv_loading_pane

0x2d02,	// (0x00061911) main_mobtv_pg_channel_list_pane

0x2d0c,	// (0x0006191b) main_mobtv_pg_hdr_pane

0xd994,	// (0x0006c5a3) main_mobtv_programe_curr_pane_ParamLimits

0xd994,	// (0x0006c5a3) main_mobtv_programe_curr_pane

0xd9a1,	// (0x0006c5b0) main_mobtv_programe_next_pane_ParamLimits

0xd9a1,	// (0x0006c5b0) main_mobtv_programe_next_pane

0x2d15,	// (0x00061924) popup_mobtv_noti_window

0x1549,	// (0x00060158) main_tv_pg_hdr_pane_g1

0x2d1d,	// (0x0006192c) main_tv_pg_hdr_pane_g2

0x2d25,	// (0x00061934) main_tv_pg_hdr_pane_g3

0x2d2d,	// (0x0006193c) main_tv_pg_hdr_pane_g4

0x2d35,	// (0x00061944) main_tv_pg_hdr_pane_g5

0x2d3f,	// (0x0006194e) main_tv_pg_hdr_pane_g6

0x2d49,	// (0x00061958) main_tv_pg_hdr_pane_g7

0x2d53,	// (0x00061962) main_tv_pg_hdr_pane_g8

0x2d5d,	// (0x0006196c) main_tv_pg_hdr_pane_g9

0x2d67,	// (0x00061976) main_tv_pg_hdr_pane_g10

0x2d71,	// (0x00061980) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0006e865) main_tv_pg_hdr_pane_g

0x2d7b,	// (0x0006198a) main_tv_pg_hdr_pane_t1

0x2d89,	// (0x00061998) main_tv_pg_hdr_pane_t2

0x2d97,	// (0x000619a6) main_tv_pg_hdr_pane_t3

0x2da7,	// (0x000619b6) main_tv_pg_hdr_pane_t4

0x2db7,	// (0x000619c6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0006e87c) main_tv_pg_hdr_pane_t

0x2dc7,	// (0x000619d6) single_mobtv_pg_channel_pane_ParamLimits

0x2dc7,	// (0x000619d6) single_mobtv_pg_channel_pane

0x2dd9,	// (0x000619e8) single_mobtv_pg_channel_table_pane

0x2de2,	// (0x000619f1) single_mobtv_pg_channel_thumb_pane

0x2deb,	// (0x000619fa) single_tv_pg_channel_pane_g1

0x2df4,	// (0x00061a03) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0006e887) single_tv_pg_channel_pane_g

0x17b5,	// (0x000603c4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x17b5,	// (0x000603c4) bg_single_mobtv_pg_channel_thumb_pane

0x2dfd,	// (0x00061a0c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2dfd,	// (0x00061a0c) single_mobtv_pg_channel_thumb_pane_g1

0x2e0b,	// (0x00061a1a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2e0b,	// (0x00061a1a) single_mobtv_pg_channel_thumb_pane_g2

0x2e17,	// (0x00061a26) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2e17,	// (0x00061a26) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0006e88c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0006e88c) single_mobtv_pg_channel_thumb_pane_g

0x2e23,	// (0x00061a32) single_mobtv_pg_channel_thumb_pane_t1

0x2e31,	// (0x00061a40) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0006e893) single_mobtv_pg_channel_thumb_pane_t

0x1549,	// (0x00060158) bg_single_mobtv_pg_channel_table_pane_g1

0x1549,	// (0x00060158) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0006e352) bg_single_mobtv_pg_channel_table_pane_g

0x2e3f,	// (0x00061a4e) single_mobtv_pg_channel_table_pane_t1

0x2e4d,	// (0x00061a5c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0006e898) single_mobtv_pg_channel_table_pane_t

0xd9b6,	// (0x0006c5c5) main_mobtv_info_pane_g1_ParamLimits

0xd9b6,	// (0x0006c5c5) main_mobtv_info_pane_g1

0xd9d2,	// (0x0006c5e1) main_mobtv_info_pane_t1_ParamLimits

0xd9d2,	// (0x0006c5e1) main_mobtv_info_pane_t1

0xda4a,	// (0x0006c659) main_mobtv_info_pane_t2_ParamLimits

0xda4a,	// (0x0006c659) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0006e8a2) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0006e8a2) main_mobtv_info_pane_t

0xdad9,	// (0x0006c6e8) wait_bar_pane_cp05

0xdaeb,	// (0x0006c6fa) main_mobtv_loading_pane_g1_ParamLimits

0xdaeb,	// (0x0006c6fa) main_mobtv_loading_pane_g1

0xdaf9,	// (0x0006c708) main_mobtv_loading_pane_g2_ParamLimits

0xdaf9,	// (0x0006c708) main_mobtv_loading_pane_g2

0xdb05,	// (0x0006c714) main_mobtv_loading_pane_g3_ParamLimits

0xdb05,	// (0x0006c714) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0006e8a9) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0006e8a9) main_mobtv_loading_pane_g

0x2e5b,	// (0x00061a6a) main_mobtv_loading_pane_t1_ParamLimits

0x2e5b,	// (0x00061a6a) main_mobtv_loading_pane_t1

0x2e73,	// (0x00061a82) main_mobtv_loading_pane_t2_ParamLimits

0x2e73,	// (0x00061a82) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0006e8b0) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0006e8b0) main_mobtv_loading_pane_t

0xdb13,	// (0x0006c722) wait_bar_pane_cp06_ParamLimits

0xdb13,	// (0x0006c722) wait_bar_pane_cp06

0x2e97,	// (0x00061aa6) main_mobtv_programe_curr_pane_t1

0x2ea5,	// (0x00061ab4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0006e8b5) main_mobtv_programe_curr_pane_t

0x2eb3,	// (0x00061ac2) main_mobtv_programe_next_pane_t1

0x2ec1,	// (0x00061ad0) main_mobtv_programe_next_pane_t2

0x2ecf,	// (0x00061ade) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0006e8ba) main_mobtv_programe_next_pane_t

0x0541,	// (0x0005f150) bg_popup_mobtv_noti_window_pane

0x2edd,	// (0x00061aec) popup_mobtv_noti_window_g1

0x2ee5,	// (0x00061af4) popup_mobtv_noti_window_t1

0x2ef3,	// (0x00061b02) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0006e8c1) popup_mobtv_noti_window_t

0x1549,	// (0x00060158) bg_popup_mobtv_noti_window_pane_g1

0x0541,	// (0x0005f150) sc_clock_pane

0x0541,	// (0x0005f150) main_fs_bigclock_pane

0xd288,	// (0x0006be97) blid2_tripm_pane_t4_ParamLimits

0xd288,	// (0x0006be97) blid2_tripm_pane_t4

0xdb1f,	// (0x0006c72e) sc_clock_pane_g1_ParamLimits

0xdb1f,	// (0x0006c72e) sc_clock_pane_g1

0xdb2d,	// (0x0006c73c) sc_clock_pane_t1_ParamLimits

0xdb2d,	// (0x0006c73c) sc_clock_pane_t1

0xdb40,	// (0x0006c74f) sc_clock_pane_t2_ParamLimits

0xdb40,	// (0x0006c74f) sc_clock_pane_t2

0xdb52,	// (0x0006c761) sc_clock_pane_t3_ParamLimits

0xdb52,	// (0x0006c761) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0006e8c6) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0006e8c6) sc_clock_pane_t

0xe31d,	// (0x0006cf2c) main_fs_bigclock_indicator_pane_ParamLimits

0xe31d,	// (0x0006cf2c) main_fs_bigclock_indicator_pane

0xdbd6,	// (0x0006c7e5) main_fs_bigclock_pane_g1_ParamLimits

0xdbd6,	// (0x0006c7e5) main_fs_bigclock_pane_g1

0xe329,	// (0x0006cf38) main_fs_bigclock_pane_t1_ParamLimits

0xe329,	// (0x0006cf38) main_fs_bigclock_pane_t1

0xe33b,	// (0x0006cf4a) main_fs_bigclock_pane_t2_ParamLimits

0xe33b,	// (0x0006cf4a) main_fs_bigclock_pane_t2

0xe34f,	// (0x0006cf5e) main_fs_bigclock_pane_t3_ParamLimits

0xe34f,	// (0x0006cf5e) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0006eac5) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0006eac5) main_fs_bigclock_pane_t

0x3add,	// (0x000626ec) main_fs_bigclock_indicator_pane_g1

0x2bdf,	// (0x000617ee) ncim_query_content_pane_g2_ParamLimits

0x2bdf,	// (0x000617ee) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0006e853) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0006e853) ncim_query_content_pane_g

0xdb66,	// (0x0006c775) sc_clock_pane_t4_ParamLimits

0xdb66,	// (0x0006c775) sc_clock_pane_t4

0xf115,	// (0x0006dd24) main_radioblah_pane

0x1f28,	// (0x00060b37) cell_call4_button_pane_t1_copy1_ParamLimits

0x1f28,	// (0x00060b37) cell_call4_button_pane_t1_copy1

0xd83a,	// (0x0006c449) main_ncimui_pane_t1_ParamLimits

0xd83a,	// (0x0006c449) main_ncimui_pane_t1

0xd84c,	// (0x0006c45b) main_ncimui_pane_t2_ParamLimits

0xd84c,	// (0x0006c45b) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0006e84c) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0006e84c) main_ncimui_pane_t

0x3021,	// (0x00061c30) main_radioblah_anim_pane_ParamLimits

0x3021,	// (0x00061c30) main_radioblah_anim_pane

0x3032,	// (0x00061c41) main_radioblah_info_pane_ParamLimits

0x3032,	// (0x00061c41) main_radioblah_info_pane

0x3046,	// (0x00061c55) main_radioblah_pane_t1_ParamLimits

0x3046,	// (0x00061c55) main_radioblah_pane_t1

0x3062,	// (0x00061c71) main_radioblah_pane_t2_ParamLimits

0x3062,	// (0x00061c71) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0006e8e7) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0006e8e7) main_radioblah_pane_t

0xdc28,	// (0x0006c837) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc28,	// (0x0006c837) main_radioblah_rocker_ctrl_pane

0x30aa,	// (0x00061cb9) main_radioblah_info_pane_t1_ParamLimits

0x30aa,	// (0x00061cb9) main_radioblah_info_pane_t1

0xdc6d,	// (0x0006c87c) main_radioblah_info_pane_t2_ParamLimits

0xdc6d,	// (0x0006c87c) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0006e8f0) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0006e8f0) main_radioblah_info_pane_t

0x1549,	// (0x00060158) main_radioblah_rocker_ctrl_pane_g1

0xdd1d,	// (0x0006c92c) main_radioblah_rocker_ctrl_pane_g2

0xdd25,	// (0x0006c934) main_radioblah_rocker_ctrl_pane_g3

0xdd2d,	// (0x0006c93c) main_radioblah_rocker_ctrl_pane_g4

0xdd35,	// (0x0006c944) main_radioblah_rocker_ctrl_pane_g5

0xdd3d,	// (0x0006c94c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0006e8f9) main_radioblah_rocker_ctrl_pane_g

0xd7fa,	// (0x0006c409) main_cset_text2_pane_t1_copy1_ParamLimits

0xc0ff,	// (0x0006ad0e) cam4_image_uncrop_qvga_pane

0xc22c,	// (0x0006ae3b) vid4_image_uncrop_qcif_pane

0xd416,	// (0x0006c025) cam6_image_uncrop_qvga_pane_ParamLimits

0xd416,	// (0x0006c025) cam6_image_uncrop_qvga_pane

0x281e,	// (0x0006142d) vid6_image_uncrop_qcif_pane_ParamLimits

0x281e,	// (0x0006142d) vid6_image_uncrop_qcif_pane

0x0541,	// (0x0005f150) bg_popup_preview_window_pane_cp03

0x2b91,	// (0x000617a0) list_cset_text2_pane

0x2b99,	// (0x000617a8) main_cset6_text2_pane_g1

0x2ba1,	// (0x000617b0) main_cset6_text2_pane_t1

0xdd45,	// (0x0006c954) list_cset_text2_pane_t1_ParamLimits

0xdd45,	// (0x0006c954) list_cset_text2_pane_t1

0xf115,	// (0x0006dd24) main_radioblah_pane_ParamLimits

0xdac5,	// (0x0006c6d4) main_mobtv_info_pane_t3_ParamLimits

0xdac5,	// (0x0006c6d4) main_mobtv_info_pane_t3

0xdc16,	// (0x0006c825) main_radioblah_pane_g1

0xdc41,	// (0x0006c850) main_radioblah_info_pane_g1

0xdcc2,	// (0x0006c8d1) main_radioblah_info_pane_t3_ParamLimits

0xdcc2,	// (0x0006c8d1) main_radioblah_info_pane_t3

0x7f19,	// (0x00066b28) highlight_cell_cale_month_pane_ParamLimits

0x7f19,	// (0x00066b28) highlight_cell_cale_month_pane

0x0541,	// (0x0005f150) main_phob_fisheye_pane

0x18df,	// (0x000604ee) scroll_pane_cp0031_ParamLimits

0x18df,	// (0x000604ee) scroll_pane_cp0031

0x292c,	// (0x0006153b) wait_bar_pane_cp08_ParamLimits

0xd5bb,	// (0x0006c1ca) cset_list_set_pane_copy1_ParamLimits

0x30e4,	// (0x00061cf3) highlight_cell_cale_month_pane_g1

0xdd62,	// (0x0006c971) highlight_cell_cale_month_pane_t1

0x255e,	// (0x0006116d) list_gen_pane_cp01

0x210e,	// (0x00060d1d) scroll_pane_01

0x5509,	// (0x00064118) list_single_double_fisheye_pane

0x5512,	// (0x00064121) list_double_fisheye_pane_g1_ParamLimits

0x5512,	// (0x00064121) list_double_fisheye_pane_g1

0x551e,	// (0x0006412d) list_double_fisheye_pane_g2_ParamLimits

0x551e,	// (0x0006412d) list_double_fisheye_pane_g2

0x5532,	// (0x00064141) list_double_fisheye_pane_g3_ParamLimits

0x5532,	// (0x00064141) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0006e906) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0006e906) list_double_fisheye_pane_g

0x555b,	// (0x0006416a) list_double_fisheye_pane_t1_ParamLimits

0x555b,	// (0x0006416a) list_double_fisheye_pane_t1

0x5576,	// (0x00064185) list_double_fisheye_pane_t2_ParamLimits

0x5576,	// (0x00064185) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0006e911) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0006e911) list_double_fisheye_pane_t

0x0541,	// (0x0005f150) main_call5_pane

0xdb8c,	// (0x0006c79b) sc_swipe_pane_ParamLimits

0xdb8c,	// (0x0006c79b) sc_swipe_pane

0xdd7c,	// (0x0006c98b) call5_image_pane_ParamLimits

0xdd7c,	// (0x0006c98b) call5_image_pane

0xdd8c,	// (0x0006c99b) call5_swipe_1_pane_ParamLimits

0xdd8c,	// (0x0006c99b) call5_swipe_1_pane

0xdd98,	// (0x0006c9a7) call5_swipe_2_pane_ParamLimits

0xdd98,	// (0x0006c9a7) call5_swipe_2_pane

0xddb2,	// (0x0006c9c1) popup_call5_audio_first_window_ParamLimits

0xddb2,	// (0x0006c9c1) popup_call5_audio_first_window

0x17b5,	// (0x000603c4) call5_swipe_1_pane_g1_ParamLimits

0x17b5,	// (0x000603c4) call5_swipe_1_pane_g1

0x30ec,	// (0x00061cfb) call5_swipe_1_pane_g2_ParamLimits

0x30ec,	// (0x00061cfb) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0006e916) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0006e916) call5_swipe_1_pane_g

0x30f8,	// (0x00061d07) call5_swipe_1_pane_t1_ParamLimits

0x30f8,	// (0x00061d07) call5_swipe_1_pane_t1

0x17b5,	// (0x000603c4) call5_swipe_2_pane_g1_ParamLimits

0x17b5,	// (0x000603c4) call5_swipe_2_pane_g1

0x310d,	// (0x00061d1c) call5_swipe_2_pane_g2_ParamLimits

0x310d,	// (0x00061d1c) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0006e91b) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0006e91b) call5_swipe_2_pane_g

0x3119,	// (0x00061d28) call5_swipe_2_pane_t1_ParamLimits

0x3119,	// (0x00061d28) call5_swipe_2_pane_t1

0x312e,	// (0x00061d3d) sc_swipe_pane_g1_ParamLimits

0x312e,	// (0x00061d3d) sc_swipe_pane_g1

0x313b,	// (0x00061d4a) sc_swipe_pane_g2_ParamLimits

0x313b,	// (0x00061d4a) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0006e920) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0006e920) sc_swipe_pane_g

0x3147,	// (0x00061d56) sc_swipe_pane_t1_ParamLimits

0x3147,	// (0x00061d56) sc_swipe_pane_t1

0x0541,	// (0x0005f150) main_cmail_launcher_pane

0xddc0,	// (0x0006c9cf) aid_size_cell_cmail_l_ParamLimits

0xddc0,	// (0x0006c9cf) aid_size_cell_cmail_l

0xddd0,	// (0x0006c9df) grid_cmail_l_pane_ParamLimits

0xddd0,	// (0x0006c9df) grid_cmail_l_pane

0xdde0,	// (0x0006c9ef) cell_cmail_l_pane_ParamLimits

0xdde0,	// (0x0006c9ef) cell_cmail_l_pane

0xddf4,	// (0x0006ca03) cell_cmail_l_pane_g1_ParamLimits

0xddf4,	// (0x0006ca03) cell_cmail_l_pane_g1

0xde00,	// (0x0006ca0f) cell_cmail_l_pane_t1_ParamLimits

0xde00,	// (0x0006ca0f) cell_cmail_l_pane_t1

0x315c,	// (0x00061d6b) cell_cmail_l_pane_t2_ParamLimits

0x315c,	// (0x00061d6b) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0006e925) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0006e925) cell_cmail_l_pane_t

0xf115,	// (0x0006dd24) grid_highlight_pane_cp018_ParamLimits

0xf115,	// (0x0006dd24) grid_highlight_pane_cp018

0x5ea8,	// (0x00064ab7) main2_pane_ParamLimits

0x5ea8,	// (0x00064ab7) main2_pane

0x66b4,	// (0x000652c3) popup_sp_fs_action_menu_bg_pane_g1

0x66bc,	// (0x000652cb) popup_sp_fs_action_menu_bg_pane_g2

0x66c4,	// (0x000652d3) popup_sp_fs_action_menu_bg_pane_g3

0x66cc,	// (0x000652db) popup_sp_fs_action_menu_bg_pane_g4

0x66d4,	// (0x000652e3) popup_sp_fs_action_menu_bg_pane_g5

0x66dc,	// (0x000652eb) popup_sp_fs_action_menu_bg_pane_g6

0x66e4,	// (0x000652f3) popup_sp_fs_action_menu_bg_pane_g7

0x66ec,	// (0x000652fb) popup_sp_fs_action_menu_bg_pane_g8

0x66f4,	// (0x00065303) popup_sp_fs_action_menu_bg_pane_g9

0x66fc,	// (0x0006530b) popup_sp_fs_action_menu_bg_pane_g10

0x66fc,	// (0x0006530b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0006ddfe) popup_sp_fs_action_menu_bg_pane_g

0x4de8,	// (0x000639f7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_t3_g3_g1

0x4df4,	// (0x00063a03) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4df4,	// (0x00063a03) list_medium_line_x2_t3_g3_g2

0x4e00,	// (0x00063a0f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4e00,	// (0x00063a0f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0006deae) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0006deae) list_medium_line_x2_t3_g3_g

0x4e0c,	// (0x00063a1b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4e0c,	// (0x00063a1b) list_medium_line_x2_t3_g3_t1

0x4e21,	// (0x00063a30) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4e21,	// (0x00063a30) list_medium_line_x2_t3_g3_t2

0x4e33,	// (0x00063a42) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4e33,	// (0x00063a42) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0006deb5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0006deb5) list_medium_line_x2_t3_g3_t

0x4de8,	// (0x000639f7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_t3_g2_g1

0x4e00,	// (0x00063a0f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4e00,	// (0x00063a0f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0006debc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0006debc) list_medium_line_x2_t3_g2_g

0x4e48,	// (0x00063a57) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4e48,	// (0x00063a57) list_medium_line_x2_t3_g2_t1

0x4e5e,	// (0x00063a6d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4e5e,	// (0x00063a6d) list_medium_line_x2_t3_g2_t2

0x4e70,	// (0x00063a7f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4e70,	// (0x00063a7f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0006dec1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0006dec1) list_medium_line_x2_t3_g2_t

0x4de8,	// (0x000639f7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_t4_g4_g1

0x4e8d,	// (0x00063a9c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4e8d,	// (0x00063a9c) list_medium_line_x2_t4_g4_g2

0x4df4,	// (0x00063a03) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4df4,	// (0x00063a03) list_medium_line_x2_t4_g4_g3

0x4e99,	// (0x00063aa8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4e99,	// (0x00063aa8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0006dec8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0006dec8) list_medium_line_x2_t4_g4_g

0x4ea5,	// (0x00063ab4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4ea5,	// (0x00063ab4) list_medium_line_x2_t4_g4_t1

0x4ebf,	// (0x00063ace) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4ebf,	// (0x00063ace) list_medium_line_x2_t4_g4_t2

0x4ed5,	// (0x00063ae4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4ed5,	// (0x00063ae4) list_medium_line_x2_t4_g4_t3

0x4eea,	// (0x00063af9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4eea,	// (0x00063af9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0006ded1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0006ded1) list_medium_line_x2_t4_g4_t

0x4de8,	// (0x000639f7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_t2_g4_g1

0x4e8d,	// (0x00063a9c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4e8d,	// (0x00063a9c) list_medium_line_x2_t2_g4_g2

0x4df4,	// (0x00063a03) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4df4,	// (0x00063a03) list_medium_line_x2_t2_g4_g3

0x4e00,	// (0x00063a0f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4e00,	// (0x00063a0f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0006df38) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0006df38) list_medium_line_x2_t2_g4_g

0x4efc,	// (0x00063b0b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4efc,	// (0x00063b0b) list_medium_line_x2_t2_g4_t1

0x4e33,	// (0x00063a42) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4e33,	// (0x00063a42) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0006df41) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0006df41) list_medium_line_x2_t2_g4_t

0x4de8,	// (0x000639f7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_t2_g3_g1

0x4df4,	// (0x00063a03) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4df4,	// (0x00063a03) list_medium_line_x2_t2_g3_g2

0x4e00,	// (0x00063a0f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4e00,	// (0x00063a0f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0006deae) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0006deae) list_medium_line_x2_t2_g3_g

0x4f11,	// (0x00063b20) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4f11,	// (0x00063b20) list_medium_line_x2_t2_g3_t1

0x4e33,	// (0x00063a42) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4e33,	// (0x00063a42) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0006df46) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0006df46) list_medium_line_x2_t2_g3_t

0x82e4,	// (0x00066ef3) main_sp_fs_list_pane_ParamLimits

0x82e4,	// (0x00066ef3) main_sp_fs_list_pane

0x82f0,	// (0x00066eff) sp_fs_scroll_pane_ParamLimits

0x82f0,	// (0x00066eff) sp_fs_scroll_pane

0x4f26,	// (0x00063b35) list_medium_line_x2_t3_t1

0x4f36,	// (0x00063b45) list_medium_line_x2_t3_t2

0x4f44,	// (0x00063b53) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0006df91) list_medium_line_x2_t3_t

0x4f52,	// (0x00063b61) list_medium_line_x3_t4_t1

0x4f62,	// (0x00063b71) list_medium_line_x3_t4_t2

0x4f70,	// (0x00063b7f) list_medium_line_x3_t4_t3

0x4f44,	// (0x00063b53) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0006df98) list_medium_line_x3_t4_t

0x4f7e,	// (0x00063b8d) list_medium_line_x4_t5_t1

0x4f8e,	// (0x00063b9d) list_medium_line_x4_t5_t2

0x4f70,	// (0x00063b7f) list_medium_line_x4_t5_t3

0x4f9c,	// (0x00063bab) list_medium_line_x4_t5_t4

0x4f44,	// (0x00063b53) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0006dfa1) list_medium_line_x4_t5_t

0x4de8,	// (0x000639f7) list_medium_line_t4_g4_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_t4_g4_g1

0x4e99,	// (0x00063aa8) list_medium_line_t4_g4_g2_ParamLimits

0x4e99,	// (0x00063aa8) list_medium_line_t4_g4_g2

0x4faa,	// (0x00063bb9) list_medium_line_t4_g4_g3_ParamLimits

0x4faa,	// (0x00063bb9) list_medium_line_t4_g4_g3

0x4e00,	// (0x00063a0f) list_medium_line_t4_g4_g4_ParamLimits

0x4e00,	// (0x00063a0f) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0006dfac) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0006dfac) list_medium_line_t4_g4_g

0x4fb6,	// (0x00063bc5) list_medium_line_t4_g4_t1_ParamLimits

0x4fb6,	// (0x00063bc5) list_medium_line_t4_g4_t1

0x4fcb,	// (0x00063bda) list_medium_line_t4_g4_t2_ParamLimits

0x4fcb,	// (0x00063bda) list_medium_line_t4_g4_t2

0x4fe0,	// (0x00063bef) list_medium_line_t4_g4_t3_ParamLimits

0x4fe0,	// (0x00063bef) list_medium_line_t4_g4_t3

0x4e33,	// (0x00063a42) list_medium_line_t4_g4_t4_ParamLimits

0x4e33,	// (0x00063a42) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0006dfb5) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0006dfb5) list_medium_line_t4_g4_t

0x868d,	// (0x0006729c) chi_dic_find_pane_g1

0xa2c4,	// (0x00068ed3) main_tport_pane

0x521c,	// (0x00063e2b) list_medium_line_plain_t1

0x522a,	// (0x00063e39) list_medium_line_t2_g2_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_t2_g2_g1

0x5236,	// (0x00063e45) list_medium_line_t2_g2_g2_ParamLimits

0x5236,	// (0x00063e45) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0006e668) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0006e668) list_medium_line_t2_g2_g

0x5242,	// (0x00063e51) list_medium_line_t2_g2_t1_ParamLimits

0x5242,	// (0x00063e51) list_medium_line_t2_g2_t1

0x525c,	// (0x00063e6b) list_medium_line_t2_g2_t2_ParamLimits

0x525c,	// (0x00063e6b) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0006e66d) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0006e66d) list_medium_line_t2_g2_t

0x53ef,	// (0x00063ffe) aid_sp_fs_list_icon_a_sm

0xd0fa,	// (0x0006bd09) aid_sp_fs_list_icon_d

0x3b6a,	// (0x00062779) aid_sp_fs_text_primary

0x53f7,	// (0x00064006) aid_sp_fs_text_secondary

0x5400,	// (0x0006400f) list_medium_line

0x5400,	// (0x0006400f) list_medium_line_g2

0x5400,	// (0x0006400f) list_medium_line_g3

0x5400,	// (0x0006400f) list_medium_line_plain

0x5400,	// (0x0006400f) list_medium_line_plain_t2

0x5400,	// (0x0006400f) list_medium_line_plain_t3

0x5400,	// (0x0006400f) list_medium_line_right_icon

0x5400,	// (0x0006400f) list_medium_line_right_iconx2

0x5400,	// (0x0006400f) list_medium_line_t2

0x5400,	// (0x0006400f) list_medium_line_t2_g2

0x5400,	// (0x0006400f) list_medium_line_t2_g3

0x5400,	// (0x0006400f) list_medium_line_t2_right_icon

0x5400,	// (0x0006400f) list_medium_line_t2_right_iconx2

0x5400,	// (0x0006400f) list_medium_line_t3

0x5400,	// (0x0006400f) list_medium_line_t3_g2

0x5400,	// (0x0006400f) list_medium_line_t3_g3

0x5400,	// (0x0006400f) list_medium_line_t3_right_iconx2

0x5409,	// (0x00064018) list_medium_line_t4_g4

0x5412,	// (0x00064021) list_medium_line_x2

0x5412,	// (0x00064021) list_medium_line_x2_t2_g2

0x5412,	// (0x00064021) list_medium_line_x2_t2_g3

0x5412,	// (0x00064021) list_medium_line_x2_t2_g4

0x5412,	// (0x00064021) list_medium_line_x2_t3

0x5412,	// (0x00064021) list_medium_line_x2_t3_g2

0x5412,	// (0x00064021) list_medium_line_x2_t3_g3

0x5412,	// (0x00064021) list_medium_line_x2_t3_g4

0x5412,	// (0x00064021) list_medium_line_x2_t4_g2

0x5412,	// (0x00064021) list_medium_line_x2_t4_g4

0x541b,	// (0x0006402a) list_medium_line_x3

0x541b,	// (0x0006402a) list_medium_line_x3_t4

0x541b,	// (0x0006402a) list_medium_line_x3_t4_g4

0x5409,	// (0x00064018) list_medium_line_x4_t4

0x5409,	// (0x00064018) list_medium_line_x4_t4_g7

0x5409,	// (0x00064018) list_medium_line_x4_t5

0x5424,	// (0x00064033) list_single_fs_dyc_pane_ParamLimits

0x5424,	// (0x00064033) list_single_fs_dyc_pane

0x4de8,	// (0x000639f7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x4_t4_g7_g1

0x5438,	// (0x00064047) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5438,	// (0x00064047) list_medium_line_x4_t4_g7_g2

0x5444,	// (0x00064053) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5444,	// (0x00064053) list_medium_line_x4_t4_g7_g3

0x5453,	// (0x00064062) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5453,	// (0x00064062) list_medium_line_x4_t4_g7_g4

0x545f,	// (0x0006406e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x545f,	// (0x0006406e) list_medium_line_x4_t4_g7_g5

0x546e,	// (0x0006407d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x546e,	// (0x0006407d) list_medium_line_x4_t4_g7_g6

0x547d,	// (0x0006408c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x547d,	// (0x0006408c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0006e832) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0006e832) list_medium_line_x4_t4_g7_g

0x5489,	// (0x00064098) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5489,	// (0x00064098) list_medium_line_x4_t4_g7_t1

0x549e,	// (0x000640ad) list_medium_line_x4_t4_g7_t2_ParamLimits

0x549e,	// (0x000640ad) list_medium_line_x4_t4_g7_t2

0x54b3,	// (0x000640c2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x54b3,	// (0x000640c2) list_medium_line_x4_t4_g7_t3

0x54c8,	// (0x000640d7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x54c8,	// (0x000640d7) list_medium_line_x4_t4_g7_t4

0x54da,	// (0x000640e9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x54da,	// (0x000640e9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0006e841) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0006e841) list_medium_line_x4_t4_g7_t

0x54ec,	// (0x000640fb) list_single_dyc_row_pane_ParamLimits

0x54ec,	// (0x000640fb) list_single_dyc_row_pane

0xdd70,	// (0x0006c97f) call5_gesture_pane_ParamLimits

0xdd70,	// (0x0006c97f) call5_gesture_pane

0xdda4,	// (0x0006c9b3) call5_windows_pane_ParamLimits

0xdda4,	// (0x0006c9b3) call5_windows_pane

0xde16,	// (0x0006ca25) call5_swipe_1_pane_cp_ParamLimits

0xde16,	// (0x0006ca25) call5_swipe_1_pane_cp

0xde22,	// (0x0006ca31) call5_swipe_2_pane_cp_ParamLimits

0xde22,	// (0x0006ca31) call5_swipe_2_pane_cp

0x8ab7,	// (0x000676c6) call5_image_pane_cp

0xde2e,	// (0x0006ca3d) popup_call5_audio_first_window_cp_ParamLimits

0xde2e,	// (0x0006ca3d) popup_call5_audio_first_window_cp

0x312e,	// (0x00061d3d) call5_swipe_1_pane_g1_cp_ParamLimits

0x312e,	// (0x00061d3d) call5_swipe_1_pane_g1_cp

0x316e,	// (0x00061d7d) call5_swipe_1_pane_g2_cp

0x3147,	// (0x00061d56) call5_swipe_1_pane_t1_cp_ParamLimits

0x3147,	// (0x00061d56) call5_swipe_1_pane_t1_cp

0x312e,	// (0x00061d3d) call5_swipe_2_pane_g1_cp_ParamLimits

0x312e,	// (0x00061d3d) call5_swipe_2_pane_g1_cp

0x3176,	// (0x00061d85) call5_swipe_2_pane_g2_cp

0x317e,	// (0x00061d8d) call5_swipe_2_pane_t1_cp_ParamLimits

0x317e,	// (0x00061d8d) call5_swipe_2_pane_t1_cp

0xf115,	// (0x0006dd24) main_sp_fs_email_pane

0x3193,	// (0x00061da2) main_sp_fs_listscroll_pane_te

0x5598,	// (0x000641a7) popup_sp_fs_action_menu_pane_ParamLimits

0x5598,	// (0x000641a7) popup_sp_fs_action_menu_pane

0x1549,	// (0x00060158) bg_sp_fs_ctrlbar_pane_g1

0x31e0,	// (0x00061def) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x31e9,	// (0x00061df8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x31f2,	// (0x00061e01) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1549,	// (0x00060158) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0006e92a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x132e,	// (0x0005ff3d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x132e,	// (0x0005ff3d) bg_sp_fs_ctrlbar_ddmenu_pane

0x31fb,	// (0x00061e0a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x31fb,	// (0x00061e0a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3207,	// (0x00061e16) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3207,	// (0x00061e16) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0006e933) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0006e933) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3213,	// (0x00061e22) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3213,	// (0x00061e22) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x55dc,	// (0x000641eb) list_medium_line_t2_right_icon_g1

0x55e4,	// (0x000641f3) list_medium_line_t2_right_icon_t1

0x55f4,	// (0x00064203) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0006e938) list_medium_line_t2_right_icon_t

0x1043,	// (0x0005fc52) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1043,	// (0x0005fc52) bg_sp_fs_ctrlbar_pane

0xde93,	// (0x0006caa2) main_sp_fs_ctrlbar_button_pane_cp01

0xde9b,	// (0x0006caaa) main_sp_fs_ctrlbar_ddmenu_pane

0x326d,	// (0x00061e7c) main_sp_fs_ctrlbar_pane_g1

0x3279,	// (0x00061e88) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0006e93d) main_sp_fs_ctrlbar_pane_g

0x3285,	// (0x00061e94) main_sp_fs_ctrlbar_pane_t1

0x5602,	// (0x00064211) main_sp_fs_ctrlbar_pane

0x561e,	// (0x0006422d) main_sp_fs_listscroll_pane_te_cp01

0x562f,	// (0x0006423e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x562f,	// (0x0006423e) popup_sp_fs_action_menu_pane_cp01

0xf115,	// (0x0006dd24) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf115,	// (0x0006dd24) bg_sp_fs_highlight_list_pane_cp01

0x5649,	// (0x00064258) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5649,	// (0x00064258) sp_fs_action_menu_list_gene_pane_g1

0x32a9,	// (0x00061eb8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x32a9,	// (0x00061eb8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0006e942) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0006e942) sp_fs_action_menu_list_gene_pane_g

0x5658,	// (0x00064267) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5658,	// (0x00064267) sp_fs_action_menu_list_gene_pane_t1

0x5670,	// (0x0006427f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5670,	// (0x0006427f) sp_fs_action_menu_list_gene_pane

0x32ed,	// (0x00061efc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x32ed,	// (0x00061efc) popup_sp_fs_action_menu_bg_pane

0x5691,	// (0x000642a0) sp_fs_action_menu_list_pane_ParamLimits

0x5691,	// (0x000642a0) sp_fs_action_menu_list_pane

0x331b,	// (0x00061f2a) sp_fs_scroll_pane_cp01_ParamLimits

0x331b,	// (0x00061f2a) sp_fs_scroll_pane_cp01

0x56b3,	// (0x000642c2) list_medium_line_plain_t2_t1

0x56c3,	// (0x000642d2) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0006e947) list_medium_line_plain_t2_t

0x56d1,	// (0x000642e0) list_medium_line_plain_t3_t1

0x56e1,	// (0x000642f0) list_medium_line_plain_t3_t2

0x56ef,	// (0x000642fe) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0006e94c) list_medium_line_plain_t3_t

0x4de8,	// (0x000639f7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_t2_g2_g1

0x4e00,	// (0x00063a0f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4e00,	// (0x00063a0f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0006debc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0006debc) list_medium_line_x2_t2_g2_g

0x4fb6,	// (0x00063bc5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4fb6,	// (0x00063bc5) list_medium_line_x2_t2_g2_t1

0x4e33,	// (0x00063a42) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4e33,	// (0x00063a42) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0006e953) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0006e953) list_medium_line_x2_t2_g2_t

0x4de8,	// (0x000639f7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_t4_g2_g1

0x56fd,	// (0x0006430c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x56fd,	// (0x0006430c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0006e958) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0006e958) list_medium_line_x2_t4_g2_g

0x570f,	// (0x0006431e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x570f,	// (0x0006431e) list_medium_line_x2_t4_g2_t1

0x5726,	// (0x00064335) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5726,	// (0x00064335) list_medium_line_x2_t4_g2_t2

0x573b,	// (0x0006434a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x573b,	// (0x0006434a) list_medium_line_x2_t4_g2_t3

0x4e33,	// (0x00063a42) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4e33,	// (0x00063a42) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0006e95d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0006e95d) list_medium_line_x2_t4_g2_t

0x574d,	// (0x0006435c) list_medium_line_t3_right_iconx2_g1

0x55dc,	// (0x000641eb) list_medium_line_t3_right_iconx2_g2

0x5755,	// (0x00064364) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0006e966) list_medium_line_t3_right_iconx2_g

0x575d,	// (0x0006436c) list_medium_line_t3_right_iconx2_t1

0x576d,	// (0x0006437c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0006e96d) list_medium_line_t3_right_iconx2_t

0x4de8,	// (0x000639f7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x3_t4_g4_g1

0x4df4,	// (0x00063a03) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4df4,	// (0x00063a03) list_medium_line_x3_t4_g4_g2

0x4e99,	// (0x00063aa8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4e99,	// (0x00063aa8) list_medium_line_x3_t4_g4_g3

0x577b,	// (0x0006438a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x577b,	// (0x0006438a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0006e972) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0006e972) list_medium_line_x3_t4_g4_g

0x5787,	// (0x00064396) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5787,	// (0x00064396) list_medium_line_x3_t4_g4_t1

0x579e,	// (0x000643ad) list_medium_line_x3_t4_g4_t2_ParamLimits

0x579e,	// (0x000643ad) list_medium_line_x3_t4_g4_t2

0x4fcb,	// (0x00063bda) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4fcb,	// (0x00063bda) list_medium_line_x3_t4_g4_t3

0x57b3,	// (0x000643c2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x57b3,	// (0x000643c2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0006e97b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0006e97b) list_medium_line_x3_t4_g4_t

0x57d0,	// (0x000643df) list_single_dyc_row_text_pane_t1_ParamLimits

0x57d0,	// (0x000643df) list_single_dyc_row_text_pane_t1

0x5807,	// (0x00064416) list_single_dyc_row_text_pane_t2_ParamLimits

0x5807,	// (0x00064416) list_single_dyc_row_text_pane_t2

0x5861,	// (0x00064470) list_single_dyc_row_text_pane_t3_ParamLimits

0x5861,	// (0x00064470) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0006e984) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0006e984) list_single_dyc_row_text_pane_t

0x5873,	// (0x00064482) list_single_dyc_row_pane_g1_ParamLimits

0x5873,	// (0x00064482) list_single_dyc_row_pane_g1

0x587f,	// (0x0006448e) list_single_dyc_row_pane_g2_ParamLimits

0x587f,	// (0x0006448e) list_single_dyc_row_pane_g2

0x588b,	// (0x0006449a) list_single_dyc_row_pane_g3_ParamLimits

0x588b,	// (0x0006449a) list_single_dyc_row_pane_g3

0x5897,	// (0x000644a6) list_single_dyc_row_pane_g4_ParamLimits

0x5897,	// (0x000644a6) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0006e98b) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0006e98b) list_single_dyc_row_pane_g

0x58a3,	// (0x000644b2) list_single_dyc_row_text_pane_ParamLimits

0x58a3,	// (0x000644b2) list_single_dyc_row_text_pane

0x0541,	// (0x0005f150) bg_sp_fs_scroll_pane

0x33e5,	// (0x00061ff4) thumb_sp_fs_scroll_pane

0x522a,	// (0x00063e39) list_medium_line_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_g1

0x58c2,	// (0x000644d1) list_medium_line_t1_ParamLimits

0x58c2,	// (0x000644d1) list_medium_line_t1

0x4de8,	// (0x000639f7) list_medium_line_x2_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_g1

0x4df4,	// (0x00063a03) list_medium_line_x2_g2_ParamLimits

0x4df4,	// (0x00063a03) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0006e994) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0006e994) list_medium_line_x2_g

0x58d7,	// (0x000644e6) list_medium_line_x2_t1_ParamLimits

0x58d7,	// (0x000644e6) list_medium_line_x2_t1

0x4de8,	// (0x000639f7) list_medium_line_x3_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x3_g1

0x4df4,	// (0x00063a03) list_medium_line_x3_g2_ParamLimits

0x4df4,	// (0x00063a03) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0006e994) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0006e994) list_medium_line_x3_g

0x58d7,	// (0x000644e6) list_medium_line_x3_t1_ParamLimits

0x58d7,	// (0x000644e6) list_medium_line_x3_t1

0x3419,	// (0x00062028) thumb_sp_fs_scroll_pane_g1

0x3422,	// (0x00062031) thumb_sp_fs_scroll_pane_g2

0x342b,	// (0x0006203a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0006e999) thumb_sp_fs_scroll_pane_g

0x3419,	// (0x00062028) bg_sp_fs_scroll_pane_g1

0x3422,	// (0x00062031) bg_sp_fs_scroll_pane_g2

0x342b,	// (0x0006203a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0006e999) bg_sp_fs_scroll_pane_g

0x4de8,	// (0x000639f7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4de8,	// (0x000639f7) list_medium_line_x2_t3_g4_g1

0x4e8d,	// (0x00063a9c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4e8d,	// (0x00063a9c) list_medium_line_x2_t3_g4_g2

0x4df4,	// (0x00063a03) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4df4,	// (0x00063a03) list_medium_line_x2_t3_g4_g3

0x4e00,	// (0x00063a0f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4e00,	// (0x00063a0f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0006df38) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0006df38) list_medium_line_x2_t3_g4_g

0x58ed,	// (0x000644fc) list_medium_line_x2_t3_g4_t1_ParamLimits

0x58ed,	// (0x000644fc) list_medium_line_x2_t3_g4_t1

0x5903,	// (0x00064512) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5903,	// (0x00064512) list_medium_line_x2_t3_g4_t2

0x4e33,	// (0x00063a42) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4e33,	// (0x00063a42) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0006e9a0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0006e9a0) list_medium_line_x2_t3_g4_t

0x522a,	// (0x00063e39) list_medium_line_g2_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_g2_g1

0x5236,	// (0x00063e45) list_medium_line_g2_g2_ParamLimits

0x5236,	// (0x00063e45) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0006e668) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0006e668) list_medium_line_g2_g

0x591d,	// (0x0006452c) list_medium_line_g2_t1_ParamLimits

0x591d,	// (0x0006452c) list_medium_line_g2_t1

0x522a,	// (0x00063e39) list_medium_line_t3_g2_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_t3_g2_g1

0x5236,	// (0x00063e45) list_medium_line_t3_g2_g2_ParamLimits

0x5236,	// (0x00063e45) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0006e668) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0006e668) list_medium_line_t3_g2_g

0x5932,	// (0x00064541) list_medium_line_t3_g2_t1_ParamLimits

0x5932,	// (0x00064541) list_medium_line_t3_g2_t1

0x5949,	// (0x00064558) list_medium_line_t3_g2_t2_ParamLimits

0x5949,	// (0x00064558) list_medium_line_t3_g2_t2

0x595e,	// (0x0006456d) list_medium_line_t3_g2_t3_ParamLimits

0x595e,	// (0x0006456d) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0006e9a7) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0006e9a7) list_medium_line_t3_g2_t

0x55dc,	// (0x000641eb) list_medium_line_right_icon_g1

0x5973,	// (0x00064582) list_medium_line_right_icon_t1

0x522a,	// (0x00063e39) list_medium_line_t2_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_t2_g1

0x5981,	// (0x00064590) list_medium_line_t2_t1_ParamLimits

0x5981,	// (0x00064590) list_medium_line_t2_t1

0x599b,	// (0x000645aa) list_medium_line_t2_t2_ParamLimits

0x599b,	// (0x000645aa) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0006e9ae) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0006e9ae) list_medium_line_t2_t

0x522a,	// (0x00063e39) list_medium_line_t3_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_t3_g1

0x59b0,	// (0x000645bf) list_medium_line_t3_t1_ParamLimits

0x59b0,	// (0x000645bf) list_medium_line_t3_t1

0x59c7,	// (0x000645d6) list_medium_line_t3_t2_ParamLimits

0x59c7,	// (0x000645d6) list_medium_line_t3_t2

0x59dc,	// (0x000645eb) list_medium_line_t3_t3_ParamLimits

0x59dc,	// (0x000645eb) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0006e9b3) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0006e9b3) list_medium_line_t3_t

0x522a,	// (0x00063e39) list_medium_line_g3_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_g3_g1

0x59ee,	// (0x000645fd) list_medium_line_g3_g2_ParamLimits

0x59ee,	// (0x000645fd) list_medium_line_g3_g2

0x5236,	// (0x00063e45) list_medium_line_g3_g3_ParamLimits

0x5236,	// (0x00063e45) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0006e9ba) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0006e9ba) list_medium_line_g3_g

0x59fa,	// (0x00064609) list_medium_line_g3_t1_ParamLimits

0x59fa,	// (0x00064609) list_medium_line_g3_t1

0x522a,	// (0x00063e39) list_medium_line_t2_g3_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_t2_g3_g1

0x59ee,	// (0x000645fd) list_medium_line_t2_g3_g2_ParamLimits

0x59ee,	// (0x000645fd) list_medium_line_t2_g3_g2

0x5236,	// (0x00063e45) list_medium_line_t2_g3_g3_ParamLimits

0x5236,	// (0x00063e45) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0006e9ba) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0006e9ba) list_medium_line_t2_g3_g

0x5a0f,	// (0x0006461e) list_medium_line_t2_g3_t1_ParamLimits

0x5a0f,	// (0x0006461e) list_medium_line_t2_g3_t1

0x5a29,	// (0x00064638) list_medium_line_t2_g3_t2_ParamLimits

0x5a29,	// (0x00064638) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0006e9c1) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0006e9c1) list_medium_line_t2_g3_t

0x522a,	// (0x00063e39) list_medium_line_t3_g3_g1_ParamLimits

0x522a,	// (0x00063e39) list_medium_line_t3_g3_g1

0x59ee,	// (0x000645fd) list_medium_line_t3_g3_g2_ParamLimits

0x59ee,	// (0x000645fd) list_medium_line_t3_g3_g2

0x5236,	// (0x00063e45) list_medium_line_t3_g3_g3_ParamLimits

0x5236,	// (0x00063e45) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0006e9ba) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0006e9ba) list_medium_line_t3_g3_g

0x5a3e,	// (0x0006464d) list_medium_line_t3_g3_t1_ParamLimits

0x5a3e,	// (0x0006464d) list_medium_line_t3_g3_t1

0x5a52,	// (0x00064661) list_medium_line_t3_g3_t2_ParamLimits

0x5a52,	// (0x00064661) list_medium_line_t3_g3_t2

0x5a64,	// (0x00064673) list_medium_line_t3_g3_t3_ParamLimits

0x5a64,	// (0x00064673) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0006e9c6) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0006e9c6) list_medium_line_t3_g3_t

0x574d,	// (0x0006435c) list_medium_line_right_iconx2_g1

0x55dc,	// (0x000641eb) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0006e9cd) list_medium_line_right_iconx2_g

0x5a76,	// (0x00064685) list_medium_line_right_iconx2_t1

0x574d,	// (0x0006435c) list_medium_line_t2_right_iconx2_g1

0x55dc,	// (0x000641eb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0006e9cd) list_medium_line_t2_right_iconx2_g

0x5a84,	// (0x00064693) list_medium_line_t2_right_iconx2_t1

0x5a94,	// (0x000646a3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0006e9d2) list_medium_line_t2_right_iconx2_t

0x5aa2,	// (0x000646b1) list_medium_line_x4_t4_t1

0x5ab0,	// (0x000646bf) list_medium_line_x4_t4_t2

0x5ac0,	// (0x000646cf) list_medium_line_x4_t4_t3

0x5ad0,	// (0x000646df) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0006e9d7) list_medium_line_x4_t4_t

0xdece,	// (0x0006cadd) tport_appsw_pane_ParamLimits

0xdece,	// (0x0006cadd) tport_appsw_pane

0xdeda,	// (0x0006cae9) tport_contact_pane_ParamLimits

0xdeda,	// (0x0006cae9) tport_contact_pane

0xdeea,	// (0x0006caf9) tport_listscroll_pane_ParamLimits

0xdeea,	// (0x0006caf9) tport_listscroll_pane

0xdefa,	// (0x0006cb09) cell_tport_appsw_pane_ParamLimits

0xdefa,	// (0x0006cb09) cell_tport_appsw_pane

0x1862,	// (0x00060471) tport_appsw_pane_g1_ParamLimits

0x1862,	// (0x00060471) tport_appsw_pane_g1

0x3494,	// (0x000620a3) tport_contact_pane_g1

0x2c65,	// (0x00061874) tport_contact_pane_t1

0x349d,	// (0x000620ac) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0006e9e0) tport_contact_pane_t

0x34ab,	// (0x000620ba) list_tport_pane

0x34b4,	// (0x000620c3) scroll_pane_cp_030

0xdf0f,	// (0x0006cb1e) cell_tport_appsw_pane_g1

0x34bd,	// (0x000620cc) cell_tport_appsw_pane_t1

0x0541,	// (0x0005f150) grid_highlight_pane_cp019

0xdf27,	// (0x0006cb36) list_tport_double_graphic_pane_ParamLimits

0xdf27,	// (0x0006cb36) list_tport_double_graphic_pane

0xf115,	// (0x0006dd24) list_highlight_pane_cp023_ParamLimits

0xf115,	// (0x0006dd24) list_highlight_pane_cp023

0xdf39,	// (0x0006cb48) list_tport_double_graphic_pane_g1_ParamLimits

0xdf39,	// (0x0006cb48) list_tport_double_graphic_pane_g1

0xdf46,	// (0x0006cb55) list_tport_double_graphic_pane_t1_ParamLimits

0xdf46,	// (0x0006cb55) list_tport_double_graphic_pane_t1

0xdf5b,	// (0x0006cb6a) list_tport_double_graphic_pane_t2_ParamLimits

0xdf5b,	// (0x0006cb6a) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0006e9ec) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0006e9ec) list_tport_double_graphic_pane_t

0x0541,	// (0x0005f150) main_cale_note_pane

0xc468,	// (0x0006b077) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc468,	// (0x0006b077) cell_vitu2_function_top_wide_pane_cp01

0xdad9,	// (0x0006c6e8) wait_bar_pane_cp05_ParamLimits

0x0541,	// (0x0005f150) listscroll_cmail_pane

0x34d3,	// (0x000620e2) list_cmail_pane

0xdf77,	// (0x0006cb86) list_cmail_body_pane

0xdf94,	// (0x0006cba3) list_single_cmail_header_caption_pane

0xdfb9,	// (0x0006cbc8) list_single_cmail_header_detail_pane_ParamLimits

0xdfb9,	// (0x0006cbc8) list_single_cmail_header_detail_pane

0xdfec,	// (0x0006cbfb) list_single_cmail_header_caption_pane_t1

0x5ae0,	// (0x000646ef) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5ae0,	// (0x000646ef) list_single_cmail_header_detail_pane_g1

0xdffa,	// (0x0006cc09) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdffa,	// (0x0006cc09) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0006e9f1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0006e9f1) list_single_cmail_header_detail_pane_g

0x5af6,	// (0x00064705) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5af6,	// (0x00064705) list_single_cmail_header_detail_pane_t1

0x5b54,	// (0x00064763) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5b54,	// (0x00064763) list_single_cmail_header_editor_pane_bg

0x2df4,	// (0x00061a03) list_cmail_body_pane_g1

0x356e,	// (0x0006217d) list_cmail_body_pane_t1

0x1ff4,	// (0x00060c03) list_single_cmail_header_editor_pane_bg_g1

0x7623,	// (0x00066232) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2004,	// (0x00060c13) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1ffc,	// (0x00060c0b) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2239,	// (0x00060e48) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2024,	// (0x00060c33) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2014,	// (0x00060c23) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x201c,	// (0x00060c2b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x7603,	// (0x00066212) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe006,	// (0x0006cc15) calenote_gesture_pane_ParamLimits

0xe006,	// (0x0006cc15) calenote_gesture_pane

0xe020,	// (0x0006cc2f) calenote_window_pane_ParamLimits

0xe020,	// (0x0006cc2f) calenote_window_pane

0x357c,	// (0x0006218b) popup_note_window_cp01

0xe038,	// (0x0006cc47) calenote_swipe_1_pane_ParamLimits

0xe038,	// (0x0006cc47) calenote_swipe_1_pane

0xde22,	// (0x0006ca31) calenote_swipe_2_pane_ParamLimits

0xde22,	// (0x0006ca31) calenote_swipe_2_pane

0x312e,	// (0x00061d3d) calenote_swipe_1_pane_g1_ParamLimits

0x312e,	// (0x00061d3d) calenote_swipe_1_pane_g1

0x313b,	// (0x00061d4a) calenote_swipe_1_pane_g2_ParamLimits

0x313b,	// (0x00061d4a) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0006e920) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0006e920) calenote_swipe_1_pane_g

0x358e,	// (0x0006219d) calenote_swipe_1_pane_t1_ParamLimits

0x358e,	// (0x0006219d) calenote_swipe_1_pane_t1

0x312e,	// (0x00061d3d) calenote_swipe_2_pane_g1_ParamLimits

0x312e,	// (0x00061d3d) calenote_swipe_2_pane_g1

0x35ad,	// (0x000621bc) calenote_swipe_2_pane_g2_ParamLimits

0x35ad,	// (0x000621bc) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0006e9fd) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0006e9fd) calenote_swipe_2_pane_g

0x35b9,	// (0x000621c8) calenote_swipe_2_pane_t1_ParamLimits

0x35b9,	// (0x000621c8) calenote_swipe_2_pane_t1

0x0541,	// (0x0005f150) main_mup_navstr_pane

0xb278,	// (0x00069e87) main_mup3_pane_t7_ParamLimits

0xb278,	// (0x00069e87) main_mup3_pane_t7

0xbc41,	// (0x0006a850) main_mp4_pane_g6_ParamLimits

0xbc41,	// (0x0006a850) main_mp4_pane_g6

0xbfa5,	// (0x0006abb4) main_image3_pane_t4_ParamLimits

0xbfa5,	// (0x0006abb4) main_image3_pane_t4

0xe04b,	// (0x0006cc5a) popup_navstr_preview_pane_ParamLimits

0xe04b,	// (0x0006cc5a) popup_navstr_preview_pane

0xe057,	// (0x0006cc66) scroll_navstr_pane_ParamLimits

0xe057,	// (0x0006cc66) scroll_navstr_pane

0x0541,	// (0x0005f150) bg_popup_preview_window_pane_cp04

0x35e0,	// (0x000621ef) popup_navstr_preview_pane_t1

0xe063,	// (0x0006cc72) scroll_navstr_pane_g1_ParamLimits

0xe063,	// (0x0006cc72) scroll_navstr_pane_g1

0xe070,	// (0x0006cc7f) scroll_navstr_pane_t1_ParamLimits

0xe070,	// (0x0006cc7f) scroll_navstr_pane_t1

0x3585,	// (0x00062194) bg_button_pane_cp014

0x3585,	// (0x00062194) bg_button_pane_cp030

0x553e,	// (0x0006414d) list_double_fisheye_pane_g4_ParamLimits

0x553e,	// (0x0006414d) list_double_fisheye_pane_g4

0x554a,	// (0x00064159) list_double_fisheye_pane_g5_ParamLimits

0x554a,	// (0x00064159) list_double_fisheye_pane_g5

0x34db,	// (0x000620ea) sp_fs_scroll_pane_cp03

0x326d,	// (0x00061e7c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3279,	// (0x00061e88) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0006e93d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3285,	// (0x00061e94) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdf6d,	// (0x0006cb7c) sp_fs_scroll_pane_cp02

0x67bf,	// (0x000653ce) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x67bf,	// (0x000653ce) popup_sp_fs_calendar_preview_list_single_pane

0x0541,	// (0x0005f150) main_cam6_pano_pane

0xf115,	// (0x0006dd24) main_mup3_pane_ParamLimits

0x0541,	// (0x0005f150) main_phacti_pane

0xd9ae,	// (0x0006c5bd) bg_button_pane_cp11

0xd9c6,	// (0x0006c5d5) main_mobtv_info_pane_g2_ParamLimits

0xd9c6,	// (0x0006c5d5) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0006e89d) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0006e89d) main_mobtv_info_pane_g

0xdb78,	// (0x0006c787) sc_clock_pane_t5_ParamLimits

0xdb78,	// (0x0006c787) sc_clock_pane_t5

0xdc16,	// (0x0006c825) main_radioblah_pane_g1_ParamLimits

0x307a,	// (0x00061c89) main_radioblah_pane_t3_ParamLimits

0x307a,	// (0x00061c89) main_radioblah_pane_t3

0x3092,	// (0x00061ca1) main_radioblah_pane_t4_ParamLimits

0x3092,	// (0x00061ca1) main_radioblah_pane_t4

0xdc34,	// (0x0006c843) main_radioblah_text_pane_ParamLimits

0xdc34,	// (0x0006c843) main_radioblah_text_pane

0xdc41,	// (0x0006c850) main_radioblah_info_pane_g1_ParamLimits

0xdcd6,	// (0x0006c8e5) main_radioblah_info_pane_t4_ParamLimits

0xdcd6,	// (0x0006c8e5) main_radioblah_info_pane_t4

0xf115,	// (0x0006dd24) main_sp_fs_calendar_pane

0xe082,	// (0x0006cc91) main_phacti_pane_g1

0xe08a,	// (0x0006cc99) phacti_note_pane_ParamLimits

0xe08a,	// (0x0006cc99) phacti_note_pane

0x35f7,	// (0x00062206) phacti_term_pane_ParamLimits

0x35f7,	// (0x00062206) phacti_term_pane

0x360c,	// (0x0006221b) phacti_note_pane_t1_ParamLimits

0x360c,	// (0x0006221b) phacti_note_pane_t1

0x5b66,	// (0x00064775) phacti_term_pane_g1

0x5b6e,	// (0x0006477d) phacti_term_pane_t1_ParamLimits

0x5b6e,	// (0x0006477d) phacti_term_pane_t1

0x3655,	// (0x00062264) popup_sp_fs_calendar_preview_list_single_pane_g1

0x6fac,	// (0x00065bbb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0006ea07) popup_sp_fs_calendar_preview_list_single_pane_g

0x365d,	// (0x0006226c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x365d,	// (0x0006226c) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3672,	// (0x00062281) aid_popup_sp_fs_bg_corner_pane

0x1549,	// (0x00060158) popup_sp_fs_calendar_preview_bg_pane_g1

0x0541,	// (0x0005f150) popup_sp_fs_calendar_preview_bg_pane

0x367a,	// (0x00062289) popup_sp_fs_calendar_preview_list_pane

0xf115,	// (0x0006dd24) bg_main_sp_fs_cale_pane_ParamLimits

0xf115,	// (0x0006dd24) bg_main_sp_fs_cale_pane

0x5b98,	// (0x000647a7) listscroll_cale_mrui_pane_ParamLimits

0x5b98,	// (0x000647a7) listscroll_cale_mrui_pane

0x5bac,	// (0x000647bb) listscroll_sp_fs_schedule_track_pane

0x5bb5,	// (0x000647c4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5bb5,	// (0x000647c4) main_sp_fs_ctrlbar_pane_cp01

0x36b0,	// (0x000622bf) main_sp_fs_ribbon_pane

0x36b8,	// (0x000622c7) popup_sp_fs_cale_preview_window

0x34eb,	// (0x000620fa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x34eb,	// (0x000620fa) list_single_sp_fs_schedule_track_pane

0x6028,	// (0x00064c37) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6028,	// (0x00064c37) bg_sp_fs_highlight_list_pane_cp03

0xe0c9,	// (0x0006ccd8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe0c9,	// (0x0006ccd8) list_single_sp_fs_schedule_track_pane_g1

0xe0d5,	// (0x0006cce4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe0d5,	// (0x0006cce4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0006ea0c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0006ea0c) list_single_sp_fs_schedule_track_pane_g

0xe0e1,	// (0x0006ccf0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe0e1,	// (0x0006ccf0) list_single_sp_fs_schedule_track_pane_t1

0xe0f9,	// (0x0006cd08) sp_fs_schedule_track_pane_ParamLimits

0xe0f9,	// (0x0006cd08) sp_fs_schedule_track_pane

0x36ca,	// (0x000622d9) sp_fs_schedule_track_pane_g1

0x36d2,	// (0x000622e1) sp_fs_schedule_track_pane_g2

0x36da,	// (0x000622e9) sp_fs_schedule_track_pane_g3

0x36e2,	// (0x000622f1) sp_fs_schedule_track_pane_g4

0x36ea,	// (0x000622f9) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0006ea11) sp_fs_schedule_track_pane_g

0x1ff4,	// (0x00060c03) bg_sp_fs_schedule_viewer_highlight_g1

0x7623,	// (0x00066232) bg_sp_fs_schedule_viewer_highlight_g2

0x1ffc,	// (0x00060c0b) bg_sp_fs_schedule_viewer_highlight_g3

0x2004,	// (0x00060c13) bg_sp_fs_schedule_viewer_highlight_g4

0x2239,	// (0x00060e48) bg_sp_fs_schedule_viewer_highlight_g5

0x2014,	// (0x00060c23) bg_sp_fs_schedule_viewer_highlight_g6

0x201c,	// (0x00060c2b) bg_sp_fs_schedule_viewer_highlight_g7

0x2024,	// (0x00060c33) bg_sp_fs_schedule_viewer_highlight_g8

0x7603,	// (0x00066212) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0006ea1c) bg_sp_fs_schedule_viewer_highlight_g

0x0541,	// (0x0005f150) bg_main_sp_fs_ribbon_pane

0xe109,	// (0x0006cd18) main_sp_fs_ribbon_pane_g1

0x36f2,	// (0x00062301) main_sp_fs_ribbon_pane_t1

0xe112,	// (0x0006cd21) main_sp_fs_ribbon_pane_t2

0x3701,	// (0x00062310) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0006ea2f) main_sp_fs_ribbon_pane_t

0x3710,	// (0x0006231f) main_sp_fs_ribbon_scheduler_pane

0x3718,	// (0x00062327) bg_main_sp_fs_ribbon_pane_g1

0x3721,	// (0x00062330) bg_main_sp_fs_ribbon_pane_g2

0x372a,	// (0x00062339) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0006ea36) bg_main_sp_fs_ribbon_pane_g

0x3732,	// (0x00062341) main_sp_fs_ribbon_scheduler_pane_g1

0x373b,	// (0x0006234a) main_sp_fs_ribbon_scheduler_pane_g2

0x3744,	// (0x00062353) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0006ea3d) main_sp_fs_ribbon_scheduler_pane_g

0x374d,	// (0x0006235c) list_cale_mrui_pane

0xe121,	// (0x0006cd30) sp_fs_scroll_pane_cp07_ParamLimits

0xe121,	// (0x0006cd30) sp_fs_scroll_pane_cp07

0xe137,	// (0x0006cd46) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe137,	// (0x0006cd46) bg_sp_fs_schedule_viewer_highlight

0x3756,	// (0x00062365) list_single_sp_fs_schedule_track_pane_cp01

0x375e,	// (0x0006236d) list_sp_fs_schedule_track_pane

0x3766,	// (0x00062375) sp_fs_scroll_pane_cp06_ParamLimits

0x3766,	// (0x00062375) sp_fs_scroll_pane_cp06

0x1549,	// (0x00060158) bgmain_sp_fs_calendar_pane_g1

0x5bc6,	// (0x000647d5) list_single_cale_mrui_pane_ParamLimits

0x5bc6,	// (0x000647d5) list_single_cale_mrui_pane

0x5beb,	// (0x000647fa) list_single_cale_mrui_row_pane_ParamLimits

0x5beb,	// (0x000647fa) list_single_cale_mrui_row_pane

0x5bf8,	// (0x00064807) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5bf8,	// (0x00064807) list_single_cale_mrui_row_pane_g1

0x5c30,	// (0x0006483f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5c30,	// (0x0006483f) list_single_cale_mrui_row_pane_t1

0x5c42,	// (0x00064851) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5c42,	// (0x00064851) list_single_cale_mrui_row_pane_t2

0x5ca8,	// (0x000648b7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5ca8,	// (0x000648b7) list_single_cale_mrui_row_pane_t3

0x5cd7,	// (0x000648e6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5cd7,	// (0x000648e6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0006ea49) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0006ea49) list_single_cale_mrui_row_pane_t

0x5d06,	// (0x00064915) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5d06,	// (0x00064915) list_single_cmail_header_editor_pane_bg_cp01

0x5d26,	// (0x00064935) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5d26,	// (0x00064935) list_single_cmail_header_editor_pane_bg_cp02

0xe144,	// (0x0006cd53) main_radioblah_text_pane_t1_ParamLimits

0xe144,	// (0x0006cd53) main_radioblah_text_pane_t1

0x382d,	// (0x0006243c) cam6_indi_pane_cp01

0x3835,	// (0x00062444) cam6_mode_pane_cp01

0x383d,	// (0x0006244c) cam6_pano_pane

0x3846,	// (0x00062455) cam6_zoom_pane_cp01

0x384e,	// (0x0006245d) cam6_pano_image_pane

0x3859,	// (0x00062468) cam6_pano_pane_g1

0x2df4,	// (0x00061a03) cam6_pano_pane_g2

0x3862,	// (0x00062471) cam6_pano_pane_g3

0x386b,	// (0x0006247a) cam6_pano_pane_g4

0x1b2d,	// (0x0006073c) cam6_pano_pane_g5

0x3874,	// (0x00062483) cam6_pano_pane_g6

0x387e,	// (0x0006248d) cam6_pano_pane_g7

0x3886,	// (0x00062495) cam6_pano_pane_g8

0x388f,	// (0x0006249e) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0006ea52) cam6_pano_pane_g

0x0541,	// (0x0005f150) main_browser_tag_pane

0x35d8,	// (0x000621e7) grid_navstr_albumart_pane

0x389a,	// (0x000624a9) cell_navstr_albumart_pane_ParamLimits

0x389a,	// (0x000624a9) cell_navstr_albumart_pane

0x38bd,	// (0x000624cc) cell_navstr_albumart_pane_g1

0x0e60,	// (0x0005fa6f) cell_navstr_albumart_pane_g2

0x0e70,	// (0x0005fa7f) cell_navstr_albumart_pane_g3

0x0e68,	// (0x0005fa77) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0006ea65) cell_navstr_albumart_pane_g

0xe15f,	// (0x0006cd6e) bt_list_pane_ParamLimits

0xe15f,	// (0x0006cd6e) bt_list_pane

0xe17f,	// (0x0006cd8e) bt_list_pane_t1

0xe18e,	// (0x0006cd9d) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0006ea6e) bt_list_pane_t

0x0541,	// (0x0005f150) main_cale_prevew_pane

0xe19d,	// (0x0006cdac) popup_cale_preview_window_ParamLimits

0xe19d,	// (0x0006cdac) popup_cale_preview_window

0xf115,	// (0x0006dd24) bg_popup_preview_window_pane_cp05_ParamLimits

0xf115,	// (0x0006dd24) bg_popup_preview_window_pane_cp05

0x38c5,	// (0x000624d4) list_cale_preview_pane_ParamLimits

0x38c5,	// (0x000624d4) list_cale_preview_pane

0x3b91,	// (0x000627a0) list_double_cale_preview_pane_ParamLimits

0x3b91,	// (0x000627a0) list_double_cale_preview_pane

0xe1b6,	// (0x0006cdc5) list_single_cale_preview_pane_ParamLimits

0xe1b6,	// (0x0006cdc5) list_single_cale_preview_pane

0xe1cc,	// (0x0006cddb) list_single_cale_preview_pane_g1

0xe1d4,	// (0x0006cde3) list_single_cale_preview_pane_t1_ParamLimits

0xe1d4,	// (0x0006cde3) list_single_cale_preview_pane_t1

0xe1e9,	// (0x0006cdf8) list_double_cale_preview_pane_g1

0xe1f1,	// (0x0006ce00) list_double_cale_preview_pane_t1_ParamLimits

0xe1f1,	// (0x0006ce00) list_double_cale_preview_pane_t1

0xe206,	// (0x0006ce15) list_double_cale_preview_pane_t2_ParamLimits

0xe206,	// (0x0006ce15) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0006ea73) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0006ea73) list_double_cale_preview_pane_t

0x0541,	// (0x0005f150) main_ezdial_pane

0xf115,	// (0x0006dd24) main_sp_fs_email_pane_ParamLimits

0xde3c,	// (0x0006ca4b) cmail_ddmenu_btn01_pane_ParamLimits

0xde3c,	// (0x0006ca4b) cmail_ddmenu_btn01_pane

0xde59,	// (0x0006ca68) cmail_ddmenu_btn02_pane_ParamLimits

0xde59,	// (0x0006ca68) cmail_ddmenu_btn02_pane

0xde77,	// (0x0006ca86) cmail_ddmenu_btn03_pane_ParamLimits

0xde77,	// (0x0006ca86) cmail_ddmenu_btn03_pane

0x5602,	// (0x00064211) main_sp_fs_ctrlbar_pane_ParamLimits

0x561e,	// (0x0006422d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdf77,	// (0x0006cb86) list_cmail_body_pane_ParamLimits

0x3504,	// (0x00062113) bg_button_pane_cp12

0x3519,	// (0x00062128) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3519,	// (0x00062128) list_single_cmail_header_detail_pane_g3

0x5b30,	// (0x0006473f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5b30,	// (0x0006473f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0006e9f8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0006e9f8) list_single_cmail_header_detail_pane_t

0x5b83,	// (0x00064792) phacti_term_pane_t2_ParamLimits

0x5b83,	// (0x00064792) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0006ea02) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0006ea02) phacti_term_pane_t

0x38d1,	// (0x000624e0) aid_size_list_single_double

0xe21e,	// (0x0006ce2d) popup_ezdial_listscroll_window

0xe23e,	// (0x0006ce4d) popup_number_entry_window_cp01

0x8ab7,	// (0x000676c6) bg_popup_call_pane_cp09

0x38dd,	// (0x000624ec) ezdial_list_pane

0x38e5,	// (0x000624f4) scroll_pane_cp23

0x132e,	// (0x0005ff3d) bg_button_pane_cp028_ParamLimits

0x132e,	// (0x0005ff3d) bg_button_pane_cp028

0xe24c,	// (0x0006ce5b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe24c,	// (0x0006ce5b) cmail_ddmenu_btn01_pane_g1

0xe25c,	// (0x0006ce6b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe25c,	// (0x0006ce6b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0006ea78) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0006ea78) cmail_ddmenu_btn01_pane_g

0x38ed,	// (0x000624fc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x38ed,	// (0x000624fc) cmail_ddmenu_btn01_pane_t1

0x1043,	// (0x0005fc52) bg_button_pane_cp029_ParamLimits

0x1043,	// (0x0005fc52) bg_button_pane_cp029

0xe25c,	// (0x0006ce6b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe25c,	// (0x0006ce6b) cmail_ddmenu_btn02_pane_g1

0xe274,	// (0x0006ce83) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe274,	// (0x0006ce83) cmail_ddmenu_btn02_pane_t1

0x6028,	// (0x00064c37) bg_button_pane_cp031_ParamLimits

0x6028,	// (0x00064c37) bg_button_pane_cp031

0xe25c,	// (0x0006ce6b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe25c,	// (0x0006ce6b) cmail_ddmenu_btn03_pane_g1

0xe274,	// (0x0006ce83) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe274,	// (0x0006ce83) cmail_ddmenu_btn03_pane_t1

0xbe50,	// (0x0006aa5f) cell_dialer2_keypad_pane_t1_ParamLimits

0xbe6a,	// (0x0006aa79) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbe6a,	// (0x0006aa79) cell_dialer2_keypad_pane_t1_copy1

0xd870,	// (0x0006c47f) ncimui_group_button_pane

0xf115,	// (0x0006dd24) main_sp_fs_calendar_pane_ParamLimits

0xdf94,	// (0x0006cba3) list_single_cmail_header_caption_pane_ParamLimits

0x2580,	// (0x0006118f) aid_recal_txt_sm_pane

0x0541,	// (0x0005f150) mian_recal_day_pane

0x36b8,	// (0x000622c7) popup_sp_fs_cale_preview_window_ParamLimits

0x0541,	// (0x0005f150) list_recal_day_pane

0x391b,	// (0x0006252a) list_single_recal_day_pane_ParamLimits

0x391b,	// (0x0006252a) list_single_recal_day_pane

0x392d,	// (0x0006253c) list_single_recal_day_pane_g1_ParamLimits

0x392d,	// (0x0006253c) list_single_recal_day_pane_g1

0x3939,	// (0x00062548) list_single_recal_day_pane_g2_ParamLimits

0x3939,	// (0x00062548) list_single_recal_day_pane_g2

0x3948,	// (0x00062557) list_single_recal_day_pane_g3_ParamLimits

0x3948,	// (0x00062557) list_single_recal_day_pane_g3

0xe298,	// (0x0006cea7) list_single_recal_day_pane_g4_ParamLimits

0xe298,	// (0x0006cea7) list_single_recal_day_pane_g4

0x3954,	// (0x00062563) list_single_recal_day_pane_g5_ParamLimits

0x3954,	// (0x00062563) list_single_recal_day_pane_g5

0x3963,	// (0x00062572) list_single_recal_day_pane_g6_ParamLimits

0x3963,	// (0x00062572) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0006ea87) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0006ea87) list_single_recal_day_pane_g

0x396f,	// (0x0006257e) list_single_recal_day_pane_t1

0x397d,	// (0x0006258c) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0006ea94) list_single_recal_day_pane_t

0xe2ab,	// (0x0006ceba) ncimui_query_button_pane_ParamLimits

0xe2ab,	// (0x0006ceba) ncimui_query_button_pane

0xe2bb,	// (0x0006ceca) ncimui_query_button_pane_t1_ParamLimits

0xe2bb,	// (0x0006ceca) ncimui_query_button_pane_t1

0x398b,	// (0x0006259a) ncimui_query_button_pane_t2_ParamLimits

0x398b,	// (0x0006259a) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0006ea99) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0006ea99) ncimui_query_button_pane_t

0xe2ce,	// (0x0006cedd) query_button_pane_ParamLimits

0xe2ce,	// (0x0006cedd) query_button_pane

0x0541,	// (0x0005f150) bg_button_pane_cp0028

0x399e,	// (0x000625ad) query_button_pane_t1

0xa2c4,	// (0x00068ed3) main_tport_pane_ParamLimits

0xdea5,	// (0x0006cab4) bg_popup_window_pane_cp01_ParamLimits

0xdea5,	// (0x0006cab4) bg_popup_window_pane_cp01

0xdeb2,	// (0x0006cac1) heading_pane_cp08_ParamLimits

0xdeb2,	// (0x0006cac1) heading_pane_cp08

0xdec0,	// (0x0006cacf) heading_pane_cp07_ParamLimits

0xdec0,	// (0x0006cacf) heading_pane_cp07

0xdf17,	// (0x0006cb26) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0006e9e5) cell_tport_appsw_pane_g

0x5013,	// (0x00063c22) input_candi_list_open_g1

0x8123,	// (0x00066d32) list_cale_time_pane_g6_ParamLimits

0x8123,	// (0x00066d32) list_cale_time_pane_g6

0xad05,	// (0x00069914) aid_size_touch_calib_1_ParamLimits

0xad05,	// (0x00069914) aid_size_touch_calib_1

0xad11,	// (0x00069920) aid_size_touch_calib_2_ParamLimits

0xad11,	// (0x00069920) aid_size_touch_calib_2

0xad1f,	// (0x0006992e) aid_size_touch_calib_3_ParamLimits

0xad1f,	// (0x0006992e) aid_size_touch_calib_3

0xad2f,	// (0x0006993e) aid_size_touch_calib_4_ParamLimits

0xad2f,	// (0x0006993e) aid_size_touch_calib_4

0xad3d,	// (0x0006994c) main_touch_calib_button_group_pane_ParamLimits

0xad3d,	// (0x0006994c) main_touch_calib_button_group_pane

0xad4b,	// (0x0006995a) main_touch_calib_pane_g1_ParamLimits

0xad57,	// (0x00069966) main_touch_calib_pane_g2_ParamLimits

0xad63,	// (0x00069972) main_touch_calib_pane_g3_ParamLimits

0xad6f,	// (0x0006997e) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0006e3c7) main_touch_calib_pane_g_ParamLimits

0xad7b,	// (0x0006998a) main_touch_calib_pane_t1_ParamLimits

0xad92,	// (0x000699a1) main_touch_calib_pane_t2_ParamLimits

0xada9,	// (0x000699b8) main_touch_calib_pane_t3_ParamLimits

0xadbd,	// (0x000699cc) main_touch_calib_pane_t4_ParamLimits

0xadd1,	// (0x000699e0) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0006e3d0) main_touch_calib_pane_t_ParamLimits

0x1903,	// (0x00060512) list_single_fp_cale_pane_g3_ParamLimits

0x1903,	// (0x00060512) list_single_fp_cale_pane_g3

0xf115,	// (0x0006dd24) bg_button_pane_cp012_ParamLimits

0xf115,	// (0x0006dd24) bg_vkb2_func_pane_cp03_ParamLimits

0xcbd7,	// (0x0006b7e6) cell_vitu2_function_top_pane_g1_ParamLimits

0xf115,	// (0x0006dd24) bg_vkb2_func_pane_cp04_ParamLimits

0xd821,	// (0x0006c430) main_ncimui_button_group_pane_ParamLimits

0xd821,	// (0x0006c430) main_ncimui_button_group_pane

0xd85e,	// (0x0006c46d) main_ncimui_pane_t3_ParamLimits

0xd85e,	// (0x0006c46d) main_ncimui_pane_t3

0x35ee,	// (0x000621fd) phacti_button_group_pane

0x38d1,	// (0x000624e0) aid_size_list_single_double_ParamLimits

0xe21e,	// (0x0006ce2d) popup_ezdial_listscroll_window_ParamLimits

0xe23e,	// (0x0006ce4d) popup_number_entry_window_cp01_ParamLimits

0xe2db,	// (0x0006ceea) phacti_button_pane_ParamLimits

0xe2db,	// (0x0006ceea) phacti_button_pane

0x0541,	// (0x0005f150) bg_button_pane_cp14

0x39ac,	// (0x000625bb) phacti_button_pane_t1

0xe2ec,	// (0x0006cefb) main_touch_calib_button_pane_ParamLimits

0xe2ec,	// (0x0006cefb) main_touch_calib_button_pane

0x646d,	// (0x0006507c) bg_button_pane_cp18_ParamLimits

0x646d,	// (0x0006507c) bg_button_pane_cp18

0x39ba,	// (0x000625c9) main_touch_calib_button_pane_t1_ParamLimits

0x39ba,	// (0x000625c9) main_touch_calib_button_pane_t1

0x39d0,	// (0x000625df) main_touch_calib_button_pane_t2_ParamLimits

0x39d0,	// (0x000625df) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0006ea9e) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0006ea9e) main_touch_calib_button_pane_t

0x0541,	// (0x0005f150) cell_ncimui_button_pane

0x0541,	// (0x0005f150) bg_button_pane_cp032

0x39ee,	// (0x000625fd) cell_ncimui_button_pane_t1

0xbec6,	// (0x0006aad5) image3_infobar_pane_ParamLimits

0xbec6,	// (0x0006aad5) image3_infobar_pane

0xdb9a,	// (0x0006c7a9) fs_bigclock_status_pane_ParamLimits

0xdb9a,	// (0x0006c7a9) fs_bigclock_status_pane

0xdba7,	// (0x0006c7b6) main_fs_bigclock_clock_pane_ParamLimits

0xdba7,	// (0x0006c7b6) main_fs_bigclock_clock_pane

0xdbb7,	// (0x0006c7c6) main_fs_bigclock_indi_pane_ParamLimits

0xdbb7,	// (0x0006c7c6) main_fs_bigclock_indi_pane

0xdbe4,	// (0x0006c7f3) main_fs_bigclock_swipe_pane_ParamLimits

0xdbe4,	// (0x0006c7f3) main_fs_bigclock_swipe_pane

0x0541,	// (0x0005f150) main_fs_clock_dumped_data

0x2f01,	// (0x00061b10) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2f01,	// (0x00061b10) list_single_fs_bigclock_indicator_pane_g1

0x2f1d,	// (0x00061b2c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2f1d,	// (0x00061b2c) list_single_fs_bigclock_indicator_pane_g2

0x2f37,	// (0x00061b46) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2f37,	// (0x00061b46) list_single_fs_bigclock_indicator_pane_g3

0x2f51,	// (0x00061b60) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2f51,	// (0x00061b60) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0006e8d1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0006e8d1) list_single_fs_bigclock_indicator_pane_g

0x2f77,	// (0x00061b86) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2f77,	// (0x00061b86) list_single_fs_bigclock_indicator_pane_t1

0x2f9f,	// (0x00061bae) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2f9f,	// (0x00061bae) list_single_fs_bigclock_indicator_pane_t2

0x2fc7,	// (0x00061bd6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2fc7,	// (0x00061bd6) list_single_fs_bigclock_indicator_pane_t3

0x2fef,	// (0x00061bfe) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2fef,	// (0x00061bfe) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0006e8dc) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0006e8dc) list_single_fs_bigclock_indicator_pane_t

0x39fc,	// (0x0006260b) image3_infobar_fav_pane_ParamLimits

0x39fc,	// (0x0006260b) image3_infobar_fav_pane

0x3a0c,	// (0x0006261b) image3_infobar_loc_pane_ParamLimits

0x3a0c,	// (0x0006261b) image3_infobar_loc_pane

0x3a20,	// (0x0006262f) image3_infobar_time_pane_ParamLimits

0x3a20,	// (0x0006262f) image3_infobar_time_pane

0x1549,	// (0x00060158) image3_infobar_time_pane_g1

0x3a30,	// (0x0006263f) image3_infobar_time_pane_t1

0x1549,	// (0x00060158) image3_infobar_loc_pane_g1

0x3a3e,	// (0x0006264d) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0006eaa3) image3_infobar_loc_pane_g

0x3a46,	// (0x00062655) image3_infobar_loc_pane_t1

0x1549,	// (0x00060158) image3_infobar_fav_pane_g1

0x3a54,	// (0x00062663) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0006eaa8) image3_infobar_fav_pane_g

0x3a5c,	// (0x0006266b) fs_bigclock_status_battery_pane

0x3a65,	// (0x00062674) fs_bigclock_status_signal_pane

0x3a6e,	// (0x0006267d) fs_bigclock_status_title_pane

0x3a77,	// (0x00062686) fs_bigclock_status_signal_pane_g1

0x3a80,	// (0x0006268f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0006eaad) fs_bigclock_status_signal_pane_g

0x3a88,	// (0x00062697) fs_bigclock_status_battery_pane_g1

0x3a91,	// (0x000626a0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0006eab2) fs_bigclock_status_battery_pane_g

0x3a99,	// (0x000626a8) fs_bigclock_status_title_pane_t1

0x1549,	// (0x00060158) main_fs_bigclock_clock_pane_g1

0x3aa7,	// (0x000626b6) main_fs_bigclock_clock_pane_g2

0x3aa7,	// (0x000626b6) main_fs_bigclock_clock_pane_g3

0x3aa7,	// (0x000626b6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0006eab7) main_fs_bigclock_clock_pane_g

0x3aaf,	// (0x000626be) main_fs_bigclock_clock_pane_t1

0x3abd,	// (0x000626cc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0006eac0) main_fs_bigclock_clock_pane_t

0x3acc,	// (0x000626db) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3acc,	// (0x000626db) list_single_fs_bigclock_indicator_pane

0xe2fe,	// (0x0006cf0d) list_single_fs_bigclock_pane_ParamLimits

0xe2fe,	// (0x0006cf0d) list_single_fs_bigclock_pane

0x3ae6,	// (0x000626f5) main_fs_bigclock_indicator_pane_t1

0x3af5,	// (0x00062704) list_single_fs_bigclock_pane_g1

0x3afd,	// (0x0006270c) list_single_fs_bigclock_pane_t1

0x1549,	// (0x00060158) main_fs_bigclock_swipe_pane_g1

0x3b3b,	// (0x0006274a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0006ead1) main_fs_bigclock_swipe_pane_g

0x3b43,	// (0x00062752) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3b43,	// (0x00062752) main_fs_bigclock_swipe_pane_t1

0x840a,	// (0x00067019) call_type_pane_ParamLimits

0x0541,	// (0x0005f150) main_btmg_pane

0x5c24,	// (0x00064833) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5c24,	// (0x00064833) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0006ea44) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0006ea44) list_single_cale_mrui_row_pane_g

0x390b,	// (0x0006251a) list_recal_vselct_arw_lo_pane

0x3913,	// (0x00062522) list_recal_vselct_arw_up_pane

0x2577,	// (0x00061186) list_recal_vselct_pane

0x3b60,	// (0x0006276f) btmg_button_pane

0xe361,	// (0x0006cf70) main_btmg_pane_g1

0x0541,	// (0x0005f150) bg_button_pane_cp044

0x3f7b,	// (0x00062b8a) btmg_button_pane_t1

0x103b,	// (0x0005fc4a) aid_listscroll_gen

0xf115,	// (0x0006dd24) main_cntbar_detail_pane

0x34cb,	// (0x000620da) list_cmail_folder_pane

0x34db,	// (0x000620ea) sp_fs_scroll_pane_cp03_ParamLimits

0x5d42,	// (0x00064951) list_single_fs_dyc_pane_cp01_ParamLimits

0x5d42,	// (0x00064951) list_single_fs_dyc_pane_cp01

0x3f89,	// (0x00062b98) aid_size_cmail_indent

0xe369,	// (0x0006cf78) list_single_dyc_row_pane_cp01

0xe392,	// (0x0006cfa1) cntbar_detail_list_pane_ParamLimits

0xe392,	// (0x0006cfa1) cntbar_detail_list_pane

0xe3cc,	// (0x0006cfdb) main_cntbar_detail_cont_pane_ParamLimits

0xe3cc,	// (0x0006cfdb) main_cntbar_detail_cont_pane

0x82f0,	// (0x00066eff) scroll_pane_cp032_ParamLimits

0x82f0,	// (0x00066eff) scroll_pane_cp032

0xe3d8,	// (0x0006cfe7) cntbar_detail_list_event_pane_ParamLimits

0xe3d8,	// (0x0006cfe7) cntbar_detail_list_event_pane

0xe39e,	// (0x0006cfad) cntbar_detail_list_shct_pane

0x767b,	// (0x0006628a) aid_list_gen

0xe3ec,	// (0x0006cffb) aid_scroll

0xe3f5,	// (0x0006d004) aid_size_touch_scroll_bar

0x5d64,	// (0x00064973) aid_list_double

0xe3fe,	// (0x0006d00d) aid_list_single

0xe407,	// (0x0006d016) aid_list_single_lg

0x5d6d,	// (0x0006497c) aid_list_z_g_a_sm

0xe410,	// (0x0006d01f) aid_list_z_g_d

0x5d75,	// (0x00064984) aid_txt_z_prm

0x5d83,	// (0x00064992) aid_txt_z_prm_cp01

0x5d91,	// (0x000649a0) aid_txt_z_sec

0xe418,	// (0x0006d027) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe418,	// (0x0006d027) main_cntbar_detail_cont_pane_g1

0xe425,	// (0x0006d034) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe425,	// (0x0006d034) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0006ead6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0006ead6) main_cntbar_detail_cont_pane_g

0xe431,	// (0x0006d040) main_cntbar_detail_cont_pane_t1

0xe43f,	// (0x0006d04e) main_cntbar_detail_cont_pane_t2

0xe44d,	// (0x0006d05c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0006eadb) main_cntbar_detail_cont_pane_t

0xe45b,	// (0x0006d06a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe45b,	// (0x0006d06a) cell_cntbar_detail_list_shct_pane

0xe46f,	// (0x0006d07e) cntbar_detail_list_shct_pane_g1

0xe478,	// (0x0006d087) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0006eae2) cntbar_detail_list_shct_pane_g

0xe481,	// (0x0006d090) cntbar_detail_list_event_pane_g1_ParamLimits

0xe481,	// (0x0006d090) cntbar_detail_list_event_pane_g1

0xe48d,	// (0x0006d09c) cntbar_detail_list_event_pane_g2_ParamLimits

0xe48d,	// (0x0006d09c) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0006eae7) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0006eae7) cntbar_detail_list_event_pane_g

0xe4f9,	// (0x0006d108) cntbar_detail_list_event_pane_t1_ParamLimits

0xe4f9,	// (0x0006d108) cntbar_detail_list_event_pane_t1

0xe50e,	// (0x0006d11d) cntbar_detail_list_event_pane_t2_ParamLimits

0xe50e,	// (0x0006d11d) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0006eaf4) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0006eaf4) cntbar_detail_list_event_pane_t

0x1549,	// (0x00060158) cell_cntbar_detail_list_shct_pane_g1

0x8a4b,	// (0x0006765a) navi_pane_mv_g3

0xf115,	// (0x0006dd24) main_cntbar_detail_pane_ParamLimits

0x0541,	// (0x0005f150) main_notif_wgt_pane

0xbba4,	// (0x0006a7b3) aid_tch_main_mp4_pane_g4

0xbdaf,	// (0x0006a9be) popup_slider_window_cp02

0x3902,	// (0x00062511) list_recal_day_event_pane

0xe372,	// (0x0006cf81) cntbar_detail_btn_pane_ParamLimits

0xe372,	// (0x0006cf81) cntbar_detail_btn_pane

0xe382,	// (0x0006cf91) cntbar_detail_btn_pane_cp01_ParamLimits

0xe382,	// (0x0006cf91) cntbar_detail_btn_pane_cp01

0xe39e,	// (0x0006cfad) cntbar_detail_list_shct_pane_ParamLimits

0xe3aa,	// (0x0006cfb9) cntbar_detail_pane_g1_ParamLimits

0xe3aa,	// (0x0006cfb9) cntbar_detail_pane_g1

0xe3b6,	// (0x0006cfc5) cntbar_detail_pane_t1_ParamLimits

0xe3b6,	// (0x0006cfc5) cntbar_detail_pane_t1

0xe499,	// (0x0006d0a8) cntbar_detail_list_event_pane_g3_ParamLimits

0xe499,	// (0x0006d0a8) cntbar_detail_list_event_pane_g3

0xe4b1,	// (0x0006d0c0) cntbar_detail_list_event_pane_g4_ParamLimits

0xe4b1,	// (0x0006d0c0) cntbar_detail_list_event_pane_g4

0xe4c9,	// (0x0006d0d8) cntbar_detail_list_event_pane_g5_ParamLimits

0xe4c9,	// (0x0006d0d8) cntbar_detail_list_event_pane_g5

0xe4e1,	// (0x0006d0f0) cntbar_detail_list_event_pane_g6_ParamLimits

0xe4e1,	// (0x0006d0f0) cntbar_detail_list_event_pane_g6

0xe523,	// (0x0006d132) cntbar_detail_list_event_pane_t3_ParamLimits

0xe523,	// (0x0006d132) cntbar_detail_list_event_pane_t3

0xe535,	// (0x0006d144) popup_notif_wgt_window_ParamLimits

0xe535,	// (0x0006d144) popup_notif_wgt_window

0xe545,	// (0x0006d154) popup_submenu_window_cp01_ParamLimits

0xe545,	// (0x0006d154) popup_submenu_window_cp01

0x8ab7,	// (0x000676c6) bg_popup_window_pane_cp10

0xe553,	// (0x0006d162) listscroll_notif_wgt_pane

0xe55d,	// (0x0006d16c) list_notif_wgt_window

0xe566,	// (0x0006d175) scroll_pane_cp033

0x3b91,	// (0x000627a0) list_notif_wgt_row_pane_ParamLimits

0x3b91,	// (0x000627a0) list_notif_wgt_row_pane

0xe56f,	// (0x0006d17e) aid_size_list_notif_wgt_del

0xe578,	// (0x0006d187) list_notif_wgt_row_pane_g1

0xe580,	// (0x0006d18f) list_notif_wgt_row_pane_g2

0xe588,	// (0x0006d197) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0006eafb) list_notif_wgt_row_pane_g

0xe591,	// (0x0006d1a0) list_notif_wgt_row_pane_t1

0xe59f,	// (0x0006d1ae) list_notif_wgt_row_pane_t2

0xe5ad,	// (0x0006d1bc) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0006eb02) list_notif_wgt_row_pane_t

0x226b,	// (0x00060e7a) list_recal_day_event_pane_g1

0xe5bb,	// (0x0006d1ca) list_recal_day_event_pane_t1

0x0541,	// (0x0005f150) bg_button_pane_cp045

0xe5ca,	// (0x0006d1d9) cntbar_detail_btn_pane_t1

0x1043,	// (0x0005fc52) main_callh_pane_ParamLimits

0x1043,	// (0x0005fc52) main_callh_pane

0x0541,	// (0x0005f150) main_coverflow0_pane

0x0541,	// (0x0005f150) main_wgtman_pane

0xdbfc,	// (0x0006c80b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdbfc,	// (0x0006c80b) main_fs_bigclock_unlock_btn_pane

0xdf07,	// (0x0006cb16) bg_button_pane_cp16

0xdf1f,	// (0x0006cb2e) cell_tport_appsw_pane_g3

0xe5d8,	// (0x0006d1e7) cf0_flow_pane_ParamLimits

0xe5d8,	// (0x0006d1e7) cf0_flow_pane

0xe5e7,	// (0x0006d1f6) listscroll_cf0_pane

0xe5f0,	// (0x0006d1ff) main_cf0_pane_g1

0xe5fa,	// (0x0006d209) main_cf0_pane_t1_ParamLimits

0xe5fa,	// (0x0006d209) main_cf0_pane_t1

0xe60e,	// (0x0006d21d) main_cf0_pane_t2_ParamLimits

0xe60e,	// (0x0006d21d) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0006eb09) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0006eb09) main_cf0_pane_t

0xe622,	// (0x0006d231) scroll_pane_cp11

0xe62d,	// (0x0006d23c) cf0_flow_pane_g1

0xe635,	// (0x0006d244) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0006eb0e) cf0_flow_pane_g

0xe63d,	// (0x0006d24c) cf0_flow_pane_t1

0x0541,	// (0x0005f150) main_call6_pane

0x0541,	// (0x0005f150) main_calllock_pane

0xe64b,	// (0x0006d25a) call6_btn_grp_pane_ParamLimits

0xe64b,	// (0x0006d25a) call6_btn_grp_pane

0xe65a,	// (0x0006d269) call6_pane_g1_ParamLimits

0xe65a,	// (0x0006d269) call6_pane_g1

0xe669,	// (0x0006d278) popup_call6_1st_window_ParamLimits

0xe669,	// (0x0006d278) popup_call6_1st_window

0xe677,	// (0x0006d286) popup_call6_2nd_window_ParamLimits

0xe677,	// (0x0006d286) popup_call6_2nd_window

0xe685,	// (0x0006d294) cell_call6_btn_pane_ParamLimits

0xe685,	// (0x0006d294) cell_call6_btn_pane

0x8ab7,	// (0x000676c6) bg_popup_call2_in_pane_cp03

0xe694,	// (0x0006d2a3) popup_call6_1st_window_g1

0xe69c,	// (0x0006d2ab) popup_call6_1st_window_g2

0xe6a4,	// (0x0006d2b3) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0006eb13) popup_call6_1st_window_g

0xe6ac,	// (0x0006d2bb) popup_call6_1st_window_t1

0xe6bb,	// (0x0006d2ca) popup_call6_1st_window_t2

0xe6cb,	// (0x0006d2da) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0006eb1a) popup_call6_1st_window_t

0x8ab7,	// (0x000676c6) bg_popup_call2_in_pane_cp04

0xe694,	// (0x0006d2a3) popup_call6_2nd_window_g1

0xe69c,	// (0x0006d2ab) popup_call6_2nd_window_g2

0xe6a4,	// (0x0006d2b3) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0006eb13) popup_call6_2nd_window_g

0xe6ac,	// (0x0006d2bb) popup_call6_2nd_window_t1

0x0541,	// (0x0005f150) bg_button_pane_cp15

0xe6db,	// (0x0006d2ea) cell_call6_btn_pane_g1

0xe6e4,	// (0x0006d2f3) cell_call6_btn_pane_t1

0xe6f3,	// (0x0006d302) listscroll_wgtman_pane_ParamLimits

0xe6f3,	// (0x0006d302) listscroll_wgtman_pane

0xe702,	// (0x0006d311) wgtman_btn_pane_ParamLimits

0xe702,	// (0x0006d311) wgtman_btn_pane

0x86c0,	// (0x000672cf) aid_scroll_copy1

0xe710,	// (0x0006d31f) list_wgtman_pane

0xe71a,	// (0x0006d329) wgtman_btn_pane_g1_ParamLimits

0xe71a,	// (0x0006d329) wgtman_btn_pane_g1

0xe726,	// (0x0006d335) wgtman_btn_pane_t1_ParamLimits

0xe726,	// (0x0006d335) wgtman_btn_pane_t1

0xe738,	// (0x0006d347) wgtman_btn_pane_t2_ParamLimits

0xe738,	// (0x0006d347) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0006eb21) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0006eb21) wgtman_btn_pane_t

0xe74a,	// (0x0006d359) listrow_wgtman_pane_ParamLimits

0xe74a,	// (0x0006d359) listrow_wgtman_pane

0xe765,	// (0x0006d374) listrow_wgtman_pane_g1

0xe76e,	// (0x0006d37d) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0006eb26) listrow_wgtman_pane_g

0x5d9f,	// (0x000649ae) listrow_wgtman_pane_t1

0x5dad,	// (0x000649bc) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0006eb2b) listrow_wgtman_pane_t

0xe778,	// (0x0006d387) wait_bar_pane_cp09

0xe780,	// (0x0006d38f) main_calllock_btn_pane

0xe78a,	// (0x0006d399) main_calllock_pane_g1

0x0541,	// (0x0005f150) bg_button_pane_cp17

0xe796,	// (0x0006d3a5) main_calllock_btn_pane_g1

0xe79f,	// (0x0006d3ae) main_calllock_btn_pane_t1

0x0541,	// (0x0005f150) main_dialer3_pane

0x0541,	// (0x0005f150) main_fmrd2_pane

0x1549,	// (0x00060158) main_fs_bigclock_unlock_btn_pane_g1

0xe7b6,	// (0x0006d3c5) main_fs_bigclock_unlock_btn_pane_t1

0xe7c4,	// (0x0006d3d3) area_fmrd2_info_pane_ParamLimits

0xe7c4,	// (0x0006d3d3) area_fmrd2_info_pane

0xe7d3,	// (0x0006d3e2) area_fmrd2_visual_pane_ParamLimits

0xe7d3,	// (0x0006d3e2) area_fmrd2_visual_pane

0xe7e1,	// (0x0006d3f0) fmrd2_indi_pane_ParamLimits

0xe7e1,	// (0x0006d3f0) fmrd2_indi_pane

0xe7ee,	// (0x0006d3fd) area_fmrd2_visual_pane_g1

0xe7f6,	// (0x0006d405) area_fmrd2_visual_pane_t1

0xe806,	// (0x0006d415) area_fmrd2_visual_pane_t2

0xe816,	// (0x0006d425) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0006eb35) area_fmrd2_visual_pane_t

0xe826,	// (0x0006d435) area_fmrd2_info_pane_g1

0xe82e,	// (0x0006d43d) area_fmrd2_info_pane_t1

0xe83e,	// (0x0006d44d) area_fmrd2_info_pane_t2

0xe84e,	// (0x0006d45d) area_fmrd2_info_pane_t3

0xe85e,	// (0x0006d46d) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0006eb3c) area_fmrd2_info_pane_t

0xe86c,	// (0x0006d47b) fmrd2_indi_pane_t1

0xe87c,	// (0x0006d48b) fmrd2_indi_pane_t2

0xe88c,	// (0x0006d49b) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0006eb45) fmrd2_indi_pane_t

0x2f60,	// (0x00061b6f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2f60,	// (0x00061b6f) list_single_fs_bigclock_indicator_pane_g5

0x3004,	// (0x00061c13) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3004,	// (0x00061c13) list_single_fs_bigclock_indicator_pane_t5

0xe0a0,	// (0x0006ccaf) aid_cell_bcale_month_pane_ParamLimits

0xe0a0,	// (0x0006ccaf) aid_cell_bcale_month_pane

0xe0ac,	// (0x0006ccbb) bcale_month_pane_ParamLimits

0xe0ac,	// (0x0006ccbb) bcale_month_pane

0xe0ba,	// (0x0006ccc9) bcale_preview_pane_ParamLimits

0xe0ba,	// (0x0006ccc9) bcale_preview_pane

0x3afd,	// (0x0006270c) list_single_fs_bigclock_pane_t1_ParamLimits

0x3b17,	// (0x00062726) list_single_fs_bigclock_pane_t2_ParamLimits

0x3b17,	// (0x00062726) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0006eacc) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0006eacc) list_single_fs_bigclock_pane_t

0xe7ae,	// (0x0006d3bd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0006eb30) main_fs_bigclock_unlock_btn_pane_g

0xe89a,	// (0x0006d4a9) aid_dia3_key_size_ParamLimits

0xe89a,	// (0x0006d4a9) aid_dia3_key_size

0xe8a6,	// (0x0006d4b5) aid_dia3_listrow_size_ParamLimits

0xe8a6,	// (0x0006d4b5) aid_dia3_listrow_size

0xe8b4,	// (0x0006d4c3) dia3_keypad_fun_pane_ParamLimits

0xe8b4,	// (0x0006d4c3) dia3_keypad_fun_pane

0xe8c4,	// (0x0006d4d3) dia3_keypad_num_pane_ParamLimits

0xe8c4,	// (0x0006d4d3) dia3_keypad_num_pane

0xe8d4,	// (0x0006d4e3) dia3_listscroll_pane_ParamLimits

0xe8d4,	// (0x0006d4e3) dia3_listscroll_pane

0xe8e2,	// (0x0006d4f1) dia3_numentry_pane_ParamLimits

0xe8e2,	// (0x0006d4f1) dia3_numentry_pane

0xe8f0,	// (0x0006d4ff) dia3_list_pane

0xe8fb,	// (0x0006d50a) scroll_pane_cp12

0x0541,	// (0x0005f150) bg_dia3_numentry_pane

0xe906,	// (0x0006d515) dia3_numentry_pane_t1

0xe915,	// (0x0006d524) cell_dia3_key_num_pane

0xe91d,	// (0x0006d52c) cell_dia3_key0_fun_pane_ParamLimits

0xe91d,	// (0x0006d52c) cell_dia3_key0_fun_pane

0xe92a,	// (0x0006d539) cell_dia3_key1_fun_pane_ParamLimits

0xe92a,	// (0x0006d539) cell_dia3_key1_fun_pane

0xe937,	// (0x0006d546) dia3_listrow_pane

0x2c80,	// (0x0006188f) bg_dia3_numentry_pane_g1

0x0541,	// (0x0005f150) bg_button_pane_cp21

0xe940,	// (0x0006d54f) cell_dia3_key_num_pane_t1

0xe94e,	// (0x0006d55d) cell_dia3_key_num_pane_t2

0xe95d,	// (0x0006d56c) cell_dia3_key_num_pane_t3

0xe96c,	// (0x0006d57b) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0006eb4c) cell_dia3_key_num_pane_t

0x0541,	// (0x0005f150) bg_button_pane_cp19

0xe97b,	// (0x0006d58a) cell_dia3_key0_fun_pane_g1

0x0541,	// (0x0005f150) bg_button_pane_cp20

0xe983,	// (0x0006d592) cell_dia3_key1_fun_pane_g1

0xe98b,	// (0x0006d59a) area_left_week_number_pane

0xe369,	// (0x0006cf78) area_top_day_name_pane

0xe994,	// (0x0006d5a3) frame_month_view_pane

0xe99e,	// (0x0006d5ad) grid_month_view_pane

0xe9a8,	// (0x0006d5b7) cell_top_day_name_pane_ParamLimits

0xe9a8,	// (0x0006d5b7) cell_top_day_name_pane

0xe9c2,	// (0x0006d5d1) cell_area_left_week_number_pane_ParamLimits

0xe9c2,	// (0x0006d5d1) cell_area_left_week_number_pane

0xe9d6,	// (0x0006d5e5) cell_month_view_pane_ParamLimits

0xe9d6,	// (0x0006d5e5) cell_month_view_pane

0xe9f3,	// (0x0006d602) frm_month_g1

0xe9fc,	// (0x0006d60b) frm_month_g2

0xea06,	// (0x0006d615) frm_month_g3

0xea10,	// (0x0006d61f) frm_month_g4

0xea1a,	// (0x0006d629) frm_month_g5

0xea24,	// (0x0006d633) frm_month_g6

0xea2e,	// (0x0006d63d) frm_month_g7

0xea38,	// (0x0006d647) frm_month_g8

0xea41,	// (0x0006d650) frm_month_g9

0xea4a,	// (0x0006d659) frm_month_g10

0xea53,	// (0x0006d662) frm_month_g11

0xea5c,	// (0x0006d66b) frm_month_g12

0xea65,	// (0x0006d674) frm_month_g13

0xea6e,	// (0x0006d67d) frm_month_g14

0xea77,	// (0x0006d686) frm_month_g15

0xea82,	// (0x0006d691) frm_month_g16

0x000f,

0xff46,	// (0x0006eb55) frm_month_g

0xea8d,	// (0x0006d69c) cell_top_day_name_pane_t1

0xea9c,	// (0x0006d6ab) cell_area_left_week_number_pane_g1

0xea8d,	// (0x0006d69c) cell_area_left_week_number_pane_t1

0x1549,	// (0x00060158) cell_month_view_pane_g1

0xeaa4,	// (0x0006d6b3) cell_month_view_pane_t1

0x0541,	// (0x0005f150) main_fps_pane

0x3235,	// (0x00061e44) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3235,	// (0x00061e44) cmail_ddmenu_btn02_pane_cp1

0x3251,	// (0x00061e60) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3251,	// (0x00061e60) cmail_ddmenu_btn02_pane_cp2

0xe268,	// (0x0006ce77) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe268,	// (0x0006ce77) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0006ea7d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0006ea7d) cmail_ddmenu_btn02_pane_g

0xe286,	// (0x0006ce95) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe286,	// (0x0006ce95) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0006ea82) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0006ea82) cmail_ddmenu_btn02_pane_t

0xeab3,	// (0x0006d6c2) fps_text_pane_ParamLimits

0xeab3,	// (0x0006d6c2) fps_text_pane

0xeac0,	// (0x0006d6cf) main_fps_pane_g1_ParamLimits

0xeac0,	// (0x0006d6cf) main_fps_pane_g1

0xeace,	// (0x0006d6dd) wait_bar_pane_cp010_ParamLimits

0xeace,	// (0x0006d6dd) wait_bar_pane_cp010

0xeada,	// (0x0006d6e9) fps_text_pane_t1_ParamLimits

0xeada,	// (0x0006d6e9) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
