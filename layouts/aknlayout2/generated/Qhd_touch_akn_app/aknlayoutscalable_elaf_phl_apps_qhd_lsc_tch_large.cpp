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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007540d };

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
0x1480,	// (0x0007688d) Screen

0x148c,	// (0x00076899) application_window

0x14c8,	// (0x000768d5) area_bottom_pane_ParamLimits

0x14c8,	// (0x000768d5) area_bottom_pane

0x1501,	// (0x0007690e) area_top_pane_ParamLimits

0x1501,	// (0x0007690e) area_top_pane

0xa9f7,	// (0x0007fe04) call_video_uplink_pane_ParamLimits

0xa9f7,	// (0x0007fe04) call_video_uplink_pane

0x1576,	// (0x00076983) main_pane_ParamLimits

0x1576,	// (0x00076983) main_pane

0xbc43,	// (0x00081050) context_pane

0x5c6a,	// (0x0007b077) navi_pane

0x5c92,	// (0x0007b09f) popup_cale_events_window_ParamLimits

0x5c92,	// (0x0007b09f) popup_cale_events_window

0xbc56,	// (0x00081063) popup_mup_playback_window

0x5caa,	// (0x0007b0b7) signal_pane

0x2138,	// (0x00077545) main_browser_pane

0x4725,	// (0x00079b32) main_burst_pane

0x59bc,	// (0x0007adc9) main_calc_pane

0x4725,	// (0x00079b32) main_cale_day_pane

0x2138,	// (0x00077545) main_cale_month_pane

0x4725,	// (0x00079b32) main_cale_week_pane

0x4725,	// (0x00079b32) main_call_pane

0x1b63,	// (0x00076f70) main_call_poc_pane

0x4725,	// (0x00079b32) main_camera_pane

0x4725,	// (0x00079b32) main_chi_dic_pane

0x428e,	// (0x0007969b) main_clock_pane

0x1b63,	// (0x00076f70) main_fmradio_pane

0x4725,	// (0x00079b32) main_graph_messa_pane

0x1b63,	// (0x00076f70) main_help_pane

0x2138,	// (0x00077545) main_im_pane

0x1dbe,	// (0x000771cb) main_image_pane_ParamLimits

0x1dbe,	// (0x000771cb) main_image_pane

0x1b63,	// (0x00076f70) main_location2_pane

0x4725,	// (0x00079b32) main_location_pane

0x1b63,	// (0x00076f70) main_messa_pane

0x1b63,	// (0x00076f70) main_mp2_pane

0x4725,	// (0x00079b32) main_mp_pane

0x1b63,	// (0x00076f70) main_msg_pane

0x1b63,	// (0x00076f70) main_mup_eq_pane

0x1b63,	// (0x00076f70) main_mup_pane

0x2138,	// (0x00077545) main_notes_pane

0x1b63,	// (0x00076f70) main_pec_pane

0x1b63,	// (0x00076f70) main_phob_pane

0x1b63,	// (0x00076f70) main_pinb_pane

0x1b63,	// (0x00076f70) main_postcard_pane

0x1b63,	// (0x00076f70) main_qdial_pane

0x4725,	// (0x00079b32) main_skin_pane

0x1b63,	// (0x00076f70) main_smil2_pane

0x4725,	// (0x00079b32) main_smil_pane

0x4725,	// (0x00079b32) main_video_pane

0x4725,	// (0x00079b32) main_video_tele_pane

0x1dbe,	// (0x000771cb) main_viewer_pane_ParamLimits

0x1dbe,	// (0x000771cb) main_viewer_pane

0x4725,	// (0x00079b32) main_vorec_pane

0x5a10,	// (0x0007ae1d) popup_blid_sat_info_window_ParamLimits

0x5a10,	// (0x0007ae1d) popup_blid_sat_info_window

0x5a68,	// (0x0007ae75) popup_dyc_status_message_window_ParamLimits

0x5a68,	// (0x0007ae75) popup_dyc_status_message_window

0x5a82,	// (0x0007ae8f) popup_grid_large_graphic_window_ParamLimits

0x5a82,	// (0x0007ae8f) popup_grid_large_graphic_window

0x5b3e,	// (0x0007af4b) popup_loc_request_window_ParamLimits

0x5b3e,	// (0x0007af4b) popup_loc_request_window

0x5c42,	// (0x0007b04f) popup_wml_address_window_ParamLimits

0x5c42,	// (0x0007b04f) popup_wml_address_window

0x57f6,	// (0x0007ac03) call_muted_g1

0x53fb,	// (0x0007a808) popup_call_audio_conf_window_ParamLimits

0x53fb,	// (0x0007a808) popup_call_audio_conf_window

0x580a,	// (0x0007ac17) popup_call_audio_first_window_ParamLimits

0x580a,	// (0x0007ac17) popup_call_audio_first_window

0x5880,	// (0x0007ac8d) popup_call_audio_in_window_ParamLimits

0x5880,	// (0x0007ac8d) popup_call_audio_in_window

0x58bc,	// (0x0007acc9) popup_call_audio_out_window_ParamLimits

0x58bc,	// (0x0007acc9) popup_call_audio_out_window

0x58f6,	// (0x0007ad03) popup_call_audio_second_window_ParamLimits

0x58f6,	// (0x0007ad03) popup_call_audio_second_window

0x594c,	// (0x0007ad59) popup_call_audio_wait_window_ParamLimits

0x594c,	// (0x0007ad59) popup_call_audio_wait_window

0x5981,	// (0x0007ad8e) popup_number_entry_window_ParamLimits

0x5981,	// (0x0007ad8e) popup_number_entry_window

0x16f8,	// (0x00076b05) bg_popup_call_pane_cp05_ParamLimits

0x16f8,	// (0x00076b05) bg_popup_call_pane_cp05

0x1718,	// (0x00076b25) popup_number_entry_window_t1

0x172b,	// (0x00076b38) popup_number_entry_window_t2

0x173d,	// (0x00076b4a) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x000844e5) popup_number_entry_window_t

0x1783,	// (0x00076b90) text_title_cp2

0x1796,	// (0x00076ba3) bg_popup_call_pane_cp_ParamLimits

0x1796,	// (0x00076ba3) bg_popup_call_pane_cp

0x17a4,	// (0x00076bb1) call_thumbnail_pane

0x17ac,	// (0x00076bb9) popup_call_audio_in_window_g1_ParamLimits

0x17ac,	// (0x00076bb9) popup_call_audio_in_window_g1

0x17b8,	// (0x00076bc5) popup_call_audio_in_window_g2_ParamLimits

0x17b8,	// (0x00076bc5) popup_call_audio_in_window_g2

0x17c4,	// (0x00076bd1) popup_call_audio_in_window_g3_ParamLimits

0x17c4,	// (0x00076bd1) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x000844ee) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x000844ee) popup_call_audio_in_window_g

0x17d0,	// (0x00076bdd) popup_call_audio_in_window_t1_ParamLimits

0x17d0,	// (0x00076bdd) popup_call_audio_in_window_t1

0x17ec,	// (0x00076bf9) popup_call_audio_in_window_t2_ParamLimits

0x17ec,	// (0x00076bf9) popup_call_audio_in_window_t2

0x1808,	// (0x00076c15) popup_call_audio_in_window_t3_ParamLimits

0x1808,	// (0x00076c15) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x000844f5) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x000844f5) popup_call_audio_in_window_t

0x1796,	// (0x00076ba3) bg_popup_call_pane_cp01_ParamLimits

0x1796,	// (0x00076ba3) bg_popup_call_pane_cp01

0x17a4,	// (0x00076bb1) call_thumbnail_pane_cp02

0x181b,	// (0x00076c28) call_type_pane_cp022

0x1823,	// (0x00076c30) popup_call_audio_out_window_g1_ParamLimits

0x1823,	// (0x00076c30) popup_call_audio_out_window_g1

0x1835,	// (0x00076c42) popup_call_audio_out_window_g2_ParamLimits

0x1835,	// (0x00076c42) popup_call_audio_out_window_g2

0x1841,	// (0x00076c4e) popup_call_audio_out_window_g3_ParamLimits

0x1841,	// (0x00076c4e) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x000844fc) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x000844fc) popup_call_audio_out_window_g

0x1853,	// (0x00076c60) popup_call_audio_out_window_t1_ParamLimits

0x1853,	// (0x00076c60) popup_call_audio_out_window_t1

0x186b,	// (0x00076c78) popup_call_audio_out_window_t2_ParamLimits

0x186b,	// (0x00076c78) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00084503) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00084503) popup_call_audio_out_window_t

0x1880,	// (0x00076c8d) bg_popup_call_pane_ParamLimits

0x1880,	// (0x00076c8d) bg_popup_call_pane

0x1904,	// (0x00076d11) call_thumbnail_pane_cp_ParamLimits

0x1904,	// (0x00076d11) call_thumbnail_pane_cp

0x1928,	// (0x00076d35) call_type_pane_cp01_ParamLimits

0x1928,	// (0x00076d35) call_type_pane_cp01

0x196c,	// (0x00076d79) popup_call_audio_first_window_g1_ParamLimits

0x196c,	// (0x00076d79) popup_call_audio_first_window_g1

0x19b8,	// (0x00076dc5) popup_call_audio_first_window_g2_ParamLimits

0x19b8,	// (0x00076dc5) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00084508) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00084508) popup_call_audio_first_window_g

0x19fc,	// (0x00076e09) popup_call_audio_first_window_t1_ParamLimits

0x19fc,	// (0x00076e09) popup_call_audio_first_window_t1

0x1aa8,	// (0x00076eb5) popup_call_audio_first_window_t4_ParamLimits

0x1aa8,	// (0x00076eb5) popup_call_audio_first_window_t4

0x1b34,	// (0x00076f41) popup_call_audio_first_window_t5_ParamLimits

0x1b34,	// (0x00076f41) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0008450d) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0008450d) popup_call_audio_first_window_t

0x1b63,	// (0x00076f70) bg_popup_call_pane_cp02

0x1b6d,	// (0x00076f7a) call_type_pane_cp023

0x1b75,	// (0x00076f82) popup_call_audio_wait_window_g1

0x1b7d,	// (0x00076f8a) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00084514) popup_call_audio_wait_window_g

0x1b85,	// (0x00076f92) popup_call_audio_wait_window_t3

0x1b93,	// (0x00076fa0) bg_popup_call_pane_cp03_ParamLimits

0x1b93,	// (0x00076fa0) bg_popup_call_pane_cp03

0x1bf3,	// (0x00077000) call_thumbnail_pane_cp011_ParamLimits

0x1bf3,	// (0x00077000) call_thumbnail_pane_cp011

0x1bff,	// (0x0007700c) call_type_pane_cp034_ParamLimits

0x1bff,	// (0x0007700c) call_type_pane_cp034

0x1c3b,	// (0x00077048) popup_call_audio_second_window_g1_ParamLimits

0x1c3b,	// (0x00077048) popup_call_audio_second_window_g1

0x1c77,	// (0x00077084) popup_call_audio_second_window_g2_ParamLimits

0x1c77,	// (0x00077084) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00084519) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00084519) popup_call_audio_second_window_g

0x1cb3,	// (0x000770c0) popup_call_audio_second_window_t1_ParamLimits

0x1cb3,	// (0x000770c0) popup_call_audio_second_window_t1

0x1d34,	// (0x00077141) popup_call_audio_second_window_t2_ParamLimits

0x1d34,	// (0x00077141) popup_call_audio_second_window_t2

0x1d6a,	// (0x00077177) popup_call_audio_second_window_t3_ParamLimits

0x1d6a,	// (0x00077177) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0008451e) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0008451e) popup_call_audio_second_window_t

0x1b63,	// (0x00076f70) bg_popup_call_pane_cp04

0x1da0,	// (0x000771ad) list_conf_pane

0x1da8,	// (0x000771b5) popup_call_audio_conf_window_t1

0x1db6,	// (0x000771c3) call_thumbnail_pane_g1

0x1dbe,	// (0x000771cb) bg_pinb_pane_ParamLimits

0x1dbe,	// (0x000771cb) bg_pinb_pane

0x1dcc,	// (0x000771d9) find_pinb_pane

0x1dd5,	// (0x000771e2) listscroll_pinb_pane_ParamLimits

0x1dd5,	// (0x000771e2) listscroll_pinb_pane

0x1de4,	// (0x000771f1) pinb_bg_pane_g1

0x1dee,	// (0x000771fb) pinb_bg_pane_g2

0x1dfa,	// (0x00077207) pinb_bg_pane_g3

0x1e06,	// (0x00077213) pinb_bg_pane_g4

0x1e12,	// (0x0007721f) pinb_bg_pane_g5

0x1e1e,	// (0x0007722b) pinb_bg_pane_g6

0x1e29,	// (0x00077236) pinb_bg_pane_g7

0x1e34,	// (0x00077241) pinb_bg_pane_g8

0x1e3f,	// (0x0007724c) pinb_bg_pane_g9

0x1e49,	// (0x00077256) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00084525) pinb_bg_pane_g

0x1e66,	// (0x00077273) grid_pinb_pane

0x1e6f,	// (0x0007727c) list_pinb_pane

0x1e78,	// (0x00077285) scroll_pane_cp01_ParamLimits

0x1e78,	// (0x00077285) scroll_pane_cp01

0x1e8a,	// (0x00077297) find_pinb_pane_g1_ParamLimits

0x1e8a,	// (0x00077297) find_pinb_pane_g1

0x1ea2,	// (0x000772af) find_pinb_pane_t1

0x1eb4,	// (0x000772c1) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0008453f) find_pinb_pane_t

0x1ec9,	// (0x000772d6) input_focus_pane_cp01_ParamLimits

0x1ec9,	// (0x000772d6) input_focus_pane_cp01

0x1ed5,	// (0x000772e2) cell_pinb_pane_ParamLimits

0x1ed5,	// (0x000772e2) cell_pinb_pane

0x1efe,	// (0x0007730b) cell_pinb_pane_g1_ParamLimits

0x1efe,	// (0x0007730b) cell_pinb_pane_g1

0x1f0e,	// (0x0007731b) cell_pinb_pane_g2_ParamLimits

0x1f0e,	// (0x0007731b) cell_pinb_pane_g2

0x1f1a,	// (0x00077327) cell_pinb_pane_g3_ParamLimits

0x1f1a,	// (0x00077327) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00084544) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00084544) cell_pinb_pane_g

0x1b63,	// (0x00076f70) grid_highlight_pane_cp01

0x1f26,	// (0x00077333) list_pinb_item_pane_ParamLimits

0x1f26,	// (0x00077333) list_pinb_item_pane

0x1b63,	// (0x00076f70) list_highlight_pane_cp02

0x1f38,	// (0x00077345) list_pinb_item_pane_g1_ParamLimits

0x1f38,	// (0x00077345) list_pinb_item_pane_g1

0x1f45,	// (0x00077352) list_pinb_item_pane_g2_ParamLimits

0x1f45,	// (0x00077352) list_pinb_item_pane_g2

0x1f51,	// (0x0007735e) list_pinb_item_pane_g3_ParamLimits

0x1f51,	// (0x0007735e) list_pinb_item_pane_g3

0x1f62,	// (0x0007736f) list_pinb_item_pane_g4_ParamLimits

0x1f62,	// (0x0007736f) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0008454b) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0008454b) list_pinb_item_pane_g

0x1f6e,	// (0x0007737b) list_pinb_item_pane_t1_ParamLimits

0x1f6e,	// (0x0007737b) list_pinb_item_pane_t1

0x1fa3,	// (0x000773b0) calc_display_pane

0x1fcb,	// (0x000773d8) calc_paper_pane

0x1fee,	// (0x000773fb) grid_calc_pane

0x1b63,	// (0x00076f70) bg_list_pane_cp01

0x201c,	// (0x00077429) clock_g1

0x2024,	// (0x00077431) clock_g2

0x0001,

0xf147,	// (0x00084554) clock_g

0x202c,	// (0x00077439) clock_t1_ParamLimits

0x202c,	// (0x00077439) clock_t1

0x2041,	// (0x0007744e) clock_t2_ParamLimits

0x2041,	// (0x0007744e) clock_t2

0x2053,	// (0x00077460) clock_t3_ParamLimits

0x2053,	// (0x00077460) clock_t3

0x2065,	// (0x00077472) clock_t4_ParamLimits

0x2065,	// (0x00077472) clock_t4

0x2077,	// (0x00077484) clock_t5_ParamLimits

0x2077,	// (0x00077484) clock_t5

0x208c,	// (0x00077499) clock_t6_ParamLimits

0x208c,	// (0x00077499) clock_t6

0x209e,	// (0x000774ab) clock_t7_ParamLimits

0x209e,	// (0x000774ab) clock_t7

0x20b0,	// (0x000774bd) clock_t8_ParamLimits

0x20b0,	// (0x000774bd) clock_t8

0x20c4,	// (0x000774d1) clock_t9_ParamLimits

0x20c4,	// (0x000774d1) clock_t9

0x0008,

0xf14c,	// (0x00084559) clock_t_ParamLimits

0xf14c,	// (0x00084559) clock_t

0x20d8,	// (0x000774e5) popup_clock_analogue_window_cp02

0x20d8,	// (0x000774e5) popup_clock_digital_window_cp01

0x20e0,	// (0x000774ed) listscroll_help_pane

0x1b63,	// (0x00076f70) phob_pre_status_pane

0x20ea,	// (0x000774f7) grid_qdial_pane

0x1b63,	// (0x00076f70) listscroll_mce_pane

0x20f4,	// (0x00077501) bg_notes_pane

0x2102,	// (0x0007750f) list_notes_pane

0x2110,	// (0x0007751d) scroll_pane_cp06

0x2124,	// (0x00077531) bg_calc_paper_pane

0xaa2b,	// (0x0007fe38) list_calc_pane

0x2138,	// (0x00077545) bg_calc_display_pane

0x2144,	// (0x00077551) calc_display_pane_t1

0x2156,	// (0x00077563) calc_display_pane_t2

0xaa45,	// (0x0007fe52) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0008456c) calc_display_pane_t

0x2168,	// (0x00077575) cell_calc_pane_ParamLimits

0x2168,	// (0x00077575) cell_calc_pane

0x219d,	// (0x000775aa) bg_calc_paper_pane_g1

0x21a9,	// (0x000775b6) bg_calc_paper_pane_g2

0x21b5,	// (0x000775c2) bg_calc_paper_pane_g3

0x21c1,	// (0x000775ce) bg_calc_paper_pane_g4

0x21cd,	// (0x000775da) bg_calc_paper_pane_g5

0x21d9,	// (0x000775e6) bg_calc_paper_pane_g6

0x21e8,	// (0x000775f5) bg_calc_paper_pane_g7

0x21f7,	// (0x00077604) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00084573) bg_calc_paper_pane_g

0x220a,	// (0x00077617) calc_bg_paper_pane_g9

0x221d,	// (0x0007762a) list_calc_item_pane_ParamLimits

0x221d,	// (0x0007762a) list_calc_item_pane

0x2235,	// (0x00077642) list_calc_item_pane_g1

0xaa57,	// (0x0007fe64) list_calc_item_pane_t1_ParamLimits

0xaa57,	// (0x0007fe64) list_calc_item_pane_t1

0x2242,	// (0x0007764f) list_calc_item_pane_t2_ParamLimits

0x2242,	// (0x0007764f) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00084584) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00084584) list_calc_item_pane_t

0x225c,	// (0x00077669) cell_calc_pane_g1

0x227e,	// (0x0007768b) grid_highlight_pane_cp02

0x22a0,	// (0x000776ad) bg_calc_display_pane_g1

0x22a9,	// (0x000776b6) bg_calc_display_pane_g2

0x22b3,	// (0x000776c0) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0008458e) bg_calc_display_pane_g

0x22bc,	// (0x000776c9) cell_qdial_pane_ParamLimits

0x22bc,	// (0x000776c9) cell_qdial_pane

0x22d0,	// (0x000776dd) cell_qdial_pane_g1_ParamLimits

0x22d0,	// (0x000776dd) cell_qdial_pane_g1

0x22e6,	// (0x000776f3) cell_qdial_pane_g2_ParamLimits

0x22e6,	// (0x000776f3) cell_qdial_pane_g2

0x22f7,	// (0x00077704) cell_qdial_pane_g3_ParamLimits

0x22f7,	// (0x00077704) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00084595) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00084595) cell_qdial_pane_g

0x2319,	// (0x00077726) cell_qdial_pane_t1_ParamLimits

0x2319,	// (0x00077726) cell_qdial_pane_t1

0x2331,	// (0x0007773e) cell_qdial_pane_t2_ParamLimits

0x2331,	// (0x0007773e) cell_qdial_pane_t2

0x2344,	// (0x00077751) cell_qdial_pane_t3_ParamLimits

0x2344,	// (0x00077751) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0008459e) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0008459e) cell_qdial_pane_t

0x1b63,	// (0x00076f70) grid_highlight_pane_cp04

0x2357,	// (0x00077764) thumbnail_qdial_pane_ParamLimits

0x2357,	// (0x00077764) thumbnail_qdial_pane

0x23b3,	// (0x000777c0) list_help_pane

0x23bc,	// (0x000777c9) scroll_pane_cp02

0x23c5,	// (0x000777d2) help_list_pane_t1_ParamLimits

0x23c5,	// (0x000777d2) help_list_pane_t1

0xaa69,	// (0x0007fe76) bg_notes_pane_g2

0xaa71,	// (0x0007fe7e) bg_notes_pane_g3

0xaa79,	// (0x0007fe86) notes_bg_pane_g1

0xaa81,	// (0x0007fe8e) notes_bg_pane_g4

0xaa89,	// (0x0007fe96) notes_bg_pane_g5

0xaa91,	// (0x0007fe9e) notes_bg_pane_g6

0xaa99,	// (0x0007fea6) notes_bg_pane_g7

0xaaa1,	// (0x0007feae) notes_bg_pane_g8

0xaaa9,	// (0x0007feb6) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x000845bc) notes_bg_pane_g

0x23e2,	// (0x000777ef) list_notes_text_pane_ParamLimits

0x23e2,	// (0x000777ef) list_notes_text_pane

0x23f7,	// (0x00077804) list_notes_text_pane_g1

0x09c4,	// (0x00075dd1) list_notes_text_pane_t1

0x2138,	// (0x00077545) listscroll_cale_week_pane

0x242e,	// (0x0007783b) bg_cale_heading_pane

0x2442,	// (0x0007784f) bg_cale_pane_cp01

0x245b,	// (0x00077868) cale_week_corner_pane

0x2471,	// (0x0007787e) cale_week_day_heading_pane

0x2485,	// (0x00077892) cale_week_scroll_pane_g1

0x2496,	// (0x000778a3) cale_week_scroll_pane_g2

0x24a7,	// (0x000778b4) cale_week_scroll_pane_g3

0x24b8,	// (0x000778c5) cale_week_scroll_pane_g4

0x24c9,	// (0x000778d6) cale_week_scroll_pane_g5

0x24dc,	// (0x000778e9) cale_week_scroll_pane_g6

0x24ef,	// (0x000778fc) cale_week_scroll_pane_g7

0x2502,	// (0x0007790f) cale_week_scroll_pane_g8

0x2515,	// (0x00077922) cale_week_scroll_pane_g9

0x2526,	// (0x00077933) cale_week_scroll_pane_g10

0x2537,	// (0x00077944) cale_week_scroll_pane_g11

0x2548,	// (0x00077955) cale_week_scroll_pane_g12

0x2559,	// (0x00077966) cale_week_scroll_pane_g13

0x256a,	// (0x00077977) cale_week_scroll_pane_g14

0x257b,	// (0x00077988) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x000845cb) cale_week_scroll_pane_g

0x258c,	// (0x00077999) cale_week_time_pane

0x259f,	// (0x000779ac) grid_cale_week_pane

0x25c6,	// (0x000779d3) scroll_pane_cp08

0x25e0,	// (0x000779ed) cell_cale_week_pane_ParamLimits

0x25e0,	// (0x000779ed) cell_cale_week_pane

0x2620,	// (0x00077a2d) cale_week_day_heading_pane_t1

0x264a,	// (0x00077a57) cale_week_day_heading_pane_t2

0x2674,	// (0x00077a81) cale_week_day_heading_pane_t3

0x269e,	// (0x00077aab) cale_week_day_heading_pane_t4

0x26c8,	// (0x00077ad5) cale_week_day_heading_pane_t5

0x26f2,	// (0x00077aff) cale_week_day_heading_pane_t6

0x271e,	// (0x00077b2b) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x000845ea) cale_week_day_heading_pane_t

0x2748,	// (0x00077b55) bg_cale_side_pane

0x2756,	// (0x00077b63) cale_week_time_pane_t1

0x276e,	// (0x00077b7b) cale_week_time_pane_t2

0x2786,	// (0x00077b93) cale_week_time_pane_t3

0x279e,	// (0x00077bab) cale_week_time_pane_t4

0x27b6,	// (0x00077bc3) cale_week_time_pane_t5

0x27ce,	// (0x00077bdb) cale_week_time_pane_t6

0x27e6,	// (0x00077bf3) cale_week_time_pane_t7

0x27fe,	// (0x00077c0b) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x000845f9) cale_week_time_pane_t

0x2816,	// (0x00077c23) cell_cale_week_pane_g2

0x282f,	// (0x00077c3c) cell_cale_week_pane_g3_ParamLimits

0x282f,	// (0x00077c3c) cell_cale_week_pane_g3

0x2847,	// (0x00077c54) grid_highlight_pane_cp07

0x284f,	// (0x00077c5c) listscroll_gms_pane

0x2859,	// (0x00077c66) grid_gms_pane

0x2862,	// (0x00077c6f) listscroll_gms_pane_g1

0x286a,	// (0x00077c77) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0008460a) listscroll_gms_pane_g

0x2872,	// (0x00077c7f) scroll_pane_cp010

0x287d,	// (0x00077c8a) cell_gms_pane_ParamLimits

0x287d,	// (0x00077c8a) cell_gms_pane

0x288f,	// (0x00077c9c) cell_gms_pane_g1

0x2897,	// (0x00077ca4) cell_gms_pane_g2

0x289f,	// (0x00077cac) cell_gms_pane_g3

0x28a8,	// (0x00077cb5) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0008460f) cell_gms_pane_g

0x28b1,	// (0x00077cbe) grid_highlight_pane_cp09

0x57a0,	// (0x0007abad) phob_pre_status_pane_g1

0x57a8,	// (0x0007abb5) phob_pre_status_pane_g2

0x57b0,	// (0x0007abbd) phob_pre_status_pane_g3

0x57b8,	// (0x0007abc5) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x000849fe) phob_pre_status_pane_g

0x57c8,	// (0x0007abd5) phob_pre_status_pane_t1

0x57d6,	// (0x0007abe3) phob_pre_status_pane_t2

0x57e6,	// (0x0007abf3) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00084a09) phob_pre_status_pane_t

0x1b63,	// (0x00076f70) bg_list_pane_cp05

0x28c1,	// (0x00077cce) grid_vorec_pane

0x28cb,	// (0x00077cd8) vorec_t1

0x28d9,	// (0x00077ce6) vorec_t2

0x28e7,	// (0x00077cf4) vorec_t3

0x28f5,	// (0x00077d02) vorec_t4

0x2903,	// (0x00077d10) vorec_t5

0xaab1,	// (0x0007febe) vorec_t6

0x0006,

0xf20b,	// (0x00084618) vorec_t

0x291f,	// (0x00077d2c) wait_bar_pane_cp01

0x2927,	// (0x00077d34) cell_vorec_pane_ParamLimits

0x2927,	// (0x00077d34) cell_vorec_pane

0x293a,	// (0x00077d47) cell_vorec_pane_g1

0x1b63,	// (0x00076f70) grid_highlight_pane_cp05

0x295c,	// (0x00077d69) cams_zoom_pane

0x296b,	// (0x00077d78) image_vga_pane

0x2985,	// (0x00077d92) main_camera_pane_g1

0x2997,	// (0x00077da4) main_camera_pane_g2

0x29a7,	// (0x00077db4) main_camera_pane_g3

0x29b7,	// (0x00077dc4) main_camera_pane_g4

0x29c7,	// (0x00077dd4) main_camera_pane_g5

0x29d7,	// (0x00077de4) main_camera_pane_g6

0x29e9,	// (0x00077df6) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00084627) main_camera_pane_g

0x2a05,	// (0x00077e12) main_camera_pane_t1

0x2a1b,	// (0x00077e28) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00084638) main_camera_pane_t

0x2a55,	// (0x00077e62) cams_zoom_pane_cp_ParamLimits

0x2a55,	// (0x00077e62) cams_zoom_pane_cp

0x2a7d,	// (0x00077e8a) image_cif_pane_ParamLimits

0x2a7d,	// (0x00077e8a) image_cif_pane

0x2ab8,	// (0x00077ec5) image_subqcif_pane

0x2ac0,	// (0x00077ecd) main_video_pane_g1_ParamLimits

0x2ac0,	// (0x00077ecd) main_video_pane_g1

0x2ae4,	// (0x00077ef1) main_video_pane_g2_ParamLimits

0x2ae4,	// (0x00077ef1) main_video_pane_g2

0x2b18,	// (0x00077f25) main_video_pane_g3_ParamLimits

0x2b18,	// (0x00077f25) main_video_pane_g3

0x2b46,	// (0x00077f53) main_video_pane_g4_ParamLimits

0x2b46,	// (0x00077f53) main_video_pane_g4

0x2b74,	// (0x00077f81) main_video_pane_g5_ParamLimits

0x2b74,	// (0x00077f81) main_video_pane_g5

0x2b8c,	// (0x00077f99) main_video_pane_g6_ParamLimits

0x2b8c,	// (0x00077f99) main_video_pane_g6

0x0006,

0xf230,	// (0x0008463d) main_video_pane_g_ParamLimits

0xf230,	// (0x0008463d) main_video_pane_g

0x2bb7,	// (0x00077fc4) main_video_pane_t1_ParamLimits

0x2bb7,	// (0x00077fc4) main_video_pane_t1

0x2c00,	// (0x0007800d) cams_zoom_pane_g1

0x2c09,	// (0x00078016) cams_zoom_pane_g2

0x2c12,	// (0x0007801f) cams_zoom_pane_g3

0x2c1b,	// (0x00078028) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0008464c) cams_zoom_pane_g

0x2c38,	// (0x00078045) grid_cams_pane

0x2c52,	// (0x0007805f) linegrid_cams_pane

0x2c66,	// (0x00078073) cell_cams_pane_ParamLimits

0x2c66,	// (0x00078073) cell_cams_pane

0x2c86,	// (0x00078093) cams_burst_image_pane

0x2c8e,	// (0x0007809b) cell_cams_pane_g1

0x1b63,	// (0x00076f70) grid_highlight_pane_cp03

0x225c,	// (0x00077669) mp_bg_pane_g1

0x1b63,	// (0x00076f70) bg_list_pane_cp03

0xbb1b,	// (0x00080f28) bg_mp_pane

0xbb23,	// (0x00080f30) grid_mp_pane

0xbb2b,	// (0x00080f38) media_player_g1

0xbb33,	// (0x00080f40) media_player_t1

0xbb41,	// (0x00080f4e) media_player_t2

0xbb4f,	// (0x00080f5c) media_player_t3

0xbb5d,	// (0x00080f6a) media_player_t4

0xbb6b,	// (0x00080f78) media_player_t5

0xbb79,	// (0x00080f86) media_player_t6

0xbb87,	// (0x00080f94) media_player_t7

0x0006,

0xf5db,	// (0x000849e8) media_player_t

0xbb95,	// (0x00080fa2) wait_bar_pane_cp02

0xf5c0,	// (0x000849cd) main_usb_pane_t

0x5797,	// (0x0007aba4) cell_mp_pane

0x225c,	// (0x00077669) cell_mp_pane_g1

0x1b63,	// (0x00076f70) grid_highlight_pane_cp06

0x2c96,	// (0x000780a3) grid_skin_colour_pane

0x2c9e,	// (0x000780ab) list_highlight_pane_cp03

0x2ca6,	// (0x000780b3) skin_g1

0x2cae,	// (0x000780bb) skin_t1

0x2cbd,	// (0x000780ca) skin_t2

0x0001,

0xf274,	// (0x00084681) skin_t

0x2ccb,	// (0x000780d8) cell_skin_colour_pane_ParamLimits

0x2ccb,	// (0x000780d8) cell_skin_colour_pane

0x2ceb,	// (0x000780f8) cell_skin_colour_pane_g1

0x2d56,	// (0x00078163) call_video_g1_ParamLimits

0x2d56,	// (0x00078163) call_video_g1

0x2d72,	// (0x0007817f) call_video_g2_ParamLimits

0x2d72,	// (0x0007817f) call_video_g2

0x0001,

0xf279,	// (0x00084686) call_video_g_ParamLimits

0xf279,	// (0x00084686) call_video_g

0x2dc4,	// (0x000781d1) call_video_uplink_pane_cp1_ParamLimits

0x2dc4,	// (0x000781d1) call_video_uplink_pane_cp1

0x2e29,	// (0x00078236) call_video_uplink_pane_cp2

0x2e6b,	// (0x00078278) video_down_crop_pane_ParamLimits

0x2e6b,	// (0x00078278) video_down_crop_pane

0x2f62,	// (0x0007836f) video_down_pane_ParamLimits

0x2f62,	// (0x0007836f) video_down_pane

0x3059,	// (0x00078466) video_down_subqcif_pane_ParamLimits

0x3059,	// (0x00078466) video_down_subqcif_pane

0x3071,	// (0x0007847e) video_down_subqcif_pane_cp_ParamLimits

0x3071,	// (0x0007847e) video_down_subqcif_pane_cp

0x30ae,	// (0x000784bb) im_reading_pane_ParamLimits

0x30ae,	// (0x000784bb) im_reading_pane

0x30c0,	// (0x000784cd) im_writing_pane_ParamLimits

0x30c0,	// (0x000784cd) im_writing_pane

0x30de,	// (0x000784eb) im_reading_pane_t1

0x3117,	// (0x00078524) list_im_pane

0x3128,	// (0x00078535) scroll_pane_cp07

0x3141,	// (0x0007854e) im_writing_pane_t1_ParamLimits

0x3141,	// (0x0007854e) im_writing_pane_t1

0x3156,	// (0x00078563) im_writing_pane_t2_ParamLimits

0x3156,	// (0x00078563) im_writing_pane_t2

0x0001,

0xf283,	// (0x00084690) im_writing_pane_t_ParamLimits

0xf283,	// (0x00084690) im_writing_pane_t

0x1b63,	// (0x00076f70) input_focus_pane_cp04

0x1b63,	// (0x00076f70) input_focus_pane_cp05

0x3173,	// (0x00078580) list_im_single_pane_ParamLimits

0x3173,	// (0x00078580) list_im_single_pane

0x3187,	// (0x00078594) list_single_im_pane_t1

0x5757,	// (0x0007ab64) blid_accuracy_pane

0x575f,	// (0x0007ab6c) blid_compass_pane

0x5769,	// (0x0007ab76) main_location_t1

0x5779,	// (0x0007ab86) main_location_t2

0x5789,	// (0x0007ab96) main_location_t3

0x0002,

0xf5ea,	// (0x000849f7) main_location_t

0x1b63,	// (0x00076f70) aid_levels_location

0x225c,	// (0x00077669) blid_accuracy_pane_g1

0x225c,	// (0x00077669) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x000846f2) blid_accuracy_pane_g

0x31c1,	// (0x000785ce) wml_content_pane

0x31ff,	// (0x0007860c) wml_button_pane_ParamLimits

0x31ff,	// (0x0007860c) wml_button_pane

0x3213,	// (0x00078620) wml_list_single_large_pane_ParamLimits

0x3213,	// (0x00078620) wml_list_single_large_pane

0x3228,	// (0x00078635) wml_list_single_medium_pane_ParamLimits

0x3228,	// (0x00078635) wml_list_single_medium_pane

0x323e,	// (0x0007864b) wml_list_single_small_pane_ParamLimits

0x323e,	// (0x0007864b) wml_list_single_small_pane

0x3256,	// (0x00078663) wml_selection_box_pane_ParamLimits

0x3256,	// (0x00078663) wml_selection_box_pane

0x3269,	// (0x00078676) wml_list_single_pane_t1

0x3278,	// (0x00078685) wml_list_single_medium_pane_t1

0x3287,	// (0x00078694) wml_list_single_large_pane_t1

0x3296,	// (0x000786a3) input_focus_pane_cp02_ParamLimits

0x3296,	// (0x000786a3) input_focus_pane_cp02

0x32a9,	// (0x000786b6) wml_selection_box_pane_g1

0x32b2,	// (0x000786bf) wml_selection_box_pane_t1_ParamLimits

0x32b2,	// (0x000786bf) wml_selection_box_pane_t1

0x1dbe,	// (0x000771cb) bg_wml_button_pane_ParamLimits

0x1dbe,	// (0x000771cb) bg_wml_button_pane

0x32ca,	// (0x000786d7) wml_button_pane_g1

0x32d2,	// (0x000786df) wml_button_pane_t1

0x32ca,	// (0x000786d7) wml_button_bg_pane_g1

0x32e2,	// (0x000786ef) wml_button_bg_pane_g2

0x32ea,	// (0x000786f7) wml_button_bg_pane_g3

0x32f2,	// (0x000786ff) wml_button_bg_pane_g4

0x32fa,	// (0x00078707) wml_button_bg_pane_g5

0x3302,	// (0x0007870f) wml_button_bg_pane_g6

0x330a,	// (0x00078717) wml_button_bg_pane_g7

0x3312,	// (0x0007871f) wml_button_bg_pane_g8

0x331a,	// (0x00078727) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00084695) wml_button_bg_pane_g

0x3322,	// (0x0007872f) bg_list_pane_cp02

0x332a,	// (0x00078737) mce_header_pane_ParamLimits

0x332a,	// (0x00078737) mce_header_pane

0x3340,	// (0x0007874d) mce_icon_pane

0x3340,	// (0x0007874d) mce_image_pane

0x3349,	// (0x00078756) mce_text_pane_ParamLimits

0x3349,	// (0x00078756) mce_text_pane

0x335c,	// (0x00078769) scroll_pane_cp03

0x31f7,	// (0x00078604) scroll_pane_cp04

0x3366,	// (0x00078773) scroll_pane_cp05_ParamLimits

0x3366,	// (0x00078773) scroll_pane_cp05

0x3372,	// (0x0007877f) mce_header_field_pane_ParamLimits

0x3372,	// (0x0007877f) mce_header_field_pane

0x3389,	// (0x00078796) mce_header_field_pane_2_ParamLimits

0x3389,	// (0x00078796) mce_header_field_pane_2

0x339f,	// (0x000787ac) mce_header_field_pane_3

0x33a7,	// (0x000787b4) list_single_mce_message_pane_ParamLimits

0x33a7,	// (0x000787b4) list_single_mce_message_pane

0x33bc,	// (0x000787c9) list_single_mce_smart_pane_ParamLimits

0x33bc,	// (0x000787c9) list_single_mce_smart_pane

0x33dc,	// (0x000787e9) input_focus_pane_cp03

0x33e5,	// (0x000787f2) list_header_data_pane

0x33ed,	// (0x000787fa) mce_header_field_pane_t1

0x33fd,	// (0x0007880a) list_single_mce_header_pane_ParamLimits

0x33fd,	// (0x0007880a) list_single_mce_header_pane

0x3411,	// (0x0007881e) list_single_mce_header_pane_t1

0x3420,	// (0x0007882d) list_single_mce_message_pane_g1

0x3428,	// (0x00078835) list_single_mce_message_pane_t1

0x3454,	// (0x00078861) bg_cale_heading_pane_cp01_ParamLimits

0x3454,	// (0x00078861) bg_cale_heading_pane_cp01

0x3477,	// (0x00078884) bg_cale_pane_cp02_ParamLimits

0x3477,	// (0x00078884) bg_cale_pane_cp02

0x349a,	// (0x000788a7) cale_month_corner_pane

0x34b0,	// (0x000788bd) cale_month_day_heading_pane_ParamLimits

0x34b0,	// (0x000788bd) cale_month_day_heading_pane

0x34e3,	// (0x000788f0) cale_month_pane_g1_ParamLimits

0x34e3,	// (0x000788f0) cale_month_pane_g1

0x34ff,	// (0x0007890c) cale_month_pane_g2_ParamLimits

0x34ff,	// (0x0007890c) cale_month_pane_g2

0x351a,	// (0x00078927) cale_month_pane_g3_ParamLimits

0x351a,	// (0x00078927) cale_month_pane_g3

0x3546,	// (0x00078953) cale_month_pane_g4_ParamLimits

0x3546,	// (0x00078953) cale_month_pane_g4

0x3572,	// (0x0007897f) cale_month_pane_g5_ParamLimits

0x3572,	// (0x0007897f) cale_month_pane_g5

0x35a6,	// (0x000789b3) cale_month_pane_g6_ParamLimits

0x35a6,	// (0x000789b3) cale_month_pane_g6

0x35e2,	// (0x000789ef) cale_month_pane_g7_ParamLimits

0x35e2,	// (0x000789ef) cale_month_pane_g7

0x361e,	// (0x00078a2b) cale_month_pane_g8_ParamLimits

0x361e,	// (0x00078a2b) cale_month_pane_g8

0x365a,	// (0x00078a67) cale_month_pane_g9_ParamLimits

0x365a,	// (0x00078a67) cale_month_pane_g9

0x3694,	// (0x00078aa1) cale_month_pane_g10_ParamLimits

0x3694,	// (0x00078aa1) cale_month_pane_g10

0x36ce,	// (0x00078adb) cale_month_pane_g11_ParamLimits

0x36ce,	// (0x00078adb) cale_month_pane_g11

0x3708,	// (0x00078b15) cale_month_pane_g12_ParamLimits

0x3708,	// (0x00078b15) cale_month_pane_g12

0x3742,	// (0x00078b4f) cale_month_pane_g13_ParamLimits

0x3742,	// (0x00078b4f) cale_month_pane_g13

0x000c,

0xf29b,	// (0x000846a8) cale_month_pane_g_ParamLimits

0xf29b,	// (0x000846a8) cale_month_pane_g

0x378e,	// (0x00078b9b) cale_month_week_pane

0x37a1,	// (0x00078bae) grid_cale_month_pane_ParamLimits

0x37a1,	// (0x00078bae) grid_cale_month_pane

0x37cf,	// (0x00078bdc) cale_month_day_heading_pane_t1

0x382d,	// (0x00078c3a) cale_month_day_heading_pane_t2

0x3892,	// (0x00078c9f) cale_month_day_heading_pane_t3

0x38f7,	// (0x00078d04) cale_month_day_heading_pane_t4

0x395c,	// (0x00078d69) cale_month_day_heading_pane_t5

0x39d1,	// (0x00078dde) cale_month_day_heading_pane_t6

0x3a46,	// (0x00078e53) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000846c3) cale_month_day_heading_pane_t

0x2748,	// (0x00077b55) bg_cale_side_pane_cp01

0x3abb,	// (0x00078ec8) cale_month_week_pane_t1

0x3ad2,	// (0x00078edf) cale_month_week_pane_t2

0x3ae9,	// (0x00078ef6) cale_month_week_pane_t3

0x3b00,	// (0x00078f0d) cale_month_week_pane_t4

0x3b17,	// (0x00078f24) cale_month_week_pane_t5

0x3b2e,	// (0x00078f3b) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x000846d2) cale_month_week_pane_t

0x3b45,	// (0x00078f52) cell_cale_month_pane_ParamLimits

0x3b45,	// (0x00078f52) cell_cale_month_pane

0xaba6,	// (0x0007ffb3) cell_cale_month_pane_g1

0x3c1b,	// (0x00079028) cell_cale_month_pane_t1_ParamLimits

0x3c1b,	// (0x00079028) cell_cale_month_pane_t1

0x2847,	// (0x00077c54) grid_highlight_pane_cp08

0x225c,	// (0x00077669) main_smil_g1

0x3c37,	// (0x00079044) smil_status_pane

0x3c40,	// (0x0007904d) smil_text_pane

0xba3b,	// (0x00080e48) bg_popup_call3_rect_pane_g8

0xba43,	// (0x00080e50) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0008498b) bg_popup_call3_rect_pane_g

0xbcbd,	// (0x000810ca) smil_status_volume_pane_g1

0x3c54,	// (0x00079061) smil_status_pane_t1

0xbcf0,	// (0x000810fd) volume_smil_pane

0x3c6b,	// (0x00079078) list_smil_text_pane

0x3c75,	// (0x00079082) scroll_pane_cp011

0x3c80,	// (0x0007908d) smil_text_list_pane_t1_ParamLimits

0x3c80,	// (0x0007908d) smil_text_list_pane_t1

0xabb2,	// (0x0007ffbf) aid_volume_smil_ParamLimits

0xabb2,	// (0x0007ffbf) aid_volume_smil

0x225c,	// (0x00077669) smil_volume_pane_g1

0x225c,	// (0x00077669) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x000846f2) smil_volume_pane_g

0x2138,	// (0x00077545) listscroll_cale_day_pane

0x3cc6,	// (0x000790d3) bg_cale_pane

0x3cde,	// (0x000790eb) list_cale_pane

0x3cef,	// (0x000790fc) scroll_pane_cp09

0x3d00,	// (0x0007910d) cale_bg_pane_g1

0x3d08,	// (0x00079115) cale_bg_pane_g2

0x3d10,	// (0x0007911d) cale_bg_pane_g3

0x3d18,	// (0x00079125) cale_bg_pane_g4

0x3d20,	// (0x0007912d) cale_bg_pane_g5

0x3d28,	// (0x00079135) cale_bg_pane_g6

0x3d30,	// (0x0007913d) cale_bg_pane_g7

0x3d38,	// (0x00079145) cale_bg_pane_g8

0x3d40,	// (0x0007914d) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x000846f7) cale_bg_pane_g

0x3d48,	// (0x00079155) list_cale_time_pane_ParamLimits

0x3d48,	// (0x00079155) list_cale_time_pane

0x3d5b,	// (0x00079168) list_cale_time_pane_g1_ParamLimits

0x3d5b,	// (0x00079168) list_cale_time_pane_g1

0x3d67,	// (0x00079174) list_cale_time_pane_g2_ParamLimits

0x3d67,	// (0x00079174) list_cale_time_pane_g2

0x3d74,	// (0x00079181) list_cale_time_pane_g3_ParamLimits

0x3d74,	// (0x00079181) list_cale_time_pane_g3

0x3d82,	// (0x0007918f) list_cale_time_pane_g4_ParamLimits

0x3d82,	// (0x0007918f) list_cale_time_pane_g4

0x3d90,	// (0x0007919d) list_cale_time_pane_g5_ParamLimits

0x3d90,	// (0x0007919d) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0008470a) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0008470a) list_cale_time_pane_g

0x3dab,	// (0x000791b8) list_cale_time_pane_t1_ParamLimits

0x3dab,	// (0x000791b8) list_cale_time_pane_t1

0x3dd3,	// (0x000791e0) list_cale_time_pane_t2_ParamLimits

0x3dd3,	// (0x000791e0) list_cale_time_pane_t2

0x44a9,	// (0x000798b6) aid_blid_cardinal_pane

0x44f3,	// (0x00079900) compass_pane_t4

0x3dfb,	// (0x00079208) list_cale_time_pane_t4_ParamLimits

0x3dfb,	// (0x00079208) list_cale_time_pane_t4

0x4501,	// (0x0007990e) compass_pane_t5

0x450f,	// (0x0007991c) compass_pane_t6

0x451d,	// (0x0007992a) compass_pane_t7

0x45b3,	// (0x000799c0) navi_pane_cc_t1

0x47cc,	// (0x00079bd9) aid_phob_thumbnail_center_pane

0x4e06,	// (0x0007a213) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00084717) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00084717) list_cale_time_pane_t

0x1796,	// (0x00076ba3) bg_popup_window_pane_cp02_ParamLimits

0x1796,	// (0x00076ba3) bg_popup_window_pane_cp02

0x3e23,	// (0x00079230) heading_pane_cp01_ParamLimits

0x3e23,	// (0x00079230) heading_pane_cp01

0x3e2f,	// (0x0007923c) loc_req_pane_ParamLimits

0x3e2f,	// (0x0007923c) loc_req_pane

0x3e3f,	// (0x0007924c) loc_type_pane_ParamLimits

0x3e3f,	// (0x0007924c) loc_type_pane

0x3e51,	// (0x0007925e) loc_type_pane_t1_ParamLimits

0x3e51,	// (0x0007925e) loc_type_pane_t1

0x3e63,	// (0x00079270) loc_type_pane_t2_ParamLimits

0x3e63,	// (0x00079270) loc_type_pane_t2

0x3e75,	// (0x00079282) loc_type_pane_t3_ParamLimits

0x3e75,	// (0x00079282) loc_type_pane_t3

0x0002,

0xf311,	// (0x0008471e) loc_type_pane_t_ParamLimits

0xf311,	// (0x0008471e) loc_type_pane_t

0x3e87,	// (0x00079294) list_loc_req_pane

0x3e91,	// (0x0007929e) scroll_pane_cp012

0x3e9c,	// (0x000792a9) list_single_loc_request_popup_menu_pane_ParamLimits

0x3e9c,	// (0x000792a9) list_single_loc_request_popup_menu_pane

0x3ea9,	// (0x000792b6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3ea9,	// (0x000792b6) list_single_loc_request_popup_menu_pane_g1

0x3eb5,	// (0x000792c2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3eb5,	// (0x000792c2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00084725) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00084725) list_single_loc_request_popup_menu_pane_g

0x3ec1,	// (0x000792ce) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3ec1,	// (0x000792ce) list_single_loc_request_popup_menu_pane_t1

0x1dbe,	// (0x000771cb) bg_popup_window_pane_cp03_ParamLimits

0x1dbe,	// (0x000771cb) bg_popup_window_pane_cp03

0x3ed7,	// (0x000792e4) heading_loc_req_pane_ParamLimits

0x3ed7,	// (0x000792e4) heading_loc_req_pane

0x3ee3,	// (0x000792f0) popup_dyc_status_message_window_g1_ParamLimits

0x3ee3,	// (0x000792f0) popup_dyc_status_message_window_g1

0x3ef7,	// (0x00079304) popup_dyc_status_message_window_t1_ParamLimits

0x3ef7,	// (0x00079304) popup_dyc_status_message_window_t1

0x3f0c,	// (0x00079319) popup_dyc_status_message_window_t2_ParamLimits

0x3f0c,	// (0x00079319) popup_dyc_status_message_window_t2

0x3f21,	// (0x0007932e) popup_dyc_status_message_window_t3_ParamLimits

0x3f21,	// (0x0007932e) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0008472a) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0008472a) popup_dyc_status_message_window_t

0x1b63,	// (0x00076f70) bg_heading_pane_cp01

0x3f3d,	// (0x0007934a) heading_loc_req_pane_g1

0x3f45,	// (0x00079352) heading_loc_req_pane_g2

0x3f4d,	// (0x0007935a) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00084731) heading_loc_req_pane_g

0x3f55,	// (0x00079362) heading_loc_req_pane_t1

0x3f7c,	// (0x00079389) bg_popup_sub_pane_cp01_ParamLimits

0x3f7c,	// (0x00079389) bg_popup_sub_pane_cp01

0x3f8a,	// (0x00079397) popup_cale_events_window_g1_ParamLimits

0x3f8a,	// (0x00079397) popup_cale_events_window_g1

0x3faa,	// (0x000793b7) popup_cale_events_window_g2_ParamLimits

0x3faa,	// (0x000793b7) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00084765) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00084765) popup_cale_events_window_g

0x3fca,	// (0x000793d7) popup_cale_events_window_t1_ParamLimits

0x3fca,	// (0x000793d7) popup_cale_events_window_t1

0x3fdc,	// (0x000793e9) popup_cale_events_window_t2_ParamLimits

0x3fdc,	// (0x000793e9) popup_cale_events_window_t2

0x401a,	// (0x00079427) popup_cale_events_window_t3_ParamLimits

0x401a,	// (0x00079427) popup_cale_events_window_t3

0x4054,	// (0x00079461) popup_cale_events_window_t4_ParamLimits

0x4054,	// (0x00079461) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0008476a) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0008476a) popup_cale_events_window_t

0x408a,	// (0x00079497) call_type_pane

0x409a,	// (0x000794a7) popup_call_status_window_g1

0x40ae,	// (0x000794bb) popup_call_status_window_g2

0x40c2,	// (0x000794cf) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00084773) popup_call_status_window_g

0x40d1,	// (0x000794de) call_type_pane_g1

0x40da,	// (0x000794e7) call_type_pane_g2

0x0001,

0xf36d,	// (0x0008477a) call_type_pane_g

0x1b63,	// (0x00076f70) bg_popup_sub_pane_cp02

0x40e3,	// (0x000794f0) listscroll_popup_wml_pane

0x40eb,	// (0x000794f8) list_wml_pane

0x40f5,	// (0x00079502) scroll_pane_cp013

0x4100,	// (0x0007950d) list_single_graphic_popup_wml_pane_ParamLimits

0x4100,	// (0x0007950d) list_single_graphic_popup_wml_pane

0x225c,	// (0x00077669) list_single_graphic_popup_wml_pane_g1

0x4114,	// (0x00079521) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0008477f) list_single_graphic_popup_wml_pane_g

0x411c,	// (0x00079529) list_single_graphic_popup_wml_pane_t1

0x4132,	// (0x0007953f) aid_call_pane

0x1db6,	// (0x000771c3) popup_clock_analogue_window_g1

0x1db6,	// (0x000771c3) popup_clock_analogue_window_g2

0xac49,	// (0x00080056) popup_clock_analogue_window_g3

0xac49,	// (0x00080056) popup_clock_analogue_window_g4

0x225c,	// (0x00077669) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00084784) popup_clock_analogue_window_g

0xac51,	// (0x0008005e) popup_clock_analogue_window_t1

0xac5f,	// (0x0008006c) clock_digital_number_pane_ParamLimits

0xac5f,	// (0x0008006c) clock_digital_number_pane

0xac6b,	// (0x00080078) clock_digital_number_pane_cp02_ParamLimits

0xac6b,	// (0x00080078) clock_digital_number_pane_cp02

0xac77,	// (0x00080084) clock_digital_number_pane_cp03_ParamLimits

0xac77,	// (0x00080084) clock_digital_number_pane_cp03

0xac83,	// (0x00080090) clock_digital_number_pane_cp04_ParamLimits

0xac83,	// (0x00080090) clock_digital_number_pane_cp04

0xac93,	// (0x000800a0) clock_digital_separator_pane_ParamLimits

0xac93,	// (0x000800a0) clock_digital_separator_pane

0xac9f,	// (0x000800ac) popup_clock_digital_window_t1

0x225c,	// (0x00077669) clock_digital_number_pane_g1

0x225c,	// (0x00077669) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x000846f2) clock_digital_number_pane_g

0x225c,	// (0x00077669) clock_digital_separator_pane_g1

0x225c,	// (0x00077669) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x000846f2) clock_digital_separator_pane_g

0x1b63,	// (0x00076f70) bg_popup_window_pane_cp04

0x413a,	// (0x00079547) heading_pane_cp03

0x4142,	// (0x0007954f) listscroll_popup_gms_pane

0x414a,	// (0x00079557) grid_large_graphic_popup_pane

0x4154,	// (0x00079561) listscroll_popup_gms_pane_g1

0x415c,	// (0x00079569) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0008478f) listscroll_popup_gms_pane_g

0x31f7,	// (0x00078604) scroll_pane_cp014

0x4164,	// (0x00079571) cell_large_graphic_popup_pane_ParamLimits

0x4164,	// (0x00079571) cell_large_graphic_popup_pane

0x417c,	// (0x00079589) cell_large_graphic_popup_pane_g1_ParamLimits

0x417c,	// (0x00079589) cell_large_graphic_popup_pane_g1

0x4188,	// (0x00079595) cell_large_graphic_popup_pane_g2_ParamLimits

0x4188,	// (0x00079595) cell_large_graphic_popup_pane_g2

0x4194,	// (0x000795a1) cell_large_graphic_popup_pane_g3_ParamLimits

0x4194,	// (0x000795a1) cell_large_graphic_popup_pane_g3

0x41a1,	// (0x000795ae) cell_large_graphic_popup_pane_g4_ParamLimits

0x41a1,	// (0x000795ae) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00084794) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00084794) cell_large_graphic_popup_pane_g

0x41b1,	// (0x000795be) grid_highlight_pane_cp010

0x225c,	// (0x00077669) bg_popup_call_pane_g1

0x41bb,	// (0x000795c8) list_single_graphic_popup_conf_pane_ParamLimits

0x41bb,	// (0x000795c8) list_single_graphic_popup_conf_pane

0x41ce,	// (0x000795db) list_highlight_pane_cp01

0x41d7,	// (0x000795e4) list_single_graphic_popup_conf_pane_g1

0x41df,	// (0x000795ec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0008479d) list_single_graphic_popup_conf_pane_g

0x41e7,	// (0x000795f4) list_single_graphic_popup_conf_pane_t1

0x41f5,	// (0x00079602) linegrid_cams_pane_g1

0x41fe,	// (0x0007960b) linegrid_cams_pane_g2

0x289f,	// (0x00077cac) linegrid_cams_pane_g3

0x4207,	// (0x00079614) linegrid_cams_pane_g4

0x4210,	// (0x0007961d) linegrid_cams_pane_g5

0x4219,	// (0x00079626) linegrid_cams_pane_g6

0x28a8,	// (0x00077cb5) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000847a2) linegrid_cams_pane_g

0x4224,	// (0x00079631) popup_clock_analogue_window

0x4224,	// (0x00079631) popup_clock_digital_window

0x1b63,	// (0x00076f70) popup_phob_thumbnail_window

0x225c,	// (0x00077669) call_video_uplink_pane_g1

0x422d,	// (0x0007963a) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x000847b1) call_video_uplink_pane_g

0x4235,	// (0x00079642) video_uplink_pane

0x423d,	// (0x0007964a) mce_image_pane_g1

0x4247,	// (0x00079654) mce_image_pane_g2

0x4251,	// (0x0007965e) mce_image_pane_g3

0x4259,	// (0x00079666) mce_image_pane_g4

0x4261,	// (0x0007966e) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x000847b6) mce_image_pane_g

0x4269,	// (0x00079676) control_top_pane_stacon_cp01_ParamLimits

0x4269,	// (0x00079676) control_top_pane_stacon_cp01

0x427d,	// (0x0007968a) uni_indicator_pane_stacon_cp01_ParamLimits

0x427d,	// (0x0007968a) uni_indicator_pane_stacon_cp01

0x428e,	// (0x0007969b) bg_popup_sub_pane_cp03

0x4298,	// (0x000796a5) chi_dic_find_pane

0x42a0,	// (0x000796ad) listscroll_chi_dic_pane

0x42a9,	// (0x000796b6) main_pane_chidic_g1

0x42bc,	// (0x000796c9) chi_dic_find_pane_t1

0x42ca,	// (0x000796d7) find_chidic_pane

0x42d3,	// (0x000796e0) chi_dic_list_pane_ParamLimits

0x42d3,	// (0x000796e0) chi_dic_list_pane

0x42e4,	// (0x000796f1) scroll_pane_cp020

0x42ec,	// (0x000796f9) find_chidic_pane_t1

0x1b63,	// (0x00076f70) input_focus_pane_cp06

0x42fb,	// (0x00079708) list_chi_dic_pane_ParamLimits

0x42fb,	// (0x00079708) list_chi_dic_pane

0x430d,	// (0x0007971a) list_chi_dic_pane_t1_ParamLimits

0x430d,	// (0x0007971a) list_chi_dic_pane_t1

0x1b63,	// (0x00076f70) list_highlight_pane_cp020

0x4320,	// (0x0007972d) bg_cale_heading_pane_g1

0x4328,	// (0x00079735) bg_cale_heading_pane_g2

0x4330,	// (0x0007973d) bg_cale_heading_pane_g3

0x4338,	// (0x00079745) bg_cale_heading_pane_g4

0x4342,	// (0x0007974f) bg_cale_heading_pane_g5

0x434c,	// (0x00079759) bg_cale_heading_pane_g6

0x4354,	// (0x00079761) bg_cale_heading_pane_g7

0x435c,	// (0x00079769) bg_cale_heading_pane_g8

0x4366,	// (0x00079773) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x000847c1) bg_cale_heading_pane_g

0x4320,	// (0x0007972d) bg_cale_side_pane_g1

0x4370,	// (0x0007977d) bg_cale_side_pane_g2

0x4378,	// (0x00079785) bg_cale_side_pane_g3

0x4380,	// (0x0007978d) bg_cale_side_pane_g4

0x4388,	// (0x00079795) bg_cale_side_pane_g5

0x4390,	// (0x0007979d) bg_cale_side_pane_g6

0x4398,	// (0x000797a5) bg_cale_side_pane_g7

0x43a0,	// (0x000797ad) bg_cale_side_pane_g8

0x43a8,	// (0x000797b5) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x000847d4) bg_cale_side_pane_g

0x43b0,	// (0x000797bd) popup_call_status_window_ParamLimits

0x43b0,	// (0x000797bd) popup_call_status_window

0x43f9,	// (0x00079806) stacon_top_pane

0x4401,	// (0x0007980e) status_pane_ParamLimits

0x4401,	// (0x0007980e) status_pane

0x4416,	// (0x00079823) status_small_pane

0x441e,	// (0x0007982b) control_pane

0x1b63,	// (0x00076f70) stacon_bottom_pane

0x4426,	// (0x00079833) list_single_mce_smart_pane_t1_ParamLimits

0x4426,	// (0x00079833) list_single_mce_smart_pane_t1

0x4439,	// (0x00079846) list_single_mce_smart_pane_t2_ParamLimits

0x4439,	// (0x00079846) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x000847e7) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x000847e7) list_single_mce_smart_pane_t

0x4458,	// (0x00079865) compass_pane

0x4461,	// (0x0007986e) main_location2_pane_t1

0x4473,	// (0x00079880) main_location2_pane_t2

0x4485,	// (0x00079892) main_location2_pane_t3

0x0003,

0xf3df,	// (0x000847ec) main_location2_pane_t

0x44c9,	// (0x000798d6) compass_pane_g1_ParamLimits

0x44c9,	// (0x000798d6) compass_pane_g1

0x44d5,	// (0x000798e2) compass_pane_t1

0x44e4,	// (0x000798f1) compass_pane_t2

0x0005,

0xf3e8,	// (0x000847f5) compass_pane_t

0x452b,	// (0x00079938) text_secondary_cp61

0x45aa,	// (0x000799b7) navi_pane_cams_g5

0x4624,	// (0x00079a31) navi_pane_im_t1

0x4632,	// (0x00079a3f) navi_pane_mp_g1_ParamLimits

0x4632,	// (0x00079a3f) navi_pane_mp_g1

0x4646,	// (0x00079a53) navi_pane_mp_g2_ParamLimits

0x4646,	// (0x00079a53) navi_pane_mp_g2

0x4652,	// (0x00079a5f) navi_pane_mp_g3_ParamLimits

0x4652,	// (0x00079a5f) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00084809) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00084809) navi_pane_mp_g

0x465e,	// (0x00079a6b) navi_pane_mp_t1

0x466c,	// (0x00079a79) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00084810) navi_pane_mp_t

0x4715,	// (0x00079b22) navi_pane_vt_g1

0x465e,	// (0x00079a6b) navi_pane_vt_t1

0x471d,	// (0x00079b2a) navi_slider_pane

0x4725,	// (0x00079b32) zooming_pane

0x472d,	// (0x00079b3a) navi_slider_pane_g1

0xacbc,	// (0x000800c9) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00084817) navi_slider_pane_g

0x4751,	// (0x00079b5e) aid_levels_zoom

0x4759,	// (0x00079b66) zooming_pane_g1

0x4761,	// (0x00079b6e) zooming_pane_g2

0x4761,	// (0x00079b6e) zooming_pane_g3

0x0002,

0xf419,	// (0x00084826) zooming_pane_g

0x4769,	// (0x00079b76) level_10_zoom

0x4772,	// (0x00079b7f) level_11_zoom

0x477b,	// (0x00079b88) level_1_zoom

0x4784,	// (0x00079b91) level_2_zoom

0x478d,	// (0x00079b9a) level_3_zoom

0x4796,	// (0x00079ba3) level_4_zoom

0x479f,	// (0x00079bac) level_5_zoom

0x47a8,	// (0x00079bb5) level_6_zoom

0x47b1,	// (0x00079bbe) level_7_zoom

0x47ba,	// (0x00079bc7) level_8_zoom

0x47c3,	// (0x00079bd0) level_9_zoom

0x47d4,	// (0x00079be1) popup_phob_thumbnail_window_g1

0x47dc,	// (0x00079be9) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0008482d) popup_phob_thumbnail_window_g

0xbb9d,	// (0x00080faa) level_1_location

0xbba5,	// (0x00080fb2) level_2_location

0xbbad,	// (0x00080fba) level_3_location

0xbbb5,	// (0x00080fc2) level_4_location

0x4725,	// (0x00079b32) level_5_location

0x47e4,	// (0x00079bf1) mce_icon_pane_g1

0x47ec,	// (0x00079bf9) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00084832) mce_icon_pane_g

0x47f4,	// (0x00079c01) main_mup_pane_g1_ParamLimits

0x47f4,	// (0x00079c01) main_mup_pane_g1

0x480a,	// (0x00079c17) main_mup_pane_g2_ParamLimits

0x480a,	// (0x00079c17) main_mup_pane_g2

0x4822,	// (0x00079c2f) main_mup_pane_g3_ParamLimits

0x4822,	// (0x00079c2f) main_mup_pane_g3

0x483a,	// (0x00079c47) main_mup_pane_g4_ParamLimits

0x483a,	// (0x00079c47) main_mup_pane_g4

0x4852,	// (0x00079c5f) main_mup_pane_g5_ParamLimits

0x4852,	// (0x00079c5f) main_mup_pane_g5

0x486e,	// (0x00079c7b) main_mup_pane_g6_ParamLimits

0x486e,	// (0x00079c7b) main_mup_pane_g6

0x4886,	// (0x00079c93) main_mup_pane_g7_ParamLimits

0x4886,	// (0x00079c93) main_mup_pane_g7

0x489e,	// (0x00079cab) main_mup_pane_g8_ParamLimits

0x489e,	// (0x00079cab) main_mup_pane_g8

0x48b8,	// (0x00079cc5) main_mup_pane_g9_ParamLimits

0x48b8,	// (0x00079cc5) main_mup_pane_g9

0x48d2,	// (0x00079cdf) main_mup_pane_g10_ParamLimits

0x48d2,	// (0x00079cdf) main_mup_pane_g10

0x48ec,	// (0x00079cf9) main_mup_pane_g11_ParamLimits

0x48ec,	// (0x00079cf9) main_mup_pane_g11

0x4900,	// (0x00079d0d) main_mup_pane_g12_ParamLimits

0x4900,	// (0x00079d0d) main_mup_pane_g12

0x4916,	// (0x00079d23) main_mup_pane_g13_ParamLimits

0x4916,	// (0x00079d23) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00084837) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00084837) main_mup_pane_g

0x492a,	// (0x00079d37) main_mup_pane_t1_ParamLimits

0x492a,	// (0x00079d37) main_mup_pane_t1

0x4944,	// (0x00079d51) main_mup_pane_t2_ParamLimits

0x4944,	// (0x00079d51) main_mup_pane_t2

0x495c,	// (0x00079d69) main_mup_pane_t3_ParamLimits

0x495c,	// (0x00079d69) main_mup_pane_t3

0x4974,	// (0x00079d81) main_mup_pane_t4_ParamLimits

0x4974,	// (0x00079d81) main_mup_pane_t4

0x4992,	// (0x00079d9f) main_mup_pane_t5_ParamLimits

0x4992,	// (0x00079d9f) main_mup_pane_t5

0x49a7,	// (0x00079db4) main_mup_pane_t6_ParamLimits

0x49a7,	// (0x00079db4) main_mup_pane_t6

0x0005,

0xf445,	// (0x00084852) main_mup_pane_t_ParamLimits

0xf445,	// (0x00084852) main_mup_pane_t

0x49b9,	// (0x00079dc6) mup_progress_pane_ParamLimits

0x49b9,	// (0x00079dc6) mup_progress_pane

0x49c5,	// (0x00079dd2) mup_visualizer_pane_ParamLimits

0x49c5,	// (0x00079dd2) mup_visualizer_pane

0x49f5,	// (0x00079e02) mup_volume_pane_ParamLimits

0x49f5,	// (0x00079e02) mup_volume_pane

0x4a13,	// (0x00079e20) mup_visualizer_pane_g1_ParamLimits

0x4a13,	// (0x00079e20) mup_visualizer_pane_g1

0x4a13,	// (0x00079e20) mup_visualizer_pane_g2_ParamLimits

0x4a13,	// (0x00079e20) mup_visualizer_pane_g2

0x44c9,	// (0x000798d6) mup_visualizer_pane_g3_ParamLimits

0x44c9,	// (0x000798d6) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0008485f) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0008485f) mup_visualizer_pane_g

0x225c,	// (0x00077669) mup_volume_pane_g1

0x4a29,	// (0x00079e36) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00084866) mup_volume_pane_g

0x225c,	// (0x00077669) mup_progress_pane_g1

0x4a32,	// (0x00079e3f) mup_progress_pane_g2

0x4a3b,	// (0x00079e48) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0008486b) mup_progress_pane_g

0x1b63,	// (0x00076f70) bg_popup_window_pane_cp05

0x4a44,	// (0x00079e51) heading_pane_cp02_ParamLimits

0x4a44,	// (0x00079e51) heading_pane_cp02

0x4a5e,	// (0x00079e6b) list_popup_blid_pane

0x4a66,	// (0x00079e73) list_blid_sat_info_pane_ParamLimits

0x4a66,	// (0x00079e73) list_blid_sat_info_pane

0x4a79,	// (0x00079e86) list_blid_sat_info_pane_g1

0x4a81,	// (0x00079e8e) list_blid_sat_info_pane_t1

0x4b87,	// (0x00079f94) mup_equalizer_pane_ParamLimits

0x4b87,	// (0x00079f94) mup_equalizer_pane

0x4ba0,	// (0x00079fad) mup_equalizer_pane_cp1_ParamLimits

0x4ba0,	// (0x00079fad) mup_equalizer_pane_cp1

0x4bbd,	// (0x00079fca) mup_equalizer_pane_cp2_ParamLimits

0x4bbd,	// (0x00079fca) mup_equalizer_pane_cp2

0x4bda,	// (0x00079fe7) mup_equalizer_pane_cp3_ParamLimits

0x4bda,	// (0x00079fe7) mup_equalizer_pane_cp3

0x4bfb,	// (0x0007a008) mup_equalizer_pane_cp4_ParamLimits

0x4bfb,	// (0x0007a008) mup_equalizer_pane_cp4

0x4c1c,	// (0x0007a029) mup_equalizer_pane_cp5

0x4c30,	// (0x0007a03d) mup_equalizer_pane_cp6

0x4c44,	// (0x0007a051) mup_equalizer_pane_cp7

0xbabb,	// (0x00080ec8) bg_popup_call_poc_act_pane_g9

0xbac3,	// (0x00080ed0) bg_popup_call_poc_act_pane_g10

0xbacb,	// (0x00080ed8) bg_popup_call_poc_act_pane_g11

0x000a,

0x1dbe,	// (0x000771cb) mup_scale_pane

0x225c,	// (0x00077669) mup_scale_pane_g1

0x4c58,	// (0x0007a065) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00084887) mup_scale_pane_g

0x4c8e,	// (0x0007a09b) msg_data_pane

0x4c96,	// (0x0007a0a3) scroll_pane_cp017

0x0a85,	// (0x00075e92) bg_list_pane_cp04_ParamLimits

0x0a85,	// (0x00075e92) bg_list_pane_cp04

0x4c9e,	// (0x0007a0ab) msg_data_pane_g1

0x4ca6,	// (0x0007a0b3) msg_data_pane_g2

0x4cb0,	// (0x0007a0bd) msg_data_pane_g3

0x4cb8,	// (0x0007a0c5) msg_data_pane_g4

0x4cc0,	// (0x0007a0cd) msg_data_pane_g5

0x4cc8,	// (0x0007a0d5) msg_data_pane_g6

0x4cd0,	// (0x0007a0dd) msg_data_pane_g7

0x0006,

0xf489,	// (0x00084896) msg_data_pane_g

0x0aa5,	// (0x00075eb2) msg_text_pane_ParamLimits

0x0aa5,	// (0x00075eb2) msg_text_pane

0x4cd8,	// (0x0007a0e5) qrid_highlight_pane_cp011_ParamLimits

0x4cd8,	// (0x0007a0e5) qrid_highlight_pane_cp011

0x1b63,	// (0x00076f70) msg_body_pane

0x1b63,	// (0x00076f70) msg_header_pane

0x4cf7,	// (0x0007a104) input_focus_pane_cp07

0x0ad5,	// (0x00075ee2) msg_header_pane_t1_ParamLimits

0x0ad5,	// (0x00075ee2) msg_header_pane_t1

0x0ae9,	// (0x00075ef6) msg_header_pane_t2_ParamLimits

0x0ae9,	// (0x00075ef6) msg_header_pane_t2

0x0001,

0xf49d,	// (0x000848aa) msg_header_pane_t_ParamLimits

0xf49d,	// (0x000848aa) msg_header_pane_t

0x4d0c,	// (0x0007a119) msg_body_pane_g1

0x0afb,	// (0x00075f08) msg_body_pane_t1_ParamLimits

0x0afb,	// (0x00075f08) msg_body_pane_t1

0x0b2c,	// (0x00075f39) msg_body_pane_t2_ParamLimits

0x0b2c,	// (0x00075f39) msg_body_pane_t2

0x0b3e,	// (0x00075f4b) msg_body_pane_t3_ParamLimits

0x0b3e,	// (0x00075f4b) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x000848af) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x000848af) msg_body_pane_t

0x4d4e,	// (0x0007a15b) main_viewer_pane_g1_ParamLimits

0x4d4e,	// (0x0007a15b) main_viewer_pane_g1

0x4d5c,	// (0x0007a169) main_viewer_pane_g2_ParamLimits

0x4d5c,	// (0x0007a169) main_viewer_pane_g2

0x4d6a,	// (0x0007a177) main_viewer_pane_g3_ParamLimits

0x4d6a,	// (0x0007a177) main_viewer_pane_g3

0x4d79,	// (0x0007a186) main_viewer_pane_g4_ParamLimits

0x4d79,	// (0x0007a186) main_viewer_pane_g4

0xace6,	// (0x000800f3) main_viewer_pane_g5_ParamLimits

0xace6,	// (0x000800f3) main_viewer_pane_g5

0xace6,	// (0x000800f3) main_viewer_pane_g7_ParamLimits

0xace6,	// (0x000800f3) main_viewer_pane_g7

0xacf8,	// (0x00080105) main_viewer_pane_g8_ParamLimits

0xacf8,	// (0x00080105) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x000848bf) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x000848bf) main_viewer_pane_g

0x4d88,	// (0x0007a195) viewer_content_pane_ParamLimits

0x4d88,	// (0x0007a195) viewer_content_pane

0x4dc3,	// (0x0007a1d0) main_postcard_pane_g1_ParamLimits

0x4dc3,	// (0x0007a1d0) main_postcard_pane_g1

0x4dd9,	// (0x0007a1e6) main_postcard_pane_g2_ParamLimits

0x4dd9,	// (0x0007a1e6) main_postcard_pane_g2

0x4def,	// (0x0007a1fc) main_postcard_pane_g3_ParamLimits

0x4def,	// (0x0007a1fc) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x000848d0) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x000848d0) main_postcard_pane_g

0x4e06,	// (0x0007a213) main_postcard_pane_g4

0xbcd0,	// (0x000810dd) smil_status_volume_pane_g2

0x4e49,	// (0x0007a256) postcard_pane_ParamLimits

0x4e49,	// (0x0007a256) postcard_pane

0x4e8b,	// (0x0007a298) postcard_pane_g1_ParamLimits

0x4e8b,	// (0x0007a298) postcard_pane_g1

0x4e99,	// (0x0007a2a6) postcard_pane_g2_ParamLimits

0x4e99,	// (0x0007a2a6) postcard_pane_g2

0x4ea5,	// (0x0007a2b2) postcard_pane_g3_ParamLimits

0x4ea5,	// (0x0007a2b2) postcard_pane_g3

0x4eb1,	// (0x0007a2be) postcard_pane_g4_ParamLimits

0x4eb1,	// (0x0007a2be) postcard_pane_g4

0x4ebf,	// (0x0007a2cc) postcard_pane_g5_ParamLimits

0x4ebf,	// (0x0007a2cc) postcard_pane_g5

0x4ed4,	// (0x0007a2e1) postcard_pane_g6_ParamLimits

0x4ed4,	// (0x0007a2e1) postcard_pane_g6

0x4e8b,	// (0x0007a298) postcard_pane_g7_ParamLimits

0x4e8b,	// (0x0007a298) postcard_pane_g7

0x0006,

0xf4d0,	// (0x000848dd) postcard_pane_g_ParamLimits

0xf4d0,	// (0x000848dd) postcard_pane_g

0x4ee8,	// (0x0007a2f5) main_mp2_pane_g1_ParamLimits

0x4ee8,	// (0x0007a2f5) main_mp2_pane_g1

0x4ef4,	// (0x0007a301) main_mp2_pane_g2_ParamLimits

0x4ef4,	// (0x0007a301) main_mp2_pane_g2

0x4f00,	// (0x0007a30d) main_mp2_pane_g3_ParamLimits

0x4f00,	// (0x0007a30d) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x000848ec) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x000848ec) main_mp2_pane_g

0x4f0c,	// (0x0007a319) main_mp2_pane_t1_ParamLimits

0x4f0c,	// (0x0007a319) main_mp2_pane_t1

0x4f21,	// (0x0007a32e) main_mp2_pane_t2_ParamLimits

0x4f21,	// (0x0007a32e) main_mp2_pane_t2

0x4f33,	// (0x0007a340) main_mp2_pane_t3_ParamLimits

0x4f33,	// (0x0007a340) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x000848f3) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x000848f3) main_mp2_pane_t

0x4f45,	// (0x0007a352) pec_content_pane_ParamLimits

0x4f45,	// (0x0007a352) pec_content_pane

0x31f7,	// (0x00078604) scroll_pane_cp015

0x4f57,	// (0x0007a364) pec_attribute_pane_ParamLimits

0x4f57,	// (0x0007a364) pec_attribute_pane

0x4f67,	// (0x0007a374) pec_content_pane_g1_ParamLimits

0x4f67,	// (0x0007a374) pec_content_pane_g1

0x4f73,	// (0x0007a380) pec_content_pane_t1_ParamLimits

0x4f73,	// (0x0007a380) pec_content_pane_t1

0x4f85,	// (0x0007a392) pec_content_pane_t2_ParamLimits

0x4f85,	// (0x0007a392) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x000848fa) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x000848fa) pec_content_pane_t

0x4f97,	// (0x0007a3a4) list_single_graphic_pane_cp01_ParamLimits

0x4f97,	// (0x0007a3a4) list_single_graphic_pane_cp01

0x1dbe,	// (0x000771cb) bg_popup_sub_pane_cp04

0x4fac,	// (0x0007a3b9) popup_mup_playback_window_g1

0x4fb8,	// (0x0007a3c5) popup_mup_playback_window_t1

0x4fcd,	// (0x0007a3da) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x000848ff) popup_mup_playback_window_t

0x5022,	// (0x0007a42f) main_image_pane_g1_ParamLimits

0x5022,	// (0x0007a42f) main_image_pane_g1

0x50ff,	// (0x0007a50c) scroll_pane_cp018_ParamLimits

0x50ff,	// (0x0007a50c) scroll_pane_cp018

0x5117,	// (0x0007a524) scroll_pane_cp016_ParamLimits

0x5117,	// (0x0007a524) scroll_pane_cp016

0x514b,	// (0x0007a558) smil2_image_pane_ParamLimits

0x514b,	// (0x0007a558) smil2_image_pane

0x517b,	// (0x0007a588) smil2_root_pane_ParamLimits

0x517b,	// (0x0007a588) smil2_root_pane

0x51b3,	// (0x0007a5c0) smil2_text_pane_ParamLimits

0x51b3,	// (0x0007a5c0) smil2_text_pane

0x1b63,	// (0x00076f70) bg_list_pane_cp06

0x523b,	// (0x0007a648) grid_radio_pane

0x1b63,	// (0x00076f70) bg_popup_window_pane_cp06

0x5243,	// (0x0007a650) main_fmradio_pane_t1

0x413a,	// (0x00079547) heading_pane_cp04

0x5251,	// (0x0007a65e) main_fmradio_pane_t2

0xbad3,	// (0x00080ee0) popup_cale_lunar_info_window_g1

0x525f,	// (0x0007a66c) main_fmradio_pane_t3

0xbadb,	// (0x00080ee8) popup_cale_lunar_info_window_g2

0x526d,	// (0x0007a67a) main_fmradio_pane_t4

0x0001,

0x527b,	// (0x0007a688) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x000849da) popup_cale_lunar_info_window_g

0xf507,	// (0x00084914) main_fmradio_pane_t

0x5289,	// (0x0007a696) wait_bar_pane_cp03

0x5291,	// (0x0007a69e) cell_fmradio_pane_ParamLimits

0x5291,	// (0x0007a69e) cell_fmradio_pane

0x4e8b,	// (0x0007a298) cell_fmradio_pane_g1_ParamLimits

0x4e8b,	// (0x0007a298) cell_fmradio_pane_g1

0x1b63,	// (0x00076f70) grid_highlight_pane_cp011

0x52a4,	// (0x0007a6b1) poc_content_pane_ParamLimits

0x52a4,	// (0x0007a6b1) poc_content_pane

0x52b6,	// (0x0007a6c3) scroll_pane_cp019

0x52be,	// (0x0007a6cb) popup_call_poc_act_window_ParamLimits

0x52be,	// (0x0007a6cb) popup_call_poc_act_window

0x52e2,	// (0x0007a6ef) popup_call_poc_inact_window_ParamLimits

0x52e2,	// (0x0007a6ef) popup_call_poc_inact_window

0xf5a4,	// (0x000849b1) bg_popup_call_poc_act_pane_g

0xba4b,	// (0x00080e58) bg_popup_call_poc_inact_pane_g1

0xba53,	// (0x00080e60) bg_popup_call_poc_inact_pane_g2

0x52fb,	// (0x0007a708) popup_call_poc_act_window_g2

0xba5b,	// (0x00080e68) bg_popup_call_poc_inact_pane_g3

0xba63,	// (0x00080e70) bg_popup_call_poc_inact_pane_g4

0xba6b,	// (0x00080e78) bg_popup_call_poc_inact_pane_g5

0x5303,	// (0x0007a710) popup_call_poc_act_window_t1_ParamLimits

0x5303,	// (0x0007a710) popup_call_poc_act_window_t1

0x532b,	// (0x0007a738) popup_call_poc_act_window_t2_ParamLimits

0x532b,	// (0x0007a738) popup_call_poc_act_window_t2

0x5353,	// (0x0007a760) popup_call_poc_act_window_t3_ParamLimits

0x5353,	// (0x0007a760) popup_call_poc_act_window_t3

0x537b,	// (0x0007a788) popup_call_poc_act_window_t4_ParamLimits

0x537b,	// (0x0007a788) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0008491f) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0008491f) popup_call_poc_act_window_t

0xba73,	// (0x00080e80) bg_popup_call_poc_inact_pane_g6

0xba7b,	// (0x00080e88) bg_popup_call_poc_inact_pane_g7

0xba83,	// (0x00080e90) bg_popup_call_poc_inact_pane_g8

0x538d,	// (0x0007a79a) popup_call_poc_inact_window_g2

0xba8b,	// (0x00080e98) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0008499e) bg_popup_call_poc_inact_pane_g

0x5395,	// (0x0007a7a2) popup_call_poc_inact_window_t1_ParamLimits

0x5395,	// (0x0007a7a2) popup_call_poc_inact_window_t1

0x53aa,	// (0x0007a7b7) popup_call_poc_inact_window_t2_ParamLimits

0x53aa,	// (0x0007a7b7) popup_call_poc_inact_window_t2

0x53bf,	// (0x0007a7cc) popup_call_poc_inact_window_t3_ParamLimits

0x53bf,	// (0x0007a7cc) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00084928) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00084928) popup_call_poc_inact_window_t

0xbc43,	// (0x00081050) context_pane_ParamLimits

0x5caa,	// (0x0007b0b7) signal_pane_ParamLimits

0x4725,	// (0x00079b32) main_call2_pane

0xbc31,	// (0x0008103e) popup_phob_thumbnail2_window_ParamLimits

0xbc31,	// (0x0008103e) popup_phob_thumbnail2_window

0xacce,	// (0x000800db) aid_hotspot_pointer_arrow_pane

0xacd6,	// (0x000800e3) aid_hotspot_pointer_hand_pane

0x57c0,	// (0x0007abcd) phob_pre_status_pane_g5

0x295c,	// (0x00077d69) cams_zoom_pane_ParamLimits

0x296b,	// (0x00077d78) image_vga_pane_ParamLimits

0x2985,	// (0x00077d92) main_camera_pane_g1_ParamLimits

0x2997,	// (0x00077da4) main_camera_pane_g2_ParamLimits

0x29a7,	// (0x00077db4) main_camera_pane_g3_ParamLimits

0x29b7,	// (0x00077dc4) main_camera_pane_g4_ParamLimits

0x29c7,	// (0x00077dd4) main_camera_pane_g5_ParamLimits

0x29d7,	// (0x00077de4) main_camera_pane_g6_ParamLimits

0x29e9,	// (0x00077df6) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00084627) main_camera_pane_g_ParamLimits

0x2a05,	// (0x00077e12) main_camera_pane_t1_ParamLimits

0x2a1b,	// (0x00077e28) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00084638) main_camera_pane_t_ParamLimits

0x1dbe,	// (0x000771cb) bg_popup_preview_window_pane_cp01_ParamLimits

0x1dbe,	// (0x000771cb) bg_popup_preview_window_pane_cp01

0x53d4,	// (0x0007a7e1) popup_phob_thumbnail2_window_g1_ParamLimits

0x53d4,	// (0x0007a7e1) popup_phob_thumbnail2_window_g1

0x1b63,	// (0x00076f70) call2_cli_visual_pane

0x53fb,	// (0x0007a808) popup_call2_audio_conf_window_ParamLimits

0x53fb,	// (0x0007a808) popup_call2_audio_conf_window

0x541b,	// (0x0007a828) popup_call2_audio_first_window_ParamLimits

0x541b,	// (0x0007a828) popup_call2_audio_first_window

0x54b1,	// (0x0007a8be) popup_call2_audio_in_window_ParamLimits

0x54b1,	// (0x0007a8be) popup_call2_audio_in_window

0x54f9,	// (0x0007a906) popup_call2_audio_out_window_ParamLimits

0x54f9,	// (0x0007a906) popup_call2_audio_out_window

0x5563,	// (0x0007a970) popup_call2_audio_second_window_ParamLimits

0x5563,	// (0x0007a970) popup_call2_audio_second_window

0x55c9,	// (0x0007a9d6) popup_call2_audio_wait_window_ParamLimits

0x55c9,	// (0x0007a9d6) popup_call2_audio_wait_window

0x1b63,	// (0x00076f70) bg_popup_call2_act_pane_cp03

0x1da0,	// (0x000771ad) list_conf_pane_cp

0x5603,	// (0x0007aa10) popup_call2_audio_conf_window_t1

0x41bb,	// (0x000795c8) list_single_graphic_popup_conf2_pane_ParamLimits

0x41bb,	// (0x000795c8) list_single_graphic_popup_conf2_pane

0x41ce,	// (0x000795db) list_highlight_pane_cp04

0x5611,	// (0x0007aa1e) list_single_graphic_popup_conf2_pane_g1

0x41df,	// (0x000795ec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0008492f) list_single_graphic_popup_conf2_pane_g

0x561b,	// (0x0007aa28) list_single_graphic_popup_conf2_pane_t1

0x5629,	// (0x0007aa36) bg_popup_call2_act_pane_cp01_ParamLimits

0x5629,	// (0x0007aa36) bg_popup_call2_act_pane_cp01

0xad10,	// (0x0008011d) call_type_pane_cp05_ParamLimits

0xad10,	// (0x0008011d) call_type_pane_cp05

0xad64,	// (0x00080171) popup_call2_audio_second_window_g1_ParamLimits

0xad64,	// (0x00080171) popup_call2_audio_second_window_g1

0xadb8,	// (0x000801c5) popup_call2_audio_second_window_g2_ParamLimits

0xadb8,	// (0x000801c5) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00084934) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00084934) popup_call2_audio_second_window_g

0xae1d,	// (0x0008022a) popup_call2_audio_second_window_t1_ParamLimits

0xae1d,	// (0x0008022a) popup_call2_audio_second_window_t1

0xaed8,	// (0x000802e5) popup_call2_audio_second_window_t2_ParamLimits

0xaed8,	// (0x000802e5) popup_call2_audio_second_window_t2

0xaf2b,	// (0x00080338) popup_call2_audio_second_window_t3_ParamLimits

0xaf2b,	// (0x00080338) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0008493b) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0008493b) popup_call2_audio_second_window_t

0x1b63,	// (0x00076f70) bg_popup_call2_in_pane_cp02

0x1b6d,	// (0x00076f7a) call_type_pane_cp04

0x1b75,	// (0x00076f82) popup_call2_audio_wait_window_g1

0x1b7d,	// (0x00076f8a) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00084514) popup_call2_audio_wait_window_g

0x1b85,	// (0x00076f92) popup_call2_audio_wait_window_t3

0xb01e,	// (0x0008042b) bg_popup_call2_act_pane_ParamLimits

0xb01e,	// (0x0008042b) bg_popup_call2_act_pane

0xb0de,	// (0x000804eb) call_type_pane_cp03_ParamLimits

0xb0de,	// (0x000804eb) call_type_pane_cp03

0xb142,	// (0x0008054f) popup_call2_audio_first_window_g1_ParamLimits

0xb142,	// (0x0008054f) popup_call2_audio_first_window_g1

0xb1b2,	// (0x000805bf) popup_call2_audio_first_window_g2_ParamLimits

0xb1b2,	// (0x000805bf) popup_call2_audio_first_window_g2

0x4a13,	// (0x00079e20) popup_call2_audio_first_window_g3_ParamLimits

0x4a13,	// (0x00079e20) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00084944) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00084944) popup_call2_audio_first_window_g

0xb290,	// (0x0008069d) popup_call2_audio_first_window_t1_ParamLimits

0xb290,	// (0x0008069d) popup_call2_audio_first_window_t1

0xb393,	// (0x000807a0) popup_call2_audio_first_window_t4_ParamLimits

0xb393,	// (0x000807a0) popup_call2_audio_first_window_t4

0xb476,	// (0x00080883) popup_call2_audio_first_window_t5_ParamLimits

0xb476,	// (0x00080883) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0008494f) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0008494f) popup_call2_audio_first_window_t

0x1db6,	// (0x000771c3) bg_popup_call2_act_pane_g1

0xbae3,	// (0x00080ef0) popup_cale_lunar_info_window_t1

0xbaf1,	// (0x00080efe) popup_cale_lunar_info_window_t2

0xbaff,	// (0x00080f0c) popup_cale_lunar_info_window_t3

0x1b63,	// (0x00076f70) bg_popup_call2_bubble_pane

0xb577,	// (0x00080984) bg_popup_call2_in_pane_cp01_ParamLimits

0xb577,	// (0x00080984) bg_popup_call2_in_pane_cp01

0x181b,	// (0x00076c28) call_type_pane_cp02

0xb5bf,	// (0x000809cc) popup_call2_audio_out_window_g1_ParamLimits

0xb5bf,	// (0x000809cc) popup_call2_audio_out_window_g1

0xb5eb,	// (0x000809f8) popup_call2_audio_out_window_g2_ParamLimits

0xb5eb,	// (0x000809f8) popup_call2_audio_out_window_g2

0xb613,	// (0x00080a20) popup_call2_audio_out_window_g3_ParamLimits

0xb613,	// (0x00080a20) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00084958) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00084958) popup_call2_audio_out_window_g

0xb64e,	// (0x00080a5b) popup_call2_audio_out_window_t1_ParamLimits

0xb64e,	// (0x00080a5b) popup_call2_audio_out_window_t1

0xb6ad,	// (0x00080aba) popup_call2_audio_out_window_t2_ParamLimits

0xb6ad,	// (0x00080aba) popup_call2_audio_out_window_t2

0xb701,	// (0x00080b0e) popup_call2_audio_out_window_t3_ParamLimits

0xb701,	// (0x00080b0e) popup_call2_audio_out_window_t3

0xb717,	// (0x00080b24) popup_call2_audio_out_window_t4_ParamLimits

0xb717,	// (0x00080b24) popup_call2_audio_out_window_t4

0xb72d,	// (0x00080b3a) popup_call2_audio_out_window_t5_ParamLimits

0xb72d,	// (0x00080b3a) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00084961) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00084961) popup_call2_audio_out_window_t

0xb791,	// (0x00080b9e) bg_popup_call2_in_pane_ParamLimits

0xb791,	// (0x00080b9e) bg_popup_call2_in_pane

0xb7ed,	// (0x00080bfa) popup_call2_audio_in_window_g1_ParamLimits

0xb7ed,	// (0x00080bfa) popup_call2_audio_in_window_g1

0xb825,	// (0x00080c32) popup_call2_audio_in_window_g2_ParamLimits

0xb825,	// (0x00080c32) popup_call2_audio_in_window_g2

0xb85d,	// (0x00080c6a) popup_call2_audio_in_window_g3_ParamLimits

0xb85d,	// (0x00080c6a) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0008496e) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0008496e) popup_call2_audio_in_window_g

0xb8b5,	// (0x00080cc2) popup_call2_audio_in_window_t1_ParamLimits

0xb8b5,	// (0x00080cc2) popup_call2_audio_in_window_t1

0xb935,	// (0x00080d42) popup_call2_audio_in_window_t2_ParamLimits

0xb935,	// (0x00080d42) popup_call2_audio_in_window_t2

0xb9b5,	// (0x00080dc2) popup_call2_audio_in_window_t3_ParamLimits

0xb9b5,	// (0x00080dc2) popup_call2_audio_in_window_t3

0xb9cf,	// (0x00080ddc) popup_call2_audio_in_window_t4_ParamLimits

0xb9cf,	// (0x00080ddc) popup_call2_audio_in_window_t4

0xb9e1,	// (0x00080dee) popup_call2_audio_in_window_t5_ParamLimits

0xb9e1,	// (0x00080dee) popup_call2_audio_in_window_t5

0xb9f6,	// (0x00080e03) popup_call2_audio_in_window_t6_ParamLimits

0xb9f6,	// (0x00080e03) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00084977) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00084977) popup_call2_audio_in_window_t

0x1db6,	// (0x000771c3) bg_popup_call2_in_pane_g1

0xbb0d,	// (0x00080f1a) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x000849df) popup_cale_lunar_info_window_t

0x1dbe,	// (0x000771cb) bg_popup_call2_rect_pane_ParamLimits

0x1dbe,	// (0x000771cb) bg_popup_call2_rect_pane

0x1b63,	// (0x00076f70) call2_cli_visual_graphic_pane

0x1b63,	// (0x00076f70) call2_cli_visual_text_pane

0xbce3,	// (0x000810f0) smil_status_volume_pane_g3

0x0002,

0x225c,	// (0x00077669) call2_cli_visual_graphic_pane_g1

0x225c,	// (0x00077669) call2_cli_visual_graphic_pane_g2

0x225c,	// (0x00077669) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00084984) call2_cli_visual_graphic_pane_g

0xba0b,	// (0x00080e18) bg_popup_call2_rect_pane_g1

0x23ab,	// (0x000777b8) bg_popup_call2_rect_pane_g2

0xba13,	// (0x00080e20) bg_popup_call2_rect_pane_g3

0xba1b,	// (0x00080e28) bg_popup_call2_rect_pane_g4

0xba23,	// (0x00080e30) bg_popup_call2_rect_pane_g5

0xba2b,	// (0x00080e38) bg_popup_call2_rect_pane_g6

0xba33,	// (0x00080e40) bg_popup_call2_rect_pane_g7

0xba3b,	// (0x00080e48) bg_popup_call2_rect_pane_g8

0xba43,	// (0x00080e50) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0008498b) bg_popup_call2_rect_pane_g

0xba4b,	// (0x00080e58) bg_popup_call2_bubble_pane_g1

0xba53,	// (0x00080e60) bg_popup_call2_bubble_pane_g2

0xba5b,	// (0x00080e68) bg_popup_call2_bubble_pane_g3

0xba63,	// (0x00080e70) bg_popup_call2_bubble_pane_g4

0xba6b,	// (0x00080e78) bg_popup_call2_bubble_pane_g5

0xba73,	// (0x00080e80) bg_popup_call2_bubble_pane_g6

0xba7b,	// (0x00080e88) bg_popup_call2_bubble_pane_g7

0xba83,	// (0x00080e90) bg_popup_call2_bubble_pane_g8

0xba8b,	// (0x00080e98) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0008499e) bg_popup_call2_bubble_pane_g

0x241b,	// (0x00077828) aid_cale_week_size_cell_pane

0x2a31,	// (0x00077e3e) aid_cams_cif_uncrop_pane_ParamLimits

0x2a31,	// (0x00077e3e) aid_cams_cif_uncrop_pane

0x2c24,	// (0x00078031) aid_cams_size_cell_ParamLimits

0x2c24,	// (0x00078031) aid_cams_size_cell

0x2c38,	// (0x00078045) grid_cams_pane_ParamLimits

0x2c52,	// (0x0007805f) linegrid_cams_pane_ParamLimits

0x2d88,	// (0x00078195) call_video_pane_t1

0x2da6,	// (0x000781b3) call_video_pane_t2

0x0001,

0xf27e,	// (0x0008468b) call_video_pane_t

0x3436,	// (0x00078843) aid_cale_month_size_cell_pane_ParamLimits

0x3436,	// (0x00078843) aid_cale_month_size_cell_pane

0xf61b,	// (0x00084a28) smil_status_volume_pane_g

0xbcf0,	// (0x000810fd) volume_smil_pane_ParamLimits

0xa9af,	// (0x0007fdbc) aid_popup2_width_pane

0x2303,	// (0x00077710) cell_qdial_pane_g4_ParamLimits

0x2303,	// (0x00077710) cell_qdial_pane_g4

0x44a9,	// (0x000798b6) aid_blid_cardinal_pane_ParamLimits

0x44b5,	// (0x000798c2) aid_blid_destination_pane_ParamLimits

0x44b5,	// (0x000798c2) aid_blid_destination_pane

0x1dbe,	// (0x000771cb) bg_popup_call_poc_act_pane_ParamLimits

0x1dbe,	// (0x000771cb) bg_popup_call_poc_act_pane

0x1dbe,	// (0x000771cb) bg_popup_call_poc_inact_pane_ParamLimits

0x1dbe,	// (0x000771cb) bg_popup_call_poc_inact_pane

0xba93,	// (0x00080ea0) bg_popup_call_poc_act_pane_g1

0xba9b,	// (0x00080ea8) bg_popup_call_poc_act_pane_g2

0xbaa3,	// (0x00080eb0) bg_popup_call_poc_act_pane_g3

0xba63,	// (0x00080e70) bg_popup_call_poc_act_pane_g4

0xba6b,	// (0x00080e78) bg_popup_call_poc_act_pane_g5

0xbaab,	// (0x00080eb8) bg_popup_call_poc_act_pane_g6

0xba7b,	// (0x00080e88) bg_popup_call_poc_act_pane_g7

0xbab3,	// (0x00080ec0) bg_popup_call_poc_act_pane_g8

0x1b63,	// (0x00076f70) main_usb_pane

0xbc0c,	// (0x00081019) popup_cale_lunar_info_window

0x30de,	// (0x000784eb) im_reading_pane_t1_ParamLimits

0x3117,	// (0x00078524) list_im_pane_ParamLimits

0x3128,	// (0x00078535) scroll_pane_cp07_ParamLimits

0x1b63,	// (0x00076f70) grid_highlight_pane_cp012

0x1dbe,	// (0x000771cb) mup_scale_pane_ParamLimits

0x4e8b,	// (0x0007a298) main_usb_pane_g1_ParamLimits

0x4e8b,	// (0x0007a298) main_usb_pane_g1

0x56d5,	// (0x0007aae2) main_usb_pane_g2_ParamLimits

0x56d5,	// (0x0007aae2) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x000849c8) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x000849c8) main_usb_pane_g

0x56eb,	// (0x0007aaf8) main_usb_pane_t1_ParamLimits

0x56eb,	// (0x0007aaf8) main_usb_pane_t1

0x56fd,	// (0x0007ab0a) main_usb_pane_t2_ParamLimits

0x56fd,	// (0x0007ab0a) main_usb_pane_t2

0x570f,	// (0x0007ab1c) main_usb_pane_t3_ParamLimits

0x570f,	// (0x0007ab1c) main_usb_pane_t3

0x5721,	// (0x0007ab2e) main_usb_pane_t4_ParamLimits

0x5721,	// (0x0007ab2e) main_usb_pane_t4

0x5733,	// (0x0007ab40) main_usb_pane_t5_ParamLimits

0x5733,	// (0x0007ab40) main_usb_pane_t5

0x5745,	// (0x0007ab52) main_usb_pane_t6_ParamLimits

0x5745,	// (0x0007ab52) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x000849cd) main_usb_pane_t_ParamLimits

0x4458,	// (0x00079865) aid_text_placing

0x4461,	// (0x0007986e) main_location2_pane_t1_ParamLimits

0x4473,	// (0x00079880) main_location2_pane_t2_ParamLimits

0x4485,	// (0x00079892) main_location2_pane_t3_ParamLimits

0x4497,	// (0x000798a4) main_location2_pane_t4_ParamLimits

0x4497,	// (0x000798a4) main_location2_pane_t4

0xf3df,	// (0x000847ec) main_location2_pane_t_ParamLimits

0x1e96,	// (0x000772a3) find_pinb_pane_g2_ParamLimits

0x1e96,	// (0x000772a3) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0008453a) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0008453a) find_pinb_pane_g

0x1ea2,	// (0x000772af) find_pinb_pane_t1_ParamLimits

0x1eb4,	// (0x000772c1) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0008453f) find_pinb_pane_t_ParamLimits

0x1b63,	// (0x00076f70) main_call3_pane

0x37cf,	// (0x00078bdc) cale_month_day_heading_pane_t1_ParamLimits

0x382d,	// (0x00078c3a) cale_month_day_heading_pane_t2_ParamLimits

0x3892,	// (0x00078c9f) cale_month_day_heading_pane_t3_ParamLimits

0x38f7,	// (0x00078d04) cale_month_day_heading_pane_t4_ParamLimits

0x395c,	// (0x00078d69) cale_month_day_heading_pane_t5_ParamLimits

0x39d1,	// (0x00078dde) cale_month_day_heading_pane_t6_ParamLimits

0x3a46,	// (0x00078e53) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000846c3) cale_month_day_heading_pane_t_ParamLimits

0x3c62,	// (0x0007906f) smil_status_volume_pane

0x4e67,	// (0x0007a274) postcard_address_pane_ParamLimits

0x4e67,	// (0x0007a274) postcard_address_pane

0x4e79,	// (0x0007a286) postcard_message_pane_ParamLimits

0x4e79,	// (0x0007a286) postcard_message_pane

0x56b3,	// (0x0007aac0) call2_cli_visual_pane_t1_ParamLimits

0x56b3,	// (0x0007aac0) call2_cli_visual_pane_t1

0x5ed7,	// (0x0007b2e4) postcard_message_pane_t1_ParamLimits

0x5ed7,	// (0x0007b2e4) postcard_message_pane_t1

0x5ec0,	// (0x0007b2cd) postcard_address_pane_t1_ParamLimits

0x5ec0,	// (0x0007b2cd) postcard_address_pane_t1

0x5eac,	// (0x0007b2b9) popup_call3_audio_in_window_ParamLimits

0x5eac,	// (0x0007b2b9) popup_call3_audio_in_window

0x5d37,	// (0x0007b144) bg_popup_call3_in_pane_ParamLimits

0x5d37,	// (0x0007b144) bg_popup_call3_in_pane

0x5dad,	// (0x0007b1ba) popup_call3_audio_in_window_g1_ParamLimits

0x5dad,	// (0x0007b1ba) popup_call3_audio_in_window_g1

0x5dcd,	// (0x0007b1da) popup_call3_audio_in_window_g2_ParamLimits

0x5dcd,	// (0x0007b1da) popup_call3_audio_in_window_g2

0x5ded,	// (0x0007b1fa) popup_call3_audio_in_window_g3_ParamLimits

0x5ded,	// (0x0007b1fa) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00084a2f) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00084a2f) popup_call3_audio_in_window_g

0x5e1e,	// (0x0007b22b) popup_call3_audio_in_window_t1_ParamLimits

0x5e1e,	// (0x0007b22b) popup_call3_audio_in_window_t1

0x5e5c,	// (0x0007b269) popup_call3_audio_in_window_t2_ParamLimits

0x5e5c,	// (0x0007b269) popup_call3_audio_in_window_t2

0x5e9a,	// (0x0007b2a7) popup_call3_audio_in_window_t3_ParamLimits

0x5e9a,	// (0x0007b2a7) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00084a38) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00084a38) popup_call3_audio_in_window_t

0x4725,	// (0x00079b32) bg_popup_call3_rect_pane

0xba0b,	// (0x00080e18) bg_popup_call3_rect_pane_g1

0x23ab,	// (0x000777b8) bg_popup_call3_rect_pane_g2

0xba13,	// (0x00080e20) bg_popup_call3_rect_pane_g3

0xba1b,	// (0x00080e28) bg_popup_call3_rect_pane_g4

0xba23,	// (0x00080e30) bg_popup_call3_rect_pane_g5

0xba2b,	// (0x00080e38) bg_popup_call3_rect_pane_g6

0xba33,	// (0x00080e40) bg_popup_call3_rect_pane_g7

0x4a0b,	// (0x00079e18) mup_visualizer_osc_pane

0x4a21,	// (0x00079e2e) mup_visualizer_spec_pane

0x5d67,	// (0x0007b174) call3_video_qcif_pane_ParamLimits

0x5d67,	// (0x0007b174) call3_video_qcif_pane

0x5d7a,	// (0x0007b187) call3_video_qcif_uncrop_pane_ParamLimits

0x5d7a,	// (0x0007b187) call3_video_qcif_uncrop_pane

0x5d88,	// (0x0007b195) call3_video_subqcif_pane_ParamLimits

0x5d88,	// (0x0007b195) call3_video_subqcif_pane

0x5d9c,	// (0x0007b1a9) call3_video_subqcif_uncrop_pane_ParamLimits

0x5d9c,	// (0x0007b1a9) call3_video_subqcif_uncrop_pane

0x5e0d,	// (0x0007b21a) popup_call3_audio_in_window_g4_ParamLimits

0x5e0d,	// (0x0007b21a) popup_call3_audio_in_window_g4

0x5d26,	// (0x0007b133) mup_spec_half_pane

0x5d2f,	// (0x0007b13c) mup_spec_half_pane_cp

0xbca3,	// (0x000810b0) mup_osc_middle_pane

0xbcac,	// (0x000810b9) mup_visualizer_osc_pane_g1

0x5d06,	// (0x0007b113) mup_spec_bar_pane_ParamLimits

0x5d06,	// (0x0007b113) mup_spec_bar_pane

0xbc90,	// (0x0008109d) mup_spec_bar_pane_g1

0xbc9a,	// (0x000810a7) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00084a23) mup_spec_bar_pane_g

0x241b,	// (0x00077828) aid_cale_week_size_cell_pane_ParamLimits

0x242e,	// (0x0007783b) bg_cale_heading_pane_ParamLimits

0x2442,	// (0x0007784f) bg_cale_pane_cp01_ParamLimits

0x245b,	// (0x00077868) cale_week_corner_pane_ParamLimits

0x2471,	// (0x0007787e) cale_week_day_heading_pane_ParamLimits

0x2485,	// (0x00077892) cale_week_scroll_pane_g1_ParamLimits

0x2496,	// (0x000778a3) cale_week_scroll_pane_g2_ParamLimits

0x24a7,	// (0x000778b4) cale_week_scroll_pane_g3_ParamLimits

0x24b8,	// (0x000778c5) cale_week_scroll_pane_g4_ParamLimits

0x24c9,	// (0x000778d6) cale_week_scroll_pane_g5_ParamLimits

0x24dc,	// (0x000778e9) cale_week_scroll_pane_g6_ParamLimits

0x24ef,	// (0x000778fc) cale_week_scroll_pane_g7_ParamLimits

0x2502,	// (0x0007790f) cale_week_scroll_pane_g8_ParamLimits

0x2515,	// (0x00077922) cale_week_scroll_pane_g9_ParamLimits

0x2526,	// (0x00077933) cale_week_scroll_pane_g10_ParamLimits

0x2537,	// (0x00077944) cale_week_scroll_pane_g11_ParamLimits

0x2548,	// (0x00077955) cale_week_scroll_pane_g12_ParamLimits

0x2559,	// (0x00077966) cale_week_scroll_pane_g13_ParamLimits

0x256a,	// (0x00077977) cale_week_scroll_pane_g14_ParamLimits

0x257b,	// (0x00077988) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x000845cb) cale_week_scroll_pane_g_ParamLimits

0x258c,	// (0x00077999) cale_week_time_pane_ParamLimits

0x259f,	// (0x000779ac) grid_cale_week_pane_ParamLimits

0x25b4,	// (0x000779c1) listscroll_cale_week_pane_t1

0x25c6,	// (0x000779d3) scroll_pane_cp08_ParamLimits

0x349a,	// (0x000788a7) cale_month_corner_pane_ParamLimits

0x377c,	// (0x00078b89) cale_month_pane_t1

0x378e,	// (0x00078b9b) cale_month_week_pane_ParamLimits

0x409a,	// (0x000794a7) popup_call_status_window_g1_ParamLimits

0x40ae,	// (0x000794bb) popup_call_status_window_g2_ParamLimits

0x40c2,	// (0x000794cf) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00084773) popup_call_status_window_g_ParamLimits

0x412a,	// (0x00079537) aid_call2_pane

0x0ac7,	// (0x00075ed4) msg_header_pane_g1

0x4e67,	// (0x0007a274) postcard_address2_pane_ParamLimits

0x4e67,	// (0x0007a274) postcard_address2_pane

0x4e79,	// (0x0007a286) postcard_message2_pane_ParamLimits

0x4e79,	// (0x0007a286) postcard_message2_pane

0x5cb8,	// (0x0007b0c5) message2_row_pane_ParamLimits

0x5cb8,	// (0x0007b0c5) message2_row_pane

0x5cd4,	// (0x0007b0e1) address2_row_pane_ParamLimits

0x5cd4,	// (0x0007b0e1) address2_row_pane

0xbc5e,	// (0x0008106b) postcard_message2_row_pane_g1

0xbc66,	// (0x00081073) postcard_message2_row_pane_t1

0xbc5e,	// (0x0008106b) address2_row_pane_g1

0xbc66,	// (0x00081073) address2_row_pane_t1

0x28b9,	// (0x00077cc6) aid_size_cell_vorec

0x1b63,	// (0x00076f70) main_rss_pane

0x5ce7,	// (0x0007b0f4) rss_list_single_pane_ParamLimits

0x5ce7,	// (0x0007b0f4) rss_list_single_pane

0xbc74,	// (0x00081081) rss_list_single_pane_t1

0xbc82,	// (0x0008108f) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00084a1e) rss_list_single_pane_t

0x1b63,	// (0x00076f70) main_camera2_pane

0x1b63,	// (0x00076f70) main_video2_pane

0x5f50,	// (0x0007b35d) cams_zoom_pane_cp2_ParamLimits

0x5f50,	// (0x0007b35d) cams_zoom_pane_cp2

0x5f70,	// (0x0007b37d) image2_vga_pane_ParamLimits

0x5f70,	// (0x0007b37d) image2_vga_pane

0x5fc1,	// (0x0007b3ce) main_camera2_pane_g1_ParamLimits

0x5fc1,	// (0x0007b3ce) main_camera2_pane_g1

0x5fe1,	// (0x0007b3ee) main_camera2_pane_g2_ParamLimits

0x5fe1,	// (0x0007b3ee) main_camera2_pane_g2

0x6001,	// (0x0007b40e) main_camera2_pane_g3_ParamLimits

0x6001,	// (0x0007b40e) main_camera2_pane_g3

0x6021,	// (0x0007b42e) main_camera2_pane_g4_ParamLimits

0x6021,	// (0x0007b42e) main_camera2_pane_g4

0x6041,	// (0x0007b44e) main_camera2_pane_g5_ParamLimits

0x6041,	// (0x0007b44e) main_camera2_pane_g5

0x6061,	// (0x0007b46e) main_camera2_pane_g6_ParamLimits

0x6061,	// (0x0007b46e) main_camera2_pane_g6

0x6081,	// (0x0007b48e) main_camera2_pane_g7_ParamLimits

0x6081,	// (0x0007b48e) main_camera2_pane_g7

0x60a1,	// (0x0007b4ae) main_camera2_pane_g8_ParamLimits

0x60a1,	// (0x0007b4ae) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00084a3f) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00084a3f) main_camera2_pane_g

0x60e1,	// (0x0007b4ee) main_camera2_pane_t1_ParamLimits

0x60e1,	// (0x0007b4ee) main_camera2_pane_t1

0x6116,	// (0x0007b523) main_camera2_pane_t2_ParamLimits

0x6116,	// (0x0007b523) main_camera2_pane_t2

0x613c,	// (0x0007b549) main_camera2_pane_t3_ParamLimits

0x613c,	// (0x0007b549) main_camera2_pane_t3

0x619a,	// (0x0007b5a7) main_camera2_pane_t4_ParamLimits

0x619a,	// (0x0007b5a7) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00084a52) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00084a52) main_camera2_pane_t

0x622c,	// (0x0007b639) cams_zoom_pane_cp4_ParamLimits

0x622c,	// (0x0007b639) cams_zoom_pane_cp4

0x6242,	// (0x0007b64f) image2_cif_pane_ParamLimits

0x6242,	// (0x0007b64f) image2_cif_pane

0x626d,	// (0x0007b67a) image2_subqcif_pane_ParamLimits

0x626d,	// (0x0007b67a) image2_subqcif_pane

0x6287,	// (0x0007b694) main_video2_pane_g1_ParamLimits

0x6287,	// (0x0007b694) main_video2_pane_g1

0x62a1,	// (0x0007b6ae) main_video2_pane_g2_ParamLimits

0x62a1,	// (0x0007b6ae) main_video2_pane_g2

0x62b7,	// (0x0007b6c4) main_video2_pane_g3_ParamLimits

0x62b7,	// (0x0007b6c4) main_video2_pane_g3

0x62cd,	// (0x0007b6da) main_video2_pane_g4_ParamLimits

0x62cd,	// (0x0007b6da) main_video2_pane_g4

0x62e3,	// (0x0007b6f0) main_video2_pane_g5_ParamLimits

0x62e3,	// (0x0007b6f0) main_video2_pane_g5

0x62f9,	// (0x0007b706) main_video2_pane_g6_ParamLimits

0x62f9,	// (0x0007b706) main_video2_pane_g6

0x0005,

0xf654,	// (0x00084a61) main_video2_pane_g_ParamLimits

0xf654,	// (0x00084a61) main_video2_pane_g

0x6313,	// (0x0007b720) main_video2_pane_t1_ParamLimits

0x6313,	// (0x0007b720) main_video2_pane_t1

0x6337,	// (0x0007b744) main_video2_pane_t2_ParamLimits

0x6337,	// (0x0007b744) main_video2_pane_t2

0x6385,	// (0x0007b792) main_video2_pane_t3_ParamLimits

0x6385,	// (0x0007b792) main_video2_pane_t3

0x0002,

0xf661,	// (0x00084a6e) main_video2_pane_t_ParamLimits

0xf661,	// (0x00084a6e) main_video2_pane_t

0x5800,	// (0x0007ac0d) call_muted_g2

0x0001,

0xf603,	// (0x00084a10) call_muted_g

0x1b63,	// (0x00076f70) main_mup2_pane

0x63c9,	// (0x0007b7d6) main_mup2_pane_g1_ParamLimits

0x63c9,	// (0x0007b7d6) main_mup2_pane_g1

0x63d5,	// (0x0007b7e2) main_mup2_pane_g2_ParamLimits

0x63d5,	// (0x0007b7e2) main_mup2_pane_g2

0xeb37,	// (0x00083f44) main_mup_pane_g13_cp1

0xeb3f,	// (0x00083f4c) mup_volume_pane_cp1

0x63f1,	// (0x0007b7fe) main_mup2_pane_g4_ParamLimits

0x63f1,	// (0x0007b7fe) main_mup2_pane_g4

0x6403,	// (0x0007b810) main_mup2_pane_g5_ParamLimits

0x6403,	// (0x0007b810) main_mup2_pane_g5

0x6415,	// (0x0007b822) main_mup2_pane_g6_ParamLimits

0x6415,	// (0x0007b822) main_mup2_pane_g6

0x6427,	// (0x0007b834) main_mup2_pane_g7_ParamLimits

0x6427,	// (0x0007b834) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00084a75) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00084a75) main_mup2_pane_g

0x643f,	// (0x0007b84c) main_mup2_pane_t1_ParamLimits

0x643f,	// (0x0007b84c) main_mup2_pane_t1

0x6455,	// (0x0007b862) main_mup2_pane_t2_ParamLimits

0x6455,	// (0x0007b862) main_mup2_pane_t2

0x646b,	// (0x0007b878) main_mup2_pane_t3_ParamLimits

0x646b,	// (0x0007b878) main_mup2_pane_t3

0x6481,	// (0x0007b88e) main_mup2_pane_t4_ParamLimits

0x6481,	// (0x0007b88e) main_mup2_pane_t4

0x6499,	// (0x0007b8a6) main_mup2_pane_t5_ParamLimits

0x6499,	// (0x0007b8a6) main_mup2_pane_t5

0x64b1,	// (0x0007b8be) main_mup2_pane_t6_ParamLimits

0x64b1,	// (0x0007b8be) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00084a84) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00084a84) main_mup2_pane_t

0x64e1,	// (0x0007b8ee) mup2_visualizer_pane_ParamLimits

0x64e1,	// (0x0007b8ee) mup2_visualizer_pane

0x650f,	// (0x0007b91c) mup_progress_pane_cp_ParamLimits

0x650f,	// (0x0007b91c) mup_progress_pane_cp

0xeb22,	// (0x00083f2f) mup_volume_pane_cp_ParamLimits

0xeb22,	// (0x00083f2f) mup_volume_pane_cp

0x6523,	// (0x0007b930) mup2_visualizer_pane_g1_ParamLimits

0x6523,	// (0x0007b930) mup2_visualizer_pane_g1

0xbd35,	// (0x00081142) mup2_visualizer_pane_g2_ParamLimits

0xbd35,	// (0x00081142) mup2_visualizer_pane_g2

0x653a,	// (0x0007b947) mup2_visualizer_pane_g3_ParamLimits

0x653a,	// (0x0007b947) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00084a91) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00084a91) mup2_visualizer_pane_g

0x5233,	// (0x0007a640) aid_size_cell_fmradio

0x59b2,	// (0x0007adbf) aid_height_parent_landcape

0x31de,	// (0x000785eb) wml_content_pane_cp

0x31e6,	// (0x000785f3) wml_tabs_pane

0x31ef,	// (0x000785fc) popup_wml_miniature_window

0x31f7,	// (0x00078604) scroll_pane_cp021

0x320b,	// (0x00078618) wml_content_pane_comp8

0x1b63,	// (0x00076f70) bg_popup_sub_pane_cp05

0xbd53,	// (0x00081160) popup_wml_miniature_window_g1

0xbd5b,	// (0x00081168) wml_miniature_view_pane

0x6546,	// (0x0007b953) aid_size_wml_view

0x654e,	// (0x0007b95b) wml_miniature_view_pane_g1

0x6557,	// (0x0007b964) wml_miniature_view_pane_g2

0x6560,	// (0x0007b96d) wml_miniature_view_pane_g3

0x6568,	// (0x0007b975) wml_miniature_view_pane_g4

0x6570,	// (0x0007b97d) wml_miniature_view_pane_g5

0x6578,	// (0x0007b985) wml_miniature_view_pane_g6

0x6580,	// (0x0007b98d) wml_miniature_view_pane_g7

0x6588,	// (0x0007b995) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00084a98) wml_miniature_view_pane_g

0xbd63,	// (0x00081170) background_graphic_ParamLimits

0xbd63,	// (0x00081170) background_graphic

0xbd6f,	// (0x0008117c) wml_tabs_2_pane

0xbd78,	// (0x00081185) wml_tabs_3_pane_ParamLimits

0xbd78,	// (0x00081185) wml_tabs_3_pane

0xbd8a,	// (0x00081197) wml_tabs_4_pane_ParamLimits

0xbd8a,	// (0x00081197) wml_tabs_4_pane

0xbda0,	// (0x000811ad) wml_tabs_5_pane_ParamLimits

0xbda0,	// (0x000811ad) wml_tabs_5_pane

0xbdba,	// (0x000811c7) wml_tabs_pane_g2_ParamLimits

0xbdba,	// (0x000811c7) wml_tabs_pane_g2

0xbdce,	// (0x000811db) wml_tabs_pane_g3_ParamLimits

0xbdce,	// (0x000811db) wml_tabs_pane_g3

0x6590,	// (0x0007b99d) wml_tabs_2_active_pane_ParamLimits

0x6590,	// (0x0007b99d) wml_tabs_2_active_pane

0x65a4,	// (0x0007b9b1) wml_tabs_2_passive_pane_ParamLimits

0x65a4,	// (0x0007b9b1) wml_tabs_2_passive_pane

0x65b8,	// (0x0007b9c5) wml_tabs_3_active_pane_cp_ParamLimits

0x65b8,	// (0x0007b9c5) wml_tabs_3_active_pane_cp

0x65cd,	// (0x0007b9da) wml_tabs_3_passive_pane_ParamLimits

0x65cd,	// (0x0007b9da) wml_tabs_3_passive_pane

0x65e0,	// (0x0007b9ed) wml_tabs_3_passive_pane_cp_ParamLimits

0x65e0,	// (0x0007b9ed) wml_tabs_3_passive_pane_cp

0x65f7,	// (0x0007ba04) tabs_4_active_pane

0x65ff,	// (0x0007ba0c) tabs_4_passive_pane

0x6609,	// (0x0007ba16) tabs_4_passive_pane_cp

0x6611,	// (0x0007ba1e) tabs_4_passive_pane_cp2

0x56cd,	// (0x0007aada) aid_height_text

0x49e1,	// (0x00079dee) mup_volume_cont_pane_ParamLimits

0x49e1,	// (0x00079dee) mup_volume_cont_pane

0x1e54,	// (0x00077261) aid_size_cell_pinb

0x1e5e,	// (0x0007726b) aid_size_list_pinb

0x64fb,	// (0x0007b908) mup2_volume_cont_pane_ParamLimits

0x64fb,	// (0x0007b908) mup2_volume_cont_pane

0xeb0e,	// (0x00083f1b) mup2_volume_cont_pane_g1_ParamLimits

0xeb0e,	// (0x00083f1b) mup2_volume_cont_pane_g1

0x1498,	// (0x000768a5) aid_size_cell_touch_ParamLimits

0x1498,	// (0x000768a5) aid_size_cell_touch

0x16a6,	// (0x00076ab3) touch_pane_ParamLimits

0x16a6,	// (0x00076ab3) touch_pane

0xa99d,	// (0x0007fdaa) main_rss2_pane

0xbdeb,	// (0x000811f8) listscroll_rss2_pane

0xbdf4,	// (0x00081201) rss2_navigation_pane

0xbdfc,	// (0x00081209) list_rss2_pane

0x42e4,	// (0x000796f1) scroll_pane_cp22

0xbe04,	// (0x00081211) rss2_navigation_pane_g1

0xbe0d,	// (0x0008121a) rss2_navigation_pane_g2

0xbe15,	// (0x00081222) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00084aa9) rss2_navigation_pane_g

0xbe1d,	// (0x0008122a) rss2_navigation_pane_t1

0x661b,	// (0x0007ba28) rss2_list_single_pane_ParamLimits

0x661b,	// (0x0007ba28) rss2_list_single_pane

0xbe2b,	// (0x00081238) rss2_list_single_pane_t2

0xbe39,	// (0x00081246) rss2_list_single_pane_t3_ParamLimits

0xbe39,	// (0x00081246) rss2_list_single_pane_t3

0xbe56,	// (0x00081263) rss2_list_single_pane_t4

0x3c4a,	// (0x00079057) smil_status_pane_g1

0xaa15,	// (0x0007fe22) main_image2_pane_ParamLimits

0xaa15,	// (0x0007fe22) main_image2_pane

0x60c1,	// (0x0007b4ce) main_camera2_pane_g9_ParamLimits

0x60c1,	// (0x0007b4ce) main_camera2_pane_g9

0x61ef,	// (0x0007b5fc) main_camera2_pane_t5_ParamLimits

0x61ef,	// (0x0007b5fc) main_camera2_pane_t5

0xbd05,	// (0x00081112) main_camera2_pane_t6_ParamLimits

0xbd05,	// (0x00081112) main_camera2_pane_t6

0x6630,	// (0x0007ba3d) main_image2_pane_g1_ParamLimits

0x6630,	// (0x0007ba3d) main_image2_pane_g1

0x51e9,	// (0x0007a5f6) smil2_video_pane_ParamLimits

0x51e9,	// (0x0007a5f6) smil2_video_pane

0xa9cb,	// (0x0007fdd8) aid_zoom_text_primary_cp

0xaa0b,	// (0x0007fe18) popup_preview_fixed_window

0x30d6,	// (0x000784e3) im_reading_pane_g1

0x5f38,	// (0x0007b345) cams2_bc_adjust_pane_cp_ParamLimits

0x5f38,	// (0x0007b345) cams2_bc_adjust_pane_cp

0x621e,	// (0x0007b62b) cams2_bc_adjust_pane_ParamLimits

0x621e,	// (0x0007b62b) cams2_bc_adjust_pane

0xeb47,	// (0x00083f54) cams2_bc_adjust_pane_g1

0xeb4f,	// (0x00083f5c) cams2_slider_pane

0xeb58,	// (0x00083f65) cams2_slider_pane_g1

0xeb61,	// (0x00083f6e) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00084ab0) cams2_slider_pane_g

0x1fa3,	// (0x000773b0) calc_display_pane_ParamLimits

0x1fcb,	// (0x000773d8) calc_paper_pane_ParamLimits

0x1fee,	// (0x000773fb) grid_calc_pane_ParamLimits

0xac9f,	// (0x000800ac) popup_clock_digital_window_t1_ParamLimits

0x5070,	// (0x0007a47d) main_image_pane_t1

0x1f85,	// (0x00077392) aid_size_cell_calc_ParamLimits

0x1f85,	// (0x00077392) aid_size_cell_calc

0x59f8,	// (0x0007ae05) popup_blid_sat_info2_window_ParamLimits

0x59f8,	// (0x0007ae05) popup_blid_sat_info2_window

0xbe6c,	// (0x00081279) aid_size_cell_blid

0xbe74,	// (0x00081281) bg_popup_window_pane_cp07

0xbe97,	// (0x000812a4) grid_popup_blid_pane

0xbea1,	// (0x000812ae) heading_pane_cp05_ParamLimits

0xbea1,	// (0x000812ae) heading_pane_cp05

0xbf6b,	// (0x00081378) cell_popup_blid_pane_ParamLimits

0xbf6b,	// (0x00081378) cell_popup_blid_pane

0xbf8f,	// (0x0008139c) cell_popup_blid_pane_g1

0xbf97,	// (0x000813a4) cell_popup_blid_pane_t1

0x64cb,	// (0x0007b8d8) mup2_indicator_pane_ParamLimits

0x64cb,	// (0x0007b8d8) mup2_indicator_pane

0x4725,	// (0x00079b32) mup2_visualizer_osc_pane

0xbd41,	// (0x0008114e) mup2_visualizer_spec_pane_ParamLimits

0xbd41,	// (0x0008114e) mup2_visualizer_spec_pane

0x6646,	// (0x0007ba53) mup2_spec_half_pane

0x664f,	// (0x0007ba5c) mup2_spec_half_pane_cp

0x6657,	// (0x0007ba64) mup2_spec_bar_pane_ParamLimits

0x6657,	// (0x0007ba64) mup2_spec_bar_pane

0xbc90,	// (0x0008109d) mup2_spec_bar_pane_g1

0xbc9a,	// (0x000810a7) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00084a23) mup2_spec_bar_pane_g

0x6677,	// (0x0007ba84) mup2_osc_middle_pane

0xbcac,	// (0x000810b9) mup2_visualizer_osc_pane_g1

0x1718,	// (0x00076b25) popup_number_entry_window_t1_ParamLimits

0x172b,	// (0x00076b38) popup_number_entry_window_t2_ParamLimits

0x173d,	// (0x00076b4a) popup_number_entry_window_t3_ParamLimits

0x174f,	// (0x00076b5c) popup_number_entry_window_t5_ParamLimits

0x174f,	// (0x00076b5c) popup_number_entry_window_t5

0xf0d8,	// (0x000844e5) popup_number_entry_window_t_ParamLimits

0x1783,	// (0x00076b90) text_title_cp2_ParamLimits

0xacde,	// (0x000800eb) aid_hotspot_pointer_text2_pane

0xad04,	// (0x00080111) main_viewer_pane_g9_ParamLimits

0xad04,	// (0x00080111) main_viewer_pane_g9

0x377c,	// (0x00078b89) cale_month_pane_t1_ParamLimits

0x3cc6,	// (0x000790d3) bg_cale_pane_ParamLimits

0x3cde,	// (0x000790eb) list_cale_pane_ParamLimits

0x25b4,	// (0x000779c1) listscroll_cale_day_pane_t1

0x3cef,	// (0x000790fc) scroll_pane_cp09_ParamLimits

0x4a8f,	// (0x00079e9c) main_mup_eq_pane_t1_ParamLimits

0x4a8f,	// (0x00079e9c) main_mup_eq_pane_t1

0x4aa9,	// (0x00079eb6) main_mup_eq_pane_t2_ParamLimits

0x4aa9,	// (0x00079eb6) main_mup_eq_pane_t2

0x4ac3,	// (0x00079ed0) main_mup_eq_pane_t3_ParamLimits

0x4ac3,	// (0x00079ed0) main_mup_eq_pane_t3

0x4adf,	// (0x00079eec) main_mup_eq_pane_t4_ParamLimits

0x4adf,	// (0x00079eec) main_mup_eq_pane_t4

0x4afb,	// (0x00079f08) main_mup_eq_pane_t5_ParamLimits

0x4afb,	// (0x00079f08) main_mup_eq_pane_t5

0x4b17,	// (0x00079f24) main_mup_eq_pane_t6_ParamLimits

0x4b17,	// (0x00079f24) main_mup_eq_pane_t6

0x4b2b,	// (0x00079f38) main_mup_eq_pane_t7_ParamLimits

0x4b2b,	// (0x00079f38) main_mup_eq_pane_t7

0x4b3f,	// (0x00079f4c) main_mup_eq_pane_t8_ParamLimits

0x4b3f,	// (0x00079f4c) main_mup_eq_pane_t8

0x4b53,	// (0x00079f60) main_mup_eq_pane_t9_ParamLimits

0x4b53,	// (0x00079f60) main_mup_eq_pane_t9

0x4b6d,	// (0x00079f7a) main_mup_eq_pane_t10_ParamLimits

0x4b6d,	// (0x00079f7a) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00084872) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00084872) main_mup_eq_pane_t

0x4c1c,	// (0x0007a029) mup_equalizer_pane_cp5_ParamLimits

0x4c30,	// (0x0007a03d) mup_equalizer_pane_cp6_ParamLimits

0x4c44,	// (0x0007a051) mup_equalizer_pane_cp7_ParamLimits

0xa99d,	// (0x0007fdaa) main_gallery_pane

0xbcb5,	// (0x000810c2) smil2_volume_pane

0xbcbd,	// (0x000810ca) smil_status_volume_pane_g1_ParamLimits

0xbcd0,	// (0x000810dd) smil_status_volume_pane_g2_ParamLimits

0xbce3,	// (0x000810f0) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00084a28) smil_status_volume_pane_g_ParamLimits

0xbe74,	// (0x00081281) bg_popup_window_pane_cp07_ParamLimits

0xbe82,	// (0x0008128f) blid_firmament_pane

0x6680,	// (0x0007ba8d) aid_size_cell_gallery_ParamLimits

0x6680,	// (0x0007ba8d) aid_size_cell_gallery

0x6696,	// (0x0007baa3) grid_gallery_pane_ParamLimits

0x6696,	// (0x0007baa3) grid_gallery_pane

0x66af,	// (0x0007babc) cell_gallery_pane_ParamLimits

0x66af,	// (0x0007babc) cell_gallery_pane

0xbfa5,	// (0x000813b2) bg_cell_gallery_focus_pane_ParamLimits

0xbfa5,	// (0x000813b2) bg_cell_gallery_focus_pane

0xbfb7,	// (0x000813c4) cell_gallery_pane_g1_ParamLimits

0xbfb7,	// (0x000813c4) cell_gallery_pane_g1

0x66f8,	// (0x0007bb05) cell_gallery_pane_g2_ParamLimits

0x66f8,	// (0x0007bb05) cell_gallery_pane_g2

0x6705,	// (0x0007bb12) cell_gallery_pane_g3_ParamLimits

0x6705,	// (0x0007bb12) cell_gallery_pane_g3

0xbfc3,	// (0x000813d0) cell_gallery_pane_g4_ParamLimits

0xbfc3,	// (0x000813d0) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00084ad6) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00084ad6) cell_gallery_pane_g

0xbfcf,	// (0x000813dc) bg_cell_gallery_focus_pane_g1

0xbfd7,	// (0x000813e4) bg_cell_gallery_focus_pane_g2

0xbfdf,	// (0x000813ec) bg_cell_gallery_focus_pane_g3

0xbfe7,	// (0x000813f4) bg_cell_gallery_focus_pane_g4

0xbfef,	// (0x000813fc) bg_cell_gallery_focus_pane_g5

0xbff7,	// (0x00081404) bg_cell_gallery_focus_pane_g6

0xbfff,	// (0x0008140c) bg_cell_gallery_focus_pane_g7

0xc007,	// (0x00081414) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00084adf) bg_cell_gallery_focus_pane_g

0xc00f,	// (0x0008141c) aid_firma_cardinal

0xc023,	// (0x00081430) blid_firmament_pane_t1

0xc03a,	// (0x00081447) blid_firmament_pane_t2

0xc051,	// (0x0008145e) blid_firmament_pane_t3

0xc068,	// (0x00081475) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00084af0) blid_firmament_pane_t

0xc07f,	// (0x0008148c) blid_sat_info_pane

0xc08f,	// (0x0008149c) blid_sat_info_pane_g1

0xc08f,	// (0x0008149c) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00084af9) blid_sat_info_pane_g

0xc099,	// (0x000814a6) blid_sat_info_pane_t1

0xc0a7,	// (0x000814b4) smil2_volume_content_pane

0xc0b0,	// (0x000814bd) smil2_volume_pane_g1

0xc0b8,	// (0x000814c5) smil2_volume_content_pane_g1

0xc0c1,	// (0x000814ce) smil2_volume_content_pane_g2

0xc0ca,	// (0x000814d7) smil2_volume_content_pane_g3

0xc0d3,	// (0x000814e0) smil2_volume_content_pane_g4

0xc0dc,	// (0x000814e9) smil2_volume_content_pane_g5

0xc0e5,	// (0x000814f2) smil2_volume_content_pane_g6

0xc0ee,	// (0x000814fb) smil2_volume_content_pane_g7

0xc0f7,	// (0x00081504) smil2_volume_content_pane_g8

0xc100,	// (0x0008150d) smil2_volume_content_pane_g9

0xc109,	// (0x00081516) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00084afe) smil2_volume_content_pane_g

0x2620,	// (0x00077a2d) cale_week_day_heading_pane_t1_ParamLimits

0x264a,	// (0x00077a57) cale_week_day_heading_pane_t2_ParamLimits

0x2674,	// (0x00077a81) cale_week_day_heading_pane_t3_ParamLimits

0x269e,	// (0x00077aab) cale_week_day_heading_pane_t4_ParamLimits

0x26c8,	// (0x00077ad5) cale_week_day_heading_pane_t5_ParamLimits

0x26f2,	// (0x00077aff) cale_week_day_heading_pane_t6_ParamLimits

0x271e,	// (0x00077b2b) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x000845ea) cale_week_day_heading_pane_t_ParamLimits

0x2748,	// (0x00077b55) bg_cale_side_pane_ParamLimits

0x2756,	// (0x00077b63) cale_week_time_pane_t1_ParamLimits

0x276e,	// (0x00077b7b) cale_week_time_pane_t2_ParamLimits

0x2786,	// (0x00077b93) cale_week_time_pane_t3_ParamLimits

0x279e,	// (0x00077bab) cale_week_time_pane_t4_ParamLimits

0x27b6,	// (0x00077bc3) cale_week_time_pane_t5_ParamLimits

0x27ce,	// (0x00077bdb) cale_week_time_pane_t6_ParamLimits

0x27e6,	// (0x00077bf3) cale_week_time_pane_t7_ParamLimits

0x27fe,	// (0x00077c0b) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x000845f9) cale_week_time_pane_t_ParamLimits

0x2816,	// (0x00077c23) cell_cale_week_pane_g2_ParamLimits

0x2748,	// (0x00077b55) bg_cale_side_pane_cp01_ParamLimits

0x3abb,	// (0x00078ec8) cale_month_week_pane_t1_ParamLimits

0x3ad2,	// (0x00078edf) cale_month_week_pane_t2_ParamLimits

0x3ae9,	// (0x00078ef6) cale_month_week_pane_t3_ParamLimits

0x3b00,	// (0x00078f0d) cale_month_week_pane_t4_ParamLimits

0x3b17,	// (0x00078f24) cale_month_week_pane_t5_ParamLimits

0x3b2e,	// (0x00078f3b) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x000846d2) cale_month_week_pane_t_ParamLimits

0xaba6,	// (0x0007ffb3) cell_cale_month_pane_g1_ParamLimits

0xa99d,	// (0x0007fdaa) main_cale_event_viewer_pane

0xa99d,	// (0x0007fdaa) listscroll_cale_event_viewer_pane

0xc112,	// (0x0008151f) list_cale_ev_pane

0xc11a,	// (0x00081527) scroll_pane_cp023

0xc126,	// (0x00081533) field_cale_ev_pane_ParamLimits

0xc126,	// (0x00081533) field_cale_ev_pane

0xc144,	// (0x00081551) field_cale_ev_content_pane_ParamLimits

0xc144,	// (0x00081551) field_cale_ev_content_pane

0xc150,	// (0x0008155d) field_cale_ev_pane_g1_ParamLimits

0xc150,	// (0x0008155d) field_cale_ev_pane_g1

0xc15c,	// (0x00081569) field_cale_ev_pane_g2_ParamLimits

0xc15c,	// (0x00081569) field_cale_ev_pane_g2

0xc174,	// (0x00081581) field_cale_ev_pane_g3_ParamLimits

0xc174,	// (0x00081581) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00084b13) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00084b13) field_cale_ev_pane_g

0xc18c,	// (0x00081599) field_cale_ev_pane_t1_ParamLimits

0xc18c,	// (0x00081599) field_cale_ev_pane_t1

0xc1a3,	// (0x000815b0) field_cale_ev_content_pane_t1_ParamLimits

0xc1a3,	// (0x000815b0) field_cale_ev_content_pane_t1

0x4cee,	// (0x0007a0fb) bg_button_pane_cp01

0x2138,	// (0x00077545) listscroll_cale_week_pane_ParamLimits

0x2411,	// (0x0007781e) popup_toolbar_window_cp01

0x25b4,	// (0x000779c1) listscroll_cale_week_pane_t1_ParamLimits

0x2138,	// (0x00077545) listscroll_cale_day_pane_ParamLimits

0x3cbc,	// (0x000790c9) popup_toolbar_window_cp02

0x25b4,	// (0x000779c1) listscroll_cale_day_pane_t1_ParamLimits

0x2138,	// (0x00077545) main_cale_month_pane_ParamLimits

0x5c2c,	// (0x0007b039) popup_toolbar_window_cp03_ParamLimits

0x5c2c,	// (0x0007b039) popup_toolbar_window_cp03

0x504e,	// (0x0007a45b) main_image_pane_g2_ParamLimits

0x504e,	// (0x0007a45b) main_image_pane_g2

0x505f,	// (0x0007a46c) main_image_pane_g3_ParamLimits

0x505f,	// (0x0007a46c) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00084904) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00084904) main_image_pane_g

0x5070,	// (0x0007a47d) main_image_pane_t1_ParamLimits

0x5087,	// (0x0007a494) main_image_pane_t2_ParamLimits

0x5087,	// (0x0007a494) main_image_pane_t2

0x5099,	// (0x0007a4a6) main_image_pane_t3_ParamLimits

0x5099,	// (0x0007a4a6) main_image_pane_t3

0x50c1,	// (0x0007a4ce) main_image_pane_t4_ParamLimits

0x50c1,	// (0x0007a4ce) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0008490b) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0008490b) main_image_pane_t

0x50e1,	// (0x0007a4ee) popup_image_details_window_cp01

0x50eb,	// (0x0007a4f8) popup_toobar_trans_pane_cp01_ParamLimits

0x50eb,	// (0x0007a4f8) popup_toobar_trans_pane_cp01

0x5ad7,	// (0x0007aee4) popup_image_details_window_ParamLimits

0x5ad7,	// (0x0007aee4) popup_image_details_window

0xbc16,	// (0x00081023) popup_image_focus_window

0x5ef2,	// (0x0007b2ff) camera2_autofocus_pane_ParamLimits

0x5ef2,	// (0x0007b2ff) camera2_autofocus_pane

0xa99d,	// (0x0007fdaa) bg_popup_sub_pane_cp06

0xc1c1,	// (0x000815ce) popup_image_focus_window_g1

0xc1c9,	// (0x000815d6) popup_image_focus_window_g2

0xc1d1,	// (0x000815de) popup_image_focus_window_g3

0xc1d9,	// (0x000815e6) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00084b1a) popup_image_focus_window_g

0xc1e1,	// (0x000815ee) popup_image_focus_window_t1

0xc1ef,	// (0x000815fc) popup_image_focus_window_t2

0xc1ff,	// (0x0008160c) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00084b23) popup_image_focus_window_t

0xc20d,	// (0x0008161a) camera2_autofocus_pane_g1

0xaa15,	// (0x0007fe22) bg_tb_trans_pane_cp01

0xc21b,	// (0x00081628) popup_image_details_window_g1

0xc22e,	// (0x0008163b) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00084b35) popup_image_details_window_g

0xc257,	// (0x00081664) popup_image_details_window_t1

0xc269,	// (0x00081676) popup_image_details_window_t2

0xc282,	// (0x0008168f) popup_image_details_window_t3

0xc296,	// (0x000816a3) popup_image_details_window_t4

0xc2b1,	// (0x000816be) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00084b3c) popup_image_details_window_t

0x2124,	// (0x00077531) bg_calc_paper_pane_ParamLimits

0xa99d,	// (0x0007fdaa) grid_highlight_pane_cp013

0xaa2b,	// (0x0007fe38) list_calc_pane_ParamLimits

0xaa3d,	// (0x0007fe4a) scroll_pane_cp024

0x2138,	// (0x00077545) bg_calc_display_pane_ParamLimits

0x2144,	// (0x00077551) calc_display_pane_t1_ParamLimits

0x2156,	// (0x00077563) calc_display_pane_t2_ParamLimits

0xaa45,	// (0x0007fe52) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0008456c) calc_display_pane_t_ParamLimits

0x2266,	// (0x00077673) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00084589) cell_calc_pane_g

0x226f,	// (0x0007767c) cell_calc_pane_t1

0x227e,	// (0x0007768b) grid_highlight_pane_cp02_ParamLimits

0x2294,	// (0x000776a1) toolbar_button_pane_cp01_ParamLimits

0x2294,	// (0x000776a1) toolbar_button_pane_cp01

0x512d,	// (0x0007a53a) temp_image_control_pane_ParamLimits

0x512d,	// (0x0007a53a) temp_image_control_pane

0xaa15,	// (0x0007fe22) main_mp3_pane

0xc2cb,	// (0x000816d8) temp_image_control_pane_g1_ParamLimits

0xc2cb,	// (0x000816d8) temp_image_control_pane_g1

0xc2d9,	// (0x000816e6) temp_image_control_pane_g2_ParamLimits

0xc2d9,	// (0x000816e6) temp_image_control_pane_g2

0xc2eb,	// (0x000816f8) temp_image_control_pane_g3_ParamLimits

0xc2eb,	// (0x000816f8) temp_image_control_pane_g3

0x6742,	// (0x0007bb4f) temp_image_control_pane_g4_ParamLimits

0x6742,	// (0x0007bb4f) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00084b47) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00084b47) temp_image_control_pane_g

0xc2cb,	// (0x000816d8) main_mp3_pane_g1

0x6755,	// (0x0007bb62) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00084b50) main_mp3_pane_g

0xc32e,	// (0x0008173b) main_mp3_pane_t1

0x29f9,	// (0x00077e06) main_camera_pane_g8_ParamLimits

0x29f9,	// (0x00077e06) main_camera_pane_g8

0x2ba6,	// (0x00077fb3) main_video_pane_g7_ParamLimits

0x2ba6,	// (0x00077fb3) main_video_pane_g7

0xbd23,	// (0x00081130) main_camera2_pane_t7_ParamLimits

0xbd23,	// (0x00081130) main_camera2_pane_t7

0x319e,	// (0x000785ab) scroll_pane_cp025_ParamLimits

0x319e,	// (0x000785ab) scroll_pane_cp025

0x31b2,	// (0x000785bf) scroll_pane_cp026_ParamLimits

0x31b2,	// (0x000785bf) scroll_pane_cp026

0x31c1,	// (0x000785ce) wml_content_pane_ParamLimits

0xa99d,	// (0x0007fdaa) main_touch_calib_pane

0x681f,	// (0x0007bc2c) main_touch_calib_pane_g1

0x682b,	// (0x0007bc38) main_touch_calib_pane_g2

0x6837,	// (0x0007bc44) main_touch_calib_pane_g3

0x6843,	// (0x0007bc50) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00084b6e) main_touch_calib_pane_g

0x684f,	// (0x0007bc5c) main_touch_calib_pane_t1

0x6869,	// (0x0007bc76) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00084b77) main_touch_calib_pane_t

0x458c,	// (0x00079999) mup_progress_pane_cp02

0x45c1,	// (0x000799ce) navi_pane_g1

0x467a,	// (0x00079a87) navi_pane_mp_t3

0xaa15,	// (0x0007fe22) main_mp3_pane_ParamLimits

0x5c6a,	// (0x0007b077) navi_pane_ParamLimits

0xc2cb,	// (0x000816d8) main_mp3_pane_g1_ParamLimits

0x6755,	// (0x0007bb62) main_mp3_pane_g2_ParamLimits

0x6763,	// (0x0007bb70) main_mp3_pane_g3_ParamLimits

0x6763,	// (0x0007bb70) main_mp3_pane_g3

0x6771,	// (0x0007bb7e) main_mp3_pane_g4_ParamLimits

0x6771,	// (0x0007bb7e) main_mp3_pane_g4

0xc2fb,	// (0x00081708) main_mp3_pane_g5_ParamLimits

0xc2fb,	// (0x00081708) main_mp3_pane_g5

0xc309,	// (0x00081716) main_mp3_pane_g6_ParamLimits

0xc309,	// (0x00081716) main_mp3_pane_g6

0xc316,	// (0x00081723) main_mp3_pane_g7_ParamLimits

0xc316,	// (0x00081723) main_mp3_pane_g7

0xc322,	// (0x0008172f) main_mp3_pane_g8_ParamLimits

0xc322,	// (0x0008172f) main_mp3_pane_g8

0xf743,	// (0x00084b50) main_mp3_pane_g_ParamLimits

0x677d,	// (0x0007bb8a) main_mp3_pane_t2

0x678b,	// (0x0007bb98) main_mp3_pane_t3

0xc33c,	// (0x00081749) main_mp3_pane_t4

0xc34a,	// (0x00081757) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00084b61) main_mp3_pane_t

0xc358,	// (0x00081765) mup_progress_pane_cp01

0xa9cb,	// (0x0007fdd8) aid_zoom_text_secondary2

0xc112,	// (0x0008151f) list_cale_ev2_pane

0xc11a,	// (0x00081527) scroll_pane_cp023_ParamLimits

0x68bf,	// (0x0007bccc) field_cale_ev2_pane_ParamLimits

0x68bf,	// (0x0007bccc) field_cale_ev2_pane

0x68df,	// (0x0007bcec) field_cale_ev2_pane_g1_ParamLimits

0x68df,	// (0x0007bcec) field_cale_ev2_pane_g1

0x68eb,	// (0x0007bcf8) field_cale_ev2_pane_g2_ParamLimits

0x68eb,	// (0x0007bcf8) field_cale_ev2_pane_g2

0x6903,	// (0x0007bd10) field_cale_ev2_pane_g3_ParamLimits

0x6903,	// (0x0007bd10) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00084b82) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00084b82) field_cale_ev2_pane_g

0xc360,	// (0x0008176d) field_cale_ev2_pane_t1_ParamLimits

0xc360,	// (0x0008176d) field_cale_ev2_pane_t1

0xc377,	// (0x00081784) field_cale_ev2_pane_t2_ParamLimits

0xc377,	// (0x00081784) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00084b8b) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00084b8b) field_cale_ev2_pane_t

0x4e1d,	// (0x0007a22a) main_postcard_pane_g5_ParamLimits

0x4e1d,	// (0x0007a22a) main_postcard_pane_g5

0x4e33,	// (0x0007a240) main_postcard_pane_g6_ParamLimits

0x4e33,	// (0x0007a240) main_postcard_pane_g6

0x2944,	// (0x00077d51) camera2_autofocus_pane_cp_ParamLimits

0x2944,	// (0x00077d51) camera2_autofocus_pane_cp

0xaa15,	// (0x0007fe22) main_mup3_pane

0x693b,	// (0x0007bd48) main_mup3_pane_g1_ParamLimits

0x693b,	// (0x0007bd48) main_mup3_pane_g1

0x695d,	// (0x0007bd6a) main_mup3_pane_g2_ParamLimits

0x695d,	// (0x0007bd6a) main_mup3_pane_g2

0x69db,	// (0x0007bde8) main_mup3_pane_g3_ParamLimits

0x69db,	// (0x0007bde8) main_mup3_pane_g3

0x6a21,	// (0x0007be2e) main_mup3_pane_g4_ParamLimits

0x6a21,	// (0x0007be2e) main_mup3_pane_g4

0x6a67,	// (0x0007be74) main_mup3_pane_g5_ParamLimits

0x6a67,	// (0x0007be74) main_mup3_pane_g5

0x6aad,	// (0x0007beba) main_mup3_pane_g6_ParamLimits

0x6aad,	// (0x0007beba) main_mup3_pane_g6

0xc38c,	// (0x00081799) main_mup3_pane_g7_ParamLimits

0xc38c,	// (0x00081799) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00084b9b) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00084b9b) main_mup3_pane_g

0x6b2b,	// (0x0007bf38) main_mup3_pane_t1_ParamLimits

0x6b2b,	// (0x0007bf38) main_mup3_pane_t1

0x6b9f,	// (0x0007bfac) main_mup3_pane_t2_ParamLimits

0x6b9f,	// (0x0007bfac) main_mup3_pane_t2

0x6c73,	// (0x0007c080) main_mup3_pane_t4_ParamLimits

0x6c73,	// (0x0007c080) main_mup3_pane_t4

0x6cc9,	// (0x0007c0d6) main_mup3_pane_t5_ParamLimits

0x6cc9,	// (0x0007c0d6) main_mup3_pane_t5

0x6d85,	// (0x0007c192) main_mup3_pane_t6_ParamLimits

0x6d85,	// (0x0007c192) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00084bac) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00084bac) main_mup3_pane_t

0x6e3d,	// (0x0007c24a) mup3_progress_pane_ParamLimits

0x6e3d,	// (0x0007c24a) mup3_progress_pane

0x6ed3,	// (0x0007c2e0) popup_mup3_control_window_ParamLimits

0x6ed3,	// (0x0007c2e0) popup_mup3_control_window

0xc39a,	// (0x000817a7) popup_mup3_text_window

0x6f05,	// (0x0007c312) mup3_progress_pane_t1

0x6f24,	// (0x0007c331) mup3_progress_pane_t2

0xc3a2,	// (0x000817af) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00084bb9) mup3_progress_pane_t

0xc3bf,	// (0x000817cc) mup_progress_pane_cp03

0xa99d,	// (0x0007fdaa) bg_tb_trans_pane_cp04

0x6f43,	// (0x0007c350) mup3_volume_pane

0x6f4b,	// (0x0007c358) popup_mup3_control_window_g1

0x6f54,	// (0x0007c361) mup3_volume_pane_g1

0x6f5d,	// (0x0007c36a) mup3_volume_pane_g2

0x6f66,	// (0x0007c373) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00084bc0) mup3_volume_pane_g

0xa99d,	// (0x0007fdaa) bg_tb_trans_pane_cp03

0xc3cf,	// (0x000817dc) popup_mup3_text_window_g1

0xc3d7,	// (0x000817e4) popup_mup3_text_window_t1

0x2235,	// (0x00077642) list_calc_item_pane_g1_ParamLimits

0xbde2,	// (0x000811ef) mup_volume_pane_cp_g1

0x6883,	// (0x0007bc90) main_touch_calib_pane_t3

0x6897,	// (0x0007bca4) main_touch_calib_pane_t4

0x68ab,	// (0x0007bcb8) main_touch_calib_pane_t5

0xa9a7,	// (0x0007fdb4) aid_cell_size_toolbar2

0xa9af,	// (0x0007fdbc) aid_popup3_width_pane

0xa9bb,	// (0x0007fdc8) aid_zoom_text_msg_primary

0x2911,	// (0x00077d1e) vorec_t7

0x219d,	// (0x000775aa) bg_calc_paper_pane_g1_ParamLimits

0x21a9,	// (0x000775b6) bg_calc_paper_pane_g2_ParamLimits

0x21b5,	// (0x000775c2) bg_calc_paper_pane_g3_ParamLimits

0x21c1,	// (0x000775ce) bg_calc_paper_pane_g4_ParamLimits

0x21cd,	// (0x000775da) bg_calc_paper_pane_g5_ParamLimits

0x21d9,	// (0x000775e6) bg_calc_paper_pane_g6_ParamLimits

0x21e8,	// (0x000775f5) bg_calc_paper_pane_g7_ParamLimits

0x21f7,	// (0x00077604) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00084573) bg_calc_paper_pane_g_ParamLimits

0x220a,	// (0x00077617) calc_bg_paper_pane_g9_ParamLimits

0x2a9e,	// (0x00077eab) image_qvga_pane_ParamLimits

0x2a9e,	// (0x00077eab) image_qvga_pane

0x1dbe,	// (0x000771cb) bg_popup_sub_pane_cp04_ParamLimits

0x4fac,	// (0x0007a3b9) popup_mup_playback_window_g1_ParamLimits

0x4fb8,	// (0x0007a3c5) popup_mup_playback_window_t1_ParamLimits

0x4fcd,	// (0x0007a3da) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x000848ff) popup_mup_playback_window_t_ParamLimits

0x63e5,	// (0x0007b7f2) main_mup2_pane_g3_ParamLimits

0x63e5,	// (0x0007b7f2) main_mup2_pane_g3

0x2e31,	// (0x0007823e) popup_toolbar_window_cp04

0xae0c,	// (0x00080219) popup_call2_audio_second_window_g3_ParamLimits

0xae0c,	// (0x00080219) popup_call2_audio_second_window_g3

0xb216,	// (0x00080623) popup_call2_audio_first_window_g4_ParamLimits

0xb216,	// (0x00080623) popup_call2_audio_first_window_g4

0xb895,	// (0x00080ca2) popup_call2_audio_in_window_g4_ParamLimits

0xb895,	// (0x00080ca2) popup_call2_audio_in_window_g4

0x4fe2,	// (0x0007a3ef) aid_area_sk_bg_cut_ParamLimits

0x4fe2,	// (0x0007a3ef) aid_area_sk_bg_cut

0x5000,	// (0x0007a40d) aid_area_sk_bg_cut_2_ParamLimits

0x5000,	// (0x0007a40d) aid_area_sk_bg_cut_2

0x66e8,	// (0x0007baf5) aid_placing_details_win

0x66f0,	// (0x0007bafd) aid_placing_details_win_2

0xc20d,	// (0x0008161a) camera2_autofocus_pane_g1_ParamLimits

0x1645,	// (0x00076a52) popup_fixed_preview_cale_window_ParamLimits

0x1645,	// (0x00076a52) popup_fixed_preview_cale_window

0x4736,	// (0x00079b43) navi_slider_pane_g3

0x473f,	// (0x00079b4c) navi_slider_pane_g4

0x4748,	// (0x00079b55) navi_slider_pane_g5

0x4736,	// (0x00079b43) navi_slider_pane_g6

0xacc5,	// (0x000800d2) navi_slider_pane_g7

0x4c61,	// (0x0007a06e) mup_scale_pane_g3

0x4c6a,	// (0x0007a077) mup_scale_pane_g4

0x4c73,	// (0x0007a080) mup_scale_pane_g5

0x4c7c,	// (0x0007a089) mup_scale_pane_g6

0x4c85,	// (0x0007a092) mup_scale_pane_g7

0x4736,	// (0x00079b43) cams2_slider_pane_g3

0xbe64,	// (0x00081271) cams2_slider_pane_g4

0xeb6a,	// (0x00083f77) cams2_slider_pane_g5

0x4736,	// (0x00079b43) cams2_slider_pane_g6

0xeb72,	// (0x00083f7f) cams2_slider_pane_g7

0xc08f,	// (0x0008149c) camera2_autofocus_pane_cp_g1

0xc3e5,	// (0x000817f2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3e5,	// (0x000817f2) bg_popup_preview_window_pane_cp02

0xc3f1,	// (0x000817fe) list_fp_cale_pane_ParamLimits

0xc3f1,	// (0x000817fe) list_fp_cale_pane

0xc3fd,	// (0x0008180a) popup_fixed_preview_cale_window_t1_ParamLimits

0xc3fd,	// (0x0008180a) popup_fixed_preview_cale_window_t1

0x6f6f,	// (0x0007c37c) popup_fixed_preview_cale_window_t2_ParamLimits

0x6f6f,	// (0x0007c37c) popup_fixed_preview_cale_window_t2

0x6f84,	// (0x0007c391) popup_fixed_preview_cale_window_t3_ParamLimits

0x6f84,	// (0x0007c391) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00084bc7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00084bc7) popup_fixed_preview_cale_window_t

0x6f99,	// (0x0007c3a6) list_single_fp_cale_pane_ParamLimits

0x6f99,	// (0x0007c3a6) list_single_fp_cale_pane

0xc41b,	// (0x00081828) list_single_fp_cale_pane_g1_ParamLimits

0xc41b,	// (0x00081828) list_single_fp_cale_pane_g1

0xc427,	// (0x00081834) list_single_fp_cale_pane_g2_ParamLimits

0xc427,	// (0x00081834) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x00084bce) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x00084bce) list_single_fp_cale_pane_g

0xc440,	// (0x0008184d) list_single_fp_cale_pane_t1_ParamLimits

0xc440,	// (0x0008184d) list_single_fp_cale_pane_t1

0xc452,	// (0x0008185f) list_single_fp_cale_pane_t2_ParamLimits

0xc452,	// (0x0008185f) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00084bd5) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00084bd5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa99d,	// (0x0007fdaa) main_dialer_pane

0x6fae,	// (0x0007c3bb) aid_cell_size_keypad

0x6fb8,	// (0x0007c3c5) dialer_ne_pane

0x6fc0,	// (0x0007c3cd) grid_dialer_command_1_pane

0x6fc8,	// (0x0007c3d5) grid_dialer_command_2_pane

0x6fd0,	// (0x0007c3dd) grid_dialer_keypad_pane

0x6fe2,	// (0x0007c3ef) bg_popup_call_pane_cp06_ParamLimits

0x6fe2,	// (0x0007c3ef) bg_popup_call_pane_cp06

0x6fee,	// (0x0007c3fb) dialer_ne_clear_pane_ParamLimits

0x6fee,	// (0x0007c3fb) dialer_ne_clear_pane

0xc485,	// (0x00081892) dialer_ne_pane_g1

0xc48d,	// (0x0008189a) dialer_ne_pane_t1_ParamLimits

0xc48d,	// (0x0008189a) dialer_ne_pane_t1

0x6ffa,	// (0x0007c407) dialer_ne_pane_t2_ParamLimits

0x6ffa,	// (0x0007c407) dialer_ne_pane_t2

0x7024,	// (0x0007c431) dialer_ne_pane_t3_ParamLimits

0x7024,	// (0x0007c431) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00084bda) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00084bda) dialer_ne_pane_t

0x7054,	// (0x0007c461) dialer_ne_pane_t3_copy1_ParamLimits

0x7054,	// (0x0007c461) dialer_ne_pane_t3_copy1

0x7083,	// (0x0007c490) cell_dialer_keypad_pane_ParamLimits

0x7083,	// (0x0007c490) cell_dialer_keypad_pane

0x709a,	// (0x0007c4a7) cell_dialer_command_1_pane_ParamLimits

0x709a,	// (0x0007c4a7) cell_dialer_command_1_pane

0x70b0,	// (0x0007c4bd) cell_dialer_command_2_pane_ParamLimits

0x70b0,	// (0x0007c4bd) cell_dialer_command_2_pane

0xc49f,	// (0x000818ac) bg_button_pane_cp02_ParamLimits

0xc49f,	// (0x000818ac) bg_button_pane_cp02

0x70bf,	// (0x0007c4cc) cell_dialer_keypad_pane_g1_ParamLimits

0x70bf,	// (0x0007c4cc) cell_dialer_keypad_pane_g1

0xc49f,	// (0x000818ac) bg_button_pane_cp03_ParamLimits

0xc49f,	// (0x000818ac) bg_button_pane_cp03

0x70d3,	// (0x0007c4e0) cell_dialer_command_1_pane_g1_ParamLimits

0x70d3,	// (0x0007c4e0) cell_dialer_command_1_pane_g1

0xc4ab,	// (0x000818b8) bg_button_pane_cp04

0x70e7,	// (0x0007c4f4) cell_dialer_command_2_pane_g1

0x4725,	// (0x00079b32) bg_button_pane_cp06

0xc4b3,	// (0x000818c0) dialer_ne_clear_pane_g1

0x45cd,	// (0x000799da) navi_pane_g2

0x45fb,	// (0x00079a08) navi_pane_g3

0x0002,

0xf3f5,	// (0x00084802) navi_pane_g

0x4688,	// (0x00079a95) navi_pane_mv_g2

0x46af,	// (0x00079abc) navi_pane_mv_g5

0x46b7,	// (0x00079ac4) navi_pane_mv_t1

0x2138,	// (0x00077545) main_clock2_pane

0x711f,	// (0x0007c52c) main_clock2_list_pane_ParamLimits

0x711f,	// (0x0007c52c) main_clock2_list_pane

0x7157,	// (0x0007c564) main_clock2_pane_t1_ParamLimits

0x7157,	// (0x0007c564) main_clock2_pane_t1

0x7193,	// (0x0007c5a0) main_clock2_pane_t2_ParamLimits

0x7193,	// (0x0007c5a0) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00084be1) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00084be1) main_clock2_pane_t

0x7230,	// (0x0007c63d) popup_clock_analogue_window_cp03_ParamLimits

0x7230,	// (0x0007c63d) popup_clock_analogue_window_cp03

0x7255,	// (0x0007c662) popup_clock_digital_window_cp02_ParamLimits

0x7255,	// (0x0007c662) popup_clock_digital_window_cp02

0x72c6,	// (0x0007c6d3) main_clock2_list_single_pane_ParamLimits

0x72c6,	// (0x0007c6d3) main_clock2_list_single_pane

0x4725,	// (0x00079b32) list_highlight_pane_cp05

0xc4bb,	// (0x000818c8) main_clock2_list_single_pane_t1

0x2e31,	// (0x0007823e) popup_toolbar_window_cp04_ParamLimits

0x6712,	// (0x0007bb1f) camera2_autofocus_pane_g2_ParamLimits

0x6712,	// (0x0007bb1f) camera2_autofocus_pane_g2

0x671e,	// (0x0007bb2b) camera2_autofocus_pane_g3_ParamLimits

0x671e,	// (0x0007bb2b) camera2_autofocus_pane_g3

0x672a,	// (0x0007bb37) camera2_autofocus_pane_g4_ParamLimits

0x672a,	// (0x0007bb37) camera2_autofocus_pane_g4

0x6736,	// (0x0007bb43) camera2_autofocus_pane_g5_ParamLimits

0x6736,	// (0x0007bb43) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00084b2a) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00084b2a) camera2_autofocus_pane_g

0x691b,	// (0x0007bd28) camera2_autofocus_pane_cp_g2

0x6923,	// (0x0007bd30) camera2_autofocus_pane_cp_g3

0x692b,	// (0x0007bd38) camera2_autofocus_pane_cp_g4

0x6933,	// (0x0007bd40) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00084b90) camera2_autofocus_pane_cp_g

0x6fda,	// (0x0007c3e7) popup_dialer_spcha_window

0xa99d,	// (0x0007fdaa) bg_popup_sub_pane_cp07

0xc4c9,	// (0x000818d6) list_spcha_pane

0xc4d1,	// (0x000818de) list_single_spcha_pane_ParamLimits

0xc4d1,	// (0x000818de) list_single_spcha_pane

0xa99d,	// (0x0007fdaa) list_highlight_pane_cp06

0xc4e2,	// (0x000818ef) list_single_spcha_pane_t1

0xb63f,	// (0x00080a4c) popup_call2_audio_out_window_g4_ParamLimits

0xb63f,	// (0x00080a4c) popup_call2_audio_out_window_g4

0xa99d,	// (0x0007fdaa) main_imed2_pane

0xbc1e,	// (0x0008102b) popup_imed_adjust2_window

0x5aef,	// (0x0007aefc) popup_imed_trans_window_ParamLimits

0x5aef,	// (0x0007aefc) popup_imed_trans_window

0xbecd,	// (0x000812da) popup_blid_sat_info2_window_t1

0xbedb,	// (0x000812e8) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00084abf) popup_blid_sat_info2_window_t

0x7370,	// (0x0007c77d) aid_size_cell_colour_35

0x7390,	// (0x0007c79d) aid_size_cell_colour_112

0x73b0,	// (0x0007c7bd) aid_size_cell_effect

0xbbf6,	// (0x00081003) bg_tb_trans_pane_cp02

0x3e23,	// (0x00079230) heading_imed_pane

0x73d0,	// (0x0007c7dd) listscroll_imed_pane

0xc4f0,	// (0x000818fd) heading_imed_pane_g1

0xc4f8,	// (0x00081905) heading_imed_pane_t1

0xc506,	// (0x00081913) grid_imed_colour_35_pane_ParamLimits

0xc506,	// (0x00081913) grid_imed_colour_35_pane

0x73dc,	// (0x0007c7e9) grid_imed_effect_pane

0xc51d,	// (0x0008192a) list_imed_aspect_pane

0x73f2,	// (0x0007c7ff) scroll_pane_cp027_ParamLimits

0x73f2,	// (0x0007c7ff) scroll_pane_cp027

0x7403,	// (0x0007c810) cell_imed_effect_pane_ParamLimits

0x7403,	// (0x0007c810) cell_imed_effect_pane

0xc525,	// (0x00081932) cell_imed_colour_pane_ParamLimits

0xc525,	// (0x00081932) cell_imed_colour_pane

0xc567,	// (0x00081974) cell_imed_colour_pane_g1_ParamLimits

0xc567,	// (0x00081974) cell_imed_colour_pane_g1

0xc578,	// (0x00081985) hgihlgiht_grid_pane_cp016_ParamLimits

0xc578,	// (0x00081985) hgihlgiht_grid_pane_cp016

0x742a,	// (0x0007c837) cell_imed_effect_pane_g1

0x7432,	// (0x0007c83f) grid_highlight_pane_cp017

0xc589,	// (0x00081996) list_imed_single_pane_ParamLimits

0xc589,	// (0x00081996) list_imed_single_pane

0xa99d,	// (0x0007fdaa) list_highlight_pane_cp07

0xc59e,	// (0x000819ab) list_imed_aspect_pane_comp1_t1

0xbbf6,	// (0x00081003) bg_tb_trans_pane_cp05

0xc5c0,	// (0x000819cd) popup_imed_adjust2_window_g1

0xc5e7,	// (0x000819f4) popup_imed_adjust2_window_t1

0xc5ff,	// (0x00081a0c) slider_imed_adjust_pane

0xc613,	// (0x00081a20) slider_imed_adjust_pane_g1

0xc623,	// (0x00081a30) slider_imed_adjust_pane_g2

0xc633,	// (0x00081a40) slider_imed_adjust_pane_g3

0xc644,	// (0x00081a51) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x00084bfe) slider_imed_adjust_pane_g

0x743b,	// (0x0007c848) aid_size_cell_clipart2

0x7447,	// (0x0007c854) grid_imed_clipart_pane

0xc655,	// (0x00081a62) scroll_pane_cp031

0x7451,	// (0x0007c85e) cell_imed_clipart_pane_ParamLimits

0x7451,	// (0x0007c85e) cell_imed_clipart_pane

0x7473,	// (0x0007c880) cell_imed_clipart_pane_g1

0xa99d,	// (0x0007fdaa) grid_highlight_pane_cp014

0x7134,	// (0x0007c541) main_clock2_pane_g1_ParamLimits

0x7134,	// (0x0007c541) main_clock2_pane_g1

0x7271,	// (0x0007c67e) aid_call2_pane_cp10

0x7283,	// (0x0007c690) aid_call_pane_cp10

0x44c9,	// (0x000798d6) popup_clock_analogue_window_cp10_g1

0x44c9,	// (0x000798d6) popup_clock_analogue_window_cp10_g2

0x7295,	// (0x0007c6a2) popup_clock_analogue_window_cp10_g3

0x7295,	// (0x0007c6a2) popup_clock_analogue_window_cp10_g4

0x44c9,	// (0x000798d6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00084bec) popup_clock_analogue_window_cp10_g

0x72a7,	// (0x0007c6b4) popup_clock_analogue_window_cp10_t1

0x72d8,	// (0x0007c6e5) clock_digital_number_pane_cp10_ParamLimits

0x72d8,	// (0x0007c6e5) clock_digital_number_pane_cp10

0x72f0,	// (0x0007c6fd) clock_digital_number_pane_cp11_ParamLimits

0x72f0,	// (0x0007c6fd) clock_digital_number_pane_cp11

0x7308,	// (0x0007c715) clock_digital_number_pane_cp12_ParamLimits

0x7308,	// (0x0007c715) clock_digital_number_pane_cp12

0x7320,	// (0x0007c72d) clock_digital_number_pane_cp13_ParamLimits

0x7320,	// (0x0007c72d) clock_digital_number_pane_cp13

0x7338,	// (0x0007c745) clock_digital_separator_pane_cp10_ParamLimits

0x7338,	// (0x0007c745) clock_digital_separator_pane_cp10

0x7350,	// (0x0007c75d) popup_clock_digital_window_cp02_t1_ParamLimits

0x7350,	// (0x0007c75d) popup_clock_digital_window_cp02_t1

0x1db6,	// (0x000771c3) clock_digital_number_pane_cp10_g1

0x1db6,	// (0x000771c3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00084c07) clock_digital_number_pane_cp10_g

0x1db6,	// (0x000771c3) clock_digital_separator_pane_cp10_g1

0x1db6,	// (0x000771c3) clock_digital_separator_pane_g2_cp10

0x46f5,	// (0x00079b02) navi_pane_vded_g4

0x46fe,	// (0x00079b0b) navi_pane_vded_g5

0x4707,	// (0x00079b14) navi_pane_vded_t1

0xa99d,	// (0x0007fdaa) main_vded_pane

0x747c,	// (0x0007c889) main_vded_pane_g1

0x7486,	// (0x0007c893) main_vded_pane_g2

0x7490,	// (0x0007c89d) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00084c0c) main_vded_pane_g

0x749a,	// (0x0007c8a7) main_vded_pane_t1

0x74a8,	// (0x0007c8b5) main_vded_pane_t2

0x0001,

0xf806,	// (0x00084c13) main_vded_pane_t

0x74b6,	// (0x0007c8c3) vded_slider_pane

0x74be,	// (0x0007c8cb) vded_video_pane

0xc65d,	// (0x00081a6a) vded_video_pane_g1

0x74c6,	// (0x0007c8d3) vded_video_pane_g2

0xc08f,	// (0x0008149c) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00084c18) vded_video_pane_g

0xc667,	// (0x00081a74) vded_slider_pane_g1

0xbde2,	// (0x000811ef) vded_slider_pane_g2

0xc670,	// (0x00081a7d) vded_slider_pane_g3

0xc679,	// (0x00081a86) vded_slider_pane_g4

0xc682,	// (0x00081a8f) vded_slider_pane_g5

0x0004,

0xf812,	// (0x00084c1f) vded_slider_pane_g

0x6ebb,	// (0x0007c2c8) mup3_rocker_pane_ParamLimits

0x6ebb,	// (0x0007c2c8) mup3_rocker_pane

0x74cf,	// (0x0007c8dc) mup3_control_keys_pane_g1

0x74d7,	// (0x0007c8e4) mup3_control_keys_pane_g2

0x74df,	// (0x0007c8ec) mup3_control_keys_pane_g3

0x74e7,	// (0x0007c8f4) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00084c2a) mup3_control_keys_pane_g

0x167c,	// (0x00076a89) popup_toolbar2_fixed_window_cp01_ParamLimits

0x167c,	// (0x00076a89) popup_toolbar2_fixed_window_cp01

0x6eef,	// (0x0007c2fc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6eef,	// (0x0007c2fc) popup_toolbar2_fixed_window_cp02

0xaf7e,	// (0x0008038b) popup_call2_audio_second_window_t4_ParamLimits

0xaf7e,	// (0x0008038b) popup_call2_audio_second_window_t4

0xb4ac,	// (0x000808b9) popup_call2_audio_first_window_t6_ParamLimits

0xb4ac,	// (0x000808b9) popup_call2_audio_first_window_t6

0xb742,	// (0x00080b4f) popup_call2_audio_out_window_t6_ParamLimits

0xb742,	// (0x00080b4f) popup_call2_audio_out_window_t6

0xa99d,	// (0x0007fdaa) main_vitu_pane

0x74f7,	// (0x0007c904) aid_size_cell_itu_ParamLimits

0x74f7,	// (0x0007c904) aid_size_cell_itu

0xaa15,	// (0x0007fe22) bg_popup_window_pane_cp08_ParamLimits

0xaa15,	// (0x0007fe22) bg_popup_window_pane_cp08

0x750d,	// (0x0007c91a) field_vitu_entry_pane_ParamLimits

0x750d,	// (0x0007c91a) field_vitu_entry_pane

0x7524,	// (0x0007c931) grid_vitu_function_pane_ParamLimits

0x7524,	// (0x0007c931) grid_vitu_function_pane

0x753f,	// (0x0007c94c) grid_vitu_itu_pane_ParamLimits

0x753f,	// (0x0007c94c) grid_vitu_itu_pane

0x755d,	// (0x0007c96a) cell_vitu_itu_pane_ParamLimits

0x755d,	// (0x0007c96a) cell_vitu_itu_pane

0x757f,	// (0x0007c98c) cell_vitu_function_pane_ParamLimits

0x757f,	// (0x0007c98c) cell_vitu_function_pane

0xaa15,	// (0x0007fe22) bg_popup_sub_pane_cp08_ParamLimits

0xaa15,	// (0x0007fe22) bg_popup_sub_pane_cp08

0x7598,	// (0x0007c9a5) field_vitu_entry_pane_t1_ParamLimits

0x7598,	// (0x0007c9a5) field_vitu_entry_pane_t1

0xc6a3,	// (0x00081ab0) field_vitu_entry_pane_t2_ParamLimits

0xc6a3,	// (0x00081ab0) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00084c38) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00084c38) field_vitu_entry_pane_t

0xc6c0,	// (0x00081acd) bg_button_pane_cp05_ParamLimits

0xc6c0,	// (0x00081acd) bg_button_pane_cp05

0x75b6,	// (0x0007c9c3) cell_vitu_itu_pane_g1

0x75ce,	// (0x0007c9db) cell_vitu_itu_pane_t1_ParamLimits

0x75ce,	// (0x0007c9db) cell_vitu_itu_pane_t1

0x75e0,	// (0x0007c9ed) cell_vitu_itu_pane_t2_ParamLimits

0x75e0,	// (0x0007c9ed) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00084c3d) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00084c3d) cell_vitu_itu_pane_t

0xc6ce,	// (0x00081adb) bg_button_pane_cp07

0x7615,	// (0x0007ca22) cell_vitu_function_pane_g1

0xaa23,	// (0x0007fe30) main_calc_pane_g1

0x14bc,	// (0x000768c9) aid_visual_content_pane

0xa99d,	// (0x0007fdaa) main_vradio_pane

0x761e,	// (0x0007ca2b) main_vradio_pane_g1_ParamLimits

0x761e,	// (0x0007ca2b) main_vradio_pane_g1

0xc6d8,	// (0x00081ae5) main_vradio_pane_g2_ParamLimits

0xc6d8,	// (0x00081ae5) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00084c44) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00084c44) main_vradio_pane_g

0x7637,	// (0x0007ca44) main_vradio_pane_t1_ParamLimits

0x7637,	// (0x0007ca44) main_vradio_pane_t1

0x764c,	// (0x0007ca59) main_vradio_pane_t2_ParamLimits

0x764c,	// (0x0007ca59) main_vradio_pane_t2

0xc6e5,	// (0x00081af2) main_vradio_pane_t3_ParamLimits

0xc6e5,	// (0x00081af2) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00084c49) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00084c49) main_vradio_pane_t

0x7661,	// (0x0007ca6e) vradio_rocker_control_pane_ParamLimits

0x7661,	// (0x0007ca6e) vradio_rocker_control_pane

0x7673,	// (0x0007ca80) vradio_station_info_pane_ParamLimits

0x7673,	// (0x0007ca80) vradio_station_info_pane

0xc6f9,	// (0x00081b06) vradio_frequency_info_pane_ParamLimits

0xc6f9,	// (0x00081b06) vradio_frequency_info_pane

0xc08f,	// (0x0008149c) vradio_station_info_pane_g1

0xc708,	// (0x00081b15) vradio_station_info_pane_t1_ParamLimits

0xc708,	// (0x00081b15) vradio_station_info_pane_t1

0xc72a,	// (0x00081b37) vradio_station_info_pane_t2_ParamLimits

0xc72a,	// (0x00081b37) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00084c50) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00084c50) vradio_station_info_pane_t

0xc73c,	// (0x00081b49) vradio_tuning_pane

0xc744,	// (0x00081b51) vradio_rocker_control_pane_g1

0xc74c,	// (0x00081b59) vradio_rocker_control_pane_g2

0xc754,	// (0x00081b61) vradio_rocker_control_pane_g3

0xc75c,	// (0x00081b69) vradio_rocker_control_pane_g4

0xc764,	// (0x00081b71) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00084c55) vradio_rocker_control_pane_g

0x7685,	// (0x0007ca92) vradio_frequency_info_pane_g1

0xc76c,	// (0x00081b79) vradio_frequency_info_pane_t1_ParamLimits

0xc76c,	// (0x00081b79) vradio_frequency_info_pane_t1

0x768f,	// (0x0007ca9c) vradio_tuning_pane_g1

0x769a,	// (0x0007caa7) vradio_tuning_pane_t1

0xa9d3,	// (0x0007fde0) area_side_right_pane_ParamLimits

0xa9d3,	// (0x0007fde0) area_side_right_pane

0xbbbd,	// (0x00080fca) status_small_pane_g1

0xbbc5,	// (0x00080fd2) status_small_pane_g2

0xbbce,	// (0x00080fdb) status_small_pane_g3

0xbbd7,	// (0x00080fe4) status_small_pane_g4

0x0003,

0xf608,	// (0x00084a15) status_small_pane_g

0xbbe0,	// (0x00080fed) status_small_pane_t1

0xa99d,	// (0x0007fdaa) main_video3_pane

0xc780,	// (0x00081b8d) cams_zoom_vslider_pane

0xc788,	// (0x00081b95) image3_wide_pane_ParamLimits

0xc788,	// (0x00081b95) image3_wide_pane

0xc7a2,	// (0x00081baf) image3_wide_small_pane

0xc7ae,	// (0x00081bbb) main_video3_pane_g1_ParamLimits

0xc7ae,	// (0x00081bbb) main_video3_pane_g1

0xc7ca,	// (0x00081bd7) main_video3_pane_g2_ParamLimits

0xc7ca,	// (0x00081bd7) main_video3_pane_g2

0x0001,

0xf853,	// (0x00084c60) main_video3_pane_g_ParamLimits

0xf853,	// (0x00084c60) main_video3_pane_g

0xc7e6,	// (0x00081bf3) main_video3_pane_t1_ParamLimits

0xc7e6,	// (0x00081bf3) main_video3_pane_t1

0xc811,	// (0x00081c1e) main_video3_pane_t2_ParamLimits

0xc811,	// (0x00081c1e) main_video3_pane_t2

0xc83c,	// (0x00081c49) main_video3_pane_t3_ParamLimits

0xc83c,	// (0x00081c49) main_video3_pane_t3

0x0002,

0xf858,	// (0x00084c65) main_video3_pane_t_ParamLimits

0xf858,	// (0x00084c65) main_video3_pane_t

0xc869,	// (0x00081c76) cams_zoom_vslider_pane_g1

0xc872,	// (0x00081c7f) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x00084c6c) cams_zoom_vslider_pane_g

0xc87a,	// (0x00081c87) small_slider_vertical_pane

0xc08f,	// (0x0008149c) small_slider_vertical_pane_g1

0xc08f,	// (0x0008149c) small_slider_vertical_pane_g2

0xc882,	// (0x00081c8f) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00084c71) small_slider_vertical_pane_g

0xa99d,	// (0x0007fdaa) main_hwr_training_pane

0xc88b,	// (0x00081c98) hwr_training_instruct_pane_ParamLimits

0xc88b,	// (0x00081c98) hwr_training_instruct_pane

0x76a9,	// (0x0007cab6) hwr_training_navi_pane_ParamLimits

0x76a9,	// (0x0007cab6) hwr_training_navi_pane

0x76c8,	// (0x0007cad5) hwr_training_write_pane_ParamLimits

0x76c8,	// (0x0007cad5) hwr_training_write_pane

0xa99d,	// (0x0007fdaa) bg_frame_shadow_pane

0xc8c2,	// (0x00081ccf) hwr_training_write_pane_g1

0xc8ca,	// (0x00081cd7) hwr_training_write_pane_g2

0xc8d2,	// (0x00081cdf) hwr_training_write_pane_g3

0xc8da,	// (0x00081ce7) hwr_training_write_pane_g4

0xc8e2,	// (0x00081cef) hwr_training_write_pane_g5

0xc8ea,	// (0x00081cf7) hwr_training_write_pane_g6

0xc8f2,	// (0x00081cff) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00084c78) hwr_training_write_pane_g

0xeb87,	// (0x00083f94) hwr_training_navi_pane_g1_ParamLimits

0xeb87,	// (0x00083f94) hwr_training_navi_pane_g1

0xeb99,	// (0x00083fa6) hwr_training_navi_pane_g2_ParamLimits

0xeb99,	// (0x00083fa6) hwr_training_navi_pane_g2

0xebab,	// (0x00083fb8) hwr_training_navi_pane_g3_ParamLimits

0xebab,	// (0x00083fb8) hwr_training_navi_pane_g3

0xebbb,	// (0x00083fc8) hwr_training_navi_pane_g4_ParamLimits

0xebbb,	// (0x00083fc8) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00084c87) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00084c87) hwr_training_navi_pane_g

0xebc8,	// (0x00083fd5) hwr_training_navi_pane_t1

0x7710,	// (0x0007cb1d) list_single_hwr_training_instruct_pane_ParamLimits

0x7710,	// (0x0007cb1d) list_single_hwr_training_instruct_pane

0xc8fa,	// (0x00081d07) list_single_hwr_training_instruct_pane_t1

0xbfcf,	// (0x000813dc) bg_frame_shadow_pane_g1

0xc909,	// (0x00081d16) bg_frame_shadow_pane_g2

0xc911,	// (0x00081d1e) bg_frame_shadow_pane_g3

0xc919,	// (0x00081d26) bg_frame_shadow_pane_g4

0xc921,	// (0x00081d2e) bg_frame_shadow_pane_g5

0xc929,	// (0x00081d36) bg_frame_shadow_pane_g6

0xc931,	// (0x00081d3e) bg_frame_shadow_pane_g7

0x2383,	// (0x00077790) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00084c92) bg_frame_shadow_pane_g

0xa99d,	// (0x0007fdaa) main_video_tele_dialer_pane

0x7725,	// (0x0007cb32) aid_size_cell_video_keypad_ParamLimits

0x7725,	// (0x0007cb32) aid_size_cell_video_keypad

0x773f,	// (0x0007cb4c) grid_video_dialer_keypad_pane_ParamLimits

0x773f,	// (0x0007cb4c) grid_video_dialer_keypad_pane

0x7789,	// (0x0007cb96) video_down_pane_cp_ParamLimits

0x7789,	// (0x0007cb96) video_down_pane_cp

0x7799,	// (0x0007cba6) cell_video_dialer_keypad_pane_ParamLimits

0x7799,	// (0x0007cba6) cell_video_dialer_keypad_pane

0xc955,	// (0x00081d62) bg_button_pane_cp08_ParamLimits

0xc955,	// (0x00081d62) bg_button_pane_cp08

0x77bb,	// (0x0007cbc8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x77bb,	// (0x0007cbc8) cell_video_dialer_keypad_pane_g1

0x6ea5,	// (0x0007c2b2) mup3_rocker2_pane_ParamLimits

0x6ea5,	// (0x0007c2b2) mup3_rocker2_pane

0xc08f,	// (0x0008149c) mup3_rocker2_pane_g1

0x59d0,	// (0x0007addd) main_dialer2_pane

0xa99d,	// (0x0007fdaa) main_mp4_pane

0xebde,	// (0x00083feb) main_mp4_pane_g1_ParamLimits

0xebde,	// (0x00083feb) main_mp4_pane_g1

0xebde,	// (0x00083feb) main_mp4_pane_g2_ParamLimits

0xebde,	// (0x00083feb) main_mp4_pane_g2

0x77f5,	// (0x0007cc02) main_mp4_pane_g3_ParamLimits

0x77f5,	// (0x0007cc02) main_mp4_pane_g3

0xebec,	// (0x00083ff9) main_mp4_pane_g4_ParamLimits

0xebec,	// (0x00083ff9) main_mp4_pane_g4

0xec14,	// (0x00084021) main_mp4_pane_g5_ParamLimits

0xec14,	// (0x00084021) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00084cb2) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00084cb2) main_mp4_pane_g

0xec64,	// (0x00084071) main_mp4_pane_t1_ParamLimits

0xec64,	// (0x00084071) main_mp4_pane_t1

0xecc0,	// (0x000840cd) main_mp4_pane_t2_ParamLimits

0xecc0,	// (0x000840cd) main_mp4_pane_t2

0xc961,	// (0x00081d6e) main_mp4_pane_t3_ParamLimits

0xc961,	// (0x00081d6e) main_mp4_pane_t3

0xed12,	// (0x0008411f) main_mp4_pane_t4_ParamLimits

0xed12,	// (0x0008411f) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00084cbf) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00084cbf) main_mp4_pane_t

0xed56,	// (0x00084163) mp4_progress_pane_ParamLimits

0xed56,	// (0x00084163) mp4_progress_pane

0xeda0,	// (0x000841ad) mp4_rocker_pane_ParamLimits

0xeda0,	// (0x000841ad) mp4_rocker_pane

0xc989,	// (0x00081d96) mp4_progress_pane_t1

0xc9a2,	// (0x00081daf) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00084cc8) mp4_progress_pane_t

0xc9bb,	// (0x00081dc8) mup_progress_pane_cp04

0xc08f,	// (0x0008149c) mp4_rocker_pane_g1

0x7831,	// (0x0007cc3e) aid_cell_size_keypad2_ParamLimits

0x7831,	// (0x0007cc3e) aid_cell_size_keypad2

0x7847,	// (0x0007cc54) dialer2_ne_pane_ParamLimits

0x7847,	// (0x0007cc54) dialer2_ne_pane

0x7861,	// (0x0007cc6e) grid_dialer2_keypad_pane_ParamLimits

0x7861,	// (0x0007cc6e) grid_dialer2_keypad_pane

0xbe74,	// (0x00081281) bg_popup_call_pane_cp07_ParamLimits

0xbe74,	// (0x00081281) bg_popup_call_pane_cp07

0x787d,	// (0x0007cc8a) dialer2_ne_pane_t1_ParamLimits

0x787d,	// (0x0007cc8a) dialer2_ne_pane_t1

0x78b8,	// (0x0007ccc5) cell_dialer2_keypad_pane_ParamLimits

0x78b8,	// (0x0007ccc5) cell_dialer2_keypad_pane

0xc9d9,	// (0x00081de6) bg_button_pane_pane_cp04_ParamLimits

0xc9d9,	// (0x00081de6) bg_button_pane_pane_cp04

0x78da,	// (0x0007cce7) cell_dialer2_keypad_pane_g1_ParamLimits

0x78da,	// (0x0007cce7) cell_dialer2_keypad_pane_g1

0x2cf3,	// (0x00078100) aid_placing_vt_set_content_ParamLimits

0x2cf3,	// (0x00078100) aid_placing_vt_set_content

0x2d1b,	// (0x00078128) aid_placing_vt_set_title_ParamLimits

0x2d1b,	// (0x00078128) aid_placing_vt_set_title

0xa99d,	// (0x0007fdaa) main_image3_pane

0x79a0,	// (0x0007cdad) area_side_right_pane_cp01_ParamLimits

0x79a0,	// (0x0007cdad) area_side_right_pane_cp01

0xebde,	// (0x00083feb) main_image3_pane_g1_ParamLimits

0xebde,	// (0x00083feb) main_image3_pane_g1

0x79b7,	// (0x0007cdc4) main_image3_pane_g2_ParamLimits

0x79b7,	// (0x0007cdc4) main_image3_pane_g2

0x79df,	// (0x0007cdec) main_image3_pane_g3_ParamLimits

0x79df,	// (0x0007cdec) main_image3_pane_g3

0x7a09,	// (0x0007ce16) main_image3_pane_g4_ParamLimits

0x7a09,	// (0x0007ce16) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00084cd7) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00084cd7) main_image3_pane_g

0x7a33,	// (0x0007ce40) main_image3_pane_t1_ParamLimits

0x7a33,	// (0x0007ce40) main_image3_pane_t1

0x7a8b,	// (0x0007ce98) main_image3_pane_t2_ParamLimits

0x7a8b,	// (0x0007ce98) main_image3_pane_t2

0x7add,	// (0x0007ceea) main_image3_pane_t3_ParamLimits

0x7add,	// (0x0007ceea) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00084ce0) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00084ce0) main_image3_pane_t

0xaa15,	// (0x0007fe22) grid_sctrl_middle_pane_cp01_ParamLimits

0xaa15,	// (0x0007fe22) grid_sctrl_middle_pane_cp01

0x7b65,	// (0x0007cf72) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b65,	// (0x0007cf72) cell_sctrl_middle_pane_cp01

0x7b82,	// (0x0007cf8f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7b82,	// (0x0007cf8f) cell_sctrl_middle_pane_cp01_g1

0xa99d,	// (0x0007fdaa) main_call4_pane

0x7b98,	// (0x0007cfa5) aid_size_button_call4_ParamLimits

0x7b98,	// (0x0007cfa5) aid_size_button_call4

0x7bc9,	// (0x0007cfd6) call4_windows_pane_ParamLimits

0x7bc9,	// (0x0007cfd6) call4_windows_pane

0x7be9,	// (0x0007cff6) grid_call4_button_pane_ParamLimits

0x7be9,	// (0x0007cff6) grid_call4_button_pane

0xc9e5,	// (0x00081df2) call4_windows_conf_pane

0xc9fc,	// (0x00081e09) popup_call4_audio_first_window_ParamLimits

0xc9fc,	// (0x00081e09) popup_call4_audio_first_window

0xca48,	// (0x00081e55) popup_call4_audio_second_window_ParamLimits

0xca48,	// (0x00081e55) popup_call4_audio_second_window

0xca5c,	// (0x00081e69) popup_call4_audio_wait_window_ParamLimits

0xca5c,	// (0x00081e69) popup_call4_audio_wait_window

0x7c16,	// (0x0007d023) cell_call4_button_pane_ParamLimits

0x7c16,	// (0x0007d023) cell_call4_button_pane

0x7c3f,	// (0x0007d04c) bg_button_pane_cp09_ParamLimits

0x7c3f,	// (0x0007d04c) bg_button_pane_cp09

0x7c4b,	// (0x0007d058) cell_call4_button_pane_g1_ParamLimits

0x7c4b,	// (0x0007d058) cell_call4_button_pane_g1

0x7c71,	// (0x0007d07e) cell_call4_button_pane_t1_ParamLimits

0x7c71,	// (0x0007d07e) cell_call4_button_pane_t1

0xcaa4,	// (0x00081eb1) popup_call4_audio_conf_window_ParamLimits

0xcaa4,	// (0x00081eb1) popup_call4_audio_conf_window

0x6f05,	// (0x0007c312) mup3_progress_pane_t1_ParamLimits

0x6f24,	// (0x0007c331) mup3_progress_pane_t2_ParamLimits

0xc3a2,	// (0x000817af) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00084bb9) mup3_progress_pane_t_ParamLimits

0xc3bf,	// (0x000817cc) mup_progress_pane_cp03_ParamLimits

0x74ef,	// (0x0007c8fc) mup3_control_keys_pane_g4_copy1

0xed84,	// (0x00084191) mp4_rocker2_pane_ParamLimits

0xed84,	// (0x00084191) mp4_rocker2_pane

0xcab8,	// (0x00081ec5) mp4_rocker2_pane_g1

0xcac0,	// (0x00081ecd) mp4_rocker2_pane_g2

0xedf2,	// (0x000841ff) mp4_rocker2_pane_g3

0xedfa,	// (0x00084207) mp4_rocker2_pane_g4

0xee02,	// (0x0008420f) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00084ce9) mp4_rocker2_pane_g

0xa99d,	// (0x0007fdaa) main_camera4_pane

0xa99d,	// (0x0007fdaa) main_video4_pane

0x7757,	// (0x0007cb64) main_video_tele_dialer_pane_t1_ParamLimits

0x7757,	// (0x0007cb64) main_video_tele_dialer_pane_t1

0x7770,	// (0x0007cb7d) main_video_tele_dialer_pane_t2_ParamLimits

0x7770,	// (0x0007cb7d) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00084ca3) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00084ca3) main_video_tele_dialer_pane_t

0x7caf,	// (0x0007d0bc) cam4_autofocus_pane_ParamLimits

0x7caf,	// (0x0007d0bc) cam4_autofocus_pane

0x7cc5,	// (0x0007d0d2) cam4_image_uncrop_pane_ParamLimits

0x7cc5,	// (0x0007d0d2) cam4_image_uncrop_pane

0x7cdf,	// (0x0007d0ec) cam4_indicators_pane_ParamLimits

0x7cdf,	// (0x0007d0ec) cam4_indicators_pane

0x7d0a,	// (0x0007d117) main_camera4_pane_g1_ParamLimits

0x7d0a,	// (0x0007d117) main_camera4_pane_g1

0x7d1c,	// (0x0007d129) main_camera4_pane_g2_ParamLimits

0x7d1c,	// (0x0007d129) main_camera4_pane_g2

0x7d2f,	// (0x0007d13c) main_camera4_pane_g3_ParamLimits

0x7d2f,	// (0x0007d13c) main_camera4_pane_g3

0x7d42,	// (0x0007d14f) main_camera4_pane_g4_ParamLimits

0x7d42,	// (0x0007d14f) main_camera4_pane_g4

0x7d55,	// (0x0007d162) main_camera4_pane_g5_ParamLimits

0x7d55,	// (0x0007d162) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00084cf4) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00084cf4) main_camera4_pane_g

0x7d79,	// (0x0007d186) main_camera4_pane_t1_ParamLimits

0x7d79,	// (0x0007d186) main_camera4_pane_t1

0xc2fb,	// (0x00081708) bg_tb_trans_pane_cp06

0xee2e,	// (0x0008423b) cam4_indicators_pane_g1

0xee3f,	// (0x0008424c) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00084d0f) cam4_indicators_pane_g

0xee5d,	// (0x0008426a) cam4_indicators_pane_t1

0x7ddd,	// (0x0007d1ea) main_video4_pane_g1_ParamLimits

0x7ddd,	// (0x0007d1ea) main_video4_pane_g1

0x7dec,	// (0x0007d1f9) main_video4_pane_g2_ParamLimits

0x7dec,	// (0x0007d1f9) main_video4_pane_g2

0x7dfb,	// (0x0007d208) main_video4_pane_g3_ParamLimits

0x7dfb,	// (0x0007d208) main_video4_pane_g3

0x7e0a,	// (0x0007d217) main_video4_pane_g4_ParamLimits

0x7e0a,	// (0x0007d217) main_video4_pane_g4

0x0004,

0xf909,	// (0x00084d16) main_video4_pane_g_ParamLimits

0xf909,	// (0x00084d16) main_video4_pane_g

0x7e28,	// (0x0007d235) vid4_indicators_pane_ParamLimits

0x7e28,	// (0x0007d235) vid4_indicators_pane

0x7e56,	// (0x0007d263) video4_image_uncrop_cif_pane_ParamLimits

0x7e56,	// (0x0007d263) video4_image_uncrop_cif_pane

0x7e70,	// (0x0007d27d) video4_image_uncrop_nhd_pane_ParamLimits

0x7e70,	// (0x0007d27d) video4_image_uncrop_nhd_pane

0x7cc5,	// (0x0007d0d2) video4_image_uncrop_vga_pane_ParamLimits

0x7cc5,	// (0x0007d0d2) video4_image_uncrop_vga_pane

0xaa15,	// (0x0007fe22) bg_tb_trans_pane_cp07

0xee89,	// (0x00084296) vid4_indicators_pane_g1

0xee9d,	// (0x000842aa) vid4_indicators_pane_g2

0xeeb1,	// (0x000842be) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00084d21) vid4_indicators_pane_g

0xeee0,	// (0x000842ed) vid4_indicators_pane_t1

0x7e84,	// (0x0007d291) cam4_autofocus_pane_g1

0x7e8c,	// (0x0007d299) cam4_autofocus_pane_g2

0x7e94,	// (0x0007d2a1) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00084d2c) cam4_autofocus_pane_g

0x7e9c,	// (0x0007d2a9) cam4_autofocus_pane_g3_copy1

0xc939,	// (0x00081d46) video_down_pane_cp_t1

0xc947,	// (0x00081d54) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00084ca8) video_down_pane_cp_t

0xaa15,	// (0x0007fe22) popup_vitu2_window_ParamLimits

0xaa15,	// (0x0007fe22) popup_vitu2_window

0x7ea4,	// (0x0007d2b1) aid_size_cell2_itu2_ParamLimits

0x7ea4,	// (0x0007d2b1) aid_size_cell2_itu2

0x7eca,	// (0x0007d2d7) aid_size_cell_itu2_ParamLimits

0x7eca,	// (0x0007d2d7) aid_size_cell_itu2

0x7f26,	// (0x0007d333) bg_popup_window_pane_cp09_ParamLimits

0x7f26,	// (0x0007d333) bg_popup_window_pane_cp09

0x7f34,	// (0x0007d341) field_vitu2_entry_pane_ParamLimits

0x7f34,	// (0x0007d341) field_vitu2_entry_pane

0x7f5a,	// (0x0007d367) grid_vitu2_function_pane_ParamLimits

0x7f5a,	// (0x0007d367) grid_vitu2_function_pane

0x7fab,	// (0x0007d3b8) grid_vitu2_itu_pane_ParamLimits

0x7fab,	// (0x0007d3b8) grid_vitu2_itu_pane

0x803e,	// (0x0007d44b) cell_vitu2_itu_pane_ParamLimits

0x803e,	// (0x0007d44b) cell_vitu2_itu_pane

0x8062,	// (0x0007d46f) cell_vitu2_function_pane_ParamLimits

0x8062,	// (0x0007d46f) cell_vitu2_function_pane

0xcada,	// (0x00081ee7) bg_popup_call_pane_cp08_ParamLimits

0xcada,	// (0x00081ee7) bg_popup_call_pane_cp08

0xcaf3,	// (0x00081f00) field_vitu2_entry_pane_g1

0xcaff,	// (0x00081f0c) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00084d33) field_vitu2_entry_pane_g

0xcb19,	// (0x00081f26) field_vitu2_entry_pane_t1_ParamLimits

0xcb19,	// (0x00081f26) field_vitu2_entry_pane_t1

0xcb48,	// (0x00081f55) field_vitu2_entry_pane_t2_ParamLimits

0xcb48,	// (0x00081f55) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00084d3a) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00084d3a) field_vitu2_entry_pane_t

0x80a1,	// (0x0007d4ae) bg_button_pane_cp010_ParamLimits

0x80a1,	// (0x0007d4ae) bg_button_pane_cp010

0x80af,	// (0x0007d4bc) cell_vitu2_itu_pane_g1

0x80cd,	// (0x0007d4da) cell_vitu2_itu_pane_t1_ParamLimits

0x80cd,	// (0x0007d4da) cell_vitu2_itu_pane_t1

0x0b50,	// (0x00075f5d) cell_vitu2_itu_pane_t2_ParamLimits

0x0b50,	// (0x00075f5d) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00084d44) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00084d44) cell_vitu2_itu_pane_t

0xaa15,	// (0x0007fe22) bg_button_pane_cp011

0x8133,	// (0x0007d540) cell_vitu2_function_pane_g1

0xa99d,	// (0x0007fdaa) main_myfav_hc_pane

0x7b2d,	// (0x0007cf3a) popup_image3_note_pane_ParamLimits

0x7b2d,	// (0x0007cf3a) popup_image3_note_pane

0x7b49,	// (0x0007cf56) popup_image3_tool_bar_pane_ParamLimits

0x7b49,	// (0x0007cf56) popup_image3_tool_bar_pane

0x0bd4,	// (0x00075fe1) cell_vitu2_itu_pane_t3_ParamLimits

0x0bd4,	// (0x00075fe1) cell_vitu2_itu_pane_t3

0xa99d,	// (0x0007fdaa) bg_popup_trans_pane

0xcb6d,	// (0x00081f7a) grid_image3_tool_bar_pane

0xcb77,	// (0x00081f84) bg_popup_trans_pane_g1

0x32ea,	// (0x000786f7) bg_popup_trans_pane_g2

0xcb7f,	// (0x00081f8c) bg_popup_trans_pane_g3

0xcb87,	// (0x00081f94) bg_popup_trans_pane_g4

0xcb8f,	// (0x00081f9c) bg_popup_trans_pane_g5

0xcb97,	// (0x00081fa4) bg_popup_trans_pane_g6

0xcb9f,	// (0x00081fac) bg_popup_trans_pane_g7

0xcba7,	// (0x00081fb4) bg_popup_trans_pane_g8

0x32ca,	// (0x000786d7) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00084d4b) bg_popup_trans_pane_g

0xcbaf,	// (0x00081fbc) cell_image3_tool_bar_pane_ParamLimits

0xcbaf,	// (0x00081fbc) cell_image3_tool_bar_pane

0xc08f,	// (0x0008149c) cell_image3_tool_bar_pane_g1

0xa99d,	// (0x0007fdaa) bg_popup_trans_pane_cp1

0xcbc3,	// (0x00081fd0) popup_image3_note_pane_t1

0xcbd1,	// (0x00081fde) popup_image3_note_pane_t2

0xcbdf,	// (0x00081fec) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00084d5e) popup_image3_note_pane_t

0xcbed,	// (0x00081ffa) popup_image3_note_pane_t3_copy1

0x8147,	// (0x0007d554) bg_myfav_hc_instruction_pane_ParamLimits

0x8147,	// (0x0007d554) bg_myfav_hc_instruction_pane

0x815b,	// (0x0007d568) cell_myfav_contact_pane_ParamLimits

0x815b,	// (0x0007d568) cell_myfav_contact_pane

0x8179,	// (0x0007d586) cell_myfav_contact_pane_cp1_ParamLimits

0x8179,	// (0x0007d586) cell_myfav_contact_pane_cp1

0x8191,	// (0x0007d59e) cell_myfav_contact_pane_cp2_ParamLimits

0x8191,	// (0x0007d59e) cell_myfav_contact_pane_cp2

0x81a9,	// (0x0007d5b6) cell_myfav_contact_pane_cp3_ParamLimits

0x81a9,	// (0x0007d5b6) cell_myfav_contact_pane_cp3

0x81c0,	// (0x0007d5cd) cell_myfav_contact_pane_cp4_ParamLimits

0x81c0,	// (0x0007d5cd) cell_myfav_contact_pane_cp4

0x81d8,	// (0x0007d5e5) cell_myfav_contact_pane_cp5_ParamLimits

0x81d8,	// (0x0007d5e5) cell_myfav_contact_pane_cp5

0x81ec,	// (0x0007d5f9) cell_myfav_contact_pane_cp6_ParamLimits

0x81ec,	// (0x0007d5f9) cell_myfav_contact_pane_cp6

0x8202,	// (0x0007d60f) cell_myfav_contact_pane_cp7_ParamLimits

0x8202,	// (0x0007d60f) cell_myfav_contact_pane_cp7

0xcbfb,	// (0x00082008) listscroll_gen_pane_cp05

0x821c,	// (0x0007d629) main_myfav_hc_pane_g1_ParamLimits

0x821c,	// (0x0007d629) main_myfav_hc_pane_g1

0x8236,	// (0x0007d643) main_myfav_hc_pane_g2_ParamLimits

0x8236,	// (0x0007d643) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00084d65) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00084d65) main_myfav_hc_pane_g

0x8268,	// (0x0007d675) main_myfav_hc_pane_t1_ParamLimits

0x8268,	// (0x0007d675) main_myfav_hc_pane_t1

0xcc04,	// (0x00082011) main_myfav_hc_pane_t2_ParamLimits

0xcc04,	// (0x00082011) main_myfav_hc_pane_t2

0xcc16,	// (0x00082023) main_myfav_hc_pane_t3_ParamLimits

0xcc16,	// (0x00082023) main_myfav_hc_pane_t3

0x827f,	// (0x0007d68c) main_myfav_hc_pane_t4_ParamLimits

0x827f,	// (0x0007d68c) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00084d6c) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00084d6c) main_myfav_hc_pane_t

0xc08f,	// (0x0008149c) bg_myfav_hc_instruction_pane_g1

0xcc28,	// (0x00082035) cell_myfav_contact_pane_g1_ParamLimits

0xcc28,	// (0x00082035) cell_myfav_contact_pane_g1

0xcc28,	// (0x00082035) cell_myfav_contact_pane_g2_ParamLimits

0xcc28,	// (0x00082035) cell_myfav_contact_pane_g2

0xcc34,	// (0x00082041) cell_myfav_contact_pane_g3_ParamLimits

0xcc34,	// (0x00082041) cell_myfav_contact_pane_g3

0xc38c,	// (0x00081799) cell_myfav_contact_pane_g4_ParamLimits

0xc38c,	// (0x00081799) cell_myfav_contact_pane_g4

0xcc41,	// (0x0008204e) cell_myfav_contact_pane_g5_ParamLimits

0xcc41,	// (0x0008204e) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00084d77) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00084d77) cell_myfav_contact_pane_g

0x8250,	// (0x0007d65d) main_myfav_hc_pane_g3_ParamLimits

0x8250,	// (0x0007d65d) main_myfav_hc_pane_g3

0x15de,	// (0x000769eb) popup_adpt_find_window

0x82a7,	// (0x0007d6b4) afind_page_pane_ParamLimits

0x82a7,	// (0x0007d6b4) afind_page_pane

0x82bc,	// (0x0007d6c9) aid_size_cell_afind_ParamLimits

0x82bc,	// (0x0007d6c9) aid_size_cell_afind

0x82da,	// (0x0007d6e7) bg_popup_sub_pane_cp09_ParamLimits

0x82da,	// (0x0007d6e7) bg_popup_sub_pane_cp09

0x82e7,	// (0x0007d6f4) find_pane_cp01_ParamLimits

0x82e7,	// (0x0007d6f4) find_pane_cp01

0xcc4d,	// (0x0008205a) grid_afind_control_pane_ParamLimits

0xcc4d,	// (0x0008205a) grid_afind_control_pane

0x82f4,	// (0x0007d701) grid_afind_pane_ParamLimits

0x82f4,	// (0x0007d701) grid_afind_pane

0x8316,	// (0x0007d723) cell_afind_pane_ParamLimits

0x8316,	// (0x0007d723) cell_afind_pane

0xc08f,	// (0x0008149c) afind_page_pane_g1

0x8377,	// (0x0007d784) afind_page_pane_g2

0x8380,	// (0x0007d78d) afind_page_pane_g3

0x0002,

0xf975,	// (0x00084d82) afind_page_pane_g

0x8389,	// (0x0007d796) afind_page_pane_t1

0xcc61,	// (0x0008206e) cell_afind_grid_control_pane_ParamLimits

0xcc61,	// (0x0008206e) cell_afind_grid_control_pane

0xc9d9,	// (0x00081de6) bg_button_pane_cp69_ParamLimits

0xc9d9,	// (0x00081de6) bg_button_pane_cp69

0x83a9,	// (0x0007d7b6) cell_afind_pane_g1_ParamLimits

0x83a9,	// (0x0007d7b6) cell_afind_pane_g1

0x83b6,	// (0x0007d7c3) cell_afind_pane_t1_ParamLimits

0x83b6,	// (0x0007d7c3) cell_afind_pane_t1

0x2c86,	// (0x00078093) bg_button_pane_cp72

0xcc70,	// (0x0008207d) cell_afind_grid_control_pane_g1

0x53e0,	// (0x0007a7ed) aid_image_placing_area_ParamLimits

0x53e0,	// (0x0007a7ed) aid_image_placing_area

0xc68b,	// (0x00081a98) field_vitu_entry_pane_g1_ParamLimits

0xc68b,	// (0x00081a98) field_vitu_entry_pane_g1

0xc697,	// (0x00081aa4) field_vitu_entry_pane_g2_ParamLimits

0xc697,	// (0x00081aa4) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00084c33) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00084c33) field_vitu_entry_pane_g

0x75b6,	// (0x0007c9c3) cell_vitu_itu_pane_g1_ParamLimits

0x75f8,	// (0x0007ca05) cell_vitu_itu_pane_t3_ParamLimits

0x75f8,	// (0x0007ca05) cell_vitu_itu_pane_t3

0xc989,	// (0x00081d96) mp4_progress_pane_t1_ParamLimits

0xc9a2,	// (0x00081daf) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00084cc8) mp4_progress_pane_t_ParamLimits

0xc9bb,	// (0x00081dc8) mup_progress_pane_cp04_ParamLimits

0x8293,	// (0x0007d6a0) main_myfav_hc_pane_t5_ParamLimits

0x8293,	// (0x0007d6a0) main_myfav_hc_pane_t5

0xa9c3,	// (0x0007fdd0) aid_zoom_text_primary

0x15de,	// (0x000769eb) popup_adpt_find_window_ParamLimits

0xaa15,	// (0x0007fe22) main_cam_set_pane

0x7cf6,	// (0x0007d103) cam4_zoom_pane_ParamLimits

0x7cf6,	// (0x0007d103) cam4_zoom_pane

0x83c8,	// (0x0007d7d5) main_cam_set_pane_g1_ParamLimits

0x83c8,	// (0x0007d7d5) main_cam_set_pane_g1

0x83d6,	// (0x0007d7e3) main_cam_set_pane_g2_ParamLimits

0x83d6,	// (0x0007d7e3) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00084d89) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00084d89) main_cam_set_pane_g

0x83f7,	// (0x0007d804) main_cam_set_pane_t1_ParamLimits

0x83f7,	// (0x0007d804) main_cam_set_pane_t1

0x8412,	// (0x0007d81f) main_cset_listscroll_pane_ParamLimits

0x8412,	// (0x0007d81f) main_cset_listscroll_pane

0x8432,	// (0x0007d83f) main_cset_slider_pane_ParamLimits

0x8432,	// (0x0007d83f) main_cset_slider_pane

0xcc81,	// (0x0008208e) main_cset_list_pane_ParamLimits

0xcc81,	// (0x0008208e) main_cset_list_pane

0xcc91,	// (0x0008209e) scroll_pane_cp028

0x8458,	// (0x0007d865) aid_area_touch_slider

0x8474,	// (0x0007d881) cset_slider_pane

0x849e,	// (0x0007d8ab) main_cset_slider_pane_g1

0x84b3,	// (0x0007d8c0) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00084d8e) main_cset_slider_pane_g

0xccca,	// (0x000820d7) main_cset_slider_pane_t1

0x856f,	// (0x0007d97c) main_cset_slider_pane_t2

0x8589,	// (0x0007d996) main_cset_slider_pane_t3

0x85a3,	// (0x0007d9b0) main_cset_slider_pane_t4

0x85bd,	// (0x0007d9ca) main_cset_slider_pane_t5

0x85d7,	// (0x0007d9e4) main_cset_slider_pane_t6

0x85ec,	// (0x0007d9f9) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00084db3) main_cset_slider_pane_t

0x86f0,	// (0x0007dafd) cset_list_set_pane_ParamLimits

0x86f0,	// (0x0007dafd) cset_list_set_pane

0x8702,	// (0x0007db0f) aid_position_infowindow_above

0x870a,	// (0x0007db17) aid_position_infowindow_below

0xeef7,	// (0x00084304) cset_list_set_pane_g1_ParamLimits

0xeef7,	// (0x00084304) cset_list_set_pane_g1

0xcd6a,	// (0x00082177) cset_list_set_pane_g3_ParamLimits

0xcd6a,	// (0x00082177) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x00084dd2) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x00084dd2) cset_list_set_pane_g

0xcd79,	// (0x00082186) cset_list_set_pane_t1_ParamLimits

0xcd79,	// (0x00082186) cset_list_set_pane_t1

0xaa15,	// (0x0007fe22) list_highlight_pane_cp021_ParamLimits

0xaa15,	// (0x0007fe22) list_highlight_pane_cp021

0x4c61,	// (0x0007a06e) cset_slider_pane_g1

0x4c73,	// (0x0007a080) cset_slider_pane_g2

0x4c6a,	// (0x0007a077) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00084dd7) cset_slider_pane_g

0xef03,	// (0x00084310) aid_area_touch_cam4_zoom

0xef0b,	// (0x00084318) cam4_zoom_cont_pane

0xef13,	// (0x00084320) cam4_zoom_pane_g1

0xef1b,	// (0x00084328) cam4_zoom_pane_g2

0x8712,	// (0x0007db1f) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x00084dde) cam4_zoom_pane_g

0xcd8e,	// (0x0008219b) cam4_zoom_cont_pane_g1

0xcd97,	// (0x000821a4) cam4_zoom_cont_pane_g2

0xcda0,	// (0x000821ad) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00084de5) cam4_zoom_cont_pane_g

0x7bb6,	// (0x0007cfc3) call4_image_pane_ParamLimits

0x7bb6,	// (0x0007cfc3) call4_image_pane

0xc9e5,	// (0x00081df2) call4_windows_conf_pane_ParamLimits

0xca26,	// (0x00081e33) popup_call4_audio_in_window_ParamLimits

0xca26,	// (0x00081e33) popup_call4_audio_in_window

0xa99d,	// (0x0007fdaa) bg_popup_call2_act_pane_cp02

0xca9c,	// (0x00081ea9) call4_list_conf_pane

0xc08f,	// (0x0008149c) call4_image_pane_g1

0xc08f,	// (0x0008149c) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00084af9) call4_image_pane_g

0xcda9,	// (0x000821b6) list_single_graphic_popup_conf4_pane_ParamLimits

0xcda9,	// (0x000821b6) list_single_graphic_popup_conf4_pane

0xa99d,	// (0x0007fdaa) list_highlight_pane_cp022

0xcdbc,	// (0x000821c9) list_single_graphic_popup_conf4_pane_g1

0x41df,	// (0x000795ec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00084dec) list_single_graphic_popup_conf4_pane_g

0xcdc4,	// (0x000821d1) list_single_graphic_popup_conf4_pane_t1

0x2e51,	// (0x0007825e) popup_vtel_slider_window_ParamLimits

0x2e51,	// (0x0007825e) popup_vtel_slider_window

0xc9c7,	// (0x00081dd4) dialer2_ne_pane_t2_ParamLimits

0xc9c7,	// (0x00081dd4) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00084ccd) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00084ccd) dialer2_ne_pane_t

0xbe74,	// (0x00081281) bg_popup_sub_pane_cp010_ParamLimits

0xbe74,	// (0x00081281) bg_popup_sub_pane_cp010

0x871a,	// (0x0007db27) popup_vtel_slider_window_g1_ParamLimits

0x871a,	// (0x0007db27) popup_vtel_slider_window_g1

0x872d,	// (0x0007db3a) popup_vtel_slider_window_g2_ParamLimits

0x872d,	// (0x0007db3a) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00084df1) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00084df1) popup_vtel_slider_window_g

0x8783,	// (0x0007db90) vtel_slider_pane_ParamLimits

0x8783,	// (0x0007db90) vtel_slider_pane

0x87a5,	// (0x0007dbb2) vtel_slider_pane_g1_ParamLimits

0x87a5,	// (0x0007dbb2) vtel_slider_pane_g1

0x87b9,	// (0x0007dbc6) vtel_slider_pane_g2_ParamLimits

0x87b9,	// (0x0007dbc6) vtel_slider_pane_g2

0x87d1,	// (0x0007dbde) vtel_slider_pane_g3_ParamLimits

0x87d1,	// (0x0007dbde) vtel_slider_pane_g3

0x87a5,	// (0x0007dbb2) vtel_slider_pane_g4_ParamLimits

0x87a5,	// (0x0007dbb2) vtel_slider_pane_g4

0x87e7,	// (0x0007dbf4) vtel_slider_pane_g5_ParamLimits

0x87e7,	// (0x0007dbf4) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00084dfa) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00084dfa) vtel_slider_pane_g

0xa99d,	// (0x0007fdaa) main_gallery2_pane

0x7ef6,	// (0x0007d303) aid_size_row_itut2_dropdow_list_ParamLimits

0x7ef6,	// (0x0007d303) aid_size_row_itut2_dropdow_list

0x7f82,	// (0x0007d38f) grid_vitu2_function_top_pane_ParamLimits

0x7f82,	// (0x0007d38f) grid_vitu2_function_top_pane

0x7fe7,	// (0x0007d3f4) popup_vitu2_dropdown_list_window_ParamLimits

0x7fe7,	// (0x0007d3f4) popup_vitu2_dropdown_list_window

0x8010,	// (0x0007d41d) popup_vitu2_match_list_window

0x87fd,	// (0x0007dc0a) cell_vitu2_function_top_pane_ParamLimits

0x87fd,	// (0x0007dc0a) cell_vitu2_function_top_pane

0x881b,	// (0x0007dc28) cell_vitu2_function_top_pane_cp01_ParamLimits

0x881b,	// (0x0007dc28) cell_vitu2_function_top_pane_cp01

0x8839,	// (0x0007dc46) cell_vitu2_function_top_wide_pane_ParamLimits

0x8839,	// (0x0007dc46) cell_vitu2_function_top_wide_pane

0xaa15,	// (0x0007fe22) bg_button_pane_cp012

0x8857,	// (0x0007dc64) cell_vitu2_function_top_pane_g1

0xef23,	// (0x00084330) bg_button_pane_cp013_ParamLimits

0xef23,	// (0x00084330) bg_button_pane_cp013

0x886b,	// (0x0007dc78) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x886b,	// (0x0007dc78) cell_vitu2_function_top_wide_pane_g1

0xaa15,	// (0x0007fe22) bg_popup_sub_pane_cp20

0x8883,	// (0x0007dc90) list_vitu2_match_list_pane

0xcb77,	// (0x00081f84) bg_popup_sub_pane_cp20_g1

0xcb7f,	// (0x00081f8c) bg_popup_sub_pane_cp20_g2

0x32ea,	// (0x000786f7) bg_popup_sub_pane_cp20_g3

0xcb87,	// (0x00081f94) bg_popup_sub_pane_cp20_g4

0x32ca,	// (0x000786d7) bg_popup_sub_pane_cp20_g5

0xcde8,	// (0x000821f5) bg_popup_sub_pane_cp20_g6

0xcb97,	// (0x00081fa4) bg_popup_sub_pane_cp20_g7

0xcb9f,	// (0x00081fac) bg_popup_sub_pane_cp20_g8

0xcba7,	// (0x00081fb4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00084e05) bg_popup_sub_pane_cp20_g

0xef3f,	// (0x0008434c) list_vitu2_match_list_item_pane_ParamLimits

0xef3f,	// (0x0008434c) list_vitu2_match_list_item_pane

0xef51,	// (0x0008435e) list_vitu2_match_list_item_pane_t1

0xa99d,	// (0x0007fdaa) bg_popup_sub_pane_cp21

0x40e3,	// (0x000794f0) grid_vitu2_dropdown_list_pane

0x88a1,	// (0x0007dcae) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x88a1,	// (0x0007dcae) cell_vitu2_dropdown_list_char_pane

0x88c2,	// (0x0007dccf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x88c2,	// (0x0007dccf) cell_vitu2_dropdown_list_ctrl_pane

0xce08,	// (0x00082215) cell_vitu2_dropdown_list_char_pane_g1

0xce11,	// (0x0008221e) cell_vitu2_dropdown_list_char_pane_g2

0xce1a,	// (0x00082227) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00084e22) cell_vitu2_dropdown_list_char_pane_g

0x88ee,	// (0x0007dcfb) cell_vitu2_dropdown_list_char_pane_t1

0x88fc,	// (0x0007dd09) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x88fc,	// (0x0007dd09) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8909,	// (0x0007dd16) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8909,	// (0x0007dd16) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8916,	// (0x0007dd23) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8916,	// (0x0007dd23) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8923,	// (0x0007dd30) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8923,	// (0x0007dd30) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc2fb,	// (0x00081708) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc2fb,	// (0x00081708) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00084e29) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00084e29) cell_vitu2_dropdown_list_ctrl_pane_g

0x893f,	// (0x0007dd4c) aid_size_cell_gallery2_ParamLimits

0x893f,	// (0x0007dd4c) aid_size_cell_gallery2

0x8955,	// (0x0007dd62) grid_gallery2_pane_ParamLimits

0x8955,	// (0x0007dd62) grid_gallery2_pane

0x8969,	// (0x0007dd76) scroll_pane_cp029_ParamLimits

0x8969,	// (0x0007dd76) scroll_pane_cp029

0x8975,	// (0x0007dd82) cell_gallery2_pane_ParamLimits

0x8975,	// (0x0007dd82) cell_gallery2_pane

0xce23,	// (0x00082230) cell_gallery2_pane_g2

0x89ab,	// (0x0007ddb8) cell_gallery2_pane_g3

0xce2d,	// (0x0008223a) cell_gallery2_pane_g4

0xce35,	// (0x00082242) cell_gallery2_pane_g5

0x4725,	// (0x00079b32) grid_highlight_pane_cp10

0x8010,	// (0x0007d41d) popup_vitu2_match_list_window_ParamLimits

0x8027,	// (0x0007d434) popup_vitu2_query_window_ParamLimits

0x8027,	// (0x0007d434) popup_vitu2_query_window

0xa99d,	// (0x0007fdaa) bg_vitu2_candi_button_pane

0xce08,	// (0x00082215) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xce11,	// (0x0008221e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xce1a,	// (0x00082227) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0c61,	// (0x0007606e) bg_button_pane_cp015

0x89b3,	// (0x0007ddc0) bg_button_pane_cp016

0x89c6,	// (0x0007ddd3) bg_button_pane_cp017

0xbbf6,	// (0x00081003) bg_popup_sub_pane_cp22

0xce3d,	// (0x0008224a) popup_vitu2_query_window_g1

0x0c94,	// (0x000760a1) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00084e34) popup_vitu2_query_window_g

0x0cb3,	// (0x000760c0) popup_vitu2_query_window_t1_ParamLimits

0x0cb3,	// (0x000760c0) popup_vitu2_query_window_t1

0x0ce8,	// (0x000760f5) popup_vitu2_query_window_t2_ParamLimits

0x0ce8,	// (0x000760f5) popup_vitu2_query_window_t2

0x0cfa,	// (0x00076107) popup_vitu2_query_window_t3_ParamLimits

0x0cfa,	// (0x00076107) popup_vitu2_query_window_t3

0x89ea,	// (0x0007ddf7) popup_vitu2_query_window_t4_ParamLimits

0x89ea,	// (0x0007ddf7) popup_vitu2_query_window_t4

0x8a0b,	// (0x0007de18) popup_vitu2_query_window_t5_ParamLimits

0x8a0b,	// (0x0007de18) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00084e3b) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00084e3b) popup_vitu2_query_window_t

0xcc79,	// (0x00082086) main_cset_text_pane

0x8458,	// (0x0007d865) aid_area_touch_slider_ParamLimits

0x8474,	// (0x0007d881) cset_slider_pane_ParamLimits

0x849e,	// (0x0007d8ab) main_cset_slider_pane_g1_ParamLimits

0x84b3,	// (0x0007d8c0) main_cset_slider_pane_g2_ParamLimits

0xcc9a,	// (0x000820a7) main_cset_slider_pane_g3_ParamLimits

0xcc9a,	// (0x000820a7) main_cset_slider_pane_g3

0x84c8,	// (0x0007d8d5) main_cset_slider_pane_g4_ParamLimits

0x84c8,	// (0x0007d8d5) main_cset_slider_pane_g4

0x84d7,	// (0x0007d8e4) main_cset_slider_pane_g5_ParamLimits

0x84d7,	// (0x0007d8e4) main_cset_slider_pane_g5

0x84e3,	// (0x0007d8f0) main_cset_slider_pane_g6_ParamLimits

0x84e3,	// (0x0007d8f0) main_cset_slider_pane_g6

0xf981,	// (0x00084d8e) main_cset_slider_pane_g_ParamLimits

0xccca,	// (0x000820d7) main_cset_slider_pane_t1_ParamLimits

0x856f,	// (0x0007d97c) main_cset_slider_pane_t2_ParamLimits

0x8589,	// (0x0007d996) main_cset_slider_pane_t3_ParamLimits

0x85a3,	// (0x0007d9b0) main_cset_slider_pane_t4_ParamLimits

0x85bd,	// (0x0007d9ca) main_cset_slider_pane_t5_ParamLimits

0x85d7,	// (0x0007d9e4) main_cset_slider_pane_t6_ParamLimits

0x85ec,	// (0x0007d9f9) main_cset_slider_pane_t7_ParamLimits

0x8616,	// (0x0007da23) main_cset_slider_pane_t8_ParamLimits

0x8616,	// (0x0007da23) main_cset_slider_pane_t8

0x863e,	// (0x0007da4b) main_cset_slider_pane_t9_ParamLimits

0x863e,	// (0x0007da4b) main_cset_slider_pane_t9

0x8666,	// (0x0007da73) main_cset_slider_pane_t10_ParamLimits

0x8666,	// (0x0007da73) main_cset_slider_pane_t10

0x868e,	// (0x0007da9b) main_cset_slider_pane_t11_ParamLimits

0x868e,	// (0x0007da9b) main_cset_slider_pane_t11

0x86b6,	// (0x0007dac3) main_cset_slider_pane_t12_ParamLimits

0x86b6,	// (0x0007dac3) main_cset_slider_pane_t12

0x86d3,	// (0x0007dae0) main_cset_slider_pane_t13_ParamLimits

0x86d3,	// (0x0007dae0) main_cset_slider_pane_t13

0xf9a6,	// (0x00084db3) main_cset_slider_pane_t_ParamLimits

0xa99d,	// (0x0007fdaa) bg_popup_sub_pane_cp011

0xce49,	// (0x00082256) main_cset_text_pane_g1

0xce51,	// (0x0008225e) main_cset_text_pane_t1

0xce5f,	// (0x0008226c) main_cset_text_pane_t2

0xce6d,	// (0x0008227a) main_cset_text_pane_t3

0xce7b,	// (0x00082288) main_cset_text_pane_t4

0xce89,	// (0x00082296) main_cset_text_pane_t5

0xce97,	// (0x000822a4) main_cset_text_pane_t6

0xcea5,	// (0x000822b2) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00084e4a) main_cset_text_pane_t

0xa99d,	// (0x0007fdaa) main_cam4_burst_pane

0xa99d,	// (0x0007fdaa) main_cam5_pane

0x8397,	// (0x0007d7a4) bg_button_pane_cp019

0x83a0,	// (0x0007d7ad) bg_button_pane_cp020

0xcca6,	// (0x000820b3) main_cset_slider_pane_g7_ParamLimits

0xcca6,	// (0x000820b3) main_cset_slider_pane_g7

0xccb2,	// (0x000820bf) main_cset_slider_pane_g8_ParamLimits

0xccb2,	// (0x000820bf) main_cset_slider_pane_g8

0x84f7,	// (0x0007d904) main_cset_slider_pane_g9_ParamLimits

0x84f7,	// (0x0007d904) main_cset_slider_pane_g9

0x8503,	// (0x0007d910) main_cset_slider_pane_g10_ParamLimits

0x8503,	// (0x0007d910) main_cset_slider_pane_g10

0x850f,	// (0x0007d91c) main_cset_slider_pane_g11_ParamLimits

0x850f,	// (0x0007d91c) main_cset_slider_pane_g11

0x851b,	// (0x0007d928) main_cset_slider_pane_g12_ParamLimits

0x851b,	// (0x0007d928) main_cset_slider_pane_g12

0x8527,	// (0x0007d934) main_cset_slider_pane_g13_ParamLimits

0x8527,	// (0x0007d934) main_cset_slider_pane_g13

0x8533,	// (0x0007d940) main_cset_slider_pane_g14_ParamLimits

0x8533,	// (0x0007d940) main_cset_slider_pane_g14

0x853f,	// (0x0007d94c) main_cset_slider_pane_g15_ParamLimits

0x853f,	// (0x0007d94c) main_cset_slider_pane_g15

0xccf8,	// (0x00082105) main_cset_slider_pane_t14_ParamLimits

0xccf8,	// (0x00082105) main_cset_slider_pane_t14

0xcd31,	// (0x0008213e) main_cset_slider_pane_t15_ParamLimits

0xcd31,	// (0x0008213e) main_cset_slider_pane_t15

0x8a2c,	// (0x0007de39) aid_cam4_burst_size_cell_ParamLimits

0x8a2c,	// (0x0007de39) aid_cam4_burst_size_cell

0x8a4c,	// (0x0007de59) grid_cam4_burst_pane_ParamLimits

0x8a4c,	// (0x0007de59) grid_cam4_burst_pane

0x8a84,	// (0x0007de91) linegrid_cam4_burst_pane_ParamLimits

0x8a84,	// (0x0007de91) linegrid_cam4_burst_pane

0xceb3,	// (0x000822c0) scroll_pane_cp30_ParamLimits

0xceb3,	// (0x000822c0) scroll_pane_cp30

0x8aa8,	// (0x0007deb5) cell_cam4_burst_pane_ParamLimits

0x8aa8,	// (0x0007deb5) cell_cam4_burst_pane

0xcebf,	// (0x000822cc) linegrid_cam4_burst_pane_g1_ParamLimits

0xcebf,	// (0x000822cc) linegrid_cam4_burst_pane_g1

0x8af5,	// (0x0007df02) linegrid_cam4_burst_pane_g2_ParamLimits

0x8af5,	// (0x0007df02) linegrid_cam4_burst_pane_g2

0xcecc,	// (0x000822d9) linegrid_cam4_burst_pane_g3_ParamLimits

0xcecc,	// (0x000822d9) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00084e59) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00084e59) linegrid_cam4_burst_pane_g

0x8b06,	// (0x0007df13) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8b06,	// (0x0007df13) linegrid_cam4_burst_pane_g3_copy1

0xced9,	// (0x000822e6) linegrid_cam4_burst_pane_g4_ParamLimits

0xced9,	// (0x000822e6) linegrid_cam4_burst_pane_g4

0x8b20,	// (0x0007df2d) linegrid_cam4_burst_pane_g5_ParamLimits

0x8b20,	// (0x0007df2d) linegrid_cam4_burst_pane_g5

0x8b31,	// (0x0007df3e) linegrid_cam4_burst_pane_g6_ParamLimits

0x8b31,	// (0x0007df3e) linegrid_cam4_burst_pane_g6

0xcee6,	// (0x000822f3) linegrid_cam4_burst_pane_g7_ParamLimits

0xcee6,	// (0x000822f3) linegrid_cam4_burst_pane_g7

0x8b48,	// (0x0007df55) cell_cam4_burst_pane_g1

0xceff,	// (0x0008230c) main_cam5_pane_t1_ParamLimits

0xceff,	// (0x0008230c) main_cam5_pane_t1

0xcf11,	// (0x0008231e) main_cam5_pane_t2_ParamLimits

0xcf11,	// (0x0008231e) main_cam5_pane_t2

0xcf23,	// (0x00082330) main_cam5_pane_t3_ParamLimits

0xcf23,	// (0x00082330) main_cam5_pane_t3

0xcf35,	// (0x00082342) main_cam5_pane_t4_ParamLimits

0xcf35,	// (0x00082342) main_cam5_pane_t4

0xcf4d,	// (0x0008235a) main_cam5_pane_t5_ParamLimits

0xcf4d,	// (0x0008235a) main_cam5_pane_t5

0xcf61,	// (0x0008236e) main_cam5_pane_t6_ParamLimits

0xcf61,	// (0x0008236e) main_cam5_pane_t6

0xcf75,	// (0x00082382) main_cam5_pane_t7_ParamLimits

0xcf75,	// (0x00082382) main_cam5_pane_t7

0xcf87,	// (0x00082394) main_cam5_pane_t8_ParamLimits

0xcf87,	// (0x00082394) main_cam5_pane_t8

0xcfa3,	// (0x000823b0) main_cam5_pane_t9_ParamLimits

0xcfa3,	// (0x000823b0) main_cam5_pane_t9

0xcfb5,	// (0x000823c2) main_cam5_pane_t10_ParamLimits

0xcfb5,	// (0x000823c2) main_cam5_pane_t10

0xcfc7,	// (0x000823d4) main_cam5_pane_t11_ParamLimits

0xcfc7,	// (0x000823d4) main_cam5_pane_t11

0xcfd9,	// (0x000823e6) main_cam5_pane_t12_ParamLimits

0xcfd9,	// (0x000823e6) main_cam5_pane_t12

0xcfee,	// (0x000823fb) main_cam5_pane_t13_ParamLimits

0xcfee,	// (0x000823fb) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00084e65) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00084e65) main_cam5_pane_t

0x1660,	// (0x00076a6d) popup_scut_keymap_window_ParamLimits

0x1660,	// (0x00076a6d) popup_scut_keymap_window

0x8b5b,	// (0x0007df68) aid_size_cell_brow_shortcut

0x4725,	// (0x00079b32) bg_popup_window_pane_cp010

0x8b67,	// (0x0007df74) grid_scut_pane

0x8b73,	// (0x0007df80) cell_scut_pane_ParamLimits

0x8b73,	// (0x0007df80) cell_scut_pane

0x8b8a,	// (0x0007df97) cell_scut_pane_g1

0xd00b,	// (0x00082418) cell_scut_pane_t1

0xd01a,	// (0x00082427) cell_scut_pane_t2

0x8b93,	// (0x0007dfa0) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00084e80) cell_scut_pane_t

0x6abe,	// (0x0007becb) main_mup3_pane_g8_ParamLimits

0x6abe,	// (0x0007becb) main_mup3_pane_g8

0x7f0e,	// (0x0007d31b) area_vitu2_query_pane_ParamLimits

0x7f0e,	// (0x0007d31b) area_vitu2_query_pane

0x0c73,	// (0x00076080) input_focus_pane_cp08

0xd029,	// (0x00082436) area_vitu2_query_pane_g1

0x0d78,	// (0x00076185) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00084e87) area_vitu2_query_pane_g

0x8ba1,	// (0x0007dfae) area_vitu2_query_pane_t1_ParamLimits

0x8ba1,	// (0x0007dfae) area_vitu2_query_pane_t1

0x8bb5,	// (0x0007dfc2) area_vitu2_query_pane_t2_ParamLimits

0x8bb5,	// (0x0007dfc2) area_vitu2_query_pane_t2

0x0d89,	// (0x00076196) area_vitu2_query_pane_t3_ParamLimits

0x0d89,	// (0x00076196) area_vitu2_query_pane_t3

0xd035,	// (0x00082442) area_vitu2_query_pane_t4_ParamLimits

0xd035,	// (0x00082442) area_vitu2_query_pane_t4

0xd05d,	// (0x0008246a) area_vitu2_query_pane_t5_ParamLimits

0xd05d,	// (0x0008246a) area_vitu2_query_pane_t5

0xd085,	// (0x00082492) area_vitu2_query_pane_t6_ParamLimits

0xd085,	// (0x00082492) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00084e8c) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00084e8c) area_vitu2_query_pane_t

0x8bc9,	// (0x0007dfd6) bg_button_pane_cp018

0x8bd7,	// (0x0007dfe4) bg_button_pane_cp021

0x0db1,	// (0x000761be) bg_button_pane_cp022

0x0dc0,	// (0x000761cd) input_focus_pane_cp09

0x453a,	// (0x00079947) aid_size_touch_mv_arrow_left

0x4563,	// (0x00079970) aid_size_touch_mv_arrow_right

0x8557,	// (0x0007d964) main_cset_slider_pane_g16_ParamLimits

0x8557,	// (0x0007d964) main_cset_slider_pane_g16

0x8563,	// (0x0007d970) main_cset_slider_pane_g17_ParamLimits

0x8563,	// (0x0007d970) main_cset_slider_pane_g17

0x8b48,	// (0x0007df55) cell_cam4_burst_pane_g1_ParamLimits

0xa99d,	// (0x0007fdaa) compa_mode_pane

0x873d,	// (0x0007db4a) popup_vtel_slider_window_g3_ParamLimits

0x873d,	// (0x0007db4a) popup_vtel_slider_window_g3

0x8754,	// (0x0007db61) popup_vtel_slider_window_g4_ParamLimits

0x8754,	// (0x0007db61) popup_vtel_slider_window_g4

0x876b,	// (0x0007db78) popup_vtel_slider_window_t1_ParamLimits

0x876b,	// (0x0007db78) popup_vtel_slider_window_t1

0xa99d,	// (0x0007fdaa) main_cl_pane

0xbc1e,	// (0x0008102b) popup_imed_adjust2_window_ParamLimits

0xbbf6,	// (0x00081003) bg_tb_trans_pane_cp05_ParamLimits

0xc5c0,	// (0x000819cd) popup_imed_adjust2_window_g1_ParamLimits

0xc5cf,	// (0x000819dc) popup_imed_adjust2_window_g2_ParamLimits

0xc5cf,	// (0x000819dc) popup_imed_adjust2_window_g2

0xc5db,	// (0x000819e8) popup_imed_adjust2_window_g3_ParamLimits

0xc5db,	// (0x000819e8) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00084bf7) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00084bf7) popup_imed_adjust2_window_g

0xc5e7,	// (0x000819f4) popup_imed_adjust2_window_t1_ParamLimits

0xc5ff,	// (0x00081a0c) slider_imed_adjust_pane_ParamLimits

0xc613,	// (0x00081a20) slider_imed_adjust_pane_g1_ParamLimits

0xc623,	// (0x00081a30) slider_imed_adjust_pane_g2_ParamLimits

0xc633,	// (0x00081a40) slider_imed_adjust_pane_g3_ParamLimits

0xc644,	// (0x00081a51) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x00084bfe) slider_imed_adjust_pane_g_ParamLimits

0x7c97,	// (0x0007d0a4) aid_touch_area_cam4_ParamLimits

0x7c97,	// (0x0007d0a4) aid_touch_area_cam4

0xee0a,	// (0x00084217) battery_pane_cp01

0x7d66,	// (0x0007d173) main_camera4_pane_g6_ParamLimits

0x7d66,	// (0x0007d173) main_camera4_pane_g6

0x7d90,	// (0x0007d19d) main_camera4_pane_t2_ParamLimits

0x7d90,	// (0x0007d19d) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00084d01) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00084d01) main_camera4_pane_t

0x7dc5,	// (0x0007d1d2) aid_touch_area_vid4_ParamLimits

0x7dc5,	// (0x0007d1d2) aid_touch_area_vid4

0x7e19,	// (0x0007d226) main_video4_pane_g5_ParamLimits

0x7e19,	// (0x0007d226) main_video4_pane_g5

0x7e3e,	// (0x0007d24b) vid4_progress_pane_ParamLimits

0x7e3e,	// (0x0007d24b) vid4_progress_pane

0xccbe,	// (0x000820cb) main_cset_slider_pane_g18_ParamLimits

0xccbe,	// (0x000820cb) main_cset_slider_pane_g18

0xcef3,	// (0x00082300) cell_cam4_burst_pane_g2_ParamLimits

0xcef3,	// (0x00082300) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00084e60) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00084e60) cell_cam4_burst_pane_g

0x2138,	// (0x00077545) bg_cl_pane_ParamLimits

0x2138,	// (0x00077545) bg_cl_pane

0x8be3,	// (0x0007dff0) cl_header_pane_ParamLimits

0x8be3,	// (0x0007dff0) cl_header_pane

0x8bf7,	// (0x0007e004) cl_listscroll_pane_ParamLimits

0x8bf7,	// (0x0007e004) cl_listscroll_pane

0xd0d1,	// (0x000824de) bg_cl_pane_g1

0xd0d9,	// (0x000824e6) bg_cl_pane_g2

0xd0e1,	// (0x000824ee) bg_cl_pane_g3

0xd0e9,	// (0x000824f6) bg_cl_pane_g4

0xd0f1,	// (0x000824fe) bg_cl_pane_g5

0xd0f9,	// (0x00082506) bg_cl_pane_g6

0xd101,	// (0x0008250e) bg_cl_pane_g7

0xd109,	// (0x00082516) bg_cl_pane_g8

0xd111,	// (0x0008251e) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00084e9b) bg_cl_pane_g

0x8c07,	// (0x0007e014) aid_height_cl_leading_ParamLimits

0x8c07,	// (0x0007e014) aid_height_cl_leading

0x8c13,	// (0x0007e020) aid_height_cl_text_ParamLimits

0x8c13,	// (0x0007e020) aid_height_cl_text

0xaa15,	// (0x0007fe22) bg_cl_header_pane_ParamLimits

0xaa15,	// (0x0007fe22) bg_cl_header_pane

0x8c32,	// (0x0007e03f) cl_header_pane_g1_ParamLimits

0x8c32,	// (0x0007e03f) cl_header_pane_g1

0x8c48,	// (0x0007e055) cl_header_pane_t1_ParamLimits

0x8c48,	// (0x0007e055) cl_header_pane_t1

0xd119,	// (0x00082526) cl_list_pane

0xcc91,	// (0x0008209e) hc_scroll_pane_cp01

0x32ca,	// (0x000786d7) bg_cl_header_pane_g1

0xcb77,	// (0x00081f84) bg_cl_header_pane_g2

0x32ea,	// (0x000786f7) bg_cl_header_pane_g3

0xcb87,	// (0x00081f94) bg_cl_header_pane_g4

0xcb7f,	// (0x00081f8c) bg_cl_header_pane_g5

0xcde8,	// (0x000821f5) bg_cl_header_pane_g6

0xcb9f,	// (0x00081fac) bg_cl_header_pane_g7

0xcba7,	// (0x00081fb4) bg_cl_header_pane_g8

0xcb97,	// (0x00081fa4) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00084eae) bg_cl_header_pane_g

0x8c61,	// (0x0007e06e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8c61,	// (0x0007e06e) hc_cl_list_double_graphic_heading_pane

0x8c72,	// (0x0007e07f) hc_cl_list_single_graphic_pane_ParamLimits

0x8c72,	// (0x0007e07f) hc_cl_list_single_graphic_pane

0x8c88,	// (0x0007e095) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8c88,	// (0x0007e095) hc_cl_list_single_graphic_pane_g1

0x8c94,	// (0x0007e0a1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8c94,	// (0x0007e0a1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x00084ec1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x00084ec1) hc_cl_list_single_graphic_pane_g

0x8ca8,	// (0x0007e0b5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8ca8,	// (0x0007e0b5) hc_cl_list_single_graphic_pane_t1

0x8c88,	// (0x0007e095) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8c88,	// (0x0007e095) hc_cl_list_double_graphic_heading_pane_g1

0x8cbd,	// (0x0007e0ca) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8cbd,	// (0x0007e0ca) hc_cl_list_double_graphic_heading_pane_g2

0x8cd1,	// (0x0007e0de) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8cd1,	// (0x0007e0de) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00084ec6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00084ec6) hc_cl_list_double_graphic_heading_pane_g

0x8ce5,	// (0x0007e0f2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8ce5,	// (0x0007e0f2) hc_cl_list_double_graphic_heading_pane_t1

0x8cfa,	// (0x0007e107) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8cfa,	// (0x0007e107) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x00084ecd) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x00084ecd) hc_cl_list_double_graphic_heading_pane_t

0x8d0f,	// (0x0007e11c) vid4_progress_pane_g1

0x8d21,	// (0x0007e12e) vid4_progress_pane_g2

0xacf8,	// (0x00080105) vid4_progress_pane_g3

0xef67,	// (0x00084374) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x00084ed2) vid4_progress_pane_g

0xef85,	// (0x00084392) vid4_progress_pane_t1

0xef9a,	// (0x000843a7) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x00084edd) vid4_progress_pane_t

0xefc5,	// (0x000843d2) wait_bar_pane_cp07

0xbe82,	// (0x0008128f) blid_firmament_pane_ParamLimits

0xbec5,	// (0x000812d2) popup_blid_sat_info2_window_g1

0xbee9,	// (0x000812f6) popup_blid_sat_info2_window_t3

0xbef7,	// (0x00081304) popup_blid_sat_info2_window_t4

0xbf05,	// (0x00081312) popup_blid_sat_info2_window_t5

0xbf13,	// (0x00081320) popup_blid_sat_info2_window_t6

0xbf23,	// (0x00081330) popup_blid_sat_info2_window_t7

0xbf31,	// (0x0008133e) popup_blid_sat_info2_window_t8

0xbf3f,	// (0x0008134c) popup_blid_sat_info2_window_t9

0xbf4d,	// (0x0008135a) popup_blid_sat_info2_window_t10

0xc00f,	// (0x0008141c) aid_firma_cardinal_ParamLimits

0xc023,	// (0x00081430) blid_firmament_pane_t1_ParamLimits

0xc03a,	// (0x00081447) blid_firmament_pane_t2_ParamLimits

0xc051,	// (0x0008145e) blid_firmament_pane_t3_ParamLimits

0xc068,	// (0x00081475) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00084af0) blid_firmament_pane_t_ParamLimits

0xc07f,	// (0x0008148c) blid_sat_info_pane_ParamLimits

0xaa15,	// (0x0007fe22) main_cam_set_pane_ParamLimits

0x7370,	// (0x0007c77d) aid_size_cell_colour_35_ParamLimits

0x7390,	// (0x0007c79d) aid_size_cell_colour_112_ParamLimits

0x73b0,	// (0x0007c7bd) aid_size_cell_effect_ParamLimits

0xbbf6,	// (0x00081003) bg_tb_trans_pane_cp02_ParamLimits

0x3e23,	// (0x00079230) heading_imed_pane_ParamLimits

0x73d0,	// (0x0007c7dd) listscroll_imed_pane_ParamLimits

0xb228,	// (0x00080635) popup_call2_audio_first_window_g5_ParamLimits

0xb228,	// (0x00080635) popup_call2_audio_first_window_g5

0x7942,	// (0x0007cd4f) aid_size_touch_image3_arrow_left_ParamLimits

0x7942,	// (0x0007cd4f) aid_size_touch_image3_arrow_left

0x796e,	// (0x0007cd7b) aid_size_touch_image3_arrow_right_ParamLimits

0x796e,	// (0x0007cd7b) aid_size_touch_image3_arrow_right

0xefb0,	// (0x000843bd) vid4_progress_pane_t3

0x76e3,	// (0x0007caf0) main_hwr_training_symbol_option_pane_ParamLimits

0x76e3,	// (0x0007caf0) main_hwr_training_symbol_option_pane

0xc8ad,	// (0x00081cba) popup_hwr_training_preview_window_ParamLimits

0xc8ad,	// (0x00081cba) popup_hwr_training_preview_window

0x7703,	// (0x0007cb10) hwr_training_navi_pane_g5_ParamLimits

0x7703,	// (0x0007cb10) hwr_training_navi_pane_g5

0xcb65,	// (0x00081f72) popup_char_count_window

0xaa15,	// (0x0007fe22) bg_popup_sub_pane_cp20_ParamLimits

0x8883,	// (0x0007dc90) list_vitu2_match_list_pane_ParamLimits

0x8892,	// (0x0007dc9f) vitu2_page_scroll_pane_ParamLimits

0x8892,	// (0x0007dc9f) vitu2_page_scroll_pane

0xd174,	// (0x00082581) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd174,	// (0x00082581) list_single_hwr_training_symbol_option_pane

0xd187,	// (0x00082594) list_single_hwr_training_symbol_option_pane_g1

0xd18f,	// (0x0008259c) list_single_hwr_training_symbol_option_pane_t1

0xd19d,	// (0x000825aa) bg_button_pane_cp023

0xd1a6,	// (0x000825b3) bg_button_pane_cp024

0x8d33,	// (0x0007e140) vitu2_page_scroll_pane_g1

0x8d3b,	// (0x0007e148) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00084ee4) vitu2_page_scroll_pane_g

0x8d43,	// (0x0007e150) vitu2_page_scroll_pane_t1

0xd1d9,	// (0x000825e6) popup_char_count_window_g1

0xd1e2,	// (0x000825ef) popup_char_count_window_g2

0xd1eb,	// (0x000825f8) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00084ee9) popup_char_count_window_g

0xd1f4,	// (0x00082601) popup_char_count_window_t1

0xa99d,	// (0x0007fdaa) main_vded2_pane

0xc5ac,	// (0x000819b9) aid_size_cell_imed_line

0xc5b6,	// (0x000819c3) grid_imed_line_width_pane

0xeec2,	// (0x000842cf) vid4_indicators_pane_g4

0xd202,	// (0x0008260f) cell_imed_line_width_pane_ParamLimits

0xd202,	// (0x0008260f) cell_imed_line_width_pane

0xd216,	// (0x00082623) cell_imed_line_width_pane_g1

0xd21f,	// (0x0008262c) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x00084ef0) cell_imed_line_width_pane_g

0x8d52,	// (0x0007e15f) main_vded2_pane_g1_ParamLimits

0x8d52,	// (0x0007e15f) main_vded2_pane_g1

0x8d68,	// (0x0007e175) main_vded2_pane_g2_ParamLimits

0x8d68,	// (0x0007e175) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00084ef5) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00084ef5) main_vded2_pane_g

0x8d7a,	// (0x0007e187) vded2_slider_pane_ParamLimits

0x8d7a,	// (0x0007e187) vded2_slider_pane

0x8d8a,	// (0x0007e197) aid_size_touch_vded2_end

0x8d94,	// (0x0007e1a1) aid_size_touch_vded2_playhead

0xd227,	// (0x00082634) aid_size_touch_vded2_start

0xd22f,	// (0x0008263c) vded2_slider_bg_pane

0xd238,	// (0x00082645) vded2_slider_pane_g1

0xd241,	// (0x0008264e) vded2_slider_pane_g2

0x8d9e,	// (0x0007e1ab) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00084efa) vded2_slider_pane_g

0xd249,	// (0x00082656) vded2_slider_bg_pane_g1

0xd252,	// (0x0008265f) vded2_slider_bg_pane_g2

0xd25b,	// (0x00082668) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x00084f01) vded2_slider_bg_pane_g

0x4d96,	// (0x0007a1a3) aid_postcard_touch_down_pane_ParamLimits

0x4d96,	// (0x0007a1a3) aid_postcard_touch_down_pane

0x4dac,	// (0x0007a1b9) aid_postcard_touch_up_pane_ParamLimits

0x4dac,	// (0x0007a1b9) aid_postcard_touch_up_pane

0xa99d,	// (0x0007fdaa) main_blid2_pane

0xbc04,	// (0x00081011) popup_blid2_search_window

0xa99d,	// (0x0007fdaa) blid2_gps_pane

0xa99d,	// (0x0007fdaa) blid2_navig_pane

0xa99d,	// (0x0007fdaa) blid2_search_pane

0xa99d,	// (0x0007fdaa) blid2_tripm_pane

0x8da9,	// (0x0007e1b6) blid2_search_pane_g1_ParamLimits

0x8da9,	// (0x0007e1b6) blid2_search_pane_g1

0x8dc3,	// (0x0007e1d0) blid2_search_pane_t1_ParamLimits

0x8dc3,	// (0x0007e1d0) blid2_search_pane_t1

0x8dd5,	// (0x0007e1e2) aid_size_cell_blid2_gps_ParamLimits

0x8dd5,	// (0x0007e1e2) aid_size_cell_blid2_gps

0x8ded,	// (0x0007e1fa) blid2_gps_pane_g1_ParamLimits

0x8ded,	// (0x0007e1fa) blid2_gps_pane_g1

0x8e01,	// (0x0007e20e) grid_blid2_satellite_pane_ParamLimits

0x8e01,	// (0x0007e20e) grid_blid2_satellite_pane

0x8e1b,	// (0x0007e228) blid2_navig_pane_g1_ParamLimits

0x8e1b,	// (0x0007e228) blid2_navig_pane_g1

0x8e27,	// (0x0007e234) blid2_navig_pane_t1_ParamLimits

0x8e27,	// (0x0007e234) blid2_navig_pane_t1

0x8e42,	// (0x0007e24f) blid2_navig_pane_t2_ParamLimits

0x8e42,	// (0x0007e24f) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00084f08) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00084f08) blid2_navig_pane_t

0x8e5d,	// (0x0007e26a) blid2_navig_ring_pane_ParamLimits

0x8e5d,	// (0x0007e26a) blid2_navig_ring_pane

0x8e76,	// (0x0007e283) blid2_speed_pane_ParamLimits

0x8e76,	// (0x0007e283) blid2_speed_pane

0x8e82,	// (0x0007e28f) blid2_tripm_pane_g1_ParamLimits

0x8e82,	// (0x0007e28f) blid2_tripm_pane_g1

0x8e9b,	// (0x0007e2a8) blid2_tripm_pane_g2_ParamLimits

0x8e9b,	// (0x0007e2a8) blid2_tripm_pane_g2

0x8eaf,	// (0x0007e2bc) blid2_tripm_pane_g3_ParamLimits

0x8eaf,	// (0x0007e2bc) blid2_tripm_pane_g3

0x8ec3,	// (0x0007e2d0) blid2_tripm_pane_g4_ParamLimits

0x8ec3,	// (0x0007e2d0) blid2_tripm_pane_g4

0x8ed7,	// (0x0007e2e4) blid2_tripm_pane_g5_ParamLimits

0x8ed7,	// (0x0007e2e4) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x00084f0d) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x00084f0d) blid2_tripm_pane_g

0x8efd,	// (0x0007e30a) blid2_tripm_pane_t1_ParamLimits

0x8efd,	// (0x0007e30a) blid2_tripm_pane_t1

0x8f18,	// (0x0007e325) blid2_tripm_pane_t2_ParamLimits

0x8f18,	// (0x0007e325) blid2_tripm_pane_t2

0x8f31,	// (0x0007e33e) blid2_tripm_pane_t3_ParamLimits

0x8f31,	// (0x0007e33e) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x00084f1a) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x00084f1a) blid2_tripm_pane_t

0x8f78,	// (0x0007e385) cell_blid2_satellite_pane_ParamLimits

0x8f78,	// (0x0007e385) cell_blid2_satellite_pane

0x8f96,	// (0x0007e3a3) cell_blid2_satellite_pane_g1

0xd264,	// (0x00082671) cell_blid2_satellite_pane_t1

0xc08f,	// (0x0008149c) blid2_speed_pane_g1

0xd272,	// (0x0008267f) blid2_speed_pane_t1

0xd280,	// (0x0008268d) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00084f23) blid2_speed_pane_t

0xc08f,	// (0x0008149c) blid2_navig_ring_pane_g1

0x8f9f,	// (0x0007e3ac) blid2_navig_ring_pane_g2

0x8fa7,	// (0x0007e3b4) blid2_navig_ring_pane_g3

0x8faf,	// (0x0007e3bc) blid2_navig_ring_pane_g4

0x8fb7,	// (0x0007e3c4) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00084f28) blid2_navig_ring_pane_g

0xa99d,	// (0x0007fdaa) bg_popup_window_pane_cp011

0xd28e,	// (0x0008269b) popup_blid2_search_window_g1

0xd296,	// (0x000826a3) popup_blid2_search_window_t1

0xd2a4,	// (0x000826b1) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00084f33) popup_blid2_search_window_t

0x3196,	// (0x000785a3) main_browser_pane_g1

0x2138,	// (0x00077545) main_browser_pane_ParamLimits

0xaa15,	// (0x0007fe22) bg_button_pane_cp011_ParamLimits

0x8133,	// (0x0007d540) cell_vitu2_function_pane_g1_ParamLimits

0xbbf6,	// (0x00081003) bg_popup_sub_pane_cp22_ParamLimits

0x0c73,	// (0x00076080) input_focus_pane_cp08_ParamLimits

0x89d9,	// (0x0007dde6) popup_vitu2_query_button_pane_ParamLimits

0x89d9,	// (0x0007dde6) popup_vitu2_query_button_pane

0x0c8a,	// (0x00076097) popup_vitu2_query_input_button_pane

0xce3d,	// (0x0008224a) popup_vitu2_query_window_g1_ParamLimits

0x0c94,	// (0x000760a1) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00084e34) popup_vitu2_query_window_g_ParamLimits

0xa99d,	// (0x0007fdaa) bg_button_pane_cp026

0x8fbf,	// (0x0007e3cc) popup_vitu2_query_input_button_pane_g1

0xa99d,	// (0x0007fdaa) bg_button_pane_cp025

0xd2b2,	// (0x000826bf) popup_vitu2_query_button_pane_t1

0x6799,	// (0x0007bba6) main_mp3_pane_t6

0x67a7,	// (0x0007bbb4) popup_slider_window_cp01

0xee26,	// (0x00084233) cam4_battery_pane

0xee7f,	// (0x0008428c) cam4_battery_pane_cp02

0xef5f,	// (0x0008436c) cam4_battery_pane_cp01

0xef5f,	// (0x0008436c) cam4_battery_pane_cp03

0xc08f,	// (0x0008149c) cam4_battery_pane_g1

0xd2c0,	// (0x000826cd) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00084f38) cam4_battery_pane_g

0xbf5b,	// (0x00081368) popup_blid_sat_info2_window_t11

0x453a,	// (0x00079947) aid_size_touch_mv_arrow_left_ParamLimits

0x4563,	// (0x00079970) aid_size_touch_mv_arrow_right_ParamLimits

0x45c1,	// (0x000799ce) navi_pane_g1_ParamLimits

0x45cd,	// (0x000799da) navi_pane_g2_ParamLimits

0x45fb,	// (0x00079a08) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00084802) navi_pane_g_ParamLimits

0x46b7,	// (0x00079ac4) navi_pane_mv_t1_ParamLimits

0x73dc,	// (0x0007c7e9) grid_imed_effect_pane_ParamLimits

0x2d3c,	// (0x00078149) aid_placing_vt_slider_lsc

0x2d4c,	// (0x00078159) aid_placing_vt_slider_prt

0xaa15,	// (0x0007fe22) bg_tb_trans_pane_cp01_ParamLimits

0xc21b,	// (0x00081628) popup_image_details_window_g1_ParamLimits

0xc22e,	// (0x0008163b) popup_image_details_window_g2_ParamLimits

0xc243,	// (0x00081650) popup_image_details_window_g3_ParamLimits

0xc243,	// (0x00081650) popup_image_details_window_g3

0xf728,	// (0x00084b35) popup_image_details_window_g_ParamLimits

0xc257,	// (0x00081664) popup_image_details_window_t1_ParamLimits

0xc269,	// (0x00081676) popup_image_details_window_t2_ParamLimits

0xc282,	// (0x0008168f) popup_image_details_window_t3_ParamLimits

0xc296,	// (0x000816a3) popup_image_details_window_t4_ParamLimits

0xc2b1,	// (0x000816be) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00084b3c) popup_image_details_window_t_ParamLimits

0x8c1f,	// (0x0007e02c) cl_header_name_pane_ParamLimits

0x8c1f,	// (0x0007e02c) cl_header_name_pane

0x8fc7,	// (0x0007e3d4) cl_header_name_pane_t1_ParamLimits

0x8fc7,	// (0x0007e3d4) cl_header_name_pane_t1

0x8fe8,	// (0x0007e3f5) cl_header_name_pane_t2_ParamLimits

0x8fe8,	// (0x0007e3f5) cl_header_name_pane_t2

0x902a,	// (0x0007e437) cl_header_name_pane_t3_ParamLimits

0x902a,	// (0x0007e437) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x00084f3d) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x00084f3d) cl_header_name_pane_t

0x4688,	// (0x00079a95) navi_pane_mv_g2_ParamLimits

0xcaf3,	// (0x00081f00) field_vitu2_entry_pane_g1_ParamLimits

0xcaff,	// (0x00081f0c) field_vitu2_entry_pane_g2_ParamLimits

0xcb0b,	// (0x00081f18) field_vitu2_entry_pane_g3_ParamLimits

0xcb0b,	// (0x00081f18) field_vitu2_entry_pane_g3

0xf926,	// (0x00084d33) field_vitu2_entry_pane_g_ParamLimits

0x80af,	// (0x0007d4bc) cell_vitu2_itu_pane_g1_ParamLimits

0x80bf,	// (0x0007d4cc) cell_vitu2_itu_pane_g2_ParamLimits

0x80bf,	// (0x0007d4cc) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00084d3f) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00084d3f) cell_vitu2_itu_pane_g

0xaa15,	// (0x0007fe22) bg_vkb2_func_pane_cp05_ParamLimits

0xaa15,	// (0x0007fe22) bg_vkb2_func_pane_cp05

0xaa15,	// (0x0007fe22) bg_vkb2_func_pane_cp03

0xaa15,	// (0x0007fe22) bg_vkb2_func_pane_cp04

0xaa15,	// (0x0007fe22) bg_vkb2_func_pane_cp10_ParamLimits

0xaa15,	// (0x0007fe22) bg_vkb2_func_pane_cp10

0x0db1,	// (0x000761be) bg_vkb2_func_pane_cp08

0x8bc9,	// (0x0007dfd6) bg_vkb2_func_pane_cp06

0x8bd7,	// (0x0007dfe4) bg_vkb2_func_pane_cp07

0xd1af,	// (0x000825bc) bg_vkb2_func_pane_cp11_ParamLimits

0xd1af,	// (0x000825bc) bg_vkb2_func_pane_cp11

0xd1c4,	// (0x000825d1) bg_vkb2_func_pane_cp12_ParamLimits

0xd1c4,	// (0x000825d1) bg_vkb2_func_pane_cp12

0xa99d,	// (0x0007fdaa) bg_vkb2_func_pane_cp09

0xcb77,	// (0x00081f84) bg_vkb2_func_pane_g1

0x32ea,	// (0x000786f7) bg_vkb2_func_pane_g2

0xcb7f,	// (0x00081f8c) bg_vkb2_func_pane_g3

0xcb87,	// (0x00081f94) bg_vkb2_func_pane_g4

0xcde8,	// (0x000821f5) bg_vkb2_func_pane_g5

0xcb9f,	// (0x00081fac) bg_vkb2_func_pane_g6

0xcba7,	// (0x00081fb4) bg_vkb2_func_pane_g7

0xcb97,	// (0x00081fa4) bg_vkb2_func_pane_g8

0x32ca,	// (0x000786d7) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00084f44) bg_vkb2_func_pane_g

0x8eeb,	// (0x0007e2f8) blid2_tripm_pane_g6_ParamLimits

0x8eeb,	// (0x0007e2f8) blid2_tripm_pane_g6

0xc981,	// (0x00081d8e) mp4_progress_pane_g1

0x8f64,	// (0x0007e371) blid2_tripm_values_pane_ParamLimits

0x8f64,	// (0x0007e371) blid2_tripm_values_pane

0x905b,	// (0x0007e468) blid2_tripm_values_pane_t1

0x9069,	// (0x0007e476) blid2_tripm_values_pane_t2

0x9077,	// (0x0007e484) blid2_tripm_values_pane_t3

0x9085,	// (0x0007e492) blid2_tripm_values_pane_t4

0x9093,	// (0x0007e4a0) blid2_tripm_values_pane_t5

0x90a1,	// (0x0007e4ae) blid2_tripm_values_pane_t6

0x90af,	// (0x0007e4bc) blid2_tripm_values_pane_t7

0x90bd,	// (0x0007e4ca) blid2_tripm_values_pane_t8

0x90cb,	// (0x0007e4d8) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x00084f57) blid2_tripm_values_pane_t

0x2d88,	// (0x00078195) call_video_pane_t1_ParamLimits

0x2da6,	// (0x000781b3) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0008468b) call_video_pane_t_ParamLimits

0x0ac7,	// (0x00075ed4) msg_header_pane_g1_ParamLimits

0x4d00,	// (0x0007a10d) msg_header_pane_g2_ParamLimits

0x4d00,	// (0x0007a10d) msg_header_pane_g2

0x0001,

0xf498,	// (0x000848a5) msg_header_pane_g_ParamLimits

0xf498,	// (0x000848a5) msg_header_pane_g

0x2138,	// (0x00077545) main_clock2_pane_ParamLimits

0x70ef,	// (0x0007c4fc) grid_clock2_toolbar_pane_ParamLimits

0x70ef,	// (0x0007c4fc) grid_clock2_toolbar_pane

0x70ef,	// (0x0007c4fc) listscroll_clock2_pane_ParamLimits

0x70ef,	// (0x0007c4fc) listscroll_clock2_pane

0x71d1,	// (0x0007c5de) main_clock2_pane_t3_ParamLimits

0x71d1,	// (0x0007c5de) main_clock2_pane_t3

0x71f4,	// (0x0007c601) main_clock2_pane_t4_ParamLimits

0x71f4,	// (0x0007c601) main_clock2_pane_t4

0xd2ca,	// (0x000826d7) cell_clock2_toolbar_pane

0xd2d2,	// (0x000826df) cell_clock2_toolbar_pane_cp01

0xd2d2,	// (0x000826df) cell_clock2_toolbar_pane_cp02

0xd2da,	// (0x000826e7) cell_clock2_toolbar_pane_cp03

0xd2e2,	// (0x000826ef) list_clock2_pane

0x42e4,	// (0x000796f1) scroll_pane_cp10

0xd2ea,	// (0x000826f7) list_single_clock2_pane_ParamLimits

0xd2ea,	// (0x000826f7) list_single_clock2_pane

0x4725,	// (0x00079b32) list_highlight_pane_cp08

0xd2f7,	// (0x00082704) list_single_clock2_pane_t1

0xd305,	// (0x00082712) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x00084f6a) list_single_clock2_pane_t

0xa99d,	// (0x0007fdaa) bg_button_pane_cp10

0xd313,	// (0x00082720) cell_clock2_toolbar_pane_g1

0x4d14,	// (0x0007a121) aid_main_viewer_pane_g1_ParamLimits

0x4d14,	// (0x0007a121) aid_main_viewer_pane_g1

0x4d22,	// (0x0007a12f) aid_main_viewer_pane_g2_ParamLimits

0x4d22,	// (0x0007a12f) aid_main_viewer_pane_g2

0x4d30,	// (0x0007a13d) aid_main_viewer_pane_g3_ParamLimits

0x4d30,	// (0x0007a13d) aid_main_viewer_pane_g3

0x4d3f,	// (0x0007a14c) aid_main_viewer_pane_g4_ParamLimits

0x4d3f,	// (0x0007a14c) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x000848b6) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x000848b6) aid_main_viewer_pane_g

0x59bc,	// (0x0007adc9) main_calc_pane_ParamLimits

0x59d0,	// (0x0007addd) main_dialer2_pane_ParamLimits

0xa99d,	// (0x0007fdaa) main_cam6_pane

0xa99d,	// (0x0007fdaa) main_vid6_pane

0x70fb,	// (0x0007c508) listscroll_gen_pane_cp06_ParamLimits

0x70fb,	// (0x0007c508) listscroll_gen_pane_cp06

0x7217,	// (0x0007c624) main_clock2_pane_t5_ParamLimits

0x7217,	// (0x0007c624) main_clock2_pane_t5

0x7271,	// (0x0007c67e) aid_call2_pane_cp10_ParamLimits

0x7283,	// (0x0007c690) aid_call_pane_cp10_ParamLimits

0x44c9,	// (0x000798d6) popup_clock_analogue_window_cp10_g1_ParamLimits

0x44c9,	// (0x000798d6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7295,	// (0x0007c6a2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7295,	// (0x0007c6a2) popup_clock_analogue_window_cp10_g4_ParamLimits

0x44c9,	// (0x000798d6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00084bec) popup_clock_analogue_window_cp10_g_ParamLimits

0x72a7,	// (0x0007c6b4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x78ef,	// (0x0007ccfc) cell_dialer2_keypad_pane_g2_ParamLimits

0x78ef,	// (0x0007ccfc) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x00084cd2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x00084cd2) cell_dialer2_keypad_pane_g

0x790b,	// (0x0007cd18) cell_dialer2_keypad_pane_t1

0x844a,	// (0x0007d857) main_cset_text2_pane_ParamLimits

0x844a,	// (0x0007d857) main_cset_text2_pane

0xd029,	// (0x00082436) area_vitu2_query_pane_g1_ParamLimits

0x0d78,	// (0x00076185) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00084e87) area_vitu2_query_pane_g_ParamLimits

0xd0ad,	// (0x000824ba) area_vitu2_query_pane_t7_ParamLimits

0xd0ad,	// (0x000824ba) area_vitu2_query_pane_t7

0x8bc9,	// (0x0007dfd6) bg_button_pane_cp018_ParamLimits

0x8bd7,	// (0x0007dfe4) bg_button_pane_cp021_ParamLimits

0x0db1,	// (0x000761be) bg_button_pane_cp022_ParamLimits

0x0db1,	// (0x000761be) bg_vkb2_func_pane_cp08_ParamLimits

0x8bc9,	// (0x0007dfd6) bg_vkb2_func_pane_cp06_ParamLimits

0x8bd7,	// (0x0007dfe4) bg_vkb2_func_pane_cp07_ParamLimits

0x0dc0,	// (0x000761cd) input_focus_pane_cp09_ParamLimits

0xefdf,	// (0x000843ec) cam6_autofocus_pane_ParamLimits

0xefdf,	// (0x000843ec) cam6_autofocus_pane

0x90d9,	// (0x0007e4e6) cam6_image_uncrop_pane_ParamLimits

0x90d9,	// (0x0007e4e6) cam6_image_uncrop_pane

0x90e8,	// (0x0007e4f5) cam6_indi_pane_ParamLimits

0x90e8,	// (0x0007e4f5) cam6_indi_pane

0x90fe,	// (0x0007e50b) cam6_mode_pane_ParamLimits

0x90fe,	// (0x0007e50b) cam6_mode_pane

0x9110,	// (0x0007e51d) cam6_timer_pane_ParamLimits

0x9110,	// (0x0007e51d) cam6_timer_pane

0x911c,	// (0x0007e529) cam6_zoom_pane_ParamLimits

0x911c,	// (0x0007e529) cam6_zoom_pane

0x9128,	// (0x0007e535) cam6_mode_pane_g1_ParamLimits

0x9128,	// (0x0007e535) cam6_mode_pane_g1

0x9138,	// (0x0007e545) cam6_mode_pane_g2_ParamLimits

0x9138,	// (0x0007e545) cam6_mode_pane_g2

0x9148,	// (0x0007e555) cam6_mode_pane_g3_ParamLimits

0x9148,	// (0x0007e555) cam6_mode_pane_g3

0x9158,	// (0x0007e565) cam6_mode_pane_g4_ParamLimits

0x9158,	// (0x0007e565) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x00084f6f) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x00084f6f) cam6_mode_pane_g

0xd31b,	// (0x00082728) bg_tb_trans_pane_cp08_ParamLimits

0xd31b,	// (0x00082728) bg_tb_trans_pane_cp08

0xd329,	// (0x00082736) cam6_battery_pane_ParamLimits

0xd329,	// (0x00082736) cam6_battery_pane

0xd33f,	// (0x0008274c) cam6_indi_pane_g1_ParamLimits

0xd33f,	// (0x0008274c) cam6_indi_pane_g1

0xd351,	// (0x0008275e) cam6_indi_pane_g2_ParamLimits

0xd351,	// (0x0008275e) cam6_indi_pane_g2

0xd363,	// (0x00082770) cam6_indi_pane_g3_ParamLimits

0xd363,	// (0x00082770) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x00084f78) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x00084f78) cam6_indi_pane_g

0xd375,	// (0x00082782) cam6_indi_pane_t1_ParamLimits

0xd375,	// (0x00082782) cam6_indi_pane_t1

0x9168,	// (0x0007e575) cam6_autofocus_pane_g1

0x9170,	// (0x0007e57d) cam6_autofocus_pane_g2

0x9178,	// (0x0007e585) cam6_autofocus_pane_g3

0x9180,	// (0x0007e58d) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x00084f7f) cam6_autofocus_pane_g

0xd39b,	// (0x000827a8) cam6_timer_pane_g1

0xd3a3,	// (0x000827b0) cam6_timer_pane_t1

0xd3b1,	// (0x000827be) cam6_zoom_cont_pane

0xd3b9,	// (0x000827c6) cam6_zoom_pane_g1

0xd3c1,	// (0x000827ce) cam6_zoom_pane_g2

0x9188,	// (0x0007e595) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x00084f88) cam6_zoom_pane_g

0xc08f,	// (0x0008149c) cam6_battery_pane_g1

0xc08f,	// (0x0008149c) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00084af9) cam6_battery_pane_g

0xd3c9,	// (0x000827d6) cam6_zoom_cont_pane_g1

0xd3d2,	// (0x000827df) cam6_zoom_cont_pane_g2

0xd3db,	// (0x000827e8) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x00084f8f) cam6_zoom_cont_pane_g

0x91a5,	// (0x0007e5b2) cam6_mode_pane_cp_ParamLimits

0x91a5,	// (0x0007e5b2) cam6_mode_pane_cp

0x911c,	// (0x0007e529) cam6_zoom_pane_cp_ParamLimits

0x911c,	// (0x0007e529) cam6_zoom_pane_cp

0x91b7,	// (0x0007e5c4) vid6_image_uncrop_cif_pane_ParamLimits

0x91b7,	// (0x0007e5c4) vid6_image_uncrop_cif_pane

0x91c7,	// (0x0007e5d4) vid6_image_uncrop_nhd_pane_ParamLimits

0x91c7,	// (0x0007e5d4) vid6_image_uncrop_nhd_pane

0x90d9,	// (0x0007e4e6) vid6_image_uncrop_vga_pane_ParamLimits

0x90d9,	// (0x0007e4e6) vid6_image_uncrop_vga_pane

0x91d6,	// (0x0007e5e3) vid6_image_uncrop_wvga_pane_ParamLimits

0x91d6,	// (0x0007e5e3) vid6_image_uncrop_wvga_pane

0x91e5,	// (0x0007e5f2) vid6_indi_pane_ParamLimits

0x91e5,	// (0x0007e5f2) vid6_indi_pane

0xd31b,	// (0x00082728) bg_tb_trans_pane_cp09_ParamLimits

0xd31b,	// (0x00082728) bg_tb_trans_pane_cp09

0xd3f3,	// (0x00082800) cam6_battery_pane_cp_ParamLimits

0xd3f3,	// (0x00082800) cam6_battery_pane_cp

0xd3ff,	// (0x0008280c) vid6_indi_pane_g1_ParamLimits

0xd3ff,	// (0x0008280c) vid6_indi_pane_g1

0xd411,	// (0x0008281e) vid6_indi_pane_g2_ParamLimits

0xd411,	// (0x0008281e) vid6_indi_pane_g2

0xd423,	// (0x00082830) vid6_indi_pane_g3_ParamLimits

0xd423,	// (0x00082830) vid6_indi_pane_g3

0xd438,	// (0x00082845) vid6_indi_pane_g4_ParamLimits

0xd438,	// (0x00082845) vid6_indi_pane_g4

0xd44d,	// (0x0008285a) vid6_indi_pane_g5_ParamLimits

0xd44d,	// (0x0008285a) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x00084f96) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x00084f96) vid6_indi_pane_g

0xd467,	// (0x00082874) vid6_indi_pane_t1_ParamLimits

0xd467,	// (0x00082874) vid6_indi_pane_t1

0xd47d,	// (0x0008288a) vid6_indi_pane_t2_ParamLimits

0xd47d,	// (0x0008288a) vid6_indi_pane_t2

0xd4a5,	// (0x000828b2) vid6_indi_pane_t3_ParamLimits

0xd4a5,	// (0x000828b2) vid6_indi_pane_t3

0xd4cd,	// (0x000828da) vid6_indi_pane_t4_ParamLimits

0xd4cd,	// (0x000828da) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x00084fa1) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x00084fa1) vid6_indi_pane_t

0xd4f1,	// (0x000828fe) wait_bar_pane_cp08

0x91fd,	// (0x0007e60a) main_cset_text2_pane_t1_ParamLimits

0x91fd,	// (0x0007e60a) main_cset_text2_pane_t1

0x9190,	// (0x0007e59d) listscroll_gen_pane_cp06_t1_ParamLimits

0x9190,	// (0x0007e59d) listscroll_gen_pane_cp06_t1

0xa99d,	// (0x0007fdaa) main_cam6_set_pane

0xc2fb,	// (0x00081708) bg_tb_trans_pane_cp06_ParamLimits

0xee2e,	// (0x0008423b) cam4_indicators_pane_g1_ParamLimits

0xee3f,	// (0x0008424c) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00084d0f) cam4_indicators_pane_g_ParamLimits

0xee5d,	// (0x0008426a) cam4_indicators_pane_t1_ParamLimits

0xaa15,	// (0x0007fe22) bg_tb_trans_pane_cp07_ParamLimits

0xee89,	// (0x00084296) vid4_indicators_pane_g1_ParamLimits

0xee9d,	// (0x000842aa) vid4_indicators_pane_g2_ParamLimits

0xeeb1,	// (0x000842be) vid4_indicators_pane_g3_ParamLimits

0xeec2,	// (0x000842cf) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00084d21) vid4_indicators_pane_g_ParamLimits

0xeee0,	// (0x000842ed) vid4_indicators_pane_t1_ParamLimits

0x8d0f,	// (0x0007e11c) vid4_progress_pane_g1_ParamLimits

0x8d21,	// (0x0007e12e) vid4_progress_pane_g2_ParamLimits

0xacf8,	// (0x00080105) vid4_progress_pane_g3_ParamLimits

0xef67,	// (0x00084374) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x00084ed2) vid4_progress_pane_g_ParamLimits

0xef85,	// (0x00084392) vid4_progress_pane_t1_ParamLimits

0xef9a,	// (0x000843a7) vid4_progress_pane_t2_ParamLimits

0xefb0,	// (0x000843bd) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x00084edd) vid4_progress_pane_t_ParamLimits

0xefc5,	// (0x000843d2) wait_bar_pane_cp07_ParamLimits

0x921a,	// (0x0007e627) main_cam6_set_pane_g2_ParamLimits

0x921a,	// (0x0007e627) main_cam6_set_pane_g2

0x923e,	// (0x0007e64b) main_cset6_listscroll_pane_ParamLimits

0x923e,	// (0x0007e64b) main_cset6_listscroll_pane

0x925e,	// (0x0007e66b) main_cset6_slider_pane_ParamLimits

0x925e,	// (0x0007e66b) main_cset6_slider_pane

0x9274,	// (0x0007e681) main_cset6_text2_pane_ParamLimits

0x9274,	// (0x0007e681) main_cset6_text2_pane

0xd500,	// (0x0008290d) main_cset6_text_pane

0xd508,	// (0x00082915) main_cset_list_pane_copy1_ParamLimits

0xd508,	// (0x00082915) main_cset_list_pane_copy1

0xd518,	// (0x00082925) scroll_pane_cp028_copy1

0x9282,	// (0x0007e68f) cset_list_set_pane_copy1

0x9293,	// (0x0007e6a0) aid_position_infowindow_above_copy1

0x929b,	// (0x0007e6a8) aid_position_infowindow_below_copy1

0x92a3,	// (0x0007e6b0) cset_list_set_pane_g1_copy1

0x0dcf,	// (0x000761dc) cset_list_set_pane_g3_copy1_ParamLimits

0x0dcf,	// (0x000761dc) cset_list_set_pane_g3_copy1

0x0dde,	// (0x000761eb) cset_list_set_pane_t1_copy1_ParamLimits

0x0dde,	// (0x000761eb) cset_list_set_pane_t1_copy1

0xaa15,	// (0x0007fe22) list_highlight_pane_cp021_copy1_ParamLimits

0xaa15,	// (0x0007fe22) list_highlight_pane_cp021_copy1

0xd521,	// (0x0008292e) cset6_slider_pane_ParamLimits

0xd521,	// (0x0008292e) cset6_slider_pane

0xd54d,	// (0x0008295a) main_cset6_slider_pane_g1_ParamLimits

0xd54d,	// (0x0008295a) main_cset6_slider_pane_g1

0x92ab,	// (0x0007e6b8) main_cset6_slider_pane_g2_ParamLimits

0x92ab,	// (0x0007e6b8) main_cset6_slider_pane_g2

0xd575,	// (0x00082982) main_cset6_slider_pane_g3_ParamLimits

0xd575,	// (0x00082982) main_cset6_slider_pane_g3

0x92d3,	// (0x0007e6e0) main_cset6_slider_pane_g4_ParamLimits

0x92d3,	// (0x0007e6e0) main_cset6_slider_pane_g4

0x92df,	// (0x0007e6ec) main_cset6_slider_pane_g5_ParamLimits

0x92df,	// (0x0007e6ec) main_cset6_slider_pane_g5

0xcca6,	// (0x000820b3) main_cset6_slider_pane_g7_ParamLimits

0xcca6,	// (0x000820b3) main_cset6_slider_pane_g7

0xccb2,	// (0x000820bf) main_cset6_slider_pane_g8_ParamLimits

0xccb2,	// (0x000820bf) main_cset6_slider_pane_g8

0x84f7,	// (0x0007d904) main_cset6_slider_pane_g9_ParamLimits

0x84f7,	// (0x0007d904) main_cset6_slider_pane_g9

0x8503,	// (0x0007d910) main_cset6_slider_pane_g10_ParamLimits

0x8503,	// (0x0007d910) main_cset6_slider_pane_g10

0x850f,	// (0x0007d91c) main_cset6_slider_pane_g11_ParamLimits

0x850f,	// (0x0007d91c) main_cset6_slider_pane_g11

0x851b,	// (0x0007d928) main_cset6_slider_pane_g12_ParamLimits

0x851b,	// (0x0007d928) main_cset6_slider_pane_g12

0x8527,	// (0x0007d934) main_cset6_slider_pane_g13_ParamLimits

0x8527,	// (0x0007d934) main_cset6_slider_pane_g13

0x8533,	// (0x0007d940) main_cset6_slider_pane_g14_ParamLimits

0x8533,	// (0x0007d940) main_cset6_slider_pane_g14

0x92eb,	// (0x0007e6f8) main_cset6_slider_pane_g15_ParamLimits

0x92eb,	// (0x0007e6f8) main_cset6_slider_pane_g15

0x8557,	// (0x0007d964) main_cset6_slider_pane_g16_ParamLimits

0x8557,	// (0x0007d964) main_cset6_slider_pane_g16

0x8563,	// (0x0007d970) main_cset6_slider_pane_g17_ParamLimits

0x8563,	// (0x0007d970) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x00084faa) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x00084faa) main_cset6_slider_pane_g

0xd581,	// (0x0008298e) main_cset6_slider_pane_t1_ParamLimits

0xd581,	// (0x0008298e) main_cset6_slider_pane_t1

0x931b,	// (0x0007e728) main_cset6_slider_pane_t2_ParamLimits

0x931b,	// (0x0007e728) main_cset6_slider_pane_t2

0x9346,	// (0x0007e753) main_cset6_slider_pane_t3_ParamLimits

0x9346,	// (0x0007e753) main_cset6_slider_pane_t3

0x9371,	// (0x0007e77e) main_cset6_slider_pane_t4_ParamLimits

0x9371,	// (0x0007e77e) main_cset6_slider_pane_t4

0x939c,	// (0x0007e7a9) main_cset6_slider_pane_t5_ParamLimits

0x939c,	// (0x0007e7a9) main_cset6_slider_pane_t5

0xd5c2,	// (0x000829cf) main_cset6_slider_pane_t7_ParamLimits

0xd5c2,	// (0x000829cf) main_cset6_slider_pane_t7

0x93c7,	// (0x0007e7d4) main_cset6_slider_pane_t8_ParamLimits

0x93c7,	// (0x0007e7d4) main_cset6_slider_pane_t8

0x93eb,	// (0x0007e7f8) main_cset6_slider_pane_t9_ParamLimits

0x93eb,	// (0x0007e7f8) main_cset6_slider_pane_t9

0x940f,	// (0x0007e81c) main_cset6_slider_pane_t10_ParamLimits

0x940f,	// (0x0007e81c) main_cset6_slider_pane_t10

0x9433,	// (0x0007e840) main_cset6_slider_pane_t11_ParamLimits

0x9433,	// (0x0007e840) main_cset6_slider_pane_t11

0xd5f8,	// (0x00082a05) main_cset6_slider_pane_t14_ParamLimits

0xd5f8,	// (0x00082a05) main_cset6_slider_pane_t14

0xd631,	// (0x00082a3e) main_cset6_slider_pane_t15_ParamLimits

0xd631,	// (0x00082a3e) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x00084fcf) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x00084fcf) main_cset6_slider_pane_t

0xcd8e,	// (0x0008219b) cset_slider_pane_g1_copy1

0xcd97,	// (0x000821a4) cset_slider_pane_g2_copy1

0xcda0,	// (0x000821ad) cset_slider_pane_g3_copy1

0xa99d,	// (0x0007fdaa) bg_popup_sub_pane_cp011_copy1

0xd73b,	// (0x00082b48) main_cset_text_pane_g1_copy1

0xce51,	// (0x0008225e) main_cset_text_pane_t1_copy1

0xce5f,	// (0x0008226c) main_cset_text_pane_t2_copy1

0xce6d,	// (0x0008227a) main_cset_text_pane_t3_copy1

0xce7b,	// (0x00082288) main_cset_text_pane_t4_copy1

0xce89,	// (0x00082296) main_cset_text_pane_t5_copy1

0xd743,	// (0x00082b50) main_cset_text_pane_t6_copy1

0xd751,	// (0x00082b5e) main_cset_text_pane_t7_copy1

0x91fd,	// (0x0007e60a) main_cset_text2_pane_t1_copy1

0xaa15,	// (0x0007fe22) main_ncimui_pane

0x5c12,	// (0x0007b01f) popup_query_ncimui_window_ParamLimits

0x5c12,	// (0x0007b01f) popup_query_ncimui_window

0xeb7b,	// (0x00083f88) field_cale_ev2_pane_g4_ParamLimits

0xeb7b,	// (0x00083f88) field_cale_ev2_pane_g4

0x77cf,	// (0x0007cbdc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x77cf,	// (0x0007cbdc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00084cad) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00084cad) cell_video_dialer_keypad_pane_g

0x77e7,	// (0x0007cbf4) cell_video_dialer_keypad_pane_t1

0xa99d,	// (0x0007fdaa) bg_popup_window_pane_cp012

0x413a,	// (0x00079547) heading_pane_cp06

0xd77d,	// (0x00082b8a) ncim_query_content_pane

0xa99d,	// (0x0007fdaa) bg_popup_heading_pane_cp01

0xd785,	// (0x00082b92) ncim_heading_pane_t1

0xd793,	// (0x00082ba0) ncim_indicator_popup_pane

0xd7a5,	// (0x00082bb2) ncim_query_button_pane

0xd7b9,	// (0x00082bc6) ncim_query_content_pane_t1

0xd7cb,	// (0x00082bd8) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00085013) ncim_query_content_pane_t

0xd805,	// (0x00082c12) ncim_query_list_pane

0xd817,	// (0x00082c24) ncim_query_popup_pane

0xd793,	// (0x00082ba0) ncim_indicator_popup_pane_ParamLimits

0x957d,	// (0x0007e98a) ncim_query_content_pane_g1_ParamLimits

0x957d,	// (0x0007e98a) ncim_query_content_pane_g1

0xd7b9,	// (0x00082bc6) ncim_query_content_pane_t1_ParamLimits

0xd7cb,	// (0x00082bd8) ncim_query_content_pane_t2_ParamLimits

0x9589,	// (0x0007e996) ncim_query_content_pane_t3_ParamLimits

0x9589,	// (0x0007e996) ncim_query_content_pane_t3

0x95b1,	// (0x0007e9be) ncim_query_content_pane_t4_ParamLimits

0x95b1,	// (0x0007e9be) ncim_query_content_pane_t4

0x95d9,	// (0x0007e9e6) ncim_query_content_pane_t5_ParamLimits

0x95d9,	// (0x0007e9e6) ncim_query_content_pane_t5

0xd7dd,	// (0x00082bea) ncim_query_content_pane_t6_ParamLimits

0xd7dd,	// (0x00082bea) ncim_query_content_pane_t6

0xfc06,	// (0x00085013) ncim_query_content_pane_t_ParamLimits

0xd805,	// (0x00082c12) ncim_query_list_pane_ParamLimits

0xd817,	// (0x00082c24) ncim_query_popup_pane_ParamLimits

0xd82b,	// (0x00082c38) wait_bar_pane_cp04

0xa99d,	// (0x0007fdaa) input_focus_pane_cp011

0xd833,	// (0x00082c40) ncim_query_popup_pane_t1

0xd841,	// (0x00082c4e) ncim_list_query_list_pane_ParamLimits

0xd841,	// (0x00082c4e) ncim_list_query_list_pane

0xa99d,	// (0x0007fdaa) bg_button_pane_cp027

0xd84e,	// (0x00082c5b) ncim_query_button_pane_g1

0xa99d,	// (0x0007fdaa) list_highlight_pane_cp012

0xd858,	// (0x00082c65) ncim_list_query_list_pane_g1

0xd860,	// (0x00082c6d) ncim_list_query_list_pane_t1

0xee4e,	// (0x0008425b) cam4_indicators_pane_g3_ParamLimits

0xee4e,	// (0x0008425b) cam4_indicators_pane_g3

0xeece,	// (0x000842db) vid4_indicators_pane_g5_ParamLimits

0xeece,	// (0x000842db) vid4_indicators_pane_g5

0xef76,	// (0x00084383) vid4_progress_pane_g5_ParamLimits

0xef76,	// (0x00084383) vid4_progress_pane_g5

0x946b,	// (0x0007e878) main_ncimui_pane_g1

0x94d1,	// (0x0007e8de) ncimui_group_query_pane_ParamLimits

0x94d1,	// (0x0007e8de) ncimui_group_query_pane

0x9519,	// (0x0007e926) ncimui_list_pane_ParamLimits

0x9519,	// (0x0007e926) ncimui_list_pane

0x9540,	// (0x0007e94d) ncimui_text_pane_ParamLimits

0x9540,	// (0x0007e94d) ncimui_text_pane

0x9601,	// (0x0007ea0e) ncimui_text_pane_t1_ParamLimits

0x9601,	// (0x0007ea0e) ncimui_text_pane_t1

0xd86e,	// (0x00082c7b) ncimui_list_single_graphic_pane_ParamLimits

0xd86e,	// (0x00082c7b) ncimui_list_single_graphic_pane

0x961f,	// (0x0007ea2c) ncimui_query_pane_ParamLimits

0x961f,	// (0x0007ea2c) ncimui_query_pane

0xa99d,	// (0x0007fdaa) list_highlight_pane_cp013

0xd87e,	// (0x00082c8b) ncim_list_query_list_pane_t1_copy1

0xd858,	// (0x00082c65) ncim_list_single_graphic_pane_g1

0xd88c,	// (0x00082c99) ncim_query_button_pane_cp01

0xd898,	// (0x00082ca5) ncim_query_entry_pane_ParamLimits

0xd898,	// (0x00082ca5) ncim_query_entry_pane

0xd8ab,	// (0x00082cb8) ncimui_query_pane_g1

0xd8b7,	// (0x00082cc4) ncimui_query_pane_t1_ParamLimits

0xd8b7,	// (0x00082cc4) ncimui_query_pane_t1

0xaa15,	// (0x0007fe22) input_focus_pane_cp012

0xd8d0,	// (0x00082cdd) ncim_query_entry_pane_t1

0x2138,	// (0x00077545) main_im_pane_ParamLimits

0xaa15,	// (0x0007fe22) main_mobtv_pane_ParamLimits

0xaa15,	// (0x0007fe22) main_mobtv_pane

0x9303,	// (0x0007e710) main_cset6_slider_pane_g18_ParamLimits

0x9303,	// (0x0007e710) main_cset6_slider_pane_g18

0x930f,	// (0x0007e71c) main_cset6_slider_pane_g19_ParamLimits

0x930f,	// (0x0007e71c) main_cset6_slider_pane_g19

0xf001,	// (0x0008440e) bg_main_mobtv_pane_ParamLimits

0xf001,	// (0x0008440e) bg_main_mobtv_pane

0x9632,	// (0x0007ea3f) main_mobtv_info_pane

0x963b,	// (0x0007ea48) main_mobtv_loading_pane_ParamLimits

0x963b,	// (0x0007ea48) main_mobtv_loading_pane

0xd8e2,	// (0x00082cef) main_mobtv_pg_channel_list_pane

0xd8ec,	// (0x00082cf9) main_mobtv_pg_hdr_pane

0x9648,	// (0x0007ea55) main_mobtv_programe_curr_pane_ParamLimits

0x9648,	// (0x0007ea55) main_mobtv_programe_curr_pane

0x9655,	// (0x0007ea62) main_mobtv_programe_next_pane_ParamLimits

0x9655,	// (0x0007ea62) main_mobtv_programe_next_pane

0xd8f5,	// (0x00082d02) popup_mobtv_noti_window

0xc08f,	// (0x0008149c) main_tv_pg_hdr_pane_g1

0xd8fd,	// (0x00082d0a) main_tv_pg_hdr_pane_g2

0xd905,	// (0x00082d12) main_tv_pg_hdr_pane_g3

0xd90d,	// (0x00082d1a) main_tv_pg_hdr_pane_g4

0xd915,	// (0x00082d22) main_tv_pg_hdr_pane_g5

0xd91f,	// (0x00082d2c) main_tv_pg_hdr_pane_g6

0xd929,	// (0x00082d36) main_tv_pg_hdr_pane_g7

0xd933,	// (0x00082d40) main_tv_pg_hdr_pane_g8

0xd93d,	// (0x00082d4a) main_tv_pg_hdr_pane_g9

0xd947,	// (0x00082d54) main_tv_pg_hdr_pane_g10

0xd951,	// (0x00082d5e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00085020) main_tv_pg_hdr_pane_g

0xd95b,	// (0x00082d68) main_tv_pg_hdr_pane_t1

0xd969,	// (0x00082d76) main_tv_pg_hdr_pane_t2

0xd977,	// (0x00082d84) main_tv_pg_hdr_pane_t3

0xd987,	// (0x00082d94) main_tv_pg_hdr_pane_t4

0xd997,	// (0x00082da4) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00085037) main_tv_pg_hdr_pane_t

0xd9a7,	// (0x00082db4) single_mobtv_pg_channel_pane_ParamLimits

0xd9a7,	// (0x00082db4) single_mobtv_pg_channel_pane

0xd9b9,	// (0x00082dc6) single_mobtv_pg_channel_table_pane

0xd9c2,	// (0x00082dcf) single_mobtv_pg_channel_thumb_pane

0xd9cb,	// (0x00082dd8) single_tv_pg_channel_pane_g1

0xd9d4,	// (0x00082de1) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00085042) single_tv_pg_channel_pane_g

0xc2fb,	// (0x00081708) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc2fb,	// (0x00081708) bg_single_mobtv_pg_channel_thumb_pane

0xd9dd,	// (0x00082dea) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9dd,	// (0x00082dea) single_mobtv_pg_channel_thumb_pane_g1

0xd9eb,	// (0x00082df8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9eb,	// (0x00082df8) single_mobtv_pg_channel_thumb_pane_g2

0xd9f7,	// (0x00082e04) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9f7,	// (0x00082e04) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00085047) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00085047) single_mobtv_pg_channel_thumb_pane_g

0xda03,	// (0x00082e10) single_mobtv_pg_channel_thumb_pane_t1

0xda11,	// (0x00082e1e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0008504e) single_mobtv_pg_channel_thumb_pane_t

0xc08f,	// (0x0008149c) bg_single_mobtv_pg_channel_table_pane_g1

0xc08f,	// (0x0008149c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00084af9) bg_single_mobtv_pg_channel_table_pane_g

0xda1f,	// (0x00082e2c) single_mobtv_pg_channel_table_pane_t1

0xda2d,	// (0x00082e3a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00085053) single_mobtv_pg_channel_table_pane_t

0x966a,	// (0x0007ea77) main_mobtv_info_pane_g1_ParamLimits

0x966a,	// (0x0007ea77) main_mobtv_info_pane_g1

0x9688,	// (0x0007ea95) main_mobtv_info_pane_t1_ParamLimits

0x9688,	// (0x0007ea95) main_mobtv_info_pane_t1

0x9700,	// (0x0007eb0d) main_mobtv_info_pane_t2_ParamLimits

0x9700,	// (0x0007eb0d) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0008505d) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0008505d) main_mobtv_info_pane_t

0x978f,	// (0x0007eb9c) wait_bar_pane_cp05

0x97a1,	// (0x0007ebae) main_mobtv_loading_pane_g1_ParamLimits

0x97a1,	// (0x0007ebae) main_mobtv_loading_pane_g1

0x97b4,	// (0x0007ebc1) main_mobtv_loading_pane_g2_ParamLimits

0x97b4,	// (0x0007ebc1) main_mobtv_loading_pane_g2

0x97c0,	// (0x0007ebcd) main_mobtv_loading_pane_g3_ParamLimits

0x97c0,	// (0x0007ebcd) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00085064) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00085064) main_mobtv_loading_pane_g

0xda3b,	// (0x00082e48) main_mobtv_loading_pane_t1_ParamLimits

0xda3b,	// (0x00082e48) main_mobtv_loading_pane_t1

0xda53,	// (0x00082e60) main_mobtv_loading_pane_t2_ParamLimits

0xda53,	// (0x00082e60) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x0008506b) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x0008506b) main_mobtv_loading_pane_t

0x97d3,	// (0x0007ebe0) wait_bar_pane_cp06_ParamLimits

0x97d3,	// (0x0007ebe0) wait_bar_pane_cp06

0xda77,	// (0x00082e84) main_mobtv_programe_curr_pane_t1

0xda85,	// (0x00082e92) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00085070) main_mobtv_programe_curr_pane_t

0xda93,	// (0x00082ea0) main_mobtv_programe_next_pane_t1

0xdaa1,	// (0x00082eae) main_mobtv_programe_next_pane_t2

0xdaaf,	// (0x00082ebc) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00085075) main_mobtv_programe_next_pane_t

0xa99d,	// (0x0007fdaa) bg_popup_mobtv_noti_window_pane

0xdabd,	// (0x00082eca) popup_mobtv_noti_window_g1

0xdac5,	// (0x00082ed2) popup_mobtv_noti_window_t1

0xdad3,	// (0x00082ee0) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x0008507c) popup_mobtv_noti_window_t

0xc08f,	// (0x0008149c) bg_popup_mobtv_noti_window_pane_g1

0xa99d,	// (0x0007fdaa) sc_clock_pane

0xa99d,	// (0x0007fdaa) main_fs_bigclock_pane

0x8f4e,	// (0x0007e35b) blid2_tripm_pane_t4_ParamLimits

0x8f4e,	// (0x0007e35b) blid2_tripm_pane_t4

0x97e2,	// (0x0007ebef) sc_clock_pane_g1_ParamLimits

0x97e2,	// (0x0007ebef) sc_clock_pane_g1

0x97f4,	// (0x0007ec01) sc_clock_pane_t1_ParamLimits

0x97f4,	// (0x0007ec01) sc_clock_pane_t1

0x9816,	// (0x0007ec23) sc_clock_pane_t2_ParamLimits

0x9816,	// (0x0007ec23) sc_clock_pane_t2

0x982e,	// (0x0007ec3b) sc_clock_pane_t3_ParamLimits

0x982e,	// (0x0007ec3b) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00085081) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00085081) sc_clock_pane_t

0xa0e9,	// (0x0007f4f6) main_fs_bigclock_indicator_pane_ParamLimits

0xa0e9,	// (0x0007f4f6) main_fs_bigclock_indicator_pane

0xc2cb,	// (0x000816d8) main_fs_bigclock_pane_g1_ParamLimits

0xc2cb,	// (0x000816d8) main_fs_bigclock_pane_g1

0xa0f5,	// (0x0007f502) main_fs_bigclock_pane_t1_ParamLimits

0xa0f5,	// (0x0007f502) main_fs_bigclock_pane_t1

0xa107,	// (0x0007f514) main_fs_bigclock_pane_t2_ParamLimits

0xa107,	// (0x0007f514) main_fs_bigclock_pane_t2

0xa11b,	// (0x0007f528) main_fs_bigclock_pane_t3_ParamLimits

0xa11b,	// (0x0007f528) main_fs_bigclock_pane_t3

0x0002,

0xfe5f,	// (0x0008526c) main_fs_bigclock_pane_t_ParamLimits

0xfe5f,	// (0x0008526c) main_fs_bigclock_pane_t

0xe64f,	// (0x00083a5c) main_fs_bigclock_indicator_pane_g1

0xd7ad,	// (0x00082bba) ncim_query_content_pane_g2_ParamLimits

0xd7ad,	// (0x00082bba) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x0008500e) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x0008500e) ncim_query_content_pane_g

0x9847,	// (0x0007ec54) sc_clock_pane_t4_ParamLimits

0x9847,	// (0x0007ec54) sc_clock_pane_t4

0xaa15,	// (0x0007fe22) main_radioblah_pane

0xca6a,	// (0x00081e77) cell_call4_button_pane_t1_copy1_ParamLimits

0xca6a,	// (0x00081e77) cell_call4_button_pane_t1_copy1

0x9483,	// (0x0007e890) main_ncimui_pane_t1_ParamLimits

0x9483,	// (0x0007e890) main_ncimui_pane_t1

0x949d,	// (0x0007e8aa) main_ncimui_pane_t2_ParamLimits

0x949d,	// (0x0007e8aa) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x00085007) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x00085007) main_ncimui_pane_t

0xdc19,	// (0x00083026) main_radioblah_anim_pane_ParamLimits

0xdc19,	// (0x00083026) main_radioblah_anim_pane

0xdc2a,	// (0x00083037) main_radioblah_info_pane_ParamLimits

0xdc2a,	// (0x00083037) main_radioblah_info_pane

0xdc3e,	// (0x0008304b) main_radioblah_pane_t1_ParamLimits

0xdc3e,	// (0x0008304b) main_radioblah_pane_t1

0xdc5a,	// (0x00083067) main_radioblah_pane_t2_ParamLimits

0xdc5a,	// (0x00083067) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x000850a2) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x000850a2) main_radioblah_pane_t

0x98f5,	// (0x0007ed02) main_radioblah_rocker_ctrl_pane_ParamLimits

0x98f5,	// (0x0007ed02) main_radioblah_rocker_ctrl_pane

0xdca2,	// (0x000830af) main_radioblah_info_pane_t1_ParamLimits

0xdca2,	// (0x000830af) main_radioblah_info_pane_t1

0x994d,	// (0x0007ed5a) main_radioblah_info_pane_t2_ParamLimits

0x994d,	// (0x0007ed5a) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x000850ab) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x000850ab) main_radioblah_info_pane_t

0xc08f,	// (0x0008149c) main_radioblah_rocker_ctrl_pane_g1

0x99fd,	// (0x0007ee0a) main_radioblah_rocker_ctrl_pane_g2

0x9a05,	// (0x0007ee12) main_radioblah_rocker_ctrl_pane_g3

0x9a0d,	// (0x0007ee1a) main_radioblah_rocker_ctrl_pane_g4

0x9a15,	// (0x0007ee22) main_radioblah_rocker_ctrl_pane_g5

0x9a1d,	// (0x0007ee2a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x000850b4) main_radioblah_rocker_ctrl_pane_g

0x91fd,	// (0x0007e60a) main_cset_text2_pane_t1_copy1_ParamLimits

0xee1e,	// (0x0008422b) cam4_image_uncrop_qvga_pane

0xee77,	// (0x00084284) vid4_image_uncrop_qcif_pane

0xefdf,	// (0x000843ec) cam6_image_uncrop_qvga_pane_ParamLimits

0xefdf,	// (0x000843ec) cam6_image_uncrop_qvga_pane

0xd3e3,	// (0x000827f0) vid6_image_uncrop_qcif_pane_ParamLimits

0xd3e3,	// (0x000827f0) vid6_image_uncrop_qcif_pane

0xa99d,	// (0x0007fdaa) bg_popup_preview_window_pane_cp03

0xd75f,	// (0x00082b6c) list_cset_text2_pane

0xd767,	// (0x00082b74) main_cset6_text2_pane_g1

0xd76f,	// (0x00082b7c) main_cset6_text2_pane_t1

0x9a25,	// (0x0007ee32) list_cset_text2_pane_t1_ParamLimits

0x9a25,	// (0x0007ee32) list_cset_text2_pane_t1

0xaa15,	// (0x0007fe22) main_radioblah_pane_ParamLimits

0x977b,	// (0x0007eb88) main_mobtv_info_pane_t3_ParamLimits

0x977b,	// (0x0007eb88) main_mobtv_info_pane_t3

0x98e3,	// (0x0007ecf0) main_radioblah_pane_g1

0x991d,	// (0x0007ed2a) main_radioblah_info_pane_g1

0x99a2,	// (0x0007edaf) main_radioblah_info_pane_t3_ParamLimits

0x99a2,	// (0x0007edaf) main_radioblah_info_pane_t3

0x3bfd,	// (0x0007900a) highlight_cell_cale_month_pane_ParamLimits

0x3bfd,	// (0x0007900a) highlight_cell_cale_month_pane

0xa99d,	// (0x0007fdaa) main_phob_fisheye_pane

0xc40f,	// (0x0008181c) scroll_pane_cp0031_ParamLimits

0xc40f,	// (0x0008181c) scroll_pane_cp0031

0xd4f1,	// (0x000828fe) wait_bar_pane_cp08_ParamLimits

0x9282,	// (0x0007e68f) cset_list_set_pane_copy1_ParamLimits

0xdcdc,	// (0x000830e9) highlight_cell_cale_month_pane_g1

0x9a3e,	// (0x0007ee4b) highlight_cell_cale_month_pane_t1

0xd119,	// (0x00082526) list_gen_pane_cp01

0xcc91,	// (0x0008209e) scroll_pane_01

0x9a4c,	// (0x0007ee59) list_single_double_fisheye_pane

0x0df3,	// (0x00076200) list_double_fisheye_pane_g1_ParamLimits

0x0df3,	// (0x00076200) list_double_fisheye_pane_g1

0x0dff,	// (0x0007620c) list_double_fisheye_pane_g2_ParamLimits

0x0dff,	// (0x0007620c) list_double_fisheye_pane_g2

0x9a55,	// (0x0007ee62) list_double_fisheye_pane_g3_ParamLimits

0x9a55,	// (0x0007ee62) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x000850c1) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x000850c1) list_double_fisheye_pane_g

0x0e30,	// (0x0007623d) list_double_fisheye_pane_t1_ParamLimits

0x0e30,	// (0x0007623d) list_double_fisheye_pane_t1

0x0e4b,	// (0x00076258) list_double_fisheye_pane_t2_ParamLimits

0x0e4b,	// (0x00076258) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x000850cc) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x000850cc) list_double_fisheye_pane_t

0xa99d,	// (0x0007fdaa) main_call5_pane

0x9872,	// (0x0007ec7f) sc_swipe_pane_ParamLimits

0x9872,	// (0x0007ec7f) sc_swipe_pane

0x9a74,	// (0x0007ee81) call5_image_pane_ParamLimits

0x9a74,	// (0x0007ee81) call5_image_pane

0x9a91,	// (0x0007ee9e) call5_swipe_1_pane_ParamLimits

0x9a91,	// (0x0007ee9e) call5_swipe_1_pane

0x9aa4,	// (0x0007eeb1) call5_swipe_2_pane_ParamLimits

0x9aa4,	// (0x0007eeb1) call5_swipe_2_pane

0x9acf,	// (0x0007eedc) popup_call5_audio_first_window_ParamLimits

0x9acf,	// (0x0007eedc) popup_call5_audio_first_window

0xc2fb,	// (0x00081708) call5_swipe_1_pane_g1_ParamLimits

0xc2fb,	// (0x00081708) call5_swipe_1_pane_g1

0xdce4,	// (0x000830f1) call5_swipe_1_pane_g2_ParamLimits

0xdce4,	// (0x000830f1) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x000850d1) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x000850d1) call5_swipe_1_pane_g

0xdcf0,	// (0x000830fd) call5_swipe_1_pane_t1_ParamLimits

0xdcf0,	// (0x000830fd) call5_swipe_1_pane_t1

0xc2fb,	// (0x00081708) call5_swipe_2_pane_g1_ParamLimits

0xc2fb,	// (0x00081708) call5_swipe_2_pane_g1

0xdd05,	// (0x00083112) call5_swipe_2_pane_g2_ParamLimits

0xdd05,	// (0x00083112) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x000850d6) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x000850d6) call5_swipe_2_pane_g

0xdd11,	// (0x0008311e) call5_swipe_2_pane_t1_ParamLimits

0xdd11,	// (0x0008311e) call5_swipe_2_pane_t1

0xdd26,	// (0x00083133) sc_swipe_pane_g1_ParamLimits

0xdd26,	// (0x00083133) sc_swipe_pane_g1

0xdd33,	// (0x00083140) sc_swipe_pane_g2_ParamLimits

0xdd33,	// (0x00083140) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x000850db) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x000850db) sc_swipe_pane_g

0xdd3f,	// (0x0008314c) sc_swipe_pane_t1_ParamLimits

0xdd3f,	// (0x0008314c) sc_swipe_pane_t1

0xa99d,	// (0x0007fdaa) main_cmail_launcher_pane

0x9ae0,	// (0x0007eeed) aid_size_cell_cmail_l_ParamLimits

0x9ae0,	// (0x0007eeed) aid_size_cell_cmail_l

0x9afa,	// (0x0007ef07) grid_cmail_l_pane_ParamLimits

0x9afa,	// (0x0007ef07) grid_cmail_l_pane

0x9b15,	// (0x0007ef22) cell_cmail_l_pane_ParamLimits

0x9b15,	// (0x0007ef22) cell_cmail_l_pane

0x9b3b,	// (0x0007ef48) cell_cmail_l_pane_g1_ParamLimits

0x9b3b,	// (0x0007ef48) cell_cmail_l_pane_g1

0x9b47,	// (0x0007ef54) cell_cmail_l_pane_t1_ParamLimits

0x9b47,	// (0x0007ef54) cell_cmail_l_pane_t1

0xdd54,	// (0x00083161) cell_cmail_l_pane_t2_ParamLimits

0xdd54,	// (0x00083161) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x000850e0) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x000850e0) cell_cmail_l_pane_t

0xaa15,	// (0x0007fe22) grid_highlight_pane_cp018_ParamLimits

0xaa15,	// (0x0007fe22) grid_highlight_pane_cp018

0x155e,	// (0x0007696b) main2_pane_ParamLimits

0x155e,	// (0x0007696b) main2_pane

0x2363,	// (0x00077770) popup_sp_fs_action_menu_bg_pane_g1

0x236b,	// (0x00077778) popup_sp_fs_action_menu_bg_pane_g2

0x2373,	// (0x00077780) popup_sp_fs_action_menu_bg_pane_g3

0x237b,	// (0x00077788) popup_sp_fs_action_menu_bg_pane_g4

0x2383,	// (0x00077790) popup_sp_fs_action_menu_bg_pane_g5

0x238b,	// (0x00077798) popup_sp_fs_action_menu_bg_pane_g6

0x2393,	// (0x000777a0) popup_sp_fs_action_menu_bg_pane_g7

0x239b,	// (0x000777a8) popup_sp_fs_action_menu_bg_pane_g8

0x23a3,	// (0x000777b0) popup_sp_fs_action_menu_bg_pane_g9

0x23ab,	// (0x000777b8) popup_sp_fs_action_menu_bg_pane_g10

0x23ab,	// (0x000777b8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x000845a5) popup_sp_fs_action_menu_bg_pane_g

0xaabf,	// (0x0007fecc) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_t3_g3_g1

0xaacb,	// (0x0007fed8) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaacb,	// (0x0007fed8) list_medium_line_x2_t3_g3_g2

0xaad7,	// (0x0007fee4) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaad7,	// (0x0007fee4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00084655) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00084655) list_medium_line_x2_t3_g3_g

0xaae3,	// (0x0007fef0) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaae3,	// (0x0007fef0) list_medium_line_x2_t3_g3_t1

0x09d2,	// (0x00075ddf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x09d2,	// (0x00075ddf) list_medium_line_x2_t3_g3_t2

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0008465c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0008465c) list_medium_line_x2_t3_g3_t

0xaabf,	// (0x0007fecc) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_t3_g2_g1

0xaad7,	// (0x0007fee4) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaad7,	// (0x0007fee4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00084663) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00084663) list_medium_line_x2_t3_g2_g

0xab0d,	// (0x0007ff1a) list_medium_line_x2_t3_g2_t1_ParamLimits

0xab0d,	// (0x0007ff1a) list_medium_line_x2_t3_g2_t1

0xab23,	// (0x0007ff30) list_medium_line_x2_t3_g2_t2_ParamLimits

0xab23,	// (0x0007ff30) list_medium_line_x2_t3_g2_t2

0xab35,	// (0x0007ff42) list_medium_line_x2_t3_g2_t3_ParamLimits

0xab35,	// (0x0007ff42) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00084668) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00084668) list_medium_line_x2_t3_g2_t

0xaabf,	// (0x0007fecc) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_t4_g4_g1

0xab52,	// (0x0007ff5f) list_medium_line_x2_t4_g4_g2_ParamLimits

0xab52,	// (0x0007ff5f) list_medium_line_x2_t4_g4_g2

0xaacb,	// (0x0007fed8) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaacb,	// (0x0007fed8) list_medium_line_x2_t4_g4_g3

0xab5e,	// (0x0007ff6b) list_medium_line_x2_t4_g4_g4_ParamLimits

0xab5e,	// (0x0007ff6b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0008466f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0008466f) list_medium_line_x2_t4_g4_g

0x09e6,	// (0x00075df3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x09e6,	// (0x00075df3) list_medium_line_x2_t4_g4_t1

0x0a00,	// (0x00075e0d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0a00,	// (0x00075e0d) list_medium_line_x2_t4_g4_t2

0x0a16,	// (0x00075e23) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0a16,	// (0x00075e23) list_medium_line_x2_t4_g4_t3

0xab6a,	// (0x0007ff77) list_medium_line_x2_t4_g4_t4_ParamLimits

0xab6a,	// (0x0007ff77) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00084678) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00084678) list_medium_line_x2_t4_g4_t

0xaabf,	// (0x0007fecc) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_t2_g4_g1

0xab52,	// (0x0007ff5f) list_medium_line_x2_t2_g4_g2_ParamLimits

0xab52,	// (0x0007ff5f) list_medium_line_x2_t2_g4_g2

0xaacb,	// (0x0007fed8) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaacb,	// (0x0007fed8) list_medium_line_x2_t2_g4_g3

0xaad7,	// (0x0007fee4) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaad7,	// (0x0007fee4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x000846df) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x000846df) list_medium_line_x2_t2_g4_g

0xab7c,	// (0x0007ff89) list_medium_line_x2_t2_g4_t1_ParamLimits

0xab7c,	// (0x0007ff89) list_medium_line_x2_t2_g4_t1

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x000846e8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x000846e8) list_medium_line_x2_t2_g4_t

0xaabf,	// (0x0007fecc) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_t2_g3_g1

0xaacb,	// (0x0007fed8) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaacb,	// (0x0007fed8) list_medium_line_x2_t2_g3_g2

0xaad7,	// (0x0007fee4) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaad7,	// (0x0007fee4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00084655) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00084655) list_medium_line_x2_t2_g3_g

0xab91,	// (0x0007ff9e) list_medium_line_x2_t2_g3_t1_ParamLimits

0xab91,	// (0x0007ff9e) list_medium_line_x2_t2_g3_t1

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x000846ed) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x000846ed) list_medium_line_x2_t2_g3_t

0x3f64,	// (0x00079371) main_sp_fs_list_pane_ParamLimits

0x3f64,	// (0x00079371) main_sp_fs_list_pane

0x3f70,	// (0x0007937d) sp_fs_scroll_pane_ParamLimits

0x3f70,	// (0x0007937d) sp_fs_scroll_pane

0x0a2b,	// (0x00075e38) list_medium_line_x2_t3_t1

0x0a3b,	// (0x00075e48) list_medium_line_x2_t3_t2

0xabd4,	// (0x0007ffe1) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00084738) list_medium_line_x2_t3_t

0x0a49,	// (0x00075e56) list_medium_line_x3_t4_t1

0x0a59,	// (0x00075e66) list_medium_line_x3_t4_t2

0xabe2,	// (0x0007ffef) list_medium_line_x3_t4_t3

0xabd4,	// (0x0007ffe1) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0008473f) list_medium_line_x3_t4_t

0x0a67,	// (0x00075e74) list_medium_line_x4_t5_t1

0x0a77,	// (0x00075e84) list_medium_line_x4_t5_t2

0xabe2,	// (0x0007ffef) list_medium_line_x4_t5_t3

0xabf0,	// (0x0007fffd) list_medium_line_x4_t5_t4

0xabd4,	// (0x0007ffe1) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00084748) list_medium_line_x4_t5_t

0xaabf,	// (0x0007fecc) list_medium_line_t4_g4_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_t4_g4_g1

0xab5e,	// (0x0007ff6b) list_medium_line_t4_g4_g2_ParamLimits

0xab5e,	// (0x0007ff6b) list_medium_line_t4_g4_g2

0xabfe,	// (0x0008000b) list_medium_line_t4_g4_g3_ParamLimits

0xabfe,	// (0x0008000b) list_medium_line_t4_g4_g3

0xaad7,	// (0x0007fee4) list_medium_line_t4_g4_g4_ParamLimits

0xaad7,	// (0x0007fee4) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00084753) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00084753) list_medium_line_t4_g4_g

0xac0a,	// (0x00080017) list_medium_line_t4_g4_t1_ParamLimits

0xac0a,	// (0x00080017) list_medium_line_t4_g4_t1

0xac1f,	// (0x0008002c) list_medium_line_t4_g4_t2_ParamLimits

0xac1f,	// (0x0008002c) list_medium_line_t4_g4_t2

0xac34,	// (0x00080041) list_medium_line_t4_g4_t3_ParamLimits

0xac34,	// (0x00080041) list_medium_line_t4_g4_t3

0xaaf8,	// (0x0007ff05) list_medium_line_t4_g4_t4_ParamLimits

0xaaf8,	// (0x0007ff05) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0008475c) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0008475c) list_medium_line_t4_g4_t

0x42b1,	// (0x000796be) chi_dic_find_pane_g1

0x59e4,	// (0x0007adf1) main_tport_pane

0xcdda,	// (0x000821e7) list_medium_line_plain_t1

0xcdf0,	// (0x000821fd) list_medium_line_t2_g2_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_t2_g2_g1

0xcdfc,	// (0x00082209) list_medium_line_t2_g2_g2_ParamLimits

0xcdfc,	// (0x00082209) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00084e18) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00084e18) list_medium_line_t2_g2_g

0x0c2c,	// (0x00076039) list_medium_line_t2_g2_t1_ParamLimits

0x0c2c,	// (0x00076039) list_medium_line_t2_g2_t1

0x0c46,	// (0x00076053) list_medium_line_t2_g2_t2_ParamLimits

0x0c46,	// (0x00076053) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00084e1d) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00084e1d) list_medium_line_t2_g2_t

0xd122,	// (0x0008252f) aid_sp_fs_list_icon_a_sm

0xefd7,	// (0x000843e4) aid_sp_fs_list_icon_d

0xd12a,	// (0x00082537) aid_sp_fs_text_primary

0xd133,	// (0x00082540) aid_sp_fs_text_secondary

0xd13c,	// (0x00082549) list_medium_line

0xd13c,	// (0x00082549) list_medium_line_g2

0xd13c,	// (0x00082549) list_medium_line_g3

0xd13c,	// (0x00082549) list_medium_line_plain

0xd13c,	// (0x00082549) list_medium_line_plain_t2

0xd13c,	// (0x00082549) list_medium_line_plain_t3

0xd13c,	// (0x00082549) list_medium_line_right_icon

0xd13c,	// (0x00082549) list_medium_line_right_iconx2

0xd13c,	// (0x00082549) list_medium_line_t2

0xd13c,	// (0x00082549) list_medium_line_t2_g2

0xd13c,	// (0x00082549) list_medium_line_t2_g3

0xd13c,	// (0x00082549) list_medium_line_t2_right_icon

0xd13c,	// (0x00082549) list_medium_line_t2_right_iconx2

0xd13c,	// (0x00082549) list_medium_line_t3

0xd13c,	// (0x00082549) list_medium_line_t3_g2

0xd13c,	// (0x00082549) list_medium_line_t3_g3

0xd13c,	// (0x00082549) list_medium_line_t3_right_iconx2

0xd145,	// (0x00082552) list_medium_line_t4_g4

0xd14e,	// (0x0008255b) list_medium_line_x2

0xd14e,	// (0x0008255b) list_medium_line_x2_t2_g2

0xd14e,	// (0x0008255b) list_medium_line_x2_t2_g3

0xd14e,	// (0x0008255b) list_medium_line_x2_t2_g4

0xd14e,	// (0x0008255b) list_medium_line_x2_t3

0xd14e,	// (0x0008255b) list_medium_line_x2_t3_g2

0xd14e,	// (0x0008255b) list_medium_line_x2_t3_g3

0xd14e,	// (0x0008255b) list_medium_line_x2_t3_g4

0xd14e,	// (0x0008255b) list_medium_line_x2_t4_g2

0xd14e,	// (0x0008255b) list_medium_line_x2_t4_g4

0xd157,	// (0x00082564) list_medium_line_x3

0xd157,	// (0x00082564) list_medium_line_x3_t4

0xd157,	// (0x00082564) list_medium_line_x3_t4_g4

0xd145,	// (0x00082552) list_medium_line_x4_t4

0xd145,	// (0x00082552) list_medium_line_x4_t4_g7

0xd145,	// (0x00082552) list_medium_line_x4_t5

0xd160,	// (0x0008256d) list_single_fs_dyc_pane_ParamLimits

0xd160,	// (0x0008256d) list_single_fs_dyc_pane

0xaabf,	// (0x0007fecc) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x4_t4_g7_g1

0xd66a,	// (0x00082a77) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd66a,	// (0x00082a77) list_medium_line_x4_t4_g7_g2

0xd676,	// (0x00082a83) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd676,	// (0x00082a83) list_medium_line_x4_t4_g7_g3

0xd685,	// (0x00082a92) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd685,	// (0x00082a92) list_medium_line_x4_t4_g7_g4

0xd691,	// (0x00082a9e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd691,	// (0x00082a9e) list_medium_line_x4_t4_g7_g5

0xd6a0,	// (0x00082aad) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd6a0,	// (0x00082aad) list_medium_line_x4_t4_g7_g6

0xd6af,	// (0x00082abc) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd6af,	// (0x00082abc) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x00084fe8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x00084fe8) list_medium_line_x4_t4_g7_g

0xd6bb,	// (0x00082ac8) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd6bb,	// (0x00082ac8) list_medium_line_x4_t4_g7_t1

0xd6d0,	// (0x00082add) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd6d0,	// (0x00082add) list_medium_line_x4_t4_g7_t2

0xd6e5,	// (0x00082af2) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd6e5,	// (0x00082af2) list_medium_line_x4_t4_g7_t3

0xd6fa,	// (0x00082b07) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd6fa,	// (0x00082b07) list_medium_line_x4_t4_g7_t4

0xd70c,	// (0x00082b19) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd70c,	// (0x00082b19) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x00084ff7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x00084ff7) list_medium_line_x4_t4_g7_t

0xd71e,	// (0x00082b2b) list_single_dyc_row_pane_ParamLimits

0xd71e,	// (0x00082b2b) list_single_dyc_row_pane

0x9a61,	// (0x0007ee6e) call5_gesture_pane_ParamLimits

0x9a61,	// (0x0007ee6e) call5_gesture_pane

0x9ab7,	// (0x0007eec4) call5_windows_pane_ParamLimits

0x9ab7,	// (0x0007eec4) call5_windows_pane

0x9b5d,	// (0x0007ef6a) call5_swipe_1_pane_cp_ParamLimits

0x9b5d,	// (0x0007ef6a) call5_swipe_1_pane_cp

0x9b69,	// (0x0007ef76) call5_swipe_2_pane_cp_ParamLimits

0x9b69,	// (0x0007ef76) call5_swipe_2_pane_cp

0x4725,	// (0x00079b32) call5_image_pane_cp

0x9b75,	// (0x0007ef82) popup_call5_audio_first_window_cp_ParamLimits

0x9b75,	// (0x0007ef82) popup_call5_audio_first_window_cp

0xdd26,	// (0x00083133) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd26,	// (0x00083133) call5_swipe_1_pane_g1_cp

0xdd66,	// (0x00083173) call5_swipe_1_pane_g2_cp

0xdd3f,	// (0x0008314c) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd3f,	// (0x0008314c) call5_swipe_1_pane_t1_cp

0xdd26,	// (0x00083133) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd26,	// (0x00083133) call5_swipe_2_pane_g1_cp

0xdd6e,	// (0x0008317b) call5_swipe_2_pane_g2_cp

0xdd76,	// (0x00083183) call5_swipe_2_pane_t1_cp_ParamLimits

0xdd76,	// (0x00083183) call5_swipe_2_pane_t1_cp

0xaa15,	// (0x0007fe22) main_sp_fs_email_pane

0xdd8b,	// (0x00083198) main_sp_fs_listscroll_pane_te

0xdd94,	// (0x000831a1) popup_sp_fs_action_menu_pane_ParamLimits

0xdd94,	// (0x000831a1) popup_sp_fs_action_menu_pane

0xc08f,	// (0x0008149c) bg_sp_fs_ctrlbar_pane_g1

0xddd8,	// (0x000831e5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdde1,	// (0x000831ee) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xddea,	// (0x000831f7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc08f,	// (0x0008149c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x000850e5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe74,	// (0x00081281) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe74,	// (0x00081281) bg_sp_fs_ctrlbar_ddmenu_pane

0xddf3,	// (0x00083200) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xddf3,	// (0x00083200) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xddff,	// (0x0008320c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xddff,	// (0x0008320c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x000850ee) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x000850ee) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde0b,	// (0x00083218) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde0b,	// (0x00083218) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xde25,	// (0x00083232) list_medium_line_t2_right_icon_g1

0x0e6d,	// (0x0007627a) list_medium_line_t2_right_icon_t1

0x0e7d,	// (0x0007628a) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x000850f3) list_medium_line_t2_right_icon_t

0xbbf6,	// (0x00081003) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbbf6,	// (0x00081003) bg_sp_fs_ctrlbar_pane

0x9bce,	// (0x0007efdb) main_sp_fs_ctrlbar_button_pane_cp01

0x9bd8,	// (0x0007efe5) main_sp_fs_ctrlbar_ddmenu_pane

0xde65,	// (0x00083272) main_sp_fs_ctrlbar_pane_g1

0xde71,	// (0x0008327e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x000850f8) main_sp_fs_ctrlbar_pane_g

0xde7d,	// (0x0008328a) main_sp_fs_ctrlbar_pane_t1

0x0e8f,	// (0x0007629c) main_sp_fs_ctrlbar_pane

0x0eb3,	// (0x000762c0) main_sp_fs_listscroll_pane_te_cp01

0x0ed3,	// (0x000762e0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0ed3,	// (0x000762e0) popup_sp_fs_action_menu_pane_cp01

0xaa15,	// (0x0007fe22) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaa15,	// (0x0007fe22) bg_sp_fs_highlight_list_pane_cp01

0xdea2,	// (0x000832af) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdea2,	// (0x000832af) sp_fs_action_menu_list_gene_pane_g1

0xdeb1,	// (0x000832be) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdeb1,	// (0x000832be) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x00085102) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x00085102) sp_fs_action_menu_list_gene_pane_g

0xdebe,	// (0x000832cb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdebe,	// (0x000832cb) sp_fs_action_menu_list_gene_pane_t1

0xded6,	// (0x000832e3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xded6,	// (0x000832e3) sp_fs_action_menu_list_gene_pane

0xdef7,	// (0x00083304) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdef7,	// (0x00083304) popup_sp_fs_action_menu_bg_pane

0xdf05,	// (0x00083312) sp_fs_action_menu_list_pane_ParamLimits

0xdf05,	// (0x00083312) sp_fs_action_menu_list_pane

0xdf27,	// (0x00083334) sp_fs_scroll_pane_cp01_ParamLimits

0xdf27,	// (0x00083334) sp_fs_scroll_pane_cp01

0x0f03,	// (0x00076310) list_medium_line_plain_t2_t1

0x0f13,	// (0x00076320) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x00085107) list_medium_line_plain_t2_t

0x0f23,	// (0x00076330) list_medium_line_plain_t3_t1

0x0f33,	// (0x00076340) list_medium_line_plain_t3_t2

0x0f41,	// (0x0007634e) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x0008510c) list_medium_line_plain_t3_t

0xaabf,	// (0x0007fecc) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_t2_g2_g1

0xaad7,	// (0x0007fee4) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaad7,	// (0x0007fee4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00084663) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00084663) list_medium_line_x2_t2_g2_g

0xac0a,	// (0x00080017) list_medium_line_x2_t2_g2_t1_ParamLimits

0xac0a,	// (0x00080017) list_medium_line_x2_t2_g2_t1

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x00085113) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x00085113) list_medium_line_x2_t2_g2_t

0xaabf,	// (0x0007fecc) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_t4_g2_g1

0xdf4d,	// (0x0008335a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdf4d,	// (0x0008335a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x00085118) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x00085118) list_medium_line_x2_t4_g2_g

0x0f4f,	// (0x0007635c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0f4f,	// (0x0007635c) list_medium_line_x2_t4_g2_t1

0x0f69,	// (0x00076376) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0f69,	// (0x00076376) list_medium_line_x2_t4_g2_t2

0x0f7e,	// (0x0007638b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0f7e,	// (0x0007638b) list_medium_line_x2_t4_g2_t3

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x0008511d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x0008511d) list_medium_line_x2_t4_g2_t

0xdf5f,	// (0x0008336c) list_medium_line_t3_right_iconx2_g1

0xde25,	// (0x00083232) list_medium_line_t3_right_iconx2_g2

0x0f93,	// (0x000763a0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x00085126) list_medium_line_t3_right_iconx2_g

0x0f9d,	// (0x000763aa) list_medium_line_t3_right_iconx2_t1

0x0fad,	// (0x000763ba) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x0008512d) list_medium_line_t3_right_iconx2_t

0xaabf,	// (0x0007fecc) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x3_t4_g4_g1

0xaacb,	// (0x0007fed8) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaacb,	// (0x0007fed8) list_medium_line_x3_t4_g4_g2

0xab5e,	// (0x0007ff6b) list_medium_line_x3_t4_g4_g3_ParamLimits

0xab5e,	// (0x0007ff6b) list_medium_line_x3_t4_g4_g3

0xdf67,	// (0x00083374) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdf67,	// (0x00083374) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x00085132) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x00085132) list_medium_line_x3_t4_g4_g

0x0fbb,	// (0x000763c8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0fbb,	// (0x000763c8) list_medium_line_x3_t4_g4_t1

0x0fd2,	// (0x000763df) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0fd2,	// (0x000763df) list_medium_line_x3_t4_g4_t2

0xac1f,	// (0x0008002c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xac1f,	// (0x0008002c) list_medium_line_x3_t4_g4_t3

0xdf73,	// (0x00083380) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdf73,	// (0x00083380) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x0008513b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x0008513b) list_medium_line_x3_t4_g4_t

0x0fed,	// (0x000763fa) list_single_dyc_row_text_pane_t1_ParamLimits

0x0fed,	// (0x000763fa) list_single_dyc_row_text_pane_t1

0x1036,	// (0x00076443) list_single_dyc_row_text_pane_t2_ParamLimits

0x1036,	// (0x00076443) list_single_dyc_row_text_pane_t2

0xdf90,	// (0x0008339d) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf90,	// (0x0008339d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x00085144) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x00085144) list_single_dyc_row_text_pane_t

0xdfa2,	// (0x000833af) list_single_dyc_row_pane_g1_ParamLimits

0xdfa2,	// (0x000833af) list_single_dyc_row_pane_g1

0xdfae,	// (0x000833bb) list_single_dyc_row_pane_g2_ParamLimits

0xdfae,	// (0x000833bb) list_single_dyc_row_pane_g2

0xdfba,	// (0x000833c7) list_single_dyc_row_pane_g3_ParamLimits

0xdfba,	// (0x000833c7) list_single_dyc_row_pane_g3

0xdfc6,	// (0x000833d3) list_single_dyc_row_pane_g4_ParamLimits

0xdfc6,	// (0x000833d3) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x0008514b) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x0008514b) list_single_dyc_row_pane_g

0xdfd2,	// (0x000833df) list_single_dyc_row_text_pane_ParamLimits

0xdfd2,	// (0x000833df) list_single_dyc_row_text_pane

0xa99d,	// (0x0007fdaa) bg_sp_fs_scroll_pane

0xdff1,	// (0x000833fe) thumb_sp_fs_scroll_pane

0xcdf0,	// (0x000821fd) list_medium_line_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_g1

0xdffa,	// (0x00083407) list_medium_line_t1_ParamLimits

0xdffa,	// (0x00083407) list_medium_line_t1

0xaabf,	// (0x0007fecc) list_medium_line_x2_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_g1

0xaacb,	// (0x0007fed8) list_medium_line_x2_g2_ParamLimits

0xaacb,	// (0x0007fed8) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x00085154) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x00085154) list_medium_line_x2_g

0xe00f,	// (0x0008341c) list_medium_line_x2_t1_ParamLimits

0xe00f,	// (0x0008341c) list_medium_line_x2_t1

0xaabf,	// (0x0007fecc) list_medium_line_x3_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x3_g1

0xaacb,	// (0x0007fed8) list_medium_line_x3_g2_ParamLimits

0xaacb,	// (0x0007fed8) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x00085154) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x00085154) list_medium_line_x3_g

0xe00f,	// (0x0008341c) list_medium_line_x3_t1_ParamLimits

0xe00f,	// (0x0008341c) list_medium_line_x3_t1

0xe025,	// (0x00083432) thumb_sp_fs_scroll_pane_g1

0xe02e,	// (0x0008343b) thumb_sp_fs_scroll_pane_g2

0xe037,	// (0x00083444) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00085159) thumb_sp_fs_scroll_pane_g

0xe025,	// (0x00083432) bg_sp_fs_scroll_pane_g1

0xe02e,	// (0x0008343b) bg_sp_fs_scroll_pane_g2

0xe037,	// (0x00083444) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00085159) bg_sp_fs_scroll_pane_g

0xaabf,	// (0x0007fecc) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaabf,	// (0x0007fecc) list_medium_line_x2_t3_g4_g1

0xab52,	// (0x0007ff5f) list_medium_line_x2_t3_g4_g2_ParamLimits

0xab52,	// (0x0007ff5f) list_medium_line_x2_t3_g4_g2

0xaacb,	// (0x0007fed8) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaacb,	// (0x0007fed8) list_medium_line_x2_t3_g4_g3

0xaad7,	// (0x0007fee4) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaad7,	// (0x0007fee4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x000846df) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x000846df) list_medium_line_x2_t3_g4_g

0x1090,	// (0x0007649d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1090,	// (0x0007649d) list_medium_line_x2_t3_g4_t1

0x10aa,	// (0x000764b7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x10aa,	// (0x000764b7) list_medium_line_x2_t3_g4_t2

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaaf8,	// (0x0007ff05) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x00085160) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x00085160) list_medium_line_x2_t3_g4_t

0xcdf0,	// (0x000821fd) list_medium_line_g2_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_g2_g1

0xcdfc,	// (0x00082209) list_medium_line_g2_g2_ParamLimits

0xcdfc,	// (0x00082209) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00084e18) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00084e18) list_medium_line_g2_g

0xe040,	// (0x0008344d) list_medium_line_g2_t1_ParamLimits

0xe040,	// (0x0008344d) list_medium_line_g2_t1

0xcdf0,	// (0x000821fd) list_medium_line_t3_g2_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_t3_g2_g1

0xcdfc,	// (0x00082209) list_medium_line_t3_g2_g2_ParamLimits

0xcdfc,	// (0x00082209) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00084e18) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00084e18) list_medium_line_t3_g2_g

0x10c4,	// (0x000764d1) list_medium_line_t3_g2_t1_ParamLimits

0x10c4,	// (0x000764d1) list_medium_line_t3_g2_t1

0x10db,	// (0x000764e8) list_medium_line_t3_g2_t2_ParamLimits

0x10db,	// (0x000764e8) list_medium_line_t3_g2_t2

0x10f0,	// (0x000764fd) list_medium_line_t3_g2_t3_ParamLimits

0x10f0,	// (0x000764fd) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x00085167) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x00085167) list_medium_line_t3_g2_t

0xde25,	// (0x00083232) list_medium_line_right_icon_g1

0xe055,	// (0x00083462) list_medium_line_right_icon_t1

0xcdf0,	// (0x000821fd) list_medium_line_t2_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_t2_g1

0x1109,	// (0x00076516) list_medium_line_t2_t1_ParamLimits

0x1109,	// (0x00076516) list_medium_line_t2_t1

0x1123,	// (0x00076530) list_medium_line_t2_t2_ParamLimits

0x1123,	// (0x00076530) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x0008516e) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x0008516e) list_medium_line_t2_t

0xcdf0,	// (0x000821fd) list_medium_line_t3_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_t3_g1

0x113c,	// (0x00076549) list_medium_line_t3_t1_ParamLimits

0x113c,	// (0x00076549) list_medium_line_t3_t1

0x1156,	// (0x00076563) list_medium_line_t3_t2_ParamLimits

0x1156,	// (0x00076563) list_medium_line_t3_t2

0x116b,	// (0x00076578) list_medium_line_t3_t3_ParamLimits

0x116b,	// (0x00076578) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x00085173) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x00085173) list_medium_line_t3_t

0xcdf0,	// (0x000821fd) list_medium_line_g3_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_g3_g1

0xe063,	// (0x00083470) list_medium_line_g3_g2_ParamLimits

0xe063,	// (0x00083470) list_medium_line_g3_g2

0xcdfc,	// (0x00082209) list_medium_line_g3_g3_ParamLimits

0xcdfc,	// (0x00082209) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x0008517a) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x0008517a) list_medium_line_g3_g

0xe06f,	// (0x0008347c) list_medium_line_g3_t1_ParamLimits

0xe06f,	// (0x0008347c) list_medium_line_g3_t1

0xcdf0,	// (0x000821fd) list_medium_line_t2_g3_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_t2_g3_g1

0xe063,	// (0x00083470) list_medium_line_t2_g3_g2_ParamLimits

0xe063,	// (0x00083470) list_medium_line_t2_g3_g2

0xcdfc,	// (0x00082209) list_medium_line_t2_g3_g3_ParamLimits

0xcdfc,	// (0x00082209) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x0008517a) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x0008517a) list_medium_line_t2_g3_g

0x1180,	// (0x0007658d) list_medium_line_t2_g3_t1_ParamLimits

0x1180,	// (0x0007658d) list_medium_line_t2_g3_t1

0x119a,	// (0x000765a7) list_medium_line_t2_g3_t2_ParamLimits

0x119a,	// (0x000765a7) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x00085181) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x00085181) list_medium_line_t2_g3_t

0xcdf0,	// (0x000821fd) list_medium_line_t3_g3_g1_ParamLimits

0xcdf0,	// (0x000821fd) list_medium_line_t3_g3_g1

0xe063,	// (0x00083470) list_medium_line_t3_g3_g2_ParamLimits

0xe063,	// (0x00083470) list_medium_line_t3_g3_g2

0xcdfc,	// (0x00082209) list_medium_line_t3_g3_g3_ParamLimits

0xcdfc,	// (0x00082209) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x0008517a) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x0008517a) list_medium_line_t3_g3_g

0x11b5,	// (0x000765c2) list_medium_line_t3_g3_t1_ParamLimits

0x11b5,	// (0x000765c2) list_medium_line_t3_g3_t1

0x11c9,	// (0x000765d6) list_medium_line_t3_g3_t2_ParamLimits

0x11c9,	// (0x000765d6) list_medium_line_t3_g3_t2

0x11db,	// (0x000765e8) list_medium_line_t3_g3_t3_ParamLimits

0x11db,	// (0x000765e8) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x00085186) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x00085186) list_medium_line_t3_g3_t

0xdf5f,	// (0x0008336c) list_medium_line_right_iconx2_g1

0xde25,	// (0x00083232) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x0008518d) list_medium_line_right_iconx2_g

0xe084,	// (0x00083491) list_medium_line_right_iconx2_t1

0xdf5f,	// (0x0008336c) list_medium_line_t2_right_iconx2_g1

0xde25,	// (0x00083232) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x0008518d) list_medium_line_t2_right_iconx2_g

0x11ef,	// (0x000765fc) list_medium_line_t2_right_iconx2_t1

0x11ff,	// (0x0007660c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x00085192) list_medium_line_t2_right_iconx2_t

0xe092,	// (0x0008349f) list_medium_line_x4_t4_t1

0x1211,	// (0x0007661e) list_medium_line_x4_t4_t2

0x1221,	// (0x0007662e) list_medium_line_x4_t4_t3

0x1231,	// (0x0007663e) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x00085197) list_medium_line_x4_t4_t

0x9c25,	// (0x0007f032) tport_appsw_pane_ParamLimits

0x9c25,	// (0x0007f032) tport_appsw_pane

0x9c36,	// (0x0007f043) tport_contact_pane_ParamLimits

0x9c36,	// (0x0007f043) tport_contact_pane

0x9c4f,	// (0x0007f05c) tport_listscroll_pane_ParamLimits

0x9c4f,	// (0x0007f05c) tport_listscroll_pane

0x9c6a,	// (0x0007f077) cell_tport_appsw_pane_ParamLimits

0x9c6a,	// (0x0007f077) cell_tport_appsw_pane

0xcb0b,	// (0x00081f18) tport_appsw_pane_g1_ParamLimits

0xcb0b,	// (0x00081f18) tport_appsw_pane_g1

0xe0a0,	// (0x000834ad) tport_contact_pane_g1

0xd833,	// (0x00082c40) tport_contact_pane_t1

0xe0a9,	// (0x000834b6) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x000851a0) tport_contact_pane_t

0xe0b7,	// (0x000834c4) list_tport_pane

0xe0c0,	// (0x000834cd) scroll_pane_cp_030

0xe0d1,	// (0x000834de) cell_tport_appsw_pane_g1

0xe0e1,	// (0x000834ee) cell_tport_appsw_pane_t1

0xa99d,	// (0x0007fdaa) grid_highlight_pane_cp019

0x9caa,	// (0x0007f0b7) list_tport_double_graphic_pane_ParamLimits

0x9caa,	// (0x0007f0b7) list_tport_double_graphic_pane

0xaa15,	// (0x0007fe22) list_highlight_pane_cp023_ParamLimits

0xaa15,	// (0x0007fe22) list_highlight_pane_cp023

0x9cb7,	// (0x0007f0c4) list_tport_double_graphic_pane_g1_ParamLimits

0x9cb7,	// (0x0007f0c4) list_tport_double_graphic_pane_g1

0x9cc4,	// (0x0007f0d1) list_tport_double_graphic_pane_t1_ParamLimits

0x9cc4,	// (0x0007f0d1) list_tport_double_graphic_pane_t1

0x9cd9,	// (0x0007f0e6) list_tport_double_graphic_pane_t2_ParamLimits

0x9cd9,	// (0x0007f0e6) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x000851ac) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x000851ac) list_tport_double_graphic_pane_t

0xa99d,	// (0x0007fdaa) main_cale_note_pane

0x8087,	// (0x0007d494) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8087,	// (0x0007d494) cell_vitu2_function_top_wide_pane_cp01

0x978f,	// (0x0007eb9c) wait_bar_pane_cp05_ParamLimits

0xa99d,	// (0x0007fdaa) listscroll_cmail_pane

0xe0f7,	// (0x00083504) list_cmail_pane

0xcda9,	// (0x000821b6) list_cmail_body_pane

0x9cf5,	// (0x0007f102) list_single_cmail_header_caption_pane

0x9d0b,	// (0x0007f118) list_single_cmail_header_detail_pane_ParamLimits

0x9d0b,	// (0x0007f118) list_single_cmail_header_detail_pane

0x9d34,	// (0x0007f141) list_single_cmail_header_caption_pane_t1

0x1241,	// (0x0007664e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1241,	// (0x0007664e) list_single_cmail_header_detail_pane_g1

0xefed,	// (0x000843fa) list_single_cmail_header_detail_pane_g2_ParamLimits

0xefed,	// (0x000843fa) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x000851b1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x000851b1) list_single_cmail_header_detail_pane_g

0xe125,	// (0x00083532) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe125,	// (0x00083532) list_single_cmail_header_detail_pane_t1

0xe15f,	// (0x0008356c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe15f,	// (0x0008356c) list_single_cmail_header_editor_pane_bg

0xd9d4,	// (0x00082de1) list_cmail_body_pane_g1

0xe171,	// (0x0008357e) list_cmail_body_pane_t1

0xcb77,	// (0x00081f84) list_single_cmail_header_editor_pane_bg_g1

0x32ea,	// (0x000786f7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcb87,	// (0x00081f94) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcb7f,	// (0x00081f8c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcde8,	// (0x000821f5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcba7,	// (0x00081fb4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcb97,	// (0x00081fa4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcb9f,	// (0x00081fac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x32ca,	// (0x000786d7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9d44,	// (0x0007f151) calenote_gesture_pane_ParamLimits

0x9d44,	// (0x0007f151) calenote_gesture_pane

0x9d64,	// (0x0007f171) calenote_window_pane_ParamLimits

0x9d64,	// (0x0007f171) calenote_window_pane

0xe17f,	// (0x0008358c) popup_note_window_cp01

0x9d80,	// (0x0007f18d) calenote_swipe_1_pane_ParamLimits

0x9d80,	// (0x0007f18d) calenote_swipe_1_pane

0x9b69,	// (0x0007ef76) calenote_swipe_2_pane_ParamLimits

0x9b69,	// (0x0007ef76) calenote_swipe_2_pane

0xdd26,	// (0x00083133) calenote_swipe_1_pane_g1_ParamLimits

0xdd26,	// (0x00083133) calenote_swipe_1_pane_g1

0xdd33,	// (0x00083140) calenote_swipe_1_pane_g2_ParamLimits

0xdd33,	// (0x00083140) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000850db) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000850db) calenote_swipe_1_pane_g

0xe191,	// (0x0008359e) calenote_swipe_1_pane_t1_ParamLimits

0xe191,	// (0x0008359e) calenote_swipe_1_pane_t1

0xdd26,	// (0x00083133) calenote_swipe_2_pane_g1_ParamLimits

0xdd26,	// (0x00083133) calenote_swipe_2_pane_g1

0xe1b0,	// (0x000835bd) calenote_swipe_2_pane_g2_ParamLimits

0xe1b0,	// (0x000835bd) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x000851bd) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x000851bd) calenote_swipe_2_pane_g

0xe1bc,	// (0x000835c9) calenote_swipe_2_pane_t1_ParamLimits

0xe1bc,	// (0x000835c9) calenote_swipe_2_pane_t1

0xa99d,	// (0x0007fdaa) main_mup_navstr_pane

0x6d97,	// (0x0007c1a4) main_mup3_pane_t7_ParamLimits

0x6d97,	// (0x0007c1a4) main_mup3_pane_t7

0xec3c,	// (0x00084049) main_mp4_pane_g6_ParamLimits

0xec3c,	// (0x00084049) main_mp4_pane_g6

0xede0,	// (0x000841ed) main_image3_pane_t4_ParamLimits

0xede0,	// (0x000841ed) main_image3_pane_t4

0x9d95,	// (0x0007f1a2) popup_navstr_preview_pane_ParamLimits

0x9d95,	// (0x0007f1a2) popup_navstr_preview_pane

0x9da9,	// (0x0007f1b6) scroll_navstr_pane_ParamLimits

0x9da9,	// (0x0007f1b6) scroll_navstr_pane

0xa99d,	// (0x0007fdaa) bg_popup_preview_window_pane_cp04

0xe1e3,	// (0x000835f0) popup_navstr_preview_pane_t1

0x9dbd,	// (0x0007f1ca) scroll_navstr_pane_g1_ParamLimits

0x9dbd,	// (0x0007f1ca) scroll_navstr_pane_g1

0x9dd1,	// (0x0007f1de) scroll_navstr_pane_t1_ParamLimits

0x9dd1,	// (0x0007f1de) scroll_navstr_pane_t1

0xe188,	// (0x00083595) bg_button_pane_cp014

0xe188,	// (0x00083595) bg_button_pane_cp030

0x0e13,	// (0x00076220) list_double_fisheye_pane_g4_ParamLimits

0x0e13,	// (0x00076220) list_double_fisheye_pane_g4

0x0e1f,	// (0x0007622c) list_double_fisheye_pane_g5_ParamLimits

0x0e1f,	// (0x0007622c) list_double_fisheye_pane_g5

0xe0ff,	// (0x0008350c) sp_fs_scroll_pane_cp03

0xde65,	// (0x00083272) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde71,	// (0x0008327e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x000850f8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xde7d,	// (0x0008328a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9ceb,	// (0x0007f0f8) sp_fs_scroll_pane_cp02

0x2400,	// (0x0007780d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2400,	// (0x0007780d) popup_sp_fs_calendar_preview_list_single_pane

0xa99d,	// (0x0007fdaa) main_cam6_pano_pane

0xaa15,	// (0x0007fe22) main_mup3_pane_ParamLimits

0xa99d,	// (0x0007fdaa) main_phacti_pane

0x9662,	// (0x0007ea6f) bg_button_pane_cp11

0x967c,	// (0x0007ea89) main_mobtv_info_pane_g2_ParamLimits

0x967c,	// (0x0007ea89) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00085058) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00085058) main_mobtv_info_pane_g

0x9859,	// (0x0007ec66) sc_clock_pane_t5_ParamLimits

0x9859,	// (0x0007ec66) sc_clock_pane_t5

0x98e3,	// (0x0007ecf0) main_radioblah_pane_g1_ParamLimits

0xdc72,	// (0x0008307f) main_radioblah_pane_t3_ParamLimits

0xdc72,	// (0x0008307f) main_radioblah_pane_t3

0xdc8a,	// (0x00083097) main_radioblah_pane_t4_ParamLimits

0xdc8a,	// (0x00083097) main_radioblah_pane_t4

0x990b,	// (0x0007ed18) main_radioblah_text_pane_ParamLimits

0x990b,	// (0x0007ed18) main_radioblah_text_pane

0x991d,	// (0x0007ed2a) main_radioblah_info_pane_g1_ParamLimits

0x99b6,	// (0x0007edc3) main_radioblah_info_pane_t4_ParamLimits

0x99b6,	// (0x0007edc3) main_radioblah_info_pane_t4

0xaa15,	// (0x0007fe22) main_sp_fs_calendar_pane

0x9de8,	// (0x0007f1f5) main_phacti_pane_g1

0x9df0,	// (0x0007f1fd) phacti_note_pane_ParamLimits

0x9df0,	// (0x0007f1fd) phacti_note_pane

0xe1fa,	// (0x00083607) phacti_term_pane_ParamLimits

0xe1fa,	// (0x00083607) phacti_term_pane

0xe20f,	// (0x0008361c) phacti_note_pane_t1_ParamLimits

0xe20f,	// (0x0008361c) phacti_note_pane_t1

0xe226,	// (0x00083633) phacti_term_pane_g1

0xe22e,	// (0x0008363b) phacti_term_pane_t1_ParamLimits

0xe22e,	// (0x0008363b) phacti_term_pane_t1

0xe258,	// (0x00083665) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2c8e,	// (0x0007809b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x000851c7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe260,	// (0x0008366d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe260,	// (0x0008366d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe275,	// (0x00083682) aid_popup_sp_fs_bg_corner_pane

0xc08f,	// (0x0008149c) popup_sp_fs_calendar_preview_bg_pane_g1

0xa99d,	// (0x0007fdaa) popup_sp_fs_calendar_preview_bg_pane

0xe27d,	// (0x0008368a) popup_sp_fs_calendar_preview_list_pane

0xaa15,	// (0x0007fe22) bg_main_sp_fs_cale_pane_ParamLimits

0xaa15,	// (0x0007fe22) bg_main_sp_fs_cale_pane

0xe28e,	// (0x0008369b) listscroll_cale_mrui_pane_ParamLimits

0xe28e,	// (0x0008369b) listscroll_cale_mrui_pane

0xe2a2,	// (0x000836af) listscroll_sp_fs_schedule_track_pane

0xe2ab,	// (0x000836b8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe2ab,	// (0x000836b8) main_sp_fs_ctrlbar_pane_cp01

0xe2bc,	// (0x000836c9) main_sp_fs_ribbon_pane

0xf00f,	// (0x0008441c) popup_sp_fs_cale_preview_window

0x9e51,	// (0x0007f25e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9e51,	// (0x0007f25e) list_single_sp_fs_schedule_track_pane

0xaa15,	// (0x0007fe22) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaa15,	// (0x0007fe22) bg_sp_fs_highlight_list_pane_cp03

0x9e63,	// (0x0007f270) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9e63,	// (0x0007f270) list_single_sp_fs_schedule_track_pane_g1

0x9e6f,	// (0x0007f27c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9e6f,	// (0x0007f27c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x000851cc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x000851cc) list_single_sp_fs_schedule_track_pane_g

0x9e7b,	// (0x0007f288) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9e7b,	// (0x0007f288) list_single_sp_fs_schedule_track_pane_t1

0x9e95,	// (0x0007f2a2) sp_fs_schedule_track_pane_ParamLimits

0x9e95,	// (0x0007f2a2) sp_fs_schedule_track_pane

0xf021,	// (0x0008442e) sp_fs_schedule_track_pane_g1

0xf029,	// (0x00084436) sp_fs_schedule_track_pane_g2

0xf031,	// (0x0008443e) sp_fs_schedule_track_pane_g3

0xf039,	// (0x00084446) sp_fs_schedule_track_pane_g4

0xf041,	// (0x0008444e) sp_fs_schedule_track_pane_g5

0x0004,

0x0821,	// (0x00075c2e) sp_fs_schedule_track_pane_g

0xcb77,	// (0x00081f84) bg_sp_fs_schedule_viewer_highlight_g1

0x32ea,	// (0x000786f7) bg_sp_fs_schedule_viewer_highlight_g2

0xcb7f,	// (0x00081f8c) bg_sp_fs_schedule_viewer_highlight_g3

0xcb87,	// (0x00081f94) bg_sp_fs_schedule_viewer_highlight_g4

0xcde8,	// (0x000821f5) bg_sp_fs_schedule_viewer_highlight_g5

0xcb97,	// (0x00081fa4) bg_sp_fs_schedule_viewer_highlight_g6

0xcb9f,	// (0x00081fac) bg_sp_fs_schedule_viewer_highlight_g7

0xcba7,	// (0x00081fb4) bg_sp_fs_schedule_viewer_highlight_g8

0x32ca,	// (0x000786d7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc4,	// (0x000851d1) bg_sp_fs_schedule_viewer_highlight_g

0xa99d,	// (0x0007fdaa) bg_main_sp_fs_ribbon_pane

0x9ea6,	// (0x0007f2b3) main_sp_fs_ribbon_pane_g1

0xf049,	// (0x00084456) main_sp_fs_ribbon_pane_t1

0x9eaf,	// (0x0007f2bc) main_sp_fs_ribbon_pane_t2

0xf058,	// (0x00084465) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd7,	// (0x000851e4) main_sp_fs_ribbon_pane_t

0xf067,	// (0x00084474) main_sp_fs_ribbon_scheduler_pane

0xf06f,	// (0x0008447c) bg_main_sp_fs_ribbon_pane_g1

0xf078,	// (0x00084485) bg_main_sp_fs_ribbon_pane_g2

0xf081,	// (0x0008448e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0846,	// (0x00075c53) bg_main_sp_fs_ribbon_pane_g

0xf089,	// (0x00084496) main_sp_fs_ribbon_scheduler_pane_g1

0xf092,	// (0x0008449f) main_sp_fs_ribbon_scheduler_pane_g2

0xf09b,	// (0x000844a8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x084d,	// (0x00075c5a) main_sp_fs_ribbon_scheduler_pane_g

0xf0a4,	// (0x000844b1) list_cale_mrui_pane

0x9ebe,	// (0x0007f2cb) sp_fs_scroll_pane_cp07_ParamLimits

0x9ebe,	// (0x0007f2cb) sp_fs_scroll_pane_cp07

0x9ed2,	// (0x0007f2df) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9ed2,	// (0x0007f2df) bg_sp_fs_schedule_viewer_highlight

0xf0ad,	// (0x000844ba) list_single_sp_fs_schedule_track_pane_cp01

0xf0b5,	// (0x000844c2) list_sp_fs_schedule_track_pane

0xf0bd,	// (0x000844ca) sp_fs_scroll_pane_cp06_ParamLimits

0xf0bd,	// (0x000844ca) sp_fs_scroll_pane_cp06

0xc08f,	// (0x0008149c) bgmain_sp_fs_calendar_pane_g1

0x127f,	// (0x0007668c) list_single_cale_mrui_pane_ParamLimits

0x127f,	// (0x0007668c) list_single_cale_mrui_pane

0xe2c4,	// (0x000836d1) list_single_cale_mrui_row_pane_ParamLimits

0xe2c4,	// (0x000836d1) list_single_cale_mrui_row_pane

0xe2d1,	// (0x000836de) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe2d1,	// (0x000836de) list_single_cale_mrui_row_pane_g1

0xe316,	// (0x00083723) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe316,	// (0x00083723) list_single_cale_mrui_row_pane_t1

0x129f,	// (0x000766ac) list_single_cale_mrui_row_pane_t2_ParamLimits

0x129f,	// (0x000766ac) list_single_cale_mrui_row_pane_t2

0xe328,	// (0x00083735) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe328,	// (0x00083735) list_single_cale_mrui_row_pane_t3

0xe357,	// (0x00083764) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe357,	// (0x00083764) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde5,	// (0x000851f2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde5,	// (0x000851f2) list_single_cale_mrui_row_pane_t

0x1307,	// (0x00076714) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1307,	// (0x00076714) list_single_cmail_header_editor_pane_bg_cp01

0x132d,	// (0x0007673a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x132d,	// (0x0007673a) list_single_cmail_header_editor_pane_bg_cp02

0x9ee2,	// (0x0007f2ef) main_radioblah_text_pane_t1_ParamLimits

0x9ee2,	// (0x0007f2ef) main_radioblah_text_pane_t1

0xe386,	// (0x00083793) cam6_indi_pane_cp01

0xe38e,	// (0x0008379b) cam6_mode_pane_cp01

0xe396,	// (0x000837a3) cam6_pano_pane

0xe39f,	// (0x000837ac) cam6_zoom_pane_cp01

0xe3a7,	// (0x000837b4) cam6_pano_image_pane

0xe3b2,	// (0x000837bf) cam6_pano_pane_g1

0xd9d4,	// (0x00082de1) cam6_pano_pane_g2

0xe3bb,	// (0x000837c8) cam6_pano_pane_g3

0xe3c4,	// (0x000837d1) cam6_pano_pane_g4

0xc65d,	// (0x00081a6a) cam6_pano_pane_g5

0xe3cd,	// (0x000837da) cam6_pano_pane_g6

0xe3d7,	// (0x000837e4) cam6_pano_pane_g7

0xe3df,	// (0x000837ec) cam6_pano_pane_g8

0xe3e8,	// (0x000837f5) cam6_pano_pane_g9

0x0008,

0xfdee,	// (0x000851fb) cam6_pano_pane_g

0xa99d,	// (0x0007fdaa) main_browser_tag_pane

0xe1db,	// (0x000835e8) grid_navstr_albumart_pane

0xe3f3,	// (0x00083800) cell_navstr_albumart_pane_ParamLimits

0xe3f3,	// (0x00083800) cell_navstr_albumart_pane

0xe416,	// (0x00083823) cell_navstr_albumart_pane_g1

0xba13,	// (0x00080e20) cell_navstr_albumart_pane_g2

0xba23,	// (0x00080e30) cell_navstr_albumart_pane_g3

0xba1b,	// (0x00080e28) cell_navstr_albumart_pane_g4

0x0003,

0xfe01,	// (0x0008520e) cell_navstr_albumart_pane_g

0x9efc,	// (0x0007f309) bt_list_pane_ParamLimits

0x9efc,	// (0x0007f309) bt_list_pane

0x9f10,	// (0x0007f31d) bt_list_pane_t1

0x9f1f,	// (0x0007f32c) bt_list_pane_t2

0x0001,

0xfe0a,	// (0x00085217) bt_list_pane_t

0xa99d,	// (0x0007fdaa) main_cale_prevew_pane

0x9f2e,	// (0x0007f33b) popup_cale_preview_window_ParamLimits

0x9f2e,	// (0x0007f33b) popup_cale_preview_window

0xaa15,	// (0x0007fe22) bg_popup_preview_window_pane_cp05_ParamLimits

0xaa15,	// (0x0007fe22) bg_popup_preview_window_pane_cp05

0xe41e,	// (0x0008382b) list_cale_preview_pane_ParamLimits

0xe41e,	// (0x0008382b) list_cale_preview_pane

0x9f49,	// (0x0007f356) list_double_cale_preview_pane_ParamLimits

0x9f49,	// (0x0007f356) list_double_cale_preview_pane

0x9f5b,	// (0x0007f368) list_single_cale_preview_pane_ParamLimits

0x9f5b,	// (0x0007f368) list_single_cale_preview_pane

0x9f71,	// (0x0007f37e) list_single_cale_preview_pane_g1

0x9f79,	// (0x0007f386) list_single_cale_preview_pane_t1_ParamLimits

0x9f79,	// (0x0007f386) list_single_cale_preview_pane_t1

0x9f8e,	// (0x0007f39b) list_double_cale_preview_pane_g1

0x9f96,	// (0x0007f3a3) list_double_cale_preview_pane_t1_ParamLimits

0x9f96,	// (0x0007f3a3) list_double_cale_preview_pane_t1

0x9fab,	// (0x0007f3b8) list_double_cale_preview_pane_t2_ParamLimits

0x9fab,	// (0x0007f3b8) list_double_cale_preview_pane_t2

0x0001,

0xfe0f,	// (0x0008521c) list_double_cale_preview_pane_t_ParamLimits

0xfe0f,	// (0x0008521c) list_double_cale_preview_pane_t

0xa99d,	// (0x0007fdaa) main_ezdial_pane

0xaa15,	// (0x0007fe22) main_sp_fs_email_pane_ParamLimits

0x9b83,	// (0x0007ef90) cmail_ddmenu_btn01_pane_ParamLimits

0x9b83,	// (0x0007ef90) cmail_ddmenu_btn01_pane

0x9b96,	// (0x0007efa3) cmail_ddmenu_btn02_pane_ParamLimits

0x9b96,	// (0x0007efa3) cmail_ddmenu_btn02_pane

0x9bb9,	// (0x0007efc6) cmail_ddmenu_btn03_pane_ParamLimits

0x9bb9,	// (0x0007efc6) cmail_ddmenu_btn03_pane

0x0e8f,	// (0x0007629c) main_sp_fs_ctrlbar_pane_ParamLimits

0x0eb3,	// (0x000762c0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcda9,	// (0x000821b6) list_cmail_body_pane_ParamLimits

0xe10f,	// (0x0008351c) bg_button_pane_cp12

0xe118,	// (0x00083525) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe118,	// (0x00083525) list_single_cmail_header_detail_pane_g3

0x1259,	// (0x00076666) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1259,	// (0x00076666) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x000851b8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x000851b8) list_single_cmail_header_detail_pane_t

0xe243,	// (0x00083650) phacti_term_pane_t2_ParamLimits

0xe243,	// (0x00083650) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x000851c2) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x000851c2) phacti_term_pane_t

0xe42a,	// (0x00083837) aid_size_list_single_double

0x9fc3,	// (0x0007f3d0) popup_ezdial_listscroll_window

0x9fdf,	// (0x0007f3ec) popup_number_entry_window_cp01

0x4725,	// (0x00079b32) bg_popup_call_pane_cp09

0xe436,	// (0x00083843) ezdial_list_pane

0xe43e,	// (0x0008384b) scroll_pane_cp23

0xbbf6,	// (0x00081003) bg_button_pane_cp028_ParamLimits

0xbbf6,	// (0x00081003) bg_button_pane_cp028

0x9fed,	// (0x0007f3fa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9fed,	// (0x0007f3fa) cmail_ddmenu_btn01_pane_g1

0x9ffc,	// (0x0007f409) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9ffc,	// (0x0007f409) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe14,	// (0x00085221) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe14,	// (0x00085221) cmail_ddmenu_btn01_pane_g

0xe446,	// (0x00083853) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe446,	// (0x00083853) cmail_ddmenu_btn01_pane_t1

0xbbf6,	// (0x00081003) bg_button_pane_cp029_ParamLimits

0xbbf6,	// (0x00081003) bg_button_pane_cp029

0xa00c,	// (0x0007f419) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa00c,	// (0x0007f419) cmail_ddmenu_btn02_pane_g1

0xa027,	// (0x0007f434) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa027,	// (0x0007f434) cmail_ddmenu_btn02_pane_t1

0xaa15,	// (0x0007fe22) bg_button_pane_cp031_ParamLimits

0xaa15,	// (0x0007fe22) bg_button_pane_cp031

0xa00c,	// (0x0007f419) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa00c,	// (0x0007f419) cmail_ddmenu_btn03_pane_g1

0xa027,	// (0x0007f434) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa027,	// (0x0007f434) cmail_ddmenu_btn03_pane_t1

0x790b,	// (0x0007cd18) cell_dialer2_keypad_pane_t1_ParamLimits

0x7925,	// (0x0007cd32) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7925,	// (0x0007cd32) cell_dialer2_keypad_pane_t1_copy1

0x94c9,	// (0x0007e8d6) ncimui_group_button_pane

0xaa15,	// (0x0007fe22) main_sp_fs_calendar_pane_ParamLimits

0x9cf5,	// (0x0007f102) list_single_cmail_header_caption_pane_ParamLimits

0xe285,	// (0x00083692) aid_recal_txt_sm_pane

0xa99d,	// (0x0007fdaa) mian_recal_day_pane

0xf00f,	// (0x0008441c) popup_sp_fs_cale_preview_window_ParamLimits

0xa99d,	// (0x0007fdaa) list_recal_day_pane

0xe475,	// (0x00083882) list_single_recal_day_pane_ParamLimits

0xe475,	// (0x00083882) list_single_recal_day_pane

0xe487,	// (0x00083894) list_single_recal_day_pane_g1_ParamLimits

0xe487,	// (0x00083894) list_single_recal_day_pane_g1

0xe493,	// (0x000838a0) list_single_recal_day_pane_g2_ParamLimits

0xe493,	// (0x000838a0) list_single_recal_day_pane_g2

0xe4a3,	// (0x000838b0) list_single_recal_day_pane_g3_ParamLimits

0xe4a3,	// (0x000838b0) list_single_recal_day_pane_g3

0xa04e,	// (0x0007f45b) list_single_recal_day_pane_g4_ParamLimits

0xa04e,	// (0x0007f45b) list_single_recal_day_pane_g4

0xe4af,	// (0x000838bc) list_single_recal_day_pane_g5_ParamLimits

0xe4af,	// (0x000838bc) list_single_recal_day_pane_g5

0xe4bf,	// (0x000838cc) list_single_recal_day_pane_g6_ParamLimits

0xe4bf,	// (0x000838cc) list_single_recal_day_pane_g6

0x0004,

0xfe23,	// (0x00085230) list_single_recal_day_pane_g_ParamLimits

0xfe23,	// (0x00085230) list_single_recal_day_pane_g

0xe4d6,	// (0x000838e3) list_single_recal_day_pane_t1

0xe4e8,	// (0x000838f5) list_single_recal_day_pane_t2

0x0001,

0xfe2e,	// (0x0008523b) list_single_recal_day_pane_t

0xa06e,	// (0x0007f47b) ncimui_query_button_pane_ParamLimits

0xa06e,	// (0x0007f47b) ncimui_query_button_pane

0xa07e,	// (0x0007f48b) ncimui_query_button_pane_t1_ParamLimits

0xa07e,	// (0x0007f48b) ncimui_query_button_pane_t1

0xe4fd,	// (0x0008390a) ncimui_query_button_pane_t2_ParamLimits

0xe4fd,	// (0x0008390a) ncimui_query_button_pane_t2

0x0001,

0xfe33,	// (0x00085240) ncimui_query_button_pane_t_ParamLimits

0xfe33,	// (0x00085240) ncimui_query_button_pane_t

0xa091,	// (0x0007f49e) query_button_pane_ParamLimits

0xa091,	// (0x0007f49e) query_button_pane

0xa99d,	// (0x0007fdaa) bg_button_pane_cp0028

0xe510,	// (0x0008391d) query_button_pane_t1

0x59e4,	// (0x0007adf1) main_tport_pane_ParamLimits

0x9be2,	// (0x0007efef) bg_popup_window_pane_cp01_ParamLimits

0x9be2,	// (0x0007efef) bg_popup_window_pane_cp01

0x9bfc,	// (0x0007f009) heading_pane_cp08_ParamLimits

0x9bfc,	// (0x0007f009) heading_pane_cp08

0x9c10,	// (0x0007f01d) heading_pane_cp07_ParamLimits

0x9c10,	// (0x0007f01d) heading_pane_cp07

0xe0d1,	// (0x000834de) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x000851a5) cell_tport_appsw_pane_g

0x0a9d,	// (0x00075eaa) input_candi_list_open_g1

0x3d9e,	// (0x000791ab) list_cale_time_pane_g6_ParamLimits

0x3d9e,	// (0x000791ab) list_cale_time_pane_g6

0x67b1,	// (0x0007bbbe) aid_size_touch_calib_1_ParamLimits

0x67b1,	// (0x0007bbbe) aid_size_touch_calib_1

0x67bd,	// (0x0007bbca) aid_size_touch_calib_2_ParamLimits

0x67bd,	// (0x0007bbca) aid_size_touch_calib_2

0x67d3,	// (0x0007bbe0) aid_size_touch_calib_3_ParamLimits

0x67d3,	// (0x0007bbe0) aid_size_touch_calib_3

0x67f1,	// (0x0007bbfe) aid_size_touch_calib_4_ParamLimits

0x67f1,	// (0x0007bbfe) aid_size_touch_calib_4

0x6807,	// (0x0007bc14) main_touch_calib_button_group_pane_ParamLimits

0x6807,	// (0x0007bc14) main_touch_calib_button_group_pane

0x681f,	// (0x0007bc2c) main_touch_calib_pane_g1_ParamLimits

0x682b,	// (0x0007bc38) main_touch_calib_pane_g2_ParamLimits

0x6837,	// (0x0007bc44) main_touch_calib_pane_g3_ParamLimits

0x6843,	// (0x0007bc50) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00084b6e) main_touch_calib_pane_g_ParamLimits

0x684f,	// (0x0007bc5c) main_touch_calib_pane_t1_ParamLimits

0x6869,	// (0x0007bc76) main_touch_calib_pane_t2_ParamLimits

0x6883,	// (0x0007bc90) main_touch_calib_pane_t3_ParamLimits

0x6897,	// (0x0007bca4) main_touch_calib_pane_t4_ParamLimits

0x68ab,	// (0x0007bcb8) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00084b77) main_touch_calib_pane_t_ParamLimits

0xc433,	// (0x00081840) list_single_fp_cale_pane_g3_ParamLimits

0xc433,	// (0x00081840) list_single_fp_cale_pane_g3

0xaa15,	// (0x0007fe22) bg_button_pane_cp012_ParamLimits

0xaa15,	// (0x0007fe22) bg_vkb2_func_pane_cp03_ParamLimits

0x8857,	// (0x0007dc64) cell_vitu2_function_top_pane_g1_ParamLimits

0xaa15,	// (0x0007fe22) bg_vkb2_func_pane_cp04_ParamLimits

0x9457,	// (0x0007e864) main_ncimui_button_group_pane_ParamLimits

0x9457,	// (0x0007e864) main_ncimui_button_group_pane

0x94b7,	// (0x0007e8c4) main_ncimui_pane_t3_ParamLimits

0x94b7,	// (0x0007e8c4) main_ncimui_pane_t3

0xe1f1,	// (0x000835fe) phacti_button_group_pane

0xe42a,	// (0x00083837) aid_size_list_single_double_ParamLimits

0x9fc3,	// (0x0007f3d0) popup_ezdial_listscroll_window_ParamLimits

0x9fdf,	// (0x0007f3ec) popup_number_entry_window_cp01_ParamLimits

0xa0a4,	// (0x0007f4b1) phacti_button_pane_ParamLimits

0xa0a4,	// (0x0007f4b1) phacti_button_pane

0xa99d,	// (0x0007fdaa) bg_button_pane_cp14

0xe51e,	// (0x0008392b) phacti_button_pane_t1

0xa0b5,	// (0x0007f4c2) main_touch_calib_button_pane_ParamLimits

0xa0b5,	// (0x0007f4c2) main_touch_calib_button_pane

0x2138,	// (0x00077545) bg_button_pane_cp18_ParamLimits

0x2138,	// (0x00077545) bg_button_pane_cp18

0xe52c,	// (0x00083939) main_touch_calib_button_pane_t1_ParamLimits

0xe52c,	// (0x00083939) main_touch_calib_button_pane_t1

0xe542,	// (0x0008394f) main_touch_calib_button_pane_t2_ParamLimits

0xe542,	// (0x0008394f) main_touch_calib_button_pane_t2

0x0001,

0xfe38,	// (0x00085245) main_touch_calib_button_pane_t_ParamLimits

0xfe38,	// (0x00085245) main_touch_calib_button_pane_t

0xa99d,	// (0x0007fdaa) cell_ncimui_button_pane

0xa99d,	// (0x0007fdaa) bg_button_pane_cp032

0xe560,	// (0x0008396d) cell_ncimui_button_pane_t1

0xedc0,	// (0x000841cd) image3_infobar_pane_ParamLimits

0xedc0,	// (0x000841cd) image3_infobar_pane

0x9885,	// (0x0007ec92) fs_bigclock_status_pane_ParamLimits

0x9885,	// (0x0007ec92) fs_bigclock_status_pane

0x9892,	// (0x0007ec9f) main_fs_bigclock_clock_pane_ParamLimits

0x9892,	// (0x0007ec9f) main_fs_bigclock_clock_pane

0x98a6,	// (0x0007ecb3) main_fs_bigclock_indi_pane_ParamLimits

0x98a6,	// (0x0007ecb3) main_fs_bigclock_indi_pane

0x98bf,	// (0x0007eccc) main_fs_bigclock_swipe_pane_ParamLimits

0x98bf,	// (0x0007eccc) main_fs_bigclock_swipe_pane

0xa99d,	// (0x0007fdaa) main_fs_clock_dumped_data

0xdae1,	// (0x00082eee) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdae1,	// (0x00082eee) list_single_fs_bigclock_indicator_pane_g1

0xdb07,	// (0x00082f14) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb07,	// (0x00082f14) list_single_fs_bigclock_indicator_pane_g2

0xdb21,	// (0x00082f2e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb21,	// (0x00082f2e) list_single_fs_bigclock_indicator_pane_g3

0xdb3b,	// (0x00082f48) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb3b,	// (0x00082f48) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x0008508c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x0008508c) list_single_fs_bigclock_indicator_pane_g

0xdb64,	// (0x00082f71) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb64,	// (0x00082f71) list_single_fs_bigclock_indicator_pane_t1

0xdb8c,	// (0x00082f99) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdb8c,	// (0x00082f99) list_single_fs_bigclock_indicator_pane_t2

0xdbb4,	// (0x00082fc1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdbb4,	// (0x00082fc1) list_single_fs_bigclock_indicator_pane_t3

0xdbdc,	// (0x00082fe9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdbdc,	// (0x00082fe9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00085097) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00085097) list_single_fs_bigclock_indicator_pane_t

0xe56e,	// (0x0008397b) image3_infobar_fav_pane_ParamLimits

0xe56e,	// (0x0008397b) image3_infobar_fav_pane

0xe57e,	// (0x0008398b) image3_infobar_loc_pane_ParamLimits

0xe57e,	// (0x0008398b) image3_infobar_loc_pane

0xe592,	// (0x0008399f) image3_infobar_time_pane_ParamLimits

0xe592,	// (0x0008399f) image3_infobar_time_pane

0xc08f,	// (0x0008149c) image3_infobar_time_pane_g1

0xe5a2,	// (0x000839af) image3_infobar_time_pane_t1

0xc08f,	// (0x0008149c) image3_infobar_loc_pane_g1

0xe5b0,	// (0x000839bd) image3_infobar_loc_pane_g2

0x0001,

0xfe3d,	// (0x0008524a) image3_infobar_loc_pane_g

0xe5b8,	// (0x000839c5) image3_infobar_loc_pane_t1

0xc08f,	// (0x0008149c) image3_infobar_fav_pane_g1

0xe5c6,	// (0x000839d3) image3_infobar_fav_pane_g2

0x0001,

0xfe42,	// (0x0008524f) image3_infobar_fav_pane_g

0xe5ce,	// (0x000839db) fs_bigclock_status_battery_pane

0xe5d7,	// (0x000839e4) fs_bigclock_status_signal_pane

0xe5e0,	// (0x000839ed) fs_bigclock_status_title_pane

0xe5e9,	// (0x000839f6) fs_bigclock_status_signal_pane_g1

0xe5f2,	// (0x000839ff) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe47,	// (0x00085254) fs_bigclock_status_signal_pane_g

0xe5fa,	// (0x00083a07) fs_bigclock_status_battery_pane_g1

0xe603,	// (0x00083a10) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4c,	// (0x00085259) fs_bigclock_status_battery_pane_g

0xe60b,	// (0x00083a18) fs_bigclock_status_title_pane_t1

0xc08f,	// (0x0008149c) main_fs_bigclock_clock_pane_g1

0xe619,	// (0x00083a26) main_fs_bigclock_clock_pane_g2

0xe619,	// (0x00083a26) main_fs_bigclock_clock_pane_g3

0xe619,	// (0x00083a26) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe51,	// (0x0008525e) main_fs_bigclock_clock_pane_g

0xe621,	// (0x00083a2e) main_fs_bigclock_clock_pane_t1

0xe62f,	// (0x00083a3c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5a,	// (0x00085267) main_fs_bigclock_clock_pane_t

0xe63e,	// (0x00083a4b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe63e,	// (0x00083a4b) list_single_fs_bigclock_indicator_pane

0xa0ca,	// (0x0007f4d7) list_single_fs_bigclock_pane_ParamLimits

0xa0ca,	// (0x0007f4d7) list_single_fs_bigclock_pane

0xe658,	// (0x00083a65) main_fs_bigclock_indicator_pane_t1

0xe667,	// (0x00083a74) list_single_fs_bigclock_pane_g1

0xe66f,	// (0x00083a7c) list_single_fs_bigclock_pane_t1

0xc08f,	// (0x0008149c) main_fs_bigclock_swipe_pane_g1

0xe6b2,	// (0x00083abf) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6b,	// (0x00085278) main_fs_bigclock_swipe_pane_g

0xe6ba,	// (0x00083ac7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe6ba,	// (0x00083ac7) main_fs_bigclock_swipe_pane_t1

0x408a,	// (0x00079497) call_type_pane_ParamLimits

0xa99d,	// (0x0007fdaa) main_btmg_pane

0xe2fd,	// (0x0008370a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2fd,	// (0x0008370a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdde,	// (0x000851eb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdde,	// (0x000851eb) list_single_cale_mrui_row_pane_g

0xe465,	// (0x00083872) list_recal_vselct_arw_lo_pane

0xe46d,	// (0x0008387a) list_recal_vselct_arw_up_pane

0xf0cf,	// (0x000844dc) list_recal_vselct_pane

0xa12d,	// (0x0007f53a) btmg_button_pane

0xa137,	// (0x0007f544) main_btmg_pane_g1

0xa99d,	// (0x0007fdaa) bg_button_pane_cp044

0xe6d7,	// (0x00083ae4) btmg_button_pane_t1

0xbbee,	// (0x00080ffb) aid_listscroll_gen

0xaa15,	// (0x0007fe22) main_cntbar_detail_pane

0xe0ef,	// (0x000834fc) list_cmail_folder_pane

0xe0ff,	// (0x0008350c) sp_fs_scroll_pane_cp03_ParamLimits

0x134d,	// (0x0007675a) list_single_fs_dyc_pane_cp01_ParamLimits

0x134d,	// (0x0007675a) list_single_fs_dyc_pane_cp01

0xe6e5,	// (0x00083af2) aid_size_cmail_indent

0xe6ee,	// (0x00083afb) list_single_dyc_row_pane_cp01

0xa16d,	// (0x0007f57a) cntbar_detail_list_pane_ParamLimits

0xa16d,	// (0x0007f57a) cntbar_detail_list_pane

0xa1b9,	// (0x0007f5c6) main_cntbar_detail_cont_pane_ParamLimits

0xa1b9,	// (0x0007f5c6) main_cntbar_detail_cont_pane

0x3f70,	// (0x0007937d) scroll_pane_cp032_ParamLimits

0x3f70,	// (0x0007937d) scroll_pane_cp032

0xa1cd,	// (0x0007f5da) cntbar_detail_list_event_pane_ParamLimits

0xa1cd,	// (0x0007f5da) cntbar_detail_list_event_pane

0xa17d,	// (0x0007f58a) cntbar_detail_list_shct_pane

0x3340,	// (0x0007874d) aid_list_gen

0xe6f7,	// (0x00083b04) aid_scroll

0xe700,	// (0x00083b0d) aid_size_touch_scroll_bar

0x1362,	// (0x0007676f) aid_list_double

0xe709,	// (0x00083b16) aid_list_single

0xa1dd,	// (0x0007f5ea) aid_list_single_lg

0xe712,	// (0x00083b1f) aid_list_z_g_a_sm

0xeff9,	// (0x00084406) aid_list_z_g_d

0xe71a,	// (0x00083b27) aid_txt_z_prm

0x136b,	// (0x00076778) aid_txt_z_prm_cp01

0x1379,	// (0x00076786) aid_txt_z_sec

0xa1e6,	// (0x0007f5f3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa1e6,	// (0x0007f5f3) main_cntbar_detail_cont_pane_g1

0xa1fa,	// (0x0007f607) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa1fa,	// (0x0007f607) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe70,	// (0x0008527d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe70,	// (0x0008527d) main_cntbar_detail_cont_pane_g

0xe728,	// (0x00083b35) main_cntbar_detail_cont_pane_t1

0xe736,	// (0x00083b43) main_cntbar_detail_cont_pane_t2

0xe744,	// (0x00083b51) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe75,	// (0x00085282) main_cntbar_detail_cont_pane_t

0xa20a,	// (0x0007f617) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa20a,	// (0x0007f617) cell_cntbar_detail_list_shct_pane

0xe752,	// (0x00083b5f) cntbar_detail_list_shct_pane_g1

0xe75b,	// (0x00083b68) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7c,	// (0x00085289) cntbar_detail_list_shct_pane_g

0xa21e,	// (0x0007f62b) cntbar_detail_list_event_pane_g1_ParamLimits

0xa21e,	// (0x0007f62b) cntbar_detail_list_event_pane_g1

0xa22a,	// (0x0007f637) cntbar_detail_list_event_pane_g2_ParamLimits

0xa22a,	// (0x0007f637) cntbar_detail_list_event_pane_g2

0x0005,

0xfe81,	// (0x0008528e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe81,	// (0x0008528e) cntbar_detail_list_event_pane_g

0xa296,	// (0x0007f6a3) cntbar_detail_list_event_pane_t1_ParamLimits

0xa296,	// (0x0007f6a3) cntbar_detail_list_event_pane_t1

0xa2ab,	// (0x0007f6b8) cntbar_detail_list_event_pane_t2_ParamLimits

0xa2ab,	// (0x0007f6b8) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8e,	// (0x0008529b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8e,	// (0x0008529b) cntbar_detail_list_event_pane_t

0xc08f,	// (0x0008149c) cell_cntbar_detail_list_shct_pane_g1

0x46a7,	// (0x00079ab4) navi_pane_mv_g3

0xaa15,	// (0x0007fe22) main_cntbar_detail_pane_ParamLimits

0xa99d,	// (0x0007fdaa) main_notif_wgt_pane

0xebd6,	// (0x00083fe3) aid_tch_main_mp4_pane_g4

0xedb8,	// (0x000841c5) popup_slider_window_cp02

0xe45b,	// (0x00083868) list_recal_day_event_pane

0xa141,	// (0x0007f54e) cntbar_detail_btn_pane_ParamLimits

0xa141,	// (0x0007f54e) cntbar_detail_btn_pane

0xa157,	// (0x0007f564) cntbar_detail_btn_pane_cp01_ParamLimits

0xa157,	// (0x0007f564) cntbar_detail_btn_pane_cp01

0xa17d,	// (0x0007f58a) cntbar_detail_list_shct_pane_ParamLimits

0xa18d,	// (0x0007f59a) cntbar_detail_pane_g1_ParamLimits

0xa18d,	// (0x0007f59a) cntbar_detail_pane_g1

0xa19d,	// (0x0007f5aa) cntbar_detail_pane_t1_ParamLimits

0xa19d,	// (0x0007f5aa) cntbar_detail_pane_t1

0xa236,	// (0x0007f643) cntbar_detail_list_event_pane_g3_ParamLimits

0xa236,	// (0x0007f643) cntbar_detail_list_event_pane_g3

0xa24e,	// (0x0007f65b) cntbar_detail_list_event_pane_g4_ParamLimits

0xa24e,	// (0x0007f65b) cntbar_detail_list_event_pane_g4

0xa266,	// (0x0007f673) cntbar_detail_list_event_pane_g5_ParamLimits

0xa266,	// (0x0007f673) cntbar_detail_list_event_pane_g5

0xa27e,	// (0x0007f68b) cntbar_detail_list_event_pane_g6_ParamLimits

0xa27e,	// (0x0007f68b) cntbar_detail_list_event_pane_g6

0xa2c0,	// (0x0007f6cd) cntbar_detail_list_event_pane_t3_ParamLimits

0xa2c0,	// (0x0007f6cd) cntbar_detail_list_event_pane_t3

0xa2d2,	// (0x0007f6df) popup_notif_wgt_window_ParamLimits

0xa2d2,	// (0x0007f6df) popup_notif_wgt_window

0xa2eb,	// (0x0007f6f8) popup_submenu_window_cp01_ParamLimits

0xa2eb,	// (0x0007f6f8) popup_submenu_window_cp01

0x4725,	// (0x00079b32) bg_popup_window_pane_cp10

0xe764,	// (0x00083b71) listscroll_notif_wgt_pane

0xe775,	// (0x00083b82) list_notif_wgt_window

0xe77e,	// (0x00083b8b) scroll_pane_cp033

0xa06e,	// (0x0007f47b) list_notif_wgt_row_pane_ParamLimits

0xa06e,	// (0x0007f47b) list_notif_wgt_row_pane

0xe787,	// (0x00083b94) aid_size_list_notif_wgt_del

0xe794,	// (0x00083ba1) list_notif_wgt_row_pane_g1

0xe7a0,	// (0x00083bad) list_notif_wgt_row_pane_g2

0xe7ac,	// (0x00083bb9) list_notif_wgt_row_pane_g3

0x0002,

0xfe95,	// (0x000852a2) list_notif_wgt_row_pane_g

0xe7b9,	// (0x00083bc6) list_notif_wgt_row_pane_t1

0xe7ce,	// (0x00083bdb) list_notif_wgt_row_pane_t2

0xe7e0,	// (0x00083bed) list_notif_wgt_row_pane_t3

0x0002,

0xfe9c,	// (0x000852a9) list_notif_wgt_row_pane_t

0xce08,	// (0x00082215) list_recal_day_event_pane_g1

0xe7f2,	// (0x00083bff) list_recal_day_event_pane_t1

0xa99d,	// (0x0007fdaa) bg_button_pane_cp045

0xe801,	// (0x00083c0e) cntbar_detail_btn_pane_t1

0xbbf6,	// (0x00081003) main_callh_pane_ParamLimits

0xbbf6,	// (0x00081003) main_callh_pane

0xa99d,	// (0x0007fdaa) main_coverflow0_pane

0xa99d,	// (0x0007fdaa) main_wgtman_pane

0x98cd,	// (0x0007ecda) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x98cd,	// (0x0007ecda) main_fs_bigclock_unlock_btn_pane

0xe0c9,	// (0x000834d6) bg_button_pane_cp16

0xe0d9,	// (0x000834e6) cell_tport_appsw_pane_g3

0xa2fd,	// (0x0007f70a) cf0_flow_pane_ParamLimits

0xa2fd,	// (0x0007f70a) cf0_flow_pane

0xe80f,	// (0x00083c1c) listscroll_cf0_pane

0xe81a,	// (0x00083c27) main_cf0_pane_g1

0xa312,	// (0x0007f71f) main_cf0_pane_t1_ParamLimits

0xa312,	// (0x0007f71f) main_cf0_pane_t1

0xa329,	// (0x0007f736) main_cf0_pane_t2_ParamLimits

0xa329,	// (0x0007f736) main_cf0_pane_t2

0x0001,

0xfea3,	// (0x000852b0) main_cf0_pane_t_ParamLimits

0xfea3,	// (0x000852b0) main_cf0_pane_t

0xe824,	// (0x00083c31) scroll_pane_cp11

0xa340,	// (0x0007f74d) cf0_flow_pane_g1

0xa348,	// (0x0007f755) cf0_flow_pane_g2

0x0001,

0xfea8,	// (0x000852b5) cf0_flow_pane_g

0xa350,	// (0x0007f75d) cf0_flow_pane_t1

0xa99d,	// (0x0007fdaa) main_call6_pane

0xa99d,	// (0x0007fdaa) main_calllock_pane

0xa35e,	// (0x0007f76b) call6_btn_grp_pane_ParamLimits

0xa35e,	// (0x0007f76b) call6_btn_grp_pane

0xa378,	// (0x0007f785) call6_pane_g1_ParamLimits

0xa378,	// (0x0007f785) call6_pane_g1

0xa38d,	// (0x0007f79a) popup_call6_1st_window_ParamLimits

0xa38d,	// (0x0007f79a) popup_call6_1st_window

0xa39e,	// (0x0007f7ab) popup_call6_2nd_window_ParamLimits

0xa39e,	// (0x0007f7ab) popup_call6_2nd_window

0xa3af,	// (0x0007f7bc) cell_call6_btn_pane_ParamLimits

0xa3af,	// (0x0007f7bc) cell_call6_btn_pane

0x4725,	// (0x00079b32) bg_popup_call2_in_pane_cp03

0xe82f,	// (0x00083c3c) popup_call6_1st_window_g1

0xe837,	// (0x00083c44) popup_call6_1st_window_g2

0xe83f,	// (0x00083c4c) popup_call6_1st_window_g3

0x0002,

0xfead,	// (0x000852ba) popup_call6_1st_window_g

0xe847,	// (0x00083c54) popup_call6_1st_window_t1

0xe856,	// (0x00083c63) popup_call6_1st_window_t2

0xe866,	// (0x00083c73) popup_call6_1st_window_t3

0x0002,

0xfeb4,	// (0x000852c1) popup_call6_1st_window_t

0x4725,	// (0x00079b32) bg_popup_call2_in_pane_cp04

0xe82f,	// (0x00083c3c) popup_call6_2nd_window_g1

0xe837,	// (0x00083c44) popup_call6_2nd_window_g2

0xe83f,	// (0x00083c4c) popup_call6_2nd_window_g3

0x0002,

0xfead,	// (0x000852ba) popup_call6_2nd_window_g

0xe847,	// (0x00083c54) popup_call6_2nd_window_t1

0xa99d,	// (0x0007fdaa) bg_button_pane_cp15

0xe876,	// (0x00083c83) cell_call6_btn_pane_g1

0xe87f,	// (0x00083c8c) cell_call6_btn_pane_t1

0xa3c3,	// (0x0007f7d0) listscroll_wgtman_pane_ParamLimits

0xa3c3,	// (0x0007f7d0) listscroll_wgtman_pane

0xa3e6,	// (0x0007f7f3) wgtman_btn_pane_ParamLimits

0xa3e6,	// (0x0007f7f3) wgtman_btn_pane

0x42e4,	// (0x000796f1) aid_scroll_copy1

0xe88e,	// (0x00083c9b) list_wgtman_pane

0xa429,	// (0x0007f836) wgtman_btn_pane_g1_ParamLimits

0xa429,	// (0x0007f836) wgtman_btn_pane_g1

0xa455,	// (0x0007f862) wgtman_btn_pane_t1_ParamLimits

0xa455,	// (0x0007f862) wgtman_btn_pane_t1

0xe898,	// (0x00083ca5) wgtman_btn_pane_t2_ParamLimits

0xe898,	// (0x00083ca5) wgtman_btn_pane_t2

0x0001,

0xfebb,	// (0x000852c8) wgtman_btn_pane_t_ParamLimits

0xfebb,	// (0x000852c8) wgtman_btn_pane_t

0xa492,	// (0x0007f89f) listrow_wgtman_pane_ParamLimits

0xa492,	// (0x0007f89f) listrow_wgtman_pane

0xa4a4,	// (0x0007f8b1) listrow_wgtman_pane_g1

0xa4b1,	// (0x0007f8be) listrow_wgtman_pane_g2

0x0001,

0xfec0,	// (0x000852cd) listrow_wgtman_pane_g

0x1387,	// (0x00076794) listrow_wgtman_pane_t1

0x139f,	// (0x000767ac) listrow_wgtman_pane_t2

0x0001,

0xfec5,	// (0x000852d2) listrow_wgtman_pane_t

0x13c5,	// (0x000767d2) wait_bar_pane_cp09

0xe8af,	// (0x00083cbc) main_calllock_btn_pane

0xe8b9,	// (0x00083cc6) main_calllock_pane_g1

0xa99d,	// (0x0007fdaa) bg_button_pane_cp17

0xe8c5,	// (0x00083cd2) main_calllock_btn_pane_g1

0xe8ce,	// (0x00083cdb) main_calllock_btn_pane_t1

0xa99d,	// (0x0007fdaa) main_dialer3_pane

0xa99d,	// (0x0007fdaa) main_fmrd2_pane

0xc08f,	// (0x0008149c) main_fs_bigclock_unlock_btn_pane_g1

0xe8e5,	// (0x00083cf2) main_fs_bigclock_unlock_btn_pane_t1

0xa4cf,	// (0x0007f8dc) area_fmrd2_info_pane_ParamLimits

0xa4cf,	// (0x0007f8dc) area_fmrd2_info_pane

0xa4e0,	// (0x0007f8ed) area_fmrd2_visual_pane_ParamLimits

0xa4e0,	// (0x0007f8ed) area_fmrd2_visual_pane

0xa4ee,	// (0x0007f8fb) fmrd2_indi_pane_ParamLimits

0xa4ee,	// (0x0007f8fb) fmrd2_indi_pane

0xa4fb,	// (0x0007f908) area_fmrd2_visual_pane_g1

0xa503,	// (0x0007f910) area_fmrd2_visual_pane_t1

0xa513,	// (0x0007f920) area_fmrd2_visual_pane_t2

0xa523,	// (0x0007f930) area_fmrd2_visual_pane_t3

0x0002,

0xfecf,	// (0x000852dc) area_fmrd2_visual_pane_t

0xa533,	// (0x0007f940) area_fmrd2_info_pane_g1

0xa53b,	// (0x0007f948) area_fmrd2_info_pane_t1

0xa54b,	// (0x0007f958) area_fmrd2_info_pane_t2

0xa55b,	// (0x0007f968) area_fmrd2_info_pane_t3

0xa56b,	// (0x0007f978) area_fmrd2_info_pane_t4

0x0003,

0xfed6,	// (0x000852e3) area_fmrd2_info_pane_t

0xa579,	// (0x0007f986) fmrd2_indi_pane_t1

0xa589,	// (0x0007f996) fmrd2_indi_pane_t2

0xa599,	// (0x0007f9a6) fmrd2_indi_pane_t3

0x0002,

0xfedf,	// (0x000852ec) fmrd2_indi_pane_t

0xdb4a,	// (0x00082f57) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb4a,	// (0x00082f57) list_single_fs_bigclock_indicator_pane_g5

0xdbf1,	// (0x00082ffe) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdbf1,	// (0x00082ffe) list_single_fs_bigclock_indicator_pane_t5

0x9e04,	// (0x0007f211) aid_cell_bcale_month_pane_ParamLimits

0x9e04,	// (0x0007f211) aid_cell_bcale_month_pane

0x9e1c,	// (0x0007f229) bcale_month_pane_ParamLimits

0x9e1c,	// (0x0007f229) bcale_month_pane

0x9e33,	// (0x0007f240) bcale_preview_pane_ParamLimits

0x9e33,	// (0x0007f240) bcale_preview_pane

0xe66f,	// (0x00083a7c) list_single_fs_bigclock_pane_t1_ParamLimits

0xe68e,	// (0x00083a9b) list_single_fs_bigclock_pane_t2_ParamLimits

0xe68e,	// (0x00083a9b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe66,	// (0x00085273) list_single_fs_bigclock_pane_t_ParamLimits

0xfe66,	// (0x00085273) list_single_fs_bigclock_pane_t

0xe8dd,	// (0x00083cea) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeca,	// (0x000852d7) main_fs_bigclock_unlock_btn_pane_g

0xa5a9,	// (0x0007f9b6) aid_dia3_key_size_ParamLimits

0xa5a9,	// (0x0007f9b6) aid_dia3_key_size

0xa5b8,	// (0x0007f9c5) aid_dia3_listrow_size_ParamLimits

0xa5b8,	// (0x0007f9c5) aid_dia3_listrow_size

0xa5cd,	// (0x0007f9da) dia3_keypad_fun_pane_ParamLimits

0xa5cd,	// (0x0007f9da) dia3_keypad_fun_pane

0xa5e9,	// (0x0007f9f6) dia3_keypad_num_pane_ParamLimits

0xa5e9,	// (0x0007f9f6) dia3_keypad_num_pane

0xa604,	// (0x0007fa11) dia3_listscroll_pane_ParamLimits

0xa604,	// (0x0007fa11) dia3_listscroll_pane

0xa617,	// (0x0007fa24) dia3_numentry_pane_ParamLimits

0xa617,	// (0x0007fa24) dia3_numentry_pane

0xe8f3,	// (0x00083d00) dia3_list_pane

0xe8fe,	// (0x00083d0b) scroll_pane_cp12

0xa99d,	// (0x0007fdaa) bg_dia3_numentry_pane

0xa62b,	// (0x0007fa38) dia3_numentry_pane_t1

0xa63a,	// (0x0007fa47) cell_dia3_key_num_pane

0xa642,	// (0x0007fa4f) cell_dia3_key0_fun_pane_ParamLimits

0xa642,	// (0x0007fa4f) cell_dia3_key0_fun_pane

0xa656,	// (0x0007fa63) cell_dia3_key1_fun_pane_ParamLimits

0xa656,	// (0x0007fa63) cell_dia3_key1_fun_pane

0xa66e,	// (0x0007fa7b) dia3_listrow_pane

0xd84e,	// (0x00082c5b) bg_dia3_numentry_pane_g1

0xa99d,	// (0x0007fdaa) bg_button_pane_cp21

0xe909,	// (0x00083d16) cell_dia3_key_num_pane_t1

0xe917,	// (0x00083d24) cell_dia3_key_num_pane_t2

0xe926,	// (0x00083d33) cell_dia3_key_num_pane_t3

0xe935,	// (0x00083d42) cell_dia3_key_num_pane_t4

0x0003,

0xfee6,	// (0x000852f3) cell_dia3_key_num_pane_t

0xa99d,	// (0x0007fdaa) bg_button_pane_cp19

0xa680,	// (0x0007fa8d) cell_dia3_key0_fun_pane_g1

0xa99d,	// (0x0007fdaa) bg_button_pane_cp20

0xa688,	// (0x0007fa95) cell_dia3_key1_fun_pane_g1

0xa690,	// (0x0007fa9d) area_left_week_number_pane

0xa69a,	// (0x0007faa7) area_top_day_name_pane

0xa6a6,	// (0x0007fab3) frame_month_view_pane

0xa6b0,	// (0x0007fabd) grid_month_view_pane

0xe944,	// (0x00083d51) cell_top_day_name_pane_ParamLimits

0xe944,	// (0x00083d51) cell_top_day_name_pane

0xa6ba,	// (0x0007fac7) cell_area_left_week_number_pane_ParamLimits

0xa6ba,	// (0x0007fac7) cell_area_left_week_number_pane

0xa6ce,	// (0x0007fadb) cell_month_view_pane_ParamLimits

0xa6ce,	// (0x0007fadb) cell_month_view_pane

0xe95e,	// (0x00083d6b) frm_month_g1

0xa6eb,	// (0x0007faf8) frm_month_g2

0xa6f5,	// (0x0007fb02) frm_month_g3

0xa6ff,	// (0x0007fb0c) frm_month_g4

0xa709,	// (0x0007fb16) frm_month_g5

0xa713,	// (0x0007fb20) frm_month_g6

0xa71d,	// (0x0007fb2a) frm_month_g7

0xe967,	// (0x00083d74) frm_month_g8

0xe970,	// (0x00083d7d) frm_month_g9

0xe979,	// (0x00083d86) frm_month_g10

0xe982,	// (0x00083d8f) frm_month_g11

0xe98b,	// (0x00083d98) frm_month_g12

0xe994,	// (0x00083da1) frm_month_g13

0xe99d,	// (0x00083daa) frm_month_g14

0xe9a8,	// (0x00083db5) frm_month_g15

0xe9b3,	// (0x00083dc0) frm_month_g16

0x000f,

0xfeef,	// (0x000852fc) frm_month_g

0xa727,	// (0x0007fb34) cell_top_day_name_pane_t1

0xa736,	// (0x0007fb43) cell_area_left_week_number_pane_g1

0xa73e,	// (0x0007fb4b) cell_area_left_week_number_pane_t1

0xc08f,	// (0x0008149c) cell_month_view_pane_g1

0xa74d,	// (0x0007fb5a) cell_month_view_pane_t1

0xa99d,	// (0x0007fdaa) main_fps_pane

0xde2d,	// (0x0008323a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde2d,	// (0x0008323a) cmail_ddmenu_btn02_pane_cp1

0xde49,	// (0x00083256) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde49,	// (0x00083256) cmail_ddmenu_btn02_pane_cp2

0xa01b,	// (0x0007f428) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa01b,	// (0x0007f428) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe19,	// (0x00085226) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe19,	// (0x00085226) cmail_ddmenu_btn02_pane_g

0xa03c,	// (0x0007f449) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa03c,	// (0x0007f449) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1e,	// (0x0008522b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1e,	// (0x0008522b) cmail_ddmenu_btn02_pane_t

0xa75c,	// (0x0007fb69) fps_text_pane_ParamLimits

0xa75c,	// (0x0007fb69) fps_text_pane

0xa773,	// (0x0007fb80) main_fps_pane_g1_ParamLimits

0xa773,	// (0x0007fb80) main_fps_pane_g1

0xa78d,	// (0x0007fb9a) wait_bar_pane_cp010_ParamLimits

0xa78d,	// (0x0007fb9a) wait_bar_pane_cp010

0xa79e,	// (0x0007fbab) fps_text_pane_t1_ParamLimits

0xa79e,	// (0x0007fbab) fps_text_pane_t1

0xcac8,	// (0x00081ed5) cam4_image_uncrop_pane_g1

0xcad1,	// (0x00081ede) cam4_image_uncrop_pane_g2

0x7db1,	// (0x0007d1be) cam4_image_uncrop_pane_g3

0x7dba,	// (0x0007d1c7) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00084d06) cam4_image_uncrop_pane_g

0xa66e,	// (0x0007fa7b) dia3_listrow_pane_ParamLimits

0xa99d,	// (0x0007fdaa) main_phob2_pane

0x9c7b,	// (0x0007f088) cell_tport_appsw_pane_cp02_ParamLimits

0x9c7b,	// (0x0007f088) cell_tport_appsw_pane_cp02

0x9c8f,	// (0x0007f09c) cell_tport_appsw_pane_cp03_ParamLimits

0x9c8f,	// (0x0007f09c) cell_tport_appsw_pane_cp03

0xa99d,	// (0x0007fdaa) phob2_contact_card_pane

0xa99d,	// (0x0007fdaa) phob2_listscroll_pane

0xe9be,	// (0x00083dcb) phob2_list_pane

0xe9c6,	// (0x00083dd3) scroll_pane_cp034

0xa7b6,	// (0x0007fbc3) phob2_cc_data_pane_ParamLimits

0xa7b6,	// (0x0007fbc3) phob2_cc_data_pane

0xa7d5,	// (0x0007fbe2) phob2_cc_listscroll_pane_ParamLimits

0xa7d5,	// (0x0007fbe2) phob2_cc_listscroll_pane

0xa7f3,	// (0x0007fc00) list_double_large_graphic_phob2_pane_ParamLimits

0xa7f3,	// (0x0007fc00) list_double_large_graphic_phob2_pane

0xa805,	// (0x0007fc12) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa805,	// (0x0007fc12) list_double_large_graphic_phob2_pane_g1

0x13d7,	// (0x000767e4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x13d7,	// (0x000767e4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff10,	// (0x0008531d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff10,	// (0x0008531d) list_double_large_graphic_phob2_pane_g

0x13e3,	// (0x000767f0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x13e3,	// (0x000767f0) list_double_large_graphic_phob2_pane_t1

0x13f8,	// (0x00076805) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x13f8,	// (0x00076805) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff15,	// (0x00085322) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff15,	// (0x00085322) list_double_large_graphic_phob2_pane_t

0xa99d,	// (0x0007fdaa) list_highlight_pane_cp024

0xe9ce,	// (0x00083ddb) phob2_cc_button_pane

0xa812,	// (0x0007fc1f) phob2_cc_data_pane_g1_ParamLimits

0xa812,	// (0x0007fc1f) phob2_cc_data_pane_g1

0xa827,	// (0x0007fc34) phob2_cc_data_pane_g2_ParamLimits

0xa827,	// (0x0007fc34) phob2_cc_data_pane_g2

0x0001,

0xff1a,	// (0x00085327) phob2_cc_data_pane_g_ParamLimits

0xff1a,	// (0x00085327) phob2_cc_data_pane_g

0xa839,	// (0x0007fc46) phob2_cc_data_pane_t1_ParamLimits

0xa839,	// (0x0007fc46) phob2_cc_data_pane_t1

0xa851,	// (0x0007fc5e) phob2_cc_data_pane_t2_ParamLimits

0xa851,	// (0x0007fc5e) phob2_cc_data_pane_t2

0xa869,	// (0x0007fc76) phob2_cc_data_pane_t3_ParamLimits

0xa869,	// (0x0007fc76) phob2_cc_data_pane_t3

0x0002,

0xff1f,	// (0x0008532c) phob2_cc_data_pane_t_ParamLimits

0xff1f,	// (0x0008532c) phob2_cc_data_pane_t

0xe9d6,	// (0x00083de3) phob2_cc_list_pane_ParamLimits

0xe9d6,	// (0x00083de3) phob2_cc_list_pane

0xceb3,	// (0x000822c0) scroll_pane_cp035_ParamLimits

0xceb3,	// (0x000822c0) scroll_pane_cp035

0xaa15,	// (0x0007fe22) bg_button_pane_cp033

0xe9e2,	// (0x00083def) phob2_cc_button_pane_g1

0xe9ee,	// (0x00083dfb) phob2_cc_button_pane_t1

0xea03,	// (0x00083e10) phob2_cc_button_pane_t2

0x0001,

0xff26,	// (0x00085333) phob2_cc_button_pane_t

0xa881,	// (0x0007fc8e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa881,	// (0x0007fc8e) list_double_large_graphic_phob2_cc_pane

0xa893,	// (0x0007fca0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa893,	// (0x0007fca0) list_double_large_graphic_phob2_cc_pane_g1

0xa89f,	// (0x0007fcac) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa89f,	// (0x0007fcac) list_double_large_graphic_phob2_cc_pane_g2

0x140a,	// (0x00076817) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x140a,	// (0x00076817) list_double_large_graphic_phob2_cc_pane_g3

0x1416,	// (0x00076823) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1416,	// (0x00076823) list_double_large_graphic_phob2_cc_pane_g4

0x1422,	// (0x0007682f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1422,	// (0x0007682f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2b,	// (0x00085338) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2b,	// (0x00085338) list_double_large_graphic_phob2_cc_pane_g

0x142e,	// (0x0007683b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x142e,	// (0x0007683b) list_double_large_graphic_phob2_cc_pane_t1

0x1457,	// (0x00076864) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1457,	// (0x00076864) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff36,	// (0x00085343) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff36,	// (0x00085343) list_double_large_graphic_phob2_cc_pane_t

0xea15,	// (0x00083e22) list_highlight_pane_cp025_ParamLimits

0xea15,	// (0x00083e22) list_highlight_pane_cp025

0xaa15,	// (0x0007fe22) bg_button_pane_cp033_ParamLimits

0xe9e2,	// (0x00083def) phob2_cc_button_pane_g1_ParamLimits

0xe9ee,	// (0x00083dfb) phob2_cc_button_pane_t1_ParamLimits

0xea03,	// (0x00083e10) phob2_cc_button_pane_t2_ParamLimits

0xff26,	// (0x00085333) phob2_cc_button_pane_t_ParamLimits

0x169a,	// (0x00076aa7) popup_wgtman_window

0xcc91,	// (0x0008209e) scroll_pane_cp038

0xa40b,	// (0x0007f818) wgtman_btn_pane_cp_01_ParamLimits

0xa40b,	// (0x0007f818) wgtman_btn_pane_cp_01

0xea23,	// (0x00083e30) wgtman_content_pane

0xea2c,	// (0x00083e39) wgtman_heading_pane

0xa99d,	// (0x0007fdaa) bg_heading_pane_cp02

0xea35,	// (0x00083e42) wgtman_heading_pane_g1

0xea3d,	// (0x00083e4a) wgtman_heading_pane_t1

0xea4b,	// (0x00083e58) scroll_pane_cp036

0xea53,	// (0x00083e60) wgtman_list_pane

0xea5b,	// (0x00083e68) wgtman_list_pane_t1_ParamLimits

0xea5b,	// (0x00083e68) wgtman_list_pane_t1

0xee12,	// (0x0008421f) cam4_grid_pane

0x0c61,	// (0x0007606e) bg_button_pane_cp015_ParamLimits

0x89b3,	// (0x0007ddc0) bg_button_pane_cp016_ParamLimits

0x89c6,	// (0x0007ddd3) bg_button_pane_cp017_ParamLimits

0x0ca7,	// (0x000760b4) popup_vitu2_query_window_g3_ParamLimits

0x0ca7,	// (0x000760b4) popup_vitu2_query_window_g3

0x0d22,	// (0x0007612f) popup_vitu2_query_window_t6_ParamLimits

0x0d22,	// (0x0007612f) popup_vitu2_query_window_t6

0x0d4d,	// (0x0007615a) popup_vitu2_query_window_t7_ParamLimits

0x0d4d,	// (0x0007615a) popup_vitu2_query_window_t7

0xcac8,	// (0x00081ed5) cam4_grid_pane_g1

0xcad1,	// (0x00081ede) cam4_grid_pane_g2

0xea75,	// (0x00083e82) cam4_grid_pane_g3

0xea7e,	// (0x00083e8b) cam4_grid_pane_g4

0x0003,

0xff3b,	// (0x00085348) cam4_grid_pane_g

0x2d3c,	// (0x00078149) aid_placing_vt_slider_lsc_ParamLimits

0x3097,	// (0x000784a4) vidtel_button_pane_ParamLimits

0x3097,	// (0x000784a4) vidtel_button_pane

0xea89,	// (0x00083e96) bg_button_pane_cp034

0xa8ab,	// (0x0007fcb8) vidtel_button_pane_g1

0xea93,	// (0x00083ea0) vidtel_button_pane_t1

0xcdd2,	// (0x000821df) aid_size_vtel_slider_touch

0xceb3,	// (0x000822c0) scroll_pane_cp039

0xd88c,	// (0x00082c99) ncim_query_button_pane_cp01_ParamLimits

0xd8ab,	// (0x00082cb8) ncimui_query_pane_g1_ParamLimits

0xaa15,	// (0x0007fe22) input_focus_pane_cp012_ParamLimits

0xd8d0,	// (0x00082cdd) ncim_query_entry_pane_t1_ParamLimits

0xceb3,	// (0x000822c0) scroll_pane_cp039_ParamLimits

0x4594,	// (0x000799a1) navi_pane_bcale_mc_g1

0x459c,	// (0x000799a9) navi_pane_bcale_mc_t1

0xde92,	// (0x0008329f) main_sp_fs_email_pane_g1

0xde9a,	// (0x000832a7) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x000850fd) main_sp_fs_email_pane_g

0xe309,	// (0x00083716) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe309,	// (0x00083716) list_single_cale_mrui_row_pane_g3

0xa064,	// (0x0007f471) list_single_recal_day_pane_g5_event_pane

0xe4ce,	// (0x000838db) list_single_recal_day_pane_g7

0xeaa1,	// (0x00083eae) list_recal_day_event_pane_cp01

0xeaaa,	// (0x00083eb7) list_recal_vselct_arw_lo_pane_cp01

0xeab2,	// (0x00083ebf) list_recal_vselct_arw_up_pane_cp01

0xeaba,	// (0x00083ec7) list_recal_vselct_pane_cp01

0xce08,	// (0x00082215) list_recal_day_event_pane_cp01_g1

0xeac4,	// (0x00083ed1) list_recal_day_event_pane_cp01_t1

0xe4d6,	// (0x000838e3) list_single_recal_day_pane_t1_ParamLimits

0xe4e8,	// (0x000838f5) list_single_recal_day_pane_t2_ParamLimits

0xfe2e,	// (0x0008523b) list_single_recal_day_pane_t_ParamLimits

0x20f4,	// (0x00077501) bg_notes_pane_ParamLimits

0x2102,	// (0x0007750f) list_notes_pane_ParamLimits

0x2110,	// (0x0007751d) scroll_pane_cp06_ParamLimits

0x2138,	// (0x00077545) main_notes_pane_ParamLimits

0xa99d,	// (0x0007fdaa) main_welc_pane

0xa8b3,	// (0x0007fcc0) main_welc_body_pane_ParamLimits

0xa8b3,	// (0x0007fcc0) main_welc_body_pane

0xa8d1,	// (0x0007fcde) main_welc_opti_pane_ParamLimits

0xa8d1,	// (0x0007fcde) main_welc_opti_pane

0xa916,	// (0x0007fd23) main_welc_pane_t1_ParamLimits

0xa916,	// (0x0007fd23) main_welc_pane_t1

0xa934,	// (0x0007fd41) main_welc_body_row_pane_ParamLimits

0xa934,	// (0x0007fd41) main_welc_body_row_pane

0xa948,	// (0x0007fd55) main_welc_opti_row_pane_ParamLimits

0xa948,	// (0x0007fd55) main_welc_opti_row_pane

0xead2,	// (0x00083edf) main_welc_opti_row_pane_g1

0xeada,	// (0x00083ee7) main_welc_opti_row_pane_t1

0xeae9,	// (0x00083ef6) main_welc_body_row_pane_t1

0xe76d,	// (0x00083b7a) popup_notif_wgt_heading_pane

0xe787,	// (0x00083b94) aid_size_list_notif_wgt_del_ParamLimits

0xe794,	// (0x00083ba1) list_notif_wgt_row_pane_g1_ParamLimits

0xe7a0,	// (0x00083bad) list_notif_wgt_row_pane_g2_ParamLimits

0xe7ac,	// (0x00083bb9) list_notif_wgt_row_pane_g3_ParamLimits

0xfe95,	// (0x000852a2) list_notif_wgt_row_pane_g_ParamLimits

0xe7b9,	// (0x00083bc6) list_notif_wgt_row_pane_t1_ParamLimits

0xe7ce,	// (0x00083bdb) list_notif_wgt_row_pane_t2_ParamLimits

0xe7e0,	// (0x00083bed) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9c,	// (0x000852a9) list_notif_wgt_row_pane_t_ParamLimits

0xa4a4,	// (0x0007f8b1) listrow_wgtman_pane_g1_ParamLimits

0xa4b1,	// (0x0007f8be) listrow_wgtman_pane_g2_ParamLimits

0xfec0,	// (0x000852cd) listrow_wgtman_pane_g_ParamLimits

0x1387,	// (0x00076794) listrow_wgtman_pane_t1_ParamLimits

0x139f,	// (0x000767ac) listrow_wgtman_pane_t2_ParamLimits

0xfec5,	// (0x000852d2) listrow_wgtman_pane_t_ParamLimits

0x13c5,	// (0x000767d2) wait_bar_pane_cp09_ParamLimits

0xa99d,	// (0x0007fdaa) bg_popup_heading_pane_cp02

0xeaf8,	// (0x00083f05) popup_notif_wgt_heading_pane_g1

0xeb00,	// (0x00083f0d) popup_notif_wgt_heading_pane_t1

0xa99d,	// (0x0007fdaa) main_vids_pane

0xa99d,	// (0x0007fdaa) vids_listscroll_pane

0xa958,	// (0x0007fd65) scroll_pane_cp040

0xa99d,	// (0x0007fdaa) vids_list_pane

0xa963,	// (0x0007fd70) vids_list_double_pane_ParamLimits

0xa963,	// (0x0007fd70) vids_list_double_pane

0xa974,	// (0x0007fd81) vids_list_double_pane_g1

0xa97d,	// (0x0007fd8a) vids_list_double_pane_t1

0xa98d,	// (0x0007fd9a) vids_list_double_pane_t2

0x0001,

0xff49,	// (0x00085356) vids_list_double_pane_t

0xaa15,	// (0x0007fe22) main_ncimui_pane_ParamLimits

0x946b,	// (0x0007e878) main_ncimui_pane_g1_ParamLimits

0x9477,	// (0x0007e884) main_ncimui_pane_g2_ParamLimits

0x9477,	// (0x0007e884) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x00085002) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x00085002) main_ncimui_pane_g

0xa8ec,	// (0x0007fcf9) main_welc_pane_g1_ParamLimits

0xa8ec,	// (0x0007fcf9) main_welc_pane_g1

0xa901,	// (0x0007fd0e) main_welc_pane_g2_ParamLimits

0xa901,	// (0x0007fd0e) main_welc_pane_g2

0x0001,

0xff44,	// (0x00085351) main_welc_pane_g_ParamLimits

0xff44,	// (0x00085351) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
