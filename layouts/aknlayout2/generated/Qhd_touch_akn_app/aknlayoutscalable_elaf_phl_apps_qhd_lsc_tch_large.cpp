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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00085fb4 };

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
0x1069,	// (0x0008701d) Screen

0x1075,	// (0x00087029) application_window

0x10b1,	// (0x00087065) area_bottom_pane_ParamLimits

0x10b1,	// (0x00087065) area_bottom_pane

0x10ea,	// (0x0008709e) area_top_pane_ParamLimits

0x10ea,	// (0x0008709e) area_top_pane

0xb2cf,	// (0x00091283) call_video_uplink_pane_ParamLimits

0xb2cf,	// (0x00091283) call_video_uplink_pane

0x1178,	// (0x0008712c) main_pane_ParamLimits

0x1178,	// (0x0008712c) main_pane

0xb5eb,	// (0x0009159f) context_pane

0x626b,	// (0x0008c21f) navi_pane

0x629d,	// (0x0008c251) popup_cale_events_window_ParamLimits

0x629d,	// (0x0008c251) popup_cale_events_window

0xb5fe,	// (0x000915b2) popup_mup_playback_window

0x62b5,	// (0x0008c269) signal_pane

0xedc6,	// (0x00094d7a) main_browser_pane

0x3f35,	// (0x00089ee9) main_burst_pane

0x5fcb,	// (0x0008bf7f) main_calc_pane

0xb57d,	// (0x00091531) main_cale_day_pane

0x17c0,	// (0x00087774) main_cale_month_pane

0xb57d,	// (0x00091531) main_cale_week_pane

0x3f35,	// (0x00089ee9) main_call_pane

0xeaa6,	// (0x00094a5a) main_call_poc_pane

0x3f35,	// (0x00089ee9) main_camera_pane

0x3f35,	// (0x00089ee9) main_chi_dic_pane

0x3a90,	// (0x00089a44) main_clock_pane

0xeaa6,	// (0x00094a5a) main_fmradio_pane

0x3f35,	// (0x00089ee9) main_graph_messa_pane

0xeaa6,	// (0x00094a5a) main_help_pane

0xedc6,	// (0x00094d7a) main_im_pane

0xed01,	// (0x00094cb5) main_image_pane_ParamLimits

0xed01,	// (0x00094cb5) main_image_pane

0xeaa6,	// (0x00094a5a) main_location2_pane

0x3f35,	// (0x00089ee9) main_location_pane

0xed01,	// (0x00094cb5) main_messa_pane

0xeaa6,	// (0x00094a5a) main_mp2_pane

0x3f35,	// (0x00089ee9) main_mp_pane

0xeaa6,	// (0x00094a5a) main_msg_pane

0xeaa6,	// (0x00094a5a) main_mup_eq_pane

0xeaa6,	// (0x00094a5a) main_mup_pane

0xedc6,	// (0x00094d7a) main_notes_pane

0xeaa6,	// (0x00094a5a) main_pec_pane

0xeaa6,	// (0x00094a5a) main_phob_pane

0xeaa6,	// (0x00094a5a) main_pinb_pane

0xeaa6,	// (0x00094a5a) main_postcard_pane

0xeaa6,	// (0x00094a5a) main_qdial_pane

0x3f35,	// (0x00089ee9) main_skin_pane

0xeaa6,	// (0x00094a5a) main_smil2_pane

0x3f35,	// (0x00089ee9) main_smil_pane

0x3f35,	// (0x00089ee9) main_video_pane

0x3f35,	// (0x00089ee9) main_video_tele_pane

0xed01,	// (0x00094cb5) main_viewer_pane_ParamLimits

0xed01,	// (0x00094cb5) main_viewer_pane

0x3f35,	// (0x00089ee9) main_vorec_pane

0x601f,	// (0x0008bfd3) popup_blid_sat_info_window_ParamLimits

0x601f,	// (0x0008bfd3) popup_blid_sat_info_window

0x6077,	// (0x0008c02b) popup_dyc_status_message_window_ParamLimits

0x6077,	// (0x0008c02b) popup_dyc_status_message_window

0x6091,	// (0x0008c045) popup_grid_large_graphic_window_ParamLimits

0x6091,	// (0x0008c045) popup_grid_large_graphic_window

0x614d,	// (0x0008c101) popup_loc_request_window_ParamLimits

0x614d,	// (0x0008c101) popup_loc_request_window

0x6243,	// (0x0008c1f7) popup_wml_address_window_ParamLimits

0x6243,	// (0x0008c1f7) popup_wml_address_window

0x5e05,	// (0x0008bdb9) call_muted_g1

0x4c0d,	// (0x0008abc1) popup_call_audio_conf_window_ParamLimits

0x4c0d,	// (0x0008abc1) popup_call_audio_conf_window

0x5e19,	// (0x0008bdcd) popup_call_audio_first_window_ParamLimits

0x5e19,	// (0x0008bdcd) popup_call_audio_first_window

0x5e8f,	// (0x0008be43) popup_call_audio_in_window_ParamLimits

0x5e8f,	// (0x0008be43) popup_call_audio_in_window

0x5ecb,	// (0x0008be7f) popup_call_audio_out_window_ParamLimits

0x5ecb,	// (0x0008be7f) popup_call_audio_out_window

0x5f05,	// (0x0008beb9) popup_call_audio_second_window_ParamLimits

0x5f05,	// (0x0008beb9) popup_call_audio_second_window

0x5f5b,	// (0x0008bf0f) popup_call_audio_wait_window_ParamLimits

0x5f5b,	// (0x0008bf0f) popup_call_audio_wait_window

0x5f90,	// (0x0008bf44) popup_number_entry_window_ParamLimits

0x5f90,	// (0x0008bf44) popup_number_entry_window

0xe693,	// (0x00094647) bg_popup_call_pane_cp05_ParamLimits

0xe693,	// (0x00094647) bg_popup_call_pane_cp05

0xe6b3,	// (0x00094667) popup_number_entry_window_t1

0xe6c6,	// (0x0009467a) popup_number_entry_window_t2

0xe6d8,	// (0x0009468c) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0009507a) popup_number_entry_window_t

0xe6ea,	// (0x0009469e) text_title_cp2

0xe6fd,	// (0x000946b1) bg_popup_call_pane_cp_ParamLimits

0xe6fd,	// (0x000946b1) bg_popup_call_pane_cp

0xe70b,	// (0x000946bf) call_thumbnail_pane

0xe713,	// (0x000946c7) popup_call_audio_in_window_g1_ParamLimits

0xe713,	// (0x000946c7) popup_call_audio_in_window_g1

0xe71f,	// (0x000946d3) popup_call_audio_in_window_g2_ParamLimits

0xe71f,	// (0x000946d3) popup_call_audio_in_window_g2

0xe72b,	// (0x000946df) popup_call_audio_in_window_g3_ParamLimits

0xe72b,	// (0x000946df) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x00095083) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x00095083) popup_call_audio_in_window_g

0xe737,	// (0x000946eb) popup_call_audio_in_window_t1_ParamLimits

0xe737,	// (0x000946eb) popup_call_audio_in_window_t1

0xe753,	// (0x00094707) popup_call_audio_in_window_t2_ParamLimits

0xe753,	// (0x00094707) popup_call_audio_in_window_t2

0xe76f,	// (0x00094723) popup_call_audio_in_window_t3_ParamLimits

0xe76f,	// (0x00094723) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0009508a) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0009508a) popup_call_audio_in_window_t

0xe6fd,	// (0x000946b1) bg_popup_call_pane_cp01_ParamLimits

0xe6fd,	// (0x000946b1) bg_popup_call_pane_cp01

0xe70b,	// (0x000946bf) call_thumbnail_pane_cp02

0xe782,	// (0x00094736) call_type_pane_cp022

0xe78a,	// (0x0009473e) popup_call_audio_out_window_g1_ParamLimits

0xe78a,	// (0x0009473e) popup_call_audio_out_window_g1

0xe79c,	// (0x00094750) popup_call_audio_out_window_g2_ParamLimits

0xe79c,	// (0x00094750) popup_call_audio_out_window_g2

0xe7a8,	// (0x0009475c) popup_call_audio_out_window_g3_ParamLimits

0xe7a8,	// (0x0009475c) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00095091) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00095091) popup_call_audio_out_window_g

0xe7ba,	// (0x0009476e) popup_call_audio_out_window_t1_ParamLimits

0xe7ba,	// (0x0009476e) popup_call_audio_out_window_t1

0xe7d2,	// (0x00094786) popup_call_audio_out_window_t2_ParamLimits

0xe7d2,	// (0x00094786) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00095098) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00095098) popup_call_audio_out_window_t

0xe7e7,	// (0x0009479b) bg_popup_call_pane_ParamLimits

0xe7e7,	// (0x0009479b) bg_popup_call_pane

0x1334,	// (0x000872e8) call_thumbnail_pane_cp_ParamLimits

0x1334,	// (0x000872e8) call_thumbnail_pane_cp

0xe86b,	// (0x0009481f) call_type_pane_cp01_ParamLimits

0xe86b,	// (0x0009481f) call_type_pane_cp01

0xe8af,	// (0x00094863) popup_call_audio_first_window_g1_ParamLimits

0xe8af,	// (0x00094863) popup_call_audio_first_window_g1

0xe8fb,	// (0x000948af) popup_call_audio_first_window_g2_ParamLimits

0xe8fb,	// (0x000948af) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0009509d) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0009509d) popup_call_audio_first_window_g

0xe93f,	// (0x000948f3) popup_call_audio_first_window_t1_ParamLimits

0xe93f,	// (0x000948f3) popup_call_audio_first_window_t1

0xe9eb,	// (0x0009499f) popup_call_audio_first_window_t4_ParamLimits

0xe9eb,	// (0x0009499f) popup_call_audio_first_window_t4

0xea77,	// (0x00094a2b) popup_call_audio_first_window_t5_ParamLimits

0xea77,	// (0x00094a2b) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000950a2) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000950a2) popup_call_audio_first_window_t

0xeaa6,	// (0x00094a5a) bg_popup_call_pane_cp02

0xeab0,	// (0x00094a64) call_type_pane_cp023

0xeab8,	// (0x00094a6c) popup_call_audio_wait_window_g1

0xeac0,	// (0x00094a74) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000950a9) popup_call_audio_wait_window_g

0xeac8,	// (0x00094a7c) popup_call_audio_wait_window_t3

0xead6,	// (0x00094a8a) bg_popup_call_pane_cp03_ParamLimits

0xead6,	// (0x00094a8a) bg_popup_call_pane_cp03

0xeb36,	// (0x00094aea) call_thumbnail_pane_cp011_ParamLimits

0xeb36,	// (0x00094aea) call_thumbnail_pane_cp011

0xeb42,	// (0x00094af6) call_type_pane_cp034_ParamLimits

0xeb42,	// (0x00094af6) call_type_pane_cp034

0xeb7e,	// (0x00094b32) popup_call_audio_second_window_g1_ParamLimits

0xeb7e,	// (0x00094b32) popup_call_audio_second_window_g1

0xebba,	// (0x00094b6e) popup_call_audio_second_window_g2_ParamLimits

0xebba,	// (0x00094b6e) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000950ae) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000950ae) popup_call_audio_second_window_g

0xebf6,	// (0x00094baa) popup_call_audio_second_window_t1_ParamLimits

0xebf6,	// (0x00094baa) popup_call_audio_second_window_t1

0xec77,	// (0x00094c2b) popup_call_audio_second_window_t2_ParamLimits

0xec77,	// (0x00094c2b) popup_call_audio_second_window_t2

0xecad,	// (0x00094c61) popup_call_audio_second_window_t3_ParamLimits

0xecad,	// (0x00094c61) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000950b3) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000950b3) popup_call_audio_second_window_t

0xeaa6,	// (0x00094a5a) bg_popup_call_pane_cp04

0xece3,	// (0x00094c97) list_conf_pane

0xeceb,	// (0x00094c9f) popup_call_audio_conf_window_t1

0xecf9,	// (0x00094cad) call_thumbnail_pane_g1

0xed01,	// (0x00094cb5) bg_pinb_pane_ParamLimits

0xed01,	// (0x00094cb5) bg_pinb_pane

0xed0f,	// (0x00094cc3) find_pinb_pane

0xed18,	// (0x00094ccc) listscroll_pinb_pane_ParamLimits

0xed18,	// (0x00094ccc) listscroll_pinb_pane

0xed27,	// (0x00094cdb) pinb_bg_pane_g1

0x1358,	// (0x0008730c) pinb_bg_pane_g2

0x1364,	// (0x00087318) pinb_bg_pane_g3

0x1370,	// (0x00087324) pinb_bg_pane_g4

0x137c,	// (0x00087330) pinb_bg_pane_g5

0x1388,	// (0x0008733c) pinb_bg_pane_g6

0x1393,	// (0x00087347) pinb_bg_pane_g7

0x139e,	// (0x00087352) pinb_bg_pane_g8

0x13a9,	// (0x0008735d) pinb_bg_pane_g9

0x13b3,	// (0x00087367) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000950ba) pinb_bg_pane_g

0x13d0,	// (0x00087384) grid_pinb_pane

0x13d9,	// (0x0008738d) list_pinb_pane

0x13e2,	// (0x00087396) scroll_pane_cp01_ParamLimits

0x13e2,	// (0x00087396) scroll_pane_cp01

0xed31,	// (0x00094ce5) find_pinb_pane_g1_ParamLimits

0xed31,	// (0x00094ce5) find_pinb_pane_g1

0xed49,	// (0x00094cfd) find_pinb_pane_t1

0xed5b,	// (0x00094d0f) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000950d4) find_pinb_pane_t

0xed70,	// (0x00094d24) input_focus_pane_cp01_ParamLimits

0xed70,	// (0x00094d24) input_focus_pane_cp01

0x13f4,	// (0x000873a8) cell_pinb_pane_ParamLimits

0x13f4,	// (0x000873a8) cell_pinb_pane

0x141d,	// (0x000873d1) cell_pinb_pane_g1_ParamLimits

0x141d,	// (0x000873d1) cell_pinb_pane_g1

0x142d,	// (0x000873e1) cell_pinb_pane_g2_ParamLimits

0x142d,	// (0x000873e1) cell_pinb_pane_g2

0xed7c,	// (0x00094d30) cell_pinb_pane_g3_ParamLimits

0xed7c,	// (0x00094d30) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000950d9) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000950d9) cell_pinb_pane_g

0xeaa6,	// (0x00094a5a) grid_highlight_pane_cp01

0x1439,	// (0x000873ed) list_pinb_item_pane_ParamLimits

0x1439,	// (0x000873ed) list_pinb_item_pane

0xeaa6,	// (0x00094a5a) list_highlight_pane_cp02

0x144b,	// (0x000873ff) list_pinb_item_pane_g1_ParamLimits

0x144b,	// (0x000873ff) list_pinb_item_pane_g1

0x1458,	// (0x0008740c) list_pinb_item_pane_g2_ParamLimits

0x1458,	// (0x0008740c) list_pinb_item_pane_g2

0x1464,	// (0x00087418) list_pinb_item_pane_g3_ParamLimits

0x1464,	// (0x00087418) list_pinb_item_pane_g3

0x1475,	// (0x00087429) list_pinb_item_pane_g4_ParamLimits

0x1475,	// (0x00087429) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000950e0) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000950e0) list_pinb_item_pane_g

0x1481,	// (0x00087435) list_pinb_item_pane_t1_ParamLimits

0x1481,	// (0x00087435) list_pinb_item_pane_t1

0x14b6,	// (0x0008746a) calc_display_pane

0x14de,	// (0x00087492) calc_paper_pane

0x1501,	// (0x000874b5) grid_calc_pane

0xeaa6,	// (0x00094a5a) bg_list_pane_cp01

0x152f,	// (0x000874e3) clock_g1

0x1537,	// (0x000874eb) clock_g2

0x0001,

0xf135,	// (0x000950e9) clock_g

0x153f,	// (0x000874f3) clock_t1_ParamLimits

0x153f,	// (0x000874f3) clock_t1

0x1554,	// (0x00087508) clock_t2_ParamLimits

0x1554,	// (0x00087508) clock_t2

0x1566,	// (0x0008751a) clock_t3_ParamLimits

0x1566,	// (0x0008751a) clock_t3

0x1578,	// (0x0008752c) clock_t4_ParamLimits

0x1578,	// (0x0008752c) clock_t4

0x158a,	// (0x0008753e) clock_t5_ParamLimits

0x158a,	// (0x0008753e) clock_t5

0x159f,	// (0x00087553) clock_t6_ParamLimits

0x159f,	// (0x00087553) clock_t6

0x15b1,	// (0x00087565) clock_t7_ParamLimits

0x15b1,	// (0x00087565) clock_t7

0x15c3,	// (0x00087577) clock_t8_ParamLimits

0x15c3,	// (0x00087577) clock_t8

0x15d7,	// (0x0008758b) clock_t9_ParamLimits

0x15d7,	// (0x0008758b) clock_t9

0x0008,

0xf13a,	// (0x000950ee) clock_t_ParamLimits

0xf13a,	// (0x000950ee) clock_t

0xed88,	// (0x00094d3c) popup_clock_analogue_window_cp02

0xed88,	// (0x00094d3c) popup_clock_digital_window_cp01

0xed90,	// (0x00094d44) listscroll_help_pane

0xeaa6,	// (0x00094a5a) phob_pre_status_pane

0xed9a,	// (0x00094d4e) grid_qdial_pane

0xed01,	// (0x00094cb5) listscroll_mce_pane

0xed01,	// (0x00094cb5) bg_notes_pane

0xeda4,	// (0x00094d58) list_notes_pane

0x15eb,	// (0x0008759f) scroll_pane_cp06

0xedb2,	// (0x00094d66) bg_calc_paper_pane

0xb2f5,	// (0x000912a9) list_calc_pane

0xedc6,	// (0x00094d7a) bg_calc_display_pane

0x15ff,	// (0x000875b3) calc_display_pane_t1

0x1611,	// (0x000875c5) calc_display_pane_t2

0xb30f,	// (0x000912c3) calc_display_pane_t3

0x0002,

0xf14d,	// (0x00095101) calc_display_pane_t

0x1623,	// (0x000875d7) cell_calc_pane_ParamLimits

0x1623,	// (0x000875d7) cell_calc_pane

0xedd2,	// (0x00094d86) bg_calc_paper_pane_g1

0xedde,	// (0x00094d92) bg_calc_paper_pane_g2

0xedea,	// (0x00094d9e) bg_calc_paper_pane_g3

0xedf6,	// (0x00094daa) bg_calc_paper_pane_g4

0xee02,	// (0x00094db6) bg_calc_paper_pane_g5

0x1658,	// (0x0008760c) bg_calc_paper_pane_g6

0x1667,	// (0x0008761b) bg_calc_paper_pane_g7

0x1676,	// (0x0008762a) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00095108) bg_calc_paper_pane_g

0x1689,	// (0x0008763d) calc_bg_paper_pane_g9

0x169c,	// (0x00087650) list_calc_item_pane_ParamLimits

0x169c,	// (0x00087650) list_calc_item_pane

0xee0e,	// (0x00094dc2) list_calc_item_pane_g1

0xb321,	// (0x000912d5) list_calc_item_pane_t1_ParamLimits

0xb321,	// (0x000912d5) list_calc_item_pane_t1

0x16b1,	// (0x00087665) list_calc_item_pane_t2_ParamLimits

0x16b1,	// (0x00087665) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00095119) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00095119) list_calc_item_pane_t

0xee1b,	// (0x00094dcf) cell_calc_pane_g1

0xee25,	// (0x00094dd9) grid_highlight_pane_cp02

0x16e3,	// (0x00087697) bg_calc_display_pane_g1

0x16ec,	// (0x000876a0) bg_calc_display_pane_g2

0x16f6,	// (0x000876aa) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00095123) bg_calc_display_pane_g

0x16ff,	// (0x000876b3) cell_qdial_pane_ParamLimits

0x16ff,	// (0x000876b3) cell_qdial_pane

0x1713,	// (0x000876c7) cell_qdial_pane_g1_ParamLimits

0x1713,	// (0x000876c7) cell_qdial_pane_g1

0x1729,	// (0x000876dd) cell_qdial_pane_g2_ParamLimits

0x1729,	// (0x000876dd) cell_qdial_pane_g2

0xee47,	// (0x00094dfb) cell_qdial_pane_g3_ParamLimits

0xee47,	// (0x00094dfb) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0009512a) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0009512a) cell_qdial_pane_g

0x1750,	// (0x00087704) cell_qdial_pane_t1_ParamLimits

0x1750,	// (0x00087704) cell_qdial_pane_t1

0x1768,	// (0x0008771c) cell_qdial_pane_t2_ParamLimits

0x1768,	// (0x0008771c) cell_qdial_pane_t2

0x177b,	// (0x0008772f) cell_qdial_pane_t3_ParamLimits

0x177b,	// (0x0008772f) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00095133) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00095133) cell_qdial_pane_t

0xeaa6,	// (0x00094a5a) grid_highlight_pane_cp04

0xee53,	// (0x00094e07) thumbnail_qdial_pane_ParamLimits

0xee53,	// (0x00094e07) thumbnail_qdial_pane

0xeeaf,	// (0x00094e63) list_help_pane

0xeeb8,	// (0x00094e6c) scroll_pane_cp02

0x178e,	// (0x00087742) help_list_pane_t1_ParamLimits

0x178e,	// (0x00087742) help_list_pane_t1

0xb333,	// (0x000912e7) bg_notes_pane_g2

0xb33b,	// (0x000912ef) bg_notes_pane_g3

0xb343,	// (0x000912f7) notes_bg_pane_g1

0xb34b,	// (0x000912ff) notes_bg_pane_g4

0xb353,	// (0x00091307) notes_bg_pane_g5

0xb35b,	// (0x0009130f) notes_bg_pane_g6

0xb363,	// (0x00091317) notes_bg_pane_g7

0xb36b,	// (0x0009131f) notes_bg_pane_g8

0xb373,	// (0x00091327) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00095151) notes_bg_pane_g

0x17ab,	// (0x0008775f) list_notes_text_pane_ParamLimits

0x17ab,	// (0x0008775f) list_notes_text_pane

0xeec1,	// (0x00094e75) list_notes_text_pane_g1

0x0199,	// (0x0008614d) list_notes_text_pane_t1

0x17c0,	// (0x00087774) listscroll_cale_week_pane

0x17ec,	// (0x000877a0) bg_cale_heading_pane

0xeee4,	// (0x00094e98) bg_cale_pane_cp01

0x1804,	// (0x000877b8) cale_week_corner_pane

0x1823,	// (0x000877d7) cale_week_day_heading_pane

0x1840,	// (0x000877f4) cale_week_scroll_pane_g1

0x1853,	// (0x00087807) cale_week_scroll_pane_g2

0x186b,	// (0x0008781f) cale_week_scroll_pane_g3

0x1883,	// (0x00087837) cale_week_scroll_pane_g4

0x189b,	// (0x0008784f) cale_week_scroll_pane_g5

0x18bb,	// (0x0008786f) cale_week_scroll_pane_g6

0x18db,	// (0x0008788f) cale_week_scroll_pane_g7

0x18fb,	// (0x000878af) cale_week_scroll_pane_g8

0x191f,	// (0x000878d3) cale_week_scroll_pane_g9

0x1937,	// (0x000878eb) cale_week_scroll_pane_g10

0x194f,	// (0x00087903) cale_week_scroll_pane_g11

0x1967,	// (0x0008791b) cale_week_scroll_pane_g12

0x197f,	// (0x00087933) cale_week_scroll_pane_g13

0x197f,	// (0x00087933) cale_week_scroll_pane_g14

0x197f,	// (0x00087933) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00095160) cale_week_scroll_pane_g

0x19bb,	// (0x0008796f) cale_week_time_pane

0x19df,	// (0x00087993) grid_cale_week_pane

0xef14,	// (0x00094ec8) scroll_pane_cp08

0x1a05,	// (0x000879b9) cell_cale_week_pane_ParamLimits

0x1a05,	// (0x000879b9) cell_cale_week_pane

0x1a93,	// (0x00087a47) cale_week_day_heading_pane_t1

0x1ad8,	// (0x00087a8c) cale_week_day_heading_pane_t2

0x1b22,	// (0x00087ad6) cale_week_day_heading_pane_t3

0x1b6c,	// (0x00087b20) cale_week_day_heading_pane_t4

0x1bb6,	// (0x00087b6a) cale_week_day_heading_pane_t5

0x1c08,	// (0x00087bbc) cale_week_day_heading_pane_t6

0x1c5a,	// (0x00087c0e) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x00095181) cale_week_day_heading_pane_t

0xef31,	// (0x00094ee5) bg_cale_side_pane

0x1c9f,	// (0x00087c53) cale_week_time_pane_t1

0x1cb9,	// (0x00087c6d) cale_week_time_pane_t2

0x1cd3,	// (0x00087c87) cale_week_time_pane_t3

0x1ced,	// (0x00087ca1) cale_week_time_pane_t4

0x1d07,	// (0x00087cbb) cale_week_time_pane_t5

0x1d21,	// (0x00087cd5) cale_week_time_pane_t6

0x1d3b,	// (0x00087cef) cale_week_time_pane_t7

0x1d55,	// (0x00087d09) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x00095190) cale_week_time_pane_t

0x1d75,	// (0x00087d29) cell_cale_week_pane_g2

0x1d94,	// (0x00087d48) cell_cale_week_pane_g3_ParamLimits

0x1d94,	// (0x00087d48) cell_cale_week_pane_g3

0xef3f,	// (0x00094ef3) grid_highlight_pane_cp07

0xef47,	// (0x00094efb) listscroll_gms_pane

0xef51,	// (0x00094f05) grid_gms_pane

0xef5a,	// (0x00094f0e) listscroll_gms_pane_g1

0xef62,	// (0x00094f16) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000951a1) listscroll_gms_pane_g

0x1dac,	// (0x00087d60) scroll_pane_cp010

0x1db7,	// (0x00087d6b) cell_gms_pane_ParamLimits

0x1db7,	// (0x00087d6b) cell_gms_pane

0x1dca,	// (0x00087d7e) cell_gms_pane_g1

0xef6a,	// (0x00094f1e) cell_gms_pane_g2

0xef72,	// (0x00094f26) cell_gms_pane_g3

0xef7b,	// (0x00094f2f) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000951a6) cell_gms_pane_g

0xef84,	// (0x00094f38) grid_highlight_pane_cp09

0x5daf,	// (0x0008bd63) phob_pre_status_pane_g1

0x5db7,	// (0x0008bd6b) phob_pre_status_pane_g2

0x5dbf,	// (0x0008bd73) phob_pre_status_pane_g3

0x5dc7,	// (0x0008bd7b) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x00095595) phob_pre_status_pane_g

0x5dd7,	// (0x0008bd8b) phob_pre_status_pane_t1

0x5de5,	// (0x0008bd99) phob_pre_status_pane_t2

0x5df5,	// (0x0008bda9) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000955a0) phob_pre_status_pane_t

0xeaa6,	// (0x00094a5a) bg_list_pane_cp05

0x1dda,	// (0x00087d8e) grid_vorec_pane

0x1de2,	// (0x00087d96) vorec_t1

0x1df0,	// (0x00087da4) vorec_t2

0x1dfe,	// (0x00087db2) vorec_t3

0x1e0c,	// (0x00087dc0) vorec_t4

0xb37b,	// (0x0009132f) vorec_t5

0x1e1a,	// (0x00087dce) vorec_t6

0x0006,

0xf1fb,	// (0x000951af) vorec_t

0x1e36,	// (0x00087dea) wait_bar_pane_cp01

0x1e3e,	// (0x00087df2) cell_vorec_pane_ParamLimits

0x1e3e,	// (0x00087df2) cell_vorec_pane

0xb389,	// (0x0009133d) cell_vorec_pane_g1

0xeaa6,	// (0x00094a5a) grid_highlight_pane_cp05

0x1e66,	// (0x00087e1a) cams_zoom_pane

0x1e75,	// (0x00087e29) image_vga_pane

0x1e8f,	// (0x00087e43) main_camera_pane_g1

0x1ea1,	// (0x00087e55) main_camera_pane_g2

0x1eb1,	// (0x00087e65) main_camera_pane_g3

0x1ec1,	// (0x00087e75) main_camera_pane_g4

0x1ed1,	// (0x00087e85) main_camera_pane_g5

0x1ee1,	// (0x00087e95) main_camera_pane_g6

0x1ef3,	// (0x00087ea7) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000951be) main_camera_pane_g

0x1f03,	// (0x00087eb7) main_camera_pane_t1

0x1f19,	// (0x00087ecd) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000951cf) main_camera_pane_t

0x1f53,	// (0x00087f07) cams_zoom_pane_cp_ParamLimits

0x1f53,	// (0x00087f07) cams_zoom_pane_cp

0x1f7b,	// (0x00087f2f) image_cif_pane_ParamLimits

0x1f7b,	// (0x00087f2f) image_cif_pane

0x1fb1,	// (0x00087f65) image_subqcif_pane

0x1fb9,	// (0x00087f6d) main_video_pane_g1_ParamLimits

0x1fb9,	// (0x00087f6d) main_video_pane_g1

0x1fdd,	// (0x00087f91) main_video_pane_g2_ParamLimits

0x1fdd,	// (0x00087f91) main_video_pane_g2

0x2011,	// (0x00087fc5) main_video_pane_g3_ParamLimits

0x2011,	// (0x00087fc5) main_video_pane_g3

0x203f,	// (0x00087ff3) main_video_pane_g4_ParamLimits

0x203f,	// (0x00087ff3) main_video_pane_g4

0x206d,	// (0x00088021) main_video_pane_g5_ParamLimits

0x206d,	// (0x00088021) main_video_pane_g5

0xef98,	// (0x00094f4c) main_video_pane_g6_ParamLimits

0xef98,	// (0x00094f4c) main_video_pane_g6

0x0006,

0xf220,	// (0x000951d4) main_video_pane_g_ParamLimits

0xf220,	// (0x000951d4) main_video_pane_g

0x2096,	// (0x0008804a) main_video_pane_t1_ParamLimits

0x2096,	// (0x0008804a) main_video_pane_t1

0x20df,	// (0x00088093) cams_zoom_pane_g1

0x20e8,	// (0x0008809c) cams_zoom_pane_g2

0x20f1,	// (0x000880a5) cams_zoom_pane_g3

0x20fa,	// (0x000880ae) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000951e3) cams_zoom_pane_g

0x2117,	// (0x000880cb) grid_cams_pane

0x2131,	// (0x000880e5) linegrid_cams_pane

0x2145,	// (0x000880f9) cell_cams_pane_ParamLimits

0x2145,	// (0x000880f9) cell_cams_pane

0x2165,	// (0x00088119) cams_burst_image_pane

0x216d,	// (0x00088121) cell_cams_pane_g1

0xeaa6,	// (0x00094a5a) grid_highlight_pane_cp03

0xee1b,	// (0x00094dcf) mp_bg_pane_g1

0xeaa6,	// (0x00094a5a) bg_list_pane_cp03

0xb4a2,	// (0x00091456) bg_mp_pane

0xb4aa,	// (0x0009145e) grid_mp_pane

0xb4b2,	// (0x00091466) media_player_g1

0xb4ba,	// (0x0009146e) media_player_t1

0xb4c8,	// (0x0009147c) media_player_t2

0xb4d6,	// (0x0009148a) media_player_t3

0xb4e4,	// (0x00091498) media_player_t4

0xb4f2,	// (0x000914a6) media_player_t5

0xb500,	// (0x000914b4) media_player_t6

0xb50e,	// (0x000914c2) media_player_t7

0x0006,

0xf5cb,	// (0x0009557f) media_player_t

0xb51c,	// (0x000914d0) wait_bar_pane_cp02

0xf5b0,	// (0x00095564) main_usb_pane_t

0x5da6,	// (0x0008bd5a) cell_mp_pane

0xee1b,	// (0x00094dcf) cell_mp_pane_g1

0xeaa6,	// (0x00094a5a) grid_highlight_pane_cp06

0x218d,	// (0x00088141) grid_skin_colour_pane

0x2195,	// (0x00088149) list_highlight_pane_cp03

0x219d,	// (0x00088151) skin_g1

0x21a5,	// (0x00088159) skin_t1

0x21b4,	// (0x00088168) skin_t2

0x0001,

0xf264,	// (0x00095218) skin_t

0x21c2,	// (0x00088176) cell_skin_colour_pane_ParamLimits

0x21c2,	// (0x00088176) cell_skin_colour_pane

0x21e2,	// (0x00088196) cell_skin_colour_pane_g1

0x224d,	// (0x00088201) call_video_g1_ParamLimits

0x224d,	// (0x00088201) call_video_g1

0x2269,	// (0x0008821d) call_video_g2_ParamLimits

0x2269,	// (0x0008821d) call_video_g2

0x0001,

0xf269,	// (0x0009521d) call_video_g_ParamLimits

0xf269,	// (0x0009521d) call_video_g

0x22bb,	// (0x0008826f) call_video_uplink_pane_cp1_ParamLimits

0x22bb,	// (0x0008826f) call_video_uplink_pane_cp1

0x2320,	// (0x000882d4) call_video_uplink_pane_cp2

0x2362,	// (0x00088316) video_down_crop_pane_ParamLimits

0x2362,	// (0x00088316) video_down_crop_pane

0x2459,	// (0x0008840d) video_down_pane_ParamLimits

0x2459,	// (0x0008840d) video_down_pane

0x2550,	// (0x00088504) video_down_subqcif_pane_ParamLimits

0x2550,	// (0x00088504) video_down_subqcif_pane

0x2568,	// (0x0008851c) video_down_subqcif_pane_cp_ParamLimits

0x2568,	// (0x0008851c) video_down_subqcif_pane_cp

0x25a5,	// (0x00088559) im_reading_pane_ParamLimits

0x25a5,	// (0x00088559) im_reading_pane

0x25b7,	// (0x0008856b) im_writing_pane_ParamLimits

0x25b7,	// (0x0008856b) im_writing_pane

0x25d5,	// (0x00088589) im_reading_pane_t1

0x260e,	// (0x000885c2) list_im_pane

0x261f,	// (0x000885d3) scroll_pane_cp07

0x2638,	// (0x000885ec) im_writing_pane_t1_ParamLimits

0x2638,	// (0x000885ec) im_writing_pane_t1

0x264d,	// (0x00088601) im_writing_pane_t2_ParamLimits

0x264d,	// (0x00088601) im_writing_pane_t2

0x0001,

0xf273,	// (0x00095227) im_writing_pane_t_ParamLimits

0xf273,	// (0x00095227) im_writing_pane_t

0xeaa6,	// (0x00094a5a) input_focus_pane_cp04

0xeaa6,	// (0x00094a5a) input_focus_pane_cp05

0x266a,	// (0x0008861e) list_im_single_pane_ParamLimits

0x266a,	// (0x0008861e) list_im_single_pane

0x267e,	// (0x00088632) list_single_im_pane_t1

0x5d66,	// (0x0008bd1a) blid_accuracy_pane

0x5d6e,	// (0x0008bd22) blid_compass_pane

0x5d78,	// (0x0008bd2c) main_location_t1

0x5d88,	// (0x0008bd3c) main_location_t2

0x5d98,	// (0x0008bd4c) main_location_t3

0x0002,

0xf5da,	// (0x0009558e) main_location_t

0xeaa6,	// (0x00094a5a) aid_levels_location

0xee1b,	// (0x00094dcf) blid_accuracy_pane_g1

0xee1b,	// (0x00094dcf) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00095289) blid_accuracy_pane_g

0x26b8,	// (0x0008866c) wml_content_pane

0x26f6,	// (0x000886aa) wml_button_pane_ParamLimits

0x26f6,	// (0x000886aa) wml_button_pane

0x270a,	// (0x000886be) wml_list_single_large_pane_ParamLimits

0x270a,	// (0x000886be) wml_list_single_large_pane

0x271f,	// (0x000886d3) wml_list_single_medium_pane_ParamLimits

0x271f,	// (0x000886d3) wml_list_single_medium_pane

0x2735,	// (0x000886e9) wml_list_single_small_pane_ParamLimits

0x2735,	// (0x000886e9) wml_list_single_small_pane

0x274d,	// (0x00088701) wml_selection_box_pane_ParamLimits

0x274d,	// (0x00088701) wml_selection_box_pane

0x2760,	// (0x00088714) wml_list_single_pane_t1

0x276f,	// (0x00088723) wml_list_single_medium_pane_t1

0x277e,	// (0x00088732) wml_list_single_large_pane_t1

0x278d,	// (0x00088741) input_focus_pane_cp02_ParamLimits

0x278d,	// (0x00088741) input_focus_pane_cp02

0x27a0,	// (0x00088754) wml_selection_box_pane_g1

0x27a9,	// (0x0008875d) wml_selection_box_pane_t1_ParamLimits

0x27a9,	// (0x0008875d) wml_selection_box_pane_t1

0xed01,	// (0x00094cb5) bg_wml_button_pane_ParamLimits

0xed01,	// (0x00094cb5) bg_wml_button_pane

0x27c1,	// (0x00088775) wml_button_pane_g1

0x27c9,	// (0x0008877d) wml_button_pane_t1

0x27c1,	// (0x00088775) wml_button_bg_pane_g1

0x27d9,	// (0x0008878d) wml_button_bg_pane_g2

0x27e1,	// (0x00088795) wml_button_bg_pane_g3

0x27e9,	// (0x0008879d) wml_button_bg_pane_g4

0x27f1,	// (0x000887a5) wml_button_bg_pane_g5

0x27f9,	// (0x000887ad) wml_button_bg_pane_g6

0x2801,	// (0x000887b5) wml_button_bg_pane_g7

0x2809,	// (0x000887bd) wml_button_bg_pane_g8

0x2811,	// (0x000887c5) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009522c) wml_button_bg_pane_g

0x2819,	// (0x000887cd) bg_list_pane_cp02

0x2821,	// (0x000887d5) mce_header_pane_ParamLimits

0x2821,	// (0x000887d5) mce_header_pane

0x2837,	// (0x000887eb) mce_icon_pane

0x2837,	// (0x000887eb) mce_image_pane

0x2840,	// (0x000887f4) mce_text_pane_ParamLimits

0x2840,	// (0x000887f4) mce_text_pane

0x2853,	// (0x00088807) scroll_pane_cp03

0x26ee,	// (0x000886a2) scroll_pane_cp04

0x285d,	// (0x00088811) scroll_pane_cp05_ParamLimits

0x285d,	// (0x00088811) scroll_pane_cp05

0x2869,	// (0x0008881d) mce_header_field_pane_ParamLimits

0x2869,	// (0x0008881d) mce_header_field_pane

0x2880,	// (0x00088834) mce_header_field_pane_2_ParamLimits

0x2880,	// (0x00088834) mce_header_field_pane_2

0x2896,	// (0x0008884a) mce_header_field_pane_3

0x289e,	// (0x00088852) list_single_mce_message_pane_ParamLimits

0x289e,	// (0x00088852) list_single_mce_message_pane

0x28b3,	// (0x00088867) list_single_mce_smart_pane_ParamLimits

0x28b3,	// (0x00088867) list_single_mce_smart_pane

0x28d3,	// (0x00088887) input_focus_pane_cp03

0x28dc,	// (0x00088890) list_header_data_pane

0x28e4,	// (0x00088898) mce_header_field_pane_t1

0x28f4,	// (0x000888a8) list_single_mce_header_pane_ParamLimits

0x28f4,	// (0x000888a8) list_single_mce_header_pane

0x2908,	// (0x000888bc) list_single_mce_header_pane_t1

0x2917,	// (0x000888cb) list_single_mce_message_pane_g1

0x291f,	// (0x000888d3) list_single_mce_message_pane_t1

0x2953,	// (0x00088907) bg_cale_heading_pane_cp01_ParamLimits

0x2953,	// (0x00088907) bg_cale_heading_pane_cp01

0x2982,	// (0x00088936) bg_cale_pane_cp02_ParamLimits

0x2982,	// (0x00088936) bg_cale_pane_cp02

0x29af,	// (0x00088963) cale_month_corner_pane

0x29ce,	// (0x00088982) cale_month_day_heading_pane_ParamLimits

0x29ce,	// (0x00088982) cale_month_day_heading_pane

0x2a15,	// (0x000889c9) cale_month_pane_g1_ParamLimits

0x2a15,	// (0x000889c9) cale_month_pane_g1

0x2a39,	// (0x000889ed) cale_month_pane_g2_ParamLimits

0x2a39,	// (0x000889ed) cale_month_pane_g2

0x2a69,	// (0x00088a1d) cale_month_pane_g3_ParamLimits

0x2a69,	// (0x00088a1d) cale_month_pane_g3

0x2aa5,	// (0x00088a59) cale_month_pane_g4_ParamLimits

0x2aa5,	// (0x00088a59) cale_month_pane_g4

0x2ae1,	// (0x00088a95) cale_month_pane_g5_ParamLimits

0x2ae1,	// (0x00088a95) cale_month_pane_g5

0x2b29,	// (0x00088add) cale_month_pane_g6_ParamLimits

0x2b29,	// (0x00088add) cale_month_pane_g6

0x2b75,	// (0x00088b29) cale_month_pane_g7_ParamLimits

0x2b75,	// (0x00088b29) cale_month_pane_g7

0x2bc9,	// (0x00088b7d) cale_month_pane_g8_ParamLimits

0x2bc9,	// (0x00088b7d) cale_month_pane_g8

0x2c1d,	// (0x00088bd1) cale_month_pane_g9_ParamLimits

0x2c1d,	// (0x00088bd1) cale_month_pane_g9

0x2c6f,	// (0x00088c23) cale_month_pane_g10_ParamLimits

0x2c6f,	// (0x00088c23) cale_month_pane_g10

0x2cc1,	// (0x00088c75) cale_month_pane_g11_ParamLimits

0x2cc1,	// (0x00088c75) cale_month_pane_g11

0x2d13,	// (0x00088cc7) cale_month_pane_g12_ParamLimits

0x2d13,	// (0x00088cc7) cale_month_pane_g12

0x2d65,	// (0x00088d19) cale_month_pane_g13_ParamLimits

0x2d65,	// (0x00088d19) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009523f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009523f) cale_month_pane_g

0x2dc9,	// (0x00088d7d) cale_month_week_pane

0x2ded,	// (0x00088da1) grid_cale_month_pane_ParamLimits

0x2ded,	// (0x00088da1) grid_cale_month_pane

0x2e2b,	// (0x00088ddf) cale_month_day_heading_pane_t1

0x2eb1,	// (0x00088e65) cale_month_day_heading_pane_t2

0x2f42,	// (0x00088ef6) cale_month_day_heading_pane_t3

0x2fd3,	// (0x00088f87) cale_month_day_heading_pane_t4

0x3068,	// (0x0008901c) cale_month_day_heading_pane_t5

0x3109,	// (0x000890bd) cale_month_day_heading_pane_t6

0x31aa,	// (0x0008915e) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009525a) cale_month_day_heading_pane_t

0xef31,	// (0x00094ee5) bg_cale_side_pane_cp01

0x3253,	// (0x00089207) cale_month_week_pane_t1

0x326c,	// (0x00089220) cale_month_week_pane_t2

0x3285,	// (0x00089239) cale_month_week_pane_t3

0x329e,	// (0x00089252) cale_month_week_pane_t4

0x32b7,	// (0x0008926b) cale_month_week_pane_t5

0x32d0,	// (0x00089284) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00095269) cale_month_week_pane_t

0x32e9,	// (0x0008929d) cell_cale_month_pane_ParamLimits

0x32e9,	// (0x0008929d) cell_cale_month_pane

0xb393,	// (0x00091347) cell_cale_month_pane_g1

0x3413,	// (0x000893c7) cell_cale_month_pane_t1_ParamLimits

0x3413,	// (0x000893c7) cell_cale_month_pane_t1

0xef3f,	// (0x00094ef3) grid_highlight_pane_cp08

0xee1b,	// (0x00094dcf) main_smil_g1

0x3433,	// (0x000893e7) smil_status_pane

0x343c,	// (0x000893f0) smil_text_pane

0x5c0a,	// (0x0008bbbe) bg_popup_call3_rect_pane_g8

0x5c12,	// (0x0008bbc6) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00095522) bg_popup_call3_rect_pane_g

0xb665,	// (0x00091619) smil_status_volume_pane_g1

0x3450,	// (0x00089404) smil_status_pane_t1

0xb698,	// (0x0009164c) volume_smil_pane

0x3467,	// (0x0008941b) list_smil_text_pane

0x3471,	// (0x00089425) scroll_pane_cp011

0x347c,	// (0x00089430) smil_text_list_pane_t1_ParamLimits

0x347c,	// (0x00089430) smil_text_list_pane_t1

0xb39f,	// (0x00091353) aid_volume_smil_ParamLimits

0xb39f,	// (0x00091353) aid_volume_smil

0xee1b,	// (0x00094dcf) smil_volume_pane_g1

0xee1b,	// (0x00094dcf) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00095289) smil_volume_pane_g

0x17c0,	// (0x00087774) listscroll_cale_day_pane

0x34b8,	// (0x0008946c) bg_cale_pane

0x34d0,	// (0x00089484) list_cale_pane

0x34f3,	// (0x000894a7) scroll_pane_cp09

0x3504,	// (0x000894b8) cale_bg_pane_g1

0x350c,	// (0x000894c0) cale_bg_pane_g2

0x3514,	// (0x000894c8) cale_bg_pane_g3

0x351c,	// (0x000894d0) cale_bg_pane_g4

0x3524,	// (0x000894d8) cale_bg_pane_g5

0x352c,	// (0x000894e0) cale_bg_pane_g6

0x3534,	// (0x000894e8) cale_bg_pane_g7

0x353c,	// (0x000894f0) cale_bg_pane_g8

0x3544,	// (0x000894f8) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0009528e) cale_bg_pane_g

0x3554,	// (0x00089508) list_cale_time_pane_ParamLimits

0x3554,	// (0x00089508) list_cale_time_pane

0x3569,	// (0x0008951d) list_cale_time_pane_g1_ParamLimits

0x3569,	// (0x0008951d) list_cale_time_pane_g1

0x3575,	// (0x00089529) list_cale_time_pane_g2_ParamLimits

0x3575,	// (0x00089529) list_cale_time_pane_g2

0x3582,	// (0x00089536) list_cale_time_pane_g3_ParamLimits

0x3582,	// (0x00089536) list_cale_time_pane_g3

0x3590,	// (0x00089544) list_cale_time_pane_g4_ParamLimits

0x3590,	// (0x00089544) list_cale_time_pane_g4

0x359e,	// (0x00089552) list_cale_time_pane_g5_ParamLimits

0x359e,	// (0x00089552) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000952a1) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000952a1) list_cale_time_pane_g

0x35b9,	// (0x0008956d) list_cale_time_pane_t1_ParamLimits

0x35b9,	// (0x0008956d) list_cale_time_pane_t1

0x35e1,	// (0x00089595) list_cale_time_pane_t2_ParamLimits

0x35e1,	// (0x00089595) list_cale_time_pane_t2

0x3cab,	// (0x00089c5f) aid_blid_cardinal_pane

0x3cf5,	// (0x00089ca9) compass_pane_t4

0x3609,	// (0x000895bd) list_cale_time_pane_t4_ParamLimits

0x3609,	// (0x000895bd) list_cale_time_pane_t4

0x3d03,	// (0x00089cb7) compass_pane_t5

0x3d11,	// (0x00089cc5) compass_pane_t6

0x3d1f,	// (0x00089cd3) compass_pane_t7

0x3db5,	// (0x00089d69) navi_pane_cc_t1

0x3fdc,	// (0x00089f90) aid_phob_thumbnail_center_pane

0x4618,	// (0x0008a5cc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000952ae) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000952ae) list_cale_time_pane_t

0xe6fd,	// (0x000946b1) bg_popup_window_pane_cp02_ParamLimits

0xe6fd,	// (0x000946b1) bg_popup_window_pane_cp02

0x3631,	// (0x000895e5) heading_pane_cp01_ParamLimits

0x3631,	// (0x000895e5) heading_pane_cp01

0x363d,	// (0x000895f1) loc_req_pane_ParamLimits

0x363d,	// (0x000895f1) loc_req_pane

0x364d,	// (0x00089601) loc_type_pane_ParamLimits

0x364d,	// (0x00089601) loc_type_pane

0x365f,	// (0x00089613) loc_type_pane_t1_ParamLimits

0x365f,	// (0x00089613) loc_type_pane_t1

0x3671,	// (0x00089625) loc_type_pane_t2_ParamLimits

0x3671,	// (0x00089625) loc_type_pane_t2

0x3683,	// (0x00089637) loc_type_pane_t3_ParamLimits

0x3683,	// (0x00089637) loc_type_pane_t3

0x0002,

0xf301,	// (0x000952b5) loc_type_pane_t_ParamLimits

0xf301,	// (0x000952b5) loc_type_pane_t

0x3695,	// (0x00089649) list_loc_req_pane

0x369f,	// (0x00089653) scroll_pane_cp012

0x36aa,	// (0x0008965e) list_single_loc_request_popup_menu_pane_ParamLimits

0x36aa,	// (0x0008965e) list_single_loc_request_popup_menu_pane

0x36b7,	// (0x0008966b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x36b7,	// (0x0008966b) list_single_loc_request_popup_menu_pane_g1

0x36c3,	// (0x00089677) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x36c3,	// (0x00089677) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000952bc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000952bc) list_single_loc_request_popup_menu_pane_g

0x36cf,	// (0x00089683) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x36cf,	// (0x00089683) list_single_loc_request_popup_menu_pane_t1

0xed01,	// (0x00094cb5) bg_popup_window_pane_cp03_ParamLimits

0xed01,	// (0x00094cb5) bg_popup_window_pane_cp03

0x36e5,	// (0x00089699) heading_loc_req_pane_ParamLimits

0x36e5,	// (0x00089699) heading_loc_req_pane

0x36f1,	// (0x000896a5) popup_dyc_status_message_window_g1_ParamLimits

0x36f1,	// (0x000896a5) popup_dyc_status_message_window_g1

0x3705,	// (0x000896b9) popup_dyc_status_message_window_t1_ParamLimits

0x3705,	// (0x000896b9) popup_dyc_status_message_window_t1

0x371a,	// (0x000896ce) popup_dyc_status_message_window_t2_ParamLimits

0x371a,	// (0x000896ce) popup_dyc_status_message_window_t2

0x372f,	// (0x000896e3) popup_dyc_status_message_window_t3_ParamLimits

0x372f,	// (0x000896e3) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000952c1) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000952c1) popup_dyc_status_message_window_t

0xeaa6,	// (0x00094a5a) bg_heading_pane_cp01

0x374b,	// (0x000896ff) heading_loc_req_pane_g1

0x3753,	// (0x00089707) heading_loc_req_pane_g2

0x375b,	// (0x0008970f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000952c8) heading_loc_req_pane_g

0x3763,	// (0x00089717) heading_loc_req_pane_t1

0x377e,	// (0x00089732) bg_popup_sub_pane_cp01_ParamLimits

0x377e,	// (0x00089732) bg_popup_sub_pane_cp01

0x378c,	// (0x00089740) popup_cale_events_window_g1_ParamLimits

0x378c,	// (0x00089740) popup_cale_events_window_g1

0x37ac,	// (0x00089760) popup_cale_events_window_g2_ParamLimits

0x37ac,	// (0x00089760) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000952fc) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000952fc) popup_cale_events_window_g

0x37cc,	// (0x00089780) popup_cale_events_window_t1_ParamLimits

0x37cc,	// (0x00089780) popup_cale_events_window_t1

0x37de,	// (0x00089792) popup_cale_events_window_t2_ParamLimits

0x37de,	// (0x00089792) popup_cale_events_window_t2

0x381c,	// (0x000897d0) popup_cale_events_window_t3_ParamLimits

0x381c,	// (0x000897d0) popup_cale_events_window_t3

0x3856,	// (0x0008980a) popup_cale_events_window_t4_ParamLimits

0x3856,	// (0x0008980a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00095301) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00095301) popup_cale_events_window_t

0x388c,	// (0x00089840) call_type_pane

0x389c,	// (0x00089850) popup_call_status_window_g1

0x38b0,	// (0x00089864) popup_call_status_window_g2

0x38c4,	// (0x00089878) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0009530a) popup_call_status_window_g

0x38d3,	// (0x00089887) call_type_pane_g1

0x38dc,	// (0x00089890) call_type_pane_g2

0x0001,

0xf35d,	// (0x00095311) call_type_pane_g

0xeaa6,	// (0x00094a5a) bg_popup_sub_pane_cp02

0x38e5,	// (0x00089899) listscroll_popup_wml_pane

0x38ed,	// (0x000898a1) list_wml_pane

0x38f7,	// (0x000898ab) scroll_pane_cp013

0x3902,	// (0x000898b6) list_single_graphic_popup_wml_pane_ParamLimits

0x3902,	// (0x000898b6) list_single_graphic_popup_wml_pane

0xee1b,	// (0x00094dcf) list_single_graphic_popup_wml_pane_g1

0x3916,	// (0x000898ca) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00095316) list_single_graphic_popup_wml_pane_g

0x391e,	// (0x000898d2) list_single_graphic_popup_wml_pane_t1

0x3934,	// (0x000898e8) aid_call_pane

0xecf9,	// (0x00094cad) popup_clock_analogue_window_g1

0xecf9,	// (0x00094cad) popup_clock_analogue_window_g2

0xb3cd,	// (0x00091381) popup_clock_analogue_window_g3

0xb3cd,	// (0x00091381) popup_clock_analogue_window_g4

0xee1b,	// (0x00094dcf) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0009531b) popup_clock_analogue_window_g

0xb3d5,	// (0x00091389) popup_clock_analogue_window_t1

0xb3e3,	// (0x00091397) clock_digital_number_pane_ParamLimits

0xb3e3,	// (0x00091397) clock_digital_number_pane

0xb3ef,	// (0x000913a3) clock_digital_number_pane_cp02_ParamLimits

0xb3ef,	// (0x000913a3) clock_digital_number_pane_cp02

0xb3fb,	// (0x000913af) clock_digital_number_pane_cp03_ParamLimits

0xb3fb,	// (0x000913af) clock_digital_number_pane_cp03

0xb407,	// (0x000913bb) clock_digital_number_pane_cp04_ParamLimits

0xb407,	// (0x000913bb) clock_digital_number_pane_cp04

0xb417,	// (0x000913cb) clock_digital_separator_pane_ParamLimits

0xb417,	// (0x000913cb) clock_digital_separator_pane

0xb423,	// (0x000913d7) popup_clock_digital_window_t1

0xee1b,	// (0x00094dcf) clock_digital_number_pane_g1

0xee1b,	// (0x00094dcf) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00095289) clock_digital_number_pane_g

0xee1b,	// (0x00094dcf) clock_digital_separator_pane_g1

0xee1b,	// (0x00094dcf) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00095289) clock_digital_separator_pane_g

0xeaa6,	// (0x00094a5a) bg_popup_window_pane_cp04

0x393c,	// (0x000898f0) heading_pane_cp03

0x3944,	// (0x000898f8) listscroll_popup_gms_pane

0x394c,	// (0x00089900) grid_large_graphic_popup_pane

0x3956,	// (0x0008990a) listscroll_popup_gms_pane_g1

0x395e,	// (0x00089912) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00095326) listscroll_popup_gms_pane_g

0x26ee,	// (0x000886a2) scroll_pane_cp014

0x3966,	// (0x0008991a) cell_large_graphic_popup_pane_ParamLimits

0x3966,	// (0x0008991a) cell_large_graphic_popup_pane

0x397e,	// (0x00089932) cell_large_graphic_popup_pane_g1_ParamLimits

0x397e,	// (0x00089932) cell_large_graphic_popup_pane_g1

0x398a,	// (0x0008993e) cell_large_graphic_popup_pane_g2_ParamLimits

0x398a,	// (0x0008993e) cell_large_graphic_popup_pane_g2

0x3996,	// (0x0008994a) cell_large_graphic_popup_pane_g3_ParamLimits

0x3996,	// (0x0008994a) cell_large_graphic_popup_pane_g3

0x39a3,	// (0x00089957) cell_large_graphic_popup_pane_g4_ParamLimits

0x39a3,	// (0x00089957) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0009532b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0009532b) cell_large_graphic_popup_pane_g

0x39b3,	// (0x00089967) grid_highlight_pane_cp010

0xee1b,	// (0x00094dcf) bg_popup_call_pane_g1

0x39bd,	// (0x00089971) list_single_graphic_popup_conf_pane_ParamLimits

0x39bd,	// (0x00089971) list_single_graphic_popup_conf_pane

0x39d0,	// (0x00089984) list_highlight_pane_cp01

0x39d9,	// (0x0008998d) list_single_graphic_popup_conf_pane_g1

0x39e1,	// (0x00089995) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00095334) list_single_graphic_popup_conf_pane_g

0x39e9,	// (0x0008999d) list_single_graphic_popup_conf_pane_t1

0x39f7,	// (0x000899ab) linegrid_cams_pane_g1

0x3a00,	// (0x000899b4) linegrid_cams_pane_g2

0xef72,	// (0x00094f26) linegrid_cams_pane_g3

0x3a09,	// (0x000899bd) linegrid_cams_pane_g4

0x3a12,	// (0x000899c6) linegrid_cams_pane_g5

0x3a1b,	// (0x000899cf) linegrid_cams_pane_g6

0xef7b,	// (0x00094f2f) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00095339) linegrid_cams_pane_g

0x3a26,	// (0x000899da) popup_clock_analogue_window

0x3a26,	// (0x000899da) popup_clock_digital_window

0xeaa6,	// (0x00094a5a) popup_phob_thumbnail_window

0xee1b,	// (0x00094dcf) call_video_uplink_pane_g1

0x3a2f,	// (0x000899e3) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00095348) call_video_uplink_pane_g

0x3a37,	// (0x000899eb) video_uplink_pane

0x3a3f,	// (0x000899f3) mce_image_pane_g1

0x3a49,	// (0x000899fd) mce_image_pane_g2

0x3a53,	// (0x00089a07) mce_image_pane_g3

0x3a5b,	// (0x00089a0f) mce_image_pane_g4

0x3a63,	// (0x00089a17) mce_image_pane_g5

0x0004,

0xf399,	// (0x0009534d) mce_image_pane_g

0x3a6b,	// (0x00089a1f) control_top_pane_stacon_cp01_ParamLimits

0x3a6b,	// (0x00089a1f) control_top_pane_stacon_cp01

0x3a7f,	// (0x00089a33) uni_indicator_pane_stacon_cp01_ParamLimits

0x3a7f,	// (0x00089a33) uni_indicator_pane_stacon_cp01

0x3a90,	// (0x00089a44) bg_popup_sub_pane_cp03

0x3a9a,	// (0x00089a4e) chi_dic_find_pane

0x3aa2,	// (0x00089a56) listscroll_chi_dic_pane

0x3aab,	// (0x00089a5f) main_pane_chidic_g1

0x3abe,	// (0x00089a72) chi_dic_find_pane_t1

0x3acc,	// (0x00089a80) find_chidic_pane

0x3ad5,	// (0x00089a89) chi_dic_list_pane_ParamLimits

0x3ad5,	// (0x00089a89) chi_dic_list_pane

0x3ae6,	// (0x00089a9a) scroll_pane_cp020

0x3aee,	// (0x00089aa2) find_chidic_pane_t1

0xeaa6,	// (0x00094a5a) input_focus_pane_cp06

0x3afd,	// (0x00089ab1) list_chi_dic_pane_ParamLimits

0x3afd,	// (0x00089ab1) list_chi_dic_pane

0x3b0f,	// (0x00089ac3) list_chi_dic_pane_t1_ParamLimits

0x3b0f,	// (0x00089ac3) list_chi_dic_pane_t1

0xeaa6,	// (0x00094a5a) list_highlight_pane_cp020

0x3b22,	// (0x00089ad6) bg_cale_heading_pane_g1

0x3b2a,	// (0x00089ade) bg_cale_heading_pane_g2

0x3b32,	// (0x00089ae6) bg_cale_heading_pane_g3

0x3b3a,	// (0x00089aee) bg_cale_heading_pane_g4

0x3b44,	// (0x00089af8) bg_cale_heading_pane_g5

0x3b4e,	// (0x00089b02) bg_cale_heading_pane_g6

0x3b56,	// (0x00089b0a) bg_cale_heading_pane_g7

0x3b5e,	// (0x00089b12) bg_cale_heading_pane_g8

0x3b68,	// (0x00089b1c) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00095358) bg_cale_heading_pane_g

0x3b22,	// (0x00089ad6) bg_cale_side_pane_g1

0x3b72,	// (0x00089b26) bg_cale_side_pane_g2

0x3b7a,	// (0x00089b2e) bg_cale_side_pane_g3

0x3b82,	// (0x00089b36) bg_cale_side_pane_g4

0x3b8a,	// (0x00089b3e) bg_cale_side_pane_g5

0x3b92,	// (0x00089b46) bg_cale_side_pane_g6

0x3b9a,	// (0x00089b4e) bg_cale_side_pane_g7

0x3ba2,	// (0x00089b56) bg_cale_side_pane_g8

0x3baa,	// (0x00089b5e) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0009536b) bg_cale_side_pane_g

0x3bb2,	// (0x00089b66) popup_call_status_window_ParamLimits

0x3bb2,	// (0x00089b66) popup_call_status_window

0x3bfb,	// (0x00089baf) stacon_top_pane

0x3c03,	// (0x00089bb7) status_pane_ParamLimits

0x3c03,	// (0x00089bb7) status_pane

0x3c18,	// (0x00089bcc) status_small_pane

0x3c20,	// (0x00089bd4) control_pane

0xeaa6,	// (0x00094a5a) stacon_bottom_pane

0x3c28,	// (0x00089bdc) list_single_mce_smart_pane_t1_ParamLimits

0x3c28,	// (0x00089bdc) list_single_mce_smart_pane_t1

0x3c3b,	// (0x00089bef) list_single_mce_smart_pane_t2_ParamLimits

0x3c3b,	// (0x00089bef) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0009537e) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0009537e) list_single_mce_smart_pane_t

0x3c5a,	// (0x00089c0e) compass_pane

0x3c63,	// (0x00089c17) main_location2_pane_t1

0x3c75,	// (0x00089c29) main_location2_pane_t2

0x3c87,	// (0x00089c3b) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00095383) main_location2_pane_t

0x3ccb,	// (0x00089c7f) compass_pane_g1_ParamLimits

0x3ccb,	// (0x00089c7f) compass_pane_g1

0x3cd7,	// (0x00089c8b) compass_pane_t1

0x3ce6,	// (0x00089c9a) compass_pane_t2

0x0005,

0xf3d8,	// (0x0009538c) compass_pane_t

0x3d2d,	// (0x00089ce1) text_secondary_cp61

0x3dac,	// (0x00089d60) navi_pane_cams_g5

0x3e28,	// (0x00089ddc) navi_pane_im_t1

0x3e36,	// (0x00089dea) navi_pane_mp_g1_ParamLimits

0x3e36,	// (0x00089dea) navi_pane_mp_g1

0x3e4a,	// (0x00089dfe) navi_pane_mp_g2_ParamLimits

0x3e4a,	// (0x00089dfe) navi_pane_mp_g2

0x3e56,	// (0x00089e0a) navi_pane_mp_g3_ParamLimits

0x3e56,	// (0x00089e0a) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000953a0) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000953a0) navi_pane_mp_g

0x3e62,	// (0x00089e16) navi_pane_mp_t1

0x3e70,	// (0x00089e24) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000953a7) navi_pane_mp_t

0x3f1d,	// (0x00089ed1) navi_pane_vt_g1

0x3e62,	// (0x00089e16) navi_pane_vt_t1

0x3f25,	// (0x00089ed9) navi_slider_pane

0x3f35,	// (0x00089ee9) zooming_pane

0x3f3d,	// (0x00089ef1) navi_slider_pane_g1

0xb440,	// (0x000913f4) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000953ae) navi_slider_pane_g

0x3f61,	// (0x00089f15) aid_levels_zoom

0x3f69,	// (0x00089f1d) zooming_pane_g1

0x3f71,	// (0x00089f25) zooming_pane_g2

0x3f71,	// (0x00089f25) zooming_pane_g3

0x0002,

0xf409,	// (0x000953bd) zooming_pane_g

0x3f79,	// (0x00089f2d) level_10_zoom

0x3f82,	// (0x00089f36) level_11_zoom

0x3f8b,	// (0x00089f3f) level_1_zoom

0x3f94,	// (0x00089f48) level_2_zoom

0x3f9d,	// (0x00089f51) level_3_zoom

0x3fa6,	// (0x00089f5a) level_4_zoom

0x3faf,	// (0x00089f63) level_5_zoom

0x3fb8,	// (0x00089f6c) level_6_zoom

0x3fc1,	// (0x00089f75) level_7_zoom

0x3fca,	// (0x00089f7e) level_8_zoom

0x3fd3,	// (0x00089f87) level_9_zoom

0x3fe4,	// (0x00089f98) popup_phob_thumbnail_window_g1

0x3fec,	// (0x00089fa0) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000953c4) popup_phob_thumbnail_window_g

0xb524,	// (0x000914d8) level_1_location

0xb52c,	// (0x000914e0) level_2_location

0xb534,	// (0x000914e8) level_3_location

0xb53c,	// (0x000914f0) level_4_location

0x3f35,	// (0x00089ee9) level_5_location

0x3ff4,	// (0x00089fa8) mce_icon_pane_g1

0x3ffe,	// (0x00089fb2) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000953c9) mce_icon_pane_g

0x4006,	// (0x00089fba) main_mup_pane_g1_ParamLimits

0x4006,	// (0x00089fba) main_mup_pane_g1

0x401c,	// (0x00089fd0) main_mup_pane_g2_ParamLimits

0x401c,	// (0x00089fd0) main_mup_pane_g2

0x4034,	// (0x00089fe8) main_mup_pane_g3_ParamLimits

0x4034,	// (0x00089fe8) main_mup_pane_g3

0x404c,	// (0x0008a000) main_mup_pane_g4_ParamLimits

0x404c,	// (0x0008a000) main_mup_pane_g4

0x4064,	// (0x0008a018) main_mup_pane_g5_ParamLimits

0x4064,	// (0x0008a018) main_mup_pane_g5

0x4080,	// (0x0008a034) main_mup_pane_g6_ParamLimits

0x4080,	// (0x0008a034) main_mup_pane_g6

0x4098,	// (0x0008a04c) main_mup_pane_g7_ParamLimits

0x4098,	// (0x0008a04c) main_mup_pane_g7

0x40b0,	// (0x0008a064) main_mup_pane_g8_ParamLimits

0x40b0,	// (0x0008a064) main_mup_pane_g8

0x40ca,	// (0x0008a07e) main_mup_pane_g9_ParamLimits

0x40ca,	// (0x0008a07e) main_mup_pane_g9

0x40e4,	// (0x0008a098) main_mup_pane_g10_ParamLimits

0x40e4,	// (0x0008a098) main_mup_pane_g10

0x40fe,	// (0x0008a0b2) main_mup_pane_g11_ParamLimits

0x40fe,	// (0x0008a0b2) main_mup_pane_g11

0x4112,	// (0x0008a0c6) main_mup_pane_g12_ParamLimits

0x4112,	// (0x0008a0c6) main_mup_pane_g12

0x4128,	// (0x0008a0dc) main_mup_pane_g13_ParamLimits

0x4128,	// (0x0008a0dc) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000953ce) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000953ce) main_mup_pane_g

0x413c,	// (0x0008a0f0) main_mup_pane_t1_ParamLimits

0x413c,	// (0x0008a0f0) main_mup_pane_t1

0x4156,	// (0x0008a10a) main_mup_pane_t2_ParamLimits

0x4156,	// (0x0008a10a) main_mup_pane_t2

0x416e,	// (0x0008a122) main_mup_pane_t3_ParamLimits

0x416e,	// (0x0008a122) main_mup_pane_t3

0x4186,	// (0x0008a13a) main_mup_pane_t4_ParamLimits

0x4186,	// (0x0008a13a) main_mup_pane_t4

0x41a4,	// (0x0008a158) main_mup_pane_t5_ParamLimits

0x41a4,	// (0x0008a158) main_mup_pane_t5

0x41b9,	// (0x0008a16d) main_mup_pane_t6_ParamLimits

0x41b9,	// (0x0008a16d) main_mup_pane_t6

0x0005,

0xf435,	// (0x000953e9) main_mup_pane_t_ParamLimits

0xf435,	// (0x000953e9) main_mup_pane_t

0x41cb,	// (0x0008a17f) mup_progress_pane_ParamLimits

0x41cb,	// (0x0008a17f) mup_progress_pane

0x41d7,	// (0x0008a18b) mup_visualizer_pane_ParamLimits

0x41d7,	// (0x0008a18b) mup_visualizer_pane

0x4207,	// (0x0008a1bb) mup_volume_pane_ParamLimits

0x4207,	// (0x0008a1bb) mup_volume_pane

0x4225,	// (0x0008a1d9) mup_visualizer_pane_g1_ParamLimits

0x4225,	// (0x0008a1d9) mup_visualizer_pane_g1

0x4225,	// (0x0008a1d9) mup_visualizer_pane_g2_ParamLimits

0x4225,	// (0x0008a1d9) mup_visualizer_pane_g2

0x3ccb,	// (0x00089c7f) mup_visualizer_pane_g3_ParamLimits

0x3ccb,	// (0x00089c7f) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000953f6) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000953f6) mup_visualizer_pane_g

0xee1b,	// (0x00094dcf) mup_volume_pane_g1

0x423b,	// (0x0008a1ef) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000953fd) mup_volume_pane_g

0xee1b,	// (0x00094dcf) mup_progress_pane_g1

0x4244,	// (0x0008a1f8) mup_progress_pane_g2

0x424d,	// (0x0008a201) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00095402) mup_progress_pane_g

0xeaa6,	// (0x00094a5a) bg_popup_window_pane_cp05

0x4256,	// (0x0008a20a) heading_pane_cp02_ParamLimits

0x4256,	// (0x0008a20a) heading_pane_cp02

0x4270,	// (0x0008a224) list_popup_blid_pane

0x4278,	// (0x0008a22c) list_blid_sat_info_pane_ParamLimits

0x4278,	// (0x0008a22c) list_blid_sat_info_pane

0x428b,	// (0x0008a23f) list_blid_sat_info_pane_g1

0x4293,	// (0x0008a247) list_blid_sat_info_pane_t1

0x4399,	// (0x0008a34d) mup_equalizer_pane_ParamLimits

0x4399,	// (0x0008a34d) mup_equalizer_pane

0x43b2,	// (0x0008a366) mup_equalizer_pane_cp1_ParamLimits

0x43b2,	// (0x0008a366) mup_equalizer_pane_cp1

0x43cf,	// (0x0008a383) mup_equalizer_pane_cp2_ParamLimits

0x43cf,	// (0x0008a383) mup_equalizer_pane_cp2

0x43ec,	// (0x0008a3a0) mup_equalizer_pane_cp3_ParamLimits

0x43ec,	// (0x0008a3a0) mup_equalizer_pane_cp3

0x440d,	// (0x0008a3c1) mup_equalizer_pane_cp4_ParamLimits

0x440d,	// (0x0008a3c1) mup_equalizer_pane_cp4

0x442e,	// (0x0008a3e2) mup_equalizer_pane_cp5

0x4442,	// (0x0008a3f6) mup_equalizer_pane_cp6

0x4456,	// (0x0008a40a) mup_equalizer_pane_cp7

0x5c92,	// (0x0008bc46) bg_popup_call_poc_act_pane_g9

0x5c9a,	// (0x0008bc4e) bg_popup_call_poc_act_pane_g10

0x5ca2,	// (0x0008bc56) bg_popup_call_poc_act_pane_g11

0x000a,

0xed01,	// (0x00094cb5) mup_scale_pane

0xee1b,	// (0x00094dcf) mup_scale_pane_g1

0x446a,	// (0x0008a41e) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0009541e) mup_scale_pane_g

0x44a0,	// (0x0008a454) msg_data_pane

0x44a8,	// (0x0008a45c) scroll_pane_cp017

0x03aa,	// (0x0008635e) bg_list_pane_cp04_ParamLimits

0x03aa,	// (0x0008635e) bg_list_pane_cp04

0x44b0,	// (0x0008a464) msg_data_pane_g1

0x44b8,	// (0x0008a46c) msg_data_pane_g2

0x44c2,	// (0x0008a476) msg_data_pane_g3

0x44ca,	// (0x0008a47e) msg_data_pane_g4

0x44d2,	// (0x0008a486) msg_data_pane_g5

0x44da,	// (0x0008a48e) msg_data_pane_g6

0x44e2,	// (0x0008a496) msg_data_pane_g7

0x0006,

0xf479,	// (0x0009542d) msg_data_pane_g

0x03ca,	// (0x0008637e) msg_text_pane_ParamLimits

0x03ca,	// (0x0008637e) msg_text_pane

0x44ea,	// (0x0008a49e) qrid_highlight_pane_cp011_ParamLimits

0x44ea,	// (0x0008a49e) qrid_highlight_pane_cp011

0xeaa6,	// (0x00094a5a) msg_body_pane

0xeaa6,	// (0x00094a5a) msg_header_pane

0x4509,	// (0x0008a4bd) input_focus_pane_cp07

0x03fa,	// (0x000863ae) msg_header_pane_t1_ParamLimits

0x03fa,	// (0x000863ae) msg_header_pane_t1

0x040c,	// (0x000863c0) msg_header_pane_t2_ParamLimits

0x040c,	// (0x000863c0) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00095441) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00095441) msg_header_pane_t

0x451e,	// (0x0008a4d2) msg_body_pane_g1

0x041e,	// (0x000863d2) msg_body_pane_t1_ParamLimits

0x041e,	// (0x000863d2) msg_body_pane_t1

0x044f,	// (0x00086403) msg_body_pane_t2_ParamLimits

0x044f,	// (0x00086403) msg_body_pane_t2

0x0461,	// (0x00086415) msg_body_pane_t3_ParamLimits

0x0461,	// (0x00086415) msg_body_pane_t3

0x0002,

0xf492,	// (0x00095446) msg_body_pane_t_ParamLimits

0xf492,	// (0x00095446) msg_body_pane_t

0x4560,	// (0x0008a514) main_viewer_pane_g1_ParamLimits

0x4560,	// (0x0008a514) main_viewer_pane_g1

0x456e,	// (0x0008a522) main_viewer_pane_g2_ParamLimits

0x456e,	// (0x0008a522) main_viewer_pane_g2

0x457c,	// (0x0008a530) main_viewer_pane_g3_ParamLimits

0x457c,	// (0x0008a530) main_viewer_pane_g3

0x458b,	// (0x0008a53f) main_viewer_pane_g4_ParamLimits

0x458b,	// (0x0008a53f) main_viewer_pane_g4

0xb46a,	// (0x0009141e) main_viewer_pane_g5_ParamLimits

0xb46a,	// (0x0009141e) main_viewer_pane_g5

0xb46a,	// (0x0009141e) main_viewer_pane_g7_ParamLimits

0xb46a,	// (0x0009141e) main_viewer_pane_g7

0xb47c,	// (0x00091430) main_viewer_pane_g8_ParamLimits

0xb47c,	// (0x00091430) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00095456) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00095456) main_viewer_pane_g

0x459a,	// (0x0008a54e) viewer_content_pane_ParamLimits

0x459a,	// (0x0008a54e) viewer_content_pane

0x45d5,	// (0x0008a589) main_postcard_pane_g1_ParamLimits

0x45d5,	// (0x0008a589) main_postcard_pane_g1

0x45eb,	// (0x0008a59f) main_postcard_pane_g2_ParamLimits

0x45eb,	// (0x0008a59f) main_postcard_pane_g2

0x4601,	// (0x0008a5b5) main_postcard_pane_g3_ParamLimits

0x4601,	// (0x0008a5b5) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00095467) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00095467) main_postcard_pane_g

0x4618,	// (0x0008a5cc) main_postcard_pane_g4

0xb678,	// (0x0009162c) smil_status_volume_pane_g2

0x465b,	// (0x0008a60f) postcard_pane_ParamLimits

0x465b,	// (0x0008a60f) postcard_pane

0x469d,	// (0x0008a651) postcard_pane_g1_ParamLimits

0x469d,	// (0x0008a651) postcard_pane_g1

0x46ab,	// (0x0008a65f) postcard_pane_g2_ParamLimits

0x46ab,	// (0x0008a65f) postcard_pane_g2

0x46b7,	// (0x0008a66b) postcard_pane_g3_ParamLimits

0x46b7,	// (0x0008a66b) postcard_pane_g3

0x46c3,	// (0x0008a677) postcard_pane_g4_ParamLimits

0x46c3,	// (0x0008a677) postcard_pane_g4

0x46d1,	// (0x0008a685) postcard_pane_g5_ParamLimits

0x46d1,	// (0x0008a685) postcard_pane_g5

0x46e6,	// (0x0008a69a) postcard_pane_g6_ParamLimits

0x46e6,	// (0x0008a69a) postcard_pane_g6

0x469d,	// (0x0008a651) postcard_pane_g7_ParamLimits

0x469d,	// (0x0008a651) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00095474) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00095474) postcard_pane_g

0x46fa,	// (0x0008a6ae) main_mp2_pane_g1_ParamLimits

0x46fa,	// (0x0008a6ae) main_mp2_pane_g1

0x4706,	// (0x0008a6ba) main_mp2_pane_g2_ParamLimits

0x4706,	// (0x0008a6ba) main_mp2_pane_g2

0x4712,	// (0x0008a6c6) main_mp2_pane_g3_ParamLimits

0x4712,	// (0x0008a6c6) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00095483) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00095483) main_mp2_pane_g

0x471e,	// (0x0008a6d2) main_mp2_pane_t1_ParamLimits

0x471e,	// (0x0008a6d2) main_mp2_pane_t1

0x4733,	// (0x0008a6e7) main_mp2_pane_t2_ParamLimits

0x4733,	// (0x0008a6e7) main_mp2_pane_t2

0x4745,	// (0x0008a6f9) main_mp2_pane_t3_ParamLimits

0x4745,	// (0x0008a6f9) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0009548a) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0009548a) main_mp2_pane_t

0x4757,	// (0x0008a70b) pec_content_pane_ParamLimits

0x4757,	// (0x0008a70b) pec_content_pane

0x26ee,	// (0x000886a2) scroll_pane_cp015

0x4769,	// (0x0008a71d) pec_attribute_pane_ParamLimits

0x4769,	// (0x0008a71d) pec_attribute_pane

0x4779,	// (0x0008a72d) pec_content_pane_g1_ParamLimits

0x4779,	// (0x0008a72d) pec_content_pane_g1

0x4785,	// (0x0008a739) pec_content_pane_t1_ParamLimits

0x4785,	// (0x0008a739) pec_content_pane_t1

0x4797,	// (0x0008a74b) pec_content_pane_t2_ParamLimits

0x4797,	// (0x0008a74b) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00095491) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00095491) pec_content_pane_t

0x47a9,	// (0x0008a75d) list_single_graphic_pane_cp01_ParamLimits

0x47a9,	// (0x0008a75d) list_single_graphic_pane_cp01

0xed01,	// (0x00094cb5) bg_popup_sub_pane_cp04

0x47be,	// (0x0008a772) popup_mup_playback_window_g1

0x47ca,	// (0x0008a77e) popup_mup_playback_window_t1

0x47df,	// (0x0008a793) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00095496) popup_mup_playback_window_t

0x4834,	// (0x0008a7e8) main_image_pane_g1_ParamLimits

0x4834,	// (0x0008a7e8) main_image_pane_g1

0x4911,	// (0x0008a8c5) scroll_pane_cp018_ParamLimits

0x4911,	// (0x0008a8c5) scroll_pane_cp018

0x4929,	// (0x0008a8dd) scroll_pane_cp016_ParamLimits

0x4929,	// (0x0008a8dd) scroll_pane_cp016

0x495d,	// (0x0008a911) smil2_image_pane_ParamLimits

0x495d,	// (0x0008a911) smil2_image_pane

0x498d,	// (0x0008a941) smil2_root_pane_ParamLimits

0x498d,	// (0x0008a941) smil2_root_pane

0x49c5,	// (0x0008a979) smil2_text_pane_ParamLimits

0x49c5,	// (0x0008a979) smil2_text_pane

0xeaa6,	// (0x00094a5a) bg_list_pane_cp06

0x4a4d,	// (0x0008aa01) grid_radio_pane

0xeaa6,	// (0x00094a5a) bg_popup_window_pane_cp06

0x4a55,	// (0x0008aa09) main_fmradio_pane_t1

0x393c,	// (0x000898f0) heading_pane_cp04

0x4a63,	// (0x0008aa17) main_fmradio_pane_t2

0x5d2c,	// (0x0008bce0) popup_cale_lunar_info_window_g1

0x4a71,	// (0x0008aa25) main_fmradio_pane_t3

0x5d34,	// (0x0008bce8) popup_cale_lunar_info_window_g2

0x4a7f,	// (0x0008aa33) main_fmradio_pane_t4

0x0001,

0x4a8d,	// (0x0008aa41) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x00095571) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000954ab) main_fmradio_pane_t

0x4a9b,	// (0x0008aa4f) wait_bar_pane_cp03

0x4aa3,	// (0x0008aa57) cell_fmradio_pane_ParamLimits

0x4aa3,	// (0x0008aa57) cell_fmradio_pane

0x469d,	// (0x0008a651) cell_fmradio_pane_g1_ParamLimits

0x469d,	// (0x0008a651) cell_fmradio_pane_g1

0xeaa6,	// (0x00094a5a) grid_highlight_pane_cp011

0x4ab6,	// (0x0008aa6a) poc_content_pane_ParamLimits

0x4ab6,	// (0x0008aa6a) poc_content_pane

0x4ac8,	// (0x0008aa7c) scroll_pane_cp019

0x4ad0,	// (0x0008aa84) popup_call_poc_act_window_ParamLimits

0x4ad0,	// (0x0008aa84) popup_call_poc_act_window

0x4af4,	// (0x0008aaa8) popup_call_poc_inact_window_ParamLimits

0x4af4,	// (0x0008aaa8) popup_call_poc_inact_window

0xf594,	// (0x00095548) bg_popup_call_poc_act_pane_g

0x5c1a,	// (0x0008bbce) bg_popup_call_poc_inact_pane_g1

0x5c22,	// (0x0008bbd6) bg_popup_call_poc_inact_pane_g2

0x4b0d,	// (0x0008aac1) popup_call_poc_act_window_g2

0x5c2a,	// (0x0008bbde) bg_popup_call_poc_inact_pane_g3

0x5c32,	// (0x0008bbe6) bg_popup_call_poc_inact_pane_g4

0x5c3a,	// (0x0008bbee) bg_popup_call_poc_inact_pane_g5

0x4b15,	// (0x0008aac9) popup_call_poc_act_window_t1_ParamLimits

0x4b15,	// (0x0008aac9) popup_call_poc_act_window_t1

0x4b3d,	// (0x0008aaf1) popup_call_poc_act_window_t2_ParamLimits

0x4b3d,	// (0x0008aaf1) popup_call_poc_act_window_t2

0x4b65,	// (0x0008ab19) popup_call_poc_act_window_t3_ParamLimits

0x4b65,	// (0x0008ab19) popup_call_poc_act_window_t3

0x4b8d,	// (0x0008ab41) popup_call_poc_act_window_t4_ParamLimits

0x4b8d,	// (0x0008ab41) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000954b6) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000954b6) popup_call_poc_act_window_t

0x5c42,	// (0x0008bbf6) bg_popup_call_poc_inact_pane_g6

0x5c4a,	// (0x0008bbfe) bg_popup_call_poc_inact_pane_g7

0x5c52,	// (0x0008bc06) bg_popup_call_poc_inact_pane_g8

0x4b9f,	// (0x0008ab53) popup_call_poc_inact_window_g2

0x5c5a,	// (0x0008bc0e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x00095535) bg_popup_call_poc_inact_pane_g

0x4ba7,	// (0x0008ab5b) popup_call_poc_inact_window_t1_ParamLimits

0x4ba7,	// (0x0008ab5b) popup_call_poc_inact_window_t1

0x4bbc,	// (0x0008ab70) popup_call_poc_inact_window_t2_ParamLimits

0x4bbc,	// (0x0008ab70) popup_call_poc_inact_window_t2

0x4bd1,	// (0x0008ab85) popup_call_poc_inact_window_t3_ParamLimits

0x4bd1,	// (0x0008ab85) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000954bf) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000954bf) popup_call_poc_inact_window_t

0xb5eb,	// (0x0009159f) context_pane_ParamLimits

0x62b5,	// (0x0008c269) signal_pane_ParamLimits

0x3f35,	// (0x00089ee9) main_call2_pane

0xb5c4,	// (0x00091578) popup_phob_thumbnail2_window_ParamLimits

0xb5c4,	// (0x00091578) popup_phob_thumbnail2_window

0xb452,	// (0x00091406) aid_hotspot_pointer_arrow_pane

0xb45a,	// (0x0009140e) aid_hotspot_pointer_hand_pane

0x5dcf,	// (0x0008bd83) phob_pre_status_pane_g5

0x1e66,	// (0x00087e1a) cams_zoom_pane_ParamLimits

0x1e75,	// (0x00087e29) image_vga_pane_ParamLimits

0x1e8f,	// (0x00087e43) main_camera_pane_g1_ParamLimits

0x1ea1,	// (0x00087e55) main_camera_pane_g2_ParamLimits

0x1eb1,	// (0x00087e65) main_camera_pane_g3_ParamLimits

0x1ec1,	// (0x00087e75) main_camera_pane_g4_ParamLimits

0x1ed1,	// (0x00087e85) main_camera_pane_g5_ParamLimits

0x1ee1,	// (0x00087e95) main_camera_pane_g6_ParamLimits

0x1ef3,	// (0x00087ea7) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000951be) main_camera_pane_g_ParamLimits

0x1f03,	// (0x00087eb7) main_camera_pane_t1_ParamLimits

0x1f19,	// (0x00087ecd) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000951cf) main_camera_pane_t_ParamLimits

0xed01,	// (0x00094cb5) bg_popup_preview_window_pane_cp01_ParamLimits

0xed01,	// (0x00094cb5) bg_popup_preview_window_pane_cp01

0x4be6,	// (0x0008ab9a) popup_phob_thumbnail2_window_g1_ParamLimits

0x4be6,	// (0x0008ab9a) popup_phob_thumbnail2_window_g1

0xeaa6,	// (0x00094a5a) call2_cli_visual_pane

0x4c0d,	// (0x0008abc1) popup_call2_audio_conf_window_ParamLimits

0x4c0d,	// (0x0008abc1) popup_call2_audio_conf_window

0x4c2d,	// (0x0008abe1) popup_call2_audio_first_window_ParamLimits

0x4c2d,	// (0x0008abe1) popup_call2_audio_first_window

0x4cc3,	// (0x0008ac77) popup_call2_audio_in_window_ParamLimits

0x4cc3,	// (0x0008ac77) popup_call2_audio_in_window

0x4d0b,	// (0x0008acbf) popup_call2_audio_out_window_ParamLimits

0x4d0b,	// (0x0008acbf) popup_call2_audio_out_window

0x4d75,	// (0x0008ad29) popup_call2_audio_second_window_ParamLimits

0x4d75,	// (0x0008ad29) popup_call2_audio_second_window

0x4ddb,	// (0x0008ad8f) popup_call2_audio_wait_window_ParamLimits

0x4ddb,	// (0x0008ad8f) popup_call2_audio_wait_window

0xeaa6,	// (0x00094a5a) bg_popup_call2_act_pane_cp03

0xece3,	// (0x00094c97) list_conf_pane_cp

0x4e15,	// (0x0008adc9) popup_call2_audio_conf_window_t1

0x39bd,	// (0x00089971) list_single_graphic_popup_conf2_pane_ParamLimits

0x39bd,	// (0x00089971) list_single_graphic_popup_conf2_pane

0x39d0,	// (0x00089984) list_highlight_pane_cp04

0x4e23,	// (0x0008add7) list_single_graphic_popup_conf2_pane_g1

0x39e1,	// (0x00089995) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000954c6) list_single_graphic_popup_conf2_pane_g

0x4e2d,	// (0x0008ade1) list_single_graphic_popup_conf2_pane_t1

0x4e3b,	// (0x0008adef) bg_popup_call2_act_pane_cp01_ParamLimits

0x4e3b,	// (0x0008adef) bg_popup_call2_act_pane_cp01

0x4ec5,	// (0x0008ae79) call_type_pane_cp05_ParamLimits

0x4ec5,	// (0x0008ae79) call_type_pane_cp05

0x4f19,	// (0x0008aecd) popup_call2_audio_second_window_g1_ParamLimits

0x4f19,	// (0x0008aecd) popup_call2_audio_second_window_g1

0x4f6d,	// (0x0008af21) popup_call2_audio_second_window_g2_ParamLimits

0x4f6d,	// (0x0008af21) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000954cb) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000954cb) popup_call2_audio_second_window_g

0x4fd2,	// (0x0008af86) popup_call2_audio_second_window_t1_ParamLimits

0x4fd2,	// (0x0008af86) popup_call2_audio_second_window_t1

0x508d,	// (0x0008b041) popup_call2_audio_second_window_t2_ParamLimits

0x508d,	// (0x0008b041) popup_call2_audio_second_window_t2

0x50e0,	// (0x0008b094) popup_call2_audio_second_window_t3_ParamLimits

0x50e0,	// (0x0008b094) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000954d2) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000954d2) popup_call2_audio_second_window_t

0xeaa6,	// (0x00094a5a) bg_popup_call2_in_pane_cp02

0xeab0,	// (0x00094a64) call_type_pane_cp04

0xeab8,	// (0x00094a6c) popup_call2_audio_wait_window_g1

0xeac0,	// (0x00094a74) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000950a9) popup_call2_audio_wait_window_g

0xeac8,	// (0x00094a7c) popup_call2_audio_wait_window_t3

0x51d3,	// (0x0008b187) bg_popup_call2_act_pane_ParamLimits

0x51d3,	// (0x0008b187) bg_popup_call2_act_pane

0x5293,	// (0x0008b247) call_type_pane_cp03_ParamLimits

0x5293,	// (0x0008b247) call_type_pane_cp03

0x52f7,	// (0x0008b2ab) popup_call2_audio_first_window_g1_ParamLimits

0x52f7,	// (0x0008b2ab) popup_call2_audio_first_window_g1

0x5367,	// (0x0008b31b) popup_call2_audio_first_window_g2_ParamLimits

0x5367,	// (0x0008b31b) popup_call2_audio_first_window_g2

0x4225,	// (0x0008a1d9) popup_call2_audio_first_window_g3_ParamLimits

0x4225,	// (0x0008a1d9) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000954db) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000954db) popup_call2_audio_first_window_g

0x5445,	// (0x0008b3f9) popup_call2_audio_first_window_t1_ParamLimits

0x5445,	// (0x0008b3f9) popup_call2_audio_first_window_t1

0x5548,	// (0x0008b4fc) popup_call2_audio_first_window_t4_ParamLimits

0x5548,	// (0x0008b4fc) popup_call2_audio_first_window_t4

0x562b,	// (0x0008b5df) popup_call2_audio_first_window_t5_ParamLimits

0x562b,	// (0x0008b5df) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000954e6) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000954e6) popup_call2_audio_first_window_t

0xecf9,	// (0x00094cad) bg_popup_call2_act_pane_g1

0x5d3c,	// (0x0008bcf0) popup_cale_lunar_info_window_t1

0x5d4a,	// (0x0008bcfe) popup_cale_lunar_info_window_t2

0x5d58,	// (0x0008bd0c) popup_cale_lunar_info_window_t3

0xeaa6,	// (0x00094a5a) bg_popup_call2_bubble_pane

0x572c,	// (0x0008b6e0) bg_popup_call2_in_pane_cp01_ParamLimits

0x572c,	// (0x0008b6e0) bg_popup_call2_in_pane_cp01

0xe782,	// (0x00094736) call_type_pane_cp02

0x5774,	// (0x0008b728) popup_call2_audio_out_window_g1_ParamLimits

0x5774,	// (0x0008b728) popup_call2_audio_out_window_g1

0x57a0,	// (0x0008b754) popup_call2_audio_out_window_g2_ParamLimits

0x57a0,	// (0x0008b754) popup_call2_audio_out_window_g2

0x57c8,	// (0x0008b77c) popup_call2_audio_out_window_g3_ParamLimits

0x57c8,	// (0x0008b77c) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000954ef) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000954ef) popup_call2_audio_out_window_g

0x5803,	// (0x0008b7b7) popup_call2_audio_out_window_t1_ParamLimits

0x5803,	// (0x0008b7b7) popup_call2_audio_out_window_t1

0x5862,	// (0x0008b816) popup_call2_audio_out_window_t2_ParamLimits

0x5862,	// (0x0008b816) popup_call2_audio_out_window_t2

0x58b6,	// (0x0008b86a) popup_call2_audio_out_window_t3_ParamLimits

0x58b6,	// (0x0008b86a) popup_call2_audio_out_window_t3

0x58cc,	// (0x0008b880) popup_call2_audio_out_window_t4_ParamLimits

0x58cc,	// (0x0008b880) popup_call2_audio_out_window_t4

0x58e2,	// (0x0008b896) popup_call2_audio_out_window_t5_ParamLimits

0x58e2,	// (0x0008b896) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000954f8) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000954f8) popup_call2_audio_out_window_t

0x5946,	// (0x0008b8fa) bg_popup_call2_in_pane_ParamLimits

0x5946,	// (0x0008b8fa) bg_popup_call2_in_pane

0x59a2,	// (0x0008b956) popup_call2_audio_in_window_g1_ParamLimits

0x59a2,	// (0x0008b956) popup_call2_audio_in_window_g1

0x59da,	// (0x0008b98e) popup_call2_audio_in_window_g2_ParamLimits

0x59da,	// (0x0008b98e) popup_call2_audio_in_window_g2

0x5a12,	// (0x0008b9c6) popup_call2_audio_in_window_g3_ParamLimits

0x5a12,	// (0x0008b9c6) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00095505) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00095505) popup_call2_audio_in_window_g

0x5a6a,	// (0x0008ba1e) popup_call2_audio_in_window_t1_ParamLimits

0x5a6a,	// (0x0008ba1e) popup_call2_audio_in_window_t1

0x5aea,	// (0x0008ba9e) popup_call2_audio_in_window_t2_ParamLimits

0x5aea,	// (0x0008ba9e) popup_call2_audio_in_window_t2

0x5b6a,	// (0x0008bb1e) popup_call2_audio_in_window_t3_ParamLimits

0x5b6a,	// (0x0008bb1e) popup_call2_audio_in_window_t3

0x5b84,	// (0x0008bb38) popup_call2_audio_in_window_t4_ParamLimits

0x5b84,	// (0x0008bb38) popup_call2_audio_in_window_t4

0x5b96,	// (0x0008bb4a) popup_call2_audio_in_window_t5_ParamLimits

0x5b96,	// (0x0008bb4a) popup_call2_audio_in_window_t5

0x5bab,	// (0x0008bb5f) popup_call2_audio_in_window_t6_ParamLimits

0x5bab,	// (0x0008bb5f) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0009550e) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0009550e) popup_call2_audio_in_window_t

0xecf9,	// (0x00094cad) bg_popup_call2_in_pane_g1

0xb494,	// (0x00091448) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x00095576) popup_cale_lunar_info_window_t

0xed01,	// (0x00094cb5) bg_popup_call2_rect_pane_ParamLimits

0xed01,	// (0x00094cb5) bg_popup_call2_rect_pane

0xeaa6,	// (0x00094a5a) call2_cli_visual_graphic_pane

0xeaa6,	// (0x00094a5a) call2_cli_visual_text_pane

0xb68b,	// (0x0009163f) smil_status_volume_pane_g3

0x0002,

0xee1b,	// (0x00094dcf) call2_cli_visual_graphic_pane_g1

0xee1b,	// (0x00094dcf) call2_cli_visual_graphic_pane_g2

0xee1b,	// (0x00094dcf) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0009551b) call2_cli_visual_graphic_pane_g

0x5bda,	// (0x0008bb8e) bg_popup_call2_rect_pane_g1

0xeea7,	// (0x00094e5b) bg_popup_call2_rect_pane_g2

0x5be2,	// (0x0008bb96) bg_popup_call2_rect_pane_g3

0x5bea,	// (0x0008bb9e) bg_popup_call2_rect_pane_g4

0x5bf2,	// (0x0008bba6) bg_popup_call2_rect_pane_g5

0x5bfa,	// (0x0008bbae) bg_popup_call2_rect_pane_g6

0x5c02,	// (0x0008bbb6) bg_popup_call2_rect_pane_g7

0x5c0a,	// (0x0008bbbe) bg_popup_call2_rect_pane_g8

0x5c12,	// (0x0008bbc6) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00095522) bg_popup_call2_rect_pane_g

0x5c1a,	// (0x0008bbce) bg_popup_call2_bubble_pane_g1

0x5c22,	// (0x0008bbd6) bg_popup_call2_bubble_pane_g2

0x5c2a,	// (0x0008bbde) bg_popup_call2_bubble_pane_g3

0x5c32,	// (0x0008bbe6) bg_popup_call2_bubble_pane_g4

0x5c3a,	// (0x0008bbee) bg_popup_call2_bubble_pane_g5

0x5c42,	// (0x0008bbf6) bg_popup_call2_bubble_pane_g6

0x5c4a,	// (0x0008bbfe) bg_popup_call2_bubble_pane_g7

0x5c52,	// (0x0008bc06) bg_popup_call2_bubble_pane_g8

0x5c5a,	// (0x0008bc0e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00095535) bg_popup_call2_bubble_pane_g

0x17d2,	// (0x00087786) aid_cale_week_size_cell_pane

0x1f2f,	// (0x00087ee3) aid_cams_cif_uncrop_pane_ParamLimits

0x1f2f,	// (0x00087ee3) aid_cams_cif_uncrop_pane

0x2103,	// (0x000880b7) aid_cams_size_cell_ParamLimits

0x2103,	// (0x000880b7) aid_cams_size_cell

0x2117,	// (0x000880cb) grid_cams_pane_ParamLimits

0x2131,	// (0x000880e5) linegrid_cams_pane_ParamLimits

0x227f,	// (0x00088233) call_video_pane_t1

0x229d,	// (0x00088251) call_video_pane_t2

0x0001,

0xf26e,	// (0x00095222) call_video_pane_t

0x292d,	// (0x000888e1) aid_cale_month_size_cell_pane_ParamLimits

0x292d,	// (0x000888e1) aid_cale_month_size_cell_pane

0xf60b,	// (0x000955bf) smil_status_volume_pane_g

0xb698,	// (0x0009164c) volume_smil_pane_ParamLimits

0xb287,	// (0x0009123b) aid_popup2_width_pane

0x173a,	// (0x000876ee) cell_qdial_pane_g4_ParamLimits

0x173a,	// (0x000876ee) cell_qdial_pane_g4

0x3cab,	// (0x00089c5f) aid_blid_cardinal_pane_ParamLimits

0x3cb7,	// (0x00089c6b) aid_blid_destination_pane_ParamLimits

0x3cb7,	// (0x00089c6b) aid_blid_destination_pane

0xed01,	// (0x00094cb5) bg_popup_call_poc_act_pane_ParamLimits

0xed01,	// (0x00094cb5) bg_popup_call_poc_act_pane

0xed01,	// (0x00094cb5) bg_popup_call_poc_inact_pane_ParamLimits

0xed01,	// (0x00094cb5) bg_popup_call_poc_inact_pane

0x5c6a,	// (0x0008bc1e) bg_popup_call_poc_act_pane_g1

0x5c72,	// (0x0008bc26) bg_popup_call_poc_act_pane_g2

0x5c7a,	// (0x0008bc2e) bg_popup_call_poc_act_pane_g3

0x5c32,	// (0x0008bbe6) bg_popup_call_poc_act_pane_g4

0x5c3a,	// (0x0008bbee) bg_popup_call_poc_act_pane_g5

0x5c82,	// (0x0008bc36) bg_popup_call_poc_act_pane_g6

0x5c4a,	// (0x0008bbfe) bg_popup_call_poc_act_pane_g7

0x5c8a,	// (0x0008bc3e) bg_popup_call_poc_act_pane_g8

0xeaa6,	// (0x00094a5a) main_usb_pane

0xb59f,	// (0x00091553) popup_cale_lunar_info_window

0x25d5,	// (0x00088589) im_reading_pane_t1_ParamLimits

0x260e,	// (0x000885c2) list_im_pane_ParamLimits

0x261f,	// (0x000885d3) scroll_pane_cp07_ParamLimits

0xeaa6,	// (0x00094a5a) grid_highlight_pane_cp012

0xed01,	// (0x00094cb5) mup_scale_pane_ParamLimits

0x469d,	// (0x0008a651) main_usb_pane_g1_ParamLimits

0x469d,	// (0x0008a651) main_usb_pane_g1

0x5caa,	// (0x0008bc5e) main_usb_pane_g2_ParamLimits

0x5caa,	// (0x0008bc5e) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0009555f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0009555f) main_usb_pane_g

0x5cc0,	// (0x0008bc74) main_usb_pane_t1_ParamLimits

0x5cc0,	// (0x0008bc74) main_usb_pane_t1

0x5cd2,	// (0x0008bc86) main_usb_pane_t2_ParamLimits

0x5cd2,	// (0x0008bc86) main_usb_pane_t2

0x5ce4,	// (0x0008bc98) main_usb_pane_t3_ParamLimits

0x5ce4,	// (0x0008bc98) main_usb_pane_t3

0x5cf6,	// (0x0008bcaa) main_usb_pane_t4_ParamLimits

0x5cf6,	// (0x0008bcaa) main_usb_pane_t4

0x5d08,	// (0x0008bcbc) main_usb_pane_t5_ParamLimits

0x5d08,	// (0x0008bcbc) main_usb_pane_t5

0x5d1a,	// (0x0008bcce) main_usb_pane_t6_ParamLimits

0x5d1a,	// (0x0008bcce) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x00095564) main_usb_pane_t_ParamLimits

0x3c5a,	// (0x00089c0e) aid_text_placing

0x3c63,	// (0x00089c17) main_location2_pane_t1_ParamLimits

0x3c75,	// (0x00089c29) main_location2_pane_t2_ParamLimits

0x3c87,	// (0x00089c3b) main_location2_pane_t3_ParamLimits

0x3c99,	// (0x00089c4d) main_location2_pane_t4_ParamLimits

0x3c99,	// (0x00089c4d) main_location2_pane_t4

0xf3cf,	// (0x00095383) main_location2_pane_t_ParamLimits

0xed3d,	// (0x00094cf1) find_pinb_pane_g2_ParamLimits

0xed3d,	// (0x00094cf1) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000950cf) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000950cf) find_pinb_pane_g

0xed49,	// (0x00094cfd) find_pinb_pane_t1_ParamLimits

0xed5b,	// (0x00094d0f) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000950d4) find_pinb_pane_t_ParamLimits

0xeaa6,	// (0x00094a5a) main_call3_pane

0x2e2b,	// (0x00088ddf) cale_month_day_heading_pane_t1_ParamLimits

0x2eb1,	// (0x00088e65) cale_month_day_heading_pane_t2_ParamLimits

0x2f42,	// (0x00088ef6) cale_month_day_heading_pane_t3_ParamLimits

0x2fd3,	// (0x00088f87) cale_month_day_heading_pane_t4_ParamLimits

0x3068,	// (0x0008901c) cale_month_day_heading_pane_t5_ParamLimits

0x3109,	// (0x000890bd) cale_month_day_heading_pane_t6_ParamLimits

0x31aa,	// (0x0008915e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009525a) cale_month_day_heading_pane_t_ParamLimits

0x345e,	// (0x00089412) smil_status_volume_pane

0x4679,	// (0x0008a62d) postcard_address_pane_ParamLimits

0x4679,	// (0x0008a62d) postcard_address_pane

0x468b,	// (0x0008a63f) postcard_message_pane_ParamLimits

0x468b,	// (0x0008a63f) postcard_message_pane

0x5bc0,	// (0x0008bb74) call2_cli_visual_pane_t1_ParamLimits

0x5bc0,	// (0x0008bb74) call2_cli_visual_pane_t1

0x64e2,	// (0x0008c496) postcard_message_pane_t1_ParamLimits

0x64e2,	// (0x0008c496) postcard_message_pane_t1

0x64cb,	// (0x0008c47f) postcard_address_pane_t1_ParamLimits

0x64cb,	// (0x0008c47f) postcard_address_pane_t1

0x64b7,	// (0x0008c46b) popup_call3_audio_in_window_ParamLimits

0x64b7,	// (0x0008c46b) popup_call3_audio_in_window

0x6342,	// (0x0008c2f6) bg_popup_call3_in_pane_ParamLimits

0x6342,	// (0x0008c2f6) bg_popup_call3_in_pane

0x63b8,	// (0x0008c36c) popup_call3_audio_in_window_g1_ParamLimits

0x63b8,	// (0x0008c36c) popup_call3_audio_in_window_g1

0x63d8,	// (0x0008c38c) popup_call3_audio_in_window_g2_ParamLimits

0x63d8,	// (0x0008c38c) popup_call3_audio_in_window_g2

0x63f8,	// (0x0008c3ac) popup_call3_audio_in_window_g3_ParamLimits

0x63f8,	// (0x0008c3ac) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000955c6) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000955c6) popup_call3_audio_in_window_g

0x6429,	// (0x0008c3dd) popup_call3_audio_in_window_t1_ParamLimits

0x6429,	// (0x0008c3dd) popup_call3_audio_in_window_t1

0x6467,	// (0x0008c41b) popup_call3_audio_in_window_t2_ParamLimits

0x6467,	// (0x0008c41b) popup_call3_audio_in_window_t2

0x64a5,	// (0x0008c459) popup_call3_audio_in_window_t3_ParamLimits

0x64a5,	// (0x0008c459) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000955cf) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000955cf) popup_call3_audio_in_window_t

0x3f35,	// (0x00089ee9) bg_popup_call3_rect_pane

0x5bda,	// (0x0008bb8e) bg_popup_call3_rect_pane_g1

0xeea7,	// (0x00094e5b) bg_popup_call3_rect_pane_g2

0x5be2,	// (0x0008bb96) bg_popup_call3_rect_pane_g3

0x5bea,	// (0x0008bb9e) bg_popup_call3_rect_pane_g4

0x5bf2,	// (0x0008bba6) bg_popup_call3_rect_pane_g5

0x5bfa,	// (0x0008bbae) bg_popup_call3_rect_pane_g6

0x5c02,	// (0x0008bbb6) bg_popup_call3_rect_pane_g7

0x421d,	// (0x0008a1d1) mup_visualizer_osc_pane

0x4233,	// (0x0008a1e7) mup_visualizer_spec_pane

0x6372,	// (0x0008c326) call3_video_qcif_pane_ParamLimits

0x6372,	// (0x0008c326) call3_video_qcif_pane

0x6385,	// (0x0008c339) call3_video_qcif_uncrop_pane_ParamLimits

0x6385,	// (0x0008c339) call3_video_qcif_uncrop_pane

0x6393,	// (0x0008c347) call3_video_subqcif_pane_ParamLimits

0x6393,	// (0x0008c347) call3_video_subqcif_pane

0x63a7,	// (0x0008c35b) call3_video_subqcif_uncrop_pane_ParamLimits

0x63a7,	// (0x0008c35b) call3_video_subqcif_uncrop_pane

0x6418,	// (0x0008c3cc) popup_call3_audio_in_window_g4_ParamLimits

0x6418,	// (0x0008c3cc) popup_call3_audio_in_window_g4

0x6331,	// (0x0008c2e5) mup_spec_half_pane

0x633a,	// (0x0008c2ee) mup_spec_half_pane_cp

0xb64b,	// (0x000915ff) mup_osc_middle_pane

0xb654,	// (0x00091608) mup_visualizer_osc_pane_g1

0x6311,	// (0x0008c2c5) mup_spec_bar_pane_ParamLimits

0x6311,	// (0x0008c2c5) mup_spec_bar_pane

0xb638,	// (0x000915ec) mup_spec_bar_pane_g1

0xb642,	// (0x000915f6) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000955ba) mup_spec_bar_pane_g

0x17d2,	// (0x00087786) aid_cale_week_size_cell_pane_ParamLimits

0x17ec,	// (0x000877a0) bg_cale_heading_pane_ParamLimits

0xeee4,	// (0x00094e98) bg_cale_pane_cp01_ParamLimits

0x1804,	// (0x000877b8) cale_week_corner_pane_ParamLimits

0x1823,	// (0x000877d7) cale_week_day_heading_pane_ParamLimits

0x1840,	// (0x000877f4) cale_week_scroll_pane_g1_ParamLimits

0x1853,	// (0x00087807) cale_week_scroll_pane_g2_ParamLimits

0x186b,	// (0x0008781f) cale_week_scroll_pane_g3_ParamLimits

0x1883,	// (0x00087837) cale_week_scroll_pane_g4_ParamLimits

0x189b,	// (0x0008784f) cale_week_scroll_pane_g5_ParamLimits

0x18bb,	// (0x0008786f) cale_week_scroll_pane_g6_ParamLimits

0x18db,	// (0x0008788f) cale_week_scroll_pane_g7_ParamLimits

0x18fb,	// (0x000878af) cale_week_scroll_pane_g8_ParamLimits

0x191f,	// (0x000878d3) cale_week_scroll_pane_g9_ParamLimits

0x1937,	// (0x000878eb) cale_week_scroll_pane_g10_ParamLimits

0x194f,	// (0x00087903) cale_week_scroll_pane_g11_ParamLimits

0x1967,	// (0x0008791b) cale_week_scroll_pane_g12_ParamLimits

0x197f,	// (0x00087933) cale_week_scroll_pane_g13_ParamLimits

0x197f,	// (0x00087933) cale_week_scroll_pane_g14_ParamLimits

0x197f,	// (0x00087933) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00095160) cale_week_scroll_pane_g_ParamLimits

0x19bb,	// (0x0008796f) cale_week_time_pane_ParamLimits

0x19df,	// (0x00087993) grid_cale_week_pane_ParamLimits

0xef02,	// (0x00094eb6) listscroll_cale_week_pane_t1

0xef14,	// (0x00094ec8) scroll_pane_cp08_ParamLimits

0x29af,	// (0x00088963) cale_month_corner_pane_ParamLimits

0x2db7,	// (0x00088d6b) cale_month_pane_t1

0x2dc9,	// (0x00088d7d) cale_month_week_pane_ParamLimits

0x389c,	// (0x00089850) popup_call_status_window_g1_ParamLimits

0x38b0,	// (0x00089864) popup_call_status_window_g2_ParamLimits

0x38c4,	// (0x00089878) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0009530a) popup_call_status_window_g_ParamLimits

0x392c,	// (0x000898e0) aid_call2_pane

0x03ec,	// (0x000863a0) msg_header_pane_g1

0x4679,	// (0x0008a62d) postcard_address2_pane_ParamLimits

0x4679,	// (0x0008a62d) postcard_address2_pane

0x468b,	// (0x0008a63f) postcard_message2_pane_ParamLimits

0x468b,	// (0x0008a63f) postcard_message2_pane

0x62c3,	// (0x0008c277) message2_row_pane_ParamLimits

0x62c3,	// (0x0008c277) message2_row_pane

0x62df,	// (0x0008c293) address2_row_pane_ParamLimits

0x62df,	// (0x0008c293) address2_row_pane

0xb606,	// (0x000915ba) postcard_message2_row_pane_g1

0xb60e,	// (0x000915c2) postcard_message2_row_pane_t1

0xb606,	// (0x000915ba) address2_row_pane_g1

0xb60e,	// (0x000915c2) address2_row_pane_t1

0x1dd2,	// (0x00087d86) aid_size_cell_vorec

0xeaa6,	// (0x00094a5a) main_rss_pane

0x62f2,	// (0x0008c2a6) rss_list_single_pane_ParamLimits

0x62f2,	// (0x0008c2a6) rss_list_single_pane

0xb61c,	// (0x000915d0) rss_list_single_pane_t1

0xb62a,	// (0x000915de) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000955b5) rss_list_single_pane_t

0xeaa6,	// (0x00094a5a) main_camera2_pane

0xeaa6,	// (0x00094a5a) main_video2_pane

0x655b,	// (0x0008c50f) cams_zoom_pane_cp2_ParamLimits

0x655b,	// (0x0008c50f) cams_zoom_pane_cp2

0x657b,	// (0x0008c52f) image2_vga_pane_ParamLimits

0x657b,	// (0x0008c52f) image2_vga_pane

0x65cc,	// (0x0008c580) main_camera2_pane_g1_ParamLimits

0x65cc,	// (0x0008c580) main_camera2_pane_g1

0x65ec,	// (0x0008c5a0) main_camera2_pane_g2_ParamLimits

0x65ec,	// (0x0008c5a0) main_camera2_pane_g2

0x660c,	// (0x0008c5c0) main_camera2_pane_g3_ParamLimits

0x660c,	// (0x0008c5c0) main_camera2_pane_g3

0x662c,	// (0x0008c5e0) main_camera2_pane_g4_ParamLimits

0x662c,	// (0x0008c5e0) main_camera2_pane_g4

0x664c,	// (0x0008c600) main_camera2_pane_g5_ParamLimits

0x664c,	// (0x0008c600) main_camera2_pane_g5

0x666c,	// (0x0008c620) main_camera2_pane_g6_ParamLimits

0x666c,	// (0x0008c620) main_camera2_pane_g6

0x668c,	// (0x0008c640) main_camera2_pane_g7_ParamLimits

0x668c,	// (0x0008c640) main_camera2_pane_g7

0x66ac,	// (0x0008c660) main_camera2_pane_g8_ParamLimits

0x66ac,	// (0x0008c660) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000955d6) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000955d6) main_camera2_pane_g

0x66ec,	// (0x0008c6a0) main_camera2_pane_t1_ParamLimits

0x66ec,	// (0x0008c6a0) main_camera2_pane_t1

0x6721,	// (0x0008c6d5) main_camera2_pane_t2_ParamLimits

0x6721,	// (0x0008c6d5) main_camera2_pane_t2

0x6747,	// (0x0008c6fb) main_camera2_pane_t3_ParamLimits

0x6747,	// (0x0008c6fb) main_camera2_pane_t3

0x67a5,	// (0x0008c759) main_camera2_pane_t4_ParamLimits

0x67a5,	// (0x0008c759) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000955e9) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000955e9) main_camera2_pane_t

0x6837,	// (0x0008c7eb) cams_zoom_pane_cp4_ParamLimits

0x6837,	// (0x0008c7eb) cams_zoom_pane_cp4

0x684d,	// (0x0008c801) image2_cif_pane_ParamLimits

0x684d,	// (0x0008c801) image2_cif_pane

0x6878,	// (0x0008c82c) image2_subqcif_pane_ParamLimits

0x6878,	// (0x0008c82c) image2_subqcif_pane

0x6892,	// (0x0008c846) main_video2_pane_g1_ParamLimits

0x6892,	// (0x0008c846) main_video2_pane_g1

0x68ac,	// (0x0008c860) main_video2_pane_g2_ParamLimits

0x68ac,	// (0x0008c860) main_video2_pane_g2

0x68c2,	// (0x0008c876) main_video2_pane_g3_ParamLimits

0x68c2,	// (0x0008c876) main_video2_pane_g3

0x68d8,	// (0x0008c88c) main_video2_pane_g4_ParamLimits

0x68d8,	// (0x0008c88c) main_video2_pane_g4

0x68ee,	// (0x0008c8a2) main_video2_pane_g5_ParamLimits

0x68ee,	// (0x0008c8a2) main_video2_pane_g5

0x6904,	// (0x0008c8b8) main_video2_pane_g6_ParamLimits

0x6904,	// (0x0008c8b8) main_video2_pane_g6

0x0005,

0xf644,	// (0x000955f8) main_video2_pane_g_ParamLimits

0xf644,	// (0x000955f8) main_video2_pane_g

0x691e,	// (0x0008c8d2) main_video2_pane_t1_ParamLimits

0x691e,	// (0x0008c8d2) main_video2_pane_t1

0x6942,	// (0x0008c8f6) main_video2_pane_t2_ParamLimits

0x6942,	// (0x0008c8f6) main_video2_pane_t2

0x6990,	// (0x0008c944) main_video2_pane_t3_ParamLimits

0x6990,	// (0x0008c944) main_video2_pane_t3

0x0002,

0xf651,	// (0x00095605) main_video2_pane_t_ParamLimits

0xf651,	// (0x00095605) main_video2_pane_t

0x5e0f,	// (0x0008bdc3) call_muted_g2

0x0001,

0xf5f3,	// (0x000955a7) call_muted_g

0xeaa6,	// (0x00094a5a) main_mup2_pane

0x69d4,	// (0x0008c988) main_mup2_pane_g1_ParamLimits

0x69d4,	// (0x0008c988) main_mup2_pane_g1

0x69e0,	// (0x0008c994) main_mup2_pane_g2_ParamLimits

0x69e0,	// (0x0008c994) main_mup2_pane_g2

0xb7bc,	// (0x00091770) main_mup_pane_g13_cp1

0xb7c4,	// (0x00091778) mup_volume_pane_cp1

0x69fc,	// (0x0008c9b0) main_mup2_pane_g4_ParamLimits

0x69fc,	// (0x0008c9b0) main_mup2_pane_g4

0x6a0e,	// (0x0008c9c2) main_mup2_pane_g5_ParamLimits

0x6a0e,	// (0x0008c9c2) main_mup2_pane_g5

0x6a20,	// (0x0008c9d4) main_mup2_pane_g6_ParamLimits

0x6a20,	// (0x0008c9d4) main_mup2_pane_g6

0x6a32,	// (0x0008c9e6) main_mup2_pane_g7_ParamLimits

0x6a32,	// (0x0008c9e6) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0009560c) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0009560c) main_mup2_pane_g

0x6a4a,	// (0x0008c9fe) main_mup2_pane_t1_ParamLimits

0x6a4a,	// (0x0008c9fe) main_mup2_pane_t1

0x6a60,	// (0x0008ca14) main_mup2_pane_t2_ParamLimits

0x6a60,	// (0x0008ca14) main_mup2_pane_t2

0x6a76,	// (0x0008ca2a) main_mup2_pane_t3_ParamLimits

0x6a76,	// (0x0008ca2a) main_mup2_pane_t3

0x6a8c,	// (0x0008ca40) main_mup2_pane_t4_ParamLimits

0x6a8c,	// (0x0008ca40) main_mup2_pane_t4

0x6aa4,	// (0x0008ca58) main_mup2_pane_t5_ParamLimits

0x6aa4,	// (0x0008ca58) main_mup2_pane_t5

0x6abc,	// (0x0008ca70) main_mup2_pane_t6_ParamLimits

0x6abc,	// (0x0008ca70) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0009561b) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0009561b) main_mup2_pane_t

0x6aec,	// (0x0008caa0) mup2_visualizer_pane_ParamLimits

0x6aec,	// (0x0008caa0) mup2_visualizer_pane

0x6b1a,	// (0x0008cace) mup_progress_pane_cp_ParamLimits

0x6b1a,	// (0x0008cace) mup_progress_pane_cp

0xb79e,	// (0x00091752) mup_volume_pane_cp_ParamLimits

0xb79e,	// (0x00091752) mup_volume_pane_cp

0x6b2e,	// (0x0008cae2) mup2_visualizer_pane_g1_ParamLimits

0x6b2e,	// (0x0008cae2) mup2_visualizer_pane_g1

0xb6dd,	// (0x00091691) mup2_visualizer_pane_g2_ParamLimits

0xb6dd,	// (0x00091691) mup2_visualizer_pane_g2

0x6b45,	// (0x0008caf9) mup2_visualizer_pane_g3_ParamLimits

0x6b45,	// (0x0008caf9) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x00095628) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x00095628) mup2_visualizer_pane_g

0x4a45,	// (0x0008a9f9) aid_size_cell_fmradio

0x5fc1,	// (0x0008bf75) aid_height_parent_landcape

0x26d5,	// (0x00088689) wml_content_pane_cp

0x26dd,	// (0x00088691) wml_tabs_pane

0x26e6,	// (0x0008869a) popup_wml_miniature_window

0x26ee,	// (0x000886a2) scroll_pane_cp021

0x2702,	// (0x000886b6) wml_content_pane_comp8

0xeaa6,	// (0x00094a5a) bg_popup_sub_pane_cp05

0xb6fb,	// (0x000916af) popup_wml_miniature_window_g1

0xb703,	// (0x000916b7) wml_miniature_view_pane

0x6b51,	// (0x0008cb05) aid_size_wml_view

0x6b59,	// (0x0008cb0d) wml_miniature_view_pane_g1

0x6b62,	// (0x0008cb16) wml_miniature_view_pane_g2

0x6b6b,	// (0x0008cb1f) wml_miniature_view_pane_g3

0x6b73,	// (0x0008cb27) wml_miniature_view_pane_g4

0x6b7b,	// (0x0008cb2f) wml_miniature_view_pane_g5

0x6b83,	// (0x0008cb37) wml_miniature_view_pane_g6

0x6b8b,	// (0x0008cb3f) wml_miniature_view_pane_g7

0x6b93,	// (0x0008cb47) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0009562f) wml_miniature_view_pane_g

0xb70b,	// (0x000916bf) background_graphic_ParamLimits

0xb70b,	// (0x000916bf) background_graphic

0xb717,	// (0x000916cb) wml_tabs_2_pane

0xb720,	// (0x000916d4) wml_tabs_3_pane_ParamLimits

0xb720,	// (0x000916d4) wml_tabs_3_pane

0xb732,	// (0x000916e6) wml_tabs_4_pane_ParamLimits

0xb732,	// (0x000916e6) wml_tabs_4_pane

0xb748,	// (0x000916fc) wml_tabs_5_pane_ParamLimits

0xb748,	// (0x000916fc) wml_tabs_5_pane

0xb762,	// (0x00091716) wml_tabs_pane_g2_ParamLimits

0xb762,	// (0x00091716) wml_tabs_pane_g2

0xb776,	// (0x0009172a) wml_tabs_pane_g3_ParamLimits

0xb776,	// (0x0009172a) wml_tabs_pane_g3

0x6b9b,	// (0x0008cb4f) wml_tabs_2_active_pane_ParamLimits

0x6b9b,	// (0x0008cb4f) wml_tabs_2_active_pane

0x6baf,	// (0x0008cb63) wml_tabs_2_passive_pane_ParamLimits

0x6baf,	// (0x0008cb63) wml_tabs_2_passive_pane

0x6bc3,	// (0x0008cb77) wml_tabs_3_active_pane_cp_ParamLimits

0x6bc3,	// (0x0008cb77) wml_tabs_3_active_pane_cp

0x6bd8,	// (0x0008cb8c) wml_tabs_3_passive_pane_ParamLimits

0x6bd8,	// (0x0008cb8c) wml_tabs_3_passive_pane

0x6beb,	// (0x0008cb9f) wml_tabs_3_passive_pane_cp_ParamLimits

0x6beb,	// (0x0008cb9f) wml_tabs_3_passive_pane_cp

0x6c02,	// (0x0008cbb6) tabs_4_active_pane

0x6c0a,	// (0x0008cbbe) tabs_4_passive_pane

0x6c14,	// (0x0008cbc8) tabs_4_passive_pane_cp

0x6c1c,	// (0x0008cbd0) tabs_4_passive_pane_cp2

0x5c62,	// (0x0008bc16) aid_height_text

0x41f3,	// (0x0008a1a7) mup_volume_cont_pane_ParamLimits

0x41f3,	// (0x0008a1a7) mup_volume_cont_pane

0x13be,	// (0x00087372) aid_size_cell_pinb

0x13c8,	// (0x0008737c) aid_size_list_pinb

0x6b06,	// (0x0008caba) mup2_volume_cont_pane_ParamLimits

0x6b06,	// (0x0008caba) mup2_volume_cont_pane

0xb78a,	// (0x0009173e) mup2_volume_cont_pane_g1_ParamLimits

0xb78a,	// (0x0009173e) mup2_volume_cont_pane_g1

0x1081,	// (0x00087035) aid_size_cell_touch_ParamLimits

0x1081,	// (0x00087035) aid_size_cell_touch

0x12ae,	// (0x00087262) touch_pane_ParamLimits

0x12ae,	// (0x00087262) touch_pane

0xe67b,	// (0x0009462f) main_rss2_pane

0xb7cc,	// (0x00091780) listscroll_rss2_pane

0xb7d5,	// (0x00091789) rss2_navigation_pane

0xb7dd,	// (0x00091791) list_rss2_pane

0x3ae6,	// (0x00089a9a) scroll_pane_cp22

0xb7e5,	// (0x00091799) rss2_navigation_pane_g1

0xb7ee,	// (0x000917a2) rss2_navigation_pane_g2

0xb7f6,	// (0x000917aa) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x00095640) rss2_navigation_pane_g

0xb7fe,	// (0x000917b2) rss2_navigation_pane_t1

0x6c26,	// (0x0008cbda) rss2_list_single_pane_ParamLimits

0x6c26,	// (0x0008cbda) rss2_list_single_pane

0xb80c,	// (0x000917c0) rss2_list_single_pane_t2

0xb81a,	// (0x000917ce) rss2_list_single_pane_t3_ParamLimits

0xb81a,	// (0x000917ce) rss2_list_single_pane_t3

0xb837,	// (0x000917eb) rss2_list_single_pane_t4

0x3446,	// (0x000893fa) smil_status_pane_g1

0xe685,	// (0x00094639) main_image2_pane_ParamLimits

0xe685,	// (0x00094639) main_image2_pane

0x66cc,	// (0x0008c680) main_camera2_pane_g9_ParamLimits

0x66cc,	// (0x0008c680) main_camera2_pane_g9

0x67fa,	// (0x0008c7ae) main_camera2_pane_t5_ParamLimits

0x67fa,	// (0x0008c7ae) main_camera2_pane_t5

0xb6ad,	// (0x00091661) main_camera2_pane_t6_ParamLimits

0xb6ad,	// (0x00091661) main_camera2_pane_t6

0x6c3b,	// (0x0008cbef) main_image2_pane_g1_ParamLimits

0x6c3b,	// (0x0008cbef) main_image2_pane_g1

0x49fb,	// (0x0008a9af) smil2_video_pane_ParamLimits

0x49fb,	// (0x0008a9af) smil2_video_pane

0xb2a3,	// (0x00091257) aid_zoom_text_primary_cp

0xb2e3,	// (0x00091297) popup_preview_fixed_window

0x25cd,	// (0x00088581) im_reading_pane_g1

0x6543,	// (0x0008c4f7) cams2_bc_adjust_pane_cp_ParamLimits

0x6543,	// (0x0008c4f7) cams2_bc_adjust_pane_cp

0x6829,	// (0x0008c7dd) cams2_bc_adjust_pane_ParamLimits

0x6829,	// (0x0008c7dd) cams2_bc_adjust_pane

0xb845,	// (0x000917f9) cams2_bc_adjust_pane_g1

0xb84d,	// (0x00091801) cams2_slider_pane

0xb856,	// (0x0009180a) cams2_slider_pane_g1

0xb85f,	// (0x00091813) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x00095647) cams2_slider_pane_g

0x14b6,	// (0x0008746a) calc_display_pane_ParamLimits

0x14de,	// (0x00087492) calc_paper_pane_ParamLimits

0x1501,	// (0x000874b5) grid_calc_pane_ParamLimits

0xb423,	// (0x000913d7) popup_clock_digital_window_t1_ParamLimits

0x4882,	// (0x0008a836) main_image_pane_t1

0x1498,	// (0x0008744c) aid_size_cell_calc_ParamLimits

0x1498,	// (0x0008744c) aid_size_cell_calc

0x6007,	// (0x0008bfbb) popup_blid_sat_info2_window_ParamLimits

0x6007,	// (0x0008bfbb) popup_blid_sat_info2_window

0xb881,	// (0x00091835) aid_size_cell_blid

0xb889,	// (0x0009183d) bg_popup_window_pane_cp07

0xb8ac,	// (0x00091860) grid_popup_blid_pane

0xb8b6,	// (0x0009186a) heading_pane_cp05_ParamLimits

0xb8b6,	// (0x0009186a) heading_pane_cp05

0xb980,	// (0x00091934) cell_popup_blid_pane_ParamLimits

0xb980,	// (0x00091934) cell_popup_blid_pane

0xb9a4,	// (0x00091958) cell_popup_blid_pane_g1

0xb9ac,	// (0x00091960) cell_popup_blid_pane_t1

0x6ad6,	// (0x0008ca8a) mup2_indicator_pane_ParamLimits

0x6ad6,	// (0x0008ca8a) mup2_indicator_pane

0x3f35,	// (0x00089ee9) mup2_visualizer_osc_pane

0xb6e9,	// (0x0009169d) mup2_visualizer_spec_pane_ParamLimits

0xb6e9,	// (0x0009169d) mup2_visualizer_spec_pane

0x6c51,	// (0x0008cc05) mup2_spec_half_pane

0x6c5a,	// (0x0008cc0e) mup2_spec_half_pane_cp

0x6c62,	// (0x0008cc16) mup2_spec_bar_pane_ParamLimits

0x6c62,	// (0x0008cc16) mup2_spec_bar_pane

0xb638,	// (0x000915ec) mup2_spec_bar_pane_g1

0xb642,	// (0x000915f6) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000955ba) mup2_spec_bar_pane_g

0x6c82,	// (0x0008cc36) mup2_osc_middle_pane

0xb654,	// (0x00091608) mup2_visualizer_osc_pane_g1

0xe6b3,	// (0x00094667) popup_number_entry_window_t1_ParamLimits

0xe6c6,	// (0x0009467a) popup_number_entry_window_t2_ParamLimits

0xe6d8,	// (0x0009468c) popup_number_entry_window_t3_ParamLimits

0x1300,	// (0x000872b4) popup_number_entry_window_t5_ParamLimits

0x1300,	// (0x000872b4) popup_number_entry_window_t5

0xf0c6,	// (0x0009507a) popup_number_entry_window_t_ParamLimits

0xe6ea,	// (0x0009469e) text_title_cp2_ParamLimits

0xb462,	// (0x00091416) aid_hotspot_pointer_text2_pane

0xb488,	// (0x0009143c) main_viewer_pane_g9_ParamLimits

0xb488,	// (0x0009143c) main_viewer_pane_g9

0x2db7,	// (0x00088d6b) cale_month_pane_t1_ParamLimits

0x34b8,	// (0x0008946c) bg_cale_pane_ParamLimits

0x34d0,	// (0x00089484) list_cale_pane_ParamLimits

0x34e1,	// (0x00089495) listscroll_cale_day_pane_t1

0x34f3,	// (0x000894a7) scroll_pane_cp09_ParamLimits

0x42a1,	// (0x0008a255) main_mup_eq_pane_t1_ParamLimits

0x42a1,	// (0x0008a255) main_mup_eq_pane_t1

0x42bb,	// (0x0008a26f) main_mup_eq_pane_t2_ParamLimits

0x42bb,	// (0x0008a26f) main_mup_eq_pane_t2

0x42d5,	// (0x0008a289) main_mup_eq_pane_t3_ParamLimits

0x42d5,	// (0x0008a289) main_mup_eq_pane_t3

0x42f1,	// (0x0008a2a5) main_mup_eq_pane_t4_ParamLimits

0x42f1,	// (0x0008a2a5) main_mup_eq_pane_t4

0x430d,	// (0x0008a2c1) main_mup_eq_pane_t5_ParamLimits

0x430d,	// (0x0008a2c1) main_mup_eq_pane_t5

0x4329,	// (0x0008a2dd) main_mup_eq_pane_t6_ParamLimits

0x4329,	// (0x0008a2dd) main_mup_eq_pane_t6

0x433d,	// (0x0008a2f1) main_mup_eq_pane_t7_ParamLimits

0x433d,	// (0x0008a2f1) main_mup_eq_pane_t7

0x4351,	// (0x0008a305) main_mup_eq_pane_t8_ParamLimits

0x4351,	// (0x0008a305) main_mup_eq_pane_t8

0x4365,	// (0x0008a319) main_mup_eq_pane_t9_ParamLimits

0x4365,	// (0x0008a319) main_mup_eq_pane_t9

0x437f,	// (0x0008a333) main_mup_eq_pane_t10_ParamLimits

0x437f,	// (0x0008a333) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00095409) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00095409) main_mup_eq_pane_t

0x442e,	// (0x0008a3e2) mup_equalizer_pane_cp5_ParamLimits

0x4442,	// (0x0008a3f6) mup_equalizer_pane_cp6_ParamLimits

0x4456,	// (0x0008a40a) mup_equalizer_pane_cp7_ParamLimits

0xe67b,	// (0x0009462f) main_gallery_pane

0xb65d,	// (0x00091611) smil2_volume_pane

0xb665,	// (0x00091619) smil_status_volume_pane_g1_ParamLimits

0xb678,	// (0x0009162c) smil_status_volume_pane_g2_ParamLimits

0xb68b,	// (0x0009163f) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000955bf) smil_status_volume_pane_g_ParamLimits

0xb889,	// (0x0009183d) bg_popup_window_pane_cp07_ParamLimits

0xb897,	// (0x0009184b) blid_firmament_pane

0x6c8b,	// (0x0008cc3f) aid_size_cell_gallery_ParamLimits

0x6c8b,	// (0x0008cc3f) aid_size_cell_gallery

0x6ca1,	// (0x0008cc55) grid_gallery_pane_ParamLimits

0x6ca1,	// (0x0008cc55) grid_gallery_pane

0x6cba,	// (0x0008cc6e) cell_gallery_pane_ParamLimits

0x6cba,	// (0x0008cc6e) cell_gallery_pane

0xb9ba,	// (0x0009196e) bg_cell_gallery_focus_pane_ParamLimits

0xb9ba,	// (0x0009196e) bg_cell_gallery_focus_pane

0xb9cc,	// (0x00091980) cell_gallery_pane_g1_ParamLimits

0xb9cc,	// (0x00091980) cell_gallery_pane_g1

0x6d03,	// (0x0008ccb7) cell_gallery_pane_g2_ParamLimits

0x6d03,	// (0x0008ccb7) cell_gallery_pane_g2

0x6d10,	// (0x0008ccc4) cell_gallery_pane_g3_ParamLimits

0x6d10,	// (0x0008ccc4) cell_gallery_pane_g3

0xb9d8,	// (0x0009198c) cell_gallery_pane_g4_ParamLimits

0xb9d8,	// (0x0009198c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0009566d) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0009566d) cell_gallery_pane_g

0xb9e4,	// (0x00091998) bg_cell_gallery_focus_pane_g1

0xb9ec,	// (0x000919a0) bg_cell_gallery_focus_pane_g2

0xb9f4,	// (0x000919a8) bg_cell_gallery_focus_pane_g3

0xb9fc,	// (0x000919b0) bg_cell_gallery_focus_pane_g4

0xba04,	// (0x000919b8) bg_cell_gallery_focus_pane_g5

0xba0c,	// (0x000919c0) bg_cell_gallery_focus_pane_g6

0xba14,	// (0x000919c8) bg_cell_gallery_focus_pane_g7

0xba1c,	// (0x000919d0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x00095676) bg_cell_gallery_focus_pane_g

0xba24,	// (0x000919d8) aid_firma_cardinal

0xba38,	// (0x000919ec) blid_firmament_pane_t1

0xba4f,	// (0x00091a03) blid_firmament_pane_t2

0xba66,	// (0x00091a1a) blid_firmament_pane_t3

0xba7d,	// (0x00091a31) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x00095687) blid_firmament_pane_t

0xba94,	// (0x00091a48) blid_sat_info_pane

0xbaa4,	// (0x00091a58) blid_sat_info_pane_g1

0xbaa4,	// (0x00091a58) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00095690) blid_sat_info_pane_g

0xbaae,	// (0x00091a62) blid_sat_info_pane_t1

0xbabc,	// (0x00091a70) smil2_volume_content_pane

0xbac5,	// (0x00091a79) smil2_volume_pane_g1

0xbacd,	// (0x00091a81) smil2_volume_content_pane_g1

0xbad6,	// (0x00091a8a) smil2_volume_content_pane_g2

0xbadf,	// (0x00091a93) smil2_volume_content_pane_g3

0xbae8,	// (0x00091a9c) smil2_volume_content_pane_g4

0xbaf1,	// (0x00091aa5) smil2_volume_content_pane_g5

0xbafa,	// (0x00091aae) smil2_volume_content_pane_g6

0xbb03,	// (0x00091ab7) smil2_volume_content_pane_g7

0xbb0c,	// (0x00091ac0) smil2_volume_content_pane_g8

0xbb15,	// (0x00091ac9) smil2_volume_content_pane_g9

0xbb1e,	// (0x00091ad2) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x00095695) smil2_volume_content_pane_g

0x1a93,	// (0x00087a47) cale_week_day_heading_pane_t1_ParamLimits

0x1ad8,	// (0x00087a8c) cale_week_day_heading_pane_t2_ParamLimits

0x1b22,	// (0x00087ad6) cale_week_day_heading_pane_t3_ParamLimits

0x1b6c,	// (0x00087b20) cale_week_day_heading_pane_t4_ParamLimits

0x1bb6,	// (0x00087b6a) cale_week_day_heading_pane_t5_ParamLimits

0x1c08,	// (0x00087bbc) cale_week_day_heading_pane_t6_ParamLimits

0x1c5a,	// (0x00087c0e) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x00095181) cale_week_day_heading_pane_t_ParamLimits

0xef31,	// (0x00094ee5) bg_cale_side_pane_ParamLimits

0x1c9f,	// (0x00087c53) cale_week_time_pane_t1_ParamLimits

0x1cb9,	// (0x00087c6d) cale_week_time_pane_t2_ParamLimits

0x1cd3,	// (0x00087c87) cale_week_time_pane_t3_ParamLimits

0x1ced,	// (0x00087ca1) cale_week_time_pane_t4_ParamLimits

0x1d07,	// (0x00087cbb) cale_week_time_pane_t5_ParamLimits

0x1d21,	// (0x00087cd5) cale_week_time_pane_t6_ParamLimits

0x1d3b,	// (0x00087cef) cale_week_time_pane_t7_ParamLimits

0x1d55,	// (0x00087d09) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x00095190) cale_week_time_pane_t_ParamLimits

0x1d75,	// (0x00087d29) cell_cale_week_pane_g2_ParamLimits

0xef31,	// (0x00094ee5) bg_cale_side_pane_cp01_ParamLimits

0x3253,	// (0x00089207) cale_month_week_pane_t1_ParamLimits

0x326c,	// (0x00089220) cale_month_week_pane_t2_ParamLimits

0x3285,	// (0x00089239) cale_month_week_pane_t3_ParamLimits

0x329e,	// (0x00089252) cale_month_week_pane_t4_ParamLimits

0x32b7,	// (0x0008926b) cale_month_week_pane_t5_ParamLimits

0x32d0,	// (0x00089284) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00095269) cale_month_week_pane_t_ParamLimits

0xb393,	// (0x00091347) cell_cale_month_pane_g1_ParamLimits

0xe67b,	// (0x0009462f) main_cale_event_viewer_pane

0xe67b,	// (0x0009462f) listscroll_cale_event_viewer_pane

0xbb27,	// (0x00091adb) list_cale_ev_pane

0xbb2f,	// (0x00091ae3) scroll_pane_cp023

0xbb3b,	// (0x00091aef) field_cale_ev_pane_ParamLimits

0xbb3b,	// (0x00091aef) field_cale_ev_pane

0xbb59,	// (0x00091b0d) field_cale_ev_content_pane_ParamLimits

0xbb59,	// (0x00091b0d) field_cale_ev_content_pane

0xbb65,	// (0x00091b19) field_cale_ev_pane_g1_ParamLimits

0xbb65,	// (0x00091b19) field_cale_ev_pane_g1

0xbb71,	// (0x00091b25) field_cale_ev_pane_g2_ParamLimits

0xbb71,	// (0x00091b25) field_cale_ev_pane_g2

0xbb89,	// (0x00091b3d) field_cale_ev_pane_g3_ParamLimits

0xbb89,	// (0x00091b3d) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000956aa) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000956aa) field_cale_ev_pane_g

0xbba1,	// (0x00091b55) field_cale_ev_pane_t1_ParamLimits

0xbba1,	// (0x00091b55) field_cale_ev_pane_t1

0xbbb8,	// (0x00091b6c) field_cale_ev_content_pane_t1_ParamLimits

0xbbb8,	// (0x00091b6c) field_cale_ev_content_pane_t1

0x4500,	// (0x0008a4b4) bg_button_pane_cp01

0x17c0,	// (0x00087774) listscroll_cale_week_pane_ParamLimits

0xeedb,	// (0x00094e8f) popup_toolbar_window_cp01

0xef02,	// (0x00094eb6) listscroll_cale_week_pane_t1_ParamLimits

0x17c0,	// (0x00087774) listscroll_cale_day_pane_ParamLimits

0xeedb,	// (0x00094e8f) popup_toolbar_window_cp02

0x34e1,	// (0x00089495) listscroll_cale_day_pane_t1_ParamLimits

0x17c0,	// (0x00087774) main_cale_month_pane_ParamLimits

0xb5d6,	// (0x0009158a) popup_toolbar_window_cp03_ParamLimits

0xb5d6,	// (0x0009158a) popup_toolbar_window_cp03

0x4860,	// (0x0008a814) main_image_pane_g2_ParamLimits

0x4860,	// (0x0008a814) main_image_pane_g2

0x4871,	// (0x0008a825) main_image_pane_g3_ParamLimits

0x4871,	// (0x0008a825) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0009549b) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0009549b) main_image_pane_g

0x4882,	// (0x0008a836) main_image_pane_t1_ParamLimits

0x4899,	// (0x0008a84d) main_image_pane_t2_ParamLimits

0x4899,	// (0x0008a84d) main_image_pane_t2

0x48ab,	// (0x0008a85f) main_image_pane_t3_ParamLimits

0x48ab,	// (0x0008a85f) main_image_pane_t3

0x48d3,	// (0x0008a887) main_image_pane_t4_ParamLimits

0x48d3,	// (0x0008a887) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000954a2) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000954a2) main_image_pane_t

0x48f3,	// (0x0008a8a7) popup_image_details_window_cp01

0x48fd,	// (0x0008a8b1) popup_toobar_trans_pane_cp01_ParamLimits

0x48fd,	// (0x0008a8b1) popup_toobar_trans_pane_cp01

0x60e6,	// (0x0008c09a) popup_image_details_window_ParamLimits

0x60e6,	// (0x0008c09a) popup_image_details_window

0xb5a9,	// (0x0009155d) popup_image_focus_window

0x64fd,	// (0x0008c4b1) camera2_autofocus_pane_ParamLimits

0x64fd,	// (0x0008c4b1) camera2_autofocus_pane

0xe67b,	// (0x0009462f) bg_popup_sub_pane_cp06

0xbbd6,	// (0x00091b8a) popup_image_focus_window_g1

0xbbde,	// (0x00091b92) popup_image_focus_window_g2

0xbbe6,	// (0x00091b9a) popup_image_focus_window_g3

0xbbee,	// (0x00091ba2) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000956b1) popup_image_focus_window_g

0xbbf6,	// (0x00091baa) popup_image_focus_window_t1

0xbc04,	// (0x00091bb8) popup_image_focus_window_t2

0xbc14,	// (0x00091bc8) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000956ba) popup_image_focus_window_t

0xbc22,	// (0x00091bd6) camera2_autofocus_pane_g1

0xe685,	// (0x00094639) bg_tb_trans_pane_cp01

0xbc30,	// (0x00091be4) popup_image_details_window_g1

0xbc43,	// (0x00091bf7) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000956cc) popup_image_details_window_g

0xbc6c,	// (0x00091c20) popup_image_details_window_t1

0xbc7e,	// (0x00091c32) popup_image_details_window_t2

0xbc97,	// (0x00091c4b) popup_image_details_window_t3

0xbcab,	// (0x00091c5f) popup_image_details_window_t4

0xbcc6,	// (0x00091c7a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000956d3) popup_image_details_window_t

0xedb2,	// (0x00094d66) bg_calc_paper_pane_ParamLimits

0xe67b,	// (0x0009462f) grid_highlight_pane_cp013

0xb2f5,	// (0x000912a9) list_calc_pane_ParamLimits

0xb307,	// (0x000912bb) scroll_pane_cp024

0xedc6,	// (0x00094d7a) bg_calc_display_pane_ParamLimits

0x15ff,	// (0x000875b3) calc_display_pane_t1_ParamLimits

0x1611,	// (0x000875c5) calc_display_pane_t2_ParamLimits

0xb30f,	// (0x000912c3) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x00095101) calc_display_pane_t_ParamLimits

0x16cb,	// (0x0008767f) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0009511e) cell_calc_pane_g

0x16d4,	// (0x00087688) cell_calc_pane_t1

0xee25,	// (0x00094dd9) grid_highlight_pane_cp02_ParamLimits

0xee3b,	// (0x00094def) toolbar_button_pane_cp01_ParamLimits

0xee3b,	// (0x00094def) toolbar_button_pane_cp01

0x493f,	// (0x0008a8f3) temp_image_control_pane_ParamLimits

0x493f,	// (0x0008a8f3) temp_image_control_pane

0xe685,	// (0x00094639) main_mp3_pane

0xbce0,	// (0x00091c94) temp_image_control_pane_g1_ParamLimits

0xbce0,	// (0x00091c94) temp_image_control_pane_g1

0xbcee,	// (0x00091ca2) temp_image_control_pane_g2_ParamLimits

0xbcee,	// (0x00091ca2) temp_image_control_pane_g2

0xbd00,	// (0x00091cb4) temp_image_control_pane_g3_ParamLimits

0xbd00,	// (0x00091cb4) temp_image_control_pane_g3

0x6d4d,	// (0x0008cd01) temp_image_control_pane_g4_ParamLimits

0x6d4d,	// (0x0008cd01) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000956de) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000956de) temp_image_control_pane_g

0xbce0,	// (0x00091c94) main_mp3_pane_g1

0x6d60,	// (0x0008cd14) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000956e7) main_mp3_pane_g

0xbd43,	// (0x00091cf7) main_mp3_pane_t1

0xef8c,	// (0x00094f40) main_camera_pane_g8_ParamLimits

0xef8c,	// (0x00094f40) main_camera_pane_g8

0x2085,	// (0x00088039) main_video_pane_g7_ParamLimits

0x2085,	// (0x00088039) main_video_pane_g7

0xb6cb,	// (0x0009167f) main_camera2_pane_t7_ParamLimits

0xb6cb,	// (0x0009167f) main_camera2_pane_t7

0x2695,	// (0x00088649) scroll_pane_cp025_ParamLimits

0x2695,	// (0x00088649) scroll_pane_cp025

0x26a9,	// (0x0008865d) scroll_pane_cp026_ParamLimits

0x26a9,	// (0x0008865d) scroll_pane_cp026

0x26b8,	// (0x0008866c) wml_content_pane_ParamLimits

0xe67b,	// (0x0009462f) main_touch_calib_pane

0x6e34,	// (0x0008cde8) main_touch_calib_pane_g1

0x6e46,	// (0x0008cdfa) main_touch_calib_pane_g2

0x6e58,	// (0x0008ce0c) main_touch_calib_pane_g3

0x6e6a,	// (0x0008ce1e) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x00095705) main_touch_calib_pane_g

0x6e7c,	// (0x0008ce30) main_touch_calib_pane_t1

0x6e96,	// (0x0008ce4a) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0009570e) main_touch_calib_pane_t

0x3d8e,	// (0x00089d42) mup_progress_pane_cp02

0x3dc3,	// (0x00089d77) navi_pane_g1

0x3e7e,	// (0x00089e32) navi_pane_mp_t3

0xe685,	// (0x00094639) main_mp3_pane_ParamLimits

0x626b,	// (0x0008c21f) navi_pane_ParamLimits

0xbce0,	// (0x00091c94) main_mp3_pane_g1_ParamLimits

0x6d60,	// (0x0008cd14) main_mp3_pane_g2_ParamLimits

0x6d6e,	// (0x0008cd22) main_mp3_pane_g3_ParamLimits

0x6d6e,	// (0x0008cd22) main_mp3_pane_g3

0x6d7c,	// (0x0008cd30) main_mp3_pane_g4_ParamLimits

0x6d7c,	// (0x0008cd30) main_mp3_pane_g4

0xbd10,	// (0x00091cc4) main_mp3_pane_g5_ParamLimits

0xbd10,	// (0x00091cc4) main_mp3_pane_g5

0xbd1e,	// (0x00091cd2) main_mp3_pane_g6_ParamLimits

0xbd1e,	// (0x00091cd2) main_mp3_pane_g6

0xbd2b,	// (0x00091cdf) main_mp3_pane_g7_ParamLimits

0xbd2b,	// (0x00091cdf) main_mp3_pane_g7

0xbd37,	// (0x00091ceb) main_mp3_pane_g8_ParamLimits

0xbd37,	// (0x00091ceb) main_mp3_pane_g8

0xf733,	// (0x000956e7) main_mp3_pane_g_ParamLimits

0x6d88,	// (0x0008cd3c) main_mp3_pane_t2

0x6d96,	// (0x0008cd4a) main_mp3_pane_t3

0xbd51,	// (0x00091d05) main_mp3_pane_t4

0xbd5f,	// (0x00091d13) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000956f8) main_mp3_pane_t

0xbd6d,	// (0x00091d21) mup_progress_pane_cp01

0xb2a3,	// (0x00091257) aid_zoom_text_secondary2

0xbb27,	// (0x00091adb) list_cale_ev2_pane

0xbb2f,	// (0x00091ae3) scroll_pane_cp023_ParamLimits

0x6eec,	// (0x0008cea0) field_cale_ev2_pane_ParamLimits

0x6eec,	// (0x0008cea0) field_cale_ev2_pane

0x6f0c,	// (0x0008cec0) field_cale_ev2_pane_g1_ParamLimits

0x6f0c,	// (0x0008cec0) field_cale_ev2_pane_g1

0x6f18,	// (0x0008cecc) field_cale_ev2_pane_g2_ParamLimits

0x6f18,	// (0x0008cecc) field_cale_ev2_pane_g2

0x6f30,	// (0x0008cee4) field_cale_ev2_pane_g3_ParamLimits

0x6f30,	// (0x0008cee4) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x00095719) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x00095719) field_cale_ev2_pane_g

0xbd81,	// (0x00091d35) field_cale_ev2_pane_t1_ParamLimits

0xbd81,	// (0x00091d35) field_cale_ev2_pane_t1

0xbd98,	// (0x00091d4c) field_cale_ev2_pane_t2_ParamLimits

0xbd98,	// (0x00091d4c) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x00095722) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x00095722) field_cale_ev2_pane_t

0x462f,	// (0x0008a5e3) main_postcard_pane_g5_ParamLimits

0x462f,	// (0x0008a5e3) main_postcard_pane_g5

0x4645,	// (0x0008a5f9) main_postcard_pane_g6_ParamLimits

0x4645,	// (0x0008a5f9) main_postcard_pane_g6

0x1e51,	// (0x00087e05) camera2_autofocus_pane_cp_ParamLimits

0x1e51,	// (0x00087e05) camera2_autofocus_pane_cp

0xe685,	// (0x00094639) main_mup3_pane

0x6f48,	// (0x0008cefc) main_mup3_pane_g1_ParamLimits

0x6f48,	// (0x0008cefc) main_mup3_pane_g1

0x6f6a,	// (0x0008cf1e) main_mup3_pane_g2_ParamLimits

0x6f6a,	// (0x0008cf1e) main_mup3_pane_g2

0x6fe8,	// (0x0008cf9c) main_mup3_pane_g3_ParamLimits

0x6fe8,	// (0x0008cf9c) main_mup3_pane_g3

0x702e,	// (0x0008cfe2) main_mup3_pane_g4_ParamLimits

0x702e,	// (0x0008cfe2) main_mup3_pane_g4

0x7074,	// (0x0008d028) main_mup3_pane_g5_ParamLimits

0x7074,	// (0x0008d028) main_mup3_pane_g5

0x70ba,	// (0x0008d06e) main_mup3_pane_g6_ParamLimits

0x70ba,	// (0x0008d06e) main_mup3_pane_g6

0xbdcd,	// (0x00091d81) main_mup3_pane_g7_ParamLimits

0xbdcd,	// (0x00091d81) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x00095732) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x00095732) main_mup3_pane_g

0x7138,	// (0x0008d0ec) main_mup3_pane_t1_ParamLimits

0x7138,	// (0x0008d0ec) main_mup3_pane_t1

0x71ac,	// (0x0008d160) main_mup3_pane_t2_ParamLimits

0x71ac,	// (0x0008d160) main_mup3_pane_t2

0x7280,	// (0x0008d234) main_mup3_pane_t4_ParamLimits

0x7280,	// (0x0008d234) main_mup3_pane_t4

0x72d6,	// (0x0008d28a) main_mup3_pane_t5_ParamLimits

0x72d6,	// (0x0008d28a) main_mup3_pane_t5

0x7392,	// (0x0008d346) main_mup3_pane_t6_ParamLimits

0x7392,	// (0x0008d346) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x00095743) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x00095743) main_mup3_pane_t

0x744a,	// (0x0008d3fe) mup3_progress_pane_ParamLimits

0x744a,	// (0x0008d3fe) mup3_progress_pane

0x74e0,	// (0x0008d494) popup_mup3_control_window_ParamLimits

0x74e0,	// (0x0008d494) popup_mup3_control_window

0xbddb,	// (0x00091d8f) popup_mup3_text_window

0x7512,	// (0x0008d4c6) mup3_progress_pane_t1

0x7531,	// (0x0008d4e5) mup3_progress_pane_t2

0xbde3,	// (0x00091d97) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x00095750) mup3_progress_pane_t

0xbe00,	// (0x00091db4) mup_progress_pane_cp03

0xe67b,	// (0x0009462f) bg_tb_trans_pane_cp04

0x7550,	// (0x0008d504) mup3_volume_pane

0x7558,	// (0x0008d50c) popup_mup3_control_window_g1

0x7561,	// (0x0008d515) mup3_volume_pane_g1

0x756a,	// (0x0008d51e) mup3_volume_pane_g2

0x7573,	// (0x0008d527) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x00095757) mup3_volume_pane_g

0xe67b,	// (0x0009462f) bg_tb_trans_pane_cp03

0xbe10,	// (0x00091dc4) popup_mup3_text_window_g1

0xbe18,	// (0x00091dcc) popup_mup3_text_window_t1

0xee0e,	// (0x00094dc2) list_calc_item_pane_g1_ParamLimits

0xb7b3,	// (0x00091767) mup_volume_pane_cp_g1

0x6eb0,	// (0x0008ce64) main_touch_calib_pane_t3

0x6ec4,	// (0x0008ce78) main_touch_calib_pane_t4

0x6ed8,	// (0x0008ce8c) main_touch_calib_pane_t5

0xb27f,	// (0x00091233) aid_cell_size_toolbar2

0xb287,	// (0x0009123b) aid_popup3_width_pane

0xb293,	// (0x00091247) aid_zoom_text_msg_primary

0x1e28,	// (0x00087ddc) vorec_t7

0xedd2,	// (0x00094d86) bg_calc_paper_pane_g1_ParamLimits

0xedde,	// (0x00094d92) bg_calc_paper_pane_g2_ParamLimits

0xedea,	// (0x00094d9e) bg_calc_paper_pane_g3_ParamLimits

0xedf6,	// (0x00094daa) bg_calc_paper_pane_g4_ParamLimits

0xee02,	// (0x00094db6) bg_calc_paper_pane_g5_ParamLimits

0x1658,	// (0x0008760c) bg_calc_paper_pane_g6_ParamLimits

0x1667,	// (0x0008761b) bg_calc_paper_pane_g7_ParamLimits

0x1676,	// (0x0008762a) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00095108) bg_calc_paper_pane_g_ParamLimits

0x1689,	// (0x0008763d) calc_bg_paper_pane_g9_ParamLimits

0x1f9c,	// (0x00087f50) image_qvga_pane_ParamLimits

0x1f9c,	// (0x00087f50) image_qvga_pane

0xed01,	// (0x00094cb5) bg_popup_sub_pane_cp04_ParamLimits

0x47be,	// (0x0008a772) popup_mup_playback_window_g1_ParamLimits

0x47ca,	// (0x0008a77e) popup_mup_playback_window_t1_ParamLimits

0x47df,	// (0x0008a793) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00095496) popup_mup_playback_window_t_ParamLimits

0x69f0,	// (0x0008c9a4) main_mup2_pane_g3_ParamLimits

0x69f0,	// (0x0008c9a4) main_mup2_pane_g3

0x2328,	// (0x000882dc) popup_toolbar_window_cp04

0x4fc1,	// (0x0008af75) popup_call2_audio_second_window_g3_ParamLimits

0x4fc1,	// (0x0008af75) popup_call2_audio_second_window_g3

0x53cb,	// (0x0008b37f) popup_call2_audio_first_window_g4_ParamLimits

0x53cb,	// (0x0008b37f) popup_call2_audio_first_window_g4

0x5a4a,	// (0x0008b9fe) popup_call2_audio_in_window_g4_ParamLimits

0x5a4a,	// (0x0008b9fe) popup_call2_audio_in_window_g4

0x47f4,	// (0x0008a7a8) aid_area_sk_bg_cut_ParamLimits

0x47f4,	// (0x0008a7a8) aid_area_sk_bg_cut

0x4812,	// (0x0008a7c6) aid_area_sk_bg_cut_2_ParamLimits

0x4812,	// (0x0008a7c6) aid_area_sk_bg_cut_2

0x6cf3,	// (0x0008cca7) aid_placing_details_win

0x6cfb,	// (0x0008ccaf) aid_placing_details_win_2

0xbc22,	// (0x00091bd6) camera2_autofocus_pane_g1_ParamLimits

0x1247,	// (0x000871fb) popup_fixed_preview_cale_window_ParamLimits

0x1247,	// (0x000871fb) popup_fixed_preview_cale_window

0x3f46,	// (0x00089efa) navi_slider_pane_g3

0x3f4f,	// (0x00089f03) navi_slider_pane_g4

0x3f58,	// (0x00089f0c) navi_slider_pane_g5

0x3f46,	// (0x00089efa) navi_slider_pane_g6

0xb449,	// (0x000913fd) navi_slider_pane_g7

0x4473,	// (0x0008a427) mup_scale_pane_g3

0x447c,	// (0x0008a430) mup_scale_pane_g4

0x4485,	// (0x0008a439) mup_scale_pane_g5

0x448e,	// (0x0008a442) mup_scale_pane_g6

0x4497,	// (0x0008a44b) mup_scale_pane_g7

0x3f46,	// (0x00089efa) cams2_slider_pane_g3

0xb868,	// (0x0009181c) cams2_slider_pane_g4

0xb870,	// (0x00091824) cams2_slider_pane_g5

0x3f46,	// (0x00089efa) cams2_slider_pane_g6

0xb878,	// (0x0009182c) cams2_slider_pane_g7

0xbaa4,	// (0x00091a58) camera2_autofocus_pane_cp_g1

0xb57d,	// (0x00091531) bg_popup_preview_window_pane_cp02_ParamLimits

0xb57d,	// (0x00091531) bg_popup_preview_window_pane_cp02

0xbe26,	// (0x00091dda) list_fp_cale_pane_ParamLimits

0xbe26,	// (0x00091dda) list_fp_cale_pane

0xbe32,	// (0x00091de6) popup_fixed_preview_cale_window_t1_ParamLimits

0xbe32,	// (0x00091de6) popup_fixed_preview_cale_window_t1

0x757c,	// (0x0008d530) popup_fixed_preview_cale_window_t2_ParamLimits

0x757c,	// (0x0008d530) popup_fixed_preview_cale_window_t2

0x7591,	// (0x0008d545) popup_fixed_preview_cale_window_t3_ParamLimits

0x7591,	// (0x0008d545) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0009575e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0009575e) popup_fixed_preview_cale_window_t

0x75a6,	// (0x0008d55a) list_single_fp_cale_pane_ParamLimits

0x75a6,	// (0x0008d55a) list_single_fp_cale_pane

0xbe50,	// (0x00091e04) list_single_fp_cale_pane_g1_ParamLimits

0xbe50,	// (0x00091e04) list_single_fp_cale_pane_g1

0xbe5c,	// (0x00091e10) list_single_fp_cale_pane_g2_ParamLimits

0xbe5c,	// (0x00091e10) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x00095765) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x00095765) list_single_fp_cale_pane_g

0xbe75,	// (0x00091e29) list_single_fp_cale_pane_t1_ParamLimits

0xbe75,	// (0x00091e29) list_single_fp_cale_pane_t1

0xbe87,	// (0x00091e3b) list_single_fp_cale_pane_t2_ParamLimits

0xbe87,	// (0x00091e3b) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0009576c) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0009576c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe67b,	// (0x0009462f) main_dialer_pane

0x75bb,	// (0x0008d56f) aid_cell_size_keypad

0x75c5,	// (0x0008d579) dialer_ne_pane

0x75cd,	// (0x0008d581) grid_dialer_command_1_pane

0x75d5,	// (0x0008d589) grid_dialer_command_2_pane

0x75dd,	// (0x0008d591) grid_dialer_keypad_pane

0x75ef,	// (0x0008d5a3) bg_popup_call_pane_cp06_ParamLimits

0x75ef,	// (0x0008d5a3) bg_popup_call_pane_cp06

0x75fb,	// (0x0008d5af) dialer_ne_clear_pane_ParamLimits

0x75fb,	// (0x0008d5af) dialer_ne_clear_pane

0xbeba,	// (0x00091e6e) dialer_ne_pane_g1

0xbec2,	// (0x00091e76) dialer_ne_pane_t1_ParamLimits

0xbec2,	// (0x00091e76) dialer_ne_pane_t1

0x7607,	// (0x0008d5bb) dialer_ne_pane_t2_ParamLimits

0x7607,	// (0x0008d5bb) dialer_ne_pane_t2

0x7631,	// (0x0008d5e5) dialer_ne_pane_t3_ParamLimits

0x7631,	// (0x0008d5e5) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x00095771) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x00095771) dialer_ne_pane_t

0x7661,	// (0x0008d615) dialer_ne_pane_t3_copy1_ParamLimits

0x7661,	// (0x0008d615) dialer_ne_pane_t3_copy1

0x7690,	// (0x0008d644) cell_dialer_keypad_pane_ParamLimits

0x7690,	// (0x0008d644) cell_dialer_keypad_pane

0x76a7,	// (0x0008d65b) cell_dialer_command_1_pane_ParamLimits

0x76a7,	// (0x0008d65b) cell_dialer_command_1_pane

0x76bd,	// (0x0008d671) cell_dialer_command_2_pane_ParamLimits

0x76bd,	// (0x0008d671) cell_dialer_command_2_pane

0xbed4,	// (0x00091e88) bg_button_pane_cp02_ParamLimits

0xbed4,	// (0x00091e88) bg_button_pane_cp02

0x76cc,	// (0x0008d680) cell_dialer_keypad_pane_g1_ParamLimits

0x76cc,	// (0x0008d680) cell_dialer_keypad_pane_g1

0xbed4,	// (0x00091e88) bg_button_pane_cp03_ParamLimits

0xbed4,	// (0x00091e88) bg_button_pane_cp03

0x76e0,	// (0x0008d694) cell_dialer_command_1_pane_g1_ParamLimits

0x76e0,	// (0x0008d694) cell_dialer_command_1_pane_g1

0xbee0,	// (0x00091e94) bg_button_pane_cp04

0x76f4,	// (0x0008d6a8) cell_dialer_command_2_pane_g1

0x3f35,	// (0x00089ee9) bg_button_pane_cp06

0xbee8,	// (0x00091e9c) dialer_ne_clear_pane_g1

0x3dcf,	// (0x00089d83) navi_pane_g2

0x3dfd,	// (0x00089db1) navi_pane_g3

0x0002,

0xf3e5,	// (0x00095399) navi_pane_g

0x3e8c,	// (0x00089e40) navi_pane_mv_g2

0x3eb3,	// (0x00089e67) navi_pane_mv_g5

0x3ebb,	// (0x00089e6f) navi_pane_mv_t1

0xedc6,	// (0x00094d7a) main_clock2_pane

0x773f,	// (0x0008d6f3) main_clock2_list_pane_ParamLimits

0x773f,	// (0x0008d6f3) main_clock2_list_pane

0x7775,	// (0x0008d729) main_clock2_pane_t1_ParamLimits

0x7775,	// (0x0008d729) main_clock2_pane_t1

0x77b1,	// (0x0008d765) main_clock2_pane_t2_ParamLimits

0x77b1,	// (0x0008d765) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0009577d) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0009577d) main_clock2_pane_t

0x784f,	// (0x0008d803) popup_clock_analogue_window_cp03_ParamLimits

0x784f,	// (0x0008d803) popup_clock_analogue_window_cp03

0x7874,	// (0x0008d828) popup_clock_digital_window_cp02_ParamLimits

0x7874,	// (0x0008d828) popup_clock_digital_window_cp02

0x78e5,	// (0x0008d899) main_clock2_list_single_pane_ParamLimits

0x78e5,	// (0x0008d899) main_clock2_list_single_pane

0x3f35,	// (0x00089ee9) list_highlight_pane_cp05

0xbf26,	// (0x00091eda) main_clock2_list_single_pane_t1

0x2328,	// (0x000882dc) popup_toolbar_window_cp04_ParamLimits

0x6d1d,	// (0x0008ccd1) camera2_autofocus_pane_g2_ParamLimits

0x6d1d,	// (0x0008ccd1) camera2_autofocus_pane_g2

0x6d29,	// (0x0008ccdd) camera2_autofocus_pane_g3_ParamLimits

0x6d29,	// (0x0008ccdd) camera2_autofocus_pane_g3

0x6d35,	// (0x0008cce9) camera2_autofocus_pane_g4_ParamLimits

0x6d35,	// (0x0008cce9) camera2_autofocus_pane_g4

0x6d41,	// (0x0008ccf5) camera2_autofocus_pane_g5_ParamLimits

0x6d41,	// (0x0008ccf5) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000956c1) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000956c1) camera2_autofocus_pane_g

0xbdad,	// (0x00091d61) camera2_autofocus_pane_cp_g2

0xbdb5,	// (0x00091d69) camera2_autofocus_pane_cp_g3

0xbdbd,	// (0x00091d71) camera2_autofocus_pane_cp_g4

0xbdc5,	// (0x00091d79) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x00095727) camera2_autofocus_pane_cp_g

0x75e7,	// (0x0008d59b) popup_dialer_spcha_window

0xe67b,	// (0x0009462f) bg_popup_sub_pane_cp07

0xbf34,	// (0x00091ee8) list_spcha_pane

0xbf3c,	// (0x00091ef0) list_single_spcha_pane_ParamLimits

0xbf3c,	// (0x00091ef0) list_single_spcha_pane

0xe67b,	// (0x0009462f) list_highlight_pane_cp06

0xbf4d,	// (0x00091f01) list_single_spcha_pane_t1

0x57f4,	// (0x0008b7a8) popup_call2_audio_out_window_g4_ParamLimits

0x57f4,	// (0x0008b7a8) popup_call2_audio_out_window_g4

0xe67b,	// (0x0009462f) main_imed2_pane

0xb5b1,	// (0x00091565) popup_imed_adjust2_window

0x60fe,	// (0x0008c0b2) popup_imed_trans_window_ParamLimits

0x60fe,	// (0x0008c0b2) popup_imed_trans_window

0xb8e2,	// (0x00091896) popup_blid_sat_info2_window_t1

0xb8f0,	// (0x000918a4) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x00095656) popup_blid_sat_info2_window_t

0x798f,	// (0x0008d943) aid_size_cell_colour_35

0x79af,	// (0x0008d963) aid_size_cell_colour_112

0x79cf,	// (0x0008d983) aid_size_cell_effect

0xb589,	// (0x0009153d) bg_tb_trans_pane_cp02

0x3631,	// (0x000895e5) heading_imed_pane

0x79ef,	// (0x0008d9a3) listscroll_imed_pane

0xbf5b,	// (0x00091f0f) heading_imed_pane_g1

0xbf63,	// (0x00091f17) heading_imed_pane_t1

0xbf71,	// (0x00091f25) grid_imed_colour_35_pane_ParamLimits

0xbf71,	// (0x00091f25) grid_imed_colour_35_pane

0x79fb,	// (0x0008d9af) grid_imed_effect_pane

0xbf88,	// (0x00091f3c) list_imed_aspect_pane

0x7a11,	// (0x0008d9c5) scroll_pane_cp027_ParamLimits

0x7a11,	// (0x0008d9c5) scroll_pane_cp027

0x7a22,	// (0x0008d9d6) cell_imed_effect_pane_ParamLimits

0x7a22,	// (0x0008d9d6) cell_imed_effect_pane

0xbf90,	// (0x00091f44) cell_imed_colour_pane_ParamLimits

0xbf90,	// (0x00091f44) cell_imed_colour_pane

0xbfd2,	// (0x00091f86) cell_imed_colour_pane_g1_ParamLimits

0xbfd2,	// (0x00091f86) cell_imed_colour_pane_g1

0xbfe3,	// (0x00091f97) hgihlgiht_grid_pane_cp016_ParamLimits

0xbfe3,	// (0x00091f97) hgihlgiht_grid_pane_cp016

0x7a49,	// (0x0008d9fd) cell_imed_effect_pane_g1

0x7a51,	// (0x0008da05) grid_highlight_pane_cp017

0xbff4,	// (0x00091fa8) list_imed_single_pane_ParamLimits

0xbff4,	// (0x00091fa8) list_imed_single_pane

0xe67b,	// (0x0009462f) list_highlight_pane_cp07

0xc009,	// (0x00091fbd) list_imed_aspect_pane_comp1_t1

0xb589,	// (0x0009153d) bg_tb_trans_pane_cp05

0xc02b,	// (0x00091fdf) popup_imed_adjust2_window_g1

0xc052,	// (0x00092006) popup_imed_adjust2_window_t1

0xc06a,	// (0x0009201e) slider_imed_adjust_pane

0xc07e,	// (0x00092032) slider_imed_adjust_pane_g1

0xc08e,	// (0x00092042) slider_imed_adjust_pane_g2

0xc09e,	// (0x00092052) slider_imed_adjust_pane_g3

0xc0af,	// (0x00092063) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0009579a) slider_imed_adjust_pane_g

0x7a5a,	// (0x0008da0e) aid_size_cell_clipart2

0x7a66,	// (0x0008da1a) grid_imed_clipart_pane

0xc0c0,	// (0x00092074) scroll_pane_cp031

0x7a70,	// (0x0008da24) cell_imed_clipart_pane_ParamLimits

0x7a70,	// (0x0008da24) cell_imed_clipart_pane

0x7a92,	// (0x0008da46) cell_imed_clipart_pane_g1

0xe67b,	// (0x0009462f) grid_highlight_pane_cp014

0x7754,	// (0x0008d708) main_clock2_pane_g1_ParamLimits

0x7754,	// (0x0008d708) main_clock2_pane_g1

0x7890,	// (0x0008d844) aid_call2_pane_cp10

0x78a2,	// (0x0008d856) aid_call_pane_cp10

0x3ccb,	// (0x00089c7f) popup_clock_analogue_window_cp10_g1

0x3ccb,	// (0x00089c7f) popup_clock_analogue_window_cp10_g2

0x78b4,	// (0x0008d868) popup_clock_analogue_window_cp10_g3

0x78b4,	// (0x0008d868) popup_clock_analogue_window_cp10_g4

0x3ccb,	// (0x00089c7f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00095788) popup_clock_analogue_window_cp10_g

0x78c6,	// (0x0008d87a) popup_clock_analogue_window_cp10_t1

0x78f7,	// (0x0008d8ab) clock_digital_number_pane_cp10_ParamLimits

0x78f7,	// (0x0008d8ab) clock_digital_number_pane_cp10

0x790f,	// (0x0008d8c3) clock_digital_number_pane_cp11_ParamLimits

0x790f,	// (0x0008d8c3) clock_digital_number_pane_cp11

0x7927,	// (0x0008d8db) clock_digital_number_pane_cp12_ParamLimits

0x7927,	// (0x0008d8db) clock_digital_number_pane_cp12

0x793f,	// (0x0008d8f3) clock_digital_number_pane_cp13_ParamLimits

0x793f,	// (0x0008d8f3) clock_digital_number_pane_cp13

0x7957,	// (0x0008d90b) clock_digital_separator_pane_cp10_ParamLimits

0x7957,	// (0x0008d90b) clock_digital_separator_pane_cp10

0x796f,	// (0x0008d923) popup_clock_digital_window_cp02_t1_ParamLimits

0x796f,	// (0x0008d923) popup_clock_digital_window_cp02_t1

0xecf9,	// (0x00094cad) clock_digital_number_pane_cp10_g1

0xecf9,	// (0x00094cad) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000957a3) clock_digital_number_pane_cp10_g

0xecf9,	// (0x00094cad) clock_digital_separator_pane_cp10_g1

0xecf9,	// (0x00094cad) clock_digital_separator_pane_g2_cp10

0x3efd,	// (0x00089eb1) navi_pane_vded_g4

0x3f06,	// (0x00089eba) navi_pane_vded_g5

0x3f0f,	// (0x00089ec3) navi_pane_vded_t1

0xe67b,	// (0x0009462f) main_vded_pane

0x7a9b,	// (0x0008da4f) main_vded_pane_g1

0x7aa5,	// (0x0008da59) main_vded_pane_g2

0x7aaf,	// (0x0008da63) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000957a8) main_vded_pane_g

0x7ab9,	// (0x0008da6d) main_vded_pane_t1

0x7ac7,	// (0x0008da7b) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000957af) main_vded_pane_t

0x7ad5,	// (0x0008da89) vded_slider_pane

0x7add,	// (0x0008da91) vded_video_pane

0xc0c8,	// (0x0009207c) vded_video_pane_g1

0x7ae5,	// (0x0008da99) vded_video_pane_g2

0xbaa4,	// (0x00091a58) vded_video_pane_g3

0x0002,

0xf800,	// (0x000957b4) vded_video_pane_g

0xc0d2,	// (0x00092086) vded_slider_pane_g1

0xb7b3,	// (0x00091767) vded_slider_pane_g2

0xc0db,	// (0x0009208f) vded_slider_pane_g3

0xc0e4,	// (0x00092098) vded_slider_pane_g4

0xc0ed,	// (0x000920a1) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000957bb) vded_slider_pane_g

0x74c8,	// (0x0008d47c) mup3_rocker_pane_ParamLimits

0x74c8,	// (0x0008d47c) mup3_rocker_pane

0x7aee,	// (0x0008daa2) mup3_control_keys_pane_g1

0x7af6,	// (0x0008daaa) mup3_control_keys_pane_g2

0x7afe,	// (0x0008dab2) mup3_control_keys_pane_g3

0x7b06,	// (0x0008daba) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000957c6) mup3_control_keys_pane_g

0x127e,	// (0x00087232) popup_toolbar2_fixed_window_cp01_ParamLimits

0x127e,	// (0x00087232) popup_toolbar2_fixed_window_cp01

0x74fc,	// (0x0008d4b0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x74fc,	// (0x0008d4b0) popup_toolbar2_fixed_window_cp02

0x5133,	// (0x0008b0e7) popup_call2_audio_second_window_t4_ParamLimits

0x5133,	// (0x0008b0e7) popup_call2_audio_second_window_t4

0x5661,	// (0x0008b615) popup_call2_audio_first_window_t6_ParamLimits

0x5661,	// (0x0008b615) popup_call2_audio_first_window_t6

0x58f7,	// (0x0008b8ab) popup_call2_audio_out_window_t6_ParamLimits

0x58f7,	// (0x0008b8ab) popup_call2_audio_out_window_t6

0xe67b,	// (0x0009462f) main_vitu_pane

0x7b16,	// (0x0008daca) aid_size_cell_itu_ParamLimits

0x7b16,	// (0x0008daca) aid_size_cell_itu

0xe685,	// (0x00094639) bg_popup_window_pane_cp08_ParamLimits

0xe685,	// (0x00094639) bg_popup_window_pane_cp08

0x7b2c,	// (0x0008dae0) field_vitu_entry_pane_ParamLimits

0x7b2c,	// (0x0008dae0) field_vitu_entry_pane

0x7b43,	// (0x0008daf7) grid_vitu_function_pane_ParamLimits

0x7b43,	// (0x0008daf7) grid_vitu_function_pane

0x7b5e,	// (0x0008db12) grid_vitu_itu_pane_ParamLimits

0x7b5e,	// (0x0008db12) grid_vitu_itu_pane

0x7b7c,	// (0x0008db30) cell_vitu_itu_pane_ParamLimits

0x7b7c,	// (0x0008db30) cell_vitu_itu_pane

0x7b9e,	// (0x0008db52) cell_vitu_function_pane_ParamLimits

0x7b9e,	// (0x0008db52) cell_vitu_function_pane

0xe685,	// (0x00094639) bg_popup_sub_pane_cp08_ParamLimits

0xe685,	// (0x00094639) bg_popup_sub_pane_cp08

0x7bb7,	// (0x0008db6b) field_vitu_entry_pane_t1_ParamLimits

0x7bb7,	// (0x0008db6b) field_vitu_entry_pane_t1

0xc10e,	// (0x000920c2) field_vitu_entry_pane_t2_ParamLimits

0xc10e,	// (0x000920c2) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000957d4) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000957d4) field_vitu_entry_pane_t

0xc12b,	// (0x000920df) bg_button_pane_cp05_ParamLimits

0xc12b,	// (0x000920df) bg_button_pane_cp05

0x7bd5,	// (0x0008db89) cell_vitu_itu_pane_g1

0x7bed,	// (0x0008dba1) cell_vitu_itu_pane_t1_ParamLimits

0x7bed,	// (0x0008dba1) cell_vitu_itu_pane_t1

0x7bff,	// (0x0008dbb3) cell_vitu_itu_pane_t2_ParamLimits

0x7bff,	// (0x0008dbb3) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000957d9) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000957d9) cell_vitu_itu_pane_t

0xc139,	// (0x000920ed) bg_button_pane_cp07

0x7c34,	// (0x0008dbe8) cell_vitu_function_pane_g1

0xb2ed,	// (0x000912a1) main_calc_pane_g1

0x10a5,	// (0x00087059) aid_visual_content_pane

0xe67b,	// (0x0009462f) main_vradio_pane

0x7c3d,	// (0x0008dbf1) main_vradio_pane_g1_ParamLimits

0x7c3d,	// (0x0008dbf1) main_vradio_pane_g1

0xc143,	// (0x000920f7) main_vradio_pane_g2_ParamLimits

0xc143,	// (0x000920f7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000957e0) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000957e0) main_vradio_pane_g

0x7c56,	// (0x0008dc0a) main_vradio_pane_t1_ParamLimits

0x7c56,	// (0x0008dc0a) main_vradio_pane_t1

0x7c6b,	// (0x0008dc1f) main_vradio_pane_t2_ParamLimits

0x7c6b,	// (0x0008dc1f) main_vradio_pane_t2

0xc150,	// (0x00092104) main_vradio_pane_t3_ParamLimits

0xc150,	// (0x00092104) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000957e5) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000957e5) main_vradio_pane_t

0x7c80,	// (0x0008dc34) vradio_rocker_control_pane_ParamLimits

0x7c80,	// (0x0008dc34) vradio_rocker_control_pane

0x7c92,	// (0x0008dc46) vradio_station_info_pane_ParamLimits

0x7c92,	// (0x0008dc46) vradio_station_info_pane

0xc164,	// (0x00092118) vradio_frequency_info_pane_ParamLimits

0xc164,	// (0x00092118) vradio_frequency_info_pane

0xbaa4,	// (0x00091a58) vradio_station_info_pane_g1

0xc173,	// (0x00092127) vradio_station_info_pane_t1_ParamLimits

0xc173,	// (0x00092127) vradio_station_info_pane_t1

0xc195,	// (0x00092149) vradio_station_info_pane_t2_ParamLimits

0xc195,	// (0x00092149) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000957ec) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000957ec) vradio_station_info_pane_t

0xc1a7,	// (0x0009215b) vradio_tuning_pane

0xc1af,	// (0x00092163) vradio_rocker_control_pane_g1

0xc1b7,	// (0x0009216b) vradio_rocker_control_pane_g2

0xc1bf,	// (0x00092173) vradio_rocker_control_pane_g3

0xc1c7,	// (0x0009217b) vradio_rocker_control_pane_g4

0xc1cf,	// (0x00092183) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000957f1) vradio_rocker_control_pane_g

0x7ca4,	// (0x0008dc58) vradio_frequency_info_pane_g1

0xc1d7,	// (0x0009218b) vradio_frequency_info_pane_t1_ParamLimits

0xc1d7,	// (0x0009218b) vradio_frequency_info_pane_t1

0x7cae,	// (0x0008dc62) vradio_tuning_pane_g1

0x7cb9,	// (0x0008dc6d) vradio_tuning_pane_t1

0xb2ab,	// (0x0009125f) area_side_right_pane_ParamLimits

0xb2ab,	// (0x0009125f) area_side_right_pane

0xb544,	// (0x000914f8) status_small_pane_g1

0xb54c,	// (0x00091500) status_small_pane_g2

0xb555,	// (0x00091509) status_small_pane_g3

0xb55e,	// (0x00091512) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000955ac) status_small_pane_g

0xb567,	// (0x0009151b) status_small_pane_t1

0xe67b,	// (0x0009462f) main_video3_pane

0xc1eb,	// (0x0009219f) cams_zoom_vslider_pane

0xc1f3,	// (0x000921a7) image3_wide_pane_ParamLimits

0xc1f3,	// (0x000921a7) image3_wide_pane

0xc20d,	// (0x000921c1) image3_wide_small_pane

0xc219,	// (0x000921cd) main_video3_pane_g1_ParamLimits

0xc219,	// (0x000921cd) main_video3_pane_g1

0xc235,	// (0x000921e9) main_video3_pane_g2_ParamLimits

0xc235,	// (0x000921e9) main_video3_pane_g2

0x0001,

0xf848,	// (0x000957fc) main_video3_pane_g_ParamLimits

0xf848,	// (0x000957fc) main_video3_pane_g

0xc251,	// (0x00092205) main_video3_pane_t1_ParamLimits

0xc251,	// (0x00092205) main_video3_pane_t1

0xc27c,	// (0x00092230) main_video3_pane_t2_ParamLimits

0xc27c,	// (0x00092230) main_video3_pane_t2

0xc2a7,	// (0x0009225b) main_video3_pane_t3_ParamLimits

0xc2a7,	// (0x0009225b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x00095801) main_video3_pane_t_ParamLimits

0xf84d,	// (0x00095801) main_video3_pane_t

0xc2d4,	// (0x00092288) cams_zoom_vslider_pane_g1

0xc2dd,	// (0x00092291) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x00095808) cams_zoom_vslider_pane_g

0xc2e5,	// (0x00092299) small_slider_vertical_pane

0xbaa4,	// (0x00091a58) small_slider_vertical_pane_g1

0xbaa4,	// (0x00091a58) small_slider_vertical_pane_g2

0xc2ed,	// (0x000922a1) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0009580d) small_slider_vertical_pane_g

0xe67b,	// (0x0009462f) main_hwr_training_pane

0xc2f6,	// (0x000922aa) hwr_training_instruct_pane_ParamLimits

0xc2f6,	// (0x000922aa) hwr_training_instruct_pane

0x7cc8,	// (0x0008dc7c) hwr_training_navi_pane_ParamLimits

0x7cc8,	// (0x0008dc7c) hwr_training_navi_pane

0x7ce7,	// (0x0008dc9b) hwr_training_write_pane_ParamLimits

0x7ce7,	// (0x0008dc9b) hwr_training_write_pane

0xe67b,	// (0x0009462f) bg_frame_shadow_pane

0xc32d,	// (0x000922e1) hwr_training_write_pane_g1

0xc335,	// (0x000922e9) hwr_training_write_pane_g2

0xc33d,	// (0x000922f1) hwr_training_write_pane_g3

0xc345,	// (0x000922f9) hwr_training_write_pane_g4

0xc34d,	// (0x00092301) hwr_training_write_pane_g5

0xc355,	// (0x00092309) hwr_training_write_pane_g6

0xc35d,	// (0x00092311) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x00095814) hwr_training_write_pane_g

0xc365,	// (0x00092319) hwr_training_navi_pane_g1_ParamLimits

0xc365,	// (0x00092319) hwr_training_navi_pane_g1

0xc377,	// (0x0009232b) hwr_training_navi_pane_g2_ParamLimits

0xc377,	// (0x0009232b) hwr_training_navi_pane_g2

0xc389,	// (0x0009233d) hwr_training_navi_pane_g3_ParamLimits

0xc389,	// (0x0009233d) hwr_training_navi_pane_g3

0xc399,	// (0x0009234d) hwr_training_navi_pane_g4_ParamLimits

0xc399,	// (0x0009234d) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x00095823) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x00095823) hwr_training_navi_pane_g

0xc3a6,	// (0x0009235a) hwr_training_navi_pane_t1

0x7d2f,	// (0x0008dce3) list_single_hwr_training_instruct_pane_ParamLimits

0x7d2f,	// (0x0008dce3) list_single_hwr_training_instruct_pane

0xc3b4,	// (0x00092368) list_single_hwr_training_instruct_pane_t1

0xb9e4,	// (0x00091998) bg_frame_shadow_pane_g1

0xc3c3,	// (0x00092377) bg_frame_shadow_pane_g2

0xc3cb,	// (0x0009237f) bg_frame_shadow_pane_g3

0xc3d3,	// (0x00092387) bg_frame_shadow_pane_g4

0xc3db,	// (0x0009238f) bg_frame_shadow_pane_g5

0xc3e3,	// (0x00092397) bg_frame_shadow_pane_g6

0xc3eb,	// (0x0009239f) bg_frame_shadow_pane_g7

0xee7f,	// (0x00094e33) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0009582e) bg_frame_shadow_pane_g

0xe67b,	// (0x0009462f) main_video_tele_dialer_pane

0x7d44,	// (0x0008dcf8) aid_size_cell_video_keypad_ParamLimits

0x7d44,	// (0x0008dcf8) aid_size_cell_video_keypad

0x7d5e,	// (0x0008dd12) grid_video_dialer_keypad_pane_ParamLimits

0x7d5e,	// (0x0008dd12) grid_video_dialer_keypad_pane

0x7daa,	// (0x0008dd5e) video_down_pane_cp_ParamLimits

0x7daa,	// (0x0008dd5e) video_down_pane_cp

0x7ddc,	// (0x0008dd90) cell_video_dialer_keypad_pane_ParamLimits

0x7ddc,	// (0x0008dd90) cell_video_dialer_keypad_pane

0xc3f3,	// (0x000923a7) bg_button_pane_cp08_ParamLimits

0xc3f3,	// (0x000923a7) bg_button_pane_cp08

0x7dfe,	// (0x0008ddb2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7dfe,	// (0x0008ddb2) cell_video_dialer_keypad_pane_g1

0x74b2,	// (0x0008d466) mup3_rocker2_pane_ParamLimits

0x74b2,	// (0x0008d466) mup3_rocker2_pane

0xbaa4,	// (0x00091a58) mup3_rocker2_pane_g1

0x5fdf,	// (0x0008bf93) main_dialer2_pane

0xe67b,	// (0x0009462f) main_mp4_pane

0xc407,	// (0x000923bb) main_mp4_pane_g1_ParamLimits

0xc407,	// (0x000923bb) main_mp4_pane_g1

0xc407,	// (0x000923bb) main_mp4_pane_g2_ParamLimits

0xc407,	// (0x000923bb) main_mp4_pane_g2

0x7e35,	// (0x0008dde9) main_mp4_pane_g3_ParamLimits

0x7e35,	// (0x0008dde9) main_mp4_pane_g3

0xc415,	// (0x000923c9) main_mp4_pane_g4_ParamLimits

0xc415,	// (0x000923c9) main_mp4_pane_g4

0xc43d,	// (0x000923f1) main_mp4_pane_g5_ParamLimits

0xc43d,	// (0x000923f1) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0009584e) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0009584e) main_mp4_pane_g

0xc48d,	// (0x00092441) main_mp4_pane_t1_ParamLimits

0xc48d,	// (0x00092441) main_mp4_pane_t1

0xc4e9,	// (0x0009249d) main_mp4_pane_t2_ParamLimits

0xc4e9,	// (0x0009249d) main_mp4_pane_t2

0xc53b,	// (0x000924ef) main_mp4_pane_t3_ParamLimits

0xc53b,	// (0x000924ef) main_mp4_pane_t3

0xc55b,	// (0x0009250f) main_mp4_pane_t4_ParamLimits

0xc55b,	// (0x0009250f) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0009585b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0009585b) main_mp4_pane_t

0xc59f,	// (0x00092553) mp4_progress_pane_ParamLimits

0xc59f,	// (0x00092553) mp4_progress_pane

0xc5e9,	// (0x0009259d) mp4_rocker_pane_ParamLimits

0xc5e9,	// (0x0009259d) mp4_rocker_pane

0xc611,	// (0x000925c5) mp4_progress_pane_t1

0xc62a,	// (0x000925de) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00095864) mp4_progress_pane_t

0xc643,	// (0x000925f7) mup_progress_pane_cp04

0xbaa4,	// (0x00091a58) mp4_rocker_pane_g1

0x7e71,	// (0x0008de25) aid_cell_size_keypad2_ParamLimits

0x7e71,	// (0x0008de25) aid_cell_size_keypad2

0x7e87,	// (0x0008de3b) dialer2_ne_pane_ParamLimits

0x7e87,	// (0x0008de3b) dialer2_ne_pane

0x7ea1,	// (0x0008de55) grid_dialer2_keypad_pane_ParamLimits

0x7ea1,	// (0x0008de55) grid_dialer2_keypad_pane

0xb889,	// (0x0009183d) bg_popup_call_pane_cp07_ParamLimits

0xb889,	// (0x0009183d) bg_popup_call_pane_cp07

0x7ebd,	// (0x0008de71) dialer2_ne_pane_t1_ParamLimits

0x7ebd,	// (0x0008de71) dialer2_ne_pane_t1

0x7ef8,	// (0x0008deac) cell_dialer2_keypad_pane_ParamLimits

0x7ef8,	// (0x0008deac) cell_dialer2_keypad_pane

0xc661,	// (0x00092615) bg_button_pane_pane_cp04_ParamLimits

0xc661,	// (0x00092615) bg_button_pane_pane_cp04

0x7f1a,	// (0x0008dece) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f1a,	// (0x0008dece) cell_dialer2_keypad_pane_g1

0x21ea,	// (0x0008819e) aid_placing_vt_set_content_ParamLimits

0x21ea,	// (0x0008819e) aid_placing_vt_set_content

0x2212,	// (0x000881c6) aid_placing_vt_set_title_ParamLimits

0x2212,	// (0x000881c6) aid_placing_vt_set_title

0xe67b,	// (0x0009462f) main_image3_pane

0x7fe0,	// (0x0008df94) area_side_right_pane_cp01_ParamLimits

0x7fe0,	// (0x0008df94) area_side_right_pane_cp01

0xc407,	// (0x000923bb) main_image3_pane_g1_ParamLimits

0xc407,	// (0x000923bb) main_image3_pane_g1

0x7ff7,	// (0x0008dfab) main_image3_pane_g2_ParamLimits

0x7ff7,	// (0x0008dfab) main_image3_pane_g2

0x801f,	// (0x0008dfd3) main_image3_pane_g3_ParamLimits

0x801f,	// (0x0008dfd3) main_image3_pane_g3

0x8049,	// (0x0008dffd) main_image3_pane_g4_ParamLimits

0x8049,	// (0x0008dffd) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00095873) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00095873) main_image3_pane_g

0x8073,	// (0x0008e027) main_image3_pane_t1_ParamLimits

0x8073,	// (0x0008e027) main_image3_pane_t1

0x80cb,	// (0x0008e07f) main_image3_pane_t2_ParamLimits

0x80cb,	// (0x0008e07f) main_image3_pane_t2

0x811d,	// (0x0008e0d1) main_image3_pane_t3_ParamLimits

0x811d,	// (0x0008e0d1) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0009587c) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0009587c) main_image3_pane_t

0xe685,	// (0x00094639) grid_sctrl_middle_pane_cp01_ParamLimits

0xe685,	// (0x00094639) grid_sctrl_middle_pane_cp01

0x81a5,	// (0x0008e159) cell_sctrl_middle_pane_cp01_ParamLimits

0x81a5,	// (0x0008e159) cell_sctrl_middle_pane_cp01

0x81c2,	// (0x0008e176) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x81c2,	// (0x0008e176) cell_sctrl_middle_pane_cp01_g1

0xe67b,	// (0x0009462f) main_call4_pane

0x81d8,	// (0x0008e18c) aid_size_button_call4_ParamLimits

0x81d8,	// (0x0008e18c) aid_size_button_call4

0x8209,	// (0x0008e1bd) call4_windows_pane_ParamLimits

0x8209,	// (0x0008e1bd) call4_windows_pane

0x8229,	// (0x0008e1dd) grid_call4_button_pane_ParamLimits

0x8229,	// (0x0008e1dd) grid_call4_button_pane

0xc69f,	// (0x00092653) call4_windows_conf_pane

0xc6b6,	// (0x0009266a) popup_call4_audio_first_window_ParamLimits

0xc6b6,	// (0x0009266a) popup_call4_audio_first_window

0xc702,	// (0x000926b6) popup_call4_audio_second_window_ParamLimits

0xc702,	// (0x000926b6) popup_call4_audio_second_window

0xc716,	// (0x000926ca) popup_call4_audio_wait_window_ParamLimits

0xc716,	// (0x000926ca) popup_call4_audio_wait_window

0x8256,	// (0x0008e20a) cell_call4_button_pane_ParamLimits

0x8256,	// (0x0008e20a) cell_call4_button_pane

0x827f,	// (0x0008e233) bg_button_pane_cp09_ParamLimits

0x827f,	// (0x0008e233) bg_button_pane_cp09

0x828b,	// (0x0008e23f) cell_call4_button_pane_g1_ParamLimits

0x828b,	// (0x0008e23f) cell_call4_button_pane_g1

0x82b1,	// (0x0008e265) cell_call4_button_pane_t1_ParamLimits

0x82b1,	// (0x0008e265) cell_call4_button_pane_t1

0xc75e,	// (0x00092712) popup_call4_audio_conf_window_ParamLimits

0xc75e,	// (0x00092712) popup_call4_audio_conf_window

0x7512,	// (0x0008d4c6) mup3_progress_pane_t1_ParamLimits

0x7531,	// (0x0008d4e5) mup3_progress_pane_t2_ParamLimits

0xbde3,	// (0x00091d97) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x00095750) mup3_progress_pane_t_ParamLimits

0xbe00,	// (0x00091db4) mup_progress_pane_cp03_ParamLimits

0x7b0e,	// (0x0008dac2) mup3_control_keys_pane_g4_copy1

0xc5cd,	// (0x00092581) mp4_rocker2_pane_ParamLimits

0xc5cd,	// (0x00092581) mp4_rocker2_pane

0xc772,	// (0x00092726) mp4_rocker2_pane_g1

0xc77a,	// (0x0009272e) mp4_rocker2_pane_g2

0xc782,	// (0x00092736) mp4_rocker2_pane_g3

0xc78a,	// (0x0009273e) mp4_rocker2_pane_g4

0xc792,	// (0x00092746) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00095885) mp4_rocker2_pane_g

0xe67b,	// (0x0009462f) main_camera4_pane

0xe67b,	// (0x0009462f) main_video4_pane

0x7d78,	// (0x0008dd2c) main_video_tele_dialer_pane_t1_ParamLimits

0x7d78,	// (0x0008dd2c) main_video_tele_dialer_pane_t1

0x7d91,	// (0x0008dd45) main_video_tele_dialer_pane_t2_ParamLimits

0x7d91,	// (0x0008dd45) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0009583f) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0009583f) main_video_tele_dialer_pane_t

0x82ef,	// (0x0008e2a3) cam4_autofocus_pane_ParamLimits

0x82ef,	// (0x0008e2a3) cam4_autofocus_pane

0x8305,	// (0x0008e2b9) cam4_image_uncrop_pane_ParamLimits

0x8305,	// (0x0008e2b9) cam4_image_uncrop_pane

0x831f,	// (0x0008e2d3) cam4_indicators_pane_ParamLimits

0x831f,	// (0x0008e2d3) cam4_indicators_pane

0x834a,	// (0x0008e2fe) main_camera4_pane_g1_ParamLimits

0x834a,	// (0x0008e2fe) main_camera4_pane_g1

0x835c,	// (0x0008e310) main_camera4_pane_g2_ParamLimits

0x835c,	// (0x0008e310) main_camera4_pane_g2

0x836f,	// (0x0008e323) main_camera4_pane_g3_ParamLimits

0x836f,	// (0x0008e323) main_camera4_pane_g3

0x8382,	// (0x0008e336) main_camera4_pane_g4_ParamLimits

0x8382,	// (0x0008e336) main_camera4_pane_g4

0x8395,	// (0x0008e349) main_camera4_pane_g5_ParamLimits

0x8395,	// (0x0008e349) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00095890) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00095890) main_camera4_pane_g

0x83b9,	// (0x0008e36d) main_camera4_pane_t1_ParamLimits

0x83b9,	// (0x0008e36d) main_camera4_pane_t1

0xbd10,	// (0x00091cc4) bg_tb_trans_pane_cp06

0xc7d0,	// (0x00092784) cam4_indicators_pane_g1

0xc7e1,	// (0x00092795) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000958ab) cam4_indicators_pane_g

0xc7ff,	// (0x000927b3) cam4_indicators_pane_t1

0x841d,	// (0x0008e3d1) main_video4_pane_g1_ParamLimits

0x841d,	// (0x0008e3d1) main_video4_pane_g1

0x842c,	// (0x0008e3e0) main_video4_pane_g2_ParamLimits

0x842c,	// (0x0008e3e0) main_video4_pane_g2

0x843b,	// (0x0008e3ef) main_video4_pane_g3_ParamLimits

0x843b,	// (0x0008e3ef) main_video4_pane_g3

0x844a,	// (0x0008e3fe) main_video4_pane_g4_ParamLimits

0x844a,	// (0x0008e3fe) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000958b2) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000958b2) main_video4_pane_g

0x8468,	// (0x0008e41c) vid4_indicators_pane_ParamLimits

0x8468,	// (0x0008e41c) vid4_indicators_pane

0x8496,	// (0x0008e44a) video4_image_uncrop_cif_pane_ParamLimits

0x8496,	// (0x0008e44a) video4_image_uncrop_cif_pane

0x84b0,	// (0x0008e464) video4_image_uncrop_nhd_pane_ParamLimits

0x84b0,	// (0x0008e464) video4_image_uncrop_nhd_pane

0x8305,	// (0x0008e2b9) video4_image_uncrop_vga_pane_ParamLimits

0x8305,	// (0x0008e2b9) video4_image_uncrop_vga_pane

0xe685,	// (0x00094639) bg_tb_trans_pane_cp07

0xc82b,	// (0x000927df) vid4_indicators_pane_g1

0xc83f,	// (0x000927f3) vid4_indicators_pane_g2

0xc853,	// (0x00092807) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000958bd) vid4_indicators_pane_g

0xc882,	// (0x00092836) vid4_indicators_pane_t1

0x84c4,	// (0x0008e478) cam4_autofocus_pane_g1

0x84cc,	// (0x0008e480) cam4_autofocus_pane_g2

0x84d4,	// (0x0008e488) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000958c8) cam4_autofocus_pane_g

0x84dc,	// (0x0008e490) cam4_autofocus_pane_g3_copy1

0x7dc0,	// (0x0008dd74) video_down_pane_cp_t1

0x7dce,	// (0x0008dd82) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x00095844) video_down_pane_cp_t

0xe685,	// (0x00094639) popup_vitu2_window_ParamLimits

0xe685,	// (0x00094639) popup_vitu2_window

0x84e4,	// (0x0008e498) aid_size_cell2_itu2_ParamLimits

0x84e4,	// (0x0008e498) aid_size_cell2_itu2

0x850a,	// (0x0008e4be) aid_size_cell_itu2_ParamLimits

0x850a,	// (0x0008e4be) aid_size_cell_itu2

0x8566,	// (0x0008e51a) bg_popup_window_pane_cp09_ParamLimits

0x8566,	// (0x0008e51a) bg_popup_window_pane_cp09

0x8574,	// (0x0008e528) field_vitu2_entry_pane_ParamLimits

0x8574,	// (0x0008e528) field_vitu2_entry_pane

0x859a,	// (0x0008e54e) grid_vitu2_function_pane_ParamLimits

0x859a,	// (0x0008e54e) grid_vitu2_function_pane

0x85eb,	// (0x0008e59f) grid_vitu2_itu_pane_ParamLimits

0x85eb,	// (0x0008e59f) grid_vitu2_itu_pane

0x867e,	// (0x0008e632) cell_vitu2_itu_pane_ParamLimits

0x867e,	// (0x0008e632) cell_vitu2_itu_pane

0x86a2,	// (0x0008e656) cell_vitu2_function_pane_ParamLimits

0x86a2,	// (0x0008e656) cell_vitu2_function_pane

0xc899,	// (0x0009284d) bg_popup_call_pane_cp08_ParamLimits

0xc899,	// (0x0009284d) bg_popup_call_pane_cp08

0xc8b0,	// (0x00092864) field_vitu2_entry_pane_g1

0xc8bc,	// (0x00092870) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000958cf) field_vitu2_entry_pane_g

0x0473,	// (0x00086427) field_vitu2_entry_pane_t1_ParamLimits

0x0473,	// (0x00086427) field_vitu2_entry_pane_t1

0xc8d6,	// (0x0009288a) field_vitu2_entry_pane_t2_ParamLimits

0xc8d6,	// (0x0009288a) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000958d6) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000958d6) field_vitu2_entry_pane_t

0x86e1,	// (0x0008e695) bg_button_pane_cp010_ParamLimits

0x86e1,	// (0x0008e695) bg_button_pane_cp010

0x86ef,	// (0x0008e6a3) cell_vitu2_itu_pane_g1

0x871a,	// (0x0008e6ce) cell_vitu2_itu_pane_t1_ParamLimits

0x871a,	// (0x0008e6ce) cell_vitu2_itu_pane_t1

0x049e,	// (0x00086452) cell_vitu2_itu_pane_t2_ParamLimits

0x049e,	// (0x00086452) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000958e0) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000958e0) cell_vitu2_itu_pane_t

0xe685,	// (0x00094639) bg_button_pane_cp011

0x8778,	// (0x0008e72c) cell_vitu2_function_pane_g1

0xe67b,	// (0x0009462f) main_myfav_hc_pane

0x816d,	// (0x0008e121) popup_image3_note_pane_ParamLimits

0x816d,	// (0x0008e121) popup_image3_note_pane

0x8189,	// (0x0008e13d) popup_image3_tool_bar_pane_ParamLimits

0x8189,	// (0x0008e13d) popup_image3_tool_bar_pane

0x0522,	// (0x000864d6) cell_vitu2_itu_pane_t3_ParamLimits

0x0522,	// (0x000864d6) cell_vitu2_itu_pane_t3

0xe67b,	// (0x0009462f) bg_popup_trans_pane

0xc8fb,	// (0x000928af) grid_image3_tool_bar_pane

0xc905,	// (0x000928b9) bg_popup_trans_pane_g1

0x27e1,	// (0x00088795) bg_popup_trans_pane_g2

0xc90d,	// (0x000928c1) bg_popup_trans_pane_g3

0xc915,	// (0x000928c9) bg_popup_trans_pane_g4

0xc91d,	// (0x000928d1) bg_popup_trans_pane_g5

0xc925,	// (0x000928d9) bg_popup_trans_pane_g6

0xc92d,	// (0x000928e1) bg_popup_trans_pane_g7

0xc935,	// (0x000928e9) bg_popup_trans_pane_g8

0x27c1,	// (0x00088775) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000958e7) bg_popup_trans_pane_g

0xc93d,	// (0x000928f1) cell_image3_tool_bar_pane_ParamLimits

0xc93d,	// (0x000928f1) cell_image3_tool_bar_pane

0xbaa4,	// (0x00091a58) cell_image3_tool_bar_pane_g1

0xe67b,	// (0x0009462f) bg_popup_trans_pane_cp1

0xc951,	// (0x00092905) popup_image3_note_pane_t1

0xc95f,	// (0x00092913) popup_image3_note_pane_t2

0xc96d,	// (0x00092921) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000958fa) popup_image3_note_pane_t

0xc97b,	// (0x0009292f) popup_image3_note_pane_t3_copy1

0x878c,	// (0x0008e740) bg_myfav_hc_instruction_pane_ParamLimits

0x878c,	// (0x0008e740) bg_myfav_hc_instruction_pane

0x87a0,	// (0x0008e754) cell_myfav_contact_pane_ParamLimits

0x87a0,	// (0x0008e754) cell_myfav_contact_pane

0x87be,	// (0x0008e772) cell_myfav_contact_pane_cp1_ParamLimits

0x87be,	// (0x0008e772) cell_myfav_contact_pane_cp1

0x87d6,	// (0x0008e78a) cell_myfav_contact_pane_cp2_ParamLimits

0x87d6,	// (0x0008e78a) cell_myfav_contact_pane_cp2

0x87ee,	// (0x0008e7a2) cell_myfav_contact_pane_cp3_ParamLimits

0x87ee,	// (0x0008e7a2) cell_myfav_contact_pane_cp3

0x8805,	// (0x0008e7b9) cell_myfav_contact_pane_cp4_ParamLimits

0x8805,	// (0x0008e7b9) cell_myfav_contact_pane_cp4

0x881d,	// (0x0008e7d1) cell_myfav_contact_pane_cp5_ParamLimits

0x881d,	// (0x0008e7d1) cell_myfav_contact_pane_cp5

0x8831,	// (0x0008e7e5) cell_myfav_contact_pane_cp6_ParamLimits

0x8831,	// (0x0008e7e5) cell_myfav_contact_pane_cp6

0x8847,	// (0x0008e7fb) cell_myfav_contact_pane_cp7_ParamLimits

0x8847,	// (0x0008e7fb) cell_myfav_contact_pane_cp7

0xc989,	// (0x0009293d) listscroll_gen_pane_cp05

0x8861,	// (0x0008e815) main_myfav_hc_pane_g1_ParamLimits

0x8861,	// (0x0008e815) main_myfav_hc_pane_g1

0x887b,	// (0x0008e82f) main_myfav_hc_pane_g2_ParamLimits

0x887b,	// (0x0008e82f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00095901) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00095901) main_myfav_hc_pane_g

0x88ad,	// (0x0008e861) main_myfav_hc_pane_t1_ParamLimits

0x88ad,	// (0x0008e861) main_myfav_hc_pane_t1

0xc992,	// (0x00092946) main_myfav_hc_pane_t2_ParamLimits

0xc992,	// (0x00092946) main_myfav_hc_pane_t2

0xc9a4,	// (0x00092958) main_myfav_hc_pane_t3_ParamLimits

0xc9a4,	// (0x00092958) main_myfav_hc_pane_t3

0x88c4,	// (0x0008e878) main_myfav_hc_pane_t4_ParamLimits

0x88c4,	// (0x0008e878) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00095908) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00095908) main_myfav_hc_pane_t

0xbaa4,	// (0x00091a58) bg_myfav_hc_instruction_pane_g1

0xc9b6,	// (0x0009296a) cell_myfav_contact_pane_g1_ParamLimits

0xc9b6,	// (0x0009296a) cell_myfav_contact_pane_g1

0xc9b6,	// (0x0009296a) cell_myfav_contact_pane_g2_ParamLimits

0xc9b6,	// (0x0009296a) cell_myfav_contact_pane_g2

0xc9c2,	// (0x00092976) cell_myfav_contact_pane_g3_ParamLimits

0xc9c2,	// (0x00092976) cell_myfav_contact_pane_g3

0xbdcd,	// (0x00091d81) cell_myfav_contact_pane_g4_ParamLimits

0xbdcd,	// (0x00091d81) cell_myfav_contact_pane_g4

0xc9cf,	// (0x00092983) cell_myfav_contact_pane_g5_ParamLimits

0xc9cf,	// (0x00092983) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00095913) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00095913) cell_myfav_contact_pane_g

0x8895,	// (0x0008e849) main_myfav_hc_pane_g3_ParamLimits

0x8895,	// (0x0008e849) main_myfav_hc_pane_g3

0x11e0,	// (0x00087194) popup_adpt_find_window

0x88ec,	// (0x0008e8a0) afind_page_pane_ParamLimits

0x88ec,	// (0x0008e8a0) afind_page_pane

0x8901,	// (0x0008e8b5) aid_size_cell_afind_ParamLimits

0x8901,	// (0x0008e8b5) aid_size_cell_afind

0x891f,	// (0x0008e8d3) bg_popup_sub_pane_cp09_ParamLimits

0x891f,	// (0x0008e8d3) bg_popup_sub_pane_cp09

0x892c,	// (0x0008e8e0) find_pane_cp01_ParamLimits

0x892c,	// (0x0008e8e0) find_pane_cp01

0xc9db,	// (0x0009298f) grid_afind_control_pane_ParamLimits

0xc9db,	// (0x0009298f) grid_afind_control_pane

0x8939,	// (0x0008e8ed) grid_afind_pane_ParamLimits

0x8939,	// (0x0008e8ed) grid_afind_pane

0x895b,	// (0x0008e90f) cell_afind_pane_ParamLimits

0x895b,	// (0x0008e90f) cell_afind_pane

0xbaa4,	// (0x00091a58) afind_page_pane_g1

0x89bc,	// (0x0008e970) afind_page_pane_g2

0x89c5,	// (0x0008e979) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0009591e) afind_page_pane_g

0x89ce,	// (0x0008e982) afind_page_pane_t1

0xc9ef,	// (0x000929a3) cell_afind_grid_control_pane_ParamLimits

0xc9ef,	// (0x000929a3) cell_afind_grid_control_pane

0xc661,	// (0x00092615) bg_button_pane_cp69_ParamLimits

0xc661,	// (0x00092615) bg_button_pane_cp69

0x89ee,	// (0x0008e9a2) cell_afind_pane_g1_ParamLimits

0x89ee,	// (0x0008e9a2) cell_afind_pane_g1

0x89fb,	// (0x0008e9af) cell_afind_pane_t1_ParamLimits

0x89fb,	// (0x0008e9af) cell_afind_pane_t1

0x2165,	// (0x00088119) bg_button_pane_cp72

0xc9fe,	// (0x000929b2) cell_afind_grid_control_pane_g1

0x4bf2,	// (0x0008aba6) aid_image_placing_area_ParamLimits

0x4bf2,	// (0x0008aba6) aid_image_placing_area

0xc0f6,	// (0x000920aa) field_vitu_entry_pane_g1_ParamLimits

0xc0f6,	// (0x000920aa) field_vitu_entry_pane_g1

0xc102,	// (0x000920b6) field_vitu_entry_pane_g2_ParamLimits

0xc102,	// (0x000920b6) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000957cf) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000957cf) field_vitu_entry_pane_g

0x7bd5,	// (0x0008db89) cell_vitu_itu_pane_g1_ParamLimits

0x7c17,	// (0x0008dbcb) cell_vitu_itu_pane_t3_ParamLimits

0x7c17,	// (0x0008dbcb) cell_vitu_itu_pane_t3

0xc611,	// (0x000925c5) mp4_progress_pane_t1_ParamLimits

0xc62a,	// (0x000925de) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00095864) mp4_progress_pane_t_ParamLimits

0xc643,	// (0x000925f7) mup_progress_pane_cp04_ParamLimits

0x88d8,	// (0x0008e88c) main_myfav_hc_pane_t5_ParamLimits

0x88d8,	// (0x0008e88c) main_myfav_hc_pane_t5

0xb29b,	// (0x0009124f) aid_zoom_text_primary

0x11e0,	// (0x00087194) popup_adpt_find_window_ParamLimits

0xe685,	// (0x00094639) main_cam_set_pane

0x8336,	// (0x0008e2ea) cam4_zoom_pane_ParamLimits

0x8336,	// (0x0008e2ea) cam4_zoom_pane

0x8a0d,	// (0x0008e9c1) main_cam_set_pane_g1_ParamLimits

0x8a0d,	// (0x0008e9c1) main_cam_set_pane_g1

0x8a1b,	// (0x0008e9cf) main_cam_set_pane_g2_ParamLimits

0x8a1b,	// (0x0008e9cf) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00095925) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00095925) main_cam_set_pane_g

0x8a3c,	// (0x0008e9f0) main_cam_set_pane_t1_ParamLimits

0x8a3c,	// (0x0008e9f0) main_cam_set_pane_t1

0x8a57,	// (0x0008ea0b) main_cset_listscroll_pane_ParamLimits

0x8a57,	// (0x0008ea0b) main_cset_listscroll_pane

0x8a77,	// (0x0008ea2b) main_cset_slider_pane_ParamLimits

0x8a77,	// (0x0008ea2b) main_cset_slider_pane

0xca0f,	// (0x000929c3) main_cset_list_pane_ParamLimits

0xca0f,	// (0x000929c3) main_cset_list_pane

0xca1f,	// (0x000929d3) scroll_pane_cp028

0x8a9d,	// (0x0008ea51) aid_area_touch_slider

0x8ab9,	// (0x0008ea6d) cset_slider_pane

0x8ae3,	// (0x0008ea97) main_cset_slider_pane_g1

0x8af8,	// (0x0008eaac) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0009592a) main_cset_slider_pane_g

0xca58,	// (0x00092a0c) main_cset_slider_pane_t1

0x8bb4,	// (0x0008eb68) main_cset_slider_pane_t2

0x8bce,	// (0x0008eb82) main_cset_slider_pane_t3

0x8be8,	// (0x0008eb9c) main_cset_slider_pane_t4

0x8c02,	// (0x0008ebb6) main_cset_slider_pane_t5

0x8c1c,	// (0x0008ebd0) main_cset_slider_pane_t6

0x8c31,	// (0x0008ebe5) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0009594f) main_cset_slider_pane_t

0x8d35,	// (0x0008ece9) cset_list_set_pane_ParamLimits

0x8d35,	// (0x0008ece9) cset_list_set_pane

0x8d47,	// (0x0008ecfb) aid_position_infowindow_above

0x8d4f,	// (0x0008ed03) aid_position_infowindow_below

0xefb2,	// (0x00094f66) cset_list_set_pane_g1_ParamLimits

0xefb2,	// (0x00094f66) cset_list_set_pane_g1

0xcaf8,	// (0x00092aac) cset_list_set_pane_g3_ParamLimits

0xcaf8,	// (0x00092aac) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0009596e) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0009596e) cset_list_set_pane_g

0xcb07,	// (0x00092abb) cset_list_set_pane_t1_ParamLimits

0xcb07,	// (0x00092abb) cset_list_set_pane_t1

0xe685,	// (0x00094639) list_highlight_pane_cp021_ParamLimits

0xe685,	// (0x00094639) list_highlight_pane_cp021

0x4473,	// (0x0008a427) cset_slider_pane_g1

0x4485,	// (0x0008a439) cset_slider_pane_g2

0x447c,	// (0x0008a430) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00095973) cset_slider_pane_g

0xefbe,	// (0x00094f72) aid_area_touch_cam4_zoom

0xefc6,	// (0x00094f7a) cam4_zoom_cont_pane

0xefce,	// (0x00094f82) cam4_zoom_pane_g1

0xefd6,	// (0x00094f8a) cam4_zoom_pane_g2

0x8d57,	// (0x0008ed0b) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0009597a) cam4_zoom_pane_g

0xcb1c,	// (0x00092ad0) cam4_zoom_cont_pane_g1

0xcb25,	// (0x00092ad9) cam4_zoom_cont_pane_g2

0xcb2e,	// (0x00092ae2) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00095981) cam4_zoom_cont_pane_g

0x81f6,	// (0x0008e1aa) call4_image_pane_ParamLimits

0x81f6,	// (0x0008e1aa) call4_image_pane

0xc69f,	// (0x00092653) call4_windows_conf_pane_ParamLimits

0xc6e0,	// (0x00092694) popup_call4_audio_in_window_ParamLimits

0xc6e0,	// (0x00092694) popup_call4_audio_in_window

0xe67b,	// (0x0009462f) bg_popup_call2_act_pane_cp02

0xc756,	// (0x0009270a) call4_list_conf_pane

0xbaa4,	// (0x00091a58) call4_image_pane_g1

0xbaa4,	// (0x00091a58) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00095690) call4_image_pane_g

0xcb37,	// (0x00092aeb) list_single_graphic_popup_conf4_pane_ParamLimits

0xcb37,	// (0x00092aeb) list_single_graphic_popup_conf4_pane

0xe67b,	// (0x0009462f) list_highlight_pane_cp022

0xcb4a,	// (0x00092afe) list_single_graphic_popup_conf4_pane_g1

0x39e1,	// (0x00089995) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00095988) list_single_graphic_popup_conf4_pane_g

0xcb52,	// (0x00092b06) list_single_graphic_popup_conf4_pane_t1

0x2348,	// (0x000882fc) popup_vtel_slider_window_ParamLimits

0x2348,	// (0x000882fc) popup_vtel_slider_window

0xc64f,	// (0x00092603) dialer2_ne_pane_t2_ParamLimits

0xc64f,	// (0x00092603) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00095869) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00095869) dialer2_ne_pane_t

0xb889,	// (0x0009183d) bg_popup_sub_pane_cp010_ParamLimits

0xb889,	// (0x0009183d) bg_popup_sub_pane_cp010

0x8d5f,	// (0x0008ed13) popup_vtel_slider_window_g1_ParamLimits

0x8d5f,	// (0x0008ed13) popup_vtel_slider_window_g1

0x8d72,	// (0x0008ed26) popup_vtel_slider_window_g2_ParamLimits

0x8d72,	// (0x0008ed26) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0009598d) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0009598d) popup_vtel_slider_window_g

0x8dc8,	// (0x0008ed7c) vtel_slider_pane_ParamLimits

0x8dc8,	// (0x0008ed7c) vtel_slider_pane

0x8dea,	// (0x0008ed9e) vtel_slider_pane_g1_ParamLimits

0x8dea,	// (0x0008ed9e) vtel_slider_pane_g1

0x8dfe,	// (0x0008edb2) vtel_slider_pane_g2_ParamLimits

0x8dfe,	// (0x0008edb2) vtel_slider_pane_g2

0x8e16,	// (0x0008edca) vtel_slider_pane_g3_ParamLimits

0x8e16,	// (0x0008edca) vtel_slider_pane_g3

0x8dea,	// (0x0008ed9e) vtel_slider_pane_g4_ParamLimits

0x8dea,	// (0x0008ed9e) vtel_slider_pane_g4

0x8e2c,	// (0x0008ede0) vtel_slider_pane_g5_ParamLimits

0x8e2c,	// (0x0008ede0) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00095996) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00095996) vtel_slider_pane_g

0xe685,	// (0x00094639) main_gallery2_pane

0x8536,	// (0x0008e4ea) aid_size_row_itut2_dropdow_list_ParamLimits

0x8536,	// (0x0008e4ea) aid_size_row_itut2_dropdow_list

0x85c2,	// (0x0008e576) grid_vitu2_function_top_pane_ParamLimits

0x85c2,	// (0x0008e576) grid_vitu2_function_top_pane

0x8627,	// (0x0008e5db) popup_vitu2_dropdown_list_window_ParamLimits

0x8627,	// (0x0008e5db) popup_vitu2_dropdown_list_window

0x8650,	// (0x0008e604) popup_vitu2_match_list_window

0x8e42,	// (0x0008edf6) cell_vitu2_function_top_pane_ParamLimits

0x8e42,	// (0x0008edf6) cell_vitu2_function_top_pane

0x8e60,	// (0x0008ee14) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8e60,	// (0x0008ee14) cell_vitu2_function_top_pane_cp01

0x8e7e,	// (0x0008ee32) cell_vitu2_function_top_wide_pane_ParamLimits

0x8e7e,	// (0x0008ee32) cell_vitu2_function_top_wide_pane

0xe685,	// (0x00094639) bg_button_pane_cp012

0x8e9c,	// (0x0008ee50) cell_vitu2_function_top_pane_g1

0xefde,	// (0x00094f92) bg_button_pane_cp013_ParamLimits

0xefde,	// (0x00094f92) bg_button_pane_cp013

0x8eb0,	// (0x0008ee64) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8eb0,	// (0x0008ee64) cell_vitu2_function_top_wide_pane_g1

0xe685,	// (0x00094639) bg_popup_sub_pane_cp20

0x8ec8,	// (0x0008ee7c) list_vitu2_match_list_pane

0xc905,	// (0x000928b9) bg_popup_sub_pane_cp20_g1

0xc90d,	// (0x000928c1) bg_popup_sub_pane_cp20_g2

0x27e1,	// (0x00088795) bg_popup_sub_pane_cp20_g3

0xc915,	// (0x000928c9) bg_popup_sub_pane_cp20_g4

0x27c1,	// (0x00088775) bg_popup_sub_pane_cp20_g5

0xcb68,	// (0x00092b1c) bg_popup_sub_pane_cp20_g6

0xc925,	// (0x000928d9) bg_popup_sub_pane_cp20_g7

0xc92d,	// (0x000928e1) bg_popup_sub_pane_cp20_g8

0xc935,	// (0x000928e9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000959a1) bg_popup_sub_pane_cp20_g

0xeffa,	// (0x00094fae) list_vitu2_match_list_item_pane_ParamLimits

0xeffa,	// (0x00094fae) list_vitu2_match_list_item_pane

0xf00c,	// (0x00094fc0) list_vitu2_match_list_item_pane_t1

0xe67b,	// (0x0009462f) bg_popup_sub_pane_cp21

0x38e5,	// (0x00089899) grid_vitu2_dropdown_list_pane

0x8ee6,	// (0x0008ee9a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8ee6,	// (0x0008ee9a) cell_vitu2_dropdown_list_char_pane

0x8f07,	// (0x0008eebb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8f07,	// (0x0008eebb) cell_vitu2_dropdown_list_ctrl_pane

0xcb70,	// (0x00092b24) cell_vitu2_dropdown_list_char_pane_g1

0xcb79,	// (0x00092b2d) cell_vitu2_dropdown_list_char_pane_g2

0xcb82,	// (0x00092b36) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000959be) cell_vitu2_dropdown_list_char_pane_g

0x8f33,	// (0x0008eee7) cell_vitu2_dropdown_list_char_pane_t1

0x8f41,	// (0x0008eef5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8f41,	// (0x0008eef5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8f4e,	// (0x0008ef02) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8f4e,	// (0x0008ef02) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8f5b,	// (0x0008ef0f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8f5b,	// (0x0008ef0f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8f68,	// (0x0008ef1c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8f68,	// (0x0008ef1c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbd10,	// (0x00091cc4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbd10,	// (0x00091cc4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000959c5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000959c5) cell_vitu2_dropdown_list_ctrl_pane_g

0x8f84,	// (0x0008ef38) aid_size_cell_gallery2_ParamLimits

0x8f84,	// (0x0008ef38) aid_size_cell_gallery2

0x8fa2,	// (0x0008ef56) grid_gallery2_pane_ParamLimits

0x8fa2,	// (0x0008ef56) grid_gallery2_pane

0x8fbc,	// (0x0008ef70) scroll_pane_cp029_ParamLimits

0x8fbc,	// (0x0008ef70) scroll_pane_cp029

0x8fc8,	// (0x0008ef7c) cell_gallery2_pane_ParamLimits

0x8fc8,	// (0x0008ef7c) cell_gallery2_pane

0xcb8b,	// (0x00092b3f) cell_gallery2_pane_g2

0x9023,	// (0x0008efd7) cell_gallery2_pane_g3

0xcb93,	// (0x00092b47) cell_gallery2_pane_g4

0xcb9b,	// (0x00092b4f) cell_gallery2_pane_g5

0x3f35,	// (0x00089ee9) grid_highlight_pane_cp10

0x8650,	// (0x0008e604) popup_vitu2_match_list_window_ParamLimits

0x8667,	// (0x0008e61b) popup_vitu2_query_window_ParamLimits

0x8667,	// (0x0008e61b) popup_vitu2_query_window

0xe67b,	// (0x0009462f) bg_vitu2_candi_button_pane

0xcb70,	// (0x00092b24) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcb79,	// (0x00092b2d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcb82,	// (0x00092b36) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x05d2,	// (0x00086586) bg_button_pane_cp015

0x902b,	// (0x0008efdf) bg_button_pane_cp016

0x903e,	// (0x0008eff2) bg_button_pane_cp017

0xb589,	// (0x0009153d) bg_popup_sub_pane_cp22

0xcba3,	// (0x00092b57) popup_vitu2_query_window_g1

0x0605,	// (0x000865b9) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000959d0) popup_vitu2_query_window_g

0x0624,	// (0x000865d8) popup_vitu2_query_window_t1_ParamLimits

0x0624,	// (0x000865d8) popup_vitu2_query_window_t1

0x0659,	// (0x0008660d) popup_vitu2_query_window_t2_ParamLimits

0x0659,	// (0x0008660d) popup_vitu2_query_window_t2

0x066b,	// (0x0008661f) popup_vitu2_query_window_t3_ParamLimits

0x066b,	// (0x0008661f) popup_vitu2_query_window_t3

0x9062,	// (0x0008f016) popup_vitu2_query_window_t4_ParamLimits

0x9062,	// (0x0008f016) popup_vitu2_query_window_t4

0x9083,	// (0x0008f037) popup_vitu2_query_window_t5_ParamLimits

0x9083,	// (0x0008f037) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000959d7) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000959d7) popup_vitu2_query_window_t

0xca07,	// (0x000929bb) main_cset_text_pane

0x8a9d,	// (0x0008ea51) aid_area_touch_slider_ParamLimits

0x8ab9,	// (0x0008ea6d) cset_slider_pane_ParamLimits

0x8ae3,	// (0x0008ea97) main_cset_slider_pane_g1_ParamLimits

0x8af8,	// (0x0008eaac) main_cset_slider_pane_g2_ParamLimits

0xca28,	// (0x000929dc) main_cset_slider_pane_g3_ParamLimits

0xca28,	// (0x000929dc) main_cset_slider_pane_g3

0x8b0d,	// (0x0008eac1) main_cset_slider_pane_g4_ParamLimits

0x8b0d,	// (0x0008eac1) main_cset_slider_pane_g4

0x8b1c,	// (0x0008ead0) main_cset_slider_pane_g5_ParamLimits

0x8b1c,	// (0x0008ead0) main_cset_slider_pane_g5

0x8b28,	// (0x0008eadc) main_cset_slider_pane_g6_ParamLimits

0x8b28,	// (0x0008eadc) main_cset_slider_pane_g6

0xf976,	// (0x0009592a) main_cset_slider_pane_g_ParamLimits

0xca58,	// (0x00092a0c) main_cset_slider_pane_t1_ParamLimits

0x8bb4,	// (0x0008eb68) main_cset_slider_pane_t2_ParamLimits

0x8bce,	// (0x0008eb82) main_cset_slider_pane_t3_ParamLimits

0x8be8,	// (0x0008eb9c) main_cset_slider_pane_t4_ParamLimits

0x8c02,	// (0x0008ebb6) main_cset_slider_pane_t5_ParamLimits

0x8c1c,	// (0x0008ebd0) main_cset_slider_pane_t6_ParamLimits

0x8c31,	// (0x0008ebe5) main_cset_slider_pane_t7_ParamLimits

0x8c5b,	// (0x0008ec0f) main_cset_slider_pane_t8_ParamLimits

0x8c5b,	// (0x0008ec0f) main_cset_slider_pane_t8

0x8c83,	// (0x0008ec37) main_cset_slider_pane_t9_ParamLimits

0x8c83,	// (0x0008ec37) main_cset_slider_pane_t9

0x8cab,	// (0x0008ec5f) main_cset_slider_pane_t10_ParamLimits

0x8cab,	// (0x0008ec5f) main_cset_slider_pane_t10

0x8cd3,	// (0x0008ec87) main_cset_slider_pane_t11_ParamLimits

0x8cd3,	// (0x0008ec87) main_cset_slider_pane_t11

0x8cfb,	// (0x0008ecaf) main_cset_slider_pane_t12_ParamLimits

0x8cfb,	// (0x0008ecaf) main_cset_slider_pane_t12

0x8d18,	// (0x0008eccc) main_cset_slider_pane_t13_ParamLimits

0x8d18,	// (0x0008eccc) main_cset_slider_pane_t13

0xf99b,	// (0x0009594f) main_cset_slider_pane_t_ParamLimits

0xe67b,	// (0x0009462f) bg_popup_sub_pane_cp011

0xcbaf,	// (0x00092b63) main_cset_text_pane_g1

0xcbb7,	// (0x00092b6b) main_cset_text_pane_t1

0xcbc5,	// (0x00092b79) main_cset_text_pane_t2

0xcbd3,	// (0x00092b87) main_cset_text_pane_t3

0xcbe1,	// (0x00092b95) main_cset_text_pane_t4

0xcbef,	// (0x00092ba3) main_cset_text_pane_t5

0xcbfd,	// (0x00092bb1) main_cset_text_pane_t6

0xcc0b,	// (0x00092bbf) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000959e6) main_cset_text_pane_t

0xe67b,	// (0x0009462f) main_cam4_burst_pane

0xe67b,	// (0x0009462f) main_cam5_pane

0x89dc,	// (0x0008e990) bg_button_pane_cp019

0x89e5,	// (0x0008e999) bg_button_pane_cp020

0xca34,	// (0x000929e8) main_cset_slider_pane_g7_ParamLimits

0xca34,	// (0x000929e8) main_cset_slider_pane_g7

0xca40,	// (0x000929f4) main_cset_slider_pane_g8_ParamLimits

0xca40,	// (0x000929f4) main_cset_slider_pane_g8

0x8b3c,	// (0x0008eaf0) main_cset_slider_pane_g9_ParamLimits

0x8b3c,	// (0x0008eaf0) main_cset_slider_pane_g9

0x8b48,	// (0x0008eafc) main_cset_slider_pane_g10_ParamLimits

0x8b48,	// (0x0008eafc) main_cset_slider_pane_g10

0x8b54,	// (0x0008eb08) main_cset_slider_pane_g11_ParamLimits

0x8b54,	// (0x0008eb08) main_cset_slider_pane_g11

0x8b60,	// (0x0008eb14) main_cset_slider_pane_g12_ParamLimits

0x8b60,	// (0x0008eb14) main_cset_slider_pane_g12

0x8b6c,	// (0x0008eb20) main_cset_slider_pane_g13_ParamLimits

0x8b6c,	// (0x0008eb20) main_cset_slider_pane_g13

0x8b78,	// (0x0008eb2c) main_cset_slider_pane_g14_ParamLimits

0x8b78,	// (0x0008eb2c) main_cset_slider_pane_g14

0x8b84,	// (0x0008eb38) main_cset_slider_pane_g15_ParamLimits

0x8b84,	// (0x0008eb38) main_cset_slider_pane_g15

0xca86,	// (0x00092a3a) main_cset_slider_pane_t14_ParamLimits

0xca86,	// (0x00092a3a) main_cset_slider_pane_t14

0xcabf,	// (0x00092a73) main_cset_slider_pane_t15_ParamLimits

0xcabf,	// (0x00092a73) main_cset_slider_pane_t15

0x90a4,	// (0x0008f058) aid_cam4_burst_size_cell_ParamLimits

0x90a4,	// (0x0008f058) aid_cam4_burst_size_cell

0x90c4,	// (0x0008f078) grid_cam4_burst_pane_ParamLimits

0x90c4,	// (0x0008f078) grid_cam4_burst_pane

0x90fc,	// (0x0008f0b0) linegrid_cam4_burst_pane_ParamLimits

0x90fc,	// (0x0008f0b0) linegrid_cam4_burst_pane

0xcc19,	// (0x00092bcd) scroll_pane_cp30_ParamLimits

0xcc19,	// (0x00092bcd) scroll_pane_cp30

0x9120,	// (0x0008f0d4) cell_cam4_burst_pane_ParamLimits

0x9120,	// (0x0008f0d4) cell_cam4_burst_pane

0xcc25,	// (0x00092bd9) linegrid_cam4_burst_pane_g1_ParamLimits

0xcc25,	// (0x00092bd9) linegrid_cam4_burst_pane_g1

0x916d,	// (0x0008f121) linegrid_cam4_burst_pane_g2_ParamLimits

0x916d,	// (0x0008f121) linegrid_cam4_burst_pane_g2

0xcc32,	// (0x00092be6) linegrid_cam4_burst_pane_g3_ParamLimits

0xcc32,	// (0x00092be6) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000959f5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000959f5) linegrid_cam4_burst_pane_g

0x917e,	// (0x0008f132) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x917e,	// (0x0008f132) linegrid_cam4_burst_pane_g3_copy1

0xcc3f,	// (0x00092bf3) linegrid_cam4_burst_pane_g4_ParamLimits

0xcc3f,	// (0x00092bf3) linegrid_cam4_burst_pane_g4

0x9198,	// (0x0008f14c) linegrid_cam4_burst_pane_g5_ParamLimits

0x9198,	// (0x0008f14c) linegrid_cam4_burst_pane_g5

0x91a9,	// (0x0008f15d) linegrid_cam4_burst_pane_g6_ParamLimits

0x91a9,	// (0x0008f15d) linegrid_cam4_burst_pane_g6

0xcc4c,	// (0x00092c00) linegrid_cam4_burst_pane_g7_ParamLimits

0xcc4c,	// (0x00092c00) linegrid_cam4_burst_pane_g7

0x91c0,	// (0x0008f174) cell_cam4_burst_pane_g1

0xcc65,	// (0x00092c19) main_cam5_pane_t1_ParamLimits

0xcc65,	// (0x00092c19) main_cam5_pane_t1

0xcc77,	// (0x00092c2b) main_cam5_pane_t2_ParamLimits

0xcc77,	// (0x00092c2b) main_cam5_pane_t2

0xcc89,	// (0x00092c3d) main_cam5_pane_t3_ParamLimits

0xcc89,	// (0x00092c3d) main_cam5_pane_t3

0xcc9b,	// (0x00092c4f) main_cam5_pane_t4_ParamLimits

0xcc9b,	// (0x00092c4f) main_cam5_pane_t4

0xccb3,	// (0x00092c67) main_cam5_pane_t5_ParamLimits

0xccb3,	// (0x00092c67) main_cam5_pane_t5

0xccc7,	// (0x00092c7b) main_cam5_pane_t6_ParamLimits

0xccc7,	// (0x00092c7b) main_cam5_pane_t6

0xccdb,	// (0x00092c8f) main_cam5_pane_t7_ParamLimits

0xccdb,	// (0x00092c8f) main_cam5_pane_t7

0xcced,	// (0x00092ca1) main_cam5_pane_t8_ParamLimits

0xcced,	// (0x00092ca1) main_cam5_pane_t8

0xcd09,	// (0x00092cbd) main_cam5_pane_t9_ParamLimits

0xcd09,	// (0x00092cbd) main_cam5_pane_t9

0xcd1b,	// (0x00092ccf) main_cam5_pane_t10_ParamLimits

0xcd1b,	// (0x00092ccf) main_cam5_pane_t10

0xcd2d,	// (0x00092ce1) main_cam5_pane_t11_ParamLimits

0xcd2d,	// (0x00092ce1) main_cam5_pane_t11

0xcd3f,	// (0x00092cf3) main_cam5_pane_t12_ParamLimits

0xcd3f,	// (0x00092cf3) main_cam5_pane_t12

0xcd54,	// (0x00092d08) main_cam5_pane_t13_ParamLimits

0xcd54,	// (0x00092d08) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00095a01) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00095a01) main_cam5_pane_t

0x1262,	// (0x00087216) popup_scut_keymap_window_ParamLimits

0x1262,	// (0x00087216) popup_scut_keymap_window

0x91d3,	// (0x0008f187) aid_size_cell_brow_shortcut

0x3f35,	// (0x00089ee9) bg_popup_window_pane_cp010

0x91df,	// (0x0008f193) grid_scut_pane

0x91eb,	// (0x0008f19f) cell_scut_pane_ParamLimits

0x91eb,	// (0x0008f19f) cell_scut_pane

0x9202,	// (0x0008f1b6) cell_scut_pane_g1

0xcd71,	// (0x00092d25) cell_scut_pane_t1

0xcd80,	// (0x00092d34) cell_scut_pane_t2

0x920b,	// (0x0008f1bf) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00095a1c) cell_scut_pane_t

0x70cb,	// (0x0008d07f) main_mup3_pane_g8_ParamLimits

0x70cb,	// (0x0008d07f) main_mup3_pane_g8

0x854e,	// (0x0008e502) area_vitu2_query_pane_ParamLimits

0x854e,	// (0x0008e502) area_vitu2_query_pane

0x05e4,	// (0x00086598) input_focus_pane_cp08

0xcd8f,	// (0x00092d43) area_vitu2_query_pane_g1

0x06e9,	// (0x0008669d) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00095a23) area_vitu2_query_pane_g

0x9219,	// (0x0008f1cd) area_vitu2_query_pane_t1_ParamLimits

0x9219,	// (0x0008f1cd) area_vitu2_query_pane_t1

0x922d,	// (0x0008f1e1) area_vitu2_query_pane_t2_ParamLimits

0x922d,	// (0x0008f1e1) area_vitu2_query_pane_t2

0x06fa,	// (0x000866ae) area_vitu2_query_pane_t3_ParamLimits

0x06fa,	// (0x000866ae) area_vitu2_query_pane_t3

0xcd9b,	// (0x00092d4f) area_vitu2_query_pane_t4_ParamLimits

0xcd9b,	// (0x00092d4f) area_vitu2_query_pane_t4

0xcdc3,	// (0x00092d77) area_vitu2_query_pane_t5_ParamLimits

0xcdc3,	// (0x00092d77) area_vitu2_query_pane_t5

0xcdeb,	// (0x00092d9f) area_vitu2_query_pane_t6_ParamLimits

0xcdeb,	// (0x00092d9f) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00095a28) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00095a28) area_vitu2_query_pane_t

0x9241,	// (0x0008f1f5) bg_button_pane_cp018

0x924f,	// (0x0008f203) bg_button_pane_cp021

0x0722,	// (0x000866d6) bg_button_pane_cp022

0x0731,	// (0x000866e5) input_focus_pane_cp09

0x3d3c,	// (0x00089cf0) aid_size_touch_mv_arrow_left

0x3d65,	// (0x00089d19) aid_size_touch_mv_arrow_right

0x8b9c,	// (0x0008eb50) main_cset_slider_pane_g16_ParamLimits

0x8b9c,	// (0x0008eb50) main_cset_slider_pane_g16

0x8ba8,	// (0x0008eb5c) main_cset_slider_pane_g17_ParamLimits

0x8ba8,	// (0x0008eb5c) main_cset_slider_pane_g17

0x91c0,	// (0x0008f174) cell_cam4_burst_pane_g1_ParamLimits

0xe67b,	// (0x0009462f) compa_mode_pane

0x8d82,	// (0x0008ed36) popup_vtel_slider_window_g3_ParamLimits

0x8d82,	// (0x0008ed36) popup_vtel_slider_window_g3

0x8d99,	// (0x0008ed4d) popup_vtel_slider_window_g4_ParamLimits

0x8d99,	// (0x0008ed4d) popup_vtel_slider_window_g4

0x8db0,	// (0x0008ed64) popup_vtel_slider_window_t1_ParamLimits

0x8db0,	// (0x0008ed64) popup_vtel_slider_window_t1

0xe67b,	// (0x0009462f) main_cl_pane

0xb5b1,	// (0x00091565) popup_imed_adjust2_window_ParamLimits

0xb589,	// (0x0009153d) bg_tb_trans_pane_cp05_ParamLimits

0xc02b,	// (0x00091fdf) popup_imed_adjust2_window_g1_ParamLimits

0xc03a,	// (0x00091fee) popup_imed_adjust2_window_g2_ParamLimits

0xc03a,	// (0x00091fee) popup_imed_adjust2_window_g2

0xc046,	// (0x00091ffa) popup_imed_adjust2_window_g3_ParamLimits

0xc046,	// (0x00091ffa) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x00095793) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x00095793) popup_imed_adjust2_window_g

0xc052,	// (0x00092006) popup_imed_adjust2_window_t1_ParamLimits

0xc06a,	// (0x0009201e) slider_imed_adjust_pane_ParamLimits

0xc07e,	// (0x00092032) slider_imed_adjust_pane_g1_ParamLimits

0xc08e,	// (0x00092042) slider_imed_adjust_pane_g2_ParamLimits

0xc09e,	// (0x00092052) slider_imed_adjust_pane_g3_ParamLimits

0xc0af,	// (0x00092063) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0009579a) slider_imed_adjust_pane_g_ParamLimits

0x82d7,	// (0x0008e28b) aid_touch_area_cam4_ParamLimits

0x82d7,	// (0x0008e28b) aid_touch_area_cam4

0xc79a,	// (0x0009274e) battery_pane_cp01

0x83a6,	// (0x0008e35a) main_camera4_pane_g6_ParamLimits

0x83a6,	// (0x0008e35a) main_camera4_pane_g6

0x83d0,	// (0x0008e384) main_camera4_pane_t2_ParamLimits

0x83d0,	// (0x0008e384) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0009589d) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0009589d) main_camera4_pane_t

0x8405,	// (0x0008e3b9) aid_touch_area_vid4_ParamLimits

0x8405,	// (0x0008e3b9) aid_touch_area_vid4

0x8459,	// (0x0008e40d) main_video4_pane_g5_ParamLimits

0x8459,	// (0x0008e40d) main_video4_pane_g5

0x847e,	// (0x0008e432) vid4_progress_pane_ParamLimits

0x847e,	// (0x0008e432) vid4_progress_pane

0xca4c,	// (0x00092a00) main_cset_slider_pane_g18_ParamLimits

0xca4c,	// (0x00092a00) main_cset_slider_pane_g18

0xcc59,	// (0x00092c0d) cell_cam4_burst_pane_g2_ParamLimits

0xcc59,	// (0x00092c0d) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000959fc) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000959fc) cell_cam4_burst_pane_g

0xedc6,	// (0x00094d7a) bg_cl_pane_ParamLimits

0xedc6,	// (0x00094d7a) bg_cl_pane

0x925b,	// (0x0008f20f) cl_header_pane_ParamLimits

0x925b,	// (0x0008f20f) cl_header_pane

0x926f,	// (0x0008f223) cl_listscroll_pane_ParamLimits

0x926f,	// (0x0008f223) cl_listscroll_pane

0xce37,	// (0x00092deb) bg_cl_pane_g1

0xce3f,	// (0x00092df3) bg_cl_pane_g2

0xce47,	// (0x00092dfb) bg_cl_pane_g3

0xce4f,	// (0x00092e03) bg_cl_pane_g4

0xce57,	// (0x00092e0b) bg_cl_pane_g5

0xce5f,	// (0x00092e13) bg_cl_pane_g6

0xce67,	// (0x00092e1b) bg_cl_pane_g7

0xce6f,	// (0x00092e23) bg_cl_pane_g8

0xce77,	// (0x00092e2b) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00095a37) bg_cl_pane_g

0x927f,	// (0x0008f233) aid_height_cl_leading_ParamLimits

0x927f,	// (0x0008f233) aid_height_cl_leading

0x928b,	// (0x0008f23f) aid_height_cl_text_ParamLimits

0x928b,	// (0x0008f23f) aid_height_cl_text

0xe685,	// (0x00094639) bg_cl_header_pane_ParamLimits

0xe685,	// (0x00094639) bg_cl_header_pane

0x92aa,	// (0x0008f25e) cl_header_pane_g1_ParamLimits

0x92aa,	// (0x0008f25e) cl_header_pane_g1

0x92c0,	// (0x0008f274) cl_header_pane_t1_ParamLimits

0x92c0,	// (0x0008f274) cl_header_pane_t1

0xce7f,	// (0x00092e33) cl_list_pane

0xca1f,	// (0x000929d3) hc_scroll_pane_cp01

0x27c1,	// (0x00088775) bg_cl_header_pane_g1

0xc905,	// (0x000928b9) bg_cl_header_pane_g2

0x27e1,	// (0x00088795) bg_cl_header_pane_g3

0xc915,	// (0x000928c9) bg_cl_header_pane_g4

0xc90d,	// (0x000928c1) bg_cl_header_pane_g5

0xcb68,	// (0x00092b1c) bg_cl_header_pane_g6

0xc92d,	// (0x000928e1) bg_cl_header_pane_g7

0xc935,	// (0x000928e9) bg_cl_header_pane_g8

0xc925,	// (0x000928d9) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00095a4a) bg_cl_header_pane_g

0x92d9,	// (0x0008f28d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x92d9,	// (0x0008f28d) hc_cl_list_double_graphic_heading_pane

0x92ea,	// (0x0008f29e) hc_cl_list_single_graphic_pane_ParamLimits

0x92ea,	// (0x0008f29e) hc_cl_list_single_graphic_pane

0x9300,	// (0x0008f2b4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9300,	// (0x0008f2b4) hc_cl_list_single_graphic_pane_g1

0x930c,	// (0x0008f2c0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x930c,	// (0x0008f2c0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00095a5d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00095a5d) hc_cl_list_single_graphic_pane_g

0x9320,	// (0x0008f2d4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9320,	// (0x0008f2d4) hc_cl_list_single_graphic_pane_t1

0x9300,	// (0x0008f2b4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9300,	// (0x0008f2b4) hc_cl_list_double_graphic_heading_pane_g1

0x9335,	// (0x0008f2e9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9335,	// (0x0008f2e9) hc_cl_list_double_graphic_heading_pane_g2

0x9349,	// (0x0008f2fd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9349,	// (0x0008f2fd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00095a62) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00095a62) hc_cl_list_double_graphic_heading_pane_g

0x935d,	// (0x0008f311) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x935d,	// (0x0008f311) hc_cl_list_double_graphic_heading_pane_t1

0x9372,	// (0x0008f326) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9372,	// (0x0008f326) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00095a69) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00095a69) hc_cl_list_double_graphic_heading_pane_t

0xf022,	// (0x00094fd6) vid4_progress_pane_g1

0xf032,	// (0x00094fe6) vid4_progress_pane_g2

0x9387,	// (0x0008f33b) vid4_progress_pane_g3

0xf042,	// (0x00094ff6) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00095a6e) vid4_progress_pane_g

0x9399,	// (0x0008f34d) vid4_progress_pane_t1

0xf05a,	// (0x0009500e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00095a79) vid4_progress_pane_t

0x93b1,	// (0x0008f365) wait_bar_pane_cp07

0xb897,	// (0x0009184b) blid_firmament_pane_ParamLimits

0xb8da,	// (0x0009188e) popup_blid_sat_info2_window_g1

0xb8fe,	// (0x000918b2) popup_blid_sat_info2_window_t3

0xb90c,	// (0x000918c0) popup_blid_sat_info2_window_t4

0xb91a,	// (0x000918ce) popup_blid_sat_info2_window_t5

0xb928,	// (0x000918dc) popup_blid_sat_info2_window_t6

0xb938,	// (0x000918ec) popup_blid_sat_info2_window_t7

0xb946,	// (0x000918fa) popup_blid_sat_info2_window_t8

0xb954,	// (0x00091908) popup_blid_sat_info2_window_t9

0xb962,	// (0x00091916) popup_blid_sat_info2_window_t10

0xba24,	// (0x000919d8) aid_firma_cardinal_ParamLimits

0xba38,	// (0x000919ec) blid_firmament_pane_t1_ParamLimits

0xba4f,	// (0x00091a03) blid_firmament_pane_t2_ParamLimits

0xba66,	// (0x00091a1a) blid_firmament_pane_t3_ParamLimits

0xba7d,	// (0x00091a31) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x00095687) blid_firmament_pane_t_ParamLimits

0xba94,	// (0x00091a48) blid_sat_info_pane_ParamLimits

0xe685,	// (0x00094639) main_cam_set_pane_ParamLimits

0x798f,	// (0x0008d943) aid_size_cell_colour_35_ParamLimits

0x79af,	// (0x0008d963) aid_size_cell_colour_112_ParamLimits

0x79cf,	// (0x0008d983) aid_size_cell_effect_ParamLimits

0xb589,	// (0x0009153d) bg_tb_trans_pane_cp02_ParamLimits

0x3631,	// (0x000895e5) heading_imed_pane_ParamLimits

0x79ef,	// (0x0008d9a3) listscroll_imed_pane_ParamLimits

0x53dd,	// (0x0008b391) popup_call2_audio_first_window_g5_ParamLimits

0x53dd,	// (0x0008b391) popup_call2_audio_first_window_g5

0x7f82,	// (0x0008df36) aid_size_touch_image3_arrow_left_ParamLimits

0x7f82,	// (0x0008df36) aid_size_touch_image3_arrow_left

0x7fae,	// (0x0008df62) aid_size_touch_image3_arrow_right_ParamLimits

0x7fae,	// (0x0008df62) aid_size_touch_image3_arrow_right

0xf06f,	// (0x00095023) vid4_progress_pane_t3

0x7d02,	// (0x0008dcb6) main_hwr_training_symbol_option_pane_ParamLimits

0x7d02,	// (0x0008dcb6) main_hwr_training_symbol_option_pane

0xc318,	// (0x000922cc) popup_hwr_training_preview_window_ParamLimits

0xc318,	// (0x000922cc) popup_hwr_training_preview_window

0x7d22,	// (0x0008dcd6) hwr_training_navi_pane_g5_ParamLimits

0x7d22,	// (0x0008dcd6) hwr_training_navi_pane_g5

0xc8f3,	// (0x000928a7) popup_char_count_window

0xe685,	// (0x00094639) bg_popup_sub_pane_cp20_ParamLimits

0x8ec8,	// (0x0008ee7c) list_vitu2_match_list_pane_ParamLimits

0x8ed7,	// (0x0008ee8b) vitu2_page_scroll_pane_ParamLimits

0x8ed7,	// (0x0008ee8b) vitu2_page_scroll_pane

0xcea2,	// (0x00092e56) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcea2,	// (0x00092e56) list_single_hwr_training_symbol_option_pane

0xceb5,	// (0x00092e69) list_single_hwr_training_symbol_option_pane_g1

0xcebd,	// (0x00092e71) list_single_hwr_training_symbol_option_pane_t1

0xcecb,	// (0x00092e7f) bg_button_pane_cp023

0xced4,	// (0x00092e88) bg_button_pane_cp024

0x93df,	// (0x0008f393) vitu2_page_scroll_pane_g1

0x93e7,	// (0x0008f39b) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00095a80) vitu2_page_scroll_pane_g

0x93ef,	// (0x0008f3a3) vitu2_page_scroll_pane_t1

0xcf07,	// (0x00092ebb) popup_char_count_window_g1

0xcf10,	// (0x00092ec4) popup_char_count_window_g2

0xcf19,	// (0x00092ecd) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00095a85) popup_char_count_window_g

0xcf22,	// (0x00092ed6) popup_char_count_window_t1

0xe67b,	// (0x0009462f) main_vded2_pane

0xc017,	// (0x00091fcb) aid_size_cell_imed_line

0xc021,	// (0x00091fd5) grid_imed_line_width_pane

0xc864,	// (0x00092818) vid4_indicators_pane_g4

0xcf30,	// (0x00092ee4) cell_imed_line_width_pane_ParamLimits

0xcf30,	// (0x00092ee4) cell_imed_line_width_pane

0xcf44,	// (0x00092ef8) cell_imed_line_width_pane_g1

0xcf4d,	// (0x00092f01) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00095a8c) cell_imed_line_width_pane_g

0x93fe,	// (0x0008f3b2) main_vded2_pane_g1_ParamLimits

0x93fe,	// (0x0008f3b2) main_vded2_pane_g1

0x9414,	// (0x0008f3c8) main_vded2_pane_g2_ParamLimits

0x9414,	// (0x0008f3c8) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00095a91) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00095a91) main_vded2_pane_g

0x9426,	// (0x0008f3da) vded2_slider_pane_ParamLimits

0x9426,	// (0x0008f3da) vded2_slider_pane

0x9436,	// (0x0008f3ea) aid_size_touch_vded2_end

0x9440,	// (0x0008f3f4) aid_size_touch_vded2_playhead

0xcf55,	// (0x00092f09) aid_size_touch_vded2_start

0xcf5d,	// (0x00092f11) vded2_slider_bg_pane

0xcf66,	// (0x00092f1a) vded2_slider_pane_g1

0xcf6f,	// (0x00092f23) vded2_slider_pane_g2

0x944a,	// (0x0008f3fe) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00095a96) vded2_slider_pane_g

0xcf77,	// (0x00092f2b) vded2_slider_bg_pane_g1

0xcf80,	// (0x00092f34) vded2_slider_bg_pane_g2

0xcf89,	// (0x00092f3d) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00095a9d) vded2_slider_bg_pane_g

0x45a8,	// (0x0008a55c) aid_postcard_touch_down_pane_ParamLimits

0x45a8,	// (0x0008a55c) aid_postcard_touch_down_pane

0x45be,	// (0x0008a572) aid_postcard_touch_up_pane_ParamLimits

0x45be,	// (0x0008a572) aid_postcard_touch_up_pane

0xe67b,	// (0x0009462f) main_blid2_pane

0xb597,	// (0x0009154b) popup_blid2_search_window

0xe67b,	// (0x0009462f) blid2_gps_pane

0xe67b,	// (0x0009462f) blid2_navig_pane

0xe67b,	// (0x0009462f) blid2_search_pane

0xe67b,	// (0x0009462f) blid2_tripm_pane

0x9455,	// (0x0008f409) blid2_search_pane_g1_ParamLimits

0x9455,	// (0x0008f409) blid2_search_pane_g1

0x946f,	// (0x0008f423) blid2_search_pane_t1_ParamLimits

0x946f,	// (0x0008f423) blid2_search_pane_t1

0x9481,	// (0x0008f435) aid_size_cell_blid2_gps_ParamLimits

0x9481,	// (0x0008f435) aid_size_cell_blid2_gps

0x9499,	// (0x0008f44d) blid2_gps_pane_g1_ParamLimits

0x9499,	// (0x0008f44d) blid2_gps_pane_g1

0x94ad,	// (0x0008f461) grid_blid2_satellite_pane_ParamLimits

0x94ad,	// (0x0008f461) grid_blid2_satellite_pane

0x94c7,	// (0x0008f47b) blid2_navig_pane_g1_ParamLimits

0x94c7,	// (0x0008f47b) blid2_navig_pane_g1

0x94d3,	// (0x0008f487) blid2_navig_pane_t1_ParamLimits

0x94d3,	// (0x0008f487) blid2_navig_pane_t1

0x94ee,	// (0x0008f4a2) blid2_navig_pane_t2_ParamLimits

0x94ee,	// (0x0008f4a2) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00095aa4) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00095aa4) blid2_navig_pane_t

0x9509,	// (0x0008f4bd) blid2_navig_ring_pane_ParamLimits

0x9509,	// (0x0008f4bd) blid2_navig_ring_pane

0x9522,	// (0x0008f4d6) blid2_speed_pane_ParamLimits

0x9522,	// (0x0008f4d6) blid2_speed_pane

0x952e,	// (0x0008f4e2) blid2_tripm_pane_g1_ParamLimits

0x952e,	// (0x0008f4e2) blid2_tripm_pane_g1

0x9547,	// (0x0008f4fb) blid2_tripm_pane_g2_ParamLimits

0x9547,	// (0x0008f4fb) blid2_tripm_pane_g2

0x955b,	// (0x0008f50f) blid2_tripm_pane_g3_ParamLimits

0x955b,	// (0x0008f50f) blid2_tripm_pane_g3

0x956f,	// (0x0008f523) blid2_tripm_pane_g4_ParamLimits

0x956f,	// (0x0008f523) blid2_tripm_pane_g4

0x9583,	// (0x0008f537) blid2_tripm_pane_g5_ParamLimits

0x9583,	// (0x0008f537) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00095aa9) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00095aa9) blid2_tripm_pane_g

0x95a9,	// (0x0008f55d) blid2_tripm_pane_t1_ParamLimits

0x95a9,	// (0x0008f55d) blid2_tripm_pane_t1

0x95c4,	// (0x0008f578) blid2_tripm_pane_t2_ParamLimits

0x95c4,	// (0x0008f578) blid2_tripm_pane_t2

0x95dd,	// (0x0008f591) blid2_tripm_pane_t3_ParamLimits

0x95dd,	// (0x0008f591) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00095ab6) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00095ab6) blid2_tripm_pane_t

0x9624,	// (0x0008f5d8) cell_blid2_satellite_pane_ParamLimits

0x9624,	// (0x0008f5d8) cell_blid2_satellite_pane

0x9642,	// (0x0008f5f6) cell_blid2_satellite_pane_g1

0xcf92,	// (0x00092f46) cell_blid2_satellite_pane_t1

0xbaa4,	// (0x00091a58) blid2_speed_pane_g1

0xcfa0,	// (0x00092f54) blid2_speed_pane_t1

0xcfae,	// (0x00092f62) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00095abf) blid2_speed_pane_t

0xbaa4,	// (0x00091a58) blid2_navig_ring_pane_g1

0x964b,	// (0x0008f5ff) blid2_navig_ring_pane_g2

0x9653,	// (0x0008f607) blid2_navig_ring_pane_g3

0x965b,	// (0x0008f60f) blid2_navig_ring_pane_g4

0x9663,	// (0x0008f617) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00095ac4) blid2_navig_ring_pane_g

0xe67b,	// (0x0009462f) bg_popup_window_pane_cp011

0xcfbc,	// (0x00092f70) popup_blid2_search_window_g1

0xcfc4,	// (0x00092f78) popup_blid2_search_window_t1

0xcfd2,	// (0x00092f86) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00095acf) popup_blid2_search_window_t

0x268d,	// (0x00088641) main_browser_pane_g1

0xedc6,	// (0x00094d7a) main_browser_pane_ParamLimits

0xe685,	// (0x00094639) bg_button_pane_cp011_ParamLimits

0x8778,	// (0x0008e72c) cell_vitu2_function_pane_g1_ParamLimits

0xb589,	// (0x0009153d) bg_popup_sub_pane_cp22_ParamLimits

0x05e4,	// (0x00086598) input_focus_pane_cp08_ParamLimits

0x9051,	// (0x0008f005) popup_vitu2_query_button_pane_ParamLimits

0x9051,	// (0x0008f005) popup_vitu2_query_button_pane

0x05fb,	// (0x000865af) popup_vitu2_query_input_button_pane

0xcba3,	// (0x00092b57) popup_vitu2_query_window_g1_ParamLimits

0x0605,	// (0x000865b9) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000959d0) popup_vitu2_query_window_g_ParamLimits

0xe67b,	// (0x0009462f) bg_button_pane_cp026

0x966b,	// (0x0008f61f) popup_vitu2_query_input_button_pane_g1

0xe67b,	// (0x0009462f) bg_button_pane_cp025

0xcfe0,	// (0x00092f94) popup_vitu2_query_button_pane_t1

0x6da4,	// (0x0008cd58) main_mp3_pane_t6

0x6db2,	// (0x0008cd66) popup_slider_window_cp01

0xc7c8,	// (0x0009277c) cam4_battery_pane

0xc821,	// (0x000927d5) cam4_battery_pane_cp02

0xf01a,	// (0x00094fce) cam4_battery_pane_cp01

0xf01a,	// (0x00094fce) cam4_battery_pane_cp03

0xbaa4,	// (0x00091a58) cam4_battery_pane_g1

0xcfee,	// (0x00092fa2) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00095ad4) cam4_battery_pane_g

0xb970,	// (0x00091924) popup_blid_sat_info2_window_t11

0x3d3c,	// (0x00089cf0) aid_size_touch_mv_arrow_left_ParamLimits

0x3d65,	// (0x00089d19) aid_size_touch_mv_arrow_right_ParamLimits

0x3dc3,	// (0x00089d77) navi_pane_g1_ParamLimits

0x3dcf,	// (0x00089d83) navi_pane_g2_ParamLimits

0x3dfd,	// (0x00089db1) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00095399) navi_pane_g_ParamLimits

0x3ebb,	// (0x00089e6f) navi_pane_mv_t1_ParamLimits

0x79fb,	// (0x0008d9af) grid_imed_effect_pane_ParamLimits

0x2233,	// (0x000881e7) aid_placing_vt_slider_lsc

0x2243,	// (0x000881f7) aid_placing_vt_slider_prt

0xe685,	// (0x00094639) bg_tb_trans_pane_cp01_ParamLimits

0xbc30,	// (0x00091be4) popup_image_details_window_g1_ParamLimits

0xbc43,	// (0x00091bf7) popup_image_details_window_g2_ParamLimits

0xbc58,	// (0x00091c0c) popup_image_details_window_g3_ParamLimits

0xbc58,	// (0x00091c0c) popup_image_details_window_g3

0xf718,	// (0x000956cc) popup_image_details_window_g_ParamLimits

0xbc6c,	// (0x00091c20) popup_image_details_window_t1_ParamLimits

0xbc7e,	// (0x00091c32) popup_image_details_window_t2_ParamLimits

0xbc97,	// (0x00091c4b) popup_image_details_window_t3_ParamLimits

0xbcab,	// (0x00091c5f) popup_image_details_window_t4_ParamLimits

0xbcc6,	// (0x00091c7a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000956d3) popup_image_details_window_t_ParamLimits

0x9297,	// (0x0008f24b) cl_header_name_pane_ParamLimits

0x9297,	// (0x0008f24b) cl_header_name_pane

0x9673,	// (0x0008f627) cl_header_name_pane_t1_ParamLimits

0x9673,	// (0x0008f627) cl_header_name_pane_t1

0x9694,	// (0x0008f648) cl_header_name_pane_t2_ParamLimits

0x9694,	// (0x0008f648) cl_header_name_pane_t2

0x96d6,	// (0x0008f68a) cl_header_name_pane_t3_ParamLimits

0x96d6,	// (0x0008f68a) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00095ad9) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00095ad9) cl_header_name_pane_t

0x3e8c,	// (0x00089e40) navi_pane_mv_g2_ParamLimits

0xc8b0,	// (0x00092864) field_vitu2_entry_pane_g1_ParamLimits

0xc8bc,	// (0x00092870) field_vitu2_entry_pane_g2_ParamLimits

0xc8c8,	// (0x0009287c) field_vitu2_entry_pane_g3_ParamLimits

0xc8c8,	// (0x0009287c) field_vitu2_entry_pane_g3

0xf91b,	// (0x000958cf) field_vitu2_entry_pane_g_ParamLimits

0x86ef,	// (0x0008e6a3) cell_vitu2_itu_pane_g1_ParamLimits

0x86ff,	// (0x0008e6b3) cell_vitu2_itu_pane_g2_ParamLimits

0x86ff,	// (0x0008e6b3) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000958db) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000958db) cell_vitu2_itu_pane_g

0xe685,	// (0x00094639) bg_vkb2_func_pane_cp05_ParamLimits

0xe685,	// (0x00094639) bg_vkb2_func_pane_cp05

0xe685,	// (0x00094639) bg_vkb2_func_pane_cp03

0xe685,	// (0x00094639) bg_vkb2_func_pane_cp04

0xe685,	// (0x00094639) bg_vkb2_func_pane_cp10_ParamLimits

0xe685,	// (0x00094639) bg_vkb2_func_pane_cp10

0x0722,	// (0x000866d6) bg_vkb2_func_pane_cp08

0x9241,	// (0x0008f1f5) bg_vkb2_func_pane_cp06

0x924f,	// (0x0008f203) bg_vkb2_func_pane_cp07

0xcedd,	// (0x00092e91) bg_vkb2_func_pane_cp11_ParamLimits

0xcedd,	// (0x00092e91) bg_vkb2_func_pane_cp11

0xcef2,	// (0x00092ea6) bg_vkb2_func_pane_cp12_ParamLimits

0xcef2,	// (0x00092ea6) bg_vkb2_func_pane_cp12

0xe67b,	// (0x0009462f) bg_vkb2_func_pane_cp09

0xc905,	// (0x000928b9) bg_vkb2_func_pane_g1

0x27e1,	// (0x00088795) bg_vkb2_func_pane_g2

0xc90d,	// (0x000928c1) bg_vkb2_func_pane_g3

0xc915,	// (0x000928c9) bg_vkb2_func_pane_g4

0xcb68,	// (0x00092b1c) bg_vkb2_func_pane_g5

0xc92d,	// (0x000928e1) bg_vkb2_func_pane_g6

0xc935,	// (0x000928e9) bg_vkb2_func_pane_g7

0xc925,	// (0x000928d9) bg_vkb2_func_pane_g8

0x27c1,	// (0x00088775) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00095ae0) bg_vkb2_func_pane_g

0x9597,	// (0x0008f54b) blid2_tripm_pane_g6_ParamLimits

0x9597,	// (0x0008f54b) blid2_tripm_pane_g6

0xc609,	// (0x000925bd) mp4_progress_pane_g1

0x9610,	// (0x0008f5c4) blid2_tripm_values_pane_ParamLimits

0x9610,	// (0x0008f5c4) blid2_tripm_values_pane

0x9707,	// (0x0008f6bb) blid2_tripm_values_pane_t1

0x9715,	// (0x0008f6c9) blid2_tripm_values_pane_t2

0x9723,	// (0x0008f6d7) blid2_tripm_values_pane_t3

0x9731,	// (0x0008f6e5) blid2_tripm_values_pane_t4

0x973f,	// (0x0008f6f3) blid2_tripm_values_pane_t5

0x974d,	// (0x0008f701) blid2_tripm_values_pane_t6

0x975b,	// (0x0008f70f) blid2_tripm_values_pane_t7

0x9769,	// (0x0008f71d) blid2_tripm_values_pane_t8

0x9777,	// (0x0008f72b) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00095af3) blid2_tripm_values_pane_t

0x227f,	// (0x00088233) call_video_pane_t1_ParamLimits

0x229d,	// (0x00088251) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00095222) call_video_pane_t_ParamLimits

0x03ec,	// (0x000863a0) msg_header_pane_g1_ParamLimits

0x4512,	// (0x0008a4c6) msg_header_pane_g2_ParamLimits

0x4512,	// (0x0008a4c6) msg_header_pane_g2

0x0001,

0xf488,	// (0x0009543c) msg_header_pane_g_ParamLimits

0xf488,	// (0x0009543c) msg_header_pane_g

0xedc6,	// (0x00094d7a) main_clock2_pane_ParamLimits

0x76fc,	// (0x0008d6b0) grid_clock2_toolbar_pane_ParamLimits

0x76fc,	// (0x0008d6b0) grid_clock2_toolbar_pane

0x76fc,	// (0x0008d6b0) listscroll_clock2_pane_ParamLimits

0x76fc,	// (0x0008d6b0) listscroll_clock2_pane

0x77ef,	// (0x0008d7a3) main_clock2_pane_t3_ParamLimits

0x77ef,	// (0x0008d7a3) main_clock2_pane_t3

0x7813,	// (0x0008d7c7) main_clock2_pane_t4_ParamLimits

0x7813,	// (0x0008d7c7) main_clock2_pane_t4

0xcff8,	// (0x00092fac) cell_clock2_toolbar_pane

0xd000,	// (0x00092fb4) cell_clock2_toolbar_pane_cp01

0xd000,	// (0x00092fb4) cell_clock2_toolbar_pane_cp02

0xd008,	// (0x00092fbc) cell_clock2_toolbar_pane_cp03

0xd010,	// (0x00092fc4) list_clock2_pane

0x3ae6,	// (0x00089a9a) scroll_pane_cp10

0xd018,	// (0x00092fcc) list_single_clock2_pane_ParamLimits

0xd018,	// (0x00092fcc) list_single_clock2_pane

0x3f35,	// (0x00089ee9) list_highlight_pane_cp08

0xd025,	// (0x00092fd9) list_single_clock2_pane_t1

0xd033,	// (0x00092fe7) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00095b06) list_single_clock2_pane_t

0xe67b,	// (0x0009462f) bg_button_pane_cp10

0xd041,	// (0x00092ff5) cell_clock2_toolbar_pane_g1

0x4526,	// (0x0008a4da) aid_main_viewer_pane_g1_ParamLimits

0x4526,	// (0x0008a4da) aid_main_viewer_pane_g1

0x4534,	// (0x0008a4e8) aid_main_viewer_pane_g2_ParamLimits

0x4534,	// (0x0008a4e8) aid_main_viewer_pane_g2

0x4542,	// (0x0008a4f6) aid_main_viewer_pane_g3_ParamLimits

0x4542,	// (0x0008a4f6) aid_main_viewer_pane_g3

0x4551,	// (0x0008a505) aid_main_viewer_pane_g4_ParamLimits

0x4551,	// (0x0008a505) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0009544d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0009544d) aid_main_viewer_pane_g

0x5fcb,	// (0x0008bf7f) main_calc_pane_ParamLimits

0x5fdf,	// (0x0008bf93) main_dialer2_pane_ParamLimits

0xe67b,	// (0x0009462f) main_cam6_pane

0xe67b,	// (0x0009462f) main_vid6_pane

0x7708,	// (0x0008d6bc) listscroll_gen_pane_cp06_ParamLimits

0x7708,	// (0x0008d6bc) listscroll_gen_pane_cp06

0x7836,	// (0x0008d7ea) main_clock2_pane_t5_ParamLimits

0x7836,	// (0x0008d7ea) main_clock2_pane_t5

0x7890,	// (0x0008d844) aid_call2_pane_cp10_ParamLimits

0x78a2,	// (0x0008d856) aid_call_pane_cp10_ParamLimits

0x3ccb,	// (0x00089c7f) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3ccb,	// (0x00089c7f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x78b4,	// (0x0008d868) popup_clock_analogue_window_cp10_g3_ParamLimits

0x78b4,	// (0x0008d868) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3ccb,	// (0x00089c7f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00095788) popup_clock_analogue_window_cp10_g_ParamLimits

0x78c6,	// (0x0008d87a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7f2f,	// (0x0008dee3) cell_dialer2_keypad_pane_g2_ParamLimits

0x7f2f,	// (0x0008dee3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0009586e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0009586e) cell_dialer2_keypad_pane_g

0x7f4b,	// (0x0008deff) cell_dialer2_keypad_pane_t1

0x8a8f,	// (0x0008ea43) main_cset_text2_pane_ParamLimits

0x8a8f,	// (0x0008ea43) main_cset_text2_pane

0xcd8f,	// (0x00092d43) area_vitu2_query_pane_g1_ParamLimits

0x06e9,	// (0x0008669d) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00095a23) area_vitu2_query_pane_g_ParamLimits

0xce13,	// (0x00092dc7) area_vitu2_query_pane_t7_ParamLimits

0xce13,	// (0x00092dc7) area_vitu2_query_pane_t7

0x9241,	// (0x0008f1f5) bg_button_pane_cp018_ParamLimits

0x924f,	// (0x0008f203) bg_button_pane_cp021_ParamLimits

0x0722,	// (0x000866d6) bg_button_pane_cp022_ParamLimits

0x0722,	// (0x000866d6) bg_vkb2_func_pane_cp08_ParamLimits

0x9241,	// (0x0008f1f5) bg_vkb2_func_pane_cp06_ParamLimits

0x924f,	// (0x0008f203) bg_vkb2_func_pane_cp07_ParamLimits

0x0731,	// (0x000866e5) input_focus_pane_cp09_ParamLimits

0xf08c,	// (0x00095040) cam6_autofocus_pane_ParamLimits

0xf08c,	// (0x00095040) cam6_autofocus_pane

0x9785,	// (0x0008f739) cam6_image_uncrop_pane_ParamLimits

0x9785,	// (0x0008f739) cam6_image_uncrop_pane

0x9794,	// (0x0008f748) cam6_indi_pane_ParamLimits

0x9794,	// (0x0008f748) cam6_indi_pane

0x97aa,	// (0x0008f75e) cam6_mode_pane_ParamLimits

0x97aa,	// (0x0008f75e) cam6_mode_pane

0x97bc,	// (0x0008f770) cam6_timer_pane_ParamLimits

0x97bc,	// (0x0008f770) cam6_timer_pane

0x97c8,	// (0x0008f77c) cam6_zoom_pane_ParamLimits

0x97c8,	// (0x0008f77c) cam6_zoom_pane

0x97d4,	// (0x0008f788) cam6_mode_pane_g1_ParamLimits

0x97d4,	// (0x0008f788) cam6_mode_pane_g1

0x97e4,	// (0x0008f798) cam6_mode_pane_g2_ParamLimits

0x97e4,	// (0x0008f798) cam6_mode_pane_g2

0x97f4,	// (0x0008f7a8) cam6_mode_pane_g3_ParamLimits

0x97f4,	// (0x0008f7a8) cam6_mode_pane_g3

0x9804,	// (0x0008f7b8) cam6_mode_pane_g4_ParamLimits

0x9804,	// (0x0008f7b8) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00095b0b) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00095b0b) cam6_mode_pane_g

0xd049,	// (0x00092ffd) bg_tb_trans_pane_cp08_ParamLimits

0xd049,	// (0x00092ffd) bg_tb_trans_pane_cp08

0xd057,	// (0x0009300b) cam6_battery_pane_ParamLimits

0xd057,	// (0x0009300b) cam6_battery_pane

0xd06d,	// (0x00093021) cam6_indi_pane_g1_ParamLimits

0xd06d,	// (0x00093021) cam6_indi_pane_g1

0xd07f,	// (0x00093033) cam6_indi_pane_g2_ParamLimits

0xd07f,	// (0x00093033) cam6_indi_pane_g2

0xd091,	// (0x00093045) cam6_indi_pane_g3_ParamLimits

0xd091,	// (0x00093045) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00095b14) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00095b14) cam6_indi_pane_g

0xd0a3,	// (0x00093057) cam6_indi_pane_t1_ParamLimits

0xd0a3,	// (0x00093057) cam6_indi_pane_t1

0x9814,	// (0x0008f7c8) cam6_autofocus_pane_g1

0x981c,	// (0x0008f7d0) cam6_autofocus_pane_g2

0x9824,	// (0x0008f7d8) cam6_autofocus_pane_g3

0x982c,	// (0x0008f7e0) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00095b1b) cam6_autofocus_pane_g

0xd0c9,	// (0x0009307d) cam6_timer_pane_g1

0xd0d1,	// (0x00093085) cam6_timer_pane_t1

0xd0df,	// (0x00093093) cam6_zoom_cont_pane

0xd0e7,	// (0x0009309b) cam6_zoom_pane_g1

0xd0ef,	// (0x000930a3) cam6_zoom_pane_g2

0x9834,	// (0x0008f7e8) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00095b24) cam6_zoom_pane_g

0xbaa4,	// (0x00091a58) cam6_battery_pane_g1

0xbaa4,	// (0x00091a58) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00095690) cam6_battery_pane_g

0xd0f7,	// (0x000930ab) cam6_zoom_cont_pane_g1

0xd100,	// (0x000930b4) cam6_zoom_cont_pane_g2

0xd109,	// (0x000930bd) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00095b2b) cam6_zoom_cont_pane_g

0x9851,	// (0x0008f805) cam6_mode_pane_cp_ParamLimits

0x9851,	// (0x0008f805) cam6_mode_pane_cp

0x97c8,	// (0x0008f77c) cam6_zoom_pane_cp_ParamLimits

0x97c8,	// (0x0008f77c) cam6_zoom_pane_cp

0x9863,	// (0x0008f817) vid6_image_uncrop_cif_pane_ParamLimits

0x9863,	// (0x0008f817) vid6_image_uncrop_cif_pane

0x9873,	// (0x0008f827) vid6_image_uncrop_nhd_pane_ParamLimits

0x9873,	// (0x0008f827) vid6_image_uncrop_nhd_pane

0x9785,	// (0x0008f739) vid6_image_uncrop_vga_pane_ParamLimits

0x9785,	// (0x0008f739) vid6_image_uncrop_vga_pane

0x9882,	// (0x0008f836) vid6_image_uncrop_wvga_pane_ParamLimits

0x9882,	// (0x0008f836) vid6_image_uncrop_wvga_pane

0x9891,	// (0x0008f845) vid6_indi_pane_ParamLimits

0x9891,	// (0x0008f845) vid6_indi_pane

0xd049,	// (0x00092ffd) bg_tb_trans_pane_cp09_ParamLimits

0xd049,	// (0x00092ffd) bg_tb_trans_pane_cp09

0xd121,	// (0x000930d5) cam6_battery_pane_cp_ParamLimits

0xd121,	// (0x000930d5) cam6_battery_pane_cp

0xd12d,	// (0x000930e1) vid6_indi_pane_g1_ParamLimits

0xd12d,	// (0x000930e1) vid6_indi_pane_g1

0xd13f,	// (0x000930f3) vid6_indi_pane_g2_ParamLimits

0xd13f,	// (0x000930f3) vid6_indi_pane_g2

0xd151,	// (0x00093105) vid6_indi_pane_g3_ParamLimits

0xd151,	// (0x00093105) vid6_indi_pane_g3

0xd166,	// (0x0009311a) vid6_indi_pane_g4_ParamLimits

0xd166,	// (0x0009311a) vid6_indi_pane_g4

0xd17b,	// (0x0009312f) vid6_indi_pane_g5_ParamLimits

0xd17b,	// (0x0009312f) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00095b32) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00095b32) vid6_indi_pane_g

0xd195,	// (0x00093149) vid6_indi_pane_t1_ParamLimits

0xd195,	// (0x00093149) vid6_indi_pane_t1

0xd1ab,	// (0x0009315f) vid6_indi_pane_t2_ParamLimits

0xd1ab,	// (0x0009315f) vid6_indi_pane_t2

0xd1d3,	// (0x00093187) vid6_indi_pane_t3_ParamLimits

0xd1d3,	// (0x00093187) vid6_indi_pane_t3

0xd1fb,	// (0x000931af) vid6_indi_pane_t4_ParamLimits

0xd1fb,	// (0x000931af) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00095b3d) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00095b3d) vid6_indi_pane_t

0xd21f,	// (0x000931d3) wait_bar_pane_cp08

0x98a9,	// (0x0008f85d) main_cset_text2_pane_t1_ParamLimits

0x98a9,	// (0x0008f85d) main_cset_text2_pane_t1

0x983c,	// (0x0008f7f0) listscroll_gen_pane_cp06_t1_ParamLimits

0x983c,	// (0x0008f7f0) listscroll_gen_pane_cp06_t1

0xe67b,	// (0x0009462f) main_cam6_set_pane

0xbd10,	// (0x00091cc4) bg_tb_trans_pane_cp06_ParamLimits

0xc7d0,	// (0x00092784) cam4_indicators_pane_g1_ParamLimits

0xc7e1,	// (0x00092795) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000958ab) cam4_indicators_pane_g_ParamLimits

0xc7ff,	// (0x000927b3) cam4_indicators_pane_t1_ParamLimits

0xe685,	// (0x00094639) bg_tb_trans_pane_cp07_ParamLimits

0xc82b,	// (0x000927df) vid4_indicators_pane_g1_ParamLimits

0xc83f,	// (0x000927f3) vid4_indicators_pane_g2_ParamLimits

0xc853,	// (0x00092807) vid4_indicators_pane_g3_ParamLimits

0xc864,	// (0x00092818) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000958bd) vid4_indicators_pane_g_ParamLimits

0xc882,	// (0x00092836) vid4_indicators_pane_t1_ParamLimits

0xf022,	// (0x00094fd6) vid4_progress_pane_g1_ParamLimits

0xf032,	// (0x00094fe6) vid4_progress_pane_g2_ParamLimits

0x9387,	// (0x0008f33b) vid4_progress_pane_g3_ParamLimits

0xf042,	// (0x00094ff6) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00095a6e) vid4_progress_pane_g_ParamLimits

0x9399,	// (0x0008f34d) vid4_progress_pane_t1_ParamLimits

0xf05a,	// (0x0009500e) vid4_progress_pane_t2_ParamLimits

0xf06f,	// (0x00095023) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00095a79) vid4_progress_pane_t_ParamLimits

0x93b1,	// (0x0008f365) wait_bar_pane_cp07_ParamLimits

0x98c6,	// (0x0008f87a) main_cam6_set_pane_g2_ParamLimits

0x98c6,	// (0x0008f87a) main_cam6_set_pane_g2

0x98ea,	// (0x0008f89e) main_cset6_listscroll_pane_ParamLimits

0x98ea,	// (0x0008f89e) main_cset6_listscroll_pane

0x990a,	// (0x0008f8be) main_cset6_slider_pane_ParamLimits

0x990a,	// (0x0008f8be) main_cset6_slider_pane

0x9920,	// (0x0008f8d4) main_cset6_text2_pane_ParamLimits

0x9920,	// (0x0008f8d4) main_cset6_text2_pane

0xd22e,	// (0x000931e2) main_cset6_text_pane

0xd236,	// (0x000931ea) main_cset_list_pane_copy1_ParamLimits

0xd236,	// (0x000931ea) main_cset_list_pane_copy1

0xd246,	// (0x000931fa) scroll_pane_cp028_copy1

0x992e,	// (0x0008f8e2) cset_list_set_pane_copy1

0x993f,	// (0x0008f8f3) aid_position_infowindow_above_copy1

0x9947,	// (0x0008f8fb) aid_position_infowindow_below_copy1

0x994f,	// (0x0008f903) cset_list_set_pane_g1_copy1

0x0754,	// (0x00086708) cset_list_set_pane_g3_copy1_ParamLimits

0x0754,	// (0x00086708) cset_list_set_pane_g3_copy1

0x0763,	// (0x00086717) cset_list_set_pane_t1_copy1_ParamLimits

0x0763,	// (0x00086717) cset_list_set_pane_t1_copy1

0xe685,	// (0x00094639) list_highlight_pane_cp021_copy1_ParamLimits

0xe685,	// (0x00094639) list_highlight_pane_cp021_copy1

0xd24f,	// (0x00093203) cset6_slider_pane_ParamLimits

0xd24f,	// (0x00093203) cset6_slider_pane

0xd27b,	// (0x0009322f) main_cset6_slider_pane_g1_ParamLimits

0xd27b,	// (0x0009322f) main_cset6_slider_pane_g1

0x9957,	// (0x0008f90b) main_cset6_slider_pane_g2_ParamLimits

0x9957,	// (0x0008f90b) main_cset6_slider_pane_g2

0xd2a3,	// (0x00093257) main_cset6_slider_pane_g3_ParamLimits

0xd2a3,	// (0x00093257) main_cset6_slider_pane_g3

0x997f,	// (0x0008f933) main_cset6_slider_pane_g4_ParamLimits

0x997f,	// (0x0008f933) main_cset6_slider_pane_g4

0x998b,	// (0x0008f93f) main_cset6_slider_pane_g5_ParamLimits

0x998b,	// (0x0008f93f) main_cset6_slider_pane_g5

0xca34,	// (0x000929e8) main_cset6_slider_pane_g7_ParamLimits

0xca34,	// (0x000929e8) main_cset6_slider_pane_g7

0xca40,	// (0x000929f4) main_cset6_slider_pane_g8_ParamLimits

0xca40,	// (0x000929f4) main_cset6_slider_pane_g8

0x8b3c,	// (0x0008eaf0) main_cset6_slider_pane_g9_ParamLimits

0x8b3c,	// (0x0008eaf0) main_cset6_slider_pane_g9

0x8b48,	// (0x0008eafc) main_cset6_slider_pane_g10_ParamLimits

0x8b48,	// (0x0008eafc) main_cset6_slider_pane_g10

0x8b54,	// (0x0008eb08) main_cset6_slider_pane_g11_ParamLimits

0x8b54,	// (0x0008eb08) main_cset6_slider_pane_g11

0x8b60,	// (0x0008eb14) main_cset6_slider_pane_g12_ParamLimits

0x8b60,	// (0x0008eb14) main_cset6_slider_pane_g12

0x8b6c,	// (0x0008eb20) main_cset6_slider_pane_g13_ParamLimits

0x8b6c,	// (0x0008eb20) main_cset6_slider_pane_g13

0x8b78,	// (0x0008eb2c) main_cset6_slider_pane_g14_ParamLimits

0x8b78,	// (0x0008eb2c) main_cset6_slider_pane_g14

0x9997,	// (0x0008f94b) main_cset6_slider_pane_g15_ParamLimits

0x9997,	// (0x0008f94b) main_cset6_slider_pane_g15

0x8b9c,	// (0x0008eb50) main_cset6_slider_pane_g16_ParamLimits

0x8b9c,	// (0x0008eb50) main_cset6_slider_pane_g16

0x8ba8,	// (0x0008eb5c) main_cset6_slider_pane_g17_ParamLimits

0x8ba8,	// (0x0008eb5c) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00095b46) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00095b46) main_cset6_slider_pane_g

0xd2af,	// (0x00093263) main_cset6_slider_pane_t1_ParamLimits

0xd2af,	// (0x00093263) main_cset6_slider_pane_t1

0x99c7,	// (0x0008f97b) main_cset6_slider_pane_t2_ParamLimits

0x99c7,	// (0x0008f97b) main_cset6_slider_pane_t2

0x99f2,	// (0x0008f9a6) main_cset6_slider_pane_t3_ParamLimits

0x99f2,	// (0x0008f9a6) main_cset6_slider_pane_t3

0x9a1d,	// (0x0008f9d1) main_cset6_slider_pane_t4_ParamLimits

0x9a1d,	// (0x0008f9d1) main_cset6_slider_pane_t4

0x9a48,	// (0x0008f9fc) main_cset6_slider_pane_t5_ParamLimits

0x9a48,	// (0x0008f9fc) main_cset6_slider_pane_t5

0xd2f0,	// (0x000932a4) main_cset6_slider_pane_t7_ParamLimits

0xd2f0,	// (0x000932a4) main_cset6_slider_pane_t7

0x9a73,	// (0x0008fa27) main_cset6_slider_pane_t8_ParamLimits

0x9a73,	// (0x0008fa27) main_cset6_slider_pane_t8

0x9a97,	// (0x0008fa4b) main_cset6_slider_pane_t9_ParamLimits

0x9a97,	// (0x0008fa4b) main_cset6_slider_pane_t9

0x9abb,	// (0x0008fa6f) main_cset6_slider_pane_t10_ParamLimits

0x9abb,	// (0x0008fa6f) main_cset6_slider_pane_t10

0x9adf,	// (0x0008fa93) main_cset6_slider_pane_t11_ParamLimits

0x9adf,	// (0x0008fa93) main_cset6_slider_pane_t11

0xd326,	// (0x000932da) main_cset6_slider_pane_t14_ParamLimits

0xd326,	// (0x000932da) main_cset6_slider_pane_t14

0xd35f,	// (0x00093313) main_cset6_slider_pane_t15_ParamLimits

0xd35f,	// (0x00093313) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00095b6b) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00095b6b) main_cset6_slider_pane_t

0xcb1c,	// (0x00092ad0) cset_slider_pane_g1_copy1

0xcb25,	// (0x00092ad9) cset_slider_pane_g2_copy1

0xcb2e,	// (0x00092ae2) cset_slider_pane_g3_copy1

0xe67b,	// (0x0009462f) bg_popup_sub_pane_cp011_copy1

0xd398,	// (0x0009334c) main_cset_text_pane_g1_copy1

0xcbb7,	// (0x00092b6b) main_cset_text_pane_t1_copy1

0xcbc5,	// (0x00092b79) main_cset_text_pane_t2_copy1

0xcbd3,	// (0x00092b87) main_cset_text_pane_t3_copy1

0xcbe1,	// (0x00092b95) main_cset_text_pane_t4_copy1

0xcbef,	// (0x00092ba3) main_cset_text_pane_t5_copy1

0xd3a0,	// (0x00093354) main_cset_text_pane_t6_copy1

0xcc0b,	// (0x00092bbf) main_cset_text_pane_t7_copy1

0x98a9,	// (0x0008f85d) main_cset_text2_pane_t1_copy1

0xe685,	// (0x00094639) main_ncimui_pane

0x6229,	// (0x0008c1dd) popup_query_ncimui_window_ParamLimits

0x6229,	// (0x0008c1dd) popup_query_ncimui_window

0xbd75,	// (0x00091d29) field_cale_ev2_pane_g4_ParamLimits

0xbd75,	// (0x00091d29) field_cale_ev2_pane_g4

0x7e0f,	// (0x0008ddc3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e0f,	// (0x0008ddc3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x00095849) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x00095849) cell_video_dialer_keypad_pane_g

0x7e27,	// (0x0008dddb) cell_video_dialer_keypad_pane_t1

0xe67b,	// (0x0009462f) bg_popup_window_pane_cp012

0x393c,	// (0x000898f0) heading_pane_cp06

0xd3cc,	// (0x00093380) ncim_query_content_pane

0xe67b,	// (0x0009462f) bg_popup_heading_pane_cp01

0xd3d4,	// (0x00093388) ncim_heading_pane_t1

0xd3e2,	// (0x00093396) ncim_indicator_popup_pane

0xd3f4,	// (0x000933a8) ncim_query_button_pane

0xd408,	// (0x000933bc) ncim_query_content_pane_t1

0xd41a,	// (0x000933ce) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00095baf) ncim_query_content_pane_t

0xd454,	// (0x00093408) ncim_query_list_pane

0xd466,	// (0x0009341a) ncim_query_popup_pane

0xd3e2,	// (0x00093396) ncim_indicator_popup_pane_ParamLimits

0x9c44,	// (0x0008fbf8) ncim_query_content_pane_g1_ParamLimits

0x9c44,	// (0x0008fbf8) ncim_query_content_pane_g1

0xd408,	// (0x000933bc) ncim_query_content_pane_t1_ParamLimits

0xd41a,	// (0x000933ce) ncim_query_content_pane_t2_ParamLimits

0x9c50,	// (0x0008fc04) ncim_query_content_pane_t3_ParamLimits

0x9c50,	// (0x0008fc04) ncim_query_content_pane_t3

0x9c78,	// (0x0008fc2c) ncim_query_content_pane_t4_ParamLimits

0x9c78,	// (0x0008fc2c) ncim_query_content_pane_t4

0x9ca0,	// (0x0008fc54) ncim_query_content_pane_t5_ParamLimits

0x9ca0,	// (0x0008fc54) ncim_query_content_pane_t5

0xd42c,	// (0x000933e0) ncim_query_content_pane_t6_ParamLimits

0xd42c,	// (0x000933e0) ncim_query_content_pane_t6

0xfbfb,	// (0x00095baf) ncim_query_content_pane_t_ParamLimits

0xd454,	// (0x00093408) ncim_query_list_pane_ParamLimits

0xd466,	// (0x0009341a) ncim_query_popup_pane_ParamLimits

0xd47a,	// (0x0009342e) wait_bar_pane_cp04

0xe67b,	// (0x0009462f) input_focus_pane_cp011

0xd482,	// (0x00093436) ncim_query_popup_pane_t1

0xd490,	// (0x00093444) ncim_list_query_list_pane_ParamLimits

0xd490,	// (0x00093444) ncim_list_query_list_pane

0xe67b,	// (0x0009462f) bg_button_pane_cp027

0xd49d,	// (0x00093451) ncim_query_button_pane_g1

0xe67b,	// (0x0009462f) list_highlight_pane_cp012

0xd4a7,	// (0x0009345b) ncim_list_query_list_pane_g1

0xd4af,	// (0x00093463) ncim_list_query_list_pane_t1

0xc7f0,	// (0x000927a4) cam4_indicators_pane_g3_ParamLimits

0xc7f0,	// (0x000927a4) cam4_indicators_pane_g3

0xc870,	// (0x00092824) vid4_indicators_pane_g5_ParamLimits

0xc870,	// (0x00092824) vid4_indicators_pane_g5

0xf04e,	// (0x00095002) vid4_progress_pane_g5_ParamLimits

0xf04e,	// (0x00095002) vid4_progress_pane_g5

0x9b32,	// (0x0008fae6) main_ncimui_pane_g1

0x9b98,	// (0x0008fb4c) ncimui_group_query_pane_ParamLimits

0x9b98,	// (0x0008fb4c) ncimui_group_query_pane

0x9be0,	// (0x0008fb94) ncimui_list_pane_ParamLimits

0x9be0,	// (0x0008fb94) ncimui_list_pane

0x9c07,	// (0x0008fbbb) ncimui_text_pane_ParamLimits

0x9c07,	// (0x0008fbbb) ncimui_text_pane

0x9cc8,	// (0x0008fc7c) ncimui_text_pane_t1_ParamLimits

0x9cc8,	// (0x0008fc7c) ncimui_text_pane_t1

0xd4bd,	// (0x00093471) ncimui_list_single_graphic_pane_ParamLimits

0xd4bd,	// (0x00093471) ncimui_list_single_graphic_pane

0x9ce6,	// (0x0008fc9a) ncimui_query_pane_ParamLimits

0x9ce6,	// (0x0008fc9a) ncimui_query_pane

0xe67b,	// (0x0009462f) list_highlight_pane_cp013

0xd4cd,	// (0x00093481) ncim_list_query_list_pane_t1_copy1

0xd4a7,	// (0x0009345b) ncim_list_single_graphic_pane_g1

0xd4db,	// (0x0009348f) ncim_query_button_pane_cp01

0xd4e7,	// (0x0009349b) ncim_query_entry_pane_ParamLimits

0xd4e7,	// (0x0009349b) ncim_query_entry_pane

0xd4fa,	// (0x000934ae) ncimui_query_pane_g1

0xd506,	// (0x000934ba) ncimui_query_pane_t1_ParamLimits

0xd506,	// (0x000934ba) ncimui_query_pane_t1

0xe685,	// (0x00094639) input_focus_pane_cp012

0xd51f,	// (0x000934d3) ncim_query_entry_pane_t1

0xedc6,	// (0x00094d7a) main_im_pane_ParamLimits

0xe685,	// (0x00094639) main_mobtv_pane_ParamLimits

0xe685,	// (0x00094639) main_mobtv_pane

0x99af,	// (0x0008f963) main_cset6_slider_pane_g18_ParamLimits

0x99af,	// (0x0008f963) main_cset6_slider_pane_g18

0x99bb,	// (0x0008f96f) main_cset6_slider_pane_g19_ParamLimits

0x99bb,	// (0x0008f96f) main_cset6_slider_pane_g19

0xf09a,	// (0x0009504e) bg_main_mobtv_pane_ParamLimits

0xf09a,	// (0x0009504e) bg_main_mobtv_pane

0x9cf9,	// (0x0008fcad) main_mobtv_info_pane

0x9d02,	// (0x0008fcb6) main_mobtv_loading_pane_ParamLimits

0x9d02,	// (0x0008fcb6) main_mobtv_loading_pane

0xd531,	// (0x000934e5) main_mobtv_pg_channel_list_pane

0xd53b,	// (0x000934ef) main_mobtv_pg_hdr_pane

0x9d0f,	// (0x0008fcc3) main_mobtv_programe_curr_pane_ParamLimits

0x9d0f,	// (0x0008fcc3) main_mobtv_programe_curr_pane

0x9d1c,	// (0x0008fcd0) main_mobtv_programe_next_pane_ParamLimits

0x9d1c,	// (0x0008fcd0) main_mobtv_programe_next_pane

0xd544,	// (0x000934f8) popup_mobtv_noti_window

0xbaa4,	// (0x00091a58) main_tv_pg_hdr_pane_g1

0xd54c,	// (0x00093500) main_tv_pg_hdr_pane_g2

0xd554,	// (0x00093508) main_tv_pg_hdr_pane_g3

0xd55c,	// (0x00093510) main_tv_pg_hdr_pane_g4

0xd564,	// (0x00093518) main_tv_pg_hdr_pane_g5

0xd56e,	// (0x00093522) main_tv_pg_hdr_pane_g6

0xd578,	// (0x0009352c) main_tv_pg_hdr_pane_g7

0xd582,	// (0x00093536) main_tv_pg_hdr_pane_g8

0xd58c,	// (0x00093540) main_tv_pg_hdr_pane_g9

0xd596,	// (0x0009354a) main_tv_pg_hdr_pane_g10

0xd5a0,	// (0x00093554) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00095bbc) main_tv_pg_hdr_pane_g

0xd5aa,	// (0x0009355e) main_tv_pg_hdr_pane_t1

0xd5b8,	// (0x0009356c) main_tv_pg_hdr_pane_t2

0xd5c6,	// (0x0009357a) main_tv_pg_hdr_pane_t3

0xd5d6,	// (0x0009358a) main_tv_pg_hdr_pane_t4

0xd5e6,	// (0x0009359a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00095bd3) main_tv_pg_hdr_pane_t

0xd5f6,	// (0x000935aa) single_mobtv_pg_channel_pane_ParamLimits

0xd5f6,	// (0x000935aa) single_mobtv_pg_channel_pane

0xd608,	// (0x000935bc) single_mobtv_pg_channel_table_pane

0xd611,	// (0x000935c5) single_mobtv_pg_channel_thumb_pane

0xd61a,	// (0x000935ce) single_tv_pg_channel_pane_g1

0xd623,	// (0x000935d7) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00095bde) single_tv_pg_channel_pane_g

0xbd10,	// (0x00091cc4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbd10,	// (0x00091cc4) bg_single_mobtv_pg_channel_thumb_pane

0xd62c,	// (0x000935e0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd62c,	// (0x000935e0) single_mobtv_pg_channel_thumb_pane_g1

0xd63a,	// (0x000935ee) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd63a,	// (0x000935ee) single_mobtv_pg_channel_thumb_pane_g2

0xd646,	// (0x000935fa) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd646,	// (0x000935fa) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00095be3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00095be3) single_mobtv_pg_channel_thumb_pane_g

0xd652,	// (0x00093606) single_mobtv_pg_channel_thumb_pane_t1

0xd660,	// (0x00093614) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00095bea) single_mobtv_pg_channel_thumb_pane_t

0xbaa4,	// (0x00091a58) bg_single_mobtv_pg_channel_table_pane_g1

0xbaa4,	// (0x00091a58) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00095690) bg_single_mobtv_pg_channel_table_pane_g

0xd66e,	// (0x00093622) single_mobtv_pg_channel_table_pane_t1

0xd67c,	// (0x00093630) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00095bef) single_mobtv_pg_channel_table_pane_t

0x9d31,	// (0x0008fce5) main_mobtv_info_pane_g1_ParamLimits

0x9d31,	// (0x0008fce5) main_mobtv_info_pane_g1

0x9d4f,	// (0x0008fd03) main_mobtv_info_pane_t1_ParamLimits

0x9d4f,	// (0x0008fd03) main_mobtv_info_pane_t1

0x9dc7,	// (0x0008fd7b) main_mobtv_info_pane_t2_ParamLimits

0x9dc7,	// (0x0008fd7b) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00095bf9) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00095bf9) main_mobtv_info_pane_t

0x9e56,	// (0x0008fe0a) wait_bar_pane_cp05

0x9e68,	// (0x0008fe1c) main_mobtv_loading_pane_g1_ParamLimits

0x9e68,	// (0x0008fe1c) main_mobtv_loading_pane_g1

0x9e7b,	// (0x0008fe2f) main_mobtv_loading_pane_g2_ParamLimits

0x9e7b,	// (0x0008fe2f) main_mobtv_loading_pane_g2

0x9e87,	// (0x0008fe3b) main_mobtv_loading_pane_g3_ParamLimits

0x9e87,	// (0x0008fe3b) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00095c00) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00095c00) main_mobtv_loading_pane_g

0xd68a,	// (0x0009363e) main_mobtv_loading_pane_t1_ParamLimits

0xd68a,	// (0x0009363e) main_mobtv_loading_pane_t1

0xd6a2,	// (0x00093656) main_mobtv_loading_pane_t2_ParamLimits

0xd6a2,	// (0x00093656) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00095c07) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00095c07) main_mobtv_loading_pane_t

0x9e9a,	// (0x0008fe4e) wait_bar_pane_cp06_ParamLimits

0x9e9a,	// (0x0008fe4e) wait_bar_pane_cp06

0xd6c6,	// (0x0009367a) main_mobtv_programe_curr_pane_t1

0xd6d4,	// (0x00093688) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00095c0c) main_mobtv_programe_curr_pane_t

0xd6e2,	// (0x00093696) main_mobtv_programe_next_pane_t1

0xd6f0,	// (0x000936a4) main_mobtv_programe_next_pane_t2

0xd6fe,	// (0x000936b2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00095c11) main_mobtv_programe_next_pane_t

0xe67b,	// (0x0009462f) bg_popup_mobtv_noti_window_pane

0xd70c,	// (0x000936c0) popup_mobtv_noti_window_g1

0xd714,	// (0x000936c8) popup_mobtv_noti_window_t1

0xd722,	// (0x000936d6) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00095c18) popup_mobtv_noti_window_t

0xbaa4,	// (0x00091a58) bg_popup_mobtv_noti_window_pane_g1

0xe67b,	// (0x0009462f) sc_clock_pane

0xe67b,	// (0x0009462f) main_fs_bigclock_pane

0x95fa,	// (0x0008f5ae) blid2_tripm_pane_t4_ParamLimits

0x95fa,	// (0x0008f5ae) blid2_tripm_pane_t4

0x9ea9,	// (0x0008fe5d) sc_clock_pane_g1_ParamLimits

0x9ea9,	// (0x0008fe5d) sc_clock_pane_g1

0x9ebb,	// (0x0008fe6f) sc_clock_pane_t1_ParamLimits

0x9ebb,	// (0x0008fe6f) sc_clock_pane_t1

0x9edd,	// (0x0008fe91) sc_clock_pane_t2_ParamLimits

0x9edd,	// (0x0008fe91) sc_clock_pane_t2

0x9ef5,	// (0x0008fea9) sc_clock_pane_t3_ParamLimits

0x9ef5,	// (0x0008fea9) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00095c1d) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00095c1d) sc_clock_pane_t

0xa893,	// (0x00090847) main_fs_bigclock_indicator_pane_ParamLimits

0xa893,	// (0x00090847) main_fs_bigclock_indicator_pane

0x9f95,	// (0x0008ff49) main_fs_bigclock_pane_g1_ParamLimits

0x9f95,	// (0x0008ff49) main_fs_bigclock_pane_g1

0xa89f,	// (0x00090853) main_fs_bigclock_pane_t1_ParamLimits

0xa89f,	// (0x00090853) main_fs_bigclock_pane_t1

0xa8b1,	// (0x00090865) main_fs_bigclock_pane_t2_ParamLimits

0xa8b1,	// (0x00090865) main_fs_bigclock_pane_t2

0xa8c5,	// (0x00090879) main_fs_bigclock_pane_t3_ParamLimits

0xa8c5,	// (0x00090879) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00095e27) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00095e27) main_fs_bigclock_pane_t

0xe211,	// (0x000941c5) main_fs_bigclock_indicator_pane_g1

0xd3fc,	// (0x000933b0) ncim_query_content_pane_g2_ParamLimits

0xd3fc,	// (0x000933b0) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00095baa) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00095baa) ncim_query_content_pane_g

0x9f0e,	// (0x0008fec2) sc_clock_pane_t4_ParamLimits

0x9f0e,	// (0x0008fec2) sc_clock_pane_t4

0xe685,	// (0x00094639) main_radioblah_pane

0xc724,	// (0x000926d8) cell_call4_button_pane_t1_copy1_ParamLimits

0xc724,	// (0x000926d8) cell_call4_button_pane_t1_copy1

0x9b4a,	// (0x0008fafe) main_ncimui_pane_t1_ParamLimits

0x9b4a,	// (0x0008fafe) main_ncimui_pane_t1

0x9b64,	// (0x0008fb18) main_ncimui_pane_t2_ParamLimits

0x9b64,	// (0x0008fb18) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00095ba3) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00095ba3) main_ncimui_pane_t

0xd866,	// (0x0009381a) main_radioblah_anim_pane_ParamLimits

0xd866,	// (0x0009381a) main_radioblah_anim_pane

0xd877,	// (0x0009382b) main_radioblah_info_pane_ParamLimits

0xd877,	// (0x0009382b) main_radioblah_info_pane

0xd88b,	// (0x0009383f) main_radioblah_pane_t1_ParamLimits

0xd88b,	// (0x0009383f) main_radioblah_pane_t1

0xd8a7,	// (0x0009385b) main_radioblah_pane_t2_ParamLimits

0xd8a7,	// (0x0009385b) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00095c3e) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00095c3e) main_radioblah_pane_t

0x9fed,	// (0x0008ffa1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9fed,	// (0x0008ffa1) main_radioblah_rocker_ctrl_pane

0xd8ef,	// (0x000938a3) main_radioblah_info_pane_t1_ParamLimits

0xd8ef,	// (0x000938a3) main_radioblah_info_pane_t1

0xa045,	// (0x0008fff9) main_radioblah_info_pane_t2_ParamLimits

0xa045,	// (0x0008fff9) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00095c47) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00095c47) main_radioblah_info_pane_t

0xbaa4,	// (0x00091a58) main_radioblah_rocker_ctrl_pane_g1

0xa0f5,	// (0x000900a9) main_radioblah_rocker_ctrl_pane_g2

0xa0fd,	// (0x000900b1) main_radioblah_rocker_ctrl_pane_g3

0xa105,	// (0x000900b9) main_radioblah_rocker_ctrl_pane_g4

0xa10d,	// (0x000900c1) main_radioblah_rocker_ctrl_pane_g5

0xa115,	// (0x000900c9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00095c50) main_radioblah_rocker_ctrl_pane_g

0x98a9,	// (0x0008f85d) main_cset_text2_pane_t1_copy1_ParamLimits

0xc7ae,	// (0x00092762) cam4_image_uncrop_qvga_pane

0xc819,	// (0x000927cd) vid4_image_uncrop_qcif_pane

0xf08c,	// (0x00095040) cam6_image_uncrop_qvga_pane_ParamLimits

0xf08c,	// (0x00095040) cam6_image_uncrop_qvga_pane

0xd111,	// (0x000930c5) vid6_image_uncrop_qcif_pane_ParamLimits

0xd111,	// (0x000930c5) vid6_image_uncrop_qcif_pane

0xe67b,	// (0x0009462f) bg_popup_preview_window_pane_cp03

0xd3ae,	// (0x00093362) list_cset_text2_pane

0xd3b6,	// (0x0009336a) main_cset6_text2_pane_g1

0xd3be,	// (0x00093372) main_cset6_text2_pane_t1

0xa11d,	// (0x000900d1) list_cset_text2_pane_t1_ParamLimits

0xa11d,	// (0x000900d1) list_cset_text2_pane_t1

0xe685,	// (0x00094639) main_radioblah_pane_ParamLimits

0x9e42,	// (0x0008fdf6) main_mobtv_info_pane_t3_ParamLimits

0x9e42,	// (0x0008fdf6) main_mobtv_info_pane_t3

0x9fdb,	// (0x0008ff8f) main_radioblah_pane_g1

0xa015,	// (0x0008ffc9) main_radioblah_info_pane_g1

0xa09a,	// (0x0009004e) main_radioblah_info_pane_t3_ParamLimits

0xa09a,	// (0x0009004e) main_radioblah_info_pane_t3

0x33ed,	// (0x000893a1) highlight_cell_cale_month_pane_ParamLimits

0x33ed,	// (0x000893a1) highlight_cell_cale_month_pane

0xe67b,	// (0x0009462f) main_phob_fisheye_pane

0xbe44,	// (0x00091df8) scroll_pane_cp0031_ParamLimits

0xbe44,	// (0x00091df8) scroll_pane_cp0031

0xd21f,	// (0x000931d3) wait_bar_pane_cp08_ParamLimits

0x992e,	// (0x0008f8e2) cset_list_set_pane_copy1_ParamLimits

0xd929,	// (0x000938dd) highlight_cell_cale_month_pane_g1

0xa136,	// (0x000900ea) highlight_cell_cale_month_pane_t1

0xce7f,	// (0x00092e33) list_gen_pane_cp01

0xca1f,	// (0x000929d3) scroll_pane_01

0xf0a8,	// (0x0009505c) list_single_double_fisheye_pane

0x082e,	// (0x000867e2) list_double_fisheye_pane_g1_ParamLimits

0x082e,	// (0x000867e2) list_double_fisheye_pane_g1

0x083a,	// (0x000867ee) list_double_fisheye_pane_g2_ParamLimits

0x083a,	// (0x000867ee) list_double_fisheye_pane_g2

0xa144,	// (0x000900f8) list_double_fisheye_pane_g3_ParamLimits

0xa144,	// (0x000900f8) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00095c5d) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00095c5d) list_double_fisheye_pane_g

0x086b,	// (0x0008681f) list_double_fisheye_pane_t1_ParamLimits

0x086b,	// (0x0008681f) list_double_fisheye_pane_t1

0x0886,	// (0x0008683a) list_double_fisheye_pane_t2_ParamLimits

0x0886,	// (0x0008683a) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00095c68) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00095c68) list_double_fisheye_pane_t

0xe67b,	// (0x0009462f) main_call5_pane

0x9f39,	// (0x0008feed) sc_swipe_pane_ParamLimits

0x9f39,	// (0x0008feed) sc_swipe_pane

0xa163,	// (0x00090117) call5_image_pane_ParamLimits

0xa163,	// (0x00090117) call5_image_pane

0xa180,	// (0x00090134) call5_swipe_1_pane_ParamLimits

0xa180,	// (0x00090134) call5_swipe_1_pane

0xa193,	// (0x00090147) call5_swipe_2_pane_ParamLimits

0xa193,	// (0x00090147) call5_swipe_2_pane

0xa1be,	// (0x00090172) popup_call5_audio_first_window_ParamLimits

0xa1be,	// (0x00090172) popup_call5_audio_first_window

0xbd10,	// (0x00091cc4) call5_swipe_1_pane_g1_ParamLimits

0xbd10,	// (0x00091cc4) call5_swipe_1_pane_g1

0xd931,	// (0x000938e5) call5_swipe_1_pane_g2_ParamLimits

0xd931,	// (0x000938e5) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00095c6d) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00095c6d) call5_swipe_1_pane_g

0xd93d,	// (0x000938f1) call5_swipe_1_pane_t1_ParamLimits

0xd93d,	// (0x000938f1) call5_swipe_1_pane_t1

0xbd10,	// (0x00091cc4) call5_swipe_2_pane_g1_ParamLimits

0xbd10,	// (0x00091cc4) call5_swipe_2_pane_g1

0xd952,	// (0x00093906) call5_swipe_2_pane_g2_ParamLimits

0xd952,	// (0x00093906) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00095c72) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00095c72) call5_swipe_2_pane_g

0xd95e,	// (0x00093912) call5_swipe_2_pane_t1_ParamLimits

0xd95e,	// (0x00093912) call5_swipe_2_pane_t1

0xd973,	// (0x00093927) sc_swipe_pane_g1_ParamLimits

0xd973,	// (0x00093927) sc_swipe_pane_g1

0xd980,	// (0x00093934) sc_swipe_pane_g2_ParamLimits

0xd980,	// (0x00093934) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00095c77) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00095c77) sc_swipe_pane_g

0xd98c,	// (0x00093940) sc_swipe_pane_t1_ParamLimits

0xd98c,	// (0x00093940) sc_swipe_pane_t1

0xe67b,	// (0x0009462f) main_cmail_launcher_pane

0xa1cf,	// (0x00090183) aid_size_cell_cmail_l_ParamLimits

0xa1cf,	// (0x00090183) aid_size_cell_cmail_l

0xa1e9,	// (0x0009019d) grid_cmail_l_pane_ParamLimits

0xa1e9,	// (0x0009019d) grid_cmail_l_pane

0xa204,	// (0x000901b8) cell_cmail_l_pane_ParamLimits

0xa204,	// (0x000901b8) cell_cmail_l_pane

0xa22a,	// (0x000901de) cell_cmail_l_pane_g1_ParamLimits

0xa22a,	// (0x000901de) cell_cmail_l_pane_g1

0xa236,	// (0x000901ea) cell_cmail_l_pane_t1_ParamLimits

0xa236,	// (0x000901ea) cell_cmail_l_pane_t1

0xd9a1,	// (0x00093955) cell_cmail_l_pane_t2_ParamLimits

0xd9a1,	// (0x00093955) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00095c7c) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00095c7c) cell_cmail_l_pane_t

0xe685,	// (0x00094639) grid_highlight_pane_cp018_ParamLimits

0xe685,	// (0x00094639) grid_highlight_pane_cp018

0x1147,	// (0x000870fb) main2_pane_ParamLimits

0x1147,	// (0x000870fb) main2_pane

0xee5f,	// (0x00094e13) popup_sp_fs_action_menu_bg_pane_g1

0xee67,	// (0x00094e1b) popup_sp_fs_action_menu_bg_pane_g2

0xee6f,	// (0x00094e23) popup_sp_fs_action_menu_bg_pane_g3

0xee77,	// (0x00094e2b) popup_sp_fs_action_menu_bg_pane_g4

0xee7f,	// (0x00094e33) popup_sp_fs_action_menu_bg_pane_g5

0xee87,	// (0x00094e3b) popup_sp_fs_action_menu_bg_pane_g6

0xee8f,	// (0x00094e43) popup_sp_fs_action_menu_bg_pane_g7

0xee97,	// (0x00094e4b) popup_sp_fs_action_menu_bg_pane_g8

0xee9f,	// (0x00094e53) popup_sp_fs_action_menu_bg_pane_g9

0xeea7,	// (0x00094e5b) popup_sp_fs_action_menu_bg_pane_g10

0xeea7,	// (0x00094e5b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0009513a) popup_sp_fs_action_menu_bg_pane_g

0x01a7,	// (0x0008615b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_t3_g3_g1

0x2175,	// (0x00088129) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2175,	// (0x00088129) list_medium_line_x2_t3_g3_g2

0x01b3,	// (0x00086167) list_medium_line_x2_t3_g3_g3_ParamLimits

0x01b3,	// (0x00086167) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000951ec) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000951ec) list_medium_line_x2_t3_g3_g

0x01bf,	// (0x00086173) list_medium_line_x2_t3_g3_t1_ParamLimits

0x01bf,	// (0x00086173) list_medium_line_x2_t3_g3_t1

0x01d4,	// (0x00086188) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01d4,	// (0x00086188) list_medium_line_x2_t3_g3_t2

0x01e8,	// (0x0008619c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01e8,	// (0x0008619c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000951f3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000951f3) list_medium_line_x2_t3_g3_t

0x01a7,	// (0x0008615b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_t3_g2_g1

0x01b3,	// (0x00086167) list_medium_line_x2_t3_g2_g2_ParamLimits

0x01b3,	// (0x00086167) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000951fa) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000951fa) list_medium_line_x2_t3_g2_g

0x01fd,	// (0x000861b1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x01fd,	// (0x000861b1) list_medium_line_x2_t3_g2_t1

0x0213,	// (0x000861c7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0213,	// (0x000861c7) list_medium_line_x2_t3_g2_t2

0x0225,	// (0x000861d9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0225,	// (0x000861d9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000951ff) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000951ff) list_medium_line_x2_t3_g2_t

0x01a7,	// (0x0008615b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_t4_g4_g1

0x2181,	// (0x00088135) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2181,	// (0x00088135) list_medium_line_x2_t4_g4_g2

0x2175,	// (0x00088129) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2175,	// (0x00088129) list_medium_line_x2_t4_g4_g3

0x0242,	// (0x000861f6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0242,	// (0x000861f6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00095206) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00095206) list_medium_line_x2_t4_g4_g

0x024e,	// (0x00086202) list_medium_line_x2_t4_g4_t1_ParamLimits

0x024e,	// (0x00086202) list_medium_line_x2_t4_g4_t1

0x0268,	// (0x0008621c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0268,	// (0x0008621c) list_medium_line_x2_t4_g4_t2

0x027e,	// (0x00086232) list_medium_line_x2_t4_g4_t3_ParamLimits

0x027e,	// (0x00086232) list_medium_line_x2_t4_g4_t3

0x0293,	// (0x00086247) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0293,	// (0x00086247) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009520f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009520f) list_medium_line_x2_t4_g4_t

0x01a7,	// (0x0008615b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_t2_g4_g1

0x2181,	// (0x00088135) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2181,	// (0x00088135) list_medium_line_x2_t2_g4_g2

0x2175,	// (0x00088129) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2175,	// (0x00088129) list_medium_line_x2_t2_g4_g3

0x01b3,	// (0x00086167) list_medium_line_x2_t2_g4_g4_ParamLimits

0x01b3,	// (0x00086167) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00095276) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00095276) list_medium_line_x2_t2_g4_g

0x02a5,	// (0x00086259) list_medium_line_x2_t2_g4_t1_ParamLimits

0x02a5,	// (0x00086259) list_medium_line_x2_t2_g4_t1

0x01e8,	// (0x0008619c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01e8,	// (0x0008619c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009527f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009527f) list_medium_line_x2_t2_g4_t

0x01a7,	// (0x0008615b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_t2_g3_g1

0x2175,	// (0x00088129) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2175,	// (0x00088129) list_medium_line_x2_t2_g3_g2

0x01b3,	// (0x00086167) list_medium_line_x2_t2_g3_g3_ParamLimits

0x01b3,	// (0x00086167) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000951ec) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000951ec) list_medium_line_x2_t2_g3_g

0x02ba,	// (0x0008626e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x02ba,	// (0x0008626e) list_medium_line_x2_t2_g3_t1

0x01e8,	// (0x0008619c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01e8,	// (0x0008619c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00095284) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00095284) list_medium_line_x2_t2_g3_t

0x3772,	// (0x00089726) main_sp_fs_list_pane_ParamLimits

0x3772,	// (0x00089726) main_sp_fs_list_pane

0xb3c1,	// (0x00091375) sp_fs_scroll_pane_ParamLimits

0xb3c1,	// (0x00091375) sp_fs_scroll_pane

0x02cf,	// (0x00086283) list_medium_line_x2_t3_t1

0x02df,	// (0x00086293) list_medium_line_x2_t3_t2

0x02ed,	// (0x000862a1) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000952cf) list_medium_line_x2_t3_t

0x02fb,	// (0x000862af) list_medium_line_x3_t4_t1

0x030b,	// (0x000862bf) list_medium_line_x3_t4_t2

0x0319,	// (0x000862cd) list_medium_line_x3_t4_t3

0x02ed,	// (0x000862a1) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000952d6) list_medium_line_x3_t4_t

0x0327,	// (0x000862db) list_medium_line_x4_t5_t1

0x0337,	// (0x000862eb) list_medium_line_x4_t5_t2

0x0319,	// (0x000862cd) list_medium_line_x4_t5_t3

0x0345,	// (0x000862f9) list_medium_line_x4_t5_t4

0x02ed,	// (0x000862a1) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000952df) list_medium_line_x4_t5_t

0x01a7,	// (0x0008615b) list_medium_line_t4_g4_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_t4_g4_g1

0x0353,	// (0x00086307) list_medium_line_t4_g4_g2_ParamLimits

0x0353,	// (0x00086307) list_medium_line_t4_g4_g2

0x035f,	// (0x00086313) list_medium_line_t4_g4_g3_ParamLimits

0x035f,	// (0x00086313) list_medium_line_t4_g4_g3

0x01b3,	// (0x00086167) list_medium_line_t4_g4_g4_ParamLimits

0x01b3,	// (0x00086167) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000952ea) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000952ea) list_medium_line_t4_g4_g

0x036b,	// (0x0008631f) list_medium_line_t4_g4_t1_ParamLimits

0x036b,	// (0x0008631f) list_medium_line_t4_g4_t1

0x0380,	// (0x00086334) list_medium_line_t4_g4_t2_ParamLimits

0x0380,	// (0x00086334) list_medium_line_t4_g4_t2

0x0395,	// (0x00086349) list_medium_line_t4_g4_t3_ParamLimits

0x0395,	// (0x00086349) list_medium_line_t4_g4_t3

0x01e8,	// (0x0008619c) list_medium_line_t4_g4_t4_ParamLimits

0x01e8,	// (0x0008619c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000952f3) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000952f3) list_medium_line_t4_g4_t

0x3ab3,	// (0x00089a67) chi_dic_find_pane_g1

0x5ff3,	// (0x0008bfa7) main_tport_pane

0x057a,	// (0x0008652e) list_medium_line_plain_t1

0x0588,	// (0x0008653c) list_medium_line_t2_g2_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_t2_g2_g1

0x0594,	// (0x00086548) list_medium_line_t2_g2_g2_ParamLimits

0x0594,	// (0x00086548) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000959b4) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000959b4) list_medium_line_t2_g2_g

0x05a0,	// (0x00086554) list_medium_line_t2_g2_t1_ParamLimits

0x05a0,	// (0x00086554) list_medium_line_t2_g2_t1

0x05b7,	// (0x0008656b) list_medium_line_t2_g2_t2_ParamLimits

0x05b7,	// (0x0008656b) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000959b9) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000959b9) list_medium_line_t2_g2_t

0xce88,	// (0x00092e3c) aid_sp_fs_list_icon_a_sm

0xf084,	// (0x00095038) aid_sp_fs_list_icon_d

0xce90,	// (0x00092e44) aid_sp_fs_text_primary

0xce99,	// (0x00092e4d) aid_sp_fs_text_secondary

0x93c4,	// (0x0008f378) list_medium_line

0x93c4,	// (0x0008f378) list_medium_line_g2

0x93c4,	// (0x0008f378) list_medium_line_g3

0x93c4,	// (0x0008f378) list_medium_line_plain

0x93c4,	// (0x0008f378) list_medium_line_plain_t2

0x93c4,	// (0x0008f378) list_medium_line_plain_t3

0x93c4,	// (0x0008f378) list_medium_line_right_icon

0x93c4,	// (0x0008f378) list_medium_line_right_iconx2

0x93c4,	// (0x0008f378) list_medium_line_t2

0x93c4,	// (0x0008f378) list_medium_line_t2_g2

0x93c4,	// (0x0008f378) list_medium_line_t2_g3

0x93c4,	// (0x0008f378) list_medium_line_t2_right_icon

0x93c4,	// (0x0008f378) list_medium_line_t2_right_iconx2

0x93c4,	// (0x0008f378) list_medium_line_t3

0x93c4,	// (0x0008f378) list_medium_line_t3_g2

0x93c4,	// (0x0008f378) list_medium_line_t3_g3

0x93c4,	// (0x0008f378) list_medium_line_t3_right_iconx2

0x93cd,	// (0x0008f381) list_medium_line_t4_g4

0x93c4,	// (0x0008f378) list_medium_line_x2

0x93c4,	// (0x0008f378) list_medium_line_x2_t2_g2

0x93c4,	// (0x0008f378) list_medium_line_x2_t2_g3

0x93c4,	// (0x0008f378) list_medium_line_x2_t2_g4

0x93c4,	// (0x0008f378) list_medium_line_x2_t3

0x93c4,	// (0x0008f378) list_medium_line_x2_t3_g2

0x93c4,	// (0x0008f378) list_medium_line_x2_t3_g3

0x93c4,	// (0x0008f378) list_medium_line_x2_t3_g4

0x93c4,	// (0x0008f378) list_medium_line_x2_t4_g2

0x93c4,	// (0x0008f378) list_medium_line_x2_t4_g4

0x93d6,	// (0x0008f38a) list_medium_line_x3

0x93d6,	// (0x0008f38a) list_medium_line_x3_t4

0x93d6,	// (0x0008f38a) list_medium_line_x3_t4_g4

0x93cd,	// (0x0008f381) list_medium_line_x4_t4

0x93cd,	// (0x0008f381) list_medium_line_x4_t4_g7

0x93cd,	// (0x0008f381) list_medium_line_x4_t5

0x0740,	// (0x000866f4) list_single_fs_dyc_pane_ParamLimits

0x0740,	// (0x000866f4) list_single_fs_dyc_pane

0x01a7,	// (0x0008615b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x4_t4_g7_g1

0x0778,	// (0x0008672c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0778,	// (0x0008672c) list_medium_line_x4_t4_g7_g2

0x9b03,	// (0x0008fab7) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9b03,	// (0x0008fab7) list_medium_line_x4_t4_g7_g3

0x9b12,	// (0x0008fac6) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9b12,	// (0x0008fac6) list_medium_line_x4_t4_g7_g4

0x0784,	// (0x00086738) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0784,	// (0x00086738) list_medium_line_x4_t4_g7_g5

0x0793,	// (0x00086747) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0793,	// (0x00086747) list_medium_line_x4_t4_g7_g6

0x07a2,	// (0x00086756) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07a2,	// (0x00086756) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00095b84) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00095b84) list_medium_line_x4_t4_g7_g

0x07ae,	// (0x00086762) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07ae,	// (0x00086762) list_medium_line_x4_t4_g7_t1

0x07c3,	// (0x00086777) list_medium_line_x4_t4_g7_t2_ParamLimits

0x07c3,	// (0x00086777) list_medium_line_x4_t4_g7_t2

0x07d8,	// (0x0008678c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x07d8,	// (0x0008678c) list_medium_line_x4_t4_g7_t3

0x07ed,	// (0x000867a1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x07ed,	// (0x000867a1) list_medium_line_x4_t4_g7_t4

0x07ff,	// (0x000867b3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x07ff,	// (0x000867b3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00095b93) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00095b93) list_medium_line_x4_t4_g7_t

0x0811,	// (0x000867c5) list_single_dyc_row_pane_ParamLimits

0x0811,	// (0x000867c5) list_single_dyc_row_pane

0xa150,	// (0x00090104) call5_gesture_pane_ParamLimits

0xa150,	// (0x00090104) call5_gesture_pane

0xa1a6,	// (0x0009015a) call5_windows_pane_ParamLimits

0xa1a6,	// (0x0009015a) call5_windows_pane

0xa24c,	// (0x00090200) call5_swipe_1_pane_cp_ParamLimits

0xa24c,	// (0x00090200) call5_swipe_1_pane_cp

0xa258,	// (0x0009020c) call5_swipe_2_pane_cp_ParamLimits

0xa258,	// (0x0009020c) call5_swipe_2_pane_cp

0x3f35,	// (0x00089ee9) call5_image_pane_cp

0xa264,	// (0x00090218) popup_call5_audio_first_window_cp_ParamLimits

0xa264,	// (0x00090218) popup_call5_audio_first_window_cp

0xd973,	// (0x00093927) call5_swipe_1_pane_g1_cp_ParamLimits

0xd973,	// (0x00093927) call5_swipe_1_pane_g1_cp

0xd9b3,	// (0x00093967) call5_swipe_1_pane_g2_cp

0xd98c,	// (0x00093940) call5_swipe_1_pane_t1_cp_ParamLimits

0xd98c,	// (0x00093940) call5_swipe_1_pane_t1_cp

0xd973,	// (0x00093927) call5_swipe_2_pane_g1_cp_ParamLimits

0xd973,	// (0x00093927) call5_swipe_2_pane_g1_cp

0xd9bb,	// (0x0009396f) call5_swipe_2_pane_g2_cp

0xd9c3,	// (0x00093977) call5_swipe_2_pane_t1_cp_ParamLimits

0xd9c3,	// (0x00093977) call5_swipe_2_pane_t1_cp

0xe685,	// (0x00094639) main_sp_fs_email_pane

0xd9d8,	// (0x0009398c) main_sp_fs_listscroll_pane_te

0xa272,	// (0x00090226) popup_sp_fs_action_menu_pane_ParamLimits

0xa272,	// (0x00090226) popup_sp_fs_action_menu_pane

0xbaa4,	// (0x00091a58) bg_sp_fs_ctrlbar_pane_g1

0xc0db,	// (0x0009208f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc0ed,	// (0x000920a1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc0e4,	// (0x00092098) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbaa4,	// (0x00091a58) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00095c81) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb889,	// (0x0009183d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb889,	// (0x0009183d) bg_sp_fs_ctrlbar_ddmenu_pane

0xd9e1,	// (0x00093995) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd9e1,	// (0x00093995) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd9ed,	// (0x000939a1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd9ed,	// (0x000939a1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00095c8a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00095c8a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd9f9,	// (0x000939ad) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd9f9,	// (0x000939ad) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x08a8,	// (0x0008685c) list_medium_line_t2_right_icon_g1

0x08b0,	// (0x00086864) list_medium_line_t2_right_icon_t1

0x08c0,	// (0x00086874) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00095c8f) list_medium_line_t2_right_icon_t

0xb589,	// (0x0009153d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb589,	// (0x0009153d) bg_sp_fs_ctrlbar_pane

0xa2fe,	// (0x000902b2) main_sp_fs_ctrlbar_button_pane_cp01

0xa308,	// (0x000902bc) main_sp_fs_ctrlbar_ddmenu_pane

0xda4b,	// (0x000939ff) main_sp_fs_ctrlbar_pane_g1

0xda57,	// (0x00093a0b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00095c94) main_sp_fs_ctrlbar_pane_g

0xda63,	// (0x00093a17) main_sp_fs_ctrlbar_pane_t1

0xa312,	// (0x000902c6) main_sp_fs_ctrlbar_pane

0xa336,	// (0x000902ea) main_sp_fs_listscroll_pane_te_cp01

0x08d2,	// (0x00086886) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x08d2,	// (0x00086886) popup_sp_fs_action_menu_pane_cp01

0xe685,	// (0x00094639) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe685,	// (0x00094639) bg_sp_fs_highlight_list_pane_cp01

0xda93,	// (0x00093a47) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xda93,	// (0x00093a47) sp_fs_action_menu_list_gene_pane_g1

0xdaa2,	// (0x00093a56) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdaa2,	// (0x00093a56) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00095c9e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00095c9e) sp_fs_action_menu_list_gene_pane_g

0xdaaf,	// (0x00093a63) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdaaf,	// (0x00093a63) sp_fs_action_menu_list_gene_pane_t1

0xdac7,	// (0x00093a7b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdac7,	// (0x00093a7b) sp_fs_action_menu_list_gene_pane

0xdae8,	// (0x00093a9c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdae8,	// (0x00093a9c) popup_sp_fs_action_menu_bg_pane

0xdaf6,	// (0x00093aaa) sp_fs_action_menu_list_pane_ParamLimits

0xdaf6,	// (0x00093aaa) sp_fs_action_menu_list_pane

0xa356,	// (0x0009030a) sp_fs_scroll_pane_cp01_ParamLimits

0xa356,	// (0x0009030a) sp_fs_scroll_pane_cp01

0x0902,	// (0x000868b6) list_medium_line_plain_t2_t1

0x0912,	// (0x000868c6) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00095ca3) list_medium_line_plain_t2_t

0x0922,	// (0x000868d6) list_medium_line_plain_t3_t1

0x0932,	// (0x000868e6) list_medium_line_plain_t3_t2

0x0940,	// (0x000868f4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00095ca8) list_medium_line_plain_t3_t

0x01a7,	// (0x0008615b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_t2_g2_g1

0x01b3,	// (0x00086167) list_medium_line_x2_t2_g2_g2_ParamLimits

0x01b3,	// (0x00086167) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000951fa) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000951fa) list_medium_line_x2_t2_g2_g

0x036b,	// (0x0008631f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x036b,	// (0x0008631f) list_medium_line_x2_t2_g2_t1

0x01e8,	// (0x0008619c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01e8,	// (0x0008619c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00095caf) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00095caf) list_medium_line_x2_t2_g2_t

0x01a7,	// (0x0008615b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_t4_g2_g1

0x094e,	// (0x00086902) list_medium_line_x2_t4_g2_g2_ParamLimits

0x094e,	// (0x00086902) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00095cb4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00095cb4) list_medium_line_x2_t4_g2_g

0x0960,	// (0x00086914) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0960,	// (0x00086914) list_medium_line_x2_t4_g2_t1

0x097a,	// (0x0008692e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x097a,	// (0x0008692e) list_medium_line_x2_t4_g2_t2

0x098f,	// (0x00086943) list_medium_line_x2_t4_g2_t3_ParamLimits

0x098f,	// (0x00086943) list_medium_line_x2_t4_g2_t3

0x01e8,	// (0x0008619c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01e8,	// (0x0008619c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00095cb9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00095cb9) list_medium_line_x2_t4_g2_t

0x09a4,	// (0x00086958) list_medium_line_t3_right_iconx2_g1

0x08a8,	// (0x0008685c) list_medium_line_t3_right_iconx2_g2

0x09ac,	// (0x00086960) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00095cc2) list_medium_line_t3_right_iconx2_g

0x09b6,	// (0x0008696a) list_medium_line_t3_right_iconx2_t1

0x09c6,	// (0x0008697a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00095cc9) list_medium_line_t3_right_iconx2_t

0x01a7,	// (0x0008615b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x3_t4_g4_g1

0x2175,	// (0x00088129) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2175,	// (0x00088129) list_medium_line_x3_t4_g4_g2

0x0353,	// (0x00086307) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0353,	// (0x00086307) list_medium_line_x3_t4_g4_g3

0xa37c,	// (0x00090330) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa37c,	// (0x00090330) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00095cce) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00095cce) list_medium_line_x3_t4_g4_g

0x09d4,	// (0x00086988) list_medium_line_x3_t4_g4_t1_ParamLimits

0x09d4,	// (0x00086988) list_medium_line_x3_t4_g4_t1

0x09eb,	// (0x0008699f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x09eb,	// (0x0008699f) list_medium_line_x3_t4_g4_t2

0x0380,	// (0x00086334) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0380,	// (0x00086334) list_medium_line_x3_t4_g4_t3

0x0a06,	// (0x000869ba) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a06,	// (0x000869ba) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00095cd7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00095cd7) list_medium_line_x3_t4_g4_t

0x0a23,	// (0x000869d7) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a23,	// (0x000869d7) list_single_dyc_row_text_pane_t1

0x0a6c,	// (0x00086a20) list_single_dyc_row_text_pane_t2_ParamLimits

0x0a6c,	// (0x00086a20) list_single_dyc_row_text_pane_t2

0xdb18,	// (0x00093acc) list_single_dyc_row_text_pane_t3_ParamLimits

0xdb18,	// (0x00093acc) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00095ce0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00095ce0) list_single_dyc_row_text_pane_t

0xdb3c,	// (0x00093af0) list_single_dyc_row_pane_g1_ParamLimits

0xdb3c,	// (0x00093af0) list_single_dyc_row_pane_g1

0xdb48,	// (0x00093afc) list_single_dyc_row_pane_g2_ParamLimits

0xdb48,	// (0x00093afc) list_single_dyc_row_pane_g2

0xdb54,	// (0x00093b08) list_single_dyc_row_pane_g3_ParamLimits

0xdb54,	// (0x00093b08) list_single_dyc_row_pane_g3

0xdb60,	// (0x00093b14) list_single_dyc_row_pane_g4_ParamLimits

0xdb60,	// (0x00093b14) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00095ced) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00095ced) list_single_dyc_row_pane_g

0xdb6c,	// (0x00093b20) list_single_dyc_row_text_pane_ParamLimits

0xdb6c,	// (0x00093b20) list_single_dyc_row_text_pane

0xe67b,	// (0x0009462f) bg_sp_fs_scroll_pane

0xdb8b,	// (0x00093b3f) thumb_sp_fs_scroll_pane

0x0588,	// (0x0008653c) list_medium_line_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_g1

0x0ba1,	// (0x00086b55) list_medium_line_t1_ParamLimits

0x0ba1,	// (0x00086b55) list_medium_line_t1

0x01a7,	// (0x0008615b) list_medium_line_x2_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_g1

0x2175,	// (0x00088129) list_medium_line_x2_g2_ParamLimits

0x2175,	// (0x00088129) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00095cf6) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00095cf6) list_medium_line_x2_g

0xdb94,	// (0x00093b48) list_medium_line_x2_t1_ParamLimits

0xdb94,	// (0x00093b48) list_medium_line_x2_t1

0x01a7,	// (0x0008615b) list_medium_line_x3_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x3_g1

0x2175,	// (0x00088129) list_medium_line_x3_g2_ParamLimits

0x2175,	// (0x00088129) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00095cf6) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00095cf6) list_medium_line_x3_g

0xdb94,	// (0x00093b48) list_medium_line_x3_t1_ParamLimits

0xdb94,	// (0x00093b48) list_medium_line_x3_t1

0xdbaa,	// (0x00093b5e) thumb_sp_fs_scroll_pane_g1

0xdbb3,	// (0x00093b67) thumb_sp_fs_scroll_pane_g2

0xdbbc,	// (0x00093b70) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095cfb) thumb_sp_fs_scroll_pane_g

0xdbaa,	// (0x00093b5e) bg_sp_fs_scroll_pane_g1

0xdbb3,	// (0x00093b67) bg_sp_fs_scroll_pane_g2

0xdbbc,	// (0x00093b70) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095cfb) bg_sp_fs_scroll_pane_g

0x01a7,	// (0x0008615b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x01a7,	// (0x0008615b) list_medium_line_x2_t3_g4_g1

0x2181,	// (0x00088135) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2181,	// (0x00088135) list_medium_line_x2_t3_g4_g2

0x2175,	// (0x00088129) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2175,	// (0x00088129) list_medium_line_x2_t3_g4_g3

0x01b3,	// (0x00086167) list_medium_line_x2_t3_g4_g4_ParamLimits

0x01b3,	// (0x00086167) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00095276) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00095276) list_medium_line_x2_t3_g4_g

0x0bb6,	// (0x00086b6a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0bb6,	// (0x00086b6a) list_medium_line_x2_t3_g4_t1

0x0bd0,	// (0x00086b84) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0bd0,	// (0x00086b84) list_medium_line_x2_t3_g4_t2

0x01e8,	// (0x0008619c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01e8,	// (0x0008619c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00095d02) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00095d02) list_medium_line_x2_t3_g4_t

0x0588,	// (0x0008653c) list_medium_line_g2_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_g2_g1

0x0594,	// (0x00086548) list_medium_line_g2_g2_ParamLimits

0x0594,	// (0x00086548) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000959b4) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000959b4) list_medium_line_g2_g

0x0bea,	// (0x00086b9e) list_medium_line_g2_t1_ParamLimits

0x0bea,	// (0x00086b9e) list_medium_line_g2_t1

0x0588,	// (0x0008653c) list_medium_line_t3_g2_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_t3_g2_g1

0x0594,	// (0x00086548) list_medium_line_t3_g2_g2_ParamLimits

0x0594,	// (0x00086548) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000959b4) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000959b4) list_medium_line_t3_g2_g

0x0bff,	// (0x00086bb3) list_medium_line_t3_g2_t1_ParamLimits

0x0bff,	// (0x00086bb3) list_medium_line_t3_g2_t1

0x0c16,	// (0x00086bca) list_medium_line_t3_g2_t2_ParamLimits

0x0c16,	// (0x00086bca) list_medium_line_t3_g2_t2

0x0c2b,	// (0x00086bdf) list_medium_line_t3_g2_t3_ParamLimits

0x0c2b,	// (0x00086bdf) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00095d09) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00095d09) list_medium_line_t3_g2_t

0x08a8,	// (0x0008685c) list_medium_line_right_icon_g1

0x0c44,	// (0x00086bf8) list_medium_line_right_icon_t1

0x0588,	// (0x0008653c) list_medium_line_t2_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_t2_g1

0x0c52,	// (0x00086c06) list_medium_line_t2_t1_ParamLimits

0x0c52,	// (0x00086c06) list_medium_line_t2_t1

0x0c6c,	// (0x00086c20) list_medium_line_t2_t2_ParamLimits

0x0c6c,	// (0x00086c20) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00095d10) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00095d10) list_medium_line_t2_t

0x0588,	// (0x0008653c) list_medium_line_t3_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_t3_g1

0x0c85,	// (0x00086c39) list_medium_line_t3_t1_ParamLimits

0x0c85,	// (0x00086c39) list_medium_line_t3_t1

0x0c9c,	// (0x00086c50) list_medium_line_t3_t2_ParamLimits

0x0c9c,	// (0x00086c50) list_medium_line_t3_t2

0x0cb1,	// (0x00086c65) list_medium_line_t3_t3_ParamLimits

0x0cb1,	// (0x00086c65) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00095d15) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00095d15) list_medium_line_t3_t

0x0588,	// (0x0008653c) list_medium_line_g3_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_g3_g1

0x0cc3,	// (0x00086c77) list_medium_line_g3_g2_ParamLimits

0x0cc3,	// (0x00086c77) list_medium_line_g3_g2

0x0594,	// (0x00086548) list_medium_line_g3_g3_ParamLimits

0x0594,	// (0x00086548) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00095d1c) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00095d1c) list_medium_line_g3_g

0x0ccf,	// (0x00086c83) list_medium_line_g3_t1_ParamLimits

0x0ccf,	// (0x00086c83) list_medium_line_g3_t1

0x0588,	// (0x0008653c) list_medium_line_t2_g3_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_t2_g3_g1

0x0cc3,	// (0x00086c77) list_medium_line_t2_g3_g2_ParamLimits

0x0cc3,	// (0x00086c77) list_medium_line_t2_g3_g2

0x0594,	// (0x00086548) list_medium_line_t2_g3_g3_ParamLimits

0x0594,	// (0x00086548) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00095d1c) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00095d1c) list_medium_line_t2_g3_g

0x0ce4,	// (0x00086c98) list_medium_line_t2_g3_t1_ParamLimits

0x0ce4,	// (0x00086c98) list_medium_line_t2_g3_t1

0x0cfb,	// (0x00086caf) list_medium_line_t2_g3_t2_ParamLimits

0x0cfb,	// (0x00086caf) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00095d23) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00095d23) list_medium_line_t2_g3_t

0x0588,	// (0x0008653c) list_medium_line_t3_g3_g1_ParamLimits

0x0588,	// (0x0008653c) list_medium_line_t3_g3_g1

0x0cc3,	// (0x00086c77) list_medium_line_t3_g3_g2_ParamLimits

0x0cc3,	// (0x00086c77) list_medium_line_t3_g3_g2

0x0594,	// (0x00086548) list_medium_line_t3_g3_g3_ParamLimits

0x0594,	// (0x00086548) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00095d1c) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00095d1c) list_medium_line_t3_g3_g

0x0d16,	// (0x00086cca) list_medium_line_t3_g3_t1_ParamLimits

0x0d16,	// (0x00086cca) list_medium_line_t3_g3_t1

0x0d2a,	// (0x00086cde) list_medium_line_t3_g3_t2_ParamLimits

0x0d2a,	// (0x00086cde) list_medium_line_t3_g3_t2

0x0d3c,	// (0x00086cf0) list_medium_line_t3_g3_t3_ParamLimits

0x0d3c,	// (0x00086cf0) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00095d28) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00095d28) list_medium_line_t3_g3_t

0x09a4,	// (0x00086958) list_medium_line_right_iconx2_g1

0x08a8,	// (0x0008685c) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095d2f) list_medium_line_right_iconx2_g

0x0d50,	// (0x00086d04) list_medium_line_right_iconx2_t1

0x09a4,	// (0x00086958) list_medium_line_t2_right_iconx2_g1

0x08a8,	// (0x0008685c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095d2f) list_medium_line_t2_right_iconx2_g

0x0d5e,	// (0x00086d12) list_medium_line_t2_right_iconx2_t1

0x0d6e,	// (0x00086d22) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00095d34) list_medium_line_t2_right_iconx2_t

0x0d80,	// (0x00086d34) list_medium_line_x4_t4_t1

0x0d8e,	// (0x00086d42) list_medium_line_x4_t4_t2

0x0d9e,	// (0x00086d52) list_medium_line_x4_t4_t3

0x0dae,	// (0x00086d62) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00095d39) list_medium_line_x4_t4_t

0xa3cb,	// (0x0009037f) tport_appsw_pane_ParamLimits

0xa3cb,	// (0x0009037f) tport_appsw_pane

0xa3e3,	// (0x00090397) tport_contact_pane_ParamLimits

0xa3e3,	// (0x00090397) tport_contact_pane

0xa3fb,	// (0x000903af) tport_listscroll_pane_ParamLimits

0xa3fb,	// (0x000903af) tport_listscroll_pane

0xa415,	// (0x000903c9) cell_tport_appsw_pane_ParamLimits

0xa415,	// (0x000903c9) cell_tport_appsw_pane

0xc8c8,	// (0x0009287c) tport_appsw_pane_g1_ParamLimits

0xc8c8,	// (0x0009287c) tport_appsw_pane_g1

0xdbc5,	// (0x00093b79) tport_contact_pane_g1

0xd482,	// (0x00093436) tport_contact_pane_t1

0xdbce,	// (0x00093b82) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00095d42) tport_contact_pane_t

0xdbdc,	// (0x00093b90) list_tport_pane

0xdbe5,	// (0x00093b99) scroll_pane_cp_030

0xa45d,	// (0x00090411) cell_tport_appsw_pane_g1

0xa46d,	// (0x00090421) cell_tport_appsw_pane_t1

0xa47b,	// (0x0009042f) grid_highlight_pane_cp019

0xa483,	// (0x00090437) list_tport_double_graphic_pane_ParamLimits

0xa483,	// (0x00090437) list_tport_double_graphic_pane

0xe685,	// (0x00094639) list_highlight_pane_cp023_ParamLimits

0xe685,	// (0x00094639) list_highlight_pane_cp023

0xa490,	// (0x00090444) list_tport_double_graphic_pane_g1_ParamLimits

0xa490,	// (0x00090444) list_tport_double_graphic_pane_g1

0xa49d,	// (0x00090451) list_tport_double_graphic_pane_t1_ParamLimits

0xa49d,	// (0x00090451) list_tport_double_graphic_pane_t1

0xa4b2,	// (0x00090466) list_tport_double_graphic_pane_t2_ParamLimits

0xa4b2,	// (0x00090466) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00095d4e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00095d4e) list_tport_double_graphic_pane_t

0xe67b,	// (0x0009462f) main_cale_note_pane

0x86c7,	// (0x0008e67b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x86c7,	// (0x0008e67b) cell_vitu2_function_top_wide_pane_cp01

0x9e56,	// (0x0008fe0a) wait_bar_pane_cp05_ParamLimits

0xe685,	// (0x00094639) listscroll_cmail_pane

0xdbee,	// (0x00093ba2) list_cmail_pane

0xc93d,	// (0x000928f1) list_cmail_body_pane

0xa4c4,	// (0x00090478) list_single_cmail_header_caption_pane

0xa4db,	// (0x0009048f) list_single_cmail_header_detail_pane_ParamLimits

0xa4db,	// (0x0009048f) list_single_cmail_header_detail_pane

0xdbfe,	// (0x00093bb2) list_single_cmail_header_caption_pane_t1

0x0dbe,	// (0x00086d72) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0dbe,	// (0x00086d72) list_single_cmail_header_detail_pane_g1

0xf0b1,	// (0x00095065) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0b1,	// (0x00095065) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00095d53) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00095d53) list_single_cmail_header_detail_pane_g

0x0dd6,	// (0x00086d8a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0dd6,	// (0x00086d8a) list_single_cmail_header_detail_pane_t1

0x0e14,	// (0x00086dc8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0e14,	// (0x00086dc8) list_single_cmail_header_editor_pane_bg

0xd623,	// (0x000935d7) list_cmail_body_pane_g1

0xdc46,	// (0x00093bfa) list_cmail_body_pane_t1

0xc905,	// (0x000928b9) list_single_cmail_header_editor_pane_bg_g1

0x27e1,	// (0x00088795) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc915,	// (0x000928c9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc90d,	// (0x000928c1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcb68,	// (0x00092b1c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc935,	// (0x000928e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc925,	// (0x000928d9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc92d,	// (0x000928e1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x27c1,	// (0x00088775) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa505,	// (0x000904b9) calenote_gesture_pane_ParamLimits

0xa505,	// (0x000904b9) calenote_gesture_pane

0xa525,	// (0x000904d9) calenote_window_pane_ParamLimits

0xa525,	// (0x000904d9) calenote_window_pane

0xdc54,	// (0x00093c08) popup_note_window_cp01

0xa541,	// (0x000904f5) calenote_swipe_1_pane_ParamLimits

0xa541,	// (0x000904f5) calenote_swipe_1_pane

0xa258,	// (0x0009020c) calenote_swipe_2_pane_ParamLimits

0xa258,	// (0x0009020c) calenote_swipe_2_pane

0xd973,	// (0x00093927) calenote_swipe_1_pane_g1_ParamLimits

0xd973,	// (0x00093927) calenote_swipe_1_pane_g1

0xd980,	// (0x00093934) calenote_swipe_1_pane_g2_ParamLimits

0xd980,	// (0x00093934) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00095c77) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00095c77) calenote_swipe_1_pane_g

0xdc66,	// (0x00093c1a) calenote_swipe_1_pane_t1_ParamLimits

0xdc66,	// (0x00093c1a) calenote_swipe_1_pane_t1

0xd973,	// (0x00093927) calenote_swipe_2_pane_g1_ParamLimits

0xd973,	// (0x00093927) calenote_swipe_2_pane_g1

0xdc85,	// (0x00093c39) calenote_swipe_2_pane_g2_ParamLimits

0xdc85,	// (0x00093c39) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00095d5f) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00095d5f) calenote_swipe_2_pane_g

0xdc91,	// (0x00093c45) calenote_swipe_2_pane_t1_ParamLimits

0xdc91,	// (0x00093c45) calenote_swipe_2_pane_t1

0xe67b,	// (0x0009462f) main_mup_navstr_pane

0x73a4,	// (0x0008d358) main_mup3_pane_t7_ParamLimits

0x73a4,	// (0x0008d358) main_mup3_pane_t7

0xc465,	// (0x00092419) main_mp4_pane_g6_ParamLimits

0xc465,	// (0x00092419) main_mp4_pane_g6

0xc68d,	// (0x00092641) main_image3_pane_t4_ParamLimits

0xc68d,	// (0x00092641) main_image3_pane_t4

0xa556,	// (0x0009050a) popup_navstr_preview_pane_ParamLimits

0xa556,	// (0x0009050a) popup_navstr_preview_pane

0xa56a,	// (0x0009051e) scroll_navstr_pane_ParamLimits

0xa56a,	// (0x0009051e) scroll_navstr_pane

0xe67b,	// (0x0009462f) bg_popup_preview_window_pane_cp04

0xdcb8,	// (0x00093c6c) popup_navstr_preview_pane_t1

0xa57e,	// (0x00090532) scroll_navstr_pane_g1_ParamLimits

0xa57e,	// (0x00090532) scroll_navstr_pane_g1

0xa592,	// (0x00090546) scroll_navstr_pane_t1_ParamLimits

0xa592,	// (0x00090546) scroll_navstr_pane_t1

0xdc5d,	// (0x00093c11) bg_button_pane_cp014

0xdc5d,	// (0x00093c11) bg_button_pane_cp030

0x084e,	// (0x00086802) list_double_fisheye_pane_g4_ParamLimits

0x084e,	// (0x00086802) list_double_fisheye_pane_g4

0x085a,	// (0x0008680e) list_double_fisheye_pane_g5_ParamLimits

0x085a,	// (0x0008680e) list_double_fisheye_pane_g5

0xb3c1,	// (0x00091375) sp_fs_scroll_pane_cp03

0xda4b,	// (0x000939ff) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xda57,	// (0x00093a0b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00095c94) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xda63,	// (0x00093a17) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdbf6,	// (0x00093baa) sp_fs_scroll_pane_cp02

0xeeca,	// (0x00094e7e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xeeca,	// (0x00094e7e) popup_sp_fs_calendar_preview_list_single_pane

0xe67b,	// (0x0009462f) main_cam6_pano_pane

0xe685,	// (0x00094639) main_mup3_pane_ParamLimits

0xe67b,	// (0x0009462f) main_phacti_pane

0x9d29,	// (0x0008fcdd) bg_button_pane_cp11

0x9d43,	// (0x0008fcf7) main_mobtv_info_pane_g2_ParamLimits

0x9d43,	// (0x0008fcf7) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00095bf4) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00095bf4) main_mobtv_info_pane_g

0x9f20,	// (0x0008fed4) sc_clock_pane_t5_ParamLimits

0x9f20,	// (0x0008fed4) sc_clock_pane_t5

0x9fdb,	// (0x0008ff8f) main_radioblah_pane_g1_ParamLimits

0xd8bf,	// (0x00093873) main_radioblah_pane_t3_ParamLimits

0xd8bf,	// (0x00093873) main_radioblah_pane_t3

0xd8d7,	// (0x0009388b) main_radioblah_pane_t4_ParamLimits

0xd8d7,	// (0x0009388b) main_radioblah_pane_t4

0xa003,	// (0x0008ffb7) main_radioblah_text_pane_ParamLimits

0xa003,	// (0x0008ffb7) main_radioblah_text_pane

0xa015,	// (0x0008ffc9) main_radioblah_info_pane_g1_ParamLimits

0xa0ae,	// (0x00090062) main_radioblah_info_pane_t4_ParamLimits

0xa0ae,	// (0x00090062) main_radioblah_info_pane_t4

0xe685,	// (0x00094639) main_sp_fs_calendar_pane

0xa5a9,	// (0x0009055d) main_phacti_pane_g1

0xa5b1,	// (0x00090565) phacti_note_pane_ParamLimits

0xa5b1,	// (0x00090565) phacti_note_pane

0xdccf,	// (0x00093c83) phacti_term_pane_ParamLimits

0xdccf,	// (0x00093c83) phacti_term_pane

0xdce4,	// (0x00093c98) phacti_note_pane_t1_ParamLimits

0xdce4,	// (0x00093c98) phacti_note_pane_t1

0xdcfb,	// (0x00093caf) phacti_term_pane_g1

0xdd03,	// (0x00093cb7) phacti_term_pane_t1_ParamLimits

0xdd03,	// (0x00093cb7) phacti_term_pane_t1

0xdd2d,	// (0x00093ce1) popup_sp_fs_calendar_preview_list_single_pane_g1

0x216d,	// (0x00088121) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00095d69) popup_sp_fs_calendar_preview_list_single_pane_g

0xdd35,	// (0x00093ce9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdd35,	// (0x00093ce9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdd4a,	// (0x00093cfe) aid_popup_sp_fs_bg_corner_pane

0xbaa4,	// (0x00091a58) popup_sp_fs_calendar_preview_bg_pane_g1

0xe67b,	// (0x0009462f) popup_sp_fs_calendar_preview_bg_pane

0xdd52,	// (0x00093d06) popup_sp_fs_calendar_preview_list_pane

0xb589,	// (0x0009153d) bg_main_sp_fs_cale_pane_ParamLimits

0xb589,	// (0x0009153d) bg_main_sp_fs_cale_pane

0xdd5a,	// (0x00093d0e) listscroll_cale_mrui_pane_ParamLimits

0xdd5a,	// (0x00093d0e) listscroll_cale_mrui_pane

0xc989,	// (0x0009293d) listscroll_sp_fs_schedule_track_pane

0xdd6f,	// (0x00093d23) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdd6f,	// (0x00093d23) main_sp_fs_ctrlbar_pane_cp01

0xdd82,	// (0x00093d36) main_sp_fs_ribbon_pane

0xdd8a,	// (0x00093d3e) popup_sp_fs_cale_preview_window

0xa626,	// (0x000905da) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa626,	// (0x000905da) list_single_sp_fs_schedule_track_pane

0xe685,	// (0x00094639) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe685,	// (0x00094639) bg_sp_fs_highlight_list_pane_cp03

0xa63a,	// (0x000905ee) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa63a,	// (0x000905ee) list_single_sp_fs_schedule_track_pane_g1

0xa646,	// (0x000905fa) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa646,	// (0x000905fa) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00095d6e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00095d6e) list_single_sp_fs_schedule_track_pane_g

0xa652,	// (0x00090606) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa652,	// (0x00090606) list_single_sp_fs_schedule_track_pane_t1

0xa66c,	// (0x00090620) sp_fs_schedule_track_pane_ParamLimits

0xa66c,	// (0x00090620) sp_fs_schedule_track_pane

0xdd9c,	// (0x00093d50) sp_fs_schedule_track_pane_g1

0xdda4,	// (0x00093d58) sp_fs_schedule_track_pane_g2

0xddac,	// (0x00093d60) sp_fs_schedule_track_pane_g3

0xddb4,	// (0x00093d68) sp_fs_schedule_track_pane_g4

0xddbc,	// (0x00093d70) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00095d73) sp_fs_schedule_track_pane_g

0xc905,	// (0x000928b9) bg_sp_fs_schedule_viewer_highlight_g1

0x27e1,	// (0x00088795) bg_sp_fs_schedule_viewer_highlight_g2

0xc90d,	// (0x000928c1) bg_sp_fs_schedule_viewer_highlight_g3

0xc915,	// (0x000928c9) bg_sp_fs_schedule_viewer_highlight_g4

0xcb68,	// (0x00092b1c) bg_sp_fs_schedule_viewer_highlight_g5

0xc925,	// (0x000928d9) bg_sp_fs_schedule_viewer_highlight_g6

0xc92d,	// (0x000928e1) bg_sp_fs_schedule_viewer_highlight_g7

0xc935,	// (0x000928e9) bg_sp_fs_schedule_viewer_highlight_g8

0x27c1,	// (0x00088775) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00095d7e) bg_sp_fs_schedule_viewer_highlight_g

0xe67b,	// (0x0009462f) bg_main_sp_fs_ribbon_pane

0xa67d,	// (0x00090631) main_sp_fs_ribbon_pane_g1

0xddc4,	// (0x00093d78) main_sp_fs_ribbon_pane_t1

0xa686,	// (0x0009063a) main_sp_fs_ribbon_pane_t2

0xddd3,	// (0x00093d87) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00095d91) main_sp_fs_ribbon_pane_t

0xdde2,	// (0x00093d96) main_sp_fs_ribbon_scheduler_pane

0xddea,	// (0x00093d9e) bg_main_sp_fs_ribbon_pane_g1

0xddf3,	// (0x00093da7) bg_main_sp_fs_ribbon_pane_g2

0xddfc,	// (0x00093db0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00095d98) bg_main_sp_fs_ribbon_pane_g

0xde04,	// (0x00093db8) main_sp_fs_ribbon_scheduler_pane_g1

0xde0d,	// (0x00093dc1) main_sp_fs_ribbon_scheduler_pane_g2

0xde16,	// (0x00093dca) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00095d9f) main_sp_fs_ribbon_scheduler_pane_g

0xde1f,	// (0x00093dd3) list_cale_mrui_pane

0xa695,	// (0x00090649) sp_fs_scroll_pane_cp07_ParamLimits

0xa695,	// (0x00090649) sp_fs_scroll_pane_cp07

0xa6b1,	// (0x00090665) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa6b1,	// (0x00090665) bg_sp_fs_schedule_viewer_highlight

0xde2c,	// (0x00093de0) list_single_sp_fs_schedule_track_pane_cp01

0xde34,	// (0x00093de8) list_sp_fs_schedule_track_pane

0xde3c,	// (0x00093df0) sp_fs_scroll_pane_cp06_ParamLimits

0xde3c,	// (0x00093df0) sp_fs_scroll_pane_cp06

0xbaa4,	// (0x00091a58) bgmain_sp_fs_calendar_pane_g1

0x0e2d,	// (0x00086de1) list_single_cale_mrui_pane_ParamLimits

0x0e2d,	// (0x00086de1) list_single_cale_mrui_pane

0xde4e,	// (0x00093e02) list_single_cale_mrui_row_pane_ParamLimits

0xde4e,	// (0x00093e02) list_single_cale_mrui_row_pane

0xde5b,	// (0x00093e0f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xde5b,	// (0x00093e0f) list_single_cale_mrui_row_pane_g1

0xdea0,	// (0x00093e54) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdea0,	// (0x00093e54) list_single_cale_mrui_row_pane_t1

0x0e4e,	// (0x00086e02) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0e4e,	// (0x00086e02) list_single_cale_mrui_row_pane_t2

0xdeb2,	// (0x00093e66) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdeb2,	// (0x00093e66) list_single_cale_mrui_row_pane_t3

0xdee1,	// (0x00093e95) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdee1,	// (0x00093e95) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00095dad) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00095dad) list_single_cale_mrui_row_pane_t

0x0eb6,	// (0x00086e6a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0eb6,	// (0x00086e6a) list_single_cmail_header_editor_pane_bg_cp01

0x0edc,	// (0x00086e90) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0edc,	// (0x00086e90) list_single_cmail_header_editor_pane_bg_cp02

0xa6c1,	// (0x00090675) main_radioblah_text_pane_t1_ParamLimits

0xa6c1,	// (0x00090675) main_radioblah_text_pane_t1

0xdf10,	// (0x00093ec4) cam6_indi_pane_cp01

0xdf18,	// (0x00093ecc) cam6_mode_pane_cp01

0xdf20,	// (0x00093ed4) cam6_pano_pane

0xdf29,	// (0x00093edd) cam6_zoom_pane_cp01

0xdf31,	// (0x00093ee5) cam6_pano_image_pane

0xdf3c,	// (0x00093ef0) cam6_pano_pane_g1

0xd623,	// (0x000935d7) cam6_pano_pane_g2

0xdf45,	// (0x00093ef9) cam6_pano_pane_g3

0xdf4e,	// (0x00093f02) cam6_pano_pane_g4

0xc0c8,	// (0x0009207c) cam6_pano_pane_g5

0xdf57,	// (0x00093f0b) cam6_pano_pane_g6

0xdf61,	// (0x00093f15) cam6_pano_pane_g7

0xdf69,	// (0x00093f1d) cam6_pano_pane_g8

0xdf72,	// (0x00093f26) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00095db6) cam6_pano_pane_g

0xe67b,	// (0x0009462f) main_browser_tag_pane

0xdcb0,	// (0x00093c64) grid_navstr_albumart_pane

0xdf7d,	// (0x00093f31) cell_navstr_albumart_pane_ParamLimits

0xdf7d,	// (0x00093f31) cell_navstr_albumart_pane

0xdf9d,	// (0x00093f51) cell_navstr_albumart_pane_g1

0x5be2,	// (0x0008bb96) cell_navstr_albumart_pane_g2

0x5bf2,	// (0x0008bba6) cell_navstr_albumart_pane_g3

0x5bea,	// (0x0008bb9e) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00095dc9) cell_navstr_albumart_pane_g

0xa6db,	// (0x0009068f) bt_list_pane_ParamLimits

0xa6db,	// (0x0009068f) bt_list_pane

0xa6ef,	// (0x000906a3) bt_list_pane_t1

0xa6fe,	// (0x000906b2) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00095dd2) bt_list_pane_t

0xe67b,	// (0x0009462f) main_cale_prevew_pane

0xa70d,	// (0x000906c1) popup_cale_preview_window_ParamLimits

0xa70d,	// (0x000906c1) popup_cale_preview_window

0xe685,	// (0x00094639) bg_popup_preview_window_pane_cp05_ParamLimits

0xe685,	// (0x00094639) bg_popup_preview_window_pane_cp05

0xdfa5,	// (0x00093f59) list_cale_preview_pane_ParamLimits

0xdfa5,	// (0x00093f59) list_cale_preview_pane

0xa728,	// (0x000906dc) list_double_cale_preview_pane_ParamLimits

0xa728,	// (0x000906dc) list_double_cale_preview_pane

0xa73a,	// (0x000906ee) list_single_cale_preview_pane_ParamLimits

0xa73a,	// (0x000906ee) list_single_cale_preview_pane

0xa750,	// (0x00090704) list_single_cale_preview_pane_g1

0xa758,	// (0x0009070c) list_single_cale_preview_pane_t1_ParamLimits

0xa758,	// (0x0009070c) list_single_cale_preview_pane_t1

0xa76d,	// (0x00090721) list_double_cale_preview_pane_g1

0xa775,	// (0x00090729) list_double_cale_preview_pane_t1_ParamLimits

0xa775,	// (0x00090729) list_double_cale_preview_pane_t1

0xa78a,	// (0x0009073e) list_double_cale_preview_pane_t2_ParamLimits

0xa78a,	// (0x0009073e) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00095dd7) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00095dd7) list_double_cale_preview_pane_t

0xe67b,	// (0x0009462f) main_ezdial_pane

0xe685,	// (0x00094639) main_sp_fs_email_pane_ParamLimits

0xa2b6,	// (0x0009026a) cmail_ddmenu_btn01_pane_ParamLimits

0xa2b6,	// (0x0009026a) cmail_ddmenu_btn01_pane

0xa2c9,	// (0x0009027d) cmail_ddmenu_btn02_pane_ParamLimits

0xa2c9,	// (0x0009027d) cmail_ddmenu_btn02_pane

0xa2ec,	// (0x000902a0) cmail_ddmenu_btn03_pane_ParamLimits

0xa2ec,	// (0x000902a0) cmail_ddmenu_btn03_pane

0xa312,	// (0x000902c6) main_sp_fs_ctrlbar_pane_ParamLimits

0xa336,	// (0x000902ea) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc93d,	// (0x000928f1) list_cmail_body_pane_ParamLimits

0xdc0c,	// (0x00093bc0) bg_button_pane_cp12

0xdc15,	// (0x00093bc9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdc15,	// (0x00093bc9) list_single_cmail_header_detail_pane_g3

0xdc22,	// (0x00093bd6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdc22,	// (0x00093bd6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00095d5a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00095d5a) list_single_cmail_header_detail_pane_t

0xdd18,	// (0x00093ccc) phacti_term_pane_t2_ParamLimits

0xdd18,	// (0x00093ccc) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00095d64) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00095d64) phacti_term_pane_t

0xdfb1,	// (0x00093f65) aid_size_list_single_double

0xa7a2,	// (0x00090756) popup_ezdial_listscroll_window

0xa7be,	// (0x00090772) popup_number_entry_window_cp01

0x3f35,	// (0x00089ee9) bg_popup_call_pane_cp09

0xdfbd,	// (0x00093f71) ezdial_list_pane

0xdfc5,	// (0x00093f79) scroll_pane_cp23

0xb589,	// (0x0009153d) bg_button_pane_cp028_ParamLimits

0xb589,	// (0x0009153d) bg_button_pane_cp028

0xa7cc,	// (0x00090780) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa7cc,	// (0x00090780) cmail_ddmenu_btn01_pane_g1

0xa7d8,	// (0x0009078c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa7d8,	// (0x0009078c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00095ddc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00095ddc) cmail_ddmenu_btn01_pane_g

0xdfcd,	// (0x00093f81) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdfcd,	// (0x00093f81) cmail_ddmenu_btn01_pane_t1

0xb589,	// (0x0009153d) bg_button_pane_cp029_ParamLimits

0xb589,	// (0x0009153d) bg_button_pane_cp029

0xa7ec,	// (0x000907a0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa7ec,	// (0x000907a0) cmail_ddmenu_btn02_pane_g1

0xa804,	// (0x000907b8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa804,	// (0x000907b8) cmail_ddmenu_btn02_pane_t1

0xe685,	// (0x00094639) bg_button_pane_cp031_ParamLimits

0xe685,	// (0x00094639) bg_button_pane_cp031

0xa7ec,	// (0x000907a0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa7ec,	// (0x000907a0) cmail_ddmenu_btn03_pane_g1

0xa804,	// (0x000907b8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa804,	// (0x000907b8) cmail_ddmenu_btn03_pane_t1

0x7f4b,	// (0x0008deff) cell_dialer2_keypad_pane_t1_ParamLimits

0x7f65,	// (0x0008df19) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7f65,	// (0x0008df19) cell_dialer2_keypad_pane_t1_copy1

0x9b90,	// (0x0008fb44) ncimui_group_button_pane

0xe685,	// (0x00094639) main_sp_fs_calendar_pane_ParamLimits

0xa4c4,	// (0x00090478) list_single_cmail_header_caption_pane_ParamLimits

0xf0bd,	// (0x00095071) aid_recal_txt_sm_pane

0xe67b,	// (0x0009462f) mian_recal_day_pane

0xdd8a,	// (0x00093d3e) popup_sp_fs_cale_preview_window_ParamLimits

0xdfe3,	// (0x00093f97) list_recal_day_pane

0xe026,	// (0x00093fda) list_single_recal_day_pane_ParamLimits

0xe026,	// (0x00093fda) list_single_recal_day_pane

0xe038,	// (0x00093fec) list_single_recal_day_pane_g1_ParamLimits

0xe038,	// (0x00093fec) list_single_recal_day_pane_g1

0xe044,	// (0x00093ff8) list_single_recal_day_pane_g2_ParamLimits

0xe044,	// (0x00093ff8) list_single_recal_day_pane_g2

0xe054,	// (0x00094008) list_single_recal_day_pane_g3_ParamLimits

0xe054,	// (0x00094008) list_single_recal_day_pane_g3

0x0efc,	// (0x00086eb0) list_single_recal_day_pane_g4_ParamLimits

0x0efc,	// (0x00086eb0) list_single_recal_day_pane_g4

0xe060,	// (0x00094014) list_single_recal_day_pane_g5_ParamLimits

0xe060,	// (0x00094014) list_single_recal_day_pane_g5

0xe070,	// (0x00094024) list_single_recal_day_pane_g6_ParamLimits

0xe070,	// (0x00094024) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00095deb) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00095deb) list_single_recal_day_pane_g

0xe084,	// (0x00094038) list_single_recal_day_pane_t1

0xe096,	// (0x0009404a) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00095df6) list_single_recal_day_pane_t

0xa828,	// (0x000907dc) ncimui_query_button_pane_ParamLimits

0xa828,	// (0x000907dc) ncimui_query_button_pane

0xa838,	// (0x000907ec) ncimui_query_button_pane_t1_ParamLimits

0xa838,	// (0x000907ec) ncimui_query_button_pane_t1

0xe0a8,	// (0x0009405c) ncimui_query_button_pane_t2_ParamLimits

0xe0a8,	// (0x0009405c) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00095dfb) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00095dfb) ncimui_query_button_pane_t

0xa84b,	// (0x000907ff) query_button_pane_ParamLimits

0xa84b,	// (0x000907ff) query_button_pane

0xe67b,	// (0x0009462f) bg_button_pane_cp0028

0xe0bb,	// (0x0009406f) query_button_pane_t1

0x5ff3,	// (0x0008bfa7) main_tport_pane_ParamLimits

0xa388,	// (0x0009033c) bg_popup_window_pane_cp01_ParamLimits

0xa388,	// (0x0009033c) bg_popup_window_pane_cp01

0xa3a3,	// (0x00090357) heading_pane_cp08_ParamLimits

0xa3a3,	// (0x00090357) heading_pane_cp08

0xa3b6,	// (0x0009036a) heading_pane_cp07_ParamLimits

0xa3b6,	// (0x0009036a) heading_pane_cp07

0xa45d,	// (0x00090411) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00095d47) cell_tport_appsw_pane_g

0x03c2,	// (0x00086376) input_candi_list_open_g1

0x35ac,	// (0x00089560) list_cale_time_pane_g6_ParamLimits

0x35ac,	// (0x00089560) list_cale_time_pane_g6

0x6dbc,	// (0x0008cd70) aid_size_touch_calib_1_ParamLimits

0x6dbc,	// (0x0008cd70) aid_size_touch_calib_1

0x6dce,	// (0x0008cd82) aid_size_touch_calib_2_ParamLimits

0x6dce,	// (0x0008cd82) aid_size_touch_calib_2

0x6de6,	// (0x0008cd9a) aid_size_touch_calib_3_ParamLimits

0x6de6,	// (0x0008cd9a) aid_size_touch_calib_3

0x6e04,	// (0x0008cdb8) aid_size_touch_calib_4_ParamLimits

0x6e04,	// (0x0008cdb8) aid_size_touch_calib_4

0x6e1c,	// (0x0008cdd0) main_touch_calib_button_group_pane_ParamLimits

0x6e1c,	// (0x0008cdd0) main_touch_calib_button_group_pane

0x6e34,	// (0x0008cde8) main_touch_calib_pane_g1_ParamLimits

0x6e46,	// (0x0008cdfa) main_touch_calib_pane_g2_ParamLimits

0x6e58,	// (0x0008ce0c) main_touch_calib_pane_g3_ParamLimits

0x6e6a,	// (0x0008ce1e) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x00095705) main_touch_calib_pane_g_ParamLimits

0x6e7c,	// (0x0008ce30) main_touch_calib_pane_t1_ParamLimits

0x6e96,	// (0x0008ce4a) main_touch_calib_pane_t2_ParamLimits

0x6eb0,	// (0x0008ce64) main_touch_calib_pane_t3_ParamLimits

0x6ec4,	// (0x0008ce78) main_touch_calib_pane_t4_ParamLimits

0x6ed8,	// (0x0008ce8c) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0009570e) main_touch_calib_pane_t_ParamLimits

0xbe68,	// (0x00091e1c) list_single_fp_cale_pane_g3_ParamLimits

0xbe68,	// (0x00091e1c) list_single_fp_cale_pane_g3

0xe685,	// (0x00094639) bg_button_pane_cp012_ParamLimits

0xe685,	// (0x00094639) bg_vkb2_func_pane_cp03_ParamLimits

0x8e9c,	// (0x0008ee50) cell_vitu2_function_top_pane_g1_ParamLimits

0xe685,	// (0x00094639) bg_vkb2_func_pane_cp04_ParamLimits

0x9b1e,	// (0x0008fad2) main_ncimui_button_group_pane_ParamLimits

0x9b1e,	// (0x0008fad2) main_ncimui_button_group_pane

0x9b7e,	// (0x0008fb32) main_ncimui_pane_t3_ParamLimits

0x9b7e,	// (0x0008fb32) main_ncimui_pane_t3

0xdcc6,	// (0x00093c7a) phacti_button_group_pane

0xdfb1,	// (0x00093f65) aid_size_list_single_double_ParamLimits

0xa7a2,	// (0x00090756) popup_ezdial_listscroll_window_ParamLimits

0xa7be,	// (0x00090772) popup_number_entry_window_cp01_ParamLimits

0xa85e,	// (0x00090812) phacti_button_pane_ParamLimits

0xa85e,	// (0x00090812) phacti_button_pane

0xe67b,	// (0x0009462f) bg_button_pane_cp14

0xe0c9,	// (0x0009407d) phacti_button_pane_t1

0xa86f,	// (0x00090823) main_touch_calib_button_pane_ParamLimits

0xa86f,	// (0x00090823) main_touch_calib_button_pane

0xedc6,	// (0x00094d7a) bg_button_pane_cp18_ParamLimits

0xedc6,	// (0x00094d7a) bg_button_pane_cp18

0xe0d7,	// (0x0009408b) main_touch_calib_button_pane_t1_ParamLimits

0xe0d7,	// (0x0009408b) main_touch_calib_button_pane_t1

0xe0ed,	// (0x000940a1) main_touch_calib_button_pane_t2_ParamLimits

0xe0ed,	// (0x000940a1) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00095e00) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00095e00) main_touch_calib_button_pane_t

0xe67b,	// (0x0009462f) cell_ncimui_button_pane

0xe67b,	// (0x0009462f) bg_button_pane_cp032

0xe10b,	// (0x000940bf) cell_ncimui_button_pane_t1

0xc66d,	// (0x00092621) image3_infobar_pane_ParamLimits

0xc66d,	// (0x00092621) image3_infobar_pane

0x9f4c,	// (0x0008ff00) fs_bigclock_status_pane_ParamLimits

0x9f4c,	// (0x0008ff00) fs_bigclock_status_pane

0x9f59,	// (0x0008ff0d) main_fs_bigclock_clock_pane_ParamLimits

0x9f59,	// (0x0008ff0d) main_fs_bigclock_clock_pane

0x9f79,	// (0x0008ff2d) main_fs_bigclock_indi_pane_ParamLimits

0x9f79,	// (0x0008ff2d) main_fs_bigclock_indi_pane

0x9fa3,	// (0x0008ff57) main_fs_bigclock_swipe_pane_ParamLimits

0x9fa3,	// (0x0008ff57) main_fs_bigclock_swipe_pane

0xe67b,	// (0x0009462f) main_fs_clock_dumped_data

0xd730,	// (0x000936e4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd730,	// (0x000936e4) list_single_fs_bigclock_indicator_pane_g1

0xd74b,	// (0x000936ff) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd74b,	// (0x000936ff) list_single_fs_bigclock_indicator_pane_g2

0xd765,	// (0x00093719) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd765,	// (0x00093719) list_single_fs_bigclock_indicator_pane_g3

0xd77f,	// (0x00093733) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd77f,	// (0x00093733) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00095c28) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00095c28) list_single_fs_bigclock_indicator_pane_g

0xd7aa,	// (0x0009375e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd7aa,	// (0x0009375e) list_single_fs_bigclock_indicator_pane_t1

0xd7d2,	// (0x00093786) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd7d2,	// (0x00093786) list_single_fs_bigclock_indicator_pane_t2

0xd7fa,	// (0x000937ae) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd7fa,	// (0x000937ae) list_single_fs_bigclock_indicator_pane_t3

0xd822,	// (0x000937d6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd822,	// (0x000937d6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00095c33) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00095c33) list_single_fs_bigclock_indicator_pane_t

0xe119,	// (0x000940cd) image3_infobar_fav_pane_ParamLimits

0xe119,	// (0x000940cd) image3_infobar_fav_pane

0xe129,	// (0x000940dd) image3_infobar_loc_pane_ParamLimits

0xe129,	// (0x000940dd) image3_infobar_loc_pane

0xe13d,	// (0x000940f1) image3_infobar_time_pane_ParamLimits

0xe13d,	// (0x000940f1) image3_infobar_time_pane

0xbaa4,	// (0x00091a58) image3_infobar_time_pane_g1

0xe14d,	// (0x00094101) image3_infobar_time_pane_t1

0xbaa4,	// (0x00091a58) image3_infobar_loc_pane_g1

0xe15b,	// (0x0009410f) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00095e05) image3_infobar_loc_pane_g

0xe163,	// (0x00094117) image3_infobar_loc_pane_t1

0xbaa4,	// (0x00091a58) image3_infobar_fav_pane_g1

0xe171,	// (0x00094125) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00095e0a) image3_infobar_fav_pane_g

0xe179,	// (0x0009412d) fs_bigclock_status_battery_pane

0xe182,	// (0x00094136) fs_bigclock_status_signal_pane

0xe18b,	// (0x0009413f) fs_bigclock_status_title_pane

0xe194,	// (0x00094148) fs_bigclock_status_signal_pane_g1

0xe19d,	// (0x00094151) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00095e0f) fs_bigclock_status_signal_pane_g

0xe1a5,	// (0x00094159) fs_bigclock_status_battery_pane_g1

0xe1ae,	// (0x00094162) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00095e14) fs_bigclock_status_battery_pane_g

0xe1b6,	// (0x0009416a) fs_bigclock_status_title_pane_t1

0xbaa4,	// (0x00091a58) main_fs_bigclock_clock_pane_g1

0xe1c4,	// (0x00094178) main_fs_bigclock_clock_pane_g2

0xe1cd,	// (0x00094181) main_fs_bigclock_clock_pane_g3

0xe1cd,	// (0x00094181) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00095e19) main_fs_bigclock_clock_pane_g

0xe1d5,	// (0x00094189) main_fs_bigclock_clock_pane_t1

0xa884,	// (0x00090838) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00095e22) main_fs_bigclock_clock_pane_t

0xe1e3,	// (0x00094197) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe1e3,	// (0x00094197) list_single_fs_bigclock_indicator_pane

0xe1f4,	// (0x000941a8) list_single_fs_bigclock_pane_ParamLimits

0xe1f4,	// (0x000941a8) list_single_fs_bigclock_pane

0xe21a,	// (0x000941ce) main_fs_bigclock_indicator_pane_t1

0xe229,	// (0x000941dd) list_single_fs_bigclock_pane_g1

0xe231,	// (0x000941e5) list_single_fs_bigclock_pane_t1

0xbaa4,	// (0x00091a58) main_fs_bigclock_swipe_pane_g1

0xe274,	// (0x00094228) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00095e33) main_fs_bigclock_swipe_pane_g

0xe27c,	// (0x00094230) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe27c,	// (0x00094230) main_fs_bigclock_swipe_pane_t1

0x388c,	// (0x00089840) call_type_pane_ParamLimits

0xe67b,	// (0x0009462f) main_btmg_pane

0xde87,	// (0x00093e3b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xde87,	// (0x00093e3b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00095da6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00095da6) list_single_cale_mrui_row_pane_g

0xe00c,	// (0x00093fc0) list_recal_vselct_arw_lo_pane

0xe014,	// (0x00093fc8) list_recal_vselct_arw_up_pane

0xe01c,	// (0x00093fd0) list_recal_vselct_pane

0xa8d7,	// (0x0009088b) btmg_button_pane

0xa8e1,	// (0x00090895) main_btmg_pane_g1

0xe67b,	// (0x0009462f) bg_button_pane_cp044

0xe299,	// (0x0009424d) btmg_button_pane_t1

0xb575,	// (0x00091529) aid_listscroll_gen

0xe685,	// (0x00094639) main_cntbar_detail_pane

0xdbee,	// (0x00093ba2) list_cmail_folder_pane

0xb3c1,	// (0x00091375) sp_fs_scroll_pane_cp03_ParamLimits

0x0f1c,	// (0x00086ed0) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f1c,	// (0x00086ed0) list_single_fs_dyc_pane_cp01

0xe2a7,	// (0x0009425b) aid_size_cmail_indent

0xe2b0,	// (0x00094264) list_single_dyc_row_pane_cp01

0xa91d,	// (0x000908d1) cntbar_detail_list_pane_ParamLimits

0xa91d,	// (0x000908d1) cntbar_detail_list_pane

0xa969,	// (0x0009091d) main_cntbar_detail_cont_pane_ParamLimits

0xa969,	// (0x0009091d) main_cntbar_detail_cont_pane

0xb3c1,	// (0x00091375) scroll_pane_cp032_ParamLimits

0xb3c1,	// (0x00091375) scroll_pane_cp032

0xa97d,	// (0x00090931) cntbar_detail_list_event_pane_ParamLimits

0xa97d,	// (0x00090931) cntbar_detail_list_event_pane

0xa92d,	// (0x000908e1) cntbar_detail_list_shct_pane

0x2837,	// (0x000887eb) aid_list_gen

0xe2b9,	// (0x0009426d) aid_scroll

0xe2c2,	// (0x00094276) aid_size_touch_scroll_bar

0x93c4,	// (0x0008f378) aid_list_double

0xa98d,	// (0x00090941) aid_list_single

0x93c4,	// (0x0008f378) aid_list_single_lg

0x0f32,	// (0x00086ee6) aid_list_z_g_a_sm

0xa996,	// (0x0009094a) aid_list_z_g_d

0x0f3a,	// (0x00086eee) aid_txt_z_prm

0x0f48,	// (0x00086efc) aid_txt_z_prm_cp01

0x0f56,	// (0x00086f0a) aid_txt_z_sec

0xa99e,	// (0x00090952) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa99e,	// (0x00090952) main_cntbar_detail_cont_pane_g1

0xa9b2,	// (0x00090966) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa9b2,	// (0x00090966) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00095e38) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00095e38) main_cntbar_detail_cont_pane_g

0xe2cb,	// (0x0009427f) main_cntbar_detail_cont_pane_t1

0xe2d9,	// (0x0009428d) main_cntbar_detail_cont_pane_t2

0xe2e7,	// (0x0009429b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00095e3d) main_cntbar_detail_cont_pane_t

0xa9c2,	// (0x00090976) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa9c2,	// (0x00090976) cell_cntbar_detail_list_shct_pane

0xe2f5,	// (0x000942a9) cntbar_detail_list_shct_pane_g1

0xe2fe,	// (0x000942b2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00095e44) cntbar_detail_list_shct_pane_g

0xa9d6,	// (0x0009098a) cntbar_detail_list_event_pane_g1_ParamLimits

0xa9d6,	// (0x0009098a) cntbar_detail_list_event_pane_g1

0xa9e2,	// (0x00090996) cntbar_detail_list_event_pane_g2_ParamLimits

0xa9e2,	// (0x00090996) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00095e49) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00095e49) cntbar_detail_list_event_pane_g

0xaa4e,	// (0x00090a02) cntbar_detail_list_event_pane_t1_ParamLimits

0xaa4e,	// (0x00090a02) cntbar_detail_list_event_pane_t1

0xaa63,	// (0x00090a17) cntbar_detail_list_event_pane_t2_ParamLimits

0xaa63,	// (0x00090a17) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00095e56) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00095e56) cntbar_detail_list_event_pane_t

0xbaa4,	// (0x00091a58) cell_cntbar_detail_list_shct_pane_g1

0x3eab,	// (0x00089e5f) navi_pane_mv_g3

0xe685,	// (0x00094639) main_cntbar_detail_pane_ParamLimits

0xe67b,	// (0x0009462f) main_notif_wgt_pane

0xc3ff,	// (0x000923b3) aid_tch_main_mp4_pane_g4

0xc601,	// (0x000925b5) popup_slider_window_cp02

0xe002,	// (0x00093fb6) list_recal_day_event_pane

0xa8eb,	// (0x0009089f) cntbar_detail_btn_pane_ParamLimits

0xa8eb,	// (0x0009089f) cntbar_detail_btn_pane

0xa904,	// (0x000908b8) cntbar_detail_btn_pane_cp01_ParamLimits

0xa904,	// (0x000908b8) cntbar_detail_btn_pane_cp01

0xa92d,	// (0x000908e1) cntbar_detail_list_shct_pane_ParamLimits

0xa93d,	// (0x000908f1) cntbar_detail_pane_g1_ParamLimits

0xa93d,	// (0x000908f1) cntbar_detail_pane_g1

0xa94d,	// (0x00090901) cntbar_detail_pane_t1_ParamLimits

0xa94d,	// (0x00090901) cntbar_detail_pane_t1

0xa9ee,	// (0x000909a2) cntbar_detail_list_event_pane_g3_ParamLimits

0xa9ee,	// (0x000909a2) cntbar_detail_list_event_pane_g3

0xaa06,	// (0x000909ba) cntbar_detail_list_event_pane_g4_ParamLimits

0xaa06,	// (0x000909ba) cntbar_detail_list_event_pane_g4

0xaa1e,	// (0x000909d2) cntbar_detail_list_event_pane_g5_ParamLimits

0xaa1e,	// (0x000909d2) cntbar_detail_list_event_pane_g5

0xaa36,	// (0x000909ea) cntbar_detail_list_event_pane_g6_ParamLimits

0xaa36,	// (0x000909ea) cntbar_detail_list_event_pane_g6

0xaa78,	// (0x00090a2c) cntbar_detail_list_event_pane_t3_ParamLimits

0xaa78,	// (0x00090a2c) cntbar_detail_list_event_pane_t3

0xaa8a,	// (0x00090a3e) popup_notif_wgt_window_ParamLimits

0xaa8a,	// (0x00090a3e) popup_notif_wgt_window

0xaaa3,	// (0x00090a57) popup_submenu_window_cp01_ParamLimits

0xaaa3,	// (0x00090a57) popup_submenu_window_cp01

0x3f35,	// (0x00089ee9) bg_popup_window_pane_cp10

0xe307,	// (0x000942bb) listscroll_notif_wgt_pane

0xe319,	// (0x000942cd) list_notif_wgt_window

0xe322,	// (0x000942d6) scroll_pane_cp033

0xaab9,	// (0x00090a6d) list_notif_wgt_row_pane_ParamLimits

0xaab9,	// (0x00090a6d) list_notif_wgt_row_pane

0xe32b,	// (0x000942df) aid_size_list_notif_wgt_del

0xe338,	// (0x000942ec) list_notif_wgt_row_pane_g1

0xe344,	// (0x000942f8) list_notif_wgt_row_pane_g2

0xe358,	// (0x0009430c) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00095e5d) list_notif_wgt_row_pane_g

0xe365,	// (0x00094319) list_notif_wgt_row_pane_t1

0xe37b,	// (0x0009432f) list_notif_wgt_row_pane_t2

0xe38d,	// (0x00094341) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00095e64) list_notif_wgt_row_pane_t

0xcb70,	// (0x00092b24) list_recal_day_event_pane_g1

0xe39f,	// (0x00094353) list_recal_day_event_pane_t1

0xe67b,	// (0x0009462f) bg_button_pane_cp045

0xaac9,	// (0x00090a7d) cntbar_detail_btn_pane_t1

0xb589,	// (0x0009153d) main_callh_pane_ParamLimits

0xb589,	// (0x0009153d) main_callh_pane

0xe67b,	// (0x0009462f) main_coverflow0_pane

0xe67b,	// (0x0009462f) main_wgtman_pane

0x9fbb,	// (0x0008ff6f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9fbb,	// (0x0008ff6f) main_fs_bigclock_unlock_btn_pane

0xa455,	// (0x00090409) bg_button_pane_cp16

0xa465,	// (0x00090419) cell_tport_appsw_pane_g3

0xaad7,	// (0x00090a8b) cf0_flow_pane_ParamLimits

0xaad7,	// (0x00090a8b) cf0_flow_pane

0xe3ae,	// (0x00094362) listscroll_cf0_pane

0xe3b9,	// (0x0009436d) main_cf0_pane_g1

0xaaec,	// (0x00090aa0) main_cf0_pane_t1_ParamLimits

0xaaec,	// (0x00090aa0) main_cf0_pane_t1

0xab03,	// (0x00090ab7) main_cf0_pane_t2_ParamLimits

0xab03,	// (0x00090ab7) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00095e70) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00095e70) main_cf0_pane_t

0xe3cb,	// (0x0009437f) scroll_pane_cp11

0xab1a,	// (0x00090ace) cf0_flow_pane_g1

0xab22,	// (0x00090ad6) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00095e75) cf0_flow_pane_g

0xab2a,	// (0x00090ade) cf0_flow_pane_t1

0xe67b,	// (0x0009462f) main_call6_pane

0xe67b,	// (0x0009462f) main_calllock_pane

0xab38,	// (0x00090aec) call6_btn_grp_pane_ParamLimits

0xab38,	// (0x00090aec) call6_btn_grp_pane

0xab52,	// (0x00090b06) call6_pane_g1_ParamLimits

0xab52,	// (0x00090b06) call6_pane_g1

0xab67,	// (0x00090b1b) popup_call6_1st_window_ParamLimits

0xab67,	// (0x00090b1b) popup_call6_1st_window

0xab78,	// (0x00090b2c) popup_call6_2nd_window_ParamLimits

0xab78,	// (0x00090b2c) popup_call6_2nd_window

0xab89,	// (0x00090b3d) cell_call6_btn_pane_ParamLimits

0xab89,	// (0x00090b3d) cell_call6_btn_pane

0x3f35,	// (0x00089ee9) bg_popup_call2_in_pane_cp03

0xe3d6,	// (0x0009438a) popup_call6_1st_window_g1

0xe3de,	// (0x00094392) popup_call6_1st_window_g2

0xe3e6,	// (0x0009439a) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00095e7a) popup_call6_1st_window_g

0xe3ee,	// (0x000943a2) popup_call6_1st_window_t1

0xe3fd,	// (0x000943b1) popup_call6_1st_window_t2

0xe40d,	// (0x000943c1) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00095e81) popup_call6_1st_window_t

0x3f35,	// (0x00089ee9) bg_popup_call2_in_pane_cp04

0xe3d6,	// (0x0009438a) popup_call6_2nd_window_g1

0xe3de,	// (0x00094392) popup_call6_2nd_window_g2

0xe3e6,	// (0x0009439a) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00095e7a) popup_call6_2nd_window_g

0xe3ee,	// (0x000943a2) popup_call6_2nd_window_t1

0xe67b,	// (0x0009462f) bg_button_pane_cp15

0xe41d,	// (0x000943d1) cell_call6_btn_pane_g1

0xe426,	// (0x000943da) cell_call6_btn_pane_t1

0xab9d,	// (0x00090b51) listscroll_wgtman_pane_ParamLimits

0xab9d,	// (0x00090b51) listscroll_wgtman_pane

0xabbe,	// (0x00090b72) wgtman_btn_pane_ParamLimits

0xabbe,	// (0x00090b72) wgtman_btn_pane

0x3ae6,	// (0x00089a9a) aid_scroll_copy1

0xe435,	// (0x000943e9) list_wgtman_pane

0xac01,	// (0x00090bb5) wgtman_btn_pane_g1_ParamLimits

0xac01,	// (0x00090bb5) wgtman_btn_pane_g1

0xac2d,	// (0x00090be1) wgtman_btn_pane_t1_ParamLimits

0xac2d,	// (0x00090be1) wgtman_btn_pane_t1

0xe43f,	// (0x000943f3) wgtman_btn_pane_t2_ParamLimits

0xe43f,	// (0x000943f3) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00095e88) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00095e88) wgtman_btn_pane_t

0xac6a,	// (0x00090c1e) listrow_wgtman_pane_ParamLimits

0xac6a,	// (0x00090c1e) listrow_wgtman_pane

0xac7c,	// (0x00090c30) listrow_wgtman_pane_g1

0xac89,	// (0x00090c3d) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00095e8d) listrow_wgtman_pane_g

0x0f64,	// (0x00086f18) listrow_wgtman_pane_t1

0x0f7c,	// (0x00086f30) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00095e92) listrow_wgtman_pane_t

0x0fa2,	// (0x00086f56) wait_bar_pane_cp09

0xe456,	// (0x0009440a) main_calllock_btn_pane

0xe460,	// (0x00094414) main_calllock_pane_g1

0xe67b,	// (0x0009462f) bg_button_pane_cp17

0xe46c,	// (0x00094420) main_calllock_btn_pane_g1

0xe475,	// (0x00094429) main_calllock_btn_pane_t1

0xe67b,	// (0x0009462f) main_dialer3_pane

0xe67b,	// (0x0009462f) main_fmrd2_pane

0xbaa4,	// (0x00091a58) main_fs_bigclock_unlock_btn_pane_g1

0xe48c,	// (0x00094440) main_fs_bigclock_unlock_btn_pane_t1

0xaca7,	// (0x00090c5b) area_fmrd2_info_pane_ParamLimits

0xaca7,	// (0x00090c5b) area_fmrd2_info_pane

0xacb8,	// (0x00090c6c) area_fmrd2_visual_pane_ParamLimits

0xacb8,	// (0x00090c6c) area_fmrd2_visual_pane

0xacc6,	// (0x00090c7a) fmrd2_indi_pane_ParamLimits

0xacc6,	// (0x00090c7a) fmrd2_indi_pane

0xacd3,	// (0x00090c87) area_fmrd2_visual_pane_g1

0xacdb,	// (0x00090c8f) area_fmrd2_visual_pane_t1

0xaceb,	// (0x00090c9f) area_fmrd2_visual_pane_t2

0xacfb,	// (0x00090caf) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00095e9c) area_fmrd2_visual_pane_t

0xad0b,	// (0x00090cbf) area_fmrd2_info_pane_g1

0xad13,	// (0x00090cc7) area_fmrd2_info_pane_t1

0xad23,	// (0x00090cd7) area_fmrd2_info_pane_t2

0xad33,	// (0x00090ce7) area_fmrd2_info_pane_t3

0xad43,	// (0x00090cf7) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00095ea3) area_fmrd2_info_pane_t

0xad51,	// (0x00090d05) fmrd2_indi_pane_t1

0xad61,	// (0x00090d15) fmrd2_indi_pane_t2

0xad71,	// (0x00090d25) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00095eac) fmrd2_indi_pane_t

0xd78e,	// (0x00093742) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd78e,	// (0x00093742) list_single_fs_bigclock_indicator_pane_g5

0xd83e,	// (0x000937f2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd83e,	// (0x000937f2) list_single_fs_bigclock_indicator_pane_t5

0xa5c5,	// (0x00090579) aid_cell_bcale_month_pane_ParamLimits

0xa5c5,	// (0x00090579) aid_cell_bcale_month_pane

0xa5e3,	// (0x00090597) bcale_month_pane_ParamLimits

0xa5e3,	// (0x00090597) bcale_month_pane

0xa607,	// (0x000905bb) bcale_preview_pane_ParamLimits

0xa607,	// (0x000905bb) bcale_preview_pane

0xe231,	// (0x000941e5) list_single_fs_bigclock_pane_t1_ParamLimits

0xe250,	// (0x00094204) list_single_fs_bigclock_pane_t2_ParamLimits

0xe250,	// (0x00094204) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00095e2e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00095e2e) list_single_fs_bigclock_pane_t

0xe484,	// (0x00094438) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00095e97) main_fs_bigclock_unlock_btn_pane_g

0xad81,	// (0x00090d35) aid_dia3_key_size_ParamLimits

0xad81,	// (0x00090d35) aid_dia3_key_size

0xad90,	// (0x00090d44) aid_dia3_listrow_size_ParamLimits

0xad90,	// (0x00090d44) aid_dia3_listrow_size

0xada5,	// (0x00090d59) dia3_keypad_fun_pane_ParamLimits

0xada5,	// (0x00090d59) dia3_keypad_fun_pane

0xadc1,	// (0x00090d75) dia3_keypad_num_pane_ParamLimits

0xadc1,	// (0x00090d75) dia3_keypad_num_pane

0xaddc,	// (0x00090d90) dia3_listscroll_pane_ParamLimits

0xaddc,	// (0x00090d90) dia3_listscroll_pane

0xadef,	// (0x00090da3) dia3_numentry_pane_ParamLimits

0xadef,	// (0x00090da3) dia3_numentry_pane

0xe49a,	// (0x0009444e) dia3_list_pane

0xe4a5,	// (0x00094459) scroll_pane_cp12

0xe67b,	// (0x0009462f) bg_dia3_numentry_pane

0xae03,	// (0x00090db7) dia3_numentry_pane_t1

0xae12,	// (0x00090dc6) cell_dia3_key_num_pane

0xae1a,	// (0x00090dce) cell_dia3_key0_fun_pane_ParamLimits

0xae1a,	// (0x00090dce) cell_dia3_key0_fun_pane

0xae2e,	// (0x00090de2) cell_dia3_key1_fun_pane_ParamLimits

0xae2e,	// (0x00090de2) cell_dia3_key1_fun_pane

0xae46,	// (0x00090dfa) dia3_listrow_pane

0xd49d,	// (0x00093451) bg_dia3_numentry_pane_g1

0xe67b,	// (0x0009462f) bg_button_pane_cp21

0xe4b0,	// (0x00094464) cell_dia3_key_num_pane_t1

0xe4be,	// (0x00094472) cell_dia3_key_num_pane_t2

0xe4cd,	// (0x00094481) cell_dia3_key_num_pane_t3

0xe4dc,	// (0x00094490) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00095eb3) cell_dia3_key_num_pane_t

0xe67b,	// (0x0009462f) bg_button_pane_cp19

0xae58,	// (0x00090e0c) cell_dia3_key0_fun_pane_g1

0xe67b,	// (0x0009462f) bg_button_pane_cp20

0xae60,	// (0x00090e14) cell_dia3_key1_fun_pane_g1

0xae68,	// (0x00090e1c) area_left_week_number_pane

0xae74,	// (0x00090e28) area_top_day_name_pane

0xae87,	// (0x00090e3b) frame_month_view_pane

0xe4eb,	// (0x0009449f) grid_month_view_pane

0xae9a,	// (0x00090e4e) cell_top_day_name_pane_ParamLimits

0xae9a,	// (0x00090e4e) cell_top_day_name_pane

0xaec7,	// (0x00090e7b) cell_area_left_week_number_pane_ParamLimits

0xaec7,	// (0x00090e7b) cell_area_left_week_number_pane

0xaedb,	// (0x00090e8f) cell_month_view_pane_ParamLimits

0xaedb,	// (0x00090e8f) cell_month_view_pane

0xe4f9,	// (0x000944ad) frm_month_g1

0xaf08,	// (0x00090ebc) frm_month_g2

0xaf1b,	// (0x00090ecf) frm_month_g3

0xaf2e,	// (0x00090ee2) frm_month_g4

0xaf41,	// (0x00090ef5) frm_month_g5

0xaf54,	// (0x00090f08) frm_month_g6

0xaf67,	// (0x00090f1b) frm_month_g7

0xe506,	// (0x000944ba) frm_month_g8

0xaf7a,	// (0x00090f2e) frm_month_g9

0xaf8a,	// (0x00090f3e) frm_month_g10

0xaf9a,	// (0x00090f4e) frm_month_g11

0xafaa,	// (0x00090f5e) frm_month_g12

0xafbc,	// (0x00090f70) frm_month_g13

0xafce,	// (0x00090f82) frm_month_g14

0xafe2,	// (0x00090f96) frm_month_g15

0xaff6,	// (0x00090faa) frm_month_g16

0x000f,

0xff08,	// (0x00095ebc) frm_month_g

0xe513,	// (0x000944c7) cell_top_day_name_pane_t1

0xb00a,	// (0x00090fbe) cell_area_left_week_number_pane_g1

0xb016,	// (0x00090fca) cell_area_left_week_number_pane_t1

0xbd10,	// (0x00091cc4) cell_month_view_pane_g1

0xb029,	// (0x00090fdd) cell_month_view_pane_t1

0xe67b,	// (0x0009462f) main_fps_pane

0xda13,	// (0x000939c7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xda13,	// (0x000939c7) cmail_ddmenu_btn02_pane_cp1

0xda2f,	// (0x000939e3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xda2f,	// (0x000939e3) cmail_ddmenu_btn02_pane_cp2

0xa7f8,	// (0x000907ac) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa7f8,	// (0x000907ac) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00095de1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00095de1) cmail_ddmenu_btn02_pane_g

0xa816,	// (0x000907ca) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa816,	// (0x000907ca) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00095de6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00095de6) cmail_ddmenu_btn02_pane_t

0xb03c,	// (0x00090ff0) fps_text_pane_ParamLimits

0xb03c,	// (0x00090ff0) fps_text_pane

0xb053,	// (0x00091007) main_fps_pane_g1_ParamLimits

0xb053,	// (0x00091007) main_fps_pane_g1

0xb06d,	// (0x00091021) wait_bar_pane_cp010_ParamLimits

0xb06d,	// (0x00091021) wait_bar_pane_cp010

0xb07e,	// (0x00091032) fps_text_pane_t1_ParamLimits

0xb07e,	// (0x00091032) fps_text_pane_t1

0xc7b6,	// (0x0009276a) cam4_image_uncrop_pane_g1

0xc7bf,	// (0x00092773) cam4_image_uncrop_pane_g2

0x83f1,	// (0x0008e3a5) cam4_image_uncrop_pane_g3

0x83fa,	// (0x0008e3ae) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000958a2) cam4_image_uncrop_pane_g

0xae46,	// (0x00090dfa) dia3_listrow_pane_ParamLimits

0xe67b,	// (0x0009462f) main_phob2_pane

0xa426,	// (0x000903da) cell_tport_appsw_pane_cp02_ParamLimits

0xa426,	// (0x000903da) cell_tport_appsw_pane_cp02

0xa43a,	// (0x000903ee) cell_tport_appsw_pane_cp03_ParamLimits

0xa43a,	// (0x000903ee) cell_tport_appsw_pane_cp03

0xe67b,	// (0x0009462f) phob2_contact_card_pane

0xe67b,	// (0x0009462f) phob2_listscroll_pane

0xe526,	// (0x000944da) phob2_list_pane

0xe52e,	// (0x000944e2) scroll_pane_cp034

0xb096,	// (0x0009104a) phob2_cc_data_pane_ParamLimits

0xb096,	// (0x0009104a) phob2_cc_data_pane

0xb0b5,	// (0x00091069) phob2_cc_listscroll_pane_ParamLimits

0xb0b5,	// (0x00091069) phob2_cc_listscroll_pane

0xb0d3,	// (0x00091087) list_double_large_graphic_phob2_pane_ParamLimits

0xb0d3,	// (0x00091087) list_double_large_graphic_phob2_pane

0xb0e5,	// (0x00091099) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb0e5,	// (0x00091099) list_double_large_graphic_phob2_pane_g1

0x0fb4,	// (0x00086f68) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0fb4,	// (0x00086f68) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00095edd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00095edd) list_double_large_graphic_phob2_pane_g

0x0fc0,	// (0x00086f74) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0fc0,	// (0x00086f74) list_double_large_graphic_phob2_pane_t1

0x0fd5,	// (0x00086f89) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0fd5,	// (0x00086f89) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00095ee2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00095ee2) list_double_large_graphic_phob2_pane_t

0xe67b,	// (0x0009462f) list_highlight_pane_cp024

0xb0fb,	// (0x000910af) phob2_cc_button_pane

0xb103,	// (0x000910b7) phob2_cc_data_pane_g1_ParamLimits

0xb103,	// (0x000910b7) phob2_cc_data_pane_g1

0xb118,	// (0x000910cc) phob2_cc_data_pane_g2_ParamLimits

0xb118,	// (0x000910cc) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00095ee7) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00095ee7) phob2_cc_data_pane_g

0xb128,	// (0x000910dc) phob2_cc_data_pane_t1_ParamLimits

0xb128,	// (0x000910dc) phob2_cc_data_pane_t1

0xb140,	// (0x000910f4) phob2_cc_data_pane_t2_ParamLimits

0xb140,	// (0x000910f4) phob2_cc_data_pane_t2

0xb158,	// (0x0009110c) phob2_cc_data_pane_t3_ParamLimits

0xb158,	// (0x0009110c) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00095eec) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00095eec) phob2_cc_data_pane_t

0xe536,	// (0x000944ea) phob2_cc_list_pane_ParamLimits

0xe536,	// (0x000944ea) phob2_cc_list_pane

0xcc19,	// (0x00092bcd) scroll_pane_cp035_ParamLimits

0xcc19,	// (0x00092bcd) scroll_pane_cp035

0xe685,	// (0x00094639) bg_button_pane_cp033

0xe542,	// (0x000944f6) phob2_cc_button_pane_g1

0xe54e,	// (0x00094502) phob2_cc_button_pane_t1

0xe563,	// (0x00094517) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00095ef3) phob2_cc_button_pane_t

0xb170,	// (0x00091124) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb170,	// (0x00091124) list_double_large_graphic_phob2_cc_pane

0xb182,	// (0x00091136) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb182,	// (0x00091136) list_double_large_graphic_phob2_cc_pane_g1

0x0fe7,	// (0x00086f9b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0fe7,	// (0x00086f9b) list_double_large_graphic_phob2_cc_pane_g2

0x0ff3,	// (0x00086fa7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0ff3,	// (0x00086fa7) list_double_large_graphic_phob2_cc_pane_g3

0x0fff,	// (0x00086fb3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0fff,	// (0x00086fb3) list_double_large_graphic_phob2_cc_pane_g4

0x100b,	// (0x00086fbf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x100b,	// (0x00086fbf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00095ef8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00095ef8) list_double_large_graphic_phob2_cc_pane_g

0x1017,	// (0x00086fcb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1017,	// (0x00086fcb) list_double_large_graphic_phob2_cc_pane_t1

0x1040,	// (0x00086ff4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1040,	// (0x00086ff4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00095f03) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00095f03) list_double_large_graphic_phob2_cc_pane_t

0xe575,	// (0x00094529) list_highlight_pane_cp025_ParamLimits

0xe575,	// (0x00094529) list_highlight_pane_cp025

0xe685,	// (0x00094639) bg_button_pane_cp033_ParamLimits

0xe542,	// (0x000944f6) phob2_cc_button_pane_g1_ParamLimits

0xe54e,	// (0x00094502) phob2_cc_button_pane_t1_ParamLimits

0xe563,	// (0x00094517) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00095ef3) phob2_cc_button_pane_t_ParamLimits

0x12a2,	// (0x00087256) popup_wgtman_window

0xca1f,	// (0x000929d3) scroll_pane_cp038

0xabe3,	// (0x00090b97) wgtman_btn_pane_cp_01_ParamLimits

0xabe3,	// (0x00090b97) wgtman_btn_pane_cp_01

0xe583,	// (0x00094537) wgtman_content_pane

0xe58c,	// (0x00094540) wgtman_heading_pane

0xe67b,	// (0x0009462f) bg_heading_pane_cp02

0xe595,	// (0x00094549) wgtman_heading_pane_g1

0xe59d,	// (0x00094551) wgtman_heading_pane_t1

0xe5ab,	// (0x0009455f) scroll_pane_cp036

0xe5b3,	// (0x00094567) wgtman_list_pane

0xe5bb,	// (0x0009456f) wgtman_list_pane_t1_ParamLimits

0xe5bb,	// (0x0009456f) wgtman_list_pane_t1

0xc7a2,	// (0x00092756) cam4_grid_pane

0x05d2,	// (0x00086586) bg_button_pane_cp015_ParamLimits

0x902b,	// (0x0008efdf) bg_button_pane_cp016_ParamLimits

0x903e,	// (0x0008eff2) bg_button_pane_cp017_ParamLimits

0x0618,	// (0x000865cc) popup_vitu2_query_window_g3_ParamLimits

0x0618,	// (0x000865cc) popup_vitu2_query_window_g3

0x0693,	// (0x00086647) popup_vitu2_query_window_t6_ParamLimits

0x0693,	// (0x00086647) popup_vitu2_query_window_t6

0x06be,	// (0x00086672) popup_vitu2_query_window_t7_ParamLimits

0x06be,	// (0x00086672) popup_vitu2_query_window_t7

0xc7b6,	// (0x0009276a) cam4_grid_pane_g1

0xc7bf,	// (0x00092773) cam4_grid_pane_g2

0xe5d5,	// (0x00094589) cam4_grid_pane_g3

0xe5de,	// (0x00094592) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00095f08) cam4_grid_pane_g

0x2233,	// (0x000881e7) aid_placing_vt_slider_lsc_ParamLimits

0x258e,	// (0x00088542) vidtel_button_pane_ParamLimits

0x258e,	// (0x00088542) vidtel_button_pane

0xe5e9,	// (0x0009459d) bg_button_pane_cp034

0xb18e,	// (0x00091142) vidtel_button_pane_g1

0xe5f3,	// (0x000945a7) vidtel_button_pane_t1

0xcb60,	// (0x00092b14) aid_size_vtel_slider_touch

0xcc19,	// (0x00092bcd) scroll_pane_cp039

0xd4db,	// (0x0009348f) ncim_query_button_pane_cp01_ParamLimits

0xd4fa,	// (0x000934ae) ncimui_query_pane_g1_ParamLimits

0xe685,	// (0x00094639) input_focus_pane_cp012_ParamLimits

0xd51f,	// (0x000934d3) ncim_query_entry_pane_t1_ParamLimits

0xcc19,	// (0x00092bcd) scroll_pane_cp039_ParamLimits

0x3d96,	// (0x00089d4a) navi_pane_bcale_mc_g1

0x3d9e,	// (0x00089d52) navi_pane_bcale_mc_t1

0xda78,	// (0x00093a2c) main_sp_fs_email_pane_g1

0xda84,	// (0x00093a38) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00095c99) main_sp_fs_email_pane_g

0xde93,	// (0x00093e47) list_single_cale_mrui_row_pane_g3_ParamLimits

0xde93,	// (0x00093e47) list_single_cale_mrui_row_pane_g3

0x0f12,	// (0x00086ec6) list_single_recal_day_pane_g5_event_pane

0xe07c,	// (0x00094030) list_single_recal_day_pane_g7

0xe601,	// (0x000945b5) list_recal_day_event_pane_cp01

0xe60a,	// (0x000945be) list_recal_vselct_arw_lo_pane_cp01

0xe612,	// (0x000945c6) list_recal_vselct_arw_up_pane_cp01

0xe61a,	// (0x000945ce) list_recal_vselct_pane_cp01

0xcb70,	// (0x00092b24) list_recal_day_event_pane_cp01_g1

0xe624,	// (0x000945d8) list_recal_day_event_pane_cp01_t1

0xe084,	// (0x00094038) list_single_recal_day_pane_t1_ParamLimits

0xe096,	// (0x0009404a) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00095df6) list_single_recal_day_pane_t_ParamLimits

0xed01,	// (0x00094cb5) bg_notes_pane_ParamLimits

0xeda4,	// (0x00094d58) list_notes_pane_ParamLimits

0x15eb,	// (0x0008759f) scroll_pane_cp06_ParamLimits

0xedc6,	// (0x00094d7a) main_notes_pane_ParamLimits

0xe67b,	// (0x0009462f) main_welc_pane

0xb196,	// (0x0009114a) main_welc_body_pane_ParamLimits

0xb196,	// (0x0009114a) main_welc_body_pane

0xb1b4,	// (0x00091168) main_welc_opti_pane_ParamLimits

0xb1b4,	// (0x00091168) main_welc_opti_pane

0xb1f9,	// (0x000911ad) main_welc_pane_t1_ParamLimits

0xb1f9,	// (0x000911ad) main_welc_pane_t1

0xb217,	// (0x000911cb) main_welc_body_row_pane_ParamLimits

0xb217,	// (0x000911cb) main_welc_body_row_pane

0xe632,	// (0x000945e6) main_welc_opti_row_pane_ParamLimits

0xe632,	// (0x000945e6) main_welc_opti_row_pane

0xe640,	// (0x000945f4) main_welc_opti_row_pane_g1

0xb22b,	// (0x000911df) main_welc_opti_row_pane_t1

0xe648,	// (0x000945fc) main_welc_body_row_pane_t1

0xe311,	// (0x000942c5) popup_notif_wgt_heading_pane

0xe32b,	// (0x000942df) aid_size_list_notif_wgt_del_ParamLimits

0xe338,	// (0x000942ec) list_notif_wgt_row_pane_g1_ParamLimits

0xe344,	// (0x000942f8) list_notif_wgt_row_pane_g2_ParamLimits

0xe358,	// (0x0009430c) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00095e5d) list_notif_wgt_row_pane_g_ParamLimits

0xe365,	// (0x00094319) list_notif_wgt_row_pane_t1_ParamLimits

0xe37b,	// (0x0009432f) list_notif_wgt_row_pane_t2_ParamLimits

0xe38d,	// (0x00094341) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00095e64) list_notif_wgt_row_pane_t_ParamLimits

0xac7c,	// (0x00090c30) listrow_wgtman_pane_g1_ParamLimits

0xac89,	// (0x00090c3d) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00095e8d) listrow_wgtman_pane_g_ParamLimits

0x0f64,	// (0x00086f18) listrow_wgtman_pane_t1_ParamLimits

0x0f7c,	// (0x00086f30) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00095e92) listrow_wgtman_pane_t_ParamLimits

0x0fa2,	// (0x00086f56) wait_bar_pane_cp09_ParamLimits

0xe67b,	// (0x0009462f) bg_popup_heading_pane_cp02

0xe657,	// (0x0009460b) popup_notif_wgt_heading_pane_g1

0xe65f,	// (0x00094613) popup_notif_wgt_heading_pane_t1

0xe67b,	// (0x0009462f) main_vids_pane

0xe67b,	// (0x0009462f) vids_listscroll_pane

0xb23a,	// (0x000911ee) scroll_pane_cp040

0xe67b,	// (0x0009462f) vids_list_pane

0xb245,	// (0x000911f9) vids_list_double_pane_ParamLimits

0xb245,	// (0x000911f9) vids_list_double_pane

0xb256,	// (0x0009120a) vids_list_double_pane_g1

0xb25f,	// (0x00091213) vids_list_double_pane_t1

0xb26f,	// (0x00091223) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00095f16) vids_list_double_pane_t

0xe685,	// (0x00094639) main_ncimui_pane_ParamLimits

0x9b32,	// (0x0008fae6) main_ncimui_pane_g1_ParamLimits

0x9b3e,	// (0x0008faf2) main_ncimui_pane_g2_ParamLimits

0x9b3e,	// (0x0008faf2) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00095b9e) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00095b9e) main_ncimui_pane_g

0xb1cf,	// (0x00091183) main_welc_pane_g1_ParamLimits

0xb1cf,	// (0x00091183) main_welc_pane_g1

0xb1e4,	// (0x00091198) main_welc_pane_g2_ParamLimits

0xb1e4,	// (0x00091198) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00095f11) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00095f11) main_welc_pane_g

0xed01,	// (0x00094cb5) listscroll_mce_pane_ParamLimits

0x3f2d,	// (0x00089ee1) wait_bar_pane_cp10

0xb57d,	// (0x00091531) main_cale_day_pane_ParamLimits

0xb57d,	// (0x00091531) main_cale_week_pane_ParamLimits

0xed01,	// (0x00094cb5) main_messa_pane_ParamLimits

0x772d,	// (0x0008d6e1) main_clock2_btn_pane_ParamLimits

0x772d,	// (0x0008d6e1) main_clock2_btn_pane

0xbef0,	// (0x00091ea4) main_clock2_btn_pane_cp01_ParamLimits

0xbef0,	// (0x00091ea4) main_clock2_btn_pane_cp01

0xde1f,	// (0x00093dd3) list_cale_mrui_pane_ParamLimits

0xe3c3,	// (0x00094377) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00095e6b) main_cf0_pane_g

0xae68,	// (0x00090e1c) area_left_week_number_pane_ParamLimits

0xae74,	// (0x00090e28) area_top_day_name_pane_ParamLimits

0xae87,	// (0x00090e3b) frame_month_view_pane_ParamLimits

0xe4eb,	// (0x0009449f) grid_month_view_pane_ParamLimits

0xe4f9,	// (0x000944ad) frm_month_g1_ParamLimits

0xaf08,	// (0x00090ebc) frm_month_g2_ParamLimits

0xaf1b,	// (0x00090ecf) frm_month_g3_ParamLimits

0xaf2e,	// (0x00090ee2) frm_month_g4_ParamLimits

0xaf41,	// (0x00090ef5) frm_month_g5_ParamLimits

0xaf54,	// (0x00090f08) frm_month_g6_ParamLimits

0xaf67,	// (0x00090f1b) frm_month_g7_ParamLimits

0xe506,	// (0x000944ba) frm_month_g8_ParamLimits

0xaf7a,	// (0x00090f2e) frm_month_g9_ParamLimits

0xaf8a,	// (0x00090f3e) frm_month_g10_ParamLimits

0xaf9a,	// (0x00090f4e) frm_month_g11_ParamLimits

0xafaa,	// (0x00090f5e) frm_month_g12_ParamLimits

0xafbc,	// (0x00090f70) frm_month_g13_ParamLimits

0xafce,	// (0x00090f82) frm_month_g14_ParamLimits

0xafe2,	// (0x00090f96) frm_month_g15_ParamLimits

0xaff6,	// (0x00090faa) frm_month_g16_ParamLimits

0xff08,	// (0x00095ebc) frm_month_g_ParamLimits

0xe513,	// (0x000944c7) cell_top_day_name_pane_t1_ParamLimits

0xb00a,	// (0x00090fbe) cell_area_left_week_number_pane_g1_ParamLimits

0xb016,	// (0x00090fca) cell_area_left_week_number_pane_t1_ParamLimits

0xbd10,	// (0x00091cc4) cell_month_view_pane_g1_ParamLimits

0xb029,	// (0x00090fdd) cell_month_view_pane_t1_ParamLimits

0xecf9,	// (0x00094cad) main_clock2_btn_pane_g1

0xe66d,	// (0x00094621) main_clock2_btn_pane_t1

0xe685,	// (0x00094639) listscroll_cmail_pane_ParamLimits

0xda78,	// (0x00093a2c) main_sp_fs_email_pane_g1_ParamLimits

0xda84,	// (0x00093a38) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00095c99) main_sp_fs_email_pane_g_ParamLimits

0xdfe3,	// (0x00093f97) list_recal_day_pane_ParamLimits

0xdff4,	// (0x00093fa8) mian_recal_day_pane_t1

0x0ae2,	// (0x00086a96) list_single_dyc_row_text_pane_t4_ParamLimits

0x0ae2,	// (0x00086a96) list_single_dyc_row_text_pane_t4

0x0b2b,	// (0x00086adf) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b2b,	// (0x00086adf) list_single_dyc_row_text_pane_t5

0xdb2a,	// (0x00093ade) list_single_dyc_row_text_pane_t6_ParamLimits

0xdb2a,	// (0x00093ade) list_single_dyc_row_text_pane_t6

0x354c,	// (0x00089500) aid_mgn_list_cale_time_pane

0xe685,	// (0x00094639) main_gallery2_pane_ParamLimits

0xbf06,	// (0x00091eba) main_clock2_pane_cp01_t1

0xbf16,	// (0x00091eca) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x00095778) main_clock2_pane_cp01_t

0x1997,	// (0x0008794b) cale_week_scroll_pane_g16_ParamLimits

0x1997,	// (0x0008794b) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
