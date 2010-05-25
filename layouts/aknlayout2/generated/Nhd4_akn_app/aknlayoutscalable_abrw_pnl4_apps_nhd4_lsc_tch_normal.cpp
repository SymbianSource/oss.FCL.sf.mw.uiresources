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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002d949 };

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
0x1afb,	// (0x0002f444) Screen

0x1b07,	// (0x0002f450) application_window

0x1b37,	// (0x0002f480) area_bottom_pane_ParamLimits

0x1b37,	// (0x0002f480) area_bottom_pane

0x03cf,	// (0x0002dd18) area_top_pane_ParamLimits

0x03cf,	// (0x0002dd18) area_top_pane

0x1b94,	// (0x0002f4dd) call_video_uplink_pane_ParamLimits

0x1b94,	// (0x0002f4dd) call_video_uplink_pane

0x045d,	// (0x0002dda6) main_pane_ParamLimits

0x045d,	// (0x0002dda6) main_pane

0xc3b8,	// (0x00039d01) context_pane

0x4a78,	// (0x000323c1) navi_pane

0x4aaa,	// (0x000323f3) popup_cale_events_window_ParamLimits

0x4aaa,	// (0x000323f3) popup_cale_events_window

0xc3cb,	// (0x00039d14) popup_mup_playback_window

0x4ac2,	// (0x0003240b) signal_pane

0xa294,	// (0x00037bdd) main_browser_pane

0xa479,	// (0x00037dc2) main_burst_pane

0x0855,	// (0x0002e19e) main_calc_pane

0xc39e,	// (0x00039ce7) main_cale_day_pane

0x0869,	// (0x0002e1b2) main_cale_month_pane

0xc39e,	// (0x00039ce7) main_cale_week_pane

0xa479,	// (0x00037dc2) main_call_pane

0x9f68,	// (0x000378b1) main_call_poc_pane

0xa479,	// (0x00037dc2) main_camera_pane

0xa479,	// (0x00037dc2) main_chi_dic_pane

0xacf5,	// (0x0003863e) main_clock_pane

0x9f68,	// (0x000378b1) main_fmradio_pane

0xa479,	// (0x00037dc2) main_graph_messa_pane

0x9f68,	// (0x000378b1) main_help_pane

0xa294,	// (0x00037bdd) main_im_pane

0xa1c3,	// (0x00037b0c) main_image_pane_ParamLimits

0xa1c3,	// (0x00037b0c) main_image_pane

0x9f68,	// (0x000378b1) main_location2_pane

0xa479,	// (0x00037dc2) main_location_pane

0xa1c3,	// (0x00037b0c) main_messa_pane

0x9f68,	// (0x000378b1) main_mp2_pane

0xa479,	// (0x00037dc2) main_mp_pane

0x9f68,	// (0x000378b1) main_msg_pane

0x9f68,	// (0x000378b1) main_mup_eq_pane

0x9f68,	// (0x000378b1) main_mup_pane

0xa294,	// (0x00037bdd) main_notes_pane

0x9f68,	// (0x000378b1) main_pec_pane

0x9f68,	// (0x000378b1) main_phob_pane

0x9f68,	// (0x000378b1) main_pinb_pane

0x9f68,	// (0x000378b1) main_postcard_pane

0x9f68,	// (0x000378b1) main_qdial_pane

0xa479,	// (0x00037dc2) main_skin_pane

0x9f68,	// (0x000378b1) main_smil2_pane

0xa479,	// (0x00037dc2) main_smil_pane

0xa479,	// (0x00037dc2) main_video_pane

0xa479,	// (0x00037dc2) main_video_tele_pane

0xa1c3,	// (0x00037b0c) main_viewer_pane_ParamLimits

0xa1c3,	// (0x00037b0c) main_viewer_pane

0xa479,	// (0x00037dc2) main_vorec_pane

0x08bb,	// (0x0002e204) popup_blid_sat_info_window_ParamLimits

0x08bb,	// (0x0002e204) popup_blid_sat_info_window

0x0913,	// (0x0002e25c) popup_dyc_status_message_window_ParamLimits

0x0913,	// (0x0002e25c) popup_dyc_status_message_window

0x092b,	// (0x0002e274) popup_grid_large_graphic_window_ParamLimits

0x092b,	// (0x0002e274) popup_grid_large_graphic_window

0x09db,	// (0x0002e324) popup_loc_request_window_ParamLimits

0x09db,	// (0x0002e324) popup_loc_request_window

0x0ad7,	// (0x0002e420) popup_wml_address_window_ParamLimits

0x0ad7,	// (0x0002e420) popup_wml_address_window

0x4868,	// (0x000321b1) call_muted_g1

0x451c,	// (0x00031e65) popup_call_audio_conf_window_ParamLimits

0x451c,	// (0x00031e65) popup_call_audio_conf_window

0x487c,	// (0x000321c5) popup_call_audio_first_window_ParamLimits

0x487c,	// (0x000321c5) popup_call_audio_first_window

0x48f2,	// (0x0003223b) popup_call_audio_in_window_ParamLimits

0x48f2,	// (0x0003223b) popup_call_audio_in_window

0x492e,	// (0x00032277) popup_call_audio_out_window_ParamLimits

0x492e,	// (0x00032277) popup_call_audio_out_window

0x4968,	// (0x000322b1) popup_call_audio_second_window_ParamLimits

0x4968,	// (0x000322b1) popup_call_audio_second_window

0x49be,	// (0x00032307) popup_call_audio_wait_window_ParamLimits

0x49be,	// (0x00032307) popup_call_audio_wait_window

0x49f3,	// (0x0003233c) popup_number_entry_window_ParamLimits

0x49f3,	// (0x0003233c) popup_number_entry_window

0x9b55,	// (0x0003749e) bg_popup_call_pane_cp05_ParamLimits

0x9b55,	// (0x0003749e) bg_popup_call_pane_cp05

0x9b75,	// (0x000374be) popup_number_entry_window_t1

0x9b88,	// (0x000374d1) popup_number_entry_window_t2

0x9b9a,	// (0x000374e3) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003ca13) popup_number_entry_window_t

0x9bac,	// (0x000374f5) text_title_cp2

0x9bbf,	// (0x00037508) bg_popup_call_pane_cp_ParamLimits

0x9bbf,	// (0x00037508) bg_popup_call_pane_cp

0x9bcd,	// (0x00037516) call_thumbnail_pane

0x9bd5,	// (0x0003751e) popup_call_audio_in_window_g1_ParamLimits

0x9bd5,	// (0x0003751e) popup_call_audio_in_window_g1

0x9be1,	// (0x0003752a) popup_call_audio_in_window_g2_ParamLimits

0x9be1,	// (0x0003752a) popup_call_audio_in_window_g2

0x9bed,	// (0x00037536) popup_call_audio_in_window_g3_ParamLimits

0x9bed,	// (0x00037536) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003ca1c) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003ca1c) popup_call_audio_in_window_g

0x9bf9,	// (0x00037542) popup_call_audio_in_window_t1_ParamLimits

0x9bf9,	// (0x00037542) popup_call_audio_in_window_t1

0x9c15,	// (0x0003755e) popup_call_audio_in_window_t2_ParamLimits

0x9c15,	// (0x0003755e) popup_call_audio_in_window_t2

0x9c31,	// (0x0003757a) popup_call_audio_in_window_t3_ParamLimits

0x9c31,	// (0x0003757a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003ca23) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003ca23) popup_call_audio_in_window_t

0x9bbf,	// (0x00037508) bg_popup_call_pane_cp01_ParamLimits

0x9bbf,	// (0x00037508) bg_popup_call_pane_cp01

0x9bcd,	// (0x00037516) call_thumbnail_pane_cp02

0x9c44,	// (0x0003758d) call_type_pane_cp022

0x9c4c,	// (0x00037595) popup_call_audio_out_window_g1_ParamLimits

0x9c4c,	// (0x00037595) popup_call_audio_out_window_g1

0x9c5e,	// (0x000375a7) popup_call_audio_out_window_g2_ParamLimits

0x9c5e,	// (0x000375a7) popup_call_audio_out_window_g2

0x9c6a,	// (0x000375b3) popup_call_audio_out_window_g3_ParamLimits

0x9c6a,	// (0x000375b3) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003ca2a) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003ca2a) popup_call_audio_out_window_g

0x9c7c,	// (0x000375c5) popup_call_audio_out_window_t1_ParamLimits

0x9c7c,	// (0x000375c5) popup_call_audio_out_window_t1

0x9c94,	// (0x000375dd) popup_call_audio_out_window_t2_ParamLimits

0x9c94,	// (0x000375dd) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003ca31) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003ca31) popup_call_audio_out_window_t

0x9ca9,	// (0x000375f2) bg_popup_call_pane_ParamLimits

0x9ca9,	// (0x000375f2) bg_popup_call_pane

0x1c0b,	// (0x0002f554) call_thumbnail_pane_cp_ParamLimits

0x1c0b,	// (0x0002f554) call_thumbnail_pane_cp

0x9d2d,	// (0x00037676) call_type_pane_cp01_ParamLimits

0x9d2d,	// (0x00037676) call_type_pane_cp01

0x9d71,	// (0x000376ba) popup_call_audio_first_window_g1_ParamLimits

0x9d71,	// (0x000376ba) popup_call_audio_first_window_g1

0x9dbd,	// (0x00037706) popup_call_audio_first_window_g2_ParamLimits

0x9dbd,	// (0x00037706) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003ca36) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003ca36) popup_call_audio_first_window_g

0x9e01,	// (0x0003774a) popup_call_audio_first_window_t1_ParamLimits

0x9e01,	// (0x0003774a) popup_call_audio_first_window_t1

0x9ead,	// (0x000377f6) popup_call_audio_first_window_t4_ParamLimits

0x9ead,	// (0x000377f6) popup_call_audio_first_window_t4

0x9f39,	// (0x00037882) popup_call_audio_first_window_t5_ParamLimits

0x9f39,	// (0x00037882) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003ca3b) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003ca3b) popup_call_audio_first_window_t

0x9f68,	// (0x000378b1) bg_popup_call_pane_cp02

0x9f72,	// (0x000378bb) call_type_pane_cp023

0x9f7a,	// (0x000378c3) popup_call_audio_wait_window_g1

0x9f82,	// (0x000378cb) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003ca42) popup_call_audio_wait_window_g

0x9f8a,	// (0x000378d3) popup_call_audio_wait_window_t3

0x9f98,	// (0x000378e1) bg_popup_call_pane_cp03_ParamLimits

0x9f98,	// (0x000378e1) bg_popup_call_pane_cp03

0x9ff8,	// (0x00037941) call_thumbnail_pane_cp011_ParamLimits

0x9ff8,	// (0x00037941) call_thumbnail_pane_cp011

0xa004,	// (0x0003794d) call_type_pane_cp034_ParamLimits

0xa004,	// (0x0003794d) call_type_pane_cp034

0xa040,	// (0x00037989) popup_call_audio_second_window_g1_ParamLimits

0xa040,	// (0x00037989) popup_call_audio_second_window_g1

0xa07c,	// (0x000379c5) popup_call_audio_second_window_g2_ParamLimits

0xa07c,	// (0x000379c5) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003ca47) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003ca47) popup_call_audio_second_window_g

0xa0b8,	// (0x00037a01) popup_call_audio_second_window_t1_ParamLimits

0xa0b8,	// (0x00037a01) popup_call_audio_second_window_t1

0xa139,	// (0x00037a82) popup_call_audio_second_window_t2_ParamLimits

0xa139,	// (0x00037a82) popup_call_audio_second_window_t2

0xa16f,	// (0x00037ab8) popup_call_audio_second_window_t3_ParamLimits

0xa16f,	// (0x00037ab8) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003ca4c) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003ca4c) popup_call_audio_second_window_t

0x9f68,	// (0x000378b1) bg_popup_call_pane_cp04

0xa1a5,	// (0x00037aee) list_conf_pane

0xa1ad,	// (0x00037af6) popup_call_audio_conf_window_t1

0xa1bb,	// (0x00037b04) call_thumbnail_pane_g1

0xa1c3,	// (0x00037b0c) bg_pinb_pane_ParamLimits

0xa1c3,	// (0x00037b0c) bg_pinb_pane

0xa1d1,	// (0x00037b1a) find_pinb_pane

0xa1da,	// (0x00037b23) listscroll_pinb_pane_ParamLimits

0xa1da,	// (0x00037b23) listscroll_pinb_pane

0xa1e9,	// (0x00037b32) pinb_bg_pane_g1

0x1c2f,	// (0x0002f578) pinb_bg_pane_g2

0x1c3b,	// (0x0002f584) pinb_bg_pane_g3

0x1c47,	// (0x0002f590) pinb_bg_pane_g4

0x1c53,	// (0x0002f59c) pinb_bg_pane_g5

0x1c5f,	// (0x0002f5a8) pinb_bg_pane_g6

0x1c6a,	// (0x0002f5b3) pinb_bg_pane_g7

0x1c75,	// (0x0002f5be) pinb_bg_pane_g8

0x1c80,	// (0x0002f5c9) pinb_bg_pane_g9

0x1c8a,	// (0x0002f5d3) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003ca53) pinb_bg_pane_g

0x1ca7,	// (0x0002f5f0) grid_pinb_pane

0x1cb0,	// (0x0002f5f9) list_pinb_pane

0x1cb9,	// (0x0002f602) scroll_pane_cp01_ParamLimits

0x1cb9,	// (0x0002f602) scroll_pane_cp01

0xa1f3,	// (0x00037b3c) find_pinb_pane_g1_ParamLimits

0xa1f3,	// (0x00037b3c) find_pinb_pane_g1

0xa20b,	// (0x00037b54) find_pinb_pane_t1

0xa21d,	// (0x00037b66) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003ca6d) find_pinb_pane_t

0xa232,	// (0x00037b7b) input_focus_pane_cp01_ParamLimits

0xa232,	// (0x00037b7b) input_focus_pane_cp01

0x1ccb,	// (0x0002f614) cell_pinb_pane_ParamLimits

0x1ccb,	// (0x0002f614) cell_pinb_pane

0x1cf6,	// (0x0002f63f) cell_pinb_pane_g1_ParamLimits

0x1cf6,	// (0x0002f63f) cell_pinb_pane_g1

0xa23e,	// (0x00037b87) cell_pinb_pane_g2_ParamLimits

0xa23e,	// (0x00037b87) cell_pinb_pane_g2

0xa24a,	// (0x00037b93) cell_pinb_pane_g3_ParamLimits

0xa24a,	// (0x00037b93) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003ca72) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003ca72) cell_pinb_pane_g

0x9f68,	// (0x000378b1) grid_highlight_pane_cp01

0x1d09,	// (0x0002f652) list_pinb_item_pane_ParamLimits

0x1d09,	// (0x0002f652) list_pinb_item_pane

0x9f68,	// (0x000378b1) list_highlight_pane_cp02

0x1d1c,	// (0x0002f665) list_pinb_item_pane_g1_ParamLimits

0x1d1c,	// (0x0002f665) list_pinb_item_pane_g1

0x1d29,	// (0x0002f672) list_pinb_item_pane_g2_ParamLimits

0x1d29,	// (0x0002f672) list_pinb_item_pane_g2

0x1d35,	// (0x0002f67e) list_pinb_item_pane_g3_ParamLimits

0x1d35,	// (0x0002f67e) list_pinb_item_pane_g3

0x1d46,	// (0x0002f68f) list_pinb_item_pane_g4_ParamLimits

0x1d46,	// (0x0002f68f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003ca79) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003ca79) list_pinb_item_pane_g

0x1d52,	// (0x0002f69b) list_pinb_item_pane_t1_ParamLimits

0x1d52,	// (0x0002f69b) list_pinb_item_pane_t1

0x05f7,	// (0x0002df40) calc_display_pane

0x061f,	// (0x0002df68) calc_paper_pane

0x0642,	// (0x0002df8b) grid_calc_pane

0x9f68,	// (0x000378b1) bg_list_pane_cp01

0x1d71,	// (0x0002f6ba) clock_g1

0x1d79,	// (0x0002f6c2) clock_g2

0x0001,

0xf139,	// (0x0003ca82) clock_g

0x1d81,	// (0x0002f6ca) clock_t1_ParamLimits

0x1d81,	// (0x0002f6ca) clock_t1

0x1d96,	// (0x0002f6df) clock_t2_ParamLimits

0x1d96,	// (0x0002f6df) clock_t2

0x1da8,	// (0x0002f6f1) clock_t3_ParamLimits

0x1da8,	// (0x0002f6f1) clock_t3

0x1dba,	// (0x0002f703) clock_t4_ParamLimits

0x1dba,	// (0x0002f703) clock_t4

0x1dcc,	// (0x0002f715) clock_t5_ParamLimits

0x1dcc,	// (0x0002f715) clock_t5

0x1de1,	// (0x0002f72a) clock_t6_ParamLimits

0x1de1,	// (0x0002f72a) clock_t6

0x1df3,	// (0x0002f73c) clock_t7_ParamLimits

0x1df3,	// (0x0002f73c) clock_t7

0x1e05,	// (0x0002f74e) clock_t8_ParamLimits

0x1e05,	// (0x0002f74e) clock_t8

0x1e19,	// (0x0002f762) clock_t9_ParamLimits

0x1e19,	// (0x0002f762) clock_t9

0x0008,

0xf13e,	// (0x0003ca87) clock_t_ParamLimits

0xf13e,	// (0x0003ca87) clock_t

0xa256,	// (0x00037b9f) popup_clock_analogue_window_cp02

0xa256,	// (0x00037b9f) popup_clock_digital_window_cp01

0xa25e,	// (0x00037ba7) listscroll_help_pane

0x9f68,	// (0x000378b1) phob_pre_status_pane

0xa268,	// (0x00037bb1) grid_qdial_pane

0xa1c3,	// (0x00037b0c) listscroll_mce_pane

0xa1c3,	// (0x00037b0c) bg_notes_pane

0xa272,	// (0x00037bbb) list_notes_pane

0x1e2d,	// (0x0002f776) scroll_pane_cp06

0xa280,	// (0x00037bc9) bg_calc_paper_pane

0x1e41,	// (0x0002f78a) list_calc_pane

0xa294,	// (0x00037bdd) bg_calc_display_pane

0x0670,	// (0x0002dfb9) calc_display_pane_t1

0x0682,	// (0x0002dfcb) calc_display_pane_t2

0x1e5b,	// (0x0002f7a4) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003ca9a) calc_display_pane_t

0x0694,	// (0x0002dfdd) cell_calc_pane_ParamLimits

0x0694,	// (0x0002dfdd) cell_calc_pane

0xa2a0,	// (0x00037be9) bg_calc_paper_pane_g1

0xa2ac,	// (0x00037bf5) bg_calc_paper_pane_g2

0xa2b8,	// (0x00037c01) bg_calc_paper_pane_g3

0xa2c4,	// (0x00037c0d) bg_calc_paper_pane_g4

0xa2d0,	// (0x00037c19) bg_calc_paper_pane_g5

0x1e6d,	// (0x0002f7b6) bg_calc_paper_pane_g6

0x1e7c,	// (0x0002f7c5) bg_calc_paper_pane_g7

0x1e8b,	// (0x0002f7d4) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003caa1) bg_calc_paper_pane_g

0x1e9e,	// (0x0002f7e7) calc_bg_paper_pane_g9

0x1eb1,	// (0x0002f7fa) list_calc_item_pane_ParamLimits

0x1eb1,	// (0x0002f7fa) list_calc_item_pane

0xa2dc,	// (0x00037c25) list_calc_item_pane_g1

0x1eca,	// (0x0002f813) list_calc_item_pane_t1_ParamLimits

0x1eca,	// (0x0002f813) list_calc_item_pane_t1

0x06cb,	// (0x0002e014) list_calc_item_pane_t2_ParamLimits

0x06cb,	// (0x0002e014) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003cab2) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003cab2) list_calc_item_pane_t

0xa2e9,	// (0x00037c32) cell_calc_pane_g1

0xa2f3,	// (0x00037c3c) grid_highlight_pane_cp02

0xa315,	// (0x00037c5e) bg_calc_display_pane_g1

0x1edc,	// (0x0002f825) bg_calc_display_pane_g2

0xa31e,	// (0x00037c67) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003cabc) bg_calc_display_pane_g

0x06fd,	// (0x0002e046) cell_qdial_pane_ParamLimits

0x06fd,	// (0x0002e046) cell_qdial_pane

0x1ee6,	// (0x0002f82f) cell_qdial_pane_g1_ParamLimits

0x1ee6,	// (0x0002f82f) cell_qdial_pane_g1

0x1efc,	// (0x0002f845) cell_qdial_pane_g2_ParamLimits

0x1efc,	// (0x0002f845) cell_qdial_pane_g2

0xa327,	// (0x00037c70) cell_qdial_pane_g3_ParamLimits

0xa327,	// (0x00037c70) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003cac3) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003cac3) cell_qdial_pane_g

0x1f22,	// (0x0002f86b) cell_qdial_pane_t1_ParamLimits

0x1f22,	// (0x0002f86b) cell_qdial_pane_t1

0x1f3a,	// (0x0002f883) cell_qdial_pane_t2_ParamLimits

0x1f3a,	// (0x0002f883) cell_qdial_pane_t2

0x1f4d,	// (0x0002f896) cell_qdial_pane_t3_ParamLimits

0x1f4d,	// (0x0002f896) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003cacc) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003cacc) cell_qdial_pane_t

0x9f68,	// (0x000378b1) grid_highlight_pane_cp04

0xa333,	// (0x00037c7c) thumbnail_qdial_pane_ParamLimits

0xa333,	// (0x00037c7c) thumbnail_qdial_pane

0xa38f,	// (0x00037cd8) list_help_pane

0xa398,	// (0x00037ce1) scroll_pane_cp02

0xa52e,	// (0x00037e77) help_list_pane_t1_ParamLimits

0xa52e,	// (0x00037e77) help_list_pane_t1

0x1f60,	// (0x0002f8a9) bg_notes_pane_g2

0x1f68,	// (0x0002f8b1) bg_notes_pane_g3

0x1f70,	// (0x0002f8b9) notes_bg_pane_g1

0x1f78,	// (0x0002f8c1) notes_bg_pane_g4

0x1f80,	// (0x0002f8c9) notes_bg_pane_g5

0x1f88,	// (0x0002f8d1) notes_bg_pane_g6

0x1f90,	// (0x0002f8d9) notes_bg_pane_g7

0x1f98,	// (0x0002f8e1) notes_bg_pane_g8

0x1fa0,	// (0x0002f8e9) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003caea) notes_bg_pane_g

0x1fa8,	// (0x0002f8f1) list_notes_text_pane_ParamLimits

0x1fa8,	// (0x0002f8f1) list_notes_text_pane

0xa3a1,	// (0x00037cea) list_notes_text_pane_g1

0xa3aa,	// (0x00037cf3) list_notes_text_pane_t1

0x1fbe,	// (0x0002f907) listscroll_cale_week_pane

0x1fea,	// (0x0002f933) bg_cale_heading_pane

0xa3d2,	// (0x00037d1b) bg_cale_pane_cp01

0x2002,	// (0x0002f94b) cale_week_corner_pane

0x2021,	// (0x0002f96a) cale_week_day_heading_pane

0x203e,	// (0x0002f987) cale_week_scroll_pane_g1

0x2051,	// (0x0002f99a) cale_week_scroll_pane_g2

0x2069,	// (0x0002f9b2) cale_week_scroll_pane_g3

0x2081,	// (0x0002f9ca) cale_week_scroll_pane_g4

0x2099,	// (0x0002f9e2) cale_week_scroll_pane_g5

0x20b9,	// (0x0002fa02) cale_week_scroll_pane_g6

0x20d9,	// (0x0002fa22) cale_week_scroll_pane_g7

0x20f9,	// (0x0002fa42) cale_week_scroll_pane_g8

0x211d,	// (0x0002fa66) cale_week_scroll_pane_g9

0x2135,	// (0x0002fa7e) cale_week_scroll_pane_g10

0x214d,	// (0x0002fa96) cale_week_scroll_pane_g11

0x2165,	// (0x0002faae) cale_week_scroll_pane_g12

0x217d,	// (0x0002fac6) cale_week_scroll_pane_g13

0x217d,	// (0x0002fac6) cale_week_scroll_pane_g14

0x217d,	// (0x0002fac6) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003caf9) cale_week_scroll_pane_g

0x21b9,	// (0x0002fb02) cale_week_time_pane

0x21dd,	// (0x0002fb26) grid_cale_week_pane

0xa401,	// (0x00037d4a) scroll_pane_cp08

0x2203,	// (0x0002fb4c) cell_cale_week_pane_ParamLimits

0x2203,	// (0x0002fb4c) cell_cale_week_pane

0x2291,	// (0x0002fbda) cale_week_day_heading_pane_t1

0x22bb,	// (0x0002fc04) cale_week_day_heading_pane_t2

0x22ea,	// (0x0002fc33) cale_week_day_heading_pane_t3

0x2319,	// (0x0002fc62) cale_week_day_heading_pane_t4

0x2348,	// (0x0002fc91) cale_week_day_heading_pane_t5

0x237f,	// (0x0002fcc8) cale_week_day_heading_pane_t6

0x23b6,	// (0x0002fcff) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003cb1a) cale_week_day_heading_pane_t

0xa41e,	// (0x00037d67) bg_cale_side_pane

0x0711,	// (0x0002e05a) cale_week_time_pane_t1

0x072b,	// (0x0002e074) cale_week_time_pane_t2

0x0745,	// (0x0002e08e) cale_week_time_pane_t3

0x075f,	// (0x0002e0a8) cale_week_time_pane_t4

0x0779,	// (0x0002e0c2) cale_week_time_pane_t5

0x0793,	// (0x0002e0dc) cale_week_time_pane_t6

0x07ad,	// (0x0002e0f6) cale_week_time_pane_t7

0x07c7,	// (0x0002e110) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003cb29) cale_week_time_pane_t

0x23e0,	// (0x0002fd29) cell_cale_week_pane_g2

0x2404,	// (0x0002fd4d) cell_cale_week_pane_g3_ParamLimits

0x2404,	// (0x0002fd4d) cell_cale_week_pane_g3

0xa42c,	// (0x00037d75) grid_highlight_pane_cp07

0xa434,	// (0x00037d7d) listscroll_gms_pane

0xa43e,	// (0x00037d87) grid_gms_pane

0xa447,	// (0x00037d90) listscroll_gms_pane_g1

0xa44f,	// (0x00037d98) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003cb3a) listscroll_gms_pane_g

0x241c,	// (0x0002fd65) scroll_pane_cp010

0x2427,	// (0x0002fd70) cell_gms_pane_ParamLimits

0x2427,	// (0x0002fd70) cell_gms_pane

0x2439,	// (0x0002fd82) cell_gms_pane_g1

0xa457,	// (0x00037da0) cell_gms_pane_g2

0xa45f,	// (0x00037da8) cell_gms_pane_g3

0xa468,	// (0x00037db1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003cb3f) cell_gms_pane_g

0xa471,	// (0x00037dba) grid_highlight_pane_cp09

0x4812,	// (0x0003215b) phob_pre_status_pane_g1

0x481a,	// (0x00032163) phob_pre_status_pane_g2

0x4822,	// (0x0003216b) phob_pre_status_pane_g3

0x482a,	// (0x00032173) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0003cf3d) phob_pre_status_pane_g

0x483a,	// (0x00032183) phob_pre_status_pane_t1

0x4848,	// (0x00032191) phob_pre_status_pane_t2

0x4858,	// (0x000321a1) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0003cf48) phob_pre_status_pane_t

0xa479,	// (0x00037dc2) bg_list_pane_cp05

0x2449,	// (0x0002fd92) grid_vorec_pane

0x2451,	// (0x0002fd9a) vorec_t1

0x245f,	// (0x0002fda8) vorec_t2

0x246d,	// (0x0002fdb6) vorec_t3

0x247b,	// (0x0002fdc4) vorec_t4

0x1ad5,	// (0x0002f41e) vorec_t5

0x1ae3,	// (0x0002f42c) vorec_t6

0x0004,

0xf1ff,	// (0x0003cb48) vorec_t

0x1af1,	// (0x0002f43a) wait_bar_pane_cp01

0x2497,	// (0x0002fde0) cell_vorec_pane_ParamLimits

0x2497,	// (0x0002fde0) cell_vorec_pane

0x24aa,	// (0x0002fdf3) cell_vorec_pane_g1

0x9f68,	// (0x000378b1) grid_highlight_pane_cp05

0x24cc,	// (0x0002fe15) cams_zoom_pane

0x24db,	// (0x0002fe24) image_vga_pane

0x24f5,	// (0x0002fe3e) main_camera_pane_g1

0x2507,	// (0x0002fe50) main_camera_pane_g2

0x2517,	// (0x0002fe60) main_camera_pane_g3

0x2527,	// (0x0002fe70) main_camera_pane_g4

0x2537,	// (0x0002fe80) main_camera_pane_g5

0x2547,	// (0x0002fe90) main_camera_pane_g6

0x2557,	// (0x0002fea0) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003cb53) main_camera_pane_g

0x2567,	// (0x0002feb0) main_camera_pane_t1

0x257d,	// (0x0002fec6) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003cb64) main_camera_pane_t

0x25b7,	// (0x0002ff00) cams_zoom_pane_cp_ParamLimits

0x25b7,	// (0x0002ff00) cams_zoom_pane_cp

0x25df,	// (0x0002ff28) image_cif_pane_ParamLimits

0x25df,	// (0x0002ff28) image_cif_pane

0x261a,	// (0x0002ff63) image_subqcif_pane

0x2622,	// (0x0002ff6b) main_video_pane_g1_ParamLimits

0x2622,	// (0x0002ff6b) main_video_pane_g1

0x2646,	// (0x0002ff8f) main_video_pane_g2_ParamLimits

0x2646,	// (0x0002ff8f) main_video_pane_g2

0x267a,	// (0x0002ffc3) main_video_pane_g3_ParamLimits

0x267a,	// (0x0002ffc3) main_video_pane_g3

0x26a8,	// (0x0002fff1) main_video_pane_g4_ParamLimits

0x26a8,	// (0x0002fff1) main_video_pane_g4

0x26d6,	// (0x0003001f) main_video_pane_g5_ParamLimits

0x26d6,	// (0x0003001f) main_video_pane_g5

0xa48d,	// (0x00037dd6) main_video_pane_g6_ParamLimits

0xa48d,	// (0x00037dd6) main_video_pane_g6

0x0006,

0xf220,	// (0x0003cb69) main_video_pane_g_ParamLimits

0xf220,	// (0x0003cb69) main_video_pane_g

0x26ff,	// (0x00030048) main_video_pane_t1_ParamLimits

0x26ff,	// (0x00030048) main_video_pane_t1

0xa54c,	// (0x00037e95) cams_zoom_pane_g1

0xa555,	// (0x00037e9e) cams_zoom_pane_g2

0xa55e,	// (0x00037ea7) cams_zoom_pane_g3

0xa567,	// (0x00037eb0) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003cb78) cams_zoom_pane_g

0x275c,	// (0x000300a5) grid_cams_pane

0x2776,	// (0x000300bf) linegrid_cams_pane

0x2789,	// (0x000300d2) cell_cams_pane_ParamLimits

0x2789,	// (0x000300d2) cell_cams_pane

0xa570,	// (0x00037eb9) cams_burst_image_pane

0xa578,	// (0x00037ec1) cell_cams_pane_g1

0x9f68,	// (0x000378b1) grid_highlight_pane_cp03

0xa2e9,	// (0x00037c32) mp_bg_pane_g1

0x9f68,	// (0x000378b1) bg_list_pane_cp03

0xc2c3,	// (0x00039c0c) bg_mp_pane

0xc2cb,	// (0x00039c14) grid_mp_pane

0xc2d3,	// (0x00039c1c) media_player_g1

0xc2db,	// (0x00039c24) media_player_t1

0xc2e9,	// (0x00039c32) media_player_t2

0xc2f7,	// (0x00039c40) media_player_t3

0xc305,	// (0x00039c4e) media_player_t4

0xc313,	// (0x00039c5c) media_player_t5

0xc321,	// (0x00039c6a) media_player_t6

0xc32f,	// (0x00039c78) media_player_t7

0x0006,

0xf5de,	// (0x0003cf27) media_player_t

0xc33d,	// (0x00039c86) wait_bar_pane_cp02

0xf5c3,	// (0x0003cf0c) main_usb_pane_t

0x4809,	// (0x00032152) cell_mp_pane

0xa2e9,	// (0x00037c32) cell_mp_pane_g1

0x9f68,	// (0x000378b1) grid_highlight_pane_cp06

0xa580,	// (0x00037ec9) grid_skin_colour_pane

0xa588,	// (0x00037ed1) list_highlight_pane_cp03

0x28c0,	// (0x00030209) skin_g1

0xa590,	// (0x00037ed9) skin_t1

0xa59f,	// (0x00037ee8) skin_t2

0x0001,

0xf264,	// (0x0003cbad) skin_t

0x28c8,	// (0x00030211) cell_skin_colour_pane_ParamLimits

0x28c8,	// (0x00030211) cell_skin_colour_pane

0xa5ad,	// (0x00037ef6) cell_skin_colour_pane_g1

0x2941,	// (0x0003028a) call_video_g1_ParamLimits

0x2941,	// (0x0003028a) call_video_g1

0x295d,	// (0x000302a6) call_video_g2_ParamLimits

0x295d,	// (0x000302a6) call_video_g2

0x0001,

0xf269,	// (0x0003cbb2) call_video_g_ParamLimits

0xf269,	// (0x0003cbb2) call_video_g

0x29af,	// (0x000302f8) call_video_uplink_pane_cp1_ParamLimits

0x29af,	// (0x000302f8) call_video_uplink_pane_cp1

0xa5bf,	// (0x00037f08) call_video_uplink_pane_cp2

0x2a4e,	// (0x00030397) video_down_crop_pane_ParamLimits

0x2a4e,	// (0x00030397) video_down_crop_pane

0x2b37,	// (0x00030480) video_down_pane_ParamLimits

0x2b37,	// (0x00030480) video_down_pane

0xa5c7,	// (0x00037f10) video_down_subqcif_pane_ParamLimits

0xa5c7,	// (0x00037f10) video_down_subqcif_pane

0xa5df,	// (0x00037f28) video_down_subqcif_pane_cp_ParamLimits

0xa5df,	// (0x00037f28) video_down_subqcif_pane_cp

0xa605,	// (0x00037f4e) im_reading_pane_ParamLimits

0xa605,	// (0x00037f4e) im_reading_pane

0x2c45,	// (0x0003058e) im_writing_pane_ParamLimits

0x2c45,	// (0x0003058e) im_writing_pane

0x2c5b,	// (0x000305a4) im_reading_pane_t1

0xa61f,	// (0x00037f68) list_im_pane

0xa630,	// (0x00037f79) scroll_pane_cp07

0x2c95,	// (0x000305de) im_writing_pane_t1_ParamLimits

0x2c95,	// (0x000305de) im_writing_pane_t1

0xa649,	// (0x00037f92) im_writing_pane_t2_ParamLimits

0xa649,	// (0x00037f92) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003cbbc) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003cbbc) im_writing_pane_t

0x9f68,	// (0x000378b1) input_focus_pane_cp04

0x9f68,	// (0x000378b1) input_focus_pane_cp05

0x2caa,	// (0x000305f3) list_im_single_pane_ParamLimits

0x2caa,	// (0x000305f3) list_im_single_pane

0x2cbf,	// (0x00030608) list_single_im_pane_t1

0x47c9,	// (0x00032112) blid_accuracy_pane

0x47d1,	// (0x0003211a) blid_compass_pane

0x47db,	// (0x00032124) main_location_t1

0x47eb,	// (0x00032134) main_location_t2

0x47fb,	// (0x00032144) main_location_t3

0x0002,

0xf5ed,	// (0x0003cf36) main_location_t

0x9f68,	// (0x000378b1) aid_levels_location

0xa2e9,	// (0x00037c32) blid_accuracy_pane_g1

0xa2e9,	// (0x00037c32) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003cc1e) blid_accuracy_pane_g

0xa691,	// (0x00037fda) wml_content_pane

0xa6cf,	// (0x00038018) wml_button_pane_ParamLimits

0xa6cf,	// (0x00038018) wml_button_pane

0x2cce,	// (0x00030617) wml_list_single_large_pane_ParamLimits

0x2cce,	// (0x00030617) wml_list_single_large_pane

0x2ce3,	// (0x0003062c) wml_list_single_medium_pane_ParamLimits

0x2ce3,	// (0x0003062c) wml_list_single_medium_pane

0x2cfa,	// (0x00030643) wml_list_single_small_pane_ParamLimits

0x2cfa,	// (0x00030643) wml_list_single_small_pane

0xa6e3,	// (0x0003802c) wml_selection_box_pane_ParamLimits

0xa6e3,	// (0x0003802c) wml_selection_box_pane

0xa6f6,	// (0x0003803f) wml_list_single_pane_t1

0xa705,	// (0x0003804e) wml_list_single_medium_pane_t1

0xa714,	// (0x0003805d) wml_list_single_large_pane_t1

0xa723,	// (0x0003806c) input_focus_pane_cp02_ParamLimits

0xa723,	// (0x0003806c) input_focus_pane_cp02

0xa736,	// (0x0003807f) wml_selection_box_pane_g1

0xa73f,	// (0x00038088) wml_selection_box_pane_t1_ParamLimits

0xa73f,	// (0x00038088) wml_selection_box_pane_t1

0xa1c3,	// (0x00037b0c) bg_wml_button_pane_ParamLimits

0xa1c3,	// (0x00037b0c) bg_wml_button_pane

0xa757,	// (0x000380a0) wml_button_pane_g1

0xa75f,	// (0x000380a8) wml_button_pane_t1

0xa757,	// (0x000380a0) wml_button_bg_pane_g1

0xa76f,	// (0x000380b8) wml_button_bg_pane_g2

0xa777,	// (0x000380c0) wml_button_bg_pane_g3

0xa77f,	// (0x000380c8) wml_button_bg_pane_g4

0xa787,	// (0x000380d0) wml_button_bg_pane_g5

0xa78f,	// (0x000380d8) wml_button_bg_pane_g6

0xa797,	// (0x000380e0) wml_button_bg_pane_g7

0xa79f,	// (0x000380e8) wml_button_bg_pane_g8

0xa7a7,	// (0x000380f0) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003cbc1) wml_button_bg_pane_g

0x2d13,	// (0x0003065c) bg_list_pane_cp02

0xa7af,	// (0x000380f8) mce_header_pane_ParamLimits

0xa7af,	// (0x000380f8) mce_header_pane

0xa7c5,	// (0x0003810e) mce_icon_pane

0xa7c5,	// (0x0003810e) mce_image_pane

0xa7ce,	// (0x00038117) mce_text_pane_ParamLimits

0xa7ce,	// (0x00038117) mce_text_pane

0x2d1b,	// (0x00030664) scroll_pane_cp03

0xa6c7,	// (0x00038010) scroll_pane_cp04

0xa7e1,	// (0x0003812a) scroll_pane_cp05_ParamLimits

0xa7e1,	// (0x0003812a) scroll_pane_cp05

0x2d25,	// (0x0003066e) mce_header_field_pane_ParamLimits

0x2d25,	// (0x0003066e) mce_header_field_pane

0x2d3c,	// (0x00030685) mce_header_field_pane_2_ParamLimits

0x2d3c,	// (0x00030685) mce_header_field_pane_2

0x2d52,	// (0x0003069b) mce_header_field_pane_3

0x2d5a,	// (0x000306a3) list_single_mce_message_pane_ParamLimits

0x2d5a,	// (0x000306a3) list_single_mce_message_pane

0x2d70,	// (0x000306b9) list_single_mce_smart_pane_ParamLimits

0x2d70,	// (0x000306b9) list_single_mce_smart_pane

0xa7ed,	// (0x00038136) input_focus_pane_cp03

0xa7f6,	// (0x0003813f) list_header_data_pane

0x2d91,	// (0x000306da) mce_header_field_pane_t1

0x2da1,	// (0x000306ea) list_single_mce_header_pane_ParamLimits

0x2da1,	// (0x000306ea) list_single_mce_header_pane

0xa7fe,	// (0x00038147) list_single_mce_header_pane_t1

0xa80d,	// (0x00038156) list_single_mce_message_pane_g1

0xa815,	// (0x0003815e) list_single_mce_message_pane_t1

0x2ddb,	// (0x00030724) bg_cale_heading_pane_cp01_ParamLimits

0x2ddb,	// (0x00030724) bg_cale_heading_pane_cp01

0xa823,	// (0x0003816c) bg_cale_pane_cp02_ParamLimits

0xa823,	// (0x0003816c) bg_cale_pane_cp02

0x2e15,	// (0x0003075e) cale_month_corner_pane

0x2e34,	// (0x0003077d) cale_month_day_heading_pane_ParamLimits

0x2e34,	// (0x0003077d) cale_month_day_heading_pane

0x2e86,	// (0x000307cf) cale_month_pane_g1_ParamLimits

0x2e86,	// (0x000307cf) cale_month_pane_g1

0x2eb5,	// (0x000307fe) cale_month_pane_g2_ParamLimits

0x2eb5,	// (0x000307fe) cale_month_pane_g2

0x2ee5,	// (0x0003082e) cale_month_pane_g3_ParamLimits

0x2ee5,	// (0x0003082e) cale_month_pane_g3

0x2f21,	// (0x0003086a) cale_month_pane_g4_ParamLimits

0x2f21,	// (0x0003086a) cale_month_pane_g4

0x2f5d,	// (0x000308a6) cale_month_pane_g5_ParamLimits

0x2f5d,	// (0x000308a6) cale_month_pane_g5

0x2fa5,	// (0x000308ee) cale_month_pane_g6_ParamLimits

0x2fa5,	// (0x000308ee) cale_month_pane_g6

0x2ff1,	// (0x0003093a) cale_month_pane_g7_ParamLimits

0x2ff1,	// (0x0003093a) cale_month_pane_g7

0x3041,	// (0x0003098a) cale_month_pane_g8_ParamLimits

0x3041,	// (0x0003098a) cale_month_pane_g8

0x3095,	// (0x000309de) cale_month_pane_g9_ParamLimits

0x3095,	// (0x000309de) cale_month_pane_g9

0x30e7,	// (0x00030a30) cale_month_pane_g10_ParamLimits

0x30e7,	// (0x00030a30) cale_month_pane_g10

0x3139,	// (0x00030a82) cale_month_pane_g11_ParamLimits

0x3139,	// (0x00030a82) cale_month_pane_g11

0x318b,	// (0x00030ad4) cale_month_pane_g12_ParamLimits

0x318b,	// (0x00030ad4) cale_month_pane_g12

0x31dd,	// (0x00030b26) cale_month_pane_g13_ParamLimits

0x31dd,	// (0x00030b26) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003cbd4) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003cbd4) cale_month_pane_g

0x322f,	// (0x00030b78) cale_month_week_pane

0x3253,	// (0x00030b9c) grid_cale_month_pane_ParamLimits

0x3253,	// (0x00030b9c) grid_cale_month_pane

0x329c,	// (0x00030be5) cale_month_day_heading_pane_t1

0x32de,	// (0x00030c27) cale_month_day_heading_pane_t2

0x3313,	// (0x00030c5c) cale_month_day_heading_pane_t3

0x3348,	// (0x00030c91) cale_month_day_heading_pane_t4

0x3385,	// (0x00030cce) cale_month_day_heading_pane_t5

0x33ca,	// (0x00030d13) cale_month_day_heading_pane_t6

0x340f,	// (0x00030d58) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003cbef) cale_month_day_heading_pane_t

0xa41e,	// (0x00037d67) bg_cale_side_pane_cp01

0x345c,	// (0x00030da5) cale_month_week_pane_t1

0x3475,	// (0x00030dbe) cale_month_week_pane_t2

0x348e,	// (0x00030dd7) cale_month_week_pane_t3

0x34a7,	// (0x00030df0) cale_month_week_pane_t4

0x34c0,	// (0x00030e09) cale_month_week_pane_t5

0x34d9,	// (0x00030e22) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003cbfe) cale_month_week_pane_t

0x34f2,	// (0x00030e3b) cell_cale_month_pane_ParamLimits

0x34f2,	// (0x00030e3b) cell_cale_month_pane

0x364a,	// (0x00030f93) cell_cale_month_pane_g1

0x07e7,	// (0x0002e130) cell_cale_month_pane_t1_ParamLimits

0x07e7,	// (0x0002e130) cell_cale_month_pane_t1

0xa42c,	// (0x00037d75) grid_highlight_pane_cp08

0xa2e9,	// (0x00037c32) main_smil_g1

0x3656,	// (0x00030f9f) smil_status_pane

0xa862,	// (0x000381ab) smil_text_pane

0xc1a3,	// (0x00039aec) bg_popup_call3_rect_pane_g8

0xc1ab,	// (0x00039af4) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003ceb7) bg_popup_call3_rect_pane_g

0xc432,	// (0x00039d7b) smil_status_volume_pane_g1

0xa86c,	// (0x000381b5) smil_status_pane_t1

0x4b5e,	// (0x000324a7) volume_smil_pane

0xa883,	// (0x000381cc) list_smil_text_pane

0x366b,	// (0x00030fb4) scroll_pane_cp011

0x3676,	// (0x00030fbf) smil_text_list_pane_t1_ParamLimits

0x3676,	// (0x00030fbf) smil_text_list_pane_t1

0x36ba,	// (0x00031003) aid_volume_smil_ParamLimits

0x36ba,	// (0x00031003) aid_volume_smil

0xa2e9,	// (0x00037c32) smil_volume_pane_g1

0xa2e9,	// (0x00037c32) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003cc1e) smil_volume_pane_g

0x1fbe,	// (0x0002f907) listscroll_cale_day_pane

0xa88d,	// (0x000381d6) bg_cale_pane

0xa8a5,	// (0x000381ee) list_cale_pane

0xa8c8,	// (0x00038211) scroll_pane_cp09

0xa8d9,	// (0x00038222) cale_bg_pane_g1

0xa8e1,	// (0x0003822a) cale_bg_pane_g2

0xa8e9,	// (0x00038232) cale_bg_pane_g3

0xa8f1,	// (0x0003823a) cale_bg_pane_g4

0xa8f9,	// (0x00038242) cale_bg_pane_g5

0xa901,	// (0x0003824a) cale_bg_pane_g6

0xa909,	// (0x00038252) cale_bg_pane_g7

0xa911,	// (0x0003825a) cale_bg_pane_g8

0xa919,	// (0x00038262) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003cc23) cale_bg_pane_g

0x36e4,	// (0x0003102d) list_cale_time_pane_ParamLimits

0x36e4,	// (0x0003102d) list_cale_time_pane

0xa921,	// (0x0003826a) list_cale_time_pane_g1_ParamLimits

0xa921,	// (0x0003826a) list_cale_time_pane_g1

0xa92d,	// (0x00038276) list_cale_time_pane_g2_ParamLimits

0xa92d,	// (0x00038276) list_cale_time_pane_g2

0x36fa,	// (0x00031043) list_cale_time_pane_g3_ParamLimits

0x36fa,	// (0x00031043) list_cale_time_pane_g3

0x3708,	// (0x00031051) list_cale_time_pane_g4_ParamLimits

0x3708,	// (0x00031051) list_cale_time_pane_g4

0x3716,	// (0x0003105f) list_cale_time_pane_g5_ParamLimits

0x3716,	// (0x0003105f) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003cc36) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003cc36) list_cale_time_pane_g

0xa947,	// (0x00038290) list_cale_time_pane_t1_ParamLimits

0xa947,	// (0x00038290) list_cale_time_pane_t1

0xa96f,	// (0x000382b8) list_cale_time_pane_t2_ParamLimits

0xa96f,	// (0x000382b8) list_cale_time_pane_t2

0x3b07,	// (0x00031450) aid_blid_cardinal_pane

0x3b45,	// (0x0003148e) compass_pane_t4

0xa997,	// (0x000382e0) list_cale_time_pane_t4_ParamLimits

0xa997,	// (0x000382e0) list_cale_time_pane_t4

0x3b53,	// (0x0003149c) compass_pane_t5

0x3b61,	// (0x000314aa) compass_pane_t6

0x3b6f,	// (0x000314b8) compass_pane_t7

0xae0f,	// (0x00038758) navi_pane_cc_t1

0xb006,	// (0x0003894f) aid_phob_thumbnail_center_pane

0x41df,	// (0x00031b28) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003cc43) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003cc43) list_cale_time_pane_t

0x9bbf,	// (0x00037508) bg_popup_window_pane_cp02_ParamLimits

0x9bbf,	// (0x00037508) bg_popup_window_pane_cp02

0xa9bf,	// (0x00038308) heading_pane_cp01_ParamLimits

0xa9bf,	// (0x00038308) heading_pane_cp01

0xa9cb,	// (0x00038314) loc_req_pane_ParamLimits

0xa9cb,	// (0x00038314) loc_req_pane

0xa9db,	// (0x00038324) loc_type_pane_ParamLimits

0xa9db,	// (0x00038324) loc_type_pane

0xa9ed,	// (0x00038336) loc_type_pane_t1_ParamLimits

0xa9ed,	// (0x00038336) loc_type_pane_t1

0xa9ff,	// (0x00038348) loc_type_pane_t2_ParamLimits

0xa9ff,	// (0x00038348) loc_type_pane_t2

0xaa11,	// (0x0003835a) loc_type_pane_t3_ParamLimits

0xaa11,	// (0x0003835a) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003cc4a) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003cc4a) loc_type_pane_t

0xaa23,	// (0x0003836c) list_loc_req_pane

0xaa2d,	// (0x00038376) scroll_pane_cp012

0x3724,	// (0x0003106d) list_single_loc_request_popup_menu_pane_ParamLimits

0x3724,	// (0x0003106d) list_single_loc_request_popup_menu_pane

0xaa38,	// (0x00038381) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa38,	// (0x00038381) list_single_loc_request_popup_menu_pane_g1

0xaa44,	// (0x0003838d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa44,	// (0x0003838d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003cc51) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003cc51) list_single_loc_request_popup_menu_pane_g

0xaa50,	// (0x00038399) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa50,	// (0x00038399) list_single_loc_request_popup_menu_pane_t1

0xa1c3,	// (0x00037b0c) bg_popup_window_pane_cp03_ParamLimits

0xa1c3,	// (0x00037b0c) bg_popup_window_pane_cp03

0xaf13,	// (0x0003885c) heading_loc_req_pane_ParamLimits

0xaf13,	// (0x0003885c) heading_loc_req_pane

0x3731,	// (0x0003107a) popup_dyc_status_message_window_g1_ParamLimits

0x3731,	// (0x0003107a) popup_dyc_status_message_window_g1

0x3745,	// (0x0003108e) popup_dyc_status_message_window_t1_ParamLimits

0x3745,	// (0x0003108e) popup_dyc_status_message_window_t1

0x375a,	// (0x000310a3) popup_dyc_status_message_window_t2_ParamLimits

0x375a,	// (0x000310a3) popup_dyc_status_message_window_t2

0x376f,	// (0x000310b8) popup_dyc_status_message_window_t3_ParamLimits

0x376f,	// (0x000310b8) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003cc56) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003cc56) popup_dyc_status_message_window_t

0x9f68,	// (0x000378b1) bg_heading_pane_cp01

0xaa66,	// (0x000383af) heading_loc_req_pane_g1

0xaa6e,	// (0x000383b7) heading_loc_req_pane_g2

0xaa76,	// (0x000383bf) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003cc5d) heading_loc_req_pane_g

0xaa7e,	// (0x000383c7) heading_loc_req_pane_t1

0xaa8d,	// (0x000383d6) bg_popup_sub_pane_cp01_ParamLimits

0xaa8d,	// (0x000383d6) bg_popup_sub_pane_cp01

0xaa9b,	// (0x000383e4) popup_cale_events_window_g1_ParamLimits

0xaa9b,	// (0x000383e4) popup_cale_events_window_g1

0xaabb,	// (0x00038404) popup_cale_events_window_g2_ParamLimits

0xaabb,	// (0x00038404) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003cc91) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003cc91) popup_cale_events_window_g

0xaadb,	// (0x00038424) popup_cale_events_window_t1_ParamLimits

0xaadb,	// (0x00038424) popup_cale_events_window_t1

0xaaed,	// (0x00038436) popup_cale_events_window_t2_ParamLimits

0xaaed,	// (0x00038436) popup_cale_events_window_t2

0xab2b,	// (0x00038474) popup_cale_events_window_t3_ParamLimits

0xab2b,	// (0x00038474) popup_cale_events_window_t3

0xab65,	// (0x000384ae) popup_cale_events_window_t4_ParamLimits

0xab65,	// (0x000384ae) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003cc96) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003cc96) popup_cale_events_window_t

0x3868,	// (0x000311b1) call_type_pane

0x3878,	// (0x000311c1) popup_call_status_window_g1

0x388c,	// (0x000311d5) popup_call_status_window_g2

0x38a0,	// (0x000311e9) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003cc9f) popup_call_status_window_g

0xab9b,	// (0x000384e4) call_type_pane_g1

0xaba4,	// (0x000384ed) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003cca6) call_type_pane_g

0x9f68,	// (0x000378b1) bg_popup_sub_pane_cp02

0xabad,	// (0x000384f6) listscroll_popup_wml_pane

0xabb5,	// (0x000384fe) list_wml_pane

0xabbf,	// (0x00038508) scroll_pane_cp013

0xabca,	// (0x00038513) list_single_graphic_popup_wml_pane_ParamLimits

0xabca,	// (0x00038513) list_single_graphic_popup_wml_pane

0xa2e9,	// (0x00037c32) list_single_graphic_popup_wml_pane_g1

0xabde,	// (0x00038527) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003ccab) list_single_graphic_popup_wml_pane_g

0xabe6,	// (0x0003852f) list_single_graphic_popup_wml_pane_t1

0xabfc,	// (0x00038545) aid_call_pane

0xa1bb,	// (0x00037b04) popup_clock_analogue_window_g1

0xa1bb,	// (0x00037b04) popup_clock_analogue_window_g2

0x38af,	// (0x000311f8) popup_clock_analogue_window_g3

0x38af,	// (0x000311f8) popup_clock_analogue_window_g4

0xa2e9,	// (0x00037c32) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003ccb0) popup_clock_analogue_window_g

0x38b7,	// (0x00031200) popup_clock_analogue_window_t1

0x38c5,	// (0x0003120e) clock_digital_number_pane_ParamLimits

0x38c5,	// (0x0003120e) clock_digital_number_pane

0x38d1,	// (0x0003121a) clock_digital_number_pane_cp02_ParamLimits

0x38d1,	// (0x0003121a) clock_digital_number_pane_cp02

0x38dd,	// (0x00031226) clock_digital_number_pane_cp03_ParamLimits

0x38dd,	// (0x00031226) clock_digital_number_pane_cp03

0x38e9,	// (0x00031232) clock_digital_number_pane_cp04_ParamLimits

0x38e9,	// (0x00031232) clock_digital_number_pane_cp04

0x38f5,	// (0x0003123e) clock_digital_separator_pane_ParamLimits

0x38f5,	// (0x0003123e) clock_digital_separator_pane

0x3901,	// (0x0003124a) popup_clock_digital_window_t1

0xa2e9,	// (0x00037c32) clock_digital_number_pane_g1

0xa2e9,	// (0x00037c32) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003cc1e) clock_digital_number_pane_g

0xa2e9,	// (0x00037c32) clock_digital_separator_pane_g1

0xa2e9,	// (0x00037c32) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003cc1e) clock_digital_separator_pane_g

0x9f68,	// (0x000378b1) bg_popup_window_pane_cp04

0xac04,	// (0x0003854d) heading_pane_cp03

0xac0c,	// (0x00038555) listscroll_popup_gms_pane

0xac14,	// (0x0003855d) grid_large_graphic_popup_pane

0xac1e,	// (0x00038567) listscroll_popup_gms_pane_g1

0xac26,	// (0x0003856f) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003ccbb) listscroll_popup_gms_pane_g

0xa6c7,	// (0x00038010) scroll_pane_cp014

0x391e,	// (0x00031267) cell_large_graphic_popup_pane_ParamLimits

0x391e,	// (0x00031267) cell_large_graphic_popup_pane

0x3936,	// (0x0003127f) cell_large_graphic_popup_pane_g1_ParamLimits

0x3936,	// (0x0003127f) cell_large_graphic_popup_pane_g1

0xac2e,	// (0x00038577) cell_large_graphic_popup_pane_g2_ParamLimits

0xac2e,	// (0x00038577) cell_large_graphic_popup_pane_g2

0xac3a,	// (0x00038583) cell_large_graphic_popup_pane_g3_ParamLimits

0xac3a,	// (0x00038583) cell_large_graphic_popup_pane_g3

0xac47,	// (0x00038590) cell_large_graphic_popup_pane_g4_ParamLimits

0xac47,	// (0x00038590) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003ccc0) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003ccc0) cell_large_graphic_popup_pane_g

0xac57,	// (0x000385a0) grid_highlight_pane_cp010

0xa2e9,	// (0x00037c32) bg_popup_call_pane_g1

0xac61,	// (0x000385aa) list_single_graphic_popup_conf_pane_ParamLimits

0xac61,	// (0x000385aa) list_single_graphic_popup_conf_pane

0xac74,	// (0x000385bd) list_highlight_pane_cp01

0xac7d,	// (0x000385c6) list_single_graphic_popup_conf_pane_g1

0xac85,	// (0x000385ce) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003ccc9) list_single_graphic_popup_conf_pane_g

0xac8d,	// (0x000385d6) list_single_graphic_popup_conf_pane_t1

0xac9b,	// (0x000385e4) linegrid_cams_pane_g1

0x3942,	// (0x0003128b) linegrid_cams_pane_g2

0xa45f,	// (0x00037da8) linegrid_cams_pane_g3

0xaca4,	// (0x000385ed) linegrid_cams_pane_g4

0x394b,	// (0x00031294) linegrid_cams_pane_g5

0x3954,	// (0x0003129d) linegrid_cams_pane_g6

0xa468,	// (0x00037db1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003ccce) linegrid_cams_pane_g

0xacad,	// (0x000385f6) popup_clock_analogue_window

0xacad,	// (0x000385f6) popup_clock_digital_window

0x9f68,	// (0x000378b1) popup_phob_thumbnail_window

0xa2e9,	// (0x00037c32) call_video_uplink_pane_g1

0xacb6,	// (0x000385ff) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003ccdd) call_video_uplink_pane_g

0xacbe,	// (0x00038607) video_uplink_pane

0xacc6,	// (0x0003860f) mce_image_pane_g1

0x395f,	// (0x000312a8) mce_image_pane_g2

0x3967,	// (0x000312b0) mce_image_pane_g3

0x396f,	// (0x000312b8) mce_image_pane_g4

0x3979,	// (0x000312c2) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003cce2) mce_image_pane_g

0xacd0,	// (0x00038619) control_top_pane_stacon_cp01_ParamLimits

0xacd0,	// (0x00038619) control_top_pane_stacon_cp01

0xace4,	// (0x0003862d) uni_indicator_pane_stacon_cp01_ParamLimits

0xace4,	// (0x0003862d) uni_indicator_pane_stacon_cp01

0xacf5,	// (0x0003863e) bg_popup_sub_pane_cp03

0x3981,	// (0x000312ca) chi_dic_find_pane

0x3989,	// (0x000312d2) listscroll_chi_dic_pane

0x3992,	// (0x000312db) main_pane_chidic_g1

0x39a5,	// (0x000312ee) chi_dic_find_pane_t1

0xacff,	// (0x00038648) find_chidic_pane

0xad08,	// (0x00038651) chi_dic_list_pane_ParamLimits

0xad08,	// (0x00038651) chi_dic_list_pane

0xad19,	// (0x00038662) scroll_pane_cp020

0x39b3,	// (0x000312fc) find_chidic_pane_t1

0x9f68,	// (0x000378b1) input_focus_pane_cp06

0x39c2,	// (0x0003130b) list_chi_dic_pane_ParamLimits

0x39c2,	// (0x0003130b) list_chi_dic_pane

0x39d4,	// (0x0003131d) list_chi_dic_pane_t1_ParamLimits

0x39d4,	// (0x0003131d) list_chi_dic_pane_t1

0x9f68,	// (0x000378b1) list_highlight_pane_cp020

0xad21,	// (0x0003866a) bg_cale_heading_pane_g1

0x39e7,	// (0x00031330) bg_cale_heading_pane_g2

0x39ef,	// (0x00031338) bg_cale_heading_pane_g3

0x39f7,	// (0x00031340) bg_cale_heading_pane_g4

0x3a01,	// (0x0003134a) bg_cale_heading_pane_g5

0x3a0b,	// (0x00031354) bg_cale_heading_pane_g6

0x3a13,	// (0x0003135c) bg_cale_heading_pane_g7

0x3a1b,	// (0x00031364) bg_cale_heading_pane_g8

0x3a25,	// (0x0003136e) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003cced) bg_cale_heading_pane_g

0xad21,	// (0x0003866a) bg_cale_side_pane_g1

0x3a2f,	// (0x00031378) bg_cale_side_pane_g2

0x3a37,	// (0x00031380) bg_cale_side_pane_g3

0x3a3f,	// (0x00031388) bg_cale_side_pane_g4

0x3a47,	// (0x00031390) bg_cale_side_pane_g5

0x3a4f,	// (0x00031398) bg_cale_side_pane_g6

0x3a57,	// (0x000313a0) bg_cale_side_pane_g7

0x3a5f,	// (0x000313a8) bg_cale_side_pane_g8

0x3a67,	// (0x000313b0) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003cd00) bg_cale_side_pane_g

0x3a6f,	// (0x000313b8) popup_call_status_window_ParamLimits

0x3a6f,	// (0x000313b8) popup_call_status_window

0xad29,	// (0x00038672) stacon_top_pane

0xad31,	// (0x0003867a) status_pane_ParamLimits

0xad31,	// (0x0003867a) status_pane

0xad46,	// (0x0003868f) status_small_pane

0xad4e,	// (0x00038697) control_pane

0x9f68,	// (0x000378b1) stacon_bottom_pane

0xad56,	// (0x0003869f) list_single_mce_smart_pane_t1_ParamLimits

0xad56,	// (0x0003869f) list_single_mce_smart_pane_t1

0xad69,	// (0x000386b2) list_single_mce_smart_pane_t2_ParamLimits

0xad69,	// (0x000386b2) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003cd13) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003cd13) list_single_mce_smart_pane_t

0x3ab6,	// (0x000313ff) compass_pane

0x3abf,	// (0x00031408) main_location2_pane_t1

0x3ad1,	// (0x0003141a) main_location2_pane_t2

0x3ae3,	// (0x0003142c) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003cd18) main_location2_pane_t

0xad88,	// (0x000386d1) compass_pane_g1_ParamLimits

0xad88,	// (0x000386d1) compass_pane_g1

0x3b27,	// (0x00031470) compass_pane_t1

0x3b36,	// (0x0003147f) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003cd21) compass_pane_t

0x3b7d,	// (0x000314c6) text_secondary_cp61

0xae06,	// (0x0003874f) navi_pane_cams_g5

0xae82,	// (0x000387cb) navi_pane_im_t1

0xae90,	// (0x000387d9) navi_pane_mp_g1_ParamLimits

0xae90,	// (0x000387d9) navi_pane_mp_g1

0xaea4,	// (0x000387ed) navi_pane_mp_g2_ParamLimits

0xaea4,	// (0x000387ed) navi_pane_mp_g2

0xaeb0,	// (0x000387f9) navi_pane_mp_g3_ParamLimits

0xaeb0,	// (0x000387f9) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003cd35) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003cd35) navi_pane_mp_g

0xaebc,	// (0x00038805) navi_pane_mp_t1

0xaeca,	// (0x00038813) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003cd3c) navi_pane_mp_t

0xaf4f,	// (0x00038898) navi_pane_vt_g1

0xaebc,	// (0x00038805) navi_pane_vt_t1

0xaf57,	// (0x000388a0) navi_slider_pane

0xa479,	// (0x00037dc2) zooming_pane

0xaf67,	// (0x000388b0) navi_slider_pane_g1

0x3bce,	// (0x00031517) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003cd43) navi_slider_pane_g

0xaf8b,	// (0x000388d4) aid_levels_zoom

0xaf93,	// (0x000388dc) zooming_pane_g1

0xaf9b,	// (0x000388e4) zooming_pane_g2

0xaf9b,	// (0x000388e4) zooming_pane_g3

0x0002,

0xf409,	// (0x0003cd52) zooming_pane_g

0xafa3,	// (0x000388ec) level_10_zoom

0xafac,	// (0x000388f5) level_11_zoom

0xafb5,	// (0x000388fe) level_1_zoom

0xafbe,	// (0x00038907) level_2_zoom

0xafc7,	// (0x00038910) level_3_zoom

0xafd0,	// (0x00038919) level_4_zoom

0xafd9,	// (0x00038922) level_5_zoom

0xafe2,	// (0x0003892b) level_6_zoom

0xafeb,	// (0x00038934) level_7_zoom

0xaff4,	// (0x0003893d) level_8_zoom

0xaffd,	// (0x00038946) level_9_zoom

0xb00e,	// (0x00038957) popup_phob_thumbnail_window_g1

0xb016,	// (0x0003895f) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003cd59) popup_phob_thumbnail_window_g

0xc345,	// (0x00039c8e) level_1_location

0xc34d,	// (0x00039c96) level_2_location

0xc355,	// (0x00039c9e) level_3_location

0xc35d,	// (0x00039ca6) level_4_location

0xa479,	// (0x00037dc2) level_5_location

0x3be0,	// (0x00031529) mce_icon_pane_g1

0x3bea,	// (0x00031533) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003cd5e) mce_icon_pane_g

0x3bf2,	// (0x0003153b) main_mup_pane_g1_ParamLimits

0x3bf2,	// (0x0003153b) main_mup_pane_g1

0x3c08,	// (0x00031551) main_mup_pane_g2_ParamLimits

0x3c08,	// (0x00031551) main_mup_pane_g2

0x3c1a,	// (0x00031563) main_mup_pane_g3_ParamLimits

0x3c1a,	// (0x00031563) main_mup_pane_g3

0x3c2c,	// (0x00031575) main_mup_pane_g4_ParamLimits

0x3c2c,	// (0x00031575) main_mup_pane_g4

0x3c44,	// (0x0003158d) main_mup_pane_g5_ParamLimits

0x3c44,	// (0x0003158d) main_mup_pane_g5

0x3c60,	// (0x000315a9) main_mup_pane_g6_ParamLimits

0x3c60,	// (0x000315a9) main_mup_pane_g6

0x3c78,	// (0x000315c1) main_mup_pane_g7_ParamLimits

0x3c78,	// (0x000315c1) main_mup_pane_g7

0x3c90,	// (0x000315d9) main_mup_pane_g8_ParamLimits

0x3c90,	// (0x000315d9) main_mup_pane_g8

0x3ca8,	// (0x000315f1) main_mup_pane_g9_ParamLimits

0x3ca8,	// (0x000315f1) main_mup_pane_g9

0x3cc2,	// (0x0003160b) main_mup_pane_g10_ParamLimits

0x3cc2,	// (0x0003160b) main_mup_pane_g10

0x3cdc,	// (0x00031625) main_mup_pane_g11_ParamLimits

0x3cdc,	// (0x00031625) main_mup_pane_g11

0x3cf0,	// (0x00031639) main_mup_pane_g12_ParamLimits

0x3cf0,	// (0x00031639) main_mup_pane_g12

0x3d06,	// (0x0003164f) main_mup_pane_g13_ParamLimits

0x3d06,	// (0x0003164f) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003cd63) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003cd63) main_mup_pane_g

0x3d1a,	// (0x00031663) main_mup_pane_t1_ParamLimits

0x3d1a,	// (0x00031663) main_mup_pane_t1

0x3d34,	// (0x0003167d) main_mup_pane_t2_ParamLimits

0x3d34,	// (0x0003167d) main_mup_pane_t2

0x3d4c,	// (0x00031695) main_mup_pane_t3_ParamLimits

0x3d4c,	// (0x00031695) main_mup_pane_t3

0x3d64,	// (0x000316ad) main_mup_pane_t4_ParamLimits

0x3d64,	// (0x000316ad) main_mup_pane_t4

0x3d82,	// (0x000316cb) main_mup_pane_t5_ParamLimits

0x3d82,	// (0x000316cb) main_mup_pane_t5

0x3d97,	// (0x000316e0) main_mup_pane_t6_ParamLimits

0x3d97,	// (0x000316e0) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003cd7e) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003cd7e) main_mup_pane_t

0x3da9,	// (0x000316f2) mup_progress_pane_ParamLimits

0x3da9,	// (0x000316f2) mup_progress_pane

0x3db5,	// (0x000316fe) mup_visualizer_pane_ParamLimits

0x3db5,	// (0x000316fe) mup_visualizer_pane

0x3de9,	// (0x00031732) mup_volume_pane_ParamLimits

0x3de9,	// (0x00031732) mup_volume_pane

0xaf05,	// (0x0003884e) mup_visualizer_pane_g1_ParamLimits

0xaf05,	// (0x0003884e) mup_visualizer_pane_g1

0xaf05,	// (0x0003884e) mup_visualizer_pane_g2_ParamLimits

0xaf05,	// (0x0003884e) mup_visualizer_pane_g2

0xad88,	// (0x000386d1) mup_visualizer_pane_g3_ParamLimits

0xad88,	// (0x000386d1) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003cd8b) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003cd8b) mup_visualizer_pane_g

0xa2e9,	// (0x00037c32) mup_volume_pane_g1

0xb026,	// (0x0003896f) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003cd92) mup_volume_pane_g

0xa2e9,	// (0x00037c32) mup_progress_pane_g1

0xb02f,	// (0x00038978) mup_progress_pane_g2

0xb038,	// (0x00038981) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003cd97) mup_progress_pane_g

0x9f68,	// (0x000378b1) bg_popup_window_pane_cp05

0xb041,	// (0x0003898a) heading_pane_cp02_ParamLimits

0xb041,	// (0x0003898a) heading_pane_cp02

0xb05b,	// (0x000389a4) list_popup_blid_pane

0xb063,	// (0x000389ac) list_blid_sat_info_pane_ParamLimits

0xb063,	// (0x000389ac) list_blid_sat_info_pane

0xb076,	// (0x000389bf) list_blid_sat_info_pane_g1

0xb07e,	// (0x000389c7) list_blid_sat_info_pane_t1

0x3eff,	// (0x00031848) mup_equalizer_pane_ParamLimits

0x3eff,	// (0x00031848) mup_equalizer_pane

0x3f18,	// (0x00031861) mup_equalizer_pane_cp1_ParamLimits

0x3f18,	// (0x00031861) mup_equalizer_pane_cp1

0x3f35,	// (0x0003187e) mup_equalizer_pane_cp2_ParamLimits

0x3f35,	// (0x0003187e) mup_equalizer_pane_cp2

0x3f52,	// (0x0003189b) mup_equalizer_pane_cp3_ParamLimits

0x3f52,	// (0x0003189b) mup_equalizer_pane_cp3

0x3f73,	// (0x000318bc) mup_equalizer_pane_cp4_ParamLimits

0x3f73,	// (0x000318bc) mup_equalizer_pane_cp4

0x3f94,	// (0x000318dd) mup_equalizer_pane_cp5

0x3fa8,	// (0x000318f1) mup_equalizer_pane_cp6

0x3fbc,	// (0x00031905) mup_equalizer_pane_cp7

0xc223,	// (0x00039b6c) bg_popup_call_poc_act_pane_g9

0xc22b,	// (0x00039b74) bg_popup_call_poc_act_pane_g10

0xc233,	// (0x00039b7c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa1c3,	// (0x00037b0c) mup_scale_pane

0xa2e9,	// (0x00037c32) mup_scale_pane_g1

0xb08c,	// (0x000389d5) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003cdb3) mup_scale_pane_g

0xb0b0,	// (0x000389f9) msg_data_pane

0xb0b8,	// (0x00038a01) scroll_pane_cp017

0x3fe2,	// (0x0003192b) bg_list_pane_cp04_ParamLimits

0x3fe2,	// (0x0003192b) bg_list_pane_cp04

0xb0c0,	// (0x00038a09) msg_data_pane_g1

0x4002,	// (0x0003194b) msg_data_pane_g2

0x400a,	// (0x00031953) msg_data_pane_g3

0x4012,	// (0x0003195b) msg_data_pane_g4

0x401a,	// (0x00031963) msg_data_pane_g5

0x4022,	// (0x0003196b) msg_data_pane_g6

0x402a,	// (0x00031973) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003cdc2) msg_data_pane_g

0x4032,	// (0x0003197b) msg_text_pane_ParamLimits

0x4032,	// (0x0003197b) msg_text_pane

0x4060,	// (0x000319a9) qrid_highlight_pane_cp011_ParamLimits

0x4060,	// (0x000319a9) qrid_highlight_pane_cp011

0x9f68,	// (0x000378b1) msg_body_pane

0x9f68,	// (0x000378b1) msg_header_pane

0xb0d1,	// (0x00038a1a) input_focus_pane_cp07

0x4084,	// (0x000319cd) msg_header_pane_t1_ParamLimits

0x4084,	// (0x000319cd) msg_header_pane_t1

0x4096,	// (0x000319df) msg_header_pane_t2_ParamLimits

0x4096,	// (0x000319df) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003cdd6) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003cdd6) msg_header_pane_t

0xb0e6,	// (0x00038a2f) msg_body_pane_g1

0x40a8,	// (0x000319f1) msg_body_pane_t1_ParamLimits

0x40a8,	// (0x000319f1) msg_body_pane_t1

0x40d9,	// (0x00031a22) msg_body_pane_t2_ParamLimits

0x40d9,	// (0x00031a22) msg_body_pane_t2

0x40eb,	// (0x00031a34) msg_body_pane_t3_ParamLimits

0x40eb,	// (0x00031a34) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003cddb) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003cddb) msg_body_pane_t

0x082f,	// (0x0002e178) main_viewer_pane_g1_ParamLimits

0x082f,	// (0x0002e178) main_viewer_pane_g1

0x083d,	// (0x0002e186) main_viewer_pane_g2_ParamLimits

0x083d,	// (0x0002e186) main_viewer_pane_g2

0x4133,	// (0x00031a7c) main_viewer_pane_g3_ParamLimits

0x4133,	// (0x00031a7c) main_viewer_pane_g3

0x4142,	// (0x00031a8b) main_viewer_pane_g4_ParamLimits

0x4142,	// (0x00031a8b) main_viewer_pane_g4

0x4151,	// (0x00031a9a) main_viewer_pane_g5_ParamLimits

0x4151,	// (0x00031a9a) main_viewer_pane_g5

0x4151,	// (0x00031a9a) main_viewer_pane_g7_ParamLimits

0x4151,	// (0x00031a9a) main_viewer_pane_g7

0xaa38,	// (0x00038381) main_viewer_pane_g8_ParamLimits

0xaa38,	// (0x00038381) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003cdeb) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003cdeb) main_viewer_pane_g

0xb0ee,	// (0x00038a37) viewer_content_pane_ParamLimits

0xb0ee,	// (0x00038a37) viewer_content_pane

0x419c,	// (0x00031ae5) main_postcard_pane_g1_ParamLimits

0x419c,	// (0x00031ae5) main_postcard_pane_g1

0x41b2,	// (0x00031afb) main_postcard_pane_g2_ParamLimits

0x41b2,	// (0x00031afb) main_postcard_pane_g2

0x41c8,	// (0x00031b11) main_postcard_pane_g3_ParamLimits

0x41c8,	// (0x00031b11) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003cdfc) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003cdfc) main_postcard_pane_g

0x41df,	// (0x00031b28) main_postcard_pane_g4

0xc445,	// (0x00039d8e) smil_status_volume_pane_g2

0x4222,	// (0x00031b6b) postcard_pane_ParamLimits

0x4222,	// (0x00031b6b) postcard_pane

0xb0fc,	// (0x00038a45) postcard_pane_g1_ParamLimits

0xb0fc,	// (0x00038a45) postcard_pane_g1

0x4264,	// (0x00031bad) postcard_pane_g2_ParamLimits

0x4264,	// (0x00031bad) postcard_pane_g2

0x4270,	// (0x00031bb9) postcard_pane_g3_ParamLimits

0x4270,	// (0x00031bb9) postcard_pane_g3

0xb10a,	// (0x00038a53) postcard_pane_g4_ParamLimits

0xb10a,	// (0x00038a53) postcard_pane_g4

0x427c,	// (0x00031bc5) postcard_pane_g5_ParamLimits

0x427c,	// (0x00031bc5) postcard_pane_g5

0x4291,	// (0x00031bda) postcard_pane_g6_ParamLimits

0x4291,	// (0x00031bda) postcard_pane_g6

0xb0fc,	// (0x00038a45) postcard_pane_g7_ParamLimits

0xb0fc,	// (0x00038a45) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003ce09) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003ce09) postcard_pane_g

0x42a5,	// (0x00031bee) main_mp2_pane_g1_ParamLimits

0x42a5,	// (0x00031bee) main_mp2_pane_g1

0x42b1,	// (0x00031bfa) main_mp2_pane_g2_ParamLimits

0x42b1,	// (0x00031bfa) main_mp2_pane_g2

0x42bd,	// (0x00031c06) main_mp2_pane_g3_ParamLimits

0x42bd,	// (0x00031c06) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003ce18) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003ce18) main_mp2_pane_g

0x42c9,	// (0x00031c12) main_mp2_pane_t1_ParamLimits

0x42c9,	// (0x00031c12) main_mp2_pane_t1

0x42de,	// (0x00031c27) main_mp2_pane_t2_ParamLimits

0x42de,	// (0x00031c27) main_mp2_pane_t2

0x42f0,	// (0x00031c39) main_mp2_pane_t3_ParamLimits

0x42f0,	// (0x00031c39) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003ce1f) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003ce1f) main_mp2_pane_t

0xb118,	// (0x00038a61) pec_content_pane_ParamLimits

0xb118,	// (0x00038a61) pec_content_pane

0xa6c7,	// (0x00038010) scroll_pane_cp015

0xb12a,	// (0x00038a73) pec_attribute_pane_ParamLimits

0xb12a,	// (0x00038a73) pec_attribute_pane

0x4302,	// (0x00031c4b) pec_content_pane_g1_ParamLimits

0x4302,	// (0x00031c4b) pec_content_pane_g1

0xb13a,	// (0x00038a83) pec_content_pane_t1_ParamLimits

0xb13a,	// (0x00038a83) pec_content_pane_t1

0xb14c,	// (0x00038a95) pec_content_pane_t2_ParamLimits

0xb14c,	// (0x00038a95) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003ce26) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003ce26) pec_content_pane_t

0x430e,	// (0x00031c57) list_single_graphic_pane_cp01_ParamLimits

0x430e,	// (0x00031c57) list_single_graphic_pane_cp01

0xa1c3,	// (0x00037b0c) bg_popup_sub_pane_cp04

0xb15e,	// (0x00038aa7) popup_mup_playback_window_g1

0xb16a,	// (0x00038ab3) popup_mup_playback_window_t1

0xb17f,	// (0x00038ac8) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003ce2b) popup_mup_playback_window_t

0xb1b6,	// (0x00038aff) main_image_pane_g1_ParamLimits

0xb1b6,	// (0x00038aff) main_image_pane_g1

0xb1f9,	// (0x00038b42) scroll_pane_cp018_ParamLimits

0xb1f9,	// (0x00038b42) scroll_pane_cp018

0xb211,	// (0x00038b5a) scroll_pane_cp016_ParamLimits

0xb211,	// (0x00038b5a) scroll_pane_cp016

0x43dc,	// (0x00031d25) smil2_image_pane_ParamLimits

0x43dc,	// (0x00031d25) smil2_image_pane

0x440c,	// (0x00031d55) smil2_root_pane_ParamLimits

0x440c,	// (0x00031d55) smil2_root_pane

0x4444,	// (0x00031d8d) smil2_text_pane_ParamLimits

0x4444,	// (0x00031d8d) smil2_text_pane

0x9f68,	// (0x000378b1) bg_list_pane_cp06

0xb24d,	// (0x00038b96) grid_radio_pane

0x9f68,	// (0x000378b1) bg_popup_window_pane_cp06

0xb255,	// (0x00038b9e) main_fmradio_pane_t1

0xac04,	// (0x0003854d) heading_pane_cp04

0xb263,	// (0x00038bac) main_fmradio_pane_t2

0xc27b,	// (0x00039bc4) popup_cale_lunar_info_window_g1

0xb271,	// (0x00038bba) main_fmradio_pane_t3

0xc283,	// (0x00039bcc) popup_cale_lunar_info_window_g2

0xb27f,	// (0x00038bc8) main_fmradio_pane_t4

0x0001,

0xb28d,	// (0x00038bd6) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0003cf19) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003ce40) main_fmradio_pane_t

0xb29b,	// (0x00038be4) wait_bar_pane_cp03

0xb2a3,	// (0x00038bec) cell_fmradio_pane_ParamLimits

0xb2a3,	// (0x00038bec) cell_fmradio_pane

0xb0fc,	// (0x00038a45) cell_fmradio_pane_g1_ParamLimits

0xb0fc,	// (0x00038a45) cell_fmradio_pane_g1

0x9f68,	// (0x000378b1) grid_highlight_pane_cp011

0xb2b6,	// (0x00038bff) poc_content_pane_ParamLimits

0xb2b6,	// (0x00038bff) poc_content_pane

0xb2c8,	// (0x00038c11) scroll_pane_cp019

0x44c4,	// (0x00031e0d) popup_call_poc_act_window_ParamLimits

0x44c4,	// (0x00031e0d) popup_call_poc_act_window

0x44e8,	// (0x00031e31) popup_call_poc_inact_window_ParamLimits

0x44e8,	// (0x00031e31) popup_call_poc_inact_window

0xf594,	// (0x0003cedd) bg_popup_call_poc_act_pane_g

0xc23b,	// (0x00039b84) bg_popup_call_poc_inact_pane_g1

0xc243,	// (0x00039b8c) bg_popup_call_poc_inact_pane_g2

0xb2d0,	// (0x00038c19) popup_call_poc_act_window_g2

0xc24b,	// (0x00039b94) bg_popup_call_poc_inact_pane_g3

0xc1cb,	// (0x00039b14) bg_popup_call_poc_inact_pane_g4

0xc253,	// (0x00039b9c) bg_popup_call_poc_inact_pane_g5

0xb2d8,	// (0x00038c21) popup_call_poc_act_window_t1_ParamLimits

0xb2d8,	// (0x00038c21) popup_call_poc_act_window_t1

0xb300,	// (0x00038c49) popup_call_poc_act_window_t2_ParamLimits

0xb300,	// (0x00038c49) popup_call_poc_act_window_t2

0xb328,	// (0x00038c71) popup_call_poc_act_window_t3_ParamLimits

0xb328,	// (0x00038c71) popup_call_poc_act_window_t3

0xb350,	// (0x00038c99) popup_call_poc_act_window_t4_ParamLimits

0xb350,	// (0x00038c99) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003ce4b) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003ce4b) popup_call_poc_act_window_t

0xc25b,	// (0x00039ba4) bg_popup_call_poc_inact_pane_g6

0xc263,	// (0x00039bac) bg_popup_call_poc_inact_pane_g7

0xc26b,	// (0x00039bb4) bg_popup_call_poc_inact_pane_g8

0xb362,	// (0x00038cab) popup_call_poc_inact_window_g2

0xc273,	// (0x00039bbc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0003cef4) bg_popup_call_poc_inact_pane_g

0xb36a,	// (0x00038cb3) popup_call_poc_inact_window_t1_ParamLimits

0xb36a,	// (0x00038cb3) popup_call_poc_inact_window_t1

0xb37f,	// (0x00038cc8) popup_call_poc_inact_window_t2_ParamLimits

0xb37f,	// (0x00038cc8) popup_call_poc_inact_window_t2

0xb394,	// (0x00038cdd) popup_call_poc_inact_window_t3_ParamLimits

0xb394,	// (0x00038cdd) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003ce54) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003ce54) popup_call_poc_inact_window_t

0xc3b8,	// (0x00039d01) context_pane_ParamLimits

0x4ac2,	// (0x0003240b) signal_pane_ParamLimits

0xa479,	// (0x00037dc2) main_call2_pane

0x4a51,	// (0x0003239a) popup_phob_thumbnail2_window_ParamLimits

0x4a51,	// (0x0003239a) popup_phob_thumbnail2_window

0x40fd,	// (0x00031a46) aid_hotspot_pointer_arrow_pane

0x4105,	// (0x00031a4e) aid_hotspot_pointer_hand_pane

0x4832,	// (0x0003217b) phob_pre_status_pane_g5

0x24cc,	// (0x0002fe15) cams_zoom_pane_ParamLimits

0x24db,	// (0x0002fe24) image_vga_pane_ParamLimits

0x24f5,	// (0x0002fe3e) main_camera_pane_g1_ParamLimits

0x2507,	// (0x0002fe50) main_camera_pane_g2_ParamLimits

0x2517,	// (0x0002fe60) main_camera_pane_g3_ParamLimits

0x2527,	// (0x0002fe70) main_camera_pane_g4_ParamLimits

0x2537,	// (0x0002fe80) main_camera_pane_g5_ParamLimits

0x2547,	// (0x0002fe90) main_camera_pane_g6_ParamLimits

0x2557,	// (0x0002fea0) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003cb53) main_camera_pane_g_ParamLimits

0x2567,	// (0x0002feb0) main_camera_pane_t1_ParamLimits

0x257d,	// (0x0002fec6) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003cb64) main_camera_pane_t_ParamLimits

0xa1c3,	// (0x00037b0c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa1c3,	// (0x00037b0c) bg_popup_preview_window_pane_cp01

0xb3a9,	// (0x00038cf2) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3a9,	// (0x00038cf2) popup_phob_thumbnail2_window_g1

0x9f68,	// (0x000378b1) call2_cli_visual_pane

0x451c,	// (0x00031e65) popup_call2_audio_conf_window_ParamLimits

0x451c,	// (0x00031e65) popup_call2_audio_conf_window

0x453c,	// (0x00031e85) popup_call2_audio_first_window_ParamLimits

0x453c,	// (0x00031e85) popup_call2_audio_first_window

0x45d2,	// (0x00031f1b) popup_call2_audio_in_window_ParamLimits

0x45d2,	// (0x00031f1b) popup_call2_audio_in_window

0x461a,	// (0x00031f63) popup_call2_audio_out_window_ParamLimits

0x461a,	// (0x00031f63) popup_call2_audio_out_window

0x4684,	// (0x00031fcd) popup_call2_audio_second_window_ParamLimits

0x4684,	// (0x00031fcd) popup_call2_audio_second_window

0x46ea,	// (0x00032033) popup_call2_audio_wait_window_ParamLimits

0x46ea,	// (0x00032033) popup_call2_audio_wait_window

0x9f68,	// (0x000378b1) bg_popup_call2_act_pane_cp03

0xa1a5,	// (0x00037aee) list_conf_pane_cp

0xb3b5,	// (0x00038cfe) popup_call2_audio_conf_window_t1

0xb3c3,	// (0x00038d0c) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3c3,	// (0x00038d0c) list_single_graphic_popup_conf2_pane

0xac74,	// (0x000385bd) list_highlight_pane_cp04

0xb3d6,	// (0x00038d1f) list_single_graphic_popup_conf2_pane_g1

0xac85,	// (0x000385ce) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003ce5b) list_single_graphic_popup_conf2_pane_g

0xb3e0,	// (0x00038d29) list_single_graphic_popup_conf2_pane_t1

0xb3ee,	// (0x00038d37) bg_popup_call2_act_pane_cp01_ParamLimits

0xb3ee,	// (0x00038d37) bg_popup_call2_act_pane_cp01

0xb478,	// (0x00038dc1) call_type_pane_cp05_ParamLimits

0xb478,	// (0x00038dc1) call_type_pane_cp05

0xb4cc,	// (0x00038e15) popup_call2_audio_second_window_g1_ParamLimits

0xb4cc,	// (0x00038e15) popup_call2_audio_second_window_g1

0xb520,	// (0x00038e69) popup_call2_audio_second_window_g2_ParamLimits

0xb520,	// (0x00038e69) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003ce60) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003ce60) popup_call2_audio_second_window_g

0xb585,	// (0x00038ece) popup_call2_audio_second_window_t1_ParamLimits

0xb585,	// (0x00038ece) popup_call2_audio_second_window_t1

0xb640,	// (0x00038f89) popup_call2_audio_second_window_t2_ParamLimits

0xb640,	// (0x00038f89) popup_call2_audio_second_window_t2

0xb693,	// (0x00038fdc) popup_call2_audio_second_window_t3_ParamLimits

0xb693,	// (0x00038fdc) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003ce67) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003ce67) popup_call2_audio_second_window_t

0x9f68,	// (0x000378b1) bg_popup_call2_in_pane_cp02

0x9f72,	// (0x000378bb) call_type_pane_cp04

0x9f7a,	// (0x000378c3) popup_call2_audio_wait_window_g1

0x9f82,	// (0x000378cb) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003ca42) popup_call2_audio_wait_window_g

0x9f8a,	// (0x000378d3) popup_call2_audio_wait_window_t3

0xb786,	// (0x000390cf) bg_popup_call2_act_pane_ParamLimits

0xb786,	// (0x000390cf) bg_popup_call2_act_pane

0xb846,	// (0x0003918f) call_type_pane_cp03_ParamLimits

0xb846,	// (0x0003918f) call_type_pane_cp03

0xb8aa,	// (0x000391f3) popup_call2_audio_first_window_g1_ParamLimits

0xb8aa,	// (0x000391f3) popup_call2_audio_first_window_g1

0xb91a,	// (0x00039263) popup_call2_audio_first_window_g2_ParamLimits

0xb91a,	// (0x00039263) popup_call2_audio_first_window_g2

0xaf05,	// (0x0003884e) popup_call2_audio_first_window_g3_ParamLimits

0xaf05,	// (0x0003884e) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003ce70) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003ce70) popup_call2_audio_first_window_g

0xb9f8,	// (0x00039341) popup_call2_audio_first_window_t1_ParamLimits

0xb9f8,	// (0x00039341) popup_call2_audio_first_window_t1

0xbafb,	// (0x00039444) popup_call2_audio_first_window_t4_ParamLimits

0xbafb,	// (0x00039444) popup_call2_audio_first_window_t4

0xbbde,	// (0x00039527) popup_call2_audio_first_window_t5_ParamLimits

0xbbde,	// (0x00039527) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003ce7b) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003ce7b) popup_call2_audio_first_window_t

0xa1bb,	// (0x00037b04) bg_popup_call2_act_pane_g1

0xc28b,	// (0x00039bd4) popup_cale_lunar_info_window_t1

0xc299,	// (0x00039be2) popup_cale_lunar_info_window_t2

0xc2a7,	// (0x00039bf0) popup_cale_lunar_info_window_t3

0x9f68,	// (0x000378b1) bg_popup_call2_bubble_pane

0xbcdf,	// (0x00039628) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcdf,	// (0x00039628) bg_popup_call2_in_pane_cp01

0x9c44,	// (0x0003758d) call_type_pane_cp02

0xbd27,	// (0x00039670) popup_call2_audio_out_window_g1_ParamLimits

0xbd27,	// (0x00039670) popup_call2_audio_out_window_g1

0xbd53,	// (0x0003969c) popup_call2_audio_out_window_g2_ParamLimits

0xbd53,	// (0x0003969c) popup_call2_audio_out_window_g2

0xbd7b,	// (0x000396c4) popup_call2_audio_out_window_g3_ParamLimits

0xbd7b,	// (0x000396c4) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003ce84) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003ce84) popup_call2_audio_out_window_g

0xbdb6,	// (0x000396ff) popup_call2_audio_out_window_t1_ParamLimits

0xbdb6,	// (0x000396ff) popup_call2_audio_out_window_t1

0xbe15,	// (0x0003975e) popup_call2_audio_out_window_t2_ParamLimits

0xbe15,	// (0x0003975e) popup_call2_audio_out_window_t2

0xbe69,	// (0x000397b2) popup_call2_audio_out_window_t3_ParamLimits

0xbe69,	// (0x000397b2) popup_call2_audio_out_window_t3

0xbe7f,	// (0x000397c8) popup_call2_audio_out_window_t4_ParamLimits

0xbe7f,	// (0x000397c8) popup_call2_audio_out_window_t4

0xbe95,	// (0x000397de) popup_call2_audio_out_window_t5_ParamLimits

0xbe95,	// (0x000397de) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003ce8d) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003ce8d) popup_call2_audio_out_window_t

0xbef9,	// (0x00039842) bg_popup_call2_in_pane_ParamLimits

0xbef9,	// (0x00039842) bg_popup_call2_in_pane

0xbf55,	// (0x0003989e) popup_call2_audio_in_window_g1_ParamLimits

0xbf55,	// (0x0003989e) popup_call2_audio_in_window_g1

0xbf8d,	// (0x000398d6) popup_call2_audio_in_window_g2_ParamLimits

0xbf8d,	// (0x000398d6) popup_call2_audio_in_window_g2

0xbfc5,	// (0x0003990e) popup_call2_audio_in_window_g3_ParamLimits

0xbfc5,	// (0x0003990e) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003ce9a) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003ce9a) popup_call2_audio_in_window_g

0xc01d,	// (0x00039966) popup_call2_audio_in_window_t1_ParamLimits

0xc01d,	// (0x00039966) popup_call2_audio_in_window_t1

0xc09d,	// (0x000399e6) popup_call2_audio_in_window_t2_ParamLimits

0xc09d,	// (0x000399e6) popup_call2_audio_in_window_t2

0xc11d,	// (0x00039a66) popup_call2_audio_in_window_t3_ParamLimits

0xc11d,	// (0x00039a66) popup_call2_audio_in_window_t3

0xc137,	// (0x00039a80) popup_call2_audio_in_window_t4_ParamLimits

0xc137,	// (0x00039a80) popup_call2_audio_in_window_t4

0xc149,	// (0x00039a92) popup_call2_audio_in_window_t5_ParamLimits

0xc149,	// (0x00039a92) popup_call2_audio_in_window_t5

0xc15e,	// (0x00039aa7) popup_call2_audio_in_window_t6_ParamLimits

0xc15e,	// (0x00039aa7) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003cea3) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003cea3) popup_call2_audio_in_window_t

0xa1bb,	// (0x00037b04) bg_popup_call2_in_pane_g1

0xc2b5,	// (0x00039bfe) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0003cf1e) popup_cale_lunar_info_window_t

0xa1c3,	// (0x00037b0c) bg_popup_call2_rect_pane_ParamLimits

0xa1c3,	// (0x00037b0c) bg_popup_call2_rect_pane

0x9f68,	// (0x000378b1) call2_cli_visual_graphic_pane

0x9f68,	// (0x000378b1) call2_cli_visual_text_pane

0x4b51,	// (0x0003249a) smil_status_volume_pane_g3

0x0002,

0xa2e9,	// (0x00037c32) call2_cli_visual_graphic_pane_g1

0xa2e9,	// (0x00037c32) call2_cli_visual_graphic_pane_g2

0xa2e9,	// (0x00037c32) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003ceb0) call2_cli_visual_graphic_pane_g

0xc173,	// (0x00039abc) bg_popup_call2_rect_pane_g1

0xa387,	// (0x00037cd0) bg_popup_call2_rect_pane_g2

0xc17b,	// (0x00039ac4) bg_popup_call2_rect_pane_g3

0xc183,	// (0x00039acc) bg_popup_call2_rect_pane_g4

0xc18b,	// (0x00039ad4) bg_popup_call2_rect_pane_g5

0xc193,	// (0x00039adc) bg_popup_call2_rect_pane_g6

0xc19b,	// (0x00039ae4) bg_popup_call2_rect_pane_g7

0xc1a3,	// (0x00039aec) bg_popup_call2_rect_pane_g8

0xc1ab,	// (0x00039af4) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003ceb7) bg_popup_call2_rect_pane_g

0xc1b3,	// (0x00039afc) bg_popup_call2_bubble_pane_g1

0xc1bb,	// (0x00039b04) bg_popup_call2_bubble_pane_g2

0xc1c3,	// (0x00039b0c) bg_popup_call2_bubble_pane_g3

0xc1cb,	// (0x00039b14) bg_popup_call2_bubble_pane_g4

0xc1d3,	// (0x00039b1c) bg_popup_call2_bubble_pane_g5

0xc1db,	// (0x00039b24) bg_popup_call2_bubble_pane_g6

0xc1e3,	// (0x00039b2c) bg_popup_call2_bubble_pane_g7

0xc1eb,	// (0x00039b34) bg_popup_call2_bubble_pane_g8

0xc1f3,	// (0x00039b3c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003ceca) bg_popup_call2_bubble_pane_g

0x1fd0,	// (0x0002f919) aid_cale_week_size_cell_pane

0x2593,	// (0x0002fedc) aid_cams_cif_uncrop_pane_ParamLimits

0x2593,	// (0x0002fedc) aid_cams_cif_uncrop_pane

0x2748,	// (0x00030091) aid_cams_size_cell_ParamLimits

0x2748,	// (0x00030091) aid_cams_size_cell

0x275c,	// (0x000300a5) grid_cams_pane_ParamLimits

0x2776,	// (0x000300bf) linegrid_cams_pane_ParamLimits

0x2973,	// (0x000302bc) call_video_pane_t1

0x2991,	// (0x000302da) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003cbb7) call_video_pane_t

0x2db5,	// (0x000306fe) aid_cale_month_size_cell_pane_ParamLimits

0x2db5,	// (0x000306fe) aid_cale_month_size_cell_pane

0xf61e,	// (0x0003cf67) smil_status_volume_pane_g

0x4b5e,	// (0x000324a7) volume_smil_pane_ParamLimits

0x1b1b,	// (0x0002f464) aid_popup2_width_pane

0x1f0c,	// (0x0002f855) cell_qdial_pane_g4_ParamLimits

0x1f0c,	// (0x0002f855) cell_qdial_pane_g4

0x3b07,	// (0x00031450) aid_blid_cardinal_pane_ParamLimits

0x3b13,	// (0x0003145c) aid_blid_destination_pane_ParamLimits

0x3b13,	// (0x0003145c) aid_blid_destination_pane

0xa1c3,	// (0x00037b0c) bg_popup_call_poc_act_pane_ParamLimits

0xa1c3,	// (0x00037b0c) bg_popup_call_poc_act_pane

0xa1c3,	// (0x00037b0c) bg_popup_call_poc_inact_pane_ParamLimits

0xa1c3,	// (0x00037b0c) bg_popup_call_poc_inact_pane

0xc1fb,	// (0x00039b44) bg_popup_call_poc_act_pane_g1

0xc203,	// (0x00039b4c) bg_popup_call_poc_act_pane_g2

0xc20b,	// (0x00039b54) bg_popup_call_poc_act_pane_g3

0xc1cb,	// (0x00039b14) bg_popup_call_poc_act_pane_g4

0xc1d3,	// (0x00039b1c) bg_popup_call_poc_act_pane_g5

0xc213,	// (0x00039b5c) bg_popup_call_poc_act_pane_g6

0xc1e3,	// (0x00039b2c) bg_popup_call_poc_act_pane_g7

0xc21b,	// (0x00039b64) bg_popup_call_poc_act_pane_g8

0x9f68,	// (0x000378b1) main_usb_pane

0x4a2c,	// (0x00032375) popup_cale_lunar_info_window

0x2c5b,	// (0x000305a4) im_reading_pane_t1_ParamLimits

0xa61f,	// (0x00037f68) list_im_pane_ParamLimits

0xa630,	// (0x00037f79) scroll_pane_cp07_ParamLimits

0x9f68,	// (0x000378b1) grid_highlight_pane_cp012

0xa1c3,	// (0x00037b0c) mup_scale_pane_ParamLimits

0xb0fc,	// (0x00038a45) main_usb_pane_g1_ParamLimits

0xb0fc,	// (0x00038a45) main_usb_pane_g1

0x4747,	// (0x00032090) main_usb_pane_g2_ParamLimits

0x4747,	// (0x00032090) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0003cf07) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0003cf07) main_usb_pane_g

0x475d,	// (0x000320a6) main_usb_pane_t1_ParamLimits

0x475d,	// (0x000320a6) main_usb_pane_t1

0x476f,	// (0x000320b8) main_usb_pane_t2_ParamLimits

0x476f,	// (0x000320b8) main_usb_pane_t2

0x4781,	// (0x000320ca) main_usb_pane_t3_ParamLimits

0x4781,	// (0x000320ca) main_usb_pane_t3

0x4793,	// (0x000320dc) main_usb_pane_t4_ParamLimits

0x4793,	// (0x000320dc) main_usb_pane_t4

0x47a5,	// (0x000320ee) main_usb_pane_t5_ParamLimits

0x47a5,	// (0x000320ee) main_usb_pane_t5

0x47b7,	// (0x00032100) main_usb_pane_t6_ParamLimits

0x47b7,	// (0x00032100) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0003cf0c) main_usb_pane_t_ParamLimits

0x3ab6,	// (0x000313ff) aid_text_placing

0x3abf,	// (0x00031408) main_location2_pane_t1_ParamLimits

0x3ad1,	// (0x0003141a) main_location2_pane_t2_ParamLimits

0x3ae3,	// (0x0003142c) main_location2_pane_t3_ParamLimits

0x3af5,	// (0x0003143e) main_location2_pane_t4_ParamLimits

0x3af5,	// (0x0003143e) main_location2_pane_t4

0xf3cf,	// (0x0003cd18) main_location2_pane_t_ParamLimits

0xa1ff,	// (0x00037b48) find_pinb_pane_g2_ParamLimits

0xa1ff,	// (0x00037b48) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003ca68) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003ca68) find_pinb_pane_g

0xa20b,	// (0x00037b54) find_pinb_pane_t1_ParamLimits

0xa21d,	// (0x00037b66) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003ca6d) find_pinb_pane_t_ParamLimits

0x9f68,	// (0x000378b1) main_call3_pane

0x329c,	// (0x00030be5) cale_month_day_heading_pane_t1_ParamLimits

0x32de,	// (0x00030c27) cale_month_day_heading_pane_t2_ParamLimits

0x3313,	// (0x00030c5c) cale_month_day_heading_pane_t3_ParamLimits

0x3348,	// (0x00030c91) cale_month_day_heading_pane_t4_ParamLimits

0x3385,	// (0x00030cce) cale_month_day_heading_pane_t5_ParamLimits

0x33ca,	// (0x00030d13) cale_month_day_heading_pane_t6_ParamLimits

0x340f,	// (0x00030d58) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003cbef) cale_month_day_heading_pane_t_ParamLimits

0xa87a,	// (0x000381c3) smil_status_volume_pane

0x4240,	// (0x00031b89) postcard_address_pane_ParamLimits

0x4240,	// (0x00031b89) postcard_address_pane

0x4252,	// (0x00031b9b) postcard_message_pane_ParamLimits

0x4252,	// (0x00031b9b) postcard_message_pane

0x4724,	// (0x0003206d) call2_cli_visual_pane_t1_ParamLimits

0x4724,	// (0x0003206d) call2_cli_visual_pane_t1

0x4d13,	// (0x0003265c) postcard_message_pane_t1_ParamLimits

0x4d13,	// (0x0003265c) postcard_message_pane_t1

0x4cfc,	// (0x00032645) postcard_address_pane_t1_ParamLimits

0x4cfc,	// (0x00032645) postcard_address_pane_t1

0x4ce8,	// (0x00032631) popup_call3_audio_in_window_ParamLimits

0x4ce8,	// (0x00032631) popup_call3_audio_in_window

0x4b73,	// (0x000324bc) bg_popup_call3_in_pane_ParamLimits

0x4b73,	// (0x000324bc) bg_popup_call3_in_pane

0x4be9,	// (0x00032532) popup_call3_audio_in_window_g1_ParamLimits

0x4be9,	// (0x00032532) popup_call3_audio_in_window_g1

0x4c09,	// (0x00032552) popup_call3_audio_in_window_g2_ParamLimits

0x4c09,	// (0x00032552) popup_call3_audio_in_window_g2

0x4c29,	// (0x00032572) popup_call3_audio_in_window_g3_ParamLimits

0x4c29,	// (0x00032572) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0003cf6e) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0003cf6e) popup_call3_audio_in_window_g

0x4c5a,	// (0x000325a3) popup_call3_audio_in_window_t1_ParamLimits

0x4c5a,	// (0x000325a3) popup_call3_audio_in_window_t1

0x4c98,	// (0x000325e1) popup_call3_audio_in_window_t2_ParamLimits

0x4c98,	// (0x000325e1) popup_call3_audio_in_window_t2

0x4cd6,	// (0x0003261f) popup_call3_audio_in_window_t3_ParamLimits

0x4cd6,	// (0x0003261f) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0003cf77) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0003cf77) popup_call3_audio_in_window_t

0xa479,	// (0x00037dc2) bg_popup_call3_rect_pane

0xc173,	// (0x00039abc) bg_popup_call3_rect_pane_g1

0xa387,	// (0x00037cd0) bg_popup_call3_rect_pane_g2

0xc17b,	// (0x00039ac4) bg_popup_call3_rect_pane_g3

0xc183,	// (0x00039acc) bg_popup_call3_rect_pane_g4

0xc18b,	// (0x00039ad4) bg_popup_call3_rect_pane_g5

0xc193,	// (0x00039adc) bg_popup_call3_rect_pane_g6

0xc19b,	// (0x00039ae4) bg_popup_call3_rect_pane_g7

0x3dff,	// (0x00031748) mup_visualizer_osc_pane

0xb01e,	// (0x00038967) mup_visualizer_spec_pane

0x4ba3,	// (0x000324ec) call3_video_qcif_pane_ParamLimits

0x4ba3,	// (0x000324ec) call3_video_qcif_pane

0x4bb6,	// (0x000324ff) call3_video_qcif_uncrop_pane_ParamLimits

0x4bb6,	// (0x000324ff) call3_video_qcif_uncrop_pane

0x4bc4,	// (0x0003250d) call3_video_subqcif_pane_ParamLimits

0x4bc4,	// (0x0003250d) call3_video_subqcif_pane

0x4bd8,	// (0x00032521) call3_video_subqcif_uncrop_pane_ParamLimits

0x4bd8,	// (0x00032521) call3_video_subqcif_uncrop_pane

0x4c49,	// (0x00032592) popup_call3_audio_in_window_g4_ParamLimits

0x4c49,	// (0x00032592) popup_call3_audio_in_window_g4

0x4b40,	// (0x00032489) mup_spec_half_pane

0x4b49,	// (0x00032492) mup_spec_half_pane_cp

0xc418,	// (0x00039d61) mup_osc_middle_pane

0xc421,	// (0x00039d6a) mup_visualizer_osc_pane_g1

0x4b20,	// (0x00032469) mup_spec_bar_pane_ParamLimits

0x4b20,	// (0x00032469) mup_spec_bar_pane

0xc405,	// (0x00039d4e) mup_spec_bar_pane_g1

0xc40f,	// (0x00039d58) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0003cf62) mup_spec_bar_pane_g

0x1fd0,	// (0x0002f919) aid_cale_week_size_cell_pane_ParamLimits

0x1fea,	// (0x0002f933) bg_cale_heading_pane_ParamLimits

0xa3d2,	// (0x00037d1b) bg_cale_pane_cp01_ParamLimits

0x2002,	// (0x0002f94b) cale_week_corner_pane_ParamLimits

0x2021,	// (0x0002f96a) cale_week_day_heading_pane_ParamLimits

0x203e,	// (0x0002f987) cale_week_scroll_pane_g1_ParamLimits

0x2051,	// (0x0002f99a) cale_week_scroll_pane_g2_ParamLimits

0x2069,	// (0x0002f9b2) cale_week_scroll_pane_g3_ParamLimits

0x2081,	// (0x0002f9ca) cale_week_scroll_pane_g4_ParamLimits

0x2099,	// (0x0002f9e2) cale_week_scroll_pane_g5_ParamLimits

0x20b9,	// (0x0002fa02) cale_week_scroll_pane_g6_ParamLimits

0x20d9,	// (0x0002fa22) cale_week_scroll_pane_g7_ParamLimits

0x20f9,	// (0x0002fa42) cale_week_scroll_pane_g8_ParamLimits

0x211d,	// (0x0002fa66) cale_week_scroll_pane_g9_ParamLimits

0x2135,	// (0x0002fa7e) cale_week_scroll_pane_g10_ParamLimits

0x214d,	// (0x0002fa96) cale_week_scroll_pane_g11_ParamLimits

0x2165,	// (0x0002faae) cale_week_scroll_pane_g12_ParamLimits

0x217d,	// (0x0002fac6) cale_week_scroll_pane_g13_ParamLimits

0x217d,	// (0x0002fac6) cale_week_scroll_pane_g14_ParamLimits

0x217d,	// (0x0002fac6) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003caf9) cale_week_scroll_pane_g_ParamLimits

0x21b9,	// (0x0002fb02) cale_week_time_pane_ParamLimits

0x21dd,	// (0x0002fb26) grid_cale_week_pane_ParamLimits

0xa3ef,	// (0x00037d38) listscroll_cale_week_pane_t1

0xa401,	// (0x00037d4a) scroll_pane_cp08_ParamLimits

0x2e15,	// (0x0003075e) cale_month_corner_pane_ParamLimits

0xa850,	// (0x00038199) cale_month_pane_t1

0x322f,	// (0x00030b78) cale_month_week_pane_ParamLimits

0x3878,	// (0x000311c1) popup_call_status_window_g1_ParamLimits

0x388c,	// (0x000311d5) popup_call_status_window_g2_ParamLimits

0x38a0,	// (0x000311e9) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003cc9f) popup_call_status_window_g_ParamLimits

0xabf4,	// (0x0003853d) aid_call2_pane

0x4076,	// (0x000319bf) msg_header_pane_g1

0x4240,	// (0x00031b89) postcard_address2_pane_ParamLimits

0x4240,	// (0x00031b89) postcard_address2_pane

0x4252,	// (0x00031b9b) postcard_message2_pane_ParamLimits

0x4252,	// (0x00031b9b) postcard_message2_pane

0x4ad0,	// (0x00032419) message2_row_pane_ParamLimits

0x4ad0,	// (0x00032419) message2_row_pane

0x4aed,	// (0x00032436) address2_row_pane_ParamLimits

0x4aed,	// (0x00032436) address2_row_pane

0xc3d3,	// (0x00039d1c) postcard_message2_row_pane_g1

0xc3db,	// (0x00039d24) postcard_message2_row_pane_t1

0xc3d3,	// (0x00039d1c) address2_row_pane_g1

0xc3db,	// (0x00039d24) address2_row_pane_t1

0x2441,	// (0x0002fd8a) aid_size_cell_vorec

0x9f68,	// (0x000378b1) main_rss_pane

0x4b00,	// (0x00032449) rss_list_single_pane_ParamLimits

0x4b00,	// (0x00032449) rss_list_single_pane

0xc3e9,	// (0x00039d32) rss_list_single_pane_t1

0xc3f7,	// (0x00039d40) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0003cf5d) rss_list_single_pane_t

0x9f68,	// (0x000378b1) main_camera2_pane

0x9f68,	// (0x000378b1) main_video2_pane

0x0b5d,	// (0x0002e4a6) cams_zoom_pane_cp2_ParamLimits

0x0b5d,	// (0x0002e4a6) cams_zoom_pane_cp2

0x0b7d,	// (0x0002e4c6) image2_vga_pane_ParamLimits

0x0b7d,	// (0x0002e4c6) image2_vga_pane

0x0bce,	// (0x0002e517) main_camera2_pane_g1_ParamLimits

0x0bce,	// (0x0002e517) main_camera2_pane_g1

0x0bee,	// (0x0002e537) main_camera2_pane_g2_ParamLimits

0x0bee,	// (0x0002e537) main_camera2_pane_g2

0x0c0e,	// (0x0002e557) main_camera2_pane_g3_ParamLimits

0x0c0e,	// (0x0002e557) main_camera2_pane_g3

0x0c2e,	// (0x0002e577) main_camera2_pane_g4_ParamLimits

0x0c2e,	// (0x0002e577) main_camera2_pane_g4

0x0c4e,	// (0x0002e597) main_camera2_pane_g5_ParamLimits

0x0c4e,	// (0x0002e597) main_camera2_pane_g5

0x0c6e,	// (0x0002e5b7) main_camera2_pane_g6_ParamLimits

0x0c6e,	// (0x0002e5b7) main_camera2_pane_g6

0x0c8e,	// (0x0002e5d7) main_camera2_pane_g7_ParamLimits

0x0c8e,	// (0x0002e5d7) main_camera2_pane_g7

0x0cae,	// (0x0002e5f7) main_camera2_pane_g8_ParamLimits

0x0cae,	// (0x0002e5f7) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0003cf7e) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0003cf7e) main_camera2_pane_g

0x0cee,	// (0x0002e637) main_camera2_pane_t1_ParamLimits

0x0cee,	// (0x0002e637) main_camera2_pane_t1

0x0d23,	// (0x0002e66c) main_camera2_pane_t2_ParamLimits

0x0d23,	// (0x0002e66c) main_camera2_pane_t2

0x0d49,	// (0x0002e692) main_camera2_pane_t3_ParamLimits

0x0d49,	// (0x0002e692) main_camera2_pane_t3

0x0da7,	// (0x0002e6f0) main_camera2_pane_t4_ParamLimits

0x0da7,	// (0x0002e6f0) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0003cf91) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0003cf91) main_camera2_pane_t

0x0e39,	// (0x0002e782) cams_zoom_pane_cp4_ParamLimits

0x0e39,	// (0x0002e782) cams_zoom_pane_cp4

0x0e4f,	// (0x0002e798) image2_cif_pane_ParamLimits

0x0e4f,	// (0x0002e798) image2_cif_pane

0x0e7a,	// (0x0002e7c3) image2_subqcif_pane_ParamLimits

0x0e7a,	// (0x0002e7c3) image2_subqcif_pane

0x0e94,	// (0x0002e7dd) main_video2_pane_g1_ParamLimits

0x0e94,	// (0x0002e7dd) main_video2_pane_g1

0x0eae,	// (0x0002e7f7) main_video2_pane_g2_ParamLimits

0x0eae,	// (0x0002e7f7) main_video2_pane_g2

0x0ec4,	// (0x0002e80d) main_video2_pane_g3_ParamLimits

0x0ec4,	// (0x0002e80d) main_video2_pane_g3

0x0eda,	// (0x0002e823) main_video2_pane_g4_ParamLimits

0x0eda,	// (0x0002e823) main_video2_pane_g4

0x0ef0,	// (0x0002e839) main_video2_pane_g5_ParamLimits

0x0ef0,	// (0x0002e839) main_video2_pane_g5

0x0f06,	// (0x0002e84f) main_video2_pane_g6_ParamLimits

0x0f06,	// (0x0002e84f) main_video2_pane_g6

0x0005,

0xf657,	// (0x0003cfa0) main_video2_pane_g_ParamLimits

0xf657,	// (0x0003cfa0) main_video2_pane_g

0x0f20,	// (0x0002e869) main_video2_pane_t1_ParamLimits

0x0f20,	// (0x0002e869) main_video2_pane_t1

0x0f44,	// (0x0002e88d) main_video2_pane_t2_ParamLimits

0x0f44,	// (0x0002e88d) main_video2_pane_t2

0x0f92,	// (0x0002e8db) main_video2_pane_t3_ParamLimits

0x0f92,	// (0x0002e8db) main_video2_pane_t3

0x0002,

0xf664,	// (0x0003cfad) main_video2_pane_t_ParamLimits

0xf664,	// (0x0003cfad) main_video2_pane_t

0x4872,	// (0x000321bb) call_muted_g2

0x0001,

0xf606,	// (0x0003cf4f) call_muted_g

0x9f68,	// (0x000378b1) main_mup2_pane

0x4d5e,	// (0x000326a7) main_mup2_pane_g1_ParamLimits

0x4d5e,	// (0x000326a7) main_mup2_pane_g1

0x4d6a,	// (0x000326b3) main_mup2_pane_g2_ParamLimits

0x4d6a,	// (0x000326b3) main_mup2_pane_g2

0x4fd9,	// (0x00032922) main_mup_pane_g13_cp1

0x4fe1,	// (0x0003292a) mup_volume_pane_cp1

0x4d86,	// (0x000326cf) main_mup2_pane_g4_ParamLimits

0x4d86,	// (0x000326cf) main_mup2_pane_g4

0x4d98,	// (0x000326e1) main_mup2_pane_g5_ParamLimits

0x4d98,	// (0x000326e1) main_mup2_pane_g5

0x4daa,	// (0x000326f3) main_mup2_pane_g6_ParamLimits

0x4daa,	// (0x000326f3) main_mup2_pane_g6

0x4dbc,	// (0x00032705) main_mup2_pane_g7_ParamLimits

0x4dbc,	// (0x00032705) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0003cfb4) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0003cfb4) main_mup2_pane_g

0x4dd4,	// (0x0003271d) main_mup2_pane_t1_ParamLimits

0x4dd4,	// (0x0003271d) main_mup2_pane_t1

0x4dea,	// (0x00032733) main_mup2_pane_t2_ParamLimits

0x4dea,	// (0x00032733) main_mup2_pane_t2

0x4e00,	// (0x00032749) main_mup2_pane_t3_ParamLimits

0x4e00,	// (0x00032749) main_mup2_pane_t3

0x4e16,	// (0x0003275f) main_mup2_pane_t4_ParamLimits

0x4e16,	// (0x0003275f) main_mup2_pane_t4

0x4e2e,	// (0x00032777) main_mup2_pane_t5_ParamLimits

0x4e2e,	// (0x00032777) main_mup2_pane_t5

0x4e46,	// (0x0003278f) main_mup2_pane_t6_ParamLimits

0x4e46,	// (0x0003278f) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0003cfc3) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0003cfc3) main_mup2_pane_t

0x4e76,	// (0x000327bf) mup2_visualizer_pane_ParamLimits

0x4e76,	// (0x000327bf) mup2_visualizer_pane

0x4ea4,	// (0x000327ed) mup_progress_pane_cp_ParamLimits

0x4ea4,	// (0x000327ed) mup_progress_pane_cp

0x4fc4,	// (0x0003290d) mup_volume_pane_cp_ParamLimits

0x4fc4,	// (0x0003290d) mup_volume_pane_cp

0x4eb8,	// (0x00032801) mup2_visualizer_pane_g1_ParamLimits

0x4eb8,	// (0x00032801) mup2_visualizer_pane_g1

0xc458,	// (0x00039da1) mup2_visualizer_pane_g2_ParamLimits

0xc458,	// (0x00039da1) mup2_visualizer_pane_g2

0x4ecf,	// (0x00032818) mup2_visualizer_pane_g3_ParamLimits

0x4ecf,	// (0x00032818) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0003cfd0) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0003cfd0) mup2_visualizer_pane_g

0xb245,	// (0x00038b8e) aid_size_cell_fmradio

0x084b,	// (0x0002e194) aid_height_parent_landcape

0xa6ae,	// (0x00037ff7) wml_content_pane_cp

0xa6b6,	// (0x00037fff) wml_tabs_pane

0xa6bf,	// (0x00038008) popup_wml_miniature_window

0xa6c7,	// (0x00038010) scroll_pane_cp021

0xa6db,	// (0x00038024) wml_content_pane_comp8

0x9f68,	// (0x000378b1) bg_popup_sub_pane_cp05

0xc476,	// (0x00039dbf) popup_wml_miniature_window_g1

0xc47e,	// (0x00039dc7) wml_miniature_view_pane

0x4edb,	// (0x00032824) aid_size_wml_view

0x4ee3,	// (0x0003282c) wml_miniature_view_pane_g1

0x4eec,	// (0x00032835) wml_miniature_view_pane_g2

0x4ef5,	// (0x0003283e) wml_miniature_view_pane_g3

0x4efd,	// (0x00032846) wml_miniature_view_pane_g4

0x4f05,	// (0x0003284e) wml_miniature_view_pane_g5

0x4f0d,	// (0x00032856) wml_miniature_view_pane_g6

0x4f15,	// (0x0003285e) wml_miniature_view_pane_g7

0x4f1d,	// (0x00032866) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0003cfd7) wml_miniature_view_pane_g

0xc486,	// (0x00039dcf) background_graphic_ParamLimits

0xc486,	// (0x00039dcf) background_graphic

0xc492,	// (0x00039ddb) wml_tabs_2_pane

0xc49b,	// (0x00039de4) wml_tabs_3_pane_ParamLimits

0xc49b,	// (0x00039de4) wml_tabs_3_pane

0xc4ad,	// (0x00039df6) wml_tabs_4_pane_ParamLimits

0xc4ad,	// (0x00039df6) wml_tabs_4_pane

0xc4c3,	// (0x00039e0c) wml_tabs_5_pane_ParamLimits

0xc4c3,	// (0x00039e0c) wml_tabs_5_pane

0xc4dd,	// (0x00039e26) wml_tabs_pane_g2_ParamLimits

0xc4dd,	// (0x00039e26) wml_tabs_pane_g2

0xc4f1,	// (0x00039e3a) wml_tabs_pane_g3_ParamLimits

0xc4f1,	// (0x00039e3a) wml_tabs_pane_g3

0x4f25,	// (0x0003286e) wml_tabs_2_active_pane_ParamLimits

0x4f25,	// (0x0003286e) wml_tabs_2_active_pane

0x4f39,	// (0x00032882) wml_tabs_2_passive_pane_ParamLimits

0x4f39,	// (0x00032882) wml_tabs_2_passive_pane

0x4f4d,	// (0x00032896) wml_tabs_3_active_pane_cp_ParamLimits

0x4f4d,	// (0x00032896) wml_tabs_3_active_pane_cp

0x4f62,	// (0x000328ab) wml_tabs_3_passive_pane_ParamLimits

0x4f62,	// (0x000328ab) wml_tabs_3_passive_pane

0x4f75,	// (0x000328be) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f75,	// (0x000328be) wml_tabs_3_passive_pane_cp

0x4f8c,	// (0x000328d5) tabs_4_active_pane

0x4f94,	// (0x000328dd) tabs_4_passive_pane

0x4f9e,	// (0x000328e7) tabs_4_passive_pane_cp

0x4fa6,	// (0x000328ef) tabs_4_passive_pane_cp2

0x473f,	// (0x00032088) aid_height_text

0x3dd1,	// (0x0003171a) mup_volume_cont_pane_ParamLimits

0x3dd1,	// (0x0003171a) mup_volume_cont_pane

0x1c95,	// (0x0002f5de) aid_size_cell_pinb

0x1c9f,	// (0x0002f5e8) aid_size_list_pinb

0x4e90,	// (0x000327d9) mup2_volume_cont_pane_ParamLimits

0x4e90,	// (0x000327d9) mup2_volume_cont_pane

0x4fb0,	// (0x000328f9) mup2_volume_cont_pane_g1_ParamLimits

0x4fb0,	// (0x000328f9) mup2_volume_cont_pane_g1

0x039f,	// (0x0002dce8) aid_size_cell_touch_ParamLimits

0x039f,	// (0x0002dce8) aid_size_cell_touch

0x0587,	// (0x0002ded0) touch_pane_ParamLimits

0x0587,	// (0x0002ded0) touch_pane

0x1bcc,	// (0x0002f515) main_rss2_pane

0xc50e,	// (0x00039e57) listscroll_rss2_pane

0xc517,	// (0x00039e60) rss2_navigation_pane

0xc51f,	// (0x00039e68) list_rss2_pane

0xad19,	// (0x00038662) scroll_pane_cp22

0xc527,	// (0x00039e70) rss2_navigation_pane_g1

0xc530,	// (0x00039e79) rss2_navigation_pane_g2

0xc538,	// (0x00039e81) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0003cfe8) rss2_navigation_pane_g

0xc540,	// (0x00039e89) rss2_navigation_pane_t1

0x4fe9,	// (0x00032932) rss2_list_single_pane_ParamLimits

0x4fe9,	// (0x00032932) rss2_list_single_pane

0xc54e,	// (0x00039e97) rss2_list_single_pane_t2

0xc55c,	// (0x00039ea5) rss2_list_single_pane_t3_ParamLimits

0xc55c,	// (0x00039ea5) rss2_list_single_pane_t3

0xc579,	// (0x00039ec2) rss2_list_single_pane_t4

0x3661,	// (0x00030faa) smil_status_pane_g1

0x1bb2,	// (0x0002f4fb) main_image2_pane_ParamLimits

0x1bb2,	// (0x0002f4fb) main_image2_pane

0x0cce,	// (0x0002e617) main_camera2_pane_g9_ParamLimits

0x0cce,	// (0x0002e617) main_camera2_pane_g9

0x0dfc,	// (0x0002e745) main_camera2_pane_t5_ParamLimits

0x0dfc,	// (0x0002e745) main_camera2_pane_t5

0x4d2e,	// (0x00032677) main_camera2_pane_t6_ParamLimits

0x4d2e,	// (0x00032677) main_camera2_pane_t6

0x4fff,	// (0x00032948) main_image2_pane_g1_ParamLimits

0x4fff,	// (0x00032948) main_image2_pane_g1

0x447a,	// (0x00031dc3) smil2_video_pane_ParamLimits

0x447a,	// (0x00031dc3) smil2_video_pane

0x1b27,	// (0x0002f470) aid_zoom_text_primary_cp

0x1ba8,	// (0x0002f4f1) popup_preview_fixed_window

0xa617,	// (0x00037f60) im_reading_pane_g1

0x0b45,	// (0x0002e48e) cams2_bc_adjust_pane_cp_ParamLimits

0x0b45,	// (0x0002e48e) cams2_bc_adjust_pane_cp

0x0e2b,	// (0x0002e774) cams2_bc_adjust_pane_ParamLimits

0x0e2b,	// (0x0002e774) cams2_bc_adjust_pane

0xd6d5,	// (0x0003b01e) cams2_bc_adjust_pane_g1

0x5015,	// (0x0003295e) cams2_slider_pane

0x501e,	// (0x00032967) cams2_slider_pane_g1

0x5027,	// (0x00032970) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0003cfef) cams2_slider_pane_g

0x05f7,	// (0x0002df40) calc_display_pane_ParamLimits

0x061f,	// (0x0002df68) calc_paper_pane_ParamLimits

0x0642,	// (0x0002df8b) grid_calc_pane_ParamLimits

0x3901,	// (0x0003124a) popup_clock_digital_window_t1_ParamLimits

0xb1e2,	// (0x00038b2b) main_image_pane_t1

0x05d9,	// (0x0002df22) aid_size_cell_calc_ParamLimits

0x05d9,	// (0x0002df22) aid_size_cell_calc

0x08a3,	// (0x0002e1ec) popup_blid_sat_info2_window_ParamLimits

0x08a3,	// (0x0002e1ec) popup_blid_sat_info2_window

0xc58f,	// (0x00039ed8) aid_size_cell_blid

0xc597,	// (0x00039ee0) bg_popup_window_pane_cp07

0xc5ba,	// (0x00039f03) grid_popup_blid_pane

0xc5c4,	// (0x00039f0d) heading_pane_cp05_ParamLimits

0xc5c4,	// (0x00039f0d) heading_pane_cp05

0xc68e,	// (0x00039fd7) cell_popup_blid_pane_ParamLimits

0xc68e,	// (0x00039fd7) cell_popup_blid_pane

0xc6b2,	// (0x00039ffb) cell_popup_blid_pane_g1

0xc6ba,	// (0x0003a003) cell_popup_blid_pane_t1

0x4e60,	// (0x000327a9) mup2_indicator_pane_ParamLimits

0x4e60,	// (0x000327a9) mup2_indicator_pane

0xa479,	// (0x00037dc2) mup2_visualizer_osc_pane

0xc464,	// (0x00039dad) mup2_visualizer_spec_pane_ParamLimits

0xc464,	// (0x00039dad) mup2_visualizer_spec_pane

0x5041,	// (0x0003298a) mup2_spec_half_pane

0x504a,	// (0x00032993) mup2_spec_half_pane_cp

0x5052,	// (0x0003299b) mup2_spec_bar_pane_ParamLimits

0x5052,	// (0x0003299b) mup2_spec_bar_pane

0xc405,	// (0x00039d4e) mup2_spec_bar_pane_g1

0xc40f,	// (0x00039d58) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0003cf62) mup2_spec_bar_pane_g

0x5072,	// (0x000329bb) mup2_osc_middle_pane

0xc421,	// (0x00039d6a) mup2_visualizer_osc_pane_g1

0x9b75,	// (0x000374be) popup_number_entry_window_t1_ParamLimits

0x9b88,	// (0x000374d1) popup_number_entry_window_t2_ParamLimits

0x9b9a,	// (0x000374e3) popup_number_entry_window_t3_ParamLimits

0x1bd6,	// (0x0002f51f) popup_number_entry_window_t5_ParamLimits

0x1bd6,	// (0x0002f51f) popup_number_entry_window_t5

0xf0ca,	// (0x0003ca13) popup_number_entry_window_t_ParamLimits

0x9bac,	// (0x000374f5) text_title_cp2_ParamLimits

0x410d,	// (0x00031a56) aid_hotspot_pointer_text2_pane

0x4163,	// (0x00031aac) main_viewer_pane_g9_ParamLimits

0x4163,	// (0x00031aac) main_viewer_pane_g9

0xa850,	// (0x00038199) cale_month_pane_t1_ParamLimits

0xa88d,	// (0x000381d6) bg_cale_pane_ParamLimits

0xa8a5,	// (0x000381ee) list_cale_pane_ParamLimits

0xa8b6,	// (0x000381ff) listscroll_cale_day_pane_t1

0xa8c8,	// (0x00038211) scroll_pane_cp09_ParamLimits

0x3e07,	// (0x00031750) main_mup_eq_pane_t1_ParamLimits

0x3e07,	// (0x00031750) main_mup_eq_pane_t1

0x3e21,	// (0x0003176a) main_mup_eq_pane_t2_ParamLimits

0x3e21,	// (0x0003176a) main_mup_eq_pane_t2

0x3e3b,	// (0x00031784) main_mup_eq_pane_t3_ParamLimits

0x3e3b,	// (0x00031784) main_mup_eq_pane_t3

0x3e57,	// (0x000317a0) main_mup_eq_pane_t4_ParamLimits

0x3e57,	// (0x000317a0) main_mup_eq_pane_t4

0x3e73,	// (0x000317bc) main_mup_eq_pane_t5_ParamLimits

0x3e73,	// (0x000317bc) main_mup_eq_pane_t5

0x3e8f,	// (0x000317d8) main_mup_eq_pane_t6_ParamLimits

0x3e8f,	// (0x000317d8) main_mup_eq_pane_t6

0x3ea3,	// (0x000317ec) main_mup_eq_pane_t7_ParamLimits

0x3ea3,	// (0x000317ec) main_mup_eq_pane_t7

0x3eb7,	// (0x00031800) main_mup_eq_pane_t8_ParamLimits

0x3eb7,	// (0x00031800) main_mup_eq_pane_t8

0x3ecb,	// (0x00031814) main_mup_eq_pane_t9_ParamLimits

0x3ecb,	// (0x00031814) main_mup_eq_pane_t9

0x3ee5,	// (0x0003182e) main_mup_eq_pane_t10_ParamLimits

0x3ee5,	// (0x0003182e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003cd9e) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003cd9e) main_mup_eq_pane_t

0x3f94,	// (0x000318dd) mup_equalizer_pane_cp5_ParamLimits

0x3fa8,	// (0x000318f1) mup_equalizer_pane_cp6_ParamLimits

0x3fbc,	// (0x00031905) mup_equalizer_pane_cp7_ParamLimits

0x1bcc,	// (0x0002f515) main_gallery_pane

0xc42a,	// (0x00039d73) smil2_volume_pane

0xc432,	// (0x00039d7b) smil_status_volume_pane_g1_ParamLimits

0xc445,	// (0x00039d8e) smil_status_volume_pane_g2_ParamLimits

0x4b51,	// (0x0003249a) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0003cf67) smil_status_volume_pane_g_ParamLimits

0xc597,	// (0x00039ee0) bg_popup_window_pane_cp07_ParamLimits

0xc5a5,	// (0x00039eee) blid_firmament_pane

0x507b,	// (0x000329c4) aid_size_cell_gallery_ParamLimits

0x507b,	// (0x000329c4) aid_size_cell_gallery

0x5091,	// (0x000329da) grid_gallery_pane_ParamLimits

0x5091,	// (0x000329da) grid_gallery_pane

0x50aa,	// (0x000329f3) cell_gallery_pane_ParamLimits

0x50aa,	// (0x000329f3) cell_gallery_pane

0xc6c8,	// (0x0003a011) bg_cell_gallery_focus_pane_ParamLimits

0xc6c8,	// (0x0003a011) bg_cell_gallery_focus_pane

0xc6da,	// (0x0003a023) cell_gallery_pane_g1_ParamLimits

0xc6da,	// (0x0003a023) cell_gallery_pane_g1

0x50f3,	// (0x00032a3c) cell_gallery_pane_g2_ParamLimits

0x50f3,	// (0x00032a3c) cell_gallery_pane_g2

0x5100,	// (0x00032a49) cell_gallery_pane_g3_ParamLimits

0x5100,	// (0x00032a49) cell_gallery_pane_g3

0xc6e6,	// (0x0003a02f) cell_gallery_pane_g4_ParamLimits

0xc6e6,	// (0x0003a02f) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0003d015) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0003d015) cell_gallery_pane_g

0xc6f2,	// (0x0003a03b) bg_cell_gallery_focus_pane_g1

0xc6fa,	// (0x0003a043) bg_cell_gallery_focus_pane_g2

0xc702,	// (0x0003a04b) bg_cell_gallery_focus_pane_g3

0xc70a,	// (0x0003a053) bg_cell_gallery_focus_pane_g4

0xc712,	// (0x0003a05b) bg_cell_gallery_focus_pane_g5

0xc71a,	// (0x0003a063) bg_cell_gallery_focus_pane_g6

0xc722,	// (0x0003a06b) bg_cell_gallery_focus_pane_g7

0xc72a,	// (0x0003a073) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0003d01e) bg_cell_gallery_focus_pane_g

0xc732,	// (0x0003a07b) aid_firma_cardinal

0xc746,	// (0x0003a08f) blid_firmament_pane_t1

0xc75d,	// (0x0003a0a6) blid_firmament_pane_t2

0xc774,	// (0x0003a0bd) blid_firmament_pane_t3

0xc78b,	// (0x0003a0d4) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0003d02f) blid_firmament_pane_t

0xc7a2,	// (0x0003a0eb) blid_sat_info_pane

0xc7b2,	// (0x0003a0fb) blid_sat_info_pane_g1

0xc7b2,	// (0x0003a0fb) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0003d038) blid_sat_info_pane_g

0xc7bc,	// (0x0003a105) blid_sat_info_pane_t1

0xc7ca,	// (0x0003a113) smil2_volume_content_pane

0xc7d3,	// (0x0003a11c) smil2_volume_pane_g1

0xc7db,	// (0x0003a124) smil2_volume_content_pane_g1

0xc7e4,	// (0x0003a12d) smil2_volume_content_pane_g2

0xc7ed,	// (0x0003a136) smil2_volume_content_pane_g3

0xc7f6,	// (0x0003a13f) smil2_volume_content_pane_g4

0xc7ff,	// (0x0003a148) smil2_volume_content_pane_g5

0xc808,	// (0x0003a151) smil2_volume_content_pane_g6

0xc811,	// (0x0003a15a) smil2_volume_content_pane_g7

0xc81a,	// (0x0003a163) smil2_volume_content_pane_g8

0xc823,	// (0x0003a16c) smil2_volume_content_pane_g9

0xc82c,	// (0x0003a175) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0003d03d) smil2_volume_content_pane_g

0x2291,	// (0x0002fbda) cale_week_day_heading_pane_t1_ParamLimits

0x22bb,	// (0x0002fc04) cale_week_day_heading_pane_t2_ParamLimits

0x22ea,	// (0x0002fc33) cale_week_day_heading_pane_t3_ParamLimits

0x2319,	// (0x0002fc62) cale_week_day_heading_pane_t4_ParamLimits

0x2348,	// (0x0002fc91) cale_week_day_heading_pane_t5_ParamLimits

0x237f,	// (0x0002fcc8) cale_week_day_heading_pane_t6_ParamLimits

0x23b6,	// (0x0002fcff) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003cb1a) cale_week_day_heading_pane_t_ParamLimits

0xa41e,	// (0x00037d67) bg_cale_side_pane_ParamLimits

0x0711,	// (0x0002e05a) cale_week_time_pane_t1_ParamLimits

0x072b,	// (0x0002e074) cale_week_time_pane_t2_ParamLimits

0x0745,	// (0x0002e08e) cale_week_time_pane_t3_ParamLimits

0x075f,	// (0x0002e0a8) cale_week_time_pane_t4_ParamLimits

0x0779,	// (0x0002e0c2) cale_week_time_pane_t5_ParamLimits

0x0793,	// (0x0002e0dc) cale_week_time_pane_t6_ParamLimits

0x07ad,	// (0x0002e0f6) cale_week_time_pane_t7_ParamLimits

0x07c7,	// (0x0002e110) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003cb29) cale_week_time_pane_t_ParamLimits

0x23e0,	// (0x0002fd29) cell_cale_week_pane_g2_ParamLimits

0xa41e,	// (0x00037d67) bg_cale_side_pane_cp01_ParamLimits

0x345c,	// (0x00030da5) cale_month_week_pane_t1_ParamLimits

0x3475,	// (0x00030dbe) cale_month_week_pane_t2_ParamLimits

0x348e,	// (0x00030dd7) cale_month_week_pane_t3_ParamLimits

0x34a7,	// (0x00030df0) cale_month_week_pane_t4_ParamLimits

0x34c0,	// (0x00030e09) cale_month_week_pane_t5_ParamLimits

0x34d9,	// (0x00030e22) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003cbfe) cale_month_week_pane_t_ParamLimits

0x364a,	// (0x00030f93) cell_cale_month_pane_g1_ParamLimits

0x1bcc,	// (0x0002f515) main_cale_event_viewer_pane

0x9b4b,	// (0x00037494) listscroll_cale_event_viewer_pane

0xc835,	// (0x0003a17e) list_cale_ev_pane

0xc83d,	// (0x0003a186) scroll_pane_cp023

0xc849,	// (0x0003a192) field_cale_ev_pane_ParamLimits

0xc849,	// (0x0003a192) field_cale_ev_pane

0xc867,	// (0x0003a1b0) field_cale_ev_content_pane_ParamLimits

0xc867,	// (0x0003a1b0) field_cale_ev_content_pane

0xc873,	// (0x0003a1bc) field_cale_ev_pane_g1_ParamLimits

0xc873,	// (0x0003a1bc) field_cale_ev_pane_g1

0xc87f,	// (0x0003a1c8) field_cale_ev_pane_g2_ParamLimits

0xc87f,	// (0x0003a1c8) field_cale_ev_pane_g2

0xc897,	// (0x0003a1e0) field_cale_ev_pane_g3_ParamLimits

0xc897,	// (0x0003a1e0) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0003d052) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0003d052) field_cale_ev_pane_g

0xc8af,	// (0x0003a1f8) field_cale_ev_pane_t1_ParamLimits

0xc8af,	// (0x0003a1f8) field_cale_ev_pane_t1

0xa52e,	// (0x00037e77) field_cale_ev_content_pane_t1_ParamLimits

0xa52e,	// (0x00037e77) field_cale_ev_content_pane_t1

0xb0c8,	// (0x00038a11) bg_button_pane_cp01

0x1fbe,	// (0x0002f907) listscroll_cale_week_pane_ParamLimits

0xa3c9,	// (0x00037d12) popup_toolbar_window_cp01

0xa3ef,	// (0x00037d38) listscroll_cale_week_pane_t1_ParamLimits

0x1fbe,	// (0x0002f907) listscroll_cale_day_pane_ParamLimits

0xa3c9,	// (0x00037d12) popup_toolbar_window_cp02

0xa8b6,	// (0x000381ff) listscroll_cale_day_pane_t1_ParamLimits

0x0869,	// (0x0002e1b2) main_cale_month_pane_ParamLimits

0x4a63,	// (0x000323ac) popup_toolbar_window_cp03_ParamLimits

0x4a63,	// (0x000323ac) popup_toolbar_window_cp03

0x4342,	// (0x00031c8b) main_image_pane_g2_ParamLimits

0x4342,	// (0x00031c8b) main_image_pane_g2

0x4353,	// (0x00031c9c) main_image_pane_g3_ParamLimits

0x4353,	// (0x00031c9c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003ce30) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003ce30) main_image_pane_g

0xb1e2,	// (0x00038b2b) main_image_pane_t1_ParamLimits

0x4364,	// (0x00031cad) main_image_pane_t2_ParamLimits

0x4364,	// (0x00031cad) main_image_pane_t2

0x4376,	// (0x00031cbf) main_image_pane_t3_ParamLimits

0x4376,	// (0x00031cbf) main_image_pane_t3

0x439e,	// (0x00031ce7) main_image_pane_t4_ParamLimits

0x439e,	// (0x00031ce7) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003ce37) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003ce37) main_image_pane_t

0x43be,	// (0x00031d07) popup_image_details_window_cp01

0x43c8,	// (0x00031d11) popup_toobar_trans_pane_cp01_ParamLimits

0x43c8,	// (0x00031d11) popup_toobar_trans_pane_cp01

0x0974,	// (0x0002e2bd) popup_image_details_window_ParamLimits

0x0974,	// (0x0002e2bd) popup_image_details_window

0x4a36,	// (0x0003237f) popup_image_focus_window

0x0aff,	// (0x0002e448) camera2_autofocus_pane_ParamLimits

0x0aff,	// (0x0002e448) camera2_autofocus_pane

0x9b4b,	// (0x00037494) bg_popup_sub_pane_cp06

0xc8c6,	// (0x0003a20f) popup_image_focus_window_g1

0xc8ce,	// (0x0003a217) popup_image_focus_window_g2

0xc8d6,	// (0x0003a21f) popup_image_focus_window_g3

0xc8de,	// (0x0003a227) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0003d059) popup_image_focus_window_g

0xc8e6,	// (0x0003a22f) popup_image_focus_window_t1

0xc8f4,	// (0x0003a23d) popup_image_focus_window_t2

0xc904,	// (0x0003a24d) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0003d062) popup_image_focus_window_t

0xc912,	// (0x0003a25b) camera2_autofocus_pane_g1

0xa4a7,	// (0x00037df0) bg_tb_trans_pane_cp01

0xc920,	// (0x0003a269) popup_image_details_window_g1

0xc933,	// (0x0003a27c) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0003d074) popup_image_details_window_g

0xc95c,	// (0x0003a2a5) popup_image_details_window_t1

0xc96e,	// (0x0003a2b7) popup_image_details_window_t2

0xc987,	// (0x0003a2d0) popup_image_details_window_t3

0xc99b,	// (0x0003a2e4) popup_image_details_window_t4

0xc9b6,	// (0x0003a2ff) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0003d07b) popup_image_details_window_t

0xa280,	// (0x00037bc9) bg_calc_paper_pane_ParamLimits

0x1bcc,	// (0x0002f515) grid_highlight_pane_cp013

0x1e41,	// (0x0002f78a) list_calc_pane_ParamLimits

0x1e53,	// (0x0002f79c) scroll_pane_cp024

0xa294,	// (0x00037bdd) bg_calc_display_pane_ParamLimits

0x0670,	// (0x0002dfb9) calc_display_pane_t1_ParamLimits

0x0682,	// (0x0002dfcb) calc_display_pane_t2_ParamLimits

0x1e5b,	// (0x0002f7a4) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003ca9a) calc_display_pane_t_ParamLimits

0x06e5,	// (0x0002e02e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003cab7) cell_calc_pane_g

0x06ee,	// (0x0002e037) cell_calc_pane_t1

0xa2f3,	// (0x00037c3c) grid_highlight_pane_cp02_ParamLimits

0xa309,	// (0x00037c52) toolbar_button_pane_cp01_ParamLimits

0xa309,	// (0x00037c52) toolbar_button_pane_cp01

0xb227,	// (0x00038b70) temp_image_control_pane_ParamLimits

0xb227,	// (0x00038b70) temp_image_control_pane

0x1bb2,	// (0x0002f4fb) main_mp3_pane

0xc9d0,	// (0x0003a319) temp_image_control_pane_g1_ParamLimits

0xc9d0,	// (0x0003a319) temp_image_control_pane_g1

0xc9de,	// (0x0003a327) temp_image_control_pane_g2_ParamLimits

0xc9de,	// (0x0003a327) temp_image_control_pane_g2

0xc9f0,	// (0x0003a339) temp_image_control_pane_g3_ParamLimits

0xc9f0,	// (0x0003a339) temp_image_control_pane_g3

0x513d,	// (0x00032a86) temp_image_control_pane_g4_ParamLimits

0x513d,	// (0x00032a86) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0003d086) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0003d086) temp_image_control_pane_g

0xc9d0,	// (0x0003a319) main_mp3_pane_g1

0x5150,	// (0x00032a99) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0003d08f) main_mp3_pane_g

0xca33,	// (0x0003a37c) main_mp3_pane_t1

0xa481,	// (0x00037dca) main_camera_pane_g8_ParamLimits

0xa481,	// (0x00037dca) main_camera_pane_g8

0x26ee,	// (0x00030037) main_video_pane_g7_ParamLimits

0x26ee,	// (0x00030037) main_video_pane_g7

0x4d4c,	// (0x00032695) main_camera2_pane_t7_ParamLimits

0x4d4c,	// (0x00032695) main_camera2_pane_t7

0xa66e,	// (0x00037fb7) scroll_pane_cp025_ParamLimits

0xa66e,	// (0x00037fb7) scroll_pane_cp025

0xa682,	// (0x00037fcb) scroll_pane_cp026_ParamLimits

0xa682,	// (0x00037fcb) scroll_pane_cp026

0xa691,	// (0x00037fda) wml_content_pane_ParamLimits

0x1bcc,	// (0x0002f515) main_touch_calib_pane

0x5224,	// (0x00032b6d) main_touch_calib_pane_g1

0x5236,	// (0x00032b7f) main_touch_calib_pane_g2

0x5248,	// (0x00032b91) main_touch_calib_pane_g3

0x525a,	// (0x00032ba3) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0003d0ad) main_touch_calib_pane_g

0x526c,	// (0x00032bb5) main_touch_calib_pane_t1

0x5286,	// (0x00032bcf) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0003d0b6) main_touch_calib_pane_t

0xade8,	// (0x00038731) mup_progress_pane_cp02

0xae1d,	// (0x00038766) navi_pane_g1

0xaed8,	// (0x00038821) navi_pane_mp_t3

0x1bb2,	// (0x0002f4fb) main_mp3_pane_ParamLimits

0x4a78,	// (0x000323c1) navi_pane_ParamLimits

0xc9d0,	// (0x0003a319) main_mp3_pane_g1_ParamLimits

0x5150,	// (0x00032a99) main_mp3_pane_g2_ParamLimits

0x515e,	// (0x00032aa7) main_mp3_pane_g3_ParamLimits

0x515e,	// (0x00032aa7) main_mp3_pane_g3

0x516c,	// (0x00032ab5) main_mp3_pane_g4_ParamLimits

0x516c,	// (0x00032ab5) main_mp3_pane_g4

0xca00,	// (0x0003a349) main_mp3_pane_g5_ParamLimits

0xca00,	// (0x0003a349) main_mp3_pane_g5

0xca0e,	// (0x0003a357) main_mp3_pane_g6_ParamLimits

0xca0e,	// (0x0003a357) main_mp3_pane_g6

0xca1b,	// (0x0003a364) main_mp3_pane_g7_ParamLimits

0xca1b,	// (0x0003a364) main_mp3_pane_g7

0xca27,	// (0x0003a370) main_mp3_pane_g8_ParamLimits

0xca27,	// (0x0003a370) main_mp3_pane_g8

0xf746,	// (0x0003d08f) main_mp3_pane_g_ParamLimits

0x5178,	// (0x00032ac1) main_mp3_pane_t2

0x5186,	// (0x00032acf) main_mp3_pane_t3

0xca41,	// (0x0003a38a) main_mp3_pane_t4

0xca4f,	// (0x0003a398) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0003d0a0) main_mp3_pane_t

0xca5d,	// (0x0003a3a6) mup_progress_pane_cp01

0x1b27,	// (0x0002f470) aid_zoom_text_secondary2

0xc835,	// (0x0003a17e) list_cale_ev2_pane

0xc83d,	// (0x0003a186) scroll_pane_cp023_ParamLimits

0x52dc,	// (0x00032c25) field_cale_ev2_pane_ParamLimits

0x52dc,	// (0x00032c25) field_cale_ev2_pane

0xca65,	// (0x0003a3ae) field_cale_ev2_pane_g1_ParamLimits

0xca65,	// (0x0003a3ae) field_cale_ev2_pane_g1

0xca71,	// (0x0003a3ba) field_cale_ev2_pane_g2_ParamLimits

0xca71,	// (0x0003a3ba) field_cale_ev2_pane_g2

0xca89,	// (0x0003a3d2) field_cale_ev2_pane_g3_ParamLimits

0xca89,	// (0x0003a3d2) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0003d0c1) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0003d0c1) field_cale_ev2_pane_g

0xcaad,	// (0x0003a3f6) field_cale_ev2_pane_t1_ParamLimits

0xcaad,	// (0x0003a3f6) field_cale_ev2_pane_t1

0xcac4,	// (0x0003a40d) field_cale_ev2_pane_t2_ParamLimits

0xcac4,	// (0x0003a40d) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0003d0ca) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0003d0ca) field_cale_ev2_pane_t

0x41f6,	// (0x00031b3f) main_postcard_pane_g5_ParamLimits

0x41f6,	// (0x00031b3f) main_postcard_pane_g5

0x420c,	// (0x00031b55) main_postcard_pane_g6_ParamLimits

0x420c,	// (0x00031b55) main_postcard_pane_g6

0x24b4,	// (0x0002fdfd) camera2_autofocus_pane_cp_ParamLimits

0x24b4,	// (0x0002fdfd) camera2_autofocus_pane_cp

0x1bb2,	// (0x0002f4fb) main_mup3_pane

0x531d,	// (0x00032c66) main_mup3_pane_g1_ParamLimits

0x531d,	// (0x00032c66) main_mup3_pane_g1

0x533f,	// (0x00032c88) main_mup3_pane_g2_ParamLimits

0x533f,	// (0x00032c88) main_mup3_pane_g2

0x53bf,	// (0x00032d08) main_mup3_pane_g3_ParamLimits

0x53bf,	// (0x00032d08) main_mup3_pane_g3

0x5405,	// (0x00032d4e) main_mup3_pane_g4_ParamLimits

0x5405,	// (0x00032d4e) main_mup3_pane_g4

0x544b,	// (0x00032d94) main_mup3_pane_g5_ParamLimits

0x544b,	// (0x00032d94) main_mup3_pane_g5

0x5491,	// (0x00032dda) main_mup3_pane_g6_ParamLimits

0x5491,	// (0x00032dda) main_mup3_pane_g6

0xcad9,	// (0x0003a422) main_mup3_pane_g7_ParamLimits

0xcad9,	// (0x0003a422) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0003d0da) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0003d0da) main_mup3_pane_g

0x550f,	// (0x00032e58) main_mup3_pane_t1_ParamLimits

0x550f,	// (0x00032e58) main_mup3_pane_t1

0x5583,	// (0x00032ecc) main_mup3_pane_t2_ParamLimits

0x5583,	// (0x00032ecc) main_mup3_pane_t2

0x5657,	// (0x00032fa0) main_mup3_pane_t4_ParamLimits

0x5657,	// (0x00032fa0) main_mup3_pane_t4

0x56ad,	// (0x00032ff6) main_mup3_pane_t5_ParamLimits

0x56ad,	// (0x00032ff6) main_mup3_pane_t5

0x5769,	// (0x000330b2) main_mup3_pane_t6_ParamLimits

0x5769,	// (0x000330b2) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0003d0eb) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0003d0eb) main_mup3_pane_t

0x5821,	// (0x0003316a) mup3_progress_pane_ParamLimits

0x5821,	// (0x0003316a) mup3_progress_pane

0x58ad,	// (0x000331f6) popup_mup3_control_window_ParamLimits

0x58ad,	// (0x000331f6) popup_mup3_control_window

0xcae7,	// (0x0003a430) popup_mup3_text_window

0x58df,	// (0x00033228) mup3_progress_pane_t1

0x58fe,	// (0x00033247) mup3_progress_pane_t2

0xcaef,	// (0x0003a438) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0003d0f8) mup3_progress_pane_t

0xcb0c,	// (0x0003a455) mup_progress_pane_cp03

0x9b4b,	// (0x00037494) bg_tb_trans_pane_cp04

0x591d,	// (0x00033266) mup3_volume_pane

0x5925,	// (0x0003326e) popup_mup3_control_window_g1

0x592e,	// (0x00033277) mup3_volume_pane_g1

0x5937,	// (0x00033280) mup3_volume_pane_g2

0x5940,	// (0x00033289) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0003d0ff) mup3_volume_pane_g

0x9b4b,	// (0x00037494) bg_tb_trans_pane_cp03

0xcb1c,	// (0x0003a465) popup_mup3_text_window_g1

0xcb24,	// (0x0003a46d) popup_mup3_text_window_t1

0xa2dc,	// (0x00037c25) list_calc_item_pane_g1_ParamLimits

0xc505,	// (0x00039e4e) mup_volume_pane_cp_g1

0x52a0,	// (0x00032be9) main_touch_calib_pane_t3

0x52b4,	// (0x00032bfd) main_touch_calib_pane_t4

0x52c8,	// (0x00032c11) main_touch_calib_pane_t5

0x1b13,	// (0x0002f45c) aid_cell_size_toolbar2

0x1b1b,	// (0x0002f464) aid_popup3_width_pane

0x1b27,	// (0x0002f470) aid_zoom_text_msg_primary

0x2489,	// (0x0002fdd2) vorec_t7

0xa2a0,	// (0x00037be9) bg_calc_paper_pane_g1_ParamLimits

0xa2ac,	// (0x00037bf5) bg_calc_paper_pane_g2_ParamLimits

0xa2b8,	// (0x00037c01) bg_calc_paper_pane_g3_ParamLimits

0xa2c4,	// (0x00037c0d) bg_calc_paper_pane_g4_ParamLimits

0xa2d0,	// (0x00037c19) bg_calc_paper_pane_g5_ParamLimits

0x1e6d,	// (0x0002f7b6) bg_calc_paper_pane_g6_ParamLimits

0x1e7c,	// (0x0002f7c5) bg_calc_paper_pane_g7_ParamLimits

0x1e8b,	// (0x0002f7d4) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003caa1) bg_calc_paper_pane_g_ParamLimits

0x1e9e,	// (0x0002f7e7) calc_bg_paper_pane_g9_ParamLimits

0x2600,	// (0x0002ff49) image_qvga_pane_ParamLimits

0x2600,	// (0x0002ff49) image_qvga_pane

0xa1c3,	// (0x00037b0c) bg_popup_sub_pane_cp04_ParamLimits

0xb15e,	// (0x00038aa7) popup_mup_playback_window_g1_ParamLimits

0xb16a,	// (0x00038ab3) popup_mup_playback_window_t1_ParamLimits

0xb17f,	// (0x00038ac8) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003ce2b) popup_mup_playback_window_t_ParamLimits

0x4d7a,	// (0x000326c3) main_mup2_pane_g3_ParamLimits

0x4d7a,	// (0x000326c3) main_mup2_pane_g3

0x2a14,	// (0x0003035d) popup_toolbar_window_cp04

0xb574,	// (0x00038ebd) popup_call2_audio_second_window_g3_ParamLimits

0xb574,	// (0x00038ebd) popup_call2_audio_second_window_g3

0xb97e,	// (0x000392c7) popup_call2_audio_first_window_g4_ParamLimits

0xb97e,	// (0x000392c7) popup_call2_audio_first_window_g4

0xbffd,	// (0x00039946) popup_call2_audio_in_window_g4_ParamLimits

0xbffd,	// (0x00039946) popup_call2_audio_in_window_g4

0x4324,	// (0x00031c6d) aid_area_sk_bg_cut_ParamLimits

0x4324,	// (0x00031c6d) aid_area_sk_bg_cut

0xb194,	// (0x00038add) aid_area_sk_bg_cut_2_ParamLimits

0xb194,	// (0x00038add) aid_area_sk_bg_cut_2

0x50e3,	// (0x00032a2c) aid_placing_details_win

0x50eb,	// (0x00032a34) aid_placing_details_win_2

0xc912,	// (0x0003a25b) camera2_autofocus_pane_g1_ParamLimits

0x052c,	// (0x0002de75) popup_fixed_preview_cale_window_ParamLimits

0x052c,	// (0x0002de75) popup_fixed_preview_cale_window

0xaf70,	// (0x000388b9) navi_slider_pane_g3

0xaf79,	// (0x000388c2) navi_slider_pane_g4

0xaf82,	// (0x000388cb) navi_slider_pane_g5

0xaf70,	// (0x000388b9) navi_slider_pane_g6

0x3bd7,	// (0x00031520) navi_slider_pane_g7

0xb095,	// (0x000389de) mup_scale_pane_g3

0xb09e,	// (0x000389e7) mup_scale_pane_g4

0xb0a7,	// (0x000389f0) mup_scale_pane_g5

0x3fd0,	// (0x00031919) mup_scale_pane_g6

0x3fd9,	// (0x00031922) mup_scale_pane_g7

0xaf70,	// (0x000388b9) cams2_slider_pane_g3

0xc587,	// (0x00039ed0) cams2_slider_pane_g4

0x5030,	// (0x00032979) cams2_slider_pane_g5

0xaf70,	// (0x000388b9) cams2_slider_pane_g6

0x5038,	// (0x00032981) cams2_slider_pane_g7

0xc7b2,	// (0x0003a0fb) camera2_autofocus_pane_cp_g1

0xc39e,	// (0x00039ce7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc39e,	// (0x00039ce7) bg_popup_preview_window_pane_cp02

0xcb32,	// (0x0003a47b) list_fp_cale_pane_ParamLimits

0xcb32,	// (0x0003a47b) list_fp_cale_pane

0xcb3e,	// (0x0003a487) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb3e,	// (0x0003a487) popup_fixed_preview_cale_window_t1

0x5949,	// (0x00033292) popup_fixed_preview_cale_window_t2_ParamLimits

0x5949,	// (0x00033292) popup_fixed_preview_cale_window_t2

0x595e,	// (0x000332a7) popup_fixed_preview_cale_window_t3_ParamLimits

0x595e,	// (0x000332a7) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0003d106) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0003d106) popup_fixed_preview_cale_window_t

0x5973,	// (0x000332bc) list_single_fp_cale_pane_ParamLimits

0x5973,	// (0x000332bc) list_single_fp_cale_pane

0xcb5c,	// (0x0003a4a5) list_single_fp_cale_pane_g1_ParamLimits

0xcb5c,	// (0x0003a4a5) list_single_fp_cale_pane_g1

0xcb68,	// (0x0003a4b1) list_single_fp_cale_pane_g2_ParamLimits

0xcb68,	// (0x0003a4b1) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0003d10d) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0003d10d) list_single_fp_cale_pane_g

0xcb81,	// (0x0003a4ca) list_single_fp_cale_pane_t1_ParamLimits

0xcb81,	// (0x0003a4ca) list_single_fp_cale_pane_t1

0xcb93,	// (0x0003a4dc) list_single_fp_cale_pane_t2_ParamLimits

0xcb93,	// (0x0003a4dc) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0003d114) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0003d114) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1bcc,	// (0x0002f515) main_dialer_pane

0x5989,	// (0x000332d2) aid_cell_size_keypad

0x5993,	// (0x000332dc) dialer_ne_pane

0x599b,	// (0x000332e4) grid_dialer_command_1_pane

0x59a3,	// (0x000332ec) grid_dialer_command_2_pane

0x59ab,	// (0x000332f4) grid_dialer_keypad_pane

0x59bd,	// (0x00033306) bg_popup_call_pane_cp06_ParamLimits

0x59bd,	// (0x00033306) bg_popup_call_pane_cp06

0x59c9,	// (0x00033312) dialer_ne_clear_pane_ParamLimits

0x59c9,	// (0x00033312) dialer_ne_clear_pane

0xcbc6,	// (0x0003a50f) dialer_ne_pane_g1

0xcbce,	// (0x0003a517) dialer_ne_pane_t1_ParamLimits

0xcbce,	// (0x0003a517) dialer_ne_pane_t1

0x59d5,	// (0x0003331e) dialer_ne_pane_t2_ParamLimits

0x59d5,	// (0x0003331e) dialer_ne_pane_t2

0x59ff,	// (0x00033348) dialer_ne_pane_t3_ParamLimits

0x59ff,	// (0x00033348) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0003d119) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0003d119) dialer_ne_pane_t

0x5a2f,	// (0x00033378) dialer_ne_pane_t3_copy1_ParamLimits

0x5a2f,	// (0x00033378) dialer_ne_pane_t3_copy1

0x5a5e,	// (0x000333a7) cell_dialer_keypad_pane_ParamLimits

0x5a5e,	// (0x000333a7) cell_dialer_keypad_pane

0x5a75,	// (0x000333be) cell_dialer_command_1_pane_ParamLimits

0x5a75,	// (0x000333be) cell_dialer_command_1_pane

0x5a8b,	// (0x000333d4) cell_dialer_command_2_pane_ParamLimits

0x5a8b,	// (0x000333d4) cell_dialer_command_2_pane

0xcbe0,	// (0x0003a529) bg_button_pane_cp02_ParamLimits

0xcbe0,	// (0x0003a529) bg_button_pane_cp02

0x5a9a,	// (0x000333e3) cell_dialer_keypad_pane_g1_ParamLimits

0x5a9a,	// (0x000333e3) cell_dialer_keypad_pane_g1

0xcbe0,	// (0x0003a529) bg_button_pane_cp03_ParamLimits

0xcbe0,	// (0x0003a529) bg_button_pane_cp03

0x5aae,	// (0x000333f7) cell_dialer_command_1_pane_g1_ParamLimits

0x5aae,	// (0x000333f7) cell_dialer_command_1_pane_g1

0xcbec,	// (0x0003a535) bg_button_pane_cp04

0x5ac2,	// (0x0003340b) cell_dialer_command_2_pane_g1

0xa479,	// (0x00037dc2) bg_button_pane_cp06

0xcbf4,	// (0x0003a53d) dialer_ne_clear_pane_g1

0xae29,	// (0x00038772) navi_pane_g2

0xae57,	// (0x000387a0) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003cd2e) navi_pane_g

0xaee6,	// (0x0003882f) navi_pane_mv_g2

0xaf27,	// (0x00038870) navi_pane_mv_g5

0x3b8c,	// (0x000314d5) navi_pane_mv_t1

0xa294,	// (0x00037bdd) main_clock2_pane

0x5b10,	// (0x00033459) main_clock2_list_pane_ParamLimits

0x5b10,	// (0x00033459) main_clock2_list_pane

0x5b4a,	// (0x00033493) main_clock2_pane_t1_ParamLimits

0x5b4a,	// (0x00033493) main_clock2_pane_t1

0x5b88,	// (0x000334d1) main_clock2_pane_t2_ParamLimits

0x5b88,	// (0x000334d1) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0003d125) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0003d125) main_clock2_pane_t

0x5c26,	// (0x0003356f) popup_clock_analogue_window_cp03_ParamLimits

0x5c26,	// (0x0003356f) popup_clock_analogue_window_cp03

0x5c4b,	// (0x00033594) popup_clock_digital_window_cp02_ParamLimits

0x5c4b,	// (0x00033594) popup_clock_digital_window_cp02

0x5cbc,	// (0x00033605) main_clock2_list_single_pane_ParamLimits

0x5cbc,	// (0x00033605) main_clock2_list_single_pane

0xa479,	// (0x00037dc2) list_highlight_pane_cp05

0xcc2e,	// (0x0003a577) main_clock2_list_single_pane_t1

0x2a14,	// (0x0003035d) popup_toolbar_window_cp04_ParamLimits

0x510d,	// (0x00032a56) camera2_autofocus_pane_g2_ParamLimits

0x510d,	// (0x00032a56) camera2_autofocus_pane_g2

0x5119,	// (0x00032a62) camera2_autofocus_pane_g3_ParamLimits

0x5119,	// (0x00032a62) camera2_autofocus_pane_g3

0x5125,	// (0x00032a6e) camera2_autofocus_pane_g4_ParamLimits

0x5125,	// (0x00032a6e) camera2_autofocus_pane_g4

0x5131,	// (0x00032a7a) camera2_autofocus_pane_g5_ParamLimits

0x5131,	// (0x00032a7a) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0003d069) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0003d069) camera2_autofocus_pane_g

0x52fd,	// (0x00032c46) camera2_autofocus_pane_cp_g2

0x5305,	// (0x00032c4e) camera2_autofocus_pane_cp_g3

0x530d,	// (0x00032c56) camera2_autofocus_pane_cp_g4

0x5315,	// (0x00032c5e) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0003d0cf) camera2_autofocus_pane_cp_g

0x59b5,	// (0x000332fe) popup_dialer_spcha_window

0x9b4b,	// (0x00037494) bg_popup_sub_pane_cp07

0xcc3c,	// (0x0003a585) list_spcha_pane

0xcc44,	// (0x0003a58d) list_single_spcha_pane_ParamLimits

0xcc44,	// (0x0003a58d) list_single_spcha_pane

0x9b4b,	// (0x00037494) list_highlight_pane_cp06

0xcc55,	// (0x0003a59e) list_single_spcha_pane_t1

0xbda7,	// (0x000396f0) popup_call2_audio_out_window_g4_ParamLimits

0xbda7,	// (0x000396f0) popup_call2_audio_out_window_g4

0x1bcc,	// (0x0002f515) main_imed2_pane

0x4a3e,	// (0x00032387) popup_imed_adjust2_window

0x098c,	// (0x0002e2d5) popup_imed_trans_window_ParamLimits

0x098c,	// (0x0002e2d5) popup_imed_trans_window

0xc5f0,	// (0x00039f39) popup_blid_sat_info2_window_t1

0xc5fe,	// (0x00039f47) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0003cffe) popup_blid_sat_info2_window_t

0x5cce,	// (0x00033617) aid_size_cell_colour_35

0x5cee,	// (0x00033637) aid_size_cell_colour_112

0x5d0e,	// (0x00033657) aid_size_cell_effect

0xc3aa,	// (0x00039cf3) bg_tb_trans_pane_cp02

0xa9bf,	// (0x00038308) heading_imed_pane

0x5d2e,	// (0x00033677) listscroll_imed_pane

0xcc63,	// (0x0003a5ac) heading_imed_pane_g1

0xcc6b,	// (0x0003a5b4) heading_imed_pane_t1

0xcc79,	// (0x0003a5c2) grid_imed_colour_35_pane_ParamLimits

0xcc79,	// (0x0003a5c2) grid_imed_colour_35_pane

0x5d3a,	// (0x00033683) grid_imed_effect_pane

0xcc91,	// (0x0003a5da) list_imed_aspect_pane

0x5d50,	// (0x00033699) scroll_pane_cp027_ParamLimits

0x5d50,	// (0x00033699) scroll_pane_cp027

0x5d61,	// (0x000336aa) cell_imed_effect_pane_ParamLimits

0x5d61,	// (0x000336aa) cell_imed_effect_pane

0xcc99,	// (0x0003a5e2) cell_imed_colour_pane_ParamLimits

0xcc99,	// (0x0003a5e2) cell_imed_colour_pane

0xccdb,	// (0x0003a624) cell_imed_colour_pane_g1_ParamLimits

0xccdb,	// (0x0003a624) cell_imed_colour_pane_g1

0xccf8,	// (0x0003a641) hgihlgiht_grid_pane_cp016_ParamLimits

0xccf8,	// (0x0003a641) hgihlgiht_grid_pane_cp016

0x5d88,	// (0x000336d1) cell_imed_effect_pane_g1

0x5d90,	// (0x000336d9) grid_highlight_pane_cp017

0xcd09,	// (0x0003a652) list_imed_single_pane_ParamLimits

0xcd09,	// (0x0003a652) list_imed_single_pane

0x9b4b,	// (0x00037494) list_highlight_pane_cp07

0xcd1e,	// (0x0003a667) list_imed_aspect_pane_comp1_t1

0xc3aa,	// (0x00039cf3) bg_tb_trans_pane_cp05

0xcd40,	// (0x0003a689) popup_imed_adjust2_window_g1

0xcd67,	// (0x0003a6b0) popup_imed_adjust2_window_t1

0xcd7f,	// (0x0003a6c8) slider_imed_adjust_pane

0xcd93,	// (0x0003a6dc) slider_imed_adjust_pane_g1

0xcda3,	// (0x0003a6ec) slider_imed_adjust_pane_g2

0xcdb3,	// (0x0003a6fc) slider_imed_adjust_pane_g3

0xcdc4,	// (0x0003a70d) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0003d142) slider_imed_adjust_pane_g

0x5d99,	// (0x000336e2) aid_size_cell_clipart2

0x5da5,	// (0x000336ee) grid_imed_clipart_pane

0xcdd5,	// (0x0003a71e) scroll_pane_cp031

0x5daf,	// (0x000336f8) cell_imed_clipart_pane_ParamLimits

0x5daf,	// (0x000336f8) cell_imed_clipart_pane

0x5dd1,	// (0x0003371a) cell_imed_clipart_pane_g1

0x9b4b,	// (0x00037494) grid_highlight_pane_cp014

0x5b25,	// (0x0003346e) main_clock2_pane_g1_ParamLimits

0x5b25,	// (0x0003346e) main_clock2_pane_g1

0x5c67,	// (0x000335b0) aid_call2_pane_cp10

0x5c79,	// (0x000335c2) aid_call_pane_cp10

0xad88,	// (0x000386d1) popup_clock_analogue_window_cp10_g1

0xad88,	// (0x000386d1) popup_clock_analogue_window_cp10_g2

0x5c8b,	// (0x000335d4) popup_clock_analogue_window_cp10_g3

0x5c8b,	// (0x000335d4) popup_clock_analogue_window_cp10_g4

0xad88,	// (0x000386d1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0003d130) popup_clock_analogue_window_cp10_g

0x5c9d,	// (0x000335e6) popup_clock_analogue_window_cp10_t1

0x0fda,	// (0x0002e923) clock_digital_number_pane_cp10_ParamLimits

0x0fda,	// (0x0002e923) clock_digital_number_pane_cp10

0x0ff2,	// (0x0002e93b) clock_digital_number_pane_cp11_ParamLimits

0x0ff2,	// (0x0002e93b) clock_digital_number_pane_cp11

0x100a,	// (0x0002e953) clock_digital_number_pane_cp12_ParamLimits

0x100a,	// (0x0002e953) clock_digital_number_pane_cp12

0x1022,	// (0x0002e96b) clock_digital_number_pane_cp13_ParamLimits

0x1022,	// (0x0002e96b) clock_digital_number_pane_cp13

0x103a,	// (0x0002e983) clock_digital_separator_pane_cp10_ParamLimits

0x103a,	// (0x0002e983) clock_digital_separator_pane_cp10

0x1052,	// (0x0002e99b) popup_clock_digital_window_cp02_t1_ParamLimits

0x1052,	// (0x0002e99b) popup_clock_digital_window_cp02_t1

0xa1bb,	// (0x00037b04) clock_digital_number_pane_cp10_g1

0xa1bb,	// (0x00037b04) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0003d14b) clock_digital_number_pane_cp10_g

0xa1bb,	// (0x00037b04) clock_digital_separator_pane_cp10_g1

0xa1bb,	// (0x00037b04) clock_digital_separator_pane_g2_cp10

0xaf2f,	// (0x00038878) navi_pane_vded_g4

0xaf38,	// (0x00038881) navi_pane_vded_g5

0xaf41,	// (0x0003888a) navi_pane_vded_t1

0x1bcc,	// (0x0002f515) main_vded_pane

0x5dda,	// (0x00033723) main_vded_pane_g1

0x5de4,	// (0x0003372d) main_vded_pane_g2

0x5dee,	// (0x00033737) main_vded_pane_g3

0x0002,

0xf807,	// (0x0003d150) main_vded_pane_g

0x5df8,	// (0x00033741) main_vded_pane_t1

0x5e06,	// (0x0003374f) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0003d157) main_vded_pane_t

0x5e14,	// (0x0003375d) vded_slider_pane

0x5e1c,	// (0x00033765) vded_video_pane

0xcddd,	// (0x0003a726) vded_video_pane_g1

0x5e24,	// (0x0003376d) vded_video_pane_g2

0xc7b2,	// (0x0003a0fb) vded_video_pane_g3

0x0002,

0xf813,	// (0x0003d15c) vded_video_pane_g

0xcde7,	// (0x0003a730) vded_slider_pane_g1

0xc505,	// (0x00039e4e) vded_slider_pane_g2

0xcdf0,	// (0x0003a739) vded_slider_pane_g3

0xcdf9,	// (0x0003a742) vded_slider_pane_g4

0xce02,	// (0x0003a74b) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0003d163) vded_slider_pane_g

0x5895,	// (0x000331de) mup3_rocker_pane_ParamLimits

0x5895,	// (0x000331de) mup3_rocker_pane

0x5e2d,	// (0x00033776) mup3_control_keys_pane_g1

0x5e35,	// (0x0003377e) mup3_control_keys_pane_g2

0x5e3d,	// (0x00033786) mup3_control_keys_pane_g3

0x5e45,	// (0x0003378e) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0003d16e) mup3_control_keys_pane_g

0x0563,	// (0x0002deac) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0563,	// (0x0002deac) popup_toolbar2_fixed_window_cp01

0x58c9,	// (0x00033212) popup_toolbar2_fixed_window_cp02_ParamLimits

0x58c9,	// (0x00033212) popup_toolbar2_fixed_window_cp02

0xb6e6,	// (0x0003902f) popup_call2_audio_second_window_t4_ParamLimits

0xb6e6,	// (0x0003902f) popup_call2_audio_second_window_t4

0xbc14,	// (0x0003955d) popup_call2_audio_first_window_t6_ParamLimits

0xbc14,	// (0x0003955d) popup_call2_audio_first_window_t6

0xbeaa,	// (0x000397f3) popup_call2_audio_out_window_t6_ParamLimits

0xbeaa,	// (0x000397f3) popup_call2_audio_out_window_t6

0x1bcc,	// (0x0002f515) main_vitu_pane

0x5e55,	// (0x0003379e) aid_size_cell_itu_ParamLimits

0x5e55,	// (0x0003379e) aid_size_cell_itu

0xa4a7,	// (0x00037df0) bg_popup_window_pane_cp08_ParamLimits

0xa4a7,	// (0x00037df0) bg_popup_window_pane_cp08

0x5e6b,	// (0x000337b4) field_vitu_entry_pane_ParamLimits

0x5e6b,	// (0x000337b4) field_vitu_entry_pane

0x5e83,	// (0x000337cc) grid_vitu_function_pane_ParamLimits

0x5e83,	// (0x000337cc) grid_vitu_function_pane

0x5e9e,	// (0x000337e7) grid_vitu_itu_pane_ParamLimits

0x5e9e,	// (0x000337e7) grid_vitu_itu_pane

0x5ebc,	// (0x00033805) cell_vitu_itu_pane_ParamLimits

0x5ebc,	// (0x00033805) cell_vitu_itu_pane

0x5ede,	// (0x00033827) cell_vitu_function_pane_ParamLimits

0x5ede,	// (0x00033827) cell_vitu_function_pane

0xa4a7,	// (0x00037df0) bg_popup_sub_pane_cp08_ParamLimits

0xa4a7,	// (0x00037df0) bg_popup_sub_pane_cp08

0x5ef7,	// (0x00033840) field_vitu_entry_pane_t1_ParamLimits

0x5ef7,	// (0x00033840) field_vitu_entry_pane_t1

0xce23,	// (0x0003a76c) field_vitu_entry_pane_t2_ParamLimits

0xce23,	// (0x0003a76c) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0003d17c) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0003d17c) field_vitu_entry_pane_t

0xce40,	// (0x0003a789) bg_button_pane_cp05_ParamLimits

0xce40,	// (0x0003a789) bg_button_pane_cp05

0x5f16,	// (0x0003385f) cell_vitu_itu_pane_g1

0x5f2e,	// (0x00033877) cell_vitu_itu_pane_t1_ParamLimits

0x5f2e,	// (0x00033877) cell_vitu_itu_pane_t1

0x5f40,	// (0x00033889) cell_vitu_itu_pane_t2_ParamLimits

0x5f40,	// (0x00033889) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0003d181) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0003d181) cell_vitu_itu_pane_t

0xce4e,	// (0x0003a797) bg_button_pane_cp07

0x5f75,	// (0x000338be) cell_vitu_function_pane_g1

0x1d69,	// (0x0002f6b2) main_calc_pane_g1

0x03c3,	// (0x0002dd0c) aid_visual_content_pane

0x1bcc,	// (0x0002f515) main_vradio_pane

0x5f7e,	// (0x000338c7) main_vradio_pane_g1_ParamLimits

0x5f7e,	// (0x000338c7) main_vradio_pane_g1

0xce58,	// (0x0003a7a1) main_vradio_pane_g2_ParamLimits

0xce58,	// (0x0003a7a1) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0003d188) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0003d188) main_vradio_pane_g

0x5f97,	// (0x000338e0) main_vradio_pane_t1_ParamLimits

0x5f97,	// (0x000338e0) main_vradio_pane_t1

0x5fac,	// (0x000338f5) main_vradio_pane_t2_ParamLimits

0x5fac,	// (0x000338f5) main_vradio_pane_t2

0xce65,	// (0x0003a7ae) main_vradio_pane_t3_ParamLimits

0xce65,	// (0x0003a7ae) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0003d18d) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0003d18d) main_vradio_pane_t

0x5fc1,	// (0x0003390a) vradio_rocker_control_pane_ParamLimits

0x5fc1,	// (0x0003390a) vradio_rocker_control_pane

0x5fd3,	// (0x0003391c) vradio_station_info_pane_ParamLimits

0x5fd3,	// (0x0003391c) vradio_station_info_pane

0xce79,	// (0x0003a7c2) vradio_frequency_info_pane_ParamLimits

0xce79,	// (0x0003a7c2) vradio_frequency_info_pane

0xc7b2,	// (0x0003a0fb) vradio_station_info_pane_g1

0xce88,	// (0x0003a7d1) vradio_station_info_pane_t1_ParamLimits

0xce88,	// (0x0003a7d1) vradio_station_info_pane_t1

0xceaa,	// (0x0003a7f3) vradio_station_info_pane_t2_ParamLimits

0xceaa,	// (0x0003a7f3) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0003d194) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0003d194) vradio_station_info_pane_t

0xcebc,	// (0x0003a805) vradio_tuning_pane

0xcec4,	// (0x0003a80d) vradio_rocker_control_pane_g1

0xcecc,	// (0x0003a815) vradio_rocker_control_pane_g2

0xced4,	// (0x0003a81d) vradio_rocker_control_pane_g3

0xcedc,	// (0x0003a825) vradio_rocker_control_pane_g4

0xcee4,	// (0x0003a82d) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0003d199) vradio_rocker_control_pane_g

0x5fe5,	// (0x0003392e) vradio_frequency_info_pane_g1

0xceec,	// (0x0003a835) vradio_frequency_info_pane_t1_ParamLimits

0xceec,	// (0x0003a835) vradio_frequency_info_pane_t1

0x5fef,	// (0x00033938) vradio_tuning_pane_g1

0x5ffa,	// (0x00033943) vradio_tuning_pane_t1

0x1b70,	// (0x0002f4b9) area_side_right_pane_ParamLimits

0x1b70,	// (0x0002f4b9) area_side_right_pane

0xc365,	// (0x00039cae) status_small_pane_g1

0xc36d,	// (0x00039cb6) status_small_pane_g2

0xc376,	// (0x00039cbf) status_small_pane_g3

0xc37f,	// (0x00039cc8) status_small_pane_g4

0x0003,

0xf60b,	// (0x0003cf54) status_small_pane_g

0xc388,	// (0x00039cd1) status_small_pane_t1

0x1bcc,	// (0x0002f515) main_video3_pane

0xcf00,	// (0x0003a849) cams_zoom_vslider_pane

0xcf08,	// (0x0003a851) image3_wide_pane_ParamLimits

0xcf08,	// (0x0003a851) image3_wide_pane

0xcf22,	// (0x0003a86b) image3_wide_small_pane

0xcf2e,	// (0x0003a877) main_video3_pane_g1_ParamLimits

0xcf2e,	// (0x0003a877) main_video3_pane_g1

0xcf4a,	// (0x0003a893) main_video3_pane_g2_ParamLimits

0xcf4a,	// (0x0003a893) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0003d1a4) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0003d1a4) main_video3_pane_g

0xcf66,	// (0x0003a8af) main_video3_pane_t1_ParamLimits

0xcf66,	// (0x0003a8af) main_video3_pane_t1

0xcf91,	// (0x0003a8da) main_video3_pane_t2_ParamLimits

0xcf91,	// (0x0003a8da) main_video3_pane_t2

0xcfbc,	// (0x0003a905) main_video3_pane_t3_ParamLimits

0xcfbc,	// (0x0003a905) main_video3_pane_t3

0x0002,

0xf860,	// (0x0003d1a9) main_video3_pane_t_ParamLimits

0xf860,	// (0x0003d1a9) main_video3_pane_t

0xcfe9,	// (0x0003a932) cams_zoom_vslider_pane_g1

0xcff2,	// (0x0003a93b) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0003d1b0) cams_zoom_vslider_pane_g

0xcffa,	// (0x0003a943) small_slider_vertical_pane

0xc7b2,	// (0x0003a0fb) small_slider_vertical_pane_g1

0xc7b2,	// (0x0003a0fb) small_slider_vertical_pane_g2

0xd002,	// (0x0003a94b) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0003d1b5) small_slider_vertical_pane_g

0x1bcc,	// (0x0002f515) main_hwr_training_pane

0xd00b,	// (0x0003a954) hwr_training_instruct_pane_ParamLimits

0xd00b,	// (0x0003a954) hwr_training_instruct_pane

0x6009,	// (0x00033952) hwr_training_navi_pane_ParamLimits

0x6009,	// (0x00033952) hwr_training_navi_pane

0x6028,	// (0x00033971) hwr_training_write_pane_ParamLimits

0x6028,	// (0x00033971) hwr_training_write_pane

0x9b4b,	// (0x00037494) bg_frame_shadow_pane

0xd042,	// (0x0003a98b) hwr_training_write_pane_g1

0xd04a,	// (0x0003a993) hwr_training_write_pane_g2

0xd052,	// (0x0003a99b) hwr_training_write_pane_g3

0xd05a,	// (0x0003a9a3) hwr_training_write_pane_g4

0xd062,	// (0x0003a9ab) hwr_training_write_pane_g5

0xd06a,	// (0x0003a9b3) hwr_training_write_pane_g6

0xd072,	// (0x0003a9bb) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0003d1bc) hwr_training_write_pane_g

0x6063,	// (0x000339ac) hwr_training_navi_pane_g1_ParamLimits

0x6063,	// (0x000339ac) hwr_training_navi_pane_g1

0x6075,	// (0x000339be) hwr_training_navi_pane_g2_ParamLimits

0x6075,	// (0x000339be) hwr_training_navi_pane_g2

0x6087,	// (0x000339d0) hwr_training_navi_pane_g3_ParamLimits

0x6087,	// (0x000339d0) hwr_training_navi_pane_g3

0x6097,	// (0x000339e0) hwr_training_navi_pane_g4_ParamLimits

0x6097,	// (0x000339e0) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0003d1cb) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0003d1cb) hwr_training_navi_pane_g

0x60a4,	// (0x000339ed) hwr_training_navi_pane_t1

0x60b2,	// (0x000339fb) list_single_hwr_training_instruct_pane_ParamLimits

0x60b2,	// (0x000339fb) list_single_hwr_training_instruct_pane

0xd07a,	// (0x0003a9c3) list_single_hwr_training_instruct_pane_t1

0xc6f2,	// (0x0003a03b) bg_frame_shadow_pane_g1

0xd089,	// (0x0003a9d2) bg_frame_shadow_pane_g2

0xd091,	// (0x0003a9da) bg_frame_shadow_pane_g3

0xd099,	// (0x0003a9e2) bg_frame_shadow_pane_g4

0xd0a1,	// (0x0003a9ea) bg_frame_shadow_pane_g5

0xd0a9,	// (0x0003a9f2) bg_frame_shadow_pane_g6

0xd0b1,	// (0x0003a9fa) bg_frame_shadow_pane_g7

0xa35f,	// (0x00037ca8) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0003d1d6) bg_frame_shadow_pane_g

0x1bcc,	// (0x0002f515) main_video_tele_dialer_pane

0x1080,	// (0x0002e9c9) aid_size_cell_video_keypad_ParamLimits

0x1080,	// (0x0002e9c9) aid_size_cell_video_keypad

0x109a,	// (0x0002e9e3) grid_video_dialer_keypad_pane_ParamLimits

0x109a,	// (0x0002e9e3) grid_video_dialer_keypad_pane

0x10e8,	// (0x0002ea31) video_down_pane_cp_ParamLimits

0x10e8,	// (0x0002ea31) video_down_pane_cp

0x10fe,	// (0x0002ea47) cell_video_dialer_keypad_pane_ParamLimits

0x10fe,	// (0x0002ea47) cell_video_dialer_keypad_pane

0xd0b9,	// (0x0003aa02) bg_button_pane_cp08_ParamLimits

0xd0b9,	// (0x0003aa02) bg_button_pane_cp08

0x60e4,	// (0x00033a2d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60e4,	// (0x00033a2d) cell_video_dialer_keypad_pane_g1

0x587f,	// (0x000331c8) mup3_rocker2_pane_ParamLimits

0x587f,	// (0x000331c8) mup3_rocker2_pane

0xc7b2,	// (0x0003a0fb) mup3_rocker2_pane_g1

0x087b,	// (0x0002e1c4) main_dialer2_pane

0x1bcc,	// (0x0002f515) main_mp4_pane

0x6126,	// (0x00033a6f) main_mp4_pane_g1_ParamLimits

0x6126,	// (0x00033a6f) main_mp4_pane_g1

0x6126,	// (0x00033a6f) main_mp4_pane_g2_ParamLimits

0x6126,	// (0x00033a6f) main_mp4_pane_g2

0x1120,	// (0x0002ea69) main_mp4_pane_g3_ParamLimits

0x1120,	// (0x0002ea69) main_mp4_pane_g3

0x6134,	// (0x00033a7d) main_mp4_pane_g4_ParamLimits

0x6134,	// (0x00033a7d) main_mp4_pane_g4

0x615c,	// (0x00033aa5) main_mp4_pane_g5_ParamLimits

0x615c,	// (0x00033aa5) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0003d1f6) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0003d1f6) main_mp4_pane_g

0x61ac,	// (0x00033af5) main_mp4_pane_t1_ParamLimits

0x61ac,	// (0x00033af5) main_mp4_pane_t1

0x6208,	// (0x00033b51) main_mp4_pane_t2_ParamLimits

0x6208,	// (0x00033b51) main_mp4_pane_t2

0xd0c5,	// (0x0003aa0e) main_mp4_pane_t3_ParamLimits

0xd0c5,	// (0x0003aa0e) main_mp4_pane_t3

0x625a,	// (0x00033ba3) main_mp4_pane_t4_ParamLimits

0x625a,	// (0x00033ba3) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0003d203) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0003d203) main_mp4_pane_t

0x629e,	// (0x00033be7) mp4_progress_pane_ParamLimits

0x629e,	// (0x00033be7) mp4_progress_pane

0x62e8,	// (0x00033c31) mp4_rocker_pane_ParamLimits

0x62e8,	// (0x00033c31) mp4_rocker_pane

0xd0ed,	// (0x0003aa36) mp4_progress_pane_t1

0xd106,	// (0x0003aa4f) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0003d20c) mp4_progress_pane_t

0xd11f,	// (0x0003aa68) mup_progress_pane_cp04

0xd6dd,	// (0x0003b026) mp4_rocker_pane_g1

0x115c,	// (0x0002eaa5) aid_cell_size_keypad2_ParamLimits

0x115c,	// (0x0002eaa5) aid_cell_size_keypad2

0x1172,	// (0x0002eabb) dialer2_ne_pane_ParamLimits

0x1172,	// (0x0002eabb) dialer2_ne_pane

0x118c,	// (0x0002ead5) grid_dialer2_keypad_pane_ParamLimits

0x118c,	// (0x0002ead5) grid_dialer2_keypad_pane

0xc597,	// (0x00039ee0) bg_popup_call_pane_cp07_ParamLimits

0xc597,	// (0x00039ee0) bg_popup_call_pane_cp07

0x6308,	// (0x00033c51) dialer2_ne_pane_t1_ParamLimits

0x6308,	// (0x00033c51) dialer2_ne_pane_t1

0x11a8,	// (0x0002eaf1) cell_dialer2_keypad_pane_ParamLimits

0x11a8,	// (0x0002eaf1) cell_dialer2_keypad_pane

0xd13d,	// (0x0003aa86) bg_button_pane_pane_cp04_ParamLimits

0xd13d,	// (0x0003aa86) bg_button_pane_pane_cp04

0x6344,	// (0x00033c8d) cell_dialer2_keypad_pane_g1_ParamLimits

0x6344,	// (0x00033c8d) cell_dialer2_keypad_pane_g1

0x28e8,	// (0x00030231) aid_placing_vt_set_content_ParamLimits

0x28e8,	// (0x00030231) aid_placing_vt_set_content

0x2910,	// (0x00030259) aid_placing_vt_set_title_ParamLimits

0x2910,	// (0x00030259) aid_placing_vt_set_title

0x1bcc,	// (0x0002f515) main_image3_pane

0x1228,	// (0x0002eb71) area_side_right_pane_cp01_ParamLimits

0x1228,	// (0x0002eb71) area_side_right_pane_cp01

0x6126,	// (0x00033a6f) main_image3_pane_g1_ParamLimits

0x6126,	// (0x00033a6f) main_image3_pane_g1

0x123f,	// (0x0002eb88) main_image3_pane_g2_ParamLimits

0x123f,	// (0x0002eb88) main_image3_pane_g2

0x1267,	// (0x0002ebb0) main_image3_pane_g3_ParamLimits

0x1267,	// (0x0002ebb0) main_image3_pane_g3

0x1291,	// (0x0002ebda) main_image3_pane_g4_ParamLimits

0x1291,	// (0x0002ebda) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0003d21b) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0003d21b) main_image3_pane_g

0x12bb,	// (0x0002ec04) main_image3_pane_t1_ParamLimits

0x12bb,	// (0x0002ec04) main_image3_pane_t1

0x1313,	// (0x0002ec5c) main_image3_pane_t2_ParamLimits

0x1313,	// (0x0002ec5c) main_image3_pane_t2

0x1365,	// (0x0002ecae) main_image3_pane_t3_ParamLimits

0x1365,	// (0x0002ecae) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0003d224) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0003d224) main_image3_pane_t

0xa4a7,	// (0x00037df0) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4a7,	// (0x00037df0) grid_sctrl_middle_pane_cp01

0x63de,	// (0x00033d27) cell_sctrl_middle_pane_cp01_ParamLimits

0x63de,	// (0x00033d27) cell_sctrl_middle_pane_cp01

0x63fb,	// (0x00033d44) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63fb,	// (0x00033d44) cell_sctrl_middle_pane_cp01_g1

0x1bcc,	// (0x0002f515) main_call4_pane

0x6411,	// (0x00033d5a) aid_size_button_call4_ParamLimits

0x6411,	// (0x00033d5a) aid_size_button_call4

0x6442,	// (0x00033d8b) call4_windows_pane_ParamLimits

0x6442,	// (0x00033d8b) call4_windows_pane

0x6462,	// (0x00033dab) grid_call4_button_pane_ParamLimits

0x6462,	// (0x00033dab) grid_call4_button_pane

0xd149,	// (0x0003aa92) call4_windows_conf_pane

0xd160,	// (0x0003aaa9) popup_call4_audio_first_window_ParamLimits

0xd160,	// (0x0003aaa9) popup_call4_audio_first_window

0xd1ac,	// (0x0003aaf5) popup_call4_audio_second_window_ParamLimits

0xd1ac,	// (0x0003aaf5) popup_call4_audio_second_window

0xd1c0,	// (0x0003ab09) popup_call4_audio_wait_window_ParamLimits

0xd1c0,	// (0x0003ab09) popup_call4_audio_wait_window

0x648f,	// (0x00033dd8) cell_call4_button_pane_ParamLimits

0x648f,	// (0x00033dd8) cell_call4_button_pane

0x64b8,	// (0x00033e01) bg_button_pane_cp09_ParamLimits

0x64b8,	// (0x00033e01) bg_button_pane_cp09

0x64c4,	// (0x00033e0d) cell_call4_button_pane_g1_ParamLimits

0x64c4,	// (0x00033e0d) cell_call4_button_pane_g1

0x64ea,	// (0x00033e33) cell_call4_button_pane_t1_ParamLimits

0x64ea,	// (0x00033e33) cell_call4_button_pane_t1

0xd208,	// (0x0003ab51) popup_call4_audio_conf_window_ParamLimits

0xd208,	// (0x0003ab51) popup_call4_audio_conf_window

0x58df,	// (0x00033228) mup3_progress_pane_t1_ParamLimits

0x58fe,	// (0x00033247) mup3_progress_pane_t2_ParamLimits

0xcaef,	// (0x0003a438) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0003d0f8) mup3_progress_pane_t_ParamLimits

0xcb0c,	// (0x0003a455) mup_progress_pane_cp03_ParamLimits

0x5e4d,	// (0x00033796) mup3_control_keys_pane_g4_copy1

0x62cc,	// (0x00033c15) mp4_rocker2_pane_ParamLimits

0x62cc,	// (0x00033c15) mp4_rocker2_pane

0xd21c,	// (0x0003ab65) mp4_rocker2_pane_g1

0xd224,	// (0x0003ab6d) mp4_rocker2_pane_g2

0x6514,	// (0x00033e5d) mp4_rocker2_pane_g3

0x651c,	// (0x00033e65) mp4_rocker2_pane_g4

0x6524,	// (0x00033e6d) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0003d22d) mp4_rocker2_pane_g

0x1bcc,	// (0x0002f515) main_camera4_pane

0x1bcc,	// (0x0002f515) main_video4_pane

0x10b6,	// (0x0002e9ff) main_video_tele_dialer_pane_t1_ParamLimits

0x10b6,	// (0x0002e9ff) main_video_tele_dialer_pane_t1

0x10cf,	// (0x0002ea18) main_video_tele_dialer_pane_t2_ParamLimits

0x10cf,	// (0x0002ea18) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0003d1e7) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0003d1e7) main_video_tele_dialer_pane_t

0x1405,	// (0x0002ed4e) cam4_autofocus_pane_ParamLimits

0x1405,	// (0x0002ed4e) cam4_autofocus_pane

0x141b,	// (0x0002ed64) cam4_image_uncrop_pane_ParamLimits

0x141b,	// (0x0002ed64) cam4_image_uncrop_pane

0x1435,	// (0x0002ed7e) cam4_indicators_pane_ParamLimits

0x1435,	// (0x0002ed7e) cam4_indicators_pane

0x1460,	// (0x0002eda9) main_camera4_pane_g1_ParamLimits

0x1460,	// (0x0002eda9) main_camera4_pane_g1

0x1472,	// (0x0002edbb) main_camera4_pane_g2_ParamLimits

0x1472,	// (0x0002edbb) main_camera4_pane_g2

0x1485,	// (0x0002edce) main_camera4_pane_g3_ParamLimits

0x1485,	// (0x0002edce) main_camera4_pane_g3

0x1498,	// (0x0002ede1) main_camera4_pane_g4_ParamLimits

0x1498,	// (0x0002ede1) main_camera4_pane_g4

0x14ab,	// (0x0002edf4) main_camera4_pane_g5_ParamLimits

0x14ab,	// (0x0002edf4) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0003d238) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0003d238) main_camera4_pane_g

0x14cf,	// (0x0002ee18) main_camera4_pane_t1_ParamLimits

0x14cf,	// (0x0002ee18) main_camera4_pane_t1

0x655c,	// (0x00033ea5) bg_tb_trans_pane_cp06

0x6572,	// (0x00033ebb) cam4_indicators_pane_g1

0x6583,	// (0x00033ecc) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0003d253) cam4_indicators_pane_g

0x659b,	// (0x00033ee4) cam4_indicators_pane_t1

0x151f,	// (0x0002ee68) main_video4_pane_g1_ParamLimits

0x151f,	// (0x0002ee68) main_video4_pane_g1

0x152e,	// (0x0002ee77) main_video4_pane_g2_ParamLimits

0x152e,	// (0x0002ee77) main_video4_pane_g2

0x153d,	// (0x0002ee86) main_video4_pane_g3_ParamLimits

0x153d,	// (0x0002ee86) main_video4_pane_g3

0x154c,	// (0x0002ee95) main_video4_pane_g4_ParamLimits

0x154c,	// (0x0002ee95) main_video4_pane_g4

0x0004,

0xf911,	// (0x0003d25a) main_video4_pane_g_ParamLimits

0xf911,	// (0x0003d25a) main_video4_pane_g

0x156a,	// (0x0002eeb3) vid4_indicators_pane_ParamLimits

0x156a,	// (0x0002eeb3) vid4_indicators_pane

0x1598,	// (0x0002eee1) video4_image_uncrop_cif_pane_ParamLimits

0x1598,	// (0x0002eee1) video4_image_uncrop_cif_pane

0x15b2,	// (0x0002eefb) video4_image_uncrop_nhd_pane_ParamLimits

0x15b2,	// (0x0002eefb) video4_image_uncrop_nhd_pane

0x141b,	// (0x0002ed64) video4_image_uncrop_vga_pane_ParamLimits

0x141b,	// (0x0002ed64) video4_image_uncrop_vga_pane

0x1bb2,	// (0x0002f4fb) bg_tb_trans_pane_cp07

0x65c5,	// (0x00033f0e) vid4_indicators_pane_g1

0x65d9,	// (0x00033f22) vid4_indicators_pane_g2

0x65ed,	// (0x00033f36) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0003d265) vid4_indicators_pane_g

0x661a,	// (0x00033f63) vid4_indicators_pane_t1

0x6631,	// (0x00033f7a) cam4_autofocus_pane_g1

0x6639,	// (0x00033f82) cam4_autofocus_pane_g2

0x6641,	// (0x00033f8a) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0003d270) cam4_autofocus_pane_g

0x6649,	// (0x00033f92) cam4_autofocus_pane_g3_copy1

0x60c8,	// (0x00033a11) video_down_pane_cp_t1

0x60d6,	// (0x00033a1f) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0003d1ec) video_down_pane_cp_t

0x1bb2,	// (0x0002f4fb) popup_vitu2_window_ParamLimits

0x1bb2,	// (0x0002f4fb) popup_vitu2_window

0x15c6,	// (0x0002ef0f) aid_size_cell2_itu2_ParamLimits

0x15c6,	// (0x0002ef0f) aid_size_cell2_itu2

0x15ec,	// (0x0002ef35) aid_size_cell_itu2_ParamLimits

0x15ec,	// (0x0002ef35) aid_size_cell_itu2

0x1648,	// (0x0002ef91) bg_popup_window_pane_cp09_ParamLimits

0x1648,	// (0x0002ef91) bg_popup_window_pane_cp09

0x1656,	// (0x0002ef9f) field_vitu2_entry_pane_ParamLimits

0x1656,	// (0x0002ef9f) field_vitu2_entry_pane

0x167c,	// (0x0002efc5) grid_vitu2_function_pane_ParamLimits

0x167c,	// (0x0002efc5) grid_vitu2_function_pane

0x16cd,	// (0x0002f016) grid_vitu2_itu_pane_ParamLimits

0x16cd,	// (0x0002f016) grid_vitu2_itu_pane

0x1763,	// (0x0002f0ac) cell_vitu2_itu_pane_ParamLimits

0x1763,	// (0x0002f0ac) cell_vitu2_itu_pane

0x178f,	// (0x0002f0d8) cell_vitu2_function_pane_ParamLimits

0x178f,	// (0x0002f0d8) cell_vitu2_function_pane

0xd22c,	// (0x0003ab75) bg_popup_call_pane_cp08_ParamLimits

0xd22c,	// (0x0003ab75) bg_popup_call_pane_cp08

0xd243,	// (0x0003ab8c) field_vitu2_entry_pane_g1

0xd24f,	// (0x0003ab98) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0003d277) field_vitu2_entry_pane_g

0x6651,	// (0x00033f9a) field_vitu2_entry_pane_t1_ParamLimits

0x6651,	// (0x00033f9a) field_vitu2_entry_pane_t1

0xd269,	// (0x0003abb2) field_vitu2_entry_pane_t2_ParamLimits

0xd269,	// (0x0003abb2) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0003d27e) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0003d27e) field_vitu2_entry_pane_t

0x17ce,	// (0x0002f117) bg_button_pane_cp010_ParamLimits

0x17ce,	// (0x0002f117) bg_button_pane_cp010

0x6680,	// (0x00033fc9) cell_vitu2_itu_pane_g1

0x17ea,	// (0x0002f133) cell_vitu2_itu_pane_t1_ParamLimits

0x17ea,	// (0x0002f133) cell_vitu2_itu_pane_t1

0x1848,	// (0x0002f191) cell_vitu2_itu_pane_t2_ParamLimits

0x1848,	// (0x0002f191) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0003d288) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0003d288) cell_vitu2_itu_pane_t

0x1bb2,	// (0x0002f4fb) bg_button_pane_cp011

0x1934,	// (0x0002f27d) cell_vitu2_function_pane_g1

0x1bcc,	// (0x0002f515) main_myfav_hc_pane

0x13b5,	// (0x0002ecfe) popup_image3_note_pane_ParamLimits

0x13b5,	// (0x0002ecfe) popup_image3_note_pane

0x13d1,	// (0x0002ed1a) popup_image3_tool_bar_pane_ParamLimits

0x13d1,	// (0x0002ed1a) popup_image3_tool_bar_pane

0x18d6,	// (0x0002f21f) cell_vitu2_itu_pane_t3_ParamLimits

0x18d6,	// (0x0002f21f) cell_vitu2_itu_pane_t3

0x9b4b,	// (0x00037494) bg_popup_trans_pane

0xd28e,	// (0x0003abd7) grid_image3_tool_bar_pane

0xd298,	// (0x0003abe1) bg_popup_trans_pane_g1

0xa777,	// (0x000380c0) bg_popup_trans_pane_g2

0xd2a0,	// (0x0003abe9) bg_popup_trans_pane_g3

0xd2a8,	// (0x0003abf1) bg_popup_trans_pane_g4

0xd2b0,	// (0x0003abf9) bg_popup_trans_pane_g5

0xd2b8,	// (0x0003ac01) bg_popup_trans_pane_g6

0xd2c0,	// (0x0003ac09) bg_popup_trans_pane_g7

0xd2c8,	// (0x0003ac11) bg_popup_trans_pane_g8

0xa757,	// (0x000380a0) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0003d28f) bg_popup_trans_pane_g

0xd2d0,	// (0x0003ac19) cell_image3_tool_bar_pane_ParamLimits

0xd2d0,	// (0x0003ac19) cell_image3_tool_bar_pane

0xc7b2,	// (0x0003a0fb) cell_image3_tool_bar_pane_g1

0x9b4b,	// (0x00037494) bg_popup_trans_pane_cp1

0xd2e4,	// (0x0003ac2d) popup_image3_note_pane_t1

0xd2f2,	// (0x0003ac3b) popup_image3_note_pane_t2

0xd300,	// (0x0003ac49) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0003d2a2) popup_image3_note_pane_t

0xd30e,	// (0x0003ac57) popup_image3_note_pane_t3_copy1

0x6692,	// (0x00033fdb) bg_myfav_hc_instruction_pane_ParamLimits

0x6692,	// (0x00033fdb) bg_myfav_hc_instruction_pane

0x66a6,	// (0x00033fef) cell_myfav_contact_pane_ParamLimits

0x66a6,	// (0x00033fef) cell_myfav_contact_pane

0x66c4,	// (0x0003400d) cell_myfav_contact_pane_cp1_ParamLimits

0x66c4,	// (0x0003400d) cell_myfav_contact_pane_cp1

0x66dc,	// (0x00034025) cell_myfav_contact_pane_cp2_ParamLimits

0x66dc,	// (0x00034025) cell_myfav_contact_pane_cp2

0x66f4,	// (0x0003403d) cell_myfav_contact_pane_cp3_ParamLimits

0x66f4,	// (0x0003403d) cell_myfav_contact_pane_cp3

0x670b,	// (0x00034054) cell_myfav_contact_pane_cp4_ParamLimits

0x670b,	// (0x00034054) cell_myfav_contact_pane_cp4

0x6723,	// (0x0003406c) cell_myfav_contact_pane_cp5_ParamLimits

0x6723,	// (0x0003406c) cell_myfav_contact_pane_cp5

0x6737,	// (0x00034080) cell_myfav_contact_pane_cp6_ParamLimits

0x6737,	// (0x00034080) cell_myfav_contact_pane_cp6

0x674d,	// (0x00034096) cell_myfav_contact_pane_cp7_ParamLimits

0x674d,	// (0x00034096) cell_myfav_contact_pane_cp7

0xd31c,	// (0x0003ac65) listscroll_gen_pane_cp05

0x6767,	// (0x000340b0) main_myfav_hc_pane_g1_ParamLimits

0x6767,	// (0x000340b0) main_myfav_hc_pane_g1

0x6781,	// (0x000340ca) main_myfav_hc_pane_g2_ParamLimits

0x6781,	// (0x000340ca) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0003d2a9) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0003d2a9) main_myfav_hc_pane_g

0x67b3,	// (0x000340fc) main_myfav_hc_pane_t1_ParamLimits

0x67b3,	// (0x000340fc) main_myfav_hc_pane_t1

0xd325,	// (0x0003ac6e) main_myfav_hc_pane_t2_ParamLimits

0xd325,	// (0x0003ac6e) main_myfav_hc_pane_t2

0xd337,	// (0x0003ac80) main_myfav_hc_pane_t3_ParamLimits

0xd337,	// (0x0003ac80) main_myfav_hc_pane_t3

0x67ca,	// (0x00034113) main_myfav_hc_pane_t4_ParamLimits

0x67ca,	// (0x00034113) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0003d2b0) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0003d2b0) main_myfav_hc_pane_t

0xc7b2,	// (0x0003a0fb) bg_myfav_hc_instruction_pane_g1

0xd349,	// (0x0003ac92) cell_myfav_contact_pane_g1_ParamLimits

0xd349,	// (0x0003ac92) cell_myfav_contact_pane_g1

0xd349,	// (0x0003ac92) cell_myfav_contact_pane_g2_ParamLimits

0xd349,	// (0x0003ac92) cell_myfav_contact_pane_g2

0xd355,	// (0x0003ac9e) cell_myfav_contact_pane_g3_ParamLimits

0xd355,	// (0x0003ac9e) cell_myfav_contact_pane_g3

0xcad9,	// (0x0003a422) cell_myfav_contact_pane_g4_ParamLimits

0xcad9,	// (0x0003a422) cell_myfav_contact_pane_g4

0xd362,	// (0x0003acab) cell_myfav_contact_pane_g5_ParamLimits

0xd362,	// (0x0003acab) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0003d2bb) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0003d2bb) cell_myfav_contact_pane_g

0x679b,	// (0x000340e4) main_myfav_hc_pane_g3_ParamLimits

0x679b,	// (0x000340e4) main_myfav_hc_pane_g3

0x04c5,	// (0x0002de0e) popup_adpt_find_window

0x67f2,	// (0x0003413b) afind_page_pane_ParamLimits

0x67f2,	// (0x0003413b) afind_page_pane

0x6807,	// (0x00034150) aid_size_cell_afind_ParamLimits

0x6807,	// (0x00034150) aid_size_cell_afind

0x6825,	// (0x0003416e) bg_popup_sub_pane_cp09_ParamLimits

0x6825,	// (0x0003416e) bg_popup_sub_pane_cp09

0x6832,	// (0x0003417b) find_pane_cp01_ParamLimits

0x6832,	// (0x0003417b) find_pane_cp01

0xd36e,	// (0x0003acb7) grid_afind_control_pane_ParamLimits

0xd36e,	// (0x0003acb7) grid_afind_control_pane

0x683f,	// (0x00034188) grid_afind_pane_ParamLimits

0x683f,	// (0x00034188) grid_afind_pane

0x685e,	// (0x000341a7) cell_afind_pane_ParamLimits

0x685e,	// (0x000341a7) cell_afind_pane

0xc7b2,	// (0x0003a0fb) afind_page_pane_g1

0x68c5,	// (0x0003420e) afind_page_pane_g2

0x68ce,	// (0x00034217) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0003d2c6) afind_page_pane_g

0x68d7,	// (0x00034220) afind_page_pane_t1

0xd382,	// (0x0003accb) cell_afind_grid_control_pane_ParamLimits

0xd382,	// (0x0003accb) cell_afind_grid_control_pane

0xd13d,	// (0x0003aa86) bg_button_pane_cp69_ParamLimits

0xd13d,	// (0x0003aa86) bg_button_pane_cp69

0x68f7,	// (0x00034240) cell_afind_pane_g1_ParamLimits

0x68f7,	// (0x00034240) cell_afind_pane_g1

0x6904,	// (0x0003424d) cell_afind_pane_t1_ParamLimits

0x6904,	// (0x0003424d) cell_afind_pane_t1

0xa570,	// (0x00037eb9) bg_button_pane_cp72

0xd391,	// (0x0003acda) cell_afind_grid_control_pane_g1

0x4501,	// (0x00031e4a) aid_image_placing_area_ParamLimits

0x4501,	// (0x00031e4a) aid_image_placing_area

0xce0b,	// (0x0003a754) field_vitu_entry_pane_g1_ParamLimits

0xce0b,	// (0x0003a754) field_vitu_entry_pane_g1

0xce17,	// (0x0003a760) field_vitu_entry_pane_g2_ParamLimits

0xce17,	// (0x0003a760) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0003d177) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0003d177) field_vitu_entry_pane_g

0x5f16,	// (0x0003385f) cell_vitu_itu_pane_g1_ParamLimits

0x5f58,	// (0x000338a1) cell_vitu_itu_pane_t3_ParamLimits

0x5f58,	// (0x000338a1) cell_vitu_itu_pane_t3

0xd0ed,	// (0x0003aa36) mp4_progress_pane_t1_ParamLimits

0xd106,	// (0x0003aa4f) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0003d20c) mp4_progress_pane_t_ParamLimits

0xd11f,	// (0x0003aa68) mup_progress_pane_cp04_ParamLimits

0x67de,	// (0x00034127) main_myfav_hc_pane_t5_ParamLimits

0x67de,	// (0x00034127) main_myfav_hc_pane_t5

0x1b2f,	// (0x0002f478) aid_zoom_text_primary

0x04c5,	// (0x0002de0e) popup_adpt_find_window_ParamLimits

0x1bb2,	// (0x0002f4fb) main_cam_set_pane

0x144c,	// (0x0002ed95) cam4_zoom_pane_ParamLimits

0x144c,	// (0x0002ed95) cam4_zoom_pane

0x6916,	// (0x0003425f) main_cam_set_pane_g1_ParamLimits

0x6916,	// (0x0003425f) main_cam_set_pane_g1

0x6924,	// (0x0003426d) main_cam_set_pane_g2_ParamLimits

0x6924,	// (0x0003426d) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0003d2cd) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0003d2cd) main_cam_set_pane_g

0x6945,	// (0x0003428e) main_cam_set_pane_t1_ParamLimits

0x6945,	// (0x0003428e) main_cam_set_pane_t1

0x6960,	// (0x000342a9) main_cset_listscroll_pane_ParamLimits

0x6960,	// (0x000342a9) main_cset_listscroll_pane

0x6980,	// (0x000342c9) main_cset_slider_pane_ParamLimits

0x6980,	// (0x000342c9) main_cset_slider_pane

0xd3a2,	// (0x0003aceb) main_cset_list_pane_ParamLimits

0xd3a2,	// (0x0003aceb) main_cset_list_pane

0xd3b2,	// (0x0003acfb) scroll_pane_cp028

0x69a6,	// (0x000342ef) aid_area_touch_slider

0x69c2,	// (0x0003430b) cset_slider_pane

0x69ec,	// (0x00034335) main_cset_slider_pane_g1

0x6a01,	// (0x0003434a) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0003d2d2) main_cset_slider_pane_g

0xd403,	// (0x0003ad4c) main_cset_slider_pane_t1

0x6aa5,	// (0x000343ee) main_cset_slider_pane_t2

0x6abf,	// (0x00034408) main_cset_slider_pane_t3

0x6ad9,	// (0x00034422) main_cset_slider_pane_t4

0x6af3,	// (0x0003443c) main_cset_slider_pane_t5

0x6b0d,	// (0x00034456) main_cset_slider_pane_t6

0x6b22,	// (0x0003446b) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0003d2f7) main_cset_slider_pane_t

0x6c26,	// (0x0003456f) cset_list_set_pane_ParamLimits

0x6c26,	// (0x0003456f) cset_list_set_pane

0x6c38,	// (0x00034581) aid_position_infowindow_above

0x6c40,	// (0x00034589) aid_position_infowindow_below

0x6c48,	// (0x00034591) cset_list_set_pane_g1_ParamLimits

0x6c48,	// (0x00034591) cset_list_set_pane_g1

0x6c54,	// (0x0003459d) cset_list_set_pane_g3_ParamLimits

0x6c54,	// (0x0003459d) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0003d316) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0003d316) cset_list_set_pane_g

0x6c63,	// (0x000345ac) cset_list_set_pane_t1_ParamLimits

0x6c63,	// (0x000345ac) cset_list_set_pane_t1

0xa4a7,	// (0x00037df0) list_highlight_pane_cp021_ParamLimits

0xa4a7,	// (0x00037df0) list_highlight_pane_cp021

0xb095,	// (0x000389de) cset_slider_pane_g1

0xb0a7,	// (0x000389f0) cset_slider_pane_g2

0xb09e,	// (0x000389e7) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0003d31b) cset_slider_pane_g

0x6c78,	// (0x000345c1) aid_area_touch_cam4_zoom

0x6c80,	// (0x000345c9) cam4_zoom_cont_pane

0x6c88,	// (0x000345d1) cam4_zoom_pane_g1

0x6c90,	// (0x000345d9) cam4_zoom_pane_g2

0x1948,	// (0x0002f291) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0003d322) cam4_zoom_pane_g

0x6c98,	// (0x000345e1) cam4_zoom_cont_pane_g1

0x6ca1,	// (0x000345ea) cam4_zoom_cont_pane_g2

0x6caa,	// (0x000345f3) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0003d329) cam4_zoom_cont_pane_g

0x642f,	// (0x00033d78) call4_image_pane_ParamLimits

0x642f,	// (0x00033d78) call4_image_pane

0xd149,	// (0x0003aa92) call4_windows_conf_pane_ParamLimits

0xd18a,	// (0x0003aad3) popup_call4_audio_in_window_ParamLimits

0xd18a,	// (0x0003aad3) popup_call4_audio_in_window

0x9b4b,	// (0x00037494) bg_popup_call2_act_pane_cp02

0xd200,	// (0x0003ab49) call4_list_conf_pane

0xc7b2,	// (0x0003a0fb) call4_image_pane_g1

0xc7b2,	// (0x0003a0fb) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0003d038) call4_image_pane_g

0xd4a3,	// (0x0003adec) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4a3,	// (0x0003adec) list_single_graphic_popup_conf4_pane

0x9b4b,	// (0x00037494) list_highlight_pane_cp022

0xd4b6,	// (0x0003adff) list_single_graphic_popup_conf4_pane_g1

0xac85,	// (0x000385ce) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0003d330) list_single_graphic_popup_conf4_pane_g

0xd4be,	// (0x0003ae07) list_single_graphic_popup_conf4_pane_t1

0x2a34,	// (0x0003037d) popup_vtel_slider_window_ParamLimits

0x2a34,	// (0x0003037d) popup_vtel_slider_window

0xd12b,	// (0x0003aa74) dialer2_ne_pane_t2_ParamLimits

0xd12b,	// (0x0003aa74) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0003d211) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0003d211) dialer2_ne_pane_t

0xc597,	// (0x00039ee0) bg_popup_sub_pane_cp010_ParamLimits

0xc597,	// (0x00039ee0) bg_popup_sub_pane_cp010

0x6cb3,	// (0x000345fc) popup_vtel_slider_window_g1_ParamLimits

0x6cb3,	// (0x000345fc) popup_vtel_slider_window_g1

0x6cc6,	// (0x0003460f) popup_vtel_slider_window_g2_ParamLimits

0x6cc6,	// (0x0003460f) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0003d335) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0003d335) popup_vtel_slider_window_g

0x6d1c,	// (0x00034665) vtel_slider_pane_ParamLimits

0x6d1c,	// (0x00034665) vtel_slider_pane

0x6d3e,	// (0x00034687) vtel_slider_pane_g1_ParamLimits

0x6d3e,	// (0x00034687) vtel_slider_pane_g1

0x6d52,	// (0x0003469b) vtel_slider_pane_g2_ParamLimits

0x6d52,	// (0x0003469b) vtel_slider_pane_g2

0x6d6a,	// (0x000346b3) vtel_slider_pane_g3_ParamLimits

0x6d6a,	// (0x000346b3) vtel_slider_pane_g3

0x6d3e,	// (0x00034687) vtel_slider_pane_g4_ParamLimits

0x6d3e,	// (0x00034687) vtel_slider_pane_g4

0x6d80,	// (0x000346c9) vtel_slider_pane_g5_ParamLimits

0x6d80,	// (0x000346c9) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0003d33e) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0003d33e) vtel_slider_pane_g

0x1bb2,	// (0x0002f4fb) main_gallery2_pane

0x1618,	// (0x0002ef61) aid_size_row_itut2_dropdow_list_ParamLimits

0x1618,	// (0x0002ef61) aid_size_row_itut2_dropdow_list

0x16a4,	// (0x0002efed) grid_vitu2_function_top_pane_ParamLimits

0x16a4,	// (0x0002efed) grid_vitu2_function_top_pane

0x170e,	// (0x0002f057) popup_vitu2_dropdown_list_window_ParamLimits

0x170e,	// (0x0002f057) popup_vitu2_dropdown_list_window

0x1737,	// (0x0002f080) popup_vitu2_match_list_window

0x1950,	// (0x0002f299) cell_vitu2_function_top_pane_ParamLimits

0x1950,	// (0x0002f299) cell_vitu2_function_top_pane

0x1968,	// (0x0002f2b1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1968,	// (0x0002f2b1) cell_vitu2_function_top_pane_cp01

0x1984,	// (0x0002f2cd) cell_vitu2_function_top_wide_pane_ParamLimits

0x1984,	// (0x0002f2cd) cell_vitu2_function_top_wide_pane

0x1bb2,	// (0x0002f4fb) bg_button_pane_cp012

0x19a0,	// (0x0002f2e9) cell_vitu2_function_top_pane_g1

0x6d96,	// (0x000346df) bg_button_pane_cp013_ParamLimits

0x6d96,	// (0x000346df) bg_button_pane_cp013

0x6db2,	// (0x000346fb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6db2,	// (0x000346fb) cell_vitu2_function_top_wide_pane_g1

0x1bb2,	// (0x0002f4fb) bg_popup_sub_pane_cp20

0x19b4,	// (0x0002f2fd) list_vitu2_match_list_pane

0xd298,	// (0x0003abe1) bg_popup_sub_pane_cp20_g1

0xd2a0,	// (0x0003abe9) bg_popup_sub_pane_cp20_g2

0xa777,	// (0x000380c0) bg_popup_sub_pane_cp20_g3

0xd2a8,	// (0x0003abf1) bg_popup_sub_pane_cp20_g4

0xa757,	// (0x000380a0) bg_popup_sub_pane_cp20_g5

0xd4e2,	// (0x0003ae2b) bg_popup_sub_pane_cp20_g6

0xd2b8,	// (0x0003ac01) bg_popup_sub_pane_cp20_g7

0xd2c0,	// (0x0003ac09) bg_popup_sub_pane_cp20_g8

0xd2c8,	// (0x0003ac11) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0003d349) bg_popup_sub_pane_cp20_g

0x6dca,	// (0x00034713) list_vitu2_match_list_item_pane_ParamLimits

0x6dca,	// (0x00034713) list_vitu2_match_list_item_pane

0x6ddc,	// (0x00034725) list_vitu2_match_list_item_pane_t1

0x1bcc,	// (0x0002f515) bg_popup_sub_pane_cp21

0x6e3a,	// (0x00034783) grid_vitu2_dropdown_list_pane

0x19d2,	// (0x0002f31b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x19d2,	// (0x0002f31b) cell_vitu2_dropdown_list_char_pane

0x19f3,	// (0x0002f33c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x19f3,	// (0x0002f33c) cell_vitu2_dropdown_list_ctrl_pane

0xd4ea,	// (0x0003ae33) cell_vitu2_dropdown_list_char_pane_g1

0xd4f3,	// (0x0003ae3c) cell_vitu2_dropdown_list_char_pane_g2

0xd4fc,	// (0x0003ae45) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0003d366) cell_vitu2_dropdown_list_char_pane_g

0x1a1f,	// (0x0002f368) cell_vitu2_dropdown_list_char_pane_t1

0x6e42,	// (0x0003478b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e42,	// (0x0003478b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e4f,	// (0x00034798) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e4f,	// (0x00034798) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e5c,	// (0x000347a5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e5c,	// (0x000347a5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1a2d,	// (0x0002f376) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1a2d,	// (0x0002f376) cell_vitu2_dropdown_list_ctrl_pane_g4

0x655c,	// (0x00033ea5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x655c,	// (0x00033ea5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0003d36d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0003d36d) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e69,	// (0x000347b2) aid_size_cell_gallery2_ParamLimits

0x6e69,	// (0x000347b2) aid_size_cell_gallery2

0x6e87,	// (0x000347d0) grid_gallery2_pane_ParamLimits

0x6e87,	// (0x000347d0) grid_gallery2_pane

0x6ea1,	// (0x000347ea) scroll_pane_cp029_ParamLimits

0x6ea1,	// (0x000347ea) scroll_pane_cp029

0x6ead,	// (0x000347f6) cell_gallery2_pane_ParamLimits

0x6ead,	// (0x000347f6) cell_gallery2_pane

0xd505,	// (0x0003ae4e) cell_gallery2_pane_g2

0x6f09,	// (0x00034852) cell_gallery2_pane_g3

0xd50d,	// (0x0003ae56) cell_gallery2_pane_g4

0xd515,	// (0x0003ae5e) cell_gallery2_pane_g5

0xa479,	// (0x00037dc2) grid_highlight_pane_cp10

0x1737,	// (0x0002f080) popup_vitu2_match_list_window_ParamLimits

0x174c,	// (0x0002f095) popup_vitu2_query_window_ParamLimits

0x174c,	// (0x0002f095) popup_vitu2_query_window

0x1bcc,	// (0x0002f515) bg_vitu2_candi_button_pane

0xd4ea,	// (0x0003ae33) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4f3,	// (0x0003ae3c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4fc,	// (0x0003ae45) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f11,	// (0x0003485a) bg_button_pane_cp015

0x6f25,	// (0x0003486e) bg_button_pane_cp016

0x6f38,	// (0x00034881) bg_button_pane_cp017

0xc3aa,	// (0x00039cf3) bg_popup_sub_pane_cp22

0xd51d,	// (0x0003ae66) popup_vitu2_query_window_g1

0x6f7d,	// (0x000348c6) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0003d378) popup_vitu2_query_window_g

0x6f9c,	// (0x000348e5) popup_vitu2_query_window_t1_ParamLimits

0x6f9c,	// (0x000348e5) popup_vitu2_query_window_t1

0x6fd1,	// (0x0003491a) popup_vitu2_query_window_t2_ParamLimits

0x6fd1,	// (0x0003491a) popup_vitu2_query_window_t2

0x6fe3,	// (0x0003492c) popup_vitu2_query_window_t3_ParamLimits

0x6fe3,	// (0x0003492c) popup_vitu2_query_window_t3

0x700b,	// (0x00034954) popup_vitu2_query_window_t4_ParamLimits

0x700b,	// (0x00034954) popup_vitu2_query_window_t4

0x702c,	// (0x00034975) popup_vitu2_query_window_t5_ParamLimits

0x702c,	// (0x00034975) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0003d37f) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0003d37f) popup_vitu2_query_window_t

0xd39a,	// (0x0003ace3) main_cset_text_pane

0x69a6,	// (0x000342ef) aid_area_touch_slider_ParamLimits

0x69c2,	// (0x0003430b) cset_slider_pane_ParamLimits

0x69ec,	// (0x00034335) main_cset_slider_pane_g1_ParamLimits

0x6a01,	// (0x0003434a) main_cset_slider_pane_g2_ParamLimits

0xd3bb,	// (0x0003ad04) main_cset_slider_pane_g3_ParamLimits

0xd3bb,	// (0x0003ad04) main_cset_slider_pane_g3

0x6a16,	// (0x0003435f) main_cset_slider_pane_g4_ParamLimits

0x6a16,	// (0x0003435f) main_cset_slider_pane_g4

0x6a25,	// (0x0003436e) main_cset_slider_pane_g5_ParamLimits

0x6a25,	// (0x0003436e) main_cset_slider_pane_g5

0x6a31,	// (0x0003437a) main_cset_slider_pane_g6_ParamLimits

0x6a31,	// (0x0003437a) main_cset_slider_pane_g6

0xf989,	// (0x0003d2d2) main_cset_slider_pane_g_ParamLimits

0xd403,	// (0x0003ad4c) main_cset_slider_pane_t1_ParamLimits

0x6aa5,	// (0x000343ee) main_cset_slider_pane_t2_ParamLimits

0x6abf,	// (0x00034408) main_cset_slider_pane_t3_ParamLimits

0x6ad9,	// (0x00034422) main_cset_slider_pane_t4_ParamLimits

0x6af3,	// (0x0003443c) main_cset_slider_pane_t5_ParamLimits

0x6b0d,	// (0x00034456) main_cset_slider_pane_t6_ParamLimits

0x6b22,	// (0x0003446b) main_cset_slider_pane_t7_ParamLimits

0x6b4c,	// (0x00034495) main_cset_slider_pane_t8_ParamLimits

0x6b4c,	// (0x00034495) main_cset_slider_pane_t8

0x6b74,	// (0x000344bd) main_cset_slider_pane_t9_ParamLimits

0x6b74,	// (0x000344bd) main_cset_slider_pane_t9

0x6b9c,	// (0x000344e5) main_cset_slider_pane_t10_ParamLimits

0x6b9c,	// (0x000344e5) main_cset_slider_pane_t10

0x6bc4,	// (0x0003450d) main_cset_slider_pane_t11_ParamLimits

0x6bc4,	// (0x0003450d) main_cset_slider_pane_t11

0x6bec,	// (0x00034535) main_cset_slider_pane_t12_ParamLimits

0x6bec,	// (0x00034535) main_cset_slider_pane_t12

0x6c09,	// (0x00034552) main_cset_slider_pane_t13_ParamLimits

0x6c09,	// (0x00034552) main_cset_slider_pane_t13

0xf9ae,	// (0x0003d2f7) main_cset_slider_pane_t_ParamLimits

0x9b4b,	// (0x00037494) bg_popup_sub_pane_cp011

0xd529,	// (0x0003ae72) main_cset_text_pane_g1

0xd531,	// (0x0003ae7a) main_cset_text_pane_t1

0xd53f,	// (0x0003ae88) main_cset_text_pane_t2

0xd54d,	// (0x0003ae96) main_cset_text_pane_t3

0xd55b,	// (0x0003aea4) main_cset_text_pane_t4

0xd569,	// (0x0003aeb2) main_cset_text_pane_t5

0xd577,	// (0x0003aec0) main_cset_text_pane_t6

0xd585,	// (0x0003aece) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0003d38e) main_cset_text_pane_t

0x1bcc,	// (0x0002f515) main_cam4_burst_pane

0x1bcc,	// (0x0002f515) main_cam5_pane

0x68e5,	// (0x0003422e) bg_button_pane_cp019

0x68ee,	// (0x00034237) bg_button_pane_cp020

0xd3c7,	// (0x0003ad10) main_cset_slider_pane_g7_ParamLimits

0xd3c7,	// (0x0003ad10) main_cset_slider_pane_g7

0xd3d3,	// (0x0003ad1c) main_cset_slider_pane_g8_ParamLimits

0xd3d3,	// (0x0003ad1c) main_cset_slider_pane_g8

0x6a45,	// (0x0003438e) main_cset_slider_pane_g9_ParamLimits

0x6a45,	// (0x0003438e) main_cset_slider_pane_g9

0x6a51,	// (0x0003439a) main_cset_slider_pane_g10_ParamLimits

0x6a51,	// (0x0003439a) main_cset_slider_pane_g10

0x6a5d,	// (0x000343a6) main_cset_slider_pane_g11_ParamLimits

0x6a5d,	// (0x000343a6) main_cset_slider_pane_g11

0x6a69,	// (0x000343b2) main_cset_slider_pane_g12_ParamLimits

0x6a69,	// (0x000343b2) main_cset_slider_pane_g12

0x6a75,	// (0x000343be) main_cset_slider_pane_g13_ParamLimits

0x6a75,	// (0x000343be) main_cset_slider_pane_g13

0x6a81,	// (0x000343ca) main_cset_slider_pane_g14_ParamLimits

0x6a81,	// (0x000343ca) main_cset_slider_pane_g14

0x6a8d,	// (0x000343d6) main_cset_slider_pane_g15_ParamLimits

0x6a8d,	// (0x000343d6) main_cset_slider_pane_g15

0xd431,	// (0x0003ad7a) main_cset_slider_pane_t14_ParamLimits

0xd431,	// (0x0003ad7a) main_cset_slider_pane_t14

0xd46a,	// (0x0003adb3) main_cset_slider_pane_t15_ParamLimits

0xd46a,	// (0x0003adb3) main_cset_slider_pane_t15

0x70a3,	// (0x000349ec) aid_cam4_burst_size_cell_ParamLimits

0x70a3,	// (0x000349ec) aid_cam4_burst_size_cell

0x70c3,	// (0x00034a0c) grid_cam4_burst_pane_ParamLimits

0x70c3,	// (0x00034a0c) grid_cam4_burst_pane

0x70fb,	// (0x00034a44) linegrid_cam4_burst_pane_ParamLimits

0x70fb,	// (0x00034a44) linegrid_cam4_burst_pane

0xd593,	// (0x0003aedc) scroll_pane_cp30_ParamLimits

0xd593,	// (0x0003aedc) scroll_pane_cp30

0x711f,	// (0x00034a68) cell_cam4_burst_pane_ParamLimits

0x711f,	// (0x00034a68) cell_cam4_burst_pane

0xd59f,	// (0x0003aee8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd59f,	// (0x0003aee8) linegrid_cam4_burst_pane_g1

0x716c,	// (0x00034ab5) linegrid_cam4_burst_pane_g2_ParamLimits

0x716c,	// (0x00034ab5) linegrid_cam4_burst_pane_g2

0xd5ac,	// (0x0003aef5) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5ac,	// (0x0003aef5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0003d39d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0003d39d) linegrid_cam4_burst_pane_g

0x717d,	// (0x00034ac6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x717d,	// (0x00034ac6) linegrid_cam4_burst_pane_g3_copy1

0xd5b9,	// (0x0003af02) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5b9,	// (0x0003af02) linegrid_cam4_burst_pane_g4

0x7197,	// (0x00034ae0) linegrid_cam4_burst_pane_g5_ParamLimits

0x7197,	// (0x00034ae0) linegrid_cam4_burst_pane_g5

0x71a8,	// (0x00034af1) linegrid_cam4_burst_pane_g6_ParamLimits

0x71a8,	// (0x00034af1) linegrid_cam4_burst_pane_g6

0xd5c6,	// (0x0003af0f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5c6,	// (0x0003af0f) linegrid_cam4_burst_pane_g7

0x71bf,	// (0x00034b08) cell_cam4_burst_pane_g1

0xd5df,	// (0x0003af28) main_cam5_pane_t1_ParamLimits

0xd5df,	// (0x0003af28) main_cam5_pane_t1

0xd5f1,	// (0x0003af3a) main_cam5_pane_t2_ParamLimits

0xd5f1,	// (0x0003af3a) main_cam5_pane_t2

0xd603,	// (0x0003af4c) main_cam5_pane_t3_ParamLimits

0xd603,	// (0x0003af4c) main_cam5_pane_t3

0xd615,	// (0x0003af5e) main_cam5_pane_t4_ParamLimits

0xd615,	// (0x0003af5e) main_cam5_pane_t4

0xd62d,	// (0x0003af76) main_cam5_pane_t5_ParamLimits

0xd62d,	// (0x0003af76) main_cam5_pane_t5

0xd641,	// (0x0003af8a) main_cam5_pane_t6_ParamLimits

0xd641,	// (0x0003af8a) main_cam5_pane_t6

0xd655,	// (0x0003af9e) main_cam5_pane_t7_ParamLimits

0xd655,	// (0x0003af9e) main_cam5_pane_t7

0xd667,	// (0x0003afb0) main_cam5_pane_t8_ParamLimits

0xd667,	// (0x0003afb0) main_cam5_pane_t8

0xd683,	// (0x0003afcc) main_cam5_pane_t9_ParamLimits

0xd683,	// (0x0003afcc) main_cam5_pane_t9

0xd695,	// (0x0003afde) main_cam5_pane_t10_ParamLimits

0xd695,	// (0x0003afde) main_cam5_pane_t10

0xd6e7,	// (0x0003b030) main_cam5_pane_t11_ParamLimits

0xd6e7,	// (0x0003b030) main_cam5_pane_t11

0xd6f9,	// (0x0003b042) main_cam5_pane_t12_ParamLimits

0xd6f9,	// (0x0003b042) main_cam5_pane_t12

0xd70e,	// (0x0003b057) main_cam5_pane_t13_ParamLimits

0xd70e,	// (0x0003b057) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0003d3a9) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0003d3a9) main_cam5_pane_t

0x0547,	// (0x0002de90) popup_scut_keymap_window_ParamLimits

0x0547,	// (0x0002de90) popup_scut_keymap_window

0x71d2,	// (0x00034b1b) aid_size_cell_brow_shortcut

0xa479,	// (0x00037dc2) bg_popup_window_pane_cp010

0x71de,	// (0x00034b27) grid_scut_pane

0x71ea,	// (0x00034b33) cell_scut_pane_ParamLimits

0x71ea,	// (0x00034b33) cell_scut_pane

0x7201,	// (0x00034b4a) cell_scut_pane_g1

0xd72b,	// (0x0003b074) cell_scut_pane_t1

0xd73a,	// (0x0003b083) cell_scut_pane_t2

0x720a,	// (0x00034b53) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0003d3c4) cell_scut_pane_t

0x54a2,	// (0x00032deb) main_mup3_pane_g8_ParamLimits

0x54a2,	// (0x00032deb) main_mup3_pane_g8

0x1630,	// (0x0002ef79) area_vitu2_query_pane_ParamLimits

0x1630,	// (0x0002ef79) area_vitu2_query_pane

0x6f4b,	// (0x00034894) input_focus_pane_cp08

0xd749,	// (0x0003b092) area_vitu2_query_pane_g1

0x7218,	// (0x00034b61) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0003d3cb) area_vitu2_query_pane_g

0x7229,	// (0x00034b72) area_vitu2_query_pane_t1_ParamLimits

0x7229,	// (0x00034b72) area_vitu2_query_pane_t1

0x723d,	// (0x00034b86) area_vitu2_query_pane_t2_ParamLimits

0x723d,	// (0x00034b86) area_vitu2_query_pane_t2

0x7251,	// (0x00034b9a) area_vitu2_query_pane_t3_ParamLimits

0x7251,	// (0x00034b9a) area_vitu2_query_pane_t3

0xd755,	// (0x0003b09e) area_vitu2_query_pane_t4_ParamLimits

0xd755,	// (0x0003b09e) area_vitu2_query_pane_t4

0xd77d,	// (0x0003b0c6) area_vitu2_query_pane_t5_ParamLimits

0xd77d,	// (0x0003b0c6) area_vitu2_query_pane_t5

0xd7a5,	// (0x0003b0ee) area_vitu2_query_pane_t6_ParamLimits

0xd7a5,	// (0x0003b0ee) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0003d3d0) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0003d3d0) area_vitu2_query_pane_t

0x7279,	// (0x00034bc2) bg_button_pane_cp018

0x7287,	// (0x00034bd0) bg_button_pane_cp021

0x7293,	// (0x00034bdc) bg_button_pane_cp022

0x72a4,	// (0x00034bed) input_focus_pane_cp09

0xad94,	// (0x000386dd) aid_size_touch_mv_arrow_left

0xadbf,	// (0x00038708) aid_size_touch_mv_arrow_right

0xd3df,	// (0x0003ad28) main_cset_slider_pane_g16_ParamLimits

0xd3df,	// (0x0003ad28) main_cset_slider_pane_g16

0xd3eb,	// (0x0003ad34) main_cset_slider_pane_g17_ParamLimits

0xd3eb,	// (0x0003ad34) main_cset_slider_pane_g17

0x71bf,	// (0x00034b08) cell_cam4_burst_pane_g1_ParamLimits

0x9b4b,	// (0x00037494) compa_mode_pane

0x6cd6,	// (0x0003461f) popup_vtel_slider_window_g3_ParamLimits

0x6cd6,	// (0x0003461f) popup_vtel_slider_window_g3

0x6ced,	// (0x00034636) popup_vtel_slider_window_g4_ParamLimits

0x6ced,	// (0x00034636) popup_vtel_slider_window_g4

0x6d04,	// (0x0003464d) popup_vtel_slider_window_t1_ParamLimits

0x6d04,	// (0x0003464d) popup_vtel_slider_window_t1

0x1bcc,	// (0x0002f515) main_cl_pane

0x4a3e,	// (0x00032387) popup_imed_adjust2_window_ParamLimits

0xc3aa,	// (0x00039cf3) bg_tb_trans_pane_cp05_ParamLimits

0xcd40,	// (0x0003a689) popup_imed_adjust2_window_g1_ParamLimits

0xcd4f,	// (0x0003a698) popup_imed_adjust2_window_g2_ParamLimits

0xcd4f,	// (0x0003a698) popup_imed_adjust2_window_g2

0xcd5b,	// (0x0003a6a4) popup_imed_adjust2_window_g3_ParamLimits

0xcd5b,	// (0x0003a6a4) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0003d13b) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0003d13b) popup_imed_adjust2_window_g

0xcd67,	// (0x0003a6b0) popup_imed_adjust2_window_t1_ParamLimits

0xcd7f,	// (0x0003a6c8) slider_imed_adjust_pane_ParamLimits

0xcd93,	// (0x0003a6dc) slider_imed_adjust_pane_g1_ParamLimits

0xcda3,	// (0x0003a6ec) slider_imed_adjust_pane_g2_ParamLimits

0xcdb3,	// (0x0003a6fc) slider_imed_adjust_pane_g3_ParamLimits

0xcdc4,	// (0x0003a70d) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0003d142) slider_imed_adjust_pane_g_ParamLimits

0x13ed,	// (0x0002ed36) aid_touch_area_cam4_ParamLimits

0x13ed,	// (0x0002ed36) aid_touch_area_cam4

0x652c,	// (0x00033e75) battery_pane_cp01

0x14bc,	// (0x0002ee05) main_camera4_pane_g6_ParamLimits

0x14bc,	// (0x0002ee05) main_camera4_pane_g6

0x14e6,	// (0x0002ee2f) main_camera4_pane_t2_ParamLimits

0x14e6,	// (0x0002ee2f) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0003d245) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0003d245) main_camera4_pane_t

0x1507,	// (0x0002ee50) aid_touch_area_vid4_ParamLimits

0x1507,	// (0x0002ee50) aid_touch_area_vid4

0x155b,	// (0x0002eea4) main_video4_pane_g5_ParamLimits

0x155b,	// (0x0002eea4) main_video4_pane_g5

0x1580,	// (0x0002eec9) vid4_progress_pane_ParamLimits

0x1580,	// (0x0002eec9) vid4_progress_pane

0xd3f7,	// (0x0003ad40) main_cset_slider_pane_g18_ParamLimits

0xd3f7,	// (0x0003ad40) main_cset_slider_pane_g18

0xd5d3,	// (0x0003af1c) cell_cam4_burst_pane_g2_ParamLimits

0xd5d3,	// (0x0003af1c) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0003d3a4) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0003d3a4) cell_cam4_burst_pane_g

0xa294,	// (0x00037bdd) bg_cl_pane_ParamLimits

0xa294,	// (0x00037bdd) bg_cl_pane

0x72b5,	// (0x00034bfe) cl_header_pane_ParamLimits

0x72b5,	// (0x00034bfe) cl_header_pane

0x72c9,	// (0x00034c12) cl_listscroll_pane_ParamLimits

0x72c9,	// (0x00034c12) cl_listscroll_pane

0xd7f1,	// (0x0003b13a) bg_cl_pane_g1

0xd7f9,	// (0x0003b142) bg_cl_pane_g2

0xd801,	// (0x0003b14a) bg_cl_pane_g3

0xd809,	// (0x0003b152) bg_cl_pane_g4

0xd811,	// (0x0003b15a) bg_cl_pane_g5

0xd819,	// (0x0003b162) bg_cl_pane_g6

0xd821,	// (0x0003b16a) bg_cl_pane_g7

0xd829,	// (0x0003b172) bg_cl_pane_g8

0xd831,	// (0x0003b17a) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0003d3df) bg_cl_pane_g

0x72d9,	// (0x00034c22) aid_height_cl_leading_ParamLimits

0x72d9,	// (0x00034c22) aid_height_cl_leading

0x72e5,	// (0x00034c2e) aid_height_cl_text_ParamLimits

0x72e5,	// (0x00034c2e) aid_height_cl_text

0xa4a7,	// (0x00037df0) bg_cl_header_pane_ParamLimits

0xa4a7,	// (0x00037df0) bg_cl_header_pane

0x7304,	// (0x00034c4d) cl_header_pane_g1_ParamLimits

0x7304,	// (0x00034c4d) cl_header_pane_g1

0x731a,	// (0x00034c63) cl_header_pane_t1_ParamLimits

0x731a,	// (0x00034c63) cl_header_pane_t1

0xd839,	// (0x0003b182) cl_list_pane

0xd3b2,	// (0x0003acfb) hc_scroll_pane_cp01

0xa757,	// (0x000380a0) bg_cl_header_pane_g1

0xd298,	// (0x0003abe1) bg_cl_header_pane_g2

0xa777,	// (0x000380c0) bg_cl_header_pane_g3

0xd2a8,	// (0x0003abf1) bg_cl_header_pane_g4

0xd2a0,	// (0x0003abe9) bg_cl_header_pane_g5

0xd4e2,	// (0x0003ae2b) bg_cl_header_pane_g6

0xd2c0,	// (0x0003ac09) bg_cl_header_pane_g7

0xd2c8,	// (0x0003ac11) bg_cl_header_pane_g8

0xd2b8,	// (0x0003ac01) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0003d3f2) bg_cl_header_pane_g

0x7333,	// (0x00034c7c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7333,	// (0x00034c7c) hc_cl_list_double_graphic_heading_pane

0x7344,	// (0x00034c8d) hc_cl_list_single_graphic_pane_ParamLimits

0x7344,	// (0x00034c8d) hc_cl_list_single_graphic_pane

0x735d,	// (0x00034ca6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x735d,	// (0x00034ca6) hc_cl_list_single_graphic_pane_g1

0x7369,	// (0x00034cb2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7369,	// (0x00034cb2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0003d405) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0003d405) hc_cl_list_single_graphic_pane_g

0x737d,	// (0x00034cc6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x737d,	// (0x00034cc6) hc_cl_list_single_graphic_pane_t1

0x735d,	// (0x00034ca6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x735d,	// (0x00034ca6) hc_cl_list_double_graphic_heading_pane_g1

0x7392,	// (0x00034cdb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7392,	// (0x00034cdb) hc_cl_list_double_graphic_heading_pane_g2

0x73a6,	// (0x00034cef) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73a6,	// (0x00034cef) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0003d40a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0003d40a) hc_cl_list_double_graphic_heading_pane_g

0x73ba,	// (0x00034d03) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73ba,	// (0x00034d03) hc_cl_list_double_graphic_heading_pane_t1

0x73cf,	// (0x00034d18) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73cf,	// (0x00034d18) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0003d411) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0003d411) hc_cl_list_double_graphic_heading_pane_t

0xa4bd,	// (0x00037e06) vid4_progress_pane_g1

0xa4cd,	// (0x00037e16) vid4_progress_pane_g2

0x1a49,	// (0x0002f392) vid4_progress_pane_g3

0xa4dd,	// (0x00037e26) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0003d416) vid4_progress_pane_g

0x1a5b,	// (0x0002f3a4) vid4_progress_pane_t1

0xa4f5,	// (0x00037e3e) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0003d421) vid4_progress_pane_t

0x1a71,	// (0x0002f3ba) wait_bar_pane_cp07

0xc5a5,	// (0x00039eee) blid_firmament_pane_ParamLimits

0xc5e8,	// (0x00039f31) popup_blid_sat_info2_window_g1

0xc60c,	// (0x00039f55) popup_blid_sat_info2_window_t3

0xc61a,	// (0x00039f63) popup_blid_sat_info2_window_t4

0xc628,	// (0x00039f71) popup_blid_sat_info2_window_t5

0xc636,	// (0x00039f7f) popup_blid_sat_info2_window_t6

0xc646,	// (0x00039f8f) popup_blid_sat_info2_window_t7

0xc654,	// (0x00039f9d) popup_blid_sat_info2_window_t8

0xc662,	// (0x00039fab) popup_blid_sat_info2_window_t9

0xc670,	// (0x00039fb9) popup_blid_sat_info2_window_t10

0xc732,	// (0x0003a07b) aid_firma_cardinal_ParamLimits

0xc746,	// (0x0003a08f) blid_firmament_pane_t1_ParamLimits

0xc75d,	// (0x0003a0a6) blid_firmament_pane_t2_ParamLimits

0xc774,	// (0x0003a0bd) blid_firmament_pane_t3_ParamLimits

0xc78b,	// (0x0003a0d4) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0003d02f) blid_firmament_pane_t_ParamLimits

0xc7a2,	// (0x0003a0eb) blid_sat_info_pane_ParamLimits

0x1bb2,	// (0x0002f4fb) main_cam_set_pane_ParamLimits

0x5cce,	// (0x00033617) aid_size_cell_colour_35_ParamLimits

0x5cee,	// (0x00033637) aid_size_cell_colour_112_ParamLimits

0x5d0e,	// (0x00033657) aid_size_cell_effect_ParamLimits

0xc3aa,	// (0x00039cf3) bg_tb_trans_pane_cp02_ParamLimits

0xa9bf,	// (0x00038308) heading_imed_pane_ParamLimits

0x5d2e,	// (0x00033677) listscroll_imed_pane_ParamLimits

0xb990,	// (0x000392d9) popup_call2_audio_first_window_g5_ParamLimits

0xb990,	// (0x000392d9) popup_call2_audio_first_window_g5

0x11ca,	// (0x0002eb13) aid_size_touch_image3_arrow_left_ParamLimits

0x11ca,	// (0x0002eb13) aid_size_touch_image3_arrow_left

0x11f6,	// (0x0002eb3f) aid_size_touch_image3_arrow_right_ParamLimits

0x11f6,	// (0x0002eb3f) aid_size_touch_image3_arrow_right

0xa50a,	// (0x00037e53) vid4_progress_pane_t3

0x6043,	// (0x0003398c) main_hwr_training_symbol_option_pane_ParamLimits

0x6043,	// (0x0003398c) main_hwr_training_symbol_option_pane

0xd02d,	// (0x0003a976) popup_hwr_training_preview_window_ParamLimits

0xd02d,	// (0x0003a976) popup_hwr_training_preview_window

0x1071,	// (0x0002e9ba) hwr_training_navi_pane_g5_ParamLimits

0x1071,	// (0x0002e9ba) hwr_training_navi_pane_g5

0xd286,	// (0x0003abcf) popup_char_count_window

0x1bb2,	// (0x0002f4fb) bg_popup_sub_pane_cp20_ParamLimits

0x19b4,	// (0x0002f2fd) list_vitu2_match_list_pane_ParamLimits

0x19c3,	// (0x0002f30c) vitu2_page_scroll_pane_ParamLimits

0x19c3,	// (0x0002f30c) vitu2_page_scroll_pane

0xd864,	// (0x0003b1ad) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd864,	// (0x0003b1ad) list_single_hwr_training_symbol_option_pane

0xd877,	// (0x0003b1c0) list_single_hwr_training_symbol_option_pane_g1

0xd87f,	// (0x0003b1c8) list_single_hwr_training_symbol_option_pane_t1

0xd88d,	// (0x0003b1d6) bg_button_pane_cp023

0xd896,	// (0x0003b1df) bg_button_pane_cp024

0x741c,	// (0x00034d65) vitu2_page_scroll_pane_g1

0x7424,	// (0x00034d6d) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0003d428) vitu2_page_scroll_pane_g

0x742c,	// (0x00034d75) vitu2_page_scroll_pane_t1

0xc7db,	// (0x0003a124) popup_char_count_window_g1

0xd8c9,	// (0x0003b212) popup_char_count_window_g2

0xd8d2,	// (0x0003b21b) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0003d42d) popup_char_count_window_g

0xd8db,	// (0x0003b224) popup_char_count_window_t1

0x1bcc,	// (0x0002f515) main_vded2_pane

0xcd2c,	// (0x0003a675) aid_size_cell_imed_line

0xcd36,	// (0x0003a67f) grid_imed_line_width_pane

0x65fe,	// (0x00033f47) vid4_indicators_pane_g4

0xd8e9,	// (0x0003b232) cell_imed_line_width_pane_ParamLimits

0xd8e9,	// (0x0003b232) cell_imed_line_width_pane

0xd8fd,	// (0x0003b246) cell_imed_line_width_pane_g1

0xd6d5,	// (0x0003b01e) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0003d434) cell_imed_line_width_pane_g

0x743b,	// (0x00034d84) main_vded2_pane_g1_ParamLimits

0x743b,	// (0x00034d84) main_vded2_pane_g1

0x7451,	// (0x00034d9a) main_vded2_pane_g2_ParamLimits

0x7451,	// (0x00034d9a) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0003d439) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0003d439) main_vded2_pane_g

0x7463,	// (0x00034dac) vded2_slider_pane_ParamLimits

0x7463,	// (0x00034dac) vded2_slider_pane

0x7473,	// (0x00034dbc) aid_size_touch_vded2_end

0x747d,	// (0x00034dc6) aid_size_touch_vded2_playhead

0xd906,	// (0x0003b24f) aid_size_touch_vded2_start

0xd90e,	// (0x0003b257) vded2_slider_bg_pane

0xd917,	// (0x0003b260) vded2_slider_pane_g1

0xd920,	// (0x0003b269) vded2_slider_pane_g2

0x7487,	// (0x00034dd0) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0003d43e) vded2_slider_pane_g

0xd928,	// (0x0003b271) vded2_slider_bg_pane_g1

0xd931,	// (0x0003b27a) vded2_slider_bg_pane_g2

0xd93a,	// (0x0003b283) vded2_slider_bg_pane_g3

0x0002,

0x0054,	// (0x0002d99d) vded2_slider_bg_pane_g

0x416f,	// (0x00031ab8) aid_postcard_touch_down_pane_ParamLimits

0x416f,	// (0x00031ab8) aid_postcard_touch_down_pane

0x4185,	// (0x00031ace) aid_postcard_touch_up_pane_ParamLimits

0x4185,	// (0x00031ace) aid_postcard_touch_up_pane

0x1bcc,	// (0x0002f515) main_blid2_pane

0x4a24,	// (0x0003236d) popup_blid2_search_window

0x9b4b,	// (0x00037494) blid2_gps_pane

0x9b4b,	// (0x00037494) blid2_navig_pane

0x9b4b,	// (0x00037494) blid2_search_pane

0x9b4b,	// (0x00037494) blid2_tripm_pane

0x7492,	// (0x00034ddb) blid2_search_pane_g1_ParamLimits

0x7492,	// (0x00034ddb) blid2_search_pane_g1

0x74aa,	// (0x00034df3) blid2_search_pane_t1_ParamLimits

0x74aa,	// (0x00034df3) blid2_search_pane_t1

0x74bc,	// (0x00034e05) aid_size_cell_blid2_gps_ParamLimits

0x74bc,	// (0x00034e05) aid_size_cell_blid2_gps

0x74d4,	// (0x00034e1d) blid2_gps_pane_g1_ParamLimits

0x74d4,	// (0x00034e1d) blid2_gps_pane_g1

0x74e8,	// (0x00034e31) grid_blid2_satellite_pane_ParamLimits

0x74e8,	// (0x00034e31) grid_blid2_satellite_pane

0x7502,	// (0x00034e4b) blid2_navig_pane_g1_ParamLimits

0x7502,	// (0x00034e4b) blid2_navig_pane_g1

0x750e,	// (0x00034e57) blid2_navig_pane_t1_ParamLimits

0x750e,	// (0x00034e57) blid2_navig_pane_t1

0x7529,	// (0x00034e72) blid2_navig_pane_t2_ParamLimits

0x7529,	// (0x00034e72) blid2_navig_pane_t2

0x0001,

0xfafc,	// (0x0003d445) blid2_navig_pane_t_ParamLimits

0xfafc,	// (0x0003d445) blid2_navig_pane_t

0x7544,	// (0x00034e8d) blid2_navig_ring_pane_ParamLimits

0x7544,	// (0x00034e8d) blid2_navig_ring_pane

0x755d,	// (0x00034ea6) blid2_speed_pane_ParamLimits

0x755d,	// (0x00034ea6) blid2_speed_pane

0x7569,	// (0x00034eb2) blid2_tripm_pane_g1_ParamLimits

0x7569,	// (0x00034eb2) blid2_tripm_pane_g1

0x7584,	// (0x00034ecd) blid2_tripm_pane_g2_ParamLimits

0x7584,	// (0x00034ecd) blid2_tripm_pane_g2

0x7598,	// (0x00034ee1) blid2_tripm_pane_g3_ParamLimits

0x7598,	// (0x00034ee1) blid2_tripm_pane_g3

0x75ac,	// (0x00034ef5) blid2_tripm_pane_g4_ParamLimits

0x75ac,	// (0x00034ef5) blid2_tripm_pane_g4

0x75c0,	// (0x00034f09) blid2_tripm_pane_g5_ParamLimits

0x75c0,	// (0x00034f09) blid2_tripm_pane_g5

0x0005,

0xfb01,	// (0x0003d44a) blid2_tripm_pane_g_ParamLimits

0xfb01,	// (0x0003d44a) blid2_tripm_pane_g

0x75e6,	// (0x00034f2f) blid2_tripm_pane_t1_ParamLimits

0x75e6,	// (0x00034f2f) blid2_tripm_pane_t1

0x7601,	// (0x00034f4a) blid2_tripm_pane_t2_ParamLimits

0x7601,	// (0x00034f4a) blid2_tripm_pane_t2

0x761a,	// (0x00034f63) blid2_tripm_pane_t3_ParamLimits

0x761a,	// (0x00034f63) blid2_tripm_pane_t3

0x0003,

0xfb0e,	// (0x0003d457) blid2_tripm_pane_t_ParamLimits

0xfb0e,	// (0x0003d457) blid2_tripm_pane_t

0x7661,	// (0x00034faa) cell_blid2_satellite_pane_ParamLimits

0x7661,	// (0x00034faa) cell_blid2_satellite_pane

0x767f,	// (0x00034fc8) cell_blid2_satellite_pane_g1

0xd943,	// (0x0003b28c) cell_blid2_satellite_pane_t1

0xc7b2,	// (0x0003a0fb) blid2_speed_pane_g1

0xd951,	// (0x0003b29a) blid2_speed_pane_t1

0xd95f,	// (0x0003b2a8) blid2_speed_pane_t2

0x0001,

0x0076,	// (0x0002d9bf) blid2_speed_pane_t

0xc7b2,	// (0x0003a0fb) blid2_navig_ring_pane_g1

0x7688,	// (0x00034fd1) blid2_navig_ring_pane_g2

0x7690,	// (0x00034fd9) blid2_navig_ring_pane_g3

0x7698,	// (0x00034fe1) blid2_navig_ring_pane_g4

0x76a0,	// (0x00034fe9) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0003d460) blid2_navig_ring_pane_g

0x9b4b,	// (0x00037494) bg_popup_window_pane_cp011

0xd96d,	// (0x0003b2b6) popup_blid2_search_window_g1

0xd975,	// (0x0003b2be) popup_blid2_search_window_t1

0xd983,	// (0x0003b2cc) popup_blid2_search_window_t2

0x0001,

0x0086,	// (0x0002d9cf) popup_blid2_search_window_t

0xa666,	// (0x00037faf) main_browser_pane_g1

0xa294,	// (0x00037bdd) main_browser_pane_ParamLimits

0x1bb2,	// (0x0002f4fb) bg_button_pane_cp011_ParamLimits

0x1934,	// (0x0002f27d) cell_vitu2_function_pane_g1_ParamLimits

0xc3aa,	// (0x00039cf3) bg_popup_sub_pane_cp22_ParamLimits

0x6f4b,	// (0x00034894) input_focus_pane_cp08_ParamLimits

0x6f62,	// (0x000348ab) popup_vitu2_query_button_pane_ParamLimits

0x6f62,	// (0x000348ab) popup_vitu2_query_button_pane

0x6f73,	// (0x000348bc) popup_vitu2_query_input_button_pane

0xd51d,	// (0x0003ae66) popup_vitu2_query_window_g1_ParamLimits

0x6f7d,	// (0x000348c6) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0003d378) popup_vitu2_query_window_g_ParamLimits

0x9b4b,	// (0x00037494) bg_button_pane_cp026

0x76a8,	// (0x00034ff1) popup_vitu2_query_input_button_pane_g1

0x9b4b,	// (0x00037494) bg_button_pane_cp025

0xd991,	// (0x0003b2da) popup_vitu2_query_button_pane_t1

0x5194,	// (0x00032add) main_mp3_pane_t6

0x51a2,	// (0x00032aeb) popup_slider_window_cp01

0x656a,	// (0x00033eb3) cam4_battery_pane

0x65bd,	// (0x00033f06) cam4_battery_pane_cp02

0xa4b5,	// (0x00037dfe) cam4_battery_pane_cp01

0xa4b5,	// (0x00037dfe) cam4_battery_pane_cp03

0xd6dd,	// (0x0003b026) cam4_battery_pane_g1

0xc7b2,	// (0x0003a0fb) cam4_battery_pane_g2

0x0001,

0xfb22,	// (0x0003d46b) cam4_battery_pane_g

0xc67e,	// (0x00039fc7) popup_blid_sat_info2_window_t11

0xad94,	// (0x000386dd) aid_size_touch_mv_arrow_left_ParamLimits

0xadbf,	// (0x00038708) aid_size_touch_mv_arrow_right_ParamLimits

0xae1d,	// (0x00038766) navi_pane_g1_ParamLimits

0xae29,	// (0x00038772) navi_pane_g2_ParamLimits

0xae57,	// (0x000387a0) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003cd2e) navi_pane_g_ParamLimits

0x3b8c,	// (0x000314d5) navi_pane_mv_t1_ParamLimits

0x5d3a,	// (0x00033683) grid_imed_effect_pane_ParamLimits

0x2931,	// (0x0003027a) aid_placing_vt_slider_lsc

0xa5b5,	// (0x00037efe) aid_placing_vt_slider_prt

0xa4a7,	// (0x00037df0) bg_tb_trans_pane_cp01_ParamLimits

0xc920,	// (0x0003a269) popup_image_details_window_g1_ParamLimits

0xc933,	// (0x0003a27c) popup_image_details_window_g2_ParamLimits

0xc948,	// (0x0003a291) popup_image_details_window_g3_ParamLimits

0xc948,	// (0x0003a291) popup_image_details_window_g3

0xf72b,	// (0x0003d074) popup_image_details_window_g_ParamLimits

0xc95c,	// (0x0003a2a5) popup_image_details_window_t1_ParamLimits

0xc96e,	// (0x0003a2b7) popup_image_details_window_t2_ParamLimits

0xc987,	// (0x0003a2d0) popup_image_details_window_t3_ParamLimits

0xc99b,	// (0x0003a2e4) popup_image_details_window_t4_ParamLimits

0xc9b6,	// (0x0003a2ff) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0003d07b) popup_image_details_window_t_ParamLimits

0x72f1,	// (0x00034c3a) cl_header_name_pane_ParamLimits

0x72f1,	// (0x00034c3a) cl_header_name_pane

0x76b0,	// (0x00034ff9) cl_header_name_pane_t1_ParamLimits

0x76b0,	// (0x00034ff9) cl_header_name_pane_t1

0x76d1,	// (0x0003501a) cl_header_name_pane_t2_ParamLimits

0x76d1,	// (0x0003501a) cl_header_name_pane_t2

0x7713,	// (0x0003505c) cl_header_name_pane_t3_ParamLimits

0x7713,	// (0x0003505c) cl_header_name_pane_t3

0x0002,

0xfb27,	// (0x0003d470) cl_header_name_pane_t_ParamLimits

0xfb27,	// (0x0003d470) cl_header_name_pane_t

0xaee6,	// (0x0003882f) navi_pane_mv_g2_ParamLimits

0xd243,	// (0x0003ab8c) field_vitu2_entry_pane_g1_ParamLimits

0xd24f,	// (0x0003ab98) field_vitu2_entry_pane_g2_ParamLimits

0xd25b,	// (0x0003aba4) field_vitu2_entry_pane_g3_ParamLimits

0xd25b,	// (0x0003aba4) field_vitu2_entry_pane_g3

0xf92e,	// (0x0003d277) field_vitu2_entry_pane_g_ParamLimits

0x6680,	// (0x00033fc9) cell_vitu2_itu_pane_g1_ParamLimits

0x17dc,	// (0x0002f125) cell_vitu2_itu_pane_g2_ParamLimits

0x17dc,	// (0x0002f125) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0003d283) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0003d283) cell_vitu2_itu_pane_g

0x1bb2,	// (0x0002f4fb) bg_vkb2_func_pane_cp05_ParamLimits

0x1bb2,	// (0x0002f4fb) bg_vkb2_func_pane_cp05

0x1bb2,	// (0x0002f4fb) bg_vkb2_func_pane_cp03

0x1bb2,	// (0x0002f4fb) bg_vkb2_func_pane_cp04

0x1bb2,	// (0x0002f4fb) bg_vkb2_func_pane_cp10_ParamLimits

0x1bb2,	// (0x0002f4fb) bg_vkb2_func_pane_cp10

0x7293,	// (0x00034bdc) bg_vkb2_func_pane_cp08

0x7279,	// (0x00034bc2) bg_vkb2_func_pane_cp06

0x7287,	// (0x00034bd0) bg_vkb2_func_pane_cp07

0xd89f,	// (0x0003b1e8) bg_vkb2_func_pane_cp11_ParamLimits

0xd89f,	// (0x0003b1e8) bg_vkb2_func_pane_cp11

0xd8b4,	// (0x0003b1fd) bg_vkb2_func_pane_cp12_ParamLimits

0xd8b4,	// (0x0003b1fd) bg_vkb2_func_pane_cp12

0x9b4b,	// (0x00037494) bg_vkb2_func_pane_cp09

0xd298,	// (0x0003abe1) bg_vkb2_func_pane_g1

0xa777,	// (0x000380c0) bg_vkb2_func_pane_g2

0xd2a0,	// (0x0003abe9) bg_vkb2_func_pane_g3

0xd2a8,	// (0x0003abf1) bg_vkb2_func_pane_g4

0xd4e2,	// (0x0003ae2b) bg_vkb2_func_pane_g5

0xd2c0,	// (0x0003ac09) bg_vkb2_func_pane_g6

0xd2c8,	// (0x0003ac11) bg_vkb2_func_pane_g7

0xd2b8,	// (0x0003ac01) bg_vkb2_func_pane_g8

0xa757,	// (0x000380a0) bg_vkb2_func_pane_g9

0x0008,

0xfb2e,	// (0x0003d477) bg_vkb2_func_pane_g

0x75d4,	// (0x00034f1d) blid2_tripm_pane_g6_ParamLimits

0x75d4,	// (0x00034f1d) blid2_tripm_pane_g6

0xd0e5,	// (0x0003aa2e) mp4_progress_pane_g1

0x764d,	// (0x00034f96) blid2_tripm_values_pane_ParamLimits

0x764d,	// (0x00034f96) blid2_tripm_values_pane

0x7744,	// (0x0003508d) blid2_tripm_values_pane_t1

0x7752,	// (0x0003509b) blid2_tripm_values_pane_t2

0x7760,	// (0x000350a9) blid2_tripm_values_pane_t3

0x776e,	// (0x000350b7) blid2_tripm_values_pane_t4

0x777c,	// (0x000350c5) blid2_tripm_values_pane_t5

0x778a,	// (0x000350d3) blid2_tripm_values_pane_t6

0x7798,	// (0x000350e1) blid2_tripm_values_pane_t7

0x77a6,	// (0x000350ef) blid2_tripm_values_pane_t8

0x77b4,	// (0x000350fd) blid2_tripm_values_pane_t9

0x0008,

0xfb41,	// (0x0003d48a) blid2_tripm_values_pane_t

0x2973,	// (0x000302bc) call_video_pane_t1_ParamLimits

0x2991,	// (0x000302da) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003cbb7) call_video_pane_t_ParamLimits

0x4076,	// (0x000319bf) msg_header_pane_g1_ParamLimits

0xb0da,	// (0x00038a23) msg_header_pane_g2_ParamLimits

0xb0da,	// (0x00038a23) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003cdd1) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003cdd1) msg_header_pane_g

0xa294,	// (0x00037bdd) main_clock2_pane_ParamLimits

0x5aca,	// (0x00033413) grid_clock2_toolbar_pane_ParamLimits

0x5aca,	// (0x00033413) grid_clock2_toolbar_pane

0x5aca,	// (0x00033413) listscroll_clock2_pane_ParamLimits

0x5aca,	// (0x00033413) listscroll_clock2_pane

0x5bc6,	// (0x0003350f) main_clock2_pane_t3_ParamLimits

0x5bc6,	// (0x0003350f) main_clock2_pane_t3

0x5bea,	// (0x00033533) main_clock2_pane_t4_ParamLimits

0x5bea,	// (0x00033533) main_clock2_pane_t4

0xd99f,	// (0x0003b2e8) cell_clock2_toolbar_pane

0xd9a7,	// (0x0003b2f0) cell_clock2_toolbar_pane_cp01

0xd9a7,	// (0x0003b2f0) cell_clock2_toolbar_pane_cp02

0xd9af,	// (0x0003b2f8) cell_clock2_toolbar_pane_cp03

0xd9b7,	// (0x0003b300) list_clock2_pane

0xad19,	// (0x00038662) scroll_pane_cp10

0xd9bf,	// (0x0003b308) list_single_clock2_pane_ParamLimits

0xd9bf,	// (0x0003b308) list_single_clock2_pane

0xa479,	// (0x00037dc2) list_highlight_pane_cp08

0xd9cc,	// (0x0003b315) list_single_clock2_pane_t1

0xd9da,	// (0x0003b323) list_single_clock2_pane_t2

0x0001,

0x00bd,	// (0x0002da06) list_single_clock2_pane_t

0x9b4b,	// (0x00037494) bg_button_pane_cp10

0xd9e8,	// (0x0003b331) cell_clock2_toolbar_pane_g1

0x0813,	// (0x0002e15c) aid_main_viewer_pane_g1_ParamLimits

0x0813,	// (0x0002e15c) aid_main_viewer_pane_g1

0x0821,	// (0x0002e16a) aid_main_viewer_pane_g2_ParamLimits

0x0821,	// (0x0002e16a) aid_main_viewer_pane_g2

0x4115,	// (0x00031a5e) aid_main_viewer_pane_g3_ParamLimits

0x4115,	// (0x00031a5e) aid_main_viewer_pane_g3

0x4124,	// (0x00031a6d) aid_main_viewer_pane_g4_ParamLimits

0x4124,	// (0x00031a6d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003cde2) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003cde2) aid_main_viewer_pane_g

0x0855,	// (0x0002e19e) main_calc_pane_ParamLimits

0x087b,	// (0x0002e1c4) main_dialer2_pane_ParamLimits

0x1bcc,	// (0x0002f515) main_cam6_pane

0x1bcc,	// (0x0002f515) main_vid6_pane

0x5ad6,	// (0x0003341f) listscroll_gen_pane_cp06_ParamLimits

0x5ad6,	// (0x0003341f) listscroll_gen_pane_cp06

0x5c0d,	// (0x00033556) main_clock2_pane_t5_ParamLimits

0x5c0d,	// (0x00033556) main_clock2_pane_t5

0x5c67,	// (0x000335b0) aid_call2_pane_cp10_ParamLimits

0x5c79,	// (0x000335c2) aid_call_pane_cp10_ParamLimits

0xad88,	// (0x000386d1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad88,	// (0x000386d1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c8b,	// (0x000335d4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c8b,	// (0x000335d4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad88,	// (0x000386d1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0003d130) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c9d,	// (0x000335e6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6359,	// (0x00033ca2) cell_dialer2_keypad_pane_g2_ParamLimits

0x6359,	// (0x00033ca2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0003d216) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0003d216) cell_dialer2_keypad_pane_g

0x6375,	// (0x00033cbe) cell_dialer2_keypad_pane_t1

0x6998,	// (0x000342e1) main_cset_text2_pane_ParamLimits

0x6998,	// (0x000342e1) main_cset_text2_pane

0xd749,	// (0x0003b092) area_vitu2_query_pane_g1_ParamLimits

0x7218,	// (0x00034b61) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0003d3cb) area_vitu2_query_pane_g_ParamLimits

0xd7cd,	// (0x0003b116) area_vitu2_query_pane_t7_ParamLimits

0xd7cd,	// (0x0003b116) area_vitu2_query_pane_t7

0x7279,	// (0x00034bc2) bg_button_pane_cp018_ParamLimits

0x7287,	// (0x00034bd0) bg_button_pane_cp021_ParamLimits

0x7293,	// (0x00034bdc) bg_button_pane_cp022_ParamLimits

0x7293,	// (0x00034bdc) bg_vkb2_func_pane_cp08_ParamLimits

0x7279,	// (0x00034bc2) bg_vkb2_func_pane_cp06_ParamLimits

0x7287,	// (0x00034bd0) bg_vkb2_func_pane_cp07_ParamLimits

0x72a4,	// (0x00034bed) input_focus_pane_cp09_ParamLimits

0xa520,	// (0x00037e69) cam6_autofocus_pane_ParamLimits

0xa520,	// (0x00037e69) cam6_autofocus_pane

0x1a82,	// (0x0002f3cb) cam6_image_uncrop_pane_ParamLimits

0x1a82,	// (0x0002f3cb) cam6_image_uncrop_pane

0x1a91,	// (0x0002f3da) cam6_indi_pane_ParamLimits

0x1a91,	// (0x0002f3da) cam6_indi_pane

0x1aa7,	// (0x0002f3f0) cam6_mode_pane_ParamLimits

0x1aa7,	// (0x0002f3f0) cam6_mode_pane

0x1ab9,	// (0x0002f402) cam6_timer_pane_ParamLimits

0x1ab9,	// (0x0002f402) cam6_timer_pane

0x1ac9,	// (0x0002f412) cam6_zoom_pane_ParamLimits

0x1ac9,	// (0x0002f412) cam6_zoom_pane

0x77c2,	// (0x0003510b) cam6_mode_pane_g1_ParamLimits

0x77c2,	// (0x0003510b) cam6_mode_pane_g1

0x77d2,	// (0x0003511b) cam6_mode_pane_g2_ParamLimits

0x77d2,	// (0x0003511b) cam6_mode_pane_g2

0x77e2,	// (0x0003512b) cam6_mode_pane_g3_ParamLimits

0x77e2,	// (0x0003512b) cam6_mode_pane_g3

0x77f2,	// (0x0003513b) cam6_mode_pane_g4_ParamLimits

0x77f2,	// (0x0003513b) cam6_mode_pane_g4

0x0003,

0xfb54,	// (0x0003d49d) cam6_mode_pane_g_ParamLimits

0xfb54,	// (0x0003d49d) cam6_mode_pane_g

0xd6a7,	// (0x0003aff0) bg_tb_trans_pane_cp08_ParamLimits

0xd6a7,	// (0x0003aff0) bg_tb_trans_pane_cp08

0xd9f0,	// (0x0003b339) cam6_battery_pane_ParamLimits

0xd9f0,	// (0x0003b339) cam6_battery_pane

0xda06,	// (0x0003b34f) cam6_indi_pane_g1_ParamLimits

0xda06,	// (0x0003b34f) cam6_indi_pane_g1

0xda18,	// (0x0003b361) cam6_indi_pane_g2_ParamLimits

0xda18,	// (0x0003b361) cam6_indi_pane_g2

0xda2a,	// (0x0003b373) cam6_indi_pane_g3_ParamLimits

0xda2a,	// (0x0003b373) cam6_indi_pane_g3

0x0002,

0xfb5d,	// (0x0003d4a6) cam6_indi_pane_g_ParamLimits

0xfb5d,	// (0x0003d4a6) cam6_indi_pane_g

0xda3c,	// (0x0003b385) cam6_indi_pane_t1_ParamLimits

0xda3c,	// (0x0003b385) cam6_indi_pane_t1

0x7802,	// (0x0003514b) cam6_autofocus_pane_g1

0x780a,	// (0x00035153) cam6_autofocus_pane_g2

0x7812,	// (0x0003515b) cam6_autofocus_pane_g3

0x781a,	// (0x00035163) cam6_autofocus_pane_g4

0x0003,

0xfb64,	// (0x0003d4ad) cam6_autofocus_pane_g

0xda62,	// (0x0003b3ab) cam6_timer_pane_g1

0xda6a,	// (0x0003b3b3) cam6_timer_pane_t1

0xda78,	// (0x0003b3c1) cam6_zoom_cont_pane

0xda80,	// (0x0003b3c9) cam6_zoom_pane_g1

0xda88,	// (0x0003b3d1) cam6_zoom_pane_g2

0x7822,	// (0x0003516b) cam6_zoom_pane_g3

0x0002,

0xfb6d,	// (0x0003d4b6) cam6_zoom_pane_g

0xc7b2,	// (0x0003a0fb) cam6_battery_pane_g1

0xc7b2,	// (0x0003a0fb) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0003d038) cam6_battery_pane_g

0xda90,	// (0x0003b3d9) cam6_zoom_cont_pane_g1

0xda99,	// (0x0003b3e2) cam6_zoom_cont_pane_g2

0xdaa2,	// (0x0003b3eb) cam6_zoom_cont_pane_g3

0x0002,

0xfb74,	// (0x0003d4bd) cam6_zoom_cont_pane_g

0x783f,	// (0x00035188) cam6_mode_pane_cp_ParamLimits

0x783f,	// (0x00035188) cam6_mode_pane_cp

0x7851,	// (0x0003519a) cam6_zoom_pane_cp_ParamLimits

0x7851,	// (0x0003519a) cam6_zoom_pane_cp

0x785d,	// (0x000351a6) vid6_image_uncrop_cif_pane_ParamLimits

0x785d,	// (0x000351a6) vid6_image_uncrop_cif_pane

0x786d,	// (0x000351b6) vid6_image_uncrop_nhd_pane_ParamLimits

0x786d,	// (0x000351b6) vid6_image_uncrop_nhd_pane

0x787c,	// (0x000351c5) vid6_image_uncrop_vga_pane_ParamLimits

0x787c,	// (0x000351c5) vid6_image_uncrop_vga_pane

0x788b,	// (0x000351d4) vid6_image_uncrop_wvga_pane_ParamLimits

0x788b,	// (0x000351d4) vid6_image_uncrop_wvga_pane

0x789a,	// (0x000351e3) vid6_indi_pane_ParamLimits

0x789a,	// (0x000351e3) vid6_indi_pane

0xd6a7,	// (0x0003aff0) bg_tb_trans_pane_cp09_ParamLimits

0xd6a7,	// (0x0003aff0) bg_tb_trans_pane_cp09

0xdaba,	// (0x0003b403) cam6_battery_pane_cp_ParamLimits

0xdaba,	// (0x0003b403) cam6_battery_pane_cp

0xdac6,	// (0x0003b40f) vid6_indi_pane_g1_ParamLimits

0xdac6,	// (0x0003b40f) vid6_indi_pane_g1

0xdad8,	// (0x0003b421) vid6_indi_pane_g2_ParamLimits

0xdad8,	// (0x0003b421) vid6_indi_pane_g2

0xdaea,	// (0x0003b433) vid6_indi_pane_g3_ParamLimits

0xdaea,	// (0x0003b433) vid6_indi_pane_g3

0xdaff,	// (0x0003b448) vid6_indi_pane_g4_ParamLimits

0xdaff,	// (0x0003b448) vid6_indi_pane_g4

0xdb14,	// (0x0003b45d) vid6_indi_pane_g5_ParamLimits

0xdb14,	// (0x0003b45d) vid6_indi_pane_g5

0x0004,

0xfb7b,	// (0x0003d4c4) vid6_indi_pane_g_ParamLimits

0xfb7b,	// (0x0003d4c4) vid6_indi_pane_g

0xdb2e,	// (0x0003b477) vid6_indi_pane_t1_ParamLimits

0xdb2e,	// (0x0003b477) vid6_indi_pane_t1

0xdb44,	// (0x0003b48d) vid6_indi_pane_t2_ParamLimits

0xdb44,	// (0x0003b48d) vid6_indi_pane_t2

0xdb6c,	// (0x0003b4b5) vid6_indi_pane_t3_ParamLimits

0xdb6c,	// (0x0003b4b5) vid6_indi_pane_t3

0xdb94,	// (0x0003b4dd) vid6_indi_pane_t4_ParamLimits

0xdb94,	// (0x0003b4dd) vid6_indi_pane_t4

0x0003,

0xfb86,	// (0x0003d4cf) vid6_indi_pane_t_ParamLimits

0xfb86,	// (0x0003d4cf) vid6_indi_pane_t

0xdbb8,	// (0x0003b501) wait_bar_pane_cp08

0x78b2,	// (0x000351fb) main_cset_text2_pane_t1_ParamLimits

0x78b2,	// (0x000351fb) main_cset_text2_pane_t1

0x782a,	// (0x00035173) listscroll_gen_pane_cp06_t1_ParamLimits

0x782a,	// (0x00035173) listscroll_gen_pane_cp06_t1

0x1bcc,	// (0x0002f515) main_cam6_set_pane

0x655c,	// (0x00033ea5) bg_tb_trans_pane_cp06_ParamLimits

0x6572,	// (0x00033ebb) cam4_indicators_pane_g1_ParamLimits

0x6583,	// (0x00033ecc) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0003d253) cam4_indicators_pane_g_ParamLimits

0x659b,	// (0x00033ee4) cam4_indicators_pane_t1_ParamLimits

0x1bb2,	// (0x0002f4fb) bg_tb_trans_pane_cp07_ParamLimits

0x65c5,	// (0x00033f0e) vid4_indicators_pane_g1_ParamLimits

0x65d9,	// (0x00033f22) vid4_indicators_pane_g2_ParamLimits

0x65ed,	// (0x00033f36) vid4_indicators_pane_g3_ParamLimits

0x65fe,	// (0x00033f47) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0003d265) vid4_indicators_pane_g_ParamLimits

0x661a,	// (0x00033f63) vid4_indicators_pane_t1_ParamLimits

0xa4bd,	// (0x00037e06) vid4_progress_pane_g1_ParamLimits

0xa4cd,	// (0x00037e16) vid4_progress_pane_g2_ParamLimits

0x1a49,	// (0x0002f392) vid4_progress_pane_g3_ParamLimits

0xa4dd,	// (0x00037e26) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0003d416) vid4_progress_pane_g_ParamLimits

0x1a5b,	// (0x0002f3a4) vid4_progress_pane_t1_ParamLimits

0xa4f5,	// (0x00037e3e) vid4_progress_pane_t2_ParamLimits

0xa50a,	// (0x00037e53) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0003d421) vid4_progress_pane_t_ParamLimits

0x1a71,	// (0x0002f3ba) wait_bar_pane_cp07_ParamLimits

0x78d0,	// (0x00035219) main_cam6_set_pane_g2_ParamLimits

0x78d0,	// (0x00035219) main_cam6_set_pane_g2

0x78f4,	// (0x0003523d) main_cset6_listscroll_pane_ParamLimits

0x78f4,	// (0x0003523d) main_cset6_listscroll_pane

0x7910,	// (0x00035259) main_cset6_slider_pane_ParamLimits

0x7910,	// (0x00035259) main_cset6_slider_pane

0x7926,	// (0x0003526f) main_cset6_text2_pane_ParamLimits

0x7926,	// (0x0003526f) main_cset6_text2_pane

0xdbc7,	// (0x0003b510) main_cset6_text_pane

0xdbcf,	// (0x0003b518) main_cset_list_pane_copy1_ParamLimits

0xdbcf,	// (0x0003b518) main_cset_list_pane_copy1

0xdbdf,	// (0x0003b528) scroll_pane_cp028_copy1

0x7934,	// (0x0003527d) cset_list_set_pane_copy1

0x7946,	// (0x0003528f) aid_position_infowindow_above_copy1

0x794e,	// (0x00035297) aid_position_infowindow_below_copy1

0xdbe8,	// (0x0003b531) cset_list_set_pane_g1_copy1

0xdbf0,	// (0x0003b539) cset_list_set_pane_g3_copy1_ParamLimits

0xdbf0,	// (0x0003b539) cset_list_set_pane_g3_copy1

0xdbff,	// (0x0003b548) cset_list_set_pane_t1_copy1_ParamLimits

0xdbff,	// (0x0003b548) cset_list_set_pane_t1_copy1

0xa4a7,	// (0x00037df0) list_highlight_pane_cp021_copy1_ParamLimits

0xa4a7,	// (0x00037df0) list_highlight_pane_cp021_copy1

0xdc14,	// (0x0003b55d) cset6_slider_pane_ParamLimits

0xdc14,	// (0x0003b55d) cset6_slider_pane

0xdc40,	// (0x0003b589) main_cset6_slider_pane_g1_ParamLimits

0xdc40,	// (0x0003b589) main_cset6_slider_pane_g1

0x7956,	// (0x0003529f) main_cset6_slider_pane_g2_ParamLimits

0x7956,	// (0x0003529f) main_cset6_slider_pane_g2

0xdc68,	// (0x0003b5b1) main_cset6_slider_pane_g3_ParamLimits

0xdc68,	// (0x0003b5b1) main_cset6_slider_pane_g3

0x797e,	// (0x000352c7) main_cset6_slider_pane_g4_ParamLimits

0x797e,	// (0x000352c7) main_cset6_slider_pane_g4

0xdc74,	// (0x0003b5bd) main_cset6_slider_pane_g5_ParamLimits

0xdc74,	// (0x0003b5bd) main_cset6_slider_pane_g5

0xd3c7,	// (0x0003ad10) main_cset6_slider_pane_g7_ParamLimits

0xd3c7,	// (0x0003ad10) main_cset6_slider_pane_g7

0xd3d3,	// (0x0003ad1c) main_cset6_slider_pane_g8_ParamLimits

0xd3d3,	// (0x0003ad1c) main_cset6_slider_pane_g8

0x6a45,	// (0x0003438e) main_cset6_slider_pane_g9_ParamLimits

0x6a45,	// (0x0003438e) main_cset6_slider_pane_g9

0x6a51,	// (0x0003439a) main_cset6_slider_pane_g10_ParamLimits

0x6a51,	// (0x0003439a) main_cset6_slider_pane_g10

0x6a5d,	// (0x000343a6) main_cset6_slider_pane_g11_ParamLimits

0x6a5d,	// (0x000343a6) main_cset6_slider_pane_g11

0x6a69,	// (0x000343b2) main_cset6_slider_pane_g12_ParamLimits

0x6a69,	// (0x000343b2) main_cset6_slider_pane_g12

0x6a75,	// (0x000343be) main_cset6_slider_pane_g13_ParamLimits

0x6a75,	// (0x000343be) main_cset6_slider_pane_g13

0x6a81,	// (0x000343ca) main_cset6_slider_pane_g14_ParamLimits

0x6a81,	// (0x000343ca) main_cset6_slider_pane_g14

0x798a,	// (0x000352d3) main_cset6_slider_pane_g15_ParamLimits

0x798a,	// (0x000352d3) main_cset6_slider_pane_g15

0xd3df,	// (0x0003ad28) main_cset6_slider_pane_g16_ParamLimits

0xd3df,	// (0x0003ad28) main_cset6_slider_pane_g16

0xd3eb,	// (0x0003ad34) main_cset6_slider_pane_g17_ParamLimits

0xd3eb,	// (0x0003ad34) main_cset6_slider_pane_g17

0x0011,

0xfb8f,	// (0x0003d4d8) main_cset6_slider_pane_g_ParamLimits

0xfb8f,	// (0x0003d4d8) main_cset6_slider_pane_g

0xdc80,	// (0x0003b5c9) main_cset6_slider_pane_t1_ParamLimits

0xdc80,	// (0x0003b5c9) main_cset6_slider_pane_t1

0x79ba,	// (0x00035303) main_cset6_slider_pane_t2_ParamLimits

0x79ba,	// (0x00035303) main_cset6_slider_pane_t2

0x79e5,	// (0x0003532e) main_cset6_slider_pane_t3_ParamLimits

0x79e5,	// (0x0003532e) main_cset6_slider_pane_t3

0x7a10,	// (0x00035359) main_cset6_slider_pane_t4_ParamLimits

0x7a10,	// (0x00035359) main_cset6_slider_pane_t4

0x7a3b,	// (0x00035384) main_cset6_slider_pane_t5_ParamLimits

0x7a3b,	// (0x00035384) main_cset6_slider_pane_t5

0xdcc1,	// (0x0003b60a) main_cset6_slider_pane_t7_ParamLimits

0xdcc1,	// (0x0003b60a) main_cset6_slider_pane_t7

0x7a66,	// (0x000353af) main_cset6_slider_pane_t8_ParamLimits

0x7a66,	// (0x000353af) main_cset6_slider_pane_t8

0x7a8a,	// (0x000353d3) main_cset6_slider_pane_t9_ParamLimits

0x7a8a,	// (0x000353d3) main_cset6_slider_pane_t9

0x7aae,	// (0x000353f7) main_cset6_slider_pane_t10_ParamLimits

0x7aae,	// (0x000353f7) main_cset6_slider_pane_t10

0x7ad2,	// (0x0003541b) main_cset6_slider_pane_t11_ParamLimits

0x7ad2,	// (0x0003541b) main_cset6_slider_pane_t11

0xdcf7,	// (0x0003b640) main_cset6_slider_pane_t14_ParamLimits

0xdcf7,	// (0x0003b640) main_cset6_slider_pane_t14

0xdd30,	// (0x0003b679) main_cset6_slider_pane_t15_ParamLimits

0xdd30,	// (0x0003b679) main_cset6_slider_pane_t15

0x000b,

0xfbb4,	// (0x0003d4fd) main_cset6_slider_pane_t_ParamLimits

0xfbb4,	// (0x0003d4fd) main_cset6_slider_pane_t

0xd002,	// (0x0003a94b) cset_slider_pane_g1_copy1

0xd6b5,	// (0x0003affe) cset_slider_pane_g2_copy1

0xd6be,	// (0x0003b007) cset_slider_pane_g3_copy1

0x9b4b,	// (0x00037494) bg_popup_sub_pane_cp011_copy1

0xdd69,	// (0x0003b6b2) main_cset_text_pane_g1_copy1

0xd531,	// (0x0003ae7a) main_cset_text_pane_t1_copy1

0xd53f,	// (0x0003ae88) main_cset_text_pane_t2_copy1

0xd54d,	// (0x0003ae96) main_cset_text_pane_t3_copy1

0xd55b,	// (0x0003aea4) main_cset_text_pane_t4_copy1

0xd569,	// (0x0003aeb2) main_cset_text_pane_t5_copy1

0xdd71,	// (0x0003b6ba) main_cset_text_pane_t6_copy1

0xdd7f,	// (0x0003b6c8) main_cset_text_pane_t7_copy1

0x78b2,	// (0x000351fb) main_cset_text2_pane_t1_copy1

0x1bb2,	// (0x0002f4fb) main_ncimui_pane

0x0abf,	// (0x0002e408) popup_query_ncimui_window_ParamLimits

0x0abf,	// (0x0002e408) popup_query_ncimui_window

0xcaa1,	// (0x0003a3ea) field_cale_ev2_pane_g4_ParamLimits

0xcaa1,	// (0x0003a3ea) field_cale_ev2_pane_g4

0x60f8,	// (0x00033a41) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60f8,	// (0x00033a41) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0003d1f1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0003d1f1) cell_video_dialer_keypad_pane_g

0x6110,	// (0x00033a59) cell_video_dialer_keypad_pane_t1

0x9b4b,	// (0x00037494) bg_popup_window_pane_cp012

0xac04,	// (0x0003854d) heading_pane_cp06

0xddab,	// (0x0003b6f4) ncim_query_content_pane

0x9b4b,	// (0x00037494) bg_popup_heading_pane_cp01

0xddb3,	// (0x0003b6fc) ncim_heading_pane_t1

0xddc1,	// (0x0003b70a) ncim_indicator_popup_pane

0xddd3,	// (0x0003b71c) ncim_query_button_pane

0xdde7,	// (0x0003b730) ncim_query_content_pane_t1

0xddf9,	// (0x0003b742) ncim_query_content_pane_t2

0x0005,

0xfbf8,	// (0x0003d541) ncim_query_content_pane_t

0xde33,	// (0x0003b77c) ncim_query_list_pane

0xde45,	// (0x0003b78e) ncim_query_popup_pane

0xddc1,	// (0x0003b70a) ncim_indicator_popup_pane_ParamLimits

0x7cee,	// (0x00035637) ncim_query_content_pane_g1_ParamLimits

0x7cee,	// (0x00035637) ncim_query_content_pane_g1

0xdde7,	// (0x0003b730) ncim_query_content_pane_t1_ParamLimits

0xddf9,	// (0x0003b742) ncim_query_content_pane_t2_ParamLimits

0x7cfa,	// (0x00035643) ncim_query_content_pane_t3_ParamLimits

0x7cfa,	// (0x00035643) ncim_query_content_pane_t3

0x7d22,	// (0x0003566b) ncim_query_content_pane_t4_ParamLimits

0x7d22,	// (0x0003566b) ncim_query_content_pane_t4

0x7d4a,	// (0x00035693) ncim_query_content_pane_t5_ParamLimits

0x7d4a,	// (0x00035693) ncim_query_content_pane_t5

0xde0b,	// (0x0003b754) ncim_query_content_pane_t6_ParamLimits

0xde0b,	// (0x0003b754) ncim_query_content_pane_t6

0xfbf8,	// (0x0003d541) ncim_query_content_pane_t_ParamLimits

0xde33,	// (0x0003b77c) ncim_query_list_pane_ParamLimits

0xde45,	// (0x0003b78e) ncim_query_popup_pane_ParamLimits

0xde59,	// (0x0003b7a2) wait_bar_pane_cp04

0x9b4b,	// (0x00037494) input_focus_pane_cp011

0xde61,	// (0x0003b7aa) ncim_query_popup_pane_t1

0xde6f,	// (0x0003b7b8) ncim_list_query_list_pane_ParamLimits

0xde6f,	// (0x0003b7b8) ncim_list_query_list_pane

0x9b4b,	// (0x00037494) bg_button_pane_cp027

0xde7c,	// (0x0003b7c5) ncim_query_button_pane_g1

0x9b4b,	// (0x00037494) list_highlight_pane_cp012

0xde86,	// (0x0003b7cf) ncim_list_query_list_pane_g1

0xde8e,	// (0x0003b7d7) ncim_list_query_list_pane_t1

0x658f,	// (0x00033ed8) cam4_indicators_pane_g3_ParamLimits

0x658f,	// (0x00033ed8) cam4_indicators_pane_g3

0x660a,	// (0x00033f53) vid4_indicators_pane_g5_ParamLimits

0x660a,	// (0x00033f53) vid4_indicators_pane_g5

0xa4e9,	// (0x00037e32) vid4_progress_pane_g5_ParamLimits

0xa4e9,	// (0x00037e32) vid4_progress_pane_g5

0x7bd9,	// (0x00035522) main_ncimui_pane_g1

0x7c42,	// (0x0003558b) ncimui_group_query_pane_ParamLimits

0x7c42,	// (0x0003558b) ncimui_group_query_pane

0x7c8a,	// (0x000355d3) ncimui_list_pane_ParamLimits

0x7c8a,	// (0x000355d3) ncimui_list_pane

0x7cb1,	// (0x000355fa) ncimui_text_pane_ParamLimits

0x7cb1,	// (0x000355fa) ncimui_text_pane

0x7d72,	// (0x000356bb) ncimui_text_pane_t1_ParamLimits

0x7d72,	// (0x000356bb) ncimui_text_pane_t1

0xde9c,	// (0x0003b7e5) ncimui_list_single_graphic_pane_ParamLimits

0xde9c,	// (0x0003b7e5) ncimui_list_single_graphic_pane

0x7d90,	// (0x000356d9) ncimui_query_pane_ParamLimits

0x7d90,	// (0x000356d9) ncimui_query_pane

0x9b4b,	// (0x00037494) list_highlight_pane_cp013

0xdeac,	// (0x0003b7f5) ncim_list_query_list_pane_t1_copy1

0xdeba,	// (0x0003b803) ncim_list_single_graphic_pane_g1

0x7da3,	// (0x000356ec) ncim_query_button_pane_cp01

0x7daf,	// (0x000356f8) ncim_query_entry_pane_ParamLimits

0x7daf,	// (0x000356f8) ncim_query_entry_pane

0x7dc2,	// (0x0003570b) ncimui_query_pane_g1

0x7dce,	// (0x00035717) ncimui_query_pane_t1_ParamLimits

0x7dce,	// (0x00035717) ncimui_query_pane_t1

0xa4a7,	// (0x00037df0) input_focus_pane_cp012

0xdec2,	// (0x0003b80b) ncim_query_entry_pane_t1

0xa294,	// (0x00037bdd) main_im_pane_ParamLimits

0x1bb2,	// (0x0002f4fb) main_mobtv_pane_ParamLimits

0x1bb2,	// (0x0002f4fb) main_mobtv_pane

0x79a2,	// (0x000352eb) main_cset6_slider_pane_g18_ParamLimits

0x79a2,	// (0x000352eb) main_cset6_slider_pane_g18

0x79ae,	// (0x000352f7) main_cset6_slider_pane_g19_ParamLimits

0x79ae,	// (0x000352f7) main_cset6_slider_pane_g19

0x7de7,	// (0x00035730) bg_main_mobtv_pane_ParamLimits

0x7de7,	// (0x00035730) bg_main_mobtv_pane

0x7df5,	// (0x0003573e) main_mobtv_info_pane

0x7dfe,	// (0x00035747) main_mobtv_loading_pane_ParamLimits

0x7dfe,	// (0x00035747) main_mobtv_loading_pane

0xded4,	// (0x0003b81d) main_mobtv_pg_channel_list_pane

0xdede,	// (0x0003b827) main_mobtv_pg_hdr_pane

0x7e0b,	// (0x00035754) main_mobtv_programe_curr_pane_ParamLimits

0x7e0b,	// (0x00035754) main_mobtv_programe_curr_pane

0x7e18,	// (0x00035761) main_mobtv_programe_next_pane_ParamLimits

0x7e18,	// (0x00035761) main_mobtv_programe_next_pane

0xdee7,	// (0x0003b830) popup_mobtv_noti_window

0xc7b2,	// (0x0003a0fb) main_tv_pg_hdr_pane_g1

0xdeef,	// (0x0003b838) main_tv_pg_hdr_pane_g2

0xdef7,	// (0x0003b840) main_tv_pg_hdr_pane_g3

0xdeff,	// (0x0003b848) main_tv_pg_hdr_pane_g4

0xdf07,	// (0x0003b850) main_tv_pg_hdr_pane_g5

0xdf11,	// (0x0003b85a) main_tv_pg_hdr_pane_g6

0xdf1b,	// (0x0003b864) main_tv_pg_hdr_pane_g7

0xdf25,	// (0x0003b86e) main_tv_pg_hdr_pane_g8

0xdf2f,	// (0x0003b878) main_tv_pg_hdr_pane_g9

0xdf39,	// (0x0003b882) main_tv_pg_hdr_pane_g10

0xdf43,	// (0x0003b88c) main_tv_pg_hdr_pane_g11

0x000a,

0x0151,	// (0x0002da9a) main_tv_pg_hdr_pane_g

0xdf4d,	// (0x0003b896) main_tv_pg_hdr_pane_t1

0xdf5b,	// (0x0003b8a4) main_tv_pg_hdr_pane_t2

0xdf69,	// (0x0003b8b2) main_tv_pg_hdr_pane_t3

0xdf79,	// (0x0003b8c2) main_tv_pg_hdr_pane_t4

0xdf89,	// (0x0003b8d2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc05,	// (0x0003d54e) main_tv_pg_hdr_pane_t

0xdf99,	// (0x0003b8e2) single_mobtv_pg_channel_pane_ParamLimits

0xdf99,	// (0x0003b8e2) single_mobtv_pg_channel_pane

0xdfab,	// (0x0003b8f4) single_mobtv_pg_channel_table_pane

0xa87a,	// (0x000381c3) single_mobtv_pg_channel_thumb_pane

0xdfb4,	// (0x0003b8fd) single_tv_pg_channel_pane_g1

0xdfbd,	// (0x0003b906) single_tv_pg_channel_pane_g2

0x0001,

0xfc10,	// (0x0003d559) single_tv_pg_channel_pane_g

0xca00,	// (0x0003a349) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca00,	// (0x0003a349) bg_single_mobtv_pg_channel_thumb_pane

0xdfc6,	// (0x0003b90f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfc6,	// (0x0003b90f) single_mobtv_pg_channel_thumb_pane_g1

0xdfd4,	// (0x0003b91d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfd4,	// (0x0003b91d) single_mobtv_pg_channel_thumb_pane_g2

0xdfe0,	// (0x0003b929) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfe0,	// (0x0003b929) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc15,	// (0x0003d55e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc15,	// (0x0003d55e) single_mobtv_pg_channel_thumb_pane_g

0xdfec,	// (0x0003b935) single_mobtv_pg_channel_thumb_pane_t1

0xdffa,	// (0x0003b943) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1c,	// (0x0003d565) single_mobtv_pg_channel_thumb_pane_t

0xc7b2,	// (0x0003a0fb) bg_single_mobtv_pg_channel_table_pane_g1

0xc7b2,	// (0x0003a0fb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0003d038) bg_single_mobtv_pg_channel_table_pane_g

0xe008,	// (0x0003b951) single_mobtv_pg_channel_table_pane_t1

0xe016,	// (0x0003b95f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc21,	// (0x0003d56a) single_mobtv_pg_channel_table_pane_t

0x7e2d,	// (0x00035776) main_mobtv_info_pane_g1_ParamLimits

0x7e2d,	// (0x00035776) main_mobtv_info_pane_g1

0x7e4b,	// (0x00035794) main_mobtv_info_pane_t1_ParamLimits

0x7e4b,	// (0x00035794) main_mobtv_info_pane_t1

0x7ec3,	// (0x0003580c) main_mobtv_info_pane_t2_ParamLimits

0x7ec3,	// (0x0003580c) main_mobtv_info_pane_t2

0x0002,

0xfc2b,	// (0x0003d574) main_mobtv_info_pane_t_ParamLimits

0xfc2b,	// (0x0003d574) main_mobtv_info_pane_t

0x7f52,	// (0x0003589b) wait_bar_pane_cp05

0x7f64,	// (0x000358ad) main_mobtv_loading_pane_g1_ParamLimits

0x7f64,	// (0x000358ad) main_mobtv_loading_pane_g1

0x7f77,	// (0x000358c0) main_mobtv_loading_pane_g2_ParamLimits

0x7f77,	// (0x000358c0) main_mobtv_loading_pane_g2

0x7f83,	// (0x000358cc) main_mobtv_loading_pane_g3_ParamLimits

0x7f83,	// (0x000358cc) main_mobtv_loading_pane_g3

0x0002,

0xfc32,	// (0x0003d57b) main_mobtv_loading_pane_g_ParamLimits

0xfc32,	// (0x0003d57b) main_mobtv_loading_pane_g

0xe024,	// (0x0003b96d) main_mobtv_loading_pane_t1_ParamLimits

0xe024,	// (0x0003b96d) main_mobtv_loading_pane_t1

0xe03c,	// (0x0003b985) main_mobtv_loading_pane_t2_ParamLimits

0xe03c,	// (0x0003b985) main_mobtv_loading_pane_t2

0x0001,

0xfc39,	// (0x0003d582) main_mobtv_loading_pane_t_ParamLimits

0xfc39,	// (0x0003d582) main_mobtv_loading_pane_t

0x7f96,	// (0x000358df) wait_bar_pane_cp06_ParamLimits

0x7f96,	// (0x000358df) wait_bar_pane_cp06

0xe060,	// (0x0003b9a9) main_mobtv_programe_curr_pane_t1

0xe06e,	// (0x0003b9b7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3e,	// (0x0003d587) main_mobtv_programe_curr_pane_t

0xe07c,	// (0x0003b9c5) main_mobtv_programe_next_pane_t1

0xe08a,	// (0x0003b9d3) main_mobtv_programe_next_pane_t2

0xe098,	// (0x0003b9e1) main_mobtv_programe_next_pane_t3

0x0002,

0xfc43,	// (0x0003d58c) main_mobtv_programe_next_pane_t

0x9b4b,	// (0x00037494) bg_popup_mobtv_noti_window_pane

0xe0a6,	// (0x0003b9ef) popup_mobtv_noti_window_g1

0xe0ae,	// (0x0003b9f7) popup_mobtv_noti_window_t1

0xe0ce,	// (0x0003ba17) popup_mobtv_noti_window_t2

0x0001,

0xfc4a,	// (0x0003d593) popup_mobtv_noti_window_t

0xc7b2,	// (0x0003a0fb) bg_popup_mobtv_noti_window_pane_g1

0x1bcc,	// (0x0002f515) sc_clock_pane

0x1bcc,	// (0x0002f515) main_fs_bigclock_pane

0x7637,	// (0x00034f80) blid2_tripm_pane_t4_ParamLimits

0x7637,	// (0x00034f80) blid2_tripm_pane_t4

0x7fa5,	// (0x000358ee) sc_clock_pane_g1_ParamLimits

0x7fa5,	// (0x000358ee) sc_clock_pane_g1

0x7fb7,	// (0x00035900) sc_clock_pane_t1_ParamLimits

0x7fb7,	// (0x00035900) sc_clock_pane_t1

0x7fd9,	// (0x00035922) sc_clock_pane_t2_ParamLimits

0x7fd9,	// (0x00035922) sc_clock_pane_t2

0x7ff1,	// (0x0003593a) sc_clock_pane_t3_ParamLimits

0x7ff1,	// (0x0003593a) sc_clock_pane_t3

0x0004,

0xfc4f,	// (0x0003d598) sc_clock_pane_t_ParamLimits

0xfc4f,	// (0x0003d598) sc_clock_pane_t

0x9021,	// (0x0003696a) main_fs_bigclock_indicator_pane_ParamLimits

0x9021,	// (0x0003696a) main_fs_bigclock_indicator_pane

0x8097,	// (0x000359e0) main_fs_bigclock_pane_g1_ParamLimits

0x8097,	// (0x000359e0) main_fs_bigclock_pane_g1

0x902d,	// (0x00036976) main_fs_bigclock_pane_t1_ParamLimits

0x902d,	// (0x00036976) main_fs_bigclock_pane_t1

0x903f,	// (0x00036988) main_fs_bigclock_pane_t2_ParamLimits

0x903f,	// (0x00036988) main_fs_bigclock_pane_t2

0x9053,	// (0x0003699c) main_fs_bigclock_pane_t3_ParamLimits

0x9053,	// (0x0003699c) main_fs_bigclock_pane_t3

0x0002,

0xfe41,	// (0x0003d78a) main_fs_bigclock_pane_t_ParamLimits

0xfe41,	// (0x0003d78a) main_fs_bigclock_pane_t

0xec9a,	// (0x0003c5e3) main_fs_bigclock_indicator_pane_g1

0xdddb,	// (0x0003b724) ncim_query_content_pane_g2_ParamLimits

0xdddb,	// (0x0003b724) ncim_query_content_pane_g2

0x0001,

0xfbf3,	// (0x0003d53c) ncim_query_content_pane_g_ParamLimits

0xfbf3,	// (0x0003d53c) ncim_query_content_pane_g

0x800a,	// (0x00035953) sc_clock_pane_t4_ParamLimits

0x800a,	// (0x00035953) sc_clock_pane_t4

0x1bb2,	// (0x0002f4fb) main_radioblah_pane

0xd1ce,	// (0x0003ab17) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1ce,	// (0x0003ab17) cell_call4_button_pane_t1_copy1

0x7bf1,	// (0x0003553a) main_ncimui_pane_t1_ParamLimits

0x7bf1,	// (0x0003553a) main_ncimui_pane_t1

0x7c0b,	// (0x00035554) main_ncimui_pane_t2_ParamLimits

0x7c0b,	// (0x00035554) main_ncimui_pane_t2

0x0002,

0xfbec,	// (0x0003d535) main_ncimui_pane_t_ParamLimits

0xfbec,	// (0x0003d535) main_ncimui_pane_t

0xe214,	// (0x0003bb5d) main_radioblah_anim_pane_ParamLimits

0xe214,	// (0x0003bb5d) main_radioblah_anim_pane

0xe225,	// (0x0003bb6e) main_radioblah_info_pane_ParamLimits

0xe225,	// (0x0003bb6e) main_radioblah_info_pane

0xe239,	// (0x0003bb82) main_radioblah_pane_t1_ParamLimits

0xe239,	// (0x0003bb82) main_radioblah_pane_t1

0xe255,	// (0x0003bb9e) main_radioblah_pane_t2_ParamLimits

0xe255,	// (0x0003bb9e) main_radioblah_pane_t2

0x0003,

0xfc70,	// (0x0003d5b9) main_radioblah_pane_t_ParamLimits

0xfc70,	// (0x0003d5b9) main_radioblah_pane_t

0x80f6,	// (0x00035a3f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x80f6,	// (0x00035a3f) main_radioblah_rocker_ctrl_pane

0xe29d,	// (0x0003bbe6) main_radioblah_info_pane_t1_ParamLimits

0xe29d,	// (0x0003bbe6) main_radioblah_info_pane_t1

0x814e,	// (0x00035a97) main_radioblah_info_pane_t2_ParamLimits

0x814e,	// (0x00035a97) main_radioblah_info_pane_t2

0x0003,

0xfc79,	// (0x0003d5c2) main_radioblah_info_pane_t_ParamLimits

0xfc79,	// (0x0003d5c2) main_radioblah_info_pane_t

0xc7b2,	// (0x0003a0fb) main_radioblah_rocker_ctrl_pane_g1

0x81fe,	// (0x00035b47) main_radioblah_rocker_ctrl_pane_g2

0x8206,	// (0x00035b4f) main_radioblah_rocker_ctrl_pane_g3

0x820e,	// (0x00035b57) main_radioblah_rocker_ctrl_pane_g4

0x8216,	// (0x00035b5f) main_radioblah_rocker_ctrl_pane_g5

0x821e,	// (0x00035b67) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc82,	// (0x0003d5cb) main_radioblah_rocker_ctrl_pane_g

0x78b2,	// (0x000351fb) main_cset_text2_pane_t1_copy1_ParamLimits

0x6540,	// (0x00033e89) cam4_image_uncrop_qvga_pane

0x65b5,	// (0x00033efe) vid4_image_uncrop_qcif_pane

0xa520,	// (0x00037e69) cam6_image_uncrop_qvga_pane_ParamLimits

0xa520,	// (0x00037e69) cam6_image_uncrop_qvga_pane

0xdaaa,	// (0x0003b3f3) vid6_image_uncrop_qcif_pane_ParamLimits

0xdaaa,	// (0x0003b3f3) vid6_image_uncrop_qcif_pane

0x9b4b,	// (0x00037494) bg_popup_preview_window_pane_cp03

0xdd8d,	// (0x0003b6d6) list_cset_text2_pane

0xdd95,	// (0x0003b6de) main_cset6_text2_pane_g1

0xdd9d,	// (0x0003b6e6) main_cset6_text2_pane_t1

0xe2d7,	// (0x0003bc20) list_cset_text2_pane_t1_ParamLimits

0xe2d7,	// (0x0003bc20) list_cset_text2_pane_t1

0x1bb2,	// (0x0002f4fb) main_radioblah_pane_ParamLimits

0x7f3e,	// (0x00035887) main_mobtv_info_pane_t3_ParamLimits

0x7f3e,	// (0x00035887) main_mobtv_info_pane_t3

0x80e4,	// (0x00035a2d) main_radioblah_pane_g1

0x811e,	// (0x00035a67) main_radioblah_info_pane_g1

0x81a3,	// (0x00035aec) main_radioblah_info_pane_t3_ParamLimits

0x81a3,	// (0x00035aec) main_radioblah_info_pane_t3

0x35fa,	// (0x00030f43) highlight_cell_cale_month_pane_ParamLimits

0x35fa,	// (0x00030f43) highlight_cell_cale_month_pane

0x1bcc,	// (0x0002f515) main_phob_fisheye_pane

0xcb50,	// (0x0003a499) scroll_pane_cp0031_ParamLimits

0xcb50,	// (0x0003a499) scroll_pane_cp0031

0xdbb8,	// (0x0003b501) wait_bar_pane_cp08_ParamLimits

0x7934,	// (0x0003527d) cset_list_set_pane_copy1_ParamLimits

0xe2f2,	// (0x0003bc3b) highlight_cell_cale_month_pane_g1

0x8226,	// (0x00035b6f) highlight_cell_cale_month_pane_t1

0xd839,	// (0x0003b182) list_gen_pane_cp01

0xd3b2,	// (0x0003acfb) scroll_pane_01

0x8234,	// (0x00035b7d) list_single_double_fisheye_pane

0x823d,	// (0x00035b86) list_double_fisheye_pane_g1_ParamLimits

0x823d,	// (0x00035b86) list_double_fisheye_pane_g1

0x8249,	// (0x00035b92) list_double_fisheye_pane_g2_ParamLimits

0x8249,	// (0x00035b92) list_double_fisheye_pane_g2

0x825d,	// (0x00035ba6) list_double_fisheye_pane_g3_ParamLimits

0x825d,	// (0x00035ba6) list_double_fisheye_pane_g3

0x0004,

0xfc8f,	// (0x0003d5d8) list_double_fisheye_pane_g_ParamLimits

0xfc8f,	// (0x0003d5d8) list_double_fisheye_pane_g

0x8286,	// (0x00035bcf) list_double_fisheye_pane_t1_ParamLimits

0x8286,	// (0x00035bcf) list_double_fisheye_pane_t1

0x82a1,	// (0x00035bea) list_double_fisheye_pane_t2_ParamLimits

0x82a1,	// (0x00035bea) list_double_fisheye_pane_t2

0x0001,

0xfc9a,	// (0x0003d5e3) list_double_fisheye_pane_t_ParamLimits

0xfc9a,	// (0x0003d5e3) list_double_fisheye_pane_t

0x1bcc,	// (0x0002f515) main_call5_pane

0x8035,	// (0x0003597e) sc_swipe_pane_ParamLimits

0x8035,	// (0x0003597e) sc_swipe_pane

0x82d6,	// (0x00035c1f) call5_image_pane_ParamLimits

0x82d6,	// (0x00035c1f) call5_image_pane

0x82f3,	// (0x00035c3c) call5_swipe_1_pane_ParamLimits

0x82f3,	// (0x00035c3c) call5_swipe_1_pane

0x8306,	// (0x00035c4f) call5_swipe_2_pane_ParamLimits

0x8306,	// (0x00035c4f) call5_swipe_2_pane

0x8331,	// (0x00035c7a) popup_call5_audio_first_window_ParamLimits

0x8331,	// (0x00035c7a) popup_call5_audio_first_window

0xca00,	// (0x0003a349) call5_swipe_1_pane_g1_ParamLimits

0xca00,	// (0x0003a349) call5_swipe_1_pane_g1

0xe2fa,	// (0x0003bc43) call5_swipe_1_pane_g2_ParamLimits

0xe2fa,	// (0x0003bc43) call5_swipe_1_pane_g2

0x0001,

0xfc9f,	// (0x0003d5e8) call5_swipe_1_pane_g_ParamLimits

0xfc9f,	// (0x0003d5e8) call5_swipe_1_pane_g

0xe306,	// (0x0003bc4f) call5_swipe_1_pane_t1_ParamLimits

0xe306,	// (0x0003bc4f) call5_swipe_1_pane_t1

0xca00,	// (0x0003a349) call5_swipe_2_pane_g1_ParamLimits

0xca00,	// (0x0003a349) call5_swipe_2_pane_g1

0xe31b,	// (0x0003bc64) call5_swipe_2_pane_g2_ParamLimits

0xe31b,	// (0x0003bc64) call5_swipe_2_pane_g2

0x0001,

0xfca4,	// (0x0003d5ed) call5_swipe_2_pane_g_ParamLimits

0xfca4,	// (0x0003d5ed) call5_swipe_2_pane_g

0xe327,	// (0x0003bc70) call5_swipe_2_pane_t1_ParamLimits

0xe327,	// (0x0003bc70) call5_swipe_2_pane_t1

0xe33c,	// (0x0003bc85) sc_swipe_pane_g1_ParamLimits

0xe33c,	// (0x0003bc85) sc_swipe_pane_g1

0xe349,	// (0x0003bc92) sc_swipe_pane_g2_ParamLimits

0xe349,	// (0x0003bc92) sc_swipe_pane_g2

0x0001,

0xfca9,	// (0x0003d5f2) sc_swipe_pane_g_ParamLimits

0xfca9,	// (0x0003d5f2) sc_swipe_pane_g

0xe355,	// (0x0003bc9e) sc_swipe_pane_t1_ParamLimits

0xe355,	// (0x0003bc9e) sc_swipe_pane_t1

0x1bcc,	// (0x0002f515) main_cmail_launcher_pane

0x8342,	// (0x00035c8b) aid_size_cell_cmail_l_ParamLimits

0x8342,	// (0x00035c8b) aid_size_cell_cmail_l

0x835c,	// (0x00035ca5) grid_cmail_l_pane_ParamLimits

0x835c,	// (0x00035ca5) grid_cmail_l_pane

0x8376,	// (0x00035cbf) cell_cmail_l_pane_ParamLimits

0x8376,	// (0x00035cbf) cell_cmail_l_pane

0x839c,	// (0x00035ce5) cell_cmail_l_pane_g1_ParamLimits

0x839c,	// (0x00035ce5) cell_cmail_l_pane_g1

0x83ad,	// (0x00035cf6) cell_cmail_l_pane_t1_ParamLimits

0x83ad,	// (0x00035cf6) cell_cmail_l_pane_t1

0xe36a,	// (0x0003bcb3) cell_cmail_l_pane_t2_ParamLimits

0xe36a,	// (0x0003bcb3) cell_cmail_l_pane_t2

0x0001,

0xfcae,	// (0x0003d5f7) cell_cmail_l_pane_t_ParamLimits

0xfcae,	// (0x0003d5f7) cell_cmail_l_pane_t

0xa4a7,	// (0x00037df0) grid_highlight_pane_cp018_ParamLimits

0xa4a7,	// (0x00037df0) grid_highlight_pane_cp018

0x042c,	// (0x0002dd75) main2_pane_ParamLimits

0x042c,	// (0x0002dd75) main2_pane

0xa33f,	// (0x00037c88) popup_sp_fs_action_menu_bg_pane_g1

0xa347,	// (0x00037c90) popup_sp_fs_action_menu_bg_pane_g2

0xa34f,	// (0x00037c98) popup_sp_fs_action_menu_bg_pane_g3

0xa357,	// (0x00037ca0) popup_sp_fs_action_menu_bg_pane_g4

0xa35f,	// (0x00037ca8) popup_sp_fs_action_menu_bg_pane_g5

0xa367,	// (0x00037cb0) popup_sp_fs_action_menu_bg_pane_g6

0xa36f,	// (0x00037cb8) popup_sp_fs_action_menu_bg_pane_g7

0xa377,	// (0x00037cc0) popup_sp_fs_action_menu_bg_pane_g8

0xa37f,	// (0x00037cc8) popup_sp_fs_action_menu_bg_pane_g9

0xa387,	// (0x00037cd0) popup_sp_fs_action_menu_bg_pane_g10

0xa387,	// (0x00037cd0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003cad3) popup_sp_fs_action_menu_bg_pane_g

0x27a9,	// (0x000300f2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_t3_g3_g1

0x27b5,	// (0x000300fe) list_medium_line_x2_t3_g3_g2_ParamLimits

0x27b5,	// (0x000300fe) list_medium_line_x2_t3_g3_g2

0x27c1,	// (0x0003010a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x27c1,	// (0x0003010a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003cb81) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003cb81) list_medium_line_x2_t3_g3_g

0x27cd,	// (0x00030116) list_medium_line_x2_t3_g3_t1_ParamLimits

0x27cd,	// (0x00030116) list_medium_line_x2_t3_g3_t1

0x27e2,	// (0x0003012b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x27e2,	// (0x0003012b) list_medium_line_x2_t3_g3_t2

0x27f6,	// (0x0003013f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x27f6,	// (0x0003013f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003cb88) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003cb88) list_medium_line_x2_t3_g3_t

0x27a9,	// (0x000300f2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_t3_g2_g1

0x27c1,	// (0x0003010a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x27c1,	// (0x0003010a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003cb8f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003cb8f) list_medium_line_x2_t3_g2_g

0x280b,	// (0x00030154) list_medium_line_x2_t3_g2_t1_ParamLimits

0x280b,	// (0x00030154) list_medium_line_x2_t3_g2_t1

0x2821,	// (0x0003016a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2821,	// (0x0003016a) list_medium_line_x2_t3_g2_t2

0x2833,	// (0x0003017c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2833,	// (0x0003017c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003cb94) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003cb94) list_medium_line_x2_t3_g2_t

0x27a9,	// (0x000300f2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_t4_g4_g1

0x2851,	// (0x0003019a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2851,	// (0x0003019a) list_medium_line_x2_t4_g4_g2

0x27b5,	// (0x000300fe) list_medium_line_x2_t4_g4_g3_ParamLimits

0x27b5,	// (0x000300fe) list_medium_line_x2_t4_g4_g3

0x285d,	// (0x000301a6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x285d,	// (0x000301a6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003cb9b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003cb9b) list_medium_line_x2_t4_g4_g

0x2869,	// (0x000301b2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2869,	// (0x000301b2) list_medium_line_x2_t4_g4_t1

0x2883,	// (0x000301cc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2883,	// (0x000301cc) list_medium_line_x2_t4_g4_t2

0x2899,	// (0x000301e2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2899,	// (0x000301e2) list_medium_line_x2_t4_g4_t3

0x28ae,	// (0x000301f7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x28ae,	// (0x000301f7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003cba4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003cba4) list_medium_line_x2_t4_g4_t

0x27a9,	// (0x000300f2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_t2_g4_g1

0x2851,	// (0x0003019a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2851,	// (0x0003019a) list_medium_line_x2_t2_g4_g2

0x27b5,	// (0x000300fe) list_medium_line_x2_t2_g4_g3_ParamLimits

0x27b5,	// (0x000300fe) list_medium_line_x2_t2_g4_g3

0x27c1,	// (0x0003010a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x27c1,	// (0x0003010a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003cc0b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003cc0b) list_medium_line_x2_t2_g4_g

0x3620,	// (0x00030f69) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3620,	// (0x00030f69) list_medium_line_x2_t2_g4_t1

0x27f6,	// (0x0003013f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x27f6,	// (0x0003013f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003cc14) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003cc14) list_medium_line_x2_t2_g4_t

0x27a9,	// (0x000300f2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_t2_g3_g1

0x27b5,	// (0x000300fe) list_medium_line_x2_t2_g3_g2_ParamLimits

0x27b5,	// (0x000300fe) list_medium_line_x2_t2_g3_g2

0x27c1,	// (0x0003010a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x27c1,	// (0x0003010a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003cb81) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003cb81) list_medium_line_x2_t2_g3_g

0x3635,	// (0x00030f7e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3635,	// (0x00030f7e) list_medium_line_x2_t2_g3_t1

0x27f6,	// (0x0003013f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x27f6,	// (0x0003013f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003cc19) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003cc19) list_medium_line_x2_t2_g3_t

0x378b,	// (0x000310d4) main_sp_fs_list_pane_ParamLimits

0x378b,	// (0x000310d4) main_sp_fs_list_pane

0xccec,	// (0x0003a635) sp_fs_scroll_pane_ParamLimits

0xccec,	// (0x0003a635) sp_fs_scroll_pane

0x3797,	// (0x000310e0) list_medium_line_x2_t3_t1

0x37a7,	// (0x000310f0) list_medium_line_x2_t3_t2

0x37b5,	// (0x000310fe) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003cc64) list_medium_line_x2_t3_t

0x37c3,	// (0x0003110c) list_medium_line_x3_t4_t1

0x37d3,	// (0x0003111c) list_medium_line_x3_t4_t2

0x37e1,	// (0x0003112a) list_medium_line_x3_t4_t3

0x37b5,	// (0x000310fe) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003cc6b) list_medium_line_x3_t4_t

0x37ef,	// (0x00031138) list_medium_line_x4_t5_t1

0x37ff,	// (0x00031148) list_medium_line_x4_t5_t2

0x37e1,	// (0x0003112a) list_medium_line_x4_t5_t3

0x380d,	// (0x00031156) list_medium_line_x4_t5_t4

0x37b5,	// (0x000310fe) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003cc74) list_medium_line_x4_t5_t

0x27a9,	// (0x000300f2) list_medium_line_t4_g4_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_t4_g4_g1

0x285d,	// (0x000301a6) list_medium_line_t4_g4_g2_ParamLimits

0x285d,	// (0x000301a6) list_medium_line_t4_g4_g2

0x381b,	// (0x00031164) list_medium_line_t4_g4_g3_ParamLimits

0x381b,	// (0x00031164) list_medium_line_t4_g4_g3

0x27c1,	// (0x0003010a) list_medium_line_t4_g4_g4_ParamLimits

0x27c1,	// (0x0003010a) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003cc7f) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003cc7f) list_medium_line_t4_g4_g

0x3827,	// (0x00031170) list_medium_line_t4_g4_t1_ParamLimits

0x3827,	// (0x00031170) list_medium_line_t4_g4_t1

0x383c,	// (0x00031185) list_medium_line_t4_g4_t2_ParamLimits

0x383c,	// (0x00031185) list_medium_line_t4_g4_t2

0x3852,	// (0x0003119b) list_medium_line_t4_g4_t3_ParamLimits

0x3852,	// (0x0003119b) list_medium_line_t4_g4_t3

0x27f6,	// (0x0003013f) list_medium_line_t4_g4_t4_ParamLimits

0x27f6,	// (0x0003013f) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003cc88) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003cc88) list_medium_line_t4_g4_t

0x399a,	// (0x000312e3) chi_dic_find_pane_g1

0x088f,	// (0x0002e1d8) main_tport_pane

0xd4d4,	// (0x0003ae1d) list_medium_line_plain_t1

0x6dea,	// (0x00034733) list_medium_line_t2_g2_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_t2_g2_g1

0x6df6,	// (0x0003473f) list_medium_line_t2_g2_g2_ParamLimits

0x6df6,	// (0x0003473f) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0003d35c) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0003d35c) list_medium_line_t2_g2_g

0x6e02,	// (0x0003474b) list_medium_line_t2_g2_t1_ParamLimits

0x6e02,	// (0x0003474b) list_medium_line_t2_g2_t1

0x6e1c,	// (0x00034765) list_medium_line_t2_g2_t2_ParamLimits

0x6e1c,	// (0x00034765) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0003d361) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0003d361) list_medium_line_t2_g2_t

0xd842,	// (0x0003b18b) aid_sp_fs_list_icon_a_sm

0xd84a,	// (0x0003b193) aid_sp_fs_list_icon_d

0xd852,	// (0x0003b19b) aid_sp_fs_text_primary

0xd85b,	// (0x0003b1a4) aid_sp_fs_text_secondary

0x73e4,	// (0x00034d2d) list_medium_line

0x73e4,	// (0x00034d2d) list_medium_line_g2

0x73e4,	// (0x00034d2d) list_medium_line_g3

0x73e4,	// (0x00034d2d) list_medium_line_plain

0x73e4,	// (0x00034d2d) list_medium_line_plain_t2

0x73e4,	// (0x00034d2d) list_medium_line_plain_t3

0x73e4,	// (0x00034d2d) list_medium_line_right_icon

0x73e4,	// (0x00034d2d) list_medium_line_right_iconx2

0x73e4,	// (0x00034d2d) list_medium_line_t2

0x73e4,	// (0x00034d2d) list_medium_line_t2_g2

0x73e4,	// (0x00034d2d) list_medium_line_t2_g3

0x73e4,	// (0x00034d2d) list_medium_line_t2_right_icon

0x73e4,	// (0x00034d2d) list_medium_line_t2_right_iconx2

0x73e4,	// (0x00034d2d) list_medium_line_t3

0x73e4,	// (0x00034d2d) list_medium_line_t3_g2

0x73e4,	// (0x00034d2d) list_medium_line_t3_g3

0x73e4,	// (0x00034d2d) list_medium_line_t3_right_iconx2

0x73ed,	// (0x00034d36) list_medium_line_t4_g4

0x73f6,	// (0x00034d3f) list_medium_line_x2

0x73f6,	// (0x00034d3f) list_medium_line_x2_t2_g2

0x73f6,	// (0x00034d3f) list_medium_line_x2_t2_g3

0x73f6,	// (0x00034d3f) list_medium_line_x2_t2_g4

0x73f6,	// (0x00034d3f) list_medium_line_x2_t3

0x73f6,	// (0x00034d3f) list_medium_line_x2_t3_g2

0x73f6,	// (0x00034d3f) list_medium_line_x2_t3_g3

0x73f6,	// (0x00034d3f) list_medium_line_x2_t3_g4

0x73f6,	// (0x00034d3f) list_medium_line_x2_t4_g2

0x73f6,	// (0x00034d3f) list_medium_line_x2_t4_g4

0x73ff,	// (0x00034d48) list_medium_line_x3

0x73ff,	// (0x00034d48) list_medium_line_x3_t4

0x73ff,	// (0x00034d48) list_medium_line_x3_t4_g4

0x73ed,	// (0x00034d36) list_medium_line_x4_t4

0x73ed,	// (0x00034d36) list_medium_line_x4_t4_g7

0x73ed,	// (0x00034d36) list_medium_line_x4_t5

0x7408,	// (0x00034d51) list_single_fs_dyc_pane_ParamLimits

0x7408,	// (0x00034d51) list_single_fs_dyc_pane

0x27a9,	// (0x000300f2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x4_t4_g7_g1

0x7af6,	// (0x0003543f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7af6,	// (0x0003543f) list_medium_line_x4_t4_g7_g2

0x7b02,	// (0x0003544b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b02,	// (0x0003544b) list_medium_line_x4_t4_g7_g3

0x7b11,	// (0x0003545a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b11,	// (0x0003545a) list_medium_line_x4_t4_g7_g4

0x7b1d,	// (0x00035466) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b1d,	// (0x00035466) list_medium_line_x4_t4_g7_g5

0x7b2c,	// (0x00035475) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7b2c,	// (0x00035475) list_medium_line_x4_t4_g7_g6

0x7b3b,	// (0x00035484) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7b3b,	// (0x00035484) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcd,	// (0x0003d516) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcd,	// (0x0003d516) list_medium_line_x4_t4_g7_g

0x7b47,	// (0x00035490) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7b47,	// (0x00035490) list_medium_line_x4_t4_g7_t1

0x7b5c,	// (0x000354a5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7b5c,	// (0x000354a5) list_medium_line_x4_t4_g7_t2

0x7b71,	// (0x000354ba) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7b71,	// (0x000354ba) list_medium_line_x4_t4_g7_t3

0x7b86,	// (0x000354cf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7b86,	// (0x000354cf) list_medium_line_x4_t4_g7_t4

0x7b98,	// (0x000354e1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7b98,	// (0x000354e1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdc,	// (0x0003d525) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdc,	// (0x0003d525) list_medium_line_x4_t4_g7_t

0x7baa,	// (0x000354f3) list_single_dyc_row_pane_ParamLimits

0x7baa,	// (0x000354f3) list_single_dyc_row_pane

0x82c3,	// (0x00035c0c) call5_gesture_pane_ParamLimits

0x82c3,	// (0x00035c0c) call5_gesture_pane

0x8319,	// (0x00035c62) call5_windows_pane_ParamLimits

0x8319,	// (0x00035c62) call5_windows_pane

0x83c3,	// (0x00035d0c) call5_swipe_1_pane_cp_ParamLimits

0x83c3,	// (0x00035d0c) call5_swipe_1_pane_cp

0x83cf,	// (0x00035d18) call5_swipe_2_pane_cp_ParamLimits

0x83cf,	// (0x00035d18) call5_swipe_2_pane_cp

0xa479,	// (0x00037dc2) call5_image_pane_cp

0x83db,	// (0x00035d24) popup_call5_audio_first_window_cp_ParamLimits

0x83db,	// (0x00035d24) popup_call5_audio_first_window_cp

0xe33c,	// (0x0003bc85) call5_swipe_1_pane_g1_cp_ParamLimits

0xe33c,	// (0x0003bc85) call5_swipe_1_pane_g1_cp

0xe37c,	// (0x0003bcc5) call5_swipe_1_pane_g2_cp

0xe355,	// (0x0003bc9e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe355,	// (0x0003bc9e) call5_swipe_1_pane_t1_cp

0xe33c,	// (0x0003bc85) call5_swipe_2_pane_g1_cp_ParamLimits

0xe33c,	// (0x0003bc85) call5_swipe_2_pane_g1_cp

0xe384,	// (0x0003bccd) call5_swipe_2_pane_g2_cp

0xe38c,	// (0x0003bcd5) call5_swipe_2_pane_t1_cp_ParamLimits

0xe38c,	// (0x0003bcd5) call5_swipe_2_pane_t1_cp

0xa4a7,	// (0x00037df0) main_sp_fs_email_pane

0xe3a1,	// (0x0003bcea) main_sp_fs_listscroll_pane_te

0x83e9,	// (0x00035d32) popup_sp_fs_action_menu_pane_ParamLimits

0x83e9,	// (0x00035d32) popup_sp_fs_action_menu_pane

0xc7b2,	// (0x0003a0fb) bg_sp_fs_ctrlbar_pane_g1

0xe3aa,	// (0x0003bcf3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3b3,	// (0x0003bcfc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3bc,	// (0x0003bd05) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7b2,	// (0x0003a0fb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb3,	// (0x0003d5fc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc597,	// (0x00039ee0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc597,	// (0x00039ee0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3c5,	// (0x0003bd0e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3c5,	// (0x0003bd0e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3d1,	// (0x0003bd1a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3d1,	// (0x0003bd1a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbc,	// (0x0003d605) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbc,	// (0x0003d605) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3dd,	// (0x0003bd26) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3dd,	// (0x0003bd26) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x842d,	// (0x00035d76) list_medium_line_t2_right_icon_g1

0x8435,	// (0x00035d7e) list_medium_line_t2_right_icon_t1

0x8445,	// (0x00035d8e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc1,	// (0x0003d60a) list_medium_line_t2_right_icon_t

0xc3aa,	// (0x00039cf3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3aa,	// (0x00039cf3) bg_sp_fs_ctrlbar_pane

0x849f,	// (0x00035de8) main_sp_fs_ctrlbar_button_pane_cp01

0x84a9,	// (0x00035df2) main_sp_fs_ctrlbar_ddmenu_pane

0xe42f,	// (0x0003bd78) main_sp_fs_ctrlbar_pane_g1

0xe43b,	// (0x0003bd84) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc6,	// (0x0003d60f) main_sp_fs_ctrlbar_pane_g

0xe447,	// (0x0003bd90) main_sp_fs_ctrlbar_pane_t1

0x84b3,	// (0x00035dfc) main_sp_fs_ctrlbar_pane

0x84d7,	// (0x00035e20) main_sp_fs_listscroll_pane_te_cp01

0x84f7,	// (0x00035e40) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x84f7,	// (0x00035e40) popup_sp_fs_action_menu_pane_cp01

0xa4a7,	// (0x00037df0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4a7,	// (0x00037df0) bg_sp_fs_highlight_list_pane_cp01

0xe477,	// (0x0003bdc0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe477,	// (0x0003bdc0) sp_fs_action_menu_list_gene_pane_g1

0xe486,	// (0x0003bdcf) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe486,	// (0x0003bdcf) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd0,	// (0x0003d619) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd0,	// (0x0003d619) sp_fs_action_menu_list_gene_pane_g

0xe493,	// (0x0003bddc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe493,	// (0x0003bddc) sp_fs_action_menu_list_gene_pane_t1

0xe4ab,	// (0x0003bdf4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4ab,	// (0x0003bdf4) sp_fs_action_menu_list_gene_pane

0xe4ca,	// (0x0003be13) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4ca,	// (0x0003be13) popup_sp_fs_action_menu_bg_pane

0xe4d8,	// (0x0003be21) sp_fs_action_menu_list_pane_ParamLimits

0xe4d8,	// (0x0003be21) sp_fs_action_menu_list_pane

0x8527,	// (0x00035e70) sp_fs_scroll_pane_cp01_ParamLimits

0x8527,	// (0x00035e70) sp_fs_scroll_pane_cp01

0x854d,	// (0x00035e96) list_medium_line_plain_t2_t1

0x855d,	// (0x00035ea6) list_medium_line_plain_t2_t2

0x0001,

0xfcd5,	// (0x0003d61e) list_medium_line_plain_t2_t

0x856d,	// (0x00035eb6) list_medium_line_plain_t3_t1

0x857d,	// (0x00035ec6) list_medium_line_plain_t3_t2

0x858b,	// (0x00035ed4) list_medium_line_plain_t3_t3

0x0002,

0xfcda,	// (0x0003d623) list_medium_line_plain_t3_t

0x27a9,	// (0x000300f2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_t2_g2_g1

0x27c1,	// (0x0003010a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x27c1,	// (0x0003010a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003cb8f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003cb8f) list_medium_line_x2_t2_g2_g

0x3827,	// (0x00031170) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3827,	// (0x00031170) list_medium_line_x2_t2_g2_t1

0x27f6,	// (0x0003013f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x27f6,	// (0x0003013f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce1,	// (0x0003d62a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce1,	// (0x0003d62a) list_medium_line_x2_t2_g2_t

0x27a9,	// (0x000300f2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_t4_g2_g1

0x27c1,	// (0x0003010a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x27c1,	// (0x0003010a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003cb8f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003cb8f) list_medium_line_x2_t4_g2_g

0x8599,	// (0x00035ee2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8599,	// (0x00035ee2) list_medium_line_x2_t4_g2_t1

0x85b3,	// (0x00035efc) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85b3,	// (0x00035efc) list_medium_line_x2_t4_g2_t2

0x85c9,	// (0x00035f12) list_medium_line_x2_t4_g2_t3_ParamLimits

0x85c9,	// (0x00035f12) list_medium_line_x2_t4_g2_t3

0x27f6,	// (0x0003013f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x27f6,	// (0x0003013f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce6,	// (0x0003d62f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce6,	// (0x0003d62f) list_medium_line_x2_t4_g2_t

0x85de,	// (0x00035f27) list_medium_line_t3_right_iconx2_g1

0x842d,	// (0x00035d76) list_medium_line_t3_right_iconx2_g2

0x85e6,	// (0x00035f2f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcef,	// (0x0003d638) list_medium_line_t3_right_iconx2_g

0x85f0,	// (0x00035f39) list_medium_line_t3_right_iconx2_t1

0x8600,	// (0x00035f49) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf6,	// (0x0003d63f) list_medium_line_t3_right_iconx2_t

0x27a9,	// (0x000300f2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x3_t4_g4_g1

0x27b5,	// (0x000300fe) list_medium_line_x3_t4_g4_g2_ParamLimits

0x27b5,	// (0x000300fe) list_medium_line_x3_t4_g4_g2

0x285d,	// (0x000301a6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x285d,	// (0x000301a6) list_medium_line_x3_t4_g4_g3

0x860e,	// (0x00035f57) list_medium_line_x3_t4_g4_g4_ParamLimits

0x860e,	// (0x00035f57) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcfb,	// (0x0003d644) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcfb,	// (0x0003d644) list_medium_line_x3_t4_g4_g

0x861a,	// (0x00035f63) list_medium_line_x3_t4_g4_t1_ParamLimits

0x861a,	// (0x00035f63) list_medium_line_x3_t4_g4_t1

0x8631,	// (0x00035f7a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8631,	// (0x00035f7a) list_medium_line_x3_t4_g4_t2

0x864c,	// (0x00035f95) list_medium_line_x3_t4_g4_t3_ParamLimits

0x864c,	// (0x00035f95) list_medium_line_x3_t4_g4_t3

0x8661,	// (0x00035faa) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8661,	// (0x00035faa) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd04,	// (0x0003d64d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd04,	// (0x0003d64d) list_medium_line_x3_t4_g4_t

0x867e,	// (0x00035fc7) list_single_dyc_row_text_pane_t1_ParamLimits

0x867e,	// (0x00035fc7) list_single_dyc_row_text_pane_t1

0x86c7,	// (0x00036010) list_single_dyc_row_text_pane_t2_ParamLimits

0x86c7,	// (0x00036010) list_single_dyc_row_text_pane_t2

0xe4f8,	// (0x0003be41) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4f8,	// (0x0003be41) list_single_dyc_row_text_pane_t3

0x0005,

0xfd0d,	// (0x0003d656) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0d,	// (0x0003d656) list_single_dyc_row_text_pane_t

0xe51c,	// (0x0003be65) list_single_dyc_row_pane_g1_ParamLimits

0xe51c,	// (0x0003be65) list_single_dyc_row_pane_g1

0xe528,	// (0x0003be71) list_single_dyc_row_pane_g2_ParamLimits

0xe528,	// (0x0003be71) list_single_dyc_row_pane_g2

0xe534,	// (0x0003be7d) list_single_dyc_row_pane_g3_ParamLimits

0xe534,	// (0x0003be7d) list_single_dyc_row_pane_g3

0xe540,	// (0x0003be89) list_single_dyc_row_pane_g4_ParamLimits

0xe540,	// (0x0003be89) list_single_dyc_row_pane_g4

0x0003,

0xfd1a,	// (0x0003d663) list_single_dyc_row_pane_g_ParamLimits

0xfd1a,	// (0x0003d663) list_single_dyc_row_pane_g

0xe54c,	// (0x0003be95) list_single_dyc_row_text_pane_ParamLimits

0xe54c,	// (0x0003be95) list_single_dyc_row_text_pane

0x9b4b,	// (0x00037494) bg_sp_fs_scroll_pane

0xe56b,	// (0x0003beb4) thumb_sp_fs_scroll_pane

0x6dea,	// (0x00034733) list_medium_line_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_g1

0xe574,	// (0x0003bebd) list_medium_line_t1_ParamLimits

0xe574,	// (0x0003bebd) list_medium_line_t1

0x27a9,	// (0x000300f2) list_medium_line_x2_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_g1

0x27b5,	// (0x000300fe) list_medium_line_x2_g2_ParamLimits

0x27b5,	// (0x000300fe) list_medium_line_x2_g2

0x0001,

0xfd23,	// (0x0003d66c) list_medium_line_x2_g_ParamLimits

0xfd23,	// (0x0003d66c) list_medium_line_x2_g

0xe589,	// (0x0003bed2) list_medium_line_x2_t1_ParamLimits

0xe589,	// (0x0003bed2) list_medium_line_x2_t1

0x27a9,	// (0x000300f2) list_medium_line_x3_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x3_g1

0x27b5,	// (0x000300fe) list_medium_line_x3_g2_ParamLimits

0x27b5,	// (0x000300fe) list_medium_line_x3_g2

0x0001,

0xfd23,	// (0x0003d66c) list_medium_line_x3_g_ParamLimits

0xfd23,	// (0x0003d66c) list_medium_line_x3_g

0xe589,	// (0x0003bed2) list_medium_line_x3_t1_ParamLimits

0xe589,	// (0x0003bed2) list_medium_line_x3_t1

0xe59f,	// (0x0003bee8) thumb_sp_fs_scroll_pane_g1

0xe5a8,	// (0x0003bef1) thumb_sp_fs_scroll_pane_g2

0xe5b1,	// (0x0003befa) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd28,	// (0x0003d671) thumb_sp_fs_scroll_pane_g

0xe59f,	// (0x0003bee8) bg_sp_fs_scroll_pane_g1

0xe5a8,	// (0x0003bef1) bg_sp_fs_scroll_pane_g2

0xe5b1,	// (0x0003befa) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd28,	// (0x0003d671) bg_sp_fs_scroll_pane_g

0x27a9,	// (0x000300f2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x27a9,	// (0x000300f2) list_medium_line_x2_t3_g4_g1

0x2851,	// (0x0003019a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2851,	// (0x0003019a) list_medium_line_x2_t3_g4_g2

0x27b5,	// (0x000300fe) list_medium_line_x2_t3_g4_g3_ParamLimits

0x27b5,	// (0x000300fe) list_medium_line_x2_t3_g4_g3

0x27c1,	// (0x0003010a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x27c1,	// (0x0003010a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003cc0b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003cc0b) list_medium_line_x2_t3_g4_g

0x87fc,	// (0x00036145) list_medium_line_x2_t3_g4_t1_ParamLimits

0x87fc,	// (0x00036145) list_medium_line_x2_t3_g4_t1

0x8816,	// (0x0003615f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8816,	// (0x0003615f) list_medium_line_x2_t3_g4_t2

0x27f6,	// (0x0003013f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x27f6,	// (0x0003013f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd2f,	// (0x0003d678) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd2f,	// (0x0003d678) list_medium_line_x2_t3_g4_t

0x6dea,	// (0x00034733) list_medium_line_g2_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_g2_g1

0x6df6,	// (0x0003473f) list_medium_line_g2_g2_ParamLimits

0x6df6,	// (0x0003473f) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0003d35c) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0003d35c) list_medium_line_g2_g

0xe5ba,	// (0x0003bf03) list_medium_line_g2_t1_ParamLimits

0xe5ba,	// (0x0003bf03) list_medium_line_g2_t1

0x6dea,	// (0x00034733) list_medium_line_t3_g2_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_t3_g2_g1

0x6df6,	// (0x0003473f) list_medium_line_t3_g2_g2_ParamLimits

0x6df6,	// (0x0003473f) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0003d35c) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0003d35c) list_medium_line_t3_g2_g

0x8830,	// (0x00036179) list_medium_line_t3_g2_t1_ParamLimits

0x8830,	// (0x00036179) list_medium_line_t3_g2_t1

0x884a,	// (0x00036193) list_medium_line_t3_g2_t2_ParamLimits

0x884a,	// (0x00036193) list_medium_line_t3_g2_t2

0x8860,	// (0x000361a9) list_medium_line_t3_g2_t3_ParamLimits

0x8860,	// (0x000361a9) list_medium_line_t3_g2_t3

0x0002,

0xfd36,	// (0x0003d67f) list_medium_line_t3_g2_t_ParamLimits

0xfd36,	// (0x0003d67f) list_medium_line_t3_g2_t

0x842d,	// (0x00035d76) list_medium_line_right_icon_g1

0xe5cf,	// (0x0003bf18) list_medium_line_right_icon_t1

0x6dea,	// (0x00034733) list_medium_line_t2_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_t2_g1

0x887a,	// (0x000361c3) list_medium_line_t2_t1_ParamLimits

0x887a,	// (0x000361c3) list_medium_line_t2_t1

0x8894,	// (0x000361dd) list_medium_line_t2_t2_ParamLimits

0x8894,	// (0x000361dd) list_medium_line_t2_t2

0x0001,

0xfd3d,	// (0x0003d686) list_medium_line_t2_t_ParamLimits

0xfd3d,	// (0x0003d686) list_medium_line_t2_t

0x6dea,	// (0x00034733) list_medium_line_t3_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_t3_g1

0x88ad,	// (0x000361f6) list_medium_line_t3_t1_ParamLimits

0x88ad,	// (0x000361f6) list_medium_line_t3_t1

0x88c7,	// (0x00036210) list_medium_line_t3_t2_ParamLimits

0x88c7,	// (0x00036210) list_medium_line_t3_t2

0x88dd,	// (0x00036226) list_medium_line_t3_t3_ParamLimits

0x88dd,	// (0x00036226) list_medium_line_t3_t3

0x0002,

0xfd42,	// (0x0003d68b) list_medium_line_t3_t_ParamLimits

0xfd42,	// (0x0003d68b) list_medium_line_t3_t

0x6dea,	// (0x00034733) list_medium_line_g3_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_g3_g1

0x88f2,	// (0x0003623b) list_medium_line_g3_g2_ParamLimits

0x88f2,	// (0x0003623b) list_medium_line_g3_g2

0x6df6,	// (0x0003473f) list_medium_line_g3_g3_ParamLimits

0x6df6,	// (0x0003473f) list_medium_line_g3_g3

0x0002,

0xfd49,	// (0x0003d692) list_medium_line_g3_g_ParamLimits

0xfd49,	// (0x0003d692) list_medium_line_g3_g

0xe5dd,	// (0x0003bf26) list_medium_line_g3_t1_ParamLimits

0xe5dd,	// (0x0003bf26) list_medium_line_g3_t1

0x6dea,	// (0x00034733) list_medium_line_t2_g3_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_t2_g3_g1

0x88f2,	// (0x0003623b) list_medium_line_t2_g3_g2_ParamLimits

0x88f2,	// (0x0003623b) list_medium_line_t2_g3_g2

0x6df6,	// (0x0003473f) list_medium_line_t2_g3_g3_ParamLimits

0x6df6,	// (0x0003473f) list_medium_line_t2_g3_g3

0x0002,

0xfd49,	// (0x0003d692) list_medium_line_t2_g3_g_ParamLimits

0xfd49,	// (0x0003d692) list_medium_line_t2_g3_g

0x88fe,	// (0x00036247) list_medium_line_t2_g3_t1_ParamLimits

0x88fe,	// (0x00036247) list_medium_line_t2_g3_t1

0x8918,	// (0x00036261) list_medium_line_t2_g3_t2_ParamLimits

0x8918,	// (0x00036261) list_medium_line_t2_g3_t2

0x0001,

0xfd50,	// (0x0003d699) list_medium_line_t2_g3_t_ParamLimits

0xfd50,	// (0x0003d699) list_medium_line_t2_g3_t

0x6dea,	// (0x00034733) list_medium_line_t3_g3_g1_ParamLimits

0x6dea,	// (0x00034733) list_medium_line_t3_g3_g1

0x88f2,	// (0x0003623b) list_medium_line_t3_g3_g2_ParamLimits

0x88f2,	// (0x0003623b) list_medium_line_t3_g3_g2

0x6df6,	// (0x0003473f) list_medium_line_t3_g3_g3_ParamLimits

0x6df6,	// (0x0003473f) list_medium_line_t3_g3_g3

0x0002,

0xfd49,	// (0x0003d692) list_medium_line_t3_g3_g_ParamLimits

0xfd49,	// (0x0003d692) list_medium_line_t3_g3_g

0x8936,	// (0x0003627f) list_medium_line_t3_g3_t1_ParamLimits

0x8936,	// (0x0003627f) list_medium_line_t3_g3_t1

0x894f,	// (0x00036298) list_medium_line_t3_g3_t2_ParamLimits

0x894f,	// (0x00036298) list_medium_line_t3_g3_t2

0x8965,	// (0x000362ae) list_medium_line_t3_g3_t3_ParamLimits

0x8965,	// (0x000362ae) list_medium_line_t3_g3_t3

0x0002,

0xfd55,	// (0x0003d69e) list_medium_line_t3_g3_t_ParamLimits

0xfd55,	// (0x0003d69e) list_medium_line_t3_g3_t

0x85de,	// (0x00035f27) list_medium_line_right_iconx2_g1

0x842d,	// (0x00035d76) list_medium_line_right_iconx2_g2

0x0001,

0xfd5c,	// (0x0003d6a5) list_medium_line_right_iconx2_g

0xe5f2,	// (0x0003bf3b) list_medium_line_right_iconx2_t1

0x85de,	// (0x00035f27) list_medium_line_t2_right_iconx2_g1

0x842d,	// (0x00035d76) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd5c,	// (0x0003d6a5) list_medium_line_t2_right_iconx2_g

0x897f,	// (0x000362c8) list_medium_line_t2_right_iconx2_t1

0x898f,	// (0x000362d8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd61,	// (0x0003d6aa) list_medium_line_t2_right_iconx2_t

0x89a1,	// (0x000362ea) list_medium_line_x4_t4_t1

0x89af,	// (0x000362f8) list_medium_line_x4_t4_t2

0x89bf,	// (0x00036308) list_medium_line_x4_t4_t3

0x89cf,	// (0x00036318) list_medium_line_x4_t4_t4

0x0003,

0xfd66,	// (0x0003d6af) list_medium_line_x4_t4_t

0x8a22,	// (0x0003636b) tport_appsw_pane_ParamLimits

0x8a22,	// (0x0003636b) tport_appsw_pane

0x8a3a,	// (0x00036383) tport_contact_pane_ParamLimits

0x8a3a,	// (0x00036383) tport_contact_pane

0x8a52,	// (0x0003639b) tport_listscroll_pane_ParamLimits

0x8a52,	// (0x0003639b) tport_listscroll_pane

0x8a6c,	// (0x000363b5) cell_tport_appsw_pane_ParamLimits

0x8a6c,	// (0x000363b5) cell_tport_appsw_pane

0xd25b,	// (0x0003aba4) tport_appsw_pane_g1_ParamLimits

0xd25b,	// (0x0003aba4) tport_appsw_pane_g1

0xe600,	// (0x0003bf49) tport_contact_pane_g1

0xe609,	// (0x0003bf52) tport_contact_pane_t1

0xe617,	// (0x0003bf60) tport_contact_pane_t2

0x0001,

0xfd6f,	// (0x0003d6b8) tport_contact_pane_t

0xe625,	// (0x0003bf6e) list_tport_pane

0xe62e,	// (0x0003bf77) scroll_pane_cp_030

0x8ab4,	// (0x000363fd) cell_tport_appsw_pane_g1

0x8ac4,	// (0x0003640d) cell_tport_appsw_pane_t1

0x8ad2,	// (0x0003641b) grid_highlight_pane_cp019

0x8ada,	// (0x00036423) list_tport_double_graphic_pane_ParamLimits

0x8ada,	// (0x00036423) list_tport_double_graphic_pane

0xa4a7,	// (0x00037df0) list_highlight_pane_cp023_ParamLimits

0xa4a7,	// (0x00037df0) list_highlight_pane_cp023

0x8ae7,	// (0x00036430) list_tport_double_graphic_pane_g1_ParamLimits

0x8ae7,	// (0x00036430) list_tport_double_graphic_pane_g1

0x8af4,	// (0x0003643d) list_tport_double_graphic_pane_t1_ParamLimits

0x8af4,	// (0x0003643d) list_tport_double_graphic_pane_t1

0x8b09,	// (0x00036452) list_tport_double_graphic_pane_t2_ParamLimits

0x8b09,	// (0x00036452) list_tport_double_graphic_pane_t2

0x0001,

0xfd7b,	// (0x0003d6c4) list_tport_double_graphic_pane_t_ParamLimits

0xfd7b,	// (0x0003d6c4) list_tport_double_graphic_pane_t

0x9b4b,	// (0x00037494) main_cale_note_pane

0x17b4,	// (0x0002f0fd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x17b4,	// (0x0002f0fd) cell_vitu2_function_top_wide_pane_cp01

0x7f52,	// (0x0003589b) wait_bar_pane_cp05_ParamLimits

0xa4a7,	// (0x00037df0) listscroll_cmail_pane

0xe637,	// (0x0003bf80) list_cmail_pane

0x8b1b,	// (0x00036464) list_cmail_body_pane

0x8b30,	// (0x00036479) list_single_cmail_header_caption_pane

0x8b47,	// (0x00036490) list_single_cmail_header_detail_pane_ParamLimits

0x8b47,	// (0x00036490) list_single_cmail_header_detail_pane

0xe647,	// (0x0003bf90) list_single_cmail_header_caption_pane_t1

0x8b71,	// (0x000364ba) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8b71,	// (0x000364ba) list_single_cmail_header_detail_pane_g1

0xe65e,	// (0x0003bfa7) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe65e,	// (0x0003bfa7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd80,	// (0x0003d6c9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd80,	// (0x0003d6c9) list_single_cmail_header_detail_pane_g

0xe677,	// (0x0003bfc0) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe677,	// (0x0003bfc0) list_single_cmail_header_detail_pane_t1

0xe6d7,	// (0x0003c020) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6d7,	// (0x0003c020) list_single_cmail_header_editor_pane_bg

0xdfbd,	// (0x0003b906) list_cmail_body_pane_g1

0xe6ee,	// (0x0003c037) list_cmail_body_pane_t1

0xd298,	// (0x0003abe1) list_single_cmail_header_editor_pane_bg_g1

0xa777,	// (0x000380c0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2a8,	// (0x0003abf1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2a0,	// (0x0003abe9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4e2,	// (0x0003ae2b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2c8,	// (0x0003ac11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2b8,	// (0x0003ac01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2c0,	// (0x0003ac09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa757,	// (0x000380a0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8b89,	// (0x000364d2) calenote_gesture_pane_ParamLimits

0x8b89,	// (0x000364d2) calenote_gesture_pane

0x8ba9,	// (0x000364f2) calenote_window_pane_ParamLimits

0x8ba9,	// (0x000364f2) calenote_window_pane

0xe6fc,	// (0x0003c045) popup_note_window_cp01

0x8bc5,	// (0x0003650e) calenote_swipe_1_pane_ParamLimits

0x8bc5,	// (0x0003650e) calenote_swipe_1_pane

0x83cf,	// (0x00035d18) calenote_swipe_2_pane_ParamLimits

0x83cf,	// (0x00035d18) calenote_swipe_2_pane

0xe33c,	// (0x0003bc85) calenote_swipe_1_pane_g1_ParamLimits

0xe33c,	// (0x0003bc85) calenote_swipe_1_pane_g1

0xe349,	// (0x0003bc92) calenote_swipe_1_pane_g2_ParamLimits

0xe349,	// (0x0003bc92) calenote_swipe_1_pane_g2

0x0001,

0xfca9,	// (0x0003d5f2) calenote_swipe_1_pane_g_ParamLimits

0xfca9,	// (0x0003d5f2) calenote_swipe_1_pane_g

0xe70e,	// (0x0003c057) calenote_swipe_1_pane_t1_ParamLimits

0xe70e,	// (0x0003c057) calenote_swipe_1_pane_t1

0xe33c,	// (0x0003bc85) calenote_swipe_2_pane_g1_ParamLimits

0xe33c,	// (0x0003bc85) calenote_swipe_2_pane_g1

0xe72d,	// (0x0003c076) calenote_swipe_2_pane_g2_ParamLimits

0xe72d,	// (0x0003c076) calenote_swipe_2_pane_g2

0x0001,

0xfd8c,	// (0x0003d6d5) calenote_swipe_2_pane_g_ParamLimits

0xfd8c,	// (0x0003d6d5) calenote_swipe_2_pane_g

0xe739,	// (0x0003c082) calenote_swipe_2_pane_t1_ParamLimits

0xe739,	// (0x0003c082) calenote_swipe_2_pane_t1

0x9b4b,	// (0x00037494) main_mup_navstr_pane

0x577b,	// (0x000330c4) main_mup3_pane_t7_ParamLimits

0x577b,	// (0x000330c4) main_mup3_pane_t7

0x6184,	// (0x00033acd) main_mp4_pane_g6_ParamLimits

0x6184,	// (0x00033acd) main_mp4_pane_g6

0x63cc,	// (0x00033d15) main_image3_pane_t4_ParamLimits

0x63cc,	// (0x00033d15) main_image3_pane_t4

0x8bda,	// (0x00036523) popup_navstr_preview_pane_ParamLimits

0x8bda,	// (0x00036523) popup_navstr_preview_pane

0x8bee,	// (0x00036537) scroll_navstr_pane_ParamLimits

0x8bee,	// (0x00036537) scroll_navstr_pane

0x9b4b,	// (0x00037494) bg_popup_preview_window_pane_cp04

0xe760,	// (0x0003c0a9) popup_navstr_preview_pane_t1

0x8c02,	// (0x0003654b) scroll_navstr_pane_g1_ParamLimits

0x8c02,	// (0x0003654b) scroll_navstr_pane_g1

0x8c16,	// (0x0003655f) scroll_navstr_pane_t1_ParamLimits

0x8c16,	// (0x0003655f) scroll_navstr_pane_t1

0xe705,	// (0x0003c04e) bg_button_pane_cp014

0xe705,	// (0x0003c04e) bg_button_pane_cp030

0x8269,	// (0x00035bb2) list_double_fisheye_pane_g4_ParamLimits

0x8269,	// (0x00035bb2) list_double_fisheye_pane_g4

0x8275,	// (0x00035bbe) list_double_fisheye_pane_g5_ParamLimits

0x8275,	// (0x00035bbe) list_double_fisheye_pane_g5

0xccec,	// (0x0003a635) sp_fs_scroll_pane_cp03

0xe42f,	// (0x0003bd78) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe43b,	// (0x0003bd84) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc6,	// (0x0003d60f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe447,	// (0x0003bd90) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe63f,	// (0x0003bf88) sp_fs_scroll_pane_cp02

0xa3b8,	// (0x00037d01) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3b8,	// (0x00037d01) popup_sp_fs_calendar_preview_list_single_pane

0x9b4b,	// (0x00037494) main_cam6_pano_pane

0x1bb2,	// (0x0002f4fb) main_mup3_pane_ParamLimits

0x9b4b,	// (0x00037494) main_phacti_pane

0x7e25,	// (0x0003576e) bg_button_pane_cp11

0x7e3f,	// (0x00035788) main_mobtv_info_pane_g2_ParamLimits

0x7e3f,	// (0x00035788) main_mobtv_info_pane_g2

0x0001,

0xfc26,	// (0x0003d56f) main_mobtv_info_pane_g_ParamLimits

0xfc26,	// (0x0003d56f) main_mobtv_info_pane_g

0x801c,	// (0x00035965) sc_clock_pane_t5_ParamLimits

0x801c,	// (0x00035965) sc_clock_pane_t5

0x80e4,	// (0x00035a2d) main_radioblah_pane_g1_ParamLimits

0xe26d,	// (0x0003bbb6) main_radioblah_pane_t3_ParamLimits

0xe26d,	// (0x0003bbb6) main_radioblah_pane_t3

0xe285,	// (0x0003bbce) main_radioblah_pane_t4_ParamLimits

0xe285,	// (0x0003bbce) main_radioblah_pane_t4

0x810c,	// (0x00035a55) main_radioblah_text_pane_ParamLimits

0x810c,	// (0x00035a55) main_radioblah_text_pane

0x811e,	// (0x00035a67) main_radioblah_info_pane_g1_ParamLimits

0x81b7,	// (0x00035b00) main_radioblah_info_pane_t4_ParamLimits

0x81b7,	// (0x00035b00) main_radioblah_info_pane_t4

0xa4a7,	// (0x00037df0) main_sp_fs_calendar_pane

0x8c2d,	// (0x00036576) main_phacti_pane_g1

0x8c35,	// (0x0003657e) phacti_note_pane_ParamLimits

0x8c35,	// (0x0003657e) phacti_note_pane

0xe777,	// (0x0003c0c0) phacti_term_pane_ParamLimits

0xe777,	// (0x0003c0c0) phacti_term_pane

0xe78c,	// (0x0003c0d5) phacti_note_pane_t1_ParamLimits

0xe78c,	// (0x0003c0d5) phacti_note_pane_t1

0xe7a3,	// (0x0003c0ec) phacti_term_pane_g1

0xe7ab,	// (0x0003c0f4) phacti_term_pane_t1_ParamLimits

0xe7ab,	// (0x0003c0f4) phacti_term_pane_t1

0xe7d5,	// (0x0003c11e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7dd,	// (0x0003c126) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd96,	// (0x0003d6df) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7e5,	// (0x0003c12e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7e5,	// (0x0003c12e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7fb,	// (0x0003c144) aid_popup_sp_fs_bg_corner_pane

0xc7b2,	// (0x0003a0fb) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b4b,	// (0x00037494) popup_sp_fs_calendar_preview_bg_pane

0x2632,	// (0x0002ff7b) popup_sp_fs_calendar_preview_list_pane

0xc3aa,	// (0x00039cf3) bg_main_sp_fs_cale_pane_ParamLimits

0xc3aa,	// (0x00039cf3) bg_main_sp_fs_cale_pane

0xe80c,	// (0x0003c155) listscroll_cale_mrui_pane_ParamLimits

0xe80c,	// (0x0003c155) listscroll_cale_mrui_pane

0xd31c,	// (0x0003ac65) listscroll_sp_fs_schedule_track_pane

0xe821,	// (0x0003c16a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe821,	// (0x0003c16a) main_sp_fs_ctrlbar_pane_cp01

0xe834,	// (0x0003c17d) main_sp_fs_ribbon_pane

0xe83c,	// (0x0003c185) popup_sp_fs_cale_preview_window

0x8caa,	// (0x000365f3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8caa,	// (0x000365f3) list_single_sp_fs_schedule_track_pane

0xa4a7,	// (0x00037df0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4a7,	// (0x00037df0) bg_sp_fs_highlight_list_pane_cp03

0x8cbe,	// (0x00036607) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8cbe,	// (0x00036607) list_single_sp_fs_schedule_track_pane_g1

0x8cca,	// (0x00036613) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8cca,	// (0x00036613) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd9b,	// (0x0003d6e4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd9b,	// (0x0003d6e4) list_single_sp_fs_schedule_track_pane_g

0x8cd6,	// (0x0003661f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8cd6,	// (0x0003661f) list_single_sp_fs_schedule_track_pane_t1

0x8cf0,	// (0x00036639) sp_fs_schedule_track_pane_ParamLimits

0x8cf0,	// (0x00036639) sp_fs_schedule_track_pane

0xe84e,	// (0x0003c197) sp_fs_schedule_track_pane_g1

0xe856,	// (0x0003c19f) sp_fs_schedule_track_pane_g2

0xe85e,	// (0x0003c1a7) sp_fs_schedule_track_pane_g3

0xe866,	// (0x0003c1af) sp_fs_schedule_track_pane_g4

0xe86e,	// (0x0003c1b7) sp_fs_schedule_track_pane_g5

0x0004,

0xfda0,	// (0x0003d6e9) sp_fs_schedule_track_pane_g

0xd298,	// (0x0003abe1) bg_sp_fs_schedule_viewer_highlight_g1

0xa777,	// (0x000380c0) bg_sp_fs_schedule_viewer_highlight_g2

0xd2a0,	// (0x0003abe9) bg_sp_fs_schedule_viewer_highlight_g3

0xd2a8,	// (0x0003abf1) bg_sp_fs_schedule_viewer_highlight_g4

0xd4e2,	// (0x0003ae2b) bg_sp_fs_schedule_viewer_highlight_g5

0xd2b8,	// (0x0003ac01) bg_sp_fs_schedule_viewer_highlight_g6

0xd2c0,	// (0x0003ac09) bg_sp_fs_schedule_viewer_highlight_g7

0xd2c8,	// (0x0003ac11) bg_sp_fs_schedule_viewer_highlight_g8

0xa757,	// (0x000380a0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdab,	// (0x0003d6f4) bg_sp_fs_schedule_viewer_highlight_g

0x9b4b,	// (0x00037494) bg_main_sp_fs_ribbon_pane

0x8d01,	// (0x0003664a) main_sp_fs_ribbon_pane_g1

0xe876,	// (0x0003c1bf) main_sp_fs_ribbon_pane_t1

0x8d0a,	// (0x00036653) main_sp_fs_ribbon_pane_t2

0xe885,	// (0x0003c1ce) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdbe,	// (0x0003d707) main_sp_fs_ribbon_pane_t

0xe894,	// (0x0003c1dd) main_sp_fs_ribbon_scheduler_pane

0xe89c,	// (0x0003c1e5) bg_main_sp_fs_ribbon_pane_g1

0xe8a5,	// (0x0003c1ee) bg_main_sp_fs_ribbon_pane_g2

0xe8ae,	// (0x0003c1f7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdc5,	// (0x0003d70e) bg_main_sp_fs_ribbon_pane_g

0xe8b6,	// (0x0003c1ff) main_sp_fs_ribbon_scheduler_pane_g1

0xe8bf,	// (0x0003c208) main_sp_fs_ribbon_scheduler_pane_g2

0xe8c8,	// (0x0003c211) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdcc,	// (0x0003d715) main_sp_fs_ribbon_scheduler_pane_g

0xe8d1,	// (0x0003c21a) list_cale_mrui_pane

0x8d19,	// (0x00036662) sp_fs_scroll_pane_cp07_ParamLimits

0x8d19,	// (0x00036662) sp_fs_scroll_pane_cp07

0x8d35,	// (0x0003667e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d35,	// (0x0003667e) bg_sp_fs_schedule_viewer_highlight

0xe8de,	// (0x0003c227) list_single_sp_fs_schedule_track_pane_cp01

0xe8e6,	// (0x0003c22f) list_sp_fs_schedule_track_pane

0xe8ee,	// (0x0003c237) sp_fs_scroll_pane_cp06_ParamLimits

0xe8ee,	// (0x0003c237) sp_fs_scroll_pane_cp06

0xc7b2,	// (0x0003a0fb) bgmain_sp_fs_calendar_pane_g1

0x8d45,	// (0x0003668e) list_single_cale_mrui_pane_ParamLimits

0x8d45,	// (0x0003668e) list_single_cale_mrui_pane

0xe900,	// (0x0003c249) list_single_cale_mrui_row_pane_ParamLimits

0xe900,	// (0x0003c249) list_single_cale_mrui_row_pane

0xe90d,	// (0x0003c256) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe90d,	// (0x0003c256) list_single_cale_mrui_row_pane_g1

0xe952,	// (0x0003c29b) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe952,	// (0x0003c29b) list_single_cale_mrui_row_pane_t1

0x8d66,	// (0x000366af) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8d66,	// (0x000366af) list_single_cale_mrui_row_pane_t2

0xe964,	// (0x0003c2ad) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe964,	// (0x0003c2ad) list_single_cale_mrui_row_pane_t3

0xe993,	// (0x0003c2dc) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe993,	// (0x0003c2dc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdda,	// (0x0003d723) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdda,	// (0x0003d723) list_single_cale_mrui_row_pane_t

0x8dce,	// (0x00036717) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8dce,	// (0x00036717) list_single_cmail_header_editor_pane_bg_cp01

0x8df4,	// (0x0003673d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8df4,	// (0x0003673d) list_single_cmail_header_editor_pane_bg_cp02

0x8e14,	// (0x0003675d) main_radioblah_text_pane_t1_ParamLimits

0x8e14,	// (0x0003675d) main_radioblah_text_pane_t1

0xe9c2,	// (0x0003c30b) cam6_indi_pane_cp01

0xe9ca,	// (0x0003c313) cam6_mode_pane_cp01

0xe9d2,	// (0x0003c31b) cam6_pano_pane

0xe9db,	// (0x0003c324) cam6_zoom_pane_cp01

0xe9e3,	// (0x0003c32c) cam6_pano_image_pane

0xe9ee,	// (0x0003c337) cam6_pano_pane_g1

0xdfbd,	// (0x0003b906) cam6_pano_pane_g2

0xe9f7,	// (0x0003c340) cam6_pano_pane_g3

0xea00,	// (0x0003c349) cam6_pano_pane_g4

0xcddd,	// (0x0003a726) cam6_pano_pane_g5

0xea09,	// (0x0003c352) cam6_pano_pane_g6

0xea13,	// (0x0003c35c) cam6_pano_pane_g7

0xea1b,	// (0x0003c364) cam6_pano_pane_g8

0xea24,	// (0x0003c36d) cam6_pano_pane_g9

0x0008,

0xfde3,	// (0x0003d72c) cam6_pano_pane_g

0x9b4b,	// (0x00037494) main_browser_tag_pane

0xe758,	// (0x0003c0a1) grid_navstr_albumart_pane

0xea2f,	// (0x0003c378) cell_navstr_albumart_pane_ParamLimits

0xea2f,	// (0x0003c378) cell_navstr_albumart_pane

0xea4f,	// (0x0003c398) cell_navstr_albumart_pane_g1

0xc17b,	// (0x00039ac4) cell_navstr_albumart_pane_g2

0xc18b,	// (0x00039ad4) cell_navstr_albumart_pane_g3

0xc183,	// (0x00039acc) cell_navstr_albumart_pane_g4

0x0003,

0x02a1,	// (0x0002dbea) cell_navstr_albumart_pane_g

0x8e2f,	// (0x00036778) bt_list_pane_ParamLimits

0x8e2f,	// (0x00036778) bt_list_pane

0x8e43,	// (0x0003678c) bt_list_pane_t1

0x8e52,	// (0x0003679b) bt_list_pane_t2

0x0001,

0xfdf6,	// (0x0003d73f) bt_list_pane_t

0x9b4b,	// (0x00037494) main_cale_prevew_pane

0x8e61,	// (0x000367aa) popup_cale_preview_window_ParamLimits

0x8e61,	// (0x000367aa) popup_cale_preview_window

0xa4a7,	// (0x00037df0) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4a7,	// (0x00037df0) bg_popup_preview_window_pane_cp05

0xea57,	// (0x0003c3a0) list_cale_preview_pane_ParamLimits

0xea57,	// (0x0003c3a0) list_cale_preview_pane

0x8e7a,	// (0x000367c3) list_double_cale_preview_pane_ParamLimits

0x8e7a,	// (0x000367c3) list_double_cale_preview_pane

0xd2d0,	// (0x0003ac19) list_single_cale_preview_pane_ParamLimits

0xd2d0,	// (0x0003ac19) list_single_cale_preview_pane

0x8e8c,	// (0x000367d5) list_single_cale_preview_pane_g1

0x8e94,	// (0x000367dd) list_single_cale_preview_pane_t1_ParamLimits

0x8e94,	// (0x000367dd) list_single_cale_preview_pane_t1

0x8ea9,	// (0x000367f2) list_double_cale_preview_pane_g1

0x8eb1,	// (0x000367fa) list_double_cale_preview_pane_t1_ParamLimits

0x8eb1,	// (0x000367fa) list_double_cale_preview_pane_t1

0x8ec6,	// (0x0003680f) list_double_cale_preview_pane_t2_ParamLimits

0x8ec6,	// (0x0003680f) list_double_cale_preview_pane_t2

0x0001,

0xfdfb,	// (0x0003d744) list_double_cale_preview_pane_t_ParamLimits

0xfdfb,	// (0x0003d744) list_double_cale_preview_pane_t

0x9b4b,	// (0x00037494) main_ezdial_pane

0xa4a7,	// (0x00037df0) main_sp_fs_email_pane_ParamLimits

0x8457,	// (0x00035da0) cmail_ddmenu_btn01_pane_ParamLimits

0x8457,	// (0x00035da0) cmail_ddmenu_btn01_pane

0x846a,	// (0x00035db3) cmail_ddmenu_btn02_pane_ParamLimits

0x846a,	// (0x00035db3) cmail_ddmenu_btn02_pane

0x848d,	// (0x00035dd6) cmail_ddmenu_btn03_pane_ParamLimits

0x848d,	// (0x00035dd6) cmail_ddmenu_btn03_pane

0x84b3,	// (0x00035dfc) main_sp_fs_ctrlbar_pane_ParamLimits

0x84d7,	// (0x00035e20) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b1b,	// (0x00036464) list_cmail_body_pane_ParamLimits

0xe655,	// (0x0003bf9e) bg_button_pane_cp12

0xe66a,	// (0x0003bfb3) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe66a,	// (0x0003bfb3) list_single_cmail_header_detail_pane_g3

0xe6b3,	// (0x0003bffc) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe6b3,	// (0x0003bffc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd87,	// (0x0003d6d0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd87,	// (0x0003d6d0) list_single_cmail_header_detail_pane_t

0xe7c0,	// (0x0003c109) phacti_term_pane_t2_ParamLimits

0xe7c0,	// (0x0003c109) phacti_term_pane_t2

0x0001,

0xfd91,	// (0x0003d6da) phacti_term_pane_t_ParamLimits

0xfd91,	// (0x0003d6da) phacti_term_pane_t

0xea63,	// (0x0003c3ac) aid_size_list_single_double

0x8ede,	// (0x00036827) popup_ezdial_listscroll_window

0x8efa,	// (0x00036843) popup_number_entry_window_cp01

0xa479,	// (0x00037dc2) bg_popup_call_pane_cp09

0xea6f,	// (0x0003c3b8) ezdial_list_pane

0xea77,	// (0x0003c3c0) scroll_pane_cp23

0xc3aa,	// (0x00039cf3) bg_button_pane_cp028_ParamLimits

0xc3aa,	// (0x00039cf3) bg_button_pane_cp028

0x8f08,	// (0x00036851) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f08,	// (0x00036851) cmail_ddmenu_btn01_pane_g1

0x8f14,	// (0x0003685d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f14,	// (0x0003685d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe00,	// (0x0003d749) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe00,	// (0x0003d749) cmail_ddmenu_btn01_pane_g

0xea7f,	// (0x0003c3c8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea7f,	// (0x0003c3c8) cmail_ddmenu_btn01_pane_t1

0xc3aa,	// (0x00039cf3) bg_button_pane_cp029_ParamLimits

0xc3aa,	// (0x00039cf3) bg_button_pane_cp029

0x8f20,	// (0x00036869) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f20,	// (0x00036869) cmail_ddmenu_btn02_pane_g1

0x8f39,	// (0x00036882) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f39,	// (0x00036882) cmail_ddmenu_btn02_pane_t1

0xa4a7,	// (0x00037df0) bg_button_pane_cp031_ParamLimits

0xa4a7,	// (0x00037df0) bg_button_pane_cp031

0x8f20,	// (0x00036869) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f20,	// (0x00036869) cmail_ddmenu_btn03_pane_g1

0x8f39,	// (0x00036882) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f39,	// (0x00036882) cmail_ddmenu_btn03_pane_t1

0x6375,	// (0x00033cbe) cell_dialer2_keypad_pane_t1_ParamLimits

0x638f,	// (0x00033cd8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x638f,	// (0x00033cd8) cell_dialer2_keypad_pane_t1_copy1

0x7c3a,	// (0x00035583) ncimui_group_button_pane

0xa4a7,	// (0x00037df0) main_sp_fs_calendar_pane_ParamLimits

0x8b30,	// (0x00036479) list_single_cmail_header_caption_pane_ParamLimits

0xe803,	// (0x0003c14c) aid_recal_txt_sm_pane

0x9b4b,	// (0x00037494) mian_recal_day_pane

0xe83c,	// (0x0003c185) popup_sp_fs_cale_preview_window_ParamLimits

0xea94,	// (0x0003c3dd) list_recal_day_pane

0xead6,	// (0x0003c41f) list_single_recal_day_pane_ParamLimits

0xead6,	// (0x0003c41f) list_single_recal_day_pane

0xeae8,	// (0x0003c431) list_single_recal_day_pane_g1_ParamLimits

0xeae8,	// (0x0003c431) list_single_recal_day_pane_g1

0xeaf4,	// (0x0003c43d) list_single_recal_day_pane_g2_ParamLimits

0xeaf4,	// (0x0003c43d) list_single_recal_day_pane_g2

0xeb00,	// (0x0003c449) list_single_recal_day_pane_g3_ParamLimits

0xeb00,	// (0x0003c449) list_single_recal_day_pane_g3

0x8f5d,	// (0x000368a6) list_single_recal_day_pane_g4_ParamLimits

0x8f5d,	// (0x000368a6) list_single_recal_day_pane_g4

0xeb0c,	// (0x0003c455) list_single_recal_day_pane_g5_ParamLimits

0xeb0c,	// (0x0003c455) list_single_recal_day_pane_g5

0xeb18,	// (0x0003c461) list_single_recal_day_pane_g6_ParamLimits

0xeb18,	// (0x0003c461) list_single_recal_day_pane_g6

0x0004,

0xfe0f,	// (0x0003d758) list_single_recal_day_pane_g_ParamLimits

0xfe0f,	// (0x0003d758) list_single_recal_day_pane_g

0xeb2c,	// (0x0003c475) list_single_recal_day_pane_t1

0xeb3e,	// (0x0003c487) list_single_recal_day_pane_t2

0x0001,

0xfe1a,	// (0x0003d763) list_single_recal_day_pane_t

0x8f75,	// (0x000368be) ncimui_query_button_pane_ParamLimits

0x8f75,	// (0x000368be) ncimui_query_button_pane

0x8f85,	// (0x000368ce) ncimui_query_button_pane_t1_ParamLimits

0x8f85,	// (0x000368ce) ncimui_query_button_pane_t1

0xeb50,	// (0x0003c499) ncimui_query_button_pane_t2_ParamLimits

0xeb50,	// (0x0003c499) ncimui_query_button_pane_t2

0x0001,

0xfe1f,	// (0x0003d768) ncimui_query_button_pane_t_ParamLimits

0xfe1f,	// (0x0003d768) ncimui_query_button_pane_t

0x8f98,	// (0x000368e1) query_button_pane_ParamLimits

0x8f98,	// (0x000368e1) query_button_pane

0x9b4b,	// (0x00037494) bg_button_pane_cp0028

0xeb63,	// (0x0003c4ac) query_button_pane_t1

0x088f,	// (0x0002e1d8) main_tport_pane_ParamLimits

0x89df,	// (0x00036328) bg_popup_window_pane_cp01_ParamLimits

0x89df,	// (0x00036328) bg_popup_window_pane_cp01

0x89fa,	// (0x00036343) heading_pane_cp08_ParamLimits

0x89fa,	// (0x00036343) heading_pane_cp08

0x8a0d,	// (0x00036356) heading_pane_cp07_ParamLimits

0x8a0d,	// (0x00036356) heading_pane_cp07

0x8ab4,	// (0x000363fd) cell_tport_appsw_pane_g2

0x0002,

0xfd74,	// (0x0003d6bd) cell_tport_appsw_pane_g

0x3ffa,	// (0x00031943) input_candi_list_open_g1

0xa93a,	// (0x00038283) list_cale_time_pane_g6_ParamLimits

0xa93a,	// (0x00038283) list_cale_time_pane_g6

0x51ac,	// (0x00032af5) aid_size_touch_calib_1_ParamLimits

0x51ac,	// (0x00032af5) aid_size_touch_calib_1

0x51be,	// (0x00032b07) aid_size_touch_calib_2_ParamLimits

0x51be,	// (0x00032b07) aid_size_touch_calib_2

0x51d6,	// (0x00032b1f) aid_size_touch_calib_3_ParamLimits

0x51d6,	// (0x00032b1f) aid_size_touch_calib_3

0x51f4,	// (0x00032b3d) aid_size_touch_calib_4_ParamLimits

0x51f4,	// (0x00032b3d) aid_size_touch_calib_4

0x520c,	// (0x00032b55) main_touch_calib_button_group_pane_ParamLimits

0x520c,	// (0x00032b55) main_touch_calib_button_group_pane

0x5224,	// (0x00032b6d) main_touch_calib_pane_g1_ParamLimits

0x5236,	// (0x00032b7f) main_touch_calib_pane_g2_ParamLimits

0x5248,	// (0x00032b91) main_touch_calib_pane_g3_ParamLimits

0x525a,	// (0x00032ba3) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0003d0ad) main_touch_calib_pane_g_ParamLimits

0x526c,	// (0x00032bb5) main_touch_calib_pane_t1_ParamLimits

0x5286,	// (0x00032bcf) main_touch_calib_pane_t2_ParamLimits

0x52a0,	// (0x00032be9) main_touch_calib_pane_t3_ParamLimits

0x52b4,	// (0x00032bfd) main_touch_calib_pane_t4_ParamLimits

0x52c8,	// (0x00032c11) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0003d0b6) main_touch_calib_pane_t_ParamLimits

0xcb74,	// (0x0003a4bd) list_single_fp_cale_pane_g3_ParamLimits

0xcb74,	// (0x0003a4bd) list_single_fp_cale_pane_g3

0x1bb2,	// (0x0002f4fb) bg_button_pane_cp012_ParamLimits

0x1bb2,	// (0x0002f4fb) bg_vkb2_func_pane_cp03_ParamLimits

0x19a0,	// (0x0002f2e9) cell_vitu2_function_top_pane_g1_ParamLimits

0x1bb2,	// (0x0002f4fb) bg_vkb2_func_pane_cp04_ParamLimits

0x7bc5,	// (0x0003550e) main_ncimui_button_group_pane_ParamLimits

0x7bc5,	// (0x0003550e) main_ncimui_button_group_pane

0x7c25,	// (0x0003556e) main_ncimui_pane_t3_ParamLimits

0x7c25,	// (0x0003556e) main_ncimui_pane_t3

0xe76e,	// (0x0003c0b7) phacti_button_group_pane

0xea63,	// (0x0003c3ac) aid_size_list_single_double_ParamLimits

0x8ede,	// (0x00036827) popup_ezdial_listscroll_window_ParamLimits

0x8efa,	// (0x00036843) popup_number_entry_window_cp01_ParamLimits

0x8fab,	// (0x000368f4) phacti_button_pane_ParamLimits

0x8fab,	// (0x000368f4) phacti_button_pane

0x9b4b,	// (0x00037494) bg_button_pane_cp14

0xeb71,	// (0x0003c4ba) phacti_button_pane_t1

0x8fbc,	// (0x00036905) main_touch_calib_button_pane_ParamLimits

0x8fbc,	// (0x00036905) main_touch_calib_button_pane

0xa294,	// (0x00037bdd) bg_button_pane_cp18_ParamLimits

0xa294,	// (0x00037bdd) bg_button_pane_cp18

0xeb7f,	// (0x0003c4c8) main_touch_calib_button_pane_t1_ParamLimits

0xeb7f,	// (0x0003c4c8) main_touch_calib_button_pane_t1

0xeb95,	// (0x0003c4de) main_touch_calib_button_pane_t2_ParamLimits

0xeb95,	// (0x0003c4de) main_touch_calib_button_pane_t2

0x0001,

0xfe24,	// (0x0003d76d) main_touch_calib_button_pane_t_ParamLimits

0xfe24,	// (0x0003d76d) main_touch_calib_button_pane_t

0x9b4b,	// (0x00037494) cell_ncimui_button_pane

0x9b4b,	// (0x00037494) bg_button_pane_cp032

0xebb3,	// (0x0003c4fc) cell_ncimui_button_pane_t1

0x63ac,	// (0x00033cf5) image3_infobar_pane_ParamLimits

0x63ac,	// (0x00033cf5) image3_infobar_pane

0x8048,	// (0x00035991) fs_bigclock_status_pane_ParamLimits

0x8048,	// (0x00035991) fs_bigclock_status_pane

0x8055,	// (0x0003599e) main_fs_bigclock_clock_pane_ParamLimits

0x8055,	// (0x0003599e) main_fs_bigclock_clock_pane

0x8073,	// (0x000359bc) main_fs_bigclock_indi_pane_ParamLimits

0x8073,	// (0x000359bc) main_fs_bigclock_indi_pane

0x80a5,	// (0x000359ee) main_fs_bigclock_swipe_pane_ParamLimits

0x80a5,	// (0x000359ee) main_fs_bigclock_swipe_pane

0x9b4b,	// (0x00037494) main_fs_clock_dumped_data

0xe0dc,	// (0x0003ba25) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0dc,	// (0x0003ba25) list_single_fs_bigclock_indicator_pane_g1

0xe0f8,	// (0x0003ba41) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0f8,	// (0x0003ba41) list_single_fs_bigclock_indicator_pane_g2

0xe112,	// (0x0003ba5b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe112,	// (0x0003ba5b) list_single_fs_bigclock_indicator_pane_g3

0xe12c,	// (0x0003ba75) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe12c,	// (0x0003ba75) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5a,	// (0x0003d5a3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5a,	// (0x0003d5a3) list_single_fs_bigclock_indicator_pane_g

0xe157,	// (0x0003baa0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe157,	// (0x0003baa0) list_single_fs_bigclock_indicator_pane_t1

0xe17f,	// (0x0003bac8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe17f,	// (0x0003bac8) list_single_fs_bigclock_indicator_pane_t2

0xe1a7,	// (0x0003baf0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1a7,	// (0x0003baf0) list_single_fs_bigclock_indicator_pane_t3

0xe1cf,	// (0x0003bb18) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1cf,	// (0x0003bb18) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc65,	// (0x0003d5ae) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc65,	// (0x0003d5ae) list_single_fs_bigclock_indicator_pane_t

0xebc1,	// (0x0003c50a) image3_infobar_fav_pane_ParamLimits

0xebc1,	// (0x0003c50a) image3_infobar_fav_pane

0xebd1,	// (0x0003c51a) image3_infobar_loc_pane_ParamLimits

0xebd1,	// (0x0003c51a) image3_infobar_loc_pane

0xebe5,	// (0x0003c52e) image3_infobar_time_pane_ParamLimits

0xebe5,	// (0x0003c52e) image3_infobar_time_pane

0xc7b2,	// (0x0003a0fb) image3_infobar_time_pane_g1

0xebf5,	// (0x0003c53e) image3_infobar_time_pane_t1

0xc7b2,	// (0x0003a0fb) image3_infobar_loc_pane_g1

0xec03,	// (0x0003c54c) image3_infobar_loc_pane_g2

0x0001,

0x02d3,	// (0x0002dc1c) image3_infobar_loc_pane_g

0xec0b,	// (0x0003c554) image3_infobar_loc_pane_t1

0xc7b2,	// (0x0003a0fb) image3_infobar_fav_pane_g1

0xec19,	// (0x0003c562) image3_infobar_fav_pane_g2

0x0001,

0x02d8,	// (0x0002dc21) image3_infobar_fav_pane_g

0xec21,	// (0x0003c56a) fs_bigclock_status_battery_pane

0xec2a,	// (0x0003c573) fs_bigclock_status_signal_pane

0xec33,	// (0x0003c57c) fs_bigclock_status_title_pane

0xec3c,	// (0x0003c585) fs_bigclock_status_signal_pane_g1

0xec45,	// (0x0003c58e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe29,	// (0x0003d772) fs_bigclock_status_signal_pane_g

0xec4d,	// (0x0003c596) fs_bigclock_status_battery_pane_g1

0xec56,	// (0x0003c59f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe2e,	// (0x0003d777) fs_bigclock_status_battery_pane_g

0xec5e,	// (0x0003c5a7) fs_bigclock_status_title_pane_t1

0x8fd1,	// (0x0003691a) main_fs_bigclock_clock_pane_g1

0x8fd1,	// (0x0003691a) main_fs_bigclock_clock_pane_g2

0x8fe2,	// (0x0003692b) main_fs_bigclock_clock_pane_g3

0x8fe2,	// (0x0003692b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe33,	// (0x0003d77c) main_fs_bigclock_clock_pane_g

0x8ff5,	// (0x0003693e) main_fs_bigclock_clock_pane_t1

0x900b,	// (0x00036954) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe3c,	// (0x0003d785) main_fs_bigclock_clock_pane_t

0xec6c,	// (0x0003c5b5) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec6c,	// (0x0003c5b5) list_single_fs_bigclock_indicator_pane

0xec7d,	// (0x0003c5c6) list_single_fs_bigclock_pane_ParamLimits

0xec7d,	// (0x0003c5c6) list_single_fs_bigclock_pane

0xeca3,	// (0x0003c5ec) main_fs_bigclock_indicator_pane_t1

0xecb2,	// (0x0003c5fb) list_single_fs_bigclock_pane_g1

0xecba,	// (0x0003c603) list_single_fs_bigclock_pane_t1

0xc7b2,	// (0x0003a0fb) main_fs_bigclock_swipe_pane_g1

0xecfd,	// (0x0003c646) main_fs_bigclock_swipe_pane_g2

0x0001,

0x02f2,	// (0x0002dc3b) main_fs_bigclock_swipe_pane_g

0xed05,	// (0x0003c64e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed05,	// (0x0003c64e) main_fs_bigclock_swipe_pane_t1

0x3868,	// (0x000311b1) call_type_pane_ParamLimits

0x9b4b,	// (0x00037494) main_btmg_pane

0xe939,	// (0x0003c282) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe939,	// (0x0003c282) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd3,	// (0x0003d71c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd3,	// (0x0003d71c) list_single_cale_mrui_row_pane_g

0xeabd,	// (0x0003c406) list_recal_vselct_arw_lo_pane

0xeac5,	// (0x0003c40e) list_recal_vselct_arw_up_pane

0xeacd,	// (0x0003c416) list_recal_vselct_pane

0x9065,	// (0x000369ae) btmg_button_pane

0x906f,	// (0x000369b8) main_btmg_pane_g1

0x9b4b,	// (0x00037494) bg_button_pane_cp044

0xed22,	// (0x0003c66b) btmg_button_pane_t1

0xc396,	// (0x00039cdf) aid_listscroll_gen

0xa4a7,	// (0x00037df0) main_cntbar_detail_pane

0xe637,	// (0x0003bf80) list_cmail_folder_pane

0xccec,	// (0x0003a635) sp_fs_scroll_pane_cp03_ParamLimits

0x9079,	// (0x000369c2) list_single_fs_dyc_pane_cp01_ParamLimits

0x9079,	// (0x000369c2) list_single_fs_dyc_pane_cp01

0xed30,	// (0x0003c679) aid_size_cmail_indent

0xed39,	// (0x0003c682) list_single_dyc_row_pane_cp01

0x90c2,	// (0x00036a0b) cntbar_detail_list_pane_ParamLimits

0x90c2,	// (0x00036a0b) cntbar_detail_list_pane

0x910e,	// (0x00036a57) main_cntbar_detail_cont_pane_ParamLimits

0x910e,	// (0x00036a57) main_cntbar_detail_cont_pane

0xccec,	// (0x0003a635) scroll_pane_cp032_ParamLimits

0xccec,	// (0x0003a635) scroll_pane_cp032

0x9122,	// (0x00036a6b) cntbar_detail_list_event_pane_ParamLimits

0x9122,	// (0x00036a6b) cntbar_detail_list_event_pane

0x90d2,	// (0x00036a1b) cntbar_detail_list_shct_pane

0xa7c5,	// (0x0003810e) aid_list_gen

0xed42,	// (0x0003c68b) aid_scroll

0xed4b,	// (0x0003c694) aid_size_touch_scroll_bar

0x73f6,	// (0x00034d3f) aid_list_double

0x73e4,	// (0x00034d2d) aid_list_single

0x73e4,	// (0x00034d2d) aid_list_single_lg

0x9132,	// (0x00036a7b) aid_list_z_g_a_sm

0x913a,	// (0x00036a83) aid_list_z_g_d

0x9142,	// (0x00036a8b) aid_txt_z_prm

0x9150,	// (0x00036a99) aid_txt_z_prm_cp01

0x915e,	// (0x00036aa7) aid_txt_z_sec

0x916c,	// (0x00036ab5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x916c,	// (0x00036ab5) main_cntbar_detail_cont_pane_g1

0x9180,	// (0x00036ac9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9180,	// (0x00036ac9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe4d,	// (0x0003d796) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe4d,	// (0x0003d796) main_cntbar_detail_cont_pane_g

0xed54,	// (0x0003c69d) main_cntbar_detail_cont_pane_t1

0xed62,	// (0x0003c6ab) main_cntbar_detail_cont_pane_t2

0xed70,	// (0x0003c6b9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe52,	// (0x0003d79b) main_cntbar_detail_cont_pane_t

0x9190,	// (0x00036ad9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9190,	// (0x00036ad9) cell_cntbar_detail_list_shct_pane

0xed7e,	// (0x0003c6c7) cntbar_detail_list_shct_pane_g1

0xed87,	// (0x0003c6d0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe59,	// (0x0003d7a2) cntbar_detail_list_shct_pane_g

0x91a4,	// (0x00036aed) cntbar_detail_list_event_pane_g1_ParamLimits

0x91a4,	// (0x00036aed) cntbar_detail_list_event_pane_g1

0x91b0,	// (0x00036af9) cntbar_detail_list_event_pane_g2_ParamLimits

0x91b0,	// (0x00036af9) cntbar_detail_list_event_pane_g2

0x0005,

0xfe5e,	// (0x0003d7a7) cntbar_detail_list_event_pane_g_ParamLimits

0xfe5e,	// (0x0003d7a7) cntbar_detail_list_event_pane_g

0x921c,	// (0x00036b65) cntbar_detail_list_event_pane_t1_ParamLimits

0x921c,	// (0x00036b65) cntbar_detail_list_event_pane_t1

0x9231,	// (0x00036b7a) cntbar_detail_list_event_pane_t2_ParamLimits

0x9231,	// (0x00036b7a) cntbar_detail_list_event_pane_t2

0x0002,

0xfe6b,	// (0x0003d7b4) cntbar_detail_list_event_pane_t_ParamLimits

0xfe6b,	// (0x0003d7b4) cntbar_detail_list_event_pane_t

0xc7b2,	// (0x0003a0fb) cell_cntbar_detail_list_shct_pane_g1

0xaf1f,	// (0x00038868) navi_pane_mv_g3

0xa4a7,	// (0x00037df0) main_cntbar_detail_pane_ParamLimits

0x9b4b,	// (0x00037494) main_notif_wgt_pane

0x611e,	// (0x00033a67) aid_tch_main_mp4_pane_g4

0x6300,	// (0x00033c49) popup_slider_window_cp02

0xeab3,	// (0x0003c3fc) list_recal_day_event_pane

0x9090,	// (0x000369d9) cntbar_detail_btn_pane_ParamLimits

0x9090,	// (0x000369d9) cntbar_detail_btn_pane

0x90a9,	// (0x000369f2) cntbar_detail_btn_pane_cp01_ParamLimits

0x90a9,	// (0x000369f2) cntbar_detail_btn_pane_cp01

0x90d2,	// (0x00036a1b) cntbar_detail_list_shct_pane_ParamLimits

0x90e2,	// (0x00036a2b) cntbar_detail_pane_g1_ParamLimits

0x90e2,	// (0x00036a2b) cntbar_detail_pane_g1

0x90f2,	// (0x00036a3b) cntbar_detail_pane_t1_ParamLimits

0x90f2,	// (0x00036a3b) cntbar_detail_pane_t1

0x91bc,	// (0x00036b05) cntbar_detail_list_event_pane_g3_ParamLimits

0x91bc,	// (0x00036b05) cntbar_detail_list_event_pane_g3

0x91d4,	// (0x00036b1d) cntbar_detail_list_event_pane_g4_ParamLimits

0x91d4,	// (0x00036b1d) cntbar_detail_list_event_pane_g4

0x91ec,	// (0x00036b35) cntbar_detail_list_event_pane_g5_ParamLimits

0x91ec,	// (0x00036b35) cntbar_detail_list_event_pane_g5

0x9204,	// (0x00036b4d) cntbar_detail_list_event_pane_g6_ParamLimits

0x9204,	// (0x00036b4d) cntbar_detail_list_event_pane_g6

0x9246,	// (0x00036b8f) cntbar_detail_list_event_pane_t3_ParamLimits

0x9246,	// (0x00036b8f) cntbar_detail_list_event_pane_t3

0x9258,	// (0x00036ba1) popup_notif_wgt_window_ParamLimits

0x9258,	// (0x00036ba1) popup_notif_wgt_window

0x9271,	// (0x00036bba) popup_submenu_window_cp01_ParamLimits

0x9271,	// (0x00036bba) popup_submenu_window_cp01

0xa479,	// (0x00037dc2) bg_popup_window_pane_cp10

0xed90,	// (0x0003c6d9) listscroll_notif_wgt_pane

0xeda2,	// (0x0003c6eb) list_notif_wgt_window

0xedab,	// (0x0003c6f4) scroll_pane_cp033

0x9283,	// (0x00036bcc) list_notif_wgt_row_pane_ParamLimits

0x9283,	// (0x00036bcc) list_notif_wgt_row_pane

0xedb4,	// (0x0003c6fd) aid_size_list_notif_wgt_del

0xedc1,	// (0x0003c70a) list_notif_wgt_row_pane_g1

0xedcd,	// (0x0003c716) list_notif_wgt_row_pane_g2

0xeddc,	// (0x0003c725) list_notif_wgt_row_pane_g3

0x0002,

0xfe72,	// (0x0003d7bb) list_notif_wgt_row_pane_g

0xede9,	// (0x0003c732) list_notif_wgt_row_pane_t1

0xedff,	// (0x0003c748) list_notif_wgt_row_pane_t2

0xee11,	// (0x0003c75a) list_notif_wgt_row_pane_t3

0x0002,

0xfe79,	// (0x0003d7c2) list_notif_wgt_row_pane_t

0xd4fc,	// (0x0003ae45) list_recal_day_event_pane_g1

0xee23,	// (0x0003c76c) list_recal_day_event_pane_t1

0x9b4b,	// (0x00037494) bg_button_pane_cp045

0x9293,	// (0x00036bdc) cntbar_detail_btn_pane_t1

0xc3aa,	// (0x00039cf3) main_callh_pane_ParamLimits

0xc3aa,	// (0x00039cf3) main_callh_pane

0x9b4b,	// (0x00037494) main_coverflow0_pane

0x9b4b,	// (0x00037494) main_wgtman_pane

0x80bd,	// (0x00035a06) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x80bd,	// (0x00035a06) main_fs_bigclock_unlock_btn_pane

0x8aac,	// (0x000363f5) bg_button_pane_cp16

0x8abc,	// (0x00036405) cell_tport_appsw_pane_g3

0x92a1,	// (0x00036bea) cf0_flow_pane_ParamLimits

0x92a1,	// (0x00036bea) cf0_flow_pane

0xee32,	// (0x0003c77b) listscroll_cf0_pane

0xee3d,	// (0x0003c786) main_cf0_pane_g1

0x92b6,	// (0x00036bff) main_cf0_pane_t1_ParamLimits

0x92b6,	// (0x00036bff) main_cf0_pane_t1

0x92cd,	// (0x00036c16) main_cf0_pane_t2_ParamLimits

0x92cd,	// (0x00036c16) main_cf0_pane_t2

0x0001,

0xfe85,	// (0x0003d7ce) main_cf0_pane_t_ParamLimits

0xfe85,	// (0x0003d7ce) main_cf0_pane_t

0xee4f,	// (0x0003c798) scroll_pane_cp11

0x92e4,	// (0x00036c2d) cf0_flow_pane_g1

0x92ec,	// (0x00036c35) cf0_flow_pane_g2

0x0001,

0xfe8a,	// (0x0003d7d3) cf0_flow_pane_g

0x92f4,	// (0x00036c3d) cf0_flow_pane_t1

0x9b4b,	// (0x00037494) main_call6_pane

0x9b4b,	// (0x00037494) main_calllock_pane

0x9302,	// (0x00036c4b) call6_btn_grp_pane_ParamLimits

0x9302,	// (0x00036c4b) call6_btn_grp_pane

0x931c,	// (0x00036c65) call6_pane_g1_ParamLimits

0x931c,	// (0x00036c65) call6_pane_g1

0x9331,	// (0x00036c7a) popup_call6_1st_window_ParamLimits

0x9331,	// (0x00036c7a) popup_call6_1st_window

0x9342,	// (0x00036c8b) popup_call6_2nd_window_ParamLimits

0x9342,	// (0x00036c8b) popup_call6_2nd_window

0x9353,	// (0x00036c9c) cell_call6_btn_pane_ParamLimits

0x9353,	// (0x00036c9c) cell_call6_btn_pane

0xa479,	// (0x00037dc2) bg_popup_call2_in_pane_cp03

0xee5a,	// (0x0003c7a3) popup_call6_1st_window_g1

0xee62,	// (0x0003c7ab) popup_call6_1st_window_g2

0xee6a,	// (0x0003c7b3) popup_call6_1st_window_g3

0x0002,

0xfe8f,	// (0x0003d7d8) popup_call6_1st_window_g

0xee72,	// (0x0003c7bb) popup_call6_1st_window_t1

0xee81,	// (0x0003c7ca) popup_call6_1st_window_t2

0xee91,	// (0x0003c7da) popup_call6_1st_window_t3

0x0002,

0xfe96,	// (0x0003d7df) popup_call6_1st_window_t

0xa479,	// (0x00037dc2) bg_popup_call2_in_pane_cp04

0xee5a,	// (0x0003c7a3) popup_call6_2nd_window_g1

0xee62,	// (0x0003c7ab) popup_call6_2nd_window_g2

0xee6a,	// (0x0003c7b3) popup_call6_2nd_window_g3

0x0002,

0xfe8f,	// (0x0003d7d8) popup_call6_2nd_window_g

0xee72,	// (0x0003c7bb) popup_call6_2nd_window_t1

0x9b4b,	// (0x00037494) bg_button_pane_cp15

0xeea1,	// (0x0003c7ea) cell_call6_btn_pane_g1

0xeeaa,	// (0x0003c7f3) cell_call6_btn_pane_t1

0x9367,	// (0x00036cb0) listscroll_wgtman_pane_ParamLimits

0x9367,	// (0x00036cb0) listscroll_wgtman_pane

0x9388,	// (0x00036cd1) wgtman_btn_pane_ParamLimits

0x9388,	// (0x00036cd1) wgtman_btn_pane

0xad19,	// (0x00038662) aid_scroll_copy1

0xeeb9,	// (0x0003c802) list_wgtman_pane

0x93cb,	// (0x00036d14) wgtman_btn_pane_g1_ParamLimits

0x93cb,	// (0x00036d14) wgtman_btn_pane_g1

0x93f7,	// (0x00036d40) wgtman_btn_pane_t1_ParamLimits

0x93f7,	// (0x00036d40) wgtman_btn_pane_t1

0xeec3,	// (0x0003c80c) wgtman_btn_pane_t2_ParamLimits

0xeec3,	// (0x0003c80c) wgtman_btn_pane_t2

0x0001,

0xfe9d,	// (0x0003d7e6) wgtman_btn_pane_t_ParamLimits

0xfe9d,	// (0x0003d7e6) wgtman_btn_pane_t

0x9434,	// (0x00036d7d) listrow_wgtman_pane_ParamLimits

0x9434,	// (0x00036d7d) listrow_wgtman_pane

0x9446,	// (0x00036d8f) listrow_wgtman_pane_g1

0x9453,	// (0x00036d9c) listrow_wgtman_pane_g2

0x0001,

0xfea2,	// (0x0003d7eb) listrow_wgtman_pane_g

0x9471,	// (0x00036dba) listrow_wgtman_pane_t1

0x9489,	// (0x00036dd2) listrow_wgtman_pane_t2

0x0001,

0xfea7,	// (0x0003d7f0) listrow_wgtman_pane_t

0x94af,	// (0x00036df8) wait_bar_pane_cp09

0xeeda,	// (0x0003c823) main_calllock_btn_pane

0xeee4,	// (0x0003c82d) main_calllock_pane_g1

0x9b4b,	// (0x00037494) bg_button_pane_cp17

0xeeef,	// (0x0003c838) main_calllock_btn_pane_g1

0xeef8,	// (0x0003c841) main_calllock_btn_pane_t1

0x9b4b,	// (0x00037494) main_dialer3_pane

0x9b4b,	// (0x00037494) main_fmrd2_pane

0xc7b2,	// (0x0003a0fb) main_fs_bigclock_unlock_btn_pane_g1

0x94c9,	// (0x00036e12) main_fs_bigclock_unlock_btn_pane_t1

0x94d7,	// (0x00036e20) area_fmrd2_info_pane_ParamLimits

0x94d7,	// (0x00036e20) area_fmrd2_info_pane

0x94e8,	// (0x00036e31) area_fmrd2_visual_pane_ParamLimits

0x94e8,	// (0x00036e31) area_fmrd2_visual_pane

0x94f6,	// (0x00036e3f) fmrd2_indi_pane_ParamLimits

0x94f6,	// (0x00036e3f) fmrd2_indi_pane

0x9503,	// (0x00036e4c) area_fmrd2_visual_pane_g1

0x950b,	// (0x00036e54) area_fmrd2_visual_pane_t1

0x951b,	// (0x00036e64) area_fmrd2_visual_pane_t2

0x952b,	// (0x00036e74) area_fmrd2_visual_pane_t3

0x0002,

0xfeb1,	// (0x0003d7fa) area_fmrd2_visual_pane_t

0x953b,	// (0x00036e84) area_fmrd2_info_pane_g1

0x9543,	// (0x00036e8c) area_fmrd2_info_pane_t1

0x9553,	// (0x00036e9c) area_fmrd2_info_pane_t2

0x9563,	// (0x00036eac) area_fmrd2_info_pane_t3

0x9573,	// (0x00036ebc) area_fmrd2_info_pane_t4

0x0003,

0xfeb8,	// (0x0003d801) area_fmrd2_info_pane_t

0x9581,	// (0x00036eca) fmrd2_indi_pane_t1

0x9591,	// (0x00036eda) fmrd2_indi_pane_t2

0x95a1,	// (0x00036eea) fmrd2_indi_pane_t3

0x0002,

0xfec1,	// (0x0003d80a) fmrd2_indi_pane_t

0xe13b,	// (0x0003ba84) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe13b,	// (0x0003ba84) list_single_fs_bigclock_indicator_pane_g5

0xe1ec,	// (0x0003bb35) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1ec,	// (0x0003bb35) list_single_fs_bigclock_indicator_pane_t5

0x8c49,	// (0x00036592) aid_cell_bcale_month_pane_ParamLimits

0x8c49,	// (0x00036592) aid_cell_bcale_month_pane

0x8c67,	// (0x000365b0) bcale_month_pane_ParamLimits

0x8c67,	// (0x000365b0) bcale_month_pane

0x8c8b,	// (0x000365d4) bcale_preview_pane_ParamLimits

0x8c8b,	// (0x000365d4) bcale_preview_pane

0xecba,	// (0x0003c603) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd9,	// (0x0003c622) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd9,	// (0x0003c622) list_single_fs_bigclock_pane_t2

0x0001,

0xfe48,	// (0x0003d791) list_single_fs_bigclock_pane_t_ParamLimits

0xfe48,	// (0x0003d791) list_single_fs_bigclock_pane_t

0x94c1,	// (0x00036e0a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeac,	// (0x0003d7f5) main_fs_bigclock_unlock_btn_pane_g

0x95b1,	// (0x00036efa) aid_dia3_key_size_ParamLimits

0x95b1,	// (0x00036efa) aid_dia3_key_size

0x95c0,	// (0x00036f09) aid_dia3_listrow_size_ParamLimits

0x95c0,	// (0x00036f09) aid_dia3_listrow_size

0x95d5,	// (0x00036f1e) dia3_keypad_fun_pane_ParamLimits

0x95d5,	// (0x00036f1e) dia3_keypad_fun_pane

0x95f1,	// (0x00036f3a) dia3_keypad_num_pane_ParamLimits

0x95f1,	// (0x00036f3a) dia3_keypad_num_pane

0x960c,	// (0x00036f55) dia3_listscroll_pane_ParamLimits

0x960c,	// (0x00036f55) dia3_listscroll_pane

0x961f,	// (0x00036f68) dia3_numentry_pane_ParamLimits

0x961f,	// (0x00036f68) dia3_numentry_pane

0xef07,	// (0x0003c850) dia3_list_pane

0xef12,	// (0x0003c85b) scroll_pane_cp12

0x9b4b,	// (0x00037494) bg_dia3_numentry_pane

0x9633,	// (0x00036f7c) dia3_numentry_pane_t1

0x9642,	// (0x00036f8b) cell_dia3_key_num_pane

0x964a,	// (0x00036f93) cell_dia3_key0_fun_pane_ParamLimits

0x964a,	// (0x00036f93) cell_dia3_key0_fun_pane

0x965e,	// (0x00036fa7) cell_dia3_key1_fun_pane_ParamLimits

0x965e,	// (0x00036fa7) cell_dia3_key1_fun_pane

0x9676,	// (0x00036fbf) dia3_listrow_pane

0xde7c,	// (0x0003b7c5) bg_dia3_numentry_pane_g1

0x9b4b,	// (0x00037494) bg_button_pane_cp21

0xef1d,	// (0x0003c866) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0003c874) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0003c883) cell_dia3_key_num_pane_t3

0xef49,	// (0x0003c892) cell_dia3_key_num_pane_t4

0x0003,

0xfec8,	// (0x0003d811) cell_dia3_key_num_pane_t

0x9b4b,	// (0x00037494) bg_button_pane_cp19

0x9688,	// (0x00036fd1) cell_dia3_key0_fun_pane_g1

0x9b4b,	// (0x00037494) bg_button_pane_cp20

0x9690,	// (0x00036fd9) cell_dia3_key1_fun_pane_g1

0x9698,	// (0x00036fe1) area_left_week_number_pane

0x96a4,	// (0x00036fed) area_top_day_name_pane

0x96b7,	// (0x00037000) frame_month_view_pane

0xef58,	// (0x0003c8a1) grid_month_view_pane

0x96ca,	// (0x00037013) cell_top_day_name_pane_ParamLimits

0x96ca,	// (0x00037013) cell_top_day_name_pane

0x96f7,	// (0x00037040) cell_area_left_week_number_pane_ParamLimits

0x96f7,	// (0x00037040) cell_area_left_week_number_pane

0x970b,	// (0x00037054) cell_month_view_pane_ParamLimits

0x970b,	// (0x00037054) cell_month_view_pane

0xef66,	// (0x0003c8af) frm_month_g1

0x9738,	// (0x00037081) frm_month_g2

0x974b,	// (0x00037094) frm_month_g3

0x975e,	// (0x000370a7) frm_month_g4

0x9771,	// (0x000370ba) frm_month_g5

0x9784,	// (0x000370cd) frm_month_g6

0x9797,	// (0x000370e0) frm_month_g7

0xef73,	// (0x0003c8bc) frm_month_g8

0x97aa,	// (0x000370f3) frm_month_g9

0x97ba,	// (0x00037103) frm_month_g10

0x97ca,	// (0x00037113) frm_month_g11

0x97da,	// (0x00037123) frm_month_g12

0x97ec,	// (0x00037135) frm_month_g13

0x97fe,	// (0x00037147) frm_month_g14

0x9812,	// (0x0003715b) frm_month_g15

0x9826,	// (0x0003716f) frm_month_g16

0x000f,

0xfed1,	// (0x0003d81a) frm_month_g

0xef80,	// (0x0003c8c9) cell_top_day_name_pane_t1

0x983a,	// (0x00037183) cell_area_left_week_number_pane_g1

0x9846,	// (0x0003718f) cell_area_left_week_number_pane_t1

0xca00,	// (0x0003a349) cell_month_view_pane_g1

0x9859,	// (0x000371a2) cell_month_view_pane_t1

0x9b4b,	// (0x00037494) main_fps_pane

0xe3f7,	// (0x0003bd40) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3f7,	// (0x0003bd40) cmail_ddmenu_btn02_pane_cp1

0xe413,	// (0x0003bd5c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe413,	// (0x0003bd5c) cmail_ddmenu_btn02_pane_cp2

0x8f2c,	// (0x00036875) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f2c,	// (0x00036875) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe05,	// (0x0003d74e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe05,	// (0x0003d74e) cmail_ddmenu_btn02_pane_g

0x8f4b,	// (0x00036894) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f4b,	// (0x00036894) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe0a,	// (0x0003d753) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe0a,	// (0x0003d753) cmail_ddmenu_btn02_pane_t

0x986c,	// (0x000371b5) fps_text_pane_ParamLimits

0x986c,	// (0x000371b5) fps_text_pane

0x9883,	// (0x000371cc) main_fps_pane_g1_ParamLimits

0x9883,	// (0x000371cc) main_fps_pane_g1

0x989d,	// (0x000371e6) wait_bar_pane_cp010_ParamLimits

0x989d,	// (0x000371e6) wait_bar_pane_cp010

0x98ae,	// (0x000371f7) fps_text_pane_t1_ParamLimits

0x98ae,	// (0x000371f7) fps_text_pane_t1

0xe0bc,	// (0x0003ba05) cam4_image_uncrop_pane_g1

0xe0c5,	// (0x0003ba0e) cam4_image_uncrop_pane_g2

0x6548,	// (0x00033e91) cam4_image_uncrop_pane_g3

0x6551,	// (0x00033e9a) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0003d24a) cam4_image_uncrop_pane_g

0x9676,	// (0x00036fbf) dia3_listrow_pane_ParamLimits

0x9b4b,	// (0x00037494) main_phob2_pane

0x8a7d,	// (0x000363c6) cell_tport_appsw_pane_cp02_ParamLimits

0x8a7d,	// (0x000363c6) cell_tport_appsw_pane_cp02

0x8a91,	// (0x000363da) cell_tport_appsw_pane_cp03_ParamLimits

0x8a91,	// (0x000363da) cell_tport_appsw_pane_cp03

0x9b4b,	// (0x00037494) phob2_contact_card_pane

0x9b4b,	// (0x00037494) phob2_listscroll_pane

0xef93,	// (0x0003c8dc) phob2_list_pane

0xef9b,	// (0x0003c8e4) scroll_pane_cp034

0x98c6,	// (0x0003720f) phob2_cc_data_pane_ParamLimits

0x98c6,	// (0x0003720f) phob2_cc_data_pane

0x98e5,	// (0x0003722e) phob2_cc_listscroll_pane_ParamLimits

0x98e5,	// (0x0003722e) phob2_cc_listscroll_pane

0x9434,	// (0x00036d7d) list_double_large_graphic_phob2_pane_ParamLimits

0x9434,	// (0x00036d7d) list_double_large_graphic_phob2_pane

0x9903,	// (0x0003724c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9903,	// (0x0003724c) list_double_large_graphic_phob2_pane_g1

0x9919,	// (0x00037262) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9919,	// (0x00037262) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfef2,	// (0x0003d83b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfef2,	// (0x0003d83b) list_double_large_graphic_phob2_pane_g

0x9925,	// (0x0003726e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9925,	// (0x0003726e) list_double_large_graphic_phob2_pane_t1

0x993b,	// (0x00037284) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x993b,	// (0x00037284) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfef7,	// (0x0003d840) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfef7,	// (0x0003d840) list_double_large_graphic_phob2_pane_t

0x9b4b,	// (0x00037494) list_highlight_pane_cp024

0x9950,	// (0x00037299) phob2_cc_button_pane

0x9958,	// (0x000372a1) phob2_cc_data_pane_g1_ParamLimits

0x9958,	// (0x000372a1) phob2_cc_data_pane_g1

0x996d,	// (0x000372b6) phob2_cc_data_pane_g2_ParamLimits

0x996d,	// (0x000372b6) phob2_cc_data_pane_g2

0x0001,

0xfefc,	// (0x0003d845) phob2_cc_data_pane_g_ParamLimits

0xfefc,	// (0x0003d845) phob2_cc_data_pane_g

0x997d,	// (0x000372c6) phob2_cc_data_pane_t1_ParamLimits

0x997d,	// (0x000372c6) phob2_cc_data_pane_t1

0x9995,	// (0x000372de) phob2_cc_data_pane_t2_ParamLimits

0x9995,	// (0x000372de) phob2_cc_data_pane_t2

0x99ad,	// (0x000372f6) phob2_cc_data_pane_t3_ParamLimits

0x99ad,	// (0x000372f6) phob2_cc_data_pane_t3

0x0002,

0xff01,	// (0x0003d84a) phob2_cc_data_pane_t_ParamLimits

0xff01,	// (0x0003d84a) phob2_cc_data_pane_t

0xefa3,	// (0x0003c8ec) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0003c8ec) phob2_cc_list_pane

0xd593,	// (0x0003aedc) scroll_pane_cp035_ParamLimits

0xd593,	// (0x0003aedc) scroll_pane_cp035

0xa4a7,	// (0x00037df0) bg_button_pane_cp033

0xefaf,	// (0x0003c8f8) phob2_cc_button_pane_g1

0xefbb,	// (0x0003c904) phob2_cc_button_pane_t1

0xefd0,	// (0x0003c919) phob2_cc_button_pane_t2

0x0001,

0xff08,	// (0x0003d851) phob2_cc_button_pane_t

0x99c5,	// (0x0003730e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99c5,	// (0x0003730e) list_double_large_graphic_phob2_cc_pane

0x99d8,	// (0x00037321) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99d8,	// (0x00037321) list_double_large_graphic_phob2_cc_pane_g1

0xefe2,	// (0x0003c92b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefe2,	// (0x0003c92b) list_double_large_graphic_phob2_cc_pane_g2

0x99e4,	// (0x0003732d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99e4,	// (0x0003732d) list_double_large_graphic_phob2_cc_pane_g3

0x99f0,	// (0x00037339) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99f0,	// (0x00037339) list_double_large_graphic_phob2_cc_pane_g4

0x99fc,	// (0x00037345) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99fc,	// (0x00037345) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff0d,	// (0x0003d856) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff0d,	// (0x0003d856) list_double_large_graphic_phob2_cc_pane_g

0x9a08,	// (0x00037351) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a08,	// (0x00037351) list_double_large_graphic_phob2_cc_pane_t1

0x9a31,	// (0x0003737a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a31,	// (0x0003737a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff18,	// (0x0003d861) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff18,	// (0x0003d861) list_double_large_graphic_phob2_cc_pane_t

0xefee,	// (0x0003c937) list_highlight_pane_cp025_ParamLimits

0xefee,	// (0x0003c937) list_highlight_pane_cp025

0xa4a7,	// (0x00037df0) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0003c8f8) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0003c904) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0003c919) phob2_cc_button_pane_t2_ParamLimits

0xff08,	// (0x0003d851) phob2_cc_button_pane_t_ParamLimits

0x1bc0,	// (0x0002f509) popup_wgtman_window

0xd3b2,	// (0x0003acfb) scroll_pane_cp038

0x93ad,	// (0x00036cf6) wgtman_btn_pane_cp_01_ParamLimits

0x93ad,	// (0x00036cf6) wgtman_btn_pane_cp_01

0xeffc,	// (0x0003c945) wgtman_content_pane

0xf005,	// (0x0003c94e) wgtman_heading_pane

0x9b4b,	// (0x00037494) bg_heading_pane_cp02

0xf00e,	// (0x0003c957) wgtman_heading_pane_g1

0xf016,	// (0x0003c95f) wgtman_heading_pane_t1

0xf024,	// (0x0003c96d) scroll_pane_cp036

0xf02c,	// (0x0003c975) wgtman_list_pane

0xe2d7,	// (0x0003bc20) wgtman_list_pane_t1_ParamLimits

0xe2d7,	// (0x0003bc20) wgtman_list_pane_t1

0x6534,	// (0x00033e7d) cam4_grid_pane

0x6f11,	// (0x0003485a) bg_button_pane_cp015_ParamLimits

0x6f25,	// (0x0003486e) bg_button_pane_cp016_ParamLimits

0x6f38,	// (0x00034881) bg_button_pane_cp017_ParamLimits

0x6f90,	// (0x000348d9) popup_vitu2_query_window_g3_ParamLimits

0x6f90,	// (0x000348d9) popup_vitu2_query_window_g3

0x704d,	// (0x00034996) popup_vitu2_query_window_t6_ParamLimits

0x704d,	// (0x00034996) popup_vitu2_query_window_t6

0x7078,	// (0x000349c1) popup_vitu2_query_window_t7_ParamLimits

0x7078,	// (0x000349c1) popup_vitu2_query_window_t7

0xe0bc,	// (0x0003ba05) cam4_grid_pane_g1

0xe0c5,	// (0x0003ba0e) cam4_grid_pane_g2

0xf034,	// (0x0003c97d) cam4_grid_pane_g3

0xf03d,	// (0x0003c986) cam4_grid_pane_g4

0x0003,

0xff1d,	// (0x0003d866) cam4_grid_pane_g

0x2931,	// (0x0003027a) aid_placing_vt_slider_lsc_ParamLimits

0x2c2e,	// (0x00030577) vidtel_button_pane_ParamLimits

0x2c2e,	// (0x00030577) vidtel_button_pane

0x9b4b,	// (0x00037494) bg_button_pane_cp034

0x9a5a,	// (0x000373a3) vidtel_button_pane_g1

0xf048,	// (0x0003c991) vidtel_button_pane_t1

0xd4cc,	// (0x0003ae15) aid_size_vtel_slider_touch

0xd593,	// (0x0003aedc) scroll_pane_cp039

0x7da3,	// (0x000356ec) ncim_query_button_pane_cp01_ParamLimits

0x7dc2,	// (0x0003570b) ncimui_query_pane_g1_ParamLimits

0xa4a7,	// (0x00037df0) input_focus_pane_cp012_ParamLimits

0xdec2,	// (0x0003b80b) ncim_query_entry_pane_t1_ParamLimits

0xd593,	// (0x0003aedc) scroll_pane_cp039_ParamLimits

0xadf0,	// (0x00038739) navi_pane_bcale_mc_g1

0xadf8,	// (0x00038741) navi_pane_bcale_mc_t1

0xe45c,	// (0x0003bda5) main_sp_fs_email_pane_g1

0xe468,	// (0x0003bdb1) main_sp_fs_email_pane_g2

0x0001,

0xfccb,	// (0x0003d614) main_sp_fs_email_pane_g

0xe945,	// (0x0003c28e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe945,	// (0x0003c28e) list_single_cale_mrui_row_pane_g3

0x8f6b,	// (0x000368b4) list_single_recal_day_pane_g5_event_pane

0xeb24,	// (0x0003c46d) list_single_recal_day_pane_g7

0xf05e,	// (0x0003c9a7) list_recal_day_event_pane_cp01

0xf067,	// (0x0003c9b0) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0003c9b8) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0003c9c0) list_recal_vselct_pane_cp01

0xd4fc,	// (0x0003ae45) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0003c9ca) list_recal_day_event_pane_cp01_t1

0xeb2c,	// (0x0003c475) list_single_recal_day_pane_t1_ParamLimits

0xeb3e,	// (0x0003c487) list_single_recal_day_pane_t2_ParamLimits

0xfe1a,	// (0x0003d763) list_single_recal_day_pane_t_ParamLimits

0xa1c3,	// (0x00037b0c) bg_notes_pane_ParamLimits

0xa272,	// (0x00037bbb) list_notes_pane_ParamLimits

0x1e2d,	// (0x0002f776) scroll_pane_cp06_ParamLimits

0xa294,	// (0x00037bdd) main_notes_pane_ParamLimits

0x9b4b,	// (0x00037494) main_welc_pane

0x9a62,	// (0x000373ab) main_welc_body_pane_ParamLimits

0x9a62,	// (0x000373ab) main_welc_body_pane

0x9a7f,	// (0x000373c8) main_welc_opti_pane_ParamLimits

0x9a7f,	// (0x000373c8) main_welc_opti_pane

0x9ac4,	// (0x0003740d) main_welc_pane_t1_ParamLimits

0x9ac4,	// (0x0003740d) main_welc_pane_t1

0x9ae2,	// (0x0003742b) main_welc_body_row_pane_ParamLimits

0x9ae2,	// (0x0003742b) main_welc_body_row_pane

0xd6c7,	// (0x0003b010) main_welc_opti_row_pane_ParamLimits

0xd6c7,	// (0x0003b010) main_welc_opti_row_pane

0xf08f,	// (0x0003c9d8) main_welc_opti_row_pane_g1

0x9af7,	// (0x00037440) main_welc_opti_row_pane_t1

0xf097,	// (0x0003c9e0) main_welc_body_row_pane_t1

0xed9a,	// (0x0003c6e3) popup_notif_wgt_heading_pane

0xedb4,	// (0x0003c6fd) aid_size_list_notif_wgt_del_ParamLimits

0xedc1,	// (0x0003c70a) list_notif_wgt_row_pane_g1_ParamLimits

0xedcd,	// (0x0003c716) list_notif_wgt_row_pane_g2_ParamLimits

0xeddc,	// (0x0003c725) list_notif_wgt_row_pane_g3_ParamLimits

0xfe72,	// (0x0003d7bb) list_notif_wgt_row_pane_g_ParamLimits

0xede9,	// (0x0003c732) list_notif_wgt_row_pane_t1_ParamLimits

0xedff,	// (0x0003c748) list_notif_wgt_row_pane_t2_ParamLimits

0xee11,	// (0x0003c75a) list_notif_wgt_row_pane_t3_ParamLimits

0xfe79,	// (0x0003d7c2) list_notif_wgt_row_pane_t_ParamLimits

0x9446,	// (0x00036d8f) listrow_wgtman_pane_g1_ParamLimits

0x9453,	// (0x00036d9c) listrow_wgtman_pane_g2_ParamLimits

0xfea2,	// (0x0003d7eb) listrow_wgtman_pane_g_ParamLimits

0x9471,	// (0x00036dba) listrow_wgtman_pane_t1_ParamLimits

0x9489,	// (0x00036dd2) listrow_wgtman_pane_t2_ParamLimits

0xfea7,	// (0x0003d7f0) listrow_wgtman_pane_t_ParamLimits

0x94af,	// (0x00036df8) wait_bar_pane_cp09_ParamLimits

0x9b4b,	// (0x00037494) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003c9ef) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0003c9f7) popup_notif_wgt_heading_pane_t1

0x9b4b,	// (0x00037494) main_vids_pane

0x9b4b,	// (0x00037494) vids_listscroll_pane

0x9b06,	// (0x0003744f) scroll_pane_cp040

0x9b4b,	// (0x00037494) vids_list_pane

0x9b11,	// (0x0003745a) vids_list_double_pane_ParamLimits

0x9b11,	// (0x0003745a) vids_list_double_pane

0x9b22,	// (0x0003746b) vids_list_double_pane_g1

0x9b2b,	// (0x00037474) vids_list_double_pane_t1

0x9b3b,	// (0x00037484) vids_list_double_pane_t2

0x0001,

0xff2b,	// (0x0003d874) vids_list_double_pane_t

0x1bb2,	// (0x0002f4fb) main_ncimui_pane_ParamLimits

0x7bd9,	// (0x00035522) main_ncimui_pane_g1_ParamLimits

0x7be5,	// (0x0003552e) main_ncimui_pane_g2_ParamLimits

0x7be5,	// (0x0003552e) main_ncimui_pane_g2

0x0001,

0xfbe7,	// (0x0003d530) main_ncimui_pane_g_ParamLimits

0xfbe7,	// (0x0003d530) main_ncimui_pane_g

0x9a9a,	// (0x000373e3) main_welc_pane_g1_ParamLimits

0x9a9a,	// (0x000373e3) main_welc_pane_g1

0x9aaf,	// (0x000373f8) main_welc_pane_g2_ParamLimits

0x9aaf,	// (0x000373f8) main_welc_pane_g2

0x0001,

0xff26,	// (0x0003d86f) main_welc_pane_g_ParamLimits

0xff26,	// (0x0003d86f) main_welc_pane_g

0xa1c3,	// (0x00037b0c) listscroll_mce_pane_ParamLimits

0xaf5f,	// (0x000388a8) wait_bar_pane_cp10

0xc39e,	// (0x00039ce7) main_cale_day_pane_ParamLimits

0xc39e,	// (0x00039ce7) main_cale_week_pane_ParamLimits

0xa1c3,	// (0x00037b0c) main_messa_pane_ParamLimits

0x5afe,	// (0x00033447) main_clock2_btn_pane_ParamLimits

0x5afe,	// (0x00033447) main_clock2_btn_pane

0xcbfc,	// (0x0003a545) main_clock2_btn_pane_cp01_ParamLimits

0xcbfc,	// (0x0003a545) main_clock2_btn_pane_cp01

0xe8d1,	// (0x0003c21a) list_cale_mrui_pane_ParamLimits

0xee47,	// (0x0003c790) main_cf0_pane_g2

0x0001,

0xfe80,	// (0x0003d7c9) main_cf0_pane_g

0x9698,	// (0x00036fe1) area_left_week_number_pane_ParamLimits

0x96a4,	// (0x00036fed) area_top_day_name_pane_ParamLimits

0x96b7,	// (0x00037000) frame_month_view_pane_ParamLimits

0xef58,	// (0x0003c8a1) grid_month_view_pane_ParamLimits

0xef66,	// (0x0003c8af) frm_month_g1_ParamLimits

0x9738,	// (0x00037081) frm_month_g2_ParamLimits

0x974b,	// (0x00037094) frm_month_g3_ParamLimits

0x975e,	// (0x000370a7) frm_month_g4_ParamLimits

0x9771,	// (0x000370ba) frm_month_g5_ParamLimits

0x9784,	// (0x000370cd) frm_month_g6_ParamLimits

0x9797,	// (0x000370e0) frm_month_g7_ParamLimits

0xef73,	// (0x0003c8bc) frm_month_g8_ParamLimits

0x97aa,	// (0x000370f3) frm_month_g9_ParamLimits

0x97ba,	// (0x00037103) frm_month_g10_ParamLimits

0x97ca,	// (0x00037113) frm_month_g11_ParamLimits

0x97da,	// (0x00037123) frm_month_g12_ParamLimits

0x97ec,	// (0x00037135) frm_month_g13_ParamLimits

0x97fe,	// (0x00037147) frm_month_g14_ParamLimits

0x9812,	// (0x0003715b) frm_month_g15_ParamLimits

0x9826,	// (0x0003716f) frm_month_g16_ParamLimits

0xfed1,	// (0x0003d81a) frm_month_g_ParamLimits

0xef80,	// (0x0003c8c9) cell_top_day_name_pane_t1_ParamLimits

0x983a,	// (0x00037183) cell_area_left_week_number_pane_g1_ParamLimits

0x9846,	// (0x0003718f) cell_area_left_week_number_pane_t1_ParamLimits

0xca00,	// (0x0003a349) cell_month_view_pane_g1_ParamLimits

0x9859,	// (0x000371a2) cell_month_view_pane_t1_ParamLimits

0xa1bb,	// (0x00037b04) main_clock2_btn_pane_g1

0xf0bc,	// (0x0003ca05) main_clock2_btn_pane_t1

0xa4a7,	// (0x00037df0) listscroll_cmail_pane_ParamLimits

0xe45c,	// (0x0003bda5) main_sp_fs_email_pane_g1_ParamLimits

0xe468,	// (0x0003bdb1) main_sp_fs_email_pane_g2_ParamLimits

0xfccb,	// (0x0003d614) main_sp_fs_email_pane_g_ParamLimits

0xea94,	// (0x0003c3dd) list_recal_day_pane_ParamLimits

0xeaa5,	// (0x0003c3ee) mian_recal_day_pane_t1

0x873d,	// (0x00036086) list_single_dyc_row_text_pane_t4_ParamLimits

0x873d,	// (0x00036086) list_single_dyc_row_text_pane_t4

0x8786,	// (0x000360cf) list_single_dyc_row_text_pane_t5_ParamLimits

0x8786,	// (0x000360cf) list_single_dyc_row_text_pane_t5

0xe50a,	// (0x0003be53) list_single_dyc_row_text_pane_t6_ParamLimits

0xe50a,	// (0x0003be53) list_single_dyc_row_text_pane_t6

0x36dc,	// (0x00031025) aid_mgn_list_cale_time_pane

0x1bb2,	// (0x0002f4fb) main_gallery2_pane_ParamLimits

0xcc12,	// (0x0003a55b) main_clock2_pane_cp01_t1

0xcc20,	// (0x0003a569) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0003d120) main_clock2_pane_cp01_t

0x2195,	// (0x0002fade) cale_week_scroll_pane_g16_ParamLimits

0x2195,	// (0x0002fade) cale_week_scroll_pane_g16

0xa479,	// (0x00037dc2) vorec_slider_pane

0xf048,	// (0x0003c991) vidtel_button_pane_t1_ParamLimits

0x8fd1,	// (0x0003691a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8fd1,	// (0x0003691a) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8fe2,	// (0x0003692b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8fe2,	// (0x0003692b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe33,	// (0x0003d77c) main_fs_bigclock_clock_pane_g_ParamLimits

0x8ff5,	// (0x0003693e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x900b,	// (0x00036954) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe3c,	// (0x0003d785) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
