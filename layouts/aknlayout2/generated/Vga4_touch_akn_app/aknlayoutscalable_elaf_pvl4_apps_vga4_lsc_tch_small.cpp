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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004da6e };

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
0x0b5f,	// (0x0004e5cd) Screen

0x0b6b,	// (0x0004e5d9) application_window

0x0bb7,	// (0x0004e625) area_bottom_pane_ParamLimits

0x0bb7,	// (0x0004e625) area_bottom_pane

0x0bf0,	// (0x0004e65e) area_top_pane_ParamLimits

0x0bf0,	// (0x0004e65e) area_top_pane

0x98df,	// (0x0005734d) call_video_uplink_pane_ParamLimits

0x98df,	// (0x0005734d) call_video_uplink_pane

0x0c7e,	// (0x0004e6ec) main_pane_ParamLimits

0x0c7e,	// (0x0004e6ec) main_pane

0xc833,	// (0x0005a2a1) context_pane

0x460f,	// (0x0005207d) navi_pane

0x463f,	// (0x000520ad) popup_cale_events_window_ParamLimits

0x463f,	// (0x000520ad) popup_cale_events_window

0xc846,	// (0x0005a2b4) popup_mup_playback_window

0x4657,	// (0x000520c5) signal_pane

0xa060,	// (0x00057ace) main_browser_pane

0xb3c9,	// (0x00058e37) main_burst_pane

0x4311,	// (0x00051d7f) main_calc_pane

0xc7d6,	// (0x0005a244) main_cale_day_pane

0x12ba,	// (0x0004ed28) main_cale_month_pane

0xc7d6,	// (0x0005a244) main_cale_week_pane

0xb3c9,	// (0x00058e37) main_call_pane

0x9d1e,	// (0x0005778c) main_call_poc_pane

0xb3c9,	// (0x00058e37) main_camera_pane

0xb3c9,	// (0x00058e37) main_chi_dic_pane

0xb26b,	// (0x00058cd9) main_clock_pane

0x9d1e,	// (0x0005778c) main_fmradio_pane

0xb3c9,	// (0x00058e37) main_graph_messa_pane

0x9d1e,	// (0x0005778c) main_help_pane

0xa060,	// (0x00057ace) main_im_pane

0x9f79,	// (0x000579e7) main_image_pane_ParamLimits

0x9f79,	// (0x000579e7) main_image_pane

0x9d1e,	// (0x0005778c) main_location2_pane

0xb3c9,	// (0x00058e37) main_location_pane

0x9f79,	// (0x000579e7) main_messa_pane

0x9d1e,	// (0x0005778c) main_mp2_pane

0xb3c9,	// (0x00058e37) main_mp_pane

0x9d1e,	// (0x0005778c) main_msg_pane

0x9d1e,	// (0x0005778c) main_mup_eq_pane

0x9d1e,	// (0x0005778c) main_mup_pane

0xa060,	// (0x00057ace) main_notes_pane

0x9d1e,	// (0x0005778c) main_pec_pane

0x9d1e,	// (0x0005778c) main_phob_pane

0x9d1e,	// (0x0005778c) main_pinb_pane

0x9d1e,	// (0x0005778c) main_postcard_pane

0x9d1e,	// (0x0005778c) main_qdial_pane

0xb3c9,	// (0x00058e37) main_skin_pane

0x9d1e,	// (0x0005778c) main_smil2_pane

0xb3c9,	// (0x00058e37) main_smil_pane

0xb3c9,	// (0x00058e37) main_video_pane

0xb3c9,	// (0x00058e37) main_video_tele_pane

0x9f79,	// (0x000579e7) main_viewer_pane_ParamLimits

0x9f79,	// (0x000579e7) main_viewer_pane

0xb3c9,	// (0x00058e37) main_vorec_pane

0x4367,	// (0x00051dd5) popup_blid_sat_info_window_ParamLimits

0x4367,	// (0x00051dd5) popup_blid_sat_info_window

0x43cb,	// (0x00051e39) popup_dyc_status_message_window_ParamLimits

0x43cb,	// (0x00051e39) popup_dyc_status_message_window

0x43e5,	// (0x00051e53) popup_grid_large_graphic_window_ParamLimits

0x43e5,	// (0x00051e53) popup_grid_large_graphic_window

0x44a7,	// (0x00051f15) popup_loc_request_window_ParamLimits

0x44a7,	// (0x00051f15) popup_loc_request_window

0x45e3,	// (0x00052051) popup_wml_address_window_ParamLimits

0x45e3,	// (0x00052051) popup_wml_address_window

0x414f,	// (0x00051bbd) call_muted_g1

0x3de3,	// (0x00051851) popup_call_audio_conf_window_ParamLimits

0x3de3,	// (0x00051851) popup_call_audio_conf_window

0x415f,	// (0x00051bcd) popup_call_audio_first_window_ParamLimits

0x415f,	// (0x00051bcd) popup_call_audio_first_window

0x41d5,	// (0x00051c43) popup_call_audio_in_window_ParamLimits

0x41d5,	// (0x00051c43) popup_call_audio_in_window

0x4211,	// (0x00051c7f) popup_call_audio_out_window_ParamLimits

0x4211,	// (0x00051c7f) popup_call_audio_out_window

0x424b,	// (0x00051cb9) popup_call_audio_second_window_ParamLimits

0x424b,	// (0x00051cb9) popup_call_audio_second_window

0x42a1,	// (0x00051d0f) popup_call_audio_wait_window_ParamLimits

0x42a1,	// (0x00051d0f) popup_call_audio_wait_window

0x42d6,	// (0x00051d44) popup_number_entry_window_ParamLimits

0x42d6,	// (0x00051d44) popup_number_entry_window

0x990b,	// (0x00057379) bg_popup_call_pane_cp05_ParamLimits

0x990b,	// (0x00057379) bg_popup_call_pane_cp05

0x992b,	// (0x00057399) popup_number_entry_window_t1

0x993e,	// (0x000573ac) popup_number_entry_window_t2

0x9950,	// (0x000573be) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0005cb41) popup_number_entry_window_t

0x9962,	// (0x000573d0) text_title_cp2

0x9975,	// (0x000573e3) bg_popup_call_pane_cp_ParamLimits

0x9975,	// (0x000573e3) bg_popup_call_pane_cp

0x9983,	// (0x000573f1) call_thumbnail_pane

0x998b,	// (0x000573f9) popup_call_audio_in_window_g1_ParamLimits

0x998b,	// (0x000573f9) popup_call_audio_in_window_g1

0x9997,	// (0x00057405) popup_call_audio_in_window_g2_ParamLimits

0x9997,	// (0x00057405) popup_call_audio_in_window_g2

0x99a3,	// (0x00057411) popup_call_audio_in_window_g3_ParamLimits

0x99a3,	// (0x00057411) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0005cb4a) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0005cb4a) popup_call_audio_in_window_g

0x99af,	// (0x0005741d) popup_call_audio_in_window_t1_ParamLimits

0x99af,	// (0x0005741d) popup_call_audio_in_window_t1

0x99cb,	// (0x00057439) popup_call_audio_in_window_t2_ParamLimits

0x99cb,	// (0x00057439) popup_call_audio_in_window_t2

0x99e7,	// (0x00057455) popup_call_audio_in_window_t3_ParamLimits

0x99e7,	// (0x00057455) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0005cb51) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0005cb51) popup_call_audio_in_window_t

0x9975,	// (0x000573e3) bg_popup_call_pane_cp01_ParamLimits

0x9975,	// (0x000573e3) bg_popup_call_pane_cp01

0x9983,	// (0x000573f1) call_thumbnail_pane_cp02

0x99fa,	// (0x00057468) call_type_pane_cp022

0x9a02,	// (0x00057470) popup_call_audio_out_window_g1_ParamLimits

0x9a02,	// (0x00057470) popup_call_audio_out_window_g1

0x9a14,	// (0x00057482) popup_call_audio_out_window_g2_ParamLimits

0x9a14,	// (0x00057482) popup_call_audio_out_window_g2

0x9a20,	// (0x0005748e) popup_call_audio_out_window_g3_ParamLimits

0x9a20,	// (0x0005748e) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0005cb58) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0005cb58) popup_call_audio_out_window_g

0x9a32,	// (0x000574a0) popup_call_audio_out_window_t1_ParamLimits

0x9a32,	// (0x000574a0) popup_call_audio_out_window_t1

0x9a4a,	// (0x000574b8) popup_call_audio_out_window_t2_ParamLimits

0x9a4a,	// (0x000574b8) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0005cb5f) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0005cb5f) popup_call_audio_out_window_t

0x9a5f,	// (0x000574cd) bg_popup_call_pane_ParamLimits

0x9a5f,	// (0x000574cd) bg_popup_call_pane

0x0e37,	// (0x0004e8a5) call_thumbnail_pane_cp_ParamLimits

0x0e37,	// (0x0004e8a5) call_thumbnail_pane_cp

0x9ae3,	// (0x00057551) call_type_pane_cp01_ParamLimits

0x9ae3,	// (0x00057551) call_type_pane_cp01

0x9b27,	// (0x00057595) popup_call_audio_first_window_g1_ParamLimits

0x9b27,	// (0x00057595) popup_call_audio_first_window_g1

0x9b73,	// (0x000575e1) popup_call_audio_first_window_g2_ParamLimits

0x9b73,	// (0x000575e1) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0005cb64) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0005cb64) popup_call_audio_first_window_g

0x9bb7,	// (0x00057625) popup_call_audio_first_window_t1_ParamLimits

0x9bb7,	// (0x00057625) popup_call_audio_first_window_t1

0x9c63,	// (0x000576d1) popup_call_audio_first_window_t4_ParamLimits

0x9c63,	// (0x000576d1) popup_call_audio_first_window_t4

0x9cef,	// (0x0005775d) popup_call_audio_first_window_t5_ParamLimits

0x9cef,	// (0x0005775d) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0005cb69) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0005cb69) popup_call_audio_first_window_t

0x9d1e,	// (0x0005778c) bg_popup_call_pane_cp02

0x9d28,	// (0x00057796) call_type_pane_cp023

0x9d30,	// (0x0005779e) popup_call_audio_wait_window_g1

0x9d38,	// (0x000577a6) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0005cb70) popup_call_audio_wait_window_g

0x9d40,	// (0x000577ae) popup_call_audio_wait_window_t3

0x9d4e,	// (0x000577bc) bg_popup_call_pane_cp03_ParamLimits

0x9d4e,	// (0x000577bc) bg_popup_call_pane_cp03

0x9dae,	// (0x0005781c) call_thumbnail_pane_cp011_ParamLimits

0x9dae,	// (0x0005781c) call_thumbnail_pane_cp011

0x9dba,	// (0x00057828) call_type_pane_cp034_ParamLimits

0x9dba,	// (0x00057828) call_type_pane_cp034

0x9df6,	// (0x00057864) popup_call_audio_second_window_g1_ParamLimits

0x9df6,	// (0x00057864) popup_call_audio_second_window_g1

0x9e32,	// (0x000578a0) popup_call_audio_second_window_g2_ParamLimits

0x9e32,	// (0x000578a0) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0005cb75) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0005cb75) popup_call_audio_second_window_g

0x9e6e,	// (0x000578dc) popup_call_audio_second_window_t1_ParamLimits

0x9e6e,	// (0x000578dc) popup_call_audio_second_window_t1

0x9eef,	// (0x0005795d) popup_call_audio_second_window_t2_ParamLimits

0x9eef,	// (0x0005795d) popup_call_audio_second_window_t2

0x9f25,	// (0x00057993) popup_call_audio_second_window_t3_ParamLimits

0x9f25,	// (0x00057993) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0005cb7a) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0005cb7a) popup_call_audio_second_window_t

0x9d1e,	// (0x0005778c) bg_popup_call_pane_cp04

0x9f5b,	// (0x000579c9) list_conf_pane

0x9f63,	// (0x000579d1) popup_call_audio_conf_window_t1

0x9f71,	// (0x000579df) call_thumbnail_pane_g1

0x9f79,	// (0x000579e7) bg_pinb_pane_ParamLimits

0x9f79,	// (0x000579e7) bg_pinb_pane

0x9f87,	// (0x000579f5) find_pinb_pane

0x9f90,	// (0x000579fe) listscroll_pinb_pane_ParamLimits

0x9f90,	// (0x000579fe) listscroll_pinb_pane

0x9f9f,	// (0x00057a0d) pinb_bg_pane_g1

0x0e5b,	// (0x0004e8c9) pinb_bg_pane_g2

0x0e67,	// (0x0004e8d5) pinb_bg_pane_g3

0x0e73,	// (0x0004e8e1) pinb_bg_pane_g4

0x0e7f,	// (0x0004e8ed) pinb_bg_pane_g5

0x0e8b,	// (0x0004e8f9) pinb_bg_pane_g6

0x0e96,	// (0x0004e904) pinb_bg_pane_g7

0x0ea1,	// (0x0004e90f) pinb_bg_pane_g8

0x0eac,	// (0x0004e91a) pinb_bg_pane_g9

0x0eb6,	// (0x0004e924) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0005cb81) pinb_bg_pane_g

0x0ed3,	// (0x0004e941) grid_pinb_pane

0x0ede,	// (0x0004e94c) list_pinb_pane

0x0ee9,	// (0x0004e957) scroll_pane_cp01_ParamLimits

0x0ee9,	// (0x0004e957) scroll_pane_cp01

0x9fa9,	// (0x00057a17) find_pinb_pane_g1_ParamLimits

0x9fa9,	// (0x00057a17) find_pinb_pane_g1

0x9fc1,	// (0x00057a2f) find_pinb_pane_t1

0x9fd3,	// (0x00057a41) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0005cb9b) find_pinb_pane_t

0x9fe8,	// (0x00057a56) input_focus_pane_cp01_ParamLimits

0x9fe8,	// (0x00057a56) input_focus_pane_cp01

0x0efb,	// (0x0004e969) cell_pinb_pane_ParamLimits

0x0efb,	// (0x0004e969) cell_pinb_pane

0x0f1d,	// (0x0004e98b) cell_pinb_pane_g1_ParamLimits

0x0f1d,	// (0x0004e98b) cell_pinb_pane_g1

0x0f32,	// (0x0004e9a0) cell_pinb_pane_g2_ParamLimits

0x0f32,	// (0x0004e9a0) cell_pinb_pane_g2

0x9ff4,	// (0x00057a62) cell_pinb_pane_g3_ParamLimits

0x9ff4,	// (0x00057a62) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0005cba0) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0005cba0) cell_pinb_pane_g

0x9d1e,	// (0x0005778c) grid_highlight_pane_cp01

0x0f3e,	// (0x0004e9ac) list_pinb_item_pane_ParamLimits

0x0f3e,	// (0x0004e9ac) list_pinb_item_pane

0x9d1e,	// (0x0005778c) list_highlight_pane_cp02

0x0f50,	// (0x0004e9be) list_pinb_item_pane_g1_ParamLimits

0x0f50,	// (0x0004e9be) list_pinb_item_pane_g1

0x0f5d,	// (0x0004e9cb) list_pinb_item_pane_g2_ParamLimits

0x0f5d,	// (0x0004e9cb) list_pinb_item_pane_g2

0x0f69,	// (0x0004e9d7) list_pinb_item_pane_g3_ParamLimits

0x0f69,	// (0x0004e9d7) list_pinb_item_pane_g3

0x0f7a,	// (0x0004e9e8) list_pinb_item_pane_g4_ParamLimits

0x0f7a,	// (0x0004e9e8) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0005cba7) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0005cba7) list_pinb_item_pane_g

0x0f86,	// (0x0004e9f4) list_pinb_item_pane_t1_ParamLimits

0x0f86,	// (0x0004e9f4) list_pinb_item_pane_t1

0x0fbb,	// (0x0004ea29) calc_display_pane

0x0fe3,	// (0x0004ea51) calc_paper_pane

0x1006,	// (0x0004ea74) grid_calc_pane

0x9d1e,	// (0x0005778c) bg_list_pane_cp01

0x1034,	// (0x0004eaa2) clock_g1

0x103c,	// (0x0004eaaa) clock_g2

0x0001,

0xf142,	// (0x0005cbb0) clock_g

0x1044,	// (0x0004eab2) clock_t1_ParamLimits

0x1044,	// (0x0004eab2) clock_t1

0x1059,	// (0x0004eac7) clock_t2_ParamLimits

0x1059,	// (0x0004eac7) clock_t2

0x106b,	// (0x0004ead9) clock_t3_ParamLimits

0x106b,	// (0x0004ead9) clock_t3

0x107d,	// (0x0004eaeb) clock_t4_ParamLimits

0x107d,	// (0x0004eaeb) clock_t4

0x108f,	// (0x0004eafd) clock_t5_ParamLimits

0x108f,	// (0x0004eafd) clock_t5

0x10a4,	// (0x0004eb12) clock_t6_ParamLimits

0x10a4,	// (0x0004eb12) clock_t6

0x10b6,	// (0x0004eb24) clock_t7_ParamLimits

0x10b6,	// (0x0004eb24) clock_t7

0x10c8,	// (0x0004eb36) clock_t8_ParamLimits

0x10c8,	// (0x0004eb36) clock_t8

0x10dc,	// (0x0004eb4a) clock_t9_ParamLimits

0x10dc,	// (0x0004eb4a) clock_t9

0x0008,

0xf147,	// (0x0005cbb5) clock_t_ParamLimits

0xf147,	// (0x0005cbb5) clock_t

0xa008,	// (0x00057a76) popup_clock_analogue_window_cp02

0xa008,	// (0x00057a76) popup_clock_digital_window_cp01

0xa010,	// (0x00057a7e) listscroll_help_pane

0x9d1e,	// (0x0005778c) phob_pre_status_pane

0xa01a,	// (0x00057a88) grid_qdial_pane

0x9f79,	// (0x000579e7) listscroll_mce_pane

0x9f79,	// (0x000579e7) bg_notes_pane

0xa024,	// (0x00057a92) list_notes_pane

0x10f2,	// (0x0004eb60) scroll_pane_cp06

0xa032,	// (0x00057aa0) bg_calc_paper_pane

0xa046,	// (0x00057ab4) list_calc_pane

0xa060,	// (0x00057ace) bg_calc_display_pane

0x1106,	// (0x0004eb74) calc_display_pane_t1

0x1118,	// (0x0004eb86) calc_display_pane_t2

0xa06c,	// (0x00057ada) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0005cbc8) calc_display_pane_t

0x112a,	// (0x0004eb98) cell_calc_pane_ParamLimits

0x112a,	// (0x0004eb98) cell_calc_pane

0xa07e,	// (0x00057aec) bg_calc_paper_pane_g1

0xa08a,	// (0x00057af8) bg_calc_paper_pane_g2

0xa096,	// (0x00057b04) bg_calc_paper_pane_g3

0xa0a2,	// (0x00057b10) bg_calc_paper_pane_g4

0xa0ae,	// (0x00057b1c) bg_calc_paper_pane_g5

0x1167,	// (0x0004ebd5) bg_calc_paper_pane_g6

0x117a,	// (0x0004ebe8) bg_calc_paper_pane_g7

0x118d,	// (0x0004ebfb) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0005cbcf) bg_calc_paper_pane_g

0x119e,	// (0x0004ec0c) calc_bg_paper_pane_g9

0x11af,	// (0x0004ec1d) list_calc_item_pane_ParamLimits

0x11af,	// (0x0004ec1d) list_calc_item_pane

0xa0ba,	// (0x00057b28) list_calc_item_pane_g1

0xa0c7,	// (0x00057b35) list_calc_item_pane_t1_ParamLimits

0xa0c7,	// (0x00057b35) list_calc_item_pane_t1

0x11c7,	// (0x0004ec35) list_calc_item_pane_t2_ParamLimits

0x11c7,	// (0x0004ec35) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0005cbe0) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0005cbe0) list_calc_item_pane_t

0xa0d9,	// (0x00057b47) cell_calc_pane_g1

0xa0e3,	// (0x00057b51) grid_highlight_pane_cp02

0xa105,	// (0x00057b73) bg_calc_display_pane_g1

0xa10e,	// (0x00057b7c) bg_calc_display_pane_g2

0xa118,	// (0x00057b86) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0005cbea) bg_calc_display_pane_g

0x11f9,	// (0x0004ec67) cell_qdial_pane_ParamLimits

0x11f9,	// (0x0004ec67) cell_qdial_pane

0x120d,	// (0x0004ec7b) cell_qdial_pane_g1_ParamLimits

0x120d,	// (0x0004ec7b) cell_qdial_pane_g1

0x1223,	// (0x0004ec91) cell_qdial_pane_g2_ParamLimits

0x1223,	// (0x0004ec91) cell_qdial_pane_g2

0xa121,	// (0x00057b8f) cell_qdial_pane_g3_ParamLimits

0xa121,	// (0x00057b8f) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0005cbf1) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0005cbf1) cell_qdial_pane_g

0x124a,	// (0x0004ecb8) cell_qdial_pane_t1_ParamLimits

0x124a,	// (0x0004ecb8) cell_qdial_pane_t1

0x1262,	// (0x0004ecd0) cell_qdial_pane_t2_ParamLimits

0x1262,	// (0x0004ecd0) cell_qdial_pane_t2

0x1275,	// (0x0004ece3) cell_qdial_pane_t3_ParamLimits

0x1275,	// (0x0004ece3) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0005cbfa) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0005cbfa) cell_qdial_pane_t

0x9d1e,	// (0x0005778c) grid_highlight_pane_cp04

0xa12d,	// (0x00057b9b) thumbnail_qdial_pane_ParamLimits

0xa12d,	// (0x00057b9b) thumbnail_qdial_pane

0xa189,	// (0x00057bf7) list_help_pane

0xa192,	// (0x00057c00) scroll_pane_cp02

0x1288,	// (0x0004ecf6) help_list_pane_t1_ParamLimits

0x1288,	// (0x0004ecf6) help_list_pane_t1

0xa19b,	// (0x00057c09) bg_notes_pane_g2

0xa1a3,	// (0x00057c11) bg_notes_pane_g3

0xa1ab,	// (0x00057c19) notes_bg_pane_g1

0xa1b3,	// (0x00057c21) notes_bg_pane_g4

0xa1bb,	// (0x00057c29) notes_bg_pane_g5

0xa1c3,	// (0x00057c31) notes_bg_pane_g6

0xa1cb,	// (0x00057c39) notes_bg_pane_g7

0xa1d3,	// (0x00057c41) notes_bg_pane_g8

0xa1db,	// (0x00057c49) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0005cc18) notes_bg_pane_g

0x12a6,	// (0x0004ed14) list_notes_text_pane_ParamLimits

0x12a6,	// (0x0004ed14) list_notes_text_pane

0xa9bd,	// (0x0005842b) list_notes_text_pane_g1

0xfd36,	// (0x0004d7a4) list_notes_text_pane_t1

0x12ba,	// (0x0004ed28) listscroll_cale_week_pane

0x12f4,	// (0x0004ed62) bg_cale_heading_pane

0xa9d7,	// (0x00058445) bg_cale_pane_cp01

0x1319,	// (0x0004ed87) cale_week_corner_pane

0x1338,	// (0x0004eda6) cale_week_day_heading_pane

0x1362,	// (0x0004edd0) cale_week_scroll_pane_g1

0x1382,	// (0x0004edf0) cale_week_scroll_pane_g2

0x139a,	// (0x0004ee08) cale_week_scroll_pane_g3

0x13b2,	// (0x0004ee20) cale_week_scroll_pane_g4

0x13ca,	// (0x0004ee38) cale_week_scroll_pane_g5

0x13e6,	// (0x0004ee54) cale_week_scroll_pane_g6

0x1402,	// (0x0004ee70) cale_week_scroll_pane_g7

0x1422,	// (0x0004ee90) cale_week_scroll_pane_g8

0x1442,	// (0x0004eeb0) cale_week_scroll_pane_g9

0x145f,	// (0x0004eecd) cale_week_scroll_pane_g10

0x147c,	// (0x0004eeea) cale_week_scroll_pane_g11

0x1499,	// (0x0004ef07) cale_week_scroll_pane_g12

0x14b6,	// (0x0004ef24) cale_week_scroll_pane_g13

0x14d3,	// (0x0004ef41) cale_week_scroll_pane_g14

0x14f8,	// (0x0004ef66) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0005cc27) cale_week_scroll_pane_g

0x151d,	// (0x0004ef8b) cale_week_time_pane

0x153d,	// (0x0004efab) grid_cale_week_pane

0xaa07,	// (0x00058475) scroll_pane_cp08

0x156c,	// (0x0004efda) cell_cale_week_pane_ParamLimits

0x156c,	// (0x0004efda) cell_cale_week_pane

0x15ee,	// (0x0004f05c) cale_week_day_heading_pane_t1

0x1638,	// (0x0004f0a6) cale_week_day_heading_pane_t2

0x1687,	// (0x0004f0f5) cale_week_day_heading_pane_t3

0x16d6,	// (0x0004f144) cale_week_day_heading_pane_t4

0x1725,	// (0x0004f193) cale_week_day_heading_pane_t5

0x1774,	// (0x0004f1e2) cale_week_day_heading_pane_t6

0x17c7,	// (0x0004f235) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0005cc46) cale_week_day_heading_pane_t

0xaa29,	// (0x00058497) bg_cale_side_pane

0x1811,	// (0x0004f27f) cale_week_time_pane_t1

0x184b,	// (0x0004f2b9) cale_week_time_pane_t2

0x1885,	// (0x0004f2f3) cale_week_time_pane_t3

0x18bf,	// (0x0004f32d) cale_week_time_pane_t4

0x18f9,	// (0x0004f367) cale_week_time_pane_t5

0x1933,	// (0x0004f3a1) cale_week_time_pane_t6

0x196d,	// (0x0004f3db) cale_week_time_pane_t7

0x19a7,	// (0x0004f415) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0005cc55) cale_week_time_pane_t

0x19e5,	// (0x0004f453) cell_cale_week_pane_g2

0x1a04,	// (0x0004f472) cell_cale_week_pane_g3_ParamLimits

0x1a04,	// (0x0004f472) cell_cale_week_pane_g3

0xaa37,	// (0x000584a5) grid_highlight_pane_cp07

0xaa3f,	// (0x000584ad) listscroll_gms_pane

0xaa49,	// (0x000584b7) grid_gms_pane

0xaa52,	// (0x000584c0) listscroll_gms_pane_g1

0xaa5a,	// (0x000584c8) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0005cc66) listscroll_gms_pane_g

0x1a1c,	// (0x0004f48a) scroll_pane_cp010

0x1a27,	// (0x0004f495) cell_gms_pane_ParamLimits

0x1a27,	// (0x0004f495) cell_gms_pane

0x1a41,	// (0x0004f4af) cell_gms_pane_g1

0xaa62,	// (0x000584d0) cell_gms_pane_g2

0xaa6a,	// (0x000584d8) cell_gms_pane_g3

0xaa73,	// (0x000584e1) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0005cc6b) cell_gms_pane_g

0xaa7c,	// (0x000584ea) grid_highlight_pane_cp09

0x40f7,	// (0x00051b65) phob_pre_status_pane_g1

0x40ff,	// (0x00051b6d) phob_pre_status_pane_g2

0x4107,	// (0x00051b75) phob_pre_status_pane_g3

0x410f,	// (0x00051b7d) phob_pre_status_pane_g4

0x0004,

0xf5f3,	// (0x0005d061) phob_pre_status_pane_g

0x411f,	// (0x00051b8d) phob_pre_status_pane_t1

0x412f,	// (0x00051b9d) phob_pre_status_pane_t2

0x413f,	// (0x00051bad) phob_pre_status_pane_t3

0x0002,

0xf5fe,	// (0x0005d06c) phob_pre_status_pane_t

0x9d1e,	// (0x0005778c) bg_list_pane_cp05

0x1a51,	// (0x0004f4bf) grid_vorec_pane

0x1a5d,	// (0x0004f4cb) vorec_t1

0x1a6b,	// (0x0004f4d9) vorec_t2

0x1a79,	// (0x0004f4e7) vorec_t3

0x1a87,	// (0x0004f4f5) vorec_t4

0x1a95,	// (0x0004f503) vorec_t5

0xa1e3,	// (0x00057c51) vorec_t6

0x0006,

0xf206,	// (0x0005cc74) vorec_t

0x1ab1,	// (0x0004f51f) wait_bar_pane_cp01

0x1ab9,	// (0x0004f527) cell_vorec_pane_ParamLimits

0x1ab9,	// (0x0004f527) cell_vorec_pane

0xaa84,	// (0x000584f2) cell_vorec_pane_g1

0x9d1e,	// (0x0005778c) grid_highlight_pane_cp05

0x1ae4,	// (0x0004f552) cams_zoom_pane

0x1af3,	// (0x0004f561) image_vga_pane

0x1b0d,	// (0x0004f57b) main_camera_pane_g1

0x1b1f,	// (0x0004f58d) main_camera_pane_g2

0x1b2f,	// (0x0004f59d) main_camera_pane_g3

0x1b43,	// (0x0004f5b1) main_camera_pane_g4

0x1b57,	// (0x0004f5c5) main_camera_pane_g5

0x1b6b,	// (0x0004f5d9) main_camera_pane_g6

0x1b7f,	// (0x0004f5ed) main_camera_pane_g7

0x0007,

0xf215,	// (0x0005cc83) main_camera_pane_g

0x1b93,	// (0x0004f601) main_camera_pane_t1

0x1ba9,	// (0x0004f617) main_camera_pane_t2

0x0001,

0xf226,	// (0x0005cc94) main_camera_pane_t

0x1be7,	// (0x0004f655) cams_zoom_pane_cp_ParamLimits

0x1be7,	// (0x0004f655) cams_zoom_pane_cp

0x1c0f,	// (0x0004f67d) image_cif_pane_ParamLimits

0x1c0f,	// (0x0004f67d) image_cif_pane

0x1c4a,	// (0x0004f6b8) image_subqcif_pane

0x1c54,	// (0x0004f6c2) main_video_pane_g1_ParamLimits

0x1c54,	// (0x0004f6c2) main_video_pane_g1

0x1c78,	// (0x0004f6e6) main_video_pane_g2_ParamLimits

0x1c78,	// (0x0004f6e6) main_video_pane_g2

0x1cae,	// (0x0004f71c) main_video_pane_g3_ParamLimits

0x1cae,	// (0x0004f71c) main_video_pane_g3

0x1cdc,	// (0x0004f74a) main_video_pane_g4_ParamLimits

0x1cdc,	// (0x0004f74a) main_video_pane_g4

0x1d0a,	// (0x0004f778) main_video_pane_g5_ParamLimits

0x1d0a,	// (0x0004f778) main_video_pane_g5

0xaa9a,	// (0x00058508) main_video_pane_g6_ParamLimits

0xaa9a,	// (0x00058508) main_video_pane_g6

0x0006,

0xf22b,	// (0x0005cc99) main_video_pane_g_ParamLimits

0xf22b,	// (0x0005cc99) main_video_pane_g

0x1d33,	// (0x0004f7a1) main_video_pane_t1_ParamLimits

0x1d33,	// (0x0004f7a1) main_video_pane_t1

0xaab4,	// (0x00058522) cams_zoom_pane_g1

0xaabd,	// (0x0005852b) cams_zoom_pane_g2

0xaac6,	// (0x00058534) cams_zoom_pane_g3

0xaacf,	// (0x0005853d) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0005cca8) cams_zoom_pane_g

0x1d90,	// (0x0004f7fe) grid_cams_pane

0x1daa,	// (0x0004f818) linegrid_cams_pane

0x1dbc,	// (0x0004f82a) cell_cams_pane_ParamLimits

0x1dbc,	// (0x0004f82a) cell_cams_pane

0xaad8,	// (0x00058546) cams_burst_image_pane

0xaae0,	// (0x0005854e) cell_cams_pane_g1

0x9d1e,	// (0x0005778c) grid_highlight_pane_cp03

0xa0d9,	// (0x00057b47) mp_bg_pane_g1

0x9d1e,	// (0x0005778c) bg_list_pane_cp03

0xc6f9,	// (0x0005a167) bg_mp_pane

0xc701,	// (0x0005a16f) grid_mp_pane

0xc709,	// (0x0005a177) media_player_g1

0xc713,	// (0x0005a181) media_player_t1

0xc721,	// (0x0005a18f) media_player_t2

0xc72f,	// (0x0005a19d) media_player_t3

0xc73d,	// (0x0005a1ab) media_player_t4

0xc74b,	// (0x0005a1b9) media_player_t5

0xc759,	// (0x0005a1c7) media_player_t6

0xc767,	// (0x0005a1d5) media_player_t7

0x0006,

0xf5dd,	// (0x0005d04b) media_player_t

0xc775,	// (0x0005a1e3) wait_bar_pane_cp02

0xf5c2,	// (0x0005d030) main_usb_pane_t

0x40ee,	// (0x00051b5c) cell_mp_pane

0xa0d9,	// (0x00057b47) cell_mp_pane_g1

0x9d1e,	// (0x0005778c) grid_highlight_pane_cp06

0xaae8,	// (0x00058556) grid_skin_colour_pane

0xaaf0,	// (0x0005855e) list_highlight_pane_cp03

0x1e02,	// (0x0004f870) skin_g1

0xaaf8,	// (0x00058566) skin_t1

0xab07,	// (0x00058575) skin_t2

0x0001,

0xf26f,	// (0x0005ccdd) skin_t

0x1e0a,	// (0x0004f878) cell_skin_colour_pane_ParamLimits

0x1e0a,	// (0x0004f878) cell_skin_colour_pane

0xab15,	// (0x00058583) cell_skin_colour_pane_g1

0x1e7d,	// (0x0004f8eb) call_video_g1_ParamLimits

0x1e7d,	// (0x0004f8eb) call_video_g1

0x1e99,	// (0x0004f907) call_video_g2_ParamLimits

0x1e99,	// (0x0004f907) call_video_g2

0x0001,

0xf274,	// (0x0005cce2) call_video_g_ParamLimits

0xf274,	// (0x0005cce2) call_video_g

0x1ede,	// (0x0004f94c) call_video_uplink_pane_cp1_ParamLimits

0x1ede,	// (0x0004f94c) call_video_uplink_pane_cp1

0xab27,	// (0x00058595) call_video_uplink_pane_cp2

0x1f7f,	// (0x0004f9ed) video_down_crop_pane_ParamLimits

0x1f7f,	// (0x0004f9ed) video_down_crop_pane

0x2068,	// (0x0004fad6) video_down_pane_ParamLimits

0x2068,	// (0x0004fad6) video_down_pane

0xab2f,	// (0x0005859d) video_down_subqcif_pane_ParamLimits

0xab2f,	// (0x0005859d) video_down_subqcif_pane

0xab49,	// (0x000585b7) video_down_subqcif_pane_cp_ParamLimits

0xab49,	// (0x000585b7) video_down_subqcif_pane_cp

0xab71,	// (0x000585df) im_reading_pane_ParamLimits

0xab71,	// (0x000585df) im_reading_pane

0x2171,	// (0x0004fbdf) im_writing_pane_ParamLimits

0x2171,	// (0x0004fbdf) im_writing_pane

0x218d,	// (0x0004fbfb) im_reading_pane_t1

0xab8b,	// (0x000585f9) list_im_pane

0xab9c,	// (0x0005860a) scroll_pane_cp07

0x21c9,	// (0x0004fc37) im_writing_pane_t1_ParamLimits

0x21c9,	// (0x0004fc37) im_writing_pane_t1

0xabb5,	// (0x00058623) im_writing_pane_t2_ParamLimits

0xabb5,	// (0x00058623) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0005ccec) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0005ccec) im_writing_pane_t

0x9d1e,	// (0x0005778c) input_focus_pane_cp04

0x9d1e,	// (0x0005778c) input_focus_pane_cp05

0x21de,	// (0x0004fc4c) list_im_single_pane_ParamLimits

0x21de,	// (0x0004fc4c) list_im_single_pane

0x21f4,	// (0x0004fc62) list_single_im_pane_t1

0x40ae,	// (0x00051b1c) blid_accuracy_pane

0x40b6,	// (0x00051b24) blid_compass_pane

0x40c0,	// (0x00051b2e) main_location_t1

0x40d0,	// (0x00051b3e) main_location_t2

0x40e0,	// (0x00051b4e) main_location_t3

0x0002,

0xf5ec,	// (0x0005d05a) main_location_t

0x9d1e,	// (0x0005778c) aid_levels_location

0xa0d9,	// (0x00057b47) blid_accuracy_pane_g1

0xa0d9,	// (0x00057b47) blid_accuracy_pane_g2

0x0001,

0xf2e7,	// (0x0005cd55) blid_accuracy_pane_g

0xabfd,	// (0x0005866b) wml_content_pane

0xac3b,	// (0x000586a9) wml_button_pane_ParamLimits

0xac3b,	// (0x000586a9) wml_button_pane

0x2203,	// (0x0004fc71) wml_list_single_large_pane_ParamLimits

0x2203,	// (0x0004fc71) wml_list_single_large_pane

0x2219,	// (0x0004fc87) wml_list_single_medium_pane_ParamLimits

0x2219,	// (0x0004fc87) wml_list_single_medium_pane

0x2230,	// (0x0004fc9e) wml_list_single_small_pane_ParamLimits

0x2230,	// (0x0004fc9e) wml_list_single_small_pane

0xac4f,	// (0x000586bd) wml_selection_box_pane_ParamLimits

0xac4f,	// (0x000586bd) wml_selection_box_pane

0xac62,	// (0x000586d0) wml_list_single_pane_t1

0xac71,	// (0x000586df) wml_list_single_medium_pane_t1

0xac80,	// (0x000586ee) wml_list_single_large_pane_t1

0xac8f,	// (0x000586fd) input_focus_pane_cp02_ParamLimits

0xac8f,	// (0x000586fd) input_focus_pane_cp02

0xaca2,	// (0x00058710) wml_selection_box_pane_g1

0xacab,	// (0x00058719) wml_selection_box_pane_t1_ParamLimits

0xacab,	// (0x00058719) wml_selection_box_pane_t1

0x9f79,	// (0x000579e7) bg_wml_button_pane_ParamLimits

0x9f79,	// (0x000579e7) bg_wml_button_pane

0xacc3,	// (0x00058731) wml_button_pane_g1

0xaccb,	// (0x00058739) wml_button_pane_t1

0xacc3,	// (0x00058731) wml_button_bg_pane_g1

0xacdb,	// (0x00058749) wml_button_bg_pane_g2

0xace3,	// (0x00058751) wml_button_bg_pane_g3

0xaceb,	// (0x00058759) wml_button_bg_pane_g4

0xacf3,	// (0x00058761) wml_button_bg_pane_g5

0xacfb,	// (0x00058769) wml_button_bg_pane_g6

0xad03,	// (0x00058771) wml_button_bg_pane_g7

0xad0b,	// (0x00058779) wml_button_bg_pane_g8

0xad13,	// (0x00058781) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0005ccf1) wml_button_bg_pane_g

0x224c,	// (0x0004fcba) bg_list_pane_cp02

0xad1b,	// (0x00058789) mce_header_pane_ParamLimits

0xad1b,	// (0x00058789) mce_header_pane

0xad31,	// (0x0005879f) mce_icon_pane

0xad31,	// (0x0005879f) mce_image_pane

0xad3a,	// (0x000587a8) mce_text_pane_ParamLimits

0xad3a,	// (0x000587a8) mce_text_pane

0x2256,	// (0x0004fcc4) scroll_pane_cp03

0xac33,	// (0x000586a1) scroll_pane_cp04

0xad4d,	// (0x000587bb) scroll_pane_cp05_ParamLimits

0xad4d,	// (0x000587bb) scroll_pane_cp05

0x2260,	// (0x0004fcce) mce_header_field_pane_ParamLimits

0x2260,	// (0x0004fcce) mce_header_field_pane

0x2279,	// (0x0004fce7) mce_header_field_pane_2_ParamLimits

0x2279,	// (0x0004fce7) mce_header_field_pane_2

0x228f,	// (0x0004fcfd) mce_header_field_pane_3

0x2297,	// (0x0004fd05) list_single_mce_message_pane_ParamLimits

0x2297,	// (0x0004fd05) list_single_mce_message_pane

0x22b0,	// (0x0004fd1e) list_single_mce_smart_pane_ParamLimits

0x22b0,	// (0x0004fd1e) list_single_mce_smart_pane

0xad59,	// (0x000587c7) input_focus_pane_cp03

0xad62,	// (0x000587d0) list_header_data_pane

0x22d4,	// (0x0004fd42) mce_header_field_pane_t1

0x22e4,	// (0x0004fd52) list_single_mce_header_pane_ParamLimits

0x22e4,	// (0x0004fd52) list_single_mce_header_pane

0xad6a,	// (0x000587d8) list_single_mce_header_pane_t1

0xad79,	// (0x000587e7) list_single_mce_message_pane_g1

0xad81,	// (0x000587ef) list_single_mce_message_pane_t1

0x231e,	// (0x0004fd8c) bg_cale_heading_pane_cp01_ParamLimits

0x231e,	// (0x0004fd8c) bg_cale_heading_pane_cp01

0xad8f,	// (0x000587fd) bg_cale_pane_cp02_ParamLimits

0xad8f,	// (0x000587fd) bg_cale_pane_cp02

0x235d,	// (0x0004fdcb) cale_month_corner_pane

0x237c,	// (0x0004fdea) cale_month_day_heading_pane_ParamLimits

0x237c,	// (0x0004fdea) cale_month_day_heading_pane

0x23d3,	// (0x0004fe41) cale_month_pane_g1_ParamLimits

0x23d3,	// (0x0004fe41) cale_month_pane_g1

0x2407,	// (0x0004fe75) cale_month_pane_g2_ParamLimits

0x2407,	// (0x0004fe75) cale_month_pane_g2

0x243f,	// (0x0004fead) cale_month_pane_g3_ParamLimits

0x243f,	// (0x0004fead) cale_month_pane_g3

0x248b,	// (0x0004fef9) cale_month_pane_g4_ParamLimits

0x248b,	// (0x0004fef9) cale_month_pane_g4

0x24d7,	// (0x0004ff45) cale_month_pane_g5_ParamLimits

0x24d7,	// (0x0004ff45) cale_month_pane_g5

0x2527,	// (0x0004ff95) cale_month_pane_g6_ParamLimits

0x2527,	// (0x0004ff95) cale_month_pane_g6

0x257f,	// (0x0004ffed) cale_month_pane_g7_ParamLimits

0x257f,	// (0x0004ffed) cale_month_pane_g7

0x25e3,	// (0x00050051) cale_month_pane_g8_ParamLimits

0x25e3,	// (0x00050051) cale_month_pane_g8

0x2647,	// (0x000500b5) cale_month_pane_g9_ParamLimits

0x2647,	// (0x000500b5) cale_month_pane_g9

0x26a1,	// (0x0005010f) cale_month_pane_g10_ParamLimits

0x26a1,	// (0x0005010f) cale_month_pane_g10

0x26f3,	// (0x00050161) cale_month_pane_g11_ParamLimits

0x26f3,	// (0x00050161) cale_month_pane_g11

0x2745,	// (0x000501b3) cale_month_pane_g12_ParamLimits

0x2745,	// (0x000501b3) cale_month_pane_g12

0x279b,	// (0x00050209) cale_month_pane_g13_ParamLimits

0x279b,	// (0x00050209) cale_month_pane_g13

0x000c,

0xf296,	// (0x0005cd04) cale_month_pane_g_ParamLimits

0xf296,	// (0x0005cd04) cale_month_pane_g

0x27f1,	// (0x0005025f) cale_month_week_pane

0x2815,	// (0x00050283) grid_cale_month_pane_ParamLimits

0x2815,	// (0x00050283) grid_cale_month_pane

0x2863,	// (0x000502d1) cale_month_day_heading_pane_t1

0x28e9,	// (0x00050357) cale_month_day_heading_pane_t2

0x297a,	// (0x000503e8) cale_month_day_heading_pane_t3

0x2a0b,	// (0x00050479) cale_month_day_heading_pane_t4

0x2a9c,	// (0x0005050a) cale_month_day_heading_pane_t5

0x2b35,	// (0x000505a3) cale_month_day_heading_pane_t6

0x2bd6,	// (0x00050644) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0005cd1f) cale_month_day_heading_pane_t

0xaa29,	// (0x00058497) bg_cale_side_pane_cp01

0x2c7f,	// (0x000506ed) cale_month_week_pane_t1

0x2cb8,	// (0x00050726) cale_month_week_pane_t2

0x2cf1,	// (0x0005075f) cale_month_week_pane_t3

0x2d2a,	// (0x00050798) cale_month_week_pane_t4

0x2d63,	// (0x000507d1) cale_month_week_pane_t5

0x2d9c,	// (0x0005080a) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0005cd2e) cale_month_week_pane_t

0x2dd9,	// (0x00050847) cell_cale_month_pane_ParamLimits

0x2dd9,	// (0x00050847) cell_cale_month_pane

0xa1f1,	// (0x00057c5f) cell_cale_month_pane_g1

0x2ef7,	// (0x00050965) cell_cale_month_pane_t1_ParamLimits

0x2ef7,	// (0x00050965) cell_cale_month_pane_t1

0xaa37,	// (0x000584a5) grid_highlight_pane_cp08

0xa0d9,	// (0x00057b47) main_smil_g1

0x2f17,	// (0x00050985) smil_status_pane

0xadce,	// (0x0005883c) smil_text_pane

0xc617,	// (0x0005a085) bg_popup_call3_rect_pane_g8

0xc61f,	// (0x0005a08d) bg_popup_call3_rect_pane_g9

0x0008,

0xf580,	// (0x0005cfee) bg_popup_call3_rect_pane_g

0xc8ad,	// (0x0005a31b) smil_status_volume_pane_g1

0x2f2a,	// (0x00050998) smil_status_pane_t1

0xa2ef,	// (0x00057d5d) volume_smil_pane

0xadd8,	// (0x00058846) list_smil_text_pane

0x2f43,	// (0x000509b1) scroll_pane_cp011

0x2f4e,	// (0x000509bc) smil_text_list_pane_t1_ParamLimits

0x2f4e,	// (0x000509bc) smil_text_list_pane_t1

0xa1fd,	// (0x00057c6b) aid_volume_smil_ParamLimits

0xa1fd,	// (0x00057c6b) aid_volume_smil

0xa0d9,	// (0x00057b47) smil_volume_pane_g1

0xa0d9,	// (0x00057b47) smil_volume_pane_g2

0x0001,

0xf2e7,	// (0x0005cd55) smil_volume_pane_g

0x2f87,	// (0x000509f5) listscroll_cale_day_pane

0xade2,	// (0x00058850) bg_cale_pane

0xadfa,	// (0x00058868) list_cale_pane

0xae1d,	// (0x0005888b) scroll_pane_cp09

0xae2e,	// (0x0005889c) cale_bg_pane_g1

0xae36,	// (0x000588a4) cale_bg_pane_g2

0xae3e,	// (0x000588ac) cale_bg_pane_g3

0xae46,	// (0x000588b4) cale_bg_pane_g4

0xae4e,	// (0x000588bc) cale_bg_pane_g5

0xae56,	// (0x000588c4) cale_bg_pane_g6

0xae5e,	// (0x000588cc) cale_bg_pane_g7

0xae66,	// (0x000588d4) cale_bg_pane_g8

0xae6e,	// (0x000588dc) cale_bg_pane_g9

0x0008,

0xf2ec,	// (0x0005cd5a) cale_bg_pane_g

0xae76,	// (0x000588e4) list_cale_time_pane_ParamLimits

0xae76,	// (0x000588e4) list_cale_time_pane

0xae8b,	// (0x000588f9) list_cale_time_pane_g1_ParamLimits

0xae8b,	// (0x000588f9) list_cale_time_pane_g1

0xae97,	// (0x00058905) list_cale_time_pane_g2_ParamLimits

0xae97,	// (0x00058905) list_cale_time_pane_g2

0x2fa9,	// (0x00050a17) list_cale_time_pane_g3_ParamLimits

0x2fa9,	// (0x00050a17) list_cale_time_pane_g3

0x2fb7,	// (0x00050a25) list_cale_time_pane_g4_ParamLimits

0x2fb7,	// (0x00050a25) list_cale_time_pane_g4

0x2fc5,	// (0x00050a33) list_cale_time_pane_g5_ParamLimits

0x2fc5,	// (0x00050a33) list_cale_time_pane_g5

0x0005,

0xf2ff,	// (0x0005cd6d) list_cale_time_pane_g_ParamLimits

0xf2ff,	// (0x0005cd6d) list_cale_time_pane_g

0xaeb1,	// (0x0005891f) list_cale_time_pane_t1_ParamLimits

0xaeb1,	// (0x0005891f) list_cale_time_pane_t1

0xaed9,	// (0x00058947) list_cale_time_pane_t2_ParamLimits

0xaed9,	// (0x00058947) list_cale_time_pane_t2

0x3293,	// (0x00050d01) aid_blid_cardinal_pane

0x32d1,	// (0x00050d3f) compass_pane_t4

0xaf01,	// (0x0005896f) list_cale_time_pane_t4_ParamLimits

0xaf01,	// (0x0005896f) list_cale_time_pane_t4

0x32df,	// (0x00050d4d) compass_pane_t5

0x32ed,	// (0x00050d5b) compass_pane_t6

0x32fb,	// (0x00050d69) compass_pane_t7

0xb31b,	// (0x00058d89) navi_pane_cc_t1

0xb470,	// (0x00058ede) aid_phob_thumbnail_center_pane

0x3a79,	// (0x000514e7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30c,	// (0x0005cd7a) list_cale_time_pane_t_ParamLimits

0xf30c,	// (0x0005cd7a) list_cale_time_pane_t

0x9975,	// (0x000573e3) bg_popup_window_pane_cp02_ParamLimits

0x9975,	// (0x000573e3) bg_popup_window_pane_cp02

0xaf29,	// (0x00058997) heading_pane_cp01_ParamLimits

0xaf29,	// (0x00058997) heading_pane_cp01

0xaf35,	// (0x000589a3) loc_req_pane_ParamLimits

0xaf35,	// (0x000589a3) loc_req_pane

0xaf45,	// (0x000589b3) loc_type_pane_ParamLimits

0xaf45,	// (0x000589b3) loc_type_pane

0xaf57,	// (0x000589c5) loc_type_pane_t1_ParamLimits

0xaf57,	// (0x000589c5) loc_type_pane_t1

0xaf69,	// (0x000589d7) loc_type_pane_t2_ParamLimits

0xaf69,	// (0x000589d7) loc_type_pane_t2

0xaf7b,	// (0x000589e9) loc_type_pane_t3_ParamLimits

0xaf7b,	// (0x000589e9) loc_type_pane_t3

0x0002,

0xf313,	// (0x0005cd81) loc_type_pane_t_ParamLimits

0xf313,	// (0x0005cd81) loc_type_pane_t

0xaf8d,	// (0x000589fb) list_loc_req_pane

0xaf97,	// (0x00058a05) scroll_pane_cp012

0x2fd3,	// (0x00050a41) list_single_loc_request_popup_menu_pane_ParamLimits

0x2fd3,	// (0x00050a41) list_single_loc_request_popup_menu_pane

0xafa2,	// (0x00058a10) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafa2,	// (0x00058a10) list_single_loc_request_popup_menu_pane_g1

0xafae,	// (0x00058a1c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafae,	// (0x00058a1c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf31a,	// (0x0005cd88) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf31a,	// (0x0005cd88) list_single_loc_request_popup_menu_pane_g

0xafba,	// (0x00058a28) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafba,	// (0x00058a28) list_single_loc_request_popup_menu_pane_t1

0x9f79,	// (0x000579e7) bg_popup_window_pane_cp03_ParamLimits

0x9f79,	// (0x000579e7) bg_popup_window_pane_cp03

0xafd0,	// (0x00058a3e) heading_loc_req_pane_ParamLimits

0xafd0,	// (0x00058a3e) heading_loc_req_pane

0x2fe0,	// (0x00050a4e) popup_dyc_status_message_window_g1_ParamLimits

0x2fe0,	// (0x00050a4e) popup_dyc_status_message_window_g1

0x2ff4,	// (0x00050a62) popup_dyc_status_message_window_t1_ParamLimits

0x2ff4,	// (0x00050a62) popup_dyc_status_message_window_t1

0x3009,	// (0x00050a77) popup_dyc_status_message_window_t2_ParamLimits

0x3009,	// (0x00050a77) popup_dyc_status_message_window_t2

0x301e,	// (0x00050a8c) popup_dyc_status_message_window_t3_ParamLimits

0x301e,	// (0x00050a8c) popup_dyc_status_message_window_t3

0x0002,

0xf31f,	// (0x0005cd8d) popup_dyc_status_message_window_t_ParamLimits

0xf31f,	// (0x0005cd8d) popup_dyc_status_message_window_t

0x9d1e,	// (0x0005778c) bg_heading_pane_cp01

0xafdc,	// (0x00058a4a) heading_loc_req_pane_g1

0xafe4,	// (0x00058a52) heading_loc_req_pane_g2

0xafec,	// (0x00058a5a) heading_loc_req_pane_g3

0x0002,

0xf326,	// (0x0005cd94) heading_loc_req_pane_g

0xaff4,	// (0x00058a62) heading_loc_req_pane_t1

0xb004,	// (0x00058a72) bg_popup_sub_pane_cp01_ParamLimits

0xb004,	// (0x00058a72) bg_popup_sub_pane_cp01

0xb012,	// (0x00058a80) popup_cale_events_window_g1_ParamLimits

0xb012,	// (0x00058a80) popup_cale_events_window_g1

0xb032,	// (0x00058aa0) popup_cale_events_window_g2_ParamLimits

0xb032,	// (0x00058aa0) popup_cale_events_window_g2

0x0001,

0xf35a,	// (0x0005cdc8) popup_cale_events_window_g_ParamLimits

0xf35a,	// (0x0005cdc8) popup_cale_events_window_g

0xb052,	// (0x00058ac0) popup_cale_events_window_t1_ParamLimits

0xb052,	// (0x00058ac0) popup_cale_events_window_t1

0xb064,	// (0x00058ad2) popup_cale_events_window_t2_ParamLimits

0xb064,	// (0x00058ad2) popup_cale_events_window_t2

0xb0a2,	// (0x00058b10) popup_cale_events_window_t3_ParamLimits

0xb0a2,	// (0x00058b10) popup_cale_events_window_t3

0xb0dc,	// (0x00058b4a) popup_cale_events_window_t4_ParamLimits

0xb0dc,	// (0x00058b4a) popup_cale_events_window_t4

0x0003,

0xf35f,	// (0x0005cdcd) popup_cale_events_window_t_ParamLimits

0xf35f,	// (0x0005cdcd) popup_cale_events_window_t

0x3052,	// (0x00050ac0) call_type_pane

0x3062,	// (0x00050ad0) popup_call_status_window_g1

0x3076,	// (0x00050ae4) popup_call_status_window_g2

0x308a,	// (0x00050af8) popup_call_status_window_g3

0x0002,

0xf368,	// (0x0005cdd6) popup_call_status_window_g

0xb112,	// (0x00058b80) call_type_pane_g1

0xb11b,	// (0x00058b89) call_type_pane_g2

0x0001,

0xf36f,	// (0x0005cddd) call_type_pane_g

0x9d1e,	// (0x0005778c) bg_popup_sub_pane_cp02

0xb124,	// (0x00058b92) listscroll_popup_wml_pane

0xb12c,	// (0x00058b9a) list_wml_pane

0xb136,	// (0x00058ba4) scroll_pane_cp013

0xb141,	// (0x00058baf) list_single_graphic_popup_wml_pane_ParamLimits

0xb141,	// (0x00058baf) list_single_graphic_popup_wml_pane

0xa0d9,	// (0x00057b47) list_single_graphic_popup_wml_pane_g1

0xb155,	// (0x00058bc3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf374,	// (0x0005cde2) list_single_graphic_popup_wml_pane_g

0xb15d,	// (0x00058bcb) list_single_graphic_popup_wml_pane_t1

0xb173,	// (0x00058be1) aid_call_pane

0x9f71,	// (0x000579df) popup_clock_analogue_window_g1

0x9f71,	// (0x000579df) popup_clock_analogue_window_g2

0xa21f,	// (0x00057c8d) popup_clock_analogue_window_g3

0xa21f,	// (0x00057c8d) popup_clock_analogue_window_g4

0xa0d9,	// (0x00057b47) popup_clock_analogue_window_g5

0x0004,

0xf379,	// (0x0005cde7) popup_clock_analogue_window_g

0xa227,	// (0x00057c95) popup_clock_analogue_window_t1

0xa235,	// (0x00057ca3) clock_digital_number_pane_ParamLimits

0xa235,	// (0x00057ca3) clock_digital_number_pane

0xa241,	// (0x00057caf) clock_digital_number_pane_cp02_ParamLimits

0xa241,	// (0x00057caf) clock_digital_number_pane_cp02

0xa24d,	// (0x00057cbb) clock_digital_number_pane_cp03_ParamLimits

0xa24d,	// (0x00057cbb) clock_digital_number_pane_cp03

0xa259,	// (0x00057cc7) clock_digital_number_pane_cp04_ParamLimits

0xa259,	// (0x00057cc7) clock_digital_number_pane_cp04

0xa265,	// (0x00057cd3) clock_digital_separator_pane_ParamLimits

0xa265,	// (0x00057cd3) clock_digital_separator_pane

0xa271,	// (0x00057cdf) popup_clock_digital_window_t1

0xa0d9,	// (0x00057b47) clock_digital_number_pane_g1

0xa0d9,	// (0x00057b47) clock_digital_number_pane_g2

0x0001,

0xf2e7,	// (0x0005cd55) clock_digital_number_pane_g

0xa0d9,	// (0x00057b47) clock_digital_separator_pane_g1

0xa0d9,	// (0x00057b47) clock_digital_separator_pane_g2

0x0001,

0xf2e7,	// (0x0005cd55) clock_digital_separator_pane_g

0x9d1e,	// (0x0005778c) bg_popup_window_pane_cp04

0xb17b,	// (0x00058be9) heading_pane_cp03

0xb183,	// (0x00058bf1) listscroll_popup_gms_pane

0xb18b,	// (0x00058bf9) grid_large_graphic_popup_pane

0xb195,	// (0x00058c03) listscroll_popup_gms_pane_g1

0xb19d,	// (0x00058c0b) listscroll_popup_gms_pane_g2

0x0001,

0xf384,	// (0x0005cdf2) listscroll_popup_gms_pane_g

0xac33,	// (0x000586a1) scroll_pane_cp014

0x309a,	// (0x00050b08) cell_large_graphic_popup_pane_ParamLimits

0x309a,	// (0x00050b08) cell_large_graphic_popup_pane

0x30b2,	// (0x00050b20) cell_large_graphic_popup_pane_g1_ParamLimits

0x30b2,	// (0x00050b20) cell_large_graphic_popup_pane_g1

0xb1a5,	// (0x00058c13) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1a5,	// (0x00058c13) cell_large_graphic_popup_pane_g2

0xb1b1,	// (0x00058c1f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1b1,	// (0x00058c1f) cell_large_graphic_popup_pane_g3

0xb1be,	// (0x00058c2c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1be,	// (0x00058c2c) cell_large_graphic_popup_pane_g4

0x0003,

0xf389,	// (0x0005cdf7) cell_large_graphic_popup_pane_g_ParamLimits

0xf389,	// (0x0005cdf7) cell_large_graphic_popup_pane_g

0xb1ce,	// (0x00058c3c) grid_highlight_pane_cp010

0xa0d9,	// (0x00057b47) bg_popup_call_pane_g1

0xb1d8,	// (0x00058c46) list_single_graphic_popup_conf_pane_ParamLimits

0xb1d8,	// (0x00058c46) list_single_graphic_popup_conf_pane

0xb1ea,	// (0x00058c58) list_highlight_pane_cp01

0xb1f3,	// (0x00058c61) list_single_graphic_popup_conf_pane_g1

0xb1fb,	// (0x00058c69) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf392,	// (0x0005ce00) list_single_graphic_popup_conf_pane_g

0xb203,	// (0x00058c71) list_single_graphic_popup_conf_pane_t1

0xb211,	// (0x00058c7f) linegrid_cams_pane_g1

0x30be,	// (0x00050b2c) linegrid_cams_pane_g2

0xaa6a,	// (0x000584d8) linegrid_cams_pane_g3

0xb21a,	// (0x00058c88) linegrid_cams_pane_g4

0x30c7,	// (0x00050b35) linegrid_cams_pane_g5

0x30d0,	// (0x00050b3e) linegrid_cams_pane_g6

0xaa73,	// (0x000584e1) linegrid_cams_pane_g7

0x0006,

0xf397,	// (0x0005ce05) linegrid_cams_pane_g

0xb223,	// (0x00058c91) popup_clock_analogue_window

0xb223,	// (0x00058c91) popup_clock_digital_window

0x9d1e,	// (0x0005778c) popup_phob_thumbnail_window

0xa0d9,	// (0x00057b47) call_video_uplink_pane_g1

0xb22c,	// (0x00058c9a) call_video_uplink_pane_g2

0x0001,

0xf3a6,	// (0x0005ce14) call_video_uplink_pane_g

0xb234,	// (0x00058ca2) video_uplink_pane

0xb23c,	// (0x00058caa) mce_image_pane_g1

0x30db,	// (0x00050b49) mce_image_pane_g2

0x30e5,	// (0x00050b53) mce_image_pane_g3

0x30ef,	// (0x00050b5d) mce_image_pane_g4

0x30f7,	// (0x00050b65) mce_image_pane_g5

0x0004,

0xf3ab,	// (0x0005ce19) mce_image_pane_g

0xb246,	// (0x00058cb4) control_top_pane_stacon_cp01_ParamLimits

0xb246,	// (0x00058cb4) control_top_pane_stacon_cp01

0xb25a,	// (0x00058cc8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb25a,	// (0x00058cc8) uni_indicator_pane_stacon_cp01

0xb26b,	// (0x00058cd9) bg_popup_sub_pane_cp03

0x30ff,	// (0x00050b6d) chi_dic_find_pane

0x3107,	// (0x00050b75) listscroll_chi_dic_pane

0x3110,	// (0x00050b7e) main_pane_chidic_g1

0x3123,	// (0x00050b91) chi_dic_find_pane_t1

0xb275,	// (0x00058ce3) find_chidic_pane

0xb27e,	// (0x00058cec) chi_dic_list_pane_ParamLimits

0xb27e,	// (0x00058cec) chi_dic_list_pane

0xb28f,	// (0x00058cfd) scroll_pane_cp020

0x3131,	// (0x00050b9f) find_chidic_pane_t1

0x9d1e,	// (0x0005778c) input_focus_pane_cp06

0x0f3e,	// (0x0004e9ac) list_chi_dic_pane_ParamLimits

0x0f3e,	// (0x0004e9ac) list_chi_dic_pane

0x3140,	// (0x00050bae) list_chi_dic_pane_t1_ParamLimits

0x3140,	// (0x00050bae) list_chi_dic_pane_t1

0x9d1e,	// (0x0005778c) list_highlight_pane_cp020

0xb297,	// (0x00058d05) bg_cale_heading_pane_g1

0x3153,	// (0x00050bc1) bg_cale_heading_pane_g2

0x315b,	// (0x00050bc9) bg_cale_heading_pane_g3

0x3163,	// (0x00050bd1) bg_cale_heading_pane_g4

0x316d,	// (0x00050bdb) bg_cale_heading_pane_g5

0x3177,	// (0x00050be5) bg_cale_heading_pane_g6

0x317f,	// (0x00050bed) bg_cale_heading_pane_g7

0x3187,	// (0x00050bf5) bg_cale_heading_pane_g8

0x3191,	// (0x00050bff) bg_cale_heading_pane_g9

0x0008,

0xf3b6,	// (0x0005ce24) bg_cale_heading_pane_g

0xb297,	// (0x00058d05) bg_cale_side_pane_g1

0x319b,	// (0x00050c09) bg_cale_side_pane_g2

0x31a5,	// (0x00050c13) bg_cale_side_pane_g3

0x31af,	// (0x00050c1d) bg_cale_side_pane_g4

0x31b9,	// (0x00050c27) bg_cale_side_pane_g5

0x31c3,	// (0x00050c31) bg_cale_side_pane_g6

0x31cd,	// (0x00050c3b) bg_cale_side_pane_g7

0x31d7,	// (0x00050c45) bg_cale_side_pane_g8

0x31df,	// (0x00050c4d) bg_cale_side_pane_g9

0x0008,

0xf3c9,	// (0x0005ce37) bg_cale_side_pane_g

0x31e7,	// (0x00050c55) popup_call_status_window_ParamLimits

0x31e7,	// (0x00050c55) popup_call_status_window

0xb29f,	// (0x00058d0d) stacon_top_pane

0xb2a7,	// (0x00058d15) status_pane_ParamLimits

0xb2a7,	// (0x00058d15) status_pane

0xb2bc,	// (0x00058d2a) status_small_pane

0xb2c4,	// (0x00058d32) control_pane

0x9d1e,	// (0x0005778c) stacon_bottom_pane

0xb2cc,	// (0x00058d3a) list_single_mce_smart_pane_t1_ParamLimits

0xb2cc,	// (0x00058d3a) list_single_mce_smart_pane_t1

0xb2df,	// (0x00058d4d) list_single_mce_smart_pane_t2_ParamLimits

0xb2df,	// (0x00058d4d) list_single_mce_smart_pane_t2

0x0001,

0xf3dc,	// (0x0005ce4a) list_single_mce_smart_pane_t_ParamLimits

0xf3dc,	// (0x0005ce4a) list_single_mce_smart_pane_t

0x3234,	// (0x00050ca2) compass_pane

0x323f,	// (0x00050cad) main_location2_pane_t1

0x3253,	// (0x00050cc1) main_location2_pane_t2

0x3269,	// (0x00050cd7) main_location2_pane_t3

0x0003,

0xf3e1,	// (0x0005ce4f) main_location2_pane_t

0xb2fe,	// (0x00058d6c) compass_pane_g1_ParamLimits

0xb2fe,	// (0x00058d6c) compass_pane_g1

0x32b3,	// (0x00050d21) compass_pane_t1

0x32c2,	// (0x00050d30) compass_pane_t2

0x0005,

0xf3ea,	// (0x0005ce58) compass_pane_t

0x3309,	// (0x00050d77) text_secondary_cp61

0xb312,	// (0x00058d80) navi_pane_cams_g5

0xb335,	// (0x00058da3) navi_pane_im_t1

0xb343,	// (0x00058db1) navi_pane_mp_g1_ParamLimits

0xb343,	// (0x00058db1) navi_pane_mp_g1

0xb357,	// (0x00058dc5) navi_pane_mp_g2_ParamLimits

0xb357,	// (0x00058dc5) navi_pane_mp_g2

0xb363,	// (0x00058dd1) navi_pane_mp_g3_ParamLimits

0xb363,	// (0x00058dd1) navi_pane_mp_g3

0x0002,

0xf3fe,	// (0x0005ce6c) navi_pane_mp_g_ParamLimits

0xf3fe,	// (0x0005ce6c) navi_pane_mp_g

0xb36f,	// (0x00058ddd) navi_pane_mp_t1

0xb37d,	// (0x00058deb) navi_pane_mp_t2

0x0002,

0xf405,	// (0x0005ce73) navi_pane_mp_t

0xb3b9,	// (0x00058e27) navi_pane_vt_g1

0xb36f,	// (0x00058ddd) navi_pane_vt_t1

0xb3c1,	// (0x00058e2f) navi_slider_pane

0xb3c9,	// (0x00058e37) zooming_pane

0xb3d1,	// (0x00058e3f) navi_slider_pane_g1

0xa28e,	// (0x00057cfc) navi_slider_pane_g2

0x0006,

0xf40c,	// (0x0005ce7a) navi_slider_pane_g

0xb3f5,	// (0x00058e63) aid_levels_zoom

0xb3fd,	// (0x00058e6b) zooming_pane_g1

0xb405,	// (0x00058e73) zooming_pane_g2

0xb405,	// (0x00058e73) zooming_pane_g3

0x0002,

0xf41b,	// (0x0005ce89) zooming_pane_g

0xb40d,	// (0x00058e7b) level_10_zoom

0xb416,	// (0x00058e84) level_11_zoom

0xb41f,	// (0x00058e8d) level_1_zoom

0xb428,	// (0x00058e96) level_2_zoom

0xb431,	// (0x00058e9f) level_3_zoom

0xb43a,	// (0x00058ea8) level_4_zoom

0xb443,	// (0x00058eb1) level_5_zoom

0xb44c,	// (0x00058eba) level_6_zoom

0xb455,	// (0x00058ec3) level_7_zoom

0xb45e,	// (0x00058ecc) level_8_zoom

0xb467,	// (0x00058ed5) level_9_zoom

0xb478,	// (0x00058ee6) popup_phob_thumbnail_window_g1

0xb480,	// (0x00058eee) popup_phob_thumbnail_window_g2

0x0001,

0xf422,	// (0x0005ce90) popup_phob_thumbnail_window_g

0xc77d,	// (0x0005a1eb) level_1_location

0xc785,	// (0x0005a1f3) level_2_location

0xc78d,	// (0x0005a1fb) level_3_location

0xc795,	// (0x0005a203) level_4_location

0xb3c9,	// (0x00058e37) level_5_location

0x3452,	// (0x00050ec0) mce_icon_pane_g1

0x345c,	// (0x00050eca) mce_icon_pane_g2

0x0001,

0xf427,	// (0x0005ce95) mce_icon_pane_g

0x3464,	// (0x00050ed2) main_mup_pane_g1_ParamLimits

0x3464,	// (0x00050ed2) main_mup_pane_g1

0x347a,	// (0x00050ee8) main_mup_pane_g2_ParamLimits

0x347a,	// (0x00050ee8) main_mup_pane_g2

0x3492,	// (0x00050f00) main_mup_pane_g3_ParamLimits

0x3492,	// (0x00050f00) main_mup_pane_g3

0x34aa,	// (0x00050f18) main_mup_pane_g4_ParamLimits

0x34aa,	// (0x00050f18) main_mup_pane_g4

0x34c2,	// (0x00050f30) main_mup_pane_g5_ParamLimits

0x34c2,	// (0x00050f30) main_mup_pane_g5

0x34de,	// (0x00050f4c) main_mup_pane_g6_ParamLimits

0x34de,	// (0x00050f4c) main_mup_pane_g6

0x34f8,	// (0x00050f66) main_mup_pane_g7_ParamLimits

0x34f8,	// (0x00050f66) main_mup_pane_g7

0x3516,	// (0x00050f84) main_mup_pane_g8_ParamLimits

0x3516,	// (0x00050f84) main_mup_pane_g8

0x3534,	// (0x00050fa2) main_mup_pane_g9_ParamLimits

0x3534,	// (0x00050fa2) main_mup_pane_g9

0x3550,	// (0x00050fbe) main_mup_pane_g10_ParamLimits

0x3550,	// (0x00050fbe) main_mup_pane_g10

0x356e,	// (0x00050fdc) main_mup_pane_g11_ParamLimits

0x356e,	// (0x00050fdc) main_mup_pane_g11

0x3588,	// (0x00050ff6) main_mup_pane_g12_ParamLimits

0x3588,	// (0x00050ff6) main_mup_pane_g12

0x359e,	// (0x0005100c) main_mup_pane_g13_ParamLimits

0x359e,	// (0x0005100c) main_mup_pane_g13

0x000c,

0xf42c,	// (0x0005ce9a) main_mup_pane_g_ParamLimits

0xf42c,	// (0x0005ce9a) main_mup_pane_g

0x35b2,	// (0x00051020) main_mup_pane_t1_ParamLimits

0x35b2,	// (0x00051020) main_mup_pane_t1

0x35ce,	// (0x0005103c) main_mup_pane_t2_ParamLimits

0x35ce,	// (0x0005103c) main_mup_pane_t2

0x35e6,	// (0x00051054) main_mup_pane_t3_ParamLimits

0x35e6,	// (0x00051054) main_mup_pane_t3

0x35fe,	// (0x0005106c) main_mup_pane_t4_ParamLimits

0x35fe,	// (0x0005106c) main_mup_pane_t4

0x361c,	// (0x0005108a) main_mup_pane_t5_ParamLimits

0x361c,	// (0x0005108a) main_mup_pane_t5

0x3631,	// (0x0005109f) main_mup_pane_t6_ParamLimits

0x3631,	// (0x0005109f) main_mup_pane_t6

0x0005,

0xf447,	// (0x0005ceb5) main_mup_pane_t_ParamLimits

0xf447,	// (0x0005ceb5) main_mup_pane_t

0x3643,	// (0x000510b1) mup_progress_pane_ParamLimits

0x3643,	// (0x000510b1) mup_progress_pane

0x364f,	// (0x000510bd) mup_visualizer_pane_ParamLimits

0x364f,	// (0x000510bd) mup_visualizer_pane

0x3683,	// (0x000510f1) mup_volume_pane_ParamLimits

0x3683,	// (0x000510f1) mup_volume_pane

0xb488,	// (0x00058ef6) mup_visualizer_pane_g1_ParamLimits

0xb488,	// (0x00058ef6) mup_visualizer_pane_g1

0xb488,	// (0x00058ef6) mup_visualizer_pane_g2_ParamLimits

0xb488,	// (0x00058ef6) mup_visualizer_pane_g2

0xb2fe,	// (0x00058d6c) mup_visualizer_pane_g3_ParamLimits

0xb2fe,	// (0x00058d6c) mup_visualizer_pane_g3

0x0002,

0xf454,	// (0x0005cec2) mup_visualizer_pane_g_ParamLimits

0xf454,	// (0x0005cec2) mup_visualizer_pane_g

0xa0d9,	// (0x00057b47) mup_volume_pane_g1

0xb49e,	// (0x00058f0c) mup_volume_pane_g2

0x0001,

0xf45b,	// (0x0005cec9) mup_volume_pane_g

0xa0d9,	// (0x00057b47) mup_progress_pane_g1

0xb4a7,	// (0x00058f15) mup_progress_pane_g2

0xb4b0,	// (0x00058f1e) mup_progress_pane_g3

0x0002,

0xf460,	// (0x0005cece) mup_progress_pane_g

0x9d1e,	// (0x0005778c) bg_popup_window_pane_cp05

0xb4b9,	// (0x00058f27) heading_pane_cp02_ParamLimits

0xb4b9,	// (0x00058f27) heading_pane_cp02

0xb4d5,	// (0x00058f43) list_popup_blid_pane

0xb4dd,	// (0x00058f4b) list_blid_sat_info_pane_ParamLimits

0xb4dd,	// (0x00058f4b) list_blid_sat_info_pane

0xb4f0,	// (0x00058f5e) list_blid_sat_info_pane_g1

0xb4f8,	// (0x00058f66) list_blid_sat_info_pane_t1

0x37ad,	// (0x0005121b) mup_equalizer_pane_ParamLimits

0x37ad,	// (0x0005121b) mup_equalizer_pane

0x37ce,	// (0x0005123c) mup_equalizer_pane_cp1_ParamLimits

0x37ce,	// (0x0005123c) mup_equalizer_pane_cp1

0x37ef,	// (0x0005125d) mup_equalizer_pane_cp2_ParamLimits

0x37ef,	// (0x0005125d) mup_equalizer_pane_cp2

0x3814,	// (0x00051282) mup_equalizer_pane_cp3_ParamLimits

0x3814,	// (0x00051282) mup_equalizer_pane_cp3

0x383d,	// (0x000512ab) mup_equalizer_pane_cp4_ParamLimits

0x383d,	// (0x000512ab) mup_equalizer_pane_cp4

0x3866,	// (0x000512d4) mup_equalizer_pane_cp5

0x387e,	// (0x000512ec) mup_equalizer_pane_cp6

0x3896,	// (0x00051304) mup_equalizer_pane_cp7

0xc697,	// (0x0005a105) bg_popup_call_poc_act_pane_g9

0xc69f,	// (0x0005a10d) bg_popup_call_poc_act_pane_g10

0xc6a7,	// (0x0005a115) bg_popup_call_poc_act_pane_g11

0x000a,

0x9f79,	// (0x000579e7) mup_scale_pane

0xa0d9,	// (0x00057b47) mup_scale_pane_g1

0xb506,	// (0x00058f74) mup_scale_pane_g2

0x0006,

0xf47c,	// (0x0005ceea) mup_scale_pane_g

0xb52a,	// (0x00058f98) msg_data_pane

0xb532,	// (0x00058fa0) scroll_pane_cp017

0x38c0,	// (0x0005132e) bg_list_pane_cp04_ParamLimits

0x38c0,	// (0x0005132e) bg_list_pane_cp04

0xb53a,	// (0x00058fa8) msg_data_pane_g1

0x38e0,	// (0x0005134e) msg_data_pane_g2

0x38ea,	// (0x00051358) msg_data_pane_g3

0x38f4,	// (0x00051362) msg_data_pane_g4

0x38fc,	// (0x0005136a) msg_data_pane_g5

0x3904,	// (0x00051372) msg_data_pane_g6

0x390c,	// (0x0005137a) msg_data_pane_g7

0x0006,

0xf48b,	// (0x0005cef9) msg_data_pane_g

0x3914,	// (0x00051382) msg_text_pane_ParamLimits

0x3914,	// (0x00051382) msg_text_pane

0x393c,	// (0x000513aa) qrid_highlight_pane_cp011_ParamLimits

0x393c,	// (0x000513aa) qrid_highlight_pane_cp011

0x9d1e,	// (0x0005778c) msg_body_pane

0x9d1e,	// (0x0005778c) msg_header_pane

0xb542,	// (0x00058fb0) input_focus_pane_cp07

0xb557,	// (0x00058fc5) msg_header_pane_t1_ParamLimits

0xb557,	// (0x00058fc5) msg_header_pane_t1

0x395d,	// (0x000513cb) msg_header_pane_t2_ParamLimits

0x395d,	// (0x000513cb) msg_header_pane_t2

0x0001,

0xf49f,	// (0x0005cf0d) msg_header_pane_t_ParamLimits

0xf49f,	// (0x0005cf0d) msg_header_pane_t

0xb569,	// (0x00058fd7) msg_body_pane_g1

0xff48,	// (0x0004d9b6) msg_body_pane_t1_ParamLimits

0xff48,	// (0x0004d9b6) msg_body_pane_t1

0x396f,	// (0x000513dd) msg_body_pane_t2_ParamLimits

0x396f,	// (0x000513dd) msg_body_pane_t2

0x3981,	// (0x000513ef) msg_body_pane_t3_ParamLimits

0x3981,	// (0x000513ef) msg_body_pane_t3

0x0002,

0xf4a4,	// (0x0005cf12) msg_body_pane_t_ParamLimits

0xf4a4,	// (0x0005cf12) msg_body_pane_t

0x39cd,	// (0x0005143b) main_viewer_pane_g1_ParamLimits

0x39cd,	// (0x0005143b) main_viewer_pane_g1

0x39db,	// (0x00051449) main_viewer_pane_g2_ParamLimits

0x39db,	// (0x00051449) main_viewer_pane_g2

0x39e9,	// (0x00051457) main_viewer_pane_g3_ParamLimits

0x39e9,	// (0x00051457) main_viewer_pane_g3

0x39f8,	// (0x00051466) main_viewer_pane_g4_ParamLimits

0x39f8,	// (0x00051466) main_viewer_pane_g4

0xa2b8,	// (0x00057d26) main_viewer_pane_g5_ParamLimits

0xa2b8,	// (0x00057d26) main_viewer_pane_g5

0xa2b8,	// (0x00057d26) main_viewer_pane_g7_ParamLimits

0xa2b8,	// (0x00057d26) main_viewer_pane_g7

0xa2ca,	// (0x00057d38) main_viewer_pane_g8_ParamLimits

0xa2ca,	// (0x00057d38) main_viewer_pane_g8

0x0007,

0xf4b4,	// (0x0005cf22) main_viewer_pane_g_ParamLimits

0xf4b4,	// (0x0005cf22) main_viewer_pane_g

0xb571,	// (0x00058fdf) viewer_content_pane_ParamLimits

0xb571,	// (0x00058fdf) viewer_content_pane

0x3a36,	// (0x000514a4) main_postcard_pane_g1_ParamLimits

0x3a36,	// (0x000514a4) main_postcard_pane_g1

0x3a4c,	// (0x000514ba) main_postcard_pane_g2_ParamLimits

0x3a4c,	// (0x000514ba) main_postcard_pane_g2

0x3a62,	// (0x000514d0) main_postcard_pane_g3_ParamLimits

0x3a62,	// (0x000514d0) main_postcard_pane_g3

0x0005,

0xf4c5,	// (0x0005cf33) main_postcard_pane_g_ParamLimits

0xf4c5,	// (0x0005cf33) main_postcard_pane_g

0x3a79,	// (0x000514e7) main_postcard_pane_g4

0xc8c0,	// (0x0005a32e) smil_status_volume_pane_g2

0x3abc,	// (0x0005152a) postcard_pane_ParamLimits

0x3abc,	// (0x0005152a) postcard_pane

0xb57f,	// (0x00058fed) postcard_pane_g1_ParamLimits

0xb57f,	// (0x00058fed) postcard_pane_g1

0x3b0c,	// (0x0005157a) postcard_pane_g2_ParamLimits

0x3b0c,	// (0x0005157a) postcard_pane_g2

0x3b18,	// (0x00051586) postcard_pane_g3_ParamLimits

0x3b18,	// (0x00051586) postcard_pane_g3

0xb58d,	// (0x00058ffb) postcard_pane_g4_ParamLimits

0xb58d,	// (0x00058ffb) postcard_pane_g4

0x3b24,	// (0x00051592) postcard_pane_g5_ParamLimits

0x3b24,	// (0x00051592) postcard_pane_g5

0x3b39,	// (0x000515a7) postcard_pane_g6_ParamLimits

0x3b39,	// (0x000515a7) postcard_pane_g6

0xb57f,	// (0x00058fed) postcard_pane_g7_ParamLimits

0xb57f,	// (0x00058fed) postcard_pane_g7

0x0006,

0xf4d2,	// (0x0005cf40) postcard_pane_g_ParamLimits

0xf4d2,	// (0x0005cf40) postcard_pane_g

0x3b51,	// (0x000515bf) main_mp2_pane_g1_ParamLimits

0x3b51,	// (0x000515bf) main_mp2_pane_g1

0x3b5f,	// (0x000515cd) main_mp2_pane_g2_ParamLimits

0x3b5f,	// (0x000515cd) main_mp2_pane_g2

0x3b6b,	// (0x000515d9) main_mp2_pane_g3_ParamLimits

0x3b6b,	// (0x000515d9) main_mp2_pane_g3

0x0002,

0xf4e1,	// (0x0005cf4f) main_mp2_pane_g_ParamLimits

0xf4e1,	// (0x0005cf4f) main_mp2_pane_g

0x3b77,	// (0x000515e5) main_mp2_pane_t1_ParamLimits

0x3b77,	// (0x000515e5) main_mp2_pane_t1

0x3b8e,	// (0x000515fc) main_mp2_pane_t2_ParamLimits

0x3b8e,	// (0x000515fc) main_mp2_pane_t2

0x3ba0,	// (0x0005160e) main_mp2_pane_t3_ParamLimits

0x3ba0,	// (0x0005160e) main_mp2_pane_t3

0x0002,

0xf4e8,	// (0x0005cf56) main_mp2_pane_t_ParamLimits

0xf4e8,	// (0x0005cf56) main_mp2_pane_t

0xb59b,	// (0x00059009) pec_content_pane_ParamLimits

0xb59b,	// (0x00059009) pec_content_pane

0xac33,	// (0x000586a1) scroll_pane_cp015

0xb5ad,	// (0x0005901b) pec_attribute_pane_ParamLimits

0xb5ad,	// (0x0005901b) pec_attribute_pane

0x3bb2,	// (0x00051620) pec_content_pane_g1_ParamLimits

0x3bb2,	// (0x00051620) pec_content_pane_g1

0xb5bd,	// (0x0005902b) pec_content_pane_t1_ParamLimits

0xb5bd,	// (0x0005902b) pec_content_pane_t1

0xb5cf,	// (0x0005903d) pec_content_pane_t2_ParamLimits

0xb5cf,	// (0x0005903d) pec_content_pane_t2

0x0001,

0xf4ef,	// (0x0005cf5d) pec_content_pane_t_ParamLimits

0xf4ef,	// (0x0005cf5d) pec_content_pane_t

0x3bbe,	// (0x0005162c) list_single_graphic_pane_cp01_ParamLimits

0x3bbe,	// (0x0005162c) list_single_graphic_pane_cp01

0x9f79,	// (0x000579e7) bg_popup_sub_pane_cp04

0xb5e1,	// (0x0005904f) popup_mup_playback_window_g1

0xb5ed,	// (0x0005905b) popup_mup_playback_window_t1

0xb602,	// (0x00059070) popup_mup_playback_window_t2

0x0001,

0xf4f4,	// (0x0005cf62) popup_mup_playback_window_t

0xb639,	// (0x000590a7) main_image_pane_g1_ParamLimits

0xb639,	// (0x000590a7) main_image_pane_g1

0xb67c,	// (0x000590ea) scroll_pane_cp018_ParamLimits

0xb67c,	// (0x000590ea) scroll_pane_cp018

0xb694,	// (0x00059102) scroll_pane_cp016_ParamLimits

0xb694,	// (0x00059102) scroll_pane_cp016

0x3c8d,	// (0x000516fb) smil2_image_pane_ParamLimits

0x3c8d,	// (0x000516fb) smil2_image_pane

0x3cc3,	// (0x00051731) smil2_root_pane_ParamLimits

0x3cc3,	// (0x00051731) smil2_root_pane

0x3cfb,	// (0x00051769) smil2_text_pane_ParamLimits

0x3cfb,	// (0x00051769) smil2_text_pane

0x9d1e,	// (0x0005778c) bg_list_pane_cp06

0xb6d0,	// (0x0005913e) grid_radio_pane

0x9d1e,	// (0x0005778c) bg_popup_window_pane_cp06

0xb6da,	// (0x00059148) main_fmradio_pane_t1

0xb17b,	// (0x00058be9) heading_pane_cp04

0xb6e8,	// (0x00059156) main_fmradio_pane_t2

0xc6af,	// (0x0005a11d) popup_cale_lunar_info_window_g1

0xb6f6,	// (0x00059164) main_fmradio_pane_t3

0xc6b7,	// (0x0005a125) popup_cale_lunar_info_window_g2

0xb706,	// (0x00059174) main_fmradio_pane_t4

0x0001,

0xb714,	// (0x00059182) main_fmradio_pane_t5

0x0004,

0xf5cf,	// (0x0005d03d) popup_cale_lunar_info_window_g

0xf509,	// (0x0005cf77) main_fmradio_pane_t

0xb722,	// (0x00059190) wait_bar_pane_cp03

0xae76,	// (0x000588e4) cell_fmradio_pane_ParamLimits

0xae76,	// (0x000588e4) cell_fmradio_pane

0xb57f,	// (0x00058fed) cell_fmradio_pane_g1_ParamLimits

0xb57f,	// (0x00058fed) cell_fmradio_pane_g1

0x9d1e,	// (0x0005778c) grid_highlight_pane_cp011

0xb72a,	// (0x00059198) poc_content_pane_ParamLimits

0xb72a,	// (0x00059198) poc_content_pane

0xb73c,	// (0x000591aa) scroll_pane_cp019

0x3d8b,	// (0x000517f9) popup_call_poc_act_window_ParamLimits

0x3d8b,	// (0x000517f9) popup_call_poc_act_window

0x3daf,	// (0x0005181d) popup_call_poc_inact_window_ParamLimits

0x3daf,	// (0x0005181d) popup_call_poc_inact_window

0xf5a6,	// (0x0005d014) bg_popup_call_poc_act_pane_g

0xc627,	// (0x0005a095) bg_popup_call_poc_inact_pane_g1

0xc62f,	// (0x0005a09d) bg_popup_call_poc_inact_pane_g2

0xb744,	// (0x000591b2) popup_call_poc_act_window_g2

0xc637,	// (0x0005a0a5) bg_popup_call_poc_inact_pane_g3

0xc63f,	// (0x0005a0ad) bg_popup_call_poc_inact_pane_g4

0xc647,	// (0x0005a0b5) bg_popup_call_poc_inact_pane_g5

0xb74c,	// (0x000591ba) popup_call_poc_act_window_t1_ParamLimits

0xb74c,	// (0x000591ba) popup_call_poc_act_window_t1

0xb774,	// (0x000591e2) popup_call_poc_act_window_t2_ParamLimits

0xb774,	// (0x000591e2) popup_call_poc_act_window_t2

0xb79c,	// (0x0005920a) popup_call_poc_act_window_t3_ParamLimits

0xb79c,	// (0x0005920a) popup_call_poc_act_window_t3

0xb7c4,	// (0x00059232) popup_call_poc_act_window_t4_ParamLimits

0xb7c4,	// (0x00059232) popup_call_poc_act_window_t4

0x0003,

0xf514,	// (0x0005cf82) popup_call_poc_act_window_t_ParamLimits

0xf514,	// (0x0005cf82) popup_call_poc_act_window_t

0xc64f,	// (0x0005a0bd) bg_popup_call_poc_inact_pane_g6

0xc657,	// (0x0005a0c5) bg_popup_call_poc_inact_pane_g7

0xc65f,	// (0x0005a0cd) bg_popup_call_poc_inact_pane_g8

0xb7d6,	// (0x00059244) popup_call_poc_inact_window_g2

0xc667,	// (0x0005a0d5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf593,	// (0x0005d001) bg_popup_call_poc_inact_pane_g

0xb7de,	// (0x0005924c) popup_call_poc_inact_window_t1_ParamLimits

0xb7de,	// (0x0005924c) popup_call_poc_inact_window_t1

0xb7f3,	// (0x00059261) popup_call_poc_inact_window_t2_ParamLimits

0xb7f3,	// (0x00059261) popup_call_poc_inact_window_t2

0xb808,	// (0x00059276) popup_call_poc_inact_window_t3_ParamLimits

0xb808,	// (0x00059276) popup_call_poc_inact_window_t3

0x0002,

0xf51d,	// (0x0005cf8b) popup_call_poc_inact_window_t_ParamLimits

0xf51d,	// (0x0005cf8b) popup_call_poc_inact_window_t

0xc833,	// (0x0005a2a1) context_pane_ParamLimits

0x4657,	// (0x000520c5) signal_pane_ParamLimits

0xb3c9,	// (0x00058e37) main_call2_pane

0xc821,	// (0x0005a28f) popup_phob_thumbnail2_window_ParamLimits

0xc821,	// (0x0005a28f) popup_phob_thumbnail2_window

0xa2a0,	// (0x00057d0e) aid_hotspot_pointer_arrow_pane

0xa2a8,	// (0x00057d16) aid_hotspot_pointer_hand_pane

0x4117,	// (0x00051b85) phob_pre_status_pane_g5

0x1ae4,	// (0x0004f552) cams_zoom_pane_ParamLimits

0x1af3,	// (0x0004f561) image_vga_pane_ParamLimits

0x1b0d,	// (0x0004f57b) main_camera_pane_g1_ParamLimits

0x1b1f,	// (0x0004f58d) main_camera_pane_g2_ParamLimits

0x1b2f,	// (0x0004f59d) main_camera_pane_g3_ParamLimits

0x1b43,	// (0x0004f5b1) main_camera_pane_g4_ParamLimits

0x1b57,	// (0x0004f5c5) main_camera_pane_g5_ParamLimits

0x1b6b,	// (0x0004f5d9) main_camera_pane_g6_ParamLimits

0x1b7f,	// (0x0004f5ed) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0005cc83) main_camera_pane_g_ParamLimits

0x1b93,	// (0x0004f601) main_camera_pane_t1_ParamLimits

0x1ba9,	// (0x0004f617) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0005cc94) main_camera_pane_t_ParamLimits

0x9f79,	// (0x000579e7) bg_popup_preview_window_pane_cp01_ParamLimits

0x9f79,	// (0x000579e7) bg_popup_preview_window_pane_cp01

0xb81d,	// (0x0005928b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb81d,	// (0x0005928b) popup_phob_thumbnail2_window_g1

0x9d1e,	// (0x0005778c) call2_cli_visual_pane

0x3de3,	// (0x00051851) popup_call2_audio_conf_window_ParamLimits

0x3de3,	// (0x00051851) popup_call2_audio_conf_window

0x3e0b,	// (0x00051879) popup_call2_audio_first_window_ParamLimits

0x3e0b,	// (0x00051879) popup_call2_audio_first_window

0x3ea1,	// (0x0005190f) popup_call2_audio_in_window_ParamLimits

0x3ea1,	// (0x0005190f) popup_call2_audio_in_window

0x3eed,	// (0x0005195b) popup_call2_audio_out_window_ParamLimits

0x3eed,	// (0x0005195b) popup_call2_audio_out_window

0x3f5f,	// (0x000519cd) popup_call2_audio_second_window_ParamLimits

0x3f5f,	// (0x000519cd) popup_call2_audio_second_window

0x3fc5,	// (0x00051a33) popup_call2_audio_wait_window_ParamLimits

0x3fc5,	// (0x00051a33) popup_call2_audio_wait_window

0x9d1e,	// (0x0005778c) bg_popup_call2_act_pane_cp03

0x9f5b,	// (0x000579c9) list_conf_pane_cp

0xb829,	// (0x00059297) popup_call2_audio_conf_window_t1

0xb837,	// (0x000592a5) list_single_graphic_popup_conf2_pane_ParamLimits

0xb837,	// (0x000592a5) list_single_graphic_popup_conf2_pane

0xb1ea,	// (0x00058c58) list_highlight_pane_cp04

0xb84a,	// (0x000592b8) list_single_graphic_popup_conf2_pane_g1

0xb1fb,	// (0x00058c69) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf524,	// (0x0005cf92) list_single_graphic_popup_conf2_pane_g

0xb854,	// (0x000592c2) list_single_graphic_popup_conf2_pane_t1

0xb862,	// (0x000592d0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb862,	// (0x000592d0) bg_popup_call2_act_pane_cp01

0xb8ec,	// (0x0005935a) call_type_pane_cp05_ParamLimits

0xb8ec,	// (0x0005935a) call_type_pane_cp05

0xb940,	// (0x000593ae) popup_call2_audio_second_window_g1_ParamLimits

0xb940,	// (0x000593ae) popup_call2_audio_second_window_g1

0xb994,	// (0x00059402) popup_call2_audio_second_window_g2_ParamLimits

0xb994,	// (0x00059402) popup_call2_audio_second_window_g2

0x0002,

0xf529,	// (0x0005cf97) popup_call2_audio_second_window_g_ParamLimits

0xf529,	// (0x0005cf97) popup_call2_audio_second_window_g

0xb9f9,	// (0x00059467) popup_call2_audio_second_window_t1_ParamLimits

0xb9f9,	// (0x00059467) popup_call2_audio_second_window_t1

0xbab4,	// (0x00059522) popup_call2_audio_second_window_t2_ParamLimits

0xbab4,	// (0x00059522) popup_call2_audio_second_window_t2

0xbb07,	// (0x00059575) popup_call2_audio_second_window_t3_ParamLimits

0xbb07,	// (0x00059575) popup_call2_audio_second_window_t3

0x0003,

0xf530,	// (0x0005cf9e) popup_call2_audio_second_window_t_ParamLimits

0xf530,	// (0x0005cf9e) popup_call2_audio_second_window_t

0x9d1e,	// (0x0005778c) bg_popup_call2_in_pane_cp02

0x9d28,	// (0x00057796) call_type_pane_cp04

0x9d30,	// (0x0005779e) popup_call2_audio_wait_window_g1

0x9d38,	// (0x000577a6) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0005cb70) popup_call2_audio_wait_window_g

0x9d40,	// (0x000577ae) popup_call2_audio_wait_window_t3

0xbbfa,	// (0x00059668) bg_popup_call2_act_pane_ParamLimits

0xbbfa,	// (0x00059668) bg_popup_call2_act_pane

0xbcba,	// (0x00059728) call_type_pane_cp03_ParamLimits

0xbcba,	// (0x00059728) call_type_pane_cp03

0xbd1e,	// (0x0005978c) popup_call2_audio_first_window_g1_ParamLimits

0xbd1e,	// (0x0005978c) popup_call2_audio_first_window_g1

0xbd8e,	// (0x000597fc) popup_call2_audio_first_window_g2_ParamLimits

0xbd8e,	// (0x000597fc) popup_call2_audio_first_window_g2

0xb488,	// (0x00058ef6) popup_call2_audio_first_window_g3_ParamLimits

0xb488,	// (0x00058ef6) popup_call2_audio_first_window_g3

0x0004,

0xf539,	// (0x0005cfa7) popup_call2_audio_first_window_g_ParamLimits

0xf539,	// (0x0005cfa7) popup_call2_audio_first_window_g

0xbe6c,	// (0x000598da) popup_call2_audio_first_window_t1_ParamLimits

0xbe6c,	// (0x000598da) popup_call2_audio_first_window_t1

0xbf6f,	// (0x000599dd) popup_call2_audio_first_window_t4_ParamLimits

0xbf6f,	// (0x000599dd) popup_call2_audio_first_window_t4

0xc052,	// (0x00059ac0) popup_call2_audio_first_window_t5_ParamLimits

0xc052,	// (0x00059ac0) popup_call2_audio_first_window_t5

0x0003,

0xf544,	// (0x0005cfb2) popup_call2_audio_first_window_t_ParamLimits

0xf544,	// (0x0005cfb2) popup_call2_audio_first_window_t

0x9f71,	// (0x000579df) bg_popup_call2_act_pane_g1

0xc6c1,	// (0x0005a12f) popup_cale_lunar_info_window_t1

0xc6cf,	// (0x0005a13d) popup_cale_lunar_info_window_t2

0xc6dd,	// (0x0005a14b) popup_cale_lunar_info_window_t3

0x9d1e,	// (0x0005778c) bg_popup_call2_bubble_pane

0xc153,	// (0x00059bc1) bg_popup_call2_in_pane_cp01_ParamLimits

0xc153,	// (0x00059bc1) bg_popup_call2_in_pane_cp01

0x99fa,	// (0x00057468) call_type_pane_cp02

0xc19b,	// (0x00059c09) popup_call2_audio_out_window_g1_ParamLimits

0xc19b,	// (0x00059c09) popup_call2_audio_out_window_g1

0xc1c7,	// (0x00059c35) popup_call2_audio_out_window_g2_ParamLimits

0xc1c7,	// (0x00059c35) popup_call2_audio_out_window_g2

0xc1ef,	// (0x00059c5d) popup_call2_audio_out_window_g3_ParamLimits

0xc1ef,	// (0x00059c5d) popup_call2_audio_out_window_g3

0x0003,

0xf54d,	// (0x0005cfbb) popup_call2_audio_out_window_g_ParamLimits

0xf54d,	// (0x0005cfbb) popup_call2_audio_out_window_g

0xc22a,	// (0x00059c98) popup_call2_audio_out_window_t1_ParamLimits

0xc22a,	// (0x00059c98) popup_call2_audio_out_window_t1

0xc289,	// (0x00059cf7) popup_call2_audio_out_window_t2_ParamLimits

0xc289,	// (0x00059cf7) popup_call2_audio_out_window_t2

0xc2dd,	// (0x00059d4b) popup_call2_audio_out_window_t3_ParamLimits

0xc2dd,	// (0x00059d4b) popup_call2_audio_out_window_t3

0xc2f3,	// (0x00059d61) popup_call2_audio_out_window_t4_ParamLimits

0xc2f3,	// (0x00059d61) popup_call2_audio_out_window_t4

0xc309,	// (0x00059d77) popup_call2_audio_out_window_t5_ParamLimits

0xc309,	// (0x00059d77) popup_call2_audio_out_window_t5

0x0005,

0xf556,	// (0x0005cfc4) popup_call2_audio_out_window_t_ParamLimits

0xf556,	// (0x0005cfc4) popup_call2_audio_out_window_t

0xc36d,	// (0x00059ddb) bg_popup_call2_in_pane_ParamLimits

0xc36d,	// (0x00059ddb) bg_popup_call2_in_pane

0xc3c9,	// (0x00059e37) popup_call2_audio_in_window_g1_ParamLimits

0xc3c9,	// (0x00059e37) popup_call2_audio_in_window_g1

0xc401,	// (0x00059e6f) popup_call2_audio_in_window_g2_ParamLimits

0xc401,	// (0x00059e6f) popup_call2_audio_in_window_g2

0xc439,	// (0x00059ea7) popup_call2_audio_in_window_g3_ParamLimits

0xc439,	// (0x00059ea7) popup_call2_audio_in_window_g3

0x0003,

0xf563,	// (0x0005cfd1) popup_call2_audio_in_window_g_ParamLimits

0xf563,	// (0x0005cfd1) popup_call2_audio_in_window_g

0xc491,	// (0x00059eff) popup_call2_audio_in_window_t1_ParamLimits

0xc491,	// (0x00059eff) popup_call2_audio_in_window_t1

0xc511,	// (0x00059f7f) popup_call2_audio_in_window_t2_ParamLimits

0xc511,	// (0x00059f7f) popup_call2_audio_in_window_t2

0xc591,	// (0x00059fff) popup_call2_audio_in_window_t3_ParamLimits

0xc591,	// (0x00059fff) popup_call2_audio_in_window_t3

0xc5ab,	// (0x0005a019) popup_call2_audio_in_window_t4_ParamLimits

0xc5ab,	// (0x0005a019) popup_call2_audio_in_window_t4

0xc5bd,	// (0x0005a02b) popup_call2_audio_in_window_t5_ParamLimits

0xc5bd,	// (0x0005a02b) popup_call2_audio_in_window_t5

0xc5d2,	// (0x0005a040) popup_call2_audio_in_window_t6_ParamLimits

0xc5d2,	// (0x0005a040) popup_call2_audio_in_window_t6

0x0005,

0xf56c,	// (0x0005cfda) popup_call2_audio_in_window_t_ParamLimits

0xf56c,	// (0x0005cfda) popup_call2_audio_in_window_t

0x9f71,	// (0x000579df) bg_popup_call2_in_pane_g1

0xc6eb,	// (0x0005a159) popup_cale_lunar_info_window_t4

0x0003,

0xf5d4,	// (0x0005d042) popup_cale_lunar_info_window_t

0x9f79,	// (0x000579e7) bg_popup_call2_rect_pane_ParamLimits

0x9f79,	// (0x000579e7) bg_popup_call2_rect_pane

0x9d1e,	// (0x0005778c) call2_cli_visual_graphic_pane

0x9d1e,	// (0x0005778c) call2_cli_visual_text_pane

0xa2e2,	// (0x00057d50) smil_status_volume_pane_g3

0x0002,

0xa0d9,	// (0x00057b47) call2_cli_visual_graphic_pane_g1

0xa0d9,	// (0x00057b47) call2_cli_visual_graphic_pane_g2

0xa0d9,	// (0x00057b47) call2_cli_visual_graphic_pane_g3

0x0002,

0xf579,	// (0x0005cfe7) call2_cli_visual_graphic_pane_g

0xc5e7,	// (0x0005a055) bg_popup_call2_rect_pane_g1

0xa181,	// (0x00057bef) bg_popup_call2_rect_pane_g2

0xc5ef,	// (0x0005a05d) bg_popup_call2_rect_pane_g3

0xc5f7,	// (0x0005a065) bg_popup_call2_rect_pane_g4

0xc5ff,	// (0x0005a06d) bg_popup_call2_rect_pane_g5

0xc607,	// (0x0005a075) bg_popup_call2_rect_pane_g6

0xc60f,	// (0x0005a07d) bg_popup_call2_rect_pane_g7

0xc617,	// (0x0005a085) bg_popup_call2_rect_pane_g8

0xc61f,	// (0x0005a08d) bg_popup_call2_rect_pane_g9

0x0008,

0xf580,	// (0x0005cfee) bg_popup_call2_rect_pane_g

0xc627,	// (0x0005a095) bg_popup_call2_bubble_pane_g1

0xc62f,	// (0x0005a09d) bg_popup_call2_bubble_pane_g2

0xc637,	// (0x0005a0a5) bg_popup_call2_bubble_pane_g3

0xc63f,	// (0x0005a0ad) bg_popup_call2_bubble_pane_g4

0xc647,	// (0x0005a0b5) bg_popup_call2_bubble_pane_g5

0xc64f,	// (0x0005a0bd) bg_popup_call2_bubble_pane_g6

0xc657,	// (0x0005a0c5) bg_popup_call2_bubble_pane_g7

0xc65f,	// (0x0005a0cd) bg_popup_call2_bubble_pane_g8

0xc667,	// (0x0005a0d5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf593,	// (0x0005d001) bg_popup_call2_bubble_pane_g

0x12da,	// (0x0004ed48) aid_cale_week_size_cell_pane

0x1bc3,	// (0x0004f631) aid_cams_cif_uncrop_pane_ParamLimits

0x1bc3,	// (0x0004f631) aid_cams_cif_uncrop_pane

0x1d7c,	// (0x0004f7ea) aid_cams_size_cell_ParamLimits

0x1d7c,	// (0x0004f7ea) aid_cams_size_cell

0x1d90,	// (0x0004f7fe) grid_cams_pane_ParamLimits

0x1daa,	// (0x0004f818) linegrid_cams_pane_ParamLimits

0x1eaa,	// (0x0004f918) call_video_pane_t1

0x1ec4,	// (0x0004f932) call_video_pane_t2

0x0001,

0xf279,	// (0x0005cce7) call_video_pane_t

0x22f8,	// (0x0004fd66) aid_cale_month_size_cell_pane_ParamLimits

0x22f8,	// (0x0004fd66) aid_cale_month_size_cell_pane

0xf61d,	// (0x0005d08b) smil_status_volume_pane_g

0xa2ef,	// (0x00057d5d) volume_smil_pane_ParamLimits

0x98b6,	// (0x00057324) aid_popup2_width_pane

0x1234,	// (0x0004eca2) cell_qdial_pane_g4_ParamLimits

0x1234,	// (0x0004eca2) cell_qdial_pane_g4

0x3293,	// (0x00050d01) aid_blid_cardinal_pane_ParamLimits

0x329f,	// (0x00050d0d) aid_blid_destination_pane_ParamLimits

0x329f,	// (0x00050d0d) aid_blid_destination_pane

0x9f79,	// (0x000579e7) bg_popup_call_poc_act_pane_ParamLimits

0x9f79,	// (0x000579e7) bg_popup_call_poc_act_pane

0x9f79,	// (0x000579e7) bg_popup_call_poc_inact_pane_ParamLimits

0x9f79,	// (0x000579e7) bg_popup_call_poc_inact_pane

0xc66f,	// (0x0005a0dd) bg_popup_call_poc_act_pane_g1

0xc677,	// (0x0005a0e5) bg_popup_call_poc_act_pane_g2

0xc67f,	// (0x0005a0ed) bg_popup_call_poc_act_pane_g3

0xc63f,	// (0x0005a0ad) bg_popup_call_poc_act_pane_g4

0xc647,	// (0x0005a0b5) bg_popup_call_poc_act_pane_g5

0xc687,	// (0x0005a0f5) bg_popup_call_poc_act_pane_g6

0xc657,	// (0x0005a0c5) bg_popup_call_poc_act_pane_g7

0xc68f,	// (0x0005a0fd) bg_popup_call_poc_act_pane_g8

0x9d1e,	// (0x0005778c) main_usb_pane

0xc7f8,	// (0x0005a266) popup_cale_lunar_info_window

0x218d,	// (0x0004fbfb) im_reading_pane_t1_ParamLimits

0xab8b,	// (0x000585f9) list_im_pane_ParamLimits

0xab9c,	// (0x0005860a) scroll_pane_cp07_ParamLimits

0x9d1e,	// (0x0005778c) grid_highlight_pane_cp012

0x9f79,	// (0x000579e7) mup_scale_pane_ParamLimits

0xb57f,	// (0x00058fed) main_usb_pane_g1_ParamLimits

0xb57f,	// (0x00058fed) main_usb_pane_g1

0x4023,	// (0x00051a91) main_usb_pane_g2_ParamLimits

0x4023,	// (0x00051a91) main_usb_pane_g2

0x0001,

0xf5bd,	// (0x0005d02b) main_usb_pane_g_ParamLimits

0xf5bd,	// (0x0005d02b) main_usb_pane_g

0x4039,	// (0x00051aa7) main_usb_pane_t1_ParamLimits

0x4039,	// (0x00051aa7) main_usb_pane_t1

0x404b,	// (0x00051ab9) main_usb_pane_t2_ParamLimits

0x404b,	// (0x00051ab9) main_usb_pane_t2

0x405d,	// (0x00051acb) main_usb_pane_t3_ParamLimits

0x405d,	// (0x00051acb) main_usb_pane_t3

0x406f,	// (0x00051add) main_usb_pane_t4_ParamLimits

0x406f,	// (0x00051add) main_usb_pane_t4

0x4084,	// (0x00051af2) main_usb_pane_t5_ParamLimits

0x4084,	// (0x00051af2) main_usb_pane_t5

0x4099,	// (0x00051b07) main_usb_pane_t6_ParamLimits

0x4099,	// (0x00051b07) main_usb_pane_t6

0x0005,

0xf5c2,	// (0x0005d030) main_usb_pane_t_ParamLimits

0x3234,	// (0x00050ca2) aid_text_placing

0x323f,	// (0x00050cad) main_location2_pane_t1_ParamLimits

0x3253,	// (0x00050cc1) main_location2_pane_t2_ParamLimits

0x3269,	// (0x00050cd7) main_location2_pane_t3_ParamLimits

0x327f,	// (0x00050ced) main_location2_pane_t4_ParamLimits

0x327f,	// (0x00050ced) main_location2_pane_t4

0xf3e1,	// (0x0005ce4f) main_location2_pane_t_ParamLimits

0x9fb5,	// (0x00057a23) find_pinb_pane_g2_ParamLimits

0x9fb5,	// (0x00057a23) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0005cb96) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0005cb96) find_pinb_pane_g

0x9fc1,	// (0x00057a2f) find_pinb_pane_t1_ParamLimits

0x9fd3,	// (0x00057a41) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0005cb9b) find_pinb_pane_t_ParamLimits

0x9d1e,	// (0x0005778c) main_call3_pane

0x2863,	// (0x000502d1) cale_month_day_heading_pane_t1_ParamLimits

0x28e9,	// (0x00050357) cale_month_day_heading_pane_t2_ParamLimits

0x297a,	// (0x000503e8) cale_month_day_heading_pane_t3_ParamLimits

0x2a0b,	// (0x00050479) cale_month_day_heading_pane_t4_ParamLimits

0x2a9c,	// (0x0005050a) cale_month_day_heading_pane_t5_ParamLimits

0x2b35,	// (0x000505a3) cale_month_day_heading_pane_t6_ParamLimits

0x2bd6,	// (0x00050644) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0005cd1f) cale_month_day_heading_pane_t_ParamLimits

0x2f3a,	// (0x000509a8) smil_status_volume_pane

0x3ae0,	// (0x0005154e) postcard_address_pane_ParamLimits

0x3ae0,	// (0x0005154e) postcard_address_pane

0x3af6,	// (0x00051564) postcard_message_pane_ParamLimits

0x3af6,	// (0x00051564) postcard_message_pane

0x3fff,	// (0x00051a6d) call2_cli_visual_pane_t1_ParamLimits

0x3fff,	// (0x00051a6d) call2_cli_visual_pane_t1

0x488c,	// (0x000522fa) postcard_message_pane_t1_ParamLimits

0x488c,	// (0x000522fa) postcard_message_pane_t1

0x4875,	// (0x000522e3) postcard_address_pane_t1_ParamLimits

0x4875,	// (0x000522e3) postcard_address_pane_t1

0x4861,	// (0x000522cf) popup_call3_audio_in_window_ParamLimits

0x4861,	// (0x000522cf) popup_call3_audio_in_window

0x46e6,	// (0x00052154) bg_popup_call3_in_pane_ParamLimits

0x46e6,	// (0x00052154) bg_popup_call3_in_pane

0x4762,	// (0x000521d0) popup_call3_audio_in_window_g1_ParamLimits

0x4762,	// (0x000521d0) popup_call3_audio_in_window_g1

0x4782,	// (0x000521f0) popup_call3_audio_in_window_g2_ParamLimits

0x4782,	// (0x000521f0) popup_call3_audio_in_window_g2

0x47a2,	// (0x00052210) popup_call3_audio_in_window_g3_ParamLimits

0x47a2,	// (0x00052210) popup_call3_audio_in_window_g3

0x0003,

0xf624,	// (0x0005d092) popup_call3_audio_in_window_g_ParamLimits

0xf624,	// (0x0005d092) popup_call3_audio_in_window_g

0x47d3,	// (0x00052241) popup_call3_audio_in_window_t1_ParamLimits

0x47d3,	// (0x00052241) popup_call3_audio_in_window_t1

0x4811,	// (0x0005227f) popup_call3_audio_in_window_t2_ParamLimits

0x4811,	// (0x0005227f) popup_call3_audio_in_window_t2

0x484f,	// (0x000522bd) popup_call3_audio_in_window_t3_ParamLimits

0x484f,	// (0x000522bd) popup_call3_audio_in_window_t3

0x0002,

0xf62d,	// (0x0005d09b) popup_call3_audio_in_window_t_ParamLimits

0xf62d,	// (0x0005d09b) popup_call3_audio_in_window_t

0xb3c9,	// (0x00058e37) bg_popup_call3_rect_pane

0xc5e7,	// (0x0005a055) bg_popup_call3_rect_pane_g1

0xa181,	// (0x00057bef) bg_popup_call3_rect_pane_g2

0xc5ef,	// (0x0005a05d) bg_popup_call3_rect_pane_g3

0xc5f7,	// (0x0005a065) bg_popup_call3_rect_pane_g4

0xc5ff,	// (0x0005a06d) bg_popup_call3_rect_pane_g5

0xc607,	// (0x0005a075) bg_popup_call3_rect_pane_g6

0xc60f,	// (0x0005a07d) bg_popup_call3_rect_pane_g7

0x3699,	// (0x00051107) mup_visualizer_osc_pane

0xb496,	// (0x00058f04) mup_visualizer_spec_pane

0x4716,	// (0x00052184) call3_video_qcif_pane_ParamLimits

0x4716,	// (0x00052184) call3_video_qcif_pane

0x4729,	// (0x00052197) call3_video_qcif_uncrop_pane_ParamLimits

0x4729,	// (0x00052197) call3_video_qcif_uncrop_pane

0x4739,	// (0x000521a7) call3_video_subqcif_pane_ParamLimits

0x4739,	// (0x000521a7) call3_video_subqcif_pane

0x474f,	// (0x000521bd) call3_video_subqcif_uncrop_pane_ParamLimits

0x474f,	// (0x000521bd) call3_video_subqcif_uncrop_pane

0x47c2,	// (0x00052230) popup_call3_audio_in_window_g4_ParamLimits

0x47c2,	// (0x00052230) popup_call3_audio_in_window_g4

0x46d5,	// (0x00052143) mup_spec_half_pane

0x46de,	// (0x0005214c) mup_spec_half_pane_cp

0xc893,	// (0x0005a301) mup_osc_middle_pane

0xc89c,	// (0x0005a30a) mup_visualizer_osc_pane_g1

0x46b5,	// (0x00052123) mup_spec_bar_pane_ParamLimits

0x46b5,	// (0x00052123) mup_spec_bar_pane

0xc880,	// (0x0005a2ee) mup_spec_bar_pane_g1

0xc88a,	// (0x0005a2f8) mup_spec_bar_pane_g2

0x0001,

0xf618,	// (0x0005d086) mup_spec_bar_pane_g

0x12da,	// (0x0004ed48) aid_cale_week_size_cell_pane_ParamLimits

0x12f4,	// (0x0004ed62) bg_cale_heading_pane_ParamLimits

0xa9d7,	// (0x00058445) bg_cale_pane_cp01_ParamLimits

0x1319,	// (0x0004ed87) cale_week_corner_pane_ParamLimits

0x1338,	// (0x0004eda6) cale_week_day_heading_pane_ParamLimits

0x1362,	// (0x0004edd0) cale_week_scroll_pane_g1_ParamLimits

0x1382,	// (0x0004edf0) cale_week_scroll_pane_g2_ParamLimits

0x139a,	// (0x0004ee08) cale_week_scroll_pane_g3_ParamLimits

0x13b2,	// (0x0004ee20) cale_week_scroll_pane_g4_ParamLimits

0x13ca,	// (0x0004ee38) cale_week_scroll_pane_g5_ParamLimits

0x13e6,	// (0x0004ee54) cale_week_scroll_pane_g6_ParamLimits

0x1402,	// (0x0004ee70) cale_week_scroll_pane_g7_ParamLimits

0x1422,	// (0x0004ee90) cale_week_scroll_pane_g8_ParamLimits

0x1442,	// (0x0004eeb0) cale_week_scroll_pane_g9_ParamLimits

0x145f,	// (0x0004eecd) cale_week_scroll_pane_g10_ParamLimits

0x147c,	// (0x0004eeea) cale_week_scroll_pane_g11_ParamLimits

0x1499,	// (0x0004ef07) cale_week_scroll_pane_g12_ParamLimits

0x14b6,	// (0x0004ef24) cale_week_scroll_pane_g13_ParamLimits

0x14d3,	// (0x0004ef41) cale_week_scroll_pane_g14_ParamLimits

0x14f8,	// (0x0004ef66) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0005cc27) cale_week_scroll_pane_g_ParamLimits

0x151d,	// (0x0004ef8b) cale_week_time_pane_ParamLimits

0x153d,	// (0x0004efab) grid_cale_week_pane_ParamLimits

0xa9f5,	// (0x00058463) listscroll_cale_week_pane_t1

0xaa07,	// (0x00058475) scroll_pane_cp08_ParamLimits

0x235d,	// (0x0004fdcb) cale_month_corner_pane_ParamLimits

0xadbc,	// (0x0005882a) cale_month_pane_t1

0x27f1,	// (0x0005025f) cale_month_week_pane_ParamLimits

0x3062,	// (0x00050ad0) popup_call_status_window_g1_ParamLimits

0x3076,	// (0x00050ae4) popup_call_status_window_g2_ParamLimits

0x308a,	// (0x00050af8) popup_call_status_window_g3_ParamLimits

0xf368,	// (0x0005cdd6) popup_call_status_window_g_ParamLimits

0xb16b,	// (0x00058bd9) aid_call2_pane

0xff3a,	// (0x0004d9a8) msg_header_pane_g1

0x3ae0,	// (0x0005154e) postcard_address2_pane_ParamLimits

0x3ae0,	// (0x0005154e) postcard_address2_pane

0x3af6,	// (0x00051564) postcard_message2_pane_ParamLimits

0x3af6,	// (0x00051564) postcard_message2_pane

0x4665,	// (0x000520d3) message2_row_pane_ParamLimits

0x4665,	// (0x000520d3) message2_row_pane

0x4682,	// (0x000520f0) address2_row_pane_ParamLimits

0x4682,	// (0x000520f0) address2_row_pane

0xc84e,	// (0x0005a2bc) postcard_message2_row_pane_g1

0xc856,	// (0x0005a2c4) postcard_message2_row_pane_t1

0xc84e,	// (0x0005a2bc) address2_row_pane_g1

0xc856,	// (0x0005a2c4) address2_row_pane_t1

0x1a49,	// (0x0004f4b7) aid_size_cell_vorec

0x9d1e,	// (0x0005778c) main_rss_pane

0x4695,	// (0x00052103) rss_list_single_pane_ParamLimits

0x4695,	// (0x00052103) rss_list_single_pane

0xc864,	// (0x0005a2d2) rss_list_single_pane_t1

0xc872,	// (0x0005a2e0) rss_list_single_pane_t2

0x0001,

0xf613,	// (0x0005d081) rss_list_single_pane_t

0x9d1e,	// (0x0005778c) main_camera2_pane

0x9d1e,	// (0x0005778c) main_video2_pane

0x48fb,	// (0x00052369) cams_zoom_pane_cp2_ParamLimits

0x48fb,	// (0x00052369) cams_zoom_pane_cp2

0x4912,	// (0x00052380) image2_vga_pane_ParamLimits

0x4912,	// (0x00052380) image2_vga_pane

0x495a,	// (0x000523c8) main_camera2_pane_g1_ParamLimits

0x495a,	// (0x000523c8) main_camera2_pane_g1

0x497a,	// (0x000523e8) main_camera2_pane_g2_ParamLimits

0x497a,	// (0x000523e8) main_camera2_pane_g2

0x4991,	// (0x000523ff) main_camera2_pane_g3_ParamLimits

0x4991,	// (0x000523ff) main_camera2_pane_g3

0x49a8,	// (0x00052416) main_camera2_pane_g4_ParamLimits

0x49a8,	// (0x00052416) main_camera2_pane_g4

0x49bf,	// (0x0005242d) main_camera2_pane_g5_ParamLimits

0x49bf,	// (0x0005242d) main_camera2_pane_g5

0x49d6,	// (0x00052444) main_camera2_pane_g6_ParamLimits

0x49d6,	// (0x00052444) main_camera2_pane_g6

0x49ed,	// (0x0005245b) main_camera2_pane_g7_ParamLimits

0x49ed,	// (0x0005245b) main_camera2_pane_g7

0x4a04,	// (0x00052472) main_camera2_pane_g8_ParamLimits

0x4a04,	// (0x00052472) main_camera2_pane_g8

0x0008,

0xf634,	// (0x0005d0a2) main_camera2_pane_g_ParamLimits

0xf634,	// (0x0005d0a2) main_camera2_pane_g

0x4a32,	// (0x000524a0) main_camera2_pane_t1_ParamLimits

0x4a32,	// (0x000524a0) main_camera2_pane_t1

0x4a67,	// (0x000524d5) main_camera2_pane_t2_ParamLimits

0x4a67,	// (0x000524d5) main_camera2_pane_t2

0x4a84,	// (0x000524f2) main_camera2_pane_t3_ParamLimits

0x4a84,	// (0x000524f2) main_camera2_pane_t3

0x4ae2,	// (0x00052550) main_camera2_pane_t4_ParamLimits

0x4ae2,	// (0x00052550) main_camera2_pane_t4

0x0006,

0xf647,	// (0x0005d0b5) main_camera2_pane_t_ParamLimits

0xf647,	// (0x0005d0b5) main_camera2_pane_t

0x4b6b,	// (0x000525d9) cams_zoom_pane_cp4_ParamLimits

0x4b6b,	// (0x000525d9) cams_zoom_pane_cp4

0x4b81,	// (0x000525ef) image2_cif_pane_ParamLimits

0x4b81,	// (0x000525ef) image2_cif_pane

0x4bac,	// (0x0005261a) image2_subqcif_pane_ParamLimits

0x4bac,	// (0x0005261a) image2_subqcif_pane

0x4bc7,	// (0x00052635) main_video2_pane_g1_ParamLimits

0x4bc7,	// (0x00052635) main_video2_pane_g1

0x4be1,	// (0x0005264f) main_video2_pane_g2_ParamLimits

0x4be1,	// (0x0005264f) main_video2_pane_g2

0x4bf7,	// (0x00052665) main_video2_pane_g3_ParamLimits

0x4bf7,	// (0x00052665) main_video2_pane_g3

0x4c0d,	// (0x0005267b) main_video2_pane_g4_ParamLimits

0x4c0d,	// (0x0005267b) main_video2_pane_g4

0x4c23,	// (0x00052691) main_video2_pane_g5_ParamLimits

0x4c23,	// (0x00052691) main_video2_pane_g5

0x4c39,	// (0x000526a7) main_video2_pane_g6_ParamLimits

0x4c39,	// (0x000526a7) main_video2_pane_g6

0x0005,

0xf656,	// (0x0005d0c4) main_video2_pane_g_ParamLimits

0xf656,	// (0x0005d0c4) main_video2_pane_g

0x4c53,	// (0x000526c1) main_video2_pane_t1_ParamLimits

0x4c53,	// (0x000526c1) main_video2_pane_t1

0x4c77,	// (0x000526e5) main_video2_pane_t2_ParamLimits

0x4c77,	// (0x000526e5) main_video2_pane_t2

0x4cc7,	// (0x00052735) main_video2_pane_t3_ParamLimits

0x4cc7,	// (0x00052735) main_video2_pane_t3

0x0002,

0xf663,	// (0x0005d0d1) main_video2_pane_t_ParamLimits

0xf663,	// (0x0005d0d1) main_video2_pane_t

0x4157,	// (0x00051bc5) call_muted_g2

0x0001,

0xf605,	// (0x0005d073) call_muted_g

0x9d1e,	// (0x0005778c) main_mup2_pane

0x4d0f,	// (0x0005277d) main_mup2_pane_g1_ParamLimits

0x4d0f,	// (0x0005277d) main_mup2_pane_g1

0x4d1b,	// (0x00052789) main_mup2_pane_g2_ParamLimits

0x4d1b,	// (0x00052789) main_mup2_pane_g2

0xa35a,	// (0x00057dc8) main_mup_pane_g13_cp1

0xa362,	// (0x00057dd0) mup_volume_pane_cp1

0x4d39,	// (0x000527a7) main_mup2_pane_g4_ParamLimits

0x4d39,	// (0x000527a7) main_mup2_pane_g4

0x4d4b,	// (0x000527b9) main_mup2_pane_g5_ParamLimits

0x4d4b,	// (0x000527b9) main_mup2_pane_g5

0x4d5d,	// (0x000527cb) main_mup2_pane_g6_ParamLimits

0x4d5d,	// (0x000527cb) main_mup2_pane_g6

0x4d6f,	// (0x000527dd) main_mup2_pane_g7_ParamLimits

0x4d6f,	// (0x000527dd) main_mup2_pane_g7

0x0006,

0xf66a,	// (0x0005d0d8) main_mup2_pane_g_ParamLimits

0xf66a,	// (0x0005d0d8) main_mup2_pane_g

0x4d87,	// (0x000527f5) main_mup2_pane_t1_ParamLimits

0x4d87,	// (0x000527f5) main_mup2_pane_t1

0x4d9d,	// (0x0005280b) main_mup2_pane_t2_ParamLimits

0x4d9d,	// (0x0005280b) main_mup2_pane_t2

0x4db3,	// (0x00052821) main_mup2_pane_t3_ParamLimits

0x4db3,	// (0x00052821) main_mup2_pane_t3

0x4dc9,	// (0x00052837) main_mup2_pane_t4_ParamLimits

0x4dc9,	// (0x00052837) main_mup2_pane_t4

0x4de1,	// (0x0005284f) main_mup2_pane_t5_ParamLimits

0x4de1,	// (0x0005284f) main_mup2_pane_t5

0x4df9,	// (0x00052867) main_mup2_pane_t6_ParamLimits

0x4df9,	// (0x00052867) main_mup2_pane_t6

0x0005,

0xf679,	// (0x0005d0e7) main_mup2_pane_t_ParamLimits

0xf679,	// (0x0005d0e7) main_mup2_pane_t

0x4e29,	// (0x00052897) mup2_visualizer_pane_ParamLimits

0x4e29,	// (0x00052897) mup2_visualizer_pane

0x4e57,	// (0x000528c5) mup_progress_pane_cp_ParamLimits

0x4e57,	// (0x000528c5) mup_progress_pane_cp

0xa345,	// (0x00057db3) mup_volume_pane_cp_ParamLimits

0xa345,	// (0x00057db3) mup_volume_pane_cp

0x4e6d,	// (0x000528db) mup2_visualizer_pane_g1_ParamLimits

0x4e6d,	// (0x000528db) mup2_visualizer_pane_g1

0xc8d3,	// (0x0005a341) mup2_visualizer_pane_g2_ParamLimits

0xc8d3,	// (0x0005a341) mup2_visualizer_pane_g2

0x4e84,	// (0x000528f2) mup2_visualizer_pane_g3_ParamLimits

0x4e84,	// (0x000528f2) mup2_visualizer_pane_g3

0x0002,

0xf686,	// (0x0005d0f4) mup2_visualizer_pane_g_ParamLimits

0xf686,	// (0x0005d0f4) mup2_visualizer_pane_g

0xb6c8,	// (0x00059136) aid_size_cell_fmradio

0x4307,	// (0x00051d75) aid_height_parent_landcape

0xac1a,	// (0x00058688) wml_content_pane_cp

0xac22,	// (0x00058690) wml_tabs_pane

0xac2b,	// (0x00058699) popup_wml_miniature_window

0xac33,	// (0x000586a1) scroll_pane_cp021

0xac47,	// (0x000586b5) wml_content_pane_comp8

0x9d1e,	// (0x0005778c) bg_popup_sub_pane_cp05

0xc8f1,	// (0x0005a35f) popup_wml_miniature_window_g1

0xc8f9,	// (0x0005a367) wml_miniature_view_pane

0x4e90,	// (0x000528fe) aid_size_wml_view

0x4e98,	// (0x00052906) wml_miniature_view_pane_g1

0x4ea1,	// (0x0005290f) wml_miniature_view_pane_g2

0x4eaa,	// (0x00052918) wml_miniature_view_pane_g3

0x4eb2,	// (0x00052920) wml_miniature_view_pane_g4

0x4eba,	// (0x00052928) wml_miniature_view_pane_g5

0x4ec2,	// (0x00052930) wml_miniature_view_pane_g6

0x4eca,	// (0x00052938) wml_miniature_view_pane_g7

0x4ed2,	// (0x00052940) wml_miniature_view_pane_g8

0x0007,

0xf68d,	// (0x0005d0fb) wml_miniature_view_pane_g

0xc901,	// (0x0005a36f) background_graphic_ParamLimits

0xc901,	// (0x0005a36f) background_graphic

0xc90d,	// (0x0005a37b) wml_tabs_2_pane

0xc916,	// (0x0005a384) wml_tabs_3_pane_ParamLimits

0xc916,	// (0x0005a384) wml_tabs_3_pane

0xc928,	// (0x0005a396) wml_tabs_4_pane_ParamLimits

0xc928,	// (0x0005a396) wml_tabs_4_pane

0xc93e,	// (0x0005a3ac) wml_tabs_5_pane_ParamLimits

0xc93e,	// (0x0005a3ac) wml_tabs_5_pane

0xc958,	// (0x0005a3c6) wml_tabs_pane_g2_ParamLimits

0xc958,	// (0x0005a3c6) wml_tabs_pane_g2

0xc96c,	// (0x0005a3da) wml_tabs_pane_g3_ParamLimits

0xc96c,	// (0x0005a3da) wml_tabs_pane_g3

0x4eda,	// (0x00052948) wml_tabs_2_active_pane_ParamLimits

0x4eda,	// (0x00052948) wml_tabs_2_active_pane

0x4eee,	// (0x0005295c) wml_tabs_2_passive_pane_ParamLimits

0x4eee,	// (0x0005295c) wml_tabs_2_passive_pane

0x4f02,	// (0x00052970) wml_tabs_3_active_pane_cp_ParamLimits

0x4f02,	// (0x00052970) wml_tabs_3_active_pane_cp

0x4f17,	// (0x00052985) wml_tabs_3_passive_pane_ParamLimits

0x4f17,	// (0x00052985) wml_tabs_3_passive_pane

0x4f2a,	// (0x00052998) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f2a,	// (0x00052998) wml_tabs_3_passive_pane_cp

0x4f41,	// (0x000529af) tabs_4_active_pane

0x4f49,	// (0x000529b7) tabs_4_passive_pane

0x4f53,	// (0x000529c1) tabs_4_passive_pane_cp

0x4f5b,	// (0x000529c9) tabs_4_passive_pane_cp2

0x401b,	// (0x00051a89) aid_height_text

0x366b,	// (0x000510d9) mup_volume_cont_pane_ParamLimits

0x366b,	// (0x000510d9) mup_volume_cont_pane

0x0ec1,	// (0x0004e92f) aid_size_cell_pinb

0x0ecb,	// (0x0004e939) aid_size_list_pinb

0x4e43,	// (0x000528b1) mup2_volume_cont_pane_ParamLimits

0x4e43,	// (0x000528b1) mup2_volume_cont_pane

0xa331,	// (0x00057d9f) mup2_volume_cont_pane_g1_ParamLimits

0xa331,	// (0x00057d9f) mup2_volume_cont_pane_g1

0x0b77,	// (0x0004e5e5) aid_size_cell_touch_ParamLimits

0x0b77,	// (0x0004e5e5) aid_size_cell_touch

0x0db1,	// (0x0004e81f) touch_pane_ParamLimits

0x0db1,	// (0x0004e81f) touch_pane

0x98a4,	// (0x00057312) main_rss2_pane

0xc989,	// (0x0005a3f7) listscroll_rss2_pane

0xc992,	// (0x0005a400) rss2_navigation_pane

0xc99a,	// (0x0005a408) list_rss2_pane

0xb28f,	// (0x00058cfd) scroll_pane_cp22

0xc9a2,	// (0x0005a410) rss2_navigation_pane_g1

0xc9ab,	// (0x0005a419) rss2_navigation_pane_g2

0xc9b3,	// (0x0005a421) rss2_navigation_pane_g3

0x0002,

0xf69e,	// (0x0005d10c) rss2_navigation_pane_g

0xc9bb,	// (0x0005a429) rss2_navigation_pane_t1

0x4f65,	// (0x000529d3) rss2_list_single_pane_ParamLimits

0x4f65,	// (0x000529d3) rss2_list_single_pane

0xc9c9,	// (0x0005a437) rss2_list_single_pane_t2

0xc9d7,	// (0x0005a445) rss2_list_single_pane_t3_ParamLimits

0xc9d7,	// (0x0005a445) rss2_list_single_pane_t3

0xc9f4,	// (0x0005a462) rss2_list_single_pane_t4

0x2f22,	// (0x00050990) smil_status_pane_g1

0x98fd,	// (0x0005736b) main_image2_pane_ParamLimits

0x98fd,	// (0x0005736b) main_image2_pane

0x4a1b,	// (0x00052489) main_camera2_pane_g9_ParamLimits

0x4a1b,	// (0x00052489) main_camera2_pane_g9

0x4b37,	// (0x000525a5) main_camera2_pane_t5_ParamLimits

0x4b37,	// (0x000525a5) main_camera2_pane_t5

0xa306,	// (0x00057d74) main_camera2_pane_t6_ParamLimits

0xa306,	// (0x00057d74) main_camera2_pane_t6

0x4f7b,	// (0x000529e9) main_image2_pane_g1_ParamLimits

0x4f7b,	// (0x000529e9) main_image2_pane_g1

0x3d35,	// (0x000517a3) smil2_video_pane_ParamLimits

0x3d35,	// (0x000517a3) smil2_video_pane

0x0baf,	// (0x0004e61d) aid_zoom_text_primary_cp

0x98f3,	// (0x00057361) popup_preview_fixed_window

0xab83,	// (0x000585f1) im_reading_pane_g1

0x48ed,	// (0x0005235b) cams2_bc_adjust_pane_cp_ParamLimits

0x48ed,	// (0x0005235b) cams2_bc_adjust_pane_cp

0x4b5d,	// (0x000525cb) cams2_bc_adjust_pane_ParamLimits

0x4b5d,	// (0x000525cb) cams2_bc_adjust_pane

0xa36a,	// (0x00057dd8) cams2_bc_adjust_pane_g1

0xa372,	// (0x00057de0) cams2_slider_pane

0xa37b,	// (0x00057de9) cams2_slider_pane_g1

0xa384,	// (0x00057df2) cams2_slider_pane_g2

0x0006,

0xf6a5,	// (0x0005d113) cams2_slider_pane_g

0x0fbb,	// (0x0004ea29) calc_display_pane_ParamLimits

0x0fe3,	// (0x0004ea51) calc_paper_pane_ParamLimits

0x1006,	// (0x0004ea74) grid_calc_pane_ParamLimits

0xa271,	// (0x00057cdf) popup_clock_digital_window_t1_ParamLimits

0xb665,	// (0x000590d3) main_image_pane_t1

0x0f9d,	// (0x0004ea0b) aid_size_cell_calc_ParamLimits

0x0f9d,	// (0x0004ea0b) aid_size_cell_calc

0x434d,	// (0x00051dbb) popup_blid_sat_info2_window_ParamLimits

0x434d,	// (0x00051dbb) popup_blid_sat_info2_window

0xca0a,	// (0x0005a478) aid_size_cell_blid

0xca12,	// (0x0005a480) bg_popup_window_pane_cp07

0xca35,	// (0x0005a4a3) grid_popup_blid_pane

0xca3f,	// (0x0005a4ad) heading_pane_cp05_ParamLimits

0xca3f,	// (0x0005a4ad) heading_pane_cp05

0xcb09,	// (0x0005a577) cell_popup_blid_pane_ParamLimits

0xcb09,	// (0x0005a577) cell_popup_blid_pane

0xcb33,	// (0x0005a5a1) cell_popup_blid_pane_g1

0xcb3b,	// (0x0005a5a9) cell_popup_blid_pane_t1

0x4e13,	// (0x00052881) mup2_indicator_pane_ParamLimits

0x4e13,	// (0x00052881) mup2_indicator_pane

0xb3c9,	// (0x00058e37) mup2_visualizer_osc_pane

0xc8df,	// (0x0005a34d) mup2_visualizer_spec_pane_ParamLimits

0xc8df,	// (0x0005a34d) mup2_visualizer_spec_pane

0x4f91,	// (0x000529ff) mup2_spec_half_pane

0x4f9a,	// (0x00052a08) mup2_spec_half_pane_cp

0x4fa2,	// (0x00052a10) mup2_spec_bar_pane_ParamLimits

0x4fa2,	// (0x00052a10) mup2_spec_bar_pane

0xc880,	// (0x0005a2ee) mup2_spec_bar_pane_g1

0xc88a,	// (0x0005a2f8) mup2_spec_bar_pane_g2

0x0001,

0xf618,	// (0x0005d086) mup2_spec_bar_pane_g

0x4fc2,	// (0x00052a30) mup2_osc_middle_pane

0xc89c,	// (0x0005a30a) mup2_visualizer_osc_pane_g1

0x992b,	// (0x00057399) popup_number_entry_window_t1_ParamLimits

0x993e,	// (0x000573ac) popup_number_entry_window_t2_ParamLimits

0x9950,	// (0x000573be) popup_number_entry_window_t3_ParamLimits

0x0e03,	// (0x0004e871) popup_number_entry_window_t5_ParamLimits

0x0e03,	// (0x0004e871) popup_number_entry_window_t5

0xf0d3,	// (0x0005cb41) popup_number_entry_window_t_ParamLimits

0x9962,	// (0x000573d0) text_title_cp2_ParamLimits

0xa2b0,	// (0x00057d1e) aid_hotspot_pointer_text2_pane

0xa2d6,	// (0x00057d44) main_viewer_pane_g9_ParamLimits

0xa2d6,	// (0x00057d44) main_viewer_pane_g9

0xadbc,	// (0x0005882a) cale_month_pane_t1_ParamLimits

0xade2,	// (0x00058850) bg_cale_pane_ParamLimits

0xadfa,	// (0x00058868) list_cale_pane_ParamLimits

0xae0b,	// (0x00058879) listscroll_cale_day_pane_t1

0xae1d,	// (0x0005888b) scroll_pane_cp09_ParamLimits

0x36a1,	// (0x0005110f) main_mup_eq_pane_t1_ParamLimits

0x36a1,	// (0x0005110f) main_mup_eq_pane_t1

0x36bd,	// (0x0005112b) main_mup_eq_pane_t2_ParamLimits

0x36bd,	// (0x0005112b) main_mup_eq_pane_t2

0x36d9,	// (0x00051147) main_mup_eq_pane_t3_ParamLimits

0x36d9,	// (0x00051147) main_mup_eq_pane_t3

0x36f7,	// (0x00051165) main_mup_eq_pane_t4_ParamLimits

0x36f7,	// (0x00051165) main_mup_eq_pane_t4

0x3715,	// (0x00051183) main_mup_eq_pane_t5_ParamLimits

0x3715,	// (0x00051183) main_mup_eq_pane_t5

0x3733,	// (0x000511a1) main_mup_eq_pane_t6_ParamLimits

0x3733,	// (0x000511a1) main_mup_eq_pane_t6

0x3749,	// (0x000511b7) main_mup_eq_pane_t7_ParamLimits

0x3749,	// (0x000511b7) main_mup_eq_pane_t7

0x375f,	// (0x000511cd) main_mup_eq_pane_t8_ParamLimits

0x375f,	// (0x000511cd) main_mup_eq_pane_t8

0x3775,	// (0x000511e3) main_mup_eq_pane_t9_ParamLimits

0x3775,	// (0x000511e3) main_mup_eq_pane_t9

0x3791,	// (0x000511ff) main_mup_eq_pane_t10_ParamLimits

0x3791,	// (0x000511ff) main_mup_eq_pane_t10

0x0009,

0xf467,	// (0x0005ced5) main_mup_eq_pane_t_ParamLimits

0xf467,	// (0x0005ced5) main_mup_eq_pane_t

0x3866,	// (0x000512d4) mup_equalizer_pane_cp5_ParamLimits

0x387e,	// (0x000512ec) mup_equalizer_pane_cp6_ParamLimits

0x3896,	// (0x00051304) mup_equalizer_pane_cp7_ParamLimits

0x98a4,	// (0x00057312) main_gallery_pane

0xc8a5,	// (0x0005a313) smil2_volume_pane

0xc8ad,	// (0x0005a31b) smil_status_volume_pane_g1_ParamLimits

0xc8c0,	// (0x0005a32e) smil_status_volume_pane_g2_ParamLimits

0xa2e2,	// (0x00057d50) smil_status_volume_pane_g3_ParamLimits

0xf61d,	// (0x0005d08b) smil_status_volume_pane_g_ParamLimits

0xca12,	// (0x0005a480) bg_popup_window_pane_cp07_ParamLimits

0xca20,	// (0x0005a48e) blid_firmament_pane

0x4fcb,	// (0x00052a39) aid_size_cell_gallery_ParamLimits

0x4fcb,	// (0x00052a39) aid_size_cell_gallery

0x4fe1,	// (0x00052a4f) grid_gallery_pane_ParamLimits

0x4fe1,	// (0x00052a4f) grid_gallery_pane

0x4ffc,	// (0x00052a6a) cell_gallery_pane_ParamLimits

0x4ffc,	// (0x00052a6a) cell_gallery_pane

0xcb49,	// (0x0005a5b7) bg_cell_gallery_focus_pane_ParamLimits

0xcb49,	// (0x0005a5b7) bg_cell_gallery_focus_pane

0xcb5b,	// (0x0005a5c9) cell_gallery_pane_g1_ParamLimits

0xcb5b,	// (0x0005a5c9) cell_gallery_pane_g1

0x5047,	// (0x00052ab5) cell_gallery_pane_g2_ParamLimits

0x5047,	// (0x00052ab5) cell_gallery_pane_g2

0x5054,	// (0x00052ac2) cell_gallery_pane_g3_ParamLimits

0x5054,	// (0x00052ac2) cell_gallery_pane_g3

0xcb67,	// (0x0005a5d5) cell_gallery_pane_g4_ParamLimits

0xcb67,	// (0x0005a5d5) cell_gallery_pane_g4

0x0003,

0xf6cb,	// (0x0005d139) cell_gallery_pane_g_ParamLimits

0xf6cb,	// (0x0005d139) cell_gallery_pane_g

0xcb73,	// (0x0005a5e1) bg_cell_gallery_focus_pane_g1

0xcb7b,	// (0x0005a5e9) bg_cell_gallery_focus_pane_g2

0xcb83,	// (0x0005a5f1) bg_cell_gallery_focus_pane_g3

0xcb8b,	// (0x0005a5f9) bg_cell_gallery_focus_pane_g4

0xcb93,	// (0x0005a601) bg_cell_gallery_focus_pane_g5

0xcb9b,	// (0x0005a609) bg_cell_gallery_focus_pane_g6

0xcba3,	// (0x0005a611) bg_cell_gallery_focus_pane_g7

0xcbab,	// (0x0005a619) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d4,	// (0x0005d142) bg_cell_gallery_focus_pane_g

0xcbb3,	// (0x0005a621) aid_firma_cardinal

0xcbc7,	// (0x0005a635) blid_firmament_pane_t1

0xcbde,	// (0x0005a64c) blid_firmament_pane_t2

0xcbf5,	// (0x0005a663) blid_firmament_pane_t3

0xcc0c,	// (0x0005a67a) blid_firmament_pane_t4

0x0003,

0xf6e5,	// (0x0005d153) blid_firmament_pane_t

0xcc23,	// (0x0005a691) blid_sat_info_pane

0xcc33,	// (0x0005a6a1) blid_sat_info_pane_g1

0xcc33,	// (0x0005a6a1) blid_sat_info_pane_g2

0x0001,

0xf6ee,	// (0x0005d15c) blid_sat_info_pane_g

0xcc3d,	// (0x0005a6ab) blid_sat_info_pane_t1

0xcc4b,	// (0x0005a6b9) smil2_volume_content_pane

0xcc54,	// (0x0005a6c2) smil2_volume_pane_g1

0xcc5c,	// (0x0005a6ca) smil2_volume_content_pane_g1

0xcc65,	// (0x0005a6d3) smil2_volume_content_pane_g2

0xcc6e,	// (0x0005a6dc) smil2_volume_content_pane_g3

0xcc77,	// (0x0005a6e5) smil2_volume_content_pane_g4

0xcc80,	// (0x0005a6ee) smil2_volume_content_pane_g5

0xcc89,	// (0x0005a6f7) smil2_volume_content_pane_g6

0xcc92,	// (0x0005a700) smil2_volume_content_pane_g7

0xcc9b,	// (0x0005a709) smil2_volume_content_pane_g8

0xcca4,	// (0x0005a712) smil2_volume_content_pane_g9

0xccad,	// (0x0005a71b) smil2_volume_content_pane_g10

0x0009,

0xf6f3,	// (0x0005d161) smil2_volume_content_pane_g

0x15ee,	// (0x0004f05c) cale_week_day_heading_pane_t1_ParamLimits

0x1638,	// (0x0004f0a6) cale_week_day_heading_pane_t2_ParamLimits

0x1687,	// (0x0004f0f5) cale_week_day_heading_pane_t3_ParamLimits

0x16d6,	// (0x0004f144) cale_week_day_heading_pane_t4_ParamLimits

0x1725,	// (0x0004f193) cale_week_day_heading_pane_t5_ParamLimits

0x1774,	// (0x0004f1e2) cale_week_day_heading_pane_t6_ParamLimits

0x17c7,	// (0x0004f235) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0005cc46) cale_week_day_heading_pane_t_ParamLimits

0xaa29,	// (0x00058497) bg_cale_side_pane_ParamLimits

0x1811,	// (0x0004f27f) cale_week_time_pane_t1_ParamLimits

0x184b,	// (0x0004f2b9) cale_week_time_pane_t2_ParamLimits

0x1885,	// (0x0004f2f3) cale_week_time_pane_t3_ParamLimits

0x18bf,	// (0x0004f32d) cale_week_time_pane_t4_ParamLimits

0x18f9,	// (0x0004f367) cale_week_time_pane_t5_ParamLimits

0x1933,	// (0x0004f3a1) cale_week_time_pane_t6_ParamLimits

0x196d,	// (0x0004f3db) cale_week_time_pane_t7_ParamLimits

0x19a7,	// (0x0004f415) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0005cc55) cale_week_time_pane_t_ParamLimits

0x19e5,	// (0x0004f453) cell_cale_week_pane_g2_ParamLimits

0xaa29,	// (0x00058497) bg_cale_side_pane_cp01_ParamLimits

0x2c7f,	// (0x000506ed) cale_month_week_pane_t1_ParamLimits

0x2cb8,	// (0x00050726) cale_month_week_pane_t2_ParamLimits

0x2cf1,	// (0x0005075f) cale_month_week_pane_t3_ParamLimits

0x2d2a,	// (0x00050798) cale_month_week_pane_t4_ParamLimits

0x2d63,	// (0x000507d1) cale_month_week_pane_t5_ParamLimits

0x2d9c,	// (0x0005080a) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0005cd2e) cale_month_week_pane_t_ParamLimits

0xa1f1,	// (0x00057c5f) cell_cale_month_pane_g1_ParamLimits

0x98a4,	// (0x00057312) main_cale_event_viewer_pane

0x98a4,	// (0x00057312) listscroll_cale_event_viewer_pane

0xccb6,	// (0x0005a724) list_cale_ev_pane

0xccbe,	// (0x0005a72c) scroll_pane_cp023

0x5061,	// (0x00052acf) field_cale_ev_pane_ParamLimits

0x5061,	// (0x00052acf) field_cale_ev_pane

0xccca,	// (0x0005a738) field_cale_ev_content_pane_ParamLimits

0xccca,	// (0x0005a738) field_cale_ev_content_pane

0xccd6,	// (0x0005a744) field_cale_ev_pane_g1_ParamLimits

0xccd6,	// (0x0005a744) field_cale_ev_pane_g1

0xcce2,	// (0x0005a750) field_cale_ev_pane_g2_ParamLimits

0xcce2,	// (0x0005a750) field_cale_ev_pane_g2

0xccfa,	// (0x0005a768) field_cale_ev_pane_g3_ParamLimits

0xccfa,	// (0x0005a768) field_cale_ev_pane_g3

0x0002,

0xf708,	// (0x0005d176) field_cale_ev_pane_g_ParamLimits

0xf708,	// (0x0005d176) field_cale_ev_pane_g

0xcd12,	// (0x0005a780) field_cale_ev_pane_t1_ParamLimits

0xcd12,	// (0x0005a780) field_cale_ev_pane_t1

0x5085,	// (0x00052af3) field_cale_ev_content_pane_t1_ParamLimits

0x5085,	// (0x00052af3) field_cale_ev_content_pane_t1

0x3952,	// (0x000513c0) bg_button_pane_cp01

0x12ba,	// (0x0004ed28) listscroll_cale_week_pane_ParamLimits

0x12d0,	// (0x0004ed3e) popup_toolbar_window_cp01

0xa9f5,	// (0x00058463) listscroll_cale_week_pane_t1_ParamLimits

0x2f87,	// (0x000509f5) listscroll_cale_day_pane_ParamLimits

0x2f9f,	// (0x00050a0d) popup_toolbar_window_cp02

0xae0b,	// (0x00058879) listscroll_cale_day_pane_t1_ParamLimits

0x12ba,	// (0x0004ed28) main_cale_month_pane_ParamLimits

0x45cd,	// (0x0005203b) popup_toolbar_window_cp03_ParamLimits

0x45cd,	// (0x0005203b) popup_toolbar_window_cp03

0x3bf3,	// (0x00051661) main_image_pane_g2_ParamLimits

0x3bf3,	// (0x00051661) main_image_pane_g2

0x3c04,	// (0x00051672) main_image_pane_g3_ParamLimits

0x3c04,	// (0x00051672) main_image_pane_g3

0x0002,

0xf4f9,	// (0x0005cf67) main_image_pane_g_ParamLimits

0xf4f9,	// (0x0005cf67) main_image_pane_g

0xb665,	// (0x000590d3) main_image_pane_t1_ParamLimits

0x3c15,	// (0x00051683) main_image_pane_t2_ParamLimits

0x3c15,	// (0x00051683) main_image_pane_t2

0x3c27,	// (0x00051695) main_image_pane_t3_ParamLimits

0x3c27,	// (0x00051695) main_image_pane_t3

0x3c4f,	// (0x000516bd) main_image_pane_t4_ParamLimits

0x3c4f,	// (0x000516bd) main_image_pane_t4

0x0003,

0xf500,	// (0x0005cf6e) main_image_pane_t_ParamLimits

0xf500,	// (0x0005cf6e) main_image_pane_t

0x3c6f,	// (0x000516dd) popup_image_details_window_cp01

0x3c79,	// (0x000516e7) popup_toobar_trans_pane_cp01_ParamLimits

0x3c79,	// (0x000516e7) popup_toobar_trans_pane_cp01

0x4440,	// (0x00051eae) popup_image_details_window_ParamLimits

0x4440,	// (0x00051eae) popup_image_details_window

0xc804,	// (0x0005a272) popup_image_focus_window

0x48a7,	// (0x00052315) camera2_autofocus_pane_ParamLimits

0x48a7,	// (0x00052315) camera2_autofocus_pane

0x98a4,	// (0x00057312) bg_popup_sub_pane_cp06

0xcd29,	// (0x0005a797) popup_image_focus_window_g1

0xcd31,	// (0x0005a79f) popup_image_focus_window_g2

0xcd39,	// (0x0005a7a7) popup_image_focus_window_g3

0xcd41,	// (0x0005a7af) popup_image_focus_window_g4

0x0003,

0xf70f,	// (0x0005d17d) popup_image_focus_window_g

0xcd49,	// (0x0005a7b7) popup_image_focus_window_t1

0xcd57,	// (0x0005a7c5) popup_image_focus_window_t2

0xcd67,	// (0x0005a7d5) popup_image_focus_window_t3

0x0002,

0xf718,	// (0x0005d186) popup_image_focus_window_t

0xcd75,	// (0x0005a7e3) camera2_autofocus_pane_g1

0x98fd,	// (0x0005736b) bg_tb_trans_pane_cp01

0xcd83,	// (0x0005a7f1) popup_image_details_window_g1

0xcd96,	// (0x0005a804) popup_image_details_window_g2

0x0002,

0xf72a,	// (0x0005d198) popup_image_details_window_g

0xcdbf,	// (0x0005a82d) popup_image_details_window_t1

0xcdd1,	// (0x0005a83f) popup_image_details_window_t2

0xcdea,	// (0x0005a858) popup_image_details_window_t3

0xcdfe,	// (0x0005a86c) popup_image_details_window_t4

0xce19,	// (0x0005a887) popup_image_details_window_t5

0x0004,

0xf731,	// (0x0005d19f) popup_image_details_window_t

0xa032,	// (0x00057aa0) bg_calc_paper_pane_ParamLimits

0x98a4,	// (0x00057312) grid_highlight_pane_cp013

0xa046,	// (0x00057ab4) list_calc_pane_ParamLimits

0xa058,	// (0x00057ac6) scroll_pane_cp024

0xa060,	// (0x00057ace) bg_calc_display_pane_ParamLimits

0x1106,	// (0x0004eb74) calc_display_pane_t1_ParamLimits

0x1118,	// (0x0004eb86) calc_display_pane_t2_ParamLimits

0xa06c,	// (0x00057ada) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0005cbc8) calc_display_pane_t_ParamLimits

0x11e1,	// (0x0004ec4f) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0005cbe5) cell_calc_pane_g

0x11ea,	// (0x0004ec58) cell_calc_pane_t1

0xa0e3,	// (0x00057b51) grid_highlight_pane_cp02_ParamLimits

0xa0f9,	// (0x00057b67) toolbar_button_pane_cp01_ParamLimits

0xa0f9,	// (0x00057b67) toolbar_button_pane_cp01

0xb6aa,	// (0x00059118) temp_image_control_pane_ParamLimits

0xb6aa,	// (0x00059118) temp_image_control_pane

0x98fd,	// (0x0005736b) main_mp3_pane

0xce33,	// (0x0005a8a1) temp_image_control_pane_g1_ParamLimits

0xce33,	// (0x0005a8a1) temp_image_control_pane_g1

0xce41,	// (0x0005a8af) temp_image_control_pane_g2_ParamLimits

0xce41,	// (0x0005a8af) temp_image_control_pane_g2

0xce53,	// (0x0005a8c1) temp_image_control_pane_g3_ParamLimits

0xce53,	// (0x0005a8c1) temp_image_control_pane_g3

0x50d6,	// (0x00052b44) temp_image_control_pane_g4_ParamLimits

0x50d6,	// (0x00052b44) temp_image_control_pane_g4

0x0003,

0xf73c,	// (0x0005d1aa) temp_image_control_pane_g_ParamLimits

0xf73c,	// (0x0005d1aa) temp_image_control_pane_g

0xce33,	// (0x0005a8a1) main_mp3_pane_g1

0x50e9,	// (0x00052b57) main_mp3_pane_g2

0x0007,

0xf745,	// (0x0005d1b3) main_mp3_pane_g

0xce96,	// (0x0005a904) main_mp3_pane_t1

0xaa8e,	// (0x000584fc) main_camera_pane_g8_ParamLimits

0xaa8e,	// (0x000584fc) main_camera_pane_g8

0x1d22,	// (0x0004f790) main_video_pane_g7_ParamLimits

0x1d22,	// (0x0004f790) main_video_pane_g7

0xa31f,	// (0x00057d8d) main_camera2_pane_t7_ParamLimits

0xa31f,	// (0x00057d8d) main_camera2_pane_t7

0xabda,	// (0x00058648) scroll_pane_cp025_ParamLimits

0xabda,	// (0x00058648) scroll_pane_cp025

0xabee,	// (0x0005865c) scroll_pane_cp026_ParamLimits

0xabee,	// (0x0005865c) scroll_pane_cp026

0xabfd,	// (0x0005866b) wml_content_pane_ParamLimits

0x98a4,	// (0x00057312) main_touch_calib_pane

0x51bb,	// (0x00052c29) main_touch_calib_pane_g1

0x51cd,	// (0x00052c3b) main_touch_calib_pane_g2

0x51df,	// (0x00052c4d) main_touch_calib_pane_g3

0x51f1,	// (0x00052c5f) main_touch_calib_pane_g4

0x0003,

0xf763,	// (0x0005d1d1) main_touch_calib_pane_g

0x5203,	// (0x00052c71) main_touch_calib_pane_t1

0x521d,	// (0x00052c8b) main_touch_calib_pane_t2

0x0004,

0xf76c,	// (0x0005d1da) main_touch_calib_pane_t

0xb30a,	// (0x00058d78) mup_progress_pane_cp02

0xb329,	// (0x00058d97) navi_pane_g1

0xb38b,	// (0x00058df9) navi_pane_mp_t3

0x98fd,	// (0x0005736b) main_mp3_pane_ParamLimits

0x460f,	// (0x0005207d) navi_pane_ParamLimits

0xce33,	// (0x0005a8a1) main_mp3_pane_g1_ParamLimits

0x50e9,	// (0x00052b57) main_mp3_pane_g2_ParamLimits

0x50f5,	// (0x00052b63) main_mp3_pane_g3_ParamLimits

0x50f5,	// (0x00052b63) main_mp3_pane_g3

0x5103,	// (0x00052b71) main_mp3_pane_g4_ParamLimits

0x5103,	// (0x00052b71) main_mp3_pane_g4

0xce63,	// (0x0005a8d1) main_mp3_pane_g5_ParamLimits

0xce63,	// (0x0005a8d1) main_mp3_pane_g5

0xce71,	// (0x0005a8df) main_mp3_pane_g6_ParamLimits

0xce71,	// (0x0005a8df) main_mp3_pane_g6

0xce7e,	// (0x0005a8ec) main_mp3_pane_g7_ParamLimits

0xce7e,	// (0x0005a8ec) main_mp3_pane_g7

0xce8a,	// (0x0005a8f8) main_mp3_pane_g8_ParamLimits

0xce8a,	// (0x0005a8f8) main_mp3_pane_g8

0xf745,	// (0x0005d1b3) main_mp3_pane_g_ParamLimits

0x510f,	// (0x00052b7d) main_mp3_pane_t2

0x511d,	// (0x00052b8b) main_mp3_pane_t3

0xcea4,	// (0x0005a912) main_mp3_pane_t4

0xceb2,	// (0x0005a920) main_mp3_pane_t5

0x0005,

0xf756,	// (0x0005d1c4) main_mp3_pane_t

0xcec0,	// (0x0005a92e) mup_progress_pane_cp01

0x0baf,	// (0x0004e61d) aid_zoom_text_secondary2

0xccb6,	// (0x0005a724) list_cale_ev2_pane

0xccbe,	// (0x0005a72c) scroll_pane_cp023_ParamLimits

0x5277,	// (0x00052ce5) field_cale_ev2_pane_ParamLimits

0x5277,	// (0x00052ce5) field_cale_ev2_pane

0xff79,	// (0x0004d9e7) field_cale_ev2_pane_g1_ParamLimits

0xff79,	// (0x0004d9e7) field_cale_ev2_pane_g1

0xff85,	// (0x0004d9f3) field_cale_ev2_pane_g2_ParamLimits

0xff85,	// (0x0004d9f3) field_cale_ev2_pane_g2

0xff9d,	// (0x0004da0b) field_cale_ev2_pane_g3_ParamLimits

0xff9d,	// (0x0004da0b) field_cale_ev2_pane_g3

0x0003,

0xf777,	// (0x0005d1e5) field_cale_ev2_pane_g_ParamLimits

0xf777,	// (0x0005d1e5) field_cale_ev2_pane_g

0xffb5,	// (0x0004da23) field_cale_ev2_pane_t1_ParamLimits

0xffb5,	// (0x0004da23) field_cale_ev2_pane_t1

0xffcc,	// (0x0004da3a) field_cale_ev2_pane_t2_ParamLimits

0xffcc,	// (0x0004da3a) field_cale_ev2_pane_t2

0x0001,

0xf780,	// (0x0005d1ee) field_cale_ev2_pane_t_ParamLimits

0xf780,	// (0x0005d1ee) field_cale_ev2_pane_t

0x3a90,	// (0x000514fe) main_postcard_pane_g5_ParamLimits

0x3a90,	// (0x000514fe) main_postcard_pane_g5

0x3aa6,	// (0x00051514) main_postcard_pane_g6_ParamLimits

0x3aa6,	// (0x00051514) main_postcard_pane_g6

0x1ace,	// (0x0004f53c) camera2_autofocus_pane_cp_ParamLimits

0x1ace,	// (0x0004f53c) camera2_autofocus_pane_cp

0x98fd,	// (0x0005736b) main_mup3_pane

0x52c7,	// (0x00052d35) main_mup3_pane_g1_ParamLimits

0x52c7,	// (0x00052d35) main_mup3_pane_g1

0x52e9,	// (0x00052d57) main_mup3_pane_g2_ParamLimits

0x52e9,	// (0x00052d57) main_mup3_pane_g2

0x536c,	// (0x00052dda) main_mup3_pane_g3_ParamLimits

0x536c,	// (0x00052dda) main_mup3_pane_g3

0x53b4,	// (0x00052e22) main_mup3_pane_g4_ParamLimits

0x53b4,	// (0x00052e22) main_mup3_pane_g4

0x53fa,	// (0x00052e68) main_mup3_pane_g5_ParamLimits

0x53fa,	// (0x00052e68) main_mup3_pane_g5

0x5442,	// (0x00052eb0) main_mup3_pane_g6_ParamLimits

0x5442,	// (0x00052eb0) main_mup3_pane_g6

0xcec8,	// (0x0005a936) main_mup3_pane_g7_ParamLimits

0xcec8,	// (0x0005a936) main_mup3_pane_g7

0x0007,

0xf790,	// (0x0005d1fe) main_mup3_pane_g_ParamLimits

0xf790,	// (0x0005d1fe) main_mup3_pane_g

0x54c2,	// (0x00052f30) main_mup3_pane_t1_ParamLimits

0x54c2,	// (0x00052f30) main_mup3_pane_t1

0x5530,	// (0x00052f9e) main_mup3_pane_t2_ParamLimits

0x5530,	// (0x00052f9e) main_mup3_pane_t2

0x5606,	// (0x00053074) main_mup3_pane_t4_ParamLimits

0x5606,	// (0x00053074) main_mup3_pane_t4

0x5664,	// (0x000530d2) main_mup3_pane_t5_ParamLimits

0x5664,	// (0x000530d2) main_mup3_pane_t5

0x571e,	// (0x0005318c) main_mup3_pane_t6_ParamLimits

0x571e,	// (0x0005318c) main_mup3_pane_t6

0x0005,

0xf7a1,	// (0x0005d20f) main_mup3_pane_t_ParamLimits

0xf7a1,	// (0x0005d20f) main_mup3_pane_t

0x57d6,	// (0x00053244) mup3_progress_pane_ParamLimits

0x57d6,	// (0x00053244) mup3_progress_pane

0x5868,	// (0x000532d6) popup_mup3_control_window_ParamLimits

0x5868,	// (0x000532d6) popup_mup3_control_window

0xced6,	// (0x0005a944) popup_mup3_text_window

0x589e,	// (0x0005330c) mup3_progress_pane_t1

0x58bc,	// (0x0005332a) mup3_progress_pane_t2

0xcede,	// (0x0005a94c) mup3_progress_pane_t3

0x0002,

0xf7ae,	// (0x0005d21c) mup3_progress_pane_t

0xcefb,	// (0x0005a969) mup_progress_pane_cp03

0x98a4,	// (0x00057312) bg_tb_trans_pane_cp04

0x58da,	// (0x00053348) mup3_volume_pane

0x58e2,	// (0x00053350) popup_mup3_control_window_g1

0x58eb,	// (0x00053359) mup3_volume_pane_g1

0x58f4,	// (0x00053362) mup3_volume_pane_g2

0x58fd,	// (0x0005336b) mup3_volume_pane_g3

0x0002,

0xf7b5,	// (0x0005d223) mup3_volume_pane_g

0x98a4,	// (0x00057312) bg_tb_trans_pane_cp03

0xcf0b,	// (0x0005a979) popup_mup3_text_window_g1

0xcf13,	// (0x0005a981) popup_mup3_text_window_t1

0xa0ba,	// (0x00057b28) list_calc_item_pane_g1_ParamLimits

0xc980,	// (0x0005a3ee) mup_volume_pane_cp_g1

0x5237,	// (0x00052ca5) main_touch_calib_pane_t3

0x524b,	// (0x00052cb9) main_touch_calib_pane_t4

0x5261,	// (0x00052ccf) main_touch_calib_pane_t5

0x98ae,	// (0x0005731c) aid_cell_size_toolbar2

0x98b6,	// (0x00057324) aid_popup3_width_pane

0x0ba7,	// (0x0004e615) aid_zoom_text_msg_primary

0x1aa3,	// (0x0004f511) vorec_t7

0xa07e,	// (0x00057aec) bg_calc_paper_pane_g1_ParamLimits

0xa08a,	// (0x00057af8) bg_calc_paper_pane_g2_ParamLimits

0xa096,	// (0x00057b04) bg_calc_paper_pane_g3_ParamLimits

0xa0a2,	// (0x00057b10) bg_calc_paper_pane_g4_ParamLimits

0xa0ae,	// (0x00057b1c) bg_calc_paper_pane_g5_ParamLimits

0x1167,	// (0x0004ebd5) bg_calc_paper_pane_g6_ParamLimits

0x117a,	// (0x0004ebe8) bg_calc_paper_pane_g7_ParamLimits

0x118d,	// (0x0004ebfb) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0005cbcf) bg_calc_paper_pane_g_ParamLimits

0x119e,	// (0x0004ec0c) calc_bg_paper_pane_g9_ParamLimits

0x1c30,	// (0x0004f69e) image_qvga_pane_ParamLimits

0x1c30,	// (0x0004f69e) image_qvga_pane

0x9f79,	// (0x000579e7) bg_popup_sub_pane_cp04_ParamLimits

0xb5e1,	// (0x0005904f) popup_mup_playback_window_g1_ParamLimits

0xb5ed,	// (0x0005905b) popup_mup_playback_window_t1_ParamLimits

0xb602,	// (0x00059070) popup_mup_playback_window_t2_ParamLimits

0xf4f4,	// (0x0005cf62) popup_mup_playback_window_t_ParamLimits

0x4d2b,	// (0x00052799) main_mup2_pane_g3_ParamLimits

0x4d2b,	// (0x00052799) main_mup2_pane_g3

0x1f43,	// (0x0004f9b1) popup_toolbar_window_cp04

0xb9e8,	// (0x00059456) popup_call2_audio_second_window_g3_ParamLimits

0xb9e8,	// (0x00059456) popup_call2_audio_second_window_g3

0xbdf2,	// (0x00059860) popup_call2_audio_first_window_g4_ParamLimits

0xbdf2,	// (0x00059860) popup_call2_audio_first_window_g4

0xc471,	// (0x00059edf) popup_call2_audio_in_window_g4_ParamLimits

0xc471,	// (0x00059edf) popup_call2_audio_in_window_g4

0x3bd5,	// (0x00051643) aid_area_sk_bg_cut_ParamLimits

0x3bd5,	// (0x00051643) aid_area_sk_bg_cut

0xb617,	// (0x00059085) aid_area_sk_bg_cut_2_ParamLimits

0xb617,	// (0x00059085) aid_area_sk_bg_cut_2

0x5037,	// (0x00052aa5) aid_placing_details_win

0x503f,	// (0x00052aad) aid_placing_details_win_2

0xcd75,	// (0x0005a7e3) camera2_autofocus_pane_g1_ParamLimits

0x0d50,	// (0x0004e7be) popup_fixed_preview_cale_window_ParamLimits

0x0d50,	// (0x0004e7be) popup_fixed_preview_cale_window

0xb3da,	// (0x00058e48) navi_slider_pane_g3

0xb3e3,	// (0x00058e51) navi_slider_pane_g4

0xb3ec,	// (0x00058e5a) navi_slider_pane_g5

0xb3da,	// (0x00058e48) navi_slider_pane_g6

0xa297,	// (0x00057d05) navi_slider_pane_g7

0xb50f,	// (0x00058f7d) mup_scale_pane_g3

0xb518,	// (0x00058f86) mup_scale_pane_g4

0xb521,	// (0x00058f8f) mup_scale_pane_g5

0x38ae,	// (0x0005131c) mup_scale_pane_g6

0x38b7,	// (0x00051325) mup_scale_pane_g7

0xb3da,	// (0x00058e48) cams2_slider_pane_g3

0xca02,	// (0x0005a470) cams2_slider_pane_g4

0xa38d,	// (0x00057dfb) cams2_slider_pane_g5

0xb3da,	// (0x00058e48) cams2_slider_pane_g6

0xa395,	// (0x00057e03) cams2_slider_pane_g7

0xcc33,	// (0x0005a6a1) camera2_autofocus_pane_cp_g1

0xc7d6,	// (0x0005a244) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7d6,	// (0x0005a244) bg_popup_preview_window_pane_cp02

0xcf21,	// (0x0005a98f) list_fp_cale_pane_ParamLimits

0xcf21,	// (0x0005a98f) list_fp_cale_pane

0xcf2d,	// (0x0005a99b) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf2d,	// (0x0005a99b) popup_fixed_preview_cale_window_t1

0x5906,	// (0x00053374) popup_fixed_preview_cale_window_t2_ParamLimits

0x5906,	// (0x00053374) popup_fixed_preview_cale_window_t2

0x591b,	// (0x00053389) popup_fixed_preview_cale_window_t3_ParamLimits

0x591b,	// (0x00053389) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bc,	// (0x0005d22a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bc,	// (0x0005d22a) popup_fixed_preview_cale_window_t

0x5930,	// (0x0005339e) list_single_fp_cale_pane_ParamLimits

0x5930,	// (0x0005339e) list_single_fp_cale_pane

0xcf4b,	// (0x0005a9b9) list_single_fp_cale_pane_g1_ParamLimits

0xcf4b,	// (0x0005a9b9) list_single_fp_cale_pane_g1

0xcf57,	// (0x0005a9c5) list_single_fp_cale_pane_g2_ParamLimits

0xcf57,	// (0x0005a9c5) list_single_fp_cale_pane_g2

0x0002,

0xf7c3,	// (0x0005d231) list_single_fp_cale_pane_g_ParamLimits

0xf7c3,	// (0x0005d231) list_single_fp_cale_pane_g

0xcf70,	// (0x0005a9de) list_single_fp_cale_pane_t1_ParamLimits

0xcf70,	// (0x0005a9de) list_single_fp_cale_pane_t1

0xcf82,	// (0x0005a9f0) list_single_fp_cale_pane_t2_ParamLimits

0xcf82,	// (0x0005a9f0) list_single_fp_cale_pane_t2

0x0001,

0xf7ca,	// (0x0005d238) list_single_fp_cale_pane_t_ParamLimits

0xf7ca,	// (0x0005d238) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x98a4,	// (0x00057312) main_dialer_pane

0x5945,	// (0x000533b3) aid_cell_size_keypad

0x594f,	// (0x000533bd) dialer_ne_pane

0x5959,	// (0x000533c7) grid_dialer_command_1_pane

0x5961,	// (0x000533cf) grid_dialer_command_2_pane

0x5969,	// (0x000533d7) grid_dialer_keypad_pane

0x597b,	// (0x000533e9) bg_popup_call_pane_cp06_ParamLimits

0x597b,	// (0x000533e9) bg_popup_call_pane_cp06

0x5987,	// (0x000533f5) dialer_ne_clear_pane_ParamLimits

0x5987,	// (0x000533f5) dialer_ne_clear_pane

0xcfb5,	// (0x0005aa23) dialer_ne_pane_g1

0xcfbd,	// (0x0005aa2b) dialer_ne_pane_t1_ParamLimits

0xcfbd,	// (0x0005aa2b) dialer_ne_pane_t1

0x5993,	// (0x00053401) dialer_ne_pane_t2_ParamLimits

0x5993,	// (0x00053401) dialer_ne_pane_t2

0x59bd,	// (0x0005342b) dialer_ne_pane_t3_ParamLimits

0x59bd,	// (0x0005342b) dialer_ne_pane_t3

0x0002,

0xf7cf,	// (0x0005d23d) dialer_ne_pane_t_ParamLimits

0xf7cf,	// (0x0005d23d) dialer_ne_pane_t

0x59ed,	// (0x0005345b) dialer_ne_pane_t3_copy1_ParamLimits

0x59ed,	// (0x0005345b) dialer_ne_pane_t3_copy1

0x5a1c,	// (0x0005348a) cell_dialer_keypad_pane_ParamLimits

0x5a1c,	// (0x0005348a) cell_dialer_keypad_pane

0x5a33,	// (0x000534a1) cell_dialer_command_1_pane_ParamLimits

0x5a33,	// (0x000534a1) cell_dialer_command_1_pane

0x5a49,	// (0x000534b7) cell_dialer_command_2_pane_ParamLimits

0x5a49,	// (0x000534b7) cell_dialer_command_2_pane

0xcfcf,	// (0x0005aa3d) bg_button_pane_cp02_ParamLimits

0xcfcf,	// (0x0005aa3d) bg_button_pane_cp02

0x5a58,	// (0x000534c6) cell_dialer_keypad_pane_g1_ParamLimits

0x5a58,	// (0x000534c6) cell_dialer_keypad_pane_g1

0xcfcf,	// (0x0005aa3d) bg_button_pane_cp03_ParamLimits

0xcfcf,	// (0x0005aa3d) bg_button_pane_cp03

0x5a6d,	// (0x000534db) cell_dialer_command_1_pane_g1_ParamLimits

0x5a6d,	// (0x000534db) cell_dialer_command_1_pane_g1

0xcfdb,	// (0x0005aa49) bg_button_pane_cp04

0x5a81,	// (0x000534ef) cell_dialer_command_2_pane_g1

0xb3c9,	// (0x00058e37) bg_button_pane_cp06

0xcfe3,	// (0x0005aa51) dialer_ne_clear_pane_g1

0x3380,	// (0x00050dee) navi_pane_g2

0x33ae,	// (0x00050e1c) navi_pane_g3

0x0002,

0xf3f7,	// (0x0005ce65) navi_pane_g

0x33d9,	// (0x00050e47) navi_pane_mv_g2

0x3400,	// (0x00050e6e) navi_pane_mv_g5

0x3408,	// (0x00050e76) navi_pane_mv_t1

0xa060,	// (0x00057ace) main_clock2_pane

0x5acc,	// (0x0005353a) main_clock2_list_pane_ParamLimits

0x5acc,	// (0x0005353a) main_clock2_list_pane

0x5b04,	// (0x00053572) main_clock2_pane_t1_ParamLimits

0x5b04,	// (0x00053572) main_clock2_pane_t1

0x5b40,	// (0x000535ae) main_clock2_pane_t2_ParamLimits

0x5b40,	// (0x000535ae) main_clock2_pane_t2

0x0004,

0xf7d6,	// (0x0005d244) main_clock2_pane_t_ParamLimits

0xf7d6,	// (0x0005d244) main_clock2_pane_t

0x5be0,	// (0x0005364e) popup_clock_analogue_window_cp03_ParamLimits

0x5be0,	// (0x0005364e) popup_clock_analogue_window_cp03

0x5c07,	// (0x00053675) popup_clock_digital_window_cp02_ParamLimits

0x5c07,	// (0x00053675) popup_clock_digital_window_cp02

0x5c80,	// (0x000536ee) main_clock2_list_single_pane_ParamLimits

0x5c80,	// (0x000536ee) main_clock2_list_single_pane

0xb3c9,	// (0x00058e37) list_highlight_pane_cp05

0xcfff,	// (0x0005aa6d) main_clock2_list_single_pane_t1

0x1f43,	// (0x0004f9b1) popup_toolbar_window_cp04_ParamLimits

0x50a6,	// (0x00052b14) camera2_autofocus_pane_g2_ParamLimits

0x50a6,	// (0x00052b14) camera2_autofocus_pane_g2

0x50b2,	// (0x00052b20) camera2_autofocus_pane_g3_ParamLimits

0x50b2,	// (0x00052b20) camera2_autofocus_pane_g3

0x50be,	// (0x00052b2c) camera2_autofocus_pane_g4_ParamLimits

0x50be,	// (0x00052b2c) camera2_autofocus_pane_g4

0x50ca,	// (0x00052b38) camera2_autofocus_pane_g5_ParamLimits

0x50ca,	// (0x00052b38) camera2_autofocus_pane_g5

0x0004,

0xf71f,	// (0x0005d18d) camera2_autofocus_pane_g_ParamLimits

0xf71f,	// (0x0005d18d) camera2_autofocus_pane_g

0x52a7,	// (0x00052d15) camera2_autofocus_pane_cp_g2

0x52af,	// (0x00052d1d) camera2_autofocus_pane_cp_g3

0x52b7,	// (0x00052d25) camera2_autofocus_pane_cp_g4

0x52bf,	// (0x00052d2d) camera2_autofocus_pane_cp_g5

0x0004,

0xf785,	// (0x0005d1f3) camera2_autofocus_pane_cp_g

0x5973,	// (0x000533e1) popup_dialer_spcha_window

0x98a4,	// (0x00057312) bg_popup_sub_pane_cp07

0xd00d,	// (0x0005aa7b) list_spcha_pane

0xd015,	// (0x0005aa83) list_single_spcha_pane_ParamLimits

0xd015,	// (0x0005aa83) list_single_spcha_pane

0x98a4,	// (0x00057312) list_highlight_pane_cp06

0xd026,	// (0x0005aa94) list_single_spcha_pane_t1

0xc21b,	// (0x00059c89) popup_call2_audio_out_window_g4_ParamLimits

0xc21b,	// (0x00059c89) popup_call2_audio_out_window_g4

0x98a4,	// (0x00057312) main_imed2_pane

0xc80e,	// (0x0005a27c) popup_imed_adjust2_window

0x4458,	// (0x00051ec6) popup_imed_trans_window_ParamLimits

0x4458,	// (0x00051ec6) popup_imed_trans_window

0xca6b,	// (0x0005a4d9) popup_blid_sat_info2_window_t1

0xca79,	// (0x0005a4e7) popup_blid_sat_info2_window_t2

0x000a,

0xf6b4,	// (0x0005d122) popup_blid_sat_info2_window_t

0x5d36,	// (0x000537a4) aid_size_cell_colour_35

0x5d56,	// (0x000537c4) aid_size_cell_colour_112

0x5d76,	// (0x000537e4) aid_size_cell_effect

0xc7e2,	// (0x0005a250) bg_tb_trans_pane_cp02

0xaf29,	// (0x00058997) heading_imed_pane

0x5d96,	// (0x00053804) listscroll_imed_pane

0xd034,	// (0x0005aaa2) heading_imed_pane_g1

0xd03c,	// (0x0005aaaa) heading_imed_pane_t1

0xd04a,	// (0x0005aab8) grid_imed_colour_35_pane_ParamLimits

0xd04a,	// (0x0005aab8) grid_imed_colour_35_pane

0x5da2,	// (0x00053810) grid_imed_effect_pane

0xd066,	// (0x0005aad4) list_imed_aspect_pane

0x5db7,	// (0x00053825) scroll_pane_cp027_ParamLimits

0x5db7,	// (0x00053825) scroll_pane_cp027

0x5dc8,	// (0x00053836) cell_imed_effect_pane_ParamLimits

0x5dc8,	// (0x00053836) cell_imed_effect_pane

0xd06e,	// (0x0005aadc) cell_imed_colour_pane_ParamLimits

0xd06e,	// (0x0005aadc) cell_imed_colour_pane

0xd0b8,	// (0x0005ab26) cell_imed_colour_pane_g1_ParamLimits

0xd0b8,	// (0x0005ab26) cell_imed_colour_pane_g1

0xd0c9,	// (0x0005ab37) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0c9,	// (0x0005ab37) hgihlgiht_grid_pane_cp016

0x5df3,	// (0x00053861) cell_imed_effect_pane_g1

0x5dfb,	// (0x00053869) grid_highlight_pane_cp017

0xd0da,	// (0x0005ab48) list_imed_single_pane_ParamLimits

0xd0da,	// (0x0005ab48) list_imed_single_pane

0x98a4,	// (0x00057312) list_highlight_pane_cp07

0xd0ee,	// (0x0005ab5c) list_imed_aspect_pane_comp1_t1

0xc7e2,	// (0x0005a250) bg_tb_trans_pane_cp05

0xd110,	// (0x0005ab7e) popup_imed_adjust2_window_g1

0xd137,	// (0x0005aba5) popup_imed_adjust2_window_t1

0xd14f,	// (0x0005abbd) slider_imed_adjust_pane

0xd163,	// (0x0005abd1) slider_imed_adjust_pane_g1

0xd173,	// (0x0005abe1) slider_imed_adjust_pane_g2

0xd183,	// (0x0005abf1) slider_imed_adjust_pane_g3

0xd194,	// (0x0005ac02) slider_imed_adjust_pane_g4

0x0003,

0xf7f3,	// (0x0005d261) slider_imed_adjust_pane_g

0x5e04,	// (0x00053872) aid_size_cell_clipart2

0x5e10,	// (0x0005387e) grid_imed_clipart_pane

0xd1a5,	// (0x0005ac13) scroll_pane_cp031

0x5e1a,	// (0x00053888) cell_imed_clipart_pane_ParamLimits

0x5e1a,	// (0x00053888) cell_imed_clipart_pane

0x5e37,	// (0x000538a5) cell_imed_clipart_pane_g1

0x98a4,	// (0x00057312) grid_highlight_pane_cp014

0x5ae1,	// (0x0005354f) main_clock2_pane_g1_ParamLimits

0x5ae1,	// (0x0005354f) main_clock2_pane_g1

0x5c27,	// (0x00053695) aid_call2_pane_cp10

0x5c39,	// (0x000536a7) aid_call_pane_cp10

0xb2fe,	// (0x00058d6c) popup_clock_analogue_window_cp10_g1

0xb2fe,	// (0x00058d6c) popup_clock_analogue_window_cp10_g2

0x5c4b,	// (0x000536b9) popup_clock_analogue_window_cp10_g3

0x5c4b,	// (0x000536b9) popup_clock_analogue_window_cp10_g4

0xb2fe,	// (0x00058d6c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e1,	// (0x0005d24f) popup_clock_analogue_window_cp10_g

0x5c61,	// (0x000536cf) popup_clock_analogue_window_cp10_t1

0x5c92,	// (0x00053700) clock_digital_number_pane_cp10_ParamLimits

0x5c92,	// (0x00053700) clock_digital_number_pane_cp10

0x5cac,	// (0x0005371a) clock_digital_number_pane_cp11_ParamLimits

0x5cac,	// (0x0005371a) clock_digital_number_pane_cp11

0x5cc6,	// (0x00053734) clock_digital_number_pane_cp12_ParamLimits

0x5cc6,	// (0x00053734) clock_digital_number_pane_cp12

0x5ce0,	// (0x0005374e) clock_digital_number_pane_cp13_ParamLimits

0x5ce0,	// (0x0005374e) clock_digital_number_pane_cp13

0x5cfa,	// (0x00053768) clock_digital_separator_pane_cp10_ParamLimits

0x5cfa,	// (0x00053768) clock_digital_separator_pane_cp10

0x5d14,	// (0x00053782) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d14,	// (0x00053782) popup_clock_digital_window_cp02_t1

0x9f71,	// (0x000579df) clock_digital_number_pane_cp10_g1

0x9f71,	// (0x000579df) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fc,	// (0x0005d26a) clock_digital_number_pane_cp10_g

0x9f71,	// (0x000579df) clock_digital_separator_pane_cp10_g1

0x9f71,	// (0x000579df) clock_digital_separator_pane_g2_cp10

0xb399,	// (0x00058e07) navi_pane_vded_g4

0xb3a2,	// (0x00058e10) navi_pane_vded_g5

0xb3ab,	// (0x00058e19) navi_pane_vded_t1

0x98a4,	// (0x00057312) main_vded_pane

0x5e40,	// (0x000538ae) main_vded_pane_g1

0x5e4c,	// (0x000538ba) main_vded_pane_g2

0x5e58,	// (0x000538c6) main_vded_pane_g3

0x0002,

0xf801,	// (0x0005d26f) main_vded_pane_g

0x5e64,	// (0x000538d2) main_vded_pane_t1

0x5e72,	// (0x000538e0) main_vded_pane_t2

0x0001,

0xf808,	// (0x0005d276) main_vded_pane_t

0x5e80,	// (0x000538ee) vded_slider_pane

0x5e8a,	// (0x000538f8) vded_video_pane

0xd1ad,	// (0x0005ac1b) vded_video_pane_g1

0x5e94,	// (0x00053902) vded_video_pane_g2

0xcc33,	// (0x0005a6a1) vded_video_pane_g3

0x0002,

0xf80d,	// (0x0005d27b) vded_video_pane_g

0xd1b7,	// (0x0005ac25) vded_slider_pane_g1

0xc980,	// (0x0005a3ee) vded_slider_pane_g2

0xd1c0,	// (0x0005ac2e) vded_slider_pane_g3

0xd1c9,	// (0x0005ac37) vded_slider_pane_g4

0xd1d2,	// (0x0005ac40) vded_slider_pane_g5

0x0004,

0xf814,	// (0x0005d282) vded_slider_pane_g

0x5852,	// (0x000532c0) mup3_rocker_pane_ParamLimits

0x5852,	// (0x000532c0) mup3_rocker_pane

0x5e9d,	// (0x0005390b) mup3_control_keys_pane_g1

0x5ea5,	// (0x00053913) mup3_control_keys_pane_g2

0x5ead,	// (0x0005391b) mup3_control_keys_pane_g3

0x5eb5,	// (0x00053923) mup3_control_keys_pane_g4

0x0003,

0xf81f,	// (0x0005d28d) mup3_control_keys_pane_g

0x0d87,	// (0x0004e7f5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d87,	// (0x0004e7f5) popup_toolbar2_fixed_window_cp01

0x5888,	// (0x000532f6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5888,	// (0x000532f6) popup_toolbar2_fixed_window_cp02

0xbb5a,	// (0x000595c8) popup_call2_audio_second_window_t4_ParamLimits

0xbb5a,	// (0x000595c8) popup_call2_audio_second_window_t4

0xc088,	// (0x00059af6) popup_call2_audio_first_window_t6_ParamLimits

0xc088,	// (0x00059af6) popup_call2_audio_first_window_t6

0xc31e,	// (0x00059d8c) popup_call2_audio_out_window_t6_ParamLimits

0xc31e,	// (0x00059d8c) popup_call2_audio_out_window_t6

0x98a4,	// (0x00057312) main_vitu_pane

0x5ec5,	// (0x00053933) aid_size_cell_itu_ParamLimits

0x5ec5,	// (0x00053933) aid_size_cell_itu

0x98fd,	// (0x0005736b) bg_popup_window_pane_cp08_ParamLimits

0x98fd,	// (0x0005736b) bg_popup_window_pane_cp08

0x5edb,	// (0x00053949) field_vitu_entry_pane_ParamLimits

0x5edb,	// (0x00053949) field_vitu_entry_pane

0x5ef2,	// (0x00053960) grid_vitu_function_pane_ParamLimits

0x5ef2,	// (0x00053960) grid_vitu_function_pane

0x5f0d,	// (0x0005397b) grid_vitu_itu_pane_ParamLimits

0x5f0d,	// (0x0005397b) grid_vitu_itu_pane

0x5f2b,	// (0x00053999) cell_vitu_itu_pane_ParamLimits

0x5f2b,	// (0x00053999) cell_vitu_itu_pane

0x5f51,	// (0x000539bf) cell_vitu_function_pane_ParamLimits

0x5f51,	// (0x000539bf) cell_vitu_function_pane

0x98fd,	// (0x0005736b) bg_popup_sub_pane_cp08_ParamLimits

0x98fd,	// (0x0005736b) bg_popup_sub_pane_cp08

0x5f6c,	// (0x000539da) field_vitu_entry_pane_t1_ParamLimits

0x5f6c,	// (0x000539da) field_vitu_entry_pane_t1

0xd1f3,	// (0x0005ac61) field_vitu_entry_pane_t2_ParamLimits

0xd1f3,	// (0x0005ac61) field_vitu_entry_pane_t2

0x0001,

0xf82d,	// (0x0005d29b) field_vitu_entry_pane_t_ParamLimits

0xf82d,	// (0x0005d29b) field_vitu_entry_pane_t

0xd210,	// (0x0005ac7e) bg_button_pane_cp05_ParamLimits

0xd210,	// (0x0005ac7e) bg_button_pane_cp05

0x5f8c,	// (0x000539fa) cell_vitu_itu_pane_g1

0x5fa4,	// (0x00053a12) cell_vitu_itu_pane_t1_ParamLimits

0x5fa4,	// (0x00053a12) cell_vitu_itu_pane_t1

0x5fb6,	// (0x00053a24) cell_vitu_itu_pane_t2_ParamLimits

0x5fb6,	// (0x00053a24) cell_vitu_itu_pane_t2

0x0002,

0xf832,	// (0x0005d2a0) cell_vitu_itu_pane_t_ParamLimits

0xf832,	// (0x0005d2a0) cell_vitu_itu_pane_t

0xd21e,	// (0x0005ac8c) bg_button_pane_cp07

0x5feb,	// (0x00053a59) cell_vitu_function_pane_g1

0xa000,	// (0x00057a6e) main_calc_pane_g1

0x0b9b,	// (0x0004e609) aid_visual_content_pane

0x98a4,	// (0x00057312) main_vradio_pane

0x5ff4,	// (0x00053a62) main_vradio_pane_g1_ParamLimits

0x5ff4,	// (0x00053a62) main_vradio_pane_g1

0xd228,	// (0x0005ac96) main_vradio_pane_g2_ParamLimits

0xd228,	// (0x0005ac96) main_vradio_pane_g2

0x0001,

0xf839,	// (0x0005d2a7) main_vradio_pane_g_ParamLimits

0xf839,	// (0x0005d2a7) main_vradio_pane_g

0x600b,	// (0x00053a79) main_vradio_pane_t1_ParamLimits

0x600b,	// (0x00053a79) main_vradio_pane_t1

0x6020,	// (0x00053a8e) main_vradio_pane_t2_ParamLimits

0x6020,	// (0x00053a8e) main_vradio_pane_t2

0xd235,	// (0x0005aca3) main_vradio_pane_t3_ParamLimits

0xd235,	// (0x0005aca3) main_vradio_pane_t3

0x0002,

0xf83e,	// (0x0005d2ac) main_vradio_pane_t_ParamLimits

0xf83e,	// (0x0005d2ac) main_vradio_pane_t

0x6035,	// (0x00053aa3) vradio_rocker_control_pane_ParamLimits

0x6035,	// (0x00053aa3) vradio_rocker_control_pane

0x6047,	// (0x00053ab5) vradio_station_info_pane_ParamLimits

0x6047,	// (0x00053ab5) vradio_station_info_pane

0xd249,	// (0x0005acb7) vradio_frequency_info_pane_ParamLimits

0xd249,	// (0x0005acb7) vradio_frequency_info_pane

0xcc33,	// (0x0005a6a1) vradio_station_info_pane_g1

0xd258,	// (0x0005acc6) vradio_station_info_pane_t1_ParamLimits

0xd258,	// (0x0005acc6) vradio_station_info_pane_t1

0xd27a,	// (0x0005ace8) vradio_station_info_pane_t2_ParamLimits

0xd27a,	// (0x0005ace8) vradio_station_info_pane_t2

0x0001,

0xf845,	// (0x0005d2b3) vradio_station_info_pane_t_ParamLimits

0xf845,	// (0x0005d2b3) vradio_station_info_pane_t

0xd28c,	// (0x0005acfa) vradio_tuning_pane

0xd294,	// (0x0005ad02) vradio_rocker_control_pane_g1

0xd29c,	// (0x0005ad0a) vradio_rocker_control_pane_g2

0xd2a4,	// (0x0005ad12) vradio_rocker_control_pane_g3

0xd2ac,	// (0x0005ad1a) vradio_rocker_control_pane_g4

0xd2b4,	// (0x0005ad22) vradio_rocker_control_pane_g5

0x0004,

0xf84a,	// (0x0005d2b8) vradio_rocker_control_pane_g

0x6057,	// (0x00053ac5) vradio_frequency_info_pane_g1

0xd2bc,	// (0x0005ad2a) vradio_frequency_info_pane_t1_ParamLimits

0xd2bc,	// (0x0005ad2a) vradio_frequency_info_pane_t1

0x6061,	// (0x00053acf) vradio_tuning_pane_g1

0x606c,	// (0x00053ada) vradio_tuning_pane_t1

0x98ca,	// (0x00057338) area_side_right_pane_ParamLimits

0x98ca,	// (0x00057338) area_side_right_pane

0xc79d,	// (0x0005a20b) status_small_pane_g1

0xc7a5,	// (0x0005a213) status_small_pane_g2

0xc7ae,	// (0x0005a21c) status_small_pane_g3

0xc7b7,	// (0x0005a225) status_small_pane_g4

0x0003,

0xf60a,	// (0x0005d078) status_small_pane_g

0xc7c0,	// (0x0005a22e) status_small_pane_t1

0x98a4,	// (0x00057312) main_video3_pane

0xd2d0,	// (0x0005ad3e) cams_zoom_vslider_pane

0xd2d8,	// (0x0005ad46) image3_wide_pane_ParamLimits

0xd2d8,	// (0x0005ad46) image3_wide_pane

0xd2f2,	// (0x0005ad60) image3_wide_small_pane

0xd2fe,	// (0x0005ad6c) main_video3_pane_g1_ParamLimits

0xd2fe,	// (0x0005ad6c) main_video3_pane_g1

0xd31a,	// (0x0005ad88) main_video3_pane_g2_ParamLimits

0xd31a,	// (0x0005ad88) main_video3_pane_g2

0x0001,

0xf855,	// (0x0005d2c3) main_video3_pane_g_ParamLimits

0xf855,	// (0x0005d2c3) main_video3_pane_g

0xd336,	// (0x0005ada4) main_video3_pane_t1_ParamLimits

0xd336,	// (0x0005ada4) main_video3_pane_t1

0xd361,	// (0x0005adcf) main_video3_pane_t2_ParamLimits

0xd361,	// (0x0005adcf) main_video3_pane_t2

0xd38e,	// (0x0005adfc) main_video3_pane_t3_ParamLimits

0xd38e,	// (0x0005adfc) main_video3_pane_t3

0x0002,

0xf85a,	// (0x0005d2c8) main_video3_pane_t_ParamLimits

0xf85a,	// (0x0005d2c8) main_video3_pane_t

0xd3bb,	// (0x0005ae29) cams_zoom_vslider_pane_g1

0xd3c4,	// (0x0005ae32) cams_zoom_vslider_pane_g2

0x0001,

0xf861,	// (0x0005d2cf) cams_zoom_vslider_pane_g

0xd3cc,	// (0x0005ae3a) small_slider_vertical_pane

0xcc33,	// (0x0005a6a1) small_slider_vertical_pane_g1

0xcc33,	// (0x0005a6a1) small_slider_vertical_pane_g2

0xd3d4,	// (0x0005ae42) small_slider_vertical_pane_g3

0x0002,

0xf866,	// (0x0005d2d4) small_slider_vertical_pane_g

0x98a4,	// (0x00057312) main_hwr_training_pane

0xd3dd,	// (0x0005ae4b) hwr_training_instruct_pane_ParamLimits

0xd3dd,	// (0x0005ae4b) hwr_training_instruct_pane

0x607b,	// (0x00053ae9) hwr_training_navi_pane_ParamLimits

0x607b,	// (0x00053ae9) hwr_training_navi_pane

0x609a,	// (0x00053b08) hwr_training_write_pane_ParamLimits

0x609a,	// (0x00053b08) hwr_training_write_pane

0x98a4,	// (0x00057312) bg_frame_shadow_pane

0xd414,	// (0x0005ae82) hwr_training_write_pane_g1

0xd41c,	// (0x0005ae8a) hwr_training_write_pane_g2

0xd424,	// (0x0005ae92) hwr_training_write_pane_g3

0xd42c,	// (0x0005ae9a) hwr_training_write_pane_g4

0xd434,	// (0x0005aea2) hwr_training_write_pane_g5

0xd43c,	// (0x0005aeaa) hwr_training_write_pane_g6

0xd444,	// (0x0005aeb2) hwr_training_write_pane_g7

0x0006,

0xf86d,	// (0x0005d2db) hwr_training_write_pane_g

0xa39e,	// (0x00057e0c) hwr_training_navi_pane_g1_ParamLimits

0xa39e,	// (0x00057e0c) hwr_training_navi_pane_g1

0xa3b0,	// (0x00057e1e) hwr_training_navi_pane_g2_ParamLimits

0xa3b0,	// (0x00057e1e) hwr_training_navi_pane_g2

0xa3c2,	// (0x00057e30) hwr_training_navi_pane_g3_ParamLimits

0xa3c2,	// (0x00057e30) hwr_training_navi_pane_g3

0xa3d2,	// (0x00057e40) hwr_training_navi_pane_g4_ParamLimits

0xa3d2,	// (0x00057e40) hwr_training_navi_pane_g4

0x0004,

0xf87c,	// (0x0005d2ea) hwr_training_navi_pane_g_ParamLimits

0xf87c,	// (0x0005d2ea) hwr_training_navi_pane_g

0xa3df,	// (0x00057e4d) hwr_training_navi_pane_t1

0x60e2,	// (0x00053b50) list_single_hwr_training_instruct_pane_ParamLimits

0x60e2,	// (0x00053b50) list_single_hwr_training_instruct_pane

0xd44c,	// (0x0005aeba) list_single_hwr_training_instruct_pane_t1

0xcb73,	// (0x0005a5e1) bg_frame_shadow_pane_g1

0xd45b,	// (0x0005aec9) bg_frame_shadow_pane_g2

0xd463,	// (0x0005aed1) bg_frame_shadow_pane_g3

0xd46b,	// (0x0005aed9) bg_frame_shadow_pane_g4

0xd473,	// (0x0005aee1) bg_frame_shadow_pane_g5

0xd47b,	// (0x0005aee9) bg_frame_shadow_pane_g6

0xd483,	// (0x0005aef1) bg_frame_shadow_pane_g7

0xa159,	// (0x00057bc7) bg_frame_shadow_pane_g8

0x0007,

0xf887,	// (0x0005d2f5) bg_frame_shadow_pane_g

0x98a4,	// (0x00057312) main_video_tele_dialer_pane

0x60f7,	// (0x00053b65) aid_size_cell_video_keypad_ParamLimits

0x60f7,	// (0x00053b65) aid_size_cell_video_keypad

0x6111,	// (0x00053b7f) grid_video_dialer_keypad_pane_ParamLimits

0x6111,	// (0x00053b7f) grid_video_dialer_keypad_pane

0x615d,	// (0x00053bcb) video_down_pane_cp_ParamLimits

0x615d,	// (0x00053bcb) video_down_pane_cp

0x618d,	// (0x00053bfb) cell_video_dialer_keypad_pane_ParamLimits

0x618d,	// (0x00053bfb) cell_video_dialer_keypad_pane

0xd48b,	// (0x0005aef9) bg_button_pane_cp08_ParamLimits

0xd48b,	// (0x0005aef9) bg_button_pane_cp08

0x61b1,	// (0x00053c1f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61b1,	// (0x00053c1f) cell_video_dialer_keypad_pane_g1

0x583c,	// (0x000532aa) mup3_rocker2_pane_ParamLimits

0x583c,	// (0x000532aa) mup3_rocker2_pane

0xcc33,	// (0x0005a6a1) mup3_rocker2_pane_g1

0x4325,	// (0x00051d93) main_dialer2_pane

0x98a4,	// (0x00057312) main_mp4_pane

0xa3f5,	// (0x00057e63) main_mp4_pane_g1_ParamLimits

0xa3f5,	// (0x00057e63) main_mp4_pane_g1

0xa3f5,	// (0x00057e63) main_mp4_pane_g2_ParamLimits

0xa3f5,	// (0x00057e63) main_mp4_pane_g2

0x61ec,	// (0x00053c5a) main_mp4_pane_g3_ParamLimits

0x61ec,	// (0x00053c5a) main_mp4_pane_g3

0xa403,	// (0x00057e71) main_mp4_pane_g4_ParamLimits

0xa403,	// (0x00057e71) main_mp4_pane_g4

0xa42b,	// (0x00057e99) main_mp4_pane_g5_ParamLimits

0xa42b,	// (0x00057e99) main_mp4_pane_g5

0x0005,

0xf8a7,	// (0x0005d315) main_mp4_pane_g_ParamLimits

0xf8a7,	// (0x0005d315) main_mp4_pane_g

0xa47b,	// (0x00057ee9) main_mp4_pane_t1_ParamLimits

0xa47b,	// (0x00057ee9) main_mp4_pane_t1

0xa4d7,	// (0x00057f45) main_mp4_pane_t2_ParamLimits

0xa4d7,	// (0x00057f45) main_mp4_pane_t2

0xd497,	// (0x0005af05) main_mp4_pane_t3_ParamLimits

0xd497,	// (0x0005af05) main_mp4_pane_t3

0xa529,	// (0x00057f97) main_mp4_pane_t4_ParamLimits

0xa529,	// (0x00057f97) main_mp4_pane_t4

0x0003,

0xf8b4,	// (0x0005d322) main_mp4_pane_t_ParamLimits

0xf8b4,	// (0x0005d322) main_mp4_pane_t

0xa569,	// (0x00057fd7) mp4_progress_pane_ParamLimits

0xa569,	// (0x00057fd7) mp4_progress_pane

0xa5b3,	// (0x00058021) mp4_rocker_pane_ParamLimits

0xa5b3,	// (0x00058021) mp4_rocker_pane

0xd4bf,	// (0x0005af2d) mp4_progress_pane_t1

0xd4d8,	// (0x0005af46) mp4_progress_pane_t2

0x0001,

0xf8bd,	// (0x0005d32b) mp4_progress_pane_t

0xd4f1,	// (0x0005af5f) mup_progress_pane_cp04

0xcc33,	// (0x0005a6a1) mp4_rocker_pane_g1

0x6236,	// (0x00053ca4) aid_cell_size_keypad2_ParamLimits

0x6236,	// (0x00053ca4) aid_cell_size_keypad2

0x624c,	// (0x00053cba) dialer2_ne_pane_ParamLimits

0x624c,	// (0x00053cba) dialer2_ne_pane

0x6264,	// (0x00053cd2) grid_dialer2_keypad_pane_ParamLimits

0x6264,	// (0x00053cd2) grid_dialer2_keypad_pane

0xca12,	// (0x0005a480) bg_popup_call_pane_cp07_ParamLimits

0xca12,	// (0x0005a480) bg_popup_call_pane_cp07

0x6280,	// (0x00053cee) dialer2_ne_pane_t1_ParamLimits

0x6280,	// (0x00053cee) dialer2_ne_pane_t1

0x62bb,	// (0x00053d29) cell_dialer2_keypad_pane_ParamLimits

0x62bb,	// (0x00053d29) cell_dialer2_keypad_pane

0xd50f,	// (0x0005af7d) bg_button_pane_pane_cp04_ParamLimits

0xd50f,	// (0x0005af7d) bg_button_pane_pane_cp04

0x62df,	// (0x00053d4d) cell_dialer2_keypad_pane_g1_ParamLimits

0x62df,	// (0x00053d4d) cell_dialer2_keypad_pane_g1

0x1e2a,	// (0x0004f898) aid_placing_vt_set_content_ParamLimits

0x1e2a,	// (0x0004f898) aid_placing_vt_set_content

0x1e4e,	// (0x0004f8bc) aid_placing_vt_set_title_ParamLimits

0x1e4e,	// (0x0004f8bc) aid_placing_vt_set_title

0x98a4,	// (0x00057312) main_image3_pane

0x63a5,	// (0x00053e13) area_side_right_pane_cp01_ParamLimits

0x63a5,	// (0x00053e13) area_side_right_pane_cp01

0xa3f5,	// (0x00057e63) main_image3_pane_g1_ParamLimits

0xa3f5,	// (0x00057e63) main_image3_pane_g1

0x63be,	// (0x00053e2c) main_image3_pane_g2_ParamLimits

0x63be,	// (0x00053e2c) main_image3_pane_g2

0x63e6,	// (0x00053e54) main_image3_pane_g3_ParamLimits

0x63e6,	// (0x00053e54) main_image3_pane_g3

0x6410,	// (0x00053e7e) main_image3_pane_g4_ParamLimits

0x6410,	// (0x00053e7e) main_image3_pane_g4

0x0003,

0xf8cc,	// (0x0005d33a) main_image3_pane_g_ParamLimits

0xf8cc,	// (0x0005d33a) main_image3_pane_g

0x643a,	// (0x00053ea8) main_image3_pane_t1_ParamLimits

0x643a,	// (0x00053ea8) main_image3_pane_t1

0x6492,	// (0x00053f00) main_image3_pane_t2_ParamLimits

0x6492,	// (0x00053f00) main_image3_pane_t2

0x64e4,	// (0x00053f52) main_image3_pane_t3_ParamLimits

0x64e4,	// (0x00053f52) main_image3_pane_t3

0x0003,

0xf8d5,	// (0x0005d343) main_image3_pane_t_ParamLimits

0xf8d5,	// (0x0005d343) main_image3_pane_t

0x98fd,	// (0x0005736b) grid_sctrl_middle_pane_cp01_ParamLimits

0x98fd,	// (0x0005736b) grid_sctrl_middle_pane_cp01

0x656c,	// (0x00053fda) cell_sctrl_middle_pane_cp01_ParamLimits

0x656c,	// (0x00053fda) cell_sctrl_middle_pane_cp01

0x6589,	// (0x00053ff7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6589,	// (0x00053ff7) cell_sctrl_middle_pane_cp01_g1

0x98a4,	// (0x00057312) main_call4_pane

0x659e,	// (0x0005400c) aid_size_button_call4_ParamLimits

0x659e,	// (0x0005400c) aid_size_button_call4

0x65d1,	// (0x0005403f) call4_windows_pane_ParamLimits

0x65d1,	// (0x0005403f) call4_windows_pane

0x65f3,	// (0x00054061) grid_call4_button_pane_ParamLimits

0x65f3,	// (0x00054061) grid_call4_button_pane

0xd51b,	// (0x0005af89) call4_windows_conf_pane

0x661e,	// (0x0005408c) popup_call4_audio_first_window_ParamLimits

0x661e,	// (0x0005408c) popup_call4_audio_first_window

0x664a,	// (0x000540b8) popup_call4_audio_second_window_ParamLimits

0x664a,	// (0x000540b8) popup_call4_audio_second_window

0xd558,	// (0x0005afc6) popup_call4_audio_wait_window_ParamLimits

0xd558,	// (0x0005afc6) popup_call4_audio_wait_window

0x6660,	// (0x000540ce) cell_call4_button_pane_ParamLimits

0x6660,	// (0x000540ce) cell_call4_button_pane

0x6687,	// (0x000540f5) bg_button_pane_cp09_ParamLimits

0x6687,	// (0x000540f5) bg_button_pane_cp09

0x6693,	// (0x00054101) cell_call4_button_pane_g1_ParamLimits

0x6693,	// (0x00054101) cell_call4_button_pane_g1

0x66b9,	// (0x00054127) cell_call4_button_pane_t1_ParamLimits

0x66b9,	// (0x00054127) cell_call4_button_pane_t1

0xd5a0,	// (0x0005b00e) popup_call4_audio_conf_window_ParamLimits

0xd5a0,	// (0x0005b00e) popup_call4_audio_conf_window

0x589e,	// (0x0005330c) mup3_progress_pane_t1_ParamLimits

0x58bc,	// (0x0005332a) mup3_progress_pane_t2_ParamLimits

0xcede,	// (0x0005a94c) mup3_progress_pane_t3_ParamLimits

0xf7ae,	// (0x0005d21c) mup3_progress_pane_t_ParamLimits

0xcefb,	// (0x0005a969) mup_progress_pane_cp03_ParamLimits

0x5ebd,	// (0x0005392b) mup3_control_keys_pane_g4_copy1

0xa597,	// (0x00058005) mp4_rocker2_pane_ParamLimits

0xa597,	// (0x00058005) mp4_rocker2_pane

0xd5ba,	// (0x0005b028) mp4_rocker2_pane_g1

0xd5c2,	// (0x0005b030) mp4_rocker2_pane_g2

0xa609,	// (0x00058077) mp4_rocker2_pane_g3

0xa611,	// (0x0005807f) mp4_rocker2_pane_g4

0xa619,	// (0x00058087) mp4_rocker2_pane_g5

0x0004,

0xf8de,	// (0x0005d34c) mp4_rocker2_pane_g

0x98a4,	// (0x00057312) main_camera4_pane

0x98a4,	// (0x00057312) main_video4_pane

0x612b,	// (0x00053b99) main_video_tele_dialer_pane_t1_ParamLimits

0x612b,	// (0x00053b99) main_video_tele_dialer_pane_t1

0x6144,	// (0x00053bb2) main_video_tele_dialer_pane_t2_ParamLimits

0x6144,	// (0x00053bb2) main_video_tele_dialer_pane_t2

0x0001,

0xf898,	// (0x0005d306) main_video_tele_dialer_pane_t_ParamLimits

0xf898,	// (0x0005d306) main_video_tele_dialer_pane_t

0x66f7,	// (0x00054165) cam4_autofocus_pane_ParamLimits

0x66f7,	// (0x00054165) cam4_autofocus_pane

0x670d,	// (0x0005417b) cam4_image_uncrop_pane_ParamLimits

0x670d,	// (0x0005417b) cam4_image_uncrop_pane

0x6726,	// (0x00054194) cam4_indicators_pane_ParamLimits

0x6726,	// (0x00054194) cam4_indicators_pane

0x6755,	// (0x000541c3) main_camera4_pane_g1_ParamLimits

0x6755,	// (0x000541c3) main_camera4_pane_g1

0x6767,	// (0x000541d5) main_camera4_pane_g2_ParamLimits

0x6767,	// (0x000541d5) main_camera4_pane_g2

0x677a,	// (0x000541e8) main_camera4_pane_g3_ParamLimits

0x677a,	// (0x000541e8) main_camera4_pane_g3

0x678d,	// (0x000541fb) main_camera4_pane_g4_ParamLimits

0x678d,	// (0x000541fb) main_camera4_pane_g4

0x67a0,	// (0x0005420e) main_camera4_pane_g5_ParamLimits

0x67a0,	// (0x0005420e) main_camera4_pane_g5

0x0005,

0xf8e9,	// (0x0005d357) main_camera4_pane_g_ParamLimits

0xf8e9,	// (0x0005d357) main_camera4_pane_g

0x67c4,	// (0x00054232) main_camera4_pane_t1_ParamLimits

0x67c4,	// (0x00054232) main_camera4_pane_t1

0xce63,	// (0x0005a8d1) bg_tb_trans_pane_cp06

0xa647,	// (0x000580b5) cam4_indicators_pane_g1

0xa658,	// (0x000580c6) cam4_indicators_pane_g2

0x0002,

0xf904,	// (0x0005d372) cam4_indicators_pane_g

0xa670,	// (0x000580de) cam4_indicators_pane_t1

0x6828,	// (0x00054296) main_video4_pane_g1_ParamLimits

0x6828,	// (0x00054296) main_video4_pane_g1

0x6837,	// (0x000542a5) main_video4_pane_g2_ParamLimits

0x6837,	// (0x000542a5) main_video4_pane_g2

0x6846,	// (0x000542b4) main_video4_pane_g3_ParamLimits

0x6846,	// (0x000542b4) main_video4_pane_g3

0x6855,	// (0x000542c3) main_video4_pane_g4_ParamLimits

0x6855,	// (0x000542c3) main_video4_pane_g4

0x0004,

0xf90b,	// (0x0005d379) main_video4_pane_g_ParamLimits

0xf90b,	// (0x0005d379) main_video4_pane_g

0x6873,	// (0x000542e1) vid4_indicators_pane_ParamLimits

0x6873,	// (0x000542e1) vid4_indicators_pane

0x68a1,	// (0x0005430f) video4_image_uncrop_cif_pane_ParamLimits

0x68a1,	// (0x0005430f) video4_image_uncrop_cif_pane

0x68bb,	// (0x00054329) video4_image_uncrop_nhd_pane_ParamLimits

0x68bb,	// (0x00054329) video4_image_uncrop_nhd_pane

0x670d,	// (0x0005417b) video4_image_uncrop_vga_pane_ParamLimits

0x670d,	// (0x0005417b) video4_image_uncrop_vga_pane

0x98fd,	// (0x0005736b) bg_tb_trans_pane_cp07

0xa69e,	// (0x0005810c) vid4_indicators_pane_g1

0xa6b4,	// (0x00058122) vid4_indicators_pane_g2

0xa6c8,	// (0x00058136) vid4_indicators_pane_g3

0x0004,

0xf916,	// (0x0005d384) vid4_indicators_pane_g

0xa6f9,	// (0x00058167) vid4_indicators_pane_t1

0x68d1,	// (0x0005433f) cam4_autofocus_pane_g1

0x68d9,	// (0x00054347) cam4_autofocus_pane_g2

0x68e1,	// (0x0005434f) cam4_autofocus_pane_g3

0x0002,

0xf921,	// (0x0005d38f) cam4_autofocus_pane_g

0x68e9,	// (0x00054357) cam4_autofocus_pane_g3_copy1

0x6171,	// (0x00053bdf) video_down_pane_cp_t1

0x617f,	// (0x00053bed) video_down_pane_cp_t2

0x0001,

0xf89d,	// (0x0005d30b) video_down_pane_cp_t

0x98fd,	// (0x0005736b) popup_vitu2_window_ParamLimits

0x98fd,	// (0x0005736b) popup_vitu2_window

0x68f1,	// (0x0005435f) aid_size_cell2_itu2_ParamLimits

0x68f1,	// (0x0005435f) aid_size_cell2_itu2

0x6917,	// (0x00054385) aid_size_cell_itu2_ParamLimits

0x6917,	// (0x00054385) aid_size_cell_itu2

0x6975,	// (0x000543e3) bg_popup_window_pane_cp09_ParamLimits

0x6975,	// (0x000543e3) bg_popup_window_pane_cp09

0x6983,	// (0x000543f1) field_vitu2_entry_pane_ParamLimits

0x6983,	// (0x000543f1) field_vitu2_entry_pane

0x69ab,	// (0x00054419) grid_vitu2_function_pane_ParamLimits

0x69ab,	// (0x00054419) grid_vitu2_function_pane

0x69fc,	// (0x0005446a) grid_vitu2_itu_pane_ParamLimits

0x69fc,	// (0x0005446a) grid_vitu2_itu_pane

0x6a87,	// (0x000544f5) cell_vitu2_itu_pane_ParamLimits

0x6a87,	// (0x000544f5) cell_vitu2_itu_pane

0x6aad,	// (0x0005451b) cell_vitu2_function_pane_ParamLimits

0x6aad,	// (0x0005451b) cell_vitu2_function_pane

0xd5ca,	// (0x0005b038) bg_popup_call_pane_cp08_ParamLimits

0xd5ca,	// (0x0005b038) bg_popup_call_pane_cp08

0xd5e3,	// (0x0005b051) field_vitu2_entry_pane_g1

0xd5ef,	// (0x0005b05d) field_vitu2_entry_pane_g2

0x0002,

0xf928,	// (0x0005d396) field_vitu2_entry_pane_g

0x6af1,	// (0x0005455f) field_vitu2_entry_pane_t1_ParamLimits

0x6af1,	// (0x0005455f) field_vitu2_entry_pane_t1

0x6b20,	// (0x0005458e) field_vitu2_entry_pane_t2_ParamLimits

0x6b20,	// (0x0005458e) field_vitu2_entry_pane_t2

0x0001,

0xf92f,	// (0x0005d39d) field_vitu2_entry_pane_t_ParamLimits

0xf92f,	// (0x0005d39d) field_vitu2_entry_pane_t

0x6b3d,	// (0x000545ab) bg_button_pane_cp010_ParamLimits

0x6b3d,	// (0x000545ab) bg_button_pane_cp010

0x6b4b,	// (0x000545b9) cell_vitu2_itu_pane_g1

0x6b69,	// (0x000545d7) cell_vitu2_itu_pane_t1_ParamLimits

0x6b69,	// (0x000545d7) cell_vitu2_itu_pane_t1

0xffe1,	// (0x0004da4f) cell_vitu2_itu_pane_t2_ParamLimits

0xffe1,	// (0x0004da4f) cell_vitu2_itu_pane_t2

0x0002,

0xf939,	// (0x0005d3a7) cell_vitu2_itu_pane_t_ParamLimits

0xf939,	// (0x0005d3a7) cell_vitu2_itu_pane_t

0x98fd,	// (0x0005736b) bg_button_pane_cp011

0x6bcf,	// (0x0005463d) cell_vitu2_function_pane_g1

0x98a4,	// (0x00057312) main_myfav_hc_pane

0x6534,	// (0x00053fa2) popup_image3_note_pane_ParamLimits

0x6534,	// (0x00053fa2) popup_image3_note_pane

0x6550,	// (0x00053fbe) popup_image3_tool_bar_pane_ParamLimits

0x6550,	// (0x00053fbe) popup_image3_tool_bar_pane

0x0065,	// (0x0004dad3) cell_vitu2_itu_pane_t3_ParamLimits

0x0065,	// (0x0004dad3) cell_vitu2_itu_pane_t3

0x98a4,	// (0x00057312) bg_popup_trans_pane

0xd611,	// (0x0005b07f) grid_image3_tool_bar_pane

0xd61b,	// (0x0005b089) bg_popup_trans_pane_g1

0xace3,	// (0x00058751) bg_popup_trans_pane_g2

0xd623,	// (0x0005b091) bg_popup_trans_pane_g3

0xd62b,	// (0x0005b099) bg_popup_trans_pane_g4

0xd633,	// (0x0005b0a1) bg_popup_trans_pane_g5

0xd63b,	// (0x0005b0a9) bg_popup_trans_pane_g6

0xd643,	// (0x0005b0b1) bg_popup_trans_pane_g7

0xd64b,	// (0x0005b0b9) bg_popup_trans_pane_g8

0xacc3,	// (0x00058731) bg_popup_trans_pane_g9

0x0008,

0xf940,	// (0x0005d3ae) bg_popup_trans_pane_g

0xd653,	// (0x0005b0c1) cell_image3_tool_bar_pane_ParamLimits

0xd653,	// (0x0005b0c1) cell_image3_tool_bar_pane

0xcc33,	// (0x0005a6a1) cell_image3_tool_bar_pane_g1

0x98a4,	// (0x00057312) bg_popup_trans_pane_cp1

0xd669,	// (0x0005b0d7) popup_image3_note_pane_t1

0xd677,	// (0x0005b0e5) popup_image3_note_pane_t2

0xd685,	// (0x0005b0f3) popup_image3_note_pane_t3

0x0002,

0xf953,	// (0x0005d3c1) popup_image3_note_pane_t

0xd695,	// (0x0005b103) popup_image3_note_pane_t3_copy1

0x6be3,	// (0x00054651) bg_myfav_hc_instruction_pane_ParamLimits

0x6be3,	// (0x00054651) bg_myfav_hc_instruction_pane

0x6bfb,	// (0x00054669) cell_myfav_contact_pane_ParamLimits

0x6bfb,	// (0x00054669) cell_myfav_contact_pane

0x6c17,	// (0x00054685) cell_myfav_contact_pane_cp1_ParamLimits

0x6c17,	// (0x00054685) cell_myfav_contact_pane_cp1

0x6c2f,	// (0x0005469d) cell_myfav_contact_pane_cp2_ParamLimits

0x6c2f,	// (0x0005469d) cell_myfav_contact_pane_cp2

0x6c47,	// (0x000546b5) cell_myfav_contact_pane_cp3_ParamLimits

0x6c47,	// (0x000546b5) cell_myfav_contact_pane_cp3

0x6c5e,	// (0x000546cc) cell_myfav_contact_pane_cp4_ParamLimits

0x6c5e,	// (0x000546cc) cell_myfav_contact_pane_cp4

0x6c76,	// (0x000546e4) cell_myfav_contact_pane_cp5_ParamLimits

0x6c76,	// (0x000546e4) cell_myfav_contact_pane_cp5

0x6c8a,	// (0x000546f8) cell_myfav_contact_pane_cp6_ParamLimits

0x6c8a,	// (0x000546f8) cell_myfav_contact_pane_cp6

0x6ca0,	// (0x0005470e) cell_myfav_contact_pane_cp7_ParamLimits

0x6ca0,	// (0x0005470e) cell_myfav_contact_pane_cp7

0xd6a3,	// (0x0005b111) listscroll_gen_pane_cp05

0x6cb8,	// (0x00054726) main_myfav_hc_pane_g1_ParamLimits

0x6cb8,	// (0x00054726) main_myfav_hc_pane_g1

0x6cd2,	// (0x00054740) main_myfav_hc_pane_g2_ParamLimits

0x6cd2,	// (0x00054740) main_myfav_hc_pane_g2

0x0002,

0xf95a,	// (0x0005d3c8) main_myfav_hc_pane_g_ParamLimits

0xf95a,	// (0x0005d3c8) main_myfav_hc_pane_g

0x6d06,	// (0x00054774) main_myfav_hc_pane_t1_ParamLimits

0x6d06,	// (0x00054774) main_myfav_hc_pane_t1

0xd6ac,	// (0x0005b11a) main_myfav_hc_pane_t2_ParamLimits

0xd6ac,	// (0x0005b11a) main_myfav_hc_pane_t2

0xd6be,	// (0x0005b12c) main_myfav_hc_pane_t3_ParamLimits

0xd6be,	// (0x0005b12c) main_myfav_hc_pane_t3

0x6d1d,	// (0x0005478b) main_myfav_hc_pane_t4_ParamLimits

0x6d1d,	// (0x0005478b) main_myfav_hc_pane_t4

0x0004,

0xf961,	// (0x0005d3cf) main_myfav_hc_pane_t_ParamLimits

0xf961,	// (0x0005d3cf) main_myfav_hc_pane_t

0xcc33,	// (0x0005a6a1) bg_myfav_hc_instruction_pane_g1

0xd6d0,	// (0x0005b13e) cell_myfav_contact_pane_g1_ParamLimits

0xd6d0,	// (0x0005b13e) cell_myfav_contact_pane_g1

0xd6d0,	// (0x0005b13e) cell_myfav_contact_pane_g2_ParamLimits

0xd6d0,	// (0x0005b13e) cell_myfav_contact_pane_g2

0xd6dc,	// (0x0005b14a) cell_myfav_contact_pane_g3_ParamLimits

0xd6dc,	// (0x0005b14a) cell_myfav_contact_pane_g3

0xcec8,	// (0x0005a936) cell_myfav_contact_pane_g4_ParamLimits

0xcec8,	// (0x0005a936) cell_myfav_contact_pane_g4

0xd6e9,	// (0x0005b157) cell_myfav_contact_pane_g5_ParamLimits

0xd6e9,	// (0x0005b157) cell_myfav_contact_pane_g5

0x0004,

0xf96c,	// (0x0005d3da) cell_myfav_contact_pane_g_ParamLimits

0xf96c,	// (0x0005d3da) cell_myfav_contact_pane_g

0x6cec,	// (0x0005475a) main_myfav_hc_pane_g3_ParamLimits

0x6cec,	// (0x0005475a) main_myfav_hc_pane_g3

0x0ce8,	// (0x0004e756) popup_adpt_find_window

0x6d47,	// (0x000547b5) afind_page_pane_ParamLimits

0x6d47,	// (0x000547b5) afind_page_pane

0x6d5c,	// (0x000547ca) aid_size_cell_afind_ParamLimits

0x6d5c,	// (0x000547ca) aid_size_cell_afind

0x6d7a,	// (0x000547e8) bg_popup_sub_pane_cp09_ParamLimits

0x6d7a,	// (0x000547e8) bg_popup_sub_pane_cp09

0x6d87,	// (0x000547f5) find_pane_cp01_ParamLimits

0x6d87,	// (0x000547f5) find_pane_cp01

0xd6f5,	// (0x0005b163) grid_afind_control_pane_ParamLimits

0xd6f5,	// (0x0005b163) grid_afind_control_pane

0x6d94,	// (0x00054802) grid_afind_pane_ParamLimits

0x6d94,	// (0x00054802) grid_afind_pane

0x6db6,	// (0x00054824) cell_afind_pane_ParamLimits

0x6db6,	// (0x00054824) cell_afind_pane

0xcc33,	// (0x0005a6a1) afind_page_pane_g1

0x6e1d,	// (0x0005488b) afind_page_pane_g2

0x6e26,	// (0x00054894) afind_page_pane_g3

0x0002,

0xf977,	// (0x0005d3e5) afind_page_pane_g

0x6e2f,	// (0x0005489d) afind_page_pane_t1

0xd709,	// (0x0005b177) cell_afind_grid_control_pane_ParamLimits

0xd709,	// (0x0005b177) cell_afind_grid_control_pane

0xd50f,	// (0x0005af7d) bg_button_pane_cp69_ParamLimits

0xd50f,	// (0x0005af7d) bg_button_pane_cp69

0x6e4f,	// (0x000548bd) cell_afind_pane_g1_ParamLimits

0x6e4f,	// (0x000548bd) cell_afind_pane_g1

0x6e5c,	// (0x000548ca) cell_afind_pane_t1_ParamLimits

0x6e5c,	// (0x000548ca) cell_afind_pane_t1

0xaad8,	// (0x00058546) bg_button_pane_cp72

0xd718,	// (0x0005b186) cell_afind_grid_control_pane_g1

0x3dc8,	// (0x00051836) aid_image_placing_area_ParamLimits

0x3dc8,	// (0x00051836) aid_image_placing_area

0xd1db,	// (0x0005ac49) field_vitu_entry_pane_g1_ParamLimits

0xd1db,	// (0x0005ac49) field_vitu_entry_pane_g1

0xd1e7,	// (0x0005ac55) field_vitu_entry_pane_g2_ParamLimits

0xd1e7,	// (0x0005ac55) field_vitu_entry_pane_g2

0x0001,

0xf828,	// (0x0005d296) field_vitu_entry_pane_g_ParamLimits

0xf828,	// (0x0005d296) field_vitu_entry_pane_g

0x5f8c,	// (0x000539fa) cell_vitu_itu_pane_g1_ParamLimits

0x5fce,	// (0x00053a3c) cell_vitu_itu_pane_t3_ParamLimits

0x5fce,	// (0x00053a3c) cell_vitu_itu_pane_t3

0xd4bf,	// (0x0005af2d) mp4_progress_pane_t1_ParamLimits

0xd4d8,	// (0x0005af46) mp4_progress_pane_t2_ParamLimits

0xf8bd,	// (0x0005d32b) mp4_progress_pane_t_ParamLimits

0xd4f1,	// (0x0005af5f) mup_progress_pane_cp04_ParamLimits

0x6d31,	// (0x0005479f) main_myfav_hc_pane_t5_ParamLimits

0x6d31,	// (0x0005479f) main_myfav_hc_pane_t5

0x98c2,	// (0x00057330) aid_zoom_text_primary

0x0ce8,	// (0x0004e756) popup_adpt_find_window_ParamLimits

0x98fd,	// (0x0005736b) main_cam_set_pane

0x673f,	// (0x000541ad) cam4_zoom_pane_ParamLimits

0x673f,	// (0x000541ad) cam4_zoom_pane

0x6e6e,	// (0x000548dc) main_cam_set_pane_g1_ParamLimits

0x6e6e,	// (0x000548dc) main_cam_set_pane_g1

0x6e7c,	// (0x000548ea) main_cam_set_pane_g2_ParamLimits

0x6e7c,	// (0x000548ea) main_cam_set_pane_g2

0x0001,

0xf97e,	// (0x0005d3ec) main_cam_set_pane_g_ParamLimits

0xf97e,	// (0x0005d3ec) main_cam_set_pane_g

0x6e9d,	// (0x0005490b) main_cam_set_pane_t1_ParamLimits

0x6e9d,	// (0x0005490b) main_cam_set_pane_t1

0x6eb8,	// (0x00054926) main_cset_listscroll_pane_ParamLimits

0x6eb8,	// (0x00054926) main_cset_listscroll_pane

0x6edc,	// (0x0005494a) main_cset_slider_pane_ParamLimits

0x6edc,	// (0x0005494a) main_cset_slider_pane

0xd729,	// (0x0005b197) main_cset_list_pane_ParamLimits

0xd729,	// (0x0005b197) main_cset_list_pane

0xd739,	// (0x0005b1a7) scroll_pane_cp028

0x6f06,	// (0x00054974) aid_area_touch_slider

0x6f22,	// (0x00054990) cset_slider_pane

0x6f4c,	// (0x000549ba) main_cset_slider_pane_g1

0x6f61,	// (0x000549cf) main_cset_slider_pane_g2

0x0011,

0xf983,	// (0x0005d3f1) main_cset_slider_pane_g

0xd772,	// (0x0005b1e0) main_cset_slider_pane_t1

0x7023,	// (0x00054a91) main_cset_slider_pane_t2

0x703d,	// (0x00054aab) main_cset_slider_pane_t3

0x7057,	// (0x00054ac5) main_cset_slider_pane_t4

0x7071,	// (0x00054adf) main_cset_slider_pane_t5

0x708f,	// (0x00054afd) main_cset_slider_pane_t6

0x70a4,	// (0x00054b12) main_cset_slider_pane_t7

0x000e,

0xf9a8,	// (0x0005d416) main_cset_slider_pane_t

0x71b0,	// (0x00054c1e) cset_list_set_pane_ParamLimits

0x71b0,	// (0x00054c1e) cset_list_set_pane

0x71c4,	// (0x00054c32) aid_position_infowindow_above

0x71cc,	// (0x00054c3a) aid_position_infowindow_below

0x00bd,	// (0x0004db2b) cset_list_set_pane_g1_ParamLimits

0x00bd,	// (0x0004db2b) cset_list_set_pane_g1

0x00c9,	// (0x0004db37) cset_list_set_pane_g3_ParamLimits

0x00c9,	// (0x0004db37) cset_list_set_pane_g3

0x0001,

0xf9c7,	// (0x0005d435) cset_list_set_pane_g_ParamLimits

0xf9c7,	// (0x0005d435) cset_list_set_pane_g

0x00d8,	// (0x0004db46) cset_list_set_pane_t1_ParamLimits

0x00d8,	// (0x0004db46) cset_list_set_pane_t1

0x98fd,	// (0x0005736b) list_highlight_pane_cp021_ParamLimits

0x98fd,	// (0x0005736b) list_highlight_pane_cp021

0xb50f,	// (0x00058f7d) cset_slider_pane_g1

0xb521,	// (0x00058f8f) cset_slider_pane_g2

0xb518,	// (0x00058f86) cset_slider_pane_g3

0x0002,

0xf9cc,	// (0x0005d43a) cset_slider_pane_g

0xa710,	// (0x0005817e) aid_area_touch_cam4_zoom

0xa718,	// (0x00058186) cam4_zoom_cont_pane

0xa720,	// (0x0005818e) cam4_zoom_pane_g1

0xa728,	// (0x00058196) cam4_zoom_pane_g2

0x71d4,	// (0x00054c42) cam4_zoom_pane_g3

0x0002,

0xf9d3,	// (0x0005d441) cam4_zoom_pane_g

0xdd4b,	// (0x0005b7b9) cam4_zoom_cont_pane_g1

0xdd54,	// (0x0005b7c2) cam4_zoom_cont_pane_g2

0xdd5d,	// (0x0005b7cb) cam4_zoom_cont_pane_g3

0x0002,

0xf9da,	// (0x0005d448) cam4_zoom_cont_pane_g

0x65bc,	// (0x0005402a) call4_image_pane_ParamLimits

0x65bc,	// (0x0005402a) call4_image_pane

0xd51b,	// (0x0005af89) call4_windows_conf_pane_ParamLimits

0xd536,	// (0x0005afa4) popup_call4_audio_in_window_ParamLimits

0xd536,	// (0x0005afa4) popup_call4_audio_in_window

0x98a4,	// (0x00057312) bg_popup_call2_act_pane_cp02

0xd598,	// (0x0005b006) call4_list_conf_pane

0xcc33,	// (0x0005a6a1) call4_image_pane_g1

0xcc33,	// (0x0005a6a1) call4_image_pane_g2

0x0001,

0xf6ee,	// (0x0005d15c) call4_image_pane_g

0xd812,	// (0x0005b280) list_single_graphic_popup_conf4_pane_ParamLimits

0xd812,	// (0x0005b280) list_single_graphic_popup_conf4_pane

0x98a4,	// (0x00057312) list_highlight_pane_cp022

0xd827,	// (0x0005b295) list_single_graphic_popup_conf4_pane_g1

0xb1fb,	// (0x00058c69) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e1,	// (0x0005d44f) list_single_graphic_popup_conf4_pane_g

0xd82f,	// (0x0005b29d) list_single_graphic_popup_conf4_pane_t1

0x1f65,	// (0x0004f9d3) popup_vtel_slider_window_ParamLimits

0x1f65,	// (0x0004f9d3) popup_vtel_slider_window

0xd4fd,	// (0x0005af6b) dialer2_ne_pane_t2_ParamLimits

0xd4fd,	// (0x0005af6b) dialer2_ne_pane_t2

0x0001,

0xf8c2,	// (0x0005d330) dialer2_ne_pane_t_ParamLimits

0xf8c2,	// (0x0005d330) dialer2_ne_pane_t

0xca12,	// (0x0005a480) bg_popup_sub_pane_cp010_ParamLimits

0xca12,	// (0x0005a480) bg_popup_sub_pane_cp010

0x71dc,	// (0x00054c4a) popup_vtel_slider_window_g1_ParamLimits

0x71dc,	// (0x00054c4a) popup_vtel_slider_window_g1

0x71ef,	// (0x00054c5d) popup_vtel_slider_window_g2_ParamLimits

0x71ef,	// (0x00054c5d) popup_vtel_slider_window_g2

0x0003,

0xf9e6,	// (0x0005d454) popup_vtel_slider_window_g_ParamLimits

0xf9e6,	// (0x0005d454) popup_vtel_slider_window_g

0x7245,	// (0x00054cb3) vtel_slider_pane_ParamLimits

0x7245,	// (0x00054cb3) vtel_slider_pane

0x7267,	// (0x00054cd5) vtel_slider_pane_g1_ParamLimits

0x7267,	// (0x00054cd5) vtel_slider_pane_g1

0x727b,	// (0x00054ce9) vtel_slider_pane_g2_ParamLimits

0x727b,	// (0x00054ce9) vtel_slider_pane_g2

0x7293,	// (0x00054d01) vtel_slider_pane_g3_ParamLimits

0x7293,	// (0x00054d01) vtel_slider_pane_g3

0x7267,	// (0x00054cd5) vtel_slider_pane_g4_ParamLimits

0x7267,	// (0x00054cd5) vtel_slider_pane_g4

0x72a9,	// (0x00054d17) vtel_slider_pane_g5_ParamLimits

0x72a9,	// (0x00054d17) vtel_slider_pane_g5

0x0004,

0xf9ef,	// (0x0005d45d) vtel_slider_pane_g_ParamLimits

0xf9ef,	// (0x0005d45d) vtel_slider_pane_g

0x98a4,	// (0x00057312) main_gallery2_pane

0x6943,	// (0x000543b1) aid_size_row_itut2_dropdow_list_ParamLimits

0x6943,	// (0x000543b1) aid_size_row_itut2_dropdow_list

0x69d3,	// (0x00054441) grid_vitu2_function_top_pane_ParamLimits

0x69d3,	// (0x00054441) grid_vitu2_function_top_pane

0x6a32,	// (0x000544a0) popup_vitu2_dropdown_list_window_ParamLimits

0x6a32,	// (0x000544a0) popup_vitu2_dropdown_list_window

0x6a5b,	// (0x000544c9) popup_vitu2_match_list_window

0x72bf,	// (0x00054d2d) cell_vitu2_function_top_pane_ParamLimits

0x72bf,	// (0x00054d2d) cell_vitu2_function_top_pane

0x72df,	// (0x00054d4d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x72df,	// (0x00054d4d) cell_vitu2_function_top_pane_cp01

0x72fd,	// (0x00054d6b) cell_vitu2_function_top_wide_pane_ParamLimits

0x72fd,	// (0x00054d6b) cell_vitu2_function_top_wide_pane

0x98fd,	// (0x0005736b) bg_button_pane_cp012

0x731b,	// (0x00054d89) cell_vitu2_function_top_pane_g1

0xa730,	// (0x0005819e) bg_button_pane_cp013_ParamLimits

0xa730,	// (0x0005819e) bg_button_pane_cp013

0x732f,	// (0x00054d9d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x732f,	// (0x00054d9d) cell_vitu2_function_top_wide_pane_g1

0x98fd,	// (0x0005736b) bg_popup_sub_pane_cp20

0x7347,	// (0x00054db5) list_vitu2_match_list_pane

0xd61b,	// (0x0005b089) bg_popup_sub_pane_cp20_g1

0xd623,	// (0x0005b091) bg_popup_sub_pane_cp20_g2

0xace3,	// (0x00058751) bg_popup_sub_pane_cp20_g3

0xd62b,	// (0x0005b099) bg_popup_sub_pane_cp20_g4

0xacc3,	// (0x00058731) bg_popup_sub_pane_cp20_g5

0xd845,	// (0x0005b2b3) bg_popup_sub_pane_cp20_g6

0xd63b,	// (0x0005b0a9) bg_popup_sub_pane_cp20_g7

0xd643,	// (0x0005b0b1) bg_popup_sub_pane_cp20_g8

0xd64b,	// (0x0005b0b9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9fa,	// (0x0005d468) bg_popup_sub_pane_cp20_g

0xa74c,	// (0x000581ba) list_vitu2_match_list_item_pane_ParamLimits

0xa74c,	// (0x000581ba) list_vitu2_match_list_item_pane

0xa75e,	// (0x000581cc) list_vitu2_match_list_item_pane_t1

0x98a4,	// (0x00057312) bg_popup_sub_pane_cp21

0xb124,	// (0x00058b92) grid_vitu2_dropdown_list_pane

0x7365,	// (0x00054dd3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7365,	// (0x00054dd3) cell_vitu2_dropdown_list_char_pane

0x7388,	// (0x00054df6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7388,	// (0x00054df6) cell_vitu2_dropdown_list_ctrl_pane

0xd84d,	// (0x0005b2bb) cell_vitu2_dropdown_list_char_pane_g1

0xd856,	// (0x0005b2c4) cell_vitu2_dropdown_list_char_pane_g2

0xd85f,	// (0x0005b2cd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa17,	// (0x0005d485) cell_vitu2_dropdown_list_char_pane_g

0x73b6,	// (0x00054e24) cell_vitu2_dropdown_list_char_pane_t1

0x73c4,	// (0x00054e32) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x73c4,	// (0x00054e32) cell_vitu2_dropdown_list_ctrl_pane_g1

0x73d4,	// (0x00054e42) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x73d4,	// (0x00054e42) cell_vitu2_dropdown_list_ctrl_pane_g2

0x73e5,	// (0x00054e53) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x73e5,	// (0x00054e53) cell_vitu2_dropdown_list_ctrl_pane_g3

0x73f5,	// (0x00054e63) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x73f5,	// (0x00054e63) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce63,	// (0x0005a8d1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce63,	// (0x0005a8d1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1e,	// (0x0005d48c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1e,	// (0x0005d48c) cell_vitu2_dropdown_list_ctrl_pane_g

0x7411,	// (0x00054e7f) aid_size_cell_gallery2_ParamLimits

0x7411,	// (0x00054e7f) aid_size_cell_gallery2

0x7427,	// (0x00054e95) grid_gallery2_pane_ParamLimits

0x7427,	// (0x00054e95) grid_gallery2_pane

0x743b,	// (0x00054ea9) scroll_pane_cp029_ParamLimits

0x743b,	// (0x00054ea9) scroll_pane_cp029

0x7447,	// (0x00054eb5) cell_gallery2_pane_ParamLimits

0x7447,	// (0x00054eb5) cell_gallery2_pane

0xd868,	// (0x0005b2d6) cell_gallery2_pane_g2

0x7480,	// (0x00054eee) cell_gallery2_pane_g3

0xd872,	// (0x0005b2e0) cell_gallery2_pane_g4

0xd87a,	// (0x0005b2e8) cell_gallery2_pane_g5

0xb3c9,	// (0x00058e37) grid_highlight_pane_cp10

0x6a5b,	// (0x000544c9) popup_vitu2_match_list_window_ParamLimits

0x6a72,	// (0x000544e0) popup_vitu2_query_window_ParamLimits

0x6a72,	// (0x000544e0) popup_vitu2_query_window

0x98a4,	// (0x00057312) bg_vitu2_candi_button_pane

0xd84d,	// (0x0005b2bb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd856,	// (0x0005b2c4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd85f,	// (0x0005b2cd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0145,	// (0x0004dbb3) bg_button_pane_cp015

0x7488,	// (0x00054ef6) bg_button_pane_cp016

0x749b,	// (0x00054f09) bg_button_pane_cp017

0xc7e2,	// (0x0005a250) bg_popup_sub_pane_cp22

0xd882,	// (0x0005b2f0) popup_vitu2_query_window_g1

0x017a,	// (0x0004dbe8) popup_vitu2_query_window_g2

0x0002,

0xfa29,	// (0x0005d497) popup_vitu2_query_window_g

0x0199,	// (0x0004dc07) popup_vitu2_query_window_t1_ParamLimits

0x0199,	// (0x0004dc07) popup_vitu2_query_window_t1

0x01ce,	// (0x0004dc3c) popup_vitu2_query_window_t2_ParamLimits

0x01ce,	// (0x0004dc3c) popup_vitu2_query_window_t2

0x01e0,	// (0x0004dc4e) popup_vitu2_query_window_t3_ParamLimits

0x01e0,	// (0x0004dc4e) popup_vitu2_query_window_t3

0x74bf,	// (0x00054f2d) popup_vitu2_query_window_t4_ParamLimits

0x74bf,	// (0x00054f2d) popup_vitu2_query_window_t4

0x74e0,	// (0x00054f4e) popup_vitu2_query_window_t5_ParamLimits

0x74e0,	// (0x00054f4e) popup_vitu2_query_window_t5

0x0006,

0xfa30,	// (0x0005d49e) popup_vitu2_query_window_t_ParamLimits

0xfa30,	// (0x0005d49e) popup_vitu2_query_window_t

0xd721,	// (0x0005b18f) main_cset_text_pane

0x6f06,	// (0x00054974) aid_area_touch_slider_ParamLimits

0x6f22,	// (0x00054990) cset_slider_pane_ParamLimits

0x6f4c,	// (0x000549ba) main_cset_slider_pane_g1_ParamLimits

0x6f61,	// (0x000549cf) main_cset_slider_pane_g2_ParamLimits

0xd742,	// (0x0005b1b0) main_cset_slider_pane_g3_ParamLimits

0xd742,	// (0x0005b1b0) main_cset_slider_pane_g3

0x6f76,	// (0x000549e4) main_cset_slider_pane_g4_ParamLimits

0x6f76,	// (0x000549e4) main_cset_slider_pane_g4

0x6f85,	// (0x000549f3) main_cset_slider_pane_g5_ParamLimits

0x6f85,	// (0x000549f3) main_cset_slider_pane_g5

0x6f93,	// (0x00054a01) main_cset_slider_pane_g6_ParamLimits

0x6f93,	// (0x00054a01) main_cset_slider_pane_g6

0xf983,	// (0x0005d3f1) main_cset_slider_pane_g_ParamLimits

0xd772,	// (0x0005b1e0) main_cset_slider_pane_t1_ParamLimits

0x7023,	// (0x00054a91) main_cset_slider_pane_t2_ParamLimits

0x703d,	// (0x00054aab) main_cset_slider_pane_t3_ParamLimits

0x7057,	// (0x00054ac5) main_cset_slider_pane_t4_ParamLimits

0x7071,	// (0x00054adf) main_cset_slider_pane_t5_ParamLimits

0x708f,	// (0x00054afd) main_cset_slider_pane_t6_ParamLimits

0x70a4,	// (0x00054b12) main_cset_slider_pane_t7_ParamLimits

0x70d2,	// (0x00054b40) main_cset_slider_pane_t8_ParamLimits

0x70d2,	// (0x00054b40) main_cset_slider_pane_t8

0x70fa,	// (0x00054b68) main_cset_slider_pane_t9_ParamLimits

0x70fa,	// (0x00054b68) main_cset_slider_pane_t9

0x7122,	// (0x00054b90) main_cset_slider_pane_t10_ParamLimits

0x7122,	// (0x00054b90) main_cset_slider_pane_t10

0x714a,	// (0x00054bb8) main_cset_slider_pane_t11_ParamLimits

0x714a,	// (0x00054bb8) main_cset_slider_pane_t11

0x7174,	// (0x00054be2) main_cset_slider_pane_t12_ParamLimits

0x7174,	// (0x00054be2) main_cset_slider_pane_t12

0x7191,	// (0x00054bff) main_cset_slider_pane_t13_ParamLimits

0x7191,	// (0x00054bff) main_cset_slider_pane_t13

0xf9a8,	// (0x0005d416) main_cset_slider_pane_t_ParamLimits

0x98a4,	// (0x00057312) bg_popup_sub_pane_cp011

0xd88e,	// (0x0005b2fc) main_cset_text_pane_g1

0xd896,	// (0x0005b304) main_cset_text_pane_t1

0xd8a4,	// (0x0005b312) main_cset_text_pane_t2

0xd8b2,	// (0x0005b320) main_cset_text_pane_t3

0xd8c0,	// (0x0005b32e) main_cset_text_pane_t4

0xd8ce,	// (0x0005b33c) main_cset_text_pane_t5

0xd8dc,	// (0x0005b34a) main_cset_text_pane_t6

0xd8ea,	// (0x0005b358) main_cset_text_pane_t7

0x0006,

0xfa3f,	// (0x0005d4ad) main_cset_text_pane_t

0x98a4,	// (0x00057312) main_cam4_burst_pane

0x98a4,	// (0x00057312) main_cam5_pane

0x6e3d,	// (0x000548ab) bg_button_pane_cp019

0x6e46,	// (0x000548b4) bg_button_pane_cp020

0xd74e,	// (0x0005b1bc) main_cset_slider_pane_g7_ParamLimits

0xd74e,	// (0x0005b1bc) main_cset_slider_pane_g7

0xd75a,	// (0x0005b1c8) main_cset_slider_pane_g8_ParamLimits

0xd75a,	// (0x0005b1c8) main_cset_slider_pane_g8

0x6fa7,	// (0x00054a15) main_cset_slider_pane_g9_ParamLimits

0x6fa7,	// (0x00054a15) main_cset_slider_pane_g9

0x6fb3,	// (0x00054a21) main_cset_slider_pane_g10_ParamLimits

0x6fb3,	// (0x00054a21) main_cset_slider_pane_g10

0x6fbf,	// (0x00054a2d) main_cset_slider_pane_g11_ParamLimits

0x6fbf,	// (0x00054a2d) main_cset_slider_pane_g11

0x6fcb,	// (0x00054a39) main_cset_slider_pane_g12_ParamLimits

0x6fcb,	// (0x00054a39) main_cset_slider_pane_g12

0x6fd7,	// (0x00054a45) main_cset_slider_pane_g13_ParamLimits

0x6fd7,	// (0x00054a45) main_cset_slider_pane_g13

0x6fe3,	// (0x00054a51) main_cset_slider_pane_g14_ParamLimits

0x6fe3,	// (0x00054a51) main_cset_slider_pane_g14

0x6fef,	// (0x00054a5d) main_cset_slider_pane_g15_ParamLimits

0x6fef,	// (0x00054a5d) main_cset_slider_pane_g15

0xd7a0,	// (0x0005b20e) main_cset_slider_pane_t14_ParamLimits

0xd7a0,	// (0x0005b20e) main_cset_slider_pane_t14

0xd7d9,	// (0x0005b247) main_cset_slider_pane_t15_ParamLimits

0xd7d9,	// (0x0005b247) main_cset_slider_pane_t15

0x7501,	// (0x00054f6f) aid_cam4_burst_size_cell_ParamLimits

0x7501,	// (0x00054f6f) aid_cam4_burst_size_cell

0x7521,	// (0x00054f8f) grid_cam4_burst_pane_ParamLimits

0x7521,	// (0x00054f8f) grid_cam4_burst_pane

0x755b,	// (0x00054fc9) linegrid_cam4_burst_pane_ParamLimits

0x755b,	// (0x00054fc9) linegrid_cam4_burst_pane

0xd8f8,	// (0x0005b366) scroll_pane_cp30_ParamLimits

0xd8f8,	// (0x0005b366) scroll_pane_cp30

0x757d,	// (0x00054feb) cell_cam4_burst_pane_ParamLimits

0x757d,	// (0x00054feb) cell_cam4_burst_pane

0xd904,	// (0x0005b372) linegrid_cam4_burst_pane_g1_ParamLimits

0xd904,	// (0x0005b372) linegrid_cam4_burst_pane_g1

0x75d2,	// (0x00055040) linegrid_cam4_burst_pane_g2_ParamLimits

0x75d2,	// (0x00055040) linegrid_cam4_burst_pane_g2

0xd911,	// (0x0005b37f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd911,	// (0x0005b37f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4e,	// (0x0005d4bc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0005d4bc) linegrid_cam4_burst_pane_g

0x75e3,	// (0x00055051) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x75e3,	// (0x00055051) linegrid_cam4_burst_pane_g3_copy1

0xd91e,	// (0x0005b38c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd91e,	// (0x0005b38c) linegrid_cam4_burst_pane_g4

0x7601,	// (0x0005506f) linegrid_cam4_burst_pane_g5_ParamLimits

0x7601,	// (0x0005506f) linegrid_cam4_burst_pane_g5

0x7612,	// (0x00055080) linegrid_cam4_burst_pane_g6_ParamLimits

0x7612,	// (0x00055080) linegrid_cam4_burst_pane_g6

0xd92b,	// (0x0005b399) linegrid_cam4_burst_pane_g7_ParamLimits

0xd92b,	// (0x0005b399) linegrid_cam4_burst_pane_g7

0x7629,	// (0x00055097) cell_cam4_burst_pane_g1

0xd944,	// (0x0005b3b2) main_cam5_pane_t1_ParamLimits

0xd944,	// (0x0005b3b2) main_cam5_pane_t1

0xd956,	// (0x0005b3c4) main_cam5_pane_t2_ParamLimits

0xd956,	// (0x0005b3c4) main_cam5_pane_t2

0xd968,	// (0x0005b3d6) main_cam5_pane_t3_ParamLimits

0xd968,	// (0x0005b3d6) main_cam5_pane_t3

0xd97a,	// (0x0005b3e8) main_cam5_pane_t4_ParamLimits

0xd97a,	// (0x0005b3e8) main_cam5_pane_t4

0xd992,	// (0x0005b400) main_cam5_pane_t5_ParamLimits

0xd992,	// (0x0005b400) main_cam5_pane_t5

0xd9a6,	// (0x0005b414) main_cam5_pane_t6_ParamLimits

0xd9a6,	// (0x0005b414) main_cam5_pane_t6

0xd9ba,	// (0x0005b428) main_cam5_pane_t7_ParamLimits

0xd9ba,	// (0x0005b428) main_cam5_pane_t7

0xd9cc,	// (0x0005b43a) main_cam5_pane_t8_ParamLimits

0xd9cc,	// (0x0005b43a) main_cam5_pane_t8

0xd9ea,	// (0x0005b458) main_cam5_pane_t9_ParamLimits

0xd9ea,	// (0x0005b458) main_cam5_pane_t9

0xd9fc,	// (0x0005b46a) main_cam5_pane_t10_ParamLimits

0xd9fc,	// (0x0005b46a) main_cam5_pane_t10

0xda0e,	// (0x0005b47c) main_cam5_pane_t11_ParamLimits

0xda0e,	// (0x0005b47c) main_cam5_pane_t11

0xda22,	// (0x0005b490) main_cam5_pane_t12_ParamLimits

0xda22,	// (0x0005b490) main_cam5_pane_t12

0xda39,	// (0x0005b4a7) main_cam5_pane_t13_ParamLimits

0xda39,	// (0x0005b4a7) main_cam5_pane_t13

0x000c,

0xfa5a,	// (0x0005d4c8) main_cam5_pane_t_ParamLimits

0xfa5a,	// (0x0005d4c8) main_cam5_pane_t

0x0d6b,	// (0x0004e7d9) popup_scut_keymap_window_ParamLimits

0x0d6b,	// (0x0004e7d9) popup_scut_keymap_window

0x763c,	// (0x000550aa) aid_size_cell_brow_shortcut

0xb3c9,	// (0x00058e37) bg_popup_window_pane_cp010

0x7648,	// (0x000550b6) grid_scut_pane

0x7654,	// (0x000550c2) cell_scut_pane_ParamLimits

0x7654,	// (0x000550c2) cell_scut_pane

0x766d,	// (0x000550db) cell_scut_pane_g1

0xda5c,	// (0x0005b4ca) cell_scut_pane_t1

0xda6b,	// (0x0005b4d9) cell_scut_pane_t2

0x7676,	// (0x000550e4) cell_scut_pane_t3

0x0002,

0xfa75,	// (0x0005d4e3) cell_scut_pane_t

0x5455,	// (0x00052ec3) main_mup3_pane_g8_ParamLimits

0x5455,	// (0x00052ec3) main_mup3_pane_g8

0x695d,	// (0x000543cb) area_vitu2_query_pane_ParamLimits

0x695d,	// (0x000543cb) area_vitu2_query_pane

0x0159,	// (0x0004dbc7) input_focus_pane_cp08

0xda7a,	// (0x0005b4e8) area_vitu2_query_pane_g1

0x025e,	// (0x0004dccc) area_vitu2_query_pane_g2

0x0001,

0xfa7c,	// (0x0005d4ea) area_vitu2_query_pane_g

0x7684,	// (0x000550f2) area_vitu2_query_pane_t1_ParamLimits

0x7684,	// (0x000550f2) area_vitu2_query_pane_t1

0x7698,	// (0x00055106) area_vitu2_query_pane_t2_ParamLimits

0x7698,	// (0x00055106) area_vitu2_query_pane_t2

0x026f,	// (0x0004dcdd) area_vitu2_query_pane_t3_ParamLimits

0x026f,	// (0x0004dcdd) area_vitu2_query_pane_t3

0x76ac,	// (0x0005511a) area_vitu2_query_pane_t4_ParamLimits

0x76ac,	// (0x0005511a) area_vitu2_query_pane_t4

0x76d4,	// (0x00055142) area_vitu2_query_pane_t5_ParamLimits

0x76d4,	// (0x00055142) area_vitu2_query_pane_t5

0x76fc,	// (0x0005516a) area_vitu2_query_pane_t6_ParamLimits

0x76fc,	// (0x0005516a) area_vitu2_query_pane_t6

0x0006,

0xfa81,	// (0x0005d4ef) area_vitu2_query_pane_t_ParamLimits

0xfa81,	// (0x0005d4ef) area_vitu2_query_pane_t

0x7748,	// (0x000551b6) bg_button_pane_cp018

0x7756,	// (0x000551c4) bg_button_pane_cp021

0x0297,	// (0x0004dd05) bg_button_pane_cp022

0x02a8,	// (0x0004dd16) input_focus_pane_cp09

0x3318,	// (0x00050d86) aid_size_touch_mv_arrow_left

0x3341,	// (0x00050daf) aid_size_touch_mv_arrow_right

0x7007,	// (0x00054a75) main_cset_slider_pane_g16_ParamLimits

0x7007,	// (0x00054a75) main_cset_slider_pane_g16

0x7015,	// (0x00054a83) main_cset_slider_pane_g17_ParamLimits

0x7015,	// (0x00054a83) main_cset_slider_pane_g17

0x7629,	// (0x00055097) cell_cam4_burst_pane_g1_ParamLimits

0x98a4,	// (0x00057312) compa_mode_pane

0x71ff,	// (0x00054c6d) popup_vtel_slider_window_g3_ParamLimits

0x71ff,	// (0x00054c6d) popup_vtel_slider_window_g3

0x7216,	// (0x00054c84) popup_vtel_slider_window_g4_ParamLimits

0x7216,	// (0x00054c84) popup_vtel_slider_window_g4

0x722d,	// (0x00054c9b) popup_vtel_slider_window_t1_ParamLimits

0x722d,	// (0x00054c9b) popup_vtel_slider_window_t1

0x98a4,	// (0x00057312) main_cl_pane

0xc80e,	// (0x0005a27c) popup_imed_adjust2_window_ParamLimits

0xc7e2,	// (0x0005a250) bg_tb_trans_pane_cp05_ParamLimits

0xd110,	// (0x0005ab7e) popup_imed_adjust2_window_g1_ParamLimits

0xd11f,	// (0x0005ab8d) popup_imed_adjust2_window_g2_ParamLimits

0xd11f,	// (0x0005ab8d) popup_imed_adjust2_window_g2

0xd12b,	// (0x0005ab99) popup_imed_adjust2_window_g3_ParamLimits

0xd12b,	// (0x0005ab99) popup_imed_adjust2_window_g3

0x0002,

0xf7ec,	// (0x0005d25a) popup_imed_adjust2_window_g_ParamLimits

0xf7ec,	// (0x0005d25a) popup_imed_adjust2_window_g

0xd137,	// (0x0005aba5) popup_imed_adjust2_window_t1_ParamLimits

0xd14f,	// (0x0005abbd) slider_imed_adjust_pane_ParamLimits

0xd163,	// (0x0005abd1) slider_imed_adjust_pane_g1_ParamLimits

0xd173,	// (0x0005abe1) slider_imed_adjust_pane_g2_ParamLimits

0xd183,	// (0x0005abf1) slider_imed_adjust_pane_g3_ParamLimits

0xd194,	// (0x0005ac02) slider_imed_adjust_pane_g4_ParamLimits

0xf7f3,	// (0x0005d261) slider_imed_adjust_pane_g_ParamLimits

0x66df,	// (0x0005414d) aid_touch_area_cam4_ParamLimits

0x66df,	// (0x0005414d) aid_touch_area_cam4

0xa621,	// (0x0005808f) battery_pane_cp01

0x67b1,	// (0x0005421f) main_camera4_pane_g6_ParamLimits

0x67b1,	// (0x0005421f) main_camera4_pane_g6

0x67db,	// (0x00054249) main_camera4_pane_t2_ParamLimits

0x67db,	// (0x00054249) main_camera4_pane_t2

0x0001,

0xf8f6,	// (0x0005d364) main_camera4_pane_t_ParamLimits

0xf8f6,	// (0x0005d364) main_camera4_pane_t

0x6810,	// (0x0005427e) aid_touch_area_vid4_ParamLimits

0x6810,	// (0x0005427e) aid_touch_area_vid4

0x6864,	// (0x000542d2) main_video4_pane_g5_ParamLimits

0x6864,	// (0x000542d2) main_video4_pane_g5

0x6889,	// (0x000542f7) vid4_progress_pane_ParamLimits

0x6889,	// (0x000542f7) vid4_progress_pane

0xd766,	// (0x0005b1d4) main_cset_slider_pane_g18_ParamLimits

0xd766,	// (0x0005b1d4) main_cset_slider_pane_g18

0xd938,	// (0x0005b3a6) cell_cam4_burst_pane_g2_ParamLimits

0xd938,	// (0x0005b3a6) cell_cam4_burst_pane_g2

0x0001,

0xfa55,	// (0x0005d4c3) cell_cam4_burst_pane_g_ParamLimits

0xfa55,	// (0x0005d4c3) cell_cam4_burst_pane_g

0xa060,	// (0x00057ace) bg_cl_pane_ParamLimits

0xa060,	// (0x00057ace) bg_cl_pane

0x7762,	// (0x000551d0) cl_header_pane_ParamLimits

0x7762,	// (0x000551d0) cl_header_pane

0x7776,	// (0x000551e4) cl_listscroll_pane_ParamLimits

0x7776,	// (0x000551e4) cl_listscroll_pane

0xda86,	// (0x0005b4f4) bg_cl_pane_g1

0xda8e,	// (0x0005b4fc) bg_cl_pane_g2

0xda96,	// (0x0005b504) bg_cl_pane_g3

0xda9e,	// (0x0005b50c) bg_cl_pane_g4

0xdaa6,	// (0x0005b514) bg_cl_pane_g5

0xdaae,	// (0x0005b51c) bg_cl_pane_g6

0xdab6,	// (0x0005b524) bg_cl_pane_g7

0xdabe,	// (0x0005b52c) bg_cl_pane_g8

0xdac6,	// (0x0005b534) bg_cl_pane_g9

0x0008,

0xfa90,	// (0x0005d4fe) bg_cl_pane_g

0x7786,	// (0x000551f4) aid_height_cl_leading_ParamLimits

0x7786,	// (0x000551f4) aid_height_cl_leading

0x7792,	// (0x00055200) aid_height_cl_text_ParamLimits

0x7792,	// (0x00055200) aid_height_cl_text

0x98fd,	// (0x0005736b) bg_cl_header_pane_ParamLimits

0x98fd,	// (0x0005736b) bg_cl_header_pane

0x77b1,	// (0x0005521f) cl_header_pane_g1_ParamLimits

0x77b1,	// (0x0005521f) cl_header_pane_g1

0x77c7,	// (0x00055235) cl_header_pane_t1_ParamLimits

0x77c7,	// (0x00055235) cl_header_pane_t1

0xdace,	// (0x0005b53c) cl_list_pane

0xd739,	// (0x0005b1a7) hc_scroll_pane_cp01

0xacc3,	// (0x00058731) bg_cl_header_pane_g1

0xd61b,	// (0x0005b089) bg_cl_header_pane_g2

0xace3,	// (0x00058751) bg_cl_header_pane_g3

0xd62b,	// (0x0005b099) bg_cl_header_pane_g4

0xd623,	// (0x0005b091) bg_cl_header_pane_g5

0xd845,	// (0x0005b2b3) bg_cl_header_pane_g6

0xd643,	// (0x0005b0b1) bg_cl_header_pane_g7

0xd64b,	// (0x0005b0b9) bg_cl_header_pane_g8

0xd63b,	// (0x0005b0a9) bg_cl_header_pane_g9

0x0008,

0xfaa3,	// (0x0005d511) bg_cl_header_pane_g

0x77e0,	// (0x0005524e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x77e0,	// (0x0005524e) hc_cl_list_double_graphic_heading_pane

0x77f3,	// (0x00055261) hc_cl_list_single_graphic_pane_ParamLimits

0x77f3,	// (0x00055261) hc_cl_list_single_graphic_pane

0x780b,	// (0x00055279) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x780b,	// (0x00055279) hc_cl_list_single_graphic_pane_g1

0x7817,	// (0x00055285) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7817,	// (0x00055285) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab6,	// (0x0005d524) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab6,	// (0x0005d524) hc_cl_list_single_graphic_pane_g

0x782b,	// (0x00055299) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x782b,	// (0x00055299) hc_cl_list_single_graphic_pane_t1

0x780b,	// (0x00055279) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x780b,	// (0x00055279) hc_cl_list_double_graphic_heading_pane_g1

0x7840,	// (0x000552ae) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7840,	// (0x000552ae) hc_cl_list_double_graphic_heading_pane_g2

0x7854,	// (0x000552c2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7854,	// (0x000552c2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfabb,	// (0x0005d529) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfabb,	// (0x0005d529) hc_cl_list_double_graphic_heading_pane_g

0x7868,	// (0x000552d6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7868,	// (0x000552d6) hc_cl_list_double_graphic_heading_pane_t1

0x787d,	// (0x000552eb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x787d,	// (0x000552eb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac2,	// (0x0005d530) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac2,	// (0x0005d530) hc_cl_list_double_graphic_heading_pane_t

0x7892,	// (0x00055300) vid4_progress_pane_g1

0x78a4,	// (0x00055312) vid4_progress_pane_g2

0xa2ca,	// (0x00057d38) vid4_progress_pane_g3

0xa774,	// (0x000581e2) vid4_progress_pane_g4

0x0004,

0xfac7,	// (0x0005d535) vid4_progress_pane_g

0xa792,	// (0x00058200) vid4_progress_pane_t1

0xa7a7,	// (0x00058215) vid4_progress_pane_t2

0x0002,

0xfad2,	// (0x0005d540) vid4_progress_pane_t

0xa7d2,	// (0x00058240) wait_bar_pane_cp07

0xca20,	// (0x0005a48e) blid_firmament_pane_ParamLimits

0xca63,	// (0x0005a4d1) popup_blid_sat_info2_window_g1

0xca87,	// (0x0005a4f5) popup_blid_sat_info2_window_t3

0xca95,	// (0x0005a503) popup_blid_sat_info2_window_t4

0xcaa3,	// (0x0005a511) popup_blid_sat_info2_window_t5

0xcab1,	// (0x0005a51f) popup_blid_sat_info2_window_t6

0xcac1,	// (0x0005a52f) popup_blid_sat_info2_window_t7

0xcacf,	// (0x0005a53d) popup_blid_sat_info2_window_t8

0xcadd,	// (0x0005a54b) popup_blid_sat_info2_window_t9

0xcaeb,	// (0x0005a559) popup_blid_sat_info2_window_t10

0xcbb3,	// (0x0005a621) aid_firma_cardinal_ParamLimits

0xcbc7,	// (0x0005a635) blid_firmament_pane_t1_ParamLimits

0xcbde,	// (0x0005a64c) blid_firmament_pane_t2_ParamLimits

0xcbf5,	// (0x0005a663) blid_firmament_pane_t3_ParamLimits

0xcc0c,	// (0x0005a67a) blid_firmament_pane_t4_ParamLimits

0xf6e5,	// (0x0005d153) blid_firmament_pane_t_ParamLimits

0xcc23,	// (0x0005a691) blid_sat_info_pane_ParamLimits

0x98fd,	// (0x0005736b) main_cam_set_pane_ParamLimits

0x5d36,	// (0x000537a4) aid_size_cell_colour_35_ParamLimits

0x5d56,	// (0x000537c4) aid_size_cell_colour_112_ParamLimits

0x5d76,	// (0x000537e4) aid_size_cell_effect_ParamLimits

0xc7e2,	// (0x0005a250) bg_tb_trans_pane_cp02_ParamLimits

0xaf29,	// (0x00058997) heading_imed_pane_ParamLimits

0x5d96,	// (0x00053804) listscroll_imed_pane_ParamLimits

0xbe04,	// (0x00059872) popup_call2_audio_first_window_g5_ParamLimits

0xbe04,	// (0x00059872) popup_call2_audio_first_window_g5

0x6347,	// (0x00053db5) aid_size_touch_image3_arrow_left_ParamLimits

0x6347,	// (0x00053db5) aid_size_touch_image3_arrow_left

0x6373,	// (0x00053de1) aid_size_touch_image3_arrow_right_ParamLimits

0x6373,	// (0x00053de1) aid_size_touch_image3_arrow_right

0xa7bd,	// (0x0005822b) vid4_progress_pane_t3

0x60b5,	// (0x00053b23) main_hwr_training_symbol_option_pane_ParamLimits

0x60b5,	// (0x00053b23) main_hwr_training_symbol_option_pane

0xd3ff,	// (0x0005ae6d) popup_hwr_training_preview_window_ParamLimits

0xd3ff,	// (0x0005ae6d) popup_hwr_training_preview_window

0x60d5,	// (0x00053b43) hwr_training_navi_pane_g5_ParamLimits

0x60d5,	// (0x00053b43) hwr_training_navi_pane_g5

0xd609,	// (0x0005b077) popup_char_count_window

0x98fd,	// (0x0005736b) bg_popup_sub_pane_cp20_ParamLimits

0x7347,	// (0x00054db5) list_vitu2_match_list_pane_ParamLimits

0x7356,	// (0x00054dc4) vitu2_page_scroll_pane_ParamLimits

0x7356,	// (0x00054dc4) vitu2_page_scroll_pane

0xdad7,	// (0x0005b545) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdad7,	// (0x0005b545) list_single_hwr_training_symbol_option_pane

0xdaea,	// (0x0005b558) list_single_hwr_training_symbol_option_pane_g1

0xdaf2,	// (0x0005b560) list_single_hwr_training_symbol_option_pane_t1

0xdb00,	// (0x0005b56e) bg_button_pane_cp023

0xdb09,	// (0x0005b577) bg_button_pane_cp024

0x78ea,	// (0x00055358) vitu2_page_scroll_pane_g1

0x78f2,	// (0x00055360) vitu2_page_scroll_pane_g2

0x0001,

0xfad9,	// (0x0005d547) vitu2_page_scroll_pane_g

0x78fc,	// (0x0005536a) vitu2_page_scroll_pane_t1

0xc980,	// (0x0005a3ee) popup_char_count_window_g1

0xdb3c,	// (0x0005b5aa) popup_char_count_window_g2

0xdb45,	// (0x0005b5b3) popup_char_count_window_g3

0x0002,

0xfade,	// (0x0005d54c) popup_char_count_window_g

0xdb4e,	// (0x0005b5bc) popup_char_count_window_t1

0x98a4,	// (0x00057312) main_vded2_pane

0xd0fc,	// (0x0005ab6a) aid_size_cell_imed_line

0xd106,	// (0x0005ab74) grid_imed_line_width_pane

0xa6db,	// (0x00058149) vid4_indicators_pane_g4

0xdb5c,	// (0x0005b5ca) cell_imed_line_width_pane_ParamLimits

0xdb5c,	// (0x0005b5ca) cell_imed_line_width_pane

0xdb72,	// (0x0005b5e0) cell_imed_line_width_pane_g1

0xdb7b,	// (0x0005b5e9) cell_imed_line_width_pane_g2

0x0001,

0xfae5,	// (0x0005d553) cell_imed_line_width_pane_g

0x790b,	// (0x00055379) main_vded2_pane_g1_ParamLimits

0x790b,	// (0x00055379) main_vded2_pane_g1

0x7926,	// (0x00055394) main_vded2_pane_g2_ParamLimits

0x7926,	// (0x00055394) main_vded2_pane_g2

0x0001,

0xfaea,	// (0x0005d558) main_vded2_pane_g_ParamLimits

0xfaea,	// (0x0005d558) main_vded2_pane_g

0x7938,	// (0x000553a6) vded2_slider_pane_ParamLimits

0x7938,	// (0x000553a6) vded2_slider_pane

0x7948,	// (0x000553b6) aid_size_touch_vded2_end

0x7952,	// (0x000553c0) aid_size_touch_vded2_playhead

0xdb83,	// (0x0005b5f1) aid_size_touch_vded2_start

0xdb8b,	// (0x0005b5f9) vded2_slider_bg_pane

0xdb94,	// (0x0005b602) vded2_slider_pane_g1

0xdb9d,	// (0x0005b60b) vded2_slider_pane_g2

0x795c,	// (0x000553ca) vded2_slider_pane_g3

0x0002,

0xfaef,	// (0x0005d55d) vded2_slider_pane_g

0xdba5,	// (0x0005b613) vded2_slider_bg_pane_g1

0xdbae,	// (0x0005b61c) vded2_slider_bg_pane_g2

0xdbb7,	// (0x0005b625) vded2_slider_bg_pane_g3

0x0002,

0xfaf6,	// (0x0005d564) vded2_slider_bg_pane_g

0x3a07,	// (0x00051475) aid_postcard_touch_down_pane_ParamLimits

0x3a07,	// (0x00051475) aid_postcard_touch_down_pane

0x3a1f,	// (0x0005148d) aid_postcard_touch_up_pane_ParamLimits

0x3a1f,	// (0x0005148d) aid_postcard_touch_up_pane

0x98a4,	// (0x00057312) main_blid2_pane

0xc7f0,	// (0x0005a25e) popup_blid2_search_window

0x98a4,	// (0x00057312) blid2_gps_pane

0x98a4,	// (0x00057312) blid2_navig_pane

0x98a4,	// (0x00057312) blid2_search_pane

0x98a4,	// (0x00057312) blid2_tripm_pane

0x7967,	// (0x000553d5) blid2_search_pane_g1_ParamLimits

0x7967,	// (0x000553d5) blid2_search_pane_g1

0x797a,	// (0x000553e8) blid2_search_pane_t1_ParamLimits

0x797a,	// (0x000553e8) blid2_search_pane_t1

0x798c,	// (0x000553fa) aid_size_cell_blid2_gps_ParamLimits

0x798c,	// (0x000553fa) aid_size_cell_blid2_gps

0x79a4,	// (0x00055412) blid2_gps_pane_g1_ParamLimits

0x79a4,	// (0x00055412) blid2_gps_pane_g1

0x79b8,	// (0x00055426) grid_blid2_satellite_pane_ParamLimits

0x79b8,	// (0x00055426) grid_blid2_satellite_pane

0x79d0,	// (0x0005543e) blid2_navig_pane_g1_ParamLimits

0x79d0,	// (0x0005543e) blid2_navig_pane_g1

0x79dc,	// (0x0005544a) blid2_navig_pane_t1_ParamLimits

0x79dc,	// (0x0005544a) blid2_navig_pane_t1

0x79f7,	// (0x00055465) blid2_navig_pane_t2_ParamLimits

0x79f7,	// (0x00055465) blid2_navig_pane_t2

0x0001,

0xfafd,	// (0x0005d56b) blid2_navig_pane_t_ParamLimits

0xfafd,	// (0x0005d56b) blid2_navig_pane_t

0x7a12,	// (0x00055480) blid2_navig_ring_pane_ParamLimits

0x7a12,	// (0x00055480) blid2_navig_ring_pane

0x7a2d,	// (0x0005549b) blid2_speed_pane_ParamLimits

0x7a2d,	// (0x0005549b) blid2_speed_pane

0x7a39,	// (0x000554a7) blid2_tripm_pane_g1_ParamLimits

0x7a39,	// (0x000554a7) blid2_tripm_pane_g1

0x7a54,	// (0x000554c2) blid2_tripm_pane_g2_ParamLimits

0x7a54,	// (0x000554c2) blid2_tripm_pane_g2

0x7a68,	// (0x000554d6) blid2_tripm_pane_g3_ParamLimits

0x7a68,	// (0x000554d6) blid2_tripm_pane_g3

0x7a7c,	// (0x000554ea) blid2_tripm_pane_g4_ParamLimits

0x7a7c,	// (0x000554ea) blid2_tripm_pane_g4

0x7a90,	// (0x000554fe) blid2_tripm_pane_g5_ParamLimits

0x7a90,	// (0x000554fe) blid2_tripm_pane_g5

0x0005,

0xfb02,	// (0x0005d570) blid2_tripm_pane_g_ParamLimits

0xfb02,	// (0x0005d570) blid2_tripm_pane_g

0x7ab6,	// (0x00055524) blid2_tripm_pane_t1_ParamLimits

0x7ab6,	// (0x00055524) blid2_tripm_pane_t1

0x7acf,	// (0x0005553d) blid2_tripm_pane_t2_ParamLimits

0x7acf,	// (0x0005553d) blid2_tripm_pane_t2

0x7ae8,	// (0x00055556) blid2_tripm_pane_t3_ParamLimits

0x7ae8,	// (0x00055556) blid2_tripm_pane_t3

0x0003,

0xfb0f,	// (0x0005d57d) blid2_tripm_pane_t_ParamLimits

0xfb0f,	// (0x0005d57d) blid2_tripm_pane_t

0x7b2f,	// (0x0005559d) cell_blid2_satellite_pane_ParamLimits

0x7b2f,	// (0x0005559d) cell_blid2_satellite_pane

0x7b4d,	// (0x000555bb) cell_blid2_satellite_pane_g1

0xdbc0,	// (0x0005b62e) cell_blid2_satellite_pane_t1

0xcc33,	// (0x0005a6a1) blid2_speed_pane_g1

0xdbce,	// (0x0005b63c) blid2_speed_pane_t1

0xdbdc,	// (0x0005b64a) blid2_speed_pane_t2

0x0001,

0xfb18,	// (0x0005d586) blid2_speed_pane_t

0xcc33,	// (0x0005a6a1) blid2_navig_ring_pane_g1

0x7b56,	// (0x000555c4) blid2_navig_ring_pane_g2

0x7b5e,	// (0x000555cc) blid2_navig_ring_pane_g3

0x7b66,	// (0x000555d4) blid2_navig_ring_pane_g4

0x7b6e,	// (0x000555dc) blid2_navig_ring_pane_g5

0x0004,

0xfb1d,	// (0x0005d58b) blid2_navig_ring_pane_g

0x98a4,	// (0x00057312) bg_popup_window_pane_cp011

0xdbea,	// (0x0005b658) popup_blid2_search_window_g1

0xdbf2,	// (0x0005b660) popup_blid2_search_window_t1

0xdc00,	// (0x0005b66e) popup_blid2_search_window_t2

0x0001,

0xfb28,	// (0x0005d596) popup_blid2_search_window_t

0xabd2,	// (0x00058640) main_browser_pane_g1

0xa060,	// (0x00057ace) main_browser_pane_ParamLimits

0x98fd,	// (0x0005736b) bg_button_pane_cp011_ParamLimits

0x6bcf,	// (0x0005463d) cell_vitu2_function_pane_g1_ParamLimits

0xc7e2,	// (0x0005a250) bg_popup_sub_pane_cp22_ParamLimits

0x0159,	// (0x0004dbc7) input_focus_pane_cp08_ParamLimits

0x74ae,	// (0x00054f1c) popup_vitu2_query_button_pane_ParamLimits

0x74ae,	// (0x00054f1c) popup_vitu2_query_button_pane

0x0170,	// (0x0004dbde) popup_vitu2_query_input_button_pane

0xd882,	// (0x0005b2f0) popup_vitu2_query_window_g1_ParamLimits

0x017a,	// (0x0004dbe8) popup_vitu2_query_window_g2_ParamLimits

0xfa29,	// (0x0005d497) popup_vitu2_query_window_g_ParamLimits

0x98a4,	// (0x00057312) bg_button_pane_cp026

0x7b76,	// (0x000555e4) popup_vitu2_query_input_button_pane_g1

0x98a4,	// (0x00057312) bg_button_pane_cp025

0xdc0e,	// (0x0005b67c) popup_vitu2_query_button_pane_t1

0x512b,	// (0x00052b99) main_mp3_pane_t6

0x5139,	// (0x00052ba7) popup_slider_window_cp01

0xa63f,	// (0x000580ad) cam4_battery_pane

0xa694,	// (0x00058102) cam4_battery_pane_cp02

0xa76c,	// (0x000581da) cam4_battery_pane_cp01

0xa76c,	// (0x000581da) cam4_battery_pane_cp03

0xcc33,	// (0x0005a6a1) cam4_battery_pane_g1

0xdc1c,	// (0x0005b68a) cam4_battery_pane_g2

0x0001,

0xfb2d,	// (0x0005d59b) cam4_battery_pane_g

0xcaf9,	// (0x0005a567) popup_blid_sat_info2_window_t11

0x3318,	// (0x00050d86) aid_size_touch_mv_arrow_left_ParamLimits

0x3341,	// (0x00050daf) aid_size_touch_mv_arrow_right_ParamLimits

0xb329,	// (0x00058d97) navi_pane_g1_ParamLimits

0x3380,	// (0x00050dee) navi_pane_g2_ParamLimits

0x33ae,	// (0x00050e1c) navi_pane_g3_ParamLimits

0xf3f7,	// (0x0005ce65) navi_pane_g_ParamLimits

0x3408,	// (0x00050e76) navi_pane_mv_t1_ParamLimits

0x5da2,	// (0x00053810) grid_imed_effect_pane_ParamLimits

0x1e6d,	// (0x0004f8db) aid_placing_vt_slider_lsc

0xab1d,	// (0x0005858b) aid_placing_vt_slider_prt

0x98fd,	// (0x0005736b) bg_tb_trans_pane_cp01_ParamLimits

0xcd83,	// (0x0005a7f1) popup_image_details_window_g1_ParamLimits

0xcd96,	// (0x0005a804) popup_image_details_window_g2_ParamLimits

0xcdab,	// (0x0005a819) popup_image_details_window_g3_ParamLimits

0xcdab,	// (0x0005a819) popup_image_details_window_g3

0xf72a,	// (0x0005d198) popup_image_details_window_g_ParamLimits

0xcdbf,	// (0x0005a82d) popup_image_details_window_t1_ParamLimits

0xcdd1,	// (0x0005a83f) popup_image_details_window_t2_ParamLimits

0xcdea,	// (0x0005a858) popup_image_details_window_t3_ParamLimits

0xcdfe,	// (0x0005a86c) popup_image_details_window_t4_ParamLimits

0xce19,	// (0x0005a887) popup_image_details_window_t5_ParamLimits

0xf731,	// (0x0005d19f) popup_image_details_window_t_ParamLimits

0x779e,	// (0x0005520c) cl_header_name_pane_ParamLimits

0x779e,	// (0x0005520c) cl_header_name_pane

0x7b7e,	// (0x000555ec) cl_header_name_pane_t1_ParamLimits

0x7b7e,	// (0x000555ec) cl_header_name_pane_t1

0x7b9f,	// (0x0005560d) cl_header_name_pane_t2_ParamLimits

0x7b9f,	// (0x0005560d) cl_header_name_pane_t2

0x7be1,	// (0x0005564f) cl_header_name_pane_t3_ParamLimits

0x7be1,	// (0x0005564f) cl_header_name_pane_t3

0x0002,

0xfb32,	// (0x0005d5a0) cl_header_name_pane_t_ParamLimits

0xfb32,	// (0x0005d5a0) cl_header_name_pane_t

0x33d9,	// (0x00050e47) navi_pane_mv_g2_ParamLimits

0xd5e3,	// (0x0005b051) field_vitu2_entry_pane_g1_ParamLimits

0xd5ef,	// (0x0005b05d) field_vitu2_entry_pane_g2_ParamLimits

0xd5fb,	// (0x0005b069) field_vitu2_entry_pane_g3_ParamLimits

0xd5fb,	// (0x0005b069) field_vitu2_entry_pane_g3

0xf928,	// (0x0005d396) field_vitu2_entry_pane_g_ParamLimits

0x6b4b,	// (0x000545b9) cell_vitu2_itu_pane_g1_ParamLimits

0x6b5b,	// (0x000545c9) cell_vitu2_itu_pane_g2_ParamLimits

0x6b5b,	// (0x000545c9) cell_vitu2_itu_pane_g2

0x0001,

0xf934,	// (0x0005d3a2) cell_vitu2_itu_pane_g_ParamLimits

0xf934,	// (0x0005d3a2) cell_vitu2_itu_pane_g

0x98fd,	// (0x0005736b) bg_vkb2_func_pane_cp05_ParamLimits

0x98fd,	// (0x0005736b) bg_vkb2_func_pane_cp05

0x98fd,	// (0x0005736b) bg_vkb2_func_pane_cp03

0x98fd,	// (0x0005736b) bg_vkb2_func_pane_cp04

0x98fd,	// (0x0005736b) bg_vkb2_func_pane_cp10_ParamLimits

0x98fd,	// (0x0005736b) bg_vkb2_func_pane_cp10

0x0297,	// (0x0004dd05) bg_vkb2_func_pane_cp08

0x7748,	// (0x000551b6) bg_vkb2_func_pane_cp06

0x7756,	// (0x000551c4) bg_vkb2_func_pane_cp07

0xdb12,	// (0x0005b580) bg_vkb2_func_pane_cp11_ParamLimits

0xdb12,	// (0x0005b580) bg_vkb2_func_pane_cp11

0xdb27,	// (0x0005b595) bg_vkb2_func_pane_cp12_ParamLimits

0xdb27,	// (0x0005b595) bg_vkb2_func_pane_cp12

0x98a4,	// (0x00057312) bg_vkb2_func_pane_cp09

0xd61b,	// (0x0005b089) bg_vkb2_func_pane_g1

0xace3,	// (0x00058751) bg_vkb2_func_pane_g2

0xd623,	// (0x0005b091) bg_vkb2_func_pane_g3

0xd62b,	// (0x0005b099) bg_vkb2_func_pane_g4

0xd845,	// (0x0005b2b3) bg_vkb2_func_pane_g5

0xd643,	// (0x0005b0b1) bg_vkb2_func_pane_g6

0xd64b,	// (0x0005b0b9) bg_vkb2_func_pane_g7

0xd63b,	// (0x0005b0a9) bg_vkb2_func_pane_g8

0xacc3,	// (0x00058731) bg_vkb2_func_pane_g9

0x0008,

0xfb39,	// (0x0005d5a7) bg_vkb2_func_pane_g

0x7aa4,	// (0x00055512) blid2_tripm_pane_g6_ParamLimits

0x7aa4,	// (0x00055512) blid2_tripm_pane_g6

0xd4b7,	// (0x0005af25) mp4_progress_pane_g1

0x7b1b,	// (0x00055589) blid2_tripm_values_pane_ParamLimits

0x7b1b,	// (0x00055589) blid2_tripm_values_pane

0x7c12,	// (0x00055680) blid2_tripm_values_pane_t1

0x7c20,	// (0x0005568e) blid2_tripm_values_pane_t2

0x7c2e,	// (0x0005569c) blid2_tripm_values_pane_t3

0x7c3c,	// (0x000556aa) blid2_tripm_values_pane_t4

0x7c4a,	// (0x000556b8) blid2_tripm_values_pane_t5

0x7c58,	// (0x000556c6) blid2_tripm_values_pane_t6

0x7c66,	// (0x000556d4) blid2_tripm_values_pane_t7

0x7c74,	// (0x000556e2) blid2_tripm_values_pane_t8

0x7c82,	// (0x000556f0) blid2_tripm_values_pane_t9

0x0008,

0xfb4c,	// (0x0005d5ba) blid2_tripm_values_pane_t

0x1eaa,	// (0x0004f918) call_video_pane_t1_ParamLimits

0x1ec4,	// (0x0004f932) call_video_pane_t2_ParamLimits

0xf279,	// (0x0005cce7) call_video_pane_t_ParamLimits

0xff3a,	// (0x0004d9a8) msg_header_pane_g1_ParamLimits

0xb54b,	// (0x00058fb9) msg_header_pane_g2_ParamLimits

0xb54b,	// (0x00058fb9) msg_header_pane_g2

0x0001,

0xf49a,	// (0x0005cf08) msg_header_pane_g_ParamLimits

0xf49a,	// (0x0005cf08) msg_header_pane_g

0xa060,	// (0x00057ace) main_clock2_pane_ParamLimits

0x5a89,	// (0x000534f7) grid_clock2_toolbar_pane_ParamLimits

0x5a89,	// (0x000534f7) grid_clock2_toolbar_pane

0x5a89,	// (0x000534f7) listscroll_clock2_pane_ParamLimits

0x5a89,	// (0x000534f7) listscroll_clock2_pane

0x5b80,	// (0x000535ee) main_clock2_pane_t3_ParamLimits

0x5b80,	// (0x000535ee) main_clock2_pane_t3

0x5ba4,	// (0x00053612) main_clock2_pane_t4_ParamLimits

0x5ba4,	// (0x00053612) main_clock2_pane_t4

0xdc26,	// (0x0005b694) cell_clock2_toolbar_pane

0xdc2e,	// (0x0005b69c) cell_clock2_toolbar_pane_cp01

0xdc2e,	// (0x0005b69c) cell_clock2_toolbar_pane_cp02

0xdc36,	// (0x0005b6a4) cell_clock2_toolbar_pane_cp03

0xdc3e,	// (0x0005b6ac) list_clock2_pane

0xb28f,	// (0x00058cfd) scroll_pane_cp10

0xdc46,	// (0x0005b6b4) list_single_clock2_pane_ParamLimits

0xdc46,	// (0x0005b6b4) list_single_clock2_pane

0xb3c9,	// (0x00058e37) list_highlight_pane_cp08

0xdc53,	// (0x0005b6c1) list_single_clock2_pane_t1

0xdc61,	// (0x0005b6cf) list_single_clock2_pane_t2

0x0001,

0xfb5f,	// (0x0005d5cd) list_single_clock2_pane_t

0x98a4,	// (0x00057312) bg_button_pane_cp10

0xdc6f,	// (0x0005b6dd) cell_clock2_toolbar_pane_g1

0x3993,	// (0x00051401) aid_main_viewer_pane_g1_ParamLimits

0x3993,	// (0x00051401) aid_main_viewer_pane_g1

0x39a1,	// (0x0005140f) aid_main_viewer_pane_g2_ParamLimits

0x39a1,	// (0x0005140f) aid_main_viewer_pane_g2

0x39af,	// (0x0005141d) aid_main_viewer_pane_g3_ParamLimits

0x39af,	// (0x0005141d) aid_main_viewer_pane_g3

0x39be,	// (0x0005142c) aid_main_viewer_pane_g4_ParamLimits

0x39be,	// (0x0005142c) aid_main_viewer_pane_g4

0x0003,

0xf4ab,	// (0x0005cf19) aid_main_viewer_pane_g_ParamLimits

0xf4ab,	// (0x0005cf19) aid_main_viewer_pane_g

0x4311,	// (0x00051d7f) main_calc_pane_ParamLimits

0x4325,	// (0x00051d93) main_dialer2_pane_ParamLimits

0x98a4,	// (0x00057312) main_cam6_pane

0x98a4,	// (0x00057312) main_vid6_pane

0x5a95,	// (0x00053503) listscroll_gen_pane_cp06_ParamLimits

0x5a95,	// (0x00053503) listscroll_gen_pane_cp06

0x5bc7,	// (0x00053635) main_clock2_pane_t5_ParamLimits

0x5bc7,	// (0x00053635) main_clock2_pane_t5

0x5c27,	// (0x00053695) aid_call2_pane_cp10_ParamLimits

0x5c39,	// (0x000536a7) aid_call_pane_cp10_ParamLimits

0xb2fe,	// (0x00058d6c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2fe,	// (0x00058d6c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c4b,	// (0x000536b9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c4b,	// (0x000536b9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2fe,	// (0x00058d6c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e1,	// (0x0005d24f) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c61,	// (0x000536cf) popup_clock_analogue_window_cp10_t1_ParamLimits

0x62f4,	// (0x00053d62) cell_dialer2_keypad_pane_g2_ParamLimits

0x62f4,	// (0x00053d62) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c7,	// (0x0005d335) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c7,	// (0x0005d335) cell_dialer2_keypad_pane_g

0x6310,	// (0x00053d7e) cell_dialer2_keypad_pane_t1

0x6ef8,	// (0x00054966) main_cset_text2_pane_ParamLimits

0x6ef8,	// (0x00054966) main_cset_text2_pane

0xda7a,	// (0x0005b4e8) area_vitu2_query_pane_g1_ParamLimits

0x025e,	// (0x0004dccc) area_vitu2_query_pane_g2_ParamLimits

0xfa7c,	// (0x0005d4ea) area_vitu2_query_pane_g_ParamLimits

0x7724,	// (0x00055192) area_vitu2_query_pane_t7_ParamLimits

0x7724,	// (0x00055192) area_vitu2_query_pane_t7

0x7748,	// (0x000551b6) bg_button_pane_cp018_ParamLimits

0x7756,	// (0x000551c4) bg_button_pane_cp021_ParamLimits

0x0297,	// (0x0004dd05) bg_button_pane_cp022_ParamLimits

0x0297,	// (0x0004dd05) bg_vkb2_func_pane_cp08_ParamLimits

0x7748,	// (0x000551b6) bg_vkb2_func_pane_cp06_ParamLimits

0x7756,	// (0x000551c4) bg_vkb2_func_pane_cp07_ParamLimits

0x02a8,	// (0x0004dd16) input_focus_pane_cp09_ParamLimits

0xa7e6,	// (0x00058254) cam6_autofocus_pane_ParamLimits

0xa7e6,	// (0x00058254) cam6_autofocus_pane

0x7c90,	// (0x000556fe) cam6_image_uncrop_pane_ParamLimits

0x7c90,	// (0x000556fe) cam6_image_uncrop_pane

0x7c9f,	// (0x0005570d) cam6_indi_pane_ParamLimits

0x7c9f,	// (0x0005570d) cam6_indi_pane

0x7cb5,	// (0x00055723) cam6_mode_pane_ParamLimits

0x7cb5,	// (0x00055723) cam6_mode_pane

0x7cc7,	// (0x00055735) cam6_timer_pane_ParamLimits

0x7cc7,	// (0x00055735) cam6_timer_pane

0x7cd3,	// (0x00055741) cam6_zoom_pane_ParamLimits

0x7cd3,	// (0x00055741) cam6_zoom_pane

0x7ce1,	// (0x0005574f) cam6_mode_pane_g1_ParamLimits

0x7ce1,	// (0x0005574f) cam6_mode_pane_g1

0x7cf1,	// (0x0005575f) cam6_mode_pane_g2_ParamLimits

0x7cf1,	// (0x0005575f) cam6_mode_pane_g2

0x7d01,	// (0x0005576f) cam6_mode_pane_g3_ParamLimits

0x7d01,	// (0x0005576f) cam6_mode_pane_g3

0x7d11,	// (0x0005577f) cam6_mode_pane_g4_ParamLimits

0x7d11,	// (0x0005577f) cam6_mode_pane_g4

0x0003,

0xfb64,	// (0x0005d5d2) cam6_mode_pane_g_ParamLimits

0xfb64,	// (0x0005d5d2) cam6_mode_pane_g

0xdc77,	// (0x0005b6e5) bg_tb_trans_pane_cp08_ParamLimits

0xdc77,	// (0x0005b6e5) bg_tb_trans_pane_cp08

0xdc85,	// (0x0005b6f3) cam6_battery_pane_ParamLimits

0xdc85,	// (0x0005b6f3) cam6_battery_pane

0xdc9b,	// (0x0005b709) cam6_indi_pane_g1_ParamLimits

0xdc9b,	// (0x0005b709) cam6_indi_pane_g1

0xdcad,	// (0x0005b71b) cam6_indi_pane_g2_ParamLimits

0xdcad,	// (0x0005b71b) cam6_indi_pane_g2

0xdcbf,	// (0x0005b72d) cam6_indi_pane_g3_ParamLimits

0xdcbf,	// (0x0005b72d) cam6_indi_pane_g3

0x0002,

0xfb6d,	// (0x0005d5db) cam6_indi_pane_g_ParamLimits

0xfb6d,	// (0x0005d5db) cam6_indi_pane_g

0xdcd1,	// (0x0005b73f) cam6_indi_pane_t1_ParamLimits

0xdcd1,	// (0x0005b73f) cam6_indi_pane_t1

0x68d1,	// (0x0005433f) cam6_autofocus_pane_g1

0x68d9,	// (0x00054347) cam6_autofocus_pane_g2

0x68e1,	// (0x0005434f) cam6_autofocus_pane_g3

0x68e9,	// (0x00054357) cam6_autofocus_pane_g4

0x0003,

0xfb74,	// (0x0005d5e2) cam6_autofocus_pane_g

0xdcf7,	// (0x0005b765) cam6_timer_pane_g1

0xdcff,	// (0x0005b76d) cam6_timer_pane_t1

0xdd0d,	// (0x0005b77b) cam6_zoom_cont_pane

0xdd15,	// (0x0005b783) cam6_zoom_pane_g1

0xdd1d,	// (0x0005b78b) cam6_zoom_pane_g2

0x7d21,	// (0x0005578f) cam6_zoom_pane_g3

0x0002,

0xfb7d,	// (0x0005d5eb) cam6_zoom_pane_g

0xcc33,	// (0x0005a6a1) cam6_battery_pane_g1

0xcc33,	// (0x0005a6a1) cam6_battery_pane_g2

0x0001,

0xf6ee,	// (0x0005d15c) cam6_battery_pane_g

0xdd25,	// (0x0005b793) cam6_zoom_cont_pane_g1

0xdd2e,	// (0x0005b79c) cam6_zoom_cont_pane_g2

0xdd6f,	// (0x0005b7dd) cam6_zoom_cont_pane_g3

0x0002,

0xfb84,	// (0x0005d5f2) cam6_zoom_cont_pane_g

0x7d3e,	// (0x000557ac) cam6_mode_pane_cp_ParamLimits

0x7d3e,	// (0x000557ac) cam6_mode_pane_cp

0x7cd3,	// (0x00055741) cam6_zoom_pane_cp_ParamLimits

0x7cd3,	// (0x00055741) cam6_zoom_pane_cp

0x7d50,	// (0x000557be) vid6_image_uncrop_cif_pane_ParamLimits

0x7d50,	// (0x000557be) vid6_image_uncrop_cif_pane

0x7d60,	// (0x000557ce) vid6_image_uncrop_nhd_pane_ParamLimits

0x7d60,	// (0x000557ce) vid6_image_uncrop_nhd_pane

0x7c90,	// (0x000556fe) vid6_image_uncrop_vga_pane_ParamLimits

0x7c90,	// (0x000556fe) vid6_image_uncrop_vga_pane

0x7d6f,	// (0x000557dd) vid6_image_uncrop_wvga_pane_ParamLimits

0x7d6f,	// (0x000557dd) vid6_image_uncrop_wvga_pane

0x7d7e,	// (0x000557ec) vid6_indi_pane_ParamLimits

0x7d7e,	// (0x000557ec) vid6_indi_pane

0xdc77,	// (0x0005b6e5) bg_tb_trans_pane_cp09_ParamLimits

0xdc77,	// (0x0005b6e5) bg_tb_trans_pane_cp09

0xdd87,	// (0x0005b7f5) cam6_battery_pane_cp_ParamLimits

0xdd87,	// (0x0005b7f5) cam6_battery_pane_cp

0xdd93,	// (0x0005b801) vid6_indi_pane_g1_ParamLimits

0xdd93,	// (0x0005b801) vid6_indi_pane_g1

0xdda5,	// (0x0005b813) vid6_indi_pane_g2_ParamLimits

0xdda5,	// (0x0005b813) vid6_indi_pane_g2

0xddb7,	// (0x0005b825) vid6_indi_pane_g3_ParamLimits

0xddb7,	// (0x0005b825) vid6_indi_pane_g3

0xddce,	// (0x0005b83c) vid6_indi_pane_g4_ParamLimits

0xddce,	// (0x0005b83c) vid6_indi_pane_g4

0xdde5,	// (0x0005b853) vid6_indi_pane_g5_ParamLimits

0xdde5,	// (0x0005b853) vid6_indi_pane_g5

0x0004,

0xfb8b,	// (0x0005d5f9) vid6_indi_pane_g_ParamLimits

0xfb8b,	// (0x0005d5f9) vid6_indi_pane_g

0xddff,	// (0x0005b86d) vid6_indi_pane_t1_ParamLimits

0xddff,	// (0x0005b86d) vid6_indi_pane_t1

0xde15,	// (0x0005b883) vid6_indi_pane_t2_ParamLimits

0xde15,	// (0x0005b883) vid6_indi_pane_t2

0xde3d,	// (0x0005b8ab) vid6_indi_pane_t3_ParamLimits

0xde3d,	// (0x0005b8ab) vid6_indi_pane_t3

0xde65,	// (0x0005b8d3) vid6_indi_pane_t4_ParamLimits

0xde65,	// (0x0005b8d3) vid6_indi_pane_t4

0x0003,

0xfb96,	// (0x0005d604) vid6_indi_pane_t_ParamLimits

0xfb96,	// (0x0005d604) vid6_indi_pane_t

0xde89,	// (0x0005b8f7) wait_bar_pane_cp08

0x7d96,	// (0x00055804) main_cset_text2_pane_t1_ParamLimits

0x7d96,	// (0x00055804) main_cset_text2_pane_t1

0x7d29,	// (0x00055797) listscroll_gen_pane_cp06_t1_ParamLimits

0x7d29,	// (0x00055797) listscroll_gen_pane_cp06_t1

0x98a4,	// (0x00057312) main_cam6_set_pane

0xce63,	// (0x0005a8d1) bg_tb_trans_pane_cp06_ParamLimits

0xa647,	// (0x000580b5) cam4_indicators_pane_g1_ParamLimits

0xa658,	// (0x000580c6) cam4_indicators_pane_g2_ParamLimits

0xf904,	// (0x0005d372) cam4_indicators_pane_g_ParamLimits

0xa670,	// (0x000580de) cam4_indicators_pane_t1_ParamLimits

0x98fd,	// (0x0005736b) bg_tb_trans_pane_cp07_ParamLimits

0xa69e,	// (0x0005810c) vid4_indicators_pane_g1_ParamLimits

0xa6b4,	// (0x00058122) vid4_indicators_pane_g2_ParamLimits

0xa6c8,	// (0x00058136) vid4_indicators_pane_g3_ParamLimits

0xa6db,	// (0x00058149) vid4_indicators_pane_g4_ParamLimits

0xf916,	// (0x0005d384) vid4_indicators_pane_g_ParamLimits

0xa6f9,	// (0x00058167) vid4_indicators_pane_t1_ParamLimits

0x7892,	// (0x00055300) vid4_progress_pane_g1_ParamLimits

0x78a4,	// (0x00055312) vid4_progress_pane_g2_ParamLimits

0xa2ca,	// (0x00057d38) vid4_progress_pane_g3_ParamLimits

0xa774,	// (0x000581e2) vid4_progress_pane_g4_ParamLimits

0xfac7,	// (0x0005d535) vid4_progress_pane_g_ParamLimits

0xa792,	// (0x00058200) vid4_progress_pane_t1_ParamLimits

0xa7a7,	// (0x00058215) vid4_progress_pane_t2_ParamLimits

0xa7bd,	// (0x0005822b) vid4_progress_pane_t3_ParamLimits

0xfad2,	// (0x0005d540) vid4_progress_pane_t_ParamLimits

0xa7d2,	// (0x00058240) wait_bar_pane_cp07_ParamLimits

0x7db4,	// (0x00055822) main_cam6_set_pane_g2_ParamLimits

0x7db4,	// (0x00055822) main_cam6_set_pane_g2

0x7dda,	// (0x00055848) main_cset6_listscroll_pane_ParamLimits

0x7dda,	// (0x00055848) main_cset6_listscroll_pane

0x7df8,	// (0x00055866) main_cset6_slider_pane_ParamLimits

0x7df8,	// (0x00055866) main_cset6_slider_pane

0x7e0e,	// (0x0005587c) main_cset6_text2_pane_ParamLimits

0x7e0e,	// (0x0005587c) main_cset6_text2_pane

0xde98,	// (0x0005b906) main_cset6_text_pane

0xdea0,	// (0x0005b90e) main_cset_list_pane_copy1_ParamLimits

0xdea0,	// (0x0005b90e) main_cset_list_pane_copy1

0xdeb0,	// (0x0005b91e) scroll_pane_cp028_copy1

0x7e1c,	// (0x0005588a) cset_list_set_pane_copy1

0x7e30,	// (0x0005589e) aid_position_infowindow_above_copy1

0x7e38,	// (0x000558a6) aid_position_infowindow_below_copy1

0x02d6,	// (0x0004dd44) cset_list_set_pane_g1_copy1

0x02de,	// (0x0004dd4c) cset_list_set_pane_g3_copy1_ParamLimits

0x02de,	// (0x0004dd4c) cset_list_set_pane_g3_copy1

0x02ed,	// (0x0004dd5b) cset_list_set_pane_t1_copy1_ParamLimits

0x02ed,	// (0x0004dd5b) cset_list_set_pane_t1_copy1

0x98fd,	// (0x0005736b) list_highlight_pane_cp021_copy1_ParamLimits

0x98fd,	// (0x0005736b) list_highlight_pane_cp021_copy1

0xdeb9,	// (0x0005b927) cset6_slider_pane_ParamLimits

0xdeb9,	// (0x0005b927) cset6_slider_pane

0xdee5,	// (0x0005b953) main_cset6_slider_pane_g1_ParamLimits

0xdee5,	// (0x0005b953) main_cset6_slider_pane_g1

0x7e40,	// (0x000558ae) main_cset6_slider_pane_g2_ParamLimits

0x7e40,	// (0x000558ae) main_cset6_slider_pane_g2

0xdf0d,	// (0x0005b97b) main_cset6_slider_pane_g3_ParamLimits

0xdf0d,	// (0x0005b97b) main_cset6_slider_pane_g3

0x7e68,	// (0x000558d6) main_cset6_slider_pane_g4_ParamLimits

0x7e68,	// (0x000558d6) main_cset6_slider_pane_g4

0x7e74,	// (0x000558e2) main_cset6_slider_pane_g5_ParamLimits

0x7e74,	// (0x000558e2) main_cset6_slider_pane_g5

0xd74e,	// (0x0005b1bc) main_cset6_slider_pane_g7_ParamLimits

0xd74e,	// (0x0005b1bc) main_cset6_slider_pane_g7

0xd75a,	// (0x0005b1c8) main_cset6_slider_pane_g8_ParamLimits

0xd75a,	// (0x0005b1c8) main_cset6_slider_pane_g8

0x6fa7,	// (0x00054a15) main_cset6_slider_pane_g9_ParamLimits

0x6fa7,	// (0x00054a15) main_cset6_slider_pane_g9

0x6fb3,	// (0x00054a21) main_cset6_slider_pane_g10_ParamLimits

0x6fb3,	// (0x00054a21) main_cset6_slider_pane_g10

0x6fbf,	// (0x00054a2d) main_cset6_slider_pane_g11_ParamLimits

0x6fbf,	// (0x00054a2d) main_cset6_slider_pane_g11

0x6fcb,	// (0x00054a39) main_cset6_slider_pane_g12_ParamLimits

0x6fcb,	// (0x00054a39) main_cset6_slider_pane_g12

0x6fd7,	// (0x00054a45) main_cset6_slider_pane_g13_ParamLimits

0x6fd7,	// (0x00054a45) main_cset6_slider_pane_g13

0x6fe3,	// (0x00054a51) main_cset6_slider_pane_g14_ParamLimits

0x6fe3,	// (0x00054a51) main_cset6_slider_pane_g14

0x7e82,	// (0x000558f0) main_cset6_slider_pane_g15_ParamLimits

0x7e82,	// (0x000558f0) main_cset6_slider_pane_g15

0x7007,	// (0x00054a75) main_cset6_slider_pane_g16_ParamLimits

0x7007,	// (0x00054a75) main_cset6_slider_pane_g16

0x7015,	// (0x00054a83) main_cset6_slider_pane_g17_ParamLimits

0x7015,	// (0x00054a83) main_cset6_slider_pane_g17

0x0011,

0xfb9f,	// (0x0005d60d) main_cset6_slider_pane_g_ParamLimits

0xfb9f,	// (0x0005d60d) main_cset6_slider_pane_g

0xdf19,	// (0x0005b987) main_cset6_slider_pane_t1_ParamLimits

0xdf19,	// (0x0005b987) main_cset6_slider_pane_t1

0x7eb2,	// (0x00055920) main_cset6_slider_pane_t2_ParamLimits

0x7eb2,	// (0x00055920) main_cset6_slider_pane_t2

0x7edd,	// (0x0005594b) main_cset6_slider_pane_t3_ParamLimits

0x7edd,	// (0x0005594b) main_cset6_slider_pane_t3

0x7f08,	// (0x00055976) main_cset6_slider_pane_t4_ParamLimits

0x7f08,	// (0x00055976) main_cset6_slider_pane_t4

0x7f33,	// (0x000559a1) main_cset6_slider_pane_t5_ParamLimits

0x7f33,	// (0x000559a1) main_cset6_slider_pane_t5

0xdf5a,	// (0x0005b9c8) main_cset6_slider_pane_t7_ParamLimits

0xdf5a,	// (0x0005b9c8) main_cset6_slider_pane_t7

0x7f60,	// (0x000559ce) main_cset6_slider_pane_t8_ParamLimits

0x7f60,	// (0x000559ce) main_cset6_slider_pane_t8

0x7f84,	// (0x000559f2) main_cset6_slider_pane_t9_ParamLimits

0x7f84,	// (0x000559f2) main_cset6_slider_pane_t9

0x7fa8,	// (0x00055a16) main_cset6_slider_pane_t10_ParamLimits

0x7fa8,	// (0x00055a16) main_cset6_slider_pane_t10

0x7fcc,	// (0x00055a3a) main_cset6_slider_pane_t11_ParamLimits

0x7fcc,	// (0x00055a3a) main_cset6_slider_pane_t11

0xdf90,	// (0x0005b9fe) main_cset6_slider_pane_t14_ParamLimits

0xdf90,	// (0x0005b9fe) main_cset6_slider_pane_t14

0xdfc9,	// (0x0005ba37) main_cset6_slider_pane_t15_ParamLimits

0xdfc9,	// (0x0005ba37) main_cset6_slider_pane_t15

0x000b,

0xfbc4,	// (0x0005d632) main_cset6_slider_pane_t_ParamLimits

0xfbc4,	// (0x0005d632) main_cset6_slider_pane_t

0xdd4b,	// (0x0005b7b9) cset_slider_pane_g1_copy1

0xdd54,	// (0x0005b7c2) cset_slider_pane_g2_copy1

0xdd5d,	// (0x0005b7cb) cset_slider_pane_g3_copy1

0x98a4,	// (0x00057312) bg_popup_sub_pane_cp011_copy1

0xe002,	// (0x0005ba70) main_cset_text_pane_g1_copy1

0xd896,	// (0x0005b304) main_cset_text_pane_t1_copy1

0xd8a4,	// (0x0005b312) main_cset_text_pane_t2_copy1

0xd8b2,	// (0x0005b320) main_cset_text_pane_t3_copy1

0xd8c0,	// (0x0005b32e) main_cset_text_pane_t4_copy1

0xd8ce,	// (0x0005b33c) main_cset_text_pane_t5_copy1

0xe00a,	// (0x0005ba78) main_cset_text_pane_t6_copy1

0xe018,	// (0x0005ba86) main_cset_text_pane_t7_copy1

0x7d96,	// (0x00055804) main_cset_text2_pane_t1_copy1

0x98fd,	// (0x0005736b) main_ncimui_pane

0x45b3,	// (0x00052021) popup_query_ncimui_window_ParamLimits

0x45b3,	// (0x00052021) popup_query_ncimui_window

0x529b,	// (0x00052d09) field_cale_ev2_pane_g4_ParamLimits

0x529b,	// (0x00052d09) field_cale_ev2_pane_g4

0x61c6,	// (0x00053c34) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61c6,	// (0x00053c34) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a2,	// (0x0005d310) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a2,	// (0x0005d310) cell_video_dialer_keypad_pane_g

0x61de,	// (0x00053c4c) cell_video_dialer_keypad_pane_t1

0x98a4,	// (0x00057312) bg_popup_window_pane_cp012

0xb17b,	// (0x00058be9) heading_pane_cp06

0xe044,	// (0x0005bab2) ncim_query_content_pane

0x98a4,	// (0x00057312) bg_popup_heading_pane_cp01

0xe04c,	// (0x0005baba) ncim_heading_pane_t1

0xe05a,	// (0x0005bac8) ncim_indicator_popup_pane

0xe06c,	// (0x0005bada) ncim_query_button_pane

0xe082,	// (0x0005baf0) ncim_query_content_pane_t1

0xe094,	// (0x0005bb02) ncim_query_content_pane_t2

0x0005,

0xfc08,	// (0x0005d676) ncim_query_content_pane_t

0xe0ce,	// (0x0005bb3c) ncim_query_list_pane

0xe0e0,	// (0x0005bb4e) ncim_query_popup_pane

0xe05a,	// (0x0005bac8) ncim_indicator_popup_pane_ParamLimits

0x8142,	// (0x00055bb0) ncim_query_content_pane_g1_ParamLimits

0x8142,	// (0x00055bb0) ncim_query_content_pane_g1

0xe082,	// (0x0005baf0) ncim_query_content_pane_t1_ParamLimits

0xe094,	// (0x0005bb02) ncim_query_content_pane_t2_ParamLimits

0x814e,	// (0x00055bbc) ncim_query_content_pane_t3_ParamLimits

0x814e,	// (0x00055bbc) ncim_query_content_pane_t3

0x8176,	// (0x00055be4) ncim_query_content_pane_t4_ParamLimits

0x8176,	// (0x00055be4) ncim_query_content_pane_t4

0x819e,	// (0x00055c0c) ncim_query_content_pane_t5_ParamLimits

0x819e,	// (0x00055c0c) ncim_query_content_pane_t5

0xe0a6,	// (0x0005bb14) ncim_query_content_pane_t6_ParamLimits

0xe0a6,	// (0x0005bb14) ncim_query_content_pane_t6

0xfc08,	// (0x0005d676) ncim_query_content_pane_t_ParamLimits

0xe0ce,	// (0x0005bb3c) ncim_query_list_pane_ParamLimits

0xe0e0,	// (0x0005bb4e) ncim_query_popup_pane_ParamLimits

0xe0f4,	// (0x0005bb62) wait_bar_pane_cp04

0x98a4,	// (0x00057312) input_focus_pane_cp011

0xe0fc,	// (0x0005bb6a) ncim_query_popup_pane_t1

0xe10a,	// (0x0005bb78) ncim_list_query_list_pane_ParamLimits

0xe10a,	// (0x0005bb78) ncim_list_query_list_pane

0x98a4,	// (0x00057312) bg_button_pane_cp027

0xe11d,	// (0x0005bb8b) ncim_query_button_pane_g1

0x98a4,	// (0x00057312) list_highlight_pane_cp012

0xe127,	// (0x0005bb95) ncim_list_query_list_pane_g1

0xe12f,	// (0x0005bb9d) ncim_list_query_list_pane_t1

0xa664,	// (0x000580d2) cam4_indicators_pane_g3_ParamLimits

0xa664,	// (0x000580d2) cam4_indicators_pane_g3

0xa6e7,	// (0x00058155) vid4_indicators_pane_g5_ParamLimits

0xa6e7,	// (0x00058155) vid4_indicators_pane_g5

0xa783,	// (0x000581f1) vid4_progress_pane_g5_ParamLimits

0xa783,	// (0x000581f1) vid4_progress_pane_g5

0x8030,	// (0x00055a9e) main_ncimui_pane_g1

0x8096,	// (0x00055b04) ncimui_group_query_pane_ParamLimits

0x8096,	// (0x00055b04) ncimui_group_query_pane

0x80de,	// (0x00055b4c) ncimui_list_pane_ParamLimits

0x80de,	// (0x00055b4c) ncimui_list_pane

0x8105,	// (0x00055b73) ncimui_text_pane_ParamLimits

0x8105,	// (0x00055b73) ncimui_text_pane

0x81c6,	// (0x00055c34) ncimui_text_pane_t1_ParamLimits

0x81c6,	// (0x00055c34) ncimui_text_pane_t1

0xe13d,	// (0x0005bbab) ncimui_list_single_graphic_pane_ParamLimits

0xe13d,	// (0x0005bbab) ncimui_list_single_graphic_pane

0x81e4,	// (0x00055c52) ncimui_query_pane_ParamLimits

0x81e4,	// (0x00055c52) ncimui_query_pane

0x98a4,	// (0x00057312) list_highlight_pane_cp013

0xe14d,	// (0x0005bbbb) ncim_list_query_list_pane_t1_copy1

0xe127,	// (0x0005bb95) ncim_list_single_graphic_pane_g1

0xe15b,	// (0x0005bbc9) ncim_query_button_pane_cp01

0xe167,	// (0x0005bbd5) ncim_query_entry_pane_ParamLimits

0xe167,	// (0x0005bbd5) ncim_query_entry_pane

0xe17a,	// (0x0005bbe8) ncimui_query_pane_g1

0xe186,	// (0x0005bbf4) ncimui_query_pane_t1_ParamLimits

0xe186,	// (0x0005bbf4) ncimui_query_pane_t1

0x98fd,	// (0x0005736b) input_focus_pane_cp012

0xe19f,	// (0x0005bc0d) ncim_query_entry_pane_t1

0xa060,	// (0x00057ace) main_im_pane_ParamLimits

0x98fd,	// (0x0005736b) main_mobtv_pane_ParamLimits

0x98fd,	// (0x0005736b) main_mobtv_pane

0x7e9a,	// (0x00055908) main_cset6_slider_pane_g18_ParamLimits

0x7e9a,	// (0x00055908) main_cset6_slider_pane_g18

0x7ea6,	// (0x00055914) main_cset6_slider_pane_g19_ParamLimits

0x7ea6,	// (0x00055914) main_cset6_slider_pane_g19

0xa7f4,	// (0x00058262) bg_main_mobtv_pane_ParamLimits

0xa7f4,	// (0x00058262) bg_main_mobtv_pane

0x81f7,	// (0x00055c65) main_mobtv_info_pane

0x8202,	// (0x00055c70) main_mobtv_loading_pane_ParamLimits

0x8202,	// (0x00055c70) main_mobtv_loading_pane

0xe1b1,	// (0x0005bc1f) main_mobtv_pg_channel_list_pane

0xe1bb,	// (0x0005bc29) main_mobtv_pg_hdr_pane

0x820f,	// (0x00055c7d) main_mobtv_programe_curr_pane_ParamLimits

0x820f,	// (0x00055c7d) main_mobtv_programe_curr_pane

0x821c,	// (0x00055c8a) main_mobtv_programe_next_pane_ParamLimits

0x821c,	// (0x00055c8a) main_mobtv_programe_next_pane

0xe1c4,	// (0x0005bc32) popup_mobtv_noti_window

0xcc33,	// (0x0005a6a1) main_tv_pg_hdr_pane_g1

0xe1ce,	// (0x0005bc3c) main_tv_pg_hdr_pane_g2

0xe1d6,	// (0x0005bc44) main_tv_pg_hdr_pane_g3

0xe1de,	// (0x0005bc4c) main_tv_pg_hdr_pane_g4

0xe1e6,	// (0x0005bc54) main_tv_pg_hdr_pane_g5

0xe1f0,	// (0x0005bc5e) main_tv_pg_hdr_pane_g6

0xe1fa,	// (0x0005bc68) main_tv_pg_hdr_pane_g7

0xe204,	// (0x0005bc72) main_tv_pg_hdr_pane_g8

0xe20e,	// (0x0005bc7c) main_tv_pg_hdr_pane_g9

0xe218,	// (0x0005bc86) main_tv_pg_hdr_pane_g10

0xe222,	// (0x0005bc90) main_tv_pg_hdr_pane_g11

0x000a,

0xfc15,	// (0x0005d683) main_tv_pg_hdr_pane_g

0xe22c,	// (0x0005bc9a) main_tv_pg_hdr_pane_t1

0xe23a,	// (0x0005bca8) main_tv_pg_hdr_pane_t2

0xe248,	// (0x0005bcb6) main_tv_pg_hdr_pane_t3

0xe258,	// (0x0005bcc6) main_tv_pg_hdr_pane_t4

0xe268,	// (0x0005bcd6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2c,	// (0x0005d69a) main_tv_pg_hdr_pane_t

0xe278,	// (0x0005bce6) single_mobtv_pg_channel_pane_ParamLimits

0xe278,	// (0x0005bce6) single_mobtv_pg_channel_pane

0xe28a,	// (0x0005bcf8) single_mobtv_pg_channel_table_pane

0xe293,	// (0x0005bd01) single_mobtv_pg_channel_thumb_pane

0xe29c,	// (0x0005bd0a) single_tv_pg_channel_pane_g1

0xe2a5,	// (0x0005bd13) single_tv_pg_channel_pane_g2

0x0001,

0xfc37,	// (0x0005d6a5) single_tv_pg_channel_pane_g

0xce63,	// (0x0005a8d1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce63,	// (0x0005a8d1) bg_single_mobtv_pg_channel_thumb_pane

0xe2ae,	// (0x0005bd1c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2ae,	// (0x0005bd1c) single_mobtv_pg_channel_thumb_pane_g1

0xe2bc,	// (0x0005bd2a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2bc,	// (0x0005bd2a) single_mobtv_pg_channel_thumb_pane_g2

0xe2c8,	// (0x0005bd36) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2c8,	// (0x0005bd36) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3c,	// (0x0005d6aa) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3c,	// (0x0005d6aa) single_mobtv_pg_channel_thumb_pane_g

0xe2d4,	// (0x0005bd42) single_mobtv_pg_channel_thumb_pane_t1

0xe2e2,	// (0x0005bd50) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc43,	// (0x0005d6b1) single_mobtv_pg_channel_thumb_pane_t

0xcc33,	// (0x0005a6a1) bg_single_mobtv_pg_channel_table_pane_g1

0xcc33,	// (0x0005a6a1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ee,	// (0x0005d15c) bg_single_mobtv_pg_channel_table_pane_g

0xe2f0,	// (0x0005bd5e) single_mobtv_pg_channel_table_pane_t1

0xe2fe,	// (0x0005bd6c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc48,	// (0x0005d6b6) single_mobtv_pg_channel_table_pane_t

0x8231,	// (0x00055c9f) main_mobtv_info_pane_g1_ParamLimits

0x8231,	// (0x00055c9f) main_mobtv_info_pane_g1

0x824f,	// (0x00055cbd) main_mobtv_info_pane_t1_ParamLimits

0x824f,	// (0x00055cbd) main_mobtv_info_pane_t1

0x82c7,	// (0x00055d35) main_mobtv_info_pane_t2_ParamLimits

0x82c7,	// (0x00055d35) main_mobtv_info_pane_t2

0x0002,

0xfc52,	// (0x0005d6c0) main_mobtv_info_pane_t_ParamLimits

0xfc52,	// (0x0005d6c0) main_mobtv_info_pane_t

0x8356,	// (0x00055dc4) wait_bar_pane_cp05

0x8368,	// (0x00055dd6) main_mobtv_loading_pane_g1_ParamLimits

0x8368,	// (0x00055dd6) main_mobtv_loading_pane_g1

0x8379,	// (0x00055de7) main_mobtv_loading_pane_g2_ParamLimits

0x8379,	// (0x00055de7) main_mobtv_loading_pane_g2

0x8385,	// (0x00055df3) main_mobtv_loading_pane_g3_ParamLimits

0x8385,	// (0x00055df3) main_mobtv_loading_pane_g3

0x0002,

0xfc59,	// (0x0005d6c7) main_mobtv_loading_pane_g_ParamLimits

0xfc59,	// (0x0005d6c7) main_mobtv_loading_pane_g

0xe30c,	// (0x0005bd7a) main_mobtv_loading_pane_t1_ParamLimits

0xe30c,	// (0x0005bd7a) main_mobtv_loading_pane_t1

0xe324,	// (0x0005bd92) main_mobtv_loading_pane_t2_ParamLimits

0xe324,	// (0x0005bd92) main_mobtv_loading_pane_t2

0x0001,

0xfc60,	// (0x0005d6ce) main_mobtv_loading_pane_t_ParamLimits

0xfc60,	// (0x0005d6ce) main_mobtv_loading_pane_t

0x8398,	// (0x00055e06) wait_bar_pane_cp06_ParamLimits

0x8398,	// (0x00055e06) wait_bar_pane_cp06

0xe348,	// (0x0005bdb6) main_mobtv_programe_curr_pane_t1

0xe356,	// (0x0005bdc4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc65,	// (0x0005d6d3) main_mobtv_programe_curr_pane_t

0xe364,	// (0x0005bdd2) main_mobtv_programe_next_pane_t1

0xe372,	// (0x0005bde0) main_mobtv_programe_next_pane_t2

0xe380,	// (0x0005bdee) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6a,	// (0x0005d6d8) main_mobtv_programe_next_pane_t

0x98a4,	// (0x00057312) bg_popup_mobtv_noti_window_pane

0xe38e,	// (0x0005bdfc) popup_mobtv_noti_window_g1

0xe396,	// (0x0005be04) popup_mobtv_noti_window_t1

0xe3a4,	// (0x0005be12) popup_mobtv_noti_window_t2

0x0001,

0xfc71,	// (0x0005d6df) popup_mobtv_noti_window_t

0xcc33,	// (0x0005a6a1) bg_popup_mobtv_noti_window_pane_g1

0x98a4,	// (0x00057312) sc_clock_pane

0x98a4,	// (0x00057312) main_fs_bigclock_pane

0x7b05,	// (0x00055573) blid2_tripm_pane_t4_ParamLimits

0x7b05,	// (0x00055573) blid2_tripm_pane_t4

0x83a7,	// (0x00055e15) sc_clock_pane_g1_ParamLimits

0x83a7,	// (0x00055e15) sc_clock_pane_g1

0x83b9,	// (0x00055e27) sc_clock_pane_t1_ParamLimits

0x83b9,	// (0x00055e27) sc_clock_pane_t1

0x83dd,	// (0x00055e4b) sc_clock_pane_t2_ParamLimits

0x83dd,	// (0x00055e4b) sc_clock_pane_t2

0x83f5,	// (0x00055e63) sc_clock_pane_t3_ParamLimits

0x83f5,	// (0x00055e63) sc_clock_pane_t3

0x0004,

0xfc76,	// (0x0005d6e4) sc_clock_pane_t_ParamLimits

0xfc76,	// (0x0005d6e4) sc_clock_pane_t

0x8ecf,	// (0x0005693d) main_fs_bigclock_indicator_pane_ParamLimits

0x8ecf,	// (0x0005693d) main_fs_bigclock_indicator_pane

0xce33,	// (0x0005a8a1) main_fs_bigclock_pane_g1_ParamLimits

0xce33,	// (0x0005a8a1) main_fs_bigclock_pane_g1

0x8edb,	// (0x00056949) main_fs_bigclock_pane_t1_ParamLimits

0x8edb,	// (0x00056949) main_fs_bigclock_pane_t1

0x8eed,	// (0x0005695b) main_fs_bigclock_pane_t2_ParamLimits

0x8eed,	// (0x0005695b) main_fs_bigclock_pane_t2

0x8f01,	// (0x0005696f) main_fs_bigclock_pane_t3_ParamLimits

0x8f01,	// (0x0005696f) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x0005d8e8) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0005d8e8) main_fs_bigclock_pane_t

0xebf7,	// (0x0005c665) main_fs_bigclock_indicator_pane_g1

0xe074,	// (0x0005bae2) ncim_query_content_pane_g2_ParamLimits

0xe074,	// (0x0005bae2) ncim_query_content_pane_g2

0x0001,

0xfc03,	// (0x0005d671) ncim_query_content_pane_g_ParamLimits

0xfc03,	// (0x0005d671) ncim_query_content_pane_g

0x840c,	// (0x00055e7a) sc_clock_pane_t4_ParamLimits

0x840c,	// (0x00055e7a) sc_clock_pane_t4

0x98fd,	// (0x0005736b) main_radioblah_pane

0xd566,	// (0x0005afd4) cell_call4_button_pane_t1_copy1_ParamLimits

0xd566,	// (0x0005afd4) cell_call4_button_pane_t1_copy1

0x8048,	// (0x00055ab6) main_ncimui_pane_t1_ParamLimits

0x8048,	// (0x00055ab6) main_ncimui_pane_t1

0x8062,	// (0x00055ad0) main_ncimui_pane_t2_ParamLimits

0x8062,	// (0x00055ad0) main_ncimui_pane_t2

0x0002,

0xfbfc,	// (0x0005d66a) main_ncimui_pane_t_ParamLimits

0xfbfc,	// (0x0005d66a) main_ncimui_pane_t

0xe4f0,	// (0x0005bf5e) main_radioblah_anim_pane_ParamLimits

0xe4f0,	// (0x0005bf5e) main_radioblah_anim_pane

0xe501,	// (0x0005bf6f) main_radioblah_info_pane_ParamLimits

0xe501,	// (0x0005bf6f) main_radioblah_info_pane

0xe515,	// (0x0005bf83) main_radioblah_pane_t1_ParamLimits

0xe515,	// (0x0005bf83) main_radioblah_pane_t1

0xe531,	// (0x0005bf9f) main_radioblah_pane_t2_ParamLimits

0xe531,	// (0x0005bf9f) main_radioblah_pane_t2

0x0003,

0xfc97,	// (0x0005d705) main_radioblah_pane_t_ParamLimits

0xfc97,	// (0x0005d705) main_radioblah_pane_t

0x84bc,	// (0x00055f2a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x84bc,	// (0x00055f2a) main_radioblah_rocker_ctrl_pane

0xe579,	// (0x0005bfe7) main_radioblah_info_pane_t1_ParamLimits

0xe579,	// (0x0005bfe7) main_radioblah_info_pane_t1

0x8514,	// (0x00055f82) main_radioblah_info_pane_t2_ParamLimits

0x8514,	// (0x00055f82) main_radioblah_info_pane_t2

0x0003,

0xfca0,	// (0x0005d70e) main_radioblah_info_pane_t_ParamLimits

0xfca0,	// (0x0005d70e) main_radioblah_info_pane_t

0xcc33,	// (0x0005a6a1) main_radioblah_rocker_ctrl_pane_g1

0x85c4,	// (0x00056032) main_radioblah_rocker_ctrl_pane_g2

0x85cc,	// (0x0005603a) main_radioblah_rocker_ctrl_pane_g3

0x85d4,	// (0x00056042) main_radioblah_rocker_ctrl_pane_g4

0x85dc,	// (0x0005604a) main_radioblah_rocker_ctrl_pane_g5

0x85e4,	// (0x00056052) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca9,	// (0x0005d717) main_radioblah_rocker_ctrl_pane_g

0x7d96,	// (0x00055804) main_cset_text2_pane_t1_copy1_ParamLimits

0xa635,	// (0x000580a3) cam4_image_uncrop_qvga_pane

0xa68a,	// (0x000580f8) vid4_image_uncrop_qcif_pane

0xa7e6,	// (0x00058254) cam6_image_uncrop_qvga_pane_ParamLimits

0xa7e6,	// (0x00058254) cam6_image_uncrop_qvga_pane

0xdd77,	// (0x0005b7e5) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd77,	// (0x0005b7e5) vid6_image_uncrop_qcif_pane

0x98a4,	// (0x00057312) bg_popup_preview_window_pane_cp03

0xe026,	// (0x0005ba94) list_cset_text2_pane

0xe02e,	// (0x0005ba9c) main_cset6_text2_pane_g1

0xe036,	// (0x0005baa4) main_cset6_text2_pane_t1

0x85ec,	// (0x0005605a) list_cset_text2_pane_t1_ParamLimits

0x85ec,	// (0x0005605a) list_cset_text2_pane_t1

0x98fd,	// (0x0005736b) main_radioblah_pane_ParamLimits

0x8342,	// (0x00055db0) main_mobtv_info_pane_t3_ParamLimits

0x8342,	// (0x00055db0) main_mobtv_info_pane_t3

0x84aa,	// (0x00055f18) main_radioblah_pane_g1

0x84e4,	// (0x00055f52) main_radioblah_info_pane_g1

0x8569,	// (0x00055fd7) main_radioblah_info_pane_t3_ParamLimits

0x8569,	// (0x00055fd7) main_radioblah_info_pane_t3

0x2ed1,	// (0x0005093f) highlight_cell_cale_month_pane_ParamLimits

0x2ed1,	// (0x0005093f) highlight_cell_cale_month_pane

0x98a4,	// (0x00057312) main_phob_fisheye_pane

0xcf3f,	// (0x0005a9ad) scroll_pane_cp0031_ParamLimits

0xcf3f,	// (0x0005a9ad) scroll_pane_cp0031

0xde89,	// (0x0005b8f7) wait_bar_pane_cp08_ParamLimits

0x7e1c,	// (0x0005588a) cset_list_set_pane_copy1_ParamLimits

0xe5b3,	// (0x0005c021) highlight_cell_cale_month_pane_g1

0x8605,	// (0x00056073) highlight_cell_cale_month_pane_t1

0xdace,	// (0x0005b53c) list_gen_pane_cp01

0xd739,	// (0x0005b1a7) scroll_pane_01

0x8613,	// (0x00056081) list_single_double_fisheye_pane

0x03a9,	// (0x0004de17) list_double_fisheye_pane_g1_ParamLimits

0x03a9,	// (0x0004de17) list_double_fisheye_pane_g1

0x03b5,	// (0x0004de23) list_double_fisheye_pane_g2_ParamLimits

0x03b5,	// (0x0004de23) list_double_fisheye_pane_g2

0x861c,	// (0x0005608a) list_double_fisheye_pane_g3_ParamLimits

0x861c,	// (0x0005608a) list_double_fisheye_pane_g3

0x0004,

0xfcb6,	// (0x0005d724) list_double_fisheye_pane_g_ParamLimits

0xfcb6,	// (0x0005d724) list_double_fisheye_pane_g

0x03e6,	// (0x0004de54) list_double_fisheye_pane_t1_ParamLimits

0x03e6,	// (0x0004de54) list_double_fisheye_pane_t1

0x0401,	// (0x0004de6f) list_double_fisheye_pane_t2_ParamLimits

0x0401,	// (0x0004de6f) list_double_fisheye_pane_t2

0x0001,

0xfcc1,	// (0x0005d72f) list_double_fisheye_pane_t_ParamLimits

0xfcc1,	// (0x0005d72f) list_double_fisheye_pane_t

0x98a4,	// (0x00057312) main_call5_pane

0x8437,	// (0x00055ea5) sc_swipe_pane_ParamLimits

0x8437,	// (0x00055ea5) sc_swipe_pane

0x863b,	// (0x000560a9) call5_image_pane_ParamLimits

0x863b,	// (0x000560a9) call5_image_pane

0x8658,	// (0x000560c6) call5_swipe_1_pane_ParamLimits

0x8658,	// (0x000560c6) call5_swipe_1_pane

0x866b,	// (0x000560d9) call5_swipe_2_pane_ParamLimits

0x866b,	// (0x000560d9) call5_swipe_2_pane

0x8698,	// (0x00056106) popup_call5_audio_first_window_ParamLimits

0x8698,	// (0x00056106) popup_call5_audio_first_window

0xce63,	// (0x0005a8d1) call5_swipe_1_pane_g1_ParamLimits

0xce63,	// (0x0005a8d1) call5_swipe_1_pane_g1

0xe5bb,	// (0x0005c029) call5_swipe_1_pane_g2_ParamLimits

0xe5bb,	// (0x0005c029) call5_swipe_1_pane_g2

0x0001,

0xfcc6,	// (0x0005d734) call5_swipe_1_pane_g_ParamLimits

0xfcc6,	// (0x0005d734) call5_swipe_1_pane_g

0xe5c7,	// (0x0005c035) call5_swipe_1_pane_t1_ParamLimits

0xe5c7,	// (0x0005c035) call5_swipe_1_pane_t1

0xce63,	// (0x0005a8d1) call5_swipe_2_pane_g1_ParamLimits

0xce63,	// (0x0005a8d1) call5_swipe_2_pane_g1

0xe5dc,	// (0x0005c04a) call5_swipe_2_pane_g2_ParamLimits

0xe5dc,	// (0x0005c04a) call5_swipe_2_pane_g2

0x0001,

0xfccb,	// (0x0005d739) call5_swipe_2_pane_g_ParamLimits

0xfccb,	// (0x0005d739) call5_swipe_2_pane_g

0xe5e8,	// (0x0005c056) call5_swipe_2_pane_t1_ParamLimits

0xe5e8,	// (0x0005c056) call5_swipe_2_pane_t1

0xe5fd,	// (0x0005c06b) sc_swipe_pane_g1_ParamLimits

0xe5fd,	// (0x0005c06b) sc_swipe_pane_g1

0xe60a,	// (0x0005c078) sc_swipe_pane_g2_ParamLimits

0xe60a,	// (0x0005c078) sc_swipe_pane_g2

0x0001,

0xfcd0,	// (0x0005d73e) sc_swipe_pane_g_ParamLimits

0xfcd0,	// (0x0005d73e) sc_swipe_pane_g

0xe616,	// (0x0005c084) sc_swipe_pane_t1_ParamLimits

0xe616,	// (0x0005c084) sc_swipe_pane_t1

0x98a4,	// (0x00057312) main_cmail_launcher_pane

0x86ad,	// (0x0005611b) aid_size_cell_cmail_l_ParamLimits

0x86ad,	// (0x0005611b) aid_size_cell_cmail_l

0x86c7,	// (0x00056135) grid_cmail_l_pane_ParamLimits

0x86c7,	// (0x00056135) grid_cmail_l_pane

0x86e2,	// (0x00056150) cell_cmail_l_pane_ParamLimits

0x86e2,	// (0x00056150) cell_cmail_l_pane

0x870a,	// (0x00056178) cell_cmail_l_pane_g1_ParamLimits

0x870a,	// (0x00056178) cell_cmail_l_pane_g1

0x8716,	// (0x00056184) cell_cmail_l_pane_t1_ParamLimits

0x8716,	// (0x00056184) cell_cmail_l_pane_t1

0xe62b,	// (0x0005c099) cell_cmail_l_pane_t2_ParamLimits

0xe62b,	// (0x0005c099) cell_cmail_l_pane_t2

0x0001,

0xfcd5,	// (0x0005d743) cell_cmail_l_pane_t_ParamLimits

0xfcd5,	// (0x0005d743) cell_cmail_l_pane_t

0x98fd,	// (0x0005736b) grid_highlight_pane_cp018_ParamLimits

0x98fd,	// (0x0005736b) grid_highlight_pane_cp018

0x0c4d,	// (0x0004e6bb) main2_pane_ParamLimits

0x0c4d,	// (0x0004e6bb) main2_pane

0xa139,	// (0x00057ba7) popup_sp_fs_action_menu_bg_pane_g1

0xa141,	// (0x00057baf) popup_sp_fs_action_menu_bg_pane_g2

0xa149,	// (0x00057bb7) popup_sp_fs_action_menu_bg_pane_g3

0xa151,	// (0x00057bbf) popup_sp_fs_action_menu_bg_pane_g4

0xa159,	// (0x00057bc7) popup_sp_fs_action_menu_bg_pane_g5

0xa161,	// (0x00057bcf) popup_sp_fs_action_menu_bg_pane_g6

0xa169,	// (0x00057bd7) popup_sp_fs_action_menu_bg_pane_g7

0xa171,	// (0x00057bdf) popup_sp_fs_action_menu_bg_pane_g8

0xa179,	// (0x00057be7) popup_sp_fs_action_menu_bg_pane_g9

0xa181,	// (0x00057bef) popup_sp_fs_action_menu_bg_pane_g10

0xa181,	// (0x00057bef) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0005cc01) popup_sp_fs_action_menu_bg_pane_g

0x1dde,	// (0x0004f84c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_t3_g3_g1

0xfd44,	// (0x0004d7b2) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfd44,	// (0x0004d7b2) list_medium_line_x2_t3_g3_g2

0x1dea,	// (0x0004f858) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1dea,	// (0x0004f858) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0005ccb1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0005ccb1) list_medium_line_x2_t3_g3_g

0xfd50,	// (0x0004d7be) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfd50,	// (0x0004d7be) list_medium_line_x2_t3_g3_t1

0xfd65,	// (0x0004d7d3) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfd65,	// (0x0004d7d3) list_medium_line_x2_t3_g3_t2

0xfd79,	// (0x0004d7e7) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfd79,	// (0x0004d7e7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0005ccb8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0005ccb8) list_medium_line_x2_t3_g3_t

0x1dde,	// (0x0004f84c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_t3_g2_g1

0x1dea,	// (0x0004f858) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1dea,	// (0x0004f858) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0005ccbf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0005ccbf) list_medium_line_x2_t3_g2_g

0xfd8e,	// (0x0004d7fc) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfd8e,	// (0x0004d7fc) list_medium_line_x2_t3_g2_t1

0xfda4,	// (0x0004d812) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfda4,	// (0x0004d812) list_medium_line_x2_t3_g2_t2

0xfdb6,	// (0x0004d824) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfdb6,	// (0x0004d824) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0005ccc4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0005ccc4) list_medium_line_x2_t3_g2_t

0x1dde,	// (0x0004f84c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_t4_g4_g1

0xfdd4,	// (0x0004d842) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfdd4,	// (0x0004d842) list_medium_line_x2_t4_g4_g2

0xee34,	// (0x0005c8a2) list_medium_line_x2_t4_g4_g3_ParamLimits

0xee34,	// (0x0005c8a2) list_medium_line_x2_t4_g4_g3

0x1df6,	// (0x0004f864) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1df6,	// (0x0004f864) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0005cccb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0005cccb) list_medium_line_x2_t4_g4_g

0xfde0,	// (0x0004d84e) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfde0,	// (0x0004d84e) list_medium_line_x2_t4_g4_t1

0xfdfa,	// (0x0004d868) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfdfa,	// (0x0004d868) list_medium_line_x2_t4_g4_t2

0xfe10,	// (0x0004d87e) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfe10,	// (0x0004d87e) list_medium_line_x2_t4_g4_t3

0xfe25,	// (0x0004d893) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfe25,	// (0x0004d893) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0005ccd4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0005ccd4) list_medium_line_x2_t4_g4_t

0x1dde,	// (0x0004f84c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_t2_g4_g1

0xf081,	// (0x0005caef) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf081,	// (0x0005caef) list_medium_line_x2_t2_g4_g2

0xee34,	// (0x0005c8a2) list_medium_line_x2_t2_g4_g3_ParamLimits

0xee34,	// (0x0005c8a2) list_medium_line_x2_t2_g4_g3

0x1dea,	// (0x0004f858) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1dea,	// (0x0004f858) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0005cd3b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0005cd3b) list_medium_line_x2_t2_g4_g

0xfe37,	// (0x0004d8a5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfe37,	// (0x0004d8a5) list_medium_line_x2_t2_g4_t1

0xf08d,	// (0x0005cafb) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf08d,	// (0x0005cafb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0005cd44) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0005cd44) list_medium_line_x2_t2_g4_t

0x1dde,	// (0x0004f84c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_t2_g3_g1

0xee34,	// (0x0005c8a2) list_medium_line_x2_t2_g3_g2_ParamLimits

0xee34,	// (0x0005c8a2) list_medium_line_x2_t2_g3_g2

0x1dea,	// (0x0004f858) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1dea,	// (0x0004f858) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2db,	// (0x0005cd49) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2db,	// (0x0005cd49) list_medium_line_x2_t2_g3_g

0xfe4c,	// (0x0004d8ba) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfe4c,	// (0x0004d8ba) list_medium_line_x2_t2_g3_t1

0xf08d,	// (0x0005cafb) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf08d,	// (0x0005cafb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e2,	// (0x0005cd50) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e2,	// (0x0005cd50) list_medium_line_x2_t2_g3_t

0x303a,	// (0x00050aa8) main_sp_fs_list_pane_ParamLimits

0x303a,	// (0x00050aa8) main_sp_fs_list_pane

0x3046,	// (0x00050ab4) sp_fs_scroll_pane_ParamLimits

0x3046,	// (0x00050ab4) sp_fs_scroll_pane

0xfe61,	// (0x0004d8cf) list_medium_line_x2_t3_t1

0xfe71,	// (0x0004d8df) list_medium_line_x2_t3_t2

0xfe7f,	// (0x0004d8ed) list_medium_line_x2_t3_t3

0x0002,

0xf32d,	// (0x0005cd9b) list_medium_line_x2_t3_t

0xfe8d,	// (0x0004d8fb) list_medium_line_x3_t4_t1

0xfe9d,	// (0x0004d90b) list_medium_line_x3_t4_t2

0xfeab,	// (0x0004d919) list_medium_line_x3_t4_t3

0xf0a2,	// (0x0005cb10) list_medium_line_x3_t4_t4

0x0003,

0xf334,	// (0x0005cda2) list_medium_line_x3_t4_t

0xfeb9,	// (0x0004d927) list_medium_line_x4_t5_t1

0xfec9,	// (0x0004d937) list_medium_line_x4_t5_t2

0xf0b0,	// (0x0005cb1e) list_medium_line_x4_t5_t3

0xfed7,	// (0x0004d945) list_medium_line_x4_t5_t4

0xf0a2,	// (0x0005cb10) list_medium_line_x4_t5_t5

0x0004,

0xf33d,	// (0x0005cdab) list_medium_line_x4_t5_t

0x1dde,	// (0x0004f84c) list_medium_line_t4_g4_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_t4_g4_g1

0x1df6,	// (0x0004f864) list_medium_line_t4_g4_g2_ParamLimits

0x1df6,	// (0x0004f864) list_medium_line_t4_g4_g2

0xfee5,	// (0x0004d953) list_medium_line_t4_g4_g3_ParamLimits

0xfee5,	// (0x0004d953) list_medium_line_t4_g4_g3

0x1dea,	// (0x0004f858) list_medium_line_t4_g4_g4_ParamLimits

0x1dea,	// (0x0004f858) list_medium_line_t4_g4_g4

0x0003,

0xf348,	// (0x0005cdb6) list_medium_line_t4_g4_g_ParamLimits

0xf348,	// (0x0005cdb6) list_medium_line_t4_g4_g

0xfef1,	// (0x0004d95f) list_medium_line_t4_g4_t1_ParamLimits

0xfef1,	// (0x0004d95f) list_medium_line_t4_g4_t1

0xff06,	// (0x0004d974) list_medium_line_t4_g4_t2_ParamLimits

0xff06,	// (0x0004d974) list_medium_line_t4_g4_t2

0xff1c,	// (0x0004d98a) list_medium_line_t4_g4_t3_ParamLimits

0xff1c,	// (0x0004d98a) list_medium_line_t4_g4_t3

0xf08d,	// (0x0005cafb) list_medium_line_t4_g4_t4_ParamLimits

0xf08d,	// (0x0005cafb) list_medium_line_t4_g4_t4

0x0003,

0xf351,	// (0x0005cdbf) list_medium_line_t4_g4_t_ParamLimits

0xf351,	// (0x0005cdbf) list_medium_line_t4_g4_t

0x3118,	// (0x00050b86) chi_dic_find_pane_g1

0x4339,	// (0x00051da7) main_tport_pane

0x00ed,	// (0x0004db5b) list_medium_line_plain_t1

0x00fb,	// (0x0004db69) list_medium_line_t2_g2_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_t2_g2_g1

0x0107,	// (0x0004db75) list_medium_line_t2_g2_g2_ParamLimits

0x0107,	// (0x0004db75) list_medium_line_t2_g2_g2

0x0001,

0xfa0d,	// (0x0005d47b) list_medium_line_t2_g2_g_ParamLimits

0xfa0d,	// (0x0005d47b) list_medium_line_t2_g2_g

0x0113,	// (0x0004db81) list_medium_line_t2_g2_t1_ParamLimits

0x0113,	// (0x0004db81) list_medium_line_t2_g2_t1

0x012a,	// (0x0004db98) list_medium_line_t2_g2_t2_ParamLimits

0x012a,	// (0x0004db98) list_medium_line_t2_g2_t2

0x0001,

0xfa12,	// (0x0005d480) list_medium_line_t2_g2_t_ParamLimits

0xfa12,	// (0x0005d480) list_medium_line_t2_g2_t

0x78b6,	// (0x00055324) aid_sp_fs_list_icon_a_sm

0x78be,	// (0x0005532c) aid_sp_fs_list_icon_d

0x78c6,	// (0x00055334) aid_sp_fs_text_primary

0xdd66,	// (0x0005b7d4) aid_sp_fs_text_secondary

0x02b9,	// (0x0004dd27) list_medium_line

0x02b9,	// (0x0004dd27) list_medium_line_g2

0x02b9,	// (0x0004dd27) list_medium_line_g3

0x02b9,	// (0x0004dd27) list_medium_line_plain

0x02b9,	// (0x0004dd27) list_medium_line_plain_t2

0x02b9,	// (0x0004dd27) list_medium_line_plain_t3

0x02b9,	// (0x0004dd27) list_medium_line_right_icon

0x02b9,	// (0x0004dd27) list_medium_line_right_iconx2

0x02b9,	// (0x0004dd27) list_medium_line_t2

0x02b9,	// (0x0004dd27) list_medium_line_t2_g2

0x02b9,	// (0x0004dd27) list_medium_line_t2_g3

0x02b9,	// (0x0004dd27) list_medium_line_t2_right_icon

0x02b9,	// (0x0004dd27) list_medium_line_t2_right_iconx2

0x02b9,	// (0x0004dd27) list_medium_line_t3

0x02b9,	// (0x0004dd27) list_medium_line_t3_g2

0x02b9,	// (0x0004dd27) list_medium_line_t3_g3

0x02b9,	// (0x0004dd27) list_medium_line_t3_right_iconx2

0x78cf,	// (0x0005533d) list_medium_line_t4_g4

0x78d8,	// (0x00055346) list_medium_line_x2

0x78d8,	// (0x00055346) list_medium_line_x2_t2_g2

0x78d8,	// (0x00055346) list_medium_line_x2_t2_g3

0x78d8,	// (0x00055346) list_medium_line_x2_t2_g4

0x78d8,	// (0x00055346) list_medium_line_x2_t3

0x78d8,	// (0x00055346) list_medium_line_x2_t3_g2

0x78d8,	// (0x00055346) list_medium_line_x2_t3_g3

0x78d8,	// (0x00055346) list_medium_line_x2_t3_g4

0x78d8,	// (0x00055346) list_medium_line_x2_t4_g2

0x78d8,	// (0x00055346) list_medium_line_x2_t4_g4

0x78e1,	// (0x0005534f) list_medium_line_x3

0x78e1,	// (0x0005534f) list_medium_line_x3_t4

0x78e1,	// (0x0005534f) list_medium_line_x3_t4_g4

0x78cf,	// (0x0005533d) list_medium_line_x4_t4

0x78cf,	// (0x0005533d) list_medium_line_x4_t4_g7

0x78cf,	// (0x0005533d) list_medium_line_x4_t5

0x02c2,	// (0x0004dd30) list_single_fs_dyc_pane_ParamLimits

0x02c2,	// (0x0004dd30) list_single_fs_dyc_pane

0x1dde,	// (0x0004f84c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x4_t4_g7_g1

0x7ff2,	// (0x00055a60) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ff2,	// (0x00055a60) list_medium_line_x4_t4_g7_g2

0x0302,	// (0x0004dd70) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0302,	// (0x0004dd70) list_medium_line_x4_t4_g7_g3

0x0311,	// (0x0004dd7f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0311,	// (0x0004dd7f) list_medium_line_x4_t4_g7_g4

0x031d,	// (0x0004dd8b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x031d,	// (0x0004dd8b) list_medium_line_x4_t4_g7_g5

0x032c,	// (0x0004dd9a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x032c,	// (0x0004dd9a) list_medium_line_x4_t4_g7_g6

0x7ffe,	// (0x00055a6c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ffe,	// (0x00055a6c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdd,	// (0x0005d64b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdd,	// (0x0005d64b) list_medium_line_x4_t4_g7_g

0x033b,	// (0x0004dda9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x033b,	// (0x0004dda9) list_medium_line_x4_t4_g7_t1

0x0350,	// (0x0004ddbe) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0350,	// (0x0004ddbe) list_medium_line_x4_t4_g7_t2

0x0365,	// (0x0004ddd3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0365,	// (0x0004ddd3) list_medium_line_x4_t4_g7_t3

0x037a,	// (0x0004dde8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x037a,	// (0x0004dde8) list_medium_line_x4_t4_g7_t4

0x800a,	// (0x00055a78) list_medium_line_x4_t4_g7_t5_ParamLimits

0x800a,	// (0x00055a78) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbec,	// (0x0005d65a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbec,	// (0x0005d65a) list_medium_line_x4_t4_g7_t

0x038c,	// (0x0004ddfa) list_single_dyc_row_pane_ParamLimits

0x038c,	// (0x0004ddfa) list_single_dyc_row_pane

0x8628,	// (0x00056096) call5_gesture_pane_ParamLimits

0x8628,	// (0x00056096) call5_gesture_pane

0x867e,	// (0x000560ec) call5_windows_pane_ParamLimits

0x867e,	// (0x000560ec) call5_windows_pane

0x872c,	// (0x0005619a) call5_swipe_1_pane_cp_ParamLimits

0x872c,	// (0x0005619a) call5_swipe_1_pane_cp

0x8738,	// (0x000561a6) call5_swipe_2_pane_cp_ParamLimits

0x8738,	// (0x000561a6) call5_swipe_2_pane_cp

0xb3c9,	// (0x00058e37) call5_image_pane_cp

0x8744,	// (0x000561b2) popup_call5_audio_first_window_cp_ParamLimits

0x8744,	// (0x000561b2) popup_call5_audio_first_window_cp

0xe5fd,	// (0x0005c06b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5fd,	// (0x0005c06b) call5_swipe_1_pane_g1_cp

0xe63d,	// (0x0005c0ab) call5_swipe_1_pane_g2_cp

0xe616,	// (0x0005c084) call5_swipe_1_pane_t1_cp_ParamLimits

0xe616,	// (0x0005c084) call5_swipe_1_pane_t1_cp

0xe5fd,	// (0x0005c06b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5fd,	// (0x0005c06b) call5_swipe_2_pane_g1_cp

0xe645,	// (0x0005c0b3) call5_swipe_2_pane_g2_cp

0xe64d,	// (0x0005c0bb) call5_swipe_2_pane_t1_cp_ParamLimits

0xe64d,	// (0x0005c0bb) call5_swipe_2_pane_t1_cp

0x98fd,	// (0x0005736b) main_sp_fs_email_pane

0xe662,	// (0x0005c0d0) main_sp_fs_listscroll_pane_te

0x8752,	// (0x000561c0) popup_sp_fs_action_menu_pane_ParamLimits

0x8752,	// (0x000561c0) popup_sp_fs_action_menu_pane

0xcc33,	// (0x0005a6a1) bg_sp_fs_ctrlbar_pane_g1

0xe66b,	// (0x0005c0d9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe674,	// (0x0005c0e2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe67d,	// (0x0005c0eb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc33,	// (0x0005a6a1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcda,	// (0x0005d748) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca12,	// (0x0005a480) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca12,	// (0x0005a480) bg_sp_fs_ctrlbar_ddmenu_pane

0xe686,	// (0x0005c0f4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe686,	// (0x0005c0f4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe692,	// (0x0005c100) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe692,	// (0x0005c100) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce3,	// (0x0005d751) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce3,	// (0x0005d751) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe69e,	// (0x0005c10c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe69e,	// (0x0005c10c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0423,	// (0x0004de91) list_medium_line_t2_right_icon_g1

0x042b,	// (0x0004de99) list_medium_line_t2_right_icon_t1

0x043b,	// (0x0004dea9) list_medium_line_t2_right_icon_t2

0x0001,

0xfce8,	// (0x0005d756) list_medium_line_t2_right_icon_t

0xc7e2,	// (0x0005a250) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7e2,	// (0x0005a250) bg_sp_fs_ctrlbar_pane

0x87e5,	// (0x00056253) main_sp_fs_ctrlbar_button_pane_cp01

0x87ef,	// (0x0005625d) main_sp_fs_ctrlbar_ddmenu_pane

0xe6f0,	// (0x0005c15e) main_sp_fs_ctrlbar_pane_g1

0xe6fc,	// (0x0005c16a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfced,	// (0x0005d75b) main_sp_fs_ctrlbar_pane_g

0xe708,	// (0x0005c176) main_sp_fs_ctrlbar_pane_t1

0x044d,	// (0x0004debb) main_sp_fs_ctrlbar_pane

0x0471,	// (0x0004dedf) main_sp_fs_listscroll_pane_te_cp01

0x0491,	// (0x0004deff) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0491,	// (0x0004deff) popup_sp_fs_action_menu_pane_cp01

0x98fd,	// (0x0005736b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x98fd,	// (0x0005736b) bg_sp_fs_highlight_list_pane_cp01

0x87f9,	// (0x00056267) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x87f9,	// (0x00056267) sp_fs_action_menu_list_gene_pane_g1

0xe738,	// (0x0005c1a6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe738,	// (0x0005c1a6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf7,	// (0x0005d765) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf7,	// (0x0005d765) sp_fs_action_menu_list_gene_pane_g

0x8808,	// (0x00056276) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8808,	// (0x00056276) sp_fs_action_menu_list_gene_pane_t1

0x8820,	// (0x0005628e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8820,	// (0x0005628e) sp_fs_action_menu_list_gene_pane

0xe745,	// (0x0005c1b3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe745,	// (0x0005c1b3) popup_sp_fs_action_menu_bg_pane

0x8843,	// (0x000562b1) sp_fs_action_menu_list_pane_ParamLimits

0x8843,	// (0x000562b1) sp_fs_action_menu_list_pane

0xe753,	// (0x0005c1c1) sp_fs_scroll_pane_cp01_ParamLimits

0xe753,	// (0x0005c1c1) sp_fs_scroll_pane_cp01

0x04c1,	// (0x0004df2f) list_medium_line_plain_t2_t1

0x04d1,	// (0x0004df3f) list_medium_line_plain_t2_t2

0x0001,

0xfcfc,	// (0x0005d76a) list_medium_line_plain_t2_t

0x04e1,	// (0x0004df4f) list_medium_line_plain_t3_t1

0x04f1,	// (0x0004df5f) list_medium_line_plain_t3_t2

0x04ff,	// (0x0004df6d) list_medium_line_plain_t3_t3

0x0002,

0xfd01,	// (0x0005d76f) list_medium_line_plain_t3_t

0x1dde,	// (0x0004f84c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_t2_g2_g1

0x1dea,	// (0x0004f858) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1dea,	// (0x0004f858) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0005ccbf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0005ccbf) list_medium_line_x2_t2_g2_g

0xf0be,	// (0x0005cb2c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf0be,	// (0x0005cb2c) list_medium_line_x2_t2_g2_t1

0xf08d,	// (0x0005cafb) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf08d,	// (0x0005cafb) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd08,	// (0x0005d776) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd08,	// (0x0005d776) list_medium_line_x2_t2_g2_t

0x1dde,	// (0x0004f84c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_t4_g2_g1

0x8867,	// (0x000562d5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8867,	// (0x000562d5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0d,	// (0x0005d77b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0d,	// (0x0005d77b) list_medium_line_x2_t4_g2_g

0x050d,	// (0x0004df7b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x050d,	// (0x0004df7b) list_medium_line_x2_t4_g2_t1

0x0527,	// (0x0004df95) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0527,	// (0x0004df95) list_medium_line_x2_t4_g2_t2

0x053d,	// (0x0004dfab) list_medium_line_x2_t4_g2_t3_ParamLimits

0x053d,	// (0x0004dfab) list_medium_line_x2_t4_g2_t3

0xf08d,	// (0x0005cafb) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf08d,	// (0x0005cafb) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd12,	// (0x0005d780) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd12,	// (0x0005d780) list_medium_line_x2_t4_g2_t

0x0552,	// (0x0004dfc0) list_medium_line_t3_right_iconx2_g1

0x0423,	// (0x0004de91) list_medium_line_t3_right_iconx2_g2

0x055a,	// (0x0004dfc8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1b,	// (0x0005d789) list_medium_line_t3_right_iconx2_g

0x0564,	// (0x0004dfd2) list_medium_line_t3_right_iconx2_t1

0x0574,	// (0x0004dfe2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd22,	// (0x0005d790) list_medium_line_t3_right_iconx2_t

0x1dde,	// (0x0004f84c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x3_t4_g4_g1

0xee34,	// (0x0005c8a2) list_medium_line_x3_t4_g4_g2_ParamLimits

0xee34,	// (0x0005c8a2) list_medium_line_x3_t4_g4_g2

0x1df6,	// (0x0004f864) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1df6,	// (0x0004f864) list_medium_line_x3_t4_g4_g3

0x0582,	// (0x0004dff0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0582,	// (0x0004dff0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd27,	// (0x0005d795) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd27,	// (0x0005d795) list_medium_line_x3_t4_g4_g

0x058e,	// (0x0004dffc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x058e,	// (0x0004dffc) list_medium_line_x3_t4_g4_t1

0x05a5,	// (0x0004e013) list_medium_line_x3_t4_g4_t2_ParamLimits

0x05a5,	// (0x0004e013) list_medium_line_x3_t4_g4_t2

0x05c0,	// (0x0004e02e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x05c0,	// (0x0004e02e) list_medium_line_x3_t4_g4_t3

0x05d5,	// (0x0004e043) list_medium_line_x3_t4_g4_t4_ParamLimits

0x05d5,	// (0x0004e043) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd30,	// (0x0005d79e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd30,	// (0x0005d79e) list_medium_line_x3_t4_g4_t

0x05f2,	// (0x0004e060) list_single_dyc_row_text_pane_t1_ParamLimits

0x05f2,	// (0x0004e060) list_single_dyc_row_text_pane_t1

0x063b,	// (0x0004e0a9) list_single_dyc_row_text_pane_t2_ParamLimits

0x063b,	// (0x0004e0a9) list_single_dyc_row_text_pane_t2

0x8879,	// (0x000562e7) list_single_dyc_row_text_pane_t3_ParamLimits

0x8879,	// (0x000562e7) list_single_dyc_row_text_pane_t3

0x0002,

0xfd39,	// (0x0005d7a7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd39,	// (0x0005d7a7) list_single_dyc_row_text_pane_t

0x888b,	// (0x000562f9) list_single_dyc_row_pane_g1_ParamLimits

0x888b,	// (0x000562f9) list_single_dyc_row_pane_g1

0x8897,	// (0x00056305) list_single_dyc_row_pane_g2_ParamLimits

0x8897,	// (0x00056305) list_single_dyc_row_pane_g2

0x88a3,	// (0x00056311) list_single_dyc_row_pane_g3_ParamLimits

0x88a3,	// (0x00056311) list_single_dyc_row_pane_g3

0x88af,	// (0x0005631d) list_single_dyc_row_pane_g4_ParamLimits

0x88af,	// (0x0005631d) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0005d7ae) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0005d7ae) list_single_dyc_row_pane_g

0x88bb,	// (0x00056329) list_single_dyc_row_text_pane_ParamLimits

0x88bb,	// (0x00056329) list_single_dyc_row_text_pane

0x98a4,	// (0x00057312) bg_sp_fs_scroll_pane

0xe779,	// (0x0005c1e7) thumb_sp_fs_scroll_pane

0x00fb,	// (0x0004db69) list_medium_line_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_g1

0x0695,	// (0x0004e103) list_medium_line_t1_ParamLimits

0x0695,	// (0x0004e103) list_medium_line_t1

0x1dde,	// (0x0004f84c) list_medium_line_x2_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_g1

0xee34,	// (0x0005c8a2) list_medium_line_x2_g2_ParamLimits

0xee34,	// (0x0005c8a2) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0005d7b7) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0005d7b7) list_medium_line_x2_g

0x88da,	// (0x00056348) list_medium_line_x2_t1_ParamLimits

0x88da,	// (0x00056348) list_medium_line_x2_t1

0x1dde,	// (0x0004f84c) list_medium_line_x3_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x3_g1

0xee34,	// (0x0005c8a2) list_medium_line_x3_g2_ParamLimits

0xee34,	// (0x0005c8a2) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0005d7b7) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0005d7b7) list_medium_line_x3_g

0x88da,	// (0x00056348) list_medium_line_x3_t1_ParamLimits

0x88da,	// (0x00056348) list_medium_line_x3_t1

0xe782,	// (0x0005c1f0) thumb_sp_fs_scroll_pane_g1

0xe78b,	// (0x0005c1f9) thumb_sp_fs_scroll_pane_g2

0xe794,	// (0x0005c202) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005d7bc) thumb_sp_fs_scroll_pane_g

0xe782,	// (0x0005c1f0) bg_sp_fs_scroll_pane_g1

0xe78b,	// (0x0005c1f9) bg_sp_fs_scroll_pane_g2

0xe794,	// (0x0005c202) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005d7bc) bg_sp_fs_scroll_pane_g

0x1dde,	// (0x0004f84c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1dde,	// (0x0004f84c) list_medium_line_x2_t3_g4_g1

0xf081,	// (0x0005caef) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf081,	// (0x0005caef) list_medium_line_x2_t3_g4_g2

0xee34,	// (0x0005c8a2) list_medium_line_x2_t3_g4_g3_ParamLimits

0xee34,	// (0x0005c8a2) list_medium_line_x2_t3_g4_g3

0x1dea,	// (0x0004f858) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1dea,	// (0x0004f858) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0005cd3b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0005cd3b) list_medium_line_x2_t3_g4_g

0x06aa,	// (0x0004e118) list_medium_line_x2_t3_g4_t1_ParamLimits

0x06aa,	// (0x0004e118) list_medium_line_x2_t3_g4_t1

0x06c0,	// (0x0004e12e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x06c0,	// (0x0004e12e) list_medium_line_x2_t3_g4_t2

0xf08d,	// (0x0005cafb) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf08d,	// (0x0005cafb) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0005d7c3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0005d7c3) list_medium_line_x2_t3_g4_t

0x00fb,	// (0x0004db69) list_medium_line_g2_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_g2_g1

0x0107,	// (0x0004db75) list_medium_line_g2_g2_ParamLimits

0x0107,	// (0x0004db75) list_medium_line_g2_g2

0x0001,

0xfa0d,	// (0x0005d47b) list_medium_line_g2_g_ParamLimits

0xfa0d,	// (0x0005d47b) list_medium_line_g2_g

0x06d9,	// (0x0004e147) list_medium_line_g2_t1_ParamLimits

0x06d9,	// (0x0004e147) list_medium_line_g2_t1

0x00fb,	// (0x0004db69) list_medium_line_t3_g2_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_t3_g2_g1

0x0107,	// (0x0004db75) list_medium_line_t3_g2_g2_ParamLimits

0x0107,	// (0x0004db75) list_medium_line_t3_g2_g2

0x0001,

0xfa0d,	// (0x0005d47b) list_medium_line_t3_g2_g_ParamLimits

0xfa0d,	// (0x0005d47b) list_medium_line_t3_g2_g

0x06ee,	// (0x0004e15c) list_medium_line_t3_g2_t1_ParamLimits

0x06ee,	// (0x0004e15c) list_medium_line_t3_g2_t1

0x0708,	// (0x0004e176) list_medium_line_t3_g2_t2_ParamLimits

0x0708,	// (0x0004e176) list_medium_line_t3_g2_t2

0x071e,	// (0x0004e18c) list_medium_line_t3_g2_t3_ParamLimits

0x071e,	// (0x0004e18c) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x0005d7ca) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x0005d7ca) list_medium_line_t3_g2_t

0x0423,	// (0x0004de91) list_medium_line_right_icon_g1

0x0735,	// (0x0004e1a3) list_medium_line_right_icon_t1

0x00fb,	// (0x0004db69) list_medium_line_t2_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_t2_g1

0x0743,	// (0x0004e1b1) list_medium_line_t2_t1_ParamLimits

0x0743,	// (0x0004e1b1) list_medium_line_t2_t1

0x075d,	// (0x0004e1cb) list_medium_line_t2_t2_ParamLimits

0x075d,	// (0x0004e1cb) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x0005d7d1) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x0005d7d1) list_medium_line_t2_t

0x00fb,	// (0x0004db69) list_medium_line_t3_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_t3_g1

0x0776,	// (0x0004e1e4) list_medium_line_t3_t1_ParamLimits

0x0776,	// (0x0004e1e4) list_medium_line_t3_t1

0x078d,	// (0x0004e1fb) list_medium_line_t3_t2_ParamLimits

0x078d,	// (0x0004e1fb) list_medium_line_t3_t2

0x07a2,	// (0x0004e210) list_medium_line_t3_t3_ParamLimits

0x07a2,	// (0x0004e210) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x0005d7d6) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x0005d7d6) list_medium_line_t3_t

0x00fb,	// (0x0004db69) list_medium_line_g3_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_g3_g1

0x07b4,	// (0x0004e222) list_medium_line_g3_g2_ParamLimits

0x07b4,	// (0x0004e222) list_medium_line_g3_g2

0x0107,	// (0x0004db75) list_medium_line_g3_g3_ParamLimits

0x0107,	// (0x0004db75) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x0005d7dd) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x0005d7dd) list_medium_line_g3_g

0x07c0,	// (0x0004e22e) list_medium_line_g3_t1_ParamLimits

0x07c0,	// (0x0004e22e) list_medium_line_g3_t1

0x00fb,	// (0x0004db69) list_medium_line_t2_g3_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_t2_g3_g1

0x07b4,	// (0x0004e222) list_medium_line_t2_g3_g2_ParamLimits

0x07b4,	// (0x0004e222) list_medium_line_t2_g3_g2

0x0107,	// (0x0004db75) list_medium_line_t2_g3_g3_ParamLimits

0x0107,	// (0x0004db75) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x0005d7dd) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x0005d7dd) list_medium_line_t2_g3_g

0x07d5,	// (0x0004e243) list_medium_line_t2_g3_t1_ParamLimits

0x07d5,	// (0x0004e243) list_medium_line_t2_g3_t1

0x07ec,	// (0x0004e25a) list_medium_line_t2_g3_t2_ParamLimits

0x07ec,	// (0x0004e25a) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x0005d7e4) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x0005d7e4) list_medium_line_t2_g3_t

0x00fb,	// (0x0004db69) list_medium_line_t3_g3_g1_ParamLimits

0x00fb,	// (0x0004db69) list_medium_line_t3_g3_g1

0x07b4,	// (0x0004e222) list_medium_line_t3_g3_g2_ParamLimits

0x07b4,	// (0x0004e222) list_medium_line_t3_g3_g2

0x0107,	// (0x0004db75) list_medium_line_t3_g3_g3_ParamLimits

0x0107,	// (0x0004db75) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x0005d7dd) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x0005d7dd) list_medium_line_t3_g3_g

0x0805,	// (0x0004e273) list_medium_line_t3_g3_t1_ParamLimits

0x0805,	// (0x0004e273) list_medium_line_t3_g3_t1

0x081e,	// (0x0004e28c) list_medium_line_t3_g3_t2_ParamLimits

0x081e,	// (0x0004e28c) list_medium_line_t3_g3_t2

0x0834,	// (0x0004e2a2) list_medium_line_t3_g3_t3_ParamLimits

0x0834,	// (0x0004e2a2) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x0005d7e9) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x0005d7e9) list_medium_line_t3_g3_t

0x0552,	// (0x0004dfc0) list_medium_line_right_iconx2_g1

0x0423,	// (0x0004de91) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x0005d7f0) list_medium_line_right_iconx2_g

0x084e,	// (0x0004e2bc) list_medium_line_right_iconx2_t1

0x0552,	// (0x0004dfc0) list_medium_line_t2_right_iconx2_g1

0x0423,	// (0x0004de91) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x0005d7f0) list_medium_line_t2_right_iconx2_g

0x085c,	// (0x0004e2ca) list_medium_line_t2_right_iconx2_t1

0x086c,	// (0x0004e2da) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x0005d7f5) list_medium_line_t2_right_iconx2_t

0x087e,	// (0x0004e2ec) list_medium_line_x4_t4_t1

0x088c,	// (0x0004e2fa) list_medium_line_x4_t4_t2

0x089c,	// (0x0004e30a) list_medium_line_x4_t4_t3

0x08ac,	// (0x0004e31a) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x0005d7fa) list_medium_line_x4_t4_t

0x8933,	// (0x000563a1) tport_appsw_pane_ParamLimits

0x8933,	// (0x000563a1) tport_appsw_pane

0x894b,	// (0x000563b9) tport_contact_pane_ParamLimits

0x894b,	// (0x000563b9) tport_contact_pane

0x8963,	// (0x000563d1) tport_listscroll_pane_ParamLimits

0x8963,	// (0x000563d1) tport_listscroll_pane

0x897d,	// (0x000563eb) cell_tport_appsw_pane_ParamLimits

0x897d,	// (0x000563eb) cell_tport_appsw_pane

0xd5fb,	// (0x0005b069) tport_appsw_pane_g1_ParamLimits

0xd5fb,	// (0x0005b069) tport_appsw_pane_g1

0xe79d,	// (0x0005c20b) tport_contact_pane_g1

0xe7a6,	// (0x0005c214) tport_contact_pane_t1

0xe7b4,	// (0x0005c222) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x0005d803) tport_contact_pane_t

0xe7c2,	// (0x0005c230) list_tport_pane

0xe7cb,	// (0x0005c239) scroll_pane_cp_030

0x89c9,	// (0x00056437) cell_tport_appsw_pane_g1

0x89d9,	// (0x00056447) cell_tport_appsw_pane_t1

0x98a4,	// (0x00057312) grid_highlight_pane_cp019

0x89e7,	// (0x00056455) list_tport_double_graphic_pane_ParamLimits

0x89e7,	// (0x00056455) list_tport_double_graphic_pane

0x98fd,	// (0x0005736b) list_highlight_pane_cp023_ParamLimits

0x98fd,	// (0x0005736b) list_highlight_pane_cp023

0x89f4,	// (0x00056462) list_tport_double_graphic_pane_g1_ParamLimits

0x89f4,	// (0x00056462) list_tport_double_graphic_pane_g1

0x8a01,	// (0x0005646f) list_tport_double_graphic_pane_t1_ParamLimits

0x8a01,	// (0x0005646f) list_tport_double_graphic_pane_t1

0x8a16,	// (0x00056484) list_tport_double_graphic_pane_t2_ParamLimits

0x8a16,	// (0x00056484) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0005d80f) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0005d80f) list_tport_double_graphic_pane_t

0x98a4,	// (0x00057312) main_cale_note_pane

0x6ad6,	// (0x00054544) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ad6,	// (0x00054544) cell_vitu2_function_top_wide_pane_cp01

0x8356,	// (0x00055dc4) wait_bar_pane_cp05_ParamLimits

0x98fd,	// (0x0005736b) listscroll_cmail_pane

0xe7dc,	// (0x0005c24a) list_cmail_pane

0x8a32,	// (0x000564a0) list_cmail_body_pane

0x8a47,	// (0x000564b5) list_single_cmail_header_caption_pane

0x8a61,	// (0x000564cf) list_single_cmail_header_detail_pane_ParamLimits

0x8a61,	// (0x000564cf) list_single_cmail_header_detail_pane

0x8a90,	// (0x000564fe) list_single_cmail_header_caption_pane_t1

0x08bc,	// (0x0004e32a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x08bc,	// (0x0004e32a) list_single_cmail_header_detail_pane_g1

0x8aab,	// (0x00056519) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8aab,	// (0x00056519) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0005d814) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0005d814) list_single_cmail_header_detail_pane_g

0x08d4,	// (0x0004e342) list_single_cmail_header_detail_pane_t1_ParamLimits

0x08d4,	// (0x0004e342) list_single_cmail_header_detail_pane_t1

0x0924,	// (0x0004e392) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0924,	// (0x0004e392) list_single_cmail_header_editor_pane_bg

0xe2a5,	// (0x0005bd13) list_cmail_body_pane_g1

0xe800,	// (0x0005c26e) list_cmail_body_pane_t1

0xd61b,	// (0x0005b089) list_single_cmail_header_editor_pane_bg_g1

0xace3,	// (0x00058751) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd62b,	// (0x0005b099) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd623,	// (0x0005b091) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd845,	// (0x0005b2b3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd64b,	// (0x0005b0b9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd63b,	// (0x0005b0a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd643,	// (0x0005b0b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacc3,	// (0x00058731) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8adb,	// (0x00056549) calenote_gesture_pane_ParamLimits

0x8adb,	// (0x00056549) calenote_gesture_pane

0x8afb,	// (0x00056569) calenote_window_pane_ParamLimits

0x8afb,	// (0x00056569) calenote_window_pane

0xe80e,	// (0x0005c27c) popup_note_window_cp01

0x8b17,	// (0x00056585) calenote_swipe_1_pane_ParamLimits

0x8b17,	// (0x00056585) calenote_swipe_1_pane

0x8738,	// (0x000561a6) calenote_swipe_2_pane_ParamLimits

0x8738,	// (0x000561a6) calenote_swipe_2_pane

0xe5fd,	// (0x0005c06b) calenote_swipe_1_pane_g1_ParamLimits

0xe5fd,	// (0x0005c06b) calenote_swipe_1_pane_g1

0xe60a,	// (0x0005c078) calenote_swipe_1_pane_g2_ParamLimits

0xe60a,	// (0x0005c078) calenote_swipe_1_pane_g2

0x0001,

0xfcd0,	// (0x0005d73e) calenote_swipe_1_pane_g_ParamLimits

0xfcd0,	// (0x0005d73e) calenote_swipe_1_pane_g

0xe820,	// (0x0005c28e) calenote_swipe_1_pane_t1_ParamLimits

0xe820,	// (0x0005c28e) calenote_swipe_1_pane_t1

0xe5fd,	// (0x0005c06b) calenote_swipe_2_pane_g1_ParamLimits

0xe5fd,	// (0x0005c06b) calenote_swipe_2_pane_g1

0xe83f,	// (0x0005c2ad) calenote_swipe_2_pane_g2_ParamLimits

0xe83f,	// (0x0005c2ad) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0005d820) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0005d820) calenote_swipe_2_pane_g

0xe84b,	// (0x0005c2b9) calenote_swipe_2_pane_t1_ParamLimits

0xe84b,	// (0x0005c2b9) calenote_swipe_2_pane_t1

0x98a4,	// (0x00057312) main_mup_navstr_pane

0x5730,	// (0x0005319e) main_mup3_pane_t7_ParamLimits

0x5730,	// (0x0005319e) main_mup3_pane_t7

0xa453,	// (0x00057ec1) main_mp4_pane_g6_ParamLimits

0xa453,	// (0x00057ec1) main_mp4_pane_g6

0xa5f7,	// (0x00058065) main_image3_pane_t4_ParamLimits

0xa5f7,	// (0x00058065) main_image3_pane_t4

0x8b2c,	// (0x0005659a) popup_navstr_preview_pane_ParamLimits

0x8b2c,	// (0x0005659a) popup_navstr_preview_pane

0x8b3c,	// (0x000565aa) scroll_navstr_pane_ParamLimits

0x8b3c,	// (0x000565aa) scroll_navstr_pane

0x98a4,	// (0x00057312) bg_popup_preview_window_pane_cp04

0xe872,	// (0x0005c2e0) popup_navstr_preview_pane_t1

0x8b50,	// (0x000565be) scroll_navstr_pane_g1_ParamLimits

0x8b50,	// (0x000565be) scroll_navstr_pane_g1

0x8b64,	// (0x000565d2) scroll_navstr_pane_t1_ParamLimits

0x8b64,	// (0x000565d2) scroll_navstr_pane_t1

0xe817,	// (0x0005c285) bg_button_pane_cp014

0xe817,	// (0x0005c285) bg_button_pane_cp030

0x03c9,	// (0x0004de37) list_double_fisheye_pane_g4_ParamLimits

0x03c9,	// (0x0004de37) list_double_fisheye_pane_g4

0x03d5,	// (0x0004de43) list_double_fisheye_pane_g5_ParamLimits

0x03d5,	// (0x0004de43) list_double_fisheye_pane_g5

0xe7e4,	// (0x0005c252) sp_fs_scroll_pane_cp03

0xe6f0,	// (0x0005c15e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6fc,	// (0x0005c16a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfced,	// (0x0005d75b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe708,	// (0x0005c176) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8a28,	// (0x00056496) sp_fs_scroll_pane_cp02

0xa9c6,	// (0x00058434) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9c6,	// (0x00058434) popup_sp_fs_calendar_preview_list_single_pane

0x98a4,	// (0x00057312) main_cam6_pano_pane

0x98fd,	// (0x0005736b) main_mup3_pane_ParamLimits

0x98a4,	// (0x00057312) main_phacti_pane

0x8229,	// (0x00055c97) bg_button_pane_cp11

0x8243,	// (0x00055cb1) main_mobtv_info_pane_g2_ParamLimits

0x8243,	// (0x00055cb1) main_mobtv_info_pane_g2

0x0001,

0xfc4d,	// (0x0005d6bb) main_mobtv_info_pane_g_ParamLimits

0xfc4d,	// (0x0005d6bb) main_mobtv_info_pane_g

0x841e,	// (0x00055e8c) sc_clock_pane_t5_ParamLimits

0x841e,	// (0x00055e8c) sc_clock_pane_t5

0x84aa,	// (0x00055f18) main_radioblah_pane_g1_ParamLimits

0xe549,	// (0x0005bfb7) main_radioblah_pane_t3_ParamLimits

0xe549,	// (0x0005bfb7) main_radioblah_pane_t3

0xe561,	// (0x0005bfcf) main_radioblah_pane_t4_ParamLimits

0xe561,	// (0x0005bfcf) main_radioblah_pane_t4

0x84d2,	// (0x00055f40) main_radioblah_text_pane_ParamLimits

0x84d2,	// (0x00055f40) main_radioblah_text_pane

0x84e4,	// (0x00055f52) main_radioblah_info_pane_g1_ParamLimits

0x857d,	// (0x00055feb) main_radioblah_info_pane_t4_ParamLimits

0x857d,	// (0x00055feb) main_radioblah_info_pane_t4

0x98fd,	// (0x0005736b) main_sp_fs_calendar_pane

0x8b7b,	// (0x000565e9) main_phacti_pane_g1

0x8b83,	// (0x000565f1) phacti_note_pane_ParamLimits

0x8b83,	// (0x000565f1) phacti_note_pane

0xe889,	// (0x0005c2f7) phacti_term_pane_ParamLimits

0xe889,	// (0x0005c2f7) phacti_term_pane

0xe89e,	// (0x0005c30c) phacti_note_pane_t1_ParamLimits

0xe89e,	// (0x0005c30c) phacti_note_pane_t1

0x8b97,	// (0x00056605) phacti_term_pane_g1

0x8b9f,	// (0x0005660d) phacti_term_pane_t1_ParamLimits

0x8b9f,	// (0x0005660d) phacti_term_pane_t1

0xe8b5,	// (0x0005c323) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8bd,	// (0x0005c32b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0005d82a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8c5,	// (0x0005c333) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8c5,	// (0x0005c333) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8db,	// (0x0005c349) aid_popup_sp_fs_bg_corner_pane

0xcc33,	// (0x0005a6a1) popup_sp_fs_calendar_preview_bg_pane_g1

0x98a4,	// (0x00057312) popup_sp_fs_calendar_preview_bg_pane

0xe8e3,	// (0x0005c351) popup_sp_fs_calendar_preview_list_pane

0xc7e2,	// (0x0005a250) bg_main_sp_fs_cale_pane_ParamLimits

0xc7e2,	// (0x0005a250) bg_main_sp_fs_cale_pane

0xa80b,	// (0x00058279) listscroll_cale_mrui_pane_ParamLimits

0xa80b,	// (0x00058279) listscroll_cale_mrui_pane

0xa820,	// (0x0005828e) listscroll_sp_fs_schedule_track_pane

0xa829,	// (0x00058297) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa829,	// (0x00058297) main_sp_fs_ctrlbar_pane_cp01

0xe8eb,	// (0x0005c359) main_sp_fs_ribbon_pane

0xa83c,	// (0x000582aa) popup_sp_fs_cale_preview_window

0x8c26,	// (0x00056694) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8c26,	// (0x00056694) list_single_sp_fs_schedule_track_pane

0x98fd,	// (0x0005736b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x98fd,	// (0x0005736b) bg_sp_fs_highlight_list_pane_cp03

0x8c39,	// (0x000566a7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8c39,	// (0x000566a7) list_single_sp_fs_schedule_track_pane_g1

0x8c45,	// (0x000566b3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c45,	// (0x000566b3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x0005d82f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x0005d82f) list_single_sp_fs_schedule_track_pane_g

0x8c51,	// (0x000566bf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c51,	// (0x000566bf) list_single_sp_fs_schedule_track_pane_t1

0x8c73,	// (0x000566e1) sp_fs_schedule_track_pane_ParamLimits

0x8c73,	// (0x000566e1) sp_fs_schedule_track_pane

0xe8f3,	// (0x0005c361) sp_fs_schedule_track_pane_g1

0xe8fb,	// (0x0005c369) sp_fs_schedule_track_pane_g2

0xe903,	// (0x0005c371) sp_fs_schedule_track_pane_g3

0xe90b,	// (0x0005c379) sp_fs_schedule_track_pane_g4

0xe913,	// (0x0005c381) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x0005d834) sp_fs_schedule_track_pane_g

0xd61b,	// (0x0005b089) bg_sp_fs_schedule_viewer_highlight_g1

0xace3,	// (0x00058751) bg_sp_fs_schedule_viewer_highlight_g2

0xd623,	// (0x0005b091) bg_sp_fs_schedule_viewer_highlight_g3

0xd62b,	// (0x0005b099) bg_sp_fs_schedule_viewer_highlight_g4

0xd845,	// (0x0005b2b3) bg_sp_fs_schedule_viewer_highlight_g5

0xd63b,	// (0x0005b0a9) bg_sp_fs_schedule_viewer_highlight_g6

0xd643,	// (0x0005b0b1) bg_sp_fs_schedule_viewer_highlight_g7

0xd64b,	// (0x0005b0b9) bg_sp_fs_schedule_viewer_highlight_g8

0xacc3,	// (0x00058731) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x0005d83f) bg_sp_fs_schedule_viewer_highlight_g

0x98a4,	// (0x00057312) bg_main_sp_fs_ribbon_pane

0x8c88,	// (0x000566f6) main_sp_fs_ribbon_pane_g1

0xe91b,	// (0x0005c389) main_sp_fs_ribbon_pane_t1

0x8c91,	// (0x000566ff) main_sp_fs_ribbon_pane_t2

0xe92a,	// (0x0005c398) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x0005d852) main_sp_fs_ribbon_pane_t

0xe939,	// (0x0005c3a7) main_sp_fs_ribbon_scheduler_pane

0xe941,	// (0x0005c3af) bg_main_sp_fs_ribbon_pane_g1

0xe94a,	// (0x0005c3b8) bg_main_sp_fs_ribbon_pane_g2

0xe953,	// (0x0005c3c1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0005d859) bg_main_sp_fs_ribbon_pane_g

0xe95b,	// (0x0005c3c9) main_sp_fs_ribbon_scheduler_pane_g1

0xe964,	// (0x0005c3d2) main_sp_fs_ribbon_scheduler_pane_g2

0xe96d,	// (0x0005c3db) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x0005d860) main_sp_fs_ribbon_scheduler_pane_g

0xe976,	// (0x0005c3e4) list_cale_mrui_pane

0x8ca0,	// (0x0005670e) sp_fs_scroll_pane_cp07_ParamLimits

0x8ca0,	// (0x0005670e) sp_fs_scroll_pane_cp07

0x8cbc,	// (0x0005672a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8cbc,	// (0x0005672a) bg_sp_fs_schedule_viewer_highlight

0xe983,	// (0x0005c3f1) list_single_sp_fs_schedule_track_pane_cp01

0xe98b,	// (0x0005c3f9) list_sp_fs_schedule_track_pane

0xe993,	// (0x0005c401) sp_fs_scroll_pane_cp06_ParamLimits

0xe993,	// (0x0005c401) sp_fs_scroll_pane_cp06

0xcc33,	// (0x0005a6a1) bgmain_sp_fs_calendar_pane_g1

0x093d,	// (0x0004e3ab) list_single_cale_mrui_pane_ParamLimits

0x093d,	// (0x0004e3ab) list_single_cale_mrui_pane

0xa84e,	// (0x000582bc) list_single_cale_mrui_row_pane_ParamLimits

0xa84e,	// (0x000582bc) list_single_cale_mrui_row_pane

0xa864,	// (0x000582d2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa864,	// (0x000582d2) list_single_cale_mrui_row_pane_g1

0xa89c,	// (0x0005830a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa89c,	// (0x0005830a) list_single_cale_mrui_row_pane_t1

0x0952,	// (0x0004e3c0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0952,	// (0x0004e3c0) list_single_cale_mrui_row_pane_t2

0xa8ae,	// (0x0005831c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa8ae,	// (0x0005831c) list_single_cale_mrui_row_pane_t3

0xa8dd,	// (0x0005834b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa8dd,	// (0x0005834b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x0005d86e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x0005d86e) list_single_cale_mrui_row_pane_t

0x09ba,	// (0x0004e428) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x09ba,	// (0x0004e428) list_single_cmail_header_editor_pane_bg_cp01

0x09e0,	// (0x0004e44e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x09e0,	// (0x0004e44e) list_single_cmail_header_editor_pane_bg_cp02

0x8cce,	// (0x0005673c) main_radioblah_text_pane_t1_ParamLimits

0x8cce,	// (0x0005673c) main_radioblah_text_pane_t1

0xe9b2,	// (0x0005c420) cam6_indi_pane_cp01

0xe9ba,	// (0x0005c428) cam6_mode_pane_cp01

0xe9c2,	// (0x0005c430) cam6_pano_pane

0xe9cb,	// (0x0005c439) cam6_zoom_pane_cp01

0xe9d5,	// (0x0005c443) cam6_pano_image_pane

0xe9de,	// (0x0005c44c) cam6_pano_pane_g1

0xe2a5,	// (0x0005bd13) cam6_pano_pane_g2

0xe9e7,	// (0x0005c455) cam6_pano_pane_g3

0xe9f0,	// (0x0005c45e) cam6_pano_pane_g4

0xd1ad,	// (0x0005ac1b) cam6_pano_pane_g5

0xe9f9,	// (0x0005c467) cam6_pano_pane_g6

0xea01,	// (0x0005c46f) cam6_pano_pane_g7

0xea09,	// (0x0005c477) cam6_pano_pane_g8

0xea12,	// (0x0005c480) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0005d877) cam6_pano_pane_g

0x98a4,	// (0x00057312) main_browser_tag_pane

0xe86a,	// (0x0005c2d8) grid_navstr_albumart_pane

0xea1d,	// (0x0005c48b) cell_navstr_albumart_pane_ParamLimits

0xea1d,	// (0x0005c48b) cell_navstr_albumart_pane

0xea3c,	// (0x0005c4aa) cell_navstr_albumart_pane_g1

0xc5ef,	// (0x0005a05d) cell_navstr_albumart_pane_g2

0xc5ff,	// (0x0005a06d) cell_navstr_albumart_pane_g3

0xc5f7,	// (0x0005a065) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0005d88a) cell_navstr_albumart_pane_g

0x8ce9,	// (0x00056757) bt_list_pane_ParamLimits

0x8ce9,	// (0x00056757) bt_list_pane

0x8cff,	// (0x0005676d) bt_list_pane_t1

0x8d0e,	// (0x0005677c) bt_list_pane_t2

0x0001,

0xfe25,	// (0x0005d893) bt_list_pane_t

0x98a4,	// (0x00057312) main_cale_prevew_pane

0x8d1d,	// (0x0005678b) popup_cale_preview_window_ParamLimits

0x8d1d,	// (0x0005678b) popup_cale_preview_window

0x98fd,	// (0x0005736b) bg_popup_preview_window_pane_cp05_ParamLimits

0x98fd,	// (0x0005736b) bg_popup_preview_window_pane_cp05

0xea44,	// (0x0005c4b2) list_cale_preview_pane_ParamLimits

0xea44,	// (0x0005c4b2) list_cale_preview_pane

0x8d3a,	// (0x000567a8) list_double_cale_preview_pane_ParamLimits

0x8d3a,	// (0x000567a8) list_double_cale_preview_pane

0x8d4e,	// (0x000567bc) list_single_cale_preview_pane_ParamLimits

0x8d4e,	// (0x000567bc) list_single_cale_preview_pane

0x8d66,	// (0x000567d4) list_single_cale_preview_pane_g1

0x8d6e,	// (0x000567dc) list_single_cale_preview_pane_t1_ParamLimits

0x8d6e,	// (0x000567dc) list_single_cale_preview_pane_t1

0x8d83,	// (0x000567f1) list_double_cale_preview_pane_g1

0x8d8b,	// (0x000567f9) list_double_cale_preview_pane_t1_ParamLimits

0x8d8b,	// (0x000567f9) list_double_cale_preview_pane_t1

0x8da0,	// (0x0005680e) list_double_cale_preview_pane_t2_ParamLimits

0x8da0,	// (0x0005680e) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0005d898) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0005d898) list_double_cale_preview_pane_t

0x98a4,	// (0x00057312) main_ezdial_pane

0x98fd,	// (0x0005736b) main_sp_fs_email_pane_ParamLimits

0x8798,	// (0x00056206) cmail_ddmenu_btn01_pane_ParamLimits

0x8798,	// (0x00056206) cmail_ddmenu_btn01_pane

0x87ab,	// (0x00056219) cmail_ddmenu_btn02_pane_ParamLimits

0x87ab,	// (0x00056219) cmail_ddmenu_btn02_pane

0x87ce,	// (0x0005623c) cmail_ddmenu_btn03_pane_ParamLimits

0x87ce,	// (0x0005623c) cmail_ddmenu_btn03_pane

0x044d,	// (0x0004debb) main_sp_fs_ctrlbar_pane_ParamLimits

0x0471,	// (0x0004dedf) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8a32,	// (0x000564a0) list_cmail_body_pane_ParamLimits

0x8aa0,	// (0x0005650e) bg_button_pane_cp12

0xe7f3,	// (0x0005c261) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7f3,	// (0x0005c261) list_single_cmail_header_detail_pane_g3

0x8ab7,	// (0x00056525) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8ab7,	// (0x00056525) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0005d81b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0005d81b) list_single_cmail_header_detail_pane_t

0x8bb4,	// (0x00056622) phacti_term_pane_t2_ParamLimits

0x8bb4,	// (0x00056622) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0005d825) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0005d825) phacti_term_pane_t

0xea50,	// (0x0005c4be) aid_size_list_single_double

0x8db8,	// (0x00056826) popup_ezdial_listscroll_window

0x8dd4,	// (0x00056842) popup_number_entry_window_cp01

0xb3c9,	// (0x00058e37) bg_popup_call_pane_cp09

0xea5c,	// (0x0005c4ca) ezdial_list_pane

0xea64,	// (0x0005c4d2) scroll_pane_cp23

0xc7e2,	// (0x0005a250) bg_button_pane_cp028_ParamLimits

0xc7e2,	// (0x0005a250) bg_button_pane_cp028

0x8de2,	// (0x00056850) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8de2,	// (0x00056850) cmail_ddmenu_btn01_pane_g1

0x8df1,	// (0x0005685f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8df1,	// (0x0005685f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x0005d89d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x0005d89d) cmail_ddmenu_btn01_pane_g

0xea6c,	// (0x0005c4da) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea6c,	// (0x0005c4da) cmail_ddmenu_btn01_pane_t1

0xc7e2,	// (0x0005a250) bg_button_pane_cp029_ParamLimits

0xc7e2,	// (0x0005a250) bg_button_pane_cp029

0x8e01,	// (0x0005686f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e01,	// (0x0005686f) cmail_ddmenu_btn02_pane_g1

0x8e1c,	// (0x0005688a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e1c,	// (0x0005688a) cmail_ddmenu_btn02_pane_t1

0x98fd,	// (0x0005736b) bg_button_pane_cp031_ParamLimits

0x98fd,	// (0x0005736b) bg_button_pane_cp031

0x8e01,	// (0x0005686f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e01,	// (0x0005686f) cmail_ddmenu_btn03_pane_g1

0x8e1c,	// (0x0005688a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e1c,	// (0x0005688a) cmail_ddmenu_btn03_pane_t1

0x6310,	// (0x00053d7e) cell_dialer2_keypad_pane_t1_ParamLimits

0x632a,	// (0x00053d98) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x632a,	// (0x00053d98) cell_dialer2_keypad_pane_t1_copy1

0x808e,	// (0x00055afc) ncimui_group_button_pane

0x98fd,	// (0x0005736b) main_sp_fs_calendar_pane_ParamLimits

0x8a47,	// (0x000564b5) list_single_cmail_header_caption_pane_ParamLimits

0xa802,	// (0x00058270) aid_recal_txt_sm_pane

0x98a4,	// (0x00057312) mian_recal_day_pane

0xa83c,	// (0x000582aa) popup_sp_fs_cale_preview_window_ParamLimits

0xea81,	// (0x0005c4ef) list_recal_day_pane

0xa928,	// (0x00058396) list_single_recal_day_pane_ParamLimits

0xa928,	// (0x00058396) list_single_recal_day_pane

0xeaa8,	// (0x0005c516) list_single_recal_day_pane_g1_ParamLimits

0xeaa8,	// (0x0005c516) list_single_recal_day_pane_g1

0xa93a,	// (0x000583a8) list_single_recal_day_pane_g2_ParamLimits

0xa93a,	// (0x000583a8) list_single_recal_day_pane_g2

0xa946,	// (0x000583b4) list_single_recal_day_pane_g3_ParamLimits

0xa946,	// (0x000583b4) list_single_recal_day_pane_g3

0x0a00,	// (0x0004e46e) list_single_recal_day_pane_g4_ParamLimits

0x0a00,	// (0x0004e46e) list_single_recal_day_pane_g4

0xa952,	// (0x000583c0) list_single_recal_day_pane_g5_ParamLimits

0xa952,	// (0x000583c0) list_single_recal_day_pane_g5

0xa95e,	// (0x000583cc) list_single_recal_day_pane_g6_ParamLimits

0xa95e,	// (0x000583cc) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0005d8ac) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0005d8ac) list_single_recal_day_pane_g

0xa972,	// (0x000583e0) list_single_recal_day_pane_t1

0xa984,	// (0x000583f2) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x0005d8b7) list_single_recal_day_pane_t

0x8e43,	// (0x000568b1) ncimui_query_button_pane_ParamLimits

0x8e43,	// (0x000568b1) ncimui_query_button_pane

0x8e53,	// (0x000568c1) ncimui_query_button_pane_t1_ParamLimits

0x8e53,	// (0x000568c1) ncimui_query_button_pane_t1

0xeab4,	// (0x0005c522) ncimui_query_button_pane_t2_ParamLimits

0xeab4,	// (0x0005c522) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x0005d8bc) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x0005d8bc) ncimui_query_button_pane_t

0x8e66,	// (0x000568d4) query_button_pane_ParamLimits

0x8e66,	// (0x000568d4) query_button_pane

0x98a4,	// (0x00057312) bg_button_pane_cp0028

0xeac7,	// (0x0005c535) query_button_pane_t1

0x4339,	// (0x00051da7) main_tport_pane_ParamLimits

0x88f0,	// (0x0005635e) bg_popup_window_pane_cp01_ParamLimits

0x88f0,	// (0x0005635e) bg_popup_window_pane_cp01

0x890b,	// (0x00056379) heading_pane_cp08_ParamLimits

0x890b,	// (0x00056379) heading_pane_cp08

0x891e,	// (0x0005638c) heading_pane_cp07_ParamLimits

0x891e,	// (0x0005638c) heading_pane_cp07

0x89c9,	// (0x00056437) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0005d808) cell_tport_appsw_pane_g

0xff32,	// (0x0004d9a0) input_candi_list_open_g1

0xaea4,	// (0x00058912) list_cale_time_pane_g6_ParamLimits

0xaea4,	// (0x00058912) list_cale_time_pane_g6

0x5143,	// (0x00052bb1) aid_size_touch_calib_1_ParamLimits

0x5143,	// (0x00052bb1) aid_size_touch_calib_1

0x5155,	// (0x00052bc3) aid_size_touch_calib_2_ParamLimits

0x5155,	// (0x00052bc3) aid_size_touch_calib_2

0x516d,	// (0x00052bdb) aid_size_touch_calib_3_ParamLimits

0x516d,	// (0x00052bdb) aid_size_touch_calib_3

0x518b,	// (0x00052bf9) aid_size_touch_calib_4_ParamLimits

0x518b,	// (0x00052bf9) aid_size_touch_calib_4

0x51a3,	// (0x00052c11) main_touch_calib_button_group_pane_ParamLimits

0x51a3,	// (0x00052c11) main_touch_calib_button_group_pane

0x51bb,	// (0x00052c29) main_touch_calib_pane_g1_ParamLimits

0x51cd,	// (0x00052c3b) main_touch_calib_pane_g2_ParamLimits

0x51df,	// (0x00052c4d) main_touch_calib_pane_g3_ParamLimits

0x51f1,	// (0x00052c5f) main_touch_calib_pane_g4_ParamLimits

0xf763,	// (0x0005d1d1) main_touch_calib_pane_g_ParamLimits

0x5203,	// (0x00052c71) main_touch_calib_pane_t1_ParamLimits

0x521d,	// (0x00052c8b) main_touch_calib_pane_t2_ParamLimits

0x5237,	// (0x00052ca5) main_touch_calib_pane_t3_ParamLimits

0x524b,	// (0x00052cb9) main_touch_calib_pane_t4_ParamLimits

0x5261,	// (0x00052ccf) main_touch_calib_pane_t5_ParamLimits

0xf76c,	// (0x0005d1da) main_touch_calib_pane_t_ParamLimits

0xcf63,	// (0x0005a9d1) list_single_fp_cale_pane_g3_ParamLimits

0xcf63,	// (0x0005a9d1) list_single_fp_cale_pane_g3

0x98fd,	// (0x0005736b) bg_button_pane_cp012_ParamLimits

0x98fd,	// (0x0005736b) bg_vkb2_func_pane_cp03_ParamLimits

0x731b,	// (0x00054d89) cell_vitu2_function_top_pane_g1_ParamLimits

0x98fd,	// (0x0005736b) bg_vkb2_func_pane_cp04_ParamLimits

0x801c,	// (0x00055a8a) main_ncimui_button_group_pane_ParamLimits

0x801c,	// (0x00055a8a) main_ncimui_button_group_pane

0x807c,	// (0x00055aea) main_ncimui_pane_t3_ParamLimits

0x807c,	// (0x00055aea) main_ncimui_pane_t3

0xe880,	// (0x0005c2ee) phacti_button_group_pane

0xea50,	// (0x0005c4be) aid_size_list_single_double_ParamLimits

0x8db8,	// (0x00056826) popup_ezdial_listscroll_window_ParamLimits

0x8dd4,	// (0x00056842) popup_number_entry_window_cp01_ParamLimits

0x8e79,	// (0x000568e7) phacti_button_pane_ParamLimits

0x8e79,	// (0x000568e7) phacti_button_pane

0x98a4,	// (0x00057312) bg_button_pane_cp14

0xead5,	// (0x0005c543) phacti_button_pane_t1

0x8e8a,	// (0x000568f8) main_touch_calib_button_pane_ParamLimits

0x8e8a,	// (0x000568f8) main_touch_calib_button_pane

0xa060,	// (0x00057ace) bg_button_pane_cp18_ParamLimits

0xa060,	// (0x00057ace) bg_button_pane_cp18

0xeae3,	// (0x0005c551) main_touch_calib_button_pane_t1_ParamLimits

0xeae3,	// (0x0005c551) main_touch_calib_button_pane_t1

0xeaf9,	// (0x0005c567) main_touch_calib_button_pane_t2_ParamLimits

0xeaf9,	// (0x0005c567) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x0005d8c1) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x0005d8c1) main_touch_calib_button_pane_t

0x98a4,	// (0x00057312) cell_ncimui_button_pane

0x98a4,	// (0x00057312) bg_button_pane_cp032

0xeb17,	// (0x0005c585) cell_ncimui_button_pane_t1

0xa5d5,	// (0x00058043) image3_infobar_pane_ParamLimits

0xa5d5,	// (0x00058043) image3_infobar_pane

0x844a,	// (0x00055eb8) fs_bigclock_status_pane_ParamLimits

0x844a,	// (0x00055eb8) fs_bigclock_status_pane

0x8457,	// (0x00055ec5) main_fs_bigclock_clock_pane_ParamLimits

0x8457,	// (0x00055ec5) main_fs_bigclock_clock_pane

0x846b,	// (0x00055ed9) main_fs_bigclock_indi_pane_ParamLimits

0x846b,	// (0x00055ed9) main_fs_bigclock_indi_pane

0x8486,	// (0x00055ef4) main_fs_bigclock_swipe_pane_ParamLimits

0x8486,	// (0x00055ef4) main_fs_bigclock_swipe_pane

0x98a4,	// (0x00057312) main_fs_clock_dumped_data

0xe3b2,	// (0x0005be20) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3b2,	// (0x0005be20) list_single_fs_bigclock_indicator_pane_g1

0xe3dc,	// (0x0005be4a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3dc,	// (0x0005be4a) list_single_fs_bigclock_indicator_pane_g2

0xe3f6,	// (0x0005be64) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3f6,	// (0x0005be64) list_single_fs_bigclock_indicator_pane_g3

0xe410,	// (0x0005be7e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe410,	// (0x0005be7e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc81,	// (0x0005d6ef) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc81,	// (0x0005d6ef) list_single_fs_bigclock_indicator_pane_g

0xe43b,	// (0x0005bea9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe43b,	// (0x0005bea9) list_single_fs_bigclock_indicator_pane_t1

0xe463,	// (0x0005bed1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe463,	// (0x0005bed1) list_single_fs_bigclock_indicator_pane_t2

0xe48b,	// (0x0005bef9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe48b,	// (0x0005bef9) list_single_fs_bigclock_indicator_pane_t3

0xe4b3,	// (0x0005bf21) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4b3,	// (0x0005bf21) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8c,	// (0x0005d6fa) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8c,	// (0x0005d6fa) list_single_fs_bigclock_indicator_pane_t

0xeb25,	// (0x0005c593) image3_infobar_fav_pane_ParamLimits

0xeb25,	// (0x0005c593) image3_infobar_fav_pane

0xeb35,	// (0x0005c5a3) image3_infobar_loc_pane_ParamLimits

0xeb35,	// (0x0005c5a3) image3_infobar_loc_pane

0xeb4b,	// (0x0005c5b9) image3_infobar_time_pane_ParamLimits

0xeb4b,	// (0x0005c5b9) image3_infobar_time_pane

0xcc33,	// (0x0005a6a1) image3_infobar_time_pane_g1

0xeb5b,	// (0x0005c5c9) image3_infobar_time_pane_t1

0xcc33,	// (0x0005a6a1) image3_infobar_loc_pane_g1

0xeb69,	// (0x0005c5d7) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x0005d8c6) image3_infobar_loc_pane_g

0xeb71,	// (0x0005c5df) image3_infobar_loc_pane_t1

0xcc33,	// (0x0005a6a1) image3_infobar_fav_pane_g1

0xeb7f,	// (0x0005c5ed) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x0005d8cb) image3_infobar_fav_pane_g

0xeb87,	// (0x0005c5f5) fs_bigclock_status_battery_pane

0xeb90,	// (0x0005c5fe) fs_bigclock_status_signal_pane

0xeb99,	// (0x0005c607) fs_bigclock_status_title_pane

0xeba2,	// (0x0005c610) fs_bigclock_status_signal_pane_g1

0xebab,	// (0x0005c619) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x0005d8d0) fs_bigclock_status_signal_pane_g

0xebb3,	// (0x0005c621) fs_bigclock_status_battery_pane_g1

0xebbc,	// (0x0005c62a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x0005d8d5) fs_bigclock_status_battery_pane_g

0xebc4,	// (0x0005c632) fs_bigclock_status_title_pane_t1

0xcc33,	// (0x0005a6a1) main_fs_bigclock_clock_pane_g1

0xebd2,	// (0x0005c640) main_fs_bigclock_clock_pane_g2

0xebd2,	// (0x0005c640) main_fs_bigclock_clock_pane_g3

0xebd2,	// (0x0005c640) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x0005d8da) main_fs_bigclock_clock_pane_g

0xebda,	// (0x0005c648) main_fs_bigclock_clock_pane_t1

0xebe8,	// (0x0005c656) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x0005d8e3) main_fs_bigclock_clock_pane_t

0x8e9f,	// (0x0005690d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8e9f,	// (0x0005690d) list_single_fs_bigclock_indicator_pane

0x8eb0,	// (0x0005691e) list_single_fs_bigclock_pane_ParamLimits

0x8eb0,	// (0x0005691e) list_single_fs_bigclock_pane

0xec00,	// (0x0005c66e) main_fs_bigclock_indicator_pane_t1

0xec0f,	// (0x0005c67d) list_single_fs_bigclock_pane_g1

0xec17,	// (0x0005c685) list_single_fs_bigclock_pane_t1

0xcc33,	// (0x0005a6a1) main_fs_bigclock_swipe_pane_g1

0xec5a,	// (0x0005c6c8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x0005d8f4) main_fs_bigclock_swipe_pane_g

0xec62,	// (0x0005c6d0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec62,	// (0x0005c6d0) main_fs_bigclock_swipe_pane_t1

0x3052,	// (0x00050ac0) call_type_pane_ParamLimits

0x98a4,	// (0x00057312) main_btmg_pane

0xa890,	// (0x000582fe) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa890,	// (0x000582fe) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0005d867) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0005d867) list_single_cale_mrui_row_pane_g

0xa916,	// (0x00058384) list_recal_vselct_arw_lo_pane

0xeaa0,	// (0x0005c50e) list_recal_vselct_arw_up_pane

0xa91e,	// (0x0005838c) list_recal_vselct_pane

0x8f13,	// (0x00056981) btmg_button_pane

0x8f1d,	// (0x0005698b) main_btmg_pane_g1

0x98a4,	// (0x00057312) bg_button_pane_cp044

0xec7f,	// (0x0005c6ed) btmg_button_pane_t1

0xc7ce,	// (0x0005a23c) aid_listscroll_gen

0x98fd,	// (0x0005736b) main_cntbar_detail_pane

0xe7d4,	// (0x0005c242) list_cmail_folder_pane

0xe7e4,	// (0x0005c252) sp_fs_scroll_pane_cp03_ParamLimits

0x0a18,	// (0x0004e486) list_single_fs_dyc_pane_cp01_ParamLimits

0x0a18,	// (0x0004e486) list_single_fs_dyc_pane_cp01

0xec8d,	// (0x0005c6fb) aid_size_cmail_indent

0xa996,	// (0x00058404) list_single_dyc_row_pane_cp01

0x8f57,	// (0x000569c5) cntbar_detail_list_pane_ParamLimits

0x8f57,	// (0x000569c5) cntbar_detail_list_pane

0x8fa9,	// (0x00056a17) main_cntbar_detail_cont_pane_ParamLimits

0x8fa9,	// (0x00056a17) main_cntbar_detail_cont_pane

0x3046,	// (0x00050ab4) scroll_pane_cp032_ParamLimits

0x3046,	// (0x00050ab4) scroll_pane_cp032

0x8fbd,	// (0x00056a2b) cntbar_detail_list_event_pane_ParamLimits

0x8fbd,	// (0x00056a2b) cntbar_detail_list_event_pane

0x8f69,	// (0x000569d7) cntbar_detail_list_shct_pane

0xad31,	// (0x0005879f) aid_list_gen

0xec96,	// (0x0005c704) aid_scroll

0xec9f,	// (0x0005c70d) aid_size_touch_scroll_bar

0x78d8,	// (0x00055346) aid_list_double

0xeca8,	// (0x0005c716) aid_list_single

0x02b9,	// (0x0004dd27) aid_list_single_lg

0xa99f,	// (0x0005840d) aid_list_z_g_a_sm

0xa9a7,	// (0x00058415) aid_list_z_g_d

0x0a30,	// (0x0004e49e) aid_txt_z_prm

0x0a3e,	// (0x0004e4ac) aid_txt_z_prm_cp01

0x0a4c,	// (0x0004e4ba) aid_txt_z_sec

0x8fcd,	// (0x00056a3b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8fcd,	// (0x00056a3b) main_cntbar_detail_cont_pane_g1

0x8fe1,	// (0x00056a4f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8fe1,	// (0x00056a4f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x0005d8f9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x0005d8f9) main_cntbar_detail_cont_pane_g

0xecb1,	// (0x0005c71f) main_cntbar_detail_cont_pane_t1

0xecbf,	// (0x0005c72d) main_cntbar_detail_cont_pane_t2

0xeccd,	// (0x0005c73b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x0005d8fe) main_cntbar_detail_cont_pane_t

0x8ff1,	// (0x00056a5f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ff1,	// (0x00056a5f) cell_cntbar_detail_list_shct_pane

0xecdb,	// (0x0005c749) cntbar_detail_list_shct_pane_g1

0xece4,	// (0x0005c752) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x0005d905) cntbar_detail_list_shct_pane_g

0x9003,	// (0x00056a71) cntbar_detail_list_event_pane_g1_ParamLimits

0x9003,	// (0x00056a71) cntbar_detail_list_event_pane_g1

0x900f,	// (0x00056a7d) cntbar_detail_list_event_pane_g2_ParamLimits

0x900f,	// (0x00056a7d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x0005d90a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x0005d90a) cntbar_detail_list_event_pane_g

0x907d,	// (0x00056aeb) cntbar_detail_list_event_pane_t1_ParamLimits

0x907d,	// (0x00056aeb) cntbar_detail_list_event_pane_t1

0x9092,	// (0x00056b00) cntbar_detail_list_event_pane_t2_ParamLimits

0x9092,	// (0x00056b00) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0005d917) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0005d917) cntbar_detail_list_event_pane_t

0xcc33,	// (0x0005a6a1) cell_cntbar_detail_list_shct_pane_g1

0x33f8,	// (0x00050e66) navi_pane_mv_g3

0x98fd,	// (0x0005736b) main_cntbar_detail_pane_ParamLimits

0x98a4,	// (0x00057312) main_notif_wgt_pane

0xa3ed,	// (0x00057e5b) aid_tch_main_mp4_pane_g4

0xa5cb,	// (0x00058039) popup_slider_window_cp02

0xa90c,	// (0x0005837a) list_recal_day_event_pane

0x8f27,	// (0x00056995) cntbar_detail_btn_pane_ParamLimits

0x8f27,	// (0x00056995) cntbar_detail_btn_pane

0x8f3f,	// (0x000569ad) cntbar_detail_btn_pane_cp01_ParamLimits

0x8f3f,	// (0x000569ad) cntbar_detail_btn_pane_cp01

0x8f69,	// (0x000569d7) cntbar_detail_list_shct_pane_ParamLimits

0x8f79,	// (0x000569e7) cntbar_detail_pane_g1_ParamLimits

0x8f79,	// (0x000569e7) cntbar_detail_pane_g1

0x8f8d,	// (0x000569fb) cntbar_detail_pane_t1_ParamLimits

0x8f8d,	// (0x000569fb) cntbar_detail_pane_t1

0x901b,	// (0x00056a89) cntbar_detail_list_event_pane_g3_ParamLimits

0x901b,	// (0x00056a89) cntbar_detail_list_event_pane_g3

0x9033,	// (0x00056aa1) cntbar_detail_list_event_pane_g4_ParamLimits

0x9033,	// (0x00056aa1) cntbar_detail_list_event_pane_g4

0x904b,	// (0x00056ab9) cntbar_detail_list_event_pane_g5_ParamLimits

0x904b,	// (0x00056ab9) cntbar_detail_list_event_pane_g5

0x9063,	// (0x00056ad1) cntbar_detail_list_event_pane_g6_ParamLimits

0x9063,	// (0x00056ad1) cntbar_detail_list_event_pane_g6

0x90a7,	// (0x00056b15) cntbar_detail_list_event_pane_t3_ParamLimits

0x90a7,	// (0x00056b15) cntbar_detail_list_event_pane_t3

0x90b9,	// (0x00056b27) popup_notif_wgt_window_ParamLimits

0x90b9,	// (0x00056b27) popup_notif_wgt_window

0x90d2,	// (0x00056b40) popup_submenu_window_cp01_ParamLimits

0x90d2,	// (0x00056b40) popup_submenu_window_cp01

0xb3c9,	// (0x00058e37) bg_popup_window_pane_cp10

0xeced,	// (0x0005c75b) listscroll_notif_wgt_pane

0xecff,	// (0x0005c76d) list_notif_wgt_window

0xed08,	// (0x0005c776) scroll_pane_cp033

0x90e6,	// (0x00056b54) list_notif_wgt_row_pane_ParamLimits

0x90e6,	// (0x00056b54) list_notif_wgt_row_pane

0xed11,	// (0x0005c77f) aid_size_list_notif_wgt_del

0xed1e,	// (0x0005c78c) list_notif_wgt_row_pane_g1

0xed2a,	// (0x0005c798) list_notif_wgt_row_pane_g2

0xed36,	// (0x0005c7a4) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x0005d91e) list_notif_wgt_row_pane_g

0xed43,	// (0x0005c7b1) list_notif_wgt_row_pane_t1

0xed58,	// (0x0005c7c6) list_notif_wgt_row_pane_t2

0xed6a,	// (0x0005c7d8) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x0005d925) list_notif_wgt_row_pane_t

0xd84d,	// (0x0005b2bb) list_recal_day_event_pane_g1

0xed7c,	// (0x0005c7ea) list_recal_day_event_pane_t1

0x98a4,	// (0x00057312) bg_button_pane_cp045

0xed8b,	// (0x0005c7f9) cntbar_detail_btn_pane_t1

0xc7e2,	// (0x0005a250) main_callh_pane_ParamLimits

0xc7e2,	// (0x0005a250) main_callh_pane

0x98a4,	// (0x00057312) main_coverflow0_pane

0x98a4,	// (0x00057312) main_wgtman_pane

0x8494,	// (0x00055f02) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8494,	// (0x00055f02) main_fs_bigclock_unlock_btn_pane

0x89c1,	// (0x0005642f) bg_button_pane_cp16

0x89d1,	// (0x0005643f) cell_tport_appsw_pane_g3

0x90f6,	// (0x00056b64) cf0_flow_pane_ParamLimits

0x90f6,	// (0x00056b64) cf0_flow_pane

0xed99,	// (0x0005c807) listscroll_cf0_pane

0xeda4,	// (0x0005c812) main_cf0_pane_g1

0x910b,	// (0x00056b79) main_cf0_pane_t1_ParamLimits

0x910b,	// (0x00056b79) main_cf0_pane_t1

0x9122,	// (0x00056b90) main_cf0_pane_t2_ParamLimits

0x9122,	// (0x00056b90) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x0005d931) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x0005d931) main_cf0_pane_t

0xedb6,	// (0x0005c824) scroll_pane_cp11

0x9139,	// (0x00056ba7) cf0_flow_pane_g1

0x9145,	// (0x00056bb3) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x0005d936) cf0_flow_pane_g

0x9151,	// (0x00056bbf) cf0_flow_pane_t1

0x98a4,	// (0x00057312) main_call6_pane

0x98a4,	// (0x00057312) main_calllock_pane

0x9163,	// (0x00056bd1) call6_btn_grp_pane_ParamLimits

0x9163,	// (0x00056bd1) call6_btn_grp_pane

0x917d,	// (0x00056beb) call6_pane_g1_ParamLimits

0x917d,	// (0x00056beb) call6_pane_g1

0x9193,	// (0x00056c01) popup_call6_1st_window_ParamLimits

0x9193,	// (0x00056c01) popup_call6_1st_window

0x91a4,	// (0x00056c12) popup_call6_2nd_window_ParamLimits

0x91a4,	// (0x00056c12) popup_call6_2nd_window

0x91b5,	// (0x00056c23) cell_call6_btn_pane_ParamLimits

0x91b5,	// (0x00056c23) cell_call6_btn_pane

0xb3c9,	// (0x00058e37) bg_popup_call2_in_pane_cp03

0xedc1,	// (0x0005c82f) popup_call6_1st_window_g1

0xedc9,	// (0x0005c837) popup_call6_1st_window_g2

0xedd1,	// (0x0005c83f) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0005d93b) popup_call6_1st_window_g

0xedd9,	// (0x0005c847) popup_call6_1st_window_t1

0xede8,	// (0x0005c856) popup_call6_1st_window_t2

0xedf8,	// (0x0005c866) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x0005d942) popup_call6_1st_window_t

0xb3c9,	// (0x00058e37) bg_popup_call2_in_pane_cp04

0xedc1,	// (0x0005c82f) popup_call6_2nd_window_g1

0xedc9,	// (0x0005c837) popup_call6_2nd_window_g2

0xedd1,	// (0x0005c83f) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0005d93b) popup_call6_2nd_window_g

0xedd9,	// (0x0005c847) popup_call6_2nd_window_t1

0x98a4,	// (0x00057312) bg_button_pane_cp15

0xee08,	// (0x0005c876) cell_call6_btn_pane_g1

0xee11,	// (0x0005c87f) cell_call6_btn_pane_t1

0x91c9,	// (0x00056c37) listscroll_wgtman_pane_ParamLimits

0x91c9,	// (0x00056c37) listscroll_wgtman_pane

0x91ec,	// (0x00056c5a) wgtman_btn_pane_ParamLimits

0x91ec,	// (0x00056c5a) wgtman_btn_pane

0xb28f,	// (0x00058cfd) aid_scroll_copy1

0xee40,	// (0x0005c8ae) list_wgtman_pane

0x922f,	// (0x00056c9d) wgtman_btn_pane_g1_ParamLimits

0x922f,	// (0x00056c9d) wgtman_btn_pane_g1

0x925b,	// (0x00056cc9) wgtman_btn_pane_t1_ParamLimits

0x925b,	// (0x00056cc9) wgtman_btn_pane_t1

0xee4a,	// (0x0005c8b8) wgtman_btn_pane_t2_ParamLimits

0xee4a,	// (0x0005c8b8) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0005d949) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0005d949) wgtman_btn_pane_t

0xa74c,	// (0x000581ba) listrow_wgtman_pane_ParamLimits

0xa74c,	// (0x000581ba) listrow_wgtman_pane

0x9298,	// (0x00056d06) listrow_wgtman_pane_g1

0x92a5,	// (0x00056d13) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0005d94e) listrow_wgtman_pane_g

0x0a5a,	// (0x0004e4c8) listrow_wgtman_pane_t1

0x0a72,	// (0x0004e4e0) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x0005d953) listrow_wgtman_pane_t

0x0a98,	// (0x0004e506) wait_bar_pane_cp09

0xee61,	// (0x0005c8cf) main_calllock_btn_pane

0xee6b,	// (0x0005c8d9) main_calllock_pane_g1

0x98a4,	// (0x00057312) bg_button_pane_cp17

0xee77,	// (0x0005c8e5) main_calllock_btn_pane_g1

0xee80,	// (0x0005c8ee) main_calllock_btn_pane_t1

0x98a4,	// (0x00057312) main_dialer3_pane

0x98a4,	// (0x00057312) main_fmrd2_pane

0xcc33,	// (0x0005a6a1) main_fs_bigclock_unlock_btn_pane_g1

0xee97,	// (0x0005c905) main_fs_bigclock_unlock_btn_pane_t1

0x92c3,	// (0x00056d31) area_fmrd2_info_pane_ParamLimits

0x92c3,	// (0x00056d31) area_fmrd2_info_pane

0x92d2,	// (0x00056d40) area_fmrd2_visual_pane_ParamLimits

0x92d2,	// (0x00056d40) area_fmrd2_visual_pane

0x92e0,	// (0x00056d4e) fmrd2_indi_pane_ParamLimits

0x92e0,	// (0x00056d4e) fmrd2_indi_pane

0x92ed,	// (0x00056d5b) area_fmrd2_visual_pane_g1

0x92f5,	// (0x00056d63) area_fmrd2_visual_pane_t1

0x9305,	// (0x00056d73) area_fmrd2_visual_pane_t2

0x9315,	// (0x00056d83) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0005d95d) area_fmrd2_visual_pane_t

0x9325,	// (0x00056d93) area_fmrd2_info_pane_g1

0x932d,	// (0x00056d9b) area_fmrd2_info_pane_t1

0x933d,	// (0x00056dab) area_fmrd2_info_pane_t2

0x934d,	// (0x00056dbb) area_fmrd2_info_pane_t3

0x935d,	// (0x00056dcb) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x0005d964) area_fmrd2_info_pane_t

0x936d,	// (0x00056ddb) fmrd2_indi_pane_t1

0x937d,	// (0x00056deb) fmrd2_indi_pane_t2

0x938d,	// (0x00056dfb) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0005d96d) fmrd2_indi_pane_t

0xe41f,	// (0x0005be8d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe41f,	// (0x0005be8d) list_single_fs_bigclock_indicator_pane_g5

0xe4c8,	// (0x0005bf36) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4c8,	// (0x0005bf36) list_single_fs_bigclock_indicator_pane_t5

0x8bc9,	// (0x00056637) aid_cell_bcale_month_pane_ParamLimits

0x8bc9,	// (0x00056637) aid_cell_bcale_month_pane

0x8be7,	// (0x00056655) bcale_month_pane_ParamLimits

0x8be7,	// (0x00056655) bcale_month_pane

0x8c09,	// (0x00056677) bcale_preview_pane_ParamLimits

0x8c09,	// (0x00056677) bcale_preview_pane

0xec17,	// (0x0005c685) list_single_fs_bigclock_pane_t1_ParamLimits

0xec36,	// (0x0005c6a4) list_single_fs_bigclock_pane_t2_ParamLimits

0xec36,	// (0x0005c6a4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x0005d8ef) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0005d8ef) list_single_fs_bigclock_pane_t

0xee8f,	// (0x0005c8fd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0005d958) main_fs_bigclock_unlock_btn_pane_g

0x939d,	// (0x00056e0b) aid_dia3_key_size_ParamLimits

0x939d,	// (0x00056e0b) aid_dia3_key_size

0x93ac,	// (0x00056e1a) aid_dia3_listrow_size_ParamLimits

0x93ac,	// (0x00056e1a) aid_dia3_listrow_size

0x93c1,	// (0x00056e2f) dia3_keypad_fun_pane_ParamLimits

0x93c1,	// (0x00056e2f) dia3_keypad_fun_pane

0x93dd,	// (0x00056e4b) dia3_keypad_num_pane_ParamLimits

0x93dd,	// (0x00056e4b) dia3_keypad_num_pane

0x93f6,	// (0x00056e64) dia3_listscroll_pane_ParamLimits

0x93f6,	// (0x00056e64) dia3_listscroll_pane

0x9409,	// (0x00056e77) dia3_numentry_pane_ParamLimits

0x9409,	// (0x00056e77) dia3_numentry_pane

0xeea5,	// (0x0005c913) dia3_list_pane

0xeeb0,	// (0x0005c91e) scroll_pane_cp12

0x98a4,	// (0x00057312) bg_dia3_numentry_pane

0x941d,	// (0x00056e8b) dia3_numentry_pane_t1

0x942c,	// (0x00056e9a) cell_dia3_key_num_pane

0x9434,	// (0x00056ea2) cell_dia3_key0_fun_pane_ParamLimits

0x9434,	// (0x00056ea2) cell_dia3_key0_fun_pane

0x9448,	// (0x00056eb6) cell_dia3_key1_fun_pane_ParamLimits

0x9448,	// (0x00056eb6) cell_dia3_key1_fun_pane

0x9460,	// (0x00056ece) dia3_listrow_pane

0xe11d,	// (0x0005bb8b) bg_dia3_numentry_pane_g1

0x98a4,	// (0x00057312) bg_button_pane_cp21

0xeebb,	// (0x0005c929) cell_dia3_key_num_pane_t1

0xeec9,	// (0x0005c937) cell_dia3_key_num_pane_t2

0xeed8,	// (0x0005c946) cell_dia3_key_num_pane_t3

0xeee7,	// (0x0005c955) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x0005d974) cell_dia3_key_num_pane_t

0x98a4,	// (0x00057312) bg_button_pane_cp19

0x9472,	// (0x00056ee0) cell_dia3_key0_fun_pane_g1

0x98a4,	// (0x00057312) bg_button_pane_cp20

0x947a,	// (0x00056ee8) cell_dia3_key1_fun_pane_g1

0x9482,	// (0x00056ef0) area_left_week_number_pane

0x9490,	// (0x00056efe) area_top_day_name_pane

0x94a3,	// (0x00056f11) frame_month_view_pane

0xeef6,	// (0x0005c964) grid_month_view_pane

0x94b8,	// (0x00056f26) cell_top_day_name_pane_ParamLimits

0x94b8,	// (0x00056f26) cell_top_day_name_pane

0x94e7,	// (0x00056f55) cell_area_left_week_number_pane_ParamLimits

0x94e7,	// (0x00056f55) cell_area_left_week_number_pane

0x94fb,	// (0x00056f69) cell_month_view_pane_ParamLimits

0x94fb,	// (0x00056f69) cell_month_view_pane

0xef04,	// (0x0005c972) frm_month_g1

0x952a,	// (0x00056f98) frm_month_g2

0x953d,	// (0x00056fab) frm_month_g3

0x9550,	// (0x00056fbe) frm_month_g4

0x9563,	// (0x00056fd1) frm_month_g5

0x9576,	// (0x00056fe4) frm_month_g6

0x9589,	// (0x00056ff7) frm_month_g7

0xef11,	// (0x0005c97f) frm_month_g8

0x959e,	// (0x0005700c) frm_month_g9

0x95ae,	// (0x0005701c) frm_month_g10

0x95be,	// (0x0005702c) frm_month_g11

0x95ce,	// (0x0005703c) frm_month_g12

0x95e0,	// (0x0005704e) frm_month_g13

0x95f4,	// (0x00057062) frm_month_g14

0x9608,	// (0x00057076) frm_month_g15

0x961c,	// (0x0005708a) frm_month_g16

0x000f,

0xff0f,	// (0x0005d97d) frm_month_g

0xef1e,	// (0x0005c98c) cell_top_day_name_pane_t1

0x9630,	// (0x0005709e) cell_area_left_week_number_pane_g1

0x963c,	// (0x000570aa) cell_area_left_week_number_pane_t1

0xce63,	// (0x0005a8d1) cell_month_view_pane_g1

0x964f,	// (0x000570bd) cell_month_view_pane_t1

0x98a4,	// (0x00057312) main_fps_pane

0xe6b8,	// (0x0005c126) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6b8,	// (0x0005c126) cmail_ddmenu_btn02_pane_cp1

0xe6d4,	// (0x0005c142) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6d4,	// (0x0005c142) cmail_ddmenu_btn02_pane_cp2

0x8e10,	// (0x0005687e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e10,	// (0x0005687e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x0005d8a2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x0005d8a2) cmail_ddmenu_btn02_pane_g

0x8e31,	// (0x0005689f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e31,	// (0x0005689f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0005d8a7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0005d8a7) cmail_ddmenu_btn02_pane_t

0x9662,	// (0x000570d0) fps_text_pane_ParamLimits

0x9662,	// (0x000570d0) fps_text_pane

0x9679,	// (0x000570e7) main_fps_pane_g1_ParamLimits

0x9679,	// (0x000570e7) main_fps_pane_g1

0x9691,	// (0x000570ff) wait_bar_pane_cp010_ParamLimits

0x9691,	// (0x000570ff) wait_bar_pane_cp010

0x96a4,	// (0x00057112) fps_text_pane_t1_ParamLimits

0x96a4,	// (0x00057112) fps_text_pane_t1

0xdd37,	// (0x0005b7a5) cam4_image_uncrop_pane_g1

0xdd40,	// (0x0005b7ae) cam4_image_uncrop_pane_g2

0x67fc,	// (0x0005426a) cam4_image_uncrop_pane_g3

0x6805,	// (0x00054273) cam4_image_uncrop_pane_g4

0x0003,

0xf8fb,	// (0x0005d369) cam4_image_uncrop_pane_g

0x9460,	// (0x00056ece) dia3_listrow_pane_ParamLimits

0x98a4,	// (0x00057312) main_phob2_pane

0x8990,	// (0x000563fe) cell_tport_appsw_pane_cp02_ParamLimits

0x8990,	// (0x000563fe) cell_tport_appsw_pane_cp02

0x89a4,	// (0x00056412) cell_tport_appsw_pane_cp03_ParamLimits

0x89a4,	// (0x00056412) cell_tport_appsw_pane_cp03

0x98a4,	// (0x00057312) phob2_contact_card_pane

0x98a4,	// (0x00057312) phob2_listscroll_pane

0xef31,	// (0x0005c99f) phob2_list_pane

0xef39,	// (0x0005c9a7) scroll_pane_cp034

0x96bc,	// (0x0005712a) phob2_cc_data_pane_ParamLimits

0x96bc,	// (0x0005712a) phob2_cc_data_pane

0x96dd,	// (0x0005714b) phob2_cc_listscroll_pane_ParamLimits

0x96dd,	// (0x0005714b) phob2_cc_listscroll_pane

0x96ff,	// (0x0005716d) list_double_large_graphic_phob2_pane_ParamLimits

0x96ff,	// (0x0005716d) list_double_large_graphic_phob2_pane

0x9713,	// (0x00057181) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9713,	// (0x00057181) list_double_large_graphic_phob2_pane_g1

0x0aaa,	// (0x0004e518) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0aaa,	// (0x0004e518) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x0005d99e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x0005d99e) list_double_large_graphic_phob2_pane_g

0x0ab6,	// (0x0004e524) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0ab6,	// (0x0004e524) list_double_large_graphic_phob2_pane_t1

0x0acb,	// (0x0004e539) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0acb,	// (0x0004e539) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x0005d9a3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x0005d9a3) list_double_large_graphic_phob2_pane_t

0x98a4,	// (0x00057312) list_highlight_pane_cp024

0xef41,	// (0x0005c9af) phob2_cc_button_pane

0x9729,	// (0x00057197) phob2_cc_data_pane_g1_ParamLimits

0x9729,	// (0x00057197) phob2_cc_data_pane_g1

0x973f,	// (0x000571ad) phob2_cc_data_pane_g2_ParamLimits

0x973f,	// (0x000571ad) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0005d9a8) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0005d9a8) phob2_cc_data_pane_g

0x9751,	// (0x000571bf) phob2_cc_data_pane_t1_ParamLimits

0x9751,	// (0x000571bf) phob2_cc_data_pane_t1

0x9769,	// (0x000571d7) phob2_cc_data_pane_t2_ParamLimits

0x9769,	// (0x000571d7) phob2_cc_data_pane_t2

0x9783,	// (0x000571f1) phob2_cc_data_pane_t3_ParamLimits

0x9783,	// (0x000571f1) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x0005d9ad) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x0005d9ad) phob2_cc_data_pane_t

0xef49,	// (0x0005c9b7) phob2_cc_list_pane_ParamLimits

0xef49,	// (0x0005c9b7) phob2_cc_list_pane

0xd8f8,	// (0x0005b366) scroll_pane_cp035_ParamLimits

0xd8f8,	// (0x0005b366) scroll_pane_cp035

0x98fd,	// (0x0005736b) bg_button_pane_cp033

0xef55,	// (0x0005c9c3) phob2_cc_button_pane_g1

0xef61,	// (0x0005c9cf) phob2_cc_button_pane_t1

0xef76,	// (0x0005c9e4) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x0005d9b4) phob2_cc_button_pane_t

0x979d,	// (0x0005720b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x979d,	// (0x0005720b) list_double_large_graphic_phob2_cc_pane

0x97b1,	// (0x0005721f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x97b1,	// (0x0005721f) list_double_large_graphic_phob2_cc_pane_g1

0x0add,	// (0x0004e54b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0add,	// (0x0004e54b) list_double_large_graphic_phob2_cc_pane_g2

0x0ae9,	// (0x0004e557) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0ae9,	// (0x0004e557) list_double_large_graphic_phob2_cc_pane_g3

0x0af5,	// (0x0004e563) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0af5,	// (0x0004e563) list_double_large_graphic_phob2_cc_pane_g4

0x0b01,	// (0x0004e56f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0b01,	// (0x0004e56f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x0005d9b9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x0005d9b9) list_double_large_graphic_phob2_cc_pane_g

0x0b0d,	// (0x0004e57b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0b0d,	// (0x0004e57b) list_double_large_graphic_phob2_cc_pane_t1

0x0b36,	// (0x0004e5a4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0b36,	// (0x0004e5a4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x0005d9c4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x0005d9c4) list_double_large_graphic_phob2_cc_pane_t

0xef88,	// (0x0005c9f6) list_highlight_pane_cp025_ParamLimits

0xef88,	// (0x0005c9f6) list_highlight_pane_cp025

0x98fd,	// (0x0005736b) bg_button_pane_cp033_ParamLimits

0xef55,	// (0x0005c9c3) phob2_cc_button_pane_g1_ParamLimits

0xef61,	// (0x0005c9cf) phob2_cc_button_pane_t1_ParamLimits

0xef76,	// (0x0005c9e4) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x0005d9b4) phob2_cc_button_pane_t_ParamLimits

0x0da5,	// (0x0004e813) popup_wgtman_window

0xd739,	// (0x0005b1a7) scroll_pane_cp038

0x9211,	// (0x00056c7f) wgtman_btn_pane_cp_01_ParamLimits

0x9211,	// (0x00056c7f) wgtman_btn_pane_cp_01

0xef96,	// (0x0005ca04) wgtman_content_pane

0xef9f,	// (0x0005ca0d) wgtman_heading_pane

0x98a4,	// (0x00057312) bg_heading_pane_cp02

0xefa8,	// (0x0005ca16) wgtman_heading_pane_g1

0xefb0,	// (0x0005ca1e) wgtman_heading_pane_t1

0xefbe,	// (0x0005ca2c) scroll_pane_cp036

0xefc6,	// (0x0005ca34) wgtman_list_pane

0xefce,	// (0x0005ca3c) wgtman_list_pane_t1_ParamLimits

0xefce,	// (0x0005ca3c) wgtman_list_pane_t1

0xa629,	// (0x00058097) cam4_grid_pane

0x0145,	// (0x0004dbb3) bg_button_pane_cp015_ParamLimits

0x7488,	// (0x00054ef6) bg_button_pane_cp016_ParamLimits

0x749b,	// (0x00054f09) bg_button_pane_cp017_ParamLimits

0x018d,	// (0x0004dbfb) popup_vitu2_query_window_g3_ParamLimits

0x018d,	// (0x0004dbfb) popup_vitu2_query_window_g3

0x0208,	// (0x0004dc76) popup_vitu2_query_window_t6_ParamLimits

0x0208,	// (0x0004dc76) popup_vitu2_query_window_t6

0x0233,	// (0x0004dca1) popup_vitu2_query_window_t7_ParamLimits

0x0233,	// (0x0004dca1) popup_vitu2_query_window_t7

0xdd37,	// (0x0005b7a5) cam4_grid_pane_g1

0xdd40,	// (0x0005b7ae) cam4_grid_pane_g2

0xefe8,	// (0x0005ca56) cam4_grid_pane_g3

0xeff1,	// (0x0005ca5f) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x0005d9c9) cam4_grid_pane_g

0x1e6d,	// (0x0004f8db) aid_placing_vt_slider_lsc_ParamLimits

0x215a,	// (0x0004fbc8) vidtel_button_pane_ParamLimits

0x215a,	// (0x0004fbc8) vidtel_button_pane

0xeffc,	// (0x0005ca6a) bg_button_pane_cp034

0x97bd,	// (0x0005722b) vidtel_button_pane_g1

0xf006,	// (0x0005ca74) vidtel_button_pane_t1

0xd83d,	// (0x0005b2ab) aid_size_vtel_slider_touch

0xd8f8,	// (0x0005b366) scroll_pane_cp039

0xe15b,	// (0x0005bbc9) ncim_query_button_pane_cp01_ParamLimits

0xe17a,	// (0x0005bbe8) ncimui_query_pane_g1_ParamLimits

0x98fd,	// (0x0005736b) input_focus_pane_cp012_ParamLimits

0xe19f,	// (0x0005bc0d) ncim_query_entry_pane_t1_ParamLimits

0xd8f8,	// (0x0005b366) scroll_pane_cp039_ParamLimits

0x336a,	// (0x00050dd8) navi_pane_bcale_mc_g1

0x3372,	// (0x00050de0) navi_pane_bcale_mc_t1

0xe71d,	// (0x0005c18b) main_sp_fs_email_pane_g1

0xe729,	// (0x0005c197) main_sp_fs_email_pane_g2

0x0001,

0xfcf2,	// (0x0005d760) main_sp_fs_email_pane_g

0xe9a5,	// (0x0005c413) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9a5,	// (0x0005c413) list_single_cale_mrui_row_pane_g3

0x0a0e,	// (0x0004e47c) list_single_recal_day_pane_g5_event_pane

0xa96a,	// (0x000583d8) list_single_recal_day_pane_g7

0xf014,	// (0x0005ca82) list_recal_day_event_pane_cp01

0xf01d,	// (0x0005ca8b) list_recal_vselct_arw_lo_pane_cp01

0xf025,	// (0x0005ca93) list_recal_vselct_arw_up_pane_cp01

0xf02d,	// (0x0005ca9b) list_recal_vselct_pane_cp01

0xd84d,	// (0x0005b2bb) list_recal_day_event_pane_cp01_g1

0xa9af,	// (0x0005841d) list_recal_day_event_pane_cp01_t1

0xa972,	// (0x000583e0) list_single_recal_day_pane_t1_ParamLimits

0xa984,	// (0x000583f2) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x0005d8b7) list_single_recal_day_pane_t_ParamLimits

0x9f79,	// (0x000579e7) bg_notes_pane_ParamLimits

0xa024,	// (0x00057a92) list_notes_pane_ParamLimits

0x10f2,	// (0x0004eb60) scroll_pane_cp06_ParamLimits

0xa060,	// (0x00057ace) main_notes_pane_ParamLimits

0x98a4,	// (0x00057312) main_welc_pane

0x97c5,	// (0x00057233) main_welc_body_pane_ParamLimits

0x97c5,	// (0x00057233) main_welc_body_pane

0x97e4,	// (0x00057252) main_welc_opti_pane_ParamLimits

0x97e4,	// (0x00057252) main_welc_opti_pane

0x982d,	// (0x0005729b) main_welc_pane_t1_ParamLimits

0x982d,	// (0x0005729b) main_welc_pane_t1

0xee20,	// (0x0005c88e) main_welc_body_row_pane_ParamLimits

0xee20,	// (0x0005c88e) main_welc_body_row_pane

0x984f,	// (0x000572bd) main_welc_opti_row_pane_ParamLimits

0x984f,	// (0x000572bd) main_welc_opti_row_pane

0xf037,	// (0x0005caa5) main_welc_opti_row_pane_g1

0xf03f,	// (0x0005caad) main_welc_opti_row_pane_t1

0xf04e,	// (0x0005cabc) main_welc_body_row_pane_t1

0xecf7,	// (0x0005c765) popup_notif_wgt_heading_pane

0xed11,	// (0x0005c77f) aid_size_list_notif_wgt_del_ParamLimits

0xed1e,	// (0x0005c78c) list_notif_wgt_row_pane_g1_ParamLimits

0xed2a,	// (0x0005c798) list_notif_wgt_row_pane_g2_ParamLimits

0xed36,	// (0x0005c7a4) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x0005d91e) list_notif_wgt_row_pane_g_ParamLimits

0xed43,	// (0x0005c7b1) list_notif_wgt_row_pane_t1_ParamLimits

0xed58,	// (0x0005c7c6) list_notif_wgt_row_pane_t2_ParamLimits

0xed6a,	// (0x0005c7d8) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x0005d925) list_notif_wgt_row_pane_t_ParamLimits

0x9298,	// (0x00056d06) listrow_wgtman_pane_g1_ParamLimits

0x92a5,	// (0x00056d13) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x0005d94e) listrow_wgtman_pane_g_ParamLimits

0x0a5a,	// (0x0004e4c8) listrow_wgtman_pane_t1_ParamLimits

0x0a72,	// (0x0004e4e0) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x0005d953) listrow_wgtman_pane_t_ParamLimits

0x0a98,	// (0x0004e506) wait_bar_pane_cp09_ParamLimits

0x98a4,	// (0x00057312) bg_popup_heading_pane_cp02

0xf05d,	// (0x0005cacb) popup_notif_wgt_heading_pane_g1

0xf065,	// (0x0005cad3) popup_notif_wgt_heading_pane_t1

0x98a4,	// (0x00057312) main_vids_pane

0x98a4,	// (0x00057312) vids_listscroll_pane

0x985f,	// (0x000572cd) scroll_pane_cp040

0x98a4,	// (0x00057312) vids_list_pane

0x986a,	// (0x000572d8) vids_list_double_pane_ParamLimits

0x986a,	// (0x000572d8) vids_list_double_pane

0x987b,	// (0x000572e9) vids_list_double_pane_g1

0x9884,	// (0x000572f2) vids_list_double_pane_t1

0x9894,	// (0x00057302) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x0005d9d7) vids_list_double_pane_t

0x98fd,	// (0x0005736b) main_ncimui_pane_ParamLimits

0x8030,	// (0x00055a9e) main_ncimui_pane_g1_ParamLimits

0x803c,	// (0x00055aaa) main_ncimui_pane_g2_ParamLimits

0x803c,	// (0x00055aaa) main_ncimui_pane_g2

0x0001,

0xfbf7,	// (0x0005d665) main_ncimui_pane_g_ParamLimits

0xfbf7,	// (0x0005d665) main_ncimui_pane_g

0x9803,	// (0x00057271) main_welc_pane_g1_ParamLimits

0x9803,	// (0x00057271) main_welc_pane_g1

0x9818,	// (0x00057286) main_welc_pane_g2_ParamLimits

0x9818,	// (0x00057286) main_welc_pane_g2

0x0001,

0xff64,	// (0x0005d9d2) main_welc_pane_g_ParamLimits

0xff64,	// (0x0005d9d2) main_welc_pane_g

0x9f79,	// (0x000579e7) listscroll_mce_pane_ParamLimits

0x344a,	// (0x00050eb8) wait_bar_pane_cp10

0xc7d6,	// (0x0005a244) main_cale_day_pane_ParamLimits

0xc7d6,	// (0x0005a244) main_cale_week_pane_ParamLimits

0x9f79,	// (0x000579e7) main_messa_pane_ParamLimits

0x5aba,	// (0x00053528) main_clock2_btn_pane_ParamLimits

0x5aba,	// (0x00053528) main_clock2_btn_pane

0xcfeb,	// (0x0005aa59) main_clock2_btn_pane_cp01_ParamLimits

0xcfeb,	// (0x0005aa59) main_clock2_btn_pane_cp01

0xe976,	// (0x0005c3e4) list_cale_mrui_pane_ParamLimits

0xedae,	// (0x0005c81c) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0005d92c) main_cf0_pane_g

0x9482,	// (0x00056ef0) area_left_week_number_pane_ParamLimits

0x9490,	// (0x00056efe) area_top_day_name_pane_ParamLimits

0x94a3,	// (0x00056f11) frame_month_view_pane_ParamLimits

0xeef6,	// (0x0005c964) grid_month_view_pane_ParamLimits

0xef04,	// (0x0005c972) frm_month_g1_ParamLimits

0x952a,	// (0x00056f98) frm_month_g2_ParamLimits

0x953d,	// (0x00056fab) frm_month_g3_ParamLimits

0x9550,	// (0x00056fbe) frm_month_g4_ParamLimits

0x9563,	// (0x00056fd1) frm_month_g5_ParamLimits

0x9576,	// (0x00056fe4) frm_month_g6_ParamLimits

0x9589,	// (0x00056ff7) frm_month_g7_ParamLimits

0xef11,	// (0x0005c97f) frm_month_g8_ParamLimits

0x959e,	// (0x0005700c) frm_month_g9_ParamLimits

0x95ae,	// (0x0005701c) frm_month_g10_ParamLimits

0x95be,	// (0x0005702c) frm_month_g11_ParamLimits

0x95ce,	// (0x0005703c) frm_month_g12_ParamLimits

0x95e0,	// (0x0005704e) frm_month_g13_ParamLimits

0x95f4,	// (0x00057062) frm_month_g14_ParamLimits

0x9608,	// (0x00057076) frm_month_g15_ParamLimits

0x961c,	// (0x0005708a) frm_month_g16_ParamLimits

0xff0f,	// (0x0005d97d) frm_month_g_ParamLimits

0xef1e,	// (0x0005c98c) cell_top_day_name_pane_t1_ParamLimits

0x9630,	// (0x0005709e) cell_area_left_week_number_pane_g1_ParamLimits

0x963c,	// (0x000570aa) cell_area_left_week_number_pane_t1_ParamLimits

0xce63,	// (0x0005a8d1) cell_month_view_pane_g1_ParamLimits

0x964f,	// (0x000570bd) cell_month_view_pane_t1_ParamLimits

0x9f71,	// (0x000579df) main_clock2_btn_pane_g1

0xf073,	// (0x0005cae1) main_clock2_btn_pane_t1

0x98fd,	// (0x0005736b) listscroll_cmail_pane_ParamLimits

0xe71d,	// (0x0005c18b) main_sp_fs_email_pane_g1_ParamLimits

0xe729,	// (0x0005c197) main_sp_fs_email_pane_g2_ParamLimits

0xfcf2,	// (0x0005d760) main_sp_fs_email_pane_g_ParamLimits

0xea81,	// (0x0005c4ef) list_recal_day_pane_ParamLimits

0xea92,	// (0x0005c500) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
