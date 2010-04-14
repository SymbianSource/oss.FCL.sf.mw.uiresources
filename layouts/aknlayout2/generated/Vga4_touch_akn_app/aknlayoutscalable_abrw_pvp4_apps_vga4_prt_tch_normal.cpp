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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001ec93 };

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
0x20ba,	// (0x00020d4d) Screen

0x20c6,	// (0x00020d59) application_window

0x2106,	// (0x00020d99) area_bottom_pane_ParamLimits

0x2106,	// (0x00020d99) area_bottom_pane

0x213b,	// (0x00020dce) area_top_pane_ParamLimits

0x213b,	// (0x00020dce) area_top_pane

0x9c41,	// (0x000288d4) call_video_uplink_pane_ParamLimits

0x9c41,	// (0x000288d4) call_video_uplink_pane

0x21ca,	// (0x00020e5d) main_pane_ParamLimits

0x21ca,	// (0x00020e5d) main_pane

0xc368,	// (0x0002affb) context_pane

0x5577,	// (0x0002420a) navi_pane

0x559b,	// (0x0002422e) popup_cale_events_window_ParamLimits

0x559b,	// (0x0002422e) popup_cale_events_window

0xc37b,	// (0x0002b00e) popup_mup_playback_window

0x55b3,	// (0x00024246) signal_pane

0xa392,	// (0x00029025) main_browser_pane

0xae96,	// (0x00029b29) main_burst_pane

0x5429,	// (0x000240bc) main_calc_pane

0xc30b,	// (0x0002af9e) main_cale_day_pane

0x2743,	// (0x000213d6) main_cale_month_pane

0xc30b,	// (0x0002af9e) main_cale_week_pane

0xae96,	// (0x00029b29) main_call_pane

0xa072,	// (0x00028d05) main_call_poc_pane

0xae96,	// (0x00029b29) main_camera_pane

0xae96,	// (0x00029b29) main_chi_dic_pane

0xad38,	// (0x000299cb) main_clock_pane

0xa072,	// (0x00028d05) main_fmradio_pane

0xae96,	// (0x00029b29) main_graph_messa_pane

0xa072,	// (0x00028d05) main_help_pane

0xa392,	// (0x00029025) main_im_pane

0xa2cd,	// (0x00028f60) main_image_pane_ParamLimits

0xa2cd,	// (0x00028f60) main_image_pane

0xa072,	// (0x00028d05) main_location2_pane

0xae96,	// (0x00029b29) main_location_pane

0xa2cd,	// (0x00028f60) main_messa_pane

0xa072,	// (0x00028d05) main_mp2_pane

0xae96,	// (0x00029b29) main_mp_pane

0xa072,	// (0x00028d05) main_msg_pane

0xa072,	// (0x00028d05) main_mup_eq_pane

0xa072,	// (0x00028d05) main_mup_pane

0xa392,	// (0x00029025) main_notes_pane

0xa072,	// (0x00028d05) main_pec_pane

0xa072,	// (0x00028d05) main_phob_pane

0xa072,	// (0x00028d05) main_pinb_pane

0xa072,	// (0x00028d05) main_postcard_pane

0xa072,	// (0x00028d05) main_qdial_pane

0xae96,	// (0x00029b29) main_skin_pane

0xa072,	// (0x00028d05) main_smil2_pane

0xae96,	// (0x00029b29) main_smil_pane

0xae96,	// (0x00029b29) main_video_pane

0xae96,	// (0x00029b29) main_video_tele_pane

0xa2cd,	// (0x00028f60) main_viewer_pane_ParamLimits

0xa2cd,	// (0x00028f60) main_viewer_pane

0xae96,	// (0x00029b29) main_vorec_pane

0x5461,	// (0x000240f4) popup_blid_sat_info_window_ParamLimits

0x5461,	// (0x000240f4) popup_blid_sat_info_window

0x547b,	// (0x0002410e) popup_dyc_status_message_window_ParamLimits

0x547b,	// (0x0002410e) popup_dyc_status_message_window

0x548b,	// (0x0002411e) popup_grid_large_graphic_window_ParamLimits

0x548b,	// (0x0002411e) popup_grid_large_graphic_window

0x5503,	// (0x00024196) popup_loc_request_window_ParamLimits

0x5503,	// (0x00024196) popup_loc_request_window

0x554b,	// (0x000241de) popup_wml_address_window_ParamLimits

0x554b,	// (0x000241de) popup_wml_address_window

0x5301,	// (0x00023f94) call_muted_g1

0x4fc0,	// (0x00023c53) popup_call_audio_conf_window_ParamLimits

0x4fc0,	// (0x00023c53) popup_call_audio_conf_window

0x5311,	// (0x00023fa4) popup_call_audio_first_window_ParamLimits

0x5311,	// (0x00023fa4) popup_call_audio_first_window

0x5351,	// (0x00023fe4) popup_call_audio_in_window_ParamLimits

0x5351,	// (0x00023fe4) popup_call_audio_in_window

0x5375,	// (0x00024008) popup_call_audio_out_window_ParamLimits

0x5375,	// (0x00024008) popup_call_audio_out_window

0x5397,	// (0x0002402a) popup_call_audio_second_window_ParamLimits

0x5397,	// (0x0002402a) popup_call_audio_second_window

0x53c7,	// (0x0002405a) popup_call_audio_wait_window_ParamLimits

0x53c7,	// (0x0002405a) popup_call_audio_wait_window

0x53e8,	// (0x0002407b) popup_number_entry_window_ParamLimits

0x53e8,	// (0x0002407b) popup_number_entry_window

0x9c5f,	// (0x000288f2) bg_popup_call_pane_cp05_ParamLimits

0x9c5f,	// (0x000288f2) bg_popup_call_pane_cp05

0x9c7f,	// (0x00028912) popup_number_entry_window_t1

0x9c92,	// (0x00028925) popup_number_entry_window_t2

0x9ca4,	// (0x00028937) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0002dd59) popup_number_entry_window_t

0x9cb6,	// (0x00028949) text_title_cp2

0x9cc9,	// (0x0002895c) bg_popup_call_pane_cp_ParamLimits

0x9cc9,	// (0x0002895c) bg_popup_call_pane_cp

0x9cd7,	// (0x0002896a) call_thumbnail_pane

0x9cdf,	// (0x00028972) popup_call_audio_in_window_g1_ParamLimits

0x9cdf,	// (0x00028972) popup_call_audio_in_window_g1

0x9ceb,	// (0x0002897e) popup_call_audio_in_window_g2_ParamLimits

0x9ceb,	// (0x0002897e) popup_call_audio_in_window_g2

0x9cf7,	// (0x0002898a) popup_call_audio_in_window_g3_ParamLimits

0x9cf7,	// (0x0002898a) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0002dd62) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0002dd62) popup_call_audio_in_window_g

0x9d03,	// (0x00028996) popup_call_audio_in_window_t1_ParamLimits

0x9d03,	// (0x00028996) popup_call_audio_in_window_t1

0x9d1f,	// (0x000289b2) popup_call_audio_in_window_t2_ParamLimits

0x9d1f,	// (0x000289b2) popup_call_audio_in_window_t2

0x9d3b,	// (0x000289ce) popup_call_audio_in_window_t3_ParamLimits

0x9d3b,	// (0x000289ce) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0002dd69) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0002dd69) popup_call_audio_in_window_t

0x9cc9,	// (0x0002895c) bg_popup_call_pane_cp01_ParamLimits

0x9cc9,	// (0x0002895c) bg_popup_call_pane_cp01

0x9cd7,	// (0x0002896a) call_thumbnail_pane_cp02

0x9d4e,	// (0x000289e1) call_type_pane_cp022

0x9d56,	// (0x000289e9) popup_call_audio_out_window_g1_ParamLimits

0x9d56,	// (0x000289e9) popup_call_audio_out_window_g1

0x9d68,	// (0x000289fb) popup_call_audio_out_window_g2_ParamLimits

0x9d68,	// (0x000289fb) popup_call_audio_out_window_g2

0x9d74,	// (0x00028a07) popup_call_audio_out_window_g3_ParamLimits

0x9d74,	// (0x00028a07) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0002dd70) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0002dd70) popup_call_audio_out_window_g

0x9d86,	// (0x00028a19) popup_call_audio_out_window_t1_ParamLimits

0x9d86,	// (0x00028a19) popup_call_audio_out_window_t1

0x9d9e,	// (0x00028a31) popup_call_audio_out_window_t2_ParamLimits

0x9d9e,	// (0x00028a31) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0002dd77) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0002dd77) popup_call_audio_out_window_t

0x9db3,	// (0x00028a46) bg_popup_call_pane_ParamLimits

0x9db3,	// (0x00028a46) bg_popup_call_pane

0x23ce,	// (0x00021061) call_thumbnail_pane_cp_ParamLimits

0x23ce,	// (0x00021061) call_thumbnail_pane_cp

0x9e37,	// (0x00028aca) call_type_pane_cp01_ParamLimits

0x9e37,	// (0x00028aca) call_type_pane_cp01

0x9e7b,	// (0x00028b0e) popup_call_audio_first_window_g1_ParamLimits

0x9e7b,	// (0x00028b0e) popup_call_audio_first_window_g1

0x9ec7,	// (0x00028b5a) popup_call_audio_first_window_g2_ParamLimits

0x9ec7,	// (0x00028b5a) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0002dd7c) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0002dd7c) popup_call_audio_first_window_g

0x9f0b,	// (0x00028b9e) popup_call_audio_first_window_t1_ParamLimits

0x9f0b,	// (0x00028b9e) popup_call_audio_first_window_t1

0x9fb7,	// (0x00028c4a) popup_call_audio_first_window_t4_ParamLimits

0x9fb7,	// (0x00028c4a) popup_call_audio_first_window_t4

0xa043,	// (0x00028cd6) popup_call_audio_first_window_t5_ParamLimits

0xa043,	// (0x00028cd6) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0002dd81) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0002dd81) popup_call_audio_first_window_t

0xa072,	// (0x00028d05) bg_popup_call_pane_cp02

0xa07c,	// (0x00028d0f) call_type_pane_cp023

0xa084,	// (0x00028d17) popup_call_audio_wait_window_g1

0xa08c,	// (0x00028d1f) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002dd88) popup_call_audio_wait_window_g

0xa094,	// (0x00028d27) popup_call_audio_wait_window_t3

0xa0a2,	// (0x00028d35) bg_popup_call_pane_cp03_ParamLimits

0xa0a2,	// (0x00028d35) bg_popup_call_pane_cp03

0xa102,	// (0x00028d95) call_thumbnail_pane_cp011_ParamLimits

0xa102,	// (0x00028d95) call_thumbnail_pane_cp011

0xa10e,	// (0x00028da1) call_type_pane_cp034_ParamLimits

0xa10e,	// (0x00028da1) call_type_pane_cp034

0xa14a,	// (0x00028ddd) popup_call_audio_second_window_g1_ParamLimits

0xa14a,	// (0x00028ddd) popup_call_audio_second_window_g1

0xa186,	// (0x00028e19) popup_call_audio_second_window_g2_ParamLimits

0xa186,	// (0x00028e19) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0002dd8d) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0002dd8d) popup_call_audio_second_window_g

0xa1c2,	// (0x00028e55) popup_call_audio_second_window_t1_ParamLimits

0xa1c2,	// (0x00028e55) popup_call_audio_second_window_t1

0xa243,	// (0x00028ed6) popup_call_audio_second_window_t2_ParamLimits

0xa243,	// (0x00028ed6) popup_call_audio_second_window_t2

0xa279,	// (0x00028f0c) popup_call_audio_second_window_t3_ParamLimits

0xa279,	// (0x00028f0c) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0002dd92) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0002dd92) popup_call_audio_second_window_t

0xa072,	// (0x00028d05) bg_popup_call_pane_cp04

0xa2af,	// (0x00028f42) list_conf_pane

0xa2b7,	// (0x00028f4a) popup_call_audio_conf_window_t1

0xa2c5,	// (0x00028f58) call_thumbnail_pane_g1

0xa2cd,	// (0x00028f60) bg_pinb_pane_ParamLimits

0xa2cd,	// (0x00028f60) bg_pinb_pane

0xa2db,	// (0x00028f6e) find_pinb_pane

0xa2e4,	// (0x00028f77) listscroll_pinb_pane_ParamLimits

0xa2e4,	// (0x00028f77) listscroll_pinb_pane

0xa2f3,	// (0x00028f86) pinb_bg_pane_g1

0x23f2,	// (0x00021085) pinb_bg_pane_g2

0x23fe,	// (0x00021091) pinb_bg_pane_g3

0x240a,	// (0x0002109d) pinb_bg_pane_g4

0x2416,	// (0x000210a9) pinb_bg_pane_g5

0x2422,	// (0x000210b5) pinb_bg_pane_g6

0x242d,	// (0x000210c0) pinb_bg_pane_g7

0x2438,	// (0x000210cb) pinb_bg_pane_g8

0x2443,	// (0x000210d6) pinb_bg_pane_g9

0x244d,	// (0x000210e0) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0002dd99) pinb_bg_pane_g

0x246a,	// (0x000210fd) grid_pinb_pane

0x2475,	// (0x00021108) list_pinb_pane

0x2480,	// (0x00021113) scroll_pane_cp01_ParamLimits

0x2480,	// (0x00021113) scroll_pane_cp01

0xa2fd,	// (0x00028f90) find_pinb_pane_g1_ParamLimits

0xa2fd,	// (0x00028f90) find_pinb_pane_g1

0xa315,	// (0x00028fa8) find_pinb_pane_t1

0xa327,	// (0x00028fba) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0002ddb3) find_pinb_pane_t

0xa33c,	// (0x00028fcf) input_focus_pane_cp01_ParamLimits

0xa33c,	// (0x00028fcf) input_focus_pane_cp01

0x2492,	// (0x00021125) cell_pinb_pane_ParamLimits

0x2492,	// (0x00021125) cell_pinb_pane

0x24b7,	// (0x0002114a) cell_pinb_pane_g1_ParamLimits

0x24b7,	// (0x0002114a) cell_pinb_pane_g1

0x24cc,	// (0x0002115f) cell_pinb_pane_g2_ParamLimits

0x24cc,	// (0x0002115f) cell_pinb_pane_g2

0xa348,	// (0x00028fdb) cell_pinb_pane_g3_ParamLimits

0xa348,	// (0x00028fdb) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0002ddb8) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0002ddb8) cell_pinb_pane_g

0xa072,	// (0x00028d05) grid_highlight_pane_cp01

0x24d8,	// (0x0002116b) list_pinb_item_pane_ParamLimits

0x24d8,	// (0x0002116b) list_pinb_item_pane

0xa072,	// (0x00028d05) list_highlight_pane_cp02

0x24f6,	// (0x00021189) list_pinb_item_pane_g1_ParamLimits

0x24f6,	// (0x00021189) list_pinb_item_pane_g1

0x2503,	// (0x00021196) list_pinb_item_pane_g2_ParamLimits

0x2503,	// (0x00021196) list_pinb_item_pane_g2

0x250f,	// (0x000211a2) list_pinb_item_pane_g3_ParamLimits

0x250f,	// (0x000211a2) list_pinb_item_pane_g3

0x2520,	// (0x000211b3) list_pinb_item_pane_g4_ParamLimits

0x2520,	// (0x000211b3) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0002ddbf) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0002ddbf) list_pinb_item_pane_g

0x252c,	// (0x000211bf) list_pinb_item_pane_t1_ParamLimits

0x252c,	// (0x000211bf) list_pinb_item_pane_t1

0x0aeb,	// (0x0001f77e) calc_display_pane

0x0b09,	// (0x0001f79c) calc_paper_pane

0x0b25,	// (0x0001f7b8) grid_calc_pane

0xa072,	// (0x00028d05) bg_list_pane_cp01

0x2543,	// (0x000211d6) clock_g1

0x254b,	// (0x000211de) clock_g2

0x0001,

0xf135,	// (0x0002ddc8) clock_g

0x2555,	// (0x000211e8) clock_t1_ParamLimits

0x2555,	// (0x000211e8) clock_t1

0x256a,	// (0x000211fd) clock_t2_ParamLimits

0x256a,	// (0x000211fd) clock_t2

0x257c,	// (0x0002120f) clock_t3_ParamLimits

0x257c,	// (0x0002120f) clock_t3

0x258e,	// (0x00021221) clock_t4_ParamLimits

0x258e,	// (0x00021221) clock_t4

0x25a0,	// (0x00021233) clock_t5_ParamLimits

0x25a0,	// (0x00021233) clock_t5

0x25b5,	// (0x00021248) clock_t6_ParamLimits

0x25b5,	// (0x00021248) clock_t6

0x25c7,	// (0x0002125a) clock_t7_ParamLimits

0x25c7,	// (0x0002125a) clock_t7

0x25d9,	// (0x0002126c) clock_t8_ParamLimits

0x25d9,	// (0x0002126c) clock_t8

0x25ef,	// (0x00021282) clock_t9_ParamLimits

0x25ef,	// (0x00021282) clock_t9

0x0008,

0xf13a,	// (0x0002ddcd) clock_t_ParamLimits

0xf13a,	// (0x0002ddcd) clock_t

0xa354,	// (0x00028fe7) popup_clock_analogue_window_cp02

0xa354,	// (0x00028fe7) popup_clock_digital_window_cp01

0xa35c,	// (0x00028fef) listscroll_help_pane

0xa072,	// (0x00028d05) phob_pre_status_pane

0xa366,	// (0x00028ff9) grid_qdial_pane

0xa2cd,	// (0x00028f60) listscroll_mce_pane

0xa2cd,	// (0x00028f60) bg_notes_pane

0xa370,	// (0x00029003) list_notes_pane

0x2605,	// (0x00021298) scroll_pane_cp06

0xa37e,	// (0x00029011) bg_calc_paper_pane

0x0b5b,	// (0x0001f7ee) list_calc_pane

0xa392,	// (0x00029025) bg_calc_display_pane

0x0b75,	// (0x0001f808) calc_display_pane_t1

0x0b8a,	// (0x0001f81d) calc_display_pane_t2

0x0b9f,	// (0x0001f832) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0002dde0) calc_display_pane_t

0x0bb1,	// (0x0001f844) cell_calc_pane_ParamLimits

0x0bb1,	// (0x0001f844) cell_calc_pane

0xa39e,	// (0x00029031) bg_calc_paper_pane_g1

0xa3aa,	// (0x0002903d) bg_calc_paper_pane_g2

0xa3b6,	// (0x00029049) bg_calc_paper_pane_g3

0xa3c2,	// (0x00029055) bg_calc_paper_pane_g4

0xa3ce,	// (0x00029061) bg_calc_paper_pane_g5

0x2614,	// (0x000212a7) bg_calc_paper_pane_g6

0x2625,	// (0x000212b8) bg_calc_paper_pane_g7

0x2636,	// (0x000212c9) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0002dde7) bg_calc_paper_pane_g

0x2649,	// (0x000212dc) calc_bg_paper_pane_g9

0x265c,	// (0x000212ef) list_calc_item_pane_ParamLimits

0x265c,	// (0x000212ef) list_calc_item_pane

0xa3da,	// (0x0002906d) list_calc_item_pane_g1

0x0be0,	// (0x0001f873) list_calc_item_pane_t1_ParamLimits

0x0be0,	// (0x0001f873) list_calc_item_pane_t1

0x0bf2,	// (0x0001f885) list_calc_item_pane_t2_ParamLimits

0x0bf2,	// (0x0001f885) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0002ddf8) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0002ddf8) list_calc_item_pane_t

0xa3e7,	// (0x0002907a) cell_calc_pane_g1

0xa3f1,	// (0x00029084) grid_highlight_pane_cp02

0xa413,	// (0x000290a6) bg_calc_display_pane_g1

0x0c22,	// (0x0001f8b5) bg_calc_display_pane_g2

0xa41c,	// (0x000290af) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0002de02) bg_calc_display_pane_g

0x0c2c,	// (0x0001f8bf) cell_qdial_pane_ParamLimits

0x0c2c,	// (0x0001f8bf) cell_qdial_pane

0x267d,	// (0x00021310) cell_qdial_pane_g1_ParamLimits

0x267d,	// (0x00021310) cell_qdial_pane_g1

0x268a,	// (0x0002131d) cell_qdial_pane_g2_ParamLimits

0x268a,	// (0x0002131d) cell_qdial_pane_g2

0xa425,	// (0x000290b8) cell_qdial_pane_g3_ParamLimits

0xa425,	// (0x000290b8) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0002de09) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0002de09) cell_qdial_pane_g

0x26a8,	// (0x0002133b) cell_qdial_pane_t1_ParamLimits

0x26a8,	// (0x0002133b) cell_qdial_pane_t1

0x26c0,	// (0x00021353) cell_qdial_pane_t2_ParamLimits

0x26c0,	// (0x00021353) cell_qdial_pane_t2

0x26d3,	// (0x00021366) cell_qdial_pane_t3_ParamLimits

0x26d3,	// (0x00021366) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0002de12) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0002de12) cell_qdial_pane_t

0xa072,	// (0x00028d05) grid_highlight_pane_cp04

0xa431,	// (0x000290c4) thumbnail_qdial_pane_ParamLimits

0xa431,	// (0x000290c4) thumbnail_qdial_pane

0xa48d,	// (0x00029120) list_help_pane

0xa496,	// (0x00029129) scroll_pane_cp02

0x26e6,	// (0x00021379) help_list_pane_t1_ParamLimits

0x26e6,	// (0x00021379) help_list_pane_t1

0x0c42,	// (0x0001f8d5) bg_notes_pane_g2

0x0c4a,	// (0x0001f8dd) bg_notes_pane_g3

0x0c52,	// (0x0001f8e5) notes_bg_pane_g1

0x0c5a,	// (0x0001f8ed) notes_bg_pane_g4

0x0c62,	// (0x0001f8f5) notes_bg_pane_g5

0x0c6a,	// (0x0001f8fd) notes_bg_pane_g6

0x0c72,	// (0x0001f905) notes_bg_pane_g7

0x0c7a,	// (0x0001f90d) notes_bg_pane_g8

0x0c82,	// (0x0001f915) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0002de30) notes_bg_pane_g

0x270d,	// (0x000213a0) list_notes_text_pane_ParamLimits

0x270d,	// (0x000213a0) list_notes_text_pane

0xa49f,	// (0x00029132) list_notes_text_pane_g1

0x2735,	// (0x000213c8) list_notes_text_pane_t1

0x2743,	// (0x000213d6) listscroll_cale_week_pane

0x2779,	// (0x0002140c) bg_cale_heading_pane

0xa4b9,	// (0x0002914c) bg_cale_pane_cp01

0x27a2,	// (0x00021435) cale_week_corner_pane

0x27c1,	// (0x00021454) cale_week_day_heading_pane

0x27ef,	// (0x00021482) cale_week_scroll_pane_g1

0x2813,	// (0x000214a6) cale_week_scroll_pane_g2

0x282b,	// (0x000214be) cale_week_scroll_pane_g3

0x2843,	// (0x000214d6) cale_week_scroll_pane_g4

0x285b,	// (0x000214ee) cale_week_scroll_pane_g5

0x2873,	// (0x00021506) cale_week_scroll_pane_g6

0x2893,	// (0x00021526) cale_week_scroll_pane_g7

0x28b3,	// (0x00021546) cale_week_scroll_pane_g8

0x28d3,	// (0x00021566) cale_week_scroll_pane_g9

0x28f0,	// (0x00021583) cale_week_scroll_pane_g10

0x290d,	// (0x000215a0) cale_week_scroll_pane_g11

0x292a,	// (0x000215bd) cale_week_scroll_pane_g12

0x2947,	// (0x000215da) cale_week_scroll_pane_g13

0x296c,	// (0x000215ff) cale_week_scroll_pane_g14

0x2995,	// (0x00021628) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0002de3f) cale_week_scroll_pane_g

0x29de,	// (0x00021671) cale_week_time_pane

0x29fe,	// (0x00021691) grid_cale_week_pane

0xa4e9,	// (0x0002917c) scroll_pane_cp08

0x2a31,	// (0x000216c4) cell_cale_week_pane_ParamLimits

0x2a31,	// (0x000216c4) cell_cale_week_pane

0x2ac1,	// (0x00021754) cale_week_day_heading_pane_t1

0x2b09,	// (0x0002179c) cale_week_day_heading_pane_t2

0x2b56,	// (0x000217e9) cale_week_day_heading_pane_t3

0x2ba3,	// (0x00021836) cale_week_day_heading_pane_t4

0x2bf0,	// (0x00021883) cale_week_day_heading_pane_t5

0x2c3d,	// (0x000218d0) cale_week_day_heading_pane_t6

0x2c8a,	// (0x0002191d) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0002de60) cale_week_day_heading_pane_t

0xa50b,	// (0x0002919e) bg_cale_side_pane

0x0c8a,	// (0x0001f91d) cale_week_time_pane_t1

0x0cce,	// (0x0001f961) cale_week_time_pane_t2

0x0d12,	// (0x0001f9a5) cale_week_time_pane_t3

0x0d56,	// (0x0001f9e9) cale_week_time_pane_t4

0x0d9a,	// (0x0001fa2d) cale_week_time_pane_t5

0x0dde,	// (0x0001fa71) cale_week_time_pane_t6

0x0e22,	// (0x0001fab5) cale_week_time_pane_t7

0x0e6e,	// (0x0001fb01) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0002de6f) cale_week_time_pane_t

0x2cd2,	// (0x00021965) cell_cale_week_pane_g2

0x2cf6,	// (0x00021989) cell_cale_week_pane_g3_ParamLimits

0x2cf6,	// (0x00021989) cell_cale_week_pane_g3

0xa519,	// (0x000291ac) grid_highlight_pane_cp07

0xa521,	// (0x000291b4) listscroll_gms_pane

0xa52b,	// (0x000291be) grid_gms_pane

0xa534,	// (0x000291c7) listscroll_gms_pane_g1

0xa53c,	// (0x000291cf) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0002de80) listscroll_gms_pane_g

0x2d0e,	// (0x000219a1) scroll_pane_cp010

0x2d19,	// (0x000219ac) cell_gms_pane_ParamLimits

0x2d19,	// (0x000219ac) cell_gms_pane

0x2d2c,	// (0x000219bf) cell_gms_pane_g1

0xa544,	// (0x000291d7) cell_gms_pane_g2

0xa54c,	// (0x000291df) cell_gms_pane_g3

0xa555,	// (0x000291e8) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0002de85) cell_gms_pane_g

0xa55e,	// (0x000291f1) grid_highlight_pane_cp09

0x52a9,	// (0x00023f3c) phob_pre_status_pane_g1

0x52b1,	// (0x00023f44) phob_pre_status_pane_g2

0x52b9,	// (0x00023f4c) phob_pre_status_pane_g3

0x52c1,	// (0x00023f54) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002e274) phob_pre_status_pane_g

0x52d1,	// (0x00023f64) phob_pre_status_pane_t1

0x52e1,	// (0x00023f74) phob_pre_status_pane_t2

0x52f1,	// (0x00023f84) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002e27f) phob_pre_status_pane_t

0xa072,	// (0x00028d05) bg_list_pane_cp05

0x0ec4,	// (0x0001fb57) grid_vorec_pane

0x0ed0,	// (0x0001fb63) vorec_t1

0x0ede,	// (0x0001fb71) vorec_t2

0x0eec,	// (0x0001fb7f) vorec_t3

0x0efa,	// (0x0001fb8d) vorec_t4

0x0f08,	// (0x0001fb9b) vorec_t5

0x0f16,	// (0x0001fba9) vorec_t6

0x0006,

0xf1fb,	// (0x0002de8e) vorec_t

0x0f32,	// (0x0001fbc5) wait_bar_pane_cp01

0x2d34,	// (0x000219c7) cell_vorec_pane_ParamLimits

0x2d34,	// (0x000219c7) cell_vorec_pane

0x0f3a,	// (0x0001fbcd) cell_vorec_pane_g1

0xa072,	// (0x00028d05) grid_highlight_pane_cp05

0x2d57,	// (0x000219ea) cams_zoom_pane

0x2d63,	// (0x000219f6) image_vga_pane

0x2d72,	// (0x00021a05) main_camera_pane_g1

0x2d80,	// (0x00021a13) main_camera_pane_g2

0x2d8c,	// (0x00021a1f) main_camera_pane_g3

0x2d9a,	// (0x00021a2d) main_camera_pane_g4

0x2da8,	// (0x00021a3b) main_camera_pane_g5

0x2db6,	// (0x00021a49) main_camera_pane_g6

0x2dc4,	// (0x00021a57) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002de9d) main_camera_pane_g

0x2dd2,	// (0x00021a65) main_camera_pane_t1

0x2de4,	// (0x00021a77) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002deae) main_camera_pane_t

0x2e07,	// (0x00021a9a) cams_zoom_pane_cp_ParamLimits

0x2e07,	// (0x00021a9a) cams_zoom_pane_cp

0x2e2b,	// (0x00021abe) image_cif_pane_ParamLimits

0x2e2b,	// (0x00021abe) image_cif_pane

0x2e49,	// (0x00021adc) image_subqcif_pane

0x2e53,	// (0x00021ae6) main_video_pane_g1_ParamLimits

0x2e53,	// (0x00021ae6) main_video_pane_g1

0x2e73,	// (0x00021b06) main_video_pane_g2_ParamLimits

0x2e73,	// (0x00021b06) main_video_pane_g2

0x2ea3,	// (0x00021b36) main_video_pane_g3_ParamLimits

0x2ea3,	// (0x00021b36) main_video_pane_g3

0x2ecc,	// (0x00021b5f) main_video_pane_g4_ParamLimits

0x2ecc,	// (0x00021b5f) main_video_pane_g4

0x2ef5,	// (0x00021b88) main_video_pane_g5_ParamLimits

0x2ef5,	// (0x00021b88) main_video_pane_g5

0xa572,	// (0x00029205) main_video_pane_g6_ParamLimits

0xa572,	// (0x00029205) main_video_pane_g6

0x0006,

0xf220,	// (0x0002deb3) main_video_pane_g_ParamLimits

0xf220,	// (0x0002deb3) main_video_pane_g

0x2f17,	// (0x00021baa) main_video_pane_t1_ParamLimits

0x2f17,	// (0x00021baa) main_video_pane_t1

0xa58c,	// (0x0002921f) cams_zoom_pane_g1

0xa595,	// (0x00029228) cams_zoom_pane_g2

0xa59e,	// (0x00029231) cams_zoom_pane_g3

0xa5a7,	// (0x0002923a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002dec2) cams_zoom_pane_g

0x2f61,	// (0x00021bf4) grid_cams_pane

0x2f6f,	// (0x00021c02) linegrid_cams_pane

0x2f7b,	// (0x00021c0e) cell_cams_pane_ParamLimits

0x2f7b,	// (0x00021c0e) cell_cams_pane

0xa5b0,	// (0x00029243) cams_burst_image_pane

0xa5b8,	// (0x0002924b) cell_cams_pane_g1

0xa072,	// (0x00028d05) grid_highlight_pane_cp03

0xa3e7,	// (0x0002907a) mp_bg_pane_g1

0xa072,	// (0x00028d05) bg_list_pane_cp03

0xc22e,	// (0x0002aec1) bg_mp_pane

0xc236,	// (0x0002aec9) grid_mp_pane

0xc23e,	// (0x0002aed1) media_player_g1

0xc248,	// (0x0002aedb) media_player_t1

0xc256,	// (0x0002aee9) media_player_t2

0xc264,	// (0x0002aef7) media_player_t3

0xc272,	// (0x0002af05) media_player_t4

0xc280,	// (0x0002af13) media_player_t5

0xc28e,	// (0x0002af21) media_player_t6

0xc29c,	// (0x0002af2f) media_player_t7

0x0006,

0xf5cb,	// (0x0002e25e) media_player_t

0xc2aa,	// (0x0002af3d) wait_bar_pane_cp02

0xf5b0,	// (0x0002e243) main_usb_pane_t

0x52a0,	// (0x00023f33) cell_mp_pane

0xa3e7,	// (0x0002907a) cell_mp_pane_g1

0xa072,	// (0x00028d05) grid_highlight_pane_cp06

0xa5c0,	// (0x00029253) grid_skin_colour_pane

0xa5c8,	// (0x0002925b) list_highlight_pane_cp03

0x30a7,	// (0x00021d3a) skin_g1

0xa5d0,	// (0x00029263) skin_t1

0xa5ed,	// (0x00029280) skin_t2

0x0001,

0xf264,	// (0x0002def7) skin_t

0x30b1,	// (0x00021d44) cell_skin_colour_pane_ParamLimits

0x30b1,	// (0x00021d44) cell_skin_colour_pane

0xa5fb,	// (0x0002928e) cell_skin_colour_pane_g1

0x3131,	// (0x00021dc4) call_video_g1_ParamLimits

0x3131,	// (0x00021dc4) call_video_g1

0x3141,	// (0x00021dd4) call_video_g2_ParamLimits

0x3141,	// (0x00021dd4) call_video_g2

0x0001,

0xf269,	// (0x0002defc) call_video_g_ParamLimits

0xf269,	// (0x0002defc) call_video_g

0x3191,	// (0x00021e24) call_video_uplink_pane_cp1_ParamLimits

0x3191,	// (0x00021e24) call_video_uplink_pane_cp1

0xa60d,	// (0x000292a0) call_video_uplink_pane_cp2

0x325f,	// (0x00021ef2) video_down_crop_pane_ParamLimits

0x325f,	// (0x00021ef2) video_down_crop_pane

0x3351,	// (0x00021fe4) video_down_pane_ParamLimits

0x3351,	// (0x00021fe4) video_down_pane

0xa615,	// (0x000292a8) video_down_subqcif_pane_ParamLimits

0xa615,	// (0x000292a8) video_down_subqcif_pane

0xa62f,	// (0x000292c2) video_down_subqcif_pane_cp_ParamLimits

0xa62f,	// (0x000292c2) video_down_subqcif_pane_cp

0xa657,	// (0x000292ea) im_reading_pane_ParamLimits

0xa657,	// (0x000292ea) im_reading_pane

0x346e,	// (0x00022101) im_writing_pane_ParamLimits

0x346e,	// (0x00022101) im_writing_pane

0x348c,	// (0x0002211f) im_reading_pane_t1

0xa671,	// (0x00029304) list_im_pane

0xa682,	// (0x00029315) scroll_pane_cp07

0x34ce,	// (0x00022161) im_writing_pane_t1_ParamLimits

0x34ce,	// (0x00022161) im_writing_pane_t1

0xa69b,	// (0x0002932e) im_writing_pane_t2_ParamLimits

0xa69b,	// (0x0002932e) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002df06) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002df06) im_writing_pane_t

0xa072,	// (0x00028d05) input_focus_pane_cp04

0xa072,	// (0x00028d05) input_focus_pane_cp05

0x34e0,	// (0x00022173) list_im_single_pane_ParamLimits

0x34e0,	// (0x00022173) list_im_single_pane

0x34f9,	// (0x0002218c) list_single_im_pane_t1

0x5264,	// (0x00023ef7) blid_accuracy_pane

0x526c,	// (0x00023eff) blid_compass_pane

0x5276,	// (0x00023f09) main_location_t1

0x5284,	// (0x00023f17) main_location_t2

0x5292,	// (0x00023f25) main_location_t3

0x0002,

0xf5da,	// (0x0002e26d) main_location_t

0xa072,	// (0x00028d05) aid_levels_location

0xa3e7,	// (0x0002907a) blid_accuracy_pane_g1

0xa3e7,	// (0x0002907a) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002df68) blid_accuracy_pane_g

0xa6e3,	// (0x00029376) wml_content_pane

0xa721,	// (0x000293b4) wml_button_pane_ParamLimits

0xa721,	// (0x000293b4) wml_button_pane

0x3508,	// (0x0002219b) wml_list_single_large_pane_ParamLimits

0x3508,	// (0x0002219b) wml_list_single_large_pane

0x352a,	// (0x000221bd) wml_list_single_medium_pane_ParamLimits

0x352a,	// (0x000221bd) wml_list_single_medium_pane

0x354d,	// (0x000221e0) wml_list_single_small_pane_ParamLimits

0x354d,	// (0x000221e0) wml_list_single_small_pane

0xa735,	// (0x000293c8) wml_selection_box_pane_ParamLimits

0xa735,	// (0x000293c8) wml_selection_box_pane

0xa748,	// (0x000293db) wml_list_single_pane_t1

0xa757,	// (0x000293ea) wml_list_single_medium_pane_t1

0xa766,	// (0x000293f9) wml_list_single_large_pane_t1

0xa775,	// (0x00029408) input_focus_pane_cp02_ParamLimits

0xa775,	// (0x00029408) input_focus_pane_cp02

0xa788,	// (0x0002941b) wml_selection_box_pane_g1

0xa791,	// (0x00029424) wml_selection_box_pane_t1_ParamLimits

0xa791,	// (0x00029424) wml_selection_box_pane_t1

0xa2cd,	// (0x00028f60) bg_wml_button_pane_ParamLimits

0xa2cd,	// (0x00028f60) bg_wml_button_pane

0xa7a9,	// (0x0002943c) wml_button_pane_g1

0xa7b1,	// (0x00029444) wml_button_pane_t1

0xa7a9,	// (0x0002943c) wml_button_bg_pane_g1

0xa7c1,	// (0x00029454) wml_button_bg_pane_g2

0xa7c9,	// (0x0002945c) wml_button_bg_pane_g3

0xa7d1,	// (0x00029464) wml_button_bg_pane_g4

0xa7d9,	// (0x0002946c) wml_button_bg_pane_g5

0xa7e1,	// (0x00029474) wml_button_bg_pane_g6

0xa7e9,	// (0x0002947c) wml_button_bg_pane_g7

0xa7f1,	// (0x00029484) wml_button_bg_pane_g8

0xa7f9,	// (0x0002948c) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002df0b) wml_button_bg_pane_g

0x3575,	// (0x00022208) bg_list_pane_cp02

0xa801,	// (0x00029494) mce_header_pane_ParamLimits

0xa801,	// (0x00029494) mce_header_pane

0xa817,	// (0x000294aa) mce_icon_pane

0xa817,	// (0x000294aa) mce_image_pane

0xa820,	// (0x000294b3) mce_text_pane_ParamLimits

0xa820,	// (0x000294b3) mce_text_pane

0x357f,	// (0x00022212) scroll_pane_cp03

0xa719,	// (0x000293ac) scroll_pane_cp04

0xa833,	// (0x000294c6) scroll_pane_cp05_ParamLimits

0xa833,	// (0x000294c6) scroll_pane_cp05

0x3589,	// (0x0002221c) mce_header_field_pane_ParamLimits

0x3589,	// (0x0002221c) mce_header_field_pane

0x35ab,	// (0x0002223e) mce_header_field_pane_2_ParamLimits

0x35ab,	// (0x0002223e) mce_header_field_pane_2

0x35c1,	// (0x00022254) mce_header_field_pane_3

0x35c9,	// (0x0002225c) list_single_mce_message_pane_ParamLimits

0x35c9,	// (0x0002225c) list_single_mce_message_pane

0x35e8,	// (0x0002227b) list_single_mce_smart_pane_ParamLimits

0x35e8,	// (0x0002227b) list_single_mce_smart_pane

0xa83f,	// (0x000294d2) input_focus_pane_cp03

0xa848,	// (0x000294db) list_header_data_pane

0x3612,	// (0x000222a5) mce_header_field_pane_t1

0x3622,	// (0x000222b5) list_single_mce_header_pane_ParamLimits

0x3622,	// (0x000222b5) list_single_mce_header_pane

0xa850,	// (0x000294e3) list_single_mce_header_pane_t1

0xa85f,	// (0x000294f2) list_single_mce_message_pane_g1

0xa867,	// (0x000294fa) list_single_mce_message_pane_t1

0x3666,	// (0x000222f9) bg_cale_heading_pane_cp01_ParamLimits

0x3666,	// (0x000222f9) bg_cale_heading_pane_cp01

0xa875,	// (0x00029508) bg_cale_pane_cp02_ParamLimits

0xa875,	// (0x00029508) bg_cale_pane_cp02

0x36ad,	// (0x00022340) cale_month_corner_pane

0x36cc,	// (0x0002235f) cale_month_day_heading_pane_ParamLimits

0x36cc,	// (0x0002235f) cale_month_day_heading_pane

0x3723,	// (0x000223b6) cale_month_pane_g1_ParamLimits

0x3723,	// (0x000223b6) cale_month_pane_g1

0x375f,	// (0x000223f2) cale_month_pane_g2_ParamLimits

0x375f,	// (0x000223f2) cale_month_pane_g2

0x3797,	// (0x0002242a) cale_month_pane_g3_ParamLimits

0x3797,	// (0x0002242a) cale_month_pane_g3

0x37eb,	// (0x0002247e) cale_month_pane_g4_ParamLimits

0x37eb,	// (0x0002247e) cale_month_pane_g4

0x383f,	// (0x000224d2) cale_month_pane_g5_ParamLimits

0x383f,	// (0x000224d2) cale_month_pane_g5

0x3893,	// (0x00022526) cale_month_pane_g6_ParamLimits

0x3893,	// (0x00022526) cale_month_pane_g6

0x38f7,	// (0x0002258a) cale_month_pane_g7_ParamLimits

0x38f7,	// (0x0002258a) cale_month_pane_g7

0x395b,	// (0x000225ee) cale_month_pane_g8_ParamLimits

0x395b,	// (0x000225ee) cale_month_pane_g8

0x39bf,	// (0x00022652) cale_month_pane_g9_ParamLimits

0x39bf,	// (0x00022652) cale_month_pane_g9

0x3a17,	// (0x000226aa) cale_month_pane_g10_ParamLimits

0x3a17,	// (0x000226aa) cale_month_pane_g10

0x3a65,	// (0x000226f8) cale_month_pane_g11_ParamLimits

0x3a65,	// (0x000226f8) cale_month_pane_g11

0x3ab1,	// (0x00022744) cale_month_pane_g12_ParamLimits

0x3ab1,	// (0x00022744) cale_month_pane_g12

0x3b01,	// (0x00022794) cale_month_pane_g13_ParamLimits

0x3b01,	// (0x00022794) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002df1e) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002df1e) cale_month_pane_g

0x3b51,	// (0x000227e4) cale_month_week_pane

0x3b71,	// (0x00022804) grid_cale_month_pane_ParamLimits

0x3b71,	// (0x00022804) grid_cale_month_pane

0x3bbf,	// (0x00022852) cale_month_day_heading_pane_t1

0x3c41,	// (0x000228d4) cale_month_day_heading_pane_t2

0x3cce,	// (0x00022961) cale_month_day_heading_pane_t3

0x3d5b,	// (0x000229ee) cale_month_day_heading_pane_t4

0x3de8,	// (0x00022a7b) cale_month_day_heading_pane_t5

0x3e7d,	// (0x00022b10) cale_month_day_heading_pane_t6

0x3f1a,	// (0x00022bad) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002df39) cale_month_day_heading_pane_t

0xa50b,	// (0x0002919e) bg_cale_side_pane_cp01

0x3fb7,	// (0x00022c4a) cale_month_week_pane_t1

0x3fd0,	// (0x00022c63) cale_month_week_pane_t2

0x3fe9,	// (0x00022c7c) cale_month_week_pane_t3

0x4002,	// (0x00022c95) cale_month_week_pane_t4

0x401b,	// (0x00022cae) cale_month_week_pane_t5

0x4036,	// (0x00022cc9) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002df48) cale_month_week_pane_t

0x4057,	// (0x00022cea) cell_cale_month_pane_ParamLimits

0x4057,	// (0x00022cea) cell_cale_month_pane

0x0f44,	// (0x0001fbd7) cell_cale_month_pane_g1

0x0f50,	// (0x0001fbe3) cell_cale_month_pane_t1_ParamLimits

0x0f50,	// (0x0001fbe3) cell_cale_month_pane_t1

0xa519,	// (0x000291ac) grid_highlight_pane_cp08

0xa3e7,	// (0x0002907a) main_smil_g1

0x41a3,	// (0x00022e36) smil_status_pane

0xa8b4,	// (0x00029547) smil_text_pane

0xc14c,	// (0x0002addf) bg_popup_call3_rect_pane_g8

0xc154,	// (0x0002ade7) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002e201) bg_popup_call3_rect_pane_g

0xc3e2,	// (0x0002b075) smil_status_volume_pane_g1

0x41b6,	// (0x00022e49) smil_status_pane_t1

0x1092,	// (0x0001fd25) volume_smil_pane

0xa8be,	// (0x00029551) list_smil_text_pane

0x41cd,	// (0x00022e60) scroll_pane_cp011

0x41d8,	// (0x00022e6b) smil_text_list_pane_t1_ParamLimits

0x41d8,	// (0x00022e6b) smil_text_list_pane_t1

0x0f70,	// (0x0001fc03) aid_volume_smil_ParamLimits

0x0f70,	// (0x0001fc03) aid_volume_smil

0xa3e7,	// (0x0002907a) smil_volume_pane_g1

0xa3e7,	// (0x0002907a) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002df68) smil_volume_pane_g

0x2743,	// (0x000213d6) listscroll_cale_day_pane

0xa8c8,	// (0x0002955b) bg_cale_pane

0xa8e0,	// (0x00029573) list_cale_pane

0xa903,	// (0x00029596) scroll_pane_cp09

0xa914,	// (0x000295a7) cale_bg_pane_g1

0xa91c,	// (0x000295af) cale_bg_pane_g2

0xa924,	// (0x000295b7) cale_bg_pane_g3

0xa92c,	// (0x000295bf) cale_bg_pane_g4

0xa934,	// (0x000295c7) cale_bg_pane_g5

0xa93c,	// (0x000295cf) cale_bg_pane_g6

0xa944,	// (0x000295d7) cale_bg_pane_g7

0xa94c,	// (0x000295df) cale_bg_pane_g8

0xa954,	// (0x000295e7) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002df6d) cale_bg_pane_g

0x422a,	// (0x00022ebd) list_cale_time_pane_ParamLimits

0x422a,	// (0x00022ebd) list_cale_time_pane

0xa964,	// (0x000295f7) list_cale_time_pane_g1_ParamLimits

0xa964,	// (0x000295f7) list_cale_time_pane_g1

0xa970,	// (0x00029603) list_cale_time_pane_g2_ParamLimits

0xa970,	// (0x00029603) list_cale_time_pane_g2

0x423e,	// (0x00022ed1) list_cale_time_pane_g3_ParamLimits

0x423e,	// (0x00022ed1) list_cale_time_pane_g3

0x424c,	// (0x00022edf) list_cale_time_pane_g4_ParamLimits

0x424c,	// (0x00022edf) list_cale_time_pane_g4

0x425a,	// (0x00022eed) list_cale_time_pane_g5_ParamLimits

0x425a,	// (0x00022eed) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002df80) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002df80) list_cale_time_pane_g

0xa98a,	// (0x0002961d) list_cale_time_pane_t1_ParamLimits

0xa98a,	// (0x0002961d) list_cale_time_pane_t1

0xa9b2,	// (0x00029645) list_cale_time_pane_t2_ParamLimits

0xa9b2,	// (0x00029645) list_cale_time_pane_t2

0x45c0,	// (0x00023253) aid_blid_cardinal_pane

0x4602,	// (0x00023295) compass_pane_t4

0xa9da,	// (0x0002966d) list_cale_time_pane_t4_ParamLimits

0xa9da,	// (0x0002966d) list_cale_time_pane_t4

0x4610,	// (0x000232a3) compass_pane_t5

0x4620,	// (0x000232b3) compass_pane_t6

0x462e,	// (0x000232c1) compass_pane_t7

0xade8,	// (0x00029a7b) navi_pane_cc_t1

0xaf57,	// (0x00029bea) aid_phob_thumbnail_center_pane

0x4d60,	// (0x000239f3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002df8d) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002df8d) list_cale_time_pane_t

0x9cc9,	// (0x0002895c) bg_popup_window_pane_cp02_ParamLimits

0x9cc9,	// (0x0002895c) bg_popup_window_pane_cp02

0xaa02,	// (0x00029695) heading_pane_cp01_ParamLimits

0xaa02,	// (0x00029695) heading_pane_cp01

0xaa0e,	// (0x000296a1) loc_req_pane_ParamLimits

0xaa0e,	// (0x000296a1) loc_req_pane

0xaa1e,	// (0x000296b1) loc_type_pane_ParamLimits

0xaa1e,	// (0x000296b1) loc_type_pane

0xaa30,	// (0x000296c3) loc_type_pane_t1_ParamLimits

0xaa30,	// (0x000296c3) loc_type_pane_t1

0xaa42,	// (0x000296d5) loc_type_pane_t2_ParamLimits

0xaa42,	// (0x000296d5) loc_type_pane_t2

0xaa54,	// (0x000296e7) loc_type_pane_t3_ParamLimits

0xaa54,	// (0x000296e7) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002df94) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002df94) loc_type_pane_t

0xaa66,	// (0x000296f9) list_loc_req_pane

0xaa70,	// (0x00029703) scroll_pane_cp012

0x4268,	// (0x00022efb) list_single_loc_request_popup_menu_pane_ParamLimits

0x4268,	// (0x00022efb) list_single_loc_request_popup_menu_pane

0xaa7b,	// (0x0002970e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa7b,	// (0x0002970e) list_single_loc_request_popup_menu_pane_g1

0xaa87,	// (0x0002971a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa87,	// (0x0002971a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002df9b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002df9b) list_single_loc_request_popup_menu_pane_g

0xaa93,	// (0x00029726) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa93,	// (0x00029726) list_single_loc_request_popup_menu_pane_t1

0x427a,	// (0x00022f0d) bg_popup_window_pane_cp03_ParamLimits

0x427a,	// (0x00022f0d) bg_popup_window_pane_cp03

0x4288,	// (0x00022f1b) heading_loc_req_pane_ParamLimits

0x4288,	// (0x00022f1b) heading_loc_req_pane

0x4294,	// (0x00022f27) popup_dyc_status_message_window_g1_ParamLimits

0x4294,	// (0x00022f27) popup_dyc_status_message_window_g1

0x42a0,	// (0x00022f33) popup_dyc_status_message_window_t1_ParamLimits

0x42a0,	// (0x00022f33) popup_dyc_status_message_window_t1

0x42b2,	// (0x00022f45) popup_dyc_status_message_window_t2_ParamLimits

0x42b2,	// (0x00022f45) popup_dyc_status_message_window_t2

0x42c4,	// (0x00022f57) popup_dyc_status_message_window_t3_ParamLimits

0x42c4,	// (0x00022f57) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002dfa0) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002dfa0) popup_dyc_status_message_window_t

0xa072,	// (0x00028d05) bg_heading_pane_cp01

0xaaa9,	// (0x0002973c) heading_loc_req_pane_g1

0xaab1,	// (0x00029744) heading_loc_req_pane_g2

0xaab9,	// (0x0002974c) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002dfa7) heading_loc_req_pane_g

0xaac1,	// (0x00029754) heading_loc_req_pane_t1

0xaad1,	// (0x00029764) bg_popup_sub_pane_cp01_ParamLimits

0xaad1,	// (0x00029764) bg_popup_sub_pane_cp01

0xaadf,	// (0x00029772) popup_cale_events_window_g1_ParamLimits

0xaadf,	// (0x00029772) popup_cale_events_window_g1

0xaaff,	// (0x00029792) popup_cale_events_window_g2_ParamLimits

0xaaff,	// (0x00029792) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002dfdb) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002dfdb) popup_cale_events_window_g

0xab1f,	// (0x000297b2) popup_cale_events_window_t1_ParamLimits

0xab1f,	// (0x000297b2) popup_cale_events_window_t1

0xab31,	// (0x000297c4) popup_cale_events_window_t2_ParamLimits

0xab31,	// (0x000297c4) popup_cale_events_window_t2

0xab6f,	// (0x00029802) popup_cale_events_window_t3_ParamLimits

0xab6f,	// (0x00029802) popup_cale_events_window_t3

0xaba9,	// (0x0002983c) popup_cale_events_window_t4_ParamLimits

0xaba9,	// (0x0002983c) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002dfe0) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002dfe0) popup_cale_events_window_t

0x43cb,	// (0x0002305e) call_type_pane

0xaf2e,	// (0x00029bc1) popup_call_status_window_g1

0x43d7,	// (0x0002306a) popup_call_status_window_g2

0x43e3,	// (0x00023076) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002dfe9) popup_call_status_window_g

0xabdf,	// (0x00029872) call_type_pane_g1

0xabe8,	// (0x0002987b) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002dff0) call_type_pane_g

0xa072,	// (0x00028d05) bg_popup_sub_pane_cp02

0xabf1,	// (0x00029884) listscroll_popup_wml_pane

0xabf9,	// (0x0002988c) list_wml_pane

0xac03,	// (0x00029896) scroll_pane_cp013

0xac0e,	// (0x000298a1) list_single_graphic_popup_wml_pane_ParamLimits

0xac0e,	// (0x000298a1) list_single_graphic_popup_wml_pane

0xa3e7,	// (0x0002907a) list_single_graphic_popup_wml_pane_g1

0xac22,	// (0x000298b5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002dff5) list_single_graphic_popup_wml_pane_g

0xac2a,	// (0x000298bd) list_single_graphic_popup_wml_pane_t1

0xac40,	// (0x000298d3) aid_call_pane

0xa2c5,	// (0x00028f58) popup_clock_analogue_window_g1

0xa2c5,	// (0x00028f58) popup_clock_analogue_window_g2

0x0f92,	// (0x0001fc25) popup_clock_analogue_window_g3

0x0f92,	// (0x0001fc25) popup_clock_analogue_window_g4

0xa3e7,	// (0x0002907a) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002dffa) popup_clock_analogue_window_g

0x0f9a,	// (0x0001fc2d) popup_clock_analogue_window_t1

0x0fa8,	// (0x0001fc3b) clock_digital_number_pane_ParamLimits

0x0fa8,	// (0x0001fc3b) clock_digital_number_pane

0x0fb4,	// (0x0001fc47) clock_digital_number_pane_cp02_ParamLimits

0x0fb4,	// (0x0001fc47) clock_digital_number_pane_cp02

0x0fc0,	// (0x0001fc53) clock_digital_number_pane_cp03_ParamLimits

0x0fc0,	// (0x0001fc53) clock_digital_number_pane_cp03

0x0fcc,	// (0x0001fc5f) clock_digital_number_pane_cp04_ParamLimits

0x0fcc,	// (0x0001fc5f) clock_digital_number_pane_cp04

0x0fd8,	// (0x0001fc6b) clock_digital_separator_pane_ParamLimits

0x0fd8,	// (0x0001fc6b) clock_digital_separator_pane

0x0fe4,	// (0x0001fc77) popup_clock_digital_window_t1

0xa3e7,	// (0x0002907a) clock_digital_number_pane_g1

0xa3e7,	// (0x0002907a) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002df68) clock_digital_number_pane_g

0xa3e7,	// (0x0002907a) clock_digital_separator_pane_g1

0xa3e7,	// (0x0002907a) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002df68) clock_digital_separator_pane_g

0xa072,	// (0x00028d05) bg_popup_window_pane_cp04

0xac48,	// (0x000298db) heading_pane_cp03

0xac50,	// (0x000298e3) listscroll_popup_gms_pane

0xac58,	// (0x000298eb) grid_large_graphic_popup_pane

0xac62,	// (0x000298f5) listscroll_popup_gms_pane_g1

0xac6a,	// (0x000298fd) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002e005) listscroll_popup_gms_pane_g

0xa719,	// (0x000293ac) scroll_pane_cp014

0x43ef,	// (0x00023082) cell_large_graphic_popup_pane_ParamLimits

0x43ef,	// (0x00023082) cell_large_graphic_popup_pane

0x4409,	// (0x0002309c) cell_large_graphic_popup_pane_g1_ParamLimits

0x4409,	// (0x0002309c) cell_large_graphic_popup_pane_g1

0xac72,	// (0x00029905) cell_large_graphic_popup_pane_g2_ParamLimits

0xac72,	// (0x00029905) cell_large_graphic_popup_pane_g2

0xac7e,	// (0x00029911) cell_large_graphic_popup_pane_g3_ParamLimits

0xac7e,	// (0x00029911) cell_large_graphic_popup_pane_g3

0xac8b,	// (0x0002991e) cell_large_graphic_popup_pane_g4_ParamLimits

0xac8b,	// (0x0002991e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002e00a) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002e00a) cell_large_graphic_popup_pane_g

0xac9b,	// (0x0002992e) grid_highlight_pane_cp010

0xa3e7,	// (0x0002907a) bg_popup_call_pane_g1

0xaca5,	// (0x00029938) list_single_graphic_popup_conf_pane_ParamLimits

0xaca5,	// (0x00029938) list_single_graphic_popup_conf_pane

0xacb7,	// (0x0002994a) list_highlight_pane_cp01

0xacc0,	// (0x00029953) list_single_graphic_popup_conf_pane_g1

0xacc8,	// (0x0002995b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002e013) list_single_graphic_popup_conf_pane_g

0xacd0,	// (0x00029963) list_single_graphic_popup_conf_pane_t1

0xacde,	// (0x00029971) linegrid_cams_pane_g1

0x4415,	// (0x000230a8) linegrid_cams_pane_g2

0xa54c,	// (0x000291df) linegrid_cams_pane_g3

0xace7,	// (0x0002997a) linegrid_cams_pane_g4

0x441e,	// (0x000230b1) linegrid_cams_pane_g5

0x4427,	// (0x000230ba) linegrid_cams_pane_g6

0xa555,	// (0x000291e8) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002e018) linegrid_cams_pane_g

0xacf0,	// (0x00029983) popup_clock_analogue_window

0xacf0,	// (0x00029983) popup_clock_digital_window

0xa072,	// (0x00028d05) popup_phob_thumbnail_window

0xa3e7,	// (0x0002907a) call_video_uplink_pane_g1

0xacf9,	// (0x0002998c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002e027) call_video_uplink_pane_g

0xad01,	// (0x00029994) video_uplink_pane

0xad09,	// (0x0002999c) mce_image_pane_g1

0x4432,	// (0x000230c5) mce_image_pane_g2

0x443c,	// (0x000230cf) mce_image_pane_g3

0x4446,	// (0x000230d9) mce_image_pane_g4

0x444e,	// (0x000230e1) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002e02c) mce_image_pane_g

0xad13,	// (0x000299a6) control_top_pane_stacon_cp01_ParamLimits

0xad13,	// (0x000299a6) control_top_pane_stacon_cp01

0xad27,	// (0x000299ba) uni_indicator_pane_stacon_cp01_ParamLimits

0xad27,	// (0x000299ba) uni_indicator_pane_stacon_cp01

0xad38,	// (0x000299cb) bg_popup_sub_pane_cp03

0x4456,	// (0x000230e9) chi_dic_find_pane

0x445e,	// (0x000230f1) listscroll_chi_dic_pane

0x4467,	// (0x000230fa) main_pane_chidic_g1

0x447a,	// (0x0002310d) chi_dic_find_pane_t1

0xad42,	// (0x000299d5) find_chidic_pane

0xad4b,	// (0x000299de) chi_dic_list_pane_ParamLimits

0xad4b,	// (0x000299de) chi_dic_list_pane

0xad5c,	// (0x000299ef) scroll_pane_cp020

0x4488,	// (0x0002311b) find_chidic_pane_t1

0xa072,	// (0x00028d05) input_focus_pane_cp06

0x4497,	// (0x0002312a) list_chi_dic_pane_ParamLimits

0x4497,	// (0x0002312a) list_chi_dic_pane

0x44ac,	// (0x0002313f) list_chi_dic_pane_t1_ParamLimits

0x44ac,	// (0x0002313f) list_chi_dic_pane_t1

0xa072,	// (0x00028d05) list_highlight_pane_cp020

0xad64,	// (0x000299f7) bg_cale_heading_pane_g1

0x44bf,	// (0x00023152) bg_cale_heading_pane_g2

0x44c7,	// (0x0002315a) bg_cale_heading_pane_g3

0x44cf,	// (0x00023162) bg_cale_heading_pane_g4

0x44d9,	// (0x0002316c) bg_cale_heading_pane_g5

0x44e3,	// (0x00023176) bg_cale_heading_pane_g6

0x44eb,	// (0x0002317e) bg_cale_heading_pane_g7

0x44f3,	// (0x00023186) bg_cale_heading_pane_g8

0x44fd,	// (0x00023190) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002e037) bg_cale_heading_pane_g

0xad64,	// (0x000299f7) bg_cale_side_pane_g1

0x4507,	// (0x0002319a) bg_cale_side_pane_g2

0x4511,	// (0x000231a4) bg_cale_side_pane_g3

0x451b,	// (0x000231ae) bg_cale_side_pane_g4

0x4525,	// (0x000231b8) bg_cale_side_pane_g5

0x452f,	// (0x000231c2) bg_cale_side_pane_g6

0x4539,	// (0x000231cc) bg_cale_side_pane_g7

0x4543,	// (0x000231d6) bg_cale_side_pane_g8

0x454b,	// (0x000231de) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002e04a) bg_cale_side_pane_g

0x4553,	// (0x000231e6) popup_call_status_window_ParamLimits

0x4553,	// (0x000231e6) popup_call_status_window

0xad6c,	// (0x000299ff) stacon_top_pane

0xad74,	// (0x00029a07) status_pane_ParamLimits

0xad74,	// (0x00029a07) status_pane

0xad89,	// (0x00029a1c) status_small_pane

0xad91,	// (0x00029a24) control_pane

0xa072,	// (0x00028d05) stacon_bottom_pane

0xad99,	// (0x00029a2c) list_single_mce_smart_pane_t1_ParamLimits

0xad99,	// (0x00029a2c) list_single_mce_smart_pane_t1

0xadac,	// (0x00029a3f) list_single_mce_smart_pane_t2_ParamLimits

0xadac,	// (0x00029a3f) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002e05d) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002e05d) list_single_mce_smart_pane_t

0x455f,	// (0x000231f2) compass_pane

0x456a,	// (0x000231fd) main_location2_pane_t1

0x4580,	// (0x00023213) main_location2_pane_t2

0x4596,	// (0x00023229) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002e062) main_location2_pane_t

0xadcb,	// (0x00029a5e) compass_pane_g1_ParamLimits

0xadcb,	// (0x00029a5e) compass_pane_g1

0x45e4,	// (0x00023277) compass_pane_t1

0x45f3,	// (0x00023286) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002e06b) compass_pane_t

0x463e,	// (0x000232d1) text_secondary_cp61

0xaddf,	// (0x00029a72) navi_pane_cams_g5

0xae02,	// (0x00029a95) navi_pane_im_t1

0xae10,	// (0x00029aa3) navi_pane_mp_g1_ParamLimits

0xae10,	// (0x00029aa3) navi_pane_mp_g1

0xae24,	// (0x00029ab7) navi_pane_mp_g2_ParamLimits

0xae24,	// (0x00029ab7) navi_pane_mp_g2

0xae30,	// (0x00029ac3) navi_pane_mp_g3_ParamLimits

0xae30,	// (0x00029ac3) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002e07f) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002e07f) navi_pane_mp_g

0xae3c,	// (0x00029acf) navi_pane_mp_t1

0xae4a,	// (0x00029add) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002e086) navi_pane_mp_t

0xae86,	// (0x00029b19) navi_pane_vt_g1

0xae3c,	// (0x00029acf) navi_pane_vt_t1

0xae8e,	// (0x00029b21) navi_slider_pane

0xae96,	// (0x00029b29) zooming_pane

0xae9e,	// (0x00029b31) navi_slider_pane_g1

0x1001,	// (0x0001fc94) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002e08d) navi_slider_pane_g

0xaec2,	// (0x00029b55) aid_levels_zoom

0xaeca,	// (0x00029b5d) zooming_pane_g1

0xaed2,	// (0x00029b65) zooming_pane_g2

0xaed2,	// (0x00029b65) zooming_pane_g3

0x0002,

0xf409,	// (0x0002e09c) zooming_pane_g

0xaeda,	// (0x00029b6d) level_10_zoom

0xaee3,	// (0x00029b76) level_11_zoom

0xaeec,	// (0x00029b7f) level_1_zoom

0xaef5,	// (0x00029b88) level_2_zoom

0xaefe,	// (0x00029b91) level_3_zoom

0xaf07,	// (0x00029b9a) level_4_zoom

0xaf10,	// (0x00029ba3) level_5_zoom

0xaf19,	// (0x00029bac) level_6_zoom

0xaf3c,	// (0x00029bcf) level_7_zoom

0xaf45,	// (0x00029bd8) level_8_zoom

0xaf4e,	// (0x00029be1) level_9_zoom

0xaf5f,	// (0x00029bf2) popup_phob_thumbnail_window_g1

0xaf67,	// (0x00029bfa) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002e0a3) popup_phob_thumbnail_window_g

0xc2b2,	// (0x0002af45) level_1_location

0xc2ba,	// (0x0002af4d) level_2_location

0xc2c2,	// (0x0002af55) level_3_location

0xc2ca,	// (0x0002af5d) level_4_location

0xae96,	// (0x00029b29) level_5_location

0x4773,	// (0x00023406) mce_icon_pane_g1

0x477b,	// (0x0002340e) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002e0a8) mce_icon_pane_g

0x4783,	// (0x00023416) main_mup_pane_g1_ParamLimits

0x4783,	// (0x00023416) main_mup_pane_g1

0x479b,	// (0x0002342e) main_mup_pane_g2_ParamLimits

0x479b,	// (0x0002342e) main_mup_pane_g2

0x47b7,	// (0x0002344a) main_mup_pane_g3_ParamLimits

0x47b7,	// (0x0002344a) main_mup_pane_g3

0x47d3,	// (0x00023466) main_mup_pane_g4_ParamLimits

0x47d3,	// (0x00023466) main_mup_pane_g4

0x47ef,	// (0x00023482) main_mup_pane_g5_ParamLimits

0x47ef,	// (0x00023482) main_mup_pane_g5

0x4810,	// (0x000234a3) main_mup_pane_g6_ParamLimits

0x4810,	// (0x000234a3) main_mup_pane_g6

0x4830,	// (0x000234c3) main_mup_pane_g7_ParamLimits

0x4830,	// (0x000234c3) main_mup_pane_g7

0x4854,	// (0x000234e7) main_mup_pane_g8_ParamLimits

0x4854,	// (0x000234e7) main_mup_pane_g8

0x4878,	// (0x0002350b) main_mup_pane_g9_ParamLimits

0x4878,	// (0x0002350b) main_mup_pane_g9

0x489b,	// (0x0002352e) main_mup_pane_g10_ParamLimits

0x489b,	// (0x0002352e) main_mup_pane_g10

0x48be,	// (0x00023551) main_mup_pane_g11_ParamLimits

0x48be,	// (0x00023551) main_mup_pane_g11

0x48de,	// (0x00023571) main_mup_pane_g12_ParamLimits

0x48de,	// (0x00023571) main_mup_pane_g12

0x48ec,	// (0x0002357f) main_mup_pane_g13_ParamLimits

0x48ec,	// (0x0002357f) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002e0ad) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002e0ad) main_mup_pane_g

0x4902,	// (0x00023595) main_mup_pane_t1_ParamLimits

0x4902,	// (0x00023595) main_mup_pane_t1

0x4921,	// (0x000235b4) main_mup_pane_t2_ParamLimits

0x4921,	// (0x000235b4) main_mup_pane_t2

0x493b,	// (0x000235ce) main_mup_pane_t3_ParamLimits

0x493b,	// (0x000235ce) main_mup_pane_t3

0x4955,	// (0x000235e8) main_mup_pane_t4_ParamLimits

0x4955,	// (0x000235e8) main_mup_pane_t4

0x4967,	// (0x000235fa) main_mup_pane_t5_ParamLimits

0x4967,	// (0x000235fa) main_mup_pane_t5

0x4979,	// (0x0002360c) main_mup_pane_t6_ParamLimits

0x4979,	// (0x0002360c) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002e0c8) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002e0c8) main_mup_pane_t

0x498f,	// (0x00023622) mup_progress_pane_ParamLimits

0x498f,	// (0x00023622) mup_progress_pane

0x499b,	// (0x0002362e) mup_visualizer_pane_ParamLimits

0x499b,	// (0x0002362e) mup_visualizer_pane

0x49d9,	// (0x0002366c) mup_volume_pane_ParamLimits

0x49d9,	// (0x0002366c) mup_volume_pane

0xaf2e,	// (0x00029bc1) mup_visualizer_pane_g1_ParamLimits

0xaf2e,	// (0x00029bc1) mup_visualizer_pane_g1

0xaf2e,	// (0x00029bc1) mup_visualizer_pane_g2_ParamLimits

0xaf2e,	// (0x00029bc1) mup_visualizer_pane_g2

0xadcb,	// (0x00029a5e) mup_visualizer_pane_g3_ParamLimits

0xadcb,	// (0x00029a5e) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002e0d5) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002e0d5) mup_visualizer_pane_g

0xa3e7,	// (0x0002907a) mup_volume_pane_g1

0xaf77,	// (0x00029c0a) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002e0dc) mup_volume_pane_g

0xa3e7,	// (0x0002907a) mup_progress_pane_g1

0xaf80,	// (0x00029c13) mup_progress_pane_g2

0xaf89,	// (0x00029c1c) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002e0e1) mup_progress_pane_g

0xa072,	// (0x00028d05) bg_popup_window_pane_cp05

0xaf92,	// (0x00029c25) heading_pane_cp02_ParamLimits

0xaf92,	// (0x00029c25) heading_pane_cp02

0xafae,	// (0x00029c41) list_popup_blid_pane

0xafb6,	// (0x00029c49) list_blid_sat_info_pane_ParamLimits

0xafb6,	// (0x00029c49) list_blid_sat_info_pane

0xafc9,	// (0x00029c5c) list_blid_sat_info_pane_g1

0xafd1,	// (0x00029c64) list_blid_sat_info_pane_t1

0x4af8,	// (0x0002378b) mup_equalizer_pane_ParamLimits

0x4af8,	// (0x0002378b) mup_equalizer_pane

0x4b19,	// (0x000237ac) mup_equalizer_pane_cp1_ParamLimits

0x4b19,	// (0x000237ac) mup_equalizer_pane_cp1

0x4b3a,	// (0x000237cd) mup_equalizer_pane_cp2_ParamLimits

0x4b3a,	// (0x000237cd) mup_equalizer_pane_cp2

0x4b5b,	// (0x000237ee) mup_equalizer_pane_cp3_ParamLimits

0x4b5b,	// (0x000237ee) mup_equalizer_pane_cp3

0x4b80,	// (0x00023813) mup_equalizer_pane_cp4_ParamLimits

0x4b80,	// (0x00023813) mup_equalizer_pane_cp4

0x4ba5,	// (0x00023838) mup_equalizer_pane_cp5

0x4bbd,	// (0x00023850) mup_equalizer_pane_cp6

0x4bd5,	// (0x00023868) mup_equalizer_pane_cp7

0xc1cc,	// (0x0002ae5f) bg_popup_call_poc_act_pane_g9

0xc1d4,	// (0x0002ae67) bg_popup_call_poc_act_pane_g10

0xc1dc,	// (0x0002ae6f) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2cd,	// (0x00028f60) mup_scale_pane

0xa3e7,	// (0x0002907a) mup_scale_pane_g1

0xafdf,	// (0x00029c72) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002e0fd) mup_scale_pane_g

0xb003,	// (0x00029c96) msg_data_pane

0xb00b,	// (0x00029c9e) scroll_pane_cp017

0x4bff,	// (0x00023892) bg_list_pane_cp04_ParamLimits

0x4bff,	// (0x00023892) bg_list_pane_cp04

0xb01b,	// (0x00029cae) msg_data_pane_g1

0x4c1f,	// (0x000238b2) msg_data_pane_g2

0x4c29,	// (0x000238bc) msg_data_pane_g3

0x4c33,	// (0x000238c6) msg_data_pane_g4

0x4c3b,	// (0x000238ce) msg_data_pane_g5

0x4c43,	// (0x000238d6) msg_data_pane_g6

0x4c4b,	// (0x000238de) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002e10c) msg_data_pane_g

0x4c53,	// (0x000238e6) msg_text_pane_ParamLimits

0x4c53,	// (0x000238e6) msg_text_pane

0x4c7b,	// (0x0002390e) qrid_highlight_pane_cp011_ParamLimits

0x4c7b,	// (0x0002390e) qrid_highlight_pane_cp011

0xa072,	// (0x00028d05) msg_body_pane

0xa072,	// (0x00028d05) msg_header_pane

0xb02c,	// (0x00029cbf) input_focus_pane_cp07

0xb041,	// (0x00029cd4) msg_header_pane_t1_ParamLimits

0xb041,	// (0x00029cd4) msg_header_pane_t1

0xb053,	// (0x00029ce6) msg_header_pane_t2_ParamLimits

0xb053,	// (0x00029ce6) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002e120) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002e120) msg_header_pane_t

0xb065,	// (0x00029cf8) msg_body_pane_g1

0x4c9f,	// (0x00023932) msg_body_pane_t1_ParamLimits

0x4c9f,	// (0x00023932) msg_body_pane_t1

0xb06d,	// (0x00029d00) msg_body_pane_t2_ParamLimits

0xb06d,	// (0x00029d00) msg_body_pane_t2

0xb07f,	// (0x00029d12) msg_body_pane_t3_ParamLimits

0xb07f,	// (0x00029d12) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002e125) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002e125) msg_body_pane_t

0x1043,	// (0x0001fcd6) main_viewer_pane_g1_ParamLimits

0x1043,	// (0x0001fcd6) main_viewer_pane_g1

0x104f,	// (0x0001fce2) main_viewer_pane_g2_ParamLimits

0x104f,	// (0x0001fce2) main_viewer_pane_g2

0x4cf2,	// (0x00023985) main_viewer_pane_g3_ParamLimits

0x4cf2,	// (0x00023985) main_viewer_pane_g3

0x4d03,	// (0x00023996) main_viewer_pane_g4_ParamLimits

0x4d03,	// (0x00023996) main_viewer_pane_g4

0x105b,	// (0x0001fcee) main_viewer_pane_g5_ParamLimits

0x105b,	// (0x0001fcee) main_viewer_pane_g5

0x105b,	// (0x0001fcee) main_viewer_pane_g7_ParamLimits

0x105b,	// (0x0001fcee) main_viewer_pane_g7

0x106d,	// (0x0001fd00) main_viewer_pane_g8_ParamLimits

0x106d,	// (0x0001fd00) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002e135) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002e135) main_viewer_pane_g

0xb091,	// (0x00029d24) viewer_content_pane_ParamLimits

0xb091,	// (0x00029d24) viewer_content_pane

0x4d34,	// (0x000239c7) main_postcard_pane_g1_ParamLimits

0x4d34,	// (0x000239c7) main_postcard_pane_g1

0x4d42,	// (0x000239d5) main_postcard_pane_g2_ParamLimits

0x4d42,	// (0x000239d5) main_postcard_pane_g2

0x4d50,	// (0x000239e3) main_postcard_pane_g3_ParamLimits

0x4d50,	// (0x000239e3) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002e146) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002e146) main_postcard_pane_g

0x4d60,	// (0x000239f3) main_postcard_pane_g4

0xc3f5,	// (0x0002b088) smil_status_volume_pane_g2

0x4d8c,	// (0x00023a1f) postcard_pane_ParamLimits

0x4d8c,	// (0x00023a1f) postcard_pane

0xaf2e,	// (0x00029bc1) postcard_pane_g1_ParamLimits

0xaf2e,	// (0x00029bc1) postcard_pane_g1

0x4dc6,	// (0x00023a59) postcard_pane_g2_ParamLimits

0x4dc6,	// (0x00023a59) postcard_pane_g2

0x4dd2,	// (0x00023a65) postcard_pane_g3_ParamLimits

0x4dd2,	// (0x00023a65) postcard_pane_g3

0xb09f,	// (0x00029d32) postcard_pane_g4_ParamLimits

0xb09f,	// (0x00029d32) postcard_pane_g4

0x4dde,	// (0x00023a71) postcard_pane_g5_ParamLimits

0x4dde,	// (0x00023a71) postcard_pane_g5

0x4dea,	// (0x00023a7d) postcard_pane_g6_ParamLimits

0x4dea,	// (0x00023a7d) postcard_pane_g6

0xb0ad,	// (0x00029d40) postcard_pane_g7_ParamLimits

0xb0ad,	// (0x00029d40) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002e153) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002e153) postcard_pane_g

0x4df8,	// (0x00023a8b) main_mp2_pane_g1_ParamLimits

0x4df8,	// (0x00023a8b) main_mp2_pane_g1

0x4e06,	// (0x00023a99) main_mp2_pane_g2_ParamLimits

0x4e06,	// (0x00023a99) main_mp2_pane_g2

0x4e12,	// (0x00023aa5) main_mp2_pane_g3_ParamLimits

0x4e12,	// (0x00023aa5) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002e162) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002e162) main_mp2_pane_g

0x4e1e,	// (0x00023ab1) main_mp2_pane_t1_ParamLimits

0x4e1e,	// (0x00023ab1) main_mp2_pane_t1

0x4e35,	// (0x00023ac8) main_mp2_pane_t2_ParamLimits

0x4e35,	// (0x00023ac8) main_mp2_pane_t2

0x4e49,	// (0x00023adc) main_mp2_pane_t3_ParamLimits

0x4e49,	// (0x00023adc) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002e169) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002e169) main_mp2_pane_t

0xb0bb,	// (0x00029d4e) pec_content_pane_ParamLimits

0xb0bb,	// (0x00029d4e) pec_content_pane

0xa719,	// (0x000293ac) scroll_pane_cp015

0xb0cd,	// (0x00029d60) pec_attribute_pane_ParamLimits

0xb0cd,	// (0x00029d60) pec_attribute_pane

0x4e5b,	// (0x00023aee) pec_content_pane_g1_ParamLimits

0x4e5b,	// (0x00023aee) pec_content_pane_g1

0xb0dd,	// (0x00029d70) pec_content_pane_t1_ParamLimits

0xb0dd,	// (0x00029d70) pec_content_pane_t1

0xb0ef,	// (0x00029d82) pec_content_pane_t2_ParamLimits

0xb0ef,	// (0x00029d82) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002e170) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002e170) pec_content_pane_t

0x4e67,	// (0x00023afa) list_single_graphic_pane_cp01_ParamLimits

0x4e67,	// (0x00023afa) list_single_graphic_pane_cp01

0xa2cd,	// (0x00028f60) bg_popup_sub_pane_cp04

0xb101,	// (0x00029d94) popup_mup_playback_window_g1

0xb10d,	// (0x00029da0) popup_mup_playback_window_t1

0xb122,	// (0x00029db5) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002e175) popup_mup_playback_window_t

0xb159,	// (0x00029dec) main_image_pane_g1_ParamLimits

0xb159,	// (0x00029dec) main_image_pane_g1

0xb19c,	// (0x00029e2f) scroll_pane_cp018_ParamLimits

0xb19c,	// (0x00029e2f) scroll_pane_cp018

0xb1b4,	// (0x00029e47) scroll_pane_cp016_ParamLimits

0xb1b4,	// (0x00029e47) scroll_pane_cp016

0x4ef5,	// (0x00023b88) smil2_image_pane_ParamLimits

0x4ef5,	// (0x00023b88) smil2_image_pane

0x4f2b,	// (0x00023bbe) smil2_root_pane_ParamLimits

0x4f2b,	// (0x00023bbe) smil2_root_pane

0x4f57,	// (0x00023bea) smil2_text_pane_ParamLimits

0x4f57,	// (0x00023bea) smil2_text_pane

0xa072,	// (0x00028d05) bg_list_pane_cp06

0xb1f0,	// (0x00029e83) grid_radio_pane

0xa072,	// (0x00028d05) bg_popup_window_pane_cp06

0xb1fa,	// (0x00029e8d) main_fmradio_pane_t1

0xac48,	// (0x000298db) heading_pane_cp04

0xb208,	// (0x00029e9b) main_fmradio_pane_t2

0xc1e4,	// (0x0002ae77) popup_cale_lunar_info_window_g1

0xb216,	// (0x00029ea9) main_fmradio_pane_t3

0xc1ec,	// (0x0002ae7f) popup_cale_lunar_info_window_g2

0xb226,	// (0x00029eb9) main_fmradio_pane_t4

0x0001,

0xb234,	// (0x00029ec7) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002e250) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002e18a) main_fmradio_pane_t

0xb242,	// (0x00029ed5) wait_bar_pane_cp03

0xb24a,	// (0x00029edd) cell_fmradio_pane_ParamLimits

0xb24a,	// (0x00029edd) cell_fmradio_pane

0xb0ad,	// (0x00029d40) cell_fmradio_pane_g1_ParamLimits

0xb0ad,	// (0x00029d40) cell_fmradio_pane_g1

0xa072,	// (0x00028d05) grid_highlight_pane_cp011

0xb25f,	// (0x00029ef2) poc_content_pane_ParamLimits

0xb25f,	// (0x00029ef2) poc_content_pane

0xb271,	// (0x00029f04) scroll_pane_cp019

0x4f97,	// (0x00023c2a) popup_call_poc_act_window_ParamLimits

0x4f97,	// (0x00023c2a) popup_call_poc_act_window

0x4fa4,	// (0x00023c37) popup_call_poc_inact_window_ParamLimits

0x4fa4,	// (0x00023c37) popup_call_poc_inact_window

0xf594,	// (0x0002e227) bg_popup_call_poc_act_pane_g

0xc15c,	// (0x0002adef) bg_popup_call_poc_inact_pane_g1

0xc164,	// (0x0002adf7) bg_popup_call_poc_inact_pane_g2

0xb279,	// (0x00029f0c) popup_call_poc_act_window_g2

0xc16c,	// (0x0002adff) bg_popup_call_poc_inact_pane_g3

0xc174,	// (0x0002ae07) bg_popup_call_poc_inact_pane_g4

0xc17c,	// (0x0002ae0f) bg_popup_call_poc_inact_pane_g5

0xb281,	// (0x00029f14) popup_call_poc_act_window_t1_ParamLimits

0xb281,	// (0x00029f14) popup_call_poc_act_window_t1

0xb2a9,	// (0x00029f3c) popup_call_poc_act_window_t2_ParamLimits

0xb2a9,	// (0x00029f3c) popup_call_poc_act_window_t2

0xb2d1,	// (0x00029f64) popup_call_poc_act_window_t3_ParamLimits

0xb2d1,	// (0x00029f64) popup_call_poc_act_window_t3

0xb2f9,	// (0x00029f8c) popup_call_poc_act_window_t4_ParamLimits

0xb2f9,	// (0x00029f8c) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002e195) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002e195) popup_call_poc_act_window_t

0xc184,	// (0x0002ae17) bg_popup_call_poc_inact_pane_g6

0xc18c,	// (0x0002ae1f) bg_popup_call_poc_inact_pane_g7

0xc194,	// (0x0002ae27) bg_popup_call_poc_inact_pane_g8

0xb30b,	// (0x00029f9e) popup_call_poc_inact_window_g2

0xc19c,	// (0x0002ae2f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002e214) bg_popup_call_poc_inact_pane_g

0xb313,	// (0x00029fa6) popup_call_poc_inact_window_t1_ParamLimits

0xb313,	// (0x00029fa6) popup_call_poc_inact_window_t1

0xb328,	// (0x00029fbb) popup_call_poc_inact_window_t2_ParamLimits

0xb328,	// (0x00029fbb) popup_call_poc_inact_window_t2

0xb33d,	// (0x00029fd0) popup_call_poc_inact_window_t3_ParamLimits

0xb33d,	// (0x00029fd0) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002e19e) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002e19e) popup_call_poc_inact_window_t

0xc368,	// (0x0002affb) context_pane_ParamLimits

0x55b3,	// (0x00024246) signal_pane_ParamLimits

0xae96,	// (0x00029b29) main_call2_pane

0xc356,	// (0x0002afe9) popup_phob_thumbnail2_window_ParamLimits

0xc356,	// (0x0002afe9) popup_phob_thumbnail2_window

0x1013,	// (0x0001fca6) aid_hotspot_pointer_arrow_pane

0x101b,	// (0x0001fcae) aid_hotspot_pointer_hand_pane

0x52c9,	// (0x00023f5c) phob_pre_status_pane_g5

0x2d57,	// (0x000219ea) cams_zoom_pane_ParamLimits

0x2d63,	// (0x000219f6) image_vga_pane_ParamLimits

0x2d72,	// (0x00021a05) main_camera_pane_g1_ParamLimits

0x2d80,	// (0x00021a13) main_camera_pane_g2_ParamLimits

0x2d8c,	// (0x00021a1f) main_camera_pane_g3_ParamLimits

0x2d9a,	// (0x00021a2d) main_camera_pane_g4_ParamLimits

0x2da8,	// (0x00021a3b) main_camera_pane_g5_ParamLimits

0x2db6,	// (0x00021a49) main_camera_pane_g6_ParamLimits

0x2dc4,	// (0x00021a57) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002de9d) main_camera_pane_g_ParamLimits

0x2dd2,	// (0x00021a65) main_camera_pane_t1_ParamLimits

0x2de4,	// (0x00021a77) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002deae) main_camera_pane_t_ParamLimits

0xa2cd,	// (0x00028f60) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2cd,	// (0x00028f60) bg_popup_preview_window_pane_cp01

0xb352,	// (0x00029fe5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb352,	// (0x00029fe5) popup_phob_thumbnail2_window_g1

0xa072,	// (0x00028d05) call2_cli_visual_pane

0x4fc0,	// (0x00023c53) popup_call2_audio_conf_window_ParamLimits

0x4fc0,	// (0x00023c53) popup_call2_audio_conf_window

0x4fd9,	// (0x00023c6c) popup_call2_audio_first_window_ParamLimits

0x4fd9,	// (0x00023c6c) popup_call2_audio_first_window

0x5077,	// (0x00023d0a) popup_call2_audio_in_window_ParamLimits

0x5077,	// (0x00023d0a) popup_call2_audio_in_window

0x50bb,	// (0x00023d4e) popup_call2_audio_out_window_ParamLimits

0x50bb,	// (0x00023d4e) popup_call2_audio_out_window

0x5125,	// (0x00023db8) popup_call2_audio_second_window_ParamLimits

0x5125,	// (0x00023db8) popup_call2_audio_second_window

0x5183,	// (0x00023e16) popup_call2_audio_wait_window_ParamLimits

0x5183,	// (0x00023e16) popup_call2_audio_wait_window

0xa072,	// (0x00028d05) bg_popup_call2_act_pane_cp03

0xa2af,	// (0x00028f42) list_conf_pane_cp

0xb35e,	// (0x00029ff1) popup_call2_audio_conf_window_t1

0xb36c,	// (0x00029fff) list_single_graphic_popup_conf2_pane_ParamLimits

0xb36c,	// (0x00029fff) list_single_graphic_popup_conf2_pane

0xacb7,	// (0x0002994a) list_highlight_pane_cp04

0xb37f,	// (0x0002a012) list_single_graphic_popup_conf2_pane_g1

0xacc8,	// (0x0002995b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002e1a5) list_single_graphic_popup_conf2_pane_g

0xb389,	// (0x0002a01c) list_single_graphic_popup_conf2_pane_t1

0xb397,	// (0x0002a02a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb397,	// (0x0002a02a) bg_popup_call2_act_pane_cp01

0xb421,	// (0x0002a0b4) call_type_pane_cp05_ParamLimits

0xb421,	// (0x0002a0b4) call_type_pane_cp05

0xb475,	// (0x0002a108) popup_call2_audio_second_window_g1_ParamLimits

0xb475,	// (0x0002a108) popup_call2_audio_second_window_g1

0xb4c9,	// (0x0002a15c) popup_call2_audio_second_window_g2_ParamLimits

0xb4c9,	// (0x0002a15c) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002e1aa) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002e1aa) popup_call2_audio_second_window_g

0xb52e,	// (0x0002a1c1) popup_call2_audio_second_window_t1_ParamLimits

0xb52e,	// (0x0002a1c1) popup_call2_audio_second_window_t1

0xb5e9,	// (0x0002a27c) popup_call2_audio_second_window_t2_ParamLimits

0xb5e9,	// (0x0002a27c) popup_call2_audio_second_window_t2

0xb63c,	// (0x0002a2cf) popup_call2_audio_second_window_t3_ParamLimits

0xb63c,	// (0x0002a2cf) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002e1b1) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002e1b1) popup_call2_audio_second_window_t

0xa072,	// (0x00028d05) bg_popup_call2_in_pane_cp02

0xa07c,	// (0x00028d0f) call_type_pane_cp04

0xa084,	// (0x00028d17) popup_call2_audio_wait_window_g1

0xa08c,	// (0x00028d1f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002dd88) popup_call2_audio_wait_window_g

0xa094,	// (0x00028d27) popup_call2_audio_wait_window_t3

0xb72f,	// (0x0002a3c2) bg_popup_call2_act_pane_ParamLimits

0xb72f,	// (0x0002a3c2) bg_popup_call2_act_pane

0xb7ef,	// (0x0002a482) call_type_pane_cp03_ParamLimits

0xb7ef,	// (0x0002a482) call_type_pane_cp03

0xb853,	// (0x0002a4e6) popup_call2_audio_first_window_g1_ParamLimits

0xb853,	// (0x0002a4e6) popup_call2_audio_first_window_g1

0xb8c3,	// (0x0002a556) popup_call2_audio_first_window_g2_ParamLimits

0xb8c3,	// (0x0002a556) popup_call2_audio_first_window_g2

0xaf2e,	// (0x00029bc1) popup_call2_audio_first_window_g3_ParamLimits

0xaf2e,	// (0x00029bc1) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002e1ba) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002e1ba) popup_call2_audio_first_window_g

0xb9a1,	// (0x0002a634) popup_call2_audio_first_window_t1_ParamLimits

0xb9a1,	// (0x0002a634) popup_call2_audio_first_window_t1

0xbaa4,	// (0x0002a737) popup_call2_audio_first_window_t4_ParamLimits

0xbaa4,	// (0x0002a737) popup_call2_audio_first_window_t4

0xbb87,	// (0x0002a81a) popup_call2_audio_first_window_t5_ParamLimits

0xbb87,	// (0x0002a81a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002e1c5) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002e1c5) popup_call2_audio_first_window_t

0xa2c5,	// (0x00028f58) bg_popup_call2_act_pane_g1

0xc1f6,	// (0x0002ae89) popup_cale_lunar_info_window_t1

0xc204,	// (0x0002ae97) popup_cale_lunar_info_window_t2

0xc212,	// (0x0002aea5) popup_cale_lunar_info_window_t3

0xa072,	// (0x00028d05) bg_popup_call2_bubble_pane

0xbc88,	// (0x0002a91b) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc88,	// (0x0002a91b) bg_popup_call2_in_pane_cp01

0x9d4e,	// (0x000289e1) call_type_pane_cp02

0xbcd0,	// (0x0002a963) popup_call2_audio_out_window_g1_ParamLimits

0xbcd0,	// (0x0002a963) popup_call2_audio_out_window_g1

0xbcfc,	// (0x0002a98f) popup_call2_audio_out_window_g2_ParamLimits

0xbcfc,	// (0x0002a98f) popup_call2_audio_out_window_g2

0xbd24,	// (0x0002a9b7) popup_call2_audio_out_window_g3_ParamLimits

0xbd24,	// (0x0002a9b7) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002e1ce) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002e1ce) popup_call2_audio_out_window_g

0xbd5f,	// (0x0002a9f2) popup_call2_audio_out_window_t1_ParamLimits

0xbd5f,	// (0x0002a9f2) popup_call2_audio_out_window_t1

0xbdbe,	// (0x0002aa51) popup_call2_audio_out_window_t2_ParamLimits

0xbdbe,	// (0x0002aa51) popup_call2_audio_out_window_t2

0xbe12,	// (0x0002aaa5) popup_call2_audio_out_window_t3_ParamLimits

0xbe12,	// (0x0002aaa5) popup_call2_audio_out_window_t3

0xbe28,	// (0x0002aabb) popup_call2_audio_out_window_t4_ParamLimits

0xbe28,	// (0x0002aabb) popup_call2_audio_out_window_t4

0xbe3e,	// (0x0002aad1) popup_call2_audio_out_window_t5_ParamLimits

0xbe3e,	// (0x0002aad1) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002e1d7) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002e1d7) popup_call2_audio_out_window_t

0xbea2,	// (0x0002ab35) bg_popup_call2_in_pane_ParamLimits

0xbea2,	// (0x0002ab35) bg_popup_call2_in_pane

0xbefe,	// (0x0002ab91) popup_call2_audio_in_window_g1_ParamLimits

0xbefe,	// (0x0002ab91) popup_call2_audio_in_window_g1

0xbf36,	// (0x0002abc9) popup_call2_audio_in_window_g2_ParamLimits

0xbf36,	// (0x0002abc9) popup_call2_audio_in_window_g2

0xbf6e,	// (0x0002ac01) popup_call2_audio_in_window_g3_ParamLimits

0xbf6e,	// (0x0002ac01) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002e1e4) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002e1e4) popup_call2_audio_in_window_g

0xbfc6,	// (0x0002ac59) popup_call2_audio_in_window_t1_ParamLimits

0xbfc6,	// (0x0002ac59) popup_call2_audio_in_window_t1

0xc046,	// (0x0002acd9) popup_call2_audio_in_window_t2_ParamLimits

0xc046,	// (0x0002acd9) popup_call2_audio_in_window_t2

0xc0c6,	// (0x0002ad59) popup_call2_audio_in_window_t3_ParamLimits

0xc0c6,	// (0x0002ad59) popup_call2_audio_in_window_t3

0xc0e0,	// (0x0002ad73) popup_call2_audio_in_window_t4_ParamLimits

0xc0e0,	// (0x0002ad73) popup_call2_audio_in_window_t4

0xc0f2,	// (0x0002ad85) popup_call2_audio_in_window_t5_ParamLimits

0xc0f2,	// (0x0002ad85) popup_call2_audio_in_window_t5

0xc107,	// (0x0002ad9a) popup_call2_audio_in_window_t6_ParamLimits

0xc107,	// (0x0002ad9a) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002e1ed) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002e1ed) popup_call2_audio_in_window_t

0xa2c5,	// (0x00028f58) bg_popup_call2_in_pane_g1

0xc220,	// (0x0002aeb3) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002e255) popup_cale_lunar_info_window_t

0xa2cd,	// (0x00028f60) bg_popup_call2_rect_pane_ParamLimits

0xa2cd,	// (0x00028f60) bg_popup_call2_rect_pane

0xa072,	// (0x00028d05) call2_cli_visual_graphic_pane

0xa072,	// (0x00028d05) call2_cli_visual_text_pane

0x1085,	// (0x0001fd18) smil_status_volume_pane_g3

0x0002,

0xa3e7,	// (0x0002907a) call2_cli_visual_graphic_pane_g1

0xa3e7,	// (0x0002907a) call2_cli_visual_graphic_pane_g2

0xa3e7,	// (0x0002907a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002e1fa) call2_cli_visual_graphic_pane_g

0xc11c,	// (0x0002adaf) bg_popup_call2_rect_pane_g1

0xa485,	// (0x00029118) bg_popup_call2_rect_pane_g2

0xc124,	// (0x0002adb7) bg_popup_call2_rect_pane_g3

0xc12c,	// (0x0002adbf) bg_popup_call2_rect_pane_g4

0xc134,	// (0x0002adc7) bg_popup_call2_rect_pane_g5

0xc13c,	// (0x0002adcf) bg_popup_call2_rect_pane_g6

0xc144,	// (0x0002add7) bg_popup_call2_rect_pane_g7

0xc14c,	// (0x0002addf) bg_popup_call2_rect_pane_g8

0xc154,	// (0x0002ade7) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002e201) bg_popup_call2_rect_pane_g

0xc15c,	// (0x0002adef) bg_popup_call2_bubble_pane_g1

0xc164,	// (0x0002adf7) bg_popup_call2_bubble_pane_g2

0xc16c,	// (0x0002adff) bg_popup_call2_bubble_pane_g3

0xc174,	// (0x0002ae07) bg_popup_call2_bubble_pane_g4

0xc17c,	// (0x0002ae0f) bg_popup_call2_bubble_pane_g5

0xc184,	// (0x0002ae17) bg_popup_call2_bubble_pane_g6

0xc18c,	// (0x0002ae1f) bg_popup_call2_bubble_pane_g7

0xc194,	// (0x0002ae27) bg_popup_call2_bubble_pane_g8

0xc19c,	// (0x0002ae2f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002e214) bg_popup_call2_bubble_pane_g

0x275f,	// (0x000213f2) aid_cale_week_size_cell_pane

0x2df8,	// (0x00021a8b) aid_cams_cif_uncrop_pane_ParamLimits

0x2df8,	// (0x00021a8b) aid_cams_cif_uncrop_pane

0x2f55,	// (0x00021be8) aid_cams_size_cell_ParamLimits

0x2f55,	// (0x00021be8) aid_cams_size_cell

0x2f61,	// (0x00021bf4) grid_cams_pane_ParamLimits

0x2f6f,	// (0x00021c02) linegrid_cams_pane_ParamLimits

0x3157,	// (0x00021dea) call_video_pane_t1

0x3174,	// (0x00021e07) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002df01) call_video_pane_t

0x3640,	// (0x000222d3) aid_cale_month_size_cell_pane_ParamLimits

0x3640,	// (0x000222d3) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002e29e) smil_status_volume_pane_g

0x1092,	// (0x0001fd25) volume_smil_pane_ParamLimits

0x9c10,	// (0x000288a3) aid_popup2_width_pane

0x269b,	// (0x0002132e) cell_qdial_pane_g4_ParamLimits

0x269b,	// (0x0002132e) cell_qdial_pane_g4

0x45c0,	// (0x00023253) aid_blid_cardinal_pane_ParamLimits

0x45d0,	// (0x00023263) aid_blid_destination_pane_ParamLimits

0x45d0,	// (0x00023263) aid_blid_destination_pane

0xa2cd,	// (0x00028f60) bg_popup_call_poc_act_pane_ParamLimits

0xa2cd,	// (0x00028f60) bg_popup_call_poc_act_pane

0xa2cd,	// (0x00028f60) bg_popup_call_poc_inact_pane_ParamLimits

0xa2cd,	// (0x00028f60) bg_popup_call_poc_inact_pane

0xc1a4,	// (0x0002ae37) bg_popup_call_poc_act_pane_g1

0xc1ac,	// (0x0002ae3f) bg_popup_call_poc_act_pane_g2

0xc1b4,	// (0x0002ae47) bg_popup_call_poc_act_pane_g3

0xc174,	// (0x0002ae07) bg_popup_call_poc_act_pane_g4

0xc17c,	// (0x0002ae0f) bg_popup_call_poc_act_pane_g5

0xc1bc,	// (0x0002ae4f) bg_popup_call_poc_act_pane_g6

0xc18c,	// (0x0002ae1f) bg_popup_call_poc_act_pane_g7

0xc1c4,	// (0x0002ae57) bg_popup_call_poc_act_pane_g8

0xa072,	// (0x00028d05) main_usb_pane

0xc32d,	// (0x0002afc0) popup_cale_lunar_info_window

0x348c,	// (0x0002211f) im_reading_pane_t1_ParamLimits

0xa671,	// (0x00029304) list_im_pane_ParamLimits

0xa682,	// (0x00029315) scroll_pane_cp07_ParamLimits

0xa072,	// (0x00028d05) grid_highlight_pane_cp012

0xa2cd,	// (0x00028f60) mup_scale_pane_ParamLimits

0xaf2e,	// (0x00029bc1) main_usb_pane_g1_ParamLimits

0xaf2e,	// (0x00029bc1) main_usb_pane_g1

0x51ec,	// (0x00023e7f) main_usb_pane_g2_ParamLimits

0x51ec,	// (0x00023e7f) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002e23e) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002e23e) main_usb_pane_g

0x51f8,	// (0x00023e8b) main_usb_pane_t1_ParamLimits

0x51f8,	// (0x00023e8b) main_usb_pane_t1

0x520a,	// (0x00023e9d) main_usb_pane_t2_ParamLimits

0x520a,	// (0x00023e9d) main_usb_pane_t2

0x521c,	// (0x00023eaf) main_usb_pane_t3_ParamLimits

0x521c,	// (0x00023eaf) main_usb_pane_t3

0x522e,	// (0x00023ec1) main_usb_pane_t4_ParamLimits

0x522e,	// (0x00023ec1) main_usb_pane_t4

0x5240,	// (0x00023ed3) main_usb_pane_t5_ParamLimits

0x5240,	// (0x00023ed3) main_usb_pane_t5

0x5252,	// (0x00023ee5) main_usb_pane_t6_ParamLimits

0x5252,	// (0x00023ee5) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002e243) main_usb_pane_t_ParamLimits

0x455f,	// (0x000231f2) aid_text_placing

0x456a,	// (0x000231fd) main_location2_pane_t1_ParamLimits

0x4580,	// (0x00023213) main_location2_pane_t2_ParamLimits

0x4596,	// (0x00023229) main_location2_pane_t3_ParamLimits

0x45ac,	// (0x0002323f) main_location2_pane_t4_ParamLimits

0x45ac,	// (0x0002323f) main_location2_pane_t4

0xf3cf,	// (0x0002e062) main_location2_pane_t_ParamLimits

0xa309,	// (0x00028f9c) find_pinb_pane_g2_ParamLimits

0xa309,	// (0x00028f9c) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0002ddae) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0002ddae) find_pinb_pane_g

0xa315,	// (0x00028fa8) find_pinb_pane_t1_ParamLimits

0xa327,	// (0x00028fba) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0002ddb3) find_pinb_pane_t_ParamLimits

0xa072,	// (0x00028d05) main_call3_pane

0x3bbf,	// (0x00022852) cale_month_day_heading_pane_t1_ParamLimits

0x3c41,	// (0x000228d4) cale_month_day_heading_pane_t2_ParamLimits

0x3cce,	// (0x00022961) cale_month_day_heading_pane_t3_ParamLimits

0x3d5b,	// (0x000229ee) cale_month_day_heading_pane_t4_ParamLimits

0x3de8,	// (0x00022a7b) cale_month_day_heading_pane_t5_ParamLimits

0x3e7d,	// (0x00022b10) cale_month_day_heading_pane_t6_ParamLimits

0x3f1a,	// (0x00022bad) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002df39) cale_month_day_heading_pane_t_ParamLimits

0x41c4,	// (0x00022e57) smil_status_volume_pane

0x4daa,	// (0x00023a3d) postcard_address_pane_ParamLimits

0x4daa,	// (0x00023a3d) postcard_address_pane

0x4db8,	// (0x00023a4b) postcard_message_pane_ParamLimits

0x4db8,	// (0x00023a4b) postcard_message_pane

0x51c2,	// (0x00023e55) call2_cli_visual_pane_t1_ParamLimits

0x51c2,	// (0x00023e55) call2_cli_visual_pane_t1

0x5793,	// (0x00024426) postcard_message_pane_t1_ParamLimits

0x5793,	// (0x00024426) postcard_message_pane_t1

0x577c,	// (0x0002440f) postcard_address_pane_t1_ParamLimits

0x577c,	// (0x0002440f) postcard_address_pane_t1

0x576d,	// (0x00024400) popup_call3_audio_in_window_ParamLimits

0x576d,	// (0x00024400) popup_call3_audio_in_window

0x564b,	// (0x000242de) bg_popup_call3_in_pane_ParamLimits

0x564b,	// (0x000242de) bg_popup_call3_in_pane

0x56b3,	// (0x00024346) popup_call3_audio_in_window_g1_ParamLimits

0x56b3,	// (0x00024346) popup_call3_audio_in_window_g1

0x56cb,	// (0x0002435e) popup_call3_audio_in_window_g2_ParamLimits

0x56cb,	// (0x0002435e) popup_call3_audio_in_window_g2

0x56e3,	// (0x00024376) popup_call3_audio_in_window_g3_ParamLimits

0x56e3,	// (0x00024376) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002e2a5) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002e2a5) popup_call3_audio_in_window_g

0x570b,	// (0x0002439e) popup_call3_audio_in_window_t1_ParamLimits

0x570b,	// (0x0002439e) popup_call3_audio_in_window_t1

0x5733,	// (0x000243c6) popup_call3_audio_in_window_t2_ParamLimits

0x5733,	// (0x000243c6) popup_call3_audio_in_window_t2

0x575b,	// (0x000243ee) popup_call3_audio_in_window_t3_ParamLimits

0x575b,	// (0x000243ee) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002e2ae) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002e2ae) popup_call3_audio_in_window_t

0xae96,	// (0x00029b29) bg_popup_call3_rect_pane

0xc11c,	// (0x0002adaf) bg_popup_call3_rect_pane_g1

0xa485,	// (0x00029118) bg_popup_call3_rect_pane_g2

0xc124,	// (0x0002adb7) bg_popup_call3_rect_pane_g3

0xc12c,	// (0x0002adbf) bg_popup_call3_rect_pane_g4

0xc134,	// (0x0002adc7) bg_popup_call3_rect_pane_g5

0xc13c,	// (0x0002adcf) bg_popup_call3_rect_pane_g6

0xc144,	// (0x0002add7) bg_popup_call3_rect_pane_g7

0x49f4,	// (0x00023687) mup_visualizer_osc_pane

0xaf6f,	// (0x00029c02) mup_visualizer_spec_pane

0x566b,	// (0x000242fe) call3_video_qcif_pane_ParamLimits

0x566b,	// (0x000242fe) call3_video_qcif_pane

0x567d,	// (0x00024310) call3_video_qcif_uncrop_pane_ParamLimits

0x567d,	// (0x00024310) call3_video_qcif_uncrop_pane

0x568d,	// (0x00024320) call3_video_subqcif_pane_ParamLimits

0x568d,	// (0x00024320) call3_video_subqcif_pane

0x56a1,	// (0x00024334) call3_video_subqcif_uncrop_pane_ParamLimits

0x56a1,	// (0x00024334) call3_video_subqcif_uncrop_pane

0x56fb,	// (0x0002438e) popup_call3_audio_in_window_g4_ParamLimits

0x56fb,	// (0x0002438e) popup_call3_audio_in_window_g4

0x563a,	// (0x000242cd) mup_spec_half_pane

0x5643,	// (0x000242d6) mup_spec_half_pane_cp

0xc3c8,	// (0x0002b05b) mup_osc_middle_pane

0xc3d1,	// (0x0002b064) mup_visualizer_osc_pane_g1

0x561a,	// (0x000242ad) mup_spec_bar_pane_ParamLimits

0x561a,	// (0x000242ad) mup_spec_bar_pane

0xc3b5,	// (0x0002b048) mup_spec_bar_pane_g1

0xc3bf,	// (0x0002b052) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002e299) mup_spec_bar_pane_g

0x275f,	// (0x000213f2) aid_cale_week_size_cell_pane_ParamLimits

0x2779,	// (0x0002140c) bg_cale_heading_pane_ParamLimits

0xa4b9,	// (0x0002914c) bg_cale_pane_cp01_ParamLimits

0x27a2,	// (0x00021435) cale_week_corner_pane_ParamLimits

0x27c1,	// (0x00021454) cale_week_day_heading_pane_ParamLimits

0x27ef,	// (0x00021482) cale_week_scroll_pane_g1_ParamLimits

0x2813,	// (0x000214a6) cale_week_scroll_pane_g2_ParamLimits

0x282b,	// (0x000214be) cale_week_scroll_pane_g3_ParamLimits

0x2843,	// (0x000214d6) cale_week_scroll_pane_g4_ParamLimits

0x285b,	// (0x000214ee) cale_week_scroll_pane_g5_ParamLimits

0x2873,	// (0x00021506) cale_week_scroll_pane_g6_ParamLimits

0x2893,	// (0x00021526) cale_week_scroll_pane_g7_ParamLimits

0x28b3,	// (0x00021546) cale_week_scroll_pane_g8_ParamLimits

0x28d3,	// (0x00021566) cale_week_scroll_pane_g9_ParamLimits

0x28f0,	// (0x00021583) cale_week_scroll_pane_g10_ParamLimits

0x290d,	// (0x000215a0) cale_week_scroll_pane_g11_ParamLimits

0x292a,	// (0x000215bd) cale_week_scroll_pane_g12_ParamLimits

0x2947,	// (0x000215da) cale_week_scroll_pane_g13_ParamLimits

0x296c,	// (0x000215ff) cale_week_scroll_pane_g14_ParamLimits

0x2995,	// (0x00021628) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0002de3f) cale_week_scroll_pane_g_ParamLimits

0x29de,	// (0x00021671) cale_week_time_pane_ParamLimits

0x29fe,	// (0x00021691) grid_cale_week_pane_ParamLimits

0xa4d7,	// (0x0002916a) listscroll_cale_week_pane_t1

0xa4e9,	// (0x0002917c) scroll_pane_cp08_ParamLimits

0x36ad,	// (0x00022340) cale_month_corner_pane_ParamLimits

0xa8a2,	// (0x00029535) cale_month_pane_t1

0x3b51,	// (0x000227e4) cale_month_week_pane_ParamLimits

0xaf2e,	// (0x00029bc1) popup_call_status_window_g1_ParamLimits

0x43d7,	// (0x0002306a) popup_call_status_window_g2_ParamLimits

0x43e3,	// (0x00023076) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002dfe9) popup_call_status_window_g_ParamLimits

0xac38,	// (0x000298cb) aid_call2_pane

0x4c91,	// (0x00023924) msg_header_pane_g1

0x4daa,	// (0x00023a3d) postcard_address2_pane_ParamLimits

0x4daa,	// (0x00023a3d) postcard_address2_pane

0x4db8,	// (0x00023a4b) postcard_message2_pane_ParamLimits

0x4db8,	// (0x00023a4b) postcard_message2_pane

0x55c1,	// (0x00024254) message2_row_pane_ParamLimits

0x55c1,	// (0x00024254) message2_row_pane

0x55db,	// (0x0002426e) address2_row_pane_ParamLimits

0x55db,	// (0x0002426e) address2_row_pane

0xc383,	// (0x0002b016) postcard_message2_row_pane_g1

0xc38b,	// (0x0002b01e) postcard_message2_row_pane_t1

0xc383,	// (0x0002b016) address2_row_pane_g1

0xc38b,	// (0x0002b01e) address2_row_pane_t1

0x0ebc,	// (0x0001fb4f) aid_size_cell_vorec

0xa072,	// (0x00028d05) main_rss_pane

0x55ee,	// (0x00024281) rss_list_single_pane_ParamLimits

0x55ee,	// (0x00024281) rss_list_single_pane

0xc399,	// (0x0002b02c) rss_list_single_pane_t1

0xc3a7,	// (0x0002b03a) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002e294) rss_list_single_pane_t

0xa072,	// (0x00028d05) main_camera2_pane

0xa072,	// (0x00028d05) main_video2_pane

0x10f2,	// (0x0001fd85) cams_zoom_pane_cp2_ParamLimits

0x10f2,	// (0x0001fd85) cams_zoom_pane_cp2

0x10fe,	// (0x0001fd91) image2_vga_pane_ParamLimits

0x10fe,	// (0x0001fd91) image2_vga_pane

0x110d,	// (0x0001fda0) main_camera2_pane_g1_ParamLimits

0x110d,	// (0x0001fda0) main_camera2_pane_g1

0x1119,	// (0x0001fdac) main_camera2_pane_g2_ParamLimits

0x1119,	// (0x0001fdac) main_camera2_pane_g2

0x1125,	// (0x0001fdb8) main_camera2_pane_g3_ParamLimits

0x1125,	// (0x0001fdb8) main_camera2_pane_g3

0x1131,	// (0x0001fdc4) main_camera2_pane_g4_ParamLimits

0x1131,	// (0x0001fdc4) main_camera2_pane_g4

0x113d,	// (0x0001fdd0) main_camera2_pane_g5_ParamLimits

0x113d,	// (0x0001fdd0) main_camera2_pane_g5

0x1149,	// (0x0001fddc) main_camera2_pane_g6_ParamLimits

0x1149,	// (0x0001fddc) main_camera2_pane_g6

0x1155,	// (0x0001fde8) main_camera2_pane_g7_ParamLimits

0x1155,	// (0x0001fde8) main_camera2_pane_g7

0x1161,	// (0x0001fdf4) main_camera2_pane_g8_ParamLimits

0x1161,	// (0x0001fdf4) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002e2b5) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002e2b5) main_camera2_pane_g

0x1179,	// (0x0001fe0c) main_camera2_pane_t1_ParamLimits

0x1179,	// (0x0001fe0c) main_camera2_pane_t1

0x118b,	// (0x0001fe1e) main_camera2_pane_t2_ParamLimits

0x118b,	// (0x0001fe1e) main_camera2_pane_t2

0x119d,	// (0x0001fe30) main_camera2_pane_t3_ParamLimits

0x119d,	// (0x0001fe30) main_camera2_pane_t3

0x11af,	// (0x0001fe42) main_camera2_pane_t4_ParamLimits

0x11af,	// (0x0001fe42) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002e2c8) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002e2c8) main_camera2_pane_t

0x120c,	// (0x0001fe9f) cams_zoom_pane_cp4_ParamLimits

0x120c,	// (0x0001fe9f) cams_zoom_pane_cp4

0x121c,	// (0x0001feaf) image2_cif_pane_ParamLimits

0x121c,	// (0x0001feaf) image2_cif_pane

0x1231,	// (0x0001fec4) image2_subqcif_pane_ParamLimits

0x1231,	// (0x0001fec4) image2_subqcif_pane

0x1240,	// (0x0001fed3) main_video2_pane_g1_ParamLimits

0x1240,	// (0x0001fed3) main_video2_pane_g1

0x1252,	// (0x0001fee5) main_video2_pane_g2_ParamLimits

0x1252,	// (0x0001fee5) main_video2_pane_g2

0x1262,	// (0x0001fef5) main_video2_pane_g3_ParamLimits

0x1262,	// (0x0001fef5) main_video2_pane_g3

0x1272,	// (0x0001ff05) main_video2_pane_g4_ParamLimits

0x1272,	// (0x0001ff05) main_video2_pane_g4

0x1282,	// (0x0001ff15) main_video2_pane_g5_ParamLimits

0x1282,	// (0x0001ff15) main_video2_pane_g5

0x1292,	// (0x0001ff25) main_video2_pane_g6_ParamLimits

0x1292,	// (0x0001ff25) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002e2d7) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002e2d7) main_video2_pane_g

0x12a4,	// (0x0001ff37) main_video2_pane_t1_ParamLimits

0x12a4,	// (0x0001ff37) main_video2_pane_t1

0x12be,	// (0x0001ff51) main_video2_pane_t2_ParamLimits

0x12be,	// (0x0001ff51) main_video2_pane_t2

0x12e4,	// (0x0001ff77) main_video2_pane_t3_ParamLimits

0x12e4,	// (0x0001ff77) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002e2e4) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002e2e4) main_video2_pane_t

0x5309,	// (0x00023f9c) call_muted_g2

0x0001,

0xf5f3,	// (0x0002e286) call_muted_g

0xa072,	// (0x00028d05) main_mup2_pane

0xc408,	// (0x0002b09b) main_mup2_pane_g1_ParamLimits

0xc408,	// (0x0002b09b) main_mup2_pane_g1

0x57ae,	// (0x00024441) main_mup2_pane_g2_ParamLimits

0x57ae,	// (0x00024441) main_mup2_pane_g2

0x1333,	// (0x0001ffc6) main_mup_pane_g13_cp1

0x133b,	// (0x0001ffce) mup_volume_pane_cp1

0x57d0,	// (0x00024463) main_mup2_pane_g4_ParamLimits

0x57d0,	// (0x00024463) main_mup2_pane_g4

0x57e5,	// (0x00024478) main_mup2_pane_g5_ParamLimits

0x57e5,	// (0x00024478) main_mup2_pane_g5

0x57fa,	// (0x0002448d) main_mup2_pane_g6_ParamLimits

0x57fa,	// (0x0002448d) main_mup2_pane_g6

0x580f,	// (0x000244a2) main_mup2_pane_g7_ParamLimits

0x580f,	// (0x000244a2) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002e2eb) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002e2eb) main_mup2_pane_g

0x582b,	// (0x000244be) main_mup2_pane_t1_ParamLimits

0x582b,	// (0x000244be) main_mup2_pane_t1

0x5842,	// (0x000244d5) main_mup2_pane_t2_ParamLimits

0x5842,	// (0x000244d5) main_mup2_pane_t2

0x5859,	// (0x000244ec) main_mup2_pane_t3_ParamLimits

0x5859,	// (0x000244ec) main_mup2_pane_t3

0x5870,	// (0x00024503) main_mup2_pane_t4_ParamLimits

0x5870,	// (0x00024503) main_mup2_pane_t4

0x588a,	// (0x0002451d) main_mup2_pane_t5_ParamLimits

0x588a,	// (0x0002451d) main_mup2_pane_t5

0x58a4,	// (0x00024537) main_mup2_pane_t6_ParamLimits

0x58a4,	// (0x00024537) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002e2fa) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002e2fa) main_mup2_pane_t

0x58dc,	// (0x0002456f) mup2_visualizer_pane_ParamLimits

0x58dc,	// (0x0002456f) mup2_visualizer_pane

0x5912,	// (0x000245a5) mup_progress_pane_cp_ParamLimits

0x5912,	// (0x000245a5) mup_progress_pane_cp

0x131e,	// (0x0001ffb1) mup_volume_pane_cp_ParamLimits

0x131e,	// (0x0001ffb1) mup_volume_pane_cp

0x592b,	// (0x000245be) mup2_visualizer_pane_g1_ParamLimits

0x592b,	// (0x000245be) mup2_visualizer_pane_g1

0xc414,	// (0x0002b0a7) mup2_visualizer_pane_g2_ParamLimits

0xc414,	// (0x0002b0a7) mup2_visualizer_pane_g2

0x5940,	// (0x000245d3) mup2_visualizer_pane_g3_ParamLimits

0x5940,	// (0x000245d3) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002e307) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002e307) mup2_visualizer_pane_g

0xb1e8,	// (0x00029e7b) aid_size_cell_fmradio

0x541f,	// (0x000240b2) aid_height_parent_landcape

0xa700,	// (0x00029393) wml_content_pane_cp

0xa708,	// (0x0002939b) wml_tabs_pane

0xa711,	// (0x000293a4) popup_wml_miniature_window

0xa719,	// (0x000293ac) scroll_pane_cp021

0xa72d,	// (0x000293c0) wml_content_pane_comp8

0xa072,	// (0x00028d05) bg_popup_sub_pane_cp05

0xc432,	// (0x0002b0c5) popup_wml_miniature_window_g1

0xc43a,	// (0x0002b0cd) wml_miniature_view_pane

0x594e,	// (0x000245e1) aid_size_wml_view

0x5956,	// (0x000245e9) wml_miniature_view_pane_g1

0x595f,	// (0x000245f2) wml_miniature_view_pane_g2

0x5968,	// (0x000245fb) wml_miniature_view_pane_g3

0x5970,	// (0x00024603) wml_miniature_view_pane_g4

0x5978,	// (0x0002460b) wml_miniature_view_pane_g5

0x5980,	// (0x00024613) wml_miniature_view_pane_g6

0x5988,	// (0x0002461b) wml_miniature_view_pane_g7

0x5990,	// (0x00024623) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002e30e) wml_miniature_view_pane_g

0xc408,	// (0x0002b09b) background_graphic_ParamLimits

0xc408,	// (0x0002b09b) background_graphic

0xc442,	// (0x0002b0d5) wml_tabs_2_pane

0xc44b,	// (0x0002b0de) wml_tabs_3_pane_ParamLimits

0xc44b,	// (0x0002b0de) wml_tabs_3_pane

0xc45d,	// (0x0002b0f0) wml_tabs_4_pane_ParamLimits

0xc45d,	// (0x0002b0f0) wml_tabs_4_pane

0xc473,	// (0x0002b106) wml_tabs_5_pane_ParamLimits

0xc473,	// (0x0002b106) wml_tabs_5_pane

0xc48d,	// (0x0002b120) wml_tabs_pane_g2_ParamLimits

0xc48d,	// (0x0002b120) wml_tabs_pane_g2

0xc4a1,	// (0x0002b134) wml_tabs_pane_g3_ParamLimits

0xc4a1,	// (0x0002b134) wml_tabs_pane_g3

0x5998,	// (0x0002462b) wml_tabs_2_active_pane_ParamLimits

0x5998,	// (0x0002462b) wml_tabs_2_active_pane

0x59aa,	// (0x0002463d) wml_tabs_2_passive_pane_ParamLimits

0x59aa,	// (0x0002463d) wml_tabs_2_passive_pane

0x59bc,	// (0x0002464f) wml_tabs_3_active_pane_cp_ParamLimits

0x59bc,	// (0x0002464f) wml_tabs_3_active_pane_cp

0x59cf,	// (0x00024662) wml_tabs_3_passive_pane_ParamLimits

0x59cf,	// (0x00024662) wml_tabs_3_passive_pane

0x59e0,	// (0x00024673) wml_tabs_3_passive_pane_cp_ParamLimits

0x59e0,	// (0x00024673) wml_tabs_3_passive_pane_cp

0x59f5,	// (0x00024688) tabs_4_active_pane

0x59fd,	// (0x00024690) tabs_4_passive_pane

0x5a05,	// (0x00024698) tabs_4_passive_pane_cp

0x5a0d,	// (0x000246a0) tabs_4_passive_pane_cp2

0x51e4,	// (0x00023e77) aid_height_text

0x49bd,	// (0x00023650) mup_volume_cont_pane_ParamLimits

0x49bd,	// (0x00023650) mup_volume_cont_pane

0x2458,	// (0x000210eb) aid_size_cell_pinb

0x2462,	// (0x000210f5) aid_size_list_pinb

0x58fb,	// (0x0002458e) mup2_volume_cont_pane_ParamLimits

0x58fb,	// (0x0002458e) mup2_volume_cont_pane

0x130a,	// (0x0001ff9d) mup2_volume_cont_pane_g1_ParamLimits

0x130a,	// (0x0001ff9d) mup2_volume_cont_pane_g1

0x20d2,	// (0x00020d65) aid_size_cell_touch_ParamLimits

0x20d2,	// (0x00020d65) aid_size_cell_touch

0x2342,	// (0x00020fd5) touch_pane_ParamLimits

0x2342,	// (0x00020fd5) touch_pane

0x9bfe,	// (0x00028891) main_rss2_pane

0xc4be,	// (0x0002b151) listscroll_rss2_pane

0xc4c7,	// (0x0002b15a) rss2_navigation_pane

0xc4cf,	// (0x0002b162) list_rss2_pane

0xad5c,	// (0x000299ef) scroll_pane_cp22

0xc4d7,	// (0x0002b16a) rss2_navigation_pane_g1

0xc4e0,	// (0x0002b173) rss2_navigation_pane_g2

0xc4e8,	// (0x0002b17b) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002e31f) rss2_navigation_pane_g

0xc4f0,	// (0x0002b183) rss2_navigation_pane_t1

0x5a17,	// (0x000246aa) rss2_list_single_pane_ParamLimits

0x5a17,	// (0x000246aa) rss2_list_single_pane

0xc4fe,	// (0x0002b191) rss2_list_single_pane_t2

0xc50c,	// (0x0002b19f) rss2_list_single_pane_t3_ParamLimits

0xc50c,	// (0x0002b19f) rss2_list_single_pane_t3

0xc529,	// (0x0002b1bc) rss2_list_single_pane_t4

0x41ae,	// (0x00022e41) smil_status_pane_g1

0xa5df,	// (0x00029272) main_image2_pane_ParamLimits

0xa5df,	// (0x00029272) main_image2_pane

0x116d,	// (0x0001fe00) main_camera2_pane_g9_ParamLimits

0x116d,	// (0x0001fe00) main_camera2_pane_g9

0x11c1,	// (0x0001fe54) main_camera2_pane_t5_ParamLimits

0x11c1,	// (0x0001fe54) main_camera2_pane_t5

0x11d3,	// (0x0001fe66) main_camera2_pane_t6_ParamLimits

0x11d3,	// (0x0001fe66) main_camera2_pane_t6

0x5a3a,	// (0x000246cd) main_image2_pane_g1_ParamLimits

0x5a3a,	// (0x000246cd) main_image2_pane_g1

0x4f81,	// (0x00023c14) smil2_video_pane_ParamLimits

0x4f81,	// (0x00023c14) smil2_video_pane

0x9c1c,	// (0x000288af) aid_zoom_text_primary_cp

0x9c55,	// (0x000288e8) popup_preview_fixed_window

0xa669,	// (0x000292fc) im_reading_pane_g1

0x10b7,	// (0x0001fd4a) cams2_bc_adjust_pane_cp_ParamLimits

0x10b7,	// (0x0001fd4a) cams2_bc_adjust_pane_cp

0x11fe,	// (0x0001fe91) cams2_bc_adjust_pane_ParamLimits

0x11fe,	// (0x0001fe91) cams2_bc_adjust_pane

0xd482,	// (0x0002c115) cams2_bc_adjust_pane_g1

0x1343,	// (0x0001ffd6) cams2_slider_pane

0x134c,	// (0x0001ffdf) cams2_slider_pane_g1

0x1355,	// (0x0001ffe8) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002e326) cams2_slider_pane_g

0x0aeb,	// (0x0001f77e) calc_display_pane_ParamLimits

0x0b09,	// (0x0001f79c) calc_paper_pane_ParamLimits

0x0b25,	// (0x0001f7b8) grid_calc_pane_ParamLimits

0x0fe4,	// (0x0001fc77) popup_clock_digital_window_t1_ParamLimits

0xb185,	// (0x00029e18) main_image_pane_t1

0x0ad1,	// (0x0001f764) aid_size_cell_calc_ParamLimits

0x0ad1,	// (0x0001f764) aid_size_cell_calc

0x5451,	// (0x000240e4) popup_blid_sat_info2_window_ParamLimits

0x5451,	// (0x000240e4) popup_blid_sat_info2_window

0xc53f,	// (0x0002b1d2) aid_size_cell_blid

0xc547,	// (0x0002b1da) bg_popup_window_pane_cp07

0xc56a,	// (0x0002b1fd) grid_popup_blid_pane

0xc574,	// (0x0002b207) heading_pane_cp05_ParamLimits

0xc574,	// (0x0002b207) heading_pane_cp05

0xc63e,	// (0x0002b2d1) cell_popup_blid_pane_ParamLimits

0xc63e,	// (0x0002b2d1) cell_popup_blid_pane

0xc668,	// (0x0002b2fb) cell_popup_blid_pane_g1

0xc670,	// (0x0002b303) cell_popup_blid_pane_t1

0x58c1,	// (0x00024554) mup2_indicator_pane_ParamLimits

0x58c1,	// (0x00024554) mup2_indicator_pane

0xae96,	// (0x00029b29) mup2_visualizer_osc_pane

0xc420,	// (0x0002b0b3) mup2_visualizer_spec_pane_ParamLimits

0xc420,	// (0x0002b0b3) mup2_visualizer_spec_pane

0x5a46,	// (0x000246d9) mup2_spec_half_pane

0x5a4f,	// (0x000246e2) mup2_spec_half_pane_cp

0x5a59,	// (0x000246ec) mup2_spec_bar_pane_ParamLimits

0x5a59,	// (0x000246ec) mup2_spec_bar_pane

0xc3b5,	// (0x0002b048) mup2_spec_bar_pane_g1

0xc3bf,	// (0x0002b052) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002e299) mup2_spec_bar_pane_g

0x5a78,	// (0x0002470b) mup2_osc_middle_pane

0xc3d1,	// (0x0002b064) mup2_visualizer_osc_pane_g1

0x9c7f,	// (0x00028912) popup_number_entry_window_t1_ParamLimits

0x9c92,	// (0x00028925) popup_number_entry_window_t2_ParamLimits

0x9ca4,	// (0x00028937) popup_number_entry_window_t3_ParamLimits

0x2399,	// (0x0002102c) popup_number_entry_window_t5_ParamLimits

0x2399,	// (0x0002102c) popup_number_entry_window_t5

0xf0c6,	// (0x0002dd59) popup_number_entry_window_t_ParamLimits

0x9cb6,	// (0x00028949) text_title_cp2_ParamLimits

0x1023,	// (0x0001fcb6) aid_hotspot_pointer_text2_pane

0x1079,	// (0x0001fd0c) main_viewer_pane_g9_ParamLimits

0x1079,	// (0x0001fd0c) main_viewer_pane_g9

0xa8a2,	// (0x00029535) cale_month_pane_t1_ParamLimits

0xa8c8,	// (0x0002955b) bg_cale_pane_ParamLimits

0xa8e0,	// (0x00029573) list_cale_pane_ParamLimits

0xa8f1,	// (0x00029584) listscroll_cale_day_pane_t1

0xa903,	// (0x00029596) scroll_pane_cp09_ParamLimits

0x49fc,	// (0x0002368f) main_mup_eq_pane_t1_ParamLimits

0x49fc,	// (0x0002368f) main_mup_eq_pane_t1

0x4a18,	// (0x000236ab) main_mup_eq_pane_t2_ParamLimits

0x4a18,	// (0x000236ab) main_mup_eq_pane_t2

0x4a34,	// (0x000236c7) main_mup_eq_pane_t3_ParamLimits

0x4a34,	// (0x000236c7) main_mup_eq_pane_t3

0x4a4e,	// (0x000236e1) main_mup_eq_pane_t4_ParamLimits

0x4a4e,	// (0x000236e1) main_mup_eq_pane_t4

0x4a68,	// (0x000236fb) main_mup_eq_pane_t5_ParamLimits

0x4a68,	// (0x000236fb) main_mup_eq_pane_t5

0x4a82,	// (0x00023715) main_mup_eq_pane_t6_ParamLimits

0x4a82,	// (0x00023715) main_mup_eq_pane_t6

0x4a98,	// (0x0002372b) main_mup_eq_pane_t7_ParamLimits

0x4a98,	// (0x0002372b) main_mup_eq_pane_t7

0x4aae,	// (0x00023741) main_mup_eq_pane_t8_ParamLimits

0x4aae,	// (0x00023741) main_mup_eq_pane_t8

0x4ac4,	// (0x00023757) main_mup_eq_pane_t9_ParamLimits

0x4ac4,	// (0x00023757) main_mup_eq_pane_t9

0x4ae0,	// (0x00023773) main_mup_eq_pane_t10_ParamLimits

0x4ae0,	// (0x00023773) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002e0e8) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002e0e8) main_mup_eq_pane_t

0x4ba5,	// (0x00023838) mup_equalizer_pane_cp5_ParamLimits

0x4bbd,	// (0x00023850) mup_equalizer_pane_cp6_ParamLimits

0x4bd5,	// (0x00023868) mup_equalizer_pane_cp7_ParamLimits

0x9bfe,	// (0x00028891) main_gallery_pane

0xc3da,	// (0x0002b06d) smil2_volume_pane

0xc3e2,	// (0x0002b075) smil_status_volume_pane_g1_ParamLimits

0xc3f5,	// (0x0002b088) smil_status_volume_pane_g2_ParamLimits

0x1085,	// (0x0001fd18) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002e29e) smil_status_volume_pane_g_ParamLimits

0xc547,	// (0x0002b1da) bg_popup_window_pane_cp07_ParamLimits

0xc555,	// (0x0002b1e8) blid_firmament_pane

0x5a81,	// (0x00024714) aid_size_cell_gallery_ParamLimits

0x5a81,	// (0x00024714) aid_size_cell_gallery

0x5a8f,	// (0x00024722) grid_gallery_pane_ParamLimits

0x5a8f,	// (0x00024722) grid_gallery_pane

0x5a9f,	// (0x00024732) cell_gallery_pane_ParamLimits

0x5a9f,	// (0x00024732) cell_gallery_pane

0xc67e,	// (0x0002b311) bg_cell_gallery_focus_pane_ParamLimits

0xc67e,	// (0x0002b311) bg_cell_gallery_focus_pane

0xc690,	// (0x0002b323) cell_gallery_pane_g1_ParamLimits

0xc690,	// (0x0002b323) cell_gallery_pane_g1

0x5ae5,	// (0x00024778) cell_gallery_pane_g2_ParamLimits

0x5ae5,	// (0x00024778) cell_gallery_pane_g2

0x5af2,	// (0x00024785) cell_gallery_pane_g3_ParamLimits

0x5af2,	// (0x00024785) cell_gallery_pane_g3

0xc69c,	// (0x0002b32f) cell_gallery_pane_g4_ParamLimits

0xc69c,	// (0x0002b32f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002e34c) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002e34c) cell_gallery_pane_g

0xc6a8,	// (0x0002b33b) bg_cell_gallery_focus_pane_g1

0xc6b0,	// (0x0002b343) bg_cell_gallery_focus_pane_g2

0xc6b8,	// (0x0002b34b) bg_cell_gallery_focus_pane_g3

0xc6c0,	// (0x0002b353) bg_cell_gallery_focus_pane_g4

0xc6c8,	// (0x0002b35b) bg_cell_gallery_focus_pane_g5

0xc6d0,	// (0x0002b363) bg_cell_gallery_focus_pane_g6

0xc6d8,	// (0x0002b36b) bg_cell_gallery_focus_pane_g7

0xc6e0,	// (0x0002b373) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002e355) bg_cell_gallery_focus_pane_g

0xc6e8,	// (0x0002b37b) aid_firma_cardinal

0xc6fc,	// (0x0002b38f) blid_firmament_pane_t1

0xc713,	// (0x0002b3a6) blid_firmament_pane_t2

0xc72a,	// (0x0002b3bd) blid_firmament_pane_t3

0xc741,	// (0x0002b3d4) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002e366) blid_firmament_pane_t

0xc758,	// (0x0002b3eb) blid_sat_info_pane

0xc768,	// (0x0002b3fb) blid_sat_info_pane_g1

0xc768,	// (0x0002b3fb) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002e36f) blid_sat_info_pane_g

0xc772,	// (0x0002b405) blid_sat_info_pane_t1

0xc780,	// (0x0002b413) smil2_volume_content_pane

0xc789,	// (0x0002b41c) smil2_volume_pane_g1

0xc791,	// (0x0002b424) smil2_volume_content_pane_g1

0xc79a,	// (0x0002b42d) smil2_volume_content_pane_g2

0xc7a3,	// (0x0002b436) smil2_volume_content_pane_g3

0xc7ac,	// (0x0002b43f) smil2_volume_content_pane_g4

0xc7b5,	// (0x0002b448) smil2_volume_content_pane_g5

0xc7be,	// (0x0002b451) smil2_volume_content_pane_g6

0xc7c7,	// (0x0002b45a) smil2_volume_content_pane_g7

0xc7d0,	// (0x0002b463) smil2_volume_content_pane_g8

0xc7d9,	// (0x0002b46c) smil2_volume_content_pane_g9

0xc7e2,	// (0x0002b475) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002e374) smil2_volume_content_pane_g

0x2ac1,	// (0x00021754) cale_week_day_heading_pane_t1_ParamLimits

0x2b09,	// (0x0002179c) cale_week_day_heading_pane_t2_ParamLimits

0x2b56,	// (0x000217e9) cale_week_day_heading_pane_t3_ParamLimits

0x2ba3,	// (0x00021836) cale_week_day_heading_pane_t4_ParamLimits

0x2bf0,	// (0x00021883) cale_week_day_heading_pane_t5_ParamLimits

0x2c3d,	// (0x000218d0) cale_week_day_heading_pane_t6_ParamLimits

0x2c8a,	// (0x0002191d) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0002de60) cale_week_day_heading_pane_t_ParamLimits

0xa50b,	// (0x0002919e) bg_cale_side_pane_ParamLimits

0x0c8a,	// (0x0001f91d) cale_week_time_pane_t1_ParamLimits

0x0cce,	// (0x0001f961) cale_week_time_pane_t2_ParamLimits

0x0d12,	// (0x0001f9a5) cale_week_time_pane_t3_ParamLimits

0x0d56,	// (0x0001f9e9) cale_week_time_pane_t4_ParamLimits

0x0d9a,	// (0x0001fa2d) cale_week_time_pane_t5_ParamLimits

0x0dde,	// (0x0001fa71) cale_week_time_pane_t6_ParamLimits

0x0e22,	// (0x0001fab5) cale_week_time_pane_t7_ParamLimits

0x0e6e,	// (0x0001fb01) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0002de6f) cale_week_time_pane_t_ParamLimits

0x2cd2,	// (0x00021965) cell_cale_week_pane_g2_ParamLimits

0xa50b,	// (0x0002919e) bg_cale_side_pane_cp01_ParamLimits

0x3fb7,	// (0x00022c4a) cale_month_week_pane_t1_ParamLimits

0x3fd0,	// (0x00022c63) cale_month_week_pane_t2_ParamLimits

0x3fe9,	// (0x00022c7c) cale_month_week_pane_t3_ParamLimits

0x4002,	// (0x00022c95) cale_month_week_pane_t4_ParamLimits

0x401b,	// (0x00022cae) cale_month_week_pane_t5_ParamLimits

0x4036,	// (0x00022cc9) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002df48) cale_month_week_pane_t_ParamLimits

0x0f44,	// (0x0001fbd7) cell_cale_month_pane_g1_ParamLimits

0x9bfe,	// (0x00028891) main_cale_event_viewer_pane

0x9bfe,	// (0x00028891) listscroll_cale_event_viewer_pane

0xc7eb,	// (0x0002b47e) list_cale_ev_pane

0xc7f3,	// (0x0002b486) scroll_pane_cp023

0x5aff,	// (0x00024792) field_cale_ev_pane_ParamLimits

0x5aff,	// (0x00024792) field_cale_ev_pane

0xc7ff,	// (0x0002b492) field_cale_ev_content_pane_ParamLimits

0xc7ff,	// (0x0002b492) field_cale_ev_content_pane

0xc80b,	// (0x0002b49e) field_cale_ev_pane_g1_ParamLimits

0xc80b,	// (0x0002b49e) field_cale_ev_pane_g1

0xc817,	// (0x0002b4aa) field_cale_ev_pane_g2_ParamLimits

0xc817,	// (0x0002b4aa) field_cale_ev_pane_g2

0xc82f,	// (0x0002b4c2) field_cale_ev_pane_g3_ParamLimits

0xc82f,	// (0x0002b4c2) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002e389) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002e389) field_cale_ev_pane_g

0xc847,	// (0x0002b4da) field_cale_ev_pane_t1_ParamLimits

0xc847,	// (0x0002b4da) field_cale_ev_pane_t1

0x5b23,	// (0x000247b6) field_cale_ev_content_pane_t1_ParamLimits

0x5b23,	// (0x000247b6) field_cale_ev_content_pane_t1

0xb023,	// (0x00029cb6) bg_button_pane_cp01

0x2743,	// (0x000213d6) listscroll_cale_week_pane_ParamLimits

0x2755,	// (0x000213e8) popup_toolbar_window_cp01

0xa4d7,	// (0x0002916a) listscroll_cale_week_pane_t1_ParamLimits

0x2743,	// (0x000213d6) listscroll_cale_day_pane_ParamLimits

0x2755,	// (0x000213e8) popup_toolbar_window_cp02

0xa8f1,	// (0x00029584) listscroll_cale_day_pane_t1_ParamLimits

0x2743,	// (0x000213d6) main_cale_month_pane_ParamLimits

0x5535,	// (0x000241c8) popup_toolbar_window_cp03_ParamLimits

0x5535,	// (0x000241c8) popup_toolbar_window_cp03

0x4e91,	// (0x00023b24) main_image_pane_g2_ParamLimits

0x4e91,	// (0x00023b24) main_image_pane_g2

0x4e9d,	// (0x00023b30) main_image_pane_g3_ParamLimits

0x4e9d,	// (0x00023b30) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002e17a) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002e17a) main_image_pane_g

0xb185,	// (0x00029e18) main_image_pane_t1_ParamLimits

0x4ea9,	// (0x00023b3c) main_image_pane_t2_ParamLimits

0x4ea9,	// (0x00023b3c) main_image_pane_t2

0x4ebb,	// (0x00023b4e) main_image_pane_t3_ParamLimits

0x4ebb,	// (0x00023b4e) main_image_pane_t3

0x4ecd,	// (0x00023b60) main_image_pane_t4_ParamLimits

0x4ecd,	// (0x00023b60) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002e181) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002e181) main_image_pane_t

0x4edf,	// (0x00023b72) popup_image_details_window_cp01

0x4ee9,	// (0x00023b7c) popup_toobar_trans_pane_cp01_ParamLimits

0x4ee9,	// (0x00023b7c) popup_toobar_trans_pane_cp01

0x54a6,	// (0x00024139) popup_image_details_window_ParamLimits

0x54a6,	// (0x00024139) popup_image_details_window

0xc339,	// (0x0002afcc) popup_image_focus_window

0x10a9,	// (0x0001fd3c) camera2_autofocus_pane_ParamLimits

0x10a9,	// (0x0001fd3c) camera2_autofocus_pane

0x9bfe,	// (0x00028891) bg_popup_sub_pane_cp06

0xc85e,	// (0x0002b4f1) popup_image_focus_window_g1

0xc866,	// (0x0002b4f9) popup_image_focus_window_g2

0xc86e,	// (0x0002b501) popup_image_focus_window_g3

0xc876,	// (0x0002b509) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002e390) popup_image_focus_window_g

0xc87e,	// (0x0002b511) popup_image_focus_window_t1

0xc88c,	// (0x0002b51f) popup_image_focus_window_t2

0xc89c,	// (0x0002b52f) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002e399) popup_image_focus_window_t

0xc8aa,	// (0x0002b53d) camera2_autofocus_pane_g1

0xa5df,	// (0x00029272) bg_tb_trans_pane_cp01

0xc8b8,	// (0x0002b54b) popup_image_details_window_g1

0xc8cb,	// (0x0002b55e) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002e3ab) popup_image_details_window_g

0xc8f4,	// (0x0002b587) popup_image_details_window_t1

0xc906,	// (0x0002b599) popup_image_details_window_t2

0xc91f,	// (0x0002b5b2) popup_image_details_window_t3

0xc933,	// (0x0002b5c6) popup_image_details_window_t4

0xc94e,	// (0x0002b5e1) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002e3b2) popup_image_details_window_t

0xa37e,	// (0x00029011) bg_calc_paper_pane_ParamLimits

0x0b51,	// (0x0001f7e4) grid_highlight_pane_cp013

0x0b5b,	// (0x0001f7ee) list_calc_pane_ParamLimits

0x0b6d,	// (0x0001f800) scroll_pane_cp024

0xa392,	// (0x00029025) bg_calc_display_pane_ParamLimits

0x0b75,	// (0x0001f808) calc_display_pane_t1_ParamLimits

0x0b8a,	// (0x0001f81d) calc_display_pane_t2_ParamLimits

0x0b9f,	// (0x0001f832) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0002dde0) calc_display_pane_t_ParamLimits

0x0c0a,	// (0x0001f89d) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0002ddfd) cell_calc_pane_g

0x0c13,	// (0x0001f8a6) cell_calc_pane_t1

0xa3f1,	// (0x00029084) grid_highlight_pane_cp02_ParamLimits

0xa407,	// (0x0002909a) toolbar_button_pane_cp01_ParamLimits

0xa407,	// (0x0002909a) toolbar_button_pane_cp01

0xb1ca,	// (0x00029e5d) temp_image_control_pane_ParamLimits

0xb1ca,	// (0x00029e5d) temp_image_control_pane

0xa5df,	// (0x00029272) main_mp3_pane

0xc968,	// (0x0002b5fb) temp_image_control_pane_g1_ParamLimits

0xc968,	// (0x0002b5fb) temp_image_control_pane_g1

0xc976,	// (0x0002b609) temp_image_control_pane_g2_ParamLimits

0xc976,	// (0x0002b609) temp_image_control_pane_g2

0xc988,	// (0x0002b61b) temp_image_control_pane_g3_ParamLimits

0xc988,	// (0x0002b61b) temp_image_control_pane_g3

0x5b6e,	// (0x00024801) temp_image_control_pane_g4_ParamLimits

0x5b6e,	// (0x00024801) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002e3bd) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002e3bd) temp_image_control_pane_g

0xc968,	// (0x0002b5fb) main_mp3_pane_g1

0x5b7f,	// (0x00024812) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002e3c6) main_mp3_pane_g

0xc9cb,	// (0x0002b65e) main_mp3_pane_t1

0xa566,	// (0x000291f9) main_camera_pane_g8_ParamLimits

0xa566,	// (0x000291f9) main_camera_pane_g8

0x2f0b,	// (0x00021b9e) main_video_pane_g7_ParamLimits

0x2f0b,	// (0x00021b9e) main_video_pane_g7

0x11ec,	// (0x0001fe7f) main_camera2_pane_t7_ParamLimits

0x11ec,	// (0x0001fe7f) main_camera2_pane_t7

0xa6c0,	// (0x00029353) scroll_pane_cp025_ParamLimits

0xa6c0,	// (0x00029353) scroll_pane_cp025

0xa6d4,	// (0x00029367) scroll_pane_cp026_ParamLimits

0xa6d4,	// (0x00029367) scroll_pane_cp026

0xa6e3,	// (0x00029376) wml_content_pane_ParamLimits

0x9bfe,	// (0x00028891) main_touch_calib_pane

0x5c23,	// (0x000248b6) main_touch_calib_pane_g1

0x5c2f,	// (0x000248c2) main_touch_calib_pane_g2

0x5c3b,	// (0x000248ce) main_touch_calib_pane_g3

0x5c47,	// (0x000248da) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002e3e4) main_touch_calib_pane_g

0x5c53,	// (0x000248e6) main_touch_calib_pane_t1

0x5c6a,	// (0x000248fd) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002e3ed) main_touch_calib_pane_t

0xadd7,	// (0x00029a6a) mup_progress_pane_cp02

0xadf6,	// (0x00029a89) navi_pane_g1

0xae58,	// (0x00029aeb) navi_pane_mp_t3

0xa5df,	// (0x00029272) main_mp3_pane_ParamLimits

0x5577,	// (0x0002420a) navi_pane_ParamLimits

0xc968,	// (0x0002b5fb) main_mp3_pane_g1_ParamLimits

0x5b7f,	// (0x00024812) main_mp3_pane_g2_ParamLimits

0x5b8b,	// (0x0002481e) main_mp3_pane_g3_ParamLimits

0x5b8b,	// (0x0002481e) main_mp3_pane_g3

0x5b97,	// (0x0002482a) main_mp3_pane_g4_ParamLimits

0x5b97,	// (0x0002482a) main_mp3_pane_g4

0xc998,	// (0x0002b62b) main_mp3_pane_g5_ParamLimits

0xc998,	// (0x0002b62b) main_mp3_pane_g5

0xc9a6,	// (0x0002b639) main_mp3_pane_g6_ParamLimits

0xc9a6,	// (0x0002b639) main_mp3_pane_g6

0xc9b3,	// (0x0002b646) main_mp3_pane_g7_ParamLimits

0xc9b3,	// (0x0002b646) main_mp3_pane_g7

0xc9bf,	// (0x0002b652) main_mp3_pane_g8_ParamLimits

0xc9bf,	// (0x0002b652) main_mp3_pane_g8

0xf733,	// (0x0002e3c6) main_mp3_pane_g_ParamLimits

0x5ba3,	// (0x00024836) main_mp3_pane_t2

0x5bb3,	// (0x00024846) main_mp3_pane_t3

0xc9d9,	// (0x0002b66c) main_mp3_pane_t4

0xc9e7,	// (0x0002b67a) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002e3d7) main_mp3_pane_t

0xc9f5,	// (0x0002b688) mup_progress_pane_cp01

0x9c1c,	// (0x000288af) aid_zoom_text_secondary2

0xc7eb,	// (0x0002b47e) list_cale_ev2_pane

0xc7f3,	// (0x0002b486) scroll_pane_cp023_ParamLimits

0xd018,	// (0x0002bcab) field_cale_ev2_pane_ParamLimits

0xd018,	// (0x0002bcab) field_cale_ev2_pane

0x5cc5,	// (0x00024958) field_cale_ev2_pane_g1_ParamLimits

0x5cc5,	// (0x00024958) field_cale_ev2_pane_g1

0x5cd1,	// (0x00024964) field_cale_ev2_pane_g2_ParamLimits

0x5cd1,	// (0x00024964) field_cale_ev2_pane_g2

0x5ce9,	// (0x0002497c) field_cale_ev2_pane_g3_ParamLimits

0x5ce9,	// (0x0002497c) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002e3f8) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002e3f8) field_cale_ev2_pane_g

0x5d01,	// (0x00024994) field_cale_ev2_pane_t1_ParamLimits

0x5d01,	// (0x00024994) field_cale_ev2_pane_t1

0x5d18,	// (0x000249ab) field_cale_ev2_pane_t2_ParamLimits

0x5d18,	// (0x000249ab) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002e401) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002e401) field_cale_ev2_pane_t

0x4d70,	// (0x00023a03) main_postcard_pane_g5_ParamLimits

0x4d70,	// (0x00023a03) main_postcard_pane_g5

0x4d7e,	// (0x00023a11) main_postcard_pane_g6_ParamLimits

0x4d7e,	// (0x00023a11) main_postcard_pane_g6

0x2d49,	// (0x000219dc) camera2_autofocus_pane_cp_ParamLimits

0x2d49,	// (0x000219dc) camera2_autofocus_pane_cp

0xa5df,	// (0x00029272) main_mup3_pane

0x5d4d,	// (0x000249e0) main_mup3_pane_g1_ParamLimits

0x5d4d,	// (0x000249e0) main_mup3_pane_g1

0x5d6e,	// (0x00024a01) main_mup3_pane_g2_ParamLimits

0x5d6e,	// (0x00024a01) main_mup3_pane_g2

0x5dea,	// (0x00024a7d) main_mup3_pane_g3_ParamLimits

0x5dea,	// (0x00024a7d) main_mup3_pane_g3

0x5e2f,	// (0x00024ac2) main_mup3_pane_g4_ParamLimits

0x5e2f,	// (0x00024ac2) main_mup3_pane_g4

0x5e72,	// (0x00024b05) main_mup3_pane_g5_ParamLimits

0x5e72,	// (0x00024b05) main_mup3_pane_g5

0x5eb7,	// (0x00024b4a) main_mup3_pane_g6_ParamLimits

0x5eb7,	// (0x00024b4a) main_mup3_pane_g6

0xca09,	// (0x0002b69c) main_mup3_pane_g7_ParamLimits

0xca09,	// (0x0002b69c) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002e411) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002e411) main_mup3_pane_g

0x5f2d,	// (0x00024bc0) main_mup3_pane_t1_ParamLimits

0x5f2d,	// (0x00024bc0) main_mup3_pane_t1

0x5f96,	// (0x00024c29) main_mup3_pane_t2_ParamLimits

0x5f96,	// (0x00024c29) main_mup3_pane_t2

0x605f,	// (0x00024cf2) main_mup3_pane_t4_ParamLimits

0x605f,	// (0x00024cf2) main_mup3_pane_t4

0x60b3,	// (0x00024d46) main_mup3_pane_t5_ParamLimits

0x60b3,	// (0x00024d46) main_mup3_pane_t5

0x6161,	// (0x00024df4) main_mup3_pane_t6_ParamLimits

0x6161,	// (0x00024df4) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002e422) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002e422) main_mup3_pane_t

0x620d,	// (0x00024ea0) mup3_progress_pane_ParamLimits

0x620d,	// (0x00024ea0) mup3_progress_pane

0x6287,	// (0x00024f1a) popup_mup3_control_window_ParamLimits

0x6287,	// (0x00024f1a) popup_mup3_control_window

0xca17,	// (0x0002b6aa) popup_mup3_text_window

0x62a4,	// (0x00024f37) mup3_progress_pane_t1

0x62c3,	// (0x00024f56) mup3_progress_pane_t2

0xca1f,	// (0x0002b6b2) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002e42f) mup3_progress_pane_t

0xca3c,	// (0x0002b6cf) mup_progress_pane_cp03

0x9bfe,	// (0x00028891) bg_tb_trans_pane_cp04

0x62e2,	// (0x00024f75) mup3_volume_pane

0x62ea,	// (0x00024f7d) popup_mup3_control_window_g1

0xd033,	// (0x0002bcc6) mup3_volume_pane_g1

0xd03c,	// (0x0002bccf) mup3_volume_pane_g2

0xd045,	// (0x0002bcd8) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002e436) mup3_volume_pane_g

0x9bfe,	// (0x00028891) bg_tb_trans_pane_cp03

0xca4c,	// (0x0002b6df) popup_mup3_text_window_g1

0xca54,	// (0x0002b6e7) popup_mup3_text_window_t1

0xa3da,	// (0x0002906d) list_calc_item_pane_g1_ParamLimits

0xc4b5,	// (0x0002b148) mup_volume_pane_cp_g1

0x5c83,	// (0x00024916) main_touch_calib_pane_t3

0x5c99,	// (0x0002492c) main_touch_calib_pane_t4

0x5caf,	// (0x00024942) main_touch_calib_pane_t5

0x9c08,	// (0x0002889b) aid_cell_size_toolbar2

0x9c10,	// (0x000288a3) aid_popup3_width_pane

0x9c1c,	// (0x000288af) aid_zoom_text_msg_primary

0x0f24,	// (0x0001fbb7) vorec_t7

0xa39e,	// (0x00029031) bg_calc_paper_pane_g1_ParamLimits

0xa3aa,	// (0x0002903d) bg_calc_paper_pane_g2_ParamLimits

0xa3b6,	// (0x00029049) bg_calc_paper_pane_g3_ParamLimits

0xa3c2,	// (0x00029055) bg_calc_paper_pane_g4_ParamLimits

0xa3ce,	// (0x00029061) bg_calc_paper_pane_g5_ParamLimits

0x2614,	// (0x000212a7) bg_calc_paper_pane_g6_ParamLimits

0x2625,	// (0x000212b8) bg_calc_paper_pane_g7_ParamLimits

0x2636,	// (0x000212c9) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0002dde7) bg_calc_paper_pane_g_ParamLimits

0x2649,	// (0x000212dc) calc_bg_paper_pane_g9_ParamLimits

0x2e3a,	// (0x00021acd) image_qvga_pane_ParamLimits

0x2e3a,	// (0x00021acd) image_qvga_pane

0xa2cd,	// (0x00028f60) bg_popup_sub_pane_cp04_ParamLimits

0xb101,	// (0x00029d94) popup_mup_playback_window_g1_ParamLimits

0xb10d,	// (0x00029da0) popup_mup_playback_window_t1_ParamLimits

0xb122,	// (0x00029db5) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002e175) popup_mup_playback_window_t_ParamLimits

0x57bf,	// (0x00024452) main_mup2_pane_g3_ParamLimits

0x57bf,	// (0x00024452) main_mup2_pane_g3

0x31fd,	// (0x00021e90) popup_toolbar_window_cp04

0xb51d,	// (0x0002a1b0) popup_call2_audio_second_window_g3_ParamLimits

0xb51d,	// (0x0002a1b0) popup_call2_audio_second_window_g3

0xb927,	// (0x0002a5ba) popup_call2_audio_first_window_g4_ParamLimits

0xb927,	// (0x0002a5ba) popup_call2_audio_first_window_g4

0xbfa6,	// (0x0002ac39) popup_call2_audio_in_window_g4_ParamLimits

0xbfa6,	// (0x0002ac39) popup_call2_audio_in_window_g4

0x4e84,	// (0x00023b17) aid_area_sk_bg_cut_ParamLimits

0x4e84,	// (0x00023b17) aid_area_sk_bg_cut

0xb137,	// (0x00029dca) aid_area_sk_bg_cut_2_ParamLimits

0xb137,	// (0x00029dca) aid_area_sk_bg_cut_2

0x5ad5,	// (0x00024768) aid_placing_details_win

0x5add,	// (0x00024770) aid_placing_details_win_2

0xc8aa,	// (0x0002b53d) camera2_autofocus_pane_g1_ParamLimits

0x22d8,	// (0x00020f6b) popup_fixed_preview_cale_window_ParamLimits

0x22d8,	// (0x00020f6b) popup_fixed_preview_cale_window

0xaea7,	// (0x00029b3a) navi_slider_pane_g3

0xaeb0,	// (0x00029b43) navi_slider_pane_g4

0xaeb9,	// (0x00029b4c) navi_slider_pane_g5

0xaea7,	// (0x00029b3a) navi_slider_pane_g6

0x100a,	// (0x0001fc9d) navi_slider_pane_g7

0xafe8,	// (0x00029c7b) mup_scale_pane_g3

0xaff1,	// (0x00029c84) mup_scale_pane_g4

0xaffa,	// (0x00029c8d) mup_scale_pane_g5

0x4bed,	// (0x00023880) mup_scale_pane_g6

0x4bf6,	// (0x00023889) mup_scale_pane_g7

0xaea7,	// (0x00029b3a) cams2_slider_pane_g3

0xc537,	// (0x0002b1ca) cams2_slider_pane_g4

0x135e,	// (0x0001fff1) cams2_slider_pane_g5

0xaea7,	// (0x00029b3a) cams2_slider_pane_g6

0x1366,	// (0x0001fff9) cams2_slider_pane_g7

0xc768,	// (0x0002b3fb) camera2_autofocus_pane_cp_g1

0xc30b,	// (0x0002af9e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc30b,	// (0x0002af9e) bg_popup_preview_window_pane_cp02

0xca62,	// (0x0002b6f5) list_fp_cale_pane_ParamLimits

0xca62,	// (0x0002b6f5) list_fp_cale_pane

0xca6e,	// (0x0002b701) popup_fixed_preview_cale_window_t1_ParamLimits

0xca6e,	// (0x0002b701) popup_fixed_preview_cale_window_t1

0x62f3,	// (0x00024f86) popup_fixed_preview_cale_window_t2_ParamLimits

0x62f3,	// (0x00024f86) popup_fixed_preview_cale_window_t2

0x6308,	// (0x00024f9b) popup_fixed_preview_cale_window_t3_ParamLimits

0x6308,	// (0x00024f9b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002e43d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002e43d) popup_fixed_preview_cale_window_t

0x631d,	// (0x00024fb0) list_single_fp_cale_pane_ParamLimits

0x631d,	// (0x00024fb0) list_single_fp_cale_pane

0xca8c,	// (0x0002b71f) list_single_fp_cale_pane_g1_ParamLimits

0xca8c,	// (0x0002b71f) list_single_fp_cale_pane_g1

0xca98,	// (0x0002b72b) list_single_fp_cale_pane_g2_ParamLimits

0xca98,	// (0x0002b72b) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002e444) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002e444) list_single_fp_cale_pane_g

0xcab1,	// (0x0002b744) list_single_fp_cale_pane_t1_ParamLimits

0xcab1,	// (0x0002b744) list_single_fp_cale_pane_t1

0xcac3,	// (0x0002b756) list_single_fp_cale_pane_t2_ParamLimits

0xcac3,	// (0x0002b756) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002e44b) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002e44b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9bfe,	// (0x00028891) main_dialer_pane

0x632d,	// (0x00024fc0) aid_cell_size_keypad

0x6337,	// (0x00024fca) dialer_ne_pane

0x6341,	// (0x00024fd4) grid_dialer_command_1_pane

0x6349,	// (0x00024fdc) grid_dialer_command_2_pane

0x6351,	// (0x00024fe4) grid_dialer_keypad_pane

0x6365,	// (0x00024ff8) bg_popup_call_pane_cp06_ParamLimits

0x6365,	// (0x00024ff8) bg_popup_call_pane_cp06

0x6371,	// (0x00025004) dialer_ne_clear_pane_ParamLimits

0x6371,	// (0x00025004) dialer_ne_clear_pane

0xcaf6,	// (0x0002b789) dialer_ne_pane_g1

0xcafe,	// (0x0002b791) dialer_ne_pane_t1_ParamLimits

0xcafe,	// (0x0002b791) dialer_ne_pane_t1

0x637d,	// (0x00025010) dialer_ne_pane_t2_ParamLimits

0x637d,	// (0x00025010) dialer_ne_pane_t2

0x639a,	// (0x0002502d) dialer_ne_pane_t3_ParamLimits

0x639a,	// (0x0002502d) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002e450) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002e450) dialer_ne_pane_t

0x63be,	// (0x00025051) dialer_ne_pane_t3_copy1_ParamLimits

0x63be,	// (0x00025051) dialer_ne_pane_t3_copy1

0x63e2,	// (0x00025075) cell_dialer_keypad_pane_ParamLimits

0x63e2,	// (0x00025075) cell_dialer_keypad_pane

0x63f9,	// (0x0002508c) cell_dialer_command_1_pane_ParamLimits

0x63f9,	// (0x0002508c) cell_dialer_command_1_pane

0x640f,	// (0x000250a2) cell_dialer_command_2_pane_ParamLimits

0x640f,	// (0x000250a2) cell_dialer_command_2_pane

0xcb10,	// (0x0002b7a3) bg_button_pane_cp02_ParamLimits

0xcb10,	// (0x0002b7a3) bg_button_pane_cp02

0x641e,	// (0x000250b1) cell_dialer_keypad_pane_g1_ParamLimits

0x641e,	// (0x000250b1) cell_dialer_keypad_pane_g1

0xcb10,	// (0x0002b7a3) bg_button_pane_cp03_ParamLimits

0xcb10,	// (0x0002b7a3) bg_button_pane_cp03

0x6433,	// (0x000250c6) cell_dialer_command_1_pane_g1_ParamLimits

0x6433,	// (0x000250c6) cell_dialer_command_1_pane_g1

0xcb1c,	// (0x0002b7af) bg_button_pane_cp04

0x6447,	// (0x000250da) cell_dialer_command_2_pane_g1

0xae96,	// (0x00029b29) bg_button_pane_cp06

0xcb24,	// (0x0002b7b7) dialer_ne_clear_pane_g1

0x46b7,	// (0x0002334a) navi_pane_g2

0x46e5,	// (0x00023378) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002e078) navi_pane_g

0x4710,	// (0x000233a3) navi_pane_mv_g2

0x4737,	// (0x000233ca) navi_pane_mv_g5

0x473f,	// (0x000233d2) navi_pane_mv_t1

0xa392,	// (0x00029025) main_clock2_pane

0x6485,	// (0x00025118) main_clock2_list_pane_ParamLimits

0x6485,	// (0x00025118) main_clock2_list_pane

0x64af,	// (0x00025142) main_clock2_pane_t1_ParamLimits

0x64af,	// (0x00025142) main_clock2_pane_t1

0x64d1,	// (0x00025164) main_clock2_pane_t2_ParamLimits

0x64d1,	// (0x00025164) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002e45c) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002e45c) main_clock2_pane_t

0x652e,	// (0x000251c1) popup_clock_analogue_window_cp03_ParamLimits

0x652e,	// (0x000251c1) popup_clock_analogue_window_cp03

0x654e,	// (0x000251e1) popup_clock_digital_window_cp02_ParamLimits

0x654e,	// (0x000251e1) popup_clock_digital_window_cp02

0x65bf,	// (0x00025252) main_clock2_list_single_pane_ParamLimits

0x65bf,	// (0x00025252) main_clock2_list_single_pane

0xae96,	// (0x00029b29) list_highlight_pane_cp05

0xcb60,	// (0x0002b7f3) main_clock2_list_single_pane_t1

0x31fd,	// (0x00021e90) popup_toolbar_window_cp04_ParamLimits

0x5b3e,	// (0x000247d1) camera2_autofocus_pane_g2_ParamLimits

0x5b3e,	// (0x000247d1) camera2_autofocus_pane_g2

0x5b4a,	// (0x000247dd) camera2_autofocus_pane_g3_ParamLimits

0x5b4a,	// (0x000247dd) camera2_autofocus_pane_g3

0x5b56,	// (0x000247e9) camera2_autofocus_pane_g4_ParamLimits

0x5b56,	// (0x000247e9) camera2_autofocus_pane_g4

0x5b62,	// (0x000247f5) camera2_autofocus_pane_g5_ParamLimits

0x5b62,	// (0x000247f5) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002e3a0) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002e3a0) camera2_autofocus_pane_g

0x5d2d,	// (0x000249c0) camera2_autofocus_pane_cp_g2

0x5d35,	// (0x000249c8) camera2_autofocus_pane_cp_g3

0x5d3d,	// (0x000249d0) camera2_autofocus_pane_cp_g4

0x5d45,	// (0x000249d8) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002e406) camera2_autofocus_pane_cp_g

0x635d,	// (0x00024ff0) popup_dialer_spcha_window

0x9bfe,	// (0x00028891) bg_popup_sub_pane_cp07

0xcb6e,	// (0x0002b801) list_spcha_pane

0xcb76,	// (0x0002b809) list_single_spcha_pane_ParamLimits

0xcb76,	// (0x0002b809) list_single_spcha_pane

0x9bfe,	// (0x00028891) list_highlight_pane_cp06

0xcb87,	// (0x0002b81a) list_single_spcha_pane_t1

0xbd50,	// (0x0002a9e3) popup_call2_audio_out_window_g4_ParamLimits

0xbd50,	// (0x0002a9e3) popup_call2_audio_out_window_g4

0x9bfe,	// (0x00028891) main_imed2_pane

0xc343,	// (0x0002afd6) popup_imed_adjust2_window

0x54b4,	// (0x00024147) popup_imed_trans_window_ParamLimits

0x54b4,	// (0x00024147) popup_imed_trans_window

0xc5a0,	// (0x0002b233) popup_blid_sat_info2_window_t1

0xc5ae,	// (0x0002b241) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002e335) popup_blid_sat_info2_window_t

0x65f1,	// (0x00025284) aid_size_cell_colour_35

0x660b,	// (0x0002529e) aid_size_cell_colour_112

0x6622,	// (0x000252b5) aid_size_cell_effect

0xa5df,	// (0x00029272) bg_tb_trans_pane_cp02

0xaf22,	// (0x00029bb5) heading_imed_pane

0x663c,	// (0x000252cf) listscroll_imed_pane

0xcb95,	// (0x0002b828) heading_imed_pane_g1

0xcb9d,	// (0x0002b830) heading_imed_pane_t1

0xcbab,	// (0x0002b83e) grid_imed_colour_35_pane_ParamLimits

0xcbab,	// (0x0002b83e) grid_imed_colour_35_pane

0x6648,	// (0x000252db) grid_imed_effect_pane

0xcbc7,	// (0x0002b85a) list_imed_aspect_pane

0x6658,	// (0x000252eb) scroll_pane_cp027_ParamLimits

0x6658,	// (0x000252eb) scroll_pane_cp027

0x6664,	// (0x000252f7) cell_imed_effect_pane_ParamLimits

0x6664,	// (0x000252f7) cell_imed_effect_pane

0xcbcf,	// (0x0002b862) cell_imed_colour_pane_ParamLimits

0xcbcf,	// (0x0002b862) cell_imed_colour_pane

0xcc19,	// (0x0002b8ac) cell_imed_colour_pane_g1_ParamLimits

0xcc19,	// (0x0002b8ac) cell_imed_colour_pane_g1

0xcc2a,	// (0x0002b8bd) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc2a,	// (0x0002b8bd) hgihlgiht_grid_pane_cp016

0x6680,	// (0x00025313) cell_imed_effect_pane_g1

0x6688,	// (0x0002531b) grid_highlight_pane_cp017

0xcc3b,	// (0x0002b8ce) list_imed_single_pane_ParamLimits

0xcc3b,	// (0x0002b8ce) list_imed_single_pane

0x9bfe,	// (0x00028891) list_highlight_pane_cp07

0xcc4f,	// (0x0002b8e2) list_imed_aspect_pane_comp1_t1

0xc317,	// (0x0002afaa) bg_tb_trans_pane_cp05

0xcc71,	// (0x0002b904) popup_imed_adjust2_window_g1

0xcc98,	// (0x0002b92b) popup_imed_adjust2_window_t1

0xccb0,	// (0x0002b943) slider_imed_adjust_pane

0xccc4,	// (0x0002b957) slider_imed_adjust_pane_g1

0xccd4,	// (0x0002b967) slider_imed_adjust_pane_g2

0xcce4,	// (0x0002b977) slider_imed_adjust_pane_g3

0xccf5,	// (0x0002b988) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002e479) slider_imed_adjust_pane_g

0x6691,	// (0x00025324) aid_size_cell_clipart2

0x669d,	// (0x00025330) grid_imed_clipart_pane

0xcd06,	// (0x0002b999) scroll_pane_cp031

0x66a7,	// (0x0002533a) cell_imed_clipart_pane_ParamLimits

0x66a7,	// (0x0002533a) cell_imed_clipart_pane

0x66c5,	// (0x00025358) cell_imed_clipart_pane_g1

0x9bfe,	// (0x00028891) grid_highlight_pane_cp014

0x6491,	// (0x00025124) main_clock2_pane_g1_ParamLimits

0x6491,	// (0x00025124) main_clock2_pane_g1

0x656a,	// (0x000251fd) aid_call2_pane_cp10

0x657c,	// (0x0002520f) aid_call_pane_cp10

0xadcb,	// (0x00029a5e) popup_clock_analogue_window_cp10_g1

0xadcb,	// (0x00029a5e) popup_clock_analogue_window_cp10_g2

0x658e,	// (0x00025221) popup_clock_analogue_window_cp10_g3

0x658e,	// (0x00025221) popup_clock_analogue_window_cp10_g4

0xadcb,	// (0x00029a5e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002e467) popup_clock_analogue_window_cp10_g

0x65a0,	// (0x00025233) popup_clock_analogue_window_cp10_t1

0x136f,	// (0x00020002) clock_digital_number_pane_cp10_ParamLimits

0x136f,	// (0x00020002) clock_digital_number_pane_cp10

0x1387,	// (0x0002001a) clock_digital_number_pane_cp11_ParamLimits

0x1387,	// (0x0002001a) clock_digital_number_pane_cp11

0x139f,	// (0x00020032) clock_digital_number_pane_cp12_ParamLimits

0x139f,	// (0x00020032) clock_digital_number_pane_cp12

0x13b7,	// (0x0002004a) clock_digital_number_pane_cp13_ParamLimits

0x13b7,	// (0x0002004a) clock_digital_number_pane_cp13

0x13cf,	// (0x00020062) clock_digital_separator_pane_cp10_ParamLimits

0x13cf,	// (0x00020062) clock_digital_separator_pane_cp10

0x65d1,	// (0x00025264) popup_clock_digital_window_cp02_t1_ParamLimits

0x65d1,	// (0x00025264) popup_clock_digital_window_cp02_t1

0xa2c5,	// (0x00028f58) clock_digital_number_pane_cp10_g1

0xa2c5,	// (0x00028f58) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002e482) clock_digital_number_pane_cp10_g

0xa2c5,	// (0x00028f58) clock_digital_separator_pane_cp10_g1

0xa2c5,	// (0x00028f58) clock_digital_separator_pane_g2_cp10

0xae66,	// (0x00029af9) navi_pane_vded_g4

0xae6f,	// (0x00029b02) navi_pane_vded_g5

0xae78,	// (0x00029b0b) navi_pane_vded_t1

0x9bfe,	// (0x00028891) main_vded_pane

0x66ce,	// (0x00025361) main_vded_pane_g1

0x66da,	// (0x0002536d) main_vded_pane_g2

0x66e4,	// (0x00025377) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002e487) main_vded_pane_g

0x66ee,	// (0x00025381) main_vded_pane_t1

0x66fc,	// (0x0002538f) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002e48e) main_vded_pane_t

0x670a,	// (0x0002539d) vded_slider_pane

0x6714,	// (0x000253a7) vded_video_pane

0xcd0e,	// (0x0002b9a1) vded_video_pane_g1

0x6720,	// (0x000253b3) vded_video_pane_g2

0xc768,	// (0x0002b3fb) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002e493) vded_video_pane_g

0xcd18,	// (0x0002b9ab) vded_slider_pane_g1

0xc4b5,	// (0x0002b148) vded_slider_pane_g2

0xcd21,	// (0x0002b9b4) vded_slider_pane_g3

0xcd2a,	// (0x0002b9bd) vded_slider_pane_g4

0xcd33,	// (0x0002b9c6) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002e49a) vded_slider_pane_g

0x627b,	// (0x00024f0e) mup3_rocker_pane_ParamLimits

0x627b,	// (0x00024f0e) mup3_rocker_pane

0x6729,	// (0x000253bc) mup3_control_keys_pane_g1

0x6731,	// (0x000253c4) mup3_control_keys_pane_g2

0x6739,	// (0x000253cc) mup3_control_keys_pane_g3

0x6741,	// (0x000253d4) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002e4a5) mup3_control_keys_pane_g

0x22f6,	// (0x00020f89) popup_toolbar2_fixed_window_cp01_ParamLimits

0x22f6,	// (0x00020f89) popup_toolbar2_fixed_window_cp01

0x6297,	// (0x00024f2a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6297,	// (0x00024f2a) popup_toolbar2_fixed_window_cp02

0xb68f,	// (0x0002a322) popup_call2_audio_second_window_t4_ParamLimits

0xb68f,	// (0x0002a322) popup_call2_audio_second_window_t4

0xbbbd,	// (0x0002a850) popup_call2_audio_first_window_t6_ParamLimits

0xbbbd,	// (0x0002a850) popup_call2_audio_first_window_t6

0xbe53,	// (0x0002aae6) popup_call2_audio_out_window_t6_ParamLimits

0xbe53,	// (0x0002aae6) popup_call2_audio_out_window_t6

0x9bfe,	// (0x00028891) main_vitu_pane

0x6751,	// (0x000253e4) aid_size_cell_itu_ParamLimits

0x6751,	// (0x000253e4) aid_size_cell_itu

0x2328,	// (0x00020fbb) bg_popup_window_pane_cp08_ParamLimits

0x2328,	// (0x00020fbb) bg_popup_window_pane_cp08

0x675f,	// (0x000253f2) field_vitu_entry_pane_ParamLimits

0x675f,	// (0x000253f2) field_vitu_entry_pane

0x676e,	// (0x00025401) grid_vitu_function_pane_ParamLimits

0x676e,	// (0x00025401) grid_vitu_function_pane

0x677e,	// (0x00025411) grid_vitu_itu_pane_ParamLimits

0x677e,	// (0x00025411) grid_vitu_itu_pane

0x678e,	// (0x00025421) cell_vitu_itu_pane_ParamLimits

0x678e,	// (0x00025421) cell_vitu_itu_pane

0x67a5,	// (0x00025438) cell_vitu_function_pane_ParamLimits

0x67a5,	// (0x00025438) cell_vitu_function_pane

0xa5df,	// (0x00029272) bg_popup_sub_pane_cp08_ParamLimits

0xa5df,	// (0x00029272) bg_popup_sub_pane_cp08

0x67b9,	// (0x0002544c) field_vitu_entry_pane_t1_ParamLimits

0x67b9,	// (0x0002544c) field_vitu_entry_pane_t1

0xcd54,	// (0x0002b9e7) field_vitu_entry_pane_t2_ParamLimits

0xcd54,	// (0x0002b9e7) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002e4b3) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002e4b3) field_vitu_entry_pane_t

0xcd71,	// (0x0002ba04) bg_button_pane_cp05_ParamLimits

0xcd71,	// (0x0002ba04) bg_button_pane_cp05

0x67d3,	// (0x00025466) cell_vitu_itu_pane_g1

0x67eb,	// (0x0002547e) cell_vitu_itu_pane_t1_ParamLimits

0x67eb,	// (0x0002547e) cell_vitu_itu_pane_t1

0x67fd,	// (0x00025490) cell_vitu_itu_pane_t2_ParamLimits

0x67fd,	// (0x00025490) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002e4b8) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002e4b8) cell_vitu_itu_pane_t

0xcd7f,	// (0x0002ba12) bg_button_pane_cp07

0x6840,	// (0x000254d3) cell_vitu_function_pane_g1

0x0b49,	// (0x0001f7dc) main_calc_pane_g1

0x20fa,	// (0x00020d8d) aid_visual_content_pane

0x9bfe,	// (0x00028891) main_vradio_pane

0x6849,	// (0x000254dc) main_vradio_pane_g1_ParamLimits

0x6849,	// (0x000254dc) main_vradio_pane_g1

0xcd89,	// (0x0002ba1c) main_vradio_pane_g2_ParamLimits

0xcd89,	// (0x0002ba1c) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002e4bf) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002e4bf) main_vradio_pane_g

0x6857,	// (0x000254ea) main_vradio_pane_t1_ParamLimits

0x6857,	// (0x000254ea) main_vradio_pane_t1

0x6869,	// (0x000254fc) main_vradio_pane_t2_ParamLimits

0x6869,	// (0x000254fc) main_vradio_pane_t2

0xcd96,	// (0x0002ba29) main_vradio_pane_t3_ParamLimits

0xcd96,	// (0x0002ba29) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002e4c4) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002e4c4) main_vradio_pane_t

0x687b,	// (0x0002550e) vradio_rocker_control_pane_ParamLimits

0x687b,	// (0x0002550e) vradio_rocker_control_pane

0x6887,	// (0x0002551a) vradio_station_info_pane_ParamLimits

0x6887,	// (0x0002551a) vradio_station_info_pane

0xcdaa,	// (0x0002ba3d) vradio_frequency_info_pane_ParamLimits

0xcdaa,	// (0x0002ba3d) vradio_frequency_info_pane

0xc768,	// (0x0002b3fb) vradio_station_info_pane_g1

0xcdb9,	// (0x0002ba4c) vradio_station_info_pane_t1_ParamLimits

0xcdb9,	// (0x0002ba4c) vradio_station_info_pane_t1

0xcddb,	// (0x0002ba6e) vradio_station_info_pane_t2_ParamLimits

0xcddb,	// (0x0002ba6e) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002e4cb) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002e4cb) vradio_station_info_pane_t

0xcded,	// (0x0002ba80) vradio_tuning_pane

0xcdf5,	// (0x0002ba88) vradio_rocker_control_pane_g1

0xcdfd,	// (0x0002ba90) vradio_rocker_control_pane_g2

0xce05,	// (0x0002ba98) vradio_rocker_control_pane_g3

0xce0d,	// (0x0002baa0) vradio_rocker_control_pane_g4

0xce15,	// (0x0002baa8) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002e4d0) vradio_rocker_control_pane_g

0x6894,	// (0x00025527) vradio_frequency_info_pane_g1

0xce1d,	// (0x0002bab0) vradio_frequency_info_pane_t1_ParamLimits

0xce1d,	// (0x0002bab0) vradio_frequency_info_pane_t1

0x689e,	// (0x00025531) vradio_tuning_pane_g1

0x68a9,	// (0x0002553c) vradio_tuning_pane_t1

0x9c2c,	// (0x000288bf) area_side_right_pane_ParamLimits

0x9c2c,	// (0x000288bf) area_side_right_pane

0xc2d2,	// (0x0002af65) status_small_pane_g1

0xc2da,	// (0x0002af6d) status_small_pane_g2

0xc2e3,	// (0x0002af76) status_small_pane_g3

0xc2ec,	// (0x0002af7f) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002e28b) status_small_pane_g

0xc2f5,	// (0x0002af88) status_small_pane_t1

0x9bfe,	// (0x00028891) main_video3_pane

0xce31,	// (0x0002bac4) cams_zoom_vslider_pane

0xce39,	// (0x0002bacc) image3_wide_pane_ParamLimits

0xce39,	// (0x0002bacc) image3_wide_pane

0xce53,	// (0x0002bae6) image3_wide_small_pane

0xce5f,	// (0x0002baf2) main_video3_pane_g1_ParamLimits

0xce5f,	// (0x0002baf2) main_video3_pane_g1

0xce7b,	// (0x0002bb0e) main_video3_pane_g2_ParamLimits

0xce7b,	// (0x0002bb0e) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002e4db) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002e4db) main_video3_pane_g

0xce97,	// (0x0002bb2a) main_video3_pane_t1_ParamLimits

0xce97,	// (0x0002bb2a) main_video3_pane_t1

0xcec2,	// (0x0002bb55) main_video3_pane_t2_ParamLimits

0xcec2,	// (0x0002bb55) main_video3_pane_t2

0xceef,	// (0x0002bb82) main_video3_pane_t3_ParamLimits

0xceef,	// (0x0002bb82) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002e4e0) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002e4e0) main_video3_pane_t

0xcf1c,	// (0x0002bbaf) cams_zoom_vslider_pane_g1

0xcf25,	// (0x0002bbb8) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002e4e7) cams_zoom_vslider_pane_g

0xcf2d,	// (0x0002bbc0) small_slider_vertical_pane

0xc768,	// (0x0002b3fb) small_slider_vertical_pane_g1

0xc768,	// (0x0002b3fb) small_slider_vertical_pane_g2

0xcf35,	// (0x0002bbc8) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002e4ec) small_slider_vertical_pane_g

0x9bfe,	// (0x00028891) main_hwr_training_pane

0xcf3e,	// (0x0002bbd1) hwr_training_instruct_pane_ParamLimits

0xcf3e,	// (0x0002bbd1) hwr_training_instruct_pane

0x68b8,	// (0x0002554b) hwr_training_navi_pane_ParamLimits

0x68b8,	// (0x0002554b) hwr_training_navi_pane

0x68d2,	// (0x00025565) hwr_training_write_pane_ParamLimits

0x68d2,	// (0x00025565) hwr_training_write_pane

0x9bfe,	// (0x00028891) bg_frame_shadow_pane

0xcf75,	// (0x0002bc08) hwr_training_write_pane_g1

0xcf7d,	// (0x0002bc10) hwr_training_write_pane_g2

0xcf85,	// (0x0002bc18) hwr_training_write_pane_g3

0xcf8d,	// (0x0002bc20) hwr_training_write_pane_g4

0xcf95,	// (0x0002bc28) hwr_training_write_pane_g5

0xcf9d,	// (0x0002bc30) hwr_training_write_pane_g6

0xcfa5,	// (0x0002bc38) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002e4f3) hwr_training_write_pane_g

0x13e7,	// (0x0002007a) hwr_training_navi_pane_g1_ParamLimits

0x13e7,	// (0x0002007a) hwr_training_navi_pane_g1

0x13f9,	// (0x0002008c) hwr_training_navi_pane_g2_ParamLimits

0x13f9,	// (0x0002008c) hwr_training_navi_pane_g2

0x140b,	// (0x0002009e) hwr_training_navi_pane_g3_ParamLimits

0x140b,	// (0x0002009e) hwr_training_navi_pane_g3

0x141b,	// (0x000200ae) hwr_training_navi_pane_g4_ParamLimits

0x141b,	// (0x000200ae) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002e502) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002e502) hwr_training_navi_pane_g

0x1435,	// (0x000200c8) hwr_training_navi_pane_t1

0x690a,	// (0x0002559d) list_single_hwr_training_instruct_pane_ParamLimits

0x690a,	// (0x0002559d) list_single_hwr_training_instruct_pane

0xcfad,	// (0x0002bc40) list_single_hwr_training_instruct_pane_t1

0xc6a8,	// (0x0002b33b) bg_frame_shadow_pane_g1

0xcfbc,	// (0x0002bc4f) bg_frame_shadow_pane_g2

0xcfc4,	// (0x0002bc57) bg_frame_shadow_pane_g3

0xcfcc,	// (0x0002bc5f) bg_frame_shadow_pane_g4

0xcfd4,	// (0x0002bc67) bg_frame_shadow_pane_g5

0xcfdc,	// (0x0002bc6f) bg_frame_shadow_pane_g6

0xcfe4,	// (0x0002bc77) bg_frame_shadow_pane_g7

0xa45d,	// (0x000290f0) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002e50d) bg_frame_shadow_pane_g

0x9bfe,	// (0x00028891) main_video_tele_dialer_pane

0x1443,	// (0x000200d6) aid_size_cell_video_keypad_ParamLimits

0x1443,	// (0x000200d6) aid_size_cell_video_keypad

0x1453,	// (0x000200e6) grid_video_dialer_keypad_pane_ParamLimits

0x1453,	// (0x000200e6) grid_video_dialer_keypad_pane

0x1485,	// (0x00020118) video_down_pane_cp_ParamLimits

0x1485,	// (0x00020118) video_down_pane_cp

0x1491,	// (0x00020124) cell_video_dialer_keypad_pane_ParamLimits

0x1491,	// (0x00020124) cell_video_dialer_keypad_pane

0xcfec,	// (0x0002bc7f) bg_button_pane_cp08_ParamLimits

0xcfec,	// (0x0002bc7f) bg_button_pane_cp08

0x693f,	// (0x000255d2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x693f,	// (0x000255d2) cell_video_dialer_keypad_pane_g1

0x626f,	// (0x00024f02) mup3_rocker2_pane_ParamLimits

0x626f,	// (0x00024f02) mup3_rocker2_pane

0xc768,	// (0x0002b3fb) mup3_rocker2_pane_g1

0x5436,	// (0x000240c9) main_dialer2_pane

0x9bfe,	// (0x00028891) main_mp4_pane

0x14b0,	// (0x00020143) main_mp4_pane_g1_ParamLimits

0x14b0,	// (0x00020143) main_mp4_pane_g1

0x14be,	// (0x00020151) main_mp4_pane_g2_ParamLimits

0x14be,	// (0x00020151) main_mp4_pane_g2

0x14cc,	// (0x0002015f) main_mp4_pane_g3_ParamLimits

0x14cc,	// (0x0002015f) main_mp4_pane_g3

0x151f,	// (0x000201b2) main_mp4_pane_g4_ParamLimits

0x151f,	// (0x000201b2) main_mp4_pane_g4

0x1547,	// (0x000201da) main_mp4_pane_g5_ParamLimits

0x1547,	// (0x000201da) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002e52d) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002e52d) main_mp4_pane_g

0x1597,	// (0x0002022a) main_mp4_pane_t1_ParamLimits

0x1597,	// (0x0002022a) main_mp4_pane_t1

0x15f3,	// (0x00020286) main_mp4_pane_t2_ParamLimits

0x15f3,	// (0x00020286) main_mp4_pane_t2

0xcff8,	// (0x0002bc8b) main_mp4_pane_t3_ParamLimits

0xcff8,	// (0x0002bc8b) main_mp4_pane_t3

0x1645,	// (0x000202d8) main_mp4_pane_t4_ParamLimits

0x1645,	// (0x000202d8) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002e53a) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002e53a) main_mp4_pane_t

0x1685,	// (0x00020318) mp4_progress_pane_ParamLimits

0x1685,	// (0x00020318) mp4_progress_pane

0x16cf,	// (0x00020362) mp4_rocker_pane_ParamLimits

0x16cf,	// (0x00020362) mp4_rocker_pane

0xd056,	// (0x0002bce9) mp4_progress_pane_t1

0xd06f,	// (0x0002bd02) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002e543) mp4_progress_pane_t

0xd088,	// (0x0002bd1b) mup_progress_pane_cp04

0xd873,	// (0x0002c506) mp4_rocker_pane_g1

0x16f1,	// (0x00020384) aid_cell_size_keypad2_ParamLimits

0x16f1,	// (0x00020384) aid_cell_size_keypad2

0x1701,	// (0x00020394) dialer2_ne_pane_ParamLimits

0x1701,	// (0x00020394) dialer2_ne_pane

0x170d,	// (0x000203a0) grid_dialer2_keypad_pane_ParamLimits

0x170d,	// (0x000203a0) grid_dialer2_keypad_pane

0xd094,	// (0x0002bd27) bg_popup_call_pane_cp07_ParamLimits

0xd094,	// (0x0002bd27) bg_popup_call_pane_cp07

0x6976,	// (0x00025609) dialer2_ne_pane_t1_ParamLimits

0x6976,	// (0x00025609) dialer2_ne_pane_t1

0x171b,	// (0x000203ae) cell_dialer2_keypad_pane_ParamLimits

0x171b,	// (0x000203ae) cell_dialer2_keypad_pane

0xd0b4,	// (0x0002bd47) bg_button_pane_pane_cp04_ParamLimits

0xd0b4,	// (0x0002bd47) bg_button_pane_pane_cp04

0x699b,	// (0x0002562e) cell_dialer2_keypad_pane_g1_ParamLimits

0x699b,	// (0x0002562e) cell_dialer2_keypad_pane_g1

0x30cf,	// (0x00021d62) aid_placing_vt_set_content_ParamLimits

0x30cf,	// (0x00021d62) aid_placing_vt_set_content

0x30f7,	// (0x00021d8a) aid_placing_vt_set_title_ParamLimits

0x30f7,	// (0x00021d8a) aid_placing_vt_set_title

0x9bfe,	// (0x00028891) main_image3_pane

0x1764,	// (0x000203f7) area_side_right_pane_cp01_ParamLimits

0x1764,	// (0x000203f7) area_side_right_pane_cp01

0x1793,	// (0x00020426) main_image3_pane_g1_ParamLimits

0x1793,	// (0x00020426) main_image3_pane_g1

0x17a1,	// (0x00020434) main_image3_pane_g2_ParamLimits

0x17a1,	// (0x00020434) main_image3_pane_g2

0x17ba,	// (0x0002044d) main_image3_pane_g3_ParamLimits

0x17ba,	// (0x0002044d) main_image3_pane_g3

0x17d3,	// (0x00020466) main_image3_pane_g4_ParamLimits

0x17d3,	// (0x00020466) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002e552) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002e552) main_image3_pane_g

0x17ec,	// (0x0002047f) main_image3_pane_t1_ParamLimits

0x17ec,	// (0x0002047f) main_image3_pane_t1

0x1811,	// (0x000204a4) main_image3_pane_t2_ParamLimits

0x1811,	// (0x000204a4) main_image3_pane_t2

0x1830,	// (0x000204c3) main_image3_pane_t3_ParamLimits

0x1830,	// (0x000204c3) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002e55b) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002e55b) main_image3_pane_t

0x2328,	// (0x00020fbb) grid_sctrl_middle_pane_cp01_ParamLimits

0x2328,	// (0x00020fbb) grid_sctrl_middle_pane_cp01

0x6a03,	// (0x00025696) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a03,	// (0x00025696) cell_sctrl_middle_pane_cp01

0x6a14,	// (0x000256a7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a14,	// (0x000256a7) cell_sctrl_middle_pane_cp01_g1

0x9bfe,	// (0x00028891) main_call4_pane

0x6a21,	// (0x000256b4) aid_size_button_call4_ParamLimits

0x6a21,	// (0x000256b4) aid_size_button_call4

0x6a53,	// (0x000256e6) call4_windows_pane_ParamLimits

0x6a53,	// (0x000256e6) call4_windows_pane

0x6a6f,	// (0x00025702) grid_call4_button_pane_ParamLimits

0x6a6f,	// (0x00025702) grid_call4_button_pane

0xd0c0,	// (0x0002bd53) call4_windows_conf_pane

0x6a93,	// (0x00025726) popup_call4_audio_first_window_ParamLimits

0x6a93,	// (0x00025726) popup_call4_audio_first_window

0x6abf,	// (0x00025752) popup_call4_audio_second_window_ParamLimits

0x6abf,	// (0x00025752) popup_call4_audio_second_window

0xd0fd,	// (0x0002bd90) popup_call4_audio_wait_window_ParamLimits

0xd0fd,	// (0x0002bd90) popup_call4_audio_wait_window

0x6ad3,	// (0x00025766) cell_call4_button_pane_ParamLimits

0x6ad3,	// (0x00025766) cell_call4_button_pane

0x6af6,	// (0x00025789) bg_button_pane_cp09_ParamLimits

0x6af6,	// (0x00025789) bg_button_pane_cp09

0x6b02,	// (0x00025795) cell_call4_button_pane_g1_ParamLimits

0x6b02,	// (0x00025795) cell_call4_button_pane_g1

0x6b0f,	// (0x000257a2) cell_call4_button_pane_t1_ParamLimits

0x6b0f,	// (0x000257a2) cell_call4_button_pane_t1

0xd145,	// (0x0002bdd8) popup_call4_audio_conf_window_ParamLimits

0xd145,	// (0x0002bdd8) popup_call4_audio_conf_window

0x62a4,	// (0x00024f37) mup3_progress_pane_t1_ParamLimits

0x62c3,	// (0x00024f56) mup3_progress_pane_t2_ParamLimits

0xca1f,	// (0x0002b6b2) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002e42f) mup3_progress_pane_t_ParamLimits

0xca3c,	// (0x0002b6cf) mup_progress_pane_cp03_ParamLimits

0x6749,	// (0x000253dc) mup3_control_keys_pane_g4_copy1

0x16b3,	// (0x00020346) mp4_rocker2_pane_ParamLimits

0x16b3,	// (0x00020346) mp4_rocker2_pane

0xd15f,	// (0x0002bdf2) mp4_rocker2_pane_g1

0xd167,	// (0x0002bdfa) mp4_rocker2_pane_g2

0x1891,	// (0x00020524) mp4_rocker2_pane_g3

0x1899,	// (0x0002052c) mp4_rocker2_pane_g4

0x18a1,	// (0x00020534) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002e564) mp4_rocker2_pane_g

0x9bfe,	// (0x00028891) main_camera4_pane

0x9bfe,	// (0x00028891) main_video4_pane

0x1461,	// (0x000200f4) main_video_tele_dialer_pane_t1_ParamLimits

0x1461,	// (0x000200f4) main_video_tele_dialer_pane_t1

0x1473,	// (0x00020106) main_video_tele_dialer_pane_t2_ParamLimits

0x1473,	// (0x00020106) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002e51e) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002e51e) main_video_tele_dialer_pane_t

0x18c1,	// (0x00020554) cam4_autofocus_pane_ParamLimits

0x18c1,	// (0x00020554) cam4_autofocus_pane

0x18d9,	// (0x0002056c) cam4_image_uncrop_pane_ParamLimits

0x18d9,	// (0x0002056c) cam4_image_uncrop_pane

0x18f2,	// (0x00020585) cam4_indicators_pane_ParamLimits

0x18f2,	// (0x00020585) cam4_indicators_pane

0x190e,	// (0x000205a1) main_camera4_pane_g1_ParamLimits

0x190e,	// (0x000205a1) main_camera4_pane_g1

0x191a,	// (0x000205ad) main_camera4_pane_g2_ParamLimits

0x191a,	// (0x000205ad) main_camera4_pane_g2

0x191a,	// (0x000205ad) main_camera4_pane_g3_ParamLimits

0x191a,	// (0x000205ad) main_camera4_pane_g3

0x1926,	// (0x000205b9) main_camera4_pane_g4_ParamLimits

0x1926,	// (0x000205b9) main_camera4_pane_g4

0x1932,	// (0x000205c5) main_camera4_pane_g5_ParamLimits

0x1932,	// (0x000205c5) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002e56f) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002e56f) main_camera4_pane_g

0x194c,	// (0x000205df) main_camera4_pane_t1_ParamLimits

0x194c,	// (0x000205df) main_camera4_pane_t1

0x1970,	// (0x00020603) bg_tb_trans_pane_cp06

0x1986,	// (0x00020619) cam4_indicators_pane_g1

0x1997,	// (0x0002062a) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002e58a) cam4_indicators_pane_g

0x19af,	// (0x00020642) cam4_indicators_pane_t1

0x19d9,	// (0x0002066c) main_video4_pane_g1_ParamLimits

0x19d9,	// (0x0002066c) main_video4_pane_g1

0x19e5,	// (0x00020678) main_video4_pane_g2_ParamLimits

0x19e5,	// (0x00020678) main_video4_pane_g2

0x19f1,	// (0x00020684) main_video4_pane_g3_ParamLimits

0x19f1,	// (0x00020684) main_video4_pane_g3

0x19fd,	// (0x00020690) main_video4_pane_g4_ParamLimits

0x19fd,	// (0x00020690) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002e591) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002e591) main_video4_pane_g

0x1a1f,	// (0x000206b2) vid4_indicators_pane_ParamLimits

0x1a1f,	// (0x000206b2) vid4_indicators_pane

0x1a3e,	// (0x000206d1) video4_image_uncrop_cif_pane_ParamLimits

0x1a3e,	// (0x000206d1) video4_image_uncrop_cif_pane

0x1a4d,	// (0x000206e0) video4_image_uncrop_nhd_pane_ParamLimits

0x1a4d,	// (0x000206e0) video4_image_uncrop_nhd_pane

0x18d9,	// (0x0002056c) video4_image_uncrop_vga_pane_ParamLimits

0x18d9,	// (0x0002056c) video4_image_uncrop_vga_pane

0x1a5c,	// (0x000206ef) bg_tb_trans_pane_cp07

0x1a74,	// (0x00020707) vid4_indicators_pane_g1

0x1a8a,	// (0x0002071d) vid4_indicators_pane_g2

0x1a9e,	// (0x00020731) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002e59c) vid4_indicators_pane_g

0x1acf,	// (0x00020762) vid4_indicators_pane_t1

0x6b47,	// (0x000257da) cam4_autofocus_pane_g1

0x6b4f,	// (0x000257e2) cam4_autofocus_pane_g2

0x6b57,	// (0x000257ea) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002e5a7) cam4_autofocus_pane_g

0x6b5f,	// (0x000257f2) cam4_autofocus_pane_g3_copy1

0x6923,	// (0x000255b6) video_down_pane_cp_t1

0x6931,	// (0x000255c4) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002e523) video_down_pane_cp_t

0x2328,	// (0x00020fbb) popup_vitu2_window_ParamLimits

0x2328,	// (0x00020fbb) popup_vitu2_window

0x1ae6,	// (0x00020779) aid_size_cell2_itu2_ParamLimits

0x1ae6,	// (0x00020779) aid_size_cell2_itu2

0x1b08,	// (0x0002079b) aid_size_cell_itu2_ParamLimits

0x1b08,	// (0x0002079b) aid_size_cell_itu2

0x1b4e,	// (0x000207e1) bg_popup_window_pane_cp09_ParamLimits

0x1b4e,	// (0x000207e1) bg_popup_window_pane_cp09

0x1b5c,	// (0x000207ef) field_vitu2_entry_pane_ParamLimits

0x1b5c,	// (0x000207ef) field_vitu2_entry_pane

0x1b7c,	// (0x0002080f) grid_vitu2_function_pane_ParamLimits

0x1b7c,	// (0x0002080f) grid_vitu2_function_pane

0x1bc0,	// (0x00020853) grid_vitu2_itu_pane_ParamLimits

0x1bc0,	// (0x00020853) grid_vitu2_itu_pane

0x1c34,	// (0x000208c7) cell_vitu2_itu_pane_ParamLimits

0x1c34,	// (0x000208c7) cell_vitu2_itu_pane

0x1c4b,	// (0x000208de) cell_vitu2_function_pane_ParamLimits

0x1c4b,	// (0x000208de) cell_vitu2_function_pane

0xd16f,	// (0x0002be02) bg_popup_call_pane_cp08_ParamLimits

0xd16f,	// (0x0002be02) bg_popup_call_pane_cp08

0xd186,	// (0x0002be19) field_vitu2_entry_pane_g1

0xd192,	// (0x0002be25) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002e5ae) field_vitu2_entry_pane_g

0xd1ac,	// (0x0002be3f) field_vitu2_entry_pane_t1_ParamLimits

0xd1ac,	// (0x0002be3f) field_vitu2_entry_pane_t1

0xd1d7,	// (0x0002be6a) field_vitu2_entry_pane_t2_ParamLimits

0xd1d7,	// (0x0002be6a) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002e5b5) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002e5b5) field_vitu2_entry_pane_t

0x1c8f,	// (0x00020922) bg_button_pane_cp010_ParamLimits

0x1c8f,	// (0x00020922) bg_button_pane_cp010

0x1c9d,	// (0x00020930) cell_vitu2_itu_pane_g1

0x1cc6,	// (0x00020959) cell_vitu2_itu_pane_t1_ParamLimits

0x1cc6,	// (0x00020959) cell_vitu2_itu_pane_t1

0x1d12,	// (0x000209a5) cell_vitu2_itu_pane_t2_ParamLimits

0x1d12,	// (0x000209a5) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002e5bf) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002e5bf) cell_vitu2_itu_pane_t

0x1a5c,	// (0x000206ef) bg_button_pane_cp011

0x1dcd,	// (0x00020a60) cell_vitu2_function_pane_g1

0x9bfe,	// (0x00028891) main_myfav_hc_pane

0x1872,	// (0x00020505) popup_image3_note_pane_ParamLimits

0x1872,	// (0x00020505) popup_image3_note_pane

0x1880,	// (0x00020513) popup_image3_tool_bar_pane_ParamLimits

0x1880,	// (0x00020513) popup_image3_tool_bar_pane

0x1d80,	// (0x00020a13) cell_vitu2_itu_pane_t3_ParamLimits

0x1d80,	// (0x00020a13) cell_vitu2_itu_pane_t3

0x9bfe,	// (0x00028891) bg_popup_trans_pane

0xd1fc,	// (0x0002be8f) grid_image3_tool_bar_pane

0xd206,	// (0x0002be99) bg_popup_trans_pane_g1

0xa7c9,	// (0x0002945c) bg_popup_trans_pane_g2

0xd20e,	// (0x0002bea1) bg_popup_trans_pane_g3

0xd216,	// (0x0002bea9) bg_popup_trans_pane_g4

0xd21e,	// (0x0002beb1) bg_popup_trans_pane_g5

0xd226,	// (0x0002beb9) bg_popup_trans_pane_g6

0xd22e,	// (0x0002bec1) bg_popup_trans_pane_g7

0xd236,	// (0x0002bec9) bg_popup_trans_pane_g8

0xa7a9,	// (0x0002943c) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002e5c6) bg_popup_trans_pane_g

0xd23e,	// (0x0002bed1) cell_image3_tool_bar_pane_ParamLimits

0xd23e,	// (0x0002bed1) cell_image3_tool_bar_pane

0xc768,	// (0x0002b3fb) cell_image3_tool_bar_pane_g1

0x9bfe,	// (0x00028891) bg_popup_trans_pane_cp1

0xd254,	// (0x0002bee7) popup_image3_note_pane_t1

0xd262,	// (0x0002bef5) popup_image3_note_pane_t2

0xd270,	// (0x0002bf03) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002e5d9) popup_image3_note_pane_t

0xd280,	// (0x0002bf13) popup_image3_note_pane_t3_copy1

0x6b67,	// (0x000257fa) bg_myfav_hc_instruction_pane_ParamLimits

0x6b67,	// (0x000257fa) bg_myfav_hc_instruction_pane

0x6b7f,	// (0x00025812) cell_myfav_contact_pane_ParamLimits

0x6b7f,	// (0x00025812) cell_myfav_contact_pane

0x6b99,	// (0x0002582c) cell_myfav_contact_pane_cp1_ParamLimits

0x6b99,	// (0x0002582c) cell_myfav_contact_pane_cp1

0x6bb1,	// (0x00025844) cell_myfav_contact_pane_cp2_ParamLimits

0x6bb1,	// (0x00025844) cell_myfav_contact_pane_cp2

0x6bc9,	// (0x0002585c) cell_myfav_contact_pane_cp3_ParamLimits

0x6bc9,	// (0x0002585c) cell_myfav_contact_pane_cp3

0x6be0,	// (0x00025873) cell_myfav_contact_pane_cp4_ParamLimits

0x6be0,	// (0x00025873) cell_myfav_contact_pane_cp4

0x6bf6,	// (0x00025889) cell_myfav_contact_pane_cp5_ParamLimits

0x6bf6,	// (0x00025889) cell_myfav_contact_pane_cp5

0x6c0a,	// (0x0002589d) cell_myfav_contact_pane_cp6_ParamLimits

0x6c0a,	// (0x0002589d) cell_myfav_contact_pane_cp6

0x6c1e,	// (0x000258b1) cell_myfav_contact_pane_cp7_ParamLimits

0x6c1e,	// (0x000258b1) cell_myfav_contact_pane_cp7

0xd28e,	// (0x0002bf21) listscroll_gen_pane_cp05

0x6c36,	// (0x000258c9) main_myfav_hc_pane_g1_ParamLimits

0x6c36,	// (0x000258c9) main_myfav_hc_pane_g1

0x6c50,	// (0x000258e3) main_myfav_hc_pane_g2_ParamLimits

0x6c50,	// (0x000258e3) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002e5e0) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002e5e0) main_myfav_hc_pane_g

0x6c82,	// (0x00025915) main_myfav_hc_pane_t1_ParamLimits

0x6c82,	// (0x00025915) main_myfav_hc_pane_t1

0xd297,	// (0x0002bf2a) main_myfav_hc_pane_t2_ParamLimits

0xd297,	// (0x0002bf2a) main_myfav_hc_pane_t2

0xd2a9,	// (0x0002bf3c) main_myfav_hc_pane_t3_ParamLimits

0xd2a9,	// (0x0002bf3c) main_myfav_hc_pane_t3

0x6c99,	// (0x0002592c) main_myfav_hc_pane_t4_ParamLimits

0x6c99,	// (0x0002592c) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002e5e7) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002e5e7) main_myfav_hc_pane_t

0xc768,	// (0x0002b3fb) bg_myfav_hc_instruction_pane_g1

0xd2bb,	// (0x0002bf4e) cell_myfav_contact_pane_g1_ParamLimits

0xd2bb,	// (0x0002bf4e) cell_myfav_contact_pane_g1

0xd2bb,	// (0x0002bf4e) cell_myfav_contact_pane_g2_ParamLimits

0xd2bb,	// (0x0002bf4e) cell_myfav_contact_pane_g2

0xd2c7,	// (0x0002bf5a) cell_myfav_contact_pane_g3_ParamLimits

0xd2c7,	// (0x0002bf5a) cell_myfav_contact_pane_g3

0xca09,	// (0x0002b69c) cell_myfav_contact_pane_g4_ParamLimits

0xca09,	// (0x0002b69c) cell_myfav_contact_pane_g4

0xd2d4,	// (0x0002bf67) cell_myfav_contact_pane_g5_ParamLimits

0xd2d4,	// (0x0002bf67) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002e5f2) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002e5f2) cell_myfav_contact_pane_g

0x6c6a,	// (0x000258fd) main_myfav_hc_pane_g3_ParamLimits

0x6c6a,	// (0x000258fd) main_myfav_hc_pane_g3

0x223a,	// (0x00020ecd) popup_adpt_find_window

0x6cc3,	// (0x00025956) afind_page_pane_ParamLimits

0x6cc3,	// (0x00025956) afind_page_pane

0x6cd0,	// (0x00025963) aid_size_cell_afind_ParamLimits

0x6cd0,	// (0x00025963) aid_size_cell_afind

0x6cea,	// (0x0002597d) bg_popup_sub_pane_cp09_ParamLimits

0x6cea,	// (0x0002597d) bg_popup_sub_pane_cp09

0x6cf7,	// (0x0002598a) find_pane_cp01_ParamLimits

0x6cf7,	// (0x0002598a) find_pane_cp01

0xd2e0,	// (0x0002bf73) grid_afind_control_pane_ParamLimits

0xd2e0,	// (0x0002bf73) grid_afind_control_pane

0x6d04,	// (0x00025997) grid_afind_pane_ParamLimits

0x6d04,	// (0x00025997) grid_afind_pane

0x6d20,	// (0x000259b3) cell_afind_pane_ParamLimits

0x6d20,	// (0x000259b3) cell_afind_pane

0xc768,	// (0x0002b3fb) afind_page_pane_g1

0x6d6c,	// (0x000259ff) afind_page_pane_g2

0x6d75,	// (0x00025a08) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002e5fd) afind_page_pane_g

0x6d7e,	// (0x00025a11) afind_page_pane_t1

0xd2f4,	// (0x0002bf87) cell_afind_grid_control_pane_ParamLimits

0xd2f4,	// (0x0002bf87) cell_afind_grid_control_pane

0xd0b4,	// (0x0002bd47) bg_button_pane_cp69_ParamLimits

0xd0b4,	// (0x0002bd47) bg_button_pane_cp69

0x6d9e,	// (0x00025a31) cell_afind_pane_g1_ParamLimits

0x6d9e,	// (0x00025a31) cell_afind_pane_g1

0x6dab,	// (0x00025a3e) cell_afind_pane_t1_ParamLimits

0x6dab,	// (0x00025a3e) cell_afind_pane_t1

0xa5b0,	// (0x00029243) bg_button_pane_cp72

0xd303,	// (0x0002bf96) cell_afind_grid_control_pane_g1

0x4fb1,	// (0x00023c44) aid_image_placing_area_ParamLimits

0x4fb1,	// (0x00023c44) aid_image_placing_area

0xcd3c,	// (0x0002b9cf) field_vitu_entry_pane_g1_ParamLimits

0xcd3c,	// (0x0002b9cf) field_vitu_entry_pane_g1

0xcd48,	// (0x0002b9db) field_vitu_entry_pane_g2_ParamLimits

0xcd48,	// (0x0002b9db) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002e4ae) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002e4ae) field_vitu_entry_pane_g

0x67d3,	// (0x00025466) cell_vitu_itu_pane_g1_ParamLimits

0x6823,	// (0x000254b6) cell_vitu_itu_pane_t3_ParamLimits

0x6823,	// (0x000254b6) cell_vitu_itu_pane_t3

0xd056,	// (0x0002bce9) mp4_progress_pane_t1_ParamLimits

0xd06f,	// (0x0002bd02) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002e543) mp4_progress_pane_t_ParamLimits

0xd088,	// (0x0002bd1b) mup_progress_pane_cp04_ParamLimits

0x6cad,	// (0x00025940) main_myfav_hc_pane_t5_ParamLimits

0x6cad,	// (0x00025940) main_myfav_hc_pane_t5

0x9c24,	// (0x000288b7) aid_zoom_text_primary

0x223a,	// (0x00020ecd) popup_adpt_find_window_ParamLimits

0xa5df,	// (0x00029272) main_cam_set_pane

0x1900,	// (0x00020593) cam4_zoom_pane_ParamLimits

0x1900,	// (0x00020593) cam4_zoom_pane

0x6dbd,	// (0x00025a50) main_cam_set_pane_g1_ParamLimits

0x6dbd,	// (0x00025a50) main_cam_set_pane_g1

0x6dcb,	// (0x00025a5e) main_cam_set_pane_g2_ParamLimits

0x6dcb,	// (0x00025a5e) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002e604) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002e604) main_cam_set_pane_g

0x6dd7,	// (0x00025a6a) main_cam_set_pane_t1_ParamLimits

0x6dd7,	// (0x00025a6a) main_cam_set_pane_t1

0x6df3,	// (0x00025a86) main_cset_listscroll_pane_ParamLimits

0x6df3,	// (0x00025a86) main_cset_listscroll_pane

0x6e22,	// (0x00025ab5) main_cset_slider_pane_ParamLimits

0x6e22,	// (0x00025ab5) main_cset_slider_pane

0xd314,	// (0x0002bfa7) main_cset_list_pane_ParamLimits

0xd314,	// (0x0002bfa7) main_cset_list_pane

0xd324,	// (0x0002bfb7) scroll_pane_cp028

0x6e43,	// (0x00025ad6) aid_area_touch_slider

0x6e5f,	// (0x00025af2) cset_slider_pane

0x6e89,	// (0x00025b1c) main_cset_slider_pane_g1

0x6e9e,	// (0x00025b31) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002e609) main_cset_slider_pane_g

0xd35d,	// (0x0002bff0) main_cset_slider_pane_t1

0x6f5a,	// (0x00025bed) main_cset_slider_pane_t2

0x6f74,	// (0x00025c07) main_cset_slider_pane_t3

0x6f8e,	// (0x00025c21) main_cset_slider_pane_t4

0x6fa8,	// (0x00025c3b) main_cset_slider_pane_t5

0x6fc2,	// (0x00025c55) main_cset_slider_pane_t6

0x6fd7,	// (0x00025c6a) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002e62e) main_cset_slider_pane_t

0x70db,	// (0x00025d6e) cset_list_set_pane_ParamLimits

0x70db,	// (0x00025d6e) cset_list_set_pane

0x70ec,	// (0x00025d7f) aid_position_infowindow_above

0x70f4,	// (0x00025d87) aid_position_infowindow_below

0x70fc,	// (0x00025d8f) cset_list_set_pane_g1_ParamLimits

0x70fc,	// (0x00025d8f) cset_list_set_pane_g1

0x7108,	// (0x00025d9b) cset_list_set_pane_g3_ParamLimits

0x7108,	// (0x00025d9b) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002e64d) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002e64d) cset_list_set_pane_g

0x7117,	// (0x00025daa) cset_list_set_pane_t1_ParamLimits

0x7117,	// (0x00025daa) cset_list_set_pane_t1

0xa5df,	// (0x00029272) list_highlight_pane_cp021_ParamLimits

0xa5df,	// (0x00029272) list_highlight_pane_cp021

0xafe8,	// (0x00029c7b) cset_slider_pane_g1

0xaffa,	// (0x00029c8d) cset_slider_pane_g2

0xaff1,	// (0x00029c84) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002e652) cset_slider_pane_g

0x1de1,	// (0x00020a74) aid_area_touch_cam4_zoom

0x1de9,	// (0x00020a7c) cam4_zoom_cont_pane

0x1df1,	// (0x00020a84) cam4_zoom_pane_g1

0x1df9,	// (0x00020a8c) cam4_zoom_pane_g2

0x1e01,	// (0x00020a94) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002e659) cam4_zoom_pane_g

0x1e09,	// (0x00020a9c) cam4_zoom_cont_pane_g1

0x1e12,	// (0x00020aa5) cam4_zoom_cont_pane_g2

0x1e1b,	// (0x00020aae) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002e660) cam4_zoom_cont_pane_g

0x6a3b,	// (0x000256ce) call4_image_pane_ParamLimits

0x6a3b,	// (0x000256ce) call4_image_pane

0xd0c0,	// (0x0002bd53) call4_windows_conf_pane_ParamLimits

0xd0db,	// (0x0002bd6e) popup_call4_audio_in_window_ParamLimits

0xd0db,	// (0x0002bd6e) popup_call4_audio_in_window

0x9bfe,	// (0x00028891) bg_popup_call2_act_pane_cp02

0xd13d,	// (0x0002bdd0) call4_list_conf_pane

0xc768,	// (0x0002b3fb) call4_image_pane_g1

0xc768,	// (0x0002b3fb) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002e36f) call4_image_pane_g

0xd3fd,	// (0x0002c090) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3fd,	// (0x0002c090) list_single_graphic_popup_conf4_pane

0x9bfe,	// (0x00028891) list_highlight_pane_cp022

0xd412,	// (0x0002c0a5) list_single_graphic_popup_conf4_pane_g1

0xacc8,	// (0x0002995b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002e667) list_single_graphic_popup_conf4_pane_g

0xd41a,	// (0x0002c0ad) list_single_graphic_popup_conf4_pane_t1

0x3251,	// (0x00021ee4) popup_vtel_slider_window_ParamLimits

0x3251,	// (0x00021ee4) popup_vtel_slider_window

0xd0a2,	// (0x0002bd35) dialer2_ne_pane_t2_ParamLimits

0xd0a2,	// (0x0002bd35) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002e548) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002e548) dialer2_ne_pane_t

0xa5df,	// (0x00029272) bg_popup_sub_pane_cp010_ParamLimits

0xa5df,	// (0x00029272) bg_popup_sub_pane_cp010

0x712c,	// (0x00025dbf) popup_vtel_slider_window_g1_ParamLimits

0x712c,	// (0x00025dbf) popup_vtel_slider_window_g1

0x7138,	// (0x00025dcb) popup_vtel_slider_window_g2_ParamLimits

0x7138,	// (0x00025dcb) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002e66c) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002e66c) popup_vtel_slider_window_g

0x7180,	// (0x00025e13) vtel_slider_pane_ParamLimits

0x7180,	// (0x00025e13) vtel_slider_pane

0x718f,	// (0x00025e22) vtel_slider_pane_g1_ParamLimits

0x718f,	// (0x00025e22) vtel_slider_pane_g1

0x719c,	// (0x00025e2f) vtel_slider_pane_g2_ParamLimits

0x719c,	// (0x00025e2f) vtel_slider_pane_g2

0x71a9,	// (0x00025e3c) vtel_slider_pane_g3_ParamLimits

0x71a9,	// (0x00025e3c) vtel_slider_pane_g3

0x718f,	// (0x00025e22) vtel_slider_pane_g4_ParamLimits

0x718f,	// (0x00025e22) vtel_slider_pane_g4

0x71b6,	// (0x00025e49) vtel_slider_pane_g5_ParamLimits

0x71b6,	// (0x00025e49) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002e675) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002e675) vtel_slider_pane_g

0xa5df,	// (0x00029272) main_gallery2_pane

0x1b2e,	// (0x000207c1) aid_size_row_itut2_dropdow_list_ParamLimits

0x1b2e,	// (0x000207c1) aid_size_row_itut2_dropdow_list

0x1b9e,	// (0x00020831) grid_vitu2_function_top_pane_ParamLimits

0x1b9e,	// (0x00020831) grid_vitu2_function_top_pane

0x1bf0,	// (0x00020883) popup_vitu2_dropdown_list_window_ParamLimits

0x1bf0,	// (0x00020883) popup_vitu2_dropdown_list_window

0x1c10,	// (0x000208a3) popup_vitu2_match_list_window

0x1e24,	// (0x00020ab7) cell_vitu2_function_top_pane_ParamLimits

0x1e24,	// (0x00020ab7) cell_vitu2_function_top_pane

0x1e44,	// (0x00020ad7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1e44,	// (0x00020ad7) cell_vitu2_function_top_pane_cp01

0x1e62,	// (0x00020af5) cell_vitu2_function_top_wide_pane_ParamLimits

0x1e62,	// (0x00020af5) cell_vitu2_function_top_wide_pane

0x1a5c,	// (0x000206ef) bg_button_pane_cp012

0x1e80,	// (0x00020b13) cell_vitu2_function_top_pane_g1

0x1e93,	// (0x00020b26) bg_button_pane_cp013_ParamLimits

0x1e93,	// (0x00020b26) bg_button_pane_cp013

0x71c3,	// (0x00025e56) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x71c3,	// (0x00025e56) cell_vitu2_function_top_wide_pane_g1

0x1eaf,	// (0x00020b42) bg_popup_sub_pane_cp20

0x1ebd,	// (0x00020b50) list_vitu2_match_list_pane

0xd206,	// (0x0002be99) bg_popup_sub_pane_cp20_g1

0xd20e,	// (0x0002bea1) bg_popup_sub_pane_cp20_g2

0xa7c9,	// (0x0002945c) bg_popup_sub_pane_cp20_g3

0xd216,	// (0x0002bea9) bg_popup_sub_pane_cp20_g4

0xa7a9,	// (0x0002943c) bg_popup_sub_pane_cp20_g5

0xd43e,	// (0x0002c0d1) bg_popup_sub_pane_cp20_g6

0xd226,	// (0x0002beb9) bg_popup_sub_pane_cp20_g7

0xd22e,	// (0x0002bec1) bg_popup_sub_pane_cp20_g8

0xd236,	// (0x0002bec9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002e680) bg_popup_sub_pane_cp20_g

0x1ed5,	// (0x00020b68) list_vitu2_match_list_item_pane_ParamLimits

0x1ed5,	// (0x00020b68) list_vitu2_match_list_item_pane

0x1ee7,	// (0x00020b7a) list_vitu2_match_list_item_pane_t1

0x0b51,	// (0x0001f7e4) bg_popup_sub_pane_cp21

0x1ef5,	// (0x00020b88) grid_vitu2_dropdown_list_pane

0x1efd,	// (0x00020b90) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1efd,	// (0x00020b90) cell_vitu2_dropdown_list_char_pane

0x1f22,	// (0x00020bb5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1f22,	// (0x00020bb5) cell_vitu2_dropdown_list_ctrl_pane

0xd48a,	// (0x0002c11d) cell_vitu2_dropdown_list_char_pane_g1

0xd493,	// (0x0002c126) cell_vitu2_dropdown_list_char_pane_g2

0xd452,	// (0x0002c0e5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002e69d) cell_vitu2_dropdown_list_char_pane_g

0x1f50,	// (0x00020be3) cell_vitu2_dropdown_list_char_pane_t1

0x7213,	// (0x00025ea6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7213,	// (0x00025ea6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7223,	// (0x00025eb6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7223,	// (0x00025eb6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7234,	// (0x00025ec7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7234,	// (0x00025ec7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1f5e,	// (0x00020bf1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1f5e,	// (0x00020bf1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1970,	// (0x00020603) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1970,	// (0x00020603) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002e6a4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002e6a4) cell_vitu2_dropdown_list_ctrl_pane_g

0x7244,	// (0x00025ed7) aid_size_cell_gallery2_ParamLimits

0x7244,	// (0x00025ed7) aid_size_cell_gallery2

0x725e,	// (0x00025ef1) grid_gallery2_pane_ParamLimits

0x725e,	// (0x00025ef1) grid_gallery2_pane

0x6658,	// (0x000252eb) scroll_pane_cp029_ParamLimits

0x6658,	// (0x000252eb) scroll_pane_cp029

0x7275,	// (0x00025f08) cell_gallery2_pane_ParamLimits

0x7275,	// (0x00025f08) cell_gallery2_pane

0xd49c,	// (0x0002c12f) cell_gallery2_pane_g2

0x72c1,	// (0x00025f54) cell_gallery2_pane_g3

0xd4a4,	// (0x0002c137) cell_gallery2_pane_g4

0xd4ac,	// (0x0002c13f) cell_gallery2_pane_g5

0xae96,	// (0x00029b29) grid_highlight_pane_cp10

0x1c10,	// (0x000208a3) popup_vitu2_match_list_window_ParamLimits

0x1c24,	// (0x000208b7) popup_vitu2_query_window_ParamLimits

0x1c24,	// (0x000208b7) popup_vitu2_query_window

0x0b51,	// (0x0001f7e4) bg_vitu2_candi_button_pane

0xd48a,	// (0x0002c11d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd493,	// (0x0002c126) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd452,	// (0x0002c0e5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x72c9,	// (0x00025f5c) bg_button_pane_cp015

0x72db,	// (0x00025f6e) bg_button_pane_cp016

0x72ee,	// (0x00025f81) bg_button_pane_cp017

0xc317,	// (0x0002afaa) bg_popup_sub_pane_cp22

0xd4b4,	// (0x0002c147) popup_vitu2_query_window_g1

0x7333,	// (0x00025fc6) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002e6af) popup_vitu2_query_window_g

0x7350,	// (0x00025fe3) popup_vitu2_query_window_t1_ParamLimits

0x7350,	// (0x00025fe3) popup_vitu2_query_window_t1

0x7383,	// (0x00026016) popup_vitu2_query_window_t2_ParamLimits

0x7383,	// (0x00026016) popup_vitu2_query_window_t2

0x7395,	// (0x00026028) popup_vitu2_query_window_t3_ParamLimits

0x7395,	// (0x00026028) popup_vitu2_query_window_t3

0x73bd,	// (0x00026050) popup_vitu2_query_window_t4_ParamLimits

0x73bd,	// (0x00026050) popup_vitu2_query_window_t4

0x73e0,	// (0x00026073) popup_vitu2_query_window_t5_ParamLimits

0x73e0,	// (0x00026073) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002e6b6) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002e6b6) popup_vitu2_query_window_t

0xd30c,	// (0x0002bf9f) main_cset_text_pane

0x6e43,	// (0x00025ad6) aid_area_touch_slider_ParamLimits

0x6e5f,	// (0x00025af2) cset_slider_pane_ParamLimits

0x6e89,	// (0x00025b1c) main_cset_slider_pane_g1_ParamLimits

0x6e9e,	// (0x00025b31) main_cset_slider_pane_g2_ParamLimits

0xd32d,	// (0x0002bfc0) main_cset_slider_pane_g3_ParamLimits

0xd32d,	// (0x0002bfc0) main_cset_slider_pane_g3

0x6eb3,	// (0x00025b46) main_cset_slider_pane_g4_ParamLimits

0x6eb3,	// (0x00025b46) main_cset_slider_pane_g4

0x6ec2,	// (0x00025b55) main_cset_slider_pane_g5_ParamLimits

0x6ec2,	// (0x00025b55) main_cset_slider_pane_g5

0x6ece,	// (0x00025b61) main_cset_slider_pane_g6_ParamLimits

0x6ece,	// (0x00025b61) main_cset_slider_pane_g6

0xf976,	// (0x0002e609) main_cset_slider_pane_g_ParamLimits

0xd35d,	// (0x0002bff0) main_cset_slider_pane_t1_ParamLimits

0x6f5a,	// (0x00025bed) main_cset_slider_pane_t2_ParamLimits

0x6f74,	// (0x00025c07) main_cset_slider_pane_t3_ParamLimits

0x6f8e,	// (0x00025c21) main_cset_slider_pane_t4_ParamLimits

0x6fa8,	// (0x00025c3b) main_cset_slider_pane_t5_ParamLimits

0x6fc2,	// (0x00025c55) main_cset_slider_pane_t6_ParamLimits

0x6fd7,	// (0x00025c6a) main_cset_slider_pane_t7_ParamLimits

0x7001,	// (0x00025c94) main_cset_slider_pane_t8_ParamLimits

0x7001,	// (0x00025c94) main_cset_slider_pane_t8

0x7029,	// (0x00025cbc) main_cset_slider_pane_t9_ParamLimits

0x7029,	// (0x00025cbc) main_cset_slider_pane_t9

0x7051,	// (0x00025ce4) main_cset_slider_pane_t10_ParamLimits

0x7051,	// (0x00025ce4) main_cset_slider_pane_t10

0x7079,	// (0x00025d0c) main_cset_slider_pane_t11_ParamLimits

0x7079,	// (0x00025d0c) main_cset_slider_pane_t11

0x70a1,	// (0x00025d34) main_cset_slider_pane_t12_ParamLimits

0x70a1,	// (0x00025d34) main_cset_slider_pane_t12

0x70be,	// (0x00025d51) main_cset_slider_pane_t13_ParamLimits

0x70be,	// (0x00025d51) main_cset_slider_pane_t13

0xf99b,	// (0x0002e62e) main_cset_slider_pane_t_ParamLimits

0x9bfe,	// (0x00028891) bg_popup_sub_pane_cp011

0xd4c0,	// (0x0002c153) main_cset_text_pane_g1

0xd4c8,	// (0x0002c15b) main_cset_text_pane_t1

0xd4d6,	// (0x0002c169) main_cset_text_pane_t2

0xd4e4,	// (0x0002c177) main_cset_text_pane_t3

0xd4f2,	// (0x0002c185) main_cset_text_pane_t4

0xd500,	// (0x0002c193) main_cset_text_pane_t5

0xd50e,	// (0x0002c1a1) main_cset_text_pane_t6

0xd51c,	// (0x0002c1af) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002e6c5) main_cset_text_pane_t

0x9bfe,	// (0x00028891) main_cam4_burst_pane

0x9bfe,	// (0x00028891) main_cam5_pane

0x6d8c,	// (0x00025a1f) bg_button_pane_cp019

0x6d95,	// (0x00025a28) bg_button_pane_cp020

0xd339,	// (0x0002bfcc) main_cset_slider_pane_g7_ParamLimits

0xd339,	// (0x0002bfcc) main_cset_slider_pane_g7

0xd345,	// (0x0002bfd8) main_cset_slider_pane_g8_ParamLimits

0xd345,	// (0x0002bfd8) main_cset_slider_pane_g8

0x6ee2,	// (0x00025b75) main_cset_slider_pane_g9_ParamLimits

0x6ee2,	// (0x00025b75) main_cset_slider_pane_g9

0x6eee,	// (0x00025b81) main_cset_slider_pane_g10_ParamLimits

0x6eee,	// (0x00025b81) main_cset_slider_pane_g10

0x6efa,	// (0x00025b8d) main_cset_slider_pane_g11_ParamLimits

0x6efa,	// (0x00025b8d) main_cset_slider_pane_g11

0x6f06,	// (0x00025b99) main_cset_slider_pane_g12_ParamLimits

0x6f06,	// (0x00025b99) main_cset_slider_pane_g12

0x6f12,	// (0x00025ba5) main_cset_slider_pane_g13_ParamLimits

0x6f12,	// (0x00025ba5) main_cset_slider_pane_g13

0x6f1e,	// (0x00025bb1) main_cset_slider_pane_g14_ParamLimits

0x6f1e,	// (0x00025bb1) main_cset_slider_pane_g14

0x6f2a,	// (0x00025bbd) main_cset_slider_pane_g15_ParamLimits

0x6f2a,	// (0x00025bbd) main_cset_slider_pane_g15

0xd38b,	// (0x0002c01e) main_cset_slider_pane_t14_ParamLimits

0xd38b,	// (0x0002c01e) main_cset_slider_pane_t14

0xd3c4,	// (0x0002c057) main_cset_slider_pane_t15_ParamLimits

0xd3c4,	// (0x0002c057) main_cset_slider_pane_t15

0x7459,	// (0x000260ec) aid_cam4_burst_size_cell_ParamLimits

0x7459,	// (0x000260ec) aid_cam4_burst_size_cell

0x7475,	// (0x00026108) grid_cam4_burst_pane_ParamLimits

0x7475,	// (0x00026108) grid_cam4_burst_pane

0x74a7,	// (0x0002613a) linegrid_cam4_burst_pane_ParamLimits

0x74a7,	// (0x0002613a) linegrid_cam4_burst_pane

0x74c5,	// (0x00026158) scroll_pane_cp30_ParamLimits

0x74c5,	// (0x00026158) scroll_pane_cp30

0x74d1,	// (0x00026164) cell_cam4_burst_pane_ParamLimits

0x74d1,	// (0x00026164) cell_cam4_burst_pane

0xd52a,	// (0x0002c1bd) linegrid_cam4_burst_pane_g1_ParamLimits

0xd52a,	// (0x0002c1bd) linegrid_cam4_burst_pane_g1

0x7511,	// (0x000261a4) linegrid_cam4_burst_pane_g2_ParamLimits

0x7511,	// (0x000261a4) linegrid_cam4_burst_pane_g2

0xd537,	// (0x0002c1ca) linegrid_cam4_burst_pane_g3_ParamLimits

0xd537,	// (0x0002c1ca) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002e6d4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002e6d4) linegrid_cam4_burst_pane_g

0x7522,	// (0x000261b5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7522,	// (0x000261b5) linegrid_cam4_burst_pane_g3_copy1

0xd544,	// (0x0002c1d7) linegrid_cam4_burst_pane_g4_ParamLimits

0xd544,	// (0x0002c1d7) linegrid_cam4_burst_pane_g4

0x753c,	// (0x000261cf) linegrid_cam4_burst_pane_g5_ParamLimits

0x753c,	// (0x000261cf) linegrid_cam4_burst_pane_g5

0x754d,	// (0x000261e0) linegrid_cam4_burst_pane_g6_ParamLimits

0x754d,	// (0x000261e0) linegrid_cam4_burst_pane_g6

0xd551,	// (0x0002c1e4) linegrid_cam4_burst_pane_g7_ParamLimits

0xd551,	// (0x0002c1e4) linegrid_cam4_burst_pane_g7

0x7564,	// (0x000261f7) cell_cam4_burst_pane_g1

0xd56a,	// (0x0002c1fd) main_cam5_pane_t1_ParamLimits

0xd56a,	// (0x0002c1fd) main_cam5_pane_t1

0xd57c,	// (0x0002c20f) main_cam5_pane_t2_ParamLimits

0xd57c,	// (0x0002c20f) main_cam5_pane_t2

0xd58e,	// (0x0002c221) main_cam5_pane_t3_ParamLimits

0xd58e,	// (0x0002c221) main_cam5_pane_t3

0xd5a0,	// (0x0002c233) main_cam5_pane_t4_ParamLimits

0xd5a0,	// (0x0002c233) main_cam5_pane_t4

0xd5b8,	// (0x0002c24b) main_cam5_pane_t5_ParamLimits

0xd5b8,	// (0x0002c24b) main_cam5_pane_t5

0xd5cc,	// (0x0002c25f) main_cam5_pane_t6_ParamLimits

0xd5cc,	// (0x0002c25f) main_cam5_pane_t6

0xd5e0,	// (0x0002c273) main_cam5_pane_t7_ParamLimits

0xd5e0,	// (0x0002c273) main_cam5_pane_t7

0xd5f2,	// (0x0002c285) main_cam5_pane_t8_ParamLimits

0xd5f2,	// (0x0002c285) main_cam5_pane_t8

0xd610,	// (0x0002c2a3) main_cam5_pane_t9_ParamLimits

0xd610,	// (0x0002c2a3) main_cam5_pane_t9

0xd622,	// (0x0002c2b5) main_cam5_pane_t10_ParamLimits

0xd622,	// (0x0002c2b5) main_cam5_pane_t10

0xd634,	// (0x0002c2c7) main_cam5_pane_t11_ParamLimits

0xd634,	// (0x0002c2c7) main_cam5_pane_t11

0xd648,	// (0x0002c2db) main_cam5_pane_t12_ParamLimits

0xd648,	// (0x0002c2db) main_cam5_pane_t12

0xd65f,	// (0x0002c2f2) main_cam5_pane_t13_ParamLimits

0xd65f,	// (0x0002c2f2) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002e6e0) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002e6e0) main_cam5_pane_t

0x22e7,	// (0x00020f7a) popup_scut_keymap_window_ParamLimits

0x22e7,	// (0x00020f7a) popup_scut_keymap_window

0x7577,	// (0x0002620a) aid_size_cell_brow_shortcut

0xae96,	// (0x00029b29) bg_popup_window_pane_cp010

0x7583,	// (0x00026216) grid_scut_pane

0x758f,	// (0x00026222) cell_scut_pane_ParamLimits

0x758f,	// (0x00026222) cell_scut_pane

0x75aa,	// (0x0002623d) cell_scut_pane_g1

0xd682,	// (0x0002c315) cell_scut_pane_t1

0xd691,	// (0x0002c324) cell_scut_pane_t2

0x75b3,	// (0x00026246) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002e6fb) cell_scut_pane_t

0x5ec5,	// (0x00024b58) main_mup3_pane_g8_ParamLimits

0x5ec5,	// (0x00024b58) main_mup3_pane_g8

0x1b3e,	// (0x000207d1) area_vitu2_query_pane_ParamLimits

0x1b3e,	// (0x000207d1) area_vitu2_query_pane

0x7301,	// (0x00025f94) input_focus_pane_cp08

0xd6a0,	// (0x0002c333) area_vitu2_query_pane_g1

0x75c1,	// (0x00026254) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002e702) area_vitu2_query_pane_g

0x75d2,	// (0x00026265) area_vitu2_query_pane_t1_ParamLimits

0x75d2,	// (0x00026265) area_vitu2_query_pane_t1

0x75e6,	// (0x00026279) area_vitu2_query_pane_t2_ParamLimits

0x75e6,	// (0x00026279) area_vitu2_query_pane_t2

0x75fa,	// (0x0002628d) area_vitu2_query_pane_t3_ParamLimits

0x75fa,	// (0x0002628d) area_vitu2_query_pane_t3

0xd6ac,	// (0x0002c33f) area_vitu2_query_pane_t4_ParamLimits

0xd6ac,	// (0x0002c33f) area_vitu2_query_pane_t4

0xd6d4,	// (0x0002c367) area_vitu2_query_pane_t5_ParamLimits

0xd6d4,	// (0x0002c367) area_vitu2_query_pane_t5

0xd6fc,	// (0x0002c38f) area_vitu2_query_pane_t6_ParamLimits

0xd6fc,	// (0x0002c38f) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002e707) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002e707) area_vitu2_query_pane_t

0x7622,	// (0x000262b5) bg_button_pane_cp018

0x7630,	// (0x000262c3) bg_button_pane_cp021

0x763c,	// (0x000262cf) bg_button_pane_cp022

0x764d,	// (0x000262e0) input_focus_pane_cp09

0x464d,	// (0x000232e0) aid_size_touch_mv_arrow_left

0x4678,	// (0x0002330b) aid_size_touch_mv_arrow_right

0x6f42,	// (0x00025bd5) main_cset_slider_pane_g16_ParamLimits

0x6f42,	// (0x00025bd5) main_cset_slider_pane_g16

0x6f4e,	// (0x00025be1) main_cset_slider_pane_g17_ParamLimits

0x6f4e,	// (0x00025be1) main_cset_slider_pane_g17

0x7564,	// (0x000261f7) cell_cam4_burst_pane_g1_ParamLimits

0x9bfe,	// (0x00028891) compa_mode_pane

0x7144,	// (0x00025dd7) popup_vtel_slider_window_g3_ParamLimits

0x7144,	// (0x00025dd7) popup_vtel_slider_window_g3

0x7158,	// (0x00025deb) popup_vtel_slider_window_g4_ParamLimits

0x7158,	// (0x00025deb) popup_vtel_slider_window_g4

0x716c,	// (0x00025dff) popup_vtel_slider_window_t1_ParamLimits

0x716c,	// (0x00025dff) popup_vtel_slider_window_t1

0x9bfe,	// (0x00028891) main_cl_pane

0xc343,	// (0x0002afd6) popup_imed_adjust2_window_ParamLimits

0xc317,	// (0x0002afaa) bg_tb_trans_pane_cp05_ParamLimits

0xcc71,	// (0x0002b904) popup_imed_adjust2_window_g1_ParamLimits

0xcc80,	// (0x0002b913) popup_imed_adjust2_window_g2_ParamLimits

0xcc80,	// (0x0002b913) popup_imed_adjust2_window_g2

0xcc8c,	// (0x0002b91f) popup_imed_adjust2_window_g3_ParamLimits

0xcc8c,	// (0x0002b91f) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002e472) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002e472) popup_imed_adjust2_window_g

0xcc98,	// (0x0002b92b) popup_imed_adjust2_window_t1_ParamLimits

0xccb0,	// (0x0002b943) slider_imed_adjust_pane_ParamLimits

0xccc4,	// (0x0002b957) slider_imed_adjust_pane_g1_ParamLimits

0xccd4,	// (0x0002b967) slider_imed_adjust_pane_g2_ParamLimits

0xcce4,	// (0x0002b977) slider_imed_adjust_pane_g3_ParamLimits

0xccf5,	// (0x0002b988) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002e479) slider_imed_adjust_pane_g_ParamLimits

0x18a9,	// (0x0002053c) aid_touch_area_cam4_ParamLimits

0x18a9,	// (0x0002053c) aid_touch_area_cam4

0x18b9,	// (0x0002054c) battery_pane_cp01

0x1940,	// (0x000205d3) main_camera4_pane_g6_ParamLimits

0x1940,	// (0x000205d3) main_camera4_pane_g6

0x195e,	// (0x000205f1) main_camera4_pane_t2_ParamLimits

0x195e,	// (0x000205f1) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002e57c) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002e57c) main_camera4_pane_t

0x19c9,	// (0x0002065c) aid_touch_area_vid4_ParamLimits

0x19c9,	// (0x0002065c) aid_touch_area_vid4

0x1a09,	// (0x0002069c) main_video4_pane_g5_ParamLimits

0x1a09,	// (0x0002069c) main_video4_pane_g5

0x1a2f,	// (0x000206c2) vid4_progress_pane_ParamLimits

0x1a2f,	// (0x000206c2) vid4_progress_pane

0xd351,	// (0x0002bfe4) main_cset_slider_pane_g18_ParamLimits

0xd351,	// (0x0002bfe4) main_cset_slider_pane_g18

0xd55e,	// (0x0002c1f1) cell_cam4_burst_pane_g2_ParamLimits

0xd55e,	// (0x0002c1f1) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002e6db) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002e6db) cell_cam4_burst_pane_g

0x765e,	// (0x000262f1) bg_cl_pane_ParamLimits

0x765e,	// (0x000262f1) bg_cl_pane

0x766a,	// (0x000262fd) cl_header_pane_ParamLimits

0x766a,	// (0x000262fd) cl_header_pane

0x7676,	// (0x00026309) cl_listscroll_pane_ParamLimits

0x7676,	// (0x00026309) cl_listscroll_pane

0xd748,	// (0x0002c3db) bg_cl_pane_g1

0xd750,	// (0x0002c3e3) bg_cl_pane_g2

0xd758,	// (0x0002c3eb) bg_cl_pane_g3

0xd760,	// (0x0002c3f3) bg_cl_pane_g4

0xd768,	// (0x0002c3fb) bg_cl_pane_g5

0xd770,	// (0x0002c403) bg_cl_pane_g6

0xd778,	// (0x0002c40b) bg_cl_pane_g7

0xd780,	// (0x0002c413) bg_cl_pane_g8

0xd788,	// (0x0002c41b) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002e716) bg_cl_pane_g

0x7682,	// (0x00026315) aid_height_cl_leading_ParamLimits

0x7682,	// (0x00026315) aid_height_cl_leading

0x768e,	// (0x00026321) aid_height_cl_text_ParamLimits

0x768e,	// (0x00026321) aid_height_cl_text

0x2328,	// (0x00020fbb) bg_cl_header_pane_ParamLimits

0x2328,	// (0x00020fbb) bg_cl_header_pane

0x76a6,	// (0x00026339) cl_header_pane_g1_ParamLimits

0x76a6,	// (0x00026339) cl_header_pane_g1

0x76b3,	// (0x00026346) cl_header_pane_t1_ParamLimits

0x76b3,	// (0x00026346) cl_header_pane_t1

0xd790,	// (0x0002c423) cl_list_pane

0xd324,	// (0x0002bfb7) hc_scroll_pane_cp01

0xa7a9,	// (0x0002943c) bg_cl_header_pane_g1

0xd206,	// (0x0002be99) bg_cl_header_pane_g2

0xa7c9,	// (0x0002945c) bg_cl_header_pane_g3

0xd216,	// (0x0002bea9) bg_cl_header_pane_g4

0xd20e,	// (0x0002bea1) bg_cl_header_pane_g5

0xd43e,	// (0x0002c0d1) bg_cl_header_pane_g6

0xd22e,	// (0x0002bec1) bg_cl_header_pane_g7

0xd236,	// (0x0002bec9) bg_cl_header_pane_g8

0xd226,	// (0x0002beb9) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002e729) bg_cl_header_pane_g

0x76c5,	// (0x00026358) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x76c5,	// (0x00026358) hc_cl_list_double_graphic_heading_pane

0x76d5,	// (0x00026368) hc_cl_list_single_graphic_pane_ParamLimits

0x76d5,	// (0x00026368) hc_cl_list_single_graphic_pane

0x76e7,	// (0x0002637a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76e7,	// (0x0002637a) hc_cl_list_single_graphic_pane_g1

0x76f3,	// (0x00026386) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76f3,	// (0x00026386) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002e73c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002e73c) hc_cl_list_single_graphic_pane_g

0x7707,	// (0x0002639a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7707,	// (0x0002639a) hc_cl_list_single_graphic_pane_t1

0x76e7,	// (0x0002637a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76e7,	// (0x0002637a) hc_cl_list_double_graphic_heading_pane_g1

0x771c,	// (0x000263af) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x771c,	// (0x000263af) hc_cl_list_double_graphic_heading_pane_g2

0x7730,	// (0x000263c3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7730,	// (0x000263c3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002e741) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002e741) hc_cl_list_double_graphic_heading_pane_g

0x7744,	// (0x000263d7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7744,	// (0x000263d7) hc_cl_list_double_graphic_heading_pane_t1

0x7759,	// (0x000263ec) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7759,	// (0x000263ec) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002e748) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002e748) hc_cl_list_double_graphic_heading_pane_t

0x1f7f,	// (0x00020c12) vid4_progress_pane_g1

0x1f91,	// (0x00020c24) vid4_progress_pane_g2

0x106d,	// (0x0001fd00) vid4_progress_pane_g3

0x1fa3,	// (0x00020c36) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002e74d) vid4_progress_pane_g

0x1fc1,	// (0x00020c54) vid4_progress_pane_t1

0x1fd6,	// (0x00020c69) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002e758) vid4_progress_pane_t

0x2001,	// (0x00020c94) wait_bar_pane_cp07

0xc555,	// (0x0002b1e8) blid_firmament_pane_ParamLimits

0xc598,	// (0x0002b22b) popup_blid_sat_info2_window_g1

0xc5bc,	// (0x0002b24f) popup_blid_sat_info2_window_t3

0xc5ca,	// (0x0002b25d) popup_blid_sat_info2_window_t4

0xc5d8,	// (0x0002b26b) popup_blid_sat_info2_window_t5

0xc5e6,	// (0x0002b279) popup_blid_sat_info2_window_t6

0xc5f6,	// (0x0002b289) popup_blid_sat_info2_window_t7

0xc604,	// (0x0002b297) popup_blid_sat_info2_window_t8

0xc612,	// (0x0002b2a5) popup_blid_sat_info2_window_t9

0xc620,	// (0x0002b2b3) popup_blid_sat_info2_window_t10

0xc6e8,	// (0x0002b37b) aid_firma_cardinal_ParamLimits

0xc6fc,	// (0x0002b38f) blid_firmament_pane_t1_ParamLimits

0xc713,	// (0x0002b3a6) blid_firmament_pane_t2_ParamLimits

0xc72a,	// (0x0002b3bd) blid_firmament_pane_t3_ParamLimits

0xc741,	// (0x0002b3d4) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002e366) blid_firmament_pane_t_ParamLimits

0xc758,	// (0x0002b3eb) blid_sat_info_pane_ParamLimits

0xa5df,	// (0x00029272) main_cam_set_pane_ParamLimits

0x65f1,	// (0x00025284) aid_size_cell_colour_35_ParamLimits

0x660b,	// (0x0002529e) aid_size_cell_colour_112_ParamLimits

0x6622,	// (0x000252b5) aid_size_cell_effect_ParamLimits

0xa5df,	// (0x00029272) bg_tb_trans_pane_cp02_ParamLimits

0xaf22,	// (0x00029bb5) heading_imed_pane_ParamLimits

0x663c,	// (0x000252cf) listscroll_imed_pane_ParamLimits

0xb939,	// (0x0002a5cc) popup_call2_audio_first_window_g5_ParamLimits

0xb939,	// (0x0002a5cc) popup_call2_audio_first_window_g5

0x1732,	// (0x000203c5) aid_size_touch_image3_arrow_left_ParamLimits

0x1732,	// (0x000203c5) aid_size_touch_image3_arrow_left

0x1748,	// (0x000203db) aid_size_touch_image3_arrow_right_ParamLimits

0x1748,	// (0x000203db) aid_size_touch_image3_arrow_right

0x1fec,	// (0x00020c7f) vid4_progress_pane_t3

0x68ea,	// (0x0002557d) main_hwr_training_symbol_option_pane_ParamLimits

0x68ea,	// (0x0002557d) main_hwr_training_symbol_option_pane

0xcf60,	// (0x0002bbf3) popup_hwr_training_preview_window_ParamLimits

0xcf60,	// (0x0002bbf3) popup_hwr_training_preview_window

0x1428,	// (0x000200bb) hwr_training_navi_pane_g5_ParamLimits

0x1428,	// (0x000200bb) hwr_training_navi_pane_g5

0xd1f4,	// (0x0002be87) popup_char_count_window

0x1eaf,	// (0x00020b42) bg_popup_sub_pane_cp20_ParamLimits

0x1ebd,	// (0x00020b50) list_vitu2_match_list_pane_ParamLimits

0x1ec9,	// (0x00020b5c) vitu2_page_scroll_pane_ParamLimits

0x1ec9,	// (0x00020b5c) vitu2_page_scroll_pane

0xd7bb,	// (0x0002c44e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7bb,	// (0x0002c44e) list_single_hwr_training_symbol_option_pane

0xd7ce,	// (0x0002c461) list_single_hwr_training_symbol_option_pane_g1

0xd7d6,	// (0x0002c469) list_single_hwr_training_symbol_option_pane_t1

0xd7e4,	// (0x0002c477) bg_button_pane_cp023

0xd7ed,	// (0x0002c480) bg_button_pane_cp024

0x77a6,	// (0x00026439) vitu2_page_scroll_pane_g1

0x77ae,	// (0x00026441) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002e75f) vitu2_page_scroll_pane_g

0x77b8,	// (0x0002644b) vitu2_page_scroll_pane_t1

0xc4b5,	// (0x0002b148) popup_char_count_window_g1

0xd820,	// (0x0002c4b3) popup_char_count_window_g2

0xd829,	// (0x0002c4bc) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002e764) popup_char_count_window_g

0xd832,	// (0x0002c4c5) popup_char_count_window_t1

0x9bfe,	// (0x00028891) main_vded2_pane

0xcc5d,	// (0x0002b8f0) aid_size_cell_imed_line

0xcc67,	// (0x0002b8fa) grid_imed_line_width_pane

0x1ab1,	// (0x00020744) vid4_indicators_pane_g4

0xd840,	// (0x0002c4d3) cell_imed_line_width_pane_ParamLimits

0xd840,	// (0x0002c4d3) cell_imed_line_width_pane

0xd856,	// (0x0002c4e9) cell_imed_line_width_pane_g1

0xd482,	// (0x0002c115) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002e76b) cell_imed_line_width_pane_g

0x77c7,	// (0x0002645a) main_vded2_pane_g1_ParamLimits

0x77c7,	// (0x0002645a) main_vded2_pane_g1

0x77d6,	// (0x00026469) main_vded2_pane_g2_ParamLimits

0x77d6,	// (0x00026469) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002e770) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002e770) main_vded2_pane_g

0x77e4,	// (0x00026477) vded2_slider_pane_ParamLimits

0x77e4,	// (0x00026477) vded2_slider_pane

0x77f1,	// (0x00026484) aid_size_touch_vded2_end

0x77fb,	// (0x0002648e) aid_size_touch_vded2_playhead

0xd85f,	// (0x0002c4f2) aid_size_touch_vded2_start

0xd87d,	// (0x0002c510) vded2_slider_bg_pane

0xd886,	// (0x0002c519) vded2_slider_pane_g1

0xd88f,	// (0x0002c522) vded2_slider_pane_g2

0x7803,	// (0x00026496) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002e775) vded2_slider_pane_g

0xd033,	// (0x0002bcc6) vded2_slider_bg_pane_g1

0xd03c,	// (0x0002bccf) vded2_slider_bg_pane_g2

0xd045,	// (0x0002bcd8) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0002e436) vded2_slider_bg_pane_g

0x4d14,	// (0x000239a7) aid_postcard_touch_down_pane_ParamLimits

0x4d14,	// (0x000239a7) aid_postcard_touch_down_pane

0x4d24,	// (0x000239b7) aid_postcard_touch_up_pane_ParamLimits

0x4d24,	// (0x000239b7) aid_postcard_touch_up_pane

0x9bfe,	// (0x00028891) main_blid2_pane

0xc325,	// (0x0002afb8) popup_blid2_search_window

0x9bfe,	// (0x00028891) blid2_gps_pane

0x9bfe,	// (0x00028891) blid2_navig_pane

0x9bfe,	// (0x00028891) blid2_search_pane

0x9bfe,	// (0x00028891) blid2_tripm_pane

0x780c,	// (0x0002649f) blid2_search_pane_g1_ParamLimits

0x780c,	// (0x0002649f) blid2_search_pane_g1

0x7818,	// (0x000264ab) blid2_search_pane_t1_ParamLimits

0x7818,	// (0x000264ab) blid2_search_pane_t1

0x782a,	// (0x000264bd) aid_size_cell_blid2_gps_ParamLimits

0x782a,	// (0x000264bd) aid_size_cell_blid2_gps

0x783a,	// (0x000264cd) blid2_gps_pane_g1_ParamLimits

0x783a,	// (0x000264cd) blid2_gps_pane_g1

0x7846,	// (0x000264d9) grid_blid2_satellite_pane_ParamLimits

0x7846,	// (0x000264d9) grid_blid2_satellite_pane

0x7854,	// (0x000264e7) blid2_navig_pane_g1_ParamLimits

0x7854,	// (0x000264e7) blid2_navig_pane_g1

0x7860,	// (0x000264f3) blid2_navig_pane_t1_ParamLimits

0x7860,	// (0x000264f3) blid2_navig_pane_t1

0x7872,	// (0x00026505) blid2_navig_pane_t2_ParamLimits

0x7872,	// (0x00026505) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0002e77c) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0002e77c) blid2_navig_pane_t

0x7884,	// (0x00026517) blid2_navig_ring_pane_ParamLimits

0x7884,	// (0x00026517) blid2_navig_ring_pane

0x7894,	// (0x00026527) blid2_speed_pane_ParamLimits

0x7894,	// (0x00026527) blid2_speed_pane

0x78a0,	// (0x00026533) blid2_tripm_pane_g1_ParamLimits

0x78a0,	// (0x00026533) blid2_tripm_pane_g1

0x78b0,	// (0x00026543) blid2_tripm_pane_g2_ParamLimits

0x78b0,	// (0x00026543) blid2_tripm_pane_g2

0x78bc,	// (0x0002654f) blid2_tripm_pane_g3_ParamLimits

0x78bc,	// (0x0002654f) blid2_tripm_pane_g3

0x78c8,	// (0x0002655b) blid2_tripm_pane_g4_ParamLimits

0x78c8,	// (0x0002655b) blid2_tripm_pane_g4

0x78d4,	// (0x00026567) blid2_tripm_pane_g5_ParamLimits

0x78d4,	// (0x00026567) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0002e781) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0002e781) blid2_tripm_pane_g

0x78f0,	// (0x00026583) blid2_tripm_pane_t1_ParamLimits

0x78f0,	// (0x00026583) blid2_tripm_pane_t1

0x7902,	// (0x00026595) blid2_tripm_pane_t2_ParamLimits

0x7902,	// (0x00026595) blid2_tripm_pane_t2

0x7914,	// (0x000265a7) blid2_tripm_pane_t3_ParamLimits

0x7914,	// (0x000265a7) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0002e78e) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0002e78e) blid2_tripm_pane_t

0x7946,	// (0x000265d9) cell_blid2_satellite_pane_ParamLimits

0x7946,	// (0x000265d9) cell_blid2_satellite_pane

0x7964,	// (0x000265f7) cell_blid2_satellite_pane_g1

0xd897,	// (0x0002c52a) cell_blid2_satellite_pane_t1

0xc768,	// (0x0002b3fb) blid2_speed_pane_g1

0xd8a5,	// (0x0002c538) blid2_speed_pane_t1

0xd8b3,	// (0x0002c546) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0002e797) blid2_speed_pane_t

0xc768,	// (0x0002b3fb) blid2_navig_ring_pane_g1

0x796d,	// (0x00026600) blid2_navig_ring_pane_g2

0x7975,	// (0x00026608) blid2_navig_ring_pane_g3

0x797d,	// (0x00026610) blid2_navig_ring_pane_g4

0x7985,	// (0x00026618) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0002e79c) blid2_navig_ring_pane_g

0x9bfe,	// (0x00028891) bg_popup_window_pane_cp011

0xd8c1,	// (0x0002c554) popup_blid2_search_window_g1

0xd8c9,	// (0x0002c55c) popup_blid2_search_window_t1

0xd8d7,	// (0x0002c56a) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0002e7a7) popup_blid2_search_window_t

0xa6b8,	// (0x0002934b) main_browser_pane_g1

0xa392,	// (0x00029025) main_browser_pane_ParamLimits

0x1a5c,	// (0x000206ef) bg_button_pane_cp011_ParamLimits

0x1dcd,	// (0x00020a60) cell_vitu2_function_pane_g1_ParamLimits

0xc317,	// (0x0002afaa) bg_popup_sub_pane_cp22_ParamLimits

0x7301,	// (0x00025f94) input_focus_pane_cp08_ParamLimits

0x7318,	// (0x00025fab) popup_vitu2_query_button_pane_ParamLimits

0x7318,	// (0x00025fab) popup_vitu2_query_button_pane

0x7329,	// (0x00025fbc) popup_vitu2_query_input_button_pane

0xd4b4,	// (0x0002c147) popup_vitu2_query_window_g1_ParamLimits

0x7333,	// (0x00025fc6) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002e6af) popup_vitu2_query_window_g_ParamLimits

0x9bfe,	// (0x00028891) bg_button_pane_cp026

0x798d,	// (0x00026620) popup_vitu2_query_input_button_pane_g1

0x9bfe,	// (0x00028891) bg_button_pane_cp025

0xd8e5,	// (0x0002c578) popup_vitu2_query_button_pane_t1

0x5bc3,	// (0x00024856) main_mp3_pane_t6

0x5bd3,	// (0x00024866) popup_slider_window_cp01

0x197e,	// (0x00020611) cam4_battery_pane

0x1a6a,	// (0x000206fd) cam4_battery_pane_cp02

0x1f77,	// (0x00020c0a) cam4_battery_pane_cp01

0x1f77,	// (0x00020c0a) cam4_battery_pane_cp03

0xd873,	// (0x0002c506) cam4_battery_pane_g1

0xc768,	// (0x0002b3fb) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0002e7ac) cam4_battery_pane_g

0xc62e,	// (0x0002b2c1) popup_blid_sat_info2_window_t11

0x464d,	// (0x000232e0) aid_size_touch_mv_arrow_left_ParamLimits

0x4678,	// (0x0002330b) aid_size_touch_mv_arrow_right_ParamLimits

0xadf6,	// (0x00029a89) navi_pane_g1_ParamLimits

0x46b7,	// (0x0002334a) navi_pane_g2_ParamLimits

0x46e5,	// (0x00023378) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002e078) navi_pane_g_ParamLimits

0x473f,	// (0x000233d2) navi_pane_mv_t1_ParamLimits

0x6648,	// (0x000252db) grid_imed_effect_pane_ParamLimits

0x3119,	// (0x00021dac) aid_placing_vt_slider_lsc

0xa603,	// (0x00029296) aid_placing_vt_slider_prt

0xa5df,	// (0x00029272) bg_tb_trans_pane_cp01_ParamLimits

0xc8b8,	// (0x0002b54b) popup_image_details_window_g1_ParamLimits

0xc8cb,	// (0x0002b55e) popup_image_details_window_g2_ParamLimits

0xc8e0,	// (0x0002b573) popup_image_details_window_g3_ParamLimits

0xc8e0,	// (0x0002b573) popup_image_details_window_g3

0xf718,	// (0x0002e3ab) popup_image_details_window_g_ParamLimits

0xc8f4,	// (0x0002b587) popup_image_details_window_t1_ParamLimits

0xc906,	// (0x0002b599) popup_image_details_window_t2_ParamLimits

0xc91f,	// (0x0002b5b2) popup_image_details_window_t3_ParamLimits

0xc933,	// (0x0002b5c6) popup_image_details_window_t4_ParamLimits

0xc94e,	// (0x0002b5e1) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002e3b2) popup_image_details_window_t_ParamLimits

0x769a,	// (0x0002632d) cl_header_name_pane_ParamLimits

0x769a,	// (0x0002632d) cl_header_name_pane

0x7995,	// (0x00026628) cl_header_name_pane_t1_ParamLimits

0x7995,	// (0x00026628) cl_header_name_pane_t1

0x79ac,	// (0x0002663f) cl_header_name_pane_t2_ParamLimits

0x79ac,	// (0x0002663f) cl_header_name_pane_t2

0x79d6,	// (0x00026669) cl_header_name_pane_t3_ParamLimits

0x79d6,	// (0x00026669) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0002e7b1) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0002e7b1) cl_header_name_pane_t

0x4710,	// (0x000233a3) navi_pane_mv_g2_ParamLimits

0xd186,	// (0x0002be19) field_vitu2_entry_pane_g1_ParamLimits

0xd192,	// (0x0002be25) field_vitu2_entry_pane_g2_ParamLimits

0xd19e,	// (0x0002be31) field_vitu2_entry_pane_g3_ParamLimits

0xd19e,	// (0x0002be31) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002e5ae) field_vitu2_entry_pane_g_ParamLimits

0x1c9d,	// (0x00020930) cell_vitu2_itu_pane_g1_ParamLimits

0x1cad,	// (0x00020940) cell_vitu2_itu_pane_g2_ParamLimits

0x1cad,	// (0x00020940) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002e5ba) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002e5ba) cell_vitu2_itu_pane_g

0x1a5c,	// (0x000206ef) bg_vkb2_func_pane_cp05_ParamLimits

0x1a5c,	// (0x000206ef) bg_vkb2_func_pane_cp05

0x1a5c,	// (0x000206ef) bg_vkb2_func_pane_cp03

0x1a5c,	// (0x000206ef) bg_vkb2_func_pane_cp04

0x1a5c,	// (0x000206ef) bg_vkb2_func_pane_cp10_ParamLimits

0x1a5c,	// (0x000206ef) bg_vkb2_func_pane_cp10

0x763c,	// (0x000262cf) bg_vkb2_func_pane_cp08

0x7622,	// (0x000262b5) bg_vkb2_func_pane_cp06

0x7630,	// (0x000262c3) bg_vkb2_func_pane_cp07

0xd7f6,	// (0x0002c489) bg_vkb2_func_pane_cp11_ParamLimits

0xd7f6,	// (0x0002c489) bg_vkb2_func_pane_cp11

0xd80b,	// (0x0002c49e) bg_vkb2_func_pane_cp12_ParamLimits

0xd80b,	// (0x0002c49e) bg_vkb2_func_pane_cp12

0x9bfe,	// (0x00028891) bg_vkb2_func_pane_cp09

0xd206,	// (0x0002be99) bg_vkb2_func_pane_g1

0xa7c9,	// (0x0002945c) bg_vkb2_func_pane_g2

0xd20e,	// (0x0002bea1) bg_vkb2_func_pane_g3

0xd216,	// (0x0002bea9) bg_vkb2_func_pane_g4

0xd43e,	// (0x0002c0d1) bg_vkb2_func_pane_g5

0xd22e,	// (0x0002bec1) bg_vkb2_func_pane_g6

0xd236,	// (0x0002bec9) bg_vkb2_func_pane_g7

0xd226,	// (0x0002beb9) bg_vkb2_func_pane_g8

0xa7a9,	// (0x0002943c) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0002e7b8) bg_vkb2_func_pane_g

0x78e2,	// (0x00026575) blid2_tripm_pane_g6_ParamLimits

0x78e2,	// (0x00026575) blid2_tripm_pane_g6

0xd04e,	// (0x0002bce1) mp4_progress_pane_g1

0x793a,	// (0x000265cd) blid2_tripm_values_pane_ParamLimits

0x793a,	// (0x000265cd) blid2_tripm_values_pane

0x79fb,	// (0x0002668e) blid2_tripm_values_pane_t1

0x7a09,	// (0x0002669c) blid2_tripm_values_pane_t2

0x7a17,	// (0x000266aa) blid2_tripm_values_pane_t3

0x7a25,	// (0x000266b8) blid2_tripm_values_pane_t4

0x7a33,	// (0x000266c6) blid2_tripm_values_pane_t5

0x7a41,	// (0x000266d4) blid2_tripm_values_pane_t6

0x7a4f,	// (0x000266e2) blid2_tripm_values_pane_t7

0x7a5d,	// (0x000266f0) blid2_tripm_values_pane_t8

0x7a6b,	// (0x000266fe) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0002e7cb) blid2_tripm_values_pane_t

0x3157,	// (0x00021dea) call_video_pane_t1_ParamLimits

0x3174,	// (0x00021e07) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002df01) call_video_pane_t_ParamLimits

0x4c91,	// (0x00023924) msg_header_pane_g1_ParamLimits

0xb035,	// (0x00029cc8) msg_header_pane_g2_ParamLimits

0xb035,	// (0x00029cc8) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002e11b) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002e11b) msg_header_pane_g

0xa392,	// (0x00029025) main_clock2_pane_ParamLimits

0x644f,	// (0x000250e2) grid_clock2_toolbar_pane_ParamLimits

0x644f,	// (0x000250e2) grid_clock2_toolbar_pane

0x644f,	// (0x000250e2) listscroll_clock2_pane_ParamLimits

0x644f,	// (0x000250e2) listscroll_clock2_pane

0x64f7,	// (0x0002518a) main_clock2_pane_t3_ParamLimits

0x64f7,	// (0x0002518a) main_clock2_pane_t3

0x6509,	// (0x0002519c) main_clock2_pane_t4_ParamLimits

0x6509,	// (0x0002519c) main_clock2_pane_t4

0xd8f3,	// (0x0002c586) cell_clock2_toolbar_pane

0xd8fb,	// (0x0002c58e) cell_clock2_toolbar_pane_cp01

0xd8fb,	// (0x0002c58e) cell_clock2_toolbar_pane_cp02

0xd903,	// (0x0002c596) cell_clock2_toolbar_pane_cp03

0xd90b,	// (0x0002c59e) list_clock2_pane

0xad5c,	// (0x000299ef) scroll_pane_cp10

0xd913,	// (0x0002c5a6) list_single_clock2_pane_ParamLimits

0xd913,	// (0x0002c5a6) list_single_clock2_pane

0xae96,	// (0x00029b29) list_highlight_pane_cp08

0xd920,	// (0x0002c5b3) list_single_clock2_pane_t1

0xd92e,	// (0x0002c5c1) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0002e7de) list_single_clock2_pane_t

0x9bfe,	// (0x00028891) bg_button_pane_cp10

0xd93c,	// (0x0002c5cf) cell_clock2_toolbar_pane_g1

0x102b,	// (0x0001fcbe) aid_main_viewer_pane_g1_ParamLimits

0x102b,	// (0x0001fcbe) aid_main_viewer_pane_g1

0x1037,	// (0x0001fcca) aid_main_viewer_pane_g2_ParamLimits

0x1037,	// (0x0001fcca) aid_main_viewer_pane_g2

0x4cd0,	// (0x00023963) aid_main_viewer_pane_g3_ParamLimits

0x4cd0,	// (0x00023963) aid_main_viewer_pane_g3

0x4ce1,	// (0x00023974) aid_main_viewer_pane_g4_ParamLimits

0x4ce1,	// (0x00023974) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002e12c) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002e12c) aid_main_viewer_pane_g

0x5429,	// (0x000240bc) main_calc_pane_ParamLimits

0x5436,	// (0x000240c9) main_dialer2_pane_ParamLimits

0x9bfe,	// (0x00028891) main_cam6_pane

0x9bfe,	// (0x00028891) main_vid6_pane

0x645b,	// (0x000250ee) listscroll_gen_pane_cp06_ParamLimits

0x645b,	// (0x000250ee) listscroll_gen_pane_cp06

0x651b,	// (0x000251ae) main_clock2_pane_t5_ParamLimits

0x651b,	// (0x000251ae) main_clock2_pane_t5

0x656a,	// (0x000251fd) aid_call2_pane_cp10_ParamLimits

0x657c,	// (0x0002520f) aid_call_pane_cp10_ParamLimits

0xadcb,	// (0x00029a5e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadcb,	// (0x00029a5e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x658e,	// (0x00025221) popup_clock_analogue_window_cp10_g3_ParamLimits

0x658e,	// (0x00025221) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadcb,	// (0x00029a5e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002e467) popup_clock_analogue_window_cp10_g_ParamLimits

0x65a0,	// (0x00025233) popup_clock_analogue_window_cp10_t1_ParamLimits

0x69b0,	// (0x00025643) cell_dialer2_keypad_pane_g2_ParamLimits

0x69b0,	// (0x00025643) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002e54d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002e54d) cell_dialer2_keypad_pane_g

0x69cc,	// (0x0002565f) cell_dialer2_keypad_pane_t1

0x6e30,	// (0x00025ac3) main_cset_text2_pane_ParamLimits

0x6e30,	// (0x00025ac3) main_cset_text2_pane

0xd6a0,	// (0x0002c333) area_vitu2_query_pane_g1_ParamLimits

0x75c1,	// (0x00026254) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002e702) area_vitu2_query_pane_g_ParamLimits

0xd724,	// (0x0002c3b7) area_vitu2_query_pane_t7_ParamLimits

0xd724,	// (0x0002c3b7) area_vitu2_query_pane_t7

0x7622,	// (0x000262b5) bg_button_pane_cp018_ParamLimits

0x7630,	// (0x000262c3) bg_button_pane_cp021_ParamLimits

0x763c,	// (0x000262cf) bg_button_pane_cp022_ParamLimits

0x763c,	// (0x000262cf) bg_vkb2_func_pane_cp08_ParamLimits

0x7622,	// (0x000262b5) bg_vkb2_func_pane_cp06_ParamLimits

0x7630,	// (0x000262c3) bg_vkb2_func_pane_cp07_ParamLimits

0x764d,	// (0x000262e0) input_focus_pane_cp09_ParamLimits

0x2015,	// (0x00020ca8) cam6_autofocus_pane_ParamLimits

0x2015,	// (0x00020ca8) cam6_autofocus_pane

0x2037,	// (0x00020cca) cam6_image_uncrop_pane_ParamLimits

0x2037,	// (0x00020cca) cam6_image_uncrop_pane

0x2064,	// (0x00020cf7) cam6_indi_pane_ParamLimits

0x2064,	// (0x00020cf7) cam6_indi_pane

0x207e,	// (0x00020d11) cam6_mode_pane_ParamLimits

0x207e,	// (0x00020d11) cam6_mode_pane

0x2092,	// (0x00020d25) cam6_timer_pane_ParamLimits

0x2092,	// (0x00020d25) cam6_timer_pane

0x209e,	// (0x00020d31) cam6_zoom_pane_ParamLimits

0x209e,	// (0x00020d31) cam6_zoom_pane

0x7a79,	// (0x0002670c) cam6_mode_pane_g1_ParamLimits

0x7a79,	// (0x0002670c) cam6_mode_pane_g1

0x7a85,	// (0x00026718) cam6_mode_pane_g2_ParamLimits

0x7a85,	// (0x00026718) cam6_mode_pane_g2

0x7a91,	// (0x00026724) cam6_mode_pane_g3_ParamLimits

0x7a91,	// (0x00026724) cam6_mode_pane_g3

0x7a9d,	// (0x00026730) cam6_mode_pane_g4_ParamLimits

0x7a9d,	// (0x00026730) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0002e7e3) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0002e7e3) cam6_mode_pane_g

0xd094,	// (0x0002bd27) bg_tb_trans_pane_cp08_ParamLimits

0xd094,	// (0x0002bd27) bg_tb_trans_pane_cp08

0xd944,	// (0x0002c5d7) cam6_battery_pane_ParamLimits

0xd944,	// (0x0002c5d7) cam6_battery_pane

0xd95a,	// (0x0002c5ed) cam6_indi_pane_g1_ParamLimits

0xd95a,	// (0x0002c5ed) cam6_indi_pane_g1

0xd96c,	// (0x0002c5ff) cam6_indi_pane_g2_ParamLimits

0xd96c,	// (0x0002c5ff) cam6_indi_pane_g2

0xd97e,	// (0x0002c611) cam6_indi_pane_g3_ParamLimits

0xd97e,	// (0x0002c611) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0002e7ec) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0002e7ec) cam6_indi_pane_g

0xd990,	// (0x0002c623) cam6_indi_pane_t1_ParamLimits

0xd990,	// (0x0002c623) cam6_indi_pane_t1

0x6b4f,	// (0x000257e2) cam6_autofocus_pane_g1

0x6b47,	// (0x000257da) cam6_autofocus_pane_g2

0x6b5f,	// (0x000257f2) cam6_autofocus_pane_g3

0x6b57,	// (0x000257ea) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002e7f3) cam6_autofocus_pane_g

0xd9b6,	// (0x0002c649) cam6_timer_pane_g1

0xd9be,	// (0x0002c651) cam6_timer_pane_t1

0xd9cc,	// (0x0002c65f) cam6_zoom_cont_pane

0xd9d4,	// (0x0002c667) cam6_zoom_pane_g1

0xd9dc,	// (0x0002c66f) cam6_zoom_pane_g2

0x7aa9,	// (0x0002673c) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002e7fc) cam6_zoom_pane_g

0xc768,	// (0x0002b3fb) cam6_battery_pane_g1

0xc768,	// (0x0002b3fb) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002e36f) cam6_battery_pane_g

0xd9e4,	// (0x0002c677) cam6_zoom_cont_pane_g1

0xd9ed,	// (0x0002c680) cam6_zoom_cont_pane_g2

0xd9f6,	// (0x0002c689) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0002e803) cam6_zoom_cont_pane_g

0x7ac6,	// (0x00026759) cam6_mode_pane_cp_ParamLimits

0x7ac6,	// (0x00026759) cam6_mode_pane_cp

0x7ada,	// (0x0002676d) cam6_zoom_pane_cp_ParamLimits

0x7ada,	// (0x0002676d) cam6_zoom_pane_cp

0x7af6,	// (0x00026789) vid6_image_uncrop_cif_pane_ParamLimits

0x7af6,	// (0x00026789) vid6_image_uncrop_cif_pane

0x7b22,	// (0x000267b5) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b22,	// (0x000267b5) vid6_image_uncrop_nhd_pane

0x7b41,	// (0x000267d4) vid6_image_uncrop_vga_pane_ParamLimits

0x7b41,	// (0x000267d4) vid6_image_uncrop_vga_pane

0x7b60,	// (0x000267f3) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b60,	// (0x000267f3) vid6_image_uncrop_wvga_pane

0x7b7f,	// (0x00026812) vid6_indi_pane_ParamLimits

0x7b7f,	// (0x00026812) vid6_indi_pane

0xd094,	// (0x0002bd27) bg_tb_trans_pane_cp09_ParamLimits

0xd094,	// (0x0002bd27) bg_tb_trans_pane_cp09

0xda0e,	// (0x0002c6a1) cam6_battery_pane_cp_ParamLimits

0xda0e,	// (0x0002c6a1) cam6_battery_pane_cp

0xda1a,	// (0x0002c6ad) vid6_indi_pane_g1_ParamLimits

0xda1a,	// (0x0002c6ad) vid6_indi_pane_g1

0xda2c,	// (0x0002c6bf) vid6_indi_pane_g2_ParamLimits

0xda2c,	// (0x0002c6bf) vid6_indi_pane_g2

0xda3e,	// (0x0002c6d1) vid6_indi_pane_g3_ParamLimits

0xda3e,	// (0x0002c6d1) vid6_indi_pane_g3

0xda55,	// (0x0002c6e8) vid6_indi_pane_g4_ParamLimits

0xda55,	// (0x0002c6e8) vid6_indi_pane_g4

0xda6c,	// (0x0002c6ff) vid6_indi_pane_g5_ParamLimits

0xda6c,	// (0x0002c6ff) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0002e80a) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0002e80a) vid6_indi_pane_g

0xda86,	// (0x0002c719) vid6_indi_pane_t1_ParamLimits

0xda86,	// (0x0002c719) vid6_indi_pane_t1

0xda9c,	// (0x0002c72f) vid6_indi_pane_t2_ParamLimits

0xda9c,	// (0x0002c72f) vid6_indi_pane_t2

0xdac4,	// (0x0002c757) vid6_indi_pane_t3_ParamLimits

0xdac4,	// (0x0002c757) vid6_indi_pane_t3

0xdaec,	// (0x0002c77f) vid6_indi_pane_t4_ParamLimits

0xdaec,	// (0x0002c77f) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0002e815) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0002e815) vid6_indi_pane_t

0xdb10,	// (0x0002c7a3) wait_bar_pane_cp08

0x7ba4,	// (0x00026837) main_cset_text2_pane_t1_ParamLimits

0x7ba4,	// (0x00026837) main_cset_text2_pane_t1

0x7ab1,	// (0x00026744) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ab1,	// (0x00026744) listscroll_gen_pane_cp06_t1

0x9bfe,	// (0x00028891) main_cam6_set_pane

0x1970,	// (0x00020603) bg_tb_trans_pane_cp06_ParamLimits

0x1986,	// (0x00020619) cam4_indicators_pane_g1_ParamLimits

0x1997,	// (0x0002062a) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002e58a) cam4_indicators_pane_g_ParamLimits

0x19af,	// (0x00020642) cam4_indicators_pane_t1_ParamLimits

0x1a5c,	// (0x000206ef) bg_tb_trans_pane_cp07_ParamLimits

0x1a74,	// (0x00020707) vid4_indicators_pane_g1_ParamLimits

0x1a8a,	// (0x0002071d) vid4_indicators_pane_g2_ParamLimits

0x1a9e,	// (0x00020731) vid4_indicators_pane_g3_ParamLimits

0x1ab1,	// (0x00020744) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002e59c) vid4_indicators_pane_g_ParamLimits

0x1acf,	// (0x00020762) vid4_indicators_pane_t1_ParamLimits

0x1f7f,	// (0x00020c12) vid4_progress_pane_g1_ParamLimits

0x1f91,	// (0x00020c24) vid4_progress_pane_g2_ParamLimits

0x106d,	// (0x0001fd00) vid4_progress_pane_g3_ParamLimits

0x1fa3,	// (0x00020c36) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002e74d) vid4_progress_pane_g_ParamLimits

0x1fc1,	// (0x00020c54) vid4_progress_pane_t1_ParamLimits

0x1fd6,	// (0x00020c69) vid4_progress_pane_t2_ParamLimits

0x1fec,	// (0x00020c7f) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002e758) vid4_progress_pane_t_ParamLimits

0x2001,	// (0x00020c94) wait_bar_pane_cp07_ParamLimits

0x7bcb,	// (0x0002685e) main_cam6_set_pane_g2_ParamLimits

0x7bcb,	// (0x0002685e) main_cam6_set_pane_g2

0x7bd7,	// (0x0002686a) main_cset6_listscroll_pane_ParamLimits

0x7bd7,	// (0x0002686a) main_cset6_listscroll_pane

0x7c04,	// (0x00026897) main_cset6_slider_pane_ParamLimits

0x7c04,	// (0x00026897) main_cset6_slider_pane

0x7c10,	// (0x000268a3) main_cset6_text2_pane_ParamLimits

0x7c10,	// (0x000268a3) main_cset6_text2_pane

0xdb1f,	// (0x0002c7b2) main_cset6_text_pane

0xdb27,	// (0x0002c7ba) main_cset_list_pane_copy1_ParamLimits

0xdb27,	// (0x0002c7ba) main_cset_list_pane_copy1

0xdb37,	// (0x0002c7ca) scroll_pane_cp028_copy1

0x7c23,	// (0x000268b6) cset_list_set_pane_copy1

0x7c33,	// (0x000268c6) aid_position_infowindow_above_copy1

0x7c3b,	// (0x000268ce) aid_position_infowindow_below_copy1

0x7c43,	// (0x000268d6) cset_list_set_pane_g1_copy1

0x7c4b,	// (0x000268de) cset_list_set_pane_g3_copy1_ParamLimits

0x7c4b,	// (0x000268de) cset_list_set_pane_g3_copy1

0x7c5a,	// (0x000268ed) cset_list_set_pane_t1_copy1_ParamLimits

0x7c5a,	// (0x000268ed) cset_list_set_pane_t1_copy1

0xa5df,	// (0x00029272) list_highlight_pane_cp021_copy1_ParamLimits

0xa5df,	// (0x00029272) list_highlight_pane_cp021_copy1

0xdb40,	// (0x0002c7d3) cset6_slider_pane_ParamLimits

0xdb40,	// (0x0002c7d3) cset6_slider_pane

0xdb6c,	// (0x0002c7ff) main_cset6_slider_pane_g1_ParamLimits

0xdb6c,	// (0x0002c7ff) main_cset6_slider_pane_g1

0x7c6f,	// (0x00026902) main_cset6_slider_pane_g2_ParamLimits

0x7c6f,	// (0x00026902) main_cset6_slider_pane_g2

0xdb94,	// (0x0002c827) main_cset6_slider_pane_g3_ParamLimits

0xdb94,	// (0x0002c827) main_cset6_slider_pane_g3

0x7c97,	// (0x0002692a) main_cset6_slider_pane_g4_ParamLimits

0x7c97,	// (0x0002692a) main_cset6_slider_pane_g4

0x7ca3,	// (0x00026936) main_cset6_slider_pane_g5_ParamLimits

0x7ca3,	// (0x00026936) main_cset6_slider_pane_g5

0xd339,	// (0x0002bfcc) main_cset6_slider_pane_g7_ParamLimits

0xd339,	// (0x0002bfcc) main_cset6_slider_pane_g7

0xd345,	// (0x0002bfd8) main_cset6_slider_pane_g8_ParamLimits

0xd345,	// (0x0002bfd8) main_cset6_slider_pane_g8

0x7caf,	// (0x00026942) main_cset6_slider_pane_g9_ParamLimits

0x7caf,	// (0x00026942) main_cset6_slider_pane_g9

0x7cbb,	// (0x0002694e) main_cset6_slider_pane_g10_ParamLimits

0x7cbb,	// (0x0002694e) main_cset6_slider_pane_g10

0x7cc7,	// (0x0002695a) main_cset6_slider_pane_g11_ParamLimits

0x7cc7,	// (0x0002695a) main_cset6_slider_pane_g11

0x7cd3,	// (0x00026966) main_cset6_slider_pane_g12_ParamLimits

0x7cd3,	// (0x00026966) main_cset6_slider_pane_g12

0x7cdf,	// (0x00026972) main_cset6_slider_pane_g13_ParamLimits

0x7cdf,	// (0x00026972) main_cset6_slider_pane_g13

0x7ceb,	// (0x0002697e) main_cset6_slider_pane_g14_ParamLimits

0x7ceb,	// (0x0002697e) main_cset6_slider_pane_g14

0x7cf7,	// (0x0002698a) main_cset6_slider_pane_g15_ParamLimits

0x7cf7,	// (0x0002698a) main_cset6_slider_pane_g15

0x7d0f,	// (0x000269a2) main_cset6_slider_pane_g16_ParamLimits

0x7d0f,	// (0x000269a2) main_cset6_slider_pane_g16

0x7d1b,	// (0x000269ae) main_cset6_slider_pane_g17_ParamLimits

0x7d1b,	// (0x000269ae) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0002e81e) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0002e81e) main_cset6_slider_pane_g

0xdba0,	// (0x0002c833) main_cset6_slider_pane_t1_ParamLimits

0xdba0,	// (0x0002c833) main_cset6_slider_pane_t1

0x7d3f,	// (0x000269d2) main_cset6_slider_pane_t2_ParamLimits

0x7d3f,	// (0x000269d2) main_cset6_slider_pane_t2

0x7d6a,	// (0x000269fd) main_cset6_slider_pane_t3_ParamLimits

0x7d6a,	// (0x000269fd) main_cset6_slider_pane_t3

0x7d95,	// (0x00026a28) main_cset6_slider_pane_t4_ParamLimits

0x7d95,	// (0x00026a28) main_cset6_slider_pane_t4

0x7dc0,	// (0x00026a53) main_cset6_slider_pane_t5_ParamLimits

0x7dc0,	// (0x00026a53) main_cset6_slider_pane_t5

0xdbe1,	// (0x0002c874) main_cset6_slider_pane_t7_ParamLimits

0xdbe1,	// (0x0002c874) main_cset6_slider_pane_t7

0x7deb,	// (0x00026a7e) main_cset6_slider_pane_t8_ParamLimits

0x7deb,	// (0x00026a7e) main_cset6_slider_pane_t8

0x7e0f,	// (0x00026aa2) main_cset6_slider_pane_t9_ParamLimits

0x7e0f,	// (0x00026aa2) main_cset6_slider_pane_t9

0x7e33,	// (0x00026ac6) main_cset6_slider_pane_t10_ParamLimits

0x7e33,	// (0x00026ac6) main_cset6_slider_pane_t10

0x7e57,	// (0x00026aea) main_cset6_slider_pane_t11_ParamLimits

0x7e57,	// (0x00026aea) main_cset6_slider_pane_t11

0xdc17,	// (0x0002c8aa) main_cset6_slider_pane_t14_ParamLimits

0xdc17,	// (0x0002c8aa) main_cset6_slider_pane_t14

0xdc50,	// (0x0002c8e3) main_cset6_slider_pane_t15_ParamLimits

0xdc50,	// (0x0002c8e3) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0002e843) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0002e843) main_cset6_slider_pane_t

0xd45b,	// (0x0002c0ee) cset_slider_pane_g1_copy1

0xd464,	// (0x0002c0f7) cset_slider_pane_g2_copy1

0xd46d,	// (0x0002c100) cset_slider_pane_g3_copy1

0x9bfe,	// (0x00028891) bg_popup_sub_pane_cp011_copy1

0xdc89,	// (0x0002c91c) main_cset_text_pane_g1_copy1

0xd4c8,	// (0x0002c15b) main_cset_text_pane_t1_copy1

0xd4d6,	// (0x0002c169) main_cset_text_pane_t2_copy1

0xd4e4,	// (0x0002c177) main_cset_text_pane_t3_copy1

0xd4f2,	// (0x0002c185) main_cset_text_pane_t4_copy1

0xd500,	// (0x0002c193) main_cset_text_pane_t5_copy1

0xdc91,	// (0x0002c924) main_cset_text_pane_t6_copy1

0xdc9f,	// (0x0002c932) main_cset_text_pane_t7_copy1

0x7f4a,	// (0x00026bdd) main_cset_text2_pane_t1_copy1

0xa5df,	// (0x00029272) main_ncimui_pane

0x547b,	// (0x0002410e) popup_query_ncimui_window_ParamLimits

0x547b,	// (0x0002410e) popup_query_ncimui_window

0xc9fd,	// (0x0002b690) field_cale_ev2_pane_g4_ParamLimits

0xc9fd,	// (0x0002b690) field_cale_ev2_pane_g4

0x6950,	// (0x000255e3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6950,	// (0x000255e3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002e528) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002e528) cell_video_dialer_keypad_pane_g

0x6968,	// (0x000255fb) cell_video_dialer_keypad_pane_t1

0x9bfe,	// (0x00028891) bg_popup_window_pane_cp012

0xac48,	// (0x000298db) heading_pane_cp06

0xdccb,	// (0x0002c95e) ncim_query_content_pane

0x9bfe,	// (0x00028891) bg_popup_heading_pane_cp01

0xdcd3,	// (0x0002c966) ncim_heading_pane_t1

0xdce1,	// (0x0002c974) ncim_indicator_popup_pane

0xdcf3,	// (0x0002c986) ncim_query_button_pane

0xdd09,	// (0x0002c99c) ncim_query_content_pane_t1

0xdd1b,	// (0x0002c9ae) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0002e887) ncim_query_content_pane_t

0xdd55,	// (0x0002c9e8) ncim_query_list_pane

0xdd67,	// (0x0002c9fa) ncim_query_popup_pane

0xdce1,	// (0x0002c974) ncim_indicator_popup_pane_ParamLimits

0x80a6,	// (0x00026d39) ncim_query_content_pane_g1_ParamLimits

0x80a6,	// (0x00026d39) ncim_query_content_pane_g1

0xdd09,	// (0x0002c99c) ncim_query_content_pane_t1_ParamLimits

0xdd1b,	// (0x0002c9ae) ncim_query_content_pane_t2_ParamLimits

0x80b2,	// (0x00026d45) ncim_query_content_pane_t3_ParamLimits

0x80b2,	// (0x00026d45) ncim_query_content_pane_t3

0x80cf,	// (0x00026d62) ncim_query_content_pane_t4_ParamLimits

0x80cf,	// (0x00026d62) ncim_query_content_pane_t4

0x80ec,	// (0x00026d7f) ncim_query_content_pane_t5_ParamLimits

0x80ec,	// (0x00026d7f) ncim_query_content_pane_t5

0xdd2d,	// (0x0002c9c0) ncim_query_content_pane_t6_ParamLimits

0xdd2d,	// (0x0002c9c0) ncim_query_content_pane_t6

0xfbf4,	// (0x0002e887) ncim_query_content_pane_t_ParamLimits

0xdd55,	// (0x0002c9e8) ncim_query_list_pane_ParamLimits

0xdd67,	// (0x0002c9fa) ncim_query_popup_pane_ParamLimits

0xdd7b,	// (0x0002ca0e) wait_bar_pane_cp04

0x9bfe,	// (0x00028891) input_focus_pane_cp011

0xdd83,	// (0x0002ca16) ncim_query_popup_pane_t1

0xdd91,	// (0x0002ca24) ncim_list_query_list_pane_ParamLimits

0xdd91,	// (0x0002ca24) ncim_list_query_list_pane

0x9bfe,	// (0x00028891) bg_button_pane_cp027

0xdda4,	// (0x0002ca37) ncim_query_button_pane_g1

0x9bfe,	// (0x00028891) list_highlight_pane_cp012

0xddae,	// (0x0002ca41) ncim_list_query_list_pane_g1

0xddb6,	// (0x0002ca49) ncim_list_query_list_pane_t1

0x19a3,	// (0x00020636) cam4_indicators_pane_g3_ParamLimits

0x19a3,	// (0x00020636) cam4_indicators_pane_g3

0x1abd,	// (0x00020750) vid4_indicators_pane_g5_ParamLimits

0x1abd,	// (0x00020750) vid4_indicators_pane_g5

0x1fb2,	// (0x00020c45) vid4_progress_pane_g5_ParamLimits

0x1fb2,	// (0x00020c45) vid4_progress_pane_g5

0x7f7c,	// (0x00026c0f) main_ncimui_pane_g1

0x7fe8,	// (0x00026c7b) ncimui_group_query_pane_ParamLimits

0x7fe8,	// (0x00026c7b) ncimui_group_query_pane

0x8042,	// (0x00026cd5) ncimui_list_pane_ParamLimits

0x8042,	// (0x00026cd5) ncimui_list_pane

0x8069,	// (0x00026cfc) ncimui_text_pane_ParamLimits

0x8069,	// (0x00026cfc) ncimui_text_pane

0x8109,	// (0x00026d9c) ncimui_text_pane_t1_ParamLimits

0x8109,	// (0x00026d9c) ncimui_text_pane_t1

0xddc4,	// (0x0002ca57) ncimui_list_single_graphic_pane_ParamLimits

0xddc4,	// (0x0002ca57) ncimui_list_single_graphic_pane

0x8128,	// (0x00026dbb) ncimui_query_pane_ParamLimits

0x8128,	// (0x00026dbb) ncimui_query_pane

0x9bfe,	// (0x00028891) list_highlight_pane_cp013

0xddd4,	// (0x0002ca67) ncim_list_query_list_pane_t1_copy1

0xddae,	// (0x0002ca41) ncim_list_single_graphic_pane_g1

0xdde2,	// (0x0002ca75) ncim_query_button_pane_cp01

0xddee,	// (0x0002ca81) ncim_query_entry_pane_ParamLimits

0xddee,	// (0x0002ca81) ncim_query_entry_pane

0xde01,	// (0x0002ca94) ncimui_query_pane_g1

0xde0d,	// (0x0002caa0) ncimui_query_pane_t1_ParamLimits

0xde0d,	// (0x0002caa0) ncimui_query_pane_t1

0xa5df,	// (0x00029272) input_focus_pane_cp012

0xde26,	// (0x0002cab9) ncim_query_entry_pane_t1

0xa392,	// (0x00029025) main_im_pane_ParamLimits

0xa5df,	// (0x00029272) main_mobtv_pane_ParamLimits

0xa5df,	// (0x00029272) main_mobtv_pane

0x7d27,	// (0x000269ba) main_cset6_slider_pane_g18_ParamLimits

0x7d27,	// (0x000269ba) main_cset6_slider_pane_g18

0x7d33,	// (0x000269c6) main_cset6_slider_pane_g19_ParamLimits

0x7d33,	// (0x000269c6) main_cset6_slider_pane_g19

0xd19e,	// (0x0002be31) bg_main_mobtv_pane_ParamLimits

0xd19e,	// (0x0002be31) bg_main_mobtv_pane

0x813b,	// (0x00026dce) main_mobtv_info_pane

0x8146,	// (0x00026dd9) main_mobtv_loading_pane_ParamLimits

0x8146,	// (0x00026dd9) main_mobtv_loading_pane

0xde38,	// (0x0002cacb) main_mobtv_pg_channel_list_pane

0xde42,	// (0x0002cad5) main_mobtv_pg_hdr_pane

0x8153,	// (0x00026de6) main_mobtv_programe_curr_pane_ParamLimits

0x8153,	// (0x00026de6) main_mobtv_programe_curr_pane

0x8160,	// (0x00026df3) main_mobtv_programe_next_pane_ParamLimits

0x8160,	// (0x00026df3) main_mobtv_programe_next_pane

0xde4b,	// (0x0002cade) popup_mobtv_noti_window

0xc768,	// (0x0002b3fb) main_tv_pg_hdr_pane_g1

0xde55,	// (0x0002cae8) main_tv_pg_hdr_pane_g2

0xde5d,	// (0x0002caf0) main_tv_pg_hdr_pane_g3

0xde65,	// (0x0002caf8) main_tv_pg_hdr_pane_g4

0xde6d,	// (0x0002cb00) main_tv_pg_hdr_pane_g5

0xde77,	// (0x0002cb0a) main_tv_pg_hdr_pane_g6

0xde81,	// (0x0002cb14) main_tv_pg_hdr_pane_g7

0xde8b,	// (0x0002cb1e) main_tv_pg_hdr_pane_g8

0xde95,	// (0x0002cb28) main_tv_pg_hdr_pane_g9

0xde9f,	// (0x0002cb32) main_tv_pg_hdr_pane_g10

0xdea9,	// (0x0002cb3c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0002e894) main_tv_pg_hdr_pane_g

0xdeb3,	// (0x0002cb46) main_tv_pg_hdr_pane_t1

0xdec1,	// (0x0002cb54) main_tv_pg_hdr_pane_t2

0xdecf,	// (0x0002cb62) main_tv_pg_hdr_pane_t3

0xdedf,	// (0x0002cb72) main_tv_pg_hdr_pane_t4

0xdeef,	// (0x0002cb82) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0002e8ab) main_tv_pg_hdr_pane_t

0xdeff,	// (0x0002cb92) single_mobtv_pg_channel_pane_ParamLimits

0xdeff,	// (0x0002cb92) single_mobtv_pg_channel_pane

0xdf11,	// (0x0002cba4) single_mobtv_pg_channel_table_pane

0xdf1a,	// (0x0002cbad) single_mobtv_pg_channel_thumb_pane

0xdf23,	// (0x0002cbb6) single_tv_pg_channel_pane_g1

0xdf2c,	// (0x0002cbbf) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0002e8b6) single_tv_pg_channel_pane_g

0xc998,	// (0x0002b62b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc998,	// (0x0002b62b) bg_single_mobtv_pg_channel_thumb_pane

0xdf35,	// (0x0002cbc8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf35,	// (0x0002cbc8) single_mobtv_pg_channel_thumb_pane_g1

0xdf43,	// (0x0002cbd6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf43,	// (0x0002cbd6) single_mobtv_pg_channel_thumb_pane_g2

0xdf4f,	// (0x0002cbe2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf4f,	// (0x0002cbe2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0002e8bb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0002e8bb) single_mobtv_pg_channel_thumb_pane_g

0xdf5b,	// (0x0002cbee) single_mobtv_pg_channel_thumb_pane_t1

0xdf69,	// (0x0002cbfc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0002e8c2) single_mobtv_pg_channel_thumb_pane_t

0xc768,	// (0x0002b3fb) bg_single_mobtv_pg_channel_table_pane_g1

0xc768,	// (0x0002b3fb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002e36f) bg_single_mobtv_pg_channel_table_pane_g

0xdf77,	// (0x0002cc0a) single_mobtv_pg_channel_table_pane_t1

0xdf85,	// (0x0002cc18) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0002e8c7) single_mobtv_pg_channel_table_pane_t

0x8175,	// (0x00026e08) main_mobtv_info_pane_g1_ParamLimits

0x8175,	// (0x00026e08) main_mobtv_info_pane_g1

0x8191,	// (0x00026e24) main_mobtv_info_pane_t1_ParamLimits

0x8191,	// (0x00026e24) main_mobtv_info_pane_t1

0x8209,	// (0x00026e9c) main_mobtv_info_pane_t2_ParamLimits

0x8209,	// (0x00026e9c) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0002e8d1) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0002e8d1) main_mobtv_info_pane_t

0x829a,	// (0x00026f2d) wait_bar_pane_cp05

0x82ac,	// (0x00026f3f) main_mobtv_loading_pane_g1_ParamLimits

0x82ac,	// (0x00026f3f) main_mobtv_loading_pane_g1

0x82b8,	// (0x00026f4b) main_mobtv_loading_pane_g2_ParamLimits

0x82b8,	// (0x00026f4b) main_mobtv_loading_pane_g2

0x82c4,	// (0x00026f57) main_mobtv_loading_pane_g3_ParamLimits

0x82c4,	// (0x00026f57) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0002e8d8) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0002e8d8) main_mobtv_loading_pane_g

0xdf93,	// (0x0002cc26) main_mobtv_loading_pane_t1_ParamLimits

0xdf93,	// (0x0002cc26) main_mobtv_loading_pane_t1

0xdfab,	// (0x0002cc3e) main_mobtv_loading_pane_t2_ParamLimits

0xdfab,	// (0x0002cc3e) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0002e8df) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0002e8df) main_mobtv_loading_pane_t

0x82d2,	// (0x00026f65) wait_bar_pane_cp06_ParamLimits

0x82d2,	// (0x00026f65) wait_bar_pane_cp06

0xdfcf,	// (0x0002cc62) main_mobtv_programe_curr_pane_t1

0xdfdd,	// (0x0002cc70) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0002e8e4) main_mobtv_programe_curr_pane_t

0xdfeb,	// (0x0002cc7e) main_mobtv_programe_next_pane_t1

0xdff9,	// (0x0002cc8c) main_mobtv_programe_next_pane_t2

0xe007,	// (0x0002cc9a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0002e8e9) main_mobtv_programe_next_pane_t

0x9bfe,	// (0x00028891) bg_popup_mobtv_noti_window_pane

0xe015,	// (0x0002cca8) popup_mobtv_noti_window_g1

0xe01d,	// (0x0002ccb0) popup_mobtv_noti_window_t1

0xe02b,	// (0x0002ccbe) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0002e8f0) popup_mobtv_noti_window_t

0xc768,	// (0x0002b3fb) bg_popup_mobtv_noti_window_pane_g1

0x9bfe,	// (0x00028891) sc_clock_pane

0x9bfe,	// (0x00028891) main_fs_bigclock_pane

0x7928,	// (0x000265bb) blid2_tripm_pane_t4_ParamLimits

0x7928,	// (0x000265bb) blid2_tripm_pane_t4

0x82de,	// (0x00026f71) sc_clock_pane_g1_ParamLimits

0x82de,	// (0x00026f71) sc_clock_pane_g1

0x82ec,	// (0x00026f7f) sc_clock_pane_t1_ParamLimits

0x82ec,	// (0x00026f7f) sc_clock_pane_t1

0x8301,	// (0x00026f94) sc_clock_pane_t2_ParamLimits

0x8301,	// (0x00026f94) sc_clock_pane_t2

0x8313,	// (0x00026fa6) sc_clock_pane_t3_ParamLimits

0x8313,	// (0x00026fa6) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0002e8f5) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0002e8f5) sc_clock_pane_t

0x91ff,	// (0x00027e92) main_fs_bigclock_indicator_pane_ParamLimits

0x91ff,	// (0x00027e92) main_fs_bigclock_indicator_pane

0x83a6,	// (0x00027039) main_fs_bigclock_pane_g1_ParamLimits

0x83a6,	// (0x00027039) main_fs_bigclock_pane_g1

0x920b,	// (0x00027e9e) main_fs_bigclock_pane_t1_ParamLimits

0x920b,	// (0x00027e9e) main_fs_bigclock_pane_t1

0x921d,	// (0x00027eb0) main_fs_bigclock_pane_t2_ParamLimits

0x921d,	// (0x00027eb0) main_fs_bigclock_pane_t2

0x9231,	// (0x00027ec4) main_fs_bigclock_pane_t3_ParamLimits

0x9231,	// (0x00027ec4) main_fs_bigclock_pane_t3

0x0002,

0xfe67,	// (0x0002eafa) main_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0002eafa) main_fs_bigclock_pane_t

0xec12,	// (0x0002d8a5) main_fs_bigclock_indicator_pane_g1

0xdcfb,	// (0x0002c98e) ncim_query_content_pane_g2_ParamLimits

0xdcfb,	// (0x0002c98e) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0002e882) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0002e882) ncim_query_content_pane_g

0x8325,	// (0x00026fb8) sc_clock_pane_t4_ParamLimits

0x8325,	// (0x00026fb8) sc_clock_pane_t4

0xa5df,	// (0x00029272) main_radioblah_pane

0xd10b,	// (0x0002bd9e) cell_call4_button_pane_t1_copy1_ParamLimits

0xd10b,	// (0x0002bd9e) cell_call4_button_pane_t1_copy1

0x7f98,	// (0x00026c2b) main_ncimui_pane_t1_ParamLimits

0x7f98,	// (0x00026c2b) main_ncimui_pane_t1

0x7fb2,	// (0x00026c45) main_ncimui_pane_t2_ParamLimits

0x7fb2,	// (0x00026c45) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0002e87b) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0002e87b) main_ncimui_pane_t

0xe17e,	// (0x0002ce11) main_radioblah_anim_pane_ParamLimits

0xe17e,	// (0x0002ce11) main_radioblah_anim_pane

0xe18f,	// (0x0002ce22) main_radioblah_info_pane_ParamLimits

0xe18f,	// (0x0002ce22) main_radioblah_info_pane

0xe1a3,	// (0x0002ce36) main_radioblah_pane_t1_ParamLimits

0xe1a3,	// (0x0002ce36) main_radioblah_pane_t1

0xe1bf,	// (0x0002ce52) main_radioblah_pane_t2_ParamLimits

0xe1bf,	// (0x0002ce52) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0002e916) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0002e916) main_radioblah_pane_t

0x83f8,	// (0x0002708b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83f8,	// (0x0002708b) main_radioblah_rocker_ctrl_pane

0xe207,	// (0x0002ce9a) main_radioblah_info_pane_t1_ParamLimits

0xe207,	// (0x0002ce9a) main_radioblah_info_pane_t1

0x8441,	// (0x000270d4) main_radioblah_info_pane_t2_ParamLimits

0x8441,	// (0x000270d4) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0002e91f) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0002e91f) main_radioblah_info_pane_t

0xc768,	// (0x0002b3fb) main_radioblah_rocker_ctrl_pane_g1

0x84f1,	// (0x00027184) main_radioblah_rocker_ctrl_pane_g2

0x84f9,	// (0x0002718c) main_radioblah_rocker_ctrl_pane_g3

0x8501,	// (0x00027194) main_radioblah_rocker_ctrl_pane_g4

0x8509,	// (0x0002719c) main_radioblah_rocker_ctrl_pane_g5

0x8511,	// (0x000271a4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0002e928) main_radioblah_rocker_ctrl_pane_g

0x7f4a,	// (0x00026bdd) main_cset_text2_pane_t1_copy1_ParamLimits

0x18e8,	// (0x0002057b) cam4_image_uncrop_qvga_pane

0x1a15,	// (0x000206a8) vid4_image_uncrop_qcif_pane

0x2056,	// (0x00020ce9) cam6_image_uncrop_qvga_pane_ParamLimits

0x2056,	// (0x00020ce9) cam6_image_uncrop_qvga_pane

0xd9fe,	// (0x0002c691) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9fe,	// (0x0002c691) vid6_image_uncrop_qcif_pane

0x9bfe,	// (0x00028891) bg_popup_preview_window_pane_cp03

0xdcad,	// (0x0002c940) list_cset_text2_pane

0xdcb5,	// (0x0002c948) main_cset6_text2_pane_g1

0xdcbd,	// (0x0002c950) main_cset6_text2_pane_t1

0x8519,	// (0x000271ac) list_cset_text2_pane_t1_ParamLimits

0x8519,	// (0x000271ac) list_cset_text2_pane_t1

0xa5df,	// (0x00029272) main_radioblah_pane_ParamLimits

0x8286,	// (0x00026f19) main_mobtv_info_pane_t3_ParamLimits

0x8286,	// (0x00026f19) main_mobtv_info_pane_t3

0x83e6,	// (0x00027079) main_radioblah_pane_g1

0x8411,	// (0x000270a4) main_radioblah_info_pane_g1

0x8496,	// (0x00027129) main_radioblah_info_pane_t3_ParamLimits

0x8496,	// (0x00027129) main_radioblah_info_pane_t3

0x4153,	// (0x00022de6) highlight_cell_cale_month_pane_ParamLimits

0x4153,	// (0x00022de6) highlight_cell_cale_month_pane

0x9bfe,	// (0x00028891) main_phob_fisheye_pane

0xca80,	// (0x0002b713) scroll_pane_cp0031_ParamLimits

0xca80,	// (0x0002b713) scroll_pane_cp0031

0xdb10,	// (0x0002c7a3) wait_bar_pane_cp08_ParamLimits

0x7c23,	// (0x000268b6) cset_list_set_pane_copy1_ParamLimits

0xe241,	// (0x0002ced4) highlight_cell_cale_month_pane_g1

0x8530,	// (0x000271c3) highlight_cell_cale_month_pane_t1

0xd790,	// (0x0002c423) list_gen_pane_cp01

0xd324,	// (0x0002bfb7) scroll_pane_01

0x853e,	// (0x000271d1) list_single_double_fisheye_pane

0x8547,	// (0x000271da) list_double_fisheye_pane_g1_ParamLimits

0x8547,	// (0x000271da) list_double_fisheye_pane_g1

0x8553,	// (0x000271e6) list_double_fisheye_pane_g2_ParamLimits

0x8553,	// (0x000271e6) list_double_fisheye_pane_g2

0x8567,	// (0x000271fa) list_double_fisheye_pane_g3_ParamLimits

0x8567,	// (0x000271fa) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0002e935) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0002e935) list_double_fisheye_pane_g

0x8590,	// (0x00027223) list_double_fisheye_pane_t1_ParamLimits

0x8590,	// (0x00027223) list_double_fisheye_pane_t1

0x85ab,	// (0x0002723e) list_double_fisheye_pane_t2_ParamLimits

0x85ab,	// (0x0002723e) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0002e940) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0002e940) list_double_fisheye_pane_t

0x9bfe,	// (0x00028891) main_call5_pane

0x834b,	// (0x00026fde) sc_swipe_pane_ParamLimits

0x834b,	// (0x00026fde) sc_swipe_pane

0x85d9,	// (0x0002726c) call5_image_pane_ParamLimits

0x85d9,	// (0x0002726c) call5_image_pane

0x85eb,	// (0x0002727e) call5_swipe_1_pane_ParamLimits

0x85eb,	// (0x0002727e) call5_swipe_1_pane

0x85f7,	// (0x0002728a) call5_swipe_2_pane_ParamLimits

0x85f7,	// (0x0002728a) call5_swipe_2_pane

0x8613,	// (0x000272a6) popup_call5_audio_first_window_ParamLimits

0x8613,	// (0x000272a6) popup_call5_audio_first_window

0xc998,	// (0x0002b62b) call5_swipe_1_pane_g1_ParamLimits

0xc998,	// (0x0002b62b) call5_swipe_1_pane_g1

0xe249,	// (0x0002cedc) call5_swipe_1_pane_g2_ParamLimits

0xe249,	// (0x0002cedc) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0002e945) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0002e945) call5_swipe_1_pane_g

0xe255,	// (0x0002cee8) call5_swipe_1_pane_t1_ParamLimits

0xe255,	// (0x0002cee8) call5_swipe_1_pane_t1

0xc998,	// (0x0002b62b) call5_swipe_2_pane_g1_ParamLimits

0xc998,	// (0x0002b62b) call5_swipe_2_pane_g1

0xe26a,	// (0x0002cefd) call5_swipe_2_pane_g2_ParamLimits

0xe26a,	// (0x0002cefd) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0002e94a) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0002e94a) call5_swipe_2_pane_g

0xe276,	// (0x0002cf09) call5_swipe_2_pane_t1_ParamLimits

0xe276,	// (0x0002cf09) call5_swipe_2_pane_t1

0xe28b,	// (0x0002cf1e) sc_swipe_pane_g1_ParamLimits

0xe28b,	// (0x0002cf1e) sc_swipe_pane_g1

0xe298,	// (0x0002cf2b) sc_swipe_pane_g2_ParamLimits

0xe298,	// (0x0002cf2b) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0002e94f) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0002e94f) sc_swipe_pane_g

0xe2a4,	// (0x0002cf37) sc_swipe_pane_t1_ParamLimits

0xe2a4,	// (0x0002cf37) sc_swipe_pane_t1

0x9bfe,	// (0x00028891) main_cmail_launcher_pane

0x8623,	// (0x000272b6) aid_size_cell_cmail_l_ParamLimits

0x8623,	// (0x000272b6) aid_size_cell_cmail_l

0x8633,	// (0x000272c6) grid_cmail_l_pane_ParamLimits

0x8633,	// (0x000272c6) grid_cmail_l_pane

0x8643,	// (0x000272d6) cell_cmail_l_pane_ParamLimits

0x8643,	// (0x000272d6) cell_cmail_l_pane

0x8659,	// (0x000272ec) cell_cmail_l_pane_g1_ParamLimits

0x8659,	// (0x000272ec) cell_cmail_l_pane_g1

0x8665,	// (0x000272f8) cell_cmail_l_pane_t1_ParamLimits

0x8665,	// (0x000272f8) cell_cmail_l_pane_t1

0xe2b9,	// (0x0002cf4c) cell_cmail_l_pane_t2_ParamLimits

0xe2b9,	// (0x0002cf4c) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0002e954) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0002e954) cell_cmail_l_pane_t

0xa5df,	// (0x00029272) grid_highlight_pane_cp018_ParamLimits

0xa5df,	// (0x00029272) grid_highlight_pane_cp018

0x219f,	// (0x00020e32) main2_pane_ParamLimits

0x219f,	// (0x00020e32) main2_pane

0xa43d,	// (0x000290d0) popup_sp_fs_action_menu_bg_pane_g1

0xa445,	// (0x000290d8) popup_sp_fs_action_menu_bg_pane_g2

0xa44d,	// (0x000290e0) popup_sp_fs_action_menu_bg_pane_g3

0xa455,	// (0x000290e8) popup_sp_fs_action_menu_bg_pane_g4

0xa45d,	// (0x000290f0) popup_sp_fs_action_menu_bg_pane_g5

0xa465,	// (0x000290f8) popup_sp_fs_action_menu_bg_pane_g6

0xa46d,	// (0x00029100) popup_sp_fs_action_menu_bg_pane_g7

0xa475,	// (0x00029108) popup_sp_fs_action_menu_bg_pane_g8

0xa47d,	// (0x00029110) popup_sp_fs_action_menu_bg_pane_g9

0xa485,	// (0x00029118) popup_sp_fs_action_menu_bg_pane_g10

0xa485,	// (0x00029118) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0002de19) popup_sp_fs_action_menu_bg_pane_g

0x2f90,	// (0x00021c23) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_t3_g3_g1

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t3_g3_g2

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002decb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002decb) list_medium_line_x2_t3_g3_g

0x2fb4,	// (0x00021c47) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2fb4,	// (0x00021c47) list_medium_line_x2_t3_g3_t1

0x2fc9,	// (0x00021c5c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2fc9,	// (0x00021c5c) list_medium_line_x2_t3_g3_t2

0x2fdd,	// (0x00021c70) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2fdd,	// (0x00021c70) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002ded2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002ded2) list_medium_line_x2_t3_g3_t

0x2f90,	// (0x00021c23) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_t3_g2_g1

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002ded9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002ded9) list_medium_line_x2_t3_g2_g

0x2ff2,	// (0x00021c85) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2ff2,	// (0x00021c85) list_medium_line_x2_t3_g2_t1

0x3008,	// (0x00021c9b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3008,	// (0x00021c9b) list_medium_line_x2_t3_g2_t2

0x301a,	// (0x00021cad) list_medium_line_x2_t3_g2_t3_ParamLimits

0x301a,	// (0x00021cad) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002dede) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002dede) list_medium_line_x2_t3_g2_t

0x2f90,	// (0x00021c23) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_t4_g4_g1

0x3038,	// (0x00021ccb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3038,	// (0x00021ccb) list_medium_line_x2_t4_g4_g2

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t4_g4_g3

0x3044,	// (0x00021cd7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3044,	// (0x00021cd7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002dee5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002dee5) list_medium_line_x2_t4_g4_g

0x3050,	// (0x00021ce3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3050,	// (0x00021ce3) list_medium_line_x2_t4_g4_t1

0x306a,	// (0x00021cfd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x306a,	// (0x00021cfd) list_medium_line_x2_t4_g4_t2

0x3080,	// (0x00021d13) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3080,	// (0x00021d13) list_medium_line_x2_t4_g4_t3

0x3095,	// (0x00021d28) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3095,	// (0x00021d28) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002deee) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002deee) list_medium_line_x2_t4_g4_t

0x2f90,	// (0x00021c23) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_t2_g4_g1

0x3038,	// (0x00021ccb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3038,	// (0x00021ccb) list_medium_line_x2_t2_g4_g2

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t2_g4_g3

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002df55) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002df55) list_medium_line_x2_t2_g4_g

0x4179,	// (0x00022e0c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4179,	// (0x00022e0c) list_medium_line_x2_t2_g4_t1

0x2fdd,	// (0x00021c70) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2fdd,	// (0x00021c70) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002df5e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002df5e) list_medium_line_x2_t2_g4_t

0x2f90,	// (0x00021c23) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_t2_g3_g1

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t2_g3_g2

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002decb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002decb) list_medium_line_x2_t2_g3_g

0x418e,	// (0x00022e21) list_medium_line_x2_t2_g3_t1_ParamLimits

0x418e,	// (0x00022e21) list_medium_line_x2_t2_g3_t1

0x2fdd,	// (0x00021c70) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2fdd,	// (0x00021c70) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002df63) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002df63) list_medium_line_x2_t2_g3_t

0x42d6,	// (0x00022f69) main_sp_fs_list_pane_ParamLimits

0x42d6,	// (0x00022f69) main_sp_fs_list_pane

0x42e2,	// (0x00022f75) sp_fs_scroll_pane_ParamLimits

0x42e2,	// (0x00022f75) sp_fs_scroll_pane

0x42ee,	// (0x00022f81) list_medium_line_x2_t3_t1

0x42fe,	// (0x00022f91) list_medium_line_x2_t3_t2

0x430c,	// (0x00022f9f) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002dfae) list_medium_line_x2_t3_t

0x431a,	// (0x00022fad) list_medium_line_x3_t4_t1

0x432a,	// (0x00022fbd) list_medium_line_x3_t4_t2

0x4338,	// (0x00022fcb) list_medium_line_x3_t4_t3

0x430c,	// (0x00022f9f) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002dfb5) list_medium_line_x3_t4_t

0x4346,	// (0x00022fd9) list_medium_line_x4_t5_t1

0x4356,	// (0x00022fe9) list_medium_line_x4_t5_t2

0x4338,	// (0x00022fcb) list_medium_line_x4_t5_t3

0x4364,	// (0x00022ff7) list_medium_line_x4_t5_t4

0x430c,	// (0x00022f9f) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002dfbe) list_medium_line_x4_t5_t

0x2f90,	// (0x00021c23) list_medium_line_t4_g4_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_t4_g4_g1

0x4372,	// (0x00023005) list_medium_line_t4_g4_g2_ParamLimits

0x4372,	// (0x00023005) list_medium_line_t4_g4_g2

0x437e,	// (0x00023011) list_medium_line_t4_g4_g3_ParamLimits

0x437e,	// (0x00023011) list_medium_line_t4_g4_g3

0x2fa8,	// (0x00021c3b) list_medium_line_t4_g4_g4_ParamLimits

0x2fa8,	// (0x00021c3b) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002dfc9) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002dfc9) list_medium_line_t4_g4_g

0x438a,	// (0x0002301d) list_medium_line_t4_g4_t1_ParamLimits

0x438a,	// (0x0002301d) list_medium_line_t4_g4_t1

0x439f,	// (0x00023032) list_medium_line_t4_g4_t2_ParamLimits

0x439f,	// (0x00023032) list_medium_line_t4_g4_t2

0x43b5,	// (0x00023048) list_medium_line_t4_g4_t3_ParamLimits

0x43b5,	// (0x00023048) list_medium_line_t4_g4_t3

0x2fdd,	// (0x00021c70) list_medium_line_t4_g4_t4_ParamLimits

0x2fdd,	// (0x00021c70) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002dfd2) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002dfd2) list_medium_line_t4_g4_t

0x446f,	// (0x00023102) chi_dic_find_pane_g1

0x5444,	// (0x000240d7) main_tport_pane

0xd430,	// (0x0002c0c3) list_medium_line_plain_t1

0x71db,	// (0x00025e6e) list_medium_line_t2_g2_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_t2_g2_g1

0xd446,	// (0x0002c0d9) list_medium_line_t2_g2_g2_ParamLimits

0xd446,	// (0x0002c0d9) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002e693) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002e693) list_medium_line_t2_g2_g

0x71e7,	// (0x00025e7a) list_medium_line_t2_g2_t1_ParamLimits

0x71e7,	// (0x00025e7a) list_medium_line_t2_g2_t1

0x71fe,	// (0x00025e91) list_medium_line_t2_g2_t2_ParamLimits

0x71fe,	// (0x00025e91) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002e698) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002e698) list_medium_line_t2_g2_t

0xd799,	// (0x0002c42c) aid_sp_fs_list_icon_a_sm

0xd7a1,	// (0x0002c434) aid_sp_fs_list_icon_d

0xd7a9,	// (0x0002c43c) aid_sp_fs_text_primary

0xd7b2,	// (0x0002c445) aid_sp_fs_text_secondary

0x776e,	// (0x00026401) list_medium_line

0x776e,	// (0x00026401) list_medium_line_g2

0x776e,	// (0x00026401) list_medium_line_g3

0x776e,	// (0x00026401) list_medium_line_plain

0x776e,	// (0x00026401) list_medium_line_plain_t2

0x776e,	// (0x00026401) list_medium_line_plain_t3

0x776e,	// (0x00026401) list_medium_line_right_icon

0x776e,	// (0x00026401) list_medium_line_right_iconx2

0x776e,	// (0x00026401) list_medium_line_t2

0x776e,	// (0x00026401) list_medium_line_t2_g2

0x776e,	// (0x00026401) list_medium_line_t2_g3

0x776e,	// (0x00026401) list_medium_line_t2_right_icon

0x776e,	// (0x00026401) list_medium_line_t2_right_iconx2

0x776e,	// (0x00026401) list_medium_line_t3

0x776e,	// (0x00026401) list_medium_line_t3_g2

0x776e,	// (0x00026401) list_medium_line_t3_g3

0x776e,	// (0x00026401) list_medium_line_t3_right_iconx2

0x7777,	// (0x0002640a) list_medium_line_t4_g4

0x7780,	// (0x00026413) list_medium_line_x2

0x7780,	// (0x00026413) list_medium_line_x2_t2_g2

0x7780,	// (0x00026413) list_medium_line_x2_t2_g3

0x7780,	// (0x00026413) list_medium_line_x2_t2_g4

0x7780,	// (0x00026413) list_medium_line_x2_t3

0x7780,	// (0x00026413) list_medium_line_x2_t3_g2

0x7780,	// (0x00026413) list_medium_line_x2_t3_g3

0x7780,	// (0x00026413) list_medium_line_x2_t3_g4

0x7780,	// (0x00026413) list_medium_line_x2_t4_g2

0x7780,	// (0x00026413) list_medium_line_x2_t4_g4

0x7789,	// (0x0002641c) list_medium_line_x3

0x7789,	// (0x0002641c) list_medium_line_x3_t4

0x7789,	// (0x0002641c) list_medium_line_x3_t4_g4

0x7777,	// (0x0002640a) list_medium_line_x4_t4

0x7777,	// (0x0002640a) list_medium_line_x4_t4_g7

0x7777,	// (0x0002640a) list_medium_line_x4_t5

0x7792,	// (0x00026425) list_single_fs_dyc_pane_ParamLimits

0x7792,	// (0x00026425) list_single_fs_dyc_pane

0x2f90,	// (0x00021c23) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x4_t4_g7_g1

0x7e7b,	// (0x00026b0e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e7b,	// (0x00026b0e) list_medium_line_x4_t4_g7_g2

0x7e87,	// (0x00026b1a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e87,	// (0x00026b1a) list_medium_line_x4_t4_g7_g3

0x7e96,	// (0x00026b29) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e96,	// (0x00026b29) list_medium_line_x4_t4_g7_g4

0x7ea2,	// (0x00026b35) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ea2,	// (0x00026b35) list_medium_line_x4_t4_g7_g5

0x7eb1,	// (0x00026b44) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7eb1,	// (0x00026b44) list_medium_line_x4_t4_g7_g6

0x7ec0,	// (0x00026b53) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ec0,	// (0x00026b53) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0002e85c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0002e85c) list_medium_line_x4_t4_g7_g

0x7ecc,	// (0x00026b5f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ecc,	// (0x00026b5f) list_medium_line_x4_t4_g7_t1

0x7ee1,	// (0x00026b74) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ee1,	// (0x00026b74) list_medium_line_x4_t4_g7_t2

0x7ef6,	// (0x00026b89) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ef6,	// (0x00026b89) list_medium_line_x4_t4_g7_t3

0x7f0b,	// (0x00026b9e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f0b,	// (0x00026b9e) list_medium_line_x4_t4_g7_t4

0x7f1d,	// (0x00026bb0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f1d,	// (0x00026bb0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0002e86b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0002e86b) list_medium_line_x4_t4_g7_t

0x7f2f,	// (0x00026bc2) list_single_dyc_row_pane_ParamLimits

0x7f2f,	// (0x00026bc2) list_single_dyc_row_pane

0x85cd,	// (0x00027260) call5_gesture_pane_ParamLimits

0x85cd,	// (0x00027260) call5_gesture_pane

0x8603,	// (0x00027296) call5_windows_pane_ParamLimits

0x8603,	// (0x00027296) call5_windows_pane

0x867b,	// (0x0002730e) call5_swipe_1_pane_cp_ParamLimits

0x867b,	// (0x0002730e) call5_swipe_1_pane_cp

0x8687,	// (0x0002731a) call5_swipe_2_pane_cp_ParamLimits

0x8687,	// (0x0002731a) call5_swipe_2_pane_cp

0xae96,	// (0x00029b29) call5_image_pane_cp

0x8693,	// (0x00027326) popup_call5_audio_first_window_cp_ParamLimits

0x8693,	// (0x00027326) popup_call5_audio_first_window_cp

0xe28b,	// (0x0002cf1e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe28b,	// (0x0002cf1e) call5_swipe_1_pane_g1_cp

0xe2cb,	// (0x0002cf5e) call5_swipe_1_pane_g2_cp

0xe2a4,	// (0x0002cf37) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2a4,	// (0x0002cf37) call5_swipe_1_pane_t1_cp

0xe28b,	// (0x0002cf1e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe28b,	// (0x0002cf1e) call5_swipe_2_pane_g1_cp

0xe2d3,	// (0x0002cf66) call5_swipe_2_pane_g2_cp

0xe2db,	// (0x0002cf6e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2db,	// (0x0002cf6e) call5_swipe_2_pane_t1_cp

0xa5df,	// (0x00029272) main_sp_fs_email_pane

0xe2f0,	// (0x0002cf83) main_sp_fs_listscroll_pane_te

0xe2f9,	// (0x0002cf8c) popup_sp_fs_action_menu_pane_ParamLimits

0xe2f9,	// (0x0002cf8c) popup_sp_fs_action_menu_pane

0xc768,	// (0x0002b3fb) bg_sp_fs_ctrlbar_pane_g1

0xcd21,	// (0x0002b9b4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd33,	// (0x0002b9c6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd2a,	// (0x0002b9bd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc768,	// (0x0002b3fb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0002e959) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc547,	// (0x0002b1da) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc547,	// (0x0002b1da) bg_sp_fs_ctrlbar_ddmenu_pane

0xe33f,	// (0x0002cfd2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe33f,	// (0x0002cfd2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe34b,	// (0x0002cfde) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe34b,	// (0x0002cfde) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0002e962) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0002e962) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe357,	// (0x0002cfea) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe357,	// (0x0002cfea) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe371,	// (0x0002d004) list_medium_line_t2_right_icon_g1

0x86a1,	// (0x00027334) list_medium_line_t2_right_icon_t1

0x86b1,	// (0x00027344) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0002e967) list_medium_line_t2_right_icon_t

0xc317,	// (0x0002afaa) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc317,	// (0x0002afaa) bg_sp_fs_ctrlbar_pane

0x8718,	// (0x000273ab) main_sp_fs_ctrlbar_button_pane_cp01

0x8720,	// (0x000273b3) main_sp_fs_ctrlbar_ddmenu_pane

0xd476,	// (0x0002c109) main_sp_fs_ctrlbar_pane_g1

0xe3b1,	// (0x0002d044) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0002e96c) main_sp_fs_ctrlbar_pane_g

0xe3bd,	// (0x0002d050) main_sp_fs_ctrlbar_pane_t1

0x872a,	// (0x000273bd) main_sp_fs_ctrlbar_pane

0x8744,	// (0x000273d7) main_sp_fs_listscroll_pane_te_cp01

0x8755,	// (0x000273e8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8755,	// (0x000273e8) popup_sp_fs_action_menu_pane_cp01

0xa5df,	// (0x00029272) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa5df,	// (0x00029272) bg_sp_fs_highlight_list_pane_cp01

0xe3ed,	// (0x0002d080) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3ed,	// (0x0002d080) sp_fs_action_menu_list_gene_pane_g1

0xe3fc,	// (0x0002d08f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3fc,	// (0x0002d08f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0002e976) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0002e976) sp_fs_action_menu_list_gene_pane_g

0xe409,	// (0x0002d09c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe409,	// (0x0002d09c) sp_fs_action_menu_list_gene_pane_t1

0xe421,	// (0x0002d0b4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe421,	// (0x0002d0b4) sp_fs_action_menu_list_gene_pane

0xe444,	// (0x0002d0d7) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe444,	// (0x0002d0d7) popup_sp_fs_action_menu_bg_pane

0xe452,	// (0x0002d0e5) sp_fs_action_menu_list_pane_ParamLimits

0xe452,	// (0x0002d0e5) sp_fs_action_menu_list_pane

0xe476,	// (0x0002d109) sp_fs_scroll_pane_cp01_ParamLimits

0xe476,	// (0x0002d109) sp_fs_scroll_pane_cp01

0x8783,	// (0x00027416) list_medium_line_plain_t2_t1

0x8793,	// (0x00027426) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0002e97b) list_medium_line_plain_t2_t

0x87a1,	// (0x00027434) list_medium_line_plain_t3_t1

0x87b1,	// (0x00027444) list_medium_line_plain_t3_t2

0x87bf,	// (0x00027452) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0002e980) list_medium_line_plain_t3_t

0x2f90,	// (0x00021c23) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_t2_g2_g1

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002ded9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002ded9) list_medium_line_x2_t2_g2_g

0x438a,	// (0x0002301d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x438a,	// (0x0002301d) list_medium_line_x2_t2_g2_t1

0x2fdd,	// (0x00021c70) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2fdd,	// (0x00021c70) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0002e987) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0002e987) list_medium_line_x2_t2_g2_t

0x2f90,	// (0x00021c23) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_t4_g2_g1

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002ded9) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002ded9) list_medium_line_x2_t4_g2_g

0x87cd,	// (0x00027460) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87cd,	// (0x00027460) list_medium_line_x2_t4_g2_t1

0x87e7,	// (0x0002747a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87e7,	// (0x0002747a) list_medium_line_x2_t4_g2_t2

0x87fd,	// (0x00027490) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87fd,	// (0x00027490) list_medium_line_x2_t4_g2_t3

0x2fdd,	// (0x00021c70) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2fdd,	// (0x00021c70) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf9,	// (0x0002e98c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf9,	// (0x0002e98c) list_medium_line_x2_t4_g2_t

0xe49c,	// (0x0002d12f) list_medium_line_t3_right_iconx2_g1

0xe371,	// (0x0002d004) list_medium_line_t3_right_iconx2_g2

0x8812,	// (0x000274a5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd02,	// (0x0002e995) list_medium_line_t3_right_iconx2_g

0x881c,	// (0x000274af) list_medium_line_t3_right_iconx2_t1

0x882c,	// (0x000274bf) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd09,	// (0x0002e99c) list_medium_line_t3_right_iconx2_t

0x2f90,	// (0x00021c23) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x3_t4_g4_g1

0x2f9c,	// (0x00021c2f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2f9c,	// (0x00021c2f) list_medium_line_x3_t4_g4_g2

0x4372,	// (0x00023005) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4372,	// (0x00023005) list_medium_line_x3_t4_g4_g3

0x883a,	// (0x000274cd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x883a,	// (0x000274cd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd0e,	// (0x0002e9a1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd0e,	// (0x0002e9a1) list_medium_line_x3_t4_g4_g

0x8846,	// (0x000274d9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8846,	// (0x000274d9) list_medium_line_x3_t4_g4_t1

0x885d,	// (0x000274f0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x885d,	// (0x000274f0) list_medium_line_x3_t4_g4_t2

0x8872,	// (0x00027505) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8872,	// (0x00027505) list_medium_line_x3_t4_g4_t3

0x8887,	// (0x0002751a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8887,	// (0x0002751a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd17,	// (0x0002e9aa) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd17,	// (0x0002e9aa) list_medium_line_x3_t4_g4_t

0x88a4,	// (0x00027537) list_single_dyc_row_text_pane_t1_ParamLimits

0x88a4,	// (0x00027537) list_single_dyc_row_text_pane_t1

0x88e1,	// (0x00027574) list_single_dyc_row_text_pane_t2_ParamLimits

0x88e1,	// (0x00027574) list_single_dyc_row_text_pane_t2

0xe4a4,	// (0x0002d137) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4a4,	// (0x0002d137) list_single_dyc_row_text_pane_t3

0x0005,

0xfd20,	// (0x0002e9b3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd20,	// (0x0002e9b3) list_single_dyc_row_text_pane_t

0xe4c8,	// (0x0002d15b) list_single_dyc_row_pane_g1_ParamLimits

0xe4c8,	// (0x0002d15b) list_single_dyc_row_pane_g1

0xe4d4,	// (0x0002d167) list_single_dyc_row_pane_g2_ParamLimits

0xe4d4,	// (0x0002d167) list_single_dyc_row_pane_g2

0xe4e0,	// (0x0002d173) list_single_dyc_row_pane_g3_ParamLimits

0xe4e0,	// (0x0002d173) list_single_dyc_row_pane_g3

0xe4ec,	// (0x0002d17f) list_single_dyc_row_pane_g4_ParamLimits

0xe4ec,	// (0x0002d17f) list_single_dyc_row_pane_g4

0x0003,

0xfd2d,	// (0x0002e9c0) list_single_dyc_row_pane_g_ParamLimits

0xfd2d,	// (0x0002e9c0) list_single_dyc_row_pane_g

0xe4f8,	// (0x0002d18b) list_single_dyc_row_text_pane_ParamLimits

0xe4f8,	// (0x0002d18b) list_single_dyc_row_text_pane

0x9bfe,	// (0x00028891) bg_sp_fs_scroll_pane

0xe517,	// (0x0002d1aa) thumb_sp_fs_scroll_pane

0x71db,	// (0x00025e6e) list_medium_line_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_g1

0xe520,	// (0x0002d1b3) list_medium_line_t1_ParamLimits

0xe520,	// (0x0002d1b3) list_medium_line_t1

0x2f90,	// (0x00021c23) list_medium_line_x2_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_g1

0x2f9c,	// (0x00021c2f) list_medium_line_x2_g2_ParamLimits

0x2f9c,	// (0x00021c2f) list_medium_line_x2_g2

0x0001,

0xfd36,	// (0x0002e9c9) list_medium_line_x2_g_ParamLimits

0xfd36,	// (0x0002e9c9) list_medium_line_x2_g

0xe535,	// (0x0002d1c8) list_medium_line_x2_t1_ParamLimits

0xe535,	// (0x0002d1c8) list_medium_line_x2_t1

0x2f90,	// (0x00021c23) list_medium_line_x3_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x3_g1

0x2f9c,	// (0x00021c2f) list_medium_line_x3_g2_ParamLimits

0x2f9c,	// (0x00021c2f) list_medium_line_x3_g2

0x0001,

0xfd36,	// (0x0002e9c9) list_medium_line_x3_g_ParamLimits

0xfd36,	// (0x0002e9c9) list_medium_line_x3_g

0xe535,	// (0x0002d1c8) list_medium_line_x3_t1_ParamLimits

0xe535,	// (0x0002d1c8) list_medium_line_x3_t1

0xe54b,	// (0x0002d1de) thumb_sp_fs_scroll_pane_g1

0xe554,	// (0x0002d1e7) thumb_sp_fs_scroll_pane_g2

0xe55d,	// (0x0002d1f0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0002e9ce) thumb_sp_fs_scroll_pane_g

0xe54b,	// (0x0002d1de) bg_sp_fs_scroll_pane_g1

0xe554,	// (0x0002d1e7) bg_sp_fs_scroll_pane_g2

0xe55d,	// (0x0002d1f0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0002e9ce) bg_sp_fs_scroll_pane_g

0x2f90,	// (0x00021c23) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2f90,	// (0x00021c23) list_medium_line_x2_t3_g4_g1

0x3038,	// (0x00021ccb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3038,	// (0x00021ccb) list_medium_line_x2_t3_g4_g2

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2f9c,	// (0x00021c2f) list_medium_line_x2_t3_g4_g3

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2fa8,	// (0x00021c3b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002df55) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002df55) list_medium_line_x2_t3_g4_g

0x8a0a,	// (0x0002769d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a0a,	// (0x0002769d) list_medium_line_x2_t3_g4_t1

0x8a20,	// (0x000276b3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a20,	// (0x000276b3) list_medium_line_x2_t3_g4_t2

0x2fdd,	// (0x00021c70) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2fdd,	// (0x00021c70) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd42,	// (0x0002e9d5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd42,	// (0x0002e9d5) list_medium_line_x2_t3_g4_t

0x71db,	// (0x00025e6e) list_medium_line_g2_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_g2_g1

0xd446,	// (0x0002c0d9) list_medium_line_g2_g2_ParamLimits

0xd446,	// (0x0002c0d9) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002e693) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002e693) list_medium_line_g2_g

0xe566,	// (0x0002d1f9) list_medium_line_g2_t1_ParamLimits

0xe566,	// (0x0002d1f9) list_medium_line_g2_t1

0x71db,	// (0x00025e6e) list_medium_line_t3_g2_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_t3_g2_g1

0xd446,	// (0x0002c0d9) list_medium_line_t3_g2_g2_ParamLimits

0xd446,	// (0x0002c0d9) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002e693) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002e693) list_medium_line_t3_g2_g

0x8a39,	// (0x000276cc) list_medium_line_t3_g2_t1_ParamLimits

0x8a39,	// (0x000276cc) list_medium_line_t3_g2_t1

0x8a53,	// (0x000276e6) list_medium_line_t3_g2_t2_ParamLimits

0x8a53,	// (0x000276e6) list_medium_line_t3_g2_t2

0x8a69,	// (0x000276fc) list_medium_line_t3_g2_t3_ParamLimits

0x8a69,	// (0x000276fc) list_medium_line_t3_g2_t3

0x0002,

0xfd49,	// (0x0002e9dc) list_medium_line_t3_g2_t_ParamLimits

0xfd49,	// (0x0002e9dc) list_medium_line_t3_g2_t

0xe371,	// (0x0002d004) list_medium_line_right_icon_g1

0xe57b,	// (0x0002d20e) list_medium_line_right_icon_t1

0x71db,	// (0x00025e6e) list_medium_line_t2_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_t2_g1

0x8a80,	// (0x00027713) list_medium_line_t2_t1_ParamLimits

0x8a80,	// (0x00027713) list_medium_line_t2_t1

0x8a9a,	// (0x0002772d) list_medium_line_t2_t2_ParamLimits

0x8a9a,	// (0x0002772d) list_medium_line_t2_t2

0x0001,

0xfd50,	// (0x0002e9e3) list_medium_line_t2_t_ParamLimits

0xfd50,	// (0x0002e9e3) list_medium_line_t2_t

0x71db,	// (0x00025e6e) list_medium_line_t3_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_t3_g1

0x8aaf,	// (0x00027742) list_medium_line_t3_t1_ParamLimits

0x8aaf,	// (0x00027742) list_medium_line_t3_t1

0x8ac6,	// (0x00027759) list_medium_line_t3_t2_ParamLimits

0x8ac6,	// (0x00027759) list_medium_line_t3_t2

0x8adb,	// (0x0002776e) list_medium_line_t3_t3_ParamLimits

0x8adb,	// (0x0002776e) list_medium_line_t3_t3

0x0002,

0xfd55,	// (0x0002e9e8) list_medium_line_t3_t_ParamLimits

0xfd55,	// (0x0002e9e8) list_medium_line_t3_t

0x71db,	// (0x00025e6e) list_medium_line_g3_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_g3_g1

0xe589,	// (0x0002d21c) list_medium_line_g3_g2_ParamLimits

0xe589,	// (0x0002d21c) list_medium_line_g3_g2

0xd446,	// (0x0002c0d9) list_medium_line_g3_g3_ParamLimits

0xd446,	// (0x0002c0d9) list_medium_line_g3_g3

0x0002,

0xfd5c,	// (0x0002e9ef) list_medium_line_g3_g_ParamLimits

0xfd5c,	// (0x0002e9ef) list_medium_line_g3_g

0xe595,	// (0x0002d228) list_medium_line_g3_t1_ParamLimits

0xe595,	// (0x0002d228) list_medium_line_g3_t1

0x71db,	// (0x00025e6e) list_medium_line_t2_g3_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_t2_g3_g1

0xe589,	// (0x0002d21c) list_medium_line_t2_g3_g2_ParamLimits

0xe589,	// (0x0002d21c) list_medium_line_t2_g3_g2

0xd446,	// (0x0002c0d9) list_medium_line_t2_g3_g3_ParamLimits

0xd446,	// (0x0002c0d9) list_medium_line_t2_g3_g3

0x0002,

0xfd5c,	// (0x0002e9ef) list_medium_line_t2_g3_g_ParamLimits

0xfd5c,	// (0x0002e9ef) list_medium_line_t2_g3_g

0x8aed,	// (0x00027780) list_medium_line_t2_g3_t1_ParamLimits

0x8aed,	// (0x00027780) list_medium_line_t2_g3_t1

0x8b04,	// (0x00027797) list_medium_line_t2_g3_t2_ParamLimits

0x8b04,	// (0x00027797) list_medium_line_t2_g3_t2

0x0001,

0xfd63,	// (0x0002e9f6) list_medium_line_t2_g3_t_ParamLimits

0xfd63,	// (0x0002e9f6) list_medium_line_t2_g3_t

0x71db,	// (0x00025e6e) list_medium_line_t3_g3_g1_ParamLimits

0x71db,	// (0x00025e6e) list_medium_line_t3_g3_g1

0xe589,	// (0x0002d21c) list_medium_line_t3_g3_g2_ParamLimits

0xe589,	// (0x0002d21c) list_medium_line_t3_g3_g2

0xd446,	// (0x0002c0d9) list_medium_line_t3_g3_g3_ParamLimits

0xd446,	// (0x0002c0d9) list_medium_line_t3_g3_g3

0x0002,

0xfd5c,	// (0x0002e9ef) list_medium_line_t3_g3_g_ParamLimits

0xfd5c,	// (0x0002e9ef) list_medium_line_t3_g3_g

0x8b19,	// (0x000277ac) list_medium_line_t3_g3_t1_ParamLimits

0x8b19,	// (0x000277ac) list_medium_line_t3_g3_t1

0x8b32,	// (0x000277c5) list_medium_line_t3_g3_t2_ParamLimits

0x8b32,	// (0x000277c5) list_medium_line_t3_g3_t2

0x8b48,	// (0x000277db) list_medium_line_t3_g3_t3_ParamLimits

0x8b48,	// (0x000277db) list_medium_line_t3_g3_t3

0x0002,

0xfd68,	// (0x0002e9fb) list_medium_line_t3_g3_t_ParamLimits

0xfd68,	// (0x0002e9fb) list_medium_line_t3_g3_t

0xe49c,	// (0x0002d12f) list_medium_line_right_iconx2_g1

0xe371,	// (0x0002d004) list_medium_line_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0002ea02) list_medium_line_right_iconx2_g

0xe5aa,	// (0x0002d23d) list_medium_line_right_iconx2_t1

0xe49c,	// (0x0002d12f) list_medium_line_t2_right_iconx2_g1

0xe371,	// (0x0002d004) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0002ea02) list_medium_line_t2_right_iconx2_g

0x8b62,	// (0x000277f5) list_medium_line_t2_right_iconx2_t1

0x8b72,	// (0x00027805) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd74,	// (0x0002ea07) list_medium_line_t2_right_iconx2_t

0x8b80,	// (0x00027813) list_medium_line_x4_t4_t1

0x8b8e,	// (0x00027821) list_medium_line_x4_t4_t2

0x8b9e,	// (0x00027831) list_medium_line_x4_t4_t3

0x8bae,	// (0x00027841) list_medium_line_x4_t4_t4

0x0003,

0xfd79,	// (0x0002ea0c) list_medium_line_x4_t4_t

0x8be8,	// (0x0002787b) tport_appsw_pane_ParamLimits

0x8be8,	// (0x0002787b) tport_appsw_pane

0x8bf6,	// (0x00027889) tport_contact_pane_ParamLimits

0x8bf6,	// (0x00027889) tport_contact_pane

0x8c06,	// (0x00027899) tport_listscroll_pane_ParamLimits

0x8c06,	// (0x00027899) tport_listscroll_pane

0x8c16,	// (0x000278a9) cell_tport_appsw_pane_ParamLimits

0x8c16,	// (0x000278a9) cell_tport_appsw_pane

0xca09,	// (0x0002b69c) tport_appsw_pane_g1_ParamLimits

0xca09,	// (0x0002b69c) tport_appsw_pane_g1

0xe5b8,	// (0x0002d24b) tport_contact_pane_g1

0xe5c1,	// (0x0002d254) tport_contact_pane_t1

0xe5cf,	// (0x0002d262) tport_contact_pane_t2

0x0001,

0xfd82,	// (0x0002ea15) tport_contact_pane_t

0xe5dd,	// (0x0002d270) list_tport_pane

0xe5e6,	// (0x0002d279) scroll_pane_cp_030

0x8c4b,	// (0x000278de) cell_tport_appsw_pane_g1

0x8c5b,	// (0x000278ee) cell_tport_appsw_pane_t1

0x8c69,	// (0x000278fc) grid_highlight_pane_cp019

0x8c71,	// (0x00027904) list_tport_double_graphic_pane_ParamLimits

0x8c71,	// (0x00027904) list_tport_double_graphic_pane

0xa5df,	// (0x00029272) list_highlight_pane_cp023_ParamLimits

0xa5df,	// (0x00029272) list_highlight_pane_cp023

0x8c7e,	// (0x00027911) list_tport_double_graphic_pane_g1_ParamLimits

0x8c7e,	// (0x00027911) list_tport_double_graphic_pane_g1

0x8c8b,	// (0x0002791e) list_tport_double_graphic_pane_t1_ParamLimits

0x8c8b,	// (0x0002791e) list_tport_double_graphic_pane_t1

0x8ca0,	// (0x00027933) list_tport_double_graphic_pane_t2_ParamLimits

0x8ca0,	// (0x00027933) list_tport_double_graphic_pane_t2

0x0001,

0xfd8e,	// (0x0002ea21) list_tport_double_graphic_pane_t_ParamLimits

0xfd8e,	// (0x0002ea21) list_tport_double_graphic_pane_t

0x9bfe,	// (0x00028891) main_cale_note_pane

0x1c74,	// (0x00020907) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1c74,	// (0x00020907) cell_vitu2_function_top_wide_pane_cp01

0x829a,	// (0x00026f2d) wait_bar_pane_cp05_ParamLimits

0xa5df,	// (0x00029272) listscroll_cmail_pane

0xe5f7,	// (0x0002d28a) list_cmail_pane

0x8cbc,	// (0x0002794f) list_cmail_body_pane

0x8cd5,	// (0x00027968) list_single_cmail_header_caption_pane

0x8cf6,	// (0x00027989) list_single_cmail_header_detail_pane_ParamLimits

0x8cf6,	// (0x00027989) list_single_cmail_header_detail_pane

0x8d27,	// (0x000279ba) list_single_cmail_header_caption_pane_t1

0x8d37,	// (0x000279ca) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d37,	// (0x000279ca) list_single_cmail_header_detail_pane_g1

0xe617,	// (0x0002d2aa) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe617,	// (0x0002d2aa) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd93,	// (0x0002ea26) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd93,	// (0x0002ea26) list_single_cmail_header_detail_pane_g

0x8d4f,	// (0x000279e2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8d4f,	// (0x000279e2) list_single_cmail_header_detail_pane_t1

0x8d9d,	// (0x00027a30) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8d9d,	// (0x00027a30) list_single_cmail_header_editor_pane_bg

0xdf2c,	// (0x0002cbbf) list_cmail_body_pane_g1

0xe654,	// (0x0002d2e7) list_cmail_body_pane_t1

0xd206,	// (0x0002be99) list_single_cmail_header_editor_pane_bg_g1

0xa7c9,	// (0x0002945c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd216,	// (0x0002bea9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd20e,	// (0x0002bea1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd43e,	// (0x0002c0d1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd236,	// (0x0002bec9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd226,	// (0x0002beb9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd22e,	// (0x0002bec1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7a9,	// (0x0002943c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8db4,	// (0x00027a47) calenote_gesture_pane_ParamLimits

0x8db4,	// (0x00027a47) calenote_gesture_pane

0x8dce,	// (0x00027a61) calenote_window_pane_ParamLimits

0x8dce,	// (0x00027a61) calenote_window_pane

0xe662,	// (0x0002d2f5) popup_note_window_cp01

0x8de6,	// (0x00027a79) calenote_swipe_1_pane_ParamLimits

0x8de6,	// (0x00027a79) calenote_swipe_1_pane

0x8687,	// (0x0002731a) calenote_swipe_2_pane_ParamLimits

0x8687,	// (0x0002731a) calenote_swipe_2_pane

0xe28b,	// (0x0002cf1e) calenote_swipe_1_pane_g1_ParamLimits

0xe28b,	// (0x0002cf1e) calenote_swipe_1_pane_g1

0xe298,	// (0x0002cf2b) calenote_swipe_1_pane_g2_ParamLimits

0xe298,	// (0x0002cf2b) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0002e94f) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0002e94f) calenote_swipe_1_pane_g

0xe674,	// (0x0002d307) calenote_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x0002d307) calenote_swipe_1_pane_t1

0xe28b,	// (0x0002cf1e) calenote_swipe_2_pane_g1_ParamLimits

0xe28b,	// (0x0002cf1e) calenote_swipe_2_pane_g1

0xe693,	// (0x0002d326) calenote_swipe_2_pane_g2_ParamLimits

0xe693,	// (0x0002d326) calenote_swipe_2_pane_g2

0x0001,

0xfd9f,	// (0x0002ea32) calenote_swipe_2_pane_g_ParamLimits

0xfd9f,	// (0x0002ea32) calenote_swipe_2_pane_g

0xe69f,	// (0x0002d332) calenote_swipe_2_pane_t1_ParamLimits

0xe69f,	// (0x0002d332) calenote_swipe_2_pane_t1

0x9bfe,	// (0x00028891) main_mup_navstr_pane

0x6173,	// (0x00024e06) main_mup3_pane_t7_ParamLimits

0x6173,	// (0x00024e06) main_mup3_pane_t7

0x156f,	// (0x00020202) main_mp4_pane_g6_ParamLimits

0x156f,	// (0x00020202) main_mp4_pane_g6

0x1860,	// (0x000204f3) main_image3_pane_t4_ParamLimits

0x1860,	// (0x000204f3) main_image3_pane_t4

0x8df9,	// (0x00027a8c) popup_navstr_preview_pane_ParamLimits

0x8df9,	// (0x00027a8c) popup_navstr_preview_pane

0x8e05,	// (0x00027a98) scroll_navstr_pane_ParamLimits

0x8e05,	// (0x00027a98) scroll_navstr_pane

0x9bfe,	// (0x00028891) bg_popup_preview_window_pane_cp04

0xe6c6,	// (0x0002d359) popup_navstr_preview_pane_t1

0x8e11,	// (0x00027aa4) scroll_navstr_pane_g1_ParamLimits

0x8e11,	// (0x00027aa4) scroll_navstr_pane_g1

0x8e1e,	// (0x00027ab1) scroll_navstr_pane_t1_ParamLimits

0x8e1e,	// (0x00027ab1) scroll_navstr_pane_t1

0xe66b,	// (0x0002d2fe) bg_button_pane_cp014

0xe66b,	// (0x0002d2fe) bg_button_pane_cp030

0x8573,	// (0x00027206) list_double_fisheye_pane_g4_ParamLimits

0x8573,	// (0x00027206) list_double_fisheye_pane_g4

0x857f,	// (0x00027212) list_double_fisheye_pane_g5_ParamLimits

0x857f,	// (0x00027212) list_double_fisheye_pane_g5

0xe5ff,	// (0x0002d292) sp_fs_scroll_pane_cp03

0xd476,	// (0x0002c109) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3b1,	// (0x0002d044) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0002e96c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3bd,	// (0x0002d050) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8cb2,	// (0x00027945) sp_fs_scroll_pane_cp02

0xa4a8,	// (0x0002913b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4a8,	// (0x0002913b) popup_sp_fs_calendar_preview_list_single_pane

0x9bfe,	// (0x00028891) main_cam6_pano_pane

0xa5df,	// (0x00029272) main_mup3_pane_ParamLimits

0x9bfe,	// (0x00028891) main_phacti_pane

0x816d,	// (0x00026e00) bg_button_pane_cp11

0x8185,	// (0x00026e18) main_mobtv_info_pane_g2_ParamLimits

0x8185,	// (0x00026e18) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0002e8cc) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0002e8cc) main_mobtv_info_pane_g

0x8337,	// (0x00026fca) sc_clock_pane_t5_ParamLimits

0x8337,	// (0x00026fca) sc_clock_pane_t5

0x83e6,	// (0x00027079) main_radioblah_pane_g1_ParamLimits

0xe1d7,	// (0x0002ce6a) main_radioblah_pane_t3_ParamLimits

0xe1d7,	// (0x0002ce6a) main_radioblah_pane_t3

0xe1ef,	// (0x0002ce82) main_radioblah_pane_t4_ParamLimits

0xe1ef,	// (0x0002ce82) main_radioblah_pane_t4

0x8404,	// (0x00027097) main_radioblah_text_pane_ParamLimits

0x8404,	// (0x00027097) main_radioblah_text_pane

0x8411,	// (0x000270a4) main_radioblah_info_pane_g1_ParamLimits

0x84aa,	// (0x0002713d) main_radioblah_info_pane_t4_ParamLimits

0x84aa,	// (0x0002713d) main_radioblah_info_pane_t4

0xa5df,	// (0x00029272) main_sp_fs_calendar_pane

0x8e30,	// (0x00027ac3) main_phacti_pane_g1

0x8e38,	// (0x00027acb) phacti_note_pane_ParamLimits

0x8e38,	// (0x00027acb) phacti_note_pane

0xe6dd,	// (0x0002d370) phacti_term_pane_ParamLimits

0xe6dd,	// (0x0002d370) phacti_term_pane

0xe6f2,	// (0x0002d385) phacti_note_pane_t1_ParamLimits

0xe6f2,	// (0x0002d385) phacti_note_pane_t1

0xe709,	// (0x0002d39c) phacti_term_pane_g1

0xe711,	// (0x0002d3a4) phacti_term_pane_t1_ParamLimits

0xe711,	// (0x0002d3a4) phacti_term_pane_t1

0xe73b,	// (0x0002d3ce) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe743,	// (0x0002d3d6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda9,	// (0x0002ea3c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe74b,	// (0x0002d3de) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe74b,	// (0x0002d3de) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe761,	// (0x0002d3f4) aid_popup_sp_fs_bg_corner_pane

0xc768,	// (0x0002b3fb) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bfe,	// (0x00028891) popup_sp_fs_calendar_preview_bg_pane

0xe769,	// (0x0002d3fc) popup_sp_fs_calendar_preview_list_pane

0xc317,	// (0x0002afaa) bg_main_sp_fs_cale_pane_ParamLimits

0xc317,	// (0x0002afaa) bg_main_sp_fs_cale_pane

0xe77a,	// (0x0002d40d) listscroll_cale_mrui_pane_ParamLimits

0xe77a,	// (0x0002d40d) listscroll_cale_mrui_pane

0xe78f,	// (0x0002d422) listscroll_sp_fs_schedule_track_pane

0xe798,	// (0x0002d42b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe798,	// (0x0002d42b) main_sp_fs_ctrlbar_pane_cp01

0xe7ab,	// (0x0002d43e) main_sp_fs_ribbon_pane

0xe7b3,	// (0x0002d446) popup_sp_fs_cale_preview_window

0x8e97,	// (0x00027b2a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e97,	// (0x00027b2a) list_single_sp_fs_schedule_track_pane

0x2328,	// (0x00020fbb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2328,	// (0x00020fbb) bg_sp_fs_highlight_list_pane_cp03

0x8eac,	// (0x00027b3f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8eac,	// (0x00027b3f) list_single_sp_fs_schedule_track_pane_g1

0x8eb8,	// (0x00027b4b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8eb8,	// (0x00027b4b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdae,	// (0x0002ea41) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdae,	// (0x0002ea41) list_single_sp_fs_schedule_track_pane_g

0x8ec4,	// (0x00027b57) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ec4,	// (0x00027b57) list_single_sp_fs_schedule_track_pane_t1

0x8ee2,	// (0x00027b75) sp_fs_schedule_track_pane_ParamLimits

0x8ee2,	// (0x00027b75) sp_fs_schedule_track_pane

0xe7c5,	// (0x0002d458) sp_fs_schedule_track_pane_g1

0xe7cd,	// (0x0002d460) sp_fs_schedule_track_pane_g2

0xe7d5,	// (0x0002d468) sp_fs_schedule_track_pane_g3

0xe7dd,	// (0x0002d470) sp_fs_schedule_track_pane_g4

0xe7e5,	// (0x0002d478) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb3,	// (0x0002ea46) sp_fs_schedule_track_pane_g

0xd206,	// (0x0002be99) bg_sp_fs_schedule_viewer_highlight_g1

0xa7c9,	// (0x0002945c) bg_sp_fs_schedule_viewer_highlight_g2

0xd20e,	// (0x0002bea1) bg_sp_fs_schedule_viewer_highlight_g3

0xd216,	// (0x0002bea9) bg_sp_fs_schedule_viewer_highlight_g4

0xd43e,	// (0x0002c0d1) bg_sp_fs_schedule_viewer_highlight_g5

0xd226,	// (0x0002beb9) bg_sp_fs_schedule_viewer_highlight_g6

0xd22e,	// (0x0002bec1) bg_sp_fs_schedule_viewer_highlight_g7

0xd236,	// (0x0002bec9) bg_sp_fs_schedule_viewer_highlight_g8

0xa7a9,	// (0x0002943c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdbe,	// (0x0002ea51) bg_sp_fs_schedule_viewer_highlight_g

0x9bfe,	// (0x00028891) bg_main_sp_fs_ribbon_pane

0x8ef4,	// (0x00027b87) main_sp_fs_ribbon_pane_g1

0xe7ed,	// (0x0002d480) main_sp_fs_ribbon_pane_t1

0x8efd,	// (0x00027b90) main_sp_fs_ribbon_pane_t2

0xe7fc,	// (0x0002d48f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd1,	// (0x0002ea64) main_sp_fs_ribbon_pane_t

0xe80b,	// (0x0002d49e) main_sp_fs_ribbon_scheduler_pane

0xe813,	// (0x0002d4a6) bg_main_sp_fs_ribbon_pane_g1

0xe81c,	// (0x0002d4af) bg_main_sp_fs_ribbon_pane_g2

0xe825,	// (0x0002d4b8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd8,	// (0x0002ea6b) bg_main_sp_fs_ribbon_pane_g

0xe82d,	// (0x0002d4c0) main_sp_fs_ribbon_scheduler_pane_g1

0xe836,	// (0x0002d4c9) main_sp_fs_ribbon_scheduler_pane_g2

0xe83f,	// (0x0002d4d2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfddf,	// (0x0002ea72) main_sp_fs_ribbon_scheduler_pane_g

0xe848,	// (0x0002d4db) list_cale_mrui_pane

0x8f0c,	// (0x00027b9f) sp_fs_scroll_pane_cp07_ParamLimits

0x8f0c,	// (0x00027b9f) sp_fs_scroll_pane_cp07

0x8f28,	// (0x00027bbb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f28,	// (0x00027bbb) bg_sp_fs_schedule_viewer_highlight

0xe855,	// (0x0002d4e8) list_single_sp_fs_schedule_track_pane_cp01

0xe85d,	// (0x0002d4f0) list_sp_fs_schedule_track_pane

0xe865,	// (0x0002d4f8) sp_fs_scroll_pane_cp06_ParamLimits

0xe865,	// (0x0002d4f8) sp_fs_scroll_pane_cp06

0xc768,	// (0x0002b3fb) bgmain_sp_fs_calendar_pane_g1

0x8f35,	// (0x00027bc8) list_single_cale_mrui_pane_ParamLimits

0x8f35,	// (0x00027bc8) list_single_cale_mrui_pane

0xe877,	// (0x0002d50a) list_single_cale_mrui_row_pane_ParamLimits

0xe877,	// (0x0002d50a) list_single_cale_mrui_row_pane

0xe88d,	// (0x0002d520) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe88d,	// (0x0002d520) list_single_cale_mrui_row_pane_g1

0xe8d2,	// (0x0002d565) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8d2,	// (0x0002d565) list_single_cale_mrui_row_pane_t1

0x8f4a,	// (0x00027bdd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f4a,	// (0x00027bdd) list_single_cale_mrui_row_pane_t2

0xe8e4,	// (0x0002d577) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8e4,	// (0x0002d577) list_single_cale_mrui_row_pane_t3

0xe913,	// (0x0002d5a6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe913,	// (0x0002d5a6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfded,	// (0x0002ea80) list_single_cale_mrui_row_pane_t_ParamLimits

0xfded,	// (0x0002ea80) list_single_cale_mrui_row_pane_t

0x8fb0,	// (0x00027c43) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fb0,	// (0x00027c43) list_single_cmail_header_editor_pane_bg_cp01

0x8fd4,	// (0x00027c67) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fd4,	// (0x00027c67) list_single_cmail_header_editor_pane_bg_cp02

0x8ff0,	// (0x00027c83) main_radioblah_text_pane_t1_ParamLimits

0x8ff0,	// (0x00027c83) main_radioblah_text_pane_t1

0xe942,	// (0x0002d5d5) cam6_indi_pane_cp01

0xe94a,	// (0x0002d5dd) cam6_mode_pane_cp01

0xe952,	// (0x0002d5e5) cam6_pano_pane

0xe95b,	// (0x0002d5ee) cam6_zoom_pane_cp01

0xe965,	// (0x0002d5f8) cam6_pano_image_pane

0xe96e,	// (0x0002d601) cam6_pano_pane_g1

0xdf2c,	// (0x0002cbbf) cam6_pano_pane_g2

0xe977,	// (0x0002d60a) cam6_pano_pane_g3

0xe980,	// (0x0002d613) cam6_pano_pane_g4

0xcd0e,	// (0x0002b9a1) cam6_pano_pane_g5

0xe989,	// (0x0002d61c) cam6_pano_pane_g6

0xe991,	// (0x0002d624) cam6_pano_pane_g7

0xe999,	// (0x0002d62c) cam6_pano_pane_g8

0xe9a2,	// (0x0002d635) cam6_pano_pane_g9

0x0008,

0xfdf6,	// (0x0002ea89) cam6_pano_pane_g

0x9bfe,	// (0x00028891) main_browser_tag_pane

0xe6be,	// (0x0002d351) grid_navstr_albumart_pane

0xe9ad,	// (0x0002d640) cell_navstr_albumart_pane_ParamLimits

0xe9ad,	// (0x0002d640) cell_navstr_albumart_pane

0xe9cc,	// (0x0002d65f) cell_navstr_albumart_pane_g1

0xc124,	// (0x0002adb7) cell_navstr_albumart_pane_g2

0xc134,	// (0x0002adc7) cell_navstr_albumart_pane_g3

0xc12c,	// (0x0002adbf) cell_navstr_albumart_pane_g4

0x0003,

0xfe09,	// (0x0002ea9c) cell_navstr_albumart_pane_g

0x900a,	// (0x00027c9d) bt_list_pane_ParamLimits

0x900a,	// (0x00027c9d) bt_list_pane

0x9023,	// (0x00027cb6) bt_list_pane_t1

0x9032,	// (0x00027cc5) bt_list_pane_t2

0x0001,

0xfe12,	// (0x0002eaa5) bt_list_pane_t

0x9bfe,	// (0x00028891) main_cale_prevew_pane

0x9041,	// (0x00027cd4) popup_cale_preview_window_ParamLimits

0x9041,	// (0x00027cd4) popup_cale_preview_window

0xa5df,	// (0x00029272) bg_popup_preview_window_pane_cp05_ParamLimits

0xa5df,	// (0x00029272) bg_popup_preview_window_pane_cp05

0xe9d4,	// (0x0002d667) list_cale_preview_pane_ParamLimits

0xe9d4,	// (0x0002d667) list_cale_preview_pane

0x905c,	// (0x00027cef) list_double_cale_preview_pane_ParamLimits

0x905c,	// (0x00027cef) list_double_cale_preview_pane

0x9070,	// (0x00027d03) list_single_cale_preview_pane_ParamLimits

0x9070,	// (0x00027d03) list_single_cale_preview_pane

0x9088,	// (0x00027d1b) list_single_cale_preview_pane_g1

0x9090,	// (0x00027d23) list_single_cale_preview_pane_t1_ParamLimits

0x9090,	// (0x00027d23) list_single_cale_preview_pane_t1

0x90a5,	// (0x00027d38) list_double_cale_preview_pane_g1

0x90ad,	// (0x00027d40) list_double_cale_preview_pane_t1_ParamLimits

0x90ad,	// (0x00027d40) list_double_cale_preview_pane_t1

0x90c2,	// (0x00027d55) list_double_cale_preview_pane_t2_ParamLimits

0x90c2,	// (0x00027d55) list_double_cale_preview_pane_t2

0x0001,

0xfe17,	// (0x0002eaaa) list_double_cale_preview_pane_t_ParamLimits

0xfe17,	// (0x0002eaaa) list_double_cale_preview_pane_t

0x9bfe,	// (0x00028891) main_ezdial_pane

0xa5df,	// (0x00029272) main_sp_fs_email_pane_ParamLimits

0x86bf,	// (0x00027352) cmail_ddmenu_btn01_pane_ParamLimits

0x86bf,	// (0x00027352) cmail_ddmenu_btn01_pane

0x86dc,	// (0x0002736f) cmail_ddmenu_btn02_pane_ParamLimits

0x86dc,	// (0x0002736f) cmail_ddmenu_btn02_pane

0x86fa,	// (0x0002738d) cmail_ddmenu_btn03_pane_ParamLimits

0x86fa,	// (0x0002738d) cmail_ddmenu_btn03_pane

0x872a,	// (0x000273bd) main_sp_fs_ctrlbar_pane_ParamLimits

0x8744,	// (0x000273d7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cbc,	// (0x0002794f) list_cmail_body_pane_ParamLimits

0xe60e,	// (0x0002d2a1) bg_button_pane_cp12

0xe623,	// (0x0002d2b6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe623,	// (0x0002d2b6) list_single_cmail_header_detail_pane_g3

0xe630,	// (0x0002d2c3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe630,	// (0x0002d2c3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9a,	// (0x0002ea2d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9a,	// (0x0002ea2d) list_single_cmail_header_detail_pane_t

0xe726,	// (0x0002d3b9) phacti_term_pane_t2_ParamLimits

0xe726,	// (0x0002d3b9) phacti_term_pane_t2

0x0001,

0xfda4,	// (0x0002ea37) phacti_term_pane_t_ParamLimits

0xfda4,	// (0x0002ea37) phacti_term_pane_t

0xe9e0,	// (0x0002d673) aid_size_list_single_double

0x90da,	// (0x00027d6d) popup_ezdial_listscroll_window

0x90fc,	// (0x00027d8f) popup_number_entry_window_cp01

0xae96,	// (0x00029b29) bg_popup_call_pane_cp09

0xe9ec,	// (0x0002d67f) ezdial_list_pane

0xe9f4,	// (0x0002d687) scroll_pane_cp23

0xc547,	// (0x0002b1da) bg_button_pane_cp028_ParamLimits

0xc547,	// (0x0002b1da) bg_button_pane_cp028

0x910a,	// (0x00027d9d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x910a,	// (0x00027d9d) cmail_ddmenu_btn01_pane_g1

0x911c,	// (0x00027daf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x911c,	// (0x00027daf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1c,	// (0x0002eaaf) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1c,	// (0x0002eaaf) cmail_ddmenu_btn01_pane_g

0xe9fc,	// (0x0002d68f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9fc,	// (0x0002d68f) cmail_ddmenu_btn01_pane_t1

0xc317,	// (0x0002afaa) bg_button_pane_cp029_ParamLimits

0xc317,	// (0x0002afaa) bg_button_pane_cp029

0x9128,	// (0x00027dbb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9128,	// (0x00027dbb) cmail_ddmenu_btn02_pane_g1

0x9140,	// (0x00027dd3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9140,	// (0x00027dd3) cmail_ddmenu_btn02_pane_t1

0x2328,	// (0x00020fbb) bg_button_pane_cp031_ParamLimits

0x2328,	// (0x00020fbb) bg_button_pane_cp031

0x9128,	// (0x00027dbb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9128,	// (0x00027dbb) cmail_ddmenu_btn03_pane_g1

0x9140,	// (0x00027dd3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9140,	// (0x00027dd3) cmail_ddmenu_btn03_pane_t1

0x69cc,	// (0x0002565f) cell_dialer2_keypad_pane_t1_ParamLimits

0x69e6,	// (0x00025679) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x69e6,	// (0x00025679) cell_dialer2_keypad_pane_t1_copy1

0x7fde,	// (0x00026c71) ncimui_group_button_pane

0xa5df,	// (0x00029272) main_sp_fs_calendar_pane_ParamLimits

0x8cd5,	// (0x00027968) list_single_cmail_header_caption_pane_ParamLimits

0xe771,	// (0x0002d404) aid_recal_txt_sm_pane

0x9bfe,	// (0x00028891) mian_recal_day_pane

0xe7b3,	// (0x0002d446) popup_sp_fs_cale_preview_window_ParamLimits

0xea12,	// (0x0002d6a5) list_recal_day_pane

0xea55,	// (0x0002d6e8) list_single_recal_day_pane_ParamLimits

0xea55,	// (0x0002d6e8) list_single_recal_day_pane

0xea67,	// (0x0002d6fa) list_single_recal_day_pane_g1_ParamLimits

0xea67,	// (0x0002d6fa) list_single_recal_day_pane_g1

0xea73,	// (0x0002d706) list_single_recal_day_pane_g2_ParamLimits

0xea73,	// (0x0002d706) list_single_recal_day_pane_g2

0xea7f,	// (0x0002d712) list_single_recal_day_pane_g3_ParamLimits

0xea7f,	// (0x0002d712) list_single_recal_day_pane_g3

0x9164,	// (0x00027df7) list_single_recal_day_pane_g4_ParamLimits

0x9164,	// (0x00027df7) list_single_recal_day_pane_g4

0xea8b,	// (0x0002d71e) list_single_recal_day_pane_g5_ParamLimits

0xea8b,	// (0x0002d71e) list_single_recal_day_pane_g5

0xea97,	// (0x0002d72a) list_single_recal_day_pane_g6_ParamLimits

0xea97,	// (0x0002d72a) list_single_recal_day_pane_g6

0x0004,

0xfe2b,	// (0x0002eabe) list_single_recal_day_pane_g_ParamLimits

0xfe2b,	// (0x0002eabe) list_single_recal_day_pane_g

0xeaab,	// (0x0002d73e) list_single_recal_day_pane_t1

0xeabd,	// (0x0002d750) list_single_recal_day_pane_t2

0x0001,

0xfe36,	// (0x0002eac9) list_single_recal_day_pane_t

0x917c,	// (0x00027e0f) ncimui_query_button_pane_ParamLimits

0x917c,	// (0x00027e0f) ncimui_query_button_pane

0x918c,	// (0x00027e1f) ncimui_query_button_pane_t1_ParamLimits

0x918c,	// (0x00027e1f) ncimui_query_button_pane_t1

0xeacf,	// (0x0002d762) ncimui_query_button_pane_t2_ParamLimits

0xeacf,	// (0x0002d762) ncimui_query_button_pane_t2

0x0001,

0xfe3b,	// (0x0002eace) ncimui_query_button_pane_t_ParamLimits

0xfe3b,	// (0x0002eace) ncimui_query_button_pane_t

0x919f,	// (0x00027e32) query_button_pane_ParamLimits

0x919f,	// (0x00027e32) query_button_pane

0x9bfe,	// (0x00028891) bg_button_pane_cp0028

0xeae2,	// (0x0002d775) query_button_pane_t1

0x5444,	// (0x000240d7) main_tport_pane_ParamLimits

0x8bbe,	// (0x00027851) bg_popup_window_pane_cp01_ParamLimits

0x8bbe,	// (0x00027851) bg_popup_window_pane_cp01

0x8bcc,	// (0x0002785f) heading_pane_cp08_ParamLimits

0x8bcc,	// (0x0002785f) heading_pane_cp08

0x8bda,	// (0x0002786d) heading_pane_cp07_ParamLimits

0x8bda,	// (0x0002786d) heading_pane_cp07

0x8c4b,	// (0x000278de) cell_tport_appsw_pane_g2

0x0002,

0xfd87,	// (0x0002ea1a) cell_tport_appsw_pane_g

0xb013,	// (0x00029ca6) input_candi_list_open_g1

0xa97d,	// (0x00029610) list_cale_time_pane_g6_ParamLimits

0xa97d,	// (0x00029610) list_cale_time_pane_g6

0x5bdd,	// (0x00024870) aid_size_touch_calib_1_ParamLimits

0x5bdd,	// (0x00024870) aid_size_touch_calib_1

0x5be9,	// (0x0002487c) aid_size_touch_calib_2_ParamLimits

0x5be9,	// (0x0002487c) aid_size_touch_calib_2

0x5bf7,	// (0x0002488a) aid_size_touch_calib_3_ParamLimits

0x5bf7,	// (0x0002488a) aid_size_touch_calib_3

0x5c07,	// (0x0002489a) aid_size_touch_calib_4_ParamLimits

0x5c07,	// (0x0002489a) aid_size_touch_calib_4

0x5c15,	// (0x000248a8) main_touch_calib_button_group_pane_ParamLimits

0x5c15,	// (0x000248a8) main_touch_calib_button_group_pane

0x5c23,	// (0x000248b6) main_touch_calib_pane_g1_ParamLimits

0x5c2f,	// (0x000248c2) main_touch_calib_pane_g2_ParamLimits

0x5c3b,	// (0x000248ce) main_touch_calib_pane_g3_ParamLimits

0x5c47,	// (0x000248da) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002e3e4) main_touch_calib_pane_g_ParamLimits

0x5c53,	// (0x000248e6) main_touch_calib_pane_t1_ParamLimits

0x5c6a,	// (0x000248fd) main_touch_calib_pane_t2_ParamLimits

0x5c83,	// (0x00024916) main_touch_calib_pane_t3_ParamLimits

0x5c99,	// (0x0002492c) main_touch_calib_pane_t4_ParamLimits

0x5caf,	// (0x00024942) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002e3ed) main_touch_calib_pane_t_ParamLimits

0xcaa4,	// (0x0002b737) list_single_fp_cale_pane_g3_ParamLimits

0xcaa4,	// (0x0002b737) list_single_fp_cale_pane_g3

0x1a5c,	// (0x000206ef) bg_button_pane_cp012_ParamLimits

0x1a5c,	// (0x000206ef) bg_vkb2_func_pane_cp03_ParamLimits

0x1e80,	// (0x00020b13) cell_vitu2_function_top_pane_g1_ParamLimits

0x1a5c,	// (0x000206ef) bg_vkb2_func_pane_cp04_ParamLimits

0x7f64,	// (0x00026bf7) main_ncimui_button_group_pane_ParamLimits

0x7f64,	// (0x00026bf7) main_ncimui_button_group_pane

0x7fcc,	// (0x00026c5f) main_ncimui_pane_t3_ParamLimits

0x7fcc,	// (0x00026c5f) main_ncimui_pane_t3

0xe6d4,	// (0x0002d367) phacti_button_group_pane

0xe9e0,	// (0x0002d673) aid_size_list_single_double_ParamLimits

0x90da,	// (0x00027d6d) popup_ezdial_listscroll_window_ParamLimits

0x90fc,	// (0x00027d8f) popup_number_entry_window_cp01_ParamLimits

0x91ac,	// (0x00027e3f) phacti_button_pane_ParamLimits

0x91ac,	// (0x00027e3f) phacti_button_pane

0x9bfe,	// (0x00028891) bg_button_pane_cp14

0xeaf0,	// (0x0002d783) phacti_button_pane_t1

0x91bd,	// (0x00027e50) main_touch_calib_button_pane_ParamLimits

0x91bd,	// (0x00027e50) main_touch_calib_button_pane

0xa392,	// (0x00029025) bg_button_pane_cp18_ParamLimits

0xa392,	// (0x00029025) bg_button_pane_cp18

0xeafe,	// (0x0002d791) main_touch_calib_button_pane_t1_ParamLimits

0xeafe,	// (0x0002d791) main_touch_calib_button_pane_t1

0xeb14,	// (0x0002d7a7) main_touch_calib_button_pane_t2_ParamLimits

0xeb14,	// (0x0002d7a7) main_touch_calib_button_pane_t2

0x0001,

0xfe40,	// (0x0002ead3) main_touch_calib_button_pane_t_ParamLimits

0xfe40,	// (0x0002ead3) main_touch_calib_button_pane_t

0x9bfe,	// (0x00028891) cell_ncimui_button_pane

0x9bfe,	// (0x00028891) bg_button_pane_cp032

0xeb32,	// (0x0002d7c5) cell_ncimui_button_pane_t1

0x1771,	// (0x00020404) image3_infobar_pane_ParamLimits

0x1771,	// (0x00020404) image3_infobar_pane

0x8359,	// (0x00026fec) fs_bigclock_status_pane_ParamLimits

0x8359,	// (0x00026fec) fs_bigclock_status_pane

0x8366,	// (0x00026ff9) main_fs_bigclock_clock_pane_ParamLimits

0x8366,	// (0x00026ff9) main_fs_bigclock_clock_pane

0x8382,	// (0x00027015) main_fs_bigclock_indi_pane_ParamLimits

0x8382,	// (0x00027015) main_fs_bigclock_indi_pane

0x83b4,	// (0x00027047) main_fs_bigclock_swipe_pane_ParamLimits

0x83b4,	// (0x00027047) main_fs_bigclock_swipe_pane

0x9bfe,	// (0x00028891) main_fs_clock_dumped_data

0xe039,	// (0x0002cccc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe039,	// (0x0002cccc) list_single_fs_bigclock_indicator_pane_g1

0xe063,	// (0x0002ccf6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe063,	// (0x0002ccf6) list_single_fs_bigclock_indicator_pane_g2

0xe07d,	// (0x0002cd10) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe07d,	// (0x0002cd10) list_single_fs_bigclock_indicator_pane_g3

0xe097,	// (0x0002cd2a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe097,	// (0x0002cd2a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0002e900) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0002e900) list_single_fs_bigclock_indicator_pane_g

0xe0c2,	// (0x0002cd55) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0c2,	// (0x0002cd55) list_single_fs_bigclock_indicator_pane_t1

0xe0ea,	// (0x0002cd7d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0ea,	// (0x0002cd7d) list_single_fs_bigclock_indicator_pane_t2

0xe112,	// (0x0002cda5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe112,	// (0x0002cda5) list_single_fs_bigclock_indicator_pane_t3

0xe13a,	// (0x0002cdcd) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe13a,	// (0x0002cdcd) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0002e90b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0002e90b) list_single_fs_bigclock_indicator_pane_t

0xeb40,	// (0x0002d7d3) image3_infobar_fav_pane_ParamLimits

0xeb40,	// (0x0002d7d3) image3_infobar_fav_pane

0xeb50,	// (0x0002d7e3) image3_infobar_loc_pane_ParamLimits

0xeb50,	// (0x0002d7e3) image3_infobar_loc_pane

0xeb66,	// (0x0002d7f9) image3_infobar_time_pane_ParamLimits

0xeb66,	// (0x0002d7f9) image3_infobar_time_pane

0xc768,	// (0x0002b3fb) image3_infobar_time_pane_g1

0xeb76,	// (0x0002d809) image3_infobar_time_pane_t1

0xc768,	// (0x0002b3fb) image3_infobar_loc_pane_g1

0xeb84,	// (0x0002d817) image3_infobar_loc_pane_g2

0x0001,

0xfe45,	// (0x0002ead8) image3_infobar_loc_pane_g

0xeb8c,	// (0x0002d81f) image3_infobar_loc_pane_t1

0xc768,	// (0x0002b3fb) image3_infobar_fav_pane_g1

0xeb9a,	// (0x0002d82d) image3_infobar_fav_pane_g2

0x0001,

0xfe4a,	// (0x0002eadd) image3_infobar_fav_pane_g

0xeba2,	// (0x0002d835) fs_bigclock_status_battery_pane

0xebab,	// (0x0002d83e) fs_bigclock_status_signal_pane

0xebb4,	// (0x0002d847) fs_bigclock_status_title_pane

0xebbd,	// (0x0002d850) fs_bigclock_status_signal_pane_g1

0xebc6,	// (0x0002d859) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe4f,	// (0x0002eae2) fs_bigclock_status_signal_pane_g

0xebce,	// (0x0002d861) fs_bigclock_status_battery_pane_g1

0xebd7,	// (0x0002d86a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe54,	// (0x0002eae7) fs_bigclock_status_battery_pane_g

0xebdf,	// (0x0002d872) fs_bigclock_status_title_pane_t1

0xc768,	// (0x0002b3fb) main_fs_bigclock_clock_pane_g1

0xebed,	// (0x0002d880) main_fs_bigclock_clock_pane_g2

0xebf8,	// (0x0002d88b) main_fs_bigclock_clock_pane_g3

0xebf8,	// (0x0002d88b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe59,	// (0x0002eaec) main_fs_bigclock_clock_pane_g

0xec04,	// (0x0002d897) main_fs_bigclock_clock_pane_t1

0x91cd,	// (0x00027e60) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe62,	// (0x0002eaf5) main_fs_bigclock_clock_pane_t

0x91dc,	// (0x00027e6f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x91dc,	// (0x00027e6f) list_single_fs_bigclock_indicator_pane

0x91ed,	// (0x00027e80) list_single_fs_bigclock_pane_ParamLimits

0x91ed,	// (0x00027e80) list_single_fs_bigclock_pane

0xec1b,	// (0x0002d8ae) main_fs_bigclock_indicator_pane_t1

0xec2a,	// (0x0002d8bd) list_single_fs_bigclock_pane_g1

0xec32,	// (0x0002d8c5) list_single_fs_bigclock_pane_t1

0xc768,	// (0x0002b3fb) main_fs_bigclock_swipe_pane_g1

0xec75,	// (0x0002d908) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe73,	// (0x0002eb06) main_fs_bigclock_swipe_pane_g

0xec7d,	// (0x0002d910) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec7d,	// (0x0002d910) main_fs_bigclock_swipe_pane_t1

0x43cb,	// (0x0002305e) call_type_pane_ParamLimits

0x9bfe,	// (0x00028891) main_btmg_pane

0xe8b9,	// (0x0002d54c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8b9,	// (0x0002d54c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde6,	// (0x0002ea79) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde6,	// (0x0002ea79) list_single_cale_mrui_row_pane_g

0xea3b,	// (0x0002d6ce) list_recal_vselct_arw_lo_pane

0xea43,	// (0x0002d6d6) list_recal_vselct_arw_up_pane

0xea4b,	// (0x0002d6de) list_recal_vselct_pane

0x9243,	// (0x00027ed6) btmg_button_pane

0x924f,	// (0x00027ee2) main_btmg_pane_g1

0x9bfe,	// (0x00028891) bg_button_pane_cp044

0xec9a,	// (0x0002d92d) btmg_button_pane_t1

0xc303,	// (0x0002af96) aid_listscroll_gen

0xa5df,	// (0x00029272) main_cntbar_detail_pane

0xe5ef,	// (0x0002d282) list_cmail_folder_pane

0xe5ff,	// (0x0002d292) sp_fs_scroll_pane_cp03_ParamLimits

0x9257,	// (0x00027eea) list_single_fs_dyc_pane_cp01_ParamLimits

0x9257,	// (0x00027eea) list_single_fs_dyc_pane_cp01

0xeca8,	// (0x0002d93b) aid_size_cmail_indent

0xecb1,	// (0x0002d944) list_single_dyc_row_pane_cp01

0x9295,	// (0x00027f28) cntbar_detail_list_pane_ParamLimits

0x9295,	// (0x00027f28) cntbar_detail_list_pane

0x92d5,	// (0x00027f68) main_cntbar_detail_cont_pane_ParamLimits

0x92d5,	// (0x00027f68) main_cntbar_detail_cont_pane

0x42e2,	// (0x00022f75) scroll_pane_cp032_ParamLimits

0x42e2,	// (0x00022f75) scroll_pane_cp032

0x92e1,	// (0x00027f74) cntbar_detail_list_event_pane_ParamLimits

0x92e1,	// (0x00027f74) cntbar_detail_list_event_pane

0x92a3,	// (0x00027f36) cntbar_detail_list_shct_pane

0xa817,	// (0x000294aa) aid_list_gen

0xecba,	// (0x0002d94d) aid_scroll

0xecc3,	// (0x0002d956) aid_size_touch_scroll_bar

0x7780,	// (0x00026413) aid_list_double

0xeccc,	// (0x0002d95f) aid_list_single

0x776e,	// (0x00026401) aid_list_single_lg

0xecd5,	// (0x0002d968) aid_list_z_g_a_sm

0xecdd,	// (0x0002d970) aid_list_z_g_d

0xece5,	// (0x0002d978) aid_txt_z_prm

0x92f1,	// (0x00027f84) aid_txt_z_prm_cp01

0x92ff,	// (0x00027f92) aid_txt_z_sec

0x930d,	// (0x00027fa0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x930d,	// (0x00027fa0) main_cntbar_detail_cont_pane_g1

0x931a,	// (0x00027fad) main_cntbar_detail_cont_pane_g2_ParamLimits

0x931a,	// (0x00027fad) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe78,	// (0x0002eb0b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe78,	// (0x0002eb0b) main_cntbar_detail_cont_pane_g

0xecf3,	// (0x0002d986) main_cntbar_detail_cont_pane_t1

0xed01,	// (0x0002d994) main_cntbar_detail_cont_pane_t2

0xed0f,	// (0x0002d9a2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe7d,	// (0x0002eb10) main_cntbar_detail_cont_pane_t

0x9326,	// (0x00027fb9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9326,	// (0x00027fb9) cell_cntbar_detail_list_shct_pane

0xed1d,	// (0x0002d9b0) cntbar_detail_list_shct_pane_g1

0xed26,	// (0x0002d9b9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe84,	// (0x0002eb17) cntbar_detail_list_shct_pane_g

0x933a,	// (0x00027fcd) cntbar_detail_list_event_pane_g1_ParamLimits

0x933a,	// (0x00027fcd) cntbar_detail_list_event_pane_g1

0x9346,	// (0x00027fd9) cntbar_detail_list_event_pane_g2_ParamLimits

0x9346,	// (0x00027fd9) cntbar_detail_list_event_pane_g2

0x0005,

0xfe89,	// (0x0002eb1c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe89,	// (0x0002eb1c) cntbar_detail_list_event_pane_g

0x93b4,	// (0x00028047) cntbar_detail_list_event_pane_t1_ParamLimits

0x93b4,	// (0x00028047) cntbar_detail_list_event_pane_t1

0x93c9,	// (0x0002805c) cntbar_detail_list_event_pane_t2_ParamLimits

0x93c9,	// (0x0002805c) cntbar_detail_list_event_pane_t2

0x0002,

0xfe96,	// (0x0002eb29) cntbar_detail_list_event_pane_t_ParamLimits

0xfe96,	// (0x0002eb29) cntbar_detail_list_event_pane_t

0xc768,	// (0x0002b3fb) cell_cntbar_detail_list_shct_pane_g1

0x472f,	// (0x000233c2) navi_pane_mv_g3

0xa5df,	// (0x00029272) main_cntbar_detail_pane_ParamLimits

0x9bfe,	// (0x00028891) main_notif_wgt_pane

0x14a8,	// (0x0002013b) aid_tch_main_mp4_pane_g4

0x16e7,	// (0x0002037a) popup_slider_window_cp02

0xea31,	// (0x0002d6c4) list_recal_day_event_pane

0x9275,	// (0x00027f08) cntbar_detail_btn_pane_ParamLimits

0x9275,	// (0x00027f08) cntbar_detail_btn_pane

0x9285,	// (0x00027f18) cntbar_detail_btn_pane_cp01_ParamLimits

0x9285,	// (0x00027f18) cntbar_detail_btn_pane_cp01

0x92a3,	// (0x00027f36) cntbar_detail_list_shct_pane_ParamLimits

0x92af,	// (0x00027f42) cntbar_detail_pane_g1_ParamLimits

0x92af,	// (0x00027f42) cntbar_detail_pane_g1

0x92bf,	// (0x00027f52) cntbar_detail_pane_t1_ParamLimits

0x92bf,	// (0x00027f52) cntbar_detail_pane_t1

0x9352,	// (0x00027fe5) cntbar_detail_list_event_pane_g3_ParamLimits

0x9352,	// (0x00027fe5) cntbar_detail_list_event_pane_g3

0x936a,	// (0x00027ffd) cntbar_detail_list_event_pane_g4_ParamLimits

0x936a,	// (0x00027ffd) cntbar_detail_list_event_pane_g4

0x9382,	// (0x00028015) cntbar_detail_list_event_pane_g5_ParamLimits

0x9382,	// (0x00028015) cntbar_detail_list_event_pane_g5

0x939a,	// (0x0002802d) cntbar_detail_list_event_pane_g6_ParamLimits

0x939a,	// (0x0002802d) cntbar_detail_list_event_pane_g6

0x93de,	// (0x00028071) cntbar_detail_list_event_pane_t3_ParamLimits

0x93de,	// (0x00028071) cntbar_detail_list_event_pane_t3

0x93f0,	// (0x00028083) popup_notif_wgt_window_ParamLimits

0x93f0,	// (0x00028083) popup_notif_wgt_window

0x9400,	// (0x00028093) popup_submenu_window_cp01_ParamLimits

0x9400,	// (0x00028093) popup_submenu_window_cp01

0xae96,	// (0x00029b29) bg_popup_window_pane_cp10

0xed2f,	// (0x0002d9c2) listscroll_notif_wgt_pane

0xed41,	// (0x0002d9d4) list_notif_wgt_window

0xed4a,	// (0x0002d9dd) scroll_pane_cp033

0x9410,	// (0x000280a3) list_notif_wgt_row_pane_ParamLimits

0x9410,	// (0x000280a3) list_notif_wgt_row_pane

0xed53,	// (0x0002d9e6) aid_size_list_notif_wgt_del

0xed60,	// (0x0002d9f3) list_notif_wgt_row_pane_g1

0xed6c,	// (0x0002d9ff) list_notif_wgt_row_pane_g2

0xed80,	// (0x0002da13) list_notif_wgt_row_pane_g3

0x0002,

0xfe9d,	// (0x0002eb30) list_notif_wgt_row_pane_g

0xed8d,	// (0x0002da20) list_notif_wgt_row_pane_t1

0xeda3,	// (0x0002da36) list_notif_wgt_row_pane_t2

0xedb5,	// (0x0002da48) list_notif_wgt_row_pane_t3

0x0002,

0xfea4,	// (0x0002eb37) list_notif_wgt_row_pane_t

0xd452,	// (0x0002c0e5) list_recal_day_event_pane_g1

0xedc7,	// (0x0002da5a) list_recal_day_event_pane_t1

0x9bfe,	// (0x00028891) bg_button_pane_cp045

0xedd6,	// (0x0002da69) cntbar_detail_btn_pane_t1

0xc317,	// (0x0002afaa) main_callh_pane_ParamLimits

0xc317,	// (0x0002afaa) main_callh_pane

0x9bfe,	// (0x00028891) main_coverflow0_pane

0x9bfe,	// (0x00028891) main_wgtman_pane

0x83cc,	// (0x0002705f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83cc,	// (0x0002705f) main_fs_bigclock_unlock_btn_pane

0x8c43,	// (0x000278d6) bg_button_pane_cp16

0x8c53,	// (0x000278e6) cell_tport_appsw_pane_g3

0x9421,	// (0x000280b4) cf0_flow_pane_ParamLimits

0x9421,	// (0x000280b4) cf0_flow_pane

0xede4,	// (0x0002da77) listscroll_cf0_pane

0xedef,	// (0x0002da82) main_cf0_pane_g1

0x9430,	// (0x000280c3) main_cf0_pane_t1_ParamLimits

0x9430,	// (0x000280c3) main_cf0_pane_t1

0x9444,	// (0x000280d7) main_cf0_pane_t2_ParamLimits

0x9444,	// (0x000280d7) main_cf0_pane_t2

0x0001,

0xfeb0,	// (0x0002eb43) main_cf0_pane_t_ParamLimits

0xfeb0,	// (0x0002eb43) main_cf0_pane_t

0xee01,	// (0x0002da94) scroll_pane_cp11

0x9458,	// (0x000280eb) cf0_flow_pane_g1

0x9460,	// (0x000280f3) cf0_flow_pane_g2

0x0001,

0xfeb5,	// (0x0002eb48) cf0_flow_pane_g

0x9468,	// (0x000280fb) cf0_flow_pane_t1

0x9bfe,	// (0x00028891) main_call6_pane

0x9bfe,	// (0x00028891) main_calllock_pane

0x9476,	// (0x00028109) call6_btn_grp_pane_ParamLimits

0x9476,	// (0x00028109) call6_btn_grp_pane

0x9483,	// (0x00028116) call6_pane_g1_ParamLimits

0x9483,	// (0x00028116) call6_pane_g1

0x9493,	// (0x00028126) popup_call6_1st_window_ParamLimits

0x9493,	// (0x00028126) popup_call6_1st_window

0x94a1,	// (0x00028134) popup_call6_2nd_window_ParamLimits

0x94a1,	// (0x00028134) popup_call6_2nd_window

0x94af,	// (0x00028142) cell_call6_btn_pane_ParamLimits

0x94af,	// (0x00028142) cell_call6_btn_pane

0xae96,	// (0x00029b29) bg_popup_call2_in_pane_cp03

0xee0c,	// (0x0002da9f) popup_call6_1st_window_g1

0xee14,	// (0x0002daa7) popup_call6_1st_window_g2

0xee1c,	// (0x0002daaf) popup_call6_1st_window_g3

0x0002,

0xfeba,	// (0x0002eb4d) popup_call6_1st_window_g

0xee24,	// (0x0002dab7) popup_call6_1st_window_t1

0xee33,	// (0x0002dac6) popup_call6_1st_window_t2

0xee43,	// (0x0002dad6) popup_call6_1st_window_t3

0x0002,

0xfec1,	// (0x0002eb54) popup_call6_1st_window_t

0xae96,	// (0x00029b29) bg_popup_call2_in_pane_cp04

0xee0c,	// (0x0002da9f) popup_call6_2nd_window_g1

0xee14,	// (0x0002daa7) popup_call6_2nd_window_g2

0xee1c,	// (0x0002daaf) popup_call6_2nd_window_g3

0x0002,

0xfeba,	// (0x0002eb4d) popup_call6_2nd_window_g

0xee24,	// (0x0002dab7) popup_call6_2nd_window_t1

0x9bfe,	// (0x00028891) bg_button_pane_cp15

0xee53,	// (0x0002dae6) cell_call6_btn_pane_g1

0xee5c,	// (0x0002daef) cell_call6_btn_pane_t1

0x94be,	// (0x00028151) listscroll_wgtman_pane_ParamLimits

0x94be,	// (0x00028151) listscroll_wgtman_pane

0x94da,	// (0x0002816d) wgtman_btn_pane_ParamLimits

0x94da,	// (0x0002816d) wgtman_btn_pane

0xad5c,	// (0x000299ef) aid_scroll_copy1

0xee6b,	// (0x0002dafe) list_wgtman_pane

0x950f,	// (0x000281a2) wgtman_btn_pane_g1_ParamLimits

0x950f,	// (0x000281a2) wgtman_btn_pane_g1

0x9537,	// (0x000281ca) wgtman_btn_pane_t1_ParamLimits

0x9537,	// (0x000281ca) wgtman_btn_pane_t1

0xee75,	// (0x0002db08) wgtman_btn_pane_t2_ParamLimits

0xee75,	// (0x0002db08) wgtman_btn_pane_t2

0x0001,

0xfec8,	// (0x0002eb5b) wgtman_btn_pane_t_ParamLimits

0xfec8,	// (0x0002eb5b) wgtman_btn_pane_t

0x956e,	// (0x00028201) listrow_wgtman_pane_ParamLimits

0x956e,	// (0x00028201) listrow_wgtman_pane

0x9582,	// (0x00028215) listrow_wgtman_pane_g1

0x958f,	// (0x00028222) listrow_wgtman_pane_g2

0x0001,

0xfecd,	// (0x0002eb60) listrow_wgtman_pane_g

0x95ad,	// (0x00028240) listrow_wgtman_pane_t1

0x95c5,	// (0x00028258) listrow_wgtman_pane_t2

0x0001,

0xfed2,	// (0x0002eb65) listrow_wgtman_pane_t

0x95eb,	// (0x0002827e) wait_bar_pane_cp09

0xee8c,	// (0x0002db1f) main_calllock_btn_pane

0xee96,	// (0x0002db29) main_calllock_pane_g1

0x9bfe,	// (0x00028891) bg_button_pane_cp17

0xeea2,	// (0x0002db35) main_calllock_btn_pane_g1

0xeeab,	// (0x0002db3e) main_calllock_btn_pane_t1

0x9bfe,	// (0x00028891) main_dialer3_pane

0x9bfe,	// (0x00028891) main_fmrd2_pane

0xc768,	// (0x0002b3fb) main_fs_bigclock_unlock_btn_pane_g1

0xeec2,	// (0x0002db55) main_fs_bigclock_unlock_btn_pane_t1

0x95fd,	// (0x00028290) area_fmrd2_info_pane_ParamLimits

0x95fd,	// (0x00028290) area_fmrd2_info_pane

0x9609,	// (0x0002829c) area_fmrd2_visual_pane_ParamLimits

0x9609,	// (0x0002829c) area_fmrd2_visual_pane

0x9617,	// (0x000282aa) fmrd2_indi_pane_ParamLimits

0x9617,	// (0x000282aa) fmrd2_indi_pane

0x9624,	// (0x000282b7) area_fmrd2_visual_pane_g1

0x962c,	// (0x000282bf) area_fmrd2_visual_pane_t1

0x963c,	// (0x000282cf) area_fmrd2_visual_pane_t2

0x964c,	// (0x000282df) area_fmrd2_visual_pane_t3

0x0002,

0xfedc,	// (0x0002eb6f) area_fmrd2_visual_pane_t

0x965c,	// (0x000282ef) area_fmrd2_info_pane_g1

0x9664,	// (0x000282f7) area_fmrd2_info_pane_t1

0x9674,	// (0x00028307) area_fmrd2_info_pane_t2

0x9684,	// (0x00028317) area_fmrd2_info_pane_t3

0x9694,	// (0x00028327) area_fmrd2_info_pane_t4

0x0003,

0xfee3,	// (0x0002eb76) area_fmrd2_info_pane_t

0x96a4,	// (0x00028337) fmrd2_indi_pane_t1

0x96b4,	// (0x00028347) fmrd2_indi_pane_t2

0x96c4,	// (0x00028357) fmrd2_indi_pane_t3

0x0002,

0xfeec,	// (0x0002eb7f) fmrd2_indi_pane_t

0xe0a6,	// (0x0002cd39) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0a6,	// (0x0002cd39) list_single_fs_bigclock_indicator_pane_g5

0xe156,	// (0x0002cde9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe156,	// (0x0002cde9) list_single_fs_bigclock_indicator_pane_t5

0x8e4e,	// (0x00027ae1) aid_cell_bcale_month_pane_ParamLimits

0x8e4e,	// (0x00027ae1) aid_cell_bcale_month_pane

0x8e6c,	// (0x00027aff) bcale_month_pane_ParamLimits

0x8e6c,	// (0x00027aff) bcale_month_pane

0x8e88,	// (0x00027b1b) bcale_preview_pane_ParamLimits

0x8e88,	// (0x00027b1b) bcale_preview_pane

0xec32,	// (0x0002d8c5) list_single_fs_bigclock_pane_t1_ParamLimits

0xec51,	// (0x0002d8e4) list_single_fs_bigclock_pane_t2_ParamLimits

0xec51,	// (0x0002d8e4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe6e,	// (0x0002eb01) list_single_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002eb01) list_single_fs_bigclock_pane_t

0xeeba,	// (0x0002db4d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed7,	// (0x0002eb6a) main_fs_bigclock_unlock_btn_pane_g

0x96d4,	// (0x00028367) aid_dia3_key_size_ParamLimits

0x96d4,	// (0x00028367) aid_dia3_key_size

0x96e0,	// (0x00028373) aid_dia3_listrow_size_ParamLimits

0x96e0,	// (0x00028373) aid_dia3_listrow_size

0x96f0,	// (0x00028383) dia3_keypad_fun_pane_ParamLimits

0x96f0,	// (0x00028383) dia3_keypad_fun_pane

0x9700,	// (0x00028393) dia3_keypad_num_pane_ParamLimits

0x9700,	// (0x00028393) dia3_keypad_num_pane

0x9710,	// (0x000283a3) dia3_listscroll_pane_ParamLimits

0x9710,	// (0x000283a3) dia3_listscroll_pane

0x971e,	// (0x000283b1) dia3_numentry_pane_ParamLimits

0x971e,	// (0x000283b1) dia3_numentry_pane

0xeed0,	// (0x0002db63) dia3_list_pane

0xeedb,	// (0x0002db6e) scroll_pane_cp12

0x9bfe,	// (0x00028891) bg_dia3_numentry_pane

0x972c,	// (0x000283bf) dia3_numentry_pane_t1

0x973b,	// (0x000283ce) cell_dia3_key_num_pane

0x9743,	// (0x000283d6) cell_dia3_key0_fun_pane_ParamLimits

0x9743,	// (0x000283d6) cell_dia3_key0_fun_pane

0x9750,	// (0x000283e3) cell_dia3_key1_fun_pane_ParamLimits

0x9750,	// (0x000283e3) cell_dia3_key1_fun_pane

0x975d,	// (0x000283f0) dia3_listrow_pane

0xdda4,	// (0x0002ca37) bg_dia3_numentry_pane_g1

0x9bfe,	// (0x00028891) bg_button_pane_cp21

0xeee6,	// (0x0002db79) cell_dia3_key_num_pane_t1

0xeef4,	// (0x0002db87) cell_dia3_key_num_pane_t2

0xef03,	// (0x0002db96) cell_dia3_key_num_pane_t3

0xef12,	// (0x0002dba5) cell_dia3_key_num_pane_t4

0x0003,

0xfef3,	// (0x0002eb86) cell_dia3_key_num_pane_t

0x9bfe,	// (0x00028891) bg_button_pane_cp19

0x976a,	// (0x000283fd) cell_dia3_key0_fun_pane_g1

0x9bfe,	// (0x00028891) bg_button_pane_cp20

0x9772,	// (0x00028405) cell_dia3_key1_fun_pane_g1

0x977a,	// (0x0002840d) area_left_week_number_pane

0x978d,	// (0x00028420) area_top_day_name_pane

0x979b,	// (0x0002842e) frame_month_view_pane

0xef21,	// (0x0002dbb4) grid_month_view_pane

0x97b0,	// (0x00028443) cell_top_day_name_pane_ParamLimits

0x97b0,	// (0x00028443) cell_top_day_name_pane

0x97cc,	// (0x0002845f) cell_area_left_week_number_pane_ParamLimits

0x97cc,	// (0x0002845f) cell_area_left_week_number_pane

0x97ed,	// (0x00028480) cell_month_view_pane_ParamLimits

0x97ed,	// (0x00028480) cell_month_view_pane

0xef2f,	// (0x0002dbc2) frm_month_g1

0x9819,	// (0x000284ac) frm_month_g2

0x982a,	// (0x000284bd) frm_month_g3

0x983b,	// (0x000284ce) frm_month_g4

0x984c,	// (0x000284df) frm_month_g5

0x985d,	// (0x000284f0) frm_month_g6

0x9870,	// (0x00028503) frm_month_g7

0xef3c,	// (0x0002dbcf) frm_month_g8

0x9883,	// (0x00028516) frm_month_g9

0x9890,	// (0x00028523) frm_month_g10

0x989d,	// (0x00028530) frm_month_g11

0x98aa,	// (0x0002853d) frm_month_g12

0x98b7,	// (0x0002854a) frm_month_g13

0x98c6,	// (0x00028559) frm_month_g14

0x98d5,	// (0x00028568) frm_month_g15

0x98e4,	// (0x00028577) frm_month_g16

0x000f,

0xfefc,	// (0x0002eb8f) frm_month_g

0xef49,	// (0x0002dbdc) cell_top_day_name_pane_t1

0x98f3,	// (0x00028586) cell_area_left_week_number_pane_g1

0x9902,	// (0x00028595) cell_area_left_week_number_pane_t1

0xc998,	// (0x0002b62b) cell_month_view_pane_g1

0x9918,	// (0x000285ab) cell_month_view_pane_t1

0x9bfe,	// (0x00028891) main_fps_pane

0xe379,	// (0x0002d00c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe379,	// (0x0002d00c) cmail_ddmenu_btn02_pane_cp1

0xe395,	// (0x0002d028) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe395,	// (0x0002d028) cmail_ddmenu_btn02_pane_cp2

0x9134,	// (0x00027dc7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9134,	// (0x00027dc7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe21,	// (0x0002eab4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe21,	// (0x0002eab4) cmail_ddmenu_btn02_pane_g

0x9152,	// (0x00027de5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9152,	// (0x00027de5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe26,	// (0x0002eab9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe26,	// (0x0002eab9) cmail_ddmenu_btn02_pane_t

0x992e,	// (0x000285c1) fps_text_pane_ParamLimits

0x992e,	// (0x000285c1) fps_text_pane

0x993b,	// (0x000285ce) main_fps_pane_g1_ParamLimits

0x993b,	// (0x000285ce) main_fps_pane_g1

0x9947,	// (0x000285da) wait_bar_pane_cp010_ParamLimits

0x9947,	// (0x000285da) wait_bar_pane_cp010

0x9953,	// (0x000285e6) fps_text_pane_t1_ParamLimits

0x9953,	// (0x000285e6) fps_text_pane_t1

0x6b21,	// (0x000257b4) cam4_image_uncrop_pane_g1

0x6b2a,	// (0x000257bd) cam4_image_uncrop_pane_g2

0x6b33,	// (0x000257c6) cam4_image_uncrop_pane_g3

0x6b3c,	// (0x000257cf) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002e581) cam4_image_uncrop_pane_g

0x975d,	// (0x000283f0) dia3_listrow_pane_ParamLimits

0x9bfe,	// (0x00028891) main_phob2_pane

0x8c25,	// (0x000278b8) cell_tport_appsw_pane_cp02_ParamLimits

0x8c25,	// (0x000278b8) cell_tport_appsw_pane_cp02

0x8c34,	// (0x000278c7) cell_tport_appsw_pane_cp03_ParamLimits

0x8c34,	// (0x000278c7) cell_tport_appsw_pane_cp03

0x9bfe,	// (0x00028891) phob2_contact_card_pane

0x9bfe,	// (0x00028891) phob2_listscroll_pane

0xef5c,	// (0x0002dbef) phob2_list_pane

0xef64,	// (0x0002dbf7) scroll_pane_cp034

0x996c,	// (0x000285ff) phob2_cc_data_pane_ParamLimits

0x996c,	// (0x000285ff) phob2_cc_data_pane

0x9988,	// (0x0002861b) phob2_cc_listscroll_pane_ParamLimits

0x9988,	// (0x0002861b) phob2_cc_listscroll_pane

0x99a4,	// (0x00028637) list_double_large_graphic_phob2_pane_ParamLimits

0x99a4,	// (0x00028637) list_double_large_graphic_phob2_pane

0x99bc,	// (0x0002864f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99bc,	// (0x0002864f) list_double_large_graphic_phob2_pane_g1

0x99d2,	// (0x00028665) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99d2,	// (0x00028665) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1d,	// (0x0002ebb0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1d,	// (0x0002ebb0) list_double_large_graphic_phob2_pane_g

0x99de,	// (0x00028671) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99de,	// (0x00028671) list_double_large_graphic_phob2_pane_t1

0x99f3,	// (0x00028686) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99f3,	// (0x00028686) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff22,	// (0x0002ebb5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff22,	// (0x0002ebb5) list_double_large_graphic_phob2_pane_t

0x9bfe,	// (0x00028891) list_highlight_pane_cp024

0x9a05,	// (0x00028698) phob2_cc_button_pane

0x9a0d,	// (0x000286a0) phob2_cc_data_pane_g1_ParamLimits

0x9a0d,	// (0x000286a0) phob2_cc_data_pane_g1

0x9a19,	// (0x000286ac) phob2_cc_data_pane_g2_ParamLimits

0x9a19,	// (0x000286ac) phob2_cc_data_pane_g2

0x0001,

0xff27,	// (0x0002ebba) phob2_cc_data_pane_g_ParamLimits

0xff27,	// (0x0002ebba) phob2_cc_data_pane_g

0x9a25,	// (0x000286b8) phob2_cc_data_pane_t1_ParamLimits

0x9a25,	// (0x000286b8) phob2_cc_data_pane_t1

0x9a37,	// (0x000286ca) phob2_cc_data_pane_t2_ParamLimits

0x9a37,	// (0x000286ca) phob2_cc_data_pane_t2

0x9a49,	// (0x000286dc) phob2_cc_data_pane_t3_ParamLimits

0x9a49,	// (0x000286dc) phob2_cc_data_pane_t3

0x0002,

0xff2c,	// (0x0002ebbf) phob2_cc_data_pane_t_ParamLimits

0xff2c,	// (0x0002ebbf) phob2_cc_data_pane_t

0xef6c,	// (0x0002dbff) phob2_cc_list_pane_ParamLimits

0xef6c,	// (0x0002dbff) phob2_cc_list_pane

0xd867,	// (0x0002c4fa) scroll_pane_cp035_ParamLimits

0xd867,	// (0x0002c4fa) scroll_pane_cp035

0xa5df,	// (0x00029272) bg_button_pane_cp033

0xef78,	// (0x0002dc0b) phob2_cc_button_pane_g1

0xef84,	// (0x0002dc17) phob2_cc_button_pane_t1

0xef99,	// (0x0002dc2c) phob2_cc_button_pane_t2

0x0001,

0xff33,	// (0x0002ebc6) phob2_cc_button_pane_t

0x9a5b,	// (0x000286ee) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a5b,	// (0x000286ee) list_double_large_graphic_phob2_cc_pane

0x9a77,	// (0x0002870a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a77,	// (0x0002870a) list_double_large_graphic_phob2_cc_pane_g1

0x9a88,	// (0x0002871b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a88,	// (0x0002871b) list_double_large_graphic_phob2_cc_pane_g2

0x9a97,	// (0x0002872a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a97,	// (0x0002872a) list_double_large_graphic_phob2_cc_pane_g3

0x9aa6,	// (0x00028739) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9aa6,	// (0x00028739) list_double_large_graphic_phob2_cc_pane_g4

0x9ab7,	// (0x0002874a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ab7,	// (0x0002874a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff38,	// (0x0002ebcb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff38,	// (0x0002ebcb) list_double_large_graphic_phob2_cc_pane_g

0x9ac6,	// (0x00028759) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ac6,	// (0x00028759) list_double_large_graphic_phob2_cc_pane_t1

0x9aef,	// (0x00028782) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9aef,	// (0x00028782) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff43,	// (0x0002ebd6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff43,	// (0x0002ebd6) list_double_large_graphic_phob2_cc_pane_t

0xefab,	// (0x0002dc3e) list_highlight_pane_cp025_ParamLimits

0xefab,	// (0x0002dc3e) list_highlight_pane_cp025

0xa5df,	// (0x00029272) bg_button_pane_cp033_ParamLimits

0xef78,	// (0x0002dc0b) phob2_cc_button_pane_g1_ParamLimits

0xef84,	// (0x0002dc17) phob2_cc_button_pane_t1_ParamLimits

0xef99,	// (0x0002dc2c) phob2_cc_button_pane_t2_ParamLimits

0xff33,	// (0x0002ebc6) phob2_cc_button_pane_t_ParamLimits

0x2336,	// (0x00020fc9) popup_wgtman_window

0xd324,	// (0x0002bfb7) scroll_pane_cp038

0x94f7,	// (0x0002818a) wgtman_btn_pane_cp_01_ParamLimits

0x94f7,	// (0x0002818a) wgtman_btn_pane_cp_01

0xefcd,	// (0x0002dc60) wgtman_content_pane

0xefd6,	// (0x0002dc69) wgtman_heading_pane

0x9bfe,	// (0x00028891) bg_heading_pane_cp02

0xefdf,	// (0x0002dc72) wgtman_heading_pane_g1

0xefe7,	// (0x0002dc7a) wgtman_heading_pane_t1

0xeff5,	// (0x0002dc88) scroll_pane_cp036

0xeffd,	// (0x0002dc90) wgtman_list_pane

0xf005,	// (0x0002dc98) wgtman_list_pane_t1_ParamLimits

0xf005,	// (0x0002dc98) wgtman_list_pane_t1

0x18cd,	// (0x00020560) cam4_grid_pane

0x72c9,	// (0x00025f5c) bg_button_pane_cp015_ParamLimits

0x72db,	// (0x00025f6e) bg_button_pane_cp016_ParamLimits

0x72ee,	// (0x00025f81) bg_button_pane_cp017_ParamLimits

0x7344,	// (0x00025fd7) popup_vitu2_query_window_g3_ParamLimits

0x7344,	// (0x00025fd7) popup_vitu2_query_window_g3

0x7403,	// (0x00026096) popup_vitu2_query_window_t6_ParamLimits

0x7403,	// (0x00026096) popup_vitu2_query_window_t6

0x742e,	// (0x000260c1) popup_vitu2_query_window_t7_ParamLimits

0x742e,	// (0x000260c1) popup_vitu2_query_window_t7

0xefb9,	// (0x0002dc4c) cam4_grid_pane_g1

0xefc2,	// (0x0002dc55) cam4_grid_pane_g2

0xf01f,	// (0x0002dcb2) cam4_grid_pane_g3

0xf028,	// (0x0002dcbb) cam4_grid_pane_g4

0x0003,

0xff48,	// (0x0002ebdb) cam4_grid_pane_g

0x3119,	// (0x00021dac) aid_placing_vt_slider_lsc_ParamLimits

0x344c,	// (0x000220df) vidtel_button_pane_ParamLimits

0x344c,	// (0x000220df) vidtel_button_pane

0xf033,	// (0x0002dcc6) bg_button_pane_cp034

0x9b18,	// (0x000287ab) vidtel_button_pane_g1

0xf03d,	// (0x0002dcd0) vidtel_button_pane_t1

0xd428,	// (0x0002c0bb) aid_size_vtel_slider_touch

0xd867,	// (0x0002c4fa) scroll_pane_cp039

0xdde2,	// (0x0002ca75) ncim_query_button_pane_cp01_ParamLimits

0xde01,	// (0x0002ca94) ncimui_query_pane_g1_ParamLimits

0xa5df,	// (0x00029272) input_focus_pane_cp012_ParamLimits

0xde26,	// (0x0002cab9) ncim_query_entry_pane_t1_ParamLimits

0xd867,	// (0x0002c4fa) scroll_pane_cp039_ParamLimits

0x46a1,	// (0x00023334) navi_pane_bcale_mc_g1

0x46a9,	// (0x0002333c) navi_pane_bcale_mc_t1

0xe3d2,	// (0x0002d065) main_sp_fs_email_pane_g1

0xe3de,	// (0x0002d071) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0002e971) main_sp_fs_email_pane_g

0xe8c5,	// (0x0002d558) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8c5,	// (0x0002d558) list_single_cale_mrui_row_pane_g3

0x9172,	// (0x00027e05) list_single_recal_day_pane_g5_event_pane

0xeaa3,	// (0x0002d736) list_single_recal_day_pane_g7

0xf04b,	// (0x0002dcde) list_recal_day_event_pane_cp01

0xf054,	// (0x0002dce7) list_recal_vselct_arw_lo_pane_cp01

0xf05c,	// (0x0002dcef) list_recal_vselct_arw_up_pane_cp01

0xf064,	// (0x0002dcf7) list_recal_vselct_pane_cp01

0xd452,	// (0x0002c0e5) list_recal_day_event_pane_cp01_g1

0xf06e,	// (0x0002dd01) list_recal_day_event_pane_cp01_t1

0xeaab,	// (0x0002d73e) list_single_recal_day_pane_t1_ParamLimits

0xeabd,	// (0x0002d750) list_single_recal_day_pane_t2_ParamLimits

0xfe36,	// (0x0002eac9) list_single_recal_day_pane_t_ParamLimits

0xa2cd,	// (0x00028f60) bg_notes_pane_ParamLimits

0xa370,	// (0x00029003) list_notes_pane_ParamLimits

0x2605,	// (0x00021298) scroll_pane_cp06_ParamLimits

0xa392,	// (0x00029025) main_notes_pane_ParamLimits

0x9bfe,	// (0x00028891) main_welc_pane

0x9b20,	// (0x000287b3) main_welc_body_pane_ParamLimits

0x9b20,	// (0x000287b3) main_welc_body_pane

0x9b3b,	// (0x000287ce) main_welc_opti_pane_ParamLimits

0x9b3b,	// (0x000287ce) main_welc_opti_pane

0x9b70,	// (0x00028803) main_welc_pane_t1_ParamLimits

0x9b70,	// (0x00028803) main_welc_pane_t1

0x9b8e,	// (0x00028821) main_welc_body_row_pane_ParamLimits

0x9b8e,	// (0x00028821) main_welc_body_row_pane

0x9ba8,	// (0x0002883b) main_welc_opti_row_pane_ParamLimits

0x9ba8,	// (0x0002883b) main_welc_opti_row_pane

0xf07c,	// (0x0002dd0f) main_welc_opti_row_pane_g1

0xf084,	// (0x0002dd17) main_welc_opti_row_pane_t1

0xf093,	// (0x0002dd26) main_welc_body_row_pane_t1

0xed39,	// (0x0002d9cc) popup_notif_wgt_heading_pane

0xed53,	// (0x0002d9e6) aid_size_list_notif_wgt_del_ParamLimits

0xed60,	// (0x0002d9f3) list_notif_wgt_row_pane_g1_ParamLimits

0xed6c,	// (0x0002d9ff) list_notif_wgt_row_pane_g2_ParamLimits

0xed80,	// (0x0002da13) list_notif_wgt_row_pane_g3_ParamLimits

0xfe9d,	// (0x0002eb30) list_notif_wgt_row_pane_g_ParamLimits

0xed8d,	// (0x0002da20) list_notif_wgt_row_pane_t1_ParamLimits

0xeda3,	// (0x0002da36) list_notif_wgt_row_pane_t2_ParamLimits

0xedb5,	// (0x0002da48) list_notif_wgt_row_pane_t3_ParamLimits

0xfea4,	// (0x0002eb37) list_notif_wgt_row_pane_t_ParamLimits

0x9582,	// (0x00028215) listrow_wgtman_pane_g1_ParamLimits

0x958f,	// (0x00028222) listrow_wgtman_pane_g2_ParamLimits

0xfecd,	// (0x0002eb60) listrow_wgtman_pane_g_ParamLimits

0x95ad,	// (0x00028240) listrow_wgtman_pane_t1_ParamLimits

0x95c5,	// (0x00028258) listrow_wgtman_pane_t2_ParamLimits

0xfed2,	// (0x0002eb65) listrow_wgtman_pane_t_ParamLimits

0x95eb,	// (0x0002827e) wait_bar_pane_cp09_ParamLimits

0x9bfe,	// (0x00028891) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0002dd35) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0002dd3d) popup_notif_wgt_heading_pane_t1

0x9bfe,	// (0x00028891) main_vids_pane

0x9bfe,	// (0x00028891) vids_listscroll_pane

0x9bb9,	// (0x0002884c) scroll_pane_cp040

0x9bfe,	// (0x00028891) vids_list_pane

0x9bc4,	// (0x00028857) vids_list_double_pane_ParamLimits

0x9bc4,	// (0x00028857) vids_list_double_pane

0x9bd7,	// (0x0002886a) vids_list_double_pane_g1

0x9be0,	// (0x00028873) vids_list_double_pane_t1

0x9bf0,	// (0x00028883) vids_list_double_pane_t2

0x0001,

0xff56,	// (0x0002ebe9) vids_list_double_pane_t

0xa5df,	// (0x00029272) main_ncimui_pane_ParamLimits

0x7f7c,	// (0x00026c0f) main_ncimui_pane_g1_ParamLimits

0x7f8a,	// (0x00026c1d) main_ncimui_pane_g2_ParamLimits

0x7f8a,	// (0x00026c1d) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0002e876) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0002e876) main_ncimui_pane_g

0x9b56,	// (0x000287e9) main_welc_pane_g1_ParamLimits

0x9b56,	// (0x000287e9) main_welc_pane_g1

0x9b62,	// (0x000287f5) main_welc_pane_g2_ParamLimits

0x9b62,	// (0x000287f5) main_welc_pane_g2

0x0001,

0xff51,	// (0x0002ebe4) main_welc_pane_g_ParamLimits

0xff51,	// (0x0002ebe4) main_welc_pane_g

0xa2cd,	// (0x00028f60) listscroll_mce_pane_ParamLimits

0x476b,	// (0x000233fe) wait_bar_pane_cp10

0xc30b,	// (0x0002af9e) main_cale_day_pane_ParamLimits

0xc30b,	// (0x0002af9e) main_cale_week_pane_ParamLimits

0xa2cd,	// (0x00028f60) main_messa_pane_ParamLimits

0x6479,	// (0x0002510c) main_clock2_btn_pane_ParamLimits

0x6479,	// (0x0002510c) main_clock2_btn_pane

0xcb2c,	// (0x0002b7bf) main_clock2_btn_pane_cp01_ParamLimits

0xcb2c,	// (0x0002b7bf) main_clock2_btn_pane_cp01

0xe848,	// (0x0002d4db) list_cale_mrui_pane_ParamLimits

0xedf9,	// (0x0002da8c) main_cf0_pane_g2

0x0001,

0xfeab,	// (0x0002eb3e) main_cf0_pane_g

0x977a,	// (0x0002840d) area_left_week_number_pane_ParamLimits

0x978d,	// (0x00028420) area_top_day_name_pane_ParamLimits

0x979b,	// (0x0002842e) frame_month_view_pane_ParamLimits

0xef21,	// (0x0002dbb4) grid_month_view_pane_ParamLimits

0xef2f,	// (0x0002dbc2) frm_month_g1_ParamLimits

0x9819,	// (0x000284ac) frm_month_g2_ParamLimits

0x982a,	// (0x000284bd) frm_month_g3_ParamLimits

0x983b,	// (0x000284ce) frm_month_g4_ParamLimits

0x984c,	// (0x000284df) frm_month_g5_ParamLimits

0x985d,	// (0x000284f0) frm_month_g6_ParamLimits

0x9870,	// (0x00028503) frm_month_g7_ParamLimits

0xef3c,	// (0x0002dbcf) frm_month_g8_ParamLimits

0x9883,	// (0x00028516) frm_month_g9_ParamLimits

0x9890,	// (0x00028523) frm_month_g10_ParamLimits

0x989d,	// (0x00028530) frm_month_g11_ParamLimits

0x98aa,	// (0x0002853d) frm_month_g12_ParamLimits

0x98b7,	// (0x0002854a) frm_month_g13_ParamLimits

0x98c6,	// (0x00028559) frm_month_g14_ParamLimits

0x98d5,	// (0x00028568) frm_month_g15_ParamLimits

0x98e4,	// (0x00028577) frm_month_g16_ParamLimits

0xfefc,	// (0x0002eb8f) frm_month_g_ParamLimits

0xef49,	// (0x0002dbdc) cell_top_day_name_pane_t1_ParamLimits

0x98f3,	// (0x00028586) cell_area_left_week_number_pane_g1_ParamLimits

0x9902,	// (0x00028595) cell_area_left_week_number_pane_t1_ParamLimits

0xc998,	// (0x0002b62b) cell_month_view_pane_g1_ParamLimits

0x9918,	// (0x000285ab) cell_month_view_pane_t1_ParamLimits

0xa2c5,	// (0x00028f58) main_clock2_btn_pane_g1

0xf0b8,	// (0x0002dd4b) main_clock2_btn_pane_t1

0xa5df,	// (0x00029272) listscroll_cmail_pane_ParamLimits

0xe3d2,	// (0x0002d065) main_sp_fs_email_pane_g1_ParamLimits

0xe3de,	// (0x0002d071) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0002e971) main_sp_fs_email_pane_g_ParamLimits

0xea12,	// (0x0002d6a5) list_recal_day_pane_ParamLimits

0xea23,	// (0x0002d6b6) mian_recal_day_pane_t1

0x8957,	// (0x000275ea) list_single_dyc_row_text_pane_t4_ParamLimits

0x8957,	// (0x000275ea) list_single_dyc_row_text_pane_t4

0x8994,	// (0x00027627) list_single_dyc_row_text_pane_t5_ParamLimits

0x8994,	// (0x00027627) list_single_dyc_row_text_pane_t5

0xe4b6,	// (0x0002d149) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4b6,	// (0x0002d149) list_single_dyc_row_text_pane_t6

0xa95c,	// (0x000295ef) aid_mgn_list_cale_time_pane

0xa5df,	// (0x00029272) main_gallery2_pane_ParamLimits

0xcb40,	// (0x0002b7d3) main_clock2_pane_cp01_t1

0xcb50,	// (0x0002b7e3) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002e457) main_clock2_pane_cp01_t

0x29be,	// (0x00021651) cale_week_scroll_pane_g16_ParamLimits

0x29be,	// (0x00021651) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
